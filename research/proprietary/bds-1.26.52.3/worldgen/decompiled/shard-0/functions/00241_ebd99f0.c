/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xecd99f0 (ELF vaddr 0xebd99f0)
 * Label: caller-of-callee
 * Body:  [[0ecd99f0, 0ecdb356]]
 * Ghidra: FUN_0ecd99f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ecd99f0(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  int *piVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined1 *puStack_378;
  undefined1 *puStack_370;
  undefined8 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 uStack_1d0;
  char cStack_1c8;
  undefined7 uStack_1c7;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  func_0x0ecdb580();
  if ((DAT_0f772638 == '\0') && (iVar8 = func_0x04108328(&DAT_0f772638), iVar8 != 0)) {
    func_0x0ecdc580();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7725b8,0xf53dab8);
    func_0x0410844d(&DAT_0f772638);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7725b8 + 4)) * 8);
  do {
    lVar13 = *plVar10;
    if (lVar13 == -1) goto LAB_0ecd9a70;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f7725b8 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0ecd9a70:
    puVar9 = &DAT_0f7725b8;
    if (iRam000000000f772618 != -0x2b3da790) goto LAB_0ecd9af2;
LAB_0ecd9a9b:
    lVar13 = *(long *)(puVar9 + 0x68);
    if (lVar13 == 0) goto LAB_0ecd9af2;
    bVar22 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar19 = lVar13 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar13 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0ecdcd00(&uStack_258,param_1,lVar19,uVar17);
    if ((char)puStack_228 != '\0') goto LAB_0ecd9ad8;
LAB_0ecd9b18:
    func_0x0ecdd2f0(&uStack_328,(long)uStack_258 + 0x18);
    if (uStack_310._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_318 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_310) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      uVar17 = *(ulong *)(piVar11 + 0xc);
      while ((long *)uVar17 != uStack_320) {
        piVar11 = *(int **)(piVar11 + 0xe);
        uVar17 = *(ulong *)(piVar11 + 0xc);
      }
LAB_0ecd9b9f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_310._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_318 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_310) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_0ecd9b9f;
      }
      if (uStack_310._4_4_ == 0) {
        *(uint *)((long)uStack_318 + 0x18) = *(uint *)((long)uStack_318 + 0x18) | 0x40000;
      }
    }
    lStack_158 = param_1 + 0x18;
    func_0x0ecdd8c0(&uStack_328,&uStack_258,&UNK_01410416,4);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (uStack_310 != (long *)0x0) {
      lVar13 = *uStack_310;
      uStack_310 = plVar10;
      (**(code **)(lVar13 + 8))();
      plVar10 = uStack_310;
    }
    uStack_310 = plVar10;
    uStack_3a8 = (undefined *)CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_318);
    uStack_3a0 = 0;
    uStack_398 = (ulong)uStack_398._4_4_ << 0x20;
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_048b3f30;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_048b2190;
    uStack_368 = &UNK_0ecdde50;
    puStack_360 = &UNK_0ecde010;
    uStack_358 = (long *)((ulong)uStack_358._4_4_ << 0x20);
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(uStack_320,&uStack_3a8);
    plVar10 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0ecddb50(&uStack_328);
    uStack_188 = CONCAT71(uStack_188._1_7_,(char)puStack_228);
    iStack_198 = (int)uStack_238;
    iStack_194 = uStack_238._4_4_;
    uStack_190 = (undefined4)uStack_230;
    uStack_18c = uStack_230._4_4_;
    uStack_1a8 = uStack_248;
    uStack_1a4 = uStack_244;
    uStack_1a0 = (undefined4)uStack_240;
    uStack_19c = uStack_240._4_4_;
    uStack_1b8 = (undefined4)uStack_258;
    uStack_1b4 = uStack_258._4_4_;
    uStack_1b0 = (undefined4)uStack_250;
    uStack_1ac = uStack_250._4_4_;
    FUN_048b0bc0(&uStack_310);
    func_0x0ecdd2f0(&uStack_328,CONCAT44(uStack_1b4,uStack_1b8) + 0x18);
    if (uStack_310._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_318 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_310) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      uVar17 = *(ulong *)(piVar11 + 0xc);
      while ((long *)uVar17 != uStack_320) {
        piVar11 = *(int **)(piVar11 + 0xe);
        uVar17 = *(ulong *)(piVar11 + 0xc);
      }
