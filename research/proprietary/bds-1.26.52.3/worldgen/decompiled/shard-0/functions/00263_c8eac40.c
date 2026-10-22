/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9eac40 (ELF vaddr 0xc8eac40)
 * Label: callee-of:0xc5c9ae0
 * Body:  [[0c9eac40, 0c9eb78e]]
 * Ghidra: FUN_0c9eac40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c9eac40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  byte bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_188;
  undefined8 uStack_168;
  float fStack_160;
  undefined8 uStack_158;
  float fStack_150;
  undefined8 uStack_148;
  float fStack_140;
  undefined8 uStack_138;
  float fStack_130;
  undefined8 uStack_128;
  float fStack_120;
  undefined8 uStack_118;
  float fStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [12];
  float fStack_dc;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_5[3] <= *param_5) {
LAB_0c9eade2:
    uVar4 = *param_4;
    uVar3 = *param_3;
    fVar1 = *(float *)(param_4 + 1);
    fVar2 = *(float *)(param_3 + 1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    *param_1 = *param_3;
    *(ulong *)((long)param_1 + 0xc) =
         CONCAT44((float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar3 >> 0x20),
                  (float)uVar4 - (float)uVar3);
    *(float *)((long)param_1 + 0x14) = fVar1 - fVar2;
    *(undefined4 *)(param_1 + 3) = 3;
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = *param_4;
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_4 + 1);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 9) = 0xffffffff;
    param_1[10] = _DAT_01e7b2b0;
    *(undefined4 *)(param_1 + 0xb) = _DAT_01e7b2b8;
    *(undefined8 *)((long)param_1 + 0x5c) = _DAT_01e7b2bc;
    *(undefined4 *)((long)param_1 + 100) = _DAT_01e7b2c4;
    *(undefined2 *)(param_1 + 0xd) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)((long)param_1 + 0x7d) = 0;
    return;
  }
  if (param_5[4] <= param_5[1]) goto LAB_0c9eade2;
  if (param_5[5] <= param_5[2]) goto LAB_0c9eade2;
  fVar37 = (float)*(int *)(param_2 + 1);
  fVar25 = (float)(int)*param_2;
  fVar26 = (float)(int)((ulong)*param_2 >> 0x20);
  fVar1 = *(float *)(param_3 + 1);
  fVar27 = fVar1 - fVar37;
  uStack_78 = *param_3;
  fVar28 = (float)uStack_78;
  fVar29 = (float)((ulong)uStack_78 >> 0x20);
  uStack_68 = *param_4;
  fVar39 = (float)uStack_68;
  fVar41 = (float)((ulong)uStack_68 >> 0x20);
  fVar2 = *(float *)(param_4 + 1);
  uStack_118 = 0;
  fStack_110 = 0.0;
  uStack_128 = 0;
  fStack_120 = 0.0;
  uStack_138 = 0;
  fStack_130 = 0.0;
  uStack_148 = 0;
  fStack_140 = 0.0;
  uStack_158 = 0;
  fStack_150 = 0.0;
  uStack_168 = 0;
  fStack_160 = 0.0;
  fVar32 = *param_5 - fVar25;
  fVar33 = param_5[1] - fVar26;
  fVar21 = param_5[3] - fVar25;
  fVar23 = param_5[4] - fVar26;
  auVar35._4_4_ = fVar33;
  auVar35._0_4_ = fVar32;
  auVar35._8_8_ = 0;
  auVar6._4_4_ = fVar23;
  auVar6._0_4_ = fVar21;
  auVar6._8_8_ = 0;
  auStack_d8 = minps(auVar35,auVar6);
  if (fVar32 <= fVar21) {
    fVar32 = fVar21;
  }
  uStack_70 = 0;
  fVar21 = fVar28 - fVar25;
  fVar30 = fVar29 - fVar26;
  uStack_60 = 0;
  uStack_38 = CONCAT44(fVar26,fVar25);
  uStack_30 = 0;
  fVar40 = (fVar39 - fVar25) - fVar21;
  fVar42 = (fVar41 - fVar26) - fVar30;
  fVar38 = (fVar2 - fVar37) - fVar27;
  uStack_b8 = 0;
  uStack_b0 = 0;
  fVar34 = auStack_d8._0_4_;
  fVar36 = auStack_d8._4_4_;
  if (_DAT_01198b04 <= fVar40 * fVar40) {
    fVar24 = (fVar34 - fVar21) / fVar40;
    fStack_110 = 0.0;
    uVar31 = -(uint)(0.0 <= fVar24 && fVar24 <= _DAT_011983f0);
    fVar43 = 0.0;
    fStack_58 = 0.0;
    if ((uVar31 & 1) != 0) {
      fStack_110 = fVar38 * fVar24 + fVar27;
      fVar43 = fVar24 * fVar40 + fVar21;
      fStack_58 = fVar24 * fVar42 + fVar30;
      uStack_118 = CONCAT44(fStack_58,fVar43);
    }
    fVar24 = (fVar32 - fVar21) / fVar40;
    bVar11 = false;
    fStack_120 = 0.0;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
    auStack_88 = ZEXT416((uint)fStack_110);
    uStack_108 = CONCAT44(fStack_58,fStack_58);
    uStack_100 = CONCAT44(fStack_58,fStack_58);
    if ((fVar24 < 0.0) || (_DAT_011983f0 < fVar24)) {
      auStack_f8 = ZEXT416((uint)fStack_110);
      auStack_f8._4_4_ = 0;
      auStack_f8._0_4_ = fStack_110;
      _auStack_e8 = ZEXT416((uint)fVar43);
      auStack_e8._4_4_ = 0;
      auStack_e8._0_4_ = fVar43;
      fStack_54 = 0.0;
    }
    else {
      fStack_120 = fVar38 * fVar24 + fVar27;
      auStack_e8._4_4_ = fVar24 * fVar40 + fVar21;
      fStack_54 = fVar24 * fVar42 + fVar30;
      fStack_50 = fVar24 * 0.0 + 0.0;
      fStack_4c = fVar24 * 0.0 + 0.0;
      uStack_128 = CONCAT44(fStack_54,auStack_e8._4_4_);
      auStack_e8._0_4_ = fVar43;
      auStack_e8._8_4_ = 0;
      fStack_dc = fStack_54;
      bVar11 = true;
      auStack_f8._0_8_ = CONCAT44(fStack_120,fStack_110);
      auStack_f8._8_8_ = 0;
    }
  }
  else {
    auStack_f8 = ZEXT816(0);
    auStack_f8._0_8_ = 0;
    uVar31 = 0;
    fStack_120 = 0.0;
    fStack_54 = 0.0;
    auStack_88 = ZEXT816(0);
    uStack_108 = 0;
    uStack_100 = 0;
    bVar11 = false;
    _auStack_e8 = ZEXT816(0);
    auStack_e8._0_8_ = 0;
    fStack_58 = 0.0;
    fStack_50 = 0.0;
    fStack_4c = 0.0;
  }
  auStack_48 = ZEXT416((uint)fStack_120);
  fVar43 = param_5[2] - fVar37;
  fVar24 = param_5[5] - fVar37;
  if (fVar33 <= fVar23) {
    fVar33 = fVar23;
  }
  if (_DAT_01198b04 <= fVar42 * fVar42) {
    fVar22 = (fVar36 - fVar30) / fVar42;
    uStack_b8 = 0;
    uStack_b0 = 0;
    bVar8 = 0.0 <= fVar22 && fVar22 <= _DAT_011983f0;
    fVar20 = 0.0;
    fStack_130 = 0.0;
    fVar23 = 0.0;
    if (0.0 <= fVar22 && fVar22 <= _DAT_011983f0) {
      fStack_130 = fVar38 * fVar22 + fVar27;
      fVar23 = fVar22 * fVar40 + fVar21;
      fVar20 = fVar22 * fVar42 + fVar30;
      uStack_138 = CONCAT44(fVar20,fVar23);
    }
    uStack_98 = CONCAT44(fVar20,fVar20);
    uStack_90 = CONCAT44(fVar20,fVar20);
    fVar20 = (fVar33 - fVar30) / fVar42;
    bVar7 = false;
    if (fVar20 < 0.0) {
      fStack_140 = 0.0;
      fVar22 = 0.0;
    }
    else {
      if (_DAT_011983f0 < fVar20) {
        fStack_140 = 0.0;
        fVar22 = 0.0;
      }
      else {
        fStack_140 = fVar38 * fVar20 + fVar27;
        fVar22 = fVar20 * fVar40 + fVar21;
        fVar18 = fVar20 * fVar42 + fVar30;
        uStack_148 = CONCAT44(fVar18,fVar22);
        uStack_b8 = CONCAT44(fVar18,fVar18);
        uStack_b0 = CONCAT44(fVar18,fVar18);
      }
      bVar7 = fVar20 <= _DAT_011983f0;
    }
  }
  else {
    bVar8 = false;
    uStack_98 = 0;
    uStack_90 = 0;
    fStack_140 = 0.0;
    fVar22 = 0.0;
    fStack_130 = 0.0;
    fVar23 = 0.0;
    bVar7 = false;
  }
  fVar20 = fVar43;
  if (fVar24 <= fVar43) {
    fVar20 = fVar24;
  }
  if (fVar43 <= fVar24) {
    fVar43 = fVar24;
  }
  if (_DAT_01198b04 <= fVar38 * fVar38) {
    auStack_a8 = ZEXT416((uint)fStack_130);
    fVar24 = (fVar20 - fVar27) / fVar38;
    auStack_c8 = ZEXT816(0);
    bVar9 = 0.0 <= fVar24 && fVar24 <= _DAT_011983f0;
    fStack_150 = 0.0;
    uStack_188 = 0;
    if (0.0 <= fVar24 && fVar24 <= _DAT_011983f0) {
      fVar18 = fVar24 * fVar40 + fVar21;
      fVar19 = fVar24 * fVar42 + fVar30;
      fStack_150 = fVar38 * fVar24 + fVar27;
      uStack_158 = CONCAT44(fVar19,fVar18);
      uStack_188 = CONCAT44(fVar19,fVar18);
    }
    fVar24 = (fVar43 - fVar27) / fVar38;
    if (fVar24 < 0.0) goto LAB_0c9eb152;
    if (_DAT_011983f0 < fVar24) {
      fVar40 = 0.0;
      fVar42 = 0.0;
    }
    else {
      fVar40 = fVar40 * fVar24 + fVar21;
      fVar42 = fVar42 * fVar24 + fVar30;
      fStack_160 = fVar38 * fVar24 + fVar27;
      uStack_168 = CONCAT44(fVar42,fVar40);
      auStack_c8 = ZEXT416((uint)fStack_160);
    }
    bVar10 = fVar24 <= _DAT_011983f0;
    if ((uVar31 & 1) != 0) goto LAB_0c9eb29f;
LAB_0c9eb2c3:
    bVar12 = false;
  }
  else {
    uStack_188 = 0;
    auStack_c8 = ZEXT816(0);
    bVar9 = false;
    fStack_150 = 0.0;
LAB_0c9eb152:
    auStack_c8._0_4_ = 0.0;
    bVar10 = false;
    fVar40 = 0.0;
    fVar42 = 0.0;
    if ((uVar31 & 1) == 0) goto LAB_0c9eb2c3;
LAB_0c9eb29f:
    bVar12 = false;
    if ((((fVar36 <= (float)uStack_108) && ((float)uStack_108 <= fVar33)) &&
        (fVar20 <= (float)auStack_88._0_4_)) && (bVar12 = true, fVar43 < (float)auStack_88._0_4_))
    goto LAB_0c9eb2c3;
  }
  bVar13 = false;
  if (((bVar11) && (fVar36 <= fStack_54)) &&
     ((fStack_54 <= fVar33 &&
      ((bVar13 = false, fVar20 <= fStack_120 && (bVar13 = true, fVar43 < fStack_120)))))) {
    bVar13 = false;
  }
  if (bVar8) {
    bVar11 = false;
    if ((((fVar34 <= fVar23) && (bVar11 = false, fVar23 <= fVar32)) &&
        (bVar11 = false, fVar20 <= fStack_130)) && (bVar11 = true, fVar43 < fStack_130))
    goto LAB_0c9eb323;
  }
  else {
LAB_0c9eb323:
    bVar11 = false;
  }
  if (((!bVar7) || (fVar22 < fVar34)) ||
     ((fVar32 < fVar22 || ((fStack_140 < fVar20 || (bVar8 = true, fVar43 < fStack_140)))))) {
    bVar8 = false;
  }
  if (bVar9) {
    auVar5._4_4_ = -(uint)((float)uStack_188 < fVar34);
    auVar5._0_4_ = -(uint)((float)uStack_188 < fVar34);
    auVar5._8_4_ = -(uint)(uStack_188._4_4_ < fVar36);
    auVar5._12_4_ = -(uint)(uStack_188._4_4_ < fVar36);
    uVar15 = movmskpd(uVar31,auVar5);
    if ((((fVar32 < (float)uStack_188 | (byte)uVar15 | (byte)uVar15 >> 1) & 1) != 0) ||
       (bVar7 = true, fVar33 < uStack_188._4_4_)) {
      bVar7 = false;
    }
  }
  else {
    bVar7 = false;
  }
  if ((((!bVar10) || (fVar40 < fVar34)) || (fVar32 < fVar40)) ||
     ((fVar42 < fVar36 || (bVar9 = true, fVar33 < fVar42)))) {
    bVar9 = false;
  }
  puVar16 = (undefined8 *)0x0;
  if (bVar12) {
    puVar16 = &uStack_118;
  }
  if (bVar13) {
    if (bVar12) {
      puVar16 = &uStack_118;
      if (((float)auStack_f8._0_4_ - fVar27) * ((float)auStack_f8._0_4_ - fVar27) +
          ((float)auStack_e8._0_4_ - fVar21) * ((float)auStack_e8._0_4_ - fVar21) +
          (fStack_58 - fVar30) * (fStack_58 - fVar30) <=
          ((float)auStack_f8._4_4_ - fVar27) * ((float)auStack_f8._4_4_ - fVar27) +
          ((float)auStack_e8._4_4_ - fVar21) * ((float)auStack_e8._4_4_ - fVar21) +
          (fStack_54 - fVar30) * (fStack_54 - fVar30)) goto LAB_0c9eb438;
    }
    puVar16 = &uStack_128;
  }
