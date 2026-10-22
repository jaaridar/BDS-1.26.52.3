/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe7f6500 (ELF vaddr 0xe6f6500)
 * Label: caller-of-callee
 * Body:  [[0e7f6500, 0e7f65d5] [0e7f65e0, 0e7f6622] [0e7f6630, 0e7f7521] [0e7f7530, 0e7f9fc1] [0e7f9fd0, 0e7fc63e] [0e7fc640, 0e8044dd]]
 * Ghidra: FUN_0e7f6500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e7f6500(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long *plVar10;
  int *piVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined4 uVar16;
  byte *pbVar17;
  undefined1 uVar18;
  code *pcVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_770;
  long *plStack_768;
  long *plStack_760;
  code *pcStack_758;
  undefined8 uStack_750;
  undefined *puStack_748;
  undefined1 *puStack_740;
  undefined *puStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined4 uStack_720;
  undefined8 uStack_718;
  long *plStack_710;
  undefined1 auStack_708 [16];
  undefined *puStack_6f8;
  undefined8 uStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6e0;
  long lStack_6d8;
  undefined8 *puStack_6d0;
  undefined1 uStack_6c8;
  undefined7 uStack_6c7;
  undefined1 uStack_6c0;
  undefined1 uStack_6bf;
  undefined6 uStack_6be;
  undefined1 uStack_6b8;
  undefined1 uStack_6b7;
  undefined6 uStack_6b6;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  undefined8 uStack_698;
  long lStack_690;
  long lStack_688;
  undefined8 uStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  uint5 uStack_660;
  undefined3 uStack_65b;
  uint5 uStack_658;
  long lStack_650;
  undefined2 uStack_648;
  undefined2 uStack_646;
  uint uStack_644;
  uint uStack_640;
  undefined1 uStack_63c;
  long *plStack_630;
  long *plStack_628;
  long *plStack_620;
  long *plStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  char cStack_600;
  uint7 uStack_5ff;
  long *plStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long *plStack_5b8;
  long *plStack_5b0;
  long *plStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined8 uStack_590;
  long lStack_588;
  undefined4 uStack_57c;
  long *plStack_578;
  long *plStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined4 uStack_53c;
  long *plStack_538;
  long *plStack_530;
  long *plStack_528;
  long *plStack_520;
  long *plStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  long *plStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined4 uStack_440;
  undefined2 uStack_43c;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long alStack_3c0 [2];
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  int iStack_398;
  undefined4 uStack_394;
  char cStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  long *plStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  int iStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  
  func_0x0e89e520();
  lVar7 = func_0x0e75f290(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e830260(alStack_3c0,param_1,lVar15,uVar14);
  }
  else {
    func_0x0e830260(alStack_3c0,param_1,&UNK_01425a49,0x1c);
  }
  if (cStack_390 != '\0') {
    return;
  }
  lVar15 = alStack_3c0[0] + 0x18;
  lVar7 = func_0x0e75f290(lVar15);
  for (pbVar12 = *(byte **)(alStack_3c0[0] + 0x50); pbVar12 != *(byte **)(alStack_3c0[0] + 0x58);
      pbVar12 = pbVar12 + 0x38) {
    bVar1 = *pbVar12;
    if ((bVar1 & 1) == 0) {
      if (bVar1 >> 1 == 0x1d) goto LAB_0e7f663a;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1d) {
LAB_0e7f663a:
      if ((bVar1 & 1) == 0) {
        pbVar17 = pbVar12 + 1;
      }
      else {
        pbVar17 = *(byte **)(pbVar12 + 0x10);
      }
      auVar21[0] = -(*pbVar17 == DAT_014e1c20);
      auVar21[1] = -(pbVar17[1] == DAT_014e1c20._1_1_);
      auVar21[2] = -(pbVar17[2] == DAT_014e1c20._2_1_);
      auVar21[3] = -(pbVar17[3] == DAT_014e1c20._3_1_);
      auVar21[4] = -(pbVar17[4] == DAT_014e1c20._4_1_);
      auVar21[5] = -(pbVar17[5] == DAT_014e1c20._5_1_);
      auVar21[6] = -(pbVar17[6] == DAT_014e1c20._6_1_);
      auVar21[7] = -(pbVar17[7] == DAT_014e1c20._7_1_);
      auVar21[8] = -(pbVar17[8] == DAT_014e1c20._8_1_);
      auVar21[9] = -(pbVar17[9] == DAT_014e1c20._9_1_);
      auVar21[10] = -(pbVar17[10] == DAT_014e1c20._10_1_);
      auVar21[0xb] = -(pbVar17[0xb] == DAT_014e1c20._11_1_);
      auVar21[0xc] = -(pbVar17[0xc] == DAT_014e1c20._12_1_);
      auVar21[0xd] = -(pbVar17[0xd] == DAT_014e1c20._13_1_);
      auVar21[0xe] = -(pbVar17[0xe] == DAT_014e1c20._14_1_);
      auVar21[0xf] = -(pbVar17[0xf] == DAT_014e1c20._15_1_);
      auVar22[0] = -(pbVar17[0xd] == DAT_014e80e0);
      auVar22[1] = -(pbVar17[0xe] == DAT_014e80e0._1_1_);
      auVar22[2] = -(pbVar17[0xf] == DAT_014e80e0._2_1_);
      auVar22[3] = -(pbVar17[0x10] == DAT_014e80e0._3_1_);
      auVar22[4] = -(pbVar17[0x11] == DAT_014e80e0._4_1_);
      auVar22[5] = -(pbVar17[0x12] == DAT_014e80e0._5_1_);
      auVar22[6] = -(pbVar17[0x13] == DAT_014e80e0._6_1_);
      auVar22[7] = -(pbVar17[0x14] == DAT_014e80e0._7_1_);
      auVar22[8] = -(pbVar17[0x15] == DAT_014e80e0._8_1_);
      auVar22[9] = -(pbVar17[0x16] == DAT_014e80e0._9_1_);
      auVar22[10] = -(pbVar17[0x17] == DAT_014e80e0._10_1_);
      auVar22[0xb] = -(pbVar17[0x18] == DAT_014e80e0._11_1_);
      auVar22[0xc] = -(pbVar17[0x19] == DAT_014e80e0._12_1_);
      auVar22[0xd] = -(pbVar17[0x1a] == DAT_014e80e0._13_1_);
      auVar22[0xe] = -(pbVar17[0x1b] == DAT_014e80e0._14_1_);
      auVar22[0xf] = -(pbVar17[0x1c] == DAT_014e80e0._15_1_);
      auVar22 = auVar22 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) == 0xffff) break;
    }
  }
  if (pbVar12 == *(byte **)(alStack_3c0[0] + 0x58)) {
LAB_0e7f6669:
    if (iStack_398 == 0) {
      if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
      goto LAB_0e7f66e6;
      lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
    }
    else {
      lVar7 = func_0x048b0c90(lVar15,lVar7,uStack_394,1);
      if (lVar7 == 0) {
        auStack_708 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_708);
        lVar7 = auStack_708._0_8_;
        if (auStack_708._0_8_ == 0) goto LAB_0e7f66e6;
      }
      if ((*(int *)(lVar7 + 0x50) == -0x45dcb126) && (*(long *)(lVar7 + 0x58) != 0)) {
        lVar7 = *(long *)(lVar7 + 0x58) + 0x40;
      }
      else {
LAB_0e7f66e6:
        lVar7 = 0;
      }
    }
    uStack_770 = 0;
    plStack_760 = (long *)&UNK_05ead3e0;
    pcStack_758 = (code *)&UNK_05ead970;
    uStack_750 = CONCAT35(uStack_750._5_3_,0x17fe5f144);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = 0x1006e00150001;
    puVar8[1] = &UNK_01254d89;
    puVar8[2] = &UNK_01254d89;
    uStack_6f0 = (code *)&UNK_05ead3e0;
    pcStack_6e8 = (code *)&UNK_05ead970;
    uStack_6e0 = CONCAT35(uStack_6e0._5_3_,0x17fe5f144);
    uStack_770 = 0;
    auStack_708._8_8_ = puVar8;
    auStack_708._0_8_ = &UNK_0daac7f0;
    plStack_620 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_620 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_014590aa;
    plStack_630 = (long *)0x21;
    plStack_628 = (long *)0x1d;
    *(ulong *)((long)plStack_620 + 0xd) = CONCAT53(_UNK_014590a5,_DAT_014590a2);
    *(undefined8 *)((long)plStack_620 + 0x15) = uVar3;
    lVar15 = CONCAT35(_DAT_014590a2,_UNK_0145909d);
    *plStack_620 = _DAT_01459095;
    plStack_620[1] = lVar15;
    *(undefined1 *)((long)plStack_620 + 0x1d) = 0;
    lVar7 = func_0x048b5060(lVar7,&plStack_630);
    *(undefined **)(lVar7 + 0x20) = &UNK_0daac7f0;
    pcVar19 = (code *)&UNK_05ead970;
    if ((undefined1 *)(lVar7 + 0x20) != auStack_708) {
      puVar8 = (undefined8 *)(lVar7 + 0x28);
      if (*(code **)(lVar7 + 0x40) == (code *)0x0) {
LAB_0e7f6872:
        uVar3 = auStack_708._8_8_;
        auStack_708._8_8_ = 0;
        *puVar8 = uVar3;
      }
      else {
        (**(code **)(lVar7 + 0x40))(puVar8);
        if (uStack_6e0._4_1_ != '\0') {
          if (uStack_6e0._4_1_ != '\x02') goto LAB_0e7f6872;
          (*uStack_6f0)(5,auStack_708 + 8,puVar8);
        }
      }
      *(code **)(lVar7 + 0x38) = uStack_6f0;
      *(code **)(lVar7 + 0x40) = pcStack_6e8;
      *(undefined4 *)(lVar7 + 0x48) = (undefined4)uStack_6e0;
      *(char *)(lVar7 + 0x4c) = uStack_6e0._4_1_;
      pcVar19 = pcStack_6e8;
    }
    if (((ulong)plStack_630 & 1) != 0) {
      func_0x0412a280(plStack_620,(ulong)plStack_630 & 0xfffffffffffffffe);
      pcVar19 = pcStack_6e8;
    }
    if (pcVar19 != (code *)0x0) {
      (*pcVar19)(auStack_708 + 8);
    }
    if (pcStack_758 != (code *)0x0) {
      (*pcStack_758)(&uStack_770);
    }
  }
  else {
    iVar5 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f561458 == '\0') && (iVar6 = func_0x04108328(&DAT_0f561458), iVar6 != 0)) {
      func_0x05eada10(0xf561440);
      FUN_0410844d(&DAT_0f561458);
    }
    if (iVar5 == _DAT_0f561444) goto LAB_0e7f6669;
  }
  pcStack_6e8 = (code *)uStack_3a0;
  puStack_6f8 = (undefined *)uStack_3b0;
  uStack_6f0 = (code *)uStack_3a8;
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  if ((DAT_0f763688 == '\0') && (iVar5 = func_0x04108328(&DAT_0f763688), iVar5 != 0)) {
    func_0x0e830c40(0xf763670);
    FUN_0410844d(&DAT_0f763688);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,_DAT_0f763674);
  plStack_768 = (long *)&SUB_0e830b50;
  plStack_760 = (long *)&UNK_0e830c30;
  func_0x05da1460(auStack_708 + 8);
  func_0x0e8056b0(param_1);
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_011ab9ea,0x1b);
  uStack_608 = 0x667a44d400000003;
  func_0x0e75f290(plStack_630 + 3);
  auStack_708._0_8_ = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if ((undefined8 *)auStack_708._0_8_ == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)auStack_708._0_8_ = &UNK_0f4ccbc0;
  auStack_708._8_8_ = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_011ab9fd;
  puStack_6f8 = (undefined *)0x21;
  uStack_6f0 = (code *)0x1b;
  *(ulong *)((long)puVar8 + 0xb) = CONCAT35(_UNK_011ab9fa,_DAT_011ab9f5);
  *(undefined8 *)((long)puVar8 + 0x13) = uVar3;
  uVar3 = CONCAT53(_DAT_011ab9f5,_UNK_011ab9f2);
  *puVar8 = _DAT_011ab9ea;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1b) = 0;
  pcStack_6e8 = (code *)puVar8;
  puStack_6d0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_6d0 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_011ab9fd;
  uStack_6e0 = 0x21;
  lStack_6d8 = 0x1b;
  *(ulong *)((long)puStack_6d0 + 0xb) = CONCAT35(_UNK_011ab9fa,_DAT_011ab9f5);
  *(undefined8 *)((long)puStack_6d0 + 0x13) = uVar3;
  uVar3 = CONCAT53(_DAT_011ab9f5,_UNK_011ab9f2);
  *puStack_6d0 = _DAT_011ab9ea;
  puStack_6d0[1] = uVar3;
  *(undefined1 *)((long)puStack_6d0 + 0x1b) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e831bc0;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &SUB_0e29e650;
  puStack_730 = &UNK_0e831be0;
  puStack_728 = &UNK_0e8322b0;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f762130 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762130), iVar5 != 0)) {
    func_0x0e832f20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7620b0,0xf53dab8);
    FUN_0410844d(&DAT_0f762130);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7620b0 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7f6cd0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7620b0 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7f6cd0:
    puVar9 = &DAT_0f7620b0;
    if (iRam000000000f762110 != -0x2b3da790) goto LAB_0e7f6d3d;
