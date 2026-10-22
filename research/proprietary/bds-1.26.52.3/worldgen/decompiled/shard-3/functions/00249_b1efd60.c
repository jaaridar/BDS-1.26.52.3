/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb2efd60 (ELF vaddr 0xb1efd60)
 * Label: caller-of-callee
 * Body:  [[0b2efd60, 0b2f2457] [0b2f2460, 0b2f2b8a] [0b2f2b90, 0b2f2bcc] [0b2f2bd0, 0b2f602e] [0b2f6d33, 0b2f6da4] [0b2f72b8, 0b2f72f7] [0b2f74bb, 0b2f74c5] [0b2f74cd, 0b2f74f7]]
 * Ghidra: FUN_0b2efd60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b2efd60(undefined8 *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 **ppuVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  long lVar28;
  byte *pbVar29;
  long *plVar30;
  long *plVar31;
  bool bVar32;
  byte *pbStack_338;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  uint *puStack_2e0;
  undefined8 *puStack_2d8;
  uint uStack_2d0;
  undefined1 uStack_2cc;
  undefined1 uStack_2cb;
  undefined2 uStack_2ca;
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined2 uStack_2c6;
  undefined1 uStack_2c4;
  undefined1 uStack_2c3;
  undefined2 uStack_2c2;
  undefined1 uStack_2c0;
  undefined1 uStack_2bf;
  undefined1 uStack_2be;
  undefined5 uStack_2bd;
  undefined8 uStack_2b8;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  long *plStack_278;
  byte bStack_270;
  byte bStack_26f;
  undefined2 uStack_26e;
  undefined1 uStack_26c;
  undefined2 uStack_26b;
  undefined1 uStack_269;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined6 uStack_25e;
  undefined8 uStack_258;
  ulong uStack_238;
  byte bStack_230;
  byte bStack_22f;
  undefined2 uStack_22e;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined6 uStack_21e;
  byte *pbStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  byte *pbStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  byte *pbStack_198;
  long *plStack_190;
  long *plStack_188;
  byte *pbStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  *param_1 = &UNK_0f2ccd78;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  puStack_210 = param_1;
  func_0x04aa75f0(param_1 + 10,&puStack_328,&UNK_01254d89);
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xffffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = &UNK_0f29c4c0;
  ppuVar24 = (undefined8 **)(param_1 + 0x2a);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  if (ppuVar24 != &puStack_78) {
    if (puStack_78 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_78)(&puStack_78,ppuVar24);
      puVar15 = puStack_78;
    }
    puStack_78 = (undefined8 *)0x0;
    *ppuVar24 = puVar15;
  }
  if (param_1 != (undefined8 *)0xf5520a0) {
    puVar1 = (uint *)(puStack_210 + 0xe);
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        puStack_210[0x10] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)puStack_210 + 0x74) = uVar7;
        *(undefined4 *)(puStack_210 + 0xf) = uVar8;
        *(undefined4 *)((long)puStack_210 + 0x7c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar32 = (_DAT_0f552110 & 1) != 0;
      lVar12 = 0xf552111;
      if (bVar32) {
        lVar12 = _DAT_0f552120;
      }
      uVar27 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
  }
  puVar15 = puStack_210;
  puStack_210[0xd] = _DAT_0f552108;
  puStack_210[0x11] = 0;
  if (puStack_78 != (undefined8 *)0x0) {
    (*(code *)puStack_78[1])(&puStack_78);
  }
  *puVar15 = &UNK_0f29c408;
  puVar15[0x34] = 0;
  puVar15[0x35] = 0;
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    lVar12 = 0;
  }
  else {
    (**(code **)*param_2)(param_2,puVar15 + 0x34);
    lVar12 = *param_2;
  }
  *param_2 = 0;
  puVar15[0x34] = lVar12;
  plStack_188 = puVar15 + 0x34;
  lVar12 = func_0x0b2f9e20(puVar15,0,&UNK_01226e4e);
  puStack_328 = (undefined8 *)&UNK_0f29c7b0;
  uStack_320._0_4_ = 0;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2f9e20(puVar15,4,&UNK_0119dc14);
  puStack_328 = (undefined8 *)&UNK_0f29c7b0;
  uStack_320._0_4_ = 4;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fc700(puVar15,8,&UNK_011ed3ce);
  puStack_328 = (undefined8 *)&UNK_0f29c9c0;
  uStack_320._0_4_ = 8;
  uStack_320._4_4_ = 0;
  uStack_318._0_1_ = 1;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fc700(puVar15,9,&UNK_01298bc1);
  puStack_328 = (undefined8 *)&UNK_0f29c9c0;
  uStack_320._0_4_ = 9;
  uStack_320._4_4_ = 0;
  uStack_318._0_1_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fc700(puVar15,10,&UNK_01430510);
  puStack_328 = (undefined8 *)&UNK_0f29c9c0;
  uStack_320._0_4_ = 10;
  uStack_320._4_4_ = 0;
  uStack_318._0_1_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fc700(puVar15,0xb,&UNK_0128e8db);
  puStack_328 = (undefined8 *)&UNK_0f29c9c0;
  uStack_320._0_4_ = 0xb;
  uStack_320._4_4_ = 0;
  uStack_318._0_1_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fc700(puVar15,0xc,&UNK_0134eaac);
  puStack_328 = (undefined8 *)&UNK_0f29c9c0;
  uStack_320._0_4_ = 0xc;
  uStack_320._4_4_ = 0;
  uStack_318._0_1_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fc700(puVar15,0xd,&UNK_0124beb9);
  puStack_328 = (undefined8 *)&UNK_0f29c9c0;
  uStack_320._0_4_ = 0xd;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = (uint)uStack_318._1_3_ << 8;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fe5a0(puVar15,0x10,&UNK_011c6e32);
  puStack_328 = (undefined8 *)&UNK_0f29cbd0;
  uStack_320._0_4_ = 0x10;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  lVar12 = func_0x0b2fe5a0(puVar15,0x14,&UNK_0142095c);
  puStack_328 = (undefined8 *)&UNK_0f29cbd0;
  uStack_320._0_4_ = 0x14;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar13 = puStack_328;
    }
    else {
      puVar13 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar13;
  }
  func_0x0b2f7500(puVar15,0x18,&UNK_011ab9d0);
  func_0x0b2f7500(puVar15,0x38,&UNK_0143b861);
  lVar12 = func_0x0b2f9e20(puVar15,0xf8,&UNK_01298bca);
  puStack_328 = (undefined8 *)&UNK_0f29c7b0;
  uStack_320._0_4_ = 0xf8;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = 0;
  ppuVar24 = (undefined8 **)(lVar12 + 0x110);
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar15;
  }
  uStack_21e = 0;
  pbStack_218 = (byte *)0x0;
  bStack_230 = 0x22;
  bStack_22f = (byte)_DAT_0134e268;
  uStack_22e = (undefined2)((uint)_DAT_0134e268 >> 8);
  uStack_22c = (undefined1)((uint)_DAT_0134e268 >> 0x18);
  uStack_22b = (undefined1)_UNK_0134e26c;
  uStack_22a = (undefined2)((uint)_UNK_0134e26c >> 8);
  uStack_228._1_3_ = (undefined3)_UNK_0134e270;
  uStack_228 = CONCAT31(uStack_228._1_3_,(char)((uint)_UNK_0134e26c >> 0x18));
  uStack_224._1_3_ = (undefined3)_UNK_0134e274;
  uStack_224 = CONCAT31(uStack_224._1_3_,(char)((uint)_UNK_0134e270 >> 0x18));
  uStack_220 = (undefined1)((uint)_UNK_0134e274 >> 0x18);
  uStack_21f = 0x6d;
  uStack_238 = 0xe81501044d2cae75;
  puStack_200 = (undefined *)0x58;
  uStack_2d0 = 0x58;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_208 = (undefined *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29cfc0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29cdf0;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&plStack_278,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29ce40;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x2e);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x2e] = (long)puVar15;
  puStack_1b8 = &UNK_013fe287;
  uStack_1b0 = 4;
  func_0x0470d9a0(&uStack_290,&UNK_01384326,0xc,0xd,&puStack_1b8);
  plStack_278 = (long *)0x0;
  if ((uStack_290 & 1) == 0) {
    uStack_260 = (undefined1)uStack_280;
    uStack_25f = (undefined1)((ulong)uStack_280 >> 8);
    uStack_25e = (undefined6)((ulong)uStack_280 >> 0x10);
    bStack_270 = (byte)uStack_290;
    bStack_26f = (byte)(uStack_290 >> 8);
    uStack_26e = (undefined2)(uStack_290 >> 0x10);
    uStack_26c = (undefined1)uStack_28c;
    uStack_26b = (undefined2)((uint)uStack_28c >> 8);
    uStack_269 = (undefined1)((uint)uStack_28c >> 0x18);
    uStack_268 = uStack_288;
    uStack_264 = uStack_284;
  }
  else {
    func_0x0412e5e0(&bStack_270,uStack_280,CONCAT44(uStack_284,uStack_288));
  }
  uStack_258 = 0;
  if ((bStack_270 & 1) == 0) {
    if (bStack_270 >> 1 != 0) goto LAB_0b2f0690;
LAB_0b2f0776:
    plStack_278 = (long *)0x0;
    bVar5 = *(byte *)(plVar14 + 0x12);
  }
  else {
    if (CONCAT44(uStack_264,uStack_268) == 0) goto LAB_0b2f0776;
LAB_0b2f0690:
    if ((bStack_270 & 1) == 0) {
      pbVar29 = &bStack_26f;
      if (pbVar29 == (byte *)0x0) goto LAB_0b2f07a5;
LAB_0b2f06a9:
      if (*pbVar29 == 0) goto LAB_0b2f0776;
      plVar31 = (long *)0xcbf29ce484222325;
      uVar27 = strlen(pbVar29);
      if (uVar27 != 0) {
        uVar20 = (ulong)((uint)uVar27 & 7);
        if (7 < uVar27) {
          uVar27 = uVar27 & 0xfffffffffffffff8;
          do {
            plVar31 = (long *)(((((((((long)plVar31 * 0x100000001b3 ^ (ulong)*pbVar29) *
                                     0x100000001b3 ^ (ulong)pbVar29[1]) * 0x100000001b3 ^
                                   (ulong)pbVar29[2]) * 0x100000001b3 ^ (ulong)pbVar29[3]) *
                                  0x100000001b3 ^ (ulong)pbVar29[4]) * 0x100000001b3 ^
                                (ulong)pbVar29[5]) * 0x100000001b3 ^ (ulong)pbVar29[6]) *
                               0x100000001b3 ^ (ulong)pbVar29[7]);
            pbVar29 = pbVar29 + 8;
            uVar27 = uVar27 - 8;
          } while (uVar27 != 0);
        }
        if (uVar20 != 0) {
          uVar27 = 0;
          do {
            plVar31 = (long *)((long)plVar31 * 0x100000001b3 ^ (ulong)pbVar29[uVar27]);
            uVar27 = uVar27 + 1;
          } while (uVar20 != uVar27);
        }
      }
    }
    else {
      pbVar29 = (byte *)CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260));
      if (pbVar29 != (byte *)0x0) goto LAB_0b2f06a9;
