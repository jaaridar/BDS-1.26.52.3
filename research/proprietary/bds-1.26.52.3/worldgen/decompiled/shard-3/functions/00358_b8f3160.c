/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb9f3160 (ELF vaddr 0xb8f3160)
 * Label: caller-of-callee
 * Body:  [[0b9f3160, 0b9f50bd] [0b9f50c0, 0b9f574d] [0b9f5750, 0b9f58a5] [0b9f58b0, 0b9f59ea] [0b9f59f0, 0b9f5fd7] [0b9f619e, 0b9f61f7] [0b9f655f, 0b9f65ca]]
 * Ghidra: FUN_0b9f3160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b9f3160(long *param_1,long *param_2,undefined1 param_3,undefined4 *param_4,long *param_5,
                 long *param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *unaff_RBP;
  long *unaff_R13;
  ulong uVar24;
  undefined1 auVar25 [16];
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  code *pcStack_180;
  undefined4 uStack_178;
  undefined1 uStack_174;
  long *plStack_170;
  long lStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  code *pcStack_140;
  code *pcStack_138;
  long *plStack_110;
  undefined *apuStack_108 [2];
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  code *pcStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined **ppuStack_68;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if (*param_5 == 0) goto LAB_0b9f5cb3;
  func_0x05f92030(param_1,0,param_3,param_2[0x15],*(undefined8 *)(param_2[0x12] + 0x20));
  *param_1 = (long)&UNK_0f2f33b8;
  param_1[3] = (long)&UNK_0f2f3470;
  param_1[7] = (long)&UNK_0f2f3498;
  param_1[0x17] = (long)&UNK_0f2f34d8;
  param_1[0x18] = (long)&UNK_0f2f35b8;
  param_1[0x19] = 0;
  param_1[0x1a] = (long)param_2;
  param_1[0x1b] = 0;
  lVar17 = *(long *)(param_4 + 2);
  uVar6 = param_4[1];
  uVar7 = param_4[2];
  uVar8 = param_4[3];
  *(undefined4 *)(param_1 + 0x1c) = *param_4;
  *(undefined4 *)((long)param_1 + 0xe4) = uVar6;
  *(undefined4 *)(param_1 + 0x1d) = uVar7;
  *(undefined4 *)((long)param_1 + 0xec) = uVar8;
  if (lVar17 != 0) {
    LOCK();
    plVar14 = (long *)(lVar17 + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  param_1[0x1e] = *(long *)(param_4 + 4);
  lVar17 = *param_5;
  *param_5 = 0;
  param_1[0x1f] = lVar17;
  pcVar11 = (char *)*param_6;
  param_1[0x20] = (long)pcVar11;
  lVar17 = param_6[1];
  param_1[0x21] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(long *)(lVar17 + 8) = *(long *)(lVar17 + 8) + 1;
    UNLOCK();
    pcVar11 = (char *)param_1[0x20];
  }
  param_1[0x22] = param_6[2];
  unaff_RBP = param_1;
  if (pcVar11 == (char *)0x0) goto LAB_0b9f5cb3;
  if (*pcVar11 == '\0') goto LAB_0b9f5cb3;
  plStack_58 = param_1 + 0x1c;
  param_1[0x23] = 0;
  plStack_1b8 = (long *)0x0;
  plStack_1b0 = (long *)0x0;
  plStack_1a8 = (long *)0x0;
  plStack_a0 = param_2;
  plStack_38 = param_1 + 0x20;
  param_6 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  unaff_R13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x78);
  plStack_1c0 = param_1;
  if (unaff_R13 == (long *)0x0) goto LAB_0b9f5cb8;
  do {
    *unaff_R13 = (long)&UNK_0f534768;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar12 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &UNK_0ef44a60;
    *(undefined1 *)(puVar12 + 3) = 1;
    unaff_R13[1] = (long)(puVar12 + 3);
    unaff_R13[2] = (long)puVar12;
    unaff_R13[3] = (long)param_6;
    *(undefined1 *)(unaff_R13 + 4) = 1;
    *(undefined4 *)((long)unaff_R13 + 0x24) = 0;
    *unaff_R13 = (long)&UNK_0f01b228;
    unaff_R13[5] = (long)&UNK_0f01b298;
    unaff_R13[7] = (long)(unaff_R13 + 7);
    unaff_R13[8] = (long)(unaff_R13 + 7);
    *(undefined4 *)(unaff_R13 + 9) = 0;
    unaff_R13[6] = (long)&UNK_0f01bac8;
    unaff_R13[10] = (long)&UNK_0f01baf8;
    func_0x060afe20(param_6,unaff_R13 + 5);
    *unaff_R13 = (long)&UNK_0f2f4330;
    unaff_R13[5] = (long)&UNK_0f2f43b8;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar12 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
    uStack_150 = (long *)0x0;
    pcVar11 = (char *)unaff_R13[1];
    param_6 = (long *)unaff_R13[2];
    if (param_6 != (long *)0x0) {
      LOCK();
      param_6[1] = param_6[1] + 1;
      UNLOCK();
      uStack_150 = param_6;
    }
    if ((pcVar11 != (char *)0x0) && (plStack_148 = unaff_R13, *pcVar11 != '\0')) {
      *puVar12 = &UNK_0f534768;
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar13 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = &UNK_0ef44a60;
      *(undefined1 *)(puVar13 + 3) = 1;
      puVar12[1] = puVar13 + 3;
      puVar12[2] = puVar13;
      *puVar12 = &UNK_0f01b128;
      puVar12[3] = &UNK_0f01b178;
      puVar12[4] = pcVar11;
      puVar12[5] = param_6;
      if (param_6 == (long *)0x0) {
        puVar12[6] = unaff_R13;
        if (*pcVar11 != '\0') {
          *(undefined1 *)(puVar12 + 7) = 1;
          uStack_158 = (char *)0x0;
          uStack_150 = (long *)0x0;
          plStack_148 = (long *)0x0;
          goto LAB_0b9f3549;
        }
      }
      else {
        LOCK();
        param_6[1] = param_6[1] + 1;
        UNLOCK();
        puVar12[6] = unaff_R13;
        if (((char *)puVar12[4] != (char *)0x0) && (*(char *)puVar12[4] != '\0')) {
          *(undefined1 *)(puVar12 + 7) = 1;
          uStack_158 = (char *)0x0;
          uStack_150 = (long *)0x0;
          LOCK();
          plVar14 = param_6 + 1;
          lVar17 = *plVar14;
          *plVar14 = *plVar14 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*param_6 + 0x10))(param_6);
            func_0x0412c2d0(param_6);
          }
          plVar14 = uStack_150;
          plStack_148 = (long *)0x0;
          if (uStack_150 != (long *)0x0) {
            LOCK();
            plVar15 = uStack_150 + 1;
            lVar17 = *plVar15;
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (lVar17 == 0) {
              (**(code **)(*uStack_150 + 0x10))(uStack_150);
              func_0x0412c2d0(plVar14);
            }
          }
LAB_0b9f3549:
          *puVar12 = &UNK_0f2f5a70;
          puVar12[3] = &UNK_0f2f5ac0;
          if ((DAT_0f6c5148 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6c5148), iVar10 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f6c5140 = _DAT_0f5523e8;
            _DAT_0f5523e8 = _DAT_0f5523e8 + 1;
            func_0x0410844d(&DAT_0f6c5148);
          }
          uStack_198 = (long *)CONCAT62(uStack_198._2_6_,_DAT_0f6c5140);
          func_0x0eeb8400(puVar12,&uStack_198);
          unaff_R13[0xb] = (long)puVar12;
          unaff_R13[0xc] = 0;
          unaff_R13[0xd] = 0;
          unaff_R13[0xe] = 0;
          apuStack_108[0] = (undefined *)0x0;
          plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
          if (plVar14 == (long *)0x0) {
            FUN_0eec74c0(8,0);
          }
          plStack_1b0 = plVar14 + 1;
          *plVar14 = (long)unaff_R13;
          plStack_1b8 = plVar14;
          plStack_1a8 = plStack_1b0;
          plVar15 = (long *)(**(code **)(*unaff_RBP + 0x10))(unaff_RBP);
          puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe8);
          if (puVar12 == (undefined8 *)0x0) {
            FUN_0eec74c0(0xe8,0);
          }
          *puVar12 = &UNK_0f534768;
          puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (puVar13 == (undefined8 *)0x0) {
            FUN_0eec74c0(0x20,0);
          }
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = &UNK_0ef44a60;
          *(undefined1 *)(puVar13 + 3) = 1;
          puVar12[1] = puVar13 + 3;
          puVar12[2] = puVar13;
          puVar12[3] = plVar15;
          *(undefined1 *)(puVar12 + 4) = 1;
          *(undefined4 *)((long)puVar12 + 0x24) = 0;
          plVar21 = puVar12 + 5;
          *puVar12 = &UNK_0f2f3a78;
          puVar12[5] = &UNK_0f2f3b30;
          puVar12[6] = 0;
          puVar12[7] = 0;
          puVar12[8] = 0;
          puVar12[9] = 0;
          *(undefined4 *)(puVar12 + 10) = 0x3f800000;
          puVar12[0xb] = 0;
          puVar12[0xc] = 0;
          puVar12[0xd] = 0;
          puVar12[0xe] = 0;
          puVar12[0xf] = 0;
          puVar12[0x10] = 0;
          puVar12[0x12] = puVar12 + 0x12;
          puVar12[0x13] = puVar12 + 0x12;
          *(undefined4 *)(puVar12 + 0x14) = 0;
          puVar12[0x11] = &UNK_0f2f4ef0;
          puVar12[0x15] = &UNK_0f2f4f20;
          puVar12[0x17] = puVar12 + 0x17;
          puVar12[0x18] = puVar12 + 0x17;
          *(undefined4 *)(puVar12 + 0x19) = 0;
          puVar12[0x16] = &UNK_0f2f5030;
          puVar12[0x1a] = &UNK_0f2f5060;
          puVar12[0x1b] = 0;
          puVar12[0x1c] = 0;
          plStack_110 = plVar15;
          plStack_c8 = plVar21;
          plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (plVar15 == (long *)0x0) {
            FUN_0eec74c0(0x20,0);
          }
          plVar15[1] = 0;
          plVar15[2] = 0;
          *plVar15 = (long)&UNK_0f2f98b8;
          plVar15[3] = (long)plVar21;
          plVar22 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
          plVar16 = plVar21;
          if (plVar22 == (long *)0x0) {
            plStack_c0 = plVar15;
            func_0x048b0de0(&uStack_158,apuStack_108);
            _DAT_0f54fd90 = (undefined4)uStack_158;
            uRam000000000f54fd94 = uStack_158._4_4_;
            uVar6 = (undefined4)uStack_150;
            uVar7 = uStack_150._4_4_;
            uStack_158 = (char *)0x0;
            uStack_150 = (long *)0x0;
            plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
            _DAT_0f54fd98 = uVar6;
            uRam000000000f54fd9c = uVar7;
            if (plVar15 != (long *)0x0) {
              LOCK();
              plVar22 = plVar15 + 1;
              lVar17 = *plVar22;
              *plVar22 = *plVar22 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                func_0x0412c2d0(plVar15);
              }
            }
            plVar15 = uStack_150;
            if (uStack_150 != (long *)0x0) {
              LOCK();
              plVar22 = uStack_150 + 1;
              lVar17 = *plVar22;
              *plVar22 = *plVar22 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*uStack_150 + 0x10))(uStack_150);
                func_0x0412c2d0(plVar15);
              }
            }
            plVar22 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
            plVar16 = plStack_c8;
            plVar15 = plStack_c0;
          }
          puStack_188 = &UNK_0ba58040;
          uStack_178 = 0x3de3585a;
          pcStack_180 = (code *)0x0;
          uStack_174 = 2;
          lStack_168 = 0;
          pcStack_160 = (code *)&UNK_0ba57ee0;
          puStack_88 = &UNK_0f2f9908;
          ppuStack_68 = &puStack_88;
          plStack_c8 = (long *)0x0;
          plStack_c0 = (long *)0x0;
          uStack_198 = plVar21;
          plStack_170 = plVar22;
          plStack_98 = plVar16;
          plStack_90 = plVar15;
          auVar25 = func_0x0baa6ff0();
          plVar15 = auVar25._8_8_;
          plStack_1d0 = auVar25._0_8_;
          uStack_158 = (char *)0x0;
          uStack_150 = (long *)0x0;
          func_0x048b1dc0(&uStack_158);
          if (plVar15 == uStack_150) {
            if (plStack_1d0 == (long *)0x0) {
              lVar17 = func_0x048aead0(plVar15);
              iVar10 = *(int *)(lVar17 + 8);
              if (uStack_158 == (char *)0x0) goto LAB_0b9f3925;
LAB_0b9f3903:
              if (iVar10 != *(int *)((long)uStack_158 + 8)) goto LAB_0b9f393b;
            }
            else {
              iVar10 = (int)plStack_1d0[1];
              if (uStack_158 != (char *)0x0) goto LAB_0b9f3903;
LAB_0b9f3925:
              lVar17 = func_0x048aead0(uStack_150);
              if (iVar10 != *(int *)(lVar17 + 8)) goto LAB_0b9f393b;
            }
LAB_0b9f3b6f:
            plVar15 = plStack_90;
            if (plStack_90 != (long *)0x0) {
              LOCK();
              plVar21 = plStack_90 + 1;
              lVar17 = *plVar21;
              *plVar21 = *plVar21 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plStack_90 + 0x10))(plStack_90);
                func_0x0412c2d0(plVar15);
              }
            }
            if (ppuStack_68 == &puStack_88) {
              lVar17 = 0x20;
LAB_0b9f3bd4:
              (**(code **)(*ppuStack_68 + lVar17))();
            }
            else {
              lVar17 = 0x28;
              if (ppuStack_68 != (undefined **)0x0) goto LAB_0b9f3bd4;
            }
            if (pcStack_180 != (code *)0x0) {
              (*pcStack_180)(&uStack_198);
            }
            plVar15 = plStack_c0;
            if (plStack_c0 != (long *)0x0) {
              LOCK();
              plVar21 = plStack_c0 + 1;
              lVar17 = *plVar21;
              *plVar21 = *plVar21 + -1;
              UNLOCK();
              if (lVar17 == 0) {
                (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
                func_0x0412c2d0(plVar15);
              }
            }
            plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
            if (plVar15 == (long *)0x0) {
              FUN_0eec74c0(0x10,0);
            }
            plVar15[1] = (long)puVar12;
            *plVar15 = *plVar14;
            plStack_1b8 = plVar15;
            plStack_1a8 = plVar15 + 2;
            func_0x0412a280(plVar14,8);
            plStack_1b0 = plVar15 + 2;
            uVar18 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
            puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
            if (puVar12 == (undefined8 *)0x0) {
              FUN_0eec74c0(0x60,0);
            }
            *puVar12 = &UNK_0f534768;
            puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (puVar13 == (undefined8 *)0x0) {
              FUN_0eec74c0(0x20,0);
            }
            puVar13[1] = 0;
            puVar13[2] = 0;
            *puVar13 = &UNK_0ef44a60;
            *(undefined1 *)(puVar13 + 3) = 1;
            puVar12[1] = puVar13 + 3;
            puVar12[2] = puVar13;
            puVar12[3] = uVar18;
            *(undefined1 *)(puVar12 + 4) = 1;
            *(undefined4 *)((long)puVar12 + 0x24) = 0;
            *puVar12 = &UNK_0f2e8be8;
            puVar12[5] = &UNK_0f2e8c68;
            puVar12[6] = &UNK_0f2e8c88;
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[9] = 0;
            puVar12[10] = 0;
            *(undefined4 *)(puVar12 + 0xb) = 0x3f800000;
            func_0x0b95a2d0(uVar18,puVar12 + 5);
            plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (plVar14 == (long *)0x0) {
              FUN_0eec74c0(0x20,0);
            }
            plStack_1d0 = plVar14 + 4;
            plVar14[2] = (long)puVar12;
            plVar21 = plVar14 + 3;
            uVar6 = *(undefined4 *)((long)plVar15 + 4);
            lVar17 = plVar15[1];
            uVar7 = *(undefined4 *)((long)plVar15 + 0xc);
            *(int *)plVar14 = (int)*plVar15;
            *(undefined4 *)((long)plVar14 + 4) = uVar6;
            *(int *)(plVar14 + 1) = (int)lVar17;
            *(undefined4 *)((long)plVar14 + 0xc) = uVar7;
            plStack_1b8 = plVar14;
            plStack_1a8 = plStack_1d0;
            func_0x0412a280(plVar15,0x10);
            plStack_1b0 = plVar21;
            uVar18 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
            lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
            if (lVar17 == 0) {
              FUN_0eec74c0(0x70,0);
            }
            plVar14 = (long *)plStack_1c0[0x1d];
            uStack_158 = (char *)plStack_1c0[0x1c];
            uStack_150 = (long *)plStack_1c0[0x1d];
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar14[1] = plVar14[1] + 1;
              UNLOCK();
            }
            plStack_148 = (long *)plStack_1c0[0x1e];
            func_0x0b92d690(lVar17,uVar18,&uStack_158,0);
            uStack_158 = (char *)0x0;
            uStack_150 = (long *)0x0;
            if (plVar14 == (long *)0x0) {
LAB_0b9f3e94:
              if (plStack_1a8 <= plVar21) goto LAB_0b9f3eff;
LAB_0b9f3ea8:
              *plVar21 = lVar17;
              plStack_1c8 = plStack_1a8;
LAB_0b9f3fc8:
              plStack_1b0 = plStack_1d0;
              uVar18 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
              lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x108);
              if (lVar17 == 0) {
                FUN_0eec74c0(0x108,0);
              }
              func_0x0b6ecf50(lVar17,uVar18);
              plVar14 = plStack_1b8;
              if (plStack_1c8 <= plStack_1d0) {
                lVar19 = (long)plStack_1d0 - (long)plStack_1b8;
                uVar1 = (lVar19 >> 3) + 1;
                if (0x1fffffffffffffff < uVar1) goto LAB_0b9f5f3e;
                uVar23 = (long)plStack_1c8 - (long)plStack_1b8;
                uVar24 = (long)uVar23 >> 2;
                if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                  uVar24 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar23) {
                  uVar24 = 0x1fffffffffffffff;
                }
                if (uVar24 < 0x2000000000000000) {
                  lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                  if (lVar20 == 0) {
                    FUN_0eec74c0(uVar24 * 8,0);
                  }
                  plStack_1c8 = (long *)(lVar20 + uVar24 * 8);
                  *(long *)(lVar20 + lVar19) = lVar17;
                  plStack_1d0 = (long *)(lVar20 + lVar19);
                  plVar15 = (long *)(lVar20 + lVar19 + (lVar19 >> 3) * -8);
                  func_0x0eee2f00(plVar15,plVar14);
                  plStack_1b8 = plVar15;
                  plStack_1a8 = plStack_1c8;
                  if (plVar14 != (long *)0x0) {
                    func_0x0412a280(plVar14,uVar23);
                  }
                  goto LAB_0b9f40fb;
                }
                goto LAB_0b9f5f43;
              }
              *plStack_1d0 = lVar17;
