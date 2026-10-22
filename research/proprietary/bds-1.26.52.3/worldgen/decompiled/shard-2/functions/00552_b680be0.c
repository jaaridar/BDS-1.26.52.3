/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb780be0 (ELF vaddr 0xb680be0)
 * Label: caller-of-callee
 * Body:  [[0b780be0, 0b781ec2] [0b781ed0, 0b7823d0] [0b7823e0, 0b782857] [0b782860, 0b782c5d] [0b782c60, 0b783b52] [0b783b60, 0b78405e] [0b784060, 0b7841db] [0b7841e0, 0b784410] [0b784420, 0b784639]]
 * Ghidra: FUN_0b780be0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b780be0(long *param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  uint *puVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puVar22;
  long lVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  uint *puStack_778;
  ulong *puStack_770;
  ulong *puStack_768;
  uint uStack_760;
  undefined4 uStack_75c;
  undefined8 uStack_758;
  undefined8 uStack_750;
  long lStack_748;
  uint uStack_738;
  undefined2 uStack_734;
  undefined2 uStack_732;
  uint uStack_730;
  undefined2 uStack_72c;
  undefined1 uStack_72a;
  undefined1 uStack_729;
  undefined8 uStack_728;
  uint uStack_720;
  undefined4 uStack_71c;
  uint uStack_718;
  undefined1 uStack_714;
  undefined2 uStack_713;
  undefined1 uStack_711;
  undefined1 uStack_710;
  undefined2 uStack_70f;
  undefined1 uStack_70d;
  undefined4 uStack_70c;
  ulong uStack_708;
  undefined1 uStack_700;
  undefined7 uStack_6ff;
  undefined1 uStack_6f8;
  undefined1 uStack_6f7;
  undefined4 uStack_6f6;
  undefined2 uStack_6f2;
  ulong uStack_6f0;
  uint *puStack_6e8;
  uint *puStack_6e0;
  uint *puStack_6d8;
  long *plStack_6d0;
  long *plStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  ulong uStack_6b0;
  uint uStack_6a4;
  undefined8 uStack_6a0;
  uint uStack_698;
  undefined4 uStack_694;
  long lStack_690;
  byte bStack_688;
  undefined7 uStack_687;
  undefined1 uStack_680;
  undefined1 uStack_67f;
  undefined8 uStack_678;
  ulong uStack_670;
  undefined8 uStack_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  uint uStack_658;
  undefined4 uStack_654;
  ulong uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  ulong uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  code *pcStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  ulong uStack_5e0;
  undefined *puStack_5d8;
  undefined1 auStack_5d0 [24];
  code *pcStack_5b8;
  undefined1 auStack_590 [24];
  code *pcStack_578;
  undefined1 auStack_548 [24];
  code *pcStack_530;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined1 uStack_4f8;
  undefined1 uStack_4f7;
  undefined2 uStack_4f6;
  undefined4 uStack_4f4;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  code *pcStack_4e0;
  undefined *puStack_4d8;
  long lStack_4d0;
  undefined *puStack_4c8;
  code *pcStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  code *pcStack_4a0;
  long *plStack_498;
  long alStack_490 [3];
  code *apcStack_478 [3];
  code *pcStack_460;
  undefined1 auStack_450 [24];
  code *pcStack_438;
  undefined1 auStack_430 [24];
  code *pcStack_418;
  undefined1 auStack_408 [24];
  code *apcStack_3f0 [2];
  undefined1 auStack_3e0 [24];
  code *pcStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  uint uStack_3a4;
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [8];
  code *pcStack_388;
  code *pcStack_378;
  undefined1 auStack_360 [16];
  undefined1 auStack_350 [8];
  code *pcStack_348;
  code *pcStack_338;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [16];
  code *pcStack_300;
  code *pcStack_2f8;
  undefined1 auStack_2c8 [24];
  code *pcStack_2b0;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  code *pcStack_240;
  code *pcStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined1 auStack_210 [24];
  code *pcStack_1f8;
  undefined1 auStack_1d0 [24];
  code *pcStack_1b8;
  undefined1 auStack_188 [24];
  code *pcStack_170;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  long *plStack_38;
  
  uStack_508 = CONCAT31((int3)_DAT_014d87b9,0x20);
  uStack_504 = (undefined4)((ulong)_DAT_014d87b9 >> 0x18);
  uStack_500._0_1_ = (undefined1)((ulong)_DAT_014d87b9 >> 0x38);
  uStack_500._1_3_ = (undefined3)_UNK_014d87c1;
  uStack_4fc = (undefined4)((ulong)_UNK_014d87c1 >> 0x18);
  uStack_4f8 = (undefined1)((ulong)_UNK_014d87c1 >> 0x38);
  uStack_4f7 = 0;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  func_0x048b1dc0(auStack_100);
  func_0x048b1dc0(&uStack_f0);
  uStack_50 = 0;
  lStack_48 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  puStack_b0 = (ulong *)0x0;
  puStack_a8 = (ulong *)0x0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  if ((uStack_118 & 1) == 0) {
    lStack_108 = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8)));
    uStack_118 = CONCAT44(uStack_504,uStack_508);
    uStack_110 = CONCAT44(uStack_4fc,uStack_500);
  }
  else {
    func_0x04885120(&uStack_118,(long)&uStack_508 + 1,0x10);
    if ((uStack_508 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))),
                      CONCAT44(uStack_504,uStack_508) & 0xfffffffffffffffe);
    }
  }
  bStack_688 = 0x10;
  uStack_687 = 0x746150656c6966;
  uStack_680 = 0x68;
  uStack_67f = 0;
  func_0x0665b2c0(&uStack_288,&bStack_688);
  uStack_6a0 = (code *)0x736e6f6974706f0e;
  uStack_698 = uStack_698 & 0xffffff00;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  func_0x048b1dc0(&uStack_630);
  func_0x0652b590(&uStack_620);
  if (((ulong)uStack_648 & 1) == 0) {
    if (((ulong)uStack_6a0 & 1) == 0) {
      uStack_638 = lStack_690;
      uStack_648 = uStack_6a0;
      uStack_640 = CONCAT44(uStack_694,uStack_698);
    }
    else {
      func_0x04885070(&uStack_648,lStack_690,CONCAT44(uStack_694,uStack_698));
    }
  }
  else {
    bVar24 = ((ulong)uStack_6a0 & 1) != 0;
    lVar18 = (long)&uStack_6a0 + 1;
    if (bVar24) {
      lVar18 = lStack_690;
    }
    uVar15 = (ulong)uStack_6a0 >> 1 & 0x7f;
    if (bVar24) {
      uVar15 = CONCAT44(uStack_694,uStack_698);
    }
    func_0x04885120(&uStack_648,lVar18,uVar15);
  }
  plVar16 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar16 == (long *)0x0) {
    func_0x048b0de0(&uStack_508,&uStack_718);
    uVar7 = uStack_4fc;
    uVar9 = uStack_500;
    uRam000000000f54fd94 = uStack_504;
    _DAT_0f54fd90 = uStack_508;
    uStack_508 = 0;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_4fc = 0;
    plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar7;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar18 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_0412c2d0(plVar16);
      }
    }
    plVar16 = (long *)CONCAT44(uStack_4fc,uStack_500);
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar18 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_0412c2d0(plVar16);
      }
    }
    plVar16 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6b9d08 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b9d08), iVar11 != 0)) {
    func_0x0b83da20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6b9c88,0xf53dab8);
    func_0x0410844d(&DAT_0f6b9d08);
  }
  plVar17 = (long *)(*plVar16 +
                    (ulong)((int)((ulong)(plVar16[1] - *plVar16) >> 3) - 1U &
                           *(uint *)(_DAT_0f6b9c88 + 4)) * 8);
  do {
    lVar18 = *plVar17;
    if (lVar18 == -1) goto LAB_0b780f30;
    plVar17 = (long *)(plVar16[3] + lVar18 * 0x18);
  } while (*(uint *)(plVar16[3] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6b9c88 + 4));
  if (plVar17 == (long *)plVar16[4]) {
LAB_0b780f30:
    uStack_630 = &DAT_0f6b9c88;
  }
  else {
    uStack_630 = (undefined *)plVar17[2];
  }
  uStack_628 = plVar16;
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&uStack_610);
  }
  puVar6 = puStack_5d8;
  pcStack_600 = (code *)&UNK_0b83ddd0;
  pcStack_5f8 = (code *)0x0;
  uStack_5f0 = CONCAT35(uStack_5f0._5_3_,0x2ea2f19c6);
  uStack_610 = uStack_610 & 0xffffffffffffff00;
  uStack_608 = uStack_608 & 0xffffffffffffff00;
  puStack_5d8 = &UNK_0b83dc20;
  if (puVar6 != &UNK_0b83dc20) {
    uStack_5e0 = 0;
  }
  uStack_708 = 0;
  uStack_6f0 = 0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = 0;
  puStack_6d8 = (uint *)0x0;
  plStack_6d0 = (long *)0x0;
  puStack_6e8 = (uint *)0x0;
  puStack_6e0 = (uint *)0x0;
  uStack_718 = 0;
  uStack_714 = 0;
  uStack_713 = 0;
  uStack_711 = 0;
  uStack_710 = 0;
  uStack_70f = 0;
  uStack_70d = 0;
  uStack_70c = 0;
  uStack_700 = 0x10;
  uStack_6ff = 0x73654d64616f6c;
  uStack_6f8 = 0x68;
  uStack_6f7 = 0;
  uStack_6f6 = uStack_3e;
  uStack_6f2 = uStack_3a;
  func_0x06523ef0(&uStack_508,&uStack_260);
  plStack_38 = param_1;
  func_0x06523ef0(apcStack_3f0,&uStack_620);
  uStack_758 = 0;
  uStack_750 = 0;
  lStack_748 = 0;
  uStack_738 = (uint)&uStack_758;
  uStack_734 = (undefined2)((ulong)&uStack_758 >> 0x20);
  uStack_732 = (undefined2)((ulong)&uStack_758 >> 0x30);
  uStack_730 = uStack_730 & 0xffffff00;
  uStack_670 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (uStack_670 == 0) {
    func_0x0eec74c0(0x230,0);
  }
  lStack_748 = uStack_670 + 0x230;
  puStack_770 = &uStack_650;
  puStack_768 = &uStack_670;
  uStack_760 = uStack_760 & 0xffffff00;
  puStack_778 = (uint *)&uStack_758;
  uStack_758 = uStack_670;
  uStack_750 = uStack_670;
  uStack_650 = uStack_670;
  func_0x06523ef0(uStack_670,&uStack_508);
  uStack_670 = uStack_670 + 0x118;
  func_0x06523ef0(uStack_670,apcStack_3f0);
  uStack_750 = uStack_670 + 0x118;
  if (pcStack_300 != (code *)0x0) {
    (*pcStack_300)(auStack_318);
  }
  if (pcStack_348 != (code *)0x0) {
    (*pcStack_348)(auStack_360);
  }
  if (pcStack_388 != (code *)0x0) {
    (*pcStack_388)(auStack_3a0);
  }
  if (pcStack_3c8 != (code *)0x0) {
    (*pcStack_3c8)(auStack_3e0);
  }
  if (pcStack_418 != (code *)0x0) {
    (*pcStack_418)(auStack_430);
  }
  if (pcStack_460 != (code *)0x0) {
    (*pcStack_460)(apcStack_478);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(&pcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&uStack_4f8);
  }
  puVar12 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (puVar12 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = &UNK_0f2dd7f0;
  uVar9 = func_0x0d858500(&uStack_758);
  plVar16 = puVar12 + 3;
  *(undefined1 *)(puVar12 + 4) = 0;
  *(undefined4 *)((long)puVar12 + 0x24) = uVar9;
  *(undefined4 *)(puVar12 + 5) = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[3] = &UNK_0f2dd840;
  *(undefined4 *)(puVar12 + 9) = (undefined4)uStack_758;
  *(undefined4 *)((long)puVar12 + 0x4c) = uStack_758._4_4_;
  *(undefined4 *)(puVar12 + 10) = (undefined4)uStack_750;
  *(undefined4 *)((long)puVar12 + 0x54) = uStack_750._4_4_;
  puVar12[0xb] = lStack_748;
  uStack_758 = 0;
  uStack_750 = 0;
  lStack_748 = 0;
  uVar9 = func_0x0d858620(plVar16);
  plVar17 = plStack_6c8;
  *(undefined4 *)(puVar12 + 5) = uVar9;
  plStack_6d0 = plVar16;
  if (plStack_6c8 != (long *)0x0) {
    LOCK();
    plVar16 = plStack_6c8 + 1;
    lVar18 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *plStack_6c8;
      plStack_6c8 = puVar12;
      (**(code **)(lVar18 + 0x10))(plVar17);
      FUN_0412c2d0(plVar17);
      lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
      goto joined_r0x0b7812ef;
    }
  }
  lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  plStack_6c8 = puVar12;
