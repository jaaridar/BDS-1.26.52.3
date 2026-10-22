/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa3834c0 (ELF vaddr 0xa2834c0)
 * Label: caller-of-callee
 * Body:  [[0a3834c0, 0a38417d] [0a384180, 0a384d6b] [0a384d70, 0a385257] [0a385260, 0a386593] [0a3865a0, 0a38681c] [0a386820, 0a386a50] [0a386a60, 0a386c57]]
 * Ghidra: FUN_0a3834c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a3834c0(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  code *pcVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong *puVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  uint uStack_800;
  undefined4 uStack_7fc;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 *puStack_7e8;
  uint uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined1 uStack_7c8;
  undefined2 uStack_7c7;
  undefined1 uStack_7c5;
  undefined4 uStack_7c4;
  long lStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined8 *puStack_798;
  undefined8 **ppuStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  undefined8 *puStack_768;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  long *plStack_750;
  long *plStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  ulong uStack_730;
  long lStack_728;
  undefined8 *puStack_720;
  undefined1 uStack_718;
  long *plStack_710;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  code *pcStack_6e0;
  undefined1 auStack_6d8 [16];
  undefined *puStack_6c8;
  code *pcStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  code *pcStack_6a0;
  long *plStack_698;
  long alStack_690 [3];
  code *apcStack_678 [3];
  code *pcStack_660;
  undefined1 auStack_650 [24];
  code *pcStack_638;
  undefined1 auStack_630 [24];
  code *pcStack_618;
  undefined1 auStack_608 [24];
  code *apcStack_5f0 [2];
  undefined1 auStack_5e0 [24];
  code *pcStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined1 auStack_5a0 [16];
  undefined1 auStack_590 [8];
  code *pcStack_588;
  code *pcStack_578;
  undefined1 auStack_560 [16];
  undefined1 auStack_550 [8];
  code *pcStack_548;
  code *pcStack_538;
  undefined1 auStack_518 [8];
  undefined1 auStack_510 [16];
  code *pcStack_500;
  code *pcStack_4f8;
  undefined1 auStack_4c8 [24];
  code *pcStack_4b0;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined1 auStack_440 [16];
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  ulong *puStack_3f0;
  ulong *puStack_3e8;
  long lStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  long *plStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined1 auStack_300 [24];
  code *pcStack_2e8;
  undefined1 auStack_2c0 [24];
  code *pcStack_2a8;
  undefined1 auStack_278 [24];
  code *pcStack_260;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 uStack_230;
  undefined2 uStack_22f;
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  code *pcStack_228;
  undefined *puStack_220;
  long *plStack_218;
  undefined1 auStack_210 [16];
  undefined1 *apuStack_200 [2];
  undefined *puStack_1f0;
  code *pcStack_1e8;
  undefined4 uStack_1e0;
  undefined1 uStack_1dc;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1c0 [24];
  code *pcStack_1a8;
  undefined1 auStack_180 [24];
  code *pcStack_168;
  undefined1 auStack_138 [24];
  code *pcStack_120;
  undefined4 uStack_f8;
  undefined2 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_708 = CONCAT31((int3)_DAT_01483d36,0x2c);
  uStack_704 = (undefined4)((ulong)_DAT_01483d36 >> 0x18);
  uStack_700._0_1_ = (undefined1)((ulong)_DAT_01483d36 >> 0x38);
  uStack_700._1_3_ = (undefined3)_UNK_01483d3e;
  uStack_6fc = CONCAT13(0x73,(int3)((ulong)_UNK_01483d3e >> 0x18));
  uStack_6f8 = 0x616e614d;
  uStack_6f4 = 0x726567;
  lStack_488 = 0;
  lStack_480 = 0;
  lStack_478 = 0;
  lStack_470 = 0;
  lStack_468 = 0;
  lStack_460 = 0;
  uStack_458 = 0;
  uStack_450 = 0;
  lStack_448 = 0;
  func_0x048b1dc0(auStack_440);
  func_0x048b1dc0(&uStack_430);
  uStack_390 = 0;
  lStack_388 = 0;
  lStack_3a0 = 0;
  uStack_398 = 0;
  lStack_3b0 = 0;
  lStack_3a8 = 0;
  lStack_3c0 = 0;
  lStack_3b8 = 0;
  uStack_3d0 = 0;
  lStack_3c8 = 0;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  puStack_3f0 = (ulong *)0x0;
  puStack_3e8 = (ulong *)0x0;
  lStack_400 = 0;
  lStack_3f8 = 0;
  lStack_410 = 0;
  lStack_408 = 0;
  lStack_420 = 0;
  lStack_418 = 0;
  if ((uStack_458 & 1) == 0) {
    lStack_448 = CONCAT44(uStack_6f4,uStack_6f8);
    uStack_458 = CONCAT44(uStack_704,uStack_708);
    uStack_450 = CONCAT44(uStack_6fc,uStack_700);
  }
  else {
    func_0x04885120(&uStack_458,(long)&uStack_708 + 1,0x16);
    if ((uStack_708 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_6f4,uStack_6f8),
                      CONCAT44(uStack_704,uStack_708) & 0xfffffffffffffffe);
    }
  }
  uStack_7f8 = (undefined8 **)CONCAT26(uStack_7f8._6_2_,0x7478657408);
  func_0x0a3874e0(&uStack_238,&uStack_7f8);
  uStack_7d0 = 0x6d696412;
  uStack_7cc = 0x69736e65;
  uStack_7c8 = 0x6f;
  uStack_7c7 = 0x6e;
  func_0x0909cf90(&uStack_378,&uStack_7d0);
  uStack_788 = (undefined8 *)0x0;
  uStack_738 = 0;
  uStack_730 = 0;
  plStack_748 = (long *)0x0;
  uStack_740 = 0;
  puStack_758 = (undefined8 *)0x0;
  plStack_750 = (long *)0x0;
  puStack_768 = (undefined8 *)0x0;
  puStack_760 = (undefined8 *)0x0;
  uStack_778 = 0;
  uStack_770 = 0;
  puStack_798 = (undefined8 *)0x0;
  ppuStack_790 = (undefined8 **)0x0;
  uStack_780 = 0x747865546464610e;
  func_0x06523ef0(&uStack_708,auStack_210);
  func_0x06523ef0(apcStack_5f0,&uStack_350);
  uStack_7b8 = (undefined8 *)0x0;
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  uStack_718 = 0;
  puStack_720 = &uStack_7b8;
  lStack_728 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (lStack_728 == 0) {
    func_0x0eec74c0(0x230,0);
  }
  uStack_7a8 = lStack_728 + 0x230;
  uStack_810 = &lStack_38;
  uStack_808 = &lStack_728;
  uStack_800 = uStack_800 & 0xffffff00;
  uStack_818 = (undefined8 **)&uStack_7b8;
  uStack_7b8 = (undefined8 *)lStack_728;
  uStack_7b0 = lStack_728;
  lStack_38 = lStack_728;
  func_0x06523ef0(lStack_728,&uStack_708);
  lStack_728 = lStack_728 + 0x118;
  func_0x06523ef0(lStack_728,apcStack_5f0);
  uStack_7b0 = lStack_728 + 0x118;
  if (pcStack_500 != (code *)0x0) {
    (*pcStack_500)(auStack_518);
  }
  if (pcStack_548 != (code *)0x0) {
    (*pcStack_548)(auStack_560);
  }
  if (pcStack_588 != (code *)0x0) {
    (*pcStack_588)(auStack_5a0);
  }
  if (pcStack_5c8 != (code *)0x0) {
    (*pcStack_5c8)(auStack_5e0);
  }
  if (pcStack_618 != (code *)0x0) {
    (*pcStack_618)(auStack_630);
  }
  if (pcStack_660 != (code *)0x0) {
    (*pcStack_660)(apcStack_678);
  }
  if (pcStack_6a0 != (code *)0x0) {
    (*pcStack_6a0)(&pcStack_6b8);
  }
  if (pcStack_6e0 != (code *)0x0) {
    (*pcStack_6e0)(&uStack_6f8);
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar14 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f21f360;
  uVar11 = func_0x0d858500(&uStack_7b8);
  plVar18 = plVar14 + 3;
  *(undefined1 *)(plVar14 + 4) = 1;
  *(undefined4 *)((long)plVar14 + 0x24) = uVar11;
  *(undefined4 *)(plVar14 + 5) = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[3] = (long)&UNK_0f21f3b0;
  *(undefined4 *)(plVar14 + 9) = (undefined4)uStack_7b8;
  *(undefined4 *)((long)plVar14 + 0x4c) = uStack_7b8._4_4_;
  *(undefined4 *)(plVar14 + 10) = (undefined4)uStack_7b0;
  *(undefined4 *)((long)plVar14 + 0x54) = uStack_7b0._4_4_;
  plVar14[0xb] = uStack_7a8;
  uStack_7b8 = (undefined8 *)0x0;
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  uVar11 = func_0x0d858620(plVar18);
  plVar6 = plStack_748;
  *(undefined4 *)(plVar14 + 5) = uVar11;
  plStack_750 = plVar18;
  if (plStack_748 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_748 + 1;
    lVar22 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      lVar22 = *plStack_748;
      plStack_748 = plVar14;
      (**(code **)(lVar22 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
      plVar14 = plStack_748;
    }
  }
  plStack_748 = plVar14;
  func_0x0912a500();
  uStack_6f8 = SUB84(pcStack_228,0);
  uStack_6f4 = (undefined4)((ulong)pcStack_228 >> 0x20);
  uStack_700 = CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230));
  uStack_708 = uStack_238;
  uStack_704 = uStack_234;
  uStack_6fc = uStack_22c;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22f = 0;
  uStack_22d = 0;
  uStack_22c = 0;
  pcStack_228 = (code *)0x0;
  uStack_6f0 = puStack_220;
  uStack_6e8 = plStack_218;
  func_0x065281f0(&pcStack_6e0,auStack_210);
  uStack_5b8 = uStack_368;
  pcStack_5c8 = (code *)uStack_378;
  uStack_5c0 = uStack_370;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_5b0 = (undefined4)uStack_360;
  uStack_5ac = uStack_360._4_4_;
  uStack_5a8 = (undefined4)uStack_358;
  uStack_5a4 = uStack_358._4_4_;
  func_0x065281f0(auStack_5a0,&uStack_350);
  uStack_818 = (undefined8 **)0x0;
  uStack_810 = (long *)0x0;
  uStack_808 = (long *)0x0;
  puStack_720 = &uStack_818;
  uStack_718 = 0;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar2 = puVar15 + 0x50;
  uStack_818 = (undefined8 **)puVar15;
  uStack_810 = puVar15;
  uStack_808 = puVar2;
  plStack_710 = param_1;
  if ((uStack_708 & 1) == 0) {
    puVar15[2] = CONCAT44(uStack_6f4,uStack_6f8);
    *puVar15 = CONCAT44(uStack_704,uStack_708);
    puVar15[1] = CONCAT44(uStack_6fc,uStack_700);
  }
  else {
    func_0x0412e5e0(puVar15,CONCAT44(uStack_6f4,uStack_6f8),CONCAT44(uStack_6fc,uStack_700));
  }
  *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_6f0;
  *(undefined4 *)((long)puVar15 + 0x1c) = uStack_6f0._4_4_;
  *(undefined4 *)(puVar15 + 4) = (undefined4)uStack_6e8;
  *(undefined4 *)((long)puVar15 + 0x24) = uStack_6e8._4_4_;
  func_0x06523ef0(puVar15 + 5,&pcStack_6e0);
  if (((ulong)pcStack_5c8 & 1) == 0) {
    puVar15[0x2a] = uStack_5b8;
    puVar15[0x28] = pcStack_5c8;
    puVar15[0x29] = uStack_5c0;
  }
  else {
    func_0x0412e5e0(puVar15 + 0x28,uStack_5b8,uStack_5c0);
  }
  *(undefined4 *)(puVar15 + 0x2b) = uStack_5b0;
  *(undefined4 *)((long)puVar15 + 0x15c) = uStack_5ac;
  *(undefined4 *)(puVar15 + 0x2c) = uStack_5a8;
  *(undefined4 *)((long)puVar15 + 0x164) = uStack_5a4;
  func_0x06523ef0(puVar15 + 0x2d,auStack_5a0);
  uStack_810 = puVar2;
  if (pcStack_4b0 != (code *)0x0) {
    (*pcStack_4b0)(auStack_4c8);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_510);
  }
  if (pcStack_538 != (code *)0x0) {
    (*pcStack_538)(auStack_550);
  }
  if (pcStack_578 != (code *)0x0) {
    (*pcStack_578)(auStack_590);
  }
  if (((ulong)pcStack_5c8 & 1) != 0) {
    func_0x0412a280(uStack_5b8,(ulong)pcStack_5c8 & 0xfffffffffffffffe);
  }
  if (apcStack_5f0[0] != (code *)0x0) {
    (*apcStack_5f0[0])(auStack_608);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_650);
  }
  if (apcStack_678[0] != (code *)0x0) {
    (*apcStack_678[0])(alStack_690);
  }
  if (pcStack_6b8 != (code *)0x0) {
    (*pcStack_6b8)(auStack_6d8 + 8);
  }
  if ((uStack_708 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_6f4,uStack_6f8),
                    CONCAT44(uStack_704,uStack_708) & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*plStack_750 + 0x20))();
  uVar19 = ((long)uStack_810 - (long)uStack_818 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar12 != 0) && ((uint)uVar19 != 0)) {
    uVar23 = 0;
    uVar17 = 0;
    uStack_7d4 = uVar12;
    do {
      auVar26 = (**(code **)(*plStack_750 + 0x28))(plStack_750,uVar23);
      lVar21 = auVar26._8_8_;
      lVar22 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == lVar21) {
        if (auVar26._0_8_ == 0) {
          lVar20 = func_0x048aead0(auVar26._8_8_);
          iVar13 = *(int *)(lVar20 + 8);
          if (lVar22 != 0) goto LAB_0a383cd1;
LAB_0a383cee:
          lVar20 = func_0x048aead0(lVar21);
          if (iVar13 != *(int *)(lVar20 + 8)) goto LAB_0a383d00;
        }
        else {
          iVar13 = *(int *)(auVar26._0_8_ + 8);
          if (lVar22 == 0) goto LAB_0a383cee;
LAB_0a383cd1:
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a383d00;
        }
      }
      else {
LAB_0a383d00:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a383ef5;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a383ef5;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a383ef5;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a383ef5;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a383ef5;
        }
        puVar15 = uStack_818;
        puVar2 = uStack_810;
        if (uStack_818[uVar17 * 0x28 + 4] != (undefined8 *)lVar21) goto joined_r0x0a384119;
        if (uStack_818[uVar17 * 0x28 + 3] == (undefined8 *)0x0) {
          lVar20 = func_0x048aead0();
          iVar13 = *(int *)(lVar20 + 8);
          if (lVar22 != 0) goto LAB_0a383ec5;
LAB_0a383edd:
          lVar22 = func_0x048aead0(lVar21);
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a384109;
        }
        else {
          iVar13 = *(int *)((long)uStack_818[uVar17 * 0x28 + 3] + 8);
          if (lVar22 == 0) goto LAB_0a383edd;
LAB_0a383ec5:
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a384109;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0a383ef5:
    } while (((uint)uVar17 < (uint)uVar19) && (uVar23 = uVar23 + 1, uVar23 < uStack_7d4));
    uVar19 = ((long)uStack_810 - (long)uStack_818 >> 6) * -0x3333333333333333;
  }
  puVar15 = puStack_768;
  if (uVar19 == uVar17) {
    puVar2 = puStack_760;
    if (puStack_768 != (undefined8 *)0x0) {
      while (puVar15 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_760 = puVar15;
      func_0x0412a280(puStack_768,(long)puStack_758 - (long)puStack_768);
    }
    puStack_758 = uStack_808;
    if (puStack_3f0 < puStack_3e8) {
      *puStack_3f0 = 0;
      puStack_3f0[1] = 0;
      puStack_3f0[2] = 0;
      *puStack_3f0 = (ulong)puStack_798;
      puStack_3f0[1] = (ulong)ppuStack_790;
      puStack_3f0[2] = (ulong)uStack_788;
      puStack_798 = (undefined8 *)0x0;
      ppuStack_790 = (undefined8 **)0x0;
      uStack_788 = (undefined8 *)0x0;
      puStack_3f0[5] = uStack_770;
      puStack_3f0[3] = uStack_780;
      puStack_3f0[4] = uStack_778;
      uStack_780 = 0;
      uStack_778 = 0;
      uStack_770 = 0;
      puStack_3f0[6] = 0;
      puStack_3f0[7] = 0;
      puStack_3f0[8] = 0;
      puStack_3f0[6] = (ulong)uStack_818;
      puStack_3f0[7] = (ulong)uStack_810;
      puStack_3f0[8] = (ulong)uStack_808;
      puStack_768 = (undefined8 *)0x0;
      puStack_760 = (undefined8 *)0x0;
      puStack_758 = (undefined8 *)0x0;
      puStack_3f0[9] = (ulong)plStack_750;
      puStack_3f0[10] = (ulong)plStack_748;
      plStack_750 = (long *)0x0;
      plStack_748 = (undefined8 *)0x0;
      puStack_3f0[0xb] = 0;
      puStack_3f0[0xc] = 0;
      puStack_3f0[0xd] = 0;
      *(undefined4 *)(puStack_3f0 + 0xb) = (undefined4)uStack_740;
      *(undefined4 *)((long)puStack_3f0 + 0x5c) = uStack_740._4_4_;
      *(undefined4 *)(puStack_3f0 + 0xc) = (undefined4)uStack_738;
      *(undefined4 *)((long)puStack_3f0 + 100) = uStack_738._4_4_;
      puStack_3f0[0xd] = uStack_730;
      uStack_740 = 0;
      uStack_738 = 0;
      uStack_730 = 0;
      puStack_3f0 = puStack_3f0 + 0xe;
    }
    else {
      puStack_768 = uStack_818;
      puStack_760 = uStack_810;
      puStack_3f0 = (ulong *)func_0x0652ac80(&lStack_3f8,&puStack_798);
    }
    puVar24 = puStack_3f0 + -0xe;
    uVar17 = (ulong)uStack_7b8;
  }
  else {
LAB_0a384109:
    puVar15 = uStack_818;
    puVar2 = uStack_810;
    if (uStack_818 != (undefined8 **)0x0) {
joined_r0x0a384119:
      while (puVar5 = uStack_818, uStack_818 != (undefined8 **)puVar2) {
        uStack_818 = (undefined8 **)puVar15;
        func_0x05fe8450(puVar2 + -0x28);
        puVar15 = uStack_818;
        puVar2 = puVar2 + -0x28;
        uStack_818 = (undefined8 **)puVar5;
      }
      uStack_810 = (long *)uStack_818;
      uStack_818 = (undefined8 **)puVar15;
      func_0x0412a280(puVar15,(long)uStack_808 - (long)puVar15);
    }
    puVar24 = (ulong *)0xf660300;
    uVar17 = (ulong)uStack_7b8;
  }
  uStack_7b8 = (undefined8 *)uVar17;
  if (uVar17 != 0) {
    if (uVar17 != uStack_7b0) {
      lVar22 = uStack_7b0 - 0x40;
      do {
        if (*(code **)(lVar22 + 0x18) != (code *)0x0) {
          (**(code **)(lVar22 + 0x18))(lVar22);
        }
        if (*(code **)(lVar22 + -0x30) != (code *)0x0) {
          (**(code **)(lVar22 + -0x30))(lVar22 + -0x48);
        }
        if (*(code **)(lVar22 + -0x70) != (code *)0x0) {
          (**(code **)(lVar22 + -0x70))(lVar22 + -0x88);
        }
        if (*(code **)(lVar22 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar22 + -0xb0))(lVar22 + -200);
        }
        uVar19 = lVar22 - 0xd8;
        lVar22 = lVar22 + -0x118;
      } while (uVar19 != uVar17);
    }
    uStack_7b0 = uVar17;
    func_0x0412a280(uStack_7b8,uStack_7a8 - (long)uStack_7b8);
  }
  func_0x05f93280(&puStack_798);
  uStack_58 = _DAT_0f642360;
  uStack_54 = _DAT_0f642364;
  if ((_DAT_0f642368 & 1) == 0) {
    uStack_40 = _DAT_0f642378;
    uStack_50 = _DAT_0f642368;
    uStack_4c = uRam000000000f64236c;
    uStack_48 = _DAT_0f642370;
    uStack_44 = uRam000000000f642374;
  }
  else {
    func_0x0412e5e0(&uStack_50,_DAT_0f642378,CONCAT44(uRam000000000f642374,_DAT_0f642370));
  }
  func_0x0730fa70(puVar24,&uStack_58,0);
  if ((uStack_50 & 1) != 0) {
    func_0x0412a280(uStack_40,CONCAT44(uStack_4c,uStack_50) & 0xfffffffffffffffe);
  }
  if (pcStack_260 != (code *)0x0) {
    (*pcStack_260)(auStack_278);
  }
  if (pcStack_2a8 != (code *)0x0) {
    (*pcStack_2a8)(auStack_2c0);
  }
  if (pcStack_2e8 != (code *)0x0) {
    (*pcStack_2e8)(auStack_300);
  }
  if (pcStack_328 != (code *)0x0) {
    (*pcStack_328)(&puStack_340);
  }
  if ((uStack_378 & 1) != 0) {
    func_0x0412a280(uStack_368,uStack_378 & 0xfffffffffffffffe);
  }
  if ((uStack_7d0 & 1) != 0) {
    func_0x0412a280(lStack_7c0,CONCAT44(uStack_7cc,uStack_7d0) & 0xfffffffffffffffe);
  }
  if (pcStack_120 != (code *)0x0) {
    (*pcStack_120)(auStack_138);
  }
  if (pcStack_168 != (code *)0x0) {
    (*pcStack_168)(auStack_180);
  }
  if (pcStack_1a8 != (code *)0x0) {
    (*pcStack_1a8)(auStack_1c0);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(apuStack_200);
  }
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(pcStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_7f8 & 1) != 0) {
    func_0x0412a280(puStack_7e8,(ulong)uStack_7f8 & 0xfffffffffffffffe);
  }
  uStack_7b8 = (undefined8 *)CONCAT26(uStack_7b8._6_2_,0x7478657408);
  func_0x0a3874e0(&uStack_238,&uStack_7b8);
  uStack_368 = 0;
  uStack_350 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  pcStack_328 = (code *)0x0;
  uStack_320 = 0;
  puStack_338 = (undefined8 *)0x0;
  plStack_330 = (long *)0x0;
  puStack_348 = (undefined8 *)0x0;
  puStack_340 = (undefined8 *)0x0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_360 = 0x5465766f6d657214;
  uStack_358 = 0x747865;
  func_0x06523ef0(&uStack_708,auStack_210);
  uStack_818 = (undefined8 **)0x0;
  uStack_810 = (long *)0x0;
  uStack_808 = (long *)0x0;
  uStack_7f0 = (undefined8 *)((ulong)uStack_7f0 & 0xffffffffffffff00);
  uStack_7f8 = (undefined8 **)&uStack_818;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  uStack_808 = puVar15 + 0x23;
  uStack_7d0 = (uint)puVar15;
  uStack_7cc = (undefined4)((ulong)puVar15 >> 0x20);
  ppuStack_790 = &puStack_720;
  uStack_788 = (undefined8 *)&uStack_7d0;
  uStack_780 = uStack_780 & 0xffffffffffffff00;
  uStack_818 = (undefined8 **)puVar15;
  uStack_810 = puVar15;
  puStack_798 = &uStack_818;
  puStack_720 = puVar15;
  func_0x06523ef0(puVar15,&uStack_708);
  uStack_810 = (long *)(CONCAT44(uStack_7cc,uStack_7d0) + 0x118);
  if (pcStack_618 != (code *)0x0) {
    (*pcStack_618)(auStack_630);
  }
  if (pcStack_660 != (code *)0x0) {
    (*pcStack_660)(apcStack_678);
  }
  if (pcStack_6a0 != (code *)0x0) {
    (*pcStack_6a0)(&pcStack_6b8);
  }
  if (pcStack_6e0 != (code *)0x0) {
    (*pcStack_6e0)(&uStack_6f8);
  }
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar16 + 8) = 0;
  *(undefined8 *)((long)pcVar16 + 0x10) = 0;
  *(undefined **)pcVar16 = &UNK_0f21f458;
  uVar11 = func_0x0d858500(&uStack_818);
  plVar14 = (long *)((long)pcVar16 + 0x18);
  *(undefined1 *)((long)pcVar16 + 0x20) = 1;
  *(undefined4 *)((long)pcVar16 + 0x24) = uVar11;
  *(undefined4 *)((long)pcVar16 + 0x28) = 0;
  *(undefined8 *)((long)pcVar16 + 0x30) = 0;
  *(undefined8 *)((long)pcVar16 + 0x38) = 0;
  *(undefined8 *)((long)pcVar16 + 0x40) = 0;
  *(undefined **)((long)pcVar16 + 0x18) = &UNK_0f21f4a8;
  *(undefined4 *)((long)pcVar16 + 0x48) = (undefined4)uStack_818;
  *(undefined4 *)((long)pcVar16 + 0x4c) = uStack_818._4_4_;
  *(undefined4 *)((long)pcVar16 + 0x50) = (undefined4)uStack_810;
  *(undefined4 *)((long)pcVar16 + 0x54) = uStack_810._4_4_;
  *(long **)((long)pcVar16 + 0x58) = uStack_808;
  uStack_818 = (undefined8 **)0x0;
  uStack_810 = (long *)0x0;
  uStack_808 = (long *)0x0;
  uVar11 = func_0x0d858620(plVar14);
  pcVar1 = pcStack_328;
  *(undefined4 *)((long)pcVar16 + 0x28) = uVar11;
  plStack_330 = plVar14;
  if (pcStack_328 != (code *)0x0) {
    LOCK();
    plVar14 = (long *)((long)pcStack_328 + 8);
    lVar22 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      lVar22 = *(long *)pcStack_328;
      pcStack_328 = pcVar16;
      (**(code **)(lVar22 + 0x10))(pcVar1);
      func_0x0412c2d0(pcVar1);
      pcVar16 = pcStack_328;
    }
  }
  pcStack_328 = pcVar16;
  uStack_6f8 = SUB84(pcStack_228,0);
  uStack_6f4 = (undefined4)((ulong)pcStack_228 >> 0x20);
  uStack_700 = CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230));
  uStack_708 = uStack_238;
  uStack_704 = uStack_234;
  uStack_6fc = uStack_22c;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22f = 0;
  uStack_22d = 0;
  uStack_22c = 0;
  pcStack_228 = (code *)0x0;
  uStack_6f0 = puStack_220;
  uStack_6e8 = plStack_218;
  func_0x065281f0(&pcStack_6e0,auStack_210);
  puStack_798 = (undefined8 *)0x0;
  ppuStack_790 = (undefined8 **)0x0;
  uStack_788 = (undefined8 *)0x0;
  uStack_7f0 = (undefined8 *)((ulong)uStack_7f0 & 0xffffffffffffff00);
  uStack_7f8 = &puStack_798;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar2 = puVar15 + 0x28;
  puStack_798 = puVar15;
  uStack_788 = puVar2;
  if ((uStack_708 & 1) == 0) {
    puVar15[2] = CONCAT44(uStack_6f4,uStack_6f8);
    *puVar15 = CONCAT44(uStack_704,uStack_708);
    puVar15[1] = CONCAT44(uStack_6fc,uStack_700);
    ppuStack_790 = (undefined8 **)puVar15;
  }
  else {
    ppuStack_790 = (undefined8 **)puVar15;
    func_0x0412e5e0(puVar15,CONCAT44(uStack_6f4,uStack_6f8),CONCAT44(uStack_6fc,uStack_700));
  }
  *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_6f0;
  *(undefined4 *)((long)puVar15 + 0x1c) = uStack_6f0._4_4_;
  *(undefined4 *)(puVar15 + 4) = (undefined4)uStack_6e8;
  *(undefined4 *)((long)puVar15 + 0x24) = uStack_6e8._4_4_;
  func_0x06523ef0(puVar15 + 5,&pcStack_6e0);
  ppuStack_790 = (undefined8 **)puVar2;
  if (apcStack_5f0[0] != (code *)0x0) {
    (*apcStack_5f0[0])(auStack_608);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_650);
  }
  if (apcStack_678[0] != (code *)0x0) {
    (*apcStack_678[0])(alStack_690);
  }
  if (pcStack_6b8 != (code *)0x0) {
    (*pcStack_6b8)(auStack_6d8 + 8);
  }
  if ((uStack_708 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_6f4,uStack_6f8),
                    CONCAT44(uStack_704,uStack_708) & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*plStack_330 + 0x20))();
  uVar19 = ((long)ppuStack_790 - (long)puStack_798 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar12 != 0) && ((uint)uVar19 != 0)) {
    uVar23 = 0;
    uVar17 = 0;
    uStack_7d4 = uVar12;
    do {
      auVar26 = (**(code **)(*plStack_330 + 0x28))(plStack_330,uVar23);
      lVar21 = auVar26._8_8_;
      lVar22 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == lVar21) {
        if (auVar26._0_8_ == 0) {
          lVar20 = func_0x048aead0(auVar26._8_8_);
          iVar13 = *(int *)(lVar20 + 8);
          if (lVar22 != 0) goto LAB_0a384892;
LAB_0a3848b1:
          lVar20 = func_0x048aead0(lVar21);
          if (iVar13 != *(int *)(lVar20 + 8)) goto LAB_0a3848d0;
        }
        else {
          iVar13 = *(int *)(auVar26._0_8_ + 8);
          if (lVar22 == 0) goto LAB_0a3848b1;
LAB_0a384892:
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a3848d0;
        }
      }
      else {
LAB_0a3848d0:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a384aca;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a384aca;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a384aca;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a384aca;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a384aca;
        }
        puVar15 = puStack_798;
        ppuVar4 = ppuStack_790;
        if (puStack_798[uVar17 * 0x28 + 4] != lVar21) goto joined_r0x0a384d06;
        if (puStack_798[uVar17 * 0x28 + 3] == 0) {
          lVar20 = func_0x048aead0();
          iVar13 = *(int *)(lVar20 + 8);
          if (lVar22 != 0) goto LAB_0a384a99;
LAB_0a384ab2:
          lVar22 = func_0x048aead0(lVar21);
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a384cf3;
        }
        else {
          iVar13 = *(int *)(puStack_798[uVar17 * 0x28 + 3] + 8);
          if (lVar22 == 0) goto LAB_0a384ab2;
LAB_0a384a99:
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a384cf3;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0a384aca:
    } while (((uint)uVar17 < (uint)uVar19) && (uVar23 = uVar23 + 1, uVar23 < uStack_7d4));
    uVar19 = ((long)ppuStack_790 - (long)puStack_798 >> 6) * -0x3333333333333333;
  }
  puVar15 = puStack_348;
  if (uVar19 == uVar17) {
    puVar2 = puStack_340;
    if (puStack_348 != (undefined8 *)0x0) {
      while (puVar15 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_340 = puVar15;
      func_0x0412a280(puStack_348,(long)puStack_338 - (long)puStack_348);
    }
    puStack_338 = uStack_788;
    if (puStack_3f0 < puStack_3e8) {
      *puStack_3f0 = 0;
      puStack_3f0[1] = 0;
      puStack_3f0[2] = 0;
      *puStack_3f0 = uStack_378;
      puStack_3f0[1] = uStack_370;
      puStack_3f0[2] = uStack_368;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_368 = 0;
      puStack_3f0[5] = uStack_350;
      puStack_3f0[3] = uStack_360;
      puStack_3f0[4] = uStack_358;
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      puStack_3f0[6] = 0;
      puStack_3f0[7] = 0;
      puStack_3f0[8] = 0;
      puStack_3f0[6] = (ulong)puStack_798;
      puStack_3f0[7] = (ulong)ppuStack_790;
      puStack_3f0[8] = (ulong)uStack_788;
      puStack_348 = (undefined8 *)0x0;
      puStack_340 = (undefined8 *)0x0;
      puStack_338 = (undefined8 *)0x0;
      puStack_3f0[9] = (ulong)plStack_330;
      puStack_3f0[10] = (ulong)pcStack_328;
      plStack_330 = (long *)0x0;
      pcStack_328 = (code *)0x0;
      puStack_3f0[0xb] = 0;
      puStack_3f0[0xc] = 0;
      puStack_3f0[0xd] = 0;
      *(undefined4 *)(puStack_3f0 + 0xb) = (undefined4)uStack_320;
      *(undefined4 *)((long)puStack_3f0 + 0x5c) = uStack_320._4_4_;
      *(undefined4 *)(puStack_3f0 + 0xc) = (undefined4)uStack_318;
      *(undefined4 *)((long)puStack_3f0 + 100) = uStack_318._4_4_;
      puStack_3f0[0xd] = uStack_310;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      puStack_3f0 = puStack_3f0 + 0xe;
    }
    else {
      puStack_348 = puStack_798;
      puStack_340 = ppuStack_790;
      puStack_3f0 = (ulong *)func_0x0652ac80(&lStack_3f8,&uStack_378);
    }
    puVar24 = puStack_3f0 + -0xe;
    uVar17 = (ulong)uStack_818;
  }
  else {
LAB_0a384cf3:
    puVar15 = puStack_798;
    ppuVar4 = ppuStack_790;
    if (puStack_798 != (undefined8 *)0x0) {
joined_r0x0a384d06:
      while (puVar2 = puStack_798, (undefined8 **)puStack_798 != ppuVar4) {
        puStack_798 = puVar15;
        func_0x05fe8450(ppuVar4 + -0x28);
        puVar15 = puStack_798;
        ppuVar4 = ppuVar4 + -0x28;
        puStack_798 = puVar2;
      }
      ppuStack_790 = (undefined8 **)puStack_798;
      puStack_798 = puVar15;
      func_0x0412a280(puVar15,(long)uStack_788 - (long)puVar15);
    }
    puVar24 = (ulong *)0xf660300;
    uVar17 = (ulong)uStack_818;
  }
  uStack_818 = (undefined8 **)uVar17;
  if (uVar17 != 0) {
    if ((long *)uVar17 != uStack_810) {
      lVar22 = (long)uStack_810 - 0x40;
      do {
        if (*(code **)(lVar22 + 0x18) != (code *)0x0) {
          (**(code **)(lVar22 + 0x18))(lVar22);
        }
        if (*(code **)(lVar22 + -0x30) != (code *)0x0) {
          (**(code **)(lVar22 + -0x30))(lVar22 + -0x48);
        }
        if (*(code **)(lVar22 + -0x70) != (code *)0x0) {
          (**(code **)(lVar22 + -0x70))(lVar22 + -0x88);
        }
        if (*(code **)(lVar22 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar22 + -0xb0))(lVar22 + -200);
        }
        uVar19 = lVar22 - 0xd8;
        lVar22 = lVar22 + -0x118;
      } while (uVar19 != uVar17);
    }
    uStack_810 = (long *)uVar17;
    func_0x0412a280(uStack_818,(long)uStack_808 - (long)uStack_818);
  }
  func_0x05f93280(&uStack_378);
  uStack_78 = _DAT_0f642360;
  uStack_74 = _DAT_0f642364;
  if ((_DAT_0f642368 & 1) == 0) {
    uStack_60 = _DAT_0f642378;
    uStack_70 = _DAT_0f642368;
    uStack_6c = uRam000000000f64236c;
    uStack_68 = _DAT_0f642370;
    uStack_64 = uRam000000000f642374;
  }
  else {
    func_0x0412e5e0(&uStack_70,_DAT_0f642378,CONCAT44(uRam000000000f642374,_DAT_0f642370));
  }
  func_0x0730fa70(puVar24,&uStack_78,0);
  if ((uStack_70 & 1) != 0) {
    func_0x0412a280(uStack_60,CONCAT44(uStack_6c,uStack_70) & 0xfffffffffffffffe);
  }
  if (pcStack_120 != (code *)0x0) {
    (*pcStack_120)(auStack_138);
  }
  if (pcStack_168 != (code *)0x0) {
    (*pcStack_168)(auStack_180);
  }
  if (pcStack_1a8 != (code *)0x0) {
    (*pcStack_1a8)(auStack_1c0);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(apuStack_200);
  }
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(pcStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_7b8 & 1) != 0) {
    func_0x0412a280(uStack_7a8,(ulong)uStack_7b8 & 0xfffffffffffffffe);
  }
  uStack_6f8 = 0;
  uStack_6f4 = 0;
  pcStack_6e0 = (code *)0x0;
  uStack_6a8 = 0;
  pcStack_6a0 = (code *)0x0;
  pcStack_6b8 = (code *)0x0;
  uStack_6b0 = (long *)0x0;
  puStack_6c8 = (undefined *)0x0;
  pcStack_6c0 = (code *)0x0;
  auStack_6d8._0_8_ = 0;
  auStack_6d8._8_8_ = 0;
  uStack_708 = 0;
  uStack_704 = 0;
  uStack_700 = 0;
  uStack_6fc = 0;
  uStack_6f0 = (undefined *)0x4165766f6d657212;
  uStack_6e8 = (long *)0x6c6c;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  pcVar16 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar16 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar16 + 8) = 0;
  *(undefined8 *)(pcVar16 + 0x10) = 0;
  *(undefined **)pcVar16 = &UNK_0f21f528;
  uVar11 = func_0x0d858500(&uStack_378);
  pcVar1 = pcVar16 + 0x18;
  pcVar16[0x20] = (code)0x1;
  *(undefined4 *)(pcVar16 + 0x24) = uVar11;
  *(undefined4 *)(pcVar16 + 0x28) = 0;
  *(undefined8 *)(pcVar16 + 0x30) = 0;
  *(undefined8 *)(pcVar16 + 0x38) = 0;
  *(undefined8 *)(pcVar16 + 0x40) = 0;
  *(undefined **)(pcVar16 + 0x18) = &UNK_0f21f578;
  *(undefined8 *)(pcVar16 + 0x48) = 0;
  *(undefined8 *)(pcVar16 + 0x50) = 0;
  *(undefined8 *)(pcVar16 + 0x58) = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uVar11 = func_0x0d858620(pcVar1);
  pcVar9 = pcStack_6b8;
  *(undefined4 *)(pcVar16 + 0x28) = uVar11;
  pcStack_6c0 = pcVar1;
  if (pcStack_6b8 != (code *)0x0) {
    LOCK();
    pcVar1 = pcStack_6b8 + 8;
    lVar22 = *(long *)pcVar1;
    *(long *)pcVar1 = *(long *)pcVar1 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      lVar22 = *(long *)pcStack_6b8;
      pcStack_6b8 = pcVar16;
      (**(code **)(lVar22 + 0x10))(pcVar9);
      func_0x0412c2d0(pcVar9);
      pcVar16 = pcStack_6b8;
    }
  }
  pcStack_6b8 = pcVar16;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22f = 0;
  uStack_22d = 0;
  uStack_22c = 0;
  pcStack_228 = (code *)0x0;
  (**(code **)(*(long *)pcStack_6c0 + 0x20))();
  uVar8 = auStack_6d8._0_8_;
  lVar22 = auStack_6d8._8_8_;
  if (auStack_6d8._0_8_ != 0) {
    while (uVar8 != lVar22) {
      func_0x05fe8450(lVar22 + -0x140);
      lVar22 = lVar22 + -0x140;
    }
    auStack_6d8._8_8_ = uVar8;
    func_0x0412a280(auStack_6d8._0_8_,(long)puStack_6c8 - auStack_6d8._0_8_);
  }
  auStack_6d8._0_8_ = 0;
  auStack_6d8._8_8_ = 0;
  puStack_6c8 = (undefined *)0x0;
  if (puStack_3f0 < puStack_3e8) {
    *puStack_3f0 = 0;
    puStack_3f0[1] = 0;
    puStack_3f0[2] = 0;
    *puStack_3f0 = CONCAT44(uStack_704,uStack_708);
    puStack_3f0[1] = CONCAT44(uStack_6fc,uStack_700);
    puStack_3f0[2] = CONCAT44(uStack_6f4,uStack_6f8);
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    uStack_6f8 = 0;
    uStack_6f4 = 0;
    puStack_3f0[5] = (ulong)pcStack_6e0;
    puStack_3f0[3] = (ulong)uStack_6f0;
    puStack_3f0[4] = (ulong)uStack_6e8;
    uStack_6f0 = (undefined *)0x0;
    uStack_6e8 = (long *)0x0;
    pcStack_6e0 = (code *)0x0;
    puStack_3f0[6] = 0;
    puStack_3f0[7] = 0;
    puStack_3f0[8] = 0;
    puStack_3f0[6] = 0;
    puStack_3f0[7] = 0;
    puStack_3f0[8] = 0;
    auStack_6d8._0_8_ = 0;
    auStack_6d8._8_8_ = 0;
    puStack_6c8 = (undefined *)0x0;
    puStack_3f0[9] = (ulong)pcStack_6c0;
    puStack_3f0[10] = (ulong)pcStack_6b8;
    pcStack_6c0 = (code *)0x0;
    pcStack_6b8 = (code *)0x0;
    puStack_3f0[0xb] = 0;
    puStack_3f0[0xc] = 0;
    puStack_3f0[0xd] = 0;
    *(undefined4 *)(puStack_3f0 + 0xb) = (undefined4)uStack_6b0;
    *(undefined4 *)((long)puStack_3f0 + 0x5c) = uStack_6b0._4_4_;
    *(undefined4 *)(puStack_3f0 + 0xc) = (undefined4)uStack_6a8;
    *(undefined4 *)((long)puStack_3f0 + 100) = uStack_6a8._4_4_;
    puStack_3f0[0xd] = (ulong)pcStack_6a0;
    uStack_6b0 = (long *)0x0;
    uStack_6a8 = 0;
    pcStack_6a0 = (code *)0x0;
    puVar24 = puStack_3f0 + 0xe;
    uVar17 = uStack_378;
  }
  else {
    puVar24 = (ulong *)func_0x0652ac80(&lStack_3f8,&uStack_708);
    uVar17 = uStack_378;
  }
  puStack_3f0 = puVar24;
  uStack_378 = uVar17;
  if (uVar17 != 0) {
    if (uVar17 != uStack_370) {
      lVar22 = uStack_370 - 0x40;
      do {
        if (*(code **)(lVar22 + 0x18) != (code *)0x0) {
          (**(code **)(lVar22 + 0x18))(lVar22);
        }
        if (*(code **)(lVar22 + -0x30) != (code *)0x0) {
          (**(code **)(lVar22 + -0x30))(lVar22 + -0x48);
        }
        if (*(code **)(lVar22 + -0x70) != (code *)0x0) {
          (**(code **)(lVar22 + -0x70))(lVar22 + -0x88);
        }
        if (*(code **)(lVar22 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar22 + -0xb0))(lVar22 + -200);
        }
        uVar19 = lVar22 - 0xd8;
        lVar22 = lVar22 + -0x118;
      } while (uVar19 != uVar17);
    }
    func_0x0412a280(uStack_378,uStack_368 - uStack_378);
  }
  func_0x05f93280(&uStack_708);
  uStack_98 = _DAT_0f642360;
  uStack_94 = _DAT_0f642364;
  if ((_DAT_0f642368 & 1) == 0) {
    uStack_80 = _DAT_0f642378;
    uStack_90 = _DAT_0f642368;
    uStack_8c = uRam000000000f64236c;
    uStack_88 = _DAT_0f642370;
    uStack_84 = uRam000000000f642374;
  }
  else {
    func_0x0412e5e0(&uStack_90,_DAT_0f642378,CONCAT44(uRam000000000f642374,_DAT_0f642370));
  }
  func_0x0730fa70(puVar24 + -0xe,&uStack_98,0);
  if ((uStack_90 & 1) != 0) {
    func_0x0412a280(uStack_80,CONCAT44(uStack_8c,uStack_90) & 0xfffffffffffffffe);
  }
  uStack_238 = 0x78616d12;
  uStack_234 = 0x70616853;
  uStack_230 = 0x65;
  uStack_22f = 0x73;
  func_0x065af670(&uStack_708);
  if (((ulong)uStack_6f0 & 1) == 0) {
    if ((uStack_238 & 1) == 0) {
      pcStack_6e0 = pcStack_228;
      uStack_6f0 = (undefined *)CONCAT44(uStack_234,uStack_238);
      uStack_6e8 = (long *)CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230)))
      ;
    }
    else {
      func_0x04885070(&uStack_6f0,pcStack_228,
                      CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230))));
    }
  }
  else {
    bVar25 = (uStack_238 & 1) != 0;
    pcVar16 = (code *)((long)&uStack_238 + 1);
    if (bVar25) {
      pcVar16 = pcStack_228;
    }
    uVar17 = (ulong)((byte)uStack_238 >> 1);
    if (bVar25) {
      uVar17 = CONCAT44(uStack_22c,CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230)));
    }
    func_0x04885120(&uStack_6f0,pcVar16,uVar17);
  }
  auStack_6d8 = func_0x0651f1a0();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar14 = uStack_6b0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f21f5f8;
  pcStack_6b8 = (code *)(puVar15 + 3);
  *(undefined1 *)(puVar15 + 4) = 1;
  puVar15[5] = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[3] = &UNK_0f21f648;
  if (uStack_6b0 == (long *)0x0) {
LAB_0a3854b2:
    uStack_6b0 = puVar15;
    if (uStack_3d8 < uStack_3d0) goto LAB_0a3854c4;
LAB_0a385500:
    lVar22 = func_0x065b01f0(&lStack_3e0,&uStack_708);
  }
  else {
    LOCK();
    plVar18 = uStack_6b0 + 1;
    lVar22 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar22 != 0) goto LAB_0a3854b2;
    lVar22 = *uStack_6b0;
    uStack_6b0 = puVar15;
    (**(code **)(lVar22 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    if (uStack_3d0 <= uStack_3d8) goto LAB_0a385500;
LAB_0a3854c4:
    uVar17 = uStack_3d8;
    func_0x065b0410(uStack_3d8,&uStack_708);
    lVar22 = uVar17 + 0x1b0;
  }
  uStack_3d8 = lVar22;
  func_0x0652dc20(&uStack_708);
  uStack_b8 = _DAT_0f642360;
  uStack_b4 = _DAT_0f642364;
  if ((_DAT_0f642368 & 1) == 0) {
    uStack_a0 = _DAT_0f642378;
    uStack_b0 = _DAT_0f642368;
    uStack_ac = uRam000000000f64236c;
    uStack_a8 = _DAT_0f642370;
    uStack_a4 = uRam000000000f642374;
  }
  else {
    func_0x0412e5e0(&uStack_b0,_DAT_0f642378,CONCAT44(uRam000000000f642374,_DAT_0f642370));
  }
  func_0x0730fa70(lVar22 + -0x1b0,&uStack_b8,0);
  if ((uStack_b0 & 1) != 0) {
    func_0x0412a280(uStack_a0,CONCAT44(uStack_ac,uStack_b0) & 0xfffffffffffffffe);
  }
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(pcStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
  }
  uStack_7d0 = 0x74706f0e;
  uStack_7cc = 0x736e6f69;
  uStack_7c8 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22f = 0;
  uStack_22d = 0;
  uStack_22c = 0;
  pcStack_228 = (code *)0x0;
  func_0x048b1dc0(&puStack_220);
  func_0x0652b590(auStack_210);
  if ((uStack_238 & 1) == 0) {
    if ((uStack_7d0 & 1) == 0) {
      pcStack_228 = (code *)lStack_7c0;
      uStack_238 = uStack_7d0;
      uStack_234 = uStack_7cc;
      uStack_230 = uStack_7c8;
      uStack_22f = uStack_7c7;
      uStack_22d = uStack_7c5;
      uStack_22c = uStack_7c4;
    }
    else {
      func_0x04885070(&uStack_238,lStack_7c0,
                      CONCAT44(uStack_7c4,CONCAT13(uStack_7c5,CONCAT21(uStack_7c7,uStack_7c8))));
    }
  }
  else {
    bVar25 = (uStack_7d0 & 1) != 0;
    lVar22 = (long)&uStack_7d0 + 1;
    if (bVar25) {
      lVar22 = lStack_7c0;
    }
    uVar17 = (ulong)((byte)uStack_7d0 >> 1);
    if (bVar25) {
      uVar17 = CONCAT44(uStack_7c4,CONCAT13(uStack_7c5,CONCAT21(uStack_7c7,uStack_7c8)));
    }
    func_0x04885120(&uStack_238,lVar22,uVar17);
  }
  plVar14 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar14 == (long *)0x0) {
    func_0x048b0de0(&uStack_708,&uStack_378);
    uVar7 = uStack_6fc;
    uVar11 = uStack_700;
    uRam000000000f54fd94 = uStack_704;
    _DAT_0f54fd90 = uStack_708;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar11;
    uRam000000000f54fd9c = uVar7;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar22 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)CONCAT44(uStack_6fc,uStack_700);
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar22 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f665120 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f665120);
    if (iVar13 != 0) {
      func_0x0a467250();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f6650a0,0xf53dab8);
      FUN_0410844d(&DAT_0f665120);
    }
  }
  plVar18 = (long *)(*plVar14 +
                    (ulong)((int)((ulong)(plVar14[1] - *plVar14) >> 3) - 1U &
                           *(uint *)(_DAT_0f6650a0 + 4)) * 8);
  do {
    lVar22 = *plVar18;
    if (lVar22 == -1) goto LAB_0a3857a0;
    plVar18 = (long *)(plVar14[3] + lVar22 * 0x18);
  } while (*(uint *)(plVar14[3] + 8 + lVar22 * 0x18) != *(uint *)(_DAT_0f6650a0 + 4));
  if (plVar18 == (long *)plVar14[4]) {
LAB_0a3857a0:
    puStack_220 = &DAT_0f6650a0;
  }
  else {
    puStack_220 = (undefined *)plVar18[2];
  }
  plStack_218 = plVar14;
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(apuStack_200);
  }
  puStack_1f0 = &UNK_0a467640;
  uStack_1e0 = 0xaeca5b04;
  pcStack_1e8 = (code *)&UNK_0a467c50;
  uStack_1dc = 1;
  apuStack_200[0] = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  if (apuStack_200[0] == (undefined1 *)0x0) {
    func_0x0eec74c0(0x50,0);
  }
  puVar10 = puStack_1c8;
  *apuStack_200[0] = 0;
  apuStack_200[0][0x48] = 0;
  puStack_1c8 = &UNK_0a467490;
  if (puVar10 != &UNK_0a467490) {
    uStack_1d0 = 0;
  }
  uStack_368 = 0;
  uStack_350 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  pcStack_328 = (code *)0x0;
  uStack_320 = 0;
  puStack_338 = (undefined8 *)0x0;
  plStack_330 = (long *)0x0;
  puStack_348 = (undefined8 *)0x0;
  puStack_340 = (undefined8 *)0x0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_360 = 0x7061685374656712;
  uStack_358 = 0x7365;
  func_0x06523ef0(&uStack_708,auStack_210);
  uStack_7f8 = (undefined8 **)0x0;
  uStack_7f0 = (undefined8 *)0x0;
  puStack_7e8 = (undefined8 *)0x0;
  uStack_810 = (long *)((ulong)uStack_810 & 0xffffffffffffff00);
  uStack_818 = (undefined8 **)&uStack_7f8;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  puStack_7e8 = puVar15 + 0x23;
  ppuStack_790 = &puStack_720;
  uStack_788 = &uStack_7b8;
  uStack_780 = uStack_780 & 0xffffffffffffff00;
  uStack_7f8 = (undefined8 **)puVar15;
  uStack_7f0 = puVar15;
  uStack_7b8 = puVar15;
  puStack_798 = &uStack_7f8;
  puStack_720 = puVar15;
  func_0x06523ef0(puVar15,&uStack_708);
  uStack_7f0 = uStack_7b8 + 0x23;
  if (pcStack_618 != (code *)0x0) {
    (*pcStack_618)(auStack_630);
  }
  if (pcStack_660 != (code *)0x0) {
    (*pcStack_660)(apcStack_678);
  }
  if (pcStack_6a0 != (code *)0x0) {
    (*pcStack_6a0)(&pcStack_6b8);
  }
  if (pcStack_6e0 != (code *)0x0) {
    (*pcStack_6e0)(&uStack_6f8);
  }
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f21f6a8;
  uVar11 = func_0x0d858500(&uStack_7f8);
  plVar14 = puVar15 + 3;
  *(undefined1 *)(puVar15 + 4) = 1;
  *(undefined4 *)((long)puVar15 + 0x24) = uVar11;
  *(undefined4 *)(puVar15 + 5) = 0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[8] = 0;
  puVar15[3] = &UNK_0f21f6f8;
  *(undefined4 *)(puVar15 + 9) = (undefined4)uStack_7f8;
  *(undefined4 *)((long)puVar15 + 0x4c) = uStack_7f8._4_4_;
  *(undefined4 *)(puVar15 + 10) = (undefined4)uStack_7f0;
  *(undefined4 *)((long)puVar15 + 0x54) = uStack_7f0._4_4_;
  puVar15[0xb] = puStack_7e8;
  uStack_7f8 = (undefined8 **)0x0;
  uStack_7f0 = (undefined8 *)0x0;
  puStack_7e8 = (undefined8 *)0x0;
  uVar11 = func_0x0d858620(plVar14);
  pcVar16 = pcStack_328;
  *(undefined4 *)(puVar15 + 5) = uVar11;
  plStack_330 = plVar14;
  if (pcStack_328 != (code *)0x0) {
    LOCK();
    plVar14 = (long *)((long)pcStack_328 + 8);
    lVar22 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      lVar22 = *(long *)pcStack_328;
      pcStack_328 = (code *)puVar15;
      (**(code **)(lVar22 + 0x10))(pcVar16);
      func_0x0412c2d0(pcVar16);
      lVar22 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      goto joined_r0x0a385acc;
    }
  }
  lVar22 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  pcStack_328 = (code *)puVar15;
