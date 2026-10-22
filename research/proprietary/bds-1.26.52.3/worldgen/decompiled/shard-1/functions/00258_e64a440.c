/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe74a440 (ELF vaddr 0xe64a440)
 * Label: caller-of-callee
 * Body:  [[0e74a440, 0e74a515] [0e74a520, 0e74a562] [0e74a570, 0e74c0c1] [0e74c0d0, 0e74ede1]]
 * Ghidra: FUN_0e74a440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e74a440(long param_1)

{
  uint *puVar1;
  byte bVar2;
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
  byte *pbVar15;
  code *pcVar16;
  long lVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_710;
  long *plStack_708;
  long *plStack_700;
  code *pcStack_6f8;
  undefined8 uStack_6f0;
  undefined *puStack_6e8;
  undefined1 *puStack_6e0;
  undefined1 *puStack_6d8;
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined4 uStack_6c0;
  undefined8 uStack_6b8;
  long *plStack_6b0;
  undefined1 auStack_6a8 [16];
  undefined4 uStack_698;
  undefined4 uStack_694;
  int iStack_690;
  int iStack_68c;
  undefined1 uStack_688;
  undefined2 uStack_687;
  undefined1 uStack_685;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 uStack_678;
  undefined7 uStack_677;
  undefined1 uStack_670;
  undefined2 uStack_66f;
  undefined1 uStack_66d;
  undefined4 uStack_66c;
  undefined1 uStack_668;
  undefined7 uStack_667;
  undefined1 uStack_660;
  undefined7 uStack_65f;
  ulong uStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  undefined8 uStack_638;
  long lStack_630;
  long lStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  uint5 uStack_600;
  undefined3 uStack_5fb;
  uint5 uStack_5f8;
  long lStack_5f0;
  undefined2 uStack_5e8;
  undefined2 uStack_5e6;
  uint uStack_5e4;
  uint uStack_5e0;
  undefined1 uStack_5dc;
  long *plStack_5d0;
  long *plStack_5c8;
  long *plStack_5c0;
  long *plStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  char cStack_5a0;
  uint7 uStack_59f;
  long *plStack_598;
  long *plStack_590;
  long *plStack_588;
  long *plStack_580;
  undefined1 uStack_578;
  undefined7 uStack_577;
  undefined1 uStack_570;
  undefined7 uStack_56f;
  char cStack_568;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  long *plStack_540;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  char cStack_528;
  long *plStack_518;
  long *plStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  long *plStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  undefined8 uStack_4b0;
  char cStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  int iStack_478;
  undefined4 uStack_474;
  char cStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined1 uStack_450;
  undefined7 uStack_44f;
  undefined1 uStack_448;
  undefined7 uStack_447;
  char cStack_440;
  undefined7 uStack_43f;
  undefined1 uStack_438;
  undefined7 uStack_437;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  long *plStack_410;
  long *plStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_328;
  long *plStack_320;
  long *plStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  
  func_0x0e72b120();
  lVar7 = func_0x0e26f370(param_1 + 0x18);
  if ((*(int *)(lVar7 + 0x60) == -0x2b3da790) && (lVar7 = *(long *)(lVar7 + 0x68), lVar7 != 0)) {
    bVar18 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar17 = lVar7 + 9;
    if (bVar18) {
      lVar17 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e7d3c70(&lStack_4a0,param_1,lVar17,uVar14);
  }
  else {
    func_0x0e7d3c70(&lStack_4a0,param_1,&UNK_01425a49,0x1c);
  }
  if (cStack_470 != '\0') {
    return;
  }
  lVar17 = lStack_4a0 + 0x18;
  lVar7 = func_0x0e26f370(lVar17);
  for (pbVar12 = *(byte **)(lStack_4a0 + 0x50); pbVar12 != *(byte **)(lStack_4a0 + 0x58);
      pbVar12 = pbVar12 + 0x38) {
    bVar2 = *pbVar12;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1d) goto LAB_0e74a57a;
    }
    else if (*(long *)(pbVar12 + 8) == 0x1d) {
LAB_0e74a57a:
      if ((bVar2 & 1) == 0) {
        pbVar15 = pbVar12 + 1;
      }
      else {
        pbVar15 = *(byte **)(pbVar12 + 0x10);
      }
      auVar19[0] = -(*pbVar15 == DAT_014e1c20);
      auVar19[1] = -(pbVar15[1] == DAT_014e1c20._1_1_);
      auVar19[2] = -(pbVar15[2] == DAT_014e1c20._2_1_);
      auVar19[3] = -(pbVar15[3] == DAT_014e1c20._3_1_);
      auVar19[4] = -(pbVar15[4] == DAT_014e1c20._4_1_);
      auVar19[5] = -(pbVar15[5] == DAT_014e1c20._5_1_);
      auVar19[6] = -(pbVar15[6] == DAT_014e1c20._6_1_);
      auVar19[7] = -(pbVar15[7] == DAT_014e1c20._7_1_);
      auVar19[8] = -(pbVar15[8] == DAT_014e1c20._8_1_);
      auVar19[9] = -(pbVar15[9] == DAT_014e1c20._9_1_);
      auVar19[10] = -(pbVar15[10] == DAT_014e1c20._10_1_);
      auVar19[0xb] = -(pbVar15[0xb] == DAT_014e1c20._11_1_);
      auVar19[0xc] = -(pbVar15[0xc] == DAT_014e1c20._12_1_);
      auVar19[0xd] = -(pbVar15[0xd] == DAT_014e1c20._13_1_);
      auVar19[0xe] = -(pbVar15[0xe] == DAT_014e1c20._14_1_);
      auVar19[0xf] = -(pbVar15[0xf] == DAT_014e1c20._15_1_);
      auVar20[0] = -(pbVar15[0xd] == DAT_014e80e0);
      auVar20[1] = -(pbVar15[0xe] == DAT_014e80e0._1_1_);
      auVar20[2] = -(pbVar15[0xf] == DAT_014e80e0._2_1_);
      auVar20[3] = -(pbVar15[0x10] == DAT_014e80e0._3_1_);
      auVar20[4] = -(pbVar15[0x11] == DAT_014e80e0._4_1_);
      auVar20[5] = -(pbVar15[0x12] == DAT_014e80e0._5_1_);
      auVar20[6] = -(pbVar15[0x13] == DAT_014e80e0._6_1_);
      auVar20[7] = -(pbVar15[0x14] == DAT_014e80e0._7_1_);
      auVar20[8] = -(pbVar15[0x15] == DAT_014e80e0._8_1_);
      auVar20[9] = -(pbVar15[0x16] == DAT_014e80e0._9_1_);
      auVar20[10] = -(pbVar15[0x17] == DAT_014e80e0._10_1_);
      auVar20[0xb] = -(pbVar15[0x18] == DAT_014e80e0._11_1_);
      auVar20[0xc] = -(pbVar15[0x19] == DAT_014e80e0._12_1_);
      auVar20[0xd] = -(pbVar15[0x1a] == DAT_014e80e0._13_1_);
      auVar20[0xe] = -(pbVar15[0x1b] == DAT_014e80e0._14_1_);
      auVar20[0xf] = -(pbVar15[0x1c] == DAT_014e80e0._15_1_);
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
  if (pbVar12 == *(byte **)(lStack_4a0 + 0x58)) {
LAB_0e74a5a9:
    if (iStack_478 == 0) {
      if ((*(int *)(lVar7 + 0x60) != -0x2b3da790) || (*(long *)(lVar7 + 0x68) == 0))
      goto LAB_0e74a626;
      lVar7 = *(long *)(lVar7 + 0x68) + 0x38;
    }
    else {
      lVar7 = func_0x048b0c90(lVar17,lVar7,uStack_474,1);
      if (lVar7 == 0) {
        auStack_6a8 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_6a8);
        lVar7 = auStack_6a8._0_8_;
        if (auStack_6a8._0_8_ == 0) goto LAB_0e74a626;
      }
      if ((*(int *)(lVar7 + 0x50) == -0x45dcb126) && (*(long *)(lVar7 + 0x58) != 0)) {
        lVar7 = *(long *)(lVar7 + 0x58) + 0x40;
      }
      else {
LAB_0e74a626:
        lVar7 = 0;
      }
    }
    uStack_710 = 0;
    plStack_700 = (long *)&UNK_05ead3e0;
    pcVar16 = (code *)&UNK_05ead970;
    pcStack_6f8 = (code *)&UNK_05ead970;
    uStack_6f0 = CONCAT35(uStack_6f0._5_3_,0x17fe5f144);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x18,0);
    }
    *puVar8 = 0x1008200150001;
    puVar8[1] = &UNK_01254d89;
    puVar8[2] = &UNK_01254d89;
    iStack_690 = 0x5ead3e0;
    iStack_68c = 0;
    uStack_688 = 0x70;
    uStack_687 = 0xead9;
    uStack_685 = 5;
    uStack_684 = 0;
    uStack_680 = 0x7fe5f144;
    uStack_67c = CONCAT31(uStack_67c._1_3_,1);
    uStack_710 = 0;
    auStack_6a8._8_8_ = puVar8;
    auStack_6a8._0_8_ = &UNK_0daac7f0;
    plStack_5c0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_5c0 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_014590aa;
    plStack_5d0 = (long *)0x21;
    plStack_5c8 = (long *)0x1d;
    *(ulong *)((long)plStack_5c0 + 0xd) = CONCAT53(_UNK_014590a5,_DAT_014590a2);
    *(undefined8 *)((long)plStack_5c0 + 0x15) = uVar3;
    lVar17 = CONCAT35(_DAT_014590a2,_UNK_0145909d);
    *plStack_5c0 = _DAT_01459095;
    plStack_5c0[1] = lVar17;
    *(undefined1 *)((long)plStack_5c0 + 0x1d) = 0;
    lVar7 = func_0x048b5060(lVar7,&plStack_5d0);
    *(undefined **)(lVar7 + 0x20) = &UNK_0daac7f0;
    if ((undefined1 *)(lVar7 + 0x20) != auStack_6a8) {
      puVar8 = (undefined8 *)(lVar7 + 0x28);
      if (*(code **)(lVar7 + 0x40) == (code *)0x0) {
LAB_0e74a7b3:
        uVar3 = auStack_6a8._8_8_;
        auStack_6a8._8_8_ = 0;
        *puVar8 = uVar3;
      }
      else {
        (**(code **)(lVar7 + 0x40))(puVar8);
        if ((char)uStack_67c != '\0') {
          if ((char)uStack_67c != '\x02') goto LAB_0e74a7b3;
          (*(code *)CONCAT44(iStack_68c,iStack_690))(5,auStack_6a8 + 8,puVar8);
        }
      }
      pcVar16 = (code *)CONCAT44(uStack_684,CONCAT13(uStack_685,CONCAT21(uStack_687,uStack_688)));
      *(ulong *)(lVar7 + 0x38) = CONCAT44(iStack_68c,iStack_690);
      *(ulong *)(lVar7 + 0x40) =
           CONCAT44(uStack_684,CONCAT13(uStack_685,CONCAT21(uStack_687,uStack_688)));
      *(undefined4 *)(lVar7 + 0x48) = uStack_680;
      *(char *)(lVar7 + 0x4c) = (char)uStack_67c;
    }
    if (((ulong)plStack_5d0 & 1) != 0) {
      func_0x0412a280(plStack_5c0,(ulong)plStack_5d0 & 0xfffffffffffffffe);
      pcVar16 = (code *)CONCAT44(uStack_684,CONCAT13(uStack_685,CONCAT21(uStack_687,uStack_688)));
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(auStack_6a8 + 8);
    }
    if (pcStack_6f8 != (code *)0x0) {
      (*pcStack_6f8)(&uStack_710);
    }
  }
  else {
    iVar5 = *(int *)(pbVar12 + 0x1c);
    if ((DAT_0f561458 == '\0') && (iVar6 = func_0x04108328(&DAT_0f561458), iVar6 != 0)) {
      func_0x05eada10(0xf561440);
      func_0x0410844d(&DAT_0f561458);
    }
    if (iVar5 == _DAT_0f561444) goto LAB_0e74a5a9;
  }
  uStack_688 = (undefined1)uStack_480;
  uStack_687 = (undefined2)((ulong)uStack_480 >> 8);
  uStack_685 = (undefined1)((ulong)uStack_480 >> 0x18);
  uStack_684 = (undefined4)((ulong)uStack_480 >> 0x20);
  uStack_698 = (undefined4)uStack_490;
  uStack_694 = (undefined4)((ulong)uStack_490 >> 0x20);
  iStack_690 = (int)uStack_488;
  iStack_68c = (int)((ulong)uStack_488 >> 0x20);
  auStack_6a8._8_8_ = uStack_498;
  auStack_6a8._0_8_ = lStack_4a0;
  if ((DAT_0f74afc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74afc8), iVar5 != 0)) {
    func_0x0e26f460(0xf74afb0);
    func_0x0410844d(&DAT_0f74afc8);
  }
  if ((DAT_0f75f318 == '\0') && (iVar5 = func_0x04108328(&DAT_0f75f318), iVar5 != 0)) {
    func_0x0e75e1c0(auStack_6a8 + 8);
    func_0x0410844d(&DAT_0f75f318);
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,_DAT_0f75f304);
  plStack_708 = (long *)&UNK_0e75dff0;
  plStack_700 = (long *)&UNK_0e7d4560;
  func_0x05da1460(auStack_6a8 + 8);
  if ((DAT_0f761410 == '\0') && (iVar5 = func_0x04108328(&DAT_0f761410), iVar5 != 0)) {
    func_0x0e7e3bd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f761390,0xf53dab8);
    func_0x0410844d(&DAT_0f761410);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f761390 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e74a940;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f761390 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e74a940:
    puVar9 = &DAT_0f761390;
    if (iRam000000000f7613f0 != -0x2b3da790) goto LAB_0e74a9ad;
