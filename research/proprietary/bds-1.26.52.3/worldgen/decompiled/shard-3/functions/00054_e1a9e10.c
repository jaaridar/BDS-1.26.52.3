/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2a9e10 (ELF vaddr 0xe1a9e10)
 * Label: caller-of-callee
 * Body:  [[0e2a9e10, 0e2aa251] [0e2aa260, 0e2aaa51] [0e2aaa60, 0e2ab4d2]]
 * Ghidra: FUN_0e2a9e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e2a9e10(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined1 auVar3 [8];
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  code *pcVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_5f8 [8];
  undefined8 uStack_5f0;
  long *plStack_5e8;
  undefined1 auStack_5e0 [8];
  code *pcStack_5d8;
  undefined1 auStack_5d0 [16];
  undefined1 auStack_5c0 [16];
  undefined1 auStack_5b0 [16];
  undefined1 auStack_5a0 [16];
  undefined1 auStack_590 [16];
  long lStack_580;
  long lStack_578;
  undefined4 uStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  undefined2 uStack_538;
  undefined2 uStack_536;
  uint uStack_534;
  uint uStack_530;
  undefined1 uStack_52c;
  ulong uStack_528;
  long *plStack_520;
  undefined8 *puStack_518;
  byte bStack_510;
  undefined7 uStack_50f;
  undefined1 uStack_508;
  undefined7 uStack_507;
  undefined1 uStack_500;
  undefined7 uStack_4ff;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  long *plStack_4e8;
  undefined1 uStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  long *plStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  long *plStack_468;
  code *pcStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined1 *puStack_448;
  undefined1 *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  long *plStack_418;
  long lStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  char cStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *puStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  int iStack_368;
  undefined4 uStack_364;
  char cStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  undefined1 uStack_340;
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
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
  long *plStack_228;
  undefined1 uStack_220;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined1 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0d8e82b0();
  auStack_590 = (undefined1  [16])0x0;
  auStack_5a0 = (undefined1  [16])0x0;
  auStack_5b0 = (undefined1  [16])0x0;
  auStack_5c0 = (undefined1  [16])0x0;
  auStack_5d0 = (undefined1  [16])0x0;
  lStack_580 = 0;
  plStack_5e8 = (long *)0x0;
  stack0xfffffffffffffa21 = SUB1615((undefined1  [16])0x0,1);
  auStack_5e0[0] = 0xff;
  auStack_5f8 = (undefined1  [8])&UNK_0f4e3c70;
  uStack_5f0 = 0xffffffffffffffff;
  func_0x041679a0(&pcStack_5d8);
  uVar6 = func_0x041681f0(&pcStack_5d8,0xf547a30);
  auStack_5d0._0_8_ = uVar6;
  uVar6 = func_0x041681f0(&pcStack_5d8,0xf547770);
  auStack_5d0._8_8_ = uVar6;
  auStack_5c0 = (undefined1  [16])0x0;
  auStack_5b0 = (undefined1  [16])0x0;
  auStack_5a0 = (undefined1  [16])0x0;
  auStack_590 = (undefined1  [16])0x0;
  lStack_580 = 0;
  bStack_510 = 0x1e;
  uStack_50f = 0x2b292e3a3f285e;
  uStack_508 = 0x3a;
  uStack_507 = 0x242b292e3a3f28;
  uStack_500 = 0;
  func_0x0ed60210(auStack_5f8,&bStack_510,0);
  uStack_4e0 = auStack_5e0[0];
  uStack_4f0 = uStack_5f0;
  plStack_4e8 = plStack_5e8;
  puStack_4f8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_4d8,&pcStack_5d8);
  uStack_4d0 = auStack_5d0._0_8_;
  uStack_4c8 = auStack_5d0._8_8_;
  uStack_4c0 = auStack_5c0._0_8_;
  uStack_4b8 = auStack_5c0._8_8_;
  uStack_4b0 = auStack_5b0._0_8_;
  plStack_4a8 = (long *)auStack_5b0._8_8_;
  if ((long *)auStack_5b0._8_8_ != (long *)0x0) {
    LOCK();
    *(long *)(auStack_5b0._8_8_ + 8) = *(long *)(auStack_5b0._8_8_ + 8) + 1;
    UNLOCK();
  }
  uStack_4a0 = auStack_5a0._0_8_;
  if ((auStack_5a0[8] & 1) == 0) {
    uStack_488 = auStack_590._8_8_;
    uStack_498 = auStack_5a0._8_8_;
    uStack_490 = auStack_590._0_8_;
  }
  else {
    func_0x0412e5e0(&uStack_498,auStack_590._8_8_,auStack_590._0_8_);
  }
  uStack_480 = lStack_580;
  if ((bStack_510 & 1) == 0) {
    auStack_5f8 = (undefined1  [8])&UNK_0f4e3c70;
    if ((auStack_5a0[8] & 1) != 0) goto LAB_0e2aa020;
LAB_0e2a9ff0:
    plVar10 = (long *)auStack_5b0._8_8_;
  }
  else {
    func_0x0412a280(CONCAT71(uStack_4ff,uStack_500),
                    CONCAT71(uStack_50f,bStack_510) & 0xfffffffffffffffe);
    auStack_5f8 = (undefined1  [8])&UNK_0f4e3c70;
    if ((auStack_5a0[8] & 1) == 0) goto LAB_0e2a9ff0;
LAB_0e2aa020:
    func_0x0412a280(auStack_590._8_8_,auStack_5a0._8_8_ & 0xfffffffffffffffe);
    plVar10 = (long *)auStack_5b0._8_8_;
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(&pcStack_5d8);
  if ((DAT_0f74c740 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74c740), iVar4 != 0)) {
    func_0x0e2e60a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74c6c0,0xf53dab8);
    func_0x0410844d(&DAT_0f74c740);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f74c6c0 + 4)) * 8);
  do {
    lVar15 = *plVar10;
    if (lVar15 == -1) goto LAB_0e2aa0d1;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar15 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar15 * 0x18) != *(uint *)(_DAT_0f74c6c0 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e2aa0d1:
    puVar7 = &DAT_0f74c6c0;
    if (iRam000000000f74c720 != -0x2b3da790) goto LAB_0e2aa13f;
LAB_0e2aa0fd:
    lVar15 = *(long *)(puVar7 + 0x68);
    if (lVar15 == 0) goto LAB_0e2aa13f;
    bVar17 = (*(byte *)(lVar15 + 8) & 1) != 0;
    lVar12 = lVar15 + 9;
    if (bVar17) {
      lVar12 = *(long *)(lVar15 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar15 + 8) >> 1);
    if (bVar17) {
      uVar11 = *(ulong *)(lVar15 + 0x10);
    }
    func_0x0e2eb690(&lStack_390,param_1,lVar12,uVar11);
    lVar15 = lStack_390;
  }
  else {
    puVar7 = (undefined *)plVar10[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0e2aa0fd;
LAB_0e2aa13f:
    func_0x0e2eb690(&lStack_390,param_1,&UNK_01237430,0x15);
    lVar15 = lStack_390;
  }
  if (cStack_360 != '\0') goto LAB_0e2ab242;
  lStack_390 = lVar15;
  if ((DAT_0f74c740 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74c740), iVar4 != 0)) {
    func_0x0e2e60a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74c6c0,0xf53dab8);
    func_0x0410844d(&DAT_0f74c740);
  }
  plVar10 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f74c6c0 + 4)) * 8);
  do {
    lVar12 = *plVar10;
    if (lVar12 == -1) goto LAB_0e2aa1d0;
    plVar10 = (long *)(*(long *)(lVar15 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f74c6c0 + 4));
  if (plVar10 == *(long **)(lVar15 + 0x38)) {
LAB_0e2aa1d0:
    puVar7 = &DAT_0f74c6c0;
  }
  else {
    puVar7 = (undefined *)plVar10[2];
  }
  for (pbVar8 = *(byte **)(lStack_390 + 0x50); pbVar8 != *(byte **)(lStack_390 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0e2aa26a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0e2aa26a:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar8 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar8 + 0x10);
      }
      auVar18[0] = -(*pbVar13 == DAT_014eaba0);
      auVar18[1] = -(pbVar13[1] == DAT_014eaba0._1_1_);
      auVar18[2] = -(pbVar13[2] == DAT_014eaba0._2_1_);
      auVar18[3] = -(pbVar13[3] == DAT_014eaba0._3_1_);
      auVar18[4] = -(pbVar13[4] == DAT_014eaba0._4_1_);
      auVar18[5] = -(pbVar13[5] == DAT_014eaba0._5_1_);
      auVar18[6] = -(pbVar13[6] == DAT_014eaba0._6_1_);
      auVar18[7] = -(pbVar13[7] == DAT_014eaba0._7_1_);
      auVar18[8] = -(pbVar13[8] == DAT_014eaba0._8_1_);
      auVar18[9] = -(pbVar13[9] == DAT_014eaba0._9_1_);
      auVar18[10] = -(pbVar13[10] == DAT_014eaba0._10_1_);
      auVar18[0xb] = -(pbVar13[0xb] == DAT_014eaba0._11_1_);
      auVar18[0xc] = -(pbVar13[0xc] == DAT_014eaba0._12_1_);
      auVar18[0xd] = -(pbVar13[0xd] == DAT_014eaba0._13_1_);
      auVar18[0xe] = -(pbVar13[0xe] == DAT_014eaba0._14_1_);
      auVar18[0xf] = -(pbVar13[0xf] == DAT_014eaba0._15_1_);
      auVar19[0] = -(pbVar13[10] == DAT_014e4ff0);
      auVar19[1] = -(pbVar13[0xb] == DAT_014e4ff0._1_1_);
      auVar19[2] = -(pbVar13[0xc] == DAT_014e4ff0._2_1_);
      auVar19[3] = -(pbVar13[0xd] == DAT_014e4ff0._3_1_);
      auVar19[4] = -(pbVar13[0xe] == DAT_014e4ff0._4_1_);
      auVar19[5] = -(pbVar13[0xf] == DAT_014e4ff0._5_1_);
      auVar19[6] = -(pbVar13[0x10] == DAT_014e4ff0._6_1_);
      auVar19[7] = -(pbVar13[0x11] == DAT_014e4ff0._7_1_);
      auVar19[8] = -(pbVar13[0x12] == DAT_014e4ff0._8_1_);
      auVar19[9] = -(pbVar13[0x13] == DAT_014e4ff0._9_1_);
      auVar19[10] = -(pbVar13[0x14] == DAT_014e4ff0._10_1_);
      auVar19[0xb] = -(pbVar13[0x15] == DAT_014e4ff0._11_1_);
      auVar19[0xc] = -(pbVar13[0x16] == DAT_014e4ff0._12_1_);
      auVar19[0xd] = -(pbVar13[0x17] == DAT_014e4ff0._13_1_);
      auVar19[0xe] = -(pbVar13[0x18] == DAT_014e4ff0._14_1_);
      auVar19[0xf] = -(pbVar13[0x19] == DAT_014e4ff0._15_1_);
      auVar19 = auVar19 & auVar18;
      if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar8 == *(byte **)(lStack_390 + 0x58)) {
LAB_0e2aa298:
    if (iStack_368 == 0) {
      if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0e2aa31c;
      lVar15 = *(long *)(puVar7 + 0x68) + 0x38;
    }
    else {
      if (puVar7 == (undefined *)0x0) {
        puVar7 = (undefined *)func_0x048aead0(lVar15 + 0x18);
      }
      auStack_5f8 = (undefined1  [8])func_0x048b0c90(lVar15 + 0x18,puVar7,uStack_364,1);
      if (auStack_5f8 == (undefined1  [8])0x0) {
        _auStack_5f8 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_5f8);
        if (auStack_5f8 == (undefined1  [8])0x0) goto LAB_0e2aa31c;
      }
      if ((*(int *)((long)auStack_5f8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_5f8 + 0x58) != 0)) {
        lVar15 = *(long *)((long)auStack_5f8 + 0x58) + 0x40;
      }
      else {
LAB_0e2aa31c:
        lVar15 = 0;
      }
    }
    plStack_468 = (long *)&UNK_0488e0b0;
    pcStack_460 = (code *)0x0;
    uStack_458 = CONCAT35(uStack_458._5_3_,0x48b5725f);
    uStack_478 = 0;
    _auStack_5f8 = (undefined1  [16])0x0;
    _auStack_5e0 = ZEXT816(0x488e0b0);
    auStack_5d0._0_5_ = 0x48b5725f;
    puStack_518 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_518 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar6 = _UNK_013bbadf;
    uStack_528 = 0x21;
    plStack_520 = (long *)0x1a;
    *(ulong *)((long)puStack_518 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_518 + 0x12) = uVar6;
    uVar6 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_518 = _DAT_013bbacd;
    puStack_518[1] = uVar6;
    *(undefined1 *)((long)puStack_518 + 0x1a) = 0;
    lVar15 = func_0x048b5060(lVar15,&uStack_528);
    *(undefined8 *)(lVar15 + 0x20) = 0;
    if ((undefined1 *)(lVar15 + 0x20) == auStack_5f8) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar15 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar15 + 0x28);
        (**(code **)(lVar15 + 0x40))(puVar16);
        if (auStack_5d0[4] != '\0') {
          if (auStack_5d0[4] == '\x02') {
            (*(code *)auStack_5e0)(5,auStack_5f8 + 8,puVar16);
          }
          else {
            uVar6 = uStack_5f0;
            uStack_5f0 = 0;
            *puVar16 = uVar6;
          }
        }
      }
      *(undefined1 (*) [8])(lVar15 + 0x38) = auStack_5e0;
      *(code **)(lVar15 + 0x40) = pcStack_5d8;
      *(undefined4 *)(lVar15 + 0x48) = auStack_5d0._0_4_;
      *(char *)(lVar15 + 0x4c) = auStack_5d0[4];
      pcVar9 = pcStack_5d8;
    }
    if ((uStack_528 & 1) != 0) {
      func_0x0412a280(puStack_518,uStack_528 & 0xfffffffffffffffe);
      pcVar9 = pcStack_5d8;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_5f8 + 8);
    }
    if (pcStack_460 != (code *)0x0) {
      (*pcStack_460)(&uStack_478);
    }
  }
  else {
    iVar4 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0e2aa298;
  }
  cStack_3d8 = cStack_360;
  uStack_48 = uStack_370;
  uStack_58 = uStack_380;
  uStack_50 = uStack_378;
  lStack_68 = lStack_390;
  uStack_60 = uStack_388;
  lStack_408 = lStack_390;
  uStack_400 = uStack_388;
  uStack_3f8 = uStack_380;
  uStack_3f0 = uStack_378;
  uStack_3e8 = uStack_370;
  if ((DAT_0f74c6a8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74c6a8), iVar4 != 0)) {
    func_0x0e2e5f20();
    func_0x0410844d(&DAT_0f74c6a8);
  }
  lVar15 = lStack_408;
  uStack_3e0 = 0x8d39bde600000001;
  if ((DAT_0f74c740 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74c740), iVar4 != 0)) {
    func_0x0e2e60a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f74c6c0,0xf53dab8);
    func_0x0410844d(&DAT_0f74c740);
  }
  plVar10 = (long *)(*(long *)(lVar15 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar15 + 0x20) - *(long *)(lVar15 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f74c6c0 + 4)) * 8);
  do {
    lVar12 = *plVar10;
    if (lVar12 == -1) goto LAB_0e2aa5c1;
    plVar10 = (long *)(*(long *)(lVar15 + 0x30) + lVar12 * 0x18);
  } while (*(uint *)(*(long *)(lVar15 + 0x30) + 8 + lVar12 * 0x18) != *(uint *)(_DAT_0f74c6c0 + 4));
  if (plVar10 == *(long **)(lVar15 + 0x38)) {
LAB_0e2aa5c1:
    auStack_5f8 = (undefined1  [8])&DAT_0f74c6c0;
  }
  else {
    auStack_5f8 = (undefined1  [8])plVar10[2];
  }
  uStack_5f0 = lVar15 + 0x18;
  func_0x0ed621a0(auStack_5f8,uStack_3e0._4_4_);
  auVar18 = auStack_5c0;
  auStack_5f8._0_2_ = 1;
  uStack_5f0 = (long)&uStack_400;
  plStack_5e8 = (long *)CONCAT44(plStack_5e8._4_4_,uStack_3e0._4_4_);
  _auStack_5e0 = ZEXT816(0);
  auStack_5d0 = ZEXT816(0);
  auStack_5c0._0_9_ = (unkuint9)8 << 0x40;
  auStack_5c0._9_4_ = 0x656d616e;
  auStack_5c0._14_2_ = auVar18._14_2_;
  auStack_5c0[0xd] = 0;
  auStack_5a0 = ZEXT816(0);
  auStack_590 = ZEXT816(0);
  lStack_580 = 0;
  lStack_578 = 0;
  uStack_570 = 0x3f600000;
  func_0x048afb10(auStack_5a0,8);
  lStack_548 = 0;
  lStack_540 = 0;
  lStack_558 = 0;
  lStack_550 = 0;
  lStack_568 = 0;
  lStack_560 = 0;
  uStack_538 = 0xff00;
  uStack_534 = uStack_534 & 0xffffff00;
  uStack_530 = uStack_530 & 0xffffff00;
  uStack_52c = 0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f490000;
  auVar3 = auStack_5e0;
  auStack_5e0 = (undefined1  [8])puVar16;
  if (auVar3 != (undefined1  [8])0x0) {
    (**(code **)(*(long *)auVar3 + 8))();
  }
  uStack_478 = CONCAT44(uStack_478._4_4_,plStack_5e8._0_4_);
  plStack_470 = (long *)0x0;
  plStack_468 = (long *)((ulong)plStack_468 & 0xffffffff00000000);
  pcStack_460 = (code *)0x1;
  uStack_458 = 0;
  puStack_450 = &UNK_0d9567f0;
  puStack_448 = &SUB_048b06d0;
  puStack_440 = &SUB_0d94b4c0;
  puStack_438 = &UNK_0e2ec1f0;
  puStack_430 = &UNK_0e2ec3b0;
  uStack_428 = 0;
  uStack_420 = 0;
  plStack_418 = (long *)0x0;
  FUN_048b05a0(uStack_5f0,&uStack_478);
  plVar10 = plStack_418;
  if (plStack_418 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_418 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_418 + 0x10))(plStack_418);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar15 = uStack_5f0;
  if ((DAT_0f550a20 == '\0') && (iVar4 = func_0x04108328(&DAT_0f550a20), iVar4 != 0)) {
    FUN_048b0af0(0xf550a08);
    func_0x0410844d(&DAT_0f550a20);
  }
  uStack_478 = CONCAT44(uStack_478._4_4_,_DAT_0f550a0c);
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
  if (plVar10 == (long *)0x0) {
    FUN_0eec74c0(0xd0,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef439d0;
  plStack_470 = plVar10 + 3;
  auVar3 = auStack_5e0;
  pcVar9 = pcStack_5d8;
  _auStack_5e0 = ZEXT816(0);
  plVar10[3] = (long)auVar3;
  plVar10[4] = (long)pcVar9;
  plVar10[7] = auStack_5c0._0_8_;
  plVar10[5] = auStack_5d0._0_8_;
  plVar10[6] = auStack_5d0._8_8_;
  auStack_5d0 = ZEXT816(0);
  plVar10[10] = auStack_5b0._8_8_;
  plVar10[8] = auStack_5c0._8_8_;
  plVar10[9] = auStack_5b0._0_8_;
  auStack_5c0 = ZEXT816(0);
  auStack_5b0 = ZEXT816(0);
  plVar10[0xb] = auStack_5a0._0_8_;
  plVar10[0xc] = auStack_5a0._8_8_;
  plVar10[0xd] = auStack_590._0_8_;
  auStack_5a0 = ZEXT816(0);
  plVar10[0xe] = auStack_590._8_8_;
  plVar10[0xf] = lStack_580;
  plVar10[0x10] = lStack_578;
  auStack_590 = ZEXT816(0);
  lStack_580 = 0;
  lStack_578 = 0;
  *(undefined4 *)(plVar10 + 0x11) = uStack_570;
  plVar10[0x12] = lStack_568;
  plVar10[0x13] = lStack_560;
  plVar10[0x14] = lStack_558;
  lStack_568 = 0;
  lStack_560 = 0;
  lStack_558 = 0;
  plVar10[0x17] = lStack_540;
  plVar10[0x15] = lStack_550;
  plVar10[0x16] = lStack_548;
  lStack_550 = 0;
  lStack_548 = 0;
  lStack_540 = 0;
  *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_52c,CONCAT43(uStack_530,uStack_534._1_3_));
  plVar10[0x18] = CONCAT44(uStack_534,CONCAT22(uStack_536,uStack_538));
  uStack_528 = 0;
  plStack_520 = (long *)0x0;
  plStack_468 = plVar10;
  func_0x048afd20(lVar15,&uStack_478);
  plVar10 = plStack_468;
  if (plStack_468 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_468 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_468 + 0x10))(plStack_468);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_520;
  if (plStack_520 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_520 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plStack_520 + 0x10))(plStack_520);
      func_0x0412c2d0(plVar10);
    }
  }
  lVar12 = *(long *)(lVar15 + 0x10);
  iVar4 = *(int *)(lVar15 + 0x1c);
  if (iVar4 == 2) {
    piVar14 = *(int **)(*(long *)(lVar12 + 0x78) + 0x60);
    iVar4 = *piVar14;
    while (iVar4 != *(int *)(lVar15 + 0x18)) {
      piVar14 = piVar14 + 0x16;
      iVar4 = *piVar14;
    }
    for (; *(long *)(piVar14 + 0xc) != *(long *)(lVar15 + 8); piVar14 = *(int **)(piVar14 + 0xe)) {
    }
LAB_0e2aaa6a:
    piVar14[4] = piVar14[4] | auStack_5f8._0_4_ << 0x10;
  }
  else {
    if (iVar4 == 1) {
      piVar14 = *(int **)(*(long *)(lVar12 + 0x78) + 0x48);
      iVar4 = *piVar14;
      while (iVar4 != *(int *)(lVar15 + 0x18)) {
        piVar14 = piVar14 + 0x1a;
        iVar4 = *piVar14;
      }
      goto LAB_0e2aaa6a;
    }
    if (iVar4 == 0) {
      *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | auStack_5f8._0_4_ << 0x10;
    }
  }
  cStack_e8 = cStack_3d8;
  uStack_f8 = uStack_3e8;
  uStack_f0 = uStack_3e0;
  uStack_108 = uStack_3f8;
  uStack_100 = uStack_3f0;
  lStack_118 = lStack_408;
  uStack_110 = uStack_400;
  func_0x048b0bc0(auStack_5e0);
  uStack_350 = uStack_4f0;
  plStack_348 = plStack_4e8;
  uStack_340 = uStack_4e0;
  puStack_358 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_338,auStack_4d8);
  uStack_330 = uStack_4d0;
  uStack_328 = uStack_4c8;
  uStack_320 = uStack_4c0;
  uStack_318 = uStack_4b8;
  uStack_310 = uStack_4b0;
  plStack_308 = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    LOCK();
    plStack_4a8[1] = plStack_4a8[1] + 1;
    UNLOCK();
  }
  uStack_300 = uStack_4a0;
  if ((uStack_498 & 1) == 0) {
    uStack_2e8 = uStack_488;
    uStack_2f8 = uStack_498;
    uStack_2f0 = uStack_490;
  }
  else {
    func_0x0412e5e0(&uStack_2f8,uStack_488,uStack_490);
  }
  uStack_2e0 = uStack_480;
  uStack_2d0 = 0xffffffffffffffff;
  uStack_2c8 = 0;
  uStack_2c0 = 0xff;
  puStack_2d8 = &UNK_0f4b47b0;
  uStack_2b0 = uStack_350;
  plStack_2a8 = plStack_348;
  uStack_2a0 = uStack_340;
  puStack_2b8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_298,auStack_338);
  uStack_290 = uStack_330;
  uStack_288 = uStack_328;
  uStack_280 = uStack_320;
  uStack_278 = uStack_318;
  uStack_270 = uStack_310;
  plStack_268 = plStack_308;
  uStack_310 = 0;
  plStack_308 = (long *)0x0;
  uStack_260 = uStack_300;
  uStack_248 = uStack_2e8;
  uStack_258 = uStack_2f8;
  uStack_250 = uStack_2f0;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_240 = uStack_2e0;
  func_0x0e2ab650(&uStack_a0,&lStack_118,&puStack_2d8);
  pcStack_3a8 = pcStack_80;
  uStack_398 = uStack_70;
  uStack_3b8 = uStack_90;
  puStack_3b0 = puStack_88;
  uStack_3c8 = uStack_a0;
  uStack_3c0 = uStack_98;
  uStack_3a0 = 0x1e1bc4d500000004;
  if ((DAT_0f74c6a8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f74c6a8), iVar4 != 0)) {
    func_0x0e2e5f20();
    func_0x0410844d(&DAT_0f74c6a8);
  }
  auStack_5f8._0_4_ = uStack_3a0._4_4_;
  uStack_5f0 = 0;
  plStack_5e8 = (long *)((ulong)plStack_5e8 & 0xffffffff00000000);
  pcStack_5d8 = (code *)&SUB_048aead0;
  auStack_5e0 = (undefined1  [8])0x1;
  auStack_5d0._8_8_ = &UNK_0e2ec590;
  auStack_5d0._0_8_ = &UNK_0e2ec580;
  auStack_5c0._0_12_ = ZEXT812(0);
  auStack_5b0 = ZEXT816(0);
  func_0x049057f0(&uStack_3c0,auStack_5f8);
  func_0x048aea50(auStack_5f8);
  plStack_468 = (long *)puStack_3b0;
  pcStack_460 = pcStack_3a8;
  uStack_478 = uStack_3c0;
  plStack_470 = (long *)uStack_3b8;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar16 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar16 = &UNK_0f490000;
  if ((DAT_0f551bc8 == '\0') && (iVar4 = func_0x04108328(&DAT_0f551bc8), iVar4 != 0)) {
    FUN_04905be0(0xf551bb0);
    func_0x0410844d(&DAT_0f551bc8);
  }
  auStack_5f8._0_4_ = _DAT_0f551bb4;
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar10 == (long *)0x0) {
    FUN_0eec74c0(0x30,0);
  }
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = (long)&UNK_0ef46c48;
  plVar10[3] = (long)puVar16;
  plVar10[4] = 0;
  *(undefined1 *)(plVar10 + 5) = 0xff;
  uStack_5f0 = (long)(plVar10 + 3);
  uStack_528 = 0;
  plStack_520 = (long *)0x0;
  plStack_5e8 = plVar10;
  func_0x048afd20(&uStack_478,auStack_5f8);
  plVar10 = plStack_5e8;
  if (plStack_5e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_5e8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_520;
  if (plStack_520 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_520 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_520 + 0x10))(plStack_520);
      func_0x0412c2d0(plVar10);
    }
  }
  uStack_d8 = uStack_3c8;
  uStack_d0 = uStack_3c0;
  uStack_c8 = uStack_3b8;
  puStack_c0 = puStack_3b0;
  pcStack_b8 = pcStack_3a8;
  uStack_b0 = uStack_3a0;
  uStack_a8 = uStack_398;
  uStack_230 = uStack_4f0;
  plStack_228 = plStack_4e8;
  uStack_220 = uStack_4e0;
  puStack_238 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_218,auStack_4d8);
  uStack_210 = uStack_4d0;
  uStack_208 = uStack_4c8;
  uStack_200 = uStack_4c0;
  uStack_1f8 = uStack_4b8;
  auStack_1f0._0_8_ = uStack_4b0;
  auStack_1f0._8_8_ = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    LOCK();
    plStack_4a8[1] = plStack_4a8[1] + 1;
    UNLOCK();
  }
  uStack_1e0 = uStack_4a0;
  if ((uStack_498 & 1) == 0) {
    uStack_1c8 = uStack_488;
    auStack_1d8._8_8_ = uStack_490;
    auStack_1d8._0_8_ = uStack_498;
  }
  else {
    func_0x0412e5e0(auStack_1d8,uStack_488,uStack_490);
  }
  uStack_1c0 = uStack_480;
  uStack_1b0 = 0xffffffffffffffff;
  uStack_1a8 = 0;
  uStack_1a0 = 0xff;
  puStack_1b8 = &UNK_0f4b47b0;
  uStack_190 = uStack_230;
  plStack_188 = plStack_228;
  uStack_180 = uStack_220;
  puStack_198 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_178,auStack_218);
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = auStack_1f0._0_8_;
  plStack_148 = (long *)auStack_1f0._8_8_;
  auStack_1f0 = (undefined1  [16])0x0;
  uStack_140 = uStack_1e0;
  uStack_128 = uStack_1c8;
  uStack_138 = auStack_1d8._0_8_;
  uStack_130 = auStack_1d8._8_8_;
  auStack_1d8 = (undefined1  [16])0x0;
  uStack_1c8 = 0;
  uStack_120 = uStack_1c0;
  func_0x0e2ab650(auStack_5f8,&uStack_d8,&puStack_1b8);
  puStack_1b8 = &UNK_0f4b47b0;
  puStack_198 = &UNK_0f4e3c70;
  if ((uStack_138 & 1) != 0) {
    func_0x0412a280(uStack_128,uStack_138 & 0xfffffffffffffffe);
  }
  plVar10 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_148 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(auStack_178);
  puStack_238 = &UNK_0f4e3c70;
  if ((auStack_1d8[0] & 1) != 0) {
    func_0x0412a280(uStack_1c8,auStack_1d8._0_8_ & 0xfffffffffffffffe);
  }
  uVar6 = auStack_1f0._8_8_;
  if ((long *)auStack_1f0._8_8_ != (long *)0x0) {
    LOCK();
    plVar10 = (long *)(auStack_1f0._8_8_ + 8);
    lVar15 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*(long *)auStack_1f0._8_8_ + 0x10))(auStack_1f0._8_8_);
      func_0x0412c2d0(uVar6);
    }
  }
  func_0x04167a40(auStack_218);
  puStack_2d8 = &UNK_0f4b47b0;
  puStack_2b8 = &UNK_0f4e3c70;
  if ((uStack_258 & 1) != 0) {
    func_0x0412a280(uStack_248,uStack_258 & 0xfffffffffffffffe);
  }
  plVar10 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_268 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(auStack_298);
  puStack_358 = &UNK_0f4e3c70;
  if ((uStack_2f8 & 1) != 0) {
    func_0x0412a280(uStack_2e8,uStack_2f8 & 0xfffffffffffffffe);
  }
  plVar10 = plStack_308;
  if (plStack_308 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_308 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_308 + 0x10))(plStack_308);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(auStack_338);
LAB_0e2ab242:
  puStack_4f8 = &UNK_0f4e3c70;
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  plVar10 = plStack_4a8;
  if (plStack_4a8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_4a8 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_4a8 + 0x10))(plStack_4a8);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x04167a40(auStack_4d8);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
