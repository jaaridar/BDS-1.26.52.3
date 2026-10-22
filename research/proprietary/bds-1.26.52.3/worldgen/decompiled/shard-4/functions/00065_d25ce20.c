/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd35ce20 (ELF vaddr 0xd25ce20)
 * Label: caller-of-callee
 * Body:  [[0d35ce20, 0d35dedc] [0d35dee0, 0d35dfa1] [0d35dfb0, 0d35e0b9] [0d35e0c0, 0d35e1c4] [0d35e1d0, 0d35e24c] [0d35e250, 0d35e35d] [0d35e360, 0d35e5bd] [0d35e5c0, 0d35e5c7] [0d35e69b, 0d35e6b9] [0d35e74c, 0d35e781] [0d35e80b, 0d35e83a]]
 * Ghidra: FUN_0d35ce20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d35ce20(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  byte bVar12;
  char cVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long *plStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  byte bStack_298;
  undefined4 uStack_297;
  undefined4 uStack_293;
  undefined4 uStack_28f;
  undefined4 uStack_28b;
  undefined1 uStack_287;
  undefined1 uStack_286;
  uint5 uStack_285;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined2 uStack_268;
  long *plStack_260;
  long *plStack_258;
  long *plStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined2 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined2 uStack_1d0;
  undefined1 auStack_1c8 [8];
  ulong uStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong *puStack_188;
  ulong uStack_180;
  long *plStack_178;
  ulong uStack_170;
  undefined2 uStack_168;
  uint uStack_118;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined2 uStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long alStack_98 [4];
  long *plStack_78;
  long alStack_68 [4];
  long *plStack_48;
  
  func_0x0412d680(param_1 + 0x170);
  lStack_208 = *(long *)(param_1 + 0x198);
  lStack_200 = param_1;
  if ((*(long *)(param_1 + 0x130) == 0) &&
     (cVar13 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_01219c68),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((**(char **)(lStack_200 + 0x130) == '\0') &&
     (cVar13 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_01219c68),
     cVar13 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar19 = *(long *)(lStack_200 + 0x140);
  plStack_250 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (plStack_250 == (long *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  plStack_250[2] = 0;
  plStack_250[3] = 0;
  *plStack_250 = 0;
  plStack_250[1] = 0;
  plStack_250[4] = 0;
  *(undefined4 *)(plStack_250 + 4) = 0x3f800000;
  plStack_c8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  lStack_b8 = 0;
  puStack_b0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_78 = (long *)0x0;
  plStack_48 = (long *)0x0;
  lStack_210 = param_1 + 0x170;
  func_0x05d54750(auStack_1c8,&UNK_0f0863e8);
  func_0x0d6b2930(&bStack_298,&DAT_0f71f5a0,auStack_1c8);
  uStack_1f8 = CONCAT62(uStack_1f8._2_6_,0xffff);
  uStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_1e0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0x100;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xa8,0);
  }
  plStack_1b0 = _DAT_0f71f5a0;
  plStack_260 = _DAT_0f71f5a0;
  uVar21 = _DAT_0f71f5a8;
  lStack_d0 = lVar19;
  if ((_DAT_0f71f5a8 >> 0x37 & 1) != 0) {
    uVar21 = _DAT_0f71f5a8 & 0xff00ffffffffffff;
    lVar23 = *(long *)(uVar21 - 8);
    lVar19 = lVar23 + 9;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
    if (lVar19 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar19,8);
    }
    *plVar15 = lVar23;
    func_0x0eee2f00(plVar15 + 1,uVar21,lVar23);
    *(undefined1 *)((long)plVar15 + lVar23 + 8) = 0;
    uVar21 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_1a0 = 0;
  uStack_2a0 = _DAT_0f71f5b0;
  if ((_DAT_0f71f5b0 & 0x80000000000000) != 0) {
    uVar22 = _DAT_0f71f5b0 & 0xff00ffffffffffff;
    lVar23 = *(long *)(uVar22 - 8);
    lVar19 = lVar23 + 9;
    uStack_1a8 = uVar21;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
    if (lVar19 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar19,8);
    }
    *plVar15 = lVar23;
    func_0x0eee2f00(plVar15 + 1,uVar22,lVar23);
    *(undefined1 *)((long)plVar15 + lVar23 + 8) = 0;
    uStack_2a0 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_170 = uStack_270;
  plStack_178 = (long *)uStack_278;
  uStack_218 = uStack_268;
  uStack_100 = CONCAT62(uStack_100._2_6_,0xffff);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_e8 = 0;
  uStack_1e0 = 0;
  lStack_e0 = lStack_1d8;
  uStack_d8 = uStack_1d0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = (ulong *)CONCAT35((uint3)uStack_293,CONCAT41(uStack_297,bStack_298));
  uStack_190 = (ulong *)CONCAT35((undefined3)uStack_28b,CONCAT41(uStack_28f,uStack_293._3_1_));
  uStack_248 = CONCAT35((uint3)uStack_293,CONCAT41(uStack_297,bStack_298));
  uStack_293 = uStack_293 & 0xffffff;
  uStack_28f = 0;
  uStack_240 = 0;
  lStack_238 = 0;
  puStack_188 = (ulong *)CONCAT53(uStack_285,
                                  CONCAT12(uStack_286,CONCAT11(uStack_287,uStack_28b._3_1_)));
  uStack_28b = 0;
  uStack_287 = 0;
  uStack_286 = 0;
  uStack_285 = 0;
  uStack_230 = uStack_280;
  uStack_180 = uStack_280;
  uStack_228 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_220 = 0;
  uStack_168 = uStack_268;
  plStack_2b0 = plStack_260;
  uStack_2a8 = uVar21;
  func_0x0d6a8a30(plVar14,lStack_208,&plStack_2b0,&uStack_198);
  if ((uStack_170 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_170 & 0xff00ffffffffffff) - 8);
  }
  uStack_170 = 0;
  if (((ulong)plStack_178 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_178 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_178 = (long *)0x0;
  if (((ulong)puStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_188 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_188 = (ulong *)0x0;
  if (((ulong)uStack_190 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_190 & 0xff00ffffffffffff) - 8);
  }
  uStack_190 = (ulong *)0x0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a0 = 0;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = plStack_c0;
  *plVar14 = (long)&UNK_0f4619f0;
  *(undefined2 *)(plVar14 + 0xe) = 0xffff;
  plVar14[0xf] = 0;
  plVar14[0x10] = 0;
  plVar14[0x11] = 0;
  plVar14[0x12] = lStack_1d8;
  *(undefined2 *)(plVar14 + 0x13) = uStack_1d0;
  *(undefined2 *)(plVar14 + 0x14) = 0xfbf8;
  *(undefined1 *)((long)plVar14 + 0xa2) = 1;
  plStack_258 = plVar14;
  plVar14 = plStack_c8;
  while ((plVar14 != plVar15 &&
         (cVar13 = func_0x04fa7a10(*plVar14 + 0x20,plStack_258 + 7), cVar13 != '\0'))) {
    plVar14 = plVar14 + 1;
  }
  func_0x0d6af860(&plStack_c8,plVar14,&plStack_258);
  plVar14 = plStack_258;
  plStack_258 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_1e8;
  uStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar15 = plVar14 + 1;
    lVar19 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar19 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    plVar14 = plStack_1e8;
    uStack_1e0 = 0;
    if (plStack_1e8 != (long *)0x0) {
      LOCK();
      plVar15 = plStack_1e8 + 1;
      lVar19 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar19 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        func_0x0412c2d0(plVar14);
      }
    }
  }
  if ((uStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
  }
  uStack_270 = 0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if ((uStack_285 & 0x80000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT53(uStack_285,CONCAT12(uStack_286,CONCAT11(uStack_287,uStack_28b._3_1_))) &
               0xff00ffffffffffff) - 8);
  }
  uVar10 = uStack_28b;
  uStack_28b._3_1_ = 0;
  bVar12 = uStack_28b._3_1_;
  uStack_28b._3_1_ = 0;
  uStack_287 = 0;
  uStack_286 = 0;
  uStack_285 = 0;
  if ((uVar10 & 0x8000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT35((undefined3)uStack_28b,CONCAT41(uStack_28f,uStack_293._3_1_)) &
               0xff00ffffffffffff) - 8);
    bVar12 = uStack_28b._3_1_;
  }
  uStack_28b._3_1_ = bVar12;
  uStack_293 = uStack_293 & 0xffffff;
  uStack_28f = 0;
  uStack_28b = (uint)uStack_28b._3_1_ << 0x18;
  if ((uStack_1b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1b8 = 0;
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
  }
  func_0x05d54750(auStack_1c8,&UNK_0f0863e8);
  func_0x0d6b2930(&bStack_298,&DAT_0f71f5d8,auStack_1c8);
  uStack_1f8 = CONCAT62(uStack_1f8._2_6_,0xffff);
  uStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_1e0 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0x100;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa8);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0xa8,0);
  }
  plVar15 = _DAT_0f71f5d8;
  plStack_1b0 = _DAT_0f71f5d8;
  uVar21 = _DAT_0f71f5e0;
  if ((_DAT_0f71f5e0 & 0x80000000000000) != 0) {
    uVar21 = _DAT_0f71f5e0 & 0xff00ffffffffffff;
    lVar23 = *(long *)(uVar21 - 8);
    lVar19 = lVar23 + 9;
    plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
    if (lVar19 != 0 && plVar16 == (long *)0x0) {
      func_0x0eec74c0(lVar19,8);
    }
    *plVar16 = lVar23;
    func_0x0eee2f00(plVar16 + 1,uVar21,lVar23);
    *(undefined1 *)((long)plVar16 + lVar23 + 8) = 0;
    uVar21 = (ulong)(plVar16 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  uStack_1a0 = 0;
  uVar22 = _DAT_0f71f5e8;
  if ((_DAT_0f71f5e8 & 0x80000000000000) != 0) {
    plStack_260 = plVar15;
    uVar22 = _DAT_0f71f5e8 & 0xff00ffffffffffff;
    lVar23 = *(long *)(uVar22 - 8);
    lVar19 = lVar23 + 9;
    uStack_1a8 = uVar21;
    plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
    if (lVar19 != 0 && plVar15 == (long *)0x0) {
      func_0x0eec74c0(lVar19,8);
    }
    *plVar15 = lVar23;
    func_0x0eee2f00(plVar15 + 1,uVar22,lVar23);
    *(undefined1 *)((long)plVar15 + lVar23 + 8) = 0;
    uVar22 = (ulong)(plVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    plVar15 = plStack_260;
  }
  lVar19 = lStack_208;
  uStack_170 = uStack_270;
  plStack_178 = (long *)uStack_278;
  uStack_218 = uStack_268;
  uStack_100 = CONCAT62(uStack_100._2_6_,0xffff);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_e8 = 0;
  uStack_1e0 = 0;
  lStack_e0 = lStack_1d8;
  uStack_d8 = uStack_1d0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = (ulong *)CONCAT35((uint3)uStack_293,CONCAT41(uStack_297,bStack_298));
  uStack_190 = (ulong *)CONCAT35((undefined3)uStack_28b,CONCAT41(uStack_28f,uStack_293._3_1_));
  uStack_248 = CONCAT35((uint3)uStack_293,CONCAT41(uStack_297,bStack_298));
  uStack_293 = uStack_293 & 0xffffff;
  uStack_28f = 0;
  uStack_240 = 0;
  lStack_238 = 0;
  puStack_188 = (ulong *)CONCAT53(uStack_285,
                                  CONCAT12(uStack_286,CONCAT11(uStack_287,uStack_28b._3_1_)));
  uStack_28b = 0;
  uStack_287 = 0;
  uStack_286 = 0;
  uStack_285 = 0;
  uStack_230 = uStack_280;
  uStack_180 = uStack_280;
  uStack_228 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_220 = 0;
  uStack_168 = uStack_268;
  plStack_2b0 = plVar15;
  uStack_2a8 = uVar21;
  uStack_2a0 = uVar22;
  func_0x0d6a8a30(plVar14,lStack_208,&plStack_2b0,&uStack_198);
  if ((uStack_170 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_170 & 0xff00ffffffffffff) - 8);
  }
  uStack_170 = 0;
  if (((ulong)plStack_178 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)plStack_178 & 0xff00ffffffffffff) - 8)
    ;
  }
  plStack_178 = (long *)0x0;
  if (((ulong)puStack_188 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)puStack_188 & 0xff00ffffffffffff) - 8)
    ;
  }
  puStack_188 = (ulong *)0x0;
  if (((ulong)uStack_190 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,((ulong)uStack_190 & 0xff00ffffffffffff) - 8);
  }
  uStack_190 = (ulong *)0x0;
  if ((uStack_2a0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a0 & 0xff00ffffffffffff) - 8);
  }
  uStack_2a0 = 0;
  if ((uStack_2a8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_2a8 & 0xff00ffffffffffff) - 8);
  }
  plVar15 = plStack_c0;
  *plVar14 = (long)&UNK_0f461aa8;
  *(undefined2 *)(plVar14 + 0xe) = 0xffff;
  plVar14[0xf] = 0;
  plVar14[0x10] = 0;
  plVar14[0x11] = 0;
  plVar14[0x12] = lStack_1d8;
  *(undefined2 *)(plVar14 + 0x13) = uStack_1d0;
  *(undefined2 *)(plVar14 + 0x14) = 0xfbf8;
  *(undefined1 *)((long)plVar14 + 0xa2) = 1;
  plStack_2b0 = plVar14;
  plVar14 = plStack_c8;
  while ((plVar14 != plVar15 &&
         (cVar13 = func_0x04fa7a10(*plVar14 + 0x20,plStack_2b0 + 7), cVar13 != '\0'))) {
    plVar14 = plVar14 + 1;
  }
  func_0x0d6af860(&plStack_c8,plVar14,&plStack_2b0);
  plVar14 = plStack_2b0;
  plStack_2b0 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar14 = plStack_1e8;
  uStack_1f0 = 0;
  plStack_1e8 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar15 = plVar14 + 1;
    lVar23 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar23 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    plVar14 = plStack_1e8;
    uStack_1e0 = 0;
    if (plStack_1e8 != (long *)0x0) {
      LOCK();
      plVar15 = plStack_1e8 + 1;
      lVar23 = *plVar15;
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
        func_0x0412c2d0(plVar14);
      }
    }
  }
  if ((uStack_270 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_270 & 0xff00ffffffffffff) - 8);
  }
  uStack_270 = 0;
  if ((uStack_278 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_278 & 0xff00ffffffffffff) - 8);
  }
  uStack_278 = 0;
  if ((uStack_285 & 0x80000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT53(uStack_285,CONCAT12(uStack_286,CONCAT11(uStack_287,uStack_28b._3_1_))) &
               0xff00ffffffffffff) - 8);
  }
  uVar10 = uStack_28b;
  uStack_28b._3_1_ = 0;
  bVar12 = uStack_28b._3_1_;
  uStack_28b._3_1_ = 0;
  uStack_287 = 0;
  uStack_286 = 0;
  uStack_285 = 0;
  if ((uVar10 & 0x8000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT35((undefined3)uStack_28b,CONCAT41(uStack_28f,uStack_293._3_1_)) &
               0xff00ffffffffffff) - 8);
    bVar12 = uStack_28b._3_1_;
  }
  uStack_28b._3_1_ = bVar12;
  uStack_293 = uStack_293 & 0xffffff;
  uStack_28f = 0;
  uStack_28b = (uint)uStack_28b._3_1_ << 0x18;
  if ((uStack_1b8 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8);
  }
  uStack_1b8 = 0;
  if ((uStack_1c0 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1a0);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x1a0,0);
  }
  func_0x0d6b23d0(plVar14,&DAT_0f71f5a0,&DAT_0f71f5d8);
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  pcVar17 = *(char **)(lVar19 + 8);
  lVar23 = *(long *)(lVar19 + 0x10);
  if (lVar23 == 0) {
    plVar14[8] = (long)pcVar17;
    plVar14[9] = 0;
  }
  else {
    LOCK();
    *(long *)(lVar23 + 8) = *(long *)(lVar23 + 8) + 1;
    UNLOCK();
    plVar15 = (long *)plVar14[9];
    plVar14[8] = (long)pcVar17;
    plVar14[9] = lVar23;
    if (plVar15 != (long *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar23 = *plVar16;
      *plVar16 = *plVar16 + -1;
      UNLOCK();
      if (lVar23 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        func_0x0412c2d0(plVar15);
      }
      pcVar17 = (char *)plVar14[8];
    }
  }
  if ((pcVar17 == (char *)0x0) || (plVar14[10] = lVar19, *pcVar17 == '\0')) {
    uVar20 = func_0x04890760();
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    uVar20 = func_0x04882e20(uVar20);
    func_0x0ee386e0(&uStack_1a8);
    func_0x0412a280(plVar14,0xa8);
    func_0x049084c0(&uStack_1f8);
    func_0x05d864e0(&bStack_298);
    func_0x0ee386e0(&uStack_1b8);
    func_0x0ee386e0(&uStack_1c0);
    func_0x0d355e80(&plStack_c8);
    func_0x0d35e840(&plStack_250);
    func_0x0412d6b0(lStack_210);
    func_0x0eee2d70(uVar20);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar14[0xe] = 0;
  plVar14[0xf] = 0;
  plVar14[0xc] = 0;
  plVar14[0xd] = 0;
  *(undefined4 *)(plVar14 + 0x10) = 0x3f800000;
  *(undefined1 *)(plVar14 + 0x12) = 0;
  *(undefined1 *)(plVar14 + 0x24) = 0;
  *plVar14 = (long)&UNK_0f461ae8;
  plVar14[0x2a] = 0;
  plVar14[0x30] = 0;
  plVar14[0x32] = 0;
  puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  if (puVar18 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x28,0);
  }
  uVar20 = _UNK_01471275;
  puVar18[2] = _DAT_0147126d;
  puVar18[3] = uVar20;
  uVar20 = _UNK_01471265;
  *puVar18 = _DAT_0147125d;
  puVar18[1] = uVar20;
  *(undefined4 *)((long)puVar18 + 0x1f) = 0x61746164;
  *(undefined1 *)((long)puVar18 + 0x23) = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  lStack_238 = 0;
  bStack_298 = (byte)&uStack_248;
  uStack_297 = (undefined4)((ulong)&uStack_248 >> 8);
  uStack_293._0_3_ = (uint3)((ulong)&uStack_248 >> 0x28);
  uStack_293 = (uint)(uint3)uStack_293;
  uVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (uVar21 == 0) {
    func_0x0eec74c0(0x48,0);
  }
  lStack_238 = uVar21 + 0x48;
  uStack_198 = &uStack_248;
  uStack_190 = &uStack_1f8;
  puStack_188 = &uStack_100;
  uStack_180 = uStack_180 & 0xffffffffffffff00;
  uStack_248 = uVar21;
  uStack_240 = uVar21;
  uStack_1f8 = uVar21;
  uStack_100 = uVar21;
  func_0x0412e5e0(uVar21,puVar18,0x23);
  *(undefined1 *)(uStack_100 + 0x18) = 0x10;
  *(undefined8 *)(uStack_100 + 0x19) = 0x617461646174656d;
  *(undefined1 *)(uStack_100 + 0x21) = 0;
  *(undefined8 *)(uStack_100 + 0x30) = 0x67656c5f65737526;
  *(undefined8 *)(uStack_100 + 0x38) = 0x61746f725f796361;
  *(undefined8 *)(uStack_100 + 0x40) = 0x6e6f6974;
  uStack_240 = uStack_100 + 0x48;
  uStack_118 = 0;
  func_0x0d6ad9e0(plVar14 + 0xc,uStack_248,uStack_240,&uStack_198);
  if ((ulong)uStack_118 != 0xffffffff) {
    (**(code **)(&UNK_0f47df80 + (ulong)uStack_118 * 8))(&bStack_298,&uStack_198);
  }
  uVar22 = uStack_248;
  uVar21 = uStack_240;
  if (uStack_248 != 0) {
    for (; uVar22 != uVar21; uVar21 = uVar21 - 0x18) {
      if ((*(byte *)(uVar21 - 0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(uVar21 - 8),*(ulong *)(uVar21 - 0x18) & 0xfffffffffffffffe);
      }
    }
    uStack_240 = uVar22;
    func_0x0412a280(uStack_248,lStack_238 - uStack_248);
  }
  func_0x0412a280(puVar18,0x28);
  uStack_198 = (ulong *)plVar14;
  func_0x0d6afb30(&plStack_c8,&uStack_198);
  lVar19 = lStack_d0;
  if (uStack_198 != (ulong *)0x0) {
    (**(code **)(*uStack_198 + 8))();
  }
  uStack_248 = 0;
  uStack_240 = 0;
  lStack_238 = 0;
  lStack_208 = *(long *)(lVar19 + 0x98);
  if (*(long *)(lStack_208 + 0x10) != *(long *)(lStack_208 + 8)) {
    plStack_260 = plStack_250;
    lVar19 = *(long *)(lStack_208 + 0x10);
    do {
      bStack_298 = 0x22;
      uStack_297 = _DAT_01568ef8;
      uStack_293 = _UNK_01568efc;
      uStack_28f = _UNK_01568f00;
      uStack_28b = _UNK_01568f04;
      uStack_287 = 0x61;
      uStack_286 = 0;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      lVar23 = lVar19 + -0x110;
      *plVar14 = (long)&UNK_0f461d48;
      plVar14[1] = (long)plStack_260;
      plVar14[2] = lVar23;
      plVar14[3] = (long)&uStack_248;
      plVar14[4] = (long)&plStack_c8;
      uVar20 = *(undefined8 *)(lVar19 + -0x28);
      plVar15 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
      if (plVar15 == (long *)0x0) {
        func_0x0eec74c0(0x28,0);
      }
      *plVar15 = (long)&UNK_0f461d48;
      uVar3 = *(undefined4 *)((long)plVar14 + 0xc);
      lVar7 = plVar14[2];
      uVar4 = *(undefined4 *)((long)plVar14 + 0x14);
      lVar8 = plVar14[3];
      uVar5 = *(undefined4 *)((long)plVar14 + 0x1c);
      lVar9 = plVar14[4];
      uVar6 = *(undefined4 *)((long)plVar14 + 0x24);
      *(int *)(plVar15 + 1) = (int)plVar14[1];
      *(undefined4 *)((long)plVar15 + 0xc) = uVar3;
      *(int *)(plVar15 + 2) = (int)lVar7;
      *(undefined4 *)((long)plVar15 + 0x14) = uVar4;
      *(int *)(plVar15 + 3) = (int)lVar8;
      *(undefined4 *)((long)plVar15 + 0x1c) = uVar5;
      *(int *)(plVar15 + 4) = (int)lVar9;
      *(undefined4 *)((long)plVar15 + 0x24) = uVar6;
      plStack_178 = plVar15;
      func_0x0d62a6f0(uVar20,&bStack_298,&uStack_198,*(undefined4 *)(lVar19 + -8),0);
      if (plStack_178 == &uStack_198) {
        lVar19 = 0x20;
LAB_0d35e0c5:
        (**(code **)(*plStack_178 + lVar19))();
      }
      else {
        lVar19 = 0x28;
        if (plStack_178 != (long *)0x0) goto LAB_0d35e0c5;
      }
      (**(code **)(*plVar14 + 0x28))(plVar14);
      if ((bStack_298 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_285,
                                 CONCAT12(uStack_286,CONCAT11(uStack_287,uStack_28b._3_1_))),
                        CONCAT35((uint3)uStack_293,CONCAT41(uStack_297,bStack_298)) &
                        0xfffffffffffffffe);
      }
      lVar19 = lVar23;
    } while (lVar23 != *(long *)(lStack_208 + 8));
    if ((uStack_248 & 1) != 0) {
      func_0x0412a280(lStack_238,uStack_248 & 0xfffffffffffffffe);
    }
  }
  if (plStack_48 == alStack_68) {
    lVar19 = 0x20;
LAB_0d35e15c:
    (**(code **)(*plStack_48 + lVar19))();
  }
  else {
    lVar19 = 0x28;
    if (plStack_48 != (long *)0x0) goto LAB_0d35e15c;
  }
  if (plStack_78 == alStack_98) {
    lVar19 = 0x20;
LAB_0d35e190:
    (**(code **)(*plStack_78 + lVar19))();
  }
  else {
    lVar19 = 0x28;
    if (plStack_78 != (long *)0x0) goto LAB_0d35e190;
  }
  func_0x04908570(&puStack_b0,uStack_a8);
  plVar15 = plStack_c8;
  plVar14 = plStack_c0;
  if (plStack_c8 != (long *)0x0) {
    for (; plVar15 != plVar14; plVar14 = plVar14 + -1) {
      plVar16 = (long *)plVar14[-1];
      plVar14[-1] = 0;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))();
      }
    }
    plStack_c0 = plVar15;
    func_0x0412a280(plStack_c8,lStack_b8 - (long)plStack_c8);
  }
  plVar14 = (long *)plStack_250[2];
  if (plVar14 == (long *)0x0) {
    lVar19 = 0;
  }
  else {
    lStack_200 = lStack_200 + 0x148;
    do {
      puVar18 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x40,0);
      }
      plStack_c8 = plVar14 + 2;
      puVar18[1] = 0;
      puVar18[2] = 0;
      *puVar18 = &UNK_0f4611d8;
      uStack_198 = puVar18 + 3;
      puVar18[3] = plVar14[3];
      *(int *)(puVar18 + 4) = (int)plVar14[4];
      uVar3 = *(undefined4 *)((long)plVar14 + 0x2c);
      lVar19 = plVar14[6];
      uVar4 = *(undefined4 *)((long)plVar14 + 0x34);
      *(int *)(puVar18 + 5) = (int)plVar14[5];
      *(undefined4 *)((long)puVar18 + 0x2c) = uVar3;
      *(int *)(puVar18 + 6) = (int)lVar19;
      *(undefined4 *)((long)puVar18 + 0x34) = uVar4;
      puVar18[7] = plVar14[7];
      plVar14[5] = 0;
      plVar14[6] = 0;
      plVar14[7] = 0;
      uStack_190 = puVar18;
      lVar19 = func_0x064a9850(lStack_200,plStack_c8,&UNK_01563a4f,&plStack_c8,&uStack_248);
      uVar3 = (undefined4)uStack_198;
      uVar4 = uStack_198._4_4_;
      uVar5 = (undefined4)uStack_190;
      uVar6 = uStack_190._4_4_;
      uStack_198 = (ulong *)0x0;
      uStack_190 = (ulong *)0x0;
      plVar15 = *(long **)(lVar19 + 0x20);
      *(undefined4 *)(lVar19 + 0x18) = uVar3;
      *(undefined4 *)(lVar19 + 0x1c) = uVar4;
      *(undefined4 *)(lVar19 + 0x20) = uVar5;
      *(undefined4 *)(lVar19 + 0x24) = uVar6;
      if (plVar15 != (long *)0x0) {
        LOCK();
        plVar16 = plVar15 + 1;
        lVar19 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          func_0x0412c2d0(plVar15);
          puVar11 = uStack_190;
          if (uStack_190 != (ulong *)0x0) {
            LOCK();
            puVar1 = uStack_190 + 1;
            uVar21 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if (uVar21 == 0) {
              (**(code **)(*uStack_190 + 0x10))(uStack_190);
              func_0x0412c2d0(puVar11);
            }
          }
        }
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
    lVar23 = lStack_210;
    if (plStack_250 == (long *)0x0) goto LAB_0d35e3e7;
    lVar19 = plStack_250[2];
  }
  lVar23 = lStack_210;
  plVar14 = plStack_250;
  func_0x0d3488a0(plStack_250,lVar19);
  lVar19 = *plVar14;
  *plVar14 = 0;
  if (lVar19 != 0) {
    func_0x0412a280(lVar19,plVar14[1] << 3);
  }
  func_0x0412a280(plVar14,0x28);
LAB_0d35e3e7:
  func_0x0412d6b0(lVar23);
  return;
}



/* ---- referenced strings ----
 * 0x147125d  minecraft:jigsaw_structure_metadata
 * 0x147126d  _structure_metadata
 * 0x1568ef8  worldgen/metadata
 */
