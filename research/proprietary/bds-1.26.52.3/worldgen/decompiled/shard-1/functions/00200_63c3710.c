/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x64c3710 (ELF vaddr 0x63c3710)
 * Label: caller-of-callee
 * Body:  [[064c3710, 064caaf1] [064cab00, 064cc0d1] [064cc0e0, 064cc881] [064cc890, 064cd651] [064cd660, 064cde01] [064cde10, 064cea3a]]
 * Ghidra: FUN_064c3710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_064c3710(long param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [8];
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  bool bVar20;
  undefined1 auStack_358 [8];
  long *plStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined1 *puStack_328;
  undefined1 *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined4 uStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  undefined8 *puStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  long lStack_2b0;
  undefined4 uStack_2a8;
  undefined1 uStack_2a4;
  undefined2 uStack_2a3;
  undefined1 uStack_2a1;
  undefined1 uStack_2a0;
  undefined4 uStack_29f;
  undefined4 uStack_29b;
  undefined2 uStack_297;
  undefined1 uStack_295;
  undefined4 uStack_294;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined4 uStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined2 uStack_228;
  undefined2 uStack_226;
  uint uStack_224;
  uint uStack_220;
  undefined1 uStack_21c;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long lStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined4 uStack_168;
  uint uStack_164;
  uint uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (DAT_0f57bd68 == '\0') goto LAB_064ce079;
LAB_064c3733:
  plVar12 = (long *)(param_1 + 0x18);
  plVar14 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & _DAT_0f57bd54) * 8);
  do {
    lVar6 = *plVar14;
    puStack_2f0 = plVar12;
    if (lVar6 == -1) goto LAB_064c3790;
    plVar14 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57bd54);
  if (plVar14 == *(long **)(param_1 + 0x38)) {
LAB_064c3790:
    lStack_2e8 = 0;
    plStack_2e0 = (undefined8 *)0x0;
    func_0x048b1dc0(&lStack_2e8);
    lVar6 = lStack_2e8;
    plVar12 = plStack_2e0;
    if (lStack_2e8 == 0) goto LAB_064c37b2;
LAB_064c37df:
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064c37e8;
LAB_064c37f3:
    lVar6 = func_0x06554370(puStack_2f0);
    if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
      bVar20 = (*(byte *)(lVar6 + 8) & 1) != 0;
      puVar9 = (undefined *)(lVar6 + 9);
      if (bVar20) {
        puVar9 = *(undefined **)(lVar6 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
      if (bVar20) {
        uVar17 = *(ulong *)(lVar6 + 0x10);
      }
    }
    else {
      puVar9 = &UNK_01327d74;
      uVar17 = 0x1d;
    }
    func_0x06554760(&uStack_158,param_1,puVar9,uVar17);
    uStack_124 = uStack_124 & 0xffffff00;
    uStack_120 = uStack_120 & 0xffffff00;
    func_0x06557ec0(&lStack_2e8,&UNK_01224811,4);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar6 = (long)&uStack_2c0 + 1;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_12c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_12c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_12c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_12c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_12c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_12c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_12c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_130 = 2;
    if ((DAT_0f57bd68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bd68), iVar5 != 0)) {
      func_0x06554300(0xf57bd50);
      func_0x0410844d(&DAT_0f57bd68);
    }
    auStack_358._0_4_ = uStack_12c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065584d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06554370;
    puStack_318 = &UNK_065584e0;
    puStack_310 = &UNK_065584f0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_150,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_140;
    uStack_1c4 = uStack_13c;
    uStack_1c0 = uStack_138;
    uStack_1bc = uStack_134;
    uStack_1d8 = uStack_150;
    uStack_1d0 = (long *)uStack_148;
    func_0x06558260(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c3afa:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c3afa;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_120 == '\0') {
      uStack_124 = 0xbb8863ad;
      uStack_120 = CONCAT31(uStack_120._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06554370(uStack_158 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01327e83
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_124;
    lVar7 = func_0x06554370(uStack_158 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cb8e9),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_12c,&uStack_12c,auStack_358);
    uStack_198 = uStack_158;
    plStack_190 = uStack_150;
    lStack_188 = uStack_148;
    uStack_180 = uStack_140;
    uStack_17c = uStack_13c;
    uStack_178 = uStack_138;
    uStack_174 = uStack_134;
    uStack_170 = uStack_130;
    uStack_16c = uStack_12c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06557ec0(&lStack_2e8,&UNK_0130c98e,9);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_16c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_16c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_16c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_170 = 2;
    if ((DAT_0f57bd68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bd68), iVar5 != 0)) {
      func_0x06554300(0xf57bd50);
      func_0x0410844d(&DAT_0f57bd68);
    }
    auStack_358._0_4_ = uStack_16c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065584d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06554370;
    puStack_318 = &UNK_06558540;
    puStack_310 = &UNK_06558550;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_190,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_180;
    uStack_1c4 = uStack_17c;
    uStack_1c0 = uStack_178;
    uStack_1bc = uStack_174;
    uStack_1d8 = plStack_190;
    uStack_1d0 = (long *)lStack_188;
    func_0x06558260(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c3f4a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c3f4a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_160 == '\0') {
      uStack_164 = 0xbb8863ad;
      uStack_160 = CONCAT31(uStack_160._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06554370(uStack_198 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01327e83
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_164;
    lVar7 = func_0x06554370(uStack_198 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cb8e9),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_16c,&uStack_16c,auStack_358);
    uStack_218 = uStack_198;
    plStack_210 = plStack_190;
    uStack_208 = lStack_188;
    uStack_200 = uStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    uStack_1f0 = uStack_170;
    uStack_1ec = uStack_16c;
    uStack_1e8 = uStack_168;
    uStack_1e4 = uStack_164;
    uStack_1e0 = uStack_160;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06557ec0(&lStack_2e8,&UNK_0120a5b8,8);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_1ec = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_1ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_1ec) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1f0 = 2;
    if ((DAT_0f57bd68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bd68), iVar5 != 0)) {
      func_0x06554300(0xf57bd50);
      func_0x0410844d(&DAT_0f57bd68);
    }
    auStack_358._0_4_ = uStack_1ec;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065584d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06554370;
    puStack_318 = &UNK_065585a0;
    puStack_310 = &UNK_065585b0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_210,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_200;
    uStack_1c4 = uStack_1fc;
    uStack_1c0 = uStack_1f8;
    uStack_1bc = uStack_1f4;
    uStack_1d8 = plStack_210;
    uStack_1d0 = (long *)uStack_208;
    func_0x06558260(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c439a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c439a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1e0 == '\0') {
      uStack_1e4 = 0xbb8863ad;
      uStack_1e0 = CONCAT31(uStack_1e0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06554370(uStack_218 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01327e83
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_1e4;
    lVar7 = func_0x06554370(uStack_218 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cb8e9),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_1ec,&uStack_1ec,auStack_358);
    uStack_1d8 = uStack_218;
    uStack_1d0 = plStack_210;
    uStack_1c8 = (undefined4)uStack_208;
    uStack_1c4 = uStack_208._4_4_;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_1a8 = uStack_1e8;
    uStack_1a4 = uStack_1e4;
    uStack_1a0 = uStack_1e0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06557ec0(&lStack_2e8,&UNK_0119ed31,9);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar6 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uVar16 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + 3 + uVar18) ^
                   ((int)*(char *)(lVar6 + 2 + uVar18) ^
                   ((int)*(char *)(lVar6 + 1 + uVar18) ^
                   ((int)*(char *)(lVar6 + uVar18) ^ uVar16) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + uVar18 + uVar17) ^ uVar16) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1b0 = CONCAT44(uVar16,2);
    if ((DAT_0f57bd68 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bd68), iVar5 != 0)) {
      func_0x06554300(0xf57bd50);
      func_0x0410844d(&DAT_0f57bd68);
    }
    auStack_358._0_4_ = uStack_1b0._4_4_;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065584d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06554370;
    puStack_318 = &UNK_06558600;
    puStack_310 = &UNK_06558610;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_1d0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_108 = uStack_1c0;
    uStack_104 = uStack_1bc;
    uStack_100 = uStack_1b8;
    uStack_fc = uStack_1b4;
    uStack_118 = uStack_1d0;
    uStack_110 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
    func_0x06558260(auStack_358,&uStack_118,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(plStack_348[0xf] + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      plVar12 = *(long **)(piVar10 + 0xc);
      while (plVar12 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar12 = *(long **)(piVar10 + 0xc);
      }
LAB_064c47da:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(plStack_348[0xf] + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c47da;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)(plStack_348 + 3) = *(uint *)(plStack_348 + 3) | 0x90000;
      }
    }
    if ((char)uStack_1a0 == '\0') {
      uStack_1a4 = 0xbb8863ad;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar6 = func_0x06554370(uStack_1d8 + 3);
      lVar6 = *(long *)(lVar6 + 0x68);
      piVar11 = *(int **)(lVar6 + 0x28);
      for (piVar10 = *(int **)(lVar6 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar6 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar6 + 0x20,auStack_358);
        }
        *(int **)(lVar6 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_01327e83
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_1a4;
    lVar6 = func_0x06554370(uStack_1d8 + 3);
    puVar1 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014cb8e9),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,(long)&uStack_1b0 + 4,(long)&uStack_1b0 + 4,auStack_358);
    func_0x048b0bc0(&lStack_2e8);
  }
  else {
    lVar6 = plVar14[2];
    if (lVar6 != 0) goto LAB_064c37df;
LAB_064c37b2:
    lVar6 = FUN_048aead0(plVar12);
    if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064c37f3;
LAB_064c37e8:
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064c37f3;
  }
  if ((DAT_0f577210 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577210), iVar5 != 0)) {
    func_0x06558660();
    func_0x0410844d(&DAT_0f577210);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & _DAT_0f5771fc) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_064c49c1;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f5771fc);
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064c49c1:
    lStack_2e8 = 0;
    plStack_2e0 = (undefined8 *)0x0;
    func_0x048b1dc0(&lStack_2e8);
    lVar6 = lStack_2e8;
    plVar12 = plStack_2e0;
    if (lStack_2e8 == 0) goto LAB_064c49e4;
LAB_064c4a12:
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064c4a1b;
LAB_064c4a26:
    if ((DAT_0f5772a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5772a8), iVar5 != 0)) {
      func_0x065587a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f577228,0xf53dab8);
      func_0x0410844d(&DAT_0f5772a8);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f577228 + 4)) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064c4a80;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f577228 + 4)
            );
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064c4a80:
      puVar9 = &DAT_0f577228;
      if (iRam000000000f577288 != -0x2b3da790) goto LAB_064c4ad8;
