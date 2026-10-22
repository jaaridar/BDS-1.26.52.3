/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2b3990 (ELF vaddr 0xe1b3990)
 * Label: caller-of-callee
 * Body:  [[0e2b3990, 0e2b3b91] [0e2b3ba0, 0e2b4bc6] [0e2b4bca, 0e2b4bd8] [0e2b4bdc, 0e2b4c2c] [0e2b4c42, 0e2b4cab]]
 * Ghidra: FUN_0e2b3990
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2b3990(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  code *pcVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  code *pcStack_540;
  undefined8 uStack_538;
  undefined *puStack_530;
  undefined1 *puStack_528;
  undefined1 *puStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined4 uStack_508;
  undefined8 uStack_500;
  long *plStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  undefined *puStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  char cStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [16];
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined4 uStack_350;
  char cStack_34c;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  char cStack_278;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  char cStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  int iStack_208;
  undefined4 uStack_204;
  char cStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  char cStack_1c8;
  byte bStack_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char cStack_178;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  char cStack_138;
  undefined7 uStack_137;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *apuStack_b0 [4];
  undefined1 auStack_90 [48];
  long *plStack_60;
  byte bStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_40;
  
  func_0x0eb89800();
  if ((DAT_0f74ca80 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74ca80), iVar5 != 0)) {
    func_0x0e2ff950();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74ca00,0xf53dab8);
    func_0x0410844d(&DAT_0f74ca80);
  }
  plVar12 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74ca00 + 4)) * 8);
  do {
    lVar18 = *plVar12;
    if (lVar18 == -1) goto LAB_0e2b3a10;
    plVar12 = (long *)(*(long *)(param_1 + 0x30) + lVar18 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f74ca00 + 4))
  ;
  if (plVar12 == *(long **)(param_1 + 0x38)) {
LAB_0e2b3a10:
    puVar7 = &DAT_0f74ca00;
    if (iRam000000000f74ca60 != -0x2b3da790) goto LAB_0e2b3a7e;
LAB_0e2b3a3b:
    lVar18 = *(long *)(puVar7 + 0x68);
    if (lVar18 == 0) goto LAB_0e2b3a7e;
    bVar21 = (*(byte *)(lVar18 + 8) & 1) != 0;
    lVar13 = lVar18 + 9;
    if (bVar21) {
      lVar13 = *(long *)(lVar18 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar18 + 8) >> 1);
    if (bVar21) {
      uVar16 = *(ulong *)(lVar18 + 0x10);
    }
    func_0x0e300390(&lStack_230,param_1,lVar13,uVar16);
    lVar18 = lStack_230;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e2b3a3b;
LAB_0e2b3a7e:
    func_0x0e300390(&lStack_230,param_1,&UNK_011ff877,0xd);
    lVar18 = lStack_230;
  }
  if (cStack_200 != '\0') {
    return;
  }
  lStack_230 = lVar18;
  if ((DAT_0f74ca80 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74ca80), iVar5 != 0)) {
    func_0x0e2ff950();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74ca00,0xf53dab8);
    func_0x0410844d(&DAT_0f74ca80);
  }
  plVar12 = (long *)(*(long *)(lVar18 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar18 + 0x20) - *(long *)(lVar18 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f74ca00 + 4)) * 8);
  do {
    lVar13 = *plVar12;
    if (lVar13 == -1) goto LAB_0e2b3b10;
    plVar12 = (long *)(*(long *)(lVar18 + 0x30) + lVar13 * 0x18);
  } while (*(uint *)(*(long *)(lVar18 + 0x30) + 8 + lVar13 * 0x18) != *(uint *)(_DAT_0f74ca00 + 4));
  if (plVar12 == *(long **)(lVar18 + 0x38)) {
LAB_0e2b3b10:
    puVar7 = &DAT_0f74ca00;
  }
  else {
    puVar7 = (undefined *)plVar12[2];
  }
  for (pbVar8 = *(byte **)(lStack_230 + 0x50); pbVar8 != *(byte **)(lStack_230 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar3 = *pbVar8;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1a) goto LAB_0e2b3baa;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e2b3baa:
      if ((bVar3 & 1) == 0) {
        pbVar17 = pbVar8 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar8 + 0x10);
      }
      auVar22[0] = -(*pbVar17 == DAT_014eaba0);
      auVar22[1] = -(pbVar17[1] == DAT_014eaba0._1_1_);
      auVar22[2] = -(pbVar17[2] == DAT_014eaba0._2_1_);
      auVar22[3] = -(pbVar17[3] == DAT_014eaba0._3_1_);
      auVar22[4] = -(pbVar17[4] == DAT_014eaba0._4_1_);
      auVar22[5] = -(pbVar17[5] == DAT_014eaba0._5_1_);
      auVar22[6] = -(pbVar17[6] == DAT_014eaba0._6_1_);
      auVar22[7] = -(pbVar17[7] == DAT_014eaba0._7_1_);
      auVar22[8] = -(pbVar17[8] == DAT_014eaba0._8_1_);
      auVar22[9] = -(pbVar17[9] == DAT_014eaba0._9_1_);
      auVar22[10] = -(pbVar17[10] == DAT_014eaba0._10_1_);
      auVar22[0xb] = -(pbVar17[0xb] == DAT_014eaba0._11_1_);
      auVar22[0xc] = -(pbVar17[0xc] == DAT_014eaba0._12_1_);
      auVar22[0xd] = -(pbVar17[0xd] == DAT_014eaba0._13_1_);
      auVar22[0xe] = -(pbVar17[0xe] == DAT_014eaba0._14_1_);
      auVar22[0xf] = -(pbVar17[0xf] == DAT_014eaba0._15_1_);
      auVar23[0] = -(pbVar17[10] == DAT_014e4ff0);
      auVar23[1] = -(pbVar17[0xb] == DAT_014e4ff0._1_1_);
      auVar23[2] = -(pbVar17[0xc] == DAT_014e4ff0._2_1_);
      auVar23[3] = -(pbVar17[0xd] == DAT_014e4ff0._3_1_);
      auVar23[4] = -(pbVar17[0xe] == DAT_014e4ff0._4_1_);
      auVar23[5] = -(pbVar17[0xf] == DAT_014e4ff0._5_1_);
      auVar23[6] = -(pbVar17[0x10] == DAT_014e4ff0._6_1_);
      auVar23[7] = -(pbVar17[0x11] == DAT_014e4ff0._7_1_);
      auVar23[8] = -(pbVar17[0x12] == DAT_014e4ff0._8_1_);
      auVar23[9] = -(pbVar17[0x13] == DAT_014e4ff0._9_1_);
      auVar23[10] = -(pbVar17[0x14] == DAT_014e4ff0._10_1_);
      auVar23[0xb] = -(pbVar17[0x15] == DAT_014e4ff0._11_1_);
      auVar23[0xc] = -(pbVar17[0x16] == DAT_014e4ff0._12_1_);
      auVar23[0xd] = -(pbVar17[0x17] == DAT_014e4ff0._13_1_);
      auVar23[0xe] = -(pbVar17[0x18] == DAT_014e4ff0._14_1_);
      auVar23[0xf] = -(pbVar17[0x19] == DAT_014e4ff0._15_1_);
      auVar23 = auVar23 & auVar22;
      if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar8 == *(byte **)(lStack_230 + 0x58)) {
LAB_0e2b3bd8:
    uVar4 = uStack_204;
    if (iStack_208 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e2b3c69;
      lVar18 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)func_0x048aead0(lVar18 + 0x18);
      }
      auStack_378._0_8_ = func_0x048b0c90(lVar18 + 0x18,puVar7,uVar4,1);
      if (auStack_378._0_8_ == 0) {
        auStack_378 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_378);
        if (auStack_378._0_8_ == 0) goto LAB_0e2b3c69;
      }
      if ((*(int *)(auStack_378._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_378._0_8_ + 0x58) != 0)) {
        lVar18 = *(long *)(auStack_378._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0e2b3c69:
        lVar18 = 0;
      }
    }
    puStack_548 = &UNK_0488e0b0;
    pcStack_540 = (code *)0x0;
    uStack_538 = CONCAT35(uStack_538._5_3_,0x48b5725f);
    uStack_558 = 0;
    auStack_378 = (undefined1  [16])0x0;
    uStack_360 = (code *)&UNK_0488e0b0;
    pcStack_358 = (code *)0x0;
    uStack_350 = 0x48b5725f;
    cStack_34c = '\0';
    puStack_4e0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_4e0 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar15 = _UNK_013bbadf;
    puStack_4f0 = (undefined *)0x21;
    uStack_4e8 = 0x1a;
    *(ulong *)((long)puStack_4e0 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_4e0 + 0x12) = uVar15;
    uVar15 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_4e0 = _DAT_013bbacd;
    puStack_4e0[1] = uVar15;
    *(undefined1 *)((long)puStack_4e0 + 0x1a) = 0;
    puVar9 = (undefined *)FUN_048b5060(lVar18,&puStack_4f0);
    *(undefined8 *)(puVar9 + 0x20) = 0;
    if (puVar9 + 0x20 == auStack_378) {
      pcVar10 = (code *)0x0;
    }
    else {
      if (*(code **)(puVar9 + 0x40) != (code *)0x0) {
        puVar20 = (undefined8 *)(puVar9 + 0x28);
        (**(code **)(puVar9 + 0x40))(puVar20);
        if (cStack_34c != '\0') {
          if (cStack_34c == '\x02') {
            (*uStack_360)(5,auStack_378 + 8,puVar20);
          }
          else {
            uVar15 = auStack_378._8_8_;
            auStack_378._8_8_ = 0;
            *puVar20 = uVar15;
          }
        }
      }
      *(code **)(puVar9 + 0x38) = uStack_360;
      *(code **)(puVar9 + 0x40) = pcStack_358;
      *(undefined4 *)(puVar9 + 0x48) = uStack_350;
      puVar9[0x4c] = cStack_34c;
      pcVar10 = pcStack_358;
    }
    if (((ulong)puStack_4f0 & 1) != 0) {
      func_0x0412a280(puStack_4e0,(ulong)puStack_4f0 & 0xfffffffffffffffe);
      pcVar10 = pcStack_358;
    }
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(auStack_378 + 8);
    }
    if (pcStack_540 != (code *)0x0) {
      (*pcStack_540)(&uStack_558);
    }
  }
  else {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    puVar9 = (undefined *)0xffffffff;
    if ((DAT_0f550ad8 == '\0') &&
       (iVar6 = func_0x04108328(&DAT_0f550ad8), puVar9 = puVar7, iVar6 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 == _DAT_0f550ac4) goto LAB_0e2b3bd8;
  }
  cStack_1c8 = cStack_200;
  uStack_1d0 = CONCAT44(uStack_204,iStack_208);
  uStack_c8 = uStack_210;
  uStack_d8 = uStack_220;
  uStack_d0 = uStack_218;
  lStack_e8 = lStack_230;
  uStack_e0 = uStack_228;
  lStack_1f8 = lStack_230;
  uStack_1f0 = uStack_228;
  uStack_1e8 = uStack_220;
  uStack_1e0 = uStack_218;
  uStack_1d8 = uStack_210;
  func_0x0e300980(auStack_378,lStack_230 + 0x18);
  if (uStack_360._4_4_ == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != (int)uStack_360) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar18 = *(long *)(piVar11 + 0xc);
    while (lVar18 != auStack_378._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar18 = *(long *)(piVar11 + 0xc);
    }
LAB_0e2b3f3a:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (uStack_360._4_4_ == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_364,uStack_368) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_360) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e2b3f3a;
    }
    if (uStack_360._4_4_ == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_364,uStack_368) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e300f30(auStack_378,&lStack_1f8,&UNK_01391889,8,0x10);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f4b8120;
  if (uStack_360 != (code *)0x0) {
    lVar18 = *(long *)uStack_360;
    uStack_360 = (code *)plVar12;
    (**(code **)(lVar18 + 8))();
    plVar12 = (long *)uStack_360;
  }
  uStack_360 = (code *)plVar12;
  uStack_558 = CONCAT44(uStack_558._4_4_,uStack_368);
  uStack_550 = 0;
  puStack_548 = (undefined *)((ulong)puStack_548 & 0xffffffff00000000);
  pcStack_540 = (code *)0x1;
  uStack_538 = 0;
  puStack_530 = &UNK_0e3049f0;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &SUB_0e304400;
  puStack_518 = &UNK_0e304a00;
  puStack_510 = &UNK_0e304b60;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(auStack_378._8_8_,&uStack_558);
  plVar12 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4f8 + 1;
    lVar18 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      FUN_0412c2d0(plVar12);
    }
  }
  func_0x0e3011f0(auStack_378);
  cStack_278 = cStack_1c8;
  uStack_288 = uStack_1d8;
  uStack_280 = uStack_1d0;
  uStack_298 = uStack_1e8;
  uStack_290 = uStack_1e0;
  lStack_2a8 = lStack_1f8;
  uStack_2a0 = uStack_1f0;
  func_0x048b0bc0(&uStack_360);
  uStack_4d8 = 0xff;
  uStack_4e8 = 0xffffffffffffffff;
  puStack_4e0 = (undefined8 *)0x0;
  puStack_4f0 = &UNK_0f4e3aa0;
  lStack_4d0 = 0;
  lStack_4c8 = 0;
  lStack_4c0 = 0;
  lVar13 = func_0x0e2b5260(&puStack_4f0,&UNK_01e3fc20,5);
  uStack_4a8 = *(undefined1 *)(lVar13 + 0x18);
  uStack_4b8 = *(undefined8 *)(lVar13 + 8);
  uStack_4b0 = *(undefined8 *)(lVar13 + 0x10);
  lVar18 = *(long *)(lVar13 + 0x20);
  lVar13 = *(long *)(lVar13 + 0x28) - lVar18;
  if (lVar13 == 0) {
    lVar14 = 0;
    lVar19 = 0;
    if ((int)uStack_280 != 4) goto LAB_0e2b4180;
LAB_0e2b41d7:
    lVar18 = func_0x0e305110(&lStack_2a8);
    lVar18 = *(long *)(lVar18 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
LAB_0e2b420a:
    *(undefined1 *)(puVar20 + 3) = uStack_4a8;
    puVar20[1] = uStack_4b8;
    puVar20[2] = uStack_4b0;
    *puVar20 = &UNK_0f4e3aa0;
    puVar20[4] = lVar14;
    puVar20[5] = lVar19;
    puVar20[6] = lVar19;
    plVar12 = *(long **)(lVar18 + 8);
    *(undefined8 **)(lVar18 + 8) = puVar20;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x28))();
    }
    lVar14 = 0;
    lVar19 = 0;
  }
  else {
    if (lVar13 < 0) {
      uVar15 = func_0x0774b760();
      uVar15 = func_0x04882e20(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      func_0x0deb44c0(&puStack_458);
      func_0x04885660(apuStack_b0);
      puStack_498 = &UNK_0f489570;
      if (((char)uStack_460 == '\x01') && ((uStack_478 & 1) != 0)) {
        func_0x0412a280(uStack_468,uStack_478 & 0xfffffffffffffffe);
      }
      if (plVar12 != (long *)0x0) {
        func_0x0412a280(plVar12,(long)puVar9 - (long)plVar12);
      }
      puStack_4f0 = &UNK_0f4e3aa0;
      if (lStack_4d0 != 0) {
        lStack_4c8 = lStack_4d0;
        func_0x0412a280(lStack_4d0,lStack_4c0 - lStack_4d0);
      }
      uVar15 = func_0x0eee2d70(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      uVar15 = func_0x04882e20(uVar15);
      func_0x04882e20(uVar15);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
    if (lVar14 == 0) {
      func_0x0eec74c0(lVar13,0);
    }
    lVar19 = lVar14 + lVar13;
    func_0x0eee2f00(lVar14,lVar18,lVar13);
    if ((int)uStack_280 == 4) goto LAB_0e2b41d7;
LAB_0e2b4180:
    if ((int)uStack_280 == 1) {
      lVar18 = func_0x0e304fc0(&lStack_2a8);
      lVar18 = *(long *)(lVar18 + 0x58);
      puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar20 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      goto LAB_0e2b420a;
    }
  }
  cStack_178 = cStack_278;
  uStack_188 = uStack_288;
  uStack_180 = uStack_280;
  uStack_198 = uStack_298;
  uStack_190 = uStack_290;
  lStack_1a8 = lStack_2a8;
  uStack_1a0 = uStack_2a0;
  func_0x0e300f30(auStack_378,&lStack_1a8,&UNK_011d5876,5,0);
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar12 = (long)&UNK_0f0123c0;
  if (uStack_360 != (code *)0x0) {
    lVar18 = *(long *)uStack_360;
    uStack_360 = (code *)plVar12;
    (**(code **)(lVar18 + 8))();
    plVar12 = (long *)uStack_360;
  }
  uStack_360 = (code *)plVar12;
  uStack_558 = CONCAT44(uStack_558._4_4_,uStack_368);
  uStack_550 = 0;
  puStack_548 = (undefined *)((ulong)puStack_548 & 0xffffffff00000000);
  pcStack_540 = (code *)0x1;
  uStack_538 = 0;
  puStack_530 = &UNK_05e08030;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &UNK_05e07cf0;
  puStack_518 = &UNK_0e305290;
  puStack_510 = &UNK_0e305440;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(auStack_378._8_8_,&uStack_558);
  plVar12 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4f8 + 1;
    lVar18 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      FUN_0412c2d0(plVar12);
    }
  }
  func_0x0e3011f0(auStack_378);
  cStack_238 = cStack_178;
  uStack_248 = uStack_188;
  uStack_240 = uStack_180;
  uStack_258 = uStack_198;
  uStack_250 = uStack_190;
  lStack_268 = lStack_1a8;
  uStack_260 = uStack_1a0;
  func_0x048b0bc0(&uStack_360);
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_490 = 0xffffffffffffffff;
  uStack_488 = 0;
  uStack_480 = 0xff;
  puStack_498 = &UNK_0f489570;
  func_0x0d928aa0(apuStack_b0);
  uStack_450 = 0xffffffffffffffff;
  uStack_448 = 0;
  uStack_440 = 0xff;
  puStack_458 = &UNK_0f4a8968;
  func_0x0df65150(&puStack_438,&puStack_498,apuStack_b0);
  uStack_440 = 0xff;
  if ((int)uStack_240 == 4) {
    lVar18 = func_0x0e305110(&lStack_268);
    lVar18 = *(long *)(lVar18 + 0x48);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xe0,0);
    }
  }
  else {
    if ((int)uStack_240 != 1) goto LAB_0e2b469d;
    lVar18 = func_0x0e304fc0(&lStack_268);
    lVar18 = *(long *)(lVar18 + 0x58);
    puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xe0);
    if (puVar20 == (undefined8 *)0x0) {
      func_0x0eec74c0(0xe0,0);
    }
  }
  *(undefined1 *)(puVar20 + 3) = uStack_440;
  puVar20[1] = uStack_450;
  puVar20[2] = uStack_448;
  *puVar20 = &UNK_0f4a8968;
  puVar20[5] = uStack_430;
  puVar20[6] = uStack_428;
  *(undefined1 *)(puVar20 + 7) = uStack_420;
  puVar20[4] = &UNK_0f489570;
  *(undefined1 *)(puVar20 + 8) = 0;
  *(undefined1 *)(puVar20 + 0xb) = 0;
  if (cStack_400 == '\x01') {
    puVar20[10] = uStack_408;
    puVar20[8] = uStack_418;
    puVar20[9] = uStack_410;
    uStack_418 = 0;
    uStack_410 = 0;
    uStack_408 = 0;
    *(undefined1 *)(puVar20 + 0xb) = 1;
  }
  *(undefined1 *)(puVar20 + 0xf) = uStack_3e0;
  puVar20[0xd] = uStack_3f0;
  puVar20[0xe] = uStack_3e8;
  puVar20[0xc] = &UNK_0f4e3c70;
  func_0x04167a20(puVar20 + 0x10,auStack_3d8);
  puVar20[0x11] = uStack_3d0;
  puVar20[0x12] = uStack_3c8;
  puVar20[0x13] = uStack_3c0;
  puVar20[0x14] = uStack_3b8;
  puVar20[0x15] = uStack_3b0;
  puVar20[0x16] = plStack_3a8;
  uStack_3b0 = 0;
  plStack_3a8 = (long *)0x0;
  puVar20[0x17] = uStack_3a0;
  puVar20[0x1a] = uStack_388;
  puVar20[0x18] = uStack_398;
  puVar20[0x19] = uStack_390;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  puVar20[0x1b] = uStack_380;
  plVar12 = *(long **)(lVar18 + 8);
  *(undefined8 **)(lVar18 + 8) = puVar20;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x28))();
  }
