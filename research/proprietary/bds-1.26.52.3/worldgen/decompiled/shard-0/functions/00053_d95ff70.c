/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xda5ff70 (ELF vaddr 0xd95ff70)
 * Label: caller-of-callee
 * Body:  [[0da5ff70, 0da60231] [0da60240, 0da60b21] [0da60b30, 0da60f1d] [0da60f20, 0da613c5] [0da613d0, 0da61404] [0da61410, 0da62368] [0da62370, 0da62f2c]]
 * Ghidra: FUN_0da5ff70
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0da5ff70(long param_1)

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
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  int *piVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  byte *pbVar21;
  code *pcVar22;
  long lVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined *puStack_6a8;
  long *plStack_6a0;
  long *plStack_698;
  code *pcStack_690;
  undefined8 uStack_688;
  undefined *puStack_680;
  undefined1 *puStack_678;
  undefined1 *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined8 uStack_658;
  long lStack_650;
  long *plStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  undefined1 auStack_628 [8];
  long lStack_620;
  undefined *puStack_618;
  undefined8 uStack_610;
  code *pcStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  long lStack_5f0;
  undefined1 uStack_5e8;
  undefined7 uStack_5e7;
  undefined1 uStack_5e0;
  undefined2 uStack_5df;
  undefined1 uStack_5dd;
  undefined4 uStack_5dc;
  long *plStack_5d8;
  long lStack_5d0;
  ulong uStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  undefined4 uStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  undefined2 uStack_568;
  undefined2 uStack_566;
  uint uStack_564;
  uint uStack_560;
  undefined1 uStack_55c;
  undefined1 auStack_558 [16];
  undefined8 uStack_548;
  undefined2 uStack_540;
  undefined8 uStack_538;
  undefined *puStack_530;
  undefined *puStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  undefined2 uStack_500;
  ulong uStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  byte bStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined2 uStack_4cf;
  undefined5 uStack_4cd;
  undefined8 *puStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  byte bStack_498;
  undefined7 uStack_497;
  undefined1 uStack_490;
  undefined2 uStack_48f;
  undefined8 uStack_488;
  byte bStack_480;
  undefined7 uStack_47f;
  undefined1 uStack_478;
  undefined2 uStack_477;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined1 auStack_448 [16];
  undefined8 uStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  int iStack_3e8;
  undefined4 uStack_3e4;
  undefined1 *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined4 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  long lStack_368;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  long lStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  long *plStack_278;
  undefined1 uStack_270;
  undefined *puStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 uStack_250;
  undefined1 auStack_248 [8];
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long *plStack_218;
  long lStack_210;
  ulong uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  undefined7 uStack_37;
  
  if ((DAT_0f732788 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732788), iVar7 != 0)) {
    func_0x0daa7cd0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
    func_0x0410844d(&DAT_0f732788);
  }
  lVar23 = param_1 + 0x18;
  plVar13 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f732708 + 4)) * 8);
  do {
    lVar20 = *plVar13;
    if (lVar20 == -1) goto LAB_0da5fff0;
    plVar13 = (long *)(*(long *)(param_1 + 0x30) + lVar20 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar20 * 0x18) != *(uint *)(_DAT_0f732708 + 4))
  ;
  if (plVar13 == *(long **)(param_1 + 0x38)) {
LAB_0da5fff0:
    puVar9 = &DAT_0f732708;
    if (iRam000000000f732768 != -0x2b3da790) goto LAB_0da60072;
LAB_0da6001b:
    lVar20 = *(long *)(puVar9 + 0x68);
    if (lVar20 == 0) goto LAB_0da60072;
    bVar24 = (*(byte *)(lVar20 + 8) & 1) != 0;
    lVar18 = lVar20 + 9;
    if (bVar24) {
      lVar18 = *(long *)(lVar20 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar20 + 8) >> 1);
    if (bVar24) {
      uVar14 = *(ulong *)(lVar20 + 0x10);
    }
    func_0x0daa82d0(&uStack_410,param_1,lVar18,uVar14);
    if ((char)puStack_3e0 != '\0') goto LAB_0da60058;
LAB_0da60098:
    uVar14 = uStack_410;
    lStack_368 = 0x10028001a0001;
    uStack_2e8 = 0;
    uStack_328 = 0;
    auStack_558._8_4_ = 0x74706972;
    auStack_558._0_8_ = 0x63736544696f501c;
    auStack_558._11_4_ = 0x6e6f6974;
    auStack_558[0xf] = 0;
    uStack_548 = 0;
    uStack_540 = 0x1402;
    uStack_538 = 0x10028001a0001;
    puStack_530 = &UNK_01254d89;
    auStack_360 = (undefined1  [16])0x0;
    puStack_528 = &UNK_01254d89;
    lStack_330 = lVar23;
    if ((DAT_0f732788 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732788), iVar7 != 0)) {
      func_0x0daa7cd0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
      func_0x0410844d(&DAT_0f732788);
    }
    plVar13 = (long *)(*(long *)(uVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar14 + 0x20) - *(long *)(uVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f732708 + 4)) * 8);
    do {
      lVar23 = *plVar13;
      if (lVar23 == -1) goto LAB_0da601b0;
      plVar13 = (long *)(*(long *)(uVar14 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar14 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f732708 + 4)
            );
    if (plVar13 == *(long **)(uVar14 + 0x38)) {
LAB_0da601b0:
      puVar9 = &DAT_0f732708;
    }
    else {
      puVar9 = (undefined *)plVar13[2];
    }
    for (pbVar10 = *(byte **)(uStack_410 + 0x50); pbVar10 != *(byte **)(uStack_410 + 0x58);
        pbVar10 = pbVar10 + 0x38) {
      bVar2 = *pbVar10;
      if ((bVar2 & 1) == 0) {
        if (bVar2 >> 1 == 0x1d) goto LAB_0da6024a;
      }
      else if (*(long *)(pbVar10 + 8) == 0x1d) {
LAB_0da6024a:
        if ((bVar2 & 1) == 0) {
          pbVar19 = pbVar10 + 1;
        }
        else {
          pbVar19 = *(byte **)(pbVar10 + 0x10);
        }
        auVar25[0] = -(*pbVar19 == DAT_014e4030);
        auVar25[1] = -(pbVar19[1] == DAT_014e4030._1_1_);
        auVar25[2] = -(pbVar19[2] == DAT_014e4030._2_1_);
        auVar25[3] = -(pbVar19[3] == DAT_014e4030._3_1_);
        auVar25[4] = -(pbVar19[4] == DAT_014e4030._4_1_);
        auVar25[5] = -(pbVar19[5] == DAT_014e4030._5_1_);
        auVar25[6] = -(pbVar19[6] == DAT_014e4030._6_1_);
        auVar25[7] = -(pbVar19[7] == DAT_014e4030._7_1_);
        auVar25[8] = -(pbVar19[8] == DAT_014e4030._8_1_);
        auVar25[9] = -(pbVar19[9] == DAT_014e4030._9_1_);
        auVar25[10] = -(pbVar19[10] == DAT_014e4030._10_1_);
        auVar25[0xb] = -(pbVar19[0xb] == DAT_014e4030._11_1_);
        auVar25[0xc] = -(pbVar19[0xc] == DAT_014e4030._12_1_);
        auVar25[0xd] = -(pbVar19[0xd] == DAT_014e4030._13_1_);
        auVar25[0xe] = -(pbVar19[0xe] == DAT_014e4030._14_1_);
        auVar25[0xf] = -(pbVar19[0xf] == DAT_014e4030._15_1_);
        auVar26[0] = -(pbVar19[0xd] == DAT_014e1610);
        auVar26[1] = -(pbVar19[0xe] == DAT_014e1610._1_1_);
        auVar26[2] = -(pbVar19[0xf] == DAT_014e1610._2_1_);
        auVar26[3] = -(pbVar19[0x10] == DAT_014e1610._3_1_);
        auVar26[4] = -(pbVar19[0x11] == DAT_014e1610._4_1_);
        auVar26[5] = -(pbVar19[0x12] == DAT_014e1610._5_1_);
        auVar26[6] = -(pbVar19[0x13] == DAT_014e1610._6_1_);
        auVar26[7] = -(pbVar19[0x14] == DAT_014e1610._7_1_);
        auVar26[8] = -(pbVar19[0x15] == DAT_014e1610._8_1_);
        auVar26[9] = -(pbVar19[0x16] == DAT_014e1610._9_1_);
        auVar26[10] = -(pbVar19[0x17] == DAT_014e1610._10_1_);
        auVar26[0xb] = -(pbVar19[0x18] == DAT_014e1610._11_1_);
        auVar26[0xc] = -(pbVar19[0x19] == DAT_014e1610._12_1_);
        auVar26[0xd] = -(pbVar19[0x1a] == DAT_014e1610._13_1_);
        auVar26[0xe] = -(pbVar19[0x1b] == DAT_014e1610._14_1_);
        auVar26[0xf] = -(pbVar19[0x1c] == DAT_014e1610._15_1_);
        auVar26 = auVar26 & auVar25;
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar10 == *(byte **)(uStack_410 + 0x58)) {
LAB_0da6027d:
      uVar5 = uStack_3e4;
      if (iStack_3e8 == 0) {
        if (((puVar9 == (undefined *)0x0) || (*(int *)(puVar9 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar9 + 0x68) == 0)) goto LAB_0da6030e;
        lVar23 = *(long *)(puVar9 + 0x68) + 0x38;
      }
      else {
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)func_0x048aead0(uVar14 + 0x18);
        }
        auVar11 = (undefined1  [8])func_0x048b0c90(uVar14 + 0x18,puVar9,uVar5,1);
        if (auVar11 == (undefined1  [8])0x0) {
          _auStack_628 = (undefined1  [16])0x0;
          func_0x048b0d20(auStack_628);
          auVar11 = auStack_628;
          if (auStack_628 == (undefined1  [8])0x0) goto LAB_0da6030e;
        }
        if ((*(int *)((long)auVar11 + 0x50) == -0x45dcb126) &&
           (*(long *)((long)auVar11 + 0x58) != 0)) {
          lVar23 = *(long *)((long)auVar11 + 0x58) + 0x40;
        }
        else {
LAB_0da6030e:
          lVar23 = 0;
        }
      }
      puStack_6a8 = (undefined *)0x0;
      plStack_698 = (long *)&UNK_048b4ab0;
      pcStack_690 = (code *)&UNK_048b49f0;
      uStack_688 = CONCAT35(uStack_688._5_3_,0x1d33bd9c5);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      puVar12[2] = uStack_548;
      *puVar12 = auStack_558._0_8_;
      puVar12[1] = auStack_558._8_8_;
      auStack_558 = (undefined1  [16])0x0;
      uStack_548 = 0;
      *(undefined2 *)(puVar12 + 3) = uStack_540;
      puVar12[4] = uStack_538;
      puVar12[5] = puStack_530;
      puStack_530 = (undefined *)0x0;
      puVar12[6] = puStack_528;
      puStack_528 = (undefined *)0x0;
      uStack_610 = (code *)&UNK_048b4ab0;
      pcStack_608 = (code *)&UNK_048b49f0;
      uStack_600 = CONCAT35(uStack_600._5_3_,0x1d33bd9c5);
      puStack_6a8 = (undefined *)0x0;
      lStack_620 = (long)puVar12;
      auStack_628 = (undefined1  [8])&UNK_048b46e0;
      puStack_4c8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puStack_4c8 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar3 = _UNK_014d987e;
      bStack_4d8 = 0x21;
      uStack_4d7 = 0;
      uStack_4d0 = 0x1d;
      uStack_4cf = 0;
      uStack_4cd = 0;
      *(ulong *)((long)puStack_4c8 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)((long)puStack_4c8 + 0x15) = uVar3;
      uVar3 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *puStack_4c8 = _DAT_014d9869;
      puStack_4c8[1] = uVar3;
      *(undefined1 *)((long)puStack_4c8 + 0x1d) = 0;
      lVar23 = func_0x048b5060(lVar23,&bStack_4d8);
      *(undefined **)(lVar23 + 0x20) = &UNK_048b46e0;
      pcVar22 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar23 + 0x20) != auStack_628) {
        puVar12 = (undefined8 *)(lVar23 + 0x28);
        if (*(code **)(lVar23 + 0x40) == (code *)0x0) {
LAB_0da604fc:
          lVar20 = lStack_620;
          lStack_620 = 0;
          *puVar12 = lVar20;
        }
        else {
          (**(code **)(lVar23 + 0x40))(puVar12);
          if (uStack_600._4_1_ != '\0') {
            if (uStack_600._4_1_ != '\x02') goto LAB_0da604fc;
            (*uStack_610)(5,auStack_628 + 8,puVar12);
          }
        }
        *(code **)(lVar23 + 0x38) = uStack_610;
        *(code **)(lVar23 + 0x40) = pcStack_608;
        *(undefined4 *)(lVar23 + 0x48) = (undefined4)uStack_600;
        *(char *)(lVar23 + 0x4c) = uStack_600._4_1_;
        pcVar22 = pcStack_608;
      }
      if ((bStack_4d8 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_4c8,CONCAT71(uStack_4d7,bStack_4d8) & 0xfffffffffffffffe);
        pcVar22 = pcStack_608;
      }
      if (pcVar22 != (code *)0x0) {
        (*pcVar22)(auStack_628 + 8);
      }
      if (pcStack_690 != (code *)0x0) {
        (*pcStack_690)(&puStack_6a8);
      }
    }
    else {
      iVar7 = *(int *)(pbVar10 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
        func_0x048b46f0(&DAT_0f550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar7 == _DAT_0f550754) goto LAB_0da6027d;
    }
    uStack_438 = puStack_3e0;
    auStack_448._8_4_ = iStack_3e8;
    auStack_448._0_8_ = uStack_3f0;
    auStack_448._12_4_ = uStack_3e4;
    puStack_458 = puStack_400;
    uStack_450 = uStack_3f8;
    uStack_468 = uStack_410;
    uStack_460 = uStack_408;
    uVar3 = uStack_3f0;
    if (DAT_0f7327a8 == '\0') {
      iVar7 = func_0x04108328(&DAT_0f7327a8);
      uVar3 = auStack_448._0_8_;
      if (iVar7 != 0) {
        func_0x0daa7de0();
        func_0x0410844d(&DAT_0f7327a8);
        uVar3 = auStack_448._0_8_;
      }
    }
    auStack_448._0_8_ = uVar3;
    uVar14 = uStack_468;
    auStack_448._8_8_ = 0x28a5a83e00000001;
    if ((DAT_0f732788 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732788), iVar7 != 0)) {
      func_0x0daa7cd0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
      func_0x0410844d(&DAT_0f732788);
    }
    plVar13 = (long *)(*(long *)(uVar14 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar14 + 0x20) - *(long *)(uVar14 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f732708 + 4)) * 8);
    do {
      lVar23 = *plVar13;
      if (lVar23 == -1) goto LAB_0da60660;
      plVar13 = (long *)(*(long *)(uVar14 + 0x30) + lVar23 * 0x18);
    } while (*(uint *)(*(long *)(uVar14 + 0x30) + 8 + lVar23 * 0x18) != *(uint *)(_DAT_0f732708 + 4)
            );
    if (plVar13 == *(long **)(uVar14 + 0x38)) {
LAB_0da60660:
      auStack_628 = (undefined1  [8])&DAT_0f732708;
    }
    else {
      auStack_628 = (undefined1  [8])plVar13[2];
    }
    lStack_620 = uVar14 + 0x18;
    func_0x0ed621a0(auStack_628,auStack_448._12_4_);
    auStack_628._0_2_ = 1;
    lStack_620 = (long)&uStack_460;
    puStack_618 = (undefined *)CONCAT44(puStack_618._4_4_,auStack_448._12_4_);
    uStack_610 = (code *)0x0;
    pcStack_608 = (code *)0x0;
    uStack_600 = 0;
    lStack_5f8 = 0;
    lStack_5f0 = 0;
    uStack_5e8 = 0x14;
    uStack_5e7 = 0x6669746e656469;
    uStack_5e0 = 0x69;
    uStack_5df = 0x7265;
    uStack_5dd = 0;
    lStack_5d0 = 0;
    uStack_5c8 = 0;
    lStack_5c0 = 0;
    lStack_5b8 = 0;
    lStack_5b0 = 0;
    lStack_5a8 = 0;
    uStack_5a0 = 0x3f600000;
    func_0x048afb10(&lStack_5d0,8);
    lStack_578 = 0;
    lStack_570 = 0;
    lStack_588 = 0;
    lStack_580 = 0;
    lStack_598 = 0;
    lStack_590 = 0;
    uStack_568 = 0xff00;
    uStack_564 = uStack_564 & 0xffffff00;
    uStack_560 = uStack_560 & 0xffffff00;
    uStack_55c = 0;
    puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar12 = &UNK_0ef44b00;
    if (uStack_610 != (code *)0x0) {
      lVar23 = *(long *)uStack_610;
      uStack_610 = (code *)puVar12;
      (**(code **)(lVar23 + 8))();
      puVar12 = (undefined8 *)uStack_610;
    }
    uStack_610 = (code *)puVar12;
    puStack_6a8 = (undefined *)CONCAT44(puStack_6a8._4_4_,puStack_618._0_4_);
    plStack_6a0 = (long *)0x0;
    plStack_698 = (long *)((ulong)plStack_698 & 0xffffffff00000000);
    pcStack_690 = (code *)0x1;
    uStack_688 = 0;
    puStack_680 = &UNK_048b3f30;
    puStack_678 = &SUB_048b06d0;
    puStack_670 = &SUB_048b2190;
    puStack_668 = &UNK_0daa8e30;
    puStack_660 = &UNK_0daa8ff0;
    uStack_658 = (long *)((ulong)uStack_658._4_4_ << 0x20);
    lStack_650 = 0;
    plStack_648 = (long *)0x0;
    func_0x048b05a0(lStack_620,&puStack_6a8);
    plVar13 = plStack_648;
    if (plStack_648 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_648 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_648 + 0x10))(plStack_648);
        func_0x0412c2d0(plVar13);
      }
    }
    lVar23 = lStack_620;
    if ((DAT_0f550a20 == '\0') && (iVar7 = func_0x04108328(&DAT_0f550a20), iVar7 != 0)) {
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    puStack_6a8 = (undefined *)CONCAT44(puStack_6a8._4_4_,_DAT_0f550a0c);
    plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (plVar13 == (long *)0x0) {
      func_0x0eec74c0(0xd0,0);
    }
    pcVar22 = pcStack_608;
    puVar12 = (undefined8 *)uStack_610;
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&UNK_0ef439d0;
    plStack_6a0 = plVar13 + 3;
    uStack_610 = (code *)0x0;
    pcStack_608 = (code *)0x0;
    plVar13[3] = (long)puVar12;
    plVar13[4] = (long)pcVar22;
    plVar13[7] = lStack_5f0;
    plVar13[5] = uStack_600;
    plVar13[6] = lStack_5f8;
    uStack_600 = 0;
    lStack_5f8 = 0;
    lStack_5f0 = 0;
    plVar13[10] = (long)plStack_5d8;
    plVar13[8] = CONCAT71(uStack_5e7,uStack_5e8);
    plVar13[9] = CONCAT44(uStack_5dc,CONCAT13(uStack_5dd,CONCAT21(uStack_5df,uStack_5e0)));
    uStack_5e8 = 0;
    uStack_5e7 = 0;
    uStack_5e0 = 0;
    uStack_5df = 0;
    uStack_5dd = 0;
    uStack_5dc = 0;
    plStack_5d8 = (long *)0x0;
    plVar13[0xb] = lStack_5d0;
    plVar13[0xc] = uStack_5c8;
    plVar13[0xd] = lStack_5c0;
    lStack_5d0 = 0;
    uStack_5c8 = 0;
    lStack_5c0 = 0;
    plVar13[0xe] = lStack_5b8;
    plVar13[0xf] = lStack_5b0;
    plVar13[0x10] = lStack_5a8;
    lStack_5b8 = 0;
    lStack_5b0 = 0;
    lStack_5a8 = 0;
    *(undefined4 *)(plVar13 + 0x11) = uStack_5a0;
    plVar13[0x12] = lStack_598;
    plVar13[0x13] = lStack_590;
    plVar13[0x14] = lStack_588;
    lStack_598 = 0;
    lStack_590 = 0;
    lStack_588 = 0;
    plVar13[0x17] = lStack_570;
    plVar13[0x15] = lStack_580;
    plVar13[0x16] = lStack_578;
    lStack_580 = 0;
    lStack_578 = 0;
    lStack_570 = 0;
    *(ulong *)((long)plVar13 + 0xc5) = CONCAT17(uStack_55c,CONCAT43(uStack_560,uStack_564._1_3_));
    plVar13[0x18] = CONCAT44(uStack_564,CONCAT22(uStack_566,uStack_568));
    bStack_4d8 = 0;
    uStack_4d7 = 0;
    uStack_4d0 = 0;
    uStack_4cf = 0;
    uStack_4cd = 0;
    plStack_698 = plVar13;
    func_0x048afd20(lVar23,&puStack_6a8);
    plVar13 = plStack_698;
    if (plStack_698 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_698 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plStack_698 + 0x10))(plStack_698);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar13 = (long *)CONCAT53(uStack_4cd,CONCAT21(uStack_4cf,uStack_4d0));
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    uVar14 = uStack_468;
    lVar20 = *(long *)(lVar23 + 0x10);
    iVar7 = *(int *)(lVar23 + 0x1c);
    if (iVar7 == 2) {
      piVar17 = *(int **)(*(long *)(lVar20 + 0x78) + 0x60);
      iVar7 = *piVar17;
      while (iVar7 != *(int *)(lVar23 + 0x18)) {
        piVar17 = piVar17 + 0x16;
        iVar7 = *piVar17;
      }
      for (; *(long *)(piVar17 + 0xc) != *(long *)(lVar23 + 8); piVar17 = *(int **)(piVar17 + 0xe))
      {
      }
LAB_0da60b3a:
      piVar17[4] = piVar17[4] | auStack_628._0_4_ << 0x10;
    }
    else {
      if (iVar7 == 1) {
        piVar17 = *(int **)(*(long *)(lVar20 + 0x78) + 0x48);
        iVar7 = *piVar17;
        while (iVar7 != *(int *)(lVar23 + 0x18)) {
          piVar17 = piVar17 + 0x1a;
          iVar7 = *piVar17;
        }
        goto LAB_0da60b3a;
      }
      if (iVar7 == 0) {
        *(uint *)(lVar20 + 0x18) = *(uint *)(lVar20 + 0x18) | auStack_628._0_4_ << 0x10;
      }
    }
    uVar5 = auStack_448._8_4_;
    uVar6 = auStack_448._12_4_;
    FUN_048b0bc0(&uStack_610);
    uStack_688 = 0;
    lStack_640 = 0;
    lStack_638 = 0;
    lStack_650 = 0;
    plStack_648 = (long *)0x0;
    puStack_660 = (undefined *)0x0;
    uStack_658 = (long *)0x0;
    puStack_670 = (undefined1 *)0x0;
    puStack_668 = (undefined *)0x0;
    puStack_680 = (undefined *)0x0;
    puStack_678 = (undefined1 *)0x0;
    lStack_630 = 0;
    plStack_6a0 = (long *)0xffffffffffffffff;
    plStack_698 = (long *)0x0;
    pcStack_690 = (code *)0xff;
    puStack_6a8 = &UNK_0f4e3c70;
    func_0x041679a0(&uStack_688);
    puStack_680 = (undefined *)func_0x041681f0(&uStack_688,0xf547a30);
    puStack_678 = (undefined1 *)func_0x041681f0(&uStack_688,0xf547770);
    puStack_670 = (undefined1 *)0x0;
    puStack_668 = (undefined *)0x0;
    puStack_660 = (undefined *)0x0;
    uStack_658 = (long *)0x0;
    lStack_650 = 0;
    plStack_648 = (long *)0x0;
    lStack_640 = 0;
    lStack_638 = 0;
    lStack_630 = 0;
    bStack_4d8 = 0x12;
    uStack_4d7 = 0x775c3a2b775c5e;
    uStack_4d0 = 0x2b;
    uStack_4cf = 0x24;
    func_0x0ed60210(&puStack_6a8,&bStack_4d8,0);
    uStack_610 = (code *)CONCAT71(uStack_610._1_7_,pcStack_690._0_1_);
    puStack_618 = (undefined *)plStack_698;
    lStack_620 = (long)plStack_6a0;
    auStack_628 = (undefined1  [8])&UNK_0f4e3c70;
    func_0x04167a20(&pcStack_608,&uStack_688);
    uStack_600 = (long)puStack_680;
    lStack_5f8 = (long)puStack_678;
    lStack_5f0 = (long)puStack_670;
    uStack_5e8 = SUB81(puStack_668,0);
    uStack_5e7 = (undefined7)((ulong)puStack_668 >> 8);
    uStack_5e0 = SUB81(puStack_660,0);
    uStack_5df = (undefined2)((ulong)puStack_660 >> 8);
    uStack_5dd = (undefined1)((ulong)puStack_660 >> 0x18);
    uStack_5dc = (undefined4)((ulong)puStack_660 >> 0x20);
    plStack_5d8 = uStack_658;
    if (uStack_658 != (long *)0x0) {
      LOCK();
      uStack_658[1] = uStack_658[1] + 1;
      UNLOCK();
    }
    lStack_5d0 = lStack_650;
    if (((ulong)plStack_648 & 1) == 0) {
      lStack_5b8 = lStack_638;
      uStack_5c8 = (ulong)plStack_648;
      lStack_5c0 = lStack_640;
    }
    else {
      FUN_0412e5e0(&uStack_5c8,lStack_638,lStack_640);
    }
    lStack_5b0 = lStack_630;
    if (uVar5 == 4) {
      if ((DAT_0f732788 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732788), iVar7 != 0)) {
        func_0x0daa7cd0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
        func_0x0410844d(&DAT_0f732788);
      }
      plVar13 = (long *)(*(long *)(uVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar14 + 0x20) - *(long *)(uVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f732708 + 4)) * 8);
      do {
        lVar23 = *plVar13;
        if (lVar23 == -1) goto LAB_0da60e09;
        plVar13 = (long *)(*(long *)(uVar14 + 0x30) + lVar23 * 0x18);
      } while (*(uint *)(*(long *)(uVar14 + 0x30) + 8 + lVar23 * 0x18) !=
               *(uint *)(_DAT_0f732708 + 4));
      if (plVar13 == *(long **)(uVar14 + 0x38)) {
LAB_0da60e09:
        puVar9 = &DAT_0f732708;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      uVar14 = func_0x048b1040(uVar14 + 0x18,puVar9,uVar6,1);
      if (uVar14 == 0) {
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        func_0x048b10d0(&uStack_3a8);
        uVar15 = *(ulong *)(uStack_3a8 + 0x38);
        uVar14 = uStack_3a8;
        if (uVar15 == 0) goto LAB_0da60eef;
LAB_0da60f14:
        do {
          uVar14 = uVar15;
          uVar15 = *(ulong *)(uVar14 + 0x38);
          if (*(ulong *)(uVar14 + 0x38) == 0) {
            uStack_3a8 = 0;
            uStack_3a0 = 0;
            func_0x048b10d0(&uStack_3a8);
            uVar15 = uStack_3a8;
          }
        } while (uVar15 != 0);
      }
      else {
        uVar15 = *(ulong *)(uVar14 + 0x38);
        if (*(ulong *)(uVar14 + 0x38) != 0) goto LAB_0da60f14;
LAB_0da60eef:
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        func_0x048b10d0(&uStack_3a8);
        uVar15 = uStack_3a8;
        if (uStack_3a8 != 0) goto LAB_0da60f14;
      }
      lVar23 = *(long *)(uVar14 + 0x48);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
LAB_0da60f75:
      *(undefined1 *)(puVar12 + 3) = (undefined1)uStack_610;
      puVar12[1] = lStack_620;
      puVar12[2] = puStack_618;
      *puVar12 = &UNK_0f4e3c70;
      func_0x04167a20(puVar12 + 4,&pcStack_608);
      puVar12[5] = uStack_600;
      puVar12[6] = lStack_5f8;
      puVar12[7] = lStack_5f0;
      puVar12[8] = CONCAT71(uStack_5e7,uStack_5e8);
      puVar12[9] = CONCAT44(uStack_5dc,CONCAT13(uStack_5dd,CONCAT21(uStack_5df,uStack_5e0)));
      puVar12[10] = plStack_5d8;
      uStack_5e0 = 0;
      uStack_5df = 0;
      uStack_5dd = 0;
      uStack_5dc = 0;
      plStack_5d8 = (long *)0x0;
      puVar12[0xb] = lStack_5d0;
      puVar12[0xe] = lStack_5b8;
      puVar12[0xc] = uStack_5c8;
      puVar12[0xd] = lStack_5c0;
      uStack_5c8 = 0;
      lStack_5c0 = 0;
      lStack_5b8 = 0;
      puVar12[0xf] = lStack_5b0;
      plVar13 = *(long **)(lVar23 + 8);
      *(undefined8 **)(lVar23 + 8) = puVar12;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x28))();
      }
    }
    else if (uVar5 == 1) {
      if ((DAT_0f732788 == '\0') && (iVar7 = func_0x04108328(&DAT_0f732788), iVar7 != 0)) {
        func_0x0daa7cd0();
        func_0x0eee2f40(&UNK_048ae800,&DAT_0f732708,0xf53dab8);
        func_0x0410844d(&DAT_0f732788);
      }
      plVar13 = (long *)(*(long *)(uVar14 + 0x18) +
                        (ulong)((int)((ulong)(*(long *)(uVar14 + 0x20) - *(long *)(uVar14 + 0x18))
                                     >> 3) - 1U & *(uint *)(_DAT_0f732708 + 4)) * 8);
      do {
        lVar23 = *plVar13;
        if (lVar23 == -1) goto LAB_0da60d89;
        plVar13 = (long *)(*(long *)(uVar14 + 0x30) + lVar23 * 0x18);
      } while (*(uint *)(*(long *)(uVar14 + 0x30) + 8 + lVar23 * 0x18) !=
               *(uint *)(_DAT_0f732708 + 4));
      if (plVar13 == *(long **)(uVar14 + 0x38)) {
LAB_0da60d89:
        puVar9 = &DAT_0f732708;
      }
      else {
        puVar9 = (undefined *)plVar13[2];
      }
      uVar14 = func_0x048b0c90(uVar14 + 0x18,puVar9,uVar6,1);
      if (uVar14 == 0) {
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        func_0x048b0d20(&uStack_3a8);
        uVar14 = uStack_3a8;
      }
      lVar23 = *(long *)(uVar14 + 0x58);
      puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
      if (puVar12 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x80,0);
      }
      goto LAB_0da60f75;
    }
    auStack_628 = (undefined1  [8])&UNK_0f4e3c70;
    if ((uStack_5c8 & 1) != 0) {
      thunk_FUN_0ee326a0(lStack_5b8,uStack_5c8 & 0xfffffffffffffffe);
    }
    plVar13 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_5d8 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&pcStack_608);
    if ((bStack_4d8 & 1) == 0) {
      if (((ulong)plStack_648 & 1) == 0) goto LAB_0da610a9;
LAB_0da610d9:
      puStack_6a8 = &UNK_0f4e3c70;
      thunk_FUN_0ee326a0(lStack_638,(ulong)plStack_648 & 0xfffffffffffffffe);
      plVar13 = uStack_658;
    }
    else {
      thunk_FUN_0ee326a0(puStack_4c8,CONCAT71(uStack_4d7,bStack_4d8) & 0xfffffffffffffffe);
      if (((ulong)plStack_648 & 1) != 0) goto LAB_0da610d9;
LAB_0da610a9:
      puStack_6a8 = &UNK_0f4e3c70;
      plVar13 = uStack_658;
    }
    uStack_658 = plVar13;
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    func_0x04167a40(&uStack_688);
    if (((ulong)puStack_528 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_528 & 0xff00ffffffffffff) - 8);
    }
    puStack_528 = (undefined *)0x0;
    if (((ulong)puStack_530 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)puStack_530 & 0xff00ffffffffffff) - 8);
    }
    puStack_530 = (undefined *)0x0;
    if ((auStack_558[0] & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_548,auStack_558._0_8_ & 0xfffffffffffffffe);
    }
    if ((auStack_360._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_360._8_8_ & 0xff00ffffffffffff) - 8);
    }
    auStack_360._8_8_ = 0;
    if ((auStack_360._0_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_360._0_8_ & 0xff00ffffffffffff) - 8);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auStack_360._8_8_;
    auStack_360 = auVar4 << 0x40;
    if ((uStack_328 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_328 & 0xff00ffffffffffff) - 8);
    }
    uStack_328 = 0;
    if ((uStack_2e8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2e8 & 0xff00ffffffffffff) - 8);
    }
    lVar23 = func_0x0d2a6f90(lStack_330);
    if (*(int *)(lVar23 + 0x60) != -0x2b3da790) goto LAB_0da612c5;
