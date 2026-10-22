/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cf5f0 (ELF vaddr 0xc5cf5f0)
 * Label: JigsawBlock::vslot101
 * Body:  [[0c6cf5f0, 0c6cf625]]
 * Ghidra: wg_JigsawBlock__vslot101
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 wg_JigsawBlock__vslot101(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_011987c4;
  if (((*(char *)(param_2 + 0x71) == '\0') &&
      ((*(byte *)(*(long *)(param_2 + 0x68) + 0x108) & 0x20) == 0)) &&
     (uVar1 = _DAT_011983f0, *(char *)(param_2 + 0xa3) != '\0')) {
    return _DAT_011987c4;
  }
  return uVar1;
}


