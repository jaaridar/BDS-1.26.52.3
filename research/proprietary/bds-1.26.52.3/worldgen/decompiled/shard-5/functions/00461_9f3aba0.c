/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa03aba0 (ELF vaddr 0x9f3aba0)
 * Label: caller-of-callee
 * Body:  [[0a03aba0, 0a03bdb5] [0a03bdc0, 0a03c25c] [0a03c260, 0a03c67e] [0a03c680, 0a03d888] [0a03d890, 0a03db04] [0a03db10, 0a03dd3c] [0a03dd40, 0a03deb0]]
 * Ghidra: FUN_0a03aba0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0a03aba0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong ***pppuVar3;
  ulong *puVar4;
  code *pcVar5;
  int iVar6;
  ulong ****ppppuVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ulong **ppuVar16;
  long *plVar17;
  ulong ***pppuVar18;
  long lVar19;
  code *pcVar20;
  ulong ****ppppuVar21;
  ulong *puVar22;
  long lVar23;
  ulong **ppuVar24;
  ulong *unaff_RBP;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_818;
  undefined8 uStack_810;
  ulong ****ppppuStack_808;
  ulong ****ppppuStack_7f8;
  ulong ***pppuStack_7f0;
  ulong ***pppuStack_7e8;
  uint uStack_7e0;
  undefined4 uStack_7dc;
  uint uStack_7d4;
  uint uStack_7d0;
  undefined1 uStack_7cc;
  undefined2 uStack_7cb;
  undefined1 uStack_7c9;
  undefined1 uStack_7c8;
  undefined8 uStack_7c0;
  byte bStack_7b8;
  undefined7 uStack_7b7;
  undefined1 uStack_7b0;
  undefined1 uStack_7af;
  undefined6 uStack_7ae;
  ulong *****pppppuStack_7a8;
  uint uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined8 uStack_790;
  ulong ***pppuStack_788;
  ulong ***pppuStack_780;
  ulong ***pppuStack_778;
  long *plStack_770;
  long *plStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  ulong ****ppppuStack_748;
  undefined1 uStack_740;
  ulong **ppuStack_738;
  ulong **ppuStack_730;
  ulong **ppuStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  code *pcStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  ulong uStack_6d0;
  undefined1 auStack_6c0 [24];
  code *pcStack_6a8;
  undefined1 auStack_680 [24];
  code *pcStack_668;
  undefined1 auStack_638 [24];
  code *pcStack_620;
  undefined1 auStack_5f8 [8];
  ulong **ppuStack_5f0;
  ulong **ppuStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  code *pcStack_5d0;
  undefined *puStack_5c8;
  long lStack_5c0;
  ulong uStack_5b8;
  code *pcStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  code *pcStack_590;
  undefined1 auStack_580 [24];
  code *apcStack_568 [3];
  code *pcStack_550;
  undefined1 auStack_540 [24];
  code *pcStack_528;
  undefined1 auStack_520 [24];
  code *pcStack_508;
  undefined1 auStack_4f8 [24];
  code *apcStack_4e0 [2];
  undefined1 auStack_4d0 [24];
  ulong **ppuStack_4b8;
  ulong **ppuStack_4b0;
  ulong **ppuStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [8];
  code *pcStack_478;
  code *pcStack_468;
  undefined1 auStack_450 [16];
  undefined1 auStack_440 [8];
  code *pcStack_438;
  code *pcStack_428;
  undefined1 auStack_408 [8];
  undefined1 auStack_400 [16];
  code *pcStack_3f0;
  code *pcStack_3e8;
  undefined1 auStack_3b8 [24];
  code *pcStack_3a0;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong **ppuStack_338;
  undefined1 auStack_330 [16];
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  long lStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  ulong *puStack_2e0;
  ulong *puStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong ****ppppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong *puStack_228;
  long *plStack_220;
  code *pcStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined1 auStack_1f0 [24];
  code *pcStack_1d8;
  undefined1 auStack_1b0 [24];
  code *pcStack_198;
  undefined1 auStack_168 [24];
  code *pcStack_150;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined2 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  long *plStack_40;
  ulong ****ppppuStack_38;
  
  uVar15 = func_0x0eee2e90(param_2);
  if (uVar15 < 0xfffffffffffffff8) {
    if (uVar15 < 0x17) {
      auStack_5f8[0] = (char)uVar15 * '\x02';
      ppuVar16 = (ulong **)(auStack_5f8 + 1);
      if (uVar15 != 0) goto LAB_0a03ac41;
    }
    else {
      uVar26 = 0x1a;
      if ((uVar15 | 7) != 0x17) {
        uVar26 = (uVar15 | 7) + 1;
      }
      ppuVar16 = (ulong **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar26);
      if (ppuVar16 == (ulong **)0x0) {
        func_0x0eec74c0(uVar26,0);
      }
      auStack_5f8 = (undefined1  [8])(uVar26 | 1);
      ppuStack_5f0 = (ulong **)uVar15;
      ppuStack_5e8 = ppuVar16;
LAB_0a03ac41:
      func_0x0eee2f00(ppuVar16,param_2,uVar15);
    }
    *(undefined1 *)((long)ppuVar16 + uVar15) = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    lStack_358 = 0;
    lStack_350 = 0;
    lStack_368 = 0;
    lStack_360 = 0;
    lStack_378 = 0;
    lStack_370 = 0;
    ppuStack_338 = (ulong **)0x0;
    func_0x048b1dc0(auStack_330);
    func_0x048b1dc0(&uStack_320);
    uStack_280 = 0;
    lStack_278 = 0;
    lStack_290 = 0;
    uStack_288 = 0;
    lStack_2a0 = 0;
    lStack_298 = 0;
    lStack_2b0 = 0;
    lStack_2a8 = 0;
    lStack_2c0 = 0;
    lStack_2b8 = 0;
    lStack_2d0 = 0;
    lStack_2c8 = 0;
    puStack_2e0 = (ulong *)0x0;
    puStack_2d8 = (ulong *)0x0;
    lStack_2f0 = 0;
    lStack_2e8 = 0;
    puStack_300 = (undefined8 *)0x0;
    lStack_2f8 = 0;
    lStack_310 = 0;
    puStack_308 = (undefined8 *)0x0;
    if ((uStack_348 & 1) == 0) {
      if (((ulong)auStack_5f8 & 1) == 0) {
        ppuStack_338 = ppuStack_5e8;
        uStack_348 = (ulong)auStack_5f8;
        uStack_340 = (ulong)ppuStack_5f0;
      }
      else {
        func_0x04885070(&uStack_348,ppuStack_5e8,ppuStack_5f0);
      }
    }
    else {
      ppuVar24 = (ulong **)((ulong)auStack_5f8 >> 1 & 0x7f);
      ppuVar16 = (ulong **)(auStack_5f8 + 1);
      if (((ulong)auStack_5f8 & 1) != 0) {
        ppuVar24 = ppuStack_5f0;
        ppuVar16 = ppuStack_5e8;
      }
      func_0x04885120(&uStack_348,ppuVar16,ppuVar24);
    }
    if (((ulong)auStack_5f8 & 1) != 0) {
      func_0x0412a280(ppuStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
    }
    func_0x0a0e7fa0(&ppuStack_738);
    uStack_7d0 = 0x74706f0e;
    uStack_7cc = 0x69;
    uStack_7cb = 0x6e6f;
    uStack_7c9 = 0x73;
    uStack_7c8 = 0;
    plStack_40 = param_1;
    func_0x0a0dd130(&uStack_268,&uStack_7d0);
    func_0x06523ef0(auStack_5f8,&uStack_710);
    func_0x06523ef0(apcStack_4e0,&uStack_240);
    uStack_818 = (ulong ****)0x0;
    uStack_810 = (ulong ****)0x0;
    ppppuStack_808 = (ulong ****)0x0;
    pppuStack_7f0 = (ulong ***)((ulong)pppuStack_7f0 & 0xffffffffffffff00);
    ppppuStack_7f8 = (ulong ****)&uStack_818;
    ppppuStack_748 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
    if (ppppuStack_748 == (ulong ****)0x0) {
      func_0x0eec74c0(0x230,0);
    }
    ppppuStack_808 = ppppuStack_748 + 0x46;
    bStack_7b8 = (byte)&uStack_818;
    uStack_7b7 = (undefined7)((ulong)&uStack_818 >> 8);
    uStack_7b0 = (byte)&ppppuStack_38;
    uStack_7af = (undefined1)((ulong)&ppppuStack_38 >> 8);
    uStack_7ae = (undefined6)((ulong)&ppppuStack_38 >> 0x10);
    pppppuStack_7a8 = &ppppuStack_748;
    uStack_7a0 = uStack_7a0 & 0xffffff00;
    uStack_818 = ppppuStack_748;
    uStack_810 = ppppuStack_748;
    ppppuStack_38 = ppppuStack_748;
    func_0x06523ef0(ppppuStack_748,auStack_5f8);
    ppppuStack_748 = ppppuStack_748 + 0x23;
    func_0x06523ef0(ppppuStack_748,apcStack_4e0);
    uStack_810 = ppppuStack_748 + 0x23;
    if (pcStack_3f0 != (code *)0x0) {
      (*pcStack_3f0)(auStack_408);
    }
    if (pcStack_438 != (code *)0x0) {
      (*pcStack_438)(auStack_450);
    }
    if (pcStack_478 != (code *)0x0) {
      (*pcStack_478)(auStack_490);
    }
    if (ppuStack_4b8 != (ulong **)0x0) {
      (*(code *)ppuStack_4b8)(auStack_4d0);
    }
    if (pcStack_508 != (code *)0x0) {
      (*pcStack_508)(auStack_520);
    }
    if (pcStack_550 != (code *)0x0) {
      (*pcStack_550)(apcStack_568);
    }
    if (pcStack_590 != (code *)0x0) {
      (*pcStack_590)(&pcStack_5a8);
    }
    if (pcStack_5d0 != (code *)0x0) {
      (*pcStack_5d0)(&ppuStack_5e8);
    }
    pppppuStack_7a8 = (ulong *****)0x0;
    uStack_794 = 0;
    uStack_790 = 0;
    uStack_758 = 0;
    uStack_750 = 0;
    plStack_768 = (long *)0x0;
    uStack_760 = 0;
    pppuStack_778 = (ulong ***)0x0;
    plStack_770 = (long *)0x0;
    pppuStack_788 = (ulong ***)0x0;
    pppuStack_780 = (ulong ***)0x0;
    bStack_7b8 = 0;
    uStack_7b7 = 0;
    uStack_7b0 = 0;
    uStack_7af = 0;
    uStack_7ae = 0;
    uStack_7a0 = 0x6e6f6316;
    uStack_79c = 0x75727473;
    uStack_798 = 0x726f7463;
    plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (plVar17 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    plVar17[1] = 0;
    plVar17[2] = 0;
    *plVar17 = (long)&UNK_0f203fa8;
    uVar12 = func_0x0d858500(&uStack_818);
    plVar1 = plVar17 + 3;
    *(undefined1 *)(plVar17 + 4) = 2;
    *(undefined4 *)((long)plVar17 + 0x24) = uVar12;
    *(undefined4 *)(plVar17 + 5) = 0;
    plVar17[6] = 0;
    plVar17[7] = 0;
    plVar17[8] = 0;
    plVar17[3] = (long)&UNK_0f203ff8;
    *(undefined4 *)(plVar17 + 10) = (undefined4)uStack_818;
    *(undefined4 *)((long)plVar17 + 0x54) = uStack_818._4_4_;
    *(undefined4 *)(plVar17 + 0xb) = (undefined4)uStack_810;
    *(undefined4 *)((long)plVar17 + 0x5c) = uStack_810._4_4_;
    plVar17[0xc] = (long)ppppuStack_808;
    uStack_818 = (ulong ****)0x0;
    uStack_810 = (ulong ****)0x0;
    ppppuStack_808 = (ulong ****)0x0;
    uVar12 = func_0x0d858620(plVar1);
    plVar8 = plStack_768;
    *(undefined4 *)(plVar17 + 5) = uVar12;
    plStack_770 = plVar1;
    if (plStack_768 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_768 + 1;
      lVar23 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        lVar23 = *plStack_768;
        plStack_768 = plVar17;
        (**(code **)(lVar23 + 0x10))(plVar8);
        func_0x0412c2d0(plVar8);
        plVar17 = plStack_768;
      }
    }
    plStack_768 = plVar17;
    func_0x0a0e24a0();
    ppuStack_5e8 = ppuStack_728;
    auStack_5f8 = (undefined1  [8])ppuStack_738;
    ppuStack_5f0 = ppuStack_730;
    ppuStack_738 = (ulong **)0x0;
    ppuStack_730 = (ulong **)0x0;
    ppuStack_728 = (ulong **)0x0;
    uStack_5e0 = (undefined *)uStack_720;
    uStack_5d8 = (undefined *)uStack_718;
    func_0x065281f0(&pcStack_5d0,&uStack_710);
    ppuStack_4a8 = (ulong **)ppppuStack_258;
    ppuStack_4b8 = uStack_268;
    ppuStack_4b0 = (ulong **)uStack_260;
    uStack_268 = (ulong **)0x0;
    uStack_260 = (ulong *****)0x0;
    ppppuStack_258 = (ulong ****)0x0;
    uStack_4a0 = (undefined4)uStack_250;
    uStack_49c = uStack_250._4_4_;
    uStack_498 = (undefined4)uStack_248;
    uStack_494 = uStack_248._4_4_;
    func_0x065281f0(auStack_490,&uStack_240);
    ppppuStack_7f8 = (ulong ****)0x0;
    pppuStack_7f0 = (ulong ***)0x0;
    pppuStack_7e8 = (ulong ***)0x0;
    ppppuStack_748 = (ulong ****)&ppppuStack_7f8;
    uStack_740 = 0;
    pppuVar18 = (ulong ***)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
    if (pppuVar18 == (ulong ***)0x0) {
      func_0x0eec74c0(0x280,0);
    }
    pppuVar3 = pppuVar18 + 0x50;
    ppppuStack_7f8 = (ulong ****)pppuVar18;
    pppuStack_7f0 = pppuVar18;
    pppuStack_7e8 = pppuVar3;
    if (((ulong)auStack_5f8 & 1) == 0) {
      pppuVar18[2] = ppuStack_5e8;
      *pppuVar18 = (ulong **)auStack_5f8;
      pppuVar18[1] = ppuStack_5f0;
    }
    else {
      func_0x0412e5e0(pppuVar18,ppuStack_5e8,ppuStack_5f0);
    }
    *(undefined4 *)(pppuVar18 + 3) = (undefined4)uStack_5e0;
    *(undefined4 *)((long)pppuVar18 + 0x1c) = uStack_5e0._4_4_;
    *(undefined4 *)(pppuVar18 + 4) = (undefined4)uStack_5d8;
    *(undefined4 *)((long)pppuVar18 + 0x24) = uStack_5d8._4_4_;
    func_0x06523ef0(pppuVar18 + 5,&pcStack_5d0);
    if (((ulong)ppuStack_4b8 & 1) == 0) {
      pppuVar18[0x2a] = ppuStack_4a8;
      pppuVar18[0x28] = ppuStack_4b8;
      pppuVar18[0x29] = ppuStack_4b0;
    }
    else {
      func_0x0412e5e0(pppuVar18 + 0x28,ppuStack_4a8,ppuStack_4b0);
    }
    *(undefined4 *)(pppuVar18 + 0x2b) = uStack_4a0;
    *(undefined4 *)((long)pppuVar18 + 0x15c) = uStack_49c;
    *(undefined4 *)(pppuVar18 + 0x2c) = uStack_498;
    *(undefined4 *)((long)pppuVar18 + 0x164) = uStack_494;
    func_0x06523ef0(pppuVar18 + 0x2d,auStack_490);
    pppuStack_7f0 = pppuVar3;
    if (pcStack_3a0 != (code *)0x0) {
      (*pcStack_3a0)(auStack_3b8);
    }
    if (pcStack_3e8 != (code *)0x0) {
      (*pcStack_3e8)(auStack_400);
    }
    if (pcStack_428 != (code *)0x0) {
      (*pcStack_428)(auStack_440);
    }
    if (pcStack_468 != (code *)0x0) {
      (*pcStack_468)(auStack_480);
    }
    if (((ulong)ppuStack_4b8 & 1) != 0) {
      func_0x0412a280(ppuStack_4a8,(ulong)ppuStack_4b8 & 0xfffffffffffffffe);
    }
    if (apcStack_4e0[0] != (code *)0x0) {
      (*apcStack_4e0[0])(auStack_4f8);
    }
    if (pcStack_528 != (code *)0x0) {
      (*pcStack_528)(auStack_540);
    }
    if (apcStack_568[0] != (code *)0x0) {
      (*apcStack_568[0])(auStack_580);
    }
    if (pcStack_5a8 != (code *)0x0) {
      (*pcStack_5a8)(&lStack_5c0);
    }
    if (((ulong)auStack_5f8 & 1) != 0) {
      func_0x0412a280(ppuStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
    }
    uVar13 = (**(code **)(*plStack_770 + 0x20))();
    uVar26 = ((long)pppuStack_7f0 - (long)ppppuStack_7f8 >> 6) * -0x3333333333333333;
    uVar15 = 0;
    if ((uVar13 != 0) && ((uint)uVar26 != 0)) {
      uVar25 = 0;
      uVar15 = 0;
      uStack_7d4 = uVar13;
      do {
        auVar31 = (**(code **)(*plStack_770 + 0x28))(plStack_770,uVar25);
        ppuVar16 = auVar31._8_8_;
        lVar23 = auVar31._0_8_;
        auVar31 = func_0x06527d70();
        if (auVar31._8_8_ == ppuVar16) {
          if (auVar31._0_8_ == 0) {
            lVar19 = func_0x048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar19 + 8);
            if (lVar23 == 0) goto LAB_0a03b44e;
LAB_0a03b431:
            if (iVar14 != *(int *)(lVar23 + 8)) goto LAB_0a03b460;
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
            if (lVar23 != 0) goto LAB_0a03b431;
LAB_0a03b44e:
            lVar19 = func_0x048aead0(ppuVar16);
            if (iVar14 != *(int *)(lVar19 + 8)) goto LAB_0a03b460;
          }
        }
        else {
LAB_0a03b460:
          auVar31 = func_0x06527e30();
          if (auVar31._8_8_ == ppuVar16) {
            if (auVar31._0_8_ == 0) {
              lVar19 = func_0x048aead0(auVar31._8_8_);
              iVar14 = *(int *)(lVar19 + 8);
            }
            else {
              iVar14 = *(int *)(auVar31._0_8_ + 8);
            }
            if (lVar23 == 0) {
              lVar19 = func_0x048aead0(ppuVar16);
              iVar6 = *(int *)(lVar19 + 8);
            }
            else {
              iVar6 = *(int *)(lVar23 + 8);
            }
            if (iVar14 == iVar6) goto LAB_0a03b653;
          }
          auVar31 = func_0x06527ef0();
          if (auVar31._8_8_ == ppuVar16) {
            if (auVar31._0_8_ == 0) {
              lVar19 = func_0x048aead0(auVar31._8_8_);
              iVar14 = *(int *)(lVar19 + 8);
            }
            else {
              iVar14 = *(int *)(auVar31._0_8_ + 8);
            }
            if (lVar23 == 0) {
              lVar19 = func_0x048aead0(ppuVar16);
              iVar6 = *(int *)(lVar19 + 8);
            }
            else {
              iVar6 = *(int *)(lVar23 + 8);
            }
            if (iVar14 == iVar6) goto LAB_0a03b653;
          }
          auVar31 = func_0x06527fb0();
          if (auVar31._8_8_ == ppuVar16) {
            if (auVar31._0_8_ == 0) {
              lVar19 = func_0x048aead0(auVar31._8_8_);
              iVar14 = *(int *)(lVar19 + 8);
            }
            else {
              iVar14 = *(int *)(auVar31._0_8_ + 8);
            }
            if (lVar23 == 0) {
              lVar19 = func_0x048aead0(ppuVar16);
              iVar6 = *(int *)(lVar19 + 8);
            }
            else {
              iVar6 = *(int *)(lVar23 + 8);
            }
            if (iVar14 == iVar6) goto LAB_0a03b653;
          }
          auVar31 = func_0x06528070();
          if (auVar31._8_8_ == ppuVar16) {
            if (auVar31._0_8_ == 0) {
              lVar19 = func_0x048aead0(auVar31._8_8_);
              iVar14 = *(int *)(lVar19 + 8);
            }
            else {
              iVar14 = *(int *)(auVar31._0_8_ + 8);
            }
            if (lVar23 == 0) {
              lVar19 = func_0x048aead0(ppuVar16);
              iVar6 = *(int *)(lVar19 + 8);
            }
            else {
              iVar6 = *(int *)(lVar23 + 8);
            }
            if (iVar14 == iVar6) goto LAB_0a03b653;
          }
          auVar31 = func_0x06528130();
          if (auVar31._8_8_ == ppuVar16) {
            if (auVar31._0_8_ == 0) {
              lVar19 = func_0x048aead0(auVar31._8_8_);
              iVar14 = *(int *)(lVar19 + 8);
            }
            else {
              iVar14 = *(int *)(auVar31._0_8_ + 8);
            }
            if (lVar23 == 0) {
              lVar19 = func_0x048aead0(ppuVar16);
              iVar6 = *(int *)(lVar19 + 8);
            }
            else {
              iVar6 = *(int *)(lVar23 + 8);
            }
            if (iVar14 == iVar6) goto LAB_0a03b653;
          }
          ppppuVar21 = ppppuStack_7f8;
          pppuVar18 = pppuStack_7f0;
          if (ppppuStack_7f8[uVar15 * 0x28 + 4] != (ulong ***)ppuVar16) goto joined_r0x0a03b83d;
          if (ppppuStack_7f8[uVar15 * 0x28 + 3] == (ulong ***)0x0) {
            lVar19 = func_0x048aead0();
            iVar14 = *(int *)(lVar19 + 8);
            if (lVar23 == 0) goto LAB_0a03b63c;
LAB_0a03b624:
            if (iVar14 != *(int *)(lVar23 + 8)) goto LAB_0a03b82d;
          }
          else {
            iVar14 = *(int *)(ppppuStack_7f8[uVar15 * 0x28 + 3] + 1);
            if (lVar23 != 0) goto LAB_0a03b624;
LAB_0a03b63c:
            lVar23 = func_0x048aead0(ppuVar16);
            if (iVar14 != *(int *)(lVar23 + 8)) goto LAB_0a03b82d;
          }
          uVar15 = (ulong)((int)uVar15 + 1);
        }
LAB_0a03b653:
      } while (((uint)uVar15 < (uint)uVar26) && (uVar25 = uVar25 + 1, uVar25 < uStack_7d4));
      uVar26 = ((long)pppuStack_7f0 - (long)ppppuStack_7f8 >> 6) * -0x3333333333333333;
    }
    pppuVar18 = pppuStack_788;
    if (uVar26 == uVar15) {
      pppuVar3 = pppuStack_780;
      if (pppuStack_788 != (ulong ***)0x0) {
        while (pppuVar18 != pppuVar3) {
          func_0x05fe8450(pppuVar3 + -0x28);
          pppuVar3 = pppuVar3 + -0x28;
        }
        pppuStack_780 = pppuVar18;
        func_0x0412a280(pppuStack_788,(long)pppuStack_778 - (long)pppuStack_788);
      }
      pppuStack_778 = pppuStack_7e8;
      if (puStack_308 < puStack_300) {
        *puStack_308 = 0;
        puStack_308[1] = 0;
        puStack_308[2] = 0;
        *puStack_308 = CONCAT71(uStack_7b7,bStack_7b8);
        puStack_308[1] = CONCAT62(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0));
        puStack_308[2] = pppppuStack_7a8;
        bStack_7b8 = 0;
        uStack_7b7 = 0;
        uStack_7b0 = 0;
        uStack_7af = 0;
        uStack_7ae = 0;
        pppppuStack_7a8 = (ulong *****)0x0;
        puStack_308[5] = uStack_790;
        puStack_308[3] = CONCAT44(uStack_79c,uStack_7a0);
        puStack_308[4] = CONCAT44(uStack_794,uStack_798);
        uStack_7a0 = 0;
        uStack_79c = 0;
        uStack_798 = 0;
        uStack_794 = 0;
        uStack_790 = 0;
        puStack_308[6] = 0;
        puStack_308[7] = 0;
        puStack_308[8] = 0;
        puStack_308[6] = ppppuStack_7f8;
        puStack_308[7] = pppuStack_7f0;
        puStack_308[8] = pppuStack_7e8;
        pppuStack_788 = (ulong ***)0x0;
        pppuStack_780 = (ulong ***)0x0;
        pppuStack_778 = (ulong ***)0x0;
        puStack_308[9] = plStack_770;
        puStack_308[10] = plStack_768;
        plStack_770 = (long *)0x0;
        plStack_768 = (undefined8 *)0x0;
        puStack_308[0xb] = 0;
        puStack_308[0xc] = 0;
        puStack_308[0xd] = 0;
        *(undefined4 *)(puStack_308 + 0xb) = (undefined4)uStack_760;
        *(undefined4 *)((long)puStack_308 + 0x5c) = uStack_760._4_4_;
        *(undefined4 *)(puStack_308 + 0xc) = (undefined4)uStack_758;
        *(undefined4 *)((long)puStack_308 + 100) = uStack_758._4_4_;
        puStack_308[0xd] = uStack_750;
        uStack_760 = 0;
        uStack_758 = 0;
        uStack_750 = 0;
        puStack_308 = puStack_308 + 0xe;
      }
      else {
        pppuStack_788 = (ulong ***)ppppuStack_7f8;
        pppuStack_780 = pppuStack_7f0;
        puStack_308 = (undefined8 *)func_0x0652ac80(&lStack_310,&bStack_7b8);
      }
      puVar28 = puStack_308 + -0xe;
    }
    else {
LAB_0a03b82d:
      ppppuVar21 = ppppuStack_7f8;
      pppuVar18 = pppuStack_7f0;
      if (ppppuStack_7f8 != (ulong ****)0x0) {
joined_r0x0a03b83d:
        while (ppppuVar7 = ppppuStack_7f8, ppppuStack_7f8 != (ulong ****)pppuVar18) {
          ppppuStack_7f8 = ppppuVar21;
          func_0x05fe8450(pppuVar18 + -0x28);
          ppppuVar21 = ppppuStack_7f8;
          pppuVar18 = pppuVar18 + -0x28;
          ppppuStack_7f8 = ppppuVar7;
        }
        pppuStack_7f0 = (ulong ***)ppppuStack_7f8;
        ppppuStack_7f8 = ppppuVar21;
        func_0x0412a280(ppppuVar21,(long)pppuStack_7e8 - (long)ppppuVar21);
      }
      puVar28 = (undefined8 *)0xf64e550;
    }
    func_0x05f93280(&bStack_7b8);
    lVar23 = (long)uStack_818;
    if (uStack_818 != (ulong ****)0x0) {
      if (uStack_818 != uStack_810) {
        lVar19 = (long)uStack_810 + -0x40;
        do {
          if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
            (**(code **)(lVar19 + 0x18))(lVar19);
          }
          if (*(code **)(lVar19 + -0x30) != (code *)0x0) {
            (**(code **)(lVar19 + -0x30))(lVar19 + -0x48);
          }
          if (*(code **)(lVar19 + -0x70) != (code *)0x0) {
            (**(code **)(lVar19 + -0x70))(lVar19 + -0x88);
          }
          if (*(code **)(lVar19 + -0xb0) != (code *)0x0) {
            (**(code **)(lVar19 + -0xb0))(lVar19 + -200);
          }
          lVar30 = lVar19 + -0xd8;
          lVar19 = lVar19 + -0x118;
        } while (lVar30 != lVar23);
      }
      uStack_810 = (ulong ****)lVar23;
      func_0x0412a280(uStack_818,(long)ppppuStack_808 - (long)uStack_818);
    }
    uStack_60 = _DAT_0f642108;
    uStack_5c = _DAT_0f64210c;
    if ((_DAT_0f642110 & 1) == 0) {
      uStack_48 = _DAT_0f642120;
      uStack_58 = _DAT_0f642110;
      uStack_54 = uRam000000000f642114;
      uStack_50 = _DAT_0f642118;
      uStack_4c = uRam000000000f64211c;
    }
    else {
      func_0x0412e5e0(&uStack_58,_DAT_0f642120,CONCAT44(uRam000000000f64211c,_DAT_0f642118));
    }
    func_0x0730fa70(puVar28,&uStack_60,0);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,CONCAT44(uStack_54,uStack_58) & 0xfffffffffffffffe);
    }
    if (pcStack_150 != (code *)0x0) {
      (*pcStack_150)(auStack_168);
    }
    if (pcStack_198 != (code *)0x0) {
      (*pcStack_198)(auStack_1b0);
    }
    if (pcStack_1d8 != (code *)0x0) {
      (*pcStack_1d8)(auStack_1f0);
    }
    if (pcStack_218 != (code *)0x0) {
      (*pcStack_218)(&uStack_230);
    }
    if (((ulong)uStack_268 & 1) != 0) {
      func_0x0412a280(ppppuStack_258,(ulong)uStack_268 & 0xfffffffffffffffe);
    }
    if ((uStack_7d0 & 1) != 0) {
      func_0x0412a280(uStack_7c0,
                      CONCAT17(uStack_7c9,CONCAT25(uStack_7cb,CONCAT14(uStack_7cc,uStack_7d0))) &
                      0xfffffffffffffffe);
    }
    if (pcStack_620 != (code *)0x0) {
      (*pcStack_620)(auStack_638);
    }
    if (pcStack_668 != (code *)0x0) {
      (*pcStack_668)(auStack_680);
    }
    if (pcStack_6a8 != (code *)0x0) {
      (*pcStack_6a8)(auStack_6c0);
    }
    if (pcStack_6e8 != (code *)0x0) {
      (*pcStack_6e8)(&uStack_700);
    }
    if (((ulong)ppuStack_738 & 1) != 0) {
      func_0x0412a280(ppuStack_728,(ulong)ppuStack_738 & 0xfffffffffffffffe);
    }
    func_0x0a0e7fa0(auStack_5f8);
    func_0x066c9900(&uStack_268,auStack_5f8);
    ppuStack_728 = (ulong **)0x0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    pcStack_6e8 = (code *)0x0;
    uStack_6e0 = 0;
    uStack_6f8 = 0;
    pcStack_6f0 = (code *)0x0;
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    ppuStack_738 = (ulong **)0x0;
    ppuStack_730 = (ulong **)0x0;
    uStack_720 = 0x617461447465730e;
    pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (pcVar20 == (code *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    *(undefined8 *)((long)pcVar20 + 8) = 0;
    *(undefined8 *)((long)pcVar20 + 0x10) = 0;
    *(undefined **)pcVar20 = &UNK_0f204288;
    uVar12 = func_0x0d858500(&uStack_268);
    puVar28 = (undefined8 *)((long)pcVar20 + 0x18);
    *(undefined1 *)((long)pcVar20 + 0x20) = 2;
    *(undefined4 *)((long)pcVar20 + 0x24) = uVar12;
    *(undefined4 *)((long)pcVar20 + 0x28) = 0;
    *(undefined8 *)((long)pcVar20 + 0x30) = 0;
    *(undefined8 *)((long)pcVar20 + 0x38) = 0;
    *(undefined8 *)((long)pcVar20 + 0x40) = 0;
    *(undefined **)((long)pcVar20 + 0x18) = &UNK_0f2042d8;
    *(undefined4 *)((long)pcVar20 + 0x50) = (undefined4)uStack_268;
    *(undefined4 *)((long)pcVar20 + 0x54) = uStack_268._4_4_;
    *(undefined4 *)((long)pcVar20 + 0x58) = (undefined4)uStack_260;
    *(undefined4 *)((long)pcVar20 + 0x5c) = uStack_260._4_4_;
    *(ulong *****)((long)pcVar20 + 0x60) = ppppuStack_258;
    uStack_268 = (ulong **)0x0;
    uStack_260 = (ulong *****)0x0;
    ppppuStack_258 = (ulong ****)0x0;
    uVar12 = func_0x0d858620(puVar28);
    pcVar2 = pcStack_6e8;
    *(undefined4 *)((long)pcVar20 + 0x28) = uVar12;
    pcStack_6f0 = (code *)puVar28;
    if (pcStack_6e8 != (code *)0x0) {
      LOCK();
      plVar17 = (long *)((long)pcStack_6e8 + 8);
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        lVar23 = *(long *)pcStack_6e8;
        pcStack_6e8 = pcVar20;
        (**(code **)(lVar23 + 0x10))(pcVar2);
        func_0x0412c2d0(pcVar2);
        pcVar20 = pcStack_6e8;
      }
    }
    pcStack_6e8 = pcVar20;
    cVar11 = func_0x066c9a80(&ppuStack_738,auStack_5f8);
    if (cVar11 == '\0') {
      puVar22 = (ulong *)0xf64e550;
    }
    else {
      if (puStack_2e0 < puStack_2d8) {
        *puStack_2e0 = 0;
        puStack_2e0[1] = 0;
        puStack_2e0[2] = 0;
        *puStack_2e0 = (ulong)ppuStack_738;
        puStack_2e0[1] = (ulong)ppuStack_730;
        puStack_2e0[2] = (ulong)ppuStack_728;
        ppuStack_738 = (ulong **)0x0;
        ppuStack_730 = (ulong **)0x0;
        ppuStack_728 = (ulong **)0x0;
        puStack_2e0[5] = uStack_710;
        puStack_2e0[3] = uStack_720;
        puStack_2e0[4] = uStack_718;
        uStack_720 = 0;
        uStack_718 = 0;
        uStack_710 = 0;
        puStack_2e0[6] = 0;
        puStack_2e0[7] = 0;
        puStack_2e0[8] = 0;
        puStack_2e0[6] = uStack_708;
        puStack_2e0[7] = uStack_700;
        puStack_2e0[8] = uStack_6f8;
        uStack_708 = 0;
        uStack_700 = 0;
        uStack_6f8 = 0;
        puStack_2e0[9] = (ulong)pcStack_6f0;
        puStack_2e0[10] = (ulong)pcStack_6e8;
        pcStack_6f0 = (code *)0x0;
        pcStack_6e8 = (code *)0x0;
        puStack_2e0[0xb] = 0;
        puStack_2e0[0xc] = 0;
        puStack_2e0[0xd] = 0;
        *(undefined4 *)(puStack_2e0 + 0xb) = (undefined4)uStack_6e0;
        *(undefined4 *)((long)puStack_2e0 + 0x5c) = uStack_6e0._4_4_;
        *(undefined4 *)(puStack_2e0 + 0xc) = (undefined4)uStack_6d8;
        *(undefined4 *)((long)puStack_2e0 + 100) = uStack_6d8._4_4_;
        puStack_2e0[0xd] = uStack_6d0;
        uStack_6e0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        puStack_2e0 = puStack_2e0 + 0xe;
      }
      else {
        puStack_2e0 = (ulong *)func_0x0652ac80(&lStack_2e8,&ppuStack_738);
      }
      puVar22 = puStack_2e0 + -0xe;
    }
    func_0x05f93280(&ppuStack_738);
    lVar23 = (long)uStack_268;
    if (uStack_268 != (ulong **)0x0) {
      if ((ulong *****)uStack_268 != uStack_260) {
        lVar19 = (long)uStack_260 + -0x40;
        do {
          if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
            (**(code **)(lVar19 + 0x18))(lVar19);
          }
          if (*(code **)(lVar19 + -0x30) != (code *)0x0) {
            (**(code **)(lVar19 + -0x30))(lVar19 + -0x48);
          }
          if (*(code **)(lVar19 + -0x70) != (code *)0x0) {
            (**(code **)(lVar19 + -0x70))(lVar19 + -0x88);
          }
          if (*(code **)(lVar19 + -0xb0) != (code *)0x0) {
            (**(code **)(lVar19 + -0xb0))(lVar19 + -200);
          }
          lVar30 = lVar19 + -0xd8;
          lVar19 = lVar19 + -0x118;
        } while (lVar30 != lVar23);
      }
      uStack_260 = (ulong *****)lVar23;
      func_0x0412a280(uStack_268,(long)ppppuStack_258 - (long)uStack_268);
    }
    uStack_80 = _DAT_0f642108;
    uStack_7c = _DAT_0f64210c;
    if ((_DAT_0f642110 & 1) == 0) {
      uStack_68 = _DAT_0f642120;
      uStack_78 = _DAT_0f642110;
      uStack_74 = uRam000000000f642114;
      uStack_70 = _DAT_0f642118;
      uStack_6c = uRam000000000f64211c;
    }
    else {
      func_0x0412e5e0(&uStack_78,_DAT_0f642120,CONCAT44(uRam000000000f64211c,_DAT_0f642118));
    }
    func_0x0730fa70(puVar22,&uStack_80,0);
    if ((uStack_78 & 1) != 0) {
      func_0x0412a280(uStack_68,CONCAT44(uStack_74,uStack_78) & 0xfffffffffffffffe);
    }
    if (apcStack_4e0[0] != (code *)0x0) {
      (*apcStack_4e0[0])(auStack_4f8);
    }
    if (pcStack_528 != (code *)0x0) {
      (*pcStack_528)(auStack_540);
    }
    if (apcStack_568[0] != (code *)0x0) {
      (*apcStack_568[0])(auStack_580);
    }
    if (pcStack_5a8 != (code *)0x0) {
      (*pcStack_5a8)(&lStack_5c0);
    }
    if (((ulong)auStack_5f8 & 1) != 0) {
      func_0x0412a280(ppuStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
    }
    uStack_268 = (ulong **)0x0;
    uStack_260 = (ulong *****)0x0;
    ppppuStack_258 = (ulong ****)0x0;
    ppuStack_5e8 = (ulong **)0x0;
    uStack_598 = 0;
    pcStack_590 = (code *)0x0;
    pcStack_5a8 = (code *)0x0;
    uStack_5a0 = 0;
    uStack_5b8 = 0;
    pcStack_5b0 = (code *)0x0;
    puStack_5c8 = (undefined *)0x0;
    lStack_5c0 = 0;
    uStack_5d8 = (undefined *)0x0;
    pcStack_5d0 = (code *)0x0;
    auStack_5f8 = (undefined1  [8])0x0;
    ppuStack_5f0 = (ulong **)0x0;
    uStack_5e0 = (undefined *)0x617461447465670e;
    pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (pcVar20 == (code *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    *(undefined8 *)(pcVar20 + 8) = 0;
    *(undefined8 *)(pcVar20 + 0x10) = 0;
    *(undefined **)pcVar20 = &UNK_0f204368;
    uVar12 = func_0x0d858500(&uStack_268);
    pcVar2 = pcVar20 + 0x18;
    pcVar20[0x20] = (code)0x2;
    *(undefined4 *)(pcVar20 + 0x24) = uVar12;
    *(undefined4 *)(pcVar20 + 0x28) = 0;
    *(undefined8 *)(pcVar20 + 0x30) = 0;
    *(undefined8 *)(pcVar20 + 0x38) = 0;
    *(undefined8 *)(pcVar20 + 0x40) = 0;
    *(undefined **)(pcVar20 + 0x18) = &UNK_0f2043b8;
    *(undefined8 *)(pcVar20 + 0x50) = 0;
    *(undefined8 *)(pcVar20 + 0x58) = 0;
    *(undefined8 *)(pcVar20 + 0x60) = 0;
    uStack_268 = (ulong **)0x0;
    uStack_260 = (ulong *****)0x0;
    ppppuStack_258 = (ulong ****)0x0;
    uVar12 = func_0x0d858620(pcVar2);
    pcVar5 = pcStack_5a8;
    *(undefined4 *)(pcVar20 + 0x28) = uVar12;
    pcStack_5b0 = pcVar2;
    if (pcStack_5a8 != (code *)0x0) {
      LOCK();
      pcVar2 = pcStack_5a8 + 8;
      lVar23 = *(long *)pcVar2;
      *(long *)pcVar2 = *(long *)pcVar2 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        lVar23 = *(long *)pcStack_5a8;
        pcStack_5a8 = pcVar20;
        (**(code **)(lVar23 + 0x10))(pcVar5);
        func_0x0412c2d0(pcVar5);
        pcVar20 = pcStack_5a8;
      }
    }
    pcStack_5a8 = pcVar20;
    ppuStack_738 = (ulong **)0x0;
    ppuStack_730 = (ulong **)0x0;
    ppuStack_728 = (ulong **)0x0;
    (**(code **)(*(long *)pcStack_5b0 + 0x20))();
    puVar9 = puStack_5c8;
    lVar23 = lStack_5c0;
    if (puStack_5c8 != (undefined *)0x0) {
      while (puVar9 != (undefined *)lVar23) {
        func_0x05fe8450(lVar23 + -0x140);
        lVar23 = lVar23 + -0x140;
      }
      lStack_5c0 = (long)puVar9;
      func_0x0412a280(puStack_5c8,uStack_5b8 - (long)puStack_5c8);
    }
    puStack_5c8 = (undefined *)0x0;
    lStack_5c0 = 0;
    uStack_5b8 = 0;
    if (puStack_2e0 < puStack_2d8) {
      *puStack_2e0 = 0;
      puStack_2e0[1] = 0;
      puStack_2e0[2] = 0;
      *puStack_2e0 = (ulong)auStack_5f8;
      puStack_2e0[1] = (ulong)ppuStack_5f0;
      puStack_2e0[2] = (ulong)ppuStack_5e8;
      auStack_5f8 = (undefined1  [8])0x0;
      ppuStack_5f0 = (ulong **)0x0;
      ppuStack_5e8 = (ulong **)0x0;
      puStack_2e0[5] = (ulong)pcStack_5d0;
      puStack_2e0[3] = (ulong)uStack_5e0;
      puStack_2e0[4] = (ulong)uStack_5d8;
      uStack_5e0 = (undefined *)0x0;
      uStack_5d8 = (undefined *)0x0;
      pcStack_5d0 = (code *)0x0;
      puStack_2e0[6] = 0;
      puStack_2e0[7] = 0;
      puStack_2e0[8] = 0;
      puStack_2e0[6] = 0;
      puStack_2e0[7] = 0;
      puStack_2e0[8] = 0;
      puStack_5c8 = (undefined *)0x0;
      lStack_5c0 = 0;
      uStack_5b8 = 0;
      puStack_2e0[9] = (ulong)pcStack_5b0;
      puStack_2e0[10] = (ulong)pcStack_5a8;
      pcStack_5b0 = (code *)0x0;
      pcStack_5a8 = (code *)0x0;
      puStack_2e0[0xb] = 0;
      puStack_2e0[0xc] = 0;
      puStack_2e0[0xd] = 0;
      *(undefined4 *)(puStack_2e0 + 0xb) = (undefined4)uStack_5a0;
      *(undefined4 *)((long)puStack_2e0 + 0x5c) = uStack_5a0._4_4_;
      *(undefined4 *)(puStack_2e0 + 0xc) = (undefined4)uStack_598;
      *(undefined4 *)((long)puStack_2e0 + 100) = uStack_598._4_4_;
      puStack_2e0[0xd] = (ulong)pcStack_590;
      uStack_5a0 = 0;
      uStack_598 = 0;
      pcStack_590 = (code *)0x0;
      puVar22 = puStack_2e0 + 0xe;
    }
    else {
      puVar22 = (ulong *)func_0x0652ac80(&lStack_2e8,auStack_5f8);
    }
    puStack_2e0 = puVar22;
    func_0x05f93280(auStack_5f8);
    lVar23 = (long)uStack_268;
    if (uStack_268 != (ulong **)0x0) {
      if ((ulong *****)uStack_268 != uStack_260) {
        lVar19 = (long)uStack_260 + -0x40;
        do {
          if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
            (**(code **)(lVar19 + 0x18))(lVar19);
          }
          if (*(code **)(lVar19 + -0x30) != (code *)0x0) {
            (**(code **)(lVar19 + -0x30))(lVar19 + -0x48);
          }
          if (*(code **)(lVar19 + -0x70) != (code *)0x0) {
            (**(code **)(lVar19 + -0x70))(lVar19 + -0x88);
          }
          if (*(code **)(lVar19 + -0xb0) != (code *)0x0) {
            (**(code **)(lVar19 + -0xb0))(lVar19 + -200);
          }
          lVar30 = lVar19 + -0xd8;
          lVar19 = lVar19 + -0x118;
        } while (lVar30 != lVar23);
      }
      func_0x0412a280(uStack_268,(long)ppppuStack_258 - (long)uStack_268);
    }
    uStack_a0 = _DAT_0f642108;
    uStack_9c = _DAT_0f64210c;
    if ((_DAT_0f642110 & 1) == 0) {
      uStack_88 = _DAT_0f642120;
      uStack_98 = _DAT_0f642110;
      uStack_94 = uRam000000000f642114;
      uStack_90 = _DAT_0f642118;
      uStack_8c = uRam000000000f64211c;
    }
    else {
      func_0x0412e5e0(&uStack_98,_DAT_0f642120,CONCAT44(uRam000000000f64211c,_DAT_0f642118));
    }
    func_0x0730fa70(puVar22 + -0xe,&uStack_a0,0);
    if ((uStack_98 & 1) != 0) {
      func_0x0412a280(uStack_88,CONCAT44(uStack_94,uStack_98) & 0xfffffffffffffffe);
    }
    bStack_7b8 = 0x10;
    uStack_7b7 = 0x6361626c6c6163;
    uStack_7b0 = 0x6b;
    uStack_7af = 0;
    func_0x0a0e8100(auStack_5f8,&bStack_7b8);
    func_0x0a0ed1f0(&uStack_268,auStack_5f8);
    ppuStack_728 = (ulong **)0x0;
    uStack_710 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    pcStack_6e8 = (code *)0x0;
    uStack_6e0 = 0;
    uStack_6f8 = 0;
    pcStack_6f0 = (code *)0x0;
    uStack_708 = 0;
    uStack_700 = 0;
    ppuStack_738 = (ulong **)0x0;
    ppuStack_730 = (ulong **)0x0;
    uStack_720 = 0x6972637362757312;
    uStack_718 = 0x6562;
    pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (pcVar20 == (code *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    *(undefined8 *)((long)pcVar20 + 8) = 0;
    *(undefined8 *)((long)pcVar20 + 0x10) = 0;
    *(undefined **)pcVar20 = &UNK_0f204438;
    uVar12 = func_0x0d858500(&uStack_268);
    puVar28 = (undefined8 *)((long)pcVar20 + 0x18);
    *(undefined1 *)((long)pcVar20 + 0x20) = 2;
    *(undefined4 *)((long)pcVar20 + 0x24) = uVar12;
    *(undefined4 *)((long)pcVar20 + 0x28) = 0;
    *(undefined8 *)((long)pcVar20 + 0x30) = 0;
    *(undefined8 *)((long)pcVar20 + 0x38) = 0;
    *(undefined8 *)((long)pcVar20 + 0x40) = 0;
    *(undefined **)((long)pcVar20 + 0x18) = &UNK_0f204488;
    *(undefined4 *)((long)pcVar20 + 0x50) = (undefined4)uStack_268;
    *(undefined4 *)((long)pcVar20 + 0x54) = uStack_268._4_4_;
    *(undefined4 *)((long)pcVar20 + 0x58) = (undefined4)uStack_260;
    *(undefined4 *)((long)pcVar20 + 0x5c) = uStack_260._4_4_;
    *(ulong *****)((long)pcVar20 + 0x60) = ppppuStack_258;
    uStack_268 = (ulong **)0x0;
    uStack_260 = (ulong *****)0x0;
    ppppuStack_258 = (ulong ****)0x0;
    uVar12 = func_0x0d858620(puVar28);
    pcVar2 = pcStack_6e8;
    *(undefined4 *)((long)pcVar20 + 0x28) = uVar12;
    pcStack_6f0 = (code *)puVar28;
    if (pcStack_6e8 != (code *)0x0) {
      LOCK();
      plVar17 = (long *)((long)pcStack_6e8 + 8);
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        lVar23 = *(long *)pcStack_6e8;
        pcStack_6e8 = pcVar20;
        (**(code **)(lVar23 + 0x10))(pcVar2);
        func_0x0412c2d0(pcVar2);
        pcVar20 = pcStack_6e8;
      }
    }
    pcStack_6e8 = pcVar20;
    cVar11 = func_0x0a0ed370(&ppuStack_738,auStack_5f8);
    if (cVar11 == '\0') {
      puVar22 = (ulong *)0xf64e550;
    }
    else {
      if (puStack_2e0 < puStack_2d8) {
        *puStack_2e0 = 0;
        puStack_2e0[1] = 0;
        puStack_2e0[2] = 0;
        *puStack_2e0 = (ulong)ppuStack_738;
        puStack_2e0[1] = (ulong)ppuStack_730;
        puStack_2e0[2] = (ulong)ppuStack_728;
        ppuStack_738 = (ulong **)0x0;
        ppuStack_730 = (ulong **)0x0;
        ppuStack_728 = (ulong **)0x0;
        puStack_2e0[5] = uStack_710;
        puStack_2e0[3] = uStack_720;
        puStack_2e0[4] = uStack_718;
        uStack_720 = 0;
        uStack_718 = 0;
        uStack_710 = 0;
        puStack_2e0[6] = 0;
        puStack_2e0[7] = 0;
        puStack_2e0[8] = 0;
        puStack_2e0[6] = uStack_708;
        puStack_2e0[7] = uStack_700;
        puStack_2e0[8] = uStack_6f8;
        uStack_708 = 0;
        uStack_700 = 0;
        uStack_6f8 = 0;
        puStack_2e0[9] = (ulong)pcStack_6f0;
        puStack_2e0[10] = (ulong)pcStack_6e8;
        pcStack_6f0 = (code *)0x0;
        pcStack_6e8 = (code *)0x0;
        puStack_2e0[0xb] = 0;
        puStack_2e0[0xc] = 0;
        puStack_2e0[0xd] = 0;
        *(undefined4 *)(puStack_2e0 + 0xb) = (undefined4)uStack_6e0;
        *(undefined4 *)((long)puStack_2e0 + 0x5c) = uStack_6e0._4_4_;
        *(undefined4 *)(puStack_2e0 + 0xc) = (undefined4)uStack_6d8;
        *(undefined4 *)((long)puStack_2e0 + 100) = uStack_6d8._4_4_;
        puStack_2e0[0xd] = uStack_6d0;
        uStack_6e0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        puStack_2e0 = puStack_2e0 + 0xe;
      }
      else {
        puStack_2e0 = (ulong *)func_0x0652ac80(&lStack_2e8,&ppuStack_738);
      }
      puVar22 = puStack_2e0 + -0xe;
    }
    func_0x05f93280(&ppuStack_738);
    lVar23 = (long)uStack_268;
    if (uStack_268 != (ulong **)0x0) {
      if ((ulong *****)uStack_268 != uStack_260) {
        lVar19 = (long)uStack_260 + -0x40;
        do {
          if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
            (**(code **)(lVar19 + 0x18))(lVar19);
          }
          if (*(code **)(lVar19 + -0x30) != (code *)0x0) {
            (**(code **)(lVar19 + -0x30))(lVar19 + -0x48);
          }
          if (*(code **)(lVar19 + -0x70) != (code *)0x0) {
            (**(code **)(lVar19 + -0x70))(lVar19 + -0x88);
          }
          if (*(code **)(lVar19 + -0xb0) != (code *)0x0) {
            (**(code **)(lVar19 + -0xb0))(lVar19 + -200);
          }
          lVar30 = lVar19 + -0xd8;
          lVar19 = lVar19 + -0x118;
        } while (lVar30 != lVar23);
      }
      uStack_260 = (ulong *****)lVar23;
      func_0x0412a280(uStack_268,(long)ppppuStack_258 - (long)uStack_268);
    }
    uStack_c0 = _DAT_0f642108;
    uStack_bc = _DAT_0f64210c;
    if ((_DAT_0f642110 & 1) == 0) {
      uStack_a8 = _DAT_0f642120;
      uStack_b8 = _DAT_0f642110;
      uStack_b4 = uRam000000000f642114;
      uStack_b0 = _DAT_0f642118;
      uStack_ac = uRam000000000f64211c;
    }
    else {
      func_0x0412e5e0(&uStack_b8,_DAT_0f642120,CONCAT44(uRam000000000f64211c,_DAT_0f642118));
    }
    func_0x0730fa70(puVar22,&uStack_c0,0);
    if ((uStack_b8 & 1) != 0) {
      func_0x0412a280(uStack_a8,CONCAT44(uStack_b4,uStack_b8) & 0xfffffffffffffffe);
    }
    if (apcStack_4e0[0] != (code *)0x0) {
      (*apcStack_4e0[0])(auStack_4f8);
    }
    if (pcStack_528 != (code *)0x0) {
      (*pcStack_528)(auStack_540);
    }
    if (apcStack_568[0] != (code *)0x0) {
      (*apcStack_568[0])(auStack_580);
    }
    if (pcStack_5a8 != (code *)0x0) {
      (*pcStack_5a8)(&lStack_5c0);
    }
    if (((ulong)auStack_5f8 & 1) != 0) {
      func_0x0412a280(ppuStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
    }
    if ((bStack_7b8 & 1) != 0) {
      func_0x0412a280(pppppuStack_7a8,CONCAT71(uStack_7b7,bStack_7b8) & 0xfffffffffffffffe);
    }
    bStack_7b8 = 0x10;
    uStack_7b7 = 0x6361626c6c6163;
    uStack_7b0 = 0x6b;
    uStack_7af = 0;
    func_0x0a0e8100(auStack_5f8,&bStack_7b8);
    func_0x0a0ed1f0(&uStack_268,auStack_5f8);
    ppuStack_728 = (ulong **)0x0;
    uStack_710 = 0;
    uStack_6d8 = 0;
    uStack_6d0 = 0;
    pcStack_6e8 = (code *)0x0;
    uStack_6e0 = 0;
    uStack_6f8 = 0;
    pcStack_6f0 = (code *)0x0;
    uStack_708 = 0;
    uStack_700 = 0;
    ppuStack_738 = (ulong **)0x0;
    ppuStack_730 = (ulong **)0x0;
    uStack_720 = 0x63736275736e7516;
    uStack_718 = 0x65626972;
    pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
    if (pcVar20 == (code *)0x0) {
      func_0x0eec74c0(0x68,0);
    }
    *(undefined8 *)(pcVar20 + 8) = 0;
    *(undefined8 *)(pcVar20 + 0x10) = 0;
    *(undefined **)pcVar20 = &UNK_0f204528;
    uVar12 = func_0x0d858500(&uStack_268);
    pcVar2 = pcVar20 + 0x18;
    pcVar20[0x20] = (code)0x2;
    *(undefined4 *)(pcVar20 + 0x24) = uVar12;
    *(undefined4 *)(pcVar20 + 0x28) = 0;
    *(undefined8 *)(pcVar20 + 0x30) = 0;
    *(undefined8 *)(pcVar20 + 0x38) = 0;
    *(undefined8 *)(pcVar20 + 0x40) = 0;
    *(undefined **)(pcVar20 + 0x18) = &UNK_0f204578;
    *(undefined4 *)(pcVar20 + 0x50) = (undefined4)uStack_268;
    *(undefined4 *)(pcVar20 + 0x54) = uStack_268._4_4_;
    *(undefined4 *)(pcVar20 + 0x58) = (undefined4)uStack_260;
    *(undefined4 *)(pcVar20 + 0x5c) = uStack_260._4_4_;
    *(ulong *****)(pcVar20 + 0x60) = ppppuStack_258;
    uStack_268 = (ulong **)0x0;
    uStack_260 = (ulong *****)0x0;
    ppppuStack_258 = (ulong ****)0x0;
    uVar12 = func_0x0d858620(pcVar2);
    pcVar5 = pcStack_6e8;
    *(undefined4 *)(pcVar20 + 0x28) = uVar12;
    pcStack_6f0 = pcVar2;
    if (pcStack_6e8 != (code *)0x0) {
      LOCK();
      plVar17 = (long *)((long)pcStack_6e8 + 8);
      lVar23 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        lVar23 = *(long *)pcStack_6e8;
        pcStack_6e8 = pcVar20;
        (**(code **)(lVar23 + 0x10))(pcVar5);
        func_0x0412c2d0(pcVar5);
        pcVar20 = pcStack_6e8;
      }
    }
    pcStack_6e8 = pcVar20;
    cVar11 = func_0x0a0ed370(&ppuStack_738,auStack_5f8);
    if (cVar11 == '\0') {
      puVar22 = (ulong *)0xf64e550;
    }
    else {
      if (puStack_2e0 < puStack_2d8) {
        *puStack_2e0 = 0;
        puStack_2e0[1] = 0;
        puStack_2e0[2] = 0;
        *puStack_2e0 = (ulong)ppuStack_738;
        puStack_2e0[1] = (ulong)ppuStack_730;
        puStack_2e0[2] = (ulong)ppuStack_728;
        ppuStack_738 = (ulong **)0x0;
        ppuStack_730 = (ulong **)0x0;
        ppuStack_728 = (ulong **)0x0;
        puStack_2e0[5] = uStack_710;
        puStack_2e0[3] = uStack_720;
        puStack_2e0[4] = uStack_718;
        uStack_720 = 0;
        uStack_718 = 0;
        uStack_710 = 0;
        puStack_2e0[6] = 0;
        puStack_2e0[7] = 0;
        puStack_2e0[8] = 0;
        puStack_2e0[6] = uStack_708;
        puStack_2e0[7] = uStack_700;
        puStack_2e0[8] = uStack_6f8;
        uStack_708 = 0;
        uStack_700 = 0;
        uStack_6f8 = 0;
        puStack_2e0[9] = (ulong)pcStack_6f0;
        puStack_2e0[10] = (ulong)pcStack_6e8;
        pcStack_6f0 = (code *)0x0;
        pcStack_6e8 = (code *)0x0;
        puStack_2e0[0xb] = 0;
        puStack_2e0[0xc] = 0;
        puStack_2e0[0xd] = 0;
        puStack_2e0[0xb] = uStack_6e0;
        puStack_2e0[0xc] = uStack_6d8;
        puStack_2e0[0xd] = uStack_6d0;
        uStack_6e0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        puStack_2e0 = puStack_2e0 + 0xe;
      }
      else {
        puStack_2e0 = (ulong *)func_0x0652ac80(&lStack_2e8,&ppuStack_738);
      }
      puVar22 = puStack_2e0 + -0xe;
    }
    func_0x05f93280(&ppuStack_738);
    lVar23 = (long)uStack_268;
    if (uStack_268 != (ulong **)0x0) {
      if ((ulong *****)uStack_268 != uStack_260) {
        lVar19 = (long)uStack_260 + -0x40;
        do {
          if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
            (**(code **)(lVar19 + 0x18))(lVar19);
          }
          if (*(code **)(lVar19 + -0x30) != (code *)0x0) {
            (**(code **)(lVar19 + -0x30))(lVar19 + -0x48);
          }
          if (*(code **)(lVar19 + -0x70) != (code *)0x0) {
            (**(code **)(lVar19 + -0x70))(lVar19 + -0x88);
          }
          if (*(code **)(lVar19 + -0xb0) != (code *)0x0) {
            (**(code **)(lVar19 + -0xb0))(lVar19 + -200);
          }
          lVar30 = lVar19 + -0xd8;
          lVar19 = lVar19 + -0x118;
        } while (lVar30 != lVar23);
      }
      uStack_260 = (ulong *****)lVar23;
      func_0x0412a280(uStack_268,(long)ppppuStack_258 - (long)uStack_268);
    }
    uStack_e0 = _DAT_0f642108;
    uStack_dc = _DAT_0f64210c;
    if ((_DAT_0f642110 & 1) == 0) {
      uStack_c8 = _DAT_0f642120;
      uStack_d8 = _DAT_0f642110;
      uStack_d4 = uRam000000000f642114;
      uStack_d0 = _DAT_0f642118;
      uStack_cc = uRam000000000f64211c;
    }
    else {
      func_0x0412e5e0(&uStack_d8,_DAT_0f642120,CONCAT44(uRam000000000f64211c,_DAT_0f642118));
    }
    func_0x0730fa70(puVar22,&uStack_e0,0);
    if ((uStack_d8 & 1) != 0) {
      func_0x0412a280(uStack_c8,CONCAT44(uStack_d4,uStack_d8) & 0xfffffffffffffffe);
    }
    if (apcStack_4e0[0] != (code *)0x0) {
      (*apcStack_4e0[0])(auStack_4f8);
    }
    if (pcStack_528 != (code *)0x0) {
      (*pcStack_528)(auStack_540);
    }
    if (apcStack_568[0] != (code *)0x0) {
      (*apcStack_568[0])(auStack_580);
    }
    if (pcStack_5a8 != (code *)0x0) {
      (*pcStack_5a8)(&lStack_5c0);
    }
    if (((ulong)auStack_5f8 & 1) != 0) {
      func_0x0412a280(ppuStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
    }
    if ((bStack_7b8 & 1) != 0) {
      func_0x0412a280(pppppuStack_7a8,CONCAT71(uStack_7b7,bStack_7b8) & 0xfffffffffffffffe);
    }
    uStack_7d0 = 0x616c700c;
    uStack_7cc = 0x79;
    uStack_7cb = 0x7265;
    uStack_7c9 = 0;
    func_0x0a016850(&ppuStack_738,&uStack_7d0);
    unaff_RBP = &uStack_710;
    func_0x06523ef0(auStack_5f8,unaff_RBP);
    uStack_818 = (ulong ****)0x0;
    uStack_810 = (ulong ****)0x0;
    ppppuStack_808 = (ulong ****)0x0;
    bStack_7b8 = (byte)&uStack_818;
    uStack_7b7 = (undefined7)((ulong)&uStack_818 >> 8);
    uStack_7b0 = 0;
    ppppuVar21 = (ulong ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
    if (ppppuVar21 == (ulong ****)0x0) {
      func_0x0eec74c0(0x118,0);
    }
    ppppuStack_808 = ppppuVar21 + 0x23;
    uStack_268 = (ulong **)&uStack_818;
    uStack_260 = &ppppuStack_748;
    ppppuStack_258 = (ulong ****)&ppppuStack_7f8;
    uStack_250 = uStack_250 & 0xffffffffffffff00;
    uStack_818 = ppppuVar21;
    uStack_810 = ppppuVar21;
    ppppuStack_7f8 = ppppuVar21;
    ppppuStack_748 = ppppuVar21;
    func_0x06523ef0(ppppuVar21,auStack_5f8);
    uStack_810 = ppppuStack_7f8 + 0x23;
    if (pcStack_508 != (code *)0x0) {
      (*pcStack_508)(auStack_520);
    }
    if (pcStack_550 != (code *)0x0) {
      (*pcStack_550)(apcStack_568);
    }
    if (pcStack_590 != (code *)0x0) {
      (*pcStack_590)(&pcStack_5a8);
    }
    if (pcStack_5d0 != (code *)0x0) {
      (*pcStack_5d0)(&ppuStack_5e8);
    }
    ppppuStack_258 = (ulong ****)0x0;
    uStack_240 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    pcStack_218 = (code *)0x0;
    uStack_210 = 0;
    puStack_228 = (ulong *)0x0;
    plStack_220 = (long *)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_268 = (ulong **)0x0;
    uStack_260 = (ulong *****)0x0;
    uStack_250 = 0x746c69467465671e;
    uStack_248 = 0x7478655464657265;
    func_0x0a0f0530(&ppppuStack_7f8);
    auStack_5f8._0_4_ = 0xf55160ec;
    ppuStack_5f0 = (ulong **)0x0;
    ppuStack_5e8 = (ulong **)((ulong)ppuStack_5e8 & 0xffffffff00000000);
    uStack_5e0 = (undefined *)0x0;
    uStack_5d8 = &UNK_065b4120;
    pcStack_5d0 = (code *)&SUB_048b06d0;
    puStack_5c8 = &UNK_0a0f2e20;
    lStack_5c0 = 0;
    uStack_5b8 = uStack_5b8 & 0xffffffff00000000;
    pcStack_5b0 = (code *)0x0;
    pcStack_5a8 = (code *)0x0;
    func_0x049057f0(&ppppuStack_7f8,auStack_5f8);
    func_0x048aea50(auStack_5f8);
    pppppuStack_7a8 = (ulong *****)pppuStack_7e8;
    uStack_7a0 = uStack_7e0;
    uStack_79c = uStack_7dc;
    bStack_7b8 = (byte)ppppuStack_7f8;
    uStack_7b7 = (undefined7)((ulong)ppppuStack_7f8 >> 8);
    uStack_7b0 = (byte)pppuStack_7f0;
    uStack_7af = (undefined1)((ulong)pppuStack_7f0 >> 8);
    uStack_7ae = (undefined6)((ulong)pppuStack_7f0 >> 0x10);
    auStack_5f8._0_4_ = 0xf55160ec;
    ppuStack_5f0 = (ulong **)0x0;
    ppuStack_5e8 = (ulong **)CONCAT44(ppuStack_5e8._4_4_,1);
    uStack_5e0 = (undefined *)0x0;
    uStack_5d8 = &UNK_065b4120;
    pcStack_5d0 = (code *)&SUB_048b06d0;
    puStack_5c8 = &UNK_0a0f3100;
    lStack_5c0 = 0;
    uStack_5b8 = uStack_5b8 & 0xffffffff00000000;
    pcStack_5b0 = (code *)0x0;
    pcStack_5a8 = (code *)0x0;
    func_0x049057f0(&bStack_7b8,auStack_5f8);
    func_0x048aea50(auStack_5f8);
    func_0x0a0f0530(&bStack_7b8);
    if (DAT_0f6529d8 != '\0') goto LAB_0a03d004;
  }
  else {
    func_0x04882e30();
  }
  iVar14 = func_0x04108328(&DAT_0f6529d8);
  if (iVar14 != 0) {
    func_0x0a0f3790();
    FUN_0410844d(&DAT_0f6529d8);
  }
LAB_0a03d004:
  auStack_5f8._0_4_ = _DAT_0f6529c4;
  ppuStack_5f0 = (ulong **)0x1;
  ppuStack_5e8 = (ulong **)&UNK_0a0f33c0;
  uStack_5e0 = &UNK_0a0f33d0;
  func_0x065abe60(&bStack_7b8);
  func_0x0a0f0530(&bStack_7b8);
  if ((DAT_0f57d588 == '\0') && (iVar14 = func_0x04108328(&DAT_0f57d588), iVar14 != 0)) {
    func_0x065b6770(0xf57d570);
    FUN_0410844d(&DAT_0f57d588);
  }
  auStack_5f8._0_4_ = _DAT_0f57d574;
  ppuStack_5f0 = (ulong **)0x1;
  ppuStack_5e8 = (ulong **)&UNK_048b3f30;
  uStack_5e0 = &UNK_0a0f3b00;
  func_0x065abe60(&bStack_7b8);
  pcVar20 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (pcVar20 == (code *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  *(undefined8 *)((long)pcVar20 + 8) = 0;
  *(undefined8 *)((long)pcVar20 + 0x10) = 0;
  *(undefined **)pcVar20 = &UNK_0f204698;
  uVar12 = func_0x0d858500(&uStack_818);
  plVar17 = (long *)((long)pcVar20 + 0x18);
  *(undefined1 *)((long)pcVar20 + 0x20) = 0;
  *(undefined4 *)((long)pcVar20 + 0x24) = uVar12;
  *(undefined4 *)((long)pcVar20 + 0x28) = 0;
  *(undefined8 *)((long)pcVar20 + 0x30) = 0;
  *(undefined8 *)((long)pcVar20 + 0x38) = 0;
  *(undefined8 *)((long)pcVar20 + 0x40) = 0;
  *(undefined **)((long)pcVar20 + 0x18) = &UNK_0f2046e8;
  *(undefined4 *)((long)pcVar20 + 0x50) = (undefined4)uStack_818;
  *(undefined4 *)((long)pcVar20 + 0x54) = uStack_818._4_4_;
  *(undefined4 *)((long)pcVar20 + 0x58) = (undefined4)uStack_810;
  *(undefined4 *)((long)pcVar20 + 0x5c) = uStack_810._4_4_;
  *(ulong *****)((long)pcVar20 + 0x60) = ppppuStack_808;
  uStack_818 = (ulong ****)0x0;
  uStack_810 = (ulong ****)0x0;
  ppppuStack_808 = (ulong ****)0x0;
  uVar12 = func_0x0d858620(plVar17);
  pcVar2 = pcStack_218;
  *(undefined4 *)((long)pcVar20 + 0x28) = uVar12;
  plStack_220 = plVar17;
  if (pcStack_218 != (code *)0x0) {
    LOCK();
    pcVar5 = pcStack_218 + 8;
    lVar23 = *(long *)pcVar5;
    *(long *)pcVar5 = *(long *)pcVar5 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      lVar23 = *(long *)pcStack_218;
      pcStack_218 = pcVar20;
      (**(code **)(lVar23 + 0x10))(pcVar2);
      func_0x0412c2d0(pcVar2);
      pcVar20 = pcStack_218;
    }
  }
  pcStack_218 = pcVar20;
  ppuStack_5e8 = ppuStack_728;
  auStack_5f8 = (undefined1  [8])ppuStack_738;
  ppuStack_5f0 = ppuStack_730;
  ppuStack_738 = (ulong **)0x0;
  ppuStack_730 = (ulong **)0x0;
  ppuStack_728 = (ulong **)0x0;
  uStack_5e0 = (undefined *)uStack_720;
  uStack_5d8 = (undefined *)uStack_718;
  func_0x065281f0(&pcStack_5d0,unaff_RBP);
  bStack_7b8 = 0;
  uStack_7b7 = 0;
  uStack_7b0 = 0;
  uStack_7af = 0;
  uStack_7ae = 0;
  pppppuStack_7a8 = (ulong *****)0x0;
  pppuStack_7f0 = (ulong ***)((ulong)pppuStack_7f0 & 0xffffffffffffff00);
  ppppuStack_7f8 = (ulong ****)&bStack_7b8;
  puVar22 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar22 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  bStack_7b8 = (byte)puVar22;
  uStack_7b7 = (undefined7)((ulong)puVar22 >> 8);
  uStack_7af = (undefined1)((ulong)puVar22 >> 8);
  uStack_7ae = (undefined6)((ulong)puVar22 >> 0x10);
  puVar4 = puVar22 + 0x28;
  pppppuStack_7a8 = (ulong *****)puVar4;
  if (((ulong)auStack_5f8 & 1) == 0) {
    puVar22[2] = (ulong)ppuStack_5e8;
    *puVar22 = (ulong)auStack_5f8;
    puVar22[1] = (ulong)ppuStack_5f0;
    uStack_7b0 = bStack_7b8;
  }
  else {
    uStack_7b0 = bStack_7b8;
    func_0x0412e5e0(puVar22,ppuStack_5e8,ppuStack_5f0);
  }
  *(undefined4 *)(puVar22 + 3) = (undefined4)uStack_5e0;
  *(undefined4 *)((long)puVar22 + 0x1c) = uStack_5e0._4_4_;
  *(undefined4 *)(puVar22 + 4) = (undefined4)uStack_5d8;
  *(undefined4 *)((long)puVar22 + 0x24) = uStack_5d8._4_4_;
  func_0x06523ef0(puVar22 + 5,&pcStack_5d0);
  uStack_7b0 = (byte)puVar4;
  uStack_7af = (undefined1)((ulong)puVar4 >> 8);
  uStack_7ae = (undefined6)((ulong)puVar4 >> 0x10);
  if (apcStack_4e0[0] != (code *)0x0) {
    (*apcStack_4e0[0])(auStack_4f8);
  }
  if (pcStack_528 != (code *)0x0) {
    (*pcStack_528)(auStack_540);
  }
  if (apcStack_568[0] != (code *)0x0) {
    (*apcStack_568[0])(auStack_580);
  }
  if (pcStack_5a8 != (code *)0x0) {
    (*pcStack_5a8)(&lStack_5c0);
  }
  if (((ulong)auStack_5f8 & 1) != 0) {
    func_0x0412a280(ppuStack_5e8,(ulong)auStack_5f8 & 0xfffffffffffffffe);
  }
  uVar13 = (**(code **)(*plStack_220 + 0x20))();
  uVar15 = CONCAT71(uStack_7b7,bStack_7b8);
  uVar26 = CONCAT62(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0));
  uVar27 = ((long)(uVar26 - uVar15) >> 6) * -0x3333333333333333;
  uVar29 = 0;
  if ((uVar13 != 0) && ((uint)uVar27 != 0)) {
    uVar25 = 0;
    uVar29 = 0;
    uStack_7d4 = uVar13;
    do {
      auVar31 = (**(code **)(*plStack_220 + 0x28))(plStack_220,uVar25);
      lVar19 = auVar31._8_8_;
      lVar23 = auVar31._0_8_;
      auVar31 = func_0x06527d70();
      if (auVar31._8_8_ != lVar19) {
LAB_0a03d420:
        auVar31 = func_0x06527e30();
        if (auVar31._8_8_ == lVar19) {
          if (auVar31._0_8_ == 0) {
            lVar30 = func_0x048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar30 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar30 = func_0x048aead0(lVar19);
            iVar6 = *(int *)(lVar30 + 8);
          }
          else {
            iVar6 = *(int *)(lVar23 + 8);
          }
          if (iVar14 == iVar6) goto LAB_0a03d616;
        }
        auVar31 = func_0x06527ef0();
        if (auVar31._8_8_ == lVar19) {
          if (auVar31._0_8_ == 0) {
            lVar30 = func_0x048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar30 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar30 = func_0x048aead0(lVar19);
            iVar6 = *(int *)(lVar30 + 8);
          }
          else {
            iVar6 = *(int *)(lVar23 + 8);
          }
          if (iVar14 == iVar6) goto LAB_0a03d616;
        }
        auVar31 = func_0x06527fb0();
        if (auVar31._8_8_ == lVar19) {
          if (auVar31._0_8_ == 0) {
            lVar30 = func_0x048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar30 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar30 = func_0x048aead0(lVar19);
            iVar6 = *(int *)(lVar30 + 8);
          }
          else {
            iVar6 = *(int *)(lVar23 + 8);
          }
          if (iVar14 == iVar6) goto LAB_0a03d616;
        }
        auVar31 = func_0x06528070();
        if (auVar31._8_8_ == lVar19) {
          if (auVar31._0_8_ == 0) {
            lVar30 = func_0x048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar30 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar30 = func_0x048aead0(lVar19);
            iVar6 = *(int *)(lVar30 + 8);
          }
          else {
            iVar6 = *(int *)(lVar23 + 8);
          }
          if (iVar14 == iVar6) goto LAB_0a03d616;
        }
        auVar31 = func_0x06528130();
        if (auVar31._8_8_ == lVar19) {
          if (auVar31._0_8_ == 0) {
            lVar30 = func_0x048aead0(auVar31._8_8_);
            iVar14 = *(int *)(lVar30 + 8);
          }
          else {
            iVar14 = *(int *)(auVar31._0_8_ + 8);
          }
          if (lVar23 == 0) {
            lVar30 = func_0x048aead0(lVar19);
            iVar6 = *(int *)(lVar30 + 8);
          }
          else {
            iVar6 = *(int *)(lVar23 + 8);
          }
          if (iVar14 == iVar6) goto LAB_0a03d616;
        }
        uVar15 = CONCAT71(uStack_7b7,bStack_7b8);
        if (*(long *)(uVar15 + 0x20 + uVar29 * 0x140) != lVar19) goto LAB_0a03d80e;
        lVar30 = *(long *)(uVar29 * 0x140 + uVar15 + 0x18);
        if (lVar30 == 0) {
          lVar30 = func_0x048aead0();
          iVar14 = *(int *)(lVar30 + 8);
          if (lVar23 == 0) goto LAB_0a03d5ff;
LAB_0a03d5e7:
          if (iVar14 == *(int *)(lVar23 + 8)) {
LAB_0a03d614:
            uVar29 = (ulong)((int)uVar29 + 1);
            goto LAB_0a03d616;
          }
        }
        else {
          iVar14 = *(int *)(lVar30 + 8);
          if (lVar23 != 0) goto LAB_0a03d5e7;
LAB_0a03d5ff:
          lVar23 = func_0x048aead0(lVar19);
          if (iVar14 == *(int *)(lVar23 + 8)) goto LAB_0a03d614;
        }
        uVar15 = CONCAT71(uStack_7b7,bStack_7b8);
        goto LAB_0a03d809;
      }
      if (auVar31._0_8_ == 0) {
        lVar30 = func_0x048aead0(auVar31._8_8_);
        iVar14 = *(int *)(lVar30 + 8);
        if (lVar23 == 0) goto LAB_0a03d40e;
LAB_0a03d3f1:
        if (iVar14 != *(int *)(lVar23 + 8)) goto LAB_0a03d420;
      }
      else {
        iVar14 = *(int *)(auVar31._0_8_ + 8);
        if (lVar23 != 0) goto LAB_0a03d3f1;
LAB_0a03d40e:
        lVar30 = func_0x048aead0(lVar19);
        if (iVar14 != *(int *)(lVar30 + 8)) goto LAB_0a03d420;
      }
LAB_0a03d616:
    } while (((uint)uVar29 < (uint)uVar27) && (uVar25 = uVar25 + 1, uVar25 < uStack_7d4));
    uVar15 = CONCAT71(uStack_7b7,bStack_7b8);
    uVar26 = CONCAT62(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0));
    uVar27 = ((long)(uVar26 - uVar15) >> 6) * -0x3333333333333333;
  }
  uVar10 = uStack_238;
  if (uVar27 == uVar29) {
    uVar29 = uStack_230;
    if (uStack_238 != 0) {
      while (uVar10 != uVar29) {
        func_0x05fe8450(uVar29 - 0x140);
        uVar29 = uVar29 - 0x140;
      }
      uStack_230 = uVar10;
      func_0x0412a280(uStack_238,(long)puStack_228 - uStack_238);
      uVar15 = CONCAT71(uStack_7b7,bStack_7b8);
      uVar26 = CONCAT62(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0));
    }
    puStack_228 = (ulong *)pppppuStack_7a8;
    if (puStack_2e0 < puStack_2d8) {
      *puStack_2e0 = 0;
      puStack_2e0[1] = 0;
      puStack_2e0[2] = 0;
      *puStack_2e0 = (ulong)uStack_268;
      puStack_2e0[1] = (ulong)uStack_260;
      puStack_2e0[2] = (ulong)ppppuStack_258;
      uStack_268 = (ulong **)0x0;
      uStack_260 = (ulong *****)0x0;
      ppppuStack_258 = (ulong ****)0x0;
      puStack_2e0[5] = uStack_240;
      puStack_2e0[3] = uStack_250;
      puStack_2e0[4] = uStack_248;
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      puStack_2e0[6] = 0;
      puStack_2e0[7] = 0;
      puStack_2e0[8] = 0;
      puStack_2e0[6] = uVar15;
      puStack_2e0[7] = uVar26;
      puStack_2e0[8] = (ulong)pppppuStack_7a8;
      uStack_238 = 0;
      uStack_230 = 0;
      puStack_228 = (ulong *)0x0;
      puStack_2e0[9] = (ulong)plStack_220;
      puStack_2e0[10] = (ulong)pcStack_218;
      plStack_220 = (long *)0x0;
      pcStack_218 = (code *)0x0;
      puStack_2e0[0xb] = 0;
      puStack_2e0[0xc] = 0;
      puStack_2e0[0xd] = 0;
      puStack_2e0[0xb] = uStack_210;
      puStack_2e0[0xc] = uStack_208;
      puStack_2e0[0xd] = uStack_200;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_200 = 0;
      puStack_2e0 = puStack_2e0 + 0xe;
    }
    else {
      uStack_238 = uVar15;
      uStack_230 = uVar26;
      puStack_2e0 = (ulong *)func_0x0652ac80(&lStack_2e8,&uStack_268);
    }
    puVar22 = puStack_2e0 + -0xe;
  }
  else {
LAB_0a03d809:
    if (uVar15 != 0) {
LAB_0a03d80e:
      uVar29 = CONCAT62(uStack_7ae,CONCAT11(uStack_7af,uStack_7b0));
      uVar26 = uVar15;
      if (uVar15 != uVar29) {
        do {
          uVar29 = uVar29 - 0x140;
          func_0x05fe8450(uVar29);
        } while (uVar29 != uVar15);
        uVar26 = CONCAT71(uStack_7b7,bStack_7b8);
      }
      uStack_7b0 = (byte)uVar15;
      uStack_7af = (undefined1)(uVar15 >> 8);
      uStack_7ae = (undefined6)(uVar15 >> 0x10);
      func_0x0412a280(uVar26,(long)pppppuStack_7a8 - uVar26);
    }
    puVar22 = (ulong *)0xf64e550;
  }
  func_0x05f93280(&uStack_268);
  lVar23 = (long)uStack_818;
  if (uStack_818 != (ulong ****)0x0) {
    if (uStack_818 != uStack_810) {
      lVar19 = (long)uStack_810 + -0x40;
      do {
        if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
          (**(code **)(lVar19 + 0x18))(lVar19);
        }
        if (*(code **)(lVar19 + -0x30) != (code *)0x0) {
          (**(code **)(lVar19 + -0x30))(lVar19 + -0x48);
        }
        if (*(code **)(lVar19 + -0x70) != (code *)0x0) {
          (**(code **)(lVar19 + -0x70))(lVar19 + -0x88);
        }
        if (*(code **)(lVar19 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar19 + -0xb0))(lVar19 + -200);
        }
        lVar30 = lVar19 + -0xd8;
        lVar19 = lVar19 + -0x118;
      } while (lVar30 != lVar23);
    }
    uStack_810 = (ulong ****)lVar23;
    func_0x0412a280(uStack_818,(long)ppppuStack_808 - (long)uStack_818);
  }
  uStack_100 = _DAT_0f642108;
  uStack_fc = _DAT_0f64210c;
  if ((_DAT_0f642110 & 1) == 0) {
    uStack_e8 = _DAT_0f642120;
    uStack_f8 = _DAT_0f642110;
    uStack_f4 = uRam000000000f642114;
    uStack_f0 = _DAT_0f642118;
    uStack_ec = uRam000000000f64211c;
  }
  else {
    func_0x0412e5e0(&uStack_f8,_DAT_0f642120,CONCAT44(uRam000000000f64211c,_DAT_0f642118));
  }
  func_0x0730fa70(puVar22,&uStack_100,0);
  plVar17 = plStack_40;
  if ((uStack_f8 & 1) != 0) {
    func_0x0412a280(uStack_e8,CONCAT44(uStack_f4,uStack_f8) & 0xfffffffffffffffe);
  }
  if (pcStack_620 != (code *)0x0) {
    (*pcStack_620)(auStack_638);
  }
  if (pcStack_668 != (code *)0x0) {
    (*pcStack_668)(auStack_680);
  }
  if (pcStack_6a8 != (code *)0x0) {
    (*pcStack_6a8)(auStack_6c0);
  }
  if (pcStack_6e8 != (code *)0x0) {
    (*pcStack_6e8)(&uStack_700);
  }
  if (((ulong)ppuStack_738 & 1) != 0) {
    func_0x0412a280(ppuStack_728,(ulong)ppuStack_738 & 0xfffffffffffffffe);
  }
  if ((uStack_7d0 & 1) != 0) {
    func_0x0412a280(uStack_7c0,
                    CONCAT17(uStack_7c9,CONCAT25(uStack_7cb,CONCAT14(uStack_7cc,uStack_7d0))) &
                    0xfffffffffffffffe);
  }
  uStack_120 = _DAT_0f642108;
  uStack_11c = _DAT_0f64210c;
  if ((_DAT_0f642110 & 1) == 0) {
    uStack_108 = _DAT_0f642120;
    uStack_118 = _DAT_0f642110;
    uStack_114 = uRam000000000f642114;
    uStack_110 = _DAT_0f642118;
    uStack_10c = uRam000000000f64211c;
  }
  else {
    func_0x0412e5e0(&uStack_118,_DAT_0f642120,CONCAT44(uRam000000000f64211c,_DAT_0f642118));
  }
  func_0x0730fa70(&lStack_378,&uStack_120,0);
  if ((uStack_118 & 1) != 0) {
    func_0x0412a280(uStack_108,CONCAT44(uStack_114,uStack_118) & 0xfffffffffffffffe);
  }
  auStack_330 = func_0x0a0ea630();
  lVar19 = lStack_360;
  lVar23 = lStack_358;
  if (lStack_360 != 0) {
    for (; lVar19 != lVar23; lVar23 = lVar23 + -0x30) {
      if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar23 + -0x10),
                        *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_358 = lVar19;
    func_0x0412a280(lStack_360,lStack_350 - lStack_360);
  }
  lVar30 = lStack_368;
  lVar19 = lStack_370;
  lVar23 = lStack_378;
  lStack_378 = 0;
  lStack_370 = 0;
  lStack_368 = 0;
  *plVar17 = lVar23;
  plVar17[1] = lVar19;
  plVar17[2] = lVar30;
  lStack_360 = 0;
  lStack_358 = 0;
  lStack_350 = 0;
  plVar17[5] = (long)ppuStack_338;
  plVar17[3] = uStack_348;
  plVar17[4] = uStack_340;
  uStack_348 = 0;
  uStack_340 = 0;
  ppuStack_338 = (ulong **)0x0;
  *(undefined4 *)(plVar17 + 8) = uStack_320;
  *(undefined4 *)((long)plVar17 + 0x44) = uStack_31c;
  *(undefined4 *)(plVar17 + 9) = uStack_318;
  *(undefined4 *)((long)plVar17 + 0x4c) = uStack_314;
  *(undefined1 (*) [16])(plVar17 + 6) = auStack_330;
  plVar17[10] = lStack_310;
  plVar17[0xb] = (long)puStack_308;
  plVar17[0xc] = (long)puStack_300;
  lStack_310 = 0;
  puStack_308 = (undefined8 *)0x0;
  puStack_300 = (undefined8 *)0x0;
  plVar17[0xd] = lStack_2f8;
  plVar17[0xe] = lStack_2f0;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  plVar17[0xf] = lStack_2e8;
  plVar17[0x10] = (long)puStack_2e0;
  plVar17[0x11] = (long)puStack_2d8;
  lStack_2e8 = 0;
  puStack_2e0 = (ulong *)0x0;
  puStack_2d8 = (ulong *)0x0;
  plVar17[0x12] = lStack_2d0;
  plVar17[0x13] = lStack_2c8;
  plVar17[0x14] = lStack_2c0;
  lStack_2d0 = 0;
  lStack_2c8 = 0;
  lStack_2c0 = 0;
  plVar17[0x15] = lStack_2b8;
  plVar17[0x16] = lStack_2b0;
  plVar17[0x17] = lStack_2a8;
  lStack_2b8 = 0;
  lStack_2b0 = 0;
  lStack_2a8 = 0;
  plVar17[0x18] = lStack_2a0;
  plVar17[0x19] = lStack_298;
  plVar17[0x1a] = lStack_290;
  lStack_2a0 = 0;
  lStack_298 = 0;
  lStack_290 = 0;
  *(undefined4 *)(plVar17 + 0x1b) = (undefined4)uStack_288;
  *(undefined4 *)((long)plVar17 + 0xdc) = uStack_288._4_4_;
  *(undefined4 *)(plVar17 + 0x1c) = (undefined4)uStack_280;
  *(undefined4 *)((long)plVar17 + 0xe4) = uStack_280._4_4_;
  plVar17[0x1d] = lStack_278;
  uStack_288 = 0;
  uStack_280 = 0;
  lStack_278 = 0;
  func_0x0651ffe0(&lStack_360);
  lVar19 = lStack_378;
  lVar23 = lStack_370;
  if (lStack_378 != 0) {
    for (; lVar19 != lVar23; lVar23 = lVar23 + -0x30) {
      if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar23 + -0x10),
                        *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_370 = lVar19;
    func_0x0412a280(lStack_378,lStack_368 - lStack_378);
  }
  return plVar17;
}