joined_r0x0a385acc:
  if (lVar22 == 0) {
    func_0x048b0de0(&uStack_708,&puStack_798);
    uVar7 = uStack_6fc;
    uVar11 = uStack_700;
    uRam000000000f54fd94 = uStack_704;
    _DAT_0f54fd90 = uStack_708;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_700 = 0;
    uStack_6fc = 0;
    plVar14 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar11;
    uRam000000000f54fd9c = uVar7;
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar22 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    plVar14 = (long *)CONCAT44(uStack_6fc,uStack_700);
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar18 = plVar14 + 1;
      lVar22 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        func_0x0412c2d0(plVar14);
      }
    }
    lVar22 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if (DAT_0f665140 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f665140);
    if (iVar13 != 0) {
      func_0x0a467380();
      FUN_0410844d(&DAT_0f665140);
    }
  }
  if (DAT_0f665140 == '\0') {
    iVar13 = func_0x04108328(&DAT_0f665140);
    if (iVar13 != 0) {
      func_0x0a467380();
      FUN_0410844d(&DAT_0f665140);
    }
  }
  uStack_708 = 0xf665128;
  uStack_704 = 0;
  uStack_700 = _DAT_0f66512c;
  uStack_6f8 = 0;
  uStack_6f4 = 0;
  uStack_6f0 = (undefined *)CONCAT44(uStack_6f0._4_4_,0x80);
  uStack_6e8 = (long *)0x50;
  pcStack_6e0 = (code *)&UNK_0a467190;
  auStack_6d8._0_8_ = &UNK_0a467400;
  auStack_6d8._8_8_ = 0;
  puStack_6c8 = &UNK_0a4685a0;
  pcStack_6c0 = (code *)0x1;
  pcStack_6b8 = (code *)&SUB_048b5640;
  uStack_6b0 = (long *)&UNK_0a468630;
  uStack_6a8 = uStack_6a8 & 0xffffffff00000000;
  pcStack_6a0 = (code *)0x0;
  plStack_698 = (long *)0x0;
  alStack_690[0] = 0;
  func_0x048aee30(&uStack_7b8,lVar22,&uStack_708,0xaeca5b04);
  lVar22 = alStack_690[0];
  alStack_690[0] = 0;
  if (lVar22 != 0) {
    func_0x048ae940(lVar22);
    func_0x0412a280(lVar22,0x78);
  }
  plVar14 = plStack_698;
  if (plStack_698 != (long *)0x0) {
    LOCK();
    plVar18 = plStack_698 + 1;
    lVar22 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plStack_698 + 0x10))(plStack_698);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((DAT_0f665568 == '\0') && (iVar13 = func_0x04108328(&DAT_0f665568), iVar13 != 0)) {
    func_0x0a46cbc0();
    FUN_0410844d(&DAT_0f665568);
  }
  uStack_708 = _DAT_0f665554;
  uStack_700 = 1;
  uStack_6fc = 0;
  uStack_6f8 = 0xa46c630;
  uStack_6f4 = 0;
  uStack_6f0 = &UNK_0a46c6f0;
  func_0x065abe60(&uStack_7b8);
  uStack_808._0_4_ = (undefined4)uStack_7a8;
  uStack_808._4_4_ = uStack_7a8._4_4_;
  uStack_800 = uStack_7a0;
  uStack_7fc = uStack_79c;
  uStack_818 = (undefined8 **)uStack_7b8;
  uStack_810 = (long *)uStack_7b0;
  uStack_708 = 0xf55160ec;
  uStack_700 = 0;
  uStack_6fc = 0;
  uStack_6f8 = 0;
  uStack_6f0 = (undefined *)0x0;
  uStack_6e8 = (long *)&UNK_065b4120;
  pcStack_6e0 = (code *)&SUB_048b06d0;
  auStack_6d8._0_8_ = &UNK_0a46cee0;
  auStack_6d8._8_8_ = 0;
  puStack_6c8 = (undefined *)((ulong)puStack_6c8 & 0xffffffff00000000);
  pcStack_6c0 = (code *)0x0;
  pcStack_6b8 = (code *)0x0;
  func_0x049057f0(&uStack_818,&uStack_708);
  func_0x048aea50(&uStack_708);
  uStack_788 = (undefined8 *)CONCAT44(uStack_808._4_4_,(undefined4)uStack_808);
  uStack_780 = CONCAT44(uStack_7fc,uStack_800);
  puStack_798 = uStack_818;
  ppuStack_790 = (undefined8 **)uStack_810;
  uStack_708 = 0xf55160ec;
  uStack_700 = 0;
  uStack_6fc = 0;
  uStack_6f8 = 1;
  uStack_6f0 = (undefined *)0x0;
  uStack_6e8 = (long *)&UNK_065b4120;
  pcStack_6e0 = (code *)&SUB_048b06d0;
  auStack_6d8._0_8_ = &UNK_0a46d190;
  auStack_6d8._8_8_ = 0;
  puStack_6c8 = (undefined *)((ulong)puStack_6c8 & 0xffffffff00000000);
  pcStack_6c0 = (code *)0x0;
  pcStack_6b8 = (code *)0x0;
  func_0x049057f0(&puStack_798,&uStack_708);
  func_0x048aea50(&uStack_708);
  uStack_6f8 = SUB84(pcStack_228,0);
  uStack_6f4 = (undefined4)((ulong)pcStack_228 >> 0x20);
  uStack_700 = CONCAT13(uStack_22d,CONCAT21(uStack_22f,uStack_230));
  uStack_708 = uStack_238;
  uStack_704 = uStack_234;
  uStack_6fc = uStack_22c;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22f = 0;
  uStack_22d = 0;
  uStack_22c = 0;
  pcStack_228 = (code *)0x0;
  uStack_6f0 = puStack_220;
  uStack_6e8 = plStack_218;
  func_0x065281f0(&pcStack_6e0,auStack_210);
  puStack_798 = (undefined8 *)0x0;
  ppuStack_790 = (undefined8 **)0x0;
  uStack_788 = (undefined8 *)0x0;
  uStack_810 = (long *)((ulong)uStack_810 & 0xffffffffffffff00);
  uStack_818 = &puStack_798;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar15 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar2 = puVar15 + 0x28;
  puStack_798 = puVar15;
  uStack_788 = puVar2;
  if ((uStack_708 & 1) == 0) {
    puVar15[2] = CONCAT44(uStack_6f4,uStack_6f8);
    *puVar15 = CONCAT44(uStack_704,uStack_708);
    puVar15[1] = CONCAT44(uStack_6fc,uStack_700);
    ppuStack_790 = (undefined8 **)puVar15;
  }
  else {
    ppuStack_790 = (undefined8 **)puVar15;
    func_0x0412e5e0(puVar15,CONCAT44(uStack_6f4,uStack_6f8),CONCAT44(uStack_6fc,uStack_700));
  }
  *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_6f0;
  *(undefined4 *)((long)puVar15 + 0x1c) = uStack_6f0._4_4_;
  *(undefined4 *)(puVar15 + 4) = (undefined4)uStack_6e8;
  *(undefined4 *)((long)puVar15 + 0x24) = uStack_6e8._4_4_;
  func_0x06523ef0(puVar15 + 5,&pcStack_6e0);
  ppuStack_790 = (undefined8 **)puVar2;
  if (apcStack_5f0[0] != (code *)0x0) {
    (*apcStack_5f0[0])(auStack_608);
  }
  if (pcStack_638 != (code *)0x0) {
    (*pcStack_638)(auStack_650);
  }
  if (apcStack_678[0] != (code *)0x0) {
    (*apcStack_678[0])(alStack_690);
  }
  if (pcStack_6b8 != (code *)0x0) {
    (*pcStack_6b8)(auStack_6d8 + 8);
  }
  if ((uStack_708 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_6f4,uStack_6f8),
                    CONCAT44(uStack_704,uStack_708) & 0xfffffffffffffffe);
  }
  uVar12 = (**(code **)(*plStack_330 + 0x20))();
  uVar19 = ((long)ppuStack_790 - (long)puStack_798 >> 6) * -0x3333333333333333;
  uVar17 = 0;
  if ((uVar12 != 0) && ((uint)uVar19 != 0)) {
    uVar23 = 0;
    uVar17 = 0;
    uStack_7d4 = uVar12;
    do {
      auVar26 = (**(code **)(*plStack_330 + 0x28))(plStack_330,uVar23);
      lVar21 = auVar26._8_8_;
      lVar22 = auVar26._0_8_;
      auVar26 = func_0x06527d70();
      if (auVar26._8_8_ == lVar21) {
        if (auVar26._0_8_ == 0) {
          lVar20 = func_0x048aead0(auVar26._8_8_);
          iVar13 = *(int *)(lVar20 + 8);
          if (lVar22 != 0) goto LAB_0a3860d1;
LAB_0a3860ee:
          lVar20 = func_0x048aead0(lVar21);
          if (iVar13 != *(int *)(lVar20 + 8)) goto LAB_0a386100;
        }
        else {
          iVar13 = *(int *)(auVar26._0_8_ + 8);
          if (lVar22 == 0) goto LAB_0a3860ee;
LAB_0a3860d1:
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a386100;
        }
      }
      else {
LAB_0a386100:
        auVar26 = func_0x06527e30();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a3862fa;
        }
        auVar26 = func_0x06527ef0();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a3862fa;
        }
        auVar26 = func_0x06527fb0();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a3862fa;
        }
        auVar26 = func_0x06528070();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a3862fa;
        }
        auVar26 = func_0x06528130();
        if (auVar26._8_8_ == lVar21) {
          if (auVar26._0_8_ == 0) {
            lVar20 = func_0x048aead0(auVar26._8_8_);
            iVar13 = *(int *)(lVar20 + 8);
          }
          else {
            iVar13 = *(int *)(auVar26._0_8_ + 8);
          }
          if (lVar22 == 0) {
            lVar20 = func_0x048aead0(lVar21);
            iVar3 = *(int *)(lVar20 + 8);
          }
          else {
            iVar3 = *(int *)(lVar22 + 8);
          }
          if (iVar13 == iVar3) goto LAB_0a3862fa;
        }
        puVar15 = puStack_798;
        ppuVar4 = ppuStack_790;
        if (puStack_798[uVar17 * 0x28 + 4] != lVar21) goto joined_r0x0a386524;
        if (puStack_798[uVar17 * 0x28 + 3] == 0) {
          lVar20 = func_0x048aead0();
          iVar13 = *(int *)(lVar20 + 8);
          if (lVar22 != 0) goto LAB_0a3862c8;
LAB_0a3862e1:
          lVar22 = func_0x048aead0(lVar21);
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a386511;
        }
        else {
          iVar13 = *(int *)(puStack_798[uVar17 * 0x28 + 3] + 8);
          if (lVar22 == 0) goto LAB_0a3862e1;
LAB_0a3862c8:
          if (iVar13 != *(int *)(lVar22 + 8)) goto LAB_0a386511;
        }
        uVar17 = (ulong)((int)uVar17 + 1);
      }
