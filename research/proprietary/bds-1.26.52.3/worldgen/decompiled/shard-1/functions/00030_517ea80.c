/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x527ea80 (ELF vaddr 0x517ea80)
 * Label: OverworldGenerator2d::vslot64
 * Body:  [[0527ea80, 0527f01e] [0527f020, 0527f1e7] [0527f1f0, 0527f27b] [0527f280, 0527f2f6] [0527f300, 0527f62c]]
 * Ghidra: wg_OverworldGenerator2d__vslot64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_OverworldGenerator2d__vslot64(long param_1,long *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  short sVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  short sVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  char in_stack_00000008;
  long *in_stack_00000010;
  uint uStack_21f0;
  int iStack_21ec;
  long lStack_21e8;
  long lStack_21e0;
  long lStack_21d8;
  long lStack_21d0;
  long lStack_21c8;
  long lStack_21c0;
  ulong uStack_21b0;
  ulong uStack_21a8;
  ulong uStack_21a0;
  uint uStack_2194;
  int iStack_2190;
  uint uStack_218c;
  undefined8 uStack_2188;
  undefined8 uStack_2180;
  long lStack_2178;
  long lStack_2170;
  long lStack_2168;
  long lStack_2160;
  undefined1 auStack_2138 [16];
  long lStack_2120;
  long lStack_2118;
  long lStack_2110;
  long lStack_2108;
  long lStack_2100;
  long lStack_20f8;
  long lStack_20f0;
  long lStack_20e8;
  long lStack_20e0;
  ulong uStack_20d8;
  ulong uStack_20d0;
  long lStack_20c8;
  long lStack_20c0;
  long lStack_20b8;
  long lStack_20b0;
  long lStack_20a8;
  long lStack_20a0;
  undefined8 uStack_2098;
  float *pfStack_2090;
  undefined8 uStack_2088;
  undefined8 uStack_2080;
  undefined8 uStack_2078;
  undefined8 uStack_2070;
  undefined8 uStack_2068;
  undefined4 uStack_2060;
  undefined4 uStack_205c;
  undefined4 uStack_2058;
  undefined4 uStack_2054;
  float fStack_2050;
  undefined4 uStack_204c;
  undefined4 uStack_2048;
  long lStack_2038;
  long lStack_2030;
  undefined8 uStack_2028;
  long lStack_2020;
  long lStack_2018;
  undefined8 uStack_2010;
  long lStack_2008;
  long lStack_2000;
  undefined8 uStack_1ff8;
  float afStack_1034 [1025];
  
  puVar23 = *(undefined8 **)(param_1 + 0x28);
  uStack_2194 = (uint)*(short *)(puVar23 + 0x15);
  iStack_2190 = (int)*(short *)((long)puVar23 + 0xac);
  if ((in_stack_00000010 != (long *)0x0) && (0 < in_stack_00000010[1] - *in_stack_00000010)) {
    memset(*in_stack_00000010,0);
  }
  uStack_2058 = 0;
  uStack_2054 = 0;
  fStack_2050 = 0.0;
  uStack_204c = 0;
  uStack_2068 = 0;
  uStack_2060 = 0;
  uStack_205c = 0;
  uStack_2078 = 0;
  uStack_2070 = 0;
  uStack_2088 = 0;
  uStack_2080 = 0;
  uStack_2098 = 0;
  pfStack_2090 = (float *)0x0;
  uStack_2048 = 0;
  memset(afStack_1034,0,0x1004);
  func_0x0527f6c0(&lStack_2038,param_1,param_3);
  memcpy(afStack_1034,&lStack_2038,0x1004);
  uStack_2088 = 0;
  uStack_2080 = 0;
  uStack_2078 = 0;
  uStack_2070 = 0;
  uStack_2068 = 0;
  uStack_2060 = 0;
  uStack_205c = 0;
  uStack_2058 = 0;
  uStack_2054 = 0;
  fStack_2050 = 0.0;
  uStack_2098 = 0x401;
  uStack_204c = (undefined4)_DAT_014e9c40;
  uStack_2048 = (undefined4)((ulong)_DAT_014e9c40 >> 0x20);
  pfStack_2090 = afStack_1034;
  plVar13 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
  if (plVar13 == (long *)0x0) {
    func_0x0eec74c0(8,0);
  }
  *plVar13 = (long)&uStack_2098;
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  *plVar14 = (long)&uStack_2098;
  func_0x0412a280(plVar13,8);
  lStack_2008 = 0;
  lStack_2000 = 0;
  lStack_2018 = 0;
  uStack_2010 = 0;
  uStack_2028 = 0;
  lStack_2020 = 0;
  lStack_2038 = 0;
  lStack_2030 = 0;
  uStack_1ff8 = 0;
  lStack_21c8 = 0;
  lStack_21c0 = 0;
  lStack_21d8 = 0;
  lStack_21d0 = 0;
  lStack_21e8 = 0;
  lStack_21e0 = 0;
  if (in_stack_00000008 != '\0') {
    func_0x0ca729d0(param_1);
    lVar16 = *(long *)(param_1 + 0x78);
    func_0x0d2ee510(&uStack_2188,puVar23 + 0x44,param_3);
    puVar23 = &uStack_2188;
    func_0x0d2ecfa0(&lStack_2038,puVar23);
    func_0x0d2ecea0(puVar23);
    func_0x0d2efee0(&uStack_2188,lVar16 + 0x48,*(undefined8 *)param_3);
    if (lStack_21e8 != 0) {
      func_0x0412a280(lStack_21e8,lStack_21d8 - lStack_21e8);
    }
    lStack_21e8 = uStack_2188;
    lStack_21e0 = uStack_2180;
    lStack_21d8 = lStack_2178;
    uStack_2188 = 0;
    uStack_2180 = 0;
    lStack_2178 = 0;
    if (lStack_21d0 != 0) {
      func_0x0412a280(lStack_21d0,lStack_21c0 - lStack_21d0);
    }
    lStack_21d0 = lStack_2170;
    lStack_21c8 = lStack_2168;
    lStack_21c0 = lStack_2160;
    lStack_2170 = 0;
    lStack_2168 = 0;
    lStack_2160 = 0;
    if (uStack_2188 != 0) {
      uStack_2180 = uStack_2188;
      func_0x0412a280(uStack_2188,lStack_2178 - uStack_2188);
    }
    bVar8 = true;
    if (lStack_2018 != lStack_2020) goto LAB_0527edd1;
  }
  bVar8 = true;
  if ((lStack_2000 == lStack_2008) && (lStack_2030 == lStack_2038)) {
    bVar8 = lStack_21c8 != lStack_21d0 || lStack_21e8 != lStack_21e0;
  }
LAB_0527edd1:
  uStack_218c = *(int *)((long)param_2 + 0x14) * (int)param_2[2] * (int)param_2[3];
  uStack_2188 = 0;
  uStack_2180 = (ulong)uStack_2180._4_4_ << 0x20;
  lVar16 = *(long *)(param_2[4] + 0x68);
  if (*(long *)(lVar16 + 200) == _DAT_0f6eaec0) {
    puVar23 = (undefined8 *)(lVar16 + 200);
    plVar13 = (long *)&DAT_0f6eaec0;
    bVar9 = true;
    if ((*(undefined **)(lVar16 + 0xe8) == &DAT_0f6eaec0) && (_DAT_0f6eaee0 == puVar23))
    goto LAB_0527eec7;
    bVar3 = *(byte *)(lVar16 + 0xd0);
    if ((bVar3 & 1) == 0) {
      uVar18 = (ulong)(bVar3 >> 1);
    }
    else {
      uVar18 = *(ulong *)(lVar16 + 0xd8);
    }
    uVar1 = _DAT_0f6eaed0;
    if ((DAT_0f6eaec8 & 1) == 0) {
      uVar1 = (ulong)(DAT_0f6eaec8 >> 1);
    }
    if (uVar18 == uVar1) {
      uVar18 = (ulong)DAT_0f6eaec8;
      if ((bVar3 & 1) == 0) goto LAB_0527f5d4;
      lVar22 = *(long *)(lVar16 + 0xe0);
      if ((DAT_0f6eaec8 & 1) != 0) goto LAB_0527f5e4;
      goto LAB_0527eea0;
    }
  }
LAB_0527eeb4:
  *(undefined8 *)(lVar16 + 0xe8) = 0;
  bVar9 = false;
LAB_0527eec7:
  do {
    uStack_21a8 = (ulong)*param_3;
    uStack_21b0 = (ulong)param_3[1];
    lStack_20a0 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f71bd88,1);
    lStack_20a8 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
    uStack_21a8 = (ulong)(uint)((int)uStack_21a8 << 4);
    uStack_21b0 = (ulong)(uint)((int)uStack_21b0 << 4);
    iStack_21ec = 0;
    lVar22 = 0;
LAB_0527ef40:
    lStack_20c8 = lVar22 * 4;
    lStack_2110 = lVar22 * 5;
    lStack_2118 = lVar22 * 5 + 5;
    uStack_21f0 = 0;
    lVar21 = 0;
    lStack_2120 = lVar22;
LAB_0527efaa:
    lStack_20e8 = (lVar21 + lStack_2110) * 0x29;
    lStack_20f0 = (lVar21 + lStack_2110) * 0x29 + 0x29;
    lStack_20f8 = (lStack_2118 + lVar21) * 0x29;
    lStack_2100 = (lStack_2118 + lVar21) * 0x29 + 0x29;
    uStack_20d8 = (ulong)(uint)((int)lVar21 * 4);
    iVar11 = 0;
    uStack_21a0 = (ulong)uStack_2194;
    lVar22 = 0;
    lStack_2108 = lVar21;
    while( true ) {
      uVar1 = lVar22 + lStack_20e8;
      uVar18 = lStack_20f0 + lVar22;
      uVar2 = lVar22 + lStack_20f8;
      uVar15 = lStack_2100 + lVar22;
      lStack_20e0 = lVar22;
      if (((((!bVar9) || (afStack_1034[uVar1] != _DAT_011988ac)) ||
           (afStack_1034[uVar18] != _DAT_011988ac)) ||
          ((afStack_1034[uVar2] != _DAT_011988ac || (afStack_1034[uVar15] != _DAT_011988ac)))) ||
         ((afStack_1034[uVar1 + 1] != _DAT_011988ac ||
          ((afStack_1034[uVar18 + 1] != _DAT_011988ac || (afStack_1034[uVar2 + 1] != _DAT_011988ac))
          )))) break;
      if ((afStack_1034[uVar15 + 1] != _DAT_011988ac) ||
         (NAN(afStack_1034[uVar15 + 1]) || NAN(_DAT_011988ac))) break;
LAB_0527f020:
      lVar22 = lStack_20e0 + 1;
      uStack_21a0 = (ulong)((int)uStack_21a0 + 8);
      iVar11 = iVar11 + 8;
      if (lVar22 == 0x10) goto LAB_0527ef80;
    }
    puVar5 = (ulong *)*plVar14;
    uVar6 = *puVar5;
    if (uVar1 < uVar6) {
      uVar7 = puVar5[1];
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(uVar7 + uVar1 * 4);
      if (uVar2 < uVar6) {
        *(undefined4 *)((long)puVar5 + 0x14) = *(undefined4 *)(uVar7 + uVar2 * 4);
        *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(uVar7 + uVar18 * 4);
        if (uVar15 < uVar6) {
          *(undefined4 *)((long)puVar5 + 0x1c) = *(undefined4 *)(uVar7 + uVar15 * 4);
          *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(uVar7 + 4 + uVar1 * 4);
          *(undefined4 *)((long)puVar5 + 0x24) = *(undefined4 *)(uVar7 + 4 + uVar2 * 4);
          *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(uVar7 + 4 + uVar18 * 4);
          if (uVar15 + 1 < uVar6) {
            *(undefined4 *)((long)puVar5 + 0x2c) = *(undefined4 *)(uVar7 + 4 + uVar15 * 4);
            uVar18 = 0;
            puVar23 = (undefined8 *)(ulong)uStack_21f0;
            do {
              lVar16 = *plVar14;
              fVar24 = (float)(int)uVar18 * *(float *)(lVar16 + 0x4c);
              fVar28 = (float)*(undefined8 *)(lVar16 + 0x10);
              fVar26 = (float)((ulong)*(undefined8 *)(lVar16 + 0x10) >> 0x20);
              fVar27 = (float)*(undefined8 *)(lVar16 + 0x20);
              fVar29 = (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
              *(float *)(lVar16 + 0x30) =
                   fVar28 + fVar24 * ((float)*(undefined8 *)(lVar16 + 0x18) - fVar28);
              *(float *)(lVar16 + 0x34) =
                   fVar26 + fVar24 * ((float)((ulong)*(undefined8 *)(lVar16 + 0x18) >> 0x20) -
                                     fVar26);
              *(float *)(lVar16 + 0x38) =
                   fVar27 + fVar24 * ((float)*(undefined8 *)(lVar16 + 0x28) - fVar27);
              *(float *)(lVar16 + 0x3c) =
                   fVar29 + fVar24 * ((float)((ulong)*(undefined8 *)(lVar16 + 0x28) >> 0x20) -
                                     fVar29);
              iVar12 = (int)uStack_20d8 + (int)uVar18;
              uStack_2180 = CONCAT44(uStack_2180._4_4_,(int)uStack_21b0 + iVar12);
              lStack_20b8 = (long)(iVar12 * (int)param_2[2]);
              lVar16 = 0;
              iVar12 = iStack_21ec;
              uStack_20d0 = uVar18;
              do {
                lVar22 = *plVar14;
                fVar24 = (float)((uint)lVar16 & 0xff) * *(float *)(lVar22 + 0x4c);
                *(ulong *)(lVar22 + 0x40) =
                     CONCAT44(fVar24 * (*(float *)(lVar22 + 0x3c) - *(float *)(lVar22 + 0x38)) +
                              *(float *)(lVar22 + 0x38),
                              fVar24 * (*(float *)(lVar22 + 0x34) - *(float *)(lVar22 + 0x30)) +
                              *(float *)(lVar22 + 0x30));
                lStack_20b0 = lVar16 + lStack_20c8;
                uStack_2188 = CONCAT44(uStack_2188._4_4_,(int)uStack_21a8 + (int)lStack_20b0);
                iVar19 = 0;
                lStack_20c0 = lVar16;
                do {
                  lVar16 = *plVar14;
                  *(float *)(lVar16 + 0x48) =
                       (*(float *)(lVar16 + 0x44) - *(float *)(lVar16 + 0x40)) *
                       (float)(int)(short)iVar19 * *(float *)(lVar16 + 0x50) +
                       *(float *)(lVar16 + 0x40);
                  fVar28 = fStack_2050 * _DAT_01198cf8;
                  fVar24 = fVar28;
                  if (fVar28 <= _DAT_011985d4) {
                    fVar24 = _DAT_011985d4;
                  }
                  fVar24 = (float)(~-(uint)(_DAT_011983f0 < fVar28) & (uint)fVar24 |
                                  -(uint)(_DAT_011983f0 < fVar28) & (uint)_DAT_011983f0);
                  uVar20 = ((int)param_2[3] * iVar12 + (int)puVar23) *
                           *(int *)((long)param_2 + 0x14) + iVar11 + iVar19;
                  param_3 = (uint *)(ulong)uVar20;
                  if (uVar20 < uStack_218c) {
                    fVar24 = fVar24 * _DAT_011986e0 + (fVar24 * fVar24 * fVar24) / _DAT_01198350;
                    uStack_2188 = CONCAT44((int)uStack_21a0 + iVar19,(undefined4)uStack_2188);
                    if (bVar8) {
                      auStack_2138 = ZEXT416((uint)fVar24);
                      dVar25 = (double)func_0x0d2f06a0(&lStack_21e8,uStack_2188,
                                                       uStack_2180 & 0xffffffff);
                      auStack_2138._0_4_ = (float)(dVar25 + (double)(float)auStack_2138._0_4_);
                      fVar24 = (float)func_0x0d2ee730(&lStack_2038,&uStack_2188);
                      fVar24 = fVar24 + (float)auStack_2138._0_4_;
                    }
                    lVar16 = lStack_20a0;
                    if ((fVar24 <= _DAT_011983fc) &&
                       (lVar16 = lStack_20a8, iStack_2190 <= uStack_2188._4_4_)) {
                      if ((_DAT_0f6ffb10 == (long *)0x0) &&
                         (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                                   &UNK_013a2901), cVar10 != '\0')) {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                      lVar16 = *(long *)(*_DAT_0f6ffb10 + 0x200);
                    }
                    *(long *)(*param_2 + (ulong)uVar20 * 8) = lVar16;
                    if (in_stack_00000010 != (long *)0x0) {
                      if ((_DAT_0f6ffb10 == (long *)0x0) &&
                         (cVar10 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                                   &UNK_013a2901), cVar10 != '\0')) {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                      if (lVar16 != *(long *)(*_DAT_0f6ffb10 + 0x200)) {
                        lVar16 = lStack_20b0 * 2 + *in_stack_00000010;
                        sVar17 = (short)((ulong)uStack_2188 >> 0x20) + 1;
                        sVar4 = *(short *)(lVar16 + lStack_20b8 * 2);
                        if (sVar17 < sVar4) {
                          sVar17 = sVar4;
                        }
                        *(short *)(lVar16 + lStack_20b8 * 2) = sVar17;
                      }
                    }
                  }
                  iVar19 = iVar19 + 1;
                } while (iVar19 != 8);
                lVar16 = lStack_20c0 + 1;
                iVar12 = iVar12 + 1;
              } while (lVar16 != 4);
              uVar20 = (int)uStack_20d0 + 1;
              uVar18 = (ulong)uVar20;
              puVar23 = (undefined8 *)(ulong)((int)puVar23 + 1);
              lVar16 = 8;
            } while (uVar20 != 4);
            goto LAB_0527f020;
          }
        }
      }
    }
    func_0x04890760();
    plVar13 = plVar14;
LAB_0527f5d4:
    lVar22 = lVar16 + 0xd1;
    if ((uVar18 & 1) == 0) {
LAB_0527eea0:
      iVar11 = func_0x0eee3000(lVar22,0xf6eaec9);
    }
    else {
LAB_0527f5e4:
      iVar11 = func_0x0eee3000(lVar22,_DAT_0f6eaed8);
    }
    if (iVar11 != 0) goto LAB_0527eeb4;
    *(long **)(lVar16 + 0xe8) = plVar13;
    _DAT_0f6eaee0 = puVar23;
  } while( true );
LAB_0527ef80:
  lVar21 = lStack_2108 + 1;
  uStack_21f0 = uStack_21f0 + 4;
  if (lVar21 == 4) goto LAB_0527f551;
  goto LAB_0527efaa;
LAB_0527f551:
  lVar22 = lStack_2120 + 1;
  iStack_21ec = iStack_21ec + 4;
  if (lVar22 == 4) {
    if (lStack_21d0 != 0) {
      lStack_21c8 = lStack_21d0;
      func_0x0412a280(lStack_21d0,lStack_21c0 - lStack_21d0);
    }
    if (lStack_21e8 != 0) {
      lStack_21e0 = lStack_21e8;
      func_0x0412a280(lStack_21e8,lStack_21d8 - lStack_21e8);
    }
    func_0x0d2ecea0(&lStack_2038);
    func_0x0412a280(plVar14,0x40);
    return;
  }
  goto LAB_0527ef40;
}


