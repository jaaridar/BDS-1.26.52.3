/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcd9fab0 (ELF vaddr 0xcc9fab0)
 * Label: caller-of-callee
 * Body:  [[0cd9fab0, 0cda23fa]]
 * Ghidra: FUN_0cd9fab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cd9fab0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  long *plVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  code *pcVar19;
  bool bVar20;
  undefined8 uStack_9c8;
  long *plStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  code *pcStack_9a8;
  undefined *puStack_9a0;
  undefined *puStack_998;
  undefined8 uStack_990;
  undefined4 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_8f8;
  ulong uStack_8f0;
  long lStack_8e8;
  undefined8 uStack_8d8;
  ulong uStack_8d0;
  long lStack_8c8;
  undefined8 uStack_8b8;
  ulong uStack_8b0;
  undefined4 *puStack_8a8;
  ulong uStack_8a0;
  undefined *puStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined1 *puStack_860;
  undefined *puStack_858;
  undefined *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  long *plStack_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined8 uStack_820;
  ulong uStack_818;
  undefined8 uStack_810;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  long *plStack_7f8;
  long *plStack_7f0;
  undefined4 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined *puStack_7d0;
  undefined1 *puStack_7c8;
  undefined *puStack_7c0;
  undefined *puStack_7b8;
  undefined *puStack_7b0;
  undefined4 uStack_7a8;
  undefined8 uStack_7a0;
  long *plStack_798;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 uStack_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  char cStack_758;
  ulong uStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  undefined1 *puStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  long *plStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  undefined8 uStack_6c0;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined *puStack_688;
  undefined *puStack_680;
  undefined8 uStack_678;
  undefined1 *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long *plStack_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined8 uStack_630;
  ulong uStack_628;
  undefined8 uStack_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined *puStack_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  int iStack_5e8;
  int iStack_5e4;
  int iStack_5e0;
  undefined4 uStack_5dc;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 uStack_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  int iStack_4e0;
  int iStack_4dc;
  undefined1 auStack_4d8 [8];
  undefined *puStack_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  int iStack_450;
  undefined4 uStack_44c;
  undefined1 uStack_448;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined1 uStack_420;
  undefined *puStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 uStack_400;
  undefined1 auStack_3f8 [8];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined *puStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined1 uStack_280;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  undefined1 uStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  char cStack_168;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  func_0x0b66c780();
  if ((DAT_0f7053a8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7053a8), iVar6 != 0)) {
    func_0x0cdc6b70();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f705328,0xf53dab8);
    func_0x0410844d(&DAT_0f7053a8);
  }
  puVar18 = (undefined *)(param_1 + 0x18);
  plVar8 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f705328 + 4)) * 8);
  do {
    lVar10 = *plVar8;
    if (lVar10 == -1) goto LAB_0cd9fb30;
    plVar8 = (long *)(*(long *)(param_1 + 0x30) + lVar10 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar10 * 0x18) != *(uint *)(_DAT_0f705328 + 4))
  ;
  if (plVar8 == *(long **)(param_1 + 0x38)) {
LAB_0cd9fb30:
    puVar7 = &DAT_0f705328;
    if (iRam000000000f705388 != -0x2b3da790) goto LAB_0cd9fbb2;
LAB_0cd9fb5b:
    lVar10 = *(long *)(puVar7 + 0x68);
    if (lVar10 == 0) goto LAB_0cd9fbb2;
    bVar20 = (*(byte *)(lVar10 + 8) & 1) != 0;
    lVar16 = lVar10 + 9;
    if (bVar20) {
      lVar16 = *(long *)(lVar10 + 0x18);
    }
    uVar15 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
    if (bVar20) {
      uVar15 = *(ulong *)(lVar10 + 0x10);
    }
    func_0x0cdc83f0(&uStack_788,param_1,lVar16,uVar15);
    if (cStack_758 != '\0') goto LAB_0cd9fb98;
LAB_0cd9fbd0:
    func_0x0cdc8f20(&uStack_9c8,&uStack_788,&UNK_013762e9,10,1);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012348;
    if (uStack_9b0 != (long *)0x0) {
      lVar10 = *uStack_9b0;
      uStack_9b0 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_9b0;
    }
    uStack_9b0 = plVar8;
    puStack_6a8 = (undefined *)CONCAT44(puStack_6a8._4_4_,(undefined4)uStack_9b8);
    uStack_6a0 = 0;
    uStack_698 = (ulong)uStack_698._4_4_ << 0x20;
    uStack_690 = 1;
    puStack_688 = (undefined *)0x0;
    puStack_680 = &UNK_05ea71a0;
    uStack_678 = &SUB_048b06d0;
    puStack_670 = &SUB_05e9fca0;
    puStack_668 = &UNK_0cdc94e0;
    puStack_660 = &UNK_0cdc96f0;
    uStack_658 = (ulong)uStack_658._4_4_ << 0x20;
    uStack_650 = 0;
    plStack_648 = (long *)0x0;
    func_0x048b05a0(plStack_9c0,&puStack_6a8);
    plVar8 = plStack_648;
    if (plStack_648 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_648 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_648 + 0x10))(plStack_648);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0cdc91e0(&uStack_9c8);
    cStack_168 = cStack_758;
    uStack_178 = uStack_768;
    uStack_174 = uStack_764;
    uStack_170 = uStack_760;
    uStack_16c = uStack_75c;
    uStack_188 = (undefined4)uStack_778;
    uStack_184 = uStack_778._4_4_;
    uStack_180 = uStack_770;
    uStack_17c = uStack_76c;
    uStack_198 = (undefined4)uStack_788;
    uStack_194 = uStack_788._4_4_;
    uStack_190 = (undefined4)uStack_780;
    uStack_18c = uStack_780._4_4_;
    func_0x048b0bc0(&uStack_9b0);
    func_0x0d928ca0(&puStack_608);
    uStack_6a0 = 0xffffffffffffffff;
    uStack_698 = 0;
    uStack_690 = CONCAT71(uStack_690._1_7_,0xff);
    puStack_6a8 = &UNK_0f48a648;
    uStack_678 = (undefined1 *)CONCAT44(uStack_5f4,uStack_5f8);
    puStack_670 = (undefined1 *)CONCAT71(puStack_670._1_7_,(undefined1)uStack_5f0);
    puStack_688 = &UNK_0f4e3c70;
    func_0x04167a20(&puStack_668,&iStack_5e8);
    uStack_658 = uStack_5d8;
    uStack_650 = uStack_5d0;
    plStack_648 = (long *)uStack_5c8;
    uStack_640 = (undefined4)uStack_5c0;
    uStack_63c = uStack_5c0._4_4_;
    uStack_638 = (undefined4)uStack_5b8;
    uStack_634 = uStack_5b8._4_4_;
    uStack_5c0 = 0;
    uStack_5b8 = (long *)0x0;
    uStack_630 = uStack_5b0;
    uStack_628 = uStack_5a8;
    uStack_620 = uStack_5a0;
    uStack_618 = (undefined4)uStack_598;
    uStack_614 = uStack_598._4_4_;
    uStack_610 = uStack_590;
    uStack_60c = uStack_58c;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    uStack_598 = 0;
    func_0x0cdc6900(&uStack_d8,&uStack_198,&puStack_6a8);
    bVar5 = DAT_0f705148;
    uVar15 = _DAT_0f705150;
    if ((DAT_0f705148 & 1) == 0) {
      uVar15 = (ulong)(DAT_0f705148 >> 1);
    }
    uVar2 = uVar15 + 0x48;
    if (0xfffffffffffffff7 < uVar2) {
      func_0x04882e30();
LAB_0cda22f7:
      func_0x04882e30();
      goto LAB_0cda22fc;
    }
    puStack_580 = puVar18;
    if (uVar2 < 0x17) {
      uStack_8b0 = 0;
      puStack_8a8 = (undefined4 *)0x0;
      uStack_8b8 = (ulong)(byte)((char)uVar2 * '\x02');
    }
    else {
      uVar17 = 0x1a;
      if ((uVar2 | 7) != 0x17) {
        uVar17 = (uVar2 | 7) + 1;
      }
      puStack_8a8 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (puStack_8a8 == (undefined4 *)0x0) {
        func_0x0eec74c0(uVar17,0);
      }
      uStack_8b8 = uVar17 | 1;
      uStack_8b0 = uVar2;
    }
    puVar3 = puStack_8a8 + 0x12;
    bVar20 = (uStack_8b8 & 1) != 0;
    puVar14 = (undefined4 *)((long)&uStack_8b8 + 1);
    if (bVar20) {
      puVar14 = puStack_8a8;
    }
    *(undefined8 *)(puVar14 + 0xc) = _DAT_01352a09;
    *(undefined8 *)(puVar14 + 0xe) = _UNK_01352a11;
    *(undefined8 *)(puVar14 + 8) = _DAT_013529f9;
    *(undefined8 *)(puVar14 + 10) = _UNK_01352a01;
    *(undefined8 *)(puVar14 + 4) = _DAT_013529e9;
    *(undefined8 *)(puVar14 + 6) = _UNK_013529f1;
    *puVar14 = _DAT_013529d9;
    puVar14[1] = _UNK_013529dd;
    puVar14[2] = _UNK_013529e1;
    puVar14[3] = _UNK_013529e5;
    *(undefined8 *)(puVar14 + 0x10) = 0x202e6b636f6c6220;
    puVar14 = (undefined4 *)((long)&uStack_870 + 1);
    if (bVar20) {
      puVar14 = puVar3;
    }
    if (uVar15 != 0) {
      uVar13 = _DAT_0f705158;
      if ((bVar5 & 1) == 0) {
        uVar13 = 0xf705149;
      }
      func_0x0eee2ee0(puVar14,uVar13,uVar15);
    }
    *(undefined1 *)((long)puVar14 + uVar15) = 0;
    uStack_368 = uStack_a8;
    uStack_378 = uStack_b8;
    uStack_374 = uStack_b4;
    uStack_370 = uStack_b0;
    uStack_36c = uStack_ac;
    uStack_388 = uStack_c8;
    uStack_384 = uStack_c4;
    uStack_380 = uStack_c0;
    uStack_37c = uStack_bc;
    uStack_398 = uStack_d8;
    uStack_394 = uStack_d4;
    uStack_390 = uStack_d0;
    uStack_38c = uStack_cc;
    func_0x0cdc89e0(&uStack_9c8,CONCAT44(uStack_d4,uStack_d8) + 0x18);
    if (uStack_9b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_9b0) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      lVar10 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar10 != plStack_9c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar10 = *(long *)(piVar12 + 0xc);
      }
