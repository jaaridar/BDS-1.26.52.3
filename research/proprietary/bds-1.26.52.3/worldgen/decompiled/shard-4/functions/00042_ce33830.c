/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf33830 (ELF vaddr 0xce33830)
 * Label: JigsawBlockActor::vslot1
 * Body:  [[0cf33830, 0cf33846]]
 * Ghidra: wg_JigsawBlockActor__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlockActor__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0cf33660();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


