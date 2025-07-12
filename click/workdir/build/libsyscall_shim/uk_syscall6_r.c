/* Auto generated file. DO NOT EDIT */


#include <uk/print.h>
#include <uk/syscall.h>
#include <uk/bits/syscall_linuxabi.h>

UK_SYSCALL_EXECENV_PROLOGUE_DEFINE(uk_syscall6_r, uk_syscall6_r_e,
				14, long, nr, long, arg1, long, arg2, long, arg3, long, arg4, long, arg5, long, arg6)

long __used uk_syscall6_r_e(struct ukarch_execenv *execenv)
{
	long ret;

	switch (execenv->regs.__syscall_rsyscall) {

#ifdef HAVE_uk_syscall_close
	case SYS_close:

#ifdef HAVE_uk_syscall_e_close
		ret = uk_syscall_r_e_close((long)execenv);
#else /* !HAVE_uk_syscall_e_close */
		ret = uk_syscall_r_close(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_close */

		break;

#endif /* HAVE_uk_syscall_close */

#ifdef HAVE_uk_syscall_dup
	case SYS_dup:

#ifdef HAVE_uk_syscall_e_dup
		ret = uk_syscall_r_e_dup((long)execenv);
#else /* !HAVE_uk_syscall_e_dup */
		ret = uk_syscall_r_dup(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_dup */

		break;

#endif /* HAVE_uk_syscall_dup */

#ifdef HAVE_uk_syscall_dup3
	case SYS_dup3:

#ifdef HAVE_uk_syscall_e_dup3
		ret = uk_syscall_r_e_dup3((long)execenv);
#else /* !HAVE_uk_syscall_e_dup3 */
		ret = uk_syscall_r_dup3(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_dup3 */

		break;

#endif /* HAVE_uk_syscall_dup3 */

#ifdef HAVE_uk_syscall_dup2
	case SYS_dup2:

#ifdef HAVE_uk_syscall_e_dup2
		ret = uk_syscall_r_e_dup2((long)execenv);
#else /* !HAVE_uk_syscall_e_dup2 */
		ret = uk_syscall_r_dup2(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_dup2 */

		break;

#endif /* HAVE_uk_syscall_dup2 */

#ifdef HAVE_uk_syscall_preadv2
	case SYS_preadv2:

#ifdef HAVE_uk_syscall_e_preadv2
		ret = uk_syscall_r_e_preadv2((long)execenv);
#else /* !HAVE_uk_syscall_e_preadv2 */
		ret = uk_syscall_r_preadv2(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_preadv2 */

		break;

#endif /* HAVE_uk_syscall_preadv2 */

#ifdef HAVE_uk_syscall_preadv
	case SYS_preadv:

#ifdef HAVE_uk_syscall_e_preadv
		ret = uk_syscall_r_e_preadv((long)execenv);
#else /* !HAVE_uk_syscall_e_preadv */
		ret = uk_syscall_r_preadv(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_preadv */

		break;

#endif /* HAVE_uk_syscall_preadv */

#ifdef HAVE_uk_syscall_pread64
	case SYS_pread64:

#ifdef HAVE_uk_syscall_e_pread64
		ret = uk_syscall_r_e_pread64((long)execenv);
#else /* !HAVE_uk_syscall_e_pread64 */
		ret = uk_syscall_r_pread64(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_pread64 */

		break;

#endif /* HAVE_uk_syscall_pread64 */

#ifdef HAVE_uk_syscall_readv
	case SYS_readv:

#ifdef HAVE_uk_syscall_e_readv
		ret = uk_syscall_r_e_readv((long)execenv);
#else /* !HAVE_uk_syscall_e_readv */
		ret = uk_syscall_r_readv(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_readv */

		break;

#endif /* HAVE_uk_syscall_readv */

#ifdef HAVE_uk_syscall_read
	case SYS_read:

#ifdef HAVE_uk_syscall_e_read
		ret = uk_syscall_r_e_read((long)execenv);
#else /* !HAVE_uk_syscall_e_read */
		ret = uk_syscall_r_read(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_read */

		break;

#endif /* HAVE_uk_syscall_read */

#ifdef HAVE_uk_syscall_pwritev2
	case SYS_pwritev2:

#ifdef HAVE_uk_syscall_e_pwritev2
		ret = uk_syscall_r_e_pwritev2((long)execenv);
#else /* !HAVE_uk_syscall_e_pwritev2 */
		ret = uk_syscall_r_pwritev2(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_pwritev2 */

		break;

#endif /* HAVE_uk_syscall_pwritev2 */

#ifdef HAVE_uk_syscall_pwritev
	case SYS_pwritev:

#ifdef HAVE_uk_syscall_e_pwritev
		ret = uk_syscall_r_e_pwritev((long)execenv);
#else /* !HAVE_uk_syscall_e_pwritev */
		ret = uk_syscall_r_pwritev(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_pwritev */

		break;

#endif /* HAVE_uk_syscall_pwritev */

#ifdef HAVE_uk_syscall_pwrite64
	case SYS_pwrite64:

#ifdef HAVE_uk_syscall_e_pwrite64
		ret = uk_syscall_r_e_pwrite64((long)execenv);
#else /* !HAVE_uk_syscall_e_pwrite64 */
		ret = uk_syscall_r_pwrite64(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_pwrite64 */

		break;

#endif /* HAVE_uk_syscall_pwrite64 */

#ifdef HAVE_uk_syscall_writev
	case SYS_writev:

#ifdef HAVE_uk_syscall_e_writev
		ret = uk_syscall_r_e_writev((long)execenv);
#else /* !HAVE_uk_syscall_e_writev */
		ret = uk_syscall_r_writev(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_writev */

		break;

#endif /* HAVE_uk_syscall_writev */

#ifdef HAVE_uk_syscall_write
	case SYS_write:

#ifdef HAVE_uk_syscall_e_write
		ret = uk_syscall_r_e_write((long)execenv);
#else /* !HAVE_uk_syscall_e_write */
		ret = uk_syscall_r_write(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_write */

		break;

#endif /* HAVE_uk_syscall_write */

#ifdef HAVE_uk_syscall_lseek
	case SYS_lseek:

#ifdef HAVE_uk_syscall_e_lseek
		ret = uk_syscall_r_e_lseek((long)execenv);
#else /* !HAVE_uk_syscall_e_lseek */
		ret = uk_syscall_r_lseek(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_lseek */

		break;

#endif /* HAVE_uk_syscall_lseek */

#ifdef HAVE_uk_syscall_fstat
	case SYS_fstat:

#ifdef HAVE_uk_syscall_e_fstat
		ret = uk_syscall_r_e_fstat((long)execenv);
#else /* !HAVE_uk_syscall_e_fstat */
		ret = uk_syscall_r_fstat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_fstat */

		break;

#endif /* HAVE_uk_syscall_fstat */

#ifdef HAVE_uk_syscall_fchmod
	case SYS_fchmod:

#ifdef HAVE_uk_syscall_e_fchmod
		ret = uk_syscall_r_e_fchmod((long)execenv);
#else /* !HAVE_uk_syscall_e_fchmod */
		ret = uk_syscall_r_fchmod(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_fchmod */

		break;

#endif /* HAVE_uk_syscall_fchmod */

#ifdef HAVE_uk_syscall_fchown
	case SYS_fchown:

#ifdef HAVE_uk_syscall_e_fchown
		ret = uk_syscall_r_e_fchown((long)execenv);
#else /* !HAVE_uk_syscall_e_fchown */
		ret = uk_syscall_r_fchown(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_fchown */

		break;

#endif /* HAVE_uk_syscall_fchown */

#ifdef HAVE_uk_syscall_fsync
	case SYS_fsync:

#ifdef HAVE_uk_syscall_e_fsync
		ret = uk_syscall_r_e_fsync((long)execenv);
#else /* !HAVE_uk_syscall_e_fsync */
		ret = uk_syscall_r_fsync(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_fsync */

		break;

#endif /* HAVE_uk_syscall_fsync */

#ifdef HAVE_uk_syscall_fdatasync
	case SYS_fdatasync:

#ifdef HAVE_uk_syscall_e_fdatasync
		ret = uk_syscall_r_e_fdatasync((long)execenv);
#else /* !HAVE_uk_syscall_e_fdatasync */
		ret = uk_syscall_r_fdatasync(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_fdatasync */

		break;

#endif /* HAVE_uk_syscall_fdatasync */

#ifdef HAVE_uk_syscall_ftruncate
	case SYS_ftruncate:

#ifdef HAVE_uk_syscall_e_ftruncate
		ret = uk_syscall_r_e_ftruncate((long)execenv);
#else /* !HAVE_uk_syscall_e_ftruncate */
		ret = uk_syscall_r_ftruncate(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_ftruncate */

		break;

#endif /* HAVE_uk_syscall_ftruncate */

#ifdef HAVE_uk_syscall_fallocate
	case SYS_fallocate:

#ifdef HAVE_uk_syscall_e_fallocate
		ret = uk_syscall_r_e_fallocate((long)execenv);
#else /* !HAVE_uk_syscall_e_fallocate */
		ret = uk_syscall_r_fallocate(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_fallocate */

		break;

#endif /* HAVE_uk_syscall_fallocate */

#ifdef HAVE_uk_syscall_fadvise64
	case SYS_fadvise64:

#ifdef HAVE_uk_syscall_e_fadvise64
		ret = uk_syscall_r_e_fadvise64((long)execenv);
#else /* !HAVE_uk_syscall_e_fadvise64 */
		ret = uk_syscall_r_fadvise64(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_fadvise64 */

		break;

#endif /* HAVE_uk_syscall_fadvise64 */

#ifdef HAVE_uk_syscall_fcntl
	case SYS_fcntl:

#ifdef HAVE_uk_syscall_e_fcntl
		ret = uk_syscall_r_e_fcntl((long)execenv);
#else /* !HAVE_uk_syscall_e_fcntl */
		ret = uk_syscall_r_fcntl(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_fcntl */

		break;

#endif /* HAVE_uk_syscall_fcntl */

#ifdef HAVE_uk_syscall_ioctl
	case SYS_ioctl:

#ifdef HAVE_uk_syscall_e_ioctl
		ret = uk_syscall_r_e_ioctl((long)execenv);
#else /* !HAVE_uk_syscall_e_ioctl */
		ret = uk_syscall_r_ioctl(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_ioctl */

		break;

#endif /* HAVE_uk_syscall_ioctl */

#ifdef HAVE_uk_syscall_pipe
	case SYS_pipe:

#ifdef HAVE_uk_syscall_e_pipe
		ret = uk_syscall_r_e_pipe((long)execenv);
#else /* !HAVE_uk_syscall_e_pipe */
		ret = uk_syscall_r_pipe(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_pipe */

		break;

#endif /* HAVE_uk_syscall_pipe */

#ifdef HAVE_uk_syscall_pipe2
	case SYS_pipe2:

#ifdef HAVE_uk_syscall_e_pipe2
		ret = uk_syscall_r_e_pipe2((long)execenv);
#else /* !HAVE_uk_syscall_e_pipe2 */
		ret = uk_syscall_r_pipe2(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_pipe2 */

		break;

#endif /* HAVE_uk_syscall_pipe2 */

#ifdef HAVE_uk_syscall_poll
	case SYS_poll:

#ifdef HAVE_uk_syscall_e_poll
		ret = uk_syscall_r_e_poll((long)execenv);
#else /* !HAVE_uk_syscall_e_poll */
		ret = uk_syscall_r_poll(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_poll */

		break;

#endif /* HAVE_uk_syscall_poll */

#ifdef HAVE_uk_syscall_ppoll
	case SYS_ppoll:

#ifdef HAVE_uk_syscall_e_ppoll
		ret = uk_syscall_r_e_ppoll((long)execenv);
#else /* !HAVE_uk_syscall_e_ppoll */
		ret = uk_syscall_r_ppoll(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_ppoll */

		break;

#endif /* HAVE_uk_syscall_ppoll */

#ifdef HAVE_uk_syscall_select
	case SYS_select:

#ifdef HAVE_uk_syscall_e_select
		ret = uk_syscall_r_e_select((long)execenv);
#else /* !HAVE_uk_syscall_e_select */
		ret = uk_syscall_r_select(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_select */

		break;

#endif /* HAVE_uk_syscall_select */

#ifdef HAVE_uk_syscall_pselect6
	case SYS_pselect6:

#ifdef HAVE_uk_syscall_e_pselect6
		ret = uk_syscall_r_e_pselect6((long)execenv);
#else /* !HAVE_uk_syscall_e_pselect6 */
		ret = uk_syscall_r_pselect6(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4, execenv->regs.__syscall_rarg5);

#endif /* !HAVE_uk_syscall_e_pselect6 */

		break;

#endif /* HAVE_uk_syscall_pselect6 */

#ifdef HAVE_uk_syscall_epoll_create
	case SYS_epoll_create:

#ifdef HAVE_uk_syscall_e_epoll_create
		ret = uk_syscall_r_e_epoll_create((long)execenv);
#else /* !HAVE_uk_syscall_e_epoll_create */
		ret = uk_syscall_r_epoll_create(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_epoll_create */

		break;

#endif /* HAVE_uk_syscall_epoll_create */

#ifdef HAVE_uk_syscall_epoll_create1
	case SYS_epoll_create1:

#ifdef HAVE_uk_syscall_e_epoll_create1
		ret = uk_syscall_r_e_epoll_create1((long)execenv);
#else /* !HAVE_uk_syscall_e_epoll_create1 */
		ret = uk_syscall_r_epoll_create1(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_epoll_create1 */

		break;

#endif /* HAVE_uk_syscall_epoll_create1 */

#ifdef HAVE_uk_syscall_epoll_ctl
	case SYS_epoll_ctl:

#ifdef HAVE_uk_syscall_e_epoll_ctl
		ret = uk_syscall_r_e_epoll_ctl((long)execenv);
#else /* !HAVE_uk_syscall_e_epoll_ctl */
		ret = uk_syscall_r_epoll_ctl(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_epoll_ctl */

		break;

#endif /* HAVE_uk_syscall_epoll_ctl */

#ifdef HAVE_uk_syscall_epoll_wait
	case SYS_epoll_wait:

#ifdef HAVE_uk_syscall_e_epoll_wait
		ret = uk_syscall_r_e_epoll_wait((long)execenv);
#else /* !HAVE_uk_syscall_e_epoll_wait */
		ret = uk_syscall_r_epoll_wait(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_epoll_wait */

		break;

#endif /* HAVE_uk_syscall_epoll_wait */

#ifdef HAVE_uk_syscall_epoll_pwait
	case SYS_epoll_pwait:

#ifdef HAVE_uk_syscall_e_epoll_pwait
		ret = uk_syscall_r_e_epoll_pwait((long)execenv);
#else /* !HAVE_uk_syscall_e_epoll_pwait */
		ret = uk_syscall_r_epoll_pwait(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4, execenv->regs.__syscall_rarg5);

#endif /* !HAVE_uk_syscall_e_epoll_pwait */

		break;

#endif /* HAVE_uk_syscall_epoll_pwait */

#ifdef HAVE_uk_syscall_epoll_pwait2
	case SYS_epoll_pwait2:

#ifdef HAVE_uk_syscall_e_epoll_pwait2
		ret = uk_syscall_r_e_epoll_pwait2((long)execenv);
#else /* !HAVE_uk_syscall_e_epoll_pwait2 */
		ret = uk_syscall_r_epoll_pwait2(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4, execenv->regs.__syscall_rarg5);

#endif /* !HAVE_uk_syscall_e_epoll_pwait2 */

		break;

#endif /* HAVE_uk_syscall_epoll_pwait2 */

#ifdef HAVE_uk_syscall_alarm
	case SYS_alarm:

#ifdef HAVE_uk_syscall_e_alarm
		ret = uk_syscall_r_e_alarm((long)execenv);
#else /* !HAVE_uk_syscall_e_alarm */
		ret = uk_syscall_r_alarm(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_alarm */

		break;

#endif /* HAVE_uk_syscall_alarm */

#ifdef HAVE_uk_syscall_pause
	case SYS_pause:

#ifdef HAVE_uk_syscall_e_pause
		ret = uk_syscall_r_e_pause((long)execenv);
#else /* !HAVE_uk_syscall_e_pause */
		ret = uk_syscall_r_pause(
					);

#endif /* !HAVE_uk_syscall_e_pause */

		break;

#endif /* HAVE_uk_syscall_pause */

#ifdef HAVE_uk_syscall_sigaltstack
	case SYS_sigaltstack:

#ifdef HAVE_uk_syscall_e_sigaltstack
		ret = uk_syscall_r_e_sigaltstack((long)execenv);
#else /* !HAVE_uk_syscall_e_sigaltstack */
		ret = uk_syscall_r_sigaltstack(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_sigaltstack */

		break;

#endif /* HAVE_uk_syscall_sigaltstack */

#ifdef HAVE_uk_syscall_rt_sigpending
	case SYS_rt_sigpending:

#ifdef HAVE_uk_syscall_e_rt_sigpending
		ret = uk_syscall_r_e_rt_sigpending((long)execenv);
#else /* !HAVE_uk_syscall_e_rt_sigpending */
		ret = uk_syscall_r_rt_sigpending(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_rt_sigpending */

		break;

#endif /* HAVE_uk_syscall_rt_sigpending */

#ifdef HAVE_uk_syscall_rt_sigprocmask
	case SYS_rt_sigprocmask:

#ifdef HAVE_uk_syscall_e_rt_sigprocmask
		ret = uk_syscall_r_e_rt_sigprocmask((long)execenv);
#else /* !HAVE_uk_syscall_e_rt_sigprocmask */
		ret = uk_syscall_r_rt_sigprocmask(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_rt_sigprocmask */

		break;

#endif /* HAVE_uk_syscall_rt_sigprocmask */

#ifdef HAVE_uk_syscall_rt_sigsuspend
	case SYS_rt_sigsuspend:

#ifdef HAVE_uk_syscall_e_rt_sigsuspend
		ret = uk_syscall_r_e_rt_sigsuspend((long)execenv);
#else /* !HAVE_uk_syscall_e_rt_sigsuspend */
		ret = uk_syscall_r_rt_sigsuspend(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_rt_sigsuspend */

		break;

#endif /* HAVE_uk_syscall_rt_sigsuspend */

#ifdef HAVE_uk_syscall_rt_sigaction
	case SYS_rt_sigaction:

#ifdef HAVE_uk_syscall_e_rt_sigaction
		ret = uk_syscall_r_e_rt_sigaction((long)execenv);
#else /* !HAVE_uk_syscall_e_rt_sigaction */
		ret = uk_syscall_r_rt_sigaction(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_rt_sigaction */

		break;

#endif /* HAVE_uk_syscall_rt_sigaction */

#ifdef HAVE_uk_syscall_rt_sigqueueinfo
	case SYS_rt_sigqueueinfo:

#ifdef HAVE_uk_syscall_e_rt_sigqueueinfo
		ret = uk_syscall_r_e_rt_sigqueueinfo((long)execenv);
#else /* !HAVE_uk_syscall_e_rt_sigqueueinfo */
		ret = uk_syscall_r_rt_sigqueueinfo(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_rt_sigqueueinfo */

		break;

#endif /* HAVE_uk_syscall_rt_sigqueueinfo */

#ifdef HAVE_uk_syscall_rt_tgsigqueueinfo
	case SYS_rt_tgsigqueueinfo:

#ifdef HAVE_uk_syscall_e_rt_tgsigqueueinfo
		ret = uk_syscall_r_e_rt_tgsigqueueinfo((long)execenv);
#else /* !HAVE_uk_syscall_e_rt_tgsigqueueinfo */
		ret = uk_syscall_r_rt_tgsigqueueinfo(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_rt_tgsigqueueinfo */

		break;

#endif /* HAVE_uk_syscall_rt_tgsigqueueinfo */

#ifdef HAVE_uk_syscall_rt_sigtimedwait
	case SYS_rt_sigtimedwait:

#ifdef HAVE_uk_syscall_e_rt_sigtimedwait
		ret = uk_syscall_r_e_rt_sigtimedwait((long)execenv);
#else /* !HAVE_uk_syscall_e_rt_sigtimedwait */
		ret = uk_syscall_r_rt_sigtimedwait(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_rt_sigtimedwait */

		break;

#endif /* HAVE_uk_syscall_rt_sigtimedwait */

#ifdef HAVE_uk_syscall_kill
	case SYS_kill:

#ifdef HAVE_uk_syscall_e_kill
		ret = uk_syscall_r_e_kill((long)execenv);
#else /* !HAVE_uk_syscall_e_kill */
		ret = uk_syscall_r_kill(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_kill */

		break;

#endif /* HAVE_uk_syscall_kill */

#ifdef HAVE_uk_syscall_tgkill
	case SYS_tgkill:

#ifdef HAVE_uk_syscall_e_tgkill
		ret = uk_syscall_r_e_tgkill((long)execenv);
#else /* !HAVE_uk_syscall_e_tgkill */
		ret = uk_syscall_r_tgkill(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_tgkill */

		break;

#endif /* HAVE_uk_syscall_tgkill */

#ifdef HAVE_uk_syscall_tkill
	case SYS_tkill:

#ifdef HAVE_uk_syscall_e_tkill
		ret = uk_syscall_r_e_tkill((long)execenv);
#else /* !HAVE_uk_syscall_e_tkill */
		ret = uk_syscall_r_tkill(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_tkill */

		break;

#endif /* HAVE_uk_syscall_tkill */

#ifdef HAVE_uk_syscall_wait4
	case SYS_wait4:

#ifdef HAVE_uk_syscall_e_wait4
		ret = uk_syscall_r_e_wait4((long)execenv);
#else /* !HAVE_uk_syscall_e_wait4 */
		ret = uk_syscall_r_wait4(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_wait4 */

		break;

#endif /* HAVE_uk_syscall_wait4 */

#ifdef HAVE_uk_syscall_waitid
	case SYS_waitid:

#ifdef HAVE_uk_syscall_e_waitid
		ret = uk_syscall_r_e_waitid((long)execenv);
#else /* !HAVE_uk_syscall_e_waitid */
		ret = uk_syscall_r_waitid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_waitid */

		break;

#endif /* HAVE_uk_syscall_waitid */

#ifdef HAVE_uk_syscall_getpgid
	case SYS_getpgid:

#ifdef HAVE_uk_syscall_e_getpgid
		ret = uk_syscall_r_e_getpgid((long)execenv);
#else /* !HAVE_uk_syscall_e_getpgid */
		ret = uk_syscall_r_getpgid(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_getpgid */

		break;

#endif /* HAVE_uk_syscall_getpgid */

#ifdef HAVE_uk_syscall_setpgid
	case SYS_setpgid:

#ifdef HAVE_uk_syscall_e_setpgid
		ret = uk_syscall_r_e_setpgid((long)execenv);
#else /* !HAVE_uk_syscall_e_setpgid */
		ret = uk_syscall_r_setpgid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_setpgid */

		break;

#endif /* HAVE_uk_syscall_setpgid */

#ifdef HAVE_uk_syscall_setsid
	case SYS_setsid:

#ifdef HAVE_uk_syscall_e_setsid
		ret = uk_syscall_r_e_setsid((long)execenv);
#else /* !HAVE_uk_syscall_e_setsid */
		ret = uk_syscall_r_setsid(
					);

#endif /* !HAVE_uk_syscall_e_setsid */

		break;

#endif /* HAVE_uk_syscall_setsid */

#ifdef HAVE_uk_syscall_getsid
	case SYS_getsid:

#ifdef HAVE_uk_syscall_e_getsid
		ret = uk_syscall_r_e_getsid((long)execenv);
#else /* !HAVE_uk_syscall_e_getsid */
		ret = uk_syscall_r_getsid(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_getsid */

		break;

#endif /* HAVE_uk_syscall_getsid */

#ifdef HAVE_uk_syscall_setpriority
	case SYS_setpriority:

#ifdef HAVE_uk_syscall_e_setpriority
		ret = uk_syscall_r_e_setpriority((long)execenv);
#else /* !HAVE_uk_syscall_e_setpriority */
		ret = uk_syscall_r_setpriority(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_setpriority */

		break;

#endif /* HAVE_uk_syscall_setpriority */

#ifdef HAVE_uk_syscall_getpriority
	case SYS_getpriority:

#ifdef HAVE_uk_syscall_e_getpriority
		ret = uk_syscall_r_e_getpriority((long)execenv);
#else /* !HAVE_uk_syscall_e_getpriority */
		ret = uk_syscall_r_getpriority(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_getpriority */

		break;

#endif /* HAVE_uk_syscall_getpriority */

#ifdef HAVE_uk_syscall_getpgrp
	case SYS_getpgrp:

#ifdef HAVE_uk_syscall_e_getpgrp
		ret = uk_syscall_r_e_getpgrp((long)execenv);
#else /* !HAVE_uk_syscall_e_getpgrp */
		ret = uk_syscall_r_getpgrp(
					);

#endif /* !HAVE_uk_syscall_e_getpgrp */

		break;

#endif /* HAVE_uk_syscall_getpgrp */

#ifdef HAVE_uk_syscall_getpid
	case SYS_getpid:

#ifdef HAVE_uk_syscall_e_getpid
		ret = uk_syscall_r_e_getpid((long)execenv);
#else /* !HAVE_uk_syscall_e_getpid */
		ret = uk_syscall_r_getpid(
					);

#endif /* !HAVE_uk_syscall_e_getpid */

		break;

#endif /* HAVE_uk_syscall_getpid */

#ifdef HAVE_uk_syscall_gettid
	case SYS_gettid:

#ifdef HAVE_uk_syscall_e_gettid
		ret = uk_syscall_r_e_gettid((long)execenv);
#else /* !HAVE_uk_syscall_e_gettid */
		ret = uk_syscall_r_gettid(
					);

#endif /* !HAVE_uk_syscall_e_gettid */

		break;

#endif /* HAVE_uk_syscall_gettid */

#ifdef HAVE_uk_syscall_getppid
	case SYS_getppid:

#ifdef HAVE_uk_syscall_e_getppid
		ret = uk_syscall_r_e_getppid((long)execenv);
#else /* !HAVE_uk_syscall_e_getppid */
		ret = uk_syscall_r_getppid(
					);

#endif /* !HAVE_uk_syscall_e_getppid */

		break;

#endif /* HAVE_uk_syscall_getppid */

#ifdef HAVE_uk_syscall_prlimit64
	case SYS_prlimit64:

#ifdef HAVE_uk_syscall_e_prlimit64
		ret = uk_syscall_r_e_prlimit64((long)execenv);
#else /* !HAVE_uk_syscall_e_prlimit64 */
		ret = uk_syscall_r_prlimit64(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_prlimit64 */

		break;

#endif /* HAVE_uk_syscall_prlimit64 */

#ifdef HAVE_uk_syscall_getrlimit
	case SYS_getrlimit:

#ifdef HAVE_uk_syscall_e_getrlimit
		ret = uk_syscall_r_e_getrlimit((long)execenv);
#else /* !HAVE_uk_syscall_e_getrlimit */
		ret = uk_syscall_r_getrlimit(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_getrlimit */

		break;

#endif /* HAVE_uk_syscall_getrlimit */

#ifdef HAVE_uk_syscall_setrlimit
	case SYS_setrlimit:

#ifdef HAVE_uk_syscall_e_setrlimit
		ret = uk_syscall_r_e_setrlimit((long)execenv);
#else /* !HAVE_uk_syscall_e_setrlimit */
		ret = uk_syscall_r_setrlimit(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_setrlimit */

		break;

#endif /* HAVE_uk_syscall_setrlimit */

#ifdef HAVE_uk_syscall_getrusage
	case SYS_getrusage:

#ifdef HAVE_uk_syscall_e_getrusage
		ret = uk_syscall_r_e_getrusage((long)execenv);
#else /* !HAVE_uk_syscall_e_getrusage */
		ret = uk_syscall_r_getrusage(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_getrusage */

		break;

#endif /* HAVE_uk_syscall_getrusage */

#ifdef HAVE_uk_syscall_prctl
	case SYS_prctl:

#ifdef HAVE_uk_syscall_e_prctl
		ret = uk_syscall_r_e_prctl((long)execenv);
#else /* !HAVE_uk_syscall_e_prctl */
		ret = uk_syscall_r_prctl(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_prctl */

		break;

#endif /* HAVE_uk_syscall_prctl */

#ifdef HAVE_uk_syscall_clone
	case SYS_clone:

#ifdef HAVE_uk_syscall_e_clone
		ret = uk_syscall_r_e_clone((long)execenv);
#else /* !HAVE_uk_syscall_e_clone */
		ret = uk_syscall_r_clone(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_clone */

		break;

#endif /* HAVE_uk_syscall_clone */

#ifdef HAVE_uk_syscall_exit
	case SYS_exit:

#ifdef HAVE_uk_syscall_e_exit
		ret = uk_syscall_r_e_exit((long)execenv);
#else /* !HAVE_uk_syscall_e_exit */
		ret = uk_syscall_r_exit(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_exit */

		break;

#endif /* HAVE_uk_syscall_exit */

#ifdef HAVE_uk_syscall_exit_group
	case SYS_exit_group:

#ifdef HAVE_uk_syscall_e_exit_group
		ret = uk_syscall_r_e_exit_group((long)execenv);
#else /* !HAVE_uk_syscall_e_exit_group */
		ret = uk_syscall_r_exit_group(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_exit_group */

		break;

#endif /* HAVE_uk_syscall_exit_group */

#ifdef HAVE_uk_syscall_socket
	case SYS_socket:

#ifdef HAVE_uk_syscall_e_socket
		ret = uk_syscall_r_e_socket((long)execenv);
#else /* !HAVE_uk_syscall_e_socket */
		ret = uk_syscall_r_socket(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_socket */

		break;

#endif /* HAVE_uk_syscall_socket */

#ifdef HAVE_uk_syscall_accept
	case SYS_accept:

#ifdef HAVE_uk_syscall_e_accept
		ret = uk_syscall_r_e_accept((long)execenv);
#else /* !HAVE_uk_syscall_e_accept */
		ret = uk_syscall_r_accept(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_accept */

		break;

#endif /* HAVE_uk_syscall_accept */

#ifdef HAVE_uk_syscall_accept4
	case SYS_accept4:

#ifdef HAVE_uk_syscall_e_accept4
		ret = uk_syscall_r_e_accept4((long)execenv);
#else /* !HAVE_uk_syscall_e_accept4 */
		ret = uk_syscall_r_accept4(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_accept4 */

		break;

#endif /* HAVE_uk_syscall_accept4 */

#ifdef HAVE_uk_syscall_getsockopt
	case SYS_getsockopt:

#ifdef HAVE_uk_syscall_e_getsockopt
		ret = uk_syscall_r_e_getsockopt((long)execenv);
#else /* !HAVE_uk_syscall_e_getsockopt */
		ret = uk_syscall_r_getsockopt(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_getsockopt */

		break;

#endif /* HAVE_uk_syscall_getsockopt */

#ifdef HAVE_uk_syscall_setsockopt
	case SYS_setsockopt:

#ifdef HAVE_uk_syscall_e_setsockopt
		ret = uk_syscall_r_e_setsockopt((long)execenv);
#else /* !HAVE_uk_syscall_e_setsockopt */
		ret = uk_syscall_r_setsockopt(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_setsockopt */

		break;

#endif /* HAVE_uk_syscall_setsockopt */

#ifdef HAVE_uk_syscall_bind
	case SYS_bind:

#ifdef HAVE_uk_syscall_e_bind
		ret = uk_syscall_r_e_bind((long)execenv);
#else /* !HAVE_uk_syscall_e_bind */
		ret = uk_syscall_r_bind(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_bind */

		break;

#endif /* HAVE_uk_syscall_bind */

#ifdef HAVE_uk_syscall_listen
	case SYS_listen:

#ifdef HAVE_uk_syscall_e_listen
		ret = uk_syscall_r_e_listen((long)execenv);
#else /* !HAVE_uk_syscall_e_listen */
		ret = uk_syscall_r_listen(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_listen */

		break;

#endif /* HAVE_uk_syscall_listen */

#ifdef HAVE_uk_syscall_connect
	case SYS_connect:

#ifdef HAVE_uk_syscall_e_connect
		ret = uk_syscall_r_e_connect((long)execenv);
#else /* !HAVE_uk_syscall_e_connect */
		ret = uk_syscall_r_connect(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_connect */

		break;

#endif /* HAVE_uk_syscall_connect */

#ifdef HAVE_uk_syscall_getpeername
	case SYS_getpeername:

#ifdef HAVE_uk_syscall_e_getpeername
		ret = uk_syscall_r_e_getpeername((long)execenv);
#else /* !HAVE_uk_syscall_e_getpeername */
		ret = uk_syscall_r_getpeername(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_getpeername */

		break;

#endif /* HAVE_uk_syscall_getpeername */

#ifdef HAVE_uk_syscall_getsockname
	case SYS_getsockname:

#ifdef HAVE_uk_syscall_e_getsockname
		ret = uk_syscall_r_e_getsockname((long)execenv);
#else /* !HAVE_uk_syscall_e_getsockname */
		ret = uk_syscall_r_getsockname(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_getsockname */

		break;

#endif /* HAVE_uk_syscall_getsockname */

#ifdef HAVE_uk_syscall_recvfrom
	case SYS_recvfrom:

#ifdef HAVE_uk_syscall_e_recvfrom
		ret = uk_syscall_r_e_recvfrom((long)execenv);
#else /* !HAVE_uk_syscall_e_recvfrom */
		ret = uk_syscall_r_recvfrom(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4, execenv->regs.__syscall_rarg5);

#endif /* !HAVE_uk_syscall_e_recvfrom */

		break;

#endif /* HAVE_uk_syscall_recvfrom */

#ifdef HAVE_uk_syscall_recvmsg
	case SYS_recvmsg:

#ifdef HAVE_uk_syscall_e_recvmsg
		ret = uk_syscall_r_e_recvmsg((long)execenv);
#else /* !HAVE_uk_syscall_e_recvmsg */
		ret = uk_syscall_r_recvmsg(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_recvmsg */

		break;

#endif /* HAVE_uk_syscall_recvmsg */

#ifdef HAVE_uk_syscall_sendto
	case SYS_sendto:

#ifdef HAVE_uk_syscall_e_sendto
		ret = uk_syscall_r_e_sendto((long)execenv);
#else /* !HAVE_uk_syscall_e_sendto */
		ret = uk_syscall_r_sendto(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4, execenv->regs.__syscall_rarg5);

#endif /* !HAVE_uk_syscall_e_sendto */

		break;

#endif /* HAVE_uk_syscall_sendto */

#ifdef HAVE_uk_syscall_sendmsg
	case SYS_sendmsg:

#ifdef HAVE_uk_syscall_e_sendmsg
		ret = uk_syscall_r_e_sendmsg((long)execenv);
#else /* !HAVE_uk_syscall_e_sendmsg */
		ret = uk_syscall_r_sendmsg(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_sendmsg */

		break;

#endif /* HAVE_uk_syscall_sendmsg */

#ifdef HAVE_uk_syscall_socketpair
	case SYS_socketpair:

#ifdef HAVE_uk_syscall_e_socketpair
		ret = uk_syscall_r_e_socketpair((long)execenv);
#else /* !HAVE_uk_syscall_e_socketpair */
		ret = uk_syscall_r_socketpair(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_socketpair */

		break;

#endif /* HAVE_uk_syscall_socketpair */

#ifdef HAVE_uk_syscall_shutdown
	case SYS_shutdown:

#ifdef HAVE_uk_syscall_e_shutdown
		ret = uk_syscall_r_e_shutdown((long)execenv);
#else /* !HAVE_uk_syscall_e_shutdown */
		ret = uk_syscall_r_shutdown(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_shutdown */

		break;

#endif /* HAVE_uk_syscall_shutdown */

#ifdef HAVE_uk_syscall_futex
	case SYS_futex:

#ifdef HAVE_uk_syscall_e_futex
		ret = uk_syscall_r_e_futex((long)execenv);
#else /* !HAVE_uk_syscall_e_futex */
		ret = uk_syscall_r_futex(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4, execenv->regs.__syscall_rarg5);

#endif /* !HAVE_uk_syscall_e_futex */

		break;

#endif /* HAVE_uk_syscall_futex */

#ifdef HAVE_uk_syscall_set_tid_address
	case SYS_set_tid_address:

#ifdef HAVE_uk_syscall_e_set_tid_address
		ret = uk_syscall_r_e_set_tid_address((long)execenv);
#else /* !HAVE_uk_syscall_e_set_tid_address */
		ret = uk_syscall_r_set_tid_address(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_set_tid_address */

		break;

#endif /* HAVE_uk_syscall_set_tid_address */

#ifdef HAVE_uk_syscall_getuid
	case SYS_getuid:

#ifdef HAVE_uk_syscall_e_getuid
		ret = uk_syscall_r_e_getuid((long)execenv);
#else /* !HAVE_uk_syscall_e_getuid */
		ret = uk_syscall_r_getuid(
					);

#endif /* !HAVE_uk_syscall_e_getuid */

		break;

#endif /* HAVE_uk_syscall_getuid */

#ifdef HAVE_uk_syscall_setuid
	case SYS_setuid:

#ifdef HAVE_uk_syscall_e_setuid
		ret = uk_syscall_r_e_setuid((long)execenv);
#else /* !HAVE_uk_syscall_e_setuid */
		ret = uk_syscall_r_setuid(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_setuid */

		break;

#endif /* HAVE_uk_syscall_setuid */

#ifdef HAVE_uk_syscall_geteuid
	case SYS_geteuid:

#ifdef HAVE_uk_syscall_e_geteuid
		ret = uk_syscall_r_e_geteuid((long)execenv);
#else /* !HAVE_uk_syscall_e_geteuid */
		ret = uk_syscall_r_geteuid(
					);

#endif /* !HAVE_uk_syscall_e_geteuid */

		break;

#endif /* HAVE_uk_syscall_geteuid */

#ifdef HAVE_uk_syscall_setreuid
	case SYS_setreuid:

#ifdef HAVE_uk_syscall_e_setreuid
		ret = uk_syscall_r_e_setreuid((long)execenv);
#else /* !HAVE_uk_syscall_e_setreuid */
		ret = uk_syscall_r_setreuid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_setreuid */

		break;

#endif /* HAVE_uk_syscall_setreuid */

#ifdef HAVE_uk_syscall_getresuid
	case SYS_getresuid:

#ifdef HAVE_uk_syscall_e_getresuid
		ret = uk_syscall_r_e_getresuid((long)execenv);
#else /* !HAVE_uk_syscall_e_getresuid */
		ret = uk_syscall_r_getresuid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_getresuid */

		break;

#endif /* HAVE_uk_syscall_getresuid */

#ifdef HAVE_uk_syscall_setresuid
	case SYS_setresuid:

#ifdef HAVE_uk_syscall_e_setresuid
		ret = uk_syscall_r_e_setresuid((long)execenv);
#else /* !HAVE_uk_syscall_e_setresuid */
		ret = uk_syscall_r_setresuid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_setresuid */

		break;

#endif /* HAVE_uk_syscall_setresuid */

#ifdef HAVE_uk_syscall_setfsuid
	case SYS_setfsuid:

#ifdef HAVE_uk_syscall_e_setfsuid
		ret = uk_syscall_r_e_setfsuid((long)execenv);
#else /* !HAVE_uk_syscall_e_setfsuid */
		ret = uk_syscall_r_setfsuid(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_setfsuid */

		break;

#endif /* HAVE_uk_syscall_setfsuid */

#ifdef HAVE_uk_syscall_getgid
	case SYS_getgid:

#ifdef HAVE_uk_syscall_e_getgid
		ret = uk_syscall_r_e_getgid((long)execenv);
#else /* !HAVE_uk_syscall_e_getgid */
		ret = uk_syscall_r_getgid(
					);

#endif /* !HAVE_uk_syscall_e_getgid */

		break;

#endif /* HAVE_uk_syscall_getgid */

#ifdef HAVE_uk_syscall_setgid
	case SYS_setgid:

#ifdef HAVE_uk_syscall_e_setgid
		ret = uk_syscall_r_e_setgid((long)execenv);
#else /* !HAVE_uk_syscall_e_setgid */
		ret = uk_syscall_r_setgid(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_setgid */

		break;

#endif /* HAVE_uk_syscall_setgid */

#ifdef HAVE_uk_syscall_getegid
	case SYS_getegid:

#ifdef HAVE_uk_syscall_e_getegid
		ret = uk_syscall_r_e_getegid((long)execenv);
#else /* !HAVE_uk_syscall_e_getegid */
		ret = uk_syscall_r_getegid(
					);

#endif /* !HAVE_uk_syscall_e_getegid */

		break;

#endif /* HAVE_uk_syscall_getegid */

#ifdef HAVE_uk_syscall_setregid
	case SYS_setregid:

#ifdef HAVE_uk_syscall_e_setregid
		ret = uk_syscall_r_e_setregid((long)execenv);
#else /* !HAVE_uk_syscall_e_setregid */
		ret = uk_syscall_r_setregid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_setregid */

		break;

#endif /* HAVE_uk_syscall_setregid */

#ifdef HAVE_uk_syscall_getresgid
	case SYS_getresgid:

#ifdef HAVE_uk_syscall_e_getresgid
		ret = uk_syscall_r_e_getresgid((long)execenv);
#else /* !HAVE_uk_syscall_e_getresgid */
		ret = uk_syscall_r_getresgid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_getresgid */

		break;

#endif /* HAVE_uk_syscall_getresgid */

#ifdef HAVE_uk_syscall_setresgid
	case SYS_setresgid:

#ifdef HAVE_uk_syscall_e_setresgid
		ret = uk_syscall_r_e_setresgid((long)execenv);
#else /* !HAVE_uk_syscall_e_setresgid */
		ret = uk_syscall_r_setresgid(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_setresgid */

		break;

#endif /* HAVE_uk_syscall_setresgid */

#ifdef HAVE_uk_syscall_setfsgid
	case SYS_setfsgid:

#ifdef HAVE_uk_syscall_e_setfsgid
		ret = uk_syscall_r_e_setfsgid((long)execenv);
#else /* !HAVE_uk_syscall_e_setfsgid */
		ret = uk_syscall_r_setfsgid(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_setfsgid */

		break;

#endif /* HAVE_uk_syscall_setfsgid */

#ifdef HAVE_uk_syscall_getgroups
	case SYS_getgroups:

#ifdef HAVE_uk_syscall_e_getgroups
		ret = uk_syscall_r_e_getgroups((long)execenv);
#else /* !HAVE_uk_syscall_e_getgroups */
		ret = uk_syscall_r_getgroups(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_getgroups */

		break;

#endif /* HAVE_uk_syscall_getgroups */

#ifdef HAVE_uk_syscall_setgroups
	case SYS_setgroups:

#ifdef HAVE_uk_syscall_e_setgroups
		ret = uk_syscall_r_e_setgroups((long)execenv);
#else /* !HAVE_uk_syscall_e_setgroups */
		ret = uk_syscall_r_setgroups(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_setgroups */

		break;

#endif /* HAVE_uk_syscall_setgroups */

#ifdef HAVE_uk_syscall_capget
	case SYS_capget:

#ifdef HAVE_uk_syscall_e_capget
		ret = uk_syscall_r_e_capget((long)execenv);
#else /* !HAVE_uk_syscall_e_capget */
		ret = uk_syscall_r_capget(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_capget */

		break;

#endif /* HAVE_uk_syscall_capget */

#ifdef HAVE_uk_syscall_capset
	case SYS_capset:

#ifdef HAVE_uk_syscall_e_capset
		ret = uk_syscall_r_e_capset((long)execenv);
#else /* !HAVE_uk_syscall_e_capset */
		ret = uk_syscall_r_capset(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_capset */

		break;

#endif /* HAVE_uk_syscall_capset */

#ifdef HAVE_uk_syscall_mmap
	case SYS_mmap:

#ifdef HAVE_uk_syscall_e_mmap
		ret = uk_syscall_r_e_mmap((long)execenv);
#else /* !HAVE_uk_syscall_e_mmap */
		ret = uk_syscall_r_mmap(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4, execenv->regs.__syscall_rarg5);

#endif /* !HAVE_uk_syscall_e_mmap */

		break;

#endif /* HAVE_uk_syscall_mmap */

#ifdef HAVE_uk_syscall_munmap
	case SYS_munmap:

#ifdef HAVE_uk_syscall_e_munmap
		ret = uk_syscall_r_e_munmap((long)execenv);
#else /* !HAVE_uk_syscall_e_munmap */
		ret = uk_syscall_r_munmap(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_munmap */

		break;

#endif /* HAVE_uk_syscall_munmap */

#ifdef HAVE_uk_syscall_madvise
	case SYS_madvise:

#ifdef HAVE_uk_syscall_e_madvise
		ret = uk_syscall_r_e_madvise((long)execenv);
#else /* !HAVE_uk_syscall_e_madvise */
		ret = uk_syscall_r_madvise(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_madvise */

		break;

#endif /* HAVE_uk_syscall_madvise */

#ifdef HAVE_uk_syscall_mremap
	case SYS_mremap:

#ifdef HAVE_uk_syscall_e_mremap
		ret = uk_syscall_r_e_mremap((long)execenv);
#else /* !HAVE_uk_syscall_e_mremap */
		ret = uk_syscall_r_mremap(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_mremap */

		break;

#endif /* HAVE_uk_syscall_mremap */

#ifdef HAVE_uk_syscall_mprotect
	case SYS_mprotect:

#ifdef HAVE_uk_syscall_e_mprotect
		ret = uk_syscall_r_e_mprotect((long)execenv);
#else /* !HAVE_uk_syscall_e_mprotect */
		ret = uk_syscall_r_mprotect(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_mprotect */

		break;

#endif /* HAVE_uk_syscall_mprotect */

#ifdef HAVE_uk_syscall_sched_yield
	case SYS_sched_yield:

#ifdef HAVE_uk_syscall_e_sched_yield
		ret = uk_syscall_r_e_sched_yield((long)execenv);
#else /* !HAVE_uk_syscall_e_sched_yield */
		ret = uk_syscall_r_sched_yield(
					);

#endif /* !HAVE_uk_syscall_e_sched_yield */

		break;

#endif /* HAVE_uk_syscall_sched_yield */

#ifdef HAVE_uk_syscall_sched_getaffinity
	case SYS_sched_getaffinity:

#ifdef HAVE_uk_syscall_e_sched_getaffinity
		ret = uk_syscall_r_e_sched_getaffinity((long)execenv);
#else /* !HAVE_uk_syscall_e_sched_getaffinity */
		ret = uk_syscall_r_sched_getaffinity(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_sched_getaffinity */

		break;

#endif /* HAVE_uk_syscall_sched_getaffinity */

#ifdef HAVE_uk_syscall_sched_setaffinity
	case SYS_sched_setaffinity:

#ifdef HAVE_uk_syscall_e_sched_setaffinity
		ret = uk_syscall_r_e_sched_setaffinity((long)execenv);
#else /* !HAVE_uk_syscall_e_sched_setaffinity */
		ret = uk_syscall_r_sched_setaffinity(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_sched_setaffinity */

		break;

#endif /* HAVE_uk_syscall_sched_setaffinity */

#ifdef HAVE_uk_syscall_membarrier
	case SYS_membarrier:

#ifdef HAVE_uk_syscall_e_membarrier
		ret = uk_syscall_r_e_membarrier((long)execenv);
#else /* !HAVE_uk_syscall_e_membarrier */
		ret = uk_syscall_r_membarrier(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_membarrier */

		break;

#endif /* HAVE_uk_syscall_membarrier */

#ifdef HAVE_uk_syscall_nanosleep
	case SYS_nanosleep:

#ifdef HAVE_uk_syscall_e_nanosleep
		ret = uk_syscall_r_e_nanosleep((long)execenv);
#else /* !HAVE_uk_syscall_e_nanosleep */
		ret = uk_syscall_r_nanosleep(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_nanosleep */

		break;

#endif /* HAVE_uk_syscall_nanosleep */

#ifdef HAVE_uk_syscall_clock_getres
	case SYS_clock_getres:

#ifdef HAVE_uk_syscall_e_clock_getres
		ret = uk_syscall_r_e_clock_getres((long)execenv);
#else /* !HAVE_uk_syscall_e_clock_getres */
		ret = uk_syscall_r_clock_getres(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_clock_getres */

		break;

#endif /* HAVE_uk_syscall_clock_getres */

#ifdef HAVE_uk_syscall_clock_gettime
	case SYS_clock_gettime:

#ifdef HAVE_uk_syscall_e_clock_gettime
		ret = uk_syscall_r_e_clock_gettime((long)execenv);
#else /* !HAVE_uk_syscall_e_clock_gettime */
		ret = uk_syscall_r_clock_gettime(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_clock_gettime */

		break;

#endif /* HAVE_uk_syscall_clock_gettime */

#ifdef HAVE_uk_syscall_clock_settime
	case SYS_clock_settime:

#ifdef HAVE_uk_syscall_e_clock_settime
		ret = uk_syscall_r_e_clock_settime((long)execenv);
#else /* !HAVE_uk_syscall_e_clock_settime */
		ret = uk_syscall_r_clock_settime(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_clock_settime */

		break;

#endif /* HAVE_uk_syscall_clock_settime */

#ifdef HAVE_uk_syscall_clock_nanosleep
	case SYS_clock_nanosleep:

#ifdef HAVE_uk_syscall_e_clock_nanosleep
		ret = uk_syscall_r_e_clock_nanosleep((long)execenv);
#else /* !HAVE_uk_syscall_e_clock_nanosleep */
		ret = uk_syscall_r_clock_nanosleep(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_clock_nanosleep */

		break;

#endif /* HAVE_uk_syscall_clock_nanosleep */

#ifdef HAVE_uk_syscall_gettimeofday
	case SYS_gettimeofday:

#ifdef HAVE_uk_syscall_e_gettimeofday
		ret = uk_syscall_r_e_gettimeofday((long)execenv);
#else /* !HAVE_uk_syscall_e_gettimeofday */
		ret = uk_syscall_r_gettimeofday(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_gettimeofday */

		break;

#endif /* HAVE_uk_syscall_gettimeofday */

#ifdef HAVE_uk_syscall_settimeofday
	case SYS_settimeofday:

#ifdef HAVE_uk_syscall_e_settimeofday
		ret = uk_syscall_r_e_settimeofday((long)execenv);
#else /* !HAVE_uk_syscall_e_settimeofday */
		ret = uk_syscall_r_settimeofday(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_settimeofday */

		break;

#endif /* HAVE_uk_syscall_settimeofday */

#ifdef HAVE_uk_syscall_times
	case SYS_times:

#ifdef HAVE_uk_syscall_e_times
		ret = uk_syscall_r_e_times((long)execenv);
#else /* !HAVE_uk_syscall_e_times */
		ret = uk_syscall_r_times(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_times */

		break;

#endif /* HAVE_uk_syscall_times */

#ifdef HAVE_uk_syscall_time
	case SYS_time:

#ifdef HAVE_uk_syscall_e_time
		ret = uk_syscall_r_e_time((long)execenv);
#else /* !HAVE_uk_syscall_e_time */
		ret = uk_syscall_r_time(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_time */

		break;

#endif /* HAVE_uk_syscall_time */

#ifdef HAVE_uk_syscall_setitimer
	case SYS_setitimer:

#ifdef HAVE_uk_syscall_e_setitimer
		ret = uk_syscall_r_e_setitimer((long)execenv);
#else /* !HAVE_uk_syscall_e_setitimer */
		ret = uk_syscall_r_setitimer(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_setitimer */

		break;

#endif /* HAVE_uk_syscall_setitimer */

#ifdef HAVE_uk_syscall_timer_create
	case SYS_timer_create:

#ifdef HAVE_uk_syscall_e_timer_create
		ret = uk_syscall_r_e_timer_create((long)execenv);
#else /* !HAVE_uk_syscall_e_timer_create */
		ret = uk_syscall_r_timer_create(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_timer_create */

		break;

#endif /* HAVE_uk_syscall_timer_create */

#ifdef HAVE_uk_syscall_timer_delete
	case SYS_timer_delete:

#ifdef HAVE_uk_syscall_e_timer_delete
		ret = uk_syscall_r_e_timer_delete((long)execenv);
#else /* !HAVE_uk_syscall_e_timer_delete */
		ret = uk_syscall_r_timer_delete(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_timer_delete */

		break;

#endif /* HAVE_uk_syscall_timer_delete */

#ifdef HAVE_uk_syscall_timer_settime
	case SYS_timer_settime:

#ifdef HAVE_uk_syscall_e_timer_settime
		ret = uk_syscall_r_e_timer_settime((long)execenv);
#else /* !HAVE_uk_syscall_e_timer_settime */
		ret = uk_syscall_r_timer_settime(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_timer_settime */

		break;

#endif /* HAVE_uk_syscall_timer_settime */

#ifdef HAVE_uk_syscall_timer_gettime
	case SYS_timer_gettime:

#ifdef HAVE_uk_syscall_e_timer_gettime
		ret = uk_syscall_r_e_timer_gettime((long)execenv);
#else /* !HAVE_uk_syscall_e_timer_gettime */
		ret = uk_syscall_r_timer_gettime(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_timer_gettime */

		break;

#endif /* HAVE_uk_syscall_timer_gettime */

#ifdef HAVE_uk_syscall_timer_getoverrun
	case SYS_timer_getoverrun:

#ifdef HAVE_uk_syscall_e_timer_getoverrun
		ret = uk_syscall_r_e_timer_getoverrun((long)execenv);
#else /* !HAVE_uk_syscall_e_timer_getoverrun */
		ret = uk_syscall_r_timer_getoverrun(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_timer_getoverrun */

		break;

#endif /* HAVE_uk_syscall_timer_getoverrun */

#ifdef HAVE_uk_syscall_readlink
	case SYS_readlink:

#ifdef HAVE_uk_syscall_e_readlink
		ret = uk_syscall_r_e_readlink((long)execenv);
#else /* !HAVE_uk_syscall_e_readlink */
		ret = uk_syscall_r_readlink(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_readlink */

		break;

#endif /* HAVE_uk_syscall_readlink */

#ifdef HAVE_uk_syscall_link
	case SYS_link:

#ifdef HAVE_uk_syscall_e_link
		ret = uk_syscall_r_e_link((long)execenv);
#else /* !HAVE_uk_syscall_e_link */
		ret = uk_syscall_r_link(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_link */

		break;

#endif /* HAVE_uk_syscall_link */

#ifdef HAVE_uk_syscall_truncate
	case SYS_truncate:

#ifdef HAVE_uk_syscall_e_truncate
		ret = uk_syscall_r_e_truncate((long)execenv);
#else /* !HAVE_uk_syscall_e_truncate */
		ret = uk_syscall_r_truncate(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_truncate */

		break;

#endif /* HAVE_uk_syscall_truncate */

#ifdef HAVE_uk_syscall_access
	case SYS_access:

#ifdef HAVE_uk_syscall_e_access
		ret = uk_syscall_r_e_access((long)execenv);
#else /* !HAVE_uk_syscall_e_access */
		ret = uk_syscall_r_access(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_access */

		break;

#endif /* HAVE_uk_syscall_access */

#ifdef HAVE_uk_syscall_faccessat
	case SYS_faccessat:

#ifdef HAVE_uk_syscall_e_faccessat
		ret = uk_syscall_r_e_faccessat((long)execenv);
#else /* !HAVE_uk_syscall_e_faccessat */
		ret = uk_syscall_r_faccessat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_faccessat */

		break;

#endif /* HAVE_uk_syscall_faccessat */

#ifdef HAVE_uk_syscall_chdir
	case SYS_chdir:

#ifdef HAVE_uk_syscall_e_chdir
		ret = uk_syscall_r_e_chdir((long)execenv);
#else /* !HAVE_uk_syscall_e_chdir */
		ret = uk_syscall_r_chdir(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_chdir */

		break;

#endif /* HAVE_uk_syscall_chdir */

#ifdef HAVE_uk_syscall_fchdir
	case SYS_fchdir:

#ifdef HAVE_uk_syscall_e_fchdir
		ret = uk_syscall_r_e_fchdir((long)execenv);
#else /* !HAVE_uk_syscall_e_fchdir */
		ret = uk_syscall_r_fchdir(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_fchdir */

		break;

#endif /* HAVE_uk_syscall_fchdir */

#ifdef HAVE_uk_syscall_chmod
	case SYS_chmod:

#ifdef HAVE_uk_syscall_e_chmod
		ret = uk_syscall_r_e_chmod((long)execenv);
#else /* !HAVE_uk_syscall_e_chmod */
		ret = uk_syscall_r_chmod(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_chmod */

		break;

#endif /* HAVE_uk_syscall_chmod */

#ifdef HAVE_uk_syscall_utime
	case SYS_utime:

#ifdef HAVE_uk_syscall_e_utime
		ret = uk_syscall_r_e_utime((long)execenv);
#else /* !HAVE_uk_syscall_e_utime */
		ret = uk_syscall_r_utime(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_utime */

		break;

#endif /* HAVE_uk_syscall_utime */

#ifdef HAVE_uk_syscall_utimes
	case SYS_utimes:

#ifdef HAVE_uk_syscall_e_utimes
		ret = uk_syscall_r_e_utimes((long)execenv);
#else /* !HAVE_uk_syscall_e_utimes */
		ret = uk_syscall_r_utimes(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_utimes */

		break;

#endif /* HAVE_uk_syscall_utimes */

#ifdef HAVE_uk_syscall_mknod
	case SYS_mknod:

#ifdef HAVE_uk_syscall_e_mknod
		ret = uk_syscall_r_e_mknod((long)execenv);
#else /* !HAVE_uk_syscall_e_mknod */
		ret = uk_syscall_r_mknod(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_mknod */

		break;

#endif /* HAVE_uk_syscall_mknod */

#ifdef HAVE_uk_syscall_rmdir
	case SYS_rmdir:

#ifdef HAVE_uk_syscall_e_rmdir
		ret = uk_syscall_r_e_rmdir((long)execenv);
#else /* !HAVE_uk_syscall_e_rmdir */
		ret = uk_syscall_r_rmdir(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_rmdir */

		break;

#endif /* HAVE_uk_syscall_rmdir */

#ifdef HAVE_uk_syscall_rename
	case SYS_rename:

#ifdef HAVE_uk_syscall_e_rename
		ret = uk_syscall_r_e_rename((long)execenv);
#else /* !HAVE_uk_syscall_e_rename */
		ret = uk_syscall_r_rename(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_rename */

		break;

#endif /* HAVE_uk_syscall_rename */

#ifdef HAVE_uk_syscall_renameat
	case SYS_renameat:

#ifdef HAVE_uk_syscall_e_renameat
		ret = uk_syscall_r_e_renameat((long)execenv);
#else /* !HAVE_uk_syscall_e_renameat */
		ret = uk_syscall_r_renameat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_renameat */

		break;

#endif /* HAVE_uk_syscall_renameat */

#ifdef HAVE_uk_syscall_umask
	case SYS_umask:

#ifdef HAVE_uk_syscall_e_umask
		ret = uk_syscall_r_e_umask((long)execenv);
#else /* !HAVE_uk_syscall_e_umask */
		ret = uk_syscall_r_umask(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_umask */

		break;

#endif /* HAVE_uk_syscall_umask */

#ifdef HAVE_uk_syscall_lstat
	case SYS_lstat:

#ifdef HAVE_uk_syscall_e_lstat
		ret = uk_syscall_r_e_lstat((long)execenv);
#else /* !HAVE_uk_syscall_e_lstat */
		ret = uk_syscall_r_lstat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_lstat */

		break;

#endif /* HAVE_uk_syscall_lstat */

#ifdef HAVE_uk_syscall_flock
	case SYS_flock:

#ifdef HAVE_uk_syscall_e_flock
		ret = uk_syscall_r_e_flock((long)execenv);
#else /* !HAVE_uk_syscall_e_flock */
		ret = uk_syscall_r_flock(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_flock */

		break;

#endif /* HAVE_uk_syscall_flock */

#ifdef HAVE_uk_syscall_getcwd
	case SYS_getcwd:

#ifdef HAVE_uk_syscall_e_getcwd
		ret = uk_syscall_r_e_getcwd((long)execenv);
#else /* !HAVE_uk_syscall_e_getcwd */
		ret = uk_syscall_r_getcwd(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_getcwd */

		break;

#endif /* HAVE_uk_syscall_getcwd */

#ifdef HAVE_uk_syscall_utimensat
	case SYS_utimensat:

#ifdef HAVE_uk_syscall_e_utimensat
		ret = uk_syscall_r_e_utimensat((long)execenv);
#else /* !HAVE_uk_syscall_e_utimensat */
		ret = uk_syscall_r_utimensat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_utimensat */

		break;

#endif /* HAVE_uk_syscall_utimensat */

#ifdef HAVE_uk_syscall_futimesat
	case SYS_futimesat:

#ifdef HAVE_uk_syscall_e_futimesat
		ret = uk_syscall_r_e_futimesat((long)execenv);
#else /* !HAVE_uk_syscall_e_futimesat */
		ret = uk_syscall_r_futimesat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_futimesat */

		break;

#endif /* HAVE_uk_syscall_futimesat */

#ifdef HAVE_uk_syscall_sync
	case SYS_sync:

#ifdef HAVE_uk_syscall_e_sync
		ret = uk_syscall_r_e_sync((long)execenv);
#else /* !HAVE_uk_syscall_e_sync */
		ret = uk_syscall_r_sync(
					);

#endif /* !HAVE_uk_syscall_e_sync */

		break;

#endif /* HAVE_uk_syscall_sync */

#ifdef HAVE_uk_syscall_mount
	case SYS_mount:

#ifdef HAVE_uk_syscall_e_mount
		ret = uk_syscall_r_e_mount((long)execenv);
#else /* !HAVE_uk_syscall_e_mount */
		ret = uk_syscall_r_mount(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3, execenv->regs.__syscall_rarg4);

#endif /* !HAVE_uk_syscall_e_mount */

		break;

#endif /* HAVE_uk_syscall_mount */

#ifdef HAVE_uk_syscall_statfs
	case SYS_statfs:

#ifdef HAVE_uk_syscall_e_statfs
		ret = uk_syscall_r_e_statfs((long)execenv);
#else /* !HAVE_uk_syscall_e_statfs */
		ret = uk_syscall_r_statfs(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_statfs */

		break;

#endif /* HAVE_uk_syscall_statfs */

#ifdef HAVE_uk_syscall_fstatfs
	case SYS_fstatfs:

#ifdef HAVE_uk_syscall_e_fstatfs
		ret = uk_syscall_r_e_fstatfs((long)execenv);
#else /* !HAVE_uk_syscall_e_fstatfs */
		ret = uk_syscall_r_fstatfs(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_fstatfs */

		break;

#endif /* HAVE_uk_syscall_fstatfs */

#ifdef HAVE_uk_syscall_lchown
	case SYS_lchown:

#ifdef HAVE_uk_syscall_e_lchown
		ret = uk_syscall_r_e_lchown((long)execenv);
#else /* !HAVE_uk_syscall_e_lchown */
		ret = uk_syscall_r_lchown(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_lchown */

		break;

#endif /* HAVE_uk_syscall_lchown */

#ifdef HAVE_uk_syscall_chown
	case SYS_chown:

#ifdef HAVE_uk_syscall_e_chown
		ret = uk_syscall_r_e_chown((long)execenv);
#else /* !HAVE_uk_syscall_e_chown */
		ret = uk_syscall_r_chown(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_chown */

		break;

#endif /* HAVE_uk_syscall_chown */

#ifdef HAVE_uk_syscall_stat
	case SYS_stat:

#ifdef HAVE_uk_syscall_e_stat
		ret = uk_syscall_r_e_stat((long)execenv);
#else /* !HAVE_uk_syscall_e_stat */
		ret = uk_syscall_r_stat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_stat */

		break;

#endif /* HAVE_uk_syscall_stat */

#ifdef HAVE_uk_syscall_mkdir
	case SYS_mkdir:

#ifdef HAVE_uk_syscall_e_mkdir
		ret = uk_syscall_r_e_mkdir((long)execenv);
#else /* !HAVE_uk_syscall_e_mkdir */
		ret = uk_syscall_r_mkdir(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_mkdir */

		break;

#endif /* HAVE_uk_syscall_mkdir */

#ifdef HAVE_uk_syscall_mkdirat
	case SYS_mkdirat:

#ifdef HAVE_uk_syscall_e_mkdirat
		ret = uk_syscall_r_e_mkdirat((long)execenv);
#else /* !HAVE_uk_syscall_e_mkdirat */
		ret = uk_syscall_r_mkdirat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_mkdirat */

		break;

#endif /* HAVE_uk_syscall_mkdirat */

#ifdef HAVE_uk_syscall_umount2
	case SYS_umount2:

#ifdef HAVE_uk_syscall_e_umount2
		ret = uk_syscall_r_e_umount2((long)execenv);
#else /* !HAVE_uk_syscall_e_umount2 */
		ret = uk_syscall_r_umount2(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_umount2 */

		break;

#endif /* HAVE_uk_syscall_umount2 */

#ifdef HAVE_uk_syscall_symlink
	case SYS_symlink:

#ifdef HAVE_uk_syscall_e_symlink
		ret = uk_syscall_r_e_symlink((long)execenv);
#else /* !HAVE_uk_syscall_e_symlink */
		ret = uk_syscall_r_symlink(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_symlink */

		break;

#endif /* HAVE_uk_syscall_symlink */

#ifdef HAVE_uk_syscall_unlink
	case SYS_unlink:

#ifdef HAVE_uk_syscall_e_unlink
		ret = uk_syscall_r_e_unlink((long)execenv);
#else /* !HAVE_uk_syscall_e_unlink */
		ret = uk_syscall_r_unlink(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_unlink */

		break;

#endif /* HAVE_uk_syscall_unlink */

#ifdef HAVE_uk_syscall_unlinkat
	case SYS_unlinkat:

#ifdef HAVE_uk_syscall_e_unlinkat
		ret = uk_syscall_r_e_unlinkat((long)execenv);
#else /* !HAVE_uk_syscall_e_unlinkat */
		ret = uk_syscall_r_unlinkat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_unlinkat */

		break;

#endif /* HAVE_uk_syscall_unlinkat */

#ifdef HAVE_uk_syscall_chroot
	case SYS_chroot:

#ifdef HAVE_uk_syscall_e_chroot
		ret = uk_syscall_r_e_chroot((long)execenv);
#else /* !HAVE_uk_syscall_e_chroot */
		ret = uk_syscall_r_chroot(
					execenv->regs.__syscall_rarg0);

#endif /* !HAVE_uk_syscall_e_chroot */

		break;

#endif /* HAVE_uk_syscall_chroot */

#ifdef HAVE_uk_syscall_getdents64
	case SYS_getdents64:

#ifdef HAVE_uk_syscall_e_getdents64
		ret = uk_syscall_r_e_getdents64((long)execenv);
#else /* !HAVE_uk_syscall_e_getdents64 */
		ret = uk_syscall_r_getdents64(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_getdents64 */

		break;

#endif /* HAVE_uk_syscall_getdents64 */

#ifdef HAVE_uk_syscall_newfstatat
	case SYS_newfstatat:

#ifdef HAVE_uk_syscall_e_newfstatat
		ret = uk_syscall_r_e_newfstatat((long)execenv);
#else /* !HAVE_uk_syscall_e_newfstatat */
		ret = uk_syscall_r_newfstatat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_newfstatat */

		break;

#endif /* HAVE_uk_syscall_newfstatat */

#ifdef HAVE_uk_syscall_open
	case SYS_open:

#ifdef HAVE_uk_syscall_e_open
		ret = uk_syscall_r_e_open((long)execenv);
#else /* !HAVE_uk_syscall_e_open */
		ret = uk_syscall_r_open(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2);

#endif /* !HAVE_uk_syscall_e_open */

		break;

#endif /* HAVE_uk_syscall_open */

#ifdef HAVE_uk_syscall_openat
	case SYS_openat:

#ifdef HAVE_uk_syscall_e_openat
		ret = uk_syscall_r_e_openat((long)execenv);
#else /* !HAVE_uk_syscall_e_openat */
		ret = uk_syscall_r_openat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1, execenv->regs.__syscall_rarg2, execenv->regs.__syscall_rarg3);

#endif /* !HAVE_uk_syscall_e_openat */

		break;

#endif /* HAVE_uk_syscall_openat */

#ifdef HAVE_uk_syscall_creat
	case SYS_creat:

#ifdef HAVE_uk_syscall_e_creat
		ret = uk_syscall_r_e_creat((long)execenv);
#else /* !HAVE_uk_syscall_e_creat */
		ret = uk_syscall_r_creat(
					execenv->regs.__syscall_rarg0, execenv->regs.__syscall_rarg1);

#endif /* !HAVE_uk_syscall_e_creat */

		break;

#endif /* HAVE_uk_syscall_creat */
	default:
		uk_pr_debug("syscall \"%s\" is not available\n", uk_syscall_name(execenv->regs.__syscall_rsyscall));
		ret = -ENOSYS;
	}
	return ret;
}