LAB_0cda007f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_9b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != (int)uStack_9b0) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_0cda007f;
      }
      if (uStack_9b0._4_4_ == 0) {
        *(uint *)((long)uStack_9b8 + 0x18U) = *(uint *)((long)uStack_9b8 + 0x18U) | 0x40000;
      }
    }
    puVar18 = &UNK_05ea71a0;
    func_0x0cdc8f20(&uStack_9c8,&uStack_398,&UNK_0140a58e,7,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012348;
    if (uStack_9b0 != (long *)0x0) {
      lVar10 = *uStack_9b0;
      uStack_9b0 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_9b0;
    }
    uStack_9b0 = plVar8;
    puStack_748 = (undefined *)CONCAT44(puStack_748._4_4_,(undefined4)uStack_9b8);
    uStack_740 = 0;
    uStack_738 = (ulong)uStack_738._4_4_ << 0x20;
    lStack_730 = 1;
    uStack_728 = (undefined *)0x0;
    uStack_720 = &UNK_05ea71a0;
    puStack_718 = &SUB_048b06d0;
    puStack_710 = &SUB_05e9fca0;
    puStack_708 = &UNK_0cdc9b90;
    puStack_700 = &UNK_0cdc9da0;
    uStack_6f8 = (ulong)uStack_6f8._4_4_ << 0x20;
    uStack_6f0 = 0;
    plStack_6e8 = (long *)0x0;
    func_0x048b05a0(plStack_9c0,&puStack_748);
    plVar8 = plStack_6e8;
    if (plStack_6e8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_6e8 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_6e8 + 0x10))(plStack_6e8);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0cdc91e0(&uStack_9c8);
    uStack_128 = (undefined1)uStack_368;
    uStack_138 = uStack_378;
    uStack_134 = uStack_374;
    uStack_130 = uStack_370;
    uStack_12c = uStack_36c;
    uStack_148 = uStack_388;
    uStack_144 = uStack_384;
    uStack_140 = uStack_380;
    uStack_13c = uStack_37c;
    uStack_158 = uStack_398;
    uStack_154 = uStack_394;
    uStack_150 = uStack_390;
    uStack_14c = uStack_38c;
    func_0x048b0bc0(&uStack_9b0);
    func_0x0d928ca0(&puStack_578);
    uStack_740 = 0xffffffffffffffff;
    uStack_738 = 0;
    lStack_730 = CONCAT71(lStack_730._1_7_,0xff);
    puStack_748 = &UNK_0f48a648;
    puStack_710 = (undefined1 *)CONCAT71(puStack_710._1_7_,(undefined1)uStack_560);
    uStack_728 = &UNK_0f4e3c70;
    func_0x04167a20(&puStack_708,&uStack_558);
    puStack_700 = (undefined *)uStack_550;
    uStack_6f8 = uStack_548;
    uStack_6f0 = uStack_540;
    plStack_6e8 = (long *)uStack_538;
    uStack_6e0 = (undefined4)uStack_530;
    uStack_6dc = uStack_530._4_4_;
    uStack_6d8 = (undefined4)uStack_528;
    uStack_6d4 = uStack_528._4_4_;
    uStack_530 = 0;
    uStack_528 = (long *)0x0;
    uStack_6d0 = uStack_520;
    uStack_6c8 = uStack_518;
    uStack_6c0 = uStack_510;
    uStack_6b8 = (undefined4)uStack_508;
    uStack_6b4 = uStack_508._4_4_;
    uStack_6b0 = uStack_500;
    uStack_6ac = uStack_4fc;
    uStack_518 = 0;
    uStack_510 = 0;
    uStack_508 = 0;
    func_0x0cdc6900(&uStack_a0,&uStack_158,&puStack_748);
    uStack_328 = uStack_70;
    uStack_338 = uStack_80;
    uStack_334 = uStack_7c;
    uStack_330 = uStack_78;
    uStack_32c = uStack_74;
    uStack_348 = uStack_90;
    uStack_344 = uStack_8c;
    uStack_340 = uStack_88;
    uStack_33c = uStack_84;
    uStack_358 = uStack_a0;
    uStack_354 = uStack_9c;
    uStack_350 = uStack_98;
    uStack_34c = uStack_94;
    func_0x0cdc89e0(&uStack_9c8,CONCAT44(uStack_9c,uStack_a0) + 0x18);
    if (uStack_9b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_9b0) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      lVar10 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar10 != plStack_9c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar10 = *(long *)(piVar12 + 0xc);
      }
