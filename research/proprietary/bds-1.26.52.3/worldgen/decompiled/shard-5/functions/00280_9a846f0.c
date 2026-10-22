/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9b846f0 (ELF vaddr 0x9a846f0)
 * Label: caller-of-callee
 * Body:  [[09b846f0, 09b85651] [09b85660, 09b86671] [09b86680, 09b87461] [09b87470, 09b88251] [09b88260, 09b88be1] [09b88bf0, 09b89571] [09b89580, 09b89ca1] [09b89cb0, 09b8c7b7]]
 * Ghidra: FUN_09b846f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09b846f0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long unaff_RBP;
  bool bVar22;
  undefined *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined **ppuStack_298;
  long lStack_290;
  undefined **ppuStack_288;
  long lStack_280;
  undefined1 uStack_278;
  undefined4 uStack_277;
  undefined2 uStack_273;
  undefined1 uStack_271;
  undefined1 uStack_270;
  undefined2 uStack_26f;
  undefined5 uStack_26d;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  undefined4 uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined2 uStack_1f8;
  undefined2 uStack_1f6;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined1 uStack_1ec;
  undefined *puStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  char cStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  char cStack_d8;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  byte bStack_80;
  undefined4 uStack_7f;
  undefined4 uStack_7b;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char cStack_38;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar12 = (long *)(*(long *)(param_2 + 2) + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = *(long **)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  *(undefined4 *)(param_1 + 0xa4) = uVar6;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      func_0x0412c2d0(plVar12);
    }
  }
  plStack_b8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plStack_b8 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *plStack_b8 = (long)&UNK_0f1d7e80;
  plStack_b8[6] = (long)(plStack_b8 + 2);
  plStack_b8[2] = (long)&UNK_0f1d7df0;
  bStack_80 = 0x20;
  uStack_7f = _DAT_013b680d;
  uStack_7b = _UNK_013b6811;
  uStack_77 = _UNK_013b6815;
  uStack_73 = _UNK_013b6819;
  uStack_6f = 0;
  func_0x09c070f0(&puStack_2b8,*(undefined8 *)(param_1 + 0x98),&bStack_80,&plStack_b8);
  puVar15 = puStack_2b8;
  lVar14 = param_1 + 0x20;
  puVar16 = *(undefined8 **)(param_1 + 0x28);
  if (puVar16 < *(undefined8 **)(param_1 + 0x30)) {
    puStack_2b8 = (undefined *)0x0;
    *puVar16 = puVar15;
    if (ppuStack_288 == (undefined **)0x0) {
      puVar16[6] = 0;
    }
    else if (ppuStack_288 == &puStack_2a8) {
      puVar16[6] = puVar16 + 2;
      (**(code **)(*ppuStack_288 + 0x18))();
    }
    else {
      puVar16[6] = ppuStack_288;
      ppuStack_288 = (undefined **)0x0;
    }
    puVar16 = puVar16 + 8;
  }
  else {
    puVar16 = (undefined8 *)func_0x09ba2c10(lVar14,&puStack_2b8);
  }
  puVar15 = puStack_2b8;
  *(undefined8 **)(param_1 + 0x28) = puVar16;
  puStack_2b8 = (undefined *)0x0;
  if (puVar15 == (undefined *)0x0) {
LAB_09b84889:
    if (ppuStack_288 == &puStack_2a8) {
      lVar11 = 0x20;
LAB_09b84aeb:
      (**(code **)(*ppuStack_288 + lVar11))();
      plVar12 = plStack_b8;
    }
    else {
      lVar11 = 0x28;
      plVar12 = plStack_b8;
      if (ppuStack_288 != (undefined **)0x0) goto LAB_09b84aeb;
    }
    plStack_b8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plStack_b8 = (long *)0x0;
      (**(code **)(*plVar12 + 8))();
    }
    if ((bStack_80 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_73._3_1_)),
                      CONCAT35((undefined3)uStack_7b,CONCAT41(uStack_7f,bStack_80)) &
                      0xfffffffffffffffe);
    }
    lVar11 = *(long *)(param_1 + 8);
    puVar15 = *(undefined **)(param_1 + 0x10);
    if (puVar15 != (undefined *)0x0) {
      LOCK();
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
      UNLOCK();
    }
    lStack_110 = param_1;
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    puStack_2b8 = &UNK_0f1d7ed0;
    *plVar12 = (long)&UNK_0f1d7f60;
    plVar12[6] = (long)(plVar12 + 2);
    plVar12[2] = (long)&UNK_0f1d7ed0;
    plVar12[3] = lVar11;
    plVar12[4] = (long)puVar15;
    puStack_2b0 = (undefined8 *)lVar11;
    puStack_2a8 = puVar15;
    ppuStack_298 = &puStack_2b8;
    if (puVar15 != (undefined *)0x0) {
      LOCK();
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
      UNLOCK();
      func_0x0412c2d0(puVar15);
    }
    puVar16 = *(undefined8 **)(lStack_110 + 8);
    puVar15 = *(undefined **)(lStack_110 + 0x10);
    if (puVar15 != (undefined *)0x0) {
      LOCK();
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
      UNLOCK();
    }
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    puStack_2b8 = &UNK_0f1d8018;
    *plVar13 = (long)&UNK_0f1d80a8;
    plVar13[6] = (long)(plVar13 + 2);
    plVar13[2] = (long)&UNK_0f1d8018;
    plVar13[3] = (long)puVar16;
    plVar13[4] = (long)puVar15;
    puStack_2b0 = puVar16;
    puStack_2a8 = puVar15;
    ppuStack_298 = &puStack_2b8;
    if (puVar15 != (undefined *)0x0) {
      LOCK();
      *(long *)(puVar15 + 0x10) = *(long *)(puVar15 + 0x10) + 1;
      UNLOCK();
      func_0x0412c2d0(puVar15);
    }
    uVar1 = *(undefined8 *)(lStack_110 + 0x98);
    puStack_88 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_88 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar7 = _UNK_01314d52;
    uStack_98 = 0x21;
    uStack_90 = 0x1d;
    *(ulong *)((long)puStack_88 + 0xd) = CONCAT53(_UNK_01314d4d,_DAT_01314d4a);
    *(undefined8 *)((long)puStack_88 + 0x15) = uVar7;
    uVar5 = _UNK_01314d49;
    uVar4 = _UNK_01314d45;
    uVar3 = _UNK_01314d41;
    *puStack_88 = _DAT_01314d3d;
    puStack_88[1] = uVar3;
    puStack_88[2] = uVar4;
    puStack_88[3] = uVar5;
    *(undefined1 *)((long)puStack_88 + 0x1d) = 0;
    plStack_c0 = plVar12;
    func_0x09c070f0(&puStack_2b8,uVar1,&uStack_98,&plStack_c0);
    unaff_RBP = lStack_110;
    puVar15 = puStack_2b8;
    puVar16 = *(undefined8 **)(lStack_110 + 0x28);
    if (puVar16 < *(undefined8 **)(lStack_110 + 0x30)) {
      puStack_2b8 = (undefined *)0x0;
      *puVar16 = puVar15;
      if (ppuStack_288 == (undefined **)0x0) {
        puVar16[6] = 0;
      }
      else if (ppuStack_288 == &puStack_2a8) {
        puVar16[6] = puVar16 + 2;
        (**(code **)(*ppuStack_288 + 0x18))();
      }
      else {
        puVar16[6] = ppuStack_288;
        ppuStack_288 = (undefined **)0x0;
      }
      puVar16 = puVar16 + 8;
    }
    else {
      puVar16 = (undefined8 *)func_0x09ba2c10(lVar14,&puStack_2b8);
    }
    puVar15 = puStack_2b8;
    *(undefined8 **)(unaff_RBP + 0x28) = puVar16;
    puStack_2b8 = (undefined *)0x0;
    if (puVar15 != (undefined *)0x0) {
      puStack_1e8 = puVar15;
      if (ppuStack_288 == (undefined **)0x0) goto LAB_09b8c0eb;
      (**(code **)(*ppuStack_288 + 0x30))(ppuStack_288,&puStack_1e8);
    }
    if (ppuStack_288 == &puStack_2a8) {
      lVar11 = 0x20;
LAB_09b84cb0:
      (**(code **)(*ppuStack_288 + lVar11))();
      plVar12 = plStack_c0;
    }
    else {
      lVar11 = 0x28;
      plVar12 = plStack_c0;
      if (ppuStack_288 != (undefined **)0x0) goto LAB_09b84cb0;
    }
    plStack_c0 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plStack_c0 = (long *)0x0;
      (**(code **)(*plVar12 + 8))();
    }
    if ((uStack_98 & 1) != 0) {
      func_0x0412a280(puStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    uVar1 = *(undefined8 *)(unaff_RBP + 0x98);
    puStack_a0 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_a0 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar7 = _UNK_01482a10;
    uStack_b0 = 0x21;
    uStack_a8 = 0x1b;
    *(ulong *)((long)puStack_a0 + 0xb) =
         CONCAT35(_UNK_01482a0d,CONCAT41(_UNK_01482a09,DAT_01482a08));
    *(undefined8 *)((long)puStack_a0 + 0x13) = uVar7;
    uVar5 = _UNK_01482a09;
    uVar4 = _UNK_01482a05;
    uVar3 = _UNK_01482a01;
    *puStack_a0 = _DAT_014829fd;
    puStack_a0[1] = uVar3;
    puStack_a0[2] = uVar4;
    puStack_a0[3] = uVar5;
    *(undefined1 *)((long)puStack_a0 + 0x1b) = 0;
    plStack_c8 = plVar13;
    func_0x09c070f0(&puStack_2b8,uVar1,&uStack_b0,&plStack_c8);
    puVar15 = puStack_2b8;
    puVar16 = *(undefined8 **)(unaff_RBP + 0x28);
    if (puVar16 < *(undefined8 **)(unaff_RBP + 0x30)) {
      puStack_2b8 = (undefined *)0x0;
      *puVar16 = puVar15;
      if (ppuStack_288 == (undefined **)0x0) {
        puVar16[6] = 0;
      }
      else if (ppuStack_288 == &puStack_2a8) {
        puVar16[6] = puVar16 + 2;
        (**(code **)(*ppuStack_288 + 0x18))();
      }
      else {
        puVar16[6] = ppuStack_288;
        ppuStack_288 = (undefined **)0x0;
      }
      puVar16 = puVar16 + 8;
    }
    else {
      puVar16 = (undefined8 *)func_0x09ba2c10(lVar14,&puStack_2b8);
    }
    puVar15 = puStack_2b8;
    *(undefined8 **)(unaff_RBP + 0x28) = puVar16;
    puStack_2b8 = (undefined *)0x0;
    if (puVar15 != (undefined *)0x0) {
      puStack_1e8 = puVar15;
      if (ppuStack_288 == (undefined **)0x0) goto LAB_09b8c0f0;
      (**(code **)(*ppuStack_288 + 0x30))(ppuStack_288,&puStack_1e8);
    }
    if (ppuStack_288 == &puStack_2a8) {
      lVar14 = 0x20;
LAB_09b84f67:
      (**(code **)(*ppuStack_288 + lVar14))();
      plVar12 = plStack_c8;
    }
    else {
      lVar14 = 0x28;
      plVar12 = plStack_c8;
      if (ppuStack_288 != (undefined **)0x0) goto LAB_09b84f67;
    }
    plStack_c8 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      plStack_c8 = (long *)0x0;
      (**(code **)(*plVar12 + 8))();
    }
    if ((uStack_b0 & 1) != 0) {
      func_0x0412a280(puStack_a0,uStack_b0 & 0xfffffffffffffffe);
    }
    unaff_RBP = *(long *)(unaff_RBP + 0x98);
    if ((DAT_0f647bb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647bb8), iVar10 != 0)) {
      func_0x09bc3410();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f647b38,0xf53dab8);
      FUN_0410844d(&DAT_0f647bb8);
    }
    lVar14 = unaff_RBP + 0x140;
    plVar12 = (long *)(*(long *)(unaff_RBP + 0x158) +
                      (ulong)((int)((ulong)(*(long *)(unaff_RBP + 0x160) -
                                           *(long *)(unaff_RBP + 0x158)) >> 3) - 1U &
                             *(uint *)(_DAT_0f647b38 + 4)) * 8);
    do {
      lVar11 = *plVar12;
      if (lVar11 == -1) goto LAB_09b84e13;
      plVar12 = (long *)(*(long *)(unaff_RBP + 0x170) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(unaff_RBP + 0x170) + 8 + lVar11 * 0x18) !=
             *(uint *)(_DAT_0f647b38 + 4));
    if (plVar12 == *(long **)(unaff_RBP + 0x178)) {
LAB_09b84e13:
      puVar15 = &DAT_0f647b38;
      if (iRam000000000f647b98 != -0x2b3da790) goto LAB_09b84e84;
LAB_09b84e41:
      lVar11 = *(long *)(puVar15 + 0x68);
      if (lVar11 == 0) goto LAB_09b84e84;
      bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
      lVar17 = lVar11 + 9;
      if (bVar22) {
        lVar17 = *(long *)(lVar11 + 0x18);
      }
      uVar19 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
      if (bVar22) {
        uVar19 = *(ulong *)(lVar11 + 0x10);
      }
      func_0x09bcb580(&uStack_180,lVar14,lVar17,uVar19);
    }
    else {
      puVar15 = (undefined *)plVar12[2];
      if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b84e41;
LAB_09b84e84:
      func_0x09bcb580(&uStack_180,lVar14,0,0);
    }
    if (cStack_150 == '\0') {
      uStack_1d8._4_4_ = (uint)((ulong)uStack_1d8 >> 0x20);
      if (DAT_0f647b20 == '\0') goto LAB_09b8c0f5;
      goto LAB_09b84eb5;
    }
  }
  else {
    puStack_1e8 = puVar15;
    if (ppuStack_288 != (undefined **)0x0) {
      (**(code **)(*ppuStack_288 + 0x30))(ppuStack_288,&puStack_1e8);
      goto LAB_09b84889;
    }
    func_0x04891200();
LAB_09b8c0eb:
    func_0x04891200();
LAB_09b8c0f0:
    func_0x04891200();
LAB_09b8c0f5:
    iVar10 = func_0x04108328(&DAT_0f647b20);
    if (iVar10 != 0) {
      func_0x09bc3080();
      FUN_0410844d(&DAT_0f647b20);
    }
LAB_09b84eb5:
    if ((DAT_0f6484d0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6484d0), iVar10 != 0)) {
      func_0x09bcc1a0(0xf6484b8);
      FUN_0410844d(&DAT_0f6484d0);
    }
    puStack_2b8 = (undefined *)CONCAT44(puStack_2b8._4_4_,_DAT_0f6484bc);
    puStack_2b0 = (undefined8 *)&SUB_09bcc0b0;
    puStack_2a8 = &UNK_09bcc190;
    func_0x05da1460(&uStack_178);
    lVar11 = func_0x09bcc0b0(CONCAT44(uStack_17c,uStack_180) + 0x18);
    if ((*(byte *)(lVar11 + 0x1a) & 4) != 0) {
      func_0x09bcbb70(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
      if (uStack_2a0._4_4_ == 2) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x16;
          iVar10 = *piVar18;
        }
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
        while ((undefined8 *)puVar2 != puStack_2b0) {
          piVar18 = *(int **)(piVar18 + 0xe);
          puVar2 = *(undefined1 **)(piVar18 + 0xc);
        }
      }
      else {
        if (uStack_2a0._4_4_ != 1) {
          if (uStack_2a0._4_4_ == 0) {
            *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
          }
          goto LAB_09b8500e;
        }
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
LAB_09b8500e:
    uStack_118 = CONCAT71(uStack_14f,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x09bcbb70(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar2 = *(undefined1 **)(piVar18 + 0xc);
      while ((undefined8 *)puVar2 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
      }
LAB_09b8510a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8510a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f647b20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647b20), iVar10 != 0)) {
      func_0x09bc3080();
      FUN_0410844d(&DAT_0f647b20);
    }
    lVar11 = uStack_148;
    uStack_120 = 0x215f685300000001;
    if ((DAT_0f647bb8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647bb8), iVar10 != 0)) {
      func_0x09bc3410();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f647b38,0xf53dab8);
      FUN_0410844d(&DAT_0f647bb8);
    }
    puStack_2b0 = (undefined8 *)(lVar11 + 0x18);
    plVar12 = (long *)(*(long *)(lVar11 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f647b38 + 4)) * 8);
    do {
      lVar17 = *plVar12;
      if (lVar17 == -1) goto LAB_09b851a0;
      plVar12 = (long *)(*(long *)(lVar11 + 0x30) + lVar17 * 0x18);
    } while (*(uint *)(*(long *)(lVar11 + 0x30) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f647b38 + 4)
            );
    if (plVar12 == *(long **)(lVar11 + 0x38)) {
LAB_09b851a0:
      puStack_2b8 = &DAT_0f647b38;
    }
    else {
      puStack_2b8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2b8,uStack_120._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,0x10);
    puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uStack_120._4_4_);
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    uStack_278 = 0xc;
    uStack_277 = 0x61726170;
    uStack_273 = 0x736d;
    uStack_271 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_140;
    FUN_048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f1d96a8;
    if (uStack_2a0 != (long *)0x0) {
      lVar11 = *uStack_2a0;
      uStack_2a0 = puVar16;
      (**(code **)(lVar11 + 8))();
      puVar16 = uStack_2a0;
    }
    uStack_2a0 = puVar16;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8._4_4_ << 0x20);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_09bcd310;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_09bcd010;
    puStack_1a8 = &UNK_09bcd3d0;
    puStack_1a0 = &UNK_09bcd630;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar16 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    ppuVar9 = ppuStack_298;
    puVar8 = uStack_2a0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_1e0 = plVar12 + 3;
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    plVar12[3] = (long)puVar8;
    plVar12[4] = (long)ppuVar9;
    plVar12[7] = lStack_280;
    plVar12[5] = lStack_290;
    plVar12[6] = (long)ppuStack_288;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    plVar12[10] = lStack_268;
    plVar12[8] = CONCAT17(uStack_271,CONCAT25(uStack_273,CONCAT41(uStack_277,uStack_278)));
    plVar12[9] = CONCAT53(uStack_26d,CONCAT21(uStack_26f,uStack_270));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    lStack_268 = 0;
    plVar12[0xb] = lStack_260;
    plVar12[0xc] = lStack_258;
    plVar12[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar12[0xe] = lStack_248;
    plVar12[0xf] = lStack_240;
    plVar12[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_230;
    plVar12[0x12] = lStack_228;
    plVar12[0x13] = lStack_220;
    plVar12[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar12[0x17] = lStack_200;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar12[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_108 = 0;
    uStack_100 = (long *)0x0;
    uStack_1d8 = plVar12;
    func_0x048afd20(puVar16,&puStack_1e8);
    plVar12 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_1d8 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_100 + 1;
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar11 = puVar16[2];
    iVar10 = *(int *)((long)puVar16 + 0x1c);
    if (iVar10 == 2) {
      piVar18 = *(int **)(*(long *)(lVar11 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(puVar16 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar16[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_09b8566a:
      piVar18[4] = piVar18[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar18 = *(int **)(*(long *)(lVar11 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != *(int *)(puVar16 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8566a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f647d28 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647d28), iVar10 != 0)) {
    func_0x09bcd0d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647ca8,0xf53dab8);
    FUN_0410844d(&DAT_0f647d28);
  }
  lVar11 = lStack_110;
  plVar12 = (long *)(*(long *)(unaff_RBP + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(unaff_RBP + 0x160) -
                                         *(long *)(unaff_RBP + 0x158)) >> 3) - 1U &
                           *(uint *)(_DAT_0f647ca8 + 4)) * 8);
  do {
    lVar17 = *plVar12;
    if (lVar17 == -1) goto LAB_09b856eb;
    plVar12 = (long *)(*(long *)(unaff_RBP + 0x170) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(unaff_RBP + 0x170) + 8 + lVar17 * 0x18) !=
           *(uint *)(_DAT_0f647ca8 + 4));
  if (plVar12 == *(long **)(unaff_RBP + 0x178)) {
LAB_09b856eb:
    puVar15 = &DAT_0f647ca8;
    if (iRam000000000f647d08 != -0x2b3da790) goto LAB_09b85764;
LAB_09b85721:
    lVar17 = *(long *)(puVar15 + 0x68);
    if (lVar17 == 0) goto LAB_09b85764;
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar20 = lVar17 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x09bcdab0(&uStack_180,lVar14,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b85721;
LAB_09b85764:
    func_0x09bcdab0(&uStack_180,lVar14,0,0);
  }
  if (cStack_150 == '\0') {
    func_0x09bce0a0(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8583a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8583a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bce660(&puStack_2b8,&uStack_180,&UNK_013b681e,10);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bcec10;
    puStack_1a0 = &UNK_09bcede0;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bce910(&puStack_2b8);
    cStack_d8 = cStack_150;
    uStack_e8 = uStack_160;
    uStack_e4 = uStack_15c;
    uStack_e0 = (undefined4)uStack_158;
    uStack_dc = uStack_158._4_4_;
    uStack_f8 = uStack_170;
    uStack_f4 = uStack_16c;
    uStack_f0 = uStack_168;
    uStack_ec = uStack_164;
    uStack_108 = CONCAT44(uStack_17c,uStack_180);
    uStack_100 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x048b0bc0(&uStack_2a0);
    func_0x09bce0a0(&puStack_2b8,uStack_108 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b85a7a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b85a7a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bce660(&puStack_2b8,&uStack_108,&UNK_01394a0b,9);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bcefc0;
    puStack_1a0 = &UNK_09bcf190;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bce910(&puStack_2b8);
    uStack_118 = CONCAT71(uStack_118._1_7_,cStack_d8);
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    uStack_120 = CONCAT44(uStack_dc,uStack_e0);
    uStack_138 = uStack_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    uStack_148 = uStack_108;
    uStack_140 = uStack_100;
    func_0x048b0bc0(&uStack_2a0);
    func_0x09bce0a0(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b85caa:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b85caa;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bce660(&puStack_2b8,&uStack_148,&UNK_01374325,7);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bcf370;
    puStack_1a0 = &UNK_09bcf530;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bce910(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  lVar14 = *(long *)(lVar11 + 0x98);
  if ((DAT_0f647db0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647db0), iVar10 != 0)) {
    func_0x09bcf7c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647d30,0xf53dab8);
    FUN_0410844d(&DAT_0f647db0);
  }
  lVar11 = lVar14 + 0x140;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647d30 + 4)) * 8);
  do {
    lVar17 = *plVar12;
    if (lVar17 == -1) goto LAB_09b85e63;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f647d30 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b85e63:
    puVar15 = &DAT_0f647d30;
    if (iRam000000000f647d90 != -0x2b3da790) goto LAB_09b85ed4;
LAB_09b85e91:
    lVar17 = *(long *)(puVar15 + 0x68);
    if (lVar17 == 0) goto LAB_09b85ed4;
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar20 = lVar17 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x09bd00b0(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b85e91;
LAB_09b85ed4:
    func_0x09bd00b0(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    if ((DAT_0f647dd0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647dd0), iVar10 != 0)) {
      func_0x09bcf8d0();
      FUN_0410844d(&DAT_0f647dd0);
    }
    if ((DAT_0f648588 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648588), iVar10 != 0)) {
      func_0x09bd0d60(0xf648570);
      FUN_0410844d(&DAT_0f648588);
    }
    puStack_2b8 = (undefined *)CONCAT44(puStack_2b8._4_4_,_DAT_0f648574);
    puStack_2b0 = (undefined8 *)&SUB_09bd0c70;
    puStack_2a8 = &UNK_09bd0d50;
    func_0x05da1460(&uStack_178);
    lVar17 = func_0x09bd0c70(CONCAT44(uStack_17c,uStack_180) + 0x18);
    if ((*(byte *)(lVar17 + 0x1a) & 4) != 0) {
      func_0x09bd06a0(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
      if (uStack_2a0._4_4_ == 2) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x16;
          iVar10 = *piVar18;
        }
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
        while ((undefined8 *)puVar2 != puStack_2b0) {
          piVar18 = *(int **)(piVar18 + 0xe);
          puVar2 = *(undefined1 **)(piVar18 + 0xc);
        }
      }
      else {
        if (uStack_2a0._4_4_ != 1) {
          if (uStack_2a0._4_4_ == 0) {
            *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
          }
          goto LAB_09b8602e;
        }
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
LAB_09b8602e:
    uStack_118 = CONCAT71(uStack_14f,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x09bd06a0(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar2 = *(undefined1 **)(piVar18 + 0xc);
      while ((undefined8 *)puVar2 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
      }
LAB_09b8612a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8612a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f647dd0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647dd0), iVar10 != 0)) {
      func_0x09bcf8d0();
      FUN_0410844d(&DAT_0f647dd0);
    }
    lVar17 = uStack_148;
    uStack_120 = 0x215f685300000001;
    if ((DAT_0f647db0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647db0), iVar10 != 0)) {
      func_0x09bcf7c0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f647d30,0xf53dab8);
      FUN_0410844d(&DAT_0f647db0);
    }
    puStack_2b0 = (undefined8 *)(lVar17 + 0x18);
    plVar12 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f647d30 + 4)) * 8);
    do {
      lVar20 = *plVar12;
      if (lVar20 == -1) goto LAB_09b861c0;
      plVar12 = (long *)(*(long *)(lVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647d30 + 4)
            );
    if (plVar12 == *(long **)(lVar17 + 0x38)) {
LAB_09b861c0:
      puStack_2b8 = &DAT_0f647d30;
    }
    else {
      puStack_2b8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2b8,uStack_120._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,0x10);
    puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uStack_120._4_4_);
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    uStack_278 = 0xc;
    uStack_277 = 0x61726170;
    uStack_273 = 0x736d;
    uStack_271 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_140;
    FUN_048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f1d9800;
    if (uStack_2a0 != (long *)0x0) {
      lVar17 = *uStack_2a0;
      uStack_2a0 = puVar16;
      (**(code **)(lVar17 + 8))();
      puVar16 = uStack_2a0;
    }
    uStack_2a0 = puVar16;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_09bd1e50;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_09bd1b60;
    puStack_1a8 = &UNK_09bd1f10;
    puStack_1a0 = &UNK_09bd21c0;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar16 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    ppuVar9 = ppuStack_298;
    puVar8 = uStack_2a0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_1e0 = plVar12 + 3;
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    plVar12[3] = (long)puVar8;
    plVar12[4] = (long)ppuVar9;
    plVar12[7] = lStack_280;
    plVar12[5] = lStack_290;
    plVar12[6] = (long)ppuStack_288;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    plVar12[10] = lStack_268;
    plVar12[8] = CONCAT17(uStack_271,CONCAT25(uStack_273,CONCAT41(uStack_277,uStack_278)));
    plVar12[9] = CONCAT53(uStack_26d,CONCAT21(uStack_26f,uStack_270));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    lStack_268 = 0;
    plVar12[0xb] = lStack_260;
    plVar12[0xc] = lStack_258;
    plVar12[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar12[0xe] = lStack_248;
    plVar12[0xf] = lStack_240;
    plVar12[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_230;
    plVar12[0x12] = lStack_228;
    plVar12[0x13] = lStack_220;
    plVar12[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar12[0x17] = lStack_200;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar12[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_108 = 0;
    uStack_100 = (long *)0x0;
    uStack_1d8 = plVar12;
    func_0x048afd20(puVar16,&puStack_1e8);
    plVar12 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_1d8 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_100 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar17 = puVar16[2];
    iVar10 = *(int *)((long)puVar16 + 0x1c);
    if (iVar10 == 2) {
      piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(puVar16 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar16[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_09b8668a:
      piVar18[4] = piVar18[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != *(int *)(puVar16 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8668a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f647e98 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647e98), iVar10 != 0)) {
    func_0x09bd1c20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647e18,0xf53dab8);
    FUN_0410844d(&DAT_0f647e98);
  }
  lVar17 = lStack_110;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647e18 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_09b8670b;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647e18 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b8670b:
    puVar15 = &DAT_0f647e18;
    if (iRam000000000f647e78 != -0x2b3da790) goto LAB_09b86784;
LAB_09b86741:
    lVar14 = *(long *)(puVar15 + 0x68);
    if (lVar14 == 0) goto LAB_09b86784;
    bVar22 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x09bd2640(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b86741;
LAB_09b86784:
    func_0x09bd2640(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    func_0x09bd2c30(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8685a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8685a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bd31e0(&puStack_2b8,&uStack_180,&UNK_013b681e,10);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bd3790;
    puStack_1a0 = &UNK_09bd3960;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bd3490(&puStack_2b8);
    uStack_118 = CONCAT71(uStack_118._1_7_,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_120 = uStack_158;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x048b0bc0(&uStack_2a0);
    func_0x09bd2c30(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b86a9a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b86a9a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bd31e0(&puStack_2b8,&uStack_148,&UNK_01374325,7);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bd3b40;
    puStack_1a0 = &UNK_09bd3d00;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bd3490(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  lVar14 = *(long *)(lVar17 + 0x98);
  if ((DAT_0f647b00 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647b00), iVar10 != 0)) {
    func_0x09bc1350();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647a80,0xf53dab8);
    FUN_0410844d(&DAT_0f647b00);
  }
  lVar11 = lVar14 + 0x140;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647a80 + 4)) * 8);
  do {
    lVar17 = *plVar12;
    if (lVar17 == -1) goto LAB_09b86c53;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f647a80 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b86c53:
    puVar15 = &DAT_0f647a80;
    if (iRam000000000f647ae0 != -0x2b3da790) goto LAB_09b86cc4;
LAB_09b86c81:
    lVar17 = *(long *)(puVar15 + 0x68);
    if (lVar17 == 0) goto LAB_09b86cc4;
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar20 = lVar17 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x09bd3ed0(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b86c81;
LAB_09b86cc4:
    func_0x09bd3ed0(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    if ((DAT_0f647a68 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647a68), iVar10 != 0)) {
      func_0x09bc1210();
      FUN_0410844d(&DAT_0f647a68);
    }
    if ((DAT_0f648588 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648588), iVar10 != 0)) {
      func_0x09bd0d60(0xf648570);
      FUN_0410844d(&DAT_0f648588);
    }
    puStack_2b8 = (undefined *)CONCAT44(puStack_2b8._4_4_,_DAT_0f648574);
    puStack_2b0 = (undefined8 *)&SUB_09bd0c70;
    puStack_2a8 = &UNK_09bd4a00;
    func_0x05da1460(&uStack_178);
    lVar17 = func_0x09bd0c70(CONCAT44(uStack_17c,uStack_180) + 0x18);
    if ((*(byte *)(lVar17 + 0x1a) & 4) != 0) {
      func_0x09bd44c0(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
      if (uStack_2a0._4_4_ == 2) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x16;
          iVar10 = *piVar18;
        }
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
        while ((undefined8 *)puVar2 != puStack_2b0) {
          piVar18 = *(int **)(piVar18 + 0xe);
          puVar2 = *(undefined1 **)(piVar18 + 0xc);
        }
      }
      else {
        if (uStack_2a0._4_4_ != 1) {
          if (uStack_2a0._4_4_ == 0) {
            *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
          }
          goto LAB_09b86e1e;
        }
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
LAB_09b86e1e:
    uStack_118 = CONCAT71(uStack_14f,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x09bd44c0(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar2 = *(undefined1 **)(piVar18 + 0xc);
      while ((undefined8 *)puVar2 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
      }
LAB_09b86f1a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b86f1a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f647a68 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647a68), iVar10 != 0)) {
      func_0x09bc1210();
      FUN_0410844d(&DAT_0f647a68);
    }
    lVar17 = uStack_148;
    uStack_120 = 0x215f685300000001;
    if ((DAT_0f647b00 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647b00), iVar10 != 0)) {
      func_0x09bc1350();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f647a80,0xf53dab8);
      FUN_0410844d(&DAT_0f647b00);
    }
    puStack_2b0 = (undefined8 *)(lVar17 + 0x18);
    plVar12 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f647a80 + 4)) * 8);
    do {
      lVar20 = *plVar12;
      if (lVar20 == -1) goto LAB_09b86fb0;
      plVar12 = (long *)(*(long *)(lVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647a80 + 4)
            );
    if (plVar12 == *(long **)(lVar17 + 0x38)) {
LAB_09b86fb0:
      puStack_2b8 = &DAT_0f647a80;
    }
    else {
      puStack_2b8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2b8,uStack_120._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,0x10);
    puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uStack_120._4_4_);
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    uStack_278 = 0xc;
    uStack_277 = 0x61726170;
    uStack_273 = 0x736d;
    uStack_271 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_140;
    FUN_048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f1d9958;
    if (uStack_2a0 != (long *)0x0) {
      lVar17 = *uStack_2a0;
      uStack_2a0 = puVar16;
      (**(code **)(lVar17 + 8))();
      puVar16 = uStack_2a0;
    }
    uStack_2a0 = puVar16;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_09bd5480;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_09bd5190;
    puStack_1a8 = &UNK_09bd5540;
    puStack_1a0 = &UNK_09bd57f0;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar16 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    ppuVar9 = ppuStack_298;
    puVar8 = uStack_2a0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_1e0 = plVar12 + 3;
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    plVar12[3] = (long)puVar8;
    plVar12[4] = (long)ppuVar9;
    plVar12[7] = lStack_280;
    plVar12[5] = lStack_290;
    plVar12[6] = (long)ppuStack_288;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    plVar12[10] = lStack_268;
    plVar12[8] = CONCAT17(uStack_271,CONCAT25(uStack_273,CONCAT41(uStack_277,uStack_278)));
    plVar12[9] = CONCAT53(uStack_26d,CONCAT21(uStack_26f,uStack_270));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    lStack_268 = 0;
    plVar12[0xb] = lStack_260;
    plVar12[0xc] = lStack_258;
    plVar12[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar12[0xe] = lStack_248;
    plVar12[0xf] = lStack_240;
    plVar12[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_230;
    plVar12[0x12] = lStack_228;
    plVar12[0x13] = lStack_220;
    plVar12[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar12[0x17] = lStack_200;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar12[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_108 = 0;
    uStack_100 = (long *)0x0;
    uStack_1d8 = plVar12;
    func_0x048afd20(puVar16,&puStack_1e8);
    plVar12 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_1d8 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_100 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar17 = puVar16[2];
    iVar10 = *(int *)((long)puVar16 + 0x1c);
    if (iVar10 == 2) {
      piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(puVar16 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar16[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_09b8747a:
      piVar18[4] = piVar18[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != *(int *)(puVar16 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8747a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f647f50 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647f50), iVar10 != 0)) {
    func_0x09bd5250();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647ed0,0xf53dab8);
    FUN_0410844d(&DAT_0f647f50);
  }
  lVar17 = lStack_110;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647ed0 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_09b874fb;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647ed0 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b874fb:
    puVar15 = &DAT_0f647ed0;
    if (iRam000000000f647f30 != -0x2b3da790) goto LAB_09b87574;
LAB_09b87531:
    lVar14 = *(long *)(puVar15 + 0x68);
    if (lVar14 == 0) goto LAB_09b87574;
    bVar22 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x09bd5c70(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b87531;
LAB_09b87574:
    func_0x09bd5c70(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    func_0x09bd6260(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8764a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8764a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bd6810(&puStack_2b8,&uStack_180,&UNK_013e90af,0xb);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bd6dc0;
    puStack_1a0 = &UNK_09bd6f80;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bd6ac0(&puStack_2b8);
    uStack_118 = CONCAT71(uStack_118._1_7_,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_120 = uStack_158;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x048b0bc0(&uStack_2a0);
    func_0x09bd6260(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8788a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8788a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bd6810(&puStack_2b8,&uStack_148,&UNK_01374325,7);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bd7150;
    puStack_1a0 = &UNK_09bd7320;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bd6ac0(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  lVar14 = *(long *)(lVar17 + 0x98);
  if ((DAT_0f6478d8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6478d8), iVar10 != 0)) {
    func_0x09bb5500();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647858,0xf53dab8);
    FUN_0410844d(&DAT_0f6478d8);
  }
  lVar11 = lVar14 + 0x140;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647858 + 4)) * 8);
  do {
    lVar17 = *plVar12;
    if (lVar17 == -1) goto LAB_09b87a43;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f647858 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b87a43:
    puVar15 = &DAT_0f647858;
    if (iRam000000000f6478b8 != -0x2b3da790) goto LAB_09b87ab4;
LAB_09b87a71:
    lVar17 = *(long *)(puVar15 + 0x68);
    if (lVar17 == 0) goto LAB_09b87ab4;
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar20 = lVar17 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x09bd7500(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b87a71;
LAB_09b87ab4:
    func_0x09bd7500(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    if ((DAT_0f647840 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647840), iVar10 != 0)) {
      func_0x09bb53c0();
      FUN_0410844d(&DAT_0f647840);
    }
    if ((DAT_0f648588 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648588), iVar10 != 0)) {
      func_0x09bd0d60(0xf648570);
      FUN_0410844d(&DAT_0f648588);
    }
    puStack_2b8 = (undefined *)CONCAT44(puStack_2b8._4_4_,_DAT_0f648574);
    puStack_2b0 = (undefined8 *)&SUB_09bd0c70;
    puStack_2a8 = &UNK_09bd80c0;
    func_0x05da1460(&uStack_178);
    lVar17 = func_0x09bd0c70(CONCAT44(uStack_17c,uStack_180) + 0x18);
    if ((*(byte *)(lVar17 + 0x1a) & 4) != 0) {
      func_0x09bd7af0(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
      if (uStack_2a0._4_4_ == 2) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x16;
          iVar10 = *piVar18;
        }
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
        while ((undefined8 *)puVar2 != puStack_2b0) {
          piVar18 = *(int **)(piVar18 + 0xe);
          puVar2 = *(undefined1 **)(piVar18 + 0xc);
        }
      }
      else {
        if (uStack_2a0._4_4_ != 1) {
          if (uStack_2a0._4_4_ == 0) {
            *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
          }
          goto LAB_09b87c0e;
        }
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
LAB_09b87c0e:
    uStack_118 = CONCAT71(uStack_14f,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x09bd7af0(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar2 = *(undefined1 **)(piVar18 + 0xc);
      while ((undefined8 *)puVar2 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
      }
LAB_09b87d0a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b87d0a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f647840 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647840), iVar10 != 0)) {
      func_0x09bb53c0();
      FUN_0410844d(&DAT_0f647840);
    }
    lVar17 = uStack_148;
    uStack_120 = 0x215f685300000001;
    if ((DAT_0f6478d8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6478d8), iVar10 != 0)) {
      func_0x09bb5500();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f647858,0xf53dab8);
      FUN_0410844d(&DAT_0f6478d8);
    }
    puStack_2b0 = (undefined8 *)(lVar17 + 0x18);
    plVar12 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f647858 + 4)) * 8);
    do {
      lVar20 = *plVar12;
      if (lVar20 == -1) goto LAB_09b87da0;
      plVar12 = (long *)(*(long *)(lVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647858 + 4)
            );
    if (plVar12 == *(long **)(lVar17 + 0x38)) {
LAB_09b87da0:
      puStack_2b8 = &DAT_0f647858;
    }
    else {
      puStack_2b8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2b8,uStack_120._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,0x10);
    puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uStack_120._4_4_);
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    uStack_278 = 0xc;
    uStack_277 = 0x61726170;
    uStack_273 = 0x736d;
    uStack_271 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_140;
    FUN_048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f1d9ab0;
    if (uStack_2a0 != (long *)0x0) {
      lVar17 = *uStack_2a0;
      uStack_2a0 = puVar16;
      (**(code **)(lVar17 + 8))();
      puVar16 = uStack_2a0;
    }
    uStack_2a0 = puVar16;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_09bd8770;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_09bd84b0;
    puStack_1a8 = &UNK_09bd8830;
    puStack_1a0 = &UNK_09bd8990;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar16 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    ppuVar9 = ppuStack_298;
    puVar8 = uStack_2a0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_1e0 = plVar12 + 3;
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    plVar12[3] = (long)puVar8;
    plVar12[4] = (long)ppuVar9;
    plVar12[7] = lStack_280;
    plVar12[5] = lStack_290;
    plVar12[6] = (long)ppuStack_288;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    plVar12[10] = lStack_268;
    plVar12[8] = CONCAT17(uStack_271,CONCAT25(uStack_273,CONCAT41(uStack_277,uStack_278)));
    plVar12[9] = CONCAT53(uStack_26d,CONCAT21(uStack_26f,uStack_270));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    lStack_268 = 0;
    plVar12[0xb] = lStack_260;
    plVar12[0xc] = lStack_258;
    plVar12[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar12[0xe] = lStack_248;
    plVar12[0xf] = lStack_240;
    plVar12[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_230;
    plVar12[0x12] = lStack_228;
    plVar12[0x13] = lStack_220;
    plVar12[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar12[0x17] = lStack_200;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar12[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_108 = 0;
    uStack_100 = (long *)0x0;
    uStack_1d8 = plVar12;
    func_0x048afd20(puVar16,&puStack_1e8);
    plVar12 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_1d8 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_100 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar17 = puVar16[2];
    iVar10 = *(int *)((long)puVar16 + 0x1c);
    if (iVar10 == 2) {
      piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(puVar16 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar16[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_09b8826a:
      piVar18[4] = piVar18[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != *(int *)(puVar16 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8826a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f648008 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648008), iVar10 != 0)) {
    func_0x09bd8570();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647f88,0xf53dab8);
    FUN_0410844d(&DAT_0f648008);
  }
  lVar17 = lStack_110;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647f88 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_09b882eb;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647f88 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b882eb:
    puVar15 = &DAT_0f647f88;
    if (iRam000000000f647fe8 != -0x2b3da790) goto LAB_09b8834e;
LAB_09b88321:
    lVar14 = *(long *)(puVar15 + 0x68);
    if (lVar14 == 0) goto LAB_09b8834e;
    bVar22 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b88321;
LAB_09b8834e:
    lVar20 = 0;
    uVar19 = 0;
  }
  func_0x09bd8e10(&puStack_2b8,lVar11,lVar20,uVar19);
  lVar14 = *(long *)(lVar17 + 0x98);
  if ((DAT_0f647990 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647990), iVar10 != 0)) {
    func_0x09bb9750();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647910,0xf53dab8);
    FUN_0410844d(&DAT_0f647990);
  }
  lVar11 = lVar14 + 0x140;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647910 + 4)) * 8);
  do {
    lVar17 = *plVar12;
    if (lVar17 == -1) goto LAB_09b883d3;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f647910 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b883d3:
    puVar15 = &DAT_0f647910;
    if (iRam000000000f647970 != -0x2b3da790) goto LAB_09b88444;
LAB_09b88401:
    lVar17 = *(long *)(puVar15 + 0x68);
    if (lVar17 == 0) goto LAB_09b88444;
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar20 = lVar17 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x09bd9920(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b88401;
LAB_09b88444:
    func_0x09bd9920(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    if ((DAT_0f6478f8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6478f8), iVar10 != 0)) {
      func_0x09bb94c0();
      FUN_0410844d(&DAT_0f6478f8);
    }
    if ((DAT_0f6484d0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6484d0), iVar10 != 0)) {
      func_0x09bcc1a0(0xf6484b8);
      FUN_0410844d(&DAT_0f6484d0);
    }
    puStack_2b8 = (undefined *)CONCAT44(puStack_2b8._4_4_,_DAT_0f6484bc);
    puStack_2b0 = (undefined8 *)&SUB_09bcc0b0;
    puStack_2a8 = &UNK_09bda450;
    func_0x05da1460(&uStack_178);
    lVar17 = func_0x09bcc0b0(CONCAT44(uStack_17c,uStack_180) + 0x18);
    if ((*(byte *)(lVar17 + 0x1a) & 4) != 0) {
      func_0x09bd9f10(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
      if (uStack_2a0._4_4_ == 2) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x16;
          iVar10 = *piVar18;
        }
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
        while ((undefined8 *)puVar2 != puStack_2b0) {
          piVar18 = *(int **)(piVar18 + 0xe);
          puVar2 = *(undefined1 **)(piVar18 + 0xc);
        }
      }
      else {
        if (uStack_2a0._4_4_ != 1) {
          if (uStack_2a0._4_4_ == 0) {
            *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
          }
          goto LAB_09b8859e;
        }
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
LAB_09b8859e:
    uStack_118 = CONCAT71(uStack_14f,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x09bd9f10(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar2 = *(undefined1 **)(piVar18 + 0xc);
      while ((undefined8 *)puVar2 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
      }
LAB_09b8869a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8869a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f6478f8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6478f8), iVar10 != 0)) {
      func_0x09bb94c0();
      FUN_0410844d(&DAT_0f6478f8);
    }
    lVar17 = uStack_148;
    uStack_120 = 0x215f685300000001;
    if ((DAT_0f647990 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647990), iVar10 != 0)) {
      func_0x09bb9750();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f647910,0xf53dab8);
      FUN_0410844d(&DAT_0f647990);
    }
    puStack_2b0 = (undefined8 *)(lVar17 + 0x18);
    plVar12 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f647910 + 4)) * 8);
    do {
      lVar20 = *plVar12;
      if (lVar20 == -1) goto LAB_09b88730;
      plVar12 = (long *)(*(long *)(lVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647910 + 4)
            );
    if (plVar12 == *(long **)(lVar17 + 0x38)) {
LAB_09b88730:
      puStack_2b8 = &DAT_0f647910;
    }
    else {
      puStack_2b8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2b8,uStack_120._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,0x10);
    puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uStack_120._4_4_);
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    uStack_278 = 0xc;
    uStack_277 = 0x61726170;
    uStack_273 = 0x736d;
    uStack_271 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_140;
    FUN_048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f1d9c08;
    if (uStack_2a0 != (long *)0x0) {
      lVar17 = *uStack_2a0;
      uStack_2a0 = puVar16;
      (**(code **)(lVar17 + 8))();
      puVar16 = uStack_2a0;
    }
    uStack_2a0 = puVar16;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_09bdab00;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_09bda840;
    puStack_1a8 = &UNK_09bdabc0;
    puStack_1a0 = &UNK_09bdad20;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar16 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    ppuVar9 = ppuStack_298;
    puVar8 = uStack_2a0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_1e0 = plVar12 + 3;
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    plVar12[3] = (long)puVar8;
    plVar12[4] = (long)ppuVar9;
    plVar12[7] = lStack_280;
    plVar12[5] = lStack_290;
    plVar12[6] = (long)ppuStack_288;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    plVar12[10] = lStack_268;
    plVar12[8] = CONCAT17(uStack_271,CONCAT25(uStack_273,CONCAT41(uStack_277,uStack_278)));
    plVar12[9] = CONCAT53(uStack_26d,CONCAT21(uStack_26f,uStack_270));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    lStack_268 = 0;
    plVar12[0xb] = lStack_260;
    plVar12[0xc] = lStack_258;
    plVar12[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar12[0xe] = lStack_248;
    plVar12[0xf] = lStack_240;
    plVar12[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_230;
    plVar12[0x12] = lStack_228;
    plVar12[0x13] = lStack_220;
    plVar12[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar12[0x17] = lStack_200;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar12[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_108 = 0;
    uStack_100 = (long *)0x0;
    uStack_1d8 = plVar12;
    func_0x048afd20(puVar16,&puStack_1e8);
    plVar12 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_1d8 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_100 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar17 = puVar16[2];
    iVar10 = *(int *)((long)puVar16 + 0x1c);
    if (iVar10 == 2) {
      piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(puVar16 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar16[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_09b88bfa:
      piVar18[4] = piVar18[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != *(int *)(puVar16 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b88bfa;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f6480c0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6480c0), iVar10 != 0)) {
    func_0x09bda900();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f648040,0xf53dab8);
    FUN_0410844d(&DAT_0f6480c0);
  }
  lVar17 = lStack_110;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f648040 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_09b88c7b;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f648040 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b88c7b:
    puVar15 = &DAT_0f648040;
    if (iRam000000000f6480a0 != -0x2b3da790) goto LAB_09b88cde;
LAB_09b88cb1:
    lVar14 = *(long *)(puVar15 + 0x68);
    if (lVar14 == 0) goto LAB_09b88cde;
    bVar22 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b88cb1;
LAB_09b88cde:
    lVar20 = 0;
    uVar19 = 0;
  }
  func_0x09bdb1a0(&puStack_2b8,lVar11,lVar20,uVar19);
  lVar14 = *(long *)(lVar17 + 0x98);
  if ((DAT_0f647c70 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647c70), iVar10 != 0)) {
    func_0x09bcb390();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f647bf0,0xf53dab8);
    FUN_0410844d(&DAT_0f647c70);
  }
  lVar11 = lVar14 + 0x140;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f647bf0 + 4)) * 8);
  do {
    lVar17 = *plVar12;
    if (lVar17 == -1) goto LAB_09b88d63;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar17 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar17 * 0x18) != *(uint *)(_DAT_0f647bf0 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b88d63:
    puVar15 = &DAT_0f647bf0;
    if (iRam000000000f647c50 != -0x2b3da790) goto LAB_09b88dd4;
LAB_09b88d91:
    lVar17 = *(long *)(puVar15 + 0x68);
    if (lVar17 == 0) goto LAB_09b88dd4;
    bVar22 = (*(byte *)(lVar17 + 8) & 1) != 0;
    lVar20 = lVar17 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar17 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar17 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar17 + 0x10);
    }
    func_0x09bdbcb0(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b88d91;
LAB_09b88dd4:
    func_0x09bdbcb0(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    if ((DAT_0f647bd8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647bd8), iVar10 != 0)) {
      func_0x09bcb250();
      FUN_0410844d(&DAT_0f647bd8);
    }
    if ((DAT_0f648588 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648588), iVar10 != 0)) {
      func_0x09bd0d60(0xf648570);
      FUN_0410844d(&DAT_0f648588);
    }
    puStack_2b8 = (undefined *)CONCAT44(puStack_2b8._4_4_,_DAT_0f648574);
    puStack_2b0 = (undefined8 *)&SUB_09bd0c70;
    puStack_2a8 = &UNK_09bdc7e0;
    func_0x05da1460(&uStack_178);
    lVar17 = func_0x09bd0c70(CONCAT44(uStack_17c,uStack_180) + 0x18);
    if ((*(byte *)(lVar17 + 0x1a) & 4) != 0) {
      func_0x09bdc2a0(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
      if (uStack_2a0._4_4_ == 2) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x16;
          iVar10 = *piVar18;
        }
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
        while ((undefined8 *)puVar2 != puStack_2b0) {
          piVar18 = *(int **)(piVar18 + 0xe);
          puVar2 = *(undefined1 **)(piVar18 + 0xc);
        }
      }
      else {
        if (uStack_2a0._4_4_ != 1) {
          if (uStack_2a0._4_4_ == 0) {
            *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
          }
          goto LAB_09b88f2e;
        }
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
      }
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
LAB_09b88f2e:
    uStack_118 = CONCAT71(uStack_14f,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x09bdc2a0(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar2 = *(undefined1 **)(piVar18 + 0xc);
      while ((undefined8 *)puVar2 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar2 = *(undefined1 **)(piVar18 + 0xc);
      }
LAB_09b8902a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8902a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f647bd8 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647bd8), iVar10 != 0)) {
      func_0x09bcb250();
      FUN_0410844d(&DAT_0f647bd8);
    }
    lVar17 = uStack_148;
    uStack_120 = 0x215f685300000001;
    if ((DAT_0f647c70 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647c70), iVar10 != 0)) {
      func_0x09bcb390();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f647bf0,0xf53dab8);
      FUN_0410844d(&DAT_0f647c70);
    }
    puStack_2b0 = (undefined8 *)(lVar17 + 0x18);
    plVar12 = (long *)(*(long *)(lVar17 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar17 + 0x20) - *(long *)(lVar17 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f647bf0 + 4)) * 8);
    do {
      lVar20 = *plVar12;
      if (lVar20 == -1) goto LAB_09b890c0;
      plVar12 = (long *)(*(long *)(lVar17 + 0x30) + lVar20 * 0x18);
    } while (*(uint *)(*(long *)(lVar17 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f647bf0 + 4)
            );
    if (plVar12 == *(long **)(lVar17 + 0x38)) {
LAB_09b890c0:
      puStack_2b8 = &DAT_0f647bf0;
    }
    else {
      puStack_2b8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2b8,uStack_120._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,0x10);
    puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uStack_120._4_4_);
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    uStack_278 = 0xc;
    uStack_277 = 0x61726170;
    uStack_273 = 0x736d;
    uStack_271 = 0;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_140;
    FUN_048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0f1d9d60;
    if (uStack_2a0 != (long *)0x0) {
      lVar17 = *uStack_2a0;
      uStack_2a0 = puVar16;
      (**(code **)(lVar17 + 8))();
      puVar16 = uStack_2a0;
    }
    uStack_2a0 = puVar16;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_09bdd0e0;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_09bdcdf0;
    puStack_1a8 = &UNK_09bdd1a0;
    puStack_1a0 = &UNK_09bdd370;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar16 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    ppuVar9 = ppuStack_298;
    puVar8 = uStack_2a0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_1e0 = plVar12 + 3;
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    plVar12[3] = (long)puVar8;
    plVar12[4] = (long)ppuVar9;
    plVar12[7] = lStack_280;
    plVar12[5] = lStack_290;
    plVar12[6] = (long)ppuStack_288;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    plVar12[10] = lStack_268;
    plVar12[8] = CONCAT17(uStack_271,CONCAT25(uStack_273,CONCAT41(uStack_277,uStack_278)));
    plVar12[9] = CONCAT53(uStack_26d,CONCAT21(uStack_26f,uStack_270));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    lStack_268 = 0;
    plVar12[0xb] = lStack_260;
    plVar12[0xc] = lStack_258;
    plVar12[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar12[0xe] = lStack_248;
    plVar12[0xf] = lStack_240;
    plVar12[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_230;
    plVar12[0x12] = lStack_228;
    plVar12[0x13] = lStack_220;
    plVar12[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar12[0x17] = lStack_200;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar12[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_108 = 0;
    uStack_100 = (long *)0x0;
    uStack_1d8 = plVar12;
    func_0x048afd20(puVar16,&puStack_1e8);
    plVar12 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_1d8 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_100;
    if (uStack_100 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_100 + 1;
      lVar17 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar17 == 0) {
        (**(code **)(*uStack_100 + 0x10))(uStack_100);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar17 = puVar16[2];
    iVar10 = *(int *)((long)puVar16 + 0x1c);
    if (iVar10 == 2) {
      piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(puVar16 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar16[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_09b8958a:
      piVar18[4] = piVar18[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar18 = *(int **)(*(long *)(lVar17 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != *(int *)(puVar16 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8958a;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar17 + 0x18) = *(uint *)(lVar17 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f648178 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648178), iVar10 != 0)) {
    func_0x09bdceb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6480f8,0xf53dab8);
    FUN_0410844d(&DAT_0f648178);
  }
  lVar17 = lStack_110;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6480f8 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_09b8960b;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6480f8 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b8960b:
    puVar15 = &DAT_0f6480f8;
    if (iRam000000000f648158 != -0x2b3da790) goto LAB_09b89684;
LAB_09b89641:
    lVar14 = *(long *)(puVar15 + 0x68);
    if (lVar14 == 0) goto LAB_09b89684;
    bVar22 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x09bdd7f0(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b89641;
LAB_09b89684:
    func_0x09bdd7f0(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    func_0x09bddde0(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8975a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8975a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f6480e0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6480e0), iVar10 != 0)) {
      func_0x09bdcd70();
      FUN_0410844d(&DAT_0f6480e0);
    }
    uStack_158 = 0x1ac1c84900000001;
    lVar14 = CONCAT44(uStack_17c,uStack_180);
    if ((DAT_0f648178 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648178), iVar10 != 0)) {
      func_0x09bdceb0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6480f8,0xf53dab8);
      FUN_0410844d(&DAT_0f648178);
    }
    puStack_2b0 = (undefined8 *)(lVar14 + 0x18);
    plVar12 = (long *)(*(long *)(lVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f6480f8 + 4)) * 8);
    do {
      lVar11 = *plVar12;
      if (lVar11 == -1) goto LAB_09b897f0;
      plVar12 = (long *)(*(long *)(lVar14 + 0x30) + lVar11 * 0x18);
    } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f6480f8 + 4)
            );
    if (plVar12 == *(long **)(lVar14 + 0x38)) {
LAB_09b897f0:
      puStack_2b8 = &DAT_0f6480f8;
    }
    else {
      puStack_2b8 = (undefined *)plVar12[2];
    }
    func_0x0ed621a0(&puStack_2b8,uStack_158._4_4_);
    puStack_2b8 = (undefined *)CONCAT62(puStack_2b8._2_6_,0x10);
    puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uStack_158._4_4_);
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    uStack_278 = 0x12;
    uStack_277 = 0x7373656d;
    uStack_273 = 0x6761;
    uStack_271 = 0x65;
    uStack_270 = 0x49;
    uStack_26f = 100;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    uStack_230 = 0x3f600000;
    puStack_2b0 = &uStack_178;
    FUN_048afb10(&lStack_260,8);
    uStack_208 = 0;
    lStack_200 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    lStack_228 = 0;
    lStack_220 = 0;
    uStack_1f8 = 0xff00;
    uStack_1f4 = uStack_1f4 & 0xffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    uStack_1ec = 0;
    puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar16 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar16 = &UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = puVar16;
      (**(code **)(lVar14 + 8))();
      puVar16 = uStack_2a0;
    }
    uStack_2a0 = puVar16;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09bde390;
    puStack_1a0 = &UNK_09bde550;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    puVar16 = puStack_2b0;
    if ((DAT_0f550a20 == '\0') && (iVar10 = func_0x04108328(&DAT_0f550a20), iVar10 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,_DAT_0f550a0c);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    ppuVar9 = ppuStack_298;
    puVar8 = uStack_2a0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    *plVar12 = (long)&UNK_0ef439d0;
    plStack_1e0 = plVar12 + 3;
    uStack_2a0 = (long *)0x0;
    ppuStack_298 = (undefined **)0x0;
    plVar12[3] = (long)puVar8;
    plVar12[4] = (long)ppuVar9;
    plVar12[7] = lStack_280;
    plVar12[5] = lStack_290;
    plVar12[6] = (long)ppuStack_288;
    lStack_290 = 0;
    ppuStack_288 = (undefined **)0x0;
    lStack_280 = 0;
    plVar12[10] = lStack_268;
    plVar12[8] = CONCAT17(uStack_271,CONCAT25(uStack_273,CONCAT41(uStack_277,uStack_278)));
    plVar12[9] = CONCAT53(uStack_26d,CONCAT21(uStack_26f,uStack_270));
    uStack_278 = 0;
    uStack_277 = 0;
    uStack_273 = 0;
    uStack_271 = 0;
    uStack_270 = 0;
    uStack_26f = 0;
    uStack_26d = 0;
    lStack_268 = 0;
    plVar12[0xb] = lStack_260;
    plVar12[0xc] = lStack_258;
    plVar12[0xd] = lStack_250;
    lStack_260 = 0;
    lStack_258 = 0;
    lStack_250 = 0;
    plVar12[0xe] = lStack_248;
    plVar12[0xf] = lStack_240;
    plVar12[0x10] = lStack_238;
    lStack_248 = 0;
    lStack_240 = 0;
    lStack_238 = 0;
    *(undefined4 *)(plVar12 + 0x11) = uStack_230;
    plVar12[0x12] = lStack_228;
    plVar12[0x13] = lStack_220;
    plVar12[0x14] = lStack_218;
    lStack_228 = 0;
    lStack_220 = 0;
    lStack_218 = 0;
    plVar12[0x17] = lStack_200;
    *(undefined4 *)(plVar12 + 0x15) = (undefined4)uStack_210;
    *(undefined4 *)((long)plVar12 + 0xac) = uStack_210._4_4_;
    *(undefined4 *)(plVar12 + 0x16) = (undefined4)uStack_208;
    *(undefined4 *)((long)plVar12 + 0xb4) = uStack_208._4_4_;
    uStack_210 = 0;
    uStack_208 = 0;
    lStack_200 = 0;
    *(ulong *)((long)plVar12 + 0xc5) = CONCAT17(uStack_1ec,CONCAT43(uStack_1f0,uStack_1f4._1_3_));
    plVar12[0x18] = CONCAT44(uStack_1f4,CONCAT22(uStack_1f6,uStack_1f8));
    uStack_148 = 0;
    uStack_140 = (long *)0x0;
    uStack_1d8 = plVar12;
    func_0x048afd20(puVar16,&puStack_1e8);
    plVar12 = uStack_1d8;
    if (uStack_1d8 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_1d8 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_1d8 + 0x10))(uStack_1d8);
        func_0x0412c2d0(plVar12);
      }
    }
    plVar12 = uStack_140;
    if (uStack_140 != (long *)0x0) {
      LOCK();
      plVar13 = uStack_140 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*uStack_140 + 0x10))(uStack_140);
        func_0x0412c2d0(plVar12);
      }
    }
    lVar14 = puVar16[2];
    iVar10 = *(int *)((long)puVar16 + 0x1c);
    if (iVar10 == 2) {
      piVar18 = *(int **)(*(long *)(lVar14 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != *(int *)(puVar16 + 3)) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      for (; *(long *)(piVar18 + 0xc) != puVar16[1]; piVar18 = *(int **)(piVar18 + 0xe)) {
      }
LAB_09b89cba:
      piVar18[4] = piVar18[4] | (int)puStack_2b8 << 0x10;
    }
    else {
      if (iVar10 == 1) {
        piVar18 = *(int **)(*(long *)(lVar14 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != *(int *)(puVar16 + 3)) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b89cba;
      }
      if (iVar10 == 0) {
        *(uint *)(lVar14 + 0x18) = *(uint *)(lVar14 + 0x18) | (int)puStack_2b8 << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_2a0);
  }
  lVar14 = *(long *)(lVar17 + 0x98);
  if ((DAT_0f647a48 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647a48), iVar10 != 0)) {
    func_0x09bbd170();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6479c8,0xf53dab8);
    FUN_0410844d(&DAT_0f647a48);
  }
  lVar11 = lVar14 + 0x140;
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6479c8 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_09b89d44;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6479c8 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b89d44:
    puVar15 = &DAT_0f6479c8;
    if (iRam000000000f647a28 != -0x2b3da790) goto LAB_09b89db6;
