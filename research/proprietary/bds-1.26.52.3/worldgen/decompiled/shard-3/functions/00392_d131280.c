/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd231280 (ELF vaddr 0xd131280)
 * Label: caller-of-seed
 * Body:  [[0d231280, 0d2316d5]]
 * Ghidra: FUN_0d231280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d231280(undefined8 param_1,long *param_2,short param_3,long param_4,int param_5,
                  long *param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined8 uStack_a0;
  int iStack_98;
  float fStack_94;
  undefined4 **ppuStack_90;
  int iStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  uint uStack_40;
  undefined4 *puStack_38;
  
  uStack_a0 = param_4;
  iStack_98 = param_5;
  plVar6 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
  iVar3 = (**(code **)(*plVar6 + 0x128))(plVar6);
  if (iVar3 != 0) {
    uStack_80 = param_1;
    if ((param_3 == 0x10) || (param_3 == 2)) {
      uStack_70 = (undefined *)(param_4 + -0x100000000);
      puStack_68 = (undefined *)CONCAT44(puStack_68._4_4_,param_5);
      uVar7 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_70);
      param_6 = (long *)CONCAT71((int7)((ulong)param_6 >> 8),1);
      if ((param_3 != 2) && (param_3 != 0x10)) {
        uVar4 = func_0x0c848640(uVar7,param_2,uStack_70,(ulong)puStack_68 & 0xffffffff,uStack_80);
        param_6 = (long *)(ulong)uVar4;
      }
      goto LAB_0d231645;
    }
    if ((DAT_0f71db00 == '\0') && (iVar3 = func_0x04108328(&DAT_0f71db00), iVar3 != 0)) {
      func_0x0ee25490(0xf71dad8,0xc01414482e640881,&UNK_013d7922);
      func_0x0eee2f40(&UNK_048c16a0,0xf71dad8,0xf53dab8);
      func_0x0410844d(&DAT_0f71db00);
    }
    lVar8 = (**(code **)(*param_2 + 0x138))(param_2,&uStack_a0);
    if (lVar8 == 0) {
LAB_0d2313a9:
      plVar6 = (long *)(**(code **)(*param_2 + 0x158))(param_2);
      uVar7 = (**(code **)(*plVar6 + 0x2b0))(plVar6);
      uVar5 = (**(code **)(*(long *)param_2[7] + 0xd0))();
      uVar7 = func_0x0c8cca10(uVar7,uVar5);
    }
    else {
      if ((uStack_a0._4_4_ < *(short *)((long)param_2 + 0x42)) ||
         ((short)param_2[8] <= uStack_a0._4_4_)) goto LAB_0d2313a9;
      uStack_70 = (undefined *)
                  (CONCAT71(uStack_70._1_7_,(undefined1)uStack_a0) & 0xffffffffffffff0f);
      uStack_70 = (undefined *)
                  (CONCAT62(uStack_70._2_6_,CONCAT11((undefined1)iStack_98,(undefined1)uStack_70)) &
                  0xffffffffffff0fff);
      uStack_70._0_4_ =
           CONCAT22((short)((ulong)uStack_a0 >> 0x20) - *(short *)((long)param_2 + 0x42),
                    (undefined2)uStack_70);
      uVar7 = func_0x0caf8020(lVar8,&uStack_70);
    }
    lVar8 = (**(code **)(*param_2 + 0x150))(param_2);
    cVar2 = func_0x0c8cd620(**(undefined8 **)(lVar8 + 0x3b8),uVar7,0xf71dad8);
    if (((cVar2 != '\0') && (uStack_a0._4_4_ - 0x33U < 0x1c)) &&
       (fVar10 = (float)(**(code **)(*param_6 + 0x30))(param_6), fVar10 < _DAT_011986e0)) {
      fStack_94 = (float)(**(code **)(*param_6 + 0x30))(param_6);
      lVar8 = (**(code **)(*param_2 + 0x130))(param_2);
      iVar3 = (**(code **)(**(long **)(lVar8 + 0xa0) + 0x428))();
      uVar4 = -(iVar3 / 24000);
      if ((int)uVar4 < 0) {
        uVar4 = iVar3 / 24000;
      }
      if (fStack_94 < *(float *)(&UNK_01d41980 + (ulong)((iVar3 >> 0x1f ^ uVar4) & 7) * 4)) {
        fStack_94 = (float)(**(code **)(*param_2 + 200))(param_2,&uStack_a0);
        iVar3 = (**(code **)(*param_6 + 0x18))(param_6,8);
        if (fStack_94 <= (float)iVar3) {
          uVar4 = func_0x0d22efa0(uStack_80,param_2,param_3,uStack_a0,iStack_98);
          param_6 = (long *)(ulong)uVar4;
          goto LAB_0d231645;
        }
      }
    }
    if (param_3 == 1) {
      iVar3 = (int)uStack_a0 >> 4;
      iVar9 = iStack_98 >> 4;
      plVar6 = (long *)(**(code **)(*param_2 + 0x150))(param_2);
      lVar8 = (**(code **)(*plVar6 + 0x440))(plVar6);
      uStack_60 = (long)iVar9 * 0x5f24f + (long)iVar3 * 0x5ac0db +
                  (ulong)(uint)(iVar3 * iVar3) * 0x4c1906 + (ulong)(uint)(iVar9 * iVar9) * 0x4307a7
                  + lVar8 & 0xffffffffffff ^ 0x5e434e432;
      uStack_70 = &UNK_0f45e800;
      puStack_68 = &UNK_0f2bdd80;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_40 = 0;
      uStack_74 = 10;
      puStack_38 = &uStack_74;
      ppuStack_90 = &puStack_38;
      iVar3 = func_0x0d2e0c70(&ppuStack_90,&puStack_68);
      iVar9 = (**(code **)(*param_6 + 0x18))(param_6,10);
      bVar1 = true;
      if (((iVar9 == 0) && (iVar3 == 0)) && (uStack_a0._4_4_ < 0x28)) {
        ppuStack_90 = (undefined4 **)(uStack_a0 + -0x100000000);
        iStack_88 = iStack_98;
        uVar7 = (**(code **)(*param_2 + 0x10))(param_2,&ppuStack_90);
        uVar4 = func_0x0c848640(uVar7,param_2,ppuStack_90,iStack_88,uStack_80);
        param_6 = (long *)(ulong)uVar4;
        bVar1 = false;
      }
      if ((ulong)uStack_40 != 0xffffffff) {
        (**(code **)(&UNK_0f45c020 + (ulong)uStack_40 * 8))(&ppuStack_90,&puStack_68);
      }
      if (!bVar1) goto LAB_0d231645;
    }
  }
  param_6 = (long *)0x0;
LAB_0d231645:
  return (ulong)param_6 & 0xffffff01;
}


