/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x460a818 (ELF vaddr 0x450a818)
 * Label: caller-of-callee
 * Body:  [[0460a818, 0460d27e]]
 * Ghidra: FUN_0460a818
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0460a818(long param_1,long *param_2)

{
  long *plVar1;
  long **pplVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auVar6 [8];
  undefined **ppuVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  long **pplVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 **ppuVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long extraout_RDX;
  undefined *puVar22;
  long *plVar23;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long *plVar24;
  long *unaff_R12;
  long *unaff_R13;
  long *plVar25;
  long *in_FS_OFFSET;
  bool bVar26;
  long *plStack_630;
  long *plStack_620;
  long *plStack_618;
  undefined1 uStack_609;
  undefined1 auStack_608 [8];
  long *plStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  long *plStack_5e0;
  long *plStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  long alStack_5b8 [4];
  long *plStack_598;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  long lStack_560;
  long *plStack_558;
  long *plStack_550;
  long *plStack_548;
  long *plStack_540;
  long *plStack_538;
  long *plStack_530;
  long *plStack_528;
  long **pplStack_518;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  uint uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c8;
  uint uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined8 uStack_4b0;
  long *plStack_4a0;
  long *plStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  long *plStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  long *plStack_450;
  int aiStack_448 [2];
  long lStack_440;
  long *plStack_438;
  long *plStack_430;
  long *plStack_428;
  long *plStack_420;
  long **pplStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long alStack_3f8 [4];
  long *plStack_3d8;
  ulong uStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  ulong *puStack_3a8;
  ulong auStack_398 [4];
  ulong *puStack_378;
  long *plStack_368;
  long *plStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 **ppuStack_338;
  undefined *puStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined **ppuStack_308;
  long *plStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  undefined1 auStack_2b8 [8];
  long *plStack_2b0;
  undefined8 *apuStack_2a8 [4];
  undefined8 **ppuStack_288;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined8 *puStack_260;
  long **pplStack_258;
  long alStack_248 [4];
  long *plStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long *plStack_1f8;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  undefined8 **ppuStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined **ppuStack_108;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined **ppuStack_d8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined **ppuStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined **ppuStack_48;
  
  if (*param_2 != 0) {
    auStack_608 = (undefined1  [8])0x0;
    iVar9 = func_0x045f9d55(*param_2,0);
    if ((iVar9 < 0) || (iVar9 = func_0x045f9df1(auStack_608,auStack_608,param_1 + 0x20), iVar9 < 0))
    {
      return iVar9;
    }
  }
  plVar24 = *(long **)(param_1 + 0x80);
  bVar8 = (**(code **)(*plVar24 + 0x20))(plVar24);
  plVar11 = (long *)(**(code **)(*plVar24 + 0x10 + (ulong)bVar8 * 8))(plVar24);
  iVar9 = func_0x045f43a8(*(undefined8 *)(*(long *)(param_1 + 0xe8) + 8));
  plVar24 = plVar11 + 0x77;
  func_0x0412d680(plVar24);
  plVar11[0x6c] = (ulong)(uint)(iVar9 * 1000);
  func_0x0412d6b0(plVar24);
  plVar12 = (long *)func_0x0ee32660(0x10);
  func_0x04651b28(plVar12);
  plStack_618 = param_2;
  uStack_508 = plVar12;
  if ((int)plVar11[0x25] != 0) goto LAB_0460cfd8;
  plVar11[0x18] = (long)plVar12;
  *(undefined1 *)(plVar11 + 0x19) = 1;
  plStack_438 = plVar12;
  func_0x04652329(auStack_608,&plStack_278);
  func_0x0465228e(plVar11 + 0x1a,auStack_608);
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_600 + 1;
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      FUN_0412c2d0(plStack_600);
    }
  }
  *(undefined4 *)(plVar11 + 0x25) = 1;
  *(undefined1 *)(plVar11 + 0x19) = 0;
  lVar13 = plVar11[0x18];
  plStack_600 = (long *)func_0x0ee32660(0x20);
  plStack_600[1] = 0;
  plStack_600[2] = 0;
  *plStack_600 = (long)&UNK_0ef107e8;
  auStack_608 = (undefined1  [8])(plStack_600 + 3);
  lVar13 = *(long *)(lVar13 + 8);
  plStack_600[3] = lVar13;
  LOCK();
  plVar12 = (long *)(lVar13 + 0xd0);
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  func_0x04653aac(plVar11 + 0x1e,auStack_608);
  plVar12 = plStack_600;
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar23 = plStack_600 + 1;
    lVar13 = *plVar23;
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      FUN_0412c2d0(plVar12);
    }
  }
  plStack_620 = (long *)(param_1 + 8);
  func_0x046071e2(&uStack_1e8);
  plVar12 = plStack_1e0;
  if (plStack_1e0 != (long *)0x0) {
    LOCK();
    plStack_1e0[1] = plStack_1e0[1] + 1;
    UNLOCK();
  }
  ppuStack_48 = &puStack_68;
  puStack_68 = &UNK_0ef0f078;
  uStack_60 = uStack_1e8;
  plStack_58 = plStack_1e0;
  uStack_148 = 0;
  uStack_140 = 0;
  plStack_138 = param_2;
  plStack_50 = param_2;
  func_0x0412d680(plVar24);
  func_0x04653bf0(plVar11 + 0x2e,&puStack_68);
  func_0x0412d6b0(plVar24);
  if (ppuStack_48 == &puStack_68) {
    lVar13 = 0x20;
LAB_0460aab6:
    (**(code **)(*ppuStack_48 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_0460aab6;
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12[1] = plVar12[1] + 1;
    UNLOCK();
  }
  ppuStack_78 = &puStack_98;
  puStack_98 = &UNK_0ef0f0f8;
  uStack_90 = uStack_1e8;
  plStack_88 = plVar12;
  uStack_168 = 0;
  uStack_160 = 0;
  plStack_488 = plVar11 + 0x2e;
  plStack_158 = param_2;
  plStack_80 = param_2;
  func_0x0412d680(plVar24);
  func_0x04653bf0(plVar11 + 0x3a,&puStack_98);
  func_0x0412d6b0(plVar24);
  if (ppuStack_78 == &puStack_98) {
    lVar13 = 0x20;
LAB_0460ab5a:
    (**(code **)(*ppuStack_78 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_78 != (undefined **)0x0) goto LAB_0460ab5a;
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12[1] = plVar12[1] + 1;
    UNLOCK();
  }
  ppuStack_a8 = &puStack_c8;
  puStack_c8 = &UNK_0ef0f278;
  uStack_c0 = uStack_1e8;
  plStack_b8 = plVar12;
  uStack_178 = 0;
  uStack_170 = 0;
  plStack_2c0 = plVar11 + 0x3a;
  func_0x0412d680(plVar24);
  plVar23 = plVar11 + 100;
  func_0x0465851e(plVar23,&puStack_c8);
  func_0x0412d6b0(plVar24);
  if (ppuStack_a8 == &puStack_c8) {
    lVar13 = 0x20;
LAB_0460abec:
    (**(code **)(*ppuStack_a8 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_a8 != (undefined **)0x0) goto LAB_0460abec;
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12[1] = plVar12[1] + 1;
    UNLOCK();
  }
  ppuStack_d8 = &puStack_f8;
  puStack_f8 = &UNK_0ef0f2f8;
  uStack_f0 = uStack_1e8;
  plStack_e8 = plVar12;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x0412d680(plVar24);
  plStack_2c8 = plVar11 + 0x34;
  func_0x04653bf0(plStack_2c8,&puStack_f8);
  func_0x0412d6b0(plVar24);
  if (ppuStack_d8 == &puStack_f8) {
    lVar13 = 0x20;
LAB_0460ac7b:
    (**(code **)(*ppuStack_d8 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_d8 != (undefined **)0x0) goto LAB_0460ac7b;
  }
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar12[1] = plVar12[1] + 1;
    UNLOCK();
  }
  ppuStack_108 = &puStack_128;
  puStack_128 = &UNK_0ef0f3f8;
  uStack_120 = uStack_1e8;
  plStack_118 = plVar12;
  uStack_198 = 0;
  uStack_190 = 0;
  func_0x0412d680(plVar24);
  plStack_2d0 = plVar11 + 0x4c;
  func_0x0465868a(plStack_2d0,&puStack_128);
  func_0x0412d6b0(plVar24);
  plStack_2d8 = plVar23;
  if (ppuStack_108 == &puStack_128) {
    lVar13 = 0x20;
LAB_0460ad1c:
    (**(code **)(*ppuStack_108 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_108 != (undefined **)0x0) goto LAB_0460ad1c;
  }
  unaff_R12 = (long *)func_0x045f4390(*(undefined8 *)(*(long *)(param_1 + 0xe8) + 8));
  func_0x045ee774(auStack_608,&UNK_01527290);
  plVar12 = (long *)func_0x045f6252(unaff_R12,auStack_608);
  if (((ulong)auStack_608 & 1) != 0) {
    func_0x045efa8a(plStack_5f8);
  }
  unaff_R13 = unaff_R12 + 1;
  if (plVar12 != unaff_R13) {
    if ((*(byte *)(plVar12 + 7) & 1) == 0) {
      lVar13 = (long)plVar12 + 0x39;
    }
    else {
      lVar13 = plVar12[9];
    }
    func_0x04160690(auStack_608,lVar13);
    func_0x0412d680(plVar24);
    func_0x041307e0(plVar11 + 0x2a,auStack_608);
    func_0x0412d6b0(plVar24);
    if (((ulong)auStack_608 & 1) != 0) {
      func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
    }
  }
  pbVar14 = (byte *)func_0x0466f66c(param_1 + 0xf0);
  if ((*pbVar14 & 1) == 0) {
    pbVar14 = pbVar14 + 1;
  }
  else {
    pbVar14 = *(byte **)(pbVar14 + 0x10);
  }
  func_0x04160690(&plStack_4a0,pbVar14);
  func_0x04658826(&plStack_368,auStack_608,&plStack_4a0);
  plStack_630 = plVar11;
  if (*(char *)((long)plStack_368 + 0x4b) == '\0') {
    if (cRam000000000f54ca90 == '\0') goto LAB_0460d020;
    goto LAB_0460ae84;
  }
  plStack_458 = plStack_368;
  plStack_450 = plStack_360;
  if (plStack_360 != (long *)0x0) {
    LOCK();
    plStack_360[1] = plStack_360[1] + 1;
    UNLOCK();
  }
  if (*(char *)((long)plStack_368 + 0x4a) == '\x01') {
    if ((cRam000000000f54ca90 == '\0') && (iVar9 = func_0x04108328(0xf54ca90), iVar9 != 0)) {
      _DAT_0f54ca88 = &UNK_0ef10598;
      func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
      func_0x0410844d(0xf54ca90);
    }
    uStack_588 = (long *)0x0;
    uStack_580 = (long *)0x0;
    plVar24 = (long *)0x4;
    goto LAB_0460bb25;
  }
  plStack_540 = unaff_R13;
  plVar24 = (long *)func_0x0ee32660(0x4fc0);
  plVar24[1] = 0;
  plVar24[2] = 0;
  *plVar24 = (long)&UNK_0ef0f478;
  lVar5 = plVar11[0x76];
  plVar24[9] = 0;
  plVar24[10] = 0;
  plVar24[0x10] = 0;
  plVar24[4] = 0;
  plVar24[5] = 0;
  plVar24[6] = 0;
  plVar24[7] = 0;
  *(undefined4 *)(plVar24 + 8) = 0;
  *(char *)(plVar24 + 0x12) = (char)lVar5;
  lVar13 = plVar11[0x27];
  lVar18 = plVar11[0x27];
  plVar24[0x13] = plVar11[0x26];
  plVar24[0x14] = lVar18;
  if (lVar13 != 0) {
    LOCK();
    plVar12 = (long *)(lVar13 + 8);
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar12 = plVar24 + 4;
  lVar13 = plVar11[0x29];
  uVar10 = *(undefined4 *)((long)plVar11 + 0x144);
  lVar18 = plVar11[0x29];
  uVar4 = *(undefined4 *)((long)plVar11 + 0x14c);
  *(int *)(plVar24 + 0x15) = (int)plVar11[0x28];
  *(undefined4 *)((long)plVar24 + 0xac) = uVar10;
  *(int *)(plVar24 + 0x16) = (int)lVar18;
  *(undefined4 *)((long)plVar24 + 0xb4) = uVar4;
  if (lVar13 != 0) {
    LOCK();
    plVar23 = (long *)(lVar13 + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  lStack_560 = func_0x0412dd40();
  plVar24[0x17] = 0;
  plVar24[0x18] = 0;
  plVar24[0x19] = 0;
  plVar24[0x1a] = 0;
  plVar24[0x1b] = 0;
  plVar24[0x1d] = 0;
  plVar24[0x1e] = 0;
  plVar24[0x1f] = 0;
  plVar24[0x20] = 0;
  plVar24[0x21] = 0;
  plVar24[0x22] = 0;
  *(undefined8 *)((long)plVar24 + 0x114) = 0;
  *(undefined8 *)((long)plVar24 + 0x11c) = 0;
  plVar24[0x25] = lStack_560;
  plVar24[0x2a] = 0;
  plVar24[0x30] = 0;
  *(undefined1 *)(plVar24 + 0xb2) = 0;
  *(undefined1 *)(plVar24 + 0x134) = 0;
  plStack_2e0 = plVar24 + 0x136;
  plVar24[0x136] = (long)&UNK_0ef0f6a8;
  plVar24[0x137] = (long)&UNK_04636518;
  plVar24[0x138] = 0;
  plVar24[0x139] = (long)plVar12;
  plVar24[0x13a] = (long)plStack_2e0;
  plStack_2e8 = plVar24 + 0x13c;
  plVar24[0x13c] = (long)&UNK_0ef0f740;
  plVar24[0x13d] = (long)&UNK_0463791e;
  plVar24[0x13e] = 0;
  plVar24[0x13f] = (long)plVar12;
  plVar24[0x140] = (long)plStack_2e8;
  plStack_2f0 = plVar24 + 0x142;
  if ((*(byte *)(plVar11 + 0x2a) & 1) == 0) {
    plVar24[0x144] = plVar11[0x2c];
    lVar13 = plVar11[0x2b];
    *plStack_2f0 = plVar11[0x2a];
    plVar24[0x143] = lVar13;
  }
  else {
    func_0x0412e5e0(plStack_2f0,plVar11[0x2c],plVar11[0x2b]);
  }
  plVar24[0x145] = 0;
  plVar24[0x146] = 0;
  plVar24[0x14c] = 0;
  plVar24[0x152] = 0;
  plVar24[0x158] = 0;
  plVar24[0x15e] = 0;
  plVar24[0x164] = 0;
  plVar24[0x16a] = 0;
  plVar24[0x170] = 0;
  plVar24[0x176] = 0;
  plVar24[0x17c] = 0;
  plVar24[0x182] = 0;
  plVar24[0x184] = 5000;
  plVar24[0x185] = 5000;
  plVar24[0x186] = 5000;
  plVar24[0x187] = (long)&UNK_01e84800;
  plVar24[0x998] = 0;
  plVar24[0x188] = 0;
  plVar24[0x189] = 0;
  plVar24[0x18a] = 0;
  plVar24[0x18b] = 0;
  plVar24[0x18c] = 0;
  plVar24[0x18d] = 0;
  plVar24[0x18e] = 0;
  plVar24[399] = 0;
  plVar24[400] = 0;
  plVar24[0x191] = 0;
  plVar24[0x192] = 0;
  plStack_548 = unaff_R12;
  puVar16 = (undefined8 *)func_0x0ee32660(0x10);
  *puVar16 = 0;
  puVar16[1] = 0;
  func_0x04658ea4(plVar24 + 0x99a,puVar16);
  func_0x0eee2dd0(plVar24 + 0x99c,0,0xb1);
  *(undefined1 *)((long)plVar24 + 0x4d91) = 1;
  func_0x04658f10(plVar24 + 0x9b3);
  func_0x04658fb8(plVar24 + 0x9c9);
  unaff_R13 = plStack_540;
  plVar24[0x9e3] = 0;
  plVar24[0x9e4] = 0;
  plVar24[0x9e1] = 0;
  plVar24[0x9e2] = 0;
  plVar24[0x9df] = 0;
  plVar24[0x9e0] = 0;
  plVar24[0x9dd] = 0;
  plVar24[0x9de] = 0;
  *(char *)(plVar24 + 0x9e5) = (char)lVar5;
  lVar13 = plVar11[0x27];
  lVar18 = plVar11[0x27];
  plVar24[0x9e6] = plVar11[0x26];
  plVar24[0x9e7] = lVar18;
  if (lVar13 != 0) {
    LOCK();
    plVar23 = (long *)(lVar13 + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  lVar13 = plVar11[0x29];
  lVar18 = plVar11[0x29];
  plVar24[0x9e8] = plVar11[0x28];
  plVar24[0x9e9] = lVar18;
  if (lVar13 != 0) {
    LOCK();
    plVar23 = (long *)(lVar13 + 8);
    *plVar23 = *plVar23 + 1;
    UNLOCK();
  }
  plVar24[0x9ea] = (long)(plVar11 + 0x6f);
  *(undefined2 *)(plVar24 + 0x9eb) = 0x3ee;
  plVar24[0x9ec] = 0;
  plVar24[0x9ed] = 0;
  plVar24[0x9ee] = 0;
  *(undefined2 *)(plVar24 + 0x9ef) = 0x3ee;
  plVar24[0x9f0] = 0;
  plVar24[0x9f1] = 0;
  *(undefined8 *)((long)plVar24 + 0x4f8c) = 0;
  *(undefined8 *)((long)plVar24 + 0x4f94) = 0;
  plVar24[0x9f4] = lStack_560;
  *(undefined1 *)(plVar24 + 0x9f5) = 0;
  *(undefined4 *)((long)plVar24 + 0x4fac) = 0;
  *(undefined1 *)(plVar24 + 0x9f6) = 0;
  plStack_558 = plVar12;
  plStack_550 = plVar24;
  if (plVar24[5] == 0) {
    LOCK();
    plVar24[1] = plVar24[1] + 1;
    UNLOCK();
    LOCK();
    plVar24[2] = plVar24[2] + 1;
    UNLOCK();
    plVar24[4] = (long)plVar12;
    plVar24[5] = (long)plVar24;
LAB_0460b2a8:
    plVar12 = plVar24 + 1;
    LOCK();
    lVar13 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      FUN_0412c2d0(plVar24);
    }
  }
  else if (*(long *)(plVar24[5] + 8) == -1) {
    LOCK();
    plVar24[1] = plVar24[1] + 1;
    UNLOCK();
    LOCK();
    plVar24[2] = plVar24[2] + 1;
    UNLOCK();
    plVar24[4] = (long)plVar12;
    plVar24[5] = (long)plVar24;
    FUN_0412c2d0();
    goto LAB_0460b2a8;
  }
  plVar12 = plStack_550;
  plVar24 = plStack_558;
  bVar26 = true;
  if (plStack_550 == (long *)0x0) {
LAB_0460b332:
    plVar23 = (long *)0x0;
    plVar25 = (long *)0x0;
  }
  else {
    LOCK();
    plStack_550[2] = plStack_550[2] + 1;
    UNLOCK();
    plVar23 = (long *)func_0x0412c300();
    if (plVar23 == (long *)0x0) goto LAB_0460b332;
    LOCK();
    plVar23[2] = plVar23[2] + 1;
    UNLOCK();
    LOCK();
    plVar25 = plVar23 + 1;
    lVar13 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      FUN_0412c2d0(plVar23);
    }
    LOCK();
    plVar23[2] = plVar23[2] + 1;
    UNLOCK();
    bVar26 = false;
    plVar25 = plVar24;
  }
  plVar24[0x141] = (long)plVar25;
  lVar13 = plVar24[0x142];
  plVar24[0x142] = (long)plVar23;
  if (lVar13 != 0) {
    FUN_0412c2d0();
  }
  if (!bVar26) {
    LOCK();
    plVar23[2] = plVar23[2] + 1;
    UNLOCK();
    LOCK();
    plVar23[2] = plVar23[2] + 1;
    UNLOCK();
  }
  plVar24[0x1b] = (long)plVar25;
  lVar13 = plVar24[0x1c];
  plVar24[0x1c] = (long)plVar23;
  if (lVar13 != 0) {
    FUN_0412c2d0();
  }
  if (!bVar26) {
    LOCK();
    plVar23[2] = plVar23[2] + 1;
    UNLOCK();
    LOCK();
    plVar23[2] = plVar23[2] + 1;
    UNLOCK();
  }
  plVar24[5] = (long)plVar25;
  lVar13 = plVar24[6];
  plVar24[6] = (long)plVar23;
  if (lVar13 != 0) {
    FUN_0412c2d0();
  }
  if (!bVar26) {
    FUN_0412c2d0(plVar23);
    FUN_0412c2d0(plVar23);
    FUN_0412c2d0(plVar23);
  }
  plVar23 = plStack_558;
  func_0x04653c3c(&uStack_508,plStack_488);
  func_0x04653bf0(plVar23 + 0x144,&uStack_508);
  plVar24 = (long *)CONCAT44(uStack_4e4,uStack_4e8);
  if (plVar24 == &uStack_508) {
    lVar13 = 0x20;
LAB_0460b418:
    (**(code **)(*plVar24 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (plVar24 != (long *)0x0) goto LAB_0460b418;
  }
  func_0x04653c3c(&plStack_278,plStack_2c8);
  func_0x04653bf0(plVar23 + 0x14a,&plStack_278);
  if (pplStack_258 == &plStack_278) {
    lVar13 = 0x20;
LAB_0460b468:
    (**(code **)((long)*pplStack_258 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (pplStack_258 != (long **)0x0) goto LAB_0460b468;
  }
  func_0x04653c3c(apuStack_2a8,plStack_2c0);
  func_0x04653bf0(plVar23 + 0x150,apuStack_2a8);
  if (ppuStack_288 == apuStack_2a8) {
    lVar13 = 0x20;
LAB_0460b4b8:
    (**(code **)((long)*ppuStack_288 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_288 != (undefined8 **)0x0) goto LAB_0460b4b8;
  }
  func_0x0465e7ee(&puStack_328,plVar11 + 0x40);
  func_0x0465e6c0(plVar23 + 0x156,&puStack_328);
  if (ppuStack_308 == &puStack_328) {
    lVar13 = 0x20;
LAB_0460b508:
    (**(code **)(*ppuStack_308 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_308 != (undefined **)0x0) goto LAB_0460b508;
  }
  func_0x046586d6(&puStack_358,plVar11 + 0x46);
  func_0x0465868a(plVar23 + 0x15c,&puStack_358);
  if (ppuStack_338 == &puStack_358) {
    lVar13 = 0x20;
LAB_0460b558:
    (**(code **)((long)*ppuStack_338 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_338 != (undefined8 **)0x0) goto LAB_0460b558;
  }
  func_0x046586d6(&uStack_3c8,plStack_2d0);
  func_0x0465868a(plVar23 + 0x162,&uStack_3c8);
  if (puStack_3a8 == &uStack_3c8) {
    lVar13 = 0x20;
LAB_0460b5a8:
    (**(code **)(*puStack_3a8 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (puStack_3a8 != (ulong *)0x0) goto LAB_0460b5a8;
  }
  func_0x04653c3c(auStack_398,plVar11 + 0x52);
  func_0x04653bf0(plVar23 + 0x168,auStack_398);
  if (puStack_378 == auStack_398) {
    lVar13 = 0x20;
LAB_0460b5f8:
    (**(code **)(*puStack_378 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (puStack_378 != (ulong *)0x0) goto LAB_0460b5f8;
  }
  func_0x04653c3c(&plStack_538,plVar11 + 0x58);
  func_0x04653bf0(plVar23 + 0x16e,&plStack_538);
  if (pplStack_518 == &plStack_538) {
    lVar13 = 0x20;
LAB_0460b648:
    (**(code **)((long)*pplStack_518 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (pplStack_518 != (long **)0x0) goto LAB_0460b648;
  }
  func_0x0465e95a(&uStack_218,plVar11 + 0x5e);
  func_0x0465e82c(plVar23 + 0x174,&uStack_218);
  if (plStack_1f8 == &uStack_218) {
    lVar13 = 0x20;
LAB_0460b698:
    (**(code **)(*plStack_1f8 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (plStack_1f8 != (long *)0x0) goto LAB_0460b698;
  }
  func_0x0465856a(&puStack_1c8,plStack_2d8);
  func_0x0465851e(plVar23 + 0x17a,&puStack_1c8);
  if (ppuStack_1a8 == &puStack_1c8) {
    lVar13 = 0x20;
LAB_0460b6e8:
    (**(code **)((long)*ppuStack_1a8 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (ppuStack_1a8 != (undefined8 **)0x0) goto LAB_0460b6e8;
  }
  plVar24 = plStack_550;
  if (plVar11[0x6a] != 5000) {
    plVar23[0x180] = plVar11[0x6a];
  }
  if (plVar11[0x6b] != 5000) {
    plVar23[0x181] = plVar11[0x6b];
  }
  if (plVar11[0x6c] != 5000) {
    plVar23[0x182] = plVar11[0x6c];
  }
  puVar22 = (undefined *)plVar11[0x6d];
  if (puVar22 != &UNK_01e84800) {
    plVar23[0x183] = (long)puVar22;
    if (plVar23[0x99f] != 0) {
      *(undefined **)(plVar23[0x99f] + 0x10) = puVar22;
    }
  }
  plVar23[0x9ba] = plVar11[0x6e];
  aiStack_448[0] = 0;
  lStack_440 = lStack_560;
  plStack_1d8 = plVar23;
  plStack_1d0 = plStack_550;
  if (plStack_550 == (long *)0x0) {
    plStack_470 = (long *)0x0;
  }
  else {
    LOCK();
    plStack_550[1] = plStack_550[1] + 1;
    UNLOCK();
    plStack_470 = plStack_550;
    LOCK();
    plStack_550[1] = plStack_550[1] + 1;
    UNLOCK();
  }
  plStack_478 = plVar23;
  func_0x0466e2fe(plVar11,&plStack_478);
  plVar25 = plStack_470;
  if (plStack_470 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_470 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_470 + 0x10))(plStack_470);
      FUN_0412c2d0(plVar25);
    }
  }
  lVar13 = plVar11[0x18];
  plVar23[0x18] = lVar13;
  lStack_130 = lVar13;
  func_0x0465ed00(&uStack_578,&uStack_609);
  func_0x0465ea88(plVar23 + 0x19,&uStack_578);
  plVar25 = (long *)CONCAT44(uStack_56c,uStack_570);
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar1 = plVar25 + 1;
    lVar18 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      FUN_0412c2d0(plVar25);
    }
  }
  uStack_578 = (undefined4)plVar23[0x19];
  uStack_574 = *(undefined4 *)((long)plVar23 + 0xcc);
  uStack_570 = (undefined4)plVar23[0x1a];
  uStack_56c = *(undefined4 *)((long)plVar23 + 0xd4);
  if (plVar23[0x1a] != 0) {
    LOCK();
    plVar25 = (long *)(plVar23[0x1a] + 8);
    *plVar25 = *plVar25 + 1;
    UNLOCK();
  }
  iVar9 = func_0x0466e4f2(plVar23,lVar13,&uStack_578,(char)plVar23[0xe]);
  plVar25 = (long *)CONCAT44(uStack_56c,uStack_570);
  if (plVar25 != (long *)0x0) {
    LOCK();
    plVar1 = plVar25 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      FUN_0412c2d0(plVar25);
    }
  }
  lVar13 = extraout_RDX;
  if (iVar9 == 0) {
    func_0x04653c3c(auStack_608,plVar11 + 0xc);
    func_0x04653bf0(plVar23 + 0x22,auStack_608);
    if (plStack_5e8 == (long *)auStack_608) {
      lVar13 = 0x20;
LAB_0460b939:
      (**(code **)(*plStack_5e8 + lVar13))();
    }
    else {
      lVar13 = 0x28;
      if (plStack_5e8 != (long *)0x0) goto LAB_0460b939;
    }
    func_0x04653c3c(&plStack_438,plVar11 + 0x12);
    func_0x04653bf0(plVar23 + 0x28,&plStack_438);
    if (pplStack_418 == &plStack_438) {
      lVar18 = 0x20;
    }
    else {
      lVar18 = 0x28;
      lVar13 = lStack_560;
      if (pplStack_418 == (long **)0x0) goto LAB_0460b99a;
    }
    (**(code **)((long)*pplStack_418 + lVar18))();
    lVar13 = lStack_560;
  }
LAB_0460b99a:
  unaff_R12 = plStack_548;
  aiStack_448[0] = iVar9;
  lStack_440 = lVar13;
  if (plVar24 != (long *)0x0) {
    LOCK();
    plVar11 = plVar24 + 1;
    lVar13 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      FUN_0412c2d0(plVar24);
    }
  }
  if (aiStack_448[0] == 0) {
    pplVar15 = &plStack_558;
    uStack_588 = plStack_558;
    uStack_580 = plStack_550;
  }
  else {
    func_0x0412dda0(auStack_608,aiStack_448);
    plVar24 = plStack_5f8;
    if (((ulong)auStack_608 & 1) == 0) {
      plVar24 = (long *)(auStack_608 + 1);
    }
    func_0x04601aa3(0xf53dde0,1,&UNK_012ee1a2,plVar24);
    if (((ulong)auStack_608 & 1) != 0) {
      func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
    }
    pplVar15 = (long **)&uStack_588;
  }
  *pplVar15 = (long *)0x0;
  pplVar15[1] = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    FUN_0412c2d0();
  }
  plVar24 = plStack_550;
  if (plStack_550 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_550 + 1;
    lVar13 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_550 + 0x10))(plStack_550);
      FUN_0412c2d0(plVar24);
    }
  }
  if (uStack_588 == (long *)0x0) {
    plVar24 = (long *)0x11;
    if (cRam000000000f54ca90 == '\0') goto LAB_0460d148;
  }
  else {
    auStack_608 = (undefined1  [8])plStack_458;
    plStack_600 = plStack_450;
    if (plStack_450 != (long *)0x0) {
      LOCK();
      plStack_450[1] = plStack_450[1] + 1;
      UNLOCK();
    }
    func_0x0465f9c0(uStack_588 + 0x9d9,auStack_608);
    plVar11 = plStack_600;
    plVar24 = (long *)0x0;
    if (plStack_600 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_600 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_600 + 0x10))(plStack_600);
        FUN_0412c2d0(plVar11);
      }
    }
  }
LAB_0460bb25:
  do {
    plVar11 = plStack_450;
    plVar12 = unaff_R13;
    if (plStack_450 != (long *)0x0) {
      LOCK();
      plVar23 = plStack_450 + 1;
      lVar13 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_450 + 0x10))(plStack_450);
        FUN_0412c2d0(plVar11);
      }
    }
LAB_0460bb55:
    plVar11 = plStack_360;
    if (plStack_360 != (long *)0x0) {
      LOCK();
      plVar23 = plStack_360 + 1;
      lVar13 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_360 + 0x10))(plStack_360);
        FUN_0412c2d0(plVar11);
      }
    }
    if (((ulong)plStack_4a0 & 1) != 0) {
      func_0x0412a280(uStack_490,(ulong)plStack_4a0 & 0xfffffffffffffffe);
    }
    if (uStack_580 != (long *)0x0) {
      LOCK();
      uStack_580[2] = uStack_580[2] + 1;
      UNLOCK();
    }
    lVar13 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_588;
    *(undefined4 *)(param_1 + 0x2c) = uStack_588._4_4_;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_580;
    *(undefined4 *)(param_1 + 0x34) = uStack_580._4_4_;
    if (lVar13 != 0) {
      FUN_0412c2d0();
    }
    if ((int)plVar24 != 0) {
      uVar21 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xe8) + 8) + 0x18);
      puVar22 = &UNK_011d1a64;
      goto LAB_0460bc01;
    }
    unaff_R12 = (long *)*unaff_R12;
    if (unaff_R12 != plVar12) {
      do {
        func_0x045ee774(auStack_608,&UNK_011eaa03);
        plVar11 = plStack_5f8;
        auVar6 = auStack_608;
        unaff_R13 = (long *)((long)unaff_R12 + 0x21);
        plVar24 = unaff_R13;
        if ((*(byte *)(unaff_R12 + 4) & 1) != 0) {
          plVar24 = (long *)unaff_R12[6];
        }
        plVar23 = plStack_5f8;
        if (((ulong)auStack_608 & 1) == 0) {
          plVar23 = (long *)(auStack_608 + 1);
        }
        iVar9 = func_0x0eee3ef0(plVar24,plVar23);
        if (((ulong)auVar6 & 1) != 0) {
          func_0x045efa8a(plVar11);
        }
        plVar24 = uStack_588;
        if (iVar9 != 0) {
          if ((*(byte *)(unaff_R12 + 4) & 1) != 0) {
            unaff_R13 = (long *)unaff_R12[6];
          }
          func_0x04160690(&plStack_438,unaff_R13);
          if ((*(byte *)(unaff_R12 + 7) & 1) == 0) {
            lVar13 = (long)unaff_R12 + 0x39;
          }
          else {
            lVar13 = unaff_R12[9];
          }
          func_0x04160690(&uStack_508,lVar13);
          if ((char)plVar24[0x9e1] == '\x01') {
            lVar13 = 0x4e28;
            if (*(int *)((long)plVar24 + 0xc24) != 6) goto LAB_0460cf84;
          }
          else {
            lVar13 = 0x4d78;
            if (*(int *)((long)plVar24 + 0xc24) != 0) {
              uVar21 = func_0x041086b0(0x30);
              func_0x04160690(auStack_608,&UNK_0145cda3);
              uVar10 = func_0x0465222c(9);
              func_0x0465fc54(uVar21,auStack_608,uVar10,extraout_RDX_00);
              FUN_041088a0(uVar21,&UNK_0ef10570,&UNK_046521fa);
              goto LAB_0460cfd8;
            }
          }
          func_0x0465fa12((long)plVar24 + lVar13,&plStack_438,&uStack_508);
          if (((ulong)uStack_508 & 1) != 0) {
            func_0x0412a280(CONCAT44(uStack_4f4,uStack_4f8),(ulong)uStack_508 & 0xfffffffffffffffe);
          }
          if (((ulong)plStack_438 & 1) != 0) {
            func_0x0412a280(plStack_428,(ulong)plStack_438 & 0xfffffffffffffffe);
          }
        }
        plVar24 = (long *)unaff_R12[1];
        plVar11 = unaff_R12;
        if ((long *)unaff_R12[1] == (long *)0x0) {
          do {
            unaff_R12 = (long *)plVar11[2];
            bVar26 = plVar11 != (long *)*unaff_R12;
            plVar11 = unaff_R12;
          } while (bVar26);
        }
        else {
          do {
            unaff_R12 = plVar24;
            plVar24 = (long *)*unaff_R12;
          } while ((long *)*unaff_R12 != (long *)0x0);
        }
        if (unaff_R12 == plVar12) break;
      } while( true );
    }
    plVar24 = uStack_588;
    bVar8 = *(byte *)(param_1 + 0x1a0);
    if ((bVar8 & 1) == 0) {
      uVar17 = (ulong)(bVar8 >> 1);
    }
    else {
      uVar17 = *(ulong *)(param_1 + 0x1a8);
    }
    if (uVar17 != 0) {
      if ((bVar8 & 1) == 0) {
        lVar13 = param_1 + 0x1a1;
      }
      else {
        lVar13 = *(long *)(param_1 + 0x1b0);
      }
      func_0x04160690(auStack_608,lVar13);
      if ((char)plVar24[0x9e1] == '\x01') {
LAB_0460bea6:
        if (cRam000000000f54ca90 == '\0') {
          iVar9 = func_0x04108328(0xf54ca90);
          if (iVar9 != 0) {
            _DAT_0f54ca88 = &UNK_0ef10598;
            func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
            func_0x0410844d(0xf54ca90);
          }
          bVar26 = false;
        }
        else {
          bVar26 = false;
        }
      }
      else {
        plVar11 = plStack_600;
        if (((ulong)auStack_608 & 1) == 0) {
          plVar11 = (long *)((ulong)auStack_608 >> 1 & 0x7f);
        }
        if (plVar11 == (long *)0x0) goto LAB_0460bea6;
        plVar12 = plStack_5f8;
        if (((ulong)auStack_608 & 1) == 0) {
          plVar12 = (long *)(auStack_608 + 1);
        }
        plVar23 = (long *)0x0;
        do {
          if ((&UNK_01529ef0)[*(byte *)((long)plVar12 + (long)plVar23)] == '\0') {
            if (plVar11 != plVar23) goto LAB_0460bea6;
            break;
          }
          plVar23 = (long *)((long)plVar23 + 1);
        } while (plVar11 != plVar23);
        bVar26 = true;
        func_0x0651e050(plVar24 + 0x9de,auStack_608);
      }
      if (((ulong)auStack_608 & 1) != 0) {
        func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
      }
      if (!bVar26) {
        uVar21 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xe8) + 8) + 0x18);
        puVar22 = &UNK_013aa178;
LAB_0460bc01:
        func_0x04601aa3(0xf53dde0,1,puVar22,uVar21);
        iVar9 = -0x7fffbffb;
        goto LAB_0460bc12;
      }
    }
    pbVar14 = (byte *)func_0x045f4396(*(undefined8 *)(*(long *)(param_1 + 0xe8) + 8));
    plVar24 = uStack_588;
    if ((*pbVar14 & 1) == 0) {
      uVar17 = (ulong)(*pbVar14 >> 1);
    }
    else {
      uVar17 = *(ulong *)(pbVar14 + 8);
    }
    if (uVar17 != 0) {
      pbVar14 = (byte *)func_0x045f4396(*(undefined8 *)(*(long *)(param_1 + 0xe8) + 8));
      if ((*pbVar14 & 1) == 0) {
        pbVar14 = pbVar14 + 1;
      }
      else {
        pbVar14 = *(byte **)(pbVar14 + 0x10);
      }
      func_0x04160690(auStack_608,pbVar14);
      func_0x041307e0(plVar24 + 0x13,auStack_608);
      puVar16 = (undefined8 *)func_0x0ee32660(0x1f8);
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = &UNK_0ef0f7c8;
      func_0x04658f10(puVar16 + 3);
      func_0x04658fb8(puVar16 + 0x19);
      puVar16[0x2d] = 0;
      puVar16[0x2e] = 0;
      puVar16[0x2f] = 0;
      func_0x04660120(puVar16 + 0x30,0xffffffffffffffff,&plStack_438);
      puVar16[0x3c] = 5000;
      puVar16[0x3d] = 0;
      puVar16[0x3e] = 0;
      plVar24[0x16] = (long)(puVar16 + 3);
      plVar11 = (long *)plVar24[0x17];
      plVar24[0x17] = (long)puVar16;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar24 = plVar11 + 1;
        lVar13 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          FUN_0412c2d0(plVar11);
        }
      }
      if (((ulong)auStack_608 & 1) != 0) {
        func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
      }
    }
    func_0x046071e2(auStack_2b8,plStack_620);
    uVar21 = func_0x0460ea00(auStack_2b8);
    iVar9 = func_0x045f651d(plStack_618,uVar21,&UNK_045f5b2b,&UNK_012201de,&UNK_0463bb7a);
    plVar24 = plStack_2b0;
    if (plStack_2b0 != (long *)0x0) {
      LOCK();
      plVar11 = plStack_2b0 + 1;
      lVar13 = *plVar11;
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
        FUN_0412c2d0(plVar24);
      }
    }
    plVar11 = uStack_580;
    plVar24 = uStack_588;
    if (iVar9 < 0) goto LAB_0460bc12;
    LOCK();
    *(undefined4 *)(param_1 + 0x78) = 0;
    UNLOCK();
    plStack_468 = uStack_588;
    plStack_460 = uStack_580;
    if (uStack_580 != (long *)0x0) {
      LOCK();
      uStack_580[1] = uStack_580[1] + 1;
      UNLOCK();
      LOCK();
      uStack_580[1] = uStack_580[1] + 1;
      UNLOCK();
    }
    plStack_4a0 = uStack_588;
    plStack_498 = uStack_580;
    plVar12 = (long *)uStack_588[0x9da];
    uStack_578 = (undefined4)uStack_588[0x9d9];
    uStack_574 = *(undefined4 *)((long)uStack_588 + 0x4ecc);
    uStack_570 = (undefined4)uStack_588[0x9da];
    uStack_56c = *(undefined4 *)((long)uStack_588 + 0x4ed4);
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
    }
    puStack_328 = &UNK_0463bca0;
    uStack_320 = 0;
    plStack_310 = uStack_588;
    ppuStack_308 = (undefined **)uStack_580;
    if (uStack_580 != (long *)0x0) {
      LOCK();
      uStack_580[1] = uStack_580[1] + 1;
      UNLOCK();
    }
    plStack_618 = uStack_580;
    plStack_318 = plStack_630;
    plStack_620 = (long *)func_0x0ee32660(0x30);
    *plStack_620 = (long)&UNK_0ef0ff38;
    plStack_620[1] = (long)&UNK_0463bca0;
    plStack_620[2] = 0;
    plStack_620[3] = (long)plStack_630;
    plStack_620[4] = (long)plVar24;
    plStack_620[5] = (long)plVar11;
    plStack_310 = (long *)0x0;
    ppuStack_308 = (undefined **)0x0;
    plStack_488 = plStack_630 + 0x1c;
    if (plStack_630[0x1c] == 0) {
      plStack_438 = (long *)plStack_630[0x18];
      func_0x046612b7(auStack_608,&uStack_508);
      func_0x04660f9c(plStack_488,auStack_608);
      plVar12 = plStack_600;
      if (plStack_600 != (long *)0x0) {
        LOCK();
        plVar23 = plStack_600 + 1;
        lVar13 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_600 + 0x10))(plStack_600);
          FUN_0412c2d0(plVar12);
        }
      }
      plVar12 = (long *)CONCAT44(uStack_56c,uStack_570);
    }
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar12[1] = plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar23 = plVar12 + 1;
      lVar13 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0412c2d0(plVar12);
      }
      LOCK();
      plVar23 = plVar12 + 1;
      lVar13 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0412c2d0(plVar12);
      }
    }
    if ((*(byte *)(plVar24 + 0x13) & 1) == 0) {
      lStack_3b8 = plVar24[0x15];
      uStack_3c8 = plVar24[0x13];
      uStack_3c0 = plVar24[0x14];
    }
    else {
      func_0x0412e5e0(&uStack_3c8,plVar24[0x15],plVar24[0x14]);
    }
    auStack_398[0] = 0;
    auStack_398[1] = 0;
    auStack_398[2] = 0;
    plStack_528 = (long *)0x0;
    plStack_538 = (long *)0x0;
    plStack_530 = (long *)0x0;
    uVar17 = uStack_3c0;
    if ((uStack_3c8 & 1) == 0) {
      uVar17 = uStack_3c8 >> 1 & 0x7f;
    }
    if (uVar17 == 0) {
      lVar13 = CONCAT44(uStack_574,uStack_578);
      func_0x041307e0(auStack_398,lVar13 + 0x18);
      func_0x04660fe6(auStack_608,lVar13);
      if (((ulong)plStack_538 & 1) != 0) {
        func_0x0412a280(plStack_528,(ulong)plStack_538 & 0xfffffffffffffffe);
      }
      plStack_528 = plStack_5f8;
      plStack_538 = (long *)auStack_608;
      plStack_530 = plStack_600;
LAB_0460c517:
      func_0x046611ca(&uStack_508,auStack_398,&plStack_538,0x20);
      uStack_218 = (undefined1  [8])0x0;
      uStack_210 = (long *)0x0;
      plStack_278 = (long *)&UNK_0463c08c;
      plStack_270 = (long *)0x0;
      puStack_260 = (undefined8 *)0x0;
      pplStack_258 = (long **)0x0;
      plStack_268 = plStack_630;
      plStack_228 = (long *)(**(code **)(*plStack_620 + 0x10))(plStack_620);
      ppuStack_288 = (undefined8 **)0x0;
      ppuVar19 = (undefined8 **)func_0x0ee32660(0x70);
      *ppuVar19 = (undefined8 *)&UNK_0ef0f818;
      ppuVar19[2] = plStack_278;
      ppuVar19[3] = plStack_270;
      ppuVar19[4] = plStack_268;
      ppuVar19[5] = puStack_260;
      ppuVar19[6] = pplStack_258;
      puStack_260 = (undefined8 *)0x0;
      pplStack_258 = (long **)0x0;
      func_0x046551a2(ppuVar19 + 8,alStack_248);
      ppuStack_288 = ppuVar19;
      func_0x04615e76(auStack_608,plVar24,5000,apuStack_2a8);
      uStack_210 = plStack_600;
      uStack_218 = auStack_608;
      auStack_608 = (undefined1  [8])0x0;
      plStack_600 = (long *)0x0;
      if (ppuStack_288 == apuStack_2a8) {
        lVar13 = 0x20;
LAB_0460c662:
        (**(code **)((long)*ppuStack_288 + lVar13))();
      }
      else {
        lVar13 = 0x28;
        if (ppuStack_288 != (undefined8 **)0x0) goto LAB_0460c662;
      }
      if (plStack_228 == alStack_248) {
        lVar13 = 0x20;
LAB_0460c686:
        (**(code **)(*plStack_228 + lVar13))();
      }
      else {
        lVar13 = 0x28;
        if (plStack_228 != (long *)0x0) goto LAB_0460c686;
      }
      pplVar15 = pplStack_258;
      if (pplStack_258 != (long **)0x0) {
        LOCK();
        pplVar2 = pplStack_258 + 1;
        plVar12 = *pplVar2;
        *pplVar2 = (long *)((long)*pplVar2 + -1);
        UNLOCK();
        if (plVar12 == (long *)0x0) {
          (*(code *)(*pplStack_258)[2])(pplStack_258);
          FUN_0412c2d0(pplVar15);
        }
      }
      plVar12 = (long *)*plStack_488;
      puVar16 = (undefined8 *)plVar24[0x19];
      plStack_1c0 = (long *)plVar24[0x1a];
      if (plStack_1c0 != (long *)0x0) {
        LOCK();
        plStack_1c0[1] = plStack_1c0[1] + 1;
        UNLOCK();
      }
      plStack_438 = (long *)&UNK_0463c1d2;
      plStack_430 = (long *)0x0;
      plStack_428 = plStack_630;
      plStack_420 = plVar24;
      pplStack_418 = (long **)plVar11;
      if (plVar11 != (long *)0x0) {
        LOCK();
        plVar11[1] = plVar11[1] + 1;
        UNLOCK();
      }
      uStack_410._0_4_ = SUB84(uStack_218,0);
      uStack_410._4_4_ = uStack_218._4_4_;
      uStack_408._0_4_ = SUB84(uStack_210,0);
      uStack_408._4_4_ = uStack_210._4_4_;
      if (uStack_210 != (long *)0x0) {
        LOCK();
        uStack_210[1] = uStack_210[1] + 1;
        UNLOCK();
      }
      puStack_1c8 = puVar16;
      plStack_3d8 = (long *)(**(code **)(*plStack_620 + 0x10))();
      auStack_608 = (undefined1  [8])*puVar16;
      plStack_600 = (long *)puVar16[1];
      plVar24 = alStack_5b8;
      plStack_5f8 = plStack_438;
      plStack_5f0 = plStack_430;
      plStack_5e8 = plStack_428;
      plStack_5e0 = plStack_420;
      plStack_5d8 = (long *)pplStack_418;
      plStack_420 = (long *)0x0;
      pplStack_418 = (long **)0x0;
      uStack_5d0 = (undefined4)uStack_410;
      uStack_5cc = uStack_410._4_4_;
      uStack_5c8 = (undefined4)uStack_408;
      uStack_5c4 = uStack_408._4_4_;
      uStack_410 = 0;
      uStack_408 = (long *)0x0;
      func_0x046551a2(plVar24);
      lVar13 = *plVar12;
      if (*(long *)(*in_FS_OFFSET + -0x1778) == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = *(undefined8 *)(*(long *)(*in_FS_OFFSET + -0x1778) + 8);
      }
      puStack_358 = (undefined8 *)auStack_608;
      puVar16 = (undefined8 *)func_0x04654f86(uVar21,0x130);
      puStack_348 = (undefined8 *)0x0;
      lVar18 = plVar12[2];
      plStack_488 = (long *)plVar12[1];
      uStack_480 = (undefined4)plVar12[2];
      uStack_47c = *(undefined4 *)((long)plVar12 + 0x14);
      if (lVar18 != 0) {
        LOCK();
        *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
        UNLOCK();
      }
      uVar21 = *(undefined8 *)(lVar13 + 0x28);
      *puVar16 = 0;
      puVar16[1] = &UNK_0463cf56;
      *(undefined4 *)(puVar16 + 2) = 0;
      *(undefined4 *)(puVar16 + 3) = 0;
      puStack_350 = puVar16;
      uVar20 = func_0x0412dd40();
      puVar16[4] = uVar20;
      puVar16[5] = plStack_488;
      puVar16[6] = CONCAT44(uStack_47c,uStack_480);
      if (lVar18 != 0) {
        LOCK();
        *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
        UNLOCK();
      }
      *(undefined4 *)(puVar16 + 0xb) = uStack_4e8;
      *(undefined4 *)((long)puVar16 + 0x5c) = uStack_4e4;
      *(undefined4 *)(puVar16 + 0xc) = uStack_4e0;
      *(undefined4 *)((long)puVar16 + 100) = uStack_4dc;
      *(undefined4 *)(puVar16 + 9) = uStack_4f8;
      *(undefined4 *)((long)puVar16 + 0x4c) = uStack_4f4;
      *(undefined4 *)(puVar16 + 10) = uStack_4f0;
      *(undefined4 *)((long)puVar16 + 0x54) = uStack_4ec;
      *(undefined4 *)(puVar16 + 7) = (undefined4)uStack_508;
      *(undefined4 *)((long)puVar16 + 0x3c) = uStack_508._4_4_;
      *(undefined4 *)(puVar16 + 8) = (undefined4)uStack_500;
      *(undefined4 *)((long)puVar16 + 0x44) = uStack_500._4_4_;
      if ((uStack_4d8 & 1) == 0) {
        puVar16[0xf] = uStack_4c8;
        *(uint *)(puVar16 + 0xd) = uStack_4d8;
        *(undefined4 *)((long)puVar16 + 0x6c) = uStack_4d4;
        *(undefined4 *)(puVar16 + 0xe) = uStack_4d0;
        *(undefined4 *)((long)puVar16 + 0x74) = uStack_4cc;
      }
      else {
        func_0x0412e5e0(puVar16 + 0xd,uStack_4c8,CONCAT44(uStack_4cc,uStack_4d0));
      }
      if ((uStack_4c0 & 1) == 0) {
        puVar16[0x12] = uStack_4b0;
        *(uint *)(puVar16 + 0x10) = uStack_4c0;
        *(undefined4 *)((long)puVar16 + 0x84) = uStack_4bc;
        *(undefined4 *)(puVar16 + 0x11) = uStack_4b8;
        *(undefined4 *)((long)puVar16 + 0x8c) = uStack_4b4;
      }
      else {
        func_0x0412e5e0(puVar16 + 0x10,uStack_4b0,CONCAT44(uStack_4b4,uStack_4b8));
      }
      puVar16[0x13] = uVar21;
      func_0x0463d812(puVar16 + 0x14,auStack_608);
      puVar16[0x24] = 0;
      puStack_348 = puVar16;
      if (lVar18 != 0) {
        FUN_0412c2d0(lVar18);
      }
      func_0x0466291e(lVar13 + 0x28,puVar16);
      puStack_350 = (undefined8 *)0x0;
      puStack_348 = (undefined8 *)0x0;
      func_0x0463d850(&puStack_358);
      if (plStack_598 == plVar24) {
        lVar13 = 0x20;
LAB_0460c9a1:
        (**(code **)(*plStack_598 + lVar13))();
      }
      else {
        lVar13 = 0x28;
        if (plStack_598 != (long *)0x0) goto LAB_0460c9a1;
      }
      plVar12 = (long *)CONCAT44(uStack_5c4,uStack_5c8);
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar23 = plVar12 + 1;
        lVar13 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          FUN_0412c2d0(plVar12);
        }
      }
      plVar12 = plStack_5d8;
      if (plStack_5d8 != (long *)0x0) {
        LOCK();
        plVar23 = plStack_5d8 + 1;
        lVar13 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
          FUN_0412c2d0(plVar12);
        }
      }
      if (plStack_3d8 == alStack_3f8) {
        lVar13 = 0x20;
LAB_0460ca27:
        (**(code **)(*plStack_3d8 + lVar13))();
      }
      else {
        lVar13 = 0x28;
        if (plStack_3d8 != (long *)0x0) goto LAB_0460ca27;
      }
      plVar12 = uStack_408;
      if (uStack_408 != (long *)0x0) {
        LOCK();
        plVar23 = uStack_408 + 1;
        lVar13 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*uStack_408 + 0x10))(uStack_408);
          FUN_0412c2d0(plVar12);
        }
      }
      pplVar15 = pplStack_418;
      if (pplStack_418 != (long **)0x0) {
        LOCK();
        pplVar2 = pplStack_418 + 1;
        plVar12 = *pplVar2;
        *pplVar2 = (long *)((long)*pplVar2 + -1);
        UNLOCK();
        if (plVar12 == (long *)0x0) {
          (*(code *)(*pplStack_418)[2])(pplStack_418);
          FUN_0412c2d0(pplVar15);
        }
      }
      plVar12 = plStack_1c0;
      if (plStack_1c0 != (long *)0x0) {
        LOCK();
        plVar23 = plStack_1c0 + 1;
        lVar13 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
          FUN_0412c2d0(plVar12);
        }
      }
      plVar12 = uStack_210;
      if (uStack_210 != (long *)0x0) {
        LOCK();
        plVar23 = uStack_210 + 1;
        lVar13 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*uStack_210 + 0x10))(uStack_210);
          FUN_0412c2d0(plVar12);
        }
      }
      if ((uStack_4c0 & 1) != 0) {
        func_0x0412a280(uStack_4b0,CONCAT44(uStack_4bc,uStack_4c0) & 0xfffffffffffffffe);
      }
      if ((uStack_4d8 & 1) != 0) {
        func_0x0412a280(uStack_4c8,CONCAT44(uStack_4d4,uStack_4d8) & 0xfffffffffffffffe);
      }
    }
    else {
      uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
      puVar22 = (undefined *)func_0x0412dd40();
      uStack_500 = puVar22;
      func_0x0466271c(&plStack_278,auStack_608,&uStack_3c8);
      if (*(char *)((long)plStack_278 + 0x4b) == '\0') {
        if ((cRam000000000f54caa8 == '\0') && (iVar9 = func_0x04108328(0xf54caa8), iVar9 != 0)) {
          func_0x0eee2f40(&UNK_041369a0,0xf53ded8,0xf53dab8);
          func_0x0410844d(0xf54caa8);
        }
        auStack_608._0_4_ = 5;
        plStack_600 = (long *)0xf53ded8;
        (**(code **)(*plStack_620 + 0x30))();
      }
      else {
        func_0x046610be(&plStack_438,CONCAT44(uStack_574,uStack_578));
        lVar13 = plVar24[0x16];
        if (lVar13 == 0) {
          uVar10 = 9;
          puVar22 = &DAT_0f54ca88;
          if (cRam000000000f54ca90 == '\0') {
            iVar9 = func_0x04108328(0xf54ca90);
            if (iVar9 != 0) {
              _DAT_0f54ca88 = &UNK_0ef10598;
              func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
              func_0x0410844d(0xf54ca90);
            }
            puVar22 = &DAT_0f54ca88;
          }
        }
        else {
          func_0x04160690(auStack_608,&UNK_012a2213);
          func_0x041307e0(lVar13,auStack_608);
          if (((ulong)auStack_608 & 1) != 0) {
            func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
          }
          lVar18 = plVar24[0x16];
          func_0x04160690(auStack_608,&UNK_012560ff);
          func_0x046627ae(lVar18,auStack_608);
          if (((ulong)auStack_608 & 1) != 0) {
            func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
          }
          func_0x041307e0(plVar24[0x16] + 0x90,&plStack_438);
          lVar18 = plVar24[0x16];
          func_0x04160690(auStack_608,&UNK_0126fa2c);
          apuStack_2a8[0] = (undefined8 *)auStack_608;
          lVar18 = func_0x0465fe6c(lVar18 + 0x18,auStack_608,&UNK_01563a4f,apuStack_2a8,&puStack_358
                                  );
          func_0x041307e0(lVar18 + 0x38,&plStack_438);
          if (((ulong)auStack_608 & 1) != 0) {
            func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
          }
          uVar10 = 0;
        }
        uStack_508 = (long *)CONCAT44(uStack_508._4_4_,uVar10);
        uStack_500 = puVar22;
        if (((ulong)plStack_438 & 1) != 0) {
          func_0x0412a280(plStack_428,(ulong)plStack_438 & 0xfffffffffffffffe);
        }
        if (lVar13 != 0) {
          func_0x041307e0(auStack_398,plStack_278 + 3);
          func_0x04660fe6(auStack_608,plStack_278);
          if (((ulong)plStack_538 & 1) != 0) {
            func_0x0412a280(plStack_528,(ulong)plStack_538 & 0xfffffffffffffffe);
          }
          plVar12 = plStack_270;
          plStack_528 = plStack_5f8;
          plStack_538 = (long *)auStack_608;
          plStack_530 = plStack_600;
          if (plStack_270 != (long *)0x0) {
            LOCK();
            plVar23 = plStack_270 + 1;
            lVar13 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plStack_270 + 0x10))(plStack_270);
              FUN_0412c2d0(plVar12);
            }
          }
          goto LAB_0460c517;
        }
        (**(code **)(*plStack_620 + 0x30))(plStack_620,&uStack_508);
      }
      plVar12 = plStack_270;
      if (plStack_270 != (long *)0x0) {
        LOCK();
        plVar23 = plStack_270 + 1;
        lVar13 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_270 + 0x10))(plStack_270);
          FUN_0412c2d0(plVar12);
        }
      }
    }
    if (((ulong)plStack_538 & 1) != 0) {
      func_0x0412a280(plStack_528,(ulong)plStack_538 & 0xfffffffffffffffe);
    }
    if ((auStack_398[0] & 1) != 0) {
      func_0x0412a280(auStack_398[2],auStack_398[0] & 0xfffffffffffffffe);
    }
    if ((uStack_3c8 & 1) != 0) {
      func_0x0412a280(lStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
    }
    (**(code **)(*plStack_620 + 0x28))();
    ppuVar7 = ppuStack_308;
    if (ppuStack_308 != (undefined **)0x0) {
      LOCK();
      ppuVar3 = ppuStack_308 + 1;
      puVar22 = *ppuVar3;
      *ppuVar3 = *ppuVar3 + -1;
      UNLOCK();
      if (puVar22 == (undefined *)0x0) {
        (**(code **)(*ppuStack_308 + 0x10))(ppuStack_308);
        FUN_0412c2d0(ppuVar7);
      }
    }
    plVar12 = (long *)CONCAT44(uStack_56c,uStack_570);
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar23 = plVar12 + 1;
      lVar13 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0412c2d0(plVar12);
      }
    }
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0412c2d0(plVar11);
      }
    }
    plVar11 = plStack_460;
    plStack_468 = (long *)0x0;
    plStack_460 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      LOCK();
      plVar12 = plVar11 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_0412c2d0(plVar11);
      }
    }
    plVar11 = plStack_460;
    if (plStack_460 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_460 + 1;
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_460 + 0x10))(plStack_460);
        FUN_0412c2d0(plVar11);
      }
    }
    plVar11 = (long *)func_0x045efa4a(0x20);
    if (plVar11 == (long *)0x0) {
      uVar21 = func_0x041086b0(8);
      func_0x0412a3f0(uVar21);
      iVar9 = FUN_041088a0(uVar21,&UNK_0eeebbd8,&SUB_0412a380);
LAB_0460d135:
      func_0x0412e520(iVar9,&UNK_012201b3);
    }
    else {
      plVar11[1] = 0;
      plVar11[2] = 0;
      *plVar11 = (long)&UNK_0ef0ffd0;
      plVar12 = plVar11 + 3;
      plVar11[3] = (long)plStack_630;
      LOCK();
      plVar11[1] = plVar11[1] + 1;
      UNLOCK();
      plVar23 = *(long **)(*(long *)(*(long *)(param_1 + 0xe8) + 8) + 0x18);
      auStack_608 = (undefined1  [8])plVar12;
      plStack_600 = plVar11;
      plStack_5f8 = plVar23;
      plStack_438 = plVar12;
      plStack_430 = plVar11;
      lVar13 = func_0x0ee32660(8);
      func_0x04136fe0(lVar13);
      uStack_508 = (long *)lVar13;
      plStack_278 = (long *)func_0x0ee32660(0x20);
      uStack_508 = (long *)0x0;
      *plStack_278 = lVar13;
      plStack_278[1] = (long)plVar12;
      plStack_278[2] = (long)plVar11;
      auStack_608 = (undefined1  [8])0x0;
      plStack_600 = (long *)0x0;
      plStack_278[3] = (long)plVar23;
      iVar9 = func_0x0eee35e0(apuStack_2a8,0,&UNK_0464dc94,plStack_278);
      if (iVar9 != 0) goto LAB_0460d135;
      plStack_278 = (long *)0x0;
      func_0x0464dd78();
      if (*(long *)(param_1 + 0x18) == 0) {
        plVar24 = plVar11 + 1;
        *(undefined8 **)(param_1 + 0x18) = apuStack_2a8[0];
        apuStack_2a8[0] = (undefined8 *)0x0;
        func_0x04136b90();
        LOCK();
        lVar13 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          FUN_0412c2d0(plVar11);
        }
        iVar9 = 0;
LAB_0460bc12:
        plVar24 = uStack_580;
        if (uStack_580 != (long *)0x0) {
          LOCK();
          plVar11 = uStack_580 + 1;
          lVar13 = *plVar11;
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*uStack_580 + 0x10))(uStack_580);
            FUN_0412c2d0(plVar24);
          }
        }
        if (plStack_1e0 == (long *)0x0) {
          return iVar9;
        }
        LOCK();
        plVar24 = plStack_1e0 + 1;
        lVar13 = *plVar24;
        *plVar24 = *plVar24 + -1;
        UNLOCK();
        if (lVar13 != 0) {
          return iVar9;
        }
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        FUN_0412c2d0(plStack_1e0);
        return iVar9;
      }
    }
    func_0x04109e60();