joined_r0x0b7812ef:
  if (lVar18 == 0) {
    func_0x048b0de0(&uStack_508,&puStack_778);
    uVar7 = uStack_4fc;
    uVar9 = uStack_500;
    uRam000000000f54fd94 = uStack_504;
    _DAT_0f54fd90 = uStack_508;
    uStack_508 = 0;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_4fc = 0;
    plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar7;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar18 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_0412c2d0(plVar16);
      }
    }
    plVar16 = (long *)CONCAT44(uStack_4fc,uStack_500);
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar18 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_0412c2d0(plVar16);
      }
    }
    lVar18 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6b9d28 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b9d28), iVar11 != 0)) {
    func_0x0b83db50();
    func_0x0410844d(&DAT_0f6b9d28);
  }
  if ((DAT_0f6b9d28 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6b9d28), iVar11 != 0)) {
    func_0x0b83db50();
    func_0x0410844d(&DAT_0f6b9d28);
  }
  uStack_508 = 0xf6b9d10;
  uStack_504 = 0;
  uStack_500 = _DAT_0f6b9d14;
  uStack_4f8 = 0;
  uStack_4f7 = 0;
  uStack_4f6 = 0;
  uStack_4f4 = 0;
  uStack_4f0 = (undefined *)CONCAT44(uStack_4f0._4_4_,0x80);
  uStack_4e8 = (undefined *)0xc;
  pcStack_4e0 = (code *)&UNK_0b83d960;
  puStack_4d8 = &UNK_0b83dbd0;
  lStack_4d0 = 0;
  puStack_4c8 = &UNK_0b83e360;
  pcStack_4c0 = (code *)0x1;
  pcStack_4b8 = (code *)&SUB_048b5640;
  uStack_4b0 = &UNK_0b83e410;
  uStack_4a8 = (ulong)uStack_4a8._4_4_ << 0x20;
  pcStack_4a0 = (code *)0x0;
  plStack_498 = (long *)0x0;
  alStack_490[0] = 0;
  func_0x048aee30(&uStack_670,lVar18,&uStack_508,0xea2f19c6);
  lVar18 = alStack_490[0];
  alStack_490[0] = 0;
  if (lVar18 != 0) {
    func_0x048ae940(lVar18);
    func_0x0412a280(lVar18,0x78);
  }
  plVar16 = plStack_498;
  if (plStack_498 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_498 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plStack_498 + 0x10))(plStack_498);
      FUN_0412c2d0(plVar16);
    }
  }
  if ((DAT_0f6ba038 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6ba038), iVar11 != 0)) {
    func_0x0b841c70();
    func_0x0410844d(&DAT_0f6ba038);
  }
  uStack_508 = _DAT_0f6ba024;
  uStack_500 = 1;
  uStack_4fc = 0;
  uStack_4f8 = 0xc0;
  uStack_4f7 = 0x19;
  uStack_4f6 = 0xb84;
  uStack_4f4 = 0;
  uStack_4f0 = &UNK_0b841a80;
  func_0x065abe60(&uStack_670);
  uStack_728 = CONCAT44(uStack_65c,uStack_660);
  uStack_720 = uStack_658;
  uStack_71c = uStack_654;
  uStack_738 = (uint)uStack_670;
  uStack_734 = (undefined2)(uStack_670 >> 0x20);
  uStack_732 = (undefined2)(uStack_670 >> 0x30);
  uStack_730 = (uint)uStack_668;
  uStack_72c = (undefined2)((ulong)uStack_668 >> 0x20);
  uStack_72a = (undefined1)((ulong)uStack_668 >> 0x30);
  uStack_729 = (undefined1)((ulong)uStack_668 >> 0x38);
  uStack_508 = 0xf55160ec;
  uStack_500 = 0;
  uStack_4fc = 0;
  uStack_4f8 = 0;
  uStack_4f7 = 0;
  uStack_4f6 = 0;
  uStack_4f0 = (undefined *)0x0;
  uStack_4e8 = &UNK_065b4120;
  pcStack_4e0 = (code *)&SUB_048b06d0;
  puStack_4d8 = &UNK_0b841f90;
  lStack_4d0 = 0;
  puStack_4c8 = (undefined *)((ulong)puStack_4c8 & 0xffffffff00000000);
  pcStack_4c0 = (code *)0x0;
  pcStack_4b8 = (code *)0x0;
  func_0x049057f0(&uStack_738,&uStack_508);
  FUN_048aea50(&uStack_508);
  puStack_778 = (uint *)CONCAT26(uStack_732,CONCAT24(uStack_734,uStack_738));
  puStack_770 = (ulong *)CONCAT17(uStack_729,CONCAT16(uStack_72a,CONCAT24(uStack_72c,uStack_730)));
  uStack_760 = uStack_720;
  uStack_75c = uStack_71c;
  uStack_508 = 0xf55160ec;
  uStack_500 = 0;
  uStack_4fc = 0;
  uStack_4f8 = 1;
  uStack_4f7 = 0;
  uStack_4f6 = 0;
  uStack_4f0 = (undefined *)0x0;
  uStack_4e8 = &UNK_065b4120;
  pcStack_4e0 = (code *)&SUB_048b06d0;
  puStack_4d8 = &UNK_0b842240;
  lStack_4d0 = 0;
  puStack_4c8 = (undefined *)((ulong)puStack_4c8 & 0xffffffff00000000);
  pcStack_4c0 = (code *)0x0;
  pcStack_4b8 = (code *)0x0;
  func_0x049057f0(&puStack_778,&uStack_508);
  FUN_048aea50(&uStack_508);
  uStack_4f8 = (undefined1)uStack_278;
  uStack_4f7 = (undefined1)(uStack_278 >> 8);
  uStack_4f6 = (undefined2)(uStack_278 >> 0x10);
  uStack_4f4 = (undefined4)(uStack_278 >> 0x20);
  uStack_508 = (uint)uStack_288;
  uStack_504 = (undefined4)(uStack_288 >> 0x20);
  uStack_500 = (undefined4)uStack_280;
  uStack_4fc = (undefined4)(uStack_280 >> 0x20);
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_4f0 = (undefined *)uStack_270;
  uStack_4e8 = (undefined *)uStack_268;
  func_0x065281f0(&pcStack_4e0,&uStack_260);
  lStack_3b8 = uStack_638;
  pcStack_3c8 = uStack_648;
  uStack_3c0 = uStack_640;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  uStack_3b0 = (uint)uStack_630;
  uStack_3ac = uStack_630._4_4_;
  uStack_3a8 = (uint)uStack_628;
  uStack_3a4 = uStack_628._4_4_;
  func_0x065281f0(auStack_3a0,&uStack_620);
  puStack_778 = (uint *)0x0;
  puStack_770 = (ulong *)0x0;
  puStack_768 = (ulong *)0x0;
  uStack_738 = (uint)&puStack_778;
  uStack_734 = (undefined2)((ulong)&puStack_778 >> 0x20);
  uStack_732 = (undefined2)((ulong)&puStack_778 >> 0x30);
  uStack_730 = uStack_730 & 0xffffff00;
  puVar13 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar13 == (uint *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar3 = puVar13 + 0xa0;
  puStack_778 = puVar13;
  puStack_770 = (ulong *)puVar13;
  puStack_768 = (ulong *)puVar3;
  if ((uStack_508 & 1) == 0) {
    *(ulong *)(puVar13 + 4) =
         CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8)));
    *(ulong *)puVar13 = CONCAT44(uStack_504,uStack_508);
    *(ulong *)(puVar13 + 2) = CONCAT44(uStack_4fc,uStack_500);
  }
  else {
    func_0x0412e5e0(puVar13,CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))
                                    ),CONCAT44(uStack_4fc,uStack_500));
  }
  puVar13[6] = (uint)uStack_4f0;
  puVar13[7] = uStack_4f0._4_4_;
  puVar13[8] = (uint)uStack_4e8;
  puVar13[9] = uStack_4e8._4_4_;
  func_0x06523ef0(puVar13 + 10,&pcStack_4e0);
  if (((ulong)pcStack_3c8 & 1) == 0) {
    *(long *)(puVar13 + 0x54) = lStack_3b8;
    *(code **)(puVar13 + 0x50) = pcStack_3c8;
    *(ulong *)(puVar13 + 0x52) = uStack_3c0;
  }
  else {
    func_0x0412e5e0(puVar13 + 0x50,lStack_3b8,uStack_3c0);
  }
  puVar13[0x56] = uStack_3b0;
  puVar13[0x57] = uStack_3ac;
  puVar13[0x58] = uStack_3a8;
  puVar13[0x59] = uStack_3a4;
  func_0x06523ef0(puVar13 + 0x5a,auStack_3a0);
  puStack_770 = (ulong *)puVar3;
  if (pcStack_2b0 != (code *)0x0) {
    (*pcStack_2b0)(auStack_2c8);
  }
  if (pcStack_2f8 != (code *)0x0) {
    (*pcStack_2f8)(auStack_310);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (((ulong)pcStack_3c8 & 1) != 0) {
    func_0x0412a280(lStack_3b8,(ulong)pcStack_3c8 & 0xfffffffffffffffe);
  }
  if (apcStack_3f0[0] != (code *)0x0) {
    (*apcStack_3f0[0])(auStack_408);
  }
  if (pcStack_438 != (code *)0x0) {
    (*pcStack_438)(auStack_450);
  }
  if (apcStack_478[0] != (code *)0x0) {
    (*apcStack_478[0])(alStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&lStack_4d0);
  }
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))),
                    CONCAT44(uStack_504,uStack_508) & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_6d0 + 0x20))();
  uVar21 = ((long)puStack_770 - (long)puStack_778 >> 6) * -0x3333333333333333;
  uVar15 = 0;
  if ((uVar10 != 0) && ((uint)uVar21 != 0)) {
    uVar20 = 0;
    uVar15 = 0;
    uStack_6a4 = uVar10;
    do {
      auVar25 = (**(code **)(*plStack_6d0 + 0x28))(plStack_6d0,uVar20);
      lVar19 = auVar25._8_8_;
      lVar18 = auVar25._0_8_;
      auVar25 = func_0x06527d70();
      if (auVar25._8_8_ == lVar19) {
        if (auVar25._0_8_ == 0) {
          lVar23 = func_0x048aead0(auVar25._8_8_);
          iVar11 = *(int *)(lVar23 + 8);
          if (lVar18 == 0) goto LAB_0b781a41;
LAB_0b781a22:
          if (iVar11 != *(int *)(lVar18 + 8)) goto LAB_0b781a60;
        }
        else {
          iVar11 = *(int *)(auVar25._0_8_ + 8);
          if (lVar18 != 0) goto LAB_0b781a22;
LAB_0b781a41:
          lVar23 = func_0x048aead0(lVar19);
          if (iVar11 != *(int *)(lVar23 + 8)) goto LAB_0b781a60;
        }
      }
      else {
LAB_0b781a60:
        auVar25 = func_0x06527e30();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b781c55;
        }
        auVar25 = func_0x06527ef0();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b781c55;
        }
        auVar25 = func_0x06527fb0();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b781c55;
        }
        auVar25 = func_0x06528070();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b781c55;
        }
        auVar25 = func_0x06528130();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b781c55;
        }
        puVar13 = puStack_778;
        puVar22 = puStack_770;
        if (*(long *)(puStack_778 + (uVar15 * 0x28 + 4) * 2) != lVar19) goto joined_r0x0b781e61;
        if (*(long *)(puStack_778 + (uVar15 * 0x28 + 3) * 2) == 0) {
          lVar23 = func_0x048aead0();
          iVar11 = *(int *)(lVar23 + 8);
          if (lVar18 == 0) goto LAB_0b781c3e;
LAB_0b781c25:
          if (iVar11 != *(int *)(lVar18 + 8)) goto LAB_0b781e51;
        }
        else {
          iVar11 = *(int *)(*(long *)(puStack_778 + (uVar15 * 0x28 + 3) * 2) + 8);
          if (lVar18 != 0) goto LAB_0b781c25;
LAB_0b781c3e:
          lVar18 = func_0x048aead0(lVar19);
          if (iVar11 != *(int *)(lVar18 + 8)) goto LAB_0b781e51;
        }
        uVar15 = (ulong)((int)uVar15 + 1);
      }
