/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f01b0 (ELF vaddr 0xd0f01b0)
 * Label: caller-of-callee
 * Body:  [[0d1f01b0, 0d1f211c] [0d1f2120, 0d1f2176] [0d1f2180, 0d1f247c] [0d1f2480, 0d1f2730] [0d1f2740, 0d1f2788] [0d1f2790, 0d1f2a86] [0d1f2a90, 0d1f5716] [0d1f593f, 0d1f598c]]
 * Ghidra: FUN_0d1f01b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1f01b0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *plVar16;
  char cVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined1 (*pauVar24) [16];
  long *plVar25;
  undefined8 *puVar26;
  char *pcVar27;
  long lVar28;
  char *pcVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  ulong uVar32;
  int iVar33;
  byte *pbVar34;
  char *pcVar35;
  byte *pbVar36;
  undefined *puVar37;
  ulong uVar38;
  uint uVar39;
  undefined4 uVar40;
  long *plVar41;
  long *plVar42;
  bool bVar43;
  undefined1 uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar48;
  byte bVar50;
  byte bVar52;
  byte bVar54;
  byte bVar56;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  undefined1 auVar83 [16];
  undefined1 auStack_ab0 [4];
  undefined4 uStack_aac;
  long *plStack_aa8;
  long lStack_aa0;
  undefined1 *puStack_a98;
  undefined8 uStack_a90;
  ulong uStack_a88;
  undefined1 auStack_a80 [12];
  undefined4 uStack_a74;
  long *plStack_a70;
  long lStack_a68;
  undefined1 uStack_a59;
  long lStack_a58;
  long lStack_a50;
  long lStack_a48;
  long lStack_a40;
  long *plStack_a38;
  int iStack_a2c;
  int iStack_a28;
  int iStack_a24;
  undefined8 uStack_a20;
  undefined1 auStack_a18 [16];
  undefined8 uStack_a08;
  undefined1 auStack_a00 [8];
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined1 auStack_9e8 [16];
  undefined8 uStack_9d8;
  undefined1 auStack_9d0 [16];
  undefined8 uStack_9c0;
  undefined1 uStack_9b8;
  undefined1 auStack_9b0 [16];
  undefined8 uStack_9a0;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char cVar47;
  char cVar49;
  char cVar51;
  char cVar53;
  char cVar55;
  char cVar57;
  
  auStack_a18._0_8_ = &UNK_014dbea6;
  auStack_a18._8_8_ = 0xe;
  lVar20 = param_2 + 8;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  lVar1 = param_2 + 0x10;
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(undefined4 *)(lVar19 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x290) = uVar40;
  auStack_a18._0_8_ = &UNK_012cf131;
  auStack_a18._8_8_ = 10;
  lStack_a50 = param_2;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 4)) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(ulong *)(lVar19 + 0x40);
  }
  uVar32 = (long)(int)uVar23;
  if (8 < *(int *)(param_1 + 0x290)) {
    uVar32 = uVar23;
  }
  func_0x0d208b60(param_1,uVar32);
  auStack_a18._0_8_ = &UNK_012e9c75;
  auStack_a18._8_8_ = 0x17;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
    bVar43 = false;
  }
  else {
    bVar43 = *(char *)(lVar19 + 0x40) != '\0';
  }
  *(bool *)(param_1 + 0x394) = bVar43;
  auStack_a18._8_8_ = 0xf;
  auStack_a18._0_8_ = &UNK_0129caa0;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) != 0xffffffff) {
      uStack_a90 = auStack_ab0;
      lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                         (&uStack_a90,lVar19 + 0x38);
      if (lVar19 != 0) {
        auStack_a18._8_8_ = 0xf;
        auStack_a18._0_8_ = &UNK_0129caa0;
        lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
          uVar40 = 0;
        }
        else {
          uVar40 = *(undefined4 *)(lVar19 + 0x40);
        }
        *(undefined4 *)(param_1 + 0x398) = uVar40;
      }
      goto LAB_0d1f036b;
    }
    goto LAB_0d1f56de;
  }
LAB_0d1f036b:
  auStack_a18._8_8_ = 0x26;
  auStack_a18._0_8_ = &UNK_013bdf7b;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 != 0) {
      auStack_a18._8_8_ = 0x26;
      auStack_a18._0_8_ = &UNK_013bdf7b;
      lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
        bVar43 = false;
      }
      else {
        bVar43 = *(char *)(lVar19 + 0x40) != '\0';
      }
      *(bool *)(param_1 + 0x39c) = bVar43;
    }
  }
  auStack_a18._0_8_ = &UNK_01219b36;
  auStack_a18._8_8_ = 0x11;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
    bVar43 = false;
  }
  else {
    bVar43 = *(char *)(lVar19 + 0x40) != '\0';
  }
  *(bool *)(param_1 + 0x3a4) = bVar43;
  auStack_a18._0_8_ = &UNK_012cf14c;
  auStack_a18._8_8_ = 0x14;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
    bVar43 = false;
  }
  else {
    bVar43 = *(char *)(lVar19 + 0x40) != '\0';
  }
  *(bool *)(param_1 + 0x3a5) = bVar43;
  auStack_a18._8_8_ = 0x1c;
  auStack_a18._0_8_ = &UNK_01219b48;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 != 0) {
      auStack_a18._8_8_ = 0x1c;
      auStack_a18._0_8_ = &UNK_01219b48;
      lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
        uVar40 = 0;
      }
      else {
        uVar40 = *(undefined4 *)(lVar19 + 0x40);
      }
      *(undefined4 *)(param_1 + 0x3a0) = uVar40;
    }
  }
  auStack_a18._0_8_ = &UNK_0128f58d;
  auStack_a18._8_8_ = 8;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(undefined4 *)(lVar19 + 0x40);
  }
  func_0x0d208ea0(param_1,uVar40);
  auStack_a18._0_8_ = &UNK_0143fcd3;
  auStack_a18._8_8_ = 0xd;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
    bVar43 = false;
  }
  else {
    bVar43 = *(char *)(lVar19 + 0x40) != '\0';
  }
  *(bool *)(param_1 + 0x374) = bVar43;
  auStack_a18._0_8_ = &UNK_01280ad8;
  auStack_a18._8_8_ = 6;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
    iVar18 = 0;
  }
  else {
    iVar18 = *(int *)(lVar19 + 0x40);
  }
  auStack_a18._0_8_ = &UNK_012e713b;
  auStack_a18._8_8_ = 6;
  lStack_a68 = lVar20;
  lVar20 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar20 == lVar1) || (*(int *)(lVar20 + 0x60) != 3)) {
    iVar33 = 0;
  }
  else {
    iVar33 = *(int *)(lVar20 + 0x40);
  }
  auStack_a18._8_8_ = 6;
  auStack_a18._0_8_ = &UNK_013d4999;
  lVar20 = func_0x0d6c97a0(lStack_a68,auStack_a18);
  if ((lVar20 == lVar1) || (*(int *)(lVar20 + 0x60) != 3)) {
    iStack_a24 = 0;
  }
  else {
    iStack_a24 = *(int *)(lVar20 + 0x40);
  }
  iStack_a2c = iVar18;
  iStack_a28 = iVar33;
  if (((!SBORROW4(0,iVar18)) || (!SBORROW4(0,iVar33))) || (!SBORROW4(0,iStack_a24))) {
    func_0x0d20ac00(param_1,&iStack_a2c);
  }
  lVar20 = lStack_a68;
  auStack_a18._0_8_ = &UNK_012a8063;
  auStack_a18._8_8_ = 4;
  lVar19 = func_0x0d6c97a0(lStack_a68,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 4)) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(undefined4 *)(lVar19 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x300) = uVar40;
  auStack_a18._0_8_ = &UNK_0140ae0b;
  auStack_a18._8_8_ = 10;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 4)) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(lVar19 + 0x40);
  }
  *(undefined8 *)(param_1 + 800) = uVar22;
  auStack_a18._8_8_ = 9;
  auStack_a18._0_8_ = &UNK_014582c7;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
    lVar30 = 0;
  }
  else {
    lVar30 = 0;
    if (*(int *)(lVar19 + 0x60) == 8) {
      lVar30 = lVar19 + 0x38;
    }
  }
  pbVar21 = (byte *)(lVar30 + 8);
  if (lVar30 == 0) {
    pbVar21 = &UNK_01e79d90;
  }
  pbVar34 = (byte *)(param_1 + 0x278);
  if (pbVar34 != pbVar21) {
    bVar45 = *pbVar21;
    if ((*pbVar34 & 1) == 0) {
      if ((bVar45 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(pbVar21 + 0x10);
        uVar22 = *(undefined8 *)(pbVar21 + 8);
        *(undefined8 *)pbVar34 = *(undefined8 *)pbVar21;
        *(undefined8 *)(param_1 + 0x280) = uVar22;
      }
      else {
        func_0x04885070(pbVar34,*(undefined8 *)(pbVar21 + 0x10),*(undefined8 *)(pbVar21 + 8));
      }
    }
    else {
      bVar43 = (bVar45 & 1) != 0;
      pbVar36 = pbVar21 + 1;
      if (bVar43) {
        pbVar36 = *(byte **)(pbVar21 + 0x10);
      }
      uVar23 = (ulong)(bVar45 >> 1);
      if (bVar43) {
        uVar23 = *(ulong *)(pbVar21 + 8);
      }
      FUN_04885120(pbVar34,pbVar36,uVar23);
    }
  }
  auStack_a18._0_8_ = &UNK_0147114f;
  auStack_a18._8_8_ = 0x1e;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 9)) {
    *(undefined4 *)(param_1 + 0x2a8) = _DAT_0f5a2780;
    uVar22 = uRam000000000f5a2778;
    *(undefined8 *)(param_1 + 0x298) = _DAT_0f5a2770;
    *(undefined8 *)(param_1 + 0x2a0) = uVar22;
    if (param_1 != 0xf5a24d8) {
      pbVar21 = (byte *)(param_1 + 0x2b0);
      if ((*pbVar21 & 1) == 0) {
        if ((DAT_0f5a2788 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x2c0) = _DAT_0f5a2798;
          uVar23 = _DAT_0f5a2790;
          *(ulong *)pbVar21 = CONCAT71(uRam000000000f5a2789,DAT_0f5a2788);
          *(ulong *)(param_1 + 0x2b8) = uVar23;
        }
        else {
          func_0x04885070(pbVar21,_DAT_0f5a2798,_DAT_0f5a2790);
        }
      }
      else {
        uVar23 = (ulong)(DAT_0f5a2788 >> 1);
        uVar22 = 0xf5a2789;
        if ((DAT_0f5a2788 & 1) != 0) {
          uVar23 = _DAT_0f5a2790;
          uVar22 = _DAT_0f5a2798;
        }
        FUN_04885120(pbVar21,uVar22,uVar23);
      }
    }
  }
  else {
    func_0x06cfe360(auStack_a18,lVar19 + 0x38);
    *(undefined4 *)(param_1 + 0x2a8) = (undefined4)uStack_a08;
    *(undefined8 *)(param_1 + 0x298) = auStack_a18._0_8_;
    *(undefined8 *)(param_1 + 0x2a0) = auStack_a18._8_8_;
    if ((*(byte *)(param_1 + 0x2b0) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(param_1 + 0x2c0),
                      *(ulong *)(param_1 + 0x2b0) & 0xfffffffffffffffe);
    }
    *(undefined8 *)(param_1 + 0x2c0) = uStack_9f0;
    *(undefined1 (*) [8])(param_1 + 0x2b0) = auStack_a00;
    *(undefined8 *)(param_1 + 0x2b8) = uStack_9f8;
  }
  func_0x0d5d4740(param_1 + 0x138,lStack_a50);
  auStack_a18._8_8_ = 0xc;
  auStack_a18._0_8_ = &UNK_011e49cc;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) goto LAB_0d1f0a0f;
  if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
  uStack_a90 = auStack_ab0;
  lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                     (&uStack_a90,lVar19 + 0x38);
  if (lVar19 == 0) {
LAB_0d1f0a0f:
    uVar44 = 0;
  }
  else {
    auStack_a18._8_8_ = 0xc;
    auStack_a18._0_8_ = &UNK_011e49cc;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) goto LAB_0d1f0a0f;
    uVar44 = *(undefined1 *)(lVar19 + 0x40);
  }
  func_0x0d208dd0(param_1,uVar44);
  auStack_a18._0_8_ = &UNK_014a659f;
  auStack_a18._8_8_ = 0xe;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(undefined4 *)(lVar19 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar40;
  auStack_a18._0_8_ = &UNK_012d5334;
  auStack_a18._8_8_ = 9;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
    uVar40 = 0;
  }
  else {
    uVar40 = *(undefined4 *)(lVar19 + 0x40);
  }
  func_0x0d208c60(param_1,uVar40);
  auStack_a18._8_8_ = 0xf;
  auStack_a18._0_8_ = &UNK_012cf13c;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  lStack_a58 = param_1;
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_0d1f0d1d;
    func_0x0485e1c0(auStack_a18);
    uStack_a90 = &UNK_012cf13c;
    uStack_a88 = 0xf;
    lVar19 = func_0x0d6c97a0(lVar20,&uStack_a90);
    if (lVar19 == lVar1) {
      lVar30 = 0;
    }
    else {
      lVar30 = 0;
      if (*(int *)(lVar19 + 0x60) == 8) {
        lVar30 = lVar19 + 0x38;
      }
    }
    pbVar21 = (byte *)(lVar30 + 8);
    if (lVar30 == 0) {
      pbVar21 = &UNK_01e79d90;
    }
    bVar43 = (*pbVar21 & 1) != 0;
    pbVar34 = pbVar21 + 1;
    if (bVar43) {
      pbVar34 = *(byte **)(pbVar21 + 0x10);
    }
    uVar23 = (ulong)(*pbVar21 >> 1);
    if (bVar43) {
      uVar23 = *(ulong *)(pbVar21 + 8);
    }
    param_1 = param_1 + 0x380;
    func_0x0485e650(auStack_a18,pbVar34,uVar23,param_1,0);
    uVar22 = func_0x04864680(param_1,&UNK_013a37b0);
    auVar83._14_2_ = 0;
    auVar83._0_14_ = stack0xfffffffffffff552;
    _auStack_ab0 = auVar83 << 0x10;
    func_0x04863cb0(&uStack_a90,uVar22,auStack_ab0);
    uVar23 = func_0x0d3a72f0(&uStack_a90);
    if (((ulong)uStack_a90 & 1) == 0) {
    }
    else {
      func_0x0412a280(auStack_a80._0_8_,(ulong)uStack_a90 & 0xfffffffffffffffe);
    }
    if ((auStack_ab0[0] & 1) != 0) {
      func_0x0412a280(lStack_aa0);
    }
    if (uVar23 >> 0x20 != 0) {
      uVar40 = (undefined4)uVar23;
      uVar38 = (ulong)uStack_a90 >> 0x20;
      uStack_a90 = (undefined *)CONCAT44((int)uVar38,uVar40);
      auStack_a80._8_4_ = 0;
      _auStack_ab0 = (char *)0xf71d5b0;
      lVar19 = func_0x09be9cc0(lStack_a58 + 0x4f0,0xf71d5b0,&UNK_01563a4f,auStack_ab0,&puStack_a98);
      uVar39 = *(uint *)(lVar19 + 0x50);
      if ((ulong)uVar39 == 0) {
        *(undefined4 *)(lVar19 + 0x38) = uVar40;
        uVar39 = 0;
LAB_0d1f0cc5:
        (**(code **)(&UNK_0f45a8b0 + (ulong)uVar39 * 8))(auStack_ab0,&uStack_a90);
      }
      else {
        if (uVar39 == 0xffffffff) {
          *(undefined4 *)(lVar19 + 0x38) = uVar40;
          *(undefined4 *)(lVar19 + 0x50) = 0;
          uVar39 = 0;
          goto LAB_0d1f0cc5;
        }
        (**(code **)(&UNK_0f45a8b0 + (ulong)uVar39 * 8))(auStack_ab0);
        *(undefined4 *)(lVar19 + 0x38) = (undefined4)uStack_a90;
        *(undefined4 *)(lVar19 + 0x50) = 0;
        uVar39 = auStack_a80._8_4_;
        if (auStack_a80._8_4_ != 0xffffffff) goto LAB_0d1f0cc5;
      }
      uVar22 = func_0x0d3a9ee0(uVar23 & 0xffffffff);
      func_0x0d3aa080(&uStack_a90,uVar22);
      func_0x04863790(param_1,&uStack_a90);
      func_0x04863610(&uStack_a90);
    }
    func_0x0485e2d0(auStack_a18);
    param_1 = lStack_a58;
  }