LAB_0e7f6cfb:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7f6d3d;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e851c00(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7f6cfb;
LAB_0e7f6d3d:
    func_0x0e851c00(&plStack_630,param_1,&DAT_012725a1,0x17);
  }
  if (cStack_600 == '\0') {
    lStack_588 = (ulong)uStack_5ff << 8;
    plStack_5b8 = plStack_630;
    plStack_5b0 = plStack_628;
    plStack_5a8 = plStack_620;
    plStack_5a0 = plStack_618;
    plStack_598 = plStack_610;
    uStack_590 = uStack_608;
    if ((DAT_0f762098 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762098), iVar5 != 0)) {
      func_0x0e832de0();
      FUN_0410844d(&DAT_0f762098);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e852760;
    func_0x05da1460(&plStack_5b0);
    lVar7 = func_0x0d8b84a0(plStack_5b8 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e8521f0(auStack_708,plStack_5b8 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        puVar2 = *(undefined1 **)(piVar11 + 0xc);
        while (puVar2 != (undefined1 *)auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          puVar2 = *(undefined1 **)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7f6ea3;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7f6ea3:
    uStack_5c8 = lStack_588;
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x0e8521f0(auStack_708,plStack_5b8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      puVar2 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar2 != (undefined1 *)auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar2 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e7f6f5f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f6f5f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f762098 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762098), iVar5 != 0)) {
      func_0x0e832de0();
      FUN_0410844d(&DAT_0f762098);
    }
    plVar10 = plStack_5f8;
    uStack_5d0 = 0x2fa0fd0d00000001;
    if ((DAT_0f762130 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762130), iVar5 != 0)) {
      func_0x0e832f20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7620b0,0xf53dab8);
      FUN_0410844d(&DAT_0f762130);
    }
    plVar13 = (long *)(plVar10[3] +
                      (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7620b0 + 4)) * 8);
    do {
      lVar7 = *plVar13;
      if (lVar7 == -1) goto LAB_0e7f7001;
      plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
    } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7620b0 + 4));
    if (plVar13 == (long *)plVar10[7]) {
LAB_0e7f7001:
      auStack_708._0_8_ = &DAT_0f7620b0;
    }
    else {
      auStack_708._0_8_ = plVar13[2];
    }
    auStack_708._8_8_ = plVar10 + 3;
    func_0x0ed621a0(auStack_708,uStack_5d0._4_4_);
    auStack_708._0_2_ = 0x10;
    auStack_708._8_8_ = &plStack_5f0;
    puStack_6f8 = (undefined *)CONCAT44(puStack_6f8._4_4_,uStack_5d0._4_4_);
    uStack_6f0 = (code *)0x0;
    pcStack_6e8 = (code *)0x0;
    uStack_6e0 = 0;
    lStack_6d8 = 0;
    puStack_6d0 = (undefined8 *)0x0;
    uStack_6c8 = 0x10;
    uStack_6c7 = 0x6f697461727564;
    uStack_6c0 = 0x6e;
    uStack_6bf = 0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    lStack_6a0 = 0;
    uStack_698 = 0;
    lStack_690 = 0;
    lStack_688 = 0;
    uStack_680 = CONCAT44(uStack_680._4_4_,0x3f600000);
    FUN_048afb10(&lStack_6b0,8);
    _uStack_658 = 0;
    lStack_650 = 0;
    lStack_668 = 0;
    _uStack_660 = 0;
    lStack_678 = 0;
    lStack_670 = 0;
    uStack_648 = 0xff00;
    uStack_644 = uStack_644 & 0xffffff00;
    uStack_640 = uStack_640 & 0xffffff00;
    uStack_63c = 0;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)puVar8;
      (**(code **)(lVar7 + 8))();
      puVar8 = (undefined8 *)uStack_6f0;
    }
    uStack_6f0 = (code *)puVar8;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e852770;
    puStack_728 = &UNK_0e8528d0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    uVar3 = auStack_708._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    uStack_770 = CONCAT44(uStack_770._4_4_,_DAT_0f550a0c);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar19 = pcStack_6e8;
    puVar8 = (undefined8 *)uStack_6f0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0ef439d0;
    plStack_768 = plVar10 + 3;
    uStack_6f0 = (code *)0x0;
    pcStack_6e8 = (code *)0x0;
    plVar10[3] = (long)puVar8;
    plVar10[4] = (long)pcVar19;
    plVar10[7] = (long)puStack_6d0;
    plVar10[5] = uStack_6e0;
    plVar10[6] = lStack_6d8;
    uStack_6e0 = 0;
    lStack_6d8 = 0;
    puStack_6d0 = (undefined8 *)0x0;
    plVar10[10] = CONCAT62(uStack_6b6,CONCAT11(uStack_6b7,uStack_6b8));
    plVar10[8] = CONCAT71(uStack_6c7,uStack_6c8);
    plVar10[9] = CONCAT62(uStack_6be,CONCAT11(uStack_6bf,uStack_6c0));
    uStack_6c8 = 0;
    uStack_6c7 = 0;
    uStack_6c0 = 0;
    uStack_6bf = 0;
    uStack_6be = 0;
    uStack_6b8 = 0;
    uStack_6b7 = 0;
    uStack_6b6 = 0;
    plVar10[0xb] = lStack_6b0;
    plVar10[0xc] = lStack_6a8;
    plVar10[0xd] = lStack_6a0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    lStack_6a0 = 0;
    plVar10[0xe] = uStack_698;
    plVar10[0xf] = lStack_690;
    plVar10[0x10] = lStack_688;
    uStack_698 = 0;
    lStack_690 = 0;
    lStack_688 = 0;
    *(undefined4 *)(plVar10 + 0x11) = (undefined4)uStack_680;
    plVar10[0x12] = lStack_678;
    plVar10[0x13] = lStack_670;
    plVar10[0x14] = lStack_668;
    lStack_678 = 0;
    lStack_670 = 0;
    lStack_668 = 0;
    plVar10[0x17] = lStack_650;
    plVar10[0x15] = _uStack_660;
    plVar10[0x16] = _uStack_658;
    _uStack_660 = 0;
    _uStack_658 = 0;
    lStack_650 = 0;
    *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_63c,CONCAT43(uStack_640,uStack_644._1_3_));
    plVar10[0x18] = CONCAT44(uStack_644,CONCAT22(uStack_646,uStack_648));
    plStack_578 = (long *)0x0;
    plStack_570 = (long *)0x0;
    plStack_760 = plVar10;
    func_0x048afd20(uVar3,&uStack_770);
    plVar10 = plStack_760;
    if (plStack_760 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_760 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_760 + 0x10))(plStack_760);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = plStack_570;
    if (plStack_570 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_570 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_570 + 0x10))(plStack_570);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = plStack_5f8;
    lVar7 = *(long *)(uVar3 + 0x10);
    iVar5 = *(int *)(uVar3 + 0x1c);
    if (iVar5 == 2) {
      piVar11 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != *(int *)(uVar3 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      for (; *(long *)(piVar11 + 0xc) != *(long *)(uVar3 + 8); piVar11 = *(int **)(piVar11 + 0xe)) {
      }
LAB_0e7f753a:
      piVar11[4] = piVar11[4] | auStack_708._0_4_ << 0x10;
    }
    else {
      if (iVar5 == 1) {
        piVar11 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != *(int *)(uVar3 + 0x18)) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f753a;
      }
      if (iVar5 == 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | auStack_708._0_4_ << 0x10;
      }
    }
    iVar5 = (int)uStack_5d0;
    uVar16 = uStack_5d0._4_4_;
    func_0x048b0bc0(&uStack_6f0);
    uStack_770 = uStack_770 & 0xffff000000000000;
    if (iVar5 == 4) {
      if ((DAT_0f762130 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762130), iVar5 != 0)) {
        func_0x0e832f20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f7620b0,0xf53dab8);
        FUN_0410844d(&DAT_0f762130);
      }
      plVar13 = (long *)(plVar10[3] +
                        (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f7620b0 + 4)) * 8);
      do {
        lVar7 = *plVar13;
        if (lVar7 == -1) goto LAB_0e7f7668;
        plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
      } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7620b0 + 4));
      if (plVar13 == (long *)plVar10[7]) {
LAB_0e7f7668:
        puVar9 = &DAT_0f7620b0;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar7 = FUN_048b1040(plVar10 + 3,puVar9,uVar16,1);
      if (lVar7 == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b10d0(auStack_708);
        lVar7 = auStack_708._0_8_;
      }
      lVar15 = *(long *)(lVar7 + 0x38);
      if (*(long *)(lVar7 + 0x38) == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b10d0(auStack_708);
        lVar15 = auStack_708._0_8_;
        if (auStack_708._0_8_ != 0) goto LAB_0e7f7766;
      }
      else {
LAB_0e7f7766:
        do {
          lVar7 = lVar15;
          lVar15 = *(long *)(lVar7 + 0x38);
          if (*(long *)(lVar7 + 0x38) == 0) {
            auStack_708 = ZEXT816(0);
            func_0x048b10d0(auStack_708);
            lVar15 = auStack_708._0_8_;
          }
        } while (lVar15 != 0);
      }
      lVar7 = *(long *)(lVar7 + 0x48);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    else {
      if (iVar5 != 1) goto LAB_0e7f7826;
      if ((DAT_0f762130 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762130), iVar5 != 0)) {
        func_0x0e832f20();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f7620b0,0xf53dab8);
        FUN_0410844d(&DAT_0f762130);
      }
      plVar13 = (long *)(plVar10[3] +
                        (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f7620b0 + 4)) * 8);
      do {
        lVar7 = *plVar13;
        if (lVar7 == -1) goto LAB_0e7f75e8;
        plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
      } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7620b0 + 4));
      if (plVar13 == (long *)plVar10[7]) {
LAB_0e7f75e8:
        puVar9 = &DAT_0f7620b0;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      lVar7 = func_0x048b0c90(plVar10 + 3,puVar9,uVar16,1);
      if (lVar7 == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b0d20(auStack_708);
        lVar7 = auStack_708._0_8_;
      }
      lVar7 = *(long *)(lVar7 + 0x58);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
    }
    puVar8[1] = 0xffffffffffffffff;
    puVar8[2] = 0;
    *(undefined1 *)(puVar8 + 3) = 0xff;
    *puVar8 = &UNK_0f0edc68;
    uVar3 = _DAT_014f0238;
    puVar8[4] = 0;
    puVar8[5] = uVar3;
    puVar8[6] = 0;
    *(undefined2 *)(puVar8 + 7) = 0;
    *(undefined4 *)((long)puVar8 + 0x3a) = (undefined4)uStack_770;
    *(undefined2 *)((long)puVar8 + 0x3e) = uStack_770._4_2_;
    plVar10 = *(long **)(lVar7 + 8);
    *(undefined8 **)(lVar7 + 8) = puVar8;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x28))();
    }
  }