LAB_09b89d73:
    lVar20 = *(long *)(puVar15 + 0x68);
    if (lVar20 == 0) goto LAB_09b89db6;
    bVar22 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar21 = lVar20 + 9;
    if (bVar22) {
      lVar21 = *(long *)(lVar20 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x09bde720(&uStack_180,lVar11,lVar21,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b89d73;
LAB_09b89db6:
    func_0x09bde720(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    func_0x09bded10(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b89e8a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b89e8a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bdf2c0(&puStack_2b8,&uStack_180,&UNK_0141ce3d,0x13);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ce8;
    if (uStack_2a0 != (long *)0x0) {
      lVar20 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar20 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_0490ce30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_0490cb20;
    puStack_1a8 = &UNK_09bdf870;
    puStack_1a0 = &UNK_09bdf9d0;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar20 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bdf570(&puStack_2b8);
    uStack_118 = CONCAT71(uStack_118._1_7_,cStack_150);
    uStack_128 = uStack_160;
    uStack_124 = uStack_15c;
    uStack_120 = uStack_158;
    uStack_138 = uStack_170;
    uStack_134 = uStack_16c;
    uStack_130 = uStack_168;
    uStack_12c = uStack_164;
    uStack_148 = CONCAT44(uStack_17c,uStack_180);
    uStack_140 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x048b0bc0(&uStack_2a0);
    func_0x09bded10(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8a0ca:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8a0ca;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09bdf2c0(&puStack_2b8,&uStack_148,&UNK_011dd6c5,0xf);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0f1d9eb8;
    if (uStack_2a0 != (long *)0x0) {
      lVar20 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar20 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_09be3950;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_09be25c0;
    puStack_1a8 = &UNK_09be3a10;
    puStack_1a0 = &UNK_09be3d10;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar20 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09bdf570(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  if ((DAT_0f648230 == '\0') && (iVar10 = func_0x04108328(&DAT_0f648230), iVar10 != 0)) {
    func_0x09be1ae0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6481b0,0xf53dab8);
    FUN_0410844d(&DAT_0f648230);
  }
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6481b0 + 4)) * 8);
  do {
    lVar20 = *plVar12;
    if (lVar20 == -1) goto LAB_09b8a284;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f6481b0 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b8a284:
    puVar15 = &DAT_0f6481b0;
    if (iRam000000000f648210 != -0x2b3da790) goto LAB_09b8a2f6;
LAB_09b8a2b3:
    lVar14 = *(long *)(puVar15 + 0x68);
    if (lVar14 == 0) goto LAB_09b8a2f6;
    bVar22 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar20 = lVar14 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar14 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x09be4190(&uStack_180,lVar11,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b8a2b3;
LAB_09b8a2f6:
    func_0x09be4190(&uStack_180,lVar11,0,0);
  }
  if (cStack_150 == '\0') {
    func_0x09be4780(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8a3ca:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8a3ca;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09be4d40(&puStack_2b8,&uStack_180,&UNK_013e90bb,8);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09be52f0;
    puStack_1a0 = &UNK_09be54b0;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09be4ff0(&puStack_2b8);
    cStack_d8 = cStack_150;
    uStack_e8 = uStack_160;
    uStack_e4 = uStack_15c;
    uStack_e0 = (undefined4)uStack_158;
    uStack_dc = uStack_158._4_4_;
    uStack_f8 = uStack_170;
    uStack_f4 = uStack_16c;
    uStack_f0 = uStack_168;
    uStack_ec = uStack_164;
    uStack_108 = CONCAT44(uStack_17c,uStack_180);
    uStack_100 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x048b0bc0(&uStack_2a0);
    func_0x09be4780(&puStack_2b8,uStack_108 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8a60a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8a60a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09be4d40(&puStack_2b8,&uStack_108,&UNK_011dd6d5,8);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09be5680;
    puStack_1a0 = &UNK_09be5850;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09be4ff0(&puStack_2b8);
    uStack_118 = CONCAT71(uStack_118._1_7_,cStack_d8);
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    uStack_120 = CONCAT44(uStack_dc,uStack_e0);
    uStack_138 = uStack_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    uStack_148 = uStack_108;
    uStack_140 = uStack_100;
    func_0x048b0bc0(&uStack_2a0);
    func_0x09be4780(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8a83a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8a83a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09be4d40(&puStack_2b8,&uStack_148,&UNK_012c7d1d,4);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef474e0;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_049119f0;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &UNK_0490fc00;
    puStack_1a8 = &UNK_09be5a30;
    puStack_1a0 = &UNK_09be5c30;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09be4ff0(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  lVar14 = *(long *)(lVar17 + 0x98);
  if ((DAT_0f647768 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647768), iVar10 != 0)) {
    func_0x09bb1ad0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6476e8,0xf53dab8);
    FUN_0410844d(&DAT_0f647768);
  }
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6476e8 + 4)) * 8);
  do {
    lVar11 = *plVar12;
    if (lVar11 == -1) goto LAB_09b8aa03;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f6476e8 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b8aa03:
    puVar15 = &DAT_0f6476e8;
    if (iRam000000000f647748 != -0x2b3da790) goto LAB_09b8aa71;
LAB_09b8aa31:
    lVar11 = *(long *)(puVar15 + 0x68);
    if (lVar11 == 0) goto LAB_09b8aa71;
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar20 = lVar11 + 9;
    if (bVar22) {
      lVar20 = *(long *)(lVar11 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x09be5e10(&uStack_180,lVar14 + 0x140,lVar20,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b8aa31;
LAB_09b8aa71:
    func_0x09be5e10(&uStack_180,lVar14 + 0x140,0,0);
  }
  if (cStack_150 == '\0') {
    func_0x09be6400(&puStack_2b8,CONCAT44(uStack_17c,uStack_180) + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8ab4a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8ab4a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09be69c0(&puStack_2b8,&uStack_180,&UNK_01314d5b,4);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09be6f70;
    puStack_1a0 = &UNK_09be7140;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09be6c70(&puStack_2b8);
    cStack_d8 = cStack_150;
    uStack_e8 = uStack_160;
    uStack_e4 = uStack_15c;
    uStack_e0 = (undefined4)uStack_158;
    uStack_dc = uStack_158._4_4_;
    uStack_f8 = uStack_170;
    uStack_f4 = uStack_16c;
    uStack_f0 = uStack_168;
    uStack_ec = uStack_164;
    uStack_108 = CONCAT44(uStack_17c,uStack_180);
    uStack_100 = (long *)CONCAT44(uStack_178._4_4_,(undefined4)uStack_178);
    func_0x048b0bc0(&uStack_2a0);
    func_0x09be6400(&puStack_2b8,uStack_108 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8ad8a:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8ad8a;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09be69c0(&puStack_2b8,&uStack_108,&UNK_012a7470,2);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09be7320;
    puStack_1a0 = &UNK_09be74f0;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09be6c70(&puStack_2b8);
    uStack_118 = CONCAT71(uStack_118._1_7_,cStack_d8);
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    uStack_120 = CONCAT44(uStack_dc,uStack_e0);
    uStack_138 = uStack_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    uStack_148 = uStack_108;
    uStack_140 = uStack_100;
    func_0x048b0bc0(&uStack_2a0);
    func_0x09be6400(&puStack_2b8,uStack_148 + 0x18);
    if (uStack_2a0._4_4_ == 2) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x16;
        iVar10 = *piVar18;
      }
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
      while (puVar16 != puStack_2b0) {
        piVar18 = *(int **)(piVar18 + 0xe);
        puVar16 = *(undefined8 **)(piVar18 + 0xc);
      }
LAB_09b8afba:
      *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
    }
    else {
      if (uStack_2a0._4_4_ == 1) {
        piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
        iVar10 = *piVar18;
        while (iVar10 != (int)uStack_2a0) {
          piVar18 = piVar18 + 0x1a;
          iVar10 = *piVar18;
        }
        goto LAB_09b8afba;
      }
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
    }
    func_0x09be69c0(&puStack_2b8,&uStack_148,&UNK_01496843,7);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2a0 != (long *)0x0) {
      lVar14 = *uStack_2a0;
      uStack_2a0 = plVar12;
      (**(code **)(lVar14 + 8))();
      plVar12 = uStack_2a0;
    }
    uStack_2a0 = plVar12;
    puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
    plStack_1e0 = (long *)0x0;
    uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
    uStack_1d0 = 1;
    uStack_1c8 = 0;
    puStack_1c0 = &UNK_048b3f30;
    puStack_1b8 = &SUB_048b06d0;
    puStack_1b0 = &SUB_048b2190;
    puStack_1a8 = &UNK_09be76d0;
    puStack_1a0 = &UNK_09be7890;
    uStack_198 = 0;
    uStack_190 = 0;
    plStack_188 = (long *)0x0;
    func_0x048b05a0(puStack_2b0,&puStack_1e8);
    plVar12 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_188 + 1;
      lVar14 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar14 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x09be6c70(&puStack_2b8);
    func_0x048b0bc0(&uStack_2a0);
  }
  lVar14 = *(long *)(lVar17 + 0x98);
  if ((DAT_0f647820 == '\0') && (iVar10 = func_0x04108328(&DAT_0f647820), iVar10 != 0)) {
    func_0x09bb4090();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6477a0,0xf53dab8);
    FUN_0410844d(&DAT_0f647820);
  }
  plVar12 = (long *)(*(long *)(lVar14 + 0x158) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x160) - *(long *)(lVar14 + 0x158)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6477a0 + 4)) * 8);
  do {
    lVar11 = *plVar12;
    if (lVar11 == -1) goto LAB_09b8b173;
    plVar12 = (long *)(*(long *)(lVar14 + 0x170) + lVar11 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x170) + 8 + lVar11 * 0x18) != *(uint *)(_DAT_0f6477a0 + 4))
  ;
  if (plVar12 == *(long **)(lVar14 + 0x178)) {
LAB_09b8b173:
    puVar15 = &DAT_0f6477a0;
    if (iRam000000000f647800 != -0x2b3da790) goto LAB_09b8b1e1;
LAB_09b8b1a1:
    lVar11 = *(long *)(puVar15 + 0x68);
    if (lVar11 == 0) goto LAB_09b8b1e1;
    bVar22 = (*(byte *)(lVar11 + 8) & 1) != 0;
    lVar17 = lVar11 + 9;
    if (bVar22) {
      lVar17 = *(long *)(lVar11 + 0x18);
    }
    uVar19 = (ulong)(*(byte *)(lVar11 + 8) >> 1);
    if (bVar22) {
      uVar19 = *(ulong *)(lVar11 + 0x10);
    }
    func_0x09be7a60(&uStack_180,lVar14 + 0x140,lVar17,uVar19);
  }
  else {
    puVar15 = (undefined *)plVar12[2];
    if (*(int *)(puVar15 + 0x60) == -0x2b3da790) goto LAB_09b8b1a1;
LAB_09b8b1e1:
    func_0x09be7a60(&uStack_180,lVar14 + 0x140,0,0);
  }
  if (cStack_150 != '\0') {
    return;
  }
  func_0x09be8610(&puStack_2b8,&uStack_180,&UNK_0122cba0,4,1);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef46ce8;
  if (uStack_2a0 != (long *)0x0) {
    lVar14 = *uStack_2a0;
    uStack_2a0 = plVar12;
    (**(code **)(lVar14 + 8))();
    plVar12 = uStack_2a0;
  }
  uStack_2a0 = plVar12;
  puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
  plStack_1e0 = (long *)0x0;
  uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
  uStack_1d0 = 1;
  uStack_1c8 = 0;
  puStack_1c0 = &UNK_0490ce30;
  puStack_1b8 = &SUB_048b06d0;
  puStack_1b0 = &SUB_0490cb20;
  puStack_1a8 = &UNK_09be8bd0;
  puStack_1a0 = &UNK_09be8d30;
  uStack_198 = 0;
  uStack_190 = 0;
  plStack_188 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,&puStack_1e8);
  plVar12 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_188 + 1;
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x09be88d0(&puStack_2b8);
  cStack_38 = cStack_150;
  uStack_48 = uStack_160;
  uStack_44 = uStack_15c;
  uStack_40 = (undefined4)uStack_158;
  uStack_3c = uStack_158._4_4_;
  uStack_58 = uStack_170;
  uStack_54 = uStack_16c;
  uStack_50 = uStack_168;
  uStack_4c = uStack_164;
  uStack_68 = uStack_180;
  uStack_64 = uStack_17c;
  uStack_60 = (undefined4)uStack_178;
  uStack_5c = uStack_178._4_4_;
  func_0x048b0bc0(&uStack_2a0);
  func_0x09be8050(&puStack_2b8,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_2a0._4_4_ == 2) {
    piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
    iVar10 = *piVar18;
    while (iVar10 != (int)uStack_2a0) {
      piVar18 = piVar18 + 0x16;
      iVar10 = *piVar18;
    }
    puVar16 = *(undefined8 **)(piVar18 + 0xc);
    while (puVar16 != puStack_2b0) {
      piVar18 = *(int **)(piVar18 + 0xe);
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
    }
LAB_09b8b44a:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else {
    if (uStack_2a0._4_4_ == 1) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x1a;
        iVar10 = *piVar18;
      }
      goto LAB_09b8b44a;
    }
    if (uStack_2a0._4_4_ == 0) {
      *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
    }
  }
  func_0x09be8610(&puStack_2b8,&uStack_68,&UNK_01496843,7,0x10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef44b00;
  if (uStack_2a0 != (long *)0x0) {
    lVar14 = *uStack_2a0;
    uStack_2a0 = plVar12;
    (**(code **)(lVar14 + 8))();
    plVar12 = uStack_2a0;
  }
  uStack_2a0 = plVar12;
  puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
  plStack_1e0 = (long *)0x0;
  uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
  uStack_1d0 = 1;
  uStack_1c8 = 0;
  puStack_1c0 = &UNK_048b3f30;
  puStack_1b8 = &SUB_048b06d0;
  puStack_1b0 = &SUB_048b2190;
  puStack_1a8 = &UNK_09be8f00;
  puStack_1a0 = &UNK_09be90d0;
  uStack_198 = 0;
  uStack_190 = 0;
  plStack_188 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,&puStack_1e8);
  plVar12 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_188 + 1;
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x09be88d0(&puStack_2b8);
  cStack_d8 = cStack_38;
  uStack_e8 = uStack_48;
  uStack_e4 = uStack_44;
  uStack_e0 = uStack_40;
  uStack_dc = uStack_3c;
  uStack_f8 = uStack_58;
  uStack_f4 = uStack_54;
  uStack_f0 = uStack_50;
  uStack_ec = uStack_4c;
  uStack_108 = CONCAT44(uStack_64,uStack_68);
  uStack_100 = (long *)CONCAT44(uStack_5c,uStack_60);
  func_0x048b0bc0(&uStack_2a0);
  func_0x09be8050(&puStack_2b8,uStack_108 + 0x18);
  if (uStack_2a0._4_4_ == 2) {
    piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
    iVar10 = *piVar18;
    while (iVar10 != (int)uStack_2a0) {
      piVar18 = piVar18 + 0x16;
      iVar10 = *piVar18;
    }
    puVar16 = *(undefined8 **)(piVar18 + 0xc);
    while (puVar16 != puStack_2b0) {
      piVar18 = *(int **)(piVar18 + 0xe);
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
    }
LAB_09b8b69a:
    *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
  }
  else {
    if (uStack_2a0._4_4_ == 1) {
      piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
      iVar10 = *piVar18;
      while (iVar10 != (int)uStack_2a0) {
        piVar18 = piVar18 + 0x1a;
        iVar10 = *piVar18;
      }
      goto LAB_09b8b69a;
    }
    if (uStack_2a0._4_4_ == 0) {
      *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
    }
  }
  func_0x09be8610(&puStack_2b8,&uStack_108,&UNK_01314d5b,4,0x10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0ef44b00;
  if (uStack_2a0 != (long *)0x0) {
    lVar14 = *uStack_2a0;
    uStack_2a0 = plVar12;
    (**(code **)(lVar14 + 8))();
    plVar12 = uStack_2a0;
  }
  uStack_2a0 = plVar12;
  puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
  plStack_1e0 = (long *)0x0;
  uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
  uStack_1d0 = 1;
  uStack_1c8 = 0;
  puStack_1c0 = &UNK_048b3f30;
  puStack_1b8 = &SUB_048b06d0;
  puStack_1b0 = &SUB_048b2190;
  puStack_1a8 = &UNK_09be92b0;
  puStack_1a0 = &UNK_09be9480;
  uStack_198 = 0;
  uStack_190 = 0;
  plStack_188 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,&puStack_1e8);
  plVar12 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_188 + 1;
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x09be88d0(&puStack_2b8);
  uStack_118 = CONCAT71(uStack_118._1_7_,cStack_d8);
  uStack_128 = uStack_e8;
  uStack_124 = uStack_e4;
  uStack_120 = CONCAT44(uStack_dc,uStack_e0);
  uStack_138 = uStack_f8;
  uStack_134 = uStack_f4;
  uStack_130 = uStack_f0;
  uStack_12c = uStack_ec;
  uStack_148 = uStack_108;
  uStack_140 = uStack_100;
  func_0x048b0bc0(&uStack_2a0);
  func_0x09be8050(&puStack_2b8,uStack_148 + 0x18);
  if (uStack_2a0._4_4_ == 2) {
    piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x60);
    iVar10 = *piVar18;
    while (iVar10 != (int)uStack_2a0) {
      piVar18 = piVar18 + 0x16;
      iVar10 = *piVar18;
    }
    puVar16 = *(undefined8 **)(piVar18 + 0xc);
    while (puVar16 != puStack_2b0) {
      piVar18 = *(int **)(piVar18 + 0xe);
      puVar16 = *(undefined8 **)(piVar18 + 0xc);
    }
  }
  else {
    if (uStack_2a0._4_4_ != 1) {
      if (uStack_2a0._4_4_ == 0) {
        *(uint *)(puStack_2a8 + 0x18) = *(uint *)(puStack_2a8 + 0x18) | 0x40000;
      }
      goto LAB_09b8b8ce;
    }
    piVar18 = *(int **)(*(long *)(puStack_2a8 + 0x78) + 0x48);
    iVar10 = *piVar18;
    while (iVar10 != (int)uStack_2a0) {
      piVar18 = piVar18 + 0x1a;
      iVar10 = *piVar18;
    }
  }
  *(byte *)((long)piVar18 + 0x12) = *(byte *)((long)piVar18 + 0x12) | 4;