LAB_0d1f0d1d:
  auStack_a18._0_8_ = &UNK_013b5c63;
  auStack_a18._8_8_ = 0xb;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 4)) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined8 *)(lVar19 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x2e8) = uVar22;
  auStack_a18._8_8_ = 0x13;
  auStack_a18._0_8_ = &UNK_014248a1;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
LAB_0d1f0e02:
    *(undefined8 *)(param_1 + 0x2f4) = 0x4000000080;
    uVar40 = 0x80;
  }
  else {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_0d1f0e02;
    auStack_a18._0_8_ = &UNK_014248a1;
    auStack_a18._8_8_ = 0x13;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x2f4) = uVar40;
    auStack_a18._0_8_ = &UNK_0129ca8c;
    auStack_a18._8_8_ = 0x13;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x2f8) = uVar40;
    auStack_a18._8_8_ = 0x13;
    auStack_a18._0_8_ = &UNK_0147116e;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
  }
  *(undefined4 *)(param_1 + 0x2fc) = uVar40;
  auStack_a18._0_8_ = _DAT_0f71d668;
  auStack_a18._8_8_ = _DAT_0f71d660;
  if ((DAT_0f71d658 & 1) == 0) {
    auStack_a18._0_8_ = 0xf71d659;
    auStack_a18._8_8_ = (ulong)(DAT_0f71d658 >> 1);
  }
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 != 0) {
      uStack_a88 = (ulong)(DAT_0f71d658 >> 1);
      uStack_a90 = (undefined *)0xf71d659;
      if ((DAT_0f71d658 & 1) != 0) {
        uStack_a88 = _DAT_0f71d660;
        uStack_a90 = (undefined *)_DAT_0f71d668;
      }
      lVar19 = func_0x0d6c97a0(lVar20,&uStack_a90);
      if (lVar19 == lVar1) {
        lVar30 = 0;
      }
      else {
        lVar30 = 0;
        if (*(int *)(lVar19 + 0x60) == 8) {
          lVar30 = lVar19 + 0x38;
        }
      }
      pauVar24 = (undefined1 (*) [16])(lVar30 + 8);
      if (lVar30 == 0) {
        pauVar24 = (undefined1 (*) [16])&UNK_01e79d90;
      }
      if (((*pauVar24)[0] & 1) == 0) {
        uStack_a08 = *(char **)pauVar24[1];
        auStack_a18 = *pauVar24;
      }
      else {
        func_0x0412e5e0(auStack_a18,*(undefined8 *)pauVar24[1],*(undefined8 *)(*pauVar24 + 8));
      }
      auStack_a00._0_4_ = 3;
      uStack_a90 = (undefined *)0xf71d650;
      lVar19 = func_0x09be9cc0(param_1 + 0x4f0,0xf71d650,&UNK_01563a4f,&uStack_a90,auStack_ab0);
      if ((ulong)*(uint *)(lVar19 + 0x50) == 0xffffffff) {
        if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f1049;
      }
      else {
        if (auStack_a00._0_4_ == 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar19 + 0x50) * 8))(&uStack_a90);
          *(undefined4 *)(lVar19 + 0x50) = 0xffffffff;
        }
        else {
LAB_0d1f1049:
          uStack_a90 = (undefined *)(lVar19 + 0x38);
          (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                    (&uStack_a90,(undefined *)(lVar19 + 0x38),auStack_a18);
        }
        if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(&uStack_a90,auStack_a18)
          ;
        }
      }
    }
  }
  auStack_a18._0_8_ = _DAT_0f71d760;
  auStack_a18._8_8_ = _DAT_0f71d758;
  if ((DAT_0f71d750 & 1) == 0) {
    auStack_a18._0_8_ = 0xf71d751;
    auStack_a18._8_8_ = (ulong)(DAT_0f71d750 >> 1);
  }
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
LAB_0d1f1166:
    auStack_a18._0_4_ = 0x10;
    auVar12._12_4_ = 0;
    auVar12._0_12_ = stack0xfffffffffffff604;
    _auStack_a00 = auVar12 << 0x20;
    uStack_a90 = (undefined *)0xf71d748;
    lVar19 = func_0x09be9cc0(param_1 + 0x4f0,0xf71d748,&UNK_01563a4f,&uStack_a90,auStack_ab0);
    if ((ulong)*(uint *)(lVar19 + 0x50) == 0xffffffff) {
      if (auStack_a00._0_4_ == 0xffffffff) goto LAB_0d1f12fb;
LAB_0d1f126c:
      uStack_a90 = (undefined *)(lVar19 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                (&uStack_a90,(undefined *)(lVar19 + 0x38),auStack_a18);
    }
    else {
      if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f126c;
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar19 + 0x50) * 8))(&uStack_a90);
      *(undefined4 *)(lVar19 + 0x50) = 0xffffffff;
    }
    if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(&uStack_a90,auStack_a18);
    }
  }
  else {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_0d1f1166;
    uStack_a88 = (ulong)(DAT_0f71d750 >> 1);
    uStack_a90 = (undefined *)0xf71d751;
    if ((DAT_0f71d750 & 1) != 0) {
      uStack_a88 = _DAT_0f71d758;
      uStack_a90 = (undefined *)_DAT_0f71d760;
    }
    lVar19 = func_0x0d6c97a0(lVar20,&uStack_a90);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
    auStack_a18._0_4_ = uVar40;
    auVar13._12_4_ = 0;
    auVar13._0_12_ = stack0xfffffffffffff604;
    _auStack_a00 = auVar13 << 0x20;
    uStack_a90 = (undefined *)0xf71d748;
    lVar19 = func_0x09be9cc0(param_1 + 0x4f0,0xf71d748,&UNK_01563a4f,&uStack_a90,auStack_ab0);
    if ((ulong)*(uint *)(lVar19 + 0x50) == 0xffffffff) {
      if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f12b7;
    }
    else {
      if (auStack_a00._0_4_ == 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar19 + 0x50) * 8))(&uStack_a90);
        *(undefined4 *)(lVar19 + 0x50) = 0xffffffff;
      }
      else {
LAB_0d1f12b7:
        uStack_a90 = (undefined *)(lVar19 + 0x38);
        (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                  (&uStack_a90,(undefined *)(lVar19 + 0x38),auStack_a18);
      }
      if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(&uStack_a90,auStack_a18);
      }
    }
  }
LAB_0d1f12fb:
  auStack_a18._0_8_ = _DAT_0f71d788;
  auStack_a18._8_8_ = _DAT_0f71d780;
  if ((DAT_0f71d778 & 1) == 0) {
    auStack_a18._0_8_ = 0xf71d779;
    auStack_a18._8_8_ = (ulong)(DAT_0f71d778 >> 1);
  }
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
LAB_0d1f13d4:
    auStack_a18._0_4_ = 0x10;
    auVar14._12_4_ = 0;
    auVar14._0_12_ = stack0xfffffffffffff604;
    _auStack_a00 = auVar14 << 0x20;
    uStack_a90 = (undefined *)0xf71d770;
    lVar19 = func_0x09be9cc0(param_1 + 0x4f0,0xf71d770,&UNK_01563a4f,&uStack_a90,auStack_ab0);
    if ((ulong)*(uint *)(lVar19 + 0x50) == 0xffffffff) {
      if (auStack_a00._0_4_ == 0xffffffff) goto LAB_0d1f1569;
LAB_0d1f14da:
      uStack_a90 = (undefined *)(lVar19 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                (&uStack_a90,(undefined *)(lVar19 + 0x38),auStack_a18);
    }
    else {
      if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f14da;
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar19 + 0x50) * 8))(&uStack_a90);
      *(undefined4 *)(lVar19 + 0x50) = 0xffffffff;
    }
    if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(&uStack_a90,auStack_a18);
    }
  }
  else {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_0d1f13d4;
    uStack_a88 = (ulong)(DAT_0f71d778 >> 1);
    uStack_a90 = (undefined *)0xf71d779;
    if ((DAT_0f71d778 & 1) != 0) {
      uStack_a88 = _DAT_0f71d780;
      uStack_a90 = (undefined *)_DAT_0f71d788;
    }
    lVar19 = func_0x0d6c97a0(lVar20,&uStack_a90);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
    auStack_a18._0_4_ = uVar40;
    auVar15._12_4_ = 0;
    auVar15._0_12_ = stack0xfffffffffffff604;
    _auStack_a00 = auVar15 << 0x20;
    uStack_a90 = (undefined *)0xf71d770;
    lVar19 = func_0x09be9cc0(param_1 + 0x4f0,0xf71d770,&UNK_01563a4f,&uStack_a90,auStack_ab0);
    if ((ulong)*(uint *)(lVar19 + 0x50) == 0xffffffff) {
      if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f1525;
    }
    else {
      if (auStack_a00._0_4_ == 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar19 + 0x50) * 8))(&uStack_a90);
        *(undefined4 *)(lVar19 + 0x50) = 0xffffffff;
      }
      else {
LAB_0d1f1525:
        uStack_a90 = (undefined *)(lVar19 + 0x38);
        (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                  (&uStack_a90,(undefined *)(lVar19 + 0x38),auStack_a18);
      }
      if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(&uStack_a90,auStack_a18);
      }
    }
  }
LAB_0d1f1569:
  auStack_a18._8_8_ = 9;
  auStack_a18._0_8_ = &UNK_011cb7af;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
LAB_0d1f160b:
    bVar43 = true;
  }
  else {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_0d1f160b;
    auStack_a18._8_8_ = 9;
    auStack_a18._0_8_ = &UNK_011cb7af;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
      bVar43 = false;
    }
    else {
      bVar43 = *(char *)(lVar19 + 0x40) != '\0';
    }
  }
  *(bool *)(param_1 + 0x377) = bVar43;
  auStack_a18._8_8_ = 6;
  auStack_a18._0_8_ = &UNK_01361110;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    plVar25 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                                (&uStack_a90,lVar19 + 0x38);
    if ((plVar25 != (long *)0x0) &&
       (cVar17 = (**(code **)(*plVar25 + 0x30))(plVar25), cVar17 == '\n')) {
      auStack_a18._8_8_ = 6;
      auStack_a18._0_8_ = &UNK_01361110;
      lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
      if (lVar19 == lVar1) {
        lVar30 = 0;
      }
      else {
        lVar30 = 0;
        if (*(int *)(lVar19 + 0x60) == 10) {
          lVar30 = lVar19 + 0x38;
        }
      }
      plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar25 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar25 = (long)&UNK_0f47e0b0;
      pauVar24 = (undefined1 (*) [16])(plVar25 + 2);
      *(undefined1 (*) [16])(plVar25 + 2) = (undefined1  [16])0x0;
      plVar25[1] = (long)pauVar24;
      func_0x0d6bd5f0(plVar25,lVar30);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      param_1 = lStack_a58;
      *puVar26 = &UNK_0f47e0b0;
      puVar26[1] = plVar25[1];
      lVar19 = plVar25[2];
      puVar26[2] = lVar19;
      lVar30 = plVar25[3];
      puVar26[3] = lVar30;
      if (lVar30 == 0) {
        puVar26[1] = puVar26 + 2;
      }
      else {
        *(undefined8 **)(lVar19 + 0x10) = puVar26 + 2;
        plVar25[1] = (long)pauVar24;
        *pauVar24 = (undefined1  [16])0x0;
      }
      auStack_a18._0_8_ = puVar26;
      auStack_a00._0_4_ = 8;
      uStack_a90 = (undefined *)0xf71d5d8;
      lVar19 = func_0x09be9cc0(lStack_a58 + 0x4f0,0xf71d5d8,&UNK_01563a4f,&uStack_a90,auStack_ab0);
      if ((ulong)*(uint *)(lVar19 + 0x50) == 0xffffffff) {
        if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f1809;
      }
      else {
        if (auStack_a00._0_4_ == 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar19 + 0x50) * 8))(&uStack_a90);
          *(undefined4 *)(lVar19 + 0x50) = 0xffffffff;
        }
        else {
LAB_0d1f1809:
          uStack_a90 = (undefined *)(lVar19 + 0x38);
          (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                    (&uStack_a90,(undefined *)(lVar19 + 0x38),auStack_a18);
        }
        if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(&uStack_a90,auStack_a18)
          ;
        }
      }
      auStack_a00._0_4_ = 0xffffffff;
      (**(code **)(*plVar25 + 8))(plVar25);
    }
  }
  auStack_a18._8_8_ = 0xf;
  auStack_a18._0_8_ = &UNK_014c0b09;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
LAB_0d1f18ff:
    uVar40 = 0xffffffff;
  }
  else {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_0d1f18ff;
    auStack_a18._8_8_ = 0xf;
    auStack_a18._0_8_ = &UNK_014c0b09;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 4)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
  }
  *(undefined4 *)(param_1 + 0x390) = uVar40;
  auStack_a18._8_8_ = 0x10;
  auStack_a18._0_8_ = &UNK_014b1ef3;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 != 0) {
      auStack_a18._8_8_ = 0x10;
      auStack_a18._0_8_ = &UNK_014b1ef3;
      lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
      if (lVar19 == lVar1) {
        lVar30 = 0;
      }
      else {
        lVar30 = 0;
        if (*(int *)(lVar19 + 0x60) == 8) {
          lVar30 = lVar19 + 0x38;
        }
      }
      puVar37 = (undefined *)(lVar30 + 8);
      if (lVar30 == 0) {
        puVar37 = &UNK_01e79d90;
      }
      func_0x0ee32f20(puVar37,param_1 + 0x2d0,1);
    }
  }
  auStack_a18._8_8_ = 9;
  auStack_a18._0_8_ = &UNK_013bb484;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