LAB_0e7f7826:
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_012725a1,0x17);
  uStack_608 = 0x282f4cda00000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4ccc68;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar3 = _UNK_012725a9;
  puStack_6f8 = (undefined *)0x1b;
  uStack_6f0 = (code *)0x17;
  *puVar8 = _DAT_012725a1;
  puVar8[1] = uVar3;
  *(undefined8 *)((long)puVar8 + 0xf) = 0x72616f722e726f69;
  *(undefined1 *)((long)puVar8 + 0x17) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x1a,0);
  }
  uVar3 = _UNK_012725a9;
  uStack_6e0 = 0x1b;
  lStack_6d8 = 0x17;
  *puVar8 = _DAT_012725a1;
  puVar8[1] = uVar3;
  *(undefined8 *)((long)puVar8 + 0xf) = 0x72616f722e726f69;
  *(undefined1 *)((long)puVar8 + 0x17) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e833130;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e832e60;
  puStack_730 = &UNK_0e833150;
  puStack_728 = &UNK_0e833940;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f7621e8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7621e8), iVar5 != 0)) {
    func_0x0e8345a0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762168,0xf53dab8);
    FUN_0410844d(&DAT_0f7621e8);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762168 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7f7b50;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762168 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7f7b50:
    puVar9 = &DAT_0f762168;
    if (iRam000000000f7621c8 != -0x2b3da790) goto LAB_0e7f7bbd;
LAB_0e7f7b7b:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7f7bbd;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e852ab0(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7f7b7b;
LAB_0e7f7bbd:
    func_0x0e852ab0(&plStack_630,param_1,&DAT_013c5615,0x1f);
  }
  if (cStack_600 == '\0') {
    lStack_408 = (ulong)uStack_5ff << 8;
    plStack_438 = plStack_630;
    plStack_430 = plStack_628;
    plStack_428 = plStack_620;
    plStack_420 = plStack_618;
    plStack_418 = plStack_610;
    uStack_410 = uStack_608;
    if ((DAT_0f762150 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762150), iVar5 != 0)) {
      func_0x0e834460();
      FUN_0410844d(&DAT_0f762150);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e853660;
    func_0x05da1460(&plStack_430);
    lVar7 = func_0x0d8b84a0(plStack_438 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e8530a0(auStack_708,plStack_438 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7f7d93;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7f7d93:
    lStack_3c8 = lStack_408;
    plStack_3d8 = plStack_418;
    uStack_3d0 = uStack_410;
    plStack_3e8 = plStack_428;
    plStack_3e0 = plStack_420;
    plStack_3f8 = plStack_438;
    plStack_3f0 = plStack_430;
    func_0x0e8530a0(auStack_708,plStack_438 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7f7e4f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f7e4f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e853670(auStack_708,&plStack_3f8,&UNK_013f9fab,0xe);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e853c80;
    puStack_728 = &UNK_0e853de0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e853980(auStack_708);
    lStack_448 = CONCAT71(lStack_448._1_7_,(undefined1)lStack_3c8);
    plStack_458 = plStack_3d8;
    uStack_450 = uStack_3d0;
    plStack_468 = plStack_3e8;
    plStack_460 = plStack_3e0;
    plStack_478 = plStack_3f8;
    plStack_470 = plStack_3f0;
    func_0x048b0bc0(&uStack_6f0);
    plStack_4b8 = plStack_478;
    plStack_4b0 = plStack_470;
    plStack_4a8 = plStack_468;
    plStack_4a0 = plStack_460;
    plStack_498 = plStack_458;
    uStack_490 = uStack_450;
    lStack_488 = lStack_448;
    func_0x0e8530a0(auStack_708,plStack_478 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7f80ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f80ef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e853670(auStack_708,&plStack_4b8,&UNK_014132fa,0xe);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e853fc0;
    puStack_728 = &UNK_0e854120;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e853980(auStack_708);
    lStack_4c8 = CONCAT71(lStack_4c8._1_7_,(undefined1)lStack_488);
    plStack_4d8 = plStack_498;
    uStack_4d0 = uStack_490;
    plStack_4e8 = plStack_4a8;
    plStack_4e0 = plStack_4a0;
    plStack_4f8 = plStack_4b8;
    plStack_4f0 = plStack_4b0;
    func_0x048b0bc0(&uStack_6f0);
    plStack_538 = plStack_4f8;
    plStack_530 = plStack_4f0;
    plStack_528 = plStack_4e8;
    plStack_520 = plStack_4e0;
    plStack_518 = plStack_4d8;
    uStack_510 = uStack_4d0;
    lStack_508 = lStack_4c8;
    func_0x0e8530a0(auStack_708,plStack_4f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7f836f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f836f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e853670(auStack_708,&plStack_538,&DAT_0145f6ec,0x10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e854300;
    puStack_728 = &UNK_0e854460;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e853980(auStack_708);
    lStack_548 = CONCAT71(lStack_548._1_7_,(undefined1)lStack_508);
    plStack_558 = plStack_518;
    uStack_550 = uStack_510;
    plStack_568 = plStack_528;
    plStack_560 = plStack_520;
    plStack_578 = plStack_538;
    plStack_570 = plStack_530;
    func_0x048b0bc0(&uStack_6f0);
    plStack_5b8 = plStack_578;
    plStack_5b0 = plStack_570;
    plStack_5a8 = plStack_568;
    plStack_5a0 = plStack_560;
    plStack_598 = plStack_558;
    uStack_590 = uStack_550;
    lStack_588 = lStack_548;
    func_0x0e8530a0(auStack_708,plStack_578 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7f85ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f85ef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e853670(auStack_708,&plStack_5b8,&DAT_011b9283,0x18);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e854640;
    puStack_728 = &UNK_0e8547a0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e853980(auStack_708);
    uStack_5c8 = CONCAT71(uStack_5c8._1_7_,(undefined1)lStack_588);
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x048b0bc0(&uStack_6f0);
    func_0x0e8530a0(auStack_708,plStack_5f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7f882f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f882f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e853670(auStack_708,&plStack_5f8,&UNK_012d798f,0xe);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ef8;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_04906f70;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &SUB_04906c50;
    puStack_730 = &UNK_0e854980;
    puStack_728 = &UNK_0e854ae0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e853980(auStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_013c5615,0x1f);
  uStack_608 = 0xf780f31700000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cccf0;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013c562c;
  puStack_6f8 = (undefined *)0x21;
  uStack_6f0 = (code *)0x1f;
  *(ulong *)((long)puVar8 + 0xf) = CONCAT71(_UNK_013c5625,DAT_013c5624);
  *(undefined8 *)((long)puVar8 + 0x17) = uVar3;
  uVar3 = CONCAT17(DAT_013c5624,_UNK_013c561d);
  *puVar8 = _DAT_013c5615;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1f) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013c562c;
  uStack_6e0 = 0x21;
  lStack_6d8 = 0x1f;
  *(ulong *)((long)puVar8 + 0xf) = CONCAT71(_UNK_013c5625,DAT_013c5624);
  *(undefined8 *)((long)puVar8 + 0x17) = uVar3;
  uVar3 = CONCAT17(DAT_013c5624,_UNK_013c561d);
  *puVar8 = _DAT_013c5615;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1f) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e8347e0;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e8344e0;
  puStack_730 = &UNK_0e834800;
  puStack_728 = &UNK_0e834ed0;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f7622a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7622a0), iVar5 != 0)) {
    func_0x0e835a80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762220,0xf53dab8);
    FUN_0410844d(&DAT_0f7622a0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762220 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7f8c90;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762220 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7f8c90:
    puVar9 = &DAT_0f762220;
    if (iRam000000000f762280 != -0x2b3da790) goto LAB_0e7f8cfd;
LAB_0e7f8cbb:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7f8cfd;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e854cc0(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7f8cbb;
LAB_0e7f8cfd:
    func_0x0e854cc0(&plStack_630,param_1,&DAT_013dfd08,0x1e);
  }
  if (cStack_600 == '\0') {
    lStack_548 = (ulong)uStack_5ff << 8;
    plStack_578 = plStack_630;
    plStack_570 = plStack_628;
    plStack_568 = plStack_620;
    plStack_560 = plStack_618;
    plStack_558 = plStack_610;
    uStack_550 = uStack_608;
    if ((DAT_0f762208 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762208), iVar5 != 0)) {
      func_0x0e835940();
      FUN_0410844d(&DAT_0f762208);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e855820;
    func_0x05da1460(&plStack_570);
    lVar7 = func_0x0d8b84a0(plStack_578 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e8552b0(auStack_708,plStack_578 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7f8f33;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7f8f33:
    lStack_588 = lStack_548;
    plStack_598 = plStack_558;
    uStack_590 = uStack_550;
    plStack_5a8 = plStack_568;
    plStack_5a0 = plStack_560;
    plStack_5b8 = plStack_578;
    plStack_5b0 = plStack_570;
    func_0x0e8552b0(auStack_708,plStack_578 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7f8fef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f8fef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e855830(auStack_708,&plStack_5b8,&DAT_01413309,0x16);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e855de0;
    puStack_728 = &UNK_0e855f40;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e855ae0(auStack_708);
    uStack_5c8 = CONCAT71(uStack_5c8._1_7_,(undefined1)lStack_588);
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x048b0bc0(&uStack_6f0);
    func_0x0e8552b0(auStack_708,plStack_5f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7f924f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f924f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e855830(auStack_708,&plStack_5f8,&DAT_0145f6ec,0x10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e856120;
    puStack_728 = &UNK_0e856280;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e855ae0(auStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_013dfd08,0x1e);
  uStack_608 = 0xc48c1b0b00000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4ccd78;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013dfd1e;
  puStack_6f8 = (undefined *)0x21;
  uStack_6f0 = (code *)0x1e;
  *(ulong *)((long)puVar8 + 0xe) = CONCAT62(_UNK_013dfd18,_DAT_013dfd16);
  *(undefined8 *)((long)puVar8 + 0x16) = uVar3;
  uVar3 = CONCAT26(_DAT_013dfd16,_UNK_013dfd10);
  *puVar8 = _DAT_013dfd08;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1e) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013dfd1e;
  uStack_6e0 = 0x21;
  lStack_6d8 = 0x1e;
  *(ulong *)((long)puVar8 + 0xe) = CONCAT62(_UNK_013dfd18,_DAT_013dfd16);
  *(undefined8 *)((long)puVar8 + 0x16) = uVar3;
  uVar3 = CONCAT26(_DAT_013dfd16,_UNK_013dfd10);
  *puVar8 = _DAT_013dfd08;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1e) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e835c90;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e8359c0;
  puStack_730 = &UNK_0e835cb0;
  puStack_728 = &UNK_0e8364a0;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f762358 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762358), iVar5 != 0)) {
    func_0x0e837020();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7622d8,0xf53dab8);
    FUN_0410844d(&DAT_0f762358);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7622d8 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7f96a0;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7622d8 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7f96a0:
    puVar9 = &DAT_0f7622d8;
    if (iRam000000000f762338 != -0x2b3da790) goto LAB_0e7f970d;
LAB_0e7f96cb:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7f970d;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e856460(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7f96cb;
LAB_0e7f970d:
    func_0x0e856460(&plStack_630,param_1,&DAT_013acaef,0x28);
  }
  if (cStack_600 == '\0') {
    lStack_588 = (ulong)uStack_5ff << 8;
    plStack_5b8 = plStack_630;
    plStack_5b0 = plStack_628;
    plStack_5a8 = plStack_620;
    plStack_5a0 = plStack_618;
    plStack_598 = plStack_610;
    uStack_590 = uStack_608;
    if ((DAT_0f7622c0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7622c0), iVar5 != 0)) {
      func_0x0e836ee0();
      FUN_0410844d(&DAT_0f7622c0);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e856fc0;
    func_0x05da1460(&plStack_5b0);
    lVar7 = func_0x0d8b84a0(plStack_5b8 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e856a50(auStack_708,plStack_5b8 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        puVar2 = *(undefined1 **)(piVar11 + 0xc);
        while (puVar2 != (undefined1 *)auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          puVar2 = *(undefined1 **)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7f9943;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7f9943:
    uStack_5c8 = lStack_588;
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x0e856a50(auStack_708,plStack_5b8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      puVar2 = *(undefined1 **)(piVar11 + 0xc);
      while (puVar2 != (undefined1 *)auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        puVar2 = *(undefined1 **)(piVar11 + 0xc);
      }
LAB_0e7f99ff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f99ff;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    if ((DAT_0f7622c0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7622c0), iVar5 != 0)) {
      func_0x0e836ee0();
      FUN_0410844d(&DAT_0f7622c0);
    }
    plVar10 = plStack_5f8;
    uStack_5d0 = 0x7ed207be00000001;
    if ((DAT_0f762358 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762358), iVar5 != 0)) {
      func_0x0e837020();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f7622d8,0xf53dab8);
      FUN_0410844d(&DAT_0f762358);
    }
    plVar13 = (long *)(plVar10[3] +
                      (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f7622d8 + 4)) * 8);
    do {
      lVar7 = *plVar13;
      if (lVar7 == -1) goto LAB_0e7f9aa1;
      plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
    } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7622d8 + 4));
    if (plVar13 == (long *)plVar10[7]) {
LAB_0e7f9aa1:
      auStack_708._0_8_ = &DAT_0f7622d8;
    }
    else {
      auStack_708._0_8_ = plVar13[2];
    }
    auStack_708._8_8_ = plVar10 + 3;
    func_0x0ed621a0(auStack_708,uStack_5d0._4_4_);
    auStack_708._0_2_ = 0x10;
    auStack_708._8_8_ = &plStack_5f0;
    puStack_6f8 = (undefined *)CONCAT44(puStack_6f8._4_4_,uStack_5d0._4_4_);
    uStack_6f0 = (code *)0x0;
    pcStack_6e8 = (code *)0x0;
    uStack_6e0 = 0;
    lStack_6d8 = 0;
    puStack_6d0 = (undefined8 *)0x0;
    uStack_6c8 = 0x20;
    uStack_6c7 = (undefined7)_DAT_0145f6ec;
    uStack_6c0 = (undefined1)((ulong)_DAT_0145f6ec >> 0x38);
    uStack_6bf = (undefined1)_UNK_0145f6f4;
    uStack_6be = (undefined6)((ulong)_UNK_0145f6f4 >> 8);
    uStack_6b8 = (undefined1)((ulong)_UNK_0145f6f4 >> 0x38);
    uStack_6b7 = 0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    lStack_6a0 = 0;
    uStack_698 = 0;
    lStack_690 = 0;
    lStack_688 = 0;
    uStack_680 = CONCAT44(uStack_680._4_4_,0x3f600000);
    FUN_048afb10(&lStack_6b0,8);
    _uStack_658 = 0;
    lStack_650 = 0;
    lStack_668 = 0;
    _uStack_660 = 0;
    lStack_678 = 0;
    lStack_670 = 0;
    uStack_648 = 0xff00;
    uStack_644 = uStack_644 & 0xffffff00;
    uStack_640 = uStack_640 & 0xffffff00;
    uStack_63c = 0;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)puVar8;
      (**(code **)(lVar7 + 8))();
      puVar8 = (undefined8 *)uStack_6f0;
    }
    uStack_6f0 = (code *)puVar8;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e856fd0;
    puStack_728 = &UNK_0e857130;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    uVar3 = auStack_708._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
      func_0x048b0af0(0xf550a08);
      FUN_0410844d(&DAT_0f550a20);
    }
    uStack_770 = CONCAT44(uStack_770._4_4_,_DAT_0f550a0c);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar19 = pcStack_6e8;
    puVar8 = (undefined8 *)uStack_6f0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0ef439d0;
    plStack_768 = plVar10 + 3;
    uStack_6f0 = (code *)0x0;
    pcStack_6e8 = (code *)0x0;
    plVar10[3] = (long)puVar8;
    plVar10[4] = (long)pcVar19;
    plVar10[7] = (long)puStack_6d0;
    plVar10[5] = uStack_6e0;
    plVar10[6] = lStack_6d8;
    uStack_6e0 = 0;
    lStack_6d8 = 0;
    puStack_6d0 = (undefined8 *)0x0;
    plVar10[10] = CONCAT62(uStack_6b6,CONCAT11(uStack_6b7,uStack_6b8));
    plVar10[8] = CONCAT71(uStack_6c7,uStack_6c8);
    plVar10[9] = CONCAT62(uStack_6be,CONCAT11(uStack_6bf,uStack_6c0));
    uStack_6c8 = 0;
    uStack_6c7 = 0;
    uStack_6c0 = 0;
    uStack_6bf = 0;
    uStack_6be = 0;
    uStack_6b8 = 0;
    uStack_6b7 = 0;
    uStack_6b6 = 0;
    plVar10[0xb] = lStack_6b0;
    plVar10[0xc] = lStack_6a8;
    plVar10[0xd] = lStack_6a0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    lStack_6a0 = 0;
    plVar10[0xe] = uStack_698;
    plVar10[0xf] = lStack_690;
    plVar10[0x10] = lStack_688;
    uStack_698 = 0;
    lStack_690 = 0;
    lStack_688 = 0;
    *(undefined4 *)(plVar10 + 0x11) = (undefined4)uStack_680;
    plVar10[0x12] = lStack_678;
    plVar10[0x13] = lStack_670;
    plVar10[0x14] = lStack_668;
    lStack_678 = 0;
    lStack_670 = 0;
    lStack_668 = 0;
    plVar10[0x17] = lStack_650;
    plVar10[0x15] = _uStack_660;
    plVar10[0x16] = _uStack_658;
    _uStack_660 = 0;
    _uStack_658 = 0;
    lStack_650 = 0;
    *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_63c,CONCAT43(uStack_640,uStack_644._1_3_));
    plVar10[0x18] = CONCAT44(uStack_644,CONCAT22(uStack_646,uStack_648));
    plStack_578 = (long *)0x0;
    plStack_570 = (long *)0x0;
    plStack_760 = plVar10;
    func_0x048afd20(uVar3,&uStack_770);
    plVar10 = plStack_760;
    if (plStack_760 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_760 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_760 + 0x10))(plStack_760);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = plStack_570;
    if (plStack_570 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_570 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_570 + 0x10))(plStack_570);
        func_0x0412c2d0(plVar10);
      }
    }
    lVar7 = *(long *)(uVar3 + 0x10);
    iVar5 = *(int *)(uVar3 + 0x1c);
    if (iVar5 == 2) {
      piVar11 = *(int **)(*(long *)(lVar7 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != *(int *)(uVar3 + 0x18)) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      for (; *(long *)(piVar11 + 0xc) != *(long *)(uVar3 + 8); piVar11 = *(int **)(piVar11 + 0xe)) {
      }
LAB_0e7f9fda:
      piVar11[4] = piVar11[4] | auStack_708._0_4_ << 0x10;
    }
    else {
      if (iVar5 == 1) {
        piVar11 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != *(int *)(uVar3 + 0x18)) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7f9fda;
      }
      if (iVar5 == 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | auStack_708._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_013acaef,0x28);
  uStack_608 = 0x6fa163900000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cce00;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar3 = _UNK_013acb07;
  puStack_6f8 = (undefined *)0x31;
  uStack_6f0 = (code *)0x28;
  puVar8[2] = _DAT_013acaff;
  puVar8[3] = uVar3;
  uVar3 = _UNK_013acaf7;
  *puVar8 = _DAT_013acaef;
  puVar8[1] = uVar3;
  puVar8[4] = 0x676e69706d756a5f;
  *(undefined1 *)(puVar8 + 5) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar3 = _UNK_013acb07;
  uStack_6e0 = 0x31;
  lStack_6d8 = 0x28;
  puVar8[2] = _DAT_013acaff;
  puVar8[3] = uVar3;
  uVar3 = _UNK_013acaf7;
  *puVar8 = _DAT_013acaef;
  puVar8[1] = uVar3;
  puVar8[4] = 0x676e69706d756a5f;
  *(undefined1 *)(puVar8 + 5) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e837230;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e836f60;
  puStack_730 = &UNK_0e837250;
  puStack_728 = &UNK_0e837a40;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f762410 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762410), iVar5 != 0)) {
    func_0x0e838680();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762390,0xf53dab8);
    FUN_0410844d(&DAT_0f762410);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762390 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7fa320;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762390 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7fa320:
    puVar9 = &DAT_0f762390;
    if (iRam000000000f7623f0 != -0x2b3da790) goto LAB_0e7fa38d;