LAB_0cda041f:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_9b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != (int)uStack_9b0) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_0cda041f;
      }
      if (uStack_9b0._4_4_ == 0) {
        *(uint *)((long)uStack_9b8 + 0x18U) = *(uint *)((long)uStack_9b8 + 0x18U) | 0x40000;
      }
    }
    func_0x0cdc8f20(&uStack_9c8,&uStack_358,&UNK_012e9013,0xd,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012348;
    if (uStack_9b0 != (long *)0x0) {
      lVar10 = *uStack_9b0;
      uStack_9b0 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_9b0;
    }
    uStack_9b0 = plVar8;
    puStack_898 = (undefined *)CONCAT44(puStack_898._4_4_,(undefined4)uStack_9b8);
    uStack_890 = 0;
    uStack_888 = (ulong)uStack_888._4_4_ << 0x20;
    uStack_880 = 1;
    uStack_878 = (undefined *)0x0;
    uStack_870 = &UNK_05ea71a0;
    uStack_868 = &SUB_048b06d0;
    puStack_860 = &SUB_05e9fca0;
    puStack_858 = &UNK_0cdc9f80;
    puStack_850 = &UNK_0cdca190;
    uStack_848 = (ulong)uStack_848._4_4_ << 0x20;
    uStack_840 = 0;
    plStack_838 = (long *)0x0;
    func_0x048b05a0(plStack_9c0,&puStack_898);
    plVar8 = plStack_838;
    if (plStack_838 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_838 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_838 + 0x10))(plStack_838);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0cdc91e0(&uStack_9c8);
    uStack_1e8 = (undefined1)uStack_328;
    uStack_1f8 = uStack_338;
    uStack_1f4 = uStack_334;
    uStack_1f0 = uStack_330;
    uStack_1ec = uStack_32c;
    uStack_208 = uStack_348;
    uStack_204 = uStack_344;
    uStack_200 = uStack_340;
    uStack_1fc = uStack_33c;
    uStack_218 = uStack_358;
    uStack_214 = uStack_354;
    uStack_210 = uStack_350;
    uStack_20c = uStack_34c;
    func_0x048b0bc0(&uStack_9b0);
    bVar5 = DAT_0f705100;
    uVar15 = _DAT_0f705108;
    if ((DAT_0f705100 & 1) == 0) {
      uVar15 = (ulong)(DAT_0f705100 >> 1);
    }
    uVar2 = uVar15 + 1;
    if (0xfffffffffffffff7 < uVar2) goto LAB_0cda22f7;
    if (uVar2 < 0x17) {
      uStack_8d0 = 0;
      lStack_8c8 = 0;
      uStack_8d8 = (ulong)(byte)((char)uVar2 * '\x02');
      lVar10 = (long)&uStack_8d8 + 1;
      if (uVar15 != 0) goto joined_r0x0cda0680;
    }
    else {
      uVar17 = 0x1a;
      if ((uVar2 | 7) != 0x17) {
        uVar17 = (uVar2 | 7) + 1;
      }
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
      if (lVar10 == 0) {
        func_0x0eec74c0(uVar17,0);
      }
      uStack_8d8 = uVar17 | 1;
      uStack_8d0 = uVar2;
      lStack_8c8 = lVar10;
joined_r0x0cda0680:
      uVar13 = _DAT_0f705110;
      if ((bVar5 & 1) == 0) {
        uVar13 = 0xf705101;
      }
      func_0x0eee2ee0(lVar10,uVar13,uVar15);
    }
    *(undefined2 *)(lVar10 + uVar15) = 0x20;
    uVar15 = (ulong)(DAT_0f705118 >> 1);
    uVar13 = 0xf705119;
    if ((DAT_0f705118 & 1) != 0) {
      uVar15 = _DAT_0f705120;
      uVar13 = _DAT_0f705128;
    }
    puVar9 = (ulong *)func_0x0412f8c0(&uStack_8d8,uVar13,uVar15);
    uVar15 = *puVar9;
    uVar2 = puVar9[2];
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    uStack_2e8 = CONCAT71(uStack_1e7,uStack_1e8);
    uStack_2f8 = uStack_1f8;
    uStack_2f4 = uStack_1f4;
    uStack_2f0 = uStack_1f0;
    uStack_2ec = uStack_1ec;
    uStack_308 = uStack_208;
    uStack_304 = uStack_204;
    uStack_300 = uStack_200;
    uStack_2fc = uStack_1fc;
    uStack_318 = uStack_218;
    uStack_314 = uStack_214;
    uStack_310 = uStack_210;
    uStack_30c = uStack_20c;
    func_0x0cdc89e0(&uStack_9c8,CONCAT44(uStack_214,uStack_218) + 0x18);
    if (uStack_9b0._4_4_ == 2) {
      piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x60);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_9b0) {
        piVar12 = piVar12 + 0x16;
        iVar6 = *piVar12;
      }
      lVar10 = *(long *)(piVar12 + 0xc);
      while ((long *)lVar10 != plStack_9c0) {
        piVar12 = *(int **)(piVar12 + 0xe);
        lVar10 = *(long *)(piVar12 + 0xc);
      }