LAB_0b9f40fb:
              plVar14 = plStack_1d0 + 1;
              plStack_1b0 = plVar14;
              uVar18 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
              lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x90);
              if (lVar17 == 0) {
                FUN_0eec74c0(0x90,0);
              }
              func_0x0b6f9200(lVar17,uVar18);
              if (plStack_1c8 <= plVar14) {
                lVar19 = (long)plVar14 - (long)plStack_1b8;
                uVar1 = (lVar19 >> 3) + 1;
                if (0x1fffffffffffffff < uVar1) goto LAB_0b9f5f48;
                plStack_110 = plStack_1b8;
                uVar23 = (long)plStack_1c8 - (long)plStack_1b8;
                uVar24 = (long)uVar23 >> 2;
                if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                  uVar24 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar23) {
                  uVar24 = 0x1fffffffffffffff;
                }
                if (uVar24 < 0x2000000000000000) {
                  lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                  if (lVar20 == 0) {
                    FUN_0eec74c0(uVar24 * 8,0);
                  }
                  plVar14 = plStack_110;
                  plStack_1c8 = (long *)(lVar20 + uVar24 * 8);
                  *(long *)(lVar20 + lVar19) = lVar17;
                  plStack_1d0 = (long *)(lVar20 + lVar19 + 8);
                  plVar15 = (long *)(lVar20 + lVar19 + (lVar19 >> 3) * -8);
                  func_0x0eee2f00(plVar15,plStack_110,lVar19);
                  plStack_1b8 = plVar15;
                  plStack_1a8 = plStack_1c8;
                  if (plVar14 != (long *)0x0) {
                    func_0x0412a280(plVar14,uVar23);
                  }
                  goto LAB_0b9f423b;
                }
                goto LAB_0b9f5f4d;
              }
              *plVar14 = lVar17;
              plStack_1d0 = plStack_1d0 + 2;