LAB_0e7fa34b:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7fa38d;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e857310(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7fa34b;
LAB_0e7fa38d:
    func_0x0e857310(&plStack_630,param_1,&DAT_01325d0f,0x29);
  }
  if (cStack_600 == '\0') {
    lStack_4c8 = (ulong)uStack_5ff << 8;
    plStack_4f8 = plStack_630;
    plStack_4f0 = plStack_628;
    plStack_4e8 = plStack_620;
    plStack_4e0 = plStack_618;
    plStack_4d8 = plStack_610;
    uStack_4d0 = uStack_608;
    if ((DAT_0f762378 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762378), iVar5 != 0)) {
      func_0x0e838540();
      FUN_0410844d(&DAT_0f762378);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e857ec0;
    func_0x05da1460(&plStack_4f0);
    lVar7 = func_0x0d8b84a0(plStack_4f8 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e857900(auStack_708,plStack_4f8 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7fa563;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7fa563:
    lStack_508 = lStack_4c8;
    plStack_518 = plStack_4d8;
    uStack_510 = uStack_4d0;
    plStack_528 = plStack_4e8;
    plStack_520 = plStack_4e0;
    plStack_538 = plStack_4f8;
    plStack_530 = plStack_4f0;
    func_0x0e857900(auStack_708,plStack_4f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fa61f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fa61f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e857ed0(auStack_708,&plStack_538,&DAT_014c9e98,0x15);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_0490ce30;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &SUB_0490cb20;
    puStack_730 = &UNK_0e8584e0;
    puStack_728 = &UNK_0e858640;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e8581e0(auStack_708);
    lStack_548 = CONCAT71(lStack_548._1_7_,(undefined1)lStack_508);
    plStack_558 = plStack_518;
    uStack_550 = uStack_510;
    plStack_568 = plStack_528;
    plStack_560 = plStack_520;
    plStack_578 = plStack_538;
    plStack_570 = plStack_530;
    func_0x048b0bc0(&uStack_6f0);
    plStack_5b8 = plStack_578;
    plStack_5b0 = plStack_570;
    plStack_5a8 = plStack_568;
    plStack_5a0 = plStack_560;
    plStack_598 = plStack_558;
    uStack_590 = uStack_550;
    lStack_588 = lStack_548;
    func_0x0e857900(auStack_708,plStack_578 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fa8bf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fa8bf;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e857ed0(auStack_708,&plStack_5b8,&UNK_01391246,10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_0490ce30;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &SUB_0490cb20;
    puStack_730 = &UNK_0e858820;
    puStack_728 = &UNK_0e858980;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e8581e0(auStack_708);
    uStack_5c8 = CONCAT71(uStack_5c8._1_7_,(undefined1)lStack_588);
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x048b0bc0(&uStack_6f0);
    func_0x0e857900(auStack_708,plStack_5f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7faaff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7faaff;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e857ed0(auStack_708,&plStack_5f8,&DAT_013fa05a,0x19);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e858b60;
    puStack_728 = &UNK_0e858cc0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e8581e0(auStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_01325d0f,0x29);
  uStack_608 = 0x208475f200000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cce88;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar3 = _UNK_01325d30;
  puStack_6f8 = (undefined *)0x31;
  uStack_6f0 = (code *)0x29;
  *(ulong *)((long)puVar8 + 0x19) = CONCAT17(UNK_01325d2f,_DAT_01325d28);
  *(undefined8 *)((long)puVar8 + 0x21) = uVar3;
  uVar3 = CONCAT71(_DAT_01325d28,UNK_01325d27);
  puVar8[2] = _DAT_01325d1f;
  puVar8[3] = uVar3;
  uVar3 = _UNK_01325d17;
  *puVar8 = _DAT_01325d0f;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x29) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar3 = _UNK_01325d30;
  uStack_6e0 = 0x31;
  lStack_6d8 = 0x29;
  *(ulong *)((long)puVar8 + 0x19) = CONCAT17(UNK_01325d2f,_DAT_01325d28);
  *(undefined8 *)((long)puVar8 + 0x21) = uVar3;
  uVar3 = CONCAT71(_DAT_01325d28,UNK_01325d27);
  puVar8[2] = _DAT_01325d1f;
  puVar8[3] = uVar3;
  uVar3 = _UNK_01325d17;
  *puVar8 = _DAT_01325d0f;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x29) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e8388c0;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e8385c0;
  puStack_730 = &UNK_0e8388e0;
  puStack_728 = &UNK_0e838fb0;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  func_0x0d89f0d0(param_1);
  if ((DAT_0f7624c8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7624c8), iVar5 != 0)) {
    func_0x0e839c80();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762448,0xf53dab8);
    FUN_0410844d(&DAT_0f7624c8);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762448 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7faf80;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762448 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7faf80:
    puVar9 = &DAT_0f762448;
    if (iRam000000000f7624a8 != -0x2b3da790) goto LAB_0e7fafed;
LAB_0e7fafab:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7fafed;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e858ea0(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7fafab;
LAB_0e7fafed:
    func_0x0e858ea0(&plStack_630,param_1,&DAT_01376ca1,0x18);
  }
  if (cStack_600 == '\0') {
    uStack_388._6_2_ = (ushort)((ulong)uStack_388 >> 0x30);
    lStack_408 = (ulong)uStack_5ff << 8;
    plStack_438 = plStack_630;
    plStack_430 = plStack_628;
    plStack_428 = plStack_620;
    plStack_420 = plStack_618;
    plStack_418 = plStack_610;
    uStack_410 = uStack_608;
    if ((DAT_0f762430 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762430), iVar5 != 0)) {
      func_0x0e839b40();
      FUN_0410844d(&DAT_0f762430);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e859a50;
    func_0x05da1460(&plStack_430);
    lVar7 = func_0x0d8b84a0(plStack_438 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e859490(auStack_708,plStack_438 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7fb223;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7fb223:
    lStack_3c8 = lStack_408;
    plStack_3d8 = plStack_418;
    uStack_3d0 = uStack_410;
    plStack_3e8 = plStack_428;
    plStack_3e0 = plStack_420;
    plStack_3f8 = plStack_438;
    plStack_3f0 = plStack_430;
    func_0x0e859490(auStack_708,plStack_438 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fb2df:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fb2df;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e859a60(auStack_708,&plStack_3f8,&UNK_01222e20,8);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85a070;
    puStack_728 = &UNK_0e85a1d0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e859d70(auStack_708);
    lStack_448 = CONCAT71(lStack_448._1_7_,(undefined1)lStack_3c8);
    plStack_458 = plStack_3d8;
    uStack_450 = uStack_3d0;
    plStack_468 = plStack_3e8;
    plStack_460 = plStack_3e0;
    plStack_478 = plStack_3f8;
    plStack_470 = plStack_3f0;
    func_0x048b0bc0(&uStack_6f0);
    plStack_4b8 = plStack_478;
    plStack_4b0 = plStack_470;
    plStack_4a8 = plStack_468;
    plStack_4a0 = plStack_460;
    plStack_498 = plStack_458;
    uStack_490 = uStack_450;
    lStack_488 = lStack_448;
    func_0x0e859490(auStack_708,plStack_478 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fb57f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fb57f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e859a60(auStack_708,&plStack_4b8,&UNK_011fda6b,0xf);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85a3b0;
    puStack_728 = &UNK_0e85a510;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e859d70(auStack_708);
    lStack_4c8 = CONCAT71(lStack_4c8._1_7_,(undefined1)lStack_488);
    plStack_4d8 = plStack_498;
    uStack_4d0 = uStack_490;
    plStack_4e8 = plStack_4a8;
    plStack_4e0 = plStack_4a0;
    plStack_4f8 = plStack_4b8;
    plStack_4f0 = plStack_4b0;
    func_0x048b0bc0(&uStack_6f0);
    plStack_538 = plStack_4f8;
    plStack_530 = plStack_4f0;
    plStack_528 = plStack_4e8;
    plStack_520 = plStack_4e0;
    plStack_518 = plStack_4d8;
    uStack_510 = uStack_4d0;
    lStack_508 = lStack_4c8;
    func_0x0e859490(auStack_708,plStack_4f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fb7ff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fb7ff;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e859a60(auStack_708,&plStack_538,&DAT_0131a595,0x1b);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85a6f0;
    puStack_728 = &UNK_0e85a850;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e859d70(auStack_708);
    lStack_548 = CONCAT71(lStack_548._1_7_,(undefined1)lStack_508);
    plStack_558 = plStack_518;
    uStack_550 = uStack_510;
    plStack_568 = plStack_528;
    plStack_560 = plStack_520;
    plStack_578 = plStack_538;
    plStack_570 = plStack_530;
    func_0x048b0bc0(&uStack_6f0);
    plStack_5b8 = plStack_578;
    plStack_5b0 = plStack_570;
    plStack_5a8 = plStack_568;
    plStack_5a0 = plStack_560;
    plStack_598 = plStack_558;
    uStack_590 = uStack_550;
    lStack_588 = lStack_548;
    func_0x0e859490(auStack_708,plStack_578 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fba7f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fba7f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e859a60(auStack_708,&plStack_5b8,&DAT_014220ea,0x19);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85aa30;
    puStack_728 = &UNK_0e85ab90;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e859d70(auStack_708);
    plVar10 = plStack_5b8;
    plStack_348 = plStack_5b0;
    plStack_340 = plStack_5a8;
    plStack_338 = plStack_5a0;
    plStack_330 = plStack_598;
    iVar5 = (int)uStack_590;
    uVar16 = uStack_590._4_4_;
    uVar18 = (undefined1)lStack_588;
    func_0x048b0bc0(&uStack_6f0);
    uStack_388 = (long *)((ulong)uStack_388._6_2_ << 0x30);
    if (iVar5 == 4) {
      if ((DAT_0f7624c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7624c8), iVar6 != 0)) {
        func_0x0e839c80();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f762448,0xf53dab8);
        FUN_0410844d(&DAT_0f7624c8);
      }
      plVar13 = (long *)(plVar10[3] +
                        (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f762448 + 4)) * 8);
      do {
        lVar7 = *plVar13;
        if (lVar7 == -1) goto LAB_0e7fbd00;
        plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
      } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762448 + 4));
      if (plVar13 == (long *)plVar10[7]) {
LAB_0e7fbd00:
        puVar9 = &DAT_0f762448;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      uStack_57c = CONCAT31(uStack_57c._1_3_,uVar18);
      uStack_53c = uVar16;
      lVar7 = FUN_048b1040(plVar10 + 3,puVar9,uVar16,1);
      if (lVar7 == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b10d0(auStack_708);
        lVar7 = auStack_708._0_8_;
      }
      lVar15 = *(long *)(lVar7 + 0x38);
      if (*(long *)(lVar7 + 0x38) == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b10d0(auStack_708);
        lVar15 = auStack_708._0_8_;
        if (auStack_708._0_8_ != 0) goto LAB_0e7fc635;
      }
      else {
LAB_0e7fc635:
        do {
          lVar7 = lVar15;
          lVar15 = *(long *)(lVar7 + 0x38);
          if (*(long *)(lVar7 + 0x38) == 0) {
            auStack_708 = ZEXT816(0);
            func_0x048b10d0(auStack_708);
            lVar15 = auStack_708._0_8_;
          }
        } while (lVar15 != 0);
      }
      lVar7 = *(long *)(lVar7 + 0x48);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar8[1] = 0xffffffffffffffff;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0xff;
      *puVar8 = &UNK_0f0edc68;
      uVar3 = _UNK_014e4bb8;
      puVar8[4] = _DAT_014e4bb0;
      puVar8[5] = uVar3;
      puVar8[6] = 0;
      *(undefined2 *)(puVar8 + 7) = 0;
      *(undefined4 *)((long)puVar8 + 0x3a) = (undefined4)uStack_388;
      *(undefined2 *)((long)puVar8 + 0x3e) = uStack_388._4_2_;
      plVar13 = *(long **)(lVar7 + 8);
      *(undefined8 **)(lVar7 + 8) = puVar8;
      uVar18 = (undefined1)uStack_57c;
      uVar16 = uStack_53c;
joined_r0x0e7fc70b:
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iVar5 == 1) {
      if ((DAT_0f7624c8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7624c8), iVar6 != 0)) {
        func_0x0e839c80();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f762448,0xf53dab8);
        FUN_0410844d(&DAT_0f7624c8);
      }
      plVar13 = (long *)(plVar10[3] +
                        (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f762448 + 4)) * 8);
      do {
        lVar7 = *plVar13;
        if (lVar7 == -1) goto LAB_0e7fbc80;
        plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
      } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762448 + 4));
      if (plVar13 == (long *)plVar10[7]) {
LAB_0e7fbc80:
        puVar9 = &DAT_0f762448;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      uStack_57c = CONCAT31(uStack_57c._1_3_,uVar18);
      lVar7 = func_0x048b0c90(plVar10 + 3,puVar9,uVar16,1);
      if (lVar7 == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b0d20(auStack_708);
        lVar7 = auStack_708._0_8_;
      }
      lVar7 = *(long *)(lVar7 + 0x58);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar8[1] = 0xffffffffffffffff;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0xff;
      *puVar8 = &UNK_0f0edc68;
      uVar3 = _UNK_014e4bb8;
      puVar8[4] = _DAT_014e4bb0;
      puVar8[5] = uVar3;
      puVar8[6] = 0;
      *(undefined2 *)(puVar8 + 7) = 0;
      *(undefined4 *)((long)puVar8 + 0x3a) = (undefined4)uStack_388;
      *(undefined2 *)((long)puVar8 + 0x3e) = uStack_388._4_2_;
      plVar13 = *(long **)(lVar7 + 8);
      *(undefined8 **)(lVar7 + 8) = puVar8;
      uVar18 = (undefined1)uStack_57c;
      goto joined_r0x0e7fc70b;
    }
    plStack_5e0 = plStack_338;
    plStack_5d8 = plStack_330;
    plStack_5f0 = plStack_348;
    plStack_5e8 = plStack_340;
    plStack_5f8 = plVar10;
    uStack_5d0 = CONCAT44(uVar16,iVar5);
    uVar16 = (undefined4)uStack_198;
    uStack_5c8._0_5_ = CONCAT41(uVar16,uVar18);
    uStack_5c8 = CONCAT44(uStack_198._3_4_,(undefined4)uStack_5c8);
    func_0x0e859490(auStack_708,plVar10 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fbf2f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fbf2f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e859a60(auStack_708,&plStack_5f8,&UNK_01479690,0xe);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0c2710;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_072a3520;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &SUB_072a3240;
    puStack_730 = &UNK_0e85ad70;
    puStack_728 = &UNK_0e85aed0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e859d70(auStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_01376ca1,0x18);
  uStack_608 = 0x18445bae00000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4ccf10;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01376ca9;
  puStack_6f8 = (undefined *)0x21;
  uStack_6f0 = (code *)&DAT_00000018;
  *puVar8 = _DAT_01376ca1;
  puVar8[1] = uVar3;
  puVar8[2] = 0x6666696e732e726f;
  *(undefined1 *)(puVar8 + 3) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01376ca9;
  uStack_6e0 = 0x21;
  lStack_6d8 = 0x18;
  *puVar8 = _DAT_01376ca1;
  puVar8[1] = uVar3;
  puVar8[2] = 0x6666696e732e726f;
  *(undefined1 *)(puVar8 + 3) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e839ec0;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e839bc0;
  puStack_730 = &UNK_0e839ee0;
  puStack_728 = &UNK_0e83a5b0;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f762580 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762580), iVar5 != 0)) {
    func_0x0e83b5b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762500,0xf53dab8);
    FUN_0410844d(&DAT_0f762580);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762500 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7fc390;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762500 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7fc390:
    puVar9 = &DAT_0f762500;
    if (iRam000000000f762560 != -0x2b3da790) goto LAB_0e7fc3fd;
LAB_0e7fc3bb:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7fc3fd;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e85b0b0(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7fc3bb;
LAB_0e7fc3fd:
    func_0x0e85b0b0(&plStack_630,param_1,&DAT_011b9047,0x1d);
  }
  if (cStack_600 == '\0') {
    lStack_268 = (ulong)uStack_5ff << 8;
    plStack_298 = plStack_630;
    plStack_290 = plStack_628;
    plStack_288 = plStack_620;
    plStack_280 = plStack_618;
    plStack_278 = plStack_610;
    uStack_270 = uStack_608;
    if ((DAT_0f7624e8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7624e8), iVar5 != 0)) {
      func_0x0e83b470();
      FUN_0410844d(&DAT_0f7624e8);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e85bc80;
    func_0x05da1460(&plStack_290);
    lVar7 = func_0x0d8b84a0(plStack_298 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e85b6a0(auStack_708,plStack_298 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7fc7b3;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7fc7b3:
    lStack_2a8 = lStack_268;
    plStack_2b8 = plStack_278;
    uStack_2b0 = uStack_270;
    plStack_2c8 = plStack_288;
    plStack_2c0 = plStack_280;
    plStack_2d8 = plStack_298;
    plStack_2d0 = plStack_290;
    func_0x0e85b6a0(auStack_708,plStack_298 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fc86f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fc86f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_2d8,&UNK_01222e20,8);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85c2a0;
    puStack_728 = &UNK_0e85c400;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    plVar10 = plStack_2d8;
    plStack_58 = plStack_2d0;
    plStack_50 = plStack_2c8;
    plStack_48 = plStack_2c0;
    plStack_40 = plStack_2b8;
    iVar5 = (int)uStack_2b0;
    uStack_57c = uStack_2b0._4_4_;
    uVar18 = (undefined1)lStack_2a8;
    func_0x048b0bc0(&uStack_6f0);
    uStack_440 = 0;
    uStack_43c = 0;
    if (iVar5 == 4) {
      if ((DAT_0f762580 == '\0') && (iVar6 = func_0x04108328(&DAT_0f762580), iVar6 != 0)) {
        func_0x0e83b5b0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f762500,0xf53dab8);
        FUN_0410844d(&DAT_0f762580);
      }
      plVar13 = (long *)(plVar10[3] +
                        (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f762500 + 4)) * 8);
      do {
        lVar7 = *plVar13;
        if (lVar7 == -1) goto LAB_0e7fcb13;
        plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
      } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762500 + 4));
      if (plVar13 == (long *)plVar10[7]) {
LAB_0e7fcb13:
        puVar9 = &DAT_0f762500;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      uStack_53c = CONCAT31(uStack_53c._1_3_,uVar18);
      lVar7 = FUN_048b1040(plVar10 + 3,puVar9,uStack_57c,1);
      if (lVar7 == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b10d0(auStack_708);
        lVar7 = auStack_708._0_8_;
      }
      lVar15 = *(long *)(lVar7 + 0x38);
      if (*(long *)(lVar7 + 0x38) == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b10d0(auStack_708);
        lVar15 = auStack_708._0_8_;
        if (auStack_708._0_8_ != 0) goto LAB_0e7fed26;
      }
      else {
LAB_0e7fed26:
        do {
          lVar7 = lVar15;
          lVar15 = *(long *)(lVar7 + 0x38);
          if (*(long *)(lVar7 + 0x38) == 0) {
            auStack_708 = ZEXT816(0);
            func_0x048b10d0(auStack_708);
            lVar15 = auStack_708._0_8_;
          }
        } while (lVar15 != 0);
      }
      lVar7 = *(long *)(lVar7 + 0x48);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar8[1] = 0xffffffffffffffff;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0xff;
      *puVar8 = &UNK_0f0edc68;
      uVar3 = _DAT_014f0238;
      puVar8[4] = 0;
      puVar8[5] = uVar3;
      puVar8[6] = 0;
      *(undefined2 *)(puVar8 + 7) = 0;
      *(undefined4 *)((long)puVar8 + 0x3a) = uStack_440;
      *(undefined2 *)((long)puVar8 + 0x3e) = uStack_43c;
      plVar13 = *(long **)(lVar7 + 8);
      *(undefined8 **)(lVar7 + 8) = puVar8;
      uVar18 = (undefined1)uStack_53c;
joined_r0x0e7fee00:
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (iVar5 == 1) {
      if ((DAT_0f762580 == '\0') && (iVar6 = func_0x04108328(&DAT_0f762580), iVar6 != 0)) {
        func_0x0e83b5b0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f762500,0xf53dab8);
        FUN_0410844d(&DAT_0f762580);
      }
      plVar13 = (long *)(plVar10[3] +
                        (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                               *(uint *)(_DAT_0f762500 + 4)) * 8);
      do {
        lVar7 = *plVar13;
        if (lVar7 == -1) goto LAB_0e7fca93;
        plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
      } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762500 + 4));
      if (plVar13 == (long *)plVar10[7]) {
LAB_0e7fca93:
        puVar9 = &DAT_0f762500;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      uStack_53c = CONCAT31(uStack_53c._1_3_,uVar18);
      lVar7 = func_0x048b0c90(plVar10 + 3,puVar9,uStack_57c,1);
      if (lVar7 == 0) {
        auStack_708 = ZEXT816(0);
        func_0x048b0d20(auStack_708);
        lVar7 = auStack_708._0_8_;
      }
      lVar7 = *(long *)(lVar7 + 0x58);
      puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      puVar8[1] = 0xffffffffffffffff;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0xff;
      *puVar8 = &UNK_0f0edc68;
      uVar3 = _DAT_014f0238;
      puVar8[4] = 0;
      puVar8[5] = uVar3;
      puVar8[6] = 0;
      *(undefined2 *)(puVar8 + 7) = 0;
      *(undefined4 *)((long)puVar8 + 0x3a) = uStack_440;
      *(undefined2 *)((long)puVar8 + 0x3e) = uStack_43c;
      plVar13 = *(long **)(lVar7 + 8);
      *(undefined8 **)(lVar7 + 8) = puVar8;
      uVar18 = (undefined1)uStack_53c;
      goto joined_r0x0e7fee00;
    }
    plStack_2f8 = plStack_48;
    plStack_2f0 = plStack_40;
    plStack_308 = plStack_58;
    plStack_300 = plStack_50;
    plStack_310 = plVar10;
    iStack_2e8 = iVar5;
    uStack_2e4 = uStack_57c;
    uStack_2e0 = uVar18;
    func_0x0e85b6a0(auStack_708,plVar10 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fcd5f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fcd5f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_310,&DAT_0145f6ec,0x10);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85c5e0;
    puStack_728 = &UNK_0e85c740;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    uStack_128 = uStack_2e0;
    uStack_130 = CONCAT44(uStack_2e4,iStack_2e8);
    plStack_138 = plStack_2f0;
    plStack_148 = plStack_300;
    plStack_140 = plStack_2f8;
    plStack_158 = plStack_310;
    plStack_150 = plStack_308;
    func_0x048b0bc0(&uStack_6f0);
    plStack_258 = plStack_158;
    plStack_250 = plStack_150;
    plStack_248 = plStack_148;
    plStack_240 = plStack_140;
    plStack_238 = plStack_138;
    uStack_230 = uStack_130;
    uStack_228 = CONCAT71(uStack_127,uStack_128);
    func_0x0e85b6a0(auStack_708,plStack_158 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fcfef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fcfef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_258,&UNK_01422104,0xd);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85c920;
    puStack_728 = &UNK_0e85ca80;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    uStack_e8 = (undefined1)uStack_228;
    plStack_f8 = plStack_238;
    uStack_f0 = uStack_230;
    plStack_108 = plStack_248;
    plStack_100 = plStack_240;
    plStack_118 = plStack_258;
    plStack_110 = plStack_250;
    func_0x048b0bc0(&uStack_6f0);
    plStack_218 = plStack_118;
    plStack_210 = plStack_110;
    plStack_208 = plStack_108;
    plStack_200 = plStack_100;
    plStack_1f8 = plStack_f8;
    uStack_1f0 = uStack_f0;
    uStack_1e8 = CONCAT71(uStack_e7,uStack_e8);
    func_0x0e85b6a0(auStack_708,plStack_118 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fd26f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fd26f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_218,&DAT_0129a34d,0x17);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85cc60;
    puStack_728 = &UNK_0e85cdc0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    uStack_a8 = (undefined1)uStack_1e8;
    plStack_b8 = plStack_1f8;
    uStack_b0 = uStack_1f0;
    plStack_c8 = plStack_208;
    plStack_c0 = plStack_200;
    plStack_d8 = plStack_218;
    plStack_d0 = plStack_210;
    func_0x048b0bc0(&uStack_6f0);
    plStack_1d8 = plStack_d8;
    plStack_1d0 = plStack_d0;
    plStack_1c8 = plStack_c8;
    plStack_1c0 = plStack_c0;
    plStack_1b8 = plStack_b8;
    uStack_1b0 = uStack_b0;
    uStack_1a8 = CONCAT71(uStack_a7,uStack_a8);
    func_0x0e85b6a0(auStack_708,plStack_d8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fd4ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fd4ef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_1d8,&DAT_013d4c8a,0x15);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85cfa0;
    puStack_728 = &UNK_0e85d100;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    uStack_68 = (undefined1)uStack_1a8;
    plStack_78 = plStack_1b8;
    uStack_70 = uStack_1b0;
    plStack_88 = plStack_1c8;
    plStack_80 = plStack_1c0;
    plStack_98 = plStack_1d8;
    plStack_90 = plStack_1d0;
    func_0x048b0bc0(&uStack_6f0);
    uStack_388 = plStack_98;
    plStack_380 = plStack_90;
    plStack_378 = plStack_88;
    plStack_370 = plStack_80;
    plStack_368 = plStack_78;
    uStack_360 = uStack_70;
    uStack_358 = CONCAT71(uStack_67,uStack_68);
    func_0x0e85b6a0(auStack_708,plStack_98 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fd76f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fd76f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&uStack_388,&UNK_0119d347,0xf);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85d2e0;
    puStack_728 = &UNK_0e85d440;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    uStack_168 = (undefined1)uStack_358;
    plStack_178 = plStack_368;
    uStack_170 = uStack_360;
    plStack_188 = plStack_378;
    plStack_180 = plStack_370;
    uStack_198 = uStack_388;
    plStack_190 = plStack_380;
    func_0x048b0bc0(&uStack_6f0);
    plStack_348 = uStack_198;
    plStack_340 = plStack_190;
    plStack_338 = plStack_188;
    plStack_330 = plStack_180;
    plStack_328 = plStack_178;
    uStack_320 = uStack_170;
    uStack_318 = CONCAT71(uStack_167,uStack_168);
    func_0x0e85b6a0(auStack_708,uStack_198 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fd9ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fd9ef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_348,&DAT_0145f7fc,0x1b);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85d620;
    puStack_728 = &UNK_0e85d780;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    lStack_408 = CONCAT71(lStack_408._1_7_,(undefined1)uStack_318);
    plStack_418 = plStack_328;
    uStack_410 = uStack_320;
    plStack_428 = plStack_338;
    plStack_420 = plStack_330;
    plStack_438 = plStack_348;
    plStack_430 = plStack_340;
    func_0x048b0bc0(&uStack_6f0);
    plStack_3f8 = plStack_438;
    plStack_3f0 = plStack_430;
    plStack_3e8 = plStack_428;
    plStack_3e0 = plStack_420;
    plStack_3d8 = plStack_418;
    uStack_3d0 = uStack_410;
    lStack_3c8 = lStack_408;
    func_0x0e85b6a0(auStack_708,plStack_438 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fdc6f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fdc6f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_3f8,&DAT_013910cb,0x1d);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85d960;
    puStack_728 = &UNK_0e85dac0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    lStack_448 = CONCAT71(lStack_448._1_7_,(undefined1)lStack_3c8);
    plStack_458 = plStack_3d8;
    uStack_450 = uStack_3d0;
    plStack_468 = plStack_3e8;
    plStack_460 = plStack_3e0;
    plStack_478 = plStack_3f8;
    plStack_470 = plStack_3f0;
    func_0x048b0bc0(&uStack_6f0);
    plStack_4b8 = plStack_478;
    plStack_4b0 = plStack_470;
    plStack_4a8 = plStack_468;
    plStack_4a0 = plStack_460;
    plStack_498 = plStack_458;
    uStack_490 = uStack_450;
    lStack_488 = lStack_448;
    func_0x0e85b6a0(auStack_708,plStack_478 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fdeef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fdeef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_4b8,&DAT_01325d6f,0x14);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85dca0;
    puStack_728 = &UNK_0e85de00;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    lStack_4c8 = CONCAT71(lStack_4c8._1_7_,(undefined1)lStack_488);
    plStack_4d8 = plStack_498;
    uStack_4d0 = uStack_490;
    plStack_4e8 = plStack_4a8;
    plStack_4e0 = plStack_4a0;
    plStack_4f8 = plStack_4b8;
    plStack_4f0 = plStack_4b0;
    func_0x048b0bc0(&uStack_6f0);
    plStack_538 = plStack_4f8;
    plStack_530 = plStack_4f0;
    plStack_528 = plStack_4e8;
    plStack_520 = plStack_4e0;
    plStack_518 = plStack_4d8;
    uStack_510 = uStack_4d0;
    lStack_508 = lStack_4c8;
    func_0x0e85b6a0(auStack_708,plStack_4f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fe16f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fe16f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_538,&DAT_01280d54,0x1b);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85dfe0;
    puStack_728 = &UNK_0e85e140;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    lStack_548 = CONCAT71(lStack_548._1_7_,(undefined1)lStack_508);
    plStack_558 = plStack_518;
    uStack_550 = uStack_510;
    plStack_568 = plStack_528;
    plStack_560 = plStack_520;
    plStack_578 = plStack_538;
    plStack_570 = plStack_530;
    func_0x048b0bc0(&uStack_6f0);
    plStack_5b8 = plStack_578;
    plStack_5b0 = plStack_570;
    plStack_5a8 = plStack_568;
    plStack_5a0 = plStack_560;
    plStack_598 = plStack_558;
    uStack_590 = uStack_550;
    lStack_588 = lStack_548;
    func_0x0e85b6a0(auStack_708,plStack_578 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fe3ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fe3ef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_5b8,&UNK_013bb75c,0xc);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_048b3f30;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &SUB_048b2190;
    puStack_730 = &UNK_0e85e320;
    puStack_728 = &UNK_0e85e4f0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    uStack_5c8 = CONCAT71(uStack_5c8._1_7_,(undefined1)lStack_588);
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x048b0bc0(&uStack_6f0);
    func_0x0e85b6a0(auStack_708,plStack_5f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fe63f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fe63f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85bc90(auStack_708,&plStack_5f8,&UNK_013356d6,0xc);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef44b00;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_048b3f30;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &SUB_048b2190;
    puStack_730 = &UNK_0e85e6d0;
    puStack_728 = &UNK_0e85e8a0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85bfa0(auStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_011b9047,0x1d);
  uStack_608 = 0xe458d41800000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4ccf98;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_011b905c;
  puStack_6f8 = (undefined *)0x21;
  uStack_6f0 = (code *)0x1d;
  *(ulong *)((long)puVar8 + 0xd) = CONCAT53(_UNK_011b9057,_DAT_011b9054);
  *(undefined8 *)((long)puVar8 + 0x15) = uVar3;
  uVar3 = CONCAT35(_DAT_011b9054,_UNK_011b904f);
  *puVar8 = _DAT_011b9047;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1d) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_011b905c;
  uStack_6e0 = 0x21;
  lStack_6d8 = 0x1d;
  *(ulong *)((long)puVar8 + 0xd) = CONCAT53(_UNK_011b9057,_DAT_011b9054);
  *(undefined8 *)((long)puVar8 + 0x15) = uVar3;
  uVar3 = CONCAT35(_DAT_011b9054,_UNK_011b904f);
  *puVar8 = _DAT_011b9047;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1d) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e83b810;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e83b4f0;
  puStack_730 = &UNK_0e83b830;
  puStack_728 = &UNK_0e83bf00;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f762638 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762638), iVar5 != 0)) {
    func_0x0e83cbf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7625b8,0xf53dab8);
    FUN_0410844d(&DAT_0f762638);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f7625b8 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7fea90;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f7625b8 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7fea90:
    puVar9 = &DAT_0f7625b8;
    if (iRam000000000f762618 != -0x2b3da790) goto LAB_0e7feafd;
