/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f5990 (ELF vaddr 0x51f5990)
 * Label: VanillaSurfaceBuilders::SwampSurfaceBuilder::vslot4
 * Body:  [[052f5990, 052f5a8e]]
 * Ghidra: wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wg_VanillaSurfaceBuilders__SwampSurfaceBuilder__vslot4(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  
  if ((DAT_0f5573f8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5573f8), iVar2 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5573f0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5573f8);
  }
  psVar3 = (short *)*param_2;
  while( true ) {
    if (psVar3 == (short *)param_2[1]) {
      return false;
    }
    if (*psVar3 == _DAT_0f5573f0) break;
    psVar3 = psVar3 + 8;
  }
  if ((DAT_0f557398 == '\0') && (iVar2 = func_0x04108328(&DAT_0f557398), iVar2 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f557390 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f557398);
  }
  psVar3 = (short *)*param_2;
  if (psVar3 == (short *)param_2[1]) {
    return false;
  }
  do {
    psVar4 = psVar3 + 8;
    bVar1 = *psVar3 == _DAT_0f557390;
    if (*psVar3 == _DAT_0f557390) {
      return bVar1;
    }
    psVar3 = psVar4;
  } while (psVar4 != (short *)param_2[1]);
  return bVar1;
}


