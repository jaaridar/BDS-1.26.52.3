/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5294820 (ELF vaddr 0x5194820)
 * Label: caller-of-callee
 * Body:  [[05294820, 05294dc2] [05294dd0, 05294ffa]]
 * Ghidra: FUN_05294820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05294820(long *param_1,long param_2)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  short *psVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  long *plVar20;
  undefined *puVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  byte bStack_b1c;
  byte bStack_b1b;
  short sStack_b1a;
  long *plStack_b18;
  int iStack_b10;
  int iStack_b0c;
  int iStack_b08;
  long **pplStack_b00;
  long lStack_af8;
  undefined4 uStack_af0;
  undefined2 uStack_aec;
  byte bStack_aea;
  undefined8 uStack_ae8;
  undefined2 uStack_ae0;
  long *plStack_ad8;
  long *plStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  long **pplStack_ab0;
  int *piStack_aa8;
  undefined4 uStack_aa0;
  long lStack_a9c;
  undefined8 *puStack_a90;
  undefined1 auStack_a88 [8];
  long *plStack_a80;
  long alStack_a68 [4];
  long *plStack_a48;
  uint uStack_a34;
  long *plStack_a30;
  undefined *puStack_a28;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  lVar10 = func_0x0eee1380(param_1 + 0x35);
  if (lVar10 == 0) {
    plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40010);
    if (plVar11 == (long *)0x0) {
      func_0x0eec74c0(0x40010,0);
    }
    *plVar11 = (long)plVar11;
    plVar11[1] = (long)plVar11;
    plVar20 = plVar11 + 2;
    memset(plVar20,0,0x40000);
    plVar4 = (long *)param_1[0x2c];
    plStack_a30 = plVar20;
    if (plVar4 == (long *)0x0) {
      uVar15 = func_0x04891200();
      lVar10 = 0x20;
      if ((plStack_a48 == alStack_a68) || (lVar10 = 0x28, plStack_a48 != (long *)0x0)) {
        (**(code **)(*plStack_a48 + lVar10))();
      }
      func_0x0eee2d70(uVar15);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,&plStack_a30);
    func_0x0eee1580(param_1 + 0x35,plVar11);
    func_0x0412d680(param_1 + 0x30);
    puVar5 = (undefined8 *)param_1[0x2f];
    plVar11[1] = (long)puVar5;
    *plVar11 = (long)(param_1 + 0x2e);
    *puVar5 = plVar11;
    param_1[0x2f] = (long)plVar11;
    func_0x0412d6b0(param_1 + 0x30);
  }
  else {
    plVar20 = (long *)(lVar10 + 0x10);
  }
  lVar10 = param_2 + 0x50;
  FUN_0ca71350(param_1,param_1[5],lVar10,param_1[0x36]);
  func_0x0ca71230(param_1,param_1[5],lVar10,param_1[0x36],param_1 + 0xe);
  if (*(char *)(param_2 + 0x110b) == '\x01') {
    func_0x0cada270(param_2 + 0x120);
  }
  else {
    auVar23 = ZEXT416(*(uint *)(*(long *)(param_1[0x36] + 8) + 0x168));
    auVar23 = pshuflw(auVar23,auVar23,0);
    uVar22 = auVar23._0_4_;
    *(undefined4 *)(param_2 + 0x120) = uVar22;
    *(undefined4 *)(param_2 + 0x124) = uVar22;
    *(undefined4 *)(param_2 + 0x128) = uVar22;
    *(undefined4 *)(param_2 + 300) = uVar22;
    *(undefined4 *)(param_2 + 0x130) = uVar22;
    *(undefined4 *)(param_2 + 0x134) = uVar22;
    *(undefined4 *)(param_2 + 0x138) = uVar22;
    *(undefined4 *)(param_2 + 0x13c) = uVar22;
    *(undefined4 *)(param_2 + 0x140) = uVar22;
    *(undefined4 *)(param_2 + 0x144) = uVar22;
    *(undefined4 *)(param_2 + 0x148) = uVar22;
    *(undefined4 *)(param_2 + 0x14c) = uVar22;
    *(undefined4 *)(param_2 + 0x150) = uVar22;
    *(undefined4 *)(param_2 + 0x154) = uVar22;
    *(undefined4 *)(param_2 + 0x158) = uVar22;
    *(undefined4 *)(param_2 + 0x15c) = uVar22;
    *(undefined4 *)(param_2 + 0x160) = uVar22;
    *(undefined4 *)(param_2 + 0x164) = uVar22;
    *(undefined4 *)(param_2 + 0x168) = uVar22;
    *(undefined4 *)(param_2 + 0x16c) = uVar22;
    *(undefined4 *)(param_2 + 0x170) = uVar22;
    *(undefined4 *)(param_2 + 0x174) = uVar22;
    *(undefined4 *)(param_2 + 0x178) = uVar22;
    *(undefined4 *)(param_2 + 0x17c) = uVar22;
    *(undefined4 *)(param_2 + 0x180) = uVar22;
    *(undefined4 *)(param_2 + 0x184) = uVar22;
    *(undefined4 *)(param_2 + 0x188) = uVar22;
    *(undefined4 *)(param_2 + 0x18c) = uVar22;
    *(undefined4 *)(param_2 + 400) = uVar22;
    *(undefined4 *)(param_2 + 0x194) = uVar22;
    *(undefined4 *)(param_2 + 0x198) = uVar22;
    *(undefined4 *)(param_2 + 0x19c) = uVar22;
    *(undefined4 *)(param_2 + 0x1a0) = uVar22;
    *(undefined4 *)(param_2 + 0x1a4) = uVar22;
    *(undefined4 *)(param_2 + 0x1a8) = uVar22;
    *(undefined4 *)(param_2 + 0x1ac) = uVar22;
    *(undefined4 *)(param_2 + 0x1b0) = uVar22;
    *(undefined4 *)(param_2 + 0x1b4) = uVar22;
    *(undefined4 *)(param_2 + 0x1b8) = uVar22;
    *(undefined4 *)(param_2 + 0x1bc) = uVar22;
    *(undefined4 *)(param_2 + 0x1c0) = uVar22;
    *(undefined4 *)(param_2 + 0x1c4) = uVar22;
    *(undefined4 *)(param_2 + 0x1c8) = uVar22;
    *(undefined4 *)(param_2 + 0x1cc) = uVar22;
    *(undefined4 *)(param_2 + 0x1d0) = uVar22;
    *(undefined4 *)(param_2 + 0x1d4) = uVar22;
    *(undefined4 *)(param_2 + 0x1d8) = uVar22;
    *(undefined4 *)(param_2 + 0x1dc) = uVar22;
    *(undefined4 *)(param_2 + 0x1e0) = uVar22;
    *(undefined4 *)(param_2 + 0x1e4) = uVar22;
    *(undefined4 *)(param_2 + 0x1e8) = uVar22;
    *(undefined4 *)(param_2 + 0x1ec) = uVar22;
    *(undefined4 *)(param_2 + 0x1f0) = uVar22;
    *(undefined4 *)(param_2 + 500) = uVar22;
    *(undefined4 *)(param_2 + 0x1f8) = uVar22;
    *(undefined4 *)(param_2 + 0x1fc) = uVar22;
    *(undefined4 *)(param_2 + 0x200) = uVar22;
    *(undefined4 *)(param_2 + 0x204) = uVar22;
    *(undefined4 *)(param_2 + 0x208) = uVar22;
    *(undefined4 *)(param_2 + 0x20c) = uVar22;
    *(undefined4 *)(param_2 + 0x210) = uVar22;
    *(undefined4 *)(param_2 + 0x214) = uVar22;
    *(undefined4 *)(param_2 + 0x218) = uVar22;
    *(undefined4 *)(param_2 + 0x21c) = uVar22;
    *(undefined4 *)(param_2 + 0x220) = uVar22;
    *(undefined4 *)(param_2 + 0x224) = uVar22;
    *(undefined4 *)(param_2 + 0x228) = uVar22;
    *(undefined4 *)(param_2 + 0x22c) = uVar22;
    *(undefined4 *)(param_2 + 0x230) = uVar22;
    *(undefined4 *)(param_2 + 0x234) = uVar22;
    *(undefined4 *)(param_2 + 0x238) = uVar22;
    *(undefined4 *)(param_2 + 0x23c) = uVar22;
    *(undefined4 *)(param_2 + 0x240) = uVar22;
    *(undefined4 *)(param_2 + 0x244) = uVar22;
    *(undefined4 *)(param_2 + 0x248) = uVar22;
    *(undefined4 *)(param_2 + 0x24c) = uVar22;
    *(undefined4 *)(param_2 + 0x250) = uVar22;
    *(undefined4 *)(param_2 + 0x254) = uVar22;
    *(undefined4 *)(param_2 + 600) = uVar22;
    *(undefined4 *)(param_2 + 0x25c) = uVar22;
    *(undefined4 *)(param_2 + 0x260) = uVar22;
    *(undefined4 *)(param_2 + 0x264) = uVar22;
    *(undefined4 *)(param_2 + 0x268) = uVar22;
    *(undefined4 *)(param_2 + 0x26c) = uVar22;
    *(undefined4 *)(param_2 + 0x270) = uVar22;
    *(undefined4 *)(param_2 + 0x274) = uVar22;
    *(undefined4 *)(param_2 + 0x278) = uVar22;
    *(undefined4 *)(param_2 + 0x27c) = uVar22;
    *(undefined4 *)(param_2 + 0x280) = uVar22;
    *(undefined4 *)(param_2 + 0x284) = uVar22;
    *(undefined4 *)(param_2 + 0x288) = uVar22;
    *(undefined4 *)(param_2 + 0x28c) = uVar22;
    *(undefined4 *)(param_2 + 0x290) = uVar22;
    *(undefined4 *)(param_2 + 0x294) = uVar22;
    *(undefined4 *)(param_2 + 0x298) = uVar22;
    *(undefined4 *)(param_2 + 0x29c) = uVar22;
    *(undefined4 *)(param_2 + 0x2a0) = uVar22;
    *(undefined4 *)(param_2 + 0x2a4) = uVar22;
    *(undefined4 *)(param_2 + 0x2a8) = uVar22;
    *(undefined4 *)(param_2 + 0x2ac) = uVar22;
    *(undefined4 *)(param_2 + 0x2b0) = uVar22;
    *(undefined4 *)(param_2 + 0x2b4) = uVar22;
    *(undefined4 *)(param_2 + 0x2b8) = uVar22;
    *(undefined4 *)(param_2 + 700) = uVar22;
    *(undefined4 *)(param_2 + 0x2c0) = uVar22;
    *(undefined4 *)(param_2 + 0x2c4) = uVar22;
    *(undefined4 *)(param_2 + 0x2c8) = uVar22;
    *(undefined4 *)(param_2 + 0x2cc) = uVar22;
    *(undefined4 *)(param_2 + 0x2d0) = uVar22;
    *(undefined4 *)(param_2 + 0x2d4) = uVar22;
    *(undefined4 *)(param_2 + 0x2d8) = uVar22;
    *(undefined4 *)(param_2 + 0x2dc) = uVar22;
    *(undefined4 *)(param_2 + 0x2e0) = uVar22;
    *(undefined4 *)(param_2 + 0x2e4) = uVar22;
    *(undefined4 *)(param_2 + 0x2e8) = uVar22;
    *(undefined4 *)(param_2 + 0x2ec) = uVar22;
    *(undefined4 *)(param_2 + 0x2f0) = uVar22;
    *(undefined4 *)(param_2 + 0x2f4) = uVar22;
    *(undefined4 *)(param_2 + 0x2f8) = uVar22;
    *(undefined4 *)(param_2 + 0x2fc) = uVar22;
    *(undefined4 *)(param_2 + 0x300) = uVar22;
    *(undefined4 *)(param_2 + 0x304) = uVar22;
    *(undefined4 *)(param_2 + 0x308) = uVar22;
    *(undefined4 *)(param_2 + 0x30c) = uVar22;
    *(undefined4 *)(param_2 + 0x310) = uVar22;
    *(undefined4 *)(param_2 + 0x314) = uVar22;
    *(undefined4 *)(param_2 + 0x318) = uVar22;
    *(undefined4 *)(param_2 + 0x31c) = uVar22;
  }
  func_0x0cae88c0(param_2);
  plStack_ad0 = plVar20 + 0x8000;
  if ((_DAT_0f6ffb10 == (long *)0x0) &&
     (cVar7 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
     cVar7 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_ab8 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x200);
  uStack_ab4 = *(undefined4 *)(*_DAT_0f6ffb10 + 0x204);
  uStack_ac8 = _DAT_014e3710;
  uStack_ac0 = _UNK_014e3718;
  lVar16 = 0;
  do {
    plVar11 = plVar20 + lVar16;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    plVar11 = plVar20 + lVar16 + 2;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    plVar11 = plVar20 + lVar16 + 4;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    plVar11 = plVar20 + lVar16 + 6;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    plVar11 = plVar20 + lVar16 + 8;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    plVar11 = plVar20 + lVar16 + 10;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    plVar11 = plVar20 + lVar16 + 0xc;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    plVar11 = plVar20 + lVar16 + 0xe;
    *(undefined4 *)plVar11 = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 4) = uStack_ab4;
    *(undefined4 *)(plVar11 + 1) = uStack_ab8;
    *(undefined4 *)((long)plVar11 + 0xc) = uStack_ab4;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x8000);
  plStack_ad8 = plVar20;
  (**(code **)(*param_1 + 0x178))(param_1,&plStack_ad8,lVar10,0,1);
  uVar12 = (**(code **)(*(long *)param_1[4] + 0x438))();
  plStack_a30 = (long *)&UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_a20 = (undefined4)uVar12;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar10 = 7;
  while( true ) {
    uVar12 = ((ulong)(((uint)(uVar12 >> 0x1e) & 3 ^ (uint)uVar12) * 0x6c078965) + lVar10) - 6;
    uVar8 = (uint)uVar12;
    (&uStack_a34)[lVar10] = uVar8;
    if (lVar10 == 0x193) break;
    uVar8 = (((uint)(uVar12 >> 0x1e) & 3 ^ uVar8) * 0x6c078965 + (int)lVar10) - 5;
    uVar12 = (ulong)uVar8;
    *(uint *)((long)&plStack_a30 + lVar10 * 4) = uVar8;
    lVar10 = lVar10 + 2;
  }
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  lVar10 = param_1[5];
  uVar1 = *(undefined2 *)(lVar10 + 0xac);
  sVar2 = *(short *)(lVar10 + 0xa8);
  sVar3 = *(short *)(lVar10 + 0xaa);
  sStack_b1a = 0;
  plStack_b18 = param_1;
  uStack_a1c = uStack_a20;
  lVar10 = (**(code **)(**(long **)(param_2 + 0x28) + 0x568))();
  puVar18 = (undefined *)(lVar10 + 0x50);
  puVar19 = puVar18;
  if ((*(char *)(lVar10 + 0x77) == '\0') &&
     (((puVar21 = (undefined *)(lVar10 + 0x70), *(char *)(lVar10 + 0x68) != '\0' ||
       (puVar19 = puVar21, (*(byte *)(lVar10 + 0x56) & 1) != 0)) &&
      (cVar7 = func_0x04fa7a10(puVar21,puVar18), puVar19 = puVar18, cVar7 != '\0')))) {
    puVar19 = puVar21;
  }
  puVar18 = &DAT_0f72b850;
  if (((puVar19[6] | puVar19[0x18]) & 1) != 0) {
    puVar18 = puVar19;
  }
  if ((DAT_0f5a2858 == '\0') && (puVar18[0x18] == '\0')) {
    bStack_aea = 1;
    if (((DAT_0f5a2846 & 1) != 0) && (puVar18[7] == '\0')) {
      bStack_aea = func_0x04fa7a10(puVar18,0xf5a2840);
      bStack_aea = bStack_aea ^ 1;
    }
  }
  else {
    bStack_aea = 0;
  }
  lStack_af8 = plStack_b18[0x26];
  pplStack_b00 = &plStack_a30;
  uStack_af0 = 1;
  lVar10 = (long)sVar3 << 0x20;
  bStack_b1c = 0;
  uStack_aec = uVar1;