LAB_0c9eb438:
  if ((bVar11) &&
     ((puVar16 == (undefined8 *)0x0 ||
      (fVar33 = (float)*puVar16 - fVar21, fVar32 = (float)((ulong)*puVar16 >> 0x20) - fVar30,
      (fStack_130 - fVar27) * (fStack_130 - fVar27) +
      (fVar23 - fVar21) * (fVar23 - fVar21) +
      ((float)uStack_98 - fVar30) * ((float)uStack_98 - fVar30) <
      (*(float *)(puVar16 + 1) - fVar27) * (*(float *)(puVar16 + 1) - fVar27) +
      fVar33 * fVar33 + fVar32 * fVar32)))) {
    puVar16 = &uStack_138;
  }
  if ((bVar8) &&
     ((puVar16 == (undefined8 *)0x0 ||
      (fVar33 = (float)*puVar16 - fVar21, fVar32 = (float)((ulong)*puVar16 >> 0x20) - fVar30,
      (fStack_140 - fVar27) * (fStack_140 - fVar27) +
      (fVar22 - fVar21) * (fVar22 - fVar21) +
      ((float)uStack_b8 - fVar30) * ((float)uStack_b8 - fVar30) <
      (*(float *)(puVar16 + 1) - fVar27) * (*(float *)(puVar16 + 1) - fVar27) +
      fVar33 * fVar33 + fVar32 * fVar32)))) {
    puVar16 = &uStack_148;
  }
  if ((bVar7) &&
     ((puVar16 == (undefined8 *)0x0 ||
      (fVar33 = (float)*puVar16 - fVar21, fVar32 = (float)((ulong)*puVar16 >> 0x20) - fVar30,
      (fStack_150 - fVar27) * (fStack_150 - fVar27) +
      ((float)uStack_188 - fVar21) * ((float)uStack_188 - fVar21) +
      (uStack_188._4_4_ - fVar30) * (uStack_188._4_4_ - fVar30) <
      (*(float *)(puVar16 + 1) - fVar27) * (*(float *)(puVar16 + 1) - fVar27) +
      fVar33 * fVar33 + fVar32 * fVar32)))) {
    puVar16 = &uStack_158;
  }
  if (bVar9) {
    if ((puVar16 == (undefined8 *)0x0) ||
       (fVar33 = (float)*puVar16 - fVar21, fVar32 = (float)((ulong)*puVar16 >> 0x20) - fVar30,
       ((float)auStack_c8._0_4_ - fVar27) * ((float)auStack_c8._0_4_ - fVar27) +
       (fVar40 - fVar21) * (fVar40 - fVar21) + (fVar42 - fVar30) * (fVar42 - fVar30) <
       (*(float *)(puVar16 + 1) - fVar27) * (*(float *)(puVar16 + 1) - fVar27) +
       fVar33 * fVar33 + fVar32 * fVar32)) {
      puVar16 = &uStack_168;
    }
  }
  else if (puVar16 == (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    *param_1 = *param_3;
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar41 - fVar29,fVar39 - fVar28);
    *(float *)((long)param_1 + 0x14) = fVar2 - fVar1;
    *(undefined4 *)(param_1 + 3) = 3;
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = *param_4;
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_4 + 1);
    goto LAB_0c9eb6b4;
  }
  bVar17 = 5;
  if (puVar16 != &uStack_128) {
    bVar17 = -(puVar16 != &uStack_118) | 4;
  }
  bVar14 = 0;
  if (puVar16 != &uStack_138) {
    bVar14 = bVar17;
  }
  bVar17 = 1;
  if (puVar16 != &uStack_148) {
    bVar17 = bVar14;
  }
  bVar14 = 2;
  if (puVar16 != &uStack_158) {
    bVar14 = bVar17;
  }
  bVar17 = 3;
  if (puVar16 != &uStack_168) {
    bVar17 = bVar14;
  }
  uVar4 = *puVar16;
  fVar32 = *(float *)(puVar16 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(fVar41 - fVar29,fVar39 - fVar28);
  *(float *)((long)param_1 + 0x14) = fVar2 - fVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x1c) = bVar17;
  param_1[4] = *param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 1);
  *(ulong *)((long)param_1 + 0x2c) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar26,(float)uVar4 + fVar25);
  *(float *)((long)param_1 + 0x34) = fVar37 + fVar32;
LAB_0c9eb6b4:
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = _DAT_01e7b2b0;
  *(undefined4 *)(param_1 + 0xb) = _DAT_01e7b2b8;
  *(undefined8 *)((long)param_1 + 0x5c) = _DAT_01e7b2bc;
  *(undefined4 *)((long)param_1 + 100) = _DAT_01e7b2c4;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  *(undefined8 *)((long)param_1 + 0x7d) = 0;
  return;
}


