/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f6ce0 (ELF vaddr 0xd0f6ce0)
 * Label: caller-of-callee
 * Body:  [[0d1f6ce0, 0d1f7f0e] [0d1f7f10, 0d1f7f3d] [0d1f7f40, 0d1f7f6d] [0d1f7f70, 0d1f7f9d] [0d1f7fa0, 0d1f8750] [0d1f8760, 0d1f89a3] [0d1f89b0, 0d1f89d9] [0d1f89e0, 0d1f8b19] [0d1f8b20, 0d1f9022] [0d1f9068, 0d1f9072] [0d1f9076, 0d1f9084] [0d1f90b1, 0d1f90bf] [0d1f9277, 0d1f92a3] [0d1f92ca, 0d1f92f4] [0d1f93c1, 0d1f93e6] [0d1f93ea, 0d1f9418] [0d1f942e, 0d1f9447] [0d1f945b, 0d1f947d]]
 * Ghidra: FUN_0d1f6ce0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d1f6ce0(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined7 *puVar26;
  undefined7 *puVar27;
  bool bVar28;
  bool bVar29;
  byte *pbStack_908;
  undefined *puStack_900;
  undefined8 *puStack_8f8;
  undefined8 *puStack_8f0;
  ulong uStack_8e8;
  long lStack_8e0;
  long lStack_8d8;
  long lStack_8d0;
  byte bStack_8c8;
  byte bStack_8c0;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined *puStack_8a0;
  undefined1 auStack_898 [16];
  undefined8 uStack_888;
  undefined1 auStack_880 [16];
  long lStack_870;
  byte bStack_868;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined1 auStack_848 [16];
  ulong uStack_838;
  undefined1 auStack_830 [16];
  long lStack_820;
  byte bStack_818;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined1 auStack_7f8 [16];
  long *plStack_7e8;
  undefined1 auStack_7e0 [16];
  long lStack_7d0;
  byte bStack_7c8;
  undefined1 auStack_7b8 [12];
  undefined4 uStack_7ac;
  undefined1 auStack_7a8 [16];
  undefined1 auStack_798 [16];
  undefined1 auStack_788 [16];
  ulong uStack_778;
  byte bStack_770;
  undefined7 uStack_76f;
  ulong uStack_768;
  undefined7 *puStack_760;
  byte *pbStack_758;
  undefined *puStack_750;
  undefined1 auStack_748 [16];
  long lStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  long lStack_720;
  byte *pbStack_718;
  undefined *puStack_710;
  undefined1 auStack_708 [16];
  long lStack_6f8;
  undefined1 auStack_6f0 [16];
  long lStack_6e0;
  long *plStack_6d8;
  undefined8 uStack_6d0;
  ulong uStack_6c8;
  long lStack_6c0;
  byte bStack_6b8;
  undefined7 uStack_6b7;
  ulong uStack_6b0;
  undefined7 *puStack_6a8;
  undefined8 uStack_6a0;
  char cStack_698;
  undefined1 auStack_690 [16];
  long *plStack_680;
  undefined1 auStack_678 [16];
  long *plStack_668;
  ulong uStack_658;
  ulong uStack_650;
  undefined7 *puStack_648;
  ulong uStack_638;
  ulong uStack_630;
  undefined7 *puStack_628;
  undefined8 uStack_618;
  ulong uStack_610;
  long lStack_608;
  undefined8 uStack_600;
  ulong uStack_5f8;
  long lStack_5f0;
  undefined8 uStack_5e8;
  undefined *puStack_5e0;
  undefined1 auStack_5d8 [16];
  undefined1 auStack_5c8 [16];
  undefined1 auStack_5b8 [16];
  uint uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  long lStack_578;
  long lStack_570;
  ulong uStack_568;
  ulong uStack_560;
  undefined7 *puStack_558;
  ulong *puStack_550;
  ulong *puStack_548;
  byte *pbStack_540;
  undefined *puStack_538;
  undefined1 auStack_530 [16];
  long lStack_520;
  undefined1 auStack_518 [16];
  long lStack_508;
  char cStack_500;
  byte *pbStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  long lStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  long lStack_4c0;
  byte bStack_4b8;
  undefined7 uStack_4b7;
  undefined *puStack_4b0;
  byte *pbStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 uStack_488;
  long lStack_480;
  byte *pbStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 auStack_438 [1024];
  ulong uStack_38;
  
  uStack_8b0 = param_3;
  func_0x0412d550(0xf550650);
  LOCK();
  _DAT_0f550720 = _DAT_0f550720 + 1;
  UNLOCK();
  func_0x0412d610(0xf550650);
  auStack_690._8_8_ = _DAT_0f550738;
  auStack_690._0_8_ = _DAT_0f550730;
  if ((_DAT_0f550730 == (char *)0x0) || (*_DAT_0f550730 != '\x01')) {
    uStack_6a0 = 0;
    cStack_698 = '\0';
    auStack_690 = (undefined1  [16])0x0;
    plStack_680 = (long *)0x0;
    func_0x0eee02f0(0xf550650);
    auStack_678 = (undefined1  [16])0x0;
    plStack_668 = (long *)0x0;
    bVar28 = true;
    plVar21 = (long *)0x0;
    plStack_6d8 = (long *)0x0;
  }
  else {
    bVar28 = _DAT_0f550738 == (long *)0x0;
    if (!bVar28) {
      LOCK();
      _DAT_0f550738[1] = _DAT_0f550738[1] + 1;
      UNLOCK();
    }
    plVar21 = _DAT_0f550740;
    uStack_6a0 = 0xf550650;
    cStack_698 = '\x01';
    plStack_680 = _DAT_0f550740;
    auStack_678._8_8_ = auStack_690._8_8_;
    auStack_678._0_8_ = auStack_690._0_8_;
    if ((long *)auStack_690._8_8_ != (long *)0x0) {
      LOCK();
      *(long *)(auStack_690._8_8_ + 8) = *(long *)(auStack_690._8_8_ + 8) + 1;
      UNLOCK();
    }
    plStack_6d8 = (long *)auStack_690._8_8_;
    plStack_668 = plVar21;
    if ((*(char *)auStack_690._0_8_ == '\0') &&
       (cVar15 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0128e685),
       cVar15 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  bVar29 = (*param_2 & 1) != 0;
  pbStack_908 = param_2 + 1;
  if (bVar29) {
    pbStack_908 = *(byte **)(param_2 + 0x10);
  }
  puStack_900 = (undefined *)(ulong)(*param_2 >> 1);
  if (bVar29) {
    puStack_900 = *(undefined **)(param_2 + 8);
  }
  puStack_8f8 = (undefined8 *)&UNK_013bdf66;
  puStack_8f0 = (undefined8 *)0x9;
  func_0x049151c0(auStack_438,&pbStack_908,2,0x2f);
  uVar22 = uStack_38;
  if (0xfffffffffffffff7 < uStack_38) {
    func_0x04882e30();
LAB_0d1f8ffa:
    func_0x04882e30();
    goto LAB_0d1f8fff;
  }
  if (uStack_38 < 0x17) {
    uStack_618 = CONCAT71(uStack_618._1_7_,(char)uStack_38 * '\x02');
    lVar18 = (long)&uStack_618 + 1;
    if (uStack_38 != 0) goto LAB_0d1f6f29;
  }
  else {
    uVar23 = 0x1a;
    if ((uStack_38 | 7) != 0x17) {
      uVar23 = (uStack_38 | 7) + 1;
    }
    lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
    if (lVar18 == 0) {
      func_0x0eec74c0(uVar23,0);
    }
    uStack_618 = uVar23 | 1;
    uStack_610 = uVar22;
    lStack_608 = lVar18;
LAB_0d1f6f29:
    func_0x0eee2f00(lVar18,auStack_438,uVar22);
  }
  *(undefined1 *)(lVar18 + uVar22) = 0;
  func_0x09b9dde0(&bStack_770,&uStack_618);
  if ((uStack_618 & 1) != 0) {
    func_0x0412a280(lStack_608,uStack_618 & 0xfffffffffffffffe);
  }
  bVar16 = bStack_770 & 1;
  uVar22 = (ulong)(bStack_770 >> 1);
  if (bVar16 != 0) {
    uVar22 = uStack_768;
  }
  if (uVar22 == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)param_1 = 0;
    plVar21 = plStack_6d8;
    goto joined_r0x0d1f6fe2;
  }
  puStack_548 = (ulong *)&bStack_770;
  if (bVar16 == 0) {
    puStack_558 = puStack_760;
    uStack_568 = CONCAT71(uStack_76f,bStack_770);
    uStack_560 = uStack_768;
  }
  else {
    func_0x0412e5e0(&uStack_568,puStack_760);
  }
  uVar22 = uStack_568;
  if ((uStack_568 & 1) == 0) {
    uVar23 = uStack_568 >> 1 & 0x7f;
    lVar18 = uVar23 - _DAT_0f6476a0;
    if (_DAT_0f6476a0 <= uVar23) goto LAB_0d1f7023;
LAB_0d1f7049:
    bVar29 = false;
  }
  else {
    lVar18 = uStack_560 - _DAT_0f6476a0;
    if (uStack_560 < _DAT_0f6476a0) goto LAB_0d1f7049;
LAB_0d1f7023:
    puVar26 = puStack_558;
    if ((uStack_568 & 1) == 0) {
      puVar26 = (undefined7 *)((long)&uStack_568 + 1);
    }
    iVar17 = func_0x0eee3000((long)puVar26 + lVar18,_DAT_0f647698);
    bVar29 = iVar17 == 0;
  }
  if ((uVar22 & 1) != 0) {
    func_0x0412a280(puStack_558,uStack_568 & 0xfffffffffffffffe);
  }
  if (!(bool)(bVar29 ^ 1) && plVar21 != (long *)0x0) {
    puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar19 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    uVar20 = _UNK_013022f9;
    pbStack_908 = (byte *)0x29;
    puStack_900 = (undefined *)0x26;
    puVar19[2] = _DAT_013022f1;
    puVar19[3] = uVar20;
    uVar20 = _UNK_013022e9;
    *puVar19 = _DAT_013022e1;
    puVar19[1] = uVar20;
    *(undefined8 *)((long)puVar19 + 0x1e) = 0x646c6f5f7461642e;
    *(undefined1 *)((long)puVar19 + 0x26) = 0;
    puStack_8f8 = puVar19;
    (**(code **)(*plVar21 + 0x940))(plVar21,&pbStack_908,uStack_8b0,0);
    if (((ulong)pbStack_908 & 1) != 0) {
      func_0x0412a280(puStack_8f8,(ulong)pbStack_908 & 0xfffffffffffffffe);
    }
  }
  if ((bStack_770 & 1) == 0) {
    puStack_648 = puStack_760;
    uStack_658 = CONCAT71(uStack_76f,bStack_770);
    uStack_650 = uStack_768;
  }
  else {
    func_0x0412e5e0(&uStack_658,puStack_760,uStack_768);
  }
  func_0x0d1f5ad0(&pbStack_540,&uStack_658,uStack_8b0,param_4);
  uVar22 = uStack_38;
  lVar25 = lStack_508;
  lVar18 = lStack_520;
  if (cStack_500 == '\x01') {
    uStack_778 = CONCAT71(uStack_778._1_7_,1);
  }
  else {
    pbStack_758 = pbStack_540;
    puStack_750 = puStack_538;
    auStack_7a8._0_8_ = auStack_530._0_8_;
    auStack_7a8._8_8_ = auStack_530._8_8_;
    auStack_748 = auStack_530;
    lStack_738 = lStack_520;
    auStack_530 = (undefined1  [16])0x0;
    lStack_520 = 0;
    auStack_798._8_8_ = auStack_518._0_8_;
    uStack_730 = auStack_518._0_4_;
    uStack_72c = auStack_518._4_4_;
    auStack_788._0_8_ = auStack_518._8_8_;
    uStack_728 = auStack_518._8_4_;
    uStack_724 = auStack_518._12_4_;
    lStack_720 = lStack_508;
    auStack_518 = (undefined1  [16])0x0;
    lStack_508 = 0;
    if (bVar29) {
      if (plVar21 != (long *)0x0) {
        func_0x0eede540(&uStack_8a8,&pbStack_758);
        uStack_808 = (byte *)((long)&uStack_8a8 + 1);
        uStack_800 = (undefined *)((ulong)uStack_8a8 >> 1 & 0x7f);
        if (((ulong)uStack_8a8 & 1) != 0) {
          uStack_800 = puStack_8a0;
          uStack_808 = (byte *)auStack_898._0_8_;
        }
        func_0x0470d9a0(&pbStack_908,&UNK_014a65ae,0x5e,0xd,&uStack_808);
        if (((ulong)uStack_8a8 & 1) != 0) {
          func_0x0412a280(auStack_898._0_8_,(ulong)uStack_8a8 & 0xfffffffffffffffe);
        }
        (**(code **)(*plVar21 + 0x940))(plVar21,&pbStack_908,uStack_8b0,1);
        if (((ulong)pbStack_908 & 1) != 0) {
          func_0x0412a280(puStack_8f8,(ulong)pbStack_908 & 0xfffffffffffffffe);
        }
        auStack_798._8_8_ = CONCAT44(uStack_72c,uStack_730);
        auStack_788._0_8_ = CONCAT44(uStack_724,uStack_728);
        auStack_7a8._0_8_ = auStack_748._0_8_;
        auStack_7a8._8_8_ = auStack_748._8_8_;
        lVar25 = lStack_720;
        lVar18 = lStack_738;
      }
      uStack_728 = 0;
      uStack_724 = 0;
      lStack_720 = 0;
      lStack_738 = 0;
      uStack_730 = 0;
      uStack_72c = 0;
      auStack_748 = (undefined1  [16])0x0;
      uStack_778 = uStack_778 & 0xffffffffffffff00;
      stack0xfffffffffffff850 = puStack_750;
      auStack_7b8._0_8_ = pbStack_758;
      auStack_798._0_8_ = lVar18;
      auStack_788._8_8_ = lVar25;
    }
    else {
      if (0xfffffffffffffff7 < uStack_38) goto LAB_0d1f8ffa;
      if (uStack_38 < 0x17) {
        uStack_600 = CONCAT71(uStack_600._1_7_,(char)uStack_38 * '\x02');
        lVar18 = (long)&uStack_600 + 1;
        if (uStack_38 != 0) goto LAB_0d1f73cd;
      }
      else {
        uVar23 = 0x1a;
        if ((uStack_38 | 7) != 0x17) {
          uVar23 = (uStack_38 | 7) + 1;
        }
        lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
        if (lVar18 == 0) {
          func_0x0eec74c0(uVar23,0);
        }
        uStack_600 = uVar23 | 1;
        uStack_5f8 = uVar22;
        lStack_5f0 = lVar18;
LAB_0d1f73cd:
        func_0x0eee2f00(lVar18,auStack_438,uVar22);
      }
      *(undefined1 *)(lVar18 + uVar22) = 0;
      func_0x09b9e380(&bStack_6b8,&uStack_600);
      puStack_550 = (ulong *)&bStack_6b8;
      if ((uStack_600 & 1) != 0) {
        func_0x0412a280(lStack_5f0,uStack_600 & 0xfffffffffffffffe);
      }
      uVar22 = uStack_6b0;
      bVar16 = bStack_6b8;
      uVar23 = (ulong)(bStack_6b8 >> 1);
      if ((bStack_6b8 & 1) != 0) {
        uVar23 = uStack_6b0;
      }
      if (uVar23 == 0) {
LAB_0d1f7560:
        if (plVar21 != (long *)0x0) {
          func_0x0eede540(&uStack_8a8,&pbStack_758);
          uStack_808 = (byte *)((long)&uStack_8a8 + 1);
          uStack_800 = (undefined *)((ulong)uStack_8a8 >> 1 & 0x7f);
          if (((ulong)uStack_8a8 & 1) != 0) {
            uStack_800 = puStack_8a0;
            uStack_808 = (byte *)auStack_898._0_8_;
          }
          func_0x0470d9a0(&pbStack_908,&UNK_012b5aa7,0x70,0xd,&uStack_808);
          if (((ulong)uStack_8a8 & 1) != 0) {
            func_0x0412a280(auStack_898._0_8_,(ulong)uStack_8a8 & 0xfffffffffffffffe);
          }
          (**(code **)(*plVar21 + 0x940))(plVar21,&pbStack_908,uStack_8b0,1);
          if (((ulong)pbStack_908 & 1) != 0) {
            func_0x0412a280(puStack_8f8,(ulong)pbStack_908 & 0xfffffffffffffffe);
          }
        }
        auStack_788._8_8_ = lStack_720;
        auStack_798._0_8_ = lStack_738;
        auStack_7a8 = auStack_748;
        auStack_748 = ZEXT816(0);
        lStack_738 = 0;
        auStack_798._12_4_ = uStack_72c;
        auStack_798._8_4_ = uStack_730;
        auStack_788._4_4_ = uStack_724;
        auStack_788._0_4_ = uStack_728;
        uStack_730 = 0;
        uStack_72c = 0;
        uStack_728 = 0;
        uStack_724 = 0;
        lStack_720 = 0;
        uStack_778 = uStack_778 & 0xffffffffffffff00;
        stack0xfffffffffffff850 = puStack_750;
        auStack_7b8._0_8_ = pbStack_758;
      }
      else {
        if ((bStack_770 & 1) == 0) {
          uStack_768 = (ulong)(bStack_770 >> 1);
        }
        if (uVar23 == uStack_768) {
          puVar26 = puStack_760;
          if ((bStack_770 & 1) == 0) {
            puVar26 = &uStack_76f;
          }
          puVar27 = puStack_6a8;
          if ((bStack_6b8 & 1) == 0) {
            puVar27 = &uStack_6b7;
          }
          iVar17 = func_0x0eee3000(puVar27,puVar26);
          if (iVar17 == 0) goto LAB_0d1f7560;
        }
        if ((bVar16 & 1) == 0) {
          puStack_628 = puStack_6a8;
          uStack_638 = CONCAT71(uStack_6b7,bStack_6b8);
          uStack_630 = uStack_6b0;
        }
        else {
          func_0x0412e5e0(&uStack_638,puStack_6a8,uVar22);
        }
        func_0x0d1f5ad0(&uStack_808,&uStack_638,uStack_8b0,param_4);
        lVar24 = lStack_720;
        uVar13 = uStack_724;
        uVar12 = uStack_728;
        uVar11 = uStack_72c;
        uVar10 = uStack_730;
        lVar25 = lStack_738;
        auVar9 = auStack_748;
        lVar18 = lStack_7d0;
        auVar8 = auStack_7e0;
        plVar1 = plStack_7e8;
        if (bStack_7c8 == 1) {
          bStack_868 = bStack_7c8;
        }
        else {
          lStack_598 = auStack_7f8._0_8_;
          lStack_590 = auStack_7f8._8_8_;
          uStack_5e8 = uStack_808;
          puStack_5e0 = uStack_800;
          auStack_7f8 = (undefined1  [16])0x0;
          plStack_7e8 = (long *)0x0;
          uStack_580 = auStack_7e0._0_4_;
          uStack_57c = auStack_7e0._4_4_;
          auStack_7e0 = (undefined1  [16])0x0;
          lStack_7d0 = 0;
          uStack_858 = pbStack_758;
          uStack_850 = puStack_750;
          auStack_748 = (undefined1  [16])0x0;
          lStack_738 = 0;
          uStack_730 = 0;
          uStack_72c = 0;
          uStack_728 = 0;
          uStack_724 = 0;
          lStack_720 = 0;
          pbStack_718 = uStack_808;
          puStack_710 = uStack_800;
          auStack_5d8 = (undefined1  [16])0x0;
          auStack_5c8 = (undefined1  [16])0x0;
          auStack_5b8 = (undefined1  [16])0x0;
          pbStack_4f8 = pbStack_758;
          puStack_4f0 = puStack_750;
          puStack_4e8 = auVar9._0_8_;
          puStack_4e0 = auVar9._8_8_;
          lStack_4d8 = lVar25;
          auStack_848 = (undefined1  [16])0x0;
          uStack_838 = 0;
          uStack_4d0 = uVar10;
          uStack_4cc = uVar11;
          uStack_4c8 = CONCAT44(uVar13,uVar12);
          lStack_4c0 = lVar24;
          auStack_830 = (undefined1  [16])0x0;
          lStack_820 = 0;
          uStack_5a8 = (uint)uStack_808;
          uStack_5a4 = uStack_808._4_4_;
          uStack_5a0 = (undefined4)uStack_800;
          uStack_59c = uStack_800._4_4_;
          lStack_588 = (long)plVar1;
          auStack_708 = (undefined1  [16])0x0;
          lStack_6f8 = 0;
          lStack_578 = auVar8._8_8_;
          lStack_570 = lVar18;
          auStack_6f0 = (undefined1  [16])0x0;
          lStack_6e0 = 0;
          pbStack_908 = (byte *)0x8d213925abf529f1;
          puStack_900 = &UNK_0140f690;
          puStack_8f8 = (undefined8 *)0x1;
          puStack_8f0 = (undefined8 *)CONCAT44(puStack_8f0._4_4_,0x166);
          uStack_8e8 = uStack_8e8 & 0xffffffffffffff00;
          bStack_8c0 = 0;
          func_0x0d224a40(&bStack_4b8,&pbStack_4f8,&uStack_5a8,&pbStack_908);
          if ((bStack_8c0 == 1) && ((uStack_8e8 & 1) != 0)) {
            func_0x0412a280(lStack_8d8,uStack_8e8 & 0xfffffffffffffffe);
          }
          lVar18 = CONCAT44(uStack_57c,uStack_580);
          if (lVar18 != 0) {
            lVar24 = lStack_578;
            lVar25 = lVar18;
            if (lVar18 != lStack_578) {
              do {
                lVar24 = lVar24 + -0x40;
                func_0x048b3e80(lVar24);
              } while (lVar24 != lVar18);
              lVar25 = CONCAT44(uStack_57c,uStack_580);
            }
            lStack_578 = lVar18;
            func_0x0412a280(lVar25,lStack_570 - lVar25);
          }
          lVar25 = lStack_598;
          lVar18 = lStack_590;
          if (lStack_598 != 0) {
            for (; lVar25 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            lStack_590 = lVar25;
            func_0x0412a280(lStack_598,lStack_588 - lStack_598);
          }
          lVar18 = CONCAT44(uStack_4cc,uStack_4d0);
          if (lVar18 != 0) {
            lVar24 = uStack_4c8;
            lVar25 = lVar18;
            if (lVar18 != uStack_4c8) {
              do {
                lVar24 = lVar24 + -0x40;
                func_0x048b3e80(lVar24);
              } while (lVar24 != lVar18);
              lVar25 = CONCAT44(uStack_4cc,uStack_4d0);
            }
            uStack_4c8 = lVar18;
            func_0x0412a280(lVar25,lStack_4c0 - lVar25);
          }
          puVar14 = puStack_4e8;
          puVar3 = puStack_4e0;
          if (puStack_4e8 != (undefined *)0x0) {
            for (; puVar14 != puVar3; puVar3 = puVar3 + -0x50) {
              if ((puVar3[-8] == '\x01') && ((puVar3[-0x30] & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(puVar3 + -0x20),
                                *(ulong *)(puVar3 + -0x30) & 0xfffffffffffffffe);
              }
            }
            puStack_4e0 = puVar14;
            func_0x0412a280(puStack_4e8,lStack_4d8 - (long)puStack_4e8);
          }
          uVar20 = auStack_6f0._0_8_;
          if (auStack_6f0._0_8_ != 0) {
            lVar18 = auStack_6f0._8_8_;
            while (uVar20 != lVar18) {
              lVar18 = lVar18 + -0x40;
              func_0x048b3e80(lVar18);
            }
            auStack_6f0._8_8_ = uVar20;
            func_0x0412a280(auStack_6f0._0_8_,lStack_6e0 - auStack_6f0._0_8_);
          }
          uVar20 = auStack_708._0_8_;
          if (auStack_708._0_8_ != 0) {
            for (lVar18 = auStack_708._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            auStack_708._8_8_ = uVar20;
            func_0x0412a280(uVar20,lStack_6f8 - uVar20);
          }
          uVar20 = auStack_830._0_8_;
          if (auStack_830._0_8_ != 0) {
            lVar18 = auStack_830._8_8_;
            if (auStack_830._0_8_ != auStack_830._8_8_) {
              do {
                lVar18 = lVar18 + -0x40;
                func_0x048b3e80(lVar18);
              } while (lVar18 != uVar20);
            }
            func_0x0412a280(auStack_830._0_8_,lStack_820 - auStack_830._0_8_);
          }
          uVar20 = auStack_848._0_8_;
          if (auStack_848._0_8_ != 0) {
            for (lVar18 = auStack_848._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            func_0x0412a280(uVar20,uStack_838 - uVar20);
          }
          if (plVar21 != (long *)0x0) {
            func_0x0eede540(&uStack_858,&bStack_4b8);
            pbStack_718 = (byte *)((long)&uStack_858 + 1);
            puStack_710 = (undefined *)((ulong)uStack_858 >> 1 & 0x7f);
            if (((ulong)uStack_858 & 1) != 0) {
              puStack_710 = uStack_850;
              pbStack_718 = (byte *)auStack_848._0_8_;
            }
            func_0x0470d9a0(&pbStack_908,&UNK_014248f0,0x70,0xd,&pbStack_718);
            if (((ulong)uStack_858 & 1) != 0) {
              func_0x0412a280(auStack_848._0_8_,(ulong)uStack_858 & 0xfffffffffffffffe);
            }
            (**(code **)(*plVar21 + 0x940))(plVar21,&pbStack_908,uStack_8b0,1);
            if (((ulong)pbStack_908 & 1) != 0) {
              func_0x0412a280(puStack_8f8,(ulong)pbStack_908 & 0xfffffffffffffffe);
            }
          }
          uStack_8a8 = (byte *)CONCAT71(uStack_4b7,bStack_4b8);
          puStack_8a0 = puStack_4b0;
          bStack_868 = 0;
          auStack_898._8_8_ = uStack_4a0;
          auStack_898._0_8_ = pbStack_4a8;
          uStack_888 = (long *)CONCAT44(uStack_494,uStack_498);
          auStack_880._4_4_ = uStack_48c;
          auStack_880._0_4_ = uStack_490;
          auStack_880._8_8_ = uStack_488;
          lStack_870 = lStack_480;
          uVar20 = auStack_5c8._8_8_;
          if (auStack_5c8._8_8_ != 0) {
            lVar18 = auStack_5b8._0_8_;
            if (auStack_5c8._8_8_ != auStack_5b8._0_8_) {
              do {
                lVar18 = lVar18 + -0x40;
                func_0x048b3e80(lVar18);
              } while (lVar18 != uVar20);
            }
            auStack_5b8._0_8_ = uVar20;
            func_0x0412a280(auStack_5c8._8_8_,auStack_5b8._8_8_ - auStack_5c8._8_8_);
          }
          uVar20 = auStack_5d8._0_8_;
          if (auStack_5d8._0_8_ != 0) {
            for (lVar18 = auStack_5d8._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            auStack_5d8._8_8_ = uVar20;
            func_0x0412a280(uVar20,auStack_5c8._0_8_ - uVar20);
          }
        }
        uVar20 = auStack_7e0._0_8_;
        if (bStack_7c8 == 0) {
          if (auStack_7e0._0_8_ != 0) {
            lVar18 = auStack_7e0._8_8_;
            while (uVar20 != lVar18) {
              lVar18 = lVar18 + -0x40;
              func_0x048b3e80(lVar18);
            }
            auStack_7e0._8_8_ = uVar20;
            func_0x0412a280(auStack_7e0._0_8_,lStack_7d0 - auStack_7e0._0_8_);
          }
          uVar20 = auStack_7f8._0_8_;
          if (auStack_7f8._0_8_ != 0) {
            for (lVar18 = auStack_7f8._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            auStack_7f8._8_8_ = uVar20;
            func_0x0412a280(uVar20,(long)plStack_7e8 - uVar20);
          }
        }
        if ((uStack_638 & 1) != 0) {
          func_0x0412a280(puStack_628,uStack_638 & 0xfffffffffffffffe);
        }
        plVar1 = uStack_888;
        puVar19 = _UNK_0f45ad40;
        puVar3 = _UNK_0f45ad30;
        pbVar4 = _DAT_0f45ad28;
        bStack_7c8 = bStack_868;
        if (bStack_868 == 0) {
          uVar20 = auStack_898._8_8_;
          uStack_808 = uStack_8a8;
          uStack_800 = puStack_8a0;
          auStack_7f8._0_8_ = auStack_898._0_8_;
          auStack_7f8._0_8_ = auStack_898._0_8_;
          auStack_7f8._8_8_ = auStack_898._8_8_;
          plStack_7e8 = uStack_888;
          auStack_898 = ZEXT816(0);
          uStack_888 = (long *)0x0;
          auStack_7e0._0_8_ = auStack_880._0_8_;
          auStack_7e0._8_8_ = auStack_880._8_8_;
          lStack_7d0 = lStack_870;
          auStack_880 = ZEXT816(0);
          lStack_870 = 0;
          puStack_8f8 = _DAT_0f45ad38;
          puStack_8f0 = _UNK_0f45ad40;
          pbStack_908 = _DAT_0f45ad28;
          puStack_900 = _UNK_0f45ad30;
          uStack_8e8 = uStack_8e8 & 0xffffffffffffff00;
          bStack_8c0 = 0;
          if ((ulong)uVar20 < plVar1) {
            *(undefined8 **)(uVar20 + 0x10) = _DAT_0f45ad38;
            *(undefined8 **)(uVar20 + 0x18) = puVar19;
            *(byte **)uVar20 = pbVar4;
            *(undefined **)(uVar20 + 8) = puVar3;
            *(undefined1 *)(uVar20 + 0x20) = 0;
            *(undefined1 *)(uVar20 + 0x48) = 0;
            auStack_7a8._8_8_ = (long *)(uVar20 + 0x50);
          }
          else {
            auStack_7f8._8_8_ = func_0x0489d2c0(auStack_7f8,&pbStack_908);
            auStack_7a8._8_8_ = auStack_7f8._8_8_;
            if (((bStack_8c0 & 1) != 0) && ((uStack_8e8 & 1) != 0)) {
              func_0x0412a280(lStack_8d8,uStack_8e8 & 0xfffffffffffffffe);
              auStack_7a8._8_8_ = auStack_7f8._8_8_;
            }
          }
          auStack_788._8_8_ = lStack_7d0;
          auStack_788._0_8_ = auStack_7e0._8_8_;
          auStack_798._8_8_ = auStack_7e0._0_8_;
          auStack_798._0_8_ = plStack_7e8;
          auStack_7a8._0_8_ = auStack_7f8._0_8_;
          auStack_7f8 = (undefined1  [16])0x0;
          plStack_7e8 = (long *)0x0;
          auStack_7e0 = (undefined1  [16])0x0;
          lStack_7d0 = 0;
          uStack_778 = uStack_778 & 0xffffffffffffff00;
          stack0xfffffffffffff850 = uStack_800;
          auStack_7b8._0_8_ = uStack_808;
        }
        else {
          if (plVar21 != (long *)0x0) {
            func_0x0eede540(&uStack_858,&pbStack_758);
            pbStack_718 = (byte *)((long)&uStack_858 + 1);
            puStack_710 = (undefined *)((ulong)uStack_858 >> 1 & 0x7f);
            if (((ulong)uStack_858 & 1) != 0) {
              puStack_710 = uStack_850;
              pbStack_718 = (byte *)auStack_848._0_8_;
            }
            func_0x0470d9a0(&pbStack_908,&UNK_0125032a,0x4f,0xd,&pbStack_718);
            if (((ulong)uStack_858 & 1) != 0) {
              func_0x0412a280(auStack_848._0_8_,(ulong)uStack_858 & 0xfffffffffffffffe);
            }
            (**(code **)(*plVar21 + 0x940))(plVar21,&pbStack_908,uStack_8b0,0);
            if (((ulong)pbStack_908 & 1) != 0) {
              func_0x0412a280(puStack_8f8,(ulong)pbStack_908 & 0xfffffffffffffffe);
            }
          }
          if (0xfffffffffffffff7 < uStack_38) {
LAB_0d1f8fff:
            uVar20 = func_0x04882e30();
            if ((uStack_5a8 & 1) != 0) {
              func_0x0412a280(lStack_598,CONCAT44(uStack_5a4,uStack_5a8) & 0xfffffffffffffffe);
            }
            func_0x048e6d60(&pbStack_718);
            func_0x0ee38090(&pbStack_908);
            if (bStack_7c8 == 0) {
              func_0x05ff1910(&uStack_808);
            }
            if (bStack_868 == 0) {
              func_0x05ff1910(&uStack_8a8);
            }
            if ((bStack_6b8 & 1) != 0) {
              func_0x0412a280(puStack_550[2],*puStack_550 & 0xfffffffffffffffe);
            }
            func_0x048e6d60(&pbStack_758);
            if (cStack_500 == '\0') {
              func_0x05ff1910(&pbStack_540);
            }
            if ((uStack_658 & 1) != 0) {
              func_0x0412a280(puStack_648,uStack_658 & 0xfffffffffffffffe);
            }
            if ((bStack_770 & 1) != 0) {
              func_0x0412a280(puStack_548[2],*puStack_548 & 0xfffffffffffffffe);
            }
            func_0x0488d780(auStack_678);
            func_0x0489d550(&uStack_6a0);
            func_0x0eee2d70(uVar20);
            pcVar2 = (code *)swi(3);
            plVar21 = (long *)(*pcVar2)();
            return plVar21;
          }
          if (uStack_38 < 0x17) {
            uStack_6d0 = CONCAT71(uStack_6d0._1_7_,(char)uStack_38 * '\x02');
            lVar18 = (long)&uStack_6d0 + 1;
            if (uStack_38 != 0) goto LAB_0d1f81b6;
          }
          else {
            uVar22 = 0x1a;
            if ((uStack_38 | 7) != 0x17) {
              uVar22 = (uStack_38 | 7) + 1;
            }
            lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
            if (lVar18 == 0) {
              func_0x0eec74c0(uVar22,0);
            }
            uStack_6d0 = uVar22 | 1;
            uStack_6c8 = uStack_38;
            lStack_6c0 = lVar18;
LAB_0d1f81b6:
            func_0x0eee2f00(lVar18,auStack_438,uStack_38);
          }
          *(undefined1 *)(lVar18 + uStack_38) = 0;
          FUN_09b9ee60(&pbStack_908,&uStack_6d0);
          if ((uStack_6d0 & 1) != 0) {
            func_0x0412a280(lStack_6c0,uStack_6d0 & 0xfffffffffffffffe);
          }
          if (bStack_8c8 == 0) {
            pbStack_718 = pbStack_908;
            puStack_710 = puStack_900;
            auStack_708 = (undefined1  [16])0x0;
            lStack_6f8 = 0;
            func_0x0489ad20(auStack_708,puStack_8f8,puStack_8f0,
                            ((long)puStack_8f0 - (long)puStack_8f8 >> 4) * -0x3333333333333333);
            auStack_6f0 = (undefined1  [16])0x0;
            lStack_6e0 = 0;
            func_0x05d8b660(auStack_6f0,lStack_8e0,lStack_8d8,lStack_8d8 - lStack_8e0 >> 6);
            if (plVar21 != (long *)0x0) {
              func_0x0eede540(&bStack_4b8,&pbStack_758);
              func_0x0eede540(&uStack_5e8,&pbStack_718);
              pbStack_4f8 = (byte *)&uStack_4b7;
              puStack_4f0 = (undefined *)(ulong)(bStack_4b8 >> 1);
              if ((bStack_4b8 & 1) != 0) {
                puStack_4f0 = puStack_4b0;
                pbStack_4f8 = pbStack_4a8;
              }
              puStack_4e8 = (undefined *)((long)&uStack_5e8 + 1);
              puStack_4e0 = (undefined *)((ulong)uStack_5e8 >> 1 & 0x7f);
              if (((ulong)uStack_5e8 & 1) != 0) {
                puStack_4e0 = puStack_5e0;
                puStack_4e8 = (undefined *)auStack_5d8._0_8_;
              }
              func_0x0470d9a0(&uStack_5a8,&UNK_01338661,0x7c,0xdd,&pbStack_4f8);
              if (((ulong)uStack_5e8 & 1) != 0) {
                func_0x0412a280(auStack_5d8._0_8_,(ulong)uStack_5e8 & 0xfffffffffffffffe);
              }
              if ((bStack_4b8 & 1) != 0) {
                func_0x0412a280(pbStack_4a8,CONCAT71(uStack_4b7,bStack_4b8) & 0xfffffffffffffffe);
              }
              (**(code **)(*plVar21 + 0x940))(plVar21,&uStack_5a8,uStack_8b0,0);
              if ((uStack_5a8 & 1) != 0) {
                func_0x0412a280(lStack_598,CONCAT44(uStack_5a4,uStack_5a8) & 0xfffffffffffffffe);
              }
            }
            uVar20 = auStack_6f0._0_8_;
            if (auStack_6f0._0_8_ != 0) {
              lVar18 = auStack_6f0._8_8_;
              while (uVar20 != lVar18) {
                lVar18 = lVar18 + -0x40;
                func_0x048b3e80(lVar18);
              }
              auStack_6f0._8_8_ = uVar20;
              func_0x0412a280(auStack_6f0._0_8_,lStack_6e0 - auStack_6f0._0_8_);
            }
            uVar20 = auStack_708._0_8_;
            if (auStack_708._0_8_ != 0) {
              for (lVar18 = auStack_708._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
                if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                  *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
                }
              }
              auStack_708._8_8_ = uVar20;
              func_0x0412a280(auStack_708._0_8_,lStack_6f8 - auStack_708._0_8_);
            }
          }
          bStack_818 = bStack_8c8;
          if ((bStack_8c8 & 1) == 0) {
            uStack_858 = pbStack_908;
            uStack_850 = puStack_900;
            auStack_848._0_8_ = puStack_8f8;
            auStack_848._8_8_ = puStack_8f0;
            uStack_838 = uStack_8e8;
            puStack_8f8 = (undefined8 *)0x0;
            puStack_8f0 = (undefined8 *)0x0;
            uStack_8e8 = 0;
            auStack_830._0_8_ = lStack_8e0;
            auStack_830._8_8_ = lStack_8d8;
            lStack_820 = lStack_8d0;
            lStack_8e0 = 0;
            lStack_8d8 = 0;
            lStack_8d0 = 0;
            func_0x0d224980(&uStack_858);
            auStack_788._8_8_ = lStack_820;
            auStack_788._0_8_ = auStack_830._8_8_;
            auStack_798._8_8_ = auStack_830._0_8_;
            auStack_798._0_8_ = uStack_838;
            auStack_7a8._8_8_ = auStack_848._8_8_;
            auStack_7a8._0_8_ = auStack_848._0_8_;
            pbStack_478 = uStack_858;
            puStack_470 = uStack_850;
            auStack_848 = ZEXT816(0);
            uStack_838 = 0;
            auStack_830 = ZEXT816(0);
            lStack_820 = 0;
            uStack_448 = 0;
            uStack_440 = 0;
            uStack_458 = 0;
            uStack_450 = 0;
            uStack_468 = 0;
            uStack_460 = 0;
            uStack_778 = uStack_778 & 0xffffffffffffff00;
            auStack_7b8._8_4_ = (undefined4)uStack_850;
            auStack_7b8._0_8_ = uStack_858;
            uStack_7ac = uStack_850._4_4_;
            func_0x048e6d60(&pbStack_478);
          }
          else {
            auStack_788 = (undefined1  [16])0x0;
            auStack_798 = (undefined1  [16])0x0;
            auStack_7a8 = (undefined1  [16])0x0;
            _auStack_7b8 = (undefined1  [16])0x0;
            uStack_778 = 1;
          }
          uVar20 = auStack_830._0_8_;
          if ((bStack_818 & 1) == 0) {
            if (auStack_830._0_8_ != 0) {
              lVar18 = auStack_830._8_8_;
              while (uVar20 != lVar18) {
                lVar18 = lVar18 + -0x40;
                func_0x048b3e80(lVar18);
              }
              auStack_830._8_8_ = uVar20;
              func_0x0412a280(auStack_830._0_8_,lStack_820 - auStack_830._0_8_);
            }
            uVar20 = auStack_848._0_8_;
            if (auStack_848._0_8_ != 0) {
              for (lVar18 = auStack_848._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
                if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                  *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
                }
              }
              auStack_848._8_8_ = uVar20;
              func_0x0412a280(auStack_848._0_8_,uStack_838 - auStack_848._0_8_);
            }
          }
          lVar18 = lStack_8e0;
          if (bStack_8c8 == 0) {
            lVar25 = lStack_8d8;
            if (lStack_8e0 != 0) {
              while (lVar18 != lVar25) {
                func_0x048b3e80(lVar25 + -0x40);
                lVar25 = lVar25 + -0x40;
              }
              lStack_8d8 = lVar18;
              func_0x0412a280(lStack_8e0,lStack_8d0 - lStack_8e0);
            }
            puVar5 = puStack_8f8;
            puVar19 = puStack_8f0;
            if (puStack_8f8 != (undefined8 *)0x0) {
              for (; puVar5 != puVar19; puVar19 = puVar19 + -10) {
                if ((*(char *)(puVar19 + -1) == '\x01') && ((*(byte *)(puVar19 + -6) & 1) != 0)) {
                  func_0x0412a280(puVar19[-4],puVar19[-6] & 0xfffffffffffffffe);
                }
              }
              puStack_8f0 = puVar5;
              func_0x0412a280(puStack_8f8,uStack_8e8 - (long)puStack_8f8);
            }
          }
        }
        uVar20 = auStack_7e0._0_8_;
        if (bStack_7c8 == 0) {
          if (auStack_7e0._0_8_ != 0) {
            lVar18 = auStack_7e0._8_8_;
            while (uVar20 != lVar18) {
              lVar18 = lVar18 + -0x40;
              func_0x048b3e80(lVar18);
            }
            auStack_7e0._8_8_ = uVar20;
            func_0x0412a280(auStack_7e0._0_8_,lStack_7d0 - auStack_7e0._0_8_);
          }
          uVar20 = auStack_7f8._0_8_;
          if (auStack_7f8._0_8_ != 0) {
            for (lVar18 = auStack_7f8._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            auStack_7f8._8_8_ = uVar20;
            func_0x0412a280(auStack_7f8._0_8_,(long)plStack_7e8 - auStack_7f8._0_8_);
          }
        }
        uVar20 = auStack_880._0_8_;
        if (bStack_868 == 0) {
          if (auStack_880._0_8_ != 0) {
            lVar18 = auStack_880._8_8_;
            while (uVar20 != lVar18) {
              lVar18 = lVar18 + -0x40;
              func_0x048b3e80(lVar18);
            }
            auStack_880._8_8_ = uVar20;
            func_0x0412a280(auStack_880._0_8_,lStack_870 - auStack_880._0_8_);
          }
          uVar20 = auStack_898._0_8_;
          if (auStack_898._0_8_ != 0) {
            for (lVar18 = auStack_898._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
              if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
                func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                                *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
              }
            }
            auStack_898._8_8_ = uVar20;
            func_0x0412a280(uVar20,(long)uStack_888 - uVar20);
          }
        }
      }
      if ((bStack_6b8 & 1) != 0) {
        func_0x0412a280(puStack_6a8,CONCAT71(uStack_6b7,bStack_6b8) & 0xfffffffffffffffe);
      }
      uVar11 = uStack_72c;
      uVar10 = uStack_730;
      lVar18 = CONCAT44(uStack_72c,uStack_730);
      if (lVar18 != 0) {
        lVar25 = CONCAT44(uStack_724,uStack_728);
        if (lVar18 != lVar25) {
          do {
            lVar25 = lVar25 + -0x40;
            func_0x048b3e80(lVar25);
          } while (lVar25 != lVar18);
          lVar18 = CONCAT44(uStack_72c,uStack_730);
        }
        uStack_728 = uVar10;
        uStack_724 = uVar11;
        func_0x0412a280(lVar18,lStack_720 - lVar18);
      }
    }
    uVar20 = auStack_748._0_8_;
    if (auStack_748._0_8_ != 0) {
      for (lVar18 = auStack_748._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
        if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                          *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
        }
      }
      auStack_748._8_8_ = uVar20;
      func_0x0412a280(auStack_748._0_8_,lStack_738 - auStack_748._0_8_);
    }
  }
  uVar20 = auStack_518._0_8_;
  if (cStack_500 == '\0') {
    if (auStack_518._0_8_ != 0) {
      lVar18 = auStack_518._8_8_;
      while (uVar20 != lVar18) {
        lVar18 = lVar18 + -0x40;
        func_0x048b3e80(lVar18);
      }
      auStack_518._8_8_ = uVar20;
      func_0x0412a280(auStack_518._0_8_,lStack_508 - auStack_518._0_8_);
    }
    uVar20 = auStack_530._0_8_;
    if (auStack_530._0_8_ != 0) {
      for (lVar18 = auStack_530._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
        if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                          *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
        }
      }
      auStack_530._8_8_ = uVar20;
      func_0x0412a280(uVar20,lStack_520 - uVar20);
    }
  }
  if ((uStack_658 & 1) != 0) {
    func_0x0412a280(puStack_648,uStack_658 & 0xfffffffffffffffe);
  }
  puVar19 = _UNK_0f45ad80;
  puVar3 = _UNK_0f45ad70;
  pbVar4 = _DAT_0f45ad68;
  bStack_868 = (byte)uStack_778;
  if ((byte)uStack_778 == 0) {
    uVar20 = auStack_7a8._8_8_;
    uStack_8a8 = (byte *)auStack_7b8._0_8_;
    puStack_8a0 = stack0xfffffffffffff850;
    auStack_898._0_8_ = auStack_7a8._0_8_;
    auStack_898._0_8_ = auStack_7a8._0_8_;
    auStack_898._8_8_ = auStack_7a8._8_8_;
    uVar6 = auStack_798._0_8_;
    uStack_888 = (long *)auStack_798._0_8_;
    auStack_7a8 = ZEXT816(0);
    auStack_880._0_8_ = auStack_798._8_8_;
    auStack_880._8_8_ = auStack_788._0_8_;
    lStack_870 = auStack_788._8_8_;
    auStack_798 = ZEXT816(0);
    auStack_788 = ZEXT816(0);
    puStack_8f8 = _DAT_0f45ad78;
    puStack_8f0 = _UNK_0f45ad80;
    pbStack_908 = _DAT_0f45ad68;
    puStack_900 = _UNK_0f45ad70;
    uStack_8e8 = uStack_8e8 & 0xffffffffffffff00;
    bStack_8c0 = 0;
    if ((ulong)uVar20 < (ulong)uVar6) {
      *(undefined8 **)(uVar20 + 0x10) = _DAT_0f45ad78;
      *(undefined8 **)(uVar20 + 0x18) = puVar19;
      *(byte **)uVar20 = pbVar4;
      *(undefined **)(uVar20 + 8) = puVar3;
      *(undefined1 *)(uVar20 + 0x20) = 0;
      *(undefined1 *)(uVar20 + 0x48) = 0;
      plVar21 = (long *)(uVar20 + 0x50);
    }
    else {
      auStack_898._8_8_ = func_0x0489d2c0(auStack_898,&pbStack_908);
      plVar21 = (long *)auStack_898._8_8_;
      if (((bStack_8c0 & 1) != 0) && ((uStack_8e8 & 1) != 0)) {
        func_0x0412a280(lStack_8d8,uStack_8e8 & 0xfffffffffffffffe);
        plVar21 = (long *)auStack_898._8_8_;
      }
    }
    lVar18 = lStack_870;
    uVar7 = auStack_880._8_8_;
    uVar6 = auStack_880._0_8_;
    plVar1 = uStack_888;
    uVar20 = auStack_898._0_8_;
    auStack_898 = (undefined1  [16])0x0;
    uStack_888 = (long *)0x0;
    auStack_880 = (undefined1  [16])0x0;
    lStack_870 = 0;
    *param_1 = (long)uStack_8a8;
    param_1[1] = (long)puStack_8a0;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[2] = uVar20;
    param_1[3] = (long)plVar21;
    param_1[4] = (long)plVar1;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = lVar18;
    plVar21 = plStack_6d8;
    if ((bStack_868 & 1) == 0) goto LAB_0d1f8cd3;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined1 *)param_1 = 1;
    plVar21 = plStack_6d8;
    if ((uStack_778 & 1) == 0) {
LAB_0d1f8cd3:
      plVar21 = plStack_6d8;
      uVar20 = auStack_880._0_8_;
      if (auStack_880._0_8_ != 0) {
        lVar18 = auStack_880._8_8_;
        while (uVar20 != lVar18) {
          lVar18 = lVar18 + -0x40;
          func_0x048b3e80(lVar18);
        }
        auStack_880._8_8_ = uVar20;
        func_0x0412a280(auStack_880._0_8_,lStack_870 - auStack_880._0_8_);
      }
      uVar20 = auStack_898._0_8_;
      if (auStack_898._0_8_ != 0) {
        for (lVar18 = auStack_898._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
          if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                            *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
          }
        }
        auStack_898._8_8_ = uVar20;
        func_0x0412a280(auStack_898._0_8_,(long)uStack_888 - auStack_898._0_8_);
      }
    }
  }
  if ((byte)uStack_778 == '\0') {
    uVar20 = auStack_798._8_8_;
    if (auStack_798._8_8_ != 0) {
      lVar18 = auStack_788._0_8_;
      if (auStack_798._8_8_ != auStack_788._0_8_) {
        do {
          lVar18 = lVar18 + -0x40;
          func_0x048b3e80(lVar18);
        } while (lVar18 != uVar20);
      }
      auStack_788._0_8_ = uVar20;
      func_0x0412a280(auStack_798._8_8_,auStack_788._8_8_ - auStack_798._8_8_);
    }
    uVar20 = auStack_7a8._0_8_;
    if (auStack_7a8._0_8_ != 0) {
      for (lVar18 = auStack_7a8._8_8_; uVar20 != lVar18; lVar18 = lVar18 + -0x50) {
        if ((*(char *)(lVar18 + -8) == '\x01') && ((*(byte *)(lVar18 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar18 + -0x20),
                          *(ulong *)(lVar18 + -0x30) & 0xfffffffffffffffe);
        }
      }
      auStack_7a8._8_8_ = uVar20;
      func_0x0412a280(auStack_7a8._0_8_,auStack_798._0_8_ - auStack_7a8._0_8_);
    }
  }
  bVar16 = bStack_770 & 1;
joined_r0x0d1f6fe2:
  if (bVar16 != 0) {
    func_0x0412a280(puStack_760,CONCAT71(uStack_76f,bStack_770) & 0xfffffffffffffffe);
  }
  auStack_678 = (undefined1  [16])0x0;
  if (bVar28) {
    plStack_668 = (long *)0x0;
  }
  else {
    LOCK();
    plVar1 = plVar21 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
    uVar20 = auStack_678._8_8_;
    plStack_668 = (long *)0x0;
    if ((long *)auStack_678._8_8_ != (long *)0x0) {
      LOCK();
      plVar21 = (long *)(auStack_678._8_8_ + 8);
      lVar18 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_678._8_8_ + 0x10))(auStack_678._8_8_);
        func_0x0412c2d0(uVar20);
      }
    }
  }
  uVar20 = auStack_690._8_8_;
  auStack_690 = (undefined1  [16])0x0;
  if ((long *)uVar20 == (long *)0x0) {
    plStack_680 = (long *)0x0;
  }
  else {
    LOCK();
    plVar21 = (long *)(uVar20 + 8);
    lVar18 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)uVar20 + 0x10))(uVar20);
      func_0x0412c2d0(uVar20);
    }
    uVar20 = auStack_690._8_8_;
    plStack_680 = (long *)0x0;
    if ((long *)auStack_690._8_8_ != (long *)0x0) {
      LOCK();
      plVar21 = (long *)(auStack_690._8_8_ + 8);
      lVar18 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_690._8_8_ + 0x10))(auStack_690._8_8_);
        func_0x0412c2d0(uVar20);
      }
    }
  }
  if (cStack_698 == '\x01') {
    func_0x0eee02f0(uStack_6a0);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x13022e1  level.dat missing, found level.dat_old
 * 0x13022f1  g, found level.dat_old
 */
