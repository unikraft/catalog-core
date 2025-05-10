OUTPUT_FORMAT("elf64-littleaarch64")
OUTPUT_ARCH(aarch64)
PHDRS
{
 text PT_LOAD FLAGS((0x4 | 0x1));
 rodata PT_LOAD FLAGS(0x4);
 data PT_LOAD;
 tls PT_TLS;
 tls_load PT_LOAD;
 stack PT_GNU_STACK FLAGS((0x4 | 0x2));
}
SECTIONS {
 . = 0x40000000;
 _dtb = .;
 _start_ram_addr = .;
 . = . + 0x100000;
 _base_addr = .;
 _text = .;
 .text :
 {
  *(.text)
  *(.text.*)
 } :text
 . = ALIGN((1 << 12));
 _etext = .;
 . = ALIGN((1 << 12));
 _rodata = .;
 .rodata :
 {
  *(.rodata)
  *(.rodata.*)
 } :rodata
 . = ALIGN((1 << 12)); __eh_frame_start = .; .eh_frame : { KEEP(*(.eh_frame)) KEEP(*(.eh_frame.*)) } __eh_frame_end = .; __eh_frame_hdr_start = .; .eh_frame_hdr : { KEEP(*(.eh_frame_hdr)) KEEP(*(.eh_frame_hdr.*)) } __eh_frame_hdr_end = .; __gcc_except_table_start = .; .gcc_except_table : { *(.gcc_except_table) *(.gcc_except_table.*) } __gcc_except_table_end = .;
 . = ALIGN((1 << 12)); uk_ctortab_start = .; .uk_ctortab : { KEEP(*(SORT_BY_NAME(.uk_ctortab[0-9]))) } uk_ctortab_end = .;
 uk_inittab_start = .; .uk_inittab : { KEEP(*(SORT_BY_NAME(.uk_inittab[1-6][0-9]))) } uk_inittab_end = .;
 . = ALIGN(0x8); .uk_eventtab : { KEEP(*(SORT_BY_NAME(.uk_event_*))) }
 _erodata = .;
 . = ALIGN(0x8);
 _ctors = .;
 .preinit_array : {
  PROVIDE_HIDDEN (__preinit_array_start = .);
  KEEP (*(.preinit_array))
  PROVIDE_HIDDEN (__preinit_array_end = .);
 }
 . = ALIGN(0x8);
 .init_array : {
  PROVIDE_HIDDEN (__init_array_start = .);
  KEEP (*(SORT_BY_INIT_PRIORITY(.init_array.*) SORT_BY_INIT_PRIORITY(.ctors.*)))
  KEEP (*(.init_array .ctors))
  PROVIDE_HIDDEN (__init_array_end = .);
 }
 _ectors = .;
 . = ALIGN((1 << 12));
 . = ALIGN((1 << 12)); _tls_start = .; .tdata : { *(.tdata) *(.tdata.*) *(.gnu.linkonce.td.*) } :tls :tls_load _etdata = .; .tbss : { *(.tbss) *(.tbss.*) *(.gnu.linkonce.tb.*) *(.tcommon) } _tls_end = . + SIZEOF(.tbss);
 . = ALIGN((1 << 12)); _data = .; .data : { *(.data) *(.data.*) } :data _edata = .; . = ALIGN((1 << 12)); __bss_start = .; .bss : { *(.bss) *(.bss.*) *(COMMON) . = ALIGN((1 << 12)); }
 _end = .;
 .comment 0 : { *(.comment) }
 .debug 0 : { *(.debug) } .line 0 : { *(.line) } .debug_srcinfo 0 : { *(.debug_srcinfo) } .debug_sfnames 0 : { *(.debug_sfnames) } .debug_aranges 0 : { *(.debug_aranges) } .debug_pubnames 0 : { *(.debug_pubnames) } .debug_info 0 : { *(.debug_info .gnu.linkonce.wi.*) } .debug_abbrev 0 : { *(.debug_abbrev) } .debug_line 0 : { *(.debug_line .debug_line.* .debug_line_end ) } .debug_frame 0 : { *(.debug_frame) } .debug_str 0 : { *(.debug_str) } .debug_loc 0 : { *(.debug_loc) } .debug_macinfo 0 : { *(.debug_macinfo) } .debug_weaknames 0 : { *(.debug_weaknames) } .debug_funcnames 0 : { *(.debug_funcnames) } .debug_typenames 0 : { *(.debug_typenames) } .debug_varnames 0 : { *(.debug_varnames) } .debug_pubtypes 0 : { *(.debug_pubtypes) } .debug_ranges 0 : { *(.debug_ranges) } .debug_macro 0 : { *(.debug_macro) } .gnu.attributes 0 : { KEEP (*(.gnu.attributes)) }
 /DISCARD/ : { *(.note.gnu.build-id) }
}
