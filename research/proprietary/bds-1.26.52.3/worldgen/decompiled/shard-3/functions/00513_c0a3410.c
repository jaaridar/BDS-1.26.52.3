/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc1a3410 (ELF vaddr 0xc0a3410)
 * Label: caller-of-callee
 * Body:  [[0c1a3410, 0c1a3601] [0c1a3610, 0c1a7c5f]]
 * Ghidra: FUN_0c1a3410
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c1a3410(long param_1)

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
  long *plVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined *puStack_a30;
  code *pcStack_a28;
  undefined8 uStack_a20;
  undefined *puStack_a18;
  undefined1 *puStack_a10;
  undefined *puStack_a08;
  undefined *puStack_a00;
  undefined *puStack_9f8;
  undefined4 uStack_9f0;
  undefined8 uStack_9e8;
  long *plStack_9e0;
  undefined1 auStack_9d8 [16];
  undefined4 uStack_9c8;
  code *pcStack_9c0;
  code *pcStack_9b8;
  undefined4 uStack_9b0;
  char cStack_9ac;
  ulong uStack_908;
  undefined8 uStack_900;
  undefined8 *puStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  char cStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  int iStack_8a8;
  undefined4 uStack_8a4;
  char cStack_8a0;
  ulong uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  char cStack_868;
  ulong uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  char cStack_828;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  char cStack_7e8;
  ulong uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  char cStack_7a8;
  ulong uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  char cStack_768;
  ulong uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  char cStack_728;
  ulong uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  char cStack_6e8;
  ulong uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  char cStack_6a8;
  ulong uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  char cStack_668;
  ulong uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  char cStack_628;
  ulong uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  char cStack_5e8;
  ulong uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  char cStack_5a8;
  ulong uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  char cStack_568;
  ulong uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  char cStack_528;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  char cStack_4e8;
  ulong uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  char cStack_4a8;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  char cStack_468;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  char cStack_428;
  ulong uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  char cStack_3e8;
  ulong uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  char cStack_3a8;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  char cStack_368;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  char cStack_328;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  char cStack_2e8;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  char cStack_2a8;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  char cStack_268;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  char cStack_228;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  char cStack_1e8;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  char cStack_1a8;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  char cStack_168;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  char cStack_a8;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0f6d83b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d83b0), iVar5 != 0)) {
    func_0x0c25ad10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d8330,0xf53dab8);
    func_0x0410844d(&DAT_0f6d83b0);
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f6d8330 + 4)) * 8);
  do {
    lVar14 = *plVar10;
    if (lVar14 == -1) goto LAB_0c1a3480;
    plVar10 = (long *)(*(long *)(param_1 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f6d8330 + 4))
  ;
  if (plVar10 == *(long **)(param_1 + 0x38)) {
LAB_0c1a3480:
    puVar7 = &DAT_0f6d8330;
    if (iRam000000000f6d8390 != -0x2b3da790) goto LAB_0c1a34ed;
LAB_0c1a34ab:
    lVar14 = *(long *)(puVar7 + 0x68);
    if (lVar14 == 0) goto LAB_0c1a34ed;
    bVar16 = (*(byte *)(lVar14 + 8) & 1) != 0;
    lVar12 = lVar14 + 9;
    if (bVar16) {
      lVar12 = *(long *)(lVar14 + 0x18);
    }
    uVar11 = (ulong)(*(byte *)(lVar14 + 8) >> 1);
    if (bVar16) {
      uVar11 = *(ulong *)(lVar14 + 0x10);
    }
    func_0x0c25b1e0(&uStack_8d0,param_1,lVar12,uVar11);
    uVar11 = uStack_8d0;
  }
  else {
    puVar7 = (undefined *)plVar10[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0c1a34ab;
LAB_0c1a34ed:
    func_0x0c25b1e0(&uStack_8d0,param_1,&UNK_011ed181,10);
    uVar11 = uStack_8d0;
  }
  if (cStack_8a0 != '\0') {
    return;
  }
  uStack_8d0 = uVar11;
  if ((DAT_0f6d83b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d83b0), iVar5 != 0)) {
    func_0x0c25ad10();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6d8330,0xf53dab8);
    func_0x0410844d(&DAT_0f6d83b0);
  }
  plVar10 = (long *)(*(long *)(uVar11 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uVar11 + 0x20) - *(long *)(uVar11 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f6d8330 + 4)) * 8);
  do {
    lVar14 = *plVar10;
    if (lVar14 == -1) goto LAB_0c1a3580;
    plVar10 = (long *)(*(long *)(uVar11 + 0x30) + lVar14 * 0x18);
  } while (*(uint *)(*(long *)(uVar11 + 0x30) + 8 + lVar14 * 0x18) != *(uint *)(_DAT_0f6d8330 + 4));
  if (plVar10 == *(long **)(uVar11 + 0x38)) {
LAB_0c1a3580:
    puVar7 = &DAT_0f6d8330;
  }
  else {
    puVar7 = (undefined *)plVar10[2];
  }
  for (pbVar8 = *(byte **)(uStack_8d0 + 0x50); pbVar8 != *(byte **)(uStack_8d0 + 0x58);
      pbVar8 = pbVar8 + 0x38) {
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0c1a361a;
    }
    else if (*(long *)(pbVar8 + 8) == 0x1a) {
LAB_0c1a361a:
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
  if (pbVar8 != *(byte **)(uStack_8d0 + 0x58)) {
    iVar5 = *(int *)(pbVar8 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f550ad8), iVar6 != 0)) {
      func_0x0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar5 != _DAT_0f550ac4) goto LAB_0c1a3889;
  }
  uVar4 = uStack_8a4;
  if (iStack_8a8 == 0) {
    if (((puVar7 == (undefined *)0x0) || (*(int *)(puVar7 + 0x60) != -0x2b3da790)) ||
       (*(long *)(puVar7 + 0x68) == 0)) goto LAB_0c1a36d0;
    lVar14 = *(long *)(puVar7 + 0x68) + 0x38;
  }
  else {
    if (puVar7 == (undefined *)0x0) {
      puVar7 = (undefined *)func_0x048aead0(uVar11 + 0x18);
    }
    auStack_9d8._0_8_ = func_0x048b0c90(uVar11 + 0x18,puVar7,uVar4,1);
    if (auStack_9d8._0_8_ == 0) {
      auStack_9d8 = (undefined1  [16])0x0;
      FUN_048b0d20(auStack_9d8);
      if (auStack_9d8._0_8_ == 0) goto LAB_0c1a36d0;
    }
    if ((*(int *)(auStack_9d8._0_8_ + 0x50) == -0x45dcb126) &&
       (*(long *)(auStack_9d8._0_8_ + 0x58) != 0)) {
      lVar14 = *(long *)(auStack_9d8._0_8_ + 0x58) + 0x40;
    }
    else {
LAB_0c1a36d0:
      lVar14 = 0;
    }
  }
  puStack_a30 = &UNK_0488e0b0;
  pcStack_a28 = (code *)0x0;
  uStack_a20 = CONCAT35(uStack_a20._5_3_,0x48b5725f);
  uStack_a40 = 0;
  auStack_9d8 = (undefined1  [16])0x0;
  pcStack_9c0 = (code *)&UNK_0488e0b0;
  pcStack_9b8 = (code *)0x0;
  uStack_9b0 = 0x48b5725f;
  cStack_9ac = '\0';
  puStack_8f8 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puStack_8f8 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x20,0);
  }
  uVar3 = _UNK_013bbadf;
  uStack_908 = 0x21;
  uStack_900 = 0x1a;
  *(ulong *)((long)puStack_8f8 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
  *(undefined8 *)((long)puStack_8f8 + 0x12) = uVar3;
  uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
  *puStack_8f8 = _DAT_013bbacd;
  puStack_8f8[1] = uVar3;
  *(undefined1 *)((long)puStack_8f8 + 0x1a) = 0;
  lVar14 = func_0x048b5060(lVar14,&uStack_908);
  *(undefined8 *)(lVar14 + 0x20) = 0;
  if ((undefined1 *)(lVar14 + 0x20) == auStack_9d8) {
    pcVar9 = (code *)0x0;
  }
  else {
    if (*(code **)(lVar14 + 0x40) != (code *)0x0) {
      puVar15 = (undefined8 *)(lVar14 + 0x28);
      (**(code **)(lVar14 + 0x40))(puVar15);
      if (cStack_9ac != '\0') {
        if (cStack_9ac == '\x02') {
          (*pcStack_9c0)(5,auStack_9d8 + 8,puVar15);
        }
        else {
          uVar3 = auStack_9d8._8_8_;
          auStack_9d8._8_8_ = 0;
          *puVar15 = uVar3;
        }
      }
    }
    *(code **)(lVar14 + 0x38) = pcStack_9c0;
    *(code **)(lVar14 + 0x40) = pcStack_9b8;
    *(undefined4 *)(lVar14 + 0x48) = uStack_9b0;
    *(char *)(lVar14 + 0x4c) = cStack_9ac;
    pcVar9 = pcStack_9b8;
  }
  if ((uStack_908 & 1) != 0) {
    func_0x0412a280(puStack_8f8,uStack_908 & 0xfffffffffffffffe);
    pcVar9 = pcStack_9b8;
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_9d8 + 8);
  }
  if (pcStack_a28 != (code *)0x0) {
    (*pcStack_a28)(&uStack_a40);
  }