LAB_064c4aab:
      lVar6 = *(long *)(puVar9 + 0x68);
      if (lVar6 == 0) goto LAB_064c4ad8;
      bVar20 = (*(byte *)(lVar6 + 8) & 1) != 0;
      puVar9 = (undefined *)(lVar6 + 9);
      if (bVar20) {
        puVar9 = *(undefined **)(lVar6 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
      if (bVar20) {
        uVar17 = *(ulong *)(lVar6 + 0x10);
      }
    }
    else {
      puVar9 = (undefined *)plVar12[2];
      if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_064c4aab;
LAB_064c4ad8:
      puVar9 = &UNK_01327d92;
      uVar17 = 0x23;
    }
    func_0x06558b60(&uStack_198,param_1,puVar9,uVar17);
    uStack_164 = uStack_164 & 0xffffff00;
    uStack_160 = uStack_160 & 0xffffff00;
    func_0x0655c3e0(&lStack_2e8,&DAT_01255173);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar6 = (long)&uStack_2c0 + 1;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_16c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_16c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_16c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_170 = 2;
    if ((DAT_0f577210 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577210), iVar5 != 0)) {
      func_0x06558660();
      func_0x0410844d(&DAT_0f577210);
    }
    auStack_358._0_4_ = uStack_16c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_0655c9e0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &UNK_065586e0;
    puStack_318 = &UNK_0655caa0;
    puStack_310 = &UNK_0655cab0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_190,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_180;
    uStack_1c4 = uStack_17c;
    uStack_1c0 = uStack_178;
    uStack_1bc = uStack_174;
    uStack_1d8 = plStack_190;
    uStack_1d0 = (long *)lStack_188;
    func_0x0655c770(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c4d9a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c4d9a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_160 == '\0') {
      func_0x0655cb00(auStack_358,&uStack_198);
    }
    uVar16 = uStack_164;
    plVar12 = uStack_198;
    if ((DAT_0f5772a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5772a8), iVar5 != 0)) {
      func_0x065587a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f577228,0xf53dab8);
      func_0x0410844d(&DAT_0f5772a8);
    }
    plVar14 = (long *)(plVar12[3] +
                      (ulong)((int)((ulong)(plVar12[4] - plVar12[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f577228 + 4)) * 8);
    do {
      lVar7 = *plVar14;
      if (lVar7 == -1) goto LAB_064c4e30;
      plVar14 = (long *)(plVar12[6] + lVar7 * 0x18);
    } while (*(uint *)(plVar12[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f577228 + 4));
    if (plVar14 == (long *)plVar12[7]) {
LAB_064c4e30:
      puVar9 = &DAT_0f577228;
    }
    else {
      puVar9 = (undefined *)plVar14[2];
    }
    puVar1 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01449f4e),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_16c,&uStack_16c,auStack_358);
    uStack_218 = uStack_198;
    plStack_210 = plStack_190;
    uStack_208 = lStack_188;
    uStack_200 = uStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    uStack_1f0 = uStack_170;
    uStack_1ec = uStack_16c;
    uStack_1e8 = uStack_168;
    uStack_1e4 = uStack_164;
    uStack_1e0 = uStack_160;
    func_0x048b0bc0(&lStack_2e8);
    func_0x0655c3e0(&lStack_2e8,&UNK_01411503);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_1ec = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_1ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_1ec) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1f0 = 2;
    if ((DAT_0f577210 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577210), iVar5 != 0)) {
      func_0x06558660();
      func_0x0410844d(&DAT_0f577210);
    }
    auStack_358._0_4_ = uStack_1ec;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_0655c9e0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &UNK_065586e0;
    puStack_318 = &UNK_0655ccc0;
    puStack_310 = &UNK_0655ccd0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_210,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_200;
    uStack_1c4 = uStack_1fc;
    uStack_1c0 = uStack_1f8;
    uStack_1bc = uStack_1f4;
    uStack_1d8 = plStack_210;
    uStack_1d0 = (long *)uStack_208;
    func_0x0655c770(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c519a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c519a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1e0 == '\0') {
      func_0x0655cb00(auStack_358,&uStack_218);
    }
    uVar16 = uStack_1e4;
    plVar12 = uStack_218;
    if ((DAT_0f5772a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5772a8), iVar5 != 0)) {
      func_0x065587a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f577228,0xf53dab8);
      func_0x0410844d(&DAT_0f5772a8);
    }
    plVar14 = (long *)(plVar12[3] +
                      (ulong)((int)((ulong)(plVar12[4] - plVar12[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f577228 + 4)) * 8);
    do {
      lVar7 = *plVar14;
      if (lVar7 == -1) goto LAB_064c5230;
      plVar14 = (long *)(plVar12[6] + lVar7 * 0x18);
    } while (*(uint *)(plVar12[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f577228 + 4));
    if (plVar14 == (long *)plVar12[7]) {
LAB_064c5230:
      puVar9 = &DAT_0f577228;
    }
    else {
      puVar9 = (undefined *)plVar14[2];
    }
    puVar1 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01449f4e),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_1ec,&uStack_1ec,auStack_358);
    uStack_1d8 = uStack_218;
    uStack_1d0 = plStack_210;
    uStack_1c8 = (undefined4)uStack_208;
    uStack_1c4 = uStack_208._4_4_;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_1a8 = uStack_1e8;
    uStack_1a4 = uStack_1e4;
    uStack_1a0 = uStack_1e0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x0655c3e0(&lStack_2e8);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar6 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uVar16 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + 3 + uVar18) ^
                   ((int)*(char *)(lVar6 + 2 + uVar18) ^
                   ((int)*(char *)(lVar6 + 1 + uVar18) ^
                   ((int)*(char *)(lVar6 + uVar18) ^ uVar16) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + uVar18 + uVar17) ^ uVar16) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1b0 = CONCAT44(uVar16,2);
    if ((DAT_0f577210 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577210), iVar5 != 0)) {
      func_0x06558660();
      func_0x0410844d(&DAT_0f577210);
    }
    auStack_358._0_4_ = uStack_1b0._4_4_;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_0655c9e0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &UNK_065586e0;
    puStack_318 = &UNK_0655cd20;
    puStack_310 = &UNK_0655cd30;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_1d0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_148 = CONCAT44(uStack_1bc,uStack_1c0);
    uStack_140 = uStack_1b8;
    uStack_13c = uStack_1b4;
    uStack_158 = uStack_1d0;
    uStack_150 = (long *)CONCAT44(uStack_1c4,uStack_1c8);
    func_0x0655c770(auStack_358,&uStack_158,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(plStack_348[0xf] + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      plVar12 = *(long **)(piVar10 + 0xc);
      while (plVar12 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar12 = *(long **)(piVar10 + 0xc);
      }
LAB_064c558a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(plStack_348[0xf] + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c558a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)(plStack_348 + 3) = *(uint *)(plStack_348 + 3) | 0x90000;
      }
    }
    if ((char)uStack_1a0 == '\0') {
      func_0x0655cb00(auStack_358,&uStack_1d8);
    }
    uVar16 = uStack_1a4;
    plVar12 = uStack_1d8;
    if ((DAT_0f5772a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5772a8), iVar5 != 0)) {
      func_0x065587a0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f577228,0xf53dab8);
      func_0x0410844d(&DAT_0f5772a8);
    }
    plVar14 = (long *)(plVar12[3] +
                      (ulong)((int)((ulong)(plVar12[4] - plVar12[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f577228 + 4)) * 8);
    do {
      lVar6 = *plVar14;
      if (lVar6 == -1) goto LAB_064c5620;
      plVar14 = (long *)(plVar12[6] + lVar6 * 0x18);
    } while (*(uint *)(plVar12[6] + 8 + lVar6 * 0x18) != *(uint *)(_DAT_0f577228 + 4));
    if (plVar14 == (long *)plVar12[7]) {
LAB_064c5620:
      puVar9 = &DAT_0f577228;
    }
    else {
      puVar9 = (undefined *)plVar14[2];
    }
    puVar1 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(puVar9 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01449f4e),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,(long)&uStack_1b0 + 4,(long)&uStack_1b0 + 4,auStack_358);
    func_0x048b0bc0(&lStack_2e8);
  }
  else {
    lVar6 = plVar12[2];
    plVar12 = puStack_2f0;
    if (lVar6 != 0) goto LAB_064c4a12;
LAB_064c49e4:
    lVar6 = FUN_048aead0(plVar12);
    if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064c4a26;
LAB_064c4a1b:
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064c4a26;
  }
  if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
    func_0x0655cd80(0xf57bf48);
    func_0x0410844d(&DAT_0f57bf60);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & _DAT_0f57bf4c) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_064c5721;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57bf4c);
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064c5721:
    lStack_2e8 = 0;
    plStack_2e0 = (undefined8 *)0x0;
    func_0x048b1dc0(&lStack_2e8);
    lVar6 = lStack_2e8;
    plVar12 = plStack_2e0;
    if (lStack_2e8 == 0) goto LAB_064c5744;
LAB_064c5772:
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064c577b;
LAB_064c5786:
    lVar6 = func_0x0655cdf0(puStack_2f0);
    if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
      bVar20 = (*(byte *)(lVar6 + 8) & 1) != 0;
      puVar9 = (undefined *)(lVar6 + 9);
      if (bVar20) {
        puVar9 = *(undefined **)(lVar6 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
      if (bVar20) {
        uVar17 = *(ulong *)(lVar6 + 0x10);
      }
    }
    else {
      puVar9 = &UNK_01392e9e;
      uVar17 = 0x21;
    }
    func_0x0655d1e0(&uStack_98,param_1,puVar9,uVar17);
    uStack_64 = uStack_64 & 0xffffff00;
    uStack_60 = uStack_60 & 0xffffff00;
    func_0x06560940(&lStack_2e8,&DAT_01255173,7);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar6 = (long)&uStack_2c0 + 1;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_6c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_6c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_6c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_6c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                      ((int)*(char *)(lVar7 + 2 + uVar18) ^
                      ((int)*(char *)(lVar7 + 1 + uVar18) ^
                      ((int)*(char *)(lVar7 + uVar18) ^ uStack_6c) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_6c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_6c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_70 = 2;
    if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
      func_0x0655cd80(0xf57bf48);
      func_0x0410844d(&DAT_0f57bf60);
    }
    auStack_358._0_4_ = uStack_6c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_06560f50;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0655cdf0;
    puStack_318 = &UNK_06560f60;
    puStack_310 = &UNK_06560f70;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_90,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_80;
    uStack_1c4 = uStack_7c;
    uStack_1c0 = uStack_78;
    uStack_1bc = uStack_74;
    uStack_1d8 = (long *)CONCAT44(uStack_8c,uStack_90);
    uStack_1d0 = (long *)CONCAT44(uStack_84,uStack_88);
    func_0x06560ce0(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c5a9a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c5a9a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_60 == '\0') {
      uStack_64 = 0xbb8863ad;
      uStack_60 = CONCAT31(uStack_60._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x0655cdf0(CONCAT44(uStack_94,uStack_98) + 0x18);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0135e8d8
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_64;
    lVar7 = func_0x0655cdf0(CONCAT44(uStack_94,uStack_98) + 0x18);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0130cb0a),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_6c,&uStack_6c,auStack_358);
    uStack_d8 = uStack_98;
    uStack_d4 = uStack_94;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    uStack_c8 = uStack_88;
    uStack_c4 = uStack_84;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    uStack_b8 = uStack_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    uStack_a8 = uStack_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06560940(&lStack_2e8,&UNK_014b0758,0x13);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_ac = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_ac = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_ac = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                      ((int)*(char *)(lVar7 + 2 + uVar18) ^
                      ((int)*(char *)(lVar7 + 1 + uVar18) ^
                      ((int)*(char *)(lVar7 + uVar18) ^ uStack_ac) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_ac) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_b0 = 2;
    if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
      func_0x0655cd80(0xf57bf48);
      func_0x0410844d(&DAT_0f57bf60);
    }
    auStack_358._0_4_ = uStack_ac;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_06560f50;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0655cdf0;
    puStack_318 = &UNK_06560fc0;
    puStack_310 = &UNK_06560fd0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_d0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_c0;
    uStack_1c4 = uStack_bc;
    uStack_1c0 = uStack_b8;
    uStack_1bc = uStack_b4;
    uStack_1d8 = (long *)CONCAT44(uStack_cc,uStack_d0);
    uStack_1d0 = (long *)CONCAT44(uStack_c4,uStack_c8);
    func_0x06560ce0(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c5eea:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c5eea;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_a0 == '\0') {
      uStack_a4 = 0xbb8863ad;
      uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x0655cdf0(CONCAT44(uStack_d4,uStack_d8) + 0x18);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0135e8d8
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_a4;
    lVar7 = func_0x0655cdf0(CONCAT44(uStack_d4,uStack_d8) + 0x18);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0130cb0a),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_ac,&uStack_ac,auStack_358);
    uStack_118 = (long *)CONCAT44(uStack_d4,uStack_d8);
    uStack_110 = (long *)CONCAT44(uStack_cc,uStack_d0);
    uStack_108 = uStack_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    uStack_e0 = uStack_a0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06560940(&lStack_2e8,&UNK_011ef2e9,0x12);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_ec = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_ec = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_ec = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_ec = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                      ((int)*(char *)(lVar7 + 2 + uVar18) ^
                      ((int)*(char *)(lVar7 + 1 + uVar18) ^
                      ((int)*(char *)(lVar7 + uVar18) ^ uStack_ec) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_ec = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_ec) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_f0 = 2;
    if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
      func_0x0655cd80(0xf57bf48);
      func_0x0410844d(&DAT_0f57bf60);
    }
    auStack_358._0_4_ = uStack_ec;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_06560f50;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0655cdf0;
    puStack_318 = &UNK_06561020;
    puStack_310 = &UNK_06561030;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_110,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_100;
    uStack_1c4 = uStack_fc;
    uStack_1c0 = uStack_f8;
    uStack_1bc = uStack_f4;
    uStack_1d8 = uStack_110;
    uStack_1d0 = (long *)CONCAT44(uStack_104,uStack_108);
    func_0x06560ce0(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c633a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c633a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_e0 == '\0') {
      uStack_e4 = 0xbb8863ad;
      uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x0655cdf0(uStack_118 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0135e8d8
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_e4;
    lVar7 = func_0x0655cdf0(uStack_118 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0130cb0a),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_ec,&uStack_ec,auStack_358);
    uStack_158 = uStack_118;
    uStack_150 = uStack_110;
    uStack_148 = CONCAT44(uStack_104,uStack_108);
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_138 = uStack_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    uStack_120 = uStack_e0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06560940(&lStack_2e8,&UNK_014613ec,0x12);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_12c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_12c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_12c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_12c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_12c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_12c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_12c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_130 = 2;
    if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
      func_0x0655cd80(0xf57bf48);
      func_0x0410844d(&DAT_0f57bf60);
    }
    auStack_358._0_4_ = uStack_12c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_06560f50;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0655cdf0;
    puStack_318 = &UNK_06561080;
    puStack_310 = &UNK_06561090;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_150,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_140;
    uStack_1c4 = uStack_13c;
    uStack_1c0 = uStack_138;
    uStack_1bc = uStack_134;
    uStack_1d8 = uStack_150;
    uStack_1d0 = (long *)uStack_148;
    func_0x06560ce0(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c678a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c678a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_120 == '\0') {
      uStack_124 = 0xbb8863ad;
      uStack_120 = CONCAT31(uStack_120._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x0655cdf0(uStack_158 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0135e8d8
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_124;
    lVar7 = func_0x0655cdf0(uStack_158 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0130cb0a),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_12c,&uStack_12c,auStack_358);
    uStack_198 = uStack_158;
    plStack_190 = uStack_150;
    lStack_188 = uStack_148;
    uStack_180 = uStack_140;
    uStack_17c = uStack_13c;
    uStack_178 = uStack_138;
    uStack_174 = uStack_134;
    uStack_170 = uStack_130;
    uStack_16c = uStack_12c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06560940(&lStack_2e8,&UNK_0120a5c1,0xf);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_16c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_16c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_16c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_170 = 2;
    if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
      func_0x0655cd80(0xf57bf48);
      func_0x0410844d(&DAT_0f57bf60);
    }
    auStack_358._0_4_ = uStack_16c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_06560f50;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0655cdf0;
    puStack_318 = &UNK_065610e0;
    puStack_310 = &UNK_065610f0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_190,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_180;
    uStack_1c4 = uStack_17c;
    uStack_1c0 = uStack_178;
    uStack_1bc = uStack_174;
    uStack_1d8 = plStack_190;
    uStack_1d0 = (long *)lStack_188;
    func_0x06560ce0(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c6bda:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c6bda;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_160 == '\0') {
      uStack_164 = 0xbb8863ad;
      uStack_160 = CONCAT31(uStack_160._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x0655cdf0(uStack_198 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0135e8d8
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_164;
    lVar7 = func_0x0655cdf0(uStack_198 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0130cb0a),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_16c,&uStack_16c,auStack_358);
    uStack_218 = uStack_198;
    plStack_210 = plStack_190;
    uStack_208 = lStack_188;
    uStack_200 = uStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    uStack_1f0 = uStack_170;
    uStack_1ec = uStack_16c;
    uStack_1e8 = uStack_168;
    uStack_1e4 = uStack_164;
    uStack_1e0 = uStack_160;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06560940(&lStack_2e8,&UNK_013c6ac1,0x15);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_1ec = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_1ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_1ec) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1f0 = 2;
    if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
      func_0x0655cd80(0xf57bf48);
      func_0x0410844d(&DAT_0f57bf60);
    }
    auStack_358._0_4_ = uStack_1ec;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_06560f50;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0655cdf0;
    puStack_318 = &UNK_06561140;
    puStack_310 = &UNK_06561150;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_210,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_200;
    uStack_1c4 = uStack_1fc;
    uStack_1c0 = uStack_1f8;
    uStack_1bc = uStack_1f4;
    uStack_1d8 = plStack_210;
    uStack_1d0 = (long *)uStack_208;
    func_0x06560ce0(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c702a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c702a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1e0 == '\0') {
      uStack_1e4 = 0xbb8863ad;
      uStack_1e0 = CONCAT31(uStack_1e0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x0655cdf0(uStack_218 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0135e8d8
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_1e4;
    lVar7 = func_0x0655cdf0(uStack_218 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0130cb0a),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_1ec,&uStack_1ec,auStack_358);
    uStack_1d8 = uStack_218;
    uStack_1d0 = plStack_210;
    uStack_1c8 = (undefined4)uStack_208;
    uStack_1c4 = uStack_208._4_4_;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_1a8 = uStack_1e8;
    uStack_1a4 = uStack_1e4;
    uStack_1a0 = uStack_1e0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06560940(&lStack_2e8,&UNK_012f24dc,7);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar6 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uVar16 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + 3 + uVar18) ^
                   ((int)*(char *)(lVar6 + 2 + uVar18) ^
                   ((int)*(char *)(lVar6 + 1 + uVar18) ^
                   ((int)*(char *)(lVar6 + uVar18) ^ uVar16) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + uVar18 + uVar17) ^ uVar16) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1b0 = CONCAT44(uVar16,2);
    if ((DAT_0f57bf60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bf60), iVar5 != 0)) {
      func_0x0655cd80(0xf57bf48);
      func_0x0410844d(&DAT_0f57bf60);
    }
    auStack_358._0_4_ = uStack_1b0._4_4_;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_06560f50;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0655cdf0;
    puStack_318 = &UNK_065611a0;
    puStack_310 = &UNK_065611b0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_1d0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_48 = uStack_1c0;
    uStack_44 = uStack_1bc;
    uStack_40 = uStack_1b8;
    uStack_3c = uStack_1b4;
    uStack_58 = (undefined4)uStack_1d0;
    uStack_54 = uStack_1d0._4_4_;
    uStack_50 = uStack_1c8;
    uStack_4c = uStack_1c4;
    func_0x06560ce0(auStack_358,&uStack_58,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(plStack_348[0xf] + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      plVar12 = *(long **)(piVar10 + 0xc);
      while (plVar12 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar12 = *(long **)(piVar10 + 0xc);
      }
LAB_064c746a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(plStack_348[0xf] + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c746a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)(plStack_348 + 3) = *(uint *)(plStack_348 + 3) | 0x90000;
      }
    }
    if ((char)uStack_1a0 == '\0') {
      uStack_1a4 = 0xbb8863ad;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar6 = func_0x0655cdf0(uStack_1d8 + 3);
      lVar6 = *(long *)(lVar6 + 0x68);
      piVar11 = *(int **)(lVar6 + 0x28);
      for (piVar10 = *(int **)(lVar6 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar6 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar6 + 0x20,auStack_358);
        }
        *(int **)(lVar6 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0135e8d8
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_1a4;
    lVar6 = func_0x0655cdf0(uStack_1d8 + 3);
    puVar1 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_0130cb0a),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,(long)&uStack_1b0 + 4,(long)&uStack_1b0 + 4,auStack_358);
    func_0x048b0bc0(&lStack_2e8);
  }
  else {
    lVar6 = plVar12[2];
    plVar12 = puStack_2f0;
    if (lVar6 != 0) goto LAB_064c5772;
LAB_064c5744:
    lVar6 = FUN_048aead0(plVar12);
    if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064c5786;
LAB_064c577b:
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064c5786;
  }
  if ((DAT_0f57be20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57be20), iVar5 != 0)) {
    func_0x06561200(0xf57be08);
    func_0x0410844d(&DAT_0f57be20);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & _DAT_0f57be0c) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_064c7651;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57be0c);
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064c7651:
    lStack_2e8 = 0;
    plStack_2e0 = (undefined8 *)0x0;
    func_0x048b1dc0(&lStack_2e8);
    lVar6 = lStack_2e8;
    plVar12 = plStack_2e0;
    if (lStack_2e8 == 0) goto LAB_064c7674;
