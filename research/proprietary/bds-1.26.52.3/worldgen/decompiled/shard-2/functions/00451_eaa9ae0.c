/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeba9ae0 (ELF vaddr 0xeaa9ae0)
 * Label: caller-of-callee
 * Body:  [[0eba9ae0, 0eba9bb0] [0eba9bc0, 0eba9c02] [0eba9c10, 0ebaa081] [0ebaa090, 0ebaa0c1] [0ebaa0d0, 0ebad1cc]]
 * Ghidra: FUN_0eba9ae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eba9ae0(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined *puStack_9b8;
  code *pcStack_9b0;
  undefined8 uStack_9a8;
  undefined *puStack_9a0;
  undefined1 *puStack_998;
  undefined *puStack_990;
  undefined *puStack_988;
  undefined *puStack_980;
  undefined4 uStack_978;
  undefined8 uStack_970;
  long *plStack_968;
  undefined4 uStack_960;
  undefined1 uStack_95c;
  undefined1 auStack_958 [16];
  undefined4 uStack_948;
  code *pcStack_940;
  code *pcStack_938;
  undefined4 uStack_930;
  char cStack_92c;
  int iStack_888;
  undefined4 uStack_884;
  undefined1 uStack_880;
  undefined4 uStack_87c;
  ulong uStack_878;
  undefined8 uStack_870;
  undefined8 *puStack_868;
  long lStack_860;
  ulong uStack_858;
  long lStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  int iStack_828;
  undefined4 uStack_824;
  char cStack_820;
  undefined7 uStack_81f;
  undefined8 uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  long lStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  int iStack_7c8;
  undefined4 uStack_7c4;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  long lStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined1 uStack_768;
  long lStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 uStack_728;
  long lStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 uStack_6e8;
  long lStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 uStack_6a8;
  long lStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 uStack_668;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  long lStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 uStack_5e8;
  long lStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 uStack_5a8;
  long lStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined1 uStack_568;
  long lStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 uStack_528;
  long lStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 uStack_4e8;
  long lStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 uStack_4a8;
  long lStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 uStack_468;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 uStack_3e8;
  long lStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  long lStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  long lStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar6 = func_0x0c2a50e0(param_1 + 0x18);
  if ((*(int *)(lVar6 + 0x60) == -0x2b3da790) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
    bVar17 = (*(byte *)(lVar6 + 8) & 1) != 0;
    lVar11 = lVar6 + 9;
    if (bVar17) {
      lVar11 = *(long *)(lVar6 + 0x18);
    }
    uVar12 = (ulong)(*(byte *)(lVar6 + 8) >> 1);
    if (bVar17) {
      uVar12 = *(ulong *)(lVar6 + 0x10);
    }
    func_0x0ec95060(&lStack_850,param_1,lVar11,uVar12);
  }
  else {
    func_0x0ec95060(&lStack_850,param_1,&UNK_011ed181,10);
  }
  if (cStack_820 != '\0') {
    return;
  }
  lVar11 = lStack_850 + 0x18;
  lVar6 = func_0x0c2a50e0(lVar11);
  for (pbVar10 = *(byte **)(lStack_850 + 0x50); pbVar10 != *(byte **)(lStack_850 + 0x58);
      pbVar10 = pbVar10 + 0x38) {
    bVar2 = *pbVar10;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x1a) goto LAB_0eba9c1a;
    }
    else if (*(long *)(pbVar10 + 8) == 0x1a) {
LAB_0eba9c1a:
      if ((bVar2 & 1) == 0) {
        pbVar13 = pbVar10 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar10 + 0x10);
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
  if (pbVar10 == *(byte **)(lStack_850 + 0x58)) {
LAB_0eba9c49:
    if (iStack_828 == 0) {
      if ((*(int *)(lVar6 + 0x60) != -0x2b3da790) || (*(long *)(lVar6 + 0x68) == 0))
      goto LAB_0eba9cbd;
      lVar6 = *(long *)(lVar6 + 0x68) + 0x38;
    }
    else {
      auStack_958._0_8_ = func_0x048b0c90(lVar11,lVar6,uStack_824,1);
      if (auStack_958._0_8_ == 0) {
        auStack_958 = (undefined1  [16])0x0;
        func_0x048b0d20(auStack_958);
        if (auStack_958._0_8_ == 0) goto LAB_0eba9cbd;
      }
      if ((*(int *)(auStack_958._0_8_ + 0x50) == -0x45dcb126) &&
         (*(long *)(auStack_958._0_8_ + 0x58) != 0)) {
        lVar6 = *(long *)(auStack_958._0_8_ + 0x58) + 0x40;
      }
      else {
LAB_0eba9cbd:
        lVar6 = 0;
      }
    }
    puStack_9b8 = &UNK_0488e0b0;
    pcStack_9b0 = (code *)0x0;
    uStack_9a8 = CONCAT35(uStack_9a8._5_3_,0x48b5725f);
    uStack_9c8 = 0;
    auStack_958 = (undefined1  [16])0x0;
    pcStack_940 = (code *)&UNK_0488e0b0;
    pcStack_938 = (code *)0x0;
    uStack_930 = 0x48b5725f;
    cStack_92c = '\0';
    puStack_868 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puStack_868 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    uVar3 = _UNK_013bbadf;
    uStack_878 = 0x21;
    uStack_870 = 0x1a;
    *(ulong *)((long)puStack_868 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)((long)puStack_868 + 0x12) = uVar3;
    uVar3 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *puStack_868 = _DAT_013bbacd;
    puStack_868[1] = uVar3;
    *(undefined1 *)((long)puStack_868 + 0x1a) = 0;
    lVar6 = FUN_048b5060(lVar6,&uStack_878);
    *(undefined8 *)(lVar6 + 0x20) = 0;
    if ((undefined1 *)(lVar6 + 0x20) == auStack_958) {
      pcVar9 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar6 + 0x40) != (code *)0x0) {
        puVar16 = (undefined8 *)(lVar6 + 0x28);
        (**(code **)(lVar6 + 0x40))(puVar16);
        if (cStack_92c != '\0') {
          if (cStack_92c == '\x02') {
            (*pcStack_940)(5,auStack_958 + 8,puVar16);
          }
          else {
            uVar3 = auStack_958._8_8_;
            auStack_958._8_8_ = 0;
            *puVar16 = uVar3;
          }
        }
      }
      *(code **)(lVar6 + 0x38) = pcStack_940;
      *(code **)(lVar6 + 0x40) = pcStack_938;
      *(undefined4 *)(lVar6 + 0x48) = uStack_930;
      *(char *)(lVar6 + 0x4c) = cStack_92c;
      pcVar9 = pcStack_938;
    }
    if ((uStack_878 & 1) != 0) {
      func_0x0412a280(puStack_868,uStack_878 & 0xfffffffffffffffe);
      pcVar9 = pcStack_938;
    }
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(auStack_958 + 8);
    }
    if (pcStack_9b0 != (code *)0x0) {
      (*pcStack_9b0)(&uStack_9c8);
    }
  }
  else {
    iVar4 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550ad8 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550ad8), iVar5 != 0)) {
      FUN_0488e120(0xf550ac0);
      func_0x0410844d(&DAT_0f550ad8);
    }
    if (iVar4 == _DAT_0f550ac4) goto LAB_0eba9c49;
  }
  lStack_860 = lStack_850;
  uStack_7b8 = uStack_848;
  uStack_7b0 = uStack_840;
  uStack_7a8 = uStack_838;
  uStack_7a0 = uStack_830;
  iStack_888 = iStack_828;
  uStack_87c = uStack_824;
  uStack_7f8 = CONCAT71(uStack_81f,cStack_820);
  uStack_818 = _DAT_0f76def0;
  uStack_800 = _DAT_0f76def0;
  uStack_858 = _DAT_0f76def8;
  if ((_DAT_0f76def8 >> 0x37 & 1) != 0) {
    uVar12 = _DAT_0f76def8 & 0xff00ffffffffffff;
    lVar6 = *(long *)(uVar12 - 8);
    lVar11 = lVar6 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
    if (plVar7 == (long *)0x0 && lVar11 != 0) {
      func_0x0eec74c0(lVar11,8);
    }
    *plVar7 = lVar6;
    func_0x0eee2f00(plVar7 + 1,uVar12,lVar6);
    *(undefined1 *)((long)plVar7 + lVar6 + 8) = 0;
    uStack_858 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_808 = 0;
  uVar12 = _DAT_0f76df00;
  if ((_DAT_0f76df00 & 0x80000000000000) != 0) {
    uVar12 = _DAT_0f76df00 & 0xff00ffffffffffff;
    lVar11 = *(long *)(uVar12 - 8);
    lVar6 = lVar11 + 9;
    uStack_810 = uStack_858;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar6,8);
    if (lVar6 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar6,8);
    }
    *plVar7 = lVar11;
    func_0x0eee2f00(plVar7 + 1,uVar12,lVar11);
    *(undefined1 *)((long)plVar7 + lVar11 + 8) = 0;
    uVar12 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  lVar11 = lStack_860;
  uStack_95c = uStack_880;
  uStack_960 = uStack_884;
  uStack_884 = 0;
  uStack_880 = 0;
  lVar6 = lStack_860 + 0x18;
  uStack_810 = 0;
  uStack_808 = 0;
  lVar8 = func_0x0c2a50e0(lVar6);
  pbVar13 = *(byte **)(lVar11 + 0x58);
  for (pbVar10 = *(byte **)(lVar11 + 0x50); pbVar10 != pbVar13; pbVar10 = pbVar10 + 0x38) {
    bVar2 = *pbVar10;
    if ((bVar2 & 1) == 0) {
      if (bVar2 >> 1 == 0x24) goto LAB_0ebaa0da;
    }
    else if (*(long *)(pbVar10 + 8) == 0x24) {
LAB_0ebaa0da:
      if ((bVar2 & 1) == 0) {
        pbVar14 = pbVar10 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar10 + 0x10);
      }
      iVar4 = func_0x0eee3000(&DAT_014518a9,pbVar14,0x24);
      if (iVar4 == 0) break;
    }
  }
  if (pbVar10 != pbVar13) {
    iVar4 = *(int *)(pbVar10 + 0x1c);
    if ((DAT_0f550768 == '\0') && (iVar5 = func_0x04108328(&DAT_0f550768), iVar5 != 0)) {
      FUN_048b46f0(0xf550750);
      func_0x0410844d(&DAT_0f550768);
    }
    uVar15 = uStack_858;
    if (iVar4 != _DAT_0f550754) goto LAB_0ebaa3cd;
  }
  if (iStack_888 == 0) {
    if ((*(int *)(lVar8 + 0x60) != -0x2b3da790) || (*(long *)(lVar8 + 0x68) == 0))
    goto LAB_0ebaa186;
    lVar6 = *(long *)(lVar8 + 0x68) + 0x38;
  }
  else {
    lVar6 = func_0x048b0c90(lVar6,lVar8,uStack_87c,1);
    if (lVar6 == 0) {
      auStack_958 = ZEXT816(0);
      func_0x048b0d20(auStack_958);
      lVar6 = auStack_958._0_8_;
      if (auStack_958._0_8_ == 0) goto LAB_0ebaa186;
    }
    if ((*(int *)(lVar6 + 0x50) == -0x45dcb126) && (*(long *)(lVar6 + 0x58) != 0)) {
      lVar6 = *(long *)(lVar6 + 0x58) + 0x40;
    }
    else {
LAB_0ebaa186:
      lVar6 = 0;
    }
  }
  uStack_9c8 = 0;
  puStack_9b8 = &UNK_048b4ab0;
  pcStack_9b0 = (code *)&UNK_048b49f0;
  uStack_9a8 = CONCAT35(uStack_9a8._5_3_,0x1d33bd9c5);
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar16 = 0x656e6f706d6f4312;
  *(undefined2 *)(puVar16 + 1) = 0x746e;
  *(undefined1 *)((long)puVar16 + 10) = 0;
  *(undefined4 *)((long)puVar16 + 0xb) = uStack_960;
  *(undefined1 *)((long)puVar16 + 0xf) = uStack_95c;
  puVar16[2] = 0;
  uStack_95c = 0;
  uStack_960 = 0;
  *(undefined2 *)(puVar16 + 3) = 0x902;
  puVar16[4] = uStack_800;
  puVar16[5] = uStack_858;
  puVar16[6] = uVar12;
  pcStack_940 = (code *)&UNK_048b4ab0;
  pcStack_938 = (code *)&UNK_048b49f0;
  uStack_930 = 0xd33bd9c5;
  cStack_92c = '\x01';
  uStack_9c8 = 0;
  auStack_958._8_8_ = puVar16;
  auStack_958._0_8_ = &UNK_048b46e0;
  puVar16 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar3 = _UNK_014518c1;
  uStack_878 = 0x29;
  uStack_870 = 0x24;
  puVar16[2] = _DAT_014518b9;
  puVar16[3] = uVar3;
  uVar3 = _UNK_014518b1;
  *puVar16 = _DAT_014518a9;
  puVar16[1] = uVar3;
  *(undefined4 *)(puVar16 + 4) = 0x5d797472;
  *(undefined1 *)((long)puVar16 + 0x24) = 0;
  puStack_868 = puVar16;
  lVar6 = FUN_048b5060(lVar6,&uStack_878);
  *(undefined **)(lVar6 + 0x20) = &UNK_048b46e0;
  pcVar9 = (code *)&UNK_048b49f0;
  if ((undefined1 *)(lVar6 + 0x20) != auStack_958) {
    puVar16 = (undefined8 *)(lVar6 + 0x28);
    if (*(code **)(lVar6 + 0x40) == (code *)0x0) {
LAB_0ebaa346:
      uVar3 = auStack_958._8_8_;
      auStack_958._8_8_ = 0;
      *puVar16 = uVar3;
    }
    else {
      (**(code **)(lVar6 + 0x40))(puVar16);
      if (cStack_92c != '\0') {
        if (cStack_92c != '\x02') goto LAB_0ebaa346;
        (*pcStack_940)(5,auStack_958 + 8,puVar16);
      }
    }
    *(code **)(lVar6 + 0x38) = pcStack_940;
    *(code **)(lVar6 + 0x40) = pcStack_938;
    *(undefined4 *)(lVar6 + 0x48) = uStack_930;
    *(char *)(lVar6 + 0x4c) = cStack_92c;
    pcVar9 = pcStack_938;
  }
  if ((uStack_878 & 1) != 0) {
    func_0x0412a280(puStack_868,uStack_878 & 0xfffffffffffffffe);
    pcVar9 = pcStack_938;
  }
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(auStack_958 + 8);
  }
  if (pcStack_9b0 != (code *)0x0) {
    (*pcStack_9b0)(&uStack_9c8);
  }
  uVar12 = 0;
  uVar15 = 0;