LAB_0ecd9dff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_310._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_318 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_310) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_0ecd9dff;
      }
      if (uStack_310._4_4_ == 0) {
        *(uint *)((long)uStack_318 + 0x18) = *(uint *)((long)uStack_318 + 0x18) | 0x40000;
      }
    }
    func_0x0ecdd8c0(&uStack_328,&uStack_1b8,&UNK_0123d5a9,4);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (uStack_310 != (long *)0x0) {
      lVar13 = *uStack_310;
      uStack_310 = plVar10;
      (**(code **)(lVar13 + 8))();
      plVar10 = uStack_310;
    }
    uStack_310 = plVar10;
    uStack_3a8 = (undefined *)CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_318);
    uStack_3a0 = 0;
    uStack_398 = uStack_398 & 0xffffffff00000000;
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_048b3f30;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &SUB_048b2190;
    uStack_368 = &UNK_0ecde1e0;
    puStack_360 = &UNK_0ecde3b0;
    uStack_358 = (long *)((ulong)uStack_358 & 0xffffffff00000000);
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(uStack_320,&uStack_3a8);
    plVar10 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0ecddb50(&uStack_328);
    cStack_1c8 = (char)uStack_188;
    iStack_1d8 = iStack_198;
    iStack_1d4 = iStack_194;
    uStack_1d0 = CONCAT44(uStack_18c,uStack_190);
    uStack_1e8 = uStack_1a8;
    uStack_1e4 = uStack_1a4;
    uStack_1e0 = uStack_1a0;
    uStack_1dc = uStack_19c;
    uStack_1f8 = uStack_1b8;
    uStack_1f4 = uStack_1b4;
    uStack_1f0 = uStack_1b0;
    uStack_1ec = uStack_1ac;
    FUN_048b0bc0(&uStack_310);
    func_0x0ecdd2f0(&uStack_328,CONCAT44(uStack_1f4,uStack_1f8) + 0x18);
    if (uStack_310._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)((long)uStack_318 + 0x78) + 0x60);
      iVar8 = *piVar11;
      while (iVar8 != (int)uStack_310) {
        piVar11 = piVar11 + 0x16;
        iVar8 = *piVar11;
      }
      uVar17 = *(ulong *)(piVar11 + 0xc);
      while ((long *)uVar17 != uStack_320) {
        piVar11 = *(int **)(piVar11 + 0xe);
        uVar17 = *(ulong *)(piVar11 + 0xc);
      }
