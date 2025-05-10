SECTIONS
{
 . = ALIGN(8);
 .uk_syscall_exittab :
 {
  PROVIDE(uk_syscall_exittab_start = .);
  KEEP(*(SORT_BY_NAME(.uk_syscall_exittab[0-9])))
  PROVIDE(uk_syscall_exittab_end = .);
 }
}
INSERT AFTER .rodata;
