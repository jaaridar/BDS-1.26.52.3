/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5258cb0
 * Label: SurfaceBuilderBiomeComponentGlue::vslot1
 * Body:  [[05258cb0, 05258ccf] [05258cd1, 05258d89] [05258d90, 05258de1] [05258df0, 05258e42] [05258e50, 05258fe6] [05258ff0, 05259062] [05259070, 052590d8] [052590e0, 0525994d]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SurfaceBuilderBiomeComponentGlue__vslot1
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
               int param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  int in_EAX;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long *unaff_RBX;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  bool bVar29;
  char cVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 in_XMM2_Dd;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int iStack0000000000000008;
  int iStack000000000000000c;
  uint uStack0000000000000010;
  char cStack0000000000000018;
  undefined7 uStack0000000000000019;
  int iStack0000000000000020;
  int iStack0000000000000024;
  uint uStack0000000000000028;
  int iStack0000000000000030;
  undefined4 uStack000000000000003c;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  ulong uStack0000000000000050;
  float fStack0000000000000070;
  undefined4 uStack0000000000000074;
  ulong uStack0000000000000078;
  uint uStack0000000000000080;
  char cStack0000000000000084;
  int iStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  char cStack000000000000009c;
  int *in_stack_000000a0;
  ulong uStack00000000000000a8;
  ulong uStack00000000000000b0;
  ulong uStack00000000000000b8;
  ulong uStack00000000000000c0;
  
  iVar31 = param_4 + -5 >> 0x1f;
  iVar22 = iVar31 - (param_4 + -5);
  iVar11 = iVar22 + 0xf;
  if (-1 < iVar22) {
    iVar11 = iVar22;
  }
  uStack00000000000000a8 = (ulong)(uint)(iVar31 - (iVar11 >> 4));
  iVar11 = (int)((ulong)((long)((param_3 >> 0x1f) - param_3) * -0x2aaaaaab) >> 0x20);
  uVar23 = ((param_3 >> 0x1f) - (iVar11 >> 0x1f)) + (iVar11 >> 1);
  uStack00000000000000b0 = (ulong)uVar23;
  iVar22 = (in_EAX >> 0x1f) - in_EAX;
  iVar11 = iVar22 + 0xf;
  if (-1 < iVar22) {
    iVar11 = iVar22;
  }
  iVar11 = (in_EAX >> 0x1f) - (iVar11 >> 4);
  uStack0000000000000080 = 0;
  uStack0000000000000078 = 0;
  uStack0000000000000010 = 0;
  _iStack0000000000000008 = 0;
  uStack0000000000000028 = 0;
  _iStack0000000000000020 = 0;
  _cStack0000000000000018 = (long)iVar11;
  uVar14 = 0xffffffffffffffff;
  uVar9 = CONCAT71((int7)(int3)((uint)iVar11 >> 8),1);
  _fStack0000000000000070 = 0;
  iVar11 = 0;
  _iStack0000000000000030 = 0;
  lVar20 = 0;
  uVar33 = 0xffffffffffffffff;
  uStack0000000000000050 = 0xffffffffffffffff;
  do {
    uVar6 = (undefined4)uVar9;
    iVar22 = (int)(lVar20 + uStack00000000000000a8);
    uStack00000000000000b8 = (lVar20 + uStack00000000000000a8 & 0xffffffff) * 0x2fc20f00000000;
    iStack0000000000000088 = iVar22 * 0x10;
    uVar15 = 0xffffffff;
    do {
      uStack00000000000000c0 = uVar15;
      uVar7 = uVar23 + (int)uStack00000000000000c0;
      _fStack0000000000000048 = (long)((ulong)uVar7 << 0x20 ^ uStack00000000000000b8) >> 0x20;
      lVar20 = 0;
      uVar15 = uVar14;
      uVar34 = uVar33;
      bVar5 = true;
      iVar31 = iVar11;
      do {
        bVar29 = bVar5;
        iVar11 = (int)(lVar20 + _cStack0000000000000018);
        lVar19 = (long)(int)(((iVar22 - (int)unaff_RBX[5]) * (int)unaff_RBX[7] +
                             (uVar7 - *(int *)((long)unaff_RBX + 0x2c))) *
                             *(int *)((long)unaff_RBX + 0x3c) + (iVar11 - (int)unaff_RBX[6]));
        puVar1 = (ulong *)(unaff_RBX[8] + lVar19 * 0x14);
        if (((*(int *)(unaff_RBX[8] + lVar19 * 0x14) == 0x7fffffff) &&
            (*(int *)((long)puVar1 + 4) == 0x7fffffff)) && ((int)puVar1[1] == 0x7fffffff)) {
          uVar14 = (lVar20 + _cStack0000000000000018) * 0x6ebfff5 ^ _fStack0000000000000048;
          uVar33 = (long)((uVar14 * 0x285b825 + 0xb) * uVar14) >> 0x10 ^
                   *(ulong *)(*unaff_RBX + 0xe8);
          uVar14 = *(ulong *)(*unaff_RBX + 0xf0);
          if (uVar33 == 0 && uVar14 == 0) {
            uVar14 = 0x6a09e667f3bcc909;
            uVar33 = 0x9e3779b97f4a7c15;
          }
          uVar16 = uVar14 ^ uVar33;
          uVar27 = uVar16 << 0x15 ^ (uVar33 << 0x31 | uVar33 >> 0xf) ^ uVar16;
          uVar16 = uVar16 << 0x1c | uVar16 >> 0x24;
          lVar20 = (ulong)(((int)(uVar33 + uVar14) * 0x20000 | (uint)(uVar33 + uVar14 >> 0x2f)) +
                          (int)uVar33) * 10;
          uVar10 = (uint)lVar20;
          while (iVar35 = (int)uVar27, uVar10 < 6) {
            lVar20 = uVar27 + uVar16;
            uVar16 = uVar16 ^ uVar27;
            uVar27 = uVar16 << 0x15 ^ (uVar27 << 0x31 | uVar27 >> 0xf) ^ uVar16;
            uVar16 = uVar16 << 0x1c | uVar16 >> 0x24;
            lVar20 = (ulong)(((int)lVar20 * 0x20000 | (uint)((ulong)lVar20 >> 0x2f)) + iVar35) * 10;
            uVar10 = (uint)lVar20;
          }
          uVar10 = ((int)(uVar27 + uVar16) * 0x20000 | (uint)(uVar27 + uVar16 >> 0x2f)) + iVar35;
          uVar16 = uVar16 ^ uVar27;
          uVar14 = uVar16 << 0x15 ^ (uVar27 << 0x31 | uVar27 >> 0xf) ^ uVar16;
          uVar33 = uVar16 << 0x1c | uVar16 >> 0x24;
          while( true ) {
            if (((ulong)uVar10 * 9 & 0xfffffffc) != 0) break;
            uVar10 = ((int)(uVar14 + uVar33) * 0x20000 | (uint)(uVar14 + uVar33 >> 0x2f)) +
                     (int)uVar14;
            uVar33 = uVar33 ^ uVar14;
            uVar14 = uVar33 << 0x15 ^ (uVar14 << 0x31 | uVar14 >> 0xf) ^ uVar33;
            uVar33 = uVar33 << 0x1c | uVar33 >> 0x24;
          }
          lVar19 = (ulong)(((int)(uVar14 + uVar33) * 0x20000 | (uint)(uVar14 + uVar33 >> 0x2f)) +
                          (int)uVar14) * 10;
          if ((uint)lVar19 < 6) {
            uVar33 = uVar33 ^ uVar14;
            uVar27 = uVar33 << 0x1c | uVar33 >> 0x24;
            uVar33 = uVar33 << 0x15 ^ (uVar14 << 0x31 | uVar14 >> 0xf) ^ uVar33;
            do {
              lVar19 = uVar27 + uVar33;
              iVar35 = (int)uVar33;
              uVar27 = uVar27 ^ uVar33;
              uVar33 = uVar27 << 0x15 ^ (uVar33 << 0x31 | uVar33 >> 0xf) ^ uVar27;
              uVar27 = uVar27 << 0x1c | uVar27 >> 0x24;
              lVar19 = (ulong)(((int)lVar19 * 0x20000 | (uint)((ulong)lVar19 >> 0x2f)) + iVar35) *
                       10;
            } while ((uint)lVar19 < 6);
          }
          uVar24 = (int)((ulong)lVar20 >> 0x20) + iStack0000000000000088;
          uVar27 = (ulong)uVar24;
          uVar36 = (int)((ulong)uVar10 * 9 >> 0x20) + uVar7 * 0xc;
          uVar16 = (ulong)uVar36;
          uVar10 = iVar11 << 4 | (uint)((ulong)lVar19 >> 0x20);
          *puVar1 = CONCAT44(uVar36,uVar24);
          *(uint *)(puVar1 + 1) = uVar10;
          param_4 = *in_stack_000000a0;
          param_6 = in_stack_000000a0[1];
          param_5 = in_stack_000000a0[2];
        }
        else {
          uVar27 = *puVar1;
          uVar16 = uVar27 >> 0x20;
          uVar10 = (uint)puVar1[1];
        }
        lVar20 = (long)(int)uVar27 - (long)param_4;
        iVar11 = (int)uVar16;
        uVar32 = ((long)(int)uVar10 - (long)param_5) * ((long)(int)uVar10 - (long)param_5) +
                 ((long)iVar11 - (long)param_6) * ((long)iVar11 - (long)param_6) + lVar20 * lVar20;
        if (uVar15 < uVar32) {
          uVar14 = uVar15;
          iVar11 = iVar31;
          if (uVar34 < uVar32) {
            uVar33 = uVar34;
            if (uVar32 <= uStack0000000000000050) {
              _iStack0000000000000020 = uVar27 & 0xffffffff | uVar16 << 0x20;
              uStack0000000000000028 = uVar10;
              uStack0000000000000050 = uVar32;
            }
          }
          else {
            uStack0000000000000028 = uStack0000000000000010;
            _iStack0000000000000020 = _iStack0000000000000008;
            _iStack0000000000000008 = uVar27 & 0xffffffff | uVar16 << 0x20;
            uVar33 = uVar32;
            uStack0000000000000010 = uVar10;
            uStack0000000000000050 = uVar34;
          }
        }
        else {
          uStack0000000000000028 = uStack0000000000000010;
          _iStack0000000000000020 = _iStack0000000000000008;
          _iStack0000000000000008 = uStack0000000000000078;
          uStack0000000000000010 = uStack0000000000000080;
          uStack0000000000000078 = uVar27 & 0xffffffff | uVar16 << 0x20;
          _iStack0000000000000030 = uVar27 & 0xffffffff;
          uVar14 = uVar32;
          uVar33 = uVar15;
          _fStack0000000000000070 = (ulong)uVar10;
          uStack0000000000000080 = uVar10;
          uStack0000000000000050 = uVar34;
        }
        lVar20 = 1;
        uVar15 = uVar14;
        uVar34 = uVar33;
        bVar5 = false;
        iVar31 = iVar11;
      } while (bVar29);
      uVar7 = (int)uStack00000000000000c0 + 1;
      uVar15 = (ulong)uVar7;
    } while (uVar7 != 2);
    lVar20 = 1;
    cStack0000000000000084 = (char)uVar9;
    uVar9 = 0;
  } while (cStack0000000000000084 != '\0');
  iVar31 = (iStack0000000000000030 >> 0x1f) - iStack0000000000000030;
  iVar22 = iVar31 + 0xf;
  if (-1 < iVar31) {
    iVar22 = iVar31;
  }
  iVar31 = (int)((ulong)((long)((iVar11 >> 0x1f) - iVar11) * -0x2aaaaaab) >> 0x20);
  iVar12 = (int)_fStack0000000000000070 >> 0x1f;
  iVar18 = iVar12 - (int)_fStack0000000000000070;
  iVar35 = iVar18 + 0xf;
  if (-1 < iVar18) {
    iVar35 = iVar18;
  }
  lVar20 = (long)(((((iStack0000000000000030 >> 0x1f) - (iVar22 >> 4)) - (int)unaff_RBX[5]) *
                   (int)unaff_RBX[7] +
                  ((((iVar31 >> 1) - (iVar31 >> 0x1f)) + (iVar11 >> 0x1f)) -
                  *(int *)((long)unaff_RBX + 0x2c))) * *(int *)((long)unaff_RBX + 0x3c) +
                 ((iVar12 - (iVar35 >> 4)) - (int)unaff_RBX[6]));
  puVar2 = (undefined8 *)(unaff_RBX[8] + lVar20 * 0x14);
  iVar11 = *(int *)(unaff_RBX[8] + 0xc + lVar20 * 0x14);
  _cStack0000000000000084 = uVar6;
  if (iVar11 == 0x7fffffff) {
    func_0x05259950((long)&stack0x00000088 + 4);
    *puVar2 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
    puVar2[1] = CONCAT44(uStack0000000000000098,uStack0000000000000094);
    *(char *)(puVar2 + 2) = cStack000000000000009c;
    iVar11 = *(int *)((long)puVar2 + 0xc);
    cVar17 = cStack000000000000009c;
  }
  else {
    cVar17 = *(char *)(puVar2 + 2);
  }
  lVar20 = uVar14 - uVar33;
  if ((long)uVar14 < (long)uVar33) {
    lVar20 = uVar33 - uVar14;
  }
  fVar38 = (float)lVar20 * _DAT_011988f4 + _DAT_011983f0;
  *(bool *)((long)unaff_RBX + 0x25) = _DAT_01198450 < fVar38;
  *(int *)((long)unaff_RBX + 0x1c) = iVar11;
  *(char *)((long)unaff_RBX + 0x24) = cVar17;
  fVar43 = 0.0;
  if (_DAT_011985d4 < fVar38) {
    _cStack0000000000000018 = CONCAT71(uStack0000000000000019,cVar17);
    lVar20 = uVar14 - uStack0000000000000050;
    if ((long)uVar14 < (long)uStack0000000000000050) {
      lVar20 = uStack0000000000000050 - uVar14;
    }
    lVar19 = uVar33 - uStack0000000000000050;
    if ((long)uVar33 < (long)uStack0000000000000050) {
      lVar19 = uStack0000000000000050 - uVar33;
    }
    iVar31 = (iStack0000000000000008 >> 0x1f) - iStack0000000000000008;
    iVar22 = iVar31 + 0xf;
    if (-1 < iVar31) {
      iVar22 = iVar31;
    }
    iVar31 = (int)((ulong)((long)((iStack000000000000000c >> 0x1f) - iStack000000000000000c) *
                          -0x2aaaaaab) >> 0x20);
    iVar12 = ((int)uStack0000000000000010 >> 0x1f) - uStack0000000000000010;
    iVar35 = iVar12 + 0xf;
    if (-1 < iVar12) {
      iVar35 = iVar12;
    }
    iVar12 = (int)unaff_RBX[5];
    iVar18 = *(int *)((long)unaff_RBX + 0x2c);
    iVar37 = (int)unaff_RBX[6];
    iVar26 = (int)unaff_RBX[7];
    iVar25 = *(int *)((long)unaff_RBX + 0x3c);
    lVar28 = (long)(((((iStack0000000000000008 >> 0x1f) - (iVar22 >> 4)) - iVar12) * iVar26 +
                    ((((iVar31 >> 1) - (iVar31 >> 0x1f)) + (iStack000000000000000c >> 0x1f)) -
                    iVar18)) * iVar25 +
                   ((((int)uStack0000000000000010 >> 0x1f) - (iVar35 >> 4)) - iVar37));
    lVar21 = unaff_RBX[8];
    puVar3 = (undefined4 *)(lVar21 + lVar28 * 0x14);
    iVar22 = *(int *)(lVar21 + 0xc + lVar28 * 0x14);
    _fStack0000000000000070 = CONCAT44(uStack0000000000000074,fVar38);
    if (iVar22 == 0x7fffffff) {
      func_0x05259950((long)&stack0x00000088 + 4);
      *puVar3 = uStack000000000000008c;
      puVar3[1] = uStack0000000000000090;
      puVar3[2] = uStack0000000000000094;
      puVar3[3] = uStack0000000000000098;
      *(char *)(puVar3 + 4) = cStack000000000000009c;
      iVar22 = puVar3[3];
      iVar12 = (int)unaff_RBX[5];
      iVar18 = *(int *)((long)unaff_RBX + 0x2c);
      iVar37 = (int)unaff_RBX[6];
      iVar26 = (int)unaff_RBX[7];
      iVar25 = *(int *)((long)unaff_RBX + 0x3c);
      lVar21 = unaff_RBX[8];
      cVar17 = cStack000000000000009c;
    }
    else {
      cVar17 = *(char *)(puVar3 + 4);
    }
    iVar35 = (iStack0000000000000020 >> 0x1f) - iStack0000000000000020;
    iVar31 = iVar35 + 0xf;
    if (-1 < iVar35) {
      iVar31 = iVar35;
    }
    iVar35 = (int)((ulong)((long)((iStack0000000000000024 >> 0x1f) - iStack0000000000000024) *
                          -0x2aaaaaab) >> 0x20);
    iVar8 = ((int)uStack0000000000000028 >> 0x1f) - uStack0000000000000028;
    iVar13 = iVar8 + 0xf;
    if (-1 < iVar8) {
      iVar13 = iVar8;
    }
    lVar28 = (long)(((((int)uStack0000000000000028 >> 0x1f) - iVar37) - (iVar13 >> 4)) +
                   (((iStack0000000000000024 >> 0x1f) - iVar18) + ((iVar35 >> 1) - (iVar35 >> 0x1f))
                   + (((iStack0000000000000020 >> 0x1f) - iVar12) - (iVar31 >> 4)) * iVar26) *
                   iVar25);
    puVar2 = (undefined8 *)(lVar21 + lVar28 * 0x14);
    iVar31 = *(int *)(lVar21 + 0xc + lVar28 * 0x14);
    if (iVar31 == 0x7fffffff) {
      func_0x05259950((long)&stack0x00000088 + 4);
      *puVar2 = CONCAT44(uStack0000000000000090,uStack000000000000008c);
      puVar2[1] = CONCAT44(uStack0000000000000098,uStack0000000000000094);
      *(char *)(puVar2 + 2) = cStack000000000000009c;
      iVar31 = *(int *)((long)puVar2 + 0xc);
      cVar30 = cStack000000000000009c;
    }
    else {
      cVar30 = *(char *)(puVar2 + 2);
    }
    piVar4 = in_stack_000000a0;
    fVar43 = (float)lVar20;
    uVar9 = *(undefined8 *)in_stack_000000a0;
    iVar35 = (int)((ulong)uVar9 >> 0x20);
    fVar38 = _DAT_01198c14;
    if (((iVar35 < iVar11) && (iVar35 < iVar22)) && (cStack0000000000000018 != cVar17)) {
      uStack000000000000003c = 0;
      fVar39 = _DAT_011983f0;
    }
    else {
      fVar39 = 0.0;
      uStack000000000000003c = 0;
      if (iVar11 - iVar22 != 0) {
        iVar12 = iVar22 - iVar11;
        if (iVar22 < iVar11) {
          iVar12 = iVar11 - iVar22;
        }
        fVar44 = ((float)iVar35 + _DAT_011986e0) - (float)(iVar22 + iVar11) * _DAT_011986e0;
        fVar39 = (float)iVar12 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar44);
        if (fVar44 <= 0.0) {
          fVar39 = (fVar39 + _DAT_01198af0) /
                   *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar39 + _DAT_01198af0) * 4);
        }
        else {
          fVar39 = (fVar39 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar39) * 4);
        }
        uStack000000000000003c = in_XMM2_Dd;
        if ((float)(_DAT_014e7ba0 & (uint)fVar39) <= _DAT_01198724) {
          _fStack0000000000000048 = CONCAT44(uStack000000000000004c,fVar43);
          fVar38 = (float)func_0x0d3414e0((float)(int)uVar9,*unaff_RBX);
          fVar39 = fVar39 + fVar38;
          uVar9 = *(undefined8 *)piVar4;
          iVar35 = (int)((ulong)uVar9 >> 0x20);
          fVar43 = fStack0000000000000048;
        }
      }
    }
    fVar43 = fVar43 * _DAT_01198cf4;
    fVar44 = (float)lVar19 * _DAT_01198cf4;
    if (((iVar11 <= iVar35) || (iVar31 <= iVar35)) ||
       (fVar40 = _DAT_011983f0, cStack0000000000000018 == cVar30)) {
      fVar40 = 0.0;
      if (iVar11 - iVar31 != 0) {
        iVar12 = iVar31 - iVar11;
        if (iVar31 < iVar11) {
          iVar12 = iVar11 - iVar31;
        }
        fVar42 = ((float)iVar35 + _DAT_011986e0) - (float)(iVar11 + iVar31) * _DAT_011986e0;
        fVar40 = (float)iVar12 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar42);
        if (fVar42 <= 0.0) {
          fVar40 = (fVar40 + _DAT_01198af0) /
                   *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar40 + _DAT_01198af0) * 4);
        }
        else {
          fVar40 = (fVar40 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar40) * 4);
        }
        if ((float)(_DAT_014e7ba0 & (uint)fVar40) <= _DAT_01198724) {
          if ((fVar38 != _DAT_01198c14) || (NAN(fVar38) || NAN(_DAT_01198c14))) {
            fVar40 = fVar40 + fVar38;
          }
          else {
            _fStack0000000000000048 = CONCAT44(uStack000000000000004c,fVar43);
            fVar38 = (float)func_0x0d3414e0((float)(int)uVar9,*unaff_RBX);
            uVar9 = *(undefined8 *)piVar4;
            iVar35 = (int)((ulong)uVar9 >> 0x20);
            fVar43 = fStack0000000000000048;
            fVar40 = fVar40 + fVar38;
          }
        }
      }
    }
    fVar43 = _DAT_011983f0 - fVar43;
    fVar44 = _DAT_011983f0 - fVar44;
    if (((iVar22 <= iVar35) || (iVar31 <= iVar35)) || (fVar42 = _DAT_011983f0, cVar17 == cVar30)) {
      fVar42 = 0.0;
      if (iVar22 - iVar31 != 0) {
        iVar11 = iVar31 - iVar22;
        if (iVar31 < iVar22) {
          iVar11 = iVar22 - iVar31;
        }
        fVar41 = ((float)iVar35 + _DAT_011986e0) - (float)(iVar31 + iVar22) * _DAT_011986e0;
        fVar42 = (float)iVar11 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar41);
        if (fVar41 <= 0.0) {
          fVar42 = (fVar42 + _DAT_01198af0) /
                   *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar42 + _DAT_01198af0) * 4);
        }
        else {
          fVar42 = (fVar42 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar42) * 4);
        }
        if ((float)(_DAT_014e7ba0 & (uint)fVar42) <= _DAT_01198724) {
          if ((fVar38 == _DAT_01198c14) && (!NAN(fVar38) && !NAN(_DAT_01198c14))) {
            _cStack0000000000000018 = CONCAT44(uStack0000000000000019._3_4_,fVar44);
            fVar38 = (float)func_0x0d3414e0((float)(int)uVar9,*unaff_RBX);
            fVar44 = _cStack0000000000000018;
          }
          fVar42 = fVar42 + fVar38;
        }
      }
    }
    fVar38 = 0.0;
    if (0.0 <= fStack0000000000000070) {
      fVar38 = fStack0000000000000070;
    }
    fVar41 = 0.0;
    if (0.0 <= fVar43) {
      fVar41 = fVar43;
    }
    fVar43 = 0.0;
    if (0.0 <= fVar44) {
      fVar43 = fVar44;
    }
    fVar44 = fVar41 * fVar40;
    if (fVar41 * fVar40 <= fVar43 * fVar42) {
      fVar44 = fVar43 * fVar42;
    }
    if (fVar39 <= fVar44) {
      fVar39 = fVar44;
    }
    fVar39 = (fVar38 + fVar38) * fVar39;
    fVar43 = 0.0;
    if (0.0 <= fVar39) {
      fVar43 = fVar39;
    }
  }
  *(float *)(unaff_RBX + 4) = fVar43;
  return;
}



