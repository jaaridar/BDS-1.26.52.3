/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cabe0 (ELF vaddr 0x48cabe0)
 * Label: br::worldgen::WorldGenRandom::vslot17
 * Body:  [[049cabe0, 049cac13]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot17
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_br__worldgen__WorldGenRandom__vslot17(float param_1,long *param_2)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 < _DAT_011983f0) {
    bVar1 = true;
    if (0.0 < param_1) {
      fVar2 = (float)(**(code **)(*param_2 + 0x30))();
      bVar1 = param_1 <= fVar2;
    }
    return bVar1;
  }
  return false;
}