LAB_0da61283:
    lVar23 = *(long *)(lVar23 + 0x68);
    if (lVar23 == 0) goto LAB_0da612c5;
    bVar24 = (*(byte *)(lVar23 + 8) & 1) != 0;
    lVar20 = lVar23 + 9;
    if (bVar24) {
      lVar20 = *(long *)(lVar23 + 0x18);
    }
    uVar14 = (ulong)(*(byte *)(lVar23 + 8) >> 1);
    if (bVar24) {
      uVar14 = *(ulong *)(lVar23 + 0x10);
    }
    func_0x0daa91c0(&uStack_468,param_1,lVar20,uVar14);
  }
  else {
    puVar9 = (undefined *)plVar13[2];
    if (*(int *)(puVar9 + 0x60) == -0x2b3da790) goto LAB_0da6001b;
LAB_0da60072:
    func_0x0daa82d0(&uStack_410,param_1,&UNK_011b14a2,0x19);
    if ((char)puStack_3e0 == '\0') goto LAB_0da60098;
LAB_0da60058:
    lVar23 = func_0x0d2a6f90(lVar23);
    if (*(int *)(lVar23 + 0x60) == -0x2b3da790) goto LAB_0da61283;
LAB_0da612c5:
    func_0x0daa91c0(&uStack_468,param_1,&UNK_014dbf5d,0x13);
  }
  if ((char)uStack_438 != '\0') {
    return;
  }
  uStack_428 = 0x10028001a0001;
  uStack_430 = 0;
  uStack_520 = 0;
  uStack_518 = 0x6d636f44696f5014;
  uStack_510 = 0x746e65;
  uStack_508 = 0;
  uStack_500 = 0x1402;
  uStack_4f8 = 0x10028001a0001;
  puStack_4f0 = &UNK_01254d89;
  uStack_420 = 0;
  puStack_4e8 = &UNK_01254d89;
  uStack_418 = 0;
  lVar20 = uStack_468 + 0x18;
  lVar23 = func_0x0d2a6f90(lVar20);
  pbVar19 = *(byte **)(uStack_468 + 0x58);
  for (pbVar10 = *(byte **)(uStack_468 + 0x50); pbVar10 != pbVar19; pbVar10 = pbVar10 + 0x38) {
    bVar2 = *pbVar10;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0da6141a;
    }
    else if (*(long *)(pbVar10 + 8) == 0x24) {
LAB_0da6141a:
      if ((bVar2 & 1) == 0) {
        pbVar21 = pbVar10 + 1;
      }
      else {
        pbVar21 = *(byte **)(pbVar10 + 0x10);
      }
      iVar7 = func_0x0eee3000(&DAT_014518a9,pbVar21,0x24);
      if (iVar7 == 0) break;
    }
  }
  if (pbVar10 == pbVar19) {
LAB_0da6144a:
    if (auStack_448._8_4_ == 0) {
      if ((*(int *)(lVar23 + 0x60) != -0x2b3da790) || (*(long *)(lVar23 + 0x68) == 0))
      goto LAB_0da614c6;
      lVar23 = *(long *)(lVar23 + 0x68) + 0x38;
    }
    else {
      auVar11 = (undefined1  [8])func_0x048b0c90(lVar20,lVar23,auStack_448._12_4_,1);
      if (auVar11 == (undefined1  [8])0x0) {
        _auStack_628 = ZEXT816(0);
        func_0x048b0d20(auStack_628);
        auVar11 = auStack_628;
        if (auStack_628 == (undefined1  [8])0x0) goto LAB_0da614c6;
      }
      if ((*(int *)((long)auVar11 + 0x50) == -0x45dcb126) && (*(long *)((long)auVar11 + 0x58) != 0))
      {
        lVar23 = *(long *)((long)auVar11 + 0x58) + 0x40;
      }
      else {
LAB_0da614c6:
        lVar23 = 0;
      }
    }
    puStack_6a8 = (undefined *)0x0;
    plStack_698 = (long *)&UNK_048b4ab0;
    pcStack_690 = (code *)&UNK_048b49f0;
    uStack_688 = CONCAT35(uStack_688._5_3_,0x1d33bd9c5);
    puVar16 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
    if (puVar16 == (ulong *)0x0) {
      func_0x0eec74c0(0x38,0);
    }
    puVar16[2] = uStack_508;
    *puVar16 = uStack_518;
    puVar16[1] = uStack_510;
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    *(undefined2 *)(puVar16 + 3) = uStack_500;
    puVar16[4] = uStack_4f8;
    puVar16[5] = (ulong)puStack_4f0;
    puStack_4f0 = (undefined *)0x0;
    puVar16[6] = (ulong)puStack_4e8;
    puStack_4e8 = (undefined *)0x0;
    uStack_610 = (code *)&UNK_048b4ab0;
    pcStack_608 = (code *)&UNK_048b49f0;
    uStack_600 = CONCAT35(uStack_600._5_3_,0x1d33bd9c5);
    puStack_6a8 = (undefined *)0x0;
    lStack_620 = (long)puVar16;
    auStack_628 = (undefined1  [8])&UNK_048b46e0;
    puStack_400 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puStack_400 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar3 = _UNK_014518c1;
    uStack_410 = 0x29;
    uStack_408 = 0x24;
    puStack_400[2] = _DAT_014518b9;
    puStack_400[3] = uVar3;
    uVar3 = _UNK_014518b1;
    *puStack_400 = _DAT_014518a9;
    puStack_400[1] = uVar3;
    *(undefined4 *)(puStack_400 + 4) = 0x5d797472;
    *(undefined1 *)((long)puStack_400 + 0x24) = 0;
    lVar23 = func_0x048b5060(lVar23,&uStack_410);
    *(undefined **)(lVar23 + 0x20) = &UNK_048b46e0;
    pcVar22 = (code *)&UNK_048b49f0;
    if ((undefined1 *)(lVar23 + 0x20) != auStack_628) {
      puVar12 = (undefined8 *)(lVar23 + 0x28);
      if (*(code **)(lVar23 + 0x40) == (code *)0x0) {
LAB_0da616a1:
        lVar20 = lStack_620;
        lStack_620 = 0;
        *puVar12 = lVar20;
      }
      else {
        (**(code **)(lVar23 + 0x40))(puVar12);
        if (uStack_600._4_1_ != '\0') {
          if (uStack_600._4_1_ != '\x02') goto LAB_0da616a1;
          (*uStack_610)(5,auStack_628 + 8,puVar12);
        }
      }
      *(code **)(lVar23 + 0x38) = uStack_610;
      *(code **)(lVar23 + 0x40) = pcStack_608;
      *(undefined4 *)(lVar23 + 0x48) = (undefined4)uStack_600;
      *(char *)(lVar23 + 0x4c) = uStack_600._4_1_;
      pcVar22 = pcStack_608;
    }
    if ((uStack_410 & 1) != 0) {
      thunk_FUN_0ee326a0(puStack_400,uStack_410 & 0xfffffffffffffffe);
      pcVar22 = pcStack_608;
    }
    if (pcVar22 != (code *)0x0) {
      (*pcVar22)(auStack_628 + 8);
    }
    if (pcStack_690 != (code *)0x0) {
      (*pcStack_690)(&puStack_6a8);
    }
  }
  else {
    iVar7 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar8 = func_0x04108328(&DAT_0f550768), iVar8 != 0)) {
      func_0x048b46f0(&DAT_0f550750);
      func_0x0410844d(&DAT_0f550768);
    }
    if (iVar7 == _DAT_0f550754) goto LAB_0da6144a;
  }
  uStack_f8 = uStack_438;
  uStack_108 = auStack_448._0_8_;
  uStack_100 = auStack_448._8_8_;
  puStack_118 = puStack_458;
  uStack_110 = uStack_450;
  uStack_128 = uStack_468;
  uStack_120 = uStack_460;
  func_0x0daa9ac0(auStack_628,&uStack_128,&UNK_011ea907,0xb,1);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f491270;
  if (uStack_610 != (code *)0x0) {
    lVar23 = *(long *)uStack_610;
    uStack_610 = (code *)plVar13;
    (**(code **)(lVar23 + 8))();
    plVar13 = (long *)uStack_610;
  }
  uStack_610 = (code *)plVar13;
  puStack_6a8 = (undefined *)CONCAT44(puStack_6a8._4_4_,puStack_618._0_4_);
  plStack_6a0 = (long *)0x0;
  plStack_698 = (long *)((ulong)plStack_698 & 0xffffffff00000000);
  pcStack_690 = (code *)0x1;
  uStack_688 = 0;
  puStack_680 = &UNK_0daaa1f0;
  puStack_678 = &SUB_048b06d0;
  puStack_670 = &UNK_0daa7c10;
  puStack_668 = &UNK_0daaa2b0;
  puStack_660 = &UNK_0daaa470;
  uStack_658 = (long *)((ulong)uStack_658 & 0xffffffff00000000);
  lStack_650 = 0;
  plStack_648 = (long *)0x0;
  func_0x048b05a0(lStack_620,&puStack_6a8);
  plVar13 = plStack_648;
  if (plStack_648 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_648 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_648 + 0x10))(plStack_648);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa9cc0(auStack_628);
  uStack_1b8 = (undefined1)uStack_f8;
  uStack_1c8 = uStack_108;
  uStack_1c0 = uStack_100;
  puStack_1d8 = puStack_118;
  uStack_1d0 = uStack_110;
  uStack_1e8 = uStack_128;
  uStack_1e0 = uStack_120;
  FUN_048b0bc0(&uStack_610);
  func_0x0daa9700(auStack_628,uStack_1e8 + 0x18);
  if (uStack_610._4_4_ == 2) {
    piVar17 = *(int **)(*(long *)(puStack_618 + 0x78) + 0x60);
    iVar7 = *piVar17;
    while (iVar7 != (int)uStack_610) {
      piVar17 = piVar17 + 0x16;
      iVar7 = *piVar17;
    }
    lVar23 = *(long *)(piVar17 + 0xc);
    while (lVar23 != lStack_620) {
      piVar17 = *(int **)(piVar17 + 0xe);
      lVar23 = *(long *)(piVar17 + 0xc);
    }
LAB_0da6195f:
    *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
  }
  else {
    if (uStack_610._4_4_ == 1) {
      piVar17 = *(int **)(*(long *)(puStack_618 + 0x78) + 0x48);
      iVar7 = *piVar17;
      while (iVar7 != (int)uStack_610) {
        piVar17 = piVar17 + 0x1a;
        iVar7 = *piVar17;
      }
      goto LAB_0da6195f;
    }
    if (uStack_610._4_4_ == 0) {
      *(uint *)(puStack_618 + 0x18) = *(uint *)(puStack_618 + 0x18) | 0x40000;
    }
  }
  func_0x0daa9ac0(auStack_628,&uStack_1e8,&UNK_014b95b7,7,0x10);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f012438;
  if (uStack_610 != (code *)0x0) {
    lVar23 = *(long *)uStack_610;
    uStack_610 = (code *)plVar13;
    (**(code **)(lVar23 + 8))();
    plVar13 = (long *)uStack_610;
  }
  uStack_610 = (code *)plVar13;
  puStack_6a8 = (undefined *)CONCAT44(puStack_6a8._4_4_,puStack_618._0_4_);
  plStack_6a0 = (long *)0x0;
  plStack_698 = (long *)((ulong)plStack_698 & 0xffffffff00000000);
  pcStack_690 = (code *)0x1;
  uStack_688 = 0;
  puStack_680 = &UNK_05fc5e00;
  puStack_678 = &SUB_048b06d0;
  puStack_670 = &UNK_05dcda00;
  puStack_668 = &UNK_0daaa8e0;
  puStack_660 = &UNK_0daaaa40;
  uStack_658 = (long *)((ulong)uStack_658 & 0xffffffff00000000);
  lStack_650 = 0;
  plStack_648 = (long *)0x0;
  func_0x048b05a0(lStack_620,&puStack_6a8);
  plVar13 = plStack_648;
  if (plStack_648 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_648 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_648 + 0x10))(plStack_648);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa9cc0(auStack_628);
  uStack_38 = uStack_1b8;
  uStack_48 = uStack_1c8;
  uStack_40 = uStack_1c0;
  puStack_58 = puStack_1d8;
  uStack_50 = uStack_1d0;
  uStack_68 = uStack_1e8;
  uStack_60 = uStack_1e0;
  FUN_048b0bc0(&uStack_610);
  uStack_1a8 = uStack_68;
  uStack_1a0 = uStack_60;
  puStack_198 = puStack_58;
  uStack_190 = uStack_50;
  uStack_188 = uStack_48;
  uStack_180 = uStack_40;
  uStack_178 = CONCAT71(uStack_37,uStack_38);
  func_0x0daa9700(auStack_628,uStack_68 + 0x18);
  if (uStack_610._4_4_ == 2) {
    piVar17 = *(int **)(*(long *)(puStack_618 + 0x78) + 0x60);
    iVar7 = *piVar17;
    while (iVar7 != (int)uStack_610) {
      piVar17 = piVar17 + 0x16;
      iVar7 = *piVar17;
    }
    lVar23 = *(long *)(piVar17 + 0xc);
    while (lVar23 != lStack_620) {
      piVar17 = *(int **)(piVar17 + 0xe);
      lVar23 = *(long *)(piVar17 + 0xc);
    }
LAB_0da61bff:
    *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
  }
  else {
    if (uStack_610._4_4_ == 1) {
      piVar17 = *(int **)(*(long *)(puStack_618 + 0x78) + 0x48);
      iVar7 = *piVar17;
      while (iVar7 != (int)uStack_610) {
        piVar17 = piVar17 + 0x1a;
        iVar7 = *piVar17;
      }
      goto LAB_0da61bff;
    }
    if (uStack_610._4_4_ == 0) {
      *(uint *)(puStack_618 + 0x18) = *(uint *)(puStack_618 + 0x18) | 0x40000;
    }
  }
  func_0x0daa9ac0(auStack_628,&uStack_1a8,&UNK_01471f55,0xf,0x10);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0f012438;
  if (uStack_610 != (code *)0x0) {
    lVar23 = *(long *)uStack_610;
    uStack_610 = (code *)plVar13;
    (**(code **)(lVar23 + 8))();
    plVar13 = (long *)uStack_610;
  }
  uStack_610 = (code *)plVar13;
  puStack_6a8 = (undefined *)CONCAT44(puStack_6a8._4_4_,puStack_618._0_4_);
  plStack_6a0 = (long *)0x0;
  plStack_698 = (long *)((ulong)plStack_698 & 0xffffffff00000000);
  pcStack_690 = (code *)0x1;
  uStack_688 = 0;
  puStack_680 = &UNK_05fc5e00;
  puStack_678 = &SUB_048b06d0;
  puStack_670 = &UNK_05dcda00;
  puStack_668 = &UNK_0daaac20;
  puStack_660 = &UNK_0daaad80;
  uStack_658 = (long *)((ulong)uStack_658 & 0xffffffff00000000);
  lStack_650 = 0;
  plStack_648 = (long *)0x0;
  func_0x048b05a0(lStack_620,&puStack_6a8);
  plVar13 = plStack_648;
  if (plStack_648 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_648 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_648 + 0x10))(plStack_648);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa9cc0(auStack_628);
  uStack_2f8 = (undefined1)uStack_178;
  uStack_308 = uStack_188;
  uStack_300 = uStack_180;
  puStack_318 = puStack_198;
  uStack_310 = uStack_190;
  uStack_328 = uStack_1a8;
  uStack_320 = uStack_1a0;
  FUN_048b0bc0(&uStack_610);
  uStack_2e8 = uStack_328;
  uStack_2e0 = uStack_320;
  puStack_2d8 = puStack_318;
  uStack_2d0 = uStack_310;
  uStack_2c8 = uStack_308;
  uStack_2c0 = uStack_300;
  uStack_2b8 = CONCAT71(uStack_2f7,uStack_2f8);
  func_0x0daa9ac0(auStack_628,&uStack_2e8,&UNK_01222d0e,6,1);
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&UNK_0ef474e0;
  if (uStack_610 != (code *)0x0) {
    lVar23 = *(long *)uStack_610;
    uStack_610 = (code *)plVar13;
    (**(code **)(lVar23 + 8))();
    plVar13 = (long *)uStack_610;
  }
  uStack_610 = (code *)plVar13;
  puStack_6a8 = (undefined *)CONCAT44(puStack_6a8._4_4_,puStack_618._0_4_);
  plStack_6a0 = (long *)0x0;
  plStack_698 = (long *)((ulong)plStack_698 & 0xffffffff00000000);
  pcStack_690 = (code *)0x1;
  uStack_688 = 0;
  puStack_680 = &UNK_049119f0;
  puStack_678 = &SUB_048b06d0;
  puStack_670 = &UNK_0490fc00;
  puStack_668 = &UNK_0daaaf60;
  puStack_660 = &UNK_0daab160;
  uStack_658 = (long *)((ulong)uStack_658 & 0xffffffff00000000);
  lStack_650 = 0;
  plStack_648 = (long *)0x0;
  func_0x048b05a0(lStack_620,&puStack_6a8);
  plVar13 = plStack_648;
  if (plStack_648 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_648 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_648 + 0x10))(plStack_648);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa9cc0(auStack_628);
  uStack_378 = (undefined1)uStack_2b8;
  uStack_388 = uStack_2c8;
  uStack_380 = uStack_2c0;
  puStack_398 = puStack_2d8;
  uStack_390 = uStack_2d0;
  uStack_3a8 = uStack_2e8;
  uStack_3a0 = uStack_2e0;
  FUN_048b0bc0(&uStack_610);
  uStack_688 = 0;
  lStack_640 = 0;
  lStack_638 = 0;
  lStack_650 = 0;
  plStack_648 = (long *)0x0;
  puStack_660 = (undefined *)0x0;
  uStack_658 = (long *)0x0;
  puStack_670 = (undefined1 *)0x0;
  puStack_668 = (undefined *)0x0;
  puStack_680 = (undefined *)0x0;
  puStack_678 = (undefined1 *)0x0;
  lStack_630 = 0;
  plStack_6a0 = (long *)0xffffffffffffffff;
  plStack_698 = (long *)0x0;
  pcStack_690 = (code *)0xff;
  puStack_6a8 = &UNK_0f4e3c70;
  func_0x041679a0(&uStack_688);
  puStack_680 = (undefined *)func_0x041681f0(&uStack_688,0xf547a30);
  puStack_678 = (undefined1 *)func_0x041681f0(&uStack_688,0xf547770);
  puStack_670 = (undefined1 *)0x0;
  puStack_668 = (undefined *)0x0;
  puStack_660 = (undefined *)0x0;
  uStack_658 = (long *)0x0;
  lStack_650 = 0;
  plStack_648 = (long *)0x0;
  lStack_640 = 0;
  lStack_638 = 0;
  lStack_630 = 0;
  bStack_480 = 0x12;
  uStack_47f = 0x775c3a2b775c5e;
  uStack_478 = 0x2b;
  uStack_477 = 0x24;
  func_0x0ed60210(&puStack_6a8,&bStack_480,0);
  uStack_250 = pcStack_690._0_1_;
  lStack_260 = (long)plStack_6a0;
  lStack_258 = (long)plStack_698;
  puStack_268 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_248,&uStack_688);
  lStack_240 = (long)puStack_680;
  lStack_238 = (long)puStack_678;
  lStack_230 = (long)puStack_670;
  lStack_228 = (long)puStack_668;
  lStack_220 = (long)puStack_660;
  plStack_218 = uStack_658;
  if (uStack_658 != (long *)0x0) {
    LOCK();
    uStack_658[1] = uStack_658[1] + 1;
    UNLOCK();
  }
  lStack_210 = lStack_650;
  if (((ulong)plStack_648 & 1) == 0) {
    lStack_1f8 = lStack_638;
    uStack_208 = (ulong)plStack_648;
    lStack_200 = lStack_640;
  }
  else {
    FUN_0412e5e0(&uStack_208,lStack_638,lStack_640);
  }
  lStack_1f0 = lStack_630;
  uStack_2a0 = 0xffffffffffffffff;
  uStack_298 = 0;
  uStack_290 = 0xff;
  puStack_2a8 = &UNK_0f4e3cf0;
  uStack_288 = 0;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(0x98,0);
  }
  plVar13[1] = 0;
  plVar13[2] = 0;
  *plVar13 = (long)&UNK_0f0fb8c0;
  plVar13[4] = lStack_260;
  plVar13[5] = lStack_258;
  *(undefined1 *)(plVar13 + 6) = uStack_250;
  plVar13[3] = (long)&UNK_0f4e3c70;
  func_0x04167a20(plVar13 + 7,auStack_248);
  plVar13[8] = lStack_240;
  plVar13[9] = lStack_238;
  plVar13[10] = lStack_230;
  plVar13[0xb] = lStack_228;
  plVar13[0xc] = lStack_220;
  plVar13[0xd] = (long)plStack_218;
  lStack_220 = 0;
  plStack_218 = (long *)0x0;
  plVar13[0xe] = lStack_210;
  plVar13[0x11] = lStack_1f8;
  plVar13[0xf] = uStack_208;
  plVar13[0x10] = lStack_200;
  uStack_208 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  plVar13[0x12] = lStack_1f0;
  uStack_270 = 0;
  plStack_280 = plVar13 + 3;
  plStack_278 = plVar13;
  func_0x0da63260(&lStack_368,&uStack_3a8,&puStack_2a8);
  func_0x0daa9700(auStack_628,lStack_368 + 0x18);
  if (uStack_610._4_4_ == 2) {
    piVar17 = *(int **)(*(long *)(puStack_618 + 0x78) + 0x60);
    iVar7 = *piVar17;
    while (iVar7 != (int)uStack_610) {
      piVar17 = piVar17 + 0x16;
      iVar7 = *piVar17;
    }
    for (; *(long *)(piVar17 + 0xc) != lStack_620; piVar17 = *(int **)(piVar17 + 0xe)) {
    }
  }
  else {
    if (uStack_610._4_4_ != 1) {
      if (uStack_610._4_4_ == 0) {
        *(uint *)(puStack_618 + 0x18) = *(uint *)(puStack_618 + 0x18) | 0x40000;
      }
      goto LAB_0da6237e;
    }
    piVar17 = *(int **)(*(long *)(puStack_618 + 0x78) + 0x48);
    iVar7 = *piVar17;
    while (iVar7 != (int)uStack_610) {
      piVar17 = piVar17 + 0x1a;
      iVar7 = *piVar17;
    }
  }
  *(byte *)((long)piVar17 + 0x12) = *(byte *)((long)piVar17 + 0x12) | 4;
