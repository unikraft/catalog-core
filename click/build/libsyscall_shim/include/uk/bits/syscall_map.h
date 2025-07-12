/* Automatically generated file; DO NOT EDIT */

#include <uk/bits/syscall_provided.h>

#define _uk_syscall_e_enosys() \
	({ errno = ENOSYS; (-1); })
#define _uk_syscall_r_enosys() \
	({ (-ENOSYS); })

#ifdef HAVE_uk_syscall_read
#define uk_syscall_fn0(...) \
	uk_syscall_e_read(__VA_ARGS__)
#define uk_syscall0_fn0() \
	uk_syscall_e0_read()
#define uk_syscall1_fn0(arg1) \
	uk_syscall_e1_read(arg1)
#define uk_syscall2_fn0(arg1, arg2) \
	uk_syscall_e2_read(arg1, arg2)
#define uk_syscall3_fn0(arg1, arg2, arg3) \
	uk_syscall_e3_read(arg1, arg2, arg3)
#define uk_syscall4_fn0(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_read(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn0(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_read(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn0(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_read(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn0(...) \
	uk_syscall_r_read(__VA_ARGS__)
#define uk_syscall_r0_fn0() \
	uk_syscall_r0_read()
#define uk_syscall_r1_fn0(arg1) \
	uk_syscall_r1_read(arg1)
#define uk_syscall_r2_fn0(arg1, arg2) \
	uk_syscall_r2_read(arg1, arg2)
#define uk_syscall_r3_fn0(arg1, arg2, arg3) \
	uk_syscall_r3_read(arg1, arg2, arg3)
#define uk_syscall_r4_fn0(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_read(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn0(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_read(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn0(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_read(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_read */
#define uk_syscall_fn0(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn0() _uk_syscall_e_enosys()
#define uk_syscall1_fn0(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn0(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn0(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn0(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn0(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn0(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn0(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn0() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn0(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn0(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn0(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn0(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn0(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn0(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_read */

#ifdef HAVE_uk_syscall_write
#define uk_syscall_fn1(...) \
	uk_syscall_e_write(__VA_ARGS__)
#define uk_syscall0_fn1() \
	uk_syscall_e0_write()
#define uk_syscall1_fn1(arg1) \
	uk_syscall_e1_write(arg1)
#define uk_syscall2_fn1(arg1, arg2) \
	uk_syscall_e2_write(arg1, arg2)
#define uk_syscall3_fn1(arg1, arg2, arg3) \
	uk_syscall_e3_write(arg1, arg2, arg3)
#define uk_syscall4_fn1(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_write(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn1(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_write(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn1(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_write(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn1(...) \
	uk_syscall_r_write(__VA_ARGS__)
#define uk_syscall_r0_fn1() \
	uk_syscall_r0_write()
#define uk_syscall_r1_fn1(arg1) \
	uk_syscall_r1_write(arg1)
#define uk_syscall_r2_fn1(arg1, arg2) \
	uk_syscall_r2_write(arg1, arg2)
#define uk_syscall_r3_fn1(arg1, arg2, arg3) \
	uk_syscall_r3_write(arg1, arg2, arg3)
#define uk_syscall_r4_fn1(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_write(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn1(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_write(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn1(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_write(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_write */
#define uk_syscall_fn1(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn1() _uk_syscall_e_enosys()
#define uk_syscall1_fn1(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn1(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn1(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn1(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn1(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn1(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn1(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn1() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn1(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn1(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn1(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn1(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn1(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn1(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_write */

#ifdef HAVE_uk_syscall_open
#define uk_syscall_fn2(...) \
	uk_syscall_e_open(__VA_ARGS__)
#define uk_syscall0_fn2() \
	uk_syscall_e0_open()
#define uk_syscall1_fn2(arg1) \
	uk_syscall_e1_open(arg1)
#define uk_syscall2_fn2(arg1, arg2) \
	uk_syscall_e2_open(arg1, arg2)
#define uk_syscall3_fn2(arg1, arg2, arg3) \
	uk_syscall_e3_open(arg1, arg2, arg3)
#define uk_syscall4_fn2(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_open(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn2(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn2(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_open(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn2(...) \
	uk_syscall_r_open(__VA_ARGS__)
#define uk_syscall_r0_fn2() \
	uk_syscall_r0_open()
#define uk_syscall_r1_fn2(arg1) \
	uk_syscall_r1_open(arg1)
#define uk_syscall_r2_fn2(arg1, arg2) \
	uk_syscall_r2_open(arg1, arg2)
#define uk_syscall_r3_fn2(arg1, arg2, arg3) \
	uk_syscall_r3_open(arg1, arg2, arg3)
#define uk_syscall_r4_fn2(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_open(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn2(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn2(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_open(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_open */
#define uk_syscall_fn2(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn2() _uk_syscall_e_enosys()
#define uk_syscall1_fn2(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn2(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn2(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn2(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn2(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn2(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn2(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn2() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn2(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn2(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn2(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn2(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn2(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn2(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_open */

#ifdef HAVE_uk_syscall_close
#define uk_syscall_fn3(...) \
	uk_syscall_e_close(__VA_ARGS__)
#define uk_syscall0_fn3() \
	uk_syscall_e0_close()
#define uk_syscall1_fn3(arg1) \
	uk_syscall_e1_close(arg1)
#define uk_syscall2_fn3(arg1, arg2) \
	uk_syscall_e2_close(arg1, arg2)
#define uk_syscall3_fn3(arg1, arg2, arg3) \
	uk_syscall_e3_close(arg1, arg2, arg3)
#define uk_syscall4_fn3(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_close(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn3(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_close(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn3(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_close(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn3(...) \
	uk_syscall_r_close(__VA_ARGS__)
#define uk_syscall_r0_fn3() \
	uk_syscall_r0_close()
#define uk_syscall_r1_fn3(arg1) \
	uk_syscall_r1_close(arg1)
#define uk_syscall_r2_fn3(arg1, arg2) \
	uk_syscall_r2_close(arg1, arg2)
#define uk_syscall_r3_fn3(arg1, arg2, arg3) \
	uk_syscall_r3_close(arg1, arg2, arg3)
#define uk_syscall_r4_fn3(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_close(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn3(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_close(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn3(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_close(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_close */
#define uk_syscall_fn3(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn3() _uk_syscall_e_enosys()
#define uk_syscall1_fn3(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn3(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn3(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn3(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn3(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn3(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn3(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn3() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn3(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn3(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn3(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn3(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn3(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn3(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_close */

#ifdef HAVE_uk_syscall_stat
#define uk_syscall_fn4(...) \
	uk_syscall_e_stat(__VA_ARGS__)
#define uk_syscall0_fn4() \
	uk_syscall_e0_stat()
#define uk_syscall1_fn4(arg1) \
	uk_syscall_e1_stat(arg1)
#define uk_syscall2_fn4(arg1, arg2) \
	uk_syscall_e2_stat(arg1, arg2)
#define uk_syscall3_fn4(arg1, arg2, arg3) \
	uk_syscall_e3_stat(arg1, arg2, arg3)
#define uk_syscall4_fn4(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_stat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn4(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_stat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn4(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_stat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn4(...) \
	uk_syscall_r_stat(__VA_ARGS__)
#define uk_syscall_r0_fn4() \
	uk_syscall_r0_stat()
#define uk_syscall_r1_fn4(arg1) \
	uk_syscall_r1_stat(arg1)
#define uk_syscall_r2_fn4(arg1, arg2) \
	uk_syscall_r2_stat(arg1, arg2)
#define uk_syscall_r3_fn4(arg1, arg2, arg3) \
	uk_syscall_r3_stat(arg1, arg2, arg3)
#define uk_syscall_r4_fn4(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_stat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn4(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_stat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn4(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_stat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_stat */
#define uk_syscall_fn4(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn4() _uk_syscall_e_enosys()
#define uk_syscall1_fn4(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn4(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn4(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn4(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn4(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn4(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn4(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn4() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn4(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn4(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn4(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn4(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn4(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn4(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_stat */

#ifdef HAVE_uk_syscall_fstat
#define uk_syscall_fn5(...) \
	uk_syscall_e_fstat(__VA_ARGS__)
#define uk_syscall0_fn5() \
	uk_syscall_e0_fstat()
#define uk_syscall1_fn5(arg1) \
	uk_syscall_e1_fstat(arg1)
#define uk_syscall2_fn5(arg1, arg2) \
	uk_syscall_e2_fstat(arg1, arg2)
#define uk_syscall3_fn5(arg1, arg2, arg3) \
	uk_syscall_e3_fstat(arg1, arg2, arg3)
#define uk_syscall4_fn5(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fstat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn5(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fstat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn5(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fstat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn5(...) \
	uk_syscall_r_fstat(__VA_ARGS__)
#define uk_syscall_r0_fn5() \
	uk_syscall_r0_fstat()
#define uk_syscall_r1_fn5(arg1) \
	uk_syscall_r1_fstat(arg1)
#define uk_syscall_r2_fn5(arg1, arg2) \
	uk_syscall_r2_fstat(arg1, arg2)
#define uk_syscall_r3_fn5(arg1, arg2, arg3) \
	uk_syscall_r3_fstat(arg1, arg2, arg3)
#define uk_syscall_r4_fn5(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fstat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn5(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fstat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn5(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fstat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fstat */
#define uk_syscall_fn5(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn5() _uk_syscall_e_enosys()
#define uk_syscall1_fn5(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn5(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn5(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn5(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn5(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn5(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn5(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn5() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn5(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn5(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn5(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn5(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn5(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn5(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fstat */

#ifdef HAVE_uk_syscall_lstat
#define uk_syscall_fn6(...) \
	uk_syscall_e_lstat(__VA_ARGS__)
#define uk_syscall0_fn6() \
	uk_syscall_e0_lstat()
#define uk_syscall1_fn6(arg1) \
	uk_syscall_e1_lstat(arg1)
#define uk_syscall2_fn6(arg1, arg2) \
	uk_syscall_e2_lstat(arg1, arg2)
#define uk_syscall3_fn6(arg1, arg2, arg3) \
	uk_syscall_e3_lstat(arg1, arg2, arg3)
#define uk_syscall4_fn6(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_lstat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn6(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_lstat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn6(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_lstat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn6(...) \
	uk_syscall_r_lstat(__VA_ARGS__)
#define uk_syscall_r0_fn6() \
	uk_syscall_r0_lstat()
#define uk_syscall_r1_fn6(arg1) \
	uk_syscall_r1_lstat(arg1)
#define uk_syscall_r2_fn6(arg1, arg2) \
	uk_syscall_r2_lstat(arg1, arg2)
#define uk_syscall_r3_fn6(arg1, arg2, arg3) \
	uk_syscall_r3_lstat(arg1, arg2, arg3)
#define uk_syscall_r4_fn6(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_lstat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn6(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_lstat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn6(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_lstat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_lstat */
#define uk_syscall_fn6(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn6() _uk_syscall_e_enosys()
#define uk_syscall1_fn6(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn6(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn6(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn6(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn6(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn6(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn6(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn6() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn6(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn6(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn6(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn6(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn6(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn6(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_lstat */

#ifdef HAVE_uk_syscall_poll
#define uk_syscall_fn7(...) \
	uk_syscall_e_poll(__VA_ARGS__)
#define uk_syscall0_fn7() \
	uk_syscall_e0_poll()
#define uk_syscall1_fn7(arg1) \
	uk_syscall_e1_poll(arg1)
#define uk_syscall2_fn7(arg1, arg2) \
	uk_syscall_e2_poll(arg1, arg2)
#define uk_syscall3_fn7(arg1, arg2, arg3) \
	uk_syscall_e3_poll(arg1, arg2, arg3)
#define uk_syscall4_fn7(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_poll(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn7(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_poll(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn7(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_poll(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn7(...) \
	uk_syscall_r_poll(__VA_ARGS__)
#define uk_syscall_r0_fn7() \
	uk_syscall_r0_poll()
#define uk_syscall_r1_fn7(arg1) \
	uk_syscall_r1_poll(arg1)
#define uk_syscall_r2_fn7(arg1, arg2) \
	uk_syscall_r2_poll(arg1, arg2)
#define uk_syscall_r3_fn7(arg1, arg2, arg3) \
	uk_syscall_r3_poll(arg1, arg2, arg3)
#define uk_syscall_r4_fn7(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_poll(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn7(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_poll(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn7(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_poll(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_poll */
#define uk_syscall_fn7(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn7() _uk_syscall_e_enosys()
#define uk_syscall1_fn7(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn7(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn7(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn7(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn7(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn7(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn7(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn7() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn7(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn7(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn7(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn7(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn7(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn7(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_poll */

#ifdef HAVE_uk_syscall_lseek
#define uk_syscall_fn8(...) \
	uk_syscall_e_lseek(__VA_ARGS__)
#define uk_syscall0_fn8() \
	uk_syscall_e0_lseek()
#define uk_syscall1_fn8(arg1) \
	uk_syscall_e1_lseek(arg1)
#define uk_syscall2_fn8(arg1, arg2) \
	uk_syscall_e2_lseek(arg1, arg2)
#define uk_syscall3_fn8(arg1, arg2, arg3) \
	uk_syscall_e3_lseek(arg1, arg2, arg3)
#define uk_syscall4_fn8(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_lseek(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn8(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_lseek(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn8(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_lseek(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn8(...) \
	uk_syscall_r_lseek(__VA_ARGS__)
#define uk_syscall_r0_fn8() \
	uk_syscall_r0_lseek()
#define uk_syscall_r1_fn8(arg1) \
	uk_syscall_r1_lseek(arg1)
#define uk_syscall_r2_fn8(arg1, arg2) \
	uk_syscall_r2_lseek(arg1, arg2)
#define uk_syscall_r3_fn8(arg1, arg2, arg3) \
	uk_syscall_r3_lseek(arg1, arg2, arg3)
#define uk_syscall_r4_fn8(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_lseek(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn8(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_lseek(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn8(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_lseek(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_lseek */
#define uk_syscall_fn8(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn8() _uk_syscall_e_enosys()
#define uk_syscall1_fn8(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn8(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn8(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn8(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn8(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn8(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn8(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn8() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn8(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn8(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn8(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn8(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn8(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn8(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_lseek */

#ifdef HAVE_uk_syscall_mmap
#define uk_syscall_fn9(...) \
	uk_syscall_e_mmap(__VA_ARGS__)
#define uk_syscall0_fn9() \
	uk_syscall_e0_mmap()
#define uk_syscall1_fn9(arg1) \
	uk_syscall_e1_mmap(arg1)
#define uk_syscall2_fn9(arg1, arg2) \
	uk_syscall_e2_mmap(arg1, arg2)
#define uk_syscall3_fn9(arg1, arg2, arg3) \
	uk_syscall_e3_mmap(arg1, arg2, arg3)
#define uk_syscall4_fn9(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mmap(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn9(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mmap(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn9(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mmap(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn9(...) \
	uk_syscall_r_mmap(__VA_ARGS__)
#define uk_syscall_r0_fn9() \
	uk_syscall_r0_mmap()
#define uk_syscall_r1_fn9(arg1) \
	uk_syscall_r1_mmap(arg1)
#define uk_syscall_r2_fn9(arg1, arg2) \
	uk_syscall_r2_mmap(arg1, arg2)
#define uk_syscall_r3_fn9(arg1, arg2, arg3) \
	uk_syscall_r3_mmap(arg1, arg2, arg3)
#define uk_syscall_r4_fn9(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mmap(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn9(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mmap(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn9(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mmap(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mmap */
#define uk_syscall_fn9(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn9() _uk_syscall_e_enosys()
#define uk_syscall1_fn9(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn9(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn9(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn9(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn9(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn9(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn9(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn9() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn9(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn9(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn9(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn9(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn9(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn9(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mmap */

#ifdef HAVE_uk_syscall_mprotect
#define uk_syscall_fn10(...) \
	uk_syscall_e_mprotect(__VA_ARGS__)
#define uk_syscall0_fn10() \
	uk_syscall_e0_mprotect()
#define uk_syscall1_fn10(arg1) \
	uk_syscall_e1_mprotect(arg1)
#define uk_syscall2_fn10(arg1, arg2) \
	uk_syscall_e2_mprotect(arg1, arg2)
#define uk_syscall3_fn10(arg1, arg2, arg3) \
	uk_syscall_e3_mprotect(arg1, arg2, arg3)
#define uk_syscall4_fn10(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mprotect(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn10(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mprotect(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn10(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mprotect(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn10(...) \
	uk_syscall_r_mprotect(__VA_ARGS__)
#define uk_syscall_r0_fn10() \
	uk_syscall_r0_mprotect()
#define uk_syscall_r1_fn10(arg1) \
	uk_syscall_r1_mprotect(arg1)
#define uk_syscall_r2_fn10(arg1, arg2) \
	uk_syscall_r2_mprotect(arg1, arg2)
#define uk_syscall_r3_fn10(arg1, arg2, arg3) \
	uk_syscall_r3_mprotect(arg1, arg2, arg3)
#define uk_syscall_r4_fn10(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mprotect(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn10(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mprotect(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn10(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mprotect(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mprotect */
#define uk_syscall_fn10(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn10() _uk_syscall_e_enosys()
#define uk_syscall1_fn10(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn10(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn10(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn10(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn10(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn10(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn10(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn10() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn10(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn10(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn10(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn10(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn10(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn10(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mprotect */

#ifdef HAVE_uk_syscall_munmap
#define uk_syscall_fn11(...) \
	uk_syscall_e_munmap(__VA_ARGS__)
#define uk_syscall0_fn11() \
	uk_syscall_e0_munmap()
#define uk_syscall1_fn11(arg1) \
	uk_syscall_e1_munmap(arg1)
#define uk_syscall2_fn11(arg1, arg2) \
	uk_syscall_e2_munmap(arg1, arg2)
#define uk_syscall3_fn11(arg1, arg2, arg3) \
	uk_syscall_e3_munmap(arg1, arg2, arg3)
#define uk_syscall4_fn11(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_munmap(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn11(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_munmap(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn11(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_munmap(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn11(...) \
	uk_syscall_r_munmap(__VA_ARGS__)
#define uk_syscall_r0_fn11() \
	uk_syscall_r0_munmap()
#define uk_syscall_r1_fn11(arg1) \
	uk_syscall_r1_munmap(arg1)
#define uk_syscall_r2_fn11(arg1, arg2) \
	uk_syscall_r2_munmap(arg1, arg2)
#define uk_syscall_r3_fn11(arg1, arg2, arg3) \
	uk_syscall_r3_munmap(arg1, arg2, arg3)
#define uk_syscall_r4_fn11(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_munmap(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn11(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_munmap(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn11(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_munmap(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_munmap */
#define uk_syscall_fn11(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn11() _uk_syscall_e_enosys()
#define uk_syscall1_fn11(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn11(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn11(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn11(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn11(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn11(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn11(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn11() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn11(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn11(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn11(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn11(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn11(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn11(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_munmap */

#ifdef HAVE_uk_syscall_brk
#define uk_syscall_fn12(...) \
	uk_syscall_e_brk(__VA_ARGS__)
#define uk_syscall0_fn12() \
	uk_syscall_e0_brk()
#define uk_syscall1_fn12(arg1) \
	uk_syscall_e1_brk(arg1)
#define uk_syscall2_fn12(arg1, arg2) \
	uk_syscall_e2_brk(arg1, arg2)
#define uk_syscall3_fn12(arg1, arg2, arg3) \
	uk_syscall_e3_brk(arg1, arg2, arg3)
#define uk_syscall4_fn12(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_brk(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn12(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_brk(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn12(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_brk(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn12(...) \
	uk_syscall_r_brk(__VA_ARGS__)
#define uk_syscall_r0_fn12() \
	uk_syscall_r0_brk()
#define uk_syscall_r1_fn12(arg1) \
	uk_syscall_r1_brk(arg1)
#define uk_syscall_r2_fn12(arg1, arg2) \
	uk_syscall_r2_brk(arg1, arg2)
#define uk_syscall_r3_fn12(arg1, arg2, arg3) \
	uk_syscall_r3_brk(arg1, arg2, arg3)
#define uk_syscall_r4_fn12(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_brk(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn12(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_brk(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn12(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_brk(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_brk */
#define uk_syscall_fn12(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn12() _uk_syscall_e_enosys()
#define uk_syscall1_fn12(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn12(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn12(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn12(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn12(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn12(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn12(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn12() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn12(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn12(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn12(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn12(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn12(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn12(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_brk */

#ifdef HAVE_uk_syscall_rt_sigaction
#define uk_syscall_fn13(...) \
	uk_syscall_e_rt_sigaction(__VA_ARGS__)
#define uk_syscall0_fn13() \
	uk_syscall_e0_rt_sigaction()
#define uk_syscall1_fn13(arg1) \
	uk_syscall_e1_rt_sigaction(arg1)
#define uk_syscall2_fn13(arg1, arg2) \
	uk_syscall_e2_rt_sigaction(arg1, arg2)
#define uk_syscall3_fn13(arg1, arg2, arg3) \
	uk_syscall_e3_rt_sigaction(arg1, arg2, arg3)
#define uk_syscall4_fn13(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_sigaction(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn13(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_sigaction(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn13(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_sigaction(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn13(...) \
	uk_syscall_r_rt_sigaction(__VA_ARGS__)
#define uk_syscall_r0_fn13() \
	uk_syscall_r0_rt_sigaction()
#define uk_syscall_r1_fn13(arg1) \
	uk_syscall_r1_rt_sigaction(arg1)
#define uk_syscall_r2_fn13(arg1, arg2) \
	uk_syscall_r2_rt_sigaction(arg1, arg2)
#define uk_syscall_r3_fn13(arg1, arg2, arg3) \
	uk_syscall_r3_rt_sigaction(arg1, arg2, arg3)
#define uk_syscall_r4_fn13(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_sigaction(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn13(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_sigaction(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn13(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_sigaction(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_sigaction */
#define uk_syscall_fn13(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn13() _uk_syscall_e_enosys()
#define uk_syscall1_fn13(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn13(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn13(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn13(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn13(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn13(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn13(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn13() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn13(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn13(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn13(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn13(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn13(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn13(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_sigaction */

#ifdef HAVE_uk_syscall_rt_sigprocmask
#define uk_syscall_fn14(...) \
	uk_syscall_e_rt_sigprocmask(__VA_ARGS__)
#define uk_syscall0_fn14() \
	uk_syscall_e0_rt_sigprocmask()
#define uk_syscall1_fn14(arg1) \
	uk_syscall_e1_rt_sigprocmask(arg1)
#define uk_syscall2_fn14(arg1, arg2) \
	uk_syscall_e2_rt_sigprocmask(arg1, arg2)
#define uk_syscall3_fn14(arg1, arg2, arg3) \
	uk_syscall_e3_rt_sigprocmask(arg1, arg2, arg3)
#define uk_syscall4_fn14(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_sigprocmask(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn14(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_sigprocmask(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn14(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_sigprocmask(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn14(...) \
	uk_syscall_r_rt_sigprocmask(__VA_ARGS__)
#define uk_syscall_r0_fn14() \
	uk_syscall_r0_rt_sigprocmask()
#define uk_syscall_r1_fn14(arg1) \
	uk_syscall_r1_rt_sigprocmask(arg1)
#define uk_syscall_r2_fn14(arg1, arg2) \
	uk_syscall_r2_rt_sigprocmask(arg1, arg2)
#define uk_syscall_r3_fn14(arg1, arg2, arg3) \
	uk_syscall_r3_rt_sigprocmask(arg1, arg2, arg3)
#define uk_syscall_r4_fn14(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_sigprocmask(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn14(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_sigprocmask(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn14(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_sigprocmask(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_sigprocmask */
#define uk_syscall_fn14(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn14() _uk_syscall_e_enosys()
#define uk_syscall1_fn14(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn14(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn14(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn14(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn14(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn14(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn14(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn14() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn14(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn14(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn14(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn14(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn14(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn14(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_sigprocmask */

#ifdef HAVE_uk_syscall_rt_sigreturn
#define uk_syscall_fn15(...) \
	uk_syscall_e_rt_sigreturn(__VA_ARGS__)
#define uk_syscall0_fn15() \
	uk_syscall_e0_rt_sigreturn()
#define uk_syscall1_fn15(arg1) \
	uk_syscall_e1_rt_sigreturn(arg1)
#define uk_syscall2_fn15(arg1, arg2) \
	uk_syscall_e2_rt_sigreturn(arg1, arg2)
#define uk_syscall3_fn15(arg1, arg2, arg3) \
	uk_syscall_e3_rt_sigreturn(arg1, arg2, arg3)
#define uk_syscall4_fn15(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_sigreturn(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn15(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_sigreturn(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn15(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_sigreturn(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn15(...) \
	uk_syscall_r_rt_sigreturn(__VA_ARGS__)
#define uk_syscall_r0_fn15() \
	uk_syscall_r0_rt_sigreturn()
#define uk_syscall_r1_fn15(arg1) \
	uk_syscall_r1_rt_sigreturn(arg1)
#define uk_syscall_r2_fn15(arg1, arg2) \
	uk_syscall_r2_rt_sigreturn(arg1, arg2)
#define uk_syscall_r3_fn15(arg1, arg2, arg3) \
	uk_syscall_r3_rt_sigreturn(arg1, arg2, arg3)
#define uk_syscall_r4_fn15(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_sigreturn(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn15(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_sigreturn(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn15(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_sigreturn(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_sigreturn */
#define uk_syscall_fn15(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn15() _uk_syscall_e_enosys()
#define uk_syscall1_fn15(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn15(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn15(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn15(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn15(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn15(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn15(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn15() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn15(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn15(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn15(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn15(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn15(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn15(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_sigreturn */

#ifdef HAVE_uk_syscall_ioctl
#define uk_syscall_fn16(...) \
	uk_syscall_e_ioctl(__VA_ARGS__)
#define uk_syscall0_fn16() \
	uk_syscall_e0_ioctl()
#define uk_syscall1_fn16(arg1) \
	uk_syscall_e1_ioctl(arg1)
#define uk_syscall2_fn16(arg1, arg2) \
	uk_syscall_e2_ioctl(arg1, arg2)
#define uk_syscall3_fn16(arg1, arg2, arg3) \
	uk_syscall_e3_ioctl(arg1, arg2, arg3)
#define uk_syscall4_fn16(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ioctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn16(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ioctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn16(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ioctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn16(...) \
	uk_syscall_r_ioctl(__VA_ARGS__)
#define uk_syscall_r0_fn16() \
	uk_syscall_r0_ioctl()
#define uk_syscall_r1_fn16(arg1) \
	uk_syscall_r1_ioctl(arg1)
#define uk_syscall_r2_fn16(arg1, arg2) \
	uk_syscall_r2_ioctl(arg1, arg2)
#define uk_syscall_r3_fn16(arg1, arg2, arg3) \
	uk_syscall_r3_ioctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn16(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ioctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn16(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ioctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn16(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ioctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ioctl */
#define uk_syscall_fn16(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn16() _uk_syscall_e_enosys()
#define uk_syscall1_fn16(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn16(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn16(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn16(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn16(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn16(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn16(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn16() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn16(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn16(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn16(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn16(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn16(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn16(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ioctl */

#ifdef HAVE_uk_syscall_pread64
#define uk_syscall_fn17(...) \
	uk_syscall_e_pread64(__VA_ARGS__)
#define uk_syscall0_fn17() \
	uk_syscall_e0_pread64()
#define uk_syscall1_fn17(arg1) \
	uk_syscall_e1_pread64(arg1)
#define uk_syscall2_fn17(arg1, arg2) \
	uk_syscall_e2_pread64(arg1, arg2)
#define uk_syscall3_fn17(arg1, arg2, arg3) \
	uk_syscall_e3_pread64(arg1, arg2, arg3)
#define uk_syscall4_fn17(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pread64(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn17(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pread64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn17(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pread64(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn17(...) \
	uk_syscall_r_pread64(__VA_ARGS__)
#define uk_syscall_r0_fn17() \
	uk_syscall_r0_pread64()
#define uk_syscall_r1_fn17(arg1) \
	uk_syscall_r1_pread64(arg1)
#define uk_syscall_r2_fn17(arg1, arg2) \
	uk_syscall_r2_pread64(arg1, arg2)
#define uk_syscall_r3_fn17(arg1, arg2, arg3) \
	uk_syscall_r3_pread64(arg1, arg2, arg3)
#define uk_syscall_r4_fn17(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pread64(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn17(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pread64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn17(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pread64(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pread64 */
#define uk_syscall_fn17(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn17() _uk_syscall_e_enosys()
#define uk_syscall1_fn17(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn17(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn17(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn17(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn17(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn17(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn17(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn17() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn17(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn17(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn17(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn17(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn17(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn17(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pread64 */

#ifdef HAVE_uk_syscall_pwrite64
#define uk_syscall_fn18(...) \
	uk_syscall_e_pwrite64(__VA_ARGS__)
#define uk_syscall0_fn18() \
	uk_syscall_e0_pwrite64()
#define uk_syscall1_fn18(arg1) \
	uk_syscall_e1_pwrite64(arg1)
#define uk_syscall2_fn18(arg1, arg2) \
	uk_syscall_e2_pwrite64(arg1, arg2)
#define uk_syscall3_fn18(arg1, arg2, arg3) \
	uk_syscall_e3_pwrite64(arg1, arg2, arg3)
#define uk_syscall4_fn18(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pwrite64(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn18(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pwrite64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn18(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pwrite64(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn18(...) \
	uk_syscall_r_pwrite64(__VA_ARGS__)
#define uk_syscall_r0_fn18() \
	uk_syscall_r0_pwrite64()
#define uk_syscall_r1_fn18(arg1) \
	uk_syscall_r1_pwrite64(arg1)
#define uk_syscall_r2_fn18(arg1, arg2) \
	uk_syscall_r2_pwrite64(arg1, arg2)
#define uk_syscall_r3_fn18(arg1, arg2, arg3) \
	uk_syscall_r3_pwrite64(arg1, arg2, arg3)
#define uk_syscall_r4_fn18(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pwrite64(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn18(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pwrite64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn18(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pwrite64(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pwrite64 */
#define uk_syscall_fn18(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn18() _uk_syscall_e_enosys()
#define uk_syscall1_fn18(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn18(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn18(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn18(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn18(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn18(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn18(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn18() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn18(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn18(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn18(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn18(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn18(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn18(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pwrite64 */

#ifdef HAVE_uk_syscall_readv
#define uk_syscall_fn19(...) \
	uk_syscall_e_readv(__VA_ARGS__)
#define uk_syscall0_fn19() \
	uk_syscall_e0_readv()
#define uk_syscall1_fn19(arg1) \
	uk_syscall_e1_readv(arg1)
#define uk_syscall2_fn19(arg1, arg2) \
	uk_syscall_e2_readv(arg1, arg2)
#define uk_syscall3_fn19(arg1, arg2, arg3) \
	uk_syscall_e3_readv(arg1, arg2, arg3)
#define uk_syscall4_fn19(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_readv(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn19(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_readv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn19(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_readv(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn19(...) \
	uk_syscall_r_readv(__VA_ARGS__)
#define uk_syscall_r0_fn19() \
	uk_syscall_r0_readv()
#define uk_syscall_r1_fn19(arg1) \
	uk_syscall_r1_readv(arg1)
#define uk_syscall_r2_fn19(arg1, arg2) \
	uk_syscall_r2_readv(arg1, arg2)
#define uk_syscall_r3_fn19(arg1, arg2, arg3) \
	uk_syscall_r3_readv(arg1, arg2, arg3)
#define uk_syscall_r4_fn19(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_readv(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn19(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_readv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn19(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_readv(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_readv */
#define uk_syscall_fn19(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn19() _uk_syscall_e_enosys()
#define uk_syscall1_fn19(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn19(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn19(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn19(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn19(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn19(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn19(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn19() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn19(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn19(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn19(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn19(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn19(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn19(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_readv */

#ifdef HAVE_uk_syscall_writev
#define uk_syscall_fn20(...) \
	uk_syscall_e_writev(__VA_ARGS__)
#define uk_syscall0_fn20() \
	uk_syscall_e0_writev()
#define uk_syscall1_fn20(arg1) \
	uk_syscall_e1_writev(arg1)
#define uk_syscall2_fn20(arg1, arg2) \
	uk_syscall_e2_writev(arg1, arg2)
#define uk_syscall3_fn20(arg1, arg2, arg3) \
	uk_syscall_e3_writev(arg1, arg2, arg3)
#define uk_syscall4_fn20(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_writev(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn20(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_writev(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn20(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_writev(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn20(...) \
	uk_syscall_r_writev(__VA_ARGS__)
#define uk_syscall_r0_fn20() \
	uk_syscall_r0_writev()
#define uk_syscall_r1_fn20(arg1) \
	uk_syscall_r1_writev(arg1)
#define uk_syscall_r2_fn20(arg1, arg2) \
	uk_syscall_r2_writev(arg1, arg2)
#define uk_syscall_r3_fn20(arg1, arg2, arg3) \
	uk_syscall_r3_writev(arg1, arg2, arg3)
#define uk_syscall_r4_fn20(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_writev(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn20(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_writev(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn20(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_writev(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_writev */
#define uk_syscall_fn20(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn20() _uk_syscall_e_enosys()
#define uk_syscall1_fn20(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn20(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn20(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn20(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn20(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn20(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn20(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn20() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn20(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn20(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn20(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn20(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn20(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn20(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_writev */

#ifdef HAVE_uk_syscall_access
#define uk_syscall_fn21(...) \
	uk_syscall_e_access(__VA_ARGS__)
#define uk_syscall0_fn21() \
	uk_syscall_e0_access()
#define uk_syscall1_fn21(arg1) \
	uk_syscall_e1_access(arg1)
#define uk_syscall2_fn21(arg1, arg2) \
	uk_syscall_e2_access(arg1, arg2)
#define uk_syscall3_fn21(arg1, arg2, arg3) \
	uk_syscall_e3_access(arg1, arg2, arg3)
#define uk_syscall4_fn21(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_access(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn21(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_access(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn21(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_access(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn21(...) \
	uk_syscall_r_access(__VA_ARGS__)
#define uk_syscall_r0_fn21() \
	uk_syscall_r0_access()
#define uk_syscall_r1_fn21(arg1) \
	uk_syscall_r1_access(arg1)
#define uk_syscall_r2_fn21(arg1, arg2) \
	uk_syscall_r2_access(arg1, arg2)
#define uk_syscall_r3_fn21(arg1, arg2, arg3) \
	uk_syscall_r3_access(arg1, arg2, arg3)
#define uk_syscall_r4_fn21(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_access(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn21(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_access(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn21(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_access(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_access */
#define uk_syscall_fn21(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn21() _uk_syscall_e_enosys()
#define uk_syscall1_fn21(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn21(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn21(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn21(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn21(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn21(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn21(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn21() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn21(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn21(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn21(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn21(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn21(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn21(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_access */

#ifdef HAVE_uk_syscall_pipe
#define uk_syscall_fn22(...) \
	uk_syscall_e_pipe(__VA_ARGS__)
#define uk_syscall0_fn22() \
	uk_syscall_e0_pipe()
#define uk_syscall1_fn22(arg1) \
	uk_syscall_e1_pipe(arg1)
#define uk_syscall2_fn22(arg1, arg2) \
	uk_syscall_e2_pipe(arg1, arg2)
#define uk_syscall3_fn22(arg1, arg2, arg3) \
	uk_syscall_e3_pipe(arg1, arg2, arg3)
#define uk_syscall4_fn22(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pipe(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn22(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pipe(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn22(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pipe(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn22(...) \
	uk_syscall_r_pipe(__VA_ARGS__)
#define uk_syscall_r0_fn22() \
	uk_syscall_r0_pipe()
#define uk_syscall_r1_fn22(arg1) \
	uk_syscall_r1_pipe(arg1)
#define uk_syscall_r2_fn22(arg1, arg2) \
	uk_syscall_r2_pipe(arg1, arg2)
#define uk_syscall_r3_fn22(arg1, arg2, arg3) \
	uk_syscall_r3_pipe(arg1, arg2, arg3)
#define uk_syscall_r4_fn22(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pipe(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn22(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pipe(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn22(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pipe(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pipe */
#define uk_syscall_fn22(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn22() _uk_syscall_e_enosys()
#define uk_syscall1_fn22(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn22(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn22(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn22(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn22(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn22(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn22(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn22() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn22(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn22(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn22(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn22(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn22(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn22(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pipe */

#ifdef HAVE_uk_syscall_select
#define uk_syscall_fn23(...) \
	uk_syscall_e_select(__VA_ARGS__)
#define uk_syscall0_fn23() \
	uk_syscall_e0_select()
#define uk_syscall1_fn23(arg1) \
	uk_syscall_e1_select(arg1)
#define uk_syscall2_fn23(arg1, arg2) \
	uk_syscall_e2_select(arg1, arg2)
#define uk_syscall3_fn23(arg1, arg2, arg3) \
	uk_syscall_e3_select(arg1, arg2, arg3)
#define uk_syscall4_fn23(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_select(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn23(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_select(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn23(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_select(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn23(...) \
	uk_syscall_r_select(__VA_ARGS__)
#define uk_syscall_r0_fn23() \
	uk_syscall_r0_select()
#define uk_syscall_r1_fn23(arg1) \
	uk_syscall_r1_select(arg1)
#define uk_syscall_r2_fn23(arg1, arg2) \
	uk_syscall_r2_select(arg1, arg2)
#define uk_syscall_r3_fn23(arg1, arg2, arg3) \
	uk_syscall_r3_select(arg1, arg2, arg3)
#define uk_syscall_r4_fn23(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_select(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn23(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_select(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn23(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_select(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_select */
#define uk_syscall_fn23(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn23() _uk_syscall_e_enosys()
#define uk_syscall1_fn23(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn23(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn23(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn23(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn23(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn23(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn23(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn23() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn23(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn23(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn23(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn23(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn23(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn23(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_select */

#ifdef HAVE_uk_syscall_sched_yield
#define uk_syscall_fn24(...) \
	uk_syscall_e_sched_yield(__VA_ARGS__)
#define uk_syscall0_fn24() \
	uk_syscall_e0_sched_yield()
#define uk_syscall1_fn24(arg1) \
	uk_syscall_e1_sched_yield(arg1)
#define uk_syscall2_fn24(arg1, arg2) \
	uk_syscall_e2_sched_yield(arg1, arg2)
#define uk_syscall3_fn24(arg1, arg2, arg3) \
	uk_syscall_e3_sched_yield(arg1, arg2, arg3)
#define uk_syscall4_fn24(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_yield(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn24(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_yield(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn24(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_yield(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn24(...) \
	uk_syscall_r_sched_yield(__VA_ARGS__)
#define uk_syscall_r0_fn24() \
	uk_syscall_r0_sched_yield()
#define uk_syscall_r1_fn24(arg1) \
	uk_syscall_r1_sched_yield(arg1)
#define uk_syscall_r2_fn24(arg1, arg2) \
	uk_syscall_r2_sched_yield(arg1, arg2)
#define uk_syscall_r3_fn24(arg1, arg2, arg3) \
	uk_syscall_r3_sched_yield(arg1, arg2, arg3)
#define uk_syscall_r4_fn24(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_yield(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn24(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_yield(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn24(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_yield(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_yield */
#define uk_syscall_fn24(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn24() _uk_syscall_e_enosys()
#define uk_syscall1_fn24(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn24(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn24(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn24(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn24(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn24(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn24(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn24() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn24(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn24(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn24(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn24(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn24(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn24(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_yield */

#ifdef HAVE_uk_syscall_mremap
#define uk_syscall_fn25(...) \
	uk_syscall_e_mremap(__VA_ARGS__)
#define uk_syscall0_fn25() \
	uk_syscall_e0_mremap()
#define uk_syscall1_fn25(arg1) \
	uk_syscall_e1_mremap(arg1)
#define uk_syscall2_fn25(arg1, arg2) \
	uk_syscall_e2_mremap(arg1, arg2)
#define uk_syscall3_fn25(arg1, arg2, arg3) \
	uk_syscall_e3_mremap(arg1, arg2, arg3)
#define uk_syscall4_fn25(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mremap(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn25(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mremap(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn25(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mremap(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn25(...) \
	uk_syscall_r_mremap(__VA_ARGS__)
#define uk_syscall_r0_fn25() \
	uk_syscall_r0_mremap()
#define uk_syscall_r1_fn25(arg1) \
	uk_syscall_r1_mremap(arg1)
#define uk_syscall_r2_fn25(arg1, arg2) \
	uk_syscall_r2_mremap(arg1, arg2)
#define uk_syscall_r3_fn25(arg1, arg2, arg3) \
	uk_syscall_r3_mremap(arg1, arg2, arg3)
#define uk_syscall_r4_fn25(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mremap(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn25(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mremap(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn25(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mremap(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mremap */
#define uk_syscall_fn25(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn25() _uk_syscall_e_enosys()
#define uk_syscall1_fn25(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn25(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn25(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn25(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn25(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn25(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn25(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn25() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn25(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn25(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn25(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn25(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn25(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn25(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mremap */

#ifdef HAVE_uk_syscall_msync
#define uk_syscall_fn26(...) \
	uk_syscall_e_msync(__VA_ARGS__)
#define uk_syscall0_fn26() \
	uk_syscall_e0_msync()
#define uk_syscall1_fn26(arg1) \
	uk_syscall_e1_msync(arg1)
#define uk_syscall2_fn26(arg1, arg2) \
	uk_syscall_e2_msync(arg1, arg2)
#define uk_syscall3_fn26(arg1, arg2, arg3) \
	uk_syscall_e3_msync(arg1, arg2, arg3)
#define uk_syscall4_fn26(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_msync(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn26(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_msync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn26(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_msync(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn26(...) \
	uk_syscall_r_msync(__VA_ARGS__)
#define uk_syscall_r0_fn26() \
	uk_syscall_r0_msync()
#define uk_syscall_r1_fn26(arg1) \
	uk_syscall_r1_msync(arg1)
#define uk_syscall_r2_fn26(arg1, arg2) \
	uk_syscall_r2_msync(arg1, arg2)
#define uk_syscall_r3_fn26(arg1, arg2, arg3) \
	uk_syscall_r3_msync(arg1, arg2, arg3)
#define uk_syscall_r4_fn26(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_msync(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn26(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_msync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn26(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_msync(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_msync */
#define uk_syscall_fn26(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn26() _uk_syscall_e_enosys()
#define uk_syscall1_fn26(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn26(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn26(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn26(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn26(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn26(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn26(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn26() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn26(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn26(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn26(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn26(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn26(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn26(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_msync */

#ifdef HAVE_uk_syscall_mincore
#define uk_syscall_fn27(...) \
	uk_syscall_e_mincore(__VA_ARGS__)
#define uk_syscall0_fn27() \
	uk_syscall_e0_mincore()
#define uk_syscall1_fn27(arg1) \
	uk_syscall_e1_mincore(arg1)
#define uk_syscall2_fn27(arg1, arg2) \
	uk_syscall_e2_mincore(arg1, arg2)
#define uk_syscall3_fn27(arg1, arg2, arg3) \
	uk_syscall_e3_mincore(arg1, arg2, arg3)
#define uk_syscall4_fn27(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mincore(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn27(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mincore(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn27(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mincore(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn27(...) \
	uk_syscall_r_mincore(__VA_ARGS__)
#define uk_syscall_r0_fn27() \
	uk_syscall_r0_mincore()
#define uk_syscall_r1_fn27(arg1) \
	uk_syscall_r1_mincore(arg1)
#define uk_syscall_r2_fn27(arg1, arg2) \
	uk_syscall_r2_mincore(arg1, arg2)
#define uk_syscall_r3_fn27(arg1, arg2, arg3) \
	uk_syscall_r3_mincore(arg1, arg2, arg3)
#define uk_syscall_r4_fn27(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mincore(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn27(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mincore(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn27(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mincore(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mincore */
#define uk_syscall_fn27(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn27() _uk_syscall_e_enosys()
#define uk_syscall1_fn27(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn27(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn27(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn27(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn27(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn27(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn27(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn27() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn27(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn27(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn27(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn27(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn27(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn27(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mincore */

#ifdef HAVE_uk_syscall_madvise
#define uk_syscall_fn28(...) \
	uk_syscall_e_madvise(__VA_ARGS__)
#define uk_syscall0_fn28() \
	uk_syscall_e0_madvise()
#define uk_syscall1_fn28(arg1) \
	uk_syscall_e1_madvise(arg1)
#define uk_syscall2_fn28(arg1, arg2) \
	uk_syscall_e2_madvise(arg1, arg2)
#define uk_syscall3_fn28(arg1, arg2, arg3) \
	uk_syscall_e3_madvise(arg1, arg2, arg3)
#define uk_syscall4_fn28(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_madvise(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn28(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_madvise(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn28(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_madvise(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn28(...) \
	uk_syscall_r_madvise(__VA_ARGS__)
#define uk_syscall_r0_fn28() \
	uk_syscall_r0_madvise()
#define uk_syscall_r1_fn28(arg1) \
	uk_syscall_r1_madvise(arg1)
#define uk_syscall_r2_fn28(arg1, arg2) \
	uk_syscall_r2_madvise(arg1, arg2)
#define uk_syscall_r3_fn28(arg1, arg2, arg3) \
	uk_syscall_r3_madvise(arg1, arg2, arg3)
#define uk_syscall_r4_fn28(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_madvise(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn28(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_madvise(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn28(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_madvise(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_madvise */
#define uk_syscall_fn28(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn28() _uk_syscall_e_enosys()
#define uk_syscall1_fn28(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn28(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn28(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn28(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn28(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn28(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn28(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn28() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn28(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn28(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn28(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn28(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn28(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn28(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_madvise */

#ifdef HAVE_uk_syscall_shmget
#define uk_syscall_fn29(...) \
	uk_syscall_e_shmget(__VA_ARGS__)
#define uk_syscall0_fn29() \
	uk_syscall_e0_shmget()
#define uk_syscall1_fn29(arg1) \
	uk_syscall_e1_shmget(arg1)
#define uk_syscall2_fn29(arg1, arg2) \
	uk_syscall_e2_shmget(arg1, arg2)
#define uk_syscall3_fn29(arg1, arg2, arg3) \
	uk_syscall_e3_shmget(arg1, arg2, arg3)
#define uk_syscall4_fn29(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_shmget(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn29(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_shmget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn29(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_shmget(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn29(...) \
	uk_syscall_r_shmget(__VA_ARGS__)
#define uk_syscall_r0_fn29() \
	uk_syscall_r0_shmget()
#define uk_syscall_r1_fn29(arg1) \
	uk_syscall_r1_shmget(arg1)
#define uk_syscall_r2_fn29(arg1, arg2) \
	uk_syscall_r2_shmget(arg1, arg2)
#define uk_syscall_r3_fn29(arg1, arg2, arg3) \
	uk_syscall_r3_shmget(arg1, arg2, arg3)
#define uk_syscall_r4_fn29(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_shmget(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn29(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_shmget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn29(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_shmget(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_shmget */
#define uk_syscall_fn29(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn29() _uk_syscall_e_enosys()
#define uk_syscall1_fn29(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn29(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn29(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn29(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn29(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn29(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn29(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn29() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn29(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn29(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn29(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn29(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn29(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn29(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_shmget */

#ifdef HAVE_uk_syscall_shmat
#define uk_syscall_fn30(...) \
	uk_syscall_e_shmat(__VA_ARGS__)
#define uk_syscall0_fn30() \
	uk_syscall_e0_shmat()
#define uk_syscall1_fn30(arg1) \
	uk_syscall_e1_shmat(arg1)
#define uk_syscall2_fn30(arg1, arg2) \
	uk_syscall_e2_shmat(arg1, arg2)
#define uk_syscall3_fn30(arg1, arg2, arg3) \
	uk_syscall_e3_shmat(arg1, arg2, arg3)
#define uk_syscall4_fn30(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_shmat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn30(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_shmat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn30(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_shmat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn30(...) \
	uk_syscall_r_shmat(__VA_ARGS__)
#define uk_syscall_r0_fn30() \
	uk_syscall_r0_shmat()
#define uk_syscall_r1_fn30(arg1) \
	uk_syscall_r1_shmat(arg1)
#define uk_syscall_r2_fn30(arg1, arg2) \
	uk_syscall_r2_shmat(arg1, arg2)
#define uk_syscall_r3_fn30(arg1, arg2, arg3) \
	uk_syscall_r3_shmat(arg1, arg2, arg3)
#define uk_syscall_r4_fn30(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_shmat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn30(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_shmat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn30(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_shmat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_shmat */
#define uk_syscall_fn30(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn30() _uk_syscall_e_enosys()
#define uk_syscall1_fn30(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn30(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn30(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn30(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn30(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn30(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn30(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn30() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn30(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn30(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn30(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn30(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn30(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn30(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_shmat */

#ifdef HAVE_uk_syscall_shmctl
#define uk_syscall_fn31(...) \
	uk_syscall_e_shmctl(__VA_ARGS__)
#define uk_syscall0_fn31() \
	uk_syscall_e0_shmctl()
#define uk_syscall1_fn31(arg1) \
	uk_syscall_e1_shmctl(arg1)
#define uk_syscall2_fn31(arg1, arg2) \
	uk_syscall_e2_shmctl(arg1, arg2)
#define uk_syscall3_fn31(arg1, arg2, arg3) \
	uk_syscall_e3_shmctl(arg1, arg2, arg3)
#define uk_syscall4_fn31(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_shmctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn31(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_shmctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn31(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_shmctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn31(...) \
	uk_syscall_r_shmctl(__VA_ARGS__)
#define uk_syscall_r0_fn31() \
	uk_syscall_r0_shmctl()
#define uk_syscall_r1_fn31(arg1) \
	uk_syscall_r1_shmctl(arg1)
#define uk_syscall_r2_fn31(arg1, arg2) \
	uk_syscall_r2_shmctl(arg1, arg2)
#define uk_syscall_r3_fn31(arg1, arg2, arg3) \
	uk_syscall_r3_shmctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn31(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_shmctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn31(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_shmctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn31(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_shmctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_shmctl */
#define uk_syscall_fn31(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn31() _uk_syscall_e_enosys()
#define uk_syscall1_fn31(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn31(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn31(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn31(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn31(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn31(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn31(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn31() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn31(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn31(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn31(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn31(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn31(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn31(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_shmctl */

#ifdef HAVE_uk_syscall_dup
#define uk_syscall_fn32(...) \
	uk_syscall_e_dup(__VA_ARGS__)
#define uk_syscall0_fn32() \
	uk_syscall_e0_dup()
#define uk_syscall1_fn32(arg1) \
	uk_syscall_e1_dup(arg1)
#define uk_syscall2_fn32(arg1, arg2) \
	uk_syscall_e2_dup(arg1, arg2)
#define uk_syscall3_fn32(arg1, arg2, arg3) \
	uk_syscall_e3_dup(arg1, arg2, arg3)
#define uk_syscall4_fn32(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_dup(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn32(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_dup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn32(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_dup(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn32(...) \
	uk_syscall_r_dup(__VA_ARGS__)
#define uk_syscall_r0_fn32() \
	uk_syscall_r0_dup()
#define uk_syscall_r1_fn32(arg1) \
	uk_syscall_r1_dup(arg1)
#define uk_syscall_r2_fn32(arg1, arg2) \
	uk_syscall_r2_dup(arg1, arg2)
#define uk_syscall_r3_fn32(arg1, arg2, arg3) \
	uk_syscall_r3_dup(arg1, arg2, arg3)
#define uk_syscall_r4_fn32(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_dup(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn32(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_dup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn32(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_dup(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_dup */
#define uk_syscall_fn32(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn32() _uk_syscall_e_enosys()
#define uk_syscall1_fn32(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn32(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn32(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn32(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn32(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn32(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn32(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn32() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn32(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn32(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn32(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn32(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn32(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn32(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_dup */

#ifdef HAVE_uk_syscall_dup2
#define uk_syscall_fn33(...) \
	uk_syscall_e_dup2(__VA_ARGS__)
#define uk_syscall0_fn33() \
	uk_syscall_e0_dup2()
#define uk_syscall1_fn33(arg1) \
	uk_syscall_e1_dup2(arg1)
#define uk_syscall2_fn33(arg1, arg2) \
	uk_syscall_e2_dup2(arg1, arg2)
#define uk_syscall3_fn33(arg1, arg2, arg3) \
	uk_syscall_e3_dup2(arg1, arg2, arg3)
#define uk_syscall4_fn33(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_dup2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn33(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_dup2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn33(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_dup2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn33(...) \
	uk_syscall_r_dup2(__VA_ARGS__)
#define uk_syscall_r0_fn33() \
	uk_syscall_r0_dup2()
#define uk_syscall_r1_fn33(arg1) \
	uk_syscall_r1_dup2(arg1)
#define uk_syscall_r2_fn33(arg1, arg2) \
	uk_syscall_r2_dup2(arg1, arg2)
#define uk_syscall_r3_fn33(arg1, arg2, arg3) \
	uk_syscall_r3_dup2(arg1, arg2, arg3)
#define uk_syscall_r4_fn33(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_dup2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn33(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_dup2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn33(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_dup2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_dup2 */
#define uk_syscall_fn33(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn33() _uk_syscall_e_enosys()
#define uk_syscall1_fn33(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn33(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn33(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn33(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn33(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn33(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn33(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn33() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn33(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn33(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn33(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn33(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn33(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn33(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_dup2 */

#ifdef HAVE_uk_syscall_pause
#define uk_syscall_fn34(...) \
	uk_syscall_e_pause(__VA_ARGS__)
#define uk_syscall0_fn34() \
	uk_syscall_e0_pause()
#define uk_syscall1_fn34(arg1) \
	uk_syscall_e1_pause(arg1)
#define uk_syscall2_fn34(arg1, arg2) \
	uk_syscall_e2_pause(arg1, arg2)
#define uk_syscall3_fn34(arg1, arg2, arg3) \
	uk_syscall_e3_pause(arg1, arg2, arg3)
#define uk_syscall4_fn34(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pause(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn34(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pause(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn34(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pause(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn34(...) \
	uk_syscall_r_pause(__VA_ARGS__)
#define uk_syscall_r0_fn34() \
	uk_syscall_r0_pause()
#define uk_syscall_r1_fn34(arg1) \
	uk_syscall_r1_pause(arg1)
#define uk_syscall_r2_fn34(arg1, arg2) \
	uk_syscall_r2_pause(arg1, arg2)
#define uk_syscall_r3_fn34(arg1, arg2, arg3) \
	uk_syscall_r3_pause(arg1, arg2, arg3)
#define uk_syscall_r4_fn34(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pause(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn34(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pause(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn34(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pause(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pause */
#define uk_syscall_fn34(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn34() _uk_syscall_e_enosys()
#define uk_syscall1_fn34(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn34(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn34(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn34(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn34(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn34(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn34(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn34() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn34(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn34(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn34(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn34(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn34(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn34(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pause */

#ifdef HAVE_uk_syscall_nanosleep
#define uk_syscall_fn35(...) \
	uk_syscall_e_nanosleep(__VA_ARGS__)
#define uk_syscall0_fn35() \
	uk_syscall_e0_nanosleep()
#define uk_syscall1_fn35(arg1) \
	uk_syscall_e1_nanosleep(arg1)
#define uk_syscall2_fn35(arg1, arg2) \
	uk_syscall_e2_nanosleep(arg1, arg2)
#define uk_syscall3_fn35(arg1, arg2, arg3) \
	uk_syscall_e3_nanosleep(arg1, arg2, arg3)
#define uk_syscall4_fn35(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_nanosleep(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn35(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_nanosleep(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn35(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_nanosleep(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn35(...) \
	uk_syscall_r_nanosleep(__VA_ARGS__)
#define uk_syscall_r0_fn35() \
	uk_syscall_r0_nanosleep()
#define uk_syscall_r1_fn35(arg1) \
	uk_syscall_r1_nanosleep(arg1)
#define uk_syscall_r2_fn35(arg1, arg2) \
	uk_syscall_r2_nanosleep(arg1, arg2)
#define uk_syscall_r3_fn35(arg1, arg2, arg3) \
	uk_syscall_r3_nanosleep(arg1, arg2, arg3)
#define uk_syscall_r4_fn35(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_nanosleep(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn35(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_nanosleep(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn35(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_nanosleep(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_nanosleep */
#define uk_syscall_fn35(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn35() _uk_syscall_e_enosys()
#define uk_syscall1_fn35(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn35(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn35(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn35(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn35(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn35(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn35(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn35() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn35(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn35(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn35(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn35(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn35(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn35(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_nanosleep */

#ifdef HAVE_uk_syscall_getitimer
#define uk_syscall_fn36(...) \
	uk_syscall_e_getitimer(__VA_ARGS__)
#define uk_syscall0_fn36() \
	uk_syscall_e0_getitimer()
#define uk_syscall1_fn36(arg1) \
	uk_syscall_e1_getitimer(arg1)
#define uk_syscall2_fn36(arg1, arg2) \
	uk_syscall_e2_getitimer(arg1, arg2)
#define uk_syscall3_fn36(arg1, arg2, arg3) \
	uk_syscall_e3_getitimer(arg1, arg2, arg3)
#define uk_syscall4_fn36(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getitimer(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn36(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getitimer(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn36(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getitimer(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn36(...) \
	uk_syscall_r_getitimer(__VA_ARGS__)
#define uk_syscall_r0_fn36() \
	uk_syscall_r0_getitimer()
#define uk_syscall_r1_fn36(arg1) \
	uk_syscall_r1_getitimer(arg1)
#define uk_syscall_r2_fn36(arg1, arg2) \
	uk_syscall_r2_getitimer(arg1, arg2)
#define uk_syscall_r3_fn36(arg1, arg2, arg3) \
	uk_syscall_r3_getitimer(arg1, arg2, arg3)
#define uk_syscall_r4_fn36(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getitimer(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn36(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getitimer(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn36(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getitimer(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getitimer */
#define uk_syscall_fn36(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn36() _uk_syscall_e_enosys()
#define uk_syscall1_fn36(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn36(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn36(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn36(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn36(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn36(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn36(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn36() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn36(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn36(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn36(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn36(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn36(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn36(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getitimer */

#ifdef HAVE_uk_syscall_alarm
#define uk_syscall_fn37(...) \
	uk_syscall_e_alarm(__VA_ARGS__)
#define uk_syscall0_fn37() \
	uk_syscall_e0_alarm()
#define uk_syscall1_fn37(arg1) \
	uk_syscall_e1_alarm(arg1)
#define uk_syscall2_fn37(arg1, arg2) \
	uk_syscall_e2_alarm(arg1, arg2)
#define uk_syscall3_fn37(arg1, arg2, arg3) \
	uk_syscall_e3_alarm(arg1, arg2, arg3)
#define uk_syscall4_fn37(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_alarm(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn37(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_alarm(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn37(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_alarm(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn37(...) \
	uk_syscall_r_alarm(__VA_ARGS__)
#define uk_syscall_r0_fn37() \
	uk_syscall_r0_alarm()
#define uk_syscall_r1_fn37(arg1) \
	uk_syscall_r1_alarm(arg1)
#define uk_syscall_r2_fn37(arg1, arg2) \
	uk_syscall_r2_alarm(arg1, arg2)
#define uk_syscall_r3_fn37(arg1, arg2, arg3) \
	uk_syscall_r3_alarm(arg1, arg2, arg3)
#define uk_syscall_r4_fn37(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_alarm(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn37(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_alarm(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn37(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_alarm(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_alarm */
#define uk_syscall_fn37(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn37() _uk_syscall_e_enosys()
#define uk_syscall1_fn37(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn37(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn37(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn37(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn37(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn37(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn37(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn37() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn37(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn37(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn37(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn37(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn37(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn37(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_alarm */

#ifdef HAVE_uk_syscall_setitimer
#define uk_syscall_fn38(...) \
	uk_syscall_e_setitimer(__VA_ARGS__)
#define uk_syscall0_fn38() \
	uk_syscall_e0_setitimer()
#define uk_syscall1_fn38(arg1) \
	uk_syscall_e1_setitimer(arg1)
#define uk_syscall2_fn38(arg1, arg2) \
	uk_syscall_e2_setitimer(arg1, arg2)
#define uk_syscall3_fn38(arg1, arg2, arg3) \
	uk_syscall_e3_setitimer(arg1, arg2, arg3)
#define uk_syscall4_fn38(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setitimer(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn38(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setitimer(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn38(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setitimer(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn38(...) \
	uk_syscall_r_setitimer(__VA_ARGS__)
#define uk_syscall_r0_fn38() \
	uk_syscall_r0_setitimer()
#define uk_syscall_r1_fn38(arg1) \
	uk_syscall_r1_setitimer(arg1)
#define uk_syscall_r2_fn38(arg1, arg2) \
	uk_syscall_r2_setitimer(arg1, arg2)
#define uk_syscall_r3_fn38(arg1, arg2, arg3) \
	uk_syscall_r3_setitimer(arg1, arg2, arg3)
#define uk_syscall_r4_fn38(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setitimer(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn38(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setitimer(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn38(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setitimer(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setitimer */
#define uk_syscall_fn38(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn38() _uk_syscall_e_enosys()
#define uk_syscall1_fn38(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn38(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn38(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn38(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn38(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn38(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn38(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn38() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn38(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn38(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn38(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn38(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn38(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn38(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setitimer */

#ifdef HAVE_uk_syscall_getpid
#define uk_syscall_fn39(...) \
	uk_syscall_e_getpid(__VA_ARGS__)
#define uk_syscall0_fn39() \
	uk_syscall_e0_getpid()
#define uk_syscall1_fn39(arg1) \
	uk_syscall_e1_getpid(arg1)
#define uk_syscall2_fn39(arg1, arg2) \
	uk_syscall_e2_getpid(arg1, arg2)
#define uk_syscall3_fn39(arg1, arg2, arg3) \
	uk_syscall_e3_getpid(arg1, arg2, arg3)
#define uk_syscall4_fn39(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getpid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn39(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getpid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn39(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getpid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn39(...) \
	uk_syscall_r_getpid(__VA_ARGS__)
#define uk_syscall_r0_fn39() \
	uk_syscall_r0_getpid()
#define uk_syscall_r1_fn39(arg1) \
	uk_syscall_r1_getpid(arg1)
#define uk_syscall_r2_fn39(arg1, arg2) \
	uk_syscall_r2_getpid(arg1, arg2)
#define uk_syscall_r3_fn39(arg1, arg2, arg3) \
	uk_syscall_r3_getpid(arg1, arg2, arg3)
#define uk_syscall_r4_fn39(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getpid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn39(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getpid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn39(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getpid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getpid */
#define uk_syscall_fn39(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn39() _uk_syscall_e_enosys()
#define uk_syscall1_fn39(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn39(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn39(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn39(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn39(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn39(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn39(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn39() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn39(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn39(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn39(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn39(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn39(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn39(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getpid */

#ifdef HAVE_uk_syscall_sendfile
#define uk_syscall_fn40(...) \
	uk_syscall_e_sendfile(__VA_ARGS__)
#define uk_syscall0_fn40() \
	uk_syscall_e0_sendfile()
#define uk_syscall1_fn40(arg1) \
	uk_syscall_e1_sendfile(arg1)
#define uk_syscall2_fn40(arg1, arg2) \
	uk_syscall_e2_sendfile(arg1, arg2)
#define uk_syscall3_fn40(arg1, arg2, arg3) \
	uk_syscall_e3_sendfile(arg1, arg2, arg3)
#define uk_syscall4_fn40(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sendfile(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn40(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sendfile(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn40(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sendfile(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn40(...) \
	uk_syscall_r_sendfile(__VA_ARGS__)
#define uk_syscall_r0_fn40() \
	uk_syscall_r0_sendfile()
#define uk_syscall_r1_fn40(arg1) \
	uk_syscall_r1_sendfile(arg1)
#define uk_syscall_r2_fn40(arg1, arg2) \
	uk_syscall_r2_sendfile(arg1, arg2)
#define uk_syscall_r3_fn40(arg1, arg2, arg3) \
	uk_syscall_r3_sendfile(arg1, arg2, arg3)
#define uk_syscall_r4_fn40(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sendfile(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn40(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sendfile(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn40(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sendfile(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sendfile */
#define uk_syscall_fn40(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn40() _uk_syscall_e_enosys()
#define uk_syscall1_fn40(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn40(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn40(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn40(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn40(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn40(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn40(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn40() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn40(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn40(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn40(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn40(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn40(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn40(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sendfile */

#ifdef HAVE_uk_syscall_socket
#define uk_syscall_fn41(...) \
	uk_syscall_e_socket(__VA_ARGS__)
#define uk_syscall0_fn41() \
	uk_syscall_e0_socket()
#define uk_syscall1_fn41(arg1) \
	uk_syscall_e1_socket(arg1)
#define uk_syscall2_fn41(arg1, arg2) \
	uk_syscall_e2_socket(arg1, arg2)
#define uk_syscall3_fn41(arg1, arg2, arg3) \
	uk_syscall_e3_socket(arg1, arg2, arg3)
#define uk_syscall4_fn41(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_socket(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn41(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_socket(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn41(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_socket(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn41(...) \
	uk_syscall_r_socket(__VA_ARGS__)
#define uk_syscall_r0_fn41() \
	uk_syscall_r0_socket()
#define uk_syscall_r1_fn41(arg1) \
	uk_syscall_r1_socket(arg1)
#define uk_syscall_r2_fn41(arg1, arg2) \
	uk_syscall_r2_socket(arg1, arg2)
#define uk_syscall_r3_fn41(arg1, arg2, arg3) \
	uk_syscall_r3_socket(arg1, arg2, arg3)
#define uk_syscall_r4_fn41(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_socket(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn41(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_socket(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn41(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_socket(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_socket */
#define uk_syscall_fn41(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn41() _uk_syscall_e_enosys()
#define uk_syscall1_fn41(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn41(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn41(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn41(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn41(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn41(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn41(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn41() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn41(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn41(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn41(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn41(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn41(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn41(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_socket */

#ifdef HAVE_uk_syscall_connect
#define uk_syscall_fn42(...) \
	uk_syscall_e_connect(__VA_ARGS__)
#define uk_syscall0_fn42() \
	uk_syscall_e0_connect()
#define uk_syscall1_fn42(arg1) \
	uk_syscall_e1_connect(arg1)
#define uk_syscall2_fn42(arg1, arg2) \
	uk_syscall_e2_connect(arg1, arg2)
#define uk_syscall3_fn42(arg1, arg2, arg3) \
	uk_syscall_e3_connect(arg1, arg2, arg3)
#define uk_syscall4_fn42(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_connect(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn42(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_connect(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn42(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_connect(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn42(...) \
	uk_syscall_r_connect(__VA_ARGS__)
#define uk_syscall_r0_fn42() \
	uk_syscall_r0_connect()
#define uk_syscall_r1_fn42(arg1) \
	uk_syscall_r1_connect(arg1)
#define uk_syscall_r2_fn42(arg1, arg2) \
	uk_syscall_r2_connect(arg1, arg2)
#define uk_syscall_r3_fn42(arg1, arg2, arg3) \
	uk_syscall_r3_connect(arg1, arg2, arg3)
#define uk_syscall_r4_fn42(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_connect(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn42(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_connect(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn42(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_connect(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_connect */
#define uk_syscall_fn42(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn42() _uk_syscall_e_enosys()
#define uk_syscall1_fn42(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn42(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn42(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn42(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn42(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn42(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn42(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn42() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn42(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn42(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn42(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn42(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn42(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn42(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_connect */

#ifdef HAVE_uk_syscall_accept
#define uk_syscall_fn43(...) \
	uk_syscall_e_accept(__VA_ARGS__)
#define uk_syscall0_fn43() \
	uk_syscall_e0_accept()
#define uk_syscall1_fn43(arg1) \
	uk_syscall_e1_accept(arg1)
#define uk_syscall2_fn43(arg1, arg2) \
	uk_syscall_e2_accept(arg1, arg2)
#define uk_syscall3_fn43(arg1, arg2, arg3) \
	uk_syscall_e3_accept(arg1, arg2, arg3)
#define uk_syscall4_fn43(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_accept(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn43(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_accept(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn43(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_accept(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn43(...) \
	uk_syscall_r_accept(__VA_ARGS__)
#define uk_syscall_r0_fn43() \
	uk_syscall_r0_accept()
#define uk_syscall_r1_fn43(arg1) \
	uk_syscall_r1_accept(arg1)
#define uk_syscall_r2_fn43(arg1, arg2) \
	uk_syscall_r2_accept(arg1, arg2)
#define uk_syscall_r3_fn43(arg1, arg2, arg3) \
	uk_syscall_r3_accept(arg1, arg2, arg3)
#define uk_syscall_r4_fn43(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_accept(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn43(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_accept(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn43(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_accept(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_accept */
#define uk_syscall_fn43(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn43() _uk_syscall_e_enosys()
#define uk_syscall1_fn43(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn43(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn43(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn43(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn43(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn43(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn43(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn43() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn43(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn43(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn43(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn43(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn43(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn43(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_accept */

#ifdef HAVE_uk_syscall_sendto
#define uk_syscall_fn44(...) \
	uk_syscall_e_sendto(__VA_ARGS__)
#define uk_syscall0_fn44() \
	uk_syscall_e0_sendto()
#define uk_syscall1_fn44(arg1) \
	uk_syscall_e1_sendto(arg1)
#define uk_syscall2_fn44(arg1, arg2) \
	uk_syscall_e2_sendto(arg1, arg2)
#define uk_syscall3_fn44(arg1, arg2, arg3) \
	uk_syscall_e3_sendto(arg1, arg2, arg3)
#define uk_syscall4_fn44(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sendto(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn44(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sendto(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn44(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sendto(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn44(...) \
	uk_syscall_r_sendto(__VA_ARGS__)
#define uk_syscall_r0_fn44() \
	uk_syscall_r0_sendto()
#define uk_syscall_r1_fn44(arg1) \
	uk_syscall_r1_sendto(arg1)
#define uk_syscall_r2_fn44(arg1, arg2) \
	uk_syscall_r2_sendto(arg1, arg2)
#define uk_syscall_r3_fn44(arg1, arg2, arg3) \
	uk_syscall_r3_sendto(arg1, arg2, arg3)
#define uk_syscall_r4_fn44(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sendto(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn44(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sendto(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn44(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sendto(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sendto */
#define uk_syscall_fn44(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn44() _uk_syscall_e_enosys()
#define uk_syscall1_fn44(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn44(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn44(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn44(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn44(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn44(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn44(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn44() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn44(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn44(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn44(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn44(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn44(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn44(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sendto */

#ifdef HAVE_uk_syscall_recvfrom
#define uk_syscall_fn45(...) \
	uk_syscall_e_recvfrom(__VA_ARGS__)
#define uk_syscall0_fn45() \
	uk_syscall_e0_recvfrom()
#define uk_syscall1_fn45(arg1) \
	uk_syscall_e1_recvfrom(arg1)
#define uk_syscall2_fn45(arg1, arg2) \
	uk_syscall_e2_recvfrom(arg1, arg2)
#define uk_syscall3_fn45(arg1, arg2, arg3) \
	uk_syscall_e3_recvfrom(arg1, arg2, arg3)
#define uk_syscall4_fn45(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_recvfrom(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn45(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_recvfrom(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn45(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_recvfrom(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn45(...) \
	uk_syscall_r_recvfrom(__VA_ARGS__)
#define uk_syscall_r0_fn45() \
	uk_syscall_r0_recvfrom()
#define uk_syscall_r1_fn45(arg1) \
	uk_syscall_r1_recvfrom(arg1)
#define uk_syscall_r2_fn45(arg1, arg2) \
	uk_syscall_r2_recvfrom(arg1, arg2)
#define uk_syscall_r3_fn45(arg1, arg2, arg3) \
	uk_syscall_r3_recvfrom(arg1, arg2, arg3)
#define uk_syscall_r4_fn45(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_recvfrom(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn45(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_recvfrom(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn45(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_recvfrom(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_recvfrom */
#define uk_syscall_fn45(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn45() _uk_syscall_e_enosys()
#define uk_syscall1_fn45(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn45(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn45(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn45(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn45(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn45(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn45(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn45() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn45(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn45(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn45(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn45(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn45(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn45(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_recvfrom */

#ifdef HAVE_uk_syscall_sendmsg
#define uk_syscall_fn46(...) \
	uk_syscall_e_sendmsg(__VA_ARGS__)
#define uk_syscall0_fn46() \
	uk_syscall_e0_sendmsg()
#define uk_syscall1_fn46(arg1) \
	uk_syscall_e1_sendmsg(arg1)
#define uk_syscall2_fn46(arg1, arg2) \
	uk_syscall_e2_sendmsg(arg1, arg2)
#define uk_syscall3_fn46(arg1, arg2, arg3) \
	uk_syscall_e3_sendmsg(arg1, arg2, arg3)
#define uk_syscall4_fn46(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sendmsg(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn46(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sendmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn46(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sendmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn46(...) \
	uk_syscall_r_sendmsg(__VA_ARGS__)
#define uk_syscall_r0_fn46() \
	uk_syscall_r0_sendmsg()
#define uk_syscall_r1_fn46(arg1) \
	uk_syscall_r1_sendmsg(arg1)
#define uk_syscall_r2_fn46(arg1, arg2) \
	uk_syscall_r2_sendmsg(arg1, arg2)
#define uk_syscall_r3_fn46(arg1, arg2, arg3) \
	uk_syscall_r3_sendmsg(arg1, arg2, arg3)
#define uk_syscall_r4_fn46(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sendmsg(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn46(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sendmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn46(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sendmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sendmsg */
#define uk_syscall_fn46(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn46() _uk_syscall_e_enosys()
#define uk_syscall1_fn46(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn46(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn46(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn46(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn46(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn46(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn46(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn46() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn46(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn46(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn46(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn46(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn46(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn46(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sendmsg */

#ifdef HAVE_uk_syscall_recvmsg
#define uk_syscall_fn47(...) \
	uk_syscall_e_recvmsg(__VA_ARGS__)
#define uk_syscall0_fn47() \
	uk_syscall_e0_recvmsg()
#define uk_syscall1_fn47(arg1) \
	uk_syscall_e1_recvmsg(arg1)
#define uk_syscall2_fn47(arg1, arg2) \
	uk_syscall_e2_recvmsg(arg1, arg2)
#define uk_syscall3_fn47(arg1, arg2, arg3) \
	uk_syscall_e3_recvmsg(arg1, arg2, arg3)
#define uk_syscall4_fn47(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_recvmsg(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn47(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_recvmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn47(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_recvmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn47(...) \
	uk_syscall_r_recvmsg(__VA_ARGS__)
#define uk_syscall_r0_fn47() \
	uk_syscall_r0_recvmsg()
#define uk_syscall_r1_fn47(arg1) \
	uk_syscall_r1_recvmsg(arg1)
#define uk_syscall_r2_fn47(arg1, arg2) \
	uk_syscall_r2_recvmsg(arg1, arg2)
#define uk_syscall_r3_fn47(arg1, arg2, arg3) \
	uk_syscall_r3_recvmsg(arg1, arg2, arg3)
#define uk_syscall_r4_fn47(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_recvmsg(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn47(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_recvmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn47(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_recvmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_recvmsg */
#define uk_syscall_fn47(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn47() _uk_syscall_e_enosys()
#define uk_syscall1_fn47(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn47(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn47(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn47(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn47(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn47(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn47(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn47() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn47(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn47(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn47(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn47(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn47(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn47(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_recvmsg */

#ifdef HAVE_uk_syscall_shutdown
#define uk_syscall_fn48(...) \
	uk_syscall_e_shutdown(__VA_ARGS__)
#define uk_syscall0_fn48() \
	uk_syscall_e0_shutdown()
#define uk_syscall1_fn48(arg1) \
	uk_syscall_e1_shutdown(arg1)
#define uk_syscall2_fn48(arg1, arg2) \
	uk_syscall_e2_shutdown(arg1, arg2)
#define uk_syscall3_fn48(arg1, arg2, arg3) \
	uk_syscall_e3_shutdown(arg1, arg2, arg3)
#define uk_syscall4_fn48(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_shutdown(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn48(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_shutdown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn48(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_shutdown(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn48(...) \
	uk_syscall_r_shutdown(__VA_ARGS__)
#define uk_syscall_r0_fn48() \
	uk_syscall_r0_shutdown()
#define uk_syscall_r1_fn48(arg1) \
	uk_syscall_r1_shutdown(arg1)
#define uk_syscall_r2_fn48(arg1, arg2) \
	uk_syscall_r2_shutdown(arg1, arg2)
#define uk_syscall_r3_fn48(arg1, arg2, arg3) \
	uk_syscall_r3_shutdown(arg1, arg2, arg3)
#define uk_syscall_r4_fn48(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_shutdown(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn48(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_shutdown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn48(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_shutdown(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_shutdown */
#define uk_syscall_fn48(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn48() _uk_syscall_e_enosys()
#define uk_syscall1_fn48(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn48(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn48(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn48(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn48(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn48(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn48(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn48() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn48(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn48(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn48(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn48(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn48(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn48(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_shutdown */

#ifdef HAVE_uk_syscall_bind
#define uk_syscall_fn49(...) \
	uk_syscall_e_bind(__VA_ARGS__)
#define uk_syscall0_fn49() \
	uk_syscall_e0_bind()
#define uk_syscall1_fn49(arg1) \
	uk_syscall_e1_bind(arg1)
#define uk_syscall2_fn49(arg1, arg2) \
	uk_syscall_e2_bind(arg1, arg2)
#define uk_syscall3_fn49(arg1, arg2, arg3) \
	uk_syscall_e3_bind(arg1, arg2, arg3)
#define uk_syscall4_fn49(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_bind(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn49(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_bind(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn49(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_bind(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn49(...) \
	uk_syscall_r_bind(__VA_ARGS__)
#define uk_syscall_r0_fn49() \
	uk_syscall_r0_bind()
#define uk_syscall_r1_fn49(arg1) \
	uk_syscall_r1_bind(arg1)
#define uk_syscall_r2_fn49(arg1, arg2) \
	uk_syscall_r2_bind(arg1, arg2)
#define uk_syscall_r3_fn49(arg1, arg2, arg3) \
	uk_syscall_r3_bind(arg1, arg2, arg3)
#define uk_syscall_r4_fn49(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_bind(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn49(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_bind(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn49(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_bind(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_bind */
#define uk_syscall_fn49(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn49() _uk_syscall_e_enosys()
#define uk_syscall1_fn49(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn49(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn49(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn49(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn49(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn49(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn49(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn49() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn49(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn49(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn49(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn49(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn49(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn49(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_bind */

#ifdef HAVE_uk_syscall_listen
#define uk_syscall_fn50(...) \
	uk_syscall_e_listen(__VA_ARGS__)
#define uk_syscall0_fn50() \
	uk_syscall_e0_listen()
#define uk_syscall1_fn50(arg1) \
	uk_syscall_e1_listen(arg1)
#define uk_syscall2_fn50(arg1, arg2) \
	uk_syscall_e2_listen(arg1, arg2)
#define uk_syscall3_fn50(arg1, arg2, arg3) \
	uk_syscall_e3_listen(arg1, arg2, arg3)
#define uk_syscall4_fn50(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_listen(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn50(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_listen(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn50(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_listen(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn50(...) \
	uk_syscall_r_listen(__VA_ARGS__)
#define uk_syscall_r0_fn50() \
	uk_syscall_r0_listen()
#define uk_syscall_r1_fn50(arg1) \
	uk_syscall_r1_listen(arg1)
#define uk_syscall_r2_fn50(arg1, arg2) \
	uk_syscall_r2_listen(arg1, arg2)
#define uk_syscall_r3_fn50(arg1, arg2, arg3) \
	uk_syscall_r3_listen(arg1, arg2, arg3)
#define uk_syscall_r4_fn50(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_listen(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn50(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_listen(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn50(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_listen(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_listen */
#define uk_syscall_fn50(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn50() _uk_syscall_e_enosys()
#define uk_syscall1_fn50(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn50(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn50(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn50(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn50(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn50(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn50(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn50() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn50(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn50(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn50(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn50(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn50(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn50(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_listen */

#ifdef HAVE_uk_syscall_getsockname
#define uk_syscall_fn51(...) \
	uk_syscall_e_getsockname(__VA_ARGS__)
#define uk_syscall0_fn51() \
	uk_syscall_e0_getsockname()
#define uk_syscall1_fn51(arg1) \
	uk_syscall_e1_getsockname(arg1)
#define uk_syscall2_fn51(arg1, arg2) \
	uk_syscall_e2_getsockname(arg1, arg2)
#define uk_syscall3_fn51(arg1, arg2, arg3) \
	uk_syscall_e3_getsockname(arg1, arg2, arg3)
#define uk_syscall4_fn51(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getsockname(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn51(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getsockname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn51(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getsockname(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn51(...) \
	uk_syscall_r_getsockname(__VA_ARGS__)
#define uk_syscall_r0_fn51() \
	uk_syscall_r0_getsockname()
#define uk_syscall_r1_fn51(arg1) \
	uk_syscall_r1_getsockname(arg1)
#define uk_syscall_r2_fn51(arg1, arg2) \
	uk_syscall_r2_getsockname(arg1, arg2)
#define uk_syscall_r3_fn51(arg1, arg2, arg3) \
	uk_syscall_r3_getsockname(arg1, arg2, arg3)
#define uk_syscall_r4_fn51(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getsockname(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn51(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getsockname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn51(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getsockname(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getsockname */
#define uk_syscall_fn51(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn51() _uk_syscall_e_enosys()
#define uk_syscall1_fn51(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn51(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn51(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn51(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn51(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn51(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn51(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn51() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn51(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn51(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn51(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn51(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn51(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn51(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getsockname */

#ifdef HAVE_uk_syscall_getpeername
#define uk_syscall_fn52(...) \
	uk_syscall_e_getpeername(__VA_ARGS__)
#define uk_syscall0_fn52() \
	uk_syscall_e0_getpeername()
#define uk_syscall1_fn52(arg1) \
	uk_syscall_e1_getpeername(arg1)
#define uk_syscall2_fn52(arg1, arg2) \
	uk_syscall_e2_getpeername(arg1, arg2)
#define uk_syscall3_fn52(arg1, arg2, arg3) \
	uk_syscall_e3_getpeername(arg1, arg2, arg3)
#define uk_syscall4_fn52(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getpeername(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn52(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getpeername(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn52(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getpeername(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn52(...) \
	uk_syscall_r_getpeername(__VA_ARGS__)
#define uk_syscall_r0_fn52() \
	uk_syscall_r0_getpeername()
#define uk_syscall_r1_fn52(arg1) \
	uk_syscall_r1_getpeername(arg1)
#define uk_syscall_r2_fn52(arg1, arg2) \
	uk_syscall_r2_getpeername(arg1, arg2)
#define uk_syscall_r3_fn52(arg1, arg2, arg3) \
	uk_syscall_r3_getpeername(arg1, arg2, arg3)
#define uk_syscall_r4_fn52(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getpeername(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn52(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getpeername(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn52(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getpeername(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getpeername */
#define uk_syscall_fn52(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn52() _uk_syscall_e_enosys()
#define uk_syscall1_fn52(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn52(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn52(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn52(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn52(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn52(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn52(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn52() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn52(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn52(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn52(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn52(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn52(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn52(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getpeername */

#ifdef HAVE_uk_syscall_socketpair
#define uk_syscall_fn53(...) \
	uk_syscall_e_socketpair(__VA_ARGS__)
#define uk_syscall0_fn53() \
	uk_syscall_e0_socketpair()
#define uk_syscall1_fn53(arg1) \
	uk_syscall_e1_socketpair(arg1)
#define uk_syscall2_fn53(arg1, arg2) \
	uk_syscall_e2_socketpair(arg1, arg2)
#define uk_syscall3_fn53(arg1, arg2, arg3) \
	uk_syscall_e3_socketpair(arg1, arg2, arg3)
#define uk_syscall4_fn53(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_socketpair(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn53(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_socketpair(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn53(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_socketpair(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn53(...) \
	uk_syscall_r_socketpair(__VA_ARGS__)
#define uk_syscall_r0_fn53() \
	uk_syscall_r0_socketpair()
#define uk_syscall_r1_fn53(arg1) \
	uk_syscall_r1_socketpair(arg1)
#define uk_syscall_r2_fn53(arg1, arg2) \
	uk_syscall_r2_socketpair(arg1, arg2)
#define uk_syscall_r3_fn53(arg1, arg2, arg3) \
	uk_syscall_r3_socketpair(arg1, arg2, arg3)
#define uk_syscall_r4_fn53(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_socketpair(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn53(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_socketpair(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn53(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_socketpair(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_socketpair */
#define uk_syscall_fn53(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn53() _uk_syscall_e_enosys()
#define uk_syscall1_fn53(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn53(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn53(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn53(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn53(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn53(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn53(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn53() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn53(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn53(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn53(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn53(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn53(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn53(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_socketpair */

#ifdef HAVE_uk_syscall_setsockopt
#define uk_syscall_fn54(...) \
	uk_syscall_e_setsockopt(__VA_ARGS__)
#define uk_syscall0_fn54() \
	uk_syscall_e0_setsockopt()
#define uk_syscall1_fn54(arg1) \
	uk_syscall_e1_setsockopt(arg1)
#define uk_syscall2_fn54(arg1, arg2) \
	uk_syscall_e2_setsockopt(arg1, arg2)
#define uk_syscall3_fn54(arg1, arg2, arg3) \
	uk_syscall_e3_setsockopt(arg1, arg2, arg3)
#define uk_syscall4_fn54(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setsockopt(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn54(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setsockopt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn54(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setsockopt(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn54(...) \
	uk_syscall_r_setsockopt(__VA_ARGS__)
#define uk_syscall_r0_fn54() \
	uk_syscall_r0_setsockopt()
#define uk_syscall_r1_fn54(arg1) \
	uk_syscall_r1_setsockopt(arg1)
#define uk_syscall_r2_fn54(arg1, arg2) \
	uk_syscall_r2_setsockopt(arg1, arg2)
#define uk_syscall_r3_fn54(arg1, arg2, arg3) \
	uk_syscall_r3_setsockopt(arg1, arg2, arg3)
#define uk_syscall_r4_fn54(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setsockopt(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn54(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setsockopt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn54(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setsockopt(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setsockopt */
#define uk_syscall_fn54(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn54() _uk_syscall_e_enosys()
#define uk_syscall1_fn54(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn54(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn54(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn54(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn54(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn54(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn54(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn54() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn54(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn54(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn54(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn54(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn54(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn54(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setsockopt */

#ifdef HAVE_uk_syscall_getsockopt
#define uk_syscall_fn55(...) \
	uk_syscall_e_getsockopt(__VA_ARGS__)
#define uk_syscall0_fn55() \
	uk_syscall_e0_getsockopt()
#define uk_syscall1_fn55(arg1) \
	uk_syscall_e1_getsockopt(arg1)
#define uk_syscall2_fn55(arg1, arg2) \
	uk_syscall_e2_getsockopt(arg1, arg2)
#define uk_syscall3_fn55(arg1, arg2, arg3) \
	uk_syscall_e3_getsockopt(arg1, arg2, arg3)
#define uk_syscall4_fn55(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getsockopt(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn55(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getsockopt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn55(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getsockopt(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn55(...) \
	uk_syscall_r_getsockopt(__VA_ARGS__)
#define uk_syscall_r0_fn55() \
	uk_syscall_r0_getsockopt()
#define uk_syscall_r1_fn55(arg1) \
	uk_syscall_r1_getsockopt(arg1)
#define uk_syscall_r2_fn55(arg1, arg2) \
	uk_syscall_r2_getsockopt(arg1, arg2)
#define uk_syscall_r3_fn55(arg1, arg2, arg3) \
	uk_syscall_r3_getsockopt(arg1, arg2, arg3)
#define uk_syscall_r4_fn55(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getsockopt(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn55(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getsockopt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn55(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getsockopt(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getsockopt */
#define uk_syscall_fn55(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn55() _uk_syscall_e_enosys()
#define uk_syscall1_fn55(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn55(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn55(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn55(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn55(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn55(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn55(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn55() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn55(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn55(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn55(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn55(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn55(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn55(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getsockopt */

#ifdef HAVE_uk_syscall_clone
#define uk_syscall_fn56(...) \
	uk_syscall_e_clone(__VA_ARGS__)
#define uk_syscall0_fn56() \
	uk_syscall_e0_clone()
#define uk_syscall1_fn56(arg1) \
	uk_syscall_e1_clone(arg1)
#define uk_syscall2_fn56(arg1, arg2) \
	uk_syscall_e2_clone(arg1, arg2)
#define uk_syscall3_fn56(arg1, arg2, arg3) \
	uk_syscall_e3_clone(arg1, arg2, arg3)
#define uk_syscall4_fn56(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_clone(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn56(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_clone(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn56(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_clone(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn56(...) \
	uk_syscall_r_clone(__VA_ARGS__)
#define uk_syscall_r0_fn56() \
	uk_syscall_r0_clone()
#define uk_syscall_r1_fn56(arg1) \
	uk_syscall_r1_clone(arg1)
#define uk_syscall_r2_fn56(arg1, arg2) \
	uk_syscall_r2_clone(arg1, arg2)
#define uk_syscall_r3_fn56(arg1, arg2, arg3) \
	uk_syscall_r3_clone(arg1, arg2, arg3)
#define uk_syscall_r4_fn56(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_clone(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn56(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_clone(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn56(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_clone(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_clone */
#define uk_syscall_fn56(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn56() _uk_syscall_e_enosys()
#define uk_syscall1_fn56(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn56(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn56(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn56(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn56(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn56(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn56(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn56() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn56(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn56(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn56(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn56(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn56(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn56(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_clone */

#ifdef HAVE_uk_syscall_fork
#define uk_syscall_fn57(...) \
	uk_syscall_e_fork(__VA_ARGS__)
#define uk_syscall0_fn57() \
	uk_syscall_e0_fork()
#define uk_syscall1_fn57(arg1) \
	uk_syscall_e1_fork(arg1)
#define uk_syscall2_fn57(arg1, arg2) \
	uk_syscall_e2_fork(arg1, arg2)
#define uk_syscall3_fn57(arg1, arg2, arg3) \
	uk_syscall_e3_fork(arg1, arg2, arg3)
#define uk_syscall4_fn57(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fork(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn57(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fork(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn57(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fork(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn57(...) \
	uk_syscall_r_fork(__VA_ARGS__)
#define uk_syscall_r0_fn57() \
	uk_syscall_r0_fork()
#define uk_syscall_r1_fn57(arg1) \
	uk_syscall_r1_fork(arg1)
#define uk_syscall_r2_fn57(arg1, arg2) \
	uk_syscall_r2_fork(arg1, arg2)
#define uk_syscall_r3_fn57(arg1, arg2, arg3) \
	uk_syscall_r3_fork(arg1, arg2, arg3)
#define uk_syscall_r4_fn57(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fork(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn57(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fork(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn57(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fork(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fork */
#define uk_syscall_fn57(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn57() _uk_syscall_e_enosys()
#define uk_syscall1_fn57(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn57(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn57(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn57(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn57(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn57(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn57(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn57() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn57(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn57(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn57(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn57(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn57(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn57(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fork */

#ifdef HAVE_uk_syscall_vfork
#define uk_syscall_fn58(...) \
	uk_syscall_e_vfork(__VA_ARGS__)
#define uk_syscall0_fn58() \
	uk_syscall_e0_vfork()
#define uk_syscall1_fn58(arg1) \
	uk_syscall_e1_vfork(arg1)
#define uk_syscall2_fn58(arg1, arg2) \
	uk_syscall_e2_vfork(arg1, arg2)
#define uk_syscall3_fn58(arg1, arg2, arg3) \
	uk_syscall_e3_vfork(arg1, arg2, arg3)
#define uk_syscall4_fn58(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_vfork(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn58(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_vfork(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn58(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_vfork(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn58(...) \
	uk_syscall_r_vfork(__VA_ARGS__)
#define uk_syscall_r0_fn58() \
	uk_syscall_r0_vfork()
#define uk_syscall_r1_fn58(arg1) \
	uk_syscall_r1_vfork(arg1)
#define uk_syscall_r2_fn58(arg1, arg2) \
	uk_syscall_r2_vfork(arg1, arg2)
#define uk_syscall_r3_fn58(arg1, arg2, arg3) \
	uk_syscall_r3_vfork(arg1, arg2, arg3)
#define uk_syscall_r4_fn58(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_vfork(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn58(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_vfork(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn58(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_vfork(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_vfork */
#define uk_syscall_fn58(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn58() _uk_syscall_e_enosys()
#define uk_syscall1_fn58(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn58(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn58(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn58(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn58(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn58(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn58(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn58() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn58(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn58(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn58(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn58(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn58(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn58(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_vfork */

#ifdef HAVE_uk_syscall_execve
#define uk_syscall_fn59(...) \
	uk_syscall_e_execve(__VA_ARGS__)
#define uk_syscall0_fn59() \
	uk_syscall_e0_execve()
#define uk_syscall1_fn59(arg1) \
	uk_syscall_e1_execve(arg1)
#define uk_syscall2_fn59(arg1, arg2) \
	uk_syscall_e2_execve(arg1, arg2)
#define uk_syscall3_fn59(arg1, arg2, arg3) \
	uk_syscall_e3_execve(arg1, arg2, arg3)
#define uk_syscall4_fn59(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_execve(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn59(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_execve(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn59(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_execve(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn59(...) \
	uk_syscall_r_execve(__VA_ARGS__)
#define uk_syscall_r0_fn59() \
	uk_syscall_r0_execve()
#define uk_syscall_r1_fn59(arg1) \
	uk_syscall_r1_execve(arg1)
#define uk_syscall_r2_fn59(arg1, arg2) \
	uk_syscall_r2_execve(arg1, arg2)
#define uk_syscall_r3_fn59(arg1, arg2, arg3) \
	uk_syscall_r3_execve(arg1, arg2, arg3)
#define uk_syscall_r4_fn59(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_execve(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn59(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_execve(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn59(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_execve(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_execve */
#define uk_syscall_fn59(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn59() _uk_syscall_e_enosys()
#define uk_syscall1_fn59(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn59(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn59(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn59(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn59(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn59(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn59(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn59() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn59(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn59(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn59(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn59(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn59(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn59(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_execve */

#ifdef HAVE_uk_syscall_exit
#define uk_syscall_fn60(...) \
	uk_syscall_e_exit(__VA_ARGS__)
#define uk_syscall0_fn60() \
	uk_syscall_e0_exit()
#define uk_syscall1_fn60(arg1) \
	uk_syscall_e1_exit(arg1)
#define uk_syscall2_fn60(arg1, arg2) \
	uk_syscall_e2_exit(arg1, arg2)
#define uk_syscall3_fn60(arg1, arg2, arg3) \
	uk_syscall_e3_exit(arg1, arg2, arg3)
#define uk_syscall4_fn60(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_exit(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn60(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_exit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn60(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_exit(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn60(...) \
	uk_syscall_r_exit(__VA_ARGS__)
#define uk_syscall_r0_fn60() \
	uk_syscall_r0_exit()
#define uk_syscall_r1_fn60(arg1) \
	uk_syscall_r1_exit(arg1)
#define uk_syscall_r2_fn60(arg1, arg2) \
	uk_syscall_r2_exit(arg1, arg2)
#define uk_syscall_r3_fn60(arg1, arg2, arg3) \
	uk_syscall_r3_exit(arg1, arg2, arg3)
#define uk_syscall_r4_fn60(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_exit(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn60(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_exit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn60(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_exit(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_exit */
#define uk_syscall_fn60(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn60() _uk_syscall_e_enosys()
#define uk_syscall1_fn60(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn60(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn60(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn60(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn60(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn60(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn60(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn60() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn60(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn60(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn60(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn60(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn60(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn60(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_exit */

#ifdef HAVE_uk_syscall_wait4
#define uk_syscall_fn61(...) \
	uk_syscall_e_wait4(__VA_ARGS__)
#define uk_syscall0_fn61() \
	uk_syscall_e0_wait4()
#define uk_syscall1_fn61(arg1) \
	uk_syscall_e1_wait4(arg1)
#define uk_syscall2_fn61(arg1, arg2) \
	uk_syscall_e2_wait4(arg1, arg2)
#define uk_syscall3_fn61(arg1, arg2, arg3) \
	uk_syscall_e3_wait4(arg1, arg2, arg3)
#define uk_syscall4_fn61(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_wait4(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn61(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_wait4(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn61(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_wait4(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn61(...) \
	uk_syscall_r_wait4(__VA_ARGS__)
#define uk_syscall_r0_fn61() \
	uk_syscall_r0_wait4()
#define uk_syscall_r1_fn61(arg1) \
	uk_syscall_r1_wait4(arg1)
#define uk_syscall_r2_fn61(arg1, arg2) \
	uk_syscall_r2_wait4(arg1, arg2)
#define uk_syscall_r3_fn61(arg1, arg2, arg3) \
	uk_syscall_r3_wait4(arg1, arg2, arg3)
#define uk_syscall_r4_fn61(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_wait4(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn61(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_wait4(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn61(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_wait4(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_wait4 */
#define uk_syscall_fn61(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn61() _uk_syscall_e_enosys()
#define uk_syscall1_fn61(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn61(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn61(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn61(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn61(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn61(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn61(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn61() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn61(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn61(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn61(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn61(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn61(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn61(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_wait4 */

#ifdef HAVE_uk_syscall_kill
#define uk_syscall_fn62(...) \
	uk_syscall_e_kill(__VA_ARGS__)
#define uk_syscall0_fn62() \
	uk_syscall_e0_kill()
#define uk_syscall1_fn62(arg1) \
	uk_syscall_e1_kill(arg1)
#define uk_syscall2_fn62(arg1, arg2) \
	uk_syscall_e2_kill(arg1, arg2)
#define uk_syscall3_fn62(arg1, arg2, arg3) \
	uk_syscall_e3_kill(arg1, arg2, arg3)
#define uk_syscall4_fn62(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_kill(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn62(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_kill(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn62(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_kill(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn62(...) \
	uk_syscall_r_kill(__VA_ARGS__)
#define uk_syscall_r0_fn62() \
	uk_syscall_r0_kill()
#define uk_syscall_r1_fn62(arg1) \
	uk_syscall_r1_kill(arg1)
#define uk_syscall_r2_fn62(arg1, arg2) \
	uk_syscall_r2_kill(arg1, arg2)
#define uk_syscall_r3_fn62(arg1, arg2, arg3) \
	uk_syscall_r3_kill(arg1, arg2, arg3)
#define uk_syscall_r4_fn62(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_kill(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn62(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_kill(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn62(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_kill(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_kill */
#define uk_syscall_fn62(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn62() _uk_syscall_e_enosys()
#define uk_syscall1_fn62(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn62(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn62(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn62(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn62(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn62(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn62(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn62() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn62(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn62(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn62(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn62(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn62(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn62(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_kill */

#ifdef HAVE_uk_syscall_uname
#define uk_syscall_fn63(...) \
	uk_syscall_e_uname(__VA_ARGS__)
#define uk_syscall0_fn63() \
	uk_syscall_e0_uname()
#define uk_syscall1_fn63(arg1) \
	uk_syscall_e1_uname(arg1)
#define uk_syscall2_fn63(arg1, arg2) \
	uk_syscall_e2_uname(arg1, arg2)
#define uk_syscall3_fn63(arg1, arg2, arg3) \
	uk_syscall_e3_uname(arg1, arg2, arg3)
#define uk_syscall4_fn63(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_uname(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn63(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_uname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn63(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_uname(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn63(...) \
	uk_syscall_r_uname(__VA_ARGS__)
#define uk_syscall_r0_fn63() \
	uk_syscall_r0_uname()
#define uk_syscall_r1_fn63(arg1) \
	uk_syscall_r1_uname(arg1)
#define uk_syscall_r2_fn63(arg1, arg2) \
	uk_syscall_r2_uname(arg1, arg2)
#define uk_syscall_r3_fn63(arg1, arg2, arg3) \
	uk_syscall_r3_uname(arg1, arg2, arg3)
#define uk_syscall_r4_fn63(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_uname(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn63(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_uname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn63(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_uname(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_uname */
#define uk_syscall_fn63(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn63() _uk_syscall_e_enosys()
#define uk_syscall1_fn63(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn63(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn63(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn63(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn63(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn63(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn63(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn63() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn63(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn63(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn63(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn63(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn63(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn63(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_uname */

#ifdef HAVE_uk_syscall_semget
#define uk_syscall_fn64(...) \
	uk_syscall_e_semget(__VA_ARGS__)
#define uk_syscall0_fn64() \
	uk_syscall_e0_semget()
#define uk_syscall1_fn64(arg1) \
	uk_syscall_e1_semget(arg1)
#define uk_syscall2_fn64(arg1, arg2) \
	uk_syscall_e2_semget(arg1, arg2)
#define uk_syscall3_fn64(arg1, arg2, arg3) \
	uk_syscall_e3_semget(arg1, arg2, arg3)
#define uk_syscall4_fn64(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_semget(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn64(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_semget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn64(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_semget(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn64(...) \
	uk_syscall_r_semget(__VA_ARGS__)
#define uk_syscall_r0_fn64() \
	uk_syscall_r0_semget()
#define uk_syscall_r1_fn64(arg1) \
	uk_syscall_r1_semget(arg1)
#define uk_syscall_r2_fn64(arg1, arg2) \
	uk_syscall_r2_semget(arg1, arg2)
#define uk_syscall_r3_fn64(arg1, arg2, arg3) \
	uk_syscall_r3_semget(arg1, arg2, arg3)
#define uk_syscall_r4_fn64(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_semget(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn64(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_semget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn64(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_semget(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_semget */
#define uk_syscall_fn64(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn64() _uk_syscall_e_enosys()
#define uk_syscall1_fn64(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn64(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn64(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn64(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn64(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn64(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn64(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn64() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn64(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn64(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn64(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn64(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn64(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn64(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_semget */

#ifdef HAVE_uk_syscall_semop
#define uk_syscall_fn65(...) \
	uk_syscall_e_semop(__VA_ARGS__)
#define uk_syscall0_fn65() \
	uk_syscall_e0_semop()
#define uk_syscall1_fn65(arg1) \
	uk_syscall_e1_semop(arg1)
#define uk_syscall2_fn65(arg1, arg2) \
	uk_syscall_e2_semop(arg1, arg2)
#define uk_syscall3_fn65(arg1, arg2, arg3) \
	uk_syscall_e3_semop(arg1, arg2, arg3)
#define uk_syscall4_fn65(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_semop(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn65(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_semop(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn65(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_semop(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn65(...) \
	uk_syscall_r_semop(__VA_ARGS__)
#define uk_syscall_r0_fn65() \
	uk_syscall_r0_semop()
#define uk_syscall_r1_fn65(arg1) \
	uk_syscall_r1_semop(arg1)
#define uk_syscall_r2_fn65(arg1, arg2) \
	uk_syscall_r2_semop(arg1, arg2)
#define uk_syscall_r3_fn65(arg1, arg2, arg3) \
	uk_syscall_r3_semop(arg1, arg2, arg3)
#define uk_syscall_r4_fn65(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_semop(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn65(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_semop(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn65(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_semop(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_semop */
#define uk_syscall_fn65(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn65() _uk_syscall_e_enosys()
#define uk_syscall1_fn65(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn65(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn65(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn65(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn65(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn65(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn65(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn65() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn65(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn65(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn65(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn65(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn65(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn65(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_semop */

#ifdef HAVE_uk_syscall_semctl
#define uk_syscall_fn66(...) \
	uk_syscall_e_semctl(__VA_ARGS__)
#define uk_syscall0_fn66() \
	uk_syscall_e0_semctl()
#define uk_syscall1_fn66(arg1) \
	uk_syscall_e1_semctl(arg1)
#define uk_syscall2_fn66(arg1, arg2) \
	uk_syscall_e2_semctl(arg1, arg2)
#define uk_syscall3_fn66(arg1, arg2, arg3) \
	uk_syscall_e3_semctl(arg1, arg2, arg3)
#define uk_syscall4_fn66(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_semctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn66(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_semctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn66(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_semctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn66(...) \
	uk_syscall_r_semctl(__VA_ARGS__)
#define uk_syscall_r0_fn66() \
	uk_syscall_r0_semctl()
#define uk_syscall_r1_fn66(arg1) \
	uk_syscall_r1_semctl(arg1)
#define uk_syscall_r2_fn66(arg1, arg2) \
	uk_syscall_r2_semctl(arg1, arg2)
#define uk_syscall_r3_fn66(arg1, arg2, arg3) \
	uk_syscall_r3_semctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn66(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_semctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn66(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_semctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn66(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_semctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_semctl */
#define uk_syscall_fn66(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn66() _uk_syscall_e_enosys()
#define uk_syscall1_fn66(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn66(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn66(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn66(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn66(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn66(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn66(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn66() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn66(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn66(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn66(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn66(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn66(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn66(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_semctl */

#ifdef HAVE_uk_syscall_shmdt
#define uk_syscall_fn67(...) \
	uk_syscall_e_shmdt(__VA_ARGS__)
#define uk_syscall0_fn67() \
	uk_syscall_e0_shmdt()
#define uk_syscall1_fn67(arg1) \
	uk_syscall_e1_shmdt(arg1)
#define uk_syscall2_fn67(arg1, arg2) \
	uk_syscall_e2_shmdt(arg1, arg2)
#define uk_syscall3_fn67(arg1, arg2, arg3) \
	uk_syscall_e3_shmdt(arg1, arg2, arg3)
#define uk_syscall4_fn67(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_shmdt(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn67(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_shmdt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn67(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_shmdt(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn67(...) \
	uk_syscall_r_shmdt(__VA_ARGS__)
#define uk_syscall_r0_fn67() \
	uk_syscall_r0_shmdt()
#define uk_syscall_r1_fn67(arg1) \
	uk_syscall_r1_shmdt(arg1)
#define uk_syscall_r2_fn67(arg1, arg2) \
	uk_syscall_r2_shmdt(arg1, arg2)
#define uk_syscall_r3_fn67(arg1, arg2, arg3) \
	uk_syscall_r3_shmdt(arg1, arg2, arg3)
#define uk_syscall_r4_fn67(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_shmdt(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn67(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_shmdt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn67(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_shmdt(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_shmdt */
#define uk_syscall_fn67(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn67() _uk_syscall_e_enosys()
#define uk_syscall1_fn67(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn67(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn67(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn67(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn67(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn67(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn67(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn67() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn67(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn67(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn67(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn67(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn67(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn67(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_shmdt */

#ifdef HAVE_uk_syscall_msgget
#define uk_syscall_fn68(...) \
	uk_syscall_e_msgget(__VA_ARGS__)
#define uk_syscall0_fn68() \
	uk_syscall_e0_msgget()
#define uk_syscall1_fn68(arg1) \
	uk_syscall_e1_msgget(arg1)
#define uk_syscall2_fn68(arg1, arg2) \
	uk_syscall_e2_msgget(arg1, arg2)
#define uk_syscall3_fn68(arg1, arg2, arg3) \
	uk_syscall_e3_msgget(arg1, arg2, arg3)
#define uk_syscall4_fn68(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_msgget(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn68(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_msgget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn68(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_msgget(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn68(...) \
	uk_syscall_r_msgget(__VA_ARGS__)
#define uk_syscall_r0_fn68() \
	uk_syscall_r0_msgget()
#define uk_syscall_r1_fn68(arg1) \
	uk_syscall_r1_msgget(arg1)
#define uk_syscall_r2_fn68(arg1, arg2) \
	uk_syscall_r2_msgget(arg1, arg2)
#define uk_syscall_r3_fn68(arg1, arg2, arg3) \
	uk_syscall_r3_msgget(arg1, arg2, arg3)
#define uk_syscall_r4_fn68(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_msgget(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn68(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_msgget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn68(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_msgget(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_msgget */
#define uk_syscall_fn68(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn68() _uk_syscall_e_enosys()
#define uk_syscall1_fn68(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn68(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn68(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn68(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn68(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn68(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn68(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn68() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn68(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn68(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn68(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn68(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn68(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn68(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_msgget */

#ifdef HAVE_uk_syscall_msgsnd
#define uk_syscall_fn69(...) \
	uk_syscall_e_msgsnd(__VA_ARGS__)
#define uk_syscall0_fn69() \
	uk_syscall_e0_msgsnd()
#define uk_syscall1_fn69(arg1) \
	uk_syscall_e1_msgsnd(arg1)
#define uk_syscall2_fn69(arg1, arg2) \
	uk_syscall_e2_msgsnd(arg1, arg2)
#define uk_syscall3_fn69(arg1, arg2, arg3) \
	uk_syscall_e3_msgsnd(arg1, arg2, arg3)
#define uk_syscall4_fn69(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_msgsnd(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn69(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_msgsnd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn69(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_msgsnd(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn69(...) \
	uk_syscall_r_msgsnd(__VA_ARGS__)
#define uk_syscall_r0_fn69() \
	uk_syscall_r0_msgsnd()
#define uk_syscall_r1_fn69(arg1) \
	uk_syscall_r1_msgsnd(arg1)
#define uk_syscall_r2_fn69(arg1, arg2) \
	uk_syscall_r2_msgsnd(arg1, arg2)
#define uk_syscall_r3_fn69(arg1, arg2, arg3) \
	uk_syscall_r3_msgsnd(arg1, arg2, arg3)
#define uk_syscall_r4_fn69(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_msgsnd(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn69(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_msgsnd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn69(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_msgsnd(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_msgsnd */
#define uk_syscall_fn69(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn69() _uk_syscall_e_enosys()
#define uk_syscall1_fn69(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn69(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn69(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn69(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn69(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn69(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn69(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn69() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn69(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn69(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn69(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn69(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn69(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn69(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_msgsnd */

#ifdef HAVE_uk_syscall_msgrcv
#define uk_syscall_fn70(...) \
	uk_syscall_e_msgrcv(__VA_ARGS__)
#define uk_syscall0_fn70() \
	uk_syscall_e0_msgrcv()
#define uk_syscall1_fn70(arg1) \
	uk_syscall_e1_msgrcv(arg1)
#define uk_syscall2_fn70(arg1, arg2) \
	uk_syscall_e2_msgrcv(arg1, arg2)
#define uk_syscall3_fn70(arg1, arg2, arg3) \
	uk_syscall_e3_msgrcv(arg1, arg2, arg3)
#define uk_syscall4_fn70(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_msgrcv(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn70(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_msgrcv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn70(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_msgrcv(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn70(...) \
	uk_syscall_r_msgrcv(__VA_ARGS__)
#define uk_syscall_r0_fn70() \
	uk_syscall_r0_msgrcv()
#define uk_syscall_r1_fn70(arg1) \
	uk_syscall_r1_msgrcv(arg1)
#define uk_syscall_r2_fn70(arg1, arg2) \
	uk_syscall_r2_msgrcv(arg1, arg2)
#define uk_syscall_r3_fn70(arg1, arg2, arg3) \
	uk_syscall_r3_msgrcv(arg1, arg2, arg3)
#define uk_syscall_r4_fn70(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_msgrcv(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn70(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_msgrcv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn70(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_msgrcv(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_msgrcv */
#define uk_syscall_fn70(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn70() _uk_syscall_e_enosys()
#define uk_syscall1_fn70(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn70(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn70(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn70(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn70(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn70(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn70(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn70() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn70(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn70(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn70(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn70(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn70(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn70(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_msgrcv */

#ifdef HAVE_uk_syscall_msgctl
#define uk_syscall_fn71(...) \
	uk_syscall_e_msgctl(__VA_ARGS__)
#define uk_syscall0_fn71() \
	uk_syscall_e0_msgctl()
#define uk_syscall1_fn71(arg1) \
	uk_syscall_e1_msgctl(arg1)
#define uk_syscall2_fn71(arg1, arg2) \
	uk_syscall_e2_msgctl(arg1, arg2)
#define uk_syscall3_fn71(arg1, arg2, arg3) \
	uk_syscall_e3_msgctl(arg1, arg2, arg3)
#define uk_syscall4_fn71(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_msgctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn71(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_msgctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn71(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_msgctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn71(...) \
	uk_syscall_r_msgctl(__VA_ARGS__)
#define uk_syscall_r0_fn71() \
	uk_syscall_r0_msgctl()
#define uk_syscall_r1_fn71(arg1) \
	uk_syscall_r1_msgctl(arg1)
#define uk_syscall_r2_fn71(arg1, arg2) \
	uk_syscall_r2_msgctl(arg1, arg2)
#define uk_syscall_r3_fn71(arg1, arg2, arg3) \
	uk_syscall_r3_msgctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn71(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_msgctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn71(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_msgctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn71(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_msgctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_msgctl */
#define uk_syscall_fn71(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn71() _uk_syscall_e_enosys()
#define uk_syscall1_fn71(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn71(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn71(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn71(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn71(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn71(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn71(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn71() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn71(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn71(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn71(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn71(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn71(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn71(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_msgctl */

#ifdef HAVE_uk_syscall_fcntl
#define uk_syscall_fn72(...) \
	uk_syscall_e_fcntl(__VA_ARGS__)
#define uk_syscall0_fn72() \
	uk_syscall_e0_fcntl()
#define uk_syscall1_fn72(arg1) \
	uk_syscall_e1_fcntl(arg1)
#define uk_syscall2_fn72(arg1, arg2) \
	uk_syscall_e2_fcntl(arg1, arg2)
#define uk_syscall3_fn72(arg1, arg2, arg3) \
	uk_syscall_e3_fcntl(arg1, arg2, arg3)
#define uk_syscall4_fn72(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fcntl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn72(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fcntl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn72(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fcntl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn72(...) \
	uk_syscall_r_fcntl(__VA_ARGS__)
#define uk_syscall_r0_fn72() \
	uk_syscall_r0_fcntl()
#define uk_syscall_r1_fn72(arg1) \
	uk_syscall_r1_fcntl(arg1)
#define uk_syscall_r2_fn72(arg1, arg2) \
	uk_syscall_r2_fcntl(arg1, arg2)
#define uk_syscall_r3_fn72(arg1, arg2, arg3) \
	uk_syscall_r3_fcntl(arg1, arg2, arg3)
#define uk_syscall_r4_fn72(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fcntl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn72(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fcntl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn72(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fcntl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fcntl */
#define uk_syscall_fn72(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn72() _uk_syscall_e_enosys()
#define uk_syscall1_fn72(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn72(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn72(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn72(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn72(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn72(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn72(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn72() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn72(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn72(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn72(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn72(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn72(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn72(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fcntl */

#ifdef HAVE_uk_syscall_flock
#define uk_syscall_fn73(...) \
	uk_syscall_e_flock(__VA_ARGS__)
#define uk_syscall0_fn73() \
	uk_syscall_e0_flock()
#define uk_syscall1_fn73(arg1) \
	uk_syscall_e1_flock(arg1)
#define uk_syscall2_fn73(arg1, arg2) \
	uk_syscall_e2_flock(arg1, arg2)
#define uk_syscall3_fn73(arg1, arg2, arg3) \
	uk_syscall_e3_flock(arg1, arg2, arg3)
#define uk_syscall4_fn73(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_flock(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn73(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_flock(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn73(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_flock(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn73(...) \
	uk_syscall_r_flock(__VA_ARGS__)
#define uk_syscall_r0_fn73() \
	uk_syscall_r0_flock()
#define uk_syscall_r1_fn73(arg1) \
	uk_syscall_r1_flock(arg1)
#define uk_syscall_r2_fn73(arg1, arg2) \
	uk_syscall_r2_flock(arg1, arg2)
#define uk_syscall_r3_fn73(arg1, arg2, arg3) \
	uk_syscall_r3_flock(arg1, arg2, arg3)
#define uk_syscall_r4_fn73(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_flock(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn73(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_flock(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn73(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_flock(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_flock */
#define uk_syscall_fn73(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn73() _uk_syscall_e_enosys()
#define uk_syscall1_fn73(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn73(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn73(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn73(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn73(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn73(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn73(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn73() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn73(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn73(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn73(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn73(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn73(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn73(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_flock */

#ifdef HAVE_uk_syscall_fsync
#define uk_syscall_fn74(...) \
	uk_syscall_e_fsync(__VA_ARGS__)
#define uk_syscall0_fn74() \
	uk_syscall_e0_fsync()
#define uk_syscall1_fn74(arg1) \
	uk_syscall_e1_fsync(arg1)
#define uk_syscall2_fn74(arg1, arg2) \
	uk_syscall_e2_fsync(arg1, arg2)
#define uk_syscall3_fn74(arg1, arg2, arg3) \
	uk_syscall_e3_fsync(arg1, arg2, arg3)
#define uk_syscall4_fn74(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fsync(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn74(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fsync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn74(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fsync(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn74(...) \
	uk_syscall_r_fsync(__VA_ARGS__)
#define uk_syscall_r0_fn74() \
	uk_syscall_r0_fsync()
#define uk_syscall_r1_fn74(arg1) \
	uk_syscall_r1_fsync(arg1)
#define uk_syscall_r2_fn74(arg1, arg2) \
	uk_syscall_r2_fsync(arg1, arg2)
#define uk_syscall_r3_fn74(arg1, arg2, arg3) \
	uk_syscall_r3_fsync(arg1, arg2, arg3)
#define uk_syscall_r4_fn74(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fsync(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn74(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fsync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn74(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fsync(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fsync */
#define uk_syscall_fn74(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn74() _uk_syscall_e_enosys()
#define uk_syscall1_fn74(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn74(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn74(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn74(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn74(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn74(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn74(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn74() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn74(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn74(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn74(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn74(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn74(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn74(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fsync */

#ifdef HAVE_uk_syscall_fdatasync
#define uk_syscall_fn75(...) \
	uk_syscall_e_fdatasync(__VA_ARGS__)
#define uk_syscall0_fn75() \
	uk_syscall_e0_fdatasync()
#define uk_syscall1_fn75(arg1) \
	uk_syscall_e1_fdatasync(arg1)
#define uk_syscall2_fn75(arg1, arg2) \
	uk_syscall_e2_fdatasync(arg1, arg2)
#define uk_syscall3_fn75(arg1, arg2, arg3) \
	uk_syscall_e3_fdatasync(arg1, arg2, arg3)
#define uk_syscall4_fn75(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fdatasync(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn75(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fdatasync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn75(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fdatasync(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn75(...) \
	uk_syscall_r_fdatasync(__VA_ARGS__)
#define uk_syscall_r0_fn75() \
	uk_syscall_r0_fdatasync()
#define uk_syscall_r1_fn75(arg1) \
	uk_syscall_r1_fdatasync(arg1)
#define uk_syscall_r2_fn75(arg1, arg2) \
	uk_syscall_r2_fdatasync(arg1, arg2)
#define uk_syscall_r3_fn75(arg1, arg2, arg3) \
	uk_syscall_r3_fdatasync(arg1, arg2, arg3)
#define uk_syscall_r4_fn75(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fdatasync(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn75(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fdatasync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn75(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fdatasync(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fdatasync */
#define uk_syscall_fn75(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn75() _uk_syscall_e_enosys()
#define uk_syscall1_fn75(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn75(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn75(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn75(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn75(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn75(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn75(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn75() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn75(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn75(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn75(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn75(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn75(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn75(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fdatasync */

#ifdef HAVE_uk_syscall_truncate
#define uk_syscall_fn76(...) \
	uk_syscall_e_truncate(__VA_ARGS__)
#define uk_syscall0_fn76() \
	uk_syscall_e0_truncate()
#define uk_syscall1_fn76(arg1) \
	uk_syscall_e1_truncate(arg1)
#define uk_syscall2_fn76(arg1, arg2) \
	uk_syscall_e2_truncate(arg1, arg2)
#define uk_syscall3_fn76(arg1, arg2, arg3) \
	uk_syscall_e3_truncate(arg1, arg2, arg3)
#define uk_syscall4_fn76(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_truncate(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn76(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_truncate(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn76(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_truncate(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn76(...) \
	uk_syscall_r_truncate(__VA_ARGS__)
#define uk_syscall_r0_fn76() \
	uk_syscall_r0_truncate()
#define uk_syscall_r1_fn76(arg1) \
	uk_syscall_r1_truncate(arg1)
#define uk_syscall_r2_fn76(arg1, arg2) \
	uk_syscall_r2_truncate(arg1, arg2)
#define uk_syscall_r3_fn76(arg1, arg2, arg3) \
	uk_syscall_r3_truncate(arg1, arg2, arg3)
#define uk_syscall_r4_fn76(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_truncate(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn76(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_truncate(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn76(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_truncate(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_truncate */
#define uk_syscall_fn76(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn76() _uk_syscall_e_enosys()
#define uk_syscall1_fn76(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn76(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn76(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn76(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn76(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn76(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn76(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn76() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn76(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn76(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn76(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn76(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn76(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn76(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_truncate */

#ifdef HAVE_uk_syscall_ftruncate
#define uk_syscall_fn77(...) \
	uk_syscall_e_ftruncate(__VA_ARGS__)
#define uk_syscall0_fn77() \
	uk_syscall_e0_ftruncate()
#define uk_syscall1_fn77(arg1) \
	uk_syscall_e1_ftruncate(arg1)
#define uk_syscall2_fn77(arg1, arg2) \
	uk_syscall_e2_ftruncate(arg1, arg2)
#define uk_syscall3_fn77(arg1, arg2, arg3) \
	uk_syscall_e3_ftruncate(arg1, arg2, arg3)
#define uk_syscall4_fn77(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ftruncate(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn77(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ftruncate(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn77(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ftruncate(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn77(...) \
	uk_syscall_r_ftruncate(__VA_ARGS__)
#define uk_syscall_r0_fn77() \
	uk_syscall_r0_ftruncate()
#define uk_syscall_r1_fn77(arg1) \
	uk_syscall_r1_ftruncate(arg1)
#define uk_syscall_r2_fn77(arg1, arg2) \
	uk_syscall_r2_ftruncate(arg1, arg2)
#define uk_syscall_r3_fn77(arg1, arg2, arg3) \
	uk_syscall_r3_ftruncate(arg1, arg2, arg3)
#define uk_syscall_r4_fn77(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ftruncate(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn77(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ftruncate(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn77(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ftruncate(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ftruncate */
#define uk_syscall_fn77(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn77() _uk_syscall_e_enosys()
#define uk_syscall1_fn77(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn77(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn77(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn77(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn77(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn77(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn77(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn77() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn77(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn77(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn77(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn77(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn77(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn77(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ftruncate */

#ifdef HAVE_uk_syscall_getdents
#define uk_syscall_fn78(...) \
	uk_syscall_e_getdents(__VA_ARGS__)
#define uk_syscall0_fn78() \
	uk_syscall_e0_getdents()
#define uk_syscall1_fn78(arg1) \
	uk_syscall_e1_getdents(arg1)
#define uk_syscall2_fn78(arg1, arg2) \
	uk_syscall_e2_getdents(arg1, arg2)
#define uk_syscall3_fn78(arg1, arg2, arg3) \
	uk_syscall_e3_getdents(arg1, arg2, arg3)
#define uk_syscall4_fn78(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getdents(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn78(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getdents(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn78(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getdents(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn78(...) \
	uk_syscall_r_getdents(__VA_ARGS__)
#define uk_syscall_r0_fn78() \
	uk_syscall_r0_getdents()
#define uk_syscall_r1_fn78(arg1) \
	uk_syscall_r1_getdents(arg1)
#define uk_syscall_r2_fn78(arg1, arg2) \
	uk_syscall_r2_getdents(arg1, arg2)
#define uk_syscall_r3_fn78(arg1, arg2, arg3) \
	uk_syscall_r3_getdents(arg1, arg2, arg3)
#define uk_syscall_r4_fn78(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getdents(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn78(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getdents(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn78(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getdents(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getdents */
#define uk_syscall_fn78(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn78() _uk_syscall_e_enosys()
#define uk_syscall1_fn78(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn78(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn78(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn78(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn78(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn78(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn78(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn78() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn78(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn78(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn78(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn78(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn78(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn78(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getdents */

#ifdef HAVE_uk_syscall_getcwd
#define uk_syscall_fn79(...) \
	uk_syscall_e_getcwd(__VA_ARGS__)
#define uk_syscall0_fn79() \
	uk_syscall_e0_getcwd()
#define uk_syscall1_fn79(arg1) \
	uk_syscall_e1_getcwd(arg1)
#define uk_syscall2_fn79(arg1, arg2) \
	uk_syscall_e2_getcwd(arg1, arg2)
#define uk_syscall3_fn79(arg1, arg2, arg3) \
	uk_syscall_e3_getcwd(arg1, arg2, arg3)
#define uk_syscall4_fn79(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getcwd(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn79(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getcwd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn79(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getcwd(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn79(...) \
	uk_syscall_r_getcwd(__VA_ARGS__)
#define uk_syscall_r0_fn79() \
	uk_syscall_r0_getcwd()
#define uk_syscall_r1_fn79(arg1) \
	uk_syscall_r1_getcwd(arg1)
#define uk_syscall_r2_fn79(arg1, arg2) \
	uk_syscall_r2_getcwd(arg1, arg2)
#define uk_syscall_r3_fn79(arg1, arg2, arg3) \
	uk_syscall_r3_getcwd(arg1, arg2, arg3)
#define uk_syscall_r4_fn79(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getcwd(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn79(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getcwd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn79(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getcwd(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getcwd */
#define uk_syscall_fn79(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn79() _uk_syscall_e_enosys()
#define uk_syscall1_fn79(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn79(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn79(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn79(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn79(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn79(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn79(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn79() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn79(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn79(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn79(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn79(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn79(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn79(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getcwd */

#ifdef HAVE_uk_syscall_chdir
#define uk_syscall_fn80(...) \
	uk_syscall_e_chdir(__VA_ARGS__)
#define uk_syscall0_fn80() \
	uk_syscall_e0_chdir()
#define uk_syscall1_fn80(arg1) \
	uk_syscall_e1_chdir(arg1)
#define uk_syscall2_fn80(arg1, arg2) \
	uk_syscall_e2_chdir(arg1, arg2)
#define uk_syscall3_fn80(arg1, arg2, arg3) \
	uk_syscall_e3_chdir(arg1, arg2, arg3)
#define uk_syscall4_fn80(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_chdir(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn80(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_chdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn80(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_chdir(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn80(...) \
	uk_syscall_r_chdir(__VA_ARGS__)
#define uk_syscall_r0_fn80() \
	uk_syscall_r0_chdir()
#define uk_syscall_r1_fn80(arg1) \
	uk_syscall_r1_chdir(arg1)
#define uk_syscall_r2_fn80(arg1, arg2) \
	uk_syscall_r2_chdir(arg1, arg2)
#define uk_syscall_r3_fn80(arg1, arg2, arg3) \
	uk_syscall_r3_chdir(arg1, arg2, arg3)
#define uk_syscall_r4_fn80(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_chdir(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn80(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_chdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn80(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_chdir(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_chdir */
#define uk_syscall_fn80(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn80() _uk_syscall_e_enosys()
#define uk_syscall1_fn80(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn80(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn80(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn80(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn80(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn80(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn80(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn80() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn80(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn80(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn80(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn80(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn80(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn80(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_chdir */

#ifdef HAVE_uk_syscall_fchdir
#define uk_syscall_fn81(...) \
	uk_syscall_e_fchdir(__VA_ARGS__)
#define uk_syscall0_fn81() \
	uk_syscall_e0_fchdir()
#define uk_syscall1_fn81(arg1) \
	uk_syscall_e1_fchdir(arg1)
#define uk_syscall2_fn81(arg1, arg2) \
	uk_syscall_e2_fchdir(arg1, arg2)
#define uk_syscall3_fn81(arg1, arg2, arg3) \
	uk_syscall_e3_fchdir(arg1, arg2, arg3)
#define uk_syscall4_fn81(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fchdir(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn81(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fchdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn81(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fchdir(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn81(...) \
	uk_syscall_r_fchdir(__VA_ARGS__)
#define uk_syscall_r0_fn81() \
	uk_syscall_r0_fchdir()
#define uk_syscall_r1_fn81(arg1) \
	uk_syscall_r1_fchdir(arg1)
#define uk_syscall_r2_fn81(arg1, arg2) \
	uk_syscall_r2_fchdir(arg1, arg2)
#define uk_syscall_r3_fn81(arg1, arg2, arg3) \
	uk_syscall_r3_fchdir(arg1, arg2, arg3)
#define uk_syscall_r4_fn81(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fchdir(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn81(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fchdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn81(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fchdir(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fchdir */
#define uk_syscall_fn81(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn81() _uk_syscall_e_enosys()
#define uk_syscall1_fn81(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn81(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn81(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn81(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn81(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn81(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn81(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn81() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn81(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn81(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn81(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn81(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn81(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn81(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fchdir */

#ifdef HAVE_uk_syscall_rename
#define uk_syscall_fn82(...) \
	uk_syscall_e_rename(__VA_ARGS__)
#define uk_syscall0_fn82() \
	uk_syscall_e0_rename()
#define uk_syscall1_fn82(arg1) \
	uk_syscall_e1_rename(arg1)
#define uk_syscall2_fn82(arg1, arg2) \
	uk_syscall_e2_rename(arg1, arg2)
#define uk_syscall3_fn82(arg1, arg2, arg3) \
	uk_syscall_e3_rename(arg1, arg2, arg3)
#define uk_syscall4_fn82(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rename(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn82(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rename(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn82(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rename(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn82(...) \
	uk_syscall_r_rename(__VA_ARGS__)
#define uk_syscall_r0_fn82() \
	uk_syscall_r0_rename()
#define uk_syscall_r1_fn82(arg1) \
	uk_syscall_r1_rename(arg1)
#define uk_syscall_r2_fn82(arg1, arg2) \
	uk_syscall_r2_rename(arg1, arg2)
#define uk_syscall_r3_fn82(arg1, arg2, arg3) \
	uk_syscall_r3_rename(arg1, arg2, arg3)
#define uk_syscall_r4_fn82(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rename(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn82(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rename(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn82(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rename(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rename */
#define uk_syscall_fn82(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn82() _uk_syscall_e_enosys()
#define uk_syscall1_fn82(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn82(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn82(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn82(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn82(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn82(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn82(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn82() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn82(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn82(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn82(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn82(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn82(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn82(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rename */

#ifdef HAVE_uk_syscall_mkdir
#define uk_syscall_fn83(...) \
	uk_syscall_e_mkdir(__VA_ARGS__)
#define uk_syscall0_fn83() \
	uk_syscall_e0_mkdir()
#define uk_syscall1_fn83(arg1) \
	uk_syscall_e1_mkdir(arg1)
#define uk_syscall2_fn83(arg1, arg2) \
	uk_syscall_e2_mkdir(arg1, arg2)
#define uk_syscall3_fn83(arg1, arg2, arg3) \
	uk_syscall_e3_mkdir(arg1, arg2, arg3)
#define uk_syscall4_fn83(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mkdir(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn83(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mkdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn83(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mkdir(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn83(...) \
	uk_syscall_r_mkdir(__VA_ARGS__)
#define uk_syscall_r0_fn83() \
	uk_syscall_r0_mkdir()
#define uk_syscall_r1_fn83(arg1) \
	uk_syscall_r1_mkdir(arg1)
#define uk_syscall_r2_fn83(arg1, arg2) \
	uk_syscall_r2_mkdir(arg1, arg2)
#define uk_syscall_r3_fn83(arg1, arg2, arg3) \
	uk_syscall_r3_mkdir(arg1, arg2, arg3)
#define uk_syscall_r4_fn83(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mkdir(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn83(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mkdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn83(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mkdir(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mkdir */
#define uk_syscall_fn83(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn83() _uk_syscall_e_enosys()
#define uk_syscall1_fn83(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn83(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn83(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn83(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn83(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn83(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn83(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn83() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn83(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn83(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn83(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn83(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn83(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn83(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mkdir */

#ifdef HAVE_uk_syscall_rmdir
#define uk_syscall_fn84(...) \
	uk_syscall_e_rmdir(__VA_ARGS__)
#define uk_syscall0_fn84() \
	uk_syscall_e0_rmdir()
#define uk_syscall1_fn84(arg1) \
	uk_syscall_e1_rmdir(arg1)
#define uk_syscall2_fn84(arg1, arg2) \
	uk_syscall_e2_rmdir(arg1, arg2)
#define uk_syscall3_fn84(arg1, arg2, arg3) \
	uk_syscall_e3_rmdir(arg1, arg2, arg3)
#define uk_syscall4_fn84(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rmdir(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn84(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rmdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn84(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rmdir(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn84(...) \
	uk_syscall_r_rmdir(__VA_ARGS__)
#define uk_syscall_r0_fn84() \
	uk_syscall_r0_rmdir()
#define uk_syscall_r1_fn84(arg1) \
	uk_syscall_r1_rmdir(arg1)
#define uk_syscall_r2_fn84(arg1, arg2) \
	uk_syscall_r2_rmdir(arg1, arg2)
#define uk_syscall_r3_fn84(arg1, arg2, arg3) \
	uk_syscall_r3_rmdir(arg1, arg2, arg3)
#define uk_syscall_r4_fn84(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rmdir(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn84(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rmdir(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn84(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rmdir(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rmdir */
#define uk_syscall_fn84(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn84() _uk_syscall_e_enosys()
#define uk_syscall1_fn84(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn84(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn84(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn84(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn84(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn84(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn84(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn84() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn84(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn84(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn84(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn84(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn84(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn84(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rmdir */

#ifdef HAVE_uk_syscall_creat
#define uk_syscall_fn85(...) \
	uk_syscall_e_creat(__VA_ARGS__)
#define uk_syscall0_fn85() \
	uk_syscall_e0_creat()
#define uk_syscall1_fn85(arg1) \
	uk_syscall_e1_creat(arg1)
#define uk_syscall2_fn85(arg1, arg2) \
	uk_syscall_e2_creat(arg1, arg2)
#define uk_syscall3_fn85(arg1, arg2, arg3) \
	uk_syscall_e3_creat(arg1, arg2, arg3)
#define uk_syscall4_fn85(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_creat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn85(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_creat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn85(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_creat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn85(...) \
	uk_syscall_r_creat(__VA_ARGS__)
#define uk_syscall_r0_fn85() \
	uk_syscall_r0_creat()
#define uk_syscall_r1_fn85(arg1) \
	uk_syscall_r1_creat(arg1)
#define uk_syscall_r2_fn85(arg1, arg2) \
	uk_syscall_r2_creat(arg1, arg2)
#define uk_syscall_r3_fn85(arg1, arg2, arg3) \
	uk_syscall_r3_creat(arg1, arg2, arg3)
#define uk_syscall_r4_fn85(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_creat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn85(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_creat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn85(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_creat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_creat */
#define uk_syscall_fn85(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn85() _uk_syscall_e_enosys()
#define uk_syscall1_fn85(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn85(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn85(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn85(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn85(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn85(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn85(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn85() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn85(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn85(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn85(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn85(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn85(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn85(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_creat */

#ifdef HAVE_uk_syscall_link
#define uk_syscall_fn86(...) \
	uk_syscall_e_link(__VA_ARGS__)
#define uk_syscall0_fn86() \
	uk_syscall_e0_link()
#define uk_syscall1_fn86(arg1) \
	uk_syscall_e1_link(arg1)
#define uk_syscall2_fn86(arg1, arg2) \
	uk_syscall_e2_link(arg1, arg2)
#define uk_syscall3_fn86(arg1, arg2, arg3) \
	uk_syscall_e3_link(arg1, arg2, arg3)
#define uk_syscall4_fn86(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_link(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn86(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_link(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn86(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_link(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn86(...) \
	uk_syscall_r_link(__VA_ARGS__)
#define uk_syscall_r0_fn86() \
	uk_syscall_r0_link()
#define uk_syscall_r1_fn86(arg1) \
	uk_syscall_r1_link(arg1)
#define uk_syscall_r2_fn86(arg1, arg2) \
	uk_syscall_r2_link(arg1, arg2)
#define uk_syscall_r3_fn86(arg1, arg2, arg3) \
	uk_syscall_r3_link(arg1, arg2, arg3)
#define uk_syscall_r4_fn86(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_link(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn86(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_link(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn86(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_link(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_link */
#define uk_syscall_fn86(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn86() _uk_syscall_e_enosys()
#define uk_syscall1_fn86(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn86(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn86(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn86(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn86(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn86(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn86(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn86() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn86(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn86(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn86(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn86(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn86(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn86(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_link */

#ifdef HAVE_uk_syscall_unlink
#define uk_syscall_fn87(...) \
	uk_syscall_e_unlink(__VA_ARGS__)
#define uk_syscall0_fn87() \
	uk_syscall_e0_unlink()
#define uk_syscall1_fn87(arg1) \
	uk_syscall_e1_unlink(arg1)
#define uk_syscall2_fn87(arg1, arg2) \
	uk_syscall_e2_unlink(arg1, arg2)
#define uk_syscall3_fn87(arg1, arg2, arg3) \
	uk_syscall_e3_unlink(arg1, arg2, arg3)
#define uk_syscall4_fn87(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_unlink(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn87(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_unlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn87(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_unlink(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn87(...) \
	uk_syscall_r_unlink(__VA_ARGS__)
#define uk_syscall_r0_fn87() \
	uk_syscall_r0_unlink()
#define uk_syscall_r1_fn87(arg1) \
	uk_syscall_r1_unlink(arg1)
#define uk_syscall_r2_fn87(arg1, arg2) \
	uk_syscall_r2_unlink(arg1, arg2)
#define uk_syscall_r3_fn87(arg1, arg2, arg3) \
	uk_syscall_r3_unlink(arg1, arg2, arg3)
#define uk_syscall_r4_fn87(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_unlink(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn87(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_unlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn87(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_unlink(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_unlink */
#define uk_syscall_fn87(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn87() _uk_syscall_e_enosys()
#define uk_syscall1_fn87(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn87(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn87(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn87(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn87(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn87(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn87(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn87() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn87(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn87(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn87(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn87(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn87(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn87(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_unlink */

#ifdef HAVE_uk_syscall_symlink
#define uk_syscall_fn88(...) \
	uk_syscall_e_symlink(__VA_ARGS__)
#define uk_syscall0_fn88() \
	uk_syscall_e0_symlink()
#define uk_syscall1_fn88(arg1) \
	uk_syscall_e1_symlink(arg1)
#define uk_syscall2_fn88(arg1, arg2) \
	uk_syscall_e2_symlink(arg1, arg2)
#define uk_syscall3_fn88(arg1, arg2, arg3) \
	uk_syscall_e3_symlink(arg1, arg2, arg3)
#define uk_syscall4_fn88(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_symlink(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn88(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_symlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn88(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_symlink(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn88(...) \
	uk_syscall_r_symlink(__VA_ARGS__)
#define uk_syscall_r0_fn88() \
	uk_syscall_r0_symlink()
#define uk_syscall_r1_fn88(arg1) \
	uk_syscall_r1_symlink(arg1)
#define uk_syscall_r2_fn88(arg1, arg2) \
	uk_syscall_r2_symlink(arg1, arg2)
#define uk_syscall_r3_fn88(arg1, arg2, arg3) \
	uk_syscall_r3_symlink(arg1, arg2, arg3)
#define uk_syscall_r4_fn88(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_symlink(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn88(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_symlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn88(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_symlink(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_symlink */
#define uk_syscall_fn88(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn88() _uk_syscall_e_enosys()
#define uk_syscall1_fn88(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn88(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn88(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn88(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn88(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn88(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn88(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn88() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn88(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn88(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn88(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn88(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn88(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn88(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_symlink */

#ifdef HAVE_uk_syscall_readlink
#define uk_syscall_fn89(...) \
	uk_syscall_e_readlink(__VA_ARGS__)
#define uk_syscall0_fn89() \
	uk_syscall_e0_readlink()
#define uk_syscall1_fn89(arg1) \
	uk_syscall_e1_readlink(arg1)
#define uk_syscall2_fn89(arg1, arg2) \
	uk_syscall_e2_readlink(arg1, arg2)
#define uk_syscall3_fn89(arg1, arg2, arg3) \
	uk_syscall_e3_readlink(arg1, arg2, arg3)
#define uk_syscall4_fn89(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_readlink(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn89(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_readlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn89(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_readlink(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn89(...) \
	uk_syscall_r_readlink(__VA_ARGS__)
#define uk_syscall_r0_fn89() \
	uk_syscall_r0_readlink()
#define uk_syscall_r1_fn89(arg1) \
	uk_syscall_r1_readlink(arg1)
#define uk_syscall_r2_fn89(arg1, arg2) \
	uk_syscall_r2_readlink(arg1, arg2)
#define uk_syscall_r3_fn89(arg1, arg2, arg3) \
	uk_syscall_r3_readlink(arg1, arg2, arg3)
#define uk_syscall_r4_fn89(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_readlink(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn89(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_readlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn89(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_readlink(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_readlink */
#define uk_syscall_fn89(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn89() _uk_syscall_e_enosys()
#define uk_syscall1_fn89(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn89(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn89(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn89(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn89(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn89(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn89(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn89() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn89(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn89(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn89(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn89(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn89(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn89(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_readlink */

#ifdef HAVE_uk_syscall_chmod
#define uk_syscall_fn90(...) \
	uk_syscall_e_chmod(__VA_ARGS__)
#define uk_syscall0_fn90() \
	uk_syscall_e0_chmod()
#define uk_syscall1_fn90(arg1) \
	uk_syscall_e1_chmod(arg1)
#define uk_syscall2_fn90(arg1, arg2) \
	uk_syscall_e2_chmod(arg1, arg2)
#define uk_syscall3_fn90(arg1, arg2, arg3) \
	uk_syscall_e3_chmod(arg1, arg2, arg3)
#define uk_syscall4_fn90(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_chmod(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn90(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_chmod(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn90(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_chmod(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn90(...) \
	uk_syscall_r_chmod(__VA_ARGS__)
#define uk_syscall_r0_fn90() \
	uk_syscall_r0_chmod()
#define uk_syscall_r1_fn90(arg1) \
	uk_syscall_r1_chmod(arg1)
#define uk_syscall_r2_fn90(arg1, arg2) \
	uk_syscall_r2_chmod(arg1, arg2)
#define uk_syscall_r3_fn90(arg1, arg2, arg3) \
	uk_syscall_r3_chmod(arg1, arg2, arg3)
#define uk_syscall_r4_fn90(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_chmod(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn90(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_chmod(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn90(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_chmod(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_chmod */
#define uk_syscall_fn90(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn90() _uk_syscall_e_enosys()
#define uk_syscall1_fn90(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn90(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn90(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn90(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn90(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn90(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn90(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn90() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn90(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn90(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn90(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn90(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn90(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn90(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_chmod */

#ifdef HAVE_uk_syscall_fchmod
#define uk_syscall_fn91(...) \
	uk_syscall_e_fchmod(__VA_ARGS__)
#define uk_syscall0_fn91() \
	uk_syscall_e0_fchmod()
#define uk_syscall1_fn91(arg1) \
	uk_syscall_e1_fchmod(arg1)
#define uk_syscall2_fn91(arg1, arg2) \
	uk_syscall_e2_fchmod(arg1, arg2)
#define uk_syscall3_fn91(arg1, arg2, arg3) \
	uk_syscall_e3_fchmod(arg1, arg2, arg3)
#define uk_syscall4_fn91(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fchmod(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn91(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fchmod(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn91(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fchmod(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn91(...) \
	uk_syscall_r_fchmod(__VA_ARGS__)
#define uk_syscall_r0_fn91() \
	uk_syscall_r0_fchmod()
#define uk_syscall_r1_fn91(arg1) \
	uk_syscall_r1_fchmod(arg1)
#define uk_syscall_r2_fn91(arg1, arg2) \
	uk_syscall_r2_fchmod(arg1, arg2)
#define uk_syscall_r3_fn91(arg1, arg2, arg3) \
	uk_syscall_r3_fchmod(arg1, arg2, arg3)
#define uk_syscall_r4_fn91(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fchmod(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn91(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fchmod(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn91(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fchmod(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fchmod */
#define uk_syscall_fn91(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn91() _uk_syscall_e_enosys()
#define uk_syscall1_fn91(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn91(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn91(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn91(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn91(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn91(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn91(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn91() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn91(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn91(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn91(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn91(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn91(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn91(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fchmod */

#ifdef HAVE_uk_syscall_chown
#define uk_syscall_fn92(...) \
	uk_syscall_e_chown(__VA_ARGS__)
#define uk_syscall0_fn92() \
	uk_syscall_e0_chown()
#define uk_syscall1_fn92(arg1) \
	uk_syscall_e1_chown(arg1)
#define uk_syscall2_fn92(arg1, arg2) \
	uk_syscall_e2_chown(arg1, arg2)
#define uk_syscall3_fn92(arg1, arg2, arg3) \
	uk_syscall_e3_chown(arg1, arg2, arg3)
#define uk_syscall4_fn92(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_chown(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn92(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_chown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn92(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_chown(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn92(...) \
	uk_syscall_r_chown(__VA_ARGS__)
#define uk_syscall_r0_fn92() \
	uk_syscall_r0_chown()
#define uk_syscall_r1_fn92(arg1) \
	uk_syscall_r1_chown(arg1)
#define uk_syscall_r2_fn92(arg1, arg2) \
	uk_syscall_r2_chown(arg1, arg2)
#define uk_syscall_r3_fn92(arg1, arg2, arg3) \
	uk_syscall_r3_chown(arg1, arg2, arg3)
#define uk_syscall_r4_fn92(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_chown(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn92(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_chown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn92(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_chown(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_chown */
#define uk_syscall_fn92(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn92() _uk_syscall_e_enosys()
#define uk_syscall1_fn92(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn92(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn92(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn92(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn92(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn92(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn92(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn92() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn92(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn92(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn92(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn92(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn92(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn92(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_chown */

#ifdef HAVE_uk_syscall_fchown
#define uk_syscall_fn93(...) \
	uk_syscall_e_fchown(__VA_ARGS__)
#define uk_syscall0_fn93() \
	uk_syscall_e0_fchown()
#define uk_syscall1_fn93(arg1) \
	uk_syscall_e1_fchown(arg1)
#define uk_syscall2_fn93(arg1, arg2) \
	uk_syscall_e2_fchown(arg1, arg2)
#define uk_syscall3_fn93(arg1, arg2, arg3) \
	uk_syscall_e3_fchown(arg1, arg2, arg3)
#define uk_syscall4_fn93(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fchown(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn93(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fchown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn93(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fchown(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn93(...) \
	uk_syscall_r_fchown(__VA_ARGS__)
#define uk_syscall_r0_fn93() \
	uk_syscall_r0_fchown()
#define uk_syscall_r1_fn93(arg1) \
	uk_syscall_r1_fchown(arg1)
#define uk_syscall_r2_fn93(arg1, arg2) \
	uk_syscall_r2_fchown(arg1, arg2)
#define uk_syscall_r3_fn93(arg1, arg2, arg3) \
	uk_syscall_r3_fchown(arg1, arg2, arg3)
#define uk_syscall_r4_fn93(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fchown(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn93(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fchown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn93(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fchown(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fchown */
#define uk_syscall_fn93(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn93() _uk_syscall_e_enosys()
#define uk_syscall1_fn93(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn93(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn93(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn93(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn93(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn93(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn93(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn93() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn93(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn93(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn93(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn93(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn93(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn93(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fchown */

#ifdef HAVE_uk_syscall_lchown
#define uk_syscall_fn94(...) \
	uk_syscall_e_lchown(__VA_ARGS__)
#define uk_syscall0_fn94() \
	uk_syscall_e0_lchown()
#define uk_syscall1_fn94(arg1) \
	uk_syscall_e1_lchown(arg1)
#define uk_syscall2_fn94(arg1, arg2) \
	uk_syscall_e2_lchown(arg1, arg2)
#define uk_syscall3_fn94(arg1, arg2, arg3) \
	uk_syscall_e3_lchown(arg1, arg2, arg3)
#define uk_syscall4_fn94(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_lchown(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn94(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_lchown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn94(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_lchown(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn94(...) \
	uk_syscall_r_lchown(__VA_ARGS__)
#define uk_syscall_r0_fn94() \
	uk_syscall_r0_lchown()
#define uk_syscall_r1_fn94(arg1) \
	uk_syscall_r1_lchown(arg1)
#define uk_syscall_r2_fn94(arg1, arg2) \
	uk_syscall_r2_lchown(arg1, arg2)
#define uk_syscall_r3_fn94(arg1, arg2, arg3) \
	uk_syscall_r3_lchown(arg1, arg2, arg3)
#define uk_syscall_r4_fn94(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_lchown(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn94(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_lchown(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn94(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_lchown(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_lchown */
#define uk_syscall_fn94(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn94() _uk_syscall_e_enosys()
#define uk_syscall1_fn94(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn94(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn94(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn94(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn94(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn94(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn94(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn94() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn94(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn94(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn94(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn94(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn94(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn94(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_lchown */

#ifdef HAVE_uk_syscall_umask
#define uk_syscall_fn95(...) \
	uk_syscall_e_umask(__VA_ARGS__)
#define uk_syscall0_fn95() \
	uk_syscall_e0_umask()
#define uk_syscall1_fn95(arg1) \
	uk_syscall_e1_umask(arg1)
#define uk_syscall2_fn95(arg1, arg2) \
	uk_syscall_e2_umask(arg1, arg2)
#define uk_syscall3_fn95(arg1, arg2, arg3) \
	uk_syscall_e3_umask(arg1, arg2, arg3)
#define uk_syscall4_fn95(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_umask(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn95(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_umask(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn95(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_umask(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn95(...) \
	uk_syscall_r_umask(__VA_ARGS__)
#define uk_syscall_r0_fn95() \
	uk_syscall_r0_umask()
#define uk_syscall_r1_fn95(arg1) \
	uk_syscall_r1_umask(arg1)
#define uk_syscall_r2_fn95(arg1, arg2) \
	uk_syscall_r2_umask(arg1, arg2)
#define uk_syscall_r3_fn95(arg1, arg2, arg3) \
	uk_syscall_r3_umask(arg1, arg2, arg3)
#define uk_syscall_r4_fn95(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_umask(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn95(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_umask(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn95(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_umask(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_umask */
#define uk_syscall_fn95(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn95() _uk_syscall_e_enosys()
#define uk_syscall1_fn95(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn95(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn95(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn95(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn95(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn95(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn95(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn95() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn95(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn95(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn95(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn95(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn95(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn95(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_umask */

#ifdef HAVE_uk_syscall_gettimeofday
#define uk_syscall_fn96(...) \
	uk_syscall_e_gettimeofday(__VA_ARGS__)
#define uk_syscall0_fn96() \
	uk_syscall_e0_gettimeofday()
#define uk_syscall1_fn96(arg1) \
	uk_syscall_e1_gettimeofday(arg1)
#define uk_syscall2_fn96(arg1, arg2) \
	uk_syscall_e2_gettimeofday(arg1, arg2)
#define uk_syscall3_fn96(arg1, arg2, arg3) \
	uk_syscall_e3_gettimeofday(arg1, arg2, arg3)
#define uk_syscall4_fn96(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_gettimeofday(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn96(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_gettimeofday(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn96(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_gettimeofday(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn96(...) \
	uk_syscall_r_gettimeofday(__VA_ARGS__)
#define uk_syscall_r0_fn96() \
	uk_syscall_r0_gettimeofday()
#define uk_syscall_r1_fn96(arg1) \
	uk_syscall_r1_gettimeofday(arg1)
#define uk_syscall_r2_fn96(arg1, arg2) \
	uk_syscall_r2_gettimeofday(arg1, arg2)
#define uk_syscall_r3_fn96(arg1, arg2, arg3) \
	uk_syscall_r3_gettimeofday(arg1, arg2, arg3)
#define uk_syscall_r4_fn96(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_gettimeofday(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn96(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_gettimeofday(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn96(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_gettimeofday(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_gettimeofday */
#define uk_syscall_fn96(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn96() _uk_syscall_e_enosys()
#define uk_syscall1_fn96(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn96(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn96(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn96(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn96(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn96(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn96(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn96() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn96(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn96(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn96(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn96(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn96(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn96(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_gettimeofday */

#ifdef HAVE_uk_syscall_getrlimit
#define uk_syscall_fn97(...) \
	uk_syscall_e_getrlimit(__VA_ARGS__)
#define uk_syscall0_fn97() \
	uk_syscall_e0_getrlimit()
#define uk_syscall1_fn97(arg1) \
	uk_syscall_e1_getrlimit(arg1)
#define uk_syscall2_fn97(arg1, arg2) \
	uk_syscall_e2_getrlimit(arg1, arg2)
#define uk_syscall3_fn97(arg1, arg2, arg3) \
	uk_syscall_e3_getrlimit(arg1, arg2, arg3)
#define uk_syscall4_fn97(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getrlimit(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn97(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getrlimit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn97(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getrlimit(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn97(...) \
	uk_syscall_r_getrlimit(__VA_ARGS__)
#define uk_syscall_r0_fn97() \
	uk_syscall_r0_getrlimit()
#define uk_syscall_r1_fn97(arg1) \
	uk_syscall_r1_getrlimit(arg1)
#define uk_syscall_r2_fn97(arg1, arg2) \
	uk_syscall_r2_getrlimit(arg1, arg2)
#define uk_syscall_r3_fn97(arg1, arg2, arg3) \
	uk_syscall_r3_getrlimit(arg1, arg2, arg3)
#define uk_syscall_r4_fn97(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getrlimit(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn97(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getrlimit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn97(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getrlimit(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getrlimit */
#define uk_syscall_fn97(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn97() _uk_syscall_e_enosys()
#define uk_syscall1_fn97(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn97(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn97(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn97(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn97(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn97(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn97(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn97() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn97(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn97(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn97(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn97(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn97(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn97(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getrlimit */

#ifdef HAVE_uk_syscall_getrusage
#define uk_syscall_fn98(...) \
	uk_syscall_e_getrusage(__VA_ARGS__)
#define uk_syscall0_fn98() \
	uk_syscall_e0_getrusage()
#define uk_syscall1_fn98(arg1) \
	uk_syscall_e1_getrusage(arg1)
#define uk_syscall2_fn98(arg1, arg2) \
	uk_syscall_e2_getrusage(arg1, arg2)
#define uk_syscall3_fn98(arg1, arg2, arg3) \
	uk_syscall_e3_getrusage(arg1, arg2, arg3)
#define uk_syscall4_fn98(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getrusage(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn98(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getrusage(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn98(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getrusage(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn98(...) \
	uk_syscall_r_getrusage(__VA_ARGS__)
#define uk_syscall_r0_fn98() \
	uk_syscall_r0_getrusage()
#define uk_syscall_r1_fn98(arg1) \
	uk_syscall_r1_getrusage(arg1)
#define uk_syscall_r2_fn98(arg1, arg2) \
	uk_syscall_r2_getrusage(arg1, arg2)
#define uk_syscall_r3_fn98(arg1, arg2, arg3) \
	uk_syscall_r3_getrusage(arg1, arg2, arg3)
#define uk_syscall_r4_fn98(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getrusage(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn98(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getrusage(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn98(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getrusage(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getrusage */
#define uk_syscall_fn98(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn98() _uk_syscall_e_enosys()
#define uk_syscall1_fn98(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn98(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn98(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn98(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn98(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn98(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn98(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn98() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn98(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn98(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn98(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn98(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn98(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn98(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getrusage */

#ifdef HAVE_uk_syscall_sysinfo
#define uk_syscall_fn99(...) \
	uk_syscall_e_sysinfo(__VA_ARGS__)
#define uk_syscall0_fn99() \
	uk_syscall_e0_sysinfo()
#define uk_syscall1_fn99(arg1) \
	uk_syscall_e1_sysinfo(arg1)
#define uk_syscall2_fn99(arg1, arg2) \
	uk_syscall_e2_sysinfo(arg1, arg2)
#define uk_syscall3_fn99(arg1, arg2, arg3) \
	uk_syscall_e3_sysinfo(arg1, arg2, arg3)
#define uk_syscall4_fn99(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sysinfo(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn99(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sysinfo(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn99(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sysinfo(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn99(...) \
	uk_syscall_r_sysinfo(__VA_ARGS__)
#define uk_syscall_r0_fn99() \
	uk_syscall_r0_sysinfo()
#define uk_syscall_r1_fn99(arg1) \
	uk_syscall_r1_sysinfo(arg1)
#define uk_syscall_r2_fn99(arg1, arg2) \
	uk_syscall_r2_sysinfo(arg1, arg2)
#define uk_syscall_r3_fn99(arg1, arg2, arg3) \
	uk_syscall_r3_sysinfo(arg1, arg2, arg3)
#define uk_syscall_r4_fn99(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sysinfo(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn99(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sysinfo(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn99(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sysinfo(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sysinfo */
#define uk_syscall_fn99(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn99() _uk_syscall_e_enosys()
#define uk_syscall1_fn99(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn99(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn99(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn99(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn99(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn99(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn99(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn99() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn99(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn99(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn99(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn99(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn99(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn99(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sysinfo */

#ifdef HAVE_uk_syscall_times
#define uk_syscall_fn100(...) \
	uk_syscall_e_times(__VA_ARGS__)
#define uk_syscall0_fn100() \
	uk_syscall_e0_times()
#define uk_syscall1_fn100(arg1) \
	uk_syscall_e1_times(arg1)
#define uk_syscall2_fn100(arg1, arg2) \
	uk_syscall_e2_times(arg1, arg2)
#define uk_syscall3_fn100(arg1, arg2, arg3) \
	uk_syscall_e3_times(arg1, arg2, arg3)
#define uk_syscall4_fn100(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_times(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn100(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_times(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn100(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_times(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn100(...) \
	uk_syscall_r_times(__VA_ARGS__)
#define uk_syscall_r0_fn100() \
	uk_syscall_r0_times()
#define uk_syscall_r1_fn100(arg1) \
	uk_syscall_r1_times(arg1)
#define uk_syscall_r2_fn100(arg1, arg2) \
	uk_syscall_r2_times(arg1, arg2)
#define uk_syscall_r3_fn100(arg1, arg2, arg3) \
	uk_syscall_r3_times(arg1, arg2, arg3)
#define uk_syscall_r4_fn100(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_times(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn100(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_times(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn100(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_times(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_times */
#define uk_syscall_fn100(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn100() _uk_syscall_e_enosys()
#define uk_syscall1_fn100(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn100(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn100(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn100(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn100(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn100(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn100(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn100() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn100(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn100(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn100(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn100(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn100(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn100(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_times */

#ifdef HAVE_uk_syscall_ptrace
#define uk_syscall_fn101(...) \
	uk_syscall_e_ptrace(__VA_ARGS__)
#define uk_syscall0_fn101() \
	uk_syscall_e0_ptrace()
#define uk_syscall1_fn101(arg1) \
	uk_syscall_e1_ptrace(arg1)
#define uk_syscall2_fn101(arg1, arg2) \
	uk_syscall_e2_ptrace(arg1, arg2)
#define uk_syscall3_fn101(arg1, arg2, arg3) \
	uk_syscall_e3_ptrace(arg1, arg2, arg3)
#define uk_syscall4_fn101(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ptrace(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn101(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ptrace(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn101(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ptrace(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn101(...) \
	uk_syscall_r_ptrace(__VA_ARGS__)
#define uk_syscall_r0_fn101() \
	uk_syscall_r0_ptrace()
#define uk_syscall_r1_fn101(arg1) \
	uk_syscall_r1_ptrace(arg1)
#define uk_syscall_r2_fn101(arg1, arg2) \
	uk_syscall_r2_ptrace(arg1, arg2)
#define uk_syscall_r3_fn101(arg1, arg2, arg3) \
	uk_syscall_r3_ptrace(arg1, arg2, arg3)
#define uk_syscall_r4_fn101(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ptrace(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn101(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ptrace(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn101(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ptrace(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ptrace */
#define uk_syscall_fn101(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn101() _uk_syscall_e_enosys()
#define uk_syscall1_fn101(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn101(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn101(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn101(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn101(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn101(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn101(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn101() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn101(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn101(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn101(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn101(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn101(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn101(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ptrace */

#ifdef HAVE_uk_syscall_getuid
#define uk_syscall_fn102(...) \
	uk_syscall_e_getuid(__VA_ARGS__)
#define uk_syscall0_fn102() \
	uk_syscall_e0_getuid()
#define uk_syscall1_fn102(arg1) \
	uk_syscall_e1_getuid(arg1)
#define uk_syscall2_fn102(arg1, arg2) \
	uk_syscall_e2_getuid(arg1, arg2)
#define uk_syscall3_fn102(arg1, arg2, arg3) \
	uk_syscall_e3_getuid(arg1, arg2, arg3)
#define uk_syscall4_fn102(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getuid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn102(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn102(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getuid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn102(...) \
	uk_syscall_r_getuid(__VA_ARGS__)
#define uk_syscall_r0_fn102() \
	uk_syscall_r0_getuid()
#define uk_syscall_r1_fn102(arg1) \
	uk_syscall_r1_getuid(arg1)
#define uk_syscall_r2_fn102(arg1, arg2) \
	uk_syscall_r2_getuid(arg1, arg2)
#define uk_syscall_r3_fn102(arg1, arg2, arg3) \
	uk_syscall_r3_getuid(arg1, arg2, arg3)
#define uk_syscall_r4_fn102(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getuid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn102(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn102(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getuid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getuid */
#define uk_syscall_fn102(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn102() _uk_syscall_e_enosys()
#define uk_syscall1_fn102(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn102(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn102(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn102(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn102(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn102(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn102(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn102() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn102(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn102(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn102(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn102(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn102(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn102(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getuid */

#ifdef HAVE_uk_syscall_syslog
#define uk_syscall_fn103(...) \
	uk_syscall_e_syslog(__VA_ARGS__)
#define uk_syscall0_fn103() \
	uk_syscall_e0_syslog()
#define uk_syscall1_fn103(arg1) \
	uk_syscall_e1_syslog(arg1)
#define uk_syscall2_fn103(arg1, arg2) \
	uk_syscall_e2_syslog(arg1, arg2)
#define uk_syscall3_fn103(arg1, arg2, arg3) \
	uk_syscall_e3_syslog(arg1, arg2, arg3)
#define uk_syscall4_fn103(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_syslog(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn103(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_syslog(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn103(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_syslog(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn103(...) \
	uk_syscall_r_syslog(__VA_ARGS__)
#define uk_syscall_r0_fn103() \
	uk_syscall_r0_syslog()
#define uk_syscall_r1_fn103(arg1) \
	uk_syscall_r1_syslog(arg1)
#define uk_syscall_r2_fn103(arg1, arg2) \
	uk_syscall_r2_syslog(arg1, arg2)
#define uk_syscall_r3_fn103(arg1, arg2, arg3) \
	uk_syscall_r3_syslog(arg1, arg2, arg3)
#define uk_syscall_r4_fn103(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_syslog(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn103(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_syslog(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn103(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_syslog(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_syslog */
#define uk_syscall_fn103(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn103() _uk_syscall_e_enosys()
#define uk_syscall1_fn103(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn103(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn103(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn103(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn103(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn103(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn103(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn103() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn103(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn103(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn103(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn103(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn103(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn103(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_syslog */

#ifdef HAVE_uk_syscall_getgid
#define uk_syscall_fn104(...) \
	uk_syscall_e_getgid(__VA_ARGS__)
#define uk_syscall0_fn104() \
	uk_syscall_e0_getgid()
#define uk_syscall1_fn104(arg1) \
	uk_syscall_e1_getgid(arg1)
#define uk_syscall2_fn104(arg1, arg2) \
	uk_syscall_e2_getgid(arg1, arg2)
#define uk_syscall3_fn104(arg1, arg2, arg3) \
	uk_syscall_e3_getgid(arg1, arg2, arg3)
#define uk_syscall4_fn104(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getgid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn104(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn104(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getgid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn104(...) \
	uk_syscall_r_getgid(__VA_ARGS__)
#define uk_syscall_r0_fn104() \
	uk_syscall_r0_getgid()
#define uk_syscall_r1_fn104(arg1) \
	uk_syscall_r1_getgid(arg1)
#define uk_syscall_r2_fn104(arg1, arg2) \
	uk_syscall_r2_getgid(arg1, arg2)
#define uk_syscall_r3_fn104(arg1, arg2, arg3) \
	uk_syscall_r3_getgid(arg1, arg2, arg3)
#define uk_syscall_r4_fn104(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getgid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn104(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn104(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getgid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getgid */
#define uk_syscall_fn104(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn104() _uk_syscall_e_enosys()
#define uk_syscall1_fn104(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn104(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn104(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn104(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn104(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn104(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn104(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn104() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn104(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn104(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn104(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn104(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn104(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn104(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getgid */

#ifdef HAVE_uk_syscall_setuid
#define uk_syscall_fn105(...) \
	uk_syscall_e_setuid(__VA_ARGS__)
#define uk_syscall0_fn105() \
	uk_syscall_e0_setuid()
#define uk_syscall1_fn105(arg1) \
	uk_syscall_e1_setuid(arg1)
#define uk_syscall2_fn105(arg1, arg2) \
	uk_syscall_e2_setuid(arg1, arg2)
#define uk_syscall3_fn105(arg1, arg2, arg3) \
	uk_syscall_e3_setuid(arg1, arg2, arg3)
#define uk_syscall4_fn105(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setuid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn105(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn105(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setuid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn105(...) \
	uk_syscall_r_setuid(__VA_ARGS__)
#define uk_syscall_r0_fn105() \
	uk_syscall_r0_setuid()
#define uk_syscall_r1_fn105(arg1) \
	uk_syscall_r1_setuid(arg1)
#define uk_syscall_r2_fn105(arg1, arg2) \
	uk_syscall_r2_setuid(arg1, arg2)
#define uk_syscall_r3_fn105(arg1, arg2, arg3) \
	uk_syscall_r3_setuid(arg1, arg2, arg3)
#define uk_syscall_r4_fn105(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setuid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn105(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn105(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setuid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setuid */
#define uk_syscall_fn105(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn105() _uk_syscall_e_enosys()
#define uk_syscall1_fn105(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn105(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn105(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn105(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn105(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn105(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn105(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn105() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn105(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn105(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn105(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn105(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn105(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn105(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setuid */

#ifdef HAVE_uk_syscall_setgid
#define uk_syscall_fn106(...) \
	uk_syscall_e_setgid(__VA_ARGS__)
#define uk_syscall0_fn106() \
	uk_syscall_e0_setgid()
#define uk_syscall1_fn106(arg1) \
	uk_syscall_e1_setgid(arg1)
#define uk_syscall2_fn106(arg1, arg2) \
	uk_syscall_e2_setgid(arg1, arg2)
#define uk_syscall3_fn106(arg1, arg2, arg3) \
	uk_syscall_e3_setgid(arg1, arg2, arg3)
#define uk_syscall4_fn106(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setgid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn106(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn106(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setgid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn106(...) \
	uk_syscall_r_setgid(__VA_ARGS__)
#define uk_syscall_r0_fn106() \
	uk_syscall_r0_setgid()
#define uk_syscall_r1_fn106(arg1) \
	uk_syscall_r1_setgid(arg1)
#define uk_syscall_r2_fn106(arg1, arg2) \
	uk_syscall_r2_setgid(arg1, arg2)
#define uk_syscall_r3_fn106(arg1, arg2, arg3) \
	uk_syscall_r3_setgid(arg1, arg2, arg3)
#define uk_syscall_r4_fn106(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setgid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn106(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn106(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setgid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setgid */
#define uk_syscall_fn106(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn106() _uk_syscall_e_enosys()
#define uk_syscall1_fn106(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn106(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn106(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn106(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn106(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn106(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn106(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn106() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn106(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn106(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn106(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn106(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn106(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn106(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setgid */

#ifdef HAVE_uk_syscall_geteuid
#define uk_syscall_fn107(...) \
	uk_syscall_e_geteuid(__VA_ARGS__)
#define uk_syscall0_fn107() \
	uk_syscall_e0_geteuid()
#define uk_syscall1_fn107(arg1) \
	uk_syscall_e1_geteuid(arg1)
#define uk_syscall2_fn107(arg1, arg2) \
	uk_syscall_e2_geteuid(arg1, arg2)
#define uk_syscall3_fn107(arg1, arg2, arg3) \
	uk_syscall_e3_geteuid(arg1, arg2, arg3)
#define uk_syscall4_fn107(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_geteuid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn107(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_geteuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn107(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_geteuid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn107(...) \
	uk_syscall_r_geteuid(__VA_ARGS__)
#define uk_syscall_r0_fn107() \
	uk_syscall_r0_geteuid()
#define uk_syscall_r1_fn107(arg1) \
	uk_syscall_r1_geteuid(arg1)
#define uk_syscall_r2_fn107(arg1, arg2) \
	uk_syscall_r2_geteuid(arg1, arg2)
#define uk_syscall_r3_fn107(arg1, arg2, arg3) \
	uk_syscall_r3_geteuid(arg1, arg2, arg3)
#define uk_syscall_r4_fn107(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_geteuid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn107(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_geteuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn107(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_geteuid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_geteuid */
#define uk_syscall_fn107(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn107() _uk_syscall_e_enosys()
#define uk_syscall1_fn107(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn107(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn107(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn107(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn107(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn107(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn107(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn107() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn107(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn107(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn107(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn107(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn107(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn107(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_geteuid */

#ifdef HAVE_uk_syscall_getegid
#define uk_syscall_fn108(...) \
	uk_syscall_e_getegid(__VA_ARGS__)
#define uk_syscall0_fn108() \
	uk_syscall_e0_getegid()
#define uk_syscall1_fn108(arg1) \
	uk_syscall_e1_getegid(arg1)
#define uk_syscall2_fn108(arg1, arg2) \
	uk_syscall_e2_getegid(arg1, arg2)
#define uk_syscall3_fn108(arg1, arg2, arg3) \
	uk_syscall_e3_getegid(arg1, arg2, arg3)
#define uk_syscall4_fn108(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getegid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn108(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getegid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn108(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getegid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn108(...) \
	uk_syscall_r_getegid(__VA_ARGS__)
#define uk_syscall_r0_fn108() \
	uk_syscall_r0_getegid()
#define uk_syscall_r1_fn108(arg1) \
	uk_syscall_r1_getegid(arg1)
#define uk_syscall_r2_fn108(arg1, arg2) \
	uk_syscall_r2_getegid(arg1, arg2)
#define uk_syscall_r3_fn108(arg1, arg2, arg3) \
	uk_syscall_r3_getegid(arg1, arg2, arg3)
#define uk_syscall_r4_fn108(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getegid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn108(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getegid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn108(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getegid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getegid */
#define uk_syscall_fn108(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn108() _uk_syscall_e_enosys()
#define uk_syscall1_fn108(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn108(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn108(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn108(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn108(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn108(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn108(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn108() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn108(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn108(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn108(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn108(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn108(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn108(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getegid */

#ifdef HAVE_uk_syscall_setpgid
#define uk_syscall_fn109(...) \
	uk_syscall_e_setpgid(__VA_ARGS__)
#define uk_syscall0_fn109() \
	uk_syscall_e0_setpgid()
#define uk_syscall1_fn109(arg1) \
	uk_syscall_e1_setpgid(arg1)
#define uk_syscall2_fn109(arg1, arg2) \
	uk_syscall_e2_setpgid(arg1, arg2)
#define uk_syscall3_fn109(arg1, arg2, arg3) \
	uk_syscall_e3_setpgid(arg1, arg2, arg3)
#define uk_syscall4_fn109(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setpgid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn109(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setpgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn109(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setpgid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn109(...) \
	uk_syscall_r_setpgid(__VA_ARGS__)
#define uk_syscall_r0_fn109() \
	uk_syscall_r0_setpgid()
#define uk_syscall_r1_fn109(arg1) \
	uk_syscall_r1_setpgid(arg1)
#define uk_syscall_r2_fn109(arg1, arg2) \
	uk_syscall_r2_setpgid(arg1, arg2)
#define uk_syscall_r3_fn109(arg1, arg2, arg3) \
	uk_syscall_r3_setpgid(arg1, arg2, arg3)
#define uk_syscall_r4_fn109(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setpgid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn109(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setpgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn109(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setpgid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setpgid */
#define uk_syscall_fn109(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn109() _uk_syscall_e_enosys()
#define uk_syscall1_fn109(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn109(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn109(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn109(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn109(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn109(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn109(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn109() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn109(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn109(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn109(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn109(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn109(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn109(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setpgid */

#ifdef HAVE_uk_syscall_getppid
#define uk_syscall_fn110(...) \
	uk_syscall_e_getppid(__VA_ARGS__)
#define uk_syscall0_fn110() \
	uk_syscall_e0_getppid()
#define uk_syscall1_fn110(arg1) \
	uk_syscall_e1_getppid(arg1)
#define uk_syscall2_fn110(arg1, arg2) \
	uk_syscall_e2_getppid(arg1, arg2)
#define uk_syscall3_fn110(arg1, arg2, arg3) \
	uk_syscall_e3_getppid(arg1, arg2, arg3)
#define uk_syscall4_fn110(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getppid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn110(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getppid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn110(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getppid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn110(...) \
	uk_syscall_r_getppid(__VA_ARGS__)
#define uk_syscall_r0_fn110() \
	uk_syscall_r0_getppid()
#define uk_syscall_r1_fn110(arg1) \
	uk_syscall_r1_getppid(arg1)
#define uk_syscall_r2_fn110(arg1, arg2) \
	uk_syscall_r2_getppid(arg1, arg2)
#define uk_syscall_r3_fn110(arg1, arg2, arg3) \
	uk_syscall_r3_getppid(arg1, arg2, arg3)
#define uk_syscall_r4_fn110(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getppid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn110(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getppid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn110(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getppid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getppid */
#define uk_syscall_fn110(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn110() _uk_syscall_e_enosys()
#define uk_syscall1_fn110(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn110(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn110(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn110(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn110(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn110(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn110(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn110() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn110(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn110(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn110(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn110(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn110(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn110(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getppid */

#ifdef HAVE_uk_syscall_getpgrp
#define uk_syscall_fn111(...) \
	uk_syscall_e_getpgrp(__VA_ARGS__)
#define uk_syscall0_fn111() \
	uk_syscall_e0_getpgrp()
#define uk_syscall1_fn111(arg1) \
	uk_syscall_e1_getpgrp(arg1)
#define uk_syscall2_fn111(arg1, arg2) \
	uk_syscall_e2_getpgrp(arg1, arg2)
#define uk_syscall3_fn111(arg1, arg2, arg3) \
	uk_syscall_e3_getpgrp(arg1, arg2, arg3)
#define uk_syscall4_fn111(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getpgrp(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn111(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getpgrp(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn111(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getpgrp(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn111(...) \
	uk_syscall_r_getpgrp(__VA_ARGS__)
#define uk_syscall_r0_fn111() \
	uk_syscall_r0_getpgrp()
#define uk_syscall_r1_fn111(arg1) \
	uk_syscall_r1_getpgrp(arg1)
#define uk_syscall_r2_fn111(arg1, arg2) \
	uk_syscall_r2_getpgrp(arg1, arg2)
#define uk_syscall_r3_fn111(arg1, arg2, arg3) \
	uk_syscall_r3_getpgrp(arg1, arg2, arg3)
#define uk_syscall_r4_fn111(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getpgrp(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn111(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getpgrp(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn111(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getpgrp(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getpgrp */
#define uk_syscall_fn111(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn111() _uk_syscall_e_enosys()
#define uk_syscall1_fn111(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn111(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn111(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn111(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn111(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn111(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn111(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn111() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn111(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn111(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn111(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn111(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn111(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn111(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getpgrp */

#ifdef HAVE_uk_syscall_setsid
#define uk_syscall_fn112(...) \
	uk_syscall_e_setsid(__VA_ARGS__)
#define uk_syscall0_fn112() \
	uk_syscall_e0_setsid()
#define uk_syscall1_fn112(arg1) \
	uk_syscall_e1_setsid(arg1)
#define uk_syscall2_fn112(arg1, arg2) \
	uk_syscall_e2_setsid(arg1, arg2)
#define uk_syscall3_fn112(arg1, arg2, arg3) \
	uk_syscall_e3_setsid(arg1, arg2, arg3)
#define uk_syscall4_fn112(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setsid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn112(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setsid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn112(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setsid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn112(...) \
	uk_syscall_r_setsid(__VA_ARGS__)
#define uk_syscall_r0_fn112() \
	uk_syscall_r0_setsid()
#define uk_syscall_r1_fn112(arg1) \
	uk_syscall_r1_setsid(arg1)
#define uk_syscall_r2_fn112(arg1, arg2) \
	uk_syscall_r2_setsid(arg1, arg2)
#define uk_syscall_r3_fn112(arg1, arg2, arg3) \
	uk_syscall_r3_setsid(arg1, arg2, arg3)
#define uk_syscall_r4_fn112(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setsid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn112(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setsid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn112(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setsid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setsid */
#define uk_syscall_fn112(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn112() _uk_syscall_e_enosys()
#define uk_syscall1_fn112(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn112(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn112(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn112(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn112(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn112(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn112(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn112() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn112(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn112(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn112(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn112(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn112(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn112(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setsid */

#ifdef HAVE_uk_syscall_setreuid
#define uk_syscall_fn113(...) \
	uk_syscall_e_setreuid(__VA_ARGS__)
#define uk_syscall0_fn113() \
	uk_syscall_e0_setreuid()
#define uk_syscall1_fn113(arg1) \
	uk_syscall_e1_setreuid(arg1)
#define uk_syscall2_fn113(arg1, arg2) \
	uk_syscall_e2_setreuid(arg1, arg2)
#define uk_syscall3_fn113(arg1, arg2, arg3) \
	uk_syscall_e3_setreuid(arg1, arg2, arg3)
#define uk_syscall4_fn113(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setreuid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn113(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setreuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn113(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setreuid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn113(...) \
	uk_syscall_r_setreuid(__VA_ARGS__)
#define uk_syscall_r0_fn113() \
	uk_syscall_r0_setreuid()
#define uk_syscall_r1_fn113(arg1) \
	uk_syscall_r1_setreuid(arg1)
#define uk_syscall_r2_fn113(arg1, arg2) \
	uk_syscall_r2_setreuid(arg1, arg2)
#define uk_syscall_r3_fn113(arg1, arg2, arg3) \
	uk_syscall_r3_setreuid(arg1, arg2, arg3)
#define uk_syscall_r4_fn113(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setreuid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn113(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setreuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn113(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setreuid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setreuid */
#define uk_syscall_fn113(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn113() _uk_syscall_e_enosys()
#define uk_syscall1_fn113(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn113(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn113(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn113(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn113(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn113(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn113(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn113() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn113(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn113(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn113(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn113(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn113(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn113(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setreuid */

#ifdef HAVE_uk_syscall_setregid
#define uk_syscall_fn114(...) \
	uk_syscall_e_setregid(__VA_ARGS__)
#define uk_syscall0_fn114() \
	uk_syscall_e0_setregid()
#define uk_syscall1_fn114(arg1) \
	uk_syscall_e1_setregid(arg1)
#define uk_syscall2_fn114(arg1, arg2) \
	uk_syscall_e2_setregid(arg1, arg2)
#define uk_syscall3_fn114(arg1, arg2, arg3) \
	uk_syscall_e3_setregid(arg1, arg2, arg3)
#define uk_syscall4_fn114(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setregid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn114(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setregid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn114(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setregid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn114(...) \
	uk_syscall_r_setregid(__VA_ARGS__)
#define uk_syscall_r0_fn114() \
	uk_syscall_r0_setregid()
#define uk_syscall_r1_fn114(arg1) \
	uk_syscall_r1_setregid(arg1)
#define uk_syscall_r2_fn114(arg1, arg2) \
	uk_syscall_r2_setregid(arg1, arg2)
#define uk_syscall_r3_fn114(arg1, arg2, arg3) \
	uk_syscall_r3_setregid(arg1, arg2, arg3)
#define uk_syscall_r4_fn114(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setregid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn114(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setregid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn114(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setregid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setregid */
#define uk_syscall_fn114(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn114() _uk_syscall_e_enosys()
#define uk_syscall1_fn114(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn114(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn114(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn114(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn114(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn114(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn114(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn114() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn114(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn114(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn114(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn114(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn114(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn114(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setregid */

#ifdef HAVE_uk_syscall_getgroups
#define uk_syscall_fn115(...) \
	uk_syscall_e_getgroups(__VA_ARGS__)
#define uk_syscall0_fn115() \
	uk_syscall_e0_getgroups()
#define uk_syscall1_fn115(arg1) \
	uk_syscall_e1_getgroups(arg1)
#define uk_syscall2_fn115(arg1, arg2) \
	uk_syscall_e2_getgroups(arg1, arg2)
#define uk_syscall3_fn115(arg1, arg2, arg3) \
	uk_syscall_e3_getgroups(arg1, arg2, arg3)
#define uk_syscall4_fn115(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getgroups(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn115(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getgroups(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn115(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getgroups(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn115(...) \
	uk_syscall_r_getgroups(__VA_ARGS__)
#define uk_syscall_r0_fn115() \
	uk_syscall_r0_getgroups()
#define uk_syscall_r1_fn115(arg1) \
	uk_syscall_r1_getgroups(arg1)
#define uk_syscall_r2_fn115(arg1, arg2) \
	uk_syscall_r2_getgroups(arg1, arg2)
#define uk_syscall_r3_fn115(arg1, arg2, arg3) \
	uk_syscall_r3_getgroups(arg1, arg2, arg3)
#define uk_syscall_r4_fn115(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getgroups(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn115(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getgroups(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn115(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getgroups(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getgroups */
#define uk_syscall_fn115(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn115() _uk_syscall_e_enosys()
#define uk_syscall1_fn115(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn115(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn115(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn115(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn115(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn115(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn115(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn115() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn115(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn115(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn115(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn115(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn115(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn115(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getgroups */

#ifdef HAVE_uk_syscall_setgroups
#define uk_syscall_fn116(...) \
	uk_syscall_e_setgroups(__VA_ARGS__)
#define uk_syscall0_fn116() \
	uk_syscall_e0_setgroups()
#define uk_syscall1_fn116(arg1) \
	uk_syscall_e1_setgroups(arg1)
#define uk_syscall2_fn116(arg1, arg2) \
	uk_syscall_e2_setgroups(arg1, arg2)
#define uk_syscall3_fn116(arg1, arg2, arg3) \
	uk_syscall_e3_setgroups(arg1, arg2, arg3)
#define uk_syscall4_fn116(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setgroups(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn116(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setgroups(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn116(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setgroups(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn116(...) \
	uk_syscall_r_setgroups(__VA_ARGS__)
#define uk_syscall_r0_fn116() \
	uk_syscall_r0_setgroups()
#define uk_syscall_r1_fn116(arg1) \
	uk_syscall_r1_setgroups(arg1)
#define uk_syscall_r2_fn116(arg1, arg2) \
	uk_syscall_r2_setgroups(arg1, arg2)
#define uk_syscall_r3_fn116(arg1, arg2, arg3) \
	uk_syscall_r3_setgroups(arg1, arg2, arg3)
#define uk_syscall_r4_fn116(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setgroups(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn116(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setgroups(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn116(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setgroups(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setgroups */
#define uk_syscall_fn116(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn116() _uk_syscall_e_enosys()
#define uk_syscall1_fn116(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn116(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn116(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn116(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn116(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn116(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn116(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn116() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn116(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn116(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn116(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn116(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn116(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn116(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setgroups */

#ifdef HAVE_uk_syscall_setresuid
#define uk_syscall_fn117(...) \
	uk_syscall_e_setresuid(__VA_ARGS__)
#define uk_syscall0_fn117() \
	uk_syscall_e0_setresuid()
#define uk_syscall1_fn117(arg1) \
	uk_syscall_e1_setresuid(arg1)
#define uk_syscall2_fn117(arg1, arg2) \
	uk_syscall_e2_setresuid(arg1, arg2)
#define uk_syscall3_fn117(arg1, arg2, arg3) \
	uk_syscall_e3_setresuid(arg1, arg2, arg3)
#define uk_syscall4_fn117(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setresuid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn117(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setresuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn117(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setresuid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn117(...) \
	uk_syscall_r_setresuid(__VA_ARGS__)
#define uk_syscall_r0_fn117() \
	uk_syscall_r0_setresuid()
#define uk_syscall_r1_fn117(arg1) \
	uk_syscall_r1_setresuid(arg1)
#define uk_syscall_r2_fn117(arg1, arg2) \
	uk_syscall_r2_setresuid(arg1, arg2)
#define uk_syscall_r3_fn117(arg1, arg2, arg3) \
	uk_syscall_r3_setresuid(arg1, arg2, arg3)
#define uk_syscall_r4_fn117(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setresuid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn117(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setresuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn117(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setresuid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setresuid */
#define uk_syscall_fn117(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn117() _uk_syscall_e_enosys()
#define uk_syscall1_fn117(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn117(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn117(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn117(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn117(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn117(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn117(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn117() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn117(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn117(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn117(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn117(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn117(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn117(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setresuid */

#ifdef HAVE_uk_syscall_getresuid
#define uk_syscall_fn118(...) \
	uk_syscall_e_getresuid(__VA_ARGS__)
#define uk_syscall0_fn118() \
	uk_syscall_e0_getresuid()
#define uk_syscall1_fn118(arg1) \
	uk_syscall_e1_getresuid(arg1)
#define uk_syscall2_fn118(arg1, arg2) \
	uk_syscall_e2_getresuid(arg1, arg2)
#define uk_syscall3_fn118(arg1, arg2, arg3) \
	uk_syscall_e3_getresuid(arg1, arg2, arg3)
#define uk_syscall4_fn118(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getresuid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn118(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getresuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn118(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getresuid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn118(...) \
	uk_syscall_r_getresuid(__VA_ARGS__)
#define uk_syscall_r0_fn118() \
	uk_syscall_r0_getresuid()
#define uk_syscall_r1_fn118(arg1) \
	uk_syscall_r1_getresuid(arg1)
#define uk_syscall_r2_fn118(arg1, arg2) \
	uk_syscall_r2_getresuid(arg1, arg2)
#define uk_syscall_r3_fn118(arg1, arg2, arg3) \
	uk_syscall_r3_getresuid(arg1, arg2, arg3)
#define uk_syscall_r4_fn118(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getresuid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn118(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getresuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn118(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getresuid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getresuid */
#define uk_syscall_fn118(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn118() _uk_syscall_e_enosys()
#define uk_syscall1_fn118(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn118(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn118(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn118(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn118(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn118(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn118(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn118() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn118(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn118(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn118(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn118(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn118(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn118(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getresuid */

#ifdef HAVE_uk_syscall_setresgid
#define uk_syscall_fn119(...) \
	uk_syscall_e_setresgid(__VA_ARGS__)
#define uk_syscall0_fn119() \
	uk_syscall_e0_setresgid()
#define uk_syscall1_fn119(arg1) \
	uk_syscall_e1_setresgid(arg1)
#define uk_syscall2_fn119(arg1, arg2) \
	uk_syscall_e2_setresgid(arg1, arg2)
#define uk_syscall3_fn119(arg1, arg2, arg3) \
	uk_syscall_e3_setresgid(arg1, arg2, arg3)
#define uk_syscall4_fn119(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setresgid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn119(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setresgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn119(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setresgid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn119(...) \
	uk_syscall_r_setresgid(__VA_ARGS__)
#define uk_syscall_r0_fn119() \
	uk_syscall_r0_setresgid()
#define uk_syscall_r1_fn119(arg1) \
	uk_syscall_r1_setresgid(arg1)
#define uk_syscall_r2_fn119(arg1, arg2) \
	uk_syscall_r2_setresgid(arg1, arg2)
#define uk_syscall_r3_fn119(arg1, arg2, arg3) \
	uk_syscall_r3_setresgid(arg1, arg2, arg3)
#define uk_syscall_r4_fn119(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setresgid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn119(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setresgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn119(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setresgid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setresgid */
#define uk_syscall_fn119(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn119() _uk_syscall_e_enosys()
#define uk_syscall1_fn119(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn119(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn119(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn119(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn119(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn119(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn119(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn119() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn119(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn119(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn119(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn119(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn119(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn119(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setresgid */

#ifdef HAVE_uk_syscall_getresgid
#define uk_syscall_fn120(...) \
	uk_syscall_e_getresgid(__VA_ARGS__)
#define uk_syscall0_fn120() \
	uk_syscall_e0_getresgid()
#define uk_syscall1_fn120(arg1) \
	uk_syscall_e1_getresgid(arg1)
#define uk_syscall2_fn120(arg1, arg2) \
	uk_syscall_e2_getresgid(arg1, arg2)
#define uk_syscall3_fn120(arg1, arg2, arg3) \
	uk_syscall_e3_getresgid(arg1, arg2, arg3)
#define uk_syscall4_fn120(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getresgid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn120(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getresgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn120(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getresgid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn120(...) \
	uk_syscall_r_getresgid(__VA_ARGS__)
#define uk_syscall_r0_fn120() \
	uk_syscall_r0_getresgid()
#define uk_syscall_r1_fn120(arg1) \
	uk_syscall_r1_getresgid(arg1)
#define uk_syscall_r2_fn120(arg1, arg2) \
	uk_syscall_r2_getresgid(arg1, arg2)
#define uk_syscall_r3_fn120(arg1, arg2, arg3) \
	uk_syscall_r3_getresgid(arg1, arg2, arg3)
#define uk_syscall_r4_fn120(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getresgid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn120(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getresgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn120(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getresgid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getresgid */
#define uk_syscall_fn120(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn120() _uk_syscall_e_enosys()
#define uk_syscall1_fn120(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn120(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn120(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn120(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn120(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn120(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn120(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn120() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn120(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn120(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn120(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn120(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn120(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn120(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getresgid */

#ifdef HAVE_uk_syscall_getpgid
#define uk_syscall_fn121(...) \
	uk_syscall_e_getpgid(__VA_ARGS__)
#define uk_syscall0_fn121() \
	uk_syscall_e0_getpgid()
#define uk_syscall1_fn121(arg1) \
	uk_syscall_e1_getpgid(arg1)
#define uk_syscall2_fn121(arg1, arg2) \
	uk_syscall_e2_getpgid(arg1, arg2)
#define uk_syscall3_fn121(arg1, arg2, arg3) \
	uk_syscall_e3_getpgid(arg1, arg2, arg3)
#define uk_syscall4_fn121(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getpgid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn121(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getpgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn121(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getpgid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn121(...) \
	uk_syscall_r_getpgid(__VA_ARGS__)
#define uk_syscall_r0_fn121() \
	uk_syscall_r0_getpgid()
#define uk_syscall_r1_fn121(arg1) \
	uk_syscall_r1_getpgid(arg1)
#define uk_syscall_r2_fn121(arg1, arg2) \
	uk_syscall_r2_getpgid(arg1, arg2)
#define uk_syscall_r3_fn121(arg1, arg2, arg3) \
	uk_syscall_r3_getpgid(arg1, arg2, arg3)
#define uk_syscall_r4_fn121(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getpgid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn121(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getpgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn121(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getpgid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getpgid */
#define uk_syscall_fn121(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn121() _uk_syscall_e_enosys()
#define uk_syscall1_fn121(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn121(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn121(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn121(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn121(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn121(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn121(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn121() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn121(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn121(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn121(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn121(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn121(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn121(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getpgid */

#ifdef HAVE_uk_syscall_setfsuid
#define uk_syscall_fn122(...) \
	uk_syscall_e_setfsuid(__VA_ARGS__)
#define uk_syscall0_fn122() \
	uk_syscall_e0_setfsuid()
#define uk_syscall1_fn122(arg1) \
	uk_syscall_e1_setfsuid(arg1)
#define uk_syscall2_fn122(arg1, arg2) \
	uk_syscall_e2_setfsuid(arg1, arg2)
#define uk_syscall3_fn122(arg1, arg2, arg3) \
	uk_syscall_e3_setfsuid(arg1, arg2, arg3)
#define uk_syscall4_fn122(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setfsuid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn122(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setfsuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn122(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setfsuid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn122(...) \
	uk_syscall_r_setfsuid(__VA_ARGS__)
#define uk_syscall_r0_fn122() \
	uk_syscall_r0_setfsuid()
#define uk_syscall_r1_fn122(arg1) \
	uk_syscall_r1_setfsuid(arg1)
#define uk_syscall_r2_fn122(arg1, arg2) \
	uk_syscall_r2_setfsuid(arg1, arg2)
#define uk_syscall_r3_fn122(arg1, arg2, arg3) \
	uk_syscall_r3_setfsuid(arg1, arg2, arg3)
#define uk_syscall_r4_fn122(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setfsuid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn122(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setfsuid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn122(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setfsuid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setfsuid */
#define uk_syscall_fn122(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn122() _uk_syscall_e_enosys()
#define uk_syscall1_fn122(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn122(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn122(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn122(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn122(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn122(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn122(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn122() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn122(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn122(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn122(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn122(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn122(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn122(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setfsuid */

#ifdef HAVE_uk_syscall_setfsgid
#define uk_syscall_fn123(...) \
	uk_syscall_e_setfsgid(__VA_ARGS__)
#define uk_syscall0_fn123() \
	uk_syscall_e0_setfsgid()
#define uk_syscall1_fn123(arg1) \
	uk_syscall_e1_setfsgid(arg1)
#define uk_syscall2_fn123(arg1, arg2) \
	uk_syscall_e2_setfsgid(arg1, arg2)
#define uk_syscall3_fn123(arg1, arg2, arg3) \
	uk_syscall_e3_setfsgid(arg1, arg2, arg3)
#define uk_syscall4_fn123(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setfsgid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn123(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setfsgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn123(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setfsgid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn123(...) \
	uk_syscall_r_setfsgid(__VA_ARGS__)
#define uk_syscall_r0_fn123() \
	uk_syscall_r0_setfsgid()
#define uk_syscall_r1_fn123(arg1) \
	uk_syscall_r1_setfsgid(arg1)
#define uk_syscall_r2_fn123(arg1, arg2) \
	uk_syscall_r2_setfsgid(arg1, arg2)
#define uk_syscall_r3_fn123(arg1, arg2, arg3) \
	uk_syscall_r3_setfsgid(arg1, arg2, arg3)
#define uk_syscall_r4_fn123(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setfsgid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn123(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setfsgid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn123(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setfsgid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setfsgid */
#define uk_syscall_fn123(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn123() _uk_syscall_e_enosys()
#define uk_syscall1_fn123(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn123(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn123(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn123(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn123(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn123(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn123(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn123() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn123(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn123(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn123(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn123(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn123(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn123(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setfsgid */

#ifdef HAVE_uk_syscall_getsid
#define uk_syscall_fn124(...) \
	uk_syscall_e_getsid(__VA_ARGS__)
#define uk_syscall0_fn124() \
	uk_syscall_e0_getsid()
#define uk_syscall1_fn124(arg1) \
	uk_syscall_e1_getsid(arg1)
#define uk_syscall2_fn124(arg1, arg2) \
	uk_syscall_e2_getsid(arg1, arg2)
#define uk_syscall3_fn124(arg1, arg2, arg3) \
	uk_syscall_e3_getsid(arg1, arg2, arg3)
#define uk_syscall4_fn124(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getsid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn124(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getsid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn124(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getsid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn124(...) \
	uk_syscall_r_getsid(__VA_ARGS__)
#define uk_syscall_r0_fn124() \
	uk_syscall_r0_getsid()
#define uk_syscall_r1_fn124(arg1) \
	uk_syscall_r1_getsid(arg1)
#define uk_syscall_r2_fn124(arg1, arg2) \
	uk_syscall_r2_getsid(arg1, arg2)
#define uk_syscall_r3_fn124(arg1, arg2, arg3) \
	uk_syscall_r3_getsid(arg1, arg2, arg3)
#define uk_syscall_r4_fn124(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getsid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn124(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getsid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn124(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getsid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getsid */
#define uk_syscall_fn124(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn124() _uk_syscall_e_enosys()
#define uk_syscall1_fn124(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn124(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn124(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn124(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn124(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn124(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn124(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn124() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn124(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn124(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn124(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn124(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn124(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn124(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getsid */

#ifdef HAVE_uk_syscall_capget
#define uk_syscall_fn125(...) \
	uk_syscall_e_capget(__VA_ARGS__)
#define uk_syscall0_fn125() \
	uk_syscall_e0_capget()
#define uk_syscall1_fn125(arg1) \
	uk_syscall_e1_capget(arg1)
#define uk_syscall2_fn125(arg1, arg2) \
	uk_syscall_e2_capget(arg1, arg2)
#define uk_syscall3_fn125(arg1, arg2, arg3) \
	uk_syscall_e3_capget(arg1, arg2, arg3)
#define uk_syscall4_fn125(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_capget(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn125(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_capget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn125(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_capget(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn125(...) \
	uk_syscall_r_capget(__VA_ARGS__)
#define uk_syscall_r0_fn125() \
	uk_syscall_r0_capget()
#define uk_syscall_r1_fn125(arg1) \
	uk_syscall_r1_capget(arg1)
#define uk_syscall_r2_fn125(arg1, arg2) \
	uk_syscall_r2_capget(arg1, arg2)
#define uk_syscall_r3_fn125(arg1, arg2, arg3) \
	uk_syscall_r3_capget(arg1, arg2, arg3)
#define uk_syscall_r4_fn125(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_capget(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn125(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_capget(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn125(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_capget(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_capget */
#define uk_syscall_fn125(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn125() _uk_syscall_e_enosys()
#define uk_syscall1_fn125(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn125(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn125(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn125(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn125(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn125(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn125(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn125() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn125(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn125(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn125(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn125(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn125(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn125(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_capget */

#ifdef HAVE_uk_syscall_capset
#define uk_syscall_fn126(...) \
	uk_syscall_e_capset(__VA_ARGS__)
#define uk_syscall0_fn126() \
	uk_syscall_e0_capset()
#define uk_syscall1_fn126(arg1) \
	uk_syscall_e1_capset(arg1)
#define uk_syscall2_fn126(arg1, arg2) \
	uk_syscall_e2_capset(arg1, arg2)
#define uk_syscall3_fn126(arg1, arg2, arg3) \
	uk_syscall_e3_capset(arg1, arg2, arg3)
#define uk_syscall4_fn126(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_capset(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn126(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_capset(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn126(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_capset(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn126(...) \
	uk_syscall_r_capset(__VA_ARGS__)
#define uk_syscall_r0_fn126() \
	uk_syscall_r0_capset()
#define uk_syscall_r1_fn126(arg1) \
	uk_syscall_r1_capset(arg1)
#define uk_syscall_r2_fn126(arg1, arg2) \
	uk_syscall_r2_capset(arg1, arg2)
#define uk_syscall_r3_fn126(arg1, arg2, arg3) \
	uk_syscall_r3_capset(arg1, arg2, arg3)
#define uk_syscall_r4_fn126(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_capset(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn126(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_capset(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn126(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_capset(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_capset */
#define uk_syscall_fn126(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn126() _uk_syscall_e_enosys()
#define uk_syscall1_fn126(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn126(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn126(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn126(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn126(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn126(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn126(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn126() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn126(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn126(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn126(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn126(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn126(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn126(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_capset */

#ifdef HAVE_uk_syscall_rt_sigpending
#define uk_syscall_fn127(...) \
	uk_syscall_e_rt_sigpending(__VA_ARGS__)
#define uk_syscall0_fn127() \
	uk_syscall_e0_rt_sigpending()
#define uk_syscall1_fn127(arg1) \
	uk_syscall_e1_rt_sigpending(arg1)
#define uk_syscall2_fn127(arg1, arg2) \
	uk_syscall_e2_rt_sigpending(arg1, arg2)
#define uk_syscall3_fn127(arg1, arg2, arg3) \
	uk_syscall_e3_rt_sigpending(arg1, arg2, arg3)
#define uk_syscall4_fn127(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_sigpending(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn127(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_sigpending(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn127(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_sigpending(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn127(...) \
	uk_syscall_r_rt_sigpending(__VA_ARGS__)
#define uk_syscall_r0_fn127() \
	uk_syscall_r0_rt_sigpending()
#define uk_syscall_r1_fn127(arg1) \
	uk_syscall_r1_rt_sigpending(arg1)
#define uk_syscall_r2_fn127(arg1, arg2) \
	uk_syscall_r2_rt_sigpending(arg1, arg2)
#define uk_syscall_r3_fn127(arg1, arg2, arg3) \
	uk_syscall_r3_rt_sigpending(arg1, arg2, arg3)
#define uk_syscall_r4_fn127(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_sigpending(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn127(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_sigpending(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn127(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_sigpending(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_sigpending */
#define uk_syscall_fn127(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn127() _uk_syscall_e_enosys()
#define uk_syscall1_fn127(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn127(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn127(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn127(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn127(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn127(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn127(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn127() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn127(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn127(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn127(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn127(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn127(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn127(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_sigpending */

#ifdef HAVE_uk_syscall_rt_sigtimedwait
#define uk_syscall_fn128(...) \
	uk_syscall_e_rt_sigtimedwait(__VA_ARGS__)
#define uk_syscall0_fn128() \
	uk_syscall_e0_rt_sigtimedwait()
#define uk_syscall1_fn128(arg1) \
	uk_syscall_e1_rt_sigtimedwait(arg1)
#define uk_syscall2_fn128(arg1, arg2) \
	uk_syscall_e2_rt_sigtimedwait(arg1, arg2)
#define uk_syscall3_fn128(arg1, arg2, arg3) \
	uk_syscall_e3_rt_sigtimedwait(arg1, arg2, arg3)
#define uk_syscall4_fn128(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_sigtimedwait(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn128(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_sigtimedwait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn128(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_sigtimedwait(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn128(...) \
	uk_syscall_r_rt_sigtimedwait(__VA_ARGS__)
#define uk_syscall_r0_fn128() \
	uk_syscall_r0_rt_sigtimedwait()
#define uk_syscall_r1_fn128(arg1) \
	uk_syscall_r1_rt_sigtimedwait(arg1)
#define uk_syscall_r2_fn128(arg1, arg2) \
	uk_syscall_r2_rt_sigtimedwait(arg1, arg2)
#define uk_syscall_r3_fn128(arg1, arg2, arg3) \
	uk_syscall_r3_rt_sigtimedwait(arg1, arg2, arg3)
#define uk_syscall_r4_fn128(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_sigtimedwait(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn128(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_sigtimedwait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn128(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_sigtimedwait(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_sigtimedwait */
#define uk_syscall_fn128(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn128() _uk_syscall_e_enosys()
#define uk_syscall1_fn128(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn128(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn128(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn128(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn128(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn128(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn128(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn128() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn128(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn128(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn128(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn128(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn128(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn128(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_sigtimedwait */

#ifdef HAVE_uk_syscall_rt_sigqueueinfo
#define uk_syscall_fn129(...) \
	uk_syscall_e_rt_sigqueueinfo(__VA_ARGS__)
#define uk_syscall0_fn129() \
	uk_syscall_e0_rt_sigqueueinfo()
#define uk_syscall1_fn129(arg1) \
	uk_syscall_e1_rt_sigqueueinfo(arg1)
#define uk_syscall2_fn129(arg1, arg2) \
	uk_syscall_e2_rt_sigqueueinfo(arg1, arg2)
#define uk_syscall3_fn129(arg1, arg2, arg3) \
	uk_syscall_e3_rt_sigqueueinfo(arg1, arg2, arg3)
#define uk_syscall4_fn129(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_sigqueueinfo(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn129(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_sigqueueinfo(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn129(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_sigqueueinfo(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn129(...) \
	uk_syscall_r_rt_sigqueueinfo(__VA_ARGS__)
#define uk_syscall_r0_fn129() \
	uk_syscall_r0_rt_sigqueueinfo()
#define uk_syscall_r1_fn129(arg1) \
	uk_syscall_r1_rt_sigqueueinfo(arg1)
#define uk_syscall_r2_fn129(arg1, arg2) \
	uk_syscall_r2_rt_sigqueueinfo(arg1, arg2)
#define uk_syscall_r3_fn129(arg1, arg2, arg3) \
	uk_syscall_r3_rt_sigqueueinfo(arg1, arg2, arg3)
#define uk_syscall_r4_fn129(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_sigqueueinfo(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn129(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_sigqueueinfo(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn129(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_sigqueueinfo(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_sigqueueinfo */
#define uk_syscall_fn129(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn129() _uk_syscall_e_enosys()
#define uk_syscall1_fn129(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn129(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn129(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn129(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn129(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn129(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn129(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn129() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn129(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn129(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn129(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn129(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn129(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn129(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_sigqueueinfo */

#ifdef HAVE_uk_syscall_rt_sigsuspend
#define uk_syscall_fn130(...) \
	uk_syscall_e_rt_sigsuspend(__VA_ARGS__)
#define uk_syscall0_fn130() \
	uk_syscall_e0_rt_sigsuspend()
#define uk_syscall1_fn130(arg1) \
	uk_syscall_e1_rt_sigsuspend(arg1)
#define uk_syscall2_fn130(arg1, arg2) \
	uk_syscall_e2_rt_sigsuspend(arg1, arg2)
#define uk_syscall3_fn130(arg1, arg2, arg3) \
	uk_syscall_e3_rt_sigsuspend(arg1, arg2, arg3)
#define uk_syscall4_fn130(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_sigsuspend(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn130(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_sigsuspend(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn130(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_sigsuspend(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn130(...) \
	uk_syscall_r_rt_sigsuspend(__VA_ARGS__)
#define uk_syscall_r0_fn130() \
	uk_syscall_r0_rt_sigsuspend()
#define uk_syscall_r1_fn130(arg1) \
	uk_syscall_r1_rt_sigsuspend(arg1)
#define uk_syscall_r2_fn130(arg1, arg2) \
	uk_syscall_r2_rt_sigsuspend(arg1, arg2)
#define uk_syscall_r3_fn130(arg1, arg2, arg3) \
	uk_syscall_r3_rt_sigsuspend(arg1, arg2, arg3)
#define uk_syscall_r4_fn130(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_sigsuspend(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn130(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_sigsuspend(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn130(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_sigsuspend(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_sigsuspend */
#define uk_syscall_fn130(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn130() _uk_syscall_e_enosys()
#define uk_syscall1_fn130(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn130(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn130(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn130(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn130(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn130(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn130(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn130() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn130(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn130(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn130(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn130(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn130(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn130(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_sigsuspend */

#ifdef HAVE_uk_syscall_sigaltstack
#define uk_syscall_fn131(...) \
	uk_syscall_e_sigaltstack(__VA_ARGS__)
#define uk_syscall0_fn131() \
	uk_syscall_e0_sigaltstack()
#define uk_syscall1_fn131(arg1) \
	uk_syscall_e1_sigaltstack(arg1)
#define uk_syscall2_fn131(arg1, arg2) \
	uk_syscall_e2_sigaltstack(arg1, arg2)
#define uk_syscall3_fn131(arg1, arg2, arg3) \
	uk_syscall_e3_sigaltstack(arg1, arg2, arg3)
#define uk_syscall4_fn131(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sigaltstack(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn131(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sigaltstack(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn131(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sigaltstack(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn131(...) \
	uk_syscall_r_sigaltstack(__VA_ARGS__)
#define uk_syscall_r0_fn131() \
	uk_syscall_r0_sigaltstack()
#define uk_syscall_r1_fn131(arg1) \
	uk_syscall_r1_sigaltstack(arg1)
#define uk_syscall_r2_fn131(arg1, arg2) \
	uk_syscall_r2_sigaltstack(arg1, arg2)
#define uk_syscall_r3_fn131(arg1, arg2, arg3) \
	uk_syscall_r3_sigaltstack(arg1, arg2, arg3)
#define uk_syscall_r4_fn131(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sigaltstack(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn131(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sigaltstack(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn131(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sigaltstack(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sigaltstack */
#define uk_syscall_fn131(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn131() _uk_syscall_e_enosys()
#define uk_syscall1_fn131(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn131(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn131(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn131(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn131(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn131(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn131(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn131() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn131(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn131(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn131(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn131(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn131(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn131(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sigaltstack */

#ifdef HAVE_uk_syscall_utime
#define uk_syscall_fn132(...) \
	uk_syscall_e_utime(__VA_ARGS__)
#define uk_syscall0_fn132() \
	uk_syscall_e0_utime()
#define uk_syscall1_fn132(arg1) \
	uk_syscall_e1_utime(arg1)
#define uk_syscall2_fn132(arg1, arg2) \
	uk_syscall_e2_utime(arg1, arg2)
#define uk_syscall3_fn132(arg1, arg2, arg3) \
	uk_syscall_e3_utime(arg1, arg2, arg3)
#define uk_syscall4_fn132(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_utime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn132(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_utime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn132(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_utime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn132(...) \
	uk_syscall_r_utime(__VA_ARGS__)
#define uk_syscall_r0_fn132() \
	uk_syscall_r0_utime()
#define uk_syscall_r1_fn132(arg1) \
	uk_syscall_r1_utime(arg1)
#define uk_syscall_r2_fn132(arg1, arg2) \
	uk_syscall_r2_utime(arg1, arg2)
#define uk_syscall_r3_fn132(arg1, arg2, arg3) \
	uk_syscall_r3_utime(arg1, arg2, arg3)
#define uk_syscall_r4_fn132(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_utime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn132(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_utime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn132(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_utime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_utime */
#define uk_syscall_fn132(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn132() _uk_syscall_e_enosys()
#define uk_syscall1_fn132(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn132(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn132(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn132(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn132(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn132(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn132(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn132() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn132(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn132(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn132(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn132(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn132(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn132(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_utime */

#ifdef HAVE_uk_syscall_mknod
#define uk_syscall_fn133(...) \
	uk_syscall_e_mknod(__VA_ARGS__)
#define uk_syscall0_fn133() \
	uk_syscall_e0_mknod()
#define uk_syscall1_fn133(arg1) \
	uk_syscall_e1_mknod(arg1)
#define uk_syscall2_fn133(arg1, arg2) \
	uk_syscall_e2_mknod(arg1, arg2)
#define uk_syscall3_fn133(arg1, arg2, arg3) \
	uk_syscall_e3_mknod(arg1, arg2, arg3)
#define uk_syscall4_fn133(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mknod(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn133(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mknod(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn133(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mknod(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn133(...) \
	uk_syscall_r_mknod(__VA_ARGS__)
#define uk_syscall_r0_fn133() \
	uk_syscall_r0_mknod()
#define uk_syscall_r1_fn133(arg1) \
	uk_syscall_r1_mknod(arg1)
#define uk_syscall_r2_fn133(arg1, arg2) \
	uk_syscall_r2_mknod(arg1, arg2)
#define uk_syscall_r3_fn133(arg1, arg2, arg3) \
	uk_syscall_r3_mknod(arg1, arg2, arg3)
#define uk_syscall_r4_fn133(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mknod(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn133(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mknod(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn133(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mknod(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mknod */
#define uk_syscall_fn133(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn133() _uk_syscall_e_enosys()
#define uk_syscall1_fn133(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn133(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn133(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn133(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn133(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn133(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn133(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn133() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn133(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn133(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn133(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn133(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn133(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn133(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mknod */

#ifdef HAVE_uk_syscall_uselib
#define uk_syscall_fn134(...) \
	uk_syscall_e_uselib(__VA_ARGS__)
#define uk_syscall0_fn134() \
	uk_syscall_e0_uselib()
#define uk_syscall1_fn134(arg1) \
	uk_syscall_e1_uselib(arg1)
#define uk_syscall2_fn134(arg1, arg2) \
	uk_syscall_e2_uselib(arg1, arg2)
#define uk_syscall3_fn134(arg1, arg2, arg3) \
	uk_syscall_e3_uselib(arg1, arg2, arg3)
#define uk_syscall4_fn134(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_uselib(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn134(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_uselib(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn134(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_uselib(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn134(...) \
	uk_syscall_r_uselib(__VA_ARGS__)
#define uk_syscall_r0_fn134() \
	uk_syscall_r0_uselib()
#define uk_syscall_r1_fn134(arg1) \
	uk_syscall_r1_uselib(arg1)
#define uk_syscall_r2_fn134(arg1, arg2) \
	uk_syscall_r2_uselib(arg1, arg2)
#define uk_syscall_r3_fn134(arg1, arg2, arg3) \
	uk_syscall_r3_uselib(arg1, arg2, arg3)
#define uk_syscall_r4_fn134(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_uselib(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn134(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_uselib(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn134(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_uselib(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_uselib */
#define uk_syscall_fn134(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn134() _uk_syscall_e_enosys()
#define uk_syscall1_fn134(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn134(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn134(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn134(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn134(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn134(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn134(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn134() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn134(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn134(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn134(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn134(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn134(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn134(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_uselib */

#ifdef HAVE_uk_syscall_personality
#define uk_syscall_fn135(...) \
	uk_syscall_e_personality(__VA_ARGS__)
#define uk_syscall0_fn135() \
	uk_syscall_e0_personality()
#define uk_syscall1_fn135(arg1) \
	uk_syscall_e1_personality(arg1)
#define uk_syscall2_fn135(arg1, arg2) \
	uk_syscall_e2_personality(arg1, arg2)
#define uk_syscall3_fn135(arg1, arg2, arg3) \
	uk_syscall_e3_personality(arg1, arg2, arg3)
#define uk_syscall4_fn135(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_personality(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn135(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_personality(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn135(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_personality(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn135(...) \
	uk_syscall_r_personality(__VA_ARGS__)
#define uk_syscall_r0_fn135() \
	uk_syscall_r0_personality()
#define uk_syscall_r1_fn135(arg1) \
	uk_syscall_r1_personality(arg1)
#define uk_syscall_r2_fn135(arg1, arg2) \
	uk_syscall_r2_personality(arg1, arg2)
#define uk_syscall_r3_fn135(arg1, arg2, arg3) \
	uk_syscall_r3_personality(arg1, arg2, arg3)
#define uk_syscall_r4_fn135(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_personality(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn135(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_personality(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn135(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_personality(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_personality */
#define uk_syscall_fn135(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn135() _uk_syscall_e_enosys()
#define uk_syscall1_fn135(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn135(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn135(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn135(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn135(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn135(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn135(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn135() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn135(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn135(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn135(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn135(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn135(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn135(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_personality */

#ifdef HAVE_uk_syscall_ustat
#define uk_syscall_fn136(...) \
	uk_syscall_e_ustat(__VA_ARGS__)
#define uk_syscall0_fn136() \
	uk_syscall_e0_ustat()
#define uk_syscall1_fn136(arg1) \
	uk_syscall_e1_ustat(arg1)
#define uk_syscall2_fn136(arg1, arg2) \
	uk_syscall_e2_ustat(arg1, arg2)
#define uk_syscall3_fn136(arg1, arg2, arg3) \
	uk_syscall_e3_ustat(arg1, arg2, arg3)
#define uk_syscall4_fn136(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ustat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn136(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ustat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn136(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ustat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn136(...) \
	uk_syscall_r_ustat(__VA_ARGS__)
#define uk_syscall_r0_fn136() \
	uk_syscall_r0_ustat()
#define uk_syscall_r1_fn136(arg1) \
	uk_syscall_r1_ustat(arg1)
#define uk_syscall_r2_fn136(arg1, arg2) \
	uk_syscall_r2_ustat(arg1, arg2)
#define uk_syscall_r3_fn136(arg1, arg2, arg3) \
	uk_syscall_r3_ustat(arg1, arg2, arg3)
#define uk_syscall_r4_fn136(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ustat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn136(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ustat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn136(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ustat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ustat */
#define uk_syscall_fn136(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn136() _uk_syscall_e_enosys()
#define uk_syscall1_fn136(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn136(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn136(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn136(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn136(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn136(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn136(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn136() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn136(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn136(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn136(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn136(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn136(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn136(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ustat */

#ifdef HAVE_uk_syscall_statfs
#define uk_syscall_fn137(...) \
	uk_syscall_e_statfs(__VA_ARGS__)
#define uk_syscall0_fn137() \
	uk_syscall_e0_statfs()
#define uk_syscall1_fn137(arg1) \
	uk_syscall_e1_statfs(arg1)
#define uk_syscall2_fn137(arg1, arg2) \
	uk_syscall_e2_statfs(arg1, arg2)
#define uk_syscall3_fn137(arg1, arg2, arg3) \
	uk_syscall_e3_statfs(arg1, arg2, arg3)
#define uk_syscall4_fn137(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_statfs(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn137(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_statfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn137(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_statfs(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn137(...) \
	uk_syscall_r_statfs(__VA_ARGS__)
#define uk_syscall_r0_fn137() \
	uk_syscall_r0_statfs()
#define uk_syscall_r1_fn137(arg1) \
	uk_syscall_r1_statfs(arg1)
#define uk_syscall_r2_fn137(arg1, arg2) \
	uk_syscall_r2_statfs(arg1, arg2)
#define uk_syscall_r3_fn137(arg1, arg2, arg3) \
	uk_syscall_r3_statfs(arg1, arg2, arg3)
#define uk_syscall_r4_fn137(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_statfs(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn137(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_statfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn137(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_statfs(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_statfs */
#define uk_syscall_fn137(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn137() _uk_syscall_e_enosys()
#define uk_syscall1_fn137(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn137(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn137(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn137(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn137(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn137(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn137(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn137() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn137(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn137(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn137(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn137(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn137(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn137(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_statfs */

#ifdef HAVE_uk_syscall_fstatfs
#define uk_syscall_fn138(...) \
	uk_syscall_e_fstatfs(__VA_ARGS__)
#define uk_syscall0_fn138() \
	uk_syscall_e0_fstatfs()
#define uk_syscall1_fn138(arg1) \
	uk_syscall_e1_fstatfs(arg1)
#define uk_syscall2_fn138(arg1, arg2) \
	uk_syscall_e2_fstatfs(arg1, arg2)
#define uk_syscall3_fn138(arg1, arg2, arg3) \
	uk_syscall_e3_fstatfs(arg1, arg2, arg3)
#define uk_syscall4_fn138(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fstatfs(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn138(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fstatfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn138(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fstatfs(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn138(...) \
	uk_syscall_r_fstatfs(__VA_ARGS__)
#define uk_syscall_r0_fn138() \
	uk_syscall_r0_fstatfs()
#define uk_syscall_r1_fn138(arg1) \
	uk_syscall_r1_fstatfs(arg1)
#define uk_syscall_r2_fn138(arg1, arg2) \
	uk_syscall_r2_fstatfs(arg1, arg2)
#define uk_syscall_r3_fn138(arg1, arg2, arg3) \
	uk_syscall_r3_fstatfs(arg1, arg2, arg3)
#define uk_syscall_r4_fn138(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fstatfs(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn138(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fstatfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn138(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fstatfs(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fstatfs */
#define uk_syscall_fn138(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn138() _uk_syscall_e_enosys()
#define uk_syscall1_fn138(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn138(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn138(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn138(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn138(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn138(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn138(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn138() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn138(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn138(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn138(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn138(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn138(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn138(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fstatfs */

#ifdef HAVE_uk_syscall_sysfs
#define uk_syscall_fn139(...) \
	uk_syscall_e_sysfs(__VA_ARGS__)
#define uk_syscall0_fn139() \
	uk_syscall_e0_sysfs()
#define uk_syscall1_fn139(arg1) \
	uk_syscall_e1_sysfs(arg1)
#define uk_syscall2_fn139(arg1, arg2) \
	uk_syscall_e2_sysfs(arg1, arg2)
#define uk_syscall3_fn139(arg1, arg2, arg3) \
	uk_syscall_e3_sysfs(arg1, arg2, arg3)
#define uk_syscall4_fn139(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sysfs(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn139(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sysfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn139(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sysfs(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn139(...) \
	uk_syscall_r_sysfs(__VA_ARGS__)
#define uk_syscall_r0_fn139() \
	uk_syscall_r0_sysfs()
#define uk_syscall_r1_fn139(arg1) \
	uk_syscall_r1_sysfs(arg1)
#define uk_syscall_r2_fn139(arg1, arg2) \
	uk_syscall_r2_sysfs(arg1, arg2)
#define uk_syscall_r3_fn139(arg1, arg2, arg3) \
	uk_syscall_r3_sysfs(arg1, arg2, arg3)
#define uk_syscall_r4_fn139(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sysfs(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn139(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sysfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn139(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sysfs(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sysfs */
#define uk_syscall_fn139(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn139() _uk_syscall_e_enosys()
#define uk_syscall1_fn139(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn139(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn139(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn139(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn139(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn139(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn139(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn139() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn139(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn139(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn139(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn139(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn139(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn139(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sysfs */

#ifdef HAVE_uk_syscall_getpriority
#define uk_syscall_fn140(...) \
	uk_syscall_e_getpriority(__VA_ARGS__)
#define uk_syscall0_fn140() \
	uk_syscall_e0_getpriority()
#define uk_syscall1_fn140(arg1) \
	uk_syscall_e1_getpriority(arg1)
#define uk_syscall2_fn140(arg1, arg2) \
	uk_syscall_e2_getpriority(arg1, arg2)
#define uk_syscall3_fn140(arg1, arg2, arg3) \
	uk_syscall_e3_getpriority(arg1, arg2, arg3)
#define uk_syscall4_fn140(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getpriority(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn140(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getpriority(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn140(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getpriority(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn140(...) \
	uk_syscall_r_getpriority(__VA_ARGS__)
#define uk_syscall_r0_fn140() \
	uk_syscall_r0_getpriority()
#define uk_syscall_r1_fn140(arg1) \
	uk_syscall_r1_getpriority(arg1)
#define uk_syscall_r2_fn140(arg1, arg2) \
	uk_syscall_r2_getpriority(arg1, arg2)
#define uk_syscall_r3_fn140(arg1, arg2, arg3) \
	uk_syscall_r3_getpriority(arg1, arg2, arg3)
#define uk_syscall_r4_fn140(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getpriority(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn140(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getpriority(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn140(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getpriority(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getpriority */
#define uk_syscall_fn140(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn140() _uk_syscall_e_enosys()
#define uk_syscall1_fn140(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn140(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn140(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn140(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn140(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn140(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn140(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn140() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn140(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn140(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn140(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn140(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn140(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn140(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getpriority */

#ifdef HAVE_uk_syscall_setpriority
#define uk_syscall_fn141(...) \
	uk_syscall_e_setpriority(__VA_ARGS__)
#define uk_syscall0_fn141() \
	uk_syscall_e0_setpriority()
#define uk_syscall1_fn141(arg1) \
	uk_syscall_e1_setpriority(arg1)
#define uk_syscall2_fn141(arg1, arg2) \
	uk_syscall_e2_setpriority(arg1, arg2)
#define uk_syscall3_fn141(arg1, arg2, arg3) \
	uk_syscall_e3_setpriority(arg1, arg2, arg3)
#define uk_syscall4_fn141(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setpriority(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn141(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setpriority(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn141(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setpriority(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn141(...) \
	uk_syscall_r_setpriority(__VA_ARGS__)
#define uk_syscall_r0_fn141() \
	uk_syscall_r0_setpriority()
#define uk_syscall_r1_fn141(arg1) \
	uk_syscall_r1_setpriority(arg1)
#define uk_syscall_r2_fn141(arg1, arg2) \
	uk_syscall_r2_setpriority(arg1, arg2)
#define uk_syscall_r3_fn141(arg1, arg2, arg3) \
	uk_syscall_r3_setpriority(arg1, arg2, arg3)
#define uk_syscall_r4_fn141(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setpriority(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn141(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setpriority(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn141(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setpriority(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setpriority */
#define uk_syscall_fn141(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn141() _uk_syscall_e_enosys()
#define uk_syscall1_fn141(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn141(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn141(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn141(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn141(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn141(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn141(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn141() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn141(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn141(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn141(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn141(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn141(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn141(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setpriority */

#ifdef HAVE_uk_syscall_sched_setparam
#define uk_syscall_fn142(...) \
	uk_syscall_e_sched_setparam(__VA_ARGS__)
#define uk_syscall0_fn142() \
	uk_syscall_e0_sched_setparam()
#define uk_syscall1_fn142(arg1) \
	uk_syscall_e1_sched_setparam(arg1)
#define uk_syscall2_fn142(arg1, arg2) \
	uk_syscall_e2_sched_setparam(arg1, arg2)
#define uk_syscall3_fn142(arg1, arg2, arg3) \
	uk_syscall_e3_sched_setparam(arg1, arg2, arg3)
#define uk_syscall4_fn142(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_setparam(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn142(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_setparam(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn142(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_setparam(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn142(...) \
	uk_syscall_r_sched_setparam(__VA_ARGS__)
#define uk_syscall_r0_fn142() \
	uk_syscall_r0_sched_setparam()
#define uk_syscall_r1_fn142(arg1) \
	uk_syscall_r1_sched_setparam(arg1)
#define uk_syscall_r2_fn142(arg1, arg2) \
	uk_syscall_r2_sched_setparam(arg1, arg2)
#define uk_syscall_r3_fn142(arg1, arg2, arg3) \
	uk_syscall_r3_sched_setparam(arg1, arg2, arg3)
#define uk_syscall_r4_fn142(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_setparam(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn142(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_setparam(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn142(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_setparam(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_setparam */
#define uk_syscall_fn142(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn142() _uk_syscall_e_enosys()
#define uk_syscall1_fn142(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn142(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn142(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn142(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn142(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn142(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn142(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn142() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn142(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn142(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn142(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn142(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn142(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn142(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_setparam */

#ifdef HAVE_uk_syscall_sched_getparam
#define uk_syscall_fn143(...) \
	uk_syscall_e_sched_getparam(__VA_ARGS__)
#define uk_syscall0_fn143() \
	uk_syscall_e0_sched_getparam()
#define uk_syscall1_fn143(arg1) \
	uk_syscall_e1_sched_getparam(arg1)
#define uk_syscall2_fn143(arg1, arg2) \
	uk_syscall_e2_sched_getparam(arg1, arg2)
#define uk_syscall3_fn143(arg1, arg2, arg3) \
	uk_syscall_e3_sched_getparam(arg1, arg2, arg3)
#define uk_syscall4_fn143(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_getparam(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn143(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_getparam(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn143(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_getparam(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn143(...) \
	uk_syscall_r_sched_getparam(__VA_ARGS__)
#define uk_syscall_r0_fn143() \
	uk_syscall_r0_sched_getparam()
#define uk_syscall_r1_fn143(arg1) \
	uk_syscall_r1_sched_getparam(arg1)
#define uk_syscall_r2_fn143(arg1, arg2) \
	uk_syscall_r2_sched_getparam(arg1, arg2)
#define uk_syscall_r3_fn143(arg1, arg2, arg3) \
	uk_syscall_r3_sched_getparam(arg1, arg2, arg3)
#define uk_syscall_r4_fn143(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_getparam(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn143(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_getparam(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn143(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_getparam(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_getparam */
#define uk_syscall_fn143(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn143() _uk_syscall_e_enosys()
#define uk_syscall1_fn143(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn143(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn143(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn143(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn143(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn143(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn143(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn143() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn143(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn143(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn143(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn143(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn143(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn143(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_getparam */

#ifdef HAVE_uk_syscall_sched_setscheduler
#define uk_syscall_fn144(...) \
	uk_syscall_e_sched_setscheduler(__VA_ARGS__)
#define uk_syscall0_fn144() \
	uk_syscall_e0_sched_setscheduler()
#define uk_syscall1_fn144(arg1) \
	uk_syscall_e1_sched_setscheduler(arg1)
#define uk_syscall2_fn144(arg1, arg2) \
	uk_syscall_e2_sched_setscheduler(arg1, arg2)
#define uk_syscall3_fn144(arg1, arg2, arg3) \
	uk_syscall_e3_sched_setscheduler(arg1, arg2, arg3)
#define uk_syscall4_fn144(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_setscheduler(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn144(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_setscheduler(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn144(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_setscheduler(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn144(...) \
	uk_syscall_r_sched_setscheduler(__VA_ARGS__)
#define uk_syscall_r0_fn144() \
	uk_syscall_r0_sched_setscheduler()
#define uk_syscall_r1_fn144(arg1) \
	uk_syscall_r1_sched_setscheduler(arg1)
#define uk_syscall_r2_fn144(arg1, arg2) \
	uk_syscall_r2_sched_setscheduler(arg1, arg2)
#define uk_syscall_r3_fn144(arg1, arg2, arg3) \
	uk_syscall_r3_sched_setscheduler(arg1, arg2, arg3)
#define uk_syscall_r4_fn144(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_setscheduler(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn144(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_setscheduler(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn144(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_setscheduler(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_setscheduler */
#define uk_syscall_fn144(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn144() _uk_syscall_e_enosys()
#define uk_syscall1_fn144(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn144(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn144(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn144(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn144(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn144(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn144(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn144() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn144(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn144(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn144(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn144(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn144(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn144(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_setscheduler */

#ifdef HAVE_uk_syscall_sched_getscheduler
#define uk_syscall_fn145(...) \
	uk_syscall_e_sched_getscheduler(__VA_ARGS__)
#define uk_syscall0_fn145() \
	uk_syscall_e0_sched_getscheduler()
#define uk_syscall1_fn145(arg1) \
	uk_syscall_e1_sched_getscheduler(arg1)
#define uk_syscall2_fn145(arg1, arg2) \
	uk_syscall_e2_sched_getscheduler(arg1, arg2)
#define uk_syscall3_fn145(arg1, arg2, arg3) \
	uk_syscall_e3_sched_getscheduler(arg1, arg2, arg3)
#define uk_syscall4_fn145(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_getscheduler(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn145(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_getscheduler(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn145(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_getscheduler(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn145(...) \
	uk_syscall_r_sched_getscheduler(__VA_ARGS__)
#define uk_syscall_r0_fn145() \
	uk_syscall_r0_sched_getscheduler()
#define uk_syscall_r1_fn145(arg1) \
	uk_syscall_r1_sched_getscheduler(arg1)
#define uk_syscall_r2_fn145(arg1, arg2) \
	uk_syscall_r2_sched_getscheduler(arg1, arg2)
#define uk_syscall_r3_fn145(arg1, arg2, arg3) \
	uk_syscall_r3_sched_getscheduler(arg1, arg2, arg3)
#define uk_syscall_r4_fn145(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_getscheduler(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn145(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_getscheduler(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn145(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_getscheduler(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_getscheduler */
#define uk_syscall_fn145(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn145() _uk_syscall_e_enosys()
#define uk_syscall1_fn145(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn145(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn145(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn145(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn145(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn145(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn145(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn145() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn145(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn145(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn145(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn145(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn145(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn145(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_getscheduler */

#ifdef HAVE_uk_syscall_sched_get_priority_max
#define uk_syscall_fn146(...) \
	uk_syscall_e_sched_get_priority_max(__VA_ARGS__)
#define uk_syscall0_fn146() \
	uk_syscall_e0_sched_get_priority_max()
#define uk_syscall1_fn146(arg1) \
	uk_syscall_e1_sched_get_priority_max(arg1)
#define uk_syscall2_fn146(arg1, arg2) \
	uk_syscall_e2_sched_get_priority_max(arg1, arg2)
#define uk_syscall3_fn146(arg1, arg2, arg3) \
	uk_syscall_e3_sched_get_priority_max(arg1, arg2, arg3)
#define uk_syscall4_fn146(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_get_priority_max(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn146(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_get_priority_max(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn146(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_get_priority_max(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn146(...) \
	uk_syscall_r_sched_get_priority_max(__VA_ARGS__)
#define uk_syscall_r0_fn146() \
	uk_syscall_r0_sched_get_priority_max()
#define uk_syscall_r1_fn146(arg1) \
	uk_syscall_r1_sched_get_priority_max(arg1)
#define uk_syscall_r2_fn146(arg1, arg2) \
	uk_syscall_r2_sched_get_priority_max(arg1, arg2)
#define uk_syscall_r3_fn146(arg1, arg2, arg3) \
	uk_syscall_r3_sched_get_priority_max(arg1, arg2, arg3)
#define uk_syscall_r4_fn146(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_get_priority_max(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn146(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_get_priority_max(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn146(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_get_priority_max(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_get_priority_max */
#define uk_syscall_fn146(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn146() _uk_syscall_e_enosys()
#define uk_syscall1_fn146(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn146(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn146(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn146(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn146(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn146(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn146(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn146() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn146(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn146(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn146(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn146(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn146(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn146(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_get_priority_max */

#ifdef HAVE_uk_syscall_sched_get_priority_min
#define uk_syscall_fn147(...) \
	uk_syscall_e_sched_get_priority_min(__VA_ARGS__)
#define uk_syscall0_fn147() \
	uk_syscall_e0_sched_get_priority_min()
#define uk_syscall1_fn147(arg1) \
	uk_syscall_e1_sched_get_priority_min(arg1)
#define uk_syscall2_fn147(arg1, arg2) \
	uk_syscall_e2_sched_get_priority_min(arg1, arg2)
#define uk_syscall3_fn147(arg1, arg2, arg3) \
	uk_syscall_e3_sched_get_priority_min(arg1, arg2, arg3)
#define uk_syscall4_fn147(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_get_priority_min(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn147(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_get_priority_min(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn147(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_get_priority_min(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn147(...) \
	uk_syscall_r_sched_get_priority_min(__VA_ARGS__)
#define uk_syscall_r0_fn147() \
	uk_syscall_r0_sched_get_priority_min()
#define uk_syscall_r1_fn147(arg1) \
	uk_syscall_r1_sched_get_priority_min(arg1)
#define uk_syscall_r2_fn147(arg1, arg2) \
	uk_syscall_r2_sched_get_priority_min(arg1, arg2)
#define uk_syscall_r3_fn147(arg1, arg2, arg3) \
	uk_syscall_r3_sched_get_priority_min(arg1, arg2, arg3)
#define uk_syscall_r4_fn147(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_get_priority_min(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn147(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_get_priority_min(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn147(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_get_priority_min(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_get_priority_min */
#define uk_syscall_fn147(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn147() _uk_syscall_e_enosys()
#define uk_syscall1_fn147(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn147(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn147(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn147(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn147(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn147(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn147(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn147() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn147(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn147(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn147(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn147(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn147(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn147(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_get_priority_min */

#ifdef HAVE_uk_syscall_sched_rr_get_interval
#define uk_syscall_fn148(...) \
	uk_syscall_e_sched_rr_get_interval(__VA_ARGS__)
#define uk_syscall0_fn148() \
	uk_syscall_e0_sched_rr_get_interval()
#define uk_syscall1_fn148(arg1) \
	uk_syscall_e1_sched_rr_get_interval(arg1)
#define uk_syscall2_fn148(arg1, arg2) \
	uk_syscall_e2_sched_rr_get_interval(arg1, arg2)
#define uk_syscall3_fn148(arg1, arg2, arg3) \
	uk_syscall_e3_sched_rr_get_interval(arg1, arg2, arg3)
#define uk_syscall4_fn148(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_rr_get_interval(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn148(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_rr_get_interval(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn148(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_rr_get_interval(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn148(...) \
	uk_syscall_r_sched_rr_get_interval(__VA_ARGS__)
#define uk_syscall_r0_fn148() \
	uk_syscall_r0_sched_rr_get_interval()
#define uk_syscall_r1_fn148(arg1) \
	uk_syscall_r1_sched_rr_get_interval(arg1)
#define uk_syscall_r2_fn148(arg1, arg2) \
	uk_syscall_r2_sched_rr_get_interval(arg1, arg2)
#define uk_syscall_r3_fn148(arg1, arg2, arg3) \
	uk_syscall_r3_sched_rr_get_interval(arg1, arg2, arg3)
#define uk_syscall_r4_fn148(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_rr_get_interval(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn148(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_rr_get_interval(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn148(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_rr_get_interval(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_rr_get_interval */
#define uk_syscall_fn148(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn148() _uk_syscall_e_enosys()
#define uk_syscall1_fn148(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn148(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn148(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn148(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn148(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn148(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn148(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn148() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn148(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn148(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn148(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn148(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn148(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn148(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_rr_get_interval */

#ifdef HAVE_uk_syscall_mlock
#define uk_syscall_fn149(...) \
	uk_syscall_e_mlock(__VA_ARGS__)
#define uk_syscall0_fn149() \
	uk_syscall_e0_mlock()
#define uk_syscall1_fn149(arg1) \
	uk_syscall_e1_mlock(arg1)
#define uk_syscall2_fn149(arg1, arg2) \
	uk_syscall_e2_mlock(arg1, arg2)
#define uk_syscall3_fn149(arg1, arg2, arg3) \
	uk_syscall_e3_mlock(arg1, arg2, arg3)
#define uk_syscall4_fn149(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mlock(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn149(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mlock(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn149(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mlock(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn149(...) \
	uk_syscall_r_mlock(__VA_ARGS__)
#define uk_syscall_r0_fn149() \
	uk_syscall_r0_mlock()
#define uk_syscall_r1_fn149(arg1) \
	uk_syscall_r1_mlock(arg1)
#define uk_syscall_r2_fn149(arg1, arg2) \
	uk_syscall_r2_mlock(arg1, arg2)
#define uk_syscall_r3_fn149(arg1, arg2, arg3) \
	uk_syscall_r3_mlock(arg1, arg2, arg3)
#define uk_syscall_r4_fn149(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mlock(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn149(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mlock(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn149(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mlock(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mlock */
#define uk_syscall_fn149(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn149() _uk_syscall_e_enosys()
#define uk_syscall1_fn149(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn149(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn149(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn149(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn149(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn149(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn149(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn149() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn149(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn149(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn149(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn149(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn149(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn149(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mlock */

#ifdef HAVE_uk_syscall_munlock
#define uk_syscall_fn150(...) \
	uk_syscall_e_munlock(__VA_ARGS__)
#define uk_syscall0_fn150() \
	uk_syscall_e0_munlock()
#define uk_syscall1_fn150(arg1) \
	uk_syscall_e1_munlock(arg1)
#define uk_syscall2_fn150(arg1, arg2) \
	uk_syscall_e2_munlock(arg1, arg2)
#define uk_syscall3_fn150(arg1, arg2, arg3) \
	uk_syscall_e3_munlock(arg1, arg2, arg3)
#define uk_syscall4_fn150(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_munlock(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn150(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_munlock(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn150(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_munlock(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn150(...) \
	uk_syscall_r_munlock(__VA_ARGS__)
#define uk_syscall_r0_fn150() \
	uk_syscall_r0_munlock()
#define uk_syscall_r1_fn150(arg1) \
	uk_syscall_r1_munlock(arg1)
#define uk_syscall_r2_fn150(arg1, arg2) \
	uk_syscall_r2_munlock(arg1, arg2)
#define uk_syscall_r3_fn150(arg1, arg2, arg3) \
	uk_syscall_r3_munlock(arg1, arg2, arg3)
#define uk_syscall_r4_fn150(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_munlock(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn150(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_munlock(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn150(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_munlock(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_munlock */
#define uk_syscall_fn150(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn150() _uk_syscall_e_enosys()
#define uk_syscall1_fn150(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn150(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn150(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn150(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn150(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn150(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn150(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn150() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn150(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn150(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn150(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn150(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn150(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn150(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_munlock */

#ifdef HAVE_uk_syscall_mlockall
#define uk_syscall_fn151(...) \
	uk_syscall_e_mlockall(__VA_ARGS__)
#define uk_syscall0_fn151() \
	uk_syscall_e0_mlockall()
#define uk_syscall1_fn151(arg1) \
	uk_syscall_e1_mlockall(arg1)
#define uk_syscall2_fn151(arg1, arg2) \
	uk_syscall_e2_mlockall(arg1, arg2)
#define uk_syscall3_fn151(arg1, arg2, arg3) \
	uk_syscall_e3_mlockall(arg1, arg2, arg3)
#define uk_syscall4_fn151(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mlockall(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn151(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mlockall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn151(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mlockall(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn151(...) \
	uk_syscall_r_mlockall(__VA_ARGS__)
#define uk_syscall_r0_fn151() \
	uk_syscall_r0_mlockall()
#define uk_syscall_r1_fn151(arg1) \
	uk_syscall_r1_mlockall(arg1)
#define uk_syscall_r2_fn151(arg1, arg2) \
	uk_syscall_r2_mlockall(arg1, arg2)
#define uk_syscall_r3_fn151(arg1, arg2, arg3) \
	uk_syscall_r3_mlockall(arg1, arg2, arg3)
#define uk_syscall_r4_fn151(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mlockall(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn151(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mlockall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn151(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mlockall(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mlockall */
#define uk_syscall_fn151(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn151() _uk_syscall_e_enosys()
#define uk_syscall1_fn151(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn151(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn151(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn151(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn151(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn151(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn151(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn151() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn151(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn151(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn151(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn151(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn151(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn151(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mlockall */

#ifdef HAVE_uk_syscall_munlockall
#define uk_syscall_fn152(...) \
	uk_syscall_e_munlockall(__VA_ARGS__)
#define uk_syscall0_fn152() \
	uk_syscall_e0_munlockall()
#define uk_syscall1_fn152(arg1) \
	uk_syscall_e1_munlockall(arg1)
#define uk_syscall2_fn152(arg1, arg2) \
	uk_syscall_e2_munlockall(arg1, arg2)
#define uk_syscall3_fn152(arg1, arg2, arg3) \
	uk_syscall_e3_munlockall(arg1, arg2, arg3)
#define uk_syscall4_fn152(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_munlockall(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn152(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_munlockall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn152(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_munlockall(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn152(...) \
	uk_syscall_r_munlockall(__VA_ARGS__)
#define uk_syscall_r0_fn152() \
	uk_syscall_r0_munlockall()
#define uk_syscall_r1_fn152(arg1) \
	uk_syscall_r1_munlockall(arg1)
#define uk_syscall_r2_fn152(arg1, arg2) \
	uk_syscall_r2_munlockall(arg1, arg2)
#define uk_syscall_r3_fn152(arg1, arg2, arg3) \
	uk_syscall_r3_munlockall(arg1, arg2, arg3)
#define uk_syscall_r4_fn152(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_munlockall(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn152(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_munlockall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn152(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_munlockall(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_munlockall */
#define uk_syscall_fn152(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn152() _uk_syscall_e_enosys()
#define uk_syscall1_fn152(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn152(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn152(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn152(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn152(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn152(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn152(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn152() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn152(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn152(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn152(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn152(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn152(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn152(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_munlockall */

#ifdef HAVE_uk_syscall_vhangup
#define uk_syscall_fn153(...) \
	uk_syscall_e_vhangup(__VA_ARGS__)
#define uk_syscall0_fn153() \
	uk_syscall_e0_vhangup()
#define uk_syscall1_fn153(arg1) \
	uk_syscall_e1_vhangup(arg1)
#define uk_syscall2_fn153(arg1, arg2) \
	uk_syscall_e2_vhangup(arg1, arg2)
#define uk_syscall3_fn153(arg1, arg2, arg3) \
	uk_syscall_e3_vhangup(arg1, arg2, arg3)
#define uk_syscall4_fn153(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_vhangup(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn153(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_vhangup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn153(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_vhangup(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn153(...) \
	uk_syscall_r_vhangup(__VA_ARGS__)
#define uk_syscall_r0_fn153() \
	uk_syscall_r0_vhangup()
#define uk_syscall_r1_fn153(arg1) \
	uk_syscall_r1_vhangup(arg1)
#define uk_syscall_r2_fn153(arg1, arg2) \
	uk_syscall_r2_vhangup(arg1, arg2)
#define uk_syscall_r3_fn153(arg1, arg2, arg3) \
	uk_syscall_r3_vhangup(arg1, arg2, arg3)
#define uk_syscall_r4_fn153(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_vhangup(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn153(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_vhangup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn153(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_vhangup(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_vhangup */
#define uk_syscall_fn153(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn153() _uk_syscall_e_enosys()
#define uk_syscall1_fn153(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn153(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn153(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn153(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn153(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn153(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn153(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn153() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn153(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn153(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn153(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn153(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn153(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn153(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_vhangup */

#ifdef HAVE_uk_syscall_modify_ldt
#define uk_syscall_fn154(...) \
	uk_syscall_e_modify_ldt(__VA_ARGS__)
#define uk_syscall0_fn154() \
	uk_syscall_e0_modify_ldt()
#define uk_syscall1_fn154(arg1) \
	uk_syscall_e1_modify_ldt(arg1)
#define uk_syscall2_fn154(arg1, arg2) \
	uk_syscall_e2_modify_ldt(arg1, arg2)
#define uk_syscall3_fn154(arg1, arg2, arg3) \
	uk_syscall_e3_modify_ldt(arg1, arg2, arg3)
#define uk_syscall4_fn154(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_modify_ldt(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn154(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_modify_ldt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn154(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_modify_ldt(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn154(...) \
	uk_syscall_r_modify_ldt(__VA_ARGS__)
#define uk_syscall_r0_fn154() \
	uk_syscall_r0_modify_ldt()
#define uk_syscall_r1_fn154(arg1) \
	uk_syscall_r1_modify_ldt(arg1)
#define uk_syscall_r2_fn154(arg1, arg2) \
	uk_syscall_r2_modify_ldt(arg1, arg2)
#define uk_syscall_r3_fn154(arg1, arg2, arg3) \
	uk_syscall_r3_modify_ldt(arg1, arg2, arg3)
#define uk_syscall_r4_fn154(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_modify_ldt(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn154(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_modify_ldt(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn154(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_modify_ldt(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_modify_ldt */
#define uk_syscall_fn154(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn154() _uk_syscall_e_enosys()
#define uk_syscall1_fn154(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn154(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn154(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn154(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn154(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn154(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn154(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn154() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn154(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn154(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn154(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn154(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn154(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn154(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_modify_ldt */

#ifdef HAVE_uk_syscall_pivot_root
#define uk_syscall_fn155(...) \
	uk_syscall_e_pivot_root(__VA_ARGS__)
#define uk_syscall0_fn155() \
	uk_syscall_e0_pivot_root()
#define uk_syscall1_fn155(arg1) \
	uk_syscall_e1_pivot_root(arg1)
#define uk_syscall2_fn155(arg1, arg2) \
	uk_syscall_e2_pivot_root(arg1, arg2)
#define uk_syscall3_fn155(arg1, arg2, arg3) \
	uk_syscall_e3_pivot_root(arg1, arg2, arg3)
#define uk_syscall4_fn155(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pivot_root(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn155(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pivot_root(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn155(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pivot_root(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn155(...) \
	uk_syscall_r_pivot_root(__VA_ARGS__)
#define uk_syscall_r0_fn155() \
	uk_syscall_r0_pivot_root()
#define uk_syscall_r1_fn155(arg1) \
	uk_syscall_r1_pivot_root(arg1)
#define uk_syscall_r2_fn155(arg1, arg2) \
	uk_syscall_r2_pivot_root(arg1, arg2)
#define uk_syscall_r3_fn155(arg1, arg2, arg3) \
	uk_syscall_r3_pivot_root(arg1, arg2, arg3)
#define uk_syscall_r4_fn155(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pivot_root(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn155(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pivot_root(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn155(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pivot_root(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pivot_root */
#define uk_syscall_fn155(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn155() _uk_syscall_e_enosys()
#define uk_syscall1_fn155(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn155(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn155(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn155(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn155(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn155(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn155(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn155() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn155(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn155(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn155(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn155(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn155(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn155(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pivot_root */

#ifdef HAVE_uk_syscall__sysctl
#define uk_syscall_fn156(...) \
	uk_syscall_e__sysctl(__VA_ARGS__)
#define uk_syscall0_fn156() \
	uk_syscall_e0__sysctl()
#define uk_syscall1_fn156(arg1) \
	uk_syscall_e1__sysctl(arg1)
#define uk_syscall2_fn156(arg1, arg2) \
	uk_syscall_e2__sysctl(arg1, arg2)
#define uk_syscall3_fn156(arg1, arg2, arg3) \
	uk_syscall_e3__sysctl(arg1, arg2, arg3)
#define uk_syscall4_fn156(arg1, arg2, arg3, arg4) \
	uk_syscall_e4__sysctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn156(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5__sysctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn156(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6__sysctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn156(...) \
	uk_syscall_r__sysctl(__VA_ARGS__)
#define uk_syscall_r0_fn156() \
	uk_syscall_r0__sysctl()
#define uk_syscall_r1_fn156(arg1) \
	uk_syscall_r1__sysctl(arg1)
#define uk_syscall_r2_fn156(arg1, arg2) \
	uk_syscall_r2__sysctl(arg1, arg2)
#define uk_syscall_r3_fn156(arg1, arg2, arg3) \
	uk_syscall_r3__sysctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn156(arg1, arg2, arg3, arg4) \
	uk_syscall_r4__sysctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn156(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5__sysctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn156(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6__sysctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall__sysctl */
#define uk_syscall_fn156(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn156() _uk_syscall_e_enosys()
#define uk_syscall1_fn156(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn156(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn156(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn156(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn156(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn156(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn156(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn156() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn156(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn156(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn156(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn156(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn156(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn156(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall__sysctl */

#ifdef HAVE_uk_syscall_prctl
#define uk_syscall_fn157(...) \
	uk_syscall_e_prctl(__VA_ARGS__)
#define uk_syscall0_fn157() \
	uk_syscall_e0_prctl()
#define uk_syscall1_fn157(arg1) \
	uk_syscall_e1_prctl(arg1)
#define uk_syscall2_fn157(arg1, arg2) \
	uk_syscall_e2_prctl(arg1, arg2)
#define uk_syscall3_fn157(arg1, arg2, arg3) \
	uk_syscall_e3_prctl(arg1, arg2, arg3)
#define uk_syscall4_fn157(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_prctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn157(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_prctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn157(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_prctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn157(...) \
	uk_syscall_r_prctl(__VA_ARGS__)
#define uk_syscall_r0_fn157() \
	uk_syscall_r0_prctl()
#define uk_syscall_r1_fn157(arg1) \
	uk_syscall_r1_prctl(arg1)
#define uk_syscall_r2_fn157(arg1, arg2) \
	uk_syscall_r2_prctl(arg1, arg2)
#define uk_syscall_r3_fn157(arg1, arg2, arg3) \
	uk_syscall_r3_prctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn157(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_prctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn157(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_prctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn157(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_prctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_prctl */
#define uk_syscall_fn157(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn157() _uk_syscall_e_enosys()
#define uk_syscall1_fn157(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn157(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn157(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn157(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn157(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn157(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn157(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn157() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn157(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn157(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn157(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn157(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn157(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn157(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_prctl */

#ifdef HAVE_uk_syscall_arch_prctl
#define uk_syscall_fn158(...) \
	uk_syscall_e_arch_prctl(__VA_ARGS__)
#define uk_syscall0_fn158() \
	uk_syscall_e0_arch_prctl()
#define uk_syscall1_fn158(arg1) \
	uk_syscall_e1_arch_prctl(arg1)
#define uk_syscall2_fn158(arg1, arg2) \
	uk_syscall_e2_arch_prctl(arg1, arg2)
#define uk_syscall3_fn158(arg1, arg2, arg3) \
	uk_syscall_e3_arch_prctl(arg1, arg2, arg3)
#define uk_syscall4_fn158(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_arch_prctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn158(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_arch_prctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn158(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_arch_prctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn158(...) \
	uk_syscall_r_arch_prctl(__VA_ARGS__)
#define uk_syscall_r0_fn158() \
	uk_syscall_r0_arch_prctl()
#define uk_syscall_r1_fn158(arg1) \
	uk_syscall_r1_arch_prctl(arg1)
#define uk_syscall_r2_fn158(arg1, arg2) \
	uk_syscall_r2_arch_prctl(arg1, arg2)
#define uk_syscall_r3_fn158(arg1, arg2, arg3) \
	uk_syscall_r3_arch_prctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn158(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_arch_prctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn158(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_arch_prctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn158(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_arch_prctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_arch_prctl */
#define uk_syscall_fn158(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn158() _uk_syscall_e_enosys()
#define uk_syscall1_fn158(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn158(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn158(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn158(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn158(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn158(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn158(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn158() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn158(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn158(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn158(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn158(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn158(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn158(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_arch_prctl */

#ifdef HAVE_uk_syscall_adjtimex
#define uk_syscall_fn159(...) \
	uk_syscall_e_adjtimex(__VA_ARGS__)
#define uk_syscall0_fn159() \
	uk_syscall_e0_adjtimex()
#define uk_syscall1_fn159(arg1) \
	uk_syscall_e1_adjtimex(arg1)
#define uk_syscall2_fn159(arg1, arg2) \
	uk_syscall_e2_adjtimex(arg1, arg2)
#define uk_syscall3_fn159(arg1, arg2, arg3) \
	uk_syscall_e3_adjtimex(arg1, arg2, arg3)
#define uk_syscall4_fn159(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_adjtimex(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn159(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_adjtimex(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn159(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_adjtimex(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn159(...) \
	uk_syscall_r_adjtimex(__VA_ARGS__)
#define uk_syscall_r0_fn159() \
	uk_syscall_r0_adjtimex()
#define uk_syscall_r1_fn159(arg1) \
	uk_syscall_r1_adjtimex(arg1)
#define uk_syscall_r2_fn159(arg1, arg2) \
	uk_syscall_r2_adjtimex(arg1, arg2)
#define uk_syscall_r3_fn159(arg1, arg2, arg3) \
	uk_syscall_r3_adjtimex(arg1, arg2, arg3)
#define uk_syscall_r4_fn159(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_adjtimex(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn159(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_adjtimex(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn159(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_adjtimex(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_adjtimex */
#define uk_syscall_fn159(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn159() _uk_syscall_e_enosys()
#define uk_syscall1_fn159(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn159(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn159(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn159(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn159(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn159(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn159(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn159() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn159(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn159(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn159(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn159(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn159(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn159(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_adjtimex */

#ifdef HAVE_uk_syscall_setrlimit
#define uk_syscall_fn160(...) \
	uk_syscall_e_setrlimit(__VA_ARGS__)
#define uk_syscall0_fn160() \
	uk_syscall_e0_setrlimit()
#define uk_syscall1_fn160(arg1) \
	uk_syscall_e1_setrlimit(arg1)
#define uk_syscall2_fn160(arg1, arg2) \
	uk_syscall_e2_setrlimit(arg1, arg2)
#define uk_syscall3_fn160(arg1, arg2, arg3) \
	uk_syscall_e3_setrlimit(arg1, arg2, arg3)
#define uk_syscall4_fn160(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setrlimit(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn160(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setrlimit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn160(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setrlimit(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn160(...) \
	uk_syscall_r_setrlimit(__VA_ARGS__)
#define uk_syscall_r0_fn160() \
	uk_syscall_r0_setrlimit()
#define uk_syscall_r1_fn160(arg1) \
	uk_syscall_r1_setrlimit(arg1)
#define uk_syscall_r2_fn160(arg1, arg2) \
	uk_syscall_r2_setrlimit(arg1, arg2)
#define uk_syscall_r3_fn160(arg1, arg2, arg3) \
	uk_syscall_r3_setrlimit(arg1, arg2, arg3)
#define uk_syscall_r4_fn160(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setrlimit(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn160(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setrlimit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn160(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setrlimit(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setrlimit */
#define uk_syscall_fn160(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn160() _uk_syscall_e_enosys()
#define uk_syscall1_fn160(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn160(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn160(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn160(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn160(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn160(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn160(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn160() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn160(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn160(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn160(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn160(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn160(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn160(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setrlimit */

#ifdef HAVE_uk_syscall_chroot
#define uk_syscall_fn161(...) \
	uk_syscall_e_chroot(__VA_ARGS__)
#define uk_syscall0_fn161() \
	uk_syscall_e0_chroot()
#define uk_syscall1_fn161(arg1) \
	uk_syscall_e1_chroot(arg1)
#define uk_syscall2_fn161(arg1, arg2) \
	uk_syscall_e2_chroot(arg1, arg2)
#define uk_syscall3_fn161(arg1, arg2, arg3) \
	uk_syscall_e3_chroot(arg1, arg2, arg3)
#define uk_syscall4_fn161(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_chroot(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn161(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_chroot(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn161(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_chroot(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn161(...) \
	uk_syscall_r_chroot(__VA_ARGS__)
#define uk_syscall_r0_fn161() \
	uk_syscall_r0_chroot()
#define uk_syscall_r1_fn161(arg1) \
	uk_syscall_r1_chroot(arg1)
#define uk_syscall_r2_fn161(arg1, arg2) \
	uk_syscall_r2_chroot(arg1, arg2)
#define uk_syscall_r3_fn161(arg1, arg2, arg3) \
	uk_syscall_r3_chroot(arg1, arg2, arg3)
#define uk_syscall_r4_fn161(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_chroot(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn161(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_chroot(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn161(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_chroot(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_chroot */
#define uk_syscall_fn161(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn161() _uk_syscall_e_enosys()
#define uk_syscall1_fn161(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn161(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn161(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn161(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn161(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn161(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn161(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn161() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn161(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn161(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn161(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn161(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn161(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn161(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_chroot */

#ifdef HAVE_uk_syscall_sync
#define uk_syscall_fn162(...) \
	uk_syscall_e_sync(__VA_ARGS__)
#define uk_syscall0_fn162() \
	uk_syscall_e0_sync()
#define uk_syscall1_fn162(arg1) \
	uk_syscall_e1_sync(arg1)
#define uk_syscall2_fn162(arg1, arg2) \
	uk_syscall_e2_sync(arg1, arg2)
#define uk_syscall3_fn162(arg1, arg2, arg3) \
	uk_syscall_e3_sync(arg1, arg2, arg3)
#define uk_syscall4_fn162(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sync(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn162(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn162(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sync(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn162(...) \
	uk_syscall_r_sync(__VA_ARGS__)
#define uk_syscall_r0_fn162() \
	uk_syscall_r0_sync()
#define uk_syscall_r1_fn162(arg1) \
	uk_syscall_r1_sync(arg1)
#define uk_syscall_r2_fn162(arg1, arg2) \
	uk_syscall_r2_sync(arg1, arg2)
#define uk_syscall_r3_fn162(arg1, arg2, arg3) \
	uk_syscall_r3_sync(arg1, arg2, arg3)
#define uk_syscall_r4_fn162(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sync(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn162(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sync(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn162(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sync(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sync */
#define uk_syscall_fn162(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn162() _uk_syscall_e_enosys()
#define uk_syscall1_fn162(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn162(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn162(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn162(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn162(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn162(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn162(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn162() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn162(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn162(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn162(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn162(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn162(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn162(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sync */

#ifdef HAVE_uk_syscall_acct
#define uk_syscall_fn163(...) \
	uk_syscall_e_acct(__VA_ARGS__)
#define uk_syscall0_fn163() \
	uk_syscall_e0_acct()
#define uk_syscall1_fn163(arg1) \
	uk_syscall_e1_acct(arg1)
#define uk_syscall2_fn163(arg1, arg2) \
	uk_syscall_e2_acct(arg1, arg2)
#define uk_syscall3_fn163(arg1, arg2, arg3) \
	uk_syscall_e3_acct(arg1, arg2, arg3)
#define uk_syscall4_fn163(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_acct(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn163(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_acct(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn163(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_acct(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn163(...) \
	uk_syscall_r_acct(__VA_ARGS__)
#define uk_syscall_r0_fn163() \
	uk_syscall_r0_acct()
#define uk_syscall_r1_fn163(arg1) \
	uk_syscall_r1_acct(arg1)
#define uk_syscall_r2_fn163(arg1, arg2) \
	uk_syscall_r2_acct(arg1, arg2)
#define uk_syscall_r3_fn163(arg1, arg2, arg3) \
	uk_syscall_r3_acct(arg1, arg2, arg3)
#define uk_syscall_r4_fn163(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_acct(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn163(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_acct(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn163(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_acct(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_acct */
#define uk_syscall_fn163(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn163() _uk_syscall_e_enosys()
#define uk_syscall1_fn163(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn163(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn163(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn163(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn163(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn163(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn163(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn163() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn163(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn163(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn163(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn163(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn163(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn163(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_acct */

#ifdef HAVE_uk_syscall_settimeofday
#define uk_syscall_fn164(...) \
	uk_syscall_e_settimeofday(__VA_ARGS__)
#define uk_syscall0_fn164() \
	uk_syscall_e0_settimeofday()
#define uk_syscall1_fn164(arg1) \
	uk_syscall_e1_settimeofday(arg1)
#define uk_syscall2_fn164(arg1, arg2) \
	uk_syscall_e2_settimeofday(arg1, arg2)
#define uk_syscall3_fn164(arg1, arg2, arg3) \
	uk_syscall_e3_settimeofday(arg1, arg2, arg3)
#define uk_syscall4_fn164(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_settimeofday(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn164(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_settimeofday(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn164(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_settimeofday(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn164(...) \
	uk_syscall_r_settimeofday(__VA_ARGS__)
#define uk_syscall_r0_fn164() \
	uk_syscall_r0_settimeofday()
#define uk_syscall_r1_fn164(arg1) \
	uk_syscall_r1_settimeofday(arg1)
#define uk_syscall_r2_fn164(arg1, arg2) \
	uk_syscall_r2_settimeofday(arg1, arg2)
#define uk_syscall_r3_fn164(arg1, arg2, arg3) \
	uk_syscall_r3_settimeofday(arg1, arg2, arg3)
#define uk_syscall_r4_fn164(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_settimeofday(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn164(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_settimeofday(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn164(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_settimeofday(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_settimeofday */
#define uk_syscall_fn164(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn164() _uk_syscall_e_enosys()
#define uk_syscall1_fn164(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn164(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn164(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn164(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn164(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn164(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn164(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn164() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn164(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn164(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn164(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn164(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn164(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn164(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_settimeofday */

#ifdef HAVE_uk_syscall_mount
#define uk_syscall_fn165(...) \
	uk_syscall_e_mount(__VA_ARGS__)
#define uk_syscall0_fn165() \
	uk_syscall_e0_mount()
#define uk_syscall1_fn165(arg1) \
	uk_syscall_e1_mount(arg1)
#define uk_syscall2_fn165(arg1, arg2) \
	uk_syscall_e2_mount(arg1, arg2)
#define uk_syscall3_fn165(arg1, arg2, arg3) \
	uk_syscall_e3_mount(arg1, arg2, arg3)
#define uk_syscall4_fn165(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mount(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn165(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn165(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mount(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn165(...) \
	uk_syscall_r_mount(__VA_ARGS__)
#define uk_syscall_r0_fn165() \
	uk_syscall_r0_mount()
#define uk_syscall_r1_fn165(arg1) \
	uk_syscall_r1_mount(arg1)
#define uk_syscall_r2_fn165(arg1, arg2) \
	uk_syscall_r2_mount(arg1, arg2)
#define uk_syscall_r3_fn165(arg1, arg2, arg3) \
	uk_syscall_r3_mount(arg1, arg2, arg3)
#define uk_syscall_r4_fn165(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mount(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn165(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn165(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mount(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mount */
#define uk_syscall_fn165(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn165() _uk_syscall_e_enosys()
#define uk_syscall1_fn165(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn165(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn165(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn165(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn165(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn165(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn165(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn165() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn165(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn165(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn165(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn165(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn165(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn165(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mount */

#ifdef HAVE_uk_syscall_umount2
#define uk_syscall_fn166(...) \
	uk_syscall_e_umount2(__VA_ARGS__)
#define uk_syscall0_fn166() \
	uk_syscall_e0_umount2()
#define uk_syscall1_fn166(arg1) \
	uk_syscall_e1_umount2(arg1)
#define uk_syscall2_fn166(arg1, arg2) \
	uk_syscall_e2_umount2(arg1, arg2)
#define uk_syscall3_fn166(arg1, arg2, arg3) \
	uk_syscall_e3_umount2(arg1, arg2, arg3)
#define uk_syscall4_fn166(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_umount2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn166(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_umount2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn166(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_umount2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn166(...) \
	uk_syscall_r_umount2(__VA_ARGS__)
#define uk_syscall_r0_fn166() \
	uk_syscall_r0_umount2()
#define uk_syscall_r1_fn166(arg1) \
	uk_syscall_r1_umount2(arg1)
#define uk_syscall_r2_fn166(arg1, arg2) \
	uk_syscall_r2_umount2(arg1, arg2)
#define uk_syscall_r3_fn166(arg1, arg2, arg3) \
	uk_syscall_r3_umount2(arg1, arg2, arg3)
#define uk_syscall_r4_fn166(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_umount2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn166(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_umount2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn166(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_umount2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_umount2 */
#define uk_syscall_fn166(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn166() _uk_syscall_e_enosys()
#define uk_syscall1_fn166(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn166(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn166(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn166(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn166(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn166(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn166(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn166() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn166(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn166(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn166(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn166(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn166(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn166(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_umount2 */

#ifdef HAVE_uk_syscall_swapon
#define uk_syscall_fn167(...) \
	uk_syscall_e_swapon(__VA_ARGS__)
#define uk_syscall0_fn167() \
	uk_syscall_e0_swapon()
#define uk_syscall1_fn167(arg1) \
	uk_syscall_e1_swapon(arg1)
#define uk_syscall2_fn167(arg1, arg2) \
	uk_syscall_e2_swapon(arg1, arg2)
#define uk_syscall3_fn167(arg1, arg2, arg3) \
	uk_syscall_e3_swapon(arg1, arg2, arg3)
#define uk_syscall4_fn167(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_swapon(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn167(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_swapon(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn167(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_swapon(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn167(...) \
	uk_syscall_r_swapon(__VA_ARGS__)
#define uk_syscall_r0_fn167() \
	uk_syscall_r0_swapon()
#define uk_syscall_r1_fn167(arg1) \
	uk_syscall_r1_swapon(arg1)
#define uk_syscall_r2_fn167(arg1, arg2) \
	uk_syscall_r2_swapon(arg1, arg2)
#define uk_syscall_r3_fn167(arg1, arg2, arg3) \
	uk_syscall_r3_swapon(arg1, arg2, arg3)
#define uk_syscall_r4_fn167(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_swapon(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn167(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_swapon(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn167(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_swapon(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_swapon */
#define uk_syscall_fn167(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn167() _uk_syscall_e_enosys()
#define uk_syscall1_fn167(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn167(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn167(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn167(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn167(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn167(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn167(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn167() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn167(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn167(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn167(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn167(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn167(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn167(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_swapon */

#ifdef HAVE_uk_syscall_swapoff
#define uk_syscall_fn168(...) \
	uk_syscall_e_swapoff(__VA_ARGS__)
#define uk_syscall0_fn168() \
	uk_syscall_e0_swapoff()
#define uk_syscall1_fn168(arg1) \
	uk_syscall_e1_swapoff(arg1)
#define uk_syscall2_fn168(arg1, arg2) \
	uk_syscall_e2_swapoff(arg1, arg2)
#define uk_syscall3_fn168(arg1, arg2, arg3) \
	uk_syscall_e3_swapoff(arg1, arg2, arg3)
#define uk_syscall4_fn168(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_swapoff(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn168(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_swapoff(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn168(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_swapoff(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn168(...) \
	uk_syscall_r_swapoff(__VA_ARGS__)
#define uk_syscall_r0_fn168() \
	uk_syscall_r0_swapoff()
#define uk_syscall_r1_fn168(arg1) \
	uk_syscall_r1_swapoff(arg1)
#define uk_syscall_r2_fn168(arg1, arg2) \
	uk_syscall_r2_swapoff(arg1, arg2)
#define uk_syscall_r3_fn168(arg1, arg2, arg3) \
	uk_syscall_r3_swapoff(arg1, arg2, arg3)
#define uk_syscall_r4_fn168(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_swapoff(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn168(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_swapoff(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn168(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_swapoff(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_swapoff */
#define uk_syscall_fn168(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn168() _uk_syscall_e_enosys()
#define uk_syscall1_fn168(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn168(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn168(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn168(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn168(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn168(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn168(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn168() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn168(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn168(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn168(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn168(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn168(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn168(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_swapoff */

#ifdef HAVE_uk_syscall_reboot
#define uk_syscall_fn169(...) \
	uk_syscall_e_reboot(__VA_ARGS__)
#define uk_syscall0_fn169() \
	uk_syscall_e0_reboot()
#define uk_syscall1_fn169(arg1) \
	uk_syscall_e1_reboot(arg1)
#define uk_syscall2_fn169(arg1, arg2) \
	uk_syscall_e2_reboot(arg1, arg2)
#define uk_syscall3_fn169(arg1, arg2, arg3) \
	uk_syscall_e3_reboot(arg1, arg2, arg3)
#define uk_syscall4_fn169(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_reboot(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn169(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_reboot(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn169(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_reboot(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn169(...) \
	uk_syscall_r_reboot(__VA_ARGS__)
#define uk_syscall_r0_fn169() \
	uk_syscall_r0_reboot()
#define uk_syscall_r1_fn169(arg1) \
	uk_syscall_r1_reboot(arg1)
#define uk_syscall_r2_fn169(arg1, arg2) \
	uk_syscall_r2_reboot(arg1, arg2)
#define uk_syscall_r3_fn169(arg1, arg2, arg3) \
	uk_syscall_r3_reboot(arg1, arg2, arg3)
#define uk_syscall_r4_fn169(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_reboot(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn169(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_reboot(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn169(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_reboot(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_reboot */
#define uk_syscall_fn169(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn169() _uk_syscall_e_enosys()
#define uk_syscall1_fn169(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn169(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn169(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn169(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn169(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn169(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn169(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn169() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn169(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn169(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn169(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn169(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn169(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn169(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_reboot */

#ifdef HAVE_uk_syscall_sethostname
#define uk_syscall_fn170(...) \
	uk_syscall_e_sethostname(__VA_ARGS__)
#define uk_syscall0_fn170() \
	uk_syscall_e0_sethostname()
#define uk_syscall1_fn170(arg1) \
	uk_syscall_e1_sethostname(arg1)
#define uk_syscall2_fn170(arg1, arg2) \
	uk_syscall_e2_sethostname(arg1, arg2)
#define uk_syscall3_fn170(arg1, arg2, arg3) \
	uk_syscall_e3_sethostname(arg1, arg2, arg3)
#define uk_syscall4_fn170(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sethostname(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn170(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sethostname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn170(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sethostname(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn170(...) \
	uk_syscall_r_sethostname(__VA_ARGS__)
#define uk_syscall_r0_fn170() \
	uk_syscall_r0_sethostname()
#define uk_syscall_r1_fn170(arg1) \
	uk_syscall_r1_sethostname(arg1)
#define uk_syscall_r2_fn170(arg1, arg2) \
	uk_syscall_r2_sethostname(arg1, arg2)
#define uk_syscall_r3_fn170(arg1, arg2, arg3) \
	uk_syscall_r3_sethostname(arg1, arg2, arg3)
#define uk_syscall_r4_fn170(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sethostname(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn170(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sethostname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn170(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sethostname(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sethostname */
#define uk_syscall_fn170(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn170() _uk_syscall_e_enosys()
#define uk_syscall1_fn170(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn170(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn170(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn170(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn170(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn170(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn170(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn170() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn170(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn170(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn170(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn170(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn170(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn170(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sethostname */

#ifdef HAVE_uk_syscall_setdomainname
#define uk_syscall_fn171(...) \
	uk_syscall_e_setdomainname(__VA_ARGS__)
#define uk_syscall0_fn171() \
	uk_syscall_e0_setdomainname()
#define uk_syscall1_fn171(arg1) \
	uk_syscall_e1_setdomainname(arg1)
#define uk_syscall2_fn171(arg1, arg2) \
	uk_syscall_e2_setdomainname(arg1, arg2)
#define uk_syscall3_fn171(arg1, arg2, arg3) \
	uk_syscall_e3_setdomainname(arg1, arg2, arg3)
#define uk_syscall4_fn171(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setdomainname(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn171(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setdomainname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn171(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setdomainname(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn171(...) \
	uk_syscall_r_setdomainname(__VA_ARGS__)
#define uk_syscall_r0_fn171() \
	uk_syscall_r0_setdomainname()
#define uk_syscall_r1_fn171(arg1) \
	uk_syscall_r1_setdomainname(arg1)
#define uk_syscall_r2_fn171(arg1, arg2) \
	uk_syscall_r2_setdomainname(arg1, arg2)
#define uk_syscall_r3_fn171(arg1, arg2, arg3) \
	uk_syscall_r3_setdomainname(arg1, arg2, arg3)
#define uk_syscall_r4_fn171(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setdomainname(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn171(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setdomainname(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn171(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setdomainname(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setdomainname */
#define uk_syscall_fn171(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn171() _uk_syscall_e_enosys()
#define uk_syscall1_fn171(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn171(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn171(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn171(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn171(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn171(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn171(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn171() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn171(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn171(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn171(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn171(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn171(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn171(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setdomainname */

#ifdef HAVE_uk_syscall_iopl
#define uk_syscall_fn172(...) \
	uk_syscall_e_iopl(__VA_ARGS__)
#define uk_syscall0_fn172() \
	uk_syscall_e0_iopl()
#define uk_syscall1_fn172(arg1) \
	uk_syscall_e1_iopl(arg1)
#define uk_syscall2_fn172(arg1, arg2) \
	uk_syscall_e2_iopl(arg1, arg2)
#define uk_syscall3_fn172(arg1, arg2, arg3) \
	uk_syscall_e3_iopl(arg1, arg2, arg3)
#define uk_syscall4_fn172(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_iopl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn172(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_iopl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn172(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_iopl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn172(...) \
	uk_syscall_r_iopl(__VA_ARGS__)
#define uk_syscall_r0_fn172() \
	uk_syscall_r0_iopl()
#define uk_syscall_r1_fn172(arg1) \
	uk_syscall_r1_iopl(arg1)
#define uk_syscall_r2_fn172(arg1, arg2) \
	uk_syscall_r2_iopl(arg1, arg2)
#define uk_syscall_r3_fn172(arg1, arg2, arg3) \
	uk_syscall_r3_iopl(arg1, arg2, arg3)
#define uk_syscall_r4_fn172(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_iopl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn172(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_iopl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn172(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_iopl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_iopl */
#define uk_syscall_fn172(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn172() _uk_syscall_e_enosys()
#define uk_syscall1_fn172(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn172(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn172(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn172(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn172(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn172(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn172(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn172() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn172(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn172(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn172(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn172(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn172(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn172(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_iopl */

#ifdef HAVE_uk_syscall_ioperm
#define uk_syscall_fn173(...) \
	uk_syscall_e_ioperm(__VA_ARGS__)
#define uk_syscall0_fn173() \
	uk_syscall_e0_ioperm()
#define uk_syscall1_fn173(arg1) \
	uk_syscall_e1_ioperm(arg1)
#define uk_syscall2_fn173(arg1, arg2) \
	uk_syscall_e2_ioperm(arg1, arg2)
#define uk_syscall3_fn173(arg1, arg2, arg3) \
	uk_syscall_e3_ioperm(arg1, arg2, arg3)
#define uk_syscall4_fn173(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ioperm(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn173(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ioperm(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn173(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ioperm(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn173(...) \
	uk_syscall_r_ioperm(__VA_ARGS__)
#define uk_syscall_r0_fn173() \
	uk_syscall_r0_ioperm()
#define uk_syscall_r1_fn173(arg1) \
	uk_syscall_r1_ioperm(arg1)
#define uk_syscall_r2_fn173(arg1, arg2) \
	uk_syscall_r2_ioperm(arg1, arg2)
#define uk_syscall_r3_fn173(arg1, arg2, arg3) \
	uk_syscall_r3_ioperm(arg1, arg2, arg3)
#define uk_syscall_r4_fn173(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ioperm(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn173(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ioperm(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn173(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ioperm(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ioperm */
#define uk_syscall_fn173(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn173() _uk_syscall_e_enosys()
#define uk_syscall1_fn173(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn173(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn173(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn173(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn173(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn173(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn173(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn173() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn173(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn173(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn173(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn173(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn173(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn173(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ioperm */

#ifdef HAVE_uk_syscall_create_module
#define uk_syscall_fn174(...) \
	uk_syscall_e_create_module(__VA_ARGS__)
#define uk_syscall0_fn174() \
	uk_syscall_e0_create_module()
#define uk_syscall1_fn174(arg1) \
	uk_syscall_e1_create_module(arg1)
#define uk_syscall2_fn174(arg1, arg2) \
	uk_syscall_e2_create_module(arg1, arg2)
#define uk_syscall3_fn174(arg1, arg2, arg3) \
	uk_syscall_e3_create_module(arg1, arg2, arg3)
#define uk_syscall4_fn174(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_create_module(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn174(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_create_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn174(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_create_module(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn174(...) \
	uk_syscall_r_create_module(__VA_ARGS__)
#define uk_syscall_r0_fn174() \
	uk_syscall_r0_create_module()
#define uk_syscall_r1_fn174(arg1) \
	uk_syscall_r1_create_module(arg1)
#define uk_syscall_r2_fn174(arg1, arg2) \
	uk_syscall_r2_create_module(arg1, arg2)
#define uk_syscall_r3_fn174(arg1, arg2, arg3) \
	uk_syscall_r3_create_module(arg1, arg2, arg3)
#define uk_syscall_r4_fn174(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_create_module(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn174(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_create_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn174(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_create_module(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_create_module */
#define uk_syscall_fn174(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn174() _uk_syscall_e_enosys()
#define uk_syscall1_fn174(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn174(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn174(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn174(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn174(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn174(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn174(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn174() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn174(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn174(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn174(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn174(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn174(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn174(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_create_module */

#ifdef HAVE_uk_syscall_init_module
#define uk_syscall_fn175(...) \
	uk_syscall_e_init_module(__VA_ARGS__)
#define uk_syscall0_fn175() \
	uk_syscall_e0_init_module()
#define uk_syscall1_fn175(arg1) \
	uk_syscall_e1_init_module(arg1)
#define uk_syscall2_fn175(arg1, arg2) \
	uk_syscall_e2_init_module(arg1, arg2)
#define uk_syscall3_fn175(arg1, arg2, arg3) \
	uk_syscall_e3_init_module(arg1, arg2, arg3)
#define uk_syscall4_fn175(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_init_module(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn175(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_init_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn175(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_init_module(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn175(...) \
	uk_syscall_r_init_module(__VA_ARGS__)
#define uk_syscall_r0_fn175() \
	uk_syscall_r0_init_module()
#define uk_syscall_r1_fn175(arg1) \
	uk_syscall_r1_init_module(arg1)
#define uk_syscall_r2_fn175(arg1, arg2) \
	uk_syscall_r2_init_module(arg1, arg2)
#define uk_syscall_r3_fn175(arg1, arg2, arg3) \
	uk_syscall_r3_init_module(arg1, arg2, arg3)
#define uk_syscall_r4_fn175(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_init_module(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn175(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_init_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn175(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_init_module(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_init_module */
#define uk_syscall_fn175(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn175() _uk_syscall_e_enosys()
#define uk_syscall1_fn175(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn175(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn175(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn175(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn175(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn175(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn175(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn175() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn175(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn175(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn175(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn175(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn175(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn175(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_init_module */

#ifdef HAVE_uk_syscall_delete_module
#define uk_syscall_fn176(...) \
	uk_syscall_e_delete_module(__VA_ARGS__)
#define uk_syscall0_fn176() \
	uk_syscall_e0_delete_module()
#define uk_syscall1_fn176(arg1) \
	uk_syscall_e1_delete_module(arg1)
#define uk_syscall2_fn176(arg1, arg2) \
	uk_syscall_e2_delete_module(arg1, arg2)
#define uk_syscall3_fn176(arg1, arg2, arg3) \
	uk_syscall_e3_delete_module(arg1, arg2, arg3)
#define uk_syscall4_fn176(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_delete_module(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn176(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_delete_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn176(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_delete_module(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn176(...) \
	uk_syscall_r_delete_module(__VA_ARGS__)
#define uk_syscall_r0_fn176() \
	uk_syscall_r0_delete_module()
#define uk_syscall_r1_fn176(arg1) \
	uk_syscall_r1_delete_module(arg1)
#define uk_syscall_r2_fn176(arg1, arg2) \
	uk_syscall_r2_delete_module(arg1, arg2)
#define uk_syscall_r3_fn176(arg1, arg2, arg3) \
	uk_syscall_r3_delete_module(arg1, arg2, arg3)
#define uk_syscall_r4_fn176(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_delete_module(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn176(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_delete_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn176(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_delete_module(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_delete_module */
#define uk_syscall_fn176(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn176() _uk_syscall_e_enosys()
#define uk_syscall1_fn176(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn176(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn176(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn176(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn176(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn176(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn176(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn176() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn176(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn176(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn176(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn176(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn176(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn176(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_delete_module */

#ifdef HAVE_uk_syscall_get_kernel_syms
#define uk_syscall_fn177(...) \
	uk_syscall_e_get_kernel_syms(__VA_ARGS__)
#define uk_syscall0_fn177() \
	uk_syscall_e0_get_kernel_syms()
#define uk_syscall1_fn177(arg1) \
	uk_syscall_e1_get_kernel_syms(arg1)
#define uk_syscall2_fn177(arg1, arg2) \
	uk_syscall_e2_get_kernel_syms(arg1, arg2)
#define uk_syscall3_fn177(arg1, arg2, arg3) \
	uk_syscall_e3_get_kernel_syms(arg1, arg2, arg3)
#define uk_syscall4_fn177(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_get_kernel_syms(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn177(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_get_kernel_syms(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn177(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_get_kernel_syms(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn177(...) \
	uk_syscall_r_get_kernel_syms(__VA_ARGS__)
#define uk_syscall_r0_fn177() \
	uk_syscall_r0_get_kernel_syms()
#define uk_syscall_r1_fn177(arg1) \
	uk_syscall_r1_get_kernel_syms(arg1)
#define uk_syscall_r2_fn177(arg1, arg2) \
	uk_syscall_r2_get_kernel_syms(arg1, arg2)
#define uk_syscall_r3_fn177(arg1, arg2, arg3) \
	uk_syscall_r3_get_kernel_syms(arg1, arg2, arg3)
#define uk_syscall_r4_fn177(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_get_kernel_syms(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn177(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_get_kernel_syms(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn177(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_get_kernel_syms(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_get_kernel_syms */
#define uk_syscall_fn177(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn177() _uk_syscall_e_enosys()
#define uk_syscall1_fn177(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn177(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn177(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn177(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn177(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn177(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn177(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn177() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn177(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn177(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn177(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn177(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn177(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn177(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_get_kernel_syms */

#ifdef HAVE_uk_syscall_query_module
#define uk_syscall_fn178(...) \
	uk_syscall_e_query_module(__VA_ARGS__)
#define uk_syscall0_fn178() \
	uk_syscall_e0_query_module()
#define uk_syscall1_fn178(arg1) \
	uk_syscall_e1_query_module(arg1)
#define uk_syscall2_fn178(arg1, arg2) \
	uk_syscall_e2_query_module(arg1, arg2)
#define uk_syscall3_fn178(arg1, arg2, arg3) \
	uk_syscall_e3_query_module(arg1, arg2, arg3)
#define uk_syscall4_fn178(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_query_module(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn178(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_query_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn178(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_query_module(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn178(...) \
	uk_syscall_r_query_module(__VA_ARGS__)
#define uk_syscall_r0_fn178() \
	uk_syscall_r0_query_module()
#define uk_syscall_r1_fn178(arg1) \
	uk_syscall_r1_query_module(arg1)
#define uk_syscall_r2_fn178(arg1, arg2) \
	uk_syscall_r2_query_module(arg1, arg2)
#define uk_syscall_r3_fn178(arg1, arg2, arg3) \
	uk_syscall_r3_query_module(arg1, arg2, arg3)
#define uk_syscall_r4_fn178(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_query_module(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn178(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_query_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn178(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_query_module(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_query_module */
#define uk_syscall_fn178(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn178() _uk_syscall_e_enosys()
#define uk_syscall1_fn178(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn178(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn178(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn178(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn178(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn178(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn178(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn178() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn178(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn178(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn178(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn178(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn178(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn178(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_query_module */

#ifdef HAVE_uk_syscall_quotactl
#define uk_syscall_fn179(...) \
	uk_syscall_e_quotactl(__VA_ARGS__)
#define uk_syscall0_fn179() \
	uk_syscall_e0_quotactl()
#define uk_syscall1_fn179(arg1) \
	uk_syscall_e1_quotactl(arg1)
#define uk_syscall2_fn179(arg1, arg2) \
	uk_syscall_e2_quotactl(arg1, arg2)
#define uk_syscall3_fn179(arg1, arg2, arg3) \
	uk_syscall_e3_quotactl(arg1, arg2, arg3)
#define uk_syscall4_fn179(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_quotactl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn179(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_quotactl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn179(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_quotactl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn179(...) \
	uk_syscall_r_quotactl(__VA_ARGS__)
#define uk_syscall_r0_fn179() \
	uk_syscall_r0_quotactl()
#define uk_syscall_r1_fn179(arg1) \
	uk_syscall_r1_quotactl(arg1)
#define uk_syscall_r2_fn179(arg1, arg2) \
	uk_syscall_r2_quotactl(arg1, arg2)
#define uk_syscall_r3_fn179(arg1, arg2, arg3) \
	uk_syscall_r3_quotactl(arg1, arg2, arg3)
#define uk_syscall_r4_fn179(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_quotactl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn179(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_quotactl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn179(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_quotactl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_quotactl */
#define uk_syscall_fn179(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn179() _uk_syscall_e_enosys()
#define uk_syscall1_fn179(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn179(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn179(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn179(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn179(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn179(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn179(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn179() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn179(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn179(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn179(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn179(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn179(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn179(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_quotactl */

#ifdef HAVE_uk_syscall_nfsservctl
#define uk_syscall_fn180(...) \
	uk_syscall_e_nfsservctl(__VA_ARGS__)
#define uk_syscall0_fn180() \
	uk_syscall_e0_nfsservctl()
#define uk_syscall1_fn180(arg1) \
	uk_syscall_e1_nfsservctl(arg1)
#define uk_syscall2_fn180(arg1, arg2) \
	uk_syscall_e2_nfsservctl(arg1, arg2)
#define uk_syscall3_fn180(arg1, arg2, arg3) \
	uk_syscall_e3_nfsservctl(arg1, arg2, arg3)
#define uk_syscall4_fn180(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_nfsservctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn180(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_nfsservctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn180(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_nfsservctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn180(...) \
	uk_syscall_r_nfsservctl(__VA_ARGS__)
#define uk_syscall_r0_fn180() \
	uk_syscall_r0_nfsservctl()
#define uk_syscall_r1_fn180(arg1) \
	uk_syscall_r1_nfsservctl(arg1)
#define uk_syscall_r2_fn180(arg1, arg2) \
	uk_syscall_r2_nfsservctl(arg1, arg2)
#define uk_syscall_r3_fn180(arg1, arg2, arg3) \
	uk_syscall_r3_nfsservctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn180(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_nfsservctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn180(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_nfsservctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn180(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_nfsservctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_nfsservctl */
#define uk_syscall_fn180(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn180() _uk_syscall_e_enosys()
#define uk_syscall1_fn180(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn180(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn180(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn180(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn180(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn180(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn180(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn180() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn180(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn180(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn180(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn180(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn180(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn180(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_nfsservctl */

#ifdef HAVE_uk_syscall_getpmsg
#define uk_syscall_fn181(...) \
	uk_syscall_e_getpmsg(__VA_ARGS__)
#define uk_syscall0_fn181() \
	uk_syscall_e0_getpmsg()
#define uk_syscall1_fn181(arg1) \
	uk_syscall_e1_getpmsg(arg1)
#define uk_syscall2_fn181(arg1, arg2) \
	uk_syscall_e2_getpmsg(arg1, arg2)
#define uk_syscall3_fn181(arg1, arg2, arg3) \
	uk_syscall_e3_getpmsg(arg1, arg2, arg3)
#define uk_syscall4_fn181(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getpmsg(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn181(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getpmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn181(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getpmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn181(...) \
	uk_syscall_r_getpmsg(__VA_ARGS__)
#define uk_syscall_r0_fn181() \
	uk_syscall_r0_getpmsg()
#define uk_syscall_r1_fn181(arg1) \
	uk_syscall_r1_getpmsg(arg1)
#define uk_syscall_r2_fn181(arg1, arg2) \
	uk_syscall_r2_getpmsg(arg1, arg2)
#define uk_syscall_r3_fn181(arg1, arg2, arg3) \
	uk_syscall_r3_getpmsg(arg1, arg2, arg3)
#define uk_syscall_r4_fn181(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getpmsg(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn181(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getpmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn181(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getpmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getpmsg */
#define uk_syscall_fn181(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn181() _uk_syscall_e_enosys()
#define uk_syscall1_fn181(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn181(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn181(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn181(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn181(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn181(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn181(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn181() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn181(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn181(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn181(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn181(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn181(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn181(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getpmsg */

#ifdef HAVE_uk_syscall_putpmsg
#define uk_syscall_fn182(...) \
	uk_syscall_e_putpmsg(__VA_ARGS__)
#define uk_syscall0_fn182() \
	uk_syscall_e0_putpmsg()
#define uk_syscall1_fn182(arg1) \
	uk_syscall_e1_putpmsg(arg1)
#define uk_syscall2_fn182(arg1, arg2) \
	uk_syscall_e2_putpmsg(arg1, arg2)
#define uk_syscall3_fn182(arg1, arg2, arg3) \
	uk_syscall_e3_putpmsg(arg1, arg2, arg3)
#define uk_syscall4_fn182(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_putpmsg(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn182(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_putpmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn182(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_putpmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn182(...) \
	uk_syscall_r_putpmsg(__VA_ARGS__)
#define uk_syscall_r0_fn182() \
	uk_syscall_r0_putpmsg()
#define uk_syscall_r1_fn182(arg1) \
	uk_syscall_r1_putpmsg(arg1)
#define uk_syscall_r2_fn182(arg1, arg2) \
	uk_syscall_r2_putpmsg(arg1, arg2)
#define uk_syscall_r3_fn182(arg1, arg2, arg3) \
	uk_syscall_r3_putpmsg(arg1, arg2, arg3)
#define uk_syscall_r4_fn182(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_putpmsg(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn182(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_putpmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn182(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_putpmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_putpmsg */
#define uk_syscall_fn182(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn182() _uk_syscall_e_enosys()
#define uk_syscall1_fn182(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn182(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn182(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn182(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn182(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn182(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn182(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn182() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn182(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn182(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn182(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn182(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn182(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn182(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_putpmsg */

#ifdef HAVE_uk_syscall_afs_syscall
#define uk_syscall_fn183(...) \
	uk_syscall_e_afs_syscall(__VA_ARGS__)
#define uk_syscall0_fn183() \
	uk_syscall_e0_afs_syscall()
#define uk_syscall1_fn183(arg1) \
	uk_syscall_e1_afs_syscall(arg1)
#define uk_syscall2_fn183(arg1, arg2) \
	uk_syscall_e2_afs_syscall(arg1, arg2)
#define uk_syscall3_fn183(arg1, arg2, arg3) \
	uk_syscall_e3_afs_syscall(arg1, arg2, arg3)
#define uk_syscall4_fn183(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_afs_syscall(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn183(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_afs_syscall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn183(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_afs_syscall(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn183(...) \
	uk_syscall_r_afs_syscall(__VA_ARGS__)
#define uk_syscall_r0_fn183() \
	uk_syscall_r0_afs_syscall()
#define uk_syscall_r1_fn183(arg1) \
	uk_syscall_r1_afs_syscall(arg1)
#define uk_syscall_r2_fn183(arg1, arg2) \
	uk_syscall_r2_afs_syscall(arg1, arg2)
#define uk_syscall_r3_fn183(arg1, arg2, arg3) \
	uk_syscall_r3_afs_syscall(arg1, arg2, arg3)
#define uk_syscall_r4_fn183(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_afs_syscall(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn183(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_afs_syscall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn183(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_afs_syscall(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_afs_syscall */
#define uk_syscall_fn183(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn183() _uk_syscall_e_enosys()
#define uk_syscall1_fn183(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn183(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn183(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn183(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn183(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn183(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn183(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn183() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn183(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn183(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn183(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn183(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn183(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn183(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_afs_syscall */

#ifdef HAVE_uk_syscall_tuxcall
#define uk_syscall_fn184(...) \
	uk_syscall_e_tuxcall(__VA_ARGS__)
#define uk_syscall0_fn184() \
	uk_syscall_e0_tuxcall()
#define uk_syscall1_fn184(arg1) \
	uk_syscall_e1_tuxcall(arg1)
#define uk_syscall2_fn184(arg1, arg2) \
	uk_syscall_e2_tuxcall(arg1, arg2)
#define uk_syscall3_fn184(arg1, arg2, arg3) \
	uk_syscall_e3_tuxcall(arg1, arg2, arg3)
#define uk_syscall4_fn184(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_tuxcall(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn184(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_tuxcall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn184(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_tuxcall(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn184(...) \
	uk_syscall_r_tuxcall(__VA_ARGS__)
#define uk_syscall_r0_fn184() \
	uk_syscall_r0_tuxcall()
#define uk_syscall_r1_fn184(arg1) \
	uk_syscall_r1_tuxcall(arg1)
#define uk_syscall_r2_fn184(arg1, arg2) \
	uk_syscall_r2_tuxcall(arg1, arg2)
#define uk_syscall_r3_fn184(arg1, arg2, arg3) \
	uk_syscall_r3_tuxcall(arg1, arg2, arg3)
#define uk_syscall_r4_fn184(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_tuxcall(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn184(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_tuxcall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn184(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_tuxcall(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_tuxcall */
#define uk_syscall_fn184(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn184() _uk_syscall_e_enosys()
#define uk_syscall1_fn184(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn184(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn184(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn184(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn184(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn184(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn184(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn184() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn184(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn184(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn184(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn184(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn184(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn184(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_tuxcall */

#ifdef HAVE_uk_syscall_security
#define uk_syscall_fn185(...) \
	uk_syscall_e_security(__VA_ARGS__)
#define uk_syscall0_fn185() \
	uk_syscall_e0_security()
#define uk_syscall1_fn185(arg1) \
	uk_syscall_e1_security(arg1)
#define uk_syscall2_fn185(arg1, arg2) \
	uk_syscall_e2_security(arg1, arg2)
#define uk_syscall3_fn185(arg1, arg2, arg3) \
	uk_syscall_e3_security(arg1, arg2, arg3)
#define uk_syscall4_fn185(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_security(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn185(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_security(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn185(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_security(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn185(...) \
	uk_syscall_r_security(__VA_ARGS__)
#define uk_syscall_r0_fn185() \
	uk_syscall_r0_security()
#define uk_syscall_r1_fn185(arg1) \
	uk_syscall_r1_security(arg1)
#define uk_syscall_r2_fn185(arg1, arg2) \
	uk_syscall_r2_security(arg1, arg2)
#define uk_syscall_r3_fn185(arg1, arg2, arg3) \
	uk_syscall_r3_security(arg1, arg2, arg3)
#define uk_syscall_r4_fn185(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_security(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn185(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_security(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn185(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_security(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_security */
#define uk_syscall_fn185(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn185() _uk_syscall_e_enosys()
#define uk_syscall1_fn185(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn185(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn185(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn185(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn185(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn185(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn185(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn185() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn185(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn185(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn185(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn185(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn185(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn185(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_security */

#ifdef HAVE_uk_syscall_gettid
#define uk_syscall_fn186(...) \
	uk_syscall_e_gettid(__VA_ARGS__)
#define uk_syscall0_fn186() \
	uk_syscall_e0_gettid()
#define uk_syscall1_fn186(arg1) \
	uk_syscall_e1_gettid(arg1)
#define uk_syscall2_fn186(arg1, arg2) \
	uk_syscall_e2_gettid(arg1, arg2)
#define uk_syscall3_fn186(arg1, arg2, arg3) \
	uk_syscall_e3_gettid(arg1, arg2, arg3)
#define uk_syscall4_fn186(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_gettid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn186(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_gettid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn186(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_gettid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn186(...) \
	uk_syscall_r_gettid(__VA_ARGS__)
#define uk_syscall_r0_fn186() \
	uk_syscall_r0_gettid()
#define uk_syscall_r1_fn186(arg1) \
	uk_syscall_r1_gettid(arg1)
#define uk_syscall_r2_fn186(arg1, arg2) \
	uk_syscall_r2_gettid(arg1, arg2)
#define uk_syscall_r3_fn186(arg1, arg2, arg3) \
	uk_syscall_r3_gettid(arg1, arg2, arg3)
#define uk_syscall_r4_fn186(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_gettid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn186(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_gettid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn186(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_gettid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_gettid */
#define uk_syscall_fn186(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn186() _uk_syscall_e_enosys()
#define uk_syscall1_fn186(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn186(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn186(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn186(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn186(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn186(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn186(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn186() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn186(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn186(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn186(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn186(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn186(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn186(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_gettid */

#ifdef HAVE_uk_syscall_readahead
#define uk_syscall_fn187(...) \
	uk_syscall_e_readahead(__VA_ARGS__)
#define uk_syscall0_fn187() \
	uk_syscall_e0_readahead()
#define uk_syscall1_fn187(arg1) \
	uk_syscall_e1_readahead(arg1)
#define uk_syscall2_fn187(arg1, arg2) \
	uk_syscall_e2_readahead(arg1, arg2)
#define uk_syscall3_fn187(arg1, arg2, arg3) \
	uk_syscall_e3_readahead(arg1, arg2, arg3)
#define uk_syscall4_fn187(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_readahead(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn187(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_readahead(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn187(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_readahead(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn187(...) \
	uk_syscall_r_readahead(__VA_ARGS__)
#define uk_syscall_r0_fn187() \
	uk_syscall_r0_readahead()
#define uk_syscall_r1_fn187(arg1) \
	uk_syscall_r1_readahead(arg1)
#define uk_syscall_r2_fn187(arg1, arg2) \
	uk_syscall_r2_readahead(arg1, arg2)
#define uk_syscall_r3_fn187(arg1, arg2, arg3) \
	uk_syscall_r3_readahead(arg1, arg2, arg3)
#define uk_syscall_r4_fn187(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_readahead(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn187(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_readahead(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn187(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_readahead(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_readahead */
#define uk_syscall_fn187(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn187() _uk_syscall_e_enosys()
#define uk_syscall1_fn187(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn187(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn187(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn187(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn187(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn187(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn187(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn187() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn187(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn187(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn187(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn187(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn187(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn187(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_readahead */

#ifdef HAVE_uk_syscall_setxattr
#define uk_syscall_fn188(...) \
	uk_syscall_e_setxattr(__VA_ARGS__)
#define uk_syscall0_fn188() \
	uk_syscall_e0_setxattr()
#define uk_syscall1_fn188(arg1) \
	uk_syscall_e1_setxattr(arg1)
#define uk_syscall2_fn188(arg1, arg2) \
	uk_syscall_e2_setxattr(arg1, arg2)
#define uk_syscall3_fn188(arg1, arg2, arg3) \
	uk_syscall_e3_setxattr(arg1, arg2, arg3)
#define uk_syscall4_fn188(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn188(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn188(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn188(...) \
	uk_syscall_r_setxattr(__VA_ARGS__)
#define uk_syscall_r0_fn188() \
	uk_syscall_r0_setxattr()
#define uk_syscall_r1_fn188(arg1) \
	uk_syscall_r1_setxattr(arg1)
#define uk_syscall_r2_fn188(arg1, arg2) \
	uk_syscall_r2_setxattr(arg1, arg2)
#define uk_syscall_r3_fn188(arg1, arg2, arg3) \
	uk_syscall_r3_setxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn188(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn188(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn188(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setxattr */
#define uk_syscall_fn188(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn188() _uk_syscall_e_enosys()
#define uk_syscall1_fn188(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn188(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn188(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn188(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn188(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn188(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn188(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn188() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn188(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn188(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn188(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn188(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn188(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn188(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setxattr */

#ifdef HAVE_uk_syscall_lsetxattr
#define uk_syscall_fn189(...) \
	uk_syscall_e_lsetxattr(__VA_ARGS__)
#define uk_syscall0_fn189() \
	uk_syscall_e0_lsetxattr()
#define uk_syscall1_fn189(arg1) \
	uk_syscall_e1_lsetxattr(arg1)
#define uk_syscall2_fn189(arg1, arg2) \
	uk_syscall_e2_lsetxattr(arg1, arg2)
#define uk_syscall3_fn189(arg1, arg2, arg3) \
	uk_syscall_e3_lsetxattr(arg1, arg2, arg3)
#define uk_syscall4_fn189(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_lsetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn189(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_lsetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn189(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_lsetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn189(...) \
	uk_syscall_r_lsetxattr(__VA_ARGS__)
#define uk_syscall_r0_fn189() \
	uk_syscall_r0_lsetxattr()
#define uk_syscall_r1_fn189(arg1) \
	uk_syscall_r1_lsetxattr(arg1)
#define uk_syscall_r2_fn189(arg1, arg2) \
	uk_syscall_r2_lsetxattr(arg1, arg2)
#define uk_syscall_r3_fn189(arg1, arg2, arg3) \
	uk_syscall_r3_lsetxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn189(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_lsetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn189(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_lsetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn189(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_lsetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_lsetxattr */
#define uk_syscall_fn189(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn189() _uk_syscall_e_enosys()
#define uk_syscall1_fn189(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn189(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn189(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn189(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn189(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn189(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn189(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn189() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn189(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn189(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn189(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn189(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn189(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn189(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_lsetxattr */

#ifdef HAVE_uk_syscall_fsetxattr
#define uk_syscall_fn190(...) \
	uk_syscall_e_fsetxattr(__VA_ARGS__)
#define uk_syscall0_fn190() \
	uk_syscall_e0_fsetxattr()
#define uk_syscall1_fn190(arg1) \
	uk_syscall_e1_fsetxattr(arg1)
#define uk_syscall2_fn190(arg1, arg2) \
	uk_syscall_e2_fsetxattr(arg1, arg2)
#define uk_syscall3_fn190(arg1, arg2, arg3) \
	uk_syscall_e3_fsetxattr(arg1, arg2, arg3)
#define uk_syscall4_fn190(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fsetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn190(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fsetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn190(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fsetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn190(...) \
	uk_syscall_r_fsetxattr(__VA_ARGS__)
#define uk_syscall_r0_fn190() \
	uk_syscall_r0_fsetxattr()
#define uk_syscall_r1_fn190(arg1) \
	uk_syscall_r1_fsetxattr(arg1)
#define uk_syscall_r2_fn190(arg1, arg2) \
	uk_syscall_r2_fsetxattr(arg1, arg2)
#define uk_syscall_r3_fn190(arg1, arg2, arg3) \
	uk_syscall_r3_fsetxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn190(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fsetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn190(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fsetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn190(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fsetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fsetxattr */
#define uk_syscall_fn190(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn190() _uk_syscall_e_enosys()
#define uk_syscall1_fn190(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn190(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn190(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn190(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn190(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn190(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn190(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn190() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn190(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn190(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn190(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn190(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn190(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn190(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fsetxattr */

#ifdef HAVE_uk_syscall_getxattr
#define uk_syscall_fn191(...) \
	uk_syscall_e_getxattr(__VA_ARGS__)
#define uk_syscall0_fn191() \
	uk_syscall_e0_getxattr()
#define uk_syscall1_fn191(arg1) \
	uk_syscall_e1_getxattr(arg1)
#define uk_syscall2_fn191(arg1, arg2) \
	uk_syscall_e2_getxattr(arg1, arg2)
#define uk_syscall3_fn191(arg1, arg2, arg3) \
	uk_syscall_e3_getxattr(arg1, arg2, arg3)
#define uk_syscall4_fn191(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn191(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn191(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn191(...) \
	uk_syscall_r_getxattr(__VA_ARGS__)
#define uk_syscall_r0_fn191() \
	uk_syscall_r0_getxattr()
#define uk_syscall_r1_fn191(arg1) \
	uk_syscall_r1_getxattr(arg1)
#define uk_syscall_r2_fn191(arg1, arg2) \
	uk_syscall_r2_getxattr(arg1, arg2)
#define uk_syscall_r3_fn191(arg1, arg2, arg3) \
	uk_syscall_r3_getxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn191(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn191(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn191(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getxattr */
#define uk_syscall_fn191(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn191() _uk_syscall_e_enosys()
#define uk_syscall1_fn191(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn191(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn191(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn191(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn191(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn191(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn191(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn191() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn191(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn191(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn191(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn191(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn191(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn191(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getxattr */

#ifdef HAVE_uk_syscall_lgetxattr
#define uk_syscall_fn192(...) \
	uk_syscall_e_lgetxattr(__VA_ARGS__)
#define uk_syscall0_fn192() \
	uk_syscall_e0_lgetxattr()
#define uk_syscall1_fn192(arg1) \
	uk_syscall_e1_lgetxattr(arg1)
#define uk_syscall2_fn192(arg1, arg2) \
	uk_syscall_e2_lgetxattr(arg1, arg2)
#define uk_syscall3_fn192(arg1, arg2, arg3) \
	uk_syscall_e3_lgetxattr(arg1, arg2, arg3)
#define uk_syscall4_fn192(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_lgetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn192(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_lgetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn192(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_lgetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn192(...) \
	uk_syscall_r_lgetxattr(__VA_ARGS__)
#define uk_syscall_r0_fn192() \
	uk_syscall_r0_lgetxattr()
#define uk_syscall_r1_fn192(arg1) \
	uk_syscall_r1_lgetxattr(arg1)
#define uk_syscall_r2_fn192(arg1, arg2) \
	uk_syscall_r2_lgetxattr(arg1, arg2)
#define uk_syscall_r3_fn192(arg1, arg2, arg3) \
	uk_syscall_r3_lgetxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn192(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_lgetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn192(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_lgetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn192(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_lgetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_lgetxattr */
#define uk_syscall_fn192(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn192() _uk_syscall_e_enosys()
#define uk_syscall1_fn192(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn192(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn192(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn192(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn192(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn192(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn192(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn192() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn192(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn192(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn192(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn192(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn192(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn192(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_lgetxattr */

#ifdef HAVE_uk_syscall_fgetxattr
#define uk_syscall_fn193(...) \
	uk_syscall_e_fgetxattr(__VA_ARGS__)
#define uk_syscall0_fn193() \
	uk_syscall_e0_fgetxattr()
#define uk_syscall1_fn193(arg1) \
	uk_syscall_e1_fgetxattr(arg1)
#define uk_syscall2_fn193(arg1, arg2) \
	uk_syscall_e2_fgetxattr(arg1, arg2)
#define uk_syscall3_fn193(arg1, arg2, arg3) \
	uk_syscall_e3_fgetxattr(arg1, arg2, arg3)
#define uk_syscall4_fn193(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fgetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn193(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fgetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn193(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fgetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn193(...) \
	uk_syscall_r_fgetxattr(__VA_ARGS__)
#define uk_syscall_r0_fn193() \
	uk_syscall_r0_fgetxattr()
#define uk_syscall_r1_fn193(arg1) \
	uk_syscall_r1_fgetxattr(arg1)
#define uk_syscall_r2_fn193(arg1, arg2) \
	uk_syscall_r2_fgetxattr(arg1, arg2)
#define uk_syscall_r3_fn193(arg1, arg2, arg3) \
	uk_syscall_r3_fgetxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn193(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fgetxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn193(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fgetxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn193(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fgetxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fgetxattr */
#define uk_syscall_fn193(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn193() _uk_syscall_e_enosys()
#define uk_syscall1_fn193(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn193(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn193(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn193(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn193(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn193(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn193(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn193() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn193(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn193(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn193(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn193(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn193(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn193(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fgetxattr */

#ifdef HAVE_uk_syscall_listxattr
#define uk_syscall_fn194(...) \
	uk_syscall_e_listxattr(__VA_ARGS__)
#define uk_syscall0_fn194() \
	uk_syscall_e0_listxattr()
#define uk_syscall1_fn194(arg1) \
	uk_syscall_e1_listxattr(arg1)
#define uk_syscall2_fn194(arg1, arg2) \
	uk_syscall_e2_listxattr(arg1, arg2)
#define uk_syscall3_fn194(arg1, arg2, arg3) \
	uk_syscall_e3_listxattr(arg1, arg2, arg3)
#define uk_syscall4_fn194(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_listxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn194(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_listxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn194(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_listxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn194(...) \
	uk_syscall_r_listxattr(__VA_ARGS__)
#define uk_syscall_r0_fn194() \
	uk_syscall_r0_listxattr()
#define uk_syscall_r1_fn194(arg1) \
	uk_syscall_r1_listxattr(arg1)
#define uk_syscall_r2_fn194(arg1, arg2) \
	uk_syscall_r2_listxattr(arg1, arg2)
#define uk_syscall_r3_fn194(arg1, arg2, arg3) \
	uk_syscall_r3_listxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn194(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_listxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn194(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_listxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn194(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_listxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_listxattr */
#define uk_syscall_fn194(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn194() _uk_syscall_e_enosys()
#define uk_syscall1_fn194(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn194(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn194(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn194(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn194(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn194(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn194(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn194() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn194(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn194(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn194(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn194(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn194(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn194(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_listxattr */

#ifdef HAVE_uk_syscall_llistxattr
#define uk_syscall_fn195(...) \
	uk_syscall_e_llistxattr(__VA_ARGS__)
#define uk_syscall0_fn195() \
	uk_syscall_e0_llistxattr()
#define uk_syscall1_fn195(arg1) \
	uk_syscall_e1_llistxattr(arg1)
#define uk_syscall2_fn195(arg1, arg2) \
	uk_syscall_e2_llistxattr(arg1, arg2)
#define uk_syscall3_fn195(arg1, arg2, arg3) \
	uk_syscall_e3_llistxattr(arg1, arg2, arg3)
#define uk_syscall4_fn195(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_llistxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn195(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_llistxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn195(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_llistxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn195(...) \
	uk_syscall_r_llistxattr(__VA_ARGS__)
#define uk_syscall_r0_fn195() \
	uk_syscall_r0_llistxattr()
#define uk_syscall_r1_fn195(arg1) \
	uk_syscall_r1_llistxattr(arg1)
#define uk_syscall_r2_fn195(arg1, arg2) \
	uk_syscall_r2_llistxattr(arg1, arg2)
#define uk_syscall_r3_fn195(arg1, arg2, arg3) \
	uk_syscall_r3_llistxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn195(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_llistxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn195(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_llistxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn195(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_llistxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_llistxattr */
#define uk_syscall_fn195(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn195() _uk_syscall_e_enosys()
#define uk_syscall1_fn195(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn195(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn195(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn195(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn195(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn195(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn195(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn195() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn195(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn195(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn195(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn195(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn195(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn195(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_llistxattr */

#ifdef HAVE_uk_syscall_flistxattr
#define uk_syscall_fn196(...) \
	uk_syscall_e_flistxattr(__VA_ARGS__)
#define uk_syscall0_fn196() \
	uk_syscall_e0_flistxattr()
#define uk_syscall1_fn196(arg1) \
	uk_syscall_e1_flistxattr(arg1)
#define uk_syscall2_fn196(arg1, arg2) \
	uk_syscall_e2_flistxattr(arg1, arg2)
#define uk_syscall3_fn196(arg1, arg2, arg3) \
	uk_syscall_e3_flistxattr(arg1, arg2, arg3)
#define uk_syscall4_fn196(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_flistxattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn196(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_flistxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn196(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_flistxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn196(...) \
	uk_syscall_r_flistxattr(__VA_ARGS__)
#define uk_syscall_r0_fn196() \
	uk_syscall_r0_flistxattr()
#define uk_syscall_r1_fn196(arg1) \
	uk_syscall_r1_flistxattr(arg1)
#define uk_syscall_r2_fn196(arg1, arg2) \
	uk_syscall_r2_flistxattr(arg1, arg2)
#define uk_syscall_r3_fn196(arg1, arg2, arg3) \
	uk_syscall_r3_flistxattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn196(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_flistxattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn196(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_flistxattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn196(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_flistxattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_flistxattr */
#define uk_syscall_fn196(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn196() _uk_syscall_e_enosys()
#define uk_syscall1_fn196(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn196(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn196(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn196(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn196(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn196(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn196(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn196() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn196(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn196(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn196(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn196(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn196(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn196(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_flistxattr */

#ifdef HAVE_uk_syscall_removexattr
#define uk_syscall_fn197(...) \
	uk_syscall_e_removexattr(__VA_ARGS__)
#define uk_syscall0_fn197() \
	uk_syscall_e0_removexattr()
#define uk_syscall1_fn197(arg1) \
	uk_syscall_e1_removexattr(arg1)
#define uk_syscall2_fn197(arg1, arg2) \
	uk_syscall_e2_removexattr(arg1, arg2)
#define uk_syscall3_fn197(arg1, arg2, arg3) \
	uk_syscall_e3_removexattr(arg1, arg2, arg3)
#define uk_syscall4_fn197(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_removexattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn197(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_removexattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn197(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_removexattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn197(...) \
	uk_syscall_r_removexattr(__VA_ARGS__)
#define uk_syscall_r0_fn197() \
	uk_syscall_r0_removexattr()
#define uk_syscall_r1_fn197(arg1) \
	uk_syscall_r1_removexattr(arg1)
#define uk_syscall_r2_fn197(arg1, arg2) \
	uk_syscall_r2_removexattr(arg1, arg2)
#define uk_syscall_r3_fn197(arg1, arg2, arg3) \
	uk_syscall_r3_removexattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn197(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_removexattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn197(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_removexattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn197(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_removexattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_removexattr */
#define uk_syscall_fn197(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn197() _uk_syscall_e_enosys()
#define uk_syscall1_fn197(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn197(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn197(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn197(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn197(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn197(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn197(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn197() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn197(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn197(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn197(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn197(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn197(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn197(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_removexattr */

#ifdef HAVE_uk_syscall_lremovexattr
#define uk_syscall_fn198(...) \
	uk_syscall_e_lremovexattr(__VA_ARGS__)
#define uk_syscall0_fn198() \
	uk_syscall_e0_lremovexattr()
#define uk_syscall1_fn198(arg1) \
	uk_syscall_e1_lremovexattr(arg1)
#define uk_syscall2_fn198(arg1, arg2) \
	uk_syscall_e2_lremovexattr(arg1, arg2)
#define uk_syscall3_fn198(arg1, arg2, arg3) \
	uk_syscall_e3_lremovexattr(arg1, arg2, arg3)
#define uk_syscall4_fn198(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_lremovexattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn198(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_lremovexattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn198(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_lremovexattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn198(...) \
	uk_syscall_r_lremovexattr(__VA_ARGS__)
#define uk_syscall_r0_fn198() \
	uk_syscall_r0_lremovexattr()
#define uk_syscall_r1_fn198(arg1) \
	uk_syscall_r1_lremovexattr(arg1)
#define uk_syscall_r2_fn198(arg1, arg2) \
	uk_syscall_r2_lremovexattr(arg1, arg2)
#define uk_syscall_r3_fn198(arg1, arg2, arg3) \
	uk_syscall_r3_lremovexattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn198(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_lremovexattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn198(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_lremovexattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn198(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_lremovexattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_lremovexattr */
#define uk_syscall_fn198(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn198() _uk_syscall_e_enosys()
#define uk_syscall1_fn198(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn198(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn198(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn198(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn198(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn198(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn198(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn198() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn198(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn198(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn198(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn198(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn198(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn198(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_lremovexattr */

#ifdef HAVE_uk_syscall_fremovexattr
#define uk_syscall_fn199(...) \
	uk_syscall_e_fremovexattr(__VA_ARGS__)
#define uk_syscall0_fn199() \
	uk_syscall_e0_fremovexattr()
#define uk_syscall1_fn199(arg1) \
	uk_syscall_e1_fremovexattr(arg1)
#define uk_syscall2_fn199(arg1, arg2) \
	uk_syscall_e2_fremovexattr(arg1, arg2)
#define uk_syscall3_fn199(arg1, arg2, arg3) \
	uk_syscall_e3_fremovexattr(arg1, arg2, arg3)
#define uk_syscall4_fn199(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fremovexattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn199(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fremovexattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn199(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fremovexattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn199(...) \
	uk_syscall_r_fremovexattr(__VA_ARGS__)
#define uk_syscall_r0_fn199() \
	uk_syscall_r0_fremovexattr()
#define uk_syscall_r1_fn199(arg1) \
	uk_syscall_r1_fremovexattr(arg1)
#define uk_syscall_r2_fn199(arg1, arg2) \
	uk_syscall_r2_fremovexattr(arg1, arg2)
#define uk_syscall_r3_fn199(arg1, arg2, arg3) \
	uk_syscall_r3_fremovexattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn199(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fremovexattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn199(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fremovexattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn199(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fremovexattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fremovexattr */
#define uk_syscall_fn199(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn199() _uk_syscall_e_enosys()
#define uk_syscall1_fn199(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn199(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn199(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn199(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn199(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn199(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn199(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn199() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn199(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn199(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn199(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn199(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn199(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn199(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fremovexattr */

#ifdef HAVE_uk_syscall_tkill
#define uk_syscall_fn200(...) \
	uk_syscall_e_tkill(__VA_ARGS__)
#define uk_syscall0_fn200() \
	uk_syscall_e0_tkill()
#define uk_syscall1_fn200(arg1) \
	uk_syscall_e1_tkill(arg1)
#define uk_syscall2_fn200(arg1, arg2) \
	uk_syscall_e2_tkill(arg1, arg2)
#define uk_syscall3_fn200(arg1, arg2, arg3) \
	uk_syscall_e3_tkill(arg1, arg2, arg3)
#define uk_syscall4_fn200(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_tkill(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn200(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_tkill(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn200(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_tkill(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn200(...) \
	uk_syscall_r_tkill(__VA_ARGS__)
#define uk_syscall_r0_fn200() \
	uk_syscall_r0_tkill()
#define uk_syscall_r1_fn200(arg1) \
	uk_syscall_r1_tkill(arg1)
#define uk_syscall_r2_fn200(arg1, arg2) \
	uk_syscall_r2_tkill(arg1, arg2)
#define uk_syscall_r3_fn200(arg1, arg2, arg3) \
	uk_syscall_r3_tkill(arg1, arg2, arg3)
#define uk_syscall_r4_fn200(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_tkill(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn200(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_tkill(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn200(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_tkill(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_tkill */
#define uk_syscall_fn200(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn200() _uk_syscall_e_enosys()
#define uk_syscall1_fn200(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn200(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn200(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn200(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn200(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn200(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn200(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn200() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn200(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn200(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn200(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn200(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn200(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn200(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_tkill */

#ifdef HAVE_uk_syscall_time
#define uk_syscall_fn201(...) \
	uk_syscall_e_time(__VA_ARGS__)
#define uk_syscall0_fn201() \
	uk_syscall_e0_time()
#define uk_syscall1_fn201(arg1) \
	uk_syscall_e1_time(arg1)
#define uk_syscall2_fn201(arg1, arg2) \
	uk_syscall_e2_time(arg1, arg2)
#define uk_syscall3_fn201(arg1, arg2, arg3) \
	uk_syscall_e3_time(arg1, arg2, arg3)
#define uk_syscall4_fn201(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_time(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn201(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_time(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn201(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_time(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn201(...) \
	uk_syscall_r_time(__VA_ARGS__)
#define uk_syscall_r0_fn201() \
	uk_syscall_r0_time()
#define uk_syscall_r1_fn201(arg1) \
	uk_syscall_r1_time(arg1)
#define uk_syscall_r2_fn201(arg1, arg2) \
	uk_syscall_r2_time(arg1, arg2)
#define uk_syscall_r3_fn201(arg1, arg2, arg3) \
	uk_syscall_r3_time(arg1, arg2, arg3)
#define uk_syscall_r4_fn201(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_time(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn201(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_time(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn201(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_time(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_time */
#define uk_syscall_fn201(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn201() _uk_syscall_e_enosys()
#define uk_syscall1_fn201(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn201(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn201(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn201(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn201(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn201(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn201(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn201() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn201(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn201(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn201(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn201(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn201(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn201(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_time */

#ifdef HAVE_uk_syscall_futex
#define uk_syscall_fn202(...) \
	uk_syscall_e_futex(__VA_ARGS__)
#define uk_syscall0_fn202() \
	uk_syscall_e0_futex()
#define uk_syscall1_fn202(arg1) \
	uk_syscall_e1_futex(arg1)
#define uk_syscall2_fn202(arg1, arg2) \
	uk_syscall_e2_futex(arg1, arg2)
#define uk_syscall3_fn202(arg1, arg2, arg3) \
	uk_syscall_e3_futex(arg1, arg2, arg3)
#define uk_syscall4_fn202(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_futex(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn202(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_futex(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn202(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_futex(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn202(...) \
	uk_syscall_r_futex(__VA_ARGS__)
#define uk_syscall_r0_fn202() \
	uk_syscall_r0_futex()
#define uk_syscall_r1_fn202(arg1) \
	uk_syscall_r1_futex(arg1)
#define uk_syscall_r2_fn202(arg1, arg2) \
	uk_syscall_r2_futex(arg1, arg2)
#define uk_syscall_r3_fn202(arg1, arg2, arg3) \
	uk_syscall_r3_futex(arg1, arg2, arg3)
#define uk_syscall_r4_fn202(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_futex(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn202(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_futex(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn202(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_futex(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_futex */
#define uk_syscall_fn202(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn202() _uk_syscall_e_enosys()
#define uk_syscall1_fn202(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn202(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn202(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn202(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn202(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn202(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn202(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn202() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn202(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn202(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn202(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn202(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn202(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn202(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_futex */

#ifdef HAVE_uk_syscall_sched_setaffinity
#define uk_syscall_fn203(...) \
	uk_syscall_e_sched_setaffinity(__VA_ARGS__)
#define uk_syscall0_fn203() \
	uk_syscall_e0_sched_setaffinity()
#define uk_syscall1_fn203(arg1) \
	uk_syscall_e1_sched_setaffinity(arg1)
#define uk_syscall2_fn203(arg1, arg2) \
	uk_syscall_e2_sched_setaffinity(arg1, arg2)
#define uk_syscall3_fn203(arg1, arg2, arg3) \
	uk_syscall_e3_sched_setaffinity(arg1, arg2, arg3)
#define uk_syscall4_fn203(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_setaffinity(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn203(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_setaffinity(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn203(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_setaffinity(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn203(...) \
	uk_syscall_r_sched_setaffinity(__VA_ARGS__)
#define uk_syscall_r0_fn203() \
	uk_syscall_r0_sched_setaffinity()
#define uk_syscall_r1_fn203(arg1) \
	uk_syscall_r1_sched_setaffinity(arg1)
#define uk_syscall_r2_fn203(arg1, arg2) \
	uk_syscall_r2_sched_setaffinity(arg1, arg2)
#define uk_syscall_r3_fn203(arg1, arg2, arg3) \
	uk_syscall_r3_sched_setaffinity(arg1, arg2, arg3)
#define uk_syscall_r4_fn203(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_setaffinity(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn203(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_setaffinity(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn203(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_setaffinity(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_setaffinity */
#define uk_syscall_fn203(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn203() _uk_syscall_e_enosys()
#define uk_syscall1_fn203(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn203(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn203(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn203(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn203(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn203(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn203(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn203() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn203(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn203(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn203(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn203(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn203(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn203(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_setaffinity */

#ifdef HAVE_uk_syscall_sched_getaffinity
#define uk_syscall_fn204(...) \
	uk_syscall_e_sched_getaffinity(__VA_ARGS__)
#define uk_syscall0_fn204() \
	uk_syscall_e0_sched_getaffinity()
#define uk_syscall1_fn204(arg1) \
	uk_syscall_e1_sched_getaffinity(arg1)
#define uk_syscall2_fn204(arg1, arg2) \
	uk_syscall_e2_sched_getaffinity(arg1, arg2)
#define uk_syscall3_fn204(arg1, arg2, arg3) \
	uk_syscall_e3_sched_getaffinity(arg1, arg2, arg3)
#define uk_syscall4_fn204(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_getaffinity(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn204(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_getaffinity(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn204(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_getaffinity(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn204(...) \
	uk_syscall_r_sched_getaffinity(__VA_ARGS__)
#define uk_syscall_r0_fn204() \
	uk_syscall_r0_sched_getaffinity()
#define uk_syscall_r1_fn204(arg1) \
	uk_syscall_r1_sched_getaffinity(arg1)
#define uk_syscall_r2_fn204(arg1, arg2) \
	uk_syscall_r2_sched_getaffinity(arg1, arg2)
#define uk_syscall_r3_fn204(arg1, arg2, arg3) \
	uk_syscall_r3_sched_getaffinity(arg1, arg2, arg3)
#define uk_syscall_r4_fn204(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_getaffinity(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn204(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_getaffinity(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn204(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_getaffinity(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_getaffinity */
#define uk_syscall_fn204(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn204() _uk_syscall_e_enosys()
#define uk_syscall1_fn204(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn204(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn204(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn204(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn204(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn204(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn204(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn204() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn204(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn204(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn204(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn204(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn204(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn204(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_getaffinity */

#ifdef HAVE_uk_syscall_set_thread_area
#define uk_syscall_fn205(...) \
	uk_syscall_e_set_thread_area(__VA_ARGS__)
#define uk_syscall0_fn205() \
	uk_syscall_e0_set_thread_area()
#define uk_syscall1_fn205(arg1) \
	uk_syscall_e1_set_thread_area(arg1)
#define uk_syscall2_fn205(arg1, arg2) \
	uk_syscall_e2_set_thread_area(arg1, arg2)
#define uk_syscall3_fn205(arg1, arg2, arg3) \
	uk_syscall_e3_set_thread_area(arg1, arg2, arg3)
#define uk_syscall4_fn205(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_set_thread_area(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn205(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_set_thread_area(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn205(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_set_thread_area(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn205(...) \
	uk_syscall_r_set_thread_area(__VA_ARGS__)
#define uk_syscall_r0_fn205() \
	uk_syscall_r0_set_thread_area()
#define uk_syscall_r1_fn205(arg1) \
	uk_syscall_r1_set_thread_area(arg1)
#define uk_syscall_r2_fn205(arg1, arg2) \
	uk_syscall_r2_set_thread_area(arg1, arg2)
#define uk_syscall_r3_fn205(arg1, arg2, arg3) \
	uk_syscall_r3_set_thread_area(arg1, arg2, arg3)
#define uk_syscall_r4_fn205(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_set_thread_area(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn205(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_set_thread_area(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn205(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_set_thread_area(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_set_thread_area */
#define uk_syscall_fn205(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn205() _uk_syscall_e_enosys()
#define uk_syscall1_fn205(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn205(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn205(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn205(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn205(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn205(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn205(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn205() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn205(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn205(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn205(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn205(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn205(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn205(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_set_thread_area */

#ifdef HAVE_uk_syscall_io_setup
#define uk_syscall_fn206(...) \
	uk_syscall_e_io_setup(__VA_ARGS__)
#define uk_syscall0_fn206() \
	uk_syscall_e0_io_setup()
#define uk_syscall1_fn206(arg1) \
	uk_syscall_e1_io_setup(arg1)
#define uk_syscall2_fn206(arg1, arg2) \
	uk_syscall_e2_io_setup(arg1, arg2)
#define uk_syscall3_fn206(arg1, arg2, arg3) \
	uk_syscall_e3_io_setup(arg1, arg2, arg3)
#define uk_syscall4_fn206(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_setup(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn206(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_setup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn206(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_setup(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn206(...) \
	uk_syscall_r_io_setup(__VA_ARGS__)
#define uk_syscall_r0_fn206() \
	uk_syscall_r0_io_setup()
#define uk_syscall_r1_fn206(arg1) \
	uk_syscall_r1_io_setup(arg1)
#define uk_syscall_r2_fn206(arg1, arg2) \
	uk_syscall_r2_io_setup(arg1, arg2)
#define uk_syscall_r3_fn206(arg1, arg2, arg3) \
	uk_syscall_r3_io_setup(arg1, arg2, arg3)
#define uk_syscall_r4_fn206(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_setup(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn206(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_setup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn206(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_setup(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_setup */
#define uk_syscall_fn206(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn206() _uk_syscall_e_enosys()
#define uk_syscall1_fn206(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn206(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn206(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn206(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn206(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn206(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn206(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn206() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn206(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn206(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn206(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn206(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn206(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn206(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_setup */

#ifdef HAVE_uk_syscall_io_destroy
#define uk_syscall_fn207(...) \
	uk_syscall_e_io_destroy(__VA_ARGS__)
#define uk_syscall0_fn207() \
	uk_syscall_e0_io_destroy()
#define uk_syscall1_fn207(arg1) \
	uk_syscall_e1_io_destroy(arg1)
#define uk_syscall2_fn207(arg1, arg2) \
	uk_syscall_e2_io_destroy(arg1, arg2)
#define uk_syscall3_fn207(arg1, arg2, arg3) \
	uk_syscall_e3_io_destroy(arg1, arg2, arg3)
#define uk_syscall4_fn207(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_destroy(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn207(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_destroy(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn207(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_destroy(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn207(...) \
	uk_syscall_r_io_destroy(__VA_ARGS__)
#define uk_syscall_r0_fn207() \
	uk_syscall_r0_io_destroy()
#define uk_syscall_r1_fn207(arg1) \
	uk_syscall_r1_io_destroy(arg1)
#define uk_syscall_r2_fn207(arg1, arg2) \
	uk_syscall_r2_io_destroy(arg1, arg2)
#define uk_syscall_r3_fn207(arg1, arg2, arg3) \
	uk_syscall_r3_io_destroy(arg1, arg2, arg3)
#define uk_syscall_r4_fn207(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_destroy(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn207(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_destroy(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn207(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_destroy(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_destroy */
#define uk_syscall_fn207(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn207() _uk_syscall_e_enosys()
#define uk_syscall1_fn207(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn207(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn207(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn207(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn207(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn207(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn207(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn207() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn207(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn207(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn207(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn207(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn207(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn207(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_destroy */

#ifdef HAVE_uk_syscall_io_getevents
#define uk_syscall_fn208(...) \
	uk_syscall_e_io_getevents(__VA_ARGS__)
#define uk_syscall0_fn208() \
	uk_syscall_e0_io_getevents()
#define uk_syscall1_fn208(arg1) \
	uk_syscall_e1_io_getevents(arg1)
#define uk_syscall2_fn208(arg1, arg2) \
	uk_syscall_e2_io_getevents(arg1, arg2)
#define uk_syscall3_fn208(arg1, arg2, arg3) \
	uk_syscall_e3_io_getevents(arg1, arg2, arg3)
#define uk_syscall4_fn208(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_getevents(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn208(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_getevents(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn208(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_getevents(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn208(...) \
	uk_syscall_r_io_getevents(__VA_ARGS__)
#define uk_syscall_r0_fn208() \
	uk_syscall_r0_io_getevents()
#define uk_syscall_r1_fn208(arg1) \
	uk_syscall_r1_io_getevents(arg1)
#define uk_syscall_r2_fn208(arg1, arg2) \
	uk_syscall_r2_io_getevents(arg1, arg2)
#define uk_syscall_r3_fn208(arg1, arg2, arg3) \
	uk_syscall_r3_io_getevents(arg1, arg2, arg3)
#define uk_syscall_r4_fn208(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_getevents(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn208(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_getevents(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn208(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_getevents(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_getevents */
#define uk_syscall_fn208(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn208() _uk_syscall_e_enosys()
#define uk_syscall1_fn208(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn208(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn208(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn208(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn208(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn208(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn208(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn208() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn208(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn208(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn208(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn208(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn208(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn208(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_getevents */

#ifdef HAVE_uk_syscall_io_submit
#define uk_syscall_fn209(...) \
	uk_syscall_e_io_submit(__VA_ARGS__)
#define uk_syscall0_fn209() \
	uk_syscall_e0_io_submit()
#define uk_syscall1_fn209(arg1) \
	uk_syscall_e1_io_submit(arg1)
#define uk_syscall2_fn209(arg1, arg2) \
	uk_syscall_e2_io_submit(arg1, arg2)
#define uk_syscall3_fn209(arg1, arg2, arg3) \
	uk_syscall_e3_io_submit(arg1, arg2, arg3)
#define uk_syscall4_fn209(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_submit(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn209(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_submit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn209(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_submit(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn209(...) \
	uk_syscall_r_io_submit(__VA_ARGS__)
#define uk_syscall_r0_fn209() \
	uk_syscall_r0_io_submit()
#define uk_syscall_r1_fn209(arg1) \
	uk_syscall_r1_io_submit(arg1)
#define uk_syscall_r2_fn209(arg1, arg2) \
	uk_syscall_r2_io_submit(arg1, arg2)
#define uk_syscall_r3_fn209(arg1, arg2, arg3) \
	uk_syscall_r3_io_submit(arg1, arg2, arg3)
#define uk_syscall_r4_fn209(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_submit(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn209(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_submit(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn209(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_submit(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_submit */
#define uk_syscall_fn209(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn209() _uk_syscall_e_enosys()
#define uk_syscall1_fn209(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn209(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn209(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn209(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn209(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn209(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn209(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn209() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn209(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn209(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn209(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn209(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn209(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn209(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_submit */

#ifdef HAVE_uk_syscall_io_cancel
#define uk_syscall_fn210(...) \
	uk_syscall_e_io_cancel(__VA_ARGS__)
#define uk_syscall0_fn210() \
	uk_syscall_e0_io_cancel()
#define uk_syscall1_fn210(arg1) \
	uk_syscall_e1_io_cancel(arg1)
#define uk_syscall2_fn210(arg1, arg2) \
	uk_syscall_e2_io_cancel(arg1, arg2)
#define uk_syscall3_fn210(arg1, arg2, arg3) \
	uk_syscall_e3_io_cancel(arg1, arg2, arg3)
#define uk_syscall4_fn210(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_cancel(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn210(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_cancel(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn210(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_cancel(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn210(...) \
	uk_syscall_r_io_cancel(__VA_ARGS__)
#define uk_syscall_r0_fn210() \
	uk_syscall_r0_io_cancel()
#define uk_syscall_r1_fn210(arg1) \
	uk_syscall_r1_io_cancel(arg1)
#define uk_syscall_r2_fn210(arg1, arg2) \
	uk_syscall_r2_io_cancel(arg1, arg2)
#define uk_syscall_r3_fn210(arg1, arg2, arg3) \
	uk_syscall_r3_io_cancel(arg1, arg2, arg3)
#define uk_syscall_r4_fn210(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_cancel(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn210(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_cancel(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn210(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_cancel(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_cancel */
#define uk_syscall_fn210(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn210() _uk_syscall_e_enosys()
#define uk_syscall1_fn210(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn210(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn210(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn210(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn210(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn210(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn210(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn210() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn210(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn210(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn210(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn210(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn210(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn210(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_cancel */

#ifdef HAVE_uk_syscall_get_thread_area
#define uk_syscall_fn211(...) \
	uk_syscall_e_get_thread_area(__VA_ARGS__)
#define uk_syscall0_fn211() \
	uk_syscall_e0_get_thread_area()
#define uk_syscall1_fn211(arg1) \
	uk_syscall_e1_get_thread_area(arg1)
#define uk_syscall2_fn211(arg1, arg2) \
	uk_syscall_e2_get_thread_area(arg1, arg2)
#define uk_syscall3_fn211(arg1, arg2, arg3) \
	uk_syscall_e3_get_thread_area(arg1, arg2, arg3)
#define uk_syscall4_fn211(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_get_thread_area(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn211(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_get_thread_area(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn211(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_get_thread_area(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn211(...) \
	uk_syscall_r_get_thread_area(__VA_ARGS__)
#define uk_syscall_r0_fn211() \
	uk_syscall_r0_get_thread_area()
#define uk_syscall_r1_fn211(arg1) \
	uk_syscall_r1_get_thread_area(arg1)
#define uk_syscall_r2_fn211(arg1, arg2) \
	uk_syscall_r2_get_thread_area(arg1, arg2)
#define uk_syscall_r3_fn211(arg1, arg2, arg3) \
	uk_syscall_r3_get_thread_area(arg1, arg2, arg3)
#define uk_syscall_r4_fn211(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_get_thread_area(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn211(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_get_thread_area(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn211(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_get_thread_area(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_get_thread_area */
#define uk_syscall_fn211(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn211() _uk_syscall_e_enosys()
#define uk_syscall1_fn211(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn211(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn211(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn211(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn211(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn211(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn211(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn211() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn211(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn211(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn211(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn211(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn211(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn211(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_get_thread_area */

#ifdef HAVE_uk_syscall_lookup_dcookie
#define uk_syscall_fn212(...) \
	uk_syscall_e_lookup_dcookie(__VA_ARGS__)
#define uk_syscall0_fn212() \
	uk_syscall_e0_lookup_dcookie()
#define uk_syscall1_fn212(arg1) \
	uk_syscall_e1_lookup_dcookie(arg1)
#define uk_syscall2_fn212(arg1, arg2) \
	uk_syscall_e2_lookup_dcookie(arg1, arg2)
#define uk_syscall3_fn212(arg1, arg2, arg3) \
	uk_syscall_e3_lookup_dcookie(arg1, arg2, arg3)
#define uk_syscall4_fn212(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_lookup_dcookie(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn212(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_lookup_dcookie(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn212(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_lookup_dcookie(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn212(...) \
	uk_syscall_r_lookup_dcookie(__VA_ARGS__)
#define uk_syscall_r0_fn212() \
	uk_syscall_r0_lookup_dcookie()
#define uk_syscall_r1_fn212(arg1) \
	uk_syscall_r1_lookup_dcookie(arg1)
#define uk_syscall_r2_fn212(arg1, arg2) \
	uk_syscall_r2_lookup_dcookie(arg1, arg2)
#define uk_syscall_r3_fn212(arg1, arg2, arg3) \
	uk_syscall_r3_lookup_dcookie(arg1, arg2, arg3)
#define uk_syscall_r4_fn212(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_lookup_dcookie(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn212(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_lookup_dcookie(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn212(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_lookup_dcookie(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_lookup_dcookie */
#define uk_syscall_fn212(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn212() _uk_syscall_e_enosys()
#define uk_syscall1_fn212(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn212(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn212(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn212(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn212(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn212(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn212(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn212() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn212(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn212(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn212(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn212(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn212(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn212(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_lookup_dcookie */

#ifdef HAVE_uk_syscall_epoll_create
#define uk_syscall_fn213(...) \
	uk_syscall_e_epoll_create(__VA_ARGS__)
#define uk_syscall0_fn213() \
	uk_syscall_e0_epoll_create()
#define uk_syscall1_fn213(arg1) \
	uk_syscall_e1_epoll_create(arg1)
#define uk_syscall2_fn213(arg1, arg2) \
	uk_syscall_e2_epoll_create(arg1, arg2)
#define uk_syscall3_fn213(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_create(arg1, arg2, arg3)
#define uk_syscall4_fn213(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_create(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn213(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn213(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_create(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn213(...) \
	uk_syscall_r_epoll_create(__VA_ARGS__)
#define uk_syscall_r0_fn213() \
	uk_syscall_r0_epoll_create()
#define uk_syscall_r1_fn213(arg1) \
	uk_syscall_r1_epoll_create(arg1)
#define uk_syscall_r2_fn213(arg1, arg2) \
	uk_syscall_r2_epoll_create(arg1, arg2)
#define uk_syscall_r3_fn213(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_create(arg1, arg2, arg3)
#define uk_syscall_r4_fn213(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_create(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn213(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn213(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_create(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_create */
#define uk_syscall_fn213(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn213() _uk_syscall_e_enosys()
#define uk_syscall1_fn213(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn213(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn213(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn213(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn213(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn213(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn213(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn213() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn213(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn213(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn213(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn213(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn213(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn213(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_create */

#ifdef HAVE_uk_syscall_epoll_ctl_old
#define uk_syscall_fn214(...) \
	uk_syscall_e_epoll_ctl_old(__VA_ARGS__)
#define uk_syscall0_fn214() \
	uk_syscall_e0_epoll_ctl_old()
#define uk_syscall1_fn214(arg1) \
	uk_syscall_e1_epoll_ctl_old(arg1)
#define uk_syscall2_fn214(arg1, arg2) \
	uk_syscall_e2_epoll_ctl_old(arg1, arg2)
#define uk_syscall3_fn214(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_ctl_old(arg1, arg2, arg3)
#define uk_syscall4_fn214(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_ctl_old(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn214(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_ctl_old(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn214(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_ctl_old(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn214(...) \
	uk_syscall_r_epoll_ctl_old(__VA_ARGS__)
#define uk_syscall_r0_fn214() \
	uk_syscall_r0_epoll_ctl_old()
#define uk_syscall_r1_fn214(arg1) \
	uk_syscall_r1_epoll_ctl_old(arg1)
#define uk_syscall_r2_fn214(arg1, arg2) \
	uk_syscall_r2_epoll_ctl_old(arg1, arg2)
#define uk_syscall_r3_fn214(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_ctl_old(arg1, arg2, arg3)
#define uk_syscall_r4_fn214(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_ctl_old(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn214(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_ctl_old(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn214(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_ctl_old(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_ctl_old */
#define uk_syscall_fn214(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn214() _uk_syscall_e_enosys()
#define uk_syscall1_fn214(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn214(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn214(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn214(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn214(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn214(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn214(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn214() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn214(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn214(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn214(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn214(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn214(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn214(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_ctl_old */

#ifdef HAVE_uk_syscall_epoll_wait_old
#define uk_syscall_fn215(...) \
	uk_syscall_e_epoll_wait_old(__VA_ARGS__)
#define uk_syscall0_fn215() \
	uk_syscall_e0_epoll_wait_old()
#define uk_syscall1_fn215(arg1) \
	uk_syscall_e1_epoll_wait_old(arg1)
#define uk_syscall2_fn215(arg1, arg2) \
	uk_syscall_e2_epoll_wait_old(arg1, arg2)
#define uk_syscall3_fn215(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_wait_old(arg1, arg2, arg3)
#define uk_syscall4_fn215(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_wait_old(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn215(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_wait_old(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn215(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_wait_old(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn215(...) \
	uk_syscall_r_epoll_wait_old(__VA_ARGS__)
#define uk_syscall_r0_fn215() \
	uk_syscall_r0_epoll_wait_old()
#define uk_syscall_r1_fn215(arg1) \
	uk_syscall_r1_epoll_wait_old(arg1)
#define uk_syscall_r2_fn215(arg1, arg2) \
	uk_syscall_r2_epoll_wait_old(arg1, arg2)
#define uk_syscall_r3_fn215(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_wait_old(arg1, arg2, arg3)
#define uk_syscall_r4_fn215(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_wait_old(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn215(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_wait_old(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn215(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_wait_old(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_wait_old */
#define uk_syscall_fn215(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn215() _uk_syscall_e_enosys()
#define uk_syscall1_fn215(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn215(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn215(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn215(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn215(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn215(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn215(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn215() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn215(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn215(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn215(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn215(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn215(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn215(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_wait_old */

#ifdef HAVE_uk_syscall_remap_file_pages
#define uk_syscall_fn216(...) \
	uk_syscall_e_remap_file_pages(__VA_ARGS__)
#define uk_syscall0_fn216() \
	uk_syscall_e0_remap_file_pages()
#define uk_syscall1_fn216(arg1) \
	uk_syscall_e1_remap_file_pages(arg1)
#define uk_syscall2_fn216(arg1, arg2) \
	uk_syscall_e2_remap_file_pages(arg1, arg2)
#define uk_syscall3_fn216(arg1, arg2, arg3) \
	uk_syscall_e3_remap_file_pages(arg1, arg2, arg3)
#define uk_syscall4_fn216(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_remap_file_pages(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn216(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_remap_file_pages(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn216(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_remap_file_pages(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn216(...) \
	uk_syscall_r_remap_file_pages(__VA_ARGS__)
#define uk_syscall_r0_fn216() \
	uk_syscall_r0_remap_file_pages()
#define uk_syscall_r1_fn216(arg1) \
	uk_syscall_r1_remap_file_pages(arg1)
#define uk_syscall_r2_fn216(arg1, arg2) \
	uk_syscall_r2_remap_file_pages(arg1, arg2)
#define uk_syscall_r3_fn216(arg1, arg2, arg3) \
	uk_syscall_r3_remap_file_pages(arg1, arg2, arg3)
#define uk_syscall_r4_fn216(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_remap_file_pages(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn216(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_remap_file_pages(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn216(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_remap_file_pages(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_remap_file_pages */
#define uk_syscall_fn216(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn216() _uk_syscall_e_enosys()
#define uk_syscall1_fn216(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn216(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn216(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn216(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn216(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn216(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn216(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn216() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn216(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn216(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn216(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn216(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn216(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn216(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_remap_file_pages */

#ifdef HAVE_uk_syscall_getdents64
#define uk_syscall_fn217(...) \
	uk_syscall_e_getdents64(__VA_ARGS__)
#define uk_syscall0_fn217() \
	uk_syscall_e0_getdents64()
#define uk_syscall1_fn217(arg1) \
	uk_syscall_e1_getdents64(arg1)
#define uk_syscall2_fn217(arg1, arg2) \
	uk_syscall_e2_getdents64(arg1, arg2)
#define uk_syscall3_fn217(arg1, arg2, arg3) \
	uk_syscall_e3_getdents64(arg1, arg2, arg3)
#define uk_syscall4_fn217(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getdents64(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn217(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getdents64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn217(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getdents64(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn217(...) \
	uk_syscall_r_getdents64(__VA_ARGS__)
#define uk_syscall_r0_fn217() \
	uk_syscall_r0_getdents64()
#define uk_syscall_r1_fn217(arg1) \
	uk_syscall_r1_getdents64(arg1)
#define uk_syscall_r2_fn217(arg1, arg2) \
	uk_syscall_r2_getdents64(arg1, arg2)
#define uk_syscall_r3_fn217(arg1, arg2, arg3) \
	uk_syscall_r3_getdents64(arg1, arg2, arg3)
#define uk_syscall_r4_fn217(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getdents64(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn217(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getdents64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn217(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getdents64(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getdents64 */
#define uk_syscall_fn217(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn217() _uk_syscall_e_enosys()
#define uk_syscall1_fn217(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn217(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn217(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn217(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn217(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn217(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn217(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn217() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn217(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn217(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn217(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn217(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn217(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn217(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getdents64 */

#ifdef HAVE_uk_syscall_set_tid_address
#define uk_syscall_fn218(...) \
	uk_syscall_e_set_tid_address(__VA_ARGS__)
#define uk_syscall0_fn218() \
	uk_syscall_e0_set_tid_address()
#define uk_syscall1_fn218(arg1) \
	uk_syscall_e1_set_tid_address(arg1)
#define uk_syscall2_fn218(arg1, arg2) \
	uk_syscall_e2_set_tid_address(arg1, arg2)
#define uk_syscall3_fn218(arg1, arg2, arg3) \
	uk_syscall_e3_set_tid_address(arg1, arg2, arg3)
#define uk_syscall4_fn218(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_set_tid_address(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn218(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_set_tid_address(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn218(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_set_tid_address(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn218(...) \
	uk_syscall_r_set_tid_address(__VA_ARGS__)
#define uk_syscall_r0_fn218() \
	uk_syscall_r0_set_tid_address()
#define uk_syscall_r1_fn218(arg1) \
	uk_syscall_r1_set_tid_address(arg1)
#define uk_syscall_r2_fn218(arg1, arg2) \
	uk_syscall_r2_set_tid_address(arg1, arg2)
#define uk_syscall_r3_fn218(arg1, arg2, arg3) \
	uk_syscall_r3_set_tid_address(arg1, arg2, arg3)
#define uk_syscall_r4_fn218(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_set_tid_address(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn218(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_set_tid_address(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn218(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_set_tid_address(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_set_tid_address */
#define uk_syscall_fn218(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn218() _uk_syscall_e_enosys()
#define uk_syscall1_fn218(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn218(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn218(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn218(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn218(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn218(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn218(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn218() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn218(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn218(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn218(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn218(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn218(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn218(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_set_tid_address */

#ifdef HAVE_uk_syscall_restart_syscall
#define uk_syscall_fn219(...) \
	uk_syscall_e_restart_syscall(__VA_ARGS__)
#define uk_syscall0_fn219() \
	uk_syscall_e0_restart_syscall()
#define uk_syscall1_fn219(arg1) \
	uk_syscall_e1_restart_syscall(arg1)
#define uk_syscall2_fn219(arg1, arg2) \
	uk_syscall_e2_restart_syscall(arg1, arg2)
#define uk_syscall3_fn219(arg1, arg2, arg3) \
	uk_syscall_e3_restart_syscall(arg1, arg2, arg3)
#define uk_syscall4_fn219(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_restart_syscall(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn219(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_restart_syscall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn219(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_restart_syscall(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn219(...) \
	uk_syscall_r_restart_syscall(__VA_ARGS__)
#define uk_syscall_r0_fn219() \
	uk_syscall_r0_restart_syscall()
#define uk_syscall_r1_fn219(arg1) \
	uk_syscall_r1_restart_syscall(arg1)
#define uk_syscall_r2_fn219(arg1, arg2) \
	uk_syscall_r2_restart_syscall(arg1, arg2)
#define uk_syscall_r3_fn219(arg1, arg2, arg3) \
	uk_syscall_r3_restart_syscall(arg1, arg2, arg3)
#define uk_syscall_r4_fn219(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_restart_syscall(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn219(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_restart_syscall(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn219(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_restart_syscall(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_restart_syscall */
#define uk_syscall_fn219(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn219() _uk_syscall_e_enosys()
#define uk_syscall1_fn219(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn219(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn219(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn219(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn219(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn219(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn219(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn219() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn219(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn219(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn219(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn219(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn219(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn219(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_restart_syscall */

#ifdef HAVE_uk_syscall_semtimedop
#define uk_syscall_fn220(...) \
	uk_syscall_e_semtimedop(__VA_ARGS__)
#define uk_syscall0_fn220() \
	uk_syscall_e0_semtimedop()
#define uk_syscall1_fn220(arg1) \
	uk_syscall_e1_semtimedop(arg1)
#define uk_syscall2_fn220(arg1, arg2) \
	uk_syscall_e2_semtimedop(arg1, arg2)
#define uk_syscall3_fn220(arg1, arg2, arg3) \
	uk_syscall_e3_semtimedop(arg1, arg2, arg3)
#define uk_syscall4_fn220(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_semtimedop(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn220(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_semtimedop(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn220(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_semtimedop(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn220(...) \
	uk_syscall_r_semtimedop(__VA_ARGS__)
#define uk_syscall_r0_fn220() \
	uk_syscall_r0_semtimedop()
#define uk_syscall_r1_fn220(arg1) \
	uk_syscall_r1_semtimedop(arg1)
#define uk_syscall_r2_fn220(arg1, arg2) \
	uk_syscall_r2_semtimedop(arg1, arg2)
#define uk_syscall_r3_fn220(arg1, arg2, arg3) \
	uk_syscall_r3_semtimedop(arg1, arg2, arg3)
#define uk_syscall_r4_fn220(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_semtimedop(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn220(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_semtimedop(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn220(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_semtimedop(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_semtimedop */
#define uk_syscall_fn220(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn220() _uk_syscall_e_enosys()
#define uk_syscall1_fn220(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn220(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn220(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn220(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn220(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn220(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn220(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn220() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn220(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn220(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn220(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn220(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn220(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn220(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_semtimedop */

#ifdef HAVE_uk_syscall_fadvise64
#define uk_syscall_fn221(...) \
	uk_syscall_e_fadvise64(__VA_ARGS__)
#define uk_syscall0_fn221() \
	uk_syscall_e0_fadvise64()
#define uk_syscall1_fn221(arg1) \
	uk_syscall_e1_fadvise64(arg1)
#define uk_syscall2_fn221(arg1, arg2) \
	uk_syscall_e2_fadvise64(arg1, arg2)
#define uk_syscall3_fn221(arg1, arg2, arg3) \
	uk_syscall_e3_fadvise64(arg1, arg2, arg3)
#define uk_syscall4_fn221(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fadvise64(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn221(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fadvise64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn221(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fadvise64(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn221(...) \
	uk_syscall_r_fadvise64(__VA_ARGS__)
#define uk_syscall_r0_fn221() \
	uk_syscall_r0_fadvise64()
#define uk_syscall_r1_fn221(arg1) \
	uk_syscall_r1_fadvise64(arg1)
#define uk_syscall_r2_fn221(arg1, arg2) \
	uk_syscall_r2_fadvise64(arg1, arg2)
#define uk_syscall_r3_fn221(arg1, arg2, arg3) \
	uk_syscall_r3_fadvise64(arg1, arg2, arg3)
#define uk_syscall_r4_fn221(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fadvise64(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn221(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fadvise64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn221(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fadvise64(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fadvise64 */
#define uk_syscall_fn221(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn221() _uk_syscall_e_enosys()
#define uk_syscall1_fn221(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn221(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn221(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn221(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn221(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn221(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn221(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn221() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn221(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn221(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn221(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn221(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn221(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn221(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fadvise64 */

#ifdef HAVE_uk_syscall_timer_create
#define uk_syscall_fn222(...) \
	uk_syscall_e_timer_create(__VA_ARGS__)
#define uk_syscall0_fn222() \
	uk_syscall_e0_timer_create()
#define uk_syscall1_fn222(arg1) \
	uk_syscall_e1_timer_create(arg1)
#define uk_syscall2_fn222(arg1, arg2) \
	uk_syscall_e2_timer_create(arg1, arg2)
#define uk_syscall3_fn222(arg1, arg2, arg3) \
	uk_syscall_e3_timer_create(arg1, arg2, arg3)
#define uk_syscall4_fn222(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timer_create(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn222(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timer_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn222(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timer_create(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn222(...) \
	uk_syscall_r_timer_create(__VA_ARGS__)
#define uk_syscall_r0_fn222() \
	uk_syscall_r0_timer_create()
#define uk_syscall_r1_fn222(arg1) \
	uk_syscall_r1_timer_create(arg1)
#define uk_syscall_r2_fn222(arg1, arg2) \
	uk_syscall_r2_timer_create(arg1, arg2)
#define uk_syscall_r3_fn222(arg1, arg2, arg3) \
	uk_syscall_r3_timer_create(arg1, arg2, arg3)
#define uk_syscall_r4_fn222(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timer_create(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn222(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timer_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn222(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timer_create(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timer_create */
#define uk_syscall_fn222(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn222() _uk_syscall_e_enosys()
#define uk_syscall1_fn222(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn222(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn222(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn222(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn222(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn222(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn222(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn222() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn222(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn222(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn222(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn222(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn222(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn222(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timer_create */

#ifdef HAVE_uk_syscall_timer_settime
#define uk_syscall_fn223(...) \
	uk_syscall_e_timer_settime(__VA_ARGS__)
#define uk_syscall0_fn223() \
	uk_syscall_e0_timer_settime()
#define uk_syscall1_fn223(arg1) \
	uk_syscall_e1_timer_settime(arg1)
#define uk_syscall2_fn223(arg1, arg2) \
	uk_syscall_e2_timer_settime(arg1, arg2)
#define uk_syscall3_fn223(arg1, arg2, arg3) \
	uk_syscall_e3_timer_settime(arg1, arg2, arg3)
#define uk_syscall4_fn223(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timer_settime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn223(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timer_settime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn223(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timer_settime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn223(...) \
	uk_syscall_r_timer_settime(__VA_ARGS__)
#define uk_syscall_r0_fn223() \
	uk_syscall_r0_timer_settime()
#define uk_syscall_r1_fn223(arg1) \
	uk_syscall_r1_timer_settime(arg1)
#define uk_syscall_r2_fn223(arg1, arg2) \
	uk_syscall_r2_timer_settime(arg1, arg2)
#define uk_syscall_r3_fn223(arg1, arg2, arg3) \
	uk_syscall_r3_timer_settime(arg1, arg2, arg3)
#define uk_syscall_r4_fn223(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timer_settime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn223(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timer_settime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn223(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timer_settime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timer_settime */
#define uk_syscall_fn223(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn223() _uk_syscall_e_enosys()
#define uk_syscall1_fn223(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn223(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn223(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn223(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn223(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn223(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn223(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn223() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn223(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn223(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn223(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn223(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn223(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn223(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timer_settime */

#ifdef HAVE_uk_syscall_timer_gettime
#define uk_syscall_fn224(...) \
	uk_syscall_e_timer_gettime(__VA_ARGS__)
#define uk_syscall0_fn224() \
	uk_syscall_e0_timer_gettime()
#define uk_syscall1_fn224(arg1) \
	uk_syscall_e1_timer_gettime(arg1)
#define uk_syscall2_fn224(arg1, arg2) \
	uk_syscall_e2_timer_gettime(arg1, arg2)
#define uk_syscall3_fn224(arg1, arg2, arg3) \
	uk_syscall_e3_timer_gettime(arg1, arg2, arg3)
#define uk_syscall4_fn224(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timer_gettime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn224(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timer_gettime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn224(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timer_gettime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn224(...) \
	uk_syscall_r_timer_gettime(__VA_ARGS__)
#define uk_syscall_r0_fn224() \
	uk_syscall_r0_timer_gettime()
#define uk_syscall_r1_fn224(arg1) \
	uk_syscall_r1_timer_gettime(arg1)
#define uk_syscall_r2_fn224(arg1, arg2) \
	uk_syscall_r2_timer_gettime(arg1, arg2)
#define uk_syscall_r3_fn224(arg1, arg2, arg3) \
	uk_syscall_r3_timer_gettime(arg1, arg2, arg3)
#define uk_syscall_r4_fn224(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timer_gettime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn224(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timer_gettime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn224(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timer_gettime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timer_gettime */
#define uk_syscall_fn224(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn224() _uk_syscall_e_enosys()
#define uk_syscall1_fn224(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn224(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn224(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn224(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn224(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn224(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn224(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn224() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn224(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn224(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn224(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn224(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn224(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn224(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timer_gettime */

#ifdef HAVE_uk_syscall_timer_getoverrun
#define uk_syscall_fn225(...) \
	uk_syscall_e_timer_getoverrun(__VA_ARGS__)
#define uk_syscall0_fn225() \
	uk_syscall_e0_timer_getoverrun()
#define uk_syscall1_fn225(arg1) \
	uk_syscall_e1_timer_getoverrun(arg1)
#define uk_syscall2_fn225(arg1, arg2) \
	uk_syscall_e2_timer_getoverrun(arg1, arg2)
#define uk_syscall3_fn225(arg1, arg2, arg3) \
	uk_syscall_e3_timer_getoverrun(arg1, arg2, arg3)
#define uk_syscall4_fn225(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timer_getoverrun(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn225(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timer_getoverrun(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn225(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timer_getoverrun(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn225(...) \
	uk_syscall_r_timer_getoverrun(__VA_ARGS__)
#define uk_syscall_r0_fn225() \
	uk_syscall_r0_timer_getoverrun()
#define uk_syscall_r1_fn225(arg1) \
	uk_syscall_r1_timer_getoverrun(arg1)
#define uk_syscall_r2_fn225(arg1, arg2) \
	uk_syscall_r2_timer_getoverrun(arg1, arg2)
#define uk_syscall_r3_fn225(arg1, arg2, arg3) \
	uk_syscall_r3_timer_getoverrun(arg1, arg2, arg3)
#define uk_syscall_r4_fn225(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timer_getoverrun(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn225(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timer_getoverrun(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn225(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timer_getoverrun(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timer_getoverrun */
#define uk_syscall_fn225(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn225() _uk_syscall_e_enosys()
#define uk_syscall1_fn225(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn225(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn225(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn225(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn225(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn225(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn225(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn225() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn225(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn225(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn225(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn225(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn225(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn225(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timer_getoverrun */

#ifdef HAVE_uk_syscall_timer_delete
#define uk_syscall_fn226(...) \
	uk_syscall_e_timer_delete(__VA_ARGS__)
#define uk_syscall0_fn226() \
	uk_syscall_e0_timer_delete()
#define uk_syscall1_fn226(arg1) \
	uk_syscall_e1_timer_delete(arg1)
#define uk_syscall2_fn226(arg1, arg2) \
	uk_syscall_e2_timer_delete(arg1, arg2)
#define uk_syscall3_fn226(arg1, arg2, arg3) \
	uk_syscall_e3_timer_delete(arg1, arg2, arg3)
#define uk_syscall4_fn226(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timer_delete(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn226(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timer_delete(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn226(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timer_delete(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn226(...) \
	uk_syscall_r_timer_delete(__VA_ARGS__)
#define uk_syscall_r0_fn226() \
	uk_syscall_r0_timer_delete()
#define uk_syscall_r1_fn226(arg1) \
	uk_syscall_r1_timer_delete(arg1)
#define uk_syscall_r2_fn226(arg1, arg2) \
	uk_syscall_r2_timer_delete(arg1, arg2)
#define uk_syscall_r3_fn226(arg1, arg2, arg3) \
	uk_syscall_r3_timer_delete(arg1, arg2, arg3)
#define uk_syscall_r4_fn226(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timer_delete(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn226(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timer_delete(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn226(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timer_delete(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timer_delete */
#define uk_syscall_fn226(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn226() _uk_syscall_e_enosys()
#define uk_syscall1_fn226(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn226(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn226(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn226(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn226(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn226(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn226(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn226() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn226(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn226(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn226(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn226(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn226(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn226(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timer_delete */

#ifdef HAVE_uk_syscall_clock_settime
#define uk_syscall_fn227(...) \
	uk_syscall_e_clock_settime(__VA_ARGS__)
#define uk_syscall0_fn227() \
	uk_syscall_e0_clock_settime()
#define uk_syscall1_fn227(arg1) \
	uk_syscall_e1_clock_settime(arg1)
#define uk_syscall2_fn227(arg1, arg2) \
	uk_syscall_e2_clock_settime(arg1, arg2)
#define uk_syscall3_fn227(arg1, arg2, arg3) \
	uk_syscall_e3_clock_settime(arg1, arg2, arg3)
#define uk_syscall4_fn227(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_clock_settime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn227(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_clock_settime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn227(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_clock_settime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn227(...) \
	uk_syscall_r_clock_settime(__VA_ARGS__)
#define uk_syscall_r0_fn227() \
	uk_syscall_r0_clock_settime()
#define uk_syscall_r1_fn227(arg1) \
	uk_syscall_r1_clock_settime(arg1)
#define uk_syscall_r2_fn227(arg1, arg2) \
	uk_syscall_r2_clock_settime(arg1, arg2)
#define uk_syscall_r3_fn227(arg1, arg2, arg3) \
	uk_syscall_r3_clock_settime(arg1, arg2, arg3)
#define uk_syscall_r4_fn227(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_clock_settime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn227(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_clock_settime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn227(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_clock_settime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_clock_settime */
#define uk_syscall_fn227(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn227() _uk_syscall_e_enosys()
#define uk_syscall1_fn227(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn227(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn227(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn227(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn227(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn227(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn227(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn227() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn227(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn227(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn227(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn227(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn227(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn227(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_clock_settime */

#ifdef HAVE_uk_syscall_clock_gettime
#define uk_syscall_fn228(...) \
	uk_syscall_e_clock_gettime(__VA_ARGS__)
#define uk_syscall0_fn228() \
	uk_syscall_e0_clock_gettime()
#define uk_syscall1_fn228(arg1) \
	uk_syscall_e1_clock_gettime(arg1)
#define uk_syscall2_fn228(arg1, arg2) \
	uk_syscall_e2_clock_gettime(arg1, arg2)
#define uk_syscall3_fn228(arg1, arg2, arg3) \
	uk_syscall_e3_clock_gettime(arg1, arg2, arg3)
#define uk_syscall4_fn228(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_clock_gettime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn228(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_clock_gettime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn228(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_clock_gettime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn228(...) \
	uk_syscall_r_clock_gettime(__VA_ARGS__)
#define uk_syscall_r0_fn228() \
	uk_syscall_r0_clock_gettime()
#define uk_syscall_r1_fn228(arg1) \
	uk_syscall_r1_clock_gettime(arg1)
#define uk_syscall_r2_fn228(arg1, arg2) \
	uk_syscall_r2_clock_gettime(arg1, arg2)
#define uk_syscall_r3_fn228(arg1, arg2, arg3) \
	uk_syscall_r3_clock_gettime(arg1, arg2, arg3)
#define uk_syscall_r4_fn228(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_clock_gettime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn228(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_clock_gettime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn228(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_clock_gettime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_clock_gettime */
#define uk_syscall_fn228(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn228() _uk_syscall_e_enosys()
#define uk_syscall1_fn228(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn228(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn228(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn228(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn228(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn228(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn228(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn228() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn228(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn228(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn228(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn228(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn228(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn228(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_clock_gettime */

#ifdef HAVE_uk_syscall_clock_getres
#define uk_syscall_fn229(...) \
	uk_syscall_e_clock_getres(__VA_ARGS__)
#define uk_syscall0_fn229() \
	uk_syscall_e0_clock_getres()
#define uk_syscall1_fn229(arg1) \
	uk_syscall_e1_clock_getres(arg1)
#define uk_syscall2_fn229(arg1, arg2) \
	uk_syscall_e2_clock_getres(arg1, arg2)
#define uk_syscall3_fn229(arg1, arg2, arg3) \
	uk_syscall_e3_clock_getres(arg1, arg2, arg3)
#define uk_syscall4_fn229(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_clock_getres(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn229(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_clock_getres(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn229(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_clock_getres(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn229(...) \
	uk_syscall_r_clock_getres(__VA_ARGS__)
#define uk_syscall_r0_fn229() \
	uk_syscall_r0_clock_getres()
#define uk_syscall_r1_fn229(arg1) \
	uk_syscall_r1_clock_getres(arg1)
#define uk_syscall_r2_fn229(arg1, arg2) \
	uk_syscall_r2_clock_getres(arg1, arg2)
#define uk_syscall_r3_fn229(arg1, arg2, arg3) \
	uk_syscall_r3_clock_getres(arg1, arg2, arg3)
#define uk_syscall_r4_fn229(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_clock_getres(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn229(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_clock_getres(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn229(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_clock_getres(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_clock_getres */
#define uk_syscall_fn229(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn229() _uk_syscall_e_enosys()
#define uk_syscall1_fn229(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn229(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn229(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn229(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn229(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn229(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn229(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn229() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn229(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn229(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn229(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn229(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn229(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn229(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_clock_getres */

#ifdef HAVE_uk_syscall_clock_nanosleep
#define uk_syscall_fn230(...) \
	uk_syscall_e_clock_nanosleep(__VA_ARGS__)
#define uk_syscall0_fn230() \
	uk_syscall_e0_clock_nanosleep()
#define uk_syscall1_fn230(arg1) \
	uk_syscall_e1_clock_nanosleep(arg1)
#define uk_syscall2_fn230(arg1, arg2) \
	uk_syscall_e2_clock_nanosleep(arg1, arg2)
#define uk_syscall3_fn230(arg1, arg2, arg3) \
	uk_syscall_e3_clock_nanosleep(arg1, arg2, arg3)
#define uk_syscall4_fn230(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_clock_nanosleep(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn230(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_clock_nanosleep(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn230(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_clock_nanosleep(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn230(...) \
	uk_syscall_r_clock_nanosleep(__VA_ARGS__)
#define uk_syscall_r0_fn230() \
	uk_syscall_r0_clock_nanosleep()
#define uk_syscall_r1_fn230(arg1) \
	uk_syscall_r1_clock_nanosleep(arg1)
#define uk_syscall_r2_fn230(arg1, arg2) \
	uk_syscall_r2_clock_nanosleep(arg1, arg2)
#define uk_syscall_r3_fn230(arg1, arg2, arg3) \
	uk_syscall_r3_clock_nanosleep(arg1, arg2, arg3)
#define uk_syscall_r4_fn230(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_clock_nanosleep(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn230(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_clock_nanosleep(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn230(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_clock_nanosleep(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_clock_nanosleep */
#define uk_syscall_fn230(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn230() _uk_syscall_e_enosys()
#define uk_syscall1_fn230(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn230(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn230(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn230(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn230(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn230(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn230(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn230() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn230(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn230(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn230(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn230(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn230(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn230(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_clock_nanosleep */

#ifdef HAVE_uk_syscall_exit_group
#define uk_syscall_fn231(...) \
	uk_syscall_e_exit_group(__VA_ARGS__)
#define uk_syscall0_fn231() \
	uk_syscall_e0_exit_group()
#define uk_syscall1_fn231(arg1) \
	uk_syscall_e1_exit_group(arg1)
#define uk_syscall2_fn231(arg1, arg2) \
	uk_syscall_e2_exit_group(arg1, arg2)
#define uk_syscall3_fn231(arg1, arg2, arg3) \
	uk_syscall_e3_exit_group(arg1, arg2, arg3)
#define uk_syscall4_fn231(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_exit_group(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn231(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_exit_group(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn231(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_exit_group(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn231(...) \
	uk_syscall_r_exit_group(__VA_ARGS__)
#define uk_syscall_r0_fn231() \
	uk_syscall_r0_exit_group()
#define uk_syscall_r1_fn231(arg1) \
	uk_syscall_r1_exit_group(arg1)
#define uk_syscall_r2_fn231(arg1, arg2) \
	uk_syscall_r2_exit_group(arg1, arg2)
#define uk_syscall_r3_fn231(arg1, arg2, arg3) \
	uk_syscall_r3_exit_group(arg1, arg2, arg3)
#define uk_syscall_r4_fn231(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_exit_group(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn231(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_exit_group(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn231(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_exit_group(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_exit_group */
#define uk_syscall_fn231(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn231() _uk_syscall_e_enosys()
#define uk_syscall1_fn231(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn231(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn231(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn231(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn231(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn231(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn231(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn231() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn231(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn231(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn231(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn231(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn231(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn231(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_exit_group */

#ifdef HAVE_uk_syscall_epoll_wait
#define uk_syscall_fn232(...) \
	uk_syscall_e_epoll_wait(__VA_ARGS__)
#define uk_syscall0_fn232() \
	uk_syscall_e0_epoll_wait()
#define uk_syscall1_fn232(arg1) \
	uk_syscall_e1_epoll_wait(arg1)
#define uk_syscall2_fn232(arg1, arg2) \
	uk_syscall_e2_epoll_wait(arg1, arg2)
#define uk_syscall3_fn232(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_wait(arg1, arg2, arg3)
#define uk_syscall4_fn232(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_wait(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn232(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_wait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn232(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_wait(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn232(...) \
	uk_syscall_r_epoll_wait(__VA_ARGS__)
#define uk_syscall_r0_fn232() \
	uk_syscall_r0_epoll_wait()
#define uk_syscall_r1_fn232(arg1) \
	uk_syscall_r1_epoll_wait(arg1)
#define uk_syscall_r2_fn232(arg1, arg2) \
	uk_syscall_r2_epoll_wait(arg1, arg2)
#define uk_syscall_r3_fn232(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_wait(arg1, arg2, arg3)
#define uk_syscall_r4_fn232(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_wait(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn232(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_wait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn232(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_wait(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_wait */
#define uk_syscall_fn232(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn232() _uk_syscall_e_enosys()
#define uk_syscall1_fn232(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn232(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn232(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn232(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn232(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn232(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn232(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn232() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn232(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn232(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn232(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn232(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn232(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn232(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_wait */

#ifdef HAVE_uk_syscall_epoll_ctl
#define uk_syscall_fn233(...) \
	uk_syscall_e_epoll_ctl(__VA_ARGS__)
#define uk_syscall0_fn233() \
	uk_syscall_e0_epoll_ctl()
#define uk_syscall1_fn233(arg1) \
	uk_syscall_e1_epoll_ctl(arg1)
#define uk_syscall2_fn233(arg1, arg2) \
	uk_syscall_e2_epoll_ctl(arg1, arg2)
#define uk_syscall3_fn233(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_ctl(arg1, arg2, arg3)
#define uk_syscall4_fn233(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_ctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn233(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_ctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn233(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_ctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn233(...) \
	uk_syscall_r_epoll_ctl(__VA_ARGS__)
#define uk_syscall_r0_fn233() \
	uk_syscall_r0_epoll_ctl()
#define uk_syscall_r1_fn233(arg1) \
	uk_syscall_r1_epoll_ctl(arg1)
#define uk_syscall_r2_fn233(arg1, arg2) \
	uk_syscall_r2_epoll_ctl(arg1, arg2)
#define uk_syscall_r3_fn233(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_ctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn233(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_ctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn233(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_ctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn233(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_ctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_ctl */
#define uk_syscall_fn233(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn233() _uk_syscall_e_enosys()
#define uk_syscall1_fn233(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn233(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn233(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn233(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn233(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn233(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn233(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn233() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn233(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn233(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn233(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn233(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn233(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn233(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_ctl */

#ifdef HAVE_uk_syscall_tgkill
#define uk_syscall_fn234(...) \
	uk_syscall_e_tgkill(__VA_ARGS__)
#define uk_syscall0_fn234() \
	uk_syscall_e0_tgkill()
#define uk_syscall1_fn234(arg1) \
	uk_syscall_e1_tgkill(arg1)
#define uk_syscall2_fn234(arg1, arg2) \
	uk_syscall_e2_tgkill(arg1, arg2)
#define uk_syscall3_fn234(arg1, arg2, arg3) \
	uk_syscall_e3_tgkill(arg1, arg2, arg3)
#define uk_syscall4_fn234(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_tgkill(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn234(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_tgkill(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn234(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_tgkill(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn234(...) \
	uk_syscall_r_tgkill(__VA_ARGS__)
#define uk_syscall_r0_fn234() \
	uk_syscall_r0_tgkill()
#define uk_syscall_r1_fn234(arg1) \
	uk_syscall_r1_tgkill(arg1)
#define uk_syscall_r2_fn234(arg1, arg2) \
	uk_syscall_r2_tgkill(arg1, arg2)
#define uk_syscall_r3_fn234(arg1, arg2, arg3) \
	uk_syscall_r3_tgkill(arg1, arg2, arg3)
#define uk_syscall_r4_fn234(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_tgkill(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn234(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_tgkill(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn234(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_tgkill(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_tgkill */
#define uk_syscall_fn234(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn234() _uk_syscall_e_enosys()
#define uk_syscall1_fn234(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn234(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn234(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn234(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn234(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn234(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn234(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn234() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn234(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn234(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn234(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn234(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn234(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn234(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_tgkill */

#ifdef HAVE_uk_syscall_utimes
#define uk_syscall_fn235(...) \
	uk_syscall_e_utimes(__VA_ARGS__)
#define uk_syscall0_fn235() \
	uk_syscall_e0_utimes()
#define uk_syscall1_fn235(arg1) \
	uk_syscall_e1_utimes(arg1)
#define uk_syscall2_fn235(arg1, arg2) \
	uk_syscall_e2_utimes(arg1, arg2)
#define uk_syscall3_fn235(arg1, arg2, arg3) \
	uk_syscall_e3_utimes(arg1, arg2, arg3)
#define uk_syscall4_fn235(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_utimes(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn235(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_utimes(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn235(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_utimes(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn235(...) \
	uk_syscall_r_utimes(__VA_ARGS__)
#define uk_syscall_r0_fn235() \
	uk_syscall_r0_utimes()
#define uk_syscall_r1_fn235(arg1) \
	uk_syscall_r1_utimes(arg1)
#define uk_syscall_r2_fn235(arg1, arg2) \
	uk_syscall_r2_utimes(arg1, arg2)
#define uk_syscall_r3_fn235(arg1, arg2, arg3) \
	uk_syscall_r3_utimes(arg1, arg2, arg3)
#define uk_syscall_r4_fn235(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_utimes(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn235(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_utimes(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn235(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_utimes(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_utimes */
#define uk_syscall_fn235(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn235() _uk_syscall_e_enosys()
#define uk_syscall1_fn235(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn235(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn235(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn235(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn235(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn235(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn235(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn235() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn235(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn235(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn235(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn235(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn235(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn235(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_utimes */

#ifdef HAVE_uk_syscall_vserver
#define uk_syscall_fn236(...) \
	uk_syscall_e_vserver(__VA_ARGS__)
#define uk_syscall0_fn236() \
	uk_syscall_e0_vserver()
#define uk_syscall1_fn236(arg1) \
	uk_syscall_e1_vserver(arg1)
#define uk_syscall2_fn236(arg1, arg2) \
	uk_syscall_e2_vserver(arg1, arg2)
#define uk_syscall3_fn236(arg1, arg2, arg3) \
	uk_syscall_e3_vserver(arg1, arg2, arg3)
#define uk_syscall4_fn236(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_vserver(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn236(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_vserver(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn236(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_vserver(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn236(...) \
	uk_syscall_r_vserver(__VA_ARGS__)
#define uk_syscall_r0_fn236() \
	uk_syscall_r0_vserver()
#define uk_syscall_r1_fn236(arg1) \
	uk_syscall_r1_vserver(arg1)
#define uk_syscall_r2_fn236(arg1, arg2) \
	uk_syscall_r2_vserver(arg1, arg2)
#define uk_syscall_r3_fn236(arg1, arg2, arg3) \
	uk_syscall_r3_vserver(arg1, arg2, arg3)
#define uk_syscall_r4_fn236(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_vserver(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn236(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_vserver(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn236(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_vserver(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_vserver */
#define uk_syscall_fn236(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn236() _uk_syscall_e_enosys()
#define uk_syscall1_fn236(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn236(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn236(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn236(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn236(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn236(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn236(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn236() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn236(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn236(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn236(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn236(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn236(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn236(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_vserver */

#ifdef HAVE_uk_syscall_mbind
#define uk_syscall_fn237(...) \
	uk_syscall_e_mbind(__VA_ARGS__)
#define uk_syscall0_fn237() \
	uk_syscall_e0_mbind()
#define uk_syscall1_fn237(arg1) \
	uk_syscall_e1_mbind(arg1)
#define uk_syscall2_fn237(arg1, arg2) \
	uk_syscall_e2_mbind(arg1, arg2)
#define uk_syscall3_fn237(arg1, arg2, arg3) \
	uk_syscall_e3_mbind(arg1, arg2, arg3)
#define uk_syscall4_fn237(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mbind(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn237(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mbind(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn237(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mbind(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn237(...) \
	uk_syscall_r_mbind(__VA_ARGS__)
#define uk_syscall_r0_fn237() \
	uk_syscall_r0_mbind()
#define uk_syscall_r1_fn237(arg1) \
	uk_syscall_r1_mbind(arg1)
#define uk_syscall_r2_fn237(arg1, arg2) \
	uk_syscall_r2_mbind(arg1, arg2)
#define uk_syscall_r3_fn237(arg1, arg2, arg3) \
	uk_syscall_r3_mbind(arg1, arg2, arg3)
#define uk_syscall_r4_fn237(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mbind(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn237(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mbind(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn237(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mbind(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mbind */
#define uk_syscall_fn237(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn237() _uk_syscall_e_enosys()
#define uk_syscall1_fn237(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn237(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn237(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn237(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn237(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn237(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn237(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn237() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn237(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn237(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn237(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn237(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn237(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn237(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mbind */

#ifdef HAVE_uk_syscall_set_mempolicy
#define uk_syscall_fn238(...) \
	uk_syscall_e_set_mempolicy(__VA_ARGS__)
#define uk_syscall0_fn238() \
	uk_syscall_e0_set_mempolicy()
#define uk_syscall1_fn238(arg1) \
	uk_syscall_e1_set_mempolicy(arg1)
#define uk_syscall2_fn238(arg1, arg2) \
	uk_syscall_e2_set_mempolicy(arg1, arg2)
#define uk_syscall3_fn238(arg1, arg2, arg3) \
	uk_syscall_e3_set_mempolicy(arg1, arg2, arg3)
#define uk_syscall4_fn238(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_set_mempolicy(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn238(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_set_mempolicy(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn238(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_set_mempolicy(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn238(...) \
	uk_syscall_r_set_mempolicy(__VA_ARGS__)
#define uk_syscall_r0_fn238() \
	uk_syscall_r0_set_mempolicy()
#define uk_syscall_r1_fn238(arg1) \
	uk_syscall_r1_set_mempolicy(arg1)
#define uk_syscall_r2_fn238(arg1, arg2) \
	uk_syscall_r2_set_mempolicy(arg1, arg2)
#define uk_syscall_r3_fn238(arg1, arg2, arg3) \
	uk_syscall_r3_set_mempolicy(arg1, arg2, arg3)
#define uk_syscall_r4_fn238(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_set_mempolicy(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn238(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_set_mempolicy(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn238(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_set_mempolicy(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_set_mempolicy */
#define uk_syscall_fn238(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn238() _uk_syscall_e_enosys()
#define uk_syscall1_fn238(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn238(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn238(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn238(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn238(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn238(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn238(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn238() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn238(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn238(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn238(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn238(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn238(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn238(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_set_mempolicy */

#ifdef HAVE_uk_syscall_get_mempolicy
#define uk_syscall_fn239(...) \
	uk_syscall_e_get_mempolicy(__VA_ARGS__)
#define uk_syscall0_fn239() \
	uk_syscall_e0_get_mempolicy()
#define uk_syscall1_fn239(arg1) \
	uk_syscall_e1_get_mempolicy(arg1)
#define uk_syscall2_fn239(arg1, arg2) \
	uk_syscall_e2_get_mempolicy(arg1, arg2)
#define uk_syscall3_fn239(arg1, arg2, arg3) \
	uk_syscall_e3_get_mempolicy(arg1, arg2, arg3)
#define uk_syscall4_fn239(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_get_mempolicy(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn239(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_get_mempolicy(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn239(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_get_mempolicy(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn239(...) \
	uk_syscall_r_get_mempolicy(__VA_ARGS__)
#define uk_syscall_r0_fn239() \
	uk_syscall_r0_get_mempolicy()
#define uk_syscall_r1_fn239(arg1) \
	uk_syscall_r1_get_mempolicy(arg1)
#define uk_syscall_r2_fn239(arg1, arg2) \
	uk_syscall_r2_get_mempolicy(arg1, arg2)
#define uk_syscall_r3_fn239(arg1, arg2, arg3) \
	uk_syscall_r3_get_mempolicy(arg1, arg2, arg3)
#define uk_syscall_r4_fn239(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_get_mempolicy(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn239(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_get_mempolicy(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn239(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_get_mempolicy(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_get_mempolicy */
#define uk_syscall_fn239(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn239() _uk_syscall_e_enosys()
#define uk_syscall1_fn239(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn239(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn239(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn239(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn239(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn239(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn239(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn239() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn239(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn239(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn239(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn239(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn239(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn239(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_get_mempolicy */

#ifdef HAVE_uk_syscall_mq_open
#define uk_syscall_fn240(...) \
	uk_syscall_e_mq_open(__VA_ARGS__)
#define uk_syscall0_fn240() \
	uk_syscall_e0_mq_open()
#define uk_syscall1_fn240(arg1) \
	uk_syscall_e1_mq_open(arg1)
#define uk_syscall2_fn240(arg1, arg2) \
	uk_syscall_e2_mq_open(arg1, arg2)
#define uk_syscall3_fn240(arg1, arg2, arg3) \
	uk_syscall_e3_mq_open(arg1, arg2, arg3)
#define uk_syscall4_fn240(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mq_open(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn240(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mq_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn240(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mq_open(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn240(...) \
	uk_syscall_r_mq_open(__VA_ARGS__)
#define uk_syscall_r0_fn240() \
	uk_syscall_r0_mq_open()
#define uk_syscall_r1_fn240(arg1) \
	uk_syscall_r1_mq_open(arg1)
#define uk_syscall_r2_fn240(arg1, arg2) \
	uk_syscall_r2_mq_open(arg1, arg2)
#define uk_syscall_r3_fn240(arg1, arg2, arg3) \
	uk_syscall_r3_mq_open(arg1, arg2, arg3)
#define uk_syscall_r4_fn240(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mq_open(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn240(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mq_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn240(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mq_open(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mq_open */
#define uk_syscall_fn240(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn240() _uk_syscall_e_enosys()
#define uk_syscall1_fn240(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn240(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn240(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn240(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn240(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn240(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn240(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn240() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn240(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn240(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn240(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn240(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn240(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn240(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mq_open */

#ifdef HAVE_uk_syscall_mq_unlink
#define uk_syscall_fn241(...) \
	uk_syscall_e_mq_unlink(__VA_ARGS__)
#define uk_syscall0_fn241() \
	uk_syscall_e0_mq_unlink()
#define uk_syscall1_fn241(arg1) \
	uk_syscall_e1_mq_unlink(arg1)
#define uk_syscall2_fn241(arg1, arg2) \
	uk_syscall_e2_mq_unlink(arg1, arg2)
#define uk_syscall3_fn241(arg1, arg2, arg3) \
	uk_syscall_e3_mq_unlink(arg1, arg2, arg3)
#define uk_syscall4_fn241(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mq_unlink(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn241(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mq_unlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn241(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mq_unlink(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn241(...) \
	uk_syscall_r_mq_unlink(__VA_ARGS__)
#define uk_syscall_r0_fn241() \
	uk_syscall_r0_mq_unlink()
#define uk_syscall_r1_fn241(arg1) \
	uk_syscall_r1_mq_unlink(arg1)
#define uk_syscall_r2_fn241(arg1, arg2) \
	uk_syscall_r2_mq_unlink(arg1, arg2)
#define uk_syscall_r3_fn241(arg1, arg2, arg3) \
	uk_syscall_r3_mq_unlink(arg1, arg2, arg3)
#define uk_syscall_r4_fn241(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mq_unlink(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn241(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mq_unlink(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn241(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mq_unlink(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mq_unlink */
#define uk_syscall_fn241(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn241() _uk_syscall_e_enosys()
#define uk_syscall1_fn241(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn241(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn241(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn241(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn241(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn241(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn241(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn241() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn241(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn241(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn241(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn241(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn241(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn241(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mq_unlink */

#ifdef HAVE_uk_syscall_mq_timedsend
#define uk_syscall_fn242(...) \
	uk_syscall_e_mq_timedsend(__VA_ARGS__)
#define uk_syscall0_fn242() \
	uk_syscall_e0_mq_timedsend()
#define uk_syscall1_fn242(arg1) \
	uk_syscall_e1_mq_timedsend(arg1)
#define uk_syscall2_fn242(arg1, arg2) \
	uk_syscall_e2_mq_timedsend(arg1, arg2)
#define uk_syscall3_fn242(arg1, arg2, arg3) \
	uk_syscall_e3_mq_timedsend(arg1, arg2, arg3)
#define uk_syscall4_fn242(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mq_timedsend(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn242(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mq_timedsend(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn242(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mq_timedsend(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn242(...) \
	uk_syscall_r_mq_timedsend(__VA_ARGS__)
#define uk_syscall_r0_fn242() \
	uk_syscall_r0_mq_timedsend()
#define uk_syscall_r1_fn242(arg1) \
	uk_syscall_r1_mq_timedsend(arg1)
#define uk_syscall_r2_fn242(arg1, arg2) \
	uk_syscall_r2_mq_timedsend(arg1, arg2)
#define uk_syscall_r3_fn242(arg1, arg2, arg3) \
	uk_syscall_r3_mq_timedsend(arg1, arg2, arg3)
#define uk_syscall_r4_fn242(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mq_timedsend(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn242(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mq_timedsend(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn242(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mq_timedsend(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mq_timedsend */
#define uk_syscall_fn242(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn242() _uk_syscall_e_enosys()
#define uk_syscall1_fn242(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn242(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn242(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn242(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn242(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn242(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn242(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn242() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn242(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn242(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn242(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn242(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn242(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn242(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mq_timedsend */

#ifdef HAVE_uk_syscall_mq_timedreceive
#define uk_syscall_fn243(...) \
	uk_syscall_e_mq_timedreceive(__VA_ARGS__)
#define uk_syscall0_fn243() \
	uk_syscall_e0_mq_timedreceive()
#define uk_syscall1_fn243(arg1) \
	uk_syscall_e1_mq_timedreceive(arg1)
#define uk_syscall2_fn243(arg1, arg2) \
	uk_syscall_e2_mq_timedreceive(arg1, arg2)
#define uk_syscall3_fn243(arg1, arg2, arg3) \
	uk_syscall_e3_mq_timedreceive(arg1, arg2, arg3)
#define uk_syscall4_fn243(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mq_timedreceive(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn243(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mq_timedreceive(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn243(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mq_timedreceive(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn243(...) \
	uk_syscall_r_mq_timedreceive(__VA_ARGS__)
#define uk_syscall_r0_fn243() \
	uk_syscall_r0_mq_timedreceive()
#define uk_syscall_r1_fn243(arg1) \
	uk_syscall_r1_mq_timedreceive(arg1)
#define uk_syscall_r2_fn243(arg1, arg2) \
	uk_syscall_r2_mq_timedreceive(arg1, arg2)
#define uk_syscall_r3_fn243(arg1, arg2, arg3) \
	uk_syscall_r3_mq_timedreceive(arg1, arg2, arg3)
#define uk_syscall_r4_fn243(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mq_timedreceive(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn243(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mq_timedreceive(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn243(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mq_timedreceive(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mq_timedreceive */
#define uk_syscall_fn243(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn243() _uk_syscall_e_enosys()
#define uk_syscall1_fn243(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn243(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn243(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn243(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn243(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn243(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn243(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn243() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn243(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn243(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn243(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn243(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn243(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn243(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mq_timedreceive */

#ifdef HAVE_uk_syscall_mq_notify
#define uk_syscall_fn244(...) \
	uk_syscall_e_mq_notify(__VA_ARGS__)
#define uk_syscall0_fn244() \
	uk_syscall_e0_mq_notify()
#define uk_syscall1_fn244(arg1) \
	uk_syscall_e1_mq_notify(arg1)
#define uk_syscall2_fn244(arg1, arg2) \
	uk_syscall_e2_mq_notify(arg1, arg2)
#define uk_syscall3_fn244(arg1, arg2, arg3) \
	uk_syscall_e3_mq_notify(arg1, arg2, arg3)
#define uk_syscall4_fn244(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mq_notify(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn244(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mq_notify(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn244(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mq_notify(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn244(...) \
	uk_syscall_r_mq_notify(__VA_ARGS__)
#define uk_syscall_r0_fn244() \
	uk_syscall_r0_mq_notify()
#define uk_syscall_r1_fn244(arg1) \
	uk_syscall_r1_mq_notify(arg1)
#define uk_syscall_r2_fn244(arg1, arg2) \
	uk_syscall_r2_mq_notify(arg1, arg2)
#define uk_syscall_r3_fn244(arg1, arg2, arg3) \
	uk_syscall_r3_mq_notify(arg1, arg2, arg3)
#define uk_syscall_r4_fn244(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mq_notify(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn244(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mq_notify(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn244(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mq_notify(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mq_notify */
#define uk_syscall_fn244(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn244() _uk_syscall_e_enosys()
#define uk_syscall1_fn244(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn244(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn244(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn244(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn244(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn244(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn244(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn244() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn244(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn244(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn244(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn244(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn244(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn244(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mq_notify */

#ifdef HAVE_uk_syscall_mq_getsetattr
#define uk_syscall_fn245(...) \
	uk_syscall_e_mq_getsetattr(__VA_ARGS__)
#define uk_syscall0_fn245() \
	uk_syscall_e0_mq_getsetattr()
#define uk_syscall1_fn245(arg1) \
	uk_syscall_e1_mq_getsetattr(arg1)
#define uk_syscall2_fn245(arg1, arg2) \
	uk_syscall_e2_mq_getsetattr(arg1, arg2)
#define uk_syscall3_fn245(arg1, arg2, arg3) \
	uk_syscall_e3_mq_getsetattr(arg1, arg2, arg3)
#define uk_syscall4_fn245(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mq_getsetattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn245(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mq_getsetattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn245(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mq_getsetattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn245(...) \
	uk_syscall_r_mq_getsetattr(__VA_ARGS__)
#define uk_syscall_r0_fn245() \
	uk_syscall_r0_mq_getsetattr()
#define uk_syscall_r1_fn245(arg1) \
	uk_syscall_r1_mq_getsetattr(arg1)
#define uk_syscall_r2_fn245(arg1, arg2) \
	uk_syscall_r2_mq_getsetattr(arg1, arg2)
#define uk_syscall_r3_fn245(arg1, arg2, arg3) \
	uk_syscall_r3_mq_getsetattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn245(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mq_getsetattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn245(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mq_getsetattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn245(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mq_getsetattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mq_getsetattr */
#define uk_syscall_fn245(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn245() _uk_syscall_e_enosys()
#define uk_syscall1_fn245(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn245(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn245(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn245(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn245(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn245(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn245(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn245() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn245(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn245(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn245(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn245(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn245(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn245(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mq_getsetattr */

#ifdef HAVE_uk_syscall_kexec_load
#define uk_syscall_fn246(...) \
	uk_syscall_e_kexec_load(__VA_ARGS__)
#define uk_syscall0_fn246() \
	uk_syscall_e0_kexec_load()
#define uk_syscall1_fn246(arg1) \
	uk_syscall_e1_kexec_load(arg1)
#define uk_syscall2_fn246(arg1, arg2) \
	uk_syscall_e2_kexec_load(arg1, arg2)
#define uk_syscall3_fn246(arg1, arg2, arg3) \
	uk_syscall_e3_kexec_load(arg1, arg2, arg3)
#define uk_syscall4_fn246(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_kexec_load(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn246(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_kexec_load(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn246(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_kexec_load(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn246(...) \
	uk_syscall_r_kexec_load(__VA_ARGS__)
#define uk_syscall_r0_fn246() \
	uk_syscall_r0_kexec_load()
#define uk_syscall_r1_fn246(arg1) \
	uk_syscall_r1_kexec_load(arg1)
#define uk_syscall_r2_fn246(arg1, arg2) \
	uk_syscall_r2_kexec_load(arg1, arg2)
#define uk_syscall_r3_fn246(arg1, arg2, arg3) \
	uk_syscall_r3_kexec_load(arg1, arg2, arg3)
#define uk_syscall_r4_fn246(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_kexec_load(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn246(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_kexec_load(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn246(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_kexec_load(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_kexec_load */
#define uk_syscall_fn246(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn246() _uk_syscall_e_enosys()
#define uk_syscall1_fn246(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn246(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn246(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn246(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn246(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn246(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn246(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn246() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn246(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn246(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn246(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn246(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn246(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn246(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_kexec_load */

#ifdef HAVE_uk_syscall_waitid
#define uk_syscall_fn247(...) \
	uk_syscall_e_waitid(__VA_ARGS__)
#define uk_syscall0_fn247() \
	uk_syscall_e0_waitid()
#define uk_syscall1_fn247(arg1) \
	uk_syscall_e1_waitid(arg1)
#define uk_syscall2_fn247(arg1, arg2) \
	uk_syscall_e2_waitid(arg1, arg2)
#define uk_syscall3_fn247(arg1, arg2, arg3) \
	uk_syscall_e3_waitid(arg1, arg2, arg3)
#define uk_syscall4_fn247(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_waitid(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn247(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_waitid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn247(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_waitid(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn247(...) \
	uk_syscall_r_waitid(__VA_ARGS__)
#define uk_syscall_r0_fn247() \
	uk_syscall_r0_waitid()
#define uk_syscall_r1_fn247(arg1) \
	uk_syscall_r1_waitid(arg1)
#define uk_syscall_r2_fn247(arg1, arg2) \
	uk_syscall_r2_waitid(arg1, arg2)
#define uk_syscall_r3_fn247(arg1, arg2, arg3) \
	uk_syscall_r3_waitid(arg1, arg2, arg3)
#define uk_syscall_r4_fn247(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_waitid(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn247(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_waitid(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn247(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_waitid(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_waitid */
#define uk_syscall_fn247(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn247() _uk_syscall_e_enosys()
#define uk_syscall1_fn247(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn247(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn247(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn247(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn247(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn247(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn247(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn247() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn247(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn247(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn247(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn247(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn247(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn247(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_waitid */

#ifdef HAVE_uk_syscall_add_key
#define uk_syscall_fn248(...) \
	uk_syscall_e_add_key(__VA_ARGS__)
#define uk_syscall0_fn248() \
	uk_syscall_e0_add_key()
#define uk_syscall1_fn248(arg1) \
	uk_syscall_e1_add_key(arg1)
#define uk_syscall2_fn248(arg1, arg2) \
	uk_syscall_e2_add_key(arg1, arg2)
#define uk_syscall3_fn248(arg1, arg2, arg3) \
	uk_syscall_e3_add_key(arg1, arg2, arg3)
#define uk_syscall4_fn248(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_add_key(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn248(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_add_key(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn248(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_add_key(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn248(...) \
	uk_syscall_r_add_key(__VA_ARGS__)
#define uk_syscall_r0_fn248() \
	uk_syscall_r0_add_key()
#define uk_syscall_r1_fn248(arg1) \
	uk_syscall_r1_add_key(arg1)
#define uk_syscall_r2_fn248(arg1, arg2) \
	uk_syscall_r2_add_key(arg1, arg2)
#define uk_syscall_r3_fn248(arg1, arg2, arg3) \
	uk_syscall_r3_add_key(arg1, arg2, arg3)
#define uk_syscall_r4_fn248(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_add_key(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn248(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_add_key(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn248(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_add_key(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_add_key */
#define uk_syscall_fn248(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn248() _uk_syscall_e_enosys()
#define uk_syscall1_fn248(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn248(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn248(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn248(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn248(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn248(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn248(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn248() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn248(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn248(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn248(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn248(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn248(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn248(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_add_key */

#ifdef HAVE_uk_syscall_request_key
#define uk_syscall_fn249(...) \
	uk_syscall_e_request_key(__VA_ARGS__)
#define uk_syscall0_fn249() \
	uk_syscall_e0_request_key()
#define uk_syscall1_fn249(arg1) \
	uk_syscall_e1_request_key(arg1)
#define uk_syscall2_fn249(arg1, arg2) \
	uk_syscall_e2_request_key(arg1, arg2)
#define uk_syscall3_fn249(arg1, arg2, arg3) \
	uk_syscall_e3_request_key(arg1, arg2, arg3)
#define uk_syscall4_fn249(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_request_key(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn249(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_request_key(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn249(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_request_key(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn249(...) \
	uk_syscall_r_request_key(__VA_ARGS__)
#define uk_syscall_r0_fn249() \
	uk_syscall_r0_request_key()
#define uk_syscall_r1_fn249(arg1) \
	uk_syscall_r1_request_key(arg1)
#define uk_syscall_r2_fn249(arg1, arg2) \
	uk_syscall_r2_request_key(arg1, arg2)
#define uk_syscall_r3_fn249(arg1, arg2, arg3) \
	uk_syscall_r3_request_key(arg1, arg2, arg3)
#define uk_syscall_r4_fn249(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_request_key(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn249(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_request_key(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn249(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_request_key(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_request_key */
#define uk_syscall_fn249(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn249() _uk_syscall_e_enosys()
#define uk_syscall1_fn249(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn249(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn249(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn249(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn249(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn249(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn249(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn249() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn249(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn249(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn249(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn249(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn249(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn249(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_request_key */

#ifdef HAVE_uk_syscall_keyctl
#define uk_syscall_fn250(...) \
	uk_syscall_e_keyctl(__VA_ARGS__)
#define uk_syscall0_fn250() \
	uk_syscall_e0_keyctl()
#define uk_syscall1_fn250(arg1) \
	uk_syscall_e1_keyctl(arg1)
#define uk_syscall2_fn250(arg1, arg2) \
	uk_syscall_e2_keyctl(arg1, arg2)
#define uk_syscall3_fn250(arg1, arg2, arg3) \
	uk_syscall_e3_keyctl(arg1, arg2, arg3)
#define uk_syscall4_fn250(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_keyctl(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn250(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_keyctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn250(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_keyctl(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn250(...) \
	uk_syscall_r_keyctl(__VA_ARGS__)
#define uk_syscall_r0_fn250() \
	uk_syscall_r0_keyctl()
#define uk_syscall_r1_fn250(arg1) \
	uk_syscall_r1_keyctl(arg1)
#define uk_syscall_r2_fn250(arg1, arg2) \
	uk_syscall_r2_keyctl(arg1, arg2)
#define uk_syscall_r3_fn250(arg1, arg2, arg3) \
	uk_syscall_r3_keyctl(arg1, arg2, arg3)
#define uk_syscall_r4_fn250(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_keyctl(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn250(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_keyctl(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn250(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_keyctl(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_keyctl */
#define uk_syscall_fn250(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn250() _uk_syscall_e_enosys()
#define uk_syscall1_fn250(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn250(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn250(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn250(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn250(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn250(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn250(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn250() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn250(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn250(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn250(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn250(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn250(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn250(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_keyctl */

#ifdef HAVE_uk_syscall_ioprio_set
#define uk_syscall_fn251(...) \
	uk_syscall_e_ioprio_set(__VA_ARGS__)
#define uk_syscall0_fn251() \
	uk_syscall_e0_ioprio_set()
#define uk_syscall1_fn251(arg1) \
	uk_syscall_e1_ioprio_set(arg1)
#define uk_syscall2_fn251(arg1, arg2) \
	uk_syscall_e2_ioprio_set(arg1, arg2)
#define uk_syscall3_fn251(arg1, arg2, arg3) \
	uk_syscall_e3_ioprio_set(arg1, arg2, arg3)
#define uk_syscall4_fn251(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ioprio_set(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn251(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ioprio_set(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn251(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ioprio_set(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn251(...) \
	uk_syscall_r_ioprio_set(__VA_ARGS__)
#define uk_syscall_r0_fn251() \
	uk_syscall_r0_ioprio_set()
#define uk_syscall_r1_fn251(arg1) \
	uk_syscall_r1_ioprio_set(arg1)
#define uk_syscall_r2_fn251(arg1, arg2) \
	uk_syscall_r2_ioprio_set(arg1, arg2)
#define uk_syscall_r3_fn251(arg1, arg2, arg3) \
	uk_syscall_r3_ioprio_set(arg1, arg2, arg3)
#define uk_syscall_r4_fn251(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ioprio_set(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn251(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ioprio_set(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn251(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ioprio_set(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ioprio_set */
#define uk_syscall_fn251(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn251() _uk_syscall_e_enosys()
#define uk_syscall1_fn251(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn251(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn251(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn251(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn251(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn251(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn251(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn251() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn251(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn251(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn251(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn251(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn251(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn251(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ioprio_set */

#ifdef HAVE_uk_syscall_ioprio_get
#define uk_syscall_fn252(...) \
	uk_syscall_e_ioprio_get(__VA_ARGS__)
#define uk_syscall0_fn252() \
	uk_syscall_e0_ioprio_get()
#define uk_syscall1_fn252(arg1) \
	uk_syscall_e1_ioprio_get(arg1)
#define uk_syscall2_fn252(arg1, arg2) \
	uk_syscall_e2_ioprio_get(arg1, arg2)
#define uk_syscall3_fn252(arg1, arg2, arg3) \
	uk_syscall_e3_ioprio_get(arg1, arg2, arg3)
#define uk_syscall4_fn252(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ioprio_get(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn252(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ioprio_get(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn252(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ioprio_get(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn252(...) \
	uk_syscall_r_ioprio_get(__VA_ARGS__)
#define uk_syscall_r0_fn252() \
	uk_syscall_r0_ioprio_get()
#define uk_syscall_r1_fn252(arg1) \
	uk_syscall_r1_ioprio_get(arg1)
#define uk_syscall_r2_fn252(arg1, arg2) \
	uk_syscall_r2_ioprio_get(arg1, arg2)
#define uk_syscall_r3_fn252(arg1, arg2, arg3) \
	uk_syscall_r3_ioprio_get(arg1, arg2, arg3)
#define uk_syscall_r4_fn252(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ioprio_get(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn252(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ioprio_get(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn252(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ioprio_get(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ioprio_get */
#define uk_syscall_fn252(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn252() _uk_syscall_e_enosys()
#define uk_syscall1_fn252(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn252(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn252(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn252(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn252(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn252(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn252(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn252() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn252(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn252(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn252(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn252(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn252(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn252(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ioprio_get */

#ifdef HAVE_uk_syscall_inotify_init
#define uk_syscall_fn253(...) \
	uk_syscall_e_inotify_init(__VA_ARGS__)
#define uk_syscall0_fn253() \
	uk_syscall_e0_inotify_init()
#define uk_syscall1_fn253(arg1) \
	uk_syscall_e1_inotify_init(arg1)
#define uk_syscall2_fn253(arg1, arg2) \
	uk_syscall_e2_inotify_init(arg1, arg2)
#define uk_syscall3_fn253(arg1, arg2, arg3) \
	uk_syscall_e3_inotify_init(arg1, arg2, arg3)
#define uk_syscall4_fn253(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_inotify_init(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn253(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_inotify_init(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn253(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_inotify_init(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn253(...) \
	uk_syscall_r_inotify_init(__VA_ARGS__)
#define uk_syscall_r0_fn253() \
	uk_syscall_r0_inotify_init()
#define uk_syscall_r1_fn253(arg1) \
	uk_syscall_r1_inotify_init(arg1)
#define uk_syscall_r2_fn253(arg1, arg2) \
	uk_syscall_r2_inotify_init(arg1, arg2)
#define uk_syscall_r3_fn253(arg1, arg2, arg3) \
	uk_syscall_r3_inotify_init(arg1, arg2, arg3)
#define uk_syscall_r4_fn253(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_inotify_init(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn253(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_inotify_init(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn253(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_inotify_init(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_inotify_init */
#define uk_syscall_fn253(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn253() _uk_syscall_e_enosys()
#define uk_syscall1_fn253(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn253(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn253(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn253(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn253(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn253(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn253(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn253() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn253(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn253(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn253(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn253(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn253(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn253(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_inotify_init */

#ifdef HAVE_uk_syscall_inotify_add_watch
#define uk_syscall_fn254(...) \
	uk_syscall_e_inotify_add_watch(__VA_ARGS__)
#define uk_syscall0_fn254() \
	uk_syscall_e0_inotify_add_watch()
#define uk_syscall1_fn254(arg1) \
	uk_syscall_e1_inotify_add_watch(arg1)
#define uk_syscall2_fn254(arg1, arg2) \
	uk_syscall_e2_inotify_add_watch(arg1, arg2)
#define uk_syscall3_fn254(arg1, arg2, arg3) \
	uk_syscall_e3_inotify_add_watch(arg1, arg2, arg3)
#define uk_syscall4_fn254(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_inotify_add_watch(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn254(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_inotify_add_watch(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn254(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_inotify_add_watch(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn254(...) \
	uk_syscall_r_inotify_add_watch(__VA_ARGS__)
#define uk_syscall_r0_fn254() \
	uk_syscall_r0_inotify_add_watch()
#define uk_syscall_r1_fn254(arg1) \
	uk_syscall_r1_inotify_add_watch(arg1)
#define uk_syscall_r2_fn254(arg1, arg2) \
	uk_syscall_r2_inotify_add_watch(arg1, arg2)
#define uk_syscall_r3_fn254(arg1, arg2, arg3) \
	uk_syscall_r3_inotify_add_watch(arg1, arg2, arg3)
#define uk_syscall_r4_fn254(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_inotify_add_watch(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn254(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_inotify_add_watch(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn254(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_inotify_add_watch(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_inotify_add_watch */
#define uk_syscall_fn254(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn254() _uk_syscall_e_enosys()
#define uk_syscall1_fn254(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn254(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn254(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn254(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn254(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn254(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn254(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn254() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn254(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn254(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn254(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn254(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn254(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn254(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_inotify_add_watch */

#ifdef HAVE_uk_syscall_inotify_rm_watch
#define uk_syscall_fn255(...) \
	uk_syscall_e_inotify_rm_watch(__VA_ARGS__)
#define uk_syscall0_fn255() \
	uk_syscall_e0_inotify_rm_watch()
#define uk_syscall1_fn255(arg1) \
	uk_syscall_e1_inotify_rm_watch(arg1)
#define uk_syscall2_fn255(arg1, arg2) \
	uk_syscall_e2_inotify_rm_watch(arg1, arg2)
#define uk_syscall3_fn255(arg1, arg2, arg3) \
	uk_syscall_e3_inotify_rm_watch(arg1, arg2, arg3)
#define uk_syscall4_fn255(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_inotify_rm_watch(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn255(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_inotify_rm_watch(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn255(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_inotify_rm_watch(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn255(...) \
	uk_syscall_r_inotify_rm_watch(__VA_ARGS__)
#define uk_syscall_r0_fn255() \
	uk_syscall_r0_inotify_rm_watch()
#define uk_syscall_r1_fn255(arg1) \
	uk_syscall_r1_inotify_rm_watch(arg1)
#define uk_syscall_r2_fn255(arg1, arg2) \
	uk_syscall_r2_inotify_rm_watch(arg1, arg2)
#define uk_syscall_r3_fn255(arg1, arg2, arg3) \
	uk_syscall_r3_inotify_rm_watch(arg1, arg2, arg3)
#define uk_syscall_r4_fn255(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_inotify_rm_watch(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn255(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_inotify_rm_watch(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn255(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_inotify_rm_watch(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_inotify_rm_watch */
#define uk_syscall_fn255(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn255() _uk_syscall_e_enosys()
#define uk_syscall1_fn255(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn255(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn255(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn255(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn255(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn255(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn255(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn255() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn255(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn255(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn255(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn255(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn255(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn255(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_inotify_rm_watch */

#ifdef HAVE_uk_syscall_migrate_pages
#define uk_syscall_fn256(...) \
	uk_syscall_e_migrate_pages(__VA_ARGS__)
#define uk_syscall0_fn256() \
	uk_syscall_e0_migrate_pages()
#define uk_syscall1_fn256(arg1) \
	uk_syscall_e1_migrate_pages(arg1)
#define uk_syscall2_fn256(arg1, arg2) \
	uk_syscall_e2_migrate_pages(arg1, arg2)
#define uk_syscall3_fn256(arg1, arg2, arg3) \
	uk_syscall_e3_migrate_pages(arg1, arg2, arg3)
#define uk_syscall4_fn256(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_migrate_pages(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn256(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_migrate_pages(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn256(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_migrate_pages(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn256(...) \
	uk_syscall_r_migrate_pages(__VA_ARGS__)
#define uk_syscall_r0_fn256() \
	uk_syscall_r0_migrate_pages()
#define uk_syscall_r1_fn256(arg1) \
	uk_syscall_r1_migrate_pages(arg1)
#define uk_syscall_r2_fn256(arg1, arg2) \
	uk_syscall_r2_migrate_pages(arg1, arg2)
#define uk_syscall_r3_fn256(arg1, arg2, arg3) \
	uk_syscall_r3_migrate_pages(arg1, arg2, arg3)
#define uk_syscall_r4_fn256(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_migrate_pages(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn256(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_migrate_pages(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn256(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_migrate_pages(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_migrate_pages */
#define uk_syscall_fn256(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn256() _uk_syscall_e_enosys()
#define uk_syscall1_fn256(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn256(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn256(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn256(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn256(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn256(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn256(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn256() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn256(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn256(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn256(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn256(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn256(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn256(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_migrate_pages */

#ifdef HAVE_uk_syscall_openat
#define uk_syscall_fn257(...) \
	uk_syscall_e_openat(__VA_ARGS__)
#define uk_syscall0_fn257() \
	uk_syscall_e0_openat()
#define uk_syscall1_fn257(arg1) \
	uk_syscall_e1_openat(arg1)
#define uk_syscall2_fn257(arg1, arg2) \
	uk_syscall_e2_openat(arg1, arg2)
#define uk_syscall3_fn257(arg1, arg2, arg3) \
	uk_syscall_e3_openat(arg1, arg2, arg3)
#define uk_syscall4_fn257(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_openat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn257(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_openat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn257(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_openat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn257(...) \
	uk_syscall_r_openat(__VA_ARGS__)
#define uk_syscall_r0_fn257() \
	uk_syscall_r0_openat()
#define uk_syscall_r1_fn257(arg1) \
	uk_syscall_r1_openat(arg1)
#define uk_syscall_r2_fn257(arg1, arg2) \
	uk_syscall_r2_openat(arg1, arg2)
#define uk_syscall_r3_fn257(arg1, arg2, arg3) \
	uk_syscall_r3_openat(arg1, arg2, arg3)
#define uk_syscall_r4_fn257(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_openat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn257(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_openat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn257(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_openat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_openat */
#define uk_syscall_fn257(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn257() _uk_syscall_e_enosys()
#define uk_syscall1_fn257(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn257(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn257(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn257(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn257(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn257(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn257(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn257() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn257(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn257(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn257(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn257(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn257(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn257(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_openat */

#ifdef HAVE_uk_syscall_mkdirat
#define uk_syscall_fn258(...) \
	uk_syscall_e_mkdirat(__VA_ARGS__)
#define uk_syscall0_fn258() \
	uk_syscall_e0_mkdirat()
#define uk_syscall1_fn258(arg1) \
	uk_syscall_e1_mkdirat(arg1)
#define uk_syscall2_fn258(arg1, arg2) \
	uk_syscall_e2_mkdirat(arg1, arg2)
#define uk_syscall3_fn258(arg1, arg2, arg3) \
	uk_syscall_e3_mkdirat(arg1, arg2, arg3)
#define uk_syscall4_fn258(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mkdirat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn258(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mkdirat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn258(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mkdirat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn258(...) \
	uk_syscall_r_mkdirat(__VA_ARGS__)
#define uk_syscall_r0_fn258() \
	uk_syscall_r0_mkdirat()
#define uk_syscall_r1_fn258(arg1) \
	uk_syscall_r1_mkdirat(arg1)
#define uk_syscall_r2_fn258(arg1, arg2) \
	uk_syscall_r2_mkdirat(arg1, arg2)
#define uk_syscall_r3_fn258(arg1, arg2, arg3) \
	uk_syscall_r3_mkdirat(arg1, arg2, arg3)
#define uk_syscall_r4_fn258(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mkdirat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn258(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mkdirat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn258(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mkdirat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mkdirat */
#define uk_syscall_fn258(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn258() _uk_syscall_e_enosys()
#define uk_syscall1_fn258(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn258(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn258(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn258(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn258(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn258(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn258(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn258() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn258(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn258(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn258(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn258(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn258(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn258(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mkdirat */

#ifdef HAVE_uk_syscall_mknodat
#define uk_syscall_fn259(...) \
	uk_syscall_e_mknodat(__VA_ARGS__)
#define uk_syscall0_fn259() \
	uk_syscall_e0_mknodat()
#define uk_syscall1_fn259(arg1) \
	uk_syscall_e1_mknodat(arg1)
#define uk_syscall2_fn259(arg1, arg2) \
	uk_syscall_e2_mknodat(arg1, arg2)
#define uk_syscall3_fn259(arg1, arg2, arg3) \
	uk_syscall_e3_mknodat(arg1, arg2, arg3)
#define uk_syscall4_fn259(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mknodat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn259(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mknodat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn259(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mknodat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn259(...) \
	uk_syscall_r_mknodat(__VA_ARGS__)
#define uk_syscall_r0_fn259() \
	uk_syscall_r0_mknodat()
#define uk_syscall_r1_fn259(arg1) \
	uk_syscall_r1_mknodat(arg1)
#define uk_syscall_r2_fn259(arg1, arg2) \
	uk_syscall_r2_mknodat(arg1, arg2)
#define uk_syscall_r3_fn259(arg1, arg2, arg3) \
	uk_syscall_r3_mknodat(arg1, arg2, arg3)
#define uk_syscall_r4_fn259(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mknodat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn259(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mknodat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn259(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mknodat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mknodat */
#define uk_syscall_fn259(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn259() _uk_syscall_e_enosys()
#define uk_syscall1_fn259(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn259(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn259(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn259(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn259(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn259(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn259(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn259() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn259(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn259(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn259(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn259(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn259(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn259(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mknodat */

#ifdef HAVE_uk_syscall_fchownat
#define uk_syscall_fn260(...) \
	uk_syscall_e_fchownat(__VA_ARGS__)
#define uk_syscall0_fn260() \
	uk_syscall_e0_fchownat()
#define uk_syscall1_fn260(arg1) \
	uk_syscall_e1_fchownat(arg1)
#define uk_syscall2_fn260(arg1, arg2) \
	uk_syscall_e2_fchownat(arg1, arg2)
#define uk_syscall3_fn260(arg1, arg2, arg3) \
	uk_syscall_e3_fchownat(arg1, arg2, arg3)
#define uk_syscall4_fn260(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fchownat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn260(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fchownat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn260(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fchownat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn260(...) \
	uk_syscall_r_fchownat(__VA_ARGS__)
#define uk_syscall_r0_fn260() \
	uk_syscall_r0_fchownat()
#define uk_syscall_r1_fn260(arg1) \
	uk_syscall_r1_fchownat(arg1)
#define uk_syscall_r2_fn260(arg1, arg2) \
	uk_syscall_r2_fchownat(arg1, arg2)
#define uk_syscall_r3_fn260(arg1, arg2, arg3) \
	uk_syscall_r3_fchownat(arg1, arg2, arg3)
#define uk_syscall_r4_fn260(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fchownat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn260(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fchownat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn260(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fchownat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fchownat */
#define uk_syscall_fn260(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn260() _uk_syscall_e_enosys()
#define uk_syscall1_fn260(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn260(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn260(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn260(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn260(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn260(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn260(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn260() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn260(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn260(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn260(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn260(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn260(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn260(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fchownat */

#ifdef HAVE_uk_syscall_futimesat
#define uk_syscall_fn261(...) \
	uk_syscall_e_futimesat(__VA_ARGS__)
#define uk_syscall0_fn261() \
	uk_syscall_e0_futimesat()
#define uk_syscall1_fn261(arg1) \
	uk_syscall_e1_futimesat(arg1)
#define uk_syscall2_fn261(arg1, arg2) \
	uk_syscall_e2_futimesat(arg1, arg2)
#define uk_syscall3_fn261(arg1, arg2, arg3) \
	uk_syscall_e3_futimesat(arg1, arg2, arg3)
#define uk_syscall4_fn261(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_futimesat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn261(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_futimesat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn261(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_futimesat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn261(...) \
	uk_syscall_r_futimesat(__VA_ARGS__)
#define uk_syscall_r0_fn261() \
	uk_syscall_r0_futimesat()
#define uk_syscall_r1_fn261(arg1) \
	uk_syscall_r1_futimesat(arg1)
#define uk_syscall_r2_fn261(arg1, arg2) \
	uk_syscall_r2_futimesat(arg1, arg2)
#define uk_syscall_r3_fn261(arg1, arg2, arg3) \
	uk_syscall_r3_futimesat(arg1, arg2, arg3)
#define uk_syscall_r4_fn261(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_futimesat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn261(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_futimesat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn261(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_futimesat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_futimesat */
#define uk_syscall_fn261(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn261() _uk_syscall_e_enosys()
#define uk_syscall1_fn261(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn261(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn261(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn261(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn261(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn261(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn261(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn261() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn261(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn261(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn261(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn261(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn261(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn261(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_futimesat */

#ifdef HAVE_uk_syscall_newfstatat
#define uk_syscall_fn262(...) \
	uk_syscall_e_newfstatat(__VA_ARGS__)
#define uk_syscall0_fn262() \
	uk_syscall_e0_newfstatat()
#define uk_syscall1_fn262(arg1) \
	uk_syscall_e1_newfstatat(arg1)
#define uk_syscall2_fn262(arg1, arg2) \
	uk_syscall_e2_newfstatat(arg1, arg2)
#define uk_syscall3_fn262(arg1, arg2, arg3) \
	uk_syscall_e3_newfstatat(arg1, arg2, arg3)
#define uk_syscall4_fn262(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_newfstatat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn262(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_newfstatat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn262(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_newfstatat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn262(...) \
	uk_syscall_r_newfstatat(__VA_ARGS__)
#define uk_syscall_r0_fn262() \
	uk_syscall_r0_newfstatat()
#define uk_syscall_r1_fn262(arg1) \
	uk_syscall_r1_newfstatat(arg1)
#define uk_syscall_r2_fn262(arg1, arg2) \
	uk_syscall_r2_newfstatat(arg1, arg2)
#define uk_syscall_r3_fn262(arg1, arg2, arg3) \
	uk_syscall_r3_newfstatat(arg1, arg2, arg3)
#define uk_syscall_r4_fn262(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_newfstatat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn262(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_newfstatat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn262(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_newfstatat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_newfstatat */
#define uk_syscall_fn262(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn262() _uk_syscall_e_enosys()
#define uk_syscall1_fn262(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn262(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn262(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn262(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn262(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn262(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn262(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn262() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn262(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn262(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn262(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn262(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn262(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn262(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_newfstatat */

#ifdef HAVE_uk_syscall_unlinkat
#define uk_syscall_fn263(...) \
	uk_syscall_e_unlinkat(__VA_ARGS__)
#define uk_syscall0_fn263() \
	uk_syscall_e0_unlinkat()
#define uk_syscall1_fn263(arg1) \
	uk_syscall_e1_unlinkat(arg1)
#define uk_syscall2_fn263(arg1, arg2) \
	uk_syscall_e2_unlinkat(arg1, arg2)
#define uk_syscall3_fn263(arg1, arg2, arg3) \
	uk_syscall_e3_unlinkat(arg1, arg2, arg3)
#define uk_syscall4_fn263(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_unlinkat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn263(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_unlinkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn263(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_unlinkat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn263(...) \
	uk_syscall_r_unlinkat(__VA_ARGS__)
#define uk_syscall_r0_fn263() \
	uk_syscall_r0_unlinkat()
#define uk_syscall_r1_fn263(arg1) \
	uk_syscall_r1_unlinkat(arg1)
#define uk_syscall_r2_fn263(arg1, arg2) \
	uk_syscall_r2_unlinkat(arg1, arg2)
#define uk_syscall_r3_fn263(arg1, arg2, arg3) \
	uk_syscall_r3_unlinkat(arg1, arg2, arg3)
#define uk_syscall_r4_fn263(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_unlinkat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn263(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_unlinkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn263(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_unlinkat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_unlinkat */
#define uk_syscall_fn263(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn263() _uk_syscall_e_enosys()
#define uk_syscall1_fn263(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn263(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn263(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn263(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn263(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn263(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn263(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn263() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn263(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn263(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn263(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn263(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn263(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn263(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_unlinkat */

#ifdef HAVE_uk_syscall_renameat
#define uk_syscall_fn264(...) \
	uk_syscall_e_renameat(__VA_ARGS__)
#define uk_syscall0_fn264() \
	uk_syscall_e0_renameat()
#define uk_syscall1_fn264(arg1) \
	uk_syscall_e1_renameat(arg1)
#define uk_syscall2_fn264(arg1, arg2) \
	uk_syscall_e2_renameat(arg1, arg2)
#define uk_syscall3_fn264(arg1, arg2, arg3) \
	uk_syscall_e3_renameat(arg1, arg2, arg3)
#define uk_syscall4_fn264(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_renameat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn264(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_renameat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn264(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_renameat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn264(...) \
	uk_syscall_r_renameat(__VA_ARGS__)
#define uk_syscall_r0_fn264() \
	uk_syscall_r0_renameat()
#define uk_syscall_r1_fn264(arg1) \
	uk_syscall_r1_renameat(arg1)
#define uk_syscall_r2_fn264(arg1, arg2) \
	uk_syscall_r2_renameat(arg1, arg2)
#define uk_syscall_r3_fn264(arg1, arg2, arg3) \
	uk_syscall_r3_renameat(arg1, arg2, arg3)
#define uk_syscall_r4_fn264(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_renameat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn264(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_renameat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn264(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_renameat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_renameat */
#define uk_syscall_fn264(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn264() _uk_syscall_e_enosys()
#define uk_syscall1_fn264(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn264(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn264(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn264(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn264(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn264(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn264(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn264() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn264(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn264(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn264(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn264(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn264(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn264(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_renameat */

#ifdef HAVE_uk_syscall_linkat
#define uk_syscall_fn265(...) \
	uk_syscall_e_linkat(__VA_ARGS__)
#define uk_syscall0_fn265() \
	uk_syscall_e0_linkat()
#define uk_syscall1_fn265(arg1) \
	uk_syscall_e1_linkat(arg1)
#define uk_syscall2_fn265(arg1, arg2) \
	uk_syscall_e2_linkat(arg1, arg2)
#define uk_syscall3_fn265(arg1, arg2, arg3) \
	uk_syscall_e3_linkat(arg1, arg2, arg3)
#define uk_syscall4_fn265(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_linkat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn265(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_linkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn265(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_linkat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn265(...) \
	uk_syscall_r_linkat(__VA_ARGS__)
#define uk_syscall_r0_fn265() \
	uk_syscall_r0_linkat()
#define uk_syscall_r1_fn265(arg1) \
	uk_syscall_r1_linkat(arg1)
#define uk_syscall_r2_fn265(arg1, arg2) \
	uk_syscall_r2_linkat(arg1, arg2)
#define uk_syscall_r3_fn265(arg1, arg2, arg3) \
	uk_syscall_r3_linkat(arg1, arg2, arg3)
#define uk_syscall_r4_fn265(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_linkat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn265(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_linkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn265(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_linkat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_linkat */
#define uk_syscall_fn265(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn265() _uk_syscall_e_enosys()
#define uk_syscall1_fn265(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn265(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn265(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn265(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn265(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn265(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn265(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn265() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn265(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn265(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn265(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn265(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn265(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn265(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_linkat */

#ifdef HAVE_uk_syscall_symlinkat
#define uk_syscall_fn266(...) \
	uk_syscall_e_symlinkat(__VA_ARGS__)
#define uk_syscall0_fn266() \
	uk_syscall_e0_symlinkat()
#define uk_syscall1_fn266(arg1) \
	uk_syscall_e1_symlinkat(arg1)
#define uk_syscall2_fn266(arg1, arg2) \
	uk_syscall_e2_symlinkat(arg1, arg2)
#define uk_syscall3_fn266(arg1, arg2, arg3) \
	uk_syscall_e3_symlinkat(arg1, arg2, arg3)
#define uk_syscall4_fn266(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_symlinkat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn266(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_symlinkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn266(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_symlinkat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn266(...) \
	uk_syscall_r_symlinkat(__VA_ARGS__)
#define uk_syscall_r0_fn266() \
	uk_syscall_r0_symlinkat()
#define uk_syscall_r1_fn266(arg1) \
	uk_syscall_r1_symlinkat(arg1)
#define uk_syscall_r2_fn266(arg1, arg2) \
	uk_syscall_r2_symlinkat(arg1, arg2)
#define uk_syscall_r3_fn266(arg1, arg2, arg3) \
	uk_syscall_r3_symlinkat(arg1, arg2, arg3)
#define uk_syscall_r4_fn266(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_symlinkat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn266(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_symlinkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn266(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_symlinkat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_symlinkat */
#define uk_syscall_fn266(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn266() _uk_syscall_e_enosys()
#define uk_syscall1_fn266(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn266(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn266(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn266(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn266(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn266(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn266(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn266() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn266(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn266(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn266(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn266(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn266(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn266(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_symlinkat */

#ifdef HAVE_uk_syscall_readlinkat
#define uk_syscall_fn267(...) \
	uk_syscall_e_readlinkat(__VA_ARGS__)
#define uk_syscall0_fn267() \
	uk_syscall_e0_readlinkat()
#define uk_syscall1_fn267(arg1) \
	uk_syscall_e1_readlinkat(arg1)
#define uk_syscall2_fn267(arg1, arg2) \
	uk_syscall_e2_readlinkat(arg1, arg2)
#define uk_syscall3_fn267(arg1, arg2, arg3) \
	uk_syscall_e3_readlinkat(arg1, arg2, arg3)
#define uk_syscall4_fn267(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_readlinkat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn267(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_readlinkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn267(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_readlinkat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn267(...) \
	uk_syscall_r_readlinkat(__VA_ARGS__)
#define uk_syscall_r0_fn267() \
	uk_syscall_r0_readlinkat()
#define uk_syscall_r1_fn267(arg1) \
	uk_syscall_r1_readlinkat(arg1)
#define uk_syscall_r2_fn267(arg1, arg2) \
	uk_syscall_r2_readlinkat(arg1, arg2)
#define uk_syscall_r3_fn267(arg1, arg2, arg3) \
	uk_syscall_r3_readlinkat(arg1, arg2, arg3)
#define uk_syscall_r4_fn267(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_readlinkat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn267(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_readlinkat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn267(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_readlinkat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_readlinkat */
#define uk_syscall_fn267(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn267() _uk_syscall_e_enosys()
#define uk_syscall1_fn267(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn267(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn267(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn267(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn267(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn267(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn267(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn267() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn267(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn267(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn267(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn267(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn267(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn267(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_readlinkat */

#ifdef HAVE_uk_syscall_fchmodat
#define uk_syscall_fn268(...) \
	uk_syscall_e_fchmodat(__VA_ARGS__)
#define uk_syscall0_fn268() \
	uk_syscall_e0_fchmodat()
#define uk_syscall1_fn268(arg1) \
	uk_syscall_e1_fchmodat(arg1)
#define uk_syscall2_fn268(arg1, arg2) \
	uk_syscall_e2_fchmodat(arg1, arg2)
#define uk_syscall3_fn268(arg1, arg2, arg3) \
	uk_syscall_e3_fchmodat(arg1, arg2, arg3)
#define uk_syscall4_fn268(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fchmodat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn268(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fchmodat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn268(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fchmodat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn268(...) \
	uk_syscall_r_fchmodat(__VA_ARGS__)
#define uk_syscall_r0_fn268() \
	uk_syscall_r0_fchmodat()
#define uk_syscall_r1_fn268(arg1) \
	uk_syscall_r1_fchmodat(arg1)
#define uk_syscall_r2_fn268(arg1, arg2) \
	uk_syscall_r2_fchmodat(arg1, arg2)
#define uk_syscall_r3_fn268(arg1, arg2, arg3) \
	uk_syscall_r3_fchmodat(arg1, arg2, arg3)
#define uk_syscall_r4_fn268(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fchmodat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn268(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fchmodat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn268(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fchmodat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fchmodat */
#define uk_syscall_fn268(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn268() _uk_syscall_e_enosys()
#define uk_syscall1_fn268(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn268(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn268(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn268(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn268(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn268(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn268(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn268() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn268(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn268(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn268(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn268(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn268(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn268(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fchmodat */

#ifdef HAVE_uk_syscall_faccessat
#define uk_syscall_fn269(...) \
	uk_syscall_e_faccessat(__VA_ARGS__)
#define uk_syscall0_fn269() \
	uk_syscall_e0_faccessat()
#define uk_syscall1_fn269(arg1) \
	uk_syscall_e1_faccessat(arg1)
#define uk_syscall2_fn269(arg1, arg2) \
	uk_syscall_e2_faccessat(arg1, arg2)
#define uk_syscall3_fn269(arg1, arg2, arg3) \
	uk_syscall_e3_faccessat(arg1, arg2, arg3)
#define uk_syscall4_fn269(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_faccessat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn269(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_faccessat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn269(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_faccessat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn269(...) \
	uk_syscall_r_faccessat(__VA_ARGS__)
#define uk_syscall_r0_fn269() \
	uk_syscall_r0_faccessat()
#define uk_syscall_r1_fn269(arg1) \
	uk_syscall_r1_faccessat(arg1)
#define uk_syscall_r2_fn269(arg1, arg2) \
	uk_syscall_r2_faccessat(arg1, arg2)
#define uk_syscall_r3_fn269(arg1, arg2, arg3) \
	uk_syscall_r3_faccessat(arg1, arg2, arg3)
#define uk_syscall_r4_fn269(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_faccessat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn269(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_faccessat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn269(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_faccessat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_faccessat */
#define uk_syscall_fn269(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn269() _uk_syscall_e_enosys()
#define uk_syscall1_fn269(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn269(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn269(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn269(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn269(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn269(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn269(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn269() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn269(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn269(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn269(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn269(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn269(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn269(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_faccessat */

#ifdef HAVE_uk_syscall_pselect6
#define uk_syscall_fn270(...) \
	uk_syscall_e_pselect6(__VA_ARGS__)
#define uk_syscall0_fn270() \
	uk_syscall_e0_pselect6()
#define uk_syscall1_fn270(arg1) \
	uk_syscall_e1_pselect6(arg1)
#define uk_syscall2_fn270(arg1, arg2) \
	uk_syscall_e2_pselect6(arg1, arg2)
#define uk_syscall3_fn270(arg1, arg2, arg3) \
	uk_syscall_e3_pselect6(arg1, arg2, arg3)
#define uk_syscall4_fn270(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pselect6(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn270(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pselect6(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn270(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pselect6(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn270(...) \
	uk_syscall_r_pselect6(__VA_ARGS__)
#define uk_syscall_r0_fn270() \
	uk_syscall_r0_pselect6()
#define uk_syscall_r1_fn270(arg1) \
	uk_syscall_r1_pselect6(arg1)
#define uk_syscall_r2_fn270(arg1, arg2) \
	uk_syscall_r2_pselect6(arg1, arg2)
#define uk_syscall_r3_fn270(arg1, arg2, arg3) \
	uk_syscall_r3_pselect6(arg1, arg2, arg3)
#define uk_syscall_r4_fn270(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pselect6(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn270(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pselect6(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn270(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pselect6(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pselect6 */
#define uk_syscall_fn270(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn270() _uk_syscall_e_enosys()
#define uk_syscall1_fn270(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn270(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn270(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn270(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn270(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn270(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn270(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn270() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn270(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn270(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn270(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn270(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn270(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn270(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pselect6 */

#ifdef HAVE_uk_syscall_ppoll
#define uk_syscall_fn271(...) \
	uk_syscall_e_ppoll(__VA_ARGS__)
#define uk_syscall0_fn271() \
	uk_syscall_e0_ppoll()
#define uk_syscall1_fn271(arg1) \
	uk_syscall_e1_ppoll(arg1)
#define uk_syscall2_fn271(arg1, arg2) \
	uk_syscall_e2_ppoll(arg1, arg2)
#define uk_syscall3_fn271(arg1, arg2, arg3) \
	uk_syscall_e3_ppoll(arg1, arg2, arg3)
#define uk_syscall4_fn271(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_ppoll(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn271(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_ppoll(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn271(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_ppoll(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn271(...) \
	uk_syscall_r_ppoll(__VA_ARGS__)
#define uk_syscall_r0_fn271() \
	uk_syscall_r0_ppoll()
#define uk_syscall_r1_fn271(arg1) \
	uk_syscall_r1_ppoll(arg1)
#define uk_syscall_r2_fn271(arg1, arg2) \
	uk_syscall_r2_ppoll(arg1, arg2)
#define uk_syscall_r3_fn271(arg1, arg2, arg3) \
	uk_syscall_r3_ppoll(arg1, arg2, arg3)
#define uk_syscall_r4_fn271(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_ppoll(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn271(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_ppoll(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn271(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_ppoll(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_ppoll */
#define uk_syscall_fn271(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn271() _uk_syscall_e_enosys()
#define uk_syscall1_fn271(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn271(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn271(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn271(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn271(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn271(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn271(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn271() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn271(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn271(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn271(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn271(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn271(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn271(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_ppoll */

#ifdef HAVE_uk_syscall_unshare
#define uk_syscall_fn272(...) \
	uk_syscall_e_unshare(__VA_ARGS__)
#define uk_syscall0_fn272() \
	uk_syscall_e0_unshare()
#define uk_syscall1_fn272(arg1) \
	uk_syscall_e1_unshare(arg1)
#define uk_syscall2_fn272(arg1, arg2) \
	uk_syscall_e2_unshare(arg1, arg2)
#define uk_syscall3_fn272(arg1, arg2, arg3) \
	uk_syscall_e3_unshare(arg1, arg2, arg3)
#define uk_syscall4_fn272(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_unshare(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn272(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_unshare(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn272(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_unshare(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn272(...) \
	uk_syscall_r_unshare(__VA_ARGS__)
#define uk_syscall_r0_fn272() \
	uk_syscall_r0_unshare()
#define uk_syscall_r1_fn272(arg1) \
	uk_syscall_r1_unshare(arg1)
#define uk_syscall_r2_fn272(arg1, arg2) \
	uk_syscall_r2_unshare(arg1, arg2)
#define uk_syscall_r3_fn272(arg1, arg2, arg3) \
	uk_syscall_r3_unshare(arg1, arg2, arg3)
#define uk_syscall_r4_fn272(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_unshare(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn272(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_unshare(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn272(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_unshare(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_unshare */
#define uk_syscall_fn272(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn272() _uk_syscall_e_enosys()
#define uk_syscall1_fn272(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn272(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn272(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn272(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn272(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn272(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn272(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn272() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn272(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn272(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn272(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn272(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn272(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn272(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_unshare */

#ifdef HAVE_uk_syscall_set_robust_list
#define uk_syscall_fn273(...) \
	uk_syscall_e_set_robust_list(__VA_ARGS__)
#define uk_syscall0_fn273() \
	uk_syscall_e0_set_robust_list()
#define uk_syscall1_fn273(arg1) \
	uk_syscall_e1_set_robust_list(arg1)
#define uk_syscall2_fn273(arg1, arg2) \
	uk_syscall_e2_set_robust_list(arg1, arg2)
#define uk_syscall3_fn273(arg1, arg2, arg3) \
	uk_syscall_e3_set_robust_list(arg1, arg2, arg3)
#define uk_syscall4_fn273(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_set_robust_list(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn273(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_set_robust_list(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn273(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_set_robust_list(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn273(...) \
	uk_syscall_r_set_robust_list(__VA_ARGS__)
#define uk_syscall_r0_fn273() \
	uk_syscall_r0_set_robust_list()
#define uk_syscall_r1_fn273(arg1) \
	uk_syscall_r1_set_robust_list(arg1)
#define uk_syscall_r2_fn273(arg1, arg2) \
	uk_syscall_r2_set_robust_list(arg1, arg2)
#define uk_syscall_r3_fn273(arg1, arg2, arg3) \
	uk_syscall_r3_set_robust_list(arg1, arg2, arg3)
#define uk_syscall_r4_fn273(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_set_robust_list(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn273(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_set_robust_list(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn273(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_set_robust_list(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_set_robust_list */
#define uk_syscall_fn273(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn273() _uk_syscall_e_enosys()
#define uk_syscall1_fn273(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn273(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn273(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn273(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn273(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn273(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn273(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn273() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn273(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn273(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn273(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn273(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn273(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn273(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_set_robust_list */

#ifdef HAVE_uk_syscall_get_robust_list
#define uk_syscall_fn274(...) \
	uk_syscall_e_get_robust_list(__VA_ARGS__)
#define uk_syscall0_fn274() \
	uk_syscall_e0_get_robust_list()
#define uk_syscall1_fn274(arg1) \
	uk_syscall_e1_get_robust_list(arg1)
#define uk_syscall2_fn274(arg1, arg2) \
	uk_syscall_e2_get_robust_list(arg1, arg2)
#define uk_syscall3_fn274(arg1, arg2, arg3) \
	uk_syscall_e3_get_robust_list(arg1, arg2, arg3)
#define uk_syscall4_fn274(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_get_robust_list(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn274(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_get_robust_list(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn274(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_get_robust_list(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn274(...) \
	uk_syscall_r_get_robust_list(__VA_ARGS__)
#define uk_syscall_r0_fn274() \
	uk_syscall_r0_get_robust_list()
#define uk_syscall_r1_fn274(arg1) \
	uk_syscall_r1_get_robust_list(arg1)
#define uk_syscall_r2_fn274(arg1, arg2) \
	uk_syscall_r2_get_robust_list(arg1, arg2)
#define uk_syscall_r3_fn274(arg1, arg2, arg3) \
	uk_syscall_r3_get_robust_list(arg1, arg2, arg3)
#define uk_syscall_r4_fn274(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_get_robust_list(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn274(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_get_robust_list(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn274(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_get_robust_list(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_get_robust_list */
#define uk_syscall_fn274(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn274() _uk_syscall_e_enosys()
#define uk_syscall1_fn274(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn274(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn274(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn274(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn274(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn274(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn274(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn274() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn274(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn274(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn274(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn274(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn274(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn274(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_get_robust_list */

#ifdef HAVE_uk_syscall_splice
#define uk_syscall_fn275(...) \
	uk_syscall_e_splice(__VA_ARGS__)
#define uk_syscall0_fn275() \
	uk_syscall_e0_splice()
#define uk_syscall1_fn275(arg1) \
	uk_syscall_e1_splice(arg1)
#define uk_syscall2_fn275(arg1, arg2) \
	uk_syscall_e2_splice(arg1, arg2)
#define uk_syscall3_fn275(arg1, arg2, arg3) \
	uk_syscall_e3_splice(arg1, arg2, arg3)
#define uk_syscall4_fn275(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_splice(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn275(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_splice(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn275(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_splice(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn275(...) \
	uk_syscall_r_splice(__VA_ARGS__)
#define uk_syscall_r0_fn275() \
	uk_syscall_r0_splice()
#define uk_syscall_r1_fn275(arg1) \
	uk_syscall_r1_splice(arg1)
#define uk_syscall_r2_fn275(arg1, arg2) \
	uk_syscall_r2_splice(arg1, arg2)
#define uk_syscall_r3_fn275(arg1, arg2, arg3) \
	uk_syscall_r3_splice(arg1, arg2, arg3)
#define uk_syscall_r4_fn275(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_splice(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn275(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_splice(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn275(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_splice(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_splice */
#define uk_syscall_fn275(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn275() _uk_syscall_e_enosys()
#define uk_syscall1_fn275(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn275(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn275(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn275(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn275(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn275(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn275(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn275() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn275(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn275(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn275(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn275(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn275(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn275(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_splice */

#ifdef HAVE_uk_syscall_tee
#define uk_syscall_fn276(...) \
	uk_syscall_e_tee(__VA_ARGS__)
#define uk_syscall0_fn276() \
	uk_syscall_e0_tee()
#define uk_syscall1_fn276(arg1) \
	uk_syscall_e1_tee(arg1)
#define uk_syscall2_fn276(arg1, arg2) \
	uk_syscall_e2_tee(arg1, arg2)
#define uk_syscall3_fn276(arg1, arg2, arg3) \
	uk_syscall_e3_tee(arg1, arg2, arg3)
#define uk_syscall4_fn276(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_tee(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn276(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_tee(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn276(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_tee(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn276(...) \
	uk_syscall_r_tee(__VA_ARGS__)
#define uk_syscall_r0_fn276() \
	uk_syscall_r0_tee()
#define uk_syscall_r1_fn276(arg1) \
	uk_syscall_r1_tee(arg1)
#define uk_syscall_r2_fn276(arg1, arg2) \
	uk_syscall_r2_tee(arg1, arg2)
#define uk_syscall_r3_fn276(arg1, arg2, arg3) \
	uk_syscall_r3_tee(arg1, arg2, arg3)
#define uk_syscall_r4_fn276(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_tee(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn276(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_tee(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn276(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_tee(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_tee */
#define uk_syscall_fn276(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn276() _uk_syscall_e_enosys()
#define uk_syscall1_fn276(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn276(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn276(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn276(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn276(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn276(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn276(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn276() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn276(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn276(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn276(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn276(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn276(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn276(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_tee */

#ifdef HAVE_uk_syscall_sync_file_range
#define uk_syscall_fn277(...) \
	uk_syscall_e_sync_file_range(__VA_ARGS__)
#define uk_syscall0_fn277() \
	uk_syscall_e0_sync_file_range()
#define uk_syscall1_fn277(arg1) \
	uk_syscall_e1_sync_file_range(arg1)
#define uk_syscall2_fn277(arg1, arg2) \
	uk_syscall_e2_sync_file_range(arg1, arg2)
#define uk_syscall3_fn277(arg1, arg2, arg3) \
	uk_syscall_e3_sync_file_range(arg1, arg2, arg3)
#define uk_syscall4_fn277(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sync_file_range(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn277(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sync_file_range(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn277(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sync_file_range(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn277(...) \
	uk_syscall_r_sync_file_range(__VA_ARGS__)
#define uk_syscall_r0_fn277() \
	uk_syscall_r0_sync_file_range()
#define uk_syscall_r1_fn277(arg1) \
	uk_syscall_r1_sync_file_range(arg1)
#define uk_syscall_r2_fn277(arg1, arg2) \
	uk_syscall_r2_sync_file_range(arg1, arg2)
#define uk_syscall_r3_fn277(arg1, arg2, arg3) \
	uk_syscall_r3_sync_file_range(arg1, arg2, arg3)
#define uk_syscall_r4_fn277(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sync_file_range(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn277(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sync_file_range(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn277(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sync_file_range(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sync_file_range */
#define uk_syscall_fn277(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn277() _uk_syscall_e_enosys()
#define uk_syscall1_fn277(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn277(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn277(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn277(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn277(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn277(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn277(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn277() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn277(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn277(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn277(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn277(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn277(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn277(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sync_file_range */

#ifdef HAVE_uk_syscall_vmsplice
#define uk_syscall_fn278(...) \
	uk_syscall_e_vmsplice(__VA_ARGS__)
#define uk_syscall0_fn278() \
	uk_syscall_e0_vmsplice()
#define uk_syscall1_fn278(arg1) \
	uk_syscall_e1_vmsplice(arg1)
#define uk_syscall2_fn278(arg1, arg2) \
	uk_syscall_e2_vmsplice(arg1, arg2)
#define uk_syscall3_fn278(arg1, arg2, arg3) \
	uk_syscall_e3_vmsplice(arg1, arg2, arg3)
#define uk_syscall4_fn278(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_vmsplice(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn278(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_vmsplice(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn278(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_vmsplice(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn278(...) \
	uk_syscall_r_vmsplice(__VA_ARGS__)
#define uk_syscall_r0_fn278() \
	uk_syscall_r0_vmsplice()
#define uk_syscall_r1_fn278(arg1) \
	uk_syscall_r1_vmsplice(arg1)
#define uk_syscall_r2_fn278(arg1, arg2) \
	uk_syscall_r2_vmsplice(arg1, arg2)
#define uk_syscall_r3_fn278(arg1, arg2, arg3) \
	uk_syscall_r3_vmsplice(arg1, arg2, arg3)
#define uk_syscall_r4_fn278(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_vmsplice(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn278(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_vmsplice(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn278(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_vmsplice(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_vmsplice */
#define uk_syscall_fn278(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn278() _uk_syscall_e_enosys()
#define uk_syscall1_fn278(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn278(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn278(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn278(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn278(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn278(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn278(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn278() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn278(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn278(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn278(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn278(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn278(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn278(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_vmsplice */

#ifdef HAVE_uk_syscall_move_pages
#define uk_syscall_fn279(...) \
	uk_syscall_e_move_pages(__VA_ARGS__)
#define uk_syscall0_fn279() \
	uk_syscall_e0_move_pages()
#define uk_syscall1_fn279(arg1) \
	uk_syscall_e1_move_pages(arg1)
#define uk_syscall2_fn279(arg1, arg2) \
	uk_syscall_e2_move_pages(arg1, arg2)
#define uk_syscall3_fn279(arg1, arg2, arg3) \
	uk_syscall_e3_move_pages(arg1, arg2, arg3)
#define uk_syscall4_fn279(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_move_pages(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn279(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_move_pages(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn279(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_move_pages(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn279(...) \
	uk_syscall_r_move_pages(__VA_ARGS__)
#define uk_syscall_r0_fn279() \
	uk_syscall_r0_move_pages()
#define uk_syscall_r1_fn279(arg1) \
	uk_syscall_r1_move_pages(arg1)
#define uk_syscall_r2_fn279(arg1, arg2) \
	uk_syscall_r2_move_pages(arg1, arg2)
#define uk_syscall_r3_fn279(arg1, arg2, arg3) \
	uk_syscall_r3_move_pages(arg1, arg2, arg3)
#define uk_syscall_r4_fn279(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_move_pages(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn279(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_move_pages(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn279(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_move_pages(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_move_pages */
#define uk_syscall_fn279(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn279() _uk_syscall_e_enosys()
#define uk_syscall1_fn279(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn279(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn279(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn279(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn279(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn279(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn279(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn279() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn279(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn279(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn279(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn279(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn279(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn279(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_move_pages */

#ifdef HAVE_uk_syscall_utimensat
#define uk_syscall_fn280(...) \
	uk_syscall_e_utimensat(__VA_ARGS__)
#define uk_syscall0_fn280() \
	uk_syscall_e0_utimensat()
#define uk_syscall1_fn280(arg1) \
	uk_syscall_e1_utimensat(arg1)
#define uk_syscall2_fn280(arg1, arg2) \
	uk_syscall_e2_utimensat(arg1, arg2)
#define uk_syscall3_fn280(arg1, arg2, arg3) \
	uk_syscall_e3_utimensat(arg1, arg2, arg3)
#define uk_syscall4_fn280(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_utimensat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn280(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_utimensat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn280(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_utimensat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn280(...) \
	uk_syscall_r_utimensat(__VA_ARGS__)
#define uk_syscall_r0_fn280() \
	uk_syscall_r0_utimensat()
#define uk_syscall_r1_fn280(arg1) \
	uk_syscall_r1_utimensat(arg1)
#define uk_syscall_r2_fn280(arg1, arg2) \
	uk_syscall_r2_utimensat(arg1, arg2)
#define uk_syscall_r3_fn280(arg1, arg2, arg3) \
	uk_syscall_r3_utimensat(arg1, arg2, arg3)
#define uk_syscall_r4_fn280(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_utimensat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn280(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_utimensat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn280(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_utimensat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_utimensat */
#define uk_syscall_fn280(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn280() _uk_syscall_e_enosys()
#define uk_syscall1_fn280(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn280(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn280(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn280(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn280(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn280(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn280(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn280() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn280(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn280(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn280(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn280(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn280(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn280(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_utimensat */

#ifdef HAVE_uk_syscall_epoll_pwait
#define uk_syscall_fn281(...) \
	uk_syscall_e_epoll_pwait(__VA_ARGS__)
#define uk_syscall0_fn281() \
	uk_syscall_e0_epoll_pwait()
#define uk_syscall1_fn281(arg1) \
	uk_syscall_e1_epoll_pwait(arg1)
#define uk_syscall2_fn281(arg1, arg2) \
	uk_syscall_e2_epoll_pwait(arg1, arg2)
#define uk_syscall3_fn281(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_pwait(arg1, arg2, arg3)
#define uk_syscall4_fn281(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_pwait(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn281(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_pwait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn281(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_pwait(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn281(...) \
	uk_syscall_r_epoll_pwait(__VA_ARGS__)
#define uk_syscall_r0_fn281() \
	uk_syscall_r0_epoll_pwait()
#define uk_syscall_r1_fn281(arg1) \
	uk_syscall_r1_epoll_pwait(arg1)
#define uk_syscall_r2_fn281(arg1, arg2) \
	uk_syscall_r2_epoll_pwait(arg1, arg2)
#define uk_syscall_r3_fn281(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_pwait(arg1, arg2, arg3)
#define uk_syscall_r4_fn281(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_pwait(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn281(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_pwait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn281(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_pwait(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_pwait */
#define uk_syscall_fn281(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn281() _uk_syscall_e_enosys()
#define uk_syscall1_fn281(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn281(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn281(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn281(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn281(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn281(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn281(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn281() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn281(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn281(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn281(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn281(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn281(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn281(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_pwait */

#ifdef HAVE_uk_syscall_signalfd
#define uk_syscall_fn282(...) \
	uk_syscall_e_signalfd(__VA_ARGS__)
#define uk_syscall0_fn282() \
	uk_syscall_e0_signalfd()
#define uk_syscall1_fn282(arg1) \
	uk_syscall_e1_signalfd(arg1)
#define uk_syscall2_fn282(arg1, arg2) \
	uk_syscall_e2_signalfd(arg1, arg2)
#define uk_syscall3_fn282(arg1, arg2, arg3) \
	uk_syscall_e3_signalfd(arg1, arg2, arg3)
#define uk_syscall4_fn282(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_signalfd(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn282(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_signalfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn282(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_signalfd(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn282(...) \
	uk_syscall_r_signalfd(__VA_ARGS__)
#define uk_syscall_r0_fn282() \
	uk_syscall_r0_signalfd()
#define uk_syscall_r1_fn282(arg1) \
	uk_syscall_r1_signalfd(arg1)
#define uk_syscall_r2_fn282(arg1, arg2) \
	uk_syscall_r2_signalfd(arg1, arg2)
#define uk_syscall_r3_fn282(arg1, arg2, arg3) \
	uk_syscall_r3_signalfd(arg1, arg2, arg3)
#define uk_syscall_r4_fn282(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_signalfd(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn282(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_signalfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn282(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_signalfd(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_signalfd */
#define uk_syscall_fn282(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn282() _uk_syscall_e_enosys()
#define uk_syscall1_fn282(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn282(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn282(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn282(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn282(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn282(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn282(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn282() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn282(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn282(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn282(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn282(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn282(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn282(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_signalfd */

#ifdef HAVE_uk_syscall_timerfd_create
#define uk_syscall_fn283(...) \
	uk_syscall_e_timerfd_create(__VA_ARGS__)
#define uk_syscall0_fn283() \
	uk_syscall_e0_timerfd_create()
#define uk_syscall1_fn283(arg1) \
	uk_syscall_e1_timerfd_create(arg1)
#define uk_syscall2_fn283(arg1, arg2) \
	uk_syscall_e2_timerfd_create(arg1, arg2)
#define uk_syscall3_fn283(arg1, arg2, arg3) \
	uk_syscall_e3_timerfd_create(arg1, arg2, arg3)
#define uk_syscall4_fn283(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timerfd_create(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn283(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timerfd_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn283(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timerfd_create(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn283(...) \
	uk_syscall_r_timerfd_create(__VA_ARGS__)
#define uk_syscall_r0_fn283() \
	uk_syscall_r0_timerfd_create()
#define uk_syscall_r1_fn283(arg1) \
	uk_syscall_r1_timerfd_create(arg1)
#define uk_syscall_r2_fn283(arg1, arg2) \
	uk_syscall_r2_timerfd_create(arg1, arg2)
#define uk_syscall_r3_fn283(arg1, arg2, arg3) \
	uk_syscall_r3_timerfd_create(arg1, arg2, arg3)
#define uk_syscall_r4_fn283(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timerfd_create(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn283(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timerfd_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn283(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timerfd_create(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timerfd_create */
#define uk_syscall_fn283(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn283() _uk_syscall_e_enosys()
#define uk_syscall1_fn283(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn283(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn283(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn283(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn283(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn283(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn283(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn283() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn283(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn283(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn283(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn283(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn283(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn283(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timerfd_create */

#ifdef HAVE_uk_syscall_eventfd
#define uk_syscall_fn284(...) \
	uk_syscall_e_eventfd(__VA_ARGS__)
#define uk_syscall0_fn284() \
	uk_syscall_e0_eventfd()
#define uk_syscall1_fn284(arg1) \
	uk_syscall_e1_eventfd(arg1)
#define uk_syscall2_fn284(arg1, arg2) \
	uk_syscall_e2_eventfd(arg1, arg2)
#define uk_syscall3_fn284(arg1, arg2, arg3) \
	uk_syscall_e3_eventfd(arg1, arg2, arg3)
#define uk_syscall4_fn284(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_eventfd(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn284(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_eventfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn284(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_eventfd(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn284(...) \
	uk_syscall_r_eventfd(__VA_ARGS__)
#define uk_syscall_r0_fn284() \
	uk_syscall_r0_eventfd()
#define uk_syscall_r1_fn284(arg1) \
	uk_syscall_r1_eventfd(arg1)
#define uk_syscall_r2_fn284(arg1, arg2) \
	uk_syscall_r2_eventfd(arg1, arg2)
#define uk_syscall_r3_fn284(arg1, arg2, arg3) \
	uk_syscall_r3_eventfd(arg1, arg2, arg3)
#define uk_syscall_r4_fn284(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_eventfd(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn284(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_eventfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn284(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_eventfd(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_eventfd */
#define uk_syscall_fn284(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn284() _uk_syscall_e_enosys()
#define uk_syscall1_fn284(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn284(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn284(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn284(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn284(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn284(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn284(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn284() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn284(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn284(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn284(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn284(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn284(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn284(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_eventfd */

#ifdef HAVE_uk_syscall_fallocate
#define uk_syscall_fn285(...) \
	uk_syscall_e_fallocate(__VA_ARGS__)
#define uk_syscall0_fn285() \
	uk_syscall_e0_fallocate()
#define uk_syscall1_fn285(arg1) \
	uk_syscall_e1_fallocate(arg1)
#define uk_syscall2_fn285(arg1, arg2) \
	uk_syscall_e2_fallocate(arg1, arg2)
#define uk_syscall3_fn285(arg1, arg2, arg3) \
	uk_syscall_e3_fallocate(arg1, arg2, arg3)
#define uk_syscall4_fn285(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fallocate(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn285(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fallocate(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn285(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fallocate(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn285(...) \
	uk_syscall_r_fallocate(__VA_ARGS__)
#define uk_syscall_r0_fn285() \
	uk_syscall_r0_fallocate()
#define uk_syscall_r1_fn285(arg1) \
	uk_syscall_r1_fallocate(arg1)
#define uk_syscall_r2_fn285(arg1, arg2) \
	uk_syscall_r2_fallocate(arg1, arg2)
#define uk_syscall_r3_fn285(arg1, arg2, arg3) \
	uk_syscall_r3_fallocate(arg1, arg2, arg3)
#define uk_syscall_r4_fn285(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fallocate(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn285(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fallocate(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn285(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fallocate(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fallocate */
#define uk_syscall_fn285(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn285() _uk_syscall_e_enosys()
#define uk_syscall1_fn285(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn285(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn285(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn285(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn285(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn285(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn285(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn285() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn285(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn285(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn285(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn285(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn285(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn285(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fallocate */

#ifdef HAVE_uk_syscall_timerfd_settime
#define uk_syscall_fn286(...) \
	uk_syscall_e_timerfd_settime(__VA_ARGS__)
#define uk_syscall0_fn286() \
	uk_syscall_e0_timerfd_settime()
#define uk_syscall1_fn286(arg1) \
	uk_syscall_e1_timerfd_settime(arg1)
#define uk_syscall2_fn286(arg1, arg2) \
	uk_syscall_e2_timerfd_settime(arg1, arg2)
#define uk_syscall3_fn286(arg1, arg2, arg3) \
	uk_syscall_e3_timerfd_settime(arg1, arg2, arg3)
#define uk_syscall4_fn286(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timerfd_settime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn286(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timerfd_settime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn286(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timerfd_settime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn286(...) \
	uk_syscall_r_timerfd_settime(__VA_ARGS__)
#define uk_syscall_r0_fn286() \
	uk_syscall_r0_timerfd_settime()
#define uk_syscall_r1_fn286(arg1) \
	uk_syscall_r1_timerfd_settime(arg1)
#define uk_syscall_r2_fn286(arg1, arg2) \
	uk_syscall_r2_timerfd_settime(arg1, arg2)
#define uk_syscall_r3_fn286(arg1, arg2, arg3) \
	uk_syscall_r3_timerfd_settime(arg1, arg2, arg3)
#define uk_syscall_r4_fn286(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timerfd_settime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn286(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timerfd_settime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn286(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timerfd_settime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timerfd_settime */
#define uk_syscall_fn286(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn286() _uk_syscall_e_enosys()
#define uk_syscall1_fn286(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn286(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn286(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn286(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn286(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn286(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn286(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn286() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn286(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn286(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn286(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn286(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn286(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn286(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timerfd_settime */

#ifdef HAVE_uk_syscall_timerfd_gettime
#define uk_syscall_fn287(...) \
	uk_syscall_e_timerfd_gettime(__VA_ARGS__)
#define uk_syscall0_fn287() \
	uk_syscall_e0_timerfd_gettime()
#define uk_syscall1_fn287(arg1) \
	uk_syscall_e1_timerfd_gettime(arg1)
#define uk_syscall2_fn287(arg1, arg2) \
	uk_syscall_e2_timerfd_gettime(arg1, arg2)
#define uk_syscall3_fn287(arg1, arg2, arg3) \
	uk_syscall_e3_timerfd_gettime(arg1, arg2, arg3)
#define uk_syscall4_fn287(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_timerfd_gettime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn287(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_timerfd_gettime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn287(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_timerfd_gettime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn287(...) \
	uk_syscall_r_timerfd_gettime(__VA_ARGS__)
#define uk_syscall_r0_fn287() \
	uk_syscall_r0_timerfd_gettime()
#define uk_syscall_r1_fn287(arg1) \
	uk_syscall_r1_timerfd_gettime(arg1)
#define uk_syscall_r2_fn287(arg1, arg2) \
	uk_syscall_r2_timerfd_gettime(arg1, arg2)
#define uk_syscall_r3_fn287(arg1, arg2, arg3) \
	uk_syscall_r3_timerfd_gettime(arg1, arg2, arg3)
#define uk_syscall_r4_fn287(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_timerfd_gettime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn287(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_timerfd_gettime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn287(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_timerfd_gettime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_timerfd_gettime */
#define uk_syscall_fn287(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn287() _uk_syscall_e_enosys()
#define uk_syscall1_fn287(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn287(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn287(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn287(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn287(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn287(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn287(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn287() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn287(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn287(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn287(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn287(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn287(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn287(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_timerfd_gettime */

#ifdef HAVE_uk_syscall_accept4
#define uk_syscall_fn288(...) \
	uk_syscall_e_accept4(__VA_ARGS__)
#define uk_syscall0_fn288() \
	uk_syscall_e0_accept4()
#define uk_syscall1_fn288(arg1) \
	uk_syscall_e1_accept4(arg1)
#define uk_syscall2_fn288(arg1, arg2) \
	uk_syscall_e2_accept4(arg1, arg2)
#define uk_syscall3_fn288(arg1, arg2, arg3) \
	uk_syscall_e3_accept4(arg1, arg2, arg3)
#define uk_syscall4_fn288(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_accept4(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn288(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_accept4(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn288(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_accept4(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn288(...) \
	uk_syscall_r_accept4(__VA_ARGS__)
#define uk_syscall_r0_fn288() \
	uk_syscall_r0_accept4()
#define uk_syscall_r1_fn288(arg1) \
	uk_syscall_r1_accept4(arg1)
#define uk_syscall_r2_fn288(arg1, arg2) \
	uk_syscall_r2_accept4(arg1, arg2)
#define uk_syscall_r3_fn288(arg1, arg2, arg3) \
	uk_syscall_r3_accept4(arg1, arg2, arg3)
#define uk_syscall_r4_fn288(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_accept4(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn288(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_accept4(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn288(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_accept4(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_accept4 */
#define uk_syscall_fn288(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn288() _uk_syscall_e_enosys()
#define uk_syscall1_fn288(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn288(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn288(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn288(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn288(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn288(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn288(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn288() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn288(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn288(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn288(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn288(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn288(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn288(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_accept4 */

#ifdef HAVE_uk_syscall_signalfd4
#define uk_syscall_fn289(...) \
	uk_syscall_e_signalfd4(__VA_ARGS__)
#define uk_syscall0_fn289() \
	uk_syscall_e0_signalfd4()
#define uk_syscall1_fn289(arg1) \
	uk_syscall_e1_signalfd4(arg1)
#define uk_syscall2_fn289(arg1, arg2) \
	uk_syscall_e2_signalfd4(arg1, arg2)
#define uk_syscall3_fn289(arg1, arg2, arg3) \
	uk_syscall_e3_signalfd4(arg1, arg2, arg3)
#define uk_syscall4_fn289(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_signalfd4(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn289(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_signalfd4(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn289(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_signalfd4(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn289(...) \
	uk_syscall_r_signalfd4(__VA_ARGS__)
#define uk_syscall_r0_fn289() \
	uk_syscall_r0_signalfd4()
#define uk_syscall_r1_fn289(arg1) \
	uk_syscall_r1_signalfd4(arg1)
#define uk_syscall_r2_fn289(arg1, arg2) \
	uk_syscall_r2_signalfd4(arg1, arg2)
#define uk_syscall_r3_fn289(arg1, arg2, arg3) \
	uk_syscall_r3_signalfd4(arg1, arg2, arg3)
#define uk_syscall_r4_fn289(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_signalfd4(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn289(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_signalfd4(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn289(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_signalfd4(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_signalfd4 */
#define uk_syscall_fn289(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn289() _uk_syscall_e_enosys()
#define uk_syscall1_fn289(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn289(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn289(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn289(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn289(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn289(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn289(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn289() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn289(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn289(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn289(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn289(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn289(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn289(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_signalfd4 */

#ifdef HAVE_uk_syscall_eventfd2
#define uk_syscall_fn290(...) \
	uk_syscall_e_eventfd2(__VA_ARGS__)
#define uk_syscall0_fn290() \
	uk_syscall_e0_eventfd2()
#define uk_syscall1_fn290(arg1) \
	uk_syscall_e1_eventfd2(arg1)
#define uk_syscall2_fn290(arg1, arg2) \
	uk_syscall_e2_eventfd2(arg1, arg2)
#define uk_syscall3_fn290(arg1, arg2, arg3) \
	uk_syscall_e3_eventfd2(arg1, arg2, arg3)
#define uk_syscall4_fn290(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_eventfd2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn290(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_eventfd2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn290(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_eventfd2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn290(...) \
	uk_syscall_r_eventfd2(__VA_ARGS__)
#define uk_syscall_r0_fn290() \
	uk_syscall_r0_eventfd2()
#define uk_syscall_r1_fn290(arg1) \
	uk_syscall_r1_eventfd2(arg1)
#define uk_syscall_r2_fn290(arg1, arg2) \
	uk_syscall_r2_eventfd2(arg1, arg2)
#define uk_syscall_r3_fn290(arg1, arg2, arg3) \
	uk_syscall_r3_eventfd2(arg1, arg2, arg3)
#define uk_syscall_r4_fn290(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_eventfd2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn290(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_eventfd2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn290(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_eventfd2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_eventfd2 */
#define uk_syscall_fn290(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn290() _uk_syscall_e_enosys()
#define uk_syscall1_fn290(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn290(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn290(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn290(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn290(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn290(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn290(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn290() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn290(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn290(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn290(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn290(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn290(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn290(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_eventfd2 */

#ifdef HAVE_uk_syscall_epoll_create1
#define uk_syscall_fn291(...) \
	uk_syscall_e_epoll_create1(__VA_ARGS__)
#define uk_syscall0_fn291() \
	uk_syscall_e0_epoll_create1()
#define uk_syscall1_fn291(arg1) \
	uk_syscall_e1_epoll_create1(arg1)
#define uk_syscall2_fn291(arg1, arg2) \
	uk_syscall_e2_epoll_create1(arg1, arg2)
#define uk_syscall3_fn291(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_create1(arg1, arg2, arg3)
#define uk_syscall4_fn291(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_create1(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn291(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_create1(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn291(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_create1(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn291(...) \
	uk_syscall_r_epoll_create1(__VA_ARGS__)
#define uk_syscall_r0_fn291() \
	uk_syscall_r0_epoll_create1()
#define uk_syscall_r1_fn291(arg1) \
	uk_syscall_r1_epoll_create1(arg1)
#define uk_syscall_r2_fn291(arg1, arg2) \
	uk_syscall_r2_epoll_create1(arg1, arg2)
#define uk_syscall_r3_fn291(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_create1(arg1, arg2, arg3)
#define uk_syscall_r4_fn291(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_create1(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn291(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_create1(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn291(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_create1(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_create1 */
#define uk_syscall_fn291(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn291() _uk_syscall_e_enosys()
#define uk_syscall1_fn291(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn291(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn291(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn291(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn291(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn291(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn291(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn291() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn291(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn291(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn291(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn291(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn291(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn291(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_create1 */

#ifdef HAVE_uk_syscall_dup3
#define uk_syscall_fn292(...) \
	uk_syscall_e_dup3(__VA_ARGS__)
#define uk_syscall0_fn292() \
	uk_syscall_e0_dup3()
#define uk_syscall1_fn292(arg1) \
	uk_syscall_e1_dup3(arg1)
#define uk_syscall2_fn292(arg1, arg2) \
	uk_syscall_e2_dup3(arg1, arg2)
#define uk_syscall3_fn292(arg1, arg2, arg3) \
	uk_syscall_e3_dup3(arg1, arg2, arg3)
#define uk_syscall4_fn292(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_dup3(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn292(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_dup3(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn292(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_dup3(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn292(...) \
	uk_syscall_r_dup3(__VA_ARGS__)
#define uk_syscall_r0_fn292() \
	uk_syscall_r0_dup3()
#define uk_syscall_r1_fn292(arg1) \
	uk_syscall_r1_dup3(arg1)
#define uk_syscall_r2_fn292(arg1, arg2) \
	uk_syscall_r2_dup3(arg1, arg2)
#define uk_syscall_r3_fn292(arg1, arg2, arg3) \
	uk_syscall_r3_dup3(arg1, arg2, arg3)
#define uk_syscall_r4_fn292(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_dup3(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn292(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_dup3(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn292(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_dup3(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_dup3 */
#define uk_syscall_fn292(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn292() _uk_syscall_e_enosys()
#define uk_syscall1_fn292(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn292(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn292(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn292(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn292(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn292(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn292(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn292() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn292(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn292(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn292(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn292(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn292(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn292(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_dup3 */

#ifdef HAVE_uk_syscall_pipe2
#define uk_syscall_fn293(...) \
	uk_syscall_e_pipe2(__VA_ARGS__)
#define uk_syscall0_fn293() \
	uk_syscall_e0_pipe2()
#define uk_syscall1_fn293(arg1) \
	uk_syscall_e1_pipe2(arg1)
#define uk_syscall2_fn293(arg1, arg2) \
	uk_syscall_e2_pipe2(arg1, arg2)
#define uk_syscall3_fn293(arg1, arg2, arg3) \
	uk_syscall_e3_pipe2(arg1, arg2, arg3)
#define uk_syscall4_fn293(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pipe2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn293(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pipe2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn293(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pipe2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn293(...) \
	uk_syscall_r_pipe2(__VA_ARGS__)
#define uk_syscall_r0_fn293() \
	uk_syscall_r0_pipe2()
#define uk_syscall_r1_fn293(arg1) \
	uk_syscall_r1_pipe2(arg1)
#define uk_syscall_r2_fn293(arg1, arg2) \
	uk_syscall_r2_pipe2(arg1, arg2)
#define uk_syscall_r3_fn293(arg1, arg2, arg3) \
	uk_syscall_r3_pipe2(arg1, arg2, arg3)
#define uk_syscall_r4_fn293(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pipe2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn293(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pipe2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn293(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pipe2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pipe2 */
#define uk_syscall_fn293(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn293() _uk_syscall_e_enosys()
#define uk_syscall1_fn293(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn293(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn293(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn293(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn293(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn293(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn293(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn293() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn293(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn293(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn293(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn293(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn293(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn293(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pipe2 */

#ifdef HAVE_uk_syscall_inotify_init1
#define uk_syscall_fn294(...) \
	uk_syscall_e_inotify_init1(__VA_ARGS__)
#define uk_syscall0_fn294() \
	uk_syscall_e0_inotify_init1()
#define uk_syscall1_fn294(arg1) \
	uk_syscall_e1_inotify_init1(arg1)
#define uk_syscall2_fn294(arg1, arg2) \
	uk_syscall_e2_inotify_init1(arg1, arg2)
#define uk_syscall3_fn294(arg1, arg2, arg3) \
	uk_syscall_e3_inotify_init1(arg1, arg2, arg3)
#define uk_syscall4_fn294(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_inotify_init1(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn294(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_inotify_init1(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn294(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_inotify_init1(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn294(...) \
	uk_syscall_r_inotify_init1(__VA_ARGS__)
#define uk_syscall_r0_fn294() \
	uk_syscall_r0_inotify_init1()
#define uk_syscall_r1_fn294(arg1) \
	uk_syscall_r1_inotify_init1(arg1)
#define uk_syscall_r2_fn294(arg1, arg2) \
	uk_syscall_r2_inotify_init1(arg1, arg2)
#define uk_syscall_r3_fn294(arg1, arg2, arg3) \
	uk_syscall_r3_inotify_init1(arg1, arg2, arg3)
#define uk_syscall_r4_fn294(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_inotify_init1(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn294(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_inotify_init1(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn294(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_inotify_init1(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_inotify_init1 */
#define uk_syscall_fn294(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn294() _uk_syscall_e_enosys()
#define uk_syscall1_fn294(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn294(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn294(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn294(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn294(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn294(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn294(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn294() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn294(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn294(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn294(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn294(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn294(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn294(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_inotify_init1 */

#ifdef HAVE_uk_syscall_preadv
#define uk_syscall_fn295(...) \
	uk_syscall_e_preadv(__VA_ARGS__)
#define uk_syscall0_fn295() \
	uk_syscall_e0_preadv()
#define uk_syscall1_fn295(arg1) \
	uk_syscall_e1_preadv(arg1)
#define uk_syscall2_fn295(arg1, arg2) \
	uk_syscall_e2_preadv(arg1, arg2)
#define uk_syscall3_fn295(arg1, arg2, arg3) \
	uk_syscall_e3_preadv(arg1, arg2, arg3)
#define uk_syscall4_fn295(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_preadv(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn295(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_preadv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn295(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_preadv(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn295(...) \
	uk_syscall_r_preadv(__VA_ARGS__)
#define uk_syscall_r0_fn295() \
	uk_syscall_r0_preadv()
#define uk_syscall_r1_fn295(arg1) \
	uk_syscall_r1_preadv(arg1)
#define uk_syscall_r2_fn295(arg1, arg2) \
	uk_syscall_r2_preadv(arg1, arg2)
#define uk_syscall_r3_fn295(arg1, arg2, arg3) \
	uk_syscall_r3_preadv(arg1, arg2, arg3)
#define uk_syscall_r4_fn295(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_preadv(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn295(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_preadv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn295(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_preadv(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_preadv */
#define uk_syscall_fn295(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn295() _uk_syscall_e_enosys()
#define uk_syscall1_fn295(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn295(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn295(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn295(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn295(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn295(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn295(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn295() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn295(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn295(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn295(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn295(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn295(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn295(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_preadv */

#ifdef HAVE_uk_syscall_pwritev
#define uk_syscall_fn296(...) \
	uk_syscall_e_pwritev(__VA_ARGS__)
#define uk_syscall0_fn296() \
	uk_syscall_e0_pwritev()
#define uk_syscall1_fn296(arg1) \
	uk_syscall_e1_pwritev(arg1)
#define uk_syscall2_fn296(arg1, arg2) \
	uk_syscall_e2_pwritev(arg1, arg2)
#define uk_syscall3_fn296(arg1, arg2, arg3) \
	uk_syscall_e3_pwritev(arg1, arg2, arg3)
#define uk_syscall4_fn296(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pwritev(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn296(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pwritev(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn296(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pwritev(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn296(...) \
	uk_syscall_r_pwritev(__VA_ARGS__)
#define uk_syscall_r0_fn296() \
	uk_syscall_r0_pwritev()
#define uk_syscall_r1_fn296(arg1) \
	uk_syscall_r1_pwritev(arg1)
#define uk_syscall_r2_fn296(arg1, arg2) \
	uk_syscall_r2_pwritev(arg1, arg2)
#define uk_syscall_r3_fn296(arg1, arg2, arg3) \
	uk_syscall_r3_pwritev(arg1, arg2, arg3)
#define uk_syscall_r4_fn296(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pwritev(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn296(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pwritev(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn296(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pwritev(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pwritev */
#define uk_syscall_fn296(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn296() _uk_syscall_e_enosys()
#define uk_syscall1_fn296(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn296(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn296(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn296(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn296(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn296(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn296(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn296() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn296(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn296(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn296(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn296(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn296(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn296(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pwritev */

#ifdef HAVE_uk_syscall_rt_tgsigqueueinfo
#define uk_syscall_fn297(...) \
	uk_syscall_e_rt_tgsigqueueinfo(__VA_ARGS__)
#define uk_syscall0_fn297() \
	uk_syscall_e0_rt_tgsigqueueinfo()
#define uk_syscall1_fn297(arg1) \
	uk_syscall_e1_rt_tgsigqueueinfo(arg1)
#define uk_syscall2_fn297(arg1, arg2) \
	uk_syscall_e2_rt_tgsigqueueinfo(arg1, arg2)
#define uk_syscall3_fn297(arg1, arg2, arg3) \
	uk_syscall_e3_rt_tgsigqueueinfo(arg1, arg2, arg3)
#define uk_syscall4_fn297(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rt_tgsigqueueinfo(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn297(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rt_tgsigqueueinfo(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn297(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rt_tgsigqueueinfo(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn297(...) \
	uk_syscall_r_rt_tgsigqueueinfo(__VA_ARGS__)
#define uk_syscall_r0_fn297() \
	uk_syscall_r0_rt_tgsigqueueinfo()
#define uk_syscall_r1_fn297(arg1) \
	uk_syscall_r1_rt_tgsigqueueinfo(arg1)
#define uk_syscall_r2_fn297(arg1, arg2) \
	uk_syscall_r2_rt_tgsigqueueinfo(arg1, arg2)
#define uk_syscall_r3_fn297(arg1, arg2, arg3) \
	uk_syscall_r3_rt_tgsigqueueinfo(arg1, arg2, arg3)
#define uk_syscall_r4_fn297(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rt_tgsigqueueinfo(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn297(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rt_tgsigqueueinfo(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn297(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rt_tgsigqueueinfo(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rt_tgsigqueueinfo */
#define uk_syscall_fn297(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn297() _uk_syscall_e_enosys()
#define uk_syscall1_fn297(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn297(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn297(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn297(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn297(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn297(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn297(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn297() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn297(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn297(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn297(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn297(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn297(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn297(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rt_tgsigqueueinfo */

#ifdef HAVE_uk_syscall_perf_event_open
#define uk_syscall_fn298(...) \
	uk_syscall_e_perf_event_open(__VA_ARGS__)
#define uk_syscall0_fn298() \
	uk_syscall_e0_perf_event_open()
#define uk_syscall1_fn298(arg1) \
	uk_syscall_e1_perf_event_open(arg1)
#define uk_syscall2_fn298(arg1, arg2) \
	uk_syscall_e2_perf_event_open(arg1, arg2)
#define uk_syscall3_fn298(arg1, arg2, arg3) \
	uk_syscall_e3_perf_event_open(arg1, arg2, arg3)
#define uk_syscall4_fn298(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_perf_event_open(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn298(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_perf_event_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn298(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_perf_event_open(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn298(...) \
	uk_syscall_r_perf_event_open(__VA_ARGS__)
#define uk_syscall_r0_fn298() \
	uk_syscall_r0_perf_event_open()
#define uk_syscall_r1_fn298(arg1) \
	uk_syscall_r1_perf_event_open(arg1)
#define uk_syscall_r2_fn298(arg1, arg2) \
	uk_syscall_r2_perf_event_open(arg1, arg2)
#define uk_syscall_r3_fn298(arg1, arg2, arg3) \
	uk_syscall_r3_perf_event_open(arg1, arg2, arg3)
#define uk_syscall_r4_fn298(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_perf_event_open(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn298(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_perf_event_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn298(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_perf_event_open(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_perf_event_open */
#define uk_syscall_fn298(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn298() _uk_syscall_e_enosys()
#define uk_syscall1_fn298(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn298(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn298(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn298(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn298(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn298(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn298(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn298() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn298(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn298(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn298(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn298(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn298(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn298(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_perf_event_open */

#ifdef HAVE_uk_syscall_recvmmsg
#define uk_syscall_fn299(...) \
	uk_syscall_e_recvmmsg(__VA_ARGS__)
#define uk_syscall0_fn299() \
	uk_syscall_e0_recvmmsg()
#define uk_syscall1_fn299(arg1) \
	uk_syscall_e1_recvmmsg(arg1)
#define uk_syscall2_fn299(arg1, arg2) \
	uk_syscall_e2_recvmmsg(arg1, arg2)
#define uk_syscall3_fn299(arg1, arg2, arg3) \
	uk_syscall_e3_recvmmsg(arg1, arg2, arg3)
#define uk_syscall4_fn299(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_recvmmsg(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn299(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_recvmmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn299(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_recvmmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn299(...) \
	uk_syscall_r_recvmmsg(__VA_ARGS__)
#define uk_syscall_r0_fn299() \
	uk_syscall_r0_recvmmsg()
#define uk_syscall_r1_fn299(arg1) \
	uk_syscall_r1_recvmmsg(arg1)
#define uk_syscall_r2_fn299(arg1, arg2) \
	uk_syscall_r2_recvmmsg(arg1, arg2)
#define uk_syscall_r3_fn299(arg1, arg2, arg3) \
	uk_syscall_r3_recvmmsg(arg1, arg2, arg3)
#define uk_syscall_r4_fn299(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_recvmmsg(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn299(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_recvmmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn299(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_recvmmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_recvmmsg */
#define uk_syscall_fn299(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn299() _uk_syscall_e_enosys()
#define uk_syscall1_fn299(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn299(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn299(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn299(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn299(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn299(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn299(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn299() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn299(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn299(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn299(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn299(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn299(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn299(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_recvmmsg */

#ifdef HAVE_uk_syscall_fanotify_init
#define uk_syscall_fn300(...) \
	uk_syscall_e_fanotify_init(__VA_ARGS__)
#define uk_syscall0_fn300() \
	uk_syscall_e0_fanotify_init()
#define uk_syscall1_fn300(arg1) \
	uk_syscall_e1_fanotify_init(arg1)
#define uk_syscall2_fn300(arg1, arg2) \
	uk_syscall_e2_fanotify_init(arg1, arg2)
#define uk_syscall3_fn300(arg1, arg2, arg3) \
	uk_syscall_e3_fanotify_init(arg1, arg2, arg3)
#define uk_syscall4_fn300(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fanotify_init(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn300(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fanotify_init(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn300(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fanotify_init(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn300(...) \
	uk_syscall_r_fanotify_init(__VA_ARGS__)
#define uk_syscall_r0_fn300() \
	uk_syscall_r0_fanotify_init()
#define uk_syscall_r1_fn300(arg1) \
	uk_syscall_r1_fanotify_init(arg1)
#define uk_syscall_r2_fn300(arg1, arg2) \
	uk_syscall_r2_fanotify_init(arg1, arg2)
#define uk_syscall_r3_fn300(arg1, arg2, arg3) \
	uk_syscall_r3_fanotify_init(arg1, arg2, arg3)
#define uk_syscall_r4_fn300(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fanotify_init(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn300(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fanotify_init(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn300(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fanotify_init(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fanotify_init */
#define uk_syscall_fn300(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn300() _uk_syscall_e_enosys()
#define uk_syscall1_fn300(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn300(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn300(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn300(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn300(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn300(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn300(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn300() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn300(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn300(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn300(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn300(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn300(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn300(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fanotify_init */

#ifdef HAVE_uk_syscall_fanotify_mark
#define uk_syscall_fn301(...) \
	uk_syscall_e_fanotify_mark(__VA_ARGS__)
#define uk_syscall0_fn301() \
	uk_syscall_e0_fanotify_mark()
#define uk_syscall1_fn301(arg1) \
	uk_syscall_e1_fanotify_mark(arg1)
#define uk_syscall2_fn301(arg1, arg2) \
	uk_syscall_e2_fanotify_mark(arg1, arg2)
#define uk_syscall3_fn301(arg1, arg2, arg3) \
	uk_syscall_e3_fanotify_mark(arg1, arg2, arg3)
#define uk_syscall4_fn301(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fanotify_mark(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn301(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fanotify_mark(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn301(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fanotify_mark(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn301(...) \
	uk_syscall_r_fanotify_mark(__VA_ARGS__)
#define uk_syscall_r0_fn301() \
	uk_syscall_r0_fanotify_mark()
#define uk_syscall_r1_fn301(arg1) \
	uk_syscall_r1_fanotify_mark(arg1)
#define uk_syscall_r2_fn301(arg1, arg2) \
	uk_syscall_r2_fanotify_mark(arg1, arg2)
#define uk_syscall_r3_fn301(arg1, arg2, arg3) \
	uk_syscall_r3_fanotify_mark(arg1, arg2, arg3)
#define uk_syscall_r4_fn301(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fanotify_mark(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn301(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fanotify_mark(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn301(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fanotify_mark(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fanotify_mark */
#define uk_syscall_fn301(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn301() _uk_syscall_e_enosys()
#define uk_syscall1_fn301(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn301(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn301(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn301(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn301(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn301(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn301(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn301() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn301(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn301(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn301(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn301(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn301(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn301(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fanotify_mark */

#ifdef HAVE_uk_syscall_prlimit64
#define uk_syscall_fn302(...) \
	uk_syscall_e_prlimit64(__VA_ARGS__)
#define uk_syscall0_fn302() \
	uk_syscall_e0_prlimit64()
#define uk_syscall1_fn302(arg1) \
	uk_syscall_e1_prlimit64(arg1)
#define uk_syscall2_fn302(arg1, arg2) \
	uk_syscall_e2_prlimit64(arg1, arg2)
#define uk_syscall3_fn302(arg1, arg2, arg3) \
	uk_syscall_e3_prlimit64(arg1, arg2, arg3)
#define uk_syscall4_fn302(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_prlimit64(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn302(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_prlimit64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn302(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_prlimit64(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn302(...) \
	uk_syscall_r_prlimit64(__VA_ARGS__)
#define uk_syscall_r0_fn302() \
	uk_syscall_r0_prlimit64()
#define uk_syscall_r1_fn302(arg1) \
	uk_syscall_r1_prlimit64(arg1)
#define uk_syscall_r2_fn302(arg1, arg2) \
	uk_syscall_r2_prlimit64(arg1, arg2)
#define uk_syscall_r3_fn302(arg1, arg2, arg3) \
	uk_syscall_r3_prlimit64(arg1, arg2, arg3)
#define uk_syscall_r4_fn302(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_prlimit64(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn302(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_prlimit64(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn302(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_prlimit64(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_prlimit64 */
#define uk_syscall_fn302(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn302() _uk_syscall_e_enosys()
#define uk_syscall1_fn302(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn302(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn302(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn302(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn302(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn302(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn302(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn302() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn302(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn302(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn302(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn302(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn302(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn302(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_prlimit64 */

#ifdef HAVE_uk_syscall_name_to_handle_at
#define uk_syscall_fn303(...) \
	uk_syscall_e_name_to_handle_at(__VA_ARGS__)
#define uk_syscall0_fn303() \
	uk_syscall_e0_name_to_handle_at()
#define uk_syscall1_fn303(arg1) \
	uk_syscall_e1_name_to_handle_at(arg1)
#define uk_syscall2_fn303(arg1, arg2) \
	uk_syscall_e2_name_to_handle_at(arg1, arg2)
#define uk_syscall3_fn303(arg1, arg2, arg3) \
	uk_syscall_e3_name_to_handle_at(arg1, arg2, arg3)
#define uk_syscall4_fn303(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_name_to_handle_at(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn303(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_name_to_handle_at(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn303(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_name_to_handle_at(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn303(...) \
	uk_syscall_r_name_to_handle_at(__VA_ARGS__)
#define uk_syscall_r0_fn303() \
	uk_syscall_r0_name_to_handle_at()
#define uk_syscall_r1_fn303(arg1) \
	uk_syscall_r1_name_to_handle_at(arg1)
#define uk_syscall_r2_fn303(arg1, arg2) \
	uk_syscall_r2_name_to_handle_at(arg1, arg2)
#define uk_syscall_r3_fn303(arg1, arg2, arg3) \
	uk_syscall_r3_name_to_handle_at(arg1, arg2, arg3)
#define uk_syscall_r4_fn303(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_name_to_handle_at(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn303(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_name_to_handle_at(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn303(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_name_to_handle_at(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_name_to_handle_at */
#define uk_syscall_fn303(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn303() _uk_syscall_e_enosys()
#define uk_syscall1_fn303(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn303(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn303(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn303(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn303(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn303(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn303(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn303() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn303(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn303(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn303(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn303(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn303(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn303(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_name_to_handle_at */

#ifdef HAVE_uk_syscall_open_by_handle_at
#define uk_syscall_fn304(...) \
	uk_syscall_e_open_by_handle_at(__VA_ARGS__)
#define uk_syscall0_fn304() \
	uk_syscall_e0_open_by_handle_at()
#define uk_syscall1_fn304(arg1) \
	uk_syscall_e1_open_by_handle_at(arg1)
#define uk_syscall2_fn304(arg1, arg2) \
	uk_syscall_e2_open_by_handle_at(arg1, arg2)
#define uk_syscall3_fn304(arg1, arg2, arg3) \
	uk_syscall_e3_open_by_handle_at(arg1, arg2, arg3)
#define uk_syscall4_fn304(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_open_by_handle_at(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn304(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_open_by_handle_at(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn304(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_open_by_handle_at(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn304(...) \
	uk_syscall_r_open_by_handle_at(__VA_ARGS__)
#define uk_syscall_r0_fn304() \
	uk_syscall_r0_open_by_handle_at()
#define uk_syscall_r1_fn304(arg1) \
	uk_syscall_r1_open_by_handle_at(arg1)
#define uk_syscall_r2_fn304(arg1, arg2) \
	uk_syscall_r2_open_by_handle_at(arg1, arg2)
#define uk_syscall_r3_fn304(arg1, arg2, arg3) \
	uk_syscall_r3_open_by_handle_at(arg1, arg2, arg3)
#define uk_syscall_r4_fn304(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_open_by_handle_at(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn304(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_open_by_handle_at(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn304(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_open_by_handle_at(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_open_by_handle_at */
#define uk_syscall_fn304(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn304() _uk_syscall_e_enosys()
#define uk_syscall1_fn304(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn304(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn304(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn304(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn304(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn304(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn304(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn304() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn304(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn304(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn304(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn304(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn304(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn304(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_open_by_handle_at */

#ifdef HAVE_uk_syscall_clock_adjtime
#define uk_syscall_fn305(...) \
	uk_syscall_e_clock_adjtime(__VA_ARGS__)
#define uk_syscall0_fn305() \
	uk_syscall_e0_clock_adjtime()
#define uk_syscall1_fn305(arg1) \
	uk_syscall_e1_clock_adjtime(arg1)
#define uk_syscall2_fn305(arg1, arg2) \
	uk_syscall_e2_clock_adjtime(arg1, arg2)
#define uk_syscall3_fn305(arg1, arg2, arg3) \
	uk_syscall_e3_clock_adjtime(arg1, arg2, arg3)
#define uk_syscall4_fn305(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_clock_adjtime(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn305(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_clock_adjtime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn305(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_clock_adjtime(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn305(...) \
	uk_syscall_r_clock_adjtime(__VA_ARGS__)
#define uk_syscall_r0_fn305() \
	uk_syscall_r0_clock_adjtime()
#define uk_syscall_r1_fn305(arg1) \
	uk_syscall_r1_clock_adjtime(arg1)
#define uk_syscall_r2_fn305(arg1, arg2) \
	uk_syscall_r2_clock_adjtime(arg1, arg2)
#define uk_syscall_r3_fn305(arg1, arg2, arg3) \
	uk_syscall_r3_clock_adjtime(arg1, arg2, arg3)
#define uk_syscall_r4_fn305(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_clock_adjtime(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn305(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_clock_adjtime(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn305(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_clock_adjtime(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_clock_adjtime */
#define uk_syscall_fn305(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn305() _uk_syscall_e_enosys()
#define uk_syscall1_fn305(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn305(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn305(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn305(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn305(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn305(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn305(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn305() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn305(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn305(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn305(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn305(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn305(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn305(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_clock_adjtime */

#ifdef HAVE_uk_syscall_syncfs
#define uk_syscall_fn306(...) \
	uk_syscall_e_syncfs(__VA_ARGS__)
#define uk_syscall0_fn306() \
	uk_syscall_e0_syncfs()
#define uk_syscall1_fn306(arg1) \
	uk_syscall_e1_syncfs(arg1)
#define uk_syscall2_fn306(arg1, arg2) \
	uk_syscall_e2_syncfs(arg1, arg2)
#define uk_syscall3_fn306(arg1, arg2, arg3) \
	uk_syscall_e3_syncfs(arg1, arg2, arg3)
#define uk_syscall4_fn306(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_syncfs(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn306(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_syncfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn306(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_syncfs(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn306(...) \
	uk_syscall_r_syncfs(__VA_ARGS__)
#define uk_syscall_r0_fn306() \
	uk_syscall_r0_syncfs()
#define uk_syscall_r1_fn306(arg1) \
	uk_syscall_r1_syncfs(arg1)
#define uk_syscall_r2_fn306(arg1, arg2) \
	uk_syscall_r2_syncfs(arg1, arg2)
#define uk_syscall_r3_fn306(arg1, arg2, arg3) \
	uk_syscall_r3_syncfs(arg1, arg2, arg3)
#define uk_syscall_r4_fn306(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_syncfs(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn306(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_syncfs(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn306(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_syncfs(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_syncfs */
#define uk_syscall_fn306(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn306() _uk_syscall_e_enosys()
#define uk_syscall1_fn306(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn306(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn306(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn306(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn306(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn306(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn306(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn306() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn306(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn306(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn306(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn306(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn306(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn306(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_syncfs */

#ifdef HAVE_uk_syscall_sendmmsg
#define uk_syscall_fn307(...) \
	uk_syscall_e_sendmmsg(__VA_ARGS__)
#define uk_syscall0_fn307() \
	uk_syscall_e0_sendmmsg()
#define uk_syscall1_fn307(arg1) \
	uk_syscall_e1_sendmmsg(arg1)
#define uk_syscall2_fn307(arg1, arg2) \
	uk_syscall_e2_sendmmsg(arg1, arg2)
#define uk_syscall3_fn307(arg1, arg2, arg3) \
	uk_syscall_e3_sendmmsg(arg1, arg2, arg3)
#define uk_syscall4_fn307(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sendmmsg(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn307(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sendmmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn307(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sendmmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn307(...) \
	uk_syscall_r_sendmmsg(__VA_ARGS__)
#define uk_syscall_r0_fn307() \
	uk_syscall_r0_sendmmsg()
#define uk_syscall_r1_fn307(arg1) \
	uk_syscall_r1_sendmmsg(arg1)
#define uk_syscall_r2_fn307(arg1, arg2) \
	uk_syscall_r2_sendmmsg(arg1, arg2)
#define uk_syscall_r3_fn307(arg1, arg2, arg3) \
	uk_syscall_r3_sendmmsg(arg1, arg2, arg3)
#define uk_syscall_r4_fn307(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sendmmsg(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn307(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sendmmsg(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn307(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sendmmsg(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sendmmsg */
#define uk_syscall_fn307(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn307() _uk_syscall_e_enosys()
#define uk_syscall1_fn307(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn307(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn307(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn307(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn307(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn307(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn307(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn307() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn307(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn307(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn307(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn307(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn307(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn307(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sendmmsg */

#ifdef HAVE_uk_syscall_setns
#define uk_syscall_fn308(...) \
	uk_syscall_e_setns(__VA_ARGS__)
#define uk_syscall0_fn308() \
	uk_syscall_e0_setns()
#define uk_syscall1_fn308(arg1) \
	uk_syscall_e1_setns(arg1)
#define uk_syscall2_fn308(arg1, arg2) \
	uk_syscall_e2_setns(arg1, arg2)
#define uk_syscall3_fn308(arg1, arg2, arg3) \
	uk_syscall_e3_setns(arg1, arg2, arg3)
#define uk_syscall4_fn308(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_setns(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn308(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_setns(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn308(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_setns(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn308(...) \
	uk_syscall_r_setns(__VA_ARGS__)
#define uk_syscall_r0_fn308() \
	uk_syscall_r0_setns()
#define uk_syscall_r1_fn308(arg1) \
	uk_syscall_r1_setns(arg1)
#define uk_syscall_r2_fn308(arg1, arg2) \
	uk_syscall_r2_setns(arg1, arg2)
#define uk_syscall_r3_fn308(arg1, arg2, arg3) \
	uk_syscall_r3_setns(arg1, arg2, arg3)
#define uk_syscall_r4_fn308(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_setns(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn308(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_setns(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn308(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_setns(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_setns */
#define uk_syscall_fn308(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn308() _uk_syscall_e_enosys()
#define uk_syscall1_fn308(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn308(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn308(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn308(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn308(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn308(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn308(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn308() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn308(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn308(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn308(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn308(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn308(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn308(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_setns */

#ifdef HAVE_uk_syscall_getcpu
#define uk_syscall_fn309(...) \
	uk_syscall_e_getcpu(__VA_ARGS__)
#define uk_syscall0_fn309() \
	uk_syscall_e0_getcpu()
#define uk_syscall1_fn309(arg1) \
	uk_syscall_e1_getcpu(arg1)
#define uk_syscall2_fn309(arg1, arg2) \
	uk_syscall_e2_getcpu(arg1, arg2)
#define uk_syscall3_fn309(arg1, arg2, arg3) \
	uk_syscall_e3_getcpu(arg1, arg2, arg3)
#define uk_syscall4_fn309(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getcpu(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn309(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getcpu(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn309(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getcpu(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn309(...) \
	uk_syscall_r_getcpu(__VA_ARGS__)
#define uk_syscall_r0_fn309() \
	uk_syscall_r0_getcpu()
#define uk_syscall_r1_fn309(arg1) \
	uk_syscall_r1_getcpu(arg1)
#define uk_syscall_r2_fn309(arg1, arg2) \
	uk_syscall_r2_getcpu(arg1, arg2)
#define uk_syscall_r3_fn309(arg1, arg2, arg3) \
	uk_syscall_r3_getcpu(arg1, arg2, arg3)
#define uk_syscall_r4_fn309(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getcpu(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn309(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getcpu(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn309(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getcpu(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getcpu */
#define uk_syscall_fn309(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn309() _uk_syscall_e_enosys()
#define uk_syscall1_fn309(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn309(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn309(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn309(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn309(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn309(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn309(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn309() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn309(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn309(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn309(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn309(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn309(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn309(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getcpu */

#ifdef HAVE_uk_syscall_process_vm_readv
#define uk_syscall_fn310(...) \
	uk_syscall_e_process_vm_readv(__VA_ARGS__)
#define uk_syscall0_fn310() \
	uk_syscall_e0_process_vm_readv()
#define uk_syscall1_fn310(arg1) \
	uk_syscall_e1_process_vm_readv(arg1)
#define uk_syscall2_fn310(arg1, arg2) \
	uk_syscall_e2_process_vm_readv(arg1, arg2)
#define uk_syscall3_fn310(arg1, arg2, arg3) \
	uk_syscall_e3_process_vm_readv(arg1, arg2, arg3)
#define uk_syscall4_fn310(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_process_vm_readv(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn310(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_process_vm_readv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn310(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_process_vm_readv(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn310(...) \
	uk_syscall_r_process_vm_readv(__VA_ARGS__)
#define uk_syscall_r0_fn310() \
	uk_syscall_r0_process_vm_readv()
#define uk_syscall_r1_fn310(arg1) \
	uk_syscall_r1_process_vm_readv(arg1)
#define uk_syscall_r2_fn310(arg1, arg2) \
	uk_syscall_r2_process_vm_readv(arg1, arg2)
#define uk_syscall_r3_fn310(arg1, arg2, arg3) \
	uk_syscall_r3_process_vm_readv(arg1, arg2, arg3)
#define uk_syscall_r4_fn310(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_process_vm_readv(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn310(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_process_vm_readv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn310(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_process_vm_readv(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_process_vm_readv */
#define uk_syscall_fn310(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn310() _uk_syscall_e_enosys()
#define uk_syscall1_fn310(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn310(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn310(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn310(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn310(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn310(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn310(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn310() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn310(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn310(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn310(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn310(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn310(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn310(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_process_vm_readv */

#ifdef HAVE_uk_syscall_process_vm_writev
#define uk_syscall_fn311(...) \
	uk_syscall_e_process_vm_writev(__VA_ARGS__)
#define uk_syscall0_fn311() \
	uk_syscall_e0_process_vm_writev()
#define uk_syscall1_fn311(arg1) \
	uk_syscall_e1_process_vm_writev(arg1)
#define uk_syscall2_fn311(arg1, arg2) \
	uk_syscall_e2_process_vm_writev(arg1, arg2)
#define uk_syscall3_fn311(arg1, arg2, arg3) \
	uk_syscall_e3_process_vm_writev(arg1, arg2, arg3)
#define uk_syscall4_fn311(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_process_vm_writev(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn311(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_process_vm_writev(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn311(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_process_vm_writev(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn311(...) \
	uk_syscall_r_process_vm_writev(__VA_ARGS__)
#define uk_syscall_r0_fn311() \
	uk_syscall_r0_process_vm_writev()
#define uk_syscall_r1_fn311(arg1) \
	uk_syscall_r1_process_vm_writev(arg1)
#define uk_syscall_r2_fn311(arg1, arg2) \
	uk_syscall_r2_process_vm_writev(arg1, arg2)
#define uk_syscall_r3_fn311(arg1, arg2, arg3) \
	uk_syscall_r3_process_vm_writev(arg1, arg2, arg3)
#define uk_syscall_r4_fn311(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_process_vm_writev(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn311(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_process_vm_writev(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn311(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_process_vm_writev(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_process_vm_writev */
#define uk_syscall_fn311(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn311() _uk_syscall_e_enosys()
#define uk_syscall1_fn311(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn311(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn311(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn311(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn311(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn311(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn311(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn311() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn311(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn311(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn311(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn311(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn311(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn311(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_process_vm_writev */

#ifdef HAVE_uk_syscall_kcmp
#define uk_syscall_fn312(...) \
	uk_syscall_e_kcmp(__VA_ARGS__)
#define uk_syscall0_fn312() \
	uk_syscall_e0_kcmp()
#define uk_syscall1_fn312(arg1) \
	uk_syscall_e1_kcmp(arg1)
#define uk_syscall2_fn312(arg1, arg2) \
	uk_syscall_e2_kcmp(arg1, arg2)
#define uk_syscall3_fn312(arg1, arg2, arg3) \
	uk_syscall_e3_kcmp(arg1, arg2, arg3)
#define uk_syscall4_fn312(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_kcmp(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn312(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_kcmp(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn312(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_kcmp(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn312(...) \
	uk_syscall_r_kcmp(__VA_ARGS__)
#define uk_syscall_r0_fn312() \
	uk_syscall_r0_kcmp()
#define uk_syscall_r1_fn312(arg1) \
	uk_syscall_r1_kcmp(arg1)
#define uk_syscall_r2_fn312(arg1, arg2) \
	uk_syscall_r2_kcmp(arg1, arg2)
#define uk_syscall_r3_fn312(arg1, arg2, arg3) \
	uk_syscall_r3_kcmp(arg1, arg2, arg3)
#define uk_syscall_r4_fn312(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_kcmp(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn312(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_kcmp(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn312(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_kcmp(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_kcmp */
#define uk_syscall_fn312(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn312() _uk_syscall_e_enosys()
#define uk_syscall1_fn312(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn312(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn312(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn312(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn312(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn312(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn312(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn312() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn312(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn312(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn312(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn312(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn312(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn312(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_kcmp */

#ifdef HAVE_uk_syscall_finit_module
#define uk_syscall_fn313(...) \
	uk_syscall_e_finit_module(__VA_ARGS__)
#define uk_syscall0_fn313() \
	uk_syscall_e0_finit_module()
#define uk_syscall1_fn313(arg1) \
	uk_syscall_e1_finit_module(arg1)
#define uk_syscall2_fn313(arg1, arg2) \
	uk_syscall_e2_finit_module(arg1, arg2)
#define uk_syscall3_fn313(arg1, arg2, arg3) \
	uk_syscall_e3_finit_module(arg1, arg2, arg3)
#define uk_syscall4_fn313(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_finit_module(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn313(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_finit_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn313(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_finit_module(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn313(...) \
	uk_syscall_r_finit_module(__VA_ARGS__)
#define uk_syscall_r0_fn313() \
	uk_syscall_r0_finit_module()
#define uk_syscall_r1_fn313(arg1) \
	uk_syscall_r1_finit_module(arg1)
#define uk_syscall_r2_fn313(arg1, arg2) \
	uk_syscall_r2_finit_module(arg1, arg2)
#define uk_syscall_r3_fn313(arg1, arg2, arg3) \
	uk_syscall_r3_finit_module(arg1, arg2, arg3)
#define uk_syscall_r4_fn313(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_finit_module(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn313(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_finit_module(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn313(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_finit_module(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_finit_module */
#define uk_syscall_fn313(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn313() _uk_syscall_e_enosys()
#define uk_syscall1_fn313(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn313(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn313(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn313(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn313(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn313(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn313(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn313() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn313(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn313(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn313(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn313(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn313(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn313(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_finit_module */

#ifdef HAVE_uk_syscall_sched_setattr
#define uk_syscall_fn314(...) \
	uk_syscall_e_sched_setattr(__VA_ARGS__)
#define uk_syscall0_fn314() \
	uk_syscall_e0_sched_setattr()
#define uk_syscall1_fn314(arg1) \
	uk_syscall_e1_sched_setattr(arg1)
#define uk_syscall2_fn314(arg1, arg2) \
	uk_syscall_e2_sched_setattr(arg1, arg2)
#define uk_syscall3_fn314(arg1, arg2, arg3) \
	uk_syscall_e3_sched_setattr(arg1, arg2, arg3)
#define uk_syscall4_fn314(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_setattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn314(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_setattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn314(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_setattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn314(...) \
	uk_syscall_r_sched_setattr(__VA_ARGS__)
#define uk_syscall_r0_fn314() \
	uk_syscall_r0_sched_setattr()
#define uk_syscall_r1_fn314(arg1) \
	uk_syscall_r1_sched_setattr(arg1)
#define uk_syscall_r2_fn314(arg1, arg2) \
	uk_syscall_r2_sched_setattr(arg1, arg2)
#define uk_syscall_r3_fn314(arg1, arg2, arg3) \
	uk_syscall_r3_sched_setattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn314(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_setattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn314(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_setattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn314(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_setattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_setattr */
#define uk_syscall_fn314(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn314() _uk_syscall_e_enosys()
#define uk_syscall1_fn314(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn314(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn314(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn314(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn314(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn314(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn314(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn314() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn314(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn314(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn314(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn314(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn314(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn314(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_setattr */

#ifdef HAVE_uk_syscall_sched_getattr
#define uk_syscall_fn315(...) \
	uk_syscall_e_sched_getattr(__VA_ARGS__)
#define uk_syscall0_fn315() \
	uk_syscall_e0_sched_getattr()
#define uk_syscall1_fn315(arg1) \
	uk_syscall_e1_sched_getattr(arg1)
#define uk_syscall2_fn315(arg1, arg2) \
	uk_syscall_e2_sched_getattr(arg1, arg2)
#define uk_syscall3_fn315(arg1, arg2, arg3) \
	uk_syscall_e3_sched_getattr(arg1, arg2, arg3)
#define uk_syscall4_fn315(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_sched_getattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn315(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_sched_getattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn315(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_sched_getattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn315(...) \
	uk_syscall_r_sched_getattr(__VA_ARGS__)
#define uk_syscall_r0_fn315() \
	uk_syscall_r0_sched_getattr()
#define uk_syscall_r1_fn315(arg1) \
	uk_syscall_r1_sched_getattr(arg1)
#define uk_syscall_r2_fn315(arg1, arg2) \
	uk_syscall_r2_sched_getattr(arg1, arg2)
#define uk_syscall_r3_fn315(arg1, arg2, arg3) \
	uk_syscall_r3_sched_getattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn315(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_sched_getattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn315(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_sched_getattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn315(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_sched_getattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_sched_getattr */
#define uk_syscall_fn315(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn315() _uk_syscall_e_enosys()
#define uk_syscall1_fn315(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn315(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn315(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn315(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn315(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn315(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn315(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn315() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn315(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn315(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn315(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn315(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn315(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn315(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_sched_getattr */

#ifdef HAVE_uk_syscall_renameat2
#define uk_syscall_fn316(...) \
	uk_syscall_e_renameat2(__VA_ARGS__)
#define uk_syscall0_fn316() \
	uk_syscall_e0_renameat2()
#define uk_syscall1_fn316(arg1) \
	uk_syscall_e1_renameat2(arg1)
#define uk_syscall2_fn316(arg1, arg2) \
	uk_syscall_e2_renameat2(arg1, arg2)
#define uk_syscall3_fn316(arg1, arg2, arg3) \
	uk_syscall_e3_renameat2(arg1, arg2, arg3)
#define uk_syscall4_fn316(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_renameat2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn316(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_renameat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn316(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_renameat2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn316(...) \
	uk_syscall_r_renameat2(__VA_ARGS__)
#define uk_syscall_r0_fn316() \
	uk_syscall_r0_renameat2()
#define uk_syscall_r1_fn316(arg1) \
	uk_syscall_r1_renameat2(arg1)
#define uk_syscall_r2_fn316(arg1, arg2) \
	uk_syscall_r2_renameat2(arg1, arg2)
#define uk_syscall_r3_fn316(arg1, arg2, arg3) \
	uk_syscall_r3_renameat2(arg1, arg2, arg3)
#define uk_syscall_r4_fn316(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_renameat2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn316(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_renameat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn316(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_renameat2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_renameat2 */
#define uk_syscall_fn316(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn316() _uk_syscall_e_enosys()
#define uk_syscall1_fn316(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn316(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn316(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn316(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn316(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn316(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn316(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn316() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn316(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn316(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn316(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn316(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn316(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn316(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_renameat2 */

#ifdef HAVE_uk_syscall_seccomp
#define uk_syscall_fn317(...) \
	uk_syscall_e_seccomp(__VA_ARGS__)
#define uk_syscall0_fn317() \
	uk_syscall_e0_seccomp()
#define uk_syscall1_fn317(arg1) \
	uk_syscall_e1_seccomp(arg1)
#define uk_syscall2_fn317(arg1, arg2) \
	uk_syscall_e2_seccomp(arg1, arg2)
#define uk_syscall3_fn317(arg1, arg2, arg3) \
	uk_syscall_e3_seccomp(arg1, arg2, arg3)
#define uk_syscall4_fn317(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_seccomp(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn317(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_seccomp(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn317(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_seccomp(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn317(...) \
	uk_syscall_r_seccomp(__VA_ARGS__)
#define uk_syscall_r0_fn317() \
	uk_syscall_r0_seccomp()
#define uk_syscall_r1_fn317(arg1) \
	uk_syscall_r1_seccomp(arg1)
#define uk_syscall_r2_fn317(arg1, arg2) \
	uk_syscall_r2_seccomp(arg1, arg2)
#define uk_syscall_r3_fn317(arg1, arg2, arg3) \
	uk_syscall_r3_seccomp(arg1, arg2, arg3)
#define uk_syscall_r4_fn317(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_seccomp(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn317(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_seccomp(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn317(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_seccomp(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_seccomp */
#define uk_syscall_fn317(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn317() _uk_syscall_e_enosys()
#define uk_syscall1_fn317(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn317(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn317(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn317(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn317(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn317(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn317(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn317() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn317(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn317(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn317(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn317(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn317(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn317(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_seccomp */

#ifdef HAVE_uk_syscall_getrandom
#define uk_syscall_fn318(...) \
	uk_syscall_e_getrandom(__VA_ARGS__)
#define uk_syscall0_fn318() \
	uk_syscall_e0_getrandom()
#define uk_syscall1_fn318(arg1) \
	uk_syscall_e1_getrandom(arg1)
#define uk_syscall2_fn318(arg1, arg2) \
	uk_syscall_e2_getrandom(arg1, arg2)
#define uk_syscall3_fn318(arg1, arg2, arg3) \
	uk_syscall_e3_getrandom(arg1, arg2, arg3)
#define uk_syscall4_fn318(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_getrandom(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn318(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_getrandom(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn318(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_getrandom(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn318(...) \
	uk_syscall_r_getrandom(__VA_ARGS__)
#define uk_syscall_r0_fn318() \
	uk_syscall_r0_getrandom()
#define uk_syscall_r1_fn318(arg1) \
	uk_syscall_r1_getrandom(arg1)
#define uk_syscall_r2_fn318(arg1, arg2) \
	uk_syscall_r2_getrandom(arg1, arg2)
#define uk_syscall_r3_fn318(arg1, arg2, arg3) \
	uk_syscall_r3_getrandom(arg1, arg2, arg3)
#define uk_syscall_r4_fn318(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_getrandom(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn318(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_getrandom(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn318(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_getrandom(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_getrandom */
#define uk_syscall_fn318(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn318() _uk_syscall_e_enosys()
#define uk_syscall1_fn318(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn318(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn318(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn318(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn318(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn318(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn318(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn318() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn318(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn318(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn318(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn318(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn318(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn318(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_getrandom */

#ifdef HAVE_uk_syscall_memfd_create
#define uk_syscall_fn319(...) \
	uk_syscall_e_memfd_create(__VA_ARGS__)
#define uk_syscall0_fn319() \
	uk_syscall_e0_memfd_create()
#define uk_syscall1_fn319(arg1) \
	uk_syscall_e1_memfd_create(arg1)
#define uk_syscall2_fn319(arg1, arg2) \
	uk_syscall_e2_memfd_create(arg1, arg2)
#define uk_syscall3_fn319(arg1, arg2, arg3) \
	uk_syscall_e3_memfd_create(arg1, arg2, arg3)
#define uk_syscall4_fn319(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_memfd_create(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn319(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_memfd_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn319(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_memfd_create(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn319(...) \
	uk_syscall_r_memfd_create(__VA_ARGS__)
#define uk_syscall_r0_fn319() \
	uk_syscall_r0_memfd_create()
#define uk_syscall_r1_fn319(arg1) \
	uk_syscall_r1_memfd_create(arg1)
#define uk_syscall_r2_fn319(arg1, arg2) \
	uk_syscall_r2_memfd_create(arg1, arg2)
#define uk_syscall_r3_fn319(arg1, arg2, arg3) \
	uk_syscall_r3_memfd_create(arg1, arg2, arg3)
#define uk_syscall_r4_fn319(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_memfd_create(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn319(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_memfd_create(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn319(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_memfd_create(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_memfd_create */
#define uk_syscall_fn319(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn319() _uk_syscall_e_enosys()
#define uk_syscall1_fn319(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn319(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn319(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn319(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn319(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn319(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn319(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn319() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn319(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn319(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn319(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn319(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn319(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn319(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_memfd_create */

#ifdef HAVE_uk_syscall_kexec_file_load
#define uk_syscall_fn320(...) \
	uk_syscall_e_kexec_file_load(__VA_ARGS__)
#define uk_syscall0_fn320() \
	uk_syscall_e0_kexec_file_load()
#define uk_syscall1_fn320(arg1) \
	uk_syscall_e1_kexec_file_load(arg1)
#define uk_syscall2_fn320(arg1, arg2) \
	uk_syscall_e2_kexec_file_load(arg1, arg2)
#define uk_syscall3_fn320(arg1, arg2, arg3) \
	uk_syscall_e3_kexec_file_load(arg1, arg2, arg3)
#define uk_syscall4_fn320(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_kexec_file_load(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn320(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_kexec_file_load(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn320(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_kexec_file_load(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn320(...) \
	uk_syscall_r_kexec_file_load(__VA_ARGS__)
#define uk_syscall_r0_fn320() \
	uk_syscall_r0_kexec_file_load()
#define uk_syscall_r1_fn320(arg1) \
	uk_syscall_r1_kexec_file_load(arg1)
#define uk_syscall_r2_fn320(arg1, arg2) \
	uk_syscall_r2_kexec_file_load(arg1, arg2)
#define uk_syscall_r3_fn320(arg1, arg2, arg3) \
	uk_syscall_r3_kexec_file_load(arg1, arg2, arg3)
#define uk_syscall_r4_fn320(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_kexec_file_load(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn320(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_kexec_file_load(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn320(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_kexec_file_load(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_kexec_file_load */
#define uk_syscall_fn320(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn320() _uk_syscall_e_enosys()
#define uk_syscall1_fn320(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn320(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn320(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn320(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn320(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn320(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn320(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn320() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn320(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn320(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn320(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn320(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn320(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn320(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_kexec_file_load */

#ifdef HAVE_uk_syscall_bpf
#define uk_syscall_fn321(...) \
	uk_syscall_e_bpf(__VA_ARGS__)
#define uk_syscall0_fn321() \
	uk_syscall_e0_bpf()
#define uk_syscall1_fn321(arg1) \
	uk_syscall_e1_bpf(arg1)
#define uk_syscall2_fn321(arg1, arg2) \
	uk_syscall_e2_bpf(arg1, arg2)
#define uk_syscall3_fn321(arg1, arg2, arg3) \
	uk_syscall_e3_bpf(arg1, arg2, arg3)
#define uk_syscall4_fn321(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_bpf(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn321(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_bpf(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn321(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_bpf(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn321(...) \
	uk_syscall_r_bpf(__VA_ARGS__)
#define uk_syscall_r0_fn321() \
	uk_syscall_r0_bpf()
#define uk_syscall_r1_fn321(arg1) \
	uk_syscall_r1_bpf(arg1)
#define uk_syscall_r2_fn321(arg1, arg2) \
	uk_syscall_r2_bpf(arg1, arg2)
#define uk_syscall_r3_fn321(arg1, arg2, arg3) \
	uk_syscall_r3_bpf(arg1, arg2, arg3)
#define uk_syscall_r4_fn321(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_bpf(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn321(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_bpf(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn321(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_bpf(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_bpf */
#define uk_syscall_fn321(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn321() _uk_syscall_e_enosys()
#define uk_syscall1_fn321(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn321(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn321(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn321(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn321(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn321(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn321(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn321() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn321(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn321(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn321(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn321(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn321(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn321(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_bpf */

#ifdef HAVE_uk_syscall_execveat
#define uk_syscall_fn322(...) \
	uk_syscall_e_execveat(__VA_ARGS__)
#define uk_syscall0_fn322() \
	uk_syscall_e0_execveat()
#define uk_syscall1_fn322(arg1) \
	uk_syscall_e1_execveat(arg1)
#define uk_syscall2_fn322(arg1, arg2) \
	uk_syscall_e2_execveat(arg1, arg2)
#define uk_syscall3_fn322(arg1, arg2, arg3) \
	uk_syscall_e3_execveat(arg1, arg2, arg3)
#define uk_syscall4_fn322(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_execveat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn322(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_execveat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn322(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_execveat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn322(...) \
	uk_syscall_r_execveat(__VA_ARGS__)
#define uk_syscall_r0_fn322() \
	uk_syscall_r0_execveat()
#define uk_syscall_r1_fn322(arg1) \
	uk_syscall_r1_execveat(arg1)
#define uk_syscall_r2_fn322(arg1, arg2) \
	uk_syscall_r2_execveat(arg1, arg2)
#define uk_syscall_r3_fn322(arg1, arg2, arg3) \
	uk_syscall_r3_execveat(arg1, arg2, arg3)
#define uk_syscall_r4_fn322(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_execveat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn322(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_execveat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn322(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_execveat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_execveat */
#define uk_syscall_fn322(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn322() _uk_syscall_e_enosys()
#define uk_syscall1_fn322(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn322(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn322(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn322(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn322(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn322(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn322(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn322() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn322(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn322(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn322(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn322(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn322(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn322(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_execveat */

#ifdef HAVE_uk_syscall_userfaultfd
#define uk_syscall_fn323(...) \
	uk_syscall_e_userfaultfd(__VA_ARGS__)
#define uk_syscall0_fn323() \
	uk_syscall_e0_userfaultfd()
#define uk_syscall1_fn323(arg1) \
	uk_syscall_e1_userfaultfd(arg1)
#define uk_syscall2_fn323(arg1, arg2) \
	uk_syscall_e2_userfaultfd(arg1, arg2)
#define uk_syscall3_fn323(arg1, arg2, arg3) \
	uk_syscall_e3_userfaultfd(arg1, arg2, arg3)
#define uk_syscall4_fn323(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_userfaultfd(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn323(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_userfaultfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn323(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_userfaultfd(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn323(...) \
	uk_syscall_r_userfaultfd(__VA_ARGS__)
#define uk_syscall_r0_fn323() \
	uk_syscall_r0_userfaultfd()
#define uk_syscall_r1_fn323(arg1) \
	uk_syscall_r1_userfaultfd(arg1)
#define uk_syscall_r2_fn323(arg1, arg2) \
	uk_syscall_r2_userfaultfd(arg1, arg2)
#define uk_syscall_r3_fn323(arg1, arg2, arg3) \
	uk_syscall_r3_userfaultfd(arg1, arg2, arg3)
#define uk_syscall_r4_fn323(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_userfaultfd(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn323(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_userfaultfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn323(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_userfaultfd(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_userfaultfd */
#define uk_syscall_fn323(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn323() _uk_syscall_e_enosys()
#define uk_syscall1_fn323(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn323(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn323(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn323(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn323(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn323(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn323(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn323() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn323(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn323(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn323(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn323(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn323(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn323(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_userfaultfd */

#ifdef HAVE_uk_syscall_membarrier
#define uk_syscall_fn324(...) \
	uk_syscall_e_membarrier(__VA_ARGS__)
#define uk_syscall0_fn324() \
	uk_syscall_e0_membarrier()
#define uk_syscall1_fn324(arg1) \
	uk_syscall_e1_membarrier(arg1)
#define uk_syscall2_fn324(arg1, arg2) \
	uk_syscall_e2_membarrier(arg1, arg2)
#define uk_syscall3_fn324(arg1, arg2, arg3) \
	uk_syscall_e3_membarrier(arg1, arg2, arg3)
#define uk_syscall4_fn324(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_membarrier(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn324(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_membarrier(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn324(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_membarrier(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn324(...) \
	uk_syscall_r_membarrier(__VA_ARGS__)
#define uk_syscall_r0_fn324() \
	uk_syscall_r0_membarrier()
#define uk_syscall_r1_fn324(arg1) \
	uk_syscall_r1_membarrier(arg1)
#define uk_syscall_r2_fn324(arg1, arg2) \
	uk_syscall_r2_membarrier(arg1, arg2)
#define uk_syscall_r3_fn324(arg1, arg2, arg3) \
	uk_syscall_r3_membarrier(arg1, arg2, arg3)
#define uk_syscall_r4_fn324(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_membarrier(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn324(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_membarrier(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn324(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_membarrier(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_membarrier */
#define uk_syscall_fn324(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn324() _uk_syscall_e_enosys()
#define uk_syscall1_fn324(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn324(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn324(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn324(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn324(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn324(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn324(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn324() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn324(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn324(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn324(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn324(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn324(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn324(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_membarrier */

#ifdef HAVE_uk_syscall_mlock2
#define uk_syscall_fn325(...) \
	uk_syscall_e_mlock2(__VA_ARGS__)
#define uk_syscall0_fn325() \
	uk_syscall_e0_mlock2()
#define uk_syscall1_fn325(arg1) \
	uk_syscall_e1_mlock2(arg1)
#define uk_syscall2_fn325(arg1, arg2) \
	uk_syscall_e2_mlock2(arg1, arg2)
#define uk_syscall3_fn325(arg1, arg2, arg3) \
	uk_syscall_e3_mlock2(arg1, arg2, arg3)
#define uk_syscall4_fn325(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mlock2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn325(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mlock2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn325(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mlock2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn325(...) \
	uk_syscall_r_mlock2(__VA_ARGS__)
#define uk_syscall_r0_fn325() \
	uk_syscall_r0_mlock2()
#define uk_syscall_r1_fn325(arg1) \
	uk_syscall_r1_mlock2(arg1)
#define uk_syscall_r2_fn325(arg1, arg2) \
	uk_syscall_r2_mlock2(arg1, arg2)
#define uk_syscall_r3_fn325(arg1, arg2, arg3) \
	uk_syscall_r3_mlock2(arg1, arg2, arg3)
#define uk_syscall_r4_fn325(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mlock2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn325(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mlock2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn325(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mlock2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mlock2 */
#define uk_syscall_fn325(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn325() _uk_syscall_e_enosys()
#define uk_syscall1_fn325(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn325(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn325(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn325(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn325(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn325(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn325(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn325() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn325(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn325(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn325(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn325(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn325(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn325(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mlock2 */

#ifdef HAVE_uk_syscall_copy_file_range
#define uk_syscall_fn326(...) \
	uk_syscall_e_copy_file_range(__VA_ARGS__)
#define uk_syscall0_fn326() \
	uk_syscall_e0_copy_file_range()
#define uk_syscall1_fn326(arg1) \
	uk_syscall_e1_copy_file_range(arg1)
#define uk_syscall2_fn326(arg1, arg2) \
	uk_syscall_e2_copy_file_range(arg1, arg2)
#define uk_syscall3_fn326(arg1, arg2, arg3) \
	uk_syscall_e3_copy_file_range(arg1, arg2, arg3)
#define uk_syscall4_fn326(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_copy_file_range(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn326(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_copy_file_range(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn326(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_copy_file_range(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn326(...) \
	uk_syscall_r_copy_file_range(__VA_ARGS__)
#define uk_syscall_r0_fn326() \
	uk_syscall_r0_copy_file_range()
#define uk_syscall_r1_fn326(arg1) \
	uk_syscall_r1_copy_file_range(arg1)
#define uk_syscall_r2_fn326(arg1, arg2) \
	uk_syscall_r2_copy_file_range(arg1, arg2)
#define uk_syscall_r3_fn326(arg1, arg2, arg3) \
	uk_syscall_r3_copy_file_range(arg1, arg2, arg3)
#define uk_syscall_r4_fn326(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_copy_file_range(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn326(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_copy_file_range(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn326(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_copy_file_range(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_copy_file_range */
#define uk_syscall_fn326(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn326() _uk_syscall_e_enosys()
#define uk_syscall1_fn326(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn326(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn326(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn326(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn326(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn326(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn326(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn326() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn326(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn326(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn326(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn326(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn326(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn326(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_copy_file_range */

#ifdef HAVE_uk_syscall_preadv2
#define uk_syscall_fn327(...) \
	uk_syscall_e_preadv2(__VA_ARGS__)
#define uk_syscall0_fn327() \
	uk_syscall_e0_preadv2()
#define uk_syscall1_fn327(arg1) \
	uk_syscall_e1_preadv2(arg1)
#define uk_syscall2_fn327(arg1, arg2) \
	uk_syscall_e2_preadv2(arg1, arg2)
#define uk_syscall3_fn327(arg1, arg2, arg3) \
	uk_syscall_e3_preadv2(arg1, arg2, arg3)
#define uk_syscall4_fn327(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_preadv2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn327(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_preadv2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn327(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_preadv2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn327(...) \
	uk_syscall_r_preadv2(__VA_ARGS__)
#define uk_syscall_r0_fn327() \
	uk_syscall_r0_preadv2()
#define uk_syscall_r1_fn327(arg1) \
	uk_syscall_r1_preadv2(arg1)
#define uk_syscall_r2_fn327(arg1, arg2) \
	uk_syscall_r2_preadv2(arg1, arg2)
#define uk_syscall_r3_fn327(arg1, arg2, arg3) \
	uk_syscall_r3_preadv2(arg1, arg2, arg3)
#define uk_syscall_r4_fn327(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_preadv2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn327(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_preadv2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn327(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_preadv2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_preadv2 */
#define uk_syscall_fn327(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn327() _uk_syscall_e_enosys()
#define uk_syscall1_fn327(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn327(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn327(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn327(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn327(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn327(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn327(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn327() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn327(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn327(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn327(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn327(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn327(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn327(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_preadv2 */

#ifdef HAVE_uk_syscall_pwritev2
#define uk_syscall_fn328(...) \
	uk_syscall_e_pwritev2(__VA_ARGS__)
#define uk_syscall0_fn328() \
	uk_syscall_e0_pwritev2()
#define uk_syscall1_fn328(arg1) \
	uk_syscall_e1_pwritev2(arg1)
#define uk_syscall2_fn328(arg1, arg2) \
	uk_syscall_e2_pwritev2(arg1, arg2)
#define uk_syscall3_fn328(arg1, arg2, arg3) \
	uk_syscall_e3_pwritev2(arg1, arg2, arg3)
#define uk_syscall4_fn328(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pwritev2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn328(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pwritev2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn328(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pwritev2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn328(...) \
	uk_syscall_r_pwritev2(__VA_ARGS__)
#define uk_syscall_r0_fn328() \
	uk_syscall_r0_pwritev2()
#define uk_syscall_r1_fn328(arg1) \
	uk_syscall_r1_pwritev2(arg1)
#define uk_syscall_r2_fn328(arg1, arg2) \
	uk_syscall_r2_pwritev2(arg1, arg2)
#define uk_syscall_r3_fn328(arg1, arg2, arg3) \
	uk_syscall_r3_pwritev2(arg1, arg2, arg3)
#define uk_syscall_r4_fn328(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pwritev2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn328(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pwritev2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn328(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pwritev2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pwritev2 */
#define uk_syscall_fn328(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn328() _uk_syscall_e_enosys()
#define uk_syscall1_fn328(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn328(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn328(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn328(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn328(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn328(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn328(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn328() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn328(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn328(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn328(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn328(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn328(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn328(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pwritev2 */

#ifdef HAVE_uk_syscall_pkey_mprotect
#define uk_syscall_fn329(...) \
	uk_syscall_e_pkey_mprotect(__VA_ARGS__)
#define uk_syscall0_fn329() \
	uk_syscall_e0_pkey_mprotect()
#define uk_syscall1_fn329(arg1) \
	uk_syscall_e1_pkey_mprotect(arg1)
#define uk_syscall2_fn329(arg1, arg2) \
	uk_syscall_e2_pkey_mprotect(arg1, arg2)
#define uk_syscall3_fn329(arg1, arg2, arg3) \
	uk_syscall_e3_pkey_mprotect(arg1, arg2, arg3)
#define uk_syscall4_fn329(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pkey_mprotect(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn329(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pkey_mprotect(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn329(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pkey_mprotect(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn329(...) \
	uk_syscall_r_pkey_mprotect(__VA_ARGS__)
#define uk_syscall_r0_fn329() \
	uk_syscall_r0_pkey_mprotect()
#define uk_syscall_r1_fn329(arg1) \
	uk_syscall_r1_pkey_mprotect(arg1)
#define uk_syscall_r2_fn329(arg1, arg2) \
	uk_syscall_r2_pkey_mprotect(arg1, arg2)
#define uk_syscall_r3_fn329(arg1, arg2, arg3) \
	uk_syscall_r3_pkey_mprotect(arg1, arg2, arg3)
#define uk_syscall_r4_fn329(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pkey_mprotect(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn329(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pkey_mprotect(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn329(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pkey_mprotect(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pkey_mprotect */
#define uk_syscall_fn329(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn329() _uk_syscall_e_enosys()
#define uk_syscall1_fn329(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn329(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn329(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn329(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn329(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn329(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn329(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn329() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn329(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn329(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn329(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn329(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn329(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn329(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pkey_mprotect */

#ifdef HAVE_uk_syscall_pkey_alloc
#define uk_syscall_fn330(...) \
	uk_syscall_e_pkey_alloc(__VA_ARGS__)
#define uk_syscall0_fn330() \
	uk_syscall_e0_pkey_alloc()
#define uk_syscall1_fn330(arg1) \
	uk_syscall_e1_pkey_alloc(arg1)
#define uk_syscall2_fn330(arg1, arg2) \
	uk_syscall_e2_pkey_alloc(arg1, arg2)
#define uk_syscall3_fn330(arg1, arg2, arg3) \
	uk_syscall_e3_pkey_alloc(arg1, arg2, arg3)
#define uk_syscall4_fn330(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pkey_alloc(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn330(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pkey_alloc(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn330(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pkey_alloc(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn330(...) \
	uk_syscall_r_pkey_alloc(__VA_ARGS__)
#define uk_syscall_r0_fn330() \
	uk_syscall_r0_pkey_alloc()
#define uk_syscall_r1_fn330(arg1) \
	uk_syscall_r1_pkey_alloc(arg1)
#define uk_syscall_r2_fn330(arg1, arg2) \
	uk_syscall_r2_pkey_alloc(arg1, arg2)
#define uk_syscall_r3_fn330(arg1, arg2, arg3) \
	uk_syscall_r3_pkey_alloc(arg1, arg2, arg3)
#define uk_syscall_r4_fn330(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pkey_alloc(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn330(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pkey_alloc(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn330(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pkey_alloc(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pkey_alloc */
#define uk_syscall_fn330(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn330() _uk_syscall_e_enosys()
#define uk_syscall1_fn330(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn330(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn330(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn330(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn330(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn330(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn330(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn330() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn330(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn330(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn330(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn330(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn330(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn330(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pkey_alloc */

#ifdef HAVE_uk_syscall_pkey_free
#define uk_syscall_fn331(...) \
	uk_syscall_e_pkey_free(__VA_ARGS__)
#define uk_syscall0_fn331() \
	uk_syscall_e0_pkey_free()
#define uk_syscall1_fn331(arg1) \
	uk_syscall_e1_pkey_free(arg1)
#define uk_syscall2_fn331(arg1, arg2) \
	uk_syscall_e2_pkey_free(arg1, arg2)
#define uk_syscall3_fn331(arg1, arg2, arg3) \
	uk_syscall_e3_pkey_free(arg1, arg2, arg3)
#define uk_syscall4_fn331(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pkey_free(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn331(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pkey_free(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn331(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pkey_free(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn331(...) \
	uk_syscall_r_pkey_free(__VA_ARGS__)
#define uk_syscall_r0_fn331() \
	uk_syscall_r0_pkey_free()
#define uk_syscall_r1_fn331(arg1) \
	uk_syscall_r1_pkey_free(arg1)
#define uk_syscall_r2_fn331(arg1, arg2) \
	uk_syscall_r2_pkey_free(arg1, arg2)
#define uk_syscall_r3_fn331(arg1, arg2, arg3) \
	uk_syscall_r3_pkey_free(arg1, arg2, arg3)
#define uk_syscall_r4_fn331(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pkey_free(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn331(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pkey_free(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn331(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pkey_free(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pkey_free */
#define uk_syscall_fn331(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn331() _uk_syscall_e_enosys()
#define uk_syscall1_fn331(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn331(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn331(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn331(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn331(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn331(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn331(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn331() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn331(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn331(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn331(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn331(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn331(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn331(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pkey_free */

#ifdef HAVE_uk_syscall_statx
#define uk_syscall_fn332(...) \
	uk_syscall_e_statx(__VA_ARGS__)
#define uk_syscall0_fn332() \
	uk_syscall_e0_statx()
#define uk_syscall1_fn332(arg1) \
	uk_syscall_e1_statx(arg1)
#define uk_syscall2_fn332(arg1, arg2) \
	uk_syscall_e2_statx(arg1, arg2)
#define uk_syscall3_fn332(arg1, arg2, arg3) \
	uk_syscall_e3_statx(arg1, arg2, arg3)
#define uk_syscall4_fn332(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_statx(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn332(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_statx(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn332(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_statx(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn332(...) \
	uk_syscall_r_statx(__VA_ARGS__)
#define uk_syscall_r0_fn332() \
	uk_syscall_r0_statx()
#define uk_syscall_r1_fn332(arg1) \
	uk_syscall_r1_statx(arg1)
#define uk_syscall_r2_fn332(arg1, arg2) \
	uk_syscall_r2_statx(arg1, arg2)
#define uk_syscall_r3_fn332(arg1, arg2, arg3) \
	uk_syscall_r3_statx(arg1, arg2, arg3)
#define uk_syscall_r4_fn332(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_statx(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn332(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_statx(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn332(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_statx(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_statx */
#define uk_syscall_fn332(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn332() _uk_syscall_e_enosys()
#define uk_syscall1_fn332(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn332(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn332(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn332(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn332(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn332(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn332(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn332() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn332(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn332(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn332(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn332(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn332(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn332(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_statx */

#ifdef HAVE_uk_syscall_io_pgetevents
#define uk_syscall_fn333(...) \
	uk_syscall_e_io_pgetevents(__VA_ARGS__)
#define uk_syscall0_fn333() \
	uk_syscall_e0_io_pgetevents()
#define uk_syscall1_fn333(arg1) \
	uk_syscall_e1_io_pgetevents(arg1)
#define uk_syscall2_fn333(arg1, arg2) \
	uk_syscall_e2_io_pgetevents(arg1, arg2)
#define uk_syscall3_fn333(arg1, arg2, arg3) \
	uk_syscall_e3_io_pgetevents(arg1, arg2, arg3)
#define uk_syscall4_fn333(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_pgetevents(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn333(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_pgetevents(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn333(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_pgetevents(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn333(...) \
	uk_syscall_r_io_pgetevents(__VA_ARGS__)
#define uk_syscall_r0_fn333() \
	uk_syscall_r0_io_pgetevents()
#define uk_syscall_r1_fn333(arg1) \
	uk_syscall_r1_io_pgetevents(arg1)
#define uk_syscall_r2_fn333(arg1, arg2) \
	uk_syscall_r2_io_pgetevents(arg1, arg2)
#define uk_syscall_r3_fn333(arg1, arg2, arg3) \
	uk_syscall_r3_io_pgetevents(arg1, arg2, arg3)
#define uk_syscall_r4_fn333(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_pgetevents(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn333(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_pgetevents(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn333(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_pgetevents(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_pgetevents */
#define uk_syscall_fn333(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn333() _uk_syscall_e_enosys()
#define uk_syscall1_fn333(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn333(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn333(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn333(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn333(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn333(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn333(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn333() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn333(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn333(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn333(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn333(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn333(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn333(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_pgetevents */

#ifdef HAVE_uk_syscall_rseq
#define uk_syscall_fn334(...) \
	uk_syscall_e_rseq(__VA_ARGS__)
#define uk_syscall0_fn334() \
	uk_syscall_e0_rseq()
#define uk_syscall1_fn334(arg1) \
	uk_syscall_e1_rseq(arg1)
#define uk_syscall2_fn334(arg1, arg2) \
	uk_syscall_e2_rseq(arg1, arg2)
#define uk_syscall3_fn334(arg1, arg2, arg3) \
	uk_syscall_e3_rseq(arg1, arg2, arg3)
#define uk_syscall4_fn334(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_rseq(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn334(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_rseq(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn334(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_rseq(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn334(...) \
	uk_syscall_r_rseq(__VA_ARGS__)
#define uk_syscall_r0_fn334() \
	uk_syscall_r0_rseq()
#define uk_syscall_r1_fn334(arg1) \
	uk_syscall_r1_rseq(arg1)
#define uk_syscall_r2_fn334(arg1, arg2) \
	uk_syscall_r2_rseq(arg1, arg2)
#define uk_syscall_r3_fn334(arg1, arg2, arg3) \
	uk_syscall_r3_rseq(arg1, arg2, arg3)
#define uk_syscall_r4_fn334(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_rseq(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn334(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_rseq(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn334(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_rseq(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_rseq */
#define uk_syscall_fn334(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn334() _uk_syscall_e_enosys()
#define uk_syscall1_fn334(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn334(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn334(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn334(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn334(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn334(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn334(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn334() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn334(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn334(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn334(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn334(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn334(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn334(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_rseq */

#ifdef HAVE_uk_syscall_pidfd_send_signal
#define uk_syscall_fn424(...) \
	uk_syscall_e_pidfd_send_signal(__VA_ARGS__)
#define uk_syscall0_fn424() \
	uk_syscall_e0_pidfd_send_signal()
#define uk_syscall1_fn424(arg1) \
	uk_syscall_e1_pidfd_send_signal(arg1)
#define uk_syscall2_fn424(arg1, arg2) \
	uk_syscall_e2_pidfd_send_signal(arg1, arg2)
#define uk_syscall3_fn424(arg1, arg2, arg3) \
	uk_syscall_e3_pidfd_send_signal(arg1, arg2, arg3)
#define uk_syscall4_fn424(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pidfd_send_signal(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn424(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pidfd_send_signal(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn424(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pidfd_send_signal(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn424(...) \
	uk_syscall_r_pidfd_send_signal(__VA_ARGS__)
#define uk_syscall_r0_fn424() \
	uk_syscall_r0_pidfd_send_signal()
#define uk_syscall_r1_fn424(arg1) \
	uk_syscall_r1_pidfd_send_signal(arg1)
#define uk_syscall_r2_fn424(arg1, arg2) \
	uk_syscall_r2_pidfd_send_signal(arg1, arg2)
#define uk_syscall_r3_fn424(arg1, arg2, arg3) \
	uk_syscall_r3_pidfd_send_signal(arg1, arg2, arg3)
#define uk_syscall_r4_fn424(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pidfd_send_signal(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn424(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pidfd_send_signal(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn424(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pidfd_send_signal(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pidfd_send_signal */
#define uk_syscall_fn424(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn424() _uk_syscall_e_enosys()
#define uk_syscall1_fn424(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn424(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn424(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn424(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn424(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn424(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn424(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn424() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn424(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn424(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn424(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn424(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn424(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn424(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pidfd_send_signal */

#ifdef HAVE_uk_syscall_io_uring_setup
#define uk_syscall_fn425(...) \
	uk_syscall_e_io_uring_setup(__VA_ARGS__)
#define uk_syscall0_fn425() \
	uk_syscall_e0_io_uring_setup()
#define uk_syscall1_fn425(arg1) \
	uk_syscall_e1_io_uring_setup(arg1)
#define uk_syscall2_fn425(arg1, arg2) \
	uk_syscall_e2_io_uring_setup(arg1, arg2)
#define uk_syscall3_fn425(arg1, arg2, arg3) \
	uk_syscall_e3_io_uring_setup(arg1, arg2, arg3)
#define uk_syscall4_fn425(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_uring_setup(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn425(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_uring_setup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn425(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_uring_setup(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn425(...) \
	uk_syscall_r_io_uring_setup(__VA_ARGS__)
#define uk_syscall_r0_fn425() \
	uk_syscall_r0_io_uring_setup()
#define uk_syscall_r1_fn425(arg1) \
	uk_syscall_r1_io_uring_setup(arg1)
#define uk_syscall_r2_fn425(arg1, arg2) \
	uk_syscall_r2_io_uring_setup(arg1, arg2)
#define uk_syscall_r3_fn425(arg1, arg2, arg3) \
	uk_syscall_r3_io_uring_setup(arg1, arg2, arg3)
#define uk_syscall_r4_fn425(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_uring_setup(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn425(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_uring_setup(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn425(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_uring_setup(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_uring_setup */
#define uk_syscall_fn425(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn425() _uk_syscall_e_enosys()
#define uk_syscall1_fn425(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn425(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn425(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn425(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn425(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn425(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn425(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn425() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn425(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn425(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn425(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn425(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn425(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn425(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_uring_setup */

#ifdef HAVE_uk_syscall_io_uring_enter
#define uk_syscall_fn426(...) \
	uk_syscall_e_io_uring_enter(__VA_ARGS__)
#define uk_syscall0_fn426() \
	uk_syscall_e0_io_uring_enter()
#define uk_syscall1_fn426(arg1) \
	uk_syscall_e1_io_uring_enter(arg1)
#define uk_syscall2_fn426(arg1, arg2) \
	uk_syscall_e2_io_uring_enter(arg1, arg2)
#define uk_syscall3_fn426(arg1, arg2, arg3) \
	uk_syscall_e3_io_uring_enter(arg1, arg2, arg3)
#define uk_syscall4_fn426(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_uring_enter(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn426(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_uring_enter(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn426(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_uring_enter(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn426(...) \
	uk_syscall_r_io_uring_enter(__VA_ARGS__)
#define uk_syscall_r0_fn426() \
	uk_syscall_r0_io_uring_enter()
#define uk_syscall_r1_fn426(arg1) \
	uk_syscall_r1_io_uring_enter(arg1)
#define uk_syscall_r2_fn426(arg1, arg2) \
	uk_syscall_r2_io_uring_enter(arg1, arg2)
#define uk_syscall_r3_fn426(arg1, arg2, arg3) \
	uk_syscall_r3_io_uring_enter(arg1, arg2, arg3)
#define uk_syscall_r4_fn426(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_uring_enter(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn426(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_uring_enter(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn426(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_uring_enter(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_uring_enter */
#define uk_syscall_fn426(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn426() _uk_syscall_e_enosys()
#define uk_syscall1_fn426(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn426(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn426(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn426(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn426(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn426(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn426(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn426() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn426(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn426(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn426(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn426(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn426(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn426(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_uring_enter */

#ifdef HAVE_uk_syscall_io_uring_register
#define uk_syscall_fn427(...) \
	uk_syscall_e_io_uring_register(__VA_ARGS__)
#define uk_syscall0_fn427() \
	uk_syscall_e0_io_uring_register()
#define uk_syscall1_fn427(arg1) \
	uk_syscall_e1_io_uring_register(arg1)
#define uk_syscall2_fn427(arg1, arg2) \
	uk_syscall_e2_io_uring_register(arg1, arg2)
#define uk_syscall3_fn427(arg1, arg2, arg3) \
	uk_syscall_e3_io_uring_register(arg1, arg2, arg3)
#define uk_syscall4_fn427(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_io_uring_register(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn427(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_io_uring_register(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn427(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_io_uring_register(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn427(...) \
	uk_syscall_r_io_uring_register(__VA_ARGS__)
#define uk_syscall_r0_fn427() \
	uk_syscall_r0_io_uring_register()
#define uk_syscall_r1_fn427(arg1) \
	uk_syscall_r1_io_uring_register(arg1)
#define uk_syscall_r2_fn427(arg1, arg2) \
	uk_syscall_r2_io_uring_register(arg1, arg2)
#define uk_syscall_r3_fn427(arg1, arg2, arg3) \
	uk_syscall_r3_io_uring_register(arg1, arg2, arg3)
#define uk_syscall_r4_fn427(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_io_uring_register(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn427(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_io_uring_register(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn427(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_io_uring_register(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_io_uring_register */
#define uk_syscall_fn427(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn427() _uk_syscall_e_enosys()
#define uk_syscall1_fn427(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn427(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn427(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn427(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn427(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn427(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn427(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn427() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn427(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn427(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn427(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn427(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn427(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn427(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_io_uring_register */

#ifdef HAVE_uk_syscall_open_tree
#define uk_syscall_fn428(...) \
	uk_syscall_e_open_tree(__VA_ARGS__)
#define uk_syscall0_fn428() \
	uk_syscall_e0_open_tree()
#define uk_syscall1_fn428(arg1) \
	uk_syscall_e1_open_tree(arg1)
#define uk_syscall2_fn428(arg1, arg2) \
	uk_syscall_e2_open_tree(arg1, arg2)
#define uk_syscall3_fn428(arg1, arg2, arg3) \
	uk_syscall_e3_open_tree(arg1, arg2, arg3)
#define uk_syscall4_fn428(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_open_tree(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn428(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_open_tree(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn428(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_open_tree(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn428(...) \
	uk_syscall_r_open_tree(__VA_ARGS__)
#define uk_syscall_r0_fn428() \
	uk_syscall_r0_open_tree()
#define uk_syscall_r1_fn428(arg1) \
	uk_syscall_r1_open_tree(arg1)
#define uk_syscall_r2_fn428(arg1, arg2) \
	uk_syscall_r2_open_tree(arg1, arg2)
#define uk_syscall_r3_fn428(arg1, arg2, arg3) \
	uk_syscall_r3_open_tree(arg1, arg2, arg3)
#define uk_syscall_r4_fn428(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_open_tree(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn428(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_open_tree(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn428(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_open_tree(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_open_tree */
#define uk_syscall_fn428(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn428() _uk_syscall_e_enosys()
#define uk_syscall1_fn428(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn428(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn428(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn428(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn428(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn428(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn428(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn428() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn428(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn428(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn428(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn428(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn428(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn428(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_open_tree */

#ifdef HAVE_uk_syscall_move_mount
#define uk_syscall_fn429(...) \
	uk_syscall_e_move_mount(__VA_ARGS__)
#define uk_syscall0_fn429() \
	uk_syscall_e0_move_mount()
#define uk_syscall1_fn429(arg1) \
	uk_syscall_e1_move_mount(arg1)
#define uk_syscall2_fn429(arg1, arg2) \
	uk_syscall_e2_move_mount(arg1, arg2)
#define uk_syscall3_fn429(arg1, arg2, arg3) \
	uk_syscall_e3_move_mount(arg1, arg2, arg3)
#define uk_syscall4_fn429(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_move_mount(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn429(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_move_mount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn429(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_move_mount(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn429(...) \
	uk_syscall_r_move_mount(__VA_ARGS__)
#define uk_syscall_r0_fn429() \
	uk_syscall_r0_move_mount()
#define uk_syscall_r1_fn429(arg1) \
	uk_syscall_r1_move_mount(arg1)
#define uk_syscall_r2_fn429(arg1, arg2) \
	uk_syscall_r2_move_mount(arg1, arg2)
#define uk_syscall_r3_fn429(arg1, arg2, arg3) \
	uk_syscall_r3_move_mount(arg1, arg2, arg3)
#define uk_syscall_r4_fn429(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_move_mount(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn429(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_move_mount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn429(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_move_mount(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_move_mount */
#define uk_syscall_fn429(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn429() _uk_syscall_e_enosys()
#define uk_syscall1_fn429(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn429(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn429(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn429(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn429(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn429(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn429(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn429() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn429(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn429(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn429(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn429(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn429(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn429(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_move_mount */

#ifdef HAVE_uk_syscall_fsopen
#define uk_syscall_fn430(...) \
	uk_syscall_e_fsopen(__VA_ARGS__)
#define uk_syscall0_fn430() \
	uk_syscall_e0_fsopen()
#define uk_syscall1_fn430(arg1) \
	uk_syscall_e1_fsopen(arg1)
#define uk_syscall2_fn430(arg1, arg2) \
	uk_syscall_e2_fsopen(arg1, arg2)
#define uk_syscall3_fn430(arg1, arg2, arg3) \
	uk_syscall_e3_fsopen(arg1, arg2, arg3)
#define uk_syscall4_fn430(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fsopen(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn430(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fsopen(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn430(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fsopen(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn430(...) \
	uk_syscall_r_fsopen(__VA_ARGS__)
#define uk_syscall_r0_fn430() \
	uk_syscall_r0_fsopen()
#define uk_syscall_r1_fn430(arg1) \
	uk_syscall_r1_fsopen(arg1)
#define uk_syscall_r2_fn430(arg1, arg2) \
	uk_syscall_r2_fsopen(arg1, arg2)
#define uk_syscall_r3_fn430(arg1, arg2, arg3) \
	uk_syscall_r3_fsopen(arg1, arg2, arg3)
#define uk_syscall_r4_fn430(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fsopen(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn430(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fsopen(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn430(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fsopen(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fsopen */
#define uk_syscall_fn430(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn430() _uk_syscall_e_enosys()
#define uk_syscall1_fn430(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn430(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn430(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn430(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn430(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn430(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn430(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn430() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn430(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn430(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn430(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn430(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn430(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn430(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fsopen */

#ifdef HAVE_uk_syscall_fsconfig
#define uk_syscall_fn431(...) \
	uk_syscall_e_fsconfig(__VA_ARGS__)
#define uk_syscall0_fn431() \
	uk_syscall_e0_fsconfig()
#define uk_syscall1_fn431(arg1) \
	uk_syscall_e1_fsconfig(arg1)
#define uk_syscall2_fn431(arg1, arg2) \
	uk_syscall_e2_fsconfig(arg1, arg2)
#define uk_syscall3_fn431(arg1, arg2, arg3) \
	uk_syscall_e3_fsconfig(arg1, arg2, arg3)
#define uk_syscall4_fn431(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fsconfig(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn431(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fsconfig(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn431(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fsconfig(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn431(...) \
	uk_syscall_r_fsconfig(__VA_ARGS__)
#define uk_syscall_r0_fn431() \
	uk_syscall_r0_fsconfig()
#define uk_syscall_r1_fn431(arg1) \
	uk_syscall_r1_fsconfig(arg1)
#define uk_syscall_r2_fn431(arg1, arg2) \
	uk_syscall_r2_fsconfig(arg1, arg2)
#define uk_syscall_r3_fn431(arg1, arg2, arg3) \
	uk_syscall_r3_fsconfig(arg1, arg2, arg3)
#define uk_syscall_r4_fn431(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fsconfig(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn431(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fsconfig(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn431(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fsconfig(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fsconfig */
#define uk_syscall_fn431(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn431() _uk_syscall_e_enosys()
#define uk_syscall1_fn431(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn431(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn431(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn431(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn431(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn431(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn431(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn431() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn431(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn431(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn431(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn431(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn431(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn431(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fsconfig */

#ifdef HAVE_uk_syscall_fsmount
#define uk_syscall_fn432(...) \
	uk_syscall_e_fsmount(__VA_ARGS__)
#define uk_syscall0_fn432() \
	uk_syscall_e0_fsmount()
#define uk_syscall1_fn432(arg1) \
	uk_syscall_e1_fsmount(arg1)
#define uk_syscall2_fn432(arg1, arg2) \
	uk_syscall_e2_fsmount(arg1, arg2)
#define uk_syscall3_fn432(arg1, arg2, arg3) \
	uk_syscall_e3_fsmount(arg1, arg2, arg3)
#define uk_syscall4_fn432(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fsmount(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn432(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fsmount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn432(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fsmount(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn432(...) \
	uk_syscall_r_fsmount(__VA_ARGS__)
#define uk_syscall_r0_fn432() \
	uk_syscall_r0_fsmount()
#define uk_syscall_r1_fn432(arg1) \
	uk_syscall_r1_fsmount(arg1)
#define uk_syscall_r2_fn432(arg1, arg2) \
	uk_syscall_r2_fsmount(arg1, arg2)
#define uk_syscall_r3_fn432(arg1, arg2, arg3) \
	uk_syscall_r3_fsmount(arg1, arg2, arg3)
#define uk_syscall_r4_fn432(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fsmount(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn432(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fsmount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn432(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fsmount(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fsmount */
#define uk_syscall_fn432(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn432() _uk_syscall_e_enosys()
#define uk_syscall1_fn432(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn432(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn432(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn432(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn432(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn432(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn432(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn432() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn432(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn432(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn432(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn432(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn432(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn432(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fsmount */

#ifdef HAVE_uk_syscall_fspick
#define uk_syscall_fn433(...) \
	uk_syscall_e_fspick(__VA_ARGS__)
#define uk_syscall0_fn433() \
	uk_syscall_e0_fspick()
#define uk_syscall1_fn433(arg1) \
	uk_syscall_e1_fspick(arg1)
#define uk_syscall2_fn433(arg1, arg2) \
	uk_syscall_e2_fspick(arg1, arg2)
#define uk_syscall3_fn433(arg1, arg2, arg3) \
	uk_syscall_e3_fspick(arg1, arg2, arg3)
#define uk_syscall4_fn433(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fspick(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn433(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fspick(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn433(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fspick(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn433(...) \
	uk_syscall_r_fspick(__VA_ARGS__)
#define uk_syscall_r0_fn433() \
	uk_syscall_r0_fspick()
#define uk_syscall_r1_fn433(arg1) \
	uk_syscall_r1_fspick(arg1)
#define uk_syscall_r2_fn433(arg1, arg2) \
	uk_syscall_r2_fspick(arg1, arg2)
#define uk_syscall_r3_fn433(arg1, arg2, arg3) \
	uk_syscall_r3_fspick(arg1, arg2, arg3)
#define uk_syscall_r4_fn433(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fspick(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn433(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fspick(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn433(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fspick(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fspick */
#define uk_syscall_fn433(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn433() _uk_syscall_e_enosys()
#define uk_syscall1_fn433(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn433(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn433(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn433(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn433(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn433(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn433(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn433() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn433(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn433(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn433(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn433(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn433(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn433(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fspick */

#ifdef HAVE_uk_syscall_pidfd_open
#define uk_syscall_fn434(...) \
	uk_syscall_e_pidfd_open(__VA_ARGS__)
#define uk_syscall0_fn434() \
	uk_syscall_e0_pidfd_open()
#define uk_syscall1_fn434(arg1) \
	uk_syscall_e1_pidfd_open(arg1)
#define uk_syscall2_fn434(arg1, arg2) \
	uk_syscall_e2_pidfd_open(arg1, arg2)
#define uk_syscall3_fn434(arg1, arg2, arg3) \
	uk_syscall_e3_pidfd_open(arg1, arg2, arg3)
#define uk_syscall4_fn434(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pidfd_open(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn434(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pidfd_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn434(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pidfd_open(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn434(...) \
	uk_syscall_r_pidfd_open(__VA_ARGS__)
#define uk_syscall_r0_fn434() \
	uk_syscall_r0_pidfd_open()
#define uk_syscall_r1_fn434(arg1) \
	uk_syscall_r1_pidfd_open(arg1)
#define uk_syscall_r2_fn434(arg1, arg2) \
	uk_syscall_r2_pidfd_open(arg1, arg2)
#define uk_syscall_r3_fn434(arg1, arg2, arg3) \
	uk_syscall_r3_pidfd_open(arg1, arg2, arg3)
#define uk_syscall_r4_fn434(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pidfd_open(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn434(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pidfd_open(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn434(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pidfd_open(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pidfd_open */
#define uk_syscall_fn434(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn434() _uk_syscall_e_enosys()
#define uk_syscall1_fn434(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn434(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn434(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn434(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn434(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn434(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn434(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn434() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn434(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn434(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn434(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn434(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn434(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn434(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pidfd_open */

#ifdef HAVE_uk_syscall_clone3
#define uk_syscall_fn435(...) \
	uk_syscall_e_clone3(__VA_ARGS__)
#define uk_syscall0_fn435() \
	uk_syscall_e0_clone3()
#define uk_syscall1_fn435(arg1) \
	uk_syscall_e1_clone3(arg1)
#define uk_syscall2_fn435(arg1, arg2) \
	uk_syscall_e2_clone3(arg1, arg2)
#define uk_syscall3_fn435(arg1, arg2, arg3) \
	uk_syscall_e3_clone3(arg1, arg2, arg3)
#define uk_syscall4_fn435(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_clone3(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn435(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_clone3(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn435(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_clone3(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn435(...) \
	uk_syscall_r_clone3(__VA_ARGS__)
#define uk_syscall_r0_fn435() \
	uk_syscall_r0_clone3()
#define uk_syscall_r1_fn435(arg1) \
	uk_syscall_r1_clone3(arg1)
#define uk_syscall_r2_fn435(arg1, arg2) \
	uk_syscall_r2_clone3(arg1, arg2)
#define uk_syscall_r3_fn435(arg1, arg2, arg3) \
	uk_syscall_r3_clone3(arg1, arg2, arg3)
#define uk_syscall_r4_fn435(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_clone3(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn435(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_clone3(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn435(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_clone3(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_clone3 */
#define uk_syscall_fn435(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn435() _uk_syscall_e_enosys()
#define uk_syscall1_fn435(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn435(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn435(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn435(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn435(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn435(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn435(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn435() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn435(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn435(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn435(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn435(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn435(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn435(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_clone3 */

#ifdef HAVE_uk_syscall_close_range
#define uk_syscall_fn436(...) \
	uk_syscall_e_close_range(__VA_ARGS__)
#define uk_syscall0_fn436() \
	uk_syscall_e0_close_range()
#define uk_syscall1_fn436(arg1) \
	uk_syscall_e1_close_range(arg1)
#define uk_syscall2_fn436(arg1, arg2) \
	uk_syscall_e2_close_range(arg1, arg2)
#define uk_syscall3_fn436(arg1, arg2, arg3) \
	uk_syscall_e3_close_range(arg1, arg2, arg3)
#define uk_syscall4_fn436(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_close_range(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn436(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_close_range(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn436(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_close_range(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn436(...) \
	uk_syscall_r_close_range(__VA_ARGS__)
#define uk_syscall_r0_fn436() \
	uk_syscall_r0_close_range()
#define uk_syscall_r1_fn436(arg1) \
	uk_syscall_r1_close_range(arg1)
#define uk_syscall_r2_fn436(arg1, arg2) \
	uk_syscall_r2_close_range(arg1, arg2)
#define uk_syscall_r3_fn436(arg1, arg2, arg3) \
	uk_syscall_r3_close_range(arg1, arg2, arg3)
#define uk_syscall_r4_fn436(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_close_range(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn436(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_close_range(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn436(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_close_range(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_close_range */
#define uk_syscall_fn436(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn436() _uk_syscall_e_enosys()
#define uk_syscall1_fn436(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn436(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn436(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn436(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn436(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn436(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn436(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn436() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn436(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn436(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn436(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn436(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn436(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn436(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_close_range */

#ifdef HAVE_uk_syscall_openat2
#define uk_syscall_fn437(...) \
	uk_syscall_e_openat2(__VA_ARGS__)
#define uk_syscall0_fn437() \
	uk_syscall_e0_openat2()
#define uk_syscall1_fn437(arg1) \
	uk_syscall_e1_openat2(arg1)
#define uk_syscall2_fn437(arg1, arg2) \
	uk_syscall_e2_openat2(arg1, arg2)
#define uk_syscall3_fn437(arg1, arg2, arg3) \
	uk_syscall_e3_openat2(arg1, arg2, arg3)
#define uk_syscall4_fn437(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_openat2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn437(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_openat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn437(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_openat2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn437(...) \
	uk_syscall_r_openat2(__VA_ARGS__)
#define uk_syscall_r0_fn437() \
	uk_syscall_r0_openat2()
#define uk_syscall_r1_fn437(arg1) \
	uk_syscall_r1_openat2(arg1)
#define uk_syscall_r2_fn437(arg1, arg2) \
	uk_syscall_r2_openat2(arg1, arg2)
#define uk_syscall_r3_fn437(arg1, arg2, arg3) \
	uk_syscall_r3_openat2(arg1, arg2, arg3)
#define uk_syscall_r4_fn437(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_openat2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn437(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_openat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn437(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_openat2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_openat2 */
#define uk_syscall_fn437(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn437() _uk_syscall_e_enosys()
#define uk_syscall1_fn437(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn437(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn437(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn437(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn437(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn437(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn437(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn437() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn437(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn437(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn437(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn437(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn437(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn437(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_openat2 */

#ifdef HAVE_uk_syscall_pidfd_getfd
#define uk_syscall_fn438(...) \
	uk_syscall_e_pidfd_getfd(__VA_ARGS__)
#define uk_syscall0_fn438() \
	uk_syscall_e0_pidfd_getfd()
#define uk_syscall1_fn438(arg1) \
	uk_syscall_e1_pidfd_getfd(arg1)
#define uk_syscall2_fn438(arg1, arg2) \
	uk_syscall_e2_pidfd_getfd(arg1, arg2)
#define uk_syscall3_fn438(arg1, arg2, arg3) \
	uk_syscall_e3_pidfd_getfd(arg1, arg2, arg3)
#define uk_syscall4_fn438(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_pidfd_getfd(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn438(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_pidfd_getfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn438(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_pidfd_getfd(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn438(...) \
	uk_syscall_r_pidfd_getfd(__VA_ARGS__)
#define uk_syscall_r0_fn438() \
	uk_syscall_r0_pidfd_getfd()
#define uk_syscall_r1_fn438(arg1) \
	uk_syscall_r1_pidfd_getfd(arg1)
#define uk_syscall_r2_fn438(arg1, arg2) \
	uk_syscall_r2_pidfd_getfd(arg1, arg2)
#define uk_syscall_r3_fn438(arg1, arg2, arg3) \
	uk_syscall_r3_pidfd_getfd(arg1, arg2, arg3)
#define uk_syscall_r4_fn438(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_pidfd_getfd(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn438(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_pidfd_getfd(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn438(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_pidfd_getfd(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_pidfd_getfd */
#define uk_syscall_fn438(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn438() _uk_syscall_e_enosys()
#define uk_syscall1_fn438(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn438(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn438(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn438(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn438(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn438(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn438(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn438() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn438(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn438(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn438(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn438(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn438(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn438(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_pidfd_getfd */

#ifdef HAVE_uk_syscall_faccessat2
#define uk_syscall_fn439(...) \
	uk_syscall_e_faccessat2(__VA_ARGS__)
#define uk_syscall0_fn439() \
	uk_syscall_e0_faccessat2()
#define uk_syscall1_fn439(arg1) \
	uk_syscall_e1_faccessat2(arg1)
#define uk_syscall2_fn439(arg1, arg2) \
	uk_syscall_e2_faccessat2(arg1, arg2)
#define uk_syscall3_fn439(arg1, arg2, arg3) \
	uk_syscall_e3_faccessat2(arg1, arg2, arg3)
#define uk_syscall4_fn439(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_faccessat2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn439(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_faccessat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn439(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_faccessat2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn439(...) \
	uk_syscall_r_faccessat2(__VA_ARGS__)
#define uk_syscall_r0_fn439() \
	uk_syscall_r0_faccessat2()
#define uk_syscall_r1_fn439(arg1) \
	uk_syscall_r1_faccessat2(arg1)
#define uk_syscall_r2_fn439(arg1, arg2) \
	uk_syscall_r2_faccessat2(arg1, arg2)
#define uk_syscall_r3_fn439(arg1, arg2, arg3) \
	uk_syscall_r3_faccessat2(arg1, arg2, arg3)
#define uk_syscall_r4_fn439(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_faccessat2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn439(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_faccessat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn439(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_faccessat2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_faccessat2 */
#define uk_syscall_fn439(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn439() _uk_syscall_e_enosys()
#define uk_syscall1_fn439(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn439(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn439(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn439(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn439(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn439(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn439(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn439() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn439(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn439(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn439(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn439(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn439(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn439(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_faccessat2 */

#ifdef HAVE_uk_syscall_process_madvise
#define uk_syscall_fn440(...) \
	uk_syscall_e_process_madvise(__VA_ARGS__)
#define uk_syscall0_fn440() \
	uk_syscall_e0_process_madvise()
#define uk_syscall1_fn440(arg1) \
	uk_syscall_e1_process_madvise(arg1)
#define uk_syscall2_fn440(arg1, arg2) \
	uk_syscall_e2_process_madvise(arg1, arg2)
#define uk_syscall3_fn440(arg1, arg2, arg3) \
	uk_syscall_e3_process_madvise(arg1, arg2, arg3)
#define uk_syscall4_fn440(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_process_madvise(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn440(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_process_madvise(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn440(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_process_madvise(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn440(...) \
	uk_syscall_r_process_madvise(__VA_ARGS__)
#define uk_syscall_r0_fn440() \
	uk_syscall_r0_process_madvise()
#define uk_syscall_r1_fn440(arg1) \
	uk_syscall_r1_process_madvise(arg1)
#define uk_syscall_r2_fn440(arg1, arg2) \
	uk_syscall_r2_process_madvise(arg1, arg2)
#define uk_syscall_r3_fn440(arg1, arg2, arg3) \
	uk_syscall_r3_process_madvise(arg1, arg2, arg3)
#define uk_syscall_r4_fn440(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_process_madvise(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn440(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_process_madvise(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn440(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_process_madvise(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_process_madvise */
#define uk_syscall_fn440(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn440() _uk_syscall_e_enosys()
#define uk_syscall1_fn440(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn440(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn440(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn440(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn440(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn440(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn440(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn440() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn440(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn440(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn440(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn440(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn440(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn440(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_process_madvise */

#ifdef HAVE_uk_syscall_epoll_pwait2
#define uk_syscall_fn441(...) \
	uk_syscall_e_epoll_pwait2(__VA_ARGS__)
#define uk_syscall0_fn441() \
	uk_syscall_e0_epoll_pwait2()
#define uk_syscall1_fn441(arg1) \
	uk_syscall_e1_epoll_pwait2(arg1)
#define uk_syscall2_fn441(arg1, arg2) \
	uk_syscall_e2_epoll_pwait2(arg1, arg2)
#define uk_syscall3_fn441(arg1, arg2, arg3) \
	uk_syscall_e3_epoll_pwait2(arg1, arg2, arg3)
#define uk_syscall4_fn441(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_epoll_pwait2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn441(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_epoll_pwait2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn441(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_epoll_pwait2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn441(...) \
	uk_syscall_r_epoll_pwait2(__VA_ARGS__)
#define uk_syscall_r0_fn441() \
	uk_syscall_r0_epoll_pwait2()
#define uk_syscall_r1_fn441(arg1) \
	uk_syscall_r1_epoll_pwait2(arg1)
#define uk_syscall_r2_fn441(arg1, arg2) \
	uk_syscall_r2_epoll_pwait2(arg1, arg2)
#define uk_syscall_r3_fn441(arg1, arg2, arg3) \
	uk_syscall_r3_epoll_pwait2(arg1, arg2, arg3)
#define uk_syscall_r4_fn441(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_epoll_pwait2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn441(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_epoll_pwait2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn441(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_epoll_pwait2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_epoll_pwait2 */
#define uk_syscall_fn441(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn441() _uk_syscall_e_enosys()
#define uk_syscall1_fn441(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn441(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn441(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn441(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn441(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn441(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn441(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn441() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn441(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn441(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn441(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn441(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn441(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn441(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_epoll_pwait2 */

#ifdef HAVE_uk_syscall_mount_setattr
#define uk_syscall_fn442(...) \
	uk_syscall_e_mount_setattr(__VA_ARGS__)
#define uk_syscall0_fn442() \
	uk_syscall_e0_mount_setattr()
#define uk_syscall1_fn442(arg1) \
	uk_syscall_e1_mount_setattr(arg1)
#define uk_syscall2_fn442(arg1, arg2) \
	uk_syscall_e2_mount_setattr(arg1, arg2)
#define uk_syscall3_fn442(arg1, arg2, arg3) \
	uk_syscall_e3_mount_setattr(arg1, arg2, arg3)
#define uk_syscall4_fn442(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_mount_setattr(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn442(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_mount_setattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn442(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_mount_setattr(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn442(...) \
	uk_syscall_r_mount_setattr(__VA_ARGS__)
#define uk_syscall_r0_fn442() \
	uk_syscall_r0_mount_setattr()
#define uk_syscall_r1_fn442(arg1) \
	uk_syscall_r1_mount_setattr(arg1)
#define uk_syscall_r2_fn442(arg1, arg2) \
	uk_syscall_r2_mount_setattr(arg1, arg2)
#define uk_syscall_r3_fn442(arg1, arg2, arg3) \
	uk_syscall_r3_mount_setattr(arg1, arg2, arg3)
#define uk_syscall_r4_fn442(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_mount_setattr(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn442(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_mount_setattr(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn442(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_mount_setattr(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_mount_setattr */
#define uk_syscall_fn442(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn442() _uk_syscall_e_enosys()
#define uk_syscall1_fn442(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn442(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn442(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn442(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn442(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn442(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn442(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn442() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn442(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn442(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn442(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn442(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn442(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn442(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_mount_setattr */

#ifdef HAVE_uk_syscall_landlock_create_ruleset
#define uk_syscall_fn444(...) \
	uk_syscall_e_landlock_create_ruleset(__VA_ARGS__)
#define uk_syscall0_fn444() \
	uk_syscall_e0_landlock_create_ruleset()
#define uk_syscall1_fn444(arg1) \
	uk_syscall_e1_landlock_create_ruleset(arg1)
#define uk_syscall2_fn444(arg1, arg2) \
	uk_syscall_e2_landlock_create_ruleset(arg1, arg2)
#define uk_syscall3_fn444(arg1, arg2, arg3) \
	uk_syscall_e3_landlock_create_ruleset(arg1, arg2, arg3)
#define uk_syscall4_fn444(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_landlock_create_ruleset(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn444(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_landlock_create_ruleset(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn444(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_landlock_create_ruleset(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn444(...) \
	uk_syscall_r_landlock_create_ruleset(__VA_ARGS__)
#define uk_syscall_r0_fn444() \
	uk_syscall_r0_landlock_create_ruleset()
#define uk_syscall_r1_fn444(arg1) \
	uk_syscall_r1_landlock_create_ruleset(arg1)
#define uk_syscall_r2_fn444(arg1, arg2) \
	uk_syscall_r2_landlock_create_ruleset(arg1, arg2)
#define uk_syscall_r3_fn444(arg1, arg2, arg3) \
	uk_syscall_r3_landlock_create_ruleset(arg1, arg2, arg3)
#define uk_syscall_r4_fn444(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_landlock_create_ruleset(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn444(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_landlock_create_ruleset(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn444(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_landlock_create_ruleset(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_landlock_create_ruleset */
#define uk_syscall_fn444(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn444() _uk_syscall_e_enosys()
#define uk_syscall1_fn444(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn444(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn444(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn444(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn444(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn444(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn444(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn444() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn444(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn444(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn444(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn444(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn444(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn444(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_landlock_create_ruleset */

#ifdef HAVE_uk_syscall_landlock_add_rule
#define uk_syscall_fn445(...) \
	uk_syscall_e_landlock_add_rule(__VA_ARGS__)
#define uk_syscall0_fn445() \
	uk_syscall_e0_landlock_add_rule()
#define uk_syscall1_fn445(arg1) \
	uk_syscall_e1_landlock_add_rule(arg1)
#define uk_syscall2_fn445(arg1, arg2) \
	uk_syscall_e2_landlock_add_rule(arg1, arg2)
#define uk_syscall3_fn445(arg1, arg2, arg3) \
	uk_syscall_e3_landlock_add_rule(arg1, arg2, arg3)
#define uk_syscall4_fn445(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_landlock_add_rule(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn445(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_landlock_add_rule(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn445(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_landlock_add_rule(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn445(...) \
	uk_syscall_r_landlock_add_rule(__VA_ARGS__)
#define uk_syscall_r0_fn445() \
	uk_syscall_r0_landlock_add_rule()
#define uk_syscall_r1_fn445(arg1) \
	uk_syscall_r1_landlock_add_rule(arg1)
#define uk_syscall_r2_fn445(arg1, arg2) \
	uk_syscall_r2_landlock_add_rule(arg1, arg2)
#define uk_syscall_r3_fn445(arg1, arg2, arg3) \
	uk_syscall_r3_landlock_add_rule(arg1, arg2, arg3)
#define uk_syscall_r4_fn445(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_landlock_add_rule(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn445(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_landlock_add_rule(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn445(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_landlock_add_rule(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_landlock_add_rule */
#define uk_syscall_fn445(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn445() _uk_syscall_e_enosys()
#define uk_syscall1_fn445(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn445(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn445(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn445(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn445(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn445(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn445(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn445() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn445(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn445(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn445(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn445(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn445(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn445(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_landlock_add_rule */

#ifdef HAVE_uk_syscall_landlock_restrict_self
#define uk_syscall_fn446(...) \
	uk_syscall_e_landlock_restrict_self(__VA_ARGS__)
#define uk_syscall0_fn446() \
	uk_syscall_e0_landlock_restrict_self()
#define uk_syscall1_fn446(arg1) \
	uk_syscall_e1_landlock_restrict_self(arg1)
#define uk_syscall2_fn446(arg1, arg2) \
	uk_syscall_e2_landlock_restrict_self(arg1, arg2)
#define uk_syscall3_fn446(arg1, arg2, arg3) \
	uk_syscall_e3_landlock_restrict_self(arg1, arg2, arg3)
#define uk_syscall4_fn446(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_landlock_restrict_self(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn446(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_landlock_restrict_self(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn446(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_landlock_restrict_self(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn446(...) \
	uk_syscall_r_landlock_restrict_self(__VA_ARGS__)
#define uk_syscall_r0_fn446() \
	uk_syscall_r0_landlock_restrict_self()
#define uk_syscall_r1_fn446(arg1) \
	uk_syscall_r1_landlock_restrict_self(arg1)
#define uk_syscall_r2_fn446(arg1, arg2) \
	uk_syscall_r2_landlock_restrict_self(arg1, arg2)
#define uk_syscall_r3_fn446(arg1, arg2, arg3) \
	uk_syscall_r3_landlock_restrict_self(arg1, arg2, arg3)
#define uk_syscall_r4_fn446(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_landlock_restrict_self(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn446(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_landlock_restrict_self(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn446(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_landlock_restrict_self(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_landlock_restrict_self */
#define uk_syscall_fn446(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn446() _uk_syscall_e_enosys()
#define uk_syscall1_fn446(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn446(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn446(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn446(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn446(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn446(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn446(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn446() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn446(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn446(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn446(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn446(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn446(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn446(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_landlock_restrict_self */

#ifdef HAVE_uk_syscall_memfd_secret
#define uk_syscall_fn447(...) \
	uk_syscall_e_memfd_secret(__VA_ARGS__)
#define uk_syscall0_fn447() \
	uk_syscall_e0_memfd_secret()
#define uk_syscall1_fn447(arg1) \
	uk_syscall_e1_memfd_secret(arg1)
#define uk_syscall2_fn447(arg1, arg2) \
	uk_syscall_e2_memfd_secret(arg1, arg2)
#define uk_syscall3_fn447(arg1, arg2, arg3) \
	uk_syscall_e3_memfd_secret(arg1, arg2, arg3)
#define uk_syscall4_fn447(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_memfd_secret(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn447(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_memfd_secret(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn447(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_memfd_secret(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn447(...) \
	uk_syscall_r_memfd_secret(__VA_ARGS__)
#define uk_syscall_r0_fn447() \
	uk_syscall_r0_memfd_secret()
#define uk_syscall_r1_fn447(arg1) \
	uk_syscall_r1_memfd_secret(arg1)
#define uk_syscall_r2_fn447(arg1, arg2) \
	uk_syscall_r2_memfd_secret(arg1, arg2)
#define uk_syscall_r3_fn447(arg1, arg2, arg3) \
	uk_syscall_r3_memfd_secret(arg1, arg2, arg3)
#define uk_syscall_r4_fn447(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_memfd_secret(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn447(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_memfd_secret(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn447(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_memfd_secret(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_memfd_secret */
#define uk_syscall_fn447(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn447() _uk_syscall_e_enosys()
#define uk_syscall1_fn447(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn447(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn447(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn447(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn447(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn447(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn447(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn447() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn447(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn447(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn447(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn447(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn447(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn447(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_memfd_secret */

#ifdef HAVE_uk_syscall_process_mrelease
#define uk_syscall_fn448(...) \
	uk_syscall_e_process_mrelease(__VA_ARGS__)
#define uk_syscall0_fn448() \
	uk_syscall_e0_process_mrelease()
#define uk_syscall1_fn448(arg1) \
	uk_syscall_e1_process_mrelease(arg1)
#define uk_syscall2_fn448(arg1, arg2) \
	uk_syscall_e2_process_mrelease(arg1, arg2)
#define uk_syscall3_fn448(arg1, arg2, arg3) \
	uk_syscall_e3_process_mrelease(arg1, arg2, arg3)
#define uk_syscall4_fn448(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_process_mrelease(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn448(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_process_mrelease(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn448(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_process_mrelease(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn448(...) \
	uk_syscall_r_process_mrelease(__VA_ARGS__)
#define uk_syscall_r0_fn448() \
	uk_syscall_r0_process_mrelease()
#define uk_syscall_r1_fn448(arg1) \
	uk_syscall_r1_process_mrelease(arg1)
#define uk_syscall_r2_fn448(arg1, arg2) \
	uk_syscall_r2_process_mrelease(arg1, arg2)
#define uk_syscall_r3_fn448(arg1, arg2, arg3) \
	uk_syscall_r3_process_mrelease(arg1, arg2, arg3)
#define uk_syscall_r4_fn448(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_process_mrelease(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn448(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_process_mrelease(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn448(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_process_mrelease(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_process_mrelease */
#define uk_syscall_fn448(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn448() _uk_syscall_e_enosys()
#define uk_syscall1_fn448(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn448(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn448(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn448(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn448(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn448(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn448(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn448() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn448(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn448(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn448(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn448(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn448(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn448(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_process_mrelease */

#ifdef HAVE_uk_syscall_futex_waitv
#define uk_syscall_fn449(...) \
	uk_syscall_e_futex_waitv(__VA_ARGS__)
#define uk_syscall0_fn449() \
	uk_syscall_e0_futex_waitv()
#define uk_syscall1_fn449(arg1) \
	uk_syscall_e1_futex_waitv(arg1)
#define uk_syscall2_fn449(arg1, arg2) \
	uk_syscall_e2_futex_waitv(arg1, arg2)
#define uk_syscall3_fn449(arg1, arg2, arg3) \
	uk_syscall_e3_futex_waitv(arg1, arg2, arg3)
#define uk_syscall4_fn449(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_futex_waitv(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn449(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_futex_waitv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn449(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_futex_waitv(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn449(...) \
	uk_syscall_r_futex_waitv(__VA_ARGS__)
#define uk_syscall_r0_fn449() \
	uk_syscall_r0_futex_waitv()
#define uk_syscall_r1_fn449(arg1) \
	uk_syscall_r1_futex_waitv(arg1)
#define uk_syscall_r2_fn449(arg1, arg2) \
	uk_syscall_r2_futex_waitv(arg1, arg2)
#define uk_syscall_r3_fn449(arg1, arg2, arg3) \
	uk_syscall_r3_futex_waitv(arg1, arg2, arg3)
#define uk_syscall_r4_fn449(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_futex_waitv(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn449(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_futex_waitv(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn449(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_futex_waitv(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_futex_waitv */
#define uk_syscall_fn449(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn449() _uk_syscall_e_enosys()
#define uk_syscall1_fn449(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn449(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn449(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn449(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn449(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn449(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn449(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn449() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn449(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn449(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn449(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn449(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn449(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn449(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_futex_waitv */

#ifdef HAVE_uk_syscall_set_mempolicy_home_node
#define uk_syscall_fn450(...) \
	uk_syscall_e_set_mempolicy_home_node(__VA_ARGS__)
#define uk_syscall0_fn450() \
	uk_syscall_e0_set_mempolicy_home_node()
#define uk_syscall1_fn450(arg1) \
	uk_syscall_e1_set_mempolicy_home_node(arg1)
#define uk_syscall2_fn450(arg1, arg2) \
	uk_syscall_e2_set_mempolicy_home_node(arg1, arg2)
#define uk_syscall3_fn450(arg1, arg2, arg3) \
	uk_syscall_e3_set_mempolicy_home_node(arg1, arg2, arg3)
#define uk_syscall4_fn450(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_set_mempolicy_home_node(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn450(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_set_mempolicy_home_node(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn450(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_set_mempolicy_home_node(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn450(...) \
	uk_syscall_r_set_mempolicy_home_node(__VA_ARGS__)
#define uk_syscall_r0_fn450() \
	uk_syscall_r0_set_mempolicy_home_node()
#define uk_syscall_r1_fn450(arg1) \
	uk_syscall_r1_set_mempolicy_home_node(arg1)
#define uk_syscall_r2_fn450(arg1, arg2) \
	uk_syscall_r2_set_mempolicy_home_node(arg1, arg2)
#define uk_syscall_r3_fn450(arg1, arg2, arg3) \
	uk_syscall_r3_set_mempolicy_home_node(arg1, arg2, arg3)
#define uk_syscall_r4_fn450(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_set_mempolicy_home_node(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn450(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_set_mempolicy_home_node(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn450(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_set_mempolicy_home_node(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_set_mempolicy_home_node */
#define uk_syscall_fn450(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn450() _uk_syscall_e_enosys()
#define uk_syscall1_fn450(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn450(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn450(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn450(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn450(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn450(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn450(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn450() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn450(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn450(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn450(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn450(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn450(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn450(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_set_mempolicy_home_node */

#ifdef HAVE_uk_syscall_cachestat
#define uk_syscall_fn451(...) \
	uk_syscall_e_cachestat(__VA_ARGS__)
#define uk_syscall0_fn451() \
	uk_syscall_e0_cachestat()
#define uk_syscall1_fn451(arg1) \
	uk_syscall_e1_cachestat(arg1)
#define uk_syscall2_fn451(arg1, arg2) \
	uk_syscall_e2_cachestat(arg1, arg2)
#define uk_syscall3_fn451(arg1, arg2, arg3) \
	uk_syscall_e3_cachestat(arg1, arg2, arg3)
#define uk_syscall4_fn451(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_cachestat(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn451(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_cachestat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn451(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_cachestat(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn451(...) \
	uk_syscall_r_cachestat(__VA_ARGS__)
#define uk_syscall_r0_fn451() \
	uk_syscall_r0_cachestat()
#define uk_syscall_r1_fn451(arg1) \
	uk_syscall_r1_cachestat(arg1)
#define uk_syscall_r2_fn451(arg1, arg2) \
	uk_syscall_r2_cachestat(arg1, arg2)
#define uk_syscall_r3_fn451(arg1, arg2, arg3) \
	uk_syscall_r3_cachestat(arg1, arg2, arg3)
#define uk_syscall_r4_fn451(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_cachestat(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn451(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_cachestat(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn451(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_cachestat(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_cachestat */
#define uk_syscall_fn451(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn451() _uk_syscall_e_enosys()
#define uk_syscall1_fn451(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn451(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn451(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn451(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn451(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn451(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn451(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn451() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn451(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn451(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn451(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn451(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn451(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn451(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_cachestat */

#ifdef HAVE_uk_syscall_fchmodat2
#define uk_syscall_fn452(...) \
	uk_syscall_e_fchmodat2(__VA_ARGS__)
#define uk_syscall0_fn452() \
	uk_syscall_e0_fchmodat2()
#define uk_syscall1_fn452(arg1) \
	uk_syscall_e1_fchmodat2(arg1)
#define uk_syscall2_fn452(arg1, arg2) \
	uk_syscall_e2_fchmodat2(arg1, arg2)
#define uk_syscall3_fn452(arg1, arg2, arg3) \
	uk_syscall_e3_fchmodat2(arg1, arg2, arg3)
#define uk_syscall4_fn452(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_fchmodat2(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn452(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_fchmodat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn452(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_fchmodat2(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn452(...) \
	uk_syscall_r_fchmodat2(__VA_ARGS__)
#define uk_syscall_r0_fn452() \
	uk_syscall_r0_fchmodat2()
#define uk_syscall_r1_fn452(arg1) \
	uk_syscall_r1_fchmodat2(arg1)
#define uk_syscall_r2_fn452(arg1, arg2) \
	uk_syscall_r2_fchmodat2(arg1, arg2)
#define uk_syscall_r3_fn452(arg1, arg2, arg3) \
	uk_syscall_r3_fchmodat2(arg1, arg2, arg3)
#define uk_syscall_r4_fn452(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_fchmodat2(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn452(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_fchmodat2(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn452(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_fchmodat2(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_fchmodat2 */
#define uk_syscall_fn452(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn452() _uk_syscall_e_enosys()
#define uk_syscall1_fn452(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn452(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn452(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn452(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn452(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn452(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn452(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn452() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn452(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn452(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn452(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn452(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn452(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn452(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_fchmodat2 */

#ifdef HAVE_uk_syscall_map_shadow_stack
#define uk_syscall_fn453(...) \
	uk_syscall_e_map_shadow_stack(__VA_ARGS__)
#define uk_syscall0_fn453() \
	uk_syscall_e0_map_shadow_stack()
#define uk_syscall1_fn453(arg1) \
	uk_syscall_e1_map_shadow_stack(arg1)
#define uk_syscall2_fn453(arg1, arg2) \
	uk_syscall_e2_map_shadow_stack(arg1, arg2)
#define uk_syscall3_fn453(arg1, arg2, arg3) \
	uk_syscall_e3_map_shadow_stack(arg1, arg2, arg3)
#define uk_syscall4_fn453(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_map_shadow_stack(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn453(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_map_shadow_stack(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn453(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_map_shadow_stack(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn453(...) \
	uk_syscall_r_map_shadow_stack(__VA_ARGS__)
#define uk_syscall_r0_fn453() \
	uk_syscall_r0_map_shadow_stack()
#define uk_syscall_r1_fn453(arg1) \
	uk_syscall_r1_map_shadow_stack(arg1)
#define uk_syscall_r2_fn453(arg1, arg2) \
	uk_syscall_r2_map_shadow_stack(arg1, arg2)
#define uk_syscall_r3_fn453(arg1, arg2, arg3) \
	uk_syscall_r3_map_shadow_stack(arg1, arg2, arg3)
#define uk_syscall_r4_fn453(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_map_shadow_stack(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn453(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_map_shadow_stack(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn453(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_map_shadow_stack(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_map_shadow_stack */
#define uk_syscall_fn453(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn453() _uk_syscall_e_enosys()
#define uk_syscall1_fn453(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn453(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn453(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn453(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn453(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn453(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn453(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn453() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn453(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn453(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn453(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn453(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn453(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn453(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_map_shadow_stack */

#ifdef HAVE_uk_syscall_futex_wake
#define uk_syscall_fn454(...) \
	uk_syscall_e_futex_wake(__VA_ARGS__)
#define uk_syscall0_fn454() \
	uk_syscall_e0_futex_wake()
#define uk_syscall1_fn454(arg1) \
	uk_syscall_e1_futex_wake(arg1)
#define uk_syscall2_fn454(arg1, arg2) \
	uk_syscall_e2_futex_wake(arg1, arg2)
#define uk_syscall3_fn454(arg1, arg2, arg3) \
	uk_syscall_e3_futex_wake(arg1, arg2, arg3)
#define uk_syscall4_fn454(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_futex_wake(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn454(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_futex_wake(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn454(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_futex_wake(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn454(...) \
	uk_syscall_r_futex_wake(__VA_ARGS__)
#define uk_syscall_r0_fn454() \
	uk_syscall_r0_futex_wake()
#define uk_syscall_r1_fn454(arg1) \
	uk_syscall_r1_futex_wake(arg1)
#define uk_syscall_r2_fn454(arg1, arg2) \
	uk_syscall_r2_futex_wake(arg1, arg2)
#define uk_syscall_r3_fn454(arg1, arg2, arg3) \
	uk_syscall_r3_futex_wake(arg1, arg2, arg3)
#define uk_syscall_r4_fn454(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_futex_wake(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn454(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_futex_wake(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn454(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_futex_wake(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_futex_wake */
#define uk_syscall_fn454(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn454() _uk_syscall_e_enosys()
#define uk_syscall1_fn454(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn454(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn454(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn454(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn454(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn454(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn454(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn454() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn454(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn454(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn454(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn454(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn454(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn454(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_futex_wake */

#ifdef HAVE_uk_syscall_futex_wait
#define uk_syscall_fn455(...) \
	uk_syscall_e_futex_wait(__VA_ARGS__)
#define uk_syscall0_fn455() \
	uk_syscall_e0_futex_wait()
#define uk_syscall1_fn455(arg1) \
	uk_syscall_e1_futex_wait(arg1)
#define uk_syscall2_fn455(arg1, arg2) \
	uk_syscall_e2_futex_wait(arg1, arg2)
#define uk_syscall3_fn455(arg1, arg2, arg3) \
	uk_syscall_e3_futex_wait(arg1, arg2, arg3)
#define uk_syscall4_fn455(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_futex_wait(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn455(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_futex_wait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn455(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_futex_wait(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn455(...) \
	uk_syscall_r_futex_wait(__VA_ARGS__)
#define uk_syscall_r0_fn455() \
	uk_syscall_r0_futex_wait()
#define uk_syscall_r1_fn455(arg1) \
	uk_syscall_r1_futex_wait(arg1)
#define uk_syscall_r2_fn455(arg1, arg2) \
	uk_syscall_r2_futex_wait(arg1, arg2)
#define uk_syscall_r3_fn455(arg1, arg2, arg3) \
	uk_syscall_r3_futex_wait(arg1, arg2, arg3)
#define uk_syscall_r4_fn455(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_futex_wait(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn455(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_futex_wait(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn455(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_futex_wait(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_futex_wait */
#define uk_syscall_fn455(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn455() _uk_syscall_e_enosys()
#define uk_syscall1_fn455(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn455(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn455(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn455(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn455(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn455(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn455(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn455() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn455(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn455(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn455(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn455(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn455(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn455(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_futex_wait */

#ifdef HAVE_uk_syscall_futex_requeue
#define uk_syscall_fn456(...) \
	uk_syscall_e_futex_requeue(__VA_ARGS__)
#define uk_syscall0_fn456() \
	uk_syscall_e0_futex_requeue()
#define uk_syscall1_fn456(arg1) \
	uk_syscall_e1_futex_requeue(arg1)
#define uk_syscall2_fn456(arg1, arg2) \
	uk_syscall_e2_futex_requeue(arg1, arg2)
#define uk_syscall3_fn456(arg1, arg2, arg3) \
	uk_syscall_e3_futex_requeue(arg1, arg2, arg3)
#define uk_syscall4_fn456(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_futex_requeue(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn456(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_futex_requeue(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn456(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_futex_requeue(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn456(...) \
	uk_syscall_r_futex_requeue(__VA_ARGS__)
#define uk_syscall_r0_fn456() \
	uk_syscall_r0_futex_requeue()
#define uk_syscall_r1_fn456(arg1) \
	uk_syscall_r1_futex_requeue(arg1)
#define uk_syscall_r2_fn456(arg1, arg2) \
	uk_syscall_r2_futex_requeue(arg1, arg2)
#define uk_syscall_r3_fn456(arg1, arg2, arg3) \
	uk_syscall_r3_futex_requeue(arg1, arg2, arg3)
#define uk_syscall_r4_fn456(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_futex_requeue(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn456(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_futex_requeue(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn456(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_futex_requeue(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_futex_requeue */
#define uk_syscall_fn456(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn456() _uk_syscall_e_enosys()
#define uk_syscall1_fn456(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn456(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn456(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn456(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn456(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn456(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn456(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn456() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn456(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn456(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn456(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn456(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn456(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn456(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_futex_requeue */

#ifdef HAVE_uk_syscall_statmount
#define uk_syscall_fn457(...) \
	uk_syscall_e_statmount(__VA_ARGS__)
#define uk_syscall0_fn457() \
	uk_syscall_e0_statmount()
#define uk_syscall1_fn457(arg1) \
	uk_syscall_e1_statmount(arg1)
#define uk_syscall2_fn457(arg1, arg2) \
	uk_syscall_e2_statmount(arg1, arg2)
#define uk_syscall3_fn457(arg1, arg2, arg3) \
	uk_syscall_e3_statmount(arg1, arg2, arg3)
#define uk_syscall4_fn457(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_statmount(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn457(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_statmount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn457(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_statmount(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn457(...) \
	uk_syscall_r_statmount(__VA_ARGS__)
#define uk_syscall_r0_fn457() \
	uk_syscall_r0_statmount()
#define uk_syscall_r1_fn457(arg1) \
	uk_syscall_r1_statmount(arg1)
#define uk_syscall_r2_fn457(arg1, arg2) \
	uk_syscall_r2_statmount(arg1, arg2)
#define uk_syscall_r3_fn457(arg1, arg2, arg3) \
	uk_syscall_r3_statmount(arg1, arg2, arg3)
#define uk_syscall_r4_fn457(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_statmount(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn457(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_statmount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn457(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_statmount(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_statmount */
#define uk_syscall_fn457(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn457() _uk_syscall_e_enosys()
#define uk_syscall1_fn457(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn457(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn457(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn457(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn457(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn457(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn457(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn457() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn457(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn457(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn457(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn457(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn457(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn457(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_statmount */

#ifdef HAVE_uk_syscall_listmount
#define uk_syscall_fn458(...) \
	uk_syscall_e_listmount(__VA_ARGS__)
#define uk_syscall0_fn458() \
	uk_syscall_e0_listmount()
#define uk_syscall1_fn458(arg1) \
	uk_syscall_e1_listmount(arg1)
#define uk_syscall2_fn458(arg1, arg2) \
	uk_syscall_e2_listmount(arg1, arg2)
#define uk_syscall3_fn458(arg1, arg2, arg3) \
	uk_syscall_e3_listmount(arg1, arg2, arg3)
#define uk_syscall4_fn458(arg1, arg2, arg3, arg4) \
	uk_syscall_e4_listmount(arg1, arg2, arg3, arg4)
#define uk_syscall5_fn458(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_e5_listmount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall6_fn458(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_e6_listmount(arg1, arg2, arg3, arg4, arg5, arg6)
#define uk_syscall_r_fn458(...) \
	uk_syscall_r_listmount(__VA_ARGS__)
#define uk_syscall_r0_fn458() \
	uk_syscall_r0_listmount()
#define uk_syscall_r1_fn458(arg1) \
	uk_syscall_r1_listmount(arg1)
#define uk_syscall_r2_fn458(arg1, arg2) \
	uk_syscall_r2_listmount(arg1, arg2)
#define uk_syscall_r3_fn458(arg1, arg2, arg3) \
	uk_syscall_r3_listmount(arg1, arg2, arg3)
#define uk_syscall_r4_fn458(arg1, arg2, arg3, arg4) \
	uk_syscall_r4_listmount(arg1, arg2, arg3, arg4)
#define uk_syscall_r5_fn458(arg1, arg2, arg3, arg4, arg5) \
	uk_syscall_r5_listmount(arg1, arg2, arg3, arg4, arg5)
#define uk_syscall_r6_fn458(arg1, arg2, arg3, arg4, arg5, arg6) \
	uk_syscall_r6_listmount(arg1, arg2, arg3, arg4, arg5, arg6)
#else /* !HAVE_uk_syscall_listmount */
#define uk_syscall_fn458(...) _uk_syscall_e_enosys()
#define uk_syscall0_fn458() _uk_syscall_e_enosys()
#define uk_syscall1_fn458(arg1) _uk_syscall_e_enosys()
#define uk_syscall2_fn458(arg1, arg2) _uk_syscall_e_enosys()
#define uk_syscall3_fn458(arg1, arg2, arg3) _uk_syscall_e_enosys()
#define uk_syscall4_fn458(arg1, arg2, arg3, arg4) _uk_syscall_e_enosys()
#define uk_syscall5_fn458(arg1, arg2, arg3, arg4, arg5) _uk_syscall_e_enosys()
#define uk_syscall6_fn458(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_e_enosys()
#define uk_syscall_r_fn458(...) _uk_syscall_r_enosys()
#define uk_syscall_r0_fn458() _uk_syscall_r_enosys()
#define uk_syscall_r1_fn458(arg1) _uk_syscall_r_enosys()
#define uk_syscall_r2_fn458(arg1, arg2) _uk_syscall_r_enosys()
#define uk_syscall_r3_fn458(arg1, arg2, arg3) _uk_syscall_r_enosys()
#define uk_syscall_r4_fn458(arg1, arg2, arg3, arg4) _uk_syscall_r_enosys()
#define uk_syscall_r5_fn458(arg1, arg2, arg3, arg4, arg5) _uk_syscall_r_enosys()
#define uk_syscall_r6_fn458(arg1, arg2, arg3, arg4, arg5, arg6) _uk_syscall_r_enosys()
#endif /* !HAVE_uk_syscall_listmount */
