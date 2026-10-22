/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2be5c0 (ELF vaddr 0xd1be5c0)
 * Label: br::worldgen::processors::ProtectedBlock::vslot0
 * Body:  [[0d2be5c0, 0d2be5e1]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_br__worldgen__processors__ProtectedBlock__vslot0(undefined8 *param_1)

{
  *param_1 = &UNK_0f45e1a8;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return &UNK_0f45e1a8;
  }
  if (param_1[4] != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1[4]);
  }
  return &UNK_0f45e1a8;
}