LAB_0e7feabb:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7feafd;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e85ea80(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7feabb;
LAB_0e7feafd:
    func_0x0e85ea80(&plStack_630,param_1,&DAT_011b9065,0x26);
  }
  if (cStack_600 == '\0') {
    lStack_448 = (ulong)uStack_5ff << 8;
    plStack_478 = plStack_630;
    plStack_470 = plStack_628;
    plStack_468 = plStack_620;
    plStack_460 = plStack_618;
    plStack_458 = plStack_610;
    uStack_450 = uStack_608;
    if ((DAT_0f7625a0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7625a0), iVar5 != 0)) {
      func_0x0e83cab0();
      FUN_0410844d(&DAT_0f7625a0);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e85f630;
    func_0x05da1460(&plStack_470);
    lVar7 = func_0x0d8b84a0(plStack_478 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e85f070(auStack_708,plStack_478 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7feea3;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7feea3:
    lStack_488 = lStack_448;
    plStack_498 = plStack_458;
    uStack_490 = uStack_450;
    plStack_4a8 = plStack_468;
    plStack_4a0 = plStack_460;
    plStack_4b8 = plStack_478;
    plStack_4b0 = plStack_470;
    func_0x0e85f070(auStack_708,plStack_478 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7fef5f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7fef5f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85f640(auStack_708,&plStack_4b8,&UNK_0128b951,5);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85fbf0;
    puStack_728 = &UNK_0e85fd50;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85f8f0(auStack_708);
    lStack_4c8 = CONCAT71(lStack_4c8._1_7_,(undefined1)lStack_488);
    plStack_4d8 = plStack_498;
    uStack_4d0 = uStack_490;
    plStack_4e8 = plStack_4a8;
    plStack_4e0 = plStack_4a0;
    plStack_4f8 = plStack_4b8;
    plStack_4f0 = plStack_4b0;
    func_0x048b0bc0(&uStack_6f0);
    plStack_538 = plStack_4f8;
    plStack_530 = plStack_4f0;
    plStack_528 = plStack_4e8;
    plStack_520 = plStack_4e0;
    plStack_518 = plStack_4d8;
    uStack_510 = uStack_4d0;
    lStack_508 = lStack_4c8;
    func_0x0e85f070(auStack_708,plStack_4f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7ff1ff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7ff1ff;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85f640(auStack_708,&plStack_538,&UNK_012be13a,0xe);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e85ff30;
    puStack_728 = &UNK_0e860090;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85f8f0(auStack_708);
    lStack_548 = CONCAT71(lStack_548._1_7_,(undefined1)lStack_508);
    plStack_558 = plStack_518;
    uStack_550 = uStack_510;
    plStack_568 = plStack_528;
    plStack_560 = plStack_520;
    plStack_578 = plStack_538;
    plStack_570 = plStack_530;
    func_0x048b0bc0(&uStack_6f0);
    plStack_5b8 = plStack_578;
    plStack_5b0 = plStack_570;
    plStack_5a8 = plStack_568;
    plStack_5a0 = plStack_560;
    plStack_598 = plStack_558;
    uStack_590 = uStack_550;
    lStack_588 = lStack_548;
    func_0x0e85f070(auStack_708,plStack_578 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7ff47f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7ff47f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85f640(auStack_708,&plStack_5b8,&UNK_0119d269,0xd);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e860270;
    puStack_728 = &UNK_0e8603d0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85f8f0(auStack_708);
    uStack_5c8 = CONCAT71(uStack_5c8._1_7_,(undefined1)lStack_588);
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x048b0bc0(&uStack_6f0);
    func_0x0e85f070(auStack_708,plStack_5f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7ff6bf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7ff6bf;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e85f640(auStack_708,&plStack_5f8,&UNK_012d78a5,0xb);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0ef46ce8;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_0490ce30;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &SUB_0490cb20;
    puStack_730 = &UNK_0e8605b0;
    puStack_728 = &UNK_0e860710;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e85f8f0(auStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_011b9065,0x26);
  uStack_608 = 0x720c246000000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cd020;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_011b907d;
  puStack_6f8 = (undefined *)0x29;
  uStack_6f0 = (code *)0x26;
  puVar8[2] = _DAT_011b9075;
  puVar8[3] = uVar3;
  uVar3 = _UNK_011b906d;
  *puVar8 = _DAT_011b9065;
  puVar8[1] = uVar3;
  *(undefined8 *)((long)puVar8 + 0x1e) = 0x6b636f6c6265746f;
  *(undefined1 *)((long)puVar8 + 0x26) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_011b907d;
  uStack_6e0 = 0x29;
  lStack_6d8 = 0x26;
  puVar8[2] = _DAT_011b9075;
  puVar8[3] = uVar3;
  uVar3 = _UNK_011b906d;
  *puVar8 = _DAT_011b9065;
  puVar8[1] = uVar3;
  *(undefined8 *)((long)puVar8 + 0x1e) = 0x6b636f6c6265746f;
  *(undefined1 *)((long)puVar8 + 0x26) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e83ce30;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e83cb30;
  puStack_730 = &UNK_0e83ce50;
  puStack_728 = &UNK_0e83d520;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f7626f0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7626f0), iVar5 != 0)) {
    func_0x0e83e0d0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762670,0xf53dab8);
    FUN_0410844d(&DAT_0f7626f0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762670 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e7ffb30;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762670 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e7ffb30:
    puVar9 = &DAT_0f762670;
    if (iRam000000000f7626d0 != -0x2b3da790) goto LAB_0e7ffb9d;
LAB_0e7ffb5b:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e7ffb9d;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e8608f0(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e7ffb5b;
LAB_0e7ffb9d:
    func_0x0e8608f0(&plStack_630,param_1,&DAT_01222c03,0x1c);
  }
  if (cStack_600 == '\0') {
    lStack_548 = (ulong)uStack_5ff << 8;
    plStack_578 = plStack_630;
    plStack_570 = plStack_628;
    plStack_568 = plStack_620;
    plStack_560 = plStack_618;
    plStack_558 = plStack_610;
    uStack_550 = uStack_608;
    if ((DAT_0f762658 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762658), iVar5 != 0)) {
      func_0x0e83df90();
      FUN_0410844d(&DAT_0f762658);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e861450;
    func_0x05da1460(&plStack_570);
    lVar7 = func_0x0d8b84a0(plStack_578 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e860ee0(auStack_708,plStack_578 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e7ffdd3;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e7ffdd3:
    lStack_588 = lStack_548;
    plStack_598 = plStack_558;
    uStack_590 = uStack_550;
    plStack_5a8 = plStack_568;
    plStack_5a0 = plStack_560;
    plStack_5b8 = plStack_578;
    plStack_5b0 = plStack_570;
    func_0x0e860ee0(auStack_708,plStack_578 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e7ffe8f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e7ffe8f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e861460(auStack_708,&plStack_5b8,&UNK_014958a4,9);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e861a10;
    puStack_728 = &UNK_0e861b70;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e861710(auStack_708);
    uStack_5c8 = CONCAT71(uStack_5c8._1_7_,(undefined1)lStack_588);
    plStack_5d8 = plStack_598;
    uStack_5d0 = uStack_590;
    plStack_5e8 = plStack_5a8;
    plStack_5e0 = plStack_5a0;
    plStack_5f8 = plStack_5b8;
    plStack_5f0 = plStack_5b0;
    func_0x048b0bc0(&uStack_6f0);
    func_0x0e860ee0(auStack_708,plStack_5f8 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e8000ef:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e8000ef;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e861460(auStack_708,&plStack_5f8,&UNK_0147962f,0xc);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e861d50;
    puStack_728 = &UNK_0e861eb0;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e861710(auStack_708);
    func_0x048b0bc0(&uStack_6f0);
  }
  func_0x0e831340(&plStack_630,alStack_3c0,&DAT_01222c03,0x1c);
  uStack_608 = 0x91de5fd900000003;
  func_0x0e75f290(plStack_630 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cd0a8;
  auStack_708._8_8_ = 0;
  auStack_708._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01222c17;
  puStack_6f8 = (undefined *)0x21;
  uStack_6f0 = (code *)0x1c;
  *(ulong *)((long)puVar8 + 0xc) = CONCAT44(_UNK_01222c13,_DAT_01222c0f);
  *(undefined8 *)((long)puVar8 + 0x14) = uVar3;
  uVar3 = CONCAT44(_DAT_01222c0f,_UNK_01222c0b);
  *puVar8 = _DAT_01222c03;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1c) = 0;
  pcStack_6e8 = (code *)puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_01222c17;
  uStack_6e0 = 0x21;
  lStack_6d8 = 0x1c;
  *(ulong *)((long)puVar8 + 0xc) = CONCAT44(_UNK_01222c13,_DAT_01222c0f);
  *(undefined8 *)((long)puVar8 + 0x14) = uVar3;
  uVar3 = CONCAT44(_DAT_01222c0f,_UNK_01222c0b);
  *puVar8 = _DAT_01222c03;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1c) = 0;
  lStack_6a8 = 0;
  lStack_6a0 = 0;
  uStack_6b8 = 0;
  uStack_6b7 = 0;
  uStack_6b6 = 0;
  lStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6c7 = 0;
  uStack_6c0 = 0;
  uStack_6bf = 0;
  uStack_6be = 0;
  uStack_698 = CONCAT44(uStack_698._4_4_,0x3f600000);
  puStack_6d0 = puVar8;
  FUN_048afb10(&uStack_6c8,8);
  uVar3 = _uStack_660;
  lStack_670 = 0;
  lStack_668 = 0;
  uStack_680 = 0;
  lStack_678 = 0;
  lStack_690 = 0;
  lStack_688 = 0;
  _uStack_660 = CONCAT62(stack0xfffffffffffff9a2,0xff00);
  uVar4 = _uStack_660;
  uStack_65b = SUB83(uVar3,5);
  uStack_660._0_4_ = (uint)uVar4;
  uStack_660 = (uint5)(uint)uStack_660;
  uVar14 = (ulong)_uStack_658 >> 0x28;
  uStack_658._0_4_ = (uint)_uStack_658 & 0xffffff00;
  uStack_658 = (uint5)(uint)uStack_658;
  _uStack_658 = CONCAT35((int3)uVar14,uStack_658);
  if ((DAT_0f7616b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7616b8), iVar5 != 0)) {
    func_0x0e75f380(0xf7616a0);
    FUN_0410844d(&DAT_0f7616b8);
  }
  uStack_770 = CONCAT44(uStack_770._4_4_,uStack_608._4_4_);
  plStack_768 = (long *)0x0;
  plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
  pcStack_758 = (code *)0x2;
  uStack_750 = 1;
  puStack_748 = &UNK_0e83e2e0;
  puStack_740 = &UNK_07d98660;
  puStack_738 = &UNK_0e83e010;
  puStack_730 = &UNK_0e83e300;
  puStack_728 = &UNK_0e83eaf0;
  uStack_720 = 0;
  uStack_718 = 0;
  plStack_710 = (long *)0x0;
  func_0x048b05a0(&plStack_628,&uStack_770);
  plVar10 = plStack_710;
  if (plStack_710 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_710 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_710 + 0x10))(plStack_710);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_5e8 = plStack_618;
  plStack_5e0 = plStack_610;
  plStack_5f8 = plStack_628;
  plStack_5f0 = plStack_620;
  func_0x0e8316a0(&uStack_770,&plStack_5f8,auStack_708);
  func_0x048b0bc0(auStack_708);
  func_0x0d8a5280(param_1);
  if ((DAT_0f7627a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f7627a8), iVar5 != 0)) {
    func_0x0e83f920();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f762728,0xf53dab8);
    FUN_0410844d(&DAT_0f7627a8);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f762728 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e800540;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f762728 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e800540:
    puVar9 = &DAT_0f762728;
    if (iRam000000000f762788 != -0x2b3da790) goto LAB_0e8005ad;
LAB_0e80056b:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e8005ad;
    bVar20 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar15 = lVar7 + 9;
    if (bVar20) {
      lVar15 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar20) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e862090(&plStack_630,param_1,lVar15,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e80056b;
LAB_0e8005ad:
    func_0x0e862090(&plStack_630,param_1,&DAT_012f2079,0x25);
  }
  if (cStack_600 == '\0') {
    lStack_448 = (ulong)uStack_5ff << 8;
    plStack_478 = plStack_630;
    plStack_470 = plStack_628;
    plStack_468 = plStack_620;
    plStack_460 = plStack_618;
    plStack_458 = plStack_610;
    uStack_450 = uStack_608;
    if ((DAT_0f762710 == '\0') && (iVar5 = func_0x04108328(&DAT_0f762710), iVar5 != 0)) {
      func_0x0e83f7e0();
      FUN_0410844d(&DAT_0f762710);
    }
    if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
      func_0x0d8b8690(0xf72c358);
      FUN_0410844d(&DAT_0f72c370);
    }
    auStack_708._0_4_ = _DAT_0f72c35c;
    auStack_708._8_8_ = &SUB_0d8b84a0;
    puStack_6f8 = &UNK_0e862c60;
    func_0x05da1460(&plStack_470);
    lVar7 = func_0x0d8b84a0(plStack_478 + 3);
    if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
      func_0x0e862680(auStack_708,plStack_478 + 3);
      if (uStack_6f0._4_4_ == 2) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x16;
          iVar5 = *piVar11;
        }
        lVar7 = *(long *)(piVar11 + 0xc);
        while (lVar7 != auStack_708._8_8_) {
          piVar11 = *(int **)(piVar11 + 0xe);
          lVar7 = *(long *)(piVar11 + 0xc);
        }
      }
      else {
        if (uStack_6f0._4_4_ != 1) {
          if (uStack_6f0._4_4_ == 0) {
            *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
          }
          goto LAB_0e8007e3;
        }
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
      }
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
LAB_0e8007e3:
    lStack_488 = lStack_448;
    plStack_498 = plStack_458;
    uStack_490 = uStack_450;
    plStack_4a8 = plStack_468;
    plStack_4a0 = plStack_460;
    plStack_4b8 = plStack_478;
    plStack_4b0 = plStack_470;
    func_0x0e862680(auStack_708,plStack_478 + 3);
    if (uStack_6f0._4_4_ == 2) {
      piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != (int)uStack_6f0) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_708._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e80089f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (uStack_6f0._4_4_ == 1) {
        piVar11 = *(int **)(*(long *)(puStack_6f8 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != (int)uStack_6f0) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e80089f;
      }
      if (uStack_6f0._4_4_ == 0) {
        *(uint *)(puStack_6f8 + 0x18) = *(uint *)(puStack_6f8 + 0x18) | 0x40000;
      }
    }
    func_0x0e862c70(auStack_708,&plStack_4b8,&UNK_01280d70,9);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar10 = (long)&UNK_0f0126a0;
    if (uStack_6f0 != (code *)0x0) {
      lVar7 = *(long *)uStack_6f0;
      uStack_6f0 = (code *)plVar10;
      (**(code **)(lVar7 + 8))();
      plVar10 = (long *)uStack_6f0;
    }
    uStack_6f0 = (code *)plVar10;
    uStack_770 = CONCAT44(uStack_770._4_4_,puStack_6f8._0_4_);
    plStack_768 = (long *)0x0;
    plStack_760 = (long *)((ulong)plStack_760 & 0xffffffff00000000);
    pcStack_758 = (code *)0x1;
    uStack_750 = 0;
    puStack_748 = &UNK_05daeda0;
    puStack_740 = &SUB_048b06d0;
    puStack_738 = &UNK_05daea90;
    puStack_730 = &UNK_0e863220;
    puStack_728 = &UNK_0e863380;
    uStack_720 = 0;
    uStack_718 = 0;
    plStack_710 = (long *)0x0;
    func_0x048b05a0(auStack_708._8_8_,&uStack_770);
    plVar10 = plStack_710;
    if (plStack_710 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_710 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_710 + 0x10))(plStack_710);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e862f20(auStack_708);
    lStack_4c8 = CONCAT71(lStack_4c8._1_7_,(undefined1)lStack_488);
    plStack_4d8 = plStack_498;
    uStack_4d0 = uStack_490;
    plStack_4e8
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x11ab9ea  minecraft:experience_reward
 * 0x11ab9f5  xperience_reward
 * 0x11b9047  minecraft:behavior.sonic_boom
 * 0x11b9054  avior.sonic_boom
 * 0x11b9065  minecraft:behavior.stay_near_noteblock
 * 0x11b9075  or.stay_near_noteblock
 * 0x1222c03  minecraft:behavior.swim_idle
 * 0x1222c0f  havior.swim_idle
 * 0x12725a1  minecraft:behavior.roar
 * 0x12f2089  or.swim_up_for_breath
 * 0x1325d0f  minecraft:behavior.slime_random_direction
 * 0x1325d1f  or.slime_random_direction
 * 0x1325d28  random_direction
 * 0x1376ca1  minecraft:behavior.sniff
 * 0x13acaef  minecraft:behavior.slime_keep_on_jumping
 * 0x13acaff  or.slime_keep_on_jumping
 * 0x13c5615  minecraft:behavior.slime_attack
 * 0x13c5624  ior.slime_attack
 * 0x13dfd08  minecraft:behavior.slime_float
 * 0x13dfd16  vior.slime_float
 * 0x1459095  [__dev_aid:actor_def_version]
 * 0x14590a2  tor_def_version]
 * 0x145f6ec  speed_multiplier
 * 0x14e80e0  tor_def_version]
 */
