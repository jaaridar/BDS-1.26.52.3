/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xab3d5b0 (ELF vaddr 0xaa3d5b0)
 * Label: caller-of-callee
 * Body:  [[0ab3d5b0, 0ab3e582] [0ab3e590, 0ab3f163] [0ab3f170, 0ab3f591] [0ab3f5a0, 0ab3f5fb] [0ab3f600, 0ab3f82b] [0ab3f830, 0ab3f967] [0ab3fc23, 0ab3fc2a] [0ab3fdae, 0ab3fde8] [0ab3fe64, 0ab3fe8c]]
 * Ghidra: FUN_0ab3d5b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ab3d5b0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  byte bVar4;
  undefined1 auVar5 [8];
  undefined1 auVar6 [8];
  long *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  int iVar10;
  long *plVar11;
  ulong *puVar12;
  uint *puVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  char cVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_798 [8];
  undefined8 uStack_790;
  ulong *puStack_788;
  undefined1 uStack_780;
  uint uStack_778;
  undefined4 uStack_774;
  undefined1 uStack_770;
  undefined1 uStack_76f;
  undefined2 uStack_76e;
  undefined4 uStack_76c;
  long lStack_768;
  ulong uStack_758;
  ulong uStack_750;
  code *pcStack_748;
  byte bStack_738;
  undefined7 uStack_737;
  undefined1 uStack_730;
  undefined1 uStack_72f;
  undefined8 uStack_728;
  long lStack_720;
  undefined1 auStack_718 [8];
  ulong uStack_710;
  uint **ppuStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong *puStack_6e8;
  ulong *puStack_6e0;
  ulong *puStack_6d8;
  long *plStack_6d0;
  long *plStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  ulong uStack_6b0;
  uint *puStack_6a8;
  undefined1 uStack_6a0;
  undefined8 uStack_698;
  long lStack_690;
  uint *puStack_688;
  undefined1 uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  undefined8 uStack_660;
  long lStack_658;
  long lStack_650;
  code *pcStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  ulong uStack_628;
  ulong uStack_620;
  code *pcStack_618;
  undefined1 auStack_610 [16];
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  code *pcStack_5f0;
  long *plStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  ulong *puStack_5b8;
  code *pcStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_548 [8];
  ulong uStack_540;
  code *pcStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  code *pcStack_520;
  undefined1 auStack_518 [16];
  undefined8 uStack_508;
  undefined8 uStack_500;
  code *pcStack_4f8;
  long *plStack_4f0;
  undefined8 uStack_4e8;
  code *pcStack_4e0;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  ulong *puStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  code *pcStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined8 uStack_460;
  code *pcStack_458;
  undefined1 auStack_448 [24];
  code *apcStack_430 [2];
  undefined1 auStack_420 [24];
  code *pcStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 auStack_3e0 [16];
  undefined1 auStack_3d0 [8];
  code *pcStack_3c8;
  code *pcStack_3b8;
  undefined1 auStack_3a0 [16];
  undefined1 auStack_390 [8];
  code *pcStack_388;
  code *pcStack_378;
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [16];
  code *pcStack_340;
  code *pcStack_338;
  undefined1 auStack_308 [24];
  code *pcStack_2f0;
  long *plStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  long *plStack_270;
  code *pcStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined1 auStack_240 [24];
  code *pcStack_228;
  undefined1 auStack_200 [24];
  code *pcStack_1e8;
  undefined1 auStack_1b8 [24];
  code *pcStack_1a0;
  undefined8 uStack_178;
  undefined *puStack_170;
  code *pcStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  code *pcStack_128;
  undefined1 auStack_100 [24];
  code *pcStack_e8;
  undefined1 auStack_c0 [24];
  code *pcStack_a8;
  undefined1 auStack_78 [24];
  code *pcStack_60;
  
  cVar21 = *(char *)((long)param_3 + 0x24);
  if (cVar21 == '\x04') {
    return;
  }
  plVar11 = (long *)*param_3;
  plStack_2c8 = plVar11;
  if (cVar21 == '\x02') {
    plStack_2c8 = param_3;
  }
  uStack_660 = param_2;
  if (plStack_2c8 == (long *)0x0 || (int)param_3[4] != -0x6c312afa) {
    if ((code *)param_3[7] == (code *)0x0) {
      return;
    }
    lVar19 = param_3[5];
    lVar15 = param_3[6];
    if (lVar15 == 0) {
      (*(code *)param_3[7])(0,param_3,0);
      lVar15 = param_3[6];
      cVar21 = *(char *)((long)param_3 + 0x24);
      plVar11 = (long *)*param_3;
    }
    if (cVar21 == '\x02') {
      plVar11 = param_3;
    }
    plStack_2c8 = (long *)func_0x0488e200(lVar19,lVar15,0x93ced506,plVar11);
    if (plStack_2c8 == (long *)0x0) {
      return;
    }
  }
  if (*plStack_2c8 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uStack_758 = 0;
    uStack_750 = 0;
    pcStack_748 = (code *)0x0;
    func_0x0652b220(&uStack_758,*(long *)(param_1 + 0x68),*(long *)(param_1 + 0x70),
                    (*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4) *
                    -0x5555555555555555);
    pcVar14 = *(code **)(param_1 + 0x38);
  }
  else {
    if (*(code **)(param_1 + 0x38) == (code *)0x0) {
      (**(code **)(param_1 + 0x40))(auStack_548);
    }
    else {
      (**(code **)(param_1 + 0x38))();
    }
    pcVar8 = pcStack_538;
    uStack_678 = (ulong)auStack_548;
    uStack_670 = uStack_540;
    auStack_548 = (undefined1  [8])0x0;
    uStack_540 = 0;
    pcStack_538 = (code *)0x0;
    func_0x0651ffe0(auStack_548);
    pcVar14 = *(code **)(param_1 + 0x38);
    pcStack_748 = pcVar8;
    uStack_758 = uStack_678;
    uStack_750 = uStack_670;
  }
  if (pcVar14 != (code *)0x0) {
    (*pcVar14)(auStack_548);
    func_0x0d84fd50(uStack_660,auStack_548);
    func_0x0651ffe0(auStack_548);
  }
  func_0x0ab425b0(auStack_548);
  if ((DAT_0f6934a0 == '\0') && (iVar10 = func_0x04108328(&DAT_0f6934a0), iVar10 != 0)) {
    func_0x0ab46e10();
    func_0x0410844d(&DAT_0f6934a0);
  }
  uStack_178 = CONCAT44(uStack_178._4_4_,_DAT_0f69348c);
  puStack_170 = &UNK_0ab46d40;
  pcStack_168 = (code *)&UNK_0ab46e00;
  func_0x05da1460(auStack_548);
  bVar4 = *(byte *)(param_1 + 0x20);
  if ((bVar4 & 1) == 0) {
    uVar18 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar18 = *(ulong *)(param_1 + 0x28);
  }
  uVar25 = uVar18 + 0x10;
  if (0xfffffffffffffff7 < uVar25) {
    uVar16 = FUN_04882e30();
    func_0x06523ec0(auStack_798);
    func_0x05f93280(&uStack_2b8);
    func_0x0ab46c30(&uStack_178);
    if ((uStack_778 & 1) != 0) {
      func_0x0412a280(lStack_768,CONCAT44(uStack_774,uStack_778) & 0xfffffffffffffffe);
    }
    func_0x0ab46cc0(&lStack_658);
    func_0x06685e60(&uStack_758);
    func_0x0eee2d70(uVar16);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (uVar25 < 0x17) {
    uStack_540 = 0;
    pcStack_538 = (code *)0x0;
    auStack_548._1_7_ = 0;
    auStack_548[0] = (char)uVar25 * '\x02';
    pcVar14 = (code *)(auStack_548 + 1);
    if (uVar18 != 0) {
      if ((bVar4 & 1) == 0) goto LAB_0ab3d882;
LAB_0ab3d822:
      lVar19 = *(long *)(param_1 + 0x30);
      goto LAB_0ab3d886;
    }
  }
  else {
    uVar22 = 0x1a;
    if ((uVar25 | 7) != 0x17) {
      uVar22 = (uVar25 | 7) + 1;
    }
    pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar22);
    if (pcVar14 == (code *)0x0) {
      func_0x0eec74c0(uVar22,0);
    }
    auStack_548 = (undefined1  [8])(uVar22 | 1);
    uStack_540 = uVar25;
    pcStack_538 = pcVar14;
    if ((bVar4 & 1) != 0) goto LAB_0ab3d822;
LAB_0ab3d882:
    lVar19 = param_1 + 0x21;
LAB_0ab3d886:
    func_0x0eee2ee0(pcVar14,lVar19,uVar18);
  }
  *(undefined8 *)(pcVar14 + uVar18) = _DAT_0147b3d0;
  *(undefined8 *)(pcVar14 + uVar18 + 8) = _UNK_0147b3d8;
  pcVar14[uVar18 + 0x10] = (code)0x0;
  uStack_628 = 0;
  uStack_620 = 0;
  lStack_638 = 0;
  lStack_630 = 0;
  pcStack_648 = (code *)0x0;
  lStack_640 = 0;
  lStack_658 = 0;
  lStack_650 = 0;
  pcStack_618 = (code *)0x0;
  func_0x048b1dc0(auStack_610);
  func_0x048b1dc0(&uStack_600);
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_570 = 0;
  uStack_568 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  uStack_5a0 = 0;
  uStack_598 = 0;
  pcStack_5b0 = (code *)0x0;
  uStack_5a8 = 0;
  uStack_5c0 = (ulong *)0x0;
  puStack_5b8 = (ulong *)0x0;
  uStack_5d0 = 0;
  uStack_5c8 = 0;
  uStack_5e0 = 0;
  uStack_5d8 = 0;
  pcStack_5f0 = (code *)0x0;
  plStack_5e8 = (long *)0x0;
  if ((uStack_628 & 1) == 0) {
    if (((ulong)auStack_548 & 1) == 0) {
      pcStack_618 = pcStack_538;
      uStack_628 = (ulong)auStack_548;
      uStack_620 = uStack_540;
    }
    else {
      func_0x04885070(&uStack_628,pcStack_538,uStack_540);
    }
  }
  else {
    uVar18 = (ulong)auStack_548 >> 1 & 0x7f;
    pcVar14 = (code *)(auStack_548 + 1);
    if (((ulong)auStack_548 & 1) != 0) {
      uVar18 = uStack_540;
      pcVar14 = pcStack_538;
    }
    func_0x04885120(&uStack_628,pcVar14,uVar18);
  }
  if (((ulong)auStack_548 & 1) != 0) {
    func_0x0412a280(pcStack_538,(ulong)auStack_548 & 0xfffffffffffffffe);
  }
  bStack_738 = 0x10;
  uStack_737 = 0x6361626c6c6163;
  uStack_730 = 0x6b;
  uStack_72f = 0;
  func_0x0ab46850(&uStack_178,&bStack_738);
  puStack_6a8 = (uint *)0x736e6f6974706f0e;
  uStack_6a0 = 0;
  func_0x0ab46920(&uStack_2b8,&puStack_6a8);
  ppuStack_708 = (uint **)0x0;
  uStack_6f0 = 0;
  uStack_6b8 = 0;
  uStack_6b0 = 0;
  plStack_6c8 = (long *)0x0;
  uStack_6c0 = 0;
  puStack_6d8 = (ulong *)0x0;
  plStack_6d0 = (long *)0x0;
  puStack_6e8 = (ulong *)0x0;
  puStack_6e0 = (ulong *)0x0;
  auStack_718 = (undefined1  [8])0x0;
  uStack_710 = 0;
  uStack_700 = 0x6972637362757312;
  uStack_6f8 = 0x6562;
  func_0x06523ef0(auStack_548,auStack_150);
  func_0x06523ef0(apcStack_430,&uStack_290);
  uStack_778 = 0;
  uStack_774 = 0;
  uStack_770 = 0;
  uStack_76f = 0;
  uStack_76e = 0;
  uStack_76c = 0;
  lStack_768 = 0;
  uStack_680 = 0;
  puStack_688 = &uStack_778;
  lStack_720 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x230);
  if (lStack_720 == 0) {
    func_0x0eec74c0(0x230,0);
  }
  uStack_778 = (uint)lStack_720;
  uStack_774 = (undefined4)((ulong)lStack_720 >> 0x20);
  uStack_770 = (undefined1)lStack_720;
  uStack_76f = (undefined1)((ulong)lStack_720 >> 8);
  uStack_76e = (undefined2)((ulong)lStack_720 >> 0x10);
  lStack_768 = lStack_720 + 0x230;
  uStack_790 = (undefined1  [8])&lStack_2c0;
  puStack_788 = (ulong *)&lStack_720;
  uStack_780 = 0;
  auStack_798 = (undefined1  [8])&uStack_778;
  uStack_76c = uStack_774;
  lStack_2c0 = lStack_720;
  func_0x06523ef0(lStack_720,auStack_548);
  lStack_720 = lStack_720 + 0x118;
  func_0x06523ef0(lStack_720,apcStack_430);
  lVar19 = lStack_720 + 0x118;
  uStack_770 = (undefined1)lVar19;
  uStack_76f = (undefined1)((ulong)lVar19 >> 8);
  uStack_76e = (undefined2)((ulong)lVar19 >> 0x10);
  uStack_76c = (undefined4)((ulong)lVar19 >> 0x20);
  if (pcStack_340 != (code *)0x0) {
    (*pcStack_340)(auStack_358);
  }
  if (pcStack_388 != (code *)0x0) {
    (*pcStack_388)(auStack_3a0);
  }
  if (pcStack_3c8 != (code *)0x0) {
    (*pcStack_3c8)(auStack_3e0);
  }
  if (pcStack_408 != (code *)0x0) {
    (*pcStack_408)(auStack_420);
  }
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(&uStack_470);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(&pcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&pcStack_4f8);
  }
  if (pcStack_520 != (code *)0x0) {
    (*pcStack_520)(&pcStack_538);
  }
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (plVar11 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0f25d2f8;
  lStack_690 = param_1;
  uVar9 = func_0x0d858500(&uStack_778);
  plVar1 = plVar11 + 3;
  *(undefined1 *)(plVar11 + 4) = 2;
  *(undefined4 *)((long)plVar11 + 0x24) = uVar9;
  *(undefined4 *)(plVar11 + 5) = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  plVar11[3] = (long)&UNK_0f25d348;
  *(uint *)(plVar11 + 9) = uStack_778;
  *(undefined4 *)((long)plVar11 + 0x4c) = uStack_774;
  *(uint *)(plVar11 + 10) = CONCAT22(uStack_76e,CONCAT11(uStack_76f,uStack_770));
  *(undefined4 *)((long)plVar11 + 0x54) = uStack_76c;
  plVar11[0xb] = lStack_768;
  uStack_778 = 0;
  uStack_774 = 0;
  uStack_770 = 0;
  uStack_76f = 0;
  uStack_76e = 0;
  uStack_76c = 0;
  lStack_768 = 0;
  uVar9 = func_0x0d858620(plVar1);
  plVar7 = plStack_6c8;
  *(undefined4 *)(plVar11 + 5) = uVar9;
  plStack_6d0 = plVar1;
  if (plStack_6c8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_6c8 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      lVar19 = *plStack_6c8;
      plStack_6c8 = plVar11;
      (**(code **)(lVar19 + 0x10))(plVar7);
      FUN_0412c2d0(plVar7);
      plVar11 = plStack_6c8;
    }
  }
  plStack_6c8 = plVar11;
  _auStack_548 = func_0x0ab4aec0();
  _auStack_798 = func_0x0ab134e0();
  func_0x0d850780(auStack_548,auStack_798);
  func_0x0ab4b030();
  pcStack_538 = pcStack_168;
  auStack_548 = (undefined1  [8])uStack_178;
  uStack_540 = (ulong)puStack_170;
  uStack_178 = 0;
  puStack_170 = (undefined *)0x0;
  pcStack_168 = (code *)0x0;
  uStack_530 = CONCAT44(uStack_15c,uStack_160);
  uStack_528 = CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&pcStack_520,auStack_150);
  uStack_3f8 = uStack_2a8;
  pcStack_408 = (code *)uStack_2b8;
  uStack_400 = uStack_2b0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_3f0 = (undefined4)uStack_2a0;
  uStack_3ec = uStack_2a0._4_4_;
  uStack_3e8 = (undefined4)uStack_298;
  uStack_3e4 = uStack_298._4_4_;
  func_0x065281f0(auStack_3e0,&uStack_290);
  auStack_798 = (undefined1  [8])0x0;
  uStack_790 = (undefined1  [8])0x0;
  puStack_788 = (ulong *)0x0;
  uStack_680 = 0;
  puStack_688 = (uint *)auStack_798;
  puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x280);
  if (puVar12 == (ulong *)0x0) {
    func_0x0eec74c0(0x280,0);
  }
  puVar2 = puVar12 + 0x50;
  auStack_798 = (undefined1  [8])puVar12;
  uStack_790 = (undefined1  [8])puVar12;
  puStack_788 = puVar2;
  if (((ulong)auStack_548 & 1) == 0) {
    puVar12[2] = (ulong)pcStack_538;
    *puVar12 = (ulong)auStack_548;
    puVar12[1] = uStack_540;
  }
  else {
    func_0x0412e5e0(puVar12,pcStack_538,uStack_540);
  }
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_530;
  *(undefined4 *)((long)puVar12 + 0x1c) = uStack_530._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)uStack_528;
  *(undefined4 *)((long)puVar12 + 0x24) = uStack_528._4_4_;
  func_0x06523ef0(puVar12 + 5,&pcStack_520);
  if (((ulong)pcStack_408 & 1) == 0) {
    puVar12[0x2a] = uStack_3f8;
    puVar12[0x28] = (ulong)pcStack_408;
    puVar12[0x29] = uStack_400;
  }
  else {
    func_0x0412e5e0(puVar12 + 0x28,uStack_3f8,uStack_400);
  }
  *(undefined4 *)(puVar12 + 0x2b) = uStack_3f0;
  *(undefined4 *)((long)puVar12 + 0x15c) = uStack_3ec;
  *(undefined4 *)(puVar12 + 0x2c) = uStack_3e8;
  *(undefined4 *)((long)puVar12 + 0x164) = uStack_3e4;
  func_0x06523ef0(puVar12 + 0x2d,auStack_3e0);
  uStack_790 = (undefined1  [8])puVar2;
  if (pcStack_2f0 != (code *)0x0) {
    (*pcStack_2f0)(auStack_308);
  }
  if (pcStack_338 != (code *)0x0) {
    (*pcStack_338)(auStack_350);
  }
  if (pcStack_378 != (code *)0x0) {
    (*pcStack_378)(auStack_390);
  }
  if (pcStack_3b8 != (code *)0x0) {
    (*pcStack_3b8)(auStack_3d0);
  }
  if (((ulong)pcStack_408 & 1) != 0) {
    func_0x0412a280(uStack_3f8,(ulong)pcStack_408 & 0xfffffffffffffffe);
  }
  if (apcStack_430[0] != (code *)0x0) {
    (*apcStack_430[0])(auStack_448);
  }
  if (pcStack_478 != (code *)0x0) {
    (*pcStack_478)(&uStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&uStack_4d0);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_518 + 8);
  }
  if (((ulong)auStack_548 & 1) != 0) {
    func_0x0412a280(pcStack_538,(ulong)auStack_548 & 0xfffffffffffffffe);
  }
  iVar10 = (**(code **)(*plStack_6d0 + 0x20))();
  uVar25 = ((long)uStack_790 - (long)auStack_798 >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((iVar10 != 0) && ((uint)uVar25 != 0)) {
    uStack_678 = CONCAT44(uStack_678._4_4_,iVar10);
    uVar24 = 0;
    uVar18 = 0;
    do {
      auVar27 = (**(code **)(*plStack_6d0 + 0x28))(plStack_6d0,uVar24);
      uVar22 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      auVar27 = func_0x06527d70();
      if (auVar27._8_8_ == uVar22) {
        if (auVar27._0_8_ == 0) {
          lVar15 = func_0x048aead0(auVar27._8_8_);
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar19 != 0) goto LAB_0ab3e0f2;
LAB_0ab3e111:
          lVar15 = func_0x048aead0(uVar22);
          if (iVar10 != *(int *)(lVar15 + 8)) goto LAB_0ab3e130;
        }
        else {
          iVar10 = *(int *)(auVar27._0_8_ + 8);
          if (lVar19 == 0) goto LAB_0ab3e111;
LAB_0ab3e0f2:
          if (iVar10 != *(int *)(lVar19 + 8)) goto LAB_0ab3e130;
        }
      }
      else {
LAB_0ab3e130:
        auVar27 = func_0x06527e30();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3e325;
        }
        auVar27 = func_0x06527ef0();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3e325;
        }
        auVar27 = func_0x06527fb0();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3e325;
        }
        auVar27 = func_0x06528070();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3e325;
        }
        auVar27 = func_0x06528130();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3e325;
        }
        auVar5 = auStack_798;
        puVar12 = (ulong *)uStack_790;
        if (*(ulong *)((long)auStack_798 + (uVar18 * 0x28 + 4) * 8) != uVar22)
        goto joined_r0x0ab3e52a;
        if (*(ulong *)((long)auStack_798 + (uVar18 * 0x28 + 3) * 8) == 0) {
          lVar15 = func_0x048aead0();
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar19 != 0) goto LAB_0ab3e2f5;
LAB_0ab3e30e:
          lVar19 = func_0x048aead0(uVar22);
          if (iVar10 != *(int *)(lVar19 + 8)) goto LAB_0ab3e51a;
        }
        else {
          iVar10 = *(int *)(*(ulong *)((long)auStack_798 + (uVar18 * 0x28 + 3) * 8) + 8);
          if (lVar19 == 0) goto LAB_0ab3e30e;
LAB_0ab3e2f5:
          if (iVar10 != *(int *)(lVar19 + 8)) goto LAB_0ab3e51a;
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      }
LAB_0ab3e325:
      if ((uint)uVar25 <= (uint)uVar18) break;
      uVar24 = uVar24 + 1;
    } while (uVar24 < (uint)uStack_678);
    uVar25 = ((long)uStack_790 - (long)auStack_798 >> 6) * -0x3333333333333333;
  }
  puVar12 = puStack_6e8;
  if (uVar25 == uVar18) {
    puVar2 = puStack_6e0;
    if (puStack_6e8 != (ulong *)0x0) {
      while (puVar12 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_6e0 = puVar12;
      func_0x0412a280(puStack_6e8,(long)puStack_6d8 - (long)puStack_6e8);
    }
    puStack_6d8 = puStack_788;
    if (uStack_5c0 < puStack_5b8) {
      *uStack_5c0 = 0;
      uStack_5c0[1] = 0;
      uStack_5c0[2] = 0;
      *uStack_5c0 = (ulong)auStack_718;
      uStack_5c0[1] = uStack_710;
      uStack_5c0[2] = (ulong)ppuStack_708;
      auStack_718 = (undefined1  [8])0x0;
      uStack_710 = 0;
      ppuStack_708 = (uint **)0x0;
      uStack_5c0[5] = uStack_6f0;
      uStack_5c0[3] = uStack_700;
      uStack_5c0[4] = uStack_6f8;
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      uStack_5c0[6] = 0;
      uStack_5c0[7] = 0;
      uStack_5c0[8] = 0;
      uStack_5c0[6] = (ulong)auStack_798;
      uStack_5c0[7] = (ulong)uStack_790;
      uStack_5c0[8] = (ulong)puStack_788;
      puStack_6e8 = (ulong *)0x0;
      puStack_6e0 = (ulong *)0x0;
      puStack_6d8 = (ulong *)0x0;
      uStack_5c0[9] = (ulong)plStack_6d0;
      uStack_5c0[10] = (ulong)plStack_6c8;
      plStack_6d0 = (long *)0x0;
      plStack_6c8 = (undefined8 *)0x0;
      uStack_5c0[0xb] = 0;
      uStack_5c0[0xc] = 0;
      uStack_5c0[0xd] = 0;
      *(undefined4 *)(uStack_5c0 + 0xb) = (undefined4)uStack_6c0;
      *(undefined4 *)((long)uStack_5c0 + 0x5c) = uStack_6c0._4_4_;
      *(undefined4 *)(uStack_5c0 + 0xc) = (undefined4)uStack_6b8;
      *(undefined4 *)((long)uStack_5c0 + 100) = uStack_6b8._4_4_;
      uStack_5c0[0xd] = uStack_6b0;
      uStack_6c0 = 0;
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      uStack_5c0 = uStack_5c0 + 0xe;
    }
    else {
      puStack_6e8 = (ulong *)auStack_798;
      puStack_6e0 = (ulong *)uStack_790;
      uStack_5c0 = (ulong *)func_0x0652ac80(&uStack_5c8,auStack_718);
    }
    puVar12 = uStack_5c0 + -0xe;
    lVar19 = CONCAT44(uStack_774,uStack_778);
  }
  else {
LAB_0ab3e51a:
    auVar5 = auStack_798;
    puVar12 = (ulong *)uStack_790;
    if (auStack_798 != (undefined1  [8])0x0) {
joined_r0x0ab3e52a:
      while (auVar6 = auStack_798, auStack_798 != (undefined1  [8])puVar12) {
        auStack_798 = auVar5;
        func_0x05fe8450(puVar12 + -0x28);
        auVar5 = auStack_798;
        puVar12 = puVar12 + -0x28;
        auStack_798 = auVar6;
      }
      uStack_790 = auStack_798;
      auStack_798 = auVar5;
      func_0x0412a280(auVar5,(long)puStack_788 - (long)auVar5);
    }
    puVar12 = (ulong *)0xf6920c8;
    lVar19 = CONCAT44(uStack_774,uStack_778);
  }
  if (lVar19 != 0) {
    lVar23 = CONCAT44(uStack_76c,CONCAT22(uStack_76e,CONCAT11(uStack_76f,uStack_770)));
    lVar15 = lVar19;
    if (lVar19 != lVar23) {
      lVar15 = lVar23 + -0x40;
      do {
        if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
          (**(code **)(lVar15 + 0x18))(lVar15);
        }
        if (*(code **)(lVar15 + -0x30) != (code *)0x0) {
          (**(code **)(lVar15 + -0x30))(lVar15 + -0x48);
        }
        if (*(code **)(lVar15 + -0x70) != (code *)0x0) {
          (**(code **)(lVar15 + -0x70))(lVar15 + -0x88);
        }
        if (*(code **)(lVar15 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar15 + -0xb0))(lVar15 + -200);
        }
        lVar23 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while (lVar23 != lVar19);
      lVar15 = CONCAT44(uStack_774,uStack_778);
    }
    uStack_770 = (undefined1)lVar19;
    uStack_76f = (undefined1)((ulong)lVar19 >> 8);
    uStack_76e = (undefined2)((ulong)lVar19 >> 0x10);
    uStack_76c = (undefined4)((ulong)lVar19 >> 0x20);
    func_0x0412a280(lVar15,lStack_768 - lVar15);
  }
  func_0x05f93280(auStack_718);
  if (puVar12 != &uStack_758) {
    func_0x066dff70(puVar12,uStack_758,uStack_750,
                    ((long)(uStack_750 - uStack_758) >> 4) * -0x5555555555555555);
  }
  if (pcStack_1a0 != (code *)0x0) {
    (*pcStack_1a0)(auStack_1b8);
  }
  if (pcStack_1e8 != (code *)0x0) {
    (*pcStack_1e8)(auStack_200);
  }
  if (pcStack_228 != (code *)0x0) {
    (*pcStack_228)(auStack_240);
  }
  if (pcStack_268 != (code *)0x0) {
    (*pcStack_268)(&puStack_280);
  }
  if ((uStack_2b8 & 1) != 0) {
    func_0x0412a280(uStack_2a8,uStack_2b8 & 0xfffffffffffffffe);
  }
  if (((ulong)puStack_6a8 & 1) != 0) {
    func_0x0412a280(uStack_698,(ulong)puStack_6a8 & 0xfffffffffffffffe);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(pcStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((bStack_738 & 1) != 0) {
    func_0x0412a280(uStack_728,CONCAT71(uStack_737,bStack_738) & 0xfffffffffffffffe);
  }
  uStack_778 = 0x6c616310;
  uStack_774 = 0x6361626c;
  uStack_770 = 0x6b;
  uStack_76f = 0;
  func_0x0ab46850(&uStack_178,&uStack_778);
  uStack_2a8 = 0;
  uStack_290 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  pcStack_268 = (code *)0x0;
  uStack_260 = 0;
  puStack_278 = (ulong *)0x0;
  plStack_270 = (long *)0x0;
  puStack_288 = (ulong *)0x0;
  puStack_280 = (ulong *)0x0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a0 = 0x63736275736e7516;
  uStack_298 = 0x65626972;
  func_0x06523ef0(auStack_548,auStack_150);
  auStack_798 = (undefined1  [8])0x0;
  uStack_790 = (undefined1  [8])0x0;
  puStack_788 = (ulong *)0x0;
  bStack_738 = (byte)auStack_798;
  uStack_737 = (undefined7)((ulong)auStack_798 >> 8);
  uStack_730 = 0;
  puVar13 = (uint *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x118);
  if (puVar13 == (uint *)0x0) {
    func_0x0eec74c0(0x118,0);
  }
  puStack_788 = (ulong *)(puVar13 + 0x46);
  uStack_710 = (ulong)&puStack_688;
  ppuStack_708 = &puStack_6a8;
  uStack_700 = uStack_700 & 0xffffffffffffff00;
  auStack_798 = (undefined1  [8])puVar13;
  uStack_790 = (undefined1  [8])puVar13;
  auStack_718 = (undefined1  [8])auStack_798;
  puStack_6a8 = puVar13;
  puStack_688 = puVar13;
  func_0x06523ef0(puVar13,auStack_548);
  uStack_790 = (undefined1  [8])(puStack_6a8 + 0x46);
  if (pcStack_458 != (code *)0x0) {
    (*pcStack_458)(&uStack_470);
  }
  if (pcStack_4a0 != (code *)0x0) {
    (*pcStack_4a0)(&pcStack_4b8);
  }
  if (pcStack_4e0 != (code *)0x0) {
    (*pcStack_4e0)(&pcStack_4f8);
  }
  if (pcStack_520 != (code *)0x0) {
    (*pcStack_520)(&pcStack_538);
  }
  pcVar14 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
  if (pcVar14 == (code *)0x0) {
    func_0x0eec74c0(0x60,0);
  }
  *(undefined8 *)((long)pcVar14 + 8) = 0;
  *(undefined8 *)((long)pcVar14 + 0x10) = 0;
  *(undefined **)pcVar14 = &UNK_0f25d3e8;
  uVar9 = func_0x0d858500(auStack_798);
  plVar11 = (long *)((long)pcVar14 + 0x18);
  *(undefined1 *)((long)pcVar14 + 0x20) = 2;
  *(undefined4 *)((long)pcVar14 + 0x24) = uVar9;
  *(undefined4 *)((long)pcVar14 + 0x28) = 0;
  *(undefined8 *)((long)pcVar14 + 0x30) = 0;
  *(undefined8 *)((long)pcVar14 + 0x38) = 0;
  *(undefined8 *)((long)pcVar14 + 0x40) = 0;
  *(undefined **)((long)pcVar14 + 0x18) = &UNK_0f25d438;
  *(undefined4 *)((long)pcVar14 + 0x48) = auStack_798._0_4_;
  *(undefined4 *)((long)pcVar14 + 0x4c) = auStack_798._4_4_;
  *(undefined4 *)((long)pcVar14 + 0x50) = (undefined4)uStack_790;
  *(undefined4 *)((long)pcVar14 + 0x54) = uStack_790._4_4_;
  *(ulong **)((long)pcVar14 + 0x58) = puStack_788;
  auStack_798 = (undefined1  [8])0x0;
  uStack_790 = (undefined1  [8])0x0;
  puStack_788 = (ulong *)0x0;
  uVar9 = func_0x0d858620(plVar11);
  pcVar8 = pcStack_268;
  *(undefined4 *)((long)pcVar14 + 0x28) = uVar9;
  plStack_270 = plVar11;
  if (pcStack_268 != (code *)0x0) {
    LOCK();
    plVar11 = (long *)((long)pcStack_268 + 8);
    lVar19 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      lVar19 = *(long *)pcStack_268;
      pcStack_268 = pcVar14;
      (**(code **)(lVar19 + 0x10))(pcVar8);
      FUN_0412c2d0(pcVar8);
      pcVar14 = pcStack_268;
    }
  }
  pcStack_268 = pcVar14;
  _auStack_548 = func_0x0ab4aec0();
  _auStack_718 = func_0x0ab134e0();
  func_0x0d850780(auStack_548,auStack_718);
  pcStack_538 = pcStack_168;
  auStack_548 = (undefined1  [8])uStack_178;
  uStack_540 = (ulong)puStack_170;
  uStack_178 = 0;
  puStack_170 = (undefined *)0x0;
  pcStack_168 = (code *)0x0;
  uStack_530 = CONCAT44(uStack_15c,uStack_160);
  uStack_528 = CONCAT44(uStack_154,uStack_158);
  func_0x065281f0(&pcStack_520,auStack_150);
  auStack_718 = (undefined1  [8])0x0;
  uStack_710 = 0;
  ppuStack_708 = (uint **)0x0;
  bStack_738 = (byte)auStack_718;
  uStack_737 = (undefined7)((ulong)auStack_718 >> 8);
  uStack_730 = 0;
  puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x140);
  if (puVar12 == (ulong *)0x0) {
    func_0x0eec74c0(0x140,0);
  }
  puVar2 = puVar12 + 0x28;
  auStack_718 = (undefined1  [8])puVar12;
  ppuStack_708 = (uint **)puVar2;
  if (((ulong)auStack_548 & 1) == 0) {
    puVar12[2] = (ulong)pcStack_538;
    *puVar12 = (ulong)auStack_548;
    puVar12[1] = uStack_540;
    uStack_710 = (ulong)puVar12;
  }
  else {
    uStack_710 = (ulong)puVar12;
    func_0x0412e5e0(puVar12,pcStack_538,uStack_540);
  }
  *(undefined4 *)(puVar12 + 3) = (undefined4)uStack_530;
  *(undefined4 *)((long)puVar12 + 0x1c) = uStack_530._4_4_;
  *(undefined4 *)(puVar12 + 4) = (undefined4)uStack_528;
  *(undefined4 *)((long)puVar12 + 0x24) = uStack_528._4_4_;
  func_0x06523ef0(puVar12 + 5,&pcStack_520);
  uStack_710 = (ulong)puVar2;
  if (apcStack_430[0] != (code *)0x0) {
    (*apcStack_430[0])(auStack_448);
  }
  if (pcStack_478 != (code *)0x0) {
    (*pcStack_478)(&uStack_490);
  }
  if (pcStack_4b8 != (code *)0x0) {
    (*pcStack_4b8)(&uStack_4d0);
  }
  if (pcStack_4f8 != (code *)0x0) {
    (*pcStack_4f8)(auStack_518 + 8);
  }
  if (((ulong)auStack_548 & 1) != 0) {
    func_0x0412a280(pcStack_538,(ulong)auStack_548 & 0xfffffffffffffffe);
  }
  iVar10 = (**(code **)(*plStack_270 + 0x20))();
  uVar25 = ((long)(uStack_710 - (long)auStack_718) >> 6) * -0x3333333333333333;
  uVar18 = 0;
  if ((iVar10 != 0) && ((uint)uVar25 != 0)) {
    uStack_678 = CONCAT44(uStack_678._4_4_,iVar10);
    uVar24 = 0;
    uVar18 = 0;
    do {
      auVar27 = (**(code **)(*plStack_270 + 0x28))(plStack_270,uVar24);
      uVar22 = auVar27._8_8_;
      lVar19 = auVar27._0_8_;
      auVar27 = func_0x06527d70();
      if (auVar27._8_8_ == uVar22) {
        if (auVar27._0_8_ == 0) {
          lVar15 = func_0x048aead0(auVar27._8_8_);
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar19 != 0) goto LAB_0ab3ecb1;
LAB_0ab3ecce:
          lVar15 = func_0x048aead0(uVar22);
          if (iVar10 != *(int *)(lVar15 + 8)) goto LAB_0ab3ece0;
        }
        else {
          iVar10 = *(int *)(auVar27._0_8_ + 8);
          if (lVar19 == 0) goto LAB_0ab3ecce;
LAB_0ab3ecb1:
          if (iVar10 != *(int *)(lVar19 + 8)) goto LAB_0ab3ece0;
        }
      }
      else {
LAB_0ab3ece0:
        auVar27 = func_0x06527e30();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3eed6;
        }
        auVar27 = func_0x06527ef0();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3eed6;
        }
        auVar27 = func_0x06527fb0();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3eed6;
        }
        auVar27 = func_0x06528070();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3eed6;
        }
        auVar27 = func_0x06528130();
        if (auVar27._8_8_ == uVar22) {
          if (auVar27._0_8_ == 0) {
            lVar15 = func_0x048aead0(auVar27._8_8_);
            iVar10 = *(int *)(lVar15 + 8);
          }
          else {
            iVar10 = *(int *)(auVar27._0_8_ + 8);
          }
          if (lVar19 == 0) {
            lVar15 = func_0x048aead0(uVar22);
            iVar3 = *(int *)(lVar15 + 8);
          }
          else {
            iVar3 = *(int *)(lVar19 + 8);
          }
          if (iVar10 == iVar3) goto LAB_0ab3eed6;
        }
        auVar5 = auStack_718;
        puVar12 = (ulong *)uStack_710;
        if (*(ulong *)((long)auStack_718 + (uVar18 * 0x28 + 4) * 8) != uVar22)
        goto joined_r0x0ab3f0f9;
        if (*(ulong *)((long)auStack_718 + (uVar18 * 0x28 + 3) * 8) == 0) {
          lVar15 = func_0x048aead0();
          iVar10 = *(int *)(lVar15 + 8);
          if (lVar19 != 0) goto LAB_0ab3eea7;
LAB_0ab3eebf:
          lVar19 = func_0x048aead0(uVar22);
          if (iVar10 != *(int *)(lVar19 + 8)) goto LAB_0ab3f0e6;
        }
        else {
          iVar10 = *(int *)(*(ulong *)((long)auStack_718 + (uVar18 * 0x28 + 3) * 8) + 8);
          if (lVar19 == 0) goto LAB_0ab3eebf;
LAB_0ab3eea7:
          if (iVar10 != *(int *)(lVar19 + 8)) goto LAB_0ab3f0e6;
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      }
LAB_0ab3eed6:
      if ((uint)uVar25 <= (uint)uVar18) break;
      uVar24 = uVar24 + 1;
    } while (uVar24 < (uint)uStack_678);
    uVar25 = ((long)(uStack_710 - (long)auStack_718) >> 6) * -0x3333333333333333;
  }
  puVar12 = puStack_288;
  if (uVar25 == uVar18) {
    puVar2 = puStack_280;
    if (puStack_288 != (ulong *)0x0) {
      while (puVar12 != puVar2) {
        func_0x05fe8450(puVar2 + -0x28);
        puVar2 = puVar2 + -0x28;
      }
      puStack_280 = puVar12;
      func_0x0412a280(puStack_288,(long)puStack_278 - (long)puStack_288);
    }
    puStack_278 = (ulong *)ppuStack_708;
    if (uStack_5c0 < puStack_5b8) {
      *uStack_5c0 = 0;
      uStack_5c0[1] = 0;
      uStack_5c0[2] = 0;
      *uStack_5c0 = uStack_2b8;
      uStack_5c0[1] = uStack_2b0;
      uStack_5c0[2] = uStack_2a8;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_5c0[5] = uStack_290;
      uStack_5c0[3] = uStack_2a0;
      uStack_5c0[4] = uStack_298;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_5c0[6] = 0;
      uStack_5c0[7] = 0;
      uStack_5c0[8] = 0;
      uStack_5c0[6] = (ulong)auStack_718;
      uStack_5c0[7] = uStack_710;
      uStack_5c0[8] = (ulong)ppuStack_708;
      puStack_288 = (ulong *)0x0;
      puStack_280 = (ulong *)0x0;
      puStack_278 = (ulong *)0x0;
      uStack_5c0[9] = (ulong)plStack_270;
      uStack_5c0[10] = (ulong)pcStack_268;
      plStack_270 = (long *)0x0;
      pcStack_268 = (code *)0x0;
      uStack_5c0[0xb] = 0;
      uStack_5c0[0xc] = 0;
      uStack_5c0[0xd] = 0;
      uStack_5c0[0xb] = uStack_260;
      uStack_5c0[0xc] = uStack_258;
      uStack_5c0[0xd] = uStack_250;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_5c0 = uStack_5c0 + 0xe;
    }
    else {
      puStack_288 = (ulong *)auStack_718;
      puStack_280 = (ulong *)uStack_710;
      uStack_5c0 = (ulong *)func_0x0652ac80(&uStack_5c8,&uStack_2b8);
    }
    puVar12 = uStack_5c0 + -0xe;
    auVar5 = auStack_798;
    lVar19 = lStack_690;
  }
  else {
LAB_0ab3f0e6:
    auVar5 = auStack_718;
    puVar12 = (ulong *)uStack_710;
    if (auStack_718 != (undefined1  [8])0x0) {
joined_r0x0ab3f0f9:
      while (auVar6 = auStack_718, auStack_718 != (undefined1  [8])puVar12) {
        auStack_718 = auVar5;
        func_0x05fe8450(puVar12 + -0x28);
        auVar5 = auStack_718;
        puVar12 = puVar12 + -0x28;
        auStack_718 = auVar6;
      }
      uStack_710 = (ulong)auStack_718;
      auStack_718 = auVar5;
      func_0x0412a280(auVar5,(long)ppuStack_708 - (long)auVar5);
    }
    puVar12 = (ulong *)0xf6920c8;
    auVar5 = auStack_798;
    lVar19 = lStack_690;
  }
  auStack_798 = auVar5;
  lStack_690 = lVar19;
  if (auVar5 != (undefined1  [8])0x0) {
    if (auVar5 != uStack_790) {
      lVar15 = (long)uStack_790 + -0x40;
      do {
        if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
          (**(code **)(lVar15 + 0x18))(lVar15);
        }
        if (*(code **)(lVar15 + -0x30) != (code *)0x0) {
          (**(code **)(lVar15 + -0x30))(lVar15 + -0x48);
        }
        if (*(code **)(lVar15 + -0x70) != (code *)0x0) {
          (**(code **)(lVar15 + -0x70))(lVar15 + -0x88);
        }
        if (*(code **)(lVar15 + -0xb0) != (code *)0x0) {
          (**(code **)(lVar15 + -0xb0))(lVar15 + -200);
        }
        lVar23 = lVar15 + -0xd8;
        lVar15 = lVar15 + -0x118;
      } while ((undefined1  [8])lVar23 != auVar5);
    }
    uStack_790 = auVar5;
    func_0x0412a280(auStack_798,(long)puStack_788 - (long)auStack_798);
  }
  func_0x05f93280(&uStack_2b8);
  if (puVar12 != &uStack_758) {
    func_0x066dff70(puVar12,uStack_758,uStack_750,
                    ((long)(uStack_750 - uStack_758) >> 4) * -0x5555555555555555);
  }
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_78);
  }
  if (pcStack_a8 != (code *)0x0) {
    (*pcStack_a8)(auStack_c0);
  }
  if (pcStack_e8 != (code *)0x0) {
    (*pcStack_e8)(auStack_100);
  }
  if (pcStack_128 != (code *)0x0) {
    (*pcStack_128)(auStack_140);
  }
  if ((uStack_178 & 1) != 0) {
    func_0x0412a280(pcStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if ((uStack_778 & 1) != 0) {
    func_0x0412a280(lStack_768,CONCAT44(uStack_774,uStack_778) & 0xfffffffffffffffe);
  }
  func_0x066dff70(&lStack_658,uStack_758,uStack_750,
                  ((long)(uStack_750 - uStack_758) >> 4) * -0x5555555555555555);
  auStack_610 = func_0x0ab134e0();
  lVar23 = lStack_640;
  lVar15 = lStack_638;
  if (lStack_640 != 0) {
    for (; lVar23 != lVar15; lVar15 = lVar15 + -0x30) {
      if ((*(byte *)(lVar15 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar15 + -0x10),
                        *(ulong *)(lVar15 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_638 = lVar23;
    func_0x0412a280(lStack_640,lStack_630 - lStack_640);
  }
  pcStack_538 = pcStack_648;
  uStack_540 = lStack_650;
  auStack_548 = (undefined1  [8])lStack_658;
  lStack_658 = 0;
  lStack_650 = 0;
  pcStack_648 = (code *)0x0;
  lStack_640 = 0;
  lStack_638 = 0;
  lStack_630 = 0;
  pcStack_520 = pcStack_618;
  uStack_530 = uStack_628;
  uStack_528 = uStack_620;
  uStack_628 = 0;
  uStack_620 = 0;
  pcStack_618 = (code *)0x0;
  uStack_508 = uStack_600;
  uStack_500 = uStack_5f8;
  pcStack_4f8 = pcStack_5f0;
  plStack_4f0 = plStack_5e8;
  uStack_4e8 = uStack_5e0;
  pcStack_5f0 = (code *)0x0;
  plStack_5e8 = (long *)0x0;
  uStack_5e0 = 0;
  pcStack_4e0 = (code *)uStack_5d8;
  uStack_4d8 = uStack_5d0;
  uStack_5d8 = 0;
  uStack_5d0 = 0;
  uStack_4d0 = (undefined4)uStack_5c8;
  uStack_4cc = uStack_5c8._4_4_;
  uStack_4c8 = (undefined4)uStack_5c0;
  uStack_4c4 = uStack_5c0._4_4_;
  puStack_4c0 = puStack_5b8;
  uStack_5c8 = 0;
  uStack_5c0 = (ulong *)0x0;
  puStack_5b8 = (ulong *)0x0;
  pcStack_4b8 = pcStack_5b0;
  uStack_4b0 = uStack_5a8;
  uStack_4a8 = uStack_5a0;
  pcStack_5b0 = (code *)0x0;
  uStack_5a8 = 0;
  uStack_5a0 = 0;
  pcStack_4a0 = (code *)uStack_598;
  uStack_498 = uStack_590;
  uStack_490 = uStack_588;
  uStack_598 = 0;
  uStack_590 = 0;
  uStack_588 = 0;
  uStack_488 = uStack_580;
  uStack_480 = uStack_578;
  pcStack_478 = (code *)uStack_570;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = 0;
  uStack_470 = (undefined4)uStack_568;
  uStack_46c = uStack_568._4_4_;
  uStack_468 = (undefined4)uStack_560;
  uStack_464 = uStack_560._4_4_;
  uStack_460 = uStack_558;
  uStack_568 = 0;
  uStack_560 = 0;
  uStack_558 = 0;
  auStack_518 = auStack_610;
  func_0x0d84fd50(uStack_660,auStack_548);
  func_0x0651ffe0(auStack_548);
  func_0x0651ffe0(&lStack_640);
  lVar23 = lStack_658;
  lVar15 = lStack_650;
  if (lStack_658 != 0) {
    for (; lVar23 != lVar15; lVar15 = lVar15 + -0x30) {
      if ((*(byte *)(lVar15 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar15 + -0x10),
                        *(ulong *)(lVar15 + -0x20) & 0xfffffffffffffffe);
      }
    }
    lStack_650 = lVar23;
    func_0x0412a280(lStack_658,(long)pcStack_648 - lStack_658);
  }
  uVar25 = uStack_758;
  uVar18 = uStack_750;
  if (uStack_758 != 0) {
    for (; uVar25 != uVar18; uVar18 = uVar18 - 0x30) {
      if ((*(byte *)(uVar18 - 0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar18 - 0x10),
                        *(ulong *)(uVar18 - 0x20) & 0xfffffffffffffffe);
      }
    }
    uStack_750 = uVar25;
    func_0x0412a280(uStack_758,(long)pcStack_748 - uStack_758);
  }
  uVar16 = func_0x0a716770(lVar19,&UNK_01b14567);
  func_0x0a716640(&uStack_178,lVar19);
  lVar15 = *plStack_2c8;
  func_0x065af670(auStack_548);
  puVar12 = (ulong *)(lVar19 + 8);
  if (&uStack_530 != puVar12) {
    bVar4 = *(byte *)puVar12;
    if ((uStack_530 & 1) == 0) {
      if ((bVar4 & 1) == 0) {
        pcStack_520 = *(code **)(lVar19 + 0x18);
        uStack_530 = *puVar12;
        uStack_528 = *(ulong *)(lVar19 + 0x10);
      }
      else {
        func_0x04885070(&uStack_530,*(undefined8 *)(lVar19 + 0x18),*(undefined8 *)(lVar19 + 0x10));
      }
    }
    else {
      bVar26 = (bVar4 & 1) != 0;
      lVar23 = lVar19 + 9;
      if (bVar26) {
        lVar23 = *(long *)(lVar19 + 0x18);
      }
      uVar18 = (ulong)(bVar4 >> 1);
      if (bVar26) {
        uVar18 = *(ulong *)(lVar19 + 0x10);
      }
      func_0x04885120(&uStack_530,lVar23,uVar18);
    }
  }
  auVar27 = func_0x0ab4ce60();
  auStack_518 = auVar27;
  puVar17 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  plVar11 = plStack_4f0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  *puVar17 = &UNK_0f25d4b8;
  pcStack_4f8 = (code *)(puVar17 + 3);
  *(undefined1 *)(puVar17 + 4) = 3;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  puVar17[3] = &UNK_0f25d508;
  puVar17[8] = uVar16;
  if (plStack_4f0 == (long *)0x0) {
LAB_0ab3f785:
    uVar18 = *(ulong *)(lVar15 + 0xb0);
    plStack_4f0 = puVar17;
    if (*(ulong *)(lVar15 + 0xb8) <= uVar18) {
LAB_0ab3f7db:
      lVar19 = func_0x065b01f0(lVar15 + 0xa8,auStack_548);
      goto LAB_0ab3f7f3;
    }
  }
  else {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar19 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar19 != 0) goto LAB_0ab3f785;
    lVar19 = *plStack_4f0;
    plStack_4f0 = puVar17;
    (**(code **)(lVar19 + 0x10))(plVar11);
    FUN_0412c2d0(plVar11);
    uVar18 = *(ulong *)(lVar15 + 0xb0);
    if (*(ulong *)(lVar15 + 0xb8) <= uVar18) goto LAB_0ab3f7db;
  }
  func_0x065b0410(uVar18,auStack_548);
  lVar19 = uVar18 + 0x1b0;
  *(long *)(lVar15 + 0xb0) = lVar19;
LAB_0ab3f7f3:
  *(long *)(lVar15 + 0xb0) = lVar19;
  func_0x0652dc20(auStack_548);
  lVar15 = *(long *)(lVar19 + -0x1b0);
  if (lVar15 != 0) {
    lVar23 = *(long *)(lVar19 + -0x1a8);
    lVar20 = lVar15;
    if (lVar15 != lVar23) {
      do {
        if ((*(byte *)(lVar23 + -0x20) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar23 + -0x10),
                          *(ulong *)(lVar23 + -0x20) & 0xfffffffffffffffe);
        }
        lVar23 = lVar23 + -0x30;
      } while (lVar23 != lVar15);
      lVar20 = *(long *)(lVar19 + -0x1b0);
    }
    *(long *)(lVar19 + -0x1a8) = lVar15;
    func_0x0412a280(lVar20,*(long *)(lVar19 + -0x1a0) - lVar20);
    *(long *)(lVar19 + -0x1b0) = 0;
    *(undefined8 *)(lVar19 + -0x1a8) = 0;
    *(undefined8 *)(lVar19 + -0x1a0) = 0;
  }
  *(ulong *)(lVar19 + -0x1b0) = uStack_178;
  *(undefined **)(lVar19 + -0x1a8) = puStack_170;
  *(code **)(lVar19 + -0x1a0) = pcStack_168;
  return;
}



/* ---- referenced strings ----
 * 0x147b3d0  AfterEventSignal
 */