LAB_064c76a2:
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064c76ab;
LAB_064c76b6:
    lVar6 = func_0x06561270(puStack_2f0);
    if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
      bVar20 = (*(byte *)(lVar6 + 8) & 1) != 0;
      puVar9 = (undefined *)(lVar6 + 9);
      if (bVar20) {
        puVar9 = *(undefined **)(lVar6 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
      if (bVar20) {
        uVar17 = *(ulong *)(lVar6 + 0x10);
      }
    }
    else {
      puVar9 = &UNK_013c6ad7;
      uVar17 = 0x29;
    }
    func_0x06561660(&uStack_d8,param_1,puVar9,uVar17);
    uStack_a4 = uStack_a4 & 0xffffff00;
    uStack_a0 = uStack_a0 & 0xffffff00;
    func_0x06564dc0(&lStack_2e8,&UNK_014b076c,0xb);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar6 = (long)&uStack_2c0 + 1;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_ac = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_ac = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_ac = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                      ((int)*(char *)(lVar7 + 2 + uVar18) ^
                      ((int)*(char *)(lVar7 + 1 + uVar18) ^
                      ((int)*(char *)(lVar7 + uVar18) ^ uStack_ac) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_ac = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_ac) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_b0 = 2;
    if ((DAT_0f57be20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57be20), iVar5 != 0)) {
      func_0x06561200(0xf57be08);
      func_0x0410844d(&DAT_0f57be20);
    }
    auStack_358._0_4_ = uStack_ac;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065653d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06561270;
    puStack_318 = &UNK_065653e0;
    puStack_310 = &UNK_065653f0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_d0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_c0;
    uStack_1c4 = uStack_bc;
    uStack_1c0 = uStack_b8;
    uStack_1bc = uStack_b4;
    uStack_1d8 = (long *)CONCAT44(uStack_cc,uStack_d0);
    uStack_1d0 = (long *)CONCAT44(uStack_c4,uStack_c8);
    func_0x06565160(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c79ca:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c79ca;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_a0 == '\0') {
      uStack_a4 = 0xbb8863ad;
      uStack_a0 = CONCAT31(uStack_a0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06561270(CONCAT44(uStack_d4,uStack_d8) + 0x18);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119f205
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_a4;
    lVar7 = func_0x06561270(CONCAT44(uStack_d4,uStack_d8) + 0x18);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01274154),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_ac,&uStack_ac,auStack_358);
    uStack_118 = (long *)CONCAT44(uStack_d4,uStack_d8);
    uStack_110 = (long *)CONCAT44(uStack_cc,uStack_d0);
    uStack_108 = uStack_c8;
    uStack_104 = uStack_c4;
    uStack_100 = uStack_c0;
    uStack_fc = uStack_bc;
    uStack_f8 = uStack_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_e8 = uStack_a8;
    uStack_e4 = uStack_a4;
    uStack_e0 = uStack_a0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06564dc0(&lStack_2e8,&UNK_013c6b01,0x14);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_ec = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_ec = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_ec = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_ec = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                      ((int)*(char *)(lVar7 + 2 + uVar18) ^
                      ((int)*(char *)(lVar7 + 1 + uVar18) ^
                      ((int)*(char *)(lVar7 + uVar18) ^ uStack_ec) * 0x1000193) * 0x1000193) *
                      0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_ec = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_ec) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_f0 = 2;
    if ((DAT_0f57be20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57be20), iVar5 != 0)) {
      func_0x06561200(0xf57be08);
      func_0x0410844d(&DAT_0f57be20);
    }
    auStack_358._0_4_ = uStack_ec;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065653d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06561270;
    puStack_318 = &UNK_06565440;
    puStack_310 = &UNK_06565450;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_110,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_100;
    uStack_1c4 = uStack_fc;
    uStack_1c0 = uStack_f8;
    uStack_1bc = uStack_f4;
    uStack_1d8 = uStack_110;
    uStack_1d0 = (long *)CONCAT44(uStack_104,uStack_108);
    func_0x06565160(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c7e1a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c7e1a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_e0 == '\0') {
      uStack_e4 = 0xbb8863ad;
      uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06561270(uStack_118 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119f205
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_e4;
    lVar7 = func_0x06561270(uStack_118 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01274154),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_ec,&uStack_ec,auStack_358);
    uStack_158 = uStack_118;
    uStack_150 = uStack_110;
    uStack_148 = CONCAT44(uStack_104,uStack_108);
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_138 = uStack_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    uStack_128 = uStack_e8;
    uStack_124 = uStack_e4;
    uStack_120 = uStack_e0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06564dc0(&lStack_2e8,&UNK_012f38d2,0xf);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_12c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_12c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_12c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_12c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_12c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_12c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_12c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_130 = 2;
    if ((DAT_0f57be20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57be20), iVar5 != 0)) {
      func_0x06561200(0xf57be08);
      func_0x0410844d(&DAT_0f57be20);
    }
    auStack_358._0_4_ = uStack_12c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065653d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06561270;
    puStack_318 = &UNK_065654a0;
    puStack_310 = &UNK_065654b0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_150,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_140;
    uStack_1c4 = uStack_13c;
    uStack_1c0 = uStack_138;
    uStack_1bc = uStack_134;
    uStack_1d8 = uStack_150;
    uStack_1d0 = (long *)uStack_148;
    func_0x06565160(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c826a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c826a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_120 == '\0') {
      uStack_124 = 0xbb8863ad;
      uStack_120 = CONCAT31(uStack_120._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06561270(uStack_158 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119f205
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_124;
    lVar7 = func_0x06561270(uStack_158 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01274154),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_12c,&uStack_12c,auStack_358);
    uStack_198 = uStack_158;
    plStack_190 = uStack_150;
    lStack_188 = uStack_148;
    uStack_180 = uStack_140;
    uStack_17c = uStack_13c;
    uStack_178 = uStack_138;
    uStack_174 = uStack_134;
    uStack_170 = uStack_130;
    uStack_16c = uStack_12c;
    uStack_168 = uStack_128;
    uStack_164 = uStack_124;
    uStack_160 = uStack_120;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06564dc0(&lStack_2e8,&UNK_01392ec0,0xd);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_16c = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_16c = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_16c) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_16c = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_16c) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_170 = 2;
    if ((DAT_0f57be20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57be20), iVar5 != 0)) {
      func_0x06561200(0xf57be08);
      func_0x0410844d(&DAT_0f57be20);
    }
    auStack_358._0_4_ = uStack_16c;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065653d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06561270;
    puStack_318 = &UNK_06565500;
    puStack_310 = &UNK_06565510;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_190,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_180;
    uStack_1c4 = uStack_17c;
    uStack_1c0 = uStack_178;
    uStack_1bc = uStack_174;
    uStack_1d8 = plStack_190;
    uStack_1d0 = (long *)lStack_188;
    func_0x06565160(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c86ba:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c86ba;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_160 == '\0') {
      uStack_164 = 0xbb8863ad;
      uStack_160 = CONCAT31(uStack_160._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06561270(uStack_198 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119f205
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_164;
    lVar7 = func_0x06561270(uStack_198 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01274154),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_16c,&uStack_16c,auStack_358);
    uStack_218 = uStack_198;
    plStack_210 = plStack_190;
    uStack_208 = lStack_188;
    uStack_200 = uStack_180;
    uStack_1fc = uStack_17c;
    uStack_1f8 = uStack_178;
    uStack_1f4 = uStack_174;
    uStack_1f0 = uStack_170;
    uStack_1ec = uStack_16c;
    uStack_1e8 = uStack_168;
    uStack_1e4 = uStack_164;
    uStack_1e0 = uStack_160;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06564dc0(&lStack_2e8,&UNK_014ab9ed,7);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    lVar7 = lVar6;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar7 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uStack_1ec = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uStack_1ec = 0x811c9dc5;
        uVar18 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + 3 + uVar18) ^
                       ((int)*(char *)(lVar7 + 2 + uVar18) ^
                       ((int)*(char *)(lVar7 + 1 + uVar18) ^
                       ((int)*(char *)(lVar7 + uVar18) ^ uStack_1ec) * 0x1000193) * 0x1000193) *
                       0x1000193) * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uStack_1ec = ((int)*(char *)(lVar7 + uVar18 + uVar17) ^ uStack_1ec) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1f0 = 2;
    if ((DAT_0f57be20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57be20), iVar5 != 0)) {
      func_0x06561200(0xf57be08);
      func_0x0410844d(&DAT_0f57be20);
    }
    auStack_358._0_4_ = uStack_1ec;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065653d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06561270;
    puStack_318 = &UNK_06565560;
    puStack_310 = &UNK_06565570;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&plStack_210,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar7 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_1c8 = uStack_200;
    uStack_1c4 = uStack_1fc;
    uStack_1c0 = uStack_1f8;
    uStack_1bc = uStack_1f4;
    uStack_1d8 = plStack_210;
    uStack_1d0 = (long *)uStack_208;
    func_0x06565160(auStack_358,&uStack_1d8,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      lVar7 = *(long *)(piVar10 + 0xc);
      while ((long *)lVar7 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        lVar7 = *(long *)(piVar10 + 0xc);
      }
LAB_064c8b0a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)((long)plStack_348 + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c8b0a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)((long)plStack_348 + 0x18) = *(uint *)((long)plStack_348 + 0x18) | 0x90000;
      }
    }
    if ((char)uStack_1e0 == '\0') {
      uStack_1e4 = 0xbb8863ad;
      uStack_1e0 = CONCAT31(uStack_1e0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar7 = func_0x06561270(uStack_218 + 3);
      lVar7 = *(long *)(lVar7 + 0x68);
      piVar11 = *(int **)(lVar7 + 0x28);
      for (piVar10 = *(int **)(lVar7 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar7 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar7 + 0x20,auStack_358);
        }
        *(int **)(lVar7 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119f205
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_1e4;
    lVar7 = func_0x06561270(uStack_218 + 3);
    puVar1 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar7 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01274154),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,&uStack_1ec,&uStack_1ec,auStack_358);
    uStack_1d8 = uStack_218;
    uStack_1d0 = plStack_210;
    uStack_1c8 = (undefined4)uStack_208;
    uStack_1c4 = uStack_208._4_4_;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_1a8 = uStack_1e8;
    uStack_1a4 = uStack_1e4;
    uStack_1a0 = uStack_1e0;
    func_0x048b0bc0(&lStack_2e8);
    func_0x06564dc0(&lStack_2e8,&UNK_011ba979,7);
    uVar17 = uStack_2c0 >> 1 & 0x7f;
    if ((uStack_2c0 & 1) != 0) {
      uVar17 = uStack_2b8;
      lVar6 = lStack_2b0;
    }
    if (uVar17 == 0) {
      uVar16 = 0x811c9dc5;
    }
    else {
      uVar8 = (ulong)((uint)uVar17 & 3);
      if (uVar17 < 4) {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
      }
      else {
        uVar16 = 0x811c9dc5;
        uVar18 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + 3 + uVar18) ^
                   ((int)*(char *)(lVar6 + 2 + uVar18) ^
                   ((int)*(char *)(lVar6 + 1 + uVar18) ^
                   ((int)*(char *)(lVar6 + uVar18) ^ uVar16) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if (uVar8 != 0) {
        uVar17 = 0;
        do {
          uVar16 = ((int)*(char *)(lVar6 + uVar18 + uVar17) ^ uVar16) * 0x1000193;
          uVar17 = uVar17 + 1;
        } while (uVar8 != uVar17);
      }
    }
    uStack_1b0 = CONCAT44(uVar16,2);
    if ((DAT_0f57be20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57be20), iVar5 != 0)) {
      func_0x06561200(0xf57be08);
      func_0x0410844d(&DAT_0f57be20);
    }
    auStack_358._0_4_ = uStack_1b0._4_4_;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)CONCAT44(plStack_348._4_4_,3);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_065653d0;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_06561270;
    puStack_318 = &UNK_065655c0;
    puStack_310 = &UNK_065655d0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(&uStack_1d0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    uStack_88 = uStack_1c0;
    uStack_84 = uStack_1bc;
    uStack_80 = uStack_1b8;
    uStack_7c = uStack_1b4;
    uStack_98 = (undefined4)uStack_1d0;
    uStack_94 = uStack_1d0._4_4_;
    uStack_90 = uStack_1c8;
    uStack_8c = uStack_1c4;
    func_0x06565160(auStack_358,&uStack_98,&lStack_2e8);
    if (uStack_340._4_4_ == 2) {
      piVar10 = *(int **)(plStack_348[0xf] + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_340) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      plVar12 = *(long **)(piVar10 + 0xc);
      while (plVar12 != plStack_350) {
        piVar10 = *(int **)(piVar10 + 0xe);
        plVar12 = *(long **)(piVar10 + 0xc);
      }
LAB_064c8f4a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 9;
    }
    else {
      if (uStack_340._4_4_ == 1) {
        piVar10 = *(int **)(plStack_348[0xf] + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_340) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c8f4a;
      }
      if (uStack_340._4_4_ == 0) {
        *(uint *)(plStack_348 + 3) = *(uint *)(plStack_348 + 3) | 0x90000;
      }
    }
    if ((char)uStack_1a0 == '\0') {
      uStack_1a4 = 0xbb8863ad;
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,1);
      auStack_358._0_4_ = 0xbb8863ad;
      lVar6 = func_0x06561270(uStack_1d8 + 3);
      lVar6 = *(long *)(lVar6 + 0x68);
      piVar11 = *(int **)(lVar6 + 0x28);
      for (piVar10 = *(int **)(lVar6 + 0x20); (piVar10 != piVar11 && (*piVar10 != -0x44779c53));
          piVar10 = piVar10 + 0xe) {
      }
      if (piVar10 == piVar11) {
        if (piVar11 < *(int **)(lVar6 + 0x30)) {
          *piVar11 = -0x44779c53;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0x3f800000;
          *(undefined1 *)(piVar11 + 0xc) = 0;
          *(undefined1 *)(piVar11 + 0xd) = 0;
          piVar11 = piVar11 + 0xe;
        }
        else {
          piVar11 = (int *)func_0x05d9c2b0(lVar6 + 0x20,auStack_358);
        }
        *(int **)(lVar6 + 0x28) = piVar11;
      }
      else if ((*(long *)(piVar10 + 8) != 0) &&
              (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0119f205
                                      ), cVar4 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar16 = uStack_1a4;
    lVar6 = func_0x06561270(uStack_1d8 + 3);
    puVar1 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x28);
    for (puVar19 = *(uint **)(*(long *)(lVar6 + 0x68) + 0x20);
        (puVar19 != puVar1 && (*puVar19 != uVar16)); puVar19 = puVar19 + 0xe) {
    }
    if ((puVar19 == puVar1) &&
       (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_01274154),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    auStack_358 = (undefined1  [8])((ulong)auStack_358 & 0xffffffffffffff00);
    func_0x05d9c620(puVar19 + 2,(long)&uStack_1b0 + 4,(long)&uStack_1b0 + 4,auStack_358);
    func_0x048b0bc0(&lStack_2e8);
  }
  else {
    lVar6 = plVar12[2];
    plVar12 = puStack_2f0;
    if (lVar6 != 0) goto LAB_064c76a2;
LAB_064c7674:
    lVar6 = FUN_048aead0(plVar12);
    if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064c76b6;
LAB_064c76ab:
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064c76b6;
  }
  if ((DAT_0f57b998 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57b998), iVar5 != 0)) {
    func_0x06565620(0xf57b980);
    func_0x0410844d(&DAT_0f57b998);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & _DAT_0f57b984) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_064c9131;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57b984);
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064c9131:
    lStack_2e8 = 0;
    plStack_2e0 = (undefined8 *)0x0;
    func_0x048b1dc0(&lStack_2e8);
    lVar6 = lStack_2e8;
    plVar12 = plStack_2e0;
    if (lStack_2e8 == 0) goto LAB_064c9154;