LAB_0d1f1a89:
    uStack_38 = 0x100000000000000;
    auStack_a18._8_4_ = (int)uVar32;
    auStack_a18._0_8_ = &UNK_0f5356d0;
    uStack_44 = 0;
    uStack_40 = 0;
    auStack_a18._12_4_ = (int)uVar32;
    lVar19 = 5;
    while( true ) {
      uVar23 = ((ulong)(((uint)(uVar32 >> 0x1e) & 3 ^ (uint)uVar32) * 0x6c078965) + lVar19) - 4;
      uVar39 = (uint)uVar23;
      *(uint *)(auStack_a18 + lVar19 * 4 + -4) = uVar39;
      if (lVar19 == 0x191) break;
      uVar39 = ((int)lVar19 + ((uint)(uVar23 >> 0x1e) & 3 ^ uVar39) * 0x6c078965) - 3;
      uVar32 = (ulong)uVar39;
      *(uint *)(auStack_a18 + lVar19 * 4) = uVar39;
      lVar19 = lVar19 + 2;
    }
    uStack_4c = 0x18e00000270;
    *(undefined4 *)(param_1 + 0x32c) = 0;
    iVar18 = func_0x0ee4a260(auStack_a18,0x29040);
    *(int *)(param_1 + 0x330) = iVar18 + 12000;
    *(undefined4 *)(param_1 + 0x334) = 0;
    iVar18 = (**(code **)(auStack_a18._0_8_ + 0x18))(auStack_a18,0x29040);
    iVar18 = iVar18 + 12000;
  }
  else {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (&uStack_a90,lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_0d1f1a89;
    auStack_a18._0_8_ = &UNK_013bb484;
    auStack_a18._8_8_ = 9;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 5)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x32c) = uVar40;
    auStack_a18._0_8_ = &UNK_01471182;
    auStack_a18._8_8_ = 8;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x330) = uVar40;
    auStack_a18._0_8_ = &UNK_0125031b;
    auStack_a18._8_8_ = 0xe;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 5)) {
      uVar40 = 0;
    }
    else {
      uVar40 = *(undefined4 *)(lVar19 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x334) = uVar40;
    auStack_a18._8_8_ = 0xd;
    auStack_a18._0_8_ = &UNK_01269304;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
      iVar18 = 0;
    }
    else {
      iVar18 = *(int *)(lVar19 + 0x40);
    }
  }
  *(int *)(param_1 + 0x338) = iVar18;
  auStack_a18._8_8_ = 8;
  auStack_a18._0_8_ = &UNK_01234674;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) {
LAB_0d1f1d33:
    auStack_a18._8_8_ = 8;
    auStack_a18._0_8_ = &UNK_014248b5;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar19 != lVar1) {
      if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
      uStack_a90 = auStack_ab0;
      lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                         (&uStack_a90,lVar19 + 0x38);
      if (lVar19 != 0) {
        auStack_a18._8_8_ = 8;
        auStack_a18._0_8_ = &UNK_014248b5;
        lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) goto LAB_0d1f1dd5;
        uVar39 = *(uint *)(lVar19 + 0x40);
        goto LAB_0d1f1dd7;
      }
    }
  }
  else {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56de;
    uStack_a90 = auStack_ab0;
    plVar25 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                                (&uStack_a90,lVar19 + 0x38);
    if ((plVar25 == (long *)0x0) ||
       (cVar17 = (**(code **)(*plVar25 + 0x30))(plVar25), cVar17 != '\x01')) goto LAB_0d1f1d33;
    auStack_a18._8_8_ = 8;
    auStack_a18._0_8_ = &UNK_01234674;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
LAB_0d1f1dd5:
      uVar39 = 0;
    }
    else {
      uVar39 = (uint)(*(char *)(lVar19 + 0x40) != '\0');
    }
LAB_0d1f1dd7:
    if (*(uint *)(param_1 + 0x3a8) != 0) {
      uVar39 = *(uint *)(param_1 + 0x3a8);
    }
    *(uint *)(param_1 + 0x3a8) = uVar39;
  }
  FUN_0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  func_0x0412d610(0xf5522b8);
  unique0x1000552f = (long *)_DAT_0f5523a0;
  auStack_a80._0_8_ = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uStack_a90 = (undefined *)0x0;
    uStack_a88 = (ulong)uStack_a88._1_7_ << 8;
    _auStack_a80 = (undefined1  [16])0x0;
    plStack_a70 = (long *)0x0;
    func_0x0eee02f0(0xf5522b8);
