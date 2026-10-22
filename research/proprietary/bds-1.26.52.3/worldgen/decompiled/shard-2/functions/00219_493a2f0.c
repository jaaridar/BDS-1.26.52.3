/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a3a2f0 (ELF vaddr 0x493a2f0)
 * Label: callee-of:0x493a160
 * Body:  [[04a3a2f0, 04a3a39c] [04a3a3a0, 04a3a421] [04a3a430, 04a3a589] [04a3a590, 04a3a5e2] [04a3a5f0, 04a3a745] [04a3a750, 04a3a7a2] [04a3a7b0, 04a3a905] [04a3a910, 04a3a962] [04a3a970, 04a3aae2]]
 * Ghidra: FUN_04a3a2f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04a3a2f0(long param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  int *piStack_90;
  long *plStack_88;
  long lStack_80;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  iStack_c0 = *(int *)((long)param_2 + 0x24);
  if (iStack_c0 != 0) {
    uStack_48 = (ulong)*(uint *)(param_2 + 3);
    iStack_c4 = *(int *)((long)param_2 + 0x1c);
    uVar7 = *(uint *)(param_2 + 4);
    uStack_38 = (ulong)uVar7;
    param_1 = param_1 + 8;
    iStack_6c = uVar7 + 8;
    iStack_70 = uVar7 + 0x10;
    iStack_74 = uVar7 + 0x18;
    lStack_50 = (long)((int)uVar7 >> 2);
    lStack_58 = (long)(iStack_6c >> 2);
    uVar7 = 0;
    lStack_60 = (long)(iStack_70 >> 2);
    lStack_68 = (long)(iStack_74 >> 2);
    lStack_b8 = param_1;
    piStack_90 = param_3;
    plStack_88 = param_2;
    do {
      uStack_40 = (ulong)uVar7;
      iStack_bc = (int)uStack_48 + uVar7 * 8;
      lStack_80 = (long)(iStack_bc >> 2);
      lStack_a0 = (long)piStack_90[2] * (lStack_80 - *piStack_90) * 0x28 + *(long *)(piStack_90 + 4)
                  + (lStack_50 - piStack_90[1]) * 0x28;
      uStack_98 = 0;
      iVar4 = iStack_c0;
      iVar8 = iStack_c4;
      do {
        iStack_d4 = iStack_bc;
        iStack_cc = (int)uStack_38;
        uStack_c8 = 1;
        iStack_d0 = iVar8;
        uVar5 = func_0x04a5de10(param_1,&iStack_d4,lStack_a0,&uStack_98);
        puVar9 = (undefined8 *)param_2[1];
        if (puVar9 < (undefined8 *)param_2[2]) {
          *puVar9 = uVar5;
          puVar9 = puVar9 + 1;
        }
        else {
          lVar6 = *param_2;
          lVar11 = (long)puVar9 - lVar6;
          uVar1 = (lVar11 >> 3) + 1;
          if (0x1fffffffffffffff < uVar1) goto LAB_04a3aad8;
          uVar12 = param_2[2] - lVar6;
          uVar10 = (long)uVar12 >> 2;
          if ((ulong)((long)uVar12 >> 2) <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar12) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (0x1fffffffffffffff < uVar10) goto LAB_04a3aadd;
          uStack_b0 = uVar5;
          lStack_a8 = lVar6;
          lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10 * 8);
          if (lVar6 == 0) {
            FUN_0eec74c0(uVar10 * 8,0);
          }
          lVar3 = lStack_a8;
          *(undefined8 *)(lVar6 + lVar11) = uStack_b0;
          puVar9 = (undefined8 *)(lVar6 + lVar11 + 8);
          lVar13 = lVar6 + lVar11 + (lVar11 >> 3) * -8;
          memcpy(lVar13,lStack_a8,lVar11);
          param_2 = plStack_88;
          *plStack_88 = lVar13;
          plStack_88[1] = (long)puVar9;
          plStack_88[2] = lVar6 + uVar10 * 8;
          param_1 = lStack_b8;
          if (lVar3 != 0) {
            func_0x0412a280(lVar3,uVar12);
            param_1 = lStack_b8;
          }
        }
        param_2[1] = (long)puVar9;
        iVar8 = iVar8 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lStack_a0 = (long)piStack_90[2] * (lStack_80 - *piStack_90) * 0x28 + *(long *)(piStack_90 + 4)
                  + (lStack_58 - piStack_90[1]) * 0x28;
      uStack_98 = 0;
      iVar4 = iStack_c0;
      iVar8 = iStack_c4;
      do {
        iStack_d4 = iStack_bc;
        iStack_cc = iStack_6c;
        uStack_c8 = 1;
        iStack_d0 = iVar8;
        uVar5 = func_0x04a5de10(param_1,&iStack_d4,lStack_a0,&uStack_98);
        puVar9 = (undefined8 *)param_2[1];
        if (puVar9 < (undefined8 *)param_2[2]) {
          *puVar9 = uVar5;
          puVar9 = puVar9 + 1;
        }
        else {
          lVar6 = *param_2;
          lVar11 = (long)puVar9 - lVar6;
          uVar1 = (lVar11 >> 3) + 1;
          if (0x1fffffffffffffff < uVar1) goto LAB_04a3aad8;
          uVar12 = param_2[2] - lVar6;
          uVar10 = (long)uVar12 >> 2;
          if ((ulong)((long)uVar12 >> 2) <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar12) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (0x1fffffffffffffff < uVar10) goto LAB_04a3aadd;
          uStack_b0 = uVar5;
          lStack_a8 = lVar6;
          lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10 * 8);
          if (lVar6 == 0) {
            FUN_0eec74c0(uVar10 * 8,0);
          }
          lVar3 = lStack_a8;
          *(undefined8 *)(lVar6 + lVar11) = uStack_b0;
          puVar9 = (undefined8 *)(lVar6 + lVar11 + 8);
          lVar13 = lVar6 + lVar11 + (lVar11 >> 3) * -8;
          memcpy(lVar13,lStack_a8,lVar11);
          param_2 = plStack_88;
          *plStack_88 = lVar13;
          plStack_88[1] = (long)puVar9;
          plStack_88[2] = lVar6 + uVar10 * 8;
          param_1 = lStack_b8;
          if (lVar3 != 0) {
            func_0x0412a280(lVar3,uVar12);
            param_1 = lStack_b8;
          }
        }
        param_2[1] = (long)puVar9;
        iVar8 = iVar8 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lStack_a0 = (long)piStack_90[2] * (lStack_80 - *piStack_90) * 0x28 + *(long *)(piStack_90 + 4)
                  + (lStack_60 - piStack_90[1]) * 0x28;
      uStack_98 = 0;
      iVar4 = iStack_c0;
      iVar8 = iStack_c4;
      do {
        iStack_d4 = iStack_bc;
        iStack_cc = iStack_70;
        uStack_c8 = 1;
        iStack_d0 = iVar8;
        uVar5 = func_0x04a5de10(param_1,&iStack_d4,lStack_a0,&uStack_98);
        puVar9 = (undefined8 *)param_2[1];
        if (puVar9 < (undefined8 *)param_2[2]) {
          *puVar9 = uVar5;
          puVar9 = puVar9 + 1;
        }
        else {
          lVar6 = *param_2;
          lVar11 = (long)puVar9 - lVar6;
          uVar1 = (lVar11 >> 3) + 1;
          if (0x1fffffffffffffff < uVar1) goto LAB_04a3aad8;
          uVar12 = param_2[2] - lVar6;
          uVar10 = (long)uVar12 >> 2;
          if ((ulong)((long)uVar12 >> 2) <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar12) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (0x1fffffffffffffff < uVar10) goto LAB_04a3aadd;
          uStack_b0 = uVar5;
          lStack_a8 = lVar6;
          lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10 * 8);
          if (lVar6 == 0) {
            FUN_0eec74c0(uVar10 * 8,0);
          }
          lVar3 = lStack_a8;
          *(undefined8 *)(lVar6 + lVar11) = uStack_b0;
          puVar9 = (undefined8 *)(lVar6 + lVar11 + 8);
          lVar13 = lVar6 + lVar11 + (lVar11 >> 3) * -8;
          memcpy(lVar13,lStack_a8,lVar11);
          param_2 = plStack_88;
          *plStack_88 = lVar13;
          plStack_88[1] = (long)puVar9;
          plStack_88[2] = lVar6 + uVar10 * 8;
          param_1 = lStack_b8;
          if (lVar3 != 0) {
            func_0x0412a280(lVar3,uVar12);
            param_1 = lStack_b8;
          }
        }
        param_2[1] = (long)puVar9;
        iVar8 = iVar8 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lStack_a0 = (long)piStack_90[2] * (lStack_80 - *piStack_90) * 0x28 + *(long *)(piStack_90 + 4)
                  + (lStack_68 - piStack_90[1]) * 0x28;
      uStack_98 = 0;
      iVar4 = iStack_c0;
      iVar8 = iStack_c4;
      do {
        iStack_d4 = iStack_bc;
        iStack_cc = iStack_74;
        uStack_c8 = 1;
        iStack_d0 = iVar8;
        uVar5 = func_0x04a5de10(param_1,&iStack_d4,lStack_a0,&uStack_98);
        puVar9 = (undefined8 *)param_2[1];
        if (puVar9 < (undefined8 *)param_2[2]) {
          *puVar9 = uVar5;
          puVar9 = puVar9 + 1;
        }
        else {
          lVar6 = *param_2;
          lVar11 = (long)puVar9 - lVar6;
          uVar1 = (lVar11 >> 3) + 1;
          if (0x1fffffffffffffff < uVar1) {
LAB_04a3aad8:
            func_0x04a62b20();
LAB_04a3aadd:
            func_0x04882eb0();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar12 = param_2[2] - lVar6;
          uVar10 = (long)uVar12 >> 2;
          if ((ulong)((long)uVar12 >> 2) <= uVar1) {
            uVar10 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar12) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (0x1fffffffffffffff < uVar10) goto LAB_04a3aadd;
          uStack_b0 = uVar5;
          lStack_a8 = lVar6;
          lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar10 * 8);
          if (lVar6 == 0) {
            FUN_0eec74c0(uVar10 * 8,0);
          }
          lVar3 = lStack_a8;
          *(undefined8 *)(lVar6 + lVar11) = uStack_b0;
          puVar9 = (undefined8 *)(lVar6 + lVar11 + 8);
          lVar13 = lVar6 + lVar11 + (lVar11 >> 3) * -8;
          memcpy(lVar13,lStack_a8,lVar11);
          param_2 = plStack_88;
          *plStack_88 = lVar13;
          plStack_88[1] = (long)puVar9;
          plStack_88[2] = lVar6 + uVar10 * 8;
          param_1 = lStack_b8;
          if (lVar3 != 0) {
            func_0x0412a280(lVar3,uVar12);
            param_1 = lStack_b8;
          }
        }
        param_2[1] = (long)puVar9;
        iVar8 = iVar8 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar7 = (int)uStack_40 + 1;
    } while (uVar7 != 4);
  }
  return;
}