LAB_064c9182:
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064c918b;
LAB_064c9196:
    lVar6 = func_0x06565690(puStack_2f0);
    if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
      bVar20 = (*(byte *)(lVar6 + 8) & 1) != 0;
      puVar9 = (undefined *)(lVar6 + 9);
      if (bVar20) {
        puVar9 = *(undefined **)(lVar6 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
      if (bVar20) {
        uVar17 = *(ulong *)(lVar6 + 0x10);
      }
    }
    else {
      puVar9 = &UNK_01414c59;
      uVar17 = 0x1b;
    }
    func_0x06565df0(&uStack_218,param_1,puVar9,uVar17);
    func_0x06566330(&lStack_2e8,uStack_218 + 3);
    if (uStack_2d0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_2d0) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      puVar13 = *(undefined8 **)(piVar10 + 0xc);
      while (puVar13 != plStack_2e0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
      }
LAB_064c92ba:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c92ba;
      }
      if (uStack_2d0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
        *puVar19 = *puVar19 | 0x40000;
      }
    }
    func_0x065666e0(&lStack_2e8,&uStack_218,&UNK_0133e2b9,2);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2d0 != (long *)0x0) {
      lVar6 = *uStack_2d0;
      uStack_2d0 = plVar12;
      (**(code **)(lVar6 + 8))();
      plVar12 = uStack_2d0;
    }
    uStack_2d0 = plVar12;
    auStack_358._0_4_ = uStack_2d8;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_048b3f30;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_048b2190;
    puStack_318 = &UNK_06566c20;
    puStack_310 = &UNK_06566de0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(plStack_2e0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x065668a0(&lStack_2e8);
    uStack_1a8 = CONCAT31(uStack_1a8._1_3_,(undefined1)uStack_1e8);
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_1c8 = (undefined4)uStack_208;
    uStack_1c4 = uStack_208._4_4_;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1d8 = uStack_218;
    uStack_1d0 = plStack_210;
    func_0x048b0bc0(&uStack_2d0);
    func_0x06566330(&lStack_2e8,uStack_1d8 + 3);
    if (uStack_2d0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_2d0) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      puVar13 = *(undefined8 **)(piVar10 + 0xc);
      while (puVar13 != plStack_2e0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
      }
LAB_064c94ea:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c94ea;
      }
      if (uStack_2d0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
        *puVar19 = *puVar19 | 0x40000;
      }
    }
    func_0x065666e0(&lStack_2e8,&uStack_1d8,&UNK_01410416,4);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2d0 != (long *)0x0) {
      lVar6 = *uStack_2d0;
      uStack_2d0 = plVar12;
      (**(code **)(lVar6 + 8))();
      plVar12 = uStack_2d0;
    }
    uStack_2d0 = plVar12;
    auStack_358._0_4_ = uStack_2d8;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_048b3f30;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_048b2190;
    puStack_318 = &UNK_06566fb0;
    puStack_310 = &UNK_06567180;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(plStack_2e0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x065668a0(&lStack_2e8);
    func_0x048b0bc0(&uStack_2d0);
  }
  else {
    lVar6 = plVar12[2];
    plVar12 = puStack_2f0;
    if (lVar6 != 0) goto LAB_064c9182;
LAB_064c9154:
    lVar6 = FUN_048aead0(plVar12);
    if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064c9196;
LAB_064c918b:
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064c9196;
  }
  if ((DAT_0f57bc20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f57bc20), iVar5 != 0)) {
    func_0x06567360(0xf57bc08);
    func_0x0410844d(&DAT_0f57bc20);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & _DAT_0f57bc0c) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_064c9661;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57bc0c);
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064c9661:
    lStack_2e8 = 0;
    plStack_2e0 = (undefined8 *)0x0;
    func_0x048b1dc0(&lStack_2e8);
    lVar6 = lStack_2e8;
    plVar12 = plStack_2e0;
    if (lStack_2e8 == 0) goto LAB_064c9684;