LAB_0ecda03f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_310._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)((long)uStack_318 + 0x78) + 0x48);
        iVar8 = *piVar11;
        while (iVar8 != (int)uStack_310) {
          piVar11 = piVar11 + 0x1a;
          iVar8 = *piVar11;
        }
        goto LAB_0ecda03f;
      }
      if (uStack_310._4_4_ == 0) {
        *(uint *)((long)uStack_318 + 0x18) = *(uint *)((long)uStack_318 + 0x18) | 0x40000;
      }
    }
    func_0x0ecdd8c0(&uStack_328,&uStack_1f8,&UNK_011bc44b,6);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f3d74f0;
    if (uStack_310 != (long *)0x0) {
      lVar13 = *uStack_310;
      uStack_310 = plVar10;
      (**(code **)(lVar13 + 8))();
      plVar10 = uStack_310;
    }
    uStack_310 = plVar10;
    uStack_3a8 = (undefined *)CONCAT44(uStack_3a8._4_4_,(undefined4)uStack_318);
    uStack_3a0 = 0;
    uStack_398 = uStack_398 & 0xffffffff00000000;
    uStack_390 = 1;
    uStack_388 = 0;
    puStack_380 = &UNK_0ecde690;
    puStack_378 = &SUB_048b06d0;
    puStack_370 = &UNK_0c705ec0;
    uStack_368 = &UNK_0ecde6a0;
    puStack_360 = &UNK_0ecde8a0;
    uStack_358 = (long *)((ulong)uStack_358 & 0xffffffff00000000);
    uStack_350 = 0;
    plStack_348 = (long *)0x0;
    func_0x048b05a0(uStack_320,&uStack_3a8);
    plVar10 = plStack_348;
    if (plStack_348 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_348 + 1;
      lVar13 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_348 + 0x10))(plStack_348);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0ecddb50(&uStack_328);
    lVar13 = CONCAT44(uStack_1f4,uStack_1f8);
    FUN_048b0bc0(&uStack_310);
    uStack_328 = (undefined *)0x7365746174730c;
    puVar12 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x0eec74c0(0x70,0);
    }
    uVar15 = _UNK_013d63f9;
    *(ulong *)((long)puVar12 + 0x5b) = CONCAT35(_UNK_013d63f6,_DAT_013d63f1);
    *(undefined8 *)((long)puVar12 + 99) = uVar15;
    uVar15 = CONCAT53(_DAT_013d63f1,_UNK_013d63ee);
    *(undefined8 *)(puVar12 + 0x14) = _DAT_013d63e6;
    *(undefined8 *)(puVar12 + 0x16) = uVar15;
    uVar15 = _UNK_013d63de;
    *(undefined8 *)(puVar12 + 0x10) = _DAT_013d63d6;
    *(undefined8 *)(puVar12 + 0x12) = uVar15;
    uVar15 = _UNK_013d63ce;
    *(undefined8 *)(puVar12 + 0xc) = _DAT_013d63c6;
    *(undefined8 *)(puVar12 + 0xe) = uVar15;
    uVar15 = _UNK_013d63be;
    *(undefined8 *)(puVar12 + 8) = _DAT_013d63b6;
    *(undefined8 *)(puVar12 + 10) = uVar15;
    uVar15 = _UNK_013d63ae;
    *(undefined8 *)(puVar12 + 4) = _DAT_013d63a6;
    *(undefined8 *)(puVar12 + 6) = uVar15;
    uVar7 = _UNK_013d63a2;
    uVar6 = _UNK_013d639e;
    uVar5 = _UNK_013d639a;
    *puVar12 = _DAT_013d6396;
    puVar12[1] = uVar5;
    puVar12[2] = uVar6;
    puVar12[3] = uVar7;
    *(undefined1 *)((long)puVar12 + 0x6b) = 0;
    if ((DAT_0f772638 == '\0') && (iVar8 = func_0x04108328(&DAT_0f772638), iVar8 != 0)) {
      func_0x0ecdc580();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7725b8,0xf53dab8);
      func_0x0410844d(&DAT_0f772638);
    }
    lVar19 = (long)uStack_318;
    uVar17 = (ulong)uStack_328;
    plVar10 = (long *)(*(long *)(lVar13 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(lVar13 + 0x20) - *(long *)(lVar13 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f7725b8 + 4)) * 8);
    do {
      lVar4 = *plVar10;
      if (lVar4 == -1) goto LAB_0ecda291;
      plVar10 = (long *)(*(long *)(lVar13 + 0x30) + lVar4 * 0x18);
    } while (*(uint *)(*(long *)(lVar13 + 0x30) + 8 + lVar4 * 0x18) != *(uint *)(_DAT_0f7725b8 + 4))
    ;
    if (plVar10 == *(long **)(lVar13 + 0x38)) {
LAB_0ecda291:
      puVar9 = &DAT_0f7725b8;
    }
    else {
      puVar9 = (undefined *)plVar10[2];
    }
    uVar20 = (ulong)uStack_328 >> 1 & 0x7f;
    lVar4 = (long)&uStack_328 + 1;
    if (((ulong)uStack_328 & 1) != 0) {
      uVar20 = (ulong)uStack_320;
      lVar4 = (long)uStack_318;
    }
    if (uVar20 == 0) {
      uVar18 = 0x811c9dc5;
    }
    else {
      uVar16 = (ulong)((uint)uVar20 & 3);
      if (uVar20 < 4) {
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
      }
      else {
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar18 = ((int)*(char *)(lVar4 + 3 + uVar21) ^
                   ((int)*(char *)(lVar4 + 2 + uVar21) ^
                   ((int)*(char *)(lVar4 + 1 + uVar21) ^
                   ((int)*(char *)(lVar4 + uVar21) ^ uVar18) * 0x1000193) * 0x1000193) * 0x1000193)
                   * 0x1000193;
          uVar21 = uVar21 + 4;
        } while ((uVar20 & 0xfffffffffffffffc) != uVar21);
      }
      if (uVar16 != 0) {
        uVar20 = 0;
        do {
          uVar18 = ((int)*(char *)(lVar4 + uVar21 + uVar20) ^ uVar18) * 0x1000193;
          uVar20 = uVar20 + 1;
        } while (uVar16 != uVar20);
      }
    }
    lVar13 = func_0x048b0c90(lVar13 + 0x18,puVar9,uVar18,1);
    if (lVar13 == 0) {
      uStack_3a8 = (undefined *)0x0;
      uStack_3a0 = 0;
      func_0x048b0d20(&uStack_3a8);
      lVar13 = *(long *)((long)uStack_3a8 + 0x58);
      bVar3 = *(byte *)(lVar13 + 0x90);
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x58);
      bVar3 = *(byte *)(lVar13 + 0x90);
    }
    if ((bVar3 & 1) != 0) {
      thunk_FUN_0ee326a0(*(undefined8 *)(lVar13 + 0xa0),
                         *(ulong *)(lVar13 + 0x90) & 0xfffffffffffffffe);
    }
    *(undefined8 *)(lVar13 + 0x90) = 0x71;
    *(undefined8 *)(lVar13 + 0x98) = 0x6b;
    *(undefined4 **)(lVar13 + 0xa0) = puVar12;
    if ((uVar17 & 1) != 0) {
      thunk_FUN_0ee326a0(lVar19,(ulong)uStack_328 & 0xfffffffffffffffe);
    }
    lVar13 = func_0x0c343150(lStack_158);
    if (*(int *)(lVar13 + 0x60) != -0x2b3da790) goto LAB_0ecda451;
