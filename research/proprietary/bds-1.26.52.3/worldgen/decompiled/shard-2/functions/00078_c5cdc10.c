/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cdc10 (ELF vaddr 0xc5cdc10)
 * Label: JigsawBlock::vslot47
 * Body:  [[0c6cdc10, 0c6cdc58]]
 * Ghidra: wg_JigsawBlock__vslot47
 */


ulong wg_JigsawBlock__vslot47(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((((*(byte *)(param_1 + 0x133) & 0x20) == 0) && (*(char *)(param_1 + 0x168) == '\0')) &&
     (*(char *)(param_2 + 0x18) == '\0')) {
    uVar1 = 1;
    if (((*(byte *)(param_1 + 0x156) & 1) != 0) && (*(char *)(param_2 + 7) == '\0')) {
      uVar1 = func_0x04fa7a10(param_2,param_1 + 0x150);
      uVar1 = uVar1 ^ 1;
    }
    return uVar1;
  }
  return 0;
}