LAB_064c96b2:
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064c96bb;
LAB_064c96c6:
    lVar6 = func_0x065673d0(puStack_2f0);
    if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
      bVar20 = (*(byte *)(lVar6 + 8) & 1) != 0;
      puVar9 = (undefined *)(lVar6 + 9);
      if (bVar20) {
        puVar9 = *(undefined **)(lVar6 + 0x18);
      }
      uVar17 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
      if (bVar20) {
        uVar17 = *(ulong *)(lVar6 + 0x10);
      }
    }
    else {
      puVar9 = &UNK_013ae7a5;
      uVar17 = 0x1f;
    }
    func_0x06567a00(&uStack_218,param_1,puVar9,uVar17);
    func_0x06567f40(&lStack_2e8,uStack_218 + 3);
    if (uStack_2d0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_2d0) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      puVar13 = *(undefined8 **)(piVar10 + 0xc);
      while (puVar13 != plStack_2e0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
      }
LAB_064c97ea:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c97ea;
      }
      if (uStack_2d0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
        *puVar19 = *puVar19 | 0x40000;
      }
    }
    func_0x06568300(&lStack_2e8,&uStack_218,&UNK_0133e2b9,2);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef46ce8;
    if (uStack_2d0 != (long *)0x0) {
      lVar6 = *uStack_2d0;
      uStack_2d0 = plVar12;
      (**(code **)(lVar6 + 8))();
      plVar12 = uStack_2d0;
    }
    uStack_2d0 = plVar12;
    auStack_358._0_4_ = uStack_2d8;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_0490ce30;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_0490cb20;
    puStack_318 = &UNK_065687c0;
    puStack_310 = &UNK_06568920;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(plStack_2e0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x065684c0(&lStack_2e8);
    uStack_1a8 = CONCAT31(uStack_1a8._1_3_,(undefined1)uStack_1e8);
    uStack_1b8 = uStack_1f8;
    uStack_1b4 = uStack_1f4;
    uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
    uStack_1c8 = (undefined4)uStack_208;
    uStack_1c4 = uStack_208._4_4_;
    uStack_1c0 = uStack_200;
    uStack_1bc = uStack_1fc;
    uStack_1d8 = uStack_218;
    uStack_1d0 = plStack_210;
    func_0x048b0bc0(&uStack_2d0);
    func_0x06567f40(&lStack_2e8,uStack_1d8 + 3);
    if (uStack_2d0._4_4_ == 2) {
      piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
      iVar5 = *piVar10;
      while (iVar5 != (int)uStack_2d0) {
        piVar10 = piVar10 + 0x16;
        iVar5 = *piVar10;
      }
      puVar13 = *(undefined8 **)(piVar10 + 0xc);
      while (puVar13 != plStack_2e0) {
        piVar10 = *(int **)(piVar10 + 0xe);
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
      }
LAB_064c9a1a:
      *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
    }
    else {
      if (uStack_2d0._4_4_ == 1) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x1a;
          iVar5 = *piVar10;
        }
        goto LAB_064c9a1a;
      }
      if (uStack_2d0._4_4_ == 0) {
        puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
        *puVar19 = *puVar19 | 0x40000;
      }
    }
    func_0x06568300(&lStack_2e8,&uStack_1d8,&UNK_01410416,4);
    plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar12 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar12 = (long)&UNK_0ef44b00;
    if (uStack_2d0 != (long *)0x0) {
      lVar6 = *uStack_2d0;
      uStack_2d0 = plVar12;
      (**(code **)(lVar6 + 8))();
      plVar12 = uStack_2d0;
    }
    uStack_2d0 = plVar12;
    auStack_358._0_4_ = uStack_2d8;
    plStack_350 = (long *)0x0;
    plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
    uStack_340 = 1;
    uStack_338 = 0;
    puStack_330 = &UNK_048b3f30;
    puStack_328 = &SUB_048b06d0;
    puStack_320 = &SUB_048b2190;
    puStack_318 = &UNK_06568af0;
    puStack_310 = &UNK_06568cc0;
    uStack_308 = 0;
    uStack_300 = 0;
    plStack_2f8 = (long *)0x0;
    func_0x048b05a0(plStack_2e0,auStack_358);
    plVar12 = plStack_2f8;
    if (plStack_2f8 != (long *)0x0) {
      LOCK();
      plVar14 = plStack_2f8 + 1;
      lVar6 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
        func_0x0412c2d0(plVar12);
      }
    }
    func_0x065684c0(&lStack_2e8);
    func_0x048b0bc0(&uStack_2d0);
  }
  else {
    lVar6 = plVar12[2];
    plVar12 = puStack_2f0;
    if (lVar6 != 0) goto LAB_064c96b2;
LAB_064c9684:
    lVar6 = FUN_048aead0(plVar12);
    if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064c96c6;
LAB_064c96bb:
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064c96c6;
  }
  if ((DAT_0f5772c8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5772c8), iVar5 != 0)) {
    func_0x06568ea0(0xf5772b0);
    func_0x0410844d(&DAT_0f5772c8);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & _DAT_0f5772b4) * 8);
  do {
    lVar6 = *plVar12;
    if (lVar6 == -1) goto LAB_064c9ba1;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f5772b4);
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064c9ba1:
    lStack_2e8 = 0;
    plStack_2e0 = (undefined8 *)0x0;
    func_0x048b1dc0(&lStack_2e8);
    lVar6 = lStack_2e8;
    plVar12 = plStack_2e0;
    if (lStack_2e8 == 0) goto LAB_064c9bc4;
LAB_064c9bf2:
    if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064c9bfb;
LAB_064c9c06:
    uVar2 = _DAT_0f543a00;
    plVar12 = (long *)func_0x0eee2e90(_DAT_0f543a00);
    if (plVar12 < (long *)0xfffffffffffffff8) {
      lVar6 = (long)&uStack_158 + 1;
      if (plVar12 < (long *)0x17) {
        uStack_158 = (long *)CONCAT71(uStack_158._1_7_,(char)plVar12 * '\x02');
        lVar7 = lVar6;
        if (plVar12 != (long *)0x0) goto LAB_064c9c9e;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar7 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_158 = (long *)(uVar17 | 1);
        uStack_150 = plVar12;
        uStack_148 = lVar7;
LAB_064c9c9e:
        func_0x0eee2ee0(lVar7,uVar2,plVar12);
      }
      *(undefined1 *)(lVar7 + (long)plVar12) = 0;
      plVar12 = (long *)((ulong)uStack_158 >> 1 & 0x7f);
      if (((ulong)uStack_158 & 1) != 0) {
        plVar12 = uStack_150;
        lVar6 = uStack_148;
      }
      lVar7 = func_0x06568f10(puStack_2f0);
      if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0))
      {
        bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
        lVar6 = lVar7 + 9;
        if (bVar20) {
          lVar6 = *(long *)(lVar7 + 0x18);
        }
        plVar12 = (long *)(ulong)(*(byte *)(lVar7 + 8) >> 1);
        if (bVar20) {
          plVar12 = *(long **)(lVar7 + 0x10);
        }
      }
      func_0x0656a3c0(&uStack_198,param_1,lVar6,plVar12);
      func_0x0656a900(&lStack_2e8,uStack_198 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064c9dea:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064c9dea;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      func_0x0656acd0(&lStack_2e8,&uStack_198,&UNK_013dee63,7);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar12 = (long)&UNK_0ef44b00;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = plVar12;
        (**(code **)(lVar6 + 8))();
        plVar12 = uStack_2d0;
      }
      uStack_2d0 = plVar12;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_048b3f30;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &SUB_048b2190;
      puStack_318 = &UNK_0656b1b0;
      puStack_310 = &UNK_0656b380;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      func_0x0656aeb0(&lStack_2e8);
      uStack_1e8 = CONCAT31(uStack_1e8._1_3_,(undefined1)uStack_168);
      uStack_1f8 = uStack_178;
      uStack_1f4 = uStack_174;
      uStack_1f0 = uStack_170;
      uStack_1ec = uStack_16c;
      uStack_208 = lStack_188;
      uStack_200 = uStack_180;
      uStack_1fc = uStack_17c;
      uStack_218 = uStack_198;
      plStack_210 = plStack_190;
      func_0x048b0bc0(&uStack_2d0);
      func_0x0656a900(&lStack_2e8,uStack_218 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064ca01a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064ca01a;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      func_0x0656acd0(&lStack_2e8,&uStack_218,&UNK_0123ef74,6);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar12 = (long)&UNK_0ef46ce8;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = plVar12;
        (**(code **)(lVar6 + 8))();
        plVar12 = uStack_2d0;
      }
      uStack_2d0 = plVar12;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_0490ce30;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &SUB_0490cb20;
      puStack_318 = &UNK_0656b560;
      puStack_310 = &UNK_0656b6c0;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      func_0x0656aeb0(&lStack_2e8);
      uStack_1a8 = CONCAT31(uStack_1a8._1_3_,(undefined1)uStack_1e8);
      uStack_1b8 = uStack_1f8;
      uStack_1b4 = uStack_1f4;
      uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_1c8 = (undefined4)uStack_208;
      uStack_1c4 = uStack_208._4_4_;
      uStack_1c0 = uStack_200;
      uStack_1bc = uStack_1fc;
      uStack_1d8 = uStack_218;
      uStack_1d0 = plStack_210;
      func_0x048b0bc0(&uStack_2d0);
      func_0x0656a900(&lStack_2e8,uStack_1d8 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064ca24a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064ca24a;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      func_0x0656acd0(&lStack_2e8,&uStack_1d8,&UNK_014cb726,7);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar12 = (long)&UNK_0ef44b00;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = plVar12;
        (**(code **)(lVar6 + 8))();
        plVar12 = uStack_2d0;
      }
      uStack_2d0 = plVar12;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_048b3f30;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &SUB_048b2190;
      puStack_318 = &UNK_0656b8a0;
      puStack_310 = &UNK_0656ba70;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      func_0x0656aeb0(&lStack_2e8);
      func_0x048b0bc0(&uStack_2d0);
      if (((ulong)uStack_158 & 1) != 0) {
        func_0x0412a280(uStack_148,(ulong)uStack_158 & 0xfffffffffffffffe);
      }
      goto LAB_064ca384;
    }
  }
  else {
    lVar6 = plVar12[2];
    plVar12 = puStack_2f0;
    if (lVar6 != 0) goto LAB_064c9bf2;
LAB_064c9bc4:
    lVar6 = FUN_048aead0(plVar12);
    if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064c9c06;
LAB_064c9bfb:
    if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064c9c06;
LAB_064ca384:
    if ((DAT_0f577380 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577380), iVar5 != 0)) {
      func_0x0656bc50(0xf577368);
      func_0x0410844d(&DAT_0f577380);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & _DAT_0f57736c) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064ca3e1;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57736c);
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064ca3e1:
      lStack_2e8 = 0;
      plStack_2e0 = (undefined8 *)0x0;
      func_0x048b1dc0(&lStack_2e8);
      lVar6 = lStack_2e8;
      plVar12 = plStack_2e0;
      if (lStack_2e8 == 0) goto LAB_064ca404;
LAB_064ca432:
      if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064ca43b;
