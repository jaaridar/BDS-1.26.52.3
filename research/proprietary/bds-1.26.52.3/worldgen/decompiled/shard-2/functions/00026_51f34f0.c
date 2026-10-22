/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f34f0 (ELF vaddr 0x51f34f0)
 * Label: VanillaSurfaceBuilders::MesaSurfaceBuilder::vslot3
 * Body:  [[052f34f0, 052f3652]]
 * Ghidra: wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__MesaSurfaceBuilder__vslot3(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  short *psVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    if ((DAT_0f5573f8 == '\0') && (iVar1 = func_0x04108328(&DAT_0f5573f8), iVar1 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5573f0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573f8);
    }
    for (psVar2 = (short *)*param_2; psVar2 != (short *)param_2[1]; psVar2 = psVar2 + 8) {
      if (*psVar2 == _DAT_0f5573f0) {
        lVar3 = *(long *)(psVar2 + 4);
        if (lVar3 != 0) goto LAB_052f3544;
        break;
      }
    }
  }
  lVar3 = FUN_05346af0(param_2);
LAB_052f3544:
  func_0x0c852bf0(lVar3);
  if (*(char *)(param_2 + 3) == '\x01') {
    if ((DAT_0f557388 == '\0') && (iVar1 = func_0x04108328(&DAT_0f557388), iVar1 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f557380 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f557388);
    }
    for (psVar2 = (short *)*param_2; psVar2 != (short *)param_2[1]; psVar2 = psVar2 + 8) {
      if (*psVar2 == _DAT_0f557380) {
        lVar3 = *(long *)(psVar2 + 4);
        if (lVar3 == 0) {
          return;
        }
        if (*(long *)(lVar3 + 8) == 0) {
          uVar4 = func_0x0cc41df0(0xf6ff9e0,0xf71a530,1);
          *(undefined8 *)(lVar3 + 8) = uVar4;
        }
        if (*(long *)(lVar3 + 0x10) != 0) {
          return;
        }
        uVar4 = func_0x0cc41df0(0xf6ff9e0,0xf719ef0,1);
        *(undefined8 *)(lVar3 + 0x10) = uVar4;
        return;
      }
    }
  }
  return;
}


