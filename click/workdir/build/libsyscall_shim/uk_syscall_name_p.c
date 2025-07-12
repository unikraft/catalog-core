/* Auto generated file. DO NOT EDIT */

#include <stddef.h>

#include <uk/syscall.h>

const char *uk_syscall_name_p(long nr)
{
	switch (nr) {
#ifdef HAVE_uk_syscall_read
	case SYS_read:
		return "read";
#endif /* HAVE_uk_syscall_read */

#ifdef HAVE_uk_syscall_write
	case SYS_write:
		return "write";
#endif /* HAVE_uk_syscall_write */

#ifdef HAVE_uk_syscall_open
	case SYS_open:
		return "open";
#endif /* HAVE_uk_syscall_open */

#ifdef HAVE_uk_syscall_close
	case SYS_close:
		return "close";
#endif /* HAVE_uk_syscall_close */

#ifdef HAVE_uk_syscall_stat
	case SYS_stat:
		return "stat";
#endif /* HAVE_uk_syscall_stat */

#ifdef HAVE_uk_syscall_fstat
	case SYS_fstat:
		return "fstat";
#endif /* HAVE_uk_syscall_fstat */

#ifdef HAVE_uk_syscall_lstat
	case SYS_lstat:
		return "lstat";
#endif /* HAVE_uk_syscall_lstat */

#ifdef HAVE_uk_syscall_poll
	case SYS_poll:
		return "poll";
#endif /* HAVE_uk_syscall_poll */

#ifdef HAVE_uk_syscall_lseek
	case SYS_lseek:
		return "lseek";
#endif /* HAVE_uk_syscall_lseek */

#ifdef HAVE_uk_syscall_mmap
	case SYS_mmap:
		return "mmap";
#endif /* HAVE_uk_syscall_mmap */

#ifdef HAVE_uk_syscall_mprotect
	case SYS_mprotect:
		return "mprotect";
#endif /* HAVE_uk_syscall_mprotect */

#ifdef HAVE_uk_syscall_munmap
	case SYS_munmap:
		return "munmap";
#endif /* HAVE_uk_syscall_munmap */

#ifdef HAVE_uk_syscall_brk
	case SYS_brk:
		return "brk";
#endif /* HAVE_uk_syscall_brk */

#ifdef HAVE_uk_syscall_rt_sigaction
	case SYS_rt_sigaction:
		return "rt_sigaction";
#endif /* HAVE_uk_syscall_rt_sigaction */

#ifdef HAVE_uk_syscall_rt_sigprocmask
	case SYS_rt_sigprocmask:
		return "rt_sigprocmask";
#endif /* HAVE_uk_syscall_rt_sigprocmask */

#ifdef HAVE_uk_syscall_rt_sigreturn
	case SYS_rt_sigreturn:
		return "rt_sigreturn";
#endif /* HAVE_uk_syscall_rt_sigreturn */

#ifdef HAVE_uk_syscall_ioctl
	case SYS_ioctl:
		return "ioctl";
#endif /* HAVE_uk_syscall_ioctl */

#ifdef HAVE_uk_syscall_pread64
	case SYS_pread64:
		return "pread64";
#endif /* HAVE_uk_syscall_pread64 */

#ifdef HAVE_uk_syscall_pwrite64
	case SYS_pwrite64:
		return "pwrite64";
#endif /* HAVE_uk_syscall_pwrite64 */

#ifdef HAVE_uk_syscall_readv
	case SYS_readv:
		return "readv";
#endif /* HAVE_uk_syscall_readv */

#ifdef HAVE_uk_syscall_writev
	case SYS_writev:
		return "writev";
#endif /* HAVE_uk_syscall_writev */

#ifdef HAVE_uk_syscall_access
	case SYS_access:
		return "access";
#endif /* HAVE_uk_syscall_access */

#ifdef HAVE_uk_syscall_pipe
	case SYS_pipe:
		return "pipe";
#endif /* HAVE_uk_syscall_pipe */

#ifdef HAVE_uk_syscall_select
	case SYS_select:
		return "select";
#endif /* HAVE_uk_syscall_select */

#ifdef HAVE_uk_syscall_sched_yield
	case SYS_sched_yield:
		return "sched_yield";
#endif /* HAVE_uk_syscall_sched_yield */

#ifdef HAVE_uk_syscall_mremap
	case SYS_mremap:
		return "mremap";
#endif /* HAVE_uk_syscall_mremap */

#ifdef HAVE_uk_syscall_msync
	case SYS_msync:
		return "msync";
#endif /* HAVE_uk_syscall_msync */

#ifdef HAVE_uk_syscall_mincore
	case SYS_mincore:
		return "mincore";
#endif /* HAVE_uk_syscall_mincore */

#ifdef HAVE_uk_syscall_madvise
	case SYS_madvise:
		return "madvise";
#endif /* HAVE_uk_syscall_madvise */

#ifdef HAVE_uk_syscall_shmget
	case SYS_shmget:
		return "shmget";
#endif /* HAVE_uk_syscall_shmget */

#ifdef HAVE_uk_syscall_shmat
	case SYS_shmat:
		return "shmat";
#endif /* HAVE_uk_syscall_shmat */

#ifdef HAVE_uk_syscall_shmctl
	case SYS_shmctl:
		return "shmctl";
#endif /* HAVE_uk_syscall_shmctl */

#ifdef HAVE_uk_syscall_dup
	case SYS_dup:
		return "dup";
#endif /* HAVE_uk_syscall_dup */

#ifdef HAVE_uk_syscall_dup2
	case SYS_dup2:
		return "dup2";
#endif /* HAVE_uk_syscall_dup2 */

#ifdef HAVE_uk_syscall_pause
	case SYS_pause:
		return "pause";
#endif /* HAVE_uk_syscall_pause */

#ifdef HAVE_uk_syscall_nanosleep
	case SYS_nanosleep:
		return "nanosleep";
#endif /* HAVE_uk_syscall_nanosleep */

#ifdef HAVE_uk_syscall_getitimer
	case SYS_getitimer:
		return "getitimer";
#endif /* HAVE_uk_syscall_getitimer */

#ifdef HAVE_uk_syscall_alarm
	case SYS_alarm:
		return "alarm";
#endif /* HAVE_uk_syscall_alarm */

#ifdef HAVE_uk_syscall_setitimer
	case SYS_setitimer:
		return "setitimer";
#endif /* HAVE_uk_syscall_setitimer */

#ifdef HAVE_uk_syscall_getpid
	case SYS_getpid:
		return "getpid";
#endif /* HAVE_uk_syscall_getpid */

#ifdef HAVE_uk_syscall_sendfile
	case SYS_sendfile:
		return "sendfile";
#endif /* HAVE_uk_syscall_sendfile */

#ifdef HAVE_uk_syscall_socket
	case SYS_socket:
		return "socket";
#endif /* HAVE_uk_syscall_socket */

#ifdef HAVE_uk_syscall_connect
	case SYS_connect:
		return "connect";
#endif /* HAVE_uk_syscall_connect */

#ifdef HAVE_uk_syscall_accept
	case SYS_accept:
		return "accept";
#endif /* HAVE_uk_syscall_accept */

#ifdef HAVE_uk_syscall_sendto
	case SYS_sendto:
		return "sendto";
#endif /* HAVE_uk_syscall_sendto */

#ifdef HAVE_uk_syscall_recvfrom
	case SYS_recvfrom:
		return "recvfrom";
#endif /* HAVE_uk_syscall_recvfrom */

#ifdef HAVE_uk_syscall_sendmsg
	case SYS_sendmsg:
		return "sendmsg";
#endif /* HAVE_uk_syscall_sendmsg */

#ifdef HAVE_uk_syscall_recvmsg
	case SYS_recvmsg:
		return "recvmsg";
#endif /* HAVE_uk_syscall_recvmsg */

#ifdef HAVE_uk_syscall_shutdown
	case SYS_shutdown:
		return "shutdown";
#endif /* HAVE_uk_syscall_shutdown */

#ifdef HAVE_uk_syscall_bind
	case SYS_bind:
		return "bind";
#endif /* HAVE_uk_syscall_bind */

#ifdef HAVE_uk_syscall_listen
	case SYS_listen:
		return "listen";
#endif /* HAVE_uk_syscall_listen */

#ifdef HAVE_uk_syscall_getsockname
	case SYS_getsockname:
		return "getsockname";
#endif /* HAVE_uk_syscall_getsockname */

#ifdef HAVE_uk_syscall_getpeername
	case SYS_getpeername:
		return "getpeername";
#endif /* HAVE_uk_syscall_getpeername */

#ifdef HAVE_uk_syscall_socketpair
	case SYS_socketpair:
		return "socketpair";
#endif /* HAVE_uk_syscall_socketpair */

#ifdef HAVE_uk_syscall_setsockopt
	case SYS_setsockopt:
		return "setsockopt";
#endif /* HAVE_uk_syscall_setsockopt */

#ifdef HAVE_uk_syscall_getsockopt
	case SYS_getsockopt:
		return "getsockopt";
#endif /* HAVE_uk_syscall_getsockopt */

#ifdef HAVE_uk_syscall_clone
	case SYS_clone:
		return "clone";
#endif /* HAVE_uk_syscall_clone */

#ifdef HAVE_uk_syscall_fork
	case SYS_fork:
		return "fork";
#endif /* HAVE_uk_syscall_fork */

#ifdef HAVE_uk_syscall_vfork
	case SYS_vfork:
		return "vfork";
#endif /* HAVE_uk_syscall_vfork */

#ifdef HAVE_uk_syscall_execve
	case SYS_execve:
		return "execve";
#endif /* HAVE_uk_syscall_execve */

#ifdef HAVE_uk_syscall_exit
	case SYS_exit:
		return "exit";
#endif /* HAVE_uk_syscall_exit */

#ifdef HAVE_uk_syscall_wait4
	case SYS_wait4:
		return "wait4";
#endif /* HAVE_uk_syscall_wait4 */

#ifdef HAVE_uk_syscall_kill
	case SYS_kill:
		return "kill";
#endif /* HAVE_uk_syscall_kill */

#ifdef HAVE_uk_syscall_uname
	case SYS_uname:
		return "uname";
#endif /* HAVE_uk_syscall_uname */

#ifdef HAVE_uk_syscall_semget
	case SYS_semget:
		return "semget";
#endif /* HAVE_uk_syscall_semget */

#ifdef HAVE_uk_syscall_semop
	case SYS_semop:
		return "semop";
#endif /* HAVE_uk_syscall_semop */

#ifdef HAVE_uk_syscall_semctl
	case SYS_semctl:
		return "semctl";
#endif /* HAVE_uk_syscall_semctl */

#ifdef HAVE_uk_syscall_shmdt
	case SYS_shmdt:
		return "shmdt";
#endif /* HAVE_uk_syscall_shmdt */

#ifdef HAVE_uk_syscall_msgget
	case SYS_msgget:
		return "msgget";
#endif /* HAVE_uk_syscall_msgget */

#ifdef HAVE_uk_syscall_msgsnd
	case SYS_msgsnd:
		return "msgsnd";
#endif /* HAVE_uk_syscall_msgsnd */

#ifdef HAVE_uk_syscall_msgrcv
	case SYS_msgrcv:
		return "msgrcv";
#endif /* HAVE_uk_syscall_msgrcv */

#ifdef HAVE_uk_syscall_msgctl
	case SYS_msgctl:
		return "msgctl";
#endif /* HAVE_uk_syscall_msgctl */

#ifdef HAVE_uk_syscall_fcntl
	case SYS_fcntl:
		return "fcntl";
#endif /* HAVE_uk_syscall_fcntl */

#ifdef HAVE_uk_syscall_flock
	case SYS_flock:
		return "flock";
#endif /* HAVE_uk_syscall_flock */

#ifdef HAVE_uk_syscall_fsync
	case SYS_fsync:
		return "fsync";
#endif /* HAVE_uk_syscall_fsync */

#ifdef HAVE_uk_syscall_fdatasync
	case SYS_fdatasync:
		return "fdatasync";
#endif /* HAVE_uk_syscall_fdatasync */

#ifdef HAVE_uk_syscall_truncate
	case SYS_truncate:
		return "truncate";
#endif /* HAVE_uk_syscall_truncate */

#ifdef HAVE_uk_syscall_ftruncate
	case SYS_ftruncate:
		return "ftruncate";
#endif /* HAVE_uk_syscall_ftruncate */

#ifdef HAVE_uk_syscall_getdents
	case SYS_getdents:
		return "getdents";
#endif /* HAVE_uk_syscall_getdents */

#ifdef HAVE_uk_syscall_getcwd
	case SYS_getcwd:
		return "getcwd";
#endif /* HAVE_uk_syscall_getcwd */

#ifdef HAVE_uk_syscall_chdir
	case SYS_chdir:
		return "chdir";
#endif /* HAVE_uk_syscall_chdir */

#ifdef HAVE_uk_syscall_fchdir
	case SYS_fchdir:
		return "fchdir";
#endif /* HAVE_uk_syscall_fchdir */

#ifdef HAVE_uk_syscall_rename
	case SYS_rename:
		return "rename";
#endif /* HAVE_uk_syscall_rename */

#ifdef HAVE_uk_syscall_mkdir
	case SYS_mkdir:
		return "mkdir";
#endif /* HAVE_uk_syscall_mkdir */

#ifdef HAVE_uk_syscall_rmdir
	case SYS_rmdir:
		return "rmdir";
#endif /* HAVE_uk_syscall_rmdir */

#ifdef HAVE_uk_syscall_creat
	case SYS_creat:
		return "creat";
#endif /* HAVE_uk_syscall_creat */

#ifdef HAVE_uk_syscall_link
	case SYS_link:
		return "link";
#endif /* HAVE_uk_syscall_link */

#ifdef HAVE_uk_syscall_unlink
	case SYS_unlink:
		return "unlink";
#endif /* HAVE_uk_syscall_unlink */

#ifdef HAVE_uk_syscall_symlink
	case SYS_symlink:
		return "symlink";
#endif /* HAVE_uk_syscall_symlink */

#ifdef HAVE_uk_syscall_readlink
	case SYS_readlink:
		return "readlink";
#endif /* HAVE_uk_syscall_readlink */

#ifdef HAVE_uk_syscall_chmod
	case SYS_chmod:
		return "chmod";
#endif /* HAVE_uk_syscall_chmod */

#ifdef HAVE_uk_syscall_fchmod
	case SYS_fchmod:
		return "fchmod";
#endif /* HAVE_uk_syscall_fchmod */

#ifdef HAVE_uk_syscall_chown
	case SYS_chown:
		return "chown";
#endif /* HAVE_uk_syscall_chown */

#ifdef HAVE_uk_syscall_fchown
	case SYS_fchown:
		return "fchown";
#endif /* HAVE_uk_syscall_fchown */

#ifdef HAVE_uk_syscall_lchown
	case SYS_lchown:
		return "lchown";
#endif /* HAVE_uk_syscall_lchown */

#ifdef HAVE_uk_syscall_umask
	case SYS_umask:
		return "umask";
#endif /* HAVE_uk_syscall_umask */

#ifdef HAVE_uk_syscall_gettimeofday
	case SYS_gettimeofday:
		return "gettimeofday";
#endif /* HAVE_uk_syscall_gettimeofday */

#ifdef HAVE_uk_syscall_getrlimit
	case SYS_getrlimit:
		return "getrlimit";
#endif /* HAVE_uk_syscall_getrlimit */

#ifdef HAVE_uk_syscall_getrusage
	case SYS_getrusage:
		return "getrusage";
#endif /* HAVE_uk_syscall_getrusage */

#ifdef HAVE_uk_syscall_sysinfo
	case SYS_sysinfo:
		return "sysinfo";
#endif /* HAVE_uk_syscall_sysinfo */

#ifdef HAVE_uk_syscall_times
	case SYS_times:
		return "times";
#endif /* HAVE_uk_syscall_times */

#ifdef HAVE_uk_syscall_ptrace
	case SYS_ptrace:
		return "ptrace";
#endif /* HAVE_uk_syscall_ptrace */

#ifdef HAVE_uk_syscall_getuid
	case SYS_getuid:
		return "getuid";
#endif /* HAVE_uk_syscall_getuid */

#ifdef HAVE_uk_syscall_syslog
	case SYS_syslog:
		return "syslog";
#endif /* HAVE_uk_syscall_syslog */

#ifdef HAVE_uk_syscall_getgid
	case SYS_getgid:
		return "getgid";
#endif /* HAVE_uk_syscall_getgid */

#ifdef HAVE_uk_syscall_setuid
	case SYS_setuid:
		return "setuid";
#endif /* HAVE_uk_syscall_setuid */

#ifdef HAVE_uk_syscall_setgid
	case SYS_setgid:
		return "setgid";
#endif /* HAVE_uk_syscall_setgid */

#ifdef HAVE_uk_syscall_geteuid
	case SYS_geteuid:
		return "geteuid";
#endif /* HAVE_uk_syscall_geteuid */

#ifdef HAVE_uk_syscall_getegid
	case SYS_getegid:
		return "getegid";
#endif /* HAVE_uk_syscall_getegid */

#ifdef HAVE_uk_syscall_setpgid
	case SYS_setpgid:
		return "setpgid";
#endif /* HAVE_uk_syscall_setpgid */

#ifdef HAVE_uk_syscall_getppid
	case SYS_getppid:
		return "getppid";
#endif /* HAVE_uk_syscall_getppid */

#ifdef HAVE_uk_syscall_getpgrp
	case SYS_getpgrp:
		return "getpgrp";
#endif /* HAVE_uk_syscall_getpgrp */

#ifdef HAVE_uk_syscall_setsid
	case SYS_setsid:
		return "setsid";
#endif /* HAVE_uk_syscall_setsid */

#ifdef HAVE_uk_syscall_setreuid
	case SYS_setreuid:
		return "setreuid";
#endif /* HAVE_uk_syscall_setreuid */

#ifdef HAVE_uk_syscall_setregid
	case SYS_setregid:
		return "setregid";
#endif /* HAVE_uk_syscall_setregid */

#ifdef HAVE_uk_syscall_getgroups
	case SYS_getgroups:
		return "getgroups";
#endif /* HAVE_uk_syscall_getgroups */

#ifdef HAVE_uk_syscall_setgroups
	case SYS_setgroups:
		return "setgroups";
#endif /* HAVE_uk_syscall_setgroups */

#ifdef HAVE_uk_syscall_setresuid
	case SYS_setresuid:
		return "setresuid";
#endif /* HAVE_uk_syscall_setresuid */

#ifdef HAVE_uk_syscall_getresuid
	case SYS_getresuid:
		return "getresuid";
#endif /* HAVE_uk_syscall_getresuid */

#ifdef HAVE_uk_syscall_setresgid
	case SYS_setresgid:
		return "setresgid";
#endif /* HAVE_uk_syscall_setresgid */

#ifdef HAVE_uk_syscall_getresgid
	case SYS_getresgid:
		return "getresgid";
#endif /* HAVE_uk_syscall_getresgid */

#ifdef HAVE_uk_syscall_getpgid
	case SYS_getpgid:
		return "getpgid";
#endif /* HAVE_uk_syscall_getpgid */

#ifdef HAVE_uk_syscall_setfsuid
	case SYS_setfsuid:
		return "setfsuid";
#endif /* HAVE_uk_syscall_setfsuid */

#ifdef HAVE_uk_syscall_setfsgid
	case SYS_setfsgid:
		return "setfsgid";
#endif /* HAVE_uk_syscall_setfsgid */

#ifdef HAVE_uk_syscall_getsid
	case SYS_getsid:
		return "getsid";
#endif /* HAVE_uk_syscall_getsid */

#ifdef HAVE_uk_syscall_capget
	case SYS_capget:
		return "capget";
#endif /* HAVE_uk_syscall_capget */

#ifdef HAVE_uk_syscall_capset
	case SYS_capset:
		return "capset";
#endif /* HAVE_uk_syscall_capset */

#ifdef HAVE_uk_syscall_rt_sigpending
	case SYS_rt_sigpending:
		return "rt_sigpending";
#endif /* HAVE_uk_syscall_rt_sigpending */

#ifdef HAVE_uk_syscall_rt_sigtimedwait
	case SYS_rt_sigtimedwait:
		return "rt_sigtimedwait";
#endif /* HAVE_uk_syscall_rt_sigtimedwait */

#ifdef HAVE_uk_syscall_rt_sigqueueinfo
	case SYS_rt_sigqueueinfo:
		return "rt_sigqueueinfo";
#endif /* HAVE_uk_syscall_rt_sigqueueinfo */

#ifdef HAVE_uk_syscall_rt_sigsuspend
	case SYS_rt_sigsuspend:
		return "rt_sigsuspend";
#endif /* HAVE_uk_syscall_rt_sigsuspend */

#ifdef HAVE_uk_syscall_sigaltstack
	case SYS_sigaltstack:
		return "sigaltstack";
#endif /* HAVE_uk_syscall_sigaltstack */

#ifdef HAVE_uk_syscall_utime
	case SYS_utime:
		return "utime";
#endif /* HAVE_uk_syscall_utime */

#ifdef HAVE_uk_syscall_mknod
	case SYS_mknod:
		return "mknod";
#endif /* HAVE_uk_syscall_mknod */

#ifdef HAVE_uk_syscall_uselib
	case SYS_uselib:
		return "uselib";
#endif /* HAVE_uk_syscall_uselib */

#ifdef HAVE_uk_syscall_personality
	case SYS_personality:
		return "personality";
#endif /* HAVE_uk_syscall_personality */

#ifdef HAVE_uk_syscall_ustat
	case SYS_ustat:
		return "ustat";
#endif /* HAVE_uk_syscall_ustat */

#ifdef HAVE_uk_syscall_statfs
	case SYS_statfs:
		return "statfs";
#endif /* HAVE_uk_syscall_statfs */

#ifdef HAVE_uk_syscall_fstatfs
	case SYS_fstatfs:
		return "fstatfs";
#endif /* HAVE_uk_syscall_fstatfs */

#ifdef HAVE_uk_syscall_sysfs
	case SYS_sysfs:
		return "sysfs";
#endif /* HAVE_uk_syscall_sysfs */

#ifdef HAVE_uk_syscall_getpriority
	case SYS_getpriority:
		return "getpriority";
#endif /* HAVE_uk_syscall_getpriority */

#ifdef HAVE_uk_syscall_setpriority
	case SYS_setpriority:
		return "setpriority";
#endif /* HAVE_uk_syscall_setpriority */

#ifdef HAVE_uk_syscall_sched_setparam
	case SYS_sched_setparam:
		return "sched_setparam";
#endif /* HAVE_uk_syscall_sched_setparam */

#ifdef HAVE_uk_syscall_sched_getparam
	case SYS_sched_getparam:
		return "sched_getparam";
#endif /* HAVE_uk_syscall_sched_getparam */

#ifdef HAVE_uk_syscall_sched_setscheduler
	case SYS_sched_setscheduler:
		return "sched_setscheduler";
#endif /* HAVE_uk_syscall_sched_setscheduler */

#ifdef HAVE_uk_syscall_sched_getscheduler
	case SYS_sched_getscheduler:
		return "sched_getscheduler";
#endif /* HAVE_uk_syscall_sched_getscheduler */

#ifdef HAVE_uk_syscall_sched_get_priority_max
	case SYS_sched_get_priority_max:
		return "sched_get_priority_max";
#endif /* HAVE_uk_syscall_sched_get_priority_max */

#ifdef HAVE_uk_syscall_sched_get_priority_min
	case SYS_sched_get_priority_min:
		return "sched_get_priority_min";
#endif /* HAVE_uk_syscall_sched_get_priority_min */

#ifdef HAVE_uk_syscall_sched_rr_get_interval
	case SYS_sched_rr_get_interval:
		return "sched_rr_get_interval";
#endif /* HAVE_uk_syscall_sched_rr_get_interval */

#ifdef HAVE_uk_syscall_mlock
	case SYS_mlock:
		return "mlock";
#endif /* HAVE_uk_syscall_mlock */

#ifdef HAVE_uk_syscall_munlock
	case SYS_munlock:
		return "munlock";
#endif /* HAVE_uk_syscall_munlock */

#ifdef HAVE_uk_syscall_mlockall
	case SYS_mlockall:
		return "mlockall";
#endif /* HAVE_uk_syscall_mlockall */

#ifdef HAVE_uk_syscall_munlockall
	case SYS_munlockall:
		return "munlockall";
#endif /* HAVE_uk_syscall_munlockall */

#ifdef HAVE_uk_syscall_vhangup
	case SYS_vhangup:
		return "vhangup";
#endif /* HAVE_uk_syscall_vhangup */

#ifdef HAVE_uk_syscall_modify_ldt
	case SYS_modify_ldt:
		return "modify_ldt";
#endif /* HAVE_uk_syscall_modify_ldt */

#ifdef HAVE_uk_syscall_pivot_root
	case SYS_pivot_root:
		return "pivot_root";
#endif /* HAVE_uk_syscall_pivot_root */

#ifdef HAVE_uk_syscall__sysctl
	case SYS__sysctl:
		return "_sysctl";
#endif /* HAVE_uk_syscall__sysctl */

#ifdef HAVE_uk_syscall_prctl
	case SYS_prctl:
		return "prctl";
#endif /* HAVE_uk_syscall_prctl */

#ifdef HAVE_uk_syscall_arch_prctl
	case SYS_arch_prctl:
		return "arch_prctl";
#endif /* HAVE_uk_syscall_arch_prctl */

#ifdef HAVE_uk_syscall_adjtimex
	case SYS_adjtimex:
		return "adjtimex";
#endif /* HAVE_uk_syscall_adjtimex */

#ifdef HAVE_uk_syscall_setrlimit
	case SYS_setrlimit:
		return "setrlimit";
#endif /* HAVE_uk_syscall_setrlimit */

#ifdef HAVE_uk_syscall_chroot
	case SYS_chroot:
		return "chroot";
#endif /* HAVE_uk_syscall_chroot */

#ifdef HAVE_uk_syscall_sync
	case SYS_sync:
		return "sync";
#endif /* HAVE_uk_syscall_sync */

#ifdef HAVE_uk_syscall_acct
	case SYS_acct:
		return "acct";
#endif /* HAVE_uk_syscall_acct */

#ifdef HAVE_uk_syscall_settimeofday
	case SYS_settimeofday:
		return "settimeofday";
#endif /* HAVE_uk_syscall_settimeofday */

#ifdef HAVE_uk_syscall_mount
	case SYS_mount:
		return "mount";
#endif /* HAVE_uk_syscall_mount */

#ifdef HAVE_uk_syscall_umount2
	case SYS_umount2:
		return "umount2";
#endif /* HAVE_uk_syscall_umount2 */

#ifdef HAVE_uk_syscall_swapon
	case SYS_swapon:
		return "swapon";
#endif /* HAVE_uk_syscall_swapon */

#ifdef HAVE_uk_syscall_swapoff
	case SYS_swapoff:
		return "swapoff";
#endif /* HAVE_uk_syscall_swapoff */

#ifdef HAVE_uk_syscall_reboot
	case SYS_reboot:
		return "reboot";
#endif /* HAVE_uk_syscall_reboot */

#ifdef HAVE_uk_syscall_sethostname
	case SYS_sethostname:
		return "sethostname";
#endif /* HAVE_uk_syscall_sethostname */

#ifdef HAVE_uk_syscall_setdomainname
	case SYS_setdomainname:
		return "setdomainname";
#endif /* HAVE_uk_syscall_setdomainname */

#ifdef HAVE_uk_syscall_iopl
	case SYS_iopl:
		return "iopl";
#endif /* HAVE_uk_syscall_iopl */

#ifdef HAVE_uk_syscall_ioperm
	case SYS_ioperm:
		return "ioperm";
#endif /* HAVE_uk_syscall_ioperm */

#ifdef HAVE_uk_syscall_create_module
	case SYS_create_module:
		return "create_module";
#endif /* HAVE_uk_syscall_create_module */

#ifdef HAVE_uk_syscall_init_module
	case SYS_init_module:
		return "init_module";
#endif /* HAVE_uk_syscall_init_module */

#ifdef HAVE_uk_syscall_delete_module
	case SYS_delete_module:
		return "delete_module";
#endif /* HAVE_uk_syscall_delete_module */

#ifdef HAVE_uk_syscall_get_kernel_syms
	case SYS_get_kernel_syms:
		return "get_kernel_syms";
#endif /* HAVE_uk_syscall_get_kernel_syms */

#ifdef HAVE_uk_syscall_query_module
	case SYS_query_module:
		return "query_module";
#endif /* HAVE_uk_syscall_query_module */

#ifdef HAVE_uk_syscall_quotactl
	case SYS_quotactl:
		return "quotactl";
#endif /* HAVE_uk_syscall_quotactl */

#ifdef HAVE_uk_syscall_nfsservctl
	case SYS_nfsservctl:
		return "nfsservctl";
#endif /* HAVE_uk_syscall_nfsservctl */

#ifdef HAVE_uk_syscall_getpmsg
	case SYS_getpmsg:
		return "getpmsg";
#endif /* HAVE_uk_syscall_getpmsg */

#ifdef HAVE_uk_syscall_putpmsg
	case SYS_putpmsg:
		return "putpmsg";
#endif /* HAVE_uk_syscall_putpmsg */

#ifdef HAVE_uk_syscall_afs_syscall
	case SYS_afs_syscall:
		return "afs_syscall";
#endif /* HAVE_uk_syscall_afs_syscall */

#ifdef HAVE_uk_syscall_tuxcall
	case SYS_tuxcall:
		return "tuxcall";
#endif /* HAVE_uk_syscall_tuxcall */

#ifdef HAVE_uk_syscall_security
	case SYS_security:
		return "security";
#endif /* HAVE_uk_syscall_security */

#ifdef HAVE_uk_syscall_gettid
	case SYS_gettid:
		return "gettid";
#endif /* HAVE_uk_syscall_gettid */

#ifdef HAVE_uk_syscall_readahead
	case SYS_readahead:
		return "readahead";
#endif /* HAVE_uk_syscall_readahead */

#ifdef HAVE_uk_syscall_setxattr
	case SYS_setxattr:
		return "setxattr";
#endif /* HAVE_uk_syscall_setxattr */

#ifdef HAVE_uk_syscall_lsetxattr
	case SYS_lsetxattr:
		return "lsetxattr";
#endif /* HAVE_uk_syscall_lsetxattr */

#ifdef HAVE_uk_syscall_fsetxattr
	case SYS_fsetxattr:
		return "fsetxattr";
#endif /* HAVE_uk_syscall_fsetxattr */

#ifdef HAVE_uk_syscall_getxattr
	case SYS_getxattr:
		return "getxattr";
#endif /* HAVE_uk_syscall_getxattr */

#ifdef HAVE_uk_syscall_lgetxattr
	case SYS_lgetxattr:
		return "lgetxattr";
#endif /* HAVE_uk_syscall_lgetxattr */

#ifdef HAVE_uk_syscall_fgetxattr
	case SYS_fgetxattr:
		return "fgetxattr";
#endif /* HAVE_uk_syscall_fgetxattr */

#ifdef HAVE_uk_syscall_listxattr
	case SYS_listxattr:
		return "listxattr";
#endif /* HAVE_uk_syscall_listxattr */

#ifdef HAVE_uk_syscall_llistxattr
	case SYS_llistxattr:
		return "llistxattr";
#endif /* HAVE_uk_syscall_llistxattr */

#ifdef HAVE_uk_syscall_flistxattr
	case SYS_flistxattr:
		return "flistxattr";
#endif /* HAVE_uk_syscall_flistxattr */

#ifdef HAVE_uk_syscall_removexattr
	case SYS_removexattr:
		return "removexattr";
#endif /* HAVE_uk_syscall_removexattr */

#ifdef HAVE_uk_syscall_lremovexattr
	case SYS_lremovexattr:
		return "lremovexattr";
#endif /* HAVE_uk_syscall_lremovexattr */

#ifdef HAVE_uk_syscall_fremovexattr
	case SYS_fremovexattr:
		return "fremovexattr";
#endif /* HAVE_uk_syscall_fremovexattr */

#ifdef HAVE_uk_syscall_tkill
	case SYS_tkill:
		return "tkill";
#endif /* HAVE_uk_syscall_tkill */

#ifdef HAVE_uk_syscall_time
	case SYS_time:
		return "time";
#endif /* HAVE_uk_syscall_time */

#ifdef HAVE_uk_syscall_futex
	case SYS_futex:
		return "futex";
#endif /* HAVE_uk_syscall_futex */

#ifdef HAVE_uk_syscall_sched_setaffinity
	case SYS_sched_setaffinity:
		return "sched_setaffinity";
#endif /* HAVE_uk_syscall_sched_setaffinity */

#ifdef HAVE_uk_syscall_sched_getaffinity
	case SYS_sched_getaffinity:
		return "sched_getaffinity";
#endif /* HAVE_uk_syscall_sched_getaffinity */

#ifdef HAVE_uk_syscall_set_thread_area
	case SYS_set_thread_area:
		return "set_thread_area";
#endif /* HAVE_uk_syscall_set_thread_area */

#ifdef HAVE_uk_syscall_io_setup
	case SYS_io_setup:
		return "io_setup";
#endif /* HAVE_uk_syscall_io_setup */

#ifdef HAVE_uk_syscall_io_destroy
	case SYS_io_destroy:
		return "io_destroy";
#endif /* HAVE_uk_syscall_io_destroy */

#ifdef HAVE_uk_syscall_io_getevents
	case SYS_io_getevents:
		return "io_getevents";
#endif /* HAVE_uk_syscall_io_getevents */

#ifdef HAVE_uk_syscall_io_submit
	case SYS_io_submit:
		return "io_submit";
#endif /* HAVE_uk_syscall_io_submit */

#ifdef HAVE_uk_syscall_io_cancel
	case SYS_io_cancel:
		return "io_cancel";
#endif /* HAVE_uk_syscall_io_cancel */

#ifdef HAVE_uk_syscall_get_thread_area
	case SYS_get_thread_area:
		return "get_thread_area";
#endif /* HAVE_uk_syscall_get_thread_area */

#ifdef HAVE_uk_syscall_lookup_dcookie
	case SYS_lookup_dcookie:
		return "lookup_dcookie";
#endif /* HAVE_uk_syscall_lookup_dcookie */

#ifdef HAVE_uk_syscall_epoll_create
	case SYS_epoll_create:
		return "epoll_create";
#endif /* HAVE_uk_syscall_epoll_create */

#ifdef HAVE_uk_syscall_epoll_ctl_old
	case SYS_epoll_ctl_old:
		return "epoll_ctl_old";
#endif /* HAVE_uk_syscall_epoll_ctl_old */

#ifdef HAVE_uk_syscall_epoll_wait_old
	case SYS_epoll_wait_old:
		return "epoll_wait_old";
#endif /* HAVE_uk_syscall_epoll_wait_old */

#ifdef HAVE_uk_syscall_remap_file_pages
	case SYS_remap_file_pages:
		return "remap_file_pages";
#endif /* HAVE_uk_syscall_remap_file_pages */

#ifdef HAVE_uk_syscall_getdents64
	case SYS_getdents64:
		return "getdents64";
#endif /* HAVE_uk_syscall_getdents64 */

#ifdef HAVE_uk_syscall_set_tid_address
	case SYS_set_tid_address:
		return "set_tid_address";
#endif /* HAVE_uk_syscall_set_tid_address */

#ifdef HAVE_uk_syscall_restart_syscall
	case SYS_restart_syscall:
		return "restart_syscall";
#endif /* HAVE_uk_syscall_restart_syscall */

#ifdef HAVE_uk_syscall_semtimedop
	case SYS_semtimedop:
		return "semtimedop";
#endif /* HAVE_uk_syscall_semtimedop */

#ifdef HAVE_uk_syscall_fadvise64
	case SYS_fadvise64:
		return "fadvise64";
#endif /* HAVE_uk_syscall_fadvise64 */

#ifdef HAVE_uk_syscall_timer_create
	case SYS_timer_create:
		return "timer_create";
#endif /* HAVE_uk_syscall_timer_create */

#ifdef HAVE_uk_syscall_timer_settime
	case SYS_timer_settime:
		return "timer_settime";
#endif /* HAVE_uk_syscall_timer_settime */

#ifdef HAVE_uk_syscall_timer_gettime
	case SYS_timer_gettime:
		return "timer_gettime";
#endif /* HAVE_uk_syscall_timer_gettime */

#ifdef HAVE_uk_syscall_timer_getoverrun
	case SYS_timer_getoverrun:
		return "timer_getoverrun";
#endif /* HAVE_uk_syscall_timer_getoverrun */

#ifdef HAVE_uk_syscall_timer_delete
	case SYS_timer_delete:
		return "timer_delete";
#endif /* HAVE_uk_syscall_timer_delete */

#ifdef HAVE_uk_syscall_clock_settime
	case SYS_clock_settime:
		return "clock_settime";
#endif /* HAVE_uk_syscall_clock_settime */

#ifdef HAVE_uk_syscall_clock_gettime
	case SYS_clock_gettime:
		return "clock_gettime";
#endif /* HAVE_uk_syscall_clock_gettime */

#ifdef HAVE_uk_syscall_clock_getres
	case SYS_clock_getres:
		return "clock_getres";
#endif /* HAVE_uk_syscall_clock_getres */

#ifdef HAVE_uk_syscall_clock_nanosleep
	case SYS_clock_nanosleep:
		return "clock_nanosleep";
#endif /* HAVE_uk_syscall_clock_nanosleep */

#ifdef HAVE_uk_syscall_exit_group
	case SYS_exit_group:
		return "exit_group";
#endif /* HAVE_uk_syscall_exit_group */

#ifdef HAVE_uk_syscall_epoll_wait
	case SYS_epoll_wait:
		return "epoll_wait";
#endif /* HAVE_uk_syscall_epoll_wait */

#ifdef HAVE_uk_syscall_epoll_ctl
	case SYS_epoll_ctl:
		return "epoll_ctl";
#endif /* HAVE_uk_syscall_epoll_ctl */

#ifdef HAVE_uk_syscall_tgkill
	case SYS_tgkill:
		return "tgkill";
#endif /* HAVE_uk_syscall_tgkill */

#ifdef HAVE_uk_syscall_utimes
	case SYS_utimes:
		return "utimes";
#endif /* HAVE_uk_syscall_utimes */

#ifdef HAVE_uk_syscall_vserver
	case SYS_vserver:
		return "vserver";
#endif /* HAVE_uk_syscall_vserver */

#ifdef HAVE_uk_syscall_mbind
	case SYS_mbind:
		return "mbind";
#endif /* HAVE_uk_syscall_mbind */

#ifdef HAVE_uk_syscall_set_mempolicy
	case SYS_set_mempolicy:
		return "set_mempolicy";
#endif /* HAVE_uk_syscall_set_mempolicy */

#ifdef HAVE_uk_syscall_get_mempolicy
	case SYS_get_mempolicy:
		return "get_mempolicy";
#endif /* HAVE_uk_syscall_get_mempolicy */

#ifdef HAVE_uk_syscall_mq_open
	case SYS_mq_open:
		return "mq_open";
#endif /* HAVE_uk_syscall_mq_open */

#ifdef HAVE_uk_syscall_mq_unlink
	case SYS_mq_unlink:
		return "mq_unlink";
#endif /* HAVE_uk_syscall_mq_unlink */

#ifdef HAVE_uk_syscall_mq_timedsend
	case SYS_mq_timedsend:
		return "mq_timedsend";
#endif /* HAVE_uk_syscall_mq_timedsend */

#ifdef HAVE_uk_syscall_mq_timedreceive
	case SYS_mq_timedreceive:
		return "mq_timedreceive";
#endif /* HAVE_uk_syscall_mq_timedreceive */

#ifdef HAVE_uk_syscall_mq_notify
	case SYS_mq_notify:
		return "mq_notify";
#endif /* HAVE_uk_syscall_mq_notify */

#ifdef HAVE_uk_syscall_mq_getsetattr
	case SYS_mq_getsetattr:
		return "mq_getsetattr";
#endif /* HAVE_uk_syscall_mq_getsetattr */

#ifdef HAVE_uk_syscall_kexec_load
	case SYS_kexec_load:
		return "kexec_load";
#endif /* HAVE_uk_syscall_kexec_load */

#ifdef HAVE_uk_syscall_waitid
	case SYS_waitid:
		return "waitid";
#endif /* HAVE_uk_syscall_waitid */

#ifdef HAVE_uk_syscall_add_key
	case SYS_add_key:
		return "add_key";
#endif /* HAVE_uk_syscall_add_key */

#ifdef HAVE_uk_syscall_request_key
	case SYS_request_key:
		return "request_key";
#endif /* HAVE_uk_syscall_request_key */

#ifdef HAVE_uk_syscall_keyctl
	case SYS_keyctl:
		return "keyctl";
#endif /* HAVE_uk_syscall_keyctl */

#ifdef HAVE_uk_syscall_ioprio_set
	case SYS_ioprio_set:
		return "ioprio_set";
#endif /* HAVE_uk_syscall_ioprio_set */

#ifdef HAVE_uk_syscall_ioprio_get
	case SYS_ioprio_get:
		return "ioprio_get";
#endif /* HAVE_uk_syscall_ioprio_get */

#ifdef HAVE_uk_syscall_inotify_init
	case SYS_inotify_init:
		return "inotify_init";
#endif /* HAVE_uk_syscall_inotify_init */

#ifdef HAVE_uk_syscall_inotify_add_watch
	case SYS_inotify_add_watch:
		return "inotify_add_watch";
#endif /* HAVE_uk_syscall_inotify_add_watch */

#ifdef HAVE_uk_syscall_inotify_rm_watch
	case SYS_inotify_rm_watch:
		return "inotify_rm_watch";
#endif /* HAVE_uk_syscall_inotify_rm_watch */

#ifdef HAVE_uk_syscall_migrate_pages
	case SYS_migrate_pages:
		return "migrate_pages";
#endif /* HAVE_uk_syscall_migrate_pages */

#ifdef HAVE_uk_syscall_openat
	case SYS_openat:
		return "openat";
#endif /* HAVE_uk_syscall_openat */

#ifdef HAVE_uk_syscall_mkdirat
	case SYS_mkdirat:
		return "mkdirat";
#endif /* HAVE_uk_syscall_mkdirat */

#ifdef HAVE_uk_syscall_mknodat
	case SYS_mknodat:
		return "mknodat";
#endif /* HAVE_uk_syscall_mknodat */

#ifdef HAVE_uk_syscall_fchownat
	case SYS_fchownat:
		return "fchownat";
#endif /* HAVE_uk_syscall_fchownat */

#ifdef HAVE_uk_syscall_futimesat
	case SYS_futimesat:
		return "futimesat";
#endif /* HAVE_uk_syscall_futimesat */

#ifdef HAVE_uk_syscall_newfstatat
	case SYS_newfstatat:
		return "newfstatat";
#endif /* HAVE_uk_syscall_newfstatat */

#ifdef HAVE_uk_syscall_unlinkat
	case SYS_unlinkat:
		return "unlinkat";
#endif /* HAVE_uk_syscall_unlinkat */

#ifdef HAVE_uk_syscall_renameat
	case SYS_renameat:
		return "renameat";
#endif /* HAVE_uk_syscall_renameat */

#ifdef HAVE_uk_syscall_linkat
	case SYS_linkat:
		return "linkat";
#endif /* HAVE_uk_syscall_linkat */

#ifdef HAVE_uk_syscall_symlinkat
	case SYS_symlinkat:
		return "symlinkat";
#endif /* HAVE_uk_syscall_symlinkat */

#ifdef HAVE_uk_syscall_readlinkat
	case SYS_readlinkat:
		return "readlinkat";
#endif /* HAVE_uk_syscall_readlinkat */

#ifdef HAVE_uk_syscall_fchmodat
	case SYS_fchmodat:
		return "fchmodat";
#endif /* HAVE_uk_syscall_fchmodat */

#ifdef HAVE_uk_syscall_faccessat
	case SYS_faccessat:
		return "faccessat";
#endif /* HAVE_uk_syscall_faccessat */

#ifdef HAVE_uk_syscall_pselect6
	case SYS_pselect6:
		return "pselect6";
#endif /* HAVE_uk_syscall_pselect6 */

#ifdef HAVE_uk_syscall_ppoll
	case SYS_ppoll:
		return "ppoll";
#endif /* HAVE_uk_syscall_ppoll */

#ifdef HAVE_uk_syscall_unshare
	case SYS_unshare:
		return "unshare";
#endif /* HAVE_uk_syscall_unshare */

#ifdef HAVE_uk_syscall_set_robust_list
	case SYS_set_robust_list:
		return "set_robust_list";
#endif /* HAVE_uk_syscall_set_robust_list */

#ifdef HAVE_uk_syscall_get_robust_list
	case SYS_get_robust_list:
		return "get_robust_list";
#endif /* HAVE_uk_syscall_get_robust_list */

#ifdef HAVE_uk_syscall_splice
	case SYS_splice:
		return "splice";
#endif /* HAVE_uk_syscall_splice */

#ifdef HAVE_uk_syscall_tee
	case SYS_tee:
		return "tee";
#endif /* HAVE_uk_syscall_tee */

#ifdef HAVE_uk_syscall_sync_file_range
	case SYS_sync_file_range:
		return "sync_file_range";
#endif /* HAVE_uk_syscall_sync_file_range */

#ifdef HAVE_uk_syscall_vmsplice
	case SYS_vmsplice:
		return "vmsplice";
#endif /* HAVE_uk_syscall_vmsplice */

#ifdef HAVE_uk_syscall_move_pages
	case SYS_move_pages:
		return "move_pages";
#endif /* HAVE_uk_syscall_move_pages */

#ifdef HAVE_uk_syscall_utimensat
	case SYS_utimensat:
		return "utimensat";
#endif /* HAVE_uk_syscall_utimensat */

#ifdef HAVE_uk_syscall_epoll_pwait
	case SYS_epoll_pwait:
		return "epoll_pwait";
#endif /* HAVE_uk_syscall_epoll_pwait */

#ifdef HAVE_uk_syscall_signalfd
	case SYS_signalfd:
		return "signalfd";
#endif /* HAVE_uk_syscall_signalfd */

#ifdef HAVE_uk_syscall_timerfd_create
	case SYS_timerfd_create:
		return "timerfd_create";
#endif /* HAVE_uk_syscall_timerfd_create */

#ifdef HAVE_uk_syscall_eventfd
	case SYS_eventfd:
		return "eventfd";
#endif /* HAVE_uk_syscall_eventfd */

#ifdef HAVE_uk_syscall_fallocate
	case SYS_fallocate:
		return "fallocate";
#endif /* HAVE_uk_syscall_fallocate */

#ifdef HAVE_uk_syscall_timerfd_settime
	case SYS_timerfd_settime:
		return "timerfd_settime";
#endif /* HAVE_uk_syscall_timerfd_settime */

#ifdef HAVE_uk_syscall_timerfd_gettime
	case SYS_timerfd_gettime:
		return "timerfd_gettime";
#endif /* HAVE_uk_syscall_timerfd_gettime */

#ifdef HAVE_uk_syscall_accept4
	case SYS_accept4:
		return "accept4";
#endif /* HAVE_uk_syscall_accept4 */

#ifdef HAVE_uk_syscall_signalfd4
	case SYS_signalfd4:
		return "signalfd4";
#endif /* HAVE_uk_syscall_signalfd4 */

#ifdef HAVE_uk_syscall_eventfd2
	case SYS_eventfd2:
		return "eventfd2";
#endif /* HAVE_uk_syscall_eventfd2 */

#ifdef HAVE_uk_syscall_epoll_create1
	case SYS_epoll_create1:
		return "epoll_create1";
#endif /* HAVE_uk_syscall_epoll_create1 */

#ifdef HAVE_uk_syscall_dup3
	case SYS_dup3:
		return "dup3";
#endif /* HAVE_uk_syscall_dup3 */

#ifdef HAVE_uk_syscall_pipe2
	case SYS_pipe2:
		return "pipe2";
#endif /* HAVE_uk_syscall_pipe2 */

#ifdef HAVE_uk_syscall_inotify_init1
	case SYS_inotify_init1:
		return "inotify_init1";
#endif /* HAVE_uk_syscall_inotify_init1 */

#ifdef HAVE_uk_syscall_preadv
	case SYS_preadv:
		return "preadv";
#endif /* HAVE_uk_syscall_preadv */

#ifdef HAVE_uk_syscall_pwritev
	case SYS_pwritev:
		return "pwritev";
#endif /* HAVE_uk_syscall_pwritev */

#ifdef HAVE_uk_syscall_rt_tgsigqueueinfo
	case SYS_rt_tgsigqueueinfo:
		return "rt_tgsigqueueinfo";
#endif /* HAVE_uk_syscall_rt_tgsigqueueinfo */

#ifdef HAVE_uk_syscall_perf_event_open
	case SYS_perf_event_open:
		return "perf_event_open";
#endif /* HAVE_uk_syscall_perf_event_open */

#ifdef HAVE_uk_syscall_recvmmsg
	case SYS_recvmmsg:
		return "recvmmsg";
#endif /* HAVE_uk_syscall_recvmmsg */

#ifdef HAVE_uk_syscall_fanotify_init
	case SYS_fanotify_init:
		return "fanotify_init";
#endif /* HAVE_uk_syscall_fanotify_init */

#ifdef HAVE_uk_syscall_fanotify_mark
	case SYS_fanotify_mark:
		return "fanotify_mark";
#endif /* HAVE_uk_syscall_fanotify_mark */

#ifdef HAVE_uk_syscall_prlimit64
	case SYS_prlimit64:
		return "prlimit64";
#endif /* HAVE_uk_syscall_prlimit64 */

#ifdef HAVE_uk_syscall_name_to_handle_at
	case SYS_name_to_handle_at:
		return "name_to_handle_at";
#endif /* HAVE_uk_syscall_name_to_handle_at */

#ifdef HAVE_uk_syscall_open_by_handle_at
	case SYS_open_by_handle_at:
		return "open_by_handle_at";
#endif /* HAVE_uk_syscall_open_by_handle_at */

#ifdef HAVE_uk_syscall_clock_adjtime
	case SYS_clock_adjtime:
		return "clock_adjtime";
#endif /* HAVE_uk_syscall_clock_adjtime */

#ifdef HAVE_uk_syscall_syncfs
	case SYS_syncfs:
		return "syncfs";
#endif /* HAVE_uk_syscall_syncfs */

#ifdef HAVE_uk_syscall_sendmmsg
	case SYS_sendmmsg:
		return "sendmmsg";
#endif /* HAVE_uk_syscall_sendmmsg */

#ifdef HAVE_uk_syscall_setns
	case SYS_setns:
		return "setns";
#endif /* HAVE_uk_syscall_setns */

#ifdef HAVE_uk_syscall_getcpu
	case SYS_getcpu:
		return "getcpu";
#endif /* HAVE_uk_syscall_getcpu */

#ifdef HAVE_uk_syscall_process_vm_readv
	case SYS_process_vm_readv:
		return "process_vm_readv";
#endif /* HAVE_uk_syscall_process_vm_readv */

#ifdef HAVE_uk_syscall_process_vm_writev
	case SYS_process_vm_writev:
		return "process_vm_writev";
#endif /* HAVE_uk_syscall_process_vm_writev */

#ifdef HAVE_uk_syscall_kcmp
	case SYS_kcmp:
		return "kcmp";
#endif /* HAVE_uk_syscall_kcmp */

#ifdef HAVE_uk_syscall_finit_module
	case SYS_finit_module:
		return "finit_module";
#endif /* HAVE_uk_syscall_finit_module */

#ifdef HAVE_uk_syscall_sched_setattr
	case SYS_sched_setattr:
		return "sched_setattr";
#endif /* HAVE_uk_syscall_sched_setattr */

#ifdef HAVE_uk_syscall_sched_getattr
	case SYS_sched_getattr:
		return "sched_getattr";
#endif /* HAVE_uk_syscall_sched_getattr */

#ifdef HAVE_uk_syscall_renameat2
	case SYS_renameat2:
		return "renameat2";
#endif /* HAVE_uk_syscall_renameat2 */

#ifdef HAVE_uk_syscall_seccomp
	case SYS_seccomp:
		return "seccomp";
#endif /* HAVE_uk_syscall_seccomp */

#ifdef HAVE_uk_syscall_getrandom
	case SYS_getrandom:
		return "getrandom";
#endif /* HAVE_uk_syscall_getrandom */

#ifdef HAVE_uk_syscall_memfd_create
	case SYS_memfd_create:
		return "memfd_create";
#endif /* HAVE_uk_syscall_memfd_create */

#ifdef HAVE_uk_syscall_kexec_file_load
	case SYS_kexec_file_load:
		return "kexec_file_load";
#endif /* HAVE_uk_syscall_kexec_file_load */

#ifdef HAVE_uk_syscall_bpf
	case SYS_bpf:
		return "bpf";
#endif /* HAVE_uk_syscall_bpf */

#ifdef HAVE_uk_syscall_execveat
	case SYS_execveat:
		return "execveat";
#endif /* HAVE_uk_syscall_execveat */

#ifdef HAVE_uk_syscall_userfaultfd
	case SYS_userfaultfd:
		return "userfaultfd";
#endif /* HAVE_uk_syscall_userfaultfd */

#ifdef HAVE_uk_syscall_membarrier
	case SYS_membarrier:
		return "membarrier";
#endif /* HAVE_uk_syscall_membarrier */

#ifdef HAVE_uk_syscall_mlock2
	case SYS_mlock2:
		return "mlock2";
#endif /* HAVE_uk_syscall_mlock2 */

#ifdef HAVE_uk_syscall_copy_file_range
	case SYS_copy_file_range:
		return "copy_file_range";
#endif /* HAVE_uk_syscall_copy_file_range */

#ifdef HAVE_uk_syscall_preadv2
	case SYS_preadv2:
		return "preadv2";
#endif /* HAVE_uk_syscall_preadv2 */

#ifdef HAVE_uk_syscall_pwritev2
	case SYS_pwritev2:
		return "pwritev2";
#endif /* HAVE_uk_syscall_pwritev2 */

#ifdef HAVE_uk_syscall_pkey_mprotect
	case SYS_pkey_mprotect:
		return "pkey_mprotect";
#endif /* HAVE_uk_syscall_pkey_mprotect */

#ifdef HAVE_uk_syscall_pkey_alloc
	case SYS_pkey_alloc:
		return "pkey_alloc";
#endif /* HAVE_uk_syscall_pkey_alloc */

#ifdef HAVE_uk_syscall_pkey_free
	case SYS_pkey_free:
		return "pkey_free";
#endif /* HAVE_uk_syscall_pkey_free */

#ifdef HAVE_uk_syscall_statx
	case SYS_statx:
		return "statx";
#endif /* HAVE_uk_syscall_statx */

#ifdef HAVE_uk_syscall_io_pgetevents
	case SYS_io_pgetevents:
		return "io_pgetevents";
#endif /* HAVE_uk_syscall_io_pgetevents */

#ifdef HAVE_uk_syscall_rseq
	case SYS_rseq:
		return "rseq";
#endif /* HAVE_uk_syscall_rseq */

#ifdef HAVE_uk_syscall_pidfd_send_signal
	case SYS_pidfd_send_signal:
		return "pidfd_send_signal";
#endif /* HAVE_uk_syscall_pidfd_send_signal */

#ifdef HAVE_uk_syscall_io_uring_setup
	case SYS_io_uring_setup:
		return "io_uring_setup";
#endif /* HAVE_uk_syscall_io_uring_setup */

#ifdef HAVE_uk_syscall_io_uring_enter
	case SYS_io_uring_enter:
		return "io_uring_enter";
#endif /* HAVE_uk_syscall_io_uring_enter */

#ifdef HAVE_uk_syscall_io_uring_register
	case SYS_io_uring_register:
		return "io_uring_register";
#endif /* HAVE_uk_syscall_io_uring_register */

#ifdef HAVE_uk_syscall_open_tree
	case SYS_open_tree:
		return "open_tree";
#endif /* HAVE_uk_syscall_open_tree */

#ifdef HAVE_uk_syscall_move_mount
	case SYS_move_mount:
		return "move_mount";
#endif /* HAVE_uk_syscall_move_mount */

#ifdef HAVE_uk_syscall_fsopen
	case SYS_fsopen:
		return "fsopen";
#endif /* HAVE_uk_syscall_fsopen */

#ifdef HAVE_uk_syscall_fsconfig
	case SYS_fsconfig:
		return "fsconfig";
#endif /* HAVE_uk_syscall_fsconfig */

#ifdef HAVE_uk_syscall_fsmount
	case SYS_fsmount:
		return "fsmount";
#endif /* HAVE_uk_syscall_fsmount */

#ifdef HAVE_uk_syscall_fspick
	case SYS_fspick:
		return "fspick";
#endif /* HAVE_uk_syscall_fspick */

#ifdef HAVE_uk_syscall_pidfd_open
	case SYS_pidfd_open:
		return "pidfd_open";
#endif /* HAVE_uk_syscall_pidfd_open */

#ifdef HAVE_uk_syscall_clone3
	case SYS_clone3:
		return "clone3";
#endif /* HAVE_uk_syscall_clone3 */

#ifdef HAVE_uk_syscall_close_range
	case SYS_close_range:
		return "close_range";
#endif /* HAVE_uk_syscall_close_range */

#ifdef HAVE_uk_syscall_openat2
	case SYS_openat2:
		return "openat2";
#endif /* HAVE_uk_syscall_openat2 */

#ifdef HAVE_uk_syscall_pidfd_getfd
	case SYS_pidfd_getfd:
		return "pidfd_getfd";
#endif /* HAVE_uk_syscall_pidfd_getfd */

#ifdef HAVE_uk_syscall_faccessat2
	case SYS_faccessat2:
		return "faccessat2";
#endif /* HAVE_uk_syscall_faccessat2 */

#ifdef HAVE_uk_syscall_process_madvise
	case SYS_process_madvise:
		return "process_madvise";
#endif /* HAVE_uk_syscall_process_madvise */

#ifdef HAVE_uk_syscall_epoll_pwait2
	case SYS_epoll_pwait2:
		return "epoll_pwait2";
#endif /* HAVE_uk_syscall_epoll_pwait2 */

#ifdef HAVE_uk_syscall_mount_setattr
	case SYS_mount_setattr:
		return "mount_setattr";
#endif /* HAVE_uk_syscall_mount_setattr */

#ifdef HAVE_uk_syscall_landlock_create_ruleset
	case SYS_landlock_create_ruleset:
		return "landlock_create_ruleset";
#endif /* HAVE_uk_syscall_landlock_create_ruleset */

#ifdef HAVE_uk_syscall_landlock_add_rule
	case SYS_landlock_add_rule:
		return "landlock_add_rule";
#endif /* HAVE_uk_syscall_landlock_add_rule */

#ifdef HAVE_uk_syscall_landlock_restrict_self
	case SYS_landlock_restrict_self:
		return "landlock_restrict_self";
#endif /* HAVE_uk_syscall_landlock_restrict_self */

#ifdef HAVE_uk_syscall_memfd_secret
	case SYS_memfd_secret:
		return "memfd_secret";
#endif /* HAVE_uk_syscall_memfd_secret */

#ifdef HAVE_uk_syscall_process_mrelease
	case SYS_process_mrelease:
		return "process_mrelease";
#endif /* HAVE_uk_syscall_process_mrelease */

#ifdef HAVE_uk_syscall_futex_waitv
	case SYS_futex_waitv:
		return "futex_waitv";
#endif /* HAVE_uk_syscall_futex_waitv */

#ifdef HAVE_uk_syscall_set_mempolicy_home_node
	case SYS_set_mempolicy_home_node:
		return "set_mempolicy_home_node";
#endif /* HAVE_uk_syscall_set_mempolicy_home_node */

#ifdef HAVE_uk_syscall_cachestat
	case SYS_cachestat:
		return "cachestat";
#endif /* HAVE_uk_syscall_cachestat */

#ifdef HAVE_uk_syscall_fchmodat2
	case SYS_fchmodat2:
		return "fchmodat2";
#endif /* HAVE_uk_syscall_fchmodat2 */

#ifdef HAVE_uk_syscall_map_shadow_stack
	case SYS_map_shadow_stack:
		return "map_shadow_stack";
#endif /* HAVE_uk_syscall_map_shadow_stack */

#ifdef HAVE_uk_syscall_futex_wake
	case SYS_futex_wake:
		return "futex_wake";
#endif /* HAVE_uk_syscall_futex_wake */

#ifdef HAVE_uk_syscall_futex_wait
	case SYS_futex_wait:
		return "futex_wait";
#endif /* HAVE_uk_syscall_futex_wait */

#ifdef HAVE_uk_syscall_futex_requeue
	case SYS_futex_requeue:
		return "futex_requeue";
#endif /* HAVE_uk_syscall_futex_requeue */

#ifdef HAVE_uk_syscall_statmount
	case SYS_statmount:
		return "statmount";
#endif /* HAVE_uk_syscall_statmount */

#ifdef HAVE_uk_syscall_listmount
	case SYS_listmount:
		return "listmount";
#endif /* HAVE_uk_syscall_listmount */

	default:
		return NULL;
	}
}