LAB_064ca446:
      uVar2 = _DAT_0f543a08;
      plVar12 = (long *)func_0x0eee2e90(_DAT_0f543a08);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_064ce074;
      if (plVar12 < (long *)0x17) {
        uStack_218 = (long *)CONCAT71(uStack_218._1_7_,(char)plVar12 * '\x02');
        lVar6 = (long)&uStack_218 + 1;
        if (plVar12 != (long *)0x0) goto LAB_064ca4d7;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar6 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_218 = (long *)(uVar17 | 1);
        plStack_210 = plVar12;
        uStack_208 = lVar6;
LAB_064ca4d7:
        func_0x0eee2ee0(lVar6,uVar2,plVar12);
      }
      *(undefined1 *)(lVar6 + (long)plVar12) = 0;
      plVar12 = (long *)((ulong)uStack_218 >> 1 & 0x7f);
      lVar6 = (long)&uStack_218 + 1;
      if (((ulong)uStack_218 & 1) != 0) {
        plVar12 = plStack_210;
        lVar6 = uStack_208;
      }
      lVar7 = func_0x0656bcc0(puStack_2f0);
      if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0))
      {
        bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
        lVar6 = lVar7 + 9;
        if (bVar20) {
          lVar6 = *(long *)(lVar7 + 0x18);
        }
        plVar12 = (long *)(ulong)(*(byte *)(lVar7 + 8) >> 1);
        if (bVar20) {
          plVar12 = *(long **)(lVar7 + 0x10);
        }
      }
      func_0x0656ce80(&uStack_1d8,param_1,lVar6,plVar12);
      func_0x0656d3c0(&lStack_2e8,uStack_1d8 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064ca62a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064ca62a;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      if ((DAT_0f577380 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577380), iVar5 != 0)) {
        func_0x0656bc50(0xf577368);
        func_0x0410844d(&DAT_0f577380);
      }
      uStack_1b0 = 0xa37762400000001;
      plVar12 = uStack_1d8 + 3;
      lStack_2e8 = func_0x0656bcc0(plVar12);
      plStack_2e0 = plVar12;
      func_0x0ed621a0(&lStack_2e8,uStack_1b0._4_4_);
      plStack_2e0 = &uStack_1d0;
      lStack_2e8 = CONCAT62(lStack_2e8._2_6_,0x10);
      uStack_2d8 = uStack_1b0._4_4_;
      uStack_2d0 = (long *)0x0;
      lStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      lStack_2b0 = 0;
      uStack_2a8 = 0x7365720c;
      uStack_2a4 = 0x75;
      uStack_2a3 = 0x746c;
      uStack_2a1 = 0;
      lStack_290 = 0;
      lStack_288 = 0;
      lStack_280 = 0;
      lStack_278 = 0;
      lStack_270 = 0;
      lStack_268 = 0;
      uStack_260 = 0x3f600000;
      func_0x048afb10(&lStack_290,8);
      uStack_238 = 0;
      lStack_230 = 0;
      lStack_248 = 0;
      uStack_240 = 0;
      lStack_258 = 0;
      lStack_250 = 0;
      uStack_228 = 0xff00;
      uStack_224 = uStack_224 & 0xffffff00;
      uStack_220 = uStack_220 & 0xffffff00;
      uStack_21c = 0;
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar13 = &UNK_0f039b00;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = puVar13;
        (**(code **)(lVar6 + 8))();
        puVar13 = uStack_2d0;
      }
      uStack_2d0 = puVar13;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_06560f50;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &SUB_0655cdf0;
      puStack_318 = &UNK_0656d730;
      puStack_310 = &UNK_0656d890;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      plVar12 = plStack_2e0;
      if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
        func_0x048b0af0(0xf550a08);
        func_0x0410844d(&DAT_0f550a20);
      }
      auStack_358._0_4_ = _DAT_0f550a0c;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
      lVar6 = lStack_2c8;
      puVar13 = uStack_2d0;
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&UNK_0ef439d0;
      plStack_350 = plVar14 + 3;
      uStack_2d0 = (long *)0x0;
      lStack_2c8 = 0;
      plVar14[3] = (long)puVar13;
      plVar14[4] = lVar6;
      plVar14[7] = lStack_2b0;
      plVar14[5] = uStack_2c0;
      plVar14[6] = uStack_2b8;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      lStack_2b0 = 0;
      plVar14[10] = CONCAT44(uStack_294,CONCAT13(uStack_295,CONCAT21(uStack_297,uStack_29b._3_1_)));
      plVar14[8] = CONCAT17(uStack_2a1,CONCAT25(uStack_2a3,CONCAT14(uStack_2a4,uStack_2a8)));
      plVar14[9] = CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,uStack_2a0));
      uStack_2a8 = 0;
      uStack_2a4 = 0;
      uStack_2a3 = 0;
      uStack_2a1 = 0;
      uStack_2a0 = 0;
      uStack_29f = 0;
      uStack_29b = 0;
      uStack_297 = 0;
      uStack_295 = 0;
      uStack_294 = 0;
      plVar14[0xb] = lStack_290;
      plVar14[0xc] = lStack_288;
      plVar14[0xd] = lStack_280;
      lStack_290 = 0;
      lStack_288 = 0;
      lStack_280 = 0;
      plVar14[0xe] = lStack_278;
      plVar14[0xf] = lStack_270;
      plVar14[0x10] = lStack_268;
      lStack_278 = 0;
      lStack_270 = 0;
      lStack_268 = 0;
      *(undefined4 *)(plVar14 + 0x11) = uStack_260;
      plVar14[0x12] = lStack_258;
      plVar14[0x13] = lStack_250;
      plVar14[0x14] = lStack_248;
      lStack_258 = 0;
      lStack_250 = 0;
      lStack_248 = 0;
      plVar14[0x17] = lStack_230;
      *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_240;
      *(undefined4 *)((long)plVar14 + 0xac) = uStack_240._4_4_;
      *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_238;
      *(undefined4 *)((long)plVar14 + 0xb4) = uStack_238._4_4_;
      uStack_240 = 0;
      uStack_238 = 0;
      lStack_230 = 0;
      *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_21c,CONCAT43(uStack_220,uStack_224._1_3_));
      plVar14[0x18] = CONCAT44(uStack_224,CONCAT22(uStack_226,uStack_228));
      uStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      plStack_348 = plVar14;
      func_0x048afd20(plVar12,auStack_358);
      plVar14 = plStack_348;
      if (plStack_348 != (long *)0x0) {
        LOCK();
        plVar15 = plStack_348 + 1;
        lVar6 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_348 + 0x10))(plStack_348);
          func_0x0412c2d0(plVar14);
        }
      }
      plVar14 = plStack_190;
      if (plStack_190 != (long *)0x0) {
        LOCK();
        plVar15 = plStack_190 + 1;
        lVar6 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_190 + 0x10))(plStack_190);
          func_0x0412c2d0(plVar14);
        }
      }
      lVar6 = plVar12[2];
      iVar5 = *(int *)((long)plVar12 + 0x1c);
      if (iVar5 == 2) {
        piVar10 = *(int **)(*(long *)(lVar6 + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != *(int *)(plVar12 + 3)) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        for (; *(long *)(piVar10 + 0xc) != plVar12[1]; piVar10 = *(int **)(piVar10 + 0xe)) {
        }
LAB_064cab0a:
        piVar10[4] = piVar10[4] | (int)lStack_2e8 << 0x10;
      }
      else {
        if (iVar5 == 1) {
          piVar10 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != *(int *)(plVar12 + 3)) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cab0a;
        }
        if (iVar5 == 0) {
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | (int)lStack_2e8 << 0x10;
        }
      }
      func_0x048b0bc0(&uStack_2d0);
      if (((ulong)uStack_218 & 1) != 0) {
        func_0x0412a280(uStack_208,(ulong)uStack_218 & 0xfffffffffffffffe);
      }
    }
    else {
      lVar6 = plVar12[2];
      plVar12 = puStack_2f0;
      if (lVar6 != 0) goto LAB_064ca432;
LAB_064ca404:
      lVar6 = FUN_048aead0(plVar12);
      if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064ca446;
LAB_064ca43b:
      if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064ca446;
    }
    if ((DAT_0f577438 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577438), iVar5 != 0)) {
      func_0x0656dd00(0xf577420);
      func_0x0410844d(&DAT_0f577438);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & _DAT_0f577424) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064cab91;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f577424);
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064cab91:
      lStack_2e8 = 0;
      plStack_2e0 = (undefined8 *)0x0;
      func_0x048b1dc0(&lStack_2e8);
      lVar6 = lStack_2e8;
      plVar12 = plStack_2e0;
      if (lStack_2e8 == 0) goto LAB_064cabb4;
LAB_064cabe2:
      if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064cabeb;
LAB_064cabf6:
      uVar2 = _DAT_0f543a10;
      plVar12 = (long *)func_0x0eee2e90(_DAT_0f543a10);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_064ce074;
      if (plVar12 < (long *)0x17) {
        uStack_198 = (long *)CONCAT71(uStack_198._1_7_,(char)plVar12 * '\x02');
        lVar6 = (long)&uStack_198 + 1;
        if (plVar12 != (long *)0x0) goto LAB_064cac87;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar6 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_198 = (long *)(uVar17 | 1);
        plStack_190 = plVar12;
        lStack_188 = lVar6;
LAB_064cac87:
        func_0x0eee2ee0(lVar6,uVar2,plVar12);
      }
      *(undefined1 *)(lVar6 + (long)plVar12) = 0;
      plVar12 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
      lVar6 = (long)&uStack_198 + 1;
      if (((ulong)uStack_198 & 1) != 0) {
        plVar12 = plStack_190;
        lVar6 = lStack_188;
      }
      lVar7 = func_0x0656dd70(puStack_2f0);
      if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0))
      {
        bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
        lVar6 = lVar7 + 9;
        if (bVar20) {
          lVar6 = *(long *)(lVar7 + 0x18);
        }
        plVar12 = (long *)(ulong)(*(byte *)(lVar7 + 8) >> 1);
        if (bVar20) {
          plVar12 = *(long **)(lVar7 + 0x10);
        }
      }
      func_0x0656f670(&uStack_218,param_1,lVar6,plVar12);
      func_0x0656fbb0(&lStack_2e8,uStack_218 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064cadda:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cadda;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      func_0x0656ff70(&lStack_2e8,&uStack_218,&UNK_0147ac6e,9);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar12 = (long)&UNK_0f03a108;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = plVar12;
        (**(code **)(lVar6 + 8))();
        plVar12 = uStack_2d0;
      }
      uStack_2d0 = plVar12;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_06573f60;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &UNK_06572620;
      puStack_318 = &UNK_06573f70;
      puStack_310 = &UNK_06574260;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      func_0x06570160(&lStack_2e8);
      uStack_1a8 = CONCAT31(uStack_1a8._1_3_,(undefined1)uStack_1e8);
      uStack_1b8 = uStack_1f8;
      uStack_1b4 = uStack_1f4;
      uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_1c8 = (undefined4)uStack_208;
      uStack_1c4 = uStack_208._4_4_;
      uStack_1c0 = uStack_200;
      uStack_1bc = uStack_1fc;
      uStack_1d8 = uStack_218;
      uStack_1d0 = plStack_210;
      func_0x048b0bc0(&uStack_2d0);
      func_0x0656fbb0(&lStack_2e8,uStack_1d8 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064cb00a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cb00a;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      func_0x0656ff70(&lStack_2e8,&uStack_1d8,&UNK_012bd30b,6);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar12 = (long)&UNK_0f039a20;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = plVar12;
        (**(code **)(lVar6 + 8))();
        plVar12 = uStack_2d0;
      }
      uStack_2d0 = plVar12;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_0655c9e0;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &UNK_065586e0;
      puStack_318 = &UNK_065746e0;
      puStack_310 = &UNK_06574840;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      func_0x06570160(&lStack_2e8);
      func_0x048b0bc0(&uStack_2d0);
      if (((ulong)uStack_198 & 1) != 0) {
        func_0x0412a280(lStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      lVar6 = plVar12[2];
      plVar12 = puStack_2f0;
      if (lVar6 != 0) goto LAB_064cabe2;
LAB_064cabb4:
      lVar6 = FUN_048aead0(plVar12);
      if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064cabf6;
LAB_064cabeb:
      if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064cabf6;
    }
    if ((DAT_0f5775a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5775a8), iVar5 != 0)) {
      func_0x06576ad0(0xf577590);
      func_0x0410844d(&DAT_0f5775a8);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & _DAT_0f577594) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064cb1b1;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f577594);
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064cb1b1:
      lStack_2e8 = 0;
      plStack_2e0 = (undefined8 *)0x0;
      func_0x048b1dc0(&lStack_2e8);
      lVar6 = lStack_2e8;
      plVar12 = plStack_2e0;
      if (lStack_2e8 == 0) goto LAB_064cb1d4;
LAB_064cb202:
      if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064cb20b;
LAB_064cb216:
      uVar2 = _DAT_0f543a20;
      plVar12 = (long *)func_0x0eee2e90(_DAT_0f543a20);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_064ce074;
      if (plVar12 < (long *)0x17) {
        uStack_198 = (long *)CONCAT71(uStack_198._1_7_,(char)plVar12 * '\x02');
        lVar6 = (long)&uStack_198 + 1;
        if (plVar12 != (long *)0x0) goto LAB_064cb2a7;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar6 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_198 = (long *)(uVar17 | 1);
        plStack_190 = plVar12;
        lStack_188 = lVar6;
LAB_064cb2a7:
        func_0x0eee2ee0(lVar6,uVar2,plVar12);
      }
      *(undefined1 *)(lVar6 + (long)plVar12) = 0;
      plVar12 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
      lVar6 = (long)&uStack_198 + 1;
      if (((ulong)uStack_198 & 1) != 0) {
        plVar12 = plStack_190;
        lVar6 = lStack_188;
      }
      lVar7 = func_0x06576b40(puStack_2f0);
      if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0))
      {
        bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
        lVar6 = lVar7 + 9;
        if (bVar20) {
          lVar6 = *(long *)(lVar7 + 0x18);
        }
        plVar12 = (long *)(ulong)(*(byte *)(lVar7 + 8) >> 1);
        if (bVar20) {
          plVar12 = *(long **)(lVar7 + 0x10);
        }
      }
      func_0x06578350(&uStack_218,param_1,lVar6,plVar12);
      func_0x06578890(&lStack_2e8,uStack_218 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064cb3fa:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cb3fa;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      func_0x06578c50(&lStack_2e8,&uStack_218,&UNK_0123ef7b,10);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar12 = (long)&UNK_0f03a528;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = plVar12;
        (**(code **)(lVar6 + 8))();
        plVar12 = uStack_2d0;
      }
      uStack_2d0 = plVar12;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_0657c610;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &UNK_0657b090;
      puStack_318 = &UNK_0657c620;
      puStack_310 = &UNK_0657c810;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      func_0x06578e40(&lStack_2e8);
      uStack_1a8 = CONCAT31(uStack_1a8._1_3_,(undefined1)uStack_1e8);
      uStack_1b8 = uStack_1f8;
      uStack_1b4 = uStack_1f4;
      uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
      uStack_1c8 = (undefined4)uStack_208;
      uStack_1c4 = uStack_208._4_4_;
      uStack_1c0 = uStack_200;
      uStack_1bc = uStack_1fc;
      uStack_1d8 = uStack_218;
      uStack_1d0 = plStack_210;
      func_0x048b0bc0(&uStack_2d0);
      func_0x06578890(&lStack_2e8,uStack_1d8 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064cb62a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cb62a;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      func_0x06578c50(&lStack_2e8,&uStack_1d8,&UNK_012bd30b,6);
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar12 = (long)&UNK_0f039a20;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = plVar12;
        (**(code **)(lVar6 + 8))();
        plVar12 = uStack_2d0;
      }
      uStack_2d0 = plVar12;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_0655c9e0;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &UNK_065586e0;
      puStack_318 = &UNK_0657cc90;
      puStack_310 = &UNK_0657cdf0;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      func_0x06578e40(&lStack_2e8);
      func_0x048b0bc0(&uStack_2d0);
      if (((ulong)uStack_198 & 1) != 0) {
        func_0x0412a280(lStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
    }
    else {
      lVar6 = plVar12[2];
      plVar12 = puStack_2f0;
      if (lVar6 != 0) goto LAB_064cb202;
LAB_064cb1d4:
      lVar6 = FUN_048aead0(plVar12);
      if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064cb216;
LAB_064cb20b:
      if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064cb216;
    }
    if ((DAT_0f577660 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577660), iVar5 != 0)) {
      func_0x0657ecd0(0xf577648);
      func_0x0410844d(&DAT_0f577660);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & _DAT_0f57764c) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064cb7d1;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57764c);
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064cb7d1:
      lStack_2e8 = 0;
      plStack_2e0 = (undefined8 *)0x0;
      func_0x048b1dc0(&lStack_2e8);
      lVar6 = lStack_2e8;
      plVar12 = plStack_2e0;
      if (lStack_2e8 == 0) goto LAB_064cb7f4;