LAB_0b9f423b:
              plStack_1b0 = plStack_1d0;
              uVar18 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
              lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x290);
              if (lVar17 == 0) {
                FUN_0eec74c0(0x290,0);
              }
              func_0x0623ffe0(lVar17,uVar18);
              plVar14 = plStack_1b8;
              if (plStack_1c8 <= plStack_1d0) {
                lVar19 = (long)plStack_1d0 - (long)plStack_1b8;
                uVar1 = (lVar19 >> 3) + 1;
                if (0x1fffffffffffffff < uVar1) goto LAB_0b9f5f52;
                uVar23 = (long)plStack_1c8 - (long)plStack_1b8;
                uVar24 = (long)uVar23 >> 2;
                if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                  uVar24 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar23) {
                  uVar24 = 0x1fffffffffffffff;
                }
                if (uVar24 < 0x2000000000000000) {
                  lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                  if (lVar20 == 0) {
                    FUN_0eec74c0(uVar24 * 8,0);
                  }
                  plStack_1c8 = (long *)(lVar20 + uVar24 * 8);
                  *(long *)(lVar20 + lVar19) = lVar17;
                  plStack_1d0 = (long *)(lVar20 + lVar19);
                  plVar15 = (long *)(lVar20 + lVar19 + (lVar19 >> 3) * -8);
                  func_0x0eee2f00(plVar15,plVar14,lVar19);
                  plStack_1b8 = plVar15;
                  plStack_1a8 = plStack_1c8;
                  if (plVar14 != (long *)0x0) {
                    func_0x0412a280(plVar14,uVar23);
                  }
                  goto LAB_0b9f436e;
                }
                goto LAB_0b9f5f57;
              }
              *plStack_1d0 = lVar17;
LAB_0b9f436e:
              plStack_1d0 = plStack_1d0 + 1;
              plStack_1b0 = plStack_1d0;
              uVar18 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
              puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
              if (puVar12 == (undefined8 *)0x0) {
                FUN_0eec74c0(0xc0,0);
              }
              *puVar12 = &UNK_0f534768;
              puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
              if (puVar13 == (undefined8 *)0x0) {
                FUN_0eec74c0(0x20,0);
              }
              plVar14 = plStack_1b8;
              puVar13[1] = 0;
              puVar13[2] = 0;
              *puVar13 = &UNK_0ef44a60;
              *(undefined1 *)(puVar13 + 3) = 1;
              puVar12[1] = puVar13 + 3;
              puVar12[2] = puVar13;
              puVar12[3] = uVar18;
              *(undefined1 *)(puVar12 + 4) = 1;
              *(undefined4 *)((long)puVar12 + 0x24) = 0;
              *puVar12 = &UNK_0f02ebd0;
              puVar12[5] = &UNK_0f02ec88;
              *(undefined1 *)(puVar12 + 6) = 0;
              *(undefined1 *)(puVar12 + 7) = 0;
              puVar12[8] = 0;
              puVar12[9] = 0;
              puVar12[0xb] = puVar12 + 0xb;
              puVar12[0xc] = puVar12 + 0xb;
              *(undefined4 *)(puVar12 + 0xd) = 0;
              puVar12[10] = &UNK_0f030908;
              puVar12[0xe] = &UNK_0f030938;
              puVar12[0xf] = 0;
              puVar12[0x10] = 0;
              puVar12[0x11] = 0;
              puVar12[0x12] = 0;
              puVar12[0x13] = 0;
              puVar12[0x14] = 0;
              puVar12[0x15] = 0;
              puVar12[0x16] = 0;
              *(undefined4 *)(puVar12 + 0x17) = 0x3f800000;
              if (plStack_1c8 <= plStack_1d0) {
                lVar17 = (long)plStack_1d0 - (long)plStack_1b8;
                uVar1 = (lVar17 >> 3) + 1;
                if (0x1fffffffffffffff < uVar1) goto LAB_0b9f5f5c;
                uVar23 = (long)plStack_1c8 - (long)plStack_1b8;
                uVar24 = (long)uVar23 >> 2;
                if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                  uVar24 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar23) {
                  uVar24 = 0x1fffffffffffffff;
                }
                if (uVar24 < 0x2000000000000000) {
                  lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                  if (lVar19 == 0) {
                    FUN_0eec74c0(uVar24 * 8,0);
                  }
                  plStack_1c8 = (long *)(lVar19 + uVar24 * 8);
                  *(undefined8 **)(lVar19 + lVar17) = puVar12;
                  plStack_1d0 = (long *)(lVar19 + lVar17);
                  plVar15 = (long *)(lVar19 + lVar17 + (lVar17 >> 3) * -8);
                  func_0x0eee2f00(plVar15,plVar14);
                  plStack_1b8 = plVar15;
                  plStack_1a8 = plStack_1c8;
                  if (plVar14 != (long *)0x0) {
                    func_0x0412a280(plVar14,uVar23);
                  }
                  goto LAB_0b9f457b;
                }
                goto LAB_0b9f5f61;
              }
              *plStack_1d0 = (long)puVar12;
