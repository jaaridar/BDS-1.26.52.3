/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3f38d0 (ELF vaddr 0xd2f38d0)
 * Label: string:minecraft:ore_feature
 * Body:  [[0d3f38d0, 0d3f4127] [0d3f4130, 0d3f4187] [0d3f4190, 0d3f45ce] [0d3f45d0, 0d3f4604] [0d3f4610, 0d3f46bb] [0d3f46c0, 0d3f46d8] [0d3f46e0, 0d3f47a9] [0d3f47b0, 0d3f480d] [0d3f4810, 0d3f4b71] [0d3f4b80, 0d3f4ee8] [0d3f4ef0, 0d3f50a0] [0d3f50b0, 0d3f50da] [0d3f50e0, 0d3f52c7] [0d3f52e0, 0d3f5343]]
 * Ghidra: FUN_0d3f38d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0d3f38d0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  float *pfVar2;
  byte bVar3;
  short sVar4;
  ulong *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 *puVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auVar19 [8];
  long *plVar20;
  short sVar21;
  ulong uVar22;
  float *pfVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long *in_FS_OFFSET;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  float fStack_320;
  float fStack_31c;
  uint uStack_318;
  float fStack_310;
  float fStack_30c;
  long *plStack_308;
  undefined8 uStack_300;
  uint uStack_2f8;
  int iStack_2f0;
  int iStack_2ec;
  ulong uStack_2e8;
  float fStack_2dc;
  undefined1 auStack_2d8 [16];
  int iStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  undefined1 auStack_268 [8];
  float fStack_260;
  float fStack_25c;
  ulong uStack_258;
  long lStack_250;
  uint uStack_248;
  float fStack_244;
  ulong uStack_240;
  undefined8 *puStack_238;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined1 auStack_218 [16];
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  float fStack_1f0;
  uint uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  long *plStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  long lStack_e0;
  int iStack_d8;
  long lStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  fVar32 = (float)(**(code **)(*(long *)param_2[3] + 0x30))();
  fVar32 = fVar32 * _DAT_01198b3c * _DAT_01198bd8;
  fVar33 = *(float *)(param_1 + 0x10) * _DAT_01198a50;
  fVar37 = *(float *)((ulong)((int)fVar32 & 0xffff) * 4 + 0xf778a04) * fVar33;
  _auStack_268 = ZEXT416((uint)fVar37);
  fVar33 = fVar33 * *(float *)((ulong)((int)(fVar32 + _DAT_01198b38) & 0xffff) * 4 + 0xf778a04);
  fStack_310 = fVar33 + _DAT_01198494 + (float)*(int *)(param_2 + 2);
  _auStack_2a8 = ZEXT416((uint)(_DAT_01198494 - fVar37));
  auStack_2d8._0_4_ = _DAT_01198494 - fVar33;
  uStack_288._0_4_ = (float)(int)param_2[1];
  uStack_288._4_4_ = (float)(int)((ulong)param_2[1] >> 0x20);
  uStack_280 = 0;
  iVar12 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],3);
  fVar32 = (float)auStack_268._4_4_ + _UNK_014ea7a8;
  auStack_268._4_4_ = (float)iVar12 + _UNK_014ea7a4 + uStack_288._4_4_;
  auStack_268._0_4_ = (float)auStack_268._0_4_ + _DAT_014ea7a0 + (float)uStack_288;
  fStack_260 = fVar32 + (float)uStack_280;
  fStack_25c = _UNK_014ea7ac + 0.0 + uStack_280._4_4_;
  uStack_2b8._0_4_ = (float)(int)param_2[1];
  uStack_2b8._4_4_ = (float)(int)((ulong)param_2[1] >> 0x20);
  uStack_2b0 = 0;
  uStack_288._0_4_ = (float)*(int *)(param_2 + 2) + (float)auStack_2d8._0_4_;
  iVar12 = (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],3);
  fVar33 = ((float)auStack_2a8._0_4_ + (float)uStack_2b8) - (float)auStack_268._0_4_;
  fVar37 = ((float)iVar12 + _DAT_01198458 + uStack_2b8._4_4_) - (float)auStack_268._4_4_;
  fVar45 = ((float)auStack_2a8._4_4_ + (float)uStack_2b0) - fStack_260;
  fVar46 = (uStack_2b0._4_4_ + 0.0) - fStack_25c;
  fVar47 = (float)uStack_288 - fStack_310;
  auVar50._0_4_ = SQRT(fVar47 * fVar47 + fVar33 * fVar33 + fVar37 * fVar37);
  fVar32 = (float)(~-(uint)(auVar50._0_4_ < _DAT_01198bc8) & (uint)(fVar47 / auVar50._0_4_));
  auStack_1c8 = ZEXT416((uint)fVar32);
  auStack_218 = ZEXT816(0);
  auStack_1d8 = ZEXT816(0);
  if (_DAT_01198bc8 <= auVar50._0_4_) {
    auVar50._4_4_ = auVar50._0_4_;
    auVar50._8_4_ = auVar50._0_4_;
    auVar50._12_4_ = auVar50._0_4_;
    auVar44._4_4_ = fVar37;
    auVar44._0_4_ = fVar33;
    auVar44._8_4_ = fVar45;
    auVar44._12_4_ = fVar46;
    auStack_1d8 = divps(auVar44,auVar50);
  }
  fVar38 = auStack_1d8._0_4_;
  auVar39._0_4_ = SQRT(fVar38 * fVar38 + fVar32 * fVar32);
  if (_DAT_01198bc8 <= auVar39._0_4_) {
    auVar35._4_4_ = fVar32;
    auVar35._0_4_ = fVar38;
    auVar35._8_4_ = auStack_1d8._8_4_;
    auVar35._12_4_ = auStack_1d8._12_4_;
    auVar39._4_4_ = auVar39._0_4_;
    auVar39._8_4_ = auVar39._0_4_;
    auVar39._12_4_ = auVar39._0_4_;
    auStack_218 = divps(auVar35,auVar39);
  }
  if (*(long *)(param_1 + 0x20) == *(long *)(param_1 + 0x28)) {
    uStack_1f8 = 0x1500000119c615;
    uStack_200 = 0x170000014dc13d;
    func_0x0d3dfbc0(param_2 + 5,&uStack_1f8,&uStack_200);
    if ((uStack_200 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_200 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_1f8 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1f8 & 0xff00ffffffffffff) - 8);
    }
  }
  else {
    uStack_288 = CONCAT44(uStack_288._4_4_,fVar47);
    auStack_2a8._4_4_ = fVar37;
    auStack_2a8._0_4_ = fVar33;
    fStack_2a0 = fVar45;
    fStack_29c = fVar46;
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,*(undefined4 *)(param_1 + 0x14));
    auStack_b8._0_8_ = param_1;
    if (*(int *)(param_1 + 0x38) != -1) {
      uStack_170 = (undefined8 *)auStack_b8;
      func_0x0eedc720(param_1 + 0x38,&UNK_0d4c9d60,&uStack_170);
    }
    lVar14 = *in_FS_OFFSET;
    puStack_238 = param_2;
    if (*(char *)(lVar14 + -0xa78) == '\0') {
      func_0x0417d010(&UNK_0d3f8d30,lVar14 + -0xab0,0xf53dab8);
      *(undefined1 *)(lVar14 + -0xa78) = 1;
    }
    plVar27 = (long *)(lVar14 + -0xab0);
    uVar24 = *(uint *)(param_1 + 0xc);
    uVar17 = (ulong)uVar24;
    uVar18 = (ulong)(int)uVar24;
    lVar28 = *(long *)(lVar14 + -0xaa8);
    lVar30 = *(long *)(lVar14 + -0xab0);
    lVar29 = lVar28 - lVar30;
    bVar31 = (ulong)((lVar29 >> 2) * -0x3333333333333333) <= uVar18;
    uVar26 = uVar18 + (lVar29 >> 2) * 0x3333333333333333;
    plStack_308 = plVar27;
    lStack_250 = param_1;
    if (bVar31 && uVar26 != 0) {
      if (uVar26 <= (ulong)((*(long *)(lVar14 + -0xaa0) - lVar28 >> 2) * -0x3333333333333333)) {
        uVar18 = (uVar26 * 0x14 - 0x14) / 0x14;
        func_0x0eee2dd0(lVar28,0,uVar18 * 0x14 + 0x14);
        *(ulong *)(lVar14 + -0xaa8) = uVar18 * 0x14 + 0x14 + lVar28;
LAB_0d3f3dff:
        uVar17 = (ulong)*(uint *)(lStack_250 + 0xc);
        uVar18 = (ulong)(int)*(uint *)(lStack_250 + 0xc);
        goto LAB_0d3f3e14;
      }
      if (-1 < (int)uVar24) {
        uVar22 = *(long *)(lVar14 + -0xaa0) - lVar30;
        lVar14 = (long)uVar22 >> 2;
        uVar17 = lVar14 * -0x6666666666666666;
        if (uVar18 < uVar17) {
          uVar18 = uVar17;
        }
        if (0x666666666666665 < (ulong)(lVar14 * -0x3333333333333333)) {
          uVar18 = 0xccccccccccccccc;
        }
        if (uVar18 < 0xccccccccccccccd) {
          auStack_2d8._0_8_ = lVar30;
          uStack_2e8 = uVar22;
          lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18 * 0x14);
          if (lVar14 == 0) {
            FUN_0eec74c0(uVar18 * 0x14,0);
          }
          uVar17 = (uVar26 * 0x14 - 0x14) / 0x14;
          func_0x0eee2dd0(lVar14 + lVar29,0,uVar17 * 0x14 + 0x14);
          uVar34 = auStack_2d8._0_8_;
          memcpy(lVar14,auStack_2d8._0_8_,lVar29);
          plVar27 = plStack_308;
          *plStack_308 = lVar14;
          plStack_308[1] = uVar17 * 0x14 + 0x14 + lVar14 + lVar29;
          plStack_308[2] = uVar18 * 0x14 + lVar14;
          if (uVar34 != 0) {
            func_0x0412a280(uVar34);
          }
          goto LAB_0d3f3dff;
        }
LAB_0d3f527f:
        func_0x04882eb0();
      }
      func_0x0d44d560();
