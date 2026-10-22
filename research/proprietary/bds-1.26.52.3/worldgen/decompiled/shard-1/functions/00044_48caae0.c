/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49caae0 (ELF vaddr 0x48caae0)
 * Label: br::worldgen::WorldGenRandom::vslot11
 * Body:  [[049caae0, 049caafe]]
 * Ghidra: wg_br__worldgen__WorldGenRandom__vslot11
 */


bool wg_br__worldgen__WorldGenRandom__vslot11(long *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_3) {
    bVar1 = true;
    if (param_2 < param_3) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3);
      bVar1 = iVar2 < param_2;
    }
    return bVar1;
  }
  return false;
}


