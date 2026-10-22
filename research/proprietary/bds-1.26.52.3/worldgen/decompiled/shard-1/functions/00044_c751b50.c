/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc851b50 (ELF vaddr 0xc751b50)
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::MaterialHelper::vslot2
 * Body:  [[0c851b50, 0c851c3e]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__MaterialHelper__vslot2
                (undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 unaff_RBX;
  ulong uVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_2 + 0x68);
  if (*(long *)(lVar2 + 200) == _DAT_0f71bd88) {
    uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((*(undefined **)(lVar2 + 0xe8) == &DAT_0f71bd88) && (_DAT_0f71bda8 == lVar2 + 200))
    goto LAB_0c851c05;
    bVar1 = *(byte *)(lVar2 + 0xd0);
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
      if ((DAT_0f71bd90 & 1) != 0) goto LAB_0c851bcc;
LAB_0c851bb1:
      if (uVar4 != DAT_0f71bd90 >> 1) goto LAB_0c851bf8;
    }
    else {
      uVar4 = *(ulong *)(lVar2 + 0xd8);
      if ((DAT_0f71bd90 & 1) == 0) goto LAB_0c851bb1;
LAB_0c851bcc:
      if (uVar4 != _DAT_0f71bd98) goto LAB_0c851bf8;
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = lVar2 + 0xd1;
      if ((DAT_0f71bd90 & 1) != 0) goto LAB_0c851c1f;
LAB_0c851be8:
      iVar3 = func_0x0eee3000(lVar6,0xf71bd91);
    }
    else {
      lVar6 = *(long *)(lVar2 + 0xe0);
      if ((DAT_0f71bd90 & 1) == 0) goto LAB_0c851be8;
LAB_0c851c1f:
      iVar3 = func_0x0eee3000(lVar6,_DAT_0f71bda0);
    }
    if (iVar3 == 0) {
      *(undefined **)(lVar2 + 0xe8) = &DAT_0f71bd88;
      _DAT_0f71bda8 = lVar2 + 200;
      goto LAB_0c851c05;
    }
  }
LAB_0c851bf8:
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  uVar5 = 0;
LAB_0c851c05:
  return uVar5 & 0xffffffff;
}


