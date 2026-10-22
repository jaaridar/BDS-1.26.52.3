/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe89e520 (ELF vaddr 0xe79e520)
 * Label: caller-of-callee
 * Body:  [[0e89e520, 0e89e5fd] [0e89e600, 0e89e642] [0e89e650, 0e8a6b5c]]
 * Ghidra: FUN_0e89e520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e89e520(long param_1)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int *piVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 in_R8;
  undefined8 in_R9;
  code *pcVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined1 auStack_758 [16];
  undefined4 uStack_748;
  undefined4 uStack_744;
  int iStack_740;
  int iStack_73c;
  undefined1 uStack_738;
  undefined4 uStack_737;
  undefined1 uStack_733;
  undefined2 uStack_732;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined1 uStack_728;
  undefined7 uStack_727;
  undefined1 uStack_720;
  undefined4 uStack_71f;
  undefined1 uStack_71b;
  undefined2 uStack_71a;
  undefined8 uStack_718;
  undefined *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined *puStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined2 uStack_6b0;
  undefined1 uStack_6ac;
  uint5 uStack_6a8;
  undefined *puStack_688;
  undefined8 uStack_680;
  undefined *puStack_678;
  code *pcStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined1 *puStack_650;
  undefined *puStack_648;
  undefined *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long *plStack_628;
  undefined *puStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 uStack_608;
  undefined8 uStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined2 uStack_5e8;
  undefined4 uStack_5e6;
  undefined2 uStack_5e2;
  undefined1 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 uStack_5c9;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 *puStack_598;
  ulong uStack_588;
  ulong uStack_580;
  undefined8 *puStack_578;
  ulong uStack_570;
  ulong uStack_568;
  undefined8 uStack_560;
  undefined1 *puStack_558;
  undefined1 *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined4 uStack_538;
  undefined8 uStack_530;
  long *plStack_528;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined4 uStack_45c;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  int iStack_238;
  undefined4 uStack_234;
  char cStack_230;
  undefined7 uStack_22f;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 *puStack_1b8;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0e20f590();
  func_0x0e8a6e70(param_1);
  lVar8 = func_0x0e830b50(param_1 + 0x18);
  if ((*(int *)(lVar8 + 0x60) == -0x2b3da790) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    FUN_0e8c60b0(&uStack_260,param_1,lVar15,uVar14);
  }
  else {
    FUN_0e8c60b0(&uStack_260,param_1,&UNK_01425a49,0x1c);
  }
  if (cStack_230 != '\0') {
    return;
  }
  lVar15 = uStack_260 + 0x18;
  lVar8 = func_0x0e830b50(lVar15);
  for (pbVar12 = *(byte **)(uStack_260 + 0x50); pbVar12 != *(byte **)(uStack_260 + 0x58);
      pbVar12 = pbVar12 + 0x38) {
    bVar3 = *pbVar12;
    if ((bVar3 & 1) == 0) {
      if (bVar3 >> 1 == 0x1d) goto LAB_0e89e65a;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1d) {
LAB_0e89e65a:
      if ((bVar3 & 1) == 0) {
        pbVar16 = pbVar12 + 1;
      }
      else {
        pbVar16 = *(byte **)(pbVar12 + 0x10);
      }
      auVar19[0] = -(*pbVar16 == DAT_014e1c20);
      auVar19[1] = -(pbVar16[1] == DAT_014e1c20._1_1_);
      auVar19[2] = -(pbVar16[2] == DAT_014e1c20._2_1_);
      auVar19[3] = -(pbVar16[3] == DAT_014e1c20._3_1_);
      auVar19[4] = -(pbVar16[4] == DAT_014e1c20._4_1_);
      auVar19[5] = -(pbVar16[5] == DAT_014e1c20._5_1_);
      auVar19[6] = -(pbVar16[6] == DAT_014e1c20._6_1_);
      auVar19[7] = -(pbVar16[7] == DAT_014e1c20._7_1_);
      auVar19[8] = -(pbVar16[8] == DAT_014e1c20._8_1_);
      auVar19[9] = -(pbVar16[9] == DAT_014e1c20._9_1_);
      auVar19[10] = -(pbVar16[10] == DAT_014e1c20._10_1_);
      auVar19[0xb] = -(pbVar16[0xb] == DAT_014e1c20._11_1_);
      auVar19[0xc] = -(pbVar16[0xc] == DAT_014e1c20._12_1_);
      auVar19[0xd] = -(pbVar16[0xd] == DAT_014e1c20._13_1_);
      auVar19[0xe] = -(pbVar16[0xe] == DAT_014e1c20._14_1_);
      auVar19[0xf] = -(pbVar16[0xf] == DAT_014e1c20._15_1_);
      auVar20[0] = -(pbVar16[0xd] == DAT_014e80e0);
      auVar20[1] = -(pbVar16[0xe] == DAT_014e80e0._1_1_);
      auVar20[2] = -(pbVar16[0xf] == DAT_014e80e0._2_1_);
      auVar20[3] = -(pbVar16[0x10] == DAT_014e80e0._3_1_);
      auVar20[4] = -(pbVar16[0x11] == DAT_014e80e0._4_1_);
      auVar20[5] = -(pbVar16[0x12] == DAT_014e80e0._5_1_);
      auVar20[6] = -(pbVar16[0x13] == DAT_014e80e0._6_1_);
      auVar20[7] = -(pbVar16[0x14] == DAT_014e80e0._7_1_);
      auVar20[8] = -(pbVar16[0x15] == DAT_014e80e0._8_1_);
      auVar20[9] = -(pbVar16[0x16] == DAT_014e80e0._9_1_);
      auVar20[10] = -(pbVar16[0x17] == DAT_014e80e0._10_1_);
      auVar20[0xb] = -(pbVar16[0x18] == DAT_014e80e0._11_1_);
      auVar20[0xc] = -(pbVar16[0x19] == DAT_014e80e0._12_1_);
      auVar20[0xd] = -(pbVar16[0x1a] == DAT_014e80e0._13_1_);
      auVar20[0xe] = -(pbVar16[0x1b] == DAT_014e80e0._14_1_);
      auVar20[0xf] = -(pbVar16[0x1c] == DAT_014e80e0._15_1_);
      auVar20 = auVar20 & auVar19;
      if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar12 == *(byte **)(uStack_260 + 0x58)) {
LAB_0e89e689:
    if (iStack_238 == 0) {
      if ((*(int *)(lVar8 + 0x60) != -0x2b3da790) || (*(long *)(lVar8 + 0x68) == 0))
      goto LAB_0e89e6fd;
      lVar8 = *(long *)(lVar8 + 0x68) + 0x38;
    }
    else {
      lVar8 = func_0x048b0c90(lVar15,lVar8,uStack_234,1);
      if (lVar8 == 0) {
        auStack_758 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_758);
        lVar8 = auStack_758._0_8_;
        if (auStack_758._0_8_ == 0) goto LAB_0e89e6fd;
      }
      if ((*(int *)(lVar8 + 0x50) == -0x45dcb126) && (*(long *)(lVar8 + 0x58) != 0)) {
        lVar8 = *(long *)(lVar8 + 0x58) + 0x40;
      }
      else {
LAB_0e89e6fd:
        lVar8 = 0;
      }
    }
    puStack_688 = (undefined *)0x0;
    puStack_678 = &UNK_05ead3e0;
    pcVar17 = (code *)&UNK_05ead970;
    pcStack_670 = (code *)&UNK_05ead970;
    puStack_668 = (undefined *)CONCAT35(puStack_668._5_3_,0x17fe5f144);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar9 = 0x1006400150001;
    puVar9[1] = &UNK_01254d89;
    puVar9[2] = &UNK_01254d89;
    iStack_740 = 0x5ead3e0;
    iStack_73c = 0;
    uStack_738 = 0x70;
    uStack_737 = 0x5ead9;
    uStack_733 = 0;
    uStack_732 = 0;
    uStack_730 = 0x7fe5f144;
    uStack_72c = CONCAT31(uStack_72c._1_3_,1);
    puStack_688 = (undefined *)0x0;
    auStack_758._8_8_ = puVar9;
    auStack_758._0_8_ = &UNK_0daac7f0;
    puStack_578 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_578 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar21 = _UNK_014590aa;
    uStack_588 = 0x21;
    uStack_580 = 0x1d;
    *(ulong *)((long)puStack_578 + 0xd) = CONCAT53(_UNK_014590a5,_DAT_014590a2);
    *(undefined8 *)((long)puStack_578 + 0x15) = uVar21;
    uVar21 = CONCAT35(_DAT_014590a2,_UNK_0145909d);
    *puStack_578 = _DAT_01459095;
    puStack_578[1] = uVar21;
    *(undefined1 *)((long)puStack_578 + 0x1d) = 0;
    lVar8 = func_0x048b5060(lVar8,&uStack_588);
    *(undefined **)(lVar8 + 0x20) = &UNK_0daac7f0;
    if ((undefined1 *)(lVar8 + 0x20) != auStack_758) {
      puVar9 = (undefined8 *)(lVar8 + 0x28);
      if (*(code **)(lVar8 + 0x40) == (code *)0x0) {
LAB_0e89e879:
        uVar21 = auStack_758._8_8_;
        auStack_758._8_8_ = 0;
        *puVar9 = uVar21;
      }
      else {
        (**(code **)(lVar8 + 0x40))(puVar9);
        if ((char)uStack_72c != '\0') {
          if ((char)uStack_72c != '\x02') goto LAB_0e89e879;
          (*(code *)CONCAT44(iStack_73c,iStack_740))(5,auStack_758 + 8,puVar9);
        }
      }
      pcVar17 = (code *)CONCAT26(uStack_732,CONCAT15(uStack_733,CONCAT41(uStack_737,uStack_738)));
      *(ulong *)(lVar8 + 0x38) = CONCAT44(iStack_73c,iStack_740);
      *(ulong *)(lVar8 + 0x40) =
           CONCAT26(uStack_732,CONCAT15(uStack_733,CONCAT41(uStack_737,uStack_738)));
      *(undefined4 *)(lVar8 + 0x48) = uStack_730;
      *(char *)(lVar8 + 0x4c) = (char)uStack_72c;
    }
    if ((uStack_588 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_578,uStack_588 & 0xfffffffffffffffe);
      pcVar17 = (code *)CONCAT26(uStack_732,CONCAT15(uStack_733,CONCAT41(uStack_737,uStack_738)));
    }
    if (pcVar17 != (code *)0x0) {
      (*pcVar17)(auStack_758 + 8);
    }
    if (pcStack_670 != (code *)0x0) {
      (*pcStack_670)(&puStack_688);
    }
  }
  else {
    iVar6 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f561458 == '\0') && (iVar7 = func_0x04108328(&DAT_0f561458), iVar7 != 0)) {
      func_0x05eada10(0xf561440);
      func_0x0410844d(&DAT_0f561458);
    }
    if (iVar6 == _DAT_0f561444) goto LAB_0e89e689;
  }
  puStack_598 = (undefined1 *)CONCAT71(uStack_22f,cStack_230);
  uStack_5a0 = CONCAT44(uStack_234,iStack_238);
  uStack_5a8 = uStack_240;
  uStack_5b8 = uStack_250;
  uStack_5b0 = uStack_248;
  uStack_5c8 = uStack_260;
  uStack_5c0 = uStack_258;
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  if ((DAT_0f74a978 == '\0') && (iVar6 = func_0x04108328(&DAT_0f74a978), iVar6 != 0)) {
    func_0x0e235fd0(0xf74a960);
    func_0x0410844d(&DAT_0f74a978);
  }
  auStack_758._0_4_ = _DAT_0f74a964;
  auStack_758._8_8_ = &SUB_0e235de0;
  uStack_748 = 0xe8c69a0;
  uStack_744 = 0;
  func_0x05da1460(&uStack_5c0);
  uStack_568 = uStack_5a8;
  uStack_588 = uStack_5c8;
  uStack_580 = uStack_5c0;
  puStack_578 = (undefined8 *)uStack_5b8;
  uStack_570 = uStack_5b0;
  puStack_558 = puStack_598;
  uStack_560 = (undefined *)0x24d7065400000003;
  func_0x0e830b50(uStack_5c8 + 0x18);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4cf268;
  auStack_758._8_8_ = 0;
  auStack_758._0_8_ = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_01412feb;
  uStack_738 = SUB81(puVar9,0);
  uStack_737 = (undefined4)((ulong)puVar9 >> 8);
  uStack_733 = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_732 = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_748 = 0x29;
  uStack_744 = 0;
  iStack_740 = 0x22;
  iStack_73c = 0;
  puVar9[2] = _DAT_01412fe3;
  puVar9[3] = uVar21;
  uVar21 = _UNK_01412fdb;
  *puVar9 = _DAT_01412fd3;
  puVar9[1] = uVar21;
  *(undefined2 *)(puVar9 + 4) = 0x736d;
  *(undefined1 *)((long)puVar9 + 0x22) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_01412feb;
  uStack_720 = SUB81(puVar9,0);
  uStack_71f = (undefined4)((ulong)puVar9 >> 8);
  uStack_71b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_71a = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_730 = 0x29;
  uStack_72c = 0;
  uStack_728 = 0x22;
  uStack_727 = 0;
  puVar9[2] = _DAT_01412fe3;
  puVar9[3] = uVar21;
  uVar21 = _UNK_01412fdb;
  *puVar9 = _DAT_01412fd3;
  puVar9[1] = uVar21;
  *(undefined2 *)(puVar9 + 4) = 0x736d;
  *(undefined1 *)((long)puVar9 + 0x22) = 0;
  uStack_6f8 = 0;
  puStack_6f0 = (undefined *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_718 = 0;
  puStack_710 = (undefined *)0x0;
  uStack_6e8 = CONCAT44(uStack_6e8._4_4_,0x3f600000);
  func_0x048afb10(&uStack_718,8);
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6d0 = 0;
  puStack_6c8 = (undefined *)0x0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6b0 = 0xff00;
  uStack_6ac = 0;
  uVar14 = (ulong)_uStack_6a8 >> 0x28;
  uStack_6a8._0_4_ = (uint)_uStack_6a8 & 0xffffff00;
  uStack_6a8 = (uint5)(uint)uStack_6a8;
  _uStack_6a8 = CONCAT35((int3)uVar14,uStack_6a8);
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_560._4_4_);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x2;
  puStack_668 = (undefined *)0x1;
  puStack_660 = &UNK_0e8c79b0;
  puStack_658 = &UNK_07d98660;
  puStack_650 = &UNK_0e8c7660;
  puStack_648 = &UNK_0e8c79d0;
  puStack_640 = &UNK_0e8c80a0;
  uStack_638 = (ulong)uStack_638._4_4_ << 0x20;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(&uStack_580,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_508 = uStack_570;
  uStack_500 = uStack_568;
  uStack_518 = uStack_580;
  uStack_510 = (ulong)puStack_578;
  func_0x0e8c69b0(&puStack_688,&uStack_518,auStack_758);
  FUN_048b0bc0(auStack_758);
  if ((DAT_0f763ba0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763ba0), iVar6 != 0)) {
    func_0x0e8c90c0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f763b20,0xf53dab8);
    func_0x0410844d(&DAT_0f763ba0);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f763b20 + 4)) * 8);
  do {
    lVar8 = *plVar13;
    if (lVar8 == -1) goto LAB_0e89ece0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f763b20 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e89ece0:
    puVar10 = &DAT_0f763b20;
    if (iRam000000000f763b80 != -0x2b3da790) goto LAB_0e89ed4d;
LAB_0e89ed0b:
    lVar8 = *(long *)(puVar10 + 0x68);
    if (lVar8 == 0) goto LAB_0e89ed4d;
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e8e5de0(&uStack_588,param_1,lVar15,uVar14);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e89ed0b;
LAB_0e89ed4d:
    func_0x0e8e5de0(&uStack_588,param_1,&DAT_013d307d,0x14);
  }
  if ((char)puStack_558 == '\0') {
    uStack_458 = uStack_588;
    uStack_450 = uStack_580;
    uStack_448 = (ulong)puStack_578;
    uStack_440 = uStack_570;
    uStack_438 = uStack_568;
    uStack_430 = uStack_560;
    puStack_428 = puStack_558;
    func_0x0e8e63d0(auStack_758,uStack_588 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e89ee1f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e89ee1f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e6940(auStack_758,&uStack_458,&UNK_0123ca53,6);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f012080;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05dd3ca0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &UNK_05dd3990;
    puStack_648 = &UNK_0e8e6ef0;
    puStack_640 = &UNK_0e8e7050;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e6bf0(auStack_758);
    puStack_4a8 = (undefined1 *)CONCAT71(puStack_4a8._1_7_,puStack_428._0_1_);
    uStack_4b8 = uStack_438;
    uStack_4b0 = uStack_430;
    uStack_4c8 = uStack_448;
    uStack_4c0 = uStack_440;
    uStack_4d8 = uStack_458;
    uStack_4d0 = uStack_450;
    FUN_048b0bc0(&iStack_740);
    if ((int)uStack_4b0 == 4) {
      lVar8 = func_0x0e8e7370(&uStack_4d8);
      lVar8 = *(long *)(lVar8 + 0x48);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
LAB_0e89f037:
      puVar9[1] = 0xffffffffffffffff;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0xff;
      *puVar9 = &UNK_0f0edce8;
      *(undefined8 *)((long)puVar9 + 0x1c) = 0x600000002;
      *(undefined8 *)((long)puVar9 + 0x24) = 0;
      plVar13 = *(long **)(lVar8 + 8);
      *(undefined8 **)(lVar8 + 8) = puVar9;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if ((int)uStack_4b0 == 1) {
      lVar8 = func_0x0e8e7220(&uStack_4d8);
      lVar8 = *(long *)(lVar8 + 0x58);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      goto LAB_0e89f037;
    }
    puStack_468 = (undefined1 *)CONCAT71(puStack_468._1_7_,puStack_4a8._0_1_);
    uStack_478 = uStack_4b8;
    uStack_470 = uStack_4b0;
    uStack_488 = uStack_4c8;
    uStack_480 = uStack_4c0;
    uStack_498 = uStack_4d8;
    uStack_490 = uStack_4d0;
    func_0x0e8e63d0(auStack_758,uStack_4d8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e89f17f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e89f17f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e6940(auStack_758,&uStack_498,&UNK_012c1346,0x13);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e74f0;
    puStack_640 = &UNK_0e8e7650;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e6bf0(auStack_758);
    uStack_4e8 = (undefined1 *)CONCAT71(uStack_4e8._1_7_,puStack_468._0_1_);
    uStack_4f8 = uStack_478;
    uStack_4f0 = uStack_470;
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    uStack_518 = uStack_498;
    uStack_510 = uStack_490;
    FUN_048b0bc0(&iStack_740);
    if ((int)uStack_4f0 == 4) {
      lVar8 = func_0x0e8e7370(&uStack_518);
      lVar8 = *(long *)(lVar8 + 0x48);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
LAB_0e89f390:
      puVar9[1] = 0xffffffffffffffff;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0xff;
      *puVar9 = &UNK_0f0edc68;
      uVar21 = _UNK_014eb278;
      puVar9[4] = _DAT_014eb270;
      puVar9[5] = uVar21;
      puVar9[6] = 0;
      puVar9[7] = 0;
      plVar13 = *(long **)(lVar8 + 8);
      *(undefined8 **)(lVar8 + 8) = puVar9;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if ((int)uStack_4f0 == 1) {
      lVar8 = func_0x0e8e7220(&uStack_518);
      lVar8 = *(long *)(lVar8 + 0x58);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      goto LAB_0e89f390;
    }
    puStack_598 = (undefined1 *)CONCAT71(puStack_598._1_7_,(undefined1)uStack_4e8);
    uStack_5a8 = uStack_4f8;
    uStack_5a0 = uStack_4f0;
    uStack_5b8 = uStack_508;
    uStack_5b0 = uStack_500;
    uStack_5c8 = uStack_518;
    uStack_5c0 = uStack_510;
    func_0x0e8e63d0(auStack_758,uStack_518 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e89f4df:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e89f4df;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e6940(auStack_758,&uStack_5c8,&UNK_0120bbd6,0xd);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0ef46ef8;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_04906f70;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_04906c50;
    puStack_648 = &UNK_0e8e7830;
    puStack_640 = &UNK_0e8e7990;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e6bf0(auStack_758);
    FUN_048b0bc0(&iStack_740);
  }
  func_0x0e8c87e0(&uStack_588,&uStack_260,&DAT_013d307d,0x14);
  uStack_560 = (undefined *)0x310bdf4000000003;
  func_0x0e830b50(uStack_588 + 0x18);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4cf2f0;
  auStack_758._8_8_ = 0;
  auStack_758._0_8_ = puVar9;
  uStack_748._1_3_ = (undefined3)_DAT_013d307d;
  uStack_748 = CONCAT31(uStack_748._1_3_,0x28);
  uStack_744 = (undefined4)((ulong)_DAT_013d307d >> 0x18);
  iStack_740._0_1_ = (undefined1)((ulong)_DAT_013d307d >> 0x38);
  iStack_740._1_3_ = (undefined3)_UNK_013d3085;
  iStack_73c = (int)((ulong)_UNK_013d3085 >> 0x18);
  uStack_738 = (undefined1)((ulong)_UNK_013d3085 >> 0x38);
  uStack_737 = 0x646c726f;
  uStack_733 = 0;
  uStack_730 = CONCAT31(uStack_748._1_3_,0x28);
  uStack_727 = (undefined7)_UNK_013d3085;
  uStack_71f = 0x646c726f;
  uStack_71b = 0;
  uStack_718 = 0;
  puStack_710 = (undefined *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_6f8 = 0;
  puStack_6f0 = (undefined *)0x0;
  uStack_6e8 = CONCAT44(uStack_6e8._4_4_,0x3f600000);
  uStack_72c = uStack_744;
  uStack_728 = (undefined1)iStack_740;
  uStack_720 = uStack_738;
  func_0x048afb10(&uStack_718,8);
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6d0 = 0;
  puStack_6c8 = (undefined *)0x0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6b0 = 0xff00;
  uStack_6ac = 0;
  uVar14 = (ulong)_uStack_6a8 >> 0x28;
  uStack_6a8._0_4_ = (uint)_uStack_6a8 & 0xffffff00;
  uStack_6a8 = (uint5)(uint)uStack_6a8;
  _uStack_6a8 = CONCAT35((int3)uVar14,uStack_6a8);
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_560._4_4_);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x2;
  puStack_668 = (undefined *)0x1;
  puStack_660 = &UNK_0e8c92d0;
  puStack_658 = &UNK_07d98660;
  puStack_650 = &UNK_0e8c9000;
  puStack_648 = &UNK_0e8c92f0;
  puStack_640 = &UNK_0e8c9ae0;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(&uStack_580,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_5b8 = uStack_570;
  uStack_5b0 = uStack_568;
  uStack_5c8 = uStack_580;
  uStack_5c0 = (ulong)puStack_578;
  func_0x0e8c69b0(&puStack_688,&uStack_5c8,auStack_758);
  FUN_048b0bc0(auStack_758);
  func_0x0d8a5280(param_1);
  if ((DAT_0f763c58 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763c58), iVar6 != 0)) {
    func_0x0e8ca740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f763bd8,0xf53dab8);
    func_0x0410844d(&DAT_0f763c58);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f763bd8 + 4)) * 8);
  do {
    lVar8 = *plVar13;
    if (lVar8 == -1) goto LAB_0e89f8f0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f763bd8 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e89f8f0:
    puVar10 = &DAT_0f763bd8;
    if (iRam000000000f763c38 != -0x2b3da790) goto LAB_0e89f95d;
LAB_0e89f91b:
    lVar8 = *(long *)(puVar10 + 0x68);
    if (lVar8 == 0) goto LAB_0e89f95d;
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e8da2d0(&uStack_588,param_1,lVar15,uVar14);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e89f91b;
LAB_0e89f95d:
    func_0x0e8da2d0(&uStack_588,param_1,&DAT_0135c5ac,0x20);
  }
  if ((char)puStack_558 == '\0') {
    uStack_3d8 = uStack_588;
    uStack_3d0 = uStack_580;
    uStack_3c8 = (ulong)puStack_578;
    uStack_3c0 = uStack_570;
    uStack_3b8 = uStack_568;
    uStack_3b0 = uStack_560;
    puStack_3a8 = puStack_558;
    if ((DAT_0f763bc0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763bc0), iVar6 != 0)) {
      func_0x0e8ca600();
      func_0x0410844d(&DAT_0f763bc0);
    }
    if ((DAT_0f72c370 == '\0') && (iVar6 = func_0x04108328(&DAT_0f72c370), iVar6 != 0)) {
      func_0x0d8b8690(0xf72c358);
      func_0x0410844d(&DAT_0f72c370);
    }
    auStack_758._0_4_ = _DAT_0f72c35c;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    auVar19 = auStack_758;
    uStack_748 = 0xe8dae80;
    uStack_744 = 0;
    puVar10 = &UNK_0e8dae80;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    uVar21 = auStack_758._0_8_;
    puVar23 = (undefined1 *)auStack_758._8_8_;
    auStack_758 = auVar19;
    func_0x05da1460(&uStack_3d0);
    lVar8 = func_0x0d8b84a0(uStack_3d8 + 0x18);
    if ((*(byte *)(lVar8 + 0x1a) & 4) != 0) {
      func_0x0e8da8c0(auStack_758,uStack_3d8 + 0x18);
      if (iStack_73c == 2) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x16;
          iVar6 = *piVar11;
        }
        lVar8 = *(long *)(piVar11 + 0xc);
        while (lVar8 != auStack_758._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar8 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (iStack_73c != 1) {
          if (iStack_73c == 0) {
            puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
            *puVar2 = *puVar2 | 0x40000;
          }
          goto LAB_0e89fb03;
        }
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e89fb03:
    puStack_368 = puStack_3a8;
    uStack_378 = uStack_3b8;
    uStack_370 = uStack_3b0;
    uStack_388 = uStack_3c8;
    uStack_380 = uStack_3c0;
    uStack_398 = uStack_3d8;
    uStack_390 = uStack_3d0;
    func_0x0e8da8c0(auStack_758,uStack_3d8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e89fbaf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e89fbaf;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dae90(auStack_758,&uStack_398,&UNK_014130a0,0xc,in_R8,in_R9,uVar21,puVar23,puVar10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8db440;
    puStack_640 = &UNK_0e8db5a0;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8db140(auStack_758);
    puStack_3e8 = (undefined1 *)CONCAT71(puStack_3e8._1_7_,puStack_368._0_1_);
    uStack_3f8 = uStack_378;
    uStack_3f0 = uStack_370;
    uStack_408 = uStack_388;
    uStack_400 = uStack_380;
    uStack_418 = uStack_398;
    uStack_410 = uStack_390;
    FUN_048b0bc0(&iStack_740);
    uStack_358 = uStack_418;
    uStack_350 = uStack_410;
    uStack_348 = uStack_408;
    uStack_340 = uStack_400;
    uStack_338 = uStack_3f8;
    uStack_330 = uStack_3f0;
    puStack_328 = puStack_3e8;
    func_0x0e8da8c0(auStack_758,uStack_418 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e89fe3f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e89fe3f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dae90(auStack_758,&uStack_358,&UNK_012f20b5,0xc);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8db780;
    puStack_640 = &UNK_0e8db8e0;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8db140(auStack_758);
    puStack_428 = (undefined1 *)CONCAT71(puStack_428._1_7_,puStack_328._0_1_);
    uStack_438 = uStack_338;
    uStack_430 = uStack_330;
    uStack_448 = uStack_348;
    uStack_440 = uStack_340;
    uStack_458 = uStack_358;
    uStack_450 = uStack_350;
    FUN_048b0bc0(&iStack_740);
    uStack_4d8 = uStack_458;
    uStack_4d0 = uStack_450;
    uStack_4c8 = uStack_448;
    uStack_4c0 = uStack_440;
    uStack_4b8 = uStack_438;
    uStack_4b0 = uStack_430;
    puStack_4a8 = puStack_428;
    func_0x0e8da8c0(auStack_758,uStack_458 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a00af:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a00af;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dae90(auStack_758,&uStack_4d8,&DAT_0145f6ec,0x10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8dbac0;
    puStack_640 = &UNK_0e8dbc20;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8db140(auStack_758);
    puStack_468 = (undefined1 *)CONCAT71(puStack_468._1_7_,puStack_4a8._0_1_);
    uStack_478 = uStack_4b8;
    uStack_470 = uStack_4b0;
    uStack_488 = uStack_4c8;
    uStack_480 = uStack_4c0;
    uStack_498 = uStack_4d8;
    uStack_490 = uStack_4d0;
    FUN_048b0bc0(&iStack_740);
    uStack_518 = uStack_498;
    uStack_510 = uStack_490;
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    uStack_4f8 = uStack_478;
    uStack_4f0 = uStack_470;
    uStack_4e8 = puStack_468;
    func_0x0e8da8c0(auStack_758,uStack_498 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a031f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a031f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dae90(auStack_758,&uStack_518,&UNK_0147962f,0xc);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8dbe00;
    puStack_640 = &UNK_0e8dbf60;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8db140(auStack_758);
    puStack_598 = (undefined1 *)CONCAT71(puStack_598._1_7_,(undefined1)uStack_4e8);
    uStack_5a8 = uStack_4f8;
    uStack_5a0 = uStack_4f0;
    uStack_5b8 = uStack_508;
    uStack_5b0 = uStack_500;
    uStack_5c8 = uStack_518;
    uStack_5c0 = uStack_510;
    FUN_048b0bc0(&iStack_740);
    func_0x0e8da8c0(auStack_758,uStack_5c8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a054f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a054f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dae90(auStack_758,&uStack_5c8,&UNK_01483087,0xb);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0ef580;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_07b12180;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_07b0de30;
    puStack_648 = &UNK_0e8dc140;
    puStack_640 = &UNK_0e8dc2a0;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8db140(auStack_758);
    FUN_048b0bc0(&iStack_740);
  }
  func_0x0e8c87e0(&uStack_588,&uStack_260,&DAT_0135c5ac,0x20);
  uStack_560 = (undefined *)0xe957316700000003;
  func_0x0e830b50(uStack_588 + 0x18);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4cf378;
  auStack_758._8_8_ = 0;
  auStack_758._0_8_ = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_0135c5c4;
  uStack_738 = SUB81(puVar9,0);
  uStack_737 = (undefined4)((ulong)puVar9 >> 8);
  uStack_733 = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_732 = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_748 = 0x29;
  uStack_744 = 0;
  iStack_740 = 0x20;
  iStack_73c = 0;
  puVar9[2] = _DAT_0135c5bc;
  puVar9[3] = uVar21;
  uVar21 = _UNK_0135c5b4;
  *puVar9 = _DAT_0135c5ac;
  puVar9[1] = uVar21;
  *(undefined1 *)(puVar9 + 4) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_0135c5c4;
  uStack_720 = SUB81(puVar9,0);
  uStack_71f = (undefined4)((ulong)puVar9 >> 8);
  uStack_71b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_71a = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_730 = 0x29;
  uStack_72c = 0;
  uStack_728 = 0x20;
  uStack_727 = 0;
  puVar9[2] = _DAT_0135c5bc;
  puVar9[3] = uVar21;
  uVar21 = _UNK_0135c5b4;
  *puVar9 = _DAT_0135c5ac;
  puVar9[1] = uVar21;
  *(undefined1 *)(puVar9 + 4) = 0;
  uStack_6f8 = 0;
  puStack_6f0 = (undefined *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_718 = 0;
  puStack_710 = (undefined *)0x0;
  uStack_6e8 = CONCAT44(uStack_6e8._4_4_,0x3f600000);
  func_0x048afb10(&uStack_718,8);
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6d0 = 0;
  puStack_6c8 = (undefined *)0x0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6b0 = 0xff00;
  uStack_6ac = 0;
  uVar14 = (ulong)_uStack_6a8 >> 0x28;
  uStack_6a8._0_4_ = (uint)_uStack_6a8 & 0xffffff00;
  uStack_6a8 = (uint5)(uint)uStack_6a8;
  _uStack_6a8 = CONCAT35((int3)uVar14,uStack_6a8);
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_560._4_4_);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x2;
  puStack_668 = (undefined *)0x1;
  puStack_660 = &UNK_0e8ca980;
  puStack_658 = &UNK_07d98660;
  puStack_650 = &UNK_0e8ca680;
  puStack_648 = &UNK_0e8ca9a0;
  puStack_640 = &UNK_0e8cb070;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(&uStack_580,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_5b8 = uStack_570;
  uStack_5b0 = uStack_568;
  uStack_5c8 = uStack_580;
  uStack_5c0 = (ulong)puStack_578;
  func_0x0e8c69b0(&puStack_688,&uStack_5c8,auStack_758);
  FUN_048b0bc0(auStack_758);
  func_0x0d8a5280(param_1);
  func_0x0d89f0d0(param_1);
  if ((DAT_0f763d10 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763d10), iVar6 != 0)) {
    func_0x0e8cbe20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f763c90,0xf53dab8);
    func_0x0410844d(&DAT_0f763d10);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f763c90 + 4)) * 8);
  do {
    lVar8 = *plVar13;
    if (lVar8 == -1) goto LAB_0e8a09d0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f763c90 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e8a09d0:
    puVar10 = &DAT_0f763c90;
    if (iRam000000000f763cf0 != -0x2b3da790) goto LAB_0e8a0a3d;
LAB_0e8a09fb:
    lVar8 = *(long *)(puVar10 + 0x68);
    if (lVar8 == 0) goto LAB_0e8a0a3d;
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e8dc480(&uStack_5c8,param_1,lVar15,uVar14);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e8a09fb;
LAB_0e8a0a3d:
    func_0x0e8dc480(&uStack_5c8,param_1,&DAT_01495802,0x27);
  }
  if ((char)puStack_598 == '\0') {
    uStack_228 = uStack_5c8;
    uStack_220 = uStack_5c0;
    uStack_218 = uStack_5b8;
    uStack_210 = uStack_5b0;
    uStack_208 = uStack_5a8;
    uStack_200 = uStack_5a0;
    puStack_1f8 = puStack_598;
    if ((DAT_0f763c78 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763c78), iVar6 != 0)) {
      func_0x0e8cbce0();
      func_0x0410844d(&DAT_0f763c78);
    }
    if ((DAT_0f72c370 == '\0') && (iVar6 = func_0x04108328(&DAT_0f72c370), iVar6 != 0)) {
      func_0x0d8b8690(0xf72c358);
      func_0x0410844d(&DAT_0f72c370);
    }
    auStack_758._0_4_ = _DAT_0f72c35c;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    uVar21 = auStack_758._8_8_;
    uStack_748 = 0xe8dd050;
    uStack_744 = 0;
    puVar10 = &UNK_0e8dd050;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    uVar22 = auStack_758._0_8_;
    puVar23 = (undefined1 *)auStack_758._8_8_;
    auStack_758._8_8_ = uVar21;
    func_0x05da1460(&uStack_220);
    lVar8 = func_0x0d8b84a0(uStack_228 + 0x18);
    if ((*(byte *)(lVar8 + 0x1a) & 4) != 0) {
      func_0x0e8dca70(auStack_758,uStack_228 + 0x18);
      if (iStack_73c == 2) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x16;
          iVar6 = *piVar11;
        }
        puVar4 = *(undefined1 **)(piVar11 + 0xc);
        while (puVar4 != (undefined1 *)auStack_758._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          puVar4 = *(undefined1 **)(piVar11 + 0xc);
        }
      }
      else {
        if (iStack_73c != 1) {
          if (iStack_73c == 0) {
            puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
            *puVar2 = *puVar2 | 0x40000;
          }
          goto LAB_0e8a0c33;
        }
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e8a0c33:
    puStack_1b8 = puStack_1f8;
    uStack_1c8 = uStack_208;
    uStack_1c0 = uStack_200;
    uStack_1d8 = uStack_218;
    uStack_1d0 = uStack_210;
    uStack_1e8 = uStack_228;
    uStack_1e0 = uStack_220;
    func_0x0e8dca70(auStack_758,uStack_228 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar4 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar4 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar4 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a0cdf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a0cdf;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_1e8,&UNK_013acb18,0xd,in_R8,in_R9,uVar22,puVar23,puVar10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8dd670;
    puStack_640 = &UNK_0e8dd7d0;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    uStack_b8 = puStack_1b8._0_1_;
    uStack_c8 = uStack_1c8;
    uStack_c0 = uStack_1c0;
    uStack_d8 = uStack_1d8;
    uStack_d0 = uStack_1d0;
    uStack_e8 = uStack_1e8;
    uStack_e0 = uStack_1e0;
    FUN_048b0bc0(&iStack_740);
    uStack_1a8 = uStack_e8;
    uStack_1a0 = uStack_e0;
    uStack_198 = uStack_d8;
    uStack_190 = uStack_d0;
    uStack_188 = uStack_c8;
    uStack_180 = uStack_c0;
    uStack_178 = CONCAT71(uStack_b7,uStack_b8);
    func_0x0e8dca70(auStack_758,uStack_e8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a0f6f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a0f6f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_1a8,&UNK_012f20c2,0x18);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8dd9b0;
    puStack_640 = &UNK_0e8ddb10;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    uStack_78 = (undefined1)uStack_178;
    uStack_88 = uStack_188;
    uStack_80 = uStack_180;
    uStack_98 = uStack_198;
    uStack_90 = uStack_190;
    uStack_a8 = uStack_1a8;
    uStack_a0 = uStack_1a0;
    FUN_048b0bc0(&iStack_740);
    uStack_168 = uStack_a8;
    uStack_160 = uStack_a0;
    uStack_158 = uStack_98;
    uStack_150 = uStack_90;
    uStack_148 = uStack_88;
    uStack_140 = uStack_80;
    uStack_138 = CONCAT71(uStack_77,uStack_78);
    func_0x0e8dca70(auStack_758,uStack_a8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a11ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a11ef;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_168,&UNK_01340d0f,0x18);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8ddcf0;
    puStack_640 = &UNK_0e8dde50;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    uStack_38 = (undefined1)uStack_138;
    uStack_48 = uStack_148;
    uStack_40 = uStack_140;
    uStack_58 = uStack_158;
    uStack_50 = uStack_150;
    uStack_68 = uStack_168;
    uStack_60 = uStack_160;
    FUN_048b0bc0(&iStack_740);
    uStack_128 = uStack_68;
    uStack_120 = uStack_60;
    uStack_118 = uStack_58;
    uStack_110 = uStack_50;
    uStack_108 = uStack_48;
    uStack_100 = uStack_40;
    uStack_f8 = CONCAT71(uStack_37,uStack_38);
    func_0x0e8dca70(auStack_758,uStack_68 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a146f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a146f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_128,&UNK_014c9bcf,0xb);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8de030;
    puStack_640 = &UNK_0e8de190;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    puStack_268 = (undefined1 *)CONCAT71(puStack_268._1_7_,(undefined1)uStack_f8);
    uStack_278 = uStack_108;
    uStack_270 = uStack_100;
    uStack_288 = uStack_118;
    uStack_280 = uStack_110;
    uStack_298 = uStack_128;
    uStack_290 = uStack_120;
    FUN_048b0bc0(&iStack_740);
    uStack_318 = uStack_298;
    uStack_310 = uStack_290;
    uStack_308 = uStack_288;
    uStack_300 = uStack_280;
    uStack_2f8 = uStack_278;
    uStack_2f0 = uStack_270;
    puStack_2e8 = puStack_268;
    func_0x0e8dca70(auStack_758,uStack_298 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a16ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a16ef;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_318,&DAT_0145f6ec,0x10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8de370;
    puStack_640 = &UNK_0e8de4d0;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    puStack_2a8 = (undefined1 *)CONCAT71(puStack_2a8._1_7_,puStack_2e8._0_1_);
    uStack_2b8 = uStack_2f8;
    uStack_2b0 = uStack_2f0;
    uStack_2c8 = uStack_308;
    uStack_2c0 = uStack_300;
    uStack_2d8 = uStack_318;
    uStack_2d0 = uStack_310;
    FUN_048b0bc0(&iStack_740);
    uStack_3d8 = uStack_2d8;
    uStack_3d0 = uStack_2d0;
    uStack_3c8 = uStack_2c8;
    uStack_3c0 = uStack_2c0;
    uStack_3b8 = uStack_2b8;
    uStack_3b0 = uStack_2b0;
    puStack_3a8 = puStack_2a8;
    func_0x0e8dca70(auStack_758,uStack_2d8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a196f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a196f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_3d8,&UNK_013f9f4b,0xc);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8de6b0;
    puStack_640 = &UNK_0e8de810;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    puStack_368 = (undefined1 *)CONCAT71(puStack_368._1_7_,puStack_3a8._0_1_);
    uStack_378 = uStack_3b8;
    uStack_370 = uStack_3b0;
    uStack_388 = uStack_3c8;
    uStack_380 = uStack_3c0;
    uStack_398 = uStack_3d8;
    uStack_390 = uStack_3d0;
    FUN_048b0bc0(&iStack_740);
    uStack_418 = uStack_398;
    uStack_410 = uStack_390;
    uStack_408 = uStack_388;
    uStack_400 = uStack_380;
    uStack_3f8 = uStack_378;
    uStack_3f0 = uStack_370;
    puStack_3e8 = puStack_368;
    func_0x0e8dca70(auStack_758,uStack_398 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a1bef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a1bef;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_418,&UNK_012725f9,0xc);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0c2710;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_072a3520;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_072a3240;
    puStack_648 = &UNK_0e8de9f0;
    puStack_640 = &UNK_0e8deb50;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    puStack_328 = (undefined1 *)CONCAT71(puStack_328._1_7_,puStack_3e8._0_1_);
    uStack_338 = uStack_3f8;
    uStack_330 = uStack_3f0;
    uStack_348 = uStack_408;
    uStack_340 = uStack_400;
    uStack_358 = uStack_418;
    uStack_350 = uStack_410;
    FUN_048b0bc0(&iStack_740);
    uStack_5e6 = 0;
    uStack_5e2 = 0;
    uStack_680 = 0xffffffffffffffff;
    puStack_678 = (undefined *)0x0;
    pcStack_670 = (code *)CONCAT71(pcStack_670._1_7_,0xff);
    puStack_688 = &UNK_0f48a698;
    puStack_660 = (undefined *)0xffffffffffffffff;
    puStack_658 = (undefined *)0x0;
    puStack_650 = (undefined1 *)CONCAT71(puStack_650._1_7_,0xff);
    puStack_668 = &UNK_0f0edc68;
    puStack_648 = (undefined *)0x0;
    puStack_640 = _DAT_014f0238;
    uStack_638 = 0;
    uStack_630 = 0;
    plStack_628 = (long *)CONCAT71(plStack_628._1_7_,1);
    uStack_618 = 0xffffffffffffffff;
    uStack_610 = 0;
    uStack_608 = 0xff;
    puStack_620 = &UNK_0f0edc68;
    uStack_600 = 0;
    puStack_5f8 = _DAT_014f0238;
    uStack_5f0 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 1;
    uStack_5d8 = 0;
    func_0x0e8abe20(&uStack_458,&uStack_358,&puStack_688);
    puStack_4a8 = puStack_428;
    uStack_4b8 = uStack_438;
    uStack_4b0 = uStack_430;
    uStack_4c8 = uStack_448;
    uStack_4c0 = uStack_440;
    uStack_4d8 = uStack_458;
    uStack_4d0 = uStack_450;
    func_0x0e8dca70(auStack_758,uStack_458 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a1faf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a1faf;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_4d8,&UNK_01376d00,0x13);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0c2710;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_588 = CONCAT44(uStack_588._4_4_,uStack_748);
    uStack_580 = 0;
    puStack_578 = (undefined8 *)((ulong)puStack_578 & 0xffffffff00000000);
    uStack_570 = 1;
    uStack_568 = 0;
    uStack_560 = &UNK_072a3520;
    puStack_558 = &SUB_048b06d0;
    puStack_550 = &SUB_072a3240;
    puStack_548 = &UNK_0e8ded30;
    puStack_540 = &UNK_0e8dee90;
    uStack_538 = 0;
    uStack_530 = 0;
    plStack_528 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&uStack_588);
    plVar13 = plStack_528;
    if (plStack_528 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_528 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_528 + 0x10))(plStack_528);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    puStack_468 = (undefined1 *)CONCAT71(puStack_468._1_7_,puStack_4a8._0_1_);
    uStack_478 = uStack_4b8;
    uStack_470 = uStack_4b0;
    uStack_488 = uStack_4c8;
    uStack_480 = uStack_4c0;
    uStack_498 = uStack_4d8;
    uStack_490 = uStack_4d0;
    FUN_048b0bc0(&iStack_740);
    func_0x0e8dca70(auStack_758,uStack_498 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      puVar23 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar23 != (undefined1 *)auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar23 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e8a21ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a21ef;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dd060(auStack_758,&uStack_498,&UNK_013f9f58,0x19);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0c2710;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    uStack_588 = CONCAT44(uStack_588._4_4_,uStack_748);
    uStack_580 = 0;
    puStack_578 = (undefined8 *)((ulong)puStack_578 & 0xffffffff00000000);
    uStack_570 = 1;
    uStack_568 = 0;
    uStack_560 = &UNK_072a3520;
    puStack_558 = &SUB_048b06d0;
    puStack_550 = &SUB_072a3240;
    puStack_548 = &UNK_0e8df070;
    puStack_540 = &UNK_0e8df1d0;
    uStack_538 = 0;
    uStack_530 = 0;
    plStack_528 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&uStack_588);
    plVar13 = plStack_528;
    if (plStack_528 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_528 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_528 + 0x10))(plStack_528);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8dd370(auStack_758);
    uStack_4e8 = (undefined1 *)CONCAT71(uStack_4e8._1_7_,puStack_468._0_1_);
    uStack_4f8 = uStack_478;
    uStack_4f0 = uStack_470;
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    uStack_518 = uStack_498;
    uStack_510 = uStack_490;
    FUN_048b0bc0(&iStack_740);
    uStack_748 = 0;
    uStack_744 = 0;
    iStack_740 = CONCAT31(iStack_740._1_3_,0xff);
    auStack_758._8_8_ = 0xffffffffffffffff;
    auStack_758._0_8_ = &UNK_0f48a698;
    uStack_730 = 0xffffffff;
    uStack_72c = 0xffffffff;
    uStack_728 = 0;
    uStack_727 = 0;
    uStack_720 = 0xff;
    uStack_738 = 0x68;
    uStack_737 = 0xf0edc;
    uStack_733 = 0;
    uStack_732 = 0;
    uStack_718 = 0;
    puStack_710 = _DAT_014f0238;
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_6f8 = CONCAT71(uStack_6f8._1_7_,1);
    uStack_6e8 = 0xffffffffffffffff;
    uStack_6e0 = 0;
    uStack_6d8 = CONCAT71(uStack_6d8._1_7_,0xff);
    puStack_6f0 = &UNK_0f0edc68;
    uStack_6d0 = 0;
    puStack_6c8 = _DAT_014f0238;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = CONCAT11(uStack_6b0._1_1_,1);
    _uStack_6a8 = 0;
    func_0x0e8abe20(&uStack_588,&uStack_518,auStack_758);
  }
  func_0x0e8c87e0(&uStack_588,&uStack_260,&DAT_01495802,0x27);
  uStack_560 = (undefined *)0x5a1a75ce00000003;
  func_0x0e830b50(uStack_588 + 0x18);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4cf400;
  auStack_758._8_8_ = 0;
  auStack_758._0_8_ = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_0149581a;
  uStack_738 = SUB81(puVar9,0);
  uStack_737 = (undefined4)((ulong)puVar9 >> 8);
  uStack_733 = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_732 = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_748 = 0x29;
  uStack_744 = 0;
  iStack_740 = 0x27;
  iStack_73c = 0;
  puVar9[2] = _DAT_01495812;
  puVar9[3] = uVar21;
  uVar21 = _UNK_0149580a;
  *puVar9 = _DAT_01495802;
  puVar9[1] = uVar21;
  *(undefined8 *)((long)puVar9 + 0x1f) = 0x726f68636e615f64;
  *(undefined1 *)((long)puVar9 + 0x27) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_0149581a;
  uStack_720 = SUB81(puVar9,0);
  uStack_71f = (undefined4)((ulong)puVar9 >> 8);
  uStack_71b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_71a = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_730 = 0x29;
  uStack_72c = 0;
  uStack_728 = 0x27;
  uStack_727 = 0;
  puVar9[2] = _DAT_01495812;
  puVar9[3] = uVar21;
  uVar21 = _UNK_0149580a;
  *puVar9 = _DAT_01495802;
  puVar9[1] = uVar21;
  *(undefined8 *)((long)puVar9 + 0x1f) = 0x726f68636e615f64;
  *(undefined1 *)((long)puVar9 + 0x27) = 0;
  uStack_6f8 = 0;
  puStack_6f0 = (undefined *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_718 = 0;
  puStack_710 = (undefined *)0x0;
  uStack_6e8 = CONCAT44(uStack_6e8._4_4_,0x3f600000);
  func_0x048afb10(&uStack_718,8);
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6d0 = 0;
  puStack_6c8 = (undefined *)0x0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6b0 = 0xff00;
  uStack_6ac = 0;
  uVar14 = (ulong)_uStack_6a8 >> 0x28;
  uStack_6a8._0_4_ = (uint)_uStack_6a8 & 0xffffff00;
  uStack_6a8 = (uint5)(uint)uStack_6a8;
  _uStack_6a8 = CONCAT35((int3)uVar14,uStack_6a8);
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_560._4_4_);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x2;
  puStack_668 = (undefined *)0x1;
  puStack_660 = &UNK_0e8cc080;
  puStack_658 = &UNK_07d98660;
  puStack_650 = &UNK_0e8cbd60;
  puStack_648 = &UNK_0e8cc0a0;
  puStack_640 = &UNK_0e8cc770;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(&uStack_580,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_5b8 = uStack_570;
  uStack_5b0 = uStack_568;
  uStack_5c8 = uStack_580;
  uStack_5c0 = (ulong)puStack_578;
  func_0x0e8c69b0(&puStack_688,&uStack_5c8,auStack_758);
  FUN_048b0bc0(auStack_758);
  func_0x0d8a5280(param_1);
  if ((DAT_0f763dc8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763dc8), iVar6 != 0)) {
    func_0x0e8cd400();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f763d48,0xf53dab8);
    func_0x0410844d(&DAT_0f763dc8);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f763d48 + 4)) * 8);
  do {
    lVar8 = *plVar13;
    if (lVar8 == -1) goto LAB_0e8a27b0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f763d48 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e8a27b0:
    puVar10 = &DAT_0f763d48;
    if (iRam000000000f763da8 != -0x2b3da790) goto LAB_0e8a281d;
LAB_0e8a27db:
    lVar8 = *(long *)(puVar10 + 0x68);
    if (lVar8 == 0) goto LAB_0e8a281d;
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e8df3b0(&uStack_588,param_1,lVar15,uVar14);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e8a27db;
LAB_0e8a281d:
    func_0x0e8df3b0(&uStack_588,param_1,&DAT_012a4979,0x27);
  }
  if ((char)puStack_558 == '\0') {
    uStack_4d8 = uStack_588;
    uStack_4d0 = uStack_580;
    uStack_4c8 = (ulong)puStack_578;
    uStack_4c0 = uStack_570;
    uStack_4b8 = uStack_568;
    uStack_4b0 = uStack_560;
    puStack_4a8 = puStack_558;
    if ((DAT_0f763d30 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763d30), iVar6 != 0)) {
      func_0x0e8cd2c0();
      func_0x0410844d(&DAT_0f763d30);
    }
    if ((DAT_0f72c370 == '\0') && (iVar6 = func_0x04108328(&DAT_0f72c370), iVar6 != 0)) {
      func_0x0d8b8690(0xf72c358);
      func_0x0410844d(&DAT_0f72c370);
    }
    auStack_758._0_4_ = _DAT_0f72c35c;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    auVar19 = auStack_758;
    uStack_748 = 0xe8dff60;
    uStack_744 = 0;
    puVar10 = &UNK_0e8dff60;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    uVar21 = auStack_758._0_8_;
    puVar23 = (undefined1 *)auStack_758._8_8_;
    auStack_758 = auVar19;
    func_0x05da1460(&uStack_4d0);
    lVar8 = func_0x0d8b84a0(uStack_4d8 + 0x18);
    if ((*(byte *)(lVar8 + 0x1a) & 4) != 0) {
      func_0x0e8df9a0(auStack_758,uStack_4d8 + 0x18);
      if (iStack_73c == 2) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x16;
          iVar6 = *piVar11;
        }
        lVar8 = *(long *)(piVar11 + 0xc);
        while (lVar8 != auStack_758._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar8 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (iStack_73c != 1) {
          if (iStack_73c == 0) {
            puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
            *puVar2 = *puVar2 | 0x40000;
          }
          goto LAB_0e8a2a13;
        }
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e8a2a13:
    puStack_468 = puStack_4a8;
    uStack_478 = uStack_4b8;
    uStack_470 = uStack_4b0;
    uStack_488 = uStack_4c8;
    uStack_480 = uStack_4c0;
    uStack_498 = uStack_4d8;
    uStack_490 = uStack_4d0;
    func_0x0e8df9a0(auStack_758,uStack_4d8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a2abf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a2abf;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dff70(auStack_758,&uStack_498,&UNK_01208815,0x13,in_R8,in_R9,uVar21,puVar23,puVar10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e0580;
    puStack_640 = &UNK_0e8e06e0;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e0280(auStack_758);
    uVar14 = uStack_498;
    uStack_458 = uStack_490;
    uStack_450 = uStack_488;
    uStack_448 = uStack_480;
    uStack_440 = uStack_478;
    iVar6 = (int)uStack_470;
    uStack_45c = uStack_470._4_4_;
    uStack_5c9 = puStack_468._0_1_;
    FUN_048b0bc0(&iStack_740);
    uStack_418 = uStack_418 & 0xffff000000000000;
    if (iVar6 == 4) {
      if ((DAT_0f763dc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f763dc8), iVar7 != 0)) {
        func_0x0e8cd400();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f763d48,0xf53dab8);
        func_0x0410844d(&DAT_0f763dc8);
      }
      plVar13 = (long *)(*(long *)(uVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar14 + 0x20) - *(long *)(uVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f763d48 + 4)) * 8);
      do {
        lVar8 = *plVar13;
        if (lVar8 == -1) goto LAB_0e8a2d68;
        plVar13 = (long *)(*(long *)(uVar14 + 0x30) + lVar8 * 0x18);
      } while (*(uint *)(*(long *)(uVar14 + 0x30) + 8 + lVar8 * 0x18) !=
               *(uint *)(_DAT_0f763d48 + 4));
      if (plVar13 == *(long **)(uVar14 + 0x38)) {
LAB_0e8a2d68:
        puVar10 = &DAT_0f763d48;
      }
      else {
        puVar10 = (undefined *)plVar13[2];
      }
      lVar8 = func_0x048b1040(uVar14 + 0x18,puVar10,uStack_45c,1);
      if (lVar8 == 0) {
        auStack_758 = ZEXT816(0);
        func_0x048b10d0(auStack_758);
        lVar8 = auStack_758._0_8_;
      }
      lVar15 = *(long *)(lVar8 + 0x38);
      if (*(long *)(lVar8 + 0x38) == 0) {
        auStack_758 = ZEXT816(0);
        func_0x048b10d0(auStack_758);
        lVar15 = auStack_758._0_8_;
        if (auStack_758._0_8_ != 0) goto LAB_0e8a3889;
      }
      else {
LAB_0e8a3889:
        do {
          lVar8 = lVar15;
          lVar15 = *(long *)(lVar8 + 0x38);
          if (*(long *)(lVar8 + 0x38) == 0) {
            auStack_758 = ZEXT816(0);
            func_0x048b10d0(auStack_758);
            lVar15 = auStack_758._0_8_;
          }
        } while (lVar15 != 0);
      }
      lVar8 = *(long *)(lVar8 + 0x48);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar9[1] = 0xffffffffffffffff;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0xff;
      *puVar9 = &UNK_0f0edc68;
      uVar21 = _UNK_014eb288;
      puVar9[4] = _DAT_014eb280;
      puVar9[5] = uVar21;
      puVar9[6] = 0;
      *(undefined2 *)(puVar9 + 7) = 0;
      *(undefined4 *)((long)puVar9 + 0x3a) = (undefined4)uStack_418;
      *(undefined2 *)((long)puVar9 + 0x3e) = uStack_418._4_2_;
      plVar13 = *(long **)(lVar8 + 8);
      *(undefined8 **)(lVar8 + 8) = puVar9;
joined_r0x0e8a3953:
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iVar6 == 1) {
      if ((DAT_0f763dc8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f763dc8), iVar7 != 0)) {
        func_0x0e8cd400();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f763d48,0xf53dab8);
        func_0x0410844d(&DAT_0f763dc8);
      }
      plVar13 = (long *)(*(long *)(uVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar14 + 0x20) - *(long *)(uVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f763d48 + 4)) * 8);
      do {
        lVar8 = *plVar13;
        if (lVar8 == -1) goto LAB_0e8a2ceb;
        plVar13 = (long *)(*(long *)(uVar14 + 0x30) + lVar8 * 0x18);
      } while (*(uint *)(*(long *)(uVar14 + 0x30) + 8 + lVar8 * 0x18) !=
               *(uint *)(_DAT_0f763d48 + 4));
      if (plVar13 == *(long **)(uVar14 + 0x38)) {
LAB_0e8a2ceb:
        puVar10 = &DAT_0f763d48;
      }
      else {
        puVar10 = (undefined *)plVar13[2];
      }
      lVar8 = func_0x048b0c90(uVar14 + 0x18,puVar10,uStack_45c,1);
      if (lVar8 == 0) {
        auStack_758 = ZEXT816(0);
        func_0x048b0d20(auStack_758);
        lVar8 = auStack_758._0_8_;
      }
      lVar8 = *(long *)(lVar8 + 0x58);
      puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar9[1] = 0xffffffffffffffff;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0xff;
      *puVar9 = &UNK_0f0edc68;
      uVar21 = _UNK_014eb288;
      puVar9[4] = _DAT_014eb280;
      puVar9[5] = uVar21;
      puVar9[6] = 0;
      *(undefined2 *)(puVar9 + 7) = 0;
      *(undefined4 *)((long)puVar9 + 0x3a) = (undefined4)uStack_418;
      *(undefined2 *)((long)puVar9 + 0x3e) = uStack_418._4_2_;
      plVar13 = *(long **)(lVar8 + 8);
      *(undefined8 **)(lVar8 + 8) = puVar9;
      goto joined_r0x0e8a3953;
    }
    uStack_500 = uStack_448;
    uStack_4f8 = uStack_440;
    uStack_510 = uStack_458;
    uStack_508 = uStack_450;
    uStack_518 = uVar14;
    uStack_4f0 = CONCAT44(uStack_45c,iVar6);
    uVar5 = (undefined4)uStack_358;
    uStack_4e8._0_5_ = CONCAT41(uVar5,uStack_5c9);
    uStack_4e8 = (undefined1 *)CONCAT44(uStack_358._3_4_,(undefined4)uStack_4e8);
    func_0x0e8df9a0(auStack_758,uVar14 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a2f7f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a2f7f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dff70(auStack_758,&uStack_518,&UNK_01376d14,0x19);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e08c0;
    puStack_640 = &UNK_0e8e0a20;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e0280(auStack_758);
    puStack_598 = (undefined1 *)CONCAT71(puStack_598._1_7_,(undefined1)uStack_4e8);
    uStack_5a8 = uStack_4f8;
    uStack_5a0 = uStack_4f0;
    uStack_5b8 = uStack_508;
    uStack_5b0 = uStack_500;
    uStack_5c8 = uStack_518;
    uStack_5c0 = uStack_510;
    FUN_048b0bc0(&iStack_740);
    func_0x0e8df9a0(auStack_758,uStack_5c8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a31bf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a31bf;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8dff70(auStack_758,&uStack_5c8,&UNK_013acb73,0x16);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e0c00;
    puStack_640 = &UNK_0e8e0d60;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e0280(auStack_758);
    FUN_048b0bc0(&iStack_740);
  }
  func_0x0e8c87e0(&uStack_588,&uStack_260,&DAT_012a4979,0x27);
  uStack_560 = (undefined *)0x898f642400000003;
  func_0x0e830b50(uStack_588 + 0x18);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4cf488;
  auStack_758._8_8_ = 0;
  auStack_758._0_8_ = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_012a4991;
  uStack_738 = SUB81(puVar9,0);
  uStack_737 = (undefined4)((ulong)puVar9 >> 8);
  uStack_733 = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_732 = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_748 = 0x29;
  uStack_744 = 0;
  iStack_740 = 0x27;
  iStack_73c = 0;
  puVar9[2] = _DAT_012a4989;
  puVar9[3] = uVar21;
  uVar21 = _UNK_012a4981;
  *puVar9 = _DAT_012a4979;
  puVar9[1] = uVar21;
  *(undefined8 *)((long)puVar9 + 0x1f) = 0x726579616c705f79;
  *(undefined1 *)((long)puVar9 + 0x27) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_012a4991;
  uStack_720 = SUB81(puVar9,0);
  uStack_71f = (undefined4)((ulong)puVar9 >> 8);
  uStack_71b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_71a = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_730 = 0x29;
  uStack_72c = 0;
  uStack_728 = 0x27;
  uStack_727 = 0;
  puVar9[2] = _DAT_012a4989;
  puVar9[3] = uVar21;
  uVar21 = _UNK_012a4981;
  *puVar9 = _DAT_012a4979;
  puVar9[1] = uVar21;
  *(undefined8 *)((long)puVar9 + 0x1f) = 0x726579616c705f79;
  *(undefined1 *)((long)puVar9 + 0x27) = 0;
  uStack_6f8 = 0;
  puStack_6f0 = (undefined *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_718 = 0;
  puStack_710 = (undefined *)0x0;
  uStack_6e8 = CONCAT44(uStack_6e8._4_4_,0x3f600000);
  func_0x048afb10(&uStack_718,8);
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6d0 = 0;
  puStack_6c8 = (undefined *)0x0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6b0 = 0xff00;
  uStack_6ac = 0;
  uVar14 = (ulong)_uStack_6a8 >> 0x28;
  uStack_6a8._0_4_ = (uint)_uStack_6a8 & 0xffffff00;
  uStack_6a8 = (uint5)(uint)uStack_6a8;
  _uStack_6a8 = CONCAT35((int3)uVar14,uStack_6a8);
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_560._4_4_);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x2;
  puStack_668 = (undefined *)0x1;
  puStack_660 = &UNK_0e8cd640;
  puStack_658 = &UNK_07d98660;
  puStack_650 = &UNK_0e8cd340;
  puStack_648 = &UNK_0e8cd660;
  puStack_640 = &UNK_0e8cdd30;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(&uStack_580,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_5b8 = uStack_570;
  uStack_5b0 = uStack_568;
  uStack_5c8 = uStack_580;
  uStack_5c0 = (ulong)puStack_578;
  func_0x0e8c69b0(&puStack_688,&uStack_5c8,auStack_758);
  FUN_048b0bc0(auStack_758);
  func_0x0d8a5280(param_1);
  if ((DAT_0f763e80 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763e80), iVar6 != 0)) {
    func_0x0e8cec00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f763e00,0xf53dab8);
    func_0x0410844d(&DAT_0f763e80);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f763e00 + 4)) * 8);
  do {
    lVar8 = *plVar13;
    if (lVar8 == -1) goto LAB_0e8a3640;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f763e00 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e8a3640:
    puVar10 = &DAT_0f763e00;
    if (iRam000000000f763e60 != -0x2b3da790) goto LAB_0e8a36ad;
LAB_0e8a366b:
    lVar8 = *(long *)(puVar10 + 0x68);
    if (lVar8 == 0) goto LAB_0e8a36ad;
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e8e0f40(&uStack_588,param_1,lVar15,uVar14);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e8a366b;
LAB_0e8a36ad:
    func_0x0e8e0f40(&uStack_588,param_1,&DAT_014c9b88,0x20);
  }
  if ((char)puStack_558 == '\0') {
    uStack_298 = uStack_588;
    uStack_290 = uStack_580;
    uStack_288 = (ulong)puStack_578;
    uStack_280 = uStack_570;
    uStack_278 = uStack_568;
    uStack_270 = uStack_560;
    puStack_268 = puStack_558;
    if ((DAT_0f763de8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763de8), iVar6 != 0)) {
      func_0x0e8ceac0();
      func_0x0410844d(&DAT_0f763de8);
    }
    if ((DAT_0f72c370 == '\0') && (iVar6 = func_0x04108328(&DAT_0f72c370), iVar6 != 0)) {
      func_0x0d8b8690(0xf72c358);
      func_0x0410844d(&DAT_0f72c370);
    }
    auStack_758._0_4_ = _DAT_0f72c35c;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    auVar19 = auStack_758;
    uStack_748 = 0xe8e1b20;
    uStack_744 = 0;
    puVar10 = &UNK_0e8e1b20;
    auStack_758._8_8_ = &SUB_0d8b84a0;
    uVar21 = auStack_758._0_8_;
    puVar23 = (undefined1 *)auStack_758._8_8_;
    auStack_758 = auVar19;
    func_0x05da1460(&uStack_290);
    lVar8 = func_0x0d8b84a0(uStack_298 + 0x18);
    if ((*(byte *)(lVar8 + 0x1a) & 4) != 0) {
      func_0x0e8e1530(auStack_758,uStack_298 + 0x18);
      if (iStack_73c == 2) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x16;
          iVar6 = *piVar11;
        }
        lVar8 = *(long *)(piVar11 + 0xc);
        while (lVar8 != auStack_758._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar8 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (iStack_73c != 1) {
          if (iStack_73c == 0) {
            puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
            *puVar2 = *puVar2 | 0x40000;
          }
          goto LAB_0e8a39e3;
        }
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e8a39e3:
    puStack_2e8 = puStack_268;
    uStack_2f8 = uStack_278;
    uStack_2f0 = uStack_270;
    uStack_308 = uStack_288;
    uStack_300 = uStack_280;
    uStack_318 = uStack_298;
    uStack_310 = uStack_290;
    func_0x0e8e1530(auStack_758,uStack_298 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a3a8f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a3a8f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e1b30(auStack_758,&uStack_318,&UNK_0145f81e,0x12,in_R8,in_R9,uVar21,puVar23,puVar10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0ef46ce8;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_0490ce30;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_0490cb20;
    puStack_648 = &UNK_0e8e20e0;
    puStack_640 = &UNK_0e8e2240;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e1de0(auStack_758);
    puStack_2a8 = (undefined1 *)CONCAT71(puStack_2a8._1_7_,puStack_2e8._0_1_);
    uStack_2b8 = uStack_2f8;
    uStack_2b0 = uStack_2f0;
    uStack_2c8 = uStack_308;
    uStack_2c0 = uStack_300;
    uStack_2d8 = uStack_318;
    uStack_2d0 = uStack_310;
    FUN_048b0bc0(&iStack_740);
    uStack_3d8 = uStack_2d8;
    uStack_3d0 = uStack_2d0;
    uStack_3c8 = uStack_2c8;
    uStack_3c0 = uStack_2c0;
    uStack_3b8 = uStack_2b8;
    uStack_3b0 = uStack_2b0;
    puStack_3a8 = puStack_2a8;
    func_0x0e8e1530(auStack_758,uStack_2d8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a3d1f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a3d1f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e1b30(auStack_758,&uStack_3d8,&UNK_011ed250,0xd);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e2420;
    puStack_640 = &UNK_0e8e2580;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e1de0(auStack_758);
    puStack_368 = (undefined1 *)CONCAT71(puStack_368._1_7_,puStack_3a8._0_1_);
    uStack_378 = uStack_3b8;
    uStack_370 = uStack_3b0;
    uStack_388 = uStack_3c8;
    uStack_380 = uStack_3c0;
    uStack_398 = uStack_3d8;
    uStack_390 = uStack_3d0;
    FUN_048b0bc0(&iStack_740);
    uStack_418 = uStack_398;
    uStack_410 = uStack_390;
    uStack_408 = uStack_388;
    uStack_400 = uStack_380;
    uStack_3f8 = uStack_378;
    uStack_3f0 = uStack_370;
    puStack_3e8 = puStack_368;
    func_0x0e8e1530(auStack_758,uStack_398 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a3faf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a3faf;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e1b30(auStack_758,&uStack_418,&UNK_01325dd0,10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e2760;
    puStack_640 = &UNK_0e8e28c0;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e1de0(auStack_758);
    puStack_328 = (undefined1 *)CONCAT71(puStack_328._1_7_,puStack_3e8._0_1_);
    uStack_338 = uStack_3f8;
    uStack_330 = uStack_3f0;
    uStack_348 = uStack_408;
    uStack_340 = uStack_400;
    uStack_358 = uStack_418;
    uStack_350 = uStack_410;
    FUN_048b0bc0(&iStack_740);
    uStack_458 = uStack_358;
    uStack_450 = uStack_350;
    uStack_448 = uStack_348;
    uStack_440 = uStack_340;
    uStack_438 = uStack_338;
    uStack_430 = uStack_330;
    puStack_428 = puStack_328;
    func_0x0e8e1530(auStack_758,uStack_358 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a421f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a421f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e1b30(auStack_758,&uStack_458,&UNK_011d47a8,9);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e2aa0;
    puStack_640 = &UNK_0e8e2c00;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e1de0(auStack_758);
    puStack_4a8 = (undefined1 *)CONCAT71(puStack_4a8._1_7_,puStack_428._0_1_);
    uStack_4b8 = uStack_438;
    uStack_4b0 = uStack_430;
    uStack_4c8 = uStack_448;
    uStack_4c0 = uStack_440;
    uStack_4d8 = uStack_458;
    uStack_4d0 = uStack_450;
    FUN_048b0bc0(&iStack_740);
    uStack_498 = uStack_4d8;
    uStack_490 = uStack_4d0;
    uStack_488 = uStack_4c8;
    uStack_480 = uStack_4c0;
    uStack_478 = uStack_4b8;
    uStack_470 = uStack_4b0;
    puStack_468 = puStack_4a8;
    func_0x0e8e1530(auStack_758,uStack_4d8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a448f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a448f;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e1b30(auStack_758,&uStack_498,&UNK_013f9ff3,0xc);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e2de0;
    puStack_640 = &UNK_0e8e2f40;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e1de0(auStack_758);
    uStack_4e8 = (undefined1 *)CONCAT71(uStack_4e8._1_7_,puStack_468._0_1_);
    uStack_4f8 = uStack_478;
    uStack_4f0 = uStack_470;
    uStack_508 = uStack_488;
    uStack_500 = uStack_480;
    uStack_518 = uStack_498;
    uStack_510 = uStack_490;
    FUN_048b0bc0(&iStack_740);
    func_0x0e8e1530(auStack_758,uStack_518 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a46bf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a46bf;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e1b30(auStack_758,&uStack_518,&UNK_0125860a,10);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0f0126a0;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_05daeda0;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_05daea90;
    puStack_648 = &UNK_0e8e3120;
    puStack_640 = &UNK_0e8e3280;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e1de0(auStack_758);
    puStack_598 = (undefined1 *)CONCAT71(puStack_598._1_7_,(undefined1)uStack_4e8);
    uStack_5a8 = uStack_4f8;
    uStack_5a0 = uStack_4f0;
    uStack_5b8 = uStack_508;
    uStack_5b0 = uStack_500;
    uStack_5c8 = uStack_518;
    uStack_5c0 = uStack_510;
    FUN_048b0bc0(&iStack_740);
    func_0x0e8e1530(auStack_758,uStack_5c8 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8a48ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_73c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
        iVar6 = *piVar11;
        while (iVar6 != iStack_740) {
          piVar11 = piVar11 + 0x1a;
          iVar6 = *piVar11;
        }
        goto LAB_0e8a48ef;
      }
      if (iStack_73c == 0) {
        puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
        *puVar2 = *puVar2 | 0x40000;
      }
    }
    func_0x0e8e1b30(auStack_758,&uStack_5c8,&UNK_01448254,0xb);
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = &UNK_0ef44b00;
    plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
    iStack_740 = (int)puVar9;
    iStack_73c = (int)((ulong)puVar9 >> 0x20);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
    uStack_680 = 0;
    puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
    pcStack_670 = (code *)0x1;
    puStack_668 = (undefined *)0x0;
    puStack_660 = &UNK_048b3f30;
    puStack_658 = &SUB_048b06d0;
    puStack_650 = &SUB_048b2190;
    puStack_648 = &UNK_0e8e3460;
    puStack_640 = &UNK_0e8e3630;
    uStack_638 = uStack_638 & 0xffffffff00000000;
    uStack_630 = 0;
    plStack_628 = (long *)0x0;
    func_0x048b05a0(auStack_758._8_8_,&puStack_688);
    plVar13 = plStack_628;
    if (plStack_628 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_628 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x0e8e1de0(auStack_758);
    FUN_048b0bc0(&iStack_740);
  }
  func_0x0e8c87e0(&uStack_588,&uStack_260,&DAT_014c9b88,0x20);
  uStack_560 = (undefined *)0xff74ef7300000003;
  func_0x0e830b50(uStack_588 + 0x18);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4cf510;
  auStack_758._8_8_ = 0;
  auStack_758._0_8_ = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_014c9ba0;
  uStack_738 = SUB81(puVar9,0);
  uStack_737 = (undefined4)((ulong)puVar9 >> 8);
  uStack_733 = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_732 = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_748 = 0x29;
  uStack_744 = 0;
  iStack_740 = 0x20;
  iStack_73c = 0;
  puVar9[2] = _DAT_014c9b98;
  puVar9[3] = uVar21;
  uVar21 = _UNK_014c9b90;
  *puVar9 = _DAT_014c9b88;
  puVar9[1] = uVar21;
  *(undefined1 *)(puVar9 + 4) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar21 = _UNK_014c9ba0;
  uStack_720 = SUB81(puVar9,0);
  uStack_71f = (undefined4)((ulong)puVar9 >> 8);
  uStack_71b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_71a = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_730 = 0x29;
  uStack_72c = 0;
  uStack_728 = 0x20;
  uStack_727 = 0;
  puVar9[2] = _DAT_014c9b98;
  puVar9[3] = uVar21;
  uVar21 = _UNK_014c9b90;
  *puVar9 = _DAT_014c9b88;
  puVar9[1] = uVar21;
  *(undefined1 *)(puVar9 + 4) = 0;
  uStack_6f8 = 0;
  puStack_6f0 = (undefined *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_718 = 0;
  puStack_710 = (undefined *)0x0;
  uStack_6e8 = CONCAT44(uStack_6e8._4_4_,0x3f600000);
  func_0x048afb10(&uStack_718,8);
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6d0 = 0;
  puStack_6c8 = (undefined *)0x0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6b0 = 0xff00;
  uStack_6ac = 0;
  uVar14 = (ulong)_uStack_6a8 >> 0x28;
  uStack_6a8._0_4_ = (uint)_uStack_6a8 & 0xffffff00;
  uStack_6a8 = (uint5)(uint)uStack_6a8;
  _uStack_6a8 = CONCAT35((int3)uVar14,uStack_6a8);
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_560._4_4_);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x2;
  puStack_668 = (undefined *)0x1;
  puStack_660 = &UNK_0e8cee60;
  puStack_658 = &UNK_07d98660;
  puStack_650 = &UNK_0e8ceb40;
  puStack_648 = &UNK_0e8cee80;
  puStack_640 = &UNK_0e8cf550;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(&uStack_580,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_5b8 = uStack_570;
  uStack_5b0 = uStack_568;
  uStack_5c8 = uStack_580;
  uStack_5c0 = (ulong)puStack_578;
  func_0x0e8c69b0(&puStack_688,&uStack_5c8,auStack_758);
  FUN_048b0bc0(auStack_758);
  func_0x0d8a5280(param_1);
  if ((DAT_0f763f38 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763f38), iVar6 != 0)) {
    func_0x0e8d0530();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f763eb8,0xf53dab8);
    func_0x0410844d(&DAT_0f763f38);
  }
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f763eb8 + 4)) * 8);
  do {
    lVar8 = *plVar13;
    if (lVar8 == -1) goto LAB_0e8a4d70;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar8 * 0x18) != *(uint *)(_DAT_0f763eb8 + 4));
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0e8a4d70:
    puVar10 = &DAT_0f763eb8;
    if (iRam000000000f763f18 != -0x2b3da790) goto LAB_0e8a4ddd;
LAB_0e8a4d9b:
    lVar8 = *(long *)(puVar10 + 0x68);
    if (lVar8 == 0) goto LAB_0e8a4ddd;
    bVar18 = (*(byte *)(lVar8 + 8) & 1) != 0;
    lVar15 = lVar8 + 9;
    if (bVar18) {
      lVar15 = *(long *)(lVar8 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar8 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar8 + 0x10);
    }
    func_0x0e8e3810(&uStack_588,param_1,lVar15,uVar14);
  }
  else {
    puVar10 = (undefined *)plVar13[2];
    if (*(int *)(puVar10 + 0x60) == -0x2b3da790) goto LAB_0e8a4d9b;
LAB_0e8a4ddd:
    func_0x0e8e3810(&uStack_588,param_1,&DAT_0145f6a3,0x1a);
  }
  if ((char)puStack_558 != '\0') goto LAB_0e8a5de7;
  uStack_318 = uStack_588;
  uStack_310 = uStack_580;
  uStack_308 = (ulong)puStack_578;
  uStack_300 = uStack_570;
  uStack_2f8 = uStack_568;
  uStack_2f0 = uStack_560;
  puStack_2e8 = puStack_558;
  if ((DAT_0f763ea0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763ea0), iVar6 != 0)) {
    func_0x0e8d03f0();
    func_0x0410844d(&DAT_0f763ea0);
  }
  if ((DAT_0f72c370 == '\0') && (iVar6 = func_0x04108328(&DAT_0f72c370), iVar6 != 0)) {
    func_0x0d8b8690(0xf72c358);
    func_0x0410844d(&DAT_0f72c370);
  }
  auStack_758._0_4_ = _DAT_0f72c35c;
  auStack_758._8_8_ = &SUB_0d8b84a0;
  auVar19 = auStack_758;
  uStack_748 = 0xe8e43c0;
  uStack_744 = 0;
  puVar10 = &UNK_0e8e43c0;
  auStack_758._8_8_ = &SUB_0d8b84a0;
  uVar21 = auStack_758._0_8_;
  puVar23 = (undefined1 *)auStack_758._8_8_;
  auStack_758 = auVar19;
  func_0x05da1460(&uStack_310);
  lVar8 = func_0x0d8b84a0(uStack_318 + 0x18);
  if ((*(byte *)(lVar8 + 0x1a) & 4) != 0) {
    func_0x0e8e3e00(auStack_758,uStack_318 + 0x18);
    if (iStack_73c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x16;
        iVar6 = *piVar11;
      }
      lVar8 = *(long *)(piVar11 + 0xc);
      while (lVar8 != auStack_758._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar8 = *(long *)(piVar11 + 0xc);
      }
    }
    else {
      if (iStack_73c != 1) {
        if (iStack_73c == 0) {
          puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
          *puVar2 = *puVar2 | 0x40000;
        }
        goto LAB_0e8a4fd3;
      }
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
LAB_0e8a4fd3:
  puStack_2a8 = puStack_2e8;
  uStack_2b8 = uStack_2f8;
  uStack_2b0 = uStack_2f0;
  uStack_2c8 = uStack_308;
  uStack_2c0 = uStack_300;
  uStack_2d8 = uStack_318;
  uStack_2d0 = uStack_310;
  func_0x0e8e3e00(auStack_758,uStack_318 + 0x18);
  if (iStack_73c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != iStack_740) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar8 = *(long *)(piVar11 + 0xc);
    while (lVar8 != auStack_758._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar8 = *(long *)(piVar11 + 0xc);
    }
LAB_0e8a507f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_73c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      goto LAB_0e8a507f;
    }
    if (iStack_73c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0e8e43d0(auStack_758,&uStack_2d8,&UNK_014131be,9,in_R8,in_R9,uVar21,puVar23,puVar10);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f0126a0;
  plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
  iStack_740 = (int)puVar9;
  iStack_73c = (int)((ulong)puVar9 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x1;
  puStack_668 = (undefined *)0x0;
  puStack_660 = &UNK_05daeda0;
  puStack_658 = &SUB_048b06d0;
  puStack_650 = &SUB_05daea90;
  puStack_648 = &UNK_0e8e4980;
  puStack_640 = &UNK_0e8e4ae0;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(auStack_758._8_8_,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e8e4680(auStack_758);
  puStack_3a8 = (undefined1 *)CONCAT71(puStack_3a8._1_7_,puStack_2a8._0_1_);
  uStack_3b8 = uStack_2b8;
  uStack_3b0 = uStack_2b0;
  uStack_3c8 = uStack_2c8;
  uStack_3c0 = uStack_2c0;
  uStack_3d8 = uStack_2d8;
  uStack_3d0 = uStack_2d0;
  FUN_048b0bc0(&iStack_740);
  uStack_398 = uStack_3d8;
  uStack_390 = uStack_3d0;
  uStack_388 = uStack_3c8;
  uStack_380 = uStack_3c0;
  uStack_378 = uStack_3b8;
  uStack_370 = uStack_3b0;
  puStack_368 = puStack_3a8;
  func_0x0e8e3e00(auStack_758,uStack_3d8 + 0x18);
  if (iStack_73c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != iStack_740) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar8 = *(long *)(piVar11 + 0xc);
    while (lVar8 != auStack_758._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar8 = *(long *)(piVar11 + 0xc);
    }
LAB_0e8a530f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_73c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      goto LAB_0e8a530f;
    }
    if (iStack_73c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0e8e43d0(auStack_758,&uStack_398,&UNK_013fa025,0x12);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f0126a0;
  plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
  iStack_740 = (int)puVar9;
  iStack_73c = (int)((ulong)puVar9 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x1;
  puStack_668 = (undefined *)0x0;
  puStack_660 = &UNK_05daeda0;
  puStack_658 = &SUB_048b06d0;
  puStack_650 = &SUB_05daea90;
  puStack_648 = &UNK_0e8e4cc0;
  puStack_640 = &UNK_0e8e4e20;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(auStack_758._8_8_,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e8e4680(auStack_758);
  puStack_3e8 = (undefined1 *)CONCAT71(puStack_3e8._1_7_,puStack_368._0_1_);
  uStack_3f8 = uStack_378;
  uStack_3f0 = uStack_370;
  uStack_408 = uStack_388;
  uStack_400 = uStack_380;
  uStack_418 = uStack_398;
  uStack_410 = uStack_390;
  FUN_048b0bc0(&iStack_740);
  uStack_358 = uStack_418;
  uStack_350 = uStack_410;
  uStack_348 = uStack_408;
  uStack_340 = uStack_400;
  uStack_338 = uStack_3f8;
  uStack_330 = uStack_3f0;
  puStack_328 = puStack_3e8;
  func_0x0e8e3e00(auStack_758,uStack_418 + 0x18);
  if (iStack_73c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != iStack_740) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar8 = *(long *)(piVar11 + 0xc);
    while (lVar8 != auStack_758._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar8 = *(long *)(piVar11 + 0xc);
    }
LAB_0e8a557f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_73c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      goto LAB_0e8a557f;
    }
    if (iStack_73c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0e8e43d0(auStack_758,&uStack_358,&UNK_0119d331,0xd);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f0126a0;
  plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
  iStack_740 = (int)puVar9;
  iStack_73c = (int)((ulong)puVar9 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x1;
  puStack_668 = (undefined *)0x0;
  puStack_660 = &UNK_05daeda0;
  puStack_658 = &SUB_048b06d0;
  puStack_650 = &SUB_05daea90;
  puStack_648 = &UNK_0e8e5000;
  puStack_640 = &UNK_0e8e5160;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(auStack_758._8_8_,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e8e4680(auStack_758);
  puStack_428 = (undefined1 *)CONCAT71(puStack_428._1_7_,puStack_328._0_1_);
  uStack_438 = uStack_338;
  uStack_430 = uStack_330;
  uStack_448 = uStack_348;
  uStack_440 = uStack_340;
  uStack_458 = uStack_358;
  uStack_450 = uStack_350;
  FUN_048b0bc0(&iStack_740);
  uStack_4d8 = uStack_458;
  uStack_4d0 = uStack_450;
  uStack_4c8 = uStack_448;
  uStack_4c0 = uStack_440;
  uStack_4b8 = uStack_438;
  uStack_4b0 = uStack_430;
  puStack_4a8 = puStack_428;
  func_0x0e8e3e00(auStack_758,uStack_458 + 0x18);
  if (iStack_73c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != iStack_740) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar8 = *(long *)(piVar11 + 0xc);
    while (lVar8 != auStack_758._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar8 = *(long *)(piVar11 + 0xc);
    }
LAB_0e8a57ef:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_73c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      goto LAB_0e8a57ef;
    }
    if (iStack_73c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0e8e43d0(auStack_758,&uStack_4d8,&UNK_0119d2b9,0x12);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f0126a0;
  plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
  iStack_740 = (int)puVar9;
  iStack_73c = (int)((ulong)puVar9 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x1;
  puStack_668 = (undefined *)0x0;
  puStack_660 = &UNK_05daeda0;
  puStack_658 = &SUB_048b06d0;
  puStack_650 = &SUB_05daea90;
  puStack_648 = &UNK_0e8e5340;
  puStack_640 = &UNK_0e8e54a0;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(auStack_758._8_8_,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e8e4680(auStack_758);
  puStack_468 = (undefined1 *)CONCAT71(puStack_468._1_7_,puStack_4a8._0_1_);
  uStack_478 = uStack_4b8;
  uStack_470 = uStack_4b0;
  uStack_488 = uStack_4c8;
  uStack_480 = uStack_4c0;
  uStack_498 = uStack_4d8;
  uStack_490 = uStack_4d0;
  FUN_048b0bc0(&iStack_740);
  uStack_518 = uStack_498;
  uStack_510 = uStack_490;
  uStack_508 = uStack_488;
  uStack_500 = uStack_480;
  uStack_4f8 = uStack_478;
  uStack_4f0 = uStack_470;
  uStack_4e8 = puStack_468;
  func_0x0e8e3e00(auStack_758,uStack_498 + 0x18);
  if (iStack_73c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != iStack_740) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar8 = *(long *)(piVar11 + 0xc);
    while (lVar8 != auStack_758._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar8 = *(long *)(piVar11 + 0xc);
    }
LAB_0e8a5a5f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_73c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      goto LAB_0e8a5a5f;
    }
    if (iStack_73c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0e8e43d0(auStack_758,&uStack_518,&UNK_014c9dbd,0xd);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0ef44b00;
  plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
  iStack_740 = (int)puVar9;
  iStack_73c = (int)((ulong)puVar9 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x1;
  puStack_668 = (undefined *)0x0;
  puStack_660 = &UNK_048b3f30;
  puStack_658 = &SUB_048b06d0;
  puStack_650 = &SUB_048b2190;
  puStack_648 = &UNK_0e8e5680;
  puStack_640 = &UNK_0e8e5850;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(auStack_758._8_8_,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e8e4680(auStack_758);
  puStack_598 = (undefined1 *)CONCAT71(puStack_598._1_7_,(undefined1)uStack_4e8);
  uStack_5a8 = uStack_4f8;
  uStack_5a0 = uStack_4f0;
  uStack_5b8 = uStack_508;
  uStack_5b0 = uStack_500;
  uStack_5c8 = uStack_518;
  uStack_5c0 = uStack_510;
  FUN_048b0bc0(&iStack_740);
  func_0x0e8e3e00(auStack_758,uStack_5c8 + 0x18);
  if (iStack_73c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x60);
    iVar6 = *piVar11;
    while (iVar6 != iStack_740) {
      piVar11 = piVar11 + 0x16;
      iVar6 = *piVar11;
    }
    lVar8 = *(long *)(piVar11 + 0xc);
    while (lVar8 != auStack_758._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar8 = *(long *)(piVar11 + 0xc);
    }
LAB_0e8a5caf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_73c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_744,uStack_748) + 0x78) + 0x48);
      iVar6 = *piVar11;
      while (iVar6 != iStack_740) {
        piVar11 = piVar11 + 0x1a;
        iVar6 = *piVar11;
      }
      goto LAB_0e8a5caf;
    }
    if (iStack_73c == 0) {
      puVar2 = (uint *)(CONCAT44(uStack_744,uStack_748) + 0x18);
      *puVar2 = *puVar2 | 0x40000;
    }
  }
  func_0x0e8e43d0(auStack_758,&uStack_5c8,&UNK_01448288,10);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0ef44b00;
  plVar13 = (long *)CONCAT44(iStack_73c,iStack_740);
  iStack_740 = (int)puVar9;
  iStack_73c = (int)((ulong)puVar9 >> 0x20);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_748);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x1;
  puStack_668 = (undefined *)0x0;
  puStack_660 = &UNK_048b3f30;
  puStack_658 = &SUB_048b06d0;
  puStack_650 = &SUB_048b2190;
  puStack_648 = &UNK_0e8e5a30;
  puStack_640 = &UNK_0e8e5c00;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(auStack_758._8_8_,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0e8e4680(auStack_758);
  FUN_048b0bc0(&iStack_740);
LAB_0e8a5de7:
  func_0x0e8c87e0(&uStack_588,&uStack_260,&DAT_0145f6a3,0x1a);
  uStack_560 = (undefined *)0x6a6138ad00000003;
  func_0x0e830b50(uStack_588 + 0x18);
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar9 = &UNK_0f4cf598;
  auStack_758._8_8_ = 0;
  auStack_758._0_8_ = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar21 = _UNK_0145f6b5;
  uStack_738 = SUB81(puVar9,0);
  uStack_737 = (undefined4)((ulong)puVar9 >> 8);
  uStack_733 = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_732 = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_748 = 0x21;
  uStack_744 = 0;
  iStack_740 = 0x1a;
  iStack_73c = 0;
  *(ulong *)((long)puVar9 + 10) = CONCAT26(_UNK_0145f6b3,_DAT_0145f6ad);
  *(undefined8 *)((long)puVar9 + 0x12) = uVar21;
  uVar21 = CONCAT62(_DAT_0145f6ad,_UNK_0145f6ab);
  *puVar9 = _DAT_0145f6a3;
  puVar9[1] = uVar21;
  *(undefined1 *)((long)puVar9 + 0x1a) = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar21 = _UNK_0145f6b5;
  uStack_720 = SUB81(puVar9,0);
  uStack_71f = (undefined4)((ulong)puVar9 >> 8);
  uStack_71b = (undefined1)((ulong)puVar9 >> 0x28);
  uStack_71a = (undefined2)((ulong)puVar9 >> 0x30);
  uStack_730 = 0x21;
  uStack_72c = 0;
  uStack_728 = 0x1a;
  uStack_727 = 0;
  *(ulong *)((long)puVar9 + 10) = CONCAT26(_UNK_0145f6b3,_DAT_0145f6ad);
  *(undefined8 *)((long)puVar9 + 0x12) = uVar21;
  uVar21 = CONCAT62(_DAT_0145f6ad,_UNK_0145f6ab);
  *puVar9 = _DAT_0145f6a3;
  puVar9[1] = uVar21;
  *(undefined1 *)((long)puVar9 + 0x1a) = 0;
  uStack_6f8 = 0;
  puStack_6f0 = (undefined *)0x0;
  uStack_708 = 0;
  uStack_700 = 0;
  uStack_718 = 0;
  puStack_710 = (undefined *)0x0;
  uStack_6e8 = CONCAT44(uStack_6e8._4_4_,0x3f600000);
  func_0x048afb10(&uStack_718,8);
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  uStack_6d0 = 0;
  puStack_6c8 = (undefined *)0x0;
  uStack_6e0 = 0;
  uStack_6d8 = 0;
  uStack_6b0 = 0xff00;
  uStack_6ac = 0;
  uVar14 = (ulong)_uStack_6a8 >> 0x28;
  uStack_6a8._0_4_ = (uint)_uStack_6a8 & 0xffffff00;
  uStack_6a8 = (uint5)(uint)uStack_6a8;
  _uStack_6a8 = CONCAT35((int3)uVar14,uStack_6a8);
  if ((DAT_0f763688 == '\0') && (iVar6 = func_0x04108328(&DAT_0f763688), iVar6 != 0)) {
    func_0x0e830c40(0xf763670);
    func_0x0410844d(&DAT_0f763688);
  }
  puStack_688 = (undefined *)CONCAT44(puStack_688._4_4_,uStack_560._4_4_);
  uStack_680 = 0;
  puStack_678 = (undefined *)((ulong)puStack_678 & 0xffffffff00000000);
  pcStack_670 = (code *)0x2;
  puStack_668 = (undefined *)0x1;
  puStack_660 = &UNK_0e8d0770;
  puStack_658 = &UNK_07d98660;
  puStack_650 = &UNK_0e8d0470;
  puStack_648 = &UNK_0e8d0790;
  puStack_640 = &UNK_0e8d0e60;
  uStack_638 = uStack_638 & 0xffffffff00000000;
  uStack_630 = 0;
  plStack_628 = (long *)0x0;
  func_0x048b05a0(&uStack_580,&puStack_688);
  plVar13 = plStack_628;
  if (plStack_628 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_628 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_628 + 0x10))(plStack_628);
      func_0x0412c2d0(plVar13);
    }
  }
  uStack_5b8 = uStack_570;
  uStack_5b0 = uStack_568;
  uStack_5c8 = uStack_580;
  uStack_5c0 = (ulong)puStack_578;
  func_0x0e8c69b0(&puStack_688,&uStack_5c8,auStack_758);
  FUN_048b0bc0(auStack_758);
  return;
}



/* ---- referenced strings ----
 * 0x12a4979  minecraft:behavior.controlled_by_player
 * 0x12a4989  or.controlled_by_player
 * 0x135c5ac  minecraft:behavior.charge_attack
 * 0x135c5bc  or.charge_attack
 * 0x13d307d  minecraft:tick_world
 * 0x1412fd3  minecraft:behavior.transport_items
 * 0x1412fe3  or.transport_items
 * 0x1459095  [__dev_aid:actor_def_version]
 * 0x14590a2  tor_def_version]
 * 0x145f6a3  minecraft:behavior.eat_mob
 * 0x145f6ad  behavior.eat_mob
 * 0x1495802  minecraft:behavior.circle_around_anchor
 * 0x1495812  or.circle_around_anchor
 * 0x14c9b88  minecraft:behavior.dragonflaming
 * 0x14c9b98  or.dragonflaming
 * 0x14e80e0  tor_def_version]
 */
