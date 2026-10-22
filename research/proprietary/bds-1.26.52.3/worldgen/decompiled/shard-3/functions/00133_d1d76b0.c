/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d76b0 (ELF vaddr 0xd1d76b0)
 * Label: br::worldgen::processors::BlockRules::RandomBlockStateMatch::vslot2
 * Body:  [[0d2d76b0, 0d2d76e0]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot2
 */


bool wg_br__worldgen__processors__BlockRules__RandomBlockStateMatch__vslot2
               (long param_1,long param_2,long *param_3)

{
  float extraout_XMM0_Da;
  
  if (*(long *)(param_2 + 0x110) == *(long *)(*(long *)(param_1 + 8) + 0x110)) {
    (**(code **)(*param_3 + 0x30))(param_3);
    return extraout_XMM0_Da < *(float *)(param_1 + 0x10);
  }
  return false;
}