LAB_0b2f07a5:
      plVar31 = (long *)0x0;
    }
    bVar5 = *(byte *)(plVar14 + 0x12);
    plStack_278 = plVar31;
  }
  if ((bVar5 & 1) != 0) {
    func_0x0412a280(plVar14[0x14],plVar14[0x12] & 0xfffffffffffffffe);
  }
  pbVar29 = (byte *)(plVar14 + 0x12);
  plVar14[0x14] = CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260));
  *(uint *)pbVar29 = CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270));
  *(uint *)((long)plVar14 + 0x94) = CONCAT13(uStack_269,CONCAT21(uStack_26b,uStack_26c));
  *(undefined4 *)(plVar14 + 0x13) = uStack_268;
  *(undefined4 *)((long)plVar14 + 0x9c) = uStack_264;
  bStack_270 = 0;
  bStack_26f = 0;
  plVar14[0x11] = (long)plStack_278;
  plVar14[0x15] = 0;
  if ((uStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,CONCAT44(uStack_28c,uStack_290) & 0xfffffffffffffffe);
  }
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  plVar31 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29cf20;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29cf70;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b2fa550(puStack_210,&uStack_238);
  plVar21 = plVar14 + 0x11;
  plVar17 = *(long **)(puVar16 + 0x24);
  if (plVar17 < *(long **)(puVar16 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar21) {
      if ((*pbVar29 & 1) == 0) {
        plVar17[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        plVar17[1] = *(long *)pbVar29;
        plVar17[2] = lVar12;
      }
      else {
        FUN_04885070(plVar17 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar17 = *plVar21;
    plVar17[5] = (long)(puVar15 + 4);
    plVar17[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar16 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0b2fc310(puVar16 + 0x22,plVar21,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar17;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar21 = plVar17 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar17 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar21 = plVar17 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  puVar15 = puStack_210;
  LOCK();
  lVar12 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if ((bStack_230 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220)),
                    CONCAT26(uStack_22a,
                             CONCAT15(uStack_22b,
                                      CONCAT14(uStack_22c,
                                               CONCAT22(uStack_22e,CONCAT11(bStack_22f,bStack_230)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_2c2 = 0;
  uStack_2c0 = 0;
  uStack_2bf = 0;
  uStack_2be = 0;
  uStack_2bd = 0;
  uStack_2b8 = 0;
  uStack_2d0 = 0x746e691a;
  uStack_2cc = 0x65;
  uStack_2cb = 0x72;
  uStack_2ca = 0x6361;
  uStack_2c8 = 0x74;
  uStack_2c7 = 0x5f;
  uStack_2c6 = 0x6574;
  uStack_2c4 = 0x78;
  uStack_2c3 = 0x74;
  puStack_2d8 = (undefined8 *)0x26926831390a45cf;
  puStack_328 = (undefined8 *)&UNK_0f29cfd8;
  uStack_320._0_4_ = 0x70;
  uStack_320._4_4_ = 0;
  func_0x0b3003f0(puVar15,&puStack_2d8,&puStack_328);
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  if ((uStack_2d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_2bd,CONCAT12(uStack_2be,CONCAT11(uStack_2bf,uStack_2c0))),
                    CONCAT26(uStack_2ca,CONCAT15(uStack_2cb,CONCAT14(uStack_2cc,uStack_2d0))) &
                    0xfffffffffffffffe);
  }
  uStack_2bd = 0;
  uStack_2b8 = 0;
  uStack_2d0._1_3_ = (undefined3)_DAT_011fbabf;
  uStack_2d0 = CONCAT31(uStack_2d0._1_3_,0x24);
  uStack_2cc = (undefined1)((uint)_DAT_011fbabf >> 0x18);
  uStack_2cb = (undefined1)_UNK_011fbac3;
  uStack_2ca = (undefined2)((uint)_UNK_011fbac3 >> 8);
  uStack_2c8 = (undefined1)((uint)_UNK_011fbac3 >> 0x18);
  uStack_2c7 = (undefined1)_UNK_011fbac7;
  uStack_2c6 = (undefined2)((uint)_UNK_011fbac7 >> 8);
  uStack_2c4 = (undefined1)((uint)_UNK_011fbac7 >> 0x18);
  uStack_2c3 = (undefined1)_UNK_011fbacb;
  uStack_2c2 = (undefined2)((uint)_UNK_011fbacb >> 8);
  uStack_2c0 = (undefined1)((uint)_UNK_011fbacb >> 0x18);
  uStack_2bf = 0x65;
  uStack_2be = 0x6d;
  puStack_2d8 = (undefined8 *)0xf57c095e1a0cd0ae;
  uStack_b0 = 0;
  puStack_b8 = (undefined8 *)&UNK_0f29d1e8;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29d000;
  puStack_328 = (undefined8 *)0x0;
  uStack_320._0_4_ = 0;
  uStack_320._4_4_ = 0;
  if (puStack_b8 == (undefined8 *)0x0) {
    puStack_328 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_b8)(&puStack_b8,&puStack_328);
    puStack_328 = puStack_b8;
  }
  puStack_b8 = (undefined8 *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&puStack_208,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29d050;
  ppuVar24 = (undefined8 **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  *(undefined1 *)(plVar14 + 0x36) = 0;
  if (ppuVar24 != &puStack_328) {
    if (puStack_328 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    puStack_328 = (undefined8 *)0x0;
    *ppuVar24 = puVar15;
  }
  plVar17 = plVar14 + 4;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar32 = (_DAT_0f552110 & 1) != 0;
      lVar12 = 0xf552111;
      if (bVar32) {
        lVar12 = _DAT_0f552120;
      }
      uVar27 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
  }
  plVar21 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f552108;
  plVar14[0x15] = 0;
  puStack_2e0 = puVar1;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29d148;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29d198;
  puVar15[0xe] = plVar17;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b2fa550(puStack_210,&puStack_2d8);
  plVar18 = *(long **)(puVar16 + 0x24);
  if (plVar18 < *(long **)(puVar16 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 != plVar31) {
      puVar1 = (uint *)(plVar18 + 1);
      if ((*puStack_2e0 & 1) == 0) {
        plVar18[3] = *(long *)(puStack_2e0 + 4);
        lVar12 = *(long *)(puStack_2e0 + 2);
        *(undefined8 *)puVar1 = *(undefined8 *)puStack_2e0;
        plVar18[2] = lVar12;
      }
      else {
        puStack_2e0 = puVar1;
        FUN_04885070(puVar1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar18 = *plVar31;
    plVar18[5] = (long)(puVar15 + 4);
    plVar18[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar18 = plVar18 + 7;
    *(long **)(puVar16 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x0b2fc310(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar18;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (*(code *)puStack_b8[1])(&puStack_b8);
  }
  if ((uStack_2d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_2bd,CONCAT12(uStack_2be,CONCAT11(uStack_2bf,uStack_2c0))),
                    CONCAT26(uStack_2ca,CONCAT15(uStack_2cb,CONCAT14(uStack_2cc,uStack_2d0))) &
                    0xfffffffffffffffe);
  }
  uStack_26b = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25e = 0;
  uStack_258 = 0;
  bStack_270 = 8;
  bStack_26f = 0x73;
  uStack_26e = 0x6f6c;
  uStack_26c = 0x74;
  plStack_278 = (long *)0x93026c7ea344dae1;
  puStack_200 = (undefined *)0x8;
  uStack_2d0 = 8;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_208 = (undefined *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29d438;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29d210;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29d260;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  plVar14[0x32] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  *(undefined4 *)(plVar14 + 0x35) = 0x3f800000;
  plVar14[0x36] = 0;
  plVar14[0x37] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x36);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x36] = (long)puVar15;
  *(undefined1 *)(plVar14 + 0x3e) = 0;
  puStack_2e0 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f552138) {
    if ((*puStack_2e0 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552150;
        uVar9 = uRam000000000f55214c;
        uVar8 = _DAT_0f552148;
        uVar7 = uRam000000000f552144;
        *puStack_2e0 = _DAT_0f552140;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puStack_2e0,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar32 = (_DAT_0f552140 & 1) != 0;
      lVar12 = 0xf552141;
      if (bVar32) {
        lVar12 = _DAT_0f552150;
      }
      uVar27 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puStack_2e0,lVar12,uVar27);
    }
  }
  plVar14[0x11] = _DAT_0f552138;
  plVar14[0x15] = 0;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  plVar21 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29d340;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29d390;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b307440(plVar17,&plStack_278);
  plVar18 = *(long **)(puVar16 + 0x24);
  if (plVar18 < *(long **)(puVar16 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 != plVar31) {
      puVar1 = (uint *)(plVar18 + 1);
      if ((*puStack_2e0 & 1) == 0) {
        plVar18[3] = *(long *)(puStack_2e0 + 4);
        lVar12 = *(long *)(puStack_2e0 + 2);
        *(undefined8 *)puVar1 = *(undefined8 *)puStack_2e0;
        plVar18[2] = lVar12;
      }
      else {
        puStack_2e0 = puVar1;
        FUN_04885070(puVar1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar18 = *plVar31;
    plVar18[5] = (long)(puVar15 + 4);
    plVar18[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar18 = plVar18 + 7;
    *(long **)(puVar16 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x0b309cc0(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar18;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260)),
                    CONCAT17(uStack_269,
                             CONCAT25(uStack_26b,
                                      CONCAT14(uStack_26c,
                                               CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25e = 0;
  uStack_258 = 0;
  bStack_270 = 0xc;
  bStack_26f = 0x61;
  uStack_26e = 0x6f6d;
  uStack_26c = 0x75;
  uStack_26b = 0x746e;
  uStack_269 = 0;
  plStack_278 = (long *)0x426e925a7b12a849;
  puStack_200 = &UNK_0d8dd450;
  uStack_1f8 = 0;
  uStack_2d0 = 0xd8dd450;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  uStack_2c8 = 0;
  uStack_2c7 = 0;
  uStack_2c6 = 0;
  uStack_2c4 = 0;
  uStack_2c3 = 0;
  uStack_2c2 = 0;
  puStack_208 = (undefined *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29d630;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29d460;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  uStack_318._0_4_ = CONCAT22(uStack_2c6,CONCAT11(uStack_2c7,uStack_2c8));
  uStack_318._4_4_ = CONCAT22(uStack_2c2,CONCAT11(uStack_2c3,uStack_2c4));
  uStack_320._0_4_ = uStack_2d0;
  puStack_2d8 = (undefined8 *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29d4b0;
  plVar14[0x2e] = 0x7fffffff80000000;
  *(undefined1 *)(plVar14 + 0x2f) = 1;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x30);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x30] = (long)puVar15;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 == (long *)&DAT_0f552078) {
    plVar14[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552080 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552090;
        uVar9 = uRam000000000f55208c;
        uVar8 = _DAT_0f552088;
        uVar7 = uRam000000000f552084;
        *puVar1 = _DAT_0f552080;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552090,CONCAT44(uRam000000000f55208c,_DAT_0f552088));
      }
    }
    else {
      bVar32 = (_DAT_0f552080 & 1) != 0;
      lVar12 = 0xf552081;
      if (bVar32) {
        lVar12 = _DAT_0f552090;
      }
      uVar27 = (ulong)((_DAT_0f552080 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55208c,_DAT_0f552088);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
    plVar14[0x11] = _DAT_0f552078;
    plVar14[0x15] = 0;
    if (puStack_328 != (undefined8 *)0x0) {
      (*(code *)puStack_328[1])(&puStack_328);
    }
  }
  plVar21 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puStack_2e0 = puVar1;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29d590;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29d5e0;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b307440(plVar17,&plStack_278);
  plVar17 = *(long **)(puVar16 + 0x24);
  if (plVar17 < *(long **)(puVar16 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar31) {
      if ((*puStack_2e0 & 1) == 0) {
        plVar17[3] = *(long *)(puStack_2e0 + 4);
        lVar12 = *(long *)(puStack_2e0 + 2);
        plVar17[1] = *(long *)puStack_2e0;
        plVar17[2] = lVar12;
      }
      else {
        FUN_04885070(plVar17 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar17 = *plVar31;
    plVar17[5] = (long)(puVar15 + 4);
    plVar17[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar16 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0b309cc0(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar17;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar17 = plVar31 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar17 = plVar31 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260)),
                    CONCAT17(uStack_269,
                             CONCAT25(uStack_26b,
                                      CONCAT14(uStack_26c,
                                               CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_2c6 = 0;
  uStack_2c4 = 0;
  uStack_2c3 = 0;
  uStack_2c2 = 0;
  uStack_2c0 = 0;
  uStack_2bf = 0;
  uStack_2be = 0;
  uStack_2bd = 0;
  uStack_2b8 = 0;
  uStack_2d0 = 0x64646112;
  uStack_2cc = 0x5f;
  uStack_2cb = 0x69;
  uStack_2ca = 0x6574;
  uStack_2c8 = 0x6d;
  uStack_2c7 = 0x73;
  puStack_2d8 = (undefined8 *)0xcad041d454cb3aeb;
  uStack_f0 = 0;
  puStack_f8 = (undefined8 *)&UNK_0f29d840;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29d658;
  puStack_328 = (undefined8 *)0x0;
  uStack_320._0_4_ = 0;
  uStack_320._4_4_ = 0;
  if (puStack_f8 == (undefined8 *)0x0) {
    puStack_328 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_f8)(&puStack_f8,&puStack_328);
    puStack_328 = puStack_f8;
  }
  puStack_f8 = (undefined8 *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&puStack_208,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29d6a8;
  ppuVar24 = (undefined8 **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  *(undefined1 *)(plVar14 + 0x36) = 0;
  if (ppuVar24 != &puStack_328) {
    if (puStack_328 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    puStack_328 = (undefined8 *)0x0;
    *ppuVar24 = puVar15;
  }
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar32 = (_DAT_0f552110 & 1) != 0;
      lVar12 = 0xf552111;
      if (bVar32) {
        lVar12 = _DAT_0f552120;
      }
      uVar27 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
  }
  plVar17 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f552108;
  plVar14[0x15] = 0;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29d7a0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29d7f0;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b2fa550(puStack_210,&puStack_2d8);
  plVar21 = *(long **)(puVar16 + 0x24);
  if (plVar21 < *(long **)(puVar16 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar31) {
      if ((*puVar1 & 1) == 0) {
        plVar21[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        plVar21[1] = *(long *)puVar1;
        plVar21[2] = lVar12;
      }
      else {
        FUN_04885070(plVar21 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar21 = *plVar31;
    plVar21[5] = (long)(puVar15 + 4);
    plVar21[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar16 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0b2fc310(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar21;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_f8 != (undefined8 *)0x0) {
    (*(code *)puStack_f8[1])(&puStack_f8);
  }
  if ((uStack_2d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_2bd,CONCAT12(uStack_2be,CONCAT11(uStack_2bf,uStack_2c0))),
                    CONCAT26(uStack_2ca,CONCAT15(uStack_2cb,CONCAT14(uStack_2cc,uStack_2d0))) &
                    0xfffffffffffffffe);
  }
  uStack_22a = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21f = 0;
  uStack_21e = 0;
  pbStack_218 = (byte *)0x0;
  bStack_230 = 10;
  bStack_22f = 0x74;
  uStack_22e = 0x6261;
  uStack_22c = 0x6c;
  uStack_22b = 0x65;
  uStack_238 = 0x9c4fb3297401e24b;
  puStack_208 = (undefined *)0x0;
  puStack_200 = (undefined *)0x0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_2d8 = (undefined8 *)&UNK_0f29da90;
  pbStack_338 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (pbStack_338 == (byte *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  puStack_328 = puStack_2d8;
  pbStack_338[8] = 0;
  pbStack_338[9] = 0;
  pbStack_338[10] = 0;
  pbStack_338[0xb] = 0;
  pbStack_338[0xc] = 0;
  pbStack_338[0xd] = 0;
  pbStack_338[0xe] = 0;
  pbStack_338[0xf] = 0;
  pbStack_338[0x10] = 0;
  pbStack_338[0x11] = 0;
  pbStack_338[0x12] = 0;
  pbStack_338[0x13] = 0;
  pbStack_338[0x14] = 0;
  pbStack_338[0x15] = 0;
  pbStack_338[0x16] = 0;
  pbStack_338[0x17] = 0;
  *(undefined **)pbStack_338 = &UNK_0f29d868;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  *(undefined **)(pbStack_338 + 0x20) = &UNK_0f2ccd78;
  pbStack_338[0x28] = 0;
  pbStack_338[0x29] = 0;
  pbStack_338[0x2a] = 0;
  pbStack_338[0x2b] = 0;
  pbStack_338[0x2c] = 0;
  pbStack_338[0x2d] = 0;
  pbStack_338[0x2e] = 0;
  pbStack_338[0x2f] = 0;
  pbStack_338[0x30] = 0;
  pbStack_338[0x31] = 0;
  pbStack_338[0x32] = 0;
  pbStack_338[0x33] = 0;
  pbStack_338[0x34] = 0;
  pbStack_338[0x35] = 0;
  pbStack_338[0x36] = 0;
  pbStack_338[0x37] = 0;
  pbStack_338[0x38] = 0;
  pbStack_338[0x39] = 0;
  pbStack_338[0x3a] = 0;
  pbStack_338[0x3b] = 0;
  pbStack_338[0x3c] = 0;
  pbStack_338[0x3d] = 0;
  pbStack_338[0x3e] = 0;
  pbStack_338[0x3f] = 0;
  pbStack_338[0x40] = 0;
  pbStack_338[0x41] = 0;
  pbStack_338[0x42] = 0;
  pbStack_338[0x43] = 0;
  pbStack_338[0x44] = 0;
  pbStack_338[0x45] = 0;
  pbStack_338[0x46] = 0;
  pbStack_338[0x47] = 0;
  pbStack_338[0x48] = 0;
  pbStack_338[0x49] = 0;
  pbStack_338[0x4a] = 0;
  pbStack_338[0x4b] = 0;
  pbStack_338[0x4c] = 0;
  pbStack_338[0x4d] = 0;
  pbStack_338[0x4e] = 0;
  pbStack_338[0x4f] = 0;
  pbStack_338[0x50] = 0;
  pbStack_338[0x51] = 0;
  pbStack_338[0x52] = 0;
  pbStack_338[0x53] = 0;
  pbStack_338[0x54] = 0;
  pbStack_338[0x55] = 0;
  pbStack_338[0x56] = 0;
  pbStack_338[0x57] = 0;
  pbStack_338[0x58] = 0;
  pbStack_338[0x59] = 0;
  pbStack_338[0x5a] = 0;
  pbStack_338[0x5b] = 0;
  pbStack_338[0x5c] = 0;
  pbStack_338[0x5d] = 0;
  pbStack_338[0x5e] = 0;
  pbStack_338[0x5f] = 0;
  pbStack_338[0x60] = 0;
  pbStack_338[0x61] = 0;
  pbStack_338[0x62] = 0;
  pbStack_338[99] = 0;
  pbStack_338[100] = 0;
  pbStack_338[0x65] = 0;
  pbStack_338[0x66] = 0;
  pbStack_338[0x67] = 0;
  pbStack_338[0x68] = 0;
  pbStack_1c0 = pbStack_338;
  func_0x04aa75f0(pbStack_338 + 0x70,&plStack_278,&UNK_01254d89);
  pbStack_338[0x80] = 0;
  pbStack_338[0x88] = 0;
  pbStack_338[0x89] = 0;
  pbStack_338[0x8a] = 0;
  pbStack_338[0x8b] = 0;
  pbStack_338[0x8c] = 0;
  pbStack_338[0x8d] = 0;
  pbStack_338[0x8e] = 0;
  pbStack_338[0x8f] = 0;
  pbStack_338[0x90] = 0;
  pbStack_338[0x91] = 0;
  pbStack_338[0x92] = 0;
  pbStack_338[0x93] = 0;
  pbStack_338[0x94] = 0;
  pbStack_338[0x95] = 0;
  pbStack_338[0x96] = 0;
  pbStack_338[0x97] = 0;
  pbStack_338[0x98] = 0;
  pbStack_338[0x99] = 0;
  pbStack_338[0x9a] = 0;
  pbStack_338[0x9b] = 0;
  pbStack_338[0x9c] = 0;
  pbStack_338[0x9d] = 0;
  pbStack_338[0x9e] = 0;
  pbStack_338[0x9f] = 0;
  pbStack_338[0xa0] = 0;
  pbStack_338[0xa1] = 0;
  pbStack_338[0xa2] = 0;
  pbStack_338[0xa3] = 0;
  pbStack_338[0xa4] = 0;
  pbStack_338[0xa5] = 0;
  pbStack_338[0xa6] = 0;
  pbStack_338[0xa7] = 0;
  pbStack_338[0xa8] = 0;
  pbStack_338[0xa9] = 0;
  pbStack_338[0xaa] = 0;
  pbStack_338[0xab] = 0;
  pbStack_338[0xac] = 0;
  pbStack_338[0xad] = 0;
  pbStack_338[0xae] = 0;
  pbStack_338[0xaf] = 0;
  pbStack_338[0xb0] = 0;
  pbStack_338[0xb1] = 0;
  pbStack_338[0xb2] = 0;
  pbStack_338[0xb3] = 0;
  pbStack_338[0xb4] = 0;
  pbStack_338[0xb5] = 0;
  pbStack_338[0xb6] = 0;
  pbStack_338[0xb7] = 0;
  pbStack_338[0xb8] = 0xff;
  pbStack_338[0xb9] = 0xff;
  pbStack_338[0xba] = 0xff;
  pbStack_338[0xbb] = 0xff;
  pbStack_338[0xbc] = 0;
  pbStack_338[0xbd] = 0;
  pbStack_338[0xbe] = 0;
  pbStack_338[0xbf] = 0;
  pbStack_338[0x130] = 0;
  pbStack_338[0x131] = 0;
  pbStack_338[0x132] = 0;
  pbStack_338[0x133] = 0;
  pbStack_338[0x134] = 0;
  pbStack_338[0x135] = 0;
  pbStack_338[0x136] = 0;
  pbStack_338[0x137] = 0;
  pbStack_338[0x138] = 0;
  pbStack_338[0x139] = 0;
  pbStack_338[0x13a] = 0;
  pbStack_338[0x13b] = 0;
  pbStack_338[0x13c] = 0;
  pbStack_338[0x13d] = 0;
  pbStack_338[0x13e] = 0;
  pbStack_338[0x13f] = 0;
  pbStack_338[0xc0] = 0;
  pbStack_338[0xc1] = 0;
  pbStack_338[0xc2] = 0;
  pbStack_338[0xc3] = 0;
  pbStack_338[0xc4] = 0;
  pbStack_338[0xc5] = 0;
  pbStack_338[0xc6] = 0;
  pbStack_338[199] = 0;
  pbStack_338[200] = 0;
  pbStack_338[0xc9] = 0;
  pbStack_338[0xca] = 0;
  pbStack_338[0xcb] = 0;
  pbStack_338[0xcc] = 0;
  pbStack_338[0xcd] = 0;
  pbStack_338[0xce] = 0;
  pbStack_338[0xcf] = 0;
  pbStack_338[0xd0] = 0;
  pbStack_338[0xd1] = 0;
  pbStack_338[0xd2] = 0;
  pbStack_338[0xd3] = 0;
  pbStack_338[0xd4] = 0;
  pbStack_338[0xd5] = 0;
  pbStack_338[0xd6] = 0;
  pbStack_338[0xd7] = 0;
  pbStack_338[0xd8] = 0;
  pbStack_338[0xd9] = 0;
  pbStack_338[0xda] = 0;
  pbStack_338[0xdb] = 0;
  pbStack_338[0xdc] = 0;
  pbStack_338[0xdd] = 0;
  pbStack_338[0xde] = 0;
  pbStack_338[0xdf] = 0;
  pbStack_338[0xe0] = 0;
  pbStack_338[0xe1] = 0;
  pbStack_338[0xe2] = 0;
  pbStack_338[0xe3] = 0;
  pbStack_338[0xe4] = 0;
  pbStack_338[0xe5] = 0;
  pbStack_338[0xe6] = 0;
  pbStack_338[0xe7] = 0;
  pbStack_338[0xe8] = 0;
  pbStack_338[0xe9] = 0;
  pbStack_338[0xea] = 0;
  pbStack_338[0xeb] = 0;
  pbStack_338[0xec] = 0;
  pbStack_338[0xed] = 0;
  pbStack_338[0xee] = 0;
  pbStack_338[0xef] = 0;
  pbStack_338[0xf0] = 0;
  pbStack_338[0xf1] = 0;
  pbStack_338[0xf2] = 0;
  pbStack_338[0xf3] = 0;
  pbStack_338[0xf4] = 0;
  pbStack_338[0xf5] = 0;
  pbStack_338[0xf6] = 0;
  pbStack_338[0xf7] = 0;
  pbStack_338[0xf8] = 0;
  pbStack_338[0xf9] = 0;
  pbStack_338[0xfa] = 0;
  pbStack_338[0xfb] = 0;
  pbStack_338[0xfc] = 0;
  pbStack_338[0xfd] = 0;
  pbStack_338[0xfe] = 0;
  pbStack_338[0xff] = 0;
  *(undefined **)(pbStack_338 + 0x20) = &UNK_0f29d8b8;
  pbStack_338[0x170] = 0;
  pbStack_338[0x171] = 0;
  pbStack_338[0x172] = 0;
  pbStack_338[0x173] = 0;
  pbStack_338[0x174] = 0;
  pbStack_338[0x175] = 0;
  pbStack_338[0x176] = 0;
  pbStack_338[0x177] = 0;
  pbStack_338[0x178] = 0;
  pbStack_338[0x179] = 0;
  pbStack_338[0x17a] = 0;
  pbStack_338[0x17b] = 0;
  pbStack_338[0x17c] = 0;
  pbStack_338[0x17d] = 0;
  pbStack_338[0x17e] = 0;
  pbStack_338[0x17f] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,pbStack_338 + 0x170);
    puVar15 = puStack_328;
  }
  puStack_2e0 = (uint *)(pbStack_338 + 0x20);
  puStack_328 = (undefined8 *)0x0;
  *(undefined8 **)(pbStack_338 + 0x170) = puVar15;
  puStack_1b8 = &UNK_012fc052;
  uStack_1b0 = 9;
  func_0x0470d9a0(&uStack_290,&UNK_011fbad2,0x11,0xd,&puStack_1b8);
  plStack_278 = (long *)0x0;
  if ((uStack_290 & 1) == 0) {
    uStack_260 = (undefined1)uStack_280;
    uStack_25f = (undefined1)((ulong)uStack_280 >> 8);
    uStack_25e = (undefined6)((ulong)uStack_280 >> 0x10);
    bStack_270 = (byte)uStack_290;
    bStack_26f = (byte)(uStack_290 >> 8);
    uStack_26e = (undefined2)(uStack_290 >> 0x10);
    uStack_26c = (undefined1)uStack_28c;
    uStack_26b = (undefined2)((uint)uStack_28c >> 8);
    uStack_269 = (undefined1)((uint)uStack_28c >> 0x18);
    uStack_268 = uStack_288;
    uStack_264 = uStack_284;
  }
  else {
    func_0x0412e5e0(&bStack_270,uStack_280,CONCAT44(uStack_284,uStack_288));
  }
  uStack_258 = 0;
  if ((bStack_270 & 1) == 0) {
    if (bStack_270 >> 1 != 0) goto LAB_0b2f2131;
LAB_0b2f2215:
    plStack_278 = (long *)0x0;
    bVar5 = pbStack_338[0x90];
  }
  else {
    if (CONCAT44(uStack_264,uStack_268) == 0) goto LAB_0b2f2215;
LAB_0b2f2131:
    if ((bStack_270 & 1) == 0) {
      pbVar29 = &bStack_26f;
      if (pbVar29 == (byte *)0x0) goto LAB_0b2f2245;
LAB_0b2f214a:
      if (*pbVar29 == 0) goto LAB_0b2f2215;
      plVar31 = (long *)0xcbf29ce484222325;
      uVar27 = strlen(pbVar29);
      if (uVar27 != 0) {
        uVar20 = (ulong)((uint)uVar27 & 7);
        if (7 < uVar27) {
          uVar27 = uVar27 & 0xfffffffffffffff8;
          do {
            plVar31 = (long *)(((((((((long)plVar31 * 0x100000001b3 ^ (ulong)*pbVar29) *
                                     0x100000001b3 ^ (ulong)pbVar29[1]) * 0x100000001b3 ^
                                   (ulong)pbVar29[2]) * 0x100000001b3 ^ (ulong)pbVar29[3]) *
                                  0x100000001b3 ^ (ulong)pbVar29[4]) * 0x100000001b3 ^
                                (ulong)pbVar29[5]) * 0x100000001b3 ^ (ulong)pbVar29[6]) *
                               0x100000001b3 ^ (ulong)pbVar29[7]);
            pbVar29 = pbVar29 + 8;
            uVar27 = uVar27 - 8;
          } while (uVar27 != 0);
        }
        if (uVar20 != 0) {
          uVar27 = 0;
          do {
            plVar31 = (long *)((long)plVar31 * 0x100000001b3 ^ (ulong)pbVar29[uVar27]);
            uVar27 = uVar27 + 1;
          } while (uVar20 != uVar27);
        }
      }
    }
    else {
      pbVar29 = (byte *)CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260));
      if (pbVar29 != (byte *)0x0) goto LAB_0b2f214a;
LAB_0b2f2245:
      plVar31 = (long *)0x0;
    }
    bVar5 = pbStack_338[0x90];
    plStack_278 = plVar31;
  }
  if ((bVar5 & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pbStack_338 + 0xa0),
                    *(ulong *)(pbStack_338 + 0x90) & 0xfffffffffffffffe);
  }
  plVar31 = plStack_278;
  pbVar29 = pbStack_338 + 0x90;
  *(ulong *)(pbStack_338 + 0xa0) = CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260));
  *(uint *)pbVar29 = CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270));
  *(uint *)(pbStack_338 + 0x94) = CONCAT13(uStack_269,CONCAT21(uStack_26b,uStack_26c));
  *(undefined4 *)(pbStack_338 + 0x98) = uStack_268;
  *(undefined4 *)(pbStack_338 + 0x9c) = uStack_264;
  bStack_270 = 0;
  bStack_26f = 0;
  *(long **)(pbStack_338 + 0x88) = plStack_278;
  pbStack_338[0xa8] = 0;
  pbStack_338[0xa9] = 0;
  pbStack_338[0xaa] = 0;
  pbStack_338[0xab] = 0;
  pbStack_338[0xac] = 0;
  pbStack_338[0xad] = 0;
  pbStack_338[0xae] = 0;
  pbStack_338[0xaf] = 0;
  if ((uStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,CONCAT44(uStack_28c,uStack_290) & 0xfffffffffffffffe);
  }
  pbStack_198 = pbVar29;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  pbVar29 = pbStack_338 + 8;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *(long *)pbVar29 = *(long *)pbVar29 + 1;
  UNLOCK();
  pbStack_180 = pbVar29;
  plVar17 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (plVar17 == (long *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  pbVar26 = pbStack_218;
  uVar27 = uStack_238;
  plVar17[1] = 0;
  plVar17[2] = 0;
  *plVar17 = (long)&UNK_0f29d998;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[4] = (long)&UNK_0f29d9e8;
  plVar17[0xe] = (long)puStack_2e0;
  plVar17[0xf] = (long)pbStack_338;
  LOCK();
  *(long *)(pbStack_338 + 8) = *(long *)(pbStack_338 + 8) + 1;
  UNLOCK();
  plStack_1a0 = plVar17 + 1;
  plStack_190 = (long *)plVar14[0x1b];
  plVar21 = (long *)plVar14[0x1c];
  pbVar29 = &bStack_270;
  plStack_1a8 = plVar17;
  if (plStack_190 != plVar21) {
    if ((bStack_230 & 1) == 0) {
      uVar20 = (ulong)(bStack_230 >> 1);
      puStack_2e0 = (uint *)&bStack_22f;
    }
    else {
      uVar20 = CONCAT44(uStack_224,uStack_228);
      puStack_2e0 = (uint *)CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220));
    }
    plVar18 = (long *)((long)plStack_190 + 0x19);
    do {
      if (*(ulong *)((long)plVar18 + -9) == uVar27) {
        if ((*(ulong **)((long)plVar18 + 0x17) == &uStack_238) &&
           ((byte *)((long)plVar18 + -9) == pbVar26)) {
LAB_0b2f28cd:
          plVar31 = (long *)((long)plVar18 + -0x19);
          pbVar26 = pbStack_1c0;
          goto LAB_0b2f28d9;
        }
        bVar5 = *(byte *)((long)plVar18 + -1);
        if ((bVar5 & 1) == 0) {
          uVar22 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar22 = *(ulong *)((long)plVar18 + 7);
        }
        if (uVar22 == uVar20) {
          plVar31 = plVar18;
          if ((bVar5 & 1) != 0) {
            plVar31 = *(long **)((long)plVar18 + 0xf);
          }
          iVar11 = func_0x0eee3000(plVar31,puStack_2e0,uVar20);
          if (iVar11 == 0) {
            *(ulong **)((long)plVar18 + 0x17) = &uStack_238;
            pbStack_218 = (byte *)((long)plVar18 + -9);
            goto LAB_0b2f28cd;
          }
        }
      }
      *(undefined8 *)((long)plVar18 + 0x17) = 0;
      plVar31 = plVar18 + 0x15;
      plVar30 = (long *)((long)plVar18 + 0x8f);
      pbVar29 = pbVar26;
      plVar18 = plVar31;
    } while (plVar30 != plVar21);
  }
  if ((long *)plVar14[0x1d] <= plVar21) {
    plVar21 = (long *)((long)plVar21 - (long)plStack_190);
    uVar27 = ((long)plVar21 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar27) goto LAB_0b2f5ffe;
    plVar31 = plVar14 + 0x1b;
    lVar12 = plVar14[0x1d] - (long)plStack_190 >> 3;
    uVar20 = lVar12 * -0x6186186186186186;
    if (uVar27 < uVar20) {
      uVar27 = uVar20;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar12 * -0x30c30c30c30c30c3)) {
      uVar27 = 0x186186186186186;
    }
    plStack_308 = plVar31;
    if (uVar27 == 0) {
      puVar15 = (undefined8 *)0x0;
LAB_0b2f254f:
      uStack_318 = (byte *)((long)plVar21 + (long)puVar15);
      puStack_310 = puVar15 + uVar27 * 0x15;
      puStack_328 = puVar15;
      uStack_320 = uStack_318;
      func_0x0b30fed0(uStack_318);
      pbVar29 = uStack_318 + 0xa8;
      lVar12 = plVar14[0x1b];
      lVar4 = plVar14[0x1c];
      pbVar26 = uStack_320 + (lVar12 - lVar4);
      if (lVar12 != lVar4) {
        lVar28 = 0;
        do {
          uVar19 = ((undefined8 *)(lVar12 + lVar28))[1];
          *(undefined8 *)(pbVar26 + lVar28) = *(undefined8 *)(lVar12 + lVar28);
          *(undefined8 *)(pbVar26 + lVar28 + 8) = uVar19;
          *(undefined8 *)(lVar12 + lVar28) = 0;
          ((undefined8 *)(lVar12 + lVar28))[1] = 0;
          pbVar25 = pbVar26 + lVar28 + 0x20;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          pbVar25[8] = 0;
          pbVar25[9] = 0;
          pbVar25[10] = 0;
          pbVar25[0xb] = 0;
          pbVar25[0xc] = 0;
          pbVar25[0xd] = 0;
          pbVar25[0xe] = 0;
          pbVar25[0xf] = 0;
          pbVar25 = pbVar26 + lVar28 + 0x10;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          pbVar25[8] = 0;
          pbVar25[9] = 0;
          pbVar25[10] = 0;
          pbVar25[0xb] = 0;
          pbVar25[0xc] = 0;
          pbVar25[0xd] = 0;
          pbVar25[0xe] = 0;
          pbVar25[0xf] = 0;
          pbVar25 = pbVar26 + lVar28 + 0x30;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          *(undefined8 *)(pbVar26 + lVar28 + 0x28) = *(undefined8 *)(lVar12 + 0x28 + lVar28);
          puVar16 = (undefined4 *)(lVar12 + 0x18 + lVar28);
          uVar7 = puVar16[1];
          uVar8 = puVar16[2];
          uVar9 = puVar16[3];
          pbVar25 = pbVar26 + lVar28 + 0x18;
          *(undefined4 *)pbVar25 = *puVar16;
          *(undefined4 *)(pbVar25 + 4) = uVar7;
          *(undefined4 *)(pbVar25 + 8) = uVar8;
          *(undefined4 *)(pbVar25 + 0xc) = uVar9;
          *(undefined2 *)(lVar12 + 0x18 + lVar28) = 0;
          *(undefined8 *)(pbVar26 + lVar28 + 0x10) = *(undefined8 *)(lVar12 + 0x10 + lVar28);
          func_0x04167a20(pbVar26 + lVar28 + 0x38,lVar12 + lVar28 + 0x38);
          puVar15 = (undefined8 *)(lVar12 + 0x40 + lVar28);
          uVar19 = puVar15[1];
          *(undefined8 *)(pbVar26 + lVar28 + 0x40) = *puVar15;
          *(undefined8 *)(pbVar26 + lVar28 + 0x40 + 8) = uVar19;
          puVar15 = (undefined8 *)(lVar12 + 0x50 + lVar28);
          uVar19 = puVar15[1];
          *(undefined8 *)(pbVar26 + lVar28 + 0x50) = *puVar15;
          *(undefined8 *)(pbVar26 + lVar28 + 0x50 + 8) = uVar19;
          puVar15 = (undefined8 *)(lVar12 + 0x60 + lVar28);
          uVar19 = puVar15[1];
          *(undefined8 *)(pbVar26 + lVar28 + 0x60) = *puVar15;
          *(undefined8 *)(pbVar26 + lVar28 + 0x60 + 8) = uVar19;
          puVar15 = (undefined8 *)(lVar12 + 0x60 + lVar28);
          *puVar15 = 0;
          puVar15[1] = 0;
          *(undefined8 *)(pbVar26 + lVar28 + 0x70) = *(undefined8 *)(lVar12 + 0x70 + lVar28);
          puVar15 = (undefined8 *)(lVar12 + 0x78 + lVar28);
          uVar19 = puVar15[1];
          *(undefined8 *)(pbVar26 + lVar28 + 0x78) = *puVar15;
          *(undefined8 *)(pbVar26 + lVar28 + 0x78 + 8) = uVar19;
          pbVar25 = pbVar26 + lVar28 + 0x88;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          pbVar25[8] = 0;
          pbVar25[9] = 0;
          pbVar25[10] = 0;
          pbVar25[0xb] = 0;
          pbVar25[0xc] = 0;
          pbVar25[0xd] = 0;
          pbVar25[0xe] = 0;
          pbVar25[0xf] = 0;
          pbVar25 = pbVar26 + lVar28 + 0x98;
          pbVar25[0] = 0;
          pbVar25[1] = 0;
          pbVar25[2] = 0;
          pbVar25[3] = 0;
          pbVar25[4] = 0;
          pbVar25[5] = 0;
          pbVar25[6] = 0;
          pbVar25[7] = 0;
          puVar16 = (undefined4 *)(lVar12 + 0x88 + lVar28);
          uVar7 = puVar16[1];
          uVar8 = puVar16[2];
          uVar9 = puVar16[3];
          pbVar25 = pbVar26 + lVar28 + 0x88;
          *(undefined4 *)pbVar25 = *puVar16;
          *(undefined4 *)(pbVar25 + 4) = uVar7;
          *(undefined4 *)(pbVar25 + 8) = uVar8;
          *(undefined4 *)(pbVar25 + 0xc) = uVar9;
          *(undefined8 *)(pbVar26 + lVar28 + 0x98) = *(undefined8 *)(lVar12 + 0x98 + lVar28);
          puVar15 = (undefined8 *)(lVar12 + 0x88 + lVar28);
          *puVar15 = 0;
          puVar15[1] = 0;
          *(undefined8 *)(lVar12 + 0x98 + lVar28) = 0;
          *(undefined2 *)(pbVar26 + lVar28 + 0xa0) = *(undefined2 *)(lVar12 + 0xa0 + lVar28);
          lVar2 = lVar12 + lVar28;
          lVar28 = lVar28 + 0xa8;
        } while (lVar2 + 0xa8 != lVar4);
        do {
          func_0x0b30d0f0(lVar12);
          lVar12 = lVar12 + 0xa8;
        } while (lVar12 != lVar4);
        lVar12 = *plVar31;
      }
      plVar14[0x1b] = (long)pbVar26;
      plVar14[0x1c] = (long)pbVar29;
      lVar4 = plVar14[0x1d];
      plVar14[0x1d] = (long)puStack_310;
      if (lVar12 != 0) {
        func_0x0412a280(lVar12,lVar4 - lVar12);
      }
      goto LAB_0b2f271d;
    }
    if (uVar27 < 0x186186186186187) {
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27 * 0xa8);
      if (puVar15 == (undefined8 *)0x0) {
        FUN_0eec74c0(uVar27 * 0xa8,0);
        puVar15 = (undefined8 *)0x0;
      }
      goto LAB_0b2f254f;
    }
LAB_0b2f5ff4:
    func_0x04882eb0();
LAB_0b2f5ff9:
    func_0x0b310110();
LAB_0b2f5ffe:
    uVar19 = func_0x0b310040();
    if ((*pbStack_338 & 1) != 0) {
      func_0x0412a280(plVar21[3],plVar21[1] & 0xfffffffffffffffe);
    }
    *(long **)(uVar27 + 0x90) = plVar21;
    plVar17 = plVar14 + 1;
    LOCK();
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      func_0x0412c2d0(plVar14);
    }
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)pbVar29 + 0x10))(pbVar29);
      func_0x0412c2d0(pbVar29);
    }
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*(long *)pbVar29 + 0x10))(pbVar29);
      func_0x0412c2d0(pbVar29);
    }
    if (puStack_208 != (undefined *)0x0) {
      (**(code **)(puStack_208 + 8))(&puStack_208);
    }
    if ((bStack_270 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260)),
                      CONCAT17(uStack_269,
                               CONCAT25(uStack_26b,
                                        CONCAT14(uStack_26c,
                                                 CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270)
                                                         )))) & 0xfffffffffffffffe);
    }
    if (*plStack_188 != 0) {
      (**(code **)(*plStack_188 + 8))();
    }
    func_0x0b2f9940(puStack_210);
    func_0x0eee2d70(uVar19);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  func_0x0b30fed0(plVar21);
  pbVar29 = (byte *)(plVar21 + 0x15);
  plVar14[0x1c] = (long)pbVar29;
LAB_0b2f271d:
  plVar14[0x1c] = (long)pbVar29;
  func_0x0b63b6d0(*(undefined8 *)(pbVar29 + -0xa8),&uStack_238);
  lVar12 = plVar14[0x1c];
  *(char *)(lVar12 + -7) = (char)plVar14[0x10];
  if ((ulong *)(lVar12 + -0x98) != &uStack_238) {
    pbVar29 = (byte *)(lVar12 + -0x90);
    if ((*pbVar29 & 1) == 0) {
      if ((bStack_230 & 1) == 0) {
        *(ulong *)(lVar12 + -0x80) = CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220));
        *(uint *)pbVar29 = CONCAT22(uStack_22e,CONCAT11(bStack_22f,bStack_230));
        *(uint *)(lVar12 + -0x8c) = CONCAT22(uStack_22a,CONCAT11(uStack_22b,uStack_22c));
        *(undefined4 *)(lVar12 + -0x88) = uStack_228;
        *(undefined4 *)(lVar12 + -0x84) = uStack_224;
      }
      else {
        FUN_04885070(pbVar29,CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220)),
                     CONCAT44(uStack_224,uStack_228));
      }
    }
    else {
      bVar32 = (bStack_230 & 1) != 0;
      pbVar26 = &bStack_22f;
      if (bVar32) {
        pbVar26 = (byte *)CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220));
      }
      uVar27 = (ulong)(bStack_230 >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uStack_224,uStack_228);
      }
      func_0x04885120(pbVar29,pbVar26,uVar27);
    }
  }
  *(ulong *)(lVar12 + -0x98) = uStack_238;
  *(undefined8 *)(lVar12 + -0x78) = 0;
  func_0x04aa9390(&puStack_328,&bStack_230,(char)plVar14[0x10]);
  lVar12 = plVar14[0x1c];
  func_0x04167a70(lVar12 + -0x70,&puStack_328);
  *(byte **)(lVar12 + -0x68) = uStack_320;
  *(byte **)(lVar12 + -0x60) = uStack_318;
  *(undefined8 **)(lVar12 + -0x58) = puStack_310;
  *(long **)(lVar12 + -0x50) = plStack_308;
  uVar7 = (undefined4)uStack_300;
  uVar8 = uStack_300._4_4_;
  uVar9 = (undefined4)uStack_2f8;
  uVar10 = uStack_2f8._4_4_;
  uStack_300 = 0;
  uStack_2f8 = (long *)0x0;
  plVar31 = *(long **)(lVar12 + -0x40);
  *(undefined4 *)(lVar12 + -0x48) = uVar7;
  *(undefined4 *)(lVar12 + -0x44) = uVar8;
  *(undefined4 *)(lVar12 + -0x40) = uVar9;
  *(undefined4 *)(lVar12 + -0x3c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar4 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  pbVar26 = pbStack_1c0;
  plVar21 = uStack_2f8;
  *(undefined8 *)(lVar12 + -0x38) = uStack_2f0;
  if (uStack_2f8 != (long *)0x0) {
    LOCK();
    plVar31 = uStack_2f8 + 1;
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*uStack_2f8 + 0x10))(uStack_2f8);
      func_0x0412c2d0(plVar21);
    }
  }
  func_0x04167a40(&puStack_328);
  lVar12 = plVar14[0x1c];
  *(undefined1 *)(lVar12 + -8) = 0;
  plVar31 = (long *)(lVar12 + -0xa8);
LAB_0b2f28d9:
  pbVar25 = pbStack_338 + 0x88;
  plVar14 = plVar17 + 4;
  pbVar29 = (byte *)plVar31[0x12];
  if (pbVar29 < (byte *)plVar31[0x13]) {
    pbVar29[0x10] = 0;
    pbVar29[0x11] = 0;
    pbVar29[0x12] = 0;
    pbVar29[0x13] = 0;
    pbVar29[0x14] = 0;
    pbVar29[0x15] = 0;
    pbVar29[0x16] = 0;
    pbVar29[0x17] = 0;
    pbVar29[0x18] = 0;
    pbVar29[0x19] = 0;
    pbVar29[0x1a] = 0;
    pbVar29[0x1b] = 0;
    pbVar29[0x1c] = 0;
    pbVar29[0x1d] = 0;
    pbVar29[0x1e] = 0;
    pbVar29[0x1f] = 0;
    pbVar29[0] = 0;
    pbVar29[1] = 0;
    pbVar29[2] = 0;
    pbVar29[3] = 0;
    pbVar29[4] = 0;
    pbVar29[5] = 0;
    pbVar29[6] = 0;
    pbVar29[7] = 0;
    pbVar29[8] = 0;
    pbVar29[9] = 0;
    pbVar29[10] = 0;
    pbVar29[0xb] = 0;
    pbVar29[0xc] = 0;
    pbVar29[0xd] = 0;
    pbVar29[0xe] = 0;
    pbVar29[0xf] = 0;
    pbVar29[0x20] = 0;
    pbVar29[0x21] = 0;
    pbVar29[0x22] = 0;
    pbVar29[0x23] = 0;
    pbVar29[0x24] = 0;
    pbVar29[0x25] = 0;
    pbVar29[0x26] = 0;
    pbVar29[0x27] = 0;
    if (pbVar29 != pbVar25) {
      if ((*pbStack_198 & 1) == 0) {
        *(undefined8 *)(pbVar29 + 0x18) = *(undefined8 *)(pbStack_198 + 0x10);
        uVar19 = *(undefined8 *)(pbStack_198 + 8);
        *(undefined8 *)(pbVar29 + 8) = *(undefined8 *)pbStack_198;
        *(undefined8 *)(pbVar29 + 0x10) = uVar19;
      }
      else {
        FUN_04885070(pbVar29 + 8,*(undefined8 *)(pbVar26 + 0xa0),*(undefined8 *)(pbVar26 + 0x98));
      }
    }
    *(undefined8 *)pbVar29 = *(undefined8 *)pbVar25;
    *(long **)(pbVar29 + 0x28) = plVar14;
    *(long **)(pbVar29 + 0x30) = plStack_1a8;
    LOCK();
    plStack_1a8[1] = plStack_1a8[1] + 1;
    UNLOCK();
    pbVar29 = pbVar29 + 0x38;
    plVar31[0x12] = (long)pbVar29;
    plVar14 = plStack_1a0;
  }
  else {
    pbVar29 = pbVar29 + -plVar31[0x11];
    uVar27 = ((long)pbVar29 >> 3) * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar27) goto LAB_0b2f5ff9;
    lVar12 = plVar31[0x13] - plVar31[0x11] >> 3;
    uVar20 = lVar12 * -0x2492492492492492;
    if (uVar27 < uVar20) {
      uVar27 = uVar20;
    }
    plVar17 = plVar31 + 0x11;
    if (0x249249249249248 < (ulong)(lVar12 * 0x6db6db6db6db6db7)) {
      uVar27 = 0x492492492492492;
    }
    plStack_308 = plVar17;
    if (uVar27 == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      pbStack_338 = pbVar25;
      if (0x492492492492492 < uVar27) goto LAB_0b2f5ff4;
      puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27 * 0x38);
      if (puVar15 == (undefined8 *)0x0) {
        FUN_0eec74c0(uVar27 * 0x38,0);
        puVar15 = (undefined8 *)0x0;
      }
    }
    pbVar26 = (byte *)((long)puVar15 + (long)pbVar29);
    puStack_310 = puVar15 + uVar27 * 7;
    pbVar3 = (byte *)((long)(puVar15 + 2) + (long)pbVar29);
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = (byte *)((long)puVar15 + (long)pbVar29);
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = (byte *)((long)(puVar15 + 4) + (long)pbVar29);
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    uStack_320 = pbVar26;
    uStack_318 = pbVar26;
    puStack_328 = puVar15;
    if (pbVar26 != pbVar25) {
      if ((*pbStack_198 & 1) == 0) {
        *(undefined8 *)(pbVar29 + (long)(puVar15 + 3)) = *(undefined8 *)(pbStack_198 + 0x10);
        uVar7 = *(undefined4 *)(pbStack_198 + 4);
        uVar8 = *(undefined4 *)(pbStack_198 + 8);
        uVar9 = *(undefined4 *)(pbStack_198 + 0xc);
        *(undefined4 *)(pbVar29 + (long)(puVar15 + 1)) = *(undefined4 *)pbStack_198;
        *(undefined4 *)(pbVar29 + (long)puVar15 + 0xc) = uVar7;
        *(undefined4 *)(pbVar29 + (long)(puVar15 + 2)) = uVar8;
        *(undefined4 *)(pbVar29 + (long)puVar15 + 0x14) = uVar9;
      }
      else {
        FUN_04885070(pbVar29 + (long)(puVar15 + 1),*(undefined8 *)(pbStack_1c0 + 0xa0),
                     *(undefined8 *)(pbStack_1c0 + 0x98));
      }
    }
    *(undefined8 *)pbVar26 = *(undefined8 *)pbVar25;
    *(long **)(pbVar26 + 0x28) = plVar14;
    *(long **)(pbVar26 + 0x30) = plStack_1a8;
    LOCK();
    plStack_1a8[1] = plStack_1a8[1] + 1;
    UNLOCK();
    pbVar29 = uStack_318 + 0x38;
    puVar15 = (undefined8 *)plVar31[0x11];
    puVar13 = (undefined8 *)plVar31[0x12];
    pbVar26 = uStack_320 + ((long)puVar15 - (long)puVar13);
    pbVar25 = pbVar26;
    puVar23 = puVar15;
    if ((long)puVar15 - (long)puVar13 != 0) {
      do {
        pbVar25[0x10] = 0;
        pbVar25[0x11] = 0;
        pbVar25[0x12] = 0;
        pbVar25[0x13] = 0;
        pbVar25[0x14] = 0;
        pbVar25[0x15] = 0;
        pbVar25[0x16] = 0;
        pbVar25[0x17] = 0;
        pbVar25[0x18] = 0;
        pbVar25[0x19] = 0;
        pbVar25[0x1a] = 0;
        pbVar25[0x1b] = 0;
        pbVar25[0x1c] = 0;
        pbVar25[0x1d] = 0;
        pbVar25[0x1e] = 0;
        pbVar25[0x1f] = 0;
        pbVar25[0] = 0;
        pbVar25[1] = 0;
        pbVar25[2] = 0;
        pbVar25[3] = 0;
        pbVar25[4] = 0;
        pbVar25[5] = 0;
        pbVar25[6] = 0;
        pbVar25[7] = 0;
        pbVar25[8] = 0;
        pbVar25[9] = 0;
        pbVar25[10] = 0;
        pbVar25[0xb] = 0;
        pbVar25[0xc] = 0;
        pbVar25[0xd] = 0;
        pbVar25[0xe] = 0;
        pbVar25[0xf] = 0;
        pbVar25[0x20] = 0;
        pbVar25[0x21] = 0;
        pbVar25[0x22] = 0;
        pbVar25[0x23] = 0;
        pbVar25[0x24] = 0;
        pbVar25[0x25] = 0;
        pbVar25[0x26] = 0;
        pbVar25[0x27] = 0;
        *(undefined8 *)(pbVar25 + 0x18) = puVar23[3];
        uVar19 = puVar23[2];
        *(undefined8 *)(pbVar25 + 8) = puVar23[1];
        *(undefined8 *)(pbVar25 + 0x10) = uVar19;
        *(undefined2 *)(puVar23 + 1) = 0;
        *(undefined8 *)pbVar25 = *puVar23;
        uVar7 = *(undefined4 *)((long)puVar23 + 0x2c);
        uVar8 = *(undefined4 *)(puVar23 + 6);
        uVar9 = *(undefined4 *)((long)puVar23 + 0x34);
        *(undefined4 *)(pbVar25 + 0x28) = *(undefined4 *)(puVar23 + 5);
        *(undefined4 *)(pbVar25 + 0x2c) = uVar7;
        *(undefined4 *)(pbVar25 + 0x30) = uVar8;
        *(undefined4 *)(pbVar25 + 0x34) = uVar9;
        puVar23[5] = 0;
        puVar23[6] = 0;
        puVar23 = puVar23 + 7;
        pbVar25 = pbVar25 + 0x38;
      } while (puVar23 != puVar13);
      do {
        plVar14 = (long *)puVar15[6];
        uStack_318 = pbVar29;
        if (plVar14 == (long *)0x0) {
LAB_0b2f2bb4:
          bVar5 = *(byte *)(puVar15 + 1);
        }
        else {
          LOCK();
          plVar21 = plVar14 + 1;
          lVar12 = *plVar21;
          *plVar21 = *plVar21 + -1;
          UNLOCK();
          if (lVar12 != 0) goto LAB_0b2f2bb4;
          (**(code **)(*plVar14 + 0x10))(plVar14);
          func_0x0412c2d0(plVar14);
          bVar5 = *(byte *)(puVar15 + 1);
        }
        pbVar29 = uStack_318;
        if ((bVar5 & 1) != 0) {
          func_0x0412a280(puVar15[3],puVar15[1] & 0xfffffffffffffffe);
          pbVar29 = uStack_318;
        }
        puVar15 = puVar15 + 7;
      } while (puVar15 != puVar13);
      puVar15 = (undefined8 *)*plVar17;
    }
    plVar14 = plStack_1a0;
    plVar31[0x11] = (long)pbVar26;
    plVar31[0x12] = (long)pbVar29;
    lVar12 = plVar31[0x13];
    plVar31[0x13] = (long)puStack_310;
    pbVar26 = pbStack_1c0;
    uStack_318 = pbVar29;
    if (puVar15 != (undefined8 *)0x0) {
      func_0x0412a280(puVar15,lVar12 - (long)puVar15);
      pbVar26 = pbStack_1c0;
    }
  }
  plVar31[0x12] = (long)pbVar29;
  lVar12 = *plVar31;
  uVar7 = *(undefined4 *)((long)plVar31 + 4);
  lVar4 = plVar31[1];
  uVar8 = *(undefined4 *)((long)plVar31 + 0xc);
  if (plVar31[1] != 0) {
    LOCK();
    plVar17 = (long *)(plVar31[1] + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = *(long **)(pbVar26 + 0x78);
  *(int *)(pbVar26 + 0x70) = (int)lVar12;
  *(undefined4 *)(pbVar26 + 0x74) = uVar7;
  *(int *)(pbVar26 + 0x78) = (int)lVar4;
  *(undefined4 *)(pbVar26 + 0x7c) = uVar8;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar21 = plVar17 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  plVar17 = plStack_1a8;
  pbVar26[0x80] = *(byte *)((long)plVar31 + 0xa1);
  LOCK();
  lVar12 = *plVar14;
  *plVar14 = *plVar14 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
    func_0x0412c2d0(plVar17);
    LOCK();
    lVar12 = *(long *)pbStack_180;
    *(long *)pbStack_180 = *(long *)pbStack_180 + -1;
    UNLOCK();
    if (lVar12 == 0) goto LAB_0b2f2e06;
LAB_0b2f2cbe:
    LOCK();
    lVar12 = *(long *)pbStack_180;
    *(long *)pbStack_180 = *(long *)pbStack_180 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *(long *)pbStack_180;
    *(long *)pbStack_180 = *(long *)pbStack_180 + -1;
    UNLOCK();
    if (lVar12 != 0) goto LAB_0b2f2cbe;
LAB_0b2f2e06:
    pbVar29 = pbStack_180;
    (**(code **)(*(long *)pbVar26 + 0x10))(pbVar26);
    func_0x0412c2d0(pbVar26);
    LOCK();
    lVar12 = *(long *)pbVar29;
    *(long *)pbVar29 = *(long *)pbVar29 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*(long *)pbVar26 + 0x10))(pbVar26);
    func_0x0412c2d0(pbVar26);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if ((bStack_230 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220)),
                    CONCAT26(uStack_22a,
                             CONCAT15(uStack_22b,
                                      CONCAT14(uStack_22c,
                                               CONCAT22(uStack_22e,CONCAT11(bStack_22f,bStack_230)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_2c4 = 0;
  uStack_2c3 = 0;
  uStack_2c2 = 0;
  uStack_2c0 = 0;
  uStack_2bf = 0;
  uStack_2be = 0;
  uStack_2bd = 0;
  uStack_2b8 = 0;
  uStack_2d0 = 0x61707316;
  uStack_2cc = 0x77;
  uStack_2cb = 0x6e;
  uStack_2ca = 0x695f;
  uStack_2c8 = 0x74;
  uStack_2c7 = 0x65;
  uStack_2c6 = 0x736d;
  puStack_2d8 = (undefined8 *)0x9d21dc9c7c4c868b;
  uStack_130 = 0;
  puStack_138 = (undefined8 *)&UNK_0f29dca0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29dab8;
  puStack_328 = (undefined8 *)0x0;
  uStack_320._0_4_ = 0;
  uStack_320._4_4_ = 0;
  if (puStack_138 == (undefined8 *)0x0) {
    puStack_328 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_138)(&puStack_138,&puStack_328);
    puStack_328 = puStack_138;
  }
  puStack_138 = (undefined8 *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&puStack_208,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29db08;
  ppuVar24 = (undefined8 **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  *(undefined1 *)(plVar14 + 0x36) = 0;
  if (ppuVar24 != &puStack_328) {
    if (puStack_328 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    puStack_328 = (undefined8 *)0x0;
    *ppuVar24 = puVar15;
  }
  plVar17 = plVar14 + 4;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar32 = (_DAT_0f552110 & 1) != 0;
      lVar12 = 0xf552111;
      if (bVar32) {
        lVar12 = _DAT_0f552120;
      }
      uVar27 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
  }
  plVar21 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f552108;
  plVar14[0x15] = 0;
  puStack_2e0 = puVar1;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29dc00;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29dc50;
  puVar15[0xe] = plVar17;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b2fa550(puStack_210,&puStack_2d8);
  plVar18 = *(long **)(puVar16 + 0x24);
  if (plVar18 < *(long **)(puVar16 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 != plVar31) {
      puVar1 = (uint *)(plVar18 + 1);
      if ((*puStack_2e0 & 1) == 0) {
        plVar18[3] = *(long *)(puStack_2e0 + 4);
        lVar12 = *(long *)(puStack_2e0 + 2);
        *(undefined8 *)puVar1 = *(undefined8 *)puStack_2e0;
        plVar18[2] = lVar12;
      }
      else {
        puStack_2e0 = puVar1;
        FUN_04885070(puVar1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar18 = *plVar31;
    plVar18[5] = (long)(puVar15 + 4);
    plVar18[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar18 = plVar18 + 7;
    *(long **)(puVar16 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x0b2fc310(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar18;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_138 != (undefined8 *)0x0) {
    (*(code *)puStack_138[1])(&puStack_138);
  }
  if ((uStack_2d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_2bd,CONCAT12(uStack_2be,CONCAT11(uStack_2bf,uStack_2c0))),
                    CONCAT26(uStack_2ca,CONCAT15(uStack_2cb,CONCAT14(uStack_2cc,uStack_2d0))) &
                    0xfffffffffffffffe);
  }
  uStack_22a = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21f = 0;
  uStack_21e = 0;
  pbStack_218 = (byte *)0x0;
  bStack_230 = 10;
  bStack_22f = 0x74;
  uStack_22e = 0x6261;
  uStack_22c = 0x6c;
  uStack_22b = 0x65;
  uStack_238 = 0x9c4fb3297401e24b;
  puStack_208 = (undefined *)0x0;
  puStack_200 = (undefined *)0x0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_2d8 = (undefined8 *)&UNK_0f29def0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29dcc8;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&plStack_278,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29dd18;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x2e);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x2e] = (long)puVar15;
  puStack_1b8 = &UNK_012fc052;
  uStack_1b0 = 9;
  func_0x0470d9a0(&uStack_290,&UNK_011fbad2,0x11,0xd,&puStack_1b8);
  plStack_278 = (long *)0x0;
  if ((uStack_290 & 1) == 0) {
    uStack_260 = (undefined1)uStack_280;
    uStack_25f = (undefined1)((ulong)uStack_280 >> 8);
    uStack_25e = (undefined6)((ulong)uStack_280 >> 0x10);
    bStack_270 = (byte)uStack_290;
    bStack_26f = (byte)(uStack_290 >> 8);
    uStack_26e = (undefined2)(uStack_290 >> 0x10);
    uStack_26c = (undefined1)uStack_28c;
    uStack_26b = (undefined2)((uint)uStack_28c >> 8);
    uStack_269 = (undefined1)((uint)uStack_28c >> 0x18);
    uStack_268 = uStack_288;
    uStack_264 = uStack_284;
  }
  else {
    func_0x0412e5e0(&bStack_270,uStack_280,CONCAT44(uStack_284,uStack_288));
  }
  uStack_258 = 0;
  if ((bStack_270 & 1) == 0) {
    if (bStack_270 >> 1 != 0) goto LAB_0b2f34a3;
LAB_0b2f3586:
    plStack_278 = (long *)0x0;
    bVar5 = *(byte *)(plVar14 + 0x12);
  }
  else {
    if (CONCAT44(uStack_264,uStack_268) == 0) goto LAB_0b2f3586;
LAB_0b2f34a3:
    if ((bStack_270 & 1) == 0) {
      pbVar29 = &bStack_26f;
      if (pbVar29 == (byte *)0x0) goto LAB_0b2f35b5;
LAB_0b2f34bc:
      if (*pbVar29 == 0) goto LAB_0b2f3586;
      plVar31 = (long *)0xcbf29ce484222325;
      uVar27 = strlen(pbVar29);
      if (uVar27 != 0) {
        uVar20 = (ulong)((uint)uVar27 & 7);
        if (7 < uVar27) {
          uVar27 = uVar27 & 0xfffffffffffffff8;
          do {
            plVar31 = (long *)(((((((((long)plVar31 * 0x100000001b3 ^ (ulong)*pbVar29) *
                                     0x100000001b3 ^ (ulong)pbVar29[1]) * 0x100000001b3 ^
                                   (ulong)pbVar29[2]) * 0x100000001b3 ^ (ulong)pbVar29[3]) *
                                  0x100000001b3 ^ (ulong)pbVar29[4]) * 0x100000001b3 ^
                                (ulong)pbVar29[5]) * 0x100000001b3 ^ (ulong)pbVar29[6]) *
                               0x100000001b3 ^ (ulong)pbVar29[7]);
            pbVar29 = pbVar29 + 8;
            uVar27 = uVar27 - 8;
          } while (uVar27 != 0);
        }
        if (uVar20 != 0) {
          uVar27 = 0;
          do {
            plVar31 = (long *)((long)plVar31 * 0x100000001b3 ^ (ulong)pbVar29[uVar27]);
            uVar27 = uVar27 + 1;
          } while (uVar20 != uVar27);
        }
      }
    }
    else {
      pbVar29 = (byte *)CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260));
      if (pbVar29 != (byte *)0x0) goto LAB_0b2f34bc;
LAB_0b2f35b5:
      plVar31 = (long *)0x0;
    }
    bVar5 = *(byte *)(plVar14 + 0x12);
    plStack_278 = plVar31;
  }
  if ((bVar5 & 1) != 0) {
    func_0x0412a280(plVar14[0x14],plVar14[0x12] & 0xfffffffffffffffe);
  }
  pbVar29 = (byte *)(plVar14 + 0x12);
  plVar14[0x14] = CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260));
  *(uint *)pbVar29 = CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270));
  *(uint *)((long)plVar14 + 0x94) = CONCAT13(uStack_269,CONCAT21(uStack_26b,uStack_26c));
  *(undefined4 *)(plVar14 + 0x13) = uStack_268;
  *(undefined4 *)((long)plVar14 + 0x9c) = uStack_264;
  bStack_270 = 0;
  bStack_26f = 0;
  plVar14[0x11] = (long)plStack_278;
  plVar14[0x15] = 0;
  if ((uStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,CONCAT44(uStack_28c,uStack_290) & 0xfffffffffffffffe);
  }
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  plVar31 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29ddf8;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29de48;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b313160(plVar17,&uStack_238);
  plVar18 = plVar14 + 0x11;
  plVar21 = *(long **)(puVar16 + 0x24);
  if (plVar21 < *(long **)(puVar16 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar18) {
      puVar1 = (uint *)(plVar21 + 1);
      if ((*pbVar29 & 1) == 0) {
        plVar21[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        *(undefined8 *)puVar1 = *(undefined8 *)pbVar29;
        plVar21[2] = lVar12;
      }
      else {
        puStack_2e0 = puVar1;
        FUN_04885070(puVar1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar21 = *plVar18;
    plVar21[5] = (long)(puVar15 + 4);
    plVar21[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar16 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0b314f10(puVar16 + 0x22,plVar18,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar21;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar21 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar21 = *plVar21 + 1;
    UNLOCK();
  }
  plVar21 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar18 = plVar21 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar21 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar18 = plVar21 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      func_0x0412c2d0(plVar21);
    }
  }
  LOCK();
  lVar12 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if ((bStack_230 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220)),
                    CONCAT26(uStack_22a,
                             CONCAT15(uStack_22b,
                                      CONCAT14(uStack_22c,
                                               CONCAT22(uStack_22e,CONCAT11(bStack_22f,bStack_230)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25e = 0;
  uStack_258 = 0;
  bStack_270 = 0x10;
  bStack_26f = 0x79;
  uStack_26e = 0x6f5f;
  uStack_26c = 0x66;
  uStack_26b = 0x7366;
  uStack_269 = 0x65;
  uStack_268 = 0x74;
  plStack_278 = (long *)0x1883983c4820c804;
  puStack_200 = (undefined *)0x18;
  uStack_2d0 = 0x18;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_208 = (undefined *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29e0e8;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29df18;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29df68;
  plVar14[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar14 + 0x2f) = 1;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x30);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x30] = (long)puVar15;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 == (long *)&DAT_0f552018) {
    plVar14[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552030;
        uVar9 = uRam000000000f55202c;
        uVar8 = _DAT_0f552028;
        uVar7 = uRam000000000f552024;
        *puVar1 = _DAT_0f552020;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar32 = (_DAT_0f552020 & 1) != 0;
      lVar12 = 0xf552021;
      if (bVar32) {
        lVar12 = _DAT_0f552030;
      }
      uVar27 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
    plVar14[0x11] = _DAT_0f552018;
    plVar14[0x15] = 0;
    if (puStack_328 != (undefined8 *)0x0) {
      (*(code *)puStack_328[1])(&puStack_328);
    }
  }
  plVar21 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puStack_2e0 = puVar1;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29e048;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29e098;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b313160(plVar17,&plStack_278);
  plVar17 = *(long **)(puVar16 + 0x24);
  if (plVar17 < *(long **)(puVar16 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar31) {
      if ((*puStack_2e0 & 1) == 0) {
        plVar17[3] = *(long *)(puStack_2e0 + 4);
        lVar12 = *(long *)(puStack_2e0 + 2);
        plVar17[1] = *(long *)puStack_2e0;
        plVar17[2] = lVar12;
      }
      else {
        FUN_04885070(plVar17 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar17 = *plVar31;
    plVar17[5] = (long)(puVar15 + 4);
    plVar17[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar16 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0b314f10(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar17;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar17 = plVar31 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar17 = plVar31 + 1;
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260)),
                    CONCAT17(uStack_269,
                             CONCAT25(uStack_26b,
                                      CONCAT14(uStack_26c,
                                               CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270)))
                                     )) & 0xfffffffffffffffe);
  }
  uStack_2be = 0;
  uStack_2bd = 0;
  uStack_2b8 = 0;
  uStack_2d0._1_3_ = (undefined3)_DAT_0123036a;
  uStack_2d0 = CONCAT31(uStack_2d0._1_3_,0x22);
  uStack_2cc = (undefined1)((uint)_DAT_0123036a >> 0x18);
  uStack_2cb = (undefined1)_UNK_0123036e;
  uStack_2ca = (undefined2)((uint)_UNK_0123036e >> 8);
  uStack_2c8 = (undefined1)((uint)_UNK_0123036e >> 0x18);
  uStack_2c7 = (undefined1)_UNK_01230372;
  uStack_2c6 = (undefined2)((uint)_UNK_01230372 >> 8);
  uStack_2c4 = (undefined1)((uint)_UNK_01230372 >> 0x18);
  uStack_2c3 = (undefined1)_UNK_01230376;
  uStack_2c2 = (undefined2)((uint)_UNK_01230376 >> 8);
  uStack_2c0 = (undefined1)((uint)_UNK_01230376 >> 0x18);
  uStack_2bf = 0x74;
  puStack_2d8 = (undefined8 *)0x499bacadcbf376b8;
  uStack_170 = 0;
  puStack_178 = (undefined8 *)&UNK_0f29e2f8;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29e110;
  puStack_328 = (undefined8 *)0x0;
  uStack_320._0_4_ = 0;
  uStack_320._4_4_ = 0;
  if (puStack_178 == (undefined8 *)0x0) {
    puStack_328 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_178)(&puStack_178,&puStack_328);
    puStack_328 = puStack_178;
  }
  puStack_178 = (undefined8 *)0x0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&puStack_208,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29e160;
  ppuVar24 = (undefined8 **)(plVar14 + 0x2e);
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  *(undefined1 *)(plVar14 + 0x36) = 0;
  if (ppuVar24 != &puStack_328) {
    if (puStack_328 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    puStack_328 = (undefined8 *)0x0;
    *ppuVar24 = puVar15;
  }
  plVar17 = plVar14 + 4;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f552108) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552110 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552120;
        uVar9 = uRam000000000f55211c;
        uVar8 = _DAT_0f552118;
        uVar7 = uRam000000000f552114;
        *puVar1 = _DAT_0f552110;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552120,CONCAT44(uRam000000000f55211c,_DAT_0f552118));
      }
    }
    else {
      bVar32 = (_DAT_0f552110 & 1) != 0;
      lVar12 = 0xf552111;
      if (bVar32) {
        lVar12 = _DAT_0f552120;
      }
      uVar27 = (ulong)((_DAT_0f552110 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55211c,_DAT_0f552118);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
  }
  plVar21 = plVar14 + 1;
  plVar14[0x11] = _DAT_0f552108;
  plVar14[0x15] = 0;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puStack_2e0 = puVar1;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29e258;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29e2a8;
  puVar15[0xe] = plVar17;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b2fa550(puStack_210,&puStack_2d8);
  plVar18 = *(long **)(puVar16 + 0x24);
  if (plVar18 < *(long **)(puVar16 + 0x26)) {
    plVar18[2] = 0;
    plVar18[3] = 0;
    *plVar18 = 0;
    plVar18[1] = 0;
    plVar18[4] = 0;
    if (plVar18 != plVar31) {
      puVar1 = (uint *)(plVar18 + 1);
      if ((*puStack_2e0 & 1) == 0) {
        plVar18[3] = *(long *)(puStack_2e0 + 4);
        lVar12 = *(long *)(puStack_2e0 + 2);
        *(undefined8 *)puVar1 = *(undefined8 *)puStack_2e0;
        plVar18[2] = lVar12;
      }
      else {
        puStack_2e0 = puVar1;
        FUN_04885070(puVar1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar18 = *plVar31;
    plVar18[5] = (long)(puVar15 + 4);
    plVar18[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar18 = plVar18 + 7;
    *(long **)(puVar16 + 0x24) = plVar18;
  }
  else {
    plVar18 = (long *)func_0x0b2fc310(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar18;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar18 = plVar31 + 1;
    lVar12 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar21;
  *plVar21 = *plVar21 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_178 != (undefined8 *)0x0) {
    (*(code *)puStack_178[1])(&puStack_178);
  }
  if ((uStack_2d0 & 1) != 0) {
    func_0x0412a280(CONCAT53(uStack_2bd,CONCAT12(uStack_2be,CONCAT11(uStack_2bf,uStack_2c0))),
                    CONCAT26(uStack_2ca,CONCAT15(uStack_2cb,CONCAT14(uStack_2cc,uStack_2d0))) &
                    0xfffffffffffffffe);
  }
  func_0x0b2f76b0(plVar17,&UNK_0d8dd580,&UNK_011a1060);
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25e = 0;
  plStack_278 = (long *)0x0;
  bStack_270 = 0;
  bStack_26f = 0;
  uStack_26e = 0;
  uStack_26c = 0;
  uStack_26b = 0;
  uStack_269 = 0;
  uStack_258 = 0;
  func_0x0412f5e0(&bStack_270,&UNK_014a2083,0x22);
  plStack_278 = (long *)0x81f29967d3d8ac40;
  puStack_200 = (undefined *)0x8;
  uStack_2d0 = 8;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_208 = (undefined *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29e740;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1d0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29e570;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29e5c0;
  plVar14[0x2f] = 0;
  plVar14[0x30] = 0;
  plVar14[0x2e] = (long)(plVar14 + 0x2f);
  ppuVar24 = (undefined8 **)(plVar14 + 0x32);
  plVar14[0x32] = 0;
  plVar14[0x33] = 0;
  if (ppuVar24 != &puStack_328) {
    if (puStack_328 == (undefined8 *)0x0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    puStack_328 = (undefined8 *)0x0;
    *ppuVar24 = puVar15;
  }
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f551f88) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f90 & 1) == 0) {
        plVar14[0x14] = _DAT_0f551fa0;
        uVar9 = uRam000000000f551f9c;
        uVar8 = _DAT_0f551f98;
        uVar7 = uRam000000000f551f94;
        *puVar1 = _DAT_0f551f90;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f551fa0,CONCAT44(uRam000000000f551f9c,_DAT_0f551f98));
      }
    }
    else {
      bVar32 = (_DAT_0f551f90 & 1) != 0;
      lVar12 = 0xf551f91;
      if (bVar32) {
        lVar12 = _DAT_0f551fa0;
      }
      uVar27 = (ulong)((_DAT_0f551f90 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f551f9c,_DAT_0f551f98);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
  }
  plVar14[0x11] = _DAT_0f551f88;
  plVar14[0x15] = 0;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  plVar21 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puStack_2e0 = (uint *)plVar21;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29e6a0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29e6f0;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b3199a0(plVar17,&plStack_278);
  plVar21 = *(long **)(puVar16 + 0x24);
  if (plVar21 < *(long **)(puVar16 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar31) {
      if ((*puVar1 & 1) == 0) {
        plVar21[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        plVar21[1] = *(long *)puVar1;
        plVar21[2] = lVar12;
      }
      else {
        FUN_04885070(plVar21 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar21 = *plVar31;
    plVar21[5] = (long)(puVar15 + 4);
    plVar21[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar16 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0b31c220(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar21;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  puVar1 = puStack_2e0;
  LOCK();
  lVar12 = *(long *)puStack_2e0;
  *(long *)puStack_2e0 = *(long *)puStack_2e0 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *(long *)puVar1;
    *(long *)puVar1 = *(long *)puVar1 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *(long *)puStack_2e0;
    *(long *)puStack_2e0 = *(long *)puStack_2e0 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  ppuVar24 = (undefined8 **)(plVar14 + 0x26);
  pbVar29 = uStack_318;
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260)),
                    CONCAT17(uStack_269,
                             CONCAT25(uStack_26b,
                                      CONCAT14(uStack_26c,
                                               CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270)))
                                     )) & 0xfffffffffffffffe);
    pbVar29 = uStack_318;
  }
  uStack_318._4_4_ = (undefined4)((ulong)pbVar29 >> 0x20);
  uStack_318._0_4_ = (uint)pbVar29;
  puStack_328 = (undefined8 *)&UNK_0f29e758;
  uStack_320._0_4_ = 8;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = (uint)uStack_318 & 0xffffff00;
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar15;
  }
  uStack_25e = 0;
  uStack_258 = 0;
  bStack_270 = 0x22;
  bStack_26f = (byte)_DAT_01405d39;
  uStack_26e = (undefined2)((uint)_DAT_01405d39 >> 8);
  uStack_26c = (undefined1)((uint)_DAT_01405d39 >> 0x18);
  uStack_26b = (undefined2)_UNK_01405d3d;
  uStack_269 = (undefined1)((uint)_UNK_01405d3d >> 0x10);
  uStack_268._1_3_ = (undefined3)_UNK_01405d41;
  uStack_268 = CONCAT31(uStack_268._1_3_,(char)((uint)_UNK_01405d3d >> 0x18));
  uStack_264._1_3_ = (undefined3)_UNK_01405d45;
  uStack_264 = CONCAT31(uStack_264._1_3_,(char)((uint)_UNK_01405d41 >> 0x18));
  uStack_260 = (undefined1)((uint)_UNK_01405d45 >> 0x18);
  uStack_25f = 0x74;
  plStack_278 = (long *)0x28843da9593a977;
  puStack_200 = (undefined *)0x4;
  uStack_2d0 = 4;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_208 = (undefined *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29e950;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1c0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1c0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29e780;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29e7d0;
  plVar14[0x2e] = _DAT_014eae60;
  *(undefined1 *)(plVar14 + 0x2f) = 1;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x30);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x30] = (long)puVar15;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 == (long *)&DAT_0f552018) {
    plVar14[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552020 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552030;
        uVar9 = uRam000000000f55202c;
        uVar8 = _DAT_0f552028;
        uVar7 = uRam000000000f552024;
        *puVar1 = _DAT_0f552020;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552030,CONCAT44(uRam000000000f55202c,_DAT_0f552028));
      }
    }
    else {
      bVar32 = (_DAT_0f552020 & 1) != 0;
      lVar12 = 0xf552021;
      if (bVar32) {
        lVar12 = _DAT_0f552030;
      }
      uVar27 = (ulong)((_DAT_0f552020 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55202c,_DAT_0f552028);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
    plVar14[0x11] = _DAT_0f552018;
    plVar14[0x15] = 0;
    if (puStack_328 != (undefined8 *)0x0) {
      (*(code *)puStack_328[1])(&puStack_328);
    }
  }
  plVar21 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar21 = *plVar21 + 1;
  UNLOCK();
  puStack_2e0 = (uint *)plVar21;
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29e8b0;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29e900;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b3199a0(plVar17,&plStack_278);
  plVar21 = *(long **)(puVar16 + 0x24);
  if (plVar21 < *(long **)(puVar16 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar31) {
      if ((*puVar1 & 1) == 0) {
        plVar21[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        plVar21[1] = *(long *)puVar1;
        plVar21[2] = lVar12;
      }
      else {
        FUN_04885070(plVar21 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar21 = *plVar31;
    plVar21[5] = (long)(puVar15 + 4);
    plVar21[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar16 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0b31c220(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar21;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  puVar1 = puStack_2e0;
  LOCK();
  lVar12 = *(long *)puStack_2e0;
  *(long *)puStack_2e0 = *(long *)puStack_2e0 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *(long *)puVar1;
    *(long *)puVar1 = *(long *)puVar1 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *(long *)puStack_2e0;
    *(long *)puStack_2e0 = *(long *)puStack_2e0 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  ppuVar24 = (undefined8 **)(plVar14 + 0x26);
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260)),
                    CONCAT17(uStack_269,
                             CONCAT25(uStack_26b,
                                      CONCAT14(uStack_26c,
                                               CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270)))
                                     )) & 0xfffffffffffffffe);
  }
  puStack_328 = (undefined8 *)&UNK_0f29e968;
  uStack_320._0_4_ = 4;
  uStack_320._4_4_ = 0;
  uStack_318._0_4_ = 0;
  if (ppuVar24 != &puStack_328) {
    if ((*ppuVar24 == (undefined8 *)0x0) ||
       ((*(code *)(*ppuVar24)[1])(ppuVar24), puStack_328 != (undefined8 *)0x0)) {
      (*(code *)*puStack_328)(&puStack_328,ppuVar24);
      puVar15 = puStack_328;
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
    *ppuVar24 = puVar15;
  }
  puVar15 = puStack_210;
  func_0x0b2f76b0(plVar17,&UNK_0d8dd480,&UNK_014a2673);
  func_0x0b2f7e60(puVar15,&UNK_0d8dd5b0,&UNK_011c6e3c);
  func_0x0b2f7e60(puVar15,&UNK_0d8de990,&UNK_012fe292);
  uStack_318._4_4_ = 0;
  puStack_310 = (undefined8 *)0x0;
  plStack_308 = (long *)0x0;
  uStack_320._0_4_ = 0x616c7016;
  uStack_320._4_4_ = 0x6f735f79;
  uStack_318._0_4_ = 0x73646e75;
  puStack_328 = (undefined8 *)0xf91abf3d285b6f76;
  puStack_208 = &UNK_0f29eb90;
  puStack_200 = (undefined *)0x100;
  uVar19 = func_0x0b31f4c0(puVar15,&puStack_328,&puStack_208);
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if (((uint)uStack_320 & 1) != 0) {
    func_0x0412a280(puStack_310,CONCAT44(uStack_320._4_4_,(uint)uStack_320) & 0xfffffffffffffffe);
  }
  bStack_270 = 0;
  bStack_26f = 1;
  uStack_26e = 0;
  uStack_26c = 0;
  uStack_26b = 0;
  uStack_269 = 0;
  uStack_2d0 = 0x100;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  plStack_278 = (long *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29ede0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x200);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x200,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29ebb8;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29ec08;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  plVar14[0x30] = 0;
  plVar14[0x31] = 0;
  plVar14[0x32] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  *(undefined4 *)(plVar14 + 0x35) = 0x3f800000;
  plVar14[0x36] = 0;
  plVar14[0x37] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x36);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x36] = (long)puVar15;
  *(undefined1 *)(plVar14 + 0x3e) = 0;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 != (long *)&DAT_0f552138) {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f552140 & 1) == 0) {
        plVar14[0x14] = _DAT_0f552150;
        uVar9 = uRam000000000f55214c;
        uVar8 = _DAT_0f552148;
        uVar7 = uRam000000000f552144;
        *puVar1 = _DAT_0f552140;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f552150,CONCAT44(uRam000000000f55214c,_DAT_0f552148));
      }
    }
    else {
      bVar32 = (_DAT_0f552140 & 1) != 0;
      lVar12 = 0xf552141;
      if (bVar32) {
        lVar12 = _DAT_0f552150;
      }
      uVar27 = (ulong)((_DAT_0f552140 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f55214c,_DAT_0f552148);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
  }
  plVar14[0x11] = _DAT_0f552138;
  plVar14[0x15] = 0;
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  plVar17 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29ece8;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29ed38;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b321860(uVar19);
  plVar21 = *(long **)(puVar16 + 0x24);
  if (plVar21 < *(long **)(puVar16 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar31) {
      if ((*puVar1 & 1) == 0) {
        plVar21[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        plVar21[1] = *(long *)puVar1;
        plVar21[2] = lVar12;
      }
      else {
        FUN_04885070(plVar21 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar21 = *plVar31;
    plVar21[5] = (long)(puVar15 + 4);
    plVar21[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar16 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0b323f00(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar21;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  puVar15 = puStack_210;
  LOCK();
  lVar12 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (plStack_278 != (long *)0x0) {
    (*(code *)plStack_278[1])(&plStack_278);
  }
  func_0x0b2f7e60(puVar15,&UNK_0d8dea10,&UNK_013ba34b);
  puStack_310 = (undefined8 *)0x0;
  plStack_308 = (long *)0x0;
  uStack_320._0_4_ = 0x6170731c;
  uStack_320._4_4_ = 0x655f6e77;
  uStack_318._0_4_ = 0x7469746e;
  uStack_318._4_4_ = 0x736569;
  puStack_328 = (undefined8 *)0x94c8d2be829e0914;
  puStack_208 = &UNK_0f29edf8;
  puStack_200 = (undefined *)0x118;
  uVar19 = func_0x0b31f4c0(puVar15,&puStack_328,&puStack_208);
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if (((uint)uStack_320 & 1) != 0) {
    func_0x0412a280(puStack_310,CONCAT44(uStack_320._4_4_,(uint)uStack_320) & 0xfffffffffffffffe);
  }
  bStack_270 = 0x18;
  bStack_26f = 1;
  uStack_26e = 0;
  uStack_26c = 0;
  uStack_26b = 0;
  uStack_269 = 0;
  uStack_2d0 = 0x118;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  plStack_278 = (long *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29eff0;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29ee20;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29ee70;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x2e);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x2e] = (long)puVar15;
  puStack_1b8 = &UNK_014ca0a2;
  uStack_1b0 = 6;
  func_0x0470d9a0(&uStack_290,&UNK_01384326,0xc,0xd,&puStack_1b8);
  uStack_238 = 0;
  if ((uStack_290 & 1) == 0) {
    uStack_220 = (undefined1)uStack_280;
    uStack_21f = (undefined1)((ulong)uStack_280 >> 8);
    uStack_21e = (undefined6)((ulong)uStack_280 >> 0x10);
    bStack_230 = (byte)uStack_290;
    bStack_22f = (byte)(uStack_290 >> 8);
    uStack_22e = (undefined2)(uStack_290 >> 0x10);
    uStack_22c = (undefined1)uStack_28c;
    uStack_22b = (undefined1)((uint)uStack_28c >> 8);
    uStack_22a = (undefined2)((uint)uStack_28c >> 0x10);
    uStack_228 = uStack_288;
    uStack_224 = uStack_284;
  }
  else {
    func_0x0412e5e0(&bStack_230,uStack_280,CONCAT44(uStack_284,uStack_288));
  }
  pbStack_218 = (byte *)0x0;
  if ((bStack_230 & 1) == 0) {
    if (bStack_230 >> 1 != 0) goto LAB_0b2f5522;
  }
  else if (CONCAT44(uStack_224,uStack_228) != 0) {
LAB_0b2f5522:
    if ((bStack_230 & 1) == 0) {
      pbVar29 = &bStack_22f;
      if (pbVar29 == (byte *)0x0) goto LAB_0b2f5645;
LAB_0b2f553b:
      if (*pbVar29 == 0) goto LAB_0b2f5616;
      uVar27 = 0xcbf29ce484222325;
      uVar20 = strlen(pbVar29);
      if (uVar20 != 0) {
        uVar22 = (ulong)((uint)uVar20 & 7);
        if (7 < uVar20) {
          uVar20 = uVar20 & 0xfffffffffffffff8;
          do {
            uVar27 = (((((((uVar27 * 0x100000001b3 ^ (ulong)*pbVar29) * 0x100000001b3 ^
                          (ulong)pbVar29[1]) * 0x100000001b3 ^ (ulong)pbVar29[2]) * 0x100000001b3 ^
                        (ulong)pbVar29[3]) * 0x100000001b3 ^ (ulong)pbVar29[4]) * 0x100000001b3 ^
                      (ulong)pbVar29[5]) * 0x100000001b3 ^ (ulong)pbVar29[6]) * 0x100000001b3 ^
                     (ulong)pbVar29[7];
            pbVar29 = pbVar29 + 8;
            uVar20 = uVar20 - 8;
          } while (uVar20 != 0);
        }
        if (uVar22 != 0) {
          uVar20 = 0;
          do {
            uVar27 = uVar27 * 0x100000001b3 ^ (ulong)pbVar29[uVar20];
            uVar20 = uVar20 + 1;
          } while (uVar22 != uVar20);
        }
      }
    }
    else {
      pbVar29 = (byte *)CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220));
      if (pbVar29 != (byte *)0x0) goto LAB_0b2f553b;
LAB_0b2f5645:
      uVar27 = 0;
    }
    bVar5 = *(byte *)(plVar14 + 0x12);
    uStack_238 = uVar27;
    goto joined_r0x0b2f5630;
  }
LAB_0b2f5616:
  uStack_238 = 0;
  bVar5 = *(byte *)(plVar14 + 0x12);
joined_r0x0b2f5630:
  if ((bVar5 & 1) != 0) {
    func_0x0412a280(plVar14[0x14],plVar14[0x12] & 0xfffffffffffffffe);
  }
  pbVar29 = (byte *)(plVar14 + 0x12);
  plVar14[0x14] = CONCAT62(uStack_21e,CONCAT11(uStack_21f,uStack_220));
  *(uint *)pbVar29 = CONCAT22(uStack_22e,CONCAT11(bStack_22f,bStack_230));
  *(uint *)((long)plVar14 + 0x94) = CONCAT22(uStack_22a,CONCAT11(uStack_22b,uStack_22c));
  *(undefined4 *)(plVar14 + 0x13) = uStack_228;
  *(undefined4 *)((long)plVar14 + 0x9c) = uStack_224;
  bStack_230 = 0;
  bStack_22f = 0;
  plVar14[0x11] = uStack_238;
  plVar14[0x15] = 0;
  if ((uStack_290 & 1) != 0) {
    func_0x0412a280(uStack_280,CONCAT44(uStack_28c,uStack_290) & 0xfffffffffffffffe);
  }
  if (puStack_328 != (undefined8 *)0x0) {
    (*(code *)puStack_328[1])(&puStack_328);
  }
  plVar31 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar31 = *plVar31 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29ef50;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29efa0;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b321860(uVar19);
  plVar21 = plVar14 + 0x11;
  plVar17 = *(long **)(puVar16 + 0x24);
  if (plVar17 < *(long **)(puVar16 + 0x26)) {
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    plVar17[4] = 0;
    if (plVar17 != plVar21) {
      if ((*pbVar29 & 1) == 0) {
        plVar17[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        plVar17[1] = *(long *)pbVar29;
        plVar17[2] = lVar12;
      }
      else {
        FUN_04885070(plVar17 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar17 = *plVar21;
    plVar17[5] = (long)(puVar15 + 4);
    plVar17[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar17 = plVar17 + 7;
    *(long **)(puVar16 + 0x24) = plVar17;
  }
  else {
    plVar17 = (long *)func_0x0b323f00(puVar16 + 0x22,plVar21,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar17;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar17 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar17 = *plVar17 + 1;
    UNLOCK();
  }
  plVar17 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar21 = plVar17 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar17 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar21 = plVar17 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      func_0x0412c2d0(plVar17);
    }
  }
  LOCK();
  lVar12 = *plVar31;
  *plVar31 = *plVar31 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar31;
    *plVar31 = *plVar31 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (plStack_278 != (long *)0x0) {
    (*(code *)plStack_278[1])(&plStack_278);
  }
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25f = 0;
  uStack_25e = 0;
  uStack_258 = 0;
  bStack_270 = 0x16;
  bStack_26f = 0x6f;
  uStack_26e = 0x5f6e;
  uStack_26c = 0x69;
  uStack_26b = 0x746e;
  uStack_269 = 0x65;
  uStack_268 = 0x74636172;
  plStack_278 = (long *)0x98c51b11c3aa8037;
  puStack_200 = (undefined *)0x130;
  uStack_2d0 = 0x130;
  uStack_2cc = 0;
  uStack_2cb = 0;
  uStack_2ca = 0;
  puStack_208 = (undefined *)0x0;
  puStack_2d8 = (undefined8 *)&UNK_0f29f1e8;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
  if (plVar14 == (long *)0x0) {
    FUN_0eec74c0(0x1b0,0);
  }
  puStack_328 = puStack_2d8;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f29f018;
  uStack_320._4_4_ = CONCAT22(uStack_2ca,CONCAT11(uStack_2cb,uStack_2cc));
  puStack_2d8 = (undefined8 *)0x0;
  uStack_320._0_4_ = uStack_2d0;
  plVar14[4] = (long)&UNK_0f2ccd78;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 0;
  plVar14[0xc] = 0;
  *(undefined1 *)(plVar14 + 0xd) = 0;
  func_0x04aa75f0(plVar14 + 0xe,&uStack_238,&UNK_01254d89);
  *(undefined1 *)(plVar14 + 0x10) = 0;
  plVar31 = plVar14 + 0x11;
  plVar14[0x11] = 0;
  plVar14[0x12] = 0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0xffffffff;
  plVar14[0x26] = 0;
  plVar14[0x27] = 0;
  plVar14[0x18] = 0;
  plVar14[0x19] = 0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = 0;
  plVar14[0x1c] = 0;
  plVar14[0x1d] = 0;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[4] = (long)&UNK_0f29f068;
  plVar14[0x2e] = 0;
  plVar14[0x2f] = 0;
  if (puStack_328 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    (*(code *)*puStack_328)(&puStack_328,plVar14 + 0x2e);
    puVar15 = puStack_328;
  }
  puStack_328 = (undefined8 *)0x0;
  plVar14[0x2e] = (long)puVar15;
  puVar1 = (uint *)(plVar14 + 0x12);
  if (plVar31 == (long *)&DAT_0f551ef8) {
    plVar14[0x15] = 0;
  }
  else {
    if ((*puVar1 & 1) == 0) {
      if ((_DAT_0f551f00 & 1) == 0) {
        plVar14[0x14] = _DAT_0f551f10;
        uVar9 = uRam000000000f551f0c;
        uVar8 = _DAT_0f551f08;
        uVar7 = uRam000000000f551f04;
        *puVar1 = _DAT_0f551f00;
        *(undefined4 *)((long)plVar14 + 0x94) = uVar7;
        *(undefined4 *)(plVar14 + 0x13) = uVar8;
        *(undefined4 *)((long)plVar14 + 0x9c) = uVar9;
      }
      else {
        FUN_04885070(puVar1,_DAT_0f551f10,CONCAT44(uRam000000000f551f0c,_DAT_0f551f08));
      }
    }
    else {
      bVar32 = (_DAT_0f551f00 & 1) != 0;
      lVar12 = 0xf551f01;
      if (bVar32) {
        lVar12 = _DAT_0f551f10;
      }
      uVar27 = (ulong)((_DAT_0f551f00 & 0xff) >> 1);
      if (bVar32) {
        uVar27 = CONCAT44(uRam000000000f551f0c,_DAT_0f551f08);
      }
      func_0x04885120(puVar1,lVar12,uVar27);
    }
    plVar14[0x11] = _DAT_0f551ef8;
    plVar14[0x15] = 0;
    if (puStack_328 != (undefined8 *)0x0) {
      (*(code *)puStack_328[1])(&puStack_328);
    }
  }
  plVar17 = plVar14 + 1;
  if (puStack_2d8 != (undefined8 *)0x0) {
    (*(code *)puStack_2d8[1])(&puStack_2d8);
  }
  LOCK();
  *plVar17 = *plVar17 + 1;
  UNLOCK();
  puVar15 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (puVar15 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x80,0);
  }
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = &UNK_0f29f148;
  puVar15[6] = 0;
  puVar15[7] = 0;
  puVar15[4] = &UNK_0f29f198;
  puVar15[0xe] = plVar14 + 4;
  puVar15[0xf] = plVar14;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_320._0_4_ = (uint)puVar15;
  uStack_320._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
  puStack_328 = puVar15 + 4;
  puVar16 = (undefined4 *)func_0x0b2fa550(puStack_210,&plStack_278);
  plVar21 = *(long **)(puVar16 + 0x24);
  if (plVar21 < *(long **)(puVar16 + 0x26)) {
    plVar21[2] = 0;
    plVar21[3] = 0;
    *plVar21 = 0;
    plVar21[1] = 0;
    plVar21[4] = 0;
    if (plVar21 != plVar31) {
      if ((*puVar1 & 1) == 0) {
        plVar21[3] = plVar14[0x14];
        lVar12 = plVar14[0x13];
        plVar21[1] = *(long *)puVar1;
        plVar21[2] = lVar12;
      }
      else {
        FUN_04885070(plVar21 + 1,plVar14[0x14],plVar14[0x13]);
      }
    }
    *plVar21 = *plVar31;
    plVar21[5] = (long)(puVar15 + 4);
    plVar21[6] = (long)puVar15;
    LOCK();
    puVar15[1] = puVar15[1] + 1;
    UNLOCK();
    plVar21 = plVar21 + 7;
    *(long **)(puVar16 + 0x24) = plVar21;
  }
  else {
    plVar21 = (long *)func_0x0b2fc310(puVar16 + 0x22,plVar31,&puStack_328);
  }
  *(long **)(puVar16 + 0x24) = plVar21;
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  uVar9 = puVar16[2];
  uVar10 = puVar16[3];
  if (*(long *)(puVar16 + 2) != 0) {
    LOCK();
    plVar31 = (long *)(*(long *)(puVar16 + 2) + 8);
    *plVar31 = *plVar31 + 1;
    UNLOCK();
  }
  plVar31 = (long *)plVar14[0xf];
  *(undefined4 *)(plVar14 + 0xe) = uVar7;
  *(undefined4 *)((long)plVar14 + 0x74) = uVar8;
  *(undefined4 *)(plVar14 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar14 + 0x7c) = uVar10;
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  *(undefined1 *)(plVar14 + 0x10) = *(undefined1 *)((long)puVar16 + 0xa1);
  plVar31 = (long *)CONCAT44(uStack_320._4_4_,(uint)uStack_320);
  if (plVar31 != (long *)0x0) {
    LOCK();
    plVar21 = plVar31 + 1;
    lVar12 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      func_0x0412c2d0(plVar31);
    }
  }
  LOCK();
  lVar12 = *plVar17;
  *plVar17 = *plVar17 + -1;
  UNLOCK();
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
    LOCK();
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar12 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    func_0x0412c2d0(plVar14);
  }
  if (puStack_208 != (undefined *)0x0) {
    (**(code **)(puStack_208 + 8))(&puStack_208);
  }
  if ((bStack_270 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260)),
                    CONCAT17(uStack_269,
                             CONCAT25(uStack_26b,
                                      CONCAT14(uStack_26c,
                                               CONCAT22(uStack_26e,CONCAT11(bStack_26f,bStack_270)))
                                     )) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11fbabf  repair_entity_item
 * 0x123036a  particle_on_start
 * 0x134e268  transform_to_item
 * 0x1405d39  particle_y_offset
 */