LAB_0da6237e:
  func_0x0daa9ac0(auStack_628,&lStack_368,&UNK_0123d5a9,4,0x10);
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar12 = &UNK_0ef474e0;
  if (uStack_610 != (code *)0x0) {
    lVar23 = *(long *)uStack_610;
    uStack_610 = (code *)puVar12;
    (**(code **)(lVar23 + 8))();
    puVar12 = (undefined8 *)uStack_610;
  }
  uStack_610 = (code *)puVar12;
  uStack_410 = CONCAT44(uStack_410._4_4_,puStack_618._0_4_);
  uStack_408 = 0;
  puStack_400 = (undefined8 *)((ulong)puStack_400 & 0xffffffff00000000);
  uStack_3f8 = 1;
  uStack_3f0 = 0;
  iStack_3e8 = 0x49119f0;
  uStack_3e4 = 0;
  puStack_3e0 = &SUB_048b06d0;
  puStack_3d8 = &UNK_0490fc00;
  puStack_3d0 = &UNK_0daab340;
  puStack_3c8 = &UNK_0daab540;
  uStack_3c0 = 0;
  uStack_3b8 = 0;
  plStack_3b0 = (long *)0x0;
  func_0x048b05a0(lStack_620,&uStack_410);
  plVar13 = plStack_3b0;
  if (plStack_3b0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3b0 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_3b0 + 0x10))(plStack_3b0);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x0daa9cc0(auStack_628);
  uStack_4a8 = uStack_338;
  uStack_4b8 = uStack_348;
  uStack_4b0 = uStack_340;
  puStack_4c8 = (undefined8 *)auStack_360._8_8_;
  uStack_4c0 = uStack_350;
  bStack_4d8 = (byte)lStack_368;
  uStack_4d7 = (undefined7)((ulong)lStack_368 >> 8);
  uStack_4d0 = auStack_360[0];
  uStack_4cf = auStack_360._1_2_;
  uStack_4cd = auStack_360._3_5_;
  FUN_048b0bc0(&uStack_610);
  pcStack_608 = (code *)0x0;
  lStack_5c0 = 0;
  lStack_5b8 = 0;
  lStack_5d0 = 0;
  uStack_5c8 = 0;
  uStack_5e0 = 0;
  uStack_5df = 0;
  uStack_5dd = 0;
  uStack_5dc = 0;
  plStack_5d8 = (long *)0x0;
  lStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5e7 = 0;
  uStack_600 = 0;
  lStack_5f8 = 0;
  lStack_5b0 = 0;
  puStack_618 = (undefined *)0x0;
  uStack_610 = (code *)0xff;
  auStack_628 = (undefined1  [8])&UNK_0f4e3c70;
  lStack_620 = -1;
  func_0x041679a0(&pcStack_608);
  uStack_600 = func_0x041681f0(&pcStack_608,0xf547a30);
  lStack_5f8 = func_0x041681f0(&pcStack_608,0xf547770);
  lStack_5f0 = 0;
  uStack_5e8 = 0;
  uStack_5e7 = 0;
  uStack_5e0 = 0;
  uStack_5df = 0;
  uStack_5dd = 0;
  uStack_5dc = 0;
  plStack_5d8 = (long *)0x0;
  lStack_5d0 = 0;
  uStack_5c8 = 0;
  lStack_5c0 = 0;
  lStack_5b8 = 0;
  lStack_5b0 = 0;
  bStack_498 = 0x12;
  uStack_497 = 0x775c3a2b775c5e;
  uStack_490 = 0x2b;
  uStack_48f = 0x24;
  func_0x0ed60210(auStack_628,&bStack_498,0);
  uStack_d0 = (undefined1)uStack_610;
  lStack_e0 = lStack_620;
  lStack_d8 = (long)puStack_618;
  puStack_e8 = &UNK_0f4e3c70;
  func_0x04167a20(auStack_c8,&pcStack_608);
  lStack_c0 = uStack_600;
  lStack_b8 = lStack_5f8;
  lStack_a8 = CONCAT71(uStack_5e7,uStack_5e8);
  lStack_b0 = lStack_5f0;
  lStack_a0 = CONCAT44(uStack_5dc,CONCAT13(uStack_5dd,CONCAT21(uStack_5df,uStack_5e0)));
  plStack_98 = plStack_5d8;
  if (plStack_5d8 != (long *)0x0) {
    LOCK();
    plStack_5d8[1] = plStack_5d8[1] + 1;
    UNLOCK();
  }
  lStack_90 = lStack_5d0;
  if ((uStack_5c8 & 1) == 0) {
    lStack_78 = lStack_5b8;
    uStack_88 = uStack_5c8;
    lStack_80 = lStack_5c0;
  }
  else {
    FUN_0412e5e0(&uStack_88,lStack_5b8,lStack_5c0);
  }
  lStack_70 = lStack_5b0;
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
  func_0x04167a20(plVar13 + 7,auStack_c8);
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
  func_0x0da63260(auStack_558,&bStack_4d8,&puStack_168);
  plVar13 = plStack_138;
  puStack_168 = &UNK_0f4e3cf0;
  if (plStack_138 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_138 + 0x10))(plStack_138);
      func_0x0412c2d0(plVar13);
    }
  }
  puStack_e8 = &UNK_0f4e3c70;
  if ((uStack_88 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  plVar13 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_c8);
  if ((bStack_498 & 1) == 0) {
    auStack_628 = (undefined1  [8])&UNK_0f4e3c70;
  }
  else {
    thunk_FUN_0ee326a0(uStack_488,CONCAT71(uStack_497,bStack_498) & 0xfffffffffffffffe);
    auStack_628 = (undefined1  [8])&UNK_0f4e3c70;
  }
  plVar13 = plStack_5d8;
  if ((uStack_5c8 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_5b8,uStack_5c8 & 0xfffffffffffffffe);
    plVar13 = plStack_5d8;
  }
  plStack_5d8 = plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&pcStack_608);
  plVar13 = plStack_278;
  puStack_2a8 = &UNK_0f4e3cf0;
  if (plStack_278 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_278 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      func_0x0412c2d0(plVar13);
    }
  }
  puStack_268 = &UNK_0f4e3c70;
  if ((uStack_208 & 1) != 0) {
    thunk_FUN_0ee326a0(lStack_1f8,uStack_208 & 0xfffffffffffffffe);
  }
  plVar13 = plStack_218;
  if (plStack_218 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_218 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(auStack_248);
  if ((bStack_480 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_470,CONCAT71(uStack_47f,bStack_480) & 0xfffffffffffffffe);
  }
  if (((ulong)plStack_648 & 1) == 0) {
    puStack_6a8 = &UNK_0f4e3c70;
    plVar13 = uStack_658;
  }
  else {
    puStack_6a8 = &UNK_0f4e3c70;
    thunk_FUN_0ee326a0(lStack_638,(ulong)plStack_648 & 0xfffffffffffffffe);
    plVar13 = uStack_658;
  }
  uStack_658 = plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    lVar23 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      func_0x0412c2d0(plVar13);
    }
  }
  func_0x04167a40(&uStack_688);
  if (((ulong)puStack_4e8 >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_4e8 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_4e8 = (undefined *)0x0;
  if (((ulong)puStack_4f0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_4f0 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_4f0 = (undefined *)0x0;
  if ((uStack_518 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_508,uStack_518 & 0xfffffffffffffffe);
  }
  if ((uStack_418 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_418 & 0xff00ffffffffffff) - 8);
  }
  uStack_418 = 0;
  if ((uStack_420 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_420 & 0xff00ffffffffffff) - 8);
  }
  uStack_420 = 0;
  if ((uStack_520 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_520 & 0xff00ffffffffffff) - 8);
  }
  uStack_520 = 0;
  if ((uStack_430 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_430 & 0xff00ffffffffffff) - 8);
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
