/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda5cd10 (ELF vaddr 0xd95cd10)
 * Label: caller-of-callee
 * Body:  [[0da5cd10, 0da5cfd1] [0da5cfe0, 0da5d8c1] [0da5d8d0, 0da5dcbd] [0da5dcc0, 0da5e16b] [0da5e170, 0da5e1a4] [0da5e1b0, 0da5ed08] [0da5ed10, 0da5f8aa]]
 * Ghidra: FUN_0da5cd10
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da5cd10(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte *pbVar10;
  undefined1 auVar11 [8];
  undefined8 *puVar12;
  long *plVar13;
  ulong *puVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  code *pcVar21;
  long lVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined *puStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  code *pcStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5d0;
  undefined1 *puStack_5c8;
  undefined1 *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined8 uStack_5a8;
  long lStack_5a0;
  long *plStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  undefined1 auStack_578 [8];
  long lStack_570;
  undefined *puStack_568;
  undefined8 uStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long lStack_540;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined2 uStack_52f;
  undefined1 uStack_52d;
  undefined4 uStack_52c;
  long *plStack_528;
  long lStack_520;
  ulong uStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined4 uStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined2 uStack_4b8;
  undefined2 uStack_4b6;
  uint uStack_4b4;
  uint uStack_4b0;
  undefined1 uStack_4ac;
  ulong uStack_4a0;
  undefined1 auStack_498 [16];
  undefined8 uStack_488;
  undefined2 uStack_480;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  undefined2 uStack_440;
  ulong uStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  byte bStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined2 uStack_40f;
  undefined5 uStack_40d;
  undefined8 *puStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  byte bStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined2 uStack_3cf;
  undefined8 uStack_3c8;
  byte bStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined2 uStack_3b7;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined1 auStack_388 [16];
  undefined8 uStack_378;
  ulong uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  long lStack_348;
  undefined1 auStack_340 [16];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  int iStack_2e8;
  undefined4 uStack_2e4;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined4 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined1 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [8];
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined1 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((DAT_0f7326d0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7326d0), iVar7 != 0)) {
    func_0x0daa4840();
    __cxa_atexit(&UNK_048ae800,&DAT_0f732650,0xf53dab8);
    func_0x0410844d(&DAT_0f7326d0);
  }
  lVar22 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732650 + 4)) * 8);
  do {
    lVar19 = *plVar13;
    if (lVar19 == -1) goto LAB_0da5cd90;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar19 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar19 * 0x18) != *(uint *)(_DAT_0f732650 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0da5cd90:
    puVar9 = &DAT_0f732650;
    if (iRam000000000f7326b0 != -0x2b3da790) goto LAB_0da5ce12;
LAB_0da5cdbb:
    lVar19 = *(long *)(puVar9 + 0x68);
    if (lVar19 == 0) goto LAB_0da5ce12;
    bVar23 = (*(byte *)(lVar19 + 8) & 1) != 0;
    lVar17 = lVar19 + 9;
    if (bVar23) {
      lVar17 = *(long *)(lVar19 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar19 + 8) >> 1);
    if (bVar23) {
      uVar16 = *(ulong *)(lVar19 + 0x10);
    }
    func_0x0daa4e40(&uStack_310,param_1,lVar17,uVar16);
    if ((char)puStack_2e0 != '\0') goto LAB_0da5cdf8;
LAB_0da5ce38:
    uVar16 = uStack_310;
    lStack_348 = 0x10028001a0001;
    uStack_68 = 0;
    uStack_268 = 0;
    auStack_498._8_8_ = 0x6974706972637365;
    auStack_498._0_8_ = 0x44676154696f5022;
    uStack_488 = 0x6e6f;
    uStack_480 = 0x1402;
    uStack_478 = 0x10028001a0001;
    puStack_470 = &UNK_01254d89;
    auStack_340 = (undefined1  [16])0x0;
    puStack_468 = &UNK_01254d89;
    lStack_230 = lVar22;
    if ((DAT_0f7326d0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7326d0), iVar7 != 0)) {
      func_0x0daa4840();
      __cxa_atexit(&UNK_048ae800,&DAT_0f732650,0xf53dab8);
      func_0x0410844d(&DAT_0f7326d0);
    }
    plVar13 = (long *)(*(long *)(uVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar16 + 0x20) - *(long *)(uVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f732650 + 4)) * 8);
    do {
      lVar22 = *plVar13;
      if (lVar22 == -1) goto LAB_0da5cf50;
      plVar13 = (long *)(*(long *)(uVar16 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(uVar16 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f732650 + 4)
            );
    if (plVar13 == *(long **)(uVar16 + 0x38)) {
LAB_0da5cf50:
      puVar9 = &DAT_0f732650;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(uStack_310 + 0x50); pbVar10 != *(byte **)(uStack_310 + 0x58);
        pbVar10 = pbVar10 + 0x38) {
      bVar2 = *pbVar10;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0da5cfea;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1d) {
LAB_0da5cfea:
        if ((bVar2 & 1) == 0) {
          pbVar18 = pbVar10 + 1;
        }
        else {
          pbVar18 = *(byte **)(pbVar10 + 0x10);
        }
        auVar24[0] = -(*pbVar18 == DAT_014e4030);
        auVar24[1] = -(pbVar18[1] == DAT_014e4030._1_1_);
        auVar24[2] = -(pbVar18[2] == DAT_014e4030._2_1_);
        auVar24[3] = -(pbVar18[3] == DAT_014e4030._3_1_);
        auVar24[4] = -(pbVar18[4] == DAT_014e4030._4_1_);
        auVar24[5] = -(pbVar18[5] == DAT_014e4030._5_1_);
        auVar24[6] = -(pbVar18[6] == DAT_014e4030._6_1_);
        auVar24[7] = -(pbVar18[7] == DAT_014e4030._7_1_);
        auVar24[8] = -(pbVar18[8] == DAT_014e4030._8_1_);
        auVar24[9] = -(pbVar18[9] == DAT_014e4030._9_1_);
        auVar24[10] = -(pbVar18[10] == DAT_014e4030._10_1_);
        auVar24[0xb] = -(pbVar18[0xb] == DAT_014e4030._11_1_);
        auVar24[0xc] = -(pbVar18[0xc] == DAT_014e4030._12_1_);
        auVar24[0xd] = -(pbVar18[0xd] == DAT_014e4030._13_1_);
        auVar24[0xe] = -(pbVar18[0xe] == DAT_014e4030._14_1_);
        auVar24[0xf] = -(pbVar18[0xf] == DAT_014e4030._15_1_);
        auVar25[0] = -(pbVar18[0xd] == DAT_014e1610);
        auVar25[1] = -(pbVar18[0xe] == DAT_014e1610._1_1_);
        auVar25[2] = -(pbVar18[0xf] == DAT_014e1610._2_1_);
        auVar25[3] = -(pbVar18[0x10] == DAT_014e1610._3_1_);
        auVar25[4] = -(pbVar18[0x11] == DAT_014e1610._4_1_);
        auVar25[5] = -(pbVar18[0x12] == DAT_014e1610._5_1_);
        auVar25[6] = -(pbVar18[0x13] == DAT_014e1610._6_1_);
        auVar25[7] = -(pbVar18[0x14] == DAT_014e1610._7_1_);
        auVar25[8] = -(pbVar18[0x15] == DAT_014e1610._8_1_);
        auVar25[9] = -(pbVar18[0x16] == DAT_014e1610._9_1_);
        auVar25[10] = -(pbVar18[0x17] == DAT_014e1610._10_1_);
        auVar25[0xb] = -(pbVar18[0x18] == DAT_014e1610._11_1_);
        auVar25[0xc] = -(pbVar18[0x19] == DAT_014e1610._12_1_);
        auVar25[0xd] = -(pbVar18[0x1a] == DAT_014e1610._13_1_);
        auVar25[0xe] = -(pbVar18[0x1b] == DAT_014e1610._14_1_);
        auVar25[0xf] = -(pbVar18[0x1c] == DAT_014e1610._15_1_);
        auVar25 = auVar25 & auVar24;
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar10 == *(byte **)(uStack_310 + 0x58)) {
LAB_0da5d01d:
      uVar5 = uStack_2e4;
      if (iStack_2e8 == 0) {
        if (((puVar9 == (undefined *)0x0) || (*(int *)(puVar9 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar9 + 0x68) == 0)) goto LAB_0da5d0ae;
        lVar22 = *(long *)(puVar9 + 0x68) + 0x38;
      }
      else {
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)func_0x048aead0(uVar16 + 0x18);
        }
        auVar11 = (undefined1  [8])FUN_048b0c90(uVar16 + 0x18,puVar9,uVar5,1);
        if (auVar11 == (undefined1  [8])0x0) {
          _auStack_578 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_578);
          auVar11 = auStack_578;
          if (auStack_578 == (undefined1  [8])0x0) goto LAB_0da5d0ae;
        }
        if ((*(int *)((long)auVar11 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auVar11 + 0x58) != 0)) {
          lVar22 = *(long *)((long)auVar11 + 0x58) + 0x40;
        }
        else {
LAB_0da5d0ae:
          lVar22 = 0;
        }
      }
      puStack_5f8 = (undefined *)0x0;
      plStack_5e8 = (long *)&UNK_048b4ab0;
      pcStack_5e0 = (code *)&UNK_048b49f0;
      uStack_5d8 = CONCAT35(uStack_5d8._5_3_,0x1d33bd9c5);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      puVar12[2] = uStack_488;
      *puVar12 = auStack_498._0_8_;
      puVar12[1] = auStack_498._8_8_;
      auStack_498 = (undefined1  [16])0x0;
      uStack_488 = 0;
      *(undefined2 *)(puVar12 + 3) = uStack_480;
      puVar12[4] = uStack_478;
      puVar12[5] = puStack_470;
      puStack_470 = (undefined *)0x0;
      puVar12[6] = puStack_468;
      puStack_468 = (undefined *)0x0;
      uStack_560 = (code *)&UNK_048b4ab0;
      pcStack_558 = (code *)&UNK_048b49f0;
      uStack_550 = CONCAT35(uStack_550._5_3_,0x1d33bd9c5);
      puStack_5f8 = (undefined *)0x0;
      lStack_570 = (long)puVar12;
      auStack_578 = (undefined1  [8])&UNK_048b46e0;
      puStack_408 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_408 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_014d987e;
      bStack_418 = 0x21;
      uStack_417 = 0;
      uStack_410 = 0x1d;
      uStack_40f = 0;
      uStack_40d = 0;
      *(ulong *)((long)puStack_408 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puStack_408 + 0x15) = uVar3;
      uVar3 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puStack_408 = _DAT_014d9869;
      puStack_408[1] = uVar3;
      *(undefined1 *)((long)puStack_408 + 0x1d) = 0;
      lVar22 = func_0x048b5060(lVar22,&bStack_418);
      *(undefined **)(lVar22 + 0x20) = &UNK_048b46e0;
      pcVar21 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar22 + 0x20) != auStack_578) {
        puVar12 = (undefined8 *)(lVar22 + 0x28);
        if (*(code **)(lVar22 + 0x40) == (code *)0x0) {
LAB_0da5d29c:
          lVar19 = lStack_570;
          lStack_570 = 0;
          *puVar12 = lVar19;
        }
        else {
          (**(code **)(lVar22 + 0x40))(puVar12);
          if (uStack_550._4_1_ != '\0') {
            if (uStack_550._4_1_ != '\x02') goto LAB_0da5d29c;
            (*uStack_560)(5,auStack_578 + 8,puVar12);
          }
        }
        *(code **)(lVar22 + 0x38) = uStack_560;
        *(code **)(lVar22 + 0x40) = pcStack_558;
        *(undefined4 *)(lVar22 + 0x48) = (undefined4)uStack_550;
        *(char *)(lVar22 + 0x4c) = uStack_550._4_1_;
        pcVar21 = pcStack_558;
      }
      if ((bStack_418 & 1) != 0) {
        func_0x0412a280(puStack_408,CONCAT71(uStack_417,bStack_418) & 0xfffffffffffffffe);
        pcVar21 = pcStack_558;
      }
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(auStack_578 + 8);
      }
      if (pcStack_5e0 != (code *)0x0) {
        (*pcStack_5e0)(&puStack_5f8);
      }
    }
    else {
      iVar7 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550768), iVar8 != 0)) {
        func_0x048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar7 == _DAT_0f550754) goto LAB_0da5d01d;
    }
    uStack_378 = puStack_2e0;
    auStack_388._8_4_ = iStack_2e8;
    auStack_388._0_8_ = uStack_2f0;
    auStack_388._12_4_ = uStack_2e4;
    puStack_398 = puStack_300;
    uStack_390 = uStack_2f8;
    uStack_3a8 = uStack_310;
    uStack_3a0 = uStack_308;
    uVar3 = uStack_2f0;
    if (DAT_0f7326f0 == '\0') {
      iVar7 = FUN_04108328(&DAT_0f7326f0);
      uVar3 = auStack_388._0_8_;
      if (iVar7 != 0) {
        func_0x0daa4950();
        func_0x0410844d(&DAT_0f7326f0);
        uVar3 = auStack_388._0_8_;
      }
    }
    auStack_388._0_8_ = uVar3;
    uVar16 = uStack_3a8;
    auStack_388._8_8_ = 0x28a5a83e00000001;
    if ((DAT_0f7326d0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7326d0), iVar7 != 0)) {
      func_0x0daa4840();
      __cxa_atexit(&UNK_048ae800,&DAT_0f732650,0xf53dab8);
      func_0x0410844d(&DAT_0f7326d0);
    }
    plVar13 = (long *)(*(long *)(uVar16 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar16 + 0x20) - *(long *)(uVar16 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f732650 + 4)) * 8);
    do {
      lVar22 = *plVar13;
      if (lVar22 == -1) goto LAB_0da5d400;
      plVar13 = (long *)(*(long *)(uVar16 + 0x30) + lVar22 * 0x18);
    } while (*(uint *)(*(long *)(uVar16 + 0x30) + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f732650 + 4)
            );
    if (plVar13 == *(long **)(uVar16 + 0x38)) {
LAB_0da5d400:
      auStack_578 = (undefined1  [8])&DAT_0f732650;
    }
    else {
      auStack_578 = (undefined1  [8])plVar13[2];
    }
    lStack_570 = uVar16 + 0x18;
    func_0x0ed621a0(auStack_578,auStack_388._12_4_);
    auStack_578._0_2_ = 1;
    lStack_570 = (long)&uStack_3a0;
    puStack_568 = (undefined *)CONCAT44(puStack_568._4_4_,auStack_388._12_4_);
    uStack_560 = (code *)0x0;
    pcStack_558 = (code *)0x0;
    uStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    uStack_538 = 0x14;
    uStack_537 = 0x6669746e656469;
    uStack_530 = 0x69;
    uStack_52f = 0x7265;
    uStack_52d = 0;
    lStack_520 = 0;
    uStack_518 = 0;
    lStack_510 = 0;
    lStack_508 = 0;
    lStack_500 = 0;
    lStack_4f8 = 0;
    uStack_4f0 = 0x3f600000;
    func_0x048afb10(&lStack_520,8);
    lStack_4c8 = 0;
    lStack_4c0 = 0;
    lStack_4d8 = 0;
    lStack_4d0 = 0;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    uStack_4b8 = 0xff00;
    uStack_4b4 = uStack_4b4 & 0xffffff00;
    uStack_4b0 = uStack_4b0 & 0xffffff00;
    uStack_4ac = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    if (uStack_560 != (code *)0x0) {
      lVar22 = *(long *)uStack_560;
      uStack_560 = (code *)puVar12;
      (**(code **)(lVar22 + 8))();
      puVar12 = (undefined8 *)uStack_560;
    }
    uStack_560 = (code *)puVar12;
    puStack_5f8 = (undefined *)CONCAT44(puStack_5f8._4_4_,puStack_568._0_4_);
    plStack_5f0 = (long *)0x0;
    plStack_5e8 = (long *)((ulong)plStack_5e8 & 0xffffffff00000000);
    pcStack_5e0 = (code *)0x1;
    uStack_5d8 = 0;
    puStack_5d0 = &UNK_048b3f30;
    puStack_5c8 = &SUB_048b06d0;
    puStack_5c0 = &SUB_048b2190;
    puStack_5b8 = &UNK_0daa59a0;
    puStack_5b0 = &UNK_0daa5b60;
    uStack_5a8 = (long *)((ulong)uStack_5a8._4_4_ << 0x20);
    lStack_5a0 = 0;
    plStack_598 = (long *)0x0;
    func_0x048b05a0(lStack_570,&puStack_5f8);
    plVar13 = plStack_598;
    if (plStack_598 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_598 + 1;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_598 + 0x10))(plStack_598);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar22 = lStack_570;
    if ((DAT_0f550a20 == '\0') && (iVar7 = FUN_04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    puStack_5f8 = (undefined *)CONCAT44(puStack_5f8._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar21 = pcStack_558;
    puVar12 = (undefined8 *)uStack_560;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_5f0 = plVar13 + 3;
    uStack_560 = (code *)0x0;
    pcStack_558 = (code *)0x0;
    plVar13[3] = (long)puVar12;
    plVar13[4] = (long)pcVar21;
    plVar13[7] = lStack_540;
    plVar13[5] = uStack_550;
    plVar13[6] = lStack_548;
    uStack_550 = 0;
    lStack_548 = 0;
    lStack_540 = 0;
    plVar13[10] = (long)plStack_528;
    plVar13[8] = CONCAT71(uStack_537,uStack_538);
    plVar13[9] = CONCAT44(uStack_52c,CONCAT13(uStack_52d,CONCAT21(uStack_52f,uStack_530)));
    uStack_538 = 0;
    uStack_537 = 0;
    uStack_530 = 0;
    uStack_52f = 0;
    uStack_52d = 0;
    uStack_52c = 0;
    plStack_528 = (long *)0x0;
    plVar13[0xb] = lStack_520;
    plVar13[0xc] = uStack_518;
    plVar13[0xd] = lStack_510;
    lStack_520 = 0;
    uStack_518 = 0;
    lStack_510 = 0;
    plVar13[0xe] = lStack_508;
    plVar13[0xf] = lStack_500;
    plVar13[0x10] = lStack_4f8;
    lStack_508 = 0;
    lStack_500 = 0;
    lStack_4f8 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_4f0;
    plVar13[0x12] = lStack_4e8;
    plVar13[0x13] = lStack_4e0;
    plVar13[0x14] = lStack_4d8;
    lStack_4e8 = 0;
    lStack_4e0 = 0;
    lStack_4d8 = 0;
    plVar13[0x17] = lStack_4c0;
    plVar13[0x15] = lStack_4d0;
    plVar13[0x16] = lStack_4c8;
    lStack_4d0 = 0;
    lStack_4c8 = 0;
    lStack_4c0 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_4ac,CONCAT43(uStack_4b0,uStack_4b4._1_3_));
    plVar13[0x18] = CONCAT44(uStack_4b4,CONCAT22(uStack_4b6,uStack_4b8));
    bStack_418 = 0;
    uStack_417 = 0;
    uStack_410 = 0;
    uStack_40f = 0;
    uStack_40d = 0;
    plStack_5e8 = plVar13;
    func_0x048afd20(lVar22,&puStack_5f8);
    plVar13 = plStack_5e8;
    if (plStack_5e8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5e8 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)CONCAT53(uStack_40d,CONCAT21(uStack_40f,uStack_410));
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar19 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar16 = uStack_3a8;
    lVar19 = *(long *)(lVar22 + 0x10);
    iVar7 = *(int *)(lVar22 + 0x1c);
    if (iVar7 == 2) {
      piVar15 = *(int **)(*(long *)(lVar19 + 0x78) + 0x60);
      iVar7 = *piVar15;
      while (iVar7 != *(int *)(lVar22 + 0x18)) {
        piVar15 = piVar15 + 0x16;
        iVar7 = *piVar15;
      }
      for (; *(long *)(piVar15 + 0xc) != *(long *)(lVar22 + 8); piVar15 = *(int **)(piVar15 + 0xe))
      {
      }
LAB_0da5d8da:
      piVar15[4] = piVar15[4] | auStack_578._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar15 = *(int **)(*(long *)(lVar19 + 0x78) + 0x48);
        iVar7 = *piVar15;
        while (iVar7 != *(int *)(lVar22 + 0x18)) {
          piVar15 = piVar15 + 0x1a;
          iVar7 = *piVar15;
        }
        goto LAB_0da5d8da;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar19 + 0x18) = *(uint *)(lVar19 + 0x18) | auStack_578._0_4_ << 0x10;
      }
    }
    uVar5 = auStack_388._8_4_;
    uVar6 = auStack_388._12_4_;
    func_0x048b0bc0(&uStack_560);
    uStack_5d8 = 0;
    lStack_590 = 0;
    lStack_588 = 0;
    lStack_5a0 = 0;
    plStack_598 = (long *)0x0;
    puStack_5b0 = (undefined *)0x0;
    uStack_5a8 = (long *)0x0;
    puStack_5c0 = (undefined1 *)0x0;
    puStack_5b8 = (undefined *)0x0;
    puStack_5d0 = (undefined *)0x0;
    puStack_5c8 = (undefined1 *)0x0;
    lStack_580 = 0;
    plStack_5f0 = (long *)0xffffffffffffffff;
    plStack_5e8 = (long *)0x0;
    pcStack_5e0 = (code *)0xff;
    puStack_5f8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_5d8);
    puStack_5d0 = (undefined *)FUN_041681f0(&uStack_5d8,0xf547a30);
    puStack_5c8 = (undefined1 *)FUN_041681f0(&uStack_5d8,0xf547770);
    puStack_5c0 = (undefined1 *)0x0;
    puStack_5b8 = (undefined *)0x0;
    puStack_5b0 = (undefined *)0x0;
    uStack_5a8 = (long *)0x0;
    lStack_5a0 = 0;
    plStack_598 = (long *)0x0;
    lStack_590 = 0;
    lStack_588 = 0;
    lStack_580 = 0;
    bStack_418 = 0x12;
    uStack_417 = 0x775c3a2b775c5e;
    uStack_410 = 0x2b;
    uStack_40f = 0x24;
    func_0x0ed60210(&puStack_5f8,&bStack_418,0);
    uStack_560 = (code *)CONCAT71(uStack_560._1_7_,pcStack_5e0._0_1_);
    puStack_568 = (undefined *)plStack_5e8;
    lStack_570 = (long)plStack_5f0;
    auStack_578 = (undefined1  [8])&UNK_0f4e3c70;
    FUN_04167a20(&pcStack_558,&uStack_5d8);
    uStack_550 = (long)puStack_5d0;
    lStack_548 = (long)puStack_5c8;
    lStack_540 = (long)puStack_5c0;
    uStack_538 = SUB81(puStack_5b8,0);
    uStack_537 = (undefined7)((ulong)puStack_5b8 >> 8);
    uStack_530 = SUB81(puStack_5b0,0);
    uStack_52f = (undefined2)((ulong)puStack_5b0 >> 8);
    uStack_52d = (undefined1)((ulong)puStack_5b0 >> 0x18);
    uStack_52c = (undefined4)((ulong)puStack_5b0 >> 0x20);
    plStack_528 = uStack_5a8;
    if (uStack_5a8 != (long *)0x0) {
      LOCK();
      uStack_5a8[1] = uStack_5a8[1] + 1;
      UNLOCK();
    }
    lStack_520 = lStack_5a0;
    if (((ulong)plStack_598 & 1) == 0) {
      lStack_508 = lStack_588;
      uStack_518 = (ulong)plStack_598;
      lStack_510 = lStack_590;
    }
    else {
      func_0x0412e5e0(&uStack_518,lStack_588,lStack_590);
    }
    lStack_500 = lStack_580;
    if (uVar5 == 4) {
      if ((DAT_0f7326d0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7326d0), iVar7 != 0)) {
        func_0x0daa4840();
        __cxa_atexit(&UNK_048ae800,&DAT_0f732650,0xf53dab8);
        func_0x0410844d(&DAT_0f7326d0);
      }
      plVar13 = (long *)(*(long *)(uVar16 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar16 + 0x20) - *(long *)(uVar16 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f732650 + 4)) * 8);
      do {
        lVar22 = *plVar13;
        if (lVar22 == -1) goto LAB_0da5dba9;
        plVar13 = (long *)(*(long *)(uVar16 + 0x30) + lVar22 * 0x18);
      } while (*(uint *)(*(long *)(uVar16 + 0x30) + 8 + lVar22 * 0x18) !=
               *(uint *)(_DAT_0f732650 + 4));
      if (plVar13 == *(long **)(uVar16 + 0x38)) {
LAB_0da5dba9:
        puVar9 = &DAT_0f732650;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar22 = func_0x048b1040(uVar16 + 0x18,puVar9,uVar6,1);
      if (lVar22 == 0) {
        lStack_2a8 = 0;
        uStack_2a0 = 0;
        func_0x048b10d0(&lStack_2a8);
        lVar19 = *(long *)(lStack_2a8 + 0x38);
        lVar22 = lStack_2a8;
        if (lVar19 == 0) goto LAB_0da5dc8f;
LAB_0da5dcb4:
        do {
          lVar22 = lVar19;
          lVar19 = *(long *)(lVar22 + 0x38);
          if (*(long *)(lVar22 + 0x38) == 0) {
            lStack_2a8 = 0;
            uStack_2a0 = 0;
            func_0x048b10d0(&lStack_2a8);
            lVar19 = lStack_2a8;
          }
        } while (lVar19 != 0);
      }
      else {
        lVar19 = *(long *)(lVar22 + 0x38);
        if (*(long *)(lVar22 + 0x38) != 0) goto LAB_0da5dcb4;
LAB_0da5dc8f:
        lStack_2a8 = 0;
        uStack_2a0 = 0;
        func_0x048b10d0(&lStack_2a8);
        lVar19 = lStack_2a8;
        if (lStack_2a8 != 0) goto LAB_0da5dcb4;
      }
      lVar22 = *(long *)(lVar22 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0da5dd15:
      *(undefined1 *)(puVar12 + 3) = (undefined1)uStack_560;
      puVar12[1] = lStack_570;
      puVar12[2] = puStack_568;
      *puVar12 = &UNK_0f4e3c70;
      FUN_04167a20(puVar12 + 4,&pcStack_558);
      puVar12[5] = uStack_550;
      puVar12[6] = lStack_548;
      puVar12[7] = lStack_540;
      puVar12[8] = CONCAT71(uStack_537,uStack_538);
      puVar12[9] = CONCAT44(uStack_52c,CONCAT13(uStack_52d,CONCAT21(uStack_52f,uStack_530)));
      puVar12[10] = plStack_528;
      uStack_530 = 0;
      uStack_52f = 0;
      uStack_52d = 0;
      uStack_52c = 0;
      plStack_528 = (long *)0x0;
      puVar12[0xb] = lStack_520;
      puVar12[0xe] = lStack_508;
      puVar12[0xc] = uStack_518;
      puVar12[0xd] = lStack_510;
      uStack_518 = 0;
      lStack_510 = 0;
      lStack_508 = 0;
      puVar12[0xf] = lStack_500;
      plVar13 = *(long **)(lVar22 + 8);
      *(undefined8 **)(lVar22 + 8) = puVar12;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (uVar5 == 1) {
      if ((DAT_0f7326d0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f7326d0), iVar7 != 0)) {
        func_0x0daa4840();
        __cxa_atexit(&UNK_048ae800,&DAT_0f732650,0xf53dab8);
        func_0x0410844d(&DAT_0f7326d0);
      }
      plVar13 = (long *)(*(long *)(uVar16 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar16 + 0x20) - *(long *)(uVar16 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f732650 + 4)) * 8);
      do {
        lVar22 = *plVar13;
        if (lVar22 == -1) goto LAB_0da5db29;
        plVar13 = (long *)(*(long *)(uVar16 + 0x30) + lVar22 * 0x18);
      } while (*(uint *)(*(long *)(uVar16 + 0x30) + 8 + lVar22 * 0x18) !=
               *(uint *)(_DAT_0f732650 + 4));
      if (plVar13 == *(long **)(uVar16 + 0x38)) {
LAB_0da5db29:
        puVar9 = &DAT_0f732650;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar22 = FUN_048b0c90(uVar16 + 0x18,puVar9,uVar6,1);
      if (lVar22 == 0) {
        lStack_2a8 = 0;
        uStack_2a0 = 0;
        func_0x048b0d20(&lStack_2a8);
        lVar22 = lStack_2a8;
      }
      lVar22 = *(long *)(lVar22 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0da5dd15;
    }
    auStack_578 = (undefined1  [8])&UNK_0f4e3c70;
    if ((uStack_518 & 1) != 0) {
      func_0x0412a280(lStack_508,uStack_518 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_528;
    if (plStack_528 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_528 + 1;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_528 + 0x10))(plStack_528);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&pcStack_558);
    if ((bStack_418 & 1) == 0) {
      if (((ulong)plStack_598 & 1) == 0) goto LAB_0da5de49;
LAB_0da5de79:
      puStack_5f8 = &UNK_0f4e3c70;
      func_0x0412a280(lStack_588,(ulong)plStack_598 & 0xfffffffffffffffe);
      plVar13 = uStack_5a8;
    }
    else {
      func_0x0412a280(puStack_408,CONCAT71(uStack_417,bStack_418) & 0xfffffffffffffffe);
      if (((ulong)plStack_598 & 1) != 0) goto LAB_0da5de79;
LAB_0da5de49:
      puStack_5f8 = &UNK_0f4e3c70;
      plVar13 = uStack_5a8;
    }
    uStack_5a8 = plVar13;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_5d8);
    if (((ulong)puStack_468 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_468 & 0xff00ffffffffffff) - 8);
    }
    puStack_468 = (undefined *)0x0;
    if (((ulong)puStack_470 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_470 & 0xff00ffffffffffff) - 8);
    }
    puStack_470 = (undefined *)0x0;
    if ((auStack_498[0] & 1) != 0) {
      func_0x0412a280(uStack_488,auStack_498._0_8_ & 0xfffffffffffffffe);
    }
    if ((auStack_340._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_340._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_340._8_8_ = 0;
    if ((auStack_340._0_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_340._0_8_ & 0xff00ffffffffffff) - 8);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auStack_340._8_8_;
    auStack_340 = auVar4 << 0x40;
    if ((uStack_268 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_268 & 0xff00ffffffffffff) - 8);
    }
    uStack_268 = 0;
    if ((uStack_68 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_68 & 0xff00ffffffffffff) - 8);
    }
    lVar22 = func_0x0d29fb30(lStack_230);
    if (*(int *)(lVar22 + 0x60) != -0x2b3da790) goto LAB_0da5e065;
