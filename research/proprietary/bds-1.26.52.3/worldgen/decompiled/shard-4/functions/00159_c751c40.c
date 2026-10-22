/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851c40 (ELF vaddr 0xc751c40)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot3
 * Body:  [[0c851c40, 0c851de9]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot3
                (undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong unaff_RBX;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_2 + 0x68);
  lVar1 = lVar3 + 200;
  lVar6 = *(long *)(lVar3 + 200);
  if (lVar6 == _DAT_0f713f00) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if ((*(undefined **)(lVar3 + 0xe8) == &DAT_0f713f00) && (_DAT_0f713f20 == lVar1))
    goto LAB_0c851d75;
    bVar2 = *(byte *)(lVar3 + 0xd0);
    if ((bVar2 & 1) == 0) {
      uVar5 = (ulong)(bVar2 >> 1);
      if ((DAT_0f713f08 & 1) != 0) goto LAB_0c851cc1;
LAB_0c851ca6:
      if (uVar5 != DAT_0f713f08 >> 1) goto LAB_0c851cf9;
    }
    else {
      uVar5 = *(ulong *)(lVar3 + 0xd8);
      if ((DAT_0f713f08 & 1) == 0) goto LAB_0c851ca6;
LAB_0c851cc1:
      if (uVar5 != _DAT_0f713f10) goto LAB_0c851cf9;
    }
    if ((bVar2 & 1) == 0) {
      lVar7 = lVar3 + 0xd1;
      if ((DAT_0f713f08 & 1) != 0) goto LAB_0c851dc6;
LAB_0c851ce5:
      iVar4 = bcmp(lVar7,0xf713f09);
    }
    else {
      lVar7 = *(long *)(lVar3 + 0xe0);
      if ((DAT_0f713f08 & 1) == 0) goto LAB_0c851ce5;
LAB_0c851dc6:
      iVar4 = bcmp(lVar7,_DAT_0f713f18);
    }
    if (iVar4 == 0) {
      *(undefined **)(lVar3 + 0xe8) = &DAT_0f713f00;
      _DAT_0f713f20 = lVar1;
      goto LAB_0c851d75;
    }
  }
LAB_0c851cf9:
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  if (lVar6 == _DAT_0f714b20) {
    bVar2 = *(byte *)(lVar3 + 0xd0);
    if ((bVar2 & 1) == 0) {
      uVar5 = (ulong)(bVar2 >> 1);
      if ((DAT_0f714b28 & 1) != 0) goto LAB_0c851d47;
LAB_0c851d2c:
      if (uVar5 != DAT_0f714b28 >> 1) goto LAB_0c851d73;
    }
    else {
      uVar5 = *(ulong *)(lVar3 + 0xd8);
      if ((DAT_0f714b28 & 1) == 0) goto LAB_0c851d2c;
LAB_0c851d47:
      if (uVar5 != _DAT_0f714b30) goto LAB_0c851d73;
    }
    if ((bVar2 & 1) == 0) {
      lVar6 = lVar3 + 0xd1;
      if ((DAT_0f714b28 & 1) != 0) goto LAB_0c851d8d;
LAB_0c851d63:
      iVar4 = bcmp(lVar6,0xf714b29);
    }
    else {
      lVar6 = *(long *)(lVar3 + 0xe0);
      if ((DAT_0f714b28 & 1) == 0) goto LAB_0c851d63;
LAB_0c851d8d:
      iVar4 = bcmp(lVar6,_DAT_0f714b38);
    }
    if (iVar4 == 0) {
      *(undefined **)(lVar3 + 0xe8) = &DAT_0f714b20;
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      _DAT_0f714b40 = lVar1;
      goto LAB_0c851d75;
    }
  }
LAB_0c851d73:
  unaff_RBX = 0;
LAB_0c851d75:
  return unaff_RBX & 0xffffffff;
}


