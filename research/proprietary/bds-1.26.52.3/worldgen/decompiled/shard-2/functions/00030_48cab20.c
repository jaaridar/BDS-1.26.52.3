/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cab20 (ELF vaddr 0x48cab20)
 * Label: br::worldgen::WorldGenRandom::vslot14
 * Body:  [[049cab20, 049cab53]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot14(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (0.0 < param_1) {
    bVar1 = true;
    if (param_1 < _DAT_011983f0) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = fVar2 < param_1;
    }
    return bVar1;
  }
  return false;
}