LAB_0da5e023:
    lVar22 = *(long *)(lVar22 + 0x68);
    if (lVar22 == 0) goto LAB_0da5e065;
    bVar23 = (*(byte *)(lVar22 + 8) & 1) != 0;
    lVar19 = lVar22 + 9;
    if (bVar23) {
      lVar19 = *(long *)(lVar22 + 0x18);
    }
    uVar16 = (ulong)(*(byte *)(lVar22 + 8) >> 1);
    if (bVar23) {
      uVar16 = *(ulong *)(lVar22 + 0x10);
    }
    func_0x0daa5d30(&uStack_3a8,param_1,lVar19,uVar16);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0da5cdbb;
LAB_0da5ce12:
    func_0x0daa4e40(&uStack_310,param_1,&UNK_0140c1ef,0x1d);
    if ((char)puStack_2e0 == '\0') goto LAB_0da5ce38;
LAB_0da5cdf8:
    lVar22 = func_0x0d29fb30(lVar22);
    if (*(int *)(lVar22 + 0x60) == -0x2b3da790) goto LAB_0da5e023;
LAB_0da5e065:
    func_0x0daa5d30(&uStack_3a8,param_1,&UNK_012348f1,0x11);
  }
  if ((char)uStack_378 != '\0') {
    return;
  }
  uStack_360 = 0x10028001a0001;
  uStack_368 = 0;
  uStack_4a0 = 0;
  uStack_458 = 0x44676154696f501a;
  uStack_450 = 0x746e656d636f;
  uStack_448 = 0;
  uStack_440 = 0x1402;
  uStack_438 = 0x10028001a0001;
  puStack_430 = &UNK_01254d89;
  uStack_358 = 0;
  puStack_428 = &UNK_01254d89;
  uStack_350 = 0;
  lVar19 = uStack_3a8 + 0x18;
  lVar22 = func_0x0d29fb30(lVar19);
  pbVar18 = *(byte **)(uStack_3a8 + 0x58);
  for (pbVar10 = *(byte **)(uStack_3a8 + 0x50); pbVar10 != pbVar18; pbVar10 = pbVar10 + 0x38) {
    bVar2 = *pbVar10;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0da5e1ba;
    }
    else if (*(long *)(pbVar10 + 8) == 0x24) {
LAB_0da5e1ba:
      if ((bVar2 & 1) == 0) {
        pbVar20 = pbVar10 + 1;
      }
      else {
        pbVar20 = *(byte **)(pbVar10 + 0x10);
      }
      iVar7 = bcmp(&DAT_014518a9,pbVar20,0x24);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar10 == pbVar18) {
LAB_0da5e1ea:
    if (auStack_388._8_4_ == 0) {
      if ((*(int *)(lVar22 + 0x60) != -0x2b3da790) || (*(long *)(lVar22 + 0x68) == 0))
      goto LAB_0da5e266;
      lVar22 = *(long *)(lVar22 + 0x68) + 0x38;
    }
    else {
      auVar11 = (undefined1  [8])FUN_048b0c90(lVar19,lVar22,auStack_388._12_4_,1);
      if (auVar11 == (undefined1  [8])0x0) {
        _auStack_578 = ZEXT816(0);
        func_0x048b0d20(auStack_578);
        auVar11 = auStack_578;
        if (auStack_578 == (undefined1  [8])0x0) goto LAB_0da5e266;
      }
      if ((*(int *)((long)auVar11 + 0x50) == -0x45dcb126) && (*(long *)((long)auVar11 + 0x58) != 0))
      {
        lVar22 = *(long *)((long)auVar11 + 0x58) + 0x40;
      }
      else {
LAB_0da5e266:
        lVar22 = 0;
      }
    }
    puStack_5f8 = (undefined *)0x0;
    plStack_5e8 = (long *)&UNK_048b4ab0;
    pcStack_5e0 = (code *)&UNK_048b49f0;
    uStack_5d8 = CONCAT35(uStack_5d8._5_3_,0x1d33bd9c5);
    puVar14 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar14 == (ulong *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar14[2] = uStack_448;
    *puVar14 = uStack_458;
    puVar14[1] = uStack_450;
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    *(undefined2 *)(puVar14 + 3) = uStack_440;
    puVar14[4] = uStack_438;
    puVar14[5] = (ulong)puStack_430;
    puStack_430 = (undefined *)0x0;
    puVar14[6] = (ulong)puStack_428;
    puStack_428 = (undefined *)0x0;
    uStack_560 = (code *)&UNK_048b4ab0;
    pcStack_558 = (code *)&UNK_048b49f0;
    uStack_550 = CONCAT35(uStack_550._5_3_,0x1d33bd9c5);
    puStack_5f8 = (undefined *)0x0;
    lStack_570 = (long)puVar14;
    auStack_578 = (undefined1  [8])&UNK_048b46e0;
    puStack_300 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_300 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar3 = _UNK_014518c1;
    uStack_310 = 0x29;
    uStack_308 = 0x24;
    puStack_300[2] = _DAT_014518b9;
    puStack_300[3] = uVar3;
    uVar3 = _UNK_014518b1;
    *puStack_300 = _DAT_014518a9;
    puStack_300[1] = uVar3;
    *(undefined4 *)(puStack_300 + 4) = 0x5d797472;
    *(undefined1 *)((long)puStack_300 + 0x24) = 0;
    lVar22 = func_0x048b5060(lVar22,&uStack_310);
    *(undefined **)(lVar22 + 0x20) = &UNK_048b46e0;
    pcVar21 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar22 + 0x20) != auStack_578) {
      puVar12 = (undefined8 *)(lVar22 + 0x28);
      if (*(code **)(lVar22 + 0x40) == (code *)0x0) {
LAB_0da5e441:
        lVar19 = lStack_570;
        lStack_570 = 0;
        *puVar12 = lVar19;
      }
      else {
        (**(code **)(lVar22 + 0x40))(puVar12);
        if (uStack_550._4_1_ != '\0') {
          if (uStack_550._4_1_ != '\x02') goto LAB_0da5e441;
          (*uStack_560)(5,auStack_578 + 8,puVar12);
        }
      }
      *(code **)(lVar22 + 0x38) = uStack_560;
      *(code **)(lVar22 + 0x40) = pcStack_558;
      *(undefined4 *)(lVar22 + 0x48) = (undefined4)uStack_550;
      *(char *)(lVar22 + 0x4c) = uStack_550._4_1_;
      pcVar21 = pcStack_558;
    }
    if ((uStack_310 & 1) != 0) {
      func_0x0412a280(puStack_300,uStack_310 & 0xfffffffffffffffe);
      pcVar21 = pcStack_558;
    }
    if (pcVar21 != (code *)0x0) {
      (*pcVar21)(auStack_578 + 8);
    }
    if (pcStack_5e0 != (code *)0x0) {
      (*pcStack_5e0)(&puStack_5f8);
    }
  }
  else {
    iVar7 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = FUN_04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar7 == _DAT_0f550754) goto LAB_0da5e1ea;
  }
  uStack_f8 = uStack_378;
  uStack_108 = auStack_388._0_8_;
  uStack_100 = auStack_388._8_8_;
  puStack_118 = puStack_398;
  uStack_110 = uStack_390;
  uStack_128 = uStack_3a8;
  uStack_120 = uStack_3a0;
  func_0x0daa6630(auStack_578,&uStack_128,&UNK_011ea907,0xb,1);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f491118;
  if (uStack_560 != (code *)0x0) {
    lVar22 = *(long *)uStack_560;
    uStack_560 = (code *)plVar13;
    (**(code **)(lVar22 + 8))();
    plVar13 = (long *)uStack_560;
  }
  uStack_560 = (code *)plVar13;
  puStack_5f8 = (undefined *)CONCAT44(puStack_5f8._4_4_,puStack_568._0_4_);
  plStack_5f0 = (long *)0x0;
  plStack_5e8 = (long *)((ulong)plStack_5e8 & 0xffffffff00000000);
  pcStack_5e0 = (code *)0x1;
  uStack_5d8 = 0;
  puStack_5d0 = &UNK_0daa6d60;
  puStack_5c8 = &SUB_048b06d0;
  puStack_5c0 = &UNK_0daa4780;
  puStack_5b8 = &UNK_0daa6e20;
  puStack_5b0 = &UNK_0daa6fe0;
  uStack_5a8 = (long *)((ulong)uStack_5a8 & 0xffffffff00000000);
  lStack_5a0 = 0;
  plStack_598 = (long *)0x0;
  func_0x048b05a0(lStack_570,&puStack_5f8);
  plVar13 = plStack_598;
  if (plStack_598 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_598 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_598 + 0x10))(plStack_598);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa6830(auStack_578);
  uStack_238 = (undefined1)uStack_f8;
  uStack_248 = uStack_108;
  uStack_240 = uStack_100;
  puStack_258 = puStack_118;
  uStack_250 = uStack_110;
  uStack_268 = uStack_128;
  uStack_260 = uStack_120;
  func_0x048b0bc0(&uStack_560);
  func_0x0daa6270(auStack_578,uStack_268 + 0x18);
  if (uStack_560._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(puStack_568 + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != (int)uStack_560) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    lVar22 = *(long *)(piVar15 + 0xc);
    while (lVar22 != lStack_570) {
      piVar15 = *(int **)(piVar15 + 0xe);
      lVar22 = *(long *)(piVar15 + 0xc);
    }
LAB_0da5e6ff:
    *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
  }
  else {
    if (uStack_560._4_4_ == 1) {
      piVar15 = *(int **)(*(long *)(puStack_568 + 0x78) + 0x48);
      iVar7 = *piVar15;
      while (iVar7 != (int)uStack_560) {
        piVar15 = piVar15 + 0x1a;
        iVar7 = *piVar15;
      }
      goto LAB_0da5e6ff;
    }
    if (uStack_560._4_4_ == 0) {
      *(uint *)(puStack_568 + 0x18) = *(uint *)(puStack_568 + 0x18) | 0x40000;
    }
  }
  func_0x0daa6630(auStack_578,&uStack_268,&UNK_0128911c,8,0x10);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0ef474e0;
  if (uStack_560 != (code *)0x0) {
    lVar22 = *(long *)uStack_560;
    uStack_560 = (code *)plVar13;
    (**(code **)(lVar22 + 8))();
    plVar13 = (long *)uStack_560;
  }
  uStack_560 = (code *)plVar13;
  puStack_5f8 = (undefined *)CONCAT44(puStack_5f8._4_4_,puStack_568._0_4_);
  plStack_5f0 = (long *)0x0;
  plStack_5e8 = (long *)((ulong)plStack_5e8 & 0xffffffff00000000);
  pcStack_5e0 = (code *)0x1;
  uStack_5d8 = 0;
  puStack_5d0 = &UNK_049119f0;
  puStack_5c8 = &SUB_048b06d0;
  puStack_5c0 = &SUB_0490fc00;
  puStack_5b8 = &UNK_0daa7450;
  puStack_5b0 = &UNK_0daa7650;
  uStack_5a8 = (long *)((ulong)uStack_5a8 & 0xffffffff00000000);
  lStack_5a0 = 0;
  plStack_598 = (long *)0x0;
  func_0x048b05a0(lStack_570,&puStack_5f8);
  plVar13 = plStack_598;
  if (plStack_598 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_598 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_598 + 0x10))(plStack_598);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa6830(auStack_578);
  uStack_38 = uStack_238;
  uStack_48 = uStack_248;
  uStack_40 = uStack_240;
  puStack_58 = puStack_258;
  uStack_50 = uStack_250;
  uStack_68 = uStack_268;
  uStack_60 = uStack_260;
  func_0x048b0bc0(&uStack_560);
  uStack_5d8 = 0;
  lStack_590 = 0;
  lStack_588 = 0;
  lStack_5a0 = 0;
  plStack_598 = (long *)0x0;
  puStack_5b0 = (undefined *)0x0;
  uStack_5a8 = (long *)0x0;
  puStack_5c0 = (undefined1 *)0x0;
  puStack_5b8 = (undefined *)0x0;
  puStack_5d0 = (undefined *)0x0;
  puStack_5c8 = (undefined1 *)0x0;
  lStack_580 = 0;
  plStack_5f0 = (long *)0xffffffffffffffff;
  plStack_5e8 = (long *)0x0;
  pcStack_5e0 = (code *)0xff;
  puStack_5f8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_5d8);
  puStack_5d0 = (undefined *)FUN_041681f0(&uStack_5d8,0xf547a30);
  puStack_5c8 = (undefined1 *)FUN_041681f0(&uStack_5d8,0xf547770);
  puStack_5c0 = (undefined1 *)0x0;
  puStack_5b8 = (undefined *)0x0;
  puStack_5b0 = (undefined *)0x0;
  uStack_5a8 = (long *)0x0;
  lStack_5a0 = 0;
  plStack_598 = (long *)0x0;
  lStack_590 = 0;
  lStack_588 = 0;
  lStack_580 = 0;
  bStack_3c0 = 0x12;
  uStack_3bf = 0x775c3a2b775c5e;
  uStack_3b8 = 0x2b;
  uStack_3b7 = 0x24;
  func_0x0ed60210(&puStack_5f8,&bStack_3c0,0);
  uStack_1d0 = pcStack_5e0._0_1_;
  lStack_1e0 = (long)plStack_5f0;
  lStack_1d8 = (long)plStack_5e8;
  puStack_1e8 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_1c8,&uStack_5d8);
  lStack_1c0 = (long)puStack_5d0;
  lStack_1b8 = (long)puStack_5c8;
  lStack_1b0 = (long)puStack_5c0;
  lStack_1a8 = (long)puStack_5b8;
  lStack_1a0 = (long)puStack_5b0;
  plStack_198 = uStack_5a8;
  if (uStack_5a8 != (long *)0x0) {
    LOCK();
    uStack_5a8[1] = uStack_5a8[1] + 1;
    UNLOCK();
  }
  lStack_190 = lStack_5a0;
  if (((ulong)plStack_598 & 1) == 0) {
    lStack_178 = lStack_588;
    uStack_188 = (ulong)plStack_598;
    lStack_180 = lStack_590;
  }
  else {
    func_0x0412e5e0(&uStack_188,lStack_588,lStack_590);
  }
  lStack_170 = lStack_580;
  uStack_220 = 0xffffffffffffffff;
  uStack_218 = 0;
  uStack_210 = 0xff;
  puStack_228 = &UNK_0f4e3cf0;
  uStack_208 = 0;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f0fb8c0;
  plVar13[4] = lStack_1e0;
  plVar13[5] = lStack_1d8;
  *(undefined1 *)(plVar13 + 6) = uStack_1d0;
  plVar13[3] = (long)&UNK_0f4e3c70;
  FUN_04167a20(plVar13 + 7,auStack_1c8);
  plVar13[8] = lStack_1c0;
  plVar13[9] = lStack_1b8;
  plVar13[10] = lStack_1b0;
  plVar13[0xb] = lStack_1a8;
  plVar13[0xc] = lStack_1a0;
  plVar13[0xd] = (long)plStack_198;
  lStack_1a0 = 0;
  plStack_198 = (long *)0x0;
  plVar13[0xe] = lStack_190;
  plVar13[0x11] = lStack_178;
  plVar13[0xf] = uStack_188;
  plVar13[0x10] = lStack_180;
  uStack_188 = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  plVar13[0x12] = lStack_170;
  uStack_1f0 = 0;
  plStack_200 = plVar13 + 3;
  plStack_1f8 = plVar13;
  func_0x0da5fbc0(&lStack_2a8,&uStack_68,&puStack_228);
  uStack_318 = uStack_278;
  uStack_328 = uStack_288;
  uStack_320 = uStack_280;
  uStack_330 = uStack_290;
  lStack_348 = lStack_2a8;
  auStack_340._8_8_ = uStack_298;
  auStack_340._0_8_ = uStack_2a0;
  func_0x0daa6270(auStack_578,lStack_2a8 + 0x18);
  if (uStack_560._4_4_ == 2) {
    piVar15 = *(int **)(*(long *)(puStack_568 + 0x78) + 0x60);
    iVar7 = *piVar15;
    while (iVar7 != (int)uStack_560) {
      piVar15 = piVar15 + 0x16;
      iVar7 = *piVar15;
    }
    for (; *(long *)(piVar15 + 0xc) != lStack_570; piVar15 = *(int **)(piVar15 + 0xe)) {
    }
  }
  else {
    if (uStack_560._4_4_ != 1) {
      if (uStack_560._4_4_ == 0) {
        *(uint *)(puStack_568 + 0x18) = *(uint *)(puStack_568 + 0x18) | 0x40000;
      }
      goto LAB_0da5ed1e;
    }
    piVar15 = *(int **)(*(long *)(puStack_568 + 0x78) + 0x48);
    iVar7 = *piVar15;
    while (iVar7 != (int)uStack_560) {
      piVar15 = piVar15 + 0x1a;
      iVar7 = *piVar15;
    }
  }
  *(byte *)((long)piVar15 + 0x12) = *(byte *)((long)piVar15 + 0x12) | 4;
