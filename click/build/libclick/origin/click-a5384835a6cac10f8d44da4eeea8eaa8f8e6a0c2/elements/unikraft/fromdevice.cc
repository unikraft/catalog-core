/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019, NEC Laboratories Europe GmbH, NEC Corporation.
 *               All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include "fromdevice.hh"

#include <click/args.hh>
#include <click/deque.hh>
#include <click/error.hh>
#include <click/standard/scheduleinfo.hh>
#include <click/task.hh>
#include <uk/netdev.h>

#ifdef xmit
#undef xmit
#endif
#ifdef recv
#undef recv
#endif

#include <uk/alloc.h>
#include <uk/netdev.h>

CLICK_DECLS

#define DESC_COUNT 0x100
#define BUFSIZE 2048

FromDevice::FromDevice()
	: _task(this)
{
}

FromDevice::~FromDevice()
{
}

int
FromDevice::configure(Vector<String> &conf, ErrorHandler *errh)
{
	_devid = 0;

	uk_pr_info("FromDevice::configure %p\n", this);
	if (Args(conf, this, errh)
			.read_p("DEVID", IntArg(), _devid)
			.complete() < 0)
		return -1;

	if (_devid < 0)
		return errh->error("Device ID must be >= 0");

	_dev = uk_netdev_get((unsigned int) _devid);
	if (!_dev)
		return errh->error("No such device %d", _devid);
	uk_netdev_info_get(_dev, &_dev_info);

	return 0;
}

extern "C" void
click_fromdevice_rx_callback(struct uk_netdev *dev __unused, /* we have all
				the information we need via the cookie */
		uint16_t queue_id, void *cookie)
{
	FromDevice *fromdevice = (FromDevice *)cookie;

	uk_pr_debug("FromDevice %p queue %u callback\n", cookie, queue_id);
	fromdevice->take_packets();
}

uint16_t
FromDevice::netdev_alloc_rxpkts(void *argp, struct uk_netbuf *pkts[],
		uint16_t count)
{
	int i;

	FromDevice *fd = static_cast<FromDevice *>(argp);
	for (i = 0; i < count; ++i) {
		pkts[i] = uk_netbuf_alloc_buf(uk_alloc_get_default(),
				BUFSIZE, fd->_dev_info.ioalign, fd->_dev_info.nb_encap_rx, 0, NULL);
		if (!pkts[i])
			return i;
		pkts[i]->len = BUFSIZE;
	}
	return count;
}

int
FromDevice::initialize(ErrorHandler *errh)
{
	struct uk_netdev_info dinf;
	struct uk_netdev_rxqueue_conf rx_conf;
	struct uk_netdev_txqueue_conf tx_conf;
	int rc;

	uk_pr_info("FromDevice::initialize %p device %p state %d\n",
			this, _dev, _dev->_data->state);
	uk_netdev_info_get(_dev, &dinf);
	rx_conf.s = uk_sched_current();
	rx_conf.a = uk_alloc_get_default();
	rx_conf.callback = click_fromdevice_rx_callback;
	rx_conf.callback_cookie = (void *)(this);
	rx_conf.alloc_rxpkts = &FromDevice::netdev_alloc_rxpkts;
	rx_conf.alloc_rxpkts_argp = this;
	if (uk_netdev_rxq_configure(_dev, 0, DESC_COUNT, &rx_conf))
		return errh->error("Failed to set up RX queue for device %d", _devid);
	tx_conf.a = uk_alloc_get_default();
	if (uk_netdev_txq_configure(_dev, 0, DESC_COUNT, &tx_conf))
		return errh->error("Failed to set up TX queue for device %d", _devid);
	if (uk_netdev_start(_dev))
		return errh->error("Failed to start device %d", _devid);
	rc = uk_netdev_rxq_intr_enable(_dev, 0);
		if (rc < 0)
			return errh->error("Failed to set up RX queue interrupt for device %d", _devid);
		else if (rc > 0)
			take_packets(); // empty the queue to enable interrupt
	ScheduleInfo::initialize_task(this, &_task, errh);
	_task.reschedule();
	return 0;

}

void
FromDevice::cleanup(CleanupStage stage)
{
	if (stage >= CLEANUP_INITIALIZED) {
		uk_netdev_rxq_intr_disable(_dev, 0);
	}
}

void
FromDevice::take_packets()
{
	int ret;
	int i = 0;
	struct uk_netbuf *buf = NULL;
	Packet *p;

	do {
		ret = uk_netdev_rx_one(_dev, 0, &buf);
		if (ret < 0)
			UK_CRASH("error receiving packets in FromDevice");
		if (uk_netdev_status_notready(ret)) {
			/* No (more) packets received */
			break;
		}

		++i;
		p = Packet::make(0, buf->data, buf->len, 0);
		p->set_timestamp_anno(Timestamp::now());
		output(0).push(p); /* memcpy's pkt */
		uk_netbuf_free(buf);
	} while (uk_netdev_status_more(ret));
	if (i)
		uk_pr_debug("took %d packets from the queue\n", i);
}

bool
FromDevice::run_task(Task *)
{
	/* if you're really desperate for less CPU usage
	 * until we have a proper blocking select()...
	struct timespec req;
	req.tv_sec = 0;
	req.tv_nsec = 1000000;
	nanosleep(&req, NULL);
	*/
	uk_sched_yield();
	_task.reschedule();
	return false;
}

CLICK_ENDDECLS
EXPORT_ELEMENT(FromDevice)
