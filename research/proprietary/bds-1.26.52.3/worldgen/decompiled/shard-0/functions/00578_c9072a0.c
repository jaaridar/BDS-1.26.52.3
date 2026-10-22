/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca072a0 (ELF vaddr 0xc9072a0)
 * Label: caller-of-callee
 * Body:  [[0ca072a0, 0ca08117]]
 * Ghidra: FUN_0ca072a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca072a0(undefined1 (*param_1) [16])

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 in_R9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 (*unaff_R15) [16];
  long lVar13;
  undefined1 auVar14 [16];
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 (*pauVar19) [16];
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined2 uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined2 uStack_1b0;
  undefined2 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined2 uStack_180;
  undefined1 (*pauStack_178) [16];
  undefined1 auStack_170 [16];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 *puStack_f8;
  undefined1 uStack_e8;
  undefined2 uStack_e6;
  undefined1 uStack_e4;
  undefined2 auStack_a0 [4];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  ulong uStack_80;
  undefined2 uStack_78;
  undefined1 (*pauStack_70) [16];
  undefined1 (*pauStack_68) [16];
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined1 *puStack_38;
  
  *param_1 = (undefined1  [16])0x0;
  func_0x048e2670(&lStack_1f8);
  lVar18 = lStack_1f8;
  lStack_1f8 = 0;
  *(long *)param_1[1] = lVar18;
  if (lVar18 == 0) {
    FUN_04890760();
  }
  else {
    *(undefined1 (*) [16])(param_1[1] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    uStack_1a8 = 0;
    auStack_1a0 = (undefined1  [16])0x0;
    auStack_190 = (undefined1  [16])0x0;
    uStack_180 = 0x100;
    unaff_R15 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x100);
    if (unaff_R15 != (undefined1 (*) [16])0x0) goto LAB_0ca07331;
  }
  func_0x0eec74c0(0x100,0);