LAB_0ecda40f:
    lVar13 = *(long *)(lVar13 + 0x68);
    if (lVar13 == 0) goto LAB_0ecda451;
    bVar22 = (*(byte *)(lVar13 + 8) & 1) != 0;
    lVar19 = lVar13 + 9;
    if (bVar22) {
      lVar19 = *(long *)(lVar13 + 0x18);
    }
    uVar17 = (ulong)(*(byte *)(lVar13 + 8) >> 1);
    if (bVar22) {
      uVar17 = *(ulong *)(lVar13 + 0x10);
    }
    func_0x0ecdea80(&uStack_1f8,param_1,lVar19,uVar17);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0ecd9a9b;
LAB_0ecd9af2:
    func_0x0ecdcd00(&uStack_258,param_1,&UNK_012edbcf,0x14);
    if ((char)puStack_228 == '\0') goto LAB_0ecd9b18;
LAB_0ecd9ad8:
    lVar13 = func_0x0c343150(param_1 + 0x18);
    if (*(int *)(lVar13 + 0x60) == -0x2b3da790) goto LAB_0ecda40f;
LAB_0ecda451:
    func_0x0ecdea80(&uStack_1f8,param_1,&UNK_012b9e1c,0x10);
  }
  if (cStack_1c8 != '\0') {
    return;
  }
  uStack_1d0 = 0x1e1bc4d500000004;
  if ((DAT_0f6dcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6dcc78), iVar8 != 0)) {
    func_0x0c3430e0(0xf6dcc60);
    func_0x0410844d(&DAT_0f6dcc78);
  }
  uStack_328 = (undefined *)CONCAT44(uStack_328._4_4_,uStack_1d0._4_4_);
  uStack_320 = (long *)0x0;
  uStack_318 = (long *)((ulong)uStack_318._4_4_ << 0x20);
  uStack_310 = (long *)0x3;
  puStack_308 = &SUB_048aead0;
  puStack_300 = &UNK_0ecdf4d0;
  puStack_2f8 = &UNK_0ecdf4f0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  func_0x049057f0(&uStack_1f0,&uStack_328);
  func_0x048aea50(&uStack_328);
  uStack_398 = CONCAT44(uStack_1dc,uStack_1e0);
  uStack_390 = CONCAT44(iStack_1d4,iStack_1d8);
  uStack_3a8 = (undefined *)CONCAT44(uStack_1ec,uStack_1f0);
  uStack_3a0 = CONCAT44(uStack_1e4,uStack_1e8);
  uStack_258 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (uStack_258 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *uStack_258 = (long)&UNK_0f4e0850;
  uStack_250 = (long *)0x0;
  uStack_248 = CONCAT31(uStack_248._1_3_,0xff);
  func_0x0ecdf350(&uStack_328,&uStack_3a8,&uStack_258);
  if (uStack_250 != (long *)0x0) {
    (**(code **)(*uStack_250 + 0x28))();
  }
  if (uStack_258 != (long *)0x0) {
    (**(code **)(*uStack_258 + 8))();
  }
  if ((DAT_0f6dcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6dcc78), iVar8 != 0)) {
    func_0x0c3430e0(0xf6dcc60);
    func_0x0410844d(&DAT_0f6dcc78);
  }
  if (iStack_1d4 == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x60);
    iVar8 = *piVar11;
    while (iVar8 != iStack_1d8) {
      piVar11 = piVar11 + 0x16;
      iVar8 = *piVar11;
    }
    lVar13 = *(long *)(piVar11 + 0xc);
    while (lVar13 != CONCAT44(uStack_1e4,uStack_1e8)) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar13 = *(long *)(piVar11 + 0xc);
    }
