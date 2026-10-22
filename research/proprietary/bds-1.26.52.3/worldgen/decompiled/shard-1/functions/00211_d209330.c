/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd309330 (ELF vaddr 0xd209330)
 * Label: br::worldgen::ConstantHeight::vslot1
 * Body:  [[0d309330, 0d309339]]
 * Ghidra: wg_br__worldgen__ConstantHeight__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__ConstantHeight__vslot1(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