LAB_0cda07ef:
      *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
    }
    else {
      if (uStack_9b0._4_4_ == 1) {
        piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != (int)uStack_9b0) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        goto LAB_0cda07ef;
      }
      if (uStack_9b0._4_4_ == 0) {
        *(uint *)((long)uStack_9b8 + 0x18U) = *(uint *)((long)uStack_9b8 + 0x18U) | 0x40000;
      }
    }
    uStack_8a0 = uVar15;
    uStack_750 = uVar2;
    func_0x0cdc8f20(&uStack_9c8,&uStack_318,&UNK_0124fb9b,0xd,0x10);
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012348;
    if (uStack_9b0 != (long *)0x0) {
      lVar10 = *uStack_9b0;
      uStack_9b0 = plVar8;
      (**(code **)(lVar10 + 8))();
      plVar8 = uStack_9b0;
    }
    uStack_9b0 = plVar8;
    puStack_898 = (undefined *)CONCAT44(puStack_898._4_4_,(undefined4)uStack_9b8);
    uStack_890 = 0;
    uStack_888 = uStack_888 & 0xffffffff00000000;
    uStack_880 = 1;
    uStack_878 = (undefined *)0x0;
    uStack_870 = &UNK_05ea71a0;
    uStack_868 = &SUB_048b06d0;
    puStack_860 = &SUB_05e9fca0;
    puStack_858 = &UNK_0cdca370;
    puStack_850 = &UNK_0cdca590;
    uStack_848 = uStack_848 & 0xffffffff00000000;
    uStack_840 = 0;
    plStack_838 = (long *)0x0;
    func_0x048b05a0(plStack_9c0,&puStack_898);
    plVar8 = plStack_838;
    if (plStack_838 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_838 + 1;
      lVar10 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plStack_838 + 0x10))(plStack_838);
        func_0x0412c2d0(plVar8);
      }
    }
    func_0x0cdc91e0(&uStack_9c8);
    uStack_e8 = (undefined1)uStack_2e8;
    uStack_f8 = uStack_2f8;
    uStack_f4 = uStack_2f4;
    uStack_f0 = uStack_2f0;
    uStack_ec = uStack_2ec;
    uStack_108 = uStack_308;
    uStack_104 = uStack_304;
    uStack_100 = uStack_300;
    uStack_fc = uStack_2fc;
    uStack_118 = uStack_318;
    uStack_114 = uStack_314;
    uStack_110 = uStack_310;
    uStack_10c = uStack_30c;
    func_0x048b0bc0(&uStack_9b0);
    func_0x0d928ea0(&uStack_4f8);
    uStack_890 = 0xffffffffffffffff;
    uStack_888 = 0;
    uStack_880 = CONCAT71(uStack_880._1_7_,0xff);
    puStack_898 = &UNK_0f48a648;
    uStack_870 = (undefined *)CONCAT44(uStack_4ec,uStack_4f0);
    uStack_868 = (undefined1 *)CONCAT44(uStack_4e4,uStack_4e8);
    puStack_860 = (undefined1 *)CONCAT71(puStack_860._1_7_,(undefined1)iStack_4e0);
    uStack_878._0_4_ = 0xf4e3c70;
    uStack_878._4_4_ = 0;
    func_0x04167a20(&puStack_858,auStack_4d8);
    puStack_850 = puStack_4d0;
    uStack_848 = uStack_4c8;
    uStack_840 = uStack_4c0;
    plStack_838 = plStack_4b8;
    uStack_830 = (undefined4)uStack_4b0;
    uStack_82c = uStack_4b0._4_4_;
    uStack_828 = (undefined4)uStack_4a8;
    uStack_824 = uStack_4a8._4_4_;
    uStack_4b0 = 0;
    uStack_4a8 = (long *)0x0;
    uStack_820 = uStack_4a0;
    uStack_818 = uStack_498;
    uStack_810 = uStack_490;
    uStack_808 = (undefined4)uStack_488;
    uStack_804 = uStack_488._4_4_;
    uStack_800 = uStack_480;
    uStack_7fc = uStack_47c;
    uStack_498 = 0;
    uStack_490 = 0;
    uStack_488 = 0;
    func_0x0cdc6900(&uStack_68,&uStack_118,&puStack_898);
    bVar5 = DAT_0f705130;
    pcVar19 = (code *)(ulong)DAT_0f705130;
    uVar15 = _DAT_0f705138;
    if ((DAT_0f705130 & 1) == 0) {
      uVar15 = (ulong)(DAT_0f705130 >> 1);
    }
    uVar2 = uVar15 + 1;
    if (uVar2 < 0xfffffffffffffff8) {
      if (uVar2 < 0x17) {
        uStack_8f0 = 0;
        lStack_8e8 = 0;
        uStack_8f8 = (ulong)(byte)((char)uVar2 * '\x02');
        lVar10 = (long)&uStack_8f8 + 1;
        if (uVar15 != 0) goto joined_r0x0cda0b5c;
      }
      else {
        uVar17 = 0x1a;
        if ((uVar2 | 7) != 0x17) {
          uVar17 = (uVar2 | 7) + 1;
        }
        lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (lVar10 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_8f8 = uVar17 | 1;
        uStack_8f0 = uVar2;
        lStack_8e8 = lVar10;
joined_r0x0cda0b5c:
        uVar13 = _DAT_0f705140;
        if ((bVar5 & 1) == 0) {
          uVar13 = 0xf705131;
        }
        func_0x0eee2ee0(lVar10,uVar13,uVar15);
      }
      *(undefined2 *)(lVar10 + uVar15) = 0x20;
      uVar15 = (ulong)(DAT_0f705160 >> 1);
      uVar13 = 0xf705161;
      if ((DAT_0f705160 & 1) != 0) {
        uVar15 = _DAT_0f705168;
        uVar13 = _DAT_0f705170;
      }
      puVar9 = (ulong *)func_0x0412f8c0(&uStack_8f8,uVar13,uVar15);
      uVar15 = *puVar9;
      uVar2 = puVar9[2];
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      uStack_2a8 = uStack_38;
      uStack_2b8 = uStack_48;
      uStack_2b4 = uStack_44;
      iStack_2b0 = iStack_40;
      uStack_2ac = uStack_3c;
      uStack_2c8 = uStack_58;
      uStack_2c4 = uStack_54;
      uStack_2c0 = uStack_50;
      uStack_2bc = uStack_4c;
      uStack_2d8 = uStack_68;
      uStack_2d4 = uStack_64;
      uStack_2d0 = uStack_60;
      uStack_2cc = uStack_5c;
      func_0x0cdc89e0(&uStack_9c8,CONCAT44(uStack_64,uStack_68) + 0x18);
      if (uStack_9b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x60);
        iVar6 = *piVar12;
        while (iVar6 != (int)uStack_9b0) {
          piVar12 = piVar12 + 0x16;
          iVar6 = *piVar12;
        }
        lVar10 = *(long *)(piVar12 + 0xc);
        while ((long *)lVar10 != plStack_9c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar10 = *(long *)(piVar12 + 0xc);
        }
LAB_0cda0cbf:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
      }
      else {
        if (uStack_9b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x48);
          iVar6 = *piVar12;
          while (iVar6 != (int)uStack_9b0) {
            piVar12 = piVar12 + 0x1a;
            iVar6 = *piVar12;
          }
          goto LAB_0cda0cbf;
        }
        if (uStack_9b0._4_4_ == 0) {
          *(uint *)((long)uStack_9b8 + 0x18U) = *(uint *)((long)uStack_9b8 + 0x18U) | 0x40000;
        }
      }
      func_0x0cdc8f20(&uStack_9c8,&uStack_2d8,&UNK_01423c35,0xf,0x10);
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar8 = (long)&UNK_0f403ef8;
      if (uStack_9b0 != (long *)0x0) {
        lVar10 = *uStack_9b0;
        uStack_9b0 = plVar8;
        (**(code **)(lVar10 + 8))();
        plVar8 = uStack_9b0;
      }
      uStack_9b0 = plVar8;
      plStack_7f8 = (long *)CONCAT44(plStack_7f8._4_4_,(undefined4)uStack_9b8);
      plStack_7f0 = (long *)0x0;
      uStack_7e8 = 0;
      uStack_7e0 = 1;
      uStack_7d8 = 0;
      puStack_7d0 = &UNK_0cdcf920;
      puStack_7c8 = &SUB_048b06d0;
      puStack_7c0 = &UNK_0cdcdd30;
      puStack_7b8 = &UNK_0cdcf930;
      puStack_7b0 = &UNK_0cdcfb00;
      uStack_7a8 = 0;
      uStack_7a0 = 0;
      plStack_798 = (long *)0x0;
      func_0x048b05a0(plStack_9c0,&plStack_7f8);
      plVar8 = plStack_798;
      if (plStack_798 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_798 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_798 + 0x10))(plStack_798);
          func_0x0412c2d0(plVar8);
        }
      }
      iVar6 = *(int *)((long)plStack_9c0 + 0x1c);
      if (iVar6 == 2) {
        piVar12 = *(int **)(*(long *)(*(long *)((long)plStack_9c0 + 0x10) + 0x78) + 0x60);
        iVar6 = *piVar12;
        while (iVar6 != *(int *)((long)plStack_9c0 + 0x18)) {
          piVar12 = piVar12 + 0x16;
          iVar6 = *piVar12;
        }
        lVar10 = *(long *)(piVar12 + 0xc);
        while (lVar10 != *(long *)((long)plStack_9c0 + 8)) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar10 = *(long *)(piVar12 + 0xc);
        }
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
      }
      else if (iVar6 == 1) {
        piVar12 = *(int **)(*(long *)(*(long *)((long)plStack_9c0 + 0x10) + 0x78) + 0x48);
        iVar6 = *piVar12;
        while (iVar6 != *(int *)((long)plStack_9c0 + 0x18)) {
          piVar12 = piVar12 + 0x1a;
          iVar6 = *piVar12;
        }
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
      }
      else if (iVar6 == 0) {
        puVar4 = (uint *)(*(long *)((long)plStack_9c0 + 0x10) + 0x18);
        *puVar4 = *puVar4 | 0x40000;
      }
      func_0x0cdc91e0(&uStack_9c8);
      uStack_448 = (undefined1)uStack_2a8;
      uStack_458 = uStack_2b8;
      uStack_454 = uStack_2b4;
      iStack_450 = iStack_2b0;
      uStack_44c = uStack_2ac;
      uStack_468 = uStack_2c8;
      uStack_464 = uStack_2c4;
      uStack_460 = uStack_2c0;
      uStack_45c = uStack_2bc;
      uStack_478 = uStack_2d8;
      uStack_474 = uStack_2d4;
      uStack_470 = uStack_2d0;
      uStack_46c = uStack_2cc;
      func_0x048b0bc0(&uStack_9b0);
      if (iStack_450 == 4) {
        lVar10 = func_0x0cdc9a10(&uStack_478);
        lVar10 = *(long *)(lVar10 + 0x48);
        puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puVar11 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
LAB_0cda0fd4:
        puVar11[1] = 0x40;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 0xff;
        *puVar11 = &UNK_0f4e3d70;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        plVar8 = *(long **)(lVar10 + 8);
        *(undefined8 **)(lVar10 + 8) = puVar11;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x28))();
        }
      }
      else if (iStack_450 == 1) {
        lVar10 = func_0x0cdc98c0(&uStack_478);
        lVar10 = *(long *)(lVar10 + 0x58);
        puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
        if (puVar11 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x48,0);
        }
        goto LAB_0cda0fd4;
      }
      uStack_1a8 = uStack_448;
      uStack_1b8 = uStack_458;
      uStack_1b4 = uStack_454;
      iStack_1b0 = iStack_450;
      uStack_1ac = uStack_44c;
      uStack_1c8 = uStack_468;
      uStack_1c4 = uStack_464;
      uStack_1c0 = uStack_460;
      uStack_1bc = uStack_45c;
      uStack_1d8 = uStack_478;
      uStack_1d4 = uStack_474;
      uStack_1d0 = uStack_470;
      uStack_1cc = uStack_46c;
      func_0x0cdc89e0(&uStack_9c8,CONCAT44(uStack_474,uStack_478) + 0x18);
      if (uStack_9b0._4_4_ == 2) {
        piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x60);
        iVar6 = *piVar12;
        while (iVar6 != (int)uStack_9b0) {
          piVar12 = piVar12 + 0x16;
          iVar6 = *piVar12;
        }
        lVar10 = *(long *)(piVar12 + 0xc);
        while ((long *)lVar10 != plStack_9c0) {
          piVar12 = *(int **)(piVar12 + 0xe);
          lVar10 = *(long *)(piVar12 + 0xc);
        }
