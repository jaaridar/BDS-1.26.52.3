/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4abf370 (ELF vaddr 0x49bf370)
 * Label: callee-of:0x4de9260
 * Body:  [[04abf370, 04ac0896]]
 * Ghidra: FUN_04abf370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_04abf370(undefined8 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined1 uStack_289;
  long *plStack_288;
  uint *puStack_280;
  undefined8 uStack_278;
  byte bStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined4 uStack_267;
  undefined3 uStack_263;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_248;
  long *plStack_240;
  uint *puStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  ulong auStack_1b8 [4];
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_263 = 0;
  uStack_260 = 0;
  uStack_278 = 0;
  bStack_270 = 0;
  uStack_26f = 0;
  uStack_258 = 0;
  func_0x0412f5e0(&bStack_270,&UNK_01221f66,0x1d);
  uStack_278 = 0x2cd562db72bbacd2;
  uStack_70 = 0;
  uStack_1f0 = 0;
  lStack_78 = 0;
  plStack_1f8 = (long *)&UNK_0ef580a8;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_248 = plStack_1f8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef56e28;
  plStack_240 = (long *)0x0;
  plStack_1f8 = (long *)0x0;
  plVar6[4] = (long)&UNK_0f2ccd78;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(undefined1 *)(plVar6 + 0xd) = 0;
  FUN_04aa75f0(plVar6 + 0xe,&uStack_289,&UNK_01254d89);
  *(undefined1 *)(plVar6 + 0x10) = 0;
  plVar7 = plVar6 + 0x11;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0xffffffff;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  plVar6[4] = (long)&UNK_0ef56e78;
  plVar6[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar6 + 0x2f) = 1;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  if (plStack_248 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_248)(&plStack_248,plVar6 + 0x30);
    plVar9 = plStack_248;
  }
  plStack_248 = (long *)0x0;
  plVar6[0x30] = (long)plVar9;
  puVar1 = (uint *)(plVar6 + 0x12);
  if (plVar7 == (long *)&DAT_0f552078) {
    plVar6[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar6[0x14] = _DAT_0f552090;
        uVar4 = uRam000000000f55208c;
        uVar3 = _DAT_0f552088;
        uVar2 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar6 + 0x94) = uVar2;
        *(undefined4 *)(plVar6 + 0x13) = uVar3;
        *(undefined4 *)((long)plVar6 + 0x9c) = uVar4;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar14 = (_DAT_0f552080 & 1) != 0;
      lVar13 = 0xf552081;
      if (bVar14) {
        lVar13 = _DAT_0f552090;
      }
      uVar12 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar14) {
        uVar12 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar13,uVar12);
    }
    plVar6[0x11] = _DAT_0f552078;
    plVar6[0x15] = 0;
    if (plStack_248 != (long *)0x0) {
      (*(code *)plStack_248[1])(&plStack_248);
    }
  }
  plVar9 = plVar6 + 1;
  plStack_288 = plVar7;
  if (plStack_1f8 != (long *)0x0) {
    (*(code *)plStack_1f8[1])(&plStack_1f8);
  }
  LOCK();
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  puStack_200 = puVar1;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef56f58;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[4] = (long)&UNK_0ef56fa8;
  plVar7[0xe] = (long)(plVar6 + 4);
  plVar7[0xf] = (long)plVar6;
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  puStack_280 = (uint *)(plVar6 + 4);
  plStack_248 = plVar7 + 4;
  plStack_240 = plVar7;
  puVar8 = (undefined4 *)func_0x04aecb00(param_1,&uStack_278,1);
  plVar10 = *(long **)(puVar8 + 0x24);
  if (plVar10 < *(long **)(puVar8 + 0x26)) {
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[4] = 0;
    if (plVar10 == plStack_288) {
LAB_04abf6e8:
      *plVar10 = *plStack_288;
      plVar10[5] = (long)(plVar7 + 4);
      plVar10[6] = (long)plVar7;
LAB_04abf764:
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_200 & 1) == 0) {
        plVar10[3] = *(long *)(puStack_200 + 4);
        lVar13 = *(long *)(puStack_200 + 2);
        plVar10[1] = *(long *)puStack_200;
        plVar10[2] = lVar13;
        goto LAB_04abf6e8;
      }
      func_0x04885070(plVar10 + 1,plVar6[0x14],plVar6[0x13]);
      *plVar10 = *plStack_288;
      plVar10[5] = (long)plStack_248;
      plVar10[6] = (long)plStack_240;
      plVar7 = plStack_240;
      if (plStack_240 != (long *)0x0) goto LAB_04abf764;
    }
    plVar10 = plVar10 + 7;
    *(long **)(puVar8 + 0x24) = plVar10;
  }
  else {
    plVar10 = (long *)func_0x04aeead0(puVar8 + 0x22,plStack_288,&plStack_248);
  }
  puVar1 = puStack_280;
  *(long **)(puVar8 + 0x24) = plVar10;
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  if (*(long *)(puVar8 + 2) != 0) {
    LOCK();
    plVar7 = (long *)(*(long *)(puVar8 + 2) + 8);
    *plVar7 = *plVar7 + 1;
    UNLOCK();
  }
  plVar7 = (long *)plVar6[0xf];
  *(undefined4 *)(plVar6 + 0xe) = uVar2;
  *(undefined4 *)((long)plVar6 + 0x74) = uVar3;
  *(undefined4 *)(plVar6 + 0xf) = uVar4;
  *(undefined4 *)((long)plVar6 + 0x7c) = uVar5;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_240;
  *(undefined1 *)(plVar6 + 0x10) = *(undefined1 *)((long)puVar8 + 0xa1);
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_240 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar7);
    }
  }
  LOCK();
  lVar13 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
    LOCK();
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
  }
  plVar6[0x2e] = 0x800000001;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  (**(code **)(plVar6[4] + 0x10))(puVar1,&uStack_158);
  if ((uStack_158 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_148,uStack_158 & 0xfffffffffffffffe);
  }
  if (lStack_78 != 0) {
    (**(code **)(lStack_78 + 8))(&lStack_78);
  }
  if ((bStack_270 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_260,CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
  }
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_263 = 0;
  uStack_260 = 0;
  uStack_278 = 0;
  bStack_270 = 0;
  uStack_26f = 0;
  uStack_258 = 0;
  func_0x0412f5e0(&bStack_270,&UNK_0147899b,0x28);
  uStack_278 = 0x605af8309cf82e5d;
  uStack_b0 = 0;
  uStack_1f0 = 0;
  lStack_b8 = 0;
  plStack_1f8 = (long *)&UNK_0ef580c0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x1c0,0);
  }
  plStack_248 = plStack_1f8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef57008;
  plStack_240 = (long *)0x0;
  plStack_1f8 = (long *)0x0;
  plVar6[4] = (long)&UNK_0f2ccd78;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(undefined1 *)(plVar6 + 0xd) = 0;
  FUN_04aa75f0(plVar6 + 0xe,&uStack_289,&UNK_01254d89);
  *(undefined1 *)(plVar6 + 0x10) = 0;
  plVar7 = plVar6 + 0x11;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0xffffffff;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  plVar6[4] = (long)&UNK_0ef57058;
  plVar6[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar6 + 0x2f) = 1;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  if (plStack_248 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_248)(&plStack_248,plVar6 + 0x30);
    plVar9 = plStack_248;
  }
  plStack_248 = (long *)0x0;
  plVar6[0x30] = (long)plVar9;
  puVar1 = (uint *)(plVar6 + 0x12);
  if (plVar7 == (long *)&DAT_0f552018) {
    plVar6[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar6[0x14] = _DAT_0f552030;
        uVar4 = uRam000000000f55202c;
        uVar3 = _DAT_0f552028;
        uVar2 = uRam000000000f552024;
        *puVar1 = _DAT_0f552020;
        *(undefined4 *)((long)plVar6 + 0x94) = uVar2;
        *(undefined4 *)(plVar6 + 0x13) = uVar3;
        *(undefined4 *)((long)plVar6 + 0x9c) = uVar4;
      }
      else {
        func_0x04885070(puVar1,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar14 = (_DAT_0f552020 & 1) != 0;
      lVar13 = 0xf552021;
      if (bVar14) {
        lVar13 = _DAT_0f552030;
      }
      uVar12 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar14) {
        uVar12 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar1,lVar13,uVar12);
    }
    plVar6[0x11] = _DAT_0f552018;
    plVar6[0x15] = 0;
    if (plStack_248 != (long *)0x0) {
      (*(code *)plStack_248[1])(&plStack_248);
    }
  }
  plVar9 = plVar6 + 1;
  plStack_288 = plVar7;
  if (plStack_1f8 != (long *)0x0) {
    (*(code *)plStack_1f8[1])(&plStack_1f8);
  }
  LOCK();
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  puStack_200 = puVar1;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef57138;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[4] = (long)&UNK_0ef57188;
  plVar7[0xe] = (long)(plVar6 + 4);
  plVar7[0xf] = (long)plVar6;
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  puStack_280 = (uint *)(plVar6 + 4);
  plStack_248 = plVar7 + 4;
  plStack_240 = plVar7;
  puVar8 = (undefined4 *)func_0x04aecb00(param_1,&uStack_278,1);
  plVar10 = *(long **)(puVar8 + 0x24);
  if (plVar10 < *(long **)(puVar8 + 0x26)) {
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[4] = 0;
    if (plVar10 == plStack_288) {
LAB_04abfc4b:
      *plVar10 = *plStack_288;
      plVar10[5] = (long)(plVar7 + 4);
      plVar10[6] = (long)plVar7;
LAB_04abfcc7:
      LOCK();
      plVar7[1] = plVar7[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_200 & 1) == 0) {
        plVar10[3] = *(long *)(puStack_200 + 4);
        lVar13 = *(long *)(puStack_200 + 2);
        plVar10[1] = *(long *)puStack_200;
        plVar10[2] = lVar13;
        goto LAB_04abfc4b;
      }
      func_0x04885070(plVar10 + 1,plVar6[0x14],plVar6[0x13]);
      *plVar10 = *plStack_288;
      plVar10[5] = (long)plStack_248;
      plVar10[6] = (long)plStack_240;
      plVar7 = plStack_240;
      if (plStack_240 != (long *)0x0) goto LAB_04abfcc7;
    }
    plVar10 = plVar10 + 7;
    *(long **)(puVar8 + 0x24) = plVar10;
  }
  else {
    plVar10 = (long *)func_0x04aeead0(puVar8 + 0x22,plStack_288,&plStack_248);
  }
  puVar1 = puStack_280;
  *(long **)(puVar8 + 0x24) = plVar10;
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  if (*(long *)(puVar8 + 2) != 0) {
    LOCK();
    plVar7 = (long *)(*(long *)(puVar8 + 2) + 8);
    *plVar7 = *plVar7 + 1;
    UNLOCK();
  }
  plVar7 = (long *)plVar6[0xf];
  *(undefined4 *)(plVar6 + 0xe) = uVar2;
  *(undefined4 *)((long)plVar6 + 0x74) = uVar3;
  *(undefined4 *)(plVar6 + 0xf) = uVar4;
  *(undefined4 *)((long)plVar6 + 0x7c) = uVar5;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar10 = plVar7 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      func_0x0412c2d0(plVar7);
    }
  }
  plVar7 = plStack_240;
  *(undefined1 *)(plVar6 + 0x10) = *(undefined1 *)((long)puVar8 + 0xa1);
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_240 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar7);
    }
  }
  LOCK();
  lVar13 = *plVar9;
  *plVar9 = *plVar9 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
    LOCK();
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar9;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
  }
  plVar6[0x2e] = _DAT_014e9660;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  (**(code **)(plVar6[4] + 0x10))(puVar1,&uStack_178);
  if ((uStack_178 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_168,uStack_178 & 0xfffffffffffffffe);
  }
  if (lStack_b8 != 0) {
    (**(code **)(lStack_b8 + 8))(&lStack_b8);
  }
  if ((bStack_270 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_260,CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
  }
  uStack_263 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  bStack_270 = 0x18;
  uStack_26f = 0x6465736f707865;
  uStack_268 = 0x5f;
  uStack_267 = 0x65636166;
  uStack_278 = 0x74a22031a4ba9709;
  uStack_f0 = 0;
  uStack_1f0 = 0;
  lStack_f8 = 0;
  plStack_1f8 = (long *)&UNK_0ef580d8;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x200,0);
  }
  plStack_248 = plStack_1f8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef571e8;
  plStack_240 = (long *)0x0;
  plStack_1f8 = (long *)0x0;
  plVar6[4] = (long)&UNK_0f2ccd78;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(undefined1 *)(plVar6 + 0xd) = 0;
  FUN_04aa75f0(plVar6 + 0xe,&uStack_289,&UNK_01254d89);
  *(undefined1 *)(plVar6 + 0x10) = 0;
  plVar7 = plVar6 + 0x11;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0xffffffff;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  plVar6[4] = (long)&UNK_0ef57238;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  plVar6[0x32] = 0;
  plVar6[0x33] = 0;
  plVar6[0x34] = 0;
  *(undefined4 *)(plVar6 + 0x35) = 0x3f800000;
  plVar6[0x36] = 0;
  plVar6[0x37] = 0;
  if (plStack_248 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_248)(&plStack_248,plVar6 + 0x36);
    plVar9 = plStack_248;
  }
  plStack_248 = (long *)0x0;
  plVar6[0x36] = (long)plVar9;
  *(undefined1 *)(plVar6 + 0x3e) = 0;
  puStack_280 = (uint *)(plVar6 + 0x12);
  if (plVar7 != (long *)&DAT_0f552138) {
    if ((*puStack_280 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar6[0x14] = _DAT_0f552150;
        uVar4 = uRam000000000f55214c;
        uVar3 = _DAT_0f552148;
        uVar2 = uRam000000000f552144;
        *puStack_280 = _DAT_0f552140;
        *(undefined4 *)((long)plVar6 + 0x94) = uVar2;
        *(undefined4 *)(plVar6 + 0x13) = uVar3;
        *(undefined4 *)((long)plVar6 + 0x9c) = uVar4;
      }
      else {
        func_0x04885070(puStack_280,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar14 = (_DAT_0f552140 & 1) != 0;
      lVar13 = 0xf552141;
      if (bVar14) {
        lVar13 = _DAT_0f552150;
      }
      uVar12 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar14) {
        uVar12 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_280,lVar13,uVar12);
    }
  }
  plVar6[0x11] = _DAT_0f552138;
  plVar6[0x15] = 0;
  plStack_288 = plVar7;
  if (plStack_248 != (long *)0x0) {
    (*(code *)plStack_248[1])(&plStack_248);
  }
  plVar7 = plVar6 + 1;
  if (plStack_1f8 != (long *)0x0) {
    (*(code *)plStack_1f8[1])(&plStack_1f8);
  }
  LOCK();
  *plVar7 = *plVar7 + 1;
  UNLOCK();
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef57318;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[4] = (long)&UNK_0ef57368;
  plVar9[0xe] = (long)(plVar6 + 4);
  plVar9[0xf] = (long)plVar6;
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  plStack_248 = plVar9 + 4;
  plStack_240 = plVar9;
  puStack_200 = (uint *)(plVar6 + 4);
  puVar8 = (undefined4 *)func_0x04aecb00(param_1,&uStack_278,0);
  plVar10 = *(long **)(puVar8 + 0x24);
  if (plVar10 < *(long **)(puVar8 + 0x26)) {
    plVar10[2] = 0;
    plVar10[3] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[4] = 0;
    if (plVar10 == plStack_288) {
LAB_04ac01c1:
      *plVar10 = *plStack_288;
      plVar10[5] = (long)(plVar9 + 4);
      plVar10[6] = (long)plVar9;
LAB_04ac022a:
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
    }
    else {
      if ((*puStack_280 & 1) == 0) {
        plVar10[3] = *(long *)(puStack_280 + 4);
        lVar13 = *(long *)(puStack_280 + 2);
        plVar10[1] = *(long *)puStack_280;
        plVar10[2] = lVar13;
        goto LAB_04ac01c1;
      }
      func_0x04885070(plVar10 + 1,plVar6[0x14],plVar6[0x13]);
      *plVar10 = *plStack_288;
      plVar10[5] = (long)plStack_248;
      plVar10[6] = (long)plStack_240;
      plVar9 = plStack_240;
      if (plStack_240 != (long *)0x0) goto LAB_04ac022a;
    }
    plVar10 = plVar10 + 7;
    *(long **)(puVar8 + 0x24) = plVar10;
  }
  else {
    plVar10 = (long *)func_0x04aeead0(puVar8 + 0x22,plStack_288,&plStack_248);
  }
  puVar1 = puStack_200;
  *(long **)(puVar8 + 0x24) = plVar10;
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  if (*(long *)(puVar8 + 2) != 0) {
    LOCK();
    plVar9 = (long *)(*(long *)(puVar8 + 2) + 8);
    *plVar9 = *plVar9 + 1;
    UNLOCK();
  }
  plVar9 = (long *)plVar6[0xf];
  *(undefined4 *)(plVar6 + 0xe) = uVar2;
  *(undefined4 *)((long)plVar6 + 0x74) = uVar3;
  *(undefined4 *)(plVar6 + 0xf) = uVar4;
  *(undefined4 *)((long)plVar6 + 0x7c) = uVar5;
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      func_0x0412c2d0(plVar9);
    }
  }
  plVar9 = plStack_240;
  *(undefined1 *)(plVar6 + 0x10) = *(undefined1 *)((long)puVar8 + 0xa1);
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar10 = plStack_240 + 1;
    lVar13 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar9);
    }
  }
  LOCK();
  lVar13 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
    LOCK();
    lVar13 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
  }
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  (**(code **)(*(long *)puVar1 + 0x10))(puVar1,&uStack_198);
  if ((uStack_198 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_188,uStack_198 & 0xfffffffffffffffe);
  }
  if (lStack_f8 != 0) {
    (**(code **)(lStack_f8 + 8))(&lStack_f8);
  }
  if ((bStack_270 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_260,CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
  }
  uStack_263 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_278 = 0xae8ea2e4ee1dc1c3;
  bStack_270 = 0x18;
  uStack_26f = 0x5f736563616c70;
  uStack_268 = 0x62;
  uStack_267 = 0x6b636f6c;
  uStack_130 = 0;
  uStack_1f0 = 0;
  lStack_138 = 0;
  plStack_1f8 = (long *)&UNK_0ef580f0;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x1b0,0);
  }
  plStack_248 = plStack_1f8;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef573c8;
  plStack_240 = (long *)0x0;
  plStack_1f8 = (long *)0x0;
  plVar6[4] = (long)&UNK_0f2ccd78;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(undefined1 *)(plVar6 + 0xd) = 0;
  FUN_04aa75f0(plVar6 + 0xe,&uStack_289,&UNK_01254d89);
  *(undefined1 *)(plVar6 + 0x10) = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0xffffffff;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[0x1e] = 0;
  plVar6[0x1f] = 0;
  plVar6[4] = (long)&UNK_0ef57418;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  if (plStack_248 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_248)(&plStack_248,plVar6 + 0x2e);
    plVar7 = plStack_248;
  }
  plVar9 = plVar6 + 1;
  plVar6[0x2e] = (long)plVar7;
  if (plStack_1f8 != (long *)0x0) {
    (*(code *)plStack_1f8[1])(&plStack_1f8);
  }
  LOCK();
  *plVar9 = *plVar9 + 1;
  UNLOCK();
  plStack_288 = plVar9;
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  plVar9 = plVar6 + 4;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&UNK_0ef574f8;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[4] = (long)&UNK_0ef57548;
  plVar7[0xe] = (long)plVar9;
  plVar7[0xf] = (long)plVar6;
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  plStack_248 = plVar7 + 4;
  plStack_240 = plVar7;
  puVar8 = (undefined4 *)func_0x04aecb00(param_1,&uStack_278,1);
  plVar10 = plVar6 + 0x11;
  plVar11 = *(long **)(puVar8 + 0x24);
  if (*(long **)(puVar8 + 0x26) <= plVar11) {
    plVar11 = (long *)func_0x04aeead0(puVar8 + 0x22,plVar10,&plStack_248);
    goto LAB_04ac0694;
  }
  plVar11[2] = 0;
  plVar11[3] = 0;
  *plVar11 = 0;
  plVar11[1] = 0;
  plVar11[4] = 0;
  if (plVar11 == plVar10) {
LAB_04ac0617:
    *plVar11 = *plVar10;
    plVar11[5] = (long)(plVar7 + 4);
    plVar11[6] = (long)plVar7;
LAB_04ac0683:
    LOCK();
    plVar7[1] = plVar7[1] + 1;
    UNLOCK();
  }
  else {
    if ((*(byte *)(plVar6 + 0x12) & 1) == 0) {
      plVar11[3] = plVar6[0x14];
      lVar13 = plVar6[0x13];
      plVar11[1] = plVar6[0x12];
      plVar11[2] = lVar13;
      goto LAB_04ac0617;
    }
    func_0x04885070(plVar11 + 1,plVar6[0x14],plVar6[0x13]);
    *plVar11 = *plVar10;
    plVar11[5] = (long)plStack_248;
    plVar11[6] = (long)plStack_240;
    plVar7 = plStack_240;
    if (plStack_240 != (long *)0x0) goto LAB_04ac0683;
  }
  plVar11 = plVar11 + 7;
  *(long **)(puVar8 + 0x24) = plVar11;
