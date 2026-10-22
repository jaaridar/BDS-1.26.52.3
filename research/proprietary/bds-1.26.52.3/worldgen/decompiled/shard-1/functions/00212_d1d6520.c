/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d6520 (ELF vaddr 0xd1d6520)
 * Label: br::worldgen::processors::BlockEntity::AppendLoot::vslot0
 * Body:  [[0d2d6520, 0d2d6541]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * wg_br__worldgen__processors__BlockEntity__AppendLoot__vslot0(undefined8 *param_1)

{
  *param_1 = &UNK_0f45f788;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return &UNK_0f45f788;
  }
  if (param_1[3] != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1[3]);
  }
  return &UNK_0f45f788;
}