LAB_0e74a96b:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e74a9ad;
    bVar18 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar17 = lVar7 + 9;
    if (bVar18) {
      lVar17 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e7e4290(&plStack_5d0,param_1,lVar17,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e74a96b;
LAB_0e74a9ad:
    func_0x0e7e4290(&plStack_5d0,param_1,&UNK_011cf52b,10);
  }
  if (cStack_5a0 == '\0') {
    uStack_538 = SUB81(plStack_5b0,0);
    uStack_537 = (undefined7)((ulong)plStack_5b0 >> 8);
    uStack_530 = (undefined1)uStack_5a8;
    uStack_52f = (undefined7)((ulong)uStack_5a8 >> 8);
    plStack_558 = plStack_5d0;
    plStack_550 = plStack_5c8;
    plStack_548 = plStack_5c0;
    plStack_540 = plStack_5b8;
    cStack_528 = cStack_5a0;
    func_0x0e7e4e30(auStack_6a8,&plStack_558,&UNK_013264d5,1);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0ef44b00;
    plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
    iStack_690 = (int)puVar8;
    iStack_68c = (int)((ulong)puVar8 >> 0x20);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
    pcStack_6f8 = (code *)0x1;
    uStack_6f0 = 0;
    puStack_6e8 = &UNK_048b3f30;
    puStack_6e0 = &SUB_048b06d0;
    puStack_6d8 = &SUB_048b2190;
    puStack_6d0 = &UNK_0e7e53e0;
    puStack_6c8 = &UNK_0e7e55a0;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    plStack_6b0 = (long *)0x0;
    func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
    plVar10 = plStack_6b0;
    if (plStack_6b0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_6b0 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e7e50e0(auStack_6a8);
    cStack_568 = cStack_528;
    uStack_578 = uStack_538;
    uStack_577 = uStack_537;
    uStack_570 = uStack_530;
    uStack_56f = uStack_52f;
    plStack_588 = plStack_548;
    plStack_580 = plStack_540;
    plStack_598 = plStack_558;
    plStack_590 = plStack_550;
    func_0x048b0bc0(&iStack_690);
    func_0x0e7e4880(auStack_6a8,plStack_598 + 3);
    if (iStack_68c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_6a8._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e74ac0f:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_68c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != iStack_690) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e74ac0f;
      }
      if (iStack_68c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e7e4e30(auStack_6a8,&plStack_598,&UNK_012d826d,0x10);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0ef44b00;
    plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
    iStack_690 = (int)puVar8;
    iStack_68c = (int)((ulong)puVar8 >> 0x20);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
    pcStack_6f8 = (code *)0x1;
    uStack_6f0 = 0;
    puStack_6e8 = &UNK_048b3f30;
    puStack_6e0 = &SUB_048b06d0;
    puStack_6d8 = &SUB_048b2190;
    puStack_6d0 = &UNK_0e7e5770;
    puStack_6c8 = &UNK_0e7e5940;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    plStack_6b0 = (long *)0x0;
    func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
    plVar10 = plStack_6b0;
    if (plStack_6b0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_6b0 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e7e50e0(auStack_6a8);
    func_0x048b0bc0(&iStack_690);
  }
  if ((DAT_0f760f90 == '\0') && (iVar5 = func_0x04108328(&DAT_0f760f90), iVar5 != 0)) {
    func_0x0e7d5cf0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f760f10,0xf53dab8);
    func_0x0410844d(&DAT_0f760f90);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f760f10 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e74ad90;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f760f10 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e74ad90:
    puVar9 = &DAT_0f760f10;
    if (iRam000000000f760f70 != -0x2b3da790) goto LAB_0e74adfd;
LAB_0e74adbb:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e74adfd;
    bVar18 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar17 = lVar7 + 9;
    if (bVar18) {
      lVar17 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e7e5b20(&plStack_5d0,param_1,lVar17,uVar14);
    uVar4 = uStack_5a8;
    uVar3 = uStack_4f0;
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e74adbb;
LAB_0e74adfd:
    func_0x0e7e5b20(&plStack_5d0,param_1,&DAT_011c01e7,0x12);
    uVar4 = uStack_5a8;
    uVar3 = uStack_4f0;
  }
  uStack_4f0 = uVar4;
  if (cStack_5a0 == '\0') {
    lStack_4e8 = (ulong)uStack_59f << 8;
    plStack_518 = plStack_5d0;
    plStack_510 = plStack_5c8;
    plStack_508 = plStack_5c0;
    plStack_500 = plStack_5b8;
    plStack_4f8 = plStack_5b0;
    func_0x0e7e6110(auStack_6a8,plStack_5d0 + 3);
    if (iStack_68c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_6a8._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e74aedf:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_68c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != iStack_690) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e74aedf;
      }
      if (iStack_68c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e7e66d0(auStack_6a8,&plStack_518,&UNK_013e9428,6);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f4cbe00;
    plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
    iStack_690 = (int)puVar8;
    iStack_68c = (int)((ulong)puVar8 >> 0x20);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
    pcStack_6f8 = (code *)0x1;
    uStack_6f0 = 0;
    puStack_6e8 = &UNK_0e7ea5c0;
    puStack_6e0 = &SUB_048b06d0;
    puStack_6d8 = &UNK_0e7e8e90;
    puStack_6d0 = &UNK_0e7ea680;
    puStack_6c8 = &UNK_0e7ea950;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    plStack_6b0 = (long *)0x0;
    func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
    plVar10 = plStack_6b0;
    if (plStack_6b0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_6b0 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e7e6980(auStack_6a8);
    cStack_4a8 = (char)lStack_4e8;
    plStack_4b8 = plStack_4f8;
    uStack_4b0 = uStack_4f0;
    plStack_4c8 = plStack_508;
    plStack_4c0 = plStack_500;
    plStack_4d8 = plStack_518;
    plStack_4d0 = plStack_510;
    func_0x048b0bc0(&iStack_690);
    plStack_558 = plStack_4d8;
    plStack_550 = plStack_4d0;
    plStack_548 = plStack_4c8;
    plStack_540 = plStack_4c0;
    uStack_538 = SUB81(plStack_4b8,0);
    uStack_537 = (undefined7)((ulong)plStack_4b8 >> 8);
    uStack_530 = (undefined1)uStack_4b0;
    uStack_52f = (undefined7)((ulong)uStack_4b0 >> 8);
    cStack_528 = cStack_4a8;
    func_0x0e7e6110(auStack_6a8,plStack_4d8 + 3);
    if (iStack_68c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_6a8._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e74b1df:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_68c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != iStack_690) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e74b1df;
      }
      if (iStack_68c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e7e66d0(auStack_6a8,&plStack_558,&UNK_013264d5,0xb);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0ef44b00;
    plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
    iStack_690 = (int)puVar8;
    iStack_68c = (int)((ulong)puVar8 >> 0x20);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
    pcStack_6f8 = (code *)0x1;
    uStack_6f0 = 0;
    puStack_6e8 = &UNK_048b3f30;
    puStack_6e0 = &SUB_048b06d0;
    puStack_6d8 = &SUB_048b2190;
    puStack_6d0 = &UNK_0e7eadc0;
    puStack_6c8 = &UNK_0e7eaf90;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    plStack_6b0 = (long *)0x0;
    func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
    plVar10 = plStack_6b0;
    if (plStack_6b0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_6b0 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e7e6980(auStack_6a8);
    plVar10 = plStack_558;
    plStack_468 = plStack_550;
    plStack_460 = plStack_548;
    plStack_458 = plStack_540;
    uStack_450 = uStack_538;
    uStack_44f = uStack_537;
    uStack_448 = uStack_530;
    uStack_447 = uStack_52f;
    cStack_440 = cStack_528;
    func_0x048b0bc0(&iStack_690);
    if ((DAT_0f760f90 == '\0') && (iVar5 = func_0x04108328(&DAT_0f760f90), iVar5 != 0)) {
      func_0x0e7d5cf0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f760f10,0xf53dab8);
      func_0x0410844d(&DAT_0f760f90);
    }
    plVar13 = (long *)(plVar10[3] +
                      (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f760f10 + 4)) * 8);
    do {
      lVar7 = *plVar13;
      if (lVar7 == -1) goto LAB_0e74b3b0;
      plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
    } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f760f10 + 4));
    if (plVar13 == (long *)plVar10[7]) {
LAB_0e74b3b0:
      auStack_6a8._0_8_ = &DAT_0f760f10;
    }
    else {
      auStack_6a8._0_8_ = plVar13[2];
    }
    auStack_6a8._8_8_ = plVar10 + 3;
    func_0x0ed624b0(auStack_6a8,&UNK_013264d5,0xb);
    plStack_598 = plVar10;
    plStack_590 = plStack_468;
    plStack_588 = plStack_460;
    plStack_580 = plStack_458;
    uStack_578 = uStack_450;
    uStack_577 = uStack_44f;
    uStack_570 = uStack_448;
    uStack_56f = uStack_447;
    cStack_568 = cStack_440;
    func_0x0e7e6110(auStack_6a8,plVar10 + 3);
    if (iStack_68c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      plVar10 = *(long **)(piVar11 + 0xc);
      while (plVar10 != (long *)auStack_6a8._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        plVar10 = *(long **)(piVar11 + 0xc);
      }
LAB_0e74b4ff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_68c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != iStack_690) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e74b4ff;
      }
      if (iStack_68c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e7e66d0(auStack_6a8,&plStack_598,&UNK_012d826d,0xb);
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0ef44b00;
    plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
    iStack_690 = (int)puVar8;
    iStack_68c = (int)((ulong)puVar8 >> 0x20);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
    pcStack_6f8 = (code *)0x1;
    uStack_6f0 = 0;
    puStack_6e8 = &UNK_048b3f30;
    puStack_6e0 = &SUB_048b06d0;
    puStack_6d8 = &SUB_048b2190;
    puStack_6d0 = &UNK_0e7eb170;
    puStack_6c8 = &UNK_0e7eb340;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    plStack_6b0 = (long *)0x0;
    func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
    plVar10 = plStack_6b0;
    if (plStack_6b0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_6b0 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
        func_0x0412c2d0(plVar10);
      }
    }
    func_0x0e7e6980(auStack_6a8);
    plVar10 = plStack_598;
    func_0x048b0bc0(&iStack_690);
    if ((DAT_0f760f90 == '\0') && (iVar5 = func_0x04108328(&DAT_0f760f90), iVar5 != 0)) {
      func_0x0e7d5cf0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f760f10,0xf53dab8);
      func_0x0410844d(&DAT_0f760f90);
    }
    plVar13 = (long *)(plVar10[3] +
                      (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f760f10 + 4)) * 8);
    do {
      lVar7 = *plVar13;
      if (lVar7 == -1) goto LAB_0e74b690;
      plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
    } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f760f10 + 4));
    if (plVar13 == (long *)plVar10[7]) {
LAB_0e74b690:
      auStack_6a8._0_8_ = &DAT_0f760f10;
    }
    else {
      auStack_6a8._0_8_ = plVar13[2];
    }
    auStack_6a8._8_8_ = plVar10 + 3;
    func_0x0ed624b0(auStack_6a8,&UNK_012d826d,0xb);
    uVar3 = uStack_4f0;
  }
  uStack_4f0 = uVar3;
  func_0x0e7d4570(&plStack_5d0,&lStack_4a0,&DAT_011c01e7,0x12);
  uStack_5a8 = 0x589b535700000003;
  func_0x0e26f370(plStack_5d0 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cb8f0;
  auStack_6a8._8_8_ = 0;
  auStack_6a8._0_8_ = puVar8;
  uStack_698._1_3_ = (undefined3)_DAT_011c01e7;
  uStack_698 = CONCAT31(uStack_698._1_3_,0x24);
  uStack_694 = (undefined4)((ulong)_DAT_011c01e7 >> 0x18);
  iStack_690._0_1_ = (undefined1)((ulong)_DAT_011c01e7 >> 0x38);
  iStack_690._1_3_ = (undefined3)_UNK_011c01ef;
  iStack_68c = (int)((ulong)_UNK_011c01ef >> 0x18);
  uStack_688 = (undefined1)((ulong)_UNK_011c01ef >> 0x38);
  uStack_687 = 0x7265;
  uStack_685 = 0;
  uStack_680 = CONCAT31(uStack_698._1_3_,0x24);
  uStack_677 = (undefined7)_UNK_011c01ef;
  uStack_66f = 0x7265;
  uStack_66d = 0;
  uStack_668 = 0;
  uStack_667 = 0;
  uStack_660 = 0;
  uStack_65f = 0;
  uStack_658 = 0;
  lStack_650 = 0;
  lStack_648 = 0;
  lStack_640 = 0;
  uStack_638 = CONCAT44(uStack_638._4_4_,0x3f600000);
  uStack_67c = uStack_694;
  uStack_678 = (undefined1)iStack_690;
  uStack_670 = uStack_688;
  func_0x048afb10(&uStack_668,8);
  uVar3 = _uStack_600;
  lStack_610 = 0;
  lStack_608 = 0;
  uStack_620 = 0;
  lStack_618 = 0;
  lStack_630 = 0;
  lStack_628 = 0;
  _uStack_600 = CONCAT62(stack0xfffffffffffffa02,0xff00);
  uVar4 = _uStack_600;
  uStack_5fb = SUB83(uVar3,5);
  uStack_600._0_4_ = (uint)uVar4;
  uStack_600 = (uint5)(uint)uStack_600;
  uVar14 = (ulong)_uStack_5f8 >> 0x28;
  uStack_5f8._0_4_ = (uint)_uStack_5f8 & 0xffffff00;
  uStack_5f8 = (uint5)(uint)uStack_5f8;
  _uStack_5f8 = CONCAT35((int3)uVar14,uStack_5f8);
  if ((DAT_0f74afc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74afc8), iVar5 != 0)) {
    func_0x0e26f460(0xf74afb0);
    func_0x0410844d(&DAT_0f74afc8);
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_5a8._4_4_);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x2;
  uStack_6f0 = 1;
  puStack_6e8 = &UNK_0e7d5f30;
  puStack_6e0 = &UNK_07d98660;
  puStack_6d8 = &UNK_0e7d5c30;
  puStack_6d0 = &UNK_0e7d5f50;
  puStack_6c8 = &UNK_0e7d6620;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(&plStack_5c8,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_588 = plStack_5b8;
  plStack_580 = plStack_5b0;
  plStack_598 = plStack_5c8;
  plStack_590 = plStack_5c0;
  func_0x0e7d48f0(&uStack_710,&plStack_598,auStack_6a8);
  func_0x048b0bc0(auStack_6a8);
  func_0x0eb69b50(param_1);
  if ((DAT_0f761048 == '\0') && (iVar5 = func_0x04108328(&DAT_0f761048), iVar5 != 0)) {
    func_0x0e7d71e0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f760fc8,0xf53dab8);
    func_0x0410844d(&DAT_0f761048);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f760fc8 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e74b990;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f760fc8 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e74b990:
    puVar9 = &DAT_0f760fc8;
    if (iRam000000000f761028 != -0x2b3da790) goto LAB_0e74b9fd;
LAB_0e74b9bb:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e74b9fd;
    bVar18 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar17 = lVar7 + 9;
    if (bVar18) {
      lVar17 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e7eb520(&plStack_5d0,param_1,lVar17,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e74b9bb;
LAB_0e74b9fd:
    func_0x0e7eb520(&plStack_5d0,param_1,&DAT_012fe1ca,0x1b);
  }
  if (cStack_5a0 == '\0') {
    func_0x0e7ebb10(auStack_6a8,plStack_5d0 + 3);
    if (iStack_68c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_6a8._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
LAB_0e74baff:
      *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
    }
    else {
      if (iStack_68c == 1) {
        piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != iStack_690) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e74baff;
      }
      if (iStack_68c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    if ((DAT_0f760fb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f760fb0), iVar5 != 0)) {
      func_0x0e7d70a0();
      func_0x0410844d(&DAT_0f760fb0);
    }
    plVar10 = plStack_5d0;
    uStack_5a8 = 0xcf2f2a3300000001;
    if ((DAT_0f761048 == '\0') && (iVar5 = func_0x04108328(&DAT_0f761048), iVar5 != 0)) {
      func_0x0e7d71e0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f760fc8,0xf53dab8);
      func_0x0410844d(&DAT_0f761048);
    }
    plVar13 = (long *)(plVar10[3] +
                      (ulong)((int)((ulong)(plVar10[4] - plVar10[3]) >> 3) - 1U &
                             *(uint *)(_DAT_0f760fc8 + 4)) * 8);
    do {
      lVar7 = *plVar13;
      if (lVar7 == -1) goto LAB_0e74bb91;
      plVar13 = (long *)(plVar10[6] + lVar7 * 0x18);
    } while (*(uint *)(plVar10[6] + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f760fc8 + 4));
    if (plVar13 == (long *)plVar10[7]) {
LAB_0e74bb91:
      auStack_6a8._0_8_ = &DAT_0f760fc8;
    }
    else {
      auStack_6a8._0_8_ = plVar13[2];
    }
    auStack_6a8._8_8_ = plVar10 + 3;
    func_0x0ed621a0(auStack_6a8,uStack_5a8._4_4_);
    auStack_6a8._0_2_ = 0x10;
    auStack_6a8._8_8_ = &plStack_5c8;
    uStack_698 = uStack_5a8._4_4_;
    iStack_690 = 0;
    iStack_68c = 0;
    uStack_688 = 0;
    uStack_687 = 0;
    uStack_685 = 0;
    uStack_684 = 0;
    uStack_680 = 0;
    uStack_67c = 0;
    uStack_678 = 0;
    uStack_677 = 0;
    uStack_670 = 0;
    uStack_66f = 0;
    uStack_66d = 0;
    uStack_66c = 0;
    uStack_668 = 0x1e;
    uStack_667 = 0x746365746f7270;
    uStack_660 = 0x69;
    uStack_65f = 0x746f6c735f6e6f;
    uStack_658 = uStack_658 & 0xffffffffffffff00;
    lStack_650 = 0;
    lStack_648 = 0;
    lStack_640 = 0;
    uStack_638 = 0;
    lStack_630 = 0;
    lStack_628 = 0;
    uStack_620 = CONCAT44(uStack_620._4_4_,0x3f600000);
    func_0x048afb10(&lStack_650,8);
    _uStack_5f8 = 0;
    lStack_5f0 = 0;
    lStack_608 = 0;
    _uStack_600 = 0;
    lStack_618 = 0;
    lStack_610 = 0;
    uStack_5e8 = 0xff00;
    uStack_5e4 = uStack_5e4 & 0xffffff00;
    uStack_5e0 = uStack_5e0 & 0xffffff00;
    uStack_5dc = 0;
    puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar8 = &UNK_0f34f1f0;
    plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
    iStack_690 = (int)puVar8;
    iStack_68c = (int)((ulong)puVar8 >> 0x20);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
    plStack_708 = (long *)0x0;
    plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
    pcStack_6f8 = (code *)0x1;
    uStack_6f0 = 0;
    puStack_6e8 = &UNK_0c0a6cf0;
    puStack_6e0 = &SUB_048b06d0;
    puStack_6d8 = &SUB_08f2fd70;
    puStack_6d0 = &UNK_0e7ec070;
    puStack_6c8 = &UNK_0e7ec1d0;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    plStack_6b0 = (long *)0x0;
    func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
    plVar10 = plStack_6b0;
    if (plStack_6b0 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_6b0 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
        func_0x0412c2d0(plVar10);
      }
    }
    uVar3 = auStack_6a8._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550a20), iVar5 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    uStack_710 = CONCAT44(uStack_710._4_4_,_DAT_0f550a0c);
    plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar10 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&UNK_0ef439d0;
    plStack_708 = plVar10 + 3;
    lVar7 = CONCAT44(iStack_68c,iStack_690);
    lVar17 = CONCAT44(uStack_684,CONCAT13(uStack_685,CONCAT21(uStack_687,uStack_688)));
    iStack_690 = 0;
    iStack_68c = 0;
    uStack_688 = 0;
    uStack_687 = 0;
    uStack_685 = 0;
    uStack_684 = 0;
    plVar10[3] = lVar7;
    plVar10[4] = lVar17;
    plVar10[7] = CONCAT44(uStack_66c,CONCAT13(uStack_66d,CONCAT21(uStack_66f,uStack_670)));
    plVar10[5] = CONCAT44(uStack_67c,uStack_680);
    plVar10[6] = CONCAT71(uStack_677,uStack_678);
    uStack_680 = 0;
    uStack_67c = 0;
    uStack_678 = 0;
    uStack_677 = 0;
    uStack_670 = 0;
    uStack_66f = 0;
    uStack_66d = 0;
    uStack_66c = 0;
    plVar10[10] = uStack_658;
    plVar10[8] = CONCAT71(uStack_667,uStack_668);
    plVar10[9] = CONCAT71(uStack_65f,uStack_660);
    uStack_668 = 0;
    uStack_667 = 0;
    uStack_660 = 0;
    uStack_65f = 0;
    uStack_658 = 0;
    plVar10[0xb] = lStack_650;
    plVar10[0xc] = lStack_648;
    plVar10[0xd] = lStack_640;
    lStack_650 = 0;
    lStack_648 = 0;
    lStack_640 = 0;
    plVar10[0xe] = uStack_638;
    plVar10[0xf] = lStack_630;
    plVar10[0x10] = lStack_628;
    uStack_638 = 0;
    lStack_630 = 0;
    lStack_628 = 0;
    *(undefined4 *)(plVar10 + 0x11) = (undefined4)uStack_620;
    plVar10[0x12] = lStack_618;
    plVar10[0x13] = lStack_610;
    plVar10[0x14] = lStack_608;
    lStack_618 = 0;
    lStack_610 = 0;
    lStack_608 = 0;
    plVar10[0x17] = lStack_5f0;
    plVar10[0x15] = _uStack_600;
    plVar10[0x16] = _uStack_5f8;
    _uStack_600 = 0;
    _uStack_5f8 = 0;
    lStack_5f0 = 0;
    *(ulong *)((long)plVar10 + 0xc5) = CONCAT17(uStack_5dc,CONCAT43(uStack_5e0,uStack_5e4._1_3_));
    plVar10[0x18] = CONCAT44(uStack_5e4,CONCAT22(uStack_5e6,uStack_5e8));
    plStack_598 = (long *)0x0;
    plStack_590 = (long *)0x0;
    plStack_700 = plVar10;
    func_0x048afd20(uVar3,&uStack_710);
    plVar10 = plStack_700;
    if (plStack_700 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_700 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_700 + 0x10))(plStack_700);
        func_0x0412c2d0(plVar10);
      }
    }
    plVar10 = plStack_590;
    if (plStack_590 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_590 + 1;
      lVar7 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_590 + 0x10))(plStack_590);
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
LAB_0e74c0da:
      piVar11[4] = piVar11[4] | auStack_6a8._0_4_ << 0x10;
    }
    else {
      if (iVar5 == 1) {
        piVar11 = *(int **)(*(long *)(lVar7 + 0x78) + 0x48);
        iVar5 = *piVar11;
        while (iVar5 != *(int *)(uVar3 + 0x18)) {
          piVar11 = piVar11 + 0x1a;
          iVar5 = *piVar11;
        }
        goto LAB_0e74c0da;
      }
      if (iVar5 == 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) | auStack_6a8._0_4_ << 0x10;
      }
    }
    func_0x048b0bc0(&iStack_690);
  }
  func_0x0e7d4570(&plStack_5d0,&lStack_4a0,&DAT_012fe1ca,0x1b);
  uStack_5a8 = 0x310ad8ad00000003;
  func_0x0e26f370(plStack_5d0 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cb978;
  auStack_6a8._8_8_ = 0;
  auStack_6a8._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_012fe1dd;
  uStack_688 = SUB81(puVar8,0);
  uStack_687 = (undefined2)((ulong)puVar8 >> 8);
  uStack_685 = (undefined1)((ulong)puVar8 >> 0x18);
  uStack_684 = (undefined4)((ulong)puVar8 >> 0x20);
  uStack_698 = 0x21;
  uStack_694 = 0;
  iStack_690 = 0x1b;
  iStack_68c = 0;
  *(ulong *)((long)puVar8 + 0xb) = CONCAT35(_UNK_012fe1da,_DAT_012fe1d5);
  *(undefined8 *)((long)puVar8 + 0x13) = uVar3;
  uVar3 = CONCAT53(_DAT_012fe1d5,_UNK_012fe1d2);
  *puVar8 = _DAT_012fe1ca;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1b) = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar3 = _UNK_012fe1dd;
  uStack_670 = SUB81(puVar8,0);
  uStack_66f = (undefined2)((ulong)puVar8 >> 8);
  uStack_66d = (undefined1)((ulong)puVar8 >> 0x18);
  uStack_66c = (undefined4)((ulong)puVar8 >> 0x20);
  uStack_680 = 0x21;
  uStack_67c = 0;
  uStack_678 = 0x1b;
  uStack_677 = 0;
  *(ulong *)((long)puVar8 + 0xb) = CONCAT35(_UNK_012fe1da,_DAT_012fe1d5);
  *(undefined8 *)((long)puVar8 + 0x13) = uVar3;
  uVar3 = CONCAT53(_DAT_012fe1d5,_UNK_012fe1d2);
  *puVar8 = _DAT_012fe1ca;
  puVar8[1] = uVar3;
  *(undefined1 *)((long)puVar8 + 0x1b) = 0;
  lStack_648 = 0;
  lStack_640 = 0;
  uStack_658 = 0;
  lStack_650 = 0;
  uStack_668 = 0;
  uStack_667 = 0;
  uStack_660 = 0;
  uStack_65f = 0;
  uStack_638 = CONCAT44(uStack_638._4_4_,0x3f600000);
  func_0x048afb10(&uStack_668,8);
  uVar3 = _uStack_600;
  lStack_610 = 0;
  lStack_608 = 0;
  uStack_620 = 0;
  lStack_618 = 0;
  lStack_630 = 0;
  lStack_628 = 0;
  _uStack_600 = CONCAT62(stack0xfffffffffffffa02,0xff00);
  uVar4 = _uStack_600;
  uStack_5fb = SUB83(uVar3,5);
  uStack_600._0_4_ = (uint)uVar4;
  uStack_600 = (uint5)(uint)uStack_600;
  uVar14 = (ulong)_uStack_5f8 >> 0x28;
  uStack_5f8._0_4_ = (uint)_uStack_5f8 & 0xffffff00;
  uStack_5f8 = (uint5)(uint)uStack_5f8;
  _uStack_5f8 = CONCAT35((int3)uVar14,uStack_5f8);
  if ((DAT_0f74afc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74afc8), iVar5 != 0)) {
    func_0x0e26f460(0xf74afb0);
    func_0x0410844d(&DAT_0f74afc8);
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_5a8._4_4_);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x2;
  uStack_6f0 = 1;
  puStack_6e8 = &UNK_0e7d73f0;
  puStack_6e0 = &UNK_07d98660;
  puStack_6d8 = &UNK_0e7d7120;
  puStack_6d0 = &UNK_0e7d7410;
  puStack_6c8 = &UNK_0e7d7c00;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(&plStack_5c8,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_588 = plStack_5b8;
  plStack_580 = plStack_5b0;
  plStack_598 = plStack_5c8;
  plStack_590 = plStack_5c0;
  func_0x0e7d48f0(&uStack_710,&plStack_598,auStack_6a8);
  func_0x048b0bc0(auStack_6a8);
  func_0x0d8a5280(param_1);
  func_0x0d8a4910(param_1);
  if ((DAT_0f761100 == '\0') && (iVar5 = func_0x04108328(&DAT_0f761100), iVar5 != 0)) {
    func_0x0e7d8920();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f761080,0xf53dab8);
    func_0x0410844d(&DAT_0f761100);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f761080 + 4)) * 8);
  do {
    lVar7 = *plVar10;
    if (lVar7 == -1) goto LAB_0e74c410;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f761080 + 4));
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0e74c410:
    puVar9 = &DAT_0f761080;
    if (iRam000000000f7610e0 != -0x2b3da790) goto LAB_0e74c47d;