LAB_0d1f1e98:
    auStack_a18._8_8_ = 0x18;
    auStack_a18._0_8_ = &UNK_0148bffa;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) {
      bVar43 = false;
    }
    else {
      bVar43 = *(char *)(lVar19 + 0x40) != '\0';
    }
  }
  else {
    bVar45 = 1;
    if (_DAT_0f5523a0 != 0) {
      LOCK();
      *(long *)(_DAT_0f5523a0 + 8) = *(long *)(_DAT_0f5523a0 + 8) + 1;
      UNLOCK();
      bVar45 = *(byte *)auStack_a80._0_8_;
    }
    uStack_a90 = (undefined *)0xf5522b8;
    uStack_a88 = CONCAT71(uStack_a88._1_7_,1);
    plStack_a70 = _DAT_0f5523a8;
    if ((bVar45 & 1) == 0) goto LAB_0d1f1e98;
    cVar17 = (**(code **)(*_DAT_0f5523a8 + 0x690))();
    bVar43 = true;
    if (cVar17 == '\0') goto LAB_0d1f1e98;
  }
  *(bool *)(param_1 + 0x438) = bVar43;
  auStack_a18._8_8_ = 0xe;
  auStack_a18._0_8_ = &UNK_014c0b19;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 == lVar1) goto LAB_0d1f1f84;
  if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
  _auStack_ab0 = (char *)&puStack_a98;
  lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                     (auStack_ab0,lVar19 + 0x38);
  if (lVar19 == 0) {
LAB_0d1f1f84:
    bVar43 = false;
  }
  else {
    auStack_a18._8_8_ = 0xe;
    auStack_a18._0_8_ = &UNK_014c0b19;
    lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 1)) goto LAB_0d1f1f84;
    bVar43 = *(char *)(lVar19 + 0x40) != '\0';
  }
  *(bool *)(param_1 + 2) = bVar43;
  func_0x0d1dc540(param_1 + 8,lStack_a50);
  if (*(char *)(param_1 + 0x55c) == '\x01') {
    if (*(int *)(param_1 + 0x558) != 0) goto LAB_0d1f1ff5;
LAB_0d1f1ffe:
    puVar37 = (undefined *)0xf5a2820;
  }
  else {
    lVar19 = func_0x0d2279e0(param_1 + 0x518,0xf71d720);
    if ((((lVar19 != 0) || (lVar19 = func_0x0d2279e0(param_1 + 0x4f0,0xf71d720), lVar19 != 0)) &&
        (*(int *)(lVar19 + 0x50) == 4)) && (*(int *)(lVar19 + 0x38) == 0)) goto LAB_0d1f1ffe;
LAB_0d1f1ff5:
    puVar37 = &DAT_0f72b850;
  }
  func_0x0d1ddb80(param_1 + 8,puVar37);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x0d201f70(param_1 + 0x98);
  }
  auStack_a18._8_8_ = 0xb;
  auStack_a18._0_8_ = &UNK_01302322;
  lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar19 != lVar1) {
    if ((ulong)*(uint *)(lVar19 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar19 + 0x60) * 8))
                       (auStack_ab0,lVar19 + 0x38);
    if (lVar19 != 0) {
      auStack_a18._8_8_ = 0xb;
      auStack_a18._0_8_ = &UNK_01302322;
      lVar19 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar19 == lVar1) || (*(int *)(lVar19 + 0x60) != 3)) {
        uVar40 = 0;
      }
      else {
        uVar40 = *(undefined4 *)(lVar19 + 0x40);
      }
      *(undefined4 *)(param_1 + 0x33c) = uVar40;
    }
  }
  lStack_a48 = param_1 + 0x50;
  lVar19 = lStack_a48;
  if ((*(char *)(param_1 + 0x77) == '\0') &&
     ((lVar19 = param_1 + 0x70, *(char *)(param_1 + 0x68) != '\0' ||
      ((*(byte *)(param_1 + 0x56) & 1) != 0)))) {
    cVar17 = func_0x04fa7a10(lVar19,lStack_a48);
    if (cVar17 != '\0') {
      lStack_a48 = lVar19;
    }
    lVar19 = *(long *)(param_1 + 0xb0);
    lVar30 = *(long *)(param_1 + 0xb8);
    if (lVar19 != lVar30) {
LAB_0d1f2113:
      pcVar29 = auStack_a18 + 1;
      do {
        bVar43 = (*(byte *)(lVar19 + 0x10) & 1) != 0;
        lVar20 = lVar19 + 0x11;
        if (bVar43) {
          lVar20 = *(long *)(lVar19 + 0x20);
        }
        uVar23 = (ulong)(*(byte *)(lVar19 + 0x10) >> 1);
        if (bVar43) {
          uVar23 = *(ulong *)(lVar19 + 0x18);
        }
        if (0xfffffffffffffff7 < uVar23) goto LAB_0d1f56cf;
        if (uVar23 < 0x17) {
          auStack_a18[0] = (char)uVar23 * '\x02';
          pcVar27 = pcVar29;
          if (uVar23 != 0) goto LAB_0d1f21f0;
        }
        else {
          uVar32 = (uVar23 | 7) + 1;
          if ((uVar23 | 7) == 0x17) {
            uVar32 = 0x1a;
          }
          lStack_a40 = lVar19;
          pcVar27 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32);
          if (pcVar27 == (char *)0x0) {
            func_0x0eec74c0(uVar32,0);
          }
          auStack_a18._8_8_ = uVar23;
          auStack_a18._0_8_ = uVar32 | 1;
          lVar19 = lStack_a40;
          uStack_a08 = pcVar27;
LAB_0d1f21f0:
          func_0x0eee2f00(pcVar27,lVar20,uVar23);
        }
        lVar20 = lStack_a68;
        pcVar27[uVar23] = '\0';
        plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
        uVar23 = auStack_a18._8_8_;
        pcVar27 = uStack_a08;
        if ((auStack_a18[0] & 1) == 0) {
          uVar23 = (ulong)plStack_aa8;
          pcVar27 = pcVar29;
        }
        if (uVar23 != 0) {
          pcVar35 = pcVar27;
          if (uVar23 < 8) {
LAB_0d1f2350:
            do {
              cVar17 = *pcVar35;
              cVar47 = cVar17 + ' ';
              if (0x19 < (byte)(cVar17 + 0xbfU)) {
                cVar47 = cVar17;
              }
              *pcVar35 = cVar47;
              pcVar35 = pcVar35 + 1;
            } while (pcVar35 != pcVar27 + uVar23);
          }
          else if (uVar23 < 0x20) {
            uVar32 = 0;
LAB_0d1f22e5:
            uVar38 = uVar23 & 0xfffffffffffffff8;
            pcVar35 = pcVar27 + uVar38;
            do {
              uVar22 = *(undefined8 *)(pcVar27 + uVar32);
              bVar45 = (char)uVar22 + DAT_014e9110;
              cVar47 = (char)((ulong)uVar22 >> 8);
              bVar46 = cVar47 + UNK_014e9111;
              cVar49 = (char)((ulong)uVar22 >> 0x10);
              bVar48 = cVar49 + UNK_014e9112;
              cVar51 = (char)((ulong)uVar22 >> 0x18);
              bVar50 = cVar51 + UNK_014e9113;
              cVar53 = (char)((ulong)uVar22 >> 0x20);
              bVar52 = cVar53 + UNK_014e9114;
              cVar55 = (char)((ulong)uVar22 >> 0x28);
              bVar54 = cVar55 + UNK_014e9115;
              cVar57 = (char)((ulong)uVar22 >> 0x30);
              cVar17 = (char)((ulong)uVar22 >> 0x38);
              bVar56 = cVar57 + UNK_014e9116;
              bVar58 = cVar17 + UNK_014e9117;
              *(ulong *)(pcVar27 + uVar32) =
                   CONCAT17((~-((byte)((bVar58 < UNK_014e8cb7) * UNK_014e8cb7 |
                                      (bVar58 >= UNK_014e8cb7) * bVar58) == bVar58) & UNK_014ea367)
                            + cVar17,CONCAT16((~-((byte)((bVar56 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                        (bVar56 >= UNK_014e8cb6) * bVar56) == bVar56
                                                 ) & UNK_014ea366) + cVar57,
                                              CONCAT15((~-((byte)((bVar54 < UNK_014e8cb5) *
                                                                  UNK_014e8cb5 |
                                                                 (bVar54 >= UNK_014e8cb5) * bVar54)
                                                          == bVar54) & UNK_014ea365) + cVar55,
                                                       CONCAT14((~-((byte)((bVar52 < UNK_014e8cb4) *
                                                                           UNK_014e8cb4 |
                                                                          (bVar52 >= UNK_014e8cb4) *
                                                                          bVar52) == bVar52) &
                                                                UNK_014ea364) + cVar53,
                                                                CONCAT13((~-((byte)((bVar50 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar50 >= UNK_014e8cb3) * bVar50) == bVar50) &
                                                  UNK_014ea363) + cVar51,
                                                  CONCAT12((~-((byte)((bVar48 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar48 >= UNK_014e8cb2) *
                                                                     bVar48) == bVar48) &
                                                           UNK_014ea362) + cVar49,
                                                           CONCAT11((~-((byte)((bVar46 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar46 >= UNK_014e8cb1) * bVar46) == bVar46) &
                                                  UNK_014ea361) + cVar47,
                                                  (~-((byte)((bVar45 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar45 >= DAT_014e8cb0) * bVar45) ==
                                                     bVar45) & DAT_014ea360) + (char)uVar22)))))));
              uVar32 = uVar32 + 8;
            } while (uVar38 != uVar32);
            if (uVar23 != uVar38) goto LAB_0d1f2350;
          }
          else {
            uVar32 = uVar23 & 0xffffffffffffffe0;
            uVar38 = 0;
            do {
              auVar83 = *(undefined1 (*) [16])(pcVar27 + uVar38);
              pcVar35 = pcVar27 + uVar38 + 0x10;
              cVar17 = *pcVar35;
              cVar47 = pcVar35[1];
              cVar49 = pcVar35[2];
              cVar51 = pcVar35[3];
              cVar53 = pcVar35[4];
              cVar55 = pcVar35[5];
              cVar57 = pcVar35[6];
              cVar3 = pcVar35[7];
              cVar4 = pcVar35[8];
              cVar5 = pcVar35[9];
              cVar6 = pcVar35[10];
              cVar7 = pcVar35[0xb];
              cVar8 = pcVar35[0xc];
              cVar9 = pcVar35[0xd];
              cVar10 = pcVar35[0xe];
              cVar11 = pcVar35[0xf];
              bVar45 = auVar83[0] + DAT_014e86b0;
              bVar46 = auVar83[1] + UNK_014e86b1;
              bVar48 = auVar83[2] + UNK_014e86b2;
              bVar50 = auVar83[3] + UNK_014e86b3;
              bVar52 = auVar83[4] + UNK_014e86b4;
              bVar54 = auVar83[5] + UNK_014e86b5;
              bVar56 = auVar83[6] + UNK_014e86b6;
              bVar58 = auVar83[7] + UNK_014e86b7;
              bVar59 = auVar83[8] + UNK_014e86b8;
              bVar60 = auVar83[9] + UNK_014e86b9;
              bVar61 = auVar83[10] + UNK_014e86ba;
              bVar62 = auVar83[0xb] + UNK_014e86bb;
              bVar63 = auVar83[0xc] + UNK_014e86bc;
              bVar64 = auVar83[0xd] + UNK_014e86bd;
              bVar65 = auVar83[0xe] + UNK_014e86be;
              bVar66 = auVar83[0xf] + UNK_014e86bf;
              bVar67 = cVar17 + DAT_014e86b0;
              bVar68 = cVar47 + UNK_014e86b1;
              bVar69 = cVar49 + UNK_014e86b2;
              bVar70 = cVar51 + UNK_014e86b3;
              bVar71 = cVar53 + UNK_014e86b4;
              bVar72 = cVar55 + UNK_014e86b5;
              bVar73 = cVar57 + UNK_014e86b6;
              bVar74 = cVar3 + UNK_014e86b7;
              bVar75 = cVar4 + UNK_014e86b8;
              bVar76 = cVar5 + UNK_014e86b9;
              bVar77 = cVar6 + UNK_014e86ba;
              bVar78 = cVar7 + UNK_014e86bb;
              bVar79 = cVar8 + UNK_014e86bc;
              bVar80 = cVar9 + UNK_014e86bd;
              bVar81 = cVar10 + UNK_014e86be;
              bVar82 = cVar11 + UNK_014e86bf;
              pcVar35 = pcVar27 + uVar38;
              *pcVar35 = (-((byte)((DAT_014e4170 < bVar45) * DAT_014e4170 |
                                  (DAT_014e4170 >= bVar45) * bVar45) == bVar45) & DAT_014ead50) +
                         auVar83[0];
              pcVar35[1] = (-((byte)((UNK_014e4171 < bVar46) * UNK_014e4171 |
                                    (UNK_014e4171 >= bVar46) * bVar46) == bVar46) & UNK_014ead51) +
                           auVar83[1];
              pcVar35[2] = (-((byte)((UNK_014e4172 < bVar48) * UNK_014e4172 |
                                    (UNK_014e4172 >= bVar48) * bVar48) == bVar48) & UNK_014ead52) +
                           auVar83[2];
              pcVar35[3] = (-((byte)((UNK_014e4173 < bVar50) * UNK_014e4173 |
                                    (UNK_014e4173 >= bVar50) * bVar50) == bVar50) & UNK_014ead53) +
                           auVar83[3];
              pcVar35[4] = (-((byte)((UNK_014e4174 < bVar52) * UNK_014e4174 |
                                    (UNK_014e4174 >= bVar52) * bVar52) == bVar52) & UNK_014ead54) +
                           auVar83[4];
              pcVar35[5] = (-((byte)((UNK_014e4175 < bVar54) * UNK_014e4175 |
                                    (UNK_014e4175 >= bVar54) * bVar54) == bVar54) & UNK_014ead55) +
                           auVar83[5];
              pcVar35[6] = (-((byte)((UNK_014e4176 < bVar56) * UNK_014e4176 |
                                    (UNK_014e4176 >= bVar56) * bVar56) == bVar56) & UNK_014ead56) +
                           auVar83[6];
              pcVar35[7] = (-((byte)((UNK_014e4177 < bVar58) * UNK_014e4177 |
                                    (UNK_014e4177 >= bVar58) * bVar58) == bVar58) & UNK_014ead57) +
                           auVar83[7];
              pcVar35[8] = (-((byte)((UNK_014e4178 < bVar59) * UNK_014e4178 |
                                    (UNK_014e4178 >= bVar59) * bVar59) == bVar59) & UNK_014ead58) +
                           auVar83[8];
              pcVar35[9] = (-((byte)((UNK_014e4179 < bVar60) * UNK_014e4179 |
                                    (UNK_014e4179 >= bVar60) * bVar60) == bVar60) & UNK_014ead59) +
                           auVar83[9];
              pcVar35[10] = (-((byte)((UNK_014e417a < bVar61) * UNK_014e417a |
                                     (UNK_014e417a >= bVar61) * bVar61) == bVar61) & UNK_014ead5a) +
                            auVar83[10];
              pcVar35[0xb] = (-((byte)((UNK_014e417b < bVar62) * UNK_014e417b |
                                      (UNK_014e417b >= bVar62) * bVar62) == bVar62) & UNK_014ead5b)
                             + auVar83[0xb];
              pcVar35[0xc] = (-((byte)((UNK_014e417c < bVar63) * UNK_014e417c |
                                      (UNK_014e417c >= bVar63) * bVar63) == bVar63) & UNK_014ead5c)
                             + auVar83[0xc];
              pcVar35[0xd] = (-((byte)((UNK_014e417d < bVar64) * UNK_014e417d |
                                      (UNK_014e417d >= bVar64) * bVar64) == bVar64) & UNK_014ead5d)
                             + auVar83[0xd];
              pcVar35[0xe] = (-((byte)((UNK_014e417e < bVar65) * UNK_014e417e |
                                      (UNK_014e417e >= bVar65) * bVar65) == bVar65) & UNK_014ead5e)
                             + auVar83[0xe];
              pcVar35[0xf] = (-((byte)((UNK_014e417f < bVar66) * UNK_014e417f |
                                      (UNK_014e417f >= bVar66) * bVar66) == bVar66) & UNK_014ead5f)
                             + auVar83[0xf];
              pcVar35 = pcVar27 + uVar38 + 0x10;
              *pcVar35 = (-((byte)((DAT_014e4170 < bVar67) * DAT_014e4170 |
                                  (DAT_014e4170 >= bVar67) * bVar67) == bVar67) & DAT_014ead50) +
                         cVar17;
              pcVar35[1] = (-((byte)((UNK_014e4171 < bVar68) * UNK_014e4171 |
                                    (UNK_014e4171 >= bVar68) * bVar68) == bVar68) & UNK_014ead51) +
                           cVar47;
              pcVar35[2] = (-((byte)((UNK_014e4172 < bVar69) * UNK_014e4172 |
                                    (UNK_014e4172 >= bVar69) * bVar69) == bVar69) & UNK_014ead52) +
                           cVar49;
              pcVar35[3] = (-((byte)((UNK_014e4173 < bVar70) * UNK_014e4173 |
                                    (UNK_014e4173 >= bVar70) * bVar70) == bVar70) & UNK_014ead53) +
                           cVar51;
              pcVar35[4] = (-((byte)((UNK_014e4174 < bVar71) * UNK_014e4174 |
                                    (UNK_014e4174 >= bVar71) * bVar71) == bVar71) & UNK_014ead54) +
                           cVar53;
              pcVar35[5] = (-((byte)((UNK_014e4175 < bVar72) * UNK_014e4175 |
                                    (UNK_014e4175 >= bVar72) * bVar72) == bVar72) & UNK_014ead55) +
                           cVar55;
              pcVar35[6] = (-((byte)((UNK_014e4176 < bVar73) * UNK_014e4176 |
                                    (UNK_014e4176 >= bVar73) * bVar73) == bVar73) & UNK_014ead56) +
                           cVar57;
              pcVar35[7] = (-((byte)((UNK_014e4177 < bVar74) * UNK_014e4177 |
                                    (UNK_014e4177 >= bVar74) * bVar74) == bVar74) & UNK_014ead57) +
                           cVar3;
              pcVar35[8] = (-((byte)((UNK_014e4178 < bVar75) * UNK_014e4178 |
                                    (UNK_014e4178 >= bVar75) * bVar75) == bVar75) & UNK_014ead58) +
                           cVar4;
              pcVar35[9] = (-((byte)((UNK_014e4179 < bVar76) * UNK_014e4179 |
                                    (UNK_014e4179 >= bVar76) * bVar76) == bVar76) & UNK_014ead59) +
                           cVar5;
              pcVar35[10] = (-((byte)((UNK_014e417a < bVar77) * UNK_014e417a |
                                     (UNK_014e417a >= bVar77) * bVar77) == bVar77) & UNK_014ead5a) +
                            cVar6;
              pcVar35[0xb] = (-((byte)((UNK_014e417b < bVar78) * UNK_014e417b |
                                      (UNK_014e417b >= bVar78) * bVar78) == bVar78) & UNK_014ead5b)
                             + cVar7;
              pcVar35[0xc] = (-((byte)((UNK_014e417c < bVar79) * UNK_014e417c |
                                      (UNK_014e417c >= bVar79) * bVar79) == bVar79) & UNK_014ead5c)
                             + cVar8;
              pcVar35[0xd] = (-((byte)((UNK_014e417d < bVar80) * UNK_014e417d |
                                      (UNK_014e417d >= bVar80) * bVar80) == bVar80) & UNK_014ead5d)
                             + cVar9;
              pcVar35[0xe] = (-((byte)((UNK_014e417e < bVar81) * UNK_014e417e |
                                      (UNK_014e417e >= bVar81) * bVar81) == bVar81) & UNK_014ead5e)
                             + cVar10;
              pcVar35[0xf] = (-((byte)((UNK_014e417f < bVar82) * UNK_014e417f |
                                      (UNK_014e417f >= bVar82) * bVar82) == bVar82) & UNK_014ead5f)
                             + cVar11;
              uVar38 = uVar38 + 0x20;
            } while (uVar32 != uVar38);
            if (uVar23 != uVar32) {
              if ((uVar23 & 0x18) == 0) {
                pcVar35 = pcVar27 + uVar32;
                goto LAB_0d1f2350;
              }
              goto LAB_0d1f22e5;
            }
          }
          plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
        }
        _auStack_ab0 = pcVar29;
        if ((auStack_a18[0] & 1) != 0) {
          plStack_aa8 = (long *)auStack_a18._8_8_;
          _auStack_ab0 = uStack_a08;
        }
        lVar28 = func_0x0d6c97a0(lStack_a68,auStack_ab0);
        if (lVar28 == lVar1) {
LAB_0d1f2480:
          plVar25 = *(long **)(lVar19 + 0x50);
          if (plVar25 != (long *)0x0) {
            (**(code **)(*plVar25 + 0x30))(plVar25,lVar19,lStack_a48,lStack_a50);
          }
        }
        else {
          if ((ulong)*(uint *)(lVar28 + 0x60) == 0xffffffff) goto LAB_0d1f56d9;
          puStack_a98 = &uStack_a59;
          lVar28 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar28 + 0x60) * 8))
                             (&puStack_a98,lVar28 + 0x38);
          if (lVar28 == 0) goto LAB_0d1f2480;
          cVar17 = *(char *)(lVar19 + 1);
          _auStack_ab0 = uStack_a08;
          plStack_aa8 = (long *)auStack_a18._8_8_;
          if (cVar17 == '\x01') {
            if ((auStack_a18[0] & 1) == 0) {
              _auStack_ab0 = pcVar29;
              plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
            }
            lVar28 = func_0x0d6c97a0(lVar20,auStack_ab0);
            auVar83 = _auStack_ab0;
            if ((lVar28 == lVar1) || (*(int *)(lVar28 + 0x60) != 1)) {
              bVar43 = false;
            }
            else {
              bVar43 = *(char *)(lVar28 + 0x40) != '\0';
            }
            auStack_ab0[0] = bVar43;
            auVar12 = _auStack_ab0;
            plStack_aa8 = auVar83._8_8_;
            auStack_ab0 = auVar12._0_4_;
            uStack_aac = 1;
            func_0x0d1fe8b0(lVar19,auStack_ab0,0,0);
          }
          else if (cVar17 == '\x02') {
            if ((auStack_a18[0] & 1) == 0) {
              _auStack_ab0 = pcVar29;
              plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
            }
            lVar28 = func_0x0d6c97a0(lVar20,auStack_ab0);
            if ((lVar28 == lVar1) || (*(int *)(lVar28 + 0x60) != 3)) {
              auStack_ab0 = (undefined1  [4])0x0;
            }
            else {
              auStack_ab0 = *(undefined1 (*) [4])(lVar28 + 0x40);
            }
            uStack_aac = 2;
            func_0x0d1fe8b0(lVar19,auStack_ab0,0,0);
          }
          else if (cVar17 == '\x03') {
            if ((auStack_a18[0] & 1) == 0) {
              _auStack_ab0 = pcVar29;
              plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
            }
            lVar28 = func_0x0d6c97a0(lVar20,auStack_ab0);
            if ((lVar28 == lVar1) || (*(int *)(lVar28 + 0x60) != 5)) {
              auStack_ab0 = (undefined1  [4])0x0;
            }
            else {
              auStack_ab0 = *(undefined1 (*) [4])(lVar28 + 0x40);
            }
            uStack_aac = 3;
            func_0x0d1fe8b0(lVar19,auStack_ab0,0,0);
          }
        }
        if ((auStack_a18[0] & 1) != 0) {
          func_0x0412a280(uStack_a08,auStack_a18._0_8_ & 0xfffffffffffffffe);
        }
        lVar19 = lVar19 + 0xf0;
      } while (lVar19 != lVar30);
    }
  }
  else {
    lStack_a48 = lVar19;
    lVar19 = *(long *)(param_1 + 0xb0);
    lVar30 = *(long *)(param_1 + 0xb8);
    if (lVar19 != lVar30) goto LAB_0d1f2113;
  }
  auStack_a18._8_8_ = 0xe;
  auStack_a18._0_8_ = &UNK_01d971d9;
  lVar20 = func_0x0d6c97a0(lVar20,auStack_a18);
  if (lVar20 != lVar1) {
    if ((ulong)*(uint *)(lVar20 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar20 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar20 + 0x60) * 8))
                       (auStack_ab0,lVar20 + 0x38);
    if (lVar20 != 0) {
      auStack_a18._8_8_ = 0xe;
      auStack_a18._0_8_ = &UNK_01d971d9;
      lVar20 = func_0x0d6c97a0(lStack_a68,auStack_a18);
      if (lVar20 == lVar1) {
        lVar19 = 0;
        plVar25 = *(long **)(lStack_a58 + 200);
        if (plVar25 != (long *)(lStack_a58 + 0xd0)) goto LAB_0d1f270f;
      }
      else {
        lVar19 = 0;
        if (*(int *)(lVar20 + 0x60) == 10) {
          lVar19 = lVar20 + 0x38;
        }
        plVar25 = *(long **)(lStack_a58 + 200);
        if (plVar25 != (long *)(lStack_a58 + 0xd0)) {
LAB_0d1f270f:
          plVar42 = (long *)(lStack_a58 + 0xd0);
          lStack_a40 = lVar19 + 8;
          lVar19 = lVar19 + 0x10;
          uStack_a20 = lVar19;
          do {
            pcVar29 = auStack_a18 + 1;
            bVar43 = (*(byte *)(plVar25 + 0xc) & 1) != 0;
            lVar20 = (long)plVar25 + 0x61;
            if (bVar43) {
              lVar20 = plVar25[0xe];
            }
            uVar23 = (ulong)(*(byte *)(plVar25 + 0xc) >> 1);
            if (bVar43) {
              uVar23 = plVar25[0xd];
            }
            if (0xfffffffffffffff7 < uVar23) goto LAB_0d1f56cf;
            if (uVar23 < 0x17) {
              auStack_a18[0] = (char)uVar23 * '\x02';
              if (uVar23 != 0) goto LAB_0d1f27f2;
            }
            else {
              uVar32 = (uVar23 | 7) + 1;
              if ((uVar23 | 7) == 0x17) {
                uVar32 = 0x1a;
              }
              pcVar29 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32);
              if (pcVar29 == (char *)0x0) {
                func_0x0eec74c0(uVar32,0);
              }
              auStack_a18._8_8_ = uVar23;
              auStack_a18._0_8_ = uVar32 | 1;
              lVar19 = uStack_a20;
              uStack_a08 = pcVar29;
LAB_0d1f27f2:
              func_0x0eee2f00(pcVar29,lVar20,uVar23);
            }
            pcVar29[uVar23] = '\0';
            plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
            pcVar29 = auStack_a18 + 1;
            uVar23 = auStack_a18._8_8_;
            pcVar27 = uStack_a08;
            if ((auStack_a18[0] & 1) == 0) {
              uVar23 = (ulong)plStack_aa8;
              pcVar27 = pcVar29;
            }
            if (uVar23 != 0) {
              pcVar35 = pcVar27;
              if (uVar23 < 8) {
LAB_0d1f2950:
                do {
                  cVar17 = *pcVar35;
                  cVar47 = cVar17 + ' ';
                  if (0x19 < (byte)(cVar17 + 0xbfU)) {
                    cVar47 = cVar17;
                  }
                  *pcVar35 = cVar47;
                  pcVar35 = pcVar35 + 1;
                } while (pcVar35 != pcVar27 + uVar23);
              }
              else if (uVar23 < 0x20) {
                uVar32 = 0;
LAB_0d1f28e5:
                uVar38 = uVar23 & 0xfffffffffffffff8;
                pcVar35 = pcVar27 + uVar38;
                do {
                  uVar22 = *(undefined8 *)(pcVar27 + uVar32);
                  bVar45 = (char)uVar22 + DAT_014e9110;
                  cVar47 = (char)((ulong)uVar22 >> 8);
                  bVar46 = cVar47 + UNK_014e9111;
                  cVar49 = (char)((ulong)uVar22 >> 0x10);
                  bVar48 = cVar49 + UNK_014e9112;
                  cVar51 = (char)((ulong)uVar22 >> 0x18);
                  bVar50 = cVar51 + UNK_014e9113;
                  cVar53 = (char)((ulong)uVar22 >> 0x20);
                  bVar52 = cVar53 + UNK_014e9114;
                  cVar55 = (char)((ulong)uVar22 >> 0x28);
                  bVar54 = cVar55 + UNK_014e9115;
                  cVar57 = (char)((ulong)uVar22 >> 0x30);
                  cVar17 = (char)((ulong)uVar22 >> 0x38);
                  bVar56 = cVar57 + UNK_014e9116;
                  bVar58 = cVar17 + UNK_014e9117;
                  *(ulong *)(pcVar27 + uVar32) =
                       CONCAT17((~-((byte)((bVar58 < UNK_014e8cb7) * UNK_014e8cb7 |
                                          (bVar58 >= UNK_014e8cb7) * bVar58) == bVar58) &
                                UNK_014ea367) + cVar17,
                                CONCAT16((~-((byte)((bVar56 < UNK_014e8cb6) * UNK_014e8cb6 |
                                                   (bVar56 >= UNK_014e8cb6) * bVar56) == bVar56) &
                                         UNK_014ea366) + cVar57,
                                         CONCAT15((~-((byte)((bVar54 < UNK_014e8cb5) * UNK_014e8cb5
                                                            | (bVar54 >= UNK_014e8cb5) * bVar54) ==
                                                     bVar54) & UNK_014ea365) + cVar55,
                                                  CONCAT14((~-((byte)((bVar52 < UNK_014e8cb4) *
                                                                      UNK_014e8cb4 |
                                                                     (bVar52 >= UNK_014e8cb4) *
                                                                     bVar52) == bVar52) &
                                                           UNK_014ea364) + cVar53,
                                                           CONCAT13((~-((byte)((bVar50 < 
                                                  UNK_014e8cb3) * UNK_014e8cb3 |
                                                  (bVar50 >= UNK_014e8cb3) * bVar50) == bVar50) &
                                                  UNK_014ea363) + cVar51,
                                                  CONCAT12((~-((byte)((bVar48 < UNK_014e8cb2) *
                                                                      UNK_014e8cb2 |
                                                                     (bVar48 >= UNK_014e8cb2) *
                                                                     bVar48) == bVar48) &
                                                           UNK_014ea362) + cVar49,
                                                           CONCAT11((~-((byte)((bVar46 < 
                                                  UNK_014e8cb1) * UNK_014e8cb1 |
                                                  (bVar46 >= UNK_014e8cb1) * bVar46) == bVar46) &
                                                  UNK_014ea361) + cVar47,
                                                  (~-((byte)((bVar45 < DAT_014e8cb0) * DAT_014e8cb0
                                                            | (bVar45 >= DAT_014e8cb0) * bVar45) ==
                                                     bVar45) & DAT_014ea360) + (char)uVar22)))))));
                  uVar32 = uVar32 + 8;
                } while (uVar38 != uVar32);
                if (uVar23 != uVar38) goto LAB_0d1f2950;
              }
              else {
                uVar32 = uVar23 & 0xffffffffffffffe0;
                uVar38 = 0;
                do {
                  auVar83 = *(undefined1 (*) [16])(pcVar27 + uVar38);
                  pcVar35 = pcVar27 + uVar38 + 0x10;
                  cVar17 = *pcVar35;
                  cVar47 = pcVar35[1];
                  cVar49 = pcVar35[2];
                  cVar51 = pcVar35[3];
                  cVar53 = pcVar35[4];
                  cVar55 = pcVar35[5];
                  cVar57 = pcVar35[6];
                  cVar3 = pcVar35[7];
                  cVar4 = pcVar35[8];
                  cVar5 = pcVar35[9];
                  cVar6 = pcVar35[10];
                  cVar7 = pcVar35[0xb];
                  cVar8 = pcVar35[0xc];
                  cVar9 = pcVar35[0xd];
                  cVar10 = pcVar35[0xe];
                  cVar11 = pcVar35[0xf];
                  bVar45 = auVar83[0] + DAT_014e86b0;
                  bVar46 = auVar83[1] + UNK_014e86b1;
                  bVar48 = auVar83[2] + UNK_014e86b2;
                  bVar50 = auVar83[3] + UNK_014e86b3;
                  bVar52 = auVar83[4] + UNK_014e86b4;
                  bVar54 = auVar83[5] + UNK_014e86b5;
                  bVar56 = auVar83[6] + UNK_014e86b6;
                  bVar58 = auVar83[7] + UNK_014e86b7;
                  bVar59 = auVar83[8] + UNK_014e86b8;
                  bVar60 = auVar83[9] + UNK_014e86b9;
                  bVar61 = auVar83[10] + UNK_014e86ba;
                  bVar62 = auVar83[0xb] + UNK_014e86bb;
                  bVar63 = auVar83[0xc] + UNK_014e86bc;
                  bVar64 = auVar83[0xd] + UNK_014e86bd;
                  bVar65 = auVar83[0xe] + UNK_014e86be;
                  bVar66 = auVar83[0xf] + UNK_014e86bf;
                  bVar67 = cVar17 + DAT_014e86b0;
                  bVar68 = cVar47 + UNK_014e86b1;
                  bVar69 = cVar49 + UNK_014e86b2;
                  bVar70 = cVar51 + UNK_014e86b3;
                  bVar71 = cVar53 + UNK_014e86b4;
                  bVar72 = cVar55 + UNK_014e86b5;
                  bVar73 = cVar57 + UNK_014e86b6;
                  bVar74 = cVar3 + UNK_014e86b7;
                  bVar75 = cVar4 + UNK_014e86b8;
                  bVar76 = cVar5 + UNK_014e86b9;
                  bVar77 = cVar6 + UNK_014e86ba;
                  bVar78 = cVar7 + UNK_014e86bb;
                  bVar79 = cVar8 + UNK_014e86bc;
                  bVar80 = cVar9 + UNK_014e86bd;
                  bVar81 = cVar10 + UNK_014e86be;
                  bVar82 = cVar11 + UNK_014e86bf;
                  pcVar35 = pcVar27 + uVar38;
                  *pcVar35 = (-((byte)((DAT_014e4170 < bVar45) * DAT_014e4170 |
                                      (DAT_014e4170 >= bVar45) * bVar45) == bVar45) & DAT_014ead50)
                             + auVar83[0];
                  pcVar35[1] = (-((byte)((UNK_014e4171 < bVar46) * UNK_014e4171 |
                                        (UNK_014e4171 >= bVar46) * bVar46) == bVar46) & UNK_014ead51
                               ) + auVar83[1];
                  pcVar35[2] = (-((byte)((UNK_014e4172 < bVar48) * UNK_014e4172 |
                                        (UNK_014e4172 >= bVar48) * bVar48) == bVar48) & UNK_014ead52
                               ) + auVar83[2];
                  pcVar35[3] = (-((byte)((UNK_014e4173 < bVar50) * UNK_014e4173 |
                                        (UNK_014e4173 >= bVar50) * bVar50) == bVar50) & UNK_014ead53
                               ) + auVar83[3];
                  pcVar35[4] = (-((byte)((UNK_014e4174 < bVar52) * UNK_014e4174 |
                                        (UNK_014e4174 >= bVar52) * bVar52) == bVar52) & UNK_014ead54
                               ) + auVar83[4];
                  pcVar35[5] = (-((byte)((UNK_014e4175 < bVar54) * UNK_014e4175 |
                                        (UNK_014e4175 >= bVar54) * bVar54) == bVar54) & UNK_014ead55
                               ) + auVar83[5];
                  pcVar35[6] = (-((byte)((UNK_014e4176 < bVar56) * UNK_014e4176 |
                                        (UNK_014e4176 >= bVar56) * bVar56) == bVar56) & UNK_014ead56
                               ) + auVar83[6];
                  pcVar35[7] = (-((byte)((UNK_014e4177 < bVar58) * UNK_014e4177 |
                                        (UNK_014e4177 >= bVar58) * bVar58) == bVar58) & UNK_014ead57
                               ) + auVar83[7];
                  pcVar35[8] = (-((byte)((UNK_014e4178 < bVar59) * UNK_014e4178 |
                                        (UNK_014e4178 >= bVar59) * bVar59) == bVar59) & UNK_014ead58
                               ) + auVar83[8];
                  pcVar35[9] = (-((byte)((UNK_014e4179 < bVar60) * UNK_014e4179 |
                                        (UNK_014e4179 >= bVar60) * bVar60) == bVar60) & UNK_014ead59
                               ) + auVar83[9];
                  pcVar35[10] = (-((byte)((UNK_014e417a < bVar61) * UNK_014e417a |
                                         (UNK_014e417a >= bVar61) * bVar61) == bVar61) &
                                UNK_014ead5a) + auVar83[10];
                  pcVar35[0xb] = (-((byte)((UNK_014e417b < bVar62) * UNK_014e417b |
                                          (UNK_014e417b >= bVar62) * bVar62) == bVar62) &
                                 UNK_014ead5b) + auVar83[0xb];
                  pcVar35[0xc] = (-((byte)((UNK_014e417c < bVar63) * UNK_014e417c |
                                          (UNK_014e417c >= bVar63) * bVar63) == bVar63) &
                                 UNK_014ead5c) + auVar83[0xc];
                  pcVar35[0xd] = (-((byte)((UNK_014e417d < bVar64) * UNK_014e417d |
                                          (UNK_014e417d >= bVar64) * bVar64) == bVar64) &
                                 UNK_014ead5d) + auVar83[0xd];
                  pcVar35[0xe] = (-((byte)((UNK_014e417e < bVar65) * UNK_014e417e |
                                          (UNK_014e417e >= bVar65) * bVar65) == bVar65) &
                                 UNK_014ead5e) + auVar83[0xe];
                  pcVar35[0xf] = (-((byte)((UNK_014e417f < bVar66) * UNK_014e417f |
                                          (UNK_014e417f >= bVar66) * bVar66) == bVar66) &
                                 UNK_014ead5f) + auVar83[0xf];
                  pcVar35 = pcVar27 + uVar38 + 0x10;
                  *pcVar35 = (-((byte)((DAT_014e4170 < bVar67) * DAT_014e4170 |
                                      (DAT_014e4170 >= bVar67) * bVar67) == bVar67) & DAT_014ead50)
                             + cVar17;
                  pcVar35[1] = (-((byte)((UNK_014e4171 < bVar68) * UNK_014e4171 |
                                        (UNK_014e4171 >= bVar68) * bVar68) == bVar68) & UNK_014ead51
                               ) + cVar47;
                  pcVar35[2] = (-((byte)((UNK_014e4172 < bVar69) * UNK_014e4172 |
                                        (UNK_014e4172 >= bVar69) * bVar69) == bVar69) & UNK_014ead52
                               ) + cVar49;
                  pcVar35[3] = (-((byte)((UNK_014e4173 < bVar70) * UNK_014e4173 |
                                        (UNK_014e4173 >= bVar70) * bVar70) == bVar70) & UNK_014ead53
                               ) + cVar51;
                  pcVar35[4] = (-((byte)((UNK_014e4174 < bVar71) * UNK_014e4174 |
                                        (UNK_014e4174 >= bVar71) * bVar71) == bVar71) & UNK_014ead54
                               ) + cVar53;
                  pcVar35[5] = (-((byte)((UNK_014e4175 < bVar72) * UNK_014e4175 |
                                        (UNK_014e4175 >= bVar72) * bVar72) == bVar72) & UNK_014ead55
                               ) + cVar55;
                  pcVar35[6] = (-((byte)((UNK_014e4176 < bVar73) * UNK_014e4176 |
                                        (UNK_014e4176 >= bVar73) * bVar73) == bVar73) & UNK_014ead56
                               ) + cVar57;
                  pcVar35[7] = (-((byte)((UNK_014e4177 < bVar74) * UNK_014e4177 |
                                        (UNK_014e4177 >= bVar74) * bVar74) == bVar74) & UNK_014ead57
                               ) + cVar3;
                  pcVar35[8] = (-((byte)((UNK_014e4178 < bVar75) * UNK_014e4178 |
                                        (UNK_014e4178 >= bVar75) * bVar75) == bVar75) & UNK_014ead58
                               ) + cVar4;
                  pcVar35[9] = (-((byte)((UNK_014e4179 < bVar76) * UNK_014e4179 |
                                        (UNK_014e4179 >= bVar76) * bVar76) == bVar76) & UNK_014ead59
                               ) + cVar5;
                  pcVar35[10] = (-((byte)((UNK_014e417a < bVar77) * UNK_014e417a |
                                         (UNK_014e417a >= bVar77) * bVar77) == bVar77) &
                                UNK_014ead5a) + cVar6;
                  pcVar35[0xb] = (-((byte)((UNK_014e417b < bVar78) * UNK_014e417b |
                                          (UNK_014e417b >= bVar78) * bVar78) == bVar78) &
                                 UNK_014ead5b) + cVar7;
                  pcVar35[0xc] = (-((byte)((UNK_014e417c < bVar79) * UNK_014e417c |
                                          (UNK_014e417c >= bVar79) * bVar79) == bVar79) &
                                 UNK_014ead5c) + cVar8;
                  pcVar35[0xd] = (-((byte)((UNK_014e417d < bVar80) * UNK_014e417d |
                                          (UNK_014e417d >= bVar80) * bVar80) == bVar80) &
                                 UNK_014ead5d) + cVar9;
                  pcVar35[0xe] = (-((byte)((UNK_014e417e < bVar81) * UNK_014e417e |
                                          (UNK_014e417e >= bVar81) * bVar81) == bVar81) &
                                 UNK_014ead5e) + cVar10;
                  pcVar35[0xf] = (-((byte)((UNK_014e417f < bVar82) * UNK_014e417f |
                                          (UNK_014e417f >= bVar82) * bVar82) == bVar82) &
                                 UNK_014ead5f) + cVar11;
                  uVar38 = uVar38 + 0x20;
                } while (uVar32 != uVar38);
                if (uVar23 != uVar32) {
                  if ((uVar23 & 0x18) == 0) {
                    pcVar35 = pcVar27 + uVar32;
                    goto LAB_0d1f2950;
                  }
                  goto LAB_0d1f28e5;
                }
              }
              plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
            }
            _auStack_ab0 = pcVar29;
            if ((auStack_a18[0] & 1) != 0) {
              plStack_aa8 = (long *)auStack_a18._8_8_;
              _auStack_ab0 = uStack_a08;
            }
            lVar20 = func_0x0d6c97a0(lStack_a40,auStack_ab0);
            plVar16 = plVar25 + 10;
            if (lVar20 == lVar19) {
LAB_0d1f2a90:
              plVar41 = (long *)plVar25[0x14];
              if (plVar41 != (long *)0x0) {
                (**(code **)(*plVar41 + 0x30))(plVar41,plVar16,lStack_a48,lStack_a50);
              }
            }
            else {
              if ((ulong)*(uint *)(lVar20 + 0x60) == 0xffffffff) goto LAB_0d1f56e3;
              puStack_a98 = &uStack_a59;
              lVar20 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar20 + 0x60) * 8))
                                 (&puStack_a98,lVar20 + 0x38);
              if (lVar20 == 0) goto LAB_0d1f2a90;
              cVar17 = *(char *)((long)plVar25 + 0x51);
              _auStack_ab0 = uStack_a08;
              plStack_aa8 = (long *)auStack_a18._8_8_;
              if (cVar17 == '\x01') {
                if ((auStack_a18[0] & 1) == 0) {
                  _auStack_ab0 = pcVar29;
                  plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
                }
                lVar20 = func_0x0d6c97a0(lStack_a40,auStack_ab0);
                auVar83 = _auStack_ab0;
                if ((lVar20 == lVar19) || (*(int *)(lVar20 + 0x60) != 1)) {
                  bVar43 = false;
                }
                else {
                  bVar43 = *(char *)(lVar20 + 0x40) != '\0';
                }
                auStack_ab0[0] = bVar43;
                auVar12 = _auStack_ab0;
                plStack_aa8 = auVar83._8_8_;
                auStack_ab0 = auVar12._0_4_;
                uStack_aac = 1;
                func_0x0d1fe8b0(plVar16,auStack_ab0,0,0);
              }
              else if (cVar17 == '\x02') {
                if ((auStack_a18[0] & 1) == 0) {
                  _auStack_ab0 = pcVar29;
                  plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
                }
                lVar20 = func_0x0d6c97a0(lStack_a40,auStack_ab0);
                if ((lVar20 == lVar19) || (*(int *)(lVar20 + 0x60) != 3)) {
                  auStack_ab0 = (undefined1  [4])0x0;
                }
                else {
                  auStack_ab0 = *(undefined1 (*) [4])(lVar20 + 0x40);
                }
                uStack_aac = 2;
                func_0x0d1fe8b0(plVar16,auStack_ab0,0,0);
              }
              else if (cVar17 == '\x03') {
                if ((auStack_a18[0] & 1) == 0) {
                  _auStack_ab0 = pcVar29;
                  plStack_aa8 = (long *)(ulong)(auStack_a18[0] >> 1);
                }
                lVar20 = func_0x0d6c97a0(lStack_a40,auStack_ab0);
                if ((lVar20 == lVar19) || (*(int *)(lVar20 + 0x60) != 5)) {
                  auStack_ab0 = (undefined1  [4])0x0;
                }
                else {
                  auStack_ab0 = *(undefined1 (*) [4])(lVar20 + 0x40);
                }
                uStack_aac = 3;
                func_0x0d1fe8b0(plVar16,auStack_ab0,0,0);
              }
            }
            if ((auStack_a18[0] & 1) != 0) {
              func_0x0412a280(uStack_a08,auStack_a18._0_8_ & 0xfffffffffffffffe);
            }
            plVar16 = (long *)plVar25[1];
            plVar41 = plVar25;
            if ((long *)plVar25[1] == (long *)0x0) {
              do {
                plVar25 = (long *)plVar41[2];
                bVar43 = plVar41 != (long *)*plVar25;
                plVar41 = plVar25;
              } while (bVar43);
            }
            else {
              do {
                plVar25 = plVar16;
                plVar16 = (long *)*plVar25;
              } while ((long *)*plVar25 != (long *)0x0);
            }
          } while (plVar25 != plVar42);
        }
      }
    }
  }
  lVar20 = lStack_a68;
  auStack_a18._0_8_ = _DAT_0f71d578;
  auStack_a18._8_8_ = _DAT_0f71d570;
  if ((DAT_0f71d568 & 1) == 0) {
    auStack_a18._0_8_ = 0xf71d569;
    auStack_a18._8_8_ = (ulong)(DAT_0f71d568 >> 1);
  }
  lVar30 = func_0x0d6c97a0(lStack_a68,auStack_a18);
  lVar19 = lStack_a58;
  if (lVar30 != lVar1) {
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_0d1f2d17;
    plStack_aa8 = (long *)(ulong)(DAT_0f71d568 >> 1);
    _auStack_ab0 = (char *)0xf71d569;
    if ((DAT_0f71d568 & 1) != 0) {
      plStack_aa8 = (long *)_DAT_0f71d570;
      _auStack_ab0 = (char *)_DAT_0f71d578;
    }
    lVar30 = func_0x0d6c97a0(lVar20,auStack_ab0);
    if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 3)) {
      uVar44 = 0;
    }
    else {
      uVar44 = *(undefined1 *)(lVar30 + 0x40);
    }
    auStack_a18[0] = uVar44;
    auStack_a00._0_4_ = 9;
    _auStack_ab0 = (char *)0xf71d560;
    lVar30 = func_0x09be9cc0(lVar19 + 0x4f0,0xf71d560,&UNK_01563a4f,auStack_ab0,&puStack_a98);
    if ((ulong)*(uint *)(lVar30 + 0x50) == 0xffffffff) {
      if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f2fab;
    }
    else {
      if (auStack_a00._0_4_ == 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar30 + 0x50) * 8))(auStack_ab0);
        *(undefined4 *)(lVar30 + 0x50) = 0xffffffff;
      }
      else {
LAB_0d1f2fab:
        _auStack_ab0 = (char *)(lVar30 + 0x38);
        (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                  (auStack_ab0,lVar30 + 0x38,auStack_a18);
      }
      if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
        (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(auStack_ab0,auStack_a18);
      }
    }
