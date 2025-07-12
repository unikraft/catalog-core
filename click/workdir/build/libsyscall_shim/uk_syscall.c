/* Auto generated file. DO NOT EDIT */


#include <uk/syscall.h>
#include <uk/print.h>

long uk_vsyscall(long nr, va_list arg __maybe_unused)
{
	long ret;
	__maybe_unused long a1, a2, a3, a4, a5, a6;
	switch (nr) {
#ifdef HAVE_uk_syscall_close
	case SYS_close:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_close(a1);
		break;
#endif /* HAVE_uk_syscall_close */

#ifdef HAVE_uk_syscall_dup
	case SYS_dup:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_dup(a1);
		break;
#endif /* HAVE_uk_syscall_dup */

#ifdef HAVE_uk_syscall_dup3
	case SYS_dup3:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_dup3(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_dup3 */

#ifdef HAVE_uk_syscall_dup2
	case SYS_dup2:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_dup2(a1, a2);
		break;
#endif /* HAVE_uk_syscall_dup2 */

#ifdef HAVE_uk_syscall_preadv2
	case SYS_preadv2:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_preadv2(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_preadv2 */

#ifdef HAVE_uk_syscall_preadv
	case SYS_preadv:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_preadv(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_preadv */

#ifdef HAVE_uk_syscall_pread64
	case SYS_pread64:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_pread64(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_pread64 */

#ifdef HAVE_uk_syscall_readv
	case SYS_readv:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_readv(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_readv */

#ifdef HAVE_uk_syscall_read
	case SYS_read:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_read(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_read */

#ifdef HAVE_uk_syscall_pwritev2
	case SYS_pwritev2:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_pwritev2(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_pwritev2 */

#ifdef HAVE_uk_syscall_pwritev
	case SYS_pwritev:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_pwritev(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_pwritev */

#ifdef HAVE_uk_syscall_pwrite64
	case SYS_pwrite64:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_pwrite64(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_pwrite64 */

#ifdef HAVE_uk_syscall_writev
	case SYS_writev:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_writev(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_writev */

#ifdef HAVE_uk_syscall_write
	case SYS_write:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_write(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_write */

#ifdef HAVE_uk_syscall_lseek
	case SYS_lseek:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_lseek(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_lseek */

#ifdef HAVE_uk_syscall_fstat
	case SYS_fstat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_fstat(a1, a2);
		break;
#endif /* HAVE_uk_syscall_fstat */

#ifdef HAVE_uk_syscall_fchmod
	case SYS_fchmod:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_fchmod(a1, a2);
		break;
#endif /* HAVE_uk_syscall_fchmod */

#ifdef HAVE_uk_syscall_fchown
	case SYS_fchown:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_fchown(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_fchown */

#ifdef HAVE_uk_syscall_fsync
	case SYS_fsync:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_fsync(a1);
		break;
#endif /* HAVE_uk_syscall_fsync */

#ifdef HAVE_uk_syscall_fdatasync
	case SYS_fdatasync:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_fdatasync(a1);
		break;
#endif /* HAVE_uk_syscall_fdatasync */

#ifdef HAVE_uk_syscall_ftruncate
	case SYS_ftruncate:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_ftruncate(a1, a2);
		break;
#endif /* HAVE_uk_syscall_ftruncate */

#ifdef HAVE_uk_syscall_fallocate
	case SYS_fallocate:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_fallocate(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_fallocate */

#ifdef HAVE_uk_syscall_fadvise64
	case SYS_fadvise64:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_fadvise64(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_fadvise64 */

#ifdef HAVE_uk_syscall_fcntl
	case SYS_fcntl:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_fcntl(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_fcntl */

#ifdef HAVE_uk_syscall_ioctl
	case SYS_ioctl:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_ioctl(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_ioctl */

#ifdef HAVE_uk_syscall_pipe
	case SYS_pipe:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_pipe(a1);
		break;
#endif /* HAVE_uk_syscall_pipe */

#ifdef HAVE_uk_syscall_pipe2
	case SYS_pipe2:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_pipe2(a1, a2);
		break;
#endif /* HAVE_uk_syscall_pipe2 */

#ifdef HAVE_uk_syscall_poll
	case SYS_poll:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_poll(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_poll */

#ifdef HAVE_uk_syscall_ppoll
	case SYS_ppoll:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_ppoll(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_ppoll */

#ifdef HAVE_uk_syscall_select
	case SYS_select:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_select(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_select */

#ifdef HAVE_uk_syscall_pselect6
	case SYS_pselect6:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		a6 = va_arg(arg, long);
		ret = uk_syscall_e_pselect6(a1, a2, a3, a4, a5, a6);
		break;
#endif /* HAVE_uk_syscall_pselect6 */

#ifdef HAVE_uk_syscall_epoll_create
	case SYS_epoll_create:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_epoll_create(a1);
		break;
#endif /* HAVE_uk_syscall_epoll_create */

#ifdef HAVE_uk_syscall_epoll_create1
	case SYS_epoll_create1:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_epoll_create1(a1);
		break;
#endif /* HAVE_uk_syscall_epoll_create1 */

#ifdef HAVE_uk_syscall_epoll_ctl
	case SYS_epoll_ctl:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_epoll_ctl(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_epoll_ctl */

#ifdef HAVE_uk_syscall_epoll_wait
	case SYS_epoll_wait:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_epoll_wait(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_epoll_wait */

#ifdef HAVE_uk_syscall_epoll_pwait
	case SYS_epoll_pwait:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		a6 = va_arg(arg, long);
		ret = uk_syscall_e_epoll_pwait(a1, a2, a3, a4, a5, a6);
		break;
#endif /* HAVE_uk_syscall_epoll_pwait */

#ifdef HAVE_uk_syscall_epoll_pwait2
	case SYS_epoll_pwait2:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		a6 = va_arg(arg, long);
		ret = uk_syscall_e_epoll_pwait2(a1, a2, a3, a4, a5, a6);
		break;
#endif /* HAVE_uk_syscall_epoll_pwait2 */

#ifdef HAVE_uk_syscall_alarm
	case SYS_alarm:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_alarm(a1);
		break;
#endif /* HAVE_uk_syscall_alarm */

#ifdef HAVE_uk_syscall_pause
	case SYS_pause:
		ret = uk_syscall_e_pause();
		break;
#endif /* HAVE_uk_syscall_pause */

#ifdef HAVE_uk_syscall_sigaltstack
	case SYS_sigaltstack:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_sigaltstack(a1, a2);
		break;
#endif /* HAVE_uk_syscall_sigaltstack */

#ifdef HAVE_uk_syscall_rt_sigpending
	case SYS_rt_sigpending:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_rt_sigpending(a1, a2);
		break;
#endif /* HAVE_uk_syscall_rt_sigpending */

#ifdef HAVE_uk_syscall_rt_sigprocmask
	case SYS_rt_sigprocmask:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_rt_sigprocmask(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_rt_sigprocmask */

#ifdef HAVE_uk_syscall_rt_sigsuspend
	case SYS_rt_sigsuspend:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_rt_sigsuspend(a1, a2);
		break;
#endif /* HAVE_uk_syscall_rt_sigsuspend */

#ifdef HAVE_uk_syscall_rt_sigaction
	case SYS_rt_sigaction:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_rt_sigaction(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_rt_sigaction */

#ifdef HAVE_uk_syscall_rt_sigqueueinfo
	case SYS_rt_sigqueueinfo:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_rt_sigqueueinfo(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_rt_sigqueueinfo */

#ifdef HAVE_uk_syscall_rt_tgsigqueueinfo
	case SYS_rt_tgsigqueueinfo:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_rt_tgsigqueueinfo(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_rt_tgsigqueueinfo */

#ifdef HAVE_uk_syscall_rt_sigtimedwait
	case SYS_rt_sigtimedwait:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_rt_sigtimedwait(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_rt_sigtimedwait */

#ifdef HAVE_uk_syscall_kill
	case SYS_kill:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_kill(a1, a2);
		break;
#endif /* HAVE_uk_syscall_kill */

#ifdef HAVE_uk_syscall_tgkill
	case SYS_tgkill:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_tgkill(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_tgkill */

#ifdef HAVE_uk_syscall_tkill
	case SYS_tkill:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_tkill(a1, a2);
		break;
#endif /* HAVE_uk_syscall_tkill */

#ifdef HAVE_uk_syscall_wait4
	case SYS_wait4:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_wait4(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_wait4 */

#ifdef HAVE_uk_syscall_waitid
	case SYS_waitid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_waitid(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_waitid */

#ifdef HAVE_uk_syscall_getpgid
	case SYS_getpgid:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_getpgid(a1);
		break;
#endif /* HAVE_uk_syscall_getpgid */

#ifdef HAVE_uk_syscall_setpgid
	case SYS_setpgid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_setpgid(a1, a2);
		break;
#endif /* HAVE_uk_syscall_setpgid */

#ifdef HAVE_uk_syscall_setsid
	case SYS_setsid:
		ret = uk_syscall_e_setsid();
		break;
#endif /* HAVE_uk_syscall_setsid */

#ifdef HAVE_uk_syscall_getsid
	case SYS_getsid:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_getsid(a1);
		break;
#endif /* HAVE_uk_syscall_getsid */

#ifdef HAVE_uk_syscall_setpriority
	case SYS_setpriority:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_setpriority(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_setpriority */

#ifdef HAVE_uk_syscall_getpriority
	case SYS_getpriority:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_getpriority(a1, a2);
		break;
#endif /* HAVE_uk_syscall_getpriority */

#ifdef HAVE_uk_syscall_getpgrp
	case SYS_getpgrp:
		ret = uk_syscall_e_getpgrp();
		break;
#endif /* HAVE_uk_syscall_getpgrp */

#ifdef HAVE_uk_syscall_getpid
	case SYS_getpid:
		ret = uk_syscall_e_getpid();
		break;
#endif /* HAVE_uk_syscall_getpid */

#ifdef HAVE_uk_syscall_gettid
	case SYS_gettid:
		ret = uk_syscall_e_gettid();
		break;
#endif /* HAVE_uk_syscall_gettid */

#ifdef HAVE_uk_syscall_getppid
	case SYS_getppid:
		ret = uk_syscall_e_getppid();
		break;
#endif /* HAVE_uk_syscall_getppid */

#ifdef HAVE_uk_syscall_prlimit64
	case SYS_prlimit64:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_prlimit64(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_prlimit64 */

#ifdef HAVE_uk_syscall_getrlimit
	case SYS_getrlimit:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_getrlimit(a1, a2);
		break;
#endif /* HAVE_uk_syscall_getrlimit */

#ifdef HAVE_uk_syscall_setrlimit
	case SYS_setrlimit:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_setrlimit(a1, a2);
		break;
#endif /* HAVE_uk_syscall_setrlimit */

#ifdef HAVE_uk_syscall_getrusage
	case SYS_getrusage:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_getrusage(a1, a2);
		break;
#endif /* HAVE_uk_syscall_getrusage */

#ifdef HAVE_uk_syscall_prctl
	case SYS_prctl:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_prctl(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_prctl */

#ifdef HAVE_uk_syscall_clone
	case SYS_clone:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_clone(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_clone */

#ifdef HAVE_uk_syscall_exit
	case SYS_exit:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_exit(a1);
		break;
#endif /* HAVE_uk_syscall_exit */

#ifdef HAVE_uk_syscall_exit_group
	case SYS_exit_group:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_exit_group(a1);
		break;
#endif /* HAVE_uk_syscall_exit_group */

#ifdef HAVE_uk_syscall_socket
	case SYS_socket:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_socket(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_socket */

#ifdef HAVE_uk_syscall_accept
	case SYS_accept:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_accept(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_accept */

#ifdef HAVE_uk_syscall_accept4
	case SYS_accept4:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_accept4(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_accept4 */

#ifdef HAVE_uk_syscall_getsockopt
	case SYS_getsockopt:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_getsockopt(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_getsockopt */

#ifdef HAVE_uk_syscall_setsockopt
	case SYS_setsockopt:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_setsockopt(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_setsockopt */

#ifdef HAVE_uk_syscall_bind
	case SYS_bind:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_bind(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_bind */

#ifdef HAVE_uk_syscall_listen
	case SYS_listen:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_listen(a1, a2);
		break;
#endif /* HAVE_uk_syscall_listen */

#ifdef HAVE_uk_syscall_connect
	case SYS_connect:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_connect(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_connect */

#ifdef HAVE_uk_syscall_getpeername
	case SYS_getpeername:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_getpeername(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_getpeername */

#ifdef HAVE_uk_syscall_getsockname
	case SYS_getsockname:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_getsockname(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_getsockname */

#ifdef HAVE_uk_syscall_recvfrom
	case SYS_recvfrom:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		a6 = va_arg(arg, long);
		ret = uk_syscall_e_recvfrom(a1, a2, a3, a4, a5, a6);
		break;
#endif /* HAVE_uk_syscall_recvfrom */

#ifdef HAVE_uk_syscall_recvmsg
	case SYS_recvmsg:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_recvmsg(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_recvmsg */

#ifdef HAVE_uk_syscall_sendto
	case SYS_sendto:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		a6 = va_arg(arg, long);
		ret = uk_syscall_e_sendto(a1, a2, a3, a4, a5, a6);
		break;
#endif /* HAVE_uk_syscall_sendto */

#ifdef HAVE_uk_syscall_sendmsg
	case SYS_sendmsg:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_sendmsg(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_sendmsg */

#ifdef HAVE_uk_syscall_socketpair
	case SYS_socketpair:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_socketpair(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_socketpair */

#ifdef HAVE_uk_syscall_shutdown
	case SYS_shutdown:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_shutdown(a1, a2);
		break;
#endif /* HAVE_uk_syscall_shutdown */

#ifdef HAVE_uk_syscall_futex
	case SYS_futex:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		a6 = va_arg(arg, long);
		ret = uk_syscall_e_futex(a1, a2, a3, a4, a5, a6);
		break;
#endif /* HAVE_uk_syscall_futex */

#ifdef HAVE_uk_syscall_set_tid_address
	case SYS_set_tid_address:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_set_tid_address(a1);
		break;
#endif /* HAVE_uk_syscall_set_tid_address */

#ifdef HAVE_uk_syscall_getuid
	case SYS_getuid:
		ret = uk_syscall_e_getuid();
		break;
#endif /* HAVE_uk_syscall_getuid */

#ifdef HAVE_uk_syscall_setuid
	case SYS_setuid:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_setuid(a1);
		break;
#endif /* HAVE_uk_syscall_setuid */

#ifdef HAVE_uk_syscall_geteuid
	case SYS_geteuid:
		ret = uk_syscall_e_geteuid();
		break;
#endif /* HAVE_uk_syscall_geteuid */

#ifdef HAVE_uk_syscall_setreuid
	case SYS_setreuid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_setreuid(a1, a2);
		break;
#endif /* HAVE_uk_syscall_setreuid */

#ifdef HAVE_uk_syscall_getresuid
	case SYS_getresuid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_getresuid(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_getresuid */

#ifdef HAVE_uk_syscall_setresuid
	case SYS_setresuid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_setresuid(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_setresuid */

#ifdef HAVE_uk_syscall_setfsuid
	case SYS_setfsuid:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_setfsuid(a1);
		break;
#endif /* HAVE_uk_syscall_setfsuid */

#ifdef HAVE_uk_syscall_getgid
	case SYS_getgid:
		ret = uk_syscall_e_getgid();
		break;
#endif /* HAVE_uk_syscall_getgid */

#ifdef HAVE_uk_syscall_setgid
	case SYS_setgid:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_setgid(a1);
		break;
#endif /* HAVE_uk_syscall_setgid */

#ifdef HAVE_uk_syscall_getegid
	case SYS_getegid:
		ret = uk_syscall_e_getegid();
		break;
#endif /* HAVE_uk_syscall_getegid */

#ifdef HAVE_uk_syscall_setregid
	case SYS_setregid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_setregid(a1, a2);
		break;
#endif /* HAVE_uk_syscall_setregid */

#ifdef HAVE_uk_syscall_getresgid
	case SYS_getresgid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_getresgid(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_getresgid */

#ifdef HAVE_uk_syscall_setresgid
	case SYS_setresgid:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_setresgid(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_setresgid */

#ifdef HAVE_uk_syscall_setfsgid
	case SYS_setfsgid:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_setfsgid(a1);
		break;
#endif /* HAVE_uk_syscall_setfsgid */

#ifdef HAVE_uk_syscall_getgroups
	case SYS_getgroups:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_getgroups(a1, a2);
		break;
#endif /* HAVE_uk_syscall_getgroups */

#ifdef HAVE_uk_syscall_setgroups
	case SYS_setgroups:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_setgroups(a1, a2);
		break;
#endif /* HAVE_uk_syscall_setgroups */

#ifdef HAVE_uk_syscall_capget
	case SYS_capget:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_capget(a1, a2);
		break;
#endif /* HAVE_uk_syscall_capget */

#ifdef HAVE_uk_syscall_capset
	case SYS_capset:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_capset(a1, a2);
		break;
#endif /* HAVE_uk_syscall_capset */

#ifdef HAVE_uk_syscall_mmap
	case SYS_mmap:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		a6 = va_arg(arg, long);
		ret = uk_syscall_e_mmap(a1, a2, a3, a4, a5, a6);
		break;
#endif /* HAVE_uk_syscall_mmap */

#ifdef HAVE_uk_syscall_munmap
	case SYS_munmap:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_munmap(a1, a2);
		break;
#endif /* HAVE_uk_syscall_munmap */

#ifdef HAVE_uk_syscall_madvise
	case SYS_madvise:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_madvise(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_madvise */

#ifdef HAVE_uk_syscall_mremap
	case SYS_mremap:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_mremap(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_mremap */

#ifdef HAVE_uk_syscall_mprotect
	case SYS_mprotect:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_mprotect(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_mprotect */

#ifdef HAVE_uk_syscall_sched_yield
	case SYS_sched_yield:
		ret = uk_syscall_e_sched_yield();
		break;
#endif /* HAVE_uk_syscall_sched_yield */

#ifdef HAVE_uk_syscall_sched_getaffinity
	case SYS_sched_getaffinity:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_sched_getaffinity(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_sched_getaffinity */

#ifdef HAVE_uk_syscall_sched_setaffinity
	case SYS_sched_setaffinity:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_sched_setaffinity(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_sched_setaffinity */

#ifdef HAVE_uk_syscall_membarrier
	case SYS_membarrier:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_membarrier(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_membarrier */

#ifdef HAVE_uk_syscall_nanosleep
	case SYS_nanosleep:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_nanosleep(a1, a2);
		break;
#endif /* HAVE_uk_syscall_nanosleep */

#ifdef HAVE_uk_syscall_clock_getres
	case SYS_clock_getres:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_clock_getres(a1, a2);
		break;
#endif /* HAVE_uk_syscall_clock_getres */

#ifdef HAVE_uk_syscall_clock_gettime
	case SYS_clock_gettime:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_clock_gettime(a1, a2);
		break;
#endif /* HAVE_uk_syscall_clock_gettime */

#ifdef HAVE_uk_syscall_clock_settime
	case SYS_clock_settime:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_clock_settime(a1, a2);
		break;
#endif /* HAVE_uk_syscall_clock_settime */

#ifdef HAVE_uk_syscall_clock_nanosleep
	case SYS_clock_nanosleep:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_clock_nanosleep(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_clock_nanosleep */

#ifdef HAVE_uk_syscall_gettimeofday
	case SYS_gettimeofday:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_gettimeofday(a1, a2);
		break;
#endif /* HAVE_uk_syscall_gettimeofday */

#ifdef HAVE_uk_syscall_settimeofday
	case SYS_settimeofday:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_settimeofday(a1, a2);
		break;
#endif /* HAVE_uk_syscall_settimeofday */

#ifdef HAVE_uk_syscall_times
	case SYS_times:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_times(a1);
		break;
#endif /* HAVE_uk_syscall_times */

#ifdef HAVE_uk_syscall_time
	case SYS_time:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_time(a1);
		break;
#endif /* HAVE_uk_syscall_time */

#ifdef HAVE_uk_syscall_setitimer
	case SYS_setitimer:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_setitimer(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_setitimer */

#ifdef HAVE_uk_syscall_timer_create
	case SYS_timer_create:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_timer_create(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_timer_create */

#ifdef HAVE_uk_syscall_timer_delete
	case SYS_timer_delete:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_timer_delete(a1);
		break;
#endif /* HAVE_uk_syscall_timer_delete */

#ifdef HAVE_uk_syscall_timer_settime
	case SYS_timer_settime:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_timer_settime(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_timer_settime */

#ifdef HAVE_uk_syscall_timer_gettime
	case SYS_timer_gettime:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_timer_gettime(a1, a2);
		break;
#endif /* HAVE_uk_syscall_timer_gettime */

#ifdef HAVE_uk_syscall_timer_getoverrun
	case SYS_timer_getoverrun:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_timer_getoverrun(a1);
		break;
#endif /* HAVE_uk_syscall_timer_getoverrun */

#ifdef HAVE_uk_syscall_readlink
	case SYS_readlink:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_readlink(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_readlink */

#ifdef HAVE_uk_syscall_link
	case SYS_link:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_link(a1, a2);
		break;
#endif /* HAVE_uk_syscall_link */

#ifdef HAVE_uk_syscall_truncate
	case SYS_truncate:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_truncate(a1, a2);
		break;
#endif /* HAVE_uk_syscall_truncate */

#ifdef HAVE_uk_syscall_access
	case SYS_access:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_access(a1, a2);
		break;
#endif /* HAVE_uk_syscall_access */

#ifdef HAVE_uk_syscall_faccessat
	case SYS_faccessat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_faccessat(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_faccessat */

#ifdef HAVE_uk_syscall_chdir
	case SYS_chdir:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_chdir(a1);
		break;
#endif /* HAVE_uk_syscall_chdir */

#ifdef HAVE_uk_syscall_fchdir
	case SYS_fchdir:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_fchdir(a1);
		break;
#endif /* HAVE_uk_syscall_fchdir */

#ifdef HAVE_uk_syscall_chmod
	case SYS_chmod:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_chmod(a1, a2);
		break;
#endif /* HAVE_uk_syscall_chmod */

#ifdef HAVE_uk_syscall_utime
	case SYS_utime:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_utime(a1, a2);
		break;
#endif /* HAVE_uk_syscall_utime */

#ifdef HAVE_uk_syscall_utimes
	case SYS_utimes:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_utimes(a1, a2);
		break;
#endif /* HAVE_uk_syscall_utimes */

#ifdef HAVE_uk_syscall_mknod
	case SYS_mknod:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_mknod(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_mknod */

#ifdef HAVE_uk_syscall_rmdir
	case SYS_rmdir:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_rmdir(a1);
		break;
#endif /* HAVE_uk_syscall_rmdir */

#ifdef HAVE_uk_syscall_rename
	case SYS_rename:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_rename(a1, a2);
		break;
#endif /* HAVE_uk_syscall_rename */

#ifdef HAVE_uk_syscall_renameat
	case SYS_renameat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_renameat(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_renameat */

#ifdef HAVE_uk_syscall_umask
	case SYS_umask:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_umask(a1);
		break;
#endif /* HAVE_uk_syscall_umask */

#ifdef HAVE_uk_syscall_lstat
	case SYS_lstat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_lstat(a1, a2);
		break;
#endif /* HAVE_uk_syscall_lstat */

#ifdef HAVE_uk_syscall_flock
	case SYS_flock:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_flock(a1, a2);
		break;
#endif /* HAVE_uk_syscall_flock */

#ifdef HAVE_uk_syscall_getcwd
	case SYS_getcwd:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_getcwd(a1, a2);
		break;
#endif /* HAVE_uk_syscall_getcwd */

#ifdef HAVE_uk_syscall_utimensat
	case SYS_utimensat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_utimensat(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_utimensat */

#ifdef HAVE_uk_syscall_futimesat
	case SYS_futimesat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_futimesat(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_futimesat */

#ifdef HAVE_uk_syscall_sync
	case SYS_sync:
		ret = uk_syscall_e_sync();
		break;
#endif /* HAVE_uk_syscall_sync */

#ifdef HAVE_uk_syscall_mount
	case SYS_mount:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		a5 = va_arg(arg, long);
		ret = uk_syscall_e_mount(a1, a2, a3, a4, a5);
		break;
#endif /* HAVE_uk_syscall_mount */

#ifdef HAVE_uk_syscall_statfs
	case SYS_statfs:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_statfs(a1, a2);
		break;
#endif /* HAVE_uk_syscall_statfs */

#ifdef HAVE_uk_syscall_fstatfs
	case SYS_fstatfs:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_fstatfs(a1, a2);
		break;
#endif /* HAVE_uk_syscall_fstatfs */

#ifdef HAVE_uk_syscall_lchown
	case SYS_lchown:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_lchown(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_lchown */

#ifdef HAVE_uk_syscall_chown
	case SYS_chown:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_chown(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_chown */

#ifdef HAVE_uk_syscall_stat
	case SYS_stat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_stat(a1, a2);
		break;
#endif /* HAVE_uk_syscall_stat */

#ifdef HAVE_uk_syscall_mkdir
	case SYS_mkdir:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_mkdir(a1, a2);
		break;
#endif /* HAVE_uk_syscall_mkdir */

#ifdef HAVE_uk_syscall_mkdirat
	case SYS_mkdirat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_mkdirat(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_mkdirat */

#ifdef HAVE_uk_syscall_umount2
	case SYS_umount2:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_umount2(a1, a2);
		break;
#endif /* HAVE_uk_syscall_umount2 */

#ifdef HAVE_uk_syscall_symlink
	case SYS_symlink:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_symlink(a1, a2);
		break;
#endif /* HAVE_uk_syscall_symlink */

#ifdef HAVE_uk_syscall_unlink
	case SYS_unlink:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_unlink(a1);
		break;
#endif /* HAVE_uk_syscall_unlink */

#ifdef HAVE_uk_syscall_unlinkat
	case SYS_unlinkat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_unlinkat(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_unlinkat */

#ifdef HAVE_uk_syscall_chroot
	case SYS_chroot:
		a1 = va_arg(arg, long);
		ret = uk_syscall_e_chroot(a1);
		break;
#endif /* HAVE_uk_syscall_chroot */

#ifdef HAVE_uk_syscall_getdents64
	case SYS_getdents64:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_getdents64(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_getdents64 */

#ifdef HAVE_uk_syscall_newfstatat
	case SYS_newfstatat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_newfstatat(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_newfstatat */

#ifdef HAVE_uk_syscall_open
	case SYS_open:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		ret = uk_syscall_e_open(a1, a2, a3);
		break;
#endif /* HAVE_uk_syscall_open */

#ifdef HAVE_uk_syscall_openat
	case SYS_openat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		a3 = va_arg(arg, long);
		a4 = va_arg(arg, long);
		ret = uk_syscall_e_openat(a1, a2, a3, a4);
		break;
#endif /* HAVE_uk_syscall_openat */

#ifdef HAVE_uk_syscall_creat
	case SYS_creat:
		a1 = va_arg(arg, long);
		a2 = va_arg(arg, long);
		ret = uk_syscall_e_creat(a1, a2);
		break;
#endif /* HAVE_uk_syscall_creat */

	default:
		uk_pr_debug("syscall \"%s\" is not available\n", uk_syscall_name(nr));
		errno = -ENOSYS;
		ret = -1;
	}
	return ret;
}

long uk_syscall(long nr, ...)
{
	long ret;
	va_list ap;

	va_start(ap, nr);
	ret = uk_vsyscall(nr, ap);
	va_end(ap);
	return ret;
}
long syscall() __attribute__ ((weak, alias ("uk_syscall")));