LAB_0e2b469d:
  cStack_138 = cStack_238;
  uStack_148 = uStack_248;
  uStack_140 = uStack_240;
  uStack_158 = uStack_258;
  uStack_150 = uStack_250;
  lStack_168 = lStack_268;
  uStack_160 = uStack_260;
  auStack_378._0_8_ = 0x100;
  func_0x0470d9a0(&bStack_1c0,&UNK_0126bbd7,0x80,4,auStack_378);
  lStack_128 = lStack_168;
  uStack_120 = uStack_160;
  uStack_118 = uStack_158;
  uStack_110 = uStack_150;
  uStack_108 = uStack_148;
  uStack_100 = uStack_140;
  uStack_f8 = CONCAT71(uStack_137,cStack_138);
  func_0x0e300f30(auStack_378,&lStack_128,&UNK_0148af92,0x15,0);
  puVar20 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar20 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar20 = &UNK_0f0120f0;
  if (uStack_360 != (code *)0x0) {
    lVar18 = *(long *)uStack_360;
    uStack_360 = (code *)puVar20;
    (**(code **)(lVar18 + 8))();
    puVar20 = (undefined8 *)uStack_360;
  }
  uStack_360 = (code *)puVar20;
  uStack_558 = CONCAT44(uStack_558._4_4_,uStack_368);
  uStack_550 = 0;
  puStack_548 = (undefined *)((ulong)puStack_548 & 0xffffffff00000000);
  pcStack_540 = (code *)0x1;
  uStack_538 = 0;
  puStack_530 = &UNK_05de4ce0;
  puStack_528 = &SUB_048b06d0;
  puStack_520 = &UNK_05de49c0;
  puStack_518 = &UNK_0e305620;
  puStack_510 = &UNK_0e305780;
  uStack_508 = 0;
  uStack_500 = 0;
  plStack_4f8 = (long *)0x0;
  func_0x048b05a0(auStack_378._8_8_,&uStack_558);
  plVar12 = plStack_4f8;
  if (plStack_4f8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_4f8 + 1;
    lVar18 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_4f8 + 0x10))(plStack_4f8);
      FUN_0412c2d0(plVar12);
    }
  }
  func_0x0e3011f0(auStack_378);
  func_0x048b0bc0(&uStack_360);
  if ((bStack_1c0 & 1) != 0) {
    func_0x0412a280(uStack_1b0,CONCAT71(uStack_1bf,bStack_1c0) & 0xfffffffffffffffe);
  }
  puStack_458 = &UNK_0f4a8968;
  puStack_3f8 = &UNK_0f4e3c70;
  if ((uStack_398 & 1) != 0) {
    func_0x0412a280(uStack_388,uStack_398 & 0xfffffffffffffffe);
  }
  plVar12 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_3a8 + 1;
    lVar18 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_3a8 + 0x10))(plStack_3a8);
      FUN_0412c2d0(plVar12);
    }
  }
  FUN_04167a40(auStack_3d8);
  puStack_438 = &UNK_0f489570;
  if ((cStack_400 == '\x01') && ((uStack_418 & 1) != 0)) {
    func_0x0412a280(uStack_408,uStack_418 & 0xfffffffffffffffe);
  }
  apuStack_b0[0] = &UNK_0f4e3c70;
  if ((bStack_50 & 1) != 0) {
    func_0x0412a280(uStack_40,CONCAT71(uStack_4f,bStack_50) & 0xfffffffffffffffe);
  }
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_60 + 1;
    lVar18 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      FUN_0412c2d0(plStack_60);
    }
  }
  FUN_04167a40(auStack_90);
  puStack_498 = &UNK_0f489570;
  if (((char)uStack_460 == '\x01') && ((uStack_478 & 1) != 0)) {
    func_0x0412a280(uStack_468,uStack_478 & 0xfffffffffffffffe);
  }
  if (lVar14 != 0) {
    func_0x0412a280(lVar14,lVar19 - lVar14);
  }
  puStack_4f0 = &UNK_0f4e3aa0;
  if (lStack_4d0 != 0) {
    lStack_4c8 = lStack_4d0;
    func_0x0412a280(lStack_4d0,lStack_4c0 - lStack_4d0);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
