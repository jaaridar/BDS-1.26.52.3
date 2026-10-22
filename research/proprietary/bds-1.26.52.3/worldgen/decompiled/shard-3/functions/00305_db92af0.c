/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdc92af0 (ELF vaddr 0xdb92af0)
 * Label: caller-of-callee
 * Body:  [[0dc92af0, 0dc95851]]
 * Ghidra: FUN_0dc92af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0dc92af0(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  undefined8 in_R8;
  undefined8 in_R9;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 auStack_950 [2];
  undefined8 uStack_948;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 *puStack_920;
  undefined1 *puStack_918;
  undefined *puStack_910;
  undefined *puStack_908;
  undefined4 uStack_900;
  undefined8 uStack_8f8;
  long *plStack_8f0;
  undefined4 auStack_8e8 [2];
  long *plStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 *puStack_8c8;
  undefined *puStack_8c0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined4 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  char cStack_7e8;
  uint7 uStack_7e7;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined1 uStack_7a8;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  long lStack_768;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  long lStack_728;
  undefined4 uStack_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 uStack_6e8;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 uStack_6a8;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 uStack_668;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined8 uStack_628;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 uStack_5e8;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined8 uStack_5a8;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 uStack_568;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 uStack_528;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 uStack_4e8;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 uStack_4a8;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 uStack_468;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined2 uStack_420;
  undefined4 uStack_41e;
  undefined2 uStack_41a;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined1 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined2 uStack_3e0;
  undefined4 uStack_3de;
  undefined2 uStack_3da;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined2 uStack_3a0;
  undefined4 uStack_39e;
  undefined2 uStack_39a;
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
  undefined1 uStack_368;
  undefined7 uStack_367;
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
  undefined1 uStack_328;
  undefined7 uStack_327;
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
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
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
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 uStack_228;
  undefined7 uStack_227;
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
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
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
  undefined1 uStack_168;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  func_0x0d8a5280();
  func_0x0e4db7a0(param_1);
  FUN_0d89f0d0(param_1);
  if ((DAT_0f739f18 == '\0') && (iVar3 = func_0x04108328(&DAT_0f739f18), iVar3 != 0)) {
    func_0x0dcb31b0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f739e98,0xf53dab8);
    func_0x0410844d(&DAT_0f739f18);
  }
  plVar6 = (long *)(*(long *)(param_1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3
                                ) - 1U & *(uint *)(_DAT_0f739e98 + 4)) * 8);
  do {
    lVar7 = *plVar6;
    if (lVar7 == -1) goto LAB_0dc92b80;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar7 * 0x18) != *(uint *)(_DAT_0f739e98 + 4));
  if (plVar6 == *(long **)(param_1 + 0x38)) {
LAB_0dc92b80:
    puVar4 = &DAT_0f739e98;
    if (iRam000000000f739ef8 != -0x2b3da790) goto LAB_0dc92be7;
LAB_0dc92bab:
    lVar7 = *(long *)(puVar4 + 0x68);
    if (lVar7 == 0) goto LAB_0dc92be7;
    bVar11 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar10 = lVar7 + 9;
    if (bVar11) {
      lVar10 = *(long *)(lVar7 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0dcb35d0(auStack_950,param_1,lVar10,uVar9);
    if ((char)puStack_920 == '\0') goto LAB_0dc92c0b;
LAB_0dc9303e:
    lVar7 = func_0x0dcb43e0(param_1 + 0x18);
    if (*(int *)(lVar7 + 0x60) != -0x2b3da790) goto LAB_0dc93115;
LAB_0dc93053:
    lVar7 = *(long *)(lVar7 + 0x68);
    if (lVar7 == 0) goto LAB_0dc93115;
    bVar11 = (*(byte *)(lVar7 + 8) & 1) != 0;
    lVar10 = lVar7 + 9;
    if (bVar11) {
      lVar10 = *(long *)(lVar7 + 0x18);
    }
    uVar9 = (ulong)(*(byte *)(lVar7 + 8) >> 1);
    if (bVar11) {
      uVar9 = *(ulong *)(lVar7 + 0x10);
    }
    func_0x0dcb4f30(&uStack_818,param_1,lVar10,uVar9);
    uStack_778 = uStack_7f8;
    uStack_774 = uStack_7f4;
    uStack_770 = uStack_7f0;
    uStack_76c = uStack_7ec;
  }
  else {
    puVar4 = (undefined *)plVar6[2];
    if (*(int *)(puVar4 + 0x60) == -0x2b3da790) goto LAB_0dc92bab;
LAB_0dc92be7:
    func_0x0dcb35d0(auStack_950,param_1,&UNK_01425d2d,0x15);
    if ((char)puStack_920 != '\0') goto LAB_0dc9303e;
LAB_0dc92c0b:
    uStack_928 = (undefined *)0x1e1bc4d500000004;
    if ((DAT_0f739f38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f739f38), iVar3 != 0)) {
      func_0x0dcb32c0();
      func_0x0410844d(&DAT_0f739f38);
    }
    auStack_8e8[0] = uStack_928._4_4_;
    plStack_8e0 = (long *)0x0;
    uStack_8d8 = (long *)((ulong)uStack_8d8._4_4_ << 0x20);
    uStack_8d0 = (long *)0x1;
    puStack_8c8 = &SUB_048aead0;
    puStack_8c0 = &UNK_0490ce30;
    puStack_8b8 = &UNK_0dcb40e0;
    uStack_8b0 = 0;
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    func_0x049057f0(&uStack_948,auStack_8e8);
    func_0x048aea50(auStack_8e8);
    uStack_808 = (undefined4)uStack_938;
    uStack_804 = uStack_938._4_4_;
    uStack_800 = (int)uStack_930;
    uStack_7fc = uStack_930._4_4_;
    uStack_818 = (undefined4)uStack_948;
    uStack_814 = uStack_948._4_4_;
    uStack_810 = uStack_940;
    uStack_80c = uStack_93c;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar5 = &UNK_0ef46ce8;
    if ((DAT_0f551bc8 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551bc8), iVar3 != 0)) {
      FUN_04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_8e8[0] = _DAT_0f551bb4;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar6 == (long *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef46c48;
    plStack_8e0 = plVar6 + 3;
    plVar6[3] = (long)puVar5;
    plVar6[4] = 0;
    *(undefined1 *)(plVar6 + 5) = 0xff;
    uStack_7d8 = 0;
    uStack_7d0 = (long *)0x0;
    uStack_8d8 = plVar6;
    func_0x048afd20(&uStack_818,auStack_8e8);
    plVar6 = uStack_8d8;
    if (uStack_8d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_8d8 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_8d8 + 0x10))(uStack_8d8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_7d0;
    if (uStack_7d0 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_7d0 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_7d0 + 0x10))(uStack_7d0);
        func_0x0412c2d0(plVar6);
      }
    }
    if ((DAT_0f739f38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f739f38), iVar3 != 0)) {
      func_0x0dcb32c0();
      func_0x0410844d(&DAT_0f739f38);
    }
    if (uStack_930._4_4_ == 2) {
      piVar8 = *(int **)(*(long *)(uStack_938 + 0x78) + 0x60);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_930) {
        piVar8 = piVar8 + 0x16;
        iVar3 = *piVar8;
      }
      lVar7 = *(long *)(piVar8 + 0xc);
      while (lVar7 != CONCAT44(uStack_93c,uStack_940)) {
        piVar8 = *(int **)(piVar8 + 0xe);
        lVar7 = *(long *)(piVar8 + 0xc);
      }