LAB_0cda10bf:
        *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 4;
      }
      else {
        if (uStack_9b0._4_4_ == 1) {
          piVar12 = *(int **)(*(long *)((long)uStack_9b8 + 0x78) + 0x48);
          iVar6 = *piVar12;
          while (iVar6 != (int)uStack_9b0) {
            piVar12 = piVar12 + 0x1a;
            iVar6 = *piVar12;
          }
          goto LAB_0cda10bf;
        }
        if (uStack_9b0._4_4_ == 0) {
          *(uint *)((long)uStack_9b8 + 0x18U) = *(uint *)((long)uStack_9b8 + 0x18U) | 0x40000;
        }
      }
      func_0x0cdc8f20(&uStack_9c8,&uStack_1d8,&UNK_014db55d,7,0x10);
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(8,0);
      }
      *plVar8 = (long)&UNK_0f404048;
      if (uStack_9b0 != (long *)0x0) {
        lVar10 = *uStack_9b0;
        uStack_9b0 = plVar8;
        (**(code **)(lVar10 + 8))();
        plVar8 = uStack_9b0;
      }
      uStack_9b0 = plVar8;
      plStack_7f8 = (long *)CONCAT44(plStack_7f8._4_4_,(undefined4)uStack_9b8);
      plStack_7f0 = (long *)0x0;
      uStack_7e8 = 0;
      uStack_7e0 = 1;
      uStack_7d8 = 0;
      puStack_7d0 = &UNK_0cdd3790;
      puStack_7c8 = &SUB_048b06d0;
      puStack_7c0 = &UNK_0cdd2ee0;
      puStack_7b8 = &UNK_0cdd3850;
      puStack_7b0 = &UNK_0cdd3aa0;
      uStack_7a8 = 0;
      uStack_7a0 = 0;
      plStack_798 = (long *)0x0;
      func_0x048b05a0(plStack_9c0,&plStack_7f8);
      plVar8 = plStack_798;
      if (plStack_798 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_798 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_798 + 0x10))(plStack_798);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x0cdc91e0(&uStack_9c8);
      func_0x048b0bc0(&uStack_9b0);
      if ((uVar15 & 1) != 0) {
        func_0x0412a280(uVar2,uVar15 & 0xfffffffffffffffe);
      }
      if ((uStack_8f8 & 1) != 0) {
        func_0x0412a280(lStack_8e8,uStack_8f8 & 0xfffffffffffffffe);
      }
      puStack_898 = &UNK_0f48a648;
      uStack_878 = &UNK_0f4e3c70;
      if ((uStack_818 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_804,uStack_808),uStack_818 & 0xfffffffffffffffe);
      }
      plVar8 = (long *)CONCAT44(uStack_824,uStack_828);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x04167a40(&puStack_858);
      uStack_4f8 = &UNK_0f4e3c70;
      if ((uStack_498 & 1) != 0) {
        func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
      }
      plVar8 = uStack_4a8;
      if (uStack_4a8 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_4a8 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_4a8 + 0x10))(uStack_4a8);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x04167a40(auStack_4d8);
      if ((uStack_8a0 & 1) != 0) {
        func_0x0412a280(uStack_750,uStack_8a0 & 0xfffffffffffffffe);
      }
      puVar18 = puStack_580;
      if ((uStack_8d8 & 1) != 0) {
        func_0x0412a280(lStack_8c8,uStack_8d8 & 0xfffffffffffffffe);
      }
      puStack_748 = &UNK_0f48a648;
      uStack_728 = &UNK_0f4e3c70;
      if ((uStack_6c8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_6b4,uStack_6b8),uStack_6c8 & 0xfffffffffffffffe);
      }
      plVar8 = (long *)CONCAT44(uStack_6d4,uStack_6d8);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x04167a40(&puStack_708);
      puStack_578 = &UNK_0f4e3c70;
      if ((uStack_518 & 1) != 0) {
        func_0x0412a280(uStack_508,uStack_518 & 0xfffffffffffffffe);
      }
      plVar8 = uStack_528;
      if (uStack_528 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_528 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_528 + 0x10))(uStack_528);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x04167a40(&uStack_558);
      if ((uStack_8b8 & 1) != 0) {
        func_0x0412a280(puStack_8a8,uStack_8b8 & 0xfffffffffffffffe);
      }
      puStack_6a8 = &UNK_0f48a648;
      puStack_688 = &UNK_0f4e3c70;
      if ((uStack_628 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_614,uStack_618),uStack_628 & 0xfffffffffffffffe);
      }
      plVar8 = (long *)CONCAT44(uStack_634,uStack_638);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x04167a40(&puStack_668);
      puStack_608 = &UNK_0f4e3c70;
      if ((uStack_5a8 & 1) != 0) {
        func_0x0412a280(uStack_598,uStack_5a8 & 0xfffffffffffffffe);
      }
      plVar8 = uStack_5b8;
      if (uStack_5b8 != (long *)0x0) {
        LOCK();
        plVar1 = uStack_5b8 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*uStack_5b8 + 0x10))(uStack_5b8);
          func_0x0412c2d0(plVar8);
        }
      }
      func_0x04167a40(&iStack_5e8);
      lVar10 = func_0x0cde1540(puVar18);
      iVar6 = *(int *)(lVar10 + 0x60);
      goto joined_r0x0cd9fba7;
    }
    func_0x04882e30();
