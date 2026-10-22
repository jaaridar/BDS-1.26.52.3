/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4607216 (ELF vaddr 0x4507216)
 * Label: caller-of-callee
 * Body:  [[04607216, 04609c9a]]
 * Ghidra: FUN_04607216
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_04607216(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auVar6 [8];
  long lVar7;
  undefined **ppuVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  long **pplVar21;
  ulong uVar22;
  undefined8 **ppuVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long extraout_RDX;
  undefined *puVar26;
  long *plVar27;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined *puVar28;
  long *unaff_R13;
  long *in_FS_OFFSET;
  bool bVar29;
  long *plStack_628;
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
  long *plStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long *plStack_568;
  long *plStack_560;
  long *plStack_550;
  long *plStack_548;
  long lStack_540;
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
  long *plStack_480;
  long *plStack_478;
  long *plStack_470;
  long *plStack_468;
  long *plStack_460;
  int aiStack_458 [2];
  long lStack_450;
  long *plStack_448;
  long *plStack_440;
  long *plStack_438;
  long *plStack_430;
  long **pplStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long alStack_408 [4];
  long *plStack_3e8;
  ulong uStack_3d8;
  ulong uStack_3d0;
  long lStack_3c8;
  ulong *puStack_3b8;
  ulong auStack_3a8 [4];
  ulong *puStack_388;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 **ppuStack_338;
  undefined *puStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  long *plStack_310;
  undefined **ppuStack_308;
  long *plStack_2f8;
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
    iVar10 = func_0x045f9d55(*param_2,0);
    if ((iVar10 < 0) || (iVar10 = func_0x045f9df1(auStack_608,auStack_608,param_1 + 4), iVar10 < 0))
    {
      return iVar10;
    }
  }
  plVar17 = (long *)param_1[0x10];
  bVar9 = (**(code **)(*plVar17 + 0x20))(plVar17);
  plVar13 = (long *)(**(code **)(*plVar17 + 0x10 + (ulong)bVar9 * 8))(plVar17);
  iVar10 = func_0x045f43a8(*(undefined8 *)(param_1[0x1d] + 8));
  plVar17 = plVar13 + 0x7d;
  func_0x0412d680(plVar17);
  plVar13[0x72] = (ulong)(uint)(iVar10 * 1000);
  pthread_mutex_unlock(plVar17);
  plVar14 = (long *)FUN_0ee32660(0x10);
  func_0x04651b28(plVar14);
  plVar19 = param_1;
  uStack_508 = plVar14;
  if ((int)plVar13[0x2b] != 0) goto LAB_04609a3d;
  plVar13[0x1e] = (long)plVar14;
  *(undefined1 *)(plVar13 + 0x1f) = 1;
  plStack_448 = plVar14;
  func_0x04652329(auStack_608,&plStack_278);
  func_0x0465228e(plVar13 + 0x20,auStack_608);
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_600 + 1;
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      func_0x0412c2d0(plStack_600);
    }
  }
  *(undefined4 *)(plVar13 + 0x2b) = 1;
  *(undefined1 *)(plVar13 + 0x1f) = 0;
  lVar15 = plVar13[0x1e];
  plStack_600 = (long *)FUN_0ee32660(0x20);
  plStack_600[1] = 0;
  plStack_600[2] = 0;
  *plStack_600 = (long)&UNK_0ef107e8;
  auStack_608 = (undefined1  [8])(plStack_600 + 3);
  lVar15 = *(long *)(lVar15 + 8);
  plStack_600[3] = lVar15;
  LOCK();
  plVar19 = (long *)(lVar15 + 0xd0);
  *plVar19 = *plVar19 + 1;
  UNLOCK();
  func_0x04653aac(plVar13 + 0x24,auStack_608);
  plVar19 = plStack_600;
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_600 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      func_0x0412c2d0(plVar19);
    }
  }
  plStack_2e0 = param_1 + 1;
  func_0x046071e2(&uStack_1e8);
  plVar19 = plStack_1e0;
  if (plStack_1e0 != (long *)0x0) {
    LOCK();
    plStack_1e0[1] = plStack_1e0[1] + 1;
    UNLOCK();
  }
  ppuStack_48 = &puStack_68;
  puStack_68 = &UNK_0ef0dd70;
  uStack_60 = uStack_1e8;
  plStack_58 = plStack_1e0;
  uStack_148 = 0;
  uStack_140 = 0;
  plStack_138 = param_2;
  plStack_50 = param_2;
  func_0x0412d680(plVar17);
  plStack_368 = plVar13 + 0x34;
  func_0x04653bf0(plStack_368,&puStack_68);
  pthread_mutex_unlock(plVar17);
  if (ppuStack_48 == &puStack_68) {
    lVar15 = 0x20;
LAB_046074ac:
    (**(code **)(*ppuStack_48 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_48 != (undefined **)0x0) goto LAB_046074ac;
  }
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
  }
  ppuStack_78 = &puStack_98;
  puStack_98 = &UNK_0ef0e100;
  uStack_90 = uStack_1e8;
  plStack_88 = plVar19;
  uStack_168 = 0;
  uStack_160 = 0;
  plStack_158 = param_2;
  plStack_80 = param_2;
  func_0x0412d680(plVar17);
  plStack_2c0 = plVar13 + 0x40;
  func_0x04653bf0(plStack_2c0,&puStack_98);
  pthread_mutex_unlock(plVar17);
  if (ppuStack_78 == &puStack_98) {
    lVar15 = 0x20;
LAB_04607544:
    (**(code **)(*ppuStack_78 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_78 != (undefined **)0x0) goto LAB_04607544;
  }
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
  }
  ppuStack_a8 = &puStack_c8;
  puStack_c8 = &UNK_0ef0e280;
  uStack_c0 = uStack_1e8;
  plStack_b8 = plVar19;
  uStack_178 = 0;
  uStack_170 = 0;
  func_0x0412d680(plVar17);
  plStack_2d0 = plVar13 + 0x6a;
  func_0x0465851e(plStack_2d0,&puStack_c8);
  pthread_mutex_unlock(plVar17);
  if (ppuStack_a8 == &puStack_c8) {
    lVar15 = 0x20;
LAB_046075cb:
    (**(code **)(*ppuStack_a8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_a8 != (undefined **)0x0) goto LAB_046075cb;
  }
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
  }
  ppuStack_d8 = &puStack_f8;
  puStack_f8 = &UNK_0ef0e300;
  uStack_f0 = uStack_1e8;
  plStack_e8 = plVar19;
  uStack_188 = 0;
  uStack_180 = 0;
  func_0x0412d680(plVar17);
  plStack_2c8 = plVar13 + 0x3a;
  func_0x04653bf0(plStack_2c8,&puStack_f8);
  pthread_mutex_unlock(plVar17);
  if (ppuStack_d8 == &puStack_f8) {
    lVar15 = 0x20;
LAB_04607652:
    (**(code **)(*ppuStack_d8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_d8 != (undefined **)0x0) goto LAB_04607652;
  }
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar19[1] = plVar19[1] + 1;
    UNLOCK();
  }
  ppuStack_108 = &puStack_128;
  puStack_128 = &UNK_0ef0e400;
  uStack_120 = uStack_1e8;
  plStack_118 = plVar19;
  uStack_198 = 0;
  uStack_190 = 0;
  func_0x0412d680(plVar17);
  plStack_2d8 = plVar13 + 0x52;
  func_0x0465868a(plStack_2d8,&puStack_128);
  pthread_mutex_unlock(plVar17);
  if (ppuStack_108 == &puStack_128) {
    lVar15 = 0x20;
LAB_046076d9:
    (**(code **)(*ppuStack_108 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_108 != (undefined **)0x0) goto LAB_046076d9;
  }
  unaff_R13 = (long *)func_0x045f4390(*(undefined8 *)(param_1[0x1d] + 8));
  func_0x045ee774(auStack_608,&UNK_01527290);
  plVar14 = (long *)func_0x045f6252(unaff_R13,auStack_608);
  if (((ulong)auStack_608 & 1) != 0) {
    func_0x045efa8a(plStack_5f8);
  }
  plVar19 = unaff_R13 + 1;
  if (plVar14 != plVar19) {
    if ((*(byte *)(plVar14 + 7) & 1) == 0) {
      lVar15 = (long)plVar14 + 0x39;
    }
    else {
      lVar15 = plVar14[9];
    }
    func_0x04160690(auStack_608,lVar15);
    func_0x0412d680(plVar17);
    func_0x041307e0(plVar13 + 0x30,auStack_608);
    pthread_mutex_unlock(plVar17);
    if (((ulong)auStack_608 & 1) != 0) {
      func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
    }
  }
  pbVar16 = (byte *)func_0x0466f66c(param_1 + 0x1e);
  if ((*pbVar16 & 1) == 0) {
    pbVar16 = pbVar16 + 1;
  }
  else {
    pbVar16 = *(byte **)(pbVar16 + 0x10);
  }
  func_0x04160690(&plStack_4a0,pbVar16);
  func_0x04658826(&plStack_378,auStack_608,&plStack_4a0);
  plStack_628 = plVar13;
  if (*(char *)((long)plStack_378 + 0x4b) == '\0') {
    plVar17 = param_1;
    if (cRam000000000f54ca90 == '\0') goto LAB_04609a85;
    goto LAB_04607a00;
  }
  plStack_468 = plStack_378;
  plStack_460 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plStack_370[1] = plStack_370[1] + 1;
    UNLOCK();
  }
  plStack_548 = unaff_R13;
  plVar17 = (long *)FUN_0ee32660(0x5030);
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0ef0e480;
  lVar5 = plVar13[0x7c];
  plVar17[4] = 0;
  plVar17[5] = 0;
  *(undefined4 *)(plVar17 + 0x10) = 0;
  lStack_540 = func_0x0412dd40();
  plVar17[7] = 0;
  plVar17[8] = 0;
  plVar17[9] = 0;
  plVar17[10] = 0;
  plVar17[0xb] = 0;
  plVar17[0xc] = 0;
  plVar17[0xd] = 0;
  plVar17[0xe] = 0;
  plVar17[0x11] = lStack_540;
  plVar17[0x12] = 0;
  plVar17[0x13] = 0;
  plVar17[0x18] = 0;
  plVar17[0x1e] = 0;
  *(char *)(plVar17 + 0x20) = (char)lVar5;
  lVar15 = plVar13[0x2d];
  lVar20 = plVar13[0x2d];
  plVar17[0x21] = plVar13[0x2c];
  plVar17[0x22] = lVar20;
  if (lVar15 != 0) {
    LOCK();
    plVar14 = (long *)(lVar15 + 8);
    *plVar14 = *plVar14 + 1;
    UNLOCK();
  }
  plVar14 = plVar17 + 4;
  lVar15 = plVar13[0x2f];
  lVar20 = plVar13[0x2f];
  plVar17[0x23] = plVar13[0x2e];
  plVar17[0x24] = lVar20;
  if (lVar15 != 0) {
    LOCK();
    plVar27 = (long *)(lVar15 + 8);
    *plVar27 = *plVar27 + 1;
    UNLOCK();
  }
  plVar17[0x27] = 0;
  plVar17[0x28] = 0;
  plVar17[0x25] = 0;
  plVar17[0x26] = 0;
  plVar17[0x29] = 0;
  plVar17[0x2b] = 0;
  plVar17[0x2c] = 0;
  plVar17[0x2d] = 0;
  plVar17[0x2e] = 0;
  plVar17[0x2f] = 0;
  plVar17[0x30] = 0;
  *(undefined8 *)((long)plVar17 + 0x184) = 0;
  *(undefined8 *)((long)plVar17 + 0x18c) = 0;
  plVar17[0x33] = lStack_540;
  plVar17[0x38] = 0;
  plVar17[0x3e] = 0;
  *(undefined1 *)(plVar17 + 0xc0) = 0;
  *(undefined1 *)(plVar17 + 0x142) = 0;
  plStack_2e8 = plVar17 + 0x144;
  plVar17[0x144] = (long)&UNK_0ef0e6b0;
  plVar17[0x145] = (long)&UNK_0461abc4;
  plVar17[0x146] = 0;
  plVar17[0x147] = (long)plVar14;
  plVar17[0x148] = (long)plStack_2e8;
  plStack_2f0 = plVar17 + 0x14a;
  plVar17[0x14a] = (long)&UNK_0ef0e748;
  plVar17[0x14b] = (long)&UNK_0461bfca;
  plVar17[0x14c] = 0;
  plVar17[0x14d] = (long)plVar14;
  plVar17[0x14e] = (long)plStack_2f0;
  plStack_2f8 = plVar17 + 0x150;
  if ((*(byte *)(plVar13 + 0x30) & 1) == 0) {
    plVar17[0x152] = plVar13[0x32];
    lVar15 = plVar13[0x31];
    *plStack_2f8 = plVar13[0x30];
    plVar17[0x151] = lVar15;
  }
  else {
    func_0x0412e5e0(plStack_2f8,plVar13[0x32],plVar13[0x31]);
  }
  plVar17[0x153] = 0;
  plVar17[0x154] = 0;
  plVar17[0x15a] = 0;
  plVar17[0x160] = 0;
  plVar17[0x166] = 0;
  plVar17[0x16c] = 0;
  plVar17[0x172] = 0;
  plVar17[0x178] = 0;
  plVar17[0x17e] = 0;
  plVar17[0x184] = 0;
  plVar17[0x18a] = 0;
  plVar17[400] = 0;
  plVar17[0x192] = 5000;
  plVar17[0x193] = 5000;
  plVar17[0x194] = 5000;
  plVar17[0x195] = (long)&UNK_01e84800;
  plVar17[0x9a6] = 0;
  plVar17[0x196] = 0;
  plVar17[0x197] = 0;
  plVar17[0x198] = 0;
  plVar17[0x199] = 0;
  plVar17[0x19a] = 0;
  plVar17[0x19b] = 0;
  plVar17[0x19c] = 0;
  plVar17[0x19d] = 0;
  plVar17[0x19e] = 0;
  plVar17[0x19f] = 0;
  plVar17[0x1a0] = 0;
  plStack_550 = plVar19;
  puVar18 = (undefined8 *)FUN_0ee32660(0x10);
  *puVar18 = 0;
  puVar18[1] = 0;
  func_0x04658ea4(plVar17 + 0x9a8,puVar18);
  func_0x0eee2dd0(plVar17 + 0x9aa,0,0xb1);
  *(undefined1 *)((long)plVar17 + 0x4e01) = 1;
  func_0x04658f10(plVar17 + 0x9c1);
  func_0x04658fb8(plVar17 + 0x9d7);
  lVar7 = lStack_540;
  unaff_R13 = plStack_548;
  plVar17[0x9f1] = 0;
  plVar17[0x9f2] = 0;
  plVar17[0x9ef] = 0;
  plVar17[0x9f0] = 0;
  plVar17[0x9ed] = 0;
  plVar17[0x9ee] = 0;
  plVar17[0x9eb] = 0;
  plVar17[0x9ec] = 0;
  *(char *)(plVar17 + 0x9f3) = (char)lVar5;
  lVar15 = plVar13[0x2d];
  lVar20 = plVar13[0x2d];
  plVar17[0x9f4] = plVar13[0x2c];
  plVar17[0x9f5] = lVar20;
  if (lVar15 != 0) {
    LOCK();
    plVar19 = (long *)(lVar15 + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  lVar15 = plVar13[0x2f];
  lVar20 = plVar13[0x2f];
  plVar17[0x9f6] = plVar13[0x2e];
  plVar17[0x9f7] = lVar20;
  if (lVar15 != 0) {
    LOCK();
    plVar19 = (long *)(lVar15 + 8);
    *plVar19 = *plVar19 + 1;
    UNLOCK();
  }
  plVar17[0x9f8] = (long)(plVar13 + 0x75);
  *(undefined2 *)(plVar17 + 0x9f9) = 0x3ee;
  plVar17[0x9fa] = 0;
  plVar17[0x9fb] = 0;
  plVar17[0x9fc] = 0;
  *(undefined2 *)(plVar17 + 0x9fd) = 0x3ee;
  plVar17[0x9fe] = 0;
  plVar17[0x9ff] = 0;
  *(undefined8 *)((long)plVar17 + 0x4ffc) = 0;
  *(undefined8 *)((long)plVar17 + 0x5004) = 0;
  plVar17[0xa02] = lStack_540;
  *(undefined1 *)(plVar17 + 0xa03) = 0;
  *(undefined4 *)((long)plVar17 + 0x501c) = 0;
  *(undefined1 *)(plVar17 + 0xa04) = 0;
  plStack_568 = plVar14;
  plStack_560 = plVar17;
  if (plVar17[5] == 0) {
    LOCK();
    plVar17[1] = plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar17[2] = plVar17[2] + 1;
    UNLOCK();
    plVar17[4] = (long)plVar14;
    plVar17[5] = (long)plVar17;
LAB_04607c77:
    plVar19 = plVar17 + 1;
    LOCK();
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  else if (*(long *)(plVar17[5] + 8) == -1) {
    LOCK();
    plVar17[1] = plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar17[2] = plVar17[2] + 1;
    UNLOCK();
    plVar17[4] = (long)plVar14;
    plVar17[5] = (long)plVar17;
    func_0x0412c2d0();
    goto LAB_04607c77;
  }
  plVar14 = plStack_560;
  plVar17 = plStack_568;
  bVar29 = true;
  if (plStack_560 == (long *)0x0) {
LAB_04607d01:
    plVar19 = (long *)0x0;
    plVar27 = (long *)0x0;
  }
  else {
    LOCK();
    plStack_560[2] = plStack_560[2] + 1;
    UNLOCK();
    plVar19 = (long *)func_0x0412c300();
    if (plVar19 == (long *)0x0) goto LAB_04607d01;
    LOCK();
    plVar19[2] = plVar19[2] + 1;
    UNLOCK();
    LOCK();
    plVar27 = plVar19 + 1;
    lVar15 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      func_0x0412c2d0(plVar19);
    }
    LOCK();
    plVar19[2] = plVar19[2] + 1;
    UNLOCK();
    bVar29 = false;
    plVar27 = plVar17;
  }
  plVar17[0x14f] = (long)plVar27;
  lVar15 = plVar17[0x150];
  plVar17[0x150] = (long)plVar19;
  if (lVar15 != 0) {
    func_0x0412c2d0();
  }
  if (!bVar29) {
    LOCK();
    plVar19[2] = plVar19[2] + 1;
    UNLOCK();
    LOCK();
    plVar19[2] = plVar19[2] + 1;
    UNLOCK();
  }
  plVar17[0x29] = (long)plVar27;
  lVar15 = plVar17[0x2a];
  plVar17[0x2a] = (long)plVar19;
  if (lVar15 != 0) {
    func_0x0412c2d0();
  }
  if (!bVar29) {
    LOCK();
    plVar19[2] = plVar19[2] + 1;
    UNLOCK();
    LOCK();
    plVar19[2] = plVar19[2] + 1;
    UNLOCK();
  }
  plVar17[0xe] = (long)plVar27;
  lVar15 = plVar17[0xf];
  plVar17[0xf] = (long)plVar19;
  if (lVar15 != 0) {
    func_0x0412c2d0();
  }
  if (!bVar29) {
    func_0x0412c2d0(plVar19);
    func_0x0412c2d0(plVar19);
    func_0x0412c2d0(plVar19);
  }
  plVar19 = plStack_568;
  func_0x04653c3c(&uStack_508,plStack_368);
  func_0x04653bf0(plVar19 + 0x152,&uStack_508);
  plVar17 = (long *)CONCAT44(uStack_4e4,uStack_4e8);
  if (plVar17 == &uStack_508) {
    lVar15 = 0x20;
LAB_04607de7:
    (**(code **)(*plVar17 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plVar17 != (long *)0x0) goto LAB_04607de7;
  }
  func_0x04653c3c(&plStack_278,plStack_2c8);
  func_0x04653bf0(plVar19 + 0x158,&plStack_278);
  if (pplStack_258 == &plStack_278) {
    lVar15 = 0x20;
LAB_04607e37:
    (**(code **)((long)*pplStack_258 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (pplStack_258 != (long **)0x0) goto LAB_04607e37;
  }
  func_0x04653c3c(apuStack_2a8,plStack_2c0);
  func_0x04653bf0(plVar19 + 0x15e,apuStack_2a8);
  if (ppuStack_288 == apuStack_2a8) {
    lVar15 = 0x20;
LAB_04607e87:
    (**(code **)((long)*ppuStack_288 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_288 != (undefined8 **)0x0) goto LAB_04607e87;
  }
  func_0x0465e7ee(&puStack_328,plVar13 + 0x46);
  func_0x0465e6c0(plVar19 + 0x164,&puStack_328);
  if (ppuStack_308 == &puStack_328) {
    lVar15 = 0x20;
LAB_04607edb:
    (**(code **)(*ppuStack_308 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_308 != (undefined **)0x0) goto LAB_04607edb;
  }
  func_0x046586d6(&puStack_358,plVar13 + 0x4c);
  func_0x0465868a(plVar19 + 0x16a,&puStack_358);
  if (ppuStack_338 == &puStack_358) {
    lVar15 = 0x20;
LAB_04607f2f:
    (**(code **)((long)*ppuStack_338 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_338 != (undefined8 **)0x0) goto LAB_04607f2f;
  }
  func_0x046586d6(&uStack_3d8,plStack_2d8);
  func_0x0465868a(plVar19 + 0x170,&uStack_3d8);
  if (puStack_3b8 == &uStack_3d8) {
    lVar15 = 0x20;
LAB_04607f7f:
    (**(code **)(*puStack_3b8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (puStack_3b8 != (ulong *)0x0) goto LAB_04607f7f;
  }
  func_0x04653c3c(auStack_3a8,plVar13 + 0x58);
  func_0x04653bf0(plVar19 + 0x176,auStack_3a8);
  if (puStack_388 == auStack_3a8) {
    lVar15 = 0x20;
LAB_04607fd3:
    (**(code **)(*puStack_388 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (puStack_388 != (ulong *)0x0) goto LAB_04607fd3;
  }
  func_0x04653c3c(&plStack_538,plVar13 + 0x5e);
  func_0x04653bf0(plVar19 + 0x17c,&plStack_538);
  if (pplStack_518 == &plStack_538) {
    lVar15 = 0x20;
LAB_04608027:
    (**(code **)((long)*pplStack_518 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (pplStack_518 != (long **)0x0) goto LAB_04608027;
  }
  func_0x0465e95a(&uStack_218,plVar13 + 100);
  func_0x0465e82c(plVar19 + 0x182,&uStack_218);
  if (plStack_1f8 == &uStack_218) {
    lVar15 = 0x20;
LAB_0460807b:
    (**(code **)(*plStack_1f8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plStack_1f8 != (long *)0x0) goto LAB_0460807b;
  }
  func_0x0465856a(&puStack_1c8,plStack_2d0);
  func_0x0465851e(plVar19 + 0x188,&puStack_1c8);
  if (ppuStack_1a8 == &puStack_1c8) {
    lVar15 = 0x20;
LAB_046080cb:
    (**(code **)((long)*ppuStack_1a8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_1a8 != (undefined8 **)0x0) goto LAB_046080cb;
  }
  plVar17 = plStack_560;
  if (plVar13[0x70] != 5000) {
    plVar19[0x18e] = plVar13[0x70];
  }
  if (plVar13[0x71] != 5000) {
    plVar19[399] = plVar13[0x71];
  }
  if (plVar13[0x72] != 5000) {
    plVar19[400] = plVar13[0x72];
  }
  puVar26 = (undefined *)plVar13[0x73];
  if (puVar26 != &UNK_01e84800) {
    plVar19[0x191] = (long)puVar26;
    if (plVar19[0x9ad] != 0) {
      *(undefined **)(plVar19[0x9ad] + 0x10) = puVar26;
    }
  }
  plVar19[0x9c8] = plVar13[0x74];
  aiStack_458[0] = 0;
  lStack_450 = lVar7;
  plStack_1d8 = plVar19;
  plStack_1d0 = plStack_560;
  if (plStack_560 == (long *)0x0) {
    plStack_480 = (long *)0x0;
  }
  else {
    LOCK();
    plStack_560[1] = plStack_560[1] + 1;
    UNLOCK();
    plStack_480 = plStack_560;
    LOCK();
    plStack_560[1] = plStack_560[1] + 1;
    UNLOCK();
  }
  plStack_488 = plVar19;
  func_0x0465e998(plVar13,&plStack_488);
  plVar27 = plStack_480;
  if (plStack_480 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_480 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_480 + 0x10))(plStack_480);
      func_0x0412c2d0(plVar27);
    }
  }
  lVar15 = plVar13[0x1e];
  plVar19[0x26] = lVar15;
  lStack_130 = lVar15;
  func_0x0465ed00(&plStack_588,&uStack_609);
  func_0x0465ea88(plVar19 + 0x27,&plStack_588);
  if (plStack_580 != (long *)0x0) {
    LOCK();
    plVar27 = plStack_580 + 1;
    lVar20 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_580 + 0x10))(plStack_580);
      func_0x0412c2d0(plStack_580);
    }
  }
  plStack_588 = (long *)plVar19[0x27];
  plStack_580 = (long *)plVar19[0x28];
  if (plVar19[0x28] != 0) {
    LOCK();
    plVar27 = (long *)(plVar19[0x28] + 8);
    *plVar27 = *plVar27 + 1;
    UNLOCK();
  }
  iVar10 = func_0x0465ead2(plVar19,lVar15,&plStack_588,(char)plVar19[0x1c]);
  plVar27 = plStack_580;
  if (plStack_580 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_580 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_580 + 0x10))(plStack_580);
      func_0x0412c2d0(plVar27);
    }
  }
  lVar15 = extraout_RDX;
  if (iVar10 != 0) goto LAB_0460839f;
  func_0x04653c3c(auStack_608,plVar13 + 0x12);
  func_0x04653bf0(plVar19 + 0x30,auStack_608);
  if (plStack_5e8 == (long *)auStack_608) {
    lVar15 = 0x20;
LAB_0460833a:
    (**(code **)(*plStack_5e8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plStack_5e8 != (long *)0x0) goto LAB_0460833a;
  }
  func_0x04653c3c(&plStack_448,plVar13 + 0x18);
  func_0x04653bf0(plVar19 + 0x36,&plStack_448);
  if (pplStack_428 == &plStack_448) {
    lVar20 = 0x20;
  }
  else {
    lVar20 = 0x28;
    lVar15 = lStack_540;
    if (pplStack_428 == (long **)0x0) goto LAB_0460839f;
  }
  (**(code **)((long)*pplStack_428 + lVar20))();
  lVar15 = lStack_540;
LAB_0460839f:
  plVar19 = plStack_550;
  aiStack_458[0] = iVar10;
  lStack_450 = lVar15;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar13 = plVar17 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  if (aiStack_458[0] == 0) {
    pplVar21 = &plStack_568;
    uStack_578 = plStack_568;
    uStack_570 = plStack_560;
  }
  else {
    func_0x0412dda0(auStack_608,aiStack_458);
    plVar17 = plStack_5f8;
    if (((ulong)auStack_608 & 1) == 0) {
      plVar17 = (long *)(auStack_608 + 1);
    }
    func_0x04601aa3(0xf53dde0,1,&UNK_012ee1a2,plVar17);
    if (((ulong)auStack_608 & 1) != 0) {
      func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
    }
    pplVar21 = (long **)&uStack_578;
  }
  *pplVar21 = (long *)0x0;
  pplVar21[1] = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    func_0x0412c2d0();
  }
  plVar17 = plStack_560;
  if (plStack_560 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_560 + 1;
    lVar15 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_560 + 0x10))(plStack_560);
      func_0x0412c2d0(plVar17);
    }
  }
  if (uStack_578 == (long *)0x0) {
    iVar10 = 0x11;
    if ((cRam000000000f54ca90 == '\0') &&
       (iVar12 = func_0x04108328(0xf54ca90), unaff_R13 = plStack_548, plVar19 = plStack_550,
       iVar12 != 0)) {
      _DAT_0f54ca88 = &UNK_0ef10598;
      func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
      FUN_0410844d(0xf54ca90);
      unaff_R13 = plStack_548;
      plVar19 = plStack_550;
    }
  }
  else {
    auStack_608 = (undefined1  [8])plStack_468;
    plStack_600 = plStack_460;
    if (plStack_460 != (long *)0x0) {
      LOCK();
      plStack_460[1] = plStack_460[1] + 1;
      UNLOCK();
    }
    func_0x0465f9c0(uStack_578 + 0x9e7,auStack_608);
    plVar17 = plStack_600;
    iVar10 = 0;
    if (plStack_600 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_600 + 1;
      lVar15 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_600 + 0x10))(plStack_600);
        func_0x0412c2d0(plVar17);
      }
    }
  }
  plVar13 = plStack_460;
  plVar17 = param_1;
  if (plStack_460 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_460 + 1;
    lVar15 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    plVar17 = param_1;
    if (lVar15 == 0) {
      (**(code **)(*plStack_460 + 0x10))(plStack_460);
      func_0x0412c2d0(plVar13);
    }
  }
LAB_0460855d:
  plVar13 = plStack_370;
  if (plStack_370 != (long *)0x0) {
    LOCK();
    plVar14 = plStack_370 + 1;
    lVar15 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_370 + 0x10))(plStack_370);
      func_0x0412c2d0(plVar13);
    }
  }
  if (((ulong)plStack_4a0 & 1) != 0) {
    func_0x0412a280(uStack_490,(ulong)plStack_4a0 & 0xfffffffffffffffe);
  }
  if (uStack_570 != (long *)0x0) {
    LOCK();
    uStack_570[2] = uStack_570[2] + 1;
    UNLOCK();
  }
  lVar15 = plVar17[6];
  *(undefined4 *)(plVar17 + 5) = (undefined4)uStack_578;
  *(undefined4 *)((long)plVar17 + 0x2c) = uStack_578._4_4_;
  *(undefined4 *)(plVar17 + 6) = (undefined4)uStack_570;
  *(undefined4 *)((long)plVar17 + 0x34) = uStack_570._4_4_;
  if (lVar15 != 0) {
    func_0x0412c2d0();
  }
  if (iVar10 != 0) {
    uVar25 = *(undefined8 *)(*(long *)(plVar17[0x1d] + 8) + 0x18);
    puVar26 = &UNK_011d1a64;
    goto LAB_04608605;
  }
  plVar13 = (long *)*unaff_R13;
  if (plVar13 != plVar19) {
    do {
      func_0x045ee774(auStack_608,&UNK_011eaa03);
      plVar17 = plStack_5f8;
      auVar6 = auStack_608;
      puVar26 = (undefined *)((long)plVar13 + 0x21);
      puVar28 = puVar26;
      if ((*(byte *)(plVar13 + 4) & 1) != 0) {
        puVar28 = (undefined *)plVar13[6];
      }
      plVar14 = plStack_5f8;
      if (((ulong)auStack_608 & 1) == 0) {
        plVar14 = (long *)(auStack_608 + 1);
      }
      iVar10 = func_0x0eee3ef0(puVar28,plVar14);
      if (((ulong)auVar6 & 1) != 0) {
        func_0x045efa8a(plVar17);
      }
      unaff_R13 = uStack_578;
      if (iVar10 != 0) {
        if ((*(byte *)(plVar13 + 4) & 1) != 0) {
          puVar26 = (undefined *)plVar13[6];
        }
        func_0x04160690(&plStack_448,puVar26);
        if ((*(byte *)(plVar13 + 7) & 1) == 0) {
          puVar26 = (undefined *)((long)plVar13 + 0x39);
        }
        else {
          puVar26 = (undefined *)plVar13[9];
        }
        func_0x04160690(&uStack_508,puVar26);
        if ((char)unaff_R13[0x9ef] == '\x01') {
          lVar15 = 0x4e98;
          if (*(int *)((long)unaff_R13 + 0xc94) != 6) goto LAB_046099e9;
        }
        else {
          lVar15 = 0x4de8;
          if (*(int *)((long)unaff_R13 + 0xc94) != 0) {
            plVar19 = (long *)func_0x041086b0(0x30);
            func_0x04160690(auStack_608,&UNK_0145cda3);
            uVar11 = func_0x0465222c(9);
            func_0x0465fc54(plVar19,auStack_608,uVar11,extraout_RDX_00);
            func_0x041088a0(plVar19,&UNK_0ef10570,&UNK_046521fa);
            plVar17 = param_1;
            goto LAB_04609a3d;
          }
        }
        func_0x0465fa12((long)unaff_R13 + lVar15,&plStack_448,&uStack_508);
        if (((ulong)uStack_508 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_4f4,uStack_4f8),(ulong)uStack_508 & 0xfffffffffffffffe);
        }
        if (((ulong)plStack_448 & 1) != 0) {
          func_0x0412a280(plStack_438,(ulong)plStack_448 & 0xfffffffffffffffe);
        }
      }
      plVar17 = (long *)plVar13[1];
      plVar14 = plVar13;
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar13 = (long *)plVar14[2];
          bVar29 = plVar14 != (long *)*plVar13;
          plVar14 = plVar13;
        } while (bVar29);
      }
      else {
        do {
          plVar13 = plVar17;
          plVar17 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      plVar17 = param_1;
      if (plVar13 == plVar19) break;
    } while( true );
  }
  plVar19 = uStack_578;
  bVar9 = *(byte *)(plVar17 + 0x34);
  if ((bVar9 & 1) == 0) {
    uVar22 = (ulong)(bVar9 >> 1);
  }
  else {
    uVar22 = plVar17[0x35];
  }
  if (uVar22 != 0) {
    if ((bVar9 & 1) == 0) {
      lVar15 = (long)plVar17 + 0x1a1;
    }
    else {
      lVar15 = plVar17[0x36];
    }
    func_0x04160690(auStack_608,lVar15);
    if ((char)plVar19[0x9ef] == '\x01') {
LAB_0460889b:
      if (cRam000000000f54ca90 == '\0') {
        iVar10 = func_0x04108328(0xf54ca90);
        if (iVar10 != 0) {
          _DAT_0f54ca88 = &UNK_0ef10598;
          func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
          FUN_0410844d(0xf54ca90);
        }
        bVar29 = false;
        plVar17 = param_1;
      }
      else {
        bVar29 = false;
      }
    }
    else {
      plVar13 = plStack_600;
      if (((ulong)auStack_608 & 1) == 0) {
        plVar13 = (long *)((ulong)auStack_608 >> 1 & 0x7f);
      }
      if (plVar13 == (long *)0x0) goto LAB_0460889b;
      plVar14 = plStack_5f8;
      if (((ulong)auStack_608 & 1) == 0) {
        plVar14 = (long *)(auStack_608 + 1);
      }
      plVar27 = (long *)0x0;
      do {
        if ((&UNK_01529ef0)[*(byte *)((long)plVar14 + (long)plVar27)] == '\0') {
          if (plVar13 != plVar27) goto LAB_0460889b;
          break;
        }
        plVar27 = (long *)((long)plVar27 + 1);
      } while (plVar13 != plVar27);
      bVar29 = true;
      func_0x0651e050(plVar19 + 0x9ec,auStack_608);
    }
    if (((ulong)auStack_608 & 1) != 0) {
      func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
    }
    if (!bVar29) {
      uVar25 = *(undefined8 *)(*(long *)(plVar17[0x1d] + 8) + 0x18);
      puVar26 = &UNK_013aa178;
LAB_04608605:
      func_0x04601aa3(0xf53dde0,1,puVar26,uVar25);
      iVar10 = -0x7fffbffb;
      goto LAB_04608616;
    }
  }
  pbVar16 = (byte *)func_0x045f4396(*(undefined8 *)(plVar17[0x1d] + 8));
  plVar19 = uStack_578;
  if ((*pbVar16 & 1) == 0) {
    uVar22 = (ulong)(*pbVar16 >> 1);
  }
  else {
    uVar22 = *(ulong *)(pbVar16 + 8);
  }
  if (uVar22 != 0) {
    pbVar16 = (byte *)func_0x045f4396(*(undefined8 *)(plVar17[0x1d] + 8));
    if ((*pbVar16 & 1) == 0) {
      pbVar16 = pbVar16 + 1;
    }
    else {
      pbVar16 = *(byte **)(pbVar16 + 0x10);
    }
    func_0x04160690(auStack_608,pbVar16);
    func_0x041307e0(plVar19 + 0x21,auStack_608);
    puVar18 = (undefined8 *)FUN_0ee32660(0x1f8);
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = &UNK_0ef0e7d0;
    func_0x04658f10(puVar18 + 3);
    func_0x04658fb8(puVar18 + 0x19);
    puVar18[0x2d] = 0;
    puVar18[0x2e] = 0;
    puVar18[0x2f] = 0;
    func_0x04660120(puVar18 + 0x30,0xffffffffffffffff,&plStack_448);
    puVar18[0x3c] = 5000;
    puVar18[0x3d] = 0;
    puVar18[0x3e] = 0;
    plVar19[0x24] = (long)(puVar18 + 3);
    plVar17 = (long *)plVar19[0x25];
    plVar19[0x25] = (long)puVar18;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar19 = plVar17 + 1;
      lVar15 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = param_1;
    if (((ulong)auStack_608 & 1) != 0) {
      func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
    }
  }
  func_0x046071e2(auStack_2b8,plStack_2e0);
  uVar25 = func_0x0460ea00(auStack_2b8);
  iVar10 = func_0x045f651d(param_2,uVar25,&UNK_045f5b2b,&UNK_012201de,&UNK_04621cc4);
  if (plStack_2b0 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_2b0 + 1;
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_2b0 + 0x10))(plStack_2b0);
      func_0x0412c2d0(plStack_2b0);
    }
  }
  plVar13 = uStack_570;
  plVar19 = uStack_578;
  if (iVar10 < 0) goto LAB_04608616;
  LOCK();
  *(undefined4 *)(plVar17 + 0xf) = 0;
  UNLOCK();
  plStack_478 = uStack_578;
  plStack_470 = uStack_570;
  if (uStack_570 != (long *)0x0) {
    LOCK();
    uStack_570[1] = uStack_570[1] + 1;
    UNLOCK();
    LOCK();
    uStack_570[1] = uStack_570[1] + 1;
    UNLOCK();
  }
  plStack_4a0 = uStack_578;
  plStack_498 = uStack_570;
  plVar17 = (long *)uStack_578[0x9e7];
  plVar14 = (long *)uStack_578[0x9e8];
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
  }
  puStack_328 = &UNK_04621eb8;
  uStack_320 = 0;
  plStack_318 = plStack_628;
  plStack_310 = uStack_578;
  ppuStack_308 = (undefined **)uStack_570;
  if (uStack_570 != (long *)0x0) {
    LOCK();
    uStack_570[1] = uStack_570[1] + 1;
    UNLOCK();
  }
  plStack_588 = plVar17;
  plStack_580 = plVar14;
  plVar27 = (long *)FUN_0ee32660(0x30);
  *plVar27 = (long)&UNK_0ef0ef40;
  plVar27[1] = (long)&UNK_04621eb8;
  plVar27[2] = 0;
  plVar27[3] = (long)plStack_628;
  plVar27[4] = (long)plVar19;
  plVar27[5] = (long)plVar13;
  plStack_310 = (long *)0x0;
  ppuStack_308 = (undefined **)0x0;
  if (plStack_628[0x22] == 0) {
    plStack_448 = (long *)plStack_628[0x1e];
    func_0x046612b7(auStack_608,&uStack_508);
    func_0x04660f9c(plStack_628 + 0x22,auStack_608);
    plVar1 = plStack_600;
    plVar17 = plStack_588;
    plVar14 = plStack_580;
    if (plStack_600 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_600 + 1;
      lVar15 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_600 + 0x10))(plStack_600);
        func_0x0412c2d0(plVar1);
        plVar17 = plStack_588;
        plVar14 = plStack_580;
      }
    }
  }
  if (plVar14 == (long *)0x0) {
    plStack_600 = (long *)0x0;
  }
  else {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    plStack_600 = plVar14;
  }
  auStack_608 = (undefined1  [8])plVar17;
  func_0x0465f9c0(plVar19 + 9,auStack_608);
  plVar17 = plStack_600;
  if (plStack_600 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_600 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_600 + 0x10))(plStack_600);
      func_0x0412c2d0(plVar17);
    }
  }
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    lVar15 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
  }
  if ((*(byte *)(plVar19 + 0x21) & 1) == 0) {
    lStack_3c8 = plVar19[0x23];
    uStack_3d8 = plVar19[0x21];
    uStack_3d0 = plVar19[0x22];
  }
  else {
    func_0x0412e5e0(&uStack_3d8,plVar19[0x23],plVar19[0x22]);
  }
  plVar17 = plStack_588;
  auStack_3a8[0] = 0;
  auStack_3a8[1] = 0;
  auStack_3a8[2] = 0;
  plStack_528 = (long *)0x0;
  plStack_538 = (long *)0x0;
  plStack_530 = (long *)0x0;
  uVar22 = uStack_3d0;
  if ((uStack_3d8 & 1) == 0) {
    uVar22 = uStack_3d8 >> 1 & 0x7f;
  }
  plVar14 = param_1;
  if (uVar22 == 0) {
    func_0x041307e0(auStack_3a8,plStack_588 + 3);
    func_0x04660fe6(auStack_608,plVar17);
    if (((ulong)plStack_538 & 1) != 0) {
      func_0x0412a280(plStack_528,(ulong)plStack_538 & 0xfffffffffffffffe);
    }
    plStack_528 = plStack_5f8;
    plStack_538 = (long *)auStack_608;
    plStack_530 = plStack_600;
  }
  else {
    uStack_508 = (long *)((ulong)uStack_508 & 0xffffffff00000000);
    puVar26 = (undefined *)func_0x0412dd40();
    uStack_500 = puVar26;
    func_0x0466271c(&plStack_278,auStack_608,&uStack_3d8);
    if (*(char *)((long)plStack_278 + 0x4b) == '\0') {
      if (cRam000000000f54caa8 == '\0') goto LAB_04609bbe;
      goto LAB_04609085;
    }
    func_0x046610be(&plStack_448,plStack_588);
    lVar15 = plVar19[0x24];
    if (lVar15 == 0) {
      uVar11 = 9;
      puVar26 = &DAT_0f54ca88;
      if ((cRam000000000f54ca90 == '\0') && (iVar10 = func_0x04108328(0xf54ca90), iVar10 != 0)) {
        puVar26 = &DAT_0f54ca88;
        _DAT_0f54ca88 = &UNK_0ef10598;
        func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
        FUN_0410844d(0xf54ca90);
      }
    }
    else {
      func_0x04160690(auStack_608,&UNK_012a2213);
      func_0x041307e0(lVar15,auStack_608);
      if (((ulong)auStack_608 & 1) != 0) {
        func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
      }
      lVar20 = plVar19[0x24];
      func_0x04160690(auStack_608,&UNK_012560ff);
      func_0x046627ae(lVar20,auStack_608);
      if (((ulong)auStack_608 & 1) != 0) {
        func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
      }
      func_0x041307e0(plVar19[0x24] + 0x90,&plStack_448);
      lVar20 = plVar19[0x24];
      func_0x04160690(auStack_608,&UNK_0126fa2c);
      apuStack_2a8[0] = (undefined8 *)auStack_608;
      lVar20 = func_0x0465fe6c(lVar20 + 0x18,auStack_608,&UNK_01563a4f,apuStack_2a8,&puStack_358);
      func_0x041307e0(lVar20 + 0x38,&plStack_448);
      if (((ulong)auStack_608 & 1) != 0) {
        func_0x0412a280(plStack_5f8,(ulong)auStack_608 & 0xfffffffffffffffe);
      }
      uVar11 = 0;
    }
    uStack_508 = (long *)CONCAT44(uStack_508._4_4_,uVar11);
    uStack_500 = puVar26;
    if (((ulong)plStack_448 & 1) != 0) {
      func_0x0412a280(plStack_438,(ulong)plStack_448 & 0xfffffffffffffffe);
    }
    if (lVar15 == 0) {
      (**(code **)(*plVar27 + 0x30))(plVar27,&uStack_508);
      goto LAB_046096ae;
    }
    func_0x041307e0(auStack_3a8,plStack_278 + 3);
    func_0x04660fe6(auStack_608,plStack_278);
    if (((ulong)plStack_538 & 1) != 0) {
      func_0x0412a280(plStack_528,(ulong)plStack_538 & 0xfffffffffffffffe);
    }
    plStack_528 = plStack_5f8;
    plStack_538 = (long *)auStack_608;
    plStack_530 = plStack_600;
    if (plStack_270 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_270 + 1;
      lVar15 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_270 + 0x10))(plStack_270);
        func_0x0412c2d0(plStack_270);
      }
    }
  }
  func_0x046611ca(&uStack_508,auStack_3a8,&plStack_538,0x20);
  uStack_218 = (undefined1  [8])0x0;
  uStack_210 = (long *)0x0;
  plStack_278 = (long *)&UNK_046222a4;
  plStack_270 = (long *)0x0;
  plStack_268 = plStack_628;
  puStack_260 = (undefined8 *)0x0;
  pplStack_258 = (long **)0x0;
  plStack_228 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27);
  ppuStack_288 = (undefined8 **)0x0;
  ppuVar23 = (undefined8 **)FUN_0ee32660(0x70);
  *ppuVar23 = (undefined8 *)&UNK_0ef0e820;
  ppuVar23[2] = plStack_278;
  ppuVar23[3] = plStack_270;
  ppuVar23[4] = plStack_268;
  ppuVar23[5] = puStack_260;
  ppuVar23[6] = pplStack_258;
  puStack_260 = (undefined8 *)0x0;
  pplStack_258 = (long **)0x0;
  func_0x046551a2(ppuVar23 + 8,alStack_248);
  ppuStack_288 = ppuVar23;
  func_0x046105c0(auStack_608,plVar19,5000,apuStack_2a8);
  uStack_210 = plStack_600;
  uStack_218 = auStack_608;
  auStack_608 = (undefined1  [8])0x0;
  plStack_600 = (long *)0x0;
  if (ppuStack_288 == apuStack_2a8) {
    lVar15 = 0x20;
LAB_046090b4:
    (**(code **)((long)*ppuStack_288 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (ppuStack_288 != (undefined8 **)0x0) goto LAB_046090b4;
  }
  if (plStack_228 == alStack_248) {
    lVar15 = 0x20;
LAB_046090d8:
    (**(code **)(*plStack_228 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plStack_228 != (long *)0x0) goto LAB_046090d8;
  }
  pplVar21 = pplStack_258;
  if (pplStack_258 != (long **)0x0) {
    LOCK();
    pplVar3 = pplStack_258 + 1;
    plVar17 = *pplVar3;
    *pplVar3 = (long *)((long)*pplVar3 + -1);
    UNLOCK();
    if (plVar17 == (long *)0x0) {
      (*(code *)(*pplStack_258)[2])(pplStack_258);
      func_0x0412c2d0(pplVar21);
    }
  }
  plVar17 = (long *)plStack_628[0x22];
  puVar18 = (undefined8 *)plVar19[0x27];
  plStack_1c0 = (long *)plVar19[0x28];
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plStack_1c0[1] = plStack_1c0[1] + 1;
    UNLOCK();
  }
  plStack_448 = (long *)&UNK_046223ea;
  plStack_440 = (long *)0x0;
  plStack_438 = plStack_628;
  plStack_430 = plVar19;
  pplStack_428 = (long **)plVar13;
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar13[1] = plVar13[1] + 1;
    UNLOCK();
  }
  uStack_420._0_4_ = SUB84(uStack_218,0);
  uStack_420._4_4_ = uStack_218._4_4_;
  uStack_418._0_4_ = SUB84(uStack_210,0);
  uStack_418._4_4_ = uStack_210._4_4_;
  if (uStack_210 != (long *)0x0) {
    LOCK();
    uStack_210[1] = uStack_210[1] + 1;
    UNLOCK();
  }
  puStack_1c8 = puVar18;
  plStack_3e8 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27);
  auStack_608 = (undefined1  [8])*puVar18;
  plStack_600 = (long *)puVar18[1];
  plStack_5f8 = plStack_448;
  plStack_5f0 = plStack_440;
  plStack_5e8 = plStack_438;
  plStack_5e0 = plStack_430;
  plStack_5d8 = (long *)pplStack_428;
  plStack_430 = (long *)0x0;
  pplStack_428 = (long **)0x0;
  uStack_5d0 = (undefined4)uStack_420;
  uStack_5cc = uStack_420._4_4_;
  uStack_5c8 = (undefined4)uStack_418;
  uStack_5c4 = uStack_418._4_4_;
  uStack_420 = 0;
  uStack_418 = (long *)0x0;
  func_0x046551a2(alStack_5b8);
  lVar15 = *plVar17;
  puStack_358 = (undefined8 *)auStack_608;
  if (*(long *)(*in_FS_OFFSET + -0x1778) == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined8 *)(*(long *)(*in_FS_OFFSET + -0x1778) + 8);
  }
  puVar18 = (undefined8 *)func_0x04654f86(uVar25,0x130);
  puStack_348 = (undefined8 *)0x0;
  lVar20 = plVar17[2];
  plStack_368 = (long *)plVar17[1];
  uStack_360 = (undefined4)plVar17[2];
  uStack_35c = *(undefined4 *)((long)plVar17 + 0x14);
  if (lVar20 != 0) {
    LOCK();
    *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + 1;
    UNLOCK();
  }
  uVar25 = *(undefined8 *)(lVar15 + 0x28);
  *puVar18 = 0;
  puVar18[1] = &UNK_0462316e;
  *(undefined4 *)(puVar18 + 2) = 0;
  *(undefined4 *)(puVar18 + 3) = 0;
  puStack_350 = puVar18;
  uVar24 = func_0x0412dd40();
  puVar18[4] = uVar24;
  puVar18[5] = plStack_368;
  puVar18[6] = CONCAT44(uStack_35c,uStack_360);
  if (lVar20 != 0) {
    LOCK();
    *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar18 + 0xb) = uStack_4e8;
  *(undefined4 *)((long)puVar18 + 0x5c) = uStack_4e4;
  *(undefined4 *)(puVar18 + 0xc) = uStack_4e0;
  *(undefined4 *)((long)puVar18 + 100) = uStack_4dc;
  *(undefined4 *)(puVar18 + 9) = uStack_4f8;
  *(undefined4 *)((long)puVar18 + 0x4c) = uStack_4f4;
  *(undefined4 *)(puVar18 + 10) = uStack_4f0;
  *(undefined4 *)((long)puVar18 + 0x54) = uStack_4ec;
  *(undefined4 *)(puVar18 + 7) = (undefined4)uStack_508;
  *(undefined4 *)((long)puVar18 + 0x3c) = uStack_508._4_4_;
  *(undefined4 *)(puVar18 + 8) = (undefined4)uStack_500;
  *(undefined4 *)((long)puVar18 + 0x44) = uStack_500._4_4_;
  if ((uStack_4d8 & 1) == 0) {
    puVar18[0xf] = uStack_4c8;
    *(uint *)(puVar18 + 0xd) = uStack_4d8;
    *(undefined4 *)((long)puVar18 + 0x6c) = uStack_4d4;
    *(undefined4 *)(puVar18 + 0xe) = uStack_4d0;
    *(undefined4 *)((long)puVar18 + 0x74) = uStack_4cc;
  }
  else {
    func_0x0412e5e0(puVar18 + 0xd,uStack_4c8,CONCAT44(uStack_4cc,uStack_4d0));
  }
  if ((uStack_4c0 & 1) == 0) {
    puVar18[0x12] = uStack_4b0;
    *(uint *)(puVar18 + 0x10) = uStack_4c0;
    *(undefined4 *)((long)puVar18 + 0x84) = uStack_4bc;
    *(undefined4 *)(puVar18 + 0x11) = uStack_4b8;
    *(undefined4 *)((long)puVar18 + 0x8c) = uStack_4b4;
  }
  else {
    func_0x0412e5e0(puVar18 + 0x10,uStack_4b0,CONCAT44(uStack_4b4,uStack_4b8));
  }
  puVar18[0x13] = uVar25;
  func_0x04623a2a(puVar18 + 0x14,auStack_608);
  puVar18[0x24] = 0;
  puStack_348 = puVar18;
  if (lVar20 != 0) {
    func_0x0412c2d0(lVar20);
  }
  func_0x0466291e(lVar15 + 0x28,puVar18);
  puStack_350 = (undefined8 *)0x0;
  puStack_348 = (undefined8 *)0x0;
  func_0x04623a68(&puStack_358);
  if (plStack_598 == alStack_5b8) {
    lVar15 = 0x20;
LAB_046093f8:
    (**(code **)(*plStack_598 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plStack_598 != (long *)0x0) goto LAB_046093f8;
  }
  plVar17 = (long *)CONCAT44(uStack_5c4,uStack_5c8);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_5d8;
  if (plStack_5d8 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_5d8 + 1;
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
      func_0x0412c2d0(plVar17);
    }
  }
  if (plStack_3e8 == alStack_408) {
    lVar15 = 0x20;
LAB_0460947e:
    (**(code **)(*plStack_3e8 + lVar15))();
  }
  else {
    lVar15 = 0x28;
    if (plStack_3e8 != (long *)0x0) goto LAB_0460947e;
  }
  plVar17 = uStack_418;
  if (uStack_418 != (long *)0x0) {
    LOCK();
    plVar19 = uStack_418 + 1;
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_418 + 0x10))(uStack_418);
      func_0x0412c2d0(plVar17);
    }
  }
  pplVar21 = pplStack_428;
  if (pplStack_428 != (long **)0x0) {
    LOCK();
    pplVar3 = pplStack_428 + 1;
    plVar17 = *pplVar3;
    *pplVar3 = (long *)((long)*pplVar3 + -1);
    UNLOCK();
    if (plVar17 == (long *)0x0) {
      (*(code *)(*pplStack_428)[2])(pplStack_428);
      func_0x0412c2d0(pplVar21);
    }
  }
  plVar17 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    LOCK();
    plVar19 = plStack_1c0 + 1;
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = uStack_210;
  if (uStack_210 != (long *)0x0) {
    LOCK();
    plVar19 = uStack_210 + 1;
    lVar15 = *plVar19;
    *plVar19 = *plVar19 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      (**(code **)(*uStack_210 + 0x10))(uStack_210);
      func_0x0412c2d0(plVar17);
    }
  }
  if ((uStack_4c0 & 1) != 0) {
    func_0x0412a280(uStack_4b0,CONCAT44(uStack_4bc,uStack_4c0) & 0xfffffffffffffffe);
  }
  if ((uStack_4d8 & 1) != 0) {
    func_0x0412a280(uStack_4c8,CONCAT44(uStack_4d4,uStack_4d8) & 0xfffffffffffffffe);
  }
  do {
    if (((ulong)plStack_538 & 1) != 0) {
      func_0x0412a280(plStack_528,(ulong)plStack_538 & 0xfffffffffffffffe);
    }
    if ((auStack_3a8[0] & 1) != 0) {
      func_0x0412a280(auStack_3a8[2],auStack_3a8[0] & 0xfffffffffffffffe);
    }
    if ((uStack_3d8 & 1) != 0) {
      func_0x0412a280(lStack_3c8,uStack_3d8 & 0xfffffffffffffffe);
    }
    (**(code **)(*plVar27 + 0x28))(plVar27);
    ppuVar8 = ppuStack_308;
    if (ppuStack_308 != (undefined **)0x0) {
      LOCK();
      ppuVar4 = ppuStack_308 + 1;
      puVar26 = *ppuVar4;
      *ppuVar4 = *ppuVar4 + -1;
      UNLOCK();
      if (puVar26 == (undefined *)0x0) {
        (**(code **)(*ppuStack_308 + 0x10))(ppuStack_308);
        func_0x0412c2d0(ppuVar8);
      }
    }
    plVar17 = plStack_580;
    if (plStack_580 != (long *)0x0) {
      LOCK();
      plVar19 = plStack_580 + 1;
      lVar15 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_580 + 0x10))(plStack_580);
        func_0x0412c2d0(plVar17);
      }
    }
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar17 = plVar13 + 1;
      lVar15 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        func_0x0412c2d0(plVar13);
      }
    }
    plVar17 = plStack_470;
    plStack_478 = (long *)0x0;
    plStack_470 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      LOCK();
      plVar19 = plVar17 + 1;
      lVar15 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = plStack_470;
    if (plStack_470 != (long *)0x0) {
      LOCK();
      plVar19 = plStack_470 + 1;
      lVar15 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_470 + 0x10))(plStack_470);
        func_0x0412c2d0(plVar17);
      }
    }
    plVar17 = (long *)func_0x045efa4a(0x20);
    if (plVar17 == (long *)0x0) {
      uVar25 = func_0x041086b0(8);
      func_0x0412a3f0(uVar25);
      iVar10 = func_0x041088a0(uVar25,&UNK_0eeebbd8,&SUB_0412a380);
LAB_04609bab:
      func_0x0412e520(iVar10,&UNK_012201b3);
    }
    else {
      plVar17[1] = 0;
      plVar17[2] = 0;
      *plVar17 = (long)&UNK_0ef0efd8;
      plVar19 = plVar17 + 3;
      plVar17[3] = (long)plStack_628;
      LOCK();
      plVar17[1] = plVar17[1] + 1;
      UNLOCK();
      plVar14 = *(long **)(*(long *)(plVar14[0x1d] + 8) + 0x18);
      auStack_608 = (undefined1  [8])plVar19;
      plStack_600 = plVar17;
      plStack_5f8 = plVar14;
      plStack_448 = plVar19;
      plStack_440 = plVar17;
      lVar15 = FUN_0ee32660(8);
      func_0x04136fe0(lVar15);
      uStack_508 = (long *)lVar15;
      plStack_278 = (long *)FUN_0ee32660(0x20);
      uStack_508 = (long *)0x0;
      *plStack_278 = lVar15;
      plStack_278[1] = (long)plVar19;
      plStack_278[2] = (long)plVar17;
      auStack_608 = (undefined1  [8])0x0;
      plStack_600 = (long *)0x0;
      plStack_278[3] = (long)plVar14;
      iVar10 = func_0x0eee35e0(apuStack_2a8,0,&UNK_0463482a,plStack_278);
      if (iVar10 != 0) goto LAB_04609bab;
      plStack_278 = (long *)0x0;
      func_0x0463490e();
      if (param_1[3] == 0) {
        plVar19 = plVar17 + 1;
        param_1[3] = (long)apuStack_2a8[0];
        apuStack_2a8[0] = (undefined8 *)0x0;
        func_0x04136b90();
        LOCK();
        lVar15 = *plVar19;
        *plVar19 = *plVar19 + -1;
        UNLOCK();
        if (lVar15 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          func_0x0412c2d0(plVar17);
        }
        iVar10 = 0;
LAB_04608616:
        plVar17 = uStack_570;
        if (uStack_570 != (long *)0x0) {
          LOCK();
          plVar19 = uStack_570 + 1;
          lVar15 = *plVar19;
          *plVar19 = *plVar19 + -1;
          UNLOCK();
          if (lVar15 == 0) {
            (**(code **)(*uStack_570 + 0x10))(uStack_570);
            func_0x0412c2d0(plVar17);
          }
        }
        if (plStack_1e0 == (long *)0x0) {
          return iVar10;
        }
        LOCK();
        plVar17 = plStack_1e0 + 1;
        lVar15 = *plVar17;
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (lVar15 != 0) {
          return iVar10;
        }
        (**(code **)(*plStack_1e0 + 0x10))(plStack_1e0);
        func_0x0412c2d0(plStack_1e0);
        return iVar10;
      }
    }
    func_0x04109e60();