LAB_0460d148:
    iVar9 = func_0x04108328(0xf54ca90);
    unaff_R12 = plStack_548;
    unaff_R13 = plStack_540;
    if (iVar9 != 0) {
      _DAT_0f54ca88 = &UNK_0ef10598;
      func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
      func_0x0410844d(0xf54ca90);
      unaff_R12 = plStack_548;
      unaff_R13 = plStack_540;
    }
  } while( true );
LAB_0460cf84:
  uVar21 = func_0x041086b0(0x30);
  func_0x04160690(auStack_608,&UNK_0145cda3);
  uVar10 = func_0x0465222c(9);
  func_0x0465fc54(uVar21,auStack_608,uVar10,extraout_RDX_01);
  FUN_041088a0(uVar21,&UNK_0ef10570,&UNK_046521fa);
LAB_0460cfd8:
  if ((cRam000000000f54ca90 == '\0') && (iVar9 = func_0x04108328(0xf54ca90), iVar9 != 0)) {
    _DAT_0f54ca88 = &UNK_0ef10598;
    func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
    func_0x0410844d(0xf54ca90);
  }
  uVar21 = func_0x041086b0(0x30);
  func_0x046521a6(uVar21,9,&DAT_0f54ca88);
  FUN_041088a0(uVar21,&UNK_0ef10570,&UNK_046521fa);
LAB_0460d020:
  iVar9 = func_0x04108328(0xf54ca90);
  if (iVar9 != 0) {
    _DAT_0f54ca88 = &UNK_0ef10598;
    func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
    func_0x0410844d(0xf54ca90);
  }
LAB_0460ae84:
  uStack_588 = (long *)0x0;
  uStack_580 = (long *)0x0;
  plVar24 = (long *)0x6;
  plVar12 = unaff_R13;
  goto LAB_0460bb55;
}