LAB_064cb822:
      if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064cb82b;
LAB_064cb836:
      uVar2 = _DAT_0f543a28;
      plVar12 = (long *)func_0x0eee2e90(_DAT_0f543a28);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_064ce074;
      plVar14 = (long *)(auStack_358 + 1);
      if (plVar12 < (long *)0x17) {
        auStack_358[0] = (char)plVar12 * '\x02';
        plVar15 = plVar14;
        if (plVar12 != (long *)0x0) goto LAB_064cb8bd;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (plVar15 == (long *)0x0) {
          func_0x0eec74c0(uVar17,0);
        }
        auStack_358 = (undefined1  [8])(uVar17 | 1);
        plStack_350 = plVar12;
        plStack_348 = plVar15;
LAB_064cb8bd:
        func_0x0eee2ee0(plVar15,uVar2,plVar12);
      }
      auVar3 = auStack_358;
      *(undefined1 *)((long)plVar15 + (long)plVar12) = 0;
      plVar12 = plStack_348;
      plVar15 = (long *)((ulong)auStack_358 >> 1 & 0x7f);
      if (((ulong)auStack_358 & 1) != 0) {
        plVar15 = plStack_350;
        plVar14 = plStack_348;
      }
      lVar6 = func_0x0657ed40(puStack_2f0);
      if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0))
      {
        bVar20 = (*(byte *)(lVar6 + 8) & 1) != 0;
        lVar7 = lVar6 + 9;
        if (bVar20) {
          lVar7 = *(long *)(lVar6 + 0x18);
        }
        uVar17 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
        if (bVar20) {
          uVar17 = *(ulong *)(lVar6 + 0x10);
        }
        func_0x0657fee0(&lStack_2e8,param_1,lVar7,uVar17);
      }
      else {
        func_0x0657fee0(&lStack_2e8,param_1,plVar14,plVar15);
      }
      if (((ulong)auVar3 & 1) != 0) {
        func_0x0412a280(plVar12,(ulong)auStack_358 & 0xfffffffffffffffe);
      }
    }
    else {
      lVar6 = plVar12[2];
      plVar12 = puStack_2f0;
      if (lVar6 != 0) goto LAB_064cb822;
LAB_064cb7f4:
      lVar6 = FUN_048aead0(plVar12);
      if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064cb836;
LAB_064cb82b:
      if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064cb836;
    }
    if ((DAT_0f577718 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577718), iVar5 != 0)) {
      func_0x06580750(0xf577700);
      func_0x0410844d(&DAT_0f577718);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & _DAT_0f577704) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064cb9c1;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f577704);
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064cb9c1:
      lStack_2e8 = 0;
      plStack_2e0 = (undefined8 *)0x0;
      func_0x048b1dc0(&lStack_2e8);
      lVar6 = lStack_2e8;
      plVar12 = plStack_2e0;
      if (lStack_2e8 == 0) goto LAB_064cb9e4;
LAB_064cba12:
      if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064cba1b;
LAB_064cba26:
      uVar2 = _DAT_0f543a30;
      plVar12 = (long *)func_0x0eee2e90(_DAT_0f543a30);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_064ce074;
      if (plVar12 < (long *)0x17) {
        uStack_218 = (long *)CONCAT71(uStack_218._1_7_,(char)plVar12 * '\x02');
        lVar6 = (long)&uStack_218 + 1;
        if (plVar12 != (long *)0x0) goto LAB_064cbab7;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar6 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_218 = (long *)(uVar17 | 1);
        plStack_210 = plVar12;
        uStack_208 = lVar6;
LAB_064cbab7:
        func_0x0eee2ee0(lVar6,uVar2,plVar12);
      }
      *(undefined1 *)(lVar6 + (long)plVar12) = 0;
      plVar12 = (long *)((ulong)uStack_218 >> 1 & 0x7f);
      lVar6 = (long)&uStack_218 + 1;
      if (((ulong)uStack_218 & 1) != 0) {
        plVar12 = plStack_210;
        lVar6 = uStack_208;
      }
      lVar7 = func_0x065807c0(puStack_2f0);
      if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0))
      {
        bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
        lVar6 = lVar7 + 9;
        if (bVar20) {
          lVar6 = *(long *)(lVar7 + 0x18);
        }
        plVar12 = (long *)(ulong)(*(byte *)(lVar7 + 8) >> 1);
        if (bVar20) {
          plVar12 = *(long **)(lVar7 + 0x10);
        }
      }
      func_0x06581b70(&uStack_1d8,param_1,lVar6,plVar12);
      func_0x065820b0(&lStack_2e8,uStack_1d8 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064cbc0a:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cbc0a;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      if ((DAT_0f577718 == '\0') && (iVar5 = func_0x04108328(&DAT_0f577718), iVar5 != 0)) {
        func_0x06580750(0xf577700);
        func_0x0410844d(&DAT_0f577718);
      }
      uStack_1b0 = 0x38e6917e00000001;
      plVar12 = uStack_1d8 + 3;
      lStack_2e8 = func_0x065807c0(plVar12);
      plStack_2e0 = plVar12;
      func_0x0ed621a0(&lStack_2e8,uStack_1b0._4_4_);
      plStack_2e0 = &uStack_1d0;
      lStack_2e8 = CONCAT62(lStack_2e8._2_6_,0x10);
      uStack_2d8 = uStack_1b0._4_4_;
      uStack_2d0 = (long *)0x0;
      lStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      lStack_2b0 = 0;
      uStack_2a8 = 0x726f770e;
      uStack_2a4 = 0x6c;
      uStack_2a3 = 0x4964;
      uStack_2a1 = 100;
      uStack_2a0 = 0;
      lStack_290 = 0;
      lStack_288 = 0;
      lStack_280 = 0;
      lStack_278 = 0;
      lStack_270 = 0;
      lStack_268 = 0;
      uStack_260 = 0x3f600000;
      func_0x048afb10(&lStack_290,8);
      uStack_238 = 0;
      lStack_230 = 0;
      lStack_248 = 0;
      uStack_240 = 0;
      lStack_258 = 0;
      lStack_250 = 0;
      uStack_228 = 0xff00;
      uStack_224 = uStack_224 & 0xffffff00;
      uStack_220 = uStack_220 & 0xffffff00;
      uStack_21c = 0;
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar13 = &UNK_0ef44b00;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = puVar13;
        (**(code **)(lVar6 + 8))();
        puVar13 = uStack_2d0;
      }
      uStack_2d0 = puVar13;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_048b3f30;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &SUB_048b2190;
      puStack_318 = &UNK_06582470;
      puStack_310 = &UNK_06582640;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      plVar12 = plStack_2e0;
      if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
        func_0x048b0af0(0xf550a08);
        func_0x0410844d(&DAT_0f550a20);
      }
      auStack_358._0_4_ = _DAT_0f550a0c;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
      lVar6 = lStack_2c8;
      puVar13 = uStack_2d0;
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&UNK_0ef439d0;
      plStack_350 = plVar14 + 3;
      uStack_2d0 = (long *)0x0;
      lStack_2c8 = 0;
      plVar14[3] = (long)puVar13;
      plVar14[4] = lVar6;
      plVar14[7] = lStack_2b0;
      plVar14[5] = uStack_2c0;
      plVar14[6] = uStack_2b8;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      lStack_2b0 = 0;
      plVar14[10] = CONCAT44(uStack_294,CONCAT13(uStack_295,CONCAT21(uStack_297,uStack_29b._3_1_)));
      plVar14[8] = CONCAT17(uStack_2a1,CONCAT25(uStack_2a3,CONCAT14(uStack_2a4,uStack_2a8)));
      plVar14[9] = CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,uStack_2a0));
      uStack_2a8 = 0;
      uStack_2a4 = 0;
      uStack_2a3 = 0;
      uStack_2a1 = 0;
      uStack_2a0 = 0;
      uStack_29f = 0;
      uStack_29b = 0;
      uStack_297 = 0;
      uStack_295 = 0;
      uStack_294 = 0;
      plVar14[0xb] = lStack_290;
      plVar14[0xc] = lStack_288;
      plVar14[0xd] = lStack_280;
      lStack_290 = 0;
      lStack_288 = 0;
      lStack_280 = 0;
      plVar14[0xe] = lStack_278;
      plVar14[0xf] = lStack_270;
      plVar14[0x10] = lStack_268;
      lStack_278 = 0;
      lStack_270 = 0;
      lStack_268 = 0;
      *(undefined4 *)(plVar14 + 0x11) = uStack_260;
      plVar14[0x12] = lStack_258;
      plVar14[0x13] = lStack_250;
      plVar14[0x14] = lStack_248;
      lStack_258 = 0;
      lStack_250 = 0;
      lStack_248 = 0;
      plVar14[0x17] = lStack_230;
      *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_240;
      *(undefined4 *)((long)plVar14 + 0xac) = uStack_240._4_4_;
      *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_238;
      *(undefined4 *)((long)plVar14 + 0xb4) = uStack_238._4_4_;
      uStack_240 = 0;
      uStack_238 = 0;
      lStack_230 = 0;
      *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_21c,CONCAT43(uStack_220,uStack_224._1_3_));
      plVar14[0x18] = CONCAT44(uStack_224,CONCAT22(uStack_226,uStack_228));
      uStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      plStack_348 = plVar14;
      func_0x048afd20(plVar12,auStack_358);
      plVar14 = plStack_348;
      if (plStack_348 != (long *)0x0) {
        LOCK();
        plVar15 = plStack_348 + 1;
        lVar6 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_348 + 0x10))(plStack_348);
          func_0x0412c2d0(plVar14);
        }
      }
      plVar14 = plStack_190;
      if (plStack_190 != (long *)0x0) {
        LOCK();
        plVar15 = plStack_190 + 1;
        lVar6 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_190 + 0x10))(plStack_190);
          func_0x0412c2d0(plVar14);
        }
      }
      lVar6 = plVar12[2];
      iVar5 = *(int *)((long)plVar12 + 0x1c);
      if (iVar5 == 2) {
        piVar10 = *(int **)(*(long *)(lVar6 + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != *(int *)(plVar12 + 3)) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        for (; *(long *)(piVar10 + 0xc) != plVar12[1]; piVar10 = *(int **)(piVar10 + 0xe)) {
        }
LAB_064cc0ea:
        piVar10[4] = piVar10[4] | (int)lStack_2e8 << 0x10;
      }
      else {
        if (iVar5 == 1) {
          piVar10 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != *(int *)(plVar12 + 3)) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cc0ea;
        }
        if (iVar5 == 0) {
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | (int)lStack_2e8 << 0x10;
        }
      }
      func_0x048b0bc0(&uStack_2d0);
      if (((ulong)uStack_218 & 1) != 0) {
        func_0x0412a280(uStack_208,(ulong)uStack_218 & 0xfffffffffffffffe);
      }
    }
    else {
      lVar6 = plVar12[2];
      plVar12 = puStack_2f0;
      if (lVar6 != 0) goto LAB_064cba12;
LAB_064cb9e4:
      lVar6 = FUN_048aead0(plVar12);
      if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064cba26;
LAB_064cba1b:
      if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064cba26;
    }
    if ((DAT_0f5756a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5756a0), iVar5 != 0)) {
      func_0x0646aab0(0xf575688);
      func_0x0410844d(&DAT_0f5756a0);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & _DAT_0f57568c) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064cc171;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f57568c);
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064cc171:
      lStack_2e8 = 0;
      plStack_2e0 = (undefined8 *)0x0;
      func_0x048b1dc0(&lStack_2e8);
      lVar6 = lStack_2e8;
      plVar12 = plStack_2e0;
      if (lStack_2e8 == 0) goto LAB_064cc194;
