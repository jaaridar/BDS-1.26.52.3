/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4abead0 (ELF vaddr 0x49bead0)
 * Label: NoSurfaceOreFeature::vslot2
 * Body:  [[04abead0, 04abeb70] [04abeb80, 04abec09] [04abec10, 04abed07]]
 * Ghidra: wg_NoSurfaceOreFeature__vslot2
 */


undefined1  [16] wg_NoSurfaceOreFeature__vslot2(long param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_80;
  int iStack_78;
  int iStack_70;
  int iStack_6c;
  undefined1 uStack_68;
  uint7 uStack_67;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  ulong *puStack_38;
  
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 < *(int *)(param_1 + 0x10) + -1) {
    iVar3 = (**(code **)(*(long *)param_2[3] + 0x18))
                      ((long *)param_2[3],*(int *)(param_1 + 0x10) - iVar9);
    iVar9 = iVar9 + iVar3;
  }
  lStack_50 = func_0x0c6e9230(param_1 + 0x18);
  uVar11 = 0;
  if (iVar9 < 1 || lStack_50 == 0) {
    uVar8 = 0;
  }
  else {
    puStack_38 = param_2 + 1;
    lStack_40 = param_1 + 0xc0;
    lStack_48 = param_1 + 0x168;
    iVar3 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    iStack_70 = iVar9;
    do {
      iVar10 = (int)uVar11;
      iVar9 = iVar10 + (uint)(iVar10 == 0);
      iStack_78 = (int)puStack_38[1];
      uStack_80 = *puStack_38;
      if (iVar3 == 0) {
        uStack_80._4_4_ = (int)(uStack_80 >> 0x20);
        iVar6 = uStack_80._4_4_;
        iVar4 = (int)uStack_80;
      }
      else {
        do {
          bVar1 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],6);
          uVar11 = (ulong)bVar1;
          iVar4 = *(int *)(&UNK_019b3c50 + uVar11 * 0xc) + (int)uStack_80;
          iVar6 = *(int *)(&UNK_019b3c54 + uVar11 * 0xc) + uStack_80._4_4_;
          iStack_78 = *(int *)(&UNK_019b3c58 + uVar11 * 0xc) + iStack_78;
          uStack_80 = CONCAT44(iVar6,iVar4);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      lVar7 = (long)iVar6 - (long)*(int *)((long)param_2 + 0xc);
      iVar9 = iStack_70;
      if ((ulong)(((long)iStack_78 - (long)*(int *)(param_2 + 2)) *
                  ((long)iStack_78 - (long)*(int *)(param_2 + 2)) +
                 lVar7 * lVar7 +
                 ((long)iVar4 - (long)*(int *)(param_2 + 1)) *
                 ((long)iVar4 - (long)*(int *)(param_2 + 1))) < 0x25) {
        uVar5 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,&uStack_80);
        cVar2 = func_0x0c6e95e0(lStack_40,uVar5);
        iVar9 = iStack_70;
        if ((cVar2 != '\0') &&
           (cVar2 = func_0x0d3e8b40(*param_2,&uStack_80,lStack_48), cVar2 == '\0')) {
          (**(code **)(*(long *)*param_2 + 0x60))((long *)*param_2,&uStack_80,lStack_50,3);
          uStack_60 = uStack_80;
          iStack_6c = iStack_78;
          uStack_58 = uStack_80 >> 8;
          uStack_67 = (uint7)(uint3)((uint)iStack_78 >> 8);
          uStack_68 = 1;
        }
      }
      iVar3 = iVar3 + 1;
      uVar11 = (ulong)(iVar10 + 2);
    } while (iVar3 != iVar9);
    uVar11 = uStack_60 & 0xff | uStack_58 << 8;
    uVar8 = (ulong)CONCAT14(uStack_68,iStack_6c);
  }
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = uVar11;
  return auVar12;
}


