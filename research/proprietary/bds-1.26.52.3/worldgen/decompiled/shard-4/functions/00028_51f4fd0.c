/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52f4fd0 (ELF vaddr 0x51f4fd0)
 * Label: VanillaSurfaceBuilders::OceanFrozenSurfaceBuilder::vslot3
 * Body:  [[052f4fd0, 052f506d]]
 * Ghidra: wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__OceanFrozenSurfaceBuilder__vslot3
               (undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    if ((DAT_0f5573f8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5573f8), iVar2 != 0)) {
      LOCK();
      UNLOCK();
      _DAT_0f5573f0 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f5573f8);
    }
    for (psVar3 = (short *)*param_2; psVar3 != (short *)param_2[1]; psVar3 = psVar3 + 8) {
      if (*psVar3 == _DAT_0f5573f0) {
        lVar4 = *(long *)(psVar3 + 4);
        if (lVar4 != 0) goto LAB_0c852bf0;
        break;
      }
    }
  }
  lVar4 = func_0x05346af0(param_2);
LAB_0c852bf0:
  if (*(long *)(lVar4 + 8) == 0) {
    uVar5 = func_0x0cc41df0(0xf6ff9e0,0xf718af0,1);
    *(undefined8 *)(lVar4 + 8) = uVar5;
    lVar1 = *(long *)(lVar4 + 0x10);
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x10);
  }
  if (lVar1 == 0) {
    uVar5 = func_0x0cc41df0(0xf6ff9e0,0xf7194f0,1);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    lVar1 = *(long *)(lVar4 + 0x18);
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x18);
  }
  if (lVar1 == 0) {
    uVar5 = func_0x0cc41df0(0xf6ff9e0,0xf714ce0,1);
    *(undefined8 *)(lVar4 + 0x18) = uVar5;
    lVar1 = *(long *)(lVar4 + 0x20);
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x20);
  }
  if (lVar1 == 0) {
    uVar5 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    lVar1 = *(long *)(lVar4 + 0x28);
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x28);
  }
  if (lVar1 != 0) {
    return;
  }
  uVar5 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  return;
}