LAB_0b9f457b:
              plVar14 = plStack_1d0 + 1;
              plStack_1b0 = plVar14;
              uVar18 = (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
              if ((*plStack_58 == 0) &&
                 (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                          &UNK_013b66ec), cVar9 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              if ((*(char *)*plStack_58 == '\0') &&
                 (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                          &UNK_013b66ec), cVar9 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              uVar2 = *(undefined1 *)(plStack_1c0[0x1e] + 0x180);
              puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x88);
              if (puVar12 == (undefined8 *)0x0) {
                FUN_0eec74c0(0x88,0);
              }
              *puVar12 = &UNK_0f534768;
              puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
              if (puVar13 == (undefined8 *)0x0) {
                FUN_0eec74c0(0x20,0);
              }
              plVar15 = plStack_1b8;
              puVar13[1] = 0;
              puVar13[2] = 0;
              *puVar13 = &UNK_0ef44a60;
              *(undefined1 *)(puVar13 + 3) = 1;
              puVar12[1] = puVar13 + 3;
              puVar12[2] = puVar13;
              puVar12[3] = uVar18;
              *(undefined1 *)(puVar12 + 4) = 1;
              *(undefined4 *)((long)puVar12 + 0x24) = 0;
              *puVar12 = &UNK_0f2e8220;
              puVar12[5] = &UNK_0f2e82b8;
              *(undefined1 *)(puVar12 + 6) = uVar2;
              puVar12[7] = 0;
              puVar12[8] = 0;
              puVar12[9] = 0;
              puVar12[10] = 0;
              *(undefined4 *)(puVar12 + 0xb) = 0x3f800000;
              puVar12[0xd] = puVar12 + 0xd;
              puVar12[0xe] = puVar12 + 0xd;
              *(undefined4 *)(puVar12 + 0xf) = 0;
              puVar12[0xc] = &UNK_0f2ea1d0;
              puVar12[0x10] = &UNK_0f2ea200;
              if (plStack_1c8 <= plVar14) {
                lVar17 = (long)plVar14 - (long)plStack_1b8;
                uVar1 = (lVar17 >> 3) + 1;
                if (0x1fffffffffffffff < uVar1) goto LAB_0b9f5f66;
                uVar23 = (long)plStack_1c8 - (long)plStack_1b8;
                uVar24 = (long)uVar23 >> 2;
                if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                  uVar24 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar23) {
                  uVar24 = 0x1fffffffffffffff;
                }
                if (uVar24 < 0x2000000000000000) {
                  lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                  if (lVar19 == 0) {
                    FUN_0eec74c0(uVar24 * 8,0);
                  }
                  unaff_R13 = (long *)(lVar19 + uVar24 * 8);
                  *(undefined8 **)(lVar19 + lVar17) = puVar12;
                  plStack_1d0 = (long *)(lVar19 + lVar17 + 8);
                  plVar14 = (long *)(lVar19 + lVar17 + (lVar17 >> 3) * -8);
                  func_0x0eee2f00(plVar14,plVar15,lVar17);
                  plStack_1b8 = plVar14;
                  plStack_1a8 = unaff_R13;
                  if (plVar15 != (long *)0x0) {
                    func_0x0412a280(plVar15,uVar23);
                  }
                  goto LAB_0b9f47fe;
                }
                goto LAB_0b9f5f6b;
              }
              *plVar14 = (long)puVar12;
              plStack_1d0 = plStack_1d0 + 2;
              unaff_R13 = plStack_1c8;
LAB_0b9f47fe:
              plStack_1b0 = plStack_1d0;
              uVar18 = (**(code **)(*plStack_1c0 + 0x10))();
              lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x148);
              if (lVar17 == 0) {
                FUN_0eec74c0(0x148,0);
              }
              func_0x0b6d0180(lVar17,uVar18);
              if (unaff_R13 <= plStack_1d0) {
                lVar19 = (long)plStack_1d0 - (long)plStack_1b8;
                uVar1 = (lVar19 >> 3) + 1;
                if (0x1fffffffffffffff < uVar1) goto LAB_0b9f5f70;
                plStack_110 = plStack_1b8;
                uVar23 = (long)unaff_R13 - (long)plStack_1b8;
                uVar24 = (long)uVar23 >> 2;
                if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                  uVar24 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar23) {
                  uVar24 = 0x1fffffffffffffff;
                }
                if (uVar24 < 0x2000000000000000) {
                  lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                  if (lVar20 == 0) {
                    FUN_0eec74c0(uVar24 * 8,0);
                  }
                  plVar14 = plStack_110;
                  unaff_R13 = (long *)(lVar20 + uVar24 * 8);
                  *(long *)(lVar20 + lVar19) = lVar17;
                  plStack_1d0 = (long *)(lVar20 + lVar19);
                  plVar15 = (long *)(lVar20 + lVar19 + (lVar19 >> 3) * -8);
                  func_0x0eee2f00(plVar15,plStack_110,lVar19);
                  plStack_1b8 = plVar15;
                  plStack_1a8 = unaff_R13;
                  if (plVar14 != (long *)0x0) {
                    func_0x0412a280(plVar14,uVar23);
                  }
                  goto LAB_0b9f4933;
                }
                goto LAB_0b9f5f75;
              }
              *plStack_1d0 = lVar17;