LAB_0a3862fa:
    } while (((uint)uVar17 < (uint)uVar19) && (uVar23 = uVar23 + 1, uVar23 < uStack_7d4));
    uVar19 = ((long)ppuStack_790 - (long)puStack_798 >> 6) * -0x3333333333333333;
  }
  puVar15 = puStack_348;
  if (uVar19 == uVar17) {
    puVar2 = puStack_340;
    if (puStack_348 != (undefined8 *)0x0) {
      while (puVar15 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_340 = puVar15;
      func_0x0412a280(puStack_348,(long)puStack_338 - (long)puStack_348);
    }
    puStack_338 = uStack_788;
    if (puStack_3f0 < puStack_3e8) {
      *puStack_3f0 = 0;
      puStack_3f0[1] = 0;
      puStack_3f0[2] = 0;
      *puStack_3f0 = uStack_378;
      puStack_3f0[1] = uStack_370;
      puStack_3f0[2] = uStack_368;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_368 = 0;
      puStack_3f0[5] = uStack_350;
      puStack_3f0[3] = uStack_360;
      puStack_3f0[4] = uStack_358;
      uStack_360 = 0;
      uStack_358 = 0;
      uStack_350 = 0;
      puStack_3f0[6] = 0;
      puStack_3f0[7] = 0;
      puStack_3f0[8] = 0;
      puStack_3f0[6] = (ulong)puStack_798;
      puStack_3f0[7] = (ulong)ppuStack_790;
      puStack_3f0[8] = (ulong)uStack_788;
      puStack_348 = (undefined8 *)0x0;
      puStack_340 = (undefined8 *)0x0;
      puStack_338 = (undefined8 *)0x0;
      puStack_3f0[9] = (ulong)plStack_330;
      puStack_3f0[10] = (ulong)pcStack_328;
      plStack_330 = (long *)0x0;
      pcStack_328 = (code *)0x0;
      puStack_3f0[0xb] = 0;
      puStack_3f0[0xc] = 0;
      puStack_3f0[0xd] = 0;
      puStack_3f0[0xb] = uStack_320;
      puStack_3f0[0xc] = uStack_318;
      puStack_3f0[0xd] = uStack_310;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_310 = 0;
      puStack_3f0 = puStack_3f0 + 0xe;
    }
    else {
      puStack_348 = puStack_798;
      puStack_340 = ppuStack_790;
      puStack_3f0 = (ulong *)func_0x0652ac80(&lStack_3f8,&uStack_378);
    }
    puVar24 = puStack_3f0 + -0xe;
    lVar22 = (long)uStack_7f8;
    plVar14 = plStack_710;
  }
  else {
LAB_0a386511:
    puVar15 = puStack_798;
    ppuVar4 = ppuStack_790;
    if (puStack_798 != (undefined8 *)0x0) {
joined_r0x0a386524:
      while (puVar2 = puStack_798, (undefined8 **)puStack_798 != ppuVar4) {
        puStack_798 = puVar15;
        func_0x05fe8450(ppuVar4 + -0x28);
        puVar15 = puStack_798;
        ppuVar4 = ppuVar4 + -0x28;
        puStack_798 = puVar2;
      }
      ppuStack_790 = (undefined8 **)puStack_798;
      puStack_798 = puVar15;
      func_0x0412a280(puVar15,(long)uStack_788 - (long)puVar15);
    }
    puVar24 = (ulong *)0xf660300;
    lVar22 = (long)uStack_7f8;
    plVar14 = plStack_710;
  }
  uStack_7f8 = (undefined8 **)lVar22;
  plStack_710 = plVar14;
  if (lVar22 != 0) {
    if ((undefined8 *)lVar22 != uStack_7f0) {
      lVar21 = (long)uStack_7f0 + -0x40;
      do {
        if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
          (**(code **)(lVar21 + 0x18))(lVar21);
        }
        if (*(code **)(lVar21 + -0x30) != (code *)0x0) {
          (**(code **)(lVar21 + -0x30))(lVar21 + -0x48);
        }
        if (*(code **)(lVar21 + -0x70) != (code *)0x0) {
          (**(code **)(lVar21 + -0x70))(lVar21 + -0x88);
        }
        if (*(code **)(lVar21 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar21 + -0xb0))(lVar21 + -200);
        }
        lVar20 = lVar21 + -0xd8;
        lVar21 = lVar21 + -0x118;
      } while (lVar20 != lVar22);
    }
    uStack_7f0 = (undefined8 *)lVar22;
    func_0x0412a280(uStack_7f8,(long)puStack_7e8 - (long)uStack_7f8);
  }
  func_0x05f93280(&uStack_378);
  uStack_d8 = _DAT_0f642320;
  uStack_d4 = _DAT_0f642324;
  if ((_DAT_0f642328 & 1) == 0) {
    uStack_c0 = _DAT_0f642338;
    uStack_d0 = _DAT_0f642328;
    uStack_cc = uRam000000000f64232c;
    uStack_c8 = _DAT_0f642330;
    uStack_c4 = uRam000000000f642334;
  }
  else {
    func_0x0412e5e0(&uStack_d0,_DAT_0f642338,CONCAT44(uRam000000000f642334,_DAT_0f642330));
  }
  func_0x0730fa70(puVar24,&uStack_d8,0);
  if ((uStack_d0 & 1) != 0) {
    func_0x0412a280(uStack_c0,CONCAT44(uStack_cc,uStack_d0) & 0xfffffffffffffffe);
  }
  if (pcStack_120 != (code *)0x0) {
    (*pcStack_120)(auStack_138);
  }
  if (pcStack_168 != (code *)0x0) {
    (*pcStack_168)(auStack_180);
  }
  if (pcStack_1a8 != (code *)0x0) {
    (*pcStack_1a8)(auStack_1c0);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(apuStack_200);
  }
  if ((uStack_238 & 1) != 0) {
    func_0x0412a280(pcStack_228,CONCAT44(uStack_234,uStack_238) & 0xfffffffffffffffe);
  }
  if ((uStack_7d0 & 1) != 0) {
    func_0x0412a280(lStack_7c0,CONCAT44(uStack_7cc,uStack_7d0) & 0xfffffffffffffffe);
  }
  uStack_f8 = _DAT_0f642360;
  uStack_f4 = _DAT_0f642364;
  if ((_DAT_0f642368 & 1) == 0) {
    uStack_e0 = _DAT_0f642378;
    uStack_f0 = _DAT_0f642368;
    uStack_ec = uRam000000000f64236c;
    uStack_e8 = _DAT_0f642370;
    uStack_e4 = uRam000000000f642374;
  }
  else {
    func_0x0412e5e0(&uStack_f0,_DAT_0f642378,CONCAT44(uRam000000000f642374,_DAT_0f642370));
  }
  func_0x0730fa70(&lStack_488,&uStack_f8,0);
  if ((uStack_f0 & 1) != 0) {
    func_0x0412a280(uStack_e0,CONCAT44(uStack_ec,uStack_f0) & 0xfffffffffffffffe);
  }
  auStack_440 = func_0x094c4660();
  lVar21 = lStack_470;
  lVar22 = lStack_468;
  if (lStack_470 != 0) {
    for (; lVar21 != lVar22; lVar22 = lVar22 + -0x30) {
      if ((*(byte *)(lVar22 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar22 + -0x10),
                        *(ulong *)(lVar22 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_468 = lVar21;
    func_0x0412a280(lStack_470,lStack_460 - lStack_470);
  }
  lVar20 = lStack_478;
  lVar21 = lStack_480;
  lVar22 = lStack_488;
  lStack_488 = 0;
  lStack_480 = 0;
  lStack_478 = 0;
  *plVar14 = lVar22;
  plVar14[1] = lVar21;
  plVar14[2] = lVar20;
  lStack_470 = 0;
  lStack_468 = 0;
  lStack_460 = 0;
  plVar14[5] = lStack_448;
  plVar14[3] = uStack_458;
  plVar14[4] = uStack_450;
  uStack_458 = 0;
  uStack_450 = 0;
  lStack_448 = 0;
  *(undefined4 *)(plVar14 + 8) = uStack_430;
  *(undefined4 *)((long)plVar14 + 0x44) = uStack_42c;
  *(undefined4 *)(plVar14 + 9) = uStack_428;
  *(undefined4 *)((long)plVar14 + 0x4c) = uStack_424;
  *(undefined1 (*) [16])(plVar14 + 6) = auStack_440;
  plVar14[10] = lStack_420;
  plVar14[0xb] = lStack_418;
  plVar14[0xc] = lStack_410;
  lStack_420 = 0;
  lStack_418 = 0;
  lStack_410 = 0;
  plVar14[0xd] = lStack_408;
  plVar14[0xe] = lStack_400;
  lStack_408 = 0;
  lStack_400 = 0;
  plVar14[0xf] = lStack_3f8;
  plVar14[0x10] = (long)puStack_3f0;
  plVar14[0x11] = (long)puStack_3e8;
  lStack_3f8 = 0;
  puStack_3f0 = (ulong *)0x0;
  puStack_3e8 = (ulong *)0x0;
  plVar14[0x12] = lStack_3e0;
  plVar14[0x13] = uStack_3d8;
  plVar14[0x14] = uStack_3d0;
  lStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  plVar14[0x15] = lStack_3c8;
  plVar14[0x16] = lStack_3c0;
  plVar14[0x17] = lStack_3b8;
  lStack_3c8 = 0;
  lStack_3c0 = 0;
  lStack_3b8 = 0;
  plVar14[0x18] = lStack_3b0;
  plVar14[0x19] = lStack_3a8;
  plVar14[0x1a] = lStack_3a0;
  lStack_3b0 = 0;
  lStack_3a8 = 0;
  lStack_3a0 = 0;
  *(undefined4 *)(plVar14 + 0x1b) = (undefined4)uStack_398;
  *(undefined4 *)((long)plVar14 + 0xdc) = uStack_398._4_4_;
  *(undefined4 *)(plVar14 + 0x1c) = (undefined4)uStack_390;
  *(undefined4 *)((long)plVar14 + 0xe4) = uStack_390._4_4_;
  plVar14[0x1d] = lStack_388;
  uStack_398 = 0;
  uStack_390 = 0;
  lStack_388 = 0;
  func_0x0651ffe0(&lStack_470);
  lVar21 = lStack_488;
  lVar22 = lStack_480;
  if (lStack_488 != 0) {
    for (; lVar21 != lVar22; lVar22 = lVar22 + -0x30) {
      if ((*(byte *)(lVar22 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar22 + -0x10),
                        *(ulong *)(lVar22 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_480 = lVar21;
    func_0x0412a280(lStack_488,lStack_478 - lStack_488);
  }
  return plVar14;
}



/* ---- referenced strings ----
 * 0x1483d36  PrimitiveShapesManager
 */
