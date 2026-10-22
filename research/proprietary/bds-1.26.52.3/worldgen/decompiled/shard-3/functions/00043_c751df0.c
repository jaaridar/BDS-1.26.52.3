/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851df0 (ELF vaddr 0xc751df0)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot4
 * Body:  [[0c851df0, 0c851f99]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot4
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
  if (lVar6 == _DAT_0f713b90) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if ((*(undefined **)(lVar3 + 0xe8) == &DAT_0f713b90) && (_DAT_0f713bb0 == lVar1))
    goto LAB_0c851f25;
    bVar2 = *(byte *)(lVar3 + 0xd0);
    if ((bVar2 & 1) == 0) {
      uVar5 = (ulong)(bVar2 >> 1);
      if ((DAT_0f713b98 & 1) != 0) goto LAB_0c851e71;
LAB_0c851e56:
      if (uVar5 != DAT_0f713b98 >> 1) goto LAB_0c851ea9;
    }
    else {
      uVar5 = *(ulong *)(lVar3 + 0xd8);
      if ((DAT_0f713b98 & 1) == 0) goto LAB_0c851e56;
LAB_0c851e71:
      if (uVar5 != _DAT_0f713ba0) goto LAB_0c851ea9;
    }
    if ((bVar2 & 1) == 0) {
      lVar7 = lVar3 + 0xd1;
      if ((DAT_0f713b98 & 1) != 0) goto LAB_0c851f76;
LAB_0c851e95:
      iVar4 = func_0x0eee3000(lVar7,0xf713b99);
    }
    else {
      lVar7 = *(long *)(lVar3 + 0xe0);
      if ((DAT_0f713b98 & 1) == 0) goto LAB_0c851e95;
LAB_0c851f76:
      iVar4 = func_0x0eee3000(lVar7,_DAT_0f713ba8);
    }
    if (iVar4 == 0) {
      *(undefined **)(lVar3 + 0xe8) = &DAT_0f713b90;
      _DAT_0f713bb0 = lVar1;
      goto LAB_0c851f25;
    }
  }
LAB_0c851ea9:
  *(undefined8 *)(lVar3 + 0xe8) = 0;
  if (lVar6 == _DAT_0f713bb8) {
    bVar2 = *(byte *)(lVar3 + 0xd0);
    if ((bVar2 & 1) == 0) {
      uVar5 = (ulong)(bVar2 >> 1);
      if ((DAT_0f713bc0 & 1) != 0) goto LAB_0c851ef7;
LAB_0c851edc:
      if (uVar5 != DAT_0f713bc0 >> 1) goto LAB_0c851f23;
    }
    else {
      uVar5 = *(ulong *)(lVar3 + 0xd8);
      if ((DAT_0f713bc0 & 1) == 0) goto LAB_0c851edc;
LAB_0c851ef7:
      if (uVar5 != _DAT_0f713bc8) goto LAB_0c851f23;
    }
    if ((bVar2 & 1) == 0) {
      lVar6 = lVar3 + 0xd1;
      if ((DAT_0f713bc0 & 1) != 0) goto LAB_0c851f3d;
LAB_0c851f13:
      iVar4 = func_0x0eee3000(lVar6,0xf713bc1);
    }
    else {
      lVar6 = *(long *)(lVar3 + 0xe0);
      if ((DAT_0f713bc0 & 1) == 0) goto LAB_0c851f13;
LAB_0c851f3d:
      iVar4 = func_0x0eee3000(lVar6,_DAT_0f713bd0);
    }
    if (iVar4 == 0) {
      *(undefined **)(lVar3 + 0xe8) = &DAT_0f713bb8;
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      _DAT_0f713bd8 = lVar1;
      goto LAB_0c851f25;
    }
  }
LAB_0c851f23:
  unaff_RBX = 0;
LAB_0c851f25:
  return unaff_RBX & 0xffffffff;
}


