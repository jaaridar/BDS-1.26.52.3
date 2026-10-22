/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cab60 (ELF vaddr 0x48cab60)
 * Label: br::worldgen::WorldGenRandom::vslot15
 * Body:  [[049cab60, 049cab94]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot15(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (_DAT_011987c8 < param_1) {
    bVar1 = true;
    if (param_1 < _DAT_011983f0) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = fVar2 <= param_1;
    }
    return bVar1;
  }
  return false;
}