LAB_05294d23:
  bStack_b1b = 0;
LAB_05294d46:
  iStack_b08 = (uint)bStack_b1b + *(int *)(param_2 + 0x40);
  _iStack_b10 = CONCAT44(((int)sStack_b1a + *(int *)(param_2 + 0x3c)) - (int)sVar2,
                         (uint)bStack_b1c + *(int *)(param_2 + 0x38));
  lVar16 = func_0x0caf8020(param_2,&bStack_b1c);
  if ((DAT_0f5570f0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5570f0), iVar9 != 0)) {
    LOCK();
    UNLOCK();
    _DAT_0f5570e8 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5570f0);
  }
  for (psVar13 = *(short **)(lVar16 + 0x170); psVar13 != *(short **)(lVar16 + 0x178);
      psVar13 = psVar13 + 8) {
    if (*psVar13 == _DAT_0f5570e8) {
      if ((DAT_0f5570f0 == '\0') && (iVar9 = FUN_04108328(&DAT_0f5570f0), iVar9 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f5570e8 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f5570f0);
      }
      psVar13 = *(short **)(lVar16 + 0x170);
      if (psVar13 == *(short **)(lVar16 + 0x178)) goto LAB_05294e0e;
      goto LAB_05294e00;
    }
  }
  goto LAB_05294d37;
  while (psVar13 = psVar13 + 8, psVar13 != *(short **)(lVar16 + 0x178)) {
LAB_05294e00:
    if (*psVar13 == _DAT_0f5570e8) {
      lVar14 = *(long *)(psVar13 + 4);
      goto LAB_05294e16;
    }
  }
