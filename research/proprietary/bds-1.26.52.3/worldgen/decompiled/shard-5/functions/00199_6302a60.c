/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6402a60 (ELF vaddr 0x6302a60)
 * Label: caller-of-callee
 * Body:  [[06402a60, 06403106] [06403110, 064038d0] [064038e0, 06403ee8]]
 * Ghidra: FUN_06402a60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_06402a60(byte *param_1,undefined8 *param_2,code *param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  ulong *puVar21;
  undefined8 uVar22;
  code *pcVar23;
  code *pcVar24;
  ulong unaff_RBP;
  ulong uVar25;
  bool bVar26;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  ulong uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined *puStack_660;
  byte bStack_658;
  undefined8 uStack_648;
  code *pcStack_640;
  code *pcStack_638;
  long *plStack_628;
  long *plStack_620;
  code *pcStack_610;
  ulong uStack_608;
  undefined8 uStack_600;
  code *pcStack_5f8;
  code *pcStack_5f0;
  code *pcStack_5e8;
  code *pcStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  ulong uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined *puStack_5b0;
  ulong uStack_5a8;
  code *pcStack_598;
  code *pcStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  ulong uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined *puStack_560;
  byte bStack_558;
  undefined8 uStack_548;
  code *pcStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  ulong uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  code *pcStack_490;
  code *pcStack_488;
  ulong uStack_480;
  code *pcStack_478;
  code *pcStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined *puStack_430;
  undefined4 uStack_428;
  uint uStack_418;
  undefined1 *puStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [384];
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined8 uStack_1ac;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined *puStack_190;
  undefined2 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined *puStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  pcVar24 = (code *)(param_1 + 1);
  bVar26 = (*param_1 & 1) == 0;
  pcStack_488 = *(code **)(param_1 + 0x10);
  if (bVar26) {
    pcStack_488 = pcVar24;
  }
  uStack_480 = (ulong)(*param_1 >> 1);
  if (!bVar26) {
    uStack_480 = *(ulong *)(param_1 + 8);
  }
  cVar17 = (**(code **)(_DAT_0f7b8f98 + 0xf8))(&DAT_0f7b8f98,&pcStack_488);
  if (cVar17 == '\0') {
    bVar26 = (*param_1 & 1) != 0;
    if (bVar26) {
      pcVar24 = *(code **)(param_1 + 0x10);
    }
    pcVar23 = (code *)(ulong)(*param_1 >> 1);
    if (bVar26) {
      pcVar23 = *(code **)(param_1 + 8);
    }
    if ((code *)0xfffffffffffffff7 < pcVar23) {
      func_0x04882e30();
LAB_06403e53:
      iVar19 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar19 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        FUN_0410844d(&DAT_0f7b8fb8);
      }
      goto LAB_0640330f;
    }
    if (pcVar23 < (code *)0x17) {
      uStack_548 = (code *)CONCAT71(uStack_548._1_7_,(char)pcVar23 * '\x02');
      lVar20 = (long)&uStack_548 + 1;
      if (pcVar23 != (code *)0x0) goto LAB_06402fb2;
    }
    else {
      uVar25 = 0x1a;
      if (((ulong)pcVar23 | 7) != 0x17) {
        uVar25 = ((ulong)pcVar23 | 7) + 1;
      }
      lVar20 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
      if (lVar20 == 0) {
        func_0x0eec74c0(uVar25,0);
      }
      uStack_548 = (code *)(uVar25 | 1);
      pcStack_540 = pcVar23;
      uStack_538 = lVar20;
LAB_06402fb2:
      func_0x0eee2ee0(lVar20,pcVar24,pcVar23);
    }
    pcVar23[lVar20] = (code)0x0;
    puVar21 = (ulong *)func_0x0412f0e0(&uStack_548,0,&UNK_0123edca,0x1f);
    uStack_458 = (undefined *)puVar21[2];
    uStack_468 = (code *)*puVar21;
    uStack_460 = (code *)puVar21[1];
    *puVar21 = 0;
    puVar21[1] = 0;
    puVar21[2] = 0;
    if (((ulong)uStack_548 & 1) != 0) {
      func_0x0412a280(uStack_538,(ulong)uStack_548 & 0xfffffffffffffffe);
    }
    uVar25 = (ulong)uStack_468;
    puVar3 = *(undefined4 **)(param_3 + 8);
    if (puVar3 < *(undefined4 **)(param_3 + 0x10)) {
      if (((ulong)uStack_468 & 1) == 0) {
        *(undefined **)(puVar3 + 4) = uStack_458;
        *puVar3 = (undefined4)uStack_468;
        puVar3[1] = uStack_468._4_4_;
        puVar3[2] = (undefined4)uStack_460;
        puVar3[3] = uStack_460._4_4_;
      }
      else {
        func_0x0412e5e0(puVar3,uStack_458,uStack_460);
      }
      *(undefined4 **)(param_3 + 8) = puVar3 + 6;
      *(undefined4 **)(param_3 + 8) = puVar3 + 6;
    }
    else {
      uVar22 = func_0x04909a40(param_3,&uStack_468);
      *(undefined8 *)(param_3 + 8) = uVar22;
      uVar25 = (ulong)uStack_468;
    }
    if ((uVar25 & 1) != 0) {
      func_0x0412a280(uStack_458,(ulong)uStack_468 & 0xfffffffffffffffe);
    }
  }
  else {
    if ((DAT_0f774768 == '\0') && (iVar19 = func_0x04108328(&DAT_0f774768), iVar19 != 0)) {
      func_0x0ed58ba0(0xf7746f8);
      func_0x0eee2f40(&SUB_04904f60,0xf7746f8,0xf53dab8);
      FUN_0410844d(&DAT_0f774768);
    }
    func_0x0ee382a0(&uStack_548,&UNK_0f030020);
    uStack_530 = _DAT_0f7ba058;
    uStack_528 = _DAT_0f7ba060;
    uStack_520 = 0;
    uStack_518 = 0;
    puStack_510 = (undefined *)0x0;
    uStack_508 = 0;
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    uStack_498 = 0;
    func_0x063fff80(&uStack_530,param_2);
    uStack_460 = (code *)0xf7746f8;
    uStack_458 = (undefined *)CONCAT44(uStack_458._4_4_,0xffffffff);
    uStack_450 = (code *)&uStack_440;
    uStack_448 = 0x800000000;
    puStack_340 = auStack_330;
    uStack_338 = 0x800000000;
    uStack_1b0 = 0xfffc;
    uStack_1ae = 1;
    uStack_1ac = 0xffffffff00000000;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_468 = (code *)&UNK_0ef47258;
    uStack_188 = 0;
    puStack_190 = &UNK_0ef472c8;
    puStack_128 = &uStack_168;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0x100;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0x200;
    uStack_f0 = 0x144;
    uStack_ec = 0;
    uStack_e0 = 0;
    puStack_e8 = &UNK_0ef473d8;
    puStack_80 = &uStack_c0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0x100;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_50 = 0x200;
    uStack_48 = 0x144;
    uStack_44 = 0x2000;
    uStack_38 = 1;
    uStack_40 = 4;
    pcStack_5e8 = (code *)&UNK_0f030080;
    uStack_570 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    if (uStack_570 == 0) {
      func_0x048b0de0(&uStack_698,&uStack_648);
      _DAT_0f54fd90 = (undefined4)uStack_698;
      uRam000000000f54fd94 = uStack_698._4_4_;
      uVar8 = (undefined4)uStack_690;
      uVar9 = uStack_690._4_4_;
      uStack_698 = (code *)0x0;
      uStack_690 = (code *)0x0;
      plVar5 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
      _DAT_0f54fd98 = uVar8;
      uRam000000000f54fd9c = uVar9;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar20 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          func_0x0412c2d0(plVar5);
        }
      }
      pcVar23 = uStack_690;
      if (uStack_690 != (code *)0x0) {
        LOCK();
        pcVar2 = uStack_690 + 8;
        lVar20 = *(long *)pcVar2;
        *(long *)pcVar2 = *(long *)pcVar2 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          (**(code **)(*(long *)uStack_690 + 0x10))(uStack_690);
          func_0x0412c2d0(pcVar23);
        }
      }
      uStack_570 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
    }
    uStack_588 = &UNK_06446a30;
    uStack_580 = (code *)0x0;
    uStack_578 = CONCAT35(uStack_578._5_3_,0x49ea88212);
    uStack_568 = 0;
    puStack_560 = (undefined *)0x0;
    uStack_688 = (code *)&UNK_06446a30;
    uStack_680 = (code *)0x0;
    uStack_678 = CONCAT35(uStack_678._5_3_,0x49ea88212);
    pcStack_598 = (code *)0x0;
    uStack_670 = 0xf774710;
    uStack_668 = 0;
    puStack_660 = &UNK_06446950;
    uStack_698 = (code *)&uStack_548;
    uVar18 = func_0x0ed6b850(&uStack_468,&puStack_e8,&uStack_698,&pcStack_5e8);
    unaff_RBP = (ulong)uVar18;
    if ((uStack_680 != (code *)0x0) && ((*uStack_680)(&uStack_698), uStack_580 != (code *)0x0)) {
      (*uStack_580)(&pcStack_598);
    }
    if ((char)uVar18 == '\0') {
      func_0x0ed6c330(&uStack_698,&uStack_458);
      func_0x04a782c0(&pcStack_598,uStack_698,uStack_690,&UNK_013a8ff4,1);
      if (((ulong)pcStack_598 & 1) != 0) {
        func_0x0412a280(uStack_588,(ulong)pcStack_598 & 0xfffffffffffffffe);
      }
      pcVar2 = uStack_698;
      pcVar23 = uStack_690;
      if (uStack_698 != (code *)0x0) {
        for (; pcVar2 != pcVar23; pcVar23 = pcVar23 + -0x18) {
          if (((byte)pcVar23[-0x18] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pcVar23 + -8),
                            *(ulong *)(pcVar23 + -0x18) & 0xfffffffffffffffe);
          }
        }
        uStack_690 = pcVar2;
        func_0x0412a280(uStack_698,(long)uStack_688 - (long)uStack_698);
      }
      param_3 = (code *)0x0;
      uStack_608 = 0;
    }
    else {
      func_0x048e6440(&uStack_698,&uStack_468);
      pcStack_490 = uStack_690;
      uStack_608 = (ulong)uStack_698 & 0xffffffffffffff00;
      pcStack_610 = uStack_688;
      param_3 = uStack_698;
    }
    func_0x048e65b0(&uStack_468);
    func_0x063ff160(&uStack_530);
    if (((ulong)uStack_548 & 1) != 0) {
      func_0x0412a280(uStack_538,(ulong)uStack_548 & 0xfffffffffffffffe);
    }
    if ((char)uVar18 != '\0') {
      uVar22 = *param_2;
      uVar4 = param_2[1];
      uStack_418 = (uint)uVar4 & 0xffff;
      uStack_468 = (code *)CONCAT44(uStack_468._4_4_,(int)((ulong)uVar22 >> 0x20));
      uStack_458 = (undefined *)
                   (CONCAT44(uStack_458._4_4_,(int)((ulong)uVar22 >> 0x10)) & 0xffffffff0000ffff);
      uStack_448 = CONCAT44(uStack_448._4_4_,(int)uVar22) & 0xffffffff0000ffff;
      uStack_438 = CONCAT44(uStack_438._4_4_,(uint)(ushort)((ulong)uVar4 >> 0x30));
      uStack_428 = (undefined4)((ulong)uVar4 >> 0x10);
      func_0x0470d9a0(&uStack_548,&UNK_01287ba2,0x28,0x122112,&uStack_468);
      bVar26 = (*param_1 & 1) != 0;
      uStack_468 = pcVar24;
      if (bVar26) {
        uStack_468 = *(code **)(param_1 + 0x10);
      }
      uStack_460 = (code *)(ulong)(*param_1 >> 1);
      if (bVar26) {
        uStack_460 = *(code **)(param_1 + 8);
      }
      uStack_458 = (undefined *)((long)&uStack_548 + 1);
      uStack_450 = (code *)((ulong)uStack_548 >> 1 & 0x7f);
      if (((ulong)uStack_548 & 1) != 0) {
        uStack_450 = pcStack_540;
        uStack_458 = (undefined *)uStack_538;
      }
      func_0x048ad670(&uStack_648,&uStack_468,2,0x2f);
      if (((ulong)uStack_548 & 1) != 0) {
        func_0x0412a280(uStack_538,(ulong)uStack_548 & 0xfffffffffffffffe);
      }
      if (DAT_0f7b8fb8 == '\0') goto LAB_06403e53;
LAB_0640330f:
      pcStack_470 = (code *)((ulong)uStack_648 >> 1 & 0x7f);
      pcVar24 = (code *)((long)&uStack_648 + 1);
      pcStack_478 = pcVar24;
      if (((ulong)uStack_648 & 1) != 0) {
        pcStack_470 = pcStack_640;
        pcStack_478 = pcStack_638;
      }
      (**(code **)(_DAT_0f7b8f98 + 0x80))(&uStack_468,&DAT_0f7b8f98,&pcStack_478);
      uStack_508 = CONCAT71(uStack_508._1_7_,(char)uStack_428);
      if ((char)uStack_428 == '\0') {
        uStack_548 = uStack_468;
        pcStack_540 = uStack_460;
        uStack_538._0_4_ = SUB84(uStack_458,0);
        uStack_538._4_4_ = uStack_458._4_4_;
        uStack_530._0_4_ = SUB84(uStack_450,0);
        uStack_530._4_4_ = uStack_450._4_4_;
        uStack_528 = uStack_448;
        uStack_520._0_4_ = (undefined4)uStack_440;
        uStack_520._4_4_ = uStack_440._4_4_;
        uStack_518._0_4_ = (undefined4)uStack_438;
        uStack_518._4_4_ = uStack_438._4_4_;
        puStack_510 = puStack_430;
        func_0x06447580(&uStack_548);
        puStack_5b0 = puStack_510;
        uVar15 = uStack_518._4_4_;
        uVar14 = (undefined4)uStack_518;
        uVar13 = uStack_520._4_4_;
        uVar12 = (undefined4)uStack_520;
        uStack_5c8 = uStack_528;
        uVar11 = uStack_530._4_4_;
        uVar10 = (undefined4)uStack_530;
        uVar9 = uStack_538._4_4_;
        uVar8 = (undefined4)uStack_538;
        uStack_468 = uStack_548;
        uStack_460 = pcStack_540;
        uStack_538 = 0;
        uStack_530 = 0;
        uStack_528 = 0;
        uStack_520 = 0;
        uStack_518 = 0;
        puStack_510 = (undefined *)0x0;
        uStack_458 = (undefined *)0x0;
        uStack_450 = (code *)0x0;
        uStack_448 = 0;
        uStack_440 = 0;
        uStack_438 = 0;
        puStack_430 = (undefined *)0x0;
        uStack_5a8 = uStack_5a8 & 0xffffffffffffff00;
        pcStack_5e8 = uStack_548;
        pcStack_5e0 = pcStack_540;
        uStack_5d8 = CONCAT44(uVar9,uVar8);
        uStack_5d0 = CONCAT44(uVar11,uVar10);
        uStack_5c0 = CONCAT44(uVar13,uVar12);
        uStack_5b8 = CONCAT44(uVar15,uVar14);
        func_0x048e6d60(&uStack_468);
      }
      else {
        uStack_460 = (code *)((ulong)uStack_648 >> 1 & 0x7f);
        uStack_468 = pcVar24;
        if (((ulong)uStack_648 & 1) != 0) {
          uStack_460 = pcStack_640;
          uStack_468 = pcStack_638;
        }
        uStack_458 = &UNK_012bf330;
        uStack_450 = (code *)0xd;
        func_0x048ad670(&uStack_698,&uStack_468,2,0x2f);
        if (((ulong)uStack_648 & 1) != 0) {
          func_0x0412a280(pcStack_638,(ulong)uStack_648 & 0xfffffffffffffffe);
        }
        pcStack_638 = uStack_688;
        uStack_648 = uStack_698;
        pcStack_640 = uStack_690;
        plStack_628 = (long *)0x0;
        plStack_620 = (long *)0x0;
        pcVar23 = (code *)((ulong)uStack_698 >> 1 & 0x7f);
        if (((ulong)uStack_698 & 1) != 0) {
          pcVar24 = uStack_688;
          pcVar23 = uStack_690;
        }
        if ((DAT_0f7b8fb8 == '\0') && (iVar19 = func_0x04108328(&DAT_0f7b8fb8), iVar19 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          FUN_0410844d(&DAT_0f7b8fb8);
        }
        pcStack_598 = pcVar24;
        pcStack_590 = pcVar23;
        (**(code **)(_DAT_0f7b8f98 + 0x10))
                  (&uStack_698,&DAT_0f7b8f98,&pcStack_598,&plStack_628,0x12e,0);
        uStack_428 = CONCAT31(uStack_428._1_3_,bStack_658);
        if (bStack_658 == 0) {
          uStack_468 = uStack_698;
          uStack_460 = uStack_690;
          uStack_458._0_4_ = SUB84(uStack_688,0);
          uStack_458._4_4_ = uStack_688._4_4_;
          uStack_450._0_4_ = SUB84(uStack_680,0);
          uStack_450._4_4_ = uStack_680._4_4_;
          uStack_448 = uStack_678;
          uStack_440._0_4_ = (undefined4)uStack_670;
          uStack_440._4_4_ = uStack_670._4_4_;
          uStack_438._0_4_ = (undefined4)uStack_668;
          uStack_438._4_4_ = uStack_668._4_4_;
          puStack_430 = puStack_660;
          func_0x06447640(&uStack_468);
          puStack_5b0 = puStack_430;
          uVar15 = uStack_438._4_4_;
          uVar14 = (undefined4)uStack_438;
          uVar13 = uStack_440._4_4_;
          uVar12 = (undefined4)uStack_440;
          uStack_5c8 = uStack_448;
          uVar11 = uStack_450._4_4_;
          uVar10 = (undefined4)uStack_450;
          uVar9 = uStack_458._4_4_;
          uVar8 = (undefined4)uStack_458;
          uStack_698 = uStack_468;
          uStack_690 = uStack_460;
          uStack_458 = (undefined *)0x0;
          uStack_450 = (code *)0x0;
          uStack_448 = 0;
          uStack_440 = 0;
          uStack_438 = 0;
          puStack_430 = (undefined *)0x0;
          uStack_688 = (code *)0x0;
          uStack_680 = (code *)0x0;
          uStack_678 = 0;
          uStack_670 = 0;
          uStack_668 = 0;
          puStack_660 = (undefined *)0x0;
          uStack_5a8 = uStack_5a8 & 0xffffffffffffff00;
          pcStack_5e8 = uStack_468;
          pcStack_5e0 = uStack_460;
          uStack_5d8 = CONCAT44(uVar9,uVar8);
          uStack_5d0 = CONCAT44(uVar11,uVar10);
          uStack_5c0 = CONCAT44(uVar13,uVar12);
          uStack_5b8 = CONCAT44(uVar15,uVar14);
          func_0x048e6d60(&uStack_698);
        }
        else {
          if (((ulong)param_3 & 1) == 0) {
            uStack_600 = (ulong)param_3 & 0xff | uStack_608;
            pcStack_5f8 = pcStack_490;
            pcStack_5f0 = pcStack_610;
            uVar18 = (uint)param_3;
          }
          else {
            func_0x0412e5e0(&uStack_600,pcStack_610,pcStack_490);
            uVar18 = (uint)(byte)uStack_600;
          }
          bVar26 = (uVar18 & 1) != 0;
          pcVar24 = (code *)((long)&uStack_600 + 1);
          if (bVar26) {
            pcVar24 = pcStack_5f0;
          }
          pcVar23 = (code *)(ulong)(byte)((byte)uVar18 >> 1);
          if (bVar26) {
            pcVar23 = pcStack_5f8;
          }
          func_0x0ee76e70(&pcStack_598,plStack_628,pcVar24,pcVar23);
          bStack_658 = bStack_558;
          if (bStack_558 == 0) {
            uStack_698 = pcStack_598;
            uStack_690 = pcStack_590;
            uStack_688._0_4_ = SUB84(uStack_588,0);
            uStack_688._4_4_ = uStack_588._4_4_;
            uStack_680._0_4_ = SUB84(uStack_580,0);
            uStack_680._4_4_ = uStack_580._4_4_;
            uStack_678 = uStack_578;
            uStack_670._0_4_ = (undefined4)uStack_570;
            uStack_670._4_4_ = uStack_570._4_4_;
            uStack_668._0_4_ = (undefined4)uStack_568;
            uStack_668._4_4_ = uStack_568._4_4_;
            puStack_660 = puStack_560;
            func_0x06447700(&uStack_698);
            puStack_5b0 = puStack_660;
            uVar15 = uStack_668._4_4_;
            uVar14 = (undefined4)uStack_668;
            uVar13 = uStack_670._4_4_;
            uVar12 = (undefined4)uStack_670;
            uStack_5c8 = uStack_678;
            uVar11 = uStack_680._4_4_;
            uVar10 = (undefined4)uStack_680;
            uVar9 = uStack_688._4_4_;
            uVar8 = (undefined4)uStack_688;
            pcStack_598 = uStack_698;
            pcStack_590 = uStack_690;
            uStack_688 = (code *)0x0;
            uStack_680 = (code *)0x0;
            uStack_678 = 0;
            uStack_670 = 0;
            uStack_668 = 0;
            puStack_660 = (undefined *)0x0;
            uStack_588 = (undefined *)0x0;
            uStack_580 = (code *)0x0;
            uStack_578 = 0;
            uStack_570 = 0;
            uStack_568 = 0;
            puStack_560 = (undefined *)0x0;
            uStack_5a8 = uStack_5a8 & 0xffffffffffffff00;
            pcStack_5e8 = uStack_698;
            pcStack_5e0 = uStack_690;
            uStack_5d8 = CONCAT44(uVar9,uVar8);
            uStack_5d0 = CONCAT44(uVar11,uVar10);
            uStack_5c0 = CONCAT44(uVar13,uVar12);
            uStack_5b8 = CONCAT44(uVar15,uVar14);
            func_0x048e6d60(&pcStack_598);
          }
          else {
            pcStack_5e8 = (code *)0x0;
            pcStack_5e0 = (code *)0x0;
            uStack_5d8 = 0;
            uStack_5d0 = 0;
            uStack_5c8 = 0;
            uStack_5c0 = 0;
            uStack_5b8 = 0;
            puStack_5b0 = (undefined *)0x0;
            uStack_5a8 = 1;
          }
          lVar20 = uStack_670;
          if ((bStack_658 & 1) == 0) {
            lVar6 = uStack_668;
            if (uStack_670 != 0) {
              while (lVar20 != lVar6) {
                func_0x048b3e80(lVar6 + -0x40);
                lVar6 = lVar6 + -0x40;
              }
              uStack_668 = lVar20;
              func_0x0412a280(uStack_670,(long)puStack_660 - uStack_670);
            }
            pcVar23 = uStack_688;
            pcVar24 = uStack_680;
            if (uStack_688 != (code *)0x0) {
              for (; pcVar23 != pcVar24; pcVar24 = pcVar24 + -0x50) {
                if ((pcVar24[-8] == (code)0x1) && (((byte)pcVar24[-0x30] & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(pcVar24 + -0x20),
                                  *(ulong *)(pcVar24 + -0x30) & 0xfffffffffffffffe);
                }
              }
              uStack_680 = pcVar23;
              func_0x0412a280(uStack_688,uStack_678 - (long)uStack_688);
            }
          }
          if ((uStack_600 & 1) != 0) {
            func_0x0412a280(pcStack_5f0,uStack_600 & 0xfffffffffffffffe);
          }
        }
        lVar20 = uStack_440;
        if ((char)uStack_428 == '\0') {
          lVar6 = uStack_438;
          if (uStack_440 != 0) {
            while (lVar20 != lVar6) {
              func_0x048b3e80(lVar6 + -0x40);
              lVar6 = lVar6 + -0x40;
            }
            uStack_438 = lVar20;
            func_0x0412a280(uStack_440,(long)puStack_430 - uStack_440);
          }
          puVar16 = uStack_458;
          puVar7 = uStack_450;
          if (uStack_458 != (undefined *)0x0) {
            for (; puVar16 != puVar7; puVar7 = puVar7 + -0x50) {
              if ((puVar7[-8] == '\x01') && ((puVar7[-0x30] & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar7 + -0x20),
                                *(ulong *)(puVar7 + -0x30) & 0xfffffffffffffffe);
              }
            }
            uStack_450 = (code *)puVar16;
            func_0x0412a280(uStack_458,uStack_448 - (long)uStack_458);
          }
        }
        if (plStack_628 != (long *)0x0) {
          func_0x0ee56810(&uStack_468,&plStack_628);
          lVar20 = uStack_440;
          if ((char)uStack_428 == '\0') {
            lVar6 = uStack_438;
            if (uStack_440 != 0) {
              while (lVar20 != lVar6) {
                func_0x048b3e80(lVar6 + -0x40);
                lVar6 = lVar6 + -0x40;
              }
              uStack_438 = lVar20;
              func_0x0412a280(uStack_440,(long)puStack_430 - uStack_440);
            }
            puVar16 = uStack_458;
            puVar7 = uStack_450;
            if (uStack_458 != (undefined *)0x0) {
              for (; puVar16 != puVar7; puVar7 = puVar7 + -0x50) {
                if ((puVar7[-8] == '\x01') && ((puVar7[-0x30] & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(puVar7 + -0x20),
                                  *(ulong *)(puVar7 + -0x30) & 0xfffffffffffffffe);
                }
              }
              uStack_450 = (code *)puVar16;
              func_0x0412a280(uStack_458,uStack_448 - (long)uStack_458);
            }
          }
        }
        plVar5 = plStack_620;
        plStack_620 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        plVar5 = plStack_628;
        plStack_628 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      lVar20 = uStack_520;
      if ((char)uStack_508 == '\0') {
        lVar6 = uStack_518;
        if (uStack_520 != 0) {
          while (lVar20 != lVar6) {
            func_0x048b3e80(lVar6 + -0x40);
            lVar6 = lVar6 + -0x40;
          }
          uStack_518 = lVar20;
          func_0x0412a280(uStack_520,(long)puStack_510 - uStack_520);
        }
        lVar6 = uStack_538;
        lVar20 = uStack_530;
        if (uStack_538 != 0) {
          for (; lVar6 != lVar20; lVar20 = lVar20 + -0x50) {
            if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                              *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_530 = lVar6;
          func_0x0412a280(uStack_538,uStack_528 - uStack_538);
        }
      }
      if (((ulong)uStack_648 & 1) != 0) {
        func_0x0412a280(pcStack_638,(ulong)uStack_648 & 0xfffffffffffffffe);
      }
      uStack_468 = (code *)0x250e76836b7ab032;
      uStack_460 = (code *)&UNK_0140f690;
      uStack_458 = (undefined *)0x1;
      uStack_450 = (code *)CONCAT44(uStack_450._4_4_,0xd9);
      if ((byte)uStack_5a8 == 0) {
        func_0x0eedea30(&uStack_548);
        func_0x0eedeb80(2,0x2d,&pcStack_5e8,&uStack_548,&uStack_468);
        if (((ulong)uStack_548 & 1) != 0) {
          func_0x0412a280(uStack_538,(ulong)uStack_548 & 0xfffffffffffffffe);
        }
      }
      lVar20 = uStack_5c0;
      if (((byte)uStack_5a8 & 1) == 0) {
        lVar6 = uStack_5b8;
        if (uStack_5c0 != 0) {
          while (lVar20 != lVar6) {
            func_0x048b3e80(lVar6 + -0x40);
            lVar6 = lVar6 + -0x40;
          }
          uStack_5b8 = lVar20;
          func_0x0412a280(uStack_5c0,(long)puStack_5b0 - uStack_5c0);
        }
        lVar6 = uStack_5d8;
        lVar20 = uStack_5d0;
        if (uStack_5d8 != 0) {
          for (; lVar6 != lVar20; lVar20 = lVar20 + -0x50) {
            if ((*(char *)(lVar20 + -8) == '\x01') && ((*(byte *)(lVar20 + -0x30) & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(lVar20 + -0x20),
                              *(ulong *)(lVar20 + -0x30) & 0xfffffffffffffffe);
            }
          }
          uStack_5d0 = lVar6;
          func_0x0412a280(uStack_5d8,uStack_5c8 - uStack_5d8);
        }
      }
      uVar25 = CONCAT71((int7)(unaff_RBP >> 8),1);
      if (((ulong)param_3 & 1) != 0) {
        func_0x0412a280(pcStack_610,uStack_608 | (byte)param_3 & 0xfe);
      }
      goto LAB_064034c7;
    }
  }
  uVar25 = 0;
LAB_064034c7:
  return uVar25 & 0xffffffff;
}


