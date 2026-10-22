/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49caba0 (ELF vaddr 0x48caba0)
 * Label: br::worldgen::WorldGenRandom::vslot16
 * Body:  [[049caba0, 049cabd8]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot16
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot16(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 < _DAT_0f54fd80) {
    bVar1 = true;
    if (_DAT_011987c8 < param_1) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = param_1 < fVar2;
    }
    return bVar1;
  }
  return false;
}