LAB_0b9f4933:
              plVar14 = plStack_1d0 + 1;
              plStack_1b0 = plVar14;
              uVar18 = (**(code **)(*plStack_1c0 + 0x10))();
              lVar17 = plStack_a0[0x18];
              lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x150);
              if (lVar19 == 0) {
                FUN_0eec74c0(0x150,0);
              }
              pcStack_138 = (code *)0x0;
              ppuStack_e8 = (undefined **)0x0;
              func_0x067b5b80(lVar19,uVar18,lVar17,&uStack_158,apuStack_108);
              plVar15 = plStack_a0;
              if (ppuStack_e8 == apuStack_108) {
                lVar17 = 0x20;
LAB_0b9f4d0a:
                (**(code **)(*ppuStack_e8 + lVar17))();
                if (pcStack_138 != (code *)&uStack_158) goto LAB_0b9f49f3;
LAB_0b9f4d21:
                (**(code **)(*(long *)pcStack_138 + 0x20))();
joined_r0x0b9f4d2f:
                if (unaff_R13 <= plVar14) goto LAB_0b9f4a10;
LAB_0b9f4afd:
                *plVar14 = lVar19;
                plStack_1d0 = plStack_1d0 + 2;
                plVar14 = unaff_R13;
LAB_0b9f4b0f:
                plStack_1b0 = plStack_1d0;
                plStack_110 = (long *)(**(code **)(*plStack_1c0 + 0x10))();
                plStack_c8 = plVar15;
                plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
                if (plVar21 == (long *)0x0) {
                  FUN_0eec74c0(0x20,0);
                }
                plVar21[1] = 0;
                plVar21[2] = 0;
                *plVar21 = (long)&UNK_0f2f5e28;
                plVar21[3] = (long)plVar15;
                plVar22 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                plVar16 = plVar15;
                if (plVar22 == (long *)0x0) {
                  plStack_c0 = plVar21;
                  func_0x048b0de0(&uStack_158,apuStack_108);
                  _DAT_0f54fd90 = (undefined4)uStack_158;
                  uRam000000000f54fd94 = uStack_158._4_4_;
                  uVar6 = (undefined4)uStack_150;
                  uVar7 = uStack_150._4_4_;
                  uStack_158 = (char *)0x0;
                  uStack_150 = (long *)0x0;
                  plVar15 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
                  _DAT_0f54fd98 = uVar6;
                  uRam000000000f54fd9c = uVar7;
                  if (plVar15 != (long *)0x0) {
                    LOCK();
                    plVar21 = plVar15 + 1;
                    lVar17 = *plVar21;
                    *plVar21 = *plVar21 + -1;
                    UNLOCK();
                    if (lVar17 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                      func_0x0412c2d0(plVar15);
                    }
                  }
                  plVar15 = uStack_150;
                  if (uStack_150 != (long *)0x0) {
                    LOCK();
                    plVar21 = uStack_150 + 1;
                    lVar17 = *plVar21;
                    *plVar21 = *plVar21 + -1;
                    UNLOCK();
                    if (lVar17 == 0) {
                      (**(code **)(*uStack_150 + 0x10))(uStack_150);
                      func_0x0412c2d0(plVar15);
                    }
                  }
                  plVar22 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
                  plVar15 = plStack_c8;
                  plVar16 = plStack_a0;
                  plVar21 = plStack_c0;
                }
                puStack_188 = &UNK_0ba67300;
                uStack_178 = 0xc3042d87;
                pcStack_180 = (code *)0x0;
                uStack_174 = 2;
                lStack_168 = 0;
                pcStack_160 = (code *)&UNK_0ba671a0;
                puStack_88 = &UNK_0f2f5e78;
                ppuStack_68 = &puStack_88;
                plStack_c8 = (long *)0x0;
                plStack_c0 = (long *)0x0;
                uStack_198 = plVar16;
                plStack_170 = plVar22;
                plStack_98 = plVar15;
                plStack_90 = plVar21;
                auVar25 = func_0x063382c0();
                plVar21 = auVar25._8_8_;
                plVar15 = auVar25._0_8_;
                uStack_158 = (char *)0x0;
                uStack_150 = (long *)0x0;
                func_0x048b1dc0(&uStack_158);
                unaff_RBP = plStack_1d0;
                if (plVar21 == uStack_150) {
                  if (plVar15 == (long *)0x0) {
                    lVar17 = func_0x048aead0(plVar21);
                    iVar10 = *(int *)(lVar17 + 8);
                    if (uStack_158 == (char *)0x0) goto LAB_0b9f4d52;
LAB_0b9f4cfb:
                    if (iVar10 != *(int *)((long)uStack_158 + 8)) goto LAB_0b9f4d68;
                  }
                  else {
                    iVar10 = (int)plVar15[1];
                    if (uStack_158 != (char *)0x0) goto LAB_0b9f4cfb;
LAB_0b9f4d52:
                    lVar17 = func_0x048aead0(uStack_150);
                    if (iVar10 != *(int *)(lVar17 + 8)) goto LAB_0b9f4d68;
                  }
                }
                else {
LAB_0b9f4d68:
                  plVar22 = plStack_170;
                  unaff_R13 = &lStack_168;
                  if (pcStack_160 == (code *)0x0) {
                    uStack_158 = (char *)0x0;
                    uStack_150 = (long *)0x0;
                    unaff_RBP = &uStack_158;
                    func_0x048b1dc0(unaff_RBP);
                    lVar17 = (long)uStack_158;
                    plVar22 = uStack_150;
                    if (uStack_158 != (char *)0x0) goto LAB_0b9f4d9d;
LAB_0b9f4e0b:
                    lVar17 = func_0x048aead0(plVar22);
                    bVar3 = *(byte *)(lVar17 + 0x19);
                    plVar22 = plStack_170;
                    lVar17 = lStack_168;
                  }
                  else {
                    lVar17 = lStack_168;
                    if ((lStack_168 == 0) &&
                       ((*pcStack_160)(0,&uStack_198,0), lVar17 = lStack_168, unaff_RBP = unaff_R13,
                       lStack_168 == 0)) goto LAB_0b9f4e0b;
LAB_0b9f4d9d:
                    bVar3 = *(byte *)(lVar17 + 0x19);
                    plVar22 = plStack_170;
                    lVar17 = lStack_168;
                  }
                  plStack_170 = plVar22;
                  lStack_168 = lVar17;
                  if ((bVar3 & 1) == 0) {
                    if (pcStack_160 == (code *)0x0) {
                      uStack_158 = (char *)0x0;
                      uStack_150 = (long *)0x0;
                      func_0x048b1dc0(&uStack_158);
                      unaff_R13 = &uStack_158;
                      lVar17 = (long)uStack_158;
                      plVar22 = uStack_150;
joined_r0x0b9f4e40:
                      if (lVar17 != 0) goto LAB_0b9f4dd4;
                      lVar17 = func_0x048aead0(plVar22);
                      bVar3 = *(byte *)(lVar17 + 0x19);
                    }
                    else {
                      if (lVar17 == 0) {
                        (*pcStack_160)(0,&uStack_198,0);
                        lVar17 = lStack_168;
                        goto joined_r0x0b9f4e40;
                      }
LAB_0b9f4dd4:
                      bVar3 = *(byte *)(lVar17 + 0x19);
                    }
                    if ((bVar3 & 2) == 0) goto LAB_0b9f4f9e;
                  }
                  if (ppuStack_68 != (undefined **)0x0) {
                    func_0x049e8590(&uStack_158,&uStack_198);
                    if (ppuStack_68 == (undefined **)0x0) goto LAB_0b9f5f89;
                    cVar9 = (**(code **)(*ppuStack_68 + 0x30))(ppuStack_68,&uStack_158);
                    if (pcStack_140 != (code *)0x0) {
                      (*pcStack_140)(&uStack_158);
                    }
                    if (cVar9 == '\0') goto LAB_0b9f4f9e;
                  }
                  puStack_f8 = &UNK_0488e0b0;
                  pcStack_f0 = (code *)0x0;
                  ppuStack_e8 = (undefined **)CONCAT35(ppuStack_e8._5_3_,0x48b5725f);
                  apuStack_108[0] = (undefined *)0x0;
                  plStack_e0 = plStack_170;
                  plStack_d8 = (long *)0x0;
                  pcStack_d0 = (code *)0x0;
                  if ((pcStack_160 == (code *)0x0) ||
                     ((*pcStack_160)(0x100,&uStack_198,apuStack_108), plVar22 = plStack_e0,
                     pcStack_d0 == (code *)0x0)) {
                    plStack_b8 = (long *)0x0;
                    plStack_b0 = (long *)0x0;
                    func_0x048b1dc0(&plStack_b8);
                    unaff_RBP = plStack_b8;
                    plVar22 = plStack_b0;
                  }
                  else {
                    unaff_RBP = plStack_d8;
                    if (plStack_d8 == (long *)0x0) {
                      (*pcStack_d0)(0,apuStack_108,0);
                      unaff_RBP = plStack_d8;
                    }
                  }
                  if (pcStack_f0 != (code *)0x0) {
                    (*pcStack_f0)(apuStack_108);
                  }
                  if (plVar22 == plVar21) {
                    if (unaff_RBP == (long *)0x0) {
                      unaff_RBP = (long *)func_0x048aead0(plVar22);
                      iVar10 = (int)unaff_RBP[1];
                      if (plVar15 == (long *)0x0) goto LAB_0b9f5579;
LAB_0b9f52e8:
                      if (iVar10 != (int)plVar15[1]) goto LAB_0b9f4f9e;
                    }
                    else {
                      iVar10 = (int)unaff_RBP[1];
                      if (plVar15 != (long *)0x0) goto LAB_0b9f52e8;
LAB_0b9f5579:
                      lVar17 = func_0x048aead0(plVar21);
                      if (iVar10 != *(int *)(lVar17 + 8)) goto LAB_0b9f4f9e;
                      plVar15 = (long *)func_0x048aead0(plVar21);
                    }
                    uVar4 = *(uint *)(*plVar15 + 4);
                    unaff_RBP = (long *)(ulong)uVar4;
                    plVar22 = plStack_110 + 1;
                    plVar15 = (long *)plStack_110[1];
                    plVar21 = plVar22;
                    if (plVar15 != (long *)0x0) {
                      do {
                        if (*(uint *)(plVar15 + 4) >= uVar4) {
                          plVar21 = plVar15;
                        }
                        plVar15 = (long *)plVar15[*(uint *)(plVar15 + 4) < uVar4];
                      } while (plVar15 != (long *)0x0);
                      if ((plVar21 != plVar22) && (*(uint *)(plVar21 + 4) <= uVar4))
                      goto LAB_0b9f4f9e;
                    }
                    lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                    if (lVar17 == 0) {
                      FUN_0eec74c0(0x80,0);
                    }
                    ppuStack_e8 = apuStack_108;
                    if (ppuStack_68 == (undefined **)0x0) {
                      ppuStack_e8 = (undefined **)0x0;
                    }
                    else if (ppuStack_68 == &puStack_88) {
                      (**(code **)(*ppuStack_68 + 0x18))();
                    }
                    else {
                      ppuStack_e8 = ppuStack_68;
                      ppuStack_68 = (undefined **)0x0;
                    }
                    plStack_b8 = plStack_98;
                    plStack_b0 = plStack_90;
                    plStack_98 = (long *)0x0;
                    plStack_90 = (long *)0x0;
                    func_0x049e8ab0(lVar17,&uStack_198,apuStack_108,&plStack_b8);
                    plVar15 = plStack_b0;
                    lStack_1a0 = lVar17;
                    if (plStack_b0 != (long *)0x0) {
                      LOCK();
                      plVar21 = plStack_b0 + 1;
                      lVar17 = *plVar21;
                      *plVar21 = *plVar21 + -1;
                      UNLOCK();
                      if (lVar17 == 0) {
                        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
                        func_0x0412c2d0(plVar15);
                      }
                    }
                    if (ppuStack_e8 == apuStack_108) {
                      lVar17 = 0x20;
LAB_0b9f59dc:
                      (**(code **)(*ppuStack_e8 + lVar17))();
                    }
                    else {
                      lVar17 = 0x28;
                      if (ppuStack_e8 != (undefined **)0x0) goto LAB_0b9f59dc;
                    }
                    plVar15 = (long *)*plVar22;
                    while (plVar21 = plVar22, plVar15 != (long *)0x0) {
                      while (plVar22 = plVar15, *(uint *)(plVar22 + 4) <= uVar4) {
                        if (uVar4 <= *(uint *)(plVar22 + 4)) goto LAB_0b9f5b77;
                        plVar15 = (long *)plVar22[1];
                        if ((long *)plVar22[1] == (long *)0x0) {
                          plVar21 = plVar22 + 1;
                          goto LAB_0b9f5a18;
                        }
                      }
                      plVar15 = (long *)*plVar22;
                    }
LAB_0b9f5a18:
                    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
                    if (plVar15 == (long *)0x0) {
                      FUN_0eec74c0(0x30,0);
                    }
                    plVar16 = plStack_110;
                    *(uint *)(plVar15 + 4) = uVar4;
                    plVar15[5] = 0;
                    *plVar15 = 0;
                    plVar15[1] = 0;
                    plVar15[2] = (long)plVar22;
                    *plVar21 = (long)plVar15;
                    if (*(long *)*plStack_110 != 0) {
                      *plStack_110 = *(long *)*plStack_110;
                    }
                    func_0x048bed00(plStack_110[1],plVar15);
                    plVar16[2] = plVar16[2] + 1;
                    plVar22 = plVar15;
LAB_0b9f5b77:
                    lVar19 = lStack_1a0;
                    lStack_1a0 = 0;
                    lVar17 = plVar22[5];
                    plVar22[5] = lVar19;
                    if (lVar17 != 0) {
                      plVar15 = *(long **)(lVar17 + 0x78);
                      if (plVar15 != (long *)0x0) {
                        LOCK();
                        plVar21 = plVar15 + 1;
                        lVar19 = *plVar21;
                        *plVar21 = *plVar21 + -1;
                        UNLOCK();
                        if (lVar19 == 0) {
                          (**(code **)(*plVar15 + 0x10))(plVar15);
                          func_0x0412c2d0(plVar15);
                        }
                      }
                      plVar15 = *(long **)(lVar17 + 0x60);
                      if (plVar15 == (long *)(lVar17 + 0x40)) {
                        lVar19 = 0x20;
LAB_0b9f5be0:
                        (**(code **)(*plVar15 + lVar19))();
                      }
                      else {
                        lVar19 = 0x28;
                        if (plVar15 != (long *)0x0) goto LAB_0b9f5be0;
                      }
                      if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
                        (**(code **)(lVar17 + 0x18))(lVar17);
                      }
                      func_0x0412a280(lVar17,0x80);
                      lVar17 = lStack_1a0;
                      lStack_1a0 = 0;
                      if (lVar17 != 0) {
                        plVar15 = *(long **)(lVar17 + 0x78);
                        if (plVar15 != (long *)0x0) {
                          LOCK();
                          plVar21 = plVar15 + 1;
                          lVar19 = *plVar21;
                          *plVar21 = *plVar21 + -1;
                          UNLOCK();
                          if (lVar19 == 0) {
                            (**(code **)(*plVar15 + 0x10))(plVar15);
                            func_0x0412c2d0(plVar15);
                          }
                        }
                        plVar15 = *(long **)(lVar17 + 0x60);
                        if (plVar15 == (long *)(lVar17 + 0x40)) {
                          lVar19 = 0x20;
LAB_0b9f5c8d:
                          (**(code **)(*plVar15 + lVar19))();
                        }
                        else {
                          lVar19 = 0x28;
                          if (plVar15 != (long *)0x0) goto LAB_0b9f5c8d;
                        }
                        if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
                          (**(code **)(lVar17 + 0x18))(lVar17);
                        }
                        func_0x0412a280(lVar17,0x80);
                      }
                    }
                  }
                }