LAB_04ac0694:
  plVar7 = plStack_288;
  *(long **)(puVar8 + 0x24) = plVar11;
  uVar2 = *puVar8;
  uVar3 = puVar8[1];
  uVar4 = puVar8[2];
  uVar5 = puVar8[3];
  if (*(long *)(puVar8 + 2) != 0) {
    LOCK();
    plVar10 = (long *)(*(long *)(puVar8 + 2) + 8);
    *plVar10 = *plVar10 + 1;
    UNLOCK();
  }
  plVar10 = (long *)plVar6[0xf];
  *(undefined4 *)(plVar6 + 0xe) = uVar2;
  *(undefined4 *)((long)plVar6 + 0x74) = uVar3;
  *(undefined4 *)(plVar6 + 0xf) = uVar4;
  *(undefined4 *)((long)plVar6 + 0x7c) = uVar5;
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar13 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      func_0x0412c2d0(plVar10);
    }
  }
  plVar10 = plStack_240;
  *(undefined1 *)(plVar6 + 0x10) = *(undefined1 *)((long)puVar8 + 0xa1);
  if (plStack_240 != (long *)0x0) {
    LOCK();
    plVar11 = plStack_240 + 1;
    lVar13 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_240 + 0x10))(plStack_240);
      func_0x0412c2d0(plVar10);
    }
  }
  LOCK();
  lVar13 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
    LOCK();
    lVar13 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar13 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
  }
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    func_0x0412c2d0(plVar6);
  }
  auStack_1b8[0] = 0;
  auStack_1b8[1] = 0;
  auStack_1b8[2] = 0;
  (**(code **)(*plVar9 + 0x10))(plVar9,auStack_1b8);
  if ((auStack_1b8[0] & 1) != 0) {
    thunk_FUN_0ee326a0(auStack_1b8[2],auStack_1b8[0] & 0xfffffffffffffffe);
  }
  if (lStack_138 != 0) {
    (**(code **)(lStack_138 + 8))(&lStack_138);
  }
  if ((bStack_270 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_260,CONCAT71(uStack_26f,bStack_270) & 0xfffffffffffffffe);
  }
  return;
}