LAB_0d3f5289:
      uVar34 = func_0x0d44d570();
      uVar34 = func_0x04882e20(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      func_0x0ee386e0(&uStack_200);
      func_0x0ee386e0(&uStack_1f8);
      uVar34 = func_0x0eee2d70(uVar34);
      uVar34 = func_0x04882e20(uVar34);
      if ((uStack_160 & 1) == 0) {
        func_0x0eee2d70(uVar34);
      }
      func_0x0412a280(uStack_150,uStack_160 & 0xfffffffffffffffe);
      uVar34 = func_0x0eee2d70(uVar34);
      func_0x04abe980(&uStack_170);
      func_0x0eee2d70(uVar34);
      pcVar6 = (code *)swi(3);
      auVar50 = (*pcVar6)();
      return auVar50;
    }
    if (!bVar31) {
      *(ulong *)(lVar14 + -0xaa8) = lVar30 + uVar18 * 0x14;
    }
LAB_0d3f3e14:
    lVar14 = plVar27[3];
    lVar28 = plVar27[4];
    lVar30 = lVar28 - lVar14;
    uVar22 = lVar30 >> 3;
    uVar26 = uVar18 - uVar22;
    if (uVar18 < uVar22 || uVar26 == 0) {
      if (uVar18 < uVar22) {
        plStack_308[4] = lVar14 + uVar18 * 8;
      }
    }
    else {
      if ((ulong)(plVar27[5] - lVar28 >> 3) < uVar26) {
        if (uVar18 >> 0x3d != 0) goto LAB_0d3f5289;
        auStack_2d8._0_8_ = lVar14;
        uStack_2e8 = plVar27[5] - lVar14;
        uVar17 = (long)uStack_2e8 >> 2;
        if ((ulong)((long)uStack_2e8 >> 2) <= uVar18) {
          uVar17 = uVar18;
        }
        if (0x7ffffffffffffff7 < uStack_2e8) {
          uVar17 = 0x1fffffffffffffff;
        }
        if (0x1fffffffffffffff < uVar17) goto LAB_0d3f527f;
        lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar17 * 8);
        if (lVar14 == 0) {
          FUN_0eec74c0(uVar17 * 8,0);
        }
        lVar28 = lVar14 + lVar30;
        func_0x0eee2dd0(lVar28,0,uVar26 * 8);
        lVar29 = lVar28 + uVar22 * -8;
        uVar34 = auStack_2d8._0_8_;
        memcpy(lVar29,auStack_2d8._0_8_,lVar30);
        plStack_308[3] = lVar29;
        plStack_308[4] = uVar26 * 8 + lVar28;
        plStack_308[5] = uVar17 * 8 + lVar14;
        if (uVar34 != 0) {
          func_0x0412a280(uVar34);
        }
      }
      else {
        func_0x0eee2dd0(lVar28,0,uVar26 * 8);
        plVar27[4] = uVar26 * 8 + lVar28;
      }
      uVar17 = (ulong)*(uint *)(lStack_250 + 0xc);
    }
    puVar9 = puStack_238;
    lVar14 = lStack_250;
    if ((int)uVar17 != 0) {
      lVar28 = 0x10;
      uVar18 = 0;
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(float)uStack_2b8 * _DAT_01198b3c);
      uStack_2e8 = uVar17;
      do {
        fVar33 = (float)(int)uVar18;
        auStack_2d8 = ZEXT416((uint)fVar33);
        lVar30 = *plStack_308;
        fVar32 = *(float *)(lVar14 + 0x14);
        *(ulong *)(lVar30 + -0x10 + lVar28) =
             CONCAT44(fVar32 * fVar33 * (float)auStack_2a8._4_4_ + (float)auStack_268._4_4_,
                      fVar32 * fVar33 * (float)auStack_2a8._0_4_ + (float)auStack_268._0_4_);
        *(float *)(lVar30 + -8 + lVar28) = (float)uStack_288 * fVar33 * fVar32 + fStack_310;
        fVar32 = (float)(**(code **)(*(long *)puVar9[3] + 0x30))();
        fVar32 = ((*(float *)((ulong)((int)((float)auStack_2d8._0_4_ * (float)uStack_2b8 *
                                           _DAT_01198bd8) & 0xffff) * 4 + 0xf778a04) + _DAT_011983f0
                  ) * fVar32 * *(float *)(lVar14 + 0x10) * _DAT_01198a08 + _DAT_011983f0) *
                 _DAT_011986e0;
        fVar32 = fVar32 * fVar32;
        *(float *)(lVar30 + -4 + lVar28) = fVar32;
        *(float *)(lVar30 + lVar28) = SQRT(fVar32);
        uVar18 = uVar18 + 1;
        lVar28 = lVar28 + 0x14;
      } while (uStack_2e8 != uVar18);
    }
    *(undefined4 *)(plStack_308 + 6) = 0;
    uVar8 = _UNK_014eb208;
    uVar34 = _DAT_014eb200;
    fStack_2dc = _DAT_011983d0;
    uVar18 = 0x7fffffff;
    if (plStack_308[1] - *plStack_308 == 0) {
      uStack_288 = (ulong)(uint)uStack_288._4_4_ << 0x20;
LAB_0d3f4418:
      uStack_290 = uVar8;
      uStack_298 = uVar34;
      fStack_30c = -0.0;
      uStack_278 = 0x80000000;
      iStack_2ec = -0x80000000;
      uVar24 = 0x7fffffff;
      fStack_244 = NAN;
    }
    else {
      uVar26 = (plStack_308[1] - *plStack_308 >> 2) * -0x3333333333333333;
      lVar14 = plStack_308[3];
      uVar22 = 0;
      uStack_288 = (ulong)(uint)uStack_288._4_4_ << 0x20;
      lVar28 = 0x24;
      uVar24 = 0;
      uVar17 = uVar26;
      do {
        uVar17 = uVar17 - 1;
        pfVar2 = (float *)(*plStack_308 + uVar22 * 0x14);
        uVar22 = uVar22 + 1;
        if (uVar22 < uVar26) {
          pfVar23 = (float *)(*plStack_308 + lVar28);
          uVar25 = uVar17;
          do {
            if ((pfVar2[4] <= *pfVar23) &&
               (SQRT((pfVar23[-2] - pfVar2[2]) * (pfVar23[-2] - pfVar2[2]) +
                     (pfVar23[-4] - *pfVar2) * (pfVar23[-4] - *pfVar2) +
                     (pfVar23[-3] - pfVar2[1]) * (pfVar23[-3] - pfVar2[1])) + pfVar2[4] < *pfVar23))
            goto LAB_0d3f4157;
            pfVar23 = pfVar23 + 5;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        uVar25 = (ulong)uVar24;
        uVar24 = uVar24 + 1;
        *(uint *)(plStack_308 + 6) = uVar24;
        *(float **)(lVar14 + uVar25 * 8) = pfVar2;
        fVar32 = pfVar2[3];
        if (pfVar2[3] <= (float)uStack_288) {
          fVar32 = (float)uStack_288;
        }
        uStack_288 = CONCAT44(uStack_288._4_4_,fVar32);
LAB_0d3f4157:
        lVar28 = lVar28 + 0x14;
      } while (uVar22 != uVar26 + (uVar26 == 0));
      if (uVar24 == 0) goto LAB_0d3f4418;
      uStack_228 = (ulong)uVar24;
      uVar24 = 0x7fffffff;
      fStack_30c = -0.0;
      uVar18 = 0;
      uStack_278 = 0x80000000;
      iStack_2ec = -0x80000000;
      fVar32 = _DAT_014e1ff0;
      fStack_244 = _UNK_014e1ff4;
      fVar33 = _UNK_014e1ff8;
      fVar37 = _UNK_014e1ffc;
      do {
        uStack_2e8 = CONCAT44(uStack_2e8._4_4_,iStack_2ec);
        uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(int)uStack_278);
        puVar5 = *(ulong **)(lVar14 + uVar18 * 8);
        fStack_1ac = *(float *)(puVar5 + 2);
        auStack_2d8 = ZEXT416((uint)fStack_1ac);
        uStack_270 = CONCAT44(uStack_270._4_4_,*(float *)(puVar5 + 1));
        fStack_1e8 = *(float *)(puVar5 + 1) - fStack_1ac;
        auStack_2a8 = (undefined1  [8])*puVar5;
        _fStack_2a0 = 0;
        fStack_1b8 = SUB84(auStack_2a8,0) - fStack_1ac;
        fStack_1b4 = (float)((ulong)auStack_2a8 >> 0x20) - fStack_1ac;
        fStack_1b0 = 0.0 - fStack_1ac;
        fStack_1ac = 0.0 - fStack_1ac;
        fStack_1a8 = fVar32;
        fStack_1a4 = fStack_244;
        fStack_1a0 = fVar33;
        fStack_19c = fVar37;
        fStack_198 = fStack_30c;
        uStack_298 = floorf();
        uVar34 = floorf();
        iVar12 = (int)uStack_298._4_4_;
        uStack_298 = CONCAT44((int)(float)uVar34,(int)(float)uStack_298);
        uStack_290 = CONCAT44((int)(float)((ulong)uVar34 >> 0x20),iVar12);
        fVar45 = (float)floorf();
        fVar32 = auStack_2d8._0_4_;
        auVar36._4_12_ = auStack_2d8._4_12_;
        auVar36._0_4_ = fVar32 + (float)auStack_2a8._0_4_;
        auVar41._4_4_ = auStack_2a8._4_4_;
        auVar41._0_4_ = auStack_2a8._4_4_;
        auVar41._8_4_ = auStack_2a8._4_4_;
        auVar41._12_4_ = auStack_2a8._4_4_;
        auVar42._4_12_ = auVar41._4_12_;
        auVar42._0_4_ = (float)auStack_2a8._4_4_ + fVar32;
        auStack_2d8._0_4_ = fVar32 + (float)uStack_270;
        auStack_2d8._4_12_ = auVar36._4_12_;
        _auStack_2a8 = auVar42;
        fVar32 = (float)floorf(auVar36._0_8_);
        fVar46 = (float)floorf();
        fVar47 = (float)floorf();
        fStack_30c = (float)(int)fVar32;
        if ((int)fVar32 < (int)fStack_198) {
          fStack_30c = fStack_198;
        }
        fVar32 = (float)(~-(uint)((int)(float)uStack_298 < (int)fStack_1a8) & (uint)fStack_1a8 |
                        (uint)(float)uStack_298 & -(uint)((int)(float)uStack_298 < (int)fStack_1a8))
        ;
        fStack_244 = (float)(~-(uint)((int)uStack_298._4_4_ < (int)fStack_1a4) & (uint)fStack_1a4 |
                            (uint)uStack_298._4_4_ &
                            -(uint)((int)uStack_298._4_4_ < (int)fStack_1a4));
        fVar33 = (float)(~-(uint)((int)(uint)uStack_290 < (int)fStack_1a0) & (uint)fStack_1a0 |
                        (uint)uStack_290 & -(uint)((int)(uint)uStack_290 < (int)fStack_1a0));
        fVar37 = (float)(~-(uint)((int)uStack_290._4_4_ < (int)fStack_19c) & (uint)fStack_19c |
                        uStack_290._4_4_ & -(uint)((int)uStack_290._4_4_ < (int)fStack_19c));
        iStack_2ec = (int)fVar46;
        if ((int)fVar46 < (int)(float)uStack_2e8) {
          iStack_2ec = (int)(float)uStack_2e8;
        }
        if ((int)fVar45 < (int)uVar24) {
          uVar24 = (int)fVar45;
        }
        uVar13 = (int)fVar47;
        if ((int)fVar47 < (int)(float)uStack_2b8) {
          uVar13 = (uint)(float)uStack_2b8;
        }
        uStack_278 = (ulong)uVar13;
        uVar18 = uVar18 + 1;
      } while (uStack_228 != uVar18);
      uStack_298 = CONCAT44((float)(int)fStack_244 + _UNK_014e9bd4,
                            (float)(int)fVar32 + _DAT_014e9bd0);
      uStack_290 = CONCAT44((float)(int)fVar37 + _UNK_014e9bdc,(float)(int)fVar33 + _UNK_014e9bd8);
      fStack_2dc = (float)(int)uVar24 + _DAT_011986e0;
      uVar18 = (ulong)(uint)fVar32;
    }
    plVar27 = (long *)*puStack_238;
    fStack_31c = 0.0;
    uStack_318 = 0;
    cVar10 = (**(code **)(*plVar27 + 0x10))(plVar27);
    auStack_2a8 = (undefined1  [8])uVar18;
    iStack_2f0 = (int)uVar18 >> 4;
    iStack_2bc = (int)uVar24 >> 4;
    uVar13 = (int)fStack_30c >> 4;
    uStack_240 = (ulong)uVar13;
    auStack_48 = (undefined1  [16])0x0;
    auStack_58 = (undefined1  [16])0x0;
    auStack_68 = (undefined1  [16])0x0;
    auStack_78 = (undefined1  [16])0x0;
    auStack_88 = (undefined1  [16])0x0;
    auStack_98 = (undefined1  [16])0x0;
    auStack_a8 = (undefined1  [16])0x0;
    auStack_b8 = (undefined1  [16])0x0;
    uStack_270 = 0;
    uStack_228 = CONCAT71(uStack_228._1_7_,cVar10);
    uStack_248 = uVar24;
    if ((cVar10 != '\0') && (iVar12 = (int)uStack_278 >> 4, iStack_2bc <= iVar12)) {
      if ((int)uVar13 < iStack_2f0) {
        uStack_270 = 0;
      }
      else {
        if (iVar12 < iStack_2bc) {
          iVar12 = iStack_2bc;
        }
        auStack_2d8._0_4_ = iVar12;
        uStack_270 = 0;
        lVar14 = 0;
        iVar12 = iStack_2bc;
        do {
          lVar14 = (long)(int)lVar14;
          iVar16 = iStack_2f0;
          do {
            uStack_170 = (undefined8 *)CONCAT44(iVar12,iVar16);
            lVar28 = (**(code **)(*plVar27 + 0x18))(plVar27);
            *(long *)(auStack_b8 + lVar14 * 8) = lVar28;
            if (lVar28 != 0) {
              uStack_270 = (ulong)*(ushort *)(*(long *)(lVar28 + 0x30) + 0xa8);
            }
            iVar16 = iVar16 + 1;
            lVar14 = lVar14 + 1;
          } while (uVar13 + 1 != iVar16);
          bVar31 = iVar12 != auStack_2d8._0_4_;
          iVar12 = iVar12 + 1;
        } while (bVar31);
      }
    }
    fStack_320 = auStack_2a8._0_4_;
    if ((int)fStack_320 <= (int)fStack_30c) {
      iVar12 = (int)uStack_278;
      uStack_318 = uStack_248;
      fVar32 = fStack_30c;
      if ((int)uStack_248 <= iVar12) {
        uVar24 = ((int)uStack_240 - iStack_2f0) + 1;
        fStack_1e8 = (float)auStack_218._4_4_;
        fStack_1e4 = (float)auStack_218._4_4_;
        fStack_1e0 = (float)auStack_218._4_4_;
        fStack_1dc = (float)auStack_218._4_4_;
        if ((int)fStack_244 <= iStack_2ec) {
          fStack_198 = (float)auStack_1d8._4_4_;
          fStack_194 = (float)auStack_1d8._4_4_;
          fStack_190 = (float)auStack_1d8._4_4_;
          fStack_18c = (float)auStack_1d8._4_4_;
          fStack_c8 = uStack_298._4_4_;
          fStack_c4 = uStack_298._4_4_;
          fStack_c0 = uStack_298._4_4_;
          fStack_bc = uStack_298._4_4_;
          fStack_1a8 = (float)auStack_268._4_4_;
          fStack_1a4 = (float)auStack_268._4_4_;
          fStack_1a0 = (float)auStack_268._4_4_;
          fStack_19c = (float)auStack_268._4_4_;
          uStack_258 = 0;
          lStack_230 = 0;
          plVar15 = plStack_308;
          lVar14 = lStack_250;
          fVar32 = (float)auStack_1d8._0_4_;
          fVar33 = (float)uStack_298;
          fVar37 = uStack_298._4_4_;
          uVar48 = (uint)uStack_290;
          uVar49 = uStack_290._4_4_;
          cVar10 = (char)uStack_228;
          iVar12 = iStack_2ec;
          fVar45 = (float)auStack_268._0_4_;
          uStack_240 = (ulong)uVar24;
          plStack_180 = plVar27;
          do {
            fStack_1f0 = (fVar33 - fVar45) * (float)auStack_218._0_4_;
            uStack_2e8 = CONCAT44(uStack_2e8._4_4_,(fVar33 - fVar45) * fVar32);
            uStack_298 = CONCAT44(fVar37,fVar33);
            uStack_290 = CONCAT44(uVar49,uVar48);
            fVar46 = fStack_2dc;
            uVar24 = uStack_248;
            do {
              fVar38 = fVar46 - fStack_310;
              uStack_2b8 = CONCAT44(uStack_2b8._4_4_,fVar38);
              fVar47 = fStack_1e8 * fVar38 + fStack_1f0;
              fVar40 = fVar33 - (fVar47 * (float)auStack_218._0_4_ + fVar45);
              auStack_2a8._0_4_ = fVar46;
              fVar46 = fVar46 - (fVar47 * fStack_1e8 + fStack_310);
              uStack_318 = uVar24;
              if (fVar40 * fVar40 + fVar46 * fVar46 <= (float)uStack_288) {
                if (cVar10 != '\0') {
                  lStack_230 = *(long *)(auStack_b8 +
                                        (long)((((int)fStack_320 >> 4) - iStack_2f0) +
                                              (((int)uVar24 >> 4) - iStack_2bc) * (int)uStack_240) *
                                        8);
                  if (lStack_230 == 0) {
                    lStack_230 = 0;
                    goto LAB_0d3f4814;
                  }
                }
                uStack_2b8 = CONCAT44(uStack_2b8._4_4_,fVar38 * (float)auStack_1c8._0_4_);
                fVar47 = fStack_c8;
                fVar46 = fStack_244;
                do {
                  fVar38 = (fVar47 - fStack_1a8) * fStack_198 + (float)uStack_2e8 +
                           (float)uStack_2b8;
                  fVar43 = fVar33 - (fVar38 * fVar32 + fVar45);
                  auStack_2d8._0_4_ = fVar47;
                  fVar40 = fVar47 - (fVar38 * fStack_198 + fStack_1a8);
                  fVar38 = (float)auStack_2a8._0_4_ -
                           (fVar38 * (float)auStack_1c8._0_4_ + fStack_310);
                  fStack_31c = fVar46;
                  if ((fVar38 * fVar38 + fVar43 * fVar43 + fVar40 * fVar40 <= (float)uStack_288) &&
                     ((ulong)*(uint *)(plVar15 + 6) != 0)) {
                    uVar18 = 0;
                    do {
                      pfVar2 = *(float **)(plVar15[3] + uVar18 * 8);
                      if (((float)auStack_2a8._0_4_ - pfVar2[2]) *
                          ((float)auStack_2a8._0_4_ - pfVar2[2]) +
                          (fVar33 - *pfVar2) * (fVar33 - *pfVar2) +
                          (fVar47 - pfVar2[1]) * (fVar47 - pfVar2[1]) < pfVar2[3]) {
                        if (cVar10 == '\0') {
                          lStack_178 = 0;
                        }
                        else {
                          uVar24 = (uint)fVar46 >> 4;
                          if (0xffe < (uVar24 + 0x7ff & 0xffff)) break;
                          sVar4 = *(short *)(*(long *)(lStack_230 + 0x30) + 0xa8);
                          sVar21 = (short)(uVar24 << 4);
                          if ((sVar21 < sVar4) ||
                             (*(short *)(*(long *)(lStack_230 + 0x30) + 0xaa) <= sVar21)) break;
                          lVar28 = ((long)(short)uVar24 - (long)(short)((uint)(int)sVar4 >> 4)) *
                                   0x68;
                          if ((short)uVar24 !=
                              (short)*(char *)(*(long *)(lStack_230 + 0x108) + 0x61 + lVar28))
                          break;
                          lStack_178 = *(long *)(lStack_230 + 0x108) + lVar28;
                        }
                        uStack_1ec = (uStack_318 & 0xf) << 4 |
                                     (int)fVar46 - (int)(float)uStack_270 & 0xfU |
                                     ((uint)fStack_320 & 0xf) << 8;
                        if (lStack_178 == 0) {
                          lVar28 = (**(code **)(*plVar27 + 0x28))(plVar27);
                        }
                        else {
                          lVar28 = (**(code **)(**(long **)(lStack_178 + 0x30) + 0x20))();
                        }
                        plVar20 = *(long **)(lVar14 + 0x40);
                        fVar32 = (float)auStack_1d8._0_4_;
                        fVar33 = (float)uStack_298;
                        fVar37 = uStack_298._4_4_;
                        uVar48 = (uint)uStack_290;
                        uVar49 = uStack_290._4_4_;
                        iVar12 = iStack_2ec;
                        fVar45 = (float)auStack_268._0_4_;
                        if (plVar20 != *(long **)(lVar14 + 0x48)) {
                          do {
                            plVar15 = (long *)plVar20[1];
                            if (plVar15 != (long *)plVar20[2]) {
                              lVar30 = *plVar20;
LAB_0d3f4bb0:
                              if (*(long *)(lVar28 + 0x68) != *plVar15) goto code_r0x0d3f4bb5;
                              if (lVar28 != lVar30) {
                                fVar32 = *(float *)(lVar14 + 0x18);
                                if ((0.0 < fVar32) &&
                                   ((_DAT_011983f0 <= fVar32 ||
                                    (fStack_1b8 = fVar32,
                                    fVar32 = (float)(**(code **)(*(long *)puStack_238[3] + 0x30))(),
                                    fVar32 < fStack_1b8)))) {
                                  uStack_148 = 0;
                                  uStack_160 = 0x72696106;
                                  uStack_158 = 0;
                                  uStack_150 = 0;
                                  uStack_168 = 0xd8dcc5186bafa55b;
                                  uStack_170 = &uStack_170;
                                  uStack_140 = func_0x0cc41880(0xf6ff9e0,&uStack_168);
                                  lStack_108 = 0;
                                  uStack_100 = 0;
                                  uStack_118 = 0;
                                  lStack_110 = 0;
                                  lStack_128 = 0;
                                  lStack_120 = 0;
                                  uStack_138 = 0;
                                  plStack_130 = (long *)0x0;
                                  uStack_f8 = 1;
                                  uStack_f4 = 1;
                                  uStack_f0 = 0;
                                  uStack_e8 = 0x100;
                                  lStack_e0 = 0;
                                  iStack_d8 = 0;
                                  LOCK();
                                  lStack_d0 = 0;
                                  UNLOCK();
                                  uStack_300 = CONCAT44((int)fStack_31c - 1,fStack_320);
                                  uStack_2f8 = uStack_318;
                                  (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                  cVar10 = func_0x0c6e95e0(&uStack_170);
                                  cVar11 = '\x01';
                                  if (cVar10 == '\0') {
                                    uStack_300 = CONCAT44((int)fStack_31c + 1,fStack_320);
                                    uStack_2f8 = uStack_318;
                                    (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                    cVar10 = func_0x0c6e95e0(&uStack_170);
                                    if (cVar10 == '\0') {
                                      uStack_300 = CONCAT44(fStack_31c,fStack_320);
                                      uStack_2f8 = uStack_318 - 1;
                                      (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                      cVar10 = func_0x0c6e95e0(&uStack_170);
                                      if (cVar10 == '\0') {
                                        uStack_300 = CONCAT44(fStack_31c,fStack_320);
                                        uStack_2f8 = uStack_318 + 1;
                                        (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                        cVar10 = func_0x0c6e95e0(&uStack_170);
                                        if (cVar10 == '\0') {
                                          uStack_300 = CONCAT44(fStack_31c,(int)fStack_320 - 1);
                                          uStack_2f8 = uStack_318;
                                          (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                          cVar10 = func_0x0c6e95e0(&uStack_170);
                                          if (cVar10 == '\0') {
                                            uStack_300 = CONCAT44(fStack_31c,(int)fStack_320 + 1);
                                            uStack_2f8 = uStack_318;
                                            (**(code **)(*plVar27 + 0x28))(plVar27,&uStack_300);
                                            cVar11 = func_0x0c6e95e0(&uStack_170);
                                          }
                                        }
                                      }
                                    }
                                  }
                                  if (((lStack_d0 != lStack_e0) || (iStack_d8 != 0)) &&
                                     (cVar10 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,
                                                               &UNK_0126e3df,&UNK_013a8ed3),
                                     cVar10 != '\0')) {
                                    _DAT_00000000 = 0xdeadc0de;
                                  }
                                  if (lStack_110 != 0) {
                                    lStack_108 = lStack_110;
                                    func_0x0412a280();
                                  }
                                  lVar29 = lStack_128;
                                  lVar14 = lStack_120;
                                  if (lStack_128 != 0) {
                                    for (; lVar29 != lVar14; lVar14 = lVar14 + -0x48) {
                                      if ((*(byte *)(lVar14 + -0x20) & 1) == 0) {
                                        bVar3 = *(byte *)(lVar14 + -0x40);
                                      }
                                      else {
                                        func_0x0412a280(*(undefined8 *)(lVar14 + -0x10),
                                                        *(ulong *)(lVar14 + -0x20) &
                                                        0xfffffffffffffffe);
                                        bVar3 = *(byte *)(lVar14 + -0x40);
                                      }
                                      if ((bVar3 & 1) != 0) {
                                        func_0x0412a280(*(undefined8 *)(lVar14 + -0x30),
                                                        *(ulong *)(lVar14 + -0x40) &
                                                        0xfffffffffffffffe);
                                      }
                                    }
                                    lStack_120 = lVar29;
                                    func_0x0412a280();
                                    plVar27 = plStack_180;
                                  }
                                  plVar15 = plStack_130;
                                  if (plStack_130 != (long *)0x0) {
                                    LOCK();
                                    plVar1 = plStack_130 + 1;
                                    lVar14 = *plVar1;
                                    *plVar1 = *plVar1 + -1;
                                    UNLOCK();
                                    if (lVar14 == 0) {
                                      (**(code **)(*plStack_130 + 0x10))(plStack_130);
                                      func_0x0412c2d0(plVar15);
                                    }
                                  }
                                  if ((uStack_160 & 1) != 0) {
                                    func_0x0412a280(uStack_150);
                                  }
                                  lVar14 = lStack_250;
                                  fVar32 = (float)auStack_1d8._0_4_;
                                  fVar33 = (float)uStack_298;
                                  fVar37 = uStack_298._4_4_;
                                  uVar48 = (uint)uStack_290;
                                  uVar49 = uStack_290._4_4_;
                                  cVar10 = (char)uStack_228;
                                  fVar45 = (float)auStack_268._0_4_;
                                  if (cVar11 != '\0') goto LAB_0d3f4b80;
                                }
                                if (cVar10 == '\0') {
                                  cVar11 = (**(code **)(*plVar27 + 0x68))
                                                     (plVar27,&fStack_320,lVar30);
                                  fVar32 = (float)auStack_1d8._0_4_;
                                  fVar33 = (float)uStack_298;
                                  fVar37 = uStack_298._4_4_;
                                  uVar48 = (uint)uStack_290;
                                  uVar49 = uStack_290._4_4_;
                                  fVar45 = (float)auStack_268._0_4_;
                                  if (cVar11 == '\0') goto LAB_0d3f4b80;
                                  uStack_258 = (ulong)((int)uStack_258 + 1);
                                  plVar15 = plStack_308;
                                  iVar12 = iStack_2ec;
                                }
                                else {
                                  func_0x0ca92a80(lStack_178,0,(undefined2)uStack_1ec,lVar30);
                                  uStack_258 = (ulong)((int)uStack_258 + 1);
                                  plVar15 = plStack_308;
                                  fVar32 = (float)auStack_1d8._0_4_;
                                  fVar33 = (float)uStack_298;
                                  fVar37 = uStack_298._4_4_;
                                  uVar48 = (uint)uStack_290;
                                  uVar49 = uStack_290._4_4_;
                                  iVar12 = iStack_2ec;
                                  fVar45 = (float)auStack_268._0_4_;
                                }
                                break;
                              }
                            }
LAB_0d3f4b80:
                            plVar20 = plVar20 + 4;
                            plVar15 = plStack_308;
                            iVar12 = iStack_2ec;
                          } while (plVar20 != *(long **)(lVar14 + 0x48));
                        }
                        break;
                      }
                      uVar18 = uVar18 + 1;
                    } while (*(uint *)(plVar15 + 6) != uVar18);
                  }
                  fVar46 = (float)((int)fStack_31c + 1);
                  fVar47 = (float)auStack_2d8._0_4_ + _DAT_011983f0;
                  bVar31 = (int)fStack_31c < iVar12;
                  fStack_31c = fVar46;
                } while (bVar31);
              }
LAB_0d3f4814:
              uVar24 = uStack_318 + 1;
              fVar46 = (float)auStack_2a8._0_4_ + _DAT_011983f0;
            } while ((int)uStack_318 < (int)uStack_278);
            fVar46 = (float)((int)fStack_320 + 1);
            fVar33 = fVar33 + _DAT_011983f0;
            bVar31 = (int)fStack_320 < (int)fStack_30c;
            fStack_320 = fVar46;
          } while (bVar31);
          uStack_318 = uVar24;
          if ((int)uStack_258 != 0) {
            uVar18 = 0x100000000;
            goto LAB_0d3f5227;
          }
          goto LAB_0d3f515a;
        }
        if ((int)fStack_30c <= (int)fStack_320) {
          fVar32 = fStack_320;
        }
        if ((char)uStack_228 == '\0') {
          auVar19 = auStack_2a8;
          fVar33 = (float)uStack_298;
          do {
            iVar16 = (iVar12 - uStack_248) + 1;
            fVar37 = fStack_2dc;
            do {
              fVar45 = (fVar37 - fStack_310) * (float)auStack_218._4_4_ +
                       (fVar33 - (float)auStack_268._0_4_) * (float)auStack_218._0_4_;
              fVar46 = fVar33 - (fVar45 * (float)auStack_218._0_4_ + (float)auStack_268._0_4_);
              fVar45 = fVar37 - (fVar45 * (float)auStack_218._4_4_ + fStack_310);
              if (fVar46 * fVar46 + fVar45 * fVar45 <= (float)uStack_288) {
                fStack_31c = fStack_244;
              }
              fVar37 = fVar37 + _DAT_011983f0;
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            fVar37 = SUB84(auVar19,0);
            fVar33 = fVar33 + _DAT_011983f0;
            auVar19 = (undefined1  [8])(ulong)((int)fVar37 + 1);
          } while (fVar37 != fVar32);
        }
        else {
          auVar19 = auStack_2a8;
          fVar33 = (float)uStack_298;
          do {
            fVar45 = SUB84(auVar19,0);
            uVar13 = uStack_248;
            fVar37 = fStack_2dc;
            do {
              fVar46 = (fVar37 - fStack_310) * (float)auStack_218._4_4_ +
                       (fVar33 - (float)auStack_268._0_4_) * (float)auStack_218._0_4_;
              fVar47 = fVar33 - (fVar46 * (float)auStack_218._0_4_ + (float)auStack_268._0_4_);
              fVar46 = fVar37 - (fVar46 * (float)auStack_218._4_4_ + fStack_310);
              if ((fVar47 * fVar47 + fVar46 * fVar46 <= (float)uStack_288) &&
                 (*(long *)(auStack_b8 +
                           (long)(int)((((int)uVar13 >> 4) - iStack_2bc) * uVar24 +
                                      (((int)fVar45 >> 4) - iStack_2f0)) * 8) != 0)) {
                fStack_31c = fStack_244;
              }
              uVar13 = uVar13 + 1;
              fVar37 = fVar37 + _DAT_011983f0;
            } while (iVar12 + 1U != uVar13);
            fVar33 = fVar33 + _DAT_011983f0;
            auVar19 = (undefined1  [8])(ulong)((int)fVar45 + 1);
          } while (fVar45 != fVar32);
        }
        uStack_318 = iVar12 + 1;
      }
      fStack_320 = (float)((int)fVar32 + 1);
    }
LAB_0d3f515a:
    uStack_208 = 0x1500000119c615;
    uStack_220 = 0x190000011d3b75;
    func_0x0d3dfbc0(puStack_238 + 5,&uStack_208,&uStack_220);
    if ((uStack_220 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_220 & 0xff00ffffffffffff) - 8);
    }
    uStack_220 = 0;
    if ((uStack_208 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_208 & 0xff00ffffffffffff) - 8);
    }
  }
  uVar18 = 0;
LAB_0d3f5227:
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar18;
  return auVar7 << 0x40;
code_r0x0d3f4bb5:
  plVar15 = plVar15 + 1;
  if (plVar15 == (long *)plVar20[2]) goto LAB_0d3f4b80;
  goto LAB_0d3f4bb0;
}