/* ---- assembly ---- */
/* 05258cb0 */  LEA ESI,[RCX + -0x5]
/* 05258cb3 */  MOV R10D,ESI
/* 05258cb6 */  SAR R10D,0x1f
/* 05258cba */  MOV EDI,R10D
/* 05258cbd */  SUB EDI,ESI
/* 05258cbf */  LEA ESI,[RDI + 0xf]
/* 05258cc2 */  TEST EDI,EDI
/* 05258cc4 */  CMOVNS ESI,EDI
/* 05258cc7 */  SAR ESI,0x4
/* 05258cca */  SUB R10D,ESI
/* 05258ccd */  MOV qword ptr [RSP + 0xa8],R10
/* 05258cd5 */  MOV ESI,EDX
/* 05258cd7 */  SAR ESI,0x1f
/* 05258cda */  MOV EDI,ESI
/* 05258cdc */  SUB EDI,EDX
/* 05258cde */  MOVSXD RDX,EDI
/* 05258ce1 */  IMUL RDX,RDX,-0x2aaaaaab
/* 05258ce8 */  MOV RDI,RDX
/* 05258ceb */  SHR RDI,0x3f
/* 05258cef */  SHR RDX,0x20
/* 05258cf3 */  SAR EDX,0x1
/* 05258cf5 */  ADD EDI,ESI
/* 05258cf7 */  ADD EDI,EDX
/* 05258cf9 */  MOV qword ptr [RSP + 0xb0],RDI
/* 05258d01 */  MOV EDX,EAX
/* 05258d03 */  SAR EDX,0x1f
/* 05258d06 */  MOV ESI,EDX
/* 05258d08 */  SUB ESI,EAX
/* 05258d0a */  LEA EAX,[RSI + 0xf]
/* 05258d0d */  TEST ESI,ESI
/* 05258d0f */  CMOVNS EAX,ESI
/* 05258d12 */  SAR EAX,0x4
/* 05258d15 */  SUB EDX,EAX
/* 05258d17 */  MOV dword ptr [RSP + 0x80],0x0
/* 05258d22 */  MOV qword ptr [RSP + 0x78],0x0
/* 05258d2b */  MOV dword ptr [RSP + 0x10],0x0
/* 05258d33 */  MOV qword ptr [RSP + 0x8],0x0
/* 05258d3c */  MOV dword ptr [RSP + 0x28],0x0
/* 05258d44 */  MOV qword ptr [RSP + 0x20],0x0
/* 05258d4d */  MOVSXD RAX,EDX
/* 05258d50 */  MOV qword ptr [RSP + 0x18],RAX
/* 05258d55 */  MOV RBP,-0x1
/* 05258d5c */  MOV AL,0x1
/* 05258d5e */  MOV qword ptr [RSP + 0x70],0x0
/* 05258d67 */  MOV dword ptr [RSP],0x0
/* 05258d6e */  MOV dword ptr [RSP + 0x30],0x0
/* 05258d76 */  XOR ESI,ESI
/* 05258d78 */  MOV R12,-0x1
/* 05258d7f */  MOV qword ptr [RSP + 0x50],-0x1
/* 05258d88 */  JMP 0x05258da8
/* 05258d90 */  MOV ESI,0x1
/* 05258d95 */  TEST byte ptr [RSP + 0x84],0x1
/* 05258d9d */  MOV EAX,0x0
/* 05258da2 */  JZ 0x052591c6
/* 05258da8 */  MOV dword ptr [RSP + 0x84],EAX
/* 05258daf */  ADD RSI,qword ptr [RSP + 0xa8]
/* 05258db7 */  MOV EDX,ESI
/* 05258db9 */  MOV RAX,0x2fc20f00000000
/* 05258dc3 */  IMUL RDX,RAX
/* 05258dc7 */  MOV qword ptr [RSP + 0xb8],RDX
/* 05258dcf */  MOV EAX,ESI
/* 05258dd1 */  SHL EAX,0x4
/* 05258dd4 */  MOV dword ptr [RSP + 0x88],EAX
/* 05258ddb */  MOV EDX,0xffffffff
/* 05258de0 */  JMP 0x05258dff
/* 05258df0 */  MOV RDX,qword ptr [RSP + 0xc0]
/* 05258df8 */  INC EDX
/* 05258dfa */  CMP EDX,0x2
/* 05258dfd */  JZ 0x05258d90
/* 05258dff */  MOV RAX,qword ptr [RSP + 0xb0]
/* 05258e07 */  MOV qword ptr [RSP + 0xc0],RDX
/* 05258e0f */  ADD EAX,EDX
/* 05258e11 */  MOV RDX,RAX
/* 05258e14 */  SHL RDX,0x20
/* 05258e18 */  XOR RDX,qword ptr [RSP + 0xb8]
/* 05258e20 */  SAR RDX,0x20
/* 05258e24 */  MOV qword ptr [RSP + 0x48],RDX
/* 05258e29 */  MOV qword ptr [RSP + 0x60],RAX
/* 05258e2e */  LEA EDX,[RAX*0x4]
/* 05258e35 */  LEA EAX,[RDX + RDX*0x2]
/* 05258e38 */  MOV dword ptr [RSP + 0x4],EAX
/* 05258e3c */  MOV R10B,0x1
/* 05258e3f */  XOR EDX,EDX
/* 05258e41 */  JMP 0x05258ec0
/* 05258e50 */  MOV ESI,dword ptr [RSP + 0x10]
/* 05258e54 */  MOV dword ptr [RSP + 0x28],ESI
/* 05258e58 */  MOV RSI,qword ptr [RSP + 0x8]
/* 05258e5d */  MOV qword ptr [RSP + 0x20],RSI
/* 05258e62 */  MOV RSI,qword ptr [RSP + 0x78]
/* 05258e67 */  MOV qword ptr [RSP + 0x8],RSI
/* 05258e6c */  MOV ESI,dword ptr [RSP + 0x80]
/* 05258e73 */  MOV dword ptr [RSP + 0x10],ESI
/* 05258e77 */  MOV RSI,R14
/* 05258e7a */  SHL RSI,0x20
/* 05258e7e */  MOV R13D,EDI
/* 05258e81 */  OR R13,RSI
/* 05258e84 */  MOV qword ptr [RSP + 0x78],R13
/* 05258e89 */  MOV dword ptr [RSP + 0x80],EDX
/* 05258e90 */  MOV qword ptr [RSP + 0x70],RDX
/* 05258e95 */  MOV dword ptr [RSP],R14D
/* 05258e99 */  MOV dword ptr [RSP + 0x30],EDI
/* 05258e9d */  MOV qword ptr [RSP + 0x50],R12
/* 05258ea2 */  MOV R12,RBP
/* 05258ea5 */  MOV RBP,R11
/* 05258ea8 */  MOV RSI,R15
/* 05258eab */  MOV EDX,0x1
/* 05258eb0 */  TEST R10B,0x1
/* 05258eb4 */  MOV R10D,0x0
/* 05258eba */  JZ 0x05258df0
/* 05258ec0 */  MOV RAX,RBP
/* 05258ec3 */  ADD RDX,qword ptr [RSP + 0x18]
/* 05258ec8 */  MOV R15,RSI
/* 05258ecb */  SUB ESI,dword ptr [RBX + 0x28]
/* 05258ece */  MOV RDI,qword ptr [RSP + 0x60]
/* 05258ed3 */  SUB EDI,dword ptr [RBX + 0x2c]
/* 05258ed6 */  MOV R11D,EDX
/* 05258ed9 */  SUB R11D,dword ptr [RBX + 0x30]
/* 05258edd */  IMUL ESI,dword ptr [RBX + 0x38]
/* 05258ee1 */  ADD ESI,EDI
/* 05258ee3 */  IMUL ESI,dword ptr [RBX + 0x3c]
/* 05258ee7 */  ADD ESI,R11D
/* 05258eea */  MOVSXD RSI,ESI
/* 05258eed */  MOV RDI,qword ptr [RBX + 0x40]
/* 05258ef1 */  LEA RSI,[RSI + RSI*0x4]
/* 05258ef5 */  LEA R11,[RDI + RSI*0x4]
/* 05258ef9 */  CMP dword ptr [RDI + RSI*0x4],0x7fffffff
/* 05258f00 */  JNZ 0x05258ff0
/* 05258f06 */  CMP dword ptr [R11 + 0x4],0x7fffffff
/* 05258f0e */  JNZ 0x05258ff0
/* 05258f14 */  CMP dword ptr [R11 + 0x8],0x7fffffff
/* 05258f1c */  JNZ 0x05258ff0
/* 05258f22 */  MOV RCX,qword ptr [RBX]
/* 05258f25 */  IMUL RSI,RDX,0x6ebfff5
/* 05258f2c */  XOR RSI,qword ptr [RSP + 0x48]
/* 05258f31 */  IMUL RDI,RSI,0x285b825
/* 05258f38 */  ADD RDI,0xb
/* 05258f3c */  IMUL RDI,RSI
/* 05258f40 */  SAR RDI,0x10
/* 05258f44 */  XOR RDI,qword ptr [RCX + 0xe8]
/* 05258f4b */  MOV RBP,qword ptr [RCX + 0xf0]
/* 05258f52 */  MOV RCX,RDI
/* 05258f55 */  OR RCX,RBP
/* 05258f58 */  MOV RCX,0x6a09e667f3bcc909
/* 05258f62 */  CMOVZ RBP,RCX
/* 05258f66 */  MOV RCX,-0x61c8864680b583eb
/* 05258f70 */  CMOVZ RDI,RCX
/* 05258f74 */  LEA RCX,[RDI + RBP*0x1]
/* 05258f78 */  ROL RCX,0x11
/* 05258f7c */  ADD ECX,EDI
/* 05258f7e */  XOR RBP,RDI
/* 05258f81 */  ROL RDI,0x31
/* 05258f85 */  MOV R8,RBP
/* 05258f88 */  SHL R8,0x15
/* 05258f8c */  XOR R8,RDI
/* 05258f8f */  XOR R8,RBP
/* 05258f92 */  ROL RBP,0x1c
/* 05258f96 */  ADD RCX,RCX
/* 05258f99 */  LEA RDI,[RCX + RCX*0x4]
/* 05258f9d */  CMP EDI,0x5
/* 05258fa0 */  JA 0x052590a1
/* 05258fa6 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 05258fb0 */  LEA RCX,[R8 + RBP*0x1]
/* 05258fb4 */  ROL RCX,0x11
/* 05258fb8 */  ADD ECX,R8D
/* 05258fbb */  XOR RBP,R8
/* 05258fbe */  ROL R8,0x31
/* 05258fc2 */  MOV R14,RBP
/* 05258fc5 */  SHL R14,0x15
/* 05258fc9 */  XOR R14,R8
/* 05258fcc */  XOR R14,RBP
/* 05258fcf */  ROL RBP,0x1c
/* 05258fd3 */  ADD RCX,RCX
/* 05258fd6 */  LEA RDI,[RCX + RCX*0x4]
/* 05258fda */  MOV R8,R14
/* 05258fdd */  CMP EDI,0x6
/* 05258fe0 */  JC 0x05258fb0
/* 05258fe2 */  JMP 0x052590a4
/* 05258ff0 */  MOV RDI,qword ptr [R11]
/* 05258ff3 */  MOV R14,RDI
/* 05258ff6 */  SHR R14,0x20
/* 05258ffa */  MOV EDX,dword ptr [R11 + 0x8]
/* 05258ffe */  MOVSXD RSI,EDI
/* 05259001 */  MOVSXD R11,ECX
/* 05259004 */  SUB RSI,R11
/* 05259007 */  MOVSXD RBP,R14D
/* 0525900a */  MOVSXD R11,R9D
/* 0525900d */  SUB RBP,R11
/* 05259010 */  MOVSXD R11,EDX
/* 05259013 */  MOVSXD R13,R8D
/* 05259016 */  SUB R11,R13
/* 05259019 */  IMUL RSI,RSI
/* 0525901d */  IMUL RBP,RBP
/* 05259021 */  ADD RBP,RSI
/* 05259024 */  IMUL R11,R11
/* 05259028 */  ADD R11,RBP
/* 0525902b */  MOV RBP,RAX
/* 0525902e */  CMP RAX,R11
/* 05259031 */  JNC 0x05258e50
/* 05259037 */  CMP R12,R11
/* 0525903a */  JNC 0x05259070
/* 0525903c */  CMP qword ptr [RSP + 0x50],R11
/* 05259041 */  JC 0x05258ea8
/* 05259047 */  SHL R14,0x20
/* 0525904b */  MOV ESI,EDI
/* 0525904d */  OR RSI,R14
/* 05259050 */  MOV qword ptr [RSP + 0x20],RSI
/* 05259055 */  MOV dword ptr [RSP + 0x28],EDX
/* 05259059 */  MOV qword ptr [RSP + 0x50],R11
/* 0525905e */  JMP 0x05258ea8
/* 05259070 */  MOV ESI,dword ptr [RSP + 0x10]
/* 05259074 */  MOV dword ptr [RSP + 0x28],ESI
/* 05259078 */  MOV RSI,qword ptr [RSP + 0x8]
/* 0525907d */  MOV qword ptr [RSP + 0x20],RSI
/* 05259082 */  SHL R14,0x20
/* 05259086 */  MOV ESI,EDI
/* 05259088 */  OR RSI,R14
/* 0525908b */  MOV qword ptr [RSP + 0x8],RSI
/* 05259090 */  MOV dword ptr [RSP + 0x10],EDX
/* 05259094 */  MOV qword ptr [RSP + 0x50],R12
/* 05259099 */  MOV R12,R11
/* 0525909c */  JMP 0x05258ea8
/* 052590a1 */  MOV R14,R8
/* 052590a4 */  LEA RCX,[R14 + RBP*0x1]
/* 052590a8 */  ROL RCX,0x11
/* 052590ac */  ADD ECX,R14D
/* 052590af */  XOR RBP,R14
/* 052590b2 */  ROL R14,0x31
/* 052590b6 */  MOV R9,RBP
/* 052590b9 */  SHL R9,0x15
/* 052590bd */  XOR R9,R14
/* 052590c0 */  XOR R9,RBP
/* 052590c3 */  ROL RBP,0x1c
/* 052590c7 */  LEA R14,[RCX + RCX*0x8]
/* 052590cb */  TEST R14D,0xfffffffc
/* 052590d2 */  JZ 0x052590e0
/* 052590d4 */  MOV R8,R9
/* 052590d7 */  JMP 0x05259113
/* 052590e0 */  LEA RCX,[R9 + RBP*0x1]
/* 052590e4 */  ROL RCX,0x11
/* 052590e8 */  ADD ECX,R9D
/* 052590eb */  XOR RBP,R9
/* 052590ee */  ROL R9,0x31
/* 052590f2 */  MOV R8,RBP
/* 052590f5 */  SHL R8,0x15
/* 052590f9 */  XOR R8,R9
/* 052590fc */  XOR R8,RBP
/* 052590ff */  ROL RBP,0x1c
/* 05259103 */  LEA R14,[RCX + RCX*0x8]
/* 05259107 */  MOV R9,R8
/* 0525910a */  TEST R14D,0xfffffffc
/* 05259111 */  JZ 0x052590e0
/* 05259113 */  LEA RCX,[R8 + RBP*0x1]
/* 05259117 */  ROL RCX,0x11
/* 0525911b */  ADD ECX,R8D
/* 0525911e */  ADD RCX,RCX
/* 05259121 */  LEA RSI,[RCX + RCX*0x4]
/* 05259125 */  CMP ESI,0x5
/* 05259128 */  JA 0x05259181
/* 0525912a */  XOR RBP,R8
/* 0525912d */  MOV R9,RBP
/* 05259130 */  ROL R9,0x1c
/* 05259134 */  ROL R8,0x31
/* 05259138 */  MOV RCX,RBP
/* 0525913b */  SHL RCX,0x15
/* 0525913f */  XOR RCX,R8
/* 05259142 */  XOR RCX,RBP
/* 05259145 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 05259150 */  LEA RSI,[R9 + RCX*0x1]
/* 05259154 */  ROL RSI,0x11
/* 05259158 */  ADD ESI,ECX
/* 0525915a */  XOR R9,RCX
/* 0525915d */  ROL RCX,0x31
/* 05259161 */  MOV R8,R9
/* 05259164 */  SHL R8,0x15
/* 05259168 */  XOR R8,RCX
/* 0525916b */  XOR R8,R9
/* 0525916e */  ROL R9,0x1c
/* 05259172 */  ADD RSI,RSI
/* 05259175 */  LEA RSI,[RSI + RSI*0x4]
/* 05259179 */  MOV RCX,R8
/* 0525917c */  CMP ESI,0x6
/* 0525917f */  JC 0x05259150
/* 05259181 */  SHR RDI,0x20
/* 05259185 */  SHR R14,0x20
/* 05259189 */  SHR RSI,0x20
/* 0525918d */  ADD EDI,dword ptr [RSP + 0x88]
/* 05259194 */  ADD R14D,dword ptr [RSP + 0x4]
/* 05259199 */  SHL EDX,0x4
/* 0525919c */  OR EDX,ESI
/* 0525919e */  MOV RCX,R14
/* 052591a1 */  SHL RCX,0x20
/* 052591a5 */  ADD RCX,RDI
/* 052591a8 */  MOV qword ptr [R11],RCX
/* 052591ab */  MOV dword ptr [R11 + 0x8],EDX
/* 052591af */  MOV RSI,qword ptr [RSP + 0xa0]
/* 052591b7 */  MOV ECX,dword ptr [RSI]
/* 052591b9 */  MOV R9D,dword ptr [RSI + 0x4]
/* 052591bd */  MOV R8D,dword ptr [RSI + 0x8]
/* 052591c1 */  JMP 0x05258ffe
/* 052591c6 */  MOV EDX,dword ptr [RSP + 0x30]
/* 052591ca */  MOV EAX,EDX
/* 052591cc */  SAR EAX,0x1f
/* 052591cf */  MOV ECX,EAX
/* 052591d1 */  SUB ECX,EDX
/* 052591d3 */  LEA EDX,[RCX + 0xf]
/* 052591d6 */  TEST ECX,ECX
/* 052591d8 */  CMOVNS EDX,ECX
/* 052591db */  SAR EDX,0x4
/* 052591de */  SUB EAX,EDX
/* 052591e0 */  MOV ESI,dword ptr [RSP]
/* 052591e3 */  MOV EDX,ESI
/* 052591e5 */  SAR EDX,0x1f
/* 052591e8 */  MOV ECX,EDX
/* 052591ea */  SUB ECX,ESI
/* 052591ec */  MOVSXD RCX,ECX
/* 052591ef */  IMUL RCX,RCX,-0x2aaaaaab
/* 052591f6 */  MOV RSI,RCX
/* 052591f9 */  SHR RSI,0x3f
/* 052591fd */  SAR RCX,0x21
/* 05259201 */  ADD ECX,ESI
/* 05259203 */  ADD ECX,EDX
/* 05259205 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0525920a */  MOV EDX,EDI
/* 0525920c */  SAR EDX,0x1f
/* 0525920f */  MOV ESI,EDX
/* 05259211 */  SUB ESI,EDI
/* 05259213 */  LEA EDI,[RSI + 0xf]
/* 05259216 */  TEST ESI,ESI
/* 05259218 */  CMOVNS EDI,ESI
/* 0525921b */  SAR EDI,0x4
/* 0525921e */  SUB EDX,EDI
/* 05259220 */  SUB EAX,dword ptr [RBX + 0x28]
/* 05259223 */  SUB ECX,dword ptr [RBX + 0x2c]
/* 05259226 */  SUB EDX,dword ptr [RBX + 0x30]
/* 05259229 */  IMUL EAX,dword ptr [RBX + 0x38]
/* 0525922d */  ADD EAX,ECX
/* 0525922f */  IMUL EAX,dword ptr [RBX + 0x3c]
/* 05259233 */  ADD EAX,EDX
/* 05259235 */  CDQE
/* 05259237 */  MOV RCX,qword ptr [RBX + 0x40]
/* 0525923b */  LEA RAX,[RAX + RAX*0x4]
/* 0525923f */  LEA R14,[RCX + RAX*0x4]
/* 05259243 */  MOV EDX,dword ptr [RCX + RAX*0x4 + 0xc]
/* 05259247 */  CMP EDX,0x7fffffff
/* 0525924d */  JNZ 0x05259282
/* 0525924f */  LEA RDI,[RSP + 0x8c]
/* 05259257 */  LEA RDX,[RSP + 0x78]
/* 0525925c */  MOV RSI,RBX
/* 0525925f */  CALL 0x05259950
/* 05259264 */  MOVUPS XMM0,xmmword ptr [RSP + 0x8c]
/* 0525926c */  MOVUPS xmmword ptr [R14],XMM0
/* 05259270 */  MOVZX ESI,byte ptr [RSP + 0x9c]
/* 05259278 */  MOV byte ptr [R14 + 0x10],SIL
/* 0525927c */  MOV EDX,dword ptr [R14 + 0xc]
/* 05259280 */  JMP 0x05259287
/* 05259282 */  MOVZX ESI,byte ptr [R14 + 0x10]
/* 05259287 */  MOV RAX,R12
/* 0525928a */  SUB RAX,RBP
/* 0525928d */  MOV RCX,RBP
/* 05259290 */  SUB RCX,R12
/* 05259293 */  CMOVL RCX,RAX
/* 05259297 */  CVTSI2SS XMM1,RCX
/* 0525929c */  MULSS XMM1,dword ptr [0x011988f4]
/* 052592a4 */  ADDSS XMM1,dword ptr [0x011983f0]
/* 052592ac */  UCOMISS XMM1,dword ptr [0x01198450]
/* 052592b3 */  SETA byte ptr [RBX + 0x25]
/* 052592b7 */  MOV dword ptr [RBX + 0x1c],EDX
/* 052592ba */  MOV byte ptr [RBX + 0x24],SIL
/* 052592be */  XORPS XMM0,XMM0
/* 052592c1 */  UCOMISS XMM1,dword ptr [0x011985d4]
/* 052592c8 */  JBE 0x05259937
/* 052592ce */  MOV byte ptr [RSP + 0x18],SIL
/* 052592d3 */  MOV qword ptr [RSP + 0x60],RDX
/* 052592d8 */  MOV RCX,qword ptr [RSP + 0x50]
/* 052592dd */  MOV RAX,RCX
/* 052592e0 */  SUB RAX,RBP
/* 052592e3 */  SUB RBP,RCX
/* 052592e6 */  CMOVL RBP,RAX
/* 052592ea */  MOV RAX,RCX
/* 052592ed */  SUB RAX,R12
/* 052592f0 */  SUB R12,RCX
/* 052592f3 */  CMOVL R12,RAX
/* 052592f7 */  MOV EAX,dword ptr [RSP + 0x8]
/* 052592fb */  MOV ECX,dword ptr [RSP + 0xc]
/* 052592ff */  MOV ESI,EAX
/* 05259301 */  SAR ESI,0x1f
/* 05259304 */  MOV EDX,ESI
/* 05259306 */  SUB EDX,EAX
/* 05259308 */  LEA EAX,[RDX + 0xf]
/* 0525930b */  TEST EDX,EDX
/* 0525930d */  CMOVNS EAX,EDX
/* 05259310 */  SAR EAX,0x4
/* 05259313 */  SUB ESI,EAX
/* 05259315 */  MOV EAX,ECX
/* 05259317 */  SAR EAX,0x1f
/* 0525931a */  MOV EDX,EAX
/* 0525931c */  SUB EDX,ECX
/* 0525931e */  MOVSXD RCX,EDX
/* 05259321 */  IMUL RDI,RCX,-0x2aaaaaab
/* 05259328 */  MOV RCX,RDI
/* 0525932b */  SHR RCX,0x3f
/* 0525932f */  SAR RDI,0x21
/* 05259333 */  ADD EDI,ECX
/* 05259335 */  ADD EDI,EAX
/* 05259337 */  MOV EAX,dword ptr [RSP + 0x10]
/* 0525933b */  MOV R9D,EAX
/* 0525933e */  SAR R9D,0x1f
/* 05259342 */  MOV ECX,R9D
/* 05259345 */  SUB ECX,EAX
/* 05259347 */  LEA EAX,[RCX + 0xf]
/* 0525934a */  TEST ECX,ECX
/* 0525934c */  CMOVNS EAX,ECX
/* 0525934f */  SAR EAX,0x4
/* 05259352 */  SUB R9D,EAX
/* 05259355 */  MOV EDX,dword ptr [RBX + 0x28]
/* 05259358 */  MOV ECX,dword ptr [RBX + 0x2c]
/* 0525935b */  SUB ESI,EDX
/* 0525935d */  SUB EDI,ECX
/* 0525935f */  MOV R15D,dword ptr [RBX + 0x30]
/* 05259363 */  SUB R9D,R15D
/* 05259366 */  MOV R8D,dword ptr [RBX + 0x38]
/* 0525936a */  IMUL ESI,R8D
/* 0525936e */  ADD ESI,EDI
/* 05259370 */  MOV EDI,dword ptr [RBX + 0x3c]
/* 05259373 */  IMUL ESI,EDI
/* 05259376 */  ADD ESI,R9D
/* 05259379 */  MOVSXD R9,ESI
/* 0525937c */  MOV RSI,qword ptr [RBX + 0x40]
/* 05259380 */  LEA R9,[R9 + R9*0x4]
/* 05259384 */  LEA R14,[RSI + R9*0x4]
/* 05259388 */  MOV EAX,dword ptr [RSI + R9*0x4 + 0xc]
/* 0525938d */  CMP EAX,0x7fffffff
/* 05259392 */  MOVSS dword ptr [RSP + 0x70],XMM1
/* 05259398 */  MOV qword ptr [RSP + 0x30],RBP
/* 0525939d */  JNZ 0x052593ef
/* 0525939f */  LEA RDI,[RSP + 0x8c]
/* 052593a7 */  LEA RDX,[RSP + 0x8]
/* 052593ac */  MOV RSI,RBX
/* 052593af */  CALL 0x05259950
/* 052593b4 */  MOVUPS XMM0,xmmword ptr [RSP + 0x8c]
/* 052593bc */  MOVUPS xmmword ptr [R14],XMM0
/* 052593c0 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 052593c8 */  MOV byte ptr [RSP],AL
/* 052593cb */  MOV byte ptr [R14 + 0x10],AL
/* 052593cf */  MOV EAX,dword ptr [R14 + 0xc]
/* 052593d3 */  MOV qword ptr [RSP + 0x50],RAX
/* 052593d8 */  MOV EDX,dword ptr [RBX + 0x28]
/* 052593db */  MOV ECX,dword ptr [RBX + 0x2c]
/* 052593de */  MOV R15D,dword ptr [RBX + 0x30]
/* 052593e2 */  MOV R8D,dword ptr [RBX + 0x38]
/* 052593e6 */  MOV EDI,dword ptr [RBX + 0x3c]
/* 052593e9 */  MOV RSI,qword ptr [RBX + 0x40]
/* 052593ed */  JMP 0x052593fc
/* 052593ef */  MOV qword ptr [RSP + 0x50],RAX
/* 052593f4 */  MOVZX EAX,byte ptr [R14 + 0x10]
/* 052593f9 */  MOV byte ptr [RSP],AL
/* 052593fc */  MOV R10D,dword ptr [RSP + 0x20]
/* 05259401 */  MOV R14D,dword ptr [RSP + 0x24]
/* 05259406 */  MOV R9D,R10D
/* 05259409 */  SAR R9D,0x1f
/* 0525940d */  MOV R13D,R9D
/* 05259410 */  SUB R13D,R10D
/* 05259413 */  LEA R11D,[R13 + 0xf]
/* 05259417 */  TEST R13D,R13D
/* 0525941a */  CMOVNS R11D,R13D
/* 0525941e */  SAR R11D,0x4
/* 05259422 */  MOV R10D,R14D
/* 05259425 */  SAR R10D,0x1f
/* 05259429 */  MOV R13D,R10D
/* 0525942c */  SUB R13D,R14D
/* 0525942f */  MOVSXD R14,R13D
/* 05259432 */  IMUL R14,R14,-0x2aaaaaab
/* 05259439 */  MOV R13,R14
/* 0525943c */  SHR R13,0x3f
/* 05259440 */  SAR R14,0x21
/* 05259444 */  ADD R14D,R13D
/* 05259447 */  MOV EBP,dword ptr [RSP + 0x28]
/* 0525944b */  MOV R13D,EBP
/* 0525944e */  SAR R13D,0x1f
/* 05259452 */  MOV EAX,R13D
/* 05259455 */  SUB EAX,EBP
/* 05259457 */  LEA EBP,[RAX + 0xf]
/* 0525945a */  TEST EAX,EAX
/* 0525945c */  CMOVNS EBP,EAX
/* 0525945f */  SAR EBP,0x4
/* 05259462 */  SUB R9D,EDX
/* 05259465 */  SUB R9D,R11D
/* 05259468 */  IMUL R9D,R8D
/* 0525946c */  SUB R10D,ECX
/* 0525946f */  ADD R10D,R14D
/* 05259472 */  ADD R10D,R9D
/* 05259475 */  IMUL R10D,EDI
/* 05259479 */  SUB R13D,R15D
/* 0525947c */  SUB R13D,EBP
/* 0525947f */  ADD R13D,R10D
/* 05259482 */  MOVSXD RAX,R13D
/* 05259485 */  LEA RAX,[RAX + RAX*0x4]
/* 05259489 */  LEA R14,[RSI + RAX*0x4]
/* 0525948d */  MOV R13D,dword ptr [RSI + RAX*0x4 + 0xc]
/* 05259492 */  CMP R13D,0x7fffffff
/* 05259499 */  JNZ 0x052594cf
/* 0525949b */  LEA RDI,[RSP + 0x8c]
/* 052594a3 */  LEA RDX,[RSP + 0x20]
/* 052594a8 */  MOV RSI,RBX
/* 052594ab */  CALL 0x05259950
/* 052594b0 */  MOVUPS XMM0,xmmword ptr [RSP + 0x8c]
/* 052594b8 */  MOVUPS xmmword ptr [R14],XMM0
/* 052594bc */  MOVZX R10D,byte ptr [RSP + 0x9c]
/* 052594c5 */  MOV byte ptr [R14 + 0x10],R10B
/* 052594c9 */  MOV R13D,dword ptr [R14 + 0xc]
/* 052594cd */  JMP 0x052594d4
/* 052594cf */  MOVZX R10D,byte ptr [R14 + 0x10]
/* 052594d4 */  MOV R15,qword ptr [RSP + 0x30]
/* 052594d9 */  MOV R8,qword ptr [RSP + 0x60]
/* 052594de */  MOVZX R9D,byte ptr [RSP + 0x18]
/* 052594e4 */  CVTSI2SS XMM8,R15
/* 052594e9 */  CVTSI2SS XMM9,R12
/* 052594ee */  MOVSS XMM10,dword ptr [0x01198cf4]
/* 052594f7 */  MOVSS XMM6,dword ptr [0x011983f0]
/* 052594ff */  MOV R14,qword ptr [RSP + 0xa0]
/* 05259507 */  MOV RCX,qword ptr [R14]
/* 0525950a */  MOV EAX,dword ptr [R14 + 0x8]
/* 0525950e */  MOV RDX,RCX
/* 05259511 */  SHR RDX,0x20
/* 05259515 */  MOVSS XMM0,dword ptr [0x01198c14]
/* 0525951d */  CMP R8D,EDX
/* 05259520 */  MOV R15,qword ptr [RSP + 0x50]
/* 05259525 */  MOVZX EBP,byte ptr [RSP]
/* 05259529 */  JLE 0x0525953d
/* 0525952b */  CMP R15D,EDX
/* 0525952e */  JLE 0x0525953d
/* 05259530 */  CMP R9B,BPL
/* 05259533 */  JZ 0x0525953d
/* 05259535 */  MOVAPS XMM7,XMM6
/* 05259538 */  JMP 0x0525965f
/* 0525953d */  XORPS XMM7,XMM7
/* 05259540 */  MOV ESI,R8D
/* 05259543 */  SUB ESI,R15D
/* 05259546 */  JZ 0x0525965f
/* 0525954c */  LEA EDI,[R15 + R8*0x1]
/* 05259550 */  CVTSI2SS XMM3,EDI
/* 05259554 */  MOV EDI,R15D
/* 05259557 */  SUB EDI,R8D
/* 0525955a */  CMOVL EDI,ESI
/* 0525955d */  MOVSS XMM4,dword ptr [0x011986e0]
/* 05259565 */  MULSS XMM3,XMM4
/* 05259569 */  CVTSI2SS XMM1,EDX
/* 0525956d */  MOVAPS XMM5,XMM1
/* 05259570 */  ADDSS XMM5,XMM4
/* 05259574 */  CVTSI2SS XMM2,EDI
/* 05259578 */  SUBSS XMM5,XMM3
/* 0525957c */  MULSS XMM2,XMM4
/* 05259580 */  MOVAPS XMM3,xmmword ptr [0x014e7ba0]
/* 05259587 */  ANDPS XMM3,XMM5
/* 0525958a */  SUBSS XMM2,XMM3
/* 0525958e */  XORPS XMM3,XMM3
/* 05259591 */  UCOMISS XMM5,XMM3
/* 05259594 */  JBE 0x052595b4
/* 05259596 */  MOVAPS XMM7,XMM2
/* 05259599 */  XOR ESI,ESI
/* 0525959b */  UCOMISS XMM2,XMM3
/* 0525959e */  SETA SIL
/* 052595a2 */  ADDSS XMM7,XMM3
/* 052595a6 */  LEA RDI,[0x14f0310]
/* 052595ad */  DIVSS XMM7,dword ptr [RDI + RSI*0x4]
/* 052595b2 */  JMP 0x052595d4
/* 052595b4 */  ADDSS XMM2,dword ptr [0x01198af0]
/* 052595bc */  XOR ESI,ESI
/* 052595be */  UCOMISS XMM2,XMM3
/* 052595c1 */  SETA SIL
/* 052595c5 */  LEA RDI,[0x14f03a8]
/* 052595cc */  DIVSS XMM2,dword ptr [RDI + RSI*0x4]
/* 052595d1 */  MOVAPS XMM7,XMM2
/* 052595d4 */  MOVAPS XMM2,xmmword ptr [0x014e7ba0]
/* 052595db */  ANDPS XMM2,XMM7
/* 052595de */  UCOMISS XMM2,dword ptr [0x01198724]
/* 052595e5 */  JA 0x0525965f
/* 052595e7 */  XORPS XMM0,XMM0
/* 052595ea */  CVTSI2SS XMM0,ECX
/* 052595ee */  MULSS XMM1,dword ptr [0x011986e0]
/* 052595f6 */  MOV RDI,qword ptr [RBX]
/* 052595f9 */  XORPS XMM2,XMM2
/* 052595fc */  CVTSI2SS XMM2,EAX
/* 05259600 */  MOVAPS xmmword ptr [RSP + 0x30],XMM7
/* 05259605 */  MOV R12D,R10D
/* 05259608 */  MOVSS dword ptr [RSP + 0x48],XMM8
/* 0525960f */  MOVSS dword ptr [RSP + 0x4],XMM9
/* 05259616 */  CALL 0x0d3414e0
/* 0525961b */  MOVSS XMM10,dword ptr [0x01198cf4]
/* 05259624 */  MOVSS XMM9,dword ptr [RSP + 0x4]
/* 0525962b */  MOVSS XMM8,dword ptr [RSP + 0x48]
/* 05259632 */  MOV R10D,R12D
/* 05259635 */  MOVAPS XMM7,xmmword ptr [RSP + 0x30]
/* 0525963a */  MOVSS XMM6,dword ptr [0x011983f0]
/* 05259642 */  MOVZX R9D,byte ptr [RSP + 0x18]
/* 05259648 */  MOV R8,qword ptr [RSP + 0x60]
/* 0525964d */  ADDSS XMM7,XMM0
/* 05259651 */  MOV RCX,qword ptr [R14]
/* 05259654 */  MOV EAX,dword ptr [R14 + 0x8]
/* 05259658 */  MOV RDX,RCX
/* 0525965b */  SHR RDX,0x20
/* 0525965f */  MULSS XMM8,XMM10
/* 05259664 */  MULSS XMM9,XMM10
/* 05259669 */  CMP R8D,EDX
/* 0525966c */  JLE 0x05259681
/* 0525966e */  CMP R13D,EDX
/* 05259671 */  JLE 0x05259681
/* 05259673 */  CMP R9B,R10B
/* 05259676 */  JZ 0x05259681
/* 05259678 */  MOVAPS XMM10,XMM6
/* 0525967c */  JMP 0x052597c1
/* 05259681 */  XORPS XMM10,XMM10
/* 05259685 */  MOV ESI,R8D
/* 05259688 */  SUB ESI,R13D
/* 0525968b */  JZ 0x052597c1
/* 05259691 */  MOV EDI,R13D
/* 05259694 */  SUB EDI,R8D
/* 05259697 */  CMOVL EDI,ESI
/* 0525969a */  ADD R8D,R13D
/* 0525969d */  XORPS XMM3,XMM3
/* 052596a0 */  CVTSI2SS XMM3,R8D
/* 052596a5 */  MOVSS XMM4,dword ptr [0x011986e0]
/* 052596ad */  MULSS XMM3,XMM4
/* 052596b1 */  XORPS XMM1,XMM1
/* 052596b4 */  CVTSI2SS XMM1,EDX
/* 052596b8 */  MOVAPS XMM5,XMM1
/* 052596bb */  ADDSS XMM5,XMM4
/* 052596bf */  XORPS XMM2,XMM2
/* 052596c2 */  CVTSI2SS XMM2,EDI
/* 052596c6 */  SUBSS XMM5,XMM3
/* 052596ca */  MULSS XMM2,XMM4
/* 052596ce */  MOVAPS XMM3,xmmword ptr [0x014e7ba0]
/* 052596d5 */  ANDPS XMM3,XMM5
/* 052596d8 */  SUBSS XMM2,XMM3
/* 052596dc */  XORPS XMM3,XMM3
/* 052596df */  UCOMISS XMM5,XMM3
/* 052596e2 */  JBE 0x05259705
/* 052596e4 */  MOVAPS XMM10,XMM2
/* 052596e8 */  XOR ESI,ESI
/* 052596ea */  UCOMISS XMM2,XMM3
/* 052596ed */  SETA SIL
/* 052596f1 */  ADDSS XMM10,XMM3
/* 052596f6 */  LEA RDI,[0x14f0310]
/* 052596fd */  DIVSS XMM10,dword ptr [RDI + RSI*0x4]
/* 05259703 */  JMP 0x05259726
/* 05259705 */  ADDSS XMM2,dword ptr [0x01198af0]
/* 0525970d */  XOR ESI,ESI
/* 0525970f */  UCOMISS XMM2,XMM3
/* 05259712 */  SETA SIL
/* 05259716 */  LEA RDI,[0x14f03a8]
/* 0525971d */  DIVSS XMM2,dword ptr [RDI + RSI*0x4]
/* 05259722 */  MOVAPS XMM10,XMM2
/* 05259726 */  MOVAPS XMM2,xmmword ptr [0x014e7ba0]
/* 0525972d */  ANDPS XMM2,XMM10
/* 05259731 */  UCOMISS XMM2,dword ptr [0x01198724]
/* 05259738 */  JA 0x052597c1
/* 0525973e */  UCOMISS XMM0,dword ptr [0x01198c14]
/* 05259745 */  JNZ 0x052597bc
/* 05259747 */  JP 0x052597bc
/* 05259749 */  XORPS XMM0,XMM0
/* 0525974c */  CVTSI2SS XMM0,ECX
/* 05259750 */  MULSS XMM1,dword ptr [0x011986e0]
/* 05259758 */  MOV RDI,qword ptr [RBX]
/* 0525975b */  XORPS XMM2,XMM2
/* 0525975e */  CVTSI2SS XMM2,EAX
/* 05259762 */  MOVAPS xmmword ptr [RSP + 0x30],XMM7
/* 05259767 */  MOV R12D,R10D
/* 0525976a */  MOVSS dword ptr [RSP + 0x48],XMM8
/* 05259771 */  MOVSS dword ptr [RSP + 0x4],XMM9
/* 05259778 */  MOVAPS xmmword ptr [RSP + 0x60],XMM10
/* 0525977e */  CALL 0x0d3414e0
/* 05259783 */  MOVAPS XMM10,xmmword ptr [RSP + 0x60]
/* 05259789 */  MOVSS XMM9,dword ptr [RSP + 0x4]
/* 05259790 */  MOVSS XMM8,dword ptr [RSP + 0x48]
/* 05259797 */  MOV R10D,R12D
/* 0525979a */  MOVAPS XMM7,xmmword ptr [RSP + 0x30]
/* 0525979f */  MOVSS XMM6,dword ptr [0x011983f0]
/* 052597a7 */  ADDSS XMM10,XMM0
/* 052597ac */  MOV RCX,qword ptr [R14]
/* 052597af */  MOV EAX,dword ptr [R14 + 0x8]
/* 052597b3 */  MOV RDX,RCX
/* 052597b6 */  SHR RDX,0x20
/* 052597ba */  JMP 0x052597c1
/* 052597bc */  ADDSS XMM10,XMM0
/* 052597c1 */  MOVAPS XMM11,XMM6
/* 052597c5 */  SUBSS XMM11,XMM8
/* 052597ca */  MOVAPS XMM8,XMM6
/* 052597ce */  SUBSS XMM8,XMM9
/* 052597d3 */  CMP R15D,EDX
/* 052597d6 */  JLE 0x052597e6
/* 052597d8 */  CMP R13D,EDX
/* 052597db */  JLE 0x052597e6
/* 052597dd */  CMP BPL,R10B
/* 052597e0 */  JNZ 0x052598fe
/* 052597e6 */  XORPS XMM6,XMM6
/* 052597e9 */  MOV ESI,R15D
/* 052597ec */  SUB ESI,R13D
/* 052597ef */  JZ 0x052598fe
/* 052597f5 */  MOV EDI,R13D
/* 052597f8 */  SUB EDI,R15D
/* 052597fb */  CMOVL EDI,ESI
/* 052597fe */  ADD R13D,R15D
/* 05259801 */  XORPS XMM3,XMM3
/* 05259804 */  CVTSI2SS XMM3,R13D
/* 05259809 */  MOVSS XMM4,dword ptr [0x011986e0]
/* 05259811 */  MULSS XMM3,XMM4
/* 05259815 */  XORPS XMM1,XMM1
/* 05259818 */  CVTSI2SS XMM1,EDX
/* 0525981c */  MOVAPS XMM5,XMM1
/* 0525981f */  ADDSS XMM5,XMM4
/* 05259823 */  XORPS XMM2,XMM2
/* 05259826 */  CVTSI2SS XMM2,EDI
/* 0525982a */  SUBSS XMM5,XMM3
/* 0525982e */  MULSS XMM2,XMM4
/* 05259832 */  MOVAPS XMM3,xmmword ptr [0x014e7ba0]
/* 05259839 */  ANDPS XMM3,XMM5
/* 0525983c */  SUBSS XMM2,XMM3
/* 05259840 */  XORPS XMM3,XMM3
/* 05259843 */  UCOMISS XMM5,XMM3
/* 05259846 */  JBE 0x05259865
/* 05259848 */  MOVAPS XMM6,XMM2
/* 0525984b */  XOR EDX,EDX
/* 0525984d */  UCOMISS XMM2,XMM3
/* 05259850 */  SETA DL
/* 05259853 */  ADDSS XMM6,XMM3
/* 05259857 */  LEA RSI,[0x14f0310]
/* 0525985e */  DIVSS XMM6,dword ptr [RSI + RDX*0x4]
/* 05259863 */  JMP 0x05259884
/* 05259865 */  ADDSS XMM2,dword ptr [0x01198af0]
/* 0525986d */  XOR EDX,EDX
/* 0525986f */  UCOMISS XMM2,XMM3
/* 05259872 */  SETA DL
/* 05259875 */  LEA RSI,[0x14f03a8]
/* 0525987c */  DIVSS XMM2,dword ptr [RSI + RDX*0x4]
/* 05259881 */  MOVAPS XMM6,XMM2
/* 05259884 */  MOVAPS XMM2,xmmword ptr [0x014e7ba0]
/* 0525988b */  ANDPS XMM2,XMM6
/* 0525988e */  UCOMISS XMM2,dword ptr [0x01198724]
/* 05259895 */  JA 0x052598fe
/* 05259897 */  UCOMISS XMM0,dword ptr [0x01198c14]
/* 0525989e */  JNZ 0x052598fa
/* 052598a0 */  JP 0x052598fa
/* 052598a2 */  XORPS XMM0,XMM0
/* 052598a5 */  CVTSI2SS XMM0,ECX
/* 052598a9 */  MULSS XMM1,dword ptr [0x011986e0]
/* 052598b1 */  MOV RDI,qword ptr [RBX]
/* 052598b4 */  XORPS XMM2,XMM2
/* 052598b7 */  CVTSI2SS XMM2,EAX
/* 052598bb */  MOVAPS xmmword ptr [RSP + 0x50],XMM6
/* 052598c0 */  MOVAPS xmmword ptr [RSP + 0x30],XMM7
/* 052598c5 */  MOVAPS xmmword ptr [RSP + 0x60],XMM10
/* 052598cb */  MOVSS dword ptr [RSP + 0x18],XMM8
/* 052598d2 */  MOVSS dword ptr [RSP],XMM11
/* 052598d8 */  CALL 0x0d3414e0
/* 052598dd */  MOVSS XMM11,dword ptr [RSP]
/* 052598e3 */  MOVSS XMM8,dword ptr [RSP + 0x18]
/* 052598ea */  MOVAPS XMM10,xmmword ptr [RSP + 0x60]
/* 052598f0 */  MOVAPS XMM7,xmmword ptr [RSP + 0x30]
/* 052598f5 */  MOVAPS XMM6,xmmword ptr [RSP + 0x50]
/* 052598fa */  ADDSS XMM6,XMM0
/* 052598fe */  XORPS XMM0,XMM0
/* 05259901 */  XORPS XMM1,XMM1
/* 05259904 */  MAXSS XMM1,dword ptr [RSP + 0x70]
/* 0525990a */  XORPS XMM2,XMM2
/* 0525990d */  MAXSS XMM2,XMM11
/* 05259912 */  MULSS XMM2,XMM10
/* 05259917 */  XORPS XMM3,XMM3
/* 0525991a */  MAXSS XMM3,XMM8
/* 0525991f */  MULSS XMM3,XMM6
/* 05259923 */  MAXSS XMM2,XMM3
/* 05259927 */  MAXSS XMM7,XMM2
/* 0525992b */  ADDSS XMM1,XMM1
/* 0525992f */  MULSS XMM1,XMM7
/* 05259933 */  MAXSS XMM0,XMM1
/* 05259937 */  MOVSS dword ptr [RBX + 0x20],XMM0
/* 0525993c */  ADD RSP,0xc8
/* 05259943 */  POP RBX
/* 05259944 */  POP R12
/* 05259946 */  POP R13
/* 05259948 */  POP R14
/* 0525994a */  POP R15
/* 0525994c */  POP RBP
/* 0525994d */  RET
