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

#include "todevice.hh"

#include <click/args.hh>
#include <click/error.hh>
#include <click/router.hh>
#include <click/standard/scheduleinfo.hh>
#include <click/task.hh>
#include <stdio.h>

#ifdef xmit
#undef xmit
#endif
#ifdef recv
#undef recv
#endif

#include <uk/alloc.h>
#include <uk/netdev.h>

CLICK_DECLS

ToDevice::ToDevice()
	: _task(this)
{
}

ToDevice::~ToDevice()
{
}

int
ToDevice::configure(Vector<String> &conf, ErrorHandler *errh)
{
	_devid = 0;

	uk_pr_info("ToDevice::configure %p\n", this);
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

int
ToDevice::initialize(ErrorHandler *errh __unused)
{
	/* uk netdev is initialized in the corresponding FromDevice */
	return 0;
}

void
ToDevice::cleanup(CleanupStage stage __unused)
{
	/* any potentially necessary uk netdev cleanup is done in the
	 * corresponding FromDevice
	 */
}

void
ToDevice::push(int port, Packet *p)
{
	int ret;
	struct uk_netbuf *buf;

	uk_pr_debug("push() packet %p (len %u) -> %d\n", p, p->length(), port);
	buf = uk_netbuf_alloc_buf(uk_alloc_get_default(),
			p->length()+_dev_info.nb_encap_rx, _dev_info.ioalign,
			_dev_info.nb_encap_rx, 0, NULL);
	if (!buf) {
		uk_pr_crit("Failed to allocate netbuf for sending");
		return;
	}
	memcpy(buf->data, p->data(), p->length());
	buf->len = p->length();
	do {
		ret = uk_netdev_tx_one(_dev, 0, buf);
	} while (uk_netdev_status_notready(ret));
	checked_output_push(port, p);
}

bool
ToDevice::run_task(Task *)
{
	/* no regular task scheduling needed, all work is done in push () */
	return false;
}

CLICK_ENDDECLS
EXPORT_ELEMENT(ToDevice)
