/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d78c0 (ELF vaddr 0xd1d78c0)
 * Label: br::worldgen::processors::BlockRules::TagMatch::vslot0
 * Body:  [[0d2d78c0, 0d2d78e1]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__TagMatch__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_br__worldgen__processors__BlockRules__TagMatch__vslot0(undefined8 *param_1)

{
  *param_1 = &UNK_0f45f638;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return &UNK_0f45f638;
  }
  if (param_1[4] != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1[4]);
  }
  return &UNK_0f45f638;
}


