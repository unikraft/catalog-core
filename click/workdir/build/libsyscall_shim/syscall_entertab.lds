SECTIONS
{
 . = ALIGN(8);
 .uk_syscall_entertab :
 {
  PROVIDE(uk_syscall_entertab_start = .);
  KEEP(*(SORT_BY_NAME(.uk_syscall_entertab[0-9])))
  PROVIDE(uk_syscall_entertab_end = .);
 }
}
INSERT AFTER .rodata;