LAB_0e74c43b:
    lVar7 = *(long *)(puVar9 + 0x68);
    if (lVar7 == 0) goto LAB_0e74c47d;
    bVar18 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar17 = lVar7 + 9;
    if (bVar18) {
      lVar17 = *(long *)(lVar7 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar18) {
      uVar14 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0e7ec3a0(&plStack_5d0,param_1,lVar17,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar10[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0e74c43b;
LAB_0e74c47d:
    func_0x0e7ec3a0(&plStack_5d0,param_1,&DAT_0130aa18,0x24);
  }
  if (cStack_5a0 != '\0') goto LAB_0e74e15e;
  lStack_3f8 = (ulong)uStack_59f << 8;
  plStack_428 = plStack_5d0;
  plStack_420 = plStack_5c8;
  plStack_418 = plStack_5c0;
  plStack_410 = plStack_5b8;
  plStack_408 = plStack_5b0;
  uStack_400 = uStack_5a8;
  if ((DAT_0f761068 == '\0') && (iVar5 = func_0x04108328(&DAT_0f761068), iVar5 != 0)) {
    func_0x0e7d87e0();
    func_0x0410844d(&DAT_0f761068);
  }
  if ((DAT_0f72c370 == '\0') && (iVar5 = func_0x04108328(&DAT_0f72c370), iVar5 != 0)) {
    func_0x0d8b8690(0xf72c358);
    func_0x0410844d(&DAT_0f72c370);
  }
  auStack_6a8._0_4_ = _DAT_0f72c35c;
  auStack_6a8._8_8_ = &SUB_0d8b84a0;
  uStack_698 = 0xe7ecf80;
  uStack_694 = 0;
  func_0x05da1460(&plStack_420);
  lVar7 = func_0x0d8b84a0(plStack_428 + 3);
  if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
    func_0x0e7ec990(auStack_6a8,plStack_428 + 3);
    if (iStack_68c == 2) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x16;
        iVar5 = *piVar11;
      }
      lVar7 = *(long *)(piVar11 + 0xc);
      while (lVar7 != auStack_6a8._8_8_) {
        piVar11 = *(int **)(piVar11 + 0xe);
        lVar7 = *(long *)(piVar11 + 0xc);
      }
    }
    else {
      if (iStack_68c != 1) {
        if (iStack_68c == 0) {
          puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
          *puVar1 = *puVar1 | 0x40000;
        }
        goto LAB_0e74c5e3;
      }
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
    }
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
LAB_0e74c5e3:
  lStack_3b8 = lStack_3f8;
  plStack_3c8 = plStack_408;
  uStack_3c0 = uStack_400;
  plStack_3d8 = plStack_418;
  plStack_3d0 = plStack_410;
  plStack_3e8 = plStack_428;
  plStack_3e0 = plStack_420;
  func_0x0e7ec990(auStack_6a8,plStack_428 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74c69f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74c69f;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_3e8,&UNK_0119d33f,7);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0ef46ce8;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_0490ce30;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &SUB_0490cb20;
  puStack_6d0 = &UNK_0e7ed540;
  puStack_6c8 = &UNK_0e7ed6a0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_1b8 = (undefined1)lStack_3b8;
  plStack_1c8 = plStack_3c8;
  uStack_1c0 = uStack_3c0;
  plStack_1d8 = plStack_3d8;
  plStack_1d0 = plStack_3d0;
  plStack_1e8 = plStack_3e8;
  plStack_1e0 = plStack_3e0;
  func_0x048b0bc0(&iStack_690);
  plStack_3a8 = plStack_1e8;
  plStack_3a0 = plStack_1e0;
  plStack_398 = plStack_1d8;
  plStack_390 = plStack_1d0;
  plStack_388 = plStack_1c8;
  uStack_380 = uStack_1c0;
  uStack_378 = CONCAT71(uStack_1b7,uStack_1b8);
  func_0x0e7ec990(auStack_6a8,plStack_1e8 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74c93f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74c93f;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_3a8,&UNK_01325e7b,6);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0ef46ce8;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_0490ce30;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &SUB_0490cb20;
  puStack_6d0 = &UNK_0e7ed880;
  puStack_6c8 = &UNK_0e7ed9e0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_178 = (undefined1)uStack_378;
  plStack_188 = plStack_388;
  uStack_180 = uStack_380;
  plStack_198 = plStack_398;
  plStack_190 = plStack_390;
  plStack_1a8 = plStack_3a8;
  plStack_1a0 = plStack_3a0;
  func_0x048b0bc0(&iStack_690);
  plStack_368 = plStack_1a8;
  plStack_360 = plStack_1a0;
  plStack_358 = plStack_198;
  plStack_350 = plStack_190;
  plStack_348 = plStack_188;
  uStack_340 = uStack_180;
  uStack_338 = CONCAT71(uStack_177,uStack_178);
  func_0x0e7ec990(auStack_6a8,plStack_1a8 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74cbcf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74cbcf;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_368,&UNK_0127263b,0xd);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7edbc0;
  puStack_6c8 = &UNK_0e7edd20;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_138 = (undefined1)uStack_338;
  plStack_148 = plStack_348;
  uStack_140 = uStack_340;
  plStack_158 = plStack_358;
  plStack_150 = plStack_350;
  plStack_168 = plStack_368;
  plStack_160 = plStack_360;
  func_0x048b0bc0(&iStack_690);
  plStack_328 = plStack_168;
  plStack_320 = plStack_160;
  plStack_318 = plStack_158;
  plStack_310 = plStack_150;
  plStack_308 = plStack_148;
  uStack_300 = uStack_140;
  uStack_2f8 = CONCAT71(uStack_137,uStack_138);
  func_0x0e7ec990(auStack_6a8,plStack_168 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74ce6f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74ce6f;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_328,&UNK_013c5673,0xd);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7edf00;
  puStack_6c8 = &UNK_0e7ee060;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_f8 = (undefined1)uStack_2f8;
  plStack_108 = plStack_308;
  uStack_100 = uStack_300;
  plStack_118 = plStack_318;
  plStack_110 = plStack_310;
  plStack_128 = plStack_328;
  plStack_120 = plStack_320;
  func_0x048b0bc0(&iStack_690);
  plStack_2e8 = plStack_128;
  plStack_2e0 = plStack_120;
  plStack_2d8 = plStack_118;
  plStack_2d0 = plStack_110;
  plStack_2c8 = plStack_108;
  uStack_2c0 = uStack_100;
  uStack_2b8 = CONCAT71(uStack_f7,uStack_f8);
  func_0x0e7ec990(auStack_6a8,plStack_128 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74d0ff:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74d0ff;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_2e8,&UNK_0147972c,0xf);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7ee240;
  puStack_6c8 = &UNK_0e7ee3a0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_b8 = (undefined1)uStack_2b8;
  plStack_c8 = plStack_2c8;
  uStack_c0 = uStack_2c0;
  plStack_d8 = plStack_2d8;
  plStack_d0 = plStack_2d0;
  plStack_e8 = plStack_2e8;
  plStack_e0 = plStack_2e0;
  func_0x048b0bc0(&iStack_690);
  plStack_2a8 = plStack_e8;
  plStack_2a0 = plStack_e0;
  plStack_298 = plStack_d8;
  plStack_290 = plStack_d0;
  plStack_288 = plStack_c8;
  uStack_280 = uStack_c0;
  uStack_278 = CONCAT71(uStack_b7,uStack_b8);
  func_0x0e7ec990(auStack_6a8,plStack_e8 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74d38f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74d38f;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_2a8,&DAT_0145f6ec,0x10);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7ee580;
  puStack_6c8 = &UNK_0e7ee6e0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_78 = (undefined1)uStack_278;
  plStack_88 = plStack_288;
  uStack_80 = uStack_280;
  plStack_98 = plStack_298;
  plStack_90 = plStack_290;
  plStack_a8 = plStack_2a8;
  plStack_a0 = plStack_2a0;
  func_0x048b0bc0(&iStack_690);
  plStack_268 = plStack_a8;
  plStack_260 = plStack_a0;
  plStack_258 = plStack_98;
  plStack_250 = plStack_90;
  plStack_248 = plStack_88;
  uStack_240 = uStack_80;
  uStack_238 = CONCAT71(uStack_77,uStack_78);
  func_0x0e7ec990(auStack_6a8,plStack_a8 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74d61f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74d61f;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_268,&UNK_0127270f,0xc);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7ee8c0;
  puStack_6c8 = &UNK_0e7eea20;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_38 = (undefined1)uStack_238;
  plStack_48 = plStack_248;
  uStack_40 = uStack_240;
  plStack_58 = plStack_258;
  plStack_50 = plStack_250;
  plStack_68 = plStack_268;
  plStack_60 = plStack_260;
  func_0x048b0bc0(&iStack_690);
  plStack_228 = plStack_68;
  plStack_220 = plStack_60;
  plStack_218 = plStack_58;
  plStack_210 = plStack_50;
  plStack_208 = plStack_48;
  uStack_200 = uStack_40;
  uStack_1f8 = CONCAT71(uStack_37,uStack_38);
  func_0x0e7ec990(auStack_6a8,plStack_68 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74d8af:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74d8af;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_228,&UNK_014c9dcb,0xd);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7eec00;
  puStack_6c8 = &UNK_0e7eed60;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  uStack_438 = (undefined1)uStack_1f8;
  uStack_448 = SUB81(plStack_208,0);
  uStack_447 = (undefined7)((ulong)plStack_208 >> 8);
  cStack_440 = (char)uStack_200;
  uStack_43f = (undefined7)((ulong)uStack_200 >> 8);
  plStack_458 = plStack_218;
  uStack_450 = SUB81(plStack_210,0);
  uStack_44f = (undefined7)((ulong)plStack_210 >> 8);
  plStack_468 = plStack_228;
  plStack_460 = plStack_220;
  func_0x048b0bc0(&iStack_690);
  plStack_500 = (long *)CONCAT71(uStack_44f,uStack_450);
  plStack_4f8 = (long *)CONCAT71(uStack_447,uStack_448);
  uStack_4f0 = CONCAT71(uStack_43f,cStack_440);
  plStack_518 = plStack_468;
  plStack_510 = plStack_460;
  plStack_508 = plStack_458;
  lStack_4e8 = CONCAT71(uStack_437,uStack_438);
  func_0x0e7ec990(auStack_6a8,plStack_468 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74db3f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74db3f;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_518,&UNK_0123d661,0x14);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7eef40;
  puStack_6c8 = &UNK_0e7ef0a0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  cStack_4a8 = (char)lStack_4e8;
  plStack_4b8 = plStack_4f8;
  uStack_4b0 = uStack_4f0;
  plStack_4c8 = plStack_508;
  plStack_4c0 = plStack_500;
  plStack_4d8 = plStack_518;
  plStack_4d0 = plStack_510;
  func_0x048b0bc0(&iStack_690);
  plStack_558 = plStack_4d8;
  plStack_550 = plStack_4d0;
  plStack_548 = plStack_4c8;
  plStack_540 = plStack_4c0;
  uStack_538 = SUB81(plStack_4b8,0);
  uStack_537 = (undefined7)((ulong)plStack_4b8 >> 8);
  uStack_530 = (undefined1)uStack_4b0;
  uStack_52f = (undefined7)((ulong)uStack_4b0 >> 8);
  cStack_528 = cStack_4a8;
  func_0x0e7ec990(auStack_6a8,plStack_4d8 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74ddcf:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74ddcf;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_558,&UNK_013acce2,0xb);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0126a0;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05daeda0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &UNK_05daea90;
  puStack_6d0 = &UNK_0e7ef280;
  puStack_6c8 = &UNK_0e7ef3e0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  cStack_568 = cStack_528;
  uStack_578 = uStack_538;
  uStack_577 = uStack_537;
  uStack_570 = uStack_530;
  uStack_56f = uStack_52f;
  plStack_588 = plStack_548;
  plStack_580 = plStack_540;
  plStack_598 = plStack_558;
  plStack_590 = plStack_550;
  func_0x048b0bc0(&iStack_690);
  func_0x0e7ec990(auStack_6a8,plStack_598 + 3);
  if (iStack_68c == 2) {
    piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x60);
    iVar5 = *piVar11;
    while (iVar5 != iStack_690) {
      piVar11 = piVar11 + 0x16;
      iVar5 = *piVar11;
    }
    lVar7 = *(long *)(piVar11 + 0xc);
    while (lVar7 != auStack_6a8._8_8_) {
      piVar11 = *(int **)(piVar11 + 0xe);
      lVar7 = *(long *)(piVar11 + 0xc);
    }
LAB_0e74e01f:
    *(byte *)((long)piVar11 + 0x12) = *(byte *)((long)piVar11 + 0x12) | 4;
  }
  else {
    if (iStack_68c == 1) {
      piVar11 = *(int **)(*(long *)(CONCAT44(uStack_694,uStack_698) + 0x78) + 0x48);
      iVar5 = *piVar11;
      while (iVar5 != iStack_690) {
        piVar11 = piVar11 + 0x1a;
        iVar5 = *piVar11;
      }
      goto LAB_0e74e01f;
    }
    if (iStack_68c == 0) {
      puVar1 = (uint *)(CONCAT44(uStack_694,uStack_698) + 0x18);
      *puVar1 = *puVar1 | 0x40000;
    }
  }
  func_0x0e7ecf90(auStack_6a8,&plStack_598,&UNK_01258631,0x12);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f0124a8;
  plVar10 = (long *)CONCAT44(iStack_68c,iStack_690);
  iStack_690 = (int)puVar8;
  iStack_68c = (int)((ulong)puVar8 >> 0x20);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_698);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x1;
  uStack_6f0 = 0;
  puStack_6e8 = &UNK_05da29c0;
  puStack_6e0 = &SUB_048b06d0;
  puStack_6d8 = &SUB_05da26d0;
  puStack_6d0 = &UNK_0e7ef5c0;
  puStack_6c8 = &UNK_0e7ef730;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(auStack_6a8._8_8_,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0e7ed240(auStack_6a8);
  func_0x048b0bc0(&iStack_690);
LAB_0e74e15e:
  func_0x0e7d4570(&plStack_5d0,&lStack_4a0,&DAT_0130aa18,0x24);
  uStack_5a8 = 0xd3b0026200000003;
  func_0x0e26f370(plStack_5d0 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cba00;
  auStack_6a8._8_8_ = 0;
  auStack_6a8._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_0130aa30;
  uStack_688 = SUB81(puVar8,0);
  uStack_687 = (undefined2)((ulong)puVar8 >> 8);
  uStack_685 = (undefined1)((ulong)puVar8 >> 0x18);
  uStack_684 = (undefined4)((ulong)puVar8 >> 0x20);
  uStack_698 = 0x29;
  uStack_694 = 0;
  iStack_690 = 0x24;
  iStack_68c = 0;
  puVar8[2] = _DAT_0130aa28;
  puVar8[3] = uVar3;
  uVar3 = _UNK_0130aa20;
  *puVar8 = _DAT_0130aa18;
  puVar8[1] = uVar3;
  *(undefined4 *)(puVar8 + 4) = 0x73747269;
  *(undefined1 *)((long)puVar8 + 0x24) = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_0130aa30;
  uStack_670 = SUB81(puVar8,0);
  uStack_66f = (undefined2)((ulong)puVar8 >> 8);
  uStack_66d = (undefined1)((ulong)puVar8 >> 0x18);
  uStack_66c = (undefined4)((ulong)puVar8 >> 0x20);
  uStack_680 = 0x29;
  uStack_67c = 0;
  uStack_678 = 0x24;
  uStack_677 = 0;
  puVar8[2] = _DAT_0130aa28;
  puVar8[3] = uVar3;
  uVar3 = _UNK_0130aa20;
  *puVar8 = _DAT_0130aa18;
  puVar8[1] = uVar3;
  *(undefined4 *)(puVar8 + 4) = 0x73747269;
  *(undefined1 *)((long)puVar8 + 0x24) = 0;
  lStack_648 = 0;
  lStack_640 = 0;
  uStack_658 = 0;
  lStack_650 = 0;
  uStack_668 = 0;
  uStack_667 = 0;
  uStack_660 = 0;
  uStack_65f = 0;
  uStack_638 = CONCAT44(uStack_638._4_4_,0x3f600000);
  func_0x048afb10(&uStack_668,8);
  uVar3 = _uStack_600;
  lStack_610 = 0;
  lStack_608 = 0;
  uStack_620 = 0;
  lStack_618 = 0;
  lStack_630 = 0;
  lStack_628 = 0;
  _uStack_600 = CONCAT62(stack0xfffffffffffffa02,0xff00);
  uVar4 = _uStack_600;
  uStack_5fb = SUB83(uVar3,5);
  uStack_600._0_4_ = (uint)uVar4;
  uStack_600 = (uint5)(uint)uStack_600;
  uVar14 = (ulong)_uStack_5f8 >> 0x28;
  uStack_5f8._0_4_ = (uint)_uStack_5f8 & 0xffffff00;
  uStack_5f8 = (uint5)(uint)uStack_5f8;
  _uStack_5f8 = CONCAT35((int3)uVar14,uStack_5f8);
  if ((DAT_0f74afc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74afc8), iVar5 != 0)) {
    func_0x0e26f460(0xf74afb0);
    func_0x0410844d(&DAT_0f74afc8);
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_5a8._4_4_);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x2;
  uStack_6f0 = 1;
  puStack_6e8 = &UNK_0e7d8b80;
  puStack_6e0 = &UNK_07d98660;
  puStack_6d8 = &UNK_0e7d8860;
  puStack_6d0 = &UNK_0e7d8ba0;
  puStack_6c8 = &UNK_0e7d9270;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(&plStack_5c8,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_588 = plStack_5b8;
  plStack_580 = plStack_5b0;
  plStack_598 = plStack_5c8;
  plStack_590 = plStack_5c0;
  func_0x0e7d48f0(&uStack_710,&plStack_598,auStack_6a8);
  func_0x048b0bc0(auStack_6a8);
  func_0x0e6c8310(param_1);
  func_0x0e7d4570(&plStack_5d0,&lStack_4a0,&DAT_01413028,0x32);
  uStack_5a8 = 0x828611f100000003;
  func_0x0e26f370(plStack_5d0 + 3);
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar8 = &UNK_0f4cba88;
  auStack_6a8._8_8_ = 0;
  auStack_6a8._0_8_ = puVar8;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar3 = _UNK_01413050;
  uStack_688 = SUB81(puVar8,0);
  uStack_687 = (undefined2)((ulong)puVar8 >> 8);
  uStack_685 = (undefined1)((ulong)puVar8 >> 0x18);
  uStack_684 = (undefined4)((ulong)puVar8 >> 0x20);
  uStack_698 = 0x39;
  uStack_694 = 0;
  iStack_690 = 0x32;
  iStack_68c = 0;
  puVar8[4] = _DAT_01413048;
  puVar8[5] = uVar3;
  uVar3 = _UNK_01413040;
  puVar8[2] = _DAT_01413038;
  puVar8[3] = uVar3;
  uVar3 = _UNK_01413030;
  *puVar8 = _DAT_01413028;
  puVar8[1] = uVar3;
  *(undefined2 *)(puVar8 + 6) = 0x6e6f;
  *(undefined1 *)((long)puVar8 + 0x32) = 0;
  puVar8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  uVar3 = _UNK_01413050;
  uStack_670 = SUB81(puVar8,0);
  uStack_66f = (undefined2)((ulong)puVar8 >> 8);
  uStack_66d = (undefined1)((ulong)puVar8 >> 0x18);
  uStack_66c = (undefined4)((ulong)puVar8 >> 0x20);
  uStack_680 = 0x39;
  uStack_67c = 0;
  uStack_678 = 0x32;
  uStack_677 = 0;
  puVar8[4] = _DAT_01413048;
  puVar8[5] = uVar3;
  uVar3 = _UNK_01413040;
  puVar8[2] = _DAT_01413038;
  puVar8[3] = uVar3;
  uVar3 = _UNK_01413030;
  *puVar8 = _DAT_01413028;
  puVar8[1] = uVar3;
  *(undefined2 *)(puVar8 + 6) = 0x6e6f;
  *(undefined1 *)((long)puVar8 + 0x32) = 0;
  lStack_648 = 0;
  lStack_640 = 0;
  uStack_658 = 0;
  lStack_650 = 0;
  uStack_668 = 0;
  uStack_667 = 0;
  uStack_660 = 0;
  uStack_65f = 0;
  uStack_638 = CONCAT44(uStack_638._4_4_,0x3f600000);
  func_0x048afb10(&uStack_668,8);
  uVar3 = _uStack_600;
  lStack_610 = 0;
  lStack_608 = 0;
  uStack_620 = 0;
  lStack_618 = 0;
  lStack_630 = 0;
  lStack_628 = 0;
  _uStack_600 = CONCAT62(stack0xfffffffffffffa02,0xff00);
  uVar4 = _uStack_600;
  uStack_5fb = SUB83(uVar3,5);
  uStack_600._0_4_ = (uint)uVar4;
  uStack_600 = (uint5)(uint)uStack_600;
  uVar14 = (ulong)_uStack_5f8 >> 0x28;
  uStack_5f8._0_4_ = (uint)_uStack_5f8 & 0xffffff00;
  uStack_5f8 = (uint5)(uint)uStack_5f8;
  _uStack_5f8 = CONCAT35((int3)uVar14,uStack_5f8);
  if ((DAT_0f74afc8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f74afc8), iVar5 != 0)) {
    func_0x0e26f460(0xf74afb0);
    func_0x0410844d(&DAT_0f74afc8);
  }
  uStack_710 = CONCAT44(uStack_710._4_4_,uStack_5a8._4_4_);
  plStack_708 = (long *)0x0;
  plStack_700 = (long *)((ulong)plStack_700 & 0xffffffff00000000);
  pcStack_6f8 = (code *)0x2;
  uStack_6f0 = 1;
  puStack_6e8 = &UNK_0e7d9b30;
  puStack_6e0 = &UNK_07d98660;
  puStack_6d8 = &SUB_0e6dbb30;
  puStack_6d0 = &UNK_0e7d9b50;
  puStack_6c8 = &UNK_0e7da340;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  plStack_6b0 = (long *)0x0;
  func_0x048b05a0(&plStack_5c8,&uStack_710);
  plVar10 = plStack_6b0;
  if (plStack_6b0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_6b0 + 1;
    lVar7 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_6b0 + 0x10))(plStack_6b0);
      func_0x0412c2d0(plVar10);
    }
  }
  plStack_588 = plStack_5b8;
  plStack_580 = plStack_5b0;
  plStack_598 = plStack_5c8;
  plStack_590 = plStack_5c0;
  func_0x0e7d48f0(&uStack_710,&plStack_598,auStack_6a8);
  func_0x048b0bc0(auStack_6a8);
  return;
}



/* ---- referenced strings ----
 * 0x11c01e7  minecraft:addrider
 * 0x12fe1ca  minecraft:burns_in_daylight
 * 0x12fe1d5  urns_in_daylight
 * 0x130aa18  minecraft:behavior.explore_outskirts
 * 0x130aa28  or.explore_outskirts
 * 0x1413028  minecraft:behavior.investigate_suspicious_location
 * 0x1413038  or.investigate_suspicious_location
 * 0x1413048  uspicious_location
 * 0x1459095  [__dev_aid:actor_def_version]
 * 0x14590a2  tor_def_version]
 * 0x14e80e0  tor_def_version]
 */
