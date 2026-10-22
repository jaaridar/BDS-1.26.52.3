/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cbc10 (ELF vaddr 0xc5cbc10)
 * Label: JigsawBlock::vslot18
 * Body:  [[0c6cbc10, 0c6cbc31]]
 * Ghidra: wg_JigsawBlock__vslot18
 */


byte wg_JigsawBlock__vslot18(long param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((*(ulong *)(param_1 + 0x108) & 0x40000) == 0) {
    bVar1 = (byte)((uint)*(ulong *)(param_1 + 0x108) >> 0x11) & 1 & param_3 == '\x01';
  }
  return bVar1;
}