LAB_04609bbe:
    iVar10 = func_0x04108328(0xf54caa8);
    if (iVar10 != 0) {
      func_0x0eee2f40(&UNK_041369a0,0xf53ded8,0xf53dab8);
      FUN_0410844d(0xf54caa8);
    }
LAB_04609085:
    auStack_608._0_4_ = 5;
    plStack_600 = (long *)0xf53ded8;
    (**(code **)(*plVar27 + 0x30))(plVar27);
LAB_046096ae:
    plVar17 = plStack_270;
    if (plStack_270 != (long *)0x0) {
      LOCK();
      plVar19 = plStack_270 + 1;
      lVar15 = *plVar19;
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (lVar15 == 0) {
        (**(code **)(*plStack_270 + 0x10))(plStack_270);
        func_0x0412c2d0(plVar17);
      }
    }
  } while( true );
LAB_046099e9:
  plVar19 = (long *)func_0x041086b0(0x30);
  func_0x04160690(auStack_608,&UNK_0145cda3);
  uVar11 = func_0x0465222c(9);
  func_0x0465fc54(plVar19,auStack_608,uVar11,extraout_RDX_01);
  func_0x041088a0(plVar19,&UNK_0ef10570,&UNK_046521fa);
  plVar17 = param_1;
LAB_04609a3d:
  if ((cRam000000000f54ca90 == '\0') && (iVar10 = func_0x04108328(0xf54ca90), iVar10 != 0)) {
    _DAT_0f54ca88 = &UNK_0ef10598;
    func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
    FUN_0410844d(0xf54ca90);
  }
  uVar25 = func_0x041086b0(0x30);
  func_0x046521a6(uVar25,9,&DAT_0f54ca88);
  func_0x041088a0(uVar25,&UNK_0ef10570,&UNK_046521fa);
LAB_04609a85:
  iVar10 = func_0x04108328(0xf54ca90);
  if (iVar10 != 0) {
    _DAT_0f54ca88 = &UNK_0ef10598;
    func_0x0eee2f40(&UNK_041369a0,&DAT_0f54ca88,0xf53dab8);
    FUN_0410844d(0xf54ca90);
  }
LAB_04607a00:
  uStack_578 = (long *)0x0;
  uStack_570 = (long *)0x0;
  iVar10 = 6;
  goto LAB_0460855d;
}


