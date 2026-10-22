/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f39e0 (ELF vaddr 0x51f39e0)
 * Label: VanillaSurfaceBuilders::NoiseGradientSurfaceBuilder::vslot4
 * Body:  [[052f39e0, 052f3a65]]
 * Ghidra: wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_VanillaSurfaceBuilders__NoiseGradientSurfaceBuilder__vslot4
               (undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  
  if ((DAT_0f5573b8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f5573b8), iVar3 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5573b0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5573b8);
  }
  psVar1 = (short *)*param_2;
  if (psVar1 != (short *)param_2[1]) {
    do {
      psVar4 = psVar1 + 8;
      bVar2 = *psVar1 == _DAT_0f5573b0;
      if (*psVar1 == _DAT_0f5573b0) {
        return bVar2;
      }
      psVar1 = psVar4;
    } while (psVar4 != (short *)param_2[1]);
    return bVar2;
  }
  return false;
}


