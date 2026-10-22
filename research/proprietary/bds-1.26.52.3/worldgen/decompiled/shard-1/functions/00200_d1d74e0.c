/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d74e0 (ELF vaddr 0xd1d74e0)
 * Label: br::worldgen::processors::BlockRules::RandomBlockMatch::vslot2
 * Body:  [[0d2d74e0, 0d2d7506]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot2
 */


bool wg_br__worldgen__processors__BlockRules__RandomBlockMatch__vslot2
               (long param_1,long param_2,long *param_3)

{
  float extraout_XMM0_Da;
  
  if (*(long *)(param_2 + 0x68) != *(long *)(param_1 + 8)) {
    return false;
  }
  (**(code **)(*param_3 + 0x30))(param_3);
  return extraout_XMM0_Da < *(float *)(param_1 + 0x10);
}


