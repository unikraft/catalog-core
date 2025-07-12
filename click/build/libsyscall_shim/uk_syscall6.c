/* Auto generated file. DO NOT EDIT */


#include <uk/syscall.h>
#include <uk/print.h>

long uk_syscall6(long nr, long arg1 __maybe_unused, long arg2 __maybe_unused, long arg3 __maybe_unused, long arg4 __maybe_unused, long arg5 __maybe_unused, long arg6 __maybe_unused)
{
	long ret;

	switch (nr) {
#ifdef HAVE_uk_syscall_close
	case SYS_close:
		ret = uk_syscall_e_close(arg1);
		break;
#endif /* HAVE_uk_syscall_close */

#ifdef HAVE_uk_syscall_dup
	case SYS_dup:
		ret = uk_syscall_e_dup(arg1);
		break;
#endif /* HAVE_uk_syscall_dup */

#ifdef HAVE_uk_syscall_dup3
	case SYS_dup3:
		ret = uk_syscall_e_dup3(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_dup3 */

#ifdef HAVE_uk_syscall_dup2
	case SYS_dup2:
		ret = uk_syscall_e_dup2(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_dup2 */

#ifdef HAVE_uk_syscall_preadv2
	case SYS_preadv2:
		ret = uk_syscall_e_preadv2(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_preadv2 */

#ifdef HAVE_uk_syscall_preadv
	case SYS_preadv:
		ret = uk_syscall_e_preadv(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_preadv */

#ifdef HAVE_uk_syscall_pread64
	case SYS_pread64:
		ret = uk_syscall_e_pread64(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_pread64 */

#ifdef HAVE_uk_syscall_readv
	case SYS_readv:
		ret = uk_syscall_e_readv(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_readv */

#ifdef HAVE_uk_syscall_read
	case SYS_read:
		ret = uk_syscall_e_read(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_read */

#ifdef HAVE_uk_syscall_pwritev2
	case SYS_pwritev2:
		ret = uk_syscall_e_pwritev2(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_pwritev2 */

#ifdef HAVE_uk_syscall_pwritev
	case SYS_pwritev:
		ret = uk_syscall_e_pwritev(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_pwritev */

#ifdef HAVE_uk_syscall_pwrite64
	case SYS_pwrite64:
		ret = uk_syscall_e_pwrite64(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_pwrite64 */

#ifdef HAVE_uk_syscall_writev
	case SYS_writev:
		ret = uk_syscall_e_writev(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_writev */

#ifdef HAVE_uk_syscall_write
	case SYS_write:
		ret = uk_syscall_e_write(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_write */

#ifdef HAVE_uk_syscall_lseek
	case SYS_lseek:
		ret = uk_syscall_e_lseek(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_lseek */

#ifdef HAVE_uk_syscall_fstat
	case SYS_fstat:
		ret = uk_syscall_e_fstat(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_fstat */

#ifdef HAVE_uk_syscall_fchmod
	case SYS_fchmod:
		ret = uk_syscall_e_fchmod(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_fchmod */

#ifdef HAVE_uk_syscall_fchown
	case SYS_fchown:
		ret = uk_syscall_e_fchown(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_fchown */

#ifdef HAVE_uk_syscall_fsync
	case SYS_fsync:
		ret = uk_syscall_e_fsync(arg1);
		break;
#endif /* HAVE_uk_syscall_fsync */

#ifdef HAVE_uk_syscall_fdatasync
	case SYS_fdatasync:
		ret = uk_syscall_e_fdatasync(arg1);
		break;
#endif /* HAVE_uk_syscall_fdatasync */

#ifdef HAVE_uk_syscall_ftruncate
	case SYS_ftruncate:
		ret = uk_syscall_e_ftruncate(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_ftruncate */

#ifdef HAVE_uk_syscall_fallocate
	case SYS_fallocate:
		ret = uk_syscall_e_fallocate(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_fallocate */

#ifdef HAVE_uk_syscall_fadvise64
	case SYS_fadvise64:
		ret = uk_syscall_e_fadvise64(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_fadvise64 */

#ifdef HAVE_uk_syscall_fcntl
	case SYS_fcntl:
		ret = uk_syscall_e_fcntl(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_fcntl */

#ifdef HAVE_uk_syscall_ioctl
	case SYS_ioctl:
		ret = uk_syscall_e_ioctl(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_ioctl */

#ifdef HAVE_uk_syscall_pipe
	case SYS_pipe:
		ret = uk_syscall_e_pipe(arg1);
		break;
#endif /* HAVE_uk_syscall_pipe */

#ifdef HAVE_uk_syscall_pipe2
	case SYS_pipe2:
		ret = uk_syscall_e_pipe2(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_pipe2 */

#ifdef HAVE_uk_syscall_poll
	case SYS_poll:
		ret = uk_syscall_e_poll(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_poll */

#ifdef HAVE_uk_syscall_ppoll
	case SYS_ppoll:
		ret = uk_syscall_e_ppoll(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_ppoll */

#ifdef HAVE_uk_syscall_select
	case SYS_select:
		ret = uk_syscall_e_select(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_select */

#ifdef HAVE_uk_syscall_pselect6
	case SYS_pselect6:
		ret = uk_syscall_e_pselect6(arg1, arg2, arg3, arg4, arg5, arg6);
		break;
#endif /* HAVE_uk_syscall_pselect6 */

#ifdef HAVE_uk_syscall_epoll_create
	case SYS_epoll_create:
		ret = uk_syscall_e_epoll_create(arg1);
		break;
#endif /* HAVE_uk_syscall_epoll_create */

#ifdef HAVE_uk_syscall_epoll_create1
	case SYS_epoll_create1:
		ret = uk_syscall_e_epoll_create1(arg1);
		break;
#endif /* HAVE_uk_syscall_epoll_create1 */

#ifdef HAVE_uk_syscall_epoll_ctl
	case SYS_epoll_ctl:
		ret = uk_syscall_e_epoll_ctl(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_epoll_ctl */

#ifdef HAVE_uk_syscall_epoll_wait
	case SYS_epoll_wait:
		ret = uk_syscall_e_epoll_wait(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_epoll_wait */

#ifdef HAVE_uk_syscall_epoll_pwait
	case SYS_epoll_pwait:
		ret = uk_syscall_e_epoll_pwait(arg1, arg2, arg3, arg4, arg5, arg6);
		break;
#endif /* HAVE_uk_syscall_epoll_pwait */

#ifdef HAVE_uk_syscall_epoll_pwait2
	case SYS_epoll_pwait2:
		ret = uk_syscall_e_epoll_pwait2(arg1, arg2, arg3, arg4, arg5, arg6);
		break;
#endif /* HAVE_uk_syscall_epoll_pwait2 */

#ifdef HAVE_uk_syscall_alarm
	case SYS_alarm:
		ret = uk_syscall_e_alarm(arg1);
		break;
#endif /* HAVE_uk_syscall_alarm */

#ifdef HAVE_uk_syscall_pause
	case SYS_pause:
		ret = uk_syscall_e_pause();
		break;
#endif /* HAVE_uk_syscall_pause */

#ifdef HAVE_uk_syscall_sigaltstack
	case SYS_sigaltstack:
		ret = uk_syscall_e_sigaltstack(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_sigaltstack */

#ifdef HAVE_uk_syscall_rt_sigpending
	case SYS_rt_sigpending:
		ret = uk_syscall_e_rt_sigpending(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_rt_sigpending */

#ifdef HAVE_uk_syscall_rt_sigprocmask
	case SYS_rt_sigprocmask:
		ret = uk_syscall_e_rt_sigprocmask(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_rt_sigprocmask */

#ifdef HAVE_uk_syscall_rt_sigsuspend
	case SYS_rt_sigsuspend:
		ret = uk_syscall_e_rt_sigsuspend(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_rt_sigsuspend */

#ifdef HAVE_uk_syscall_rt_sigaction
	case SYS_rt_sigaction:
		ret = uk_syscall_e_rt_sigaction(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_rt_sigaction */

#ifdef HAVE_uk_syscall_rt_sigqueueinfo
	case SYS_rt_sigqueueinfo:
		ret = uk_syscall_e_rt_sigqueueinfo(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_rt_sigqueueinfo */

#ifdef HAVE_uk_syscall_rt_tgsigqueueinfo
	case SYS_rt_tgsigqueueinfo:
		ret = uk_syscall_e_rt_tgsigqueueinfo(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_rt_tgsigqueueinfo */

#ifdef HAVE_uk_syscall_rt_sigtimedwait
	case SYS_rt_sigtimedwait:
		ret = uk_syscall_e_rt_sigtimedwait(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_rt_sigtimedwait */

#ifdef HAVE_uk_syscall_kill
	case SYS_kill:
		ret = uk_syscall_e_kill(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_kill */

#ifdef HAVE_uk_syscall_tgkill
	case SYS_tgkill:
		ret = uk_syscall_e_tgkill(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_tgkill */

#ifdef HAVE_uk_syscall_tkill
	case SYS_tkill:
		ret = uk_syscall_e_tkill(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_tkill */

#ifdef HAVE_uk_syscall_wait4
	case SYS_wait4:
		ret = uk_syscall_e_wait4(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_wait4 */

#ifdef HAVE_uk_syscall_waitid
	case SYS_waitid:
		ret = uk_syscall_e_waitid(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_waitid */

#ifdef HAVE_uk_syscall_getpgid
	case SYS_getpgid:
		ret = uk_syscall_e_getpgid(arg1);
		break;
#endif /* HAVE_uk_syscall_getpgid */

#ifdef HAVE_uk_syscall_setpgid
	case SYS_setpgid:
		ret = uk_syscall_e_setpgid(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_setpgid */

#ifdef HAVE_uk_syscall_setsid
	case SYS_setsid:
		ret = uk_syscall_e_setsid();
		break;
#endif /* HAVE_uk_syscall_setsid */

#ifdef HAVE_uk_syscall_getsid
	case SYS_getsid:
		ret = uk_syscall_e_getsid(arg1);
		break;
#endif /* HAVE_uk_syscall_getsid */

#ifdef HAVE_uk_syscall_setpriority
	case SYS_setpriority:
		ret = uk_syscall_e_setpriority(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_setpriority */

#ifdef HAVE_uk_syscall_getpriority
	case SYS_getpriority:
		ret = uk_syscall_e_getpriority(arg1, arg2);
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
		ret = uk_syscall_e_prlimit64(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_prlimit64 */

#ifdef HAVE_uk_syscall_getrlimit
	case SYS_getrlimit:
		ret = uk_syscall_e_getrlimit(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_getrlimit */

#ifdef HAVE_uk_syscall_setrlimit
	case SYS_setrlimit:
		ret = uk_syscall_e_setrlimit(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_setrlimit */

#ifdef HAVE_uk_syscall_getrusage
	case SYS_getrusage:
		ret = uk_syscall_e_getrusage(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_getrusage */

#ifdef HAVE_uk_syscall_prctl
	case SYS_prctl:
		ret = uk_syscall_e_prctl(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_prctl */

#ifdef HAVE_uk_syscall_clone
	case SYS_clone:
		ret = uk_syscall_e_clone(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_clone */

#ifdef HAVE_uk_syscall_exit
	case SYS_exit:
		ret = uk_syscall_e_exit(arg1);
		break;
#endif /* HAVE_uk_syscall_exit */

#ifdef HAVE_uk_syscall_exit_group
	case SYS_exit_group:
		ret = uk_syscall_e_exit_group(arg1);
		break;
#endif /* HAVE_uk_syscall_exit_group */

#ifdef HAVE_uk_syscall_socket
	case SYS_socket:
		ret = uk_syscall_e_socket(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_socket */

#ifdef HAVE_uk_syscall_accept
	case SYS_accept:
		ret = uk_syscall_e_accept(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_accept */

#ifdef HAVE_uk_syscall_accept4
	case SYS_accept4:
		ret = uk_syscall_e_accept4(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_accept4 */

#ifdef HAVE_uk_syscall_getsockopt
	case SYS_getsockopt:
		ret = uk_syscall_e_getsockopt(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_getsockopt */

#ifdef HAVE_uk_syscall_setsockopt
	case SYS_setsockopt:
		ret = uk_syscall_e_setsockopt(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_setsockopt */

#ifdef HAVE_uk_syscall_bind
	case SYS_bind:
		ret = uk_syscall_e_bind(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_bind */

#ifdef HAVE_uk_syscall_listen
	case SYS_listen:
		ret = uk_syscall_e_listen(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_listen */

#ifdef HAVE_uk_syscall_connect
	case SYS_connect:
		ret = uk_syscall_e_connect(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_connect */

#ifdef HAVE_uk_syscall_getpeername
	case SYS_getpeername:
		ret = uk_syscall_e_getpeername(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_getpeername */

#ifdef HAVE_uk_syscall_getsockname
	case SYS_getsockname:
		ret = uk_syscall_e_getsockname(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_getsockname */

#ifdef HAVE_uk_syscall_recvfrom
	case SYS_recvfrom:
		ret = uk_syscall_e_recvfrom(arg1, arg2, arg3, arg4, arg5, arg6);
		break;
#endif /* HAVE_uk_syscall_recvfrom */

#ifdef HAVE_uk_syscall_recvmsg
	case SYS_recvmsg:
		ret = uk_syscall_e_recvmsg(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_recvmsg */

#ifdef HAVE_uk_syscall_sendto
	case SYS_sendto:
		ret = uk_syscall_e_sendto(arg1, arg2, arg3, arg4, arg5, arg6);
		break;
#endif /* HAVE_uk_syscall_sendto */

#ifdef HAVE_uk_syscall_sendmsg
	case SYS_sendmsg:
		ret = uk_syscall_e_sendmsg(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_sendmsg */

#ifdef HAVE_uk_syscall_socketpair
	case SYS_socketpair:
		ret = uk_syscall_e_socketpair(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_socketpair */

#ifdef HAVE_uk_syscall_shutdown
	case SYS_shutdown:
		ret = uk_syscall_e_shutdown(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_shutdown */

#ifdef HAVE_uk_syscall_futex
	case SYS_futex:
		ret = uk_syscall_e_futex(arg1, arg2, arg3, arg4, arg5, arg6);
		break;
#endif /* HAVE_uk_syscall_futex */

#ifdef HAVE_uk_syscall_set_tid_address
	case SYS_set_tid_address:
		ret = uk_syscall_e_set_tid_address(arg1);
		break;
#endif /* HAVE_uk_syscall_set_tid_address */

#ifdef HAVE_uk_syscall_getuid
	case SYS_getuid:
		ret = uk_syscall_e_getuid();
		break;
#endif /* HAVE_uk_syscall_getuid */

#ifdef HAVE_uk_syscall_setuid
	case SYS_setuid:
		ret = uk_syscall_e_setuid(arg1);
		break;
#endif /* HAVE_uk_syscall_setuid */

#ifdef HAVE_uk_syscall_geteuid
	case SYS_geteuid:
		ret = uk_syscall_e_geteuid();
		break;
#endif /* HAVE_uk_syscall_geteuid */

#ifdef HAVE_uk_syscall_setreuid
	case SYS_setreuid:
		ret = uk_syscall_e_setreuid(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_setreuid */

#ifdef HAVE_uk_syscall_getresuid
	case SYS_getresuid:
		ret = uk_syscall_e_getresuid(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_getresuid */

#ifdef HAVE_uk_syscall_setresuid
	case SYS_setresuid:
		ret = uk_syscall_e_setresuid(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_setresuid */

#ifdef HAVE_uk_syscall_setfsuid
	case SYS_setfsuid:
		ret = uk_syscall_e_setfsuid(arg1);
		break;
#endif /* HAVE_uk_syscall_setfsuid */

#ifdef HAVE_uk_syscall_getgid
	case SYS_getgid:
		ret = uk_syscall_e_getgid();
		break;
#endif /* HAVE_uk_syscall_getgid */

#ifdef HAVE_uk_syscall_setgid
	case SYS_setgid:
		ret = uk_syscall_e_setgid(arg1);
		break;
#endif /* HAVE_uk_syscall_setgid */

#ifdef HAVE_uk_syscall_getegid
	case SYS_getegid:
		ret = uk_syscall_e_getegid();
		break;
#endif /* HAVE_uk_syscall_getegid */

#ifdef HAVE_uk_syscall_setregid
	case SYS_setregid:
		ret = uk_syscall_e_setregid(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_setregid */

#ifdef HAVE_uk_syscall_getresgid
	case SYS_getresgid:
		ret = uk_syscall_e_getresgid(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_getresgid */

#ifdef HAVE_uk_syscall_setresgid
	case SYS_setresgid:
		ret = uk_syscall_e_setresgid(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_setresgid */

#ifdef HAVE_uk_syscall_setfsgid
	case SYS_setfsgid:
		ret = uk_syscall_e_setfsgid(arg1);
		break;
#endif /* HAVE_uk_syscall_setfsgid */

#ifdef HAVE_uk_syscall_getgroups
	case SYS_getgroups:
		ret = uk_syscall_e_getgroups(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_getgroups */

#ifdef HAVE_uk_syscall_setgroups
	case SYS_setgroups:
		ret = uk_syscall_e_setgroups(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_setgroups */

#ifdef HAVE_uk_syscall_capget
	case SYS_capget:
		ret = uk_syscall_e_capget(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_capget */

#ifdef HAVE_uk_syscall_capset
	case SYS_capset:
		ret = uk_syscall_e_capset(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_capset */

#ifdef HAVE_uk_syscall_mmap
	case SYS_mmap:
		ret = uk_syscall_e_mmap(arg1, arg2, arg3, arg4, arg5, arg6);
		break;
#endif /* HAVE_uk_syscall_mmap */

#ifdef HAVE_uk_syscall_munmap
	case SYS_munmap:
		ret = uk_syscall_e_munmap(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_munmap */

#ifdef HAVE_uk_syscall_madvise
	case SYS_madvise:
		ret = uk_syscall_e_madvise(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_madvise */

#ifdef HAVE_uk_syscall_mremap
	case SYS_mremap:
		ret = uk_syscall_e_mremap(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_mremap */

#ifdef HAVE_uk_syscall_mprotect
	case SYS_mprotect:
		ret = uk_syscall_e_mprotect(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_mprotect */

#ifdef HAVE_uk_syscall_sched_yield
	case SYS_sched_yield:
		ret = uk_syscall_e_sched_yield();
		break;
#endif /* HAVE_uk_syscall_sched_yield */

#ifdef HAVE_uk_syscall_sched_getaffinity
	case SYS_sched_getaffinity:
		ret = uk_syscall_e_sched_getaffinity(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_sched_getaffinity */

#ifdef HAVE_uk_syscall_sched_setaffinity
	case SYS_sched_setaffinity:
		ret = uk_syscall_e_sched_setaffinity(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_sched_setaffinity */

#ifdef HAVE_uk_syscall_membarrier
	case SYS_membarrier:
		ret = uk_syscall_e_membarrier(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_membarrier */

#ifdef HAVE_uk_syscall_nanosleep
	case SYS_nanosleep:
		ret = uk_syscall_e_nanosleep(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_nanosleep */

#ifdef HAVE_uk_syscall_clock_getres
	case SYS_clock_getres:
		ret = uk_syscall_e_clock_getres(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_clock_getres */

#ifdef HAVE_uk_syscall_clock_gettime
	case SYS_clock_gettime:
		ret = uk_syscall_e_clock_gettime(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_clock_gettime */

#ifdef HAVE_uk_syscall_clock_settime
	case SYS_clock_settime:
		ret = uk_syscall_e_clock_settime(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_clock_settime */

#ifdef HAVE_uk_syscall_clock_nanosleep
	case SYS_clock_nanosleep:
		ret = uk_syscall_e_clock_nanosleep(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_clock_nanosleep */

#ifdef HAVE_uk_syscall_gettimeofday
	case SYS_gettimeofday:
		ret = uk_syscall_e_gettimeofday(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_gettimeofday */

#ifdef HAVE_uk_syscall_settimeofday
	case SYS_settimeofday:
		ret = uk_syscall_e_settimeofday(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_settimeofday */

#ifdef HAVE_uk_syscall_times
	case SYS_times:
		ret = uk_syscall_e_times(arg1);
		break;
#endif /* HAVE_uk_syscall_times */

#ifdef HAVE_uk_syscall_time
	case SYS_time:
		ret = uk_syscall_e_time(arg1);
		break;
#endif /* HAVE_uk_syscall_time */

#ifdef HAVE_uk_syscall_setitimer
	case SYS_setitimer:
		ret = uk_syscall_e_setitimer(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_setitimer */

#ifdef HAVE_uk_syscall_timer_create
	case SYS_timer_create:
		ret = uk_syscall_e_timer_create(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_timer_create */

#ifdef HAVE_uk_syscall_timer_delete
	case SYS_timer_delete:
		ret = uk_syscall_e_timer_delete(arg1);
		break;
#endif /* HAVE_uk_syscall_timer_delete */

#ifdef HAVE_uk_syscall_timer_settime
	case SYS_timer_settime:
		ret = uk_syscall_e_timer_settime(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_timer_settime */

#ifdef HAVE_uk_syscall_timer_gettime
	case SYS_timer_gettime:
		ret = uk_syscall_e_timer_gettime(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_timer_gettime */

#ifdef HAVE_uk_syscall_timer_getoverrun
	case SYS_timer_getoverrun:
		ret = uk_syscall_e_timer_getoverrun(arg1);
		break;
#endif /* HAVE_uk_syscall_timer_getoverrun */

#ifdef HAVE_uk_syscall_readlink
	case SYS_readlink:
		ret = uk_syscall_e_readlink(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_readlink */

#ifdef HAVE_uk_syscall_readlinkat
	case SYS_readlinkat:
		ret = uk_syscall_e_readlinkat(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_readlinkat */

#ifdef HAVE_uk_syscall_link
	case SYS_link:
		ret = uk_syscall_e_link(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_link */

#ifdef HAVE_uk_syscall_truncate
	case SYS_truncate:
		ret = uk_syscall_e_truncate(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_truncate */

#ifdef HAVE_uk_syscall_access
	case SYS_access:
		ret = uk_syscall_e_access(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_access */

#ifdef HAVE_uk_syscall_faccessat
	case SYS_faccessat:
		ret = uk_syscall_e_faccessat(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_faccessat */

#ifdef HAVE_uk_syscall_chdir
	case SYS_chdir:
		ret = uk_syscall_e_chdir(arg1);
		break;
#endif /* HAVE_uk_syscall_chdir */

#ifdef HAVE_uk_syscall_fchdir
	case SYS_fchdir:
		ret = uk_syscall_e_fchdir(arg1);
		break;
#endif /* HAVE_uk_syscall_fchdir */

#ifdef HAVE_uk_syscall_chmod
	case SYS_chmod:
		ret = uk_syscall_e_chmod(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_chmod */

#ifdef HAVE_uk_syscall_utime
	case SYS_utime:
		ret = uk_syscall_e_utime(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_utime */

#ifdef HAVE_uk_syscall_utimes
	case SYS_utimes:
		ret = uk_syscall_e_utimes(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_utimes */

#ifdef HAVE_uk_syscall_mknod
	case SYS_mknod:
		ret = uk_syscall_e_mknod(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_mknod */

#ifdef HAVE_uk_syscall_rmdir
	case SYS_rmdir:
		ret = uk_syscall_e_rmdir(arg1);
		break;
#endif /* HAVE_uk_syscall_rmdir */

#ifdef HAVE_uk_syscall_rename
	case SYS_rename:
		ret = uk_syscall_e_rename(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_rename */

#ifdef HAVE_uk_syscall_renameat
	case SYS_renameat:
		ret = uk_syscall_e_renameat(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_renameat */

#ifdef HAVE_uk_syscall_umask
	case SYS_umask:
		ret = uk_syscall_e_umask(arg1);
		break;
#endif /* HAVE_uk_syscall_umask */

#ifdef HAVE_uk_syscall_lstat
	case SYS_lstat:
		ret = uk_syscall_e_lstat(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_lstat */

#ifdef HAVE_uk_syscall_flock
	case SYS_flock:
		ret = uk_syscall_e_flock(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_flock */

#ifdef HAVE_uk_syscall_getcwd
	case SYS_getcwd:
		ret = uk_syscall_e_getcwd(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_getcwd */

#ifdef HAVE_uk_syscall_utimensat
	case SYS_utimensat:
		ret = uk_syscall_e_utimensat(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_utimensat */

#ifdef HAVE_uk_syscall_futimesat
	case SYS_futimesat:
		ret = uk_syscall_e_futimesat(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_futimesat */

#ifdef HAVE_uk_syscall_sync
	case SYS_sync:
		ret = uk_syscall_e_sync();
		break;
#endif /* HAVE_uk_syscall_sync */

#ifdef HAVE_uk_syscall_mount
	case SYS_mount:
		ret = uk_syscall_e_mount(arg1, arg2, arg3, arg4, arg5);
		break;
#endif /* HAVE_uk_syscall_mount */

#ifdef HAVE_uk_syscall_statfs
	case SYS_statfs:
		ret = uk_syscall_e_statfs(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_statfs */

#ifdef HAVE_uk_syscall_fstatfs
	case SYS_fstatfs:
		ret = uk_syscall_e_fstatfs(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_fstatfs */

#ifdef HAVE_uk_syscall_lchown
	case SYS_lchown:
		ret = uk_syscall_e_lchown(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_lchown */

#ifdef HAVE_uk_syscall_chown
	case SYS_chown:
		ret = uk_syscall_e_chown(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_chown */

#ifdef HAVE_uk_syscall_stat
	case SYS_stat:
		ret = uk_syscall_e_stat(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_stat */

#ifdef HAVE_uk_syscall_mkdir
	case SYS_mkdir:
		ret = uk_syscall_e_mkdir(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_mkdir */

#ifdef HAVE_uk_syscall_mkdirat
	case SYS_mkdirat:
		ret = uk_syscall_e_mkdirat(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_mkdirat */

#ifdef HAVE_uk_syscall_umount2
	case SYS_umount2:
		ret = uk_syscall_e_umount2(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_umount2 */

#ifdef HAVE_uk_syscall_symlink
	case SYS_symlink:
		ret = uk_syscall_e_symlink(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_symlink */

#ifdef HAVE_uk_syscall_unlink
	case SYS_unlink:
		ret = uk_syscall_e_unlink(arg1);
		break;
#endif /* HAVE_uk_syscall_unlink */

#ifdef HAVE_uk_syscall_unlinkat
	case SYS_unlinkat:
		ret = uk_syscall_e_unlinkat(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_unlinkat */

#ifdef HAVE_uk_syscall_chroot
	case SYS_chroot:
		ret = uk_syscall_e_chroot(arg1);
		break;
#endif /* HAVE_uk_syscall_chroot */

#ifdef HAVE_uk_syscall_getdents64
	case SYS_getdents64:
		ret = uk_syscall_e_getdents64(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_getdents64 */

#ifdef HAVE_uk_syscall_newfstatat
	case SYS_newfstatat:
		ret = uk_syscall_e_newfstatat(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_newfstatat */

#ifdef HAVE_uk_syscall_open
	case SYS_open:
		ret = uk_syscall_e_open(arg1, arg2, arg3);
		break;
#endif /* HAVE_uk_syscall_open */

#ifdef HAVE_uk_syscall_openat
	case SYS_openat:
		ret = uk_syscall_e_openat(arg1, arg2, arg3, arg4);
		break;
#endif /* HAVE_uk_syscall_openat */

#ifdef HAVE_uk_syscall_creat
	case SYS_creat:
		ret = uk_syscall_e_creat(arg1, arg2);
		break;
#endif /* HAVE_uk_syscall_creat */

	default:
		uk_pr_debug("syscall \"%s\" is not available\n", uk_syscall_name(nr));
		errno = -ENOSYS;
		ret = -1;
	}
	return ret;
}

