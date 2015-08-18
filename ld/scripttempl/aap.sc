
cat <<EOF
OUTPUT_FORMAT("elf32-aap", "elf32-aap", "elf32-aap")
OUTPUT_ARCH(aap)


AAP_MEM_TYPE_DATA = 0x00000000;
AAP_MEM_TYPE_CODE = 0x01000000;

ENTRY (_start)

MEMORY
{
  CODE_MEM (RX) : ORIGIN = AAP_MEM_TYPE_CODE + 0x0,   LENGTH = 0x00FFFFFF
  DATA_MEM (RW) : ORIGIN = AAP_MEM_TYPE_DATA + 0x100, LENGTH = 0x00FFFEFF
}

SECTIONS
{
  .text :
  {
    *(.text .text.*)
  } >CODE_MEM

  .data :
  {
    ___data_start = ADDR (.data);
    *(.data)
    *(.data.*)
    ___data_end = .;
  } >DATA_MEM

  .bss :
  {
    ___bss_start = ADDR (.bss);
    *(.bss)
    *(.bss.*)
    ___bss_end = .;
  } >DATA_MEM

  .rodata :
  {
    ___rodata_start = ADDR (.rodata);
    *(.rodata)
    *(.rodata.*)
    ___rodata_end = .;
  } >DATA_MEM

  PROVIDE (___heap_start = ALIGN (., 0x100));

EOF

  . $srcdir/scripttempl/DWARF.sc

cat <<EOF
}

PROVIDE (___stack_end = (0xfff0));
PROVIDE (___heap_end = (___stack_end + ___heap_start) / 2);
EOF