LAB_0ebaa3cd:
  uStack_48 = uStack_7a8;
  uStack_40 = uStack_7a0;
  uStack_58 = uStack_7b8;
  uStack_50 = uStack_7b0;
  lStack_7f0 = lStack_860;
  uStack_7e8 = uStack_7b8;
  uStack_7e0 = uStack_7b0;
  uStack_7d8 = uStack_7a8;
  uStack_7d0 = uStack_7a0;
  iStack_7c8 = iStack_888;
  uStack_7c4 = uStack_87c;
  uStack_7c0 = uStack_7f8;
  func_0x0ec95920(auStack_958,&lStack_7f0,&DAT_01408ccb,0x18);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1040;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1a02a0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e19ff80;
  puStack_988 = &UNK_0ec95e80;
  puStack_980 = &UNK_0ec95fe0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_768 = (undefined1)uStack_7c0;
  uStack_770 = CONCAT44(uStack_7c4,iStack_7c8);
  uStack_778 = uStack_7d0;
  uStack_788 = uStack_7e0;
  uStack_780 = uStack_7d8;
  lStack_798 = lStack_7f0;
  uStack_790 = uStack_7e8;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_798,&DAT_014a4a8b,0x21);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1130;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1a2510;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1a21f0;
  puStack_988 = &UNK_0ec961b0;
  puStack_980 = &UNK_0ec96310;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_728 = uStack_768;
  uStack_738 = uStack_778;
  uStack_730 = uStack_770;
  uStack_748 = uStack_788;
  uStack_740 = uStack_780;
  lStack_758 = lStack_798;
  uStack_750 = uStack_790;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_758,&DAT_012e774f,0x12);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b11a8;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1a4a50;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1a4710;
  puStack_988 = &UNK_0ec964f0;
  puStack_980 = &UNK_0ec966d0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_6e8 = uStack_728;
  uStack_6f8 = uStack_738;
  uStack_6f0 = uStack_730;
  uStack_708 = uStack_748;
  uStack_700 = uStack_740;
  lStack_718 = lStack_758;
  uStack_710 = uStack_750;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_718,&DAT_012e773e,0x10);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b4390;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e264280;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e263f60;
  puStack_988 = &UNK_0ec968b0;
  puStack_980 = &UNK_0ec96a20;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_6a8 = uStack_6e8;
  uStack_6b8 = uStack_6f8;
  uStack_6b0 = uStack_6f0;
  uStack_6c8 = uStack_708;
  uStack_6c0 = uStack_700;
  lStack_6d8 = lStack_718;
  uStack_6d0 = uStack_710;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_6d8,&DAT_011d37e2,0x10);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1298;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1a88f0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1a85b0;
  puStack_988 = &UNK_0ec96c00;
  puStack_980 = &UNK_0ec96d30;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_668 = uStack_6a8;
  uStack_678 = uStack_6b8;
  uStack_670 = uStack_6b0;
  uStack_688 = uStack_6c8;
  uStack_680 = uStack_6c0;
  lStack_698 = lStack_6d8;
  uStack_690 = uStack_6d0;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_698,&DAT_013bbd0b,0x16);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1310;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1a9da0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1a9a60;
  puStack_988 = &UNK_0ec96f10;
  puStack_980 = &UNK_0ec970e0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_628 = uStack_668;
  uStack_638 = uStack_678;
  uStack_630 = uStack_670;
  uStack_648 = uStack_688;
  uStack_640 = uStack_680;
  lStack_658 = lStack_698;
  uStack_650 = uStack_690;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_658,&DAT_011fdfc9,0x14);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1388;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1ab070;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1aad50;
  puStack_988 = &UNK_0ec972c0;
  puStack_980 = &UNK_0ec97440;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_5e8 = uStack_628;
  uStack_5f8 = uStack_638;
  uStack_5f0 = uStack_630;
  uStack_608 = uStack_648;
  uStack_600 = uStack_640;
  lStack_618 = lStack_658;
  uStack_610 = uStack_650;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_618,&DAT_011fdfde,0x15);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b14f0;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1aedd0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1aea90;
  puStack_988 = &UNK_0ec97620;
  puStack_980 = &UNK_0ec97820;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_5a8 = uStack_5e8;
  uStack_5b8 = uStack_5f8;
  uStack_5b0 = uStack_5f0;
  uStack_5c8 = uStack_608;
  uStack_5c0 = uStack_600;
  lStack_5d8 = lStack_618;
  uStack_5d0 = uStack_610;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_5d8,&DAT_01217d67,0x17);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1568;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1b02e0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1affa0;
  puStack_988 = &UNK_0ec97a00;
  puStack_980 = &UNK_0ec97c20;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_568 = uStack_5a8;
  uStack_578 = uStack_5b8;
  uStack_570 = uStack_5b0;
  uStack_588 = uStack_5c8;
  uStack_580 = uStack_5c0;
  lStack_598 = lStack_5d8;
  uStack_590 = uStack_5d0;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_598,&UNK_01281248,0xe);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b15e0;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1b28b0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1b2570;
  puStack_988 = &UNK_0ec97e00;
  puStack_980 = &UNK_0ec98040;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_528 = uStack_568;
  uStack_538 = uStack_578;
  uStack_530 = uStack_570;
  uStack_548 = uStack_588;
  uStack_540 = uStack_580;
  lStack_558 = lStack_598;
  uStack_550 = uStack_590;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_558,&UNK_011c9407,0xe);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1658;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1b3bd0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1b38b0;
  puStack_988 = &UNK_0ec98220;
  puStack_980 = &UNK_0ec98390;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_4e8 = uStack_528;
  uStack_4f8 = uStack_538;
  uStack_4f0 = uStack_530;
  uStack_508 = uStack_548;
  uStack_500 = uStack_540;
  lStack_518 = lStack_558;
  uStack_510 = uStack_550;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_518,&UNK_0142248e,0xf);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b16d0;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1b4d10;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1b49f0;
  puStack_988 = &UNK_0ec98570;
  puStack_980 = &UNK_0ec986d0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_4a8 = uStack_4e8;
  uStack_4b8 = uStack_4f8;
  uStack_4b0 = uStack_4f0;
  uStack_4c8 = uStack_508;
  uStack_4c0 = uStack_500;
  lStack_4d8 = lStack_518;
  uStack_4d0 = uStack_510;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_4d8,&DAT_01335d05,0x17);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1748;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1b5e30;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1b5b10;
  puStack_988 = &UNK_0ec988b0;
  puStack_980 = &UNK_0ec98a10;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_468 = uStack_4a8;
  uStack_478 = uStack_4b8;
  uStack_470 = uStack_4b0;
  uStack_488 = uStack_4c8;
  uStack_480 = uStack_4c0;
  lStack_498 = lStack_4d8;
  uStack_490 = uStack_4d0;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_498,&DAT_011e233c,0x1a);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b17c0;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1b71d0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1b6e90;
  puStack_988 = &UNK_0ec98bf0;
  puStack_980 = &UNK_0ec98dc0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_428 = uStack_468;
  uStack_438 = uStack_478;
  uStack_430 = uStack_470;
  uStack_448 = uStack_488;
  uStack_440 = uStack_480;
  lStack_458 = lStack_498;
  uStack_450 = uStack_490;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_458,&UNK_012e772f,0xe);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4e0538;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0ec9a1d0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0ec99e00;
  puStack_988 = &UNK_0ec9a290;
  puStack_980 = &UNK_0ec9a550;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_3e8 = uStack_428;
  uStack_3f8 = uStack_438;
  uStack_3f0 = uStack_430;
  uStack_408 = uStack_448;
  uStack_400 = uStack_440;
  lStack_418 = lStack_458;
  uStack_410 = uStack_450;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_418,&DAT_0129a9ee,0x19);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1838;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1b9cb0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1b9970;
  puStack_988 = &UNK_0ec9a9d0;
  puStack_980 = &UNK_0ec9abd0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_3a8 = uStack_3e8;
  uStack_3b8 = uStack_3f8;
  uStack_3b0 = uStack_3f0;
  uStack_3c8 = uStack_408;
  uStack_3c0 = uStack_400;
  lStack_3d8 = lStack_418;
  uStack_3d0 = uStack_410;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_3d8,&DAT_011fde56,0x18);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b18b0;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1bc2a0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1bbf80;
  puStack_988 = &UNK_0ec9adb0;
  puStack_980 = &UNK_0ec9af10;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_368 = uStack_3a8;
  uStack_378 = uStack_3b8;
  uStack_370 = uStack_3b0;
  uStack_388 = uStack_3c8;
  uStack_380 = uStack_3c0;
  lStack_398 = lStack_3d8;
  uStack_390 = uStack_3d0;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_398,&DAT_01267652,0x18);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1928;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1bd3d0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1bd0b0;
  puStack_988 = &UNK_0ec9b0f0;
  puStack_980 = &UNK_0ec9b260;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_328 = uStack_368;
  uStack_338 = uStack_378;
  uStack_330 = uStack_370;
  uStack_348 = uStack_388;
  uStack_340 = uStack_380;
  lStack_358 = lStack_398;
  uStack_350 = uStack_390;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_358,&DAT_013bbc08,0x16);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4bcd88;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e3f2b10;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e3f27d0;
  puStack_988 = &UNK_0ec9b440;
  puStack_980 = &UNK_0ec9b600;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_2e8 = uStack_328;
  uStack_2f8 = uStack_338;
  uStack_2f0 = uStack_330;
  uStack_308 = uStack_348;
  uStack_300 = uStack_340;
  lStack_318 = lStack_358;
  uStack_310 = uStack_350;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_318,&DAT_012c5efa,0x14);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b19a0;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1c0fd0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1c0c90;
  puStack_988 = &UNK_0ec9b7e0;
  puStack_980 = &UNK_0ec9b9e0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_2a8 = uStack_2e8;
  uStack_2b8 = uStack_2f8;
  uStack_2b0 = uStack_2f0;
  uStack_2c8 = uStack_308;
  uStack_2c0 = uStack_300;
  lStack_2d8 = lStack_318;
  uStack_2d0 = uStack_310;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_2d8,&DAT_01489283,0x10);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1a90;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1c37b0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1c3490;
  puStack_988 = &UNK_0ec9bbc0;
  puStack_980 = &UNK_0ec9bd40;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_268 = uStack_2a8;
  uStack_278 = uStack_2b8;
  uStack_270 = uStack_2b0;
  uStack_288 = uStack_2c8;
  uStack_280 = uStack_2c0;
  lStack_298 = lStack_2d8;
  uStack_290 = uStack_2d0;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_298,&DAT_01350d4d,0x14);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1b08;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1c4bc0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1c4880;
  puStack_988 = &UNK_0ec9bf20;
  puStack_980 = &UNK_0ec9c150;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_228 = uStack_268;
  uStack_238 = uStack_278;
  uStack_230 = uStack_270;
  uStack_248 = uStack_288;
  uStack_240 = uStack_280;
  lStack_258 = lStack_298;
  uStack_250 = uStack_290;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_258,&DAT_0136ad12,0x11);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1b80;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1c6000;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1c5cc0;
  puStack_988 = &UNK_0ec9c330;
  puStack_980 = &UNK_0ec9c4a0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_1e8 = uStack_228;
  uStack_1f8 = uStack_238;
  uStack_1f0 = uStack_230;
  uStack_208 = uStack_248;
  uStack_200 = uStack_240;
  lStack_218 = lStack_258;
  uStack_210 = uStack_250;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_218,&DAT_014a4777,0x18);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1bf8;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1c7250;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1c6f30;
  puStack_988 = &UNK_0ec9c680;
  puStack_980 = &UNK_0ec9c7e0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_1a8 = uStack_1e8;
  uStack_1b8 = uStack_1f8;
  uStack_1b0 = uStack_1f0;
  uStack_1c8 = uStack_208;
  uStack_1c0 = uStack_200;
  lStack_1d8 = lStack_218;
  uStack_1d0 = uStack_210;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_1d8,&DAT_011e228e,0x19);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1c70;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1c8380;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1c8060;
  puStack_988 = &UNK_0ec9c9c0;
  puStack_980 = &UNK_0ec9cb20;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_168 = uStack_1a8;
  uStack_178 = uStack_1b8;
  uStack_170 = uStack_1b0;
  uStack_188 = uStack_1c8;
  uStack_180 = uStack_1c0;
  lStack_198 = lStack_1d8;
  uStack_190 = uStack_1d0;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_198,&UNK_013a11b5,0xe);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1ce8;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1cf580;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1cf240;
  puStack_988 = &UNK_0ec9cd00;
  puStack_980 = &UNK_0ec9ce80;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_128 = uStack_168;
  uStack_138 = uStack_178;
  uStack_130 = uStack_170;
  uStack_148 = uStack_188;
  uStack_140 = uStack_180;
  lStack_158 = lStack_198;
  uStack_150 = uStack_190;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_158,&DAT_012ccabc,0x13);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1d60;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1d0950;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1d0610;
  puStack_988 = &UNK_0ec9d060;
  puStack_980 = &UNK_0ec9d1e0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_e8 = uStack_128;
  uStack_f8 = uStack_138;
  uStack_f0 = uStack_130;
  uStack_108 = uStack_148;
  uStack_100 = uStack_140;
  lStack_118 = lStack_158;
  uStack_110 = uStack_150;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_118,&DAT_0138617a,0x17);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1dd8;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1d1aa0;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1d1780;
  puStack_988 = &UNK_0ec9d3c0;
  puStack_980 = &UNK_0ec9d520;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_a8 = uStack_e8;
  uStack_b8 = uStack_f8;
  uStack_b0 = uStack_f0;
  uStack_c8 = uStack_108;
  uStack_c0 = uStack_100;
  lStack_d8 = lStack_118;
  uStack_d0 = uStack_110;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_d8,&DAT_012e74a9,0x17);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b1e50;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e1d2f70;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e1d2c30;
  puStack_988 = &UNK_0ec9d700;
  puStack_980 = &UNK_0ec9d880;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  uStack_68 = uStack_a8;
  uStack_78 = uStack_b8;
  uStack_70 = uStack_b0;
  uStack_88 = uStack_c8;
  uStack_80 = uStack_c0;
  lStack_98 = lStack_d8;
  uStack_90 = uStack_d0;
  func_0x048b0bc0(&pcStack_940);
  func_0x0ec95920(auStack_958,&lStack_98,&DAT_011fddb3,0x12);
  pcVar9 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (pcVar9 == (code *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *(undefined **)pcVar9 = &UNK_0f4b8458;
  if (pcStack_940 != (code *)0x0) {
    lVar6 = *(long *)pcStack_940;
    pcStack_940 = pcVar9;
    (**(code **)(lVar6 + 8))();
    pcVar9 = pcStack_940;
  }
  pcStack_940 = pcVar9;
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_948);
  uStack_9c0 = 0;
  puStack_9b8 = (undefined *)((ulong)puStack_9b8 & 0xffffffff00000000);
  pcStack_9b0 = (code *)0x1;
  uStack_9a8 = 0;
  puStack_9a0 = &UNK_0e2fd230;
  puStack_998 = &SUB_048b06d0;
  puStack_990 = &UNK_0e2fcf10;
  puStack_988 = &UNK_0ec9da60;
  puStack_980 = &UNK_0ec9dbd0;
  uStack_978 = 0;
  uStack_970 = 0;
  plStack_968 = (long *)0x0;
  func_0x048b05a0(auStack_958._8_8_,&uStack_9c8);
  plVar7 = plStack_968;
  if (plStack_968 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_968 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_968 + 0x10))(plStack_968);
      FUN_0412c2d0(plVar7);
    }
  }
  func_0x0ec95b80(auStack_958);
  func_0x048b0bc0(&pcStack_940);
  if ((uVar12 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar12 & 0xff00ffffffffffff) - 8);
  }
  if ((uVar15 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar15 & 0xff00ffffffffffff) - 8);
  }
  if ((uStack_808 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_808 & 0xff00ffffffffffff) - 8);
  }
  uStack_808 = 0;
  if ((uStack_810 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_810 & 0xff00ffffffffffff) - 8);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14eaba0  [cereal:document
 */