LAB_0ecda6df:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 2;
  }
  else {
    if (iStack_1d4 == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x78) + 0x48);
      iVar8 = *piVar11;
      while (iVar8 != iStack_1d8) {
        piVar11 = piVar11 + 0x1a;
        iVar8 = *piVar11;
      }
      goto LAB_0ecda6df;
    }
    if (iStack_1d4 == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_1dc,uStack_1e0) + 0x18);
      *puVar2 = *puVar2 | 0x20000;
    }
  }
  if ((DAT_0f6dcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6dcc78), iVar8 != 0)) {
    func_0x0c3430e0(0xf6dcc60);
    func_0x0410844d(&DAT_0f6dcc78);
  }
  uStack_328 = (undefined *)CONCAT44(uStack_328._4_4_,0xbf75c8f8);
  uStack_320 = (long *)0x0;
  uStack_318 = (long *)CONCAT44(uStack_318._4_4_,1);
  uStack_310 = (long *)0x0;
  puStack_308 = &UNK_0ecdc4c0;
  puStack_300 = &SUB_048b06d0;
  puStack_2f8 = &UNK_0ece03c0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  func_0x049057f0(&uStack_1f0,&uStack_328);
  func_0x048aea50(&uStack_328);
  uStack_398 = CONCAT44(uStack_1dc,uStack_1e0);
  uStack_390 = CONCAT44(iStack_1d4,iStack_1d8);
  uStack_3a8 = (undefined *)CONCAT44(uStack_1ec,uStack_1f0);
  uStack_3a0 = CONCAT44(uStack_1e4,uStack_1e8);
  puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar14 = &UNK_0f4e0850;
  if ((DAT_0f551cb0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f551cb0), iVar8 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_328 = (undefined *)CONCAT44(uStack_328._4_4_,_DAT_0f551c9c);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c98;
  uStack_320 = plVar10 + 3;
  plVar10[3] = (long)puVar14;
  *(undefined1 *)(plVar10 + 4) = 0xff;
  uStack_258 = (long *)0x0;
  uStack_250 = (long *)0x0;
  uStack_318 = plVar10;
  func_0x048afd20(&uStack_3a8,&uStack_328);
  plVar10 = uStack_318;
  if (uStack_318 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_318 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_318 + 0x10))(uStack_318);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = uStack_250;
  if (uStack_250 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_250 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_250 + 0x10))(uStack_250);
      func_0x0412c2d0(plVar10);
    }
  }
  uStack_68 = uStack_1f8;
  uStack_64 = uStack_1f4;
  uStack_60 = uStack_1f0;
  uStack_5c = uStack_1ec;
  uStack_58 = uStack_1e8;
  uStack_54 = uStack_1e4;
  uStack_50 = uStack_1e0;
  uStack_4c = uStack_1dc;
  iStack_48 = iStack_1d8;
  iStack_44 = iStack_1d4;
  uStack_40 = (undefined4)uStack_1d0;
  uStack_3c = uStack_1d0._4_4_;
  uStack_38 = CONCAT71(uStack_1c7,cStack_1c8);
  uStack_a8 = 0xff;
  uStack_b8 = 0xffffffffffffffff;
  uStack_b0 = 0;
  puStack_c0 = &UNK_0f4e08c8;
  func_0x0ecdc340(&lStack_a0,&uStack_68,&puStack_c0);
  uStack_78 = 0x1e1bc4d500000004;
  if ((DAT_0f6dcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6dcc78), iVar8 != 0)) {
    func_0x0c3430e0(0xf6dcc60);
    func_0x0410844d(&DAT_0f6dcc78);
  }
  uStack_328 = (undefined *)CONCAT44(uStack_328._4_4_,uStack_78._4_4_);
  uStack_320 = (long *)0x0;
  uStack_318 = (long *)((ulong)uStack_318 & 0xffffffff00000000);
  uStack_310 = (long *)0x3;
  puStack_308 = &SUB_048aead0;
  puStack_300 = &UNK_0c0f6d10;
  puStack_2f8 = &UNK_0ece1380;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  func_0x049057f0(&uStack_98,&uStack_328);
  func_0x048aea50(&uStack_328);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar10 = (long)&UNK_0ef44b00;
  uStack_250 = (long *)0x0;
  uStack_248 = CONCAT31(uStack_248._1_3_,0xff);
  uStack_258 = plVar10;
  func_0x0ecdf350(&uStack_328,&uStack_3a8,&uStack_258);
  if (uStack_250 != (long *)0x0) {
    (**(code **)(*uStack_250 + 0x28))();
  }
  if (uStack_258 != (long *)0x0) {
    (**(code **)(*uStack_258 + 8))();
  }
  uStack_130 = CONCAT44(uStack_94,uStack_98);
  uStack_138 = lStack_a0;
  uStack_128 = uStack_90;
  uStack_124 = uStack_8c;
  uStack_120 = uStack_88;
  uStack_11c = uStack_84;
  uStack_118 = uStack_80;
  uStack_114 = uStack_7c;
  iStack_110 = (int)uStack_78;
  uStack_10c = uStack_78._4_4_;
  uStack_108 = uStack_70;
  uStack_388 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_350 = 0;
  plStack_348 = (long *)0x0;
  puStack_360 = (undefined *)0x0;
  uStack_358 = (long *)0x0;
  puStack_370 = (undefined1 *)0x0;
  uStack_368 = (undefined *)0x0;
  puStack_380 = (undefined *)0x0;
  puStack_378 = (undefined1 *)0x0;
  uStack_330 = 0;
  uStack_3a0 = 0xffffffffffffffff;
  uStack_398 = 0;
  uStack_390 = 0xff;
  uStack_3a8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_388);
  puStack_380 = (undefined *)func_0x041681f0(&uStack_388,0xf547a30);
  puStack_378 = (undefined1 *)func_0x041681f0(&uStack_388,0xf547770);
  puStack_370 = (undefined1 *)0x0;
  uStack_368 = (undefined *)0x0;
  puStack_360 = (undefined *)0x0;
  uStack_358 = (long *)0x0;
  uStack_350 = 0;
  plStack_348 = (long *)0x0;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_330 = 1;
  uStack_320 = (long *)uStack_3a0;
  uStack_318 = (long *)uStack_398;
  uStack_310 = (long *)CONCAT71(uStack_310._1_7_,(undefined1)uStack_390);
  uStack_328 = &UNK_0f4e3c70;
  func_0x04167a20(&puStack_308,&uStack_388);
  puStack_300 = puStack_380;
  puStack_2f8 = puStack_378;
  uStack_2f0 = puStack_370;
  uStack_2e8 = (undefined4)uStack_368;
  uStack_2e4 = uStack_368._4_4_;
  uStack_2e0 = puStack_360;
  plStack_2d8 = uStack_358;
  if (uStack_358 != (long *)0x0) {
    LOCK();
    uStack_358[1] = uStack_358[1] + 1;
    UNLOCK();
  }
  uStack_2d0 = uStack_350;
  if (((ulong)plStack_348 & 1) == 0) {
    uStack_2b8 = uStack_338;
    uStack_2c8 = (ulong)plStack_348;
    uStack_2c0 = uStack_340;
  }
  else {
    FUN_0412e5e0(&uStack_2c8,uStack_338,uStack_340);
  }
  uStack_2b0 = uStack_330;
  if (iStack_110 == 4) {
    lVar13 = func_0x0ece08d0(&uStack_138);
    lVar13 = *(long *)(lVar13 + 0x48);
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  else {
    if (iStack_110 != 1) goto LAB_0ecdad9f;
    lVar13 = uStack_138 + 0x18;
    uVar15 = func_0x0c343150(lVar13);
    plVar10 = (long *)func_0x048b0c90(lVar13,uVar15,uStack_10c,1);
    if (plVar10 == (long *)0x0) {
      uStack_258 = (long *)0x0;
      uStack_250 = (long *)0x0;
      func_0x048b0d20(&uStack_258);
      plVar10 = uStack_258;
    }
    lVar13 = plVar10[0xb];
    puVar14 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
    if (puVar14 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x80,0);
    }
  }
  *(undefined1 *)(puVar14 + 3) = (undefined1)uStack_310;
  *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_320;
  *(undefined4 *)((long)puVar14 + 0xc) = uStack_320._4_4_;
  *(undefined4 *)(puVar14 + 2) = (undefined4)uStack_318;
  *(uint *)((long)puVar14 + 0x14) = uStack_318._4_4_;
  *puVar14 = &UNK_0f4e3c70;
  func_0x04167a20(puVar14 + 4,&puStack_308);
  puVar14[5] = puStack_300;
  puVar14[6] = puStack_2f8;
  puVar14[7] = uStack_2f0;
  puVar14[8] = CONCAT44(uStack_2e4,uStack_2e8);
  puVar14[9] = uStack_2e0;
  puVar14[10] = plStack_2d8;
  uStack_2e0 = 0;
  plStack_2d8 = (long *)0x0;
  puVar14[0xb] = uStack_2d0;
  puVar14[0xe] = uStack_2b8;
  *(undefined4 *)(puVar14 + 0xc) = (undefined4)uStack_2c8;
  *(undefined4 *)((long)puVar14 + 100) = uStack_2c8._4_4_;
  *(undefined4 *)(puVar14 + 0xd) = (undefined4)uStack_2c0;
  *(undefined4 *)((long)puVar14 + 0x6c) = uStack_2c0._4_4_;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  puVar14[0xf] = uStack_2b0;
  plVar10 = *(long **)(lVar13 + 8);
  *(undefined8 **)(lVar13 + 8) = puVar14;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x28))();
  }
