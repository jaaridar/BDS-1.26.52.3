/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x633d5d0 (ELF vaddr 0x623d5d0)
 * Label: string:{}, ()NSt3__110__function6__funcIZN6Editor8Services19EditorJ
 * Body:  [[0633d5d0, 0633d7ba] [0633d7c0, 0633d989] [0633d990, 0633db39] [0633db40, 0633dccd]]
 * Ghidra: FUN_0633d5d0
 */


void FUN_0633d5d0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  int aiStack_118 [2];
  long *plStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined1 uStack_f4;
  undefined4 uStack_f3;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined4 uStack_c3;
  undefined3 uStack_bf;
  undefined8 uStack_bc;
  undefined4 uStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0x8000;
  uStack_f4 = 0x20;
  uStack_ef = 0xffffffff000000;
  uStack_f3 = 0;
  uStack_c8 = 0x8000;
  uStack_c4 = 0x20;
  uStack_c3 = 0;
  uStack_bf = 0;
  uStack_bc = 0xffffffff;
  uStack_a8 = 0;
  puStack_98 = &UNK_017383bb;
  uStack_90 = 2;
  uStack_68 = 0;
  puStack_88 = &UNK_017383b9;
  uStack_80 = 1;
  puStack_78 = &UNK_017383ba;
  uStack_70 = 1;
  uStack_60 = &UNK_017383bb;
  uStack_58 = 2;
  puStack_50 = &UNK_017383bd;
  lStack_48 = 1;
  puStack_40 = &UNK_017383be;
  lStack_38 = 1;
  pcVar5 = (char *)*param_2;
  lVar17 = param_2[1];
  pcVar21 = pcVar5;
  if ((lVar17 != 0) && (*pcVar5 == 'n')) {
    pcVar21 = pcVar5 + 1;
    puStack_40 = (undefined *)0x0;
    lStack_38 = 0;
    puStack_50 = (undefined *)0x0;
    lStack_48 = 0;
    uStack_60 = (undefined *)0x0;
    uStack_58 = 0;
  }
  if ((pcVar21 != pcVar5 + lVar17) && (*pcVar21 != '}')) {
    func_0x0470d660(&UNK_0119b08c);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *param_2 = (long)pcVar21;
  lVar15 = lVar17 - ((long)pcVar21 - (long)pcVar5);
  param_2[1] = lVar15;
  uVar14 = 0x8001;
  if ((lVar15 != 0) && (*pcVar21 != '}')) {
    func_0x0489c9a0(pcVar21,pcVar5 + lVar17,&uStack_f8,param_2,0xd);
    uVar14 = (uStack_f8 & 0xfffffff8) + 1;
  }
  uStack_f8 = uVar14;
  func_0x0633dcd0(&uStack_c8,param_2);
  lVar17 = *param_2;
  *param_2 = (long)pcVar21;
  param_2[1] = param_2[1] + (lVar17 - (long)pcVar21);
  if (lStack_48 != 0) {
    plVar6 = (long *)*param_3;
    puVar18 = puStack_50 + lStack_48;
    lVar17 = plVar6[1];
    puVar24 = puStack_50;
    do {
      uVar22 = (long)puVar18 - (long)puVar24;
      uVar19 = plVar6[2];
      if (uVar19 < lVar17 + uVar22) {
        (*(code *)plVar6[3])();
        lVar17 = plVar6[1];
        uVar19 = plVar6[2];
      }
      uVar16 = uVar19 - lVar17;
      if (uVar22 <= uVar19 - lVar17) {
        uVar16 = uVar22;
      }
      if (uVar16 != 0) {
        lVar23 = *plVar6;
        lVar15 = lVar23 + lVar17;
        if ((uVar16 < 4) || ((ulong)(lVar15 - (long)puVar24) < 0x20)) {
          uVar19 = 0;
LAB_0633d82e:
          uVar20 = uVar19;
          for (uVar22 = uVar16 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined *)(lVar15 + uVar20) = puVar24[uVar20];
            uVar20 = uVar20 + 1;
          }
          if (uVar19 - uVar16 < 0xfffffffffffffffd) {
            lVar17 = lVar17 + lVar23;
            do {
              *(undefined *)(lVar17 + uVar20) = puVar24[uVar20];
              *(undefined *)(lVar17 + 1 + uVar20) = puVar24[uVar20 + 1];
              *(undefined *)(lVar17 + 2 + uVar20) = puVar24[uVar20 + 2];
              *(undefined *)(lVar17 + 3 + uVar20) = puVar24[uVar20 + 3];
              uVar20 = uVar20 + 4;
            } while (uVar16 != uVar20);
          }
        }
        else if (uVar16 < 0x20) {
          uVar22 = 0;
LAB_0633d900:
          uVar19 = uVar16 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar15 + uVar22) = *(undefined4 *)(puVar24 + uVar22);
            uVar22 = uVar22 + 4;
          } while (uVar19 != uVar22);
          if (uVar16 != uVar19) goto LAB_0633d82e;
        }
        else {
          uVar19 = uVar16 & 0xffffffffffffffe0;
          uVar22 = 0;
          do {
            puVar2 = (undefined4 *)(puVar24 + uVar22);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            uVar12 = *(undefined8 *)(puVar24 + uVar22 + 0x10);
            uVar13 = *(undefined8 *)((long)(puVar24 + uVar22 + 0x10) + 8);
            puVar4 = (undefined4 *)(lVar23 + lVar17 + uVar22);
            *puVar4 = *puVar2;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            puVar3 = (undefined8 *)(lVar23 + lVar17 + 0x10 + uVar22);
            *puVar3 = uVar12;
            puVar3[1] = uVar13;
            uVar22 = uVar22 + 0x20;
          } while (uVar19 != uVar22);
          if (uVar16 != uVar19) {
            uVar22 = uVar19;
            if ((uVar16 & 0x1c) == 0) goto LAB_0633d82e;
            goto LAB_0633d900;
          }
        }
        lVar17 = plVar6[1];
      }
      lVar17 = lVar17 + uVar16;
      plVar6[1] = lVar17;
      puVar24 = puVar24 + uVar16;
    } while (puVar24 != puVar18);
  }
  aiStack_118[0] = 0;
  uStack_108 = (undefined4)uStack_60;
  uStack_104 = uStack_60._4_4_;
  uStack_100 = (undefined4)uStack_58;
  uStack_fc = uStack_58._4_4_;
  plStack_110 = param_3;
  func_0x0633ddb0(aiStack_118,&uStack_f8,param_1);
  if ((0 < aiStack_118[0]) && (CONCAT44(uStack_fc,uStack_100) != 0)) {
    lVar15 = CONCAT44(uStack_104,uStack_108);
    plVar6 = (long *)*plStack_110;
    lVar23 = CONCAT44(uStack_fc,uStack_100) + lVar15;
    lVar17 = plVar6[1];
    do {
      uVar22 = lVar23 - lVar15;
      uVar19 = plVar6[2];
      if (uVar19 < lVar17 + uVar22) {
        (*(code *)plVar6[3])();
        lVar17 = plVar6[1];
        uVar19 = plVar6[2];
      }
      uVar16 = uVar19 - lVar17;
      if (uVar22 <= uVar19 - lVar17) {
        uVar16 = uVar22;
      }
      if (uVar16 != 0) {
        lVar7 = *plVar6;
        lVar1 = lVar7 + lVar17;
        if ((uVar16 < 4) || ((ulong)(lVar1 - lVar15) < 0x20)) {
          uVar19 = 0;
LAB_0633d9fe:
          uVar20 = uVar19;
          for (uVar22 = uVar16 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined1 *)(lVar1 + uVar20) = *(undefined1 *)(lVar15 + uVar20);
            uVar20 = uVar20 + 1;
          }
          if (uVar19 - uVar16 < 0xfffffffffffffffd) {
            lVar17 = lVar17 + lVar7;
            do {
              *(undefined1 *)(lVar17 + uVar20) = *(undefined1 *)(lVar15 + uVar20);
              *(undefined1 *)(lVar17 + 1 + uVar20) = *(undefined1 *)(lVar15 + 1 + uVar20);
              *(undefined1 *)(lVar17 + 2 + uVar20) = *(undefined1 *)(lVar15 + 2 + uVar20);
              *(undefined1 *)(lVar17 + 3 + uVar20) = *(undefined1 *)(lVar15 + 3 + uVar20);
              uVar20 = uVar20 + 4;
            } while (uVar16 != uVar20);
          }
        }
        else if (uVar16 < 0x20) {
          uVar22 = 0;
LAB_0633dad0:
          uVar19 = uVar16 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar1 + uVar22) = *(undefined4 *)(lVar15 + uVar22);
            uVar22 = uVar22 + 4;
          } while (uVar19 != uVar22);
          if (uVar16 != uVar19) goto LAB_0633d9fe;
        }
        else {
          uVar19 = uVar16 & 0xffffffffffffffe0;
          uVar22 = 0;
          do {
            puVar2 = (undefined4 *)(lVar15 + uVar22);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            puVar3 = (undefined8 *)(lVar15 + 0x10 + uVar22);
            uVar12 = *puVar3;
            uVar13 = puVar3[1];
            puVar4 = (undefined4 *)(lVar7 + lVar17 + uVar22);
            *puVar4 = *puVar2;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            puVar3 = (undefined8 *)(lVar7 + lVar17 + 0x10 + uVar22);
            *puVar3 = uVar12;
            puVar3[1] = uVar13;
            uVar22 = uVar22 + 0x20;
          } while (uVar19 != uVar22);
          if (uVar16 != uVar19) {
            uVar22 = uVar19;
            if ((uVar16 & 0x1c) == 0) goto LAB_0633d9fe;
            goto LAB_0633dad0;
          }
        }
        lVar17 = plVar6[1];
      }
      lVar17 = lVar17 + uVar16;
      plVar6[1] = lVar17;
      lVar15 = lVar15 + uVar16;
    } while (lVar15 != lVar23);
  }
  func_0x0633e200(&uStack_c8,param_1 + 0x18,plStack_110);
  if (lStack_38 != 0) {
    param_3 = (long *)*param_3;
    puVar18 = puStack_40 + lStack_38;
    lVar17 = param_3[1];
    puVar24 = puStack_40;
    do {
      uVar22 = (long)puVar18 - (long)puVar24;
      uVar19 = param_3[2];
      if (uVar19 < uVar22 + lVar17) {
        (*(code *)param_3[3])();
        lVar17 = param_3[1];
        uVar19 = param_3[2];
      }
      uVar16 = uVar19 - lVar17;
      if (uVar22 <= uVar19 - lVar17) {
        uVar16 = uVar22;
      }
      if (uVar16 != 0) {
        lVar23 = *param_3;
        lVar15 = lVar23 + lVar17;
        if ((uVar16 < 4) || ((ulong)(lVar15 - (long)puVar24) < 0x20)) {
          uVar19 = 0;
LAB_0633dba6:
          uVar20 = uVar19;
          for (uVar22 = uVar16 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined *)(lVar15 + uVar20) = puVar24[uVar20];
            uVar20 = uVar20 + 1;
          }
          if (uVar19 - uVar16 < 0xfffffffffffffffd) {
            lVar17 = lVar17 + lVar23;
            do {
              *(undefined *)(lVar17 + uVar20) = puVar24[uVar20];
              *(undefined *)(lVar17 + 1 + uVar20) = puVar24[uVar20 + 1];
              *(undefined *)(lVar17 + 2 + uVar20) = puVar24[uVar20 + 2];
              *(undefined *)(lVar17 + 3 + uVar20) = puVar24[uVar20 + 3];
              uVar20 = uVar20 + 4;
            } while (uVar16 != uVar20);
          }
        }
        else if (uVar16 < 0x20) {
          uVar22 = 0;
LAB_0633dc80:
          uVar19 = uVar16 & 0xfffffffffffffffc;
          do {
            *(undefined4 *)(lVar15 + uVar22) = *(undefined4 *)(puVar24 + uVar22);
            uVar22 = uVar22 + 4;
          } while (uVar19 != uVar22);
          if (uVar16 != uVar19) goto LAB_0633dba6;
        }
        else {
          uVar19 = uVar16 & 0xffffffffffffffe0;
          uVar22 = 0;
          do {
            puVar2 = (undefined4 *)(puVar24 + uVar22);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            uVar12 = *(undefined8 *)(puVar24 + uVar22 + 0x10);
            uVar13 = *(undefined8 *)((long)(puVar24 + uVar22 + 0x10) + 8);
            puVar4 = (undefined4 *)(lVar23 + lVar17 + uVar22);
            *puVar4 = *puVar2;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            puVar3 = (undefined8 *)(lVar23 + lVar17 + 0x10 + uVar22);
            *puVar3 = uVar12;
            puVar3[1] = uVar13;
            uVar22 = uVar22 + 0x20;
          } while (uVar19 != uVar22);
          if (uVar16 != uVar19) {
            uVar22 = uVar19;
            if ((uVar16 & 0x1c) == 0) goto LAB_0633dba6;
            goto LAB_0633dc80;
          }
        }
        lVar17 = param_3[1];
      }
      lVar17 = lVar17 + uVar16;
      param_3[1] = lVar17;
      puVar24 = puVar24 + uVar16;
    } while (puVar24 != puVar18);
  }
  return;
}