LAB_0da5ed1e:
  func_0x0daa6630(auStack_578,&lStack_348,&UNK_0120125d,7,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0ef474e0;
  if (uStack_560 != (code *)0x0) {
    lVar22 = *(long *)uStack_560;
    uStack_560 = (code *)puVar12;
    (**(code **)(lVar22 + 8))();
    puVar12 = (undefined8 *)uStack_560;
  }
  uStack_560 = (code *)puVar12;
  uStack_310 = CONCAT44(uStack_310._4_4_,puStack_568._0_4_);
  uStack_308 = 0;
  puStack_300 = (undefined8 *)((ulong)puStack_300 & 0xffffffff00000000);
  uStack_2f8 = 1;
  uStack_2f0 = 0;
  iStack_2e8 = 0x49119f0;
  uStack_2e4 = 0;
  puStack_2e0 = &SUB_048b06d0;
  puStack_2d8 = &SUB_0490fc00;
  puStack_2d0 = &UNK_0daa7830;
  puStack_2c8 = &UNK_0daa7a30;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  plStack_2b0 = (long *)0x0;
  func_0x048b05a0(lStack_570,&uStack_310);
  plVar13 = plStack_2b0;
  if (plStack_2b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_2b0 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa6830(auStack_578);
  uStack_3e8 = (undefined1)uStack_318;
  uStack_3f8 = uStack_328;
  uStack_3f0 = uStack_320;
  puStack_408 = (undefined8 *)auStack_340._8_8_;
  uStack_400 = uStack_330;
  bStack_418 = (byte)lStack_348;
  uStack_417 = (undefined7)((ulong)lStack_348 >> 8);
  uStack_410 = auStack_340[0];
  uStack_40f = auStack_340._1_2_;
  uStack_40d = auStack_340._3_5_;
  func_0x048b0bc0(&uStack_560);
  pcStack_558 = (code *)0x0;
  lStack_510 = 0;
  lStack_508 = 0;
  lStack_520 = 0;
  uStack_518 = 0;
  uStack_530 = 0;
  uStack_52f = 0;
  uStack_52d = 0;
  uStack_52c = 0;
  plStack_528 = (long *)0x0;
  lStack_540 = 0;
  uStack_538 = 0;
  uStack_537 = 0;
  uStack_550 = 0;
  lStack_548 = 0;
  lStack_500 = 0;
  puStack_568 = (undefined *)0x0;
  uStack_560 = (code *)0xff;
  auStack_578 = (undefined1  [8])&UNK_0f4e3c70;
  lStack_570 = -1;
  func_0x041679a0(&pcStack_558);
  uStack_550 = FUN_041681f0(&pcStack_558,0xf547a30);
  lStack_548 = FUN_041681f0(&pcStack_558,0xf547770);
  lStack_540 = 0;
  uStack_538 = 0;
  uStack_537 = 0;
  uStack_530 = 0;
  uStack_52f = 0;
  uStack_52d = 0;
  uStack_52c = 0;
  plStack_528 = (long *)0x0;
  lStack_520 = 0;
  uStack_518 = 0;
  lStack_510 = 0;
  lStack_508 = 0;
  lStack_500 = 0;
  bStack_3d8 = 0x12;
  uStack_3d7 = 0x775c3a2b775c5e;
  uStack_3d0 = 0x2b;
  uStack_3cf = 0x24;
  func_0x0ed60210(auStack_578,&bStack_3d8,0);
  uStack_d0 = (undefined1)uStack_560;
  lStack_e0 = lStack_570;
  lStack_d8 = (long)puStack_568;
  puStack_e8 = &UNK_0f4e3c70;
  FUN_04167a20(auStack_c8,&pcStack_558);
  lStack_c0 = uStack_550;
  lStack_b8 = lStack_548;
  lStack_a8 = CONCAT71(uStack_537,uStack_538);
  lStack_b0 = lStack_540;
  lStack_a0 = CONCAT44(uStack_52c,CONCAT13(uStack_52d,CONCAT21(uStack_52f,uStack_530)));
  plStack_98 = plStack_528;
  if (plStack_528 != (long *)0x0) {
    LOCK();
    plStack_528[1] = plStack_528[1] + 1;
    UNLOCK();
  }
  lStack_90 = lStack_520;
  if ((uStack_518 & 1) == 0) {
    lStack_78 = lStack_508;
    uStack_88 = uStack_518;
    lStack_80 = lStack_510;
  }
  else {
    func_0x0412e5e0(&uStack_88,lStack_508,lStack_510);
  }
  lStack_70 = lStack_500;
  uStack_160 = 0xffffffffffffffff;
  uStack_158 = 0;
  uStack_150 = 0xff;
  puStack_168 = &UNK_0f4e3cf0;
  uStack_148 = 0;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f0fb8c0;
  plVar13[4] = lStack_e0;
  plVar13[5] = lStack_d8;
  *(undefined1 *)(plVar13 + 6) = uStack_d0;
  plVar13[3] = (long)&UNK_0f4e3c70;
  FUN_04167a20(plVar13 + 7,auStack_c8);
  plVar13[8] = lStack_c0;
  plVar13[9] = lStack_b8;
  plVar13[10] = lStack_b0;
  plVar13[0xb] = lStack_a8;
  plVar13[0xc] = lStack_a0;
  plVar13[0xd] = (long)plStack_98;
  lStack_a0 = 0;
  plStack_98 = (long *)0x0;
  plVar13[0xe] = lStack_90;
  plVar13[0x11] = lStack_78;
  plVar13[0xf] = uStack_88;
  plVar13[0x10] = lStack_80;
  uStack_88 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  plVar13[0x12] = lStack_70;
  uStack_130 = 0;
  plStack_140 = plVar13 + 3;
  plStack_138 = plVar13;
  func_0x0da5fbc0(auStack_498,&bStack_418,&puStack_168);
  plVar13 = plStack_138;
  puStack_168 = &UNK_0f4e3cf0;
  if (plStack_138 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      func_0x0412c2d0(plVar13);
    }
  }
  puStack_e8 = &UNK_0f4e3c70;
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(lStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  plVar13 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_c8);
  if ((bStack_3d8 & 1) == 0) {
    auStack_578 = (undefined1  [8])&UNK_0f4e3c70;
  }
  else {
    func_0x0412a280(uStack_3c8,CONCAT71(uStack_3d7,bStack_3d8) & 0xfffffffffffffffe);
    auStack_578 = (undefined1  [8])&UNK_0f4e3c70;
  }
  plVar13 = plStack_528;
  if ((uStack_518 & 1) != 0) {
    func_0x0412a280(lStack_508,uStack_518 & 0xfffffffffffffffe);
    plVar13 = plStack_528;
  }
  plStack_528 = plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&pcStack_558);
  plVar13 = plStack_1f8;
  puStack_228 = &UNK_0f4e3cf0;
  if (plStack_1f8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      func_0x0412c2d0(plVar13);
    }
  }
  puStack_1e8 = &UNK_0f4e3c70;
  if ((uStack_188 & 1) != 0) {
    func_0x0412a280(lStack_178,uStack_188 & 0xfffffffffffffffe);
  }
  plVar13 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_198 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_1c8);
  if ((bStack_3c0 & 1) != 0) {
    func_0x0412a280(uStack_3b0,CONCAT71(uStack_3bf,bStack_3c0) & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_598 & 1) == 0) {
    puStack_5f8 = &UNK_0f4e3c70;
    plVar13 = uStack_5a8;
  }
  else {
    puStack_5f8 = &UNK_0f4e3c70;
    func_0x0412a280(lStack_588,(ulong)plStack_598 & 0xfffffffffffffffe);
    plVar13 = uStack_5a8;
  }
  uStack_5a8 = plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar22 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&uStack_5d8);
  if (((ulong)puStack_428 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_428 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_428 = (undefined *)0x0;
  if (((ulong)puStack_430 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_430 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_430 = (undefined *)0x0;
  if ((uStack_458 & 1) != 0) {
    func_0x0412a280(uStack_448,uStack_458 & 0xfffffffffffffffe);
  }
  if ((uStack_350 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_350 & 0xff00ffffffffffff) - 8);
  }
  uStack_350 = 0;
  if ((uStack_358 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_358 & 0xff00ffffffffffff) - 8);
  }
  uStack_358 = 0;
  if ((uStack_4a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_4a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_4a0 = 0;
  if ((uStack_368 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_368 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */
