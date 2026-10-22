/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc65c710 (ELF vaddr 0xc55c710)
 * Label: JigsawBlock::vslot1
 * Body:  [[0c65c710, 0c65c726]]
 * Ghidra: wg_JigsawBlock__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0c6e1d20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


