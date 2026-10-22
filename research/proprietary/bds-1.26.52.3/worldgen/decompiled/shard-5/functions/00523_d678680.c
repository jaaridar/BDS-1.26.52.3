/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd778680 (ELF vaddr 0xd678680)
 * Label: caller-of-callee
 * Body:  [[0d778680, 0d778ce6] [0d778cf0, 0d778de0] [0d778df0, 0d778ec0] [0d778ed0, 0d779170] [0d779180, 0d779306] [0d779310, 0d779658]]
 * Ghidra: FUN_0d778680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0d778680(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  bool bVar17;
  byte *pbStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  char cStack_268;
  byte *pbStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  ulong uStack_218;
  long *plStack_208;
  long *plStack_200;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  byte *pbStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  char cStack_198;
  long *plStack_188;
  long *plStack_180;
  ulong uStack_170;
  byte *pbStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  char cStack_128;
  byte *pbStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  char cStack_d8;
  byte *pbStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  char cStack_88;
  byte *pbStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plStack_208 = (long *)0x0;
  plStack_200 = (long *)0x0;
  bVar17 = (*param_2 & 1) != 0;
  pbVar16 = param_2 + 1;
  if (bVar17) {
    pbVar16 = *(byte **)(param_2 + 0x10);
  }
  uVar14 = (ulong)(*param_2 >> 1);
  if (bVar17) {
    uVar14 = *(ulong *)(param_2 + 8);
  }
  if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
    func_0x0ee5ea20(&DAT_0f7b8f98);
    func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
    FUN_0410844d(&DAT_0f7b8fb8);
  }
  pbStack_168 = pbVar16;
  uStack_160 = uVar14;
  (**(code **)(_DAT_0f7b8f98 + 0x10))(&pbStack_2a8,&DAT_0f7b8f98,&pbStack_168,&plStack_208,0x121,0);
  plVar10 = plStack_208;
  cStack_d8 = cStack_268;
  if (cStack_268 == '\0') {
    pbStack_118 = pbStack_2a8;
    uStack_110 = (ulong)puStack_2a0;
    uStack_108._0_4_ = (undefined4)uStack_298;
    uStack_108._4_4_ = uStack_298._4_4_;
    uStack_100._0_4_ = (undefined4)uStack_290;
    uStack_100._4_4_ = uStack_290._4_4_;
    lStack_f8 = lStack_288;
    uStack_f0._0_4_ = (undefined4)uStack_280;
    uStack_f0._4_4_ = uStack_280._4_4_;
    uStack_e8._0_4_ = (undefined4)uStack_278;
    uStack_e8._4_4_ = uStack_278._4_4_;
    lStack_e0 = lStack_270;
    func_0x0d781da0(&pbStack_118);
    lStack_220 = lStack_e0;
    uVar9 = uStack_e8._4_4_;
    uVar8 = (undefined4)uStack_e8;
    uVar7 = uStack_f0._4_4_;
    uVar6 = (undefined4)uStack_f0;
    lStack_238 = lStack_f8;
    uVar5 = uStack_100._4_4_;
    uVar4 = (undefined4)uStack_100;
    uVar3 = uStack_108._4_4_;
    uVar2 = (undefined4)uStack_108;
    pbStack_168 = pbStack_118;
    uStack_160 = uStack_110;
    uStack_108 = 0;
    uStack_100 = 0;
    lStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    lStack_e0 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    lStack_130 = 0;
    uStack_218 = uStack_218 & 0xffffffffffffff00;
    pbStack_258 = pbStack_118;
    uStack_250 = uStack_110;
    uStack_248 = CONCAT44(uVar3,uVar2);
    uStack_240 = CONCAT44(uVar5,uVar4);
    uStack_230 = CONCAT44(uVar7,uVar6);
    uStack_228 = CONCAT44(uVar9,uVar8);
    func_0x048e6d60(&pbStack_168);
    goto LAB_0d77901a;
  }
  uStack_170 = 0;
  lVar12 = plStack_208[3];
  if (lVar12 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = lVar12 + 8;
    func_0x0412d770(lVar15);
  }
  (**(code **)(*plVar10 + 0x78))(&pbStack_2a8,plVar10,&uStack_170);
  if (lVar12 != 0) {
    func_0x0412d790(lVar15);
  }
  cStack_128 = cStack_268;
  if (cStack_268 == '\0') {
    pbStack_168 = pbStack_2a8;
    uStack_160 = (ulong)puStack_2a0;
    uStack_158._0_4_ = (undefined4)uStack_298;
    uStack_158._4_4_ = uStack_298._4_4_;
    uStack_150._0_4_ = (undefined4)uStack_290;
    uStack_150._4_4_ = uStack_290._4_4_;
    lStack_148 = lStack_288;
    uStack_140._0_4_ = (undefined4)uStack_280;
    uStack_140._4_4_ = uStack_280._4_4_;
    uStack_138._0_4_ = (undefined4)uStack_278;
    uStack_138._4_4_ = uStack_278._4_4_;
    lStack_130 = lStack_270;
    func_0x0d781e60(&pbStack_168);
    lStack_220 = lStack_130;
    uVar9 = uStack_138._4_4_;
    uVar8 = (undefined4)uStack_138;
    uVar7 = uStack_140._4_4_;
    uVar6 = (undefined4)uStack_140;
    lStack_238 = lStack_148;
    uVar5 = uStack_150._4_4_;
    uVar4 = (undefined4)uStack_150;
    uVar3 = uStack_158._4_4_;
    uVar2 = (undefined4)uStack_158;
    pbStack_1d8 = pbStack_168;
    uStack_1d0 = uStack_160;
    uStack_158 = 0;
    uStack_150 = 0;
    lStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    lStack_130 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    lStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    lStack_1a0 = 0;
    uStack_218 = uStack_218 & 0xffffffffffffff00;
    pbStack_258 = pbStack_168;
    uStack_250 = uStack_160;
    uStack_248 = CONCAT44(uVar3,uVar2);
    uStack_240 = CONCAT44(uVar5,uVar4);
    uStack_230 = CONCAT44(uVar7,uVar6);
    uStack_228 = CONCAT44(uVar9,uVar8);
    func_0x048e6d60(&pbStack_1d8);
  }
  else {
    plStack_188 = (long *)0x0;
    plStack_180 = (long *)0x0;
    bVar17 = (*param_3 & 1) != 0;
    pbVar16 = param_3 + 1;
    if (bVar17) {
      pbVar16 = *(byte **)(param_3 + 0x10);
    }
    uVar14 = (ulong)(*param_3 >> 1);
    if (bVar17) {
      uVar14 = *(ulong *)(param_3 + 8);
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar11 = func_0x04108328(&DAT_0f7b8fb8), iVar11 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      FUN_0410844d(&DAT_0f7b8fb8);
    }
    pbStack_c8 = pbVar16;
    uStack_c0 = uVar14;
    (**(code **)(_DAT_0f7b8f98 + 0x10))(&pbStack_1d8,&DAT_0f7b8f98,&pbStack_c8,&plStack_188,0x12e,1)
    ;
    cStack_268 = cStack_198;
    if (cStack_198 == '\0') {
      pbStack_2a8 = pbStack_1d8;
      puStack_2a0 = (undefined *)uStack_1d0;
      uStack_298._0_4_ = (undefined4)uStack_1c8;
      uStack_298._4_4_ = uStack_1c8._4_4_;
      uStack_290._0_4_ = (undefined4)uStack_1c0;
      uStack_290._4_4_ = uStack_1c0._4_4_;
      lStack_288 = lStack_1b8;
      uStack_280._0_4_ = (undefined4)uStack_1b0;
      uStack_280._4_4_ = uStack_1b0._4_4_;
      uStack_278._0_4_ = (undefined4)uStack_1a8;
      uStack_278._4_4_ = uStack_1a8._4_4_;
      lStack_270 = lStack_1a0;
      func_0x0d781f20(&pbStack_2a8);
      lStack_220 = lStack_270;
      uVar9 = uStack_278._4_4_;
      uVar8 = (undefined4)uStack_278;
      uVar7 = uStack_280._4_4_;
      uVar6 = (undefined4)uStack_280;
      lStack_238 = lStack_288;
      uVar5 = uStack_290._4_4_;
      uVar4 = (undefined4)uStack_290;
      uVar3 = uStack_298._4_4_;
      uVar2 = (undefined4)uStack_298;
      pbStack_1d8 = pbStack_2a8;
      uStack_1d0 = (ulong)puStack_2a0;
      uStack_298 = 0;
      uStack_290 = 0;
      lStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      lStack_270 = 0;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      lStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      lStack_1a0 = 0;
      uStack_218 = uStack_218 & 0xffffffffffffff00;
      pbStack_258 = pbStack_2a8;
      uStack_250 = (ulong)puStack_2a0;
      uStack_248 = CONCAT44(uVar3,uVar2);
      uStack_240 = CONCAT44(uVar5,uVar4);
      uStack_230 = CONCAT44(uVar7,uVar6);
      uStack_228 = CONCAT44(uVar9,uVar8);
      func_0x048e6d60(&pbStack_1d8);
    }
    else {
      uVar14 = 0x400;
      if (uStack_170 < 0x400) {
        uVar14 = uStack_170;
      }
      if (uStack_170 < 0x17) {
        uStack_1f0 = CONCAT71(uStack_1f0._1_7_,(char)uVar14 * '\x02');
        lVar12 = (long)&uStack_1f0 + 1;
        if (uStack_170 != 0) goto LAB_0d778b62;
      }
      else {
        uVar13 = 0x1a;
        if ((uVar14 | 7) != 0x17) {
          uVar13 = (uVar14 | 7) + 1;
        }
        lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
        if (lVar12 == 0) {
          func_0x0eec74c0(uVar13,0);
        }
        uStack_1f0 = uVar13 | 1;
        uStack_1e8 = uVar14;
        lStack_1e0 = lVar12;
LAB_0d778b62:
        func_0x0eee2dd0(lVar12,0,uVar14);
      }
      *(undefined1 *)(lVar12 + uVar14) = 0;
      if (uStack_170 != 0) {
        uVar14 = 0;
        do {
          uVar13 = uStack_170 - uVar14;
          if (0x3ff < uVar13) {
            uVar13 = 0x400;
          }
          lVar12 = (long)&uStack_1f0 + 1;
          if ((uStack_1f0 & 1) != 0) {
            lVar12 = lStack_1e0;
          }
          func_0x0ee76a70(&pbStack_c8,plStack_208,lVar12,uVar13);
          cStack_198 = cStack_88;
          if (cStack_88 == '\0') {
            pbStack_1d8 = pbStack_c8;
            uStack_1d0 = uStack_c0;
            uStack_1c8._0_4_ = (undefined4)uStack_b8;
            uStack_1c8._4_4_ = uStack_b8._4_4_;
            uStack_1c0._0_4_ = (undefined4)uStack_b0;
            uStack_1c0._4_4_ = uStack_b0._4_4_;
            lStack_1b8 = lStack_a8;
            uStack_b8 = 0;
            uStack_b0 = 0;
            lStack_a8 = 0;
            uStack_1b0._0_4_ = (undefined4)uStack_a0;
            uStack_1b0._4_4_ = uStack_a0._4_4_;
            uStack_1a8._0_4_ = (undefined4)uStack_98;
            uStack_1a8._4_4_ = uStack_98._4_4_;
            lStack_1a0 = lStack_90;
            func_0x0d781fe0(&pbStack_1d8);
            lStack_220 = lStack_1a0;
            uVar9 = uStack_1a8._4_4_;
            uVar8 = (undefined4)uStack_1a8;
            uVar7 = uStack_1b0._4_4_;
            uVar6 = (undefined4)uStack_1b0;
            lStack_238 = lStack_1b8;
            uVar5 = uStack_1c0._4_4_;
            uVar4 = (undefined4)uStack_1c0;
            uVar3 = uStack_1c8._4_4_;
            uVar2 = (undefined4)uStack_1c8;
            pbStack_c8 = pbStack_1d8;
            uStack_c0 = uStack_1d0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            lStack_1b8 = 0;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            lStack_1a0 = 0;
            uStack_98 = 0;
            lStack_90 = 0;
            lStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            uStack_218 = uStack_218 & 0xffffffffffffff00;
            pbStack_258 = pbStack_1d8;
            uStack_250 = uStack_1d0;
            uStack_248 = CONCAT44(uVar3,uVar2);
            uStack_240 = CONCAT44(uVar5,uVar4);
            uStack_230 = CONCAT44(uVar7,uVar6);
            uStack_228 = CONCAT44(uVar9,uVar8);
            func_0x048e6d60(&pbStack_c8);
LAB_0d779594:
            func_0x0ee38090(&pbStack_1d8);
            goto joined_r0x0d7795a9;
          }
          lVar12 = (long)&uStack_1f0 + 1;
          if ((uStack_1f0 & 1) != 0) {
            lVar12 = lStack_1e0;
          }
          func_0x0ee76e70(&pbStack_258,plStack_188,lVar12,uVar13);
          lVar12 = uStack_1b0;
          cStack_88 = (byte)uStack_218;
          if ((byte)uStack_218 == '\0') {
            pbStack_c8 = pbStack_258;
            uStack_c0 = uStack_250;
            uStack_b8._0_4_ = (undefined4)uStack_248;
            uStack_b8._4_4_ = uStack_248._4_4_;
            uStack_b0._0_4_ = (undefined4)uStack_240;
            uStack_b0._4_4_ = uStack_240._4_4_;
            lStack_a8 = lStack_238;
            uStack_248 = 0;
            uStack_240 = 0;
            lStack_238 = 0;
            uStack_a0._0_4_ = (undefined4)uStack_230;
            uStack_a0._4_4_ = uStack_230._4_4_;
            uStack_98._0_4_ = (undefined4)uStack_228;
            uStack_98._4_4_ = uStack_228._4_4_;
            lStack_90 = lStack_220;
            func_0x0d7820a0(&pbStack_c8);
            lStack_220 = lStack_90;
            uVar9 = uStack_98._4_4_;
            uVar8 = (undefined4)uStack_98;
            uVar7 = uStack_a0._4_4_;
            uVar6 = (undefined4)uStack_a0;
            lStack_238 = lStack_a8;
            uVar5 = uStack_b0._4_4_;
            uVar4 = (undefined4)uStack_b0;
            uVar3 = uStack_b8._4_4_;
            uVar2 = (undefined4)uStack_b8;
            pbStack_78 = pbStack_c8;
            uStack_70 = uStack_c0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            lStack_a8 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            lStack_90 = 0;
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_218 = uStack_218 & 0xffffffffffffff00;
            pbStack_258 = pbStack_c8;
            uStack_250 = uStack_c0;
            uStack_248 = CONCAT44(uVar3,uVar2);
            uStack_240 = CONCAT44(uVar5,uVar4);
            uStack_230 = CONCAT44(uVar7,uVar6);
            uStack_228 = CONCAT44(uVar9,uVar8);
            func_0x048e6d60(&pbStack_78);
            func_0x0ee38090(&pbStack_c8);
            goto LAB_0d779594;
          }
          if (cStack_198 == '\0') {
            cStack_88 = (byte)uStack_218;
            lVar15 = uStack_1a8;
            if (uStack_1b0 != 0) {
              while (lVar12 != lVar15) {
                func_0x048b3e80(lVar15 + -0x40);
                lVar15 = lVar15 + -0x40;
              }
              uStack_1a8 = lVar12;
              func_0x0412a280(uStack_1b0,lStack_1a0 - uStack_1b0);
            }
            lVar15 = uStack_1c8;
            lVar12 = uStack_1c0;
            if (uStack_1c8 != 0) {
              for (; lVar15 != lVar12; lVar12 = lVar12 + -0x50) {
                if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                                  *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
                }
              }
              uStack_1c0 = lVar15;
              func_0x0412a280(uStack_1c8,lStack_1b8 - uStack_1c8);
            }
          }
          uVar14 = uVar14 + uVar13;
        } while (uVar14 < uStack_170);
      }
      uStack_228 = 0;
      lStack_220 = 0;
      lStack_238 = 0;
      uStack_230 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      pbStack_258 = (byte *)0x0;
      uStack_250 = 0;
      uStack_218 = 1;
joined_r0x0d7795a9:
      if ((uStack_1f0 & 1) != 0) {
        func_0x0412a280(lStack_1e0,uStack_1f0 & 0xfffffffffffffffe);
      }
    }
    lVar12 = uStack_280;
    if (cStack_268 == '\0') {
      lVar15 = uStack_278;
      if (uStack_280 != 0) {
        while (lVar12 != lVar15) {
          func_0x048b3e80(lVar15 + -0x40);
          lVar15 = lVar15 + -0x40;
        }
        uStack_278 = lVar12;
        func_0x0412a280(uStack_280,lStack_270 - uStack_280);
      }
      lVar15 = uStack_298;
      lVar12 = uStack_290;
      if (uStack_298 != 0) {
        for (; lVar15 != lVar12; lVar12 = lVar12 + -0x50) {
          if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                            *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_290 = lVar15;
        func_0x0412a280(uStack_298,lStack_288 - uStack_298);
      }
    }
    if ((plStack_188 != (long *)0x0) &&
       (func_0x0ee56810(&pbStack_2a8,&plStack_188), lVar12 = uStack_280, cStack_268 == '\0')) {
      lVar15 = uStack_278;
      if (uStack_280 != 0) {
        while (lVar12 != lVar15) {
          func_0x048b3e80(lVar15 + -0x40);
          lVar15 = lVar15 + -0x40;
        }
        uStack_278 = lVar12;
        func_0x0412a280(uStack_280,lStack_270 - uStack_280);
      }
      lVar15 = uStack_298;
      lVar12 = uStack_290;
      if (uStack_298 != 0) {
        for (; lVar15 != lVar12; lVar12 = lVar12 + -0x50) {
          if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                            *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
          }
        }
        uStack_290 = lVar15;
        func_0x0412a280(uStack_298,lStack_288 - uStack_298);
      }
    }
    plVar10 = plStack_180;
    plStack_180 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = plStack_188;
    plStack_188 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  lVar12 = uStack_140;
  if (cStack_128 == '\0') {
    lVar15 = uStack_138;
    if (uStack_140 != 0) {
      while (lVar12 != lVar15) {
        func_0x048b3e80(lVar15 + -0x40);
        lVar15 = lVar15 + -0x40;
      }
      uStack_138 = lVar12;
      func_0x0412a280(uStack_140,lStack_130 - uStack_140);
    }
    lVar15 = uStack_158;
    lVar12 = uStack_150;
    if (uStack_158 != 0) {
      for (; lVar15 != lVar12; lVar12 = lVar12 + -0x50) {
        if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                          *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_150 = lVar15;
      func_0x0412a280(uStack_158,lStack_148 - uStack_158);
    }
  }
LAB_0d77901a:
  lVar12 = uStack_f0;
  if (cStack_d8 == '\0') {
    lVar15 = uStack_e8;
    if (uStack_f0 != 0) {
      while (lVar12 != lVar15) {
        func_0x048b3e80(lVar15 + -0x40);
        lVar15 = lVar15 + -0x40;
      }
      uStack_e8 = lVar12;
      func_0x0412a280(uStack_f0,lStack_e0 - uStack_f0);
    }
    lVar15 = uStack_108;
    lVar12 = uStack_100;
    if (uStack_108 != 0) {
      for (; lVar15 != lVar12; lVar12 = lVar12 + -0x50) {
        if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                          *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_100 = lVar15;
      func_0x0412a280(uStack_108,lStack_f8 - uStack_108);
    }
  }
  if ((plStack_208 != (long *)0x0) &&
     (func_0x0ee56810(&pbStack_2a8,&plStack_208), lVar12 = uStack_280, cStack_268 == '\0')) {
    lVar15 = uStack_278;
    if (uStack_280 != 0) {
      while (lVar12 != lVar15) {
        func_0x048b3e80(lVar15 + -0x40);
        lVar15 = lVar15 + -0x40;
      }
      uStack_278 = lVar12;
      func_0x0412a280(uStack_280,lStack_270 - uStack_280);
    }
    lVar15 = uStack_298;
    lVar12 = uStack_290;
    if (uStack_298 != 0) {
      for (; lVar15 != lVar12; lVar12 = lVar12 + -0x50) {
        if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                          *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_290 = lVar15;
      func_0x0412a280(uStack_298,lStack_288 - uStack_298);
    }
  }
  plVar10 = plStack_200;
  plStack_200 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  plVar10 = plStack_208;
  plStack_208 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  pbStack_2a8 = (byte *)0x11ce8d796fc35d23;
  puStack_2a0 = &UNK_0140f690;
  uStack_298 = 1;
  uStack_290 = CONCAT44(uStack_290._4_4_,0x525);
  bVar1 = (byte)uStack_218;
  if ((byte)uStack_218 == 0) {
    pbStack_118 = (byte *)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x0eedeb80(2,0x2d,&pbStack_258,&pbStack_118,&pbStack_2a8);
    if (((ulong)pbStack_118 & 1) != 0) {
      func_0x0412a280(uStack_108,(ulong)pbStack_118 & 0xfffffffffffffffe);
    }
    bVar1 = (byte)uStack_218;
  }
  lVar12 = uStack_230;
  if ((bVar1 & 1) == 0) {
    lVar15 = uStack_228;
    if (uStack_230 != 0) {
      while (lVar12 != lVar15) {
        func_0x048b3e80(lVar15 + -0x40);
        lVar15 = lVar15 + -0x40;
      }
      uStack_228 = lVar12;
      func_0x0412a280(uStack_230,lStack_220 - uStack_230);
    }
    lVar15 = uStack_248;
    lVar12 = uStack_240;
    if (uStack_248 != 0) {
      for (; lVar15 != lVar12; lVar12 = lVar12 + -0x50) {
        if ((*(char *)(lVar12 + -8) == '\x01') && ((*(byte *)(lVar12 + -0x30) & 1) != 0)) {
          func_0x0412a280(*(undefined8 *)(lVar12 + -0x20),
                          *(ulong *)(lVar12 + -0x30) & 0xfffffffffffffffe);
        }
      }
      uStack_240 = lVar15;
      func_0x0412a280(uStack_248,lStack_238 - uStack_248);
    }
  }
  return bVar1;
}