LAB_09b8b8ce:
  func_0x09be8610(&puStack_2b8,&uStack_148,&UNK_01379f46,9,0x10);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar16 = &UNK_0ef44b00;
  if (uStack_2a0 != (long *)0x0) {
    lVar14 = *uStack_2a0;
    uStack_2a0 = puVar16;
    (**(code **)(lVar14 + 8))();
    puVar16 = uStack_2a0;
  }
  uStack_2a0 = puVar16;
  puStack_1e8 = (undefined *)CONCAT44(puStack_1e8._4_4_,puStack_2a8._0_4_);
  plStack_1e0 = (long *)0x0;
  uStack_1d8 = (long *)((ulong)uStack_1d8 & 0xffffffff00000000);
  uStack_1d0 = 1;
  uStack_1c8 = 0;
  puStack_1c0 = &UNK_048b3f30;
  puStack_1b8 = &SUB_048b06d0;
  puStack_1b0 = &SUB_048b2190;
  puStack_1a8 = &UNK_09be9660;
  puStack_1a0 = &UNK_09be9830;
  uStack_198 = 0;
  uStack_190 = 0;
  plStack_188 = (long *)0x0;
  func_0x048b05a0(puStack_2b0,&puStack_1e8);
  plVar12 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_188 + 1;
    lVar14 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_188 + 0x10))(plStack_188);
      func_0x0412c2d0(plVar12);
    }
  }
  func_0x09be88d0(&puStack_2b8);
  func_0x048b0bc0(&uStack_2a0);
  return;
}



/* ---- referenced strings ----
 * 0x1314d3d  Signaling_ReceiveMessage_v1_0
 * 0x1314d4a  eiveMessage_v1_0
 * 0x13b680d  System_Pong_v1_0
 * 0x14829fd  Signaling_ReceiveError_v1_0
 * 0x1482a08  eceiveError_v1_0
 */
