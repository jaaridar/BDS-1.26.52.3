/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5280740 (ELF vaddr 0x5180740)
 * Label: caller-of-seed
 * Body:  [[05280740, 0528148a] [052814a7, 052814b5] [052814c2, 052814d7] [05281547, 052815c3]]
 * Ghidra: FUN_05280740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05280740(undefined8 *param_1,long param_2,uint param_3,undefined1 param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined2 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long *plVar15;
  char cVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  undefined4 uVar27;
  long *plVar28;
  long lVar29;
  long *plStack_a68;
  long *plStack_a60;
  long lStack_a58;
  long lStack_a50;
  long lStack_a48;
  long lStack_a40;
  undefined8 uStack_a38;
  undefined *puStack_a30;
  undefined *puStack_a28;
  uint uStack_a20;
  uint uStack_a1c;
  uint auStack_a18 [623];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0ca70a10();
  *param_1 = &UNK_0ef9d2a0;
  param_1[0xe] = &UNK_0ef9d4b8;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined4 *)((long)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x26) = param_4;
  param_1[0x28] = &UNK_0ef9fac0;
  param_1[0x2c] = param_1 + 0x28;
  param_1[0x2e] = param_1 + 0x2e;
  param_1[0x2f] = param_1 + 0x2e;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  func_0x0eee1090(param_1 + 0x35);
  *(undefined2 *)(param_1 + 0x37) = 0x101;
  param_1[0x38] = _DAT_0f6b3a90;
  param_1[0x39] = 0;
  param_1[0x36] = &UNK_0efa0358;
  uVar9 = *(undefined2 *)(param_2 + 0xac);
  param_1[0x3a] = &UNK_0ef54b08;
  *(undefined2 *)(param_1 + 0x3b) = uVar9;
  *(undefined1 *)((long)param_1 + 0x1da) = 1;
  *(undefined2 *)(param_1 + 0x3d) = uVar9;
  param_1[0x3c] = &UNK_0ef56ac0;
  *(undefined1 *)((long)param_1 + 0x1ea) = 0;
  *param_1 = &UNK_0ef9d4e0;
  param_1[0xe] = &UNK_0ef9d6f8;
  plVar10 = param_1 + 0x3e;
  plVar2 = param_1 + 0x40;
  plVar3 = param_1 + 0x42;
  plVar4 = param_1 + 0x44;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  puStack_a30 = &UNK_0f147b18;
  ppuStack_38 = &puStack_a28;
  puStack_a28 = &UNK_0f5356d0;
  uStack_48 = 0x100000000000000;
  uStack_54 = 0;
  uStack_50 = 0;
  lVar24 = 7;
  uVar25 = param_3;
  while( true ) {
    uVar26 = ((ulong)((uVar25 >> 0x1e ^ uVar25) * 0x6c078965) + lVar24) - 6;
    uVar25 = (uint)uVar26;
    *(uint *)((long)&uStack_a38 + lVar24 * 4 + 4) = uVar25;
    if (lVar24 == 0x193) break;
    uVar25 = (((uint)(uVar26 >> 0x1e) & 3 ^ uVar25) * 0x6c078965 + (int)lVar24) - 5;
    *(uint *)((long)&puStack_a30 + lVar24 * 4) = uVar25;
    lVar24 = lVar24 + 2;
  }
  plVar5 = param_1 + 0x3f;
  plVar6 = param_1 + 0x41;
  plVar7 = param_1 + 0x43;
  plVar8 = param_1 + 0x45;
  uStack_5c = 0x18e00000270;
  uStack_40 = 1;
  uStack_a20 = param_3;
  uStack_a1c = param_3;
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 0x10;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d341b00(puVar17,&puStack_a30,0x101,1);
  lVar24 = *plVar10;
  *plVar10 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 0x10;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d341b00(puVar17,&puStack_a30,0x101,1);
  lVar24 = *plVar5;
  *plVar5 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 8;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d341b00(puVar17,&puStack_a30,0x101,1);
  lVar24 = *plVar2;
  *plVar2 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 4;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d3430a0(puVar17,&puStack_a30,0);
  lVar24 = *plVar6;
  *plVar6 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 10;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d341b00(puVar17,&puStack_a30,0,0);
  lVar24 = *plVar3;
  *plVar3 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 0x10;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d341b00(puVar17,&puStack_a30,0x101,1);
  lVar24 = *plVar7;
  *plVar7 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 8;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d341b00(puVar17,&puStack_a30,0,0);
  lVar24 = *plVar4;
  *plVar4 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  puVar17 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar17 == (undefined4 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  *puVar17 = 3;
  *(undefined8 *)(puVar17 + 2) = 0;
  *(undefined8 *)(puVar17 + 4) = 0;
  *(undefined8 *)(puVar17 + 6) = 0;
  func_0x0d3430a0(puVar17,&puStack_a30,0);
  lVar24 = *plVar8;
  *plVar8 = (long)puVar17;
  if (lVar24 != 0) {
    lVar19 = *(long *)(lVar24 + 8);
    if (lVar19 != 0) {
      *(long *)(lVar24 + 0x10) = lVar19;
      func_0x0412a280(lVar19,*(long *)(lVar24 + 0x18) - lVar19);
    }
    func_0x0412a280(lVar24,0x28);
  }
  uVar23 = _UNK_014e27f8;
  *(undefined8 *)((long)param_1 + 0x10c) = _DAT_014e27f0;
  *(undefined8 *)((long)param_1 + 0x114) = uVar23;
  uVar14 = _UNK_014e727c;
  uVar13 = _UNK_014e7278;
  uVar27 = _UNK_014e7274;
  *(undefined4 *)((long)param_1 + 0x11c) = _DAT_014e7270;
  *(undefined4 *)(param_1 + 0x24) = uVar27;
  *(undefined4 *)((long)param_1 + 0x124) = uVar13;
  *(undefined4 *)(param_1 + 0x25) = uVar14;
  *(undefined4 *)((long)param_1 + 300) = 0x40d7be73;
  if (param_5 == 0) {
    lVar24 = param_1[5];
    plVar20 = *(long **)(lVar24 + 0xa0);
    lVar19 = (**(code **)(*plVar20 + 0x570))(plVar20);
    if (*(char *)(lVar19 + 0x55c) == '\x01') {
      uVar27 = *(undefined4 *)(lVar19 + 0x558);
    }
    else {
      lVar21 = func_0x0d2279e0(lVar19 + 0x518,0xf71d720);
      if ((lVar21 == 0) && (lVar21 = func_0x0d2279e0(lVar19 + 0x4f0,0xf71d720), lVar21 == 0)) {
        uVar27 = 1;
      }
      else {
        uVar27 = 1;
        if (*(int *)(lVar21 + 0x50) == 4) {
          uVar27 = *(undefined4 *)(lVar21 + 0x38);
        }
      }
    }
    func_0x052a3b10(&plStack_a68,uVar27,*(undefined8 *)plVar20[0x77]);
    plVar20 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
    if (plVar20 == (long *)0x0) {
      func_0x0eec74c0(0x48,0);
    }
    plVar15 = plStack_a60;
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = (long)&UNK_0ef9df38;
    plVar1 = plVar20 + 3;
    if (plStack_a60 == (long *)0x0) {
      plVar20[4] = 0;
      plVar20[5] = -0x794549289d90b428;
      plVar20[3] = (long)&UNK_0ef9ff18;
      plVar20[6] = (long)plStack_a68;
      plVar20[7] = 0;
    }
    else {
      LOCK();
      plStack_a60[1] = plStack_a60[1] + 1;
      UNLOCK();
      plVar20[4] = 0;
      plVar20[5] = -0x794549289d90b428;
      plVar20[3] = (long)&UNK_0ef9ff18;
      plVar20[6] = (long)plStack_a68;
      plVar20[7] = (long)plStack_a60;
      LOCK();
      plStack_a60[1] = plStack_a60[1] + 1;
      UNLOCK();
      LOCK();
      plVar28 = plStack_a60 + 1;
      lVar19 = *plVar28;
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_a60 + 0x10))(plStack_a60);
        func_0x0412c2d0(plVar15);
      }
    }
    *plVar1 = (long)&UNK_0ef9df88;
    uStack_a38 = plStack_a68;
    (**(code **)(*plStack_a68 + 0x10))(plStack_a68,param_3);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x50,0);
    }
    plVar15 = plStack_a60;
    plVar28 = plVar20 + 1;
    LOCK();
    *plVar28 = *plVar28 + 1;
    UNLOCK();
    if (plStack_a60 != (long *)0x0) {
      LOCK();
      plStack_a60[1] = plStack_a60[1] + 1;
      UNLOCK();
    }
    lVar19 = lStack_a50 - lStack_a58;
    if (lVar19 == 0) {
      lVar21 = 0;
      lVar29 = 0;
    }
    else {
      lStack_a40 = lStack_a58;
      if (lVar19 < 0) {
        uVar23 = func_0x04a62b20();
        uVar23 = func_0x04882e20(uVar23);
        func_0x052bc890(plVar28);
        func_0x052a2800(puVar18);
        func_0x0412a280(puVar18,0x50);
        func_0x0529bd00(plVar20);
        func_0x052a8700(&plStack_a68);
        plVar20 = (long *)param_1[0x47];
        param_1[0x47] = 0;
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 8))();
        }
        func_0x05261970(plVar8);
        func_0x05261930(plVar4);
        func_0x05261930(plVar7);
        func_0x05261930(plVar3);
        func_0x05261970(plVar6);
        func_0x05261930(plVar2);
        func_0x05261930(plVar5);
        func_0x05261930(plVar10);
        func_0x0527a670(param_1);
        func_0x0eee2d70(uVar23);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
      if (lVar21 == 0) {
        func_0x0eec74c0(lVar19,0);
      }
      lVar29 = lVar21 + lVar19;
      func_0x0eee2f00(lVar21,lStack_a40,lVar19);
    }
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    *puVar18 = &UNK_0ef9e080;
    puVar18[1] = plVar1;
    puVar18[2] = plVar20;
    LOCK();
    plVar20[1] = plVar20[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar20 + 1;
    lVar19 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    *puVar18 = &UNK_0ef9dfe0;
    puVar18[3] = uStack_a38;
    puVar18[4] = plVar15;
    if (plVar15 == (long *)0x0) {
      *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(lVar24 + 0xa8);
      puVar18[6] = lVar21;
      puVar18[7] = lVar29;
      puVar18[8] = lVar29;
    }
    else {
      LOCK();
      plVar15[1] = plVar15[1] + 1;
      UNLOCK();
      *(undefined4 *)(puVar18 + 5) = *(undefined4 *)(lVar24 + 0xa8);
      puVar18[6] = lVar21;
      puVar18[7] = lVar29;
      puVar18[8] = lVar29;
      LOCK();
      plVar10 = plVar15 + 1;
      lVar24 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
    }
    LOCK();
    lVar24 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    *puVar18 = &UNK_0ef9f848;
    puVar18[9] = 0;
    puVar22 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (puVar22 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x40,0);
    }
    puVar22[4] = 0;
    puVar22[5] = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22[6] = 0;
    puVar22[7] = 0;
    *(undefined4 *)(puVar22 + 4) = 0x3f800000;
    LOCK();
    puVar22[7] = 0;
    UNLOCK();
    plVar10 = (long *)puVar18[9];
    puVar18[9] = puVar22;
    if (plVar10 != (long *)0x0) {
      if (((plVar10[7] != plVar10[5]) || ((int)plVar10[6] != 0)) &&
         (cVar16 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
         cVar16 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      puVar22 = (undefined8 *)plVar10[2];
      while (puVar22 != (undefined8 *)0x0) {
        puVar11 = (undefined8 *)*puVar22;
        func_0x0412a280(puVar22,0x28);
        puVar22 = puVar11;
      }
      lVar24 = *plVar10;
      *plVar10 = 0;
      if (lVar24 != 0) {
        func_0x0412a280(lVar24,plVar10[1] << 3);
      }
      func_0x0412a280(plVar10,0x40);
    }
    LOCK();
    lVar24 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar24 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    }
    if (lStack_a58 != 0) {
      lStack_a50 = lStack_a58;
      func_0x0412a280(lStack_a58,lStack_a48 - lStack_a58);
    }
    if (plStack_a60 != (long *)0x0) {
      LOCK();
      plVar10 = plStack_a60 + 1;
      lVar24 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_a60 + 0x10))(plStack_a60);
        func_0x0412c2d0(plStack_a60);
      }
    }
    plVar10 = (long *)param_1[0x47];
    param_1[0x47] = puVar18;
  }
  else {
    puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x10);
    if (puVar18 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x10,0);
    }
    *puVar18 = &UNK_0f3dc940;
    puVar18[1] = param_5;
    plVar10 = (long *)param_1[0x47];
    param_1[0x47] = puVar18;
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  return;
}