LAB_064cc1c2:
      if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064cc1cb;
LAB_064cc1d6:
      uVar2 = _DAT_0f543998;
      plVar12 = (long *)func_0x0eee2e90(_DAT_0f543998);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_064ce074;
      if (plVar12 < (long *)0x17) {
        uStack_218 = (long *)CONCAT71(uStack_218._1_7_,(char)plVar12 * '\x02');
        lVar6 = (long)&uStack_218 + 1;
        if (plVar12 != (long *)0x0) goto LAB_064cc267;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar6 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_218 = (long *)(uVar17 | 1);
        plStack_210 = plVar12;
        uStack_208 = lVar6;
LAB_064cc267:
        func_0x0eee2ee0(lVar6,uVar2,plVar12);
      }
      *(undefined1 *)(lVar6 + (long)plVar12) = 0;
      plVar12 = (long *)((ulong)uStack_218 >> 1 & 0x7f);
      lVar6 = (long)&uStack_218 + 1;
      if (((ulong)uStack_218 & 1) != 0) {
        plVar12 = plStack_210;
        lVar6 = uStack_208;
      }
      lVar7 = func_0x0646ab20(puStack_2f0);
      if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0))
      {
        bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
        lVar6 = lVar7 + 9;
        if (bVar20) {
          lVar6 = *(long *)(lVar7 + 0x18);
        }
        plVar12 = (long *)(ulong)(*(byte *)(lVar7 + 8) >> 1);
        if (bVar20) {
          plVar12 = *(long **)(lVar7 + 0x10);
        }
      }
      func_0x0657de50(&uStack_1d8,param_1,lVar6,plVar12);
      func_0x0657e390(&lStack_2e8,uStack_1d8 + 3);
      if (uStack_2d0._4_4_ == 2) {
        piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != (int)uStack_2d0) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        puVar13 = *(undefined8 **)(piVar10 + 0xc);
        while (puVar13 != plStack_2e0) {
          piVar10 = *(int **)(piVar10 + 0xe);
          puVar13 = *(undefined8 **)(piVar10 + 0xc);
        }
LAB_064cc3ba:
        *(byte *)((long)piVar10 + 0x12) = *(byte *)((long)piVar10 + 0x12) | 4;
      }
      else {
        if (uStack_2d0._4_4_ == 1) {
          piVar10 = *(int **)(*(long *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != (int)uStack_2d0) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cc3ba;
        }
        if (uStack_2d0._4_4_ == 0) {
          puVar19 = (uint *)(CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
          *puVar19 = *puVar19 | 0x40000;
        }
      }
      if ((DAT_0f5756a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5756a0), iVar5 != 0)) {
        func_0x0646aab0(0xf575688);
        func_0x0410844d(&DAT_0f5756a0);
      }
      uStack_1b0 = 0xba4b77ef00000001;
      plVar12 = uStack_1d8 + 3;
      lStack_2e8 = func_0x0646ab20(plVar12);
      plStack_2e0 = plVar12;
      func_0x0ed621a0(&lStack_2e8,uStack_1b0._4_4_);
      plStack_2e0 = &uStack_1d0;
      lStack_2e8 = CONCAT62(lStack_2e8._2_6_,0x10);
      uStack_2d8 = uStack_1b0._4_4_;
      uStack_2d0 = (long *)0x0;
      lStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      lStack_2b0 = 0;
      uStack_2a8 = 0x6174730c;
      uStack_2a4 = 0x74;
      uStack_2a3 = 0x7375;
      uStack_2a1 = 0;
      lStack_290 = 0;
      lStack_288 = 0;
      lStack_280 = 0;
      lStack_278 = 0;
      lStack_270 = 0;
      lStack_268 = 0;
      uStack_260 = 0x3f600000;
      func_0x048afb10(&lStack_290,8);
      uStack_238 = 0;
      lStack_230 = 0;
      lStack_248 = 0;
      uStack_240 = 0;
      lStack_258 = 0;
      lStack_250 = 0;
      uStack_228 = 0xff00;
      uStack_224 = uStack_224 & 0xffffff00;
      uStack_220 = uStack_220 & 0xffffff00;
      uStack_21c = 0;
      puVar13 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (puVar13 == (undefined8 *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *puVar13 = &UNK_0f039940;
      if (uStack_2d0 != (long *)0x0) {
        lVar6 = *uStack_2d0;
        uStack_2d0 = puVar13;
        (**(code **)(lVar6 + 8))();
        puVar13 = uStack_2d0;
      }
      uStack_2d0 = puVar13;
      auStack_358._0_4_ = uStack_2d8;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)((ulong)plStack_348 & 0xffffffff00000000);
      uStack_340 = 1;
      uStack_338 = 0;
      puStack_330 = &UNK_065584d0;
      puStack_328 = &SUB_048b06d0;
      puStack_320 = &SUB_06554370;
      puStack_318 = &UNK_0657e700;
      puStack_310 = &UNK_0657e860;
      uStack_308 = 0;
      uStack_300 = 0;
      plStack_2f8 = (long *)0x0;
      func_0x048b05a0(plStack_2e0,auStack_358);
      plVar12 = plStack_2f8;
      if (plStack_2f8 != (long *)0x0) {
        LOCK();
        plVar14 = plStack_2f8 + 1;
        lVar6 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
          func_0x0412c2d0(plVar12);
        }
      }
      plVar12 = plStack_2e0;
      if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
        func_0x048b0af0(0xf550a08);
        func_0x0410844d(&DAT_0f550a20);
      }
      auStack_358._0_4_ = _DAT_0f550a0c;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0xd0,0);
      }
      lVar6 = lStack_2c8;
      puVar13 = uStack_2d0;
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&UNK_0ef439d0;
      plStack_350 = plVar14 + 3;
      uStack_2d0 = (long *)0x0;
      lStack_2c8 = 0;
      plVar14[3] = (long)puVar13;
      plVar14[4] = lVar6;
      plVar14[7] = lStack_2b0;
      plVar14[5] = uStack_2c0;
      plVar14[6] = uStack_2b8;
      uStack_2c0 = 0;
      uStack_2b8 = 0;
      lStack_2b0 = 0;
      plVar14[10] = CONCAT44(uStack_294,CONCAT13(uStack_295,CONCAT21(uStack_297,uStack_29b._3_1_)));
      plVar14[8] = CONCAT17(uStack_2a1,CONCAT25(uStack_2a3,CONCAT14(uStack_2a4,uStack_2a8)));
      plVar14[9] = CONCAT35((undefined3)uStack_29b,CONCAT41(uStack_29f,uStack_2a0));
      uStack_2a8 = 0;
      uStack_2a4 = 0;
      uStack_2a3 = 0;
      uStack_2a1 = 0;
      uStack_2a0 = 0;
      uStack_29f = 0;
      uStack_29b = 0;
      uStack_297 = 0;
      uStack_295 = 0;
      uStack_294 = 0;
      plVar14[0xb] = lStack_290;
      plVar14[0xc] = lStack_288;
      plVar14[0xd] = lStack_280;
      lStack_290 = 0;
      lStack_288 = 0;
      lStack_280 = 0;
      plVar14[0xe] = lStack_278;
      plVar14[0xf] = lStack_270;
      plVar14[0x10] = lStack_268;
      lStack_278 = 0;
      lStack_270 = 0;
      lStack_268 = 0;
      *(undefined4 *)(plVar14 + 0x11) = uStack_260;
      plVar14[0x12] = lStack_258;
      plVar14[0x13] = lStack_250;
      plVar14[0x14] = lStack_248;
      lStack_258 = 0;
      lStack_250 = 0;
      lStack_248 = 0;
      plVar14[0x17] = lStack_230;
      *(undefined4 *)(plVar14 + 0x15) = (undefined4)uStack_240;
      *(undefined4 *)((long)plVar14 + 0xac) = uStack_240._4_4_;
      *(undefined4 *)(plVar14 + 0x16) = (undefined4)uStack_238;
      *(undefined4 *)((long)plVar14 + 0xb4) = uStack_238._4_4_;
      uStack_240 = 0;
      uStack_238 = 0;
      lStack_230 = 0;
      *(ulong *)((long)plVar14 + 0xc5) = CONCAT17(uStack_21c,CONCAT43(uStack_220,uStack_224._1_3_));
      plVar14[0x18] = CONCAT44(uStack_224,CONCAT22(uStack_226,uStack_228));
      uStack_198 = (long *)0x0;
      plStack_190 = (long *)0x0;
      plStack_348 = plVar14;
      func_0x048afd20(plVar12,auStack_358);
      plVar14 = plStack_348;
      if (plStack_348 != (long *)0x0) {
        LOCK();
        plVar15 = plStack_348 + 1;
        lVar6 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_348 + 0x10))(plStack_348);
          func_0x0412c2d0(plVar14);
        }
      }
      plVar14 = plStack_190;
      if (plStack_190 != (long *)0x0) {
        LOCK();
        plVar15 = plStack_190 + 1;
        lVar6 = *plVar15;
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plStack_190 + 0x10))(plStack_190);
          func_0x0412c2d0(plVar14);
        }
      }
      lVar6 = plVar12[2];
      iVar5 = *(int *)((long)plVar12 + 0x1c);
      if (iVar5 == 2) {
        piVar10 = *(int **)(*(long *)(lVar6 + 0x78) + 0x60);
        iVar5 = *piVar10;
        while (iVar5 != *(int *)(plVar12 + 3)) {
          piVar10 = piVar10 + 0x16;
          iVar5 = *piVar10;
        }
        for (; *(long *)(piVar10 + 0xc) != plVar12[1]; piVar10 = *(int **)(piVar10 + 0xe)) {
        }
LAB_064cc89a:
        piVar10[4] = piVar10[4] | (int)lStack_2e8 << 0x10;
      }
      else {
        if (iVar5 == 1) {
          piVar10 = *(int **)(*(long *)(lVar6 + 0x78) + 0x48);
          iVar5 = *piVar10;
          while (iVar5 != *(int *)(plVar12 + 3)) {
            piVar10 = piVar10 + 0x1a;
            iVar5 = *piVar10;
          }
          goto LAB_064cc89a;
        }
        if (iVar5 == 0) {
          *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) | (int)lStack_2e8 << 0x10;
        }
      }
      func_0x048b0bc0(&uStack_2d0);
      if (((ulong)uStack_218 & 1) != 0) {
        func_0x0412a280(uStack_208,(ulong)uStack_218 & 0xfffffffffffffffe);
      }
    }
    else {
      lVar6 = plVar12[2];
      plVar12 = puStack_2f0;
      if (lVar6 != 0) goto LAB_064cc1c2;
LAB_064cc194:
      lVar6 = FUN_048aead0(plVar12);
      if (*(int *)(lVar6 + 0x60) != -0x2b3da790) goto LAB_064cc1d6;
LAB_064cc1cb:
      if (*(long *)(lVar6 + 0x68) == 0) goto LAB_064cc1d6;
    }
    if ((DAT_0f5777d0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f5777d0), iVar5 != 0)) {
      func_0x06582820(0xf5777b8);
      func_0x0410844d(&DAT_0f5777d0);
    }
    plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18))
                                   >> 3) - 1U & _DAT_0f5777bc) * 8);
    do {
      lVar6 = *plVar12;
      if (lVar6 == -1) goto LAB_064cc921;
      plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar6 * 0x18);
    } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar6 * 0x18) != _DAT_0f5777bc);
    if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_064cc921:
      lStack_2e8 = 0;
      plStack_2e0 = (undefined8 *)0x0;
      func_0x048b1dc0(&lStack_2e8);
      lVar6 = lStack_2e8;
      plVar12 = plStack_2e0;
      if (lStack_2e8 == 0) goto LAB_064cc944;
LAB_064cc972:
      if (*(int *)(lVar6 + 0x60) == -0x2b3da790) goto LAB_064cc97b;
LAB_064cc986:
      uVar2 = _DAT_0f543a38;
      plVar12 = (long *)func_0x0eee2e90(_DAT_0f543a38);
      if ((long *)0xfffffffffffffff7 < plVar12) goto LAB_064ce074;
      lVar6 = (long)&uStack_198 + 1;
      if (plVar12 < (long *)0x17) {
        uStack_198 = (long *)CONCAT71(uStack_198._1_7_,(char)plVar12 * '\x02');
        lVar7 = lVar6;
        if (plVar12 != (long *)0x0) goto LAB_064cca1e;
      }
      else {
        uVar17 = 0x1a;
        if (((ulong)plVar12 | 7) != 0x17) {
          uVar17 = ((ulong)plVar12 | 7) + 1;
        }
        lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar7 == 0) {
          func_0x0eec74c0(uV
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x12bf509  availabilityStatus
 */
