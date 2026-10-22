/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe747f00 (ELF vaddr 0xe647f00)
 * Label: caller-of-callee
 * Body:  [[0e747f00, 0e748101] [0e748110, 0e748e1c]]
 * Ghidra: FUN_0e747f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e747f00(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte *pbVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  code *pcStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined1 *puStack_400;
  undefined1 *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined1 *puStack_380;
  undefined1 *puStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined4 uStack_360;
  undefined8 uStack_358;
  long *plStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char cStack_318;
  long lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  int iStack_2e8;
  undefined4 uStack_2e4;
  char cStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  char cStack_188;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  char cStack_148;
  undefined1 auStack_138 [16];
  undefined4 uStack_128;
  code *pcStack_120;
  code *pcStack_118;
  undefined4 uStack_110;
  char cStack_10c;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  func_0x0e3c4750();
  if ((DAT_0f760ea8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f760ea8), iVar5 != 0)) {
    func_0x0e7cf020();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f760e28,0xf53dab8);
    func_0x0410844d(&DAT_0f760ea8);
  }
  plVar11 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f760e28 + 4)) * 8);
  do {
    lVar14 = *plVar11;
    if (lVar14 == -1) goto LAB_0e747f80;
    plVar11 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f760e28 + 4))
  ;
  if (plVar11 == *(long **)(param_1 + 0x38)) {
LAB_0e747f80:
    puVar7 = &DAT_0f760e28;
    if (iRam000000000f760e88 != -0x2b3da790) goto LAB_0e747fed;
LAB_0e747fab:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_0e747fed;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar10 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar10 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0e7cf640(&lStack_310,param_1,lVar12,uVar10);
    lVar14 = lStack_310;
  }
  else {
    puVar7 = (undefined *)plVar11[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e747fab;
LAB_0e747fed:
    func_0x0e7cf640(&lStack_310,param_1,&UNK_0121d90f,0xe);
    lVar14 = lStack_310;
  }
  if (cStack_2e0 != '\0') {
    return;
  }
  lStack_310 = lVar14;
  if ((DAT_0f760ea8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f760ea8), iVar5 != 0)) {
    func_0x0e7cf020();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f760e28,0xf53dab8);
    func_0x0410844d(&DAT_0f760ea8);
  }
  plVar11 = (long *)(*(long *)(lVar14 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar14 + 0x20) - *(long *)(lVar14 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f760e28 + 4)) * 8);
  do {
    lVar12 = *plVar11;
    if (lVar12 == -1) goto LAB_0e748080;
    plVar11 = (long *)(*(long *)(lVar14 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar14 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f760e28 + 4));
  if (plVar11 == *(long **)(lVar14 + 0x38)) {
LAB_0e748080:
    puVar7 = &DAT_0f760e28;
  }
  else {
    puVar7 = (undefined *)plVar11[2];
  }
  for (pbVar8 = *(byte **)(lStack_310 + 0x50); pbVar8 != *(byte **)(lStack_310 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e74811a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e74811a:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar8 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar8 + 0x10);
      }
      auVar17[0] = -(*pbVar13 == DAT_014eaba0);
      auVar17[1] = -(pbVar13[1] == DAT_014eaba0._1_1_);
      auVar17[2] = -(pbVar13[2] == DAT_014eaba0._2_1_);
      auVar17[3] = -(pbVar13[3] == DAT_014eaba0._3_1_);
      auVar17[4] = -(pbVar13[4] == DAT_014eaba0._4_1_);
      auVar17[5] = -(pbVar13[5] == DAT_014eaba0._5_1_);
      auVar17[6] = -(pbVar13[6] == DAT_014eaba0._6_1_);
      auVar17[7] = -(pbVar13[7] == DAT_014eaba0._7_1_);
      auVar17[8] = -(pbVar13[8] == DAT_014eaba0._8_1_);
      auVar17[9] = -(pbVar13[9] == DAT_014eaba0._9_1_);
      auVar17[10] = -(pbVar13[10] == DAT_014eaba0._10_1_);
      auVar17[0xb] = -(pbVar13[0xb] == DAT_014eaba0._11_1_);
      auVar17[0xc] = -(pbVar13[0xc] == DAT_014eaba0._12_1_);
      auVar17[0xd] = -(pbVar13[0xd] == DAT_014eaba0._13_1_);
      auVar17[0xe] = -(pbVar13[0xe] == DAT_014eaba0._14_1_);
      auVar17[0xf] = -(pbVar13[0xf] == DAT_014eaba0._15_1_);
      auVar18[0] = -(pbVar13[10] == DAT_014e4ff0);
      auVar18[1] = -(pbVar13[0xb] == DAT_014e4ff0._1_1_);
      auVar18[2] = -(pbVar13[0xc] == DAT_014e4ff0._2_1_);
      auVar18[3] = -(pbVar13[0xd] == DAT_014e4ff0._3_1_);
      auVar18[4] = -(pbVar13[0xe] == DAT_014e4ff0._4_1_);
      auVar18[5] = -(pbVar13[0xf] == DAT_014e4ff0._5_1_);
      auVar18[6] = -(pbVar13[0x10] == DAT_014e4ff0._6_1_);
      auVar18[7] = -(pbVar13[0x11] == DAT_014e4ff0._7_1_);
      auVar18[8] = -(pbVar13[0x12] == DAT_014e4ff0._8_1_);
      auVar18[9] = -(pbVar13[0x13] == DAT_014e4ff0._9_1_);
      auVar18[10] = -(pbVar13[0x14] == DAT_014e4ff0._10_1_);
      auVar18[0xb] = -(pbVar13[0x15] == DAT_014e4ff0._11_1_);
      auVar18[0xc] = -(pbVar13[0x16] == DAT_014e4ff0._12_1_);
      auVar18[0xd] = -(pbVar13[0x17] == DAT_014e4ff0._13_1_);
      auVar18[0xe] = -(pbVar13[0x18] == DAT_014e4ff0._14_1_);
      auVar18[0xf] = -(pbVar13[0x19] == DAT_014e4ff0._15_1_);
      auVar18 = auVar18 & auVar17;
      if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar8 == *(byte **)(lStack_310 + 0x58)) {
LAB_0e748148:
    uVar4 = uStack_2e4;
    if (iStack_2e8 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e7481d9;
      lVar14 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)func_0x048aead0(lVar14 + 0x18);
      }
      auStack_138._0_8_ = func_0x048b0c90(lVar14 + 0x18,puVar7,uVar4,1);
      if (auStack_138._0_8_ == 0) {
        auStack_138 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_138);
        if (auStack_138._0_8_ == 0) goto LAB_0e7481d9;
      }
      if ((*(int *)(auStack_138._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_138._0_8_ + 0x58) != 0)) {
        lVar14 = *(long *)(auStack_138._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e7481d9:
        lVar14 = 0;
      }
    }
    puStack_420 = &UNK_0488e0b0;
    pcStack_418 = (code *)0x0;
    uStack_410 = CONCAT35(uStack_410._5_3_,0x48b5725f);
    puStack_430 = (undefined *)0x0;
    auStack_138 = (undefined1  [16])0x0;
    pcStack_120 = (code *)&UNK_0488e0b0;
    pcStack_118 = (code *)0x0;
    uStack_110 = 0x48b5725f;
    cStack_10c = '\0';
    puStack_3a0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_3a0 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_3b0 = 0x21;
    uStack_3a8 = 0x1a;
    *(ulong *)((long)puStack_3a0 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_3a0 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_3a0 = _DAT_013bbacd;
    puStack_3a0[1] = uVar3;
    *(undefined1 *)((long)puStack_3a0 + 0x1a) = 0;
    lVar14 = FUN_048b5060(lVar14,&uStack_3b0);
    *(undefined8 *)(lVar14 + 0x20) = 0;
    if ((undefined1 *)(lVar14 + 0x20) == auStack_138) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
        puVar15 = (undefined8 *)(lVar14 + 0x28);
        (**(code **)(lVar14 + 0x40))(puVar15);
        if (cStack_10c != '\0') {
          if (cStack_10c == '\x02') {
            (*pcStack_120)(5,auStack_138 + 8,puVar15);
          }
          else {
            uVar3 = auStack_138._8_8_;
            auStack_138._8_8_ = 0;
            *puVar15 = uVar3;
          }
        }
      }
      *(code **)(lVar14 + 0x38) = pcStack_120;
      *(code **)(lVar14 + 0x40) = pcStack_118;
      *(undefined4 *)(lVar14 + 0x48) = uStack_110;
      *(char *)(lVar14 + 0x4c) = cStack_10c;
      pcVar9 = pcStack_118;
    }
    if ((uStack_3b0 & 1) != 0) {
      func_0x0412a280(puStack_3a0,uStack_3b0 & 0xfffffffffffffffe);
      pcVar9 = pcStack_118;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_138 + 8);
    }
    if (pcStack_418 != (code *)0x0) {
      (*pcStack_418)(&puStack_430);
    }
  }
  else {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0e748148;
  }
  cStack_188 = cStack_2e0;
  uStack_190 = CONCAT44(uStack_2e4,iStack_2e8);
  uStack_198 = uStack_2f0;
  uStack_1a8 = uStack_300;
  uStack_1a0 = uStack_2f8;
  lStack_1b8 = lStack_310;
  uStack_1b0 = uStack_308;
  func_0x0e7d01a0(auStack_138,&lStack_1b8,&UNK_013f4add,5);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4ba510;
  if (pcStack_120 != (code *)0x0) {
    lVar14 = *(long *)pcStack_120;
    pcStack_120 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_120;
  }
  pcStack_120 = pcVar9;
  puStack_430 = (undefined *)CONCAT44(puStack_430._4_4_,uStack_128);
  uStack_428 = 0;
  puStack_420 = (undefined *)((ulong)puStack_420 & 0xffffffff00000000);
  pcStack_418 = (code *)0x1;
  uStack_410 = 0;
  puStack_408 = &UNK_0e433710;
  puStack_400 = &SUB_048b06d0;
  puStack_3f8 = &SUB_0e42ffe0;
  puStack_3f0 = &UNK_0e7d0720;
  puStack_3e8 = &UNK_0e7d08e0;
  uStack_3e0 = (long *)((ulong)uStack_3e0._4_4_ << 0x20);
  uStack_3d8 = 0;
  plStack_3d0 = (long *)0x0;
  func_0x048b05a0(auStack_138._8_8_,&puStack_430);
  plVar11 = plStack_3d0;
  if (plStack_3d0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3d0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_3d0 + 0x10))(plStack_3d0);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0e7d0420(auStack_138);
  cStack_318 = cStack_188;
  uStack_328 = uStack_198;
  uStack_320 = uStack_190;
  uStack_338 = uStack_1a8;
  uStack_330 = uStack_1a0;
  lStack_348 = lStack_1b8;
  uStack_340 = uStack_1b0;
  func_0x048b0bc0(&pcStack_120);
  uStack_410 = 0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3d8 = 0;
  plStack_3d0 = (long *)0x0;
  puStack_3e8 = (undefined *)0x0;
  uStack_3e0 = (long *)0x0;
  puStack_3f8 = (undefined1 *)0x0;
  puStack_3f0 = (undefined *)0x0;
  puStack_408 = (undefined *)0x0;
  puStack_400 = (undefined1 *)0x0;
  uStack_3b8 = 0;
  uStack_428 = 0xffffffffffffffff;
  puStack_420 = (undefined *)0x0;
  pcStack_418 = (code *)0xff;
  puStack_430 = &UNK_0f4e3c70;
  FUN_041679a0(&uStack_410);
  puStack_408 = (undefined *)func_0x041681f0(&uStack_410,0xf547a30);
  puStack_400 = (undefined1 *)func_0x041681f0(&uStack_410,0xf547770);
  puStack_3f8 = (undefined1 *)0x0;
  puStack_3f0 = (undefined *)0x0;
  puStack_3e8 = (undefined *)0x0;
  uStack_3e0 = (long *)0x0;
  uStack_3d8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b8 = 1;
  uStack_230 = uStack_428;
  uStack_228 = puStack_420;
  uStack_220 = pcStack_418._0_1_;
  puStack_238 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_218,&uStack_410);
  uStack_210 = puStack_408;
  uStack_208 = puStack_400;
  uStack_200 = puStack_3f8;
  uStack_1f8 = puStack_3f0;
  uStack_1f0 = puStack_3e8;
  plStack_1e8 = uStack_3e0;
  if (uStack_3e0 != (long *)0x0) {
    LOCK();
    uStack_3e0[1] = uStack_3e0[1] + 1;
    UNLOCK();
  }
  uStack_1e0 = uStack_3d8;
  if (((ulong)plStack_3d0 & 1) == 0) {
    uStack_1c8 = uStack_3c0;
    uStack_1d8 = (ulong)plStack_3d0;
    uStack_1d0 = uStack_3c8;
  }
  else {
    func_0x0412e5e0(&uStack_1d8,uStack_3c0,uStack_3c8);
  }
  uStack_1c0 = uStack_3b8;
  uStack_2d0 = 0xffffffffffffffff;
  uStack_2c8 = 0;
  uStack_2c0 = 0xff;
  puStack_2d8 = &UNK_0f4c8bd8;
  uStack_2b0 = uStack_230;
  uStack_2a8 = uStack_228;
  uStack_2a0 = uStack_220;
  puStack_2b8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_298,auStack_218);
  uStack_290 = uStack_210;
  uStack_288 = uStack_208;
  uStack_280 = uStack_200;
  uStack_278 = uStack_1f8;
  uStack_270 = uStack_1f0;
  plStack_268 = plStack_1e8;
  uStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_260 = uStack_1e0;
  uStack_248 = uStack_1c8;
  uStack_258 = uStack_1d8;
  uStack_250 = uStack_1d0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_240 = uStack_1c0;
  if ((int)uStack_320 == 4) {
    lVar14 = func_0x0e7d0c00(&lStack_348);
    lVar14 = *(long *)(lVar14 + 0x48);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
LAB_0e748837:
    *(undefined1 *)(puVar15 + 3) = uStack_2c0;
    puVar15[1] = uStack_2d0;
    puVar15[2] = uStack_2c8;
    *puVar15 = &UNK_0f4c8bd8;
    puVar15[5] = uStack_2b0;
    puVar15[6] = uStack_2a8;
    *(undefined1 *)(puVar15 + 7) = uStack_2a0;
    puVar15[4] = &UNK_0f4e3c70;
    func_0x04167a20(puVar15 + 8,auStack_298);
    puVar15[9] = uStack_290;
    puVar15[10] = uStack_288;
    puVar15[0xb] = uStack_280;
    puVar15[0xc] = uStack_278;
    puVar15[0xd] = uStack_270;
    puVar15[0xe] = plStack_268;
    uStack_270 = 0;
    plStack_268 = (long *)0x0;
    puVar15[0xf] = uStack_260;
    puVar15[0x12] = uStack_248;
    puVar15[0x10] = uStack_258;
    puVar15[0x11] = uStack_250;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    puVar15[0x13] = uStack_240;
    plVar11 = *(long **)(lVar14 + 8);
    *(undefined8 **)(lVar14 + 8) = puVar15;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x28))();
    }
  }
  else if ((int)uStack_320 == 1) {
    lVar14 = func_0x0e7d0ab0(&lStack_348);
    lVar14 = *(long *)(lVar14 + 0x58);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xa0,0);
    }
    goto LAB_0e748837;
  }
  cStack_148 = cStack_318;
  uStack_158 = uStack_328;
  uStack_150 = uStack_320;
  uStack_168 = uStack_338;
  uStack_160 = uStack_330;
  lStack_178 = lStack_348;
  uStack_170 = uStack_340;
  func_0x0e7d01a0(auStack_138,&lStack_178,&UNK_01272634,6);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f0126a0;
  if (pcStack_120 != (code *)0x0) {
    lVar14 = *(long *)pcStack_120;
    pcStack_120 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_120;
  }
  pcStack_120 = pcVar9;
  uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uStack_128);
  uStack_3a8 = 0;
  puStack_3a0 = (undefined8 *)((ulong)puStack_3a0 & 0xffffffff00000000);
  uStack_398 = 1;
  uStack_390 = 0;
  puStack_388 = &UNK_05daeda0;
  puStack_380 = &SUB_048b06d0;
  puStack_378 = &SUB_05daea90;
  puStack_370 = &UNK_0e7d0d80;
  puStack_368 = &UNK_0e7d0ee0;
  uStack_360 = 0;
  uStack_358 = 0;
  plStack_350 = (long *)0x0;
  func_0x048b05a0(auStack_138._8_8_,&uStack_3b0);
  plVar11 = plStack_350;
  if (plStack_350 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_350 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_350 + 0x10))(plStack_350);
      FUN_0412c2d0(plVar11);
    }
  }
  func_0x0e7d0420(auStack_138);
  cStack_38 = cStack_148;
  uStack_48 = uStack_158;
  uStack_40 = uStack_150;
  uStack_58 = uStack_168;
  uStack_50 = uStack_160;
  lStack_68 = lStack_178;
  uStack_60 = uStack_170;
  func_0x048b0bc0(&pcStack_120);
  if ((int)uStack_40 == 4) {
    lVar14 = func_0x0e7d0c00(&lStack_68);
    lVar14 = *(long *)(lVar14 + 0x48);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
  }
  else {
    if ((int)uStack_40 != 1) goto LAB_0e748bbf;
    lVar14 = func_0x0e7d0ab0(&lStack_68);
    lVar14 = *(long *)(lVar14 + 0x58);
    puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar15 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
  }
  puVar15[1] = 0xffffffffffffffff;
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 0xff;
  *puVar15 = &UNK_0f137860;
  *(undefined8 *)((long)puVar15 + 0x1c) = _DAT_014e9660;
  *(undefined8 *)((long)puVar15 + 0x24) = 0;
  plVar11 = *(long **)(lVar14 + 8);
  *(undefined8 **)(lVar14 + 8) = puVar15;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x28))();
  }
LAB_0e748bbf:
  puStack_2d8 = &UNK_0f4c8bd8;
  puStack_2b8 = &UNK_0f4e3c70;
  if ((uStack_258 & 1) != 0) {
    func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
  }
  plVar11 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      FUN_0412c2d0(plVar11);
    }
  }
  FUN_04167a40(auStack_298);
  puStack_238 = &UNK_0f4e3c70;
  if ((uStack_1d8 & 1) != 0) {
    func_0x0412a280(uStack_1c8,uStack_1d8 & 0xfffffffffffffffe);
  }
  plVar11 = plStack_1e8;
  if (plStack_1e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1e8 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
      FUN_0412c2d0(plVar11);
    }
  }
  FUN_04167a40(auStack_218);
  puStack_430 = &UNK_0f4e3c70;
  if (((ulong)plStack_3d0 & 1) != 0) {
    func_0x0412a280(uStack_3c0,(ulong)plStack_3d0 & 0xfffffffffffffffe);
  }
  plVar11 = uStack_3e0;
  if (uStack_3e0 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_3e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*uStack_3e0 + 0x10))(uStack_3e0);
      FUN_0412c2d0(plVar11);
    }
  }
  FUN_04167a40(&uStack_410);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