LAB_0d1f2fef:
    auStack_a18._8_8_ = 0x10;
    auStack_a18._0_8_ = &UNK_014c0b56;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0x10;
        auStack_a18._0_8_ = &UNK_014c0b56;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 3)) {
          iVar18 = 0;
        }
        else {
          iVar18 = *(int *)(lVar30 + 0x40);
          if (iVar18 < 0) goto LAB_0d1f3141;
        }
        *(int *)(lVar19 + 0x300) = iVar18;
        auVar83 = func_0x0d212ce0(lVar19,0xd);
        if ((auVar83._8_8_ & 1) != 0) {
          func_0x0495d5f0(auVar83._0_8_);
        }
        lVar30 = 0;
        if (1 < (int)((ulong)(*(long *)(lVar19 + 0xb8) - *(long *)(lVar19 + 0xb0)) >> 4) *
                -0x11111111) {
          lVar30 = *(long *)(lVar19 + 0xb0) + 0xf0;
        }
        func_0x0d201b00(&plStack_a38,lVar19 + 0x98,lVar30,0x100000000,1,0,(undefined1  [16])0x0,0);
        plVar25 = plStack_a38;
        plStack_a38 = (long *)0x0;
        if (plVar25 != (long *)0x0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
LAB_0d1f3141:
    func_0x0bc26640(lVar19 + 0x170,lStack_a50);
    cVar17 = func_0x0bc2c820(lVar19 + 0x260,lStack_a50);
    if (cVar17 == '\0') {
      auStack_a18._8_8_ = 9;
      auStack_a18._0_8_ = &UNK_01c95d61;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if (lVar30 != lVar1) {
        if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
        _auStack_ab0 = (char *)&puStack_a98;
        lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                           (auStack_ab0,lVar30 + 0x38);
        if (lVar30 != 0) {
          auStack_a18._8_8_ = 9;
          auStack_a18._0_8_ = &UNK_01c95d61;
          lVar28 = func_0x0d6c97a0(lVar20,auStack_a18);
          lVar30 = 0;
          if (*(int *)(lVar28 + 0x60) == 10) {
            lVar30 = lVar28 + 0x38;
          }
          func_0x0bc2c820(lVar19 + 0x260,lVar30);
        }
      }
    }
    auStack_a18._8_8_ = 10;
    auStack_a18._0_8_ = &UNK_011a0ab3;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 10;
        auStack_a18._0_8_ = &UNK_011a0ab3;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 3)) {
          iVar18 = 0;
        }
        else {
          iVar18 = 2;
          if (*(int *)(lVar30 + 0x40) != 4) {
            iVar18 = *(int *)(lVar30 + 0x40);
          }
        }
        *(int *)(lVar19 + 0x370) = iVar18;
      }
    }
    auStack_a18._8_8_ = 10;
    auStack_a18._0_8_ = &UNK_011e49c1;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 10;
        auStack_a18._0_8_ = &UNK_011e49c1;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
          *(undefined1 *)(lVar19 + 0x375) = 0;
          lVar30 = *(long *)(lVar19 + 0x568);
        }
        else {
          *(bool *)(lVar19 + 0x375) = *(char *)(lVar30 + 0x40) != '\0';
          lVar30 = *(long *)(lVar19 + 0x568);
        }
        if ((lVar30 == 0) &&
           (cVar17 = func_0x0eeddcf0(&UNK_012831bd,&UNK_0133864a,0x599,&UNK_01388c61,&UNK_014dbf05),
           cVar17 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        auStack_a18[0] = *(undefined1 *)(lVar19 + 0x375);
        func_0x0620da70(*(undefined8 *)(lVar19 + 0x568),auStack_a18);
        auVar83 = func_0x0d212ce0(lVar19,4);
        if ((auVar83._8_8_ & 1) != 0) {
          func_0x0495d5f0(auVar83._0_8_);
        }
      }
    }
    auStack_a18._8_8_ = 0xd;
    auStack_a18._0_8_ = &UNK_01388c53;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0xd;
        auStack_a18._0_8_ = &UNK_01388c53;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
          bVar43 = false;
        }
        else {
          bVar43 = *(char *)(lVar30 + 0x40) != '\0';
        }
        *(bool *)(lVar19 + 0x376) = bVar43;
      }
    }
    auStack_a18._8_8_ = 0x1e;
    auStack_a18._0_8_ = &UNK_01219b65;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0x1e;
        auStack_a18._0_8_ = &UNK_01219b65;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
          bVar43 = false;
        }
        else {
          bVar43 = *(char *)(lVar30 + 0x40) != '\0';
        }
        *(bool *)(lVar19 + 0x43a) = bVar43;
      }
    }
    auStack_a18._8_8_ = 0x15;
    auStack_a18._0_8_ = &UNK_014dbeb5;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) {
LAB_0d1f3614:
      *(undefined1 *)(lVar19 + 0x43b) = 1;
      *(undefined1 *)(lVar19 + 0x43d) = 1;
      *(undefined4 *)(lVar19 + 0x440) = 3;
      *(undefined4 *)(lVar19 + 0x448) = 3;
      auStack_a18._8_8_ = 0xf;
      auStack_a18._0_8_ = &UNK_014dbecb;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if (lVar30 != lVar1) {
        if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
        _auStack_ab0 = (char *)&puStack_a98;
        lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                           (auStack_ab0,lVar30 + 0x38);
        if (lVar30 != 0) {
          auStack_a18._0_8_ = &UNK_014dbecb;
          auStack_a18._8_8_ = 0xf;
          lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
          if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
            bVar43 = false;
          }
          else {
            bVar43 = *(char *)(lVar30 + 0x40) != '\0';
          }
          *(bool *)(lVar19 + 0x43c) = bVar43;
          auStack_a18._0_8_ = &UNK_011e49d9;
          auStack_a18._8_8_ = 0xc;
          lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
          if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
            bVar43 = false;
          }
          else {
            bVar43 = *(char *)(lVar30 + 0x40) != '\0';
          }
          *(bool *)(lVar19 + 0x43e) = bVar43;
          auStack_a18._0_8_ = &UNK_012e9c8d;
          auStack_a18._8_8_ = 0xc;
          lVar20 = func_0x0d6c97a0(lVar20,auStack_a18);
          if ((lVar20 == lVar1) || (*(int *)(lVar20 + 0x60) != 1)) {
            bVar43 = false;
          }
          else {
            bVar43 = *(char *)(lVar20 + 0x40) != '\0';
          }
          auStack_a18._8_8_ = 0x12;
          auStack_a18._0_8_ = &UNK_014248be;
          lVar20 = func_0x0d6c97a0(lStack_a68,auStack_a18);
          if (lVar20 == lVar1) {
LAB_0d1f39ab:
            if (bVar43) {
LAB_0d1f39a4:
              uVar40 = 3;
            }
            else {
LAB_0d1f39b5:
              uVar40 = 0;
            }
          }
          else {
            if ((ulong)*(uint *)(lVar20 + 0x60) == 0xffffffff) goto LAB_0d1f56ed;
            lVar20 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar20 + 0x60) * 8))
                               (auStack_ab0,lVar20 + 0x38);
            if (lVar20 == 0) goto LAB_0d1f39ab;
            auStack_a18._8_8_ = 0x12;
            auStack_a18._0_8_ = &UNK_014248be;
            lVar20 = func_0x0d6c97a0(lStack_a68,auStack_a18);
            if ((lVar20 != lVar1) && (*(int *)(lVar20 + 0x60) == 1)) {
              if (*(char *)(lVar20 + 0x40) == '\0') goto LAB_0d1f39b5;
              goto LAB_0d1f39a4;
            }
            uVar40 = 0;
          }
          *(undefined4 *)(lVar19 + 0x440) = uVar40;
          *(undefined4 *)(lVar19 + 0x448) = 3;
          lVar20 = lStack_a68;
        }
      }
    }
    else {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_0d1f3614;
      auStack_a18._0_8_ = &UNK_014dbeb5;
      auStack_a18._8_8_ = 0x15;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
        bVar43 = false;
      }
      else {
        bVar43 = *(char *)(lVar30 + 0x40) != '\0';
      }
      *(bool *)(lVar19 + 0x43b) = bVar43;
      auStack_a18._0_8_ = &UNK_014dbecb;
      auStack_a18._8_8_ = 0xf;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
        bVar43 = false;
      }
      else {
        bVar43 = *(char *)(lVar30 + 0x40) != '\0';
      }
      *(bool *)(lVar19 + 0x43c) = bVar43;
      auStack_a18._0_8_ = &UNK_012cf161;
      auStack_a18._8_8_ = 0x12;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
        bVar43 = false;
      }
      else {
        bVar43 = *(char *)(lVar30 + 0x40) != '\0';
      }
      *(bool *)(lVar19 + 0x43d) = bVar43;
      auStack_a18._0_8_ = &UNK_011e49d9;
      auStack_a18._8_8_ = 0xc;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
        bVar43 = false;
      }
      else {
        bVar43 = *(char *)(lVar30 + 0x40) != '\0';
      }
      *(bool *)(lVar19 + 0x43e) = bVar43;
      auStack_a18._0_8_ = &UNK_014248be;
      auStack_a18._8_8_ = 0x12;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 3)) {
        uVar40 = 0;
      }
      else {
        uVar40 = *(undefined4 *)(lVar30 + 0x40);
      }
      *(undefined4 *)(lVar19 + 0x440) = uVar40;
      auStack_a18._8_8_ = 0x17;
      auStack_a18._0_8_ = &UNK_014c0b28;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 3)) {
        *(undefined4 *)(lVar19 + 0x448) = 0;
      }
      else {
        *(undefined4 *)(lVar19 + 0x448) = *(undefined4 *)(lVar30 + 0x40);
      }
    }
    auStack_a18._8_8_ = 0xf;
    auStack_a18._0_8_ = &UNK_01200435;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f3a74;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f3a74:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0xf;
      auStack_a18._0_8_ = &UNK_01200435;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f3a74;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x451) = bVar43;
    auStack_a18._8_8_ = 0xd;
    auStack_a18._0_8_ = &UNK_01302314;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) {
LAB_0d1f3b1f:
      uVar44 = *(undefined1 *)(lVar19 + 0x451);
    }
    else {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_0d1f3b1f;
      auStack_a18._8_8_ = 0xd;
      auStack_a18._0_8_ = &UNK_01302314;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
        uVar44 = 0;
      }
      else {
        uVar44 = *(char *)(lVar30 + 0x40) != '\0';
      }
    }
    *(undefined1 *)(lVar19 + 0x450) = uVar44;
    auStack_a18._8_8_ = 0x14;
    auStack_a18._0_8_ = &UNK_0131d714;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f3bd4;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f3bd4:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x14;
      auStack_a18._0_8_ = &UNK_0131d714;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f3bd4;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x452) = bVar43;
    auStack_a18._8_8_ = 0x15;
    auStack_a18._0_8_ = &UNK_014c0b40;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f3c7f;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f3c7f:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x15;
      auStack_a18._0_8_ = &UNK_014c0b40;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f3c7f;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x453) = bVar43;
    auStack_a18._8_8_ = 0x15;
    auStack_a18._0_8_ = &UNK_013d790c;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f3d2a;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f3d2a:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x15;
      auStack_a18._0_8_ = &UNK_013d790c;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f3d2a;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x454) = bVar43;
    auStack_a18._8_8_ = 0x14;
    auStack_a18._0_8_ = &UNK_0147118b;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f3dd5;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f3dd5:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x14;
      auStack_a18._0_8_ = &UNK_0147118b;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f3dd5;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x455) = bVar43;
    auStack_a18._8_8_ = 0x13;
    auStack_a18._0_8_ = &UNK_0148c013;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f3e80;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f3e80:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x13;
      auStack_a18._0_8_ = &UNK_0148c013;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f3e80;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x456) = bVar43;
    auStack_a18._8_8_ = 0xc;
    auStack_a18._0_8_ = &UNK_0135325f;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0xc;
        auStack_a18._0_8_ = &UNK_0135325f;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if (lVar30 == lVar1) {
          lVar28 = 0;
        }
        else {
          lVar28 = 0;
          if (*(int *)(lVar30 + 0x60) == 8) {
            lVar28 = lVar30 + 0x38;
          }
        }
        puVar37 = (undefined *)(lVar28 + 8);
        if (lVar28 == 0) {
          puVar37 = &UNK_01e79d90;
        }
        func_0x0d208fa0(lVar19,puVar37);
      }
    }
    auStack_a18._8_8_ = 0x12;
    auStack_a18._0_8_ = &UNK_011f101f;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0x12;
        auStack_a18._0_8_ = &UNK_011f101f;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if (lVar30 == lVar1) {
          lVar28 = 0;
        }
        else {
          lVar28 = 0;
          if (*(int *)(lVar30 + 0x60) == 8) {
            lVar28 = lVar30 + 0x38;
          }
        }
        pbVar21 = (byte *)(lVar28 + 8);
        if (lVar28 == 0) {
          pbVar21 = &UNK_01e79d90;
        }
        pbVar34 = (byte *)(lVar19 + 0x458);
        if (pbVar34 != pbVar21) {
          bVar45 = *pbVar21;
          if ((*pbVar34 & 1) == 0) {
            if ((bVar45 & 1) == 0) {
              *(undefined8 *)(lVar19 + 0x468) = *(undefined8 *)(pbVar21 + 0x10);
              uVar22 = *(undefined8 *)(pbVar21 + 8);
              *(undefined8 *)pbVar34 = *(undefined8 *)pbVar21;
              *(undefined8 *)(lVar19 + 0x460) = uVar22;
            }
            else {
              func_0x04885070(pbVar34,*(undefined8 *)(pbVar21 + 0x10),*(undefined8 *)(pbVar21 + 8));
            }
          }
          else {
            bVar43 = (bVar45 & 1) != 0;
            pbVar36 = pbVar21 + 1;
            if (bVar43) {
              pbVar36 = *(byte **)(pbVar21 + 0x10);
            }
            uVar23 = (ulong)(bVar45 >> 1);
            if (bVar43) {
              uVar23 = *(ulong *)(pbVar21 + 8);
            }
            FUN_04885120(pbVar34,pbVar36,uVar23);
          }
        }
      }
    }
    pauVar24 = (undefined1 (*) [16])(lVar19 + 0x470);
    if (pauVar24 != (undefined1 (*) [16])&UNK_01e79d90) {
      if (((*pauVar24)[0] & 1) == 0) {
        *pauVar24 = (undefined1  [16])0x0;
        *(undefined8 *)(lVar19 + 0x480) = 0;
      }
      else {
        FUN_04885120(pauVar24,&UNK_01e79d91,0);
      }
    }
    auStack_a18._8_8_ = 0x12;
    auStack_a18._0_8_ = &UNK_011a0b13;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0x12;
        auStack_a18._0_8_ = &UNK_011a0b13;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if (lVar30 == lVar1) {
          lVar28 = 0;
        }
        else {
          lVar28 = 0;
          if (*(int *)(lVar30 + 0x60) == 8) {
            lVar28 = lVar30 + 0x38;
          }
        }
        pauVar31 = (undefined1 (*) [16])(lVar28 + 8);
        if (lVar28 == 0) {
          pauVar31 = (undefined1 (*) [16])&UNK_01e79d90;
        }
        if (pauVar24 != pauVar31) {
          bVar45 = (*pauVar31)[0];
          if (((*pauVar24)[0] & 1) == 0) {
            if ((bVar45 & 1) == 0) {
              *(undefined8 *)(lVar19 + 0x480) = *(undefined8 *)pauVar31[1];
              uVar22 = *(undefined8 *)(*pauVar31 + 8);
              *(undefined8 *)*pauVar24 = *(undefined8 *)*pauVar31;
              *(undefined8 *)(lVar19 + 0x478) = uVar22;
            }
            else {
              func_0x04885070(pauVar24,*(undefined8 *)pauVar31[1],*(undefined8 *)(*pauVar31 + 8));
            }
          }
          else {
            bVar43 = (bVar45 & 1) != 0;
            puVar37 = *pauVar31 + 1;
            if (bVar43) {
              puVar37 = *(undefined **)pauVar31[1];
            }
            uVar23 = (ulong)(bVar45 >> 1);
            if (bVar43) {
              uVar23 = *(ulong *)(*pauVar31 + 8);
            }
            FUN_04885120(pauVar24,puVar37,uVar23);
          }
        }
      }
    }
    pauVar24 = (undefined1 (*) [16])(lVar19 + 0x488);
    if (pauVar24 != (undefined1 (*) [16])&UNK_01e79d90) {
      if (((*pauVar24)[0] & 1) == 0) {
        *pauVar24 = (undefined1  [16])0x0;
        *(undefined8 *)(lVar19 + 0x498) = 0;
      }
      else {
        FUN_04885120(pauVar24,&UNK_01e79d91,0);
      }
    }
    if ((*(byte *)(lVar19 + 0x470) & 1) == 0) {
      if (*(byte *)(lVar19 + 0x470) >> 1 != 0) goto LAB_0d1f421e;
    }
    else if (*(long *)(lVar19 + 0x478) != 0) {
LAB_0d1f421e:
      auStack_a18._8_8_ = 0x17;
      auStack_a18._0_8_ = &UNK_014dbedb;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if (lVar30 != lVar1) {
        if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
        _auStack_ab0 = (char *)&puStack_a98;
        lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                           (auStack_ab0,lVar30 + 0x38);
        if (lVar30 != 0) {
          plStack_aa8 = (long *)0x17;
          _auStack_ab0 = &UNK_014dbedb;
          lVar20 = func_0x0d6c97a0(lVar20,auStack_ab0);
          if (lVar20 == lVar1) {
            lVar30 = 0;
          }
          else {
            lVar30 = 0;
            if (*(int *)(lVar20 + 0x60) == 8) {
              lVar30 = lVar20 + 0x38;
            }
          }
          pauVar31 = (undefined1 (*) [16])(lVar30 + 8);
          if (lVar30 == 0) {
            pauVar31 = (undefined1 (*) [16])&UNK_01e79d90;
          }
          if (((*pauVar31)[0] & 1) == 0) {
            uStack_a08 = *(char **)pauVar31[1];
            auStack_a18 = *pauVar31;
          }
          else {
            func_0x0412e5e0(auStack_a18,*(undefined8 *)pauVar31[1],*(undefined8 *)(*pauVar31 + 8));
          }
          pcVar27 = uStack_a08;
          bVar45 = auStack_a18[0];
          uVar22 = auStack_a18._8_8_;
          uVar23 = (ulong)(auStack_a18[0] >> 1);
          pcVar29 = auStack_a18 + 1;
          if ((auStack_a18[0] & 1) != 0) {
            uVar23 = auStack_a18._8_8_;
            pcVar29 = uStack_a08;
          }
          cVar17 = func_0x0eedb280(pcVar29,uVar23);
          if ((pauVar24 != &auStack_a18) && (cVar17 != '\0')) {
            if (((*pauVar24)[0] & 1) == 0) {
              if ((bVar45 & 1) == 0) {
                *(char **)(lVar19 + 0x498) = uStack_a08;
                *(undefined8 *)*pauVar24 = auStack_a18._0_8_;
                *(undefined8 *)(lVar19 + 0x490) = auStack_a18._8_8_;
              }
              else {
                func_0x04885070(pauVar24,pcVar27,uVar22);
              }
            }
            else {
              FUN_04885120(pauVar24,pcVar29,uVar23);
            }
          }
          lVar19 = lStack_a58;
          lVar20 = lStack_a68;
          if ((auStack_a18[0] & 1) != 0) {
            func_0x0412a280(uStack_a08,auStack_a18._0_8_ & 0xfffffffffffffffe);
            lVar20 = lStack_a68;
          }
        }
      }
    }
    pauVar24 = (undefined1 (*) [16])(lVar19 + 0x4a0);
    if (pauVar24 != (undefined1 (*) [16])&UNK_01e79d90) {
      if (((*pauVar24)[0] & 1) == 0) {
        *pauVar24 = (undefined1  [16])0x0;
        *(undefined8 *)(lVar19 + 0x4b0) = 0;
      }
      else {
        FUN_04885120(pauVar24,&UNK_01e79d91,0);
      }
    }
    auStack_a18._8_8_ = 0x13;
    auStack_a18._0_8_ = &UNK_0148c027;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        plStack_aa8 = (long *)0x13;
        _auStack_ab0 = &UNK_0148c027;
        lVar20 = func_0x0d6c97a0(lVar20,auStack_ab0);
        if (lVar20 == lVar1) {
          lVar30 = 0;
        }
        else {
          lVar30 = 0;
          if (*(int *)(lVar20 + 0x60) == 8) {
            lVar30 = lVar20 + 0x38;
          }
        }
        pauVar31 = (undefined1 (*) [16])(lVar30 + 8);
        if (lVar30 == 0) {
          pauVar31 = (undefined1 (*) [16])&UNK_01e79d90;
        }
        if (((*pauVar31)[0] & 1) == 0) {
          uStack_a08 = *(char **)pauVar31[1];
          auStack_a18 = *pauVar31;
        }
        else {
          func_0x0412e5e0(auStack_a18,*(undefined8 *)pauVar31[1],*(undefined8 *)(*pauVar31 + 8));
        }
        pcVar27 = uStack_a08;
        bVar45 = auStack_a18[0];
        uVar22 = auStack_a18._8_8_;
        uVar23 = (ulong)(auStack_a18[0] >> 1);
        pcVar29 = auStack_a18 + 1;
        if ((auStack_a18[0] & 1) != 0) {
          uVar23 = auStack_a18._8_8_;
          pcVar29 = uStack_a08;
        }
        cVar17 = func_0x0eedb280(pcVar29,uVar23);
        if ((pauVar24 != &auStack_a18) && (cVar17 != '\0')) {
          if (((*pauVar24)[0] & 1) == 0) {
            if ((bVar45 & 1) == 0) {
              *(char **)(lVar19 + 0x4b0) = uStack_a08;
              *(undefined8 *)*pauVar24 = auStack_a18._0_8_;
              *(undefined8 *)(lVar19 + 0x4a8) = auStack_a18._8_8_;
            }
            else {
              func_0x04885070(pauVar24,pcVar27,uVar22);
            }
          }
          else {
            FUN_04885120(pauVar24,pcVar29,uVar23);
          }
        }
        lVar19 = lStack_a58;
        lVar20 = lStack_a68;
        if ((auStack_a18[0] & 1) != 0) {
          func_0x0412a280(uStack_a08,auStack_a18._0_8_ & 0xfffffffffffffffe);
          lVar20 = lStack_a68;
        }
      }
    }
    auStack_a18._0_8_ = _DAT_0f71d640;
    auStack_a18._8_8_ = _DAT_0f71d638;
    if ((DAT_0f71d630 & 1) == 0) {
      auStack_a18._0_8_ = 0xf71d631;
      auStack_a18._8_8_ = (ulong)(DAT_0f71d630 >> 1);
    }
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar30 != lVar1) && (*(int *)(lVar30 + 0x60) == 10)) {
      plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar25 == (long *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      *plVar25 = (long)&UNK_0f47e0b0;
      pauVar24 = (undefined1 (*) [16])(plVar25 + 2);
      *(undefined1 (*) [16])(plVar25 + 2) = (undefined1  [16])0x0;
      plVar25[1] = (long)pauVar24;
      func_0x0d6bd5f0(plVar25,lVar30 + 0x38);
      puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar26 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      lVar19 = lStack_a58;
      *puVar26 = &UNK_0f47e0b0;
      puVar26[1] = plVar25[1];
      lVar30 = plVar25[2];
      puVar26[2] = lVar30;
      lVar28 = plVar25[3];
      puVar26[3] = lVar28;
      if (lVar28 == 0) {
        puVar26[1] = puVar26 + 2;
      }
      else {
        *(undefined8 **)(lVar30 + 0x10) = puVar26 + 2;
        plVar25[1] = (long)pauVar24;
        *pauVar24 = (undefined1  [16])0x0;
      }
      auStack_a18._0_8_ = puVar26;
      auStack_a00._0_4_ = 8;
      _auStack_ab0 = (char *)0xf71d628;
      lVar30 = func_0x09be9cc0(lStack_a58 + 0x4f0,0xf71d628,&UNK_01563a4f,auStack_ab0,&puStack_a98);
      if ((ulong)*(uint *)(lVar30 + 0x50) == 0xffffffff) {
        if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f4755;
      }
      else {
        if (auStack_a00._0_4_ == 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar30 + 0x50) * 8))(auStack_ab0);
          *(undefined4 *)(lVar30 + 0x50) = 0xffffffff;
        }
        else {
LAB_0d1f4755:
          _auStack_ab0 = (char *)(lVar30 + 0x38);
          (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                    (auStack_ab0,lVar30 + 0x38,auStack_a18);
        }
        if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
          (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(auStack_ab0,auStack_a18)
          ;
        }
      }
      auStack_a00._0_4_ = 0xffffffff;
      (**(code **)(*plVar25 + 8))(plVar25);
    }
    auStack_a18._0_8_ = _DAT_0f71d640;
    auStack_a18._8_8_ = _DAT_0f71d638;
    if ((DAT_0f71d630 & 1) == 0) {
      auStack_a18._0_8_ = 0xf71d631;
      auStack_a18._8_8_ = (ulong)(DAT_0f71d630 >> 1);
    }
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      plVar25 = (long *)(**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                                  (auStack_ab0,lVar30 + 0x38);
      if ((plVar25 != (long *)0x0) &&
         (cVar17 = (**(code **)(*plVar25 + 0x30))(plVar25), cVar17 == '\n')) {
        auStack_a18._8_8_ = (ulong)(DAT_0f71d630 >> 1);
        auStack_a18._0_8_ = 0xf71d631;
        if ((DAT_0f71d630 & 1) != 0) {
          auStack_a18._8_8_ = _DAT_0f71d638;
          auStack_a18._0_8_ = _DAT_0f71d640;
        }
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if (lVar30 == lVar1) {
          lVar28 = 0;
        }
        else {
          lVar28 = 0;
          if (*(int *)(lVar30 + 0x60) == 10) {
            lVar28 = lVar30 + 0x38;
          }
        }
        plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar25 == (long *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *plVar25 = (long)&UNK_0f47e0b0;
        pauVar24 = (undefined1 (*) [16])(plVar25 + 2);
        *(undefined1 (*) [16])(plVar25 + 2) = (undefined1  [16])0x0;
        plVar25[1] = (long)pauVar24;
        func_0x0d6bd5f0(plVar25,lVar28);
        puVar26 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (puVar26 == (undefined8 *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *puVar26 = &UNK_0f47e0b0;
        puVar26[1] = plVar25[1];
        lVar30 = plVar25[2];
        puVar26[2] = lVar30;
        lVar28 = plVar25[3];
        puVar26[3] = lVar28;
        if (lVar28 == 0) {
          puVar26[1] = puVar26 + 2;
        }
        else {
          *(undefined8 **)(lVar30 + 0x10) = puVar26 + 2;
          plVar25[1] = (long)pauVar24;
          *pauVar24 = (undefined1  [16])0x0;
        }
        auStack_a18._0_8_ = puVar26;
        auStack_a00._0_4_ = 8;
        _auStack_ab0 = (char *)0xf71d628;
        lVar30 = func_0x09be9cc0(lVar19 + 0x4f0,0xf71d628,&UNK_01563a4f,auStack_ab0,&puStack_a98);
        if ((ulong)*(uint *)(lVar30 + 0x50) == 0xffffffff) {
          if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f49c4;
        }
        else {
          if (auStack_a00._0_4_ == 0xffffffff) {
            (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar30 + 0x50) * 8))(auStack_ab0);
            *(undefined4 *)(lVar30 + 0x50) = 0xffffffff;
          }
          else {
LAB_0d1f49c4:
            _auStack_ab0 = (char *)(lVar30 + 0x38);
            (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                      (auStack_ab0,lVar30 + 0x38,auStack_a18);
          }
          if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
            (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))
                      (auStack_ab0,auStack_a18);
          }
        }
        auStack_a00._0_4_ = 0xffffffff;
        (**(code **)(*plVar25 + 8))(plVar25);
      }
    }
    auStack_a18._8_8_ = 0x13;
    auStack_a18._0_8_ = &UNK_013a379c;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f4abe;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f4abe:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x13;
      auStack_a18._0_8_ = &UNK_013a379c;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f4abe;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x4b8) = bVar43;
    auStack_a18._8_8_ = 0x10;
    auStack_a18._0_8_ = &UNK_014582d1;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f4b69;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f4b69:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x10;
      auStack_a18._0_8_ = &UNK_014582d1;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f4b69;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x439) = bVar43;
    func_0x06cfd9a0(auStack_a18,0,0,0,0,0);
    *(undefined4 *)(lVar19 + 0x350) = (undefined4)uStack_a08;
    *(undefined8 *)(lVar19 + 0x340) = auStack_a18._0_8_;
    *(undefined8 *)(lVar19 + 0x348) = auStack_a18._8_8_;
    pbVar21 = (byte *)(lVar19 + 0x358);
    if ((*(byte *)(lVar19 + 0x358) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar19 + 0x368),
                      *(ulong *)(lVar19 + 0x358) & 0xfffffffffffffffe);
    }
    *(undefined8 *)(lVar19 + 0x368) = uStack_9f0;
    *(undefined1 (*) [8])pbVar21 = auStack_a00;
    *(undefined8 *)(lVar19 + 0x360) = uStack_9f8;
    auStack_a18._0_8_ = &UNK_0123465e;
    auStack_a18._8_8_ = 0x15;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if ((lVar30 != lVar1) && (*(int *)(lVar30 + 0x60) == 9)) {
      func_0x06cfe360(auStack_a18,lVar30 + 0x38);
      *(undefined4 *)(lVar19 + 0x350) = (undefined4)uStack_a08;
      *(undefined8 *)(lVar19 + 0x340) = auStack_a18._0_8_;
      *(undefined8 *)(lVar19 + 0x348) = auStack_a18._8_8_;
      if ((*pbVar21 & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar19 + 0x368),
                        *(ulong *)(lVar19 + 0x358) & 0xfffffffffffffffe);
      }
      *(undefined8 *)(lVar19 + 0x368) = uStack_9f0;
      *(undefined1 (*) [8])pbVar21 = auStack_a00;
      *(undefined8 *)(lVar19 + 0x360) = uStack_9f8;
    }
    auStack_a18._8_8_ = 0x11;
    auStack_a18._0_8_ = &UNK_014dbef3;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f4d29;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f4d29:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x11;
      auStack_a18._0_8_ = &UNK_014dbef3;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f4d29;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x4b9) = bVar43;
    auStack_a18._8_8_ = 0x11;
    auStack_a18._0_8_ = &UNK_01283198;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f4dd4;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f4dd4:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x11;
      auStack_a18._0_8_ = &UNK_01283198;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f4dd4;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x4ba) = bVar43;
    auStack_a18._8_8_ = 0x13;
    auStack_a18._0_8_ = &UNK_012cf174;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f4e7f;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f4e7f:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x13;
      auStack_a18._0_8_ = &UNK_012cf174;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f4e7f;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x4bb) = bVar43;
    auStack_a18._8_8_ = 0x14;
    auStack_a18._0_8_ = &UNK_011e49e6;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) {
LAB_0d1f4f26:
      *(undefined4 *)(lVar19 + 0x328) = 4;
    }
    else {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_0d1f4f26;
      auStack_a18._8_8_ = 0x14;
      auStack_a18._0_8_ = &UNK_011e49e6;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 3)) {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)(lVar30 + 0x40);
      }
      iVar33 = 4;
      if (4 < iVar18) {
        iVar33 = iVar18;
      }
      iVar18 = 0xc;
      if (iVar33 < 0xc) {
        iVar18 = iVar33;
      }
      *(int *)(lVar19 + 0x328) = iVar18;
    }
    auStack_a18._8_8_ = 0x12;
    auStack_a18._0_8_ = &UNK_012831aa;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f4ff4;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f4ff4:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x12;
      auStack_a18._0_8_ = &UNK_012831aa;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f4ff4;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x4bc) = bVar43;
    auStack_a18._8_8_ = 0x10;
    auStack_a18._0_8_ = &UNK_0147113e;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) goto LAB_0d1f509f;
    if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
    _auStack_ab0 = (char *)&puStack_a98;
    lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                       (auStack_ab0,lVar30 + 0x38);
    if (lVar30 == 0) {
LAB_0d1f509f:
      bVar43 = false;
    }
    else {
      auStack_a18._8_8_ = 0x10;
      auStack_a18._0_8_ = &UNK_0147113e;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) goto LAB_0d1f509f;
      bVar43 = *(char *)(lVar30 + 0x40) != '\0';
    }
    *(bool *)(lVar19 + 0x4be) = bVar43;
    auStack_a18._8_8_ = 0x1e;
    auStack_a18._0_8_ = &UNK_014248d1;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) {
LAB_0d1f514a:
      uVar44 = *(undefined1 *)(lVar19 + 0x18);
    }
    else {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_0d1f514a;
      auStack_a18._8_8_ = 0x1e;
      auStack_a18._0_8_ = &UNK_014248d1;
      lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
      if ((lVar30 == lVar1) || (*(int *)(lVar30 + 0x60) != 1)) {
        uVar44 = 0;
      }
      else {
        uVar44 = *(char *)(lVar30 + 0x40) != '\0';
      }
    }
    *(undefined1 *)(lVar19 + 0x4bd) = uVar44;
    auStack_a18._8_8_ = 0xd;
    auStack_a18._0_8_ = &UNK_01269312;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0xd;
        auStack_a18._0_8_ = &UNK_01269312;
        lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
        if (lVar30 == lVar1) {
          lVar28 = 0;
        }
        else {
          lVar28 = 0;
          if (*(int *)(lVar30 + 0x60) == 8) {
            lVar28 = lVar30 + 0x38;
          }
        }
        puVar37 = (undefined *)(lVar28 + 8);
        if (lVar28 == 0) {
          puVar37 = &UNK_01e79d90;
        }
        func_0x0d20a940(lVar19,puVar37);
      }
    }
    auStack_a18._8_8_ = 9;
    auStack_a18._0_8_ = &UNK_0136f1f6;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 == lVar1) {
LAB_0d1f530a:
      if (*(char *)(lVar19 + 0x430) == '\x01') {
        func_0x048f6240(lVar19 + 0x3b0);
        *(undefined1 *)(lVar19 + 0x430) = 0;
      }
    }
    else {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_0d1f530a;
      func_0x0d260870(auStack_a18,lStack_a50);
      if (*(char *)(lVar19 + 0x430) == '\0') {
        *(char **)(lVar19 + 0x3c0) = uStack_a08;
        *(undefined8 *)(lVar19 + 0x3b0) = auStack_a18._0_8_;
        *(undefined8 *)(lVar19 + 0x3b8) = auStack_a18._8_8_;
        auStack_a18 = (undefined1  [16])0x0;
        uStack_a08 = (char *)0x0;
        *(undefined8 *)(lVar19 + 0x3d8) = uStack_9f0;
        *(undefined1 (*) [8])(lVar19 + 0x3c8) = auStack_a00;
        *(undefined8 *)(lVar19 + 0x3d0) = uStack_9f8;
        _auStack_a00 = (undefined1  [16])0x0;
        uStack_9f0 = 0;
        *(undefined8 *)(lVar19 + 0x3f0) = uStack_9d8;
        *(undefined8 *)(lVar19 + 0x3e0) = auStack_9e8._0_8_;
        *(undefined8 *)(lVar19 + 1000) = auStack_9e8._8_8_;
        auStack_9e8 = (undefined1  [16])0x0;
        uStack_9d8 = 0;
        *(undefined8 *)(lVar19 + 0x408) = uStack_9c0;
        *(undefined8 *)(lVar19 + 0x3f8) = auStack_9d0._0_8_;
        *(undefined8 *)(lVar19 + 0x400) = auStack_9d0._8_8_;
        auStack_9d0 = (undefined1  [16])0x0;
        uStack_9c0 = 0;
        *(undefined1 *)(lVar19 + 0x410) = uStack_9b8;
        *(undefined8 *)(lVar19 + 0x428) = uStack_9a0;
        *(undefined8 *)(lVar19 + 0x418) = auStack_9b0._0_8_;
        *(undefined8 *)(lVar19 + 0x420) = auStack_9b0._8_8_;
        auStack_9b0 = (undefined1  [16])0x0;
        uStack_9a0 = 0;
        *(undefined1 *)(lVar19 + 0x430) = 1;
LAB_0d1f52db:
        if ((auStack_9e8[0] & 1) == 0) goto LAB_0d1f52e9;
LAB_0d1f5481:
        func_0x0412a280(uStack_9d8,auStack_9e8._0_8_ & 0xfffffffffffffffe);
        if ((auStack_a00[0] & 1) == 0) goto LAB_0d1f52f7;
LAB_0d1f54a8:
        func_0x0412a280(uStack_9f0,(ulong)auStack_a00 & 0xfffffffffffffffe);
      }
      else {
        func_0x07fdb1b0((undefined8 *)(lVar19 + 0x3b0),auStack_a18);
        if ((auStack_9b0[0] & 1) == 0) {
        }
        else {
          func_0x0412a280(uStack_9a0,auStack_9b0._0_8_ & 0xfffffffffffffffe);
        }
        if ((auStack_9d0[0] & 1) == 0) goto LAB_0d1f52db;
        func_0x0412a280(uStack_9c0,auStack_9d0._0_8_ & 0xfffffffffffffffe);
        if ((auStack_9e8[0] & 1) != 0) goto LAB_0d1f5481;
LAB_0d1f52e9:
        if ((auStack_a00[0] & 1) != 0) goto LAB_0d1f54a8;
LAB_0d1f52f7:
      }
      if ((auStack_a18[0] & 1) != 0) {
        func_0x0412a280(uStack_a08,auStack_a18._0_8_ & 0xfffffffffffffffe);
      }
    }
    auStack_a18._8_8_ = 0x1c;
    auStack_a18._0_8_ = &UNK_011afd99;
    lVar30 = func_0x0d6c97a0(lVar20,auStack_a18);
    if (lVar30 != lVar1) {
      if ((ulong)*(uint *)(lVar30 + 0x60) == 0xffffffff) goto LAB_0d1f56d4;
      _auStack_ab0 = (char *)&puStack_a98;
      lVar30 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(lVar30 + 0x60) * 8))
                         (auStack_ab0,lVar30 + 0x38);
      if (lVar30 != 0) {
        auStack_a18._8_8_ = 0x1c;
        auStack_a18._0_8_ = &UNK_011afd99;
        lVar20 = func_0x0d6c97a0(lVar20,auStack_a18);
        if ((lVar20 == lVar1) || (*(int *)(lVar20 + 0x60) != 1)) {
          bVar43 = false;
        }
        else {
          bVar43 = *(char *)(lVar20 + 0x40) != '\0';
        }
        *(bool *)(lVar19 + 0x4c2) = bVar43;
      }
    }
    plVar25 = stack0xfffffffffffff588;
    _auStack_a80 = (undefined1  [16])0x0;
    if (plVar25 != (long *)0x0) {
      LOCK();
      plVar42 = plVar25 + 1;
      lVar20 = *plVar42;
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        func_0x0412c2d0(plVar25);
        plVar25 = stack0xfffffffffffff588;
        plStack_a70 = (long *)0x0;
        if (stack0xfffffffffffff588 != (long *)0x0) {
          plStack_a70 = (long *)0x0;
          LOCK();
          plVar42 = stack0xfffffffffffff588 + 1;
          lVar20 = *plVar42;
          *plVar42 = *plVar42 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            (**(code **)(*stack0xfffffffffffff588 + 0x10))(stack0xfffffffffffff588);
            func_0x0412c2d0(plVar25);
            goto joined_r0x0d1f5605;
          }
        }
      }
      else {
        plStack_a70 = (long *)0x0;
      }
    }