LAB_0c1a3889:
  cStack_868 = cStack_8a0;
  uStack_870 = CONCAT44(uStack_8a4,iStack_8a8);
  uStack_38 = uStack_8b0;
  uStack_48 = uStack_8c0;
  uStack_40 = uStack_8b8;
  uStack_58 = uStack_8d0;
  uStack_50 = uStack_8c8;
  uStack_898 = uStack_8d0;
  uStack_890 = uStack_8c8;
  uStack_888 = uStack_8c0;
  uStack_880 = uStack_8b8;
  uStack_878 = uStack_8b0;
  if ((DAT_0f6e1978 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6e1978), iVar5 != 0)) {
    func_0x0ee25020(0xf6e1950,&UNK_01422d14);
    func_0x0eee2f40(&UNK_048c16a0,0xf6e1950,0xf53dab8);
    func_0x0410844d(&DAT_0f6e1978);
  }
  uVar11 = (ulong)(DAT_0f6e1958 >> 1);
  uVar3 = 0xf6e1959;
  if ((DAT_0f6e1958 & 1) != 0) {
    uVar11 = _DAT_0f6e1960;
    uVar3 = _DAT_0f6e1968;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_898,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358930;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c25dbb0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c25d890;
  puStack_a00 = &UNK_0c25dc70;
  puStack_9f8 = &UNK_0c25de50;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_828 = cStack_868;
  uStack_838 = uStack_878;
  uStack_830 = uStack_870;
  uStack_848 = uStack_888;
  uStack_840 = uStack_880;
  uStack_858 = uStack_898;
  uStack_850 = uStack_890;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7078 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7078), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7050,&DAT_012e774f);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7050,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7078);
  }
  uVar11 = (ulong)(DAT_0f6d7058 >> 1);
  uVar3 = 0xf6d7059;
  if ((DAT_0f6d7058 & 1) != 0) {
    uVar11 = _DAT_0f6d7060;
    uVar3 = _DAT_0f6d7068;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_858,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f3589a8;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c25fe50;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c25fa80;
  puStack_a00 = &UNK_0c25ff10;
  puStack_9f8 = &UNK_0c260160;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_7e8 = cStack_828;
  uStack_7f8 = uStack_838;
  uStack_7f0 = uStack_830;
  uStack_808 = uStack_848;
  uStack_800 = uStack_840;
  uStack_818 = uStack_858;
  uStack_810 = uStack_850;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7198 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7198), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7170,&DAT_011fdfc9);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7170,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7198);
  }
  uVar11 = (ulong)(DAT_0f6d7178 >> 1);
  uVar3 = 0xf6d7179;
  if ((DAT_0f6d7178 & 1) != 0) {
    uVar11 = _DAT_0f6d7180;
    uVar3 = _DAT_0f6d7188;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_818,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358a98;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c261c40;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c261920;
  puStack_a00 = &UNK_0c261d00;
  puStack_9f8 = &UNK_0c261f00;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_7a8 = cStack_7e8;
  uStack_7b8 = uStack_7f8;
  uStack_7b0 = uStack_7f0;
  uStack_7c8 = uStack_808;
  uStack_7c0 = uStack_800;
  uStack_7d8 = uStack_818;
  uStack_7d0 = uStack_810;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7138 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7138), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7110,&DAT_011d37e2);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7110,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7138);
  }
  uVar11 = (ulong)(DAT_0f6d7118 >> 1);
  uVar3 = 0xf6d7119;
  if ((DAT_0f6d7118 & 1) != 0) {
    uVar11 = _DAT_0f6d7120;
    uVar3 = _DAT_0f6d7128;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_7d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358b10;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c263b10;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c263740;
  puStack_a00 = &UNK_0c263bd0;
  puStack_9f8 = &UNK_0c263db0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_768 = cStack_7a8;
  uStack_778 = uStack_7b8;
  uStack_770 = uStack_7b0;
  uStack_788 = uStack_7c8;
  uStack_780 = uStack_7c0;
  uStack_798 = uStack_7d8;
  uStack_790 = uStack_7d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7168 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7168), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7140,&DAT_013bbd0b);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7140,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7168);
  }
  uVar11 = (ulong)(DAT_0f6d7148 >> 1);
  uVar3 = 0xf6d7149;
  if ((DAT_0f6d7148 & 1) != 0) {
    uVar11 = _DAT_0f6d7150;
    uVar3 = _DAT_0f6d7158;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_798,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358c00;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c2658e0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c2655c0;
  puStack_a00 = &UNK_0c2659a0;
  puStack_9f8 = &UNK_0c265bc0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_728 = cStack_768;
  uStack_738 = uStack_778;
  uStack_730 = uStack_770;
  uStack_748 = uStack_788;
  uStack_740 = uStack_780;
  uStack_758 = uStack_798;
  uStack_750 = uStack_790;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7258 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7258), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7230,&DAT_01217d67);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7230,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7258);
  }
  uVar11 = (ulong)(DAT_0f6d7238 >> 1);
  uVar3 = 0xf6d7239;
  if ((DAT_0f6d7238 & 1) != 0) {
    uVar11 = _DAT_0f6d7240;
    uVar3 = _DAT_0f6d7248;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_758,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358c78;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c267b50;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c267780;
  puStack_a00 = &UNK_0c267c10;
  puStack_9f8 = &UNK_0c267f40;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_6e8 = cStack_728;
  uStack_6f8 = uStack_738;
  uStack_6f0 = uStack_730;
  uStack_708 = uStack_748;
  uStack_700 = uStack_740;
  uStack_718 = uStack_758;
  uStack_710 = uStack_750;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d72b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d72b8), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7290,&UNK_01281248);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7290,0xf53dab8);
    func_0x0410844d(&DAT_0f6d72b8);
  }
  uVar11 = (ulong)(DAT_0f6d7298 >> 1);
  uVar3 = 0xf6d7299;
  if ((DAT_0f6d7298 & 1) != 0) {
    uVar11 = _DAT_0f6d72a0;
    uVar3 = _DAT_0f6d72a8;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_718,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358d68;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c269d60;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c269990;
  puStack_a00 = &UNK_0c269e20;
  puStack_9f8 = &UNK_0c26a030;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_6a8 = cStack_6e8;
  uStack_6b8 = uStack_6f8;
  uStack_6b0 = uStack_6f0;
  uStack_6c8 = uStack_708;
  uStack_6c0 = uStack_700;
  uStack_6d8 = uStack_718;
  uStack_6d0 = uStack_710;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d72e8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d72e8), iVar5 != 0)) {
    func_0x0ee25020(0xf6d72c0,&UNK_011c9407);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d72c0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d72e8);
  }
  uVar11 = (ulong)(DAT_0f6d72c8 >> 1);
  uVar3 = 0xf6d72c9;
  if ((DAT_0f6d72c8 & 1) != 0) {
    uVar11 = _DAT_0f6d72d0;
    uVar3 = _DAT_0f6d72d8;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_6d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358e58;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c26ba90;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c26b770;
  puStack_a00 = &UNK_0c26bb50;
  puStack_9f8 = &UNK_0c26bd40;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_668 = cStack_6a8;
  uStack_678 = uStack_6b8;
  uStack_670 = uStack_6b0;
  uStack_688 = uStack_6c8;
  uStack_680 = uStack_6c0;
  uStack_698 = uStack_6d8;
  uStack_690 = uStack_6d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d73a8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d73a8), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7380,&UNK_012e772f);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7380,0xf53dab8);
    func_0x0410844d(&DAT_0f6d73a8);
  }
  uVar11 = (ulong)(DAT_0f6d7388 >> 1);
  uVar3 = 0xf6d7389;
  if ((DAT_0f6d7388 & 1) != 0) {
    uVar11 = _DAT_0f6d7390;
    uVar3 = _DAT_0f6d7398;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_698,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f358f48;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c26da60;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c26d690;
  puStack_a00 = &UNK_0c26db20;
  puStack_9f8 = &UNK_0c26dd20;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_628 = cStack_668;
  uStack_638 = uStack_678;
  uStack_630 = uStack_670;
  uStack_648 = uStack_688;
  uStack_640 = uStack_680;
  uStack_658 = uStack_698;
  uStack_650 = uStack_690;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4e60 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4e60), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4e38,&UNK_012ccc22);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4e38,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4e60);
  }
  uVar11 = (ulong)(DAT_0f6d4e40 >> 1);
  uVar3 = 0xf6d4e41;
  if ((DAT_0f6d4e40 & 1) != 0) {
    uVar11 = _DAT_0f6d4e48;
    uVar3 = _DAT_0f6d4e50;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_658,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359038;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c26f120;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c26ee00;
  puStack_a00 = &UNK_0c26f1e0;
  puStack_9f8 = &UNK_0c26f4f0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_5e8 = cStack_628;
  uStack_5f8 = uStack_638;
  uStack_5f0 = uStack_630;
  uStack_608 = uStack_648;
  uStack_600 = uStack_640;
  uStack_618 = uStack_658;
  uStack_610 = uStack_650;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4e90 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4e90), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4e68,&UNK_014d9816);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4e68,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4e90);
  }
  uVar11 = (ulong)(DAT_0f6d4e70 >> 1);
  uVar3 = 0xf6d4e71;
  if ((DAT_0f6d4e70 & 1) != 0) {
    uVar11 = _DAT_0f6d4e78;
    uVar3 = _DAT_0f6d4e80;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_618,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f3590b0;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c270800;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c2704e0;
  puStack_a00 = &UNK_0c2708c0;
  puStack_9f8 = &UNK_0c270bd0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_5a8 = cStack_5e8;
  uStack_5b8 = uStack_5f8;
  uStack_5b0 = uStack_5f0;
  uStack_5c8 = uStack_608;
  uStack_5c0 = uStack_600;
  uStack_5d8 = uStack_618;
  uStack_5d0 = uStack_610;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4ef0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4ef0), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4ec8,&DAT_013bbc08);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4ec8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4ef0);
  }
  uVar11 = (ulong)(DAT_0f6d4ed0 >> 1);
  uVar3 = 0xf6d4ed1;
  if ((DAT_0f6d4ed0 & 1) != 0) {
    uVar11 = _DAT_0f6d4ed8;
    uVar3 = _DAT_0f6d4ee0;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_5d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359128;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c271de0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c271ac0;
  puStack_a00 = &UNK_0c271ea0;
  puStack_9f8 = &UNK_0c272090;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_568 = cStack_5a8;
  uStack_578 = uStack_5b8;
  uStack_570 = uStack_5b0;
  uStack_588 = uStack_5c8;
  uStack_580 = uStack_5c0;
  uStack_598 = uStack_5d8;
  uStack_590 = uStack_5d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4f20 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4f20), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4ef8,&DAT_012c5efa);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4ef8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4f20);
  }
  uVar11 = (ulong)(DAT_0f6d4f00 >> 1);
  uVar3 = 0xf6d4f01;
  if ((DAT_0f6d4f00 & 1) != 0) {
    uVar11 = _DAT_0f6d4f08;
    uVar3 = _DAT_0f6d4f10;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_598,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f3591a0;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c2734c0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c2731a0;
  puStack_a00 = &UNK_0c273580;
  puStack_9f8 = &UNK_0c273900;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_528 = cStack_568;
  uStack_538 = uStack_578;
  uStack_530 = uStack_570;
  uStack_548 = uStack_588;
  uStack_540 = uStack_580;
  uStack_558 = uStack_598;
  uStack_550 = uStack_590;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4fb0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4fb0), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4f88,&UNK_0123256c);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4f88,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4fb0);
  }
  uVar11 = (ulong)(DAT_0f6d4f90 >> 1);
  uVar3 = 0xf6d4f91;
  if ((DAT_0f6d4f90 & 1) != 0) {
    uVar11 = _DAT_0f6d4f98;
    uVar3 = _DAT_0f6d4fa0;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_558,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359218;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c274d70;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c274a50;
  puStack_a00 = &UNK_0c274e30;
  puStack_9f8 = &UNK_0c275040;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_4e8 = cStack_528;
  uStack_4f8 = uStack_538;
  uStack_4f0 = uStack_530;
  uStack_508 = uStack_548;
  uStack_500 = uStack_540;
  uStack_518 = uStack_558;
  uStack_510 = uStack_550;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4fe0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4fe0), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4fb8,&DAT_01350d4d);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4fb8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4fe0);
  }
  uVar11 = (ulong)(DAT_0f6d4fc0 >> 1);
  uVar3 = 0xf6d4fc1;
  if ((DAT_0f6d4fc0 & 1) != 0) {
    uVar11 = _DAT_0f6d4fc8;
    uVar3 = _DAT_0f6d4fd0;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_518,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359290;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c276470;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c276150;
  puStack_a00 = &UNK_0c276530;
  puStack_9f8 = &UNK_0c276730;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_4a8 = cStack_4e8;
  uStack_4b8 = uStack_4f8;
  uStack_4b0 = uStack_4f0;
  uStack_4c8 = uStack_508;
  uStack_4c0 = uStack_500;
  uStack_4d8 = uStack_518;
  uStack_4d0 = uStack_510;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d5010 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d5010), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4fe8,&DAT_0136ad12);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4fe8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d5010);
  }
  uVar11 = (ulong)(DAT_0f6d4ff0 >> 1);
  uVar3 = 0xf6d4ff1;
  if ((DAT_0f6d4ff0 & 1) != 0) {
    uVar11 = _DAT_0f6d4ff8;
    uVar3 = _DAT_0f6d5000;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_4d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359308;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c277b00;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c2777e0;
  puStack_a00 = &UNK_0c277bc0;
  puStack_9f8 = &UNK_0c277d50;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_468 = cStack_4a8;
  uStack_478 = uStack_4b8;
  uStack_470 = uStack_4b0;
  uStack_488 = uStack_4c8;
  uStack_480 = uStack_4c0;
  uStack_498 = uStack_4d8;
  uStack_490 = uStack_4d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d3180 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d3180), iVar5 != 0)) {
    func_0x0ee25020(0xf6d3158,&DAT_012ccabc);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3158,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3180);
  }
  uVar11 = (ulong)(DAT_0f6d3160 >> 1);
  uVar3 = 0xf6d3161;
  if ((DAT_0f6d3160 & 1) != 0) {
    uVar11 = _DAT_0f6d3168;
    uVar3 = _DAT_0f6d3170;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_498,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359380;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c279080;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c278d60;
  puStack_a00 = &UNK_0c279140;
  puStack_9f8 = &UNK_0c279340;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_428 = cStack_468;
  uStack_438 = uStack_478;
  uStack_430 = uStack_470;
  uStack_448 = uStack_488;
  uStack_440 = uStack_480;
  uStack_458 = uStack_498;
  uStack_450 = uStack_490;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d3240 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d3240), iVar5 != 0)) {
    func_0x0ee25020(0xf6d3218,&UNK_013a11c4);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3218,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3240);
  }
  uVar11 = (ulong)(DAT_0f6d3220 >> 1);
  uVar3 = 0xf6d3221;
  if ((DAT_0f6d3220 & 1) != 0) {
    uVar11 = _DAT_0f6d3228;
    uVar3 = _DAT_0f6d3230;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_458,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f3593f8;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c27a6b0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c27a390;
  puStack_a00 = &UNK_0c27a770;
  puStack_9f8 = &UNK_0c27a9a0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_3e8 = cStack_428;
  uStack_3f8 = uStack_438;
  uStack_3f0 = uStack_430;
  uStack_408 = uStack_448;
  uStack_400 = uStack_440;
  uStack_418 = uStack_458;
  uStack_410 = uStack_450;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d3270 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d3270), iVar5 != 0)) {
    func_0x0ee25020(0xf6d3248,&DAT_011fddb3);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3248,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3270);
  }
  uVar11 = (ulong)(DAT_0f6d3250 >> 1);
  uVar3 = 0xf6d3251;
  if ((DAT_0f6d3250 & 1) != 0) {
    uVar11 = _DAT_0f6d3258;
    uVar3 = _DAT_0f6d3260;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_418,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359470;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c27bb70;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c27b850;
  puStack_a00 = &UNK_0c27bc30;
  puStack_9f8 = &UNK_0c27be00;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_3a8 = cStack_3e8;
  uStack_3b8 = uStack_3f8;
  uStack_3b0 = uStack_3f0;
  uStack_3c8 = uStack_408;
  uStack_3c0 = uStack_400;
  uStack_3d8 = uStack_418;
  uStack_3d0 = uStack_410;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4f80 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4f80), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4f58,&DAT_01489283);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4f58,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4f80);
  }
  uVar11 = (ulong)(DAT_0f6d4f60 >> 1);
  uVar3 = 0xf6d4f61;
  if ((DAT_0f6d4f60 & 1) != 0) {
    uVar11 = _DAT_0f6d4f68;
    uVar3 = _DAT_0f6d4f70;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_3d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f3594e8;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c27d0a0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c27cd80;
  puStack_a00 = &UNK_0c27d160;
  puStack_9f8 = &UNK_0c27d2c0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_368 = cStack_3a8;
  uStack_378 = uStack_3b8;
  uStack_370 = uStack_3b0;
  uStack_388 = uStack_3c8;
  uStack_380 = uStack_3c0;
  uStack_398 = uStack_3d8;
  uStack_390 = uStack_3d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4e30 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4e30), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4e08,&DAT_01267652);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4e08,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4e30);
  }
  uVar11 = (ulong)(DAT_0f6d4e10 >> 1);
  uVar3 = 0xf6d4e11;
  if ((DAT_0f6d4e10 & 1) != 0) {
    uVar11 = _DAT_0f6d4e18;
    uVar3 = _DAT_0f6d4e20;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_398,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359560;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c27e5e0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c27e2c0;
  puStack_a00 = &UNK_0c27e6a0;
  puStack_9f8 = &UNK_0c27e890;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_328 = cStack_368;
  uStack_338 = uStack_378;
  uStack_330 = uStack_370;
  uStack_348 = uStack_388;
  uStack_340 = uStack_380;
  uStack_358 = uStack_398;
  uStack_350 = uStack_390;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6e1948 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6e1948), iVar5 != 0)) {
    func_0x0ee25020(0xf6e1920,&DAT_014a4a8b);
    func_0x0eee2f40(&UNK_048c16a0,0xf6e1920,0xf53dab8);
    func_0x0410844d(&DAT_0f6e1948);
  }
  uVar11 = (ulong)(DAT_0f6e1928 >> 1);
  uVar3 = 0xf6e1929;
  if ((DAT_0f6e1928 & 1) != 0) {
    uVar11 = _DAT_0f6e1930;
    uVar3 = _DAT_0f6e1938;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_358,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f3595d8;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c27fa90;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c27f770;
  puStack_a00 = &UNK_0c27fb50;
  puStack_9f8 = &UNK_0c27fd40;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_2e8 = cStack_328;
  uStack_2f8 = uStack_338;
  uStack_2f0 = uStack_330;
  uStack_308 = uStack_348;
  uStack_300 = uStack_340;
  uStack_318 = uStack_358;
  uStack_310 = uStack_350;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7378 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7378), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7350,&DAT_011e233c);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7350,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7378);
  }
  uVar11 = (ulong)(DAT_0f6d7358 >> 1);
  uVar3 = 0xf6d7359;
  if ((DAT_0f6d7358 & 1) != 0) {
    uVar11 = _DAT_0f6d7360;
    uVar3 = _DAT_0f6d7368;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_318,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359650;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c281c90;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c2818c0;
  puStack_a00 = &UNK_0c281d50;
  puStack_9f8 = &UNK_0c281fa0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_2a8 = cStack_2e8;
  uStack_2b8 = uStack_2f8;
  uStack_2b0 = uStack_2f0;
  uStack_2c8 = uStack_308;
  uStack_2c0 = uStack_300;
  uStack_2d8 = uStack_318;
  uStack_2d0 = uStack_310;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d3210 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d3210), iVar5 != 0)) {
    func_0x0ee25020(0xf6d31e8,&DAT_01267571);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d31e8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3210);
  }
  uVar11 = (ulong)(DAT_0f6d31f0 >> 1);
  uVar3 = 0xf6d31f1;
  if ((DAT_0f6d31f0 & 1) != 0) {
    uVar11 = _DAT_0f6d31f8;
    uVar3 = _DAT_0f6d3200;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_2d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359740;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c2832b0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c282f90;
  puStack_a00 = &UNK_0c283370;
  puStack_9f8 = &UNK_0c283550;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_268 = cStack_2a8;
  uStack_278 = uStack_2b8;
  uStack_270 = uStack_2b0;
  uStack_288 = uStack_2c8;
  uStack_280 = uStack_2c0;
  uStack_298 = uStack_2d8;
  uStack_290 = uStack_2d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d3030 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d3030), iVar5 != 0)) {
    func_0x0ee25020(0xf6d3008,&DAT_011e228e);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3008,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3030);
  }
  uVar11 = (ulong)(DAT_0f6d3010 >> 1);
  uVar3 = 0xf6d3011;
  if ((DAT_0f6d3010 & 1) != 0) {
    uVar11 = _DAT_0f6d3018;
    uVar3 = _DAT_0f6d3020;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_298,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f3597b8;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c284740;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c284420;
  puStack_a00 = &UNK_0c284800;
  puStack_9f8 = &UNK_0c2849f0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_228 = cStack_268;
  uStack_238 = uStack_278;
  uStack_230 = uStack_270;
  uStack_248 = uStack_288;
  uStack_240 = uStack_280;
  uStack_258 = uStack_298;
  uStack_250 = uStack_290;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7318 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7318), iVar5 != 0)) {
    func_0x0ee25020(0xf6d72f0,&UNK_0142248e);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d72f0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7318);
  }
  uVar11 = (ulong)(DAT_0f6d72f8 >> 1);
  uVar3 = 0xf6d72f9;
  if ((DAT_0f6d72f8 & 1) != 0) {
    uVar11 = _DAT_0f6d7300;
    uVar3 = _DAT_0f6d7308;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_258,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359830;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c286540;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c286170;
  puStack_a00 = &UNK_0c286600;
  puStack_9f8 = &UNK_0c2867f0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_1e8 = cStack_228;
  uStack_1f8 = uStack_238;
  uStack_1f0 = uStack_230;
  uStack_208 = uStack_248;
  uStack_200 = uStack_240;
  uStack_218 = uStack_258;
  uStack_210 = uStack_250;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7348 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7348), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7320,&DAT_01335d05);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7320,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7348);
  }
  uVar11 = (ulong)(DAT_0f6d7328 >> 1);
  uVar3 = 0xf6d7329;
  if ((DAT_0f6d7328 & 1) != 0) {
    uVar11 = _DAT_0f6d7330;
    uVar3 = _DAT_0f6d7338;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_218,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359920;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c288340;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c287f70;
  puStack_a00 = &UNK_0c288400;
  puStack_9f8 = &UNK_0c2885f0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_1a8 = cStack_1e8;
  uStack_1b8 = uStack_1f8;
  uStack_1b0 = uStack_1f0;
  uStack_1c8 = uStack_208;
  uStack_1c0 = uStack_200;
  uStack_1d8 = uStack_218;
  uStack_1d0 = uStack_210;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d3000 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d3000), iVar5 != 0)) {
    func_0x0ee25020(0xf6d2fd8,&DAT_014a4777);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d2fd8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d3000);
  }
  uVar11 = (ulong)(DAT_0f6d2fe0 >> 1);
  uVar3 = 0xf6d2fe1;
  if ((DAT_0f6d2fe0 & 1) != 0) {
    uVar11 = _DAT_0f6d2fe8;
    uVar3 = _DAT_0f6d2ff0;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_1d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359a10;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c2897f0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c2894d0;
  puStack_a00 = &UNK_0c2898b0;
  puStack_9f8 = &UNK_0c289aa0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_168 = cStack_1a8;
  uStack_178 = uStack_1b8;
  uStack_170 = uStack_1b0;
  uStack_188 = uStack_1c8;
  uStack_180 = uStack_1c0;
  uStack_198 = uStack_1d8;
  uStack_190 = uStack_1d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7108 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7108), iVar5 != 0)) {
    func_0x0ee25020(0xf6d70e0,&DAT_012e773e);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d70e0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7108);
  }
  uVar11 = (ulong)(DAT_0f6d70e8 >> 1);
  uVar3 = 0xf6d70e9;
  if ((DAT_0f6d70e8 & 1) != 0) {
    uVar11 = _DAT_0f6d70f0;
    uVar3 = _DAT_0f6d70f8;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_198,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359a88;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c28b600;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c28b230;
  puStack_a00 = &UNK_0c28b6c0;
  puStack_9f8 = &UNK_0c28b8b0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_128 = cStack_168;
  uStack_138 = uStack_178;
  uStack_130 = uStack_170;
  uStack_148 = uStack_188;
  uStack_140 = uStack_180;
  uStack_158 = uStack_198;
  uStack_150 = uStack_190;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6e18b8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6e18b8), iVar5 != 0)) {
    func_0x0ee25020(0xf6e1890,&DAT_01408ccb);
    func_0x0eee2f40(&UNK_048c16a0,0xf6e1890,0xf53dab8);
    func_0x0410844d(&DAT_0f6e18b8);
  }
  uVar11 = (ulong)(DAT_0f6e1898 >> 1);
  uVar3 = 0xf6e1899;
  if ((DAT_0f6e1898 & 1) != 0) {
    uVar11 = _DAT_0f6e18a0;
    uVar3 = _DAT_0f6e18a8;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_158,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359b78;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c28caa0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c28c780;
  puStack_a00 = &UNK_0c28cb60;
  puStack_9f8 = &UNK_0c28cd50;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_e8 = cStack_128;
  uStack_f8 = uStack_138;
  uStack_f0 = uStack_130;
  uStack_108 = uStack_148;
  uStack_100 = uStack_140;
  uStack_118 = uStack_158;
  uStack_110 = uStack_150;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d4e00 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d4e00), iVar5 != 0)) {
    func_0x0ee25020(0xf6d4dd8,&DAT_011fde56);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d4dd8,0xf53dab8);
    func_0x0410844d(&DAT_0f6d4e00);
  }
  uVar11 = (ulong)(DAT_0f6d4de0 >> 1);
  uVar3 = 0xf6d4de1;
  if ((DAT_0f6d4de0 & 1) != 0) {
    uVar11 = _DAT_0f6d4de8;
    uVar3 = _DAT_0f6d4df0;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_118,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359bf0;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c28df40;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c28dc20;
  puStack_a00 = &UNK_0c28e000;
  puStack_9f8 = &UNK_0c28e1f0;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_a8 = cStack_e8;
  uStack_b8 = uStack_f8;
  uStack_b0 = uStack_f0;
  uStack_c8 = uStack_108;
  uStack_c0 = uStack_100;
  uStack_d8 = uStack_118;
  uStack_d0 = uStack_110;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d31b0 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d31b0), iVar5 != 0)) {
    func_0x0ee25020(0xf6d3188,&DAT_0138617a);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d3188,0xf53dab8);
    func_0x0410844d(&DAT_0f6d31b0);
  }
  uVar11 = (ulong)(DAT_0f6d3190 >> 1);
  uVar3 = 0xf6d3191;
  if ((DAT_0f6d3190 & 1) != 0) {
    uVar11 = _DAT_0f6d3198;
    uVar3 = _DAT_0f6d31a0;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_d8,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359c68;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c28f3e0;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c28f0c0;
  puStack_a00 = &UNK_0c28f4a0;
  puStack_9f8 = &UNK_0c28f690;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_68 = cStack_a8;
  uStack_78 = uStack_b8;
  uStack_70 = uStack_b0;
  uStack_88 = uStack_c8;
  uStack_80 = uStack_c0;
  uStack_98 = uStack_d8;
  uStack_90 = uStack_d0;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d7228 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d7228), iVar5 != 0)) {
    func_0x0ee25020(0xf6d7200,&DAT_011fdfde);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d7200,0xf53dab8);
    func_0x0410844d(&DAT_0f6d7228);
  }
  uVar11 = (ulong)(DAT_0f6d7208 >> 1);
  uVar3 = 0xf6d7209;
  if ((DAT_0f6d7208 & 1) != 0) {
    uVar11 = _DAT_0f6d7210;
    uVar3 = _DAT_0f6d7218;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_98,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359ce0;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c291430;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c291060;
  puStack_a00 = &UNK_0c2914f0;
  puStack_9f8 = &UNK_0c291730;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  cStack_8d8 = cStack_68;
  uStack_8e8 = uStack_78;
  uStack_8e0 = uStack_70;
  puStack_8f8 = (undefined8 *)uStack_88;
  uStack_8f0 = uStack_80;
  uStack_908 = uStack_98;
  uStack_900 = uStack_90;
  func_0x048b0bc0(&pcStack_9c0);
  if ((DAT_0f6d73d8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f6d73d8), iVar5 != 0)) {
    func_0x0ee25020(0xf6d73b0,&DAT_0129a9ee);
    func_0x0eee2f40(&UNK_048c16a0,0xf6d73b0,0xf53dab8);
    func_0x0410844d(&DAT_0f6d73d8);
  }
  uVar11 = (ulong)(DAT_0f6d73b8 >> 1);
  uVar3 = 0xf6d73b9;
  if ((DAT_0f6d73b8 & 1) != 0) {
    uVar11 = _DAT_0f6d73c0;
    uVar3 = _DAT_0f6d73c8;
  }
  func_0x0c25bd50(auStack_9d8,&uStack_908,uVar3,uVar11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f359dd0;
  if (pcStack_9c0 != (code *)0x0) {
    lVar14 = *(long *)pcStack_9c0;
    pcStack_9c0 = pcVar9;
    (**(code **)(lVar14 + 8))();
    pcVar9 = pcStack_9c0;
  }
  pcStack_9c0 = pcVar9;
  uStack_a40 = CONCAT44(uStack_a40._4_4_,uStack_9c8);
  uStack_a38 = 0;
  puStack_a30 = (undefined *)((ulong)puStack_a30 & 0xffffffff00000000);
  pcStack_a28 = (code *)0x1;
  uStack_a20 = 0;
  puStack_a18 = &UNK_0c293630;
  puStack_a10 = &SUB_048b06d0;
  puStack_a08 = &UNK_0c293260;
  puStack_a00 = &UNK_0c2936f0;
  puStack_9f8 = &UNK_0c293930;
  uStack_9f0 = 0;
  uStack_9e8 = 0;
  plStack_9e0 = (long *)0x0;
  FUN_048b05a0(auStack_9d8._8_8_,&uStack_a40);
  plVar10 = plStack_9e0;
  if (plStack_9e0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_9e0 + 1;
    lVar14 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar14 == 0) {
      (**(code **)(*plStack_9e0 + 0x10))(plStack_9e0);
      func_0x0412c2d0(plVar10);
    }
  }
  func_0x0c25c090(auStack_9d8);
  func_0x048b0bc0(&pcStack_9c0);
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14eaba0  [cereal:document
 */