LAB_0dc92e6f:
      *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 2;
    }
    else {
      if (uStack_930._4_4_ == 1) {
        piVar8 = *(int **)(*(long *)(uStack_938 + 0x78) + 0x48);
        iVar3 = *piVar8;
        while (iVar3 != (int)uStack_930) {
          piVar8 = piVar8 + 0x1a;
          iVar3 = *piVar8;
        }
        goto LAB_0dc92e6f;
      }
      if (uStack_930._4_4_ == 0) {
        *(uint *)(uStack_938 + 0x18) = *(uint *)(uStack_938 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f739f38 == '\0') && (iVar3 = func_0x04108328(&DAT_0f739f38), iVar3 != 0)) {
      func_0x0dcb32c0();
      func_0x0410844d(&DAT_0f739f38);
    }
    auStack_8e8[0] = 0xbf75c8f8;
    plStack_8e0 = (long *)0x0;
    uStack_8d8 = (long *)CONCAT44(uStack_8d8._4_4_,1);
    uStack_8d0 = (long *)0x0;
    puStack_8c8 = &SUB_0490cb20;
    puStack_8c0 = &SUB_048b06d0;
    puStack_8b8 = &UNK_0dcb42d0;
    uStack_8b0 = 0;
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    func_0x049057f0(&uStack_948,auStack_8e8);
    func_0x048aea50(auStack_8e8);
    uStack_808 = (undefined4)uStack_938;
    uStack_804 = uStack_938._4_4_;
    uStack_800 = (int)uStack_930;
    uStack_7fc = uStack_930._4_4_;
    uStack_818 = (undefined4)uStack_948;
    uStack_814 = uStack_948._4_4_;
    uStack_810 = uStack_940;
    uStack_80c = uStack_93c;
    puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar5 = &UNK_0ef46ce8;
    if ((DAT_0f551cb0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f551cb0), iVar3 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_8e8[0] = _DAT_0f551c9c;
    plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (plVar6 == (long *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&UNK_0ef46c98;
    plStack_8e0 = plVar6 + 3;
    plVar6[3] = (long)puVar5;
    *(undefined1 *)(plVar6 + 4) = 0xff;
    uStack_7d8 = 0;
    uStack_7d0 = (long *)0x0;
    uStack_8d8 = plVar6;
    func_0x048afd20(&uStack_818,auStack_8e8);
    plVar6 = uStack_8d8;
    if (uStack_8d8 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_8d8 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*uStack_8d8 + 0x10))(uStack_8d8);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = uStack_7d0;
    if (uStack_7d0 == (long *)0x0) goto LAB_0dc9303e;
    LOCK();
    plVar1 = uStack_7d0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 != 0) goto LAB_0dc9303e;
    (**(code **)(*uStack_7d0 + 0x10))(uStack_7d0);
    func_0x0412c2d0(plVar6);
    lVar7 = func_0x0dcb43e0(param_1 + 0x18);
    if (*(int *)(lVar7 + 0x60) == -0x2b3da790) goto LAB_0dc93053;
LAB_0dc93115:
    func_0x0dcb4f30(&uStack_818,param_1,&DAT_014795eb,0x21);
    uStack_778 = uStack_7f8;
    uStack_774 = uStack_7f4;
    uStack_770 = uStack_7f0;
    uStack_76c = uStack_7ec;
  }
  if (cStack_7e8 != '\0') {
    return;
  }
  lStack_768 = (ulong)uStack_7e7 << 8;
  uStack_798 = uStack_818;
  uStack_794 = uStack_814;
  uStack_790 = uStack_810;
  uStack_78c = uStack_80c;
  uStack_788 = uStack_808;
  uStack_784 = uStack_804;
  uStack_780 = uStack_800;
  uStack_77c = uStack_7fc;
  if ((DAT_0f739ff0 == '\0') && (iVar3 = func_0x04108328(&DAT_0f739ff0), iVar3 != 0)) {
    func_0x0dcb45d0(0xf739fd8);
    func_0x0410844d(&DAT_0f739ff0);
  }
  if ((DAT_0f72c370 == '\0') && (iVar3 = func_0x04108328(&DAT_0f72c370), iVar3 != 0)) {
    func_0x0d8b8690(0xf72c358);
    func_0x0410844d(&DAT_0f72c370);
  }
  auStack_8e8[0] = _DAT_0f72c35c;
  plStack_8e0 = (long *)&SUB_0d8b84a0;
  plVar6 = plStack_8e0;
  uStack_8d8 = (long *)&UNK_0dcb58e0;
  puVar4 = &UNK_0dcb58e0;
  plStack_8e0._0_4_ = 0xd8b84a0;
  uVar12 = _DAT_0f72c35c;
  uVar13 = plStack_8e0._0_4_;
  plStack_8e0 = plVar6;
  func_0x05da1460(&uStack_790);
  lVar7 = func_0x0d8b84a0(CONCAT44(uStack_794,uStack_798) + 0x18);
  if ((*(byte *)(lVar7 + 0x1a) & 4) != 0) {
    func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_794,uStack_798) + 0x18);
    if (uStack_8d0._4_4_ == 2) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x16;
        iVar3 = *piVar8;
      }
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
      while ((long *)puVar2 != plStack_8e0) {
        piVar8 = *(int **)(piVar8 + 0xe);
        puVar2 = *(undefined1 **)(piVar8 + 0xc);
      }
    }
    else {
      if (uStack_8d0._4_4_ != 1) {
        if (uStack_8d0._4_4_ == 0) {
          *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
        }
        goto LAB_0dc93283;
      }
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
    }
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
LAB_0dc93283:
  lStack_728 = lStack_768;
  uStack_738 = uStack_778;
  uStack_734 = uStack_774;
  uStack_730 = uStack_770;
  uStack_72c = uStack_76c;
  uStack_748 = uStack_788;
  uStack_744 = uStack_784;
  uStack_740 = uStack_780;
  uStack_73c = uStack_77c;
  uStack_758 = uStack_798;
  uStack_754 = uStack_794;
  uStack_750 = uStack_790;
  uStack_74c = uStack_78c;
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_794,uStack_798) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc9333f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc9333f;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_758,&UNK_01340d28,7,in_R8,in_R9,uVar12,uVar13,puVar4);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f2ce5d8;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_0da79540;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &SUB_0b6acf10;
  puStack_910 = &UNK_0dcb5de0;
  puStack_908 = &UNK_0dcb6040;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_368 = (undefined1)lStack_728;
  uStack_378 = uStack_738;
  uStack_374 = uStack_734;
  uStack_370 = uStack_730;
  uStack_36c = uStack_72c;
  uStack_388 = uStack_748;
  uStack_384 = uStack_744;
  uStack_380 = uStack_740;
  uStack_37c = uStack_73c;
  uStack_398 = uStack_758;
  uStack_394 = uStack_754;
  uStack_390 = uStack_750;
  uStack_38c = uStack_74c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_718 = uStack_398;
  uStack_714 = uStack_394;
  uStack_710 = uStack_390;
  uStack_70c = uStack_38c;
  uStack_708 = uStack_388;
  uStack_704 = uStack_384;
  uStack_700 = uStack_380;
  uStack_6fc = uStack_37c;
  uStack_6f8 = uStack_378;
  uStack_6f4 = uStack_374;
  uStack_6f0 = uStack_370;
  uStack_6ec = uStack_36c;
  uStack_6e8 = CONCAT71(uStack_367,uStack_368);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_394,uStack_398) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc935df:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc935df;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_718,&UNK_0135c80b,0xc);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0c2710;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_072a3520;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &SUB_072a3240;
  puStack_910 = &UNK_0dcb6220;
  puStack_908 = &UNK_0dcb6390;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_328 = (undefined1)uStack_6e8;
  uStack_338 = uStack_6f8;
  uStack_334 = uStack_6f4;
  uStack_330 = uStack_6f0;
  uStack_32c = uStack_6ec;
  uStack_348 = uStack_708;
  uStack_344 = uStack_704;
  uStack_340 = uStack_700;
  uStack_33c = uStack_6fc;
  uStack_358 = uStack_718;
  uStack_354 = uStack_714;
  uStack_350 = uStack_710;
  uStack_34c = uStack_70c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_6d8 = uStack_358;
  uStack_6d4 = uStack_354;
  uStack_6d0 = uStack_350;
  uStack_6cc = uStack_34c;
  uStack_6c8 = uStack_348;
  uStack_6c4 = uStack_344;
  uStack_6c0 = uStack_340;
  uStack_6bc = uStack_33c;
  uStack_6b8 = uStack_338;
  uStack_6b4 = uStack_334;
  uStack_6b0 = uStack_330;
  uStack_6ac = uStack_32c;
  uStack_6a8 = CONCAT71(uStack_327,uStack_328);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_354,uStack_358) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc9387f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc9387f;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_6d8,&UNK_0119d347,0xf);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0126a0;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05daeda0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_05daea90;
  puStack_910 = &UNK_0dcb6570;
  puStack_908 = &UNK_0dcb66e0;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_168 = (undefined1)uStack_6a8;
  uStack_178 = uStack_6b8;
  uStack_174 = uStack_6b4;
  uStack_170 = uStack_6b0;
  uStack_16c = uStack_6ac;
  uStack_188 = uStack_6c8;
  uStack_184 = uStack_6c4;
  uStack_180 = uStack_6c0;
  uStack_17c = uStack_6bc;
  uStack_198 = uStack_6d8;
  uStack_194 = uStack_6d4;
  uStack_190 = uStack_6d0;
  uStack_18c = uStack_6cc;
  func_0x048b0bc0(&uStack_8d0);
  uStack_39e = 0;
  uStack_39a = 0;
  uStack_3d0 = 0xffffffffffffffff;
  uStack_3c8 = 0;
  uStack_3c0 = 0xff;
  puStack_3d8 = &UNK_0f0edc68;
  uStack_3b8 = 0;
  uStack_3b0 = _DAT_014f0238;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  func_0x0dc959a0(&uStack_d8,&uStack_198,&puStack_3d8);
  uStack_668 = uStack_a8;
  uStack_678 = uStack_b8;
  uStack_674 = uStack_b4;
  uStack_670 = uStack_b0;
  uStack_66c = uStack_ac;
  uStack_688 = uStack_c8;
  uStack_684 = uStack_c4;
  uStack_680 = uStack_c0;
  uStack_67c = uStack_bc;
  uStack_698 = uStack_d8;
  uStack_694 = uStack_d4;
  uStack_690 = uStack_d0;
  uStack_68c = uStack_cc;
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_d4,uStack_d8) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc93b9f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc93b9f;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_698,&UNK_014aeaab,0xf);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0126a0;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05daeda0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_05daea90;
  puStack_910 = &UNK_0dcb68c0;
  puStack_908 = &UNK_0dcb6a30;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_128 = (undefined1)uStack_668;
  uStack_138 = uStack_678;
  uStack_134 = uStack_674;
  uStack_130 = uStack_670;
  uStack_12c = uStack_66c;
  uStack_148 = uStack_688;
  uStack_144 = uStack_684;
  uStack_140 = uStack_680;
  uStack_13c = uStack_67c;
  uStack_158 = uStack_698;
  uStack_154 = uStack_694;
  uStack_150 = uStack_690;
  uStack_14c = uStack_68c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_3de = 0;
  uStack_3da = 0;
  uStack_410 = 0xffffffffffffffff;
  uStack_408 = 0;
  uStack_400 = 0xff;
  puStack_418 = &UNK_0f0edc68;
  uStack_3f8 = 0;
  uStack_3f0 = _DAT_014f0238;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  func_0x0dc959a0(&uStack_a0,&uStack_158,&puStack_418);
  uStack_628 = uStack_70;
  uStack_638 = uStack_80;
  uStack_634 = uStack_7c;
  uStack_630 = uStack_78;
  uStack_62c = uStack_74;
  uStack_648 = uStack_90;
  uStack_644 = uStack_8c;
  uStack_640 = uStack_88;
  uStack_63c = uStack_84;
  uStack_658 = uStack_a0;
  uStack_654 = uStack_9c;
  uStack_650 = uStack_98;
  uStack_64c = uStack_94;
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_9c,uStack_a0) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc93eaf:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc93eaf;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_658,&UNK_012f22b4,0x10);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0126a0;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05daeda0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_05daea90;
  puStack_910 = &UNK_0dcb6c10;
  puStack_908 = &UNK_0dcb6d80;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_e8 = (undefined1)uStack_628;
  uStack_f8 = uStack_638;
  uStack_f4 = uStack_634;
  uStack_f0 = uStack_630;
  uStack_ec = uStack_62c;
  uStack_108 = uStack_648;
  uStack_104 = uStack_644;
  uStack_100 = uStack_640;
  uStack_fc = uStack_63c;
  uStack_118 = uStack_658;
  uStack_114 = uStack_654;
  uStack_110 = uStack_650;
  uStack_10c = uStack_64c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_41e = 0;
  uStack_41a = 0;
  uStack_450 = 0xffffffffffffffff;
  uStack_448 = 0;
  uStack_440 = 0xff;
  puStack_458 = &UNK_0f0edc68;
  uStack_438 = 0;
  uStack_430 = _DAT_014f0238;
  uStack_428 = 0;
  uStack_420 = 0;
  func_0x0dc959a0(&uStack_68,&uStack_118,&puStack_458);
  uStack_5e8 = uStack_38;
  uStack_5f8 = uStack_48;
  uStack_5f4 = uStack_44;
  uStack_5f0 = uStack_40;
  uStack_5ec = uStack_3c;
  uStack_608 = uStack_58;
  uStack_604 = uStack_54;
  uStack_600 = uStack_50;
  uStack_5fc = uStack_4c;
  uStack_618 = uStack_68;
  uStack_614 = uStack_64;
  uStack_610 = uStack_60;
  uStack_60c = uStack_5c;
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_64,uStack_68) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc941bf:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc941bf;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_618,&UNK_01448293,0x13);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0126a0;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05daeda0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_05daea90;
  puStack_910 = &UNK_0dcb6f60;
  puStack_908 = &UNK_0dcb70d0;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_2e8 = (undefined1)uStack_5e8;
  uStack_2f8 = uStack_5f8;
  uStack_2f4 = uStack_5f4;
  uStack_2f0 = uStack_5f0;
  uStack_2ec = uStack_5ec;
  uStack_308 = uStack_608;
  uStack_304 = uStack_604;
  uStack_300 = uStack_600;
  uStack_2fc = uStack_5fc;
  uStack_318 = uStack_618;
  uStack_314 = uStack_614;
  uStack_310 = uStack_610;
  uStack_30c = uStack_60c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_5d8 = uStack_318;
  uStack_5d4 = uStack_314;
  uStack_5d0 = uStack_310;
  uStack_5cc = uStack_30c;
  uStack_5c8 = uStack_308;
  uStack_5c4 = uStack_304;
  uStack_5c0 = uStack_300;
  uStack_5bc = uStack_2fc;
  uStack_5b8 = uStack_2f8;
  uStack_5b4 = uStack_2f4;
  uStack_5b0 = uStack_2f0;
  uStack_5ac = uStack_2ec;
  uStack_5a8 = CONCAT71(uStack_2e7,uStack_2e8);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_314,uStack_318) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc9444f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc9444f;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_5d8,&UNK_011ed231,0x13);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0126a0;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05daeda0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_05daea90;
  puStack_910 = &UNK_0dcb72b0;
  puStack_908 = &UNK_0dcb7420;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_2a8 = (undefined1)uStack_5a8;
  uStack_2b8 = uStack_5b8;
  uStack_2b4 = uStack_5b4;
  uStack_2b0 = uStack_5b0;
  uStack_2ac = uStack_5ac;
  uStack_2c8 = uStack_5c8;
  uStack_2c4 = uStack_5c4;
  uStack_2c0 = uStack_5c0;
  uStack_2bc = uStack_5bc;
  uStack_2d8 = uStack_5d8;
  uStack_2d4 = uStack_5d4;
  uStack_2d0 = uStack_5d0;
  uStack_2cc = uStack_5cc;
  func_0x048b0bc0(&uStack_8d0);
  uStack_598 = uStack_2d8;
  uStack_594 = uStack_2d4;
  uStack_590 = uStack_2d0;
  uStack_58c = uStack_2cc;
  uStack_588 = uStack_2c8;
  uStack_584 = uStack_2c4;
  uStack_580 = uStack_2c0;
  uStack_57c = uStack_2bc;
  uStack_578 = uStack_2b8;
  uStack_574 = uStack_2b4;
  uStack_570 = uStack_2b0;
  uStack_56c = uStack_2ac;
  uStack_568 = CONCAT71(uStack_2a7,uStack_2a8);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_2d4,uStack_2d8) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc946df:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc946df;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_598,&UNK_012d7936,10);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0126a0;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05daeda0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_05daea90;
  puStack_910 = &UNK_0dcb7600;
  puStack_908 = &UNK_0dcb7770;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_268 = (undefined1)uStack_568;
  uStack_278 = uStack_578;
  uStack_274 = uStack_574;
  uStack_270 = uStack_570;
  uStack_26c = uStack_56c;
  uStack_288 = uStack_588;
  uStack_284 = uStack_584;
  uStack_280 = uStack_580;
  uStack_27c = uStack_57c;
  uStack_298 = uStack_598;
  uStack_294 = uStack_594;
  uStack_290 = uStack_590;
  uStack_28c = uStack_58c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_558 = uStack_298;
  uStack_554 = uStack_294;
  uStack_550 = uStack_290;
  uStack_54c = uStack_28c;
  uStack_548 = uStack_288;
  uStack_544 = uStack_284;
  uStack_540 = uStack_280;
  uStack_53c = uStack_27c;
  uStack_538 = uStack_278;
  uStack_534 = uStack_274;
  uStack_530 = uStack_270;
  uStack_52c = uStack_26c;
  uStack_528 = CONCAT71(uStack_267,uStack_268);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_294,uStack_298) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc9496f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc9496f;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_558,&UNK_01495a5b,0xe);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0ef44b00;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_048b3f30;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &SUB_048b2190;
  puStack_910 = &UNK_0dcb7950;
  puStack_908 = &UNK_0dcb7b30;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_228 = (undefined1)uStack_528;
  uStack_238 = uStack_538;
  uStack_234 = uStack_534;
  uStack_230 = uStack_530;
  uStack_22c = uStack_52c;
  uStack_248 = uStack_548;
  uStack_244 = uStack_544;
  uStack_240 = uStack_540;
  uStack_23c = uStack_53c;
  uStack_258 = uStack_558;
  uStack_254 = uStack_554;
  uStack_250 = uStack_550;
  uStack_24c = uStack_54c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_518 = uStack_258;
  uStack_514 = uStack_254;
  uStack_510 = uStack_250;
  uStack_50c = uStack_24c;
  uStack_508 = uStack_248;
  uStack_504 = uStack_244;
  uStack_500 = uStack_240;
  uStack_4fc = uStack_23c;
  uStack_4f8 = uStack_238;
  uStack_4f4 = uStack_234;
  uStack_4f0 = uStack_230;
  uStack_4ec = uStack_22c;
  uStack_4e8 = CONCAT71(uStack_227,uStack_228);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_254,uStack_258) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc94c0f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc94c0f;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_518,&UNK_014aeabb,0xc);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f49ab98;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_0dcb7f00;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_0dcb30f0;
  puStack_910 = &UNK_0dcb7fc0;
  puStack_908 = &UNK_0dcb8120;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_1e8 = (undefined1)uStack_4e8;
  uStack_1f8 = uStack_4f8;
  uStack_1f4 = uStack_4f4;
  uStack_1f0 = uStack_4f0;
  uStack_1ec = uStack_4ec;
  uStack_208 = uStack_508;
  uStack_204 = uStack_504;
  uStack_200 = uStack_500;
  uStack_1fc = uStack_4fc;
  uStack_218 = uStack_518;
  uStack_214 = uStack_514;
  uStack_210 = uStack_510;
  uStack_20c = uStack_50c;
  func_0x048b0bc0(&uStack_8d0);
  uStack_4d8 = uStack_218;
  uStack_4d4 = uStack_214;
  uStack_4d0 = uStack_210;
  uStack_4cc = uStack_20c;
  uStack_4c8 = uStack_208;
  uStack_4c4 = uStack_204;
  uStack_4c0 = uStack_200;
  uStack_4bc = uStack_1fc;
  uStack_4b8 = uStack_1f8;
  uStack_4b4 = uStack_1f4;
  uStack_4b0 = uStack_1f0;
  uStack_4ac = uStack_1ec;
  uStack_4a8 = CONCAT71(uStack_1e7,uStack_1e8);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_214,uStack_218) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc94eaf:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc94eaf;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_4d8,&UNK_012a4ac4,0xc);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f0124a8;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05da29c0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &SUB_05da26d0;
  puStack_910 = &UNK_0dcb85a0;
  puStack_908 = &UNK_0dcb8710;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_1a8 = (undefined1)uStack_4a8;
  uStack_1b8 = uStack_4b8;
  uStack_1b4 = uStack_4b4;
  uStack_1b0 = uStack_4b0;
  uStack_1ac = uStack_4ac;
  uStack_1c8 = uStack_4c8;
  uStack_1c4 = uStack_4c4;
  uStack_1c0 = uStack_4c0;
  uStack_1bc = uStack_4bc;
  uStack_1d8 = uStack_4d8;
  uStack_1d4 = uStack_4d4;
  uStack_1d0 = uStack_4d0;
  uStack_1cc = uStack_4cc;
  func_0x048b0bc0(&uStack_8d0);
  uStack_498 = uStack_1d8;
  uStack_494 = uStack_1d4;
  uStack_490 = uStack_1d0;
  uStack_48c = uStack_1cc;
  uStack_488 = uStack_1c8;
  uStack_484 = uStack_1c4;
  uStack_480 = uStack_1c0;
  uStack_47c = uStack_1bc;
  uStack_478 = uStack_1b8;
  uStack_474 = uStack_1b4;
  uStack_470 = uStack_1b0;
  uStack_46c = uStack_1ac;
  uStack_468 = CONCAT71(uStack_1a7,uStack_1a8);
  func_0x0dcb5470(auStack_8e8,CONCAT44(uStack_1d4,uStack_1d8) + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
LAB_0dc9514f:
    *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
  }
  else {
    if (uStack_8d0._4_4_ == 1) {
      piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
      iVar3 = *piVar8;
      while (iVar3 != (int)uStack_8d0) {
        piVar8 = piVar8 + 0x1a;
        iVar3 = *piVar8;
      }
      goto LAB_0dc9514f;
    }
    if (uStack_8d0._4_4_ == 0) {
      *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
    }
  }
  func_0x0dcb58f0(auStack_8e8,&uStack_498,&UNK_0119d357,0xd);
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar6 == (long *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *plVar6 = (long)&UNK_0f49ab98;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = plVar6;
    (**(code **)(lVar7 + 8))();
    plVar6 = uStack_8d0;
  }
  uStack_8d0 = plVar6;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_0dcb7f00;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &UNK_0dcb30f0;
  puStack_910 = &UNK_0dcb88f0;
  puStack_908 = &UNK_0dcb8a50;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  uStack_7a8 = (undefined1)uStack_468;
  uStack_7b8 = uStack_478;
  uStack_7b4 = uStack_474;
  uStack_7b0 = uStack_470;
  uStack_7ac = uStack_46c;
  uStack_7c8 = uStack_488;
  uStack_7c4 = uStack_484;
  uStack_7c0 = uStack_480;
  uStack_7bc = uStack_47c;
  uStack_7d8 = CONCAT44(uStack_494,uStack_498);
  uStack_7d0 = (long *)CONCAT44(uStack_48c,uStack_490);
  func_0x048b0bc0(&uStack_8d0);
  func_0x0dcb5470(auStack_8e8,uStack_7d8 + 0x18);
  if (uStack_8d0._4_4_ == 2) {
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x60);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x16;
      iVar3 = *piVar8;
    }
    puVar2 = *(undefined1 **)(piVar8 + 0xc);
    while ((long *)puVar2 != plStack_8e0) {
      piVar8 = *(int **)(piVar8 + 0xe);
      puVar2 = *(undefined1 **)(piVar8 + 0xc);
    }
  }
  else {
    if (uStack_8d0._4_4_ != 1) {
      if (uStack_8d0._4_4_ == 0) {
        *(uint *)((long)uStack_8d8 + 0x18) = *(uint *)((long)uStack_8d8 + 0x18) | 0x40000;
      }
      goto LAB_0dc953a3;
    }
    piVar8 = *(int **)(*(long *)((long)uStack_8d8 + 0x78) + 0x48);
    iVar3 = *piVar8;
    while (iVar3 != (int)uStack_8d0) {
      piVar8 = piVar8 + 0x1a;
      iVar3 = *piVar8;
    }
  }
  *(byte *)((long)piVar8 + 0x12) = *(byte *)((long)piVar8 + 0x12) | 4;