LAB_0ca07331:
  uStack_1d8 = 0;
  auStack_1d0 = (undefined1  [16])0x0;
  auStack_1a0 = (undefined1  [16])0x0;
  uStack_1c0 = 0;
  uStack_1b8 = auStack_190._8_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auStack_190._8_8_;
  auStack_190 = auVar4 << 0x40;
  uStack_1b0 = uStack_180;
  puVar12 = &UNK_0f3ec648;
  cVar6 = func_0x05f6fe50(&UNK_0f3ec648,&UNK_0f3ebdc0);
  if (cVar6 != '\0') {
    puVar12 = &UNK_0f3ebdc0;
  }
  func_0x05d54750(&pauStack_178,puVar12);
  *unaff_R15 = (undefined1  [16])0x0;
  *(undefined8 *)unaff_R15[1] = 0;
  unaff_R15[2] = (undefined1  [16])0x0;
  *(undefined1 (**) [16])(unaff_R15[1] + 8) = unaff_R15 + 2;
  *(undefined8 *)unaff_R15[5] = 0;
  *(undefined8 *)unaff_R15[8] = 0;
  *(undefined1 (**) [16])unaff_R15[9] = pauStack_178;
  *(undefined8 *)(unaff_R15[9] + 8) = 0;
  uVar10 = auStack_170._0_8_;
  if (((ulong)auStack_170._0_8_ >> 0x37 & 1) != 0) {
    uVar10 = auStack_170._0_8_ & 0xff00ffffffffffff;
    lVar15 = *(long *)(uVar10 - 8);
    lVar13 = lVar15 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
    *plVar7 = lVar15;
    func_0x0eee2f00(plVar7 + 1,uVar10,lVar15);
    *(undefined1 *)((long)plVar7 + lVar15 + 8) = 0;
    uVar10 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  *(ulong *)(unaff_R15[9] + 8) = uVar10;
  *(undefined8 *)unaff_R15[10] = 0;
  if ((auStack_170._8_8_ & 0x80000000000000) == 0) {
    *(undefined8 *)unaff_R15[10] = auStack_170._8_8_;
    *(undefined1 (*) [16])(unaff_R15[10] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(unaff_R15[0xb] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(unaff_R15[0xc] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(unaff_R15[0xd] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(unaff_R15[0xe] + 8) = 0;
  }
  else {
    uVar10 = auStack_170._8_8_ & 0xff00ffffffffffff;
    lVar15 = *(long *)(uVar10 - 8);
    lVar13 = lVar15 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
    *plVar7 = lVar15;
    func_0x0eee2f00(plVar7 + 1,uVar10,lVar15);
    *(undefined1 *)((long)plVar7 + lVar15 + 8) = 0;
    *(ulong *)unaff_R15[10] = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    *(undefined1 (*) [16])(unaff_R15[0xd] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(unaff_R15[0xc] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(unaff_R15[0xb] + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(unaff_R15[10] + 8) = (undefined1  [16])0x0;
    *(undefined8 *)(unaff_R15[0xe] + 8) = 0;
    if ((auStack_170._8_8_ & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,(auStack_170._8_8_ & 0xff00ffffffffffff) - 8);
    }
  }
  auStack_170._8_8_ = 0;
  if ((auStack_170._0_8_ & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_170._0_8_ & 0xff00ffffffffffff) - 8);
  }
  puVar8 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar8 == (undefined1 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  *puVar8 = 0;
  *(undefined1 (*) [16])(puVar8 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x28) = (undefined1  [16])0x0;
  *(undefined1 **)unaff_R15[0xf] = puVar8;
  plVar7 = *(long **)unaff_R15[0xb];
  *(undefined1 (*) [16])(unaff_R15[10] + 8) = (undefined1  [16])0x0;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  *(undefined8 *)(unaff_R15[0xb] + 8) = 0;
  lVar13 = *(long *)(lVar18 + 8);
  lVar15 = *(long *)(lVar18 + 0x10);
  if (lVar15 != 0) {
    LOCK();
    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  *(long *)(unaff_R15[10] + 8) = lVar13;
  plVar7 = *(long **)unaff_R15[0xb];
  *(long *)unaff_R15[0xb] = lVar15;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar13 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
    lVar13 = *(long *)(unaff_R15[10] + 8);
  }
  if (lVar13 != 0) {
    *(long *)(unaff_R15[0xb] + 8) = lVar18;
  }
  auStack_a0[0] = uStack_1d8;
  auStack_98._0_8_ = auStack_1d0._0_8_;
  auStack_98._8_8_ = auStack_1d0._8_8_;
  auStack_1d0 = (undefined1  [16])0x0;
  uStack_88 = uStack_1c0;
  uStack_1c0 = 0;
  uStack_80 = uStack_1b8;
  uStack_78 = uStack_1b0;
  pauVar19 = unaff_R15 + 0xf;
  func_0x0ca32330(unaff_R15,auStack_a0);
  uVar2 = auStack_98._8_8_;
  auStack_98 = (undefined1  [16])0x0;
  if ((long *)uVar2 == (long *)0x0) {
    uStack_88 = 0;
    puVar9 = *(undefined8 **)(unaff_R15[0xc] + 8);
  }
  else {
    LOCK();
    plVar7 = (long *)(uVar2 + 8);
    lVar18 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)uVar2 + 0x10))(uVar2);
      func_0x0412c2d0(uVar2);
    }
    uVar2 = auStack_98._8_8_;
    uStack_88 = 0;
    if ((long *)auStack_98._8_8_ != (long *)0x0) {
      LOCK();
      plVar7 = (long *)(auStack_98._8_8_ + 8);
      lVar18 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_98._8_8_ + 0x10))(auStack_98._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
    puVar9 = *(undefined8 **)(unaff_R15[0xc] + 8);
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puVar9 = 0;
    *(undefined8 **)(unaff_R15[0xc] + 8) = puVar9;
  }
  else {
    *puVar9 = 0;
  }
  lVar18 = *(long *)unaff_R15[0xf];
  func_0x05d54750(&uStack_1f0,&UNK_0f3ec140);
  pauStack_68 = unaff_R15 + 9;
  uVar2 = *(undefined8 *)(unaff_R15[10] + 8);
  lVar13 = *(long *)unaff_R15[0xb];
  if (lVar13 != 0) {
    LOCK();
    *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(unaff_R15[0xb] + 8);
  pauStack_70 = unaff_R15;
  uStack_60 = uVar2;
  lStack_58 = lVar13;
  uStack_50 = uVar3;
  if ((*(long *)unaff_R15[0xc] == 0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_013ba24d,&UNK_0143b8d9,0xd8,&UNK_01259d48,&UNK_012e8843,in_R9,
                              lVar18,pauVar19), cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  uStack_48 = *(undefined8 *)unaff_R15[0xc];
  puStack_148 = *(undefined8 **)(unaff_R15[0xc] + 8);
  if (puStack_148 == (undefined8 *)0x0) {
    puStack_148 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puStack_148 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
    }
    *puStack_148 = 0;
    *(undefined8 **)(unaff_R15[0xc] + 8) = puStack_148;
  }
  puStack_140 = unaff_R15[0xd] + 8;
  pauStack_178 = pauStack_70;
  auStack_170._8_8_ = uVar2;
  auStack_170._0_8_ = pauStack_68;
  uStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_150 = uStack_48;
  uStack_138 = uStack_1f0;
  uStack_130 = 0;
  uVar10 = uStack_1e8;
  lStack_160 = lVar13;
  uStack_158 = uVar3;
  puStack_40 = puStack_148;
  puStack_38 = puStack_140;
  if ((uStack_1e8 & 0x80000000000000) != 0) {
    uVar10 = uStack_1e8 & 0xff00ffffffffffff;
    lVar15 = *(long *)(uVar10 - 8);
    lVar13 = lVar15 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
    *plVar7 = lVar15;
    func_0x0eee2f00(plVar7 + 1,uVar10,lVar15);
    *(undefined1 *)((long)plVar7 + lVar15 + 8) = 0;
    uVar10 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_128 = 0;
  uVar11 = uStack_1e0;
  uStack_130 = uVar10;
  if ((uStack_1e0 & 0x80000000000000) != 0) {
    uVar10 = uStack_1e0 & 0xff00ffffffffffff;
    lVar15 = *(long *)(uVar10 - 8);
    lVar13 = lVar15 + 9;
    plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar13,8);
    if (lVar13 != 0 && plVar7 == (long *)0x0) {
      func_0x0eec74c0(lVar13,8);
    }
    *plVar7 = lVar15;
    func_0x0eee2f00(plVar7 + 1,uVar10,lVar15);
    *(undefined1 *)((long)plVar7 + lVar15 + 8) = 0;
    uVar11 = (ulong)(plVar7 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  puStack_f8 = (undefined8 *)0x0;
  uStack_128 = uVar11;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x38,0);
  }
  auVar14._8_4_ = (int)lVar18;
  auVar14._0_8_ = lVar18;
  auVar14._12_4_ = (int)((ulong)lVar18 >> 0x20);
  lVar16 = _DAT_014e4560 + lVar18;
  lVar17 = _UNK_014e4568 + auVar14._8_8_;
  lVar13 = lVar18 + _DAT_014e9f10;
  lVar15 = auVar14._8_8_ + _UNK_014e9f18;
  *puVar9 = &UNK_0f3ec0c0;
  puVar9[1] = &UNK_0c4a3880;
  puVar9[2] = lVar18;
  puVar9[3] = lVar13;
  puVar9[4] = lVar15;
  puVar9[5] = lVar16;
  puVar9[6] = lVar17;
  uStack_e8 = 1;
  uStack_e6 = 0xfffc;
  uStack_e4 = 1;
  puStack_f8 = puVar9;
  func_0x0ca42e80(&pauStack_178);
  func_0x0ca46060(&pauStack_178);
  if ((uStack_1e0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e0 & 0xff00ffffffffffff) - 8);
  }
  uStack_1e0 = 0;
  if ((uStack_1e8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1e8 & 0xff00ffffffffffff) - 8);
  }
  uVar2 = auStack_1d0._8_8_;
  auStack_1d0 = (undefined1  [16])0x0;
  if ((long *)uVar2 != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(uVar2 + 8);
    lVar18 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)uVar2 + 0x10))(uVar2);
      func_0x0412c2d0(uVar2);
    }
    uVar2 = auStack_1d0._8_8_;
    uStack_1c0 = 0;
    if ((long *)auStack_1d0._8_8_ != (long *)0x0) {
      LOCK();
      plVar7 = (long *)(auStack_1d0._8_8_ + 8);
      lVar18 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_1d0._8_8_ + 0x10))(auStack_1d0._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
  }
  *(undefined1 (**) [16])param_1[3] = unaff_R15;
  uVar2 = auStack_1a0._8_8_;
  auStack_1a0 = (undefined1  [16])0x0;
  if ((long *)uVar2 != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(uVar2 + 8);
    lVar18 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar18 == 0) {
      (**(code **)(*(long *)uVar2 + 0x10))(uVar2);
      func_0x0412c2d0(uVar2);
    }
    uVar2 = auStack_1a0._8_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auStack_190._8_8_;
    auStack_190 = auVar5 << 0x40;
    if ((long *)auStack_1a0._8_8_ != (long *)0x0) {
      LOCK();
      plVar7 = (long *)(auStack_1a0._8_8_ + 8);
      lVar18 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar18 == 0) {
        (**(code **)(*(long *)auStack_1a0._8_8_ + 0x10))(auStack_1a0._8_8_);
        func_0x0412c2d0(uVar2);
      }
    }
  }
  *(undefined1 (*) [16])(param_1[5] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[4] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[3] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1[6] + 8) = 0;
  *(undefined4 *)param_1[7] = 0x3f800000;
  *(undefined1 (*) [16])(param_1[7] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[8] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[9] + 8) = 0x3f800000;
  param_1[10] = (undefined1  [16])0x0;
  param_1[0xb] = (undefined1  [16])0x0;
  *(undefined4 *)param_1[0xc] = 0x3f800000;
  *(undefined1 (*) [16])(param_1[0xc] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0xd] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0xe] + 8) = 0x3f800000;
  param_1[0xf] = (undefined1  [16])0x0;
  param_1[0x10] = (undefined1  [16])0x0;
  *(undefined4 *)param_1[0x11] = 0x3f800000;
  *(undefined1 (*) [16])(param_1[0x11] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x12] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0x13] + 8) = 0x3f800000;
  param_1[0x14] = (undefined1  [16])0x0;
  param_1[0x15] = (undefined1  [16])0x0;
  *(undefined4 *)param_1[0x16] = 0x3f800000;
  *(undefined1 (*) [16])(param_1[0x16] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x17] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0x18] + 8) = 0x3f800000;
  param_1[0x19] = (undefined1  [16])0x0;
  param_1[0x1a] = (undefined1  [16])0x0;
  *(undefined4 *)param_1[0x1b] = 0x3f800000;
  *(undefined2 *)(param_1[0x1b] + 8) = 0x100;
  param_1[0x1c] = (undefined1  [16])0x0;
  param_1[0x1d] = (undefined1  [16])0x0;
  param_1[0x1e] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[0x1f] = 0;
  *(undefined4 *)(param_1[0x1f] + 8) = 0x3f800000;
  param_1[0x20] = (undefined1  [16])0x0;
  param_1[0x21] = (undefined1  [16])0x0;
  *(undefined4 *)param_1[0x22] = 0x3f800000;
  *(undefined2 *)(param_1[0x22] + 8) = 0;
  *(undefined8 *)param_1[0x25] = 0;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
  puVar9[1] = puVar9 + 1;
  puVar9[2] = puVar9 + 1;
  *(undefined1 (*) [16])(puVar9 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar9 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar9 + 8) = (undefined1  [16])0x0;
  *puVar9 = &UNK_0ef437f0;
  puVar9[10] = &UNK_0ef43820;
  *(undefined8 **)param_1[0x26] = puVar9;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  *(undefined1 (*) [16])(puVar9 + 1) = (undefined1  [16])0x0;
  *puVar9 = &UNK_0f3ec178;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined8 **)(param_1[0x26] + 8) = puVar9 + 3;
  *(undefined8 **)param_1[0x27] = puVar9;
  *(undefined1 (*) [16])(param_1[0x29] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x2a] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x27] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x28] + 1) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[0x2b] + 8) = 0x3f800000;
  param_1[0x2c][0] = 1;
  *(undefined1 (*) [16])(param_1[0x2c] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[0x2d] + 1) = (undefined1  [16])0x0;
  param_1[0x2e][8] = 1;
  puVar9 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar9 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *(undefined1 (*) [16])(puVar9 + 1) = (undefined1  [16])0x0;
  *puVar9 = &UNK_0ef40f38;
  *(undefined1 (*) [16])(puVar9 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar9 + 5) = (undefined1  [16])0x0;
  puVar9[7] = 0;
  *(undefined8 **)param_1[0x2f] = puVar9 + 3;
  *(undefined8 **)(param_1[0x2f] + 8) = puVar9;
  *(undefined8 *)param_1[0x30] = 0;
  FUN_0db455f0(*(undefined8 *)param_1[1]);
  auStack_170 = (undefined1  [16])0x0;
  pauStack_178 = &auStack_170;
  func_0x0eca5a30(*(undefined8 *)param_1[1],&pauStack_178,0);
  func_0x049dc470(&pauStack_178,auStack_170._0_8_);
  func_0x0b68da30(*(undefined8 *)param_1[1]);
  return;
}