LAB_0b9f4f9e:
                plVar15 = plStack_90;
                if (plStack_90 != (long *)0x0) {
                  LOCK();
                  plVar21 = plStack_90 + 1;
                  lVar17 = *plVar21;
                  *plVar21 = *plVar21 + -1;
                  UNLOCK();
                  if (lVar17 == 0) {
                    (**(code **)(*plStack_90 + 0x10))(plStack_90);
                    func_0x0412c2d0(plVar15);
                  }
                }
                if (ppuStack_68 == &puStack_88) {
                  lVar17 = 0x20;
LAB_0b9f5003:
                  (**(code **)(*ppuStack_68 + lVar17))();
                }
                else {
                  lVar17 = 0x28;
                  if (ppuStack_68 != (undefined **)0x0) goto LAB_0b9f5003;
                }
                if (pcStack_180 != (code *)0x0) {
                  (*pcStack_180)(&uStack_198);
                }
                plVar21 = plStack_c0;
                plVar15 = plStack_1c0 + 3;
                if (plStack_c0 != (long *)0x0) {
                  LOCK();
                  plVar22 = plStack_c0 + 1;
                  lVar17 = *plVar22;
                  *plVar22 = *plVar22 + -1;
                  UNLOCK();
                  if (lVar17 == 0) {
                    (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
                    func_0x0412c2d0(plVar21);
                  }
                }
                plStack_50 = plStack_1b8;
                plStack_1b8 = (long *)0x0;
                plStack_1b0 = (long *)0x0;
                plStack_1a8 = (long *)0x0;
                plStack_48 = plStack_1d0;
                plStack_40 = plVar14;
                func_0x067a55b0(&uStack_158,plVar15,&plStack_50);
                plVar21 = plStack_50;
                plVar14 = plStack_48;
                if (plStack_50 != (long *)0x0) {
                  for (; plVar21 != plVar14; plVar14 = plVar14 + -1) {
                    plVar22 = (long *)plVar14[-1];
                    plVar14[-1] = 0;
                    if (plVar22 != (long *)0x0) {
                      (**(code **)(*plVar22 + 8))();
                    }
                  }
                  plStack_48 = plVar21;
                  func_0x0412a280(plStack_50,(long)plStack_40 - (long)plStack_50);
                }
                lVar17 = func_0x05f929d0(&uStack_158);
                plVar14 = plStack_a0;
                if (lVar17 == 0) {
                  if (pcStack_138 != (code *)0x0) {
                    (*pcStack_138)(&uStack_150);
                  }
                  func_0x067a7770(&uStack_158,plVar15);
                  lVar17 = func_0x05f929d0(&uStack_158);
                  if (lVar17 == 0) {
                    if (pcStack_138 != (code *)0x0) {
                      (*pcStack_138)(&uStack_150);
                    }
                    func_0x067a7d70(&uStack_158,plVar15);
                    lVar17 = func_0x05f929d0(&uStack_158);
                    if (lVar17 == 0) {
                      if (pcStack_138 != (code *)0x0) {
                        (*pcStack_138)(&uStack_150);
                      }
                      uStack_158 = (char *)plVar14[0x22];
                      param_6 = (long *)plVar14[0x23];
                      if (param_6 != (long *)0x0) {
                        LOCK();
                        param_6[1] = param_6[1] + 1;
                        UNLOCK();
                      }
                      plStack_148 = (long *)plVar14[0x24];
                      uStack_150 = param_6;
                      if ((uStack_158 == (char *)0x0) || (*uStack_158 == '\0')) goto LAB_0b9f5cb3;
                      func_0x09f5b000(plStack_148,plStack_1c0 + 0x18);
                      uStack_158 = (char *)0x0;
                      uStack_150 = (long *)0x0;
                      if (param_6 != (long *)0x0) {
                        LOCK();
                        plVar14 = param_6 + 1;
                        lVar17 = *plVar14;
                        *plVar14 = *plVar14 + -1;
                        UNLOCK();
                        if (lVar17 == 0) {
                          (**(code **)(*param_6 + 0x10))(param_6);
                          func_0x0412c2d0(param_6);
                        }
                        plVar14 = uStack_150;
                        plStack_148 = (long *)0x0;
                        if (uStack_150 != (long *)0x0) {
                          LOCK();
                          plVar15 = uStack_150 + 1;
                          lVar17 = *plVar15;
                          *plVar15 = *plVar15 + -1;
                          UNLOCK();
                          if (lVar17 == 0) {
                            (**(code **)(*uStack_150 + 0x10))(uStack_150);
                            func_0x0412c2d0(plVar14);
                          }
                        }
                      }
                      plVar15 = plStack_1b8;
                      plVar14 = plStack_1b0;
                      if (plStack_1b8 != (long *)0x0) {
                        for (; plVar15 != plVar14; plVar14 = plVar14 + -1) {
                          plVar21 = (long *)plVar14[-1];
                          plVar14[-1] = 0;
                          if (plVar21 != (long *)0x0) {
                            (**(code **)(*plVar21 + 8))();
                          }
                        }
                        func_0x0412a280(plVar15,(long)plStack_1a8 - (long)plVar15);
                      }
                    }
                    else {
                      func_0x0d859380(&uStack_198,lVar17);
                      puStack_88 = (undefined *)((long)&uStack_198 + 1);
                      uStack_80 = (ulong)uStack_198 >> 1 & 0x7f;
                      if (((ulong)uStack_198 & 1) != 0) {
                        uStack_80 = uStack_190;
                        puStack_88 = puStack_188;
                      }
                      func_0x0470d9a0(apuStack_108,&UNK_01455a68,0x49,0xd,&puStack_88);
                      if (((ulong)uStack_198 & 1) != 0) {
                        func_0x0412a280(puStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
                      }
                      if (((ulong)apuStack_108[0] & 1) != 0) {
                        func_0x0412a280(puStack_f8,(ulong)apuStack_108[0] & 0xfffffffffffffffe);
                      }
                      if (pcStack_138 != (code *)0x0) {
                        (*pcStack_138)(&uStack_150);
                      }
                    }
                  }
                  else {
                    func_0x0d859380(&uStack_198,lVar17);
                    puStack_88 = (undefined *)((long)&uStack_198 + 1);
                    uStack_80 = (ulong)uStack_198 >> 1 & 0x7f;
                    if (((ulong)uStack_198 & 1) != 0) {
                      uStack_80 = uStack_190;
                      puStack_88 = puStack_188;
                    }
                    func_0x0470d9a0(apuStack_108,&UNK_013ee2b6,0x46,0xd,&puStack_88);
                    if (((ulong)uStack_198 & 1) != 0) {
                      func_0x0412a280(puStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
                    }
                    if (((ulong)apuStack_108[0] & 1) != 0) {
                      func_0x0412a280(puStack_f8,(ulong)apuStack_108[0] & 0xfffffffffffffffe);
                    }
                    if (pcStack_138 != (code *)0x0) {
                      (*pcStack_138)(&uStack_150);
                    }
                  }
                }
                else {
                  func_0x0d859380(&uStack_198,lVar17);
                  puStack_88 = (undefined *)((long)&uStack_198 + 1);
                  uStack_80 = (ulong)uStack_198 >> 1 & 0x7f;
                  if (((ulong)uStack_198 & 1) != 0) {
                    uStack_80 = uStack_190;
                    puStack_88 = puStack_188;
                  }
                  func_0x0470d9a0(apuStack_108,&UNK_013855ef,0x4d,0xd,&puStack_88);
                  if (((ulong)uStack_198 & 1) != 0) {
                    func_0x0412a280(puStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
                  }
                  if (((ulong)apuStack_108[0] & 1) != 0) {
                    func_0x0412a280(puStack_f8,(ulong)apuStack_108[0] & 0xfffffffffffffffe);
                  }
                  if (pcStack_138 != (code *)0x0) {
                    (*pcStack_138)(&uStack_150);
                  }
                }
                return;
              }
              lVar17 = 0x28;
              if (ppuStack_e8 != (undefined **)0x0) goto LAB_0b9f4d0a;
              if (pcStack_138 == (code *)&uStack_158) goto LAB_0b9f4d21;
LAB_0b9f49f3:
              if (pcStack_138 == (code *)0x0) goto joined_r0x0b9f4d2f;
              (**(code **)(*(long *)pcStack_138 + 0x28))();
              if (plVar14 < unaff_R13) goto LAB_0b9f4afd;
LAB_0b9f4a10:
              plVar21 = plStack_1b8;
              lVar17 = (long)plVar14 - (long)plStack_1b8;
              uVar1 = (lVar17 >> 3) + 1;
              if (0x1fffffffffffffff < uVar1) goto LAB_0b9f5f7a;
              uVar23 = (long)unaff_R13 - (long)plStack_1b8;
              uVar24 = (long)uVar23 >> 2;
              if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                uVar24 = uVar1;
              }
              if (0x7ffffffffffffff7 < uVar23) {
                uVar24 = 0x1fffffffffffffff;
              }
              if (uVar24 < 0x2000000000000000) {
                lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                if (lVar20 == 0) {
                  FUN_0eec74c0(uVar24 * 8,0);
                }
                plVar14 = (long *)(lVar20 + uVar24 * 8);
                *(long *)(lVar20 + lVar17) = lVar19;
                plStack_1d0 = (long *)(lVar20 + lVar17 + 8);
                unaff_R13 = (long *)(lVar20 + lVar17 + (lVar17 >> 3) * -8);
                func_0x0eee2f00(unaff_R13,plVar21,lVar17);
                plVar15 = plStack_a0;
                plStack_1b8 = unaff_R13;
                plStack_1a8 = plVar14;
                if (plVar21 != (long *)0x0) {
                  func_0x0412a280(plVar21,uVar23);
                  plVar15 = plStack_a0;
                }
                goto LAB_0b9f4b0f;
              }
            }
            else {
              LOCK();
              plVar15 = plVar14 + 1;
              lVar19 = *plVar15;
              *plVar15 = *plVar15 + -1;
              UNLOCK();
              if (lVar19 != 0) {
                plStack_148 = (long *)0x0;
                goto LAB_0b9f3e94;
              }
              (**(code **)(*plVar14 + 0x10))(plVar14);
              func_0x0412c2d0(plVar14);
              plVar14 = uStack_150;
              plStack_148 = (long *)0x0;
              if (uStack_150 == (long *)0x0) goto LAB_0b9f3e94;
              plStack_148 = (long *)0x0;
              LOCK();
              plVar15 = uStack_150 + 1;
              lVar19 = *plVar15;
              *plVar15 = *plVar15 + -1;
              UNLOCK();
              if (lVar19 != 0) goto LAB_0b9f3e94;
              (**(code **)(*uStack_150 + 0x10))(uStack_150);
              func_0x0412c2d0(plVar14);
              if (plVar21 < plStack_1a8) goto LAB_0b9f3ea8;
LAB_0b9f3eff:
              plVar14 = plStack_1b8;
              lVar19 = (long)plVar21 - (long)plStack_1b8;
              uVar1 = (lVar19 >> 3) + 1;
              if (uVar1 < 0x2000000000000000) {
                uVar23 = (long)plStack_1a8 - (long)plStack_1b8;
                uVar24 = (long)uVar23 >> 2;
                if ((ulong)((long)uVar23 >> 2) <= uVar1) {
                  uVar24 = uVar1;
                }
                if (0x7ffffffffffffff7 < uVar23) {
                  uVar24 = 0x1fffffffffffffff;
                }
                if (uVar24 < 0x2000000000000000) {
                  lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24 * 8);
                  if (lVar20 == 0) {
                    FUN_0eec74c0(uVar24 * 8,0);
                  }
                  plStack_1c8 = (long *)(lVar20 + uVar24 * 8);
                  *(long *)(lVar20 + lVar19) = lVar17;
                  plStack_1d0 = (long *)(lVar20 + lVar19 + 8);
                  plVar15 = (long *)(lVar20 + lVar19 + (lVar19 >> 3) * -8);
                  func_0x0eee2f00(plVar15,plVar14,lVar19);
                  plStack_1b8 = plVar15;
                  plStack_1a8 = plStack_1c8;
                  if (plVar14 != (long *)0x0) {
                    func_0x0412a280(plVar14,uVar23);
                  }
                  goto LAB_0b9f3fc8;
                }
              }
              else {
                func_0x05fe8060();
              }
              func_0x04882eb0();
LAB_0b9f5f3e:
              func_0x05fe8060();
LAB_0b9f5f43:
              func_0x04882eb0();
LAB_0b9f5f48:
              func_0x05fe8060();
LAB_0b9f5f4d:
              func_0x04882eb0();
LAB_0b9f5f52:
              func_0x05fe8060();
LAB_0b9f5f57:
              func_0x04882eb0();
LAB_0b9f5f5c:
              func_0x05fe8060();
LAB_0b9f5f61:
              func_0x04882eb0();
LAB_0b9f5f66:
              func_0x05fe8060();
LAB_0b9f5f6b:
              func_0x04882eb0();
LAB_0b9f5f70:
              func_0x05fe8060();
LAB_0b9f5f75:
              func_0x04882eb0();
LAB_0b9f5f7a:
              func_0x05fe8060();
            }
            func_0x04882eb0();
          }
          else {
LAB_0b9f393b:
            plVar21 = plStack_170;
            if (pcStack_160 == (code *)0x0) {
              uStack_158 = (char *)0x0;
              uStack_150 = (long *)0x0;
              func_0x048b1dc0(&uStack_158);
              lVar17 = (long)uStack_158;
              plVar21 = uStack_150;
              if (uStack_158 != (char *)0x0) goto LAB_0b9f3970;
LAB_0b9f39dd:
              lVar17 = func_0x048aead0(plVar21);
              bVar3 = *(byte *)(lVar17 + 0x19);
              plVar21 = plStack_170;
              lVar17 = lStack_168;
            }
            else {
              lVar17 = lStack_168;
              if ((lStack_168 == 0) &&
                 ((*pcStack_160)(0,&uStack_198,0), lVar17 = lStack_168, lStack_168 == 0))
              goto LAB_0b9f39dd;
LAB_0b9f3970:
              bVar3 = *(byte *)(lVar17 + 0x19);
              plVar21 = plStack_170;
              lVar17 = lStack_168;
            }
            plStack_170 = plVar21;
            lStack_168 = lVar17;
            if ((bVar3 & 1) == 0) {
              if (pcStack_160 == (code *)0x0) {
                uStack_158 = (char *)0x0;
                uStack_150 = (long *)0x0;
                func_0x048b1dc0(&uStack_158);
                lVar17 = (long)uStack_158;
                plVar21 = uStack_150;
joined_r0x0b9f3a11:
                if (lVar17 != 0) goto LAB_0b9f39a6;
                lVar17 = func_0x048aead0(plVar21);
                bVar3 = *(byte *)(lVar17 + 0x19);
              }
              else {
                if (lVar17 == 0) {
                  (*pcStack_160)(0,&uStack_198,0);
                  lVar17 = lStack_168;
                  goto joined_r0x0b9f3a11;
                }
LAB_0b9f39a6:
                bVar3 = *(byte *)(lVar17 + 0x19);
              }
              if ((bVar3 & 2) == 0) goto LAB_0b9f3b6f;
            }
            if (ppuStack_68 == (undefined **)0x0) {
LAB_0b9f3a82:
              puStack_f8 = &UNK_0488e0b0;
              pcStack_f0 = (code *)0x0;
              ppuStack_e8 = (undefined **)CONCAT35(ppuStack_e8._5_3_,0x48b5725f);
              apuStack_108[0] = (undefined *)0x0;
              plStack_e0 = plStack_170;
              plStack_d8 = (long *)0x0;
              pcStack_d0 = (code *)0x0;
              if ((pcStack_160 == (code *)0x0) ||
                 ((*pcStack_160)(0x100,&uStack_198,apuStack_108), plVar21 = plStack_e0,
                 pcStack_d0 == (code *)0x0)) {
                plStack_b8 = (long *)0x0;
                plStack_b0 = (long *)0x0;
                func_0x048b1dc0(&plStack_b8);
                plVar22 = plStack_b8;
                plVar21 = plStack_b0;
              }
              else {
                plVar22 = plStack_d8;
                if (plStack_d8 == (long *)0x0) {
                  (*pcStack_d0)(0,apuStack_108,0);
                  plVar22 = plStack_d8;
                }
              }
              if (pcStack_f0 != (code *)0x0) {
                (*pcStack_f0)(apuStack_108);
              }
              if (plVar21 != plVar15) goto LAB_0b9f3b6f;
              if (plVar22 == (long *)0x0) {
                lVar17 = func_0x048aead0(plVar21);
                iVar10 = *(int *)(lVar17 + 8);
                if (plStack_1d0 == (long *)0x0) goto LAB_0b9f5492;
LAB_0b9f3ecc:
                if (iVar10 != (int)plStack_1d0[1]) goto LAB_0b9f3b6f;
              }
              else {
                iVar10 = (int)plVar22[1];
                if (plStack_1d0 != (long *)0x0) goto LAB_0b9f3ecc;
LAB_0b9f5492:
                lVar17 = func_0x048aead0(plVar15);
                if (iVar10 != *(int *)(lVar17 + 8)) goto LAB_0b9f3b6f;
                plStack_1d0 = (long *)func_0x048aead0(plVar15);
              }
              uVar4 = *(uint *)(*plStack_1d0 + 4);
              plVar15 = plStack_110 + 1;
              plVar21 = (long *)plStack_110[1];
              plVar22 = plVar15;
              if (plVar21 != (long *)0x0) {
                do {
                  if (*(uint *)(plVar21 + 4) >= uVar4) {
                    plVar22 = plVar21;
                  }
                  plVar21 = (long *)plVar21[*(uint *)(plVar21 + 4) < uVar4];
                } while (plVar21 != (long *)0x0);
                if ((plVar22 != plVar15) && (*(uint *)(plVar22 + 4) <= uVar4)) goto LAB_0b9f3b6f;
              }
              lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
              if (lVar17 == 0) {
                FUN_0eec74c0(0x80,0);
              }
              if (ppuStack_68 == (undefined **)0x0) {
                ppuStack_e8 = (undefined **)0x0;
              }
              else if (ppuStack_68 == &puStack_88) {
                ppuStack_e8 = apuStack_108;
                (**(code **)(*ppuStack_68 + 0x18))();
              }
              else {
                ppuStack_e8 = ppuStack_68;
                ppuStack_68 = (undefined **)0x0;
              }
              plStack_b8 = plStack_98;
              plStack_b0 = plStack_90;
              plStack_98 = (long *)0x0;
              plStack_90 = (long *)0x0;
              func_0x049e8ab0(lVar17,&uStack_198,apuStack_108,&plStack_b8);
              plVar21 = plStack_b0;
              lStack_1a0 = lVar17;
              if (plStack_b0 != (long *)0x0) {
                LOCK();
                plVar22 = plStack_b0 + 1;
                lVar17 = *plVar22;
                *plVar22 = *plVar22 + -1;
                UNLOCK();
                if (lVar17 == 0) {
                  (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
                  func_0x0412c2d0(plVar21);
                }
              }
              if (ppuStack_e8 == apuStack_108) {
                lVar17 = 0x20;
LAB_0b9f5898:
                (**(code **)(*ppuStack_e8 + lVar17))();
              }
              else {
                lVar17 = 0x28;
                if (ppuStack_e8 != (undefined **)0x0) goto LAB_0b9f5898;
              }
              plVar21 = (long *)*plVar15;
              while (plVar22 = plVar15, plVar21 != (long *)0x0) {
                while (plVar22 = plVar21, *(uint *)(plVar22 + 4) <= uVar4) {
                  if (uVar4 <= *(uint *)(plVar22 + 4)) goto LAB_0b9f5a83;
                  plVar21 = (long *)plVar22[1];
                  if ((long *)plVar22[1] == (long *)0x0) {
                    plVar15 = plVar22 + 1;
                    goto LAB_0b9f58d9;
                  }
                }
                plVar15 = plVar22;
                plVar21 = (long *)*plVar22;
              }
LAB_0b9f58d9:
              plVar21 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
              if (plVar21 == (long *)0x0) {
                FUN_0eec74c0(0x30,0);
              }
              plVar16 = plStack_110;
              *(uint *)(plVar21 + 4) = uVar4;
              plVar21[5] = 0;
              *plVar21 = 0;
              plVar21[1] = 0;
              plVar21[2] = (long)plVar22;
              *plVar15 = (long)plVar21;
              if (*(long *)*plStack_110 != 0) {
                *plStack_110 = *(long *)*plStack_110;
              }
              func_0x048bed00(plStack_110[1],plVar21);
              plVar16[2] = plVar16[2] + 1;
              plVar22 = plVar21;
LAB_0b9f5a83:
              lVar19 = lStack_1a0;
              lStack_1a0 = 0;
              lVar17 = plVar22[5];
              plVar22[5] = lVar19;
              if (lVar17 == 0) goto LAB_0b9f3b6f;
              plVar15 = *(long **)(lVar17 + 0x78);
              if (plVar15 != (long *)0x0) {
                LOCK();
                plVar21 = plVar15 + 1;
                lVar19 = *plVar21;
                *plVar21 = *plVar21 + -1;
                UNLOCK();
                if (lVar19 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                  func_0x0412c2d0(plVar15);
                }
              }
              plVar15 = *(long **)(lVar17 + 0x60);
              if (plVar15 == (long *)(lVar17 + 0x40)) {
                lVar19 = 0x20;
LAB_0b9f5aec:
                (**(code **)(*plVar15 + lVar19))();
              }
              else {
                lVar19 = 0x28;
                if (plVar15 != (long *)0x0) goto LAB_0b9f5aec;
              }
              if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
                (**(code **)(lVar17 + 0x18))(lVar17);
              }
              func_0x0412a280(lVar17,0x80);
              lVar17 = lStack_1a0;
              lStack_1a0 = 0;
              if (lVar17 == 0) goto LAB_0b9f3b6f;
              plVar15 = *(long **)(lVar17 + 0x78);
              if (plVar15 != (long *)0x0) {
                LOCK();
                plVar21 = plVar15 + 1;
                lVar19 = *plVar21;
                *plVar21 = *plVar21 + -1;
                UNLOCK();
                if (lVar19 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                  func_0x0412c2d0(plVar15);
                }
              }
              plVar15 = *(long **)(lVar17 + 0x60);
              if (plVar15 == (long *)(lVar17 + 0x40)) {
                lVar19 = 0x20;
LAB_0b9f5c62:
                (**(code **)(*plVar15 + lVar19))();
              }
              else {
                lVar19 = 0x28;
                if (plVar15 != (long *)0x0) goto LAB_0b9f5c62;
              }
              if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
                (**(code **)(lVar17 + 0x18))(lVar17);
              }
              func_0x0412a280(lVar17,0x80);
              goto LAB_0b9f3b6f;
            }
            func_0x049e8590(&uStack_158,&uStack_198);
            if (ppuStack_68 != (undefined **)0x0) {
              cVar9 = (**(code **)(*ppuStack_68 + 0x30))(ppuStack_68,&uStack_158);
              if (pcStack_140 != (code *)0x0) {
                (*pcStack_140)(&uStack_158);
              }
              if (cVar9 == '\0') goto LAB_0b9f3b6f;
              goto LAB_0b9f3a82;
            }
          }
          func_0x04891200();