LAB_0ecdad9f:
  uStack_d8 = uStack_118;
  uStack_d4 = uStack_114;
  uStack_c8 = (undefined1)uStack_108;
  uStack_e8 = uStack_128;
  uStack_e4 = uStack_124;
  uStack_e0 = uStack_120;
  uStack_dc = uStack_11c;
  uStack_f8 = (undefined4)uStack_138;
  uStack_f4 = uStack_138._4_4_;
  uStack_f0 = (undefined4)uStack_130;
  uStack_ec = uStack_130._4_4_;
  uStack_d0 = 0x1e1bc4d500000004;
  if ((DAT_0f6dcc78 == '\0') && (iVar8 = func_0x04108328(&DAT_0f6dcc78), iVar8 != 0)) {
    func_0x0c3430e0(0xf6dcc60);
    func_0x0410844d(&DAT_0f6dcc78);
  }
  uStack_258 = (long *)CONCAT44(uStack_258._4_4_,uStack_d0._4_4_);
  uStack_250 = (long *)0x0;
  uStack_248 = 0;
  uStack_240 = 1;
  uStack_238 = &SUB_048aead0;
  uStack_230 = &UNK_0ece1ca0;
  puStack_228 = &UNK_0ece1d60;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  func_0x049057f0(&uStack_f0,&uStack_258);
  func_0x048aea50(&uStack_258);
  uStack_168 = CONCAT44(uStack_dc,uStack_e0);
  uStack_160 = CONCAT44(uStack_d4,uStack_d8);
  uStack_178 = (undefined *)CONCAT44(uStack_ec,uStack_f0);
  uStack_170 = CONCAT44(uStack_e4,uStack_e8);
  plStack_150 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plStack_150 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plStack_150 = (long)&UNK_0f4e0850;
  plStack_148 = (long *)0x0;
  uStack_140 = 0xff;
  func_0x0ecdf350(&uStack_258,&uStack_178,&plStack_150);
  if (plStack_148 != (long *)0x0) {
    (**(code **)(*plStack_148 + 0x28))();
  }
  if (plStack_150 != (long *)0x0) {
    (**(code **)(*plStack_150 + 8))();
  }
  uStack_1b8 = uStack_f8;
  uStack_1b4 = uStack_f4;
  uStack_1b0 = uStack_f0;
  uStack_1ac = uStack_ec;
  uStack_1a8 = uStack_e8;
  uStack_1a4 = uStack_e4;
  uStack_1a0 = uStack_e0;
  uStack_19c = uStack_dc;
  iStack_198 = uStack_d8;
  iStack_194 = uStack_d4;
  uStack_190 = (undefined4)uStack_d0;
  uStack_18c = uStack_d0._4_4_;
  uStack_188 = CONCAT71(uStack_c7,uStack_c8);
  uStack_160 = 0xff;
  uStack_170 = 0xffffffffffffffff;
  uStack_168 = 0;
  uStack_178 = &UNK_0f4e08c8;
  func_0x0ecdc340(&uStack_258,&uStack_1b8,&uStack_178);
  uStack_328 = &UNK_0f4e3c70;
  if ((uStack_2c8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
  }
  plVar10 = plStack_2d8;
  if (plStack_2d8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2d8 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(&puStack_308);
  uStack_3a8 = &UNK_0f4e3c70;
  if (((ulong)plStack_348 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_338,(ulong)plStack_348 & 0xfffffffffffffffe);
  }
  plVar10 = uStack_358;
  if (uStack_358 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_358 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*uStack_358 + 0x10))(uStack_358);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(&uStack_388);
  return;
}



/* ---- referenced strings ----
 * 0x13d6396  one or more block states are not valid Vanilla states; block filter entries cannot use custom bl
 * 0x13d63a6  k states are not valid Vanilla states; block filter entries cannot use custom block states.
 * 0x13d63b6   valid Vanilla states; block filter entries cannot use custom block states.
 * 0x13d63c6  tates; block filter entries cannot use custom block states.
 * 0x13d63d6  ter entries cannot use custom block states.
 * 0x13d63e6  ot use custom block states.
 * 0x13d63f1  om block states.
 */