LAB_0cda2337:
    iVar6 = func_0x04108328(&DAT_0f706f90);
    if (iVar6 != 0) {
      func_0x0cde14d0(0xf706f78);
      func_0x0410844d(&DAT_0f706f90);
    }
  }
  else {
    puVar7 = (undefined *)plVar8[2];
    if (*(int *)(puVar7 + 0x60) == -0x2b3da790) goto LAB_0cd9fb5b;
LAB_0cd9fbb2:
    func_0x0cdc83f0(&uStack_788,param_1,0,0);
    if (cStack_758 == '\0') goto LAB_0cd9fbd0;
LAB_0cd9fb98:
    lVar10 = func_0x0cde1540(puVar18);
    iVar6 = *(int *)(lVar10 + 0x60);
joined_r0x0cd9fba7:
    if ((iVar6 == -0x2b3da790) && (lVar10 = *(long *)(lVar10 + 0x68), lVar10 != 0)) {
      bVar20 = (*(byte *)(lVar10 + 8) & 1) != 0;
      lVar16 = lVar10 + 9;
      if (bVar20) {
        lVar16 = *(long *)(lVar10 + 0x18);
      }
      uVar15 = (ulong)(*(byte *)(lVar10 + 8) >> 1);
      if (bVar20) {
        uVar15 = *(ulong *)(lVar10 + 0x10);
      }
      func_0x0cde8e80(&puStack_6a8,param_1,lVar16,uVar15);
      bVar5 = DAT_0f705148;
    }
    else {
      func_0x0cde8e80(&puStack_6a8,param_1,&UNK_014db4d5,0xe);
      bVar5 = DAT_0f705148;
    }
    if ((char)uStack_678 != '\0') {
      DAT_0f705148 = bVar5;
      return;
    }
    uVar15 = _DAT_0f705150;
    if ((bVar5 & 1) == 0) {
      uVar15 = (ulong)(bVar5 >> 1);
    }
    uVar2 = uVar15 + 0xf0;
    DAT_0f705148 = bVar5;
    if (uVar2 < 0xfffffffffffffff8) {
      if (uVar2 < 0x17) {
        uStack_780 = 0;
        uStack_778 = 0;
        uStack_788 = (ulong)(byte)((char)uVar2 * '\x02');
      }
      else {
        uVar17 = 0x1a;
        if ((uVar2 | 7) != 0x17) {
          uVar17 = (uVar2 | 7) + 1;
        }
        uStack_778 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17);
        if (uStack_778 == 0) {
          func_0x0eec74c0(uVar17,0);
        }
        uStack_788 = uVar17 | 1;
        uStack_780 = uVar2;
      }
      lVar16 = (long)&uStack_698 + 1;
      lVar10 = (long)&uStack_788 + 1;
      if ((uStack_788 & 1) != 0) {
        lVar16 = uStack_778 + 0xf0;
        lVar10 = uStack_778;
      }
      memcpy(lVar10,&UNK_0128274b,0xf0);
      if (uVar15 != 0) {
        uVar13 = _DAT_0f705158;
        if ((bVar5 & 1) == 0) {
          uVar13 = 0xf705149;
        }
        func_0x0eee2ee0(lVar16,uVar13,uVar15);
      }
      *(undefined1 *)(lVar16 + uVar15) = 0;
      uStack_558 = puStack_688;
      uStack_548 = uStack_678;
      uStack_568 = uStack_698;
      uStack_560 = uStack_690;
      puStack_578 = puStack_6a8;
      uStack_570 = (undefined4)uStack_6a0;
      uStack_56c = uStack_6a0._4_4_;
      puVar18 = (undefined *)0x1e1bc4d500000004;
      uStack_550 = 0x1e1bc4d500000004;
      if (DAT_0f706f90 == '\0') goto LAB_0cda2301;
    }
    else {
LAB_0cda22fc:
      func_0x04882e30();
LAB_0cda2301:
      iVar6 = func_0x04108328(&DAT_0f706f90);
      if (iVar6 != 0) {
        func_0x0cde14d0(0xf706f78);
        func_0x0410844d(&DAT_0f706f90);
      }
    }
    uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_550._4_4_);
    plStack_9c0 = (long *)0x0;
    uStack_9b8 = (long *)((ulong)uStack_9b8._4_4_ << 0x20);
    uStack_9b0 = (long *)0x1;
    pcVar19 = FUN_048aead0;
    pcStack_9a8 = FUN_048aead0;
    puStack_9a0 = &UNK_0c36d3b0;
    puStack_998 = &UNK_0cde98c0;
    uStack_990 = 0;
    uStack_988 = 0;
    uStack_980 = 0;
    uStack_978 = 0;
    func_0x049057f0(&uStack_570,&uStack_9c8);
    func_0x048aea50(&uStack_9c8);
    uStack_4e8 = (undefined4)uStack_560;
    uStack_4e4 = uStack_560._4_4_;
    iStack_4e0 = (int)uStack_558;
    iStack_4dc = uStack_558._4_4_;
    uStack_4f8 = (undefined *)CONCAT44(uStack_56c,uStack_570);
    uStack_4f0 = (undefined4)uStack_568;
    uStack_4ec = uStack_568._4_4_;
    plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (plVar8 == (long *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *plVar8 = (long)&UNK_0f012348;
    plStack_7f0 = (long *)0x0;
    uStack_7e8 = CONCAT31(uStack_7e8._1_3_,0xff);
    plStack_7f8 = plVar8;
    func_0x0cde9740(&uStack_9c8,&uStack_4f8,&plStack_7f8);
    if (plStack_7f0 != (long *)0x0) {
      (**(code **)(*plStack_7f0 + 0x28))();
    }
    if (plStack_7f8 != (long *)0x0) {
      (**(code **)(*plStack_7f8 + 8))();
    }
    puStack_608 = puStack_578;
    uStack_600 = uStack_570;
    uStack_5fc = uStack_56c;
    uStack_5f8 = (undefined4)uStack_568;
    uStack_5f4 = uStack_568._4_4_;
    uStack_5f0 = (undefined4)uStack_560;
    uStack_5ec = uStack_560._4_4_;
    iStack_5e8 = (int)uStack_558;
    iStack_5e4 = uStack_558._4_4_;
    iStack_5e0 = (int)uStack_550;
    uStack_5dc = uStack_550._4_4_;
    uStack_5d8 = uStack_548;
    func_0x0d928ca0(&puStack_298);
    uStack_430 = 0xffffffffffffffff;
    uStack_428 = 0;
    uStack_420 = 0xff;
    puStack_438 = &UNK_0f48a648;
    uStack_410 = uStack_290;
    uStack_40c = uStack_28c;
    uStack_408 = uStack_288;
    uStack_404 = uStack_284;
    uStack_400 = uStack_280;
    puStack_418 = &UNK_0f4e3c70;
    func_0x04167a20(auStack_3f8,auStack_278);
    uStack_3f0 = uStack_270;
    uStack_3e8 = uStack_268;
    uStack_3e0 = uStack_260;
    uStack_3d8 = uStack_258;
    uStack_3d0 = uStack_250;
    plStack_3c8 = plStack_248;
    uStack_250 = 0;
    plStack_248 = (long *)0x0;
    uStack_3c0 = uStack_240;
    uStack_3b8 = uStack_238;
    uStack_3b0 = uStack_230;
    uStack_3a8 = uStack_228;
    uStack_3a0 = uStack_220;
    uStack_39c = uStack_21c;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    if (iStack_5e0 == 4) {
      lVar10 = func_0x0cde9af0(&puStack_608);
      lVar10 = *(long *)(lVar10 + 0x48);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xa0,0);
      }
LAB_0cda1a6a:
      *(undefined1 *)(puVar11 + 3) = uStack_420;
      puVar11[1] = uStack_430;
      puVar11[2] = uStack_428;
      *puVar11 = &UNK_0f48a648;
      *(undefined4 *)(puVar11 + 5) = uStack_410;
      *(undefined4 *)((long)puVar11 + 0x2c) = uStack_40c;
      *(undefined4 *)(puVar11 + 6) = uStack_408;
      *(undefined4 *)((long)puVar11 + 0x34) = uStack_404;
      *(undefined1 *)(puVar11 + 7) = uStack_400;
      puVar11[4] = &UNK_0f4e3c70;
      func_0x04167a20(puVar11 + 8,auStack_3f8);
      puVar11[9] = uStack_3f0;
      puVar11[10] = uStack_3e8;
      puVar11[0xb] = uStack_3e0;
      puVar11[0xc] = uStack_3d8;
      puVar11[0xd] = uStack_3d0;
      puVar11[0xe] = plStack_3c8;
      uStack_3d0 = 0;
      plStack_3c8 = (long *)0x0;
      puVar11[0xf] = uStack_3c0;
      puVar11[0x12] = uStack_3a8;
      *(undefined4 *)(puVar11 + 0x10) = (undefined4)uStack_3b8;
      *(undefined4 *)((long)puVar11 + 0x84) = uStack_3b8._4_4_;
      *(undefined4 *)(puVar11 + 0x11) = (undefined4)uStack_3b0;
      *(undefined4 *)((long)puVar11 + 0x8c) = uStack_3b0._4_4_;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      puVar11[0x13] = CONCAT44(uStack_39c,uStack_3a0);
      plVar8 = *(long **)(lVar10 + 8);
      *(undefined8 **)(lVar10 + 8) = puVar11;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
      }
    }
    else if (iStack_5e0 == 1) {
      puVar7 = puStack_608 + 0x18;
      uVar13 = func_0x0cde1540(puVar7);
      lVar10 = func_0x048b0c90(puVar7,uVar13,uStack_5dc,1);
      if (lVar10 == 0) {
        uStack_9c8 = 0;
        plStack_9c0 = (long *)0x0;
        func_0x048b0d20(&uStack_9c8);
        lVar10 = uStack_9c8;
      }
      lVar10 = *(long *)(lVar10 + 0x58);
      puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa0);
      if (puVar11 == (undefined8 *)0x0) {
        func_0x0eec74c0(0xa0,0);
      }
      goto LAB_0cda1a6a;
    }
    uStack_888 = CONCAT44(uStack_5f4,uStack_5f8);
    uStack_880 = CONCAT44(uStack_5ec,uStack_5f0);
    uStack_878._0_4_ = iStack_5e8;
    uStack_878._4_4_ = iStack_5e4;
    uStack_868 = (undefined1 *)CONCAT71(uStack_868._1_7_,(undefined1)uStack_5d8);
    puStack_898 = puStack_608;
    uStack_890 = CONCAT44(uStack_5fc,uStack_600);
    uStack_870 = puVar18;
    if (DAT_0f706f90 == '\0') goto LAB_0cda2337;
  }
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,uStack_870._4_4_);
  plStack_9c0 = (long *)0x0;
  uStack_9b8 = (long *)((ulong)uStack_9b8 & 0xffffffff00000000);
  uStack_9b0 = (long *)0x1;
  puStack_9a0 = &UNK_0cde9bb0;
  puStack_998 = &UNK_0cde9c70;
  uStack_990 = 0;
  uStack_988 = 0;
  uStack_980 = 0;
  uStack_978 = 0;
  pcStack_9a8 = pcVar19;
  func_0x049057f0(&uStack_890,&uStack_9c8);
  func_0x048aea50(&uStack_9c8);
  uStack_4e8 = (undefined4)uStack_880;
  uStack_4e4 = uStack_880._4_4_;
  iStack_4e0 = (int)uStack_878;
  iStack_4dc = uStack_878._4_4_;
  uStack_4f8 = (undefined *)uStack_890;
  uStack_4f0 = (undefined4)uStack_888;
  uStack_4ec = uStack_888._4_4_;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar8 = (long)&UNK_0f404be8;
  plStack_7f0 = (long *)0x0;
  uStack_7e8 = CONCAT31(uStack_7e8._1_3_,0xff);
  plStack_7f8 = plVar8;
  func_0x0cde9740(&uStack_9c8,&uStack_4f8,&plStack_7f8);
  if (plStack_7f0 != (long *)0x0) {
    (**(code **)(*plStack_7f0 + 0x28))();
  }
  if (plStack_7f8 != (long *)0x0) {
    (**(code **)(*plStack_7f8 + 8))();
  }
  if ((DAT_0f706f90 == '\0') && (iVar6 = func_0x04108328(&DAT_0f706f90), iVar6 != 0)) {
    func_0x0cde14d0(0xf706f78);
    func_0x0410844d(&DAT_0f706f90);
  }
  if (uStack_878._4_4_ == 2) {
    piVar12 = *(int **)(*(long *)(uStack_880 + 0x78) + 0x60);
    iVar6 = *piVar12;
    while (iVar6 != (int)uStack_878) {
      piVar12 = piVar12 + 0x16;
      iVar6 = *piVar12;
    }
    uVar15 = *(ulong *)(piVar12 + 0xc);
    while (uVar15 != uStack_888) {
      piVar12 = *(int **)(piVar12 + 0xe);
      uVar15 = *(ulong *)(piVar12 + 0xc);
    }
LAB_0cda1cff:
    *(byte *)((long)piVar12 + 0x12) = *(byte *)((long)piVar12 + 0x12) | 2;
  }
  else {
    if (uStack_878._4_4_ == 1) {
      piVar12 = *(int **)(*(long *)(uStack_880 + 0x78) + 0x48);
      iVar6 = *piVar12;
      while (iVar6 != (int)uStack_878) {
        piVar12 = piVar12 + 0x1a;
        iVar6 = *piVar12;
      }
      goto LAB_0cda1cff;
    }
    if (uStack_878._4_4_ == 0) {
      *(uint *)(uStack_880 + 0x18) = *(uint *)(uStack_880 + 0x18) | 0x20000;
    }
  }
  if ((DAT_0f706f90 == '\0') && (iVar6 = func_0x04108328(&DAT_0f706f90), iVar6 != 0)) {
    func_0x0cde14d0(0xf706f78);
    func_0x0410844d(&DAT_0f706f90);
  }
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,0xbf75c8f8);
  plStack_9c0 = (long *)0x0;
  uStack_9b8 = (long *)CONCAT44(uStack_9b8._4_4_,1);
  uStack_9b0 = (long *)0x0;
  pcStack_9a8 = (code *)&UNK_0cdc6ab0;
  puStack_9a0 = &SUB_048b06d0;
  puStack_998 = &UNK_0cdea0d0;
  uStack_990 = 0;
  uStack_988 = 0;
  uStack_980 = 0;
  uStack_978 = 0;
  func_0x049057f0(&uStack_890,&uStack_9c8);
  func_0x048aea50(&uStack_9c8);
  uStack_4e8 = (undefined4)uStack_880;
  uStack_4e4 = uStack_880._4_4_;
  iStack_4e0 = (int)uStack_878;
  iStack_4dc = uStack_878._4_4_;
  uStack_4f8 = (undefined *)uStack_890;
  uStack_4f0 = (undefined4)uStack_888;
  uStack_4ec = uStack_888._4_4_;
  puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *puVar11 = &UNK_0f404be8;
  if ((DAT_0f551cb0 == '\0') && (iVar6 = func_0x04108328(&DAT_0f551cb0), iVar6 != 0)) {
    func_0x04905d10(0xf551c98);
    func_0x0410844d(&DAT_0f551cb0);
  }
  uStack_9c8 = CONCAT44(uStack_9c8._4_4_,_DAT_0f551c9c);
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef46c98;
  plStack_9c0 = plVar8 + 3;
  plVar8[3] = (long)puVar11;
  *(undefined1 *)(plVar8 + 4) = 0xff;
  plStack_7f8 = (long *)0x0;
  plStack_7f0 = (long *)0x0;
  uStack_9b8 = plVar8;
  func_0x048afd20(&uStack_4f8,&uStack_9c8);
  plVar8 = uStack_9b8;
  if (uStack_9b8 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_9b8 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_9b8 + 0x10))(uStack_9b8);
      func_0x0412c2d0(plVar8);
    }
  }
  plVar8 = plStack_7f0;
  if (plStack_7f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_7f0 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_7f0 + 0x10))(plStack_7f0);
      func_0x0412c2d0(plVar8);
    }
  }
  uStack_728 = (undefined *)CONCAT44(uStack_878._4_4_,(int)uStack_878);
  uStack_720._0_4_ = (int)uStack_870;
  uStack_720._4_4_ = uStack_870._4_4_;
  puStack_748 = puStack_898;
  uStack_740 = uStack_890;
  uStack_738 = uStack_888;
  lStack_730 = uStack_880;
  puStack_718 = uStack_868;
  if ((int)uStack_720 == 4) {
    lVar10 = func_0x0cde9af0(&puStack_748);
    lVar10 = *(long *)(lVar10 + 0x48);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  else {
    if ((int)uStack_720 != 1) goto LAB_0cda1fcd;
    puVar18 = puStack_898 + 0x18;
    uVar13 = func_0x0cde1540(puVar18);
    lVar10 = func_0x048b0c90(puVar18,uVar13,uStack_720._4_4_,1);
    if (lVar10 == 0) {
      uStack_9c8 = 0;
      plStack_9c0 = (long *)0x0;
      func_0x048b0d20(&uStack_9c8);
      lVar10 = uStack_9c8;
    }
    lVar10 = *(long *)(lVar10 + 0x58);
    puVar11 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar11 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
  }
  puVar11[1] = 0xffffffffffffffff;
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 0xff;
  *puVar11 = &UNK_0f404190;
  plVar8 = *(long **)(lVar10 + 8);
  *(undefined8 **)(lVar10 + 8) = puVar11;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x28))();
  }
LAB_0cda1fcd:
  puStack_438 = &UNK_0f48a648;
  puStack_418 = &UNK_0f4e3c70;
  if ((uStack_3b8 & 1) != 0) {
    func_0x0412a280(uStack_3a8,uStack_3b8 & 0xfffffffffffffffe);
  }
  plVar8 = plStack_3c8;
  if (plStack_3c8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_3c8 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(auStack_3f8);
  puStack_298 = &UNK_0f4e3c70;
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(uStack_228,uStack_238 & 0xfffffffffffffffe);
  }
  plVar8 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_248 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      func_0x0412c2d0(plVar8);
    }
  }
  func_0x04167a40(auStack_278);
  if ((uStack_788 & 1) != 0) {
    func_0x0412a280(uStack_778,uStack_788 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13529d9  The description identifier of the geometry to use to render this block. 
 * 0x13529e9  identifier of the geometry to use to render this block. 
 * 0x13529f9  e geometry to use to render this block. 
 * 0x1352a09  e to render this block. 
 */