LAB_0b9f5f89:
          uVar18 = func_0x04891200();
          uVar18 = func_0x04882e20(uVar18);
          uVar18 = func_0x04882e20(uVar18);
          uVar18 = func_0x04882e20(uVar18);
          uVar18 = func_0x04882e20(uVar18);
          uVar18 = func_0x04882e20(uVar18);
          uVar18 = func_0x04882e20(uVar18);
          uVar18 = func_0x04882e20(uVar18);
          func_0x049e8660(&lStack_1a0);
          func_0x049e8470(&plStack_98);
          lVar17 = 0x20;
          if ((ppuStack_68 == &puStack_88) || (lVar17 = 0x28, ppuStack_68 != (undefined **)0x0)) {
            (**(code **)(*ppuStack_68 + lVar17))();
          }
          if (pcStack_180 != (code *)0x0) {
            (*pcStack_180)(&uStack_198);
          }
          func_0x049e8470(&plStack_c8);
          func_0x05f92970(&plStack_1b8);
          func_0x0b9f66d0(plStack_1c0 + 0x23);
          func_0x048dca00(plStack_38);
          lVar17 = plStack_1c0[0x1f];
          plStack_1c0[0x1f] = 0;
          if (lVar17 != 0) {
            func_0x0412a280(lVar17,1);
          }
          func_0x048e0530(plStack_58);
          func_0x05f92b00(plStack_1c0);
          func_0x0eee2d70(uVar18);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
LAB_0b9f5cb3:
    func_0x04890760();
LAB_0b9f5cb8:
    FUN_0eec74c0(0x78,0);
  } while( true );
}