joined_r0x0d1f5605:
    if ((char)uStack_a88 == '\x01') {
      func_0x0eee02f0(uStack_a90);
    }
    return;
  }
LAB_0d1f2d17:
  if ((*(char **)(lVar19 + 0x308) == (char *)0x0) || (**(char **)(lVar19 + 0x308) != '\x01')) {
    iVar18 = *(int *)(lVar19 + 0x300);
  }
  else {
    func_0x0caa7ab0(auStack_ab0,*(undefined8 *)(lVar19 + 0x318),0xf6f9d68);
    iVar18 = 0;
    if ((_auStack_ab0 != (char *)0x0) && (iVar18 = 0, *_auStack_ab0 == '\x01')) {
      iVar18 = *(int *)(lStack_aa0 + 0x28);
    }
    plVar25 = plStack_aa8;
    _auStack_ab0 = (undefined1  [16])0x0;
    if (plVar25 != (long *)0x0) {
      LOCK();
      plVar42 = plVar25 + 1;
      lVar20 = *plVar42;
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        func_0x0412c2d0(plVar25);
      }
      plVar25 = plStack_aa8;
      lStack_aa0 = 0;
      if (plStack_aa8 != (long *)0x0) {
        LOCK();
        plVar42 = plStack_aa8 + 1;
        lVar20 = *plVar42;
        *plVar42 = *plVar42 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          (**(code **)(*plStack_aa8 + 0x10))(plStack_aa8);
          func_0x0412c2d0(plVar25);
        }
      }
    }
  }
  lVar20 = lStack_a68;
  if ((iVar18 % 24000 != 6000) && (iVar18 % 24000 != 5000)) {
    bVar45 = 0;
LAB_0d1f2ee1:
    auStack_a18[0] = bVar45;
    auStack_a00._0_4_ = 9;
    _auStack_ab0 = (char *)0xf71d560;
    lVar30 = func_0x09be9cc0(lVar19 + 0x4f0,0xf71d560,&UNK_01563a4f,auStack_ab0,&puStack_a98);
    if ((ulong)*(uint *)(lVar30 + 0x50) == 0xffffffff) {
      if (auStack_a00._0_4_ == 0xffffffff) goto LAB_0d1f2fef;
LAB_0d1f2f60:
      _auStack_ab0 = (char *)(lVar30 + 0x38);
      (**(code **)(&UNK_0f45a900 + (ulong)(uint)auStack_a00._0_4_ * 8))
                (auStack_ab0,lVar30 + 0x38,auStack_a18);
    }
    else {
      if (auStack_a00._0_4_ != 0xffffffff) goto LAB_0d1f2f60;
      (**(code **)(&UNK_0f45a8b0 + (ulong)*(uint *)(lVar30 + 0x50) * 8))(auStack_ab0);
      *(undefined4 *)(lVar30 + 0x50) = 0xffffffff;
    }
    if ((ulong)(uint)auStack_a00._0_4_ != 0xffffffff) {
      (**(code **)(&UNK_0f45a8b0 + (ulong)(uint)auStack_a00._0_4_ * 8))(auStack_ab0,auStack_a18);
    }
    goto LAB_0d1f2fef;
  }
  lVar30 = *(long *)(lVar19 + 0xb0);
  bVar45 = 1;
  if ((lVar30 == 0) || ((int)((ulong)(*(long *)(lVar19 + 0xb8) - lVar30) >> 4) * -0x11111111 < 2))
  goto LAB_0d1f2ee1;
  if (*(int *)(lVar30 + 0xf8) == 1) {
    bVar45 = *(byte *)(lVar30 + 0xf4) ^ 1;
    goto LAB_0d1f2ee1;
  }
LAB_0d1f56e8:
  func_0x04931450();
LAB_0d1f56ed:
  uVar22 = func_0x04931450();
  uVar22 = func_0x04882e20(uVar22);
  uVar22 = func_0x04882e20(uVar22);
  uVar22 = func_0x04882e20(uVar22);
  uVar22 = func_0x04882e20(uVar22);
  if ((auStack_a18[0] & 1) != 0) {
    func_0x0412a280(uStack_a08,auStack_a18._0_8_ & 0xfffffffffffffffe);
    func_0x048c3ac0(&uStack_a90);
    uVar22 = func_0x0eee2d70(uVar22);
  }
  func_0x048c3ac0(&uStack_a90);
  func_0x0eee2d70(uVar22);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
LAB_0d1f56cf:
  func_0x04882e30();
LAB_0d1f56d4:
  func_0x04931450();
LAB_0d1f56d9:
  func_0x04931450();
LAB_0d1f56de:
  func_0x04931450();
LAB_0d1f56e3:
  func_0x04931450();
  goto LAB_0d1f56e8;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