LAB_05294e0e:
  lVar14 = 0;
LAB_05294e16:
  lVar17 = lVar14 + 8;
  if (lVar14 == 0) {
    lVar17 = 0;
  }
  func_0x0c851900(auStack_a88,lVar16,lVar17);
  uStack_ae8 = *(undefined8 *)(param_2 + 0xfd0);
  uStack_ae0 = *(undefined2 *)(param_2 + 0x3c);
  pplStack_ab0 = &plStack_ad8;
  piStack_aa8 = &iStack_b10;
  uStack_aa0 = 0;
  puStack_a90 = &uStack_ae8;
  lStack_a9c = lVar10;
  if (plStack_a80 != (long *)0x0) {
    (**(code **)(*plStack_a80 + 0x28))(plStack_a80,&pplStack_b00,auStack_a88,&pplStack_ab0);
  }
  if (plStack_a48 == alStack_a68) {
    lVar16 = 0x20;
  }
  else {
    lVar16 = 0x28;
    if (plStack_a48 == (long *)0x0) goto LAB_05294d37;
  }
  (**(code **)(*plStack_a48 + lVar16))();
LAB_05294d37:
  bStack_b1b = bStack_b1b + 1;
  if (0xf < bStack_b1b) goto LAB_05294d10;
  goto LAB_05294d46;
LAB_05294d10:
  bStack_b1c = bStack_b1c + 1;
  if (0xf < bStack_b1c) {
    func_0x0cae2040(param_2,&plStack_ad8,0);
    func_0x0cafad60(param_2,0);
    if (*(long *)(param_2 + 0x60) == 0) {
      *(long **)(param_2 + 0x60) = plStack_b18;
    }
    func_0x0cae0970(param_2,1,2);
    return;
  }
  goto LAB_05294d23;
}