LAB_0b781c55:
    } while (((uint)uVar15 < (uint)uVar21) && (uVar20 = uVar20 + 1, uVar20 < uStack_6a4));
    uVar21 = ((long)puStack_770 - (long)puStack_778 >> 6) * -0x3333333333333333;
  }
  puVar13 = puStack_6e8;
  if (uVar21 == uVar15) {
    puVar3 = puStack_6e0;
    if (puStack_6e8 != (uint *)0x0) {
      while (puVar13 != puVar3) {
        func_0x05fe8450(puVar3 + -0x50);
        puVar3 = puVar3 + -0x50;
      }
      puStack_6e0 = puVar13;
      func_0x0412a280(puStack_6e8,(long)puStack_6d8 - (long)puStack_6e8);
    }
    puStack_6d8 = (uint *)puStack_768;
    if (puStack_b0 < puStack_a8) {
      *puStack_b0 = 0;
      puStack_b0[1] = 0;
      puStack_b0[2] = 0;
      *puStack_b0 = CONCAT17(uStack_711,CONCAT25(uStack_713,CONCAT14(uStack_714,uStack_718)));
      puStack_b0[1] = CONCAT44(uStack_70c,CONCAT13(uStack_70d,CONCAT21(uStack_70f,uStack_710)));
      puStack_b0[2] = uStack_708;
      uStack_718 = 0;
      uStack_714 = 0;
      uStack_713 = 0;
      uStack_711 = 0;
      uStack_710 = 0;
      uStack_70f = 0;
      uStack_70d = 0;
      uStack_70c = 0;
      uStack_708 = 0;
      puStack_b0[5] = uStack_6f0;
      puStack_b0[3] = CONCAT71(uStack_6ff,uStack_700);
      puStack_b0[4] = CONCAT26(uStack_6f2,CONCAT42(uStack_6f6,CONCAT11(uStack_6f7,uStack_6f8)));
      uStack_700 = 0;
      uStack_6ff = 0;
      uStack_6f8 = 0;
      uStack_6f7 = 0;
      uStack_6f6 = 0;
      uStack_6f2 = 0;
      uStack_6f0 = 0;
      puStack_b0[6] = 0;
      puStack_b0[7] = 0;
      puStack_b0[8] = 0;
      puStack_b0[6] = (ulong)puStack_778;
      puStack_b0[7] = (ulong)puStack_770;
      puStack_b0[8] = (ulong)puStack_768;
      puStack_6e8 = (uint *)0x0;
      puStack_6e0 = (uint *)0x0;
      puStack_6d8 = (uint *)0x0;
      puStack_b0[9] = (ulong)plStack_6d0;
      puStack_b0[10] = (ulong)plStack_6c8;
      plStack_6d0 = (long *)0x0;
      plStack_6c8 = (undefined8 *)0x0;
      puStack_b0[0xb] = 0;
      puStack_b0[0xc] = 0;
      puStack_b0[0xd] = 0;
      *(undefined4 *)(puStack_b0 + 0xb) = (undefined4)uStack_6c0;
      *(undefined4 *)((long)puStack_b0 + 0x5c) = uStack_6c0._4_4_;
      *(undefined4 *)(puStack_b0 + 0xc) = (undefined4)uStack_6b8;
      *(undefined4 *)((long)puStack_b0 + 100) = uStack_6b8._4_4_;
      puStack_b0[0xd] = uStack_6b0;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      puStack_b0 = puStack_b0 + 0xe;
    }
    else {
      puStack_6e8 = puStack_778;
      puStack_6e0 = (uint *)puStack_770;
      puStack_b0 = (ulong *)func_0x0652ac80(&lStack_b8,&uStack_718);
    }
    puVar22 = puStack_b0 + -0xe;
    uVar15 = uStack_758;
  }
  else {
LAB_0b781e51:
    puVar13 = puStack_778;
    puVar22 = puStack_770;
    if (puStack_778 != (uint *)0x0) {
joined_r0x0b781e61:
      while (puVar3 = puStack_778, (ulong *)puStack_778 != puVar22) {
        puStack_778 = puVar13;
        func_0x05fe8450((uint *)((long)puVar22 + -0x140));
        puVar13 = puStack_778;
        puVar22 = (ulong *)((long)puVar22 + -0x140);
        puStack_778 = puVar3;
      }
      puStack_770 = (ulong *)puStack_778;
      puStack_778 = puVar13;
      func_0x0412a280(puVar13,(long)puStack_768 - (long)puVar13);
    }
    puVar22 = (ulong *)0xf6b6f80;
    uVar15 = uStack_758;
  }
  uStack_758 = uVar15;
  if (uVar15 != 0) {
    if (uVar15 != uStack_750) {
      lVar18 = uStack_750 - 0x40;
      do {
        if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
          (**(code **)(lVar18 + 0x18))(lVar18);
        }
        if (*(code **)(lVar18 + -0x30) != (code *)0x0) {
          (**(code **)(lVar18 + -0x30))(lVar18 + -0x48);
        }
        if (*(code **)(lVar18 + -0x70) != (code *)0x0) {
          (**(code **)(lVar18 + -0x70))(lVar18 + -0x88);
        }
        if (*(code **)(lVar18 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar18 + -0xb0))(lVar18 + -200);
        }
        uVar21 = lVar18 - 0xd8;
        lVar18 = lVar18 + -0x118;
      } while (uVar21 != uVar15);
    }
    uStack_750 = uVar15;
    func_0x0412a280(uStack_758,lStack_748 - uStack_758);
  }
  func_0x05f93280(&uStack_718);
  func_0x064e40a0(puVar22);
  if (pcStack_530 != (code *)0x0) {
    (*pcStack_530)(auStack_548);
  }
  if (pcStack_578 != (code *)0x0) {
    (*pcStack_578)(auStack_590);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(auStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&uStack_610);
  }
  if (((ulong)uStack_648 & 1) != 0) {
    func_0x0412a280(uStack_638,(ulong)uStack_648 & 0xfffffffffffffffe);
  }
  if (((ulong)uStack_6a0 & 1) != 0) {
    func_0x0412a280(lStack_690,(ulong)uStack_6a0 & 0xfffffffffffffffe);
  }
  if (pcStack_170 != (code *)0x0) {
    (*pcStack_170)(auStack_188);
  }
  if (pcStack_1b8 != (code *)0x0) {
    (*pcStack_1b8)(auStack_1d0);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(&uStack_250);
  }
  if ((uStack_288 & 1) != 0) {
    func_0x0412a280(uStack_278,uStack_288 & 0xfffffffffffffffe);
  }
  if ((bStack_688 & 1) != 0) {
    func_0x0412a280(uStack_678,CONCAT71(uStack_687,bStack_688) & 0xfffffffffffffffe);
  }
  uStack_718 = 0x73656d0c;
  uStack_714 = 0x68;
  uStack_713 = 0x6449;
  uStack_711 = 0;
  func_0x064f17b0(&uStack_508,&uStack_718);
  uStack_278 = 0;
  uStack_260 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  pcStack_238 = (code *)0x0;
  uStack_230 = 0;
  uStack_248 = 0;
  pcStack_240 = (code *)0x0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_270 = 0x4d64616f6c6e7514;
  uStack_268 = 0x687365;
  func_0x065cb3c0(&uStack_648,&uStack_508);
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar14 + 8) = 0;
  *(undefined8 *)(pcVar14 + 0x10) = 0;
  *(undefined **)pcVar14 = &UNK_0f2dd8e8;
  uVar9 = func_0x0d858500(&uStack_648);
  pcVar1 = pcVar14 + 0x18;
  pcVar14[0x20] = (code)0x0;
  *(undefined4 *)(pcVar14 + 0x24) = uVar9;
  *(undefined4 *)(pcVar14 + 0x28) = 0;
  *(undefined8 *)(pcVar14 + 0x30) = 0;
  *(undefined8 *)(pcVar14 + 0x38) = 0;
  *(undefined8 *)(pcVar14 + 0x40) = 0;
  *(undefined **)(pcVar14 + 0x18) = &UNK_0f2dd938;
  *(undefined4 *)(pcVar14 + 0x48) = (undefined4)uStack_648;
  *(undefined4 *)(pcVar14 + 0x4c) = uStack_648._4_4_;
  *(undefined4 *)(pcVar14 + 0x50) = (undefined4)uStack_640;
  *(undefined4 *)(pcVar14 + 0x54) = uStack_640._4_4_;
  *(ulong *)(pcVar14 + 0x58) = uStack_638;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  uVar9 = func_0x0d858620(pcVar1);
  pcVar5 = pcStack_238;
  *(undefined4 *)(pcVar14 + 0x28) = uVar9;
  pcStack_240 = pcVar1;
  if (pcStack_238 != (code *)0x0) {
    LOCK();
    plVar16 = (long *)((long)pcStack_238 + 8);
    lVar18 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *(long *)pcStack_238;
      pcStack_238 = pcVar14;
      (**(code **)(lVar18 + 0x10))(pcVar5);
      FUN_0412c2d0(pcVar5);
      pcVar14 = pcStack_238;
    }
  }
  pcStack_238 = pcVar14;
  cVar8 = func_0x065cb540(&uStack_288,&uStack_508);
  if (cVar8 == '\0') {
    puVar22 = (ulong *)0xf6b6f80;
    lVar18 = (long)uStack_648;
  }
  else {
    if (puStack_b0 < puStack_a8) {
      *puStack_b0 = 0;
      puStack_b0[1] = 0;
      puStack_b0[2] = 0;
      *puStack_b0 = uStack_288;
      puStack_b0[1] = uStack_280;
      puStack_b0[2] = uStack_278;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      puStack_b0[5] = uStack_260;
      puStack_b0[3] = uStack_270;
      puStack_b0[4] = uStack_268;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      puStack_b0[6] = 0;
      puStack_b0[7] = 0;
      puStack_b0[8] = 0;
      puStack_b0[6] = uStack_258;
      puStack_b0[7] = uStack_250;
      puStack_b0[8] = uStack_248;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      puStack_b0[9] = (ulong)pcStack_240;
      puStack_b0[10] = (ulong)pcStack_238;
      pcStack_240 = (code *)0x0;
      pcStack_238 = (code *)0x0;
      puStack_b0[0xb] = 0;
      puStack_b0[0xc] = 0;
      puStack_b0[0xd] = 0;
      *(undefined4 *)(puStack_b0 + 0xb) = (undefined4)uStack_230;
      *(undefined4 *)((long)puStack_b0 + 0x5c) = uStack_230._4_4_;
      *(undefined4 *)(puStack_b0 + 0xc) = (undefined4)uStack_228;
      *(undefined4 *)((long)puStack_b0 + 100) = uStack_228._4_4_;
      puStack_b0[0xd] = uStack_220;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      puStack_b0 = puStack_b0 + 0xe;
    }
    else {
      puStack_b0 = (ulong *)func_0x0652ac80(&lStack_b8,&uStack_288);
    }
    puVar22 = puStack_b0 + -0xe;
    lVar18 = (long)uStack_648;
  }
  uStack_648 = (code *)lVar18;
  if (lVar18 != 0) {
    if (lVar18 != uStack_640) {
      lVar19 = uStack_640 + -0x40;
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
        lVar23 = lVar19 + -0xd8;
        lVar19 = lVar19 + -0x118;
      } while (lVar23 != lVar18);
    }
    uStack_640 = lVar18;
    func_0x0412a280(uStack_648,uStack_638 - (long)uStack_648);
  }
  func_0x05f93280(&uStack_288);
  func_0x064e40a0(puVar22);
  if (apcStack_3f0[0] != (code *)0x0) {
    (*apcStack_3f0[0])(auStack_408);
  }
  if (pcStack_438 != (code *)0x0) {
    (*pcStack_438)(auStack_450);
  }
  if (apcStack_478[0] != (code *)0x0) {
    (*apcStack_478[0])(alStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&lStack_4d0);
  }
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))),
                    CONCAT44(uStack_504,uStack_508) & 0xfffffffffffffffe);
  }
  if ((uStack_718 & 1) != 0) {
    func_0x0412a280(uStack_708,
                    CONCAT17(uStack_711,CONCAT25(uStack_713,CONCAT14(uStack_714,uStack_718))) &
                    0xfffffffffffffffe);
  }
  uStack_4f8 = 0;
  uStack_4f7 = 0;
  uStack_4f6 = 0;
  uStack_4f4 = 0;
  pcStack_4e0 = (code *)0x0;
  uStack_4a8 = 0;
  pcStack_4a0 = (code *)0x0;
  pcStack_4b8 = (code *)0x0;
  uStack_4b0 = (undefined *)0x0;
  puStack_4c8 = (undefined *)0x0;
  pcStack_4c0 = (code *)0x0;
  puStack_4d8 = (undefined *)0x0;
  lStack_4d0 = 0;
  uStack_508 = 0;
  uStack_504 = 0;
  uStack_500 = 0;
  uStack_4fc = 0;
  uStack_4f0 = (undefined *)0x6873654d74656716;
  uStack_4e8 = (undefined *)0x7473694c;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar14 + 8) = 0;
  *(undefined8 *)(pcVar14 + 0x10) = 0;
  *(undefined **)pcVar14 = &UNK_0f2dd9b8;
  uVar9 = func_0x0d858500(&uStack_648);
  pcVar1 = pcVar14 + 0x18;
  pcVar14[0x20] = (code)0x0;
  *(undefined4 *)(pcVar14 + 0x24) = uVar9;
  *(undefined4 *)(pcVar14 + 0x28) = 0;
  *(undefined8 *)(pcVar14 + 0x30) = 0;
  *(undefined8 *)(pcVar14 + 0x38) = 0;
  *(undefined8 *)(pcVar14 + 0x40) = 0;
  *(undefined **)(pcVar14 + 0x18) = &UNK_0f2dda08;
  *(undefined8 *)(pcVar14 + 0x48) = 0;
  *(undefined8 *)(pcVar14 + 0x50) = 0;
  *(undefined8 *)(pcVar14 + 0x58) = 0;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  uVar9 = func_0x0d858620(pcVar1);
  pcVar5 = pcStack_4b8;
  *(undefined4 *)(pcVar14 + 0x28) = uVar9;
  pcStack_4c0 = pcVar1;
  if (pcStack_4b8 != (code *)0x0) {
    LOCK();
    pcVar1 = pcStack_4b8 + 8;
    lVar18 = *(long *)pcVar1;
    *(long *)pcVar1 = *(long *)pcVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *(long *)pcStack_4b8;
      pcStack_4b8 = pcVar14;
      (**(code **)(lVar18 + 0x10))(pcVar5);
      FUN_0412c2d0(pcVar5);
      pcVar14 = pcStack_4b8;
    }
  }
  pcStack_4b8 = pcVar14;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  (**(code **)(*(long *)pcStack_4c0 + 0x20))();
  puVar6 = puStack_4d8;
  lVar18 = lStack_4d0;
  if (puStack_4d8 != (undefined *)0x0) {
    while (puVar6 != (undefined *)lVar18) {
      func_0x05fe8450(lVar18 + -0x140);
      lVar18 = lVar18 + -0x140;
    }
    lStack_4d0 = (long)puVar6;
    func_0x0412a280(puStack_4d8,(long)puStack_4c8 - (long)puStack_4d8);
  }
  puStack_4d8 = (undefined *)0x0;
  lStack_4d0 = 0;
  puStack_4c8 = (undefined *)0x0;
  if (puStack_b0 < puStack_a8) {
    *puStack_b0 = 0;
    puStack_b0[1] = 0;
    puStack_b0[2] = 0;
    *puStack_b0 = CONCAT44(uStack_504,uStack_508);
    puStack_b0[1] = CONCAT44(uStack_4fc,uStack_500);
    puStack_b0[2] = CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8)));
    uStack_508 = 0;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_4fc = 0;
    uStack_4f8 = 0;
    uStack_4f7 = 0;
    uStack_4f6 = 0;
    uStack_4f4 = 0;
    puStack_b0[5] = (ulong)pcStack_4e0;
    puStack_b0[3] = (ulong)uStack_4f0;
    puStack_b0[4] = (ulong)uStack_4e8;
    uStack_4f0 = (undefined *)0x0;
    uStack_4e8 = (undefined *)0x0;
    pcStack_4e0 = (code *)0x0;
    puStack_b0[6] = 0;
    puStack_b0[7] = 0;
    puStack_b0[8] = 0;
    puStack_b0[6] = 0;
    puStack_b0[7] = 0;
    puStack_b0[8] = 0;
    puStack_4d8 = (undefined *)0x0;
    lStack_4d0 = 0;
    puStack_4c8 = (undefined *)0x0;
    puStack_b0[9] = (ulong)pcStack_4c0;
    puStack_b0[10] = (ulong)pcStack_4b8;
    pcStack_4c0 = (code *)0x0;
    pcStack_4b8 = (code *)0x0;
    puStack_b0[0xb] = 0;
    puStack_b0[0xc] = 0;
    puStack_b0[0xd] = 0;
    *(undefined4 *)(puStack_b0 + 0xb) = (undefined4)uStack_4b0;
    *(undefined4 *)((long)puStack_b0 + 0x5c) = uStack_4b0._4_4_;
    *(undefined4 *)(puStack_b0 + 0xc) = (undefined4)uStack_4a8;
    *(uint *)((long)puStack_b0 + 100) = uStack_4a8._4_4_;
    puStack_b0[0xd] = (ulong)pcStack_4a0;
    uStack_4b0 = (undefined *)0x0;
    uStack_4a8 = 0;
    pcStack_4a0 = (code *)0x0;
    puVar22 = puStack_b0 + 0xe;
    lVar18 = (long)uStack_648;
  }
  else {
    puVar22 = (ulong *)func_0x0652ac80(&lStack_b8,&uStack_508);
    lVar18 = (long)uStack_648;
  }
  uStack_648 = (code *)lVar18;
  puStack_b0 = puVar22;
  if (lVar18 != 0) {
    if (lVar18 != uStack_640) {
      lVar19 = uStack_640 + -0x40;
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
        lVar23 = lVar19 + -0xd8;
        lVar19 = lVar19 + -0x118;
      } while (lVar23 != lVar18);
    }
    func_0x0412a280(uStack_648,uStack_638 - (long)uStack_648);
  }
  func_0x05f93280(&uStack_508);
  func_0x064e40a0(puVar22 + -0xe);
  puStack_778 = (uint *)0x64496873656d0c;
  func_0x064f17b0(&uStack_508,&puStack_778);
  uStack_738 = 0x78616d1a;
  uStack_734 = 0x6f43;
  uStack_732 = 0x6f6c;
  uStack_730 = 0x756f4372;
  uStack_72c = 0x746e;
  uStack_72a = 0;
  func_0x065f98b0(&uStack_288,&uStack_738);
  uStack_638 = 0;
  uStack_620 = 0;
  uStack_5e8 = 0;
  uStack_5e0 = 0;
  pcStack_5f8 = (code *)0x0;
  uStack_5f0 = 0;
  uStack_608 = 0;
  pcStack_600 = (code *)0x0;
  uStack_618 = 0;
  uStack_610 = 0;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_630 = (undefined *)0x6f6c6f437465671e;
  uStack_628 = (long *)0x73656372756f5372;
  func_0x066e8830(&uStack_718,&uStack_508,&uStack_288);
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)(pcVar14 + 8) = 0;
  *(undefined8 *)(pcVar14 + 0x10) = 0;
  *(undefined **)pcVar14 = &UNK_0f2dda98;
  uVar9 = func_0x0d858500(&uStack_718);
  pcVar1 = pcVar14 + 0x18;
  pcVar14[0x20] = (code)0x0;
  *(undefined4 *)(pcVar14 + 0x24) = uVar9;
  *(undefined4 *)(pcVar14 + 0x28) = 0;
  *(undefined8 *)(pcVar14 + 0x30) = 0;
  *(undefined8 *)(pcVar14 + 0x38) = 0;
  *(undefined8 *)(pcVar14 + 0x40) = 0;
  *(undefined **)(pcVar14 + 0x18) = &UNK_0f2ddae8;
  *(uint *)(pcVar14 + 0x48) = uStack_718;
  *(uint *)(pcVar14 + 0x4c) = CONCAT13(uStack_711,CONCAT21(uStack_713,uStack_714));
  *(uint *)(pcVar14 + 0x50) = CONCAT13(uStack_70d,CONCAT21(uStack_70f,uStack_710));
  *(undefined4 *)(pcVar14 + 0x54) = uStack_70c;
  *(ulong *)(pcVar14 + 0x58) = uStack_708;
  uStack_718 = 0;
  uStack_714 = 0;
  uStack_713 = 0;
  uStack_711 = 0;
  uStack_710 = 0;
  uStack_70f = 0;
  uStack_70d = 0;
  uStack_70c = 0;
  uStack_708 = 0;
  uVar9 = func_0x0d858620(pcVar1);
  pcVar5 = pcStack_5f8;
  *(undefined4 *)(pcVar14 + 0x28) = uVar9;
  pcStack_600 = pcVar1;
  if (pcStack_5f8 != (code *)0x0) {
    LOCK();
    plVar16 = (long *)((long)pcStack_5f8 + 8);
    lVar18 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *(long *)pcStack_5f8;
      pcStack_5f8 = pcVar14;
      (**(code **)(lVar18 + 0x10))(pcVar5);
      FUN_0412c2d0(pcVar5);
      pcVar14 = pcStack_5f8;
    }
  }
  pcStack_5f8 = pcVar14;
  cVar8 = func_0x0a411680(&uStack_648,&uStack_508,&uStack_288);
  if (cVar8 == '\0') {
    puVar22 = (ulong *)0xf6b6f80;
    lVar18 = CONCAT17(uStack_711,CONCAT25(uStack_713,CONCAT14(uStack_714,uStack_718)));
  }
  else {
    if (puStack_b0 < puStack_a8) {
      *puStack_b0 = 0;
      puStack_b0[1] = 0;
      puStack_b0[2] = 0;
      *puStack_b0 = (ulong)uStack_648;
      puStack_b0[1] = uStack_640;
      puStack_b0[2] = uStack_638;
      uStack_648 = (code *)0x0;
      uStack_640 = 0;
      uStack_638 = 0;
      puStack_b0[5] = uStack_620;
      puStack_b0[3] = (ulong)uStack_630;
      puStack_b0[4] = (ulong)uStack_628;
      uStack_630 = (undefined *)0x0;
      uStack_628 = (long *)0x0;
      uStack_620 = 0;
      puStack_b0[6] = 0;
      puStack_b0[7] = 0;
      puStack_b0[8] = 0;
      puStack_b0[6] = uStack_618;
      puStack_b0[7] = uStack_610;
      puStack_b0[8] = uStack_608;
      uStack_618 = 0;
      uStack_610 = 0;
      uStack_608 = 0;
      puStack_b0[9] = (ulong)pcStack_600;
      puStack_b0[10] = (ulong)pcStack_5f8;
      pcStack_600 = (code *)0x0;
      pcStack_5f8 = (code *)0x0;
      puStack_b0[0xb] = 0;
      puStack_b0[0xc] = 0;
      puStack_b0[0xd] = 0;
      *(undefined4 *)(puStack_b0 + 0xb) = (undefined4)uStack_5f0;
      *(undefined4 *)((long)puStack_b0 + 0x5c) = uStack_5f0._4_4_;
      *(undefined4 *)(puStack_b0 + 0xc) = (undefined4)uStack_5e8;
      *(undefined4 *)((long)puStack_b0 + 100) = uStack_5e8._4_4_;
      puStack_b0[0xd] = uStack_5e0;
      uStack_5f0 = 0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      puStack_b0 = puStack_b0 + 0xe;
    }
    else {
      puStack_b0 = (ulong *)func_0x0652ac80(&lStack_b8,&uStack_648);
    }
    puVar22 = puStack_b0 + -0xe;
    lVar18 = CONCAT17(uStack_711,CONCAT25(uStack_713,CONCAT14(uStack_714,uStack_718)));
  }
  if (lVar18 != 0) {
    lVar23 = CONCAT44(uStack_70c,CONCAT13(uStack_70d,CONCAT21(uStack_70f,uStack_710)));
    lVar19 = lVar18;
    if (lVar18 != lVar23) {
      lVar19 = lVar23 + -0x40;
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
        lVar23 = lVar19 + -0xd8;
        lVar19 = lVar19 + -0x118;
      } while (lVar23 != lVar18);
      lVar19 = CONCAT17(uStack_711,CONCAT25(uStack_713,CONCAT14(uStack_714,uStack_718)));
    }
    uStack_710 = (undefined1)lVar18;
    uStack_70f = (undefined2)((ulong)lVar18 >> 8);
    uStack_70d = (undefined1)((ulong)lVar18 >> 0x18);
    uStack_70c = (undefined4)((ulong)lVar18 >> 0x20);
    func_0x0412a280(lVar19,uStack_708 - lVar19);
  }
  func_0x05f93280(&uStack_648);
  func_0x064e40a0(puVar22);
  if (pcStack_170 != (code *)0x0) {
    (*pcStack_170)(auStack_188);
  }
  if (pcStack_1b8 != (code *)0x0) {
    (*pcStack_1b8)(auStack_1d0);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(&uStack_250);
  }
  if ((uStack_288 & 1) != 0) {
    func_0x0412a280(uStack_278,uStack_288 & 0xfffffffffffffffe);
  }
  if ((uStack_738 & 1) != 0) {
    func_0x0412a280(uStack_728,
                    CONCAT26(uStack_732,CONCAT24(uStack_734,uStack_738)) & 0xfffffffffffffffe);
  }
  if (apcStack_3f0[0] != (code *)0x0) {
    (*apcStack_3f0[0])(auStack_408);
  }
  if (pcStack_438 != (code *)0x0) {
    (*pcStack_438)(auStack_450);
  }
  if (apcStack_478[0] != (code *)0x0) {
    (*apcStack_478[0])(alStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&lStack_4d0);
  }
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))),
                    CONCAT44(uStack_504,uStack_508) & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_778 & 1) != 0) {
    func_0x0412a280(puStack_768,(ulong)puStack_778 & 0xfffffffffffffffe);
  }
  uStack_670 = 0x64496873656d0c;
  func_0x064f17b0(&uStack_288,&uStack_670);
  uStack_758 = 0x736e6f6974706f0e;
  uStack_750 = uStack_750 & 0xffffffffffffff00;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  func_0x048b1dc0(&uStack_630);
  func_0x0652b590(&uStack_620);
  if (((ulong)uStack_648 & 1) == 0) {
    if ((uStack_758 & 1) == 0) {
      uStack_638 = lStack_748;
      uStack_648 = (code *)uStack_758;
      uStack_640 = uStack_750;
    }
    else {
      func_0x04885070(&uStack_648,lStack_748,uStack_750);
    }
  }
  else {
    uVar15 = uStack_758 >> 1 & 0x7f;
    lVar18 = (long)&uStack_758 + 1;
    if ((uStack_758 & 1) != 0) {
      uVar15 = uStack_750;
      lVar18 = lStack_748;
    }
    func_0x04885120(&uStack_648,lVar18,uVar15);
  }
  plVar16 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (plVar16 == (long *)0x0) {
    func_0x048b0de0(&uStack_508,&uStack_718);
    uVar7 = uStack_4fc;
    uVar9 = uStack_500;
    uRam000000000f54fd94 = uStack_504;
    _DAT_0f54fd90 = uStack_508;
    uStack_508 = 0;
    uStack_504 = 0;
    uStack_500 = 0;
    uStack_4fc = 0;
    plVar16 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar9;
    uRam000000000f54fd9c = uVar7;
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar18 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_0412c2d0(plVar16);
      }
    }
    plVar16 = (long *)CONCAT44(uStack_4fc,uStack_500);
    if (plVar16 != (long *)0x0) {
      LOCK();
      plVar17 = plVar16 + 1;
      lVar18 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_0412c2d0(plVar16);
      }
    }
    plVar16 = (long *)CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  if ((DAT_0f6ba5e0 == '\0') && (iVar11 = func_0x04108328(&DAT_0f6ba5e0), iVar11 != 0)) {
    func_0x0b849a50();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f6ba560,0xf53dab8);
    func_0x0410844d(&DAT_0f6ba5e0);
  }
  plVar17 = (long *)(*plVar16 +
                    (ulong)((int)((ulong)(plVar16[1] - *plVar16) >> 3) - 1U &
                           *(uint *)(_DAT_0f6ba560 + 4)) * 8);
  do {
    lVar18 = *plVar17;
    if (lVar18 == -1) goto LAB_0b783040;
    plVar17 = (long *)(plVar16[3] + lVar18 * 0x18);
  } while (*(uint *)(plVar16[3] + 8 + lVar18 * 0x18) != *(uint *)(_DAT_0f6ba560 + 4));
  if (plVar17 == (long *)plVar16[4]) {
LAB_0b783040:
    uStack_630 = &DAT_0f6ba560;
  }
  else {
    uStack_630 = (undefined *)plVar17[2];
  }
  uStack_708 = 0;
  uStack_6f0 = 0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = 0;
  puStack_6d8 = (uint *)0x0;
  plStack_6d0 = (long *)0x0;
  puStack_6e8 = (uint *)0x0;
  puStack_6e0 = (uint *)0x0;
  uStack_718 = 0;
  uStack_714 = 0;
  uStack_713 = 0;
  uStack_711 = 0;
  uStack_710 = 0;
  uStack_70f = 0;
  uStack_70d = 0;
  uStack_70c = 0;
  uStack_700 = 0x1a;
  uStack_6ff = 0x5474696d6d6f63;
  uStack_6f8 = 0x6f;
  uStack_6f7 = 0x57;
  uStack_6f6 = 0x646c726f;
  uStack_6f2 = 0;
  uStack_628 = plVar16;
  func_0x06523ef0(&uStack_508,&uStack_260);
  func_0x06523ef0(apcStack_3f0,&uStack_620);
  uStack_738 = 0;
  uStack_734 = 0;
  uStack_732 = 0;
  uStack_730 = 0;
  uStack_72c = 0;
  uStack_72a = 0;
  uStack_729 = 0;
  uStack_728 = 0;
  bStack_688 = (byte)&uStack_738;
  uStack_687 = (undefined7)((ulong)&uStack_738 >> 8);
  uStack_680 = 0;
  uVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (uVar15 == 0) {
    func_0x0eec74c0(0x230,0);
  }
  uStack_738 = (uint)uVar15;
  uStack_734 = (undefined2)(uVar15 >> 0x20);
  uStack_732 = (undefined2)(uVar15 >> 0x30);
  uStack_72a = (undefined1)(uVar15 >> 0x30);
  uStack_729 = (undefined1)(uVar15 >> 0x38);
  uStack_728 = uVar15 + 0x230;
  puStack_770 = &uStack_650;
  puStack_768 = &uStack_6a0;
  uStack_760 = uStack_760 & 0xffffff00;
  puStack_778 = &uStack_738;
  uStack_730 = uStack_738;
  uStack_72c = uStack_734;
  uStack_6a0 = (code *)uVar15;
  uStack_650 = uVar15;
  func_0x06523ef0(uVar15,&uStack_508);
  uStack_6a0 = (code *)((long)uStack_6a0 + 0x118);
  func_0x06523ef0(uStack_6a0,apcStack_3f0);
  lVar18 = (long)uStack_6a0 + 0x118;
  uStack_730 = (uint)lVar18;
  uStack_72c = (undefined2)((ulong)lVar18 >> 0x20);
  uStack_72a = (undefined1)((ulong)lVar18 >> 0x30);
  uStack_729 = (undefined1)((ulong)lVar18 >> 0x38);
  if (pcStack_300 != (code *)0x0) {
    (*pcStack_300)(auStack_318);
  }
  if (pcStack_348 != (code *)0x0) {
    (*pcStack_348)(auStack_360);
  }
  if (pcStack_388 != (code *)0x0) {
    (*pcStack_388)(auStack_3a0);
  }
  if (pcStack_3c8 != (code *)0x0) {
    (*pcStack_3c8)(auStack_3e0);
  }
  if (pcStack_418 != (code *)0x0) {
    (*pcStack_418)(auStack_430);
  }
  if (pcStack_460 != (code *)0x0) {
    (*pcStack_460)(apcStack_478);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(&pcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&uStack_4f8);
  }
  plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar16 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar16[1] = 0;
  plVar16[2] = 0;
  *plVar16 = (long)&UNK_0f2ddb78;
  uVar9 = func_0x0d858500(&uStack_738);
  plVar17 = plVar16 + 3;
  *(undefined1 *)(plVar16 + 4) = 0;
  *(undefined4 *)((long)plVar16 + 0x24) = uVar9;
  *(undefined4 *)(plVar16 + 5) = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[8] = 0;
  plVar16[3] = (long)&UNK_0f2ddbc8;
  *(uint *)(plVar16 + 9) = uStack_738;
  *(uint *)((long)plVar16 + 0x4c) = CONCAT22(uStack_732,uStack_734);
  *(uint *)(plVar16 + 10) = uStack_730;
  *(uint *)((long)plVar16 + 0x54) = CONCAT13(uStack_729,CONCAT12(uStack_72a,uStack_72c));
  plVar16[0xb] = uStack_728;
  uStack_738 = 0;
  uStack_734 = 0;
  uStack_732 = 0;
  uStack_730 = 0;
  uStack_72c = 0;
  uStack_72a = 0;
  uStack_729 = 0;
  uStack_728 = 0;
  uVar9 = func_0x0d858620(plVar17);
  plVar4 = plStack_6c8;
  *(undefined4 *)(plVar16 + 5) = uVar9;
  plStack_6d0 = plVar17;
  if (plStack_6c8 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_6c8 + 1;
    lVar18 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *plStack_6c8;
      plStack_6c8 = plVar16;
      (**(code **)(lVar18 + 0x10))(plVar4);
      FUN_0412c2d0(plVar4);
      plVar16 = plStack_6c8;
    }
  }
  plStack_6c8 = plVar16;
  uStack_4f8 = (undefined1)uStack_278;
  uStack_4f7 = (undefined1)(uStack_278 >> 8);
  uStack_4f6 = (undefined2)(uStack_278 >> 0x10);
  uStack_4f4 = (undefined4)(uStack_278 >> 0x20);
  uStack_508 = (uint)uStack_288;
  uStack_504 = (undefined4)(uStack_288 >> 0x20);
  uStack_500 = (undefined4)uStack_280;
  uStack_4fc = (undefined4)(uStack_280 >> 0x20);
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_4f0 = (undefined *)uStack_270;
  uStack_4e8 = (undefined *)uStack_268;
  func_0x065281f0(&pcStack_4e0,&uStack_260);
  lStack_3b8 = uStack_638;
  pcStack_3c8 = uStack_648;
  uStack_3c0 = uStack_640;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  uStack_3b0 = (uint)uStack_630;
  uStack_3ac = uStack_630._4_4_;
  uStack_3a8 = (uint)uStack_628;
  uStack_3a4 = uStack_628._4_4_;
  func_0x065281f0(auStack_3a0,&uStack_620);
  puStack_778 = (uint *)0x0;
  puStack_770 = (ulong *)0x0;
  puStack_768 = (ulong *)0x0;
  bStack_688 = (byte)&puStack_778;
  uStack_687 = (undefined7)((ulong)&puStack_778 >> 8);
  uStack_680 = 0;
  puVar13 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar13 == (uint *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar3 = puVar13 + 0xa0;
  puStack_778 = puVar13;
  puStack_770 = (ulong *)puVar13;
  puStack_768 = (ulong *)puVar3;
  if ((uStack_508 & 1) == 0) {
    *(ulong *)(puVar13 + 4) =
         CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8)));
    *(ulong *)puVar13 = CONCAT44(uStack_504,uStack_508);
    *(ulong *)(puVar13 + 2) = CONCAT44(uStack_4fc,uStack_500);
  }
  else {
    func_0x0412e5e0(puVar13,CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))
                                    ),CONCAT44(uStack_4fc,uStack_500));
  }
  puVar13[6] = (uint)uStack_4f0;
  puVar13[7] = uStack_4f0._4_4_;
  puVar13[8] = (uint)uStack_4e8;
  puVar13[9] = uStack_4e8._4_4_;
  func_0x06523ef0(puVar13 + 10,&pcStack_4e0);
  if (((ulong)pcStack_3c8 & 1) == 0) {
    *(long *)(puVar13 + 0x54) = lStack_3b8;
    *(code **)(puVar13 + 0x50) = pcStack_3c8;
    *(ulong *)(puVar13 + 0x52) = uStack_3c0;
  }
  else {
    func_0x0412e5e0(puVar13 + 0x50,lStack_3b8,uStack_3c0);
  }
  puVar13[0x56] = uStack_3b0;
  puVar13[0x57] = uStack_3ac;
  puVar13[0x58] = uStack_3a8;
  puVar13[0x59] = uStack_3a4;
  func_0x06523ef0(puVar13 + 0x5a,auStack_3a0);
  puStack_770 = (ulong *)puVar3;
  if (pcStack_2b0 != (code *)0x0) {
    (*pcStack_2b0)(auStack_2c8);
  }
  if (pcStack_2f8 != (code *)0x0) {
    (*pcStack_2f8)(auStack_310);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (((ulong)pcStack_3c8 & 1) != 0) {
    func_0x0412a280(lStack_3b8,(ulong)pcStack_3c8 & 0xfffffffffffffffe);
  }
  if (apcStack_3f0[0] != (code *)0x0) {
    (*apcStack_3f0[0])(auStack_408);
  }
  if (pcStack_438 != (code *)0x0) {
    (*pcStack_438)(auStack_450);
  }
  if (apcStack_478[0] != (code *)0x0) {
    (*apcStack_478[0])(alStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&lStack_4d0);
  }
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))),
                    CONCAT44(uStack_504,uStack_508) & 0xfffffffffffffffe);
  }
  uVar10 = (**(code **)(*plStack_6d0 + 0x20))();
  uVar21 = ((long)puStack_770 - (long)puStack_778 >> 6) * -0x3333333333333333;
  uVar15 = 0;
  if ((uVar10 != 0) && ((uint)uVar21 != 0)) {
    uVar20 = 0;
    uVar15 = 0;
    uStack_6a4 = uVar10;
    do {
      auVar25 = (**(code **)(*plStack_6d0 + 0x28))(plStack_6d0,uVar20);
      lVar19 = auVar25._8_8_;
      lVar18 = auVar25._0_8_;
      auVar25 = func_0x06527d70();
      if (auVar25._8_8_ == lVar19) {
        if (auVar25._0_8_ == 0) {
          lVar23 = func_0x048aead0(auVar25._8_8_);
          iVar11 = *(int *)(lVar23 + 8);
          if (lVar18 == 0) goto LAB_0b7836de;
LAB_0b7836c1:
          if (iVar11 != *(int *)(lVar18 + 8)) goto LAB_0b7836f0;
        }
        else {
          iVar11 = *(int *)(auVar25._0_8_ + 8);
          if (lVar18 != 0) goto LAB_0b7836c1;
LAB_0b7836de:
          lVar23 = func_0x048aead0(lVar19);
          if (iVar11 != *(int *)(lVar23 + 8)) goto LAB_0b7836f0;
        }
      }
      else {
LAB_0b7836f0:
        auVar25 = func_0x06527e30();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b7838e3;
        }
        auVar25 = func_0x06527ef0();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b7838e3;
        }
        auVar25 = func_0x06527fb0();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b7838e3;
        }
        auVar25 = func_0x06528070();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b7838e3;
        }
        auVar25 = func_0x06528130();
        if (auVar25._8_8_ == lVar19) {
          if (auVar25._0_8_ == 0) {
            lVar23 = func_0x048aead0(auVar25._8_8_);
            iVar11 = *(int *)(lVar23 + 8);
          }
          else {
            iVar11 = *(int *)(auVar25._0_8_ + 8);
          }
          if (lVar18 == 0) {
            lVar23 = func_0x048aead0(lVar19);
            iVar2 = *(int *)(lVar23 + 8);
          }
          else {
            iVar2 = *(int *)(lVar18 + 8);
          }
          if (iVar11 == iVar2) goto LAB_0b7838e3;
        }
        puVar13 = puStack_778;
        puVar22 = puStack_770;
        if (*(long *)(puStack_778 + (uVar15 * 0x28 + 4) * 2) != lVar19) goto joined_r0x0b783af1;
        if (*(long *)(puStack_778 + (uVar15 * 0x28 + 3) * 2) == 0) {
          lVar23 = func_0x048aead0();
          iVar11 = *(int *)(lVar23 + 8);
          if (lVar18 == 0) goto LAB_0b7838cc;
LAB_0b7838b4:
          if (iVar11 != *(int *)(lVar18 + 8)) goto LAB_0b783ae1;
        }
        else {
          iVar11 = *(int *)(*(long *)(puStack_778 + (uVar15 * 0x28 + 3) * 2) + 8);
          if (lVar18 != 0) goto LAB_0b7838b4;
LAB_0b7838cc:
          lVar18 = func_0x048aead0(lVar19);
          if (iVar11 != *(int *)(lVar18 + 8)) goto LAB_0b783ae1;
        }
        uVar15 = (ulong)((int)uVar15 + 1);
      }
