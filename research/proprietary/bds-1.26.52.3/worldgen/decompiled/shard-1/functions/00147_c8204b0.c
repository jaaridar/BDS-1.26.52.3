/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9204b0 (ELF vaddr 0xc8204b0)
 * Label: string:world_gen
 * Body:  [[0c9204b0, 0c920995] [0c920998, 0c9209bd]]
 * Ghidra: FUN_0c9204b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9204b0(byte *param_1,uint *param_2,uint *param_3,undefined2 param_4,undefined4 param_5)

{
  uint *puVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  short sVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined2 uStack_d2;
  uint uStack_d0;
  undefined4 uStack_cc;
  uint **ppuStack_c8;
  byte *pbStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_70;
  char cStack_68;
  uint *puStack_60;
  undefined2 *puStack_58;
  undefined8 *puStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  byte **ppbStack_38;
  
  uStack_d2 = param_4;
  puStack_60 = param_2;
  if ((char)param_3[0xc] == '\x01') {
    uStack_ae = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8._1_3_ = (undefined3)_DAT_0159187c;
    uStack_b8 = CONCAT31(uStack_b8._1_3_,0x12);
    uStack_b4 = (undefined4)((ulong)_DAT_0159187c >> 0x18);
    uStack_b0 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
    uStack_af = DAT_01591884;
    pbStack_c0 = (byte *)0x838dddc83a29ed6c;
    uStack_40 = 1;
    ppbStack_38 = &pbStack_c0;
    puStack_58 = &uStack_d2;
    puStack_50 = &uStack_40;
    if ((ulong)param_3[10] != 0xffffffff) {
      ppuStack_c8 = &puStack_60;
      (**(code **)(&UNK_0f3e4eb8 + (ulong)param_3[10] * 8))(&ppuStack_c8,param_3 + 2);
      if ((uStack_b8 & 1) != 0) {
        func_0x0412a280(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
      }
      param_2[10] = *param_3;
      goto LAB_0c920910;
    }
    FUN_04931450();
  }
  else {
    uVar7 = *param_3;
    param_2[10] = uVar7;
    if ((char)param_3[0xf] == '\x01') {
      if ((uVar7 & 0xfffffffe) == 4) {
        param_2[8] = param_3[0xe];
        goto LAB_0c9205ce;
      }
      func_0x04a8bef0(1,3,param_5,&UNK_0136e2fb);
      cVar2 = (char)param_3[0x11];
    }
    else {
LAB_0c9205ce:
      cVar2 = (char)param_3[0x11];
    }
    if (cVar2 == '\x01') {
      if ((param_2[10] & 0xfffffffe) == 4) {
        param_2[9] = param_3[0x10];
      }
      else {
        func_0x04ab81b0(1,3,param_5,&UNK_011e307e);
      }
    }
    uStack_ae = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8._1_3_ = (undefined3)_DAT_0159187c;
    uStack_b8 = CONCAT31(uStack_b8._1_3_,0x12);
    uStack_b4 = (undefined4)((ulong)_DAT_0159187c >> 0x18);
    uStack_b0 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
    uStack_af = DAT_01591884;
    pbStack_c0 = (byte *)0x838dddc83a29ed6c;
    uStack_40 = 1;
    ppbStack_38 = &pbStack_c0;
    puStack_58 = &uStack_d2;
    puStack_50 = &uStack_40;
    pbStack_48 = param_1;
    if ((ulong)param_3[0x1a] != 0xffffffff) {
      ppuStack_c8 = &puStack_60;
      (**(code **)(&UNK_0f3e4eb8 + (ulong)param_3[0x1a] * 8))(&ppuStack_c8,param_3 + 0x12);
      uStack_cc = param_5;
      if ((uStack_b8 & 1) != 0) {
        func_0x0412a280(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
      }
      puVar1 = param_2 + 4;
      uStack_ae = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8._1_3_ = (undefined3)_DAT_0159187c;
      uStack_b8 = CONCAT31(uStack_b8._1_3_,0x12);
      uStack_b4 = (undefined4)((ulong)_DAT_0159187c >> 0x18);
      uStack_b0 = (undefined1)((ulong)_DAT_0159187c >> 0x38);
      uStack_af = DAT_01591884;
      pbStack_c0 = (byte *)0x838dddc83a29ed6c;
      uStack_40 = 1;
      ppbStack_38 = &pbStack_c0;
      puStack_58 = &uStack_d2;
      uStack_d2 = param_4;
      puStack_60 = puVar1;
      puStack_50 = &uStack_40;
      if ((ulong)param_3[0x24] == 0xffffffff) goto LAB_0c92097f;
      ppuStack_c8 = &puStack_60;
      (**(code **)(&UNK_0f3e4eb8 + (ulong)param_3[0x24] * 8))(&ppuStack_c8,param_3 + 0x1c);
      param_1 = pbStack_48;
      if ((uStack_b8 & 1) != 0) {
        func_0x0412a280(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
      }
      if (param_2[2] == 1) {
        uVar7 = *param_2;
        bVar8 = false;
        uVar9 = param_2[6];
joined_r0x0c9208ab:
        if (uVar9 == 1) goto LAB_0c9208ad;
LAB_0c920837:
        func_0x0b5bfbb0(&pbStack_c0,puVar1);
        param_5 = uStack_cc;
        if (cStack_68 == '\0') goto LAB_0c920910;
        iVar4 = (int)pbStack_c0;
        uVar9 = uStack_b8;
        if ((ulong)uStack_70 != 0xffffffff) {
          uStack_d0 = uStack_b8;
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_70 * 8))(&puStack_60,&uStack_b0);
          uVar9 = uStack_d0;
        }
        param_1 = pbStack_48;
        if ((iVar4 != 0) || (bVar8)) goto LAB_0c920910;
      }
      else {
        func_0x0b5bfbb0(&pbStack_c0,param_2);
        uVar7 = uStack_b8;
        if (cStack_68 == '\0') {
          bVar8 = true;
          uVar7 = 0;
          uVar9 = param_2[6];
          goto joined_r0x0c9208ab;
        }
        iVar4 = (int)pbStack_c0;
        bVar8 = (int)pbStack_c0 != 0;
        if ((ulong)uStack_70 != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_70 * 8))(&puStack_60,&uStack_b0);
        }
        if (iVar4 != 0) {
          uVar7 = 0;
        }
        param_1 = pbStack_48;
        if (param_2[6] != 1) goto LAB_0c920837;
LAB_0c9208ad:
        uVar9 = *puVar1;
        param_5 = uStack_cc;
        if (bVar8) goto LAB_0c920910;
      }
      *(undefined1 *)(param_2 + 0xd) = 1;
      uStack_d0 = uVar9;
      fVar10 = (float)func_0x0eee3b20(uVar7);
      param_2[0xb] = (int)fVar10;
      fVar11 = (float)func_0x0eee3b20();
      param_2[0xc] = (int)fVar11;
      if ((int)fVar11 <= (int)fVar10) {
        func_0x05890e00(1,3,param_5,&UNK_0148a8aa);
      }
LAB_0c920910:
      if ((param_2[2] != 1) &&
         (((param_2[2] != 0 || (*(long **)param_2 == (long *)0x0)) ||
          (sVar5 = (**(code **)(**(long **)param_2 + 0x68))(), sVar5 == -1)))) {
        if ((*param_1 & 1) == 0) {
          pbStack_c0 = param_1 + 1;
        }
        else {
          pbStack_c0 = *(byte **)(param_1 + 0x10);
        }
        func_0x0c9209c0(1,3,param_5,&UNK_014a5312,&pbStack_c0);
      }
      return;
    }
  }
  FUN_04931450();
LAB_0c92097f:
  uVar6 = FUN_04931450();
  uVar6 = func_0x04882e20(uVar6);
  uVar6 = func_0x04882e20(uVar6);
  if ((uStack_b8 & 1) != 0) {
    func_0x0412a280(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}



/* ---- referenced strings ----
 * 0x159187c  world_gen
 */