LAB_0dc953a3:
  func_0x0dcb58f0(auStack_8e8,&uStack_7d8,&UNK_013c5813,0xd);
  puVar5 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_0eec74c0(8,0);
  }
  *puVar5 = &UNK_0f0124a8;
  if (uStack_8d0 != (long *)0x0) {
    lVar7 = *uStack_8d0;
    uStack_8d0 = puVar5;
    (**(code **)(lVar7 + 8))();
    puVar5 = uStack_8d0;
  }
  uStack_8d0 = puVar5;
  auStack_950[0] = (undefined4)uStack_8d8;
  uStack_948 = 0;
  uStack_940 = 0;
  uStack_938 = 1;
  uStack_930 = 0;
  uStack_928 = &UNK_05da29c0;
  puStack_920 = &SUB_048b06d0;
  puStack_918 = &SUB_05da26d0;
  puStack_910 = &UNK_0dcb8c30;
  puStack_908 = &UNK_0dcb8da0;
  uStack_900 = 0;
  uStack_8f8 = 0;
  plStack_8f0 = (long *)0x0;
  FUN_048b05a0(plStack_8e0,auStack_950);
  plVar6 = plStack_8f0;
  if (plStack_8f0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_8f0 + 1;
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plStack_8f0 + 0x10))(plStack_8f0);
      func_0x0412c2d0(plVar6);
    }
  }
  func_0x0dcb5ae0(auStack_8e8);
  func_0x048b0bc0(&uStack_8d0);
  return;
}


