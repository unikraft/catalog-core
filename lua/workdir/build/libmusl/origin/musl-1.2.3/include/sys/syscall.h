#ifndef _SYS_SYSCALL_H
#define _SYS_SYSCALL_H

#include <uk/bits/syscall_nrs.h>
#include <uk/bits/syscall_nrs2.h>

long syscall(long n, ...);

#endif