LAB_0b7838e3:
    } while (((uint)uVar15 < (uint)uVar21) && (uVar20 = uVar20 + 1, uVar20 < uStack_6a4));
    uVar21 = ((long)puStack_770 - (long)puStack_778 >> 6) * -0x3333333333333333;
  }
  puVar13 = puStack_6e8;
  if (uVar21 == uVar15) {
    puVar3 = puStack_6e0;
    if (puStack_6e8 != (uint *)0x0) {
      while (puVar13 != puVar3) {
        func_0x05fe8450(puVar3 + -0x50);
        puVar3 = puVar3 + -0x50;
      }
      puStack_6e0 = puVar13;
      func_0x0412a280(puStack_6e8,(long)puStack_6d8 - (long)puStack_6e8);
    }
    puStack_6d8 = (uint *)puStack_768;
    if (puStack_b0 < puStack_a8) {
      *puStack_b0 = 0;
      puStack_b0[1] = 0;
      puStack_b0[2] = 0;
      *puStack_b0 = CONCAT17(uStack_711,CONCAT25(uStack_713,CONCAT14(uStack_714,uStack_718)));
      puStack_b0[1] = CONCAT44(uStack_70c,CONCAT13(uStack_70d,CONCAT21(uStack_70f,uStack_710)));
      puStack_b0[2] = uStack_708;
      uStack_718 = 0;
      uStack_714 = 0;
      uStack_713 = 0;
      uStack_711 = 0;
      uStack_710 = 0;
      uStack_70f = 0;
      uStack_70d = 0;
      uStack_70c = 0;
      uStack_708 = 0;
      puStack_b0[5] = uStack_6f0;
      puStack_b0[3] = CONCAT71(uStack_6ff,uStack_700);
      puStack_b0[4] = CONCAT26(uStack_6f2,CONCAT42(uStack_6f6,CONCAT11(uStack_6f7,uStack_6f8)));
      uStack_700 = 0;
      uStack_6ff = 0;
      uStack_6f8 = 0;
      uStack_6f7 = 0;
      uStack_6f6 = 0;
      uStack_6f2 = 0;
      uStack_6f0 = 0;
      puStack_b0[6] = 0;
      puStack_b0[7] = 0;
      puStack_b0[8] = 0;
      puStack_b0[6] = (ulong)puStack_778;
      puStack_b0[7] = (ulong)puStack_770;
      puStack_b0[8] = (ulong)puStack_768;
      puStack_6e8 = (uint *)0x0;
      puStack_6e0 = (uint *)0x0;
      puStack_6d8 = (uint *)0x0;
      puStack_b0[9] = (ulong)plStack_6d0;
      puStack_b0[10] = (ulong)plStack_6c8;
      plStack_6d0 = (long *)0x0;
      plStack_6c8 = (undefined8 *)0x0;
      puStack_b0[0xb] = 0;
      puStack_b0[0xc] = 0;
      puStack_b0[0xd] = 0;
      *(undefined4 *)(puStack_b0 + 0xb) = (undefined4)uStack_6c0;
      *(undefined4 *)((long)puStack_b0 + 0x5c) = uStack_6c0._4_4_;
      *(undefined4 *)(puStack_b0 + 0xc) = (undefined4)uStack_6b8;
      *(undefined4 *)((long)puStack_b0 + 100) = uStack_6b8._4_4_;
      puStack_b0[0xd] = uStack_6b0;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      puStack_b0 = puStack_b0 + 0xe;
    }
    else {
      puStack_6e8 = puStack_778;
      puStack_6e0 = (uint *)puStack_770;
      puStack_b0 = (ulong *)func_0x0652ac80(&lStack_b8,&uStack_718);
    }
    puVar22 = puStack_b0 + -0xe;
    lVar18 = CONCAT26(uStack_732,CONCAT24(uStack_734,uStack_738));
  }
  else {
LAB_0b783ae1:
    puVar13 = puStack_778;
    puVar22 = puStack_770;
    if (puStack_778 != (uint *)0x0) {
joined_r0x0b783af1:
      while (puVar3 = puStack_778, (ulong *)puStack_778 != puVar22) {
        puStack_778 = puVar13;
        func_0x05fe8450((uint *)((long)puVar22 + -0x140));
        puVar13 = puStack_778;
        puVar22 = (ulong *)((long)puVar22 + -0x140);
        puStack_778 = puVar3;
      }
      puStack_770 = (ulong *)puStack_778;
      puStack_778 = puVar13;
      func_0x0412a280(puVar13,(long)puStack_768 - (long)puVar13);
    }
    puVar22 = (ulong *)0xf6b6f80;
    lVar18 = CONCAT26(uStack_732,CONCAT24(uStack_734,uStack_738));
  }
  if (lVar18 != 0) {
    lVar23 = CONCAT17(uStack_729,CONCAT16(uStack_72a,CONCAT24(uStack_72c,uStack_730)));
    lVar19 = lVar18;
    if (lVar18 != lVar23) {
      lVar19 = lVar23 + -0x40;
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
        lVar23 = lVar19 + -0xd8;
        lVar19 = lVar19 + -0x118;
      } while (lVar23 != lVar18);
      lVar19 = CONCAT26(uStack_732,CONCAT24(uStack_734,uStack_738));
    }
    uStack_730 = (uint)lVar18;
    uStack_72c = (undefined2)((ulong)lVar18 >> 0x20);
    uStack_72a = (undefined1)((ulong)lVar18 >> 0x30);
    uStack_729 = (undefined1)((ulong)lVar18 >> 0x38);
    func_0x0412a280(lVar19,uStack_728 - lVar19);
  }
  func_0x05f93280(&uStack_718);
  func_0x064e40a0(puVar22);
  if (pcStack_530 != (code *)0x0) {
    (*pcStack_530)(auStack_548);
  }
  if (pcStack_578 != (code *)0x0) {
    (*pcStack_578)(auStack_590);
  }
  if (pcStack_5b8 != (code *)0x0) {
    (*pcStack_5b8)(auStack_5d0);
  }
  if (pcStack_5f8 != (code *)0x0) {
    (*pcStack_5f8)(&uStack_610);
  }
  if (((ulong)uStack_648 & 1) != 0) {
    func_0x0412a280(uStack_638,(ulong)uStack_648 & 0xfffffffffffffffe);
  }
  if ((uStack_758 & 1) != 0) {
    func_0x0412a280(lStack_748,uStack_758 & 0xfffffffffffffffe);
  }
  if (pcStack_170 != (code *)0x0) {
    (*pcStack_170)(auStack_188);
  }
  if (pcStack_1b8 != (code *)0x0) {
    (*pcStack_1b8)(auStack_1d0);
  }
  if (pcStack_1f8 != (code *)0x0) {
    (*pcStack_1f8)(auStack_210);
  }
  if (pcStack_238 != (code *)0x0) {
    (*pcStack_238)(&uStack_250);
  }
  if ((uStack_288 & 1) != 0) {
    func_0x0412a280(uStack_278,uStack_288 & 0xfffffffffffffffe);
  }
  if ((uStack_670 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_65c,uStack_660),uStack_670 & 0xfffffffffffffffe);
  }
  uStack_718 = 0x71657212;
  uStack_714 = 0x75;
  uStack_713 = 0x7365;
  uStack_711 = 0x74;
  uStack_710 = 0x49;
  uStack_70f = 100;
  func_0x064f17b0(&uStack_508,&uStack_718);
  uStack_278 = 0;
  uStack_260 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  pcStack_238 = (code *)0x0;
  uStack_230 = 0;
  uStack_248 = 0;
  pcStack_240 = (code *)0x0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_270 = 0x506c65636e61631e;
  uStack_268 = 0x746e656d6563616c;
  func_0x065cb3c0(&uStack_648,&uStack_508);
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar14 + 8) = 0;
  *(undefined8 *)((long)pcVar14 + 0x10) = 0;
  *(undefined **)pcVar14 = &UNK_0f2ddc70;
  uVar9 = func_0x0d858500(&uStack_648);
  puVar12 = (undefined8 *)((long)pcVar14 + 0x18);
  *(undefined1 *)((long)pcVar14 + 0x20) = 0;
  *(undefined4 *)((long)pcVar14 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar14 + 0x28) = 0;
  *(undefined8 *)((long)pcVar14 + 0x30) = 0;
  *(undefined8 *)((long)pcVar14 + 0x38) = 0;
  *(undefined8 *)((long)pcVar14 + 0x40) = 0;
  *(undefined **)((long)pcVar14 + 0x18) = &UNK_0f2ddcc0;
  *(undefined4 *)((long)pcVar14 + 0x48) = (undefined4)uStack_648;
  *(undefined4 *)((long)pcVar14 + 0x4c) = uStack_648._4_4_;
  *(undefined4 *)((long)pcVar14 + 0x50) = (undefined4)uStack_640;
  *(undefined4 *)((long)pcVar14 + 0x54) = uStack_640._4_4_;
  *(ulong *)((long)pcVar14 + 0x58) = uStack_638;
  uStack_648 = (code *)0x0;
  uStack_640 = 0;
  uStack_638 = 0;
  uVar9 = func_0x0d858620(puVar12);
  pcVar1 = pcStack_238;
  *(undefined4 *)((long)pcVar14 + 0x28) = uVar9;
  pcStack_240 = (code *)puVar12;
  if (pcStack_238 != (code *)0x0) {
    LOCK();
    plVar16 = (long *)((long)pcStack_238 + 8);
    lVar18 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      lVar18 = *(long *)pcStack_238;
      pcStack_238 = pcVar14;
      (**(code **)(lVar18 + 0x10))(pcVar1);
      FUN_0412c2d0(pcVar1);
      pcVar14 = pcStack_238;
    }
  }
  pcStack_238 = pcVar14;
  cVar8 = func_0x065cb540(&uStack_288,&uStack_508);
  plVar16 = plStack_38;
  if (cVar8 == '\0') {
    puVar22 = (ulong *)0xf6b6f80;
    lVar18 = (long)uStack_648;
  }
  else {
    if (puStack_b0 < puStack_a8) {
      *puStack_b0 = 0;
      puStack_b0[1] = 0;
      puStack_b0[2] = 0;
      *puStack_b0 = uStack_288;
      puStack_b0[1] = uStack_280;
      puStack_b0[2] = uStack_278;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      puStack_b0[5] = uStack_260;
      puStack_b0[3] = uStack_270;
      puStack_b0[4] = uStack_268;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      puStack_b0[6] = 0;
      puStack_b0[7] = 0;
      puStack_b0[8] = 0;
      puStack_b0[6] = uStack_258;
      puStack_b0[7] = uStack_250;
      puStack_b0[8] = uStack_248;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      puStack_b0[9] = (ulong)pcStack_240;
      puStack_b0[10] = (ulong)pcStack_238;
      pcStack_240 = (code *)0x0;
      pcStack_238 = (code *)0x0;
      puStack_b0[0xb] = 0;
      puStack_b0[0xc] = 0;
      puStack_b0[0xd] = 0;
      puStack_b0[0xb] = uStack_230;
      puStack_b0[0xc] = uStack_228;
      puStack_b0[0xd] = uStack_220;
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      puStack_b0 = puStack_b0 + 0xe;
    }
    else {
      puStack_b0 = (ulong *)func_0x0652ac80(&lStack_b8,&uStack_288);
    }
    puVar22 = puStack_b0 + -0xe;
    lVar18 = (long)uStack_648;
  }
  uStack_648 = (code *)lVar18;
  if (lVar18 != 0) {
    if (lVar18 != uStack_640) {
      lVar19 = uStack_640 + -0x40;
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
        lVar23 = lVar19 + -0xd8;
        lVar19 = lVar19 + -0x118;
      } while (lVar23 != lVar18);
    }
    uStack_640 = lVar18;
    func_0x0412a280(uStack_648,uStack_638 - (long)uStack_648);
  }
  func_0x05f93280(&uStack_288);
  func_0x064e40a0(puVar22);
  if (apcStack_3f0[0] != (code *)0x0) {
    (*apcStack_3f0[0])(auStack_408);
  }
  if (pcStack_438 != (code *)0x0) {
    (*pcStack_438)(auStack_450);
  }
  if (apcStack_478[0] != (code *)0x0) {
    (*apcStack_478[0])(alStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&lStack_4d0);
  }
  if ((uStack_508 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_4f4,CONCAT22(uStack_4f6,CONCAT11(uStack_4f7,uStack_4f8))),
                    CONCAT44(uStack_504,uStack_508) & 0xfffffffffffffffe);
  }
  if ((uStack_718 & 1) != 0) {
    func_0x0412a280(uStack_708,
                    CONCAT17(uStack_711,CONCAT25(uStack_713,CONCAT14(uStack_714,uStack_718))) &
                    0xfffffffffffffffe);
  }
  func_0x064e40a0(&lStack_148);
  auStack_100 = func_0x0b841560();
  lVar19 = lStack_130;
  lVar18 = lStack_128;
  if (lStack_130 != 0) {
    for (; lVar19 != lVar18; lVar18 = lVar18 + -0x30) {
      if ((*(byte *)(lVar18 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar18 + -0x10),
                        *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_128 = lVar19;
    func_0x0412a280(lStack_130,lStack_120 - lStack_130);
  }
  lVar23 = lStack_138;
  lVar19 = lStack_140;
  lVar18 = lStack_148;
  lStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  *plVar16 = lVar18;
  plVar16[1] = lVar19;
  plVar16[2] = lVar23;
  lStack_130 = 0;
  lStack_128 = 0;
  lStack_120 = 0;
  plVar16[5] = lStack_108;
  plVar16[3] = uStack_118;
  plVar16[4] = uStack_110;
  uStack_118 = 0;
  uStack_110 = 0;
  lStack_108 = 0;
  *(undefined4 *)(plVar16 + 8) = uStack_f0;
  *(undefined4 *)((long)plVar16 + 0x44) = uStack_ec;
  *(undefined4 *)(plVar16 + 9) = uStack_e8;
  *(undefined4 *)((long)plVar16 + 0x4c) = uStack_e4;
  *(undefined1 (*) [16])(plVar16 + 6) = auStack_100;
  plVar16[10] = lStack_e0;
  plVar16[0xb] = lStack_d8;
  plVar16[0xc] = lStack_d0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  lStack_d0 = 0;
  plVar16[0xd] = lStack_c8;
  plVar16[0xe] = lStack_c0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  plVar16[0xf] = lStack_b8;
  plVar16[0x10] = (long)puStack_b0;
  plVar16[0x11] = (long)puStack_a8;
  lStack_b8 = 0;
  puStack_b0 = (ulong *)0x0;
  puStack_a8 = (ulong *)0x0;
  plVar16[0x12] = lStack_a0;
  plVar16[0x13] = lStack_98;
  plVar16[0x14] = lStack_90;
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  plVar16[0x15] = lStack_88;
  plVar16[0x16] = lStack_80;
  plVar16[0x17] = lStack_78;
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  plVar16[0x18] = lStack_70;
  plVar16[0x19] = lStack_68;
  plVar16[0x1a] = lStack_60;
  lStack_70 = 0;
  lStack_68 = 0;
  lStack_60 = 0;
  *(undefined4 *)(plVar16 + 0x1b) = (undefined4)uStack_58;
  *(undefined4 *)((long)plVar16 + 0xdc) = uStack_58._4_4_;
  *(undefined4 *)(plVar16 + 0x1c) = (undefined4)uStack_50;
  *(undefined4 *)((long)plVar16 + 0xe4) = uStack_50._4_4_;
  plVar16[0x1d] = lStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  func_0x0651ffe0(&lStack_130);
  lVar19 = lStack_148;
  lVar18 = lStack_140;
  if (lStack_148 != 0) {
    for (; lVar19 != lVar18; lVar18 = lVar18 + -0x30) {
      if ((*(byte *)(lVar18 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar18 + -0x10),
                        *(ulong *)(lVar18 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_140 = lVar19;
    func_0x0412a280(lStack_148,lStack_138 - lStack_148);
  }
  return plVar16;
}



/* ---- referenced strings ----
 * 0x14d87b9  MeshCacheManager
 */
