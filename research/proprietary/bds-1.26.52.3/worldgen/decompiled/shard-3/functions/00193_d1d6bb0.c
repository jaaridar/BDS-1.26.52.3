/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d6bb0 (ELF vaddr 0xd1d6bb0)
 * Label: br::worldgen::processors::BlockIgnore::vslot0
 * Body:  [[0d2d6bb0, 0d2d6bd6]]
 * Ghidra: wg_br__worldgen__processors__BlockIgnore__vslot0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * wg_br__worldgen__processors__BlockIgnore__vslot0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &UNK_0f45f7b8;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    param_1[2] = lVar1;
    if (lVar1 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar1);
    }
    return param_1;
  }
  return param_1;
}


