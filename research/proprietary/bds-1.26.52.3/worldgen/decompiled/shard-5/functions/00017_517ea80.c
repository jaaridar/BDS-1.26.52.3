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
    func_0x0eee2dd0(*in_stack_00000010,0);
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
  func_0x0eee2dd0(afStack_1034,0,0x1004);
  func_0x0527f6c0(&lStack_2038,param_1,param_3);
  func_0x0eee2f00(afStack_1034,&lStack_2038,0x1004);
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
  FUN_0412a280(plVar13,8);
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
    FUN_0d2efee0(&uStack_2188,lVar16 + 0x48,*(undefined8 *)param_3);
    if (lStack_21e8 != 0) {
      FUN_0412a280(lStack_21e8,lStack_21d8 - lStack_21e8);
    }
    lStack_21e8 = uStack_2188;
    lStack_21e0 = uStack_2180;
    lStack_21d8 = lStack_2178;
    uStack_2188 = 0;
    uStack_2180 = 0;
    lStack_2178 = 0;
    if (lStack_21d0 != 0) {
      FUN_0412a280(lStack_21d0,lStack_21c0 - lStack_21d0);
    }
    lStack_21d0 = lStack_2170;
    lStack_21c8 = lStack_2168;
    lStack_21c0 = lStack_2160;
    lStack_2170 = 0;
    lStack_2168 = 0;
    lStack_2160 = 0;
    if (uStack_2188 != 0) {
      uStack_2180 = uStack_2188;
      FUN_0412a280(uStack_2188,lStack_2178 - uStack_2188);
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
    lStack_20a0 = func_0x0cc41df0(0xf6ff9e0,0xf71bd88,1);
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
      FUN_0412a280(lStack_21d0,lStack_21c0 - lStack_21d0);
    }
    if (lStack_21e8 != 0) {
      lStack_21e0 = lStack_21e8;
      FUN_0412a280(lStack_21e8,lStack_21d8 - lStack_21e8);
    }
    func_0x0d2ecea0(&lStack_2038);
    FUN_0412a280(plVar14,0x40);
    return;
  }
  goto LAB_0527ef40;
}



/* ---- assembly ---- */
/* 0527ea80 */  PUSH RBP
/* 0527ea81 */  PUSH R15
/* 0527ea83 */  PUSH R14
/* 0527ea85 */  PUSH R13
/* 0527ea87 */  PUSH R12
/* 0527ea89 */  PUSH RBX
/* 0527ea8a */  SUB RSP,0x21e8
/* 0527ea91 */  MOV RBP,RDX
/* 0527ea94 */  MOV R14,RSI
/* 0527ea97 */  MOV R12,RDI
/* 0527ea9a */  MOV R15,qword ptr [RDI + 0x28]
/* 0527ea9e */  MOVSX EAX,word ptr [R15 + 0xa8]
/* 0527eaa6 */  MOV dword ptr [RSP + 0x84],EAX
/* 0527eaad */  MOVSX EAX,word ptr [R15 + 0xac]
/* 0527eab5 */  MOV dword ptr [RSP + 0x88],EAX
/* 0527eabc */  CMP qword ptr [RSP + 0x2228],0x0
/* 0527eac5 */  JZ 0x0527eae5
/* 0527eac7 */  MOV RAX,qword ptr [RSP + 0x2228]
/* 0527eacf */  MOV RDI,qword ptr [RAX]
/* 0527ead2 */  MOV RDX,qword ptr [RAX + 0x8]
/* 0527ead6 */  SUB RDX,RDI
/* 0527ead9 */  TEST RDX,RDX
/* 0527eadc */  JLE 0x0527eae5
/* 0527eade */  XOR ESI,ESI
/* 0527eae0 */  CALL 0x0eee2dd0
/* 0527eae5 */  XORPS XMM0,XMM0
/* 0527eae8 */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0527eaf0 */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
/* 0527eaf8 */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM0
/* 0527eb00 */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0527eb08 */  MOVAPS xmmword ptr [RSP + 0x180],XMM0
/* 0527eb10 */  MOV dword ptr [RSP + 0x1d0],0x0
/* 0527eb1b */  LEA RBX,[RSP + 0x11e4]
/* 0527eb23 */  MOV EDX,0x1004
/* 0527eb28 */  MOV RDI,RBX
/* 0527eb2b */  XOR ESI,ESI
/* 0527eb2d */  CALL 0x0eee2dd0
/* 0527eb32 */  LEA RDI,[RSP + 0x1e0]
/* 0527eb3a */  MOV RSI,R12
/* 0527eb3d */  MOV RDX,RBP
/* 0527eb40 */  CALL 0x0527f6c0
/* 0527eb45 */  MOV qword ptr [RSP + 0x18],R12
/* 0527eb4a */  LEA RSI,[RSP + 0x1e0]
/* 0527eb52 */  MOV EDX,0x1004
/* 0527eb57 */  MOV RDI,RBX
/* 0527eb5a */  CALL 0x0eee2f00
/* 0527eb5f */  XORPS XMM0,XMM0
/* 0527eb62 */  MOVAPS xmmword ptr [RSP + 0x190],XMM0
/* 0527eb6a */  MOVAPS xmmword ptr [RSP + 0x1a0],XMM0
/* 0527eb72 */  MOVAPS xmmword ptr [RSP + 0x1b0],XMM0
/* 0527eb7a */  MOVUPS xmmword ptr [RSP + 0x1bc],XMM0
/* 0527eb82 */  MOV qword ptr [RSP + 0x180],0x401
/* 0527eb8e */  MOV qword ptr [RSP + 0x188],RBX
/* 0527eb96 */  MOVSD XMM0,qword ptr [0x014e9c40]
/* 0527eb9e */  MOVSD qword ptr [RSP + 0x1cc],XMM0
/* 0527eba7 */  LEA RDI,[0xf5463b0]
/* 0527ebae */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527ebb5 */  MOV ESI,0x8
/* 0527ebba */  CALL qword ptr [RAX + 0x10]
/* 0527ebbd */  MOV R12,RAX
/* 0527ebc0 */  TEST RAX,RAX
/* 0527ebc3 */  JZ 0x0527f60b
/* 0527ebc9 */  LEA RBX,[RSP + 0x180]
/* 0527ebd1 */  MOV qword ptr [R12],RBX
/* 0527ebd5 */  LEA RDI,[0xf5463b0]
/* 0527ebdc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0527ebe3 */  MOV ESI,0x40
/* 0527ebe8 */  CALL qword ptr [RAX + 0x10]
/* 0527ebeb */  MOV R13,RAX
/* 0527ebee */  TEST RAX,RAX
/* 0527ebf1 */  JZ 0x0527f61c
/* 0527ebf7 */  MOV qword ptr [RSP + 0x10],R13
/* 0527ebfc */  MOV qword ptr [R13],RBX
/* 0527ec00 */  MOV ESI,0x8
/* 0527ec05 */  MOV RDI,R12
/* 0527ec08 */  CALL 0x0412a280
/* 0527ec0d */  XORPS XMM0,XMM0
/* 0527ec10 */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0527ec18 */  MOVAPS xmmword ptr [RSP + 0x200],XMM0
/* 0527ec20 */  MOVAPS xmmword ptr [RSP + 0x1f0],XMM0
/* 0527ec28 */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM0
/* 0527ec30 */  MOV qword ptr [RSP + 0x220],0x0
/* 0527ec3c */  MOVAPS xmmword ptr [RSP + 0x50],XMM0
/* 0527ec41 */  MOVAPS xmmword ptr [RSP + 0x40],XMM0
/* 0527ec46 */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 0527ec4b */  CMP byte ptr [RSP + 0x2220],0x0
/* 0527ec53 */  JZ 0x0527ed8c
/* 0527ec59 */  MOV RBX,qword ptr [RSP + 0x18]
/* 0527ec5e */  MOV RDI,RBX
/* 0527ec61 */  CALL 0x0ca729d0
/* 0527ec66 */  MOV R12,qword ptr [RBX + 0x78]
/* 0527ec6a */  ADD R15,0x220
/* 0527ec71 */  LEA RDI,[RSP + 0x90]
/* 0527ec79 */  MOV RSI,R15
/* 0527ec7c */  MOV RDX,RBP
/* 0527ec7f */  CALL 0x0d2ee510
/* 0527ec84 */  LEA RDI,[RSP + 0x1e0]
/* 0527ec8c */  LEA R15,[RSP + 0x90]
/* 0527ec94 */  MOV RSI,R15
/* 0527ec97 */  CALL 0x0d2ecfa0
/* 0527ec9c */  MOV RDI,R15
/* 0527ec9f */  CALL 0x0d2ecea0
/* 0527eca4 */  ADD R12,0x48
/* 0527eca8 */  MOV RDX,qword ptr [RBP]
/* 0527ecac */  LEA RDI,[RSP + 0x90]
/* 0527ecb4 */  MOV RSI,R12
/* 0527ecb7 */  CALL 0x0d2efee0
/* 0527ecbc */  MOV RDI,qword ptr [RSP + 0x30]
/* 0527ecc1 */  TEST RDI,RDI
/* 0527ecc4 */  JZ 0x0527ecd3
/* 0527ecc6 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0527eccb */  SUB RSI,RDI
/* 0527ecce */  CALL 0x0412a280
/* 0527ecd3 */  MOVAPS XMM0,xmmword ptr [RSP + 0x90]
/* 0527ecdb */  MOVAPS xmmword ptr [RSP + 0x30],XMM0
/* 0527ece0 */  MOV RAX,qword ptr [RSP + 0xa0]
/* 0527ece8 */  MOV qword ptr [RSP + 0x40],RAX
/* 0527eced */  XORPS XMM1,XMM1
/* 0527ecf0 */  MOVAPS xmmword ptr [RSP + 0x90],XMM1
/* 0527ecf8 */  MOV qword ptr [RSP + 0xa0],0x0
/* 0527ed04 */  MOV RDI,qword ptr [RSP + 0x48]
/* 0527ed09 */  TEST RDI,RDI
/* 0527ed0c */  JZ 0x0527ed28
/* 0527ed0e */  MOV RSI,qword ptr [RSP + 0x58]
/* 0527ed13 */  SUB RSI,RDI
/* 0527ed16 */  CALL 0x0412a280
/* 0527ed1b */  XORPS XMM1,XMM1
/* 0527ed1e */  MOV RDI,qword ptr [RSP + 0x90]
/* 0527ed26 */  JMP 0x0527ed2a
/* 0527ed28 */  XOR EDI,EDI
/* 0527ed2a */  MOVUPS XMM0,xmmword ptr [RSP + 0xa8]
/* 0527ed32 */  MOVUPS xmmword ptr [RSP + 0x48],XMM0
/* 0527ed37 */  MOV RAX,qword ptr [RSP + 0xb8]
/* 0527ed3f */  MOV qword ptr [RSP + 0x58],RAX
/* 0527ed44 */  MOVUPS xmmword ptr [RSP + 0xa8],XMM1
/* 0527ed4c */  MOV qword ptr [RSP + 0xb8],0x0
/* 0527ed58 */  TEST RDI,RDI
/* 0527ed5b */  JZ 0x0527ed75
/* 0527ed5d */  MOV qword ptr [RSP + 0x98],RDI
/* 0527ed65 */  MOV RSI,qword ptr [RSP + 0xa0]
/* 0527ed6d */  SUB RSI,RDI
/* 0527ed70 */  CALL 0x0412a280
/* 0527ed75 */  MOV RAX,qword ptr [RSP + 0x200]
/* 0527ed7d */  MOV byte ptr [RSP + 0xf],0x1
/* 0527ed82 */  CMP RAX,qword ptr [RSP + 0x1f8]
/* 0527ed8a */  JNZ 0x0527edd1
/* 0527ed8c */  MOV RAX,qword ptr [RSP + 0x218]
/* 0527ed94 */  MOV byte ptr [RSP + 0xf],0x1
/* 0527ed99 */  CMP RAX,qword ptr [RSP + 0x210]
/* 0527eda1 */  JNZ 0x0527edd1
/* 0527eda3 */  MOV RAX,qword ptr [RSP + 0x1e8]
/* 0527edab */  CMP RAX,qword ptr [RSP + 0x1e0]
/* 0527edb3 */  JNZ 0x0527edd1
/* 0527edb5 */  MOV RAX,qword ptr [RSP + 0x30]
/* 0527edba */  XOR RAX,qword ptr [RSP + 0x38]
/* 0527edbf */  MOV RCX,qword ptr [RSP + 0x50]
/* 0527edc4 */  XOR RCX,qword ptr [RSP + 0x48]
/* 0527edc9 */  OR RCX,RAX
/* 0527edcc */  SETNZ byte ptr [RSP + 0xf]
/* 0527edd1 */  MOV EAX,dword ptr [R14 + 0x14]
/* 0527edd5 */  IMUL EAX,dword ptr [R14 + 0x10]
/* 0527edda */  IMUL EAX,dword ptr [R14 + 0x18]
/* 0527eddf */  MOV dword ptr [RSP + 0x8c],EAX
/* 0527ede6 */  MOV qword ptr [RSP + 0x90],0x0
/* 0527edf2 */  MOV dword ptr [RSP + 0x98],0x0
/* 0527edfd */  MOV RAX,qword ptr [R14 + 0x20]
/* 0527ee01 */  MOV RBX,qword ptr [RAX + 0x68]
/* 0527ee05 */  MOV RAX,qword ptr [RBX + 0xc8]
/* 0527ee0c */  CMP RAX,qword ptr [0x0f6eaec0]
/* 0527ee13 */  JNZ 0x0527eeb4
/* 0527ee19 */  LEA R15,[RBX + 0xc8]
/* 0527ee20 */  LEA R12,[0xf6eaec0]
/* 0527ee27 */  MOV AL,0x1
/* 0527ee29 */  MOV dword ptr [RSP + 0x24],EAX
/* 0527ee2d */  CMP qword ptr [RBX + 0xe8],R12
/* 0527ee34 */  JNZ 0x0527ee43
/* 0527ee36 */  CMP qword ptr [0x0f6eaee0],R15
/* 0527ee3d */  JZ 0x0527eec7
/* 0527ee43 */  MOVZX EAX,byte ptr [RBX + 0xd0]
/* 0527ee4a */  TEST AL,0x1
/* 0527ee4c */  JZ 0x0527ee6c
/* 0527ee4e */  MOV RDX,qword ptr [RBX + 0xd8]
/* 0527ee55 */  MOVZX ECX,byte ptr [0x0f6eaec8]
/* 0527ee5c */  TEST CL,0x1
/* 0527ee5f */  JNZ 0x0527ee7c
/* 0527ee61 */  MOV ESI,ECX
/* 0527ee63 */  SHR ESI,0x1
/* 0527ee65 */  CMP RDX,RSI
/* 0527ee68 */  JZ 0x0527ee88
/* 0527ee6a */  JMP 0x0527eeb4
/* 0527ee6c */  MOV EDX,EAX
/* 0527ee6e */  SHR EDX,0x1
/* 0527ee70 */  MOVZX ECX,byte ptr [0x0f6eaec8]
/* 0527ee77 */  TEST CL,0x1
/* 0527ee7a */  JZ 0x0527ee61
/* 0527ee7c */  MOV RSI,qword ptr [0x0f6eaed0]
/* 0527ee83 */  CMP RDX,RSI
/* 0527ee86 */  JNZ 0x0527eeb4
/* 0527ee88 */  TEST AL,0x1
/* 0527ee8a */  JZ 0x0527f5d4
/* 0527ee90 */  MOV RDI,qword ptr [RBX + 0xe0]
/* 0527ee97 */  TEST CL,0x1
/* 0527ee9a */  JNZ 0x0527f5e4
/* 0527eea0 */  LEA RSI,[0xf6eaec9]
/* 0527eea7 */  CALL 0x0eee3000
/* 0527eeac */  TEST EAX,EAX
/* 0527eeae */  JZ 0x0527f5f8
/* 0527eeb4 */  MOV qword ptr [RBX + 0xe8],0x0
/* 0527eebf */  MOV dword ptr [RSP + 0x24],0x0
/* 0527eec7 */  MOV EAX,dword ptr [RBP]
/* 0527eeca */  MOV qword ptr [RSP + 0x70],RAX
/* 0527eecf */  MOV EAX,dword ptr [RBP + 0x4]
/* 0527eed2 */  MOV qword ptr [RSP + 0x68],RAX
/* 0527eed7 */  LEA RDI,[0xf6ff9e0]
/* 0527eede */  LEA RSI,[0xf71bd88]
/* 0527eee5 */  MOV EDX,0x1
/* 0527eeea */  MOV R12,qword ptr [RSP + 0x10]
/* 0527eeef */  CALL 0x0cc41df0
/* 0527eef4 */  MOV qword ptr [RSP + 0x178],RAX
/* 0527eefc */  LEA RDI,[0xf6ff9e0]
/* 0527ef03 */  LEA RSI,[0xf713f00]
/* 0527ef0a */  MOV EDX,0x1
/* 0527ef0f */  CALL 0x0cc41df0
/* 0527ef14 */  MOV qword ptr [RSP + 0x170],RAX
/* 0527ef1c */  MOV RAX,qword ptr [RSP + 0x70]
/* 0527ef21 */  SHL EAX,0x4
/* 0527ef24 */  MOV qword ptr [RSP + 0x70],RAX
/* 0527ef29 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0527ef2e */  SHL EAX,0x4
/* 0527ef31 */  MOV qword ptr [RSP + 0x68],RAX
/* 0527ef36 */  MOV dword ptr [RSP + 0x2c],0x0
/* 0527ef3e */  XOR EAX,EAX
/* 0527ef40 */  LEA RCX,[RAX*0x4]
/* 0527ef48 */  MOV qword ptr [RSP + 0x150],RCX
/* 0527ef50 */  LEA RCX,[RAX + RAX*0x4]
/* 0527ef54 */  MOV qword ptr [RSP + 0xf8],RAX
/* 0527ef5c */  LEA RDX,[RAX + RAX*0x4]
/* 0527ef60 */  ADD RDX,0x5
/* 0527ef64 */  MOV dword ptr [RSP + 0x28],0x0
/* 0527ef6c */  XOR ESI,ESI
/* 0527ef6e */  MOV qword ptr [RSP + 0x108],RCX
/* 0527ef76 */  MOV qword ptr [RSP + 0x100],RDX
/* 0527ef7e */  JMP 0x0527efaa
/* 0527ef80 */  MOV RSI,qword ptr [RSP + 0x110]
/* 0527ef88 */  INC RSI
/* 0527ef8b */  ADD dword ptr [RSP + 0x28],0x4
/* 0527ef90 */  CMP RSI,0x4
/* 0527ef94 */  MOV RCX,qword ptr [RSP + 0x108]
/* 0527ef9c */  MOV RDX,qword ptr [RSP + 0x100]
/* 0527efa4 */  JZ 0x0527f551
/* 0527efaa */  LEA RAX,[RSI + RCX*0x1]
/* 0527efae */  LEA RCX,[RAX + RAX*0x4]
/* 0527efb2 */  LEA RDI,[RAX + RCX*0x8]
/* 0527efb6 */  MOV qword ptr [RSP + 0x130],RDI
/* 0527efbe */  LEA RAX,[RAX + RCX*0x8]
/* 0527efc2 */  ADD RAX,0x29
/* 0527efc6 */  MOV qword ptr [RSP + 0x128],RAX
/* 0527efce */  LEA RAX,[RDX + RSI*0x1]
/* 0527efd2 */  LEA RCX,[RAX + RAX*0x4]
/* 0527efd6 */  LEA RDX,[RAX + RCX*0x8]
/* 0527efda */  MOV qword ptr [RSP + 0x120],RDX
/* 0527efe2 */  LEA RAX,[RAX + RCX*0x8 + 0x29]
/* 0527efe7 */  MOV qword ptr [RSP + 0x118],RAX
/* 0527efef */  MOV qword ptr [RSP + 0x110],RSI
/* 0527eff7 */  LEA EAX,[RSI*0x4]
/* 0527effe */  MOV qword ptr [RSP + 0x140],RAX
/* 0527f006 */  MOV qword ptr [RSP + 0x18],0x0
/* 0527f00f */  MOV EAX,dword ptr [RSP + 0x84]
/* 0527f016 */  MOV qword ptr [RSP + 0x78],RAX
/* 0527f01b */  XOR EDI,EDI
/* 0527f01d */  JMP 0x0527f04f
/* 0527f020 */  MOV RDI,qword ptr [RSP + 0x138]
/* 0527f028 */  INC RDI
/* 0527f02b */  MOV RAX,qword ptr [RSP + 0x78]
/* 0527f030 */  ADD EAX,0x8
/* 0527f033 */  MOV qword ptr [RSP + 0x78],RAX
/* 0527f038 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0527f03d */  ADD EAX,0x8
/* 0527f040 */  MOV qword ptr [RSP + 0x18],RAX
/* 0527f045 */  CMP RDI,0x10
/* 0527f049 */  JZ 0x0527ef80
/* 0527f04f */  MOV RAX,qword ptr [RSP + 0x130]
/* 0527f057 */  LEA RDX,[RDI + RAX*0x1]
/* 0527f05b */  MOV RAX,qword ptr [RSP + 0x128]
/* 0527f063 */  LEA RCX,[RAX + RDI*0x1]
/* 0527f067 */  MOV RAX,qword ptr [RSP + 0x120]
/* 0527f06f */  LEA RSI,[RDI + RAX*0x1]
/* 0527f073 */  MOV RAX,qword ptr [RSP + 0x118]
/* 0527f07b */  MOV qword ptr [RSP + 0x138],RDI
/* 0527f083 */  ADD RAX,RDI
/* 0527f086 */  CMP byte ptr [RSP + 0x24],0x0
/* 0527f08b */  JZ 0x0527f150
/* 0527f091 */  MOVSS XMM0,dword ptr [RSP + RDX*0x4 + 0x11e4]
/* 0527f09a */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f0a1 */  JNZ 0x0527f150
/* 0527f0a7 */  JP 0x0527f150
/* 0527f0ad */  MOVSS XMM0,dword ptr [RSP + RCX*0x4 + 0x11e4]
/* 0527f0b6 */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f0bd */  JNZ 0x0527f150
/* 0527f0c3 */  JP 0x0527f150
/* 0527f0c9 */  MOVSS XMM0,dword ptr [RSP + RSI*0x4 + 0x11e4]
/* 0527f0d2 */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f0d9 */  JNZ 0x0527f150
/* 0527f0db */  JP 0x0527f150
/* 0527f0dd */  MOVSS XMM0,dword ptr [RSP + RAX*0x4 + 0x11e4]
/* 0527f0e6 */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f0ed */  JNZ 0x0527f150
/* 0527f0ef */  JP 0x0527f150
/* 0527f0f1 */  MOVSS XMM0,dword ptr [RSP + RDX*0x4 + 0x11e8]
/* 0527f0fa */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f101 */  JNZ 0x0527f150
/* 0527f103 */  JP 0x0527f150
/* 0527f105 */  MOVSS XMM0,dword ptr [RSP + RCX*0x4 + 0x11e8]
/* 0527f10e */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f115 */  JNZ 0x0527f150
/* 0527f117 */  JP 0x0527f150
/* 0527f119 */  MOVSS XMM0,dword ptr [RSP + RSI*0x4 + 0x11e8]
/* 0527f122 */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f129 */  JNZ 0x0527f150
/* 0527f12b */  JP 0x0527f150
/* 0527f12d */  MOVSS XMM0,dword ptr [RSP + RAX*0x4 + 0x11e8]
/* 0527f136 */  UCOMISS XMM0,dword ptr [0x011988ac]
/* 0527f13d */  JNZ 0x0527f150
/* 0527f13f */  JNP 0x0527f020
/* 0527f145 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0527f150 */  MOV RDI,qword ptr [R12]
/* 0527f154 */  MOV R8,qword ptr [RDI]
/* 0527f157 */  CMP R8,RDX
/* 0527f15a */  JBE 0x0527f5cf
/* 0527f160 */  MOV R9,qword ptr [RDI + 0x8]
/* 0527f164 */  MOVSS XMM0,dword ptr [R9 + RDX*0x4]
/* 0527f16a */  MOVSS dword ptr [RDI + 0x10],XMM0
/* 0527f16f */  CMP R8,RSI
/* 0527f172 */  JBE 0x0527f5cf
/* 0527f178 */  MOVSS XMM0,dword ptr [R9 + RSI*0x4]
/* 0527f17e */  MOVSS dword ptr [RDI + 0x14],XMM0
/* 0527f183 */  MOVSS XMM0,dword ptr [R9 + RCX*0x4]
/* 0527f189 */  MOVSS dword ptr [RDI + 0x18],XMM0
/* 0527f18e */  CMP R8,RAX
/* 0527f191 */  JBE 0x0527f5cf
/* 0527f197 */  LEA R10,[RAX + 0x1]
/* 0527f19b */  MOVSS XMM0,dword ptr [R9 + RAX*0x4]
/* 0527f1a1 */  MOVSS dword ptr [RDI + 0x1c],XMM0
/* 0527f1a6 */  MOVSS XMM0,dword ptr [R9 + RDX*0x4 + 0x4]
/* 0527f1ad */  MOVSS dword ptr [RDI + 0x20],XMM0
/* 0527f1b2 */  MOVSS XMM0,dword ptr [R9 + RSI*0x4 + 0x4]
/* 0527f1b9 */  MOVSS dword ptr [RDI + 0x24],XMM0
/* 0527f1be */  MOVSS XMM0,dword ptr [R9 + RCX*0x4 + 0x4]
/* 0527f1c5 */  MOVSS dword ptr [RDI + 0x28],XMM0
/* 0527f1ca */  CMP R8,R10
/* 0527f1cd */  JBE 0x0527f5cf
/* 0527f1d3 */  MOVSS XMM0,dword ptr [R9 + RAX*0x4 + 0x4]
/* 0527f1da */  MOVSS dword ptr [RDI + 0x2c],XMM0
/* 0527f1df */  XOR ECX,ECX
/* 0527f1e1 */  MOV R15D,dword ptr [RSP + 0x28]
/* 0527f1e6 */  JMP 0x0527f206
/* 0527f1f0 */  MOV RCX,qword ptr [RSP + 0x148]
/* 0527f1f8 */  INC ECX
/* 0527f1fa */  INC R15D
/* 0527f1fd */  CMP ECX,0x4
/* 0527f200 */  JZ 0x0527f020
/* 0527f206 */  XORPS XMM0,XMM0
/* 0527f209 */  CVTSI2SS XMM0,ECX
/* 0527f20d */  MOV RAX,qword ptr [R12]
/* 0527f211 */  MULSS XMM0,dword ptr [RAX + 0x4c]
/* 0527f216 */  MOVSD XMM1,qword ptr [RAX + 0x10]
/* 0527f21b */  MOVSD XMM2,qword ptr [RAX + 0x18]
/* 0527f220 */  MOVSD XMM3,qword ptr [RAX + 0x20]
/* 0527f225 */  MOVSD XMM4,qword ptr [RAX + 0x28]
/* 0527f22a */  SUBPS XMM2,XMM1
/* 0527f22d */  SUBPS XMM4,XMM3
/* 0527f230 */  MOVLHPS XMM2,XMM4
/* 0527f233 */  SHUFPS XMM0,XMM0,0x0
/* 0527f237 */  MULPS XMM0,XMM2
/* 0527f23a */  MOVLHPS XMM1,XMM3
/* 0527f23d */  ADDPS XMM1,XMM0
/* 0527f240 */  MOVUPS xmmword ptr [RAX + 0x30],XMM1
/* 0527f244 */  MOV RAX,qword ptr [RSP + 0x140]
/* 0527f24c */  MOV qword ptr [RSP + 0x148],RCX
/* 0527f254 */  ADD EAX,ECX
/* 0527f256 */  MOV RCX,qword ptr [RSP + 0x68]
/* 0527f25b */  ADD ECX,EAX
/* 0527f25d */  MOV dword ptr [RSP + 0x98],ECX
/* 0527f264 */  IMUL EAX,dword ptr [R14 + 0x10]
/* 0527f269 */  CDQE
/* 0527f26b */  MOV qword ptr [RSP + 0x160],RAX
/* 0527f273 */  MOV R13D,dword ptr [RSP + 0x2c]
/* 0527f278 */  XOR ECX,ECX
/* 0527f27a */  JMP 0x0527f298
/* 0527f280 */  MOV RCX,qword ptr [RSP + 0x158]
/* 0527f288 */  INC RCX
/* 0527f28b */  INC R13D
/* 0527f28e */  CMP RCX,0x4
/* 0527f292 */  JZ 0x0527f1f0
/* 0527f298 */  MOVZX EAX,CL
/* 0527f29b */  XORPS XMM0,XMM0
/* 0527f29e */  CVTSI2SS XMM0,EAX
/* 0527f2a2 */  MOV RAX,qword ptr [R12]
/* 0527f2a6 */  MULSS XMM0,dword ptr [RAX + 0x4c]
/* 0527f2ab */  MOVUPS XMM1,xmmword ptr [RAX + 0x30]
/* 0527f2af */  MOVAPS XMM2,XMM1
/* 0527f2b2 */  SHUFPS XMM2,XMM1,0xed
/* 0527f2b6 */  SHUFPS XMM1,XMM1,0xe8
/* 0527f2ba */  SUBPS XMM2,XMM1
/* 0527f2bd */  UNPCKLPS XMM0,XMM0
/* 0527f2c0 */  MULPS XMM0,XMM2
/* 0527f2c3 */  ADDPS XMM0,XMM1
/* 0527f2c6 */  MOVLPS qword ptr [RAX + 0x40],XMM0
/* 0527f2ca */  MOV RAX,qword ptr [RSP + 0x150]
/* 0527f2d2 */  MOV qword ptr [RSP + 0x158],RCX
/* 0527f2da */  ADD RCX,RAX
/* 0527f2dd */  MOV RAX,qword ptr [RSP + 0x70]
/* 0527f2e2 */  MOV qword ptr [RSP + 0x168],RCX
/* 0527f2ea */  ADD EAX,ECX
/* 0527f2ec */  MOV dword ptr [RSP + 0x90],EAX
/* 0527f2f3 */  XOR EBX,EBX
/* 0527f2f5 */  JMP 0x0527f310
/* 0527f300 */  INC EBX
/* 0527f302 */  CMP EBX,0x8
/* 0527f305 */  MOV R12,qword ptr [RSP + 0x10]
/* 0527f30a */  JZ 0x0527f280
/* 0527f310 */  MOVSX EAX,BX
/* 0527f313 */  XORPS XMM0,XMM0
/* 0527f316 */  CVTSI2SS XMM0,EAX
/* 0527f31a */  MOV RAX,qword ptr [R12]
/* 0527f31e */  MULSS XMM0,dword ptr [RAX + 0x50]
/* 0527f323 */  MOVSS XMM1,dword ptr [RAX + 0x40]
/* 0527f328 */  MOVSS XMM2,dword ptr [RAX + 0x44]
/* 0527f32d */  SUBSS XMM2,XMM1
/* 0527f331 */  MULSS XMM2,XMM0
/* 0527f335 */  ADDSS XMM2,XMM1
/* 0527f339 */  MOVSS dword ptr [RAX + 0x48],XMM2
/* 0527f33e */  MOVSS XMM3,dword ptr [RSP + 0x1c8]
/* 0527f347 */  MULSS XMM3,dword ptr [0x01198cf8]
/* 0527f34f */  MOVSS XMM2,dword ptr [0x011983f0]
/* 0527f357 */  MOVAPS XMM0,XMM2
/* 0527f35a */  CMPLTSS XMM0,XMM3
/* 0527f35f */  MAXSS XMM3,dword ptr [0x011985d4]
/* 0527f367 */  MOVAPS XMM1,XMM0
/* 0527f36a */  ANDPS XMM1,XMM2
/* 0527f36d */  ANDNPS XMM0,XMM3
/* 0527f370 */  ORPS XMM0,XMM1
/* 0527f373 */  MOVAPS XMM1,XMM0
/* 0527f376 */  MULSS XMM1,XMM0
/* 0527f37a */  MULSS XMM1,XMM0
/* 0527f37e */  DIVSS XMM1,dword ptr [0x01198350]
/* 0527f386 */  MOV EBP,dword ptr [R14 + 0x18]
/* 0527f38a */  IMUL EBP,R13D
/* 0527f38e */  ADD EBP,R15D
/* 0527f391 */  IMUL EBP,dword ptr [R14 + 0x14]
/* 0527f396 */  MULSS XMM0,dword ptr [0x011986e0]
/* 0527f39e */  MOV RAX,qword ptr [RSP + 0x18]
/* 0527f3a3 */  ADD EAX,EBX
/* 0527f3a5 */  ADD EBP,EAX
/* 0527f3a7 */  CMP EBP,dword ptr [RSP + 0x8c]
/* 0527f3ae */  JNC 0x0527f300
/* 0527f3b4 */  ADDSS XMM0,XMM1
/* 0527f3b8 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0527f3bd */  ADD EAX,EBX
/* 0527f3bf */  MOV dword ptr [RSP + 0x94],EAX
/* 0527f3c6 */  CMP byte ptr [RSP + 0xf],0x0
/* 0527f3cb */  JZ 0x0527f429
/* 0527f3cd */  MOV RSI,qword ptr [RSP + 0x90]
/* 0527f3d5 */  MOV EDX,dword ptr [RSP + 0x98]
/* 0527f3dc */  LEA RDI,[RSP + 0x30]
/* 0527f3e1 */  MOVAPS xmmword ptr [RSP + 0xe0],XMM0
/* 0527f3e9 */  CALL 0x0d2f06a0
/* 0527f3ee */  MOVAPS XMM1,xmmword ptr [RSP + 0xe0]
/* 0527f3f6 */  CVTSS2SD XMM1,XMM1
/* 0527f3fa */  ADDSD XMM0,XMM1
/* 0527f3fe */  CVTSD2SS XMM0,XMM0
/* 0527f402 */  LEA RDI,[RSP + 0x1e0]
/* 0527f40a */  LEA RSI,[RSP + 0x90]
/* 0527f412 */  MOVSS dword ptr [RSP + 0xe0],XMM0
/* 0527f41b */  CALL 0x0d2ee730
/* 0527f420 */  ADDSS XMM0,dword ptr [RSP + 0xe0]
/* 0527f429 */  UCOMISS XMM0,dword ptr [0x011983fc]
/* 0527f430 */  MOV R12,qword ptr [RSP + 0x178]
/* 0527f438 */  JA 0x0527f4a4
/* 0527f43a */  MOV R12,qword ptr [RSP + 0x170]
/* 0527f442 */  MOV EAX,dword ptr [RSP + 0x88]
/* 0527f449 */  CMP dword ptr [RSP + 0x94],EAX
/* 0527f450 */  JL 0x0527f4a4
/* 0527f452 */  CMP qword ptr [0x0f6ffb10],0x0
/* 0527f45a */  JNZ 0x0527f493
/* 0527f45c */  LEA RDI,[0x13a28c0]
/* 0527f463 */  LEA RSI,[0x11e3821]
/* 0527f46a */  MOV EDX,0x2fd
/* 0527f46f */  LEA RCX,[0x13a2868]
/* 0527f476 */  LEA R8,[0x13a2901]
/* 0527f47d */  XOR EAX,EAX
/* 0527f47f */  CALL 0x0eeddcf0
/* 0527f484 */  TEST AL,AL
/* 0527f486 */  JZ 0x0527f493
/* 0527f488 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0527f493 */  MOV RAX,qword ptr [0x0f6ffb10]
/* 0527f49a */  MOV RAX,qword ptr [RAX]
/* 0527f49d */  MOV R12,qword ptr [RAX + 0x200]
/* 0527f4a4 */  MOV RAX,qword ptr [R14]
/* 0527f4a7 */  MOV ECX,EBP
/* 0527f4a9 */  MOV qword ptr [RAX + RCX*0x8],R12
/* 0527f4ad */  CMP qword ptr [RSP + 0x2228],0x0
/* 0527f4b6 */  JZ 0x0527f300
/* 0527f4bc */  CMP qword ptr [0x0f6ffb10],0x0
/* 0527f4c4 */  JNZ 0x0527f500
/* 0527f4c6 */  LEA RDI,[0x13a28c0]
/* 0527f4cd */  LEA RSI,[0x11e3821]
/* 0527f4d4 */  MOV EDX,0x2fd
/* 0527f4d9 */  LEA RCX,[0x13a2868]
/* 0527f4e0 */  LEA R8,[0x13a2901]
/* 0527f4e7 */  XOR EAX,EAX
/* 0527f4e9 */  CALL 0x0eeddcf0
/* 0527f4ee */  TEST AL,AL
/* 0527f4f0 */  JZ 0x0527f500
/* 0527f4f2 */  MOV dword ptr [0x00000000],0xdeadc0de
/* 0527f4fd */  NOP dword ptr [RAX]
/* 0527f500 */  MOV RAX,qword ptr [0x0f6ffb10]
/* 0527f507 */  MOV RAX,qword ptr [RAX]
/* 0527f50a */  CMP R12,qword ptr [RAX + 0x200]
/* 0527f511 */  JZ 0x0527f300
/* 0527f517 */  MOV RAX,qword ptr [RSP + 0x168]
/* 0527f51f */  ADD RAX,RAX
/* 0527f522 */  MOV RCX,qword ptr [RSP + 0x2228]
/* 0527f52a */  ADD RAX,qword ptr [RCX]
/* 0527f52d */  MOV ECX,dword ptr [RSP + 0x94]
/* 0527f534 */  INC ECX
/* 0527f536 */  MOV RSI,qword ptr [RSP + 0x160]
/* 0527f53e */  MOVZX EDX,word ptr [RAX + RSI*0x2]
/* 0527f542 */  CMP DX,CX
/* 0527f545 */  CMOVG ECX,EDX
/* 0527f548 */  MOV word ptr [RAX + RSI*0x2],CX
/* 0527f54c */  JMP 0x0527f300
/* 0527f551 */  MOV RAX,qword ptr [RSP + 0xf8]
/* 0527f559 */  INC RAX
/* 0527f55c */  ADD dword ptr [RSP + 0x2c],0x4
/* 0527f561 */  CMP RAX,0x4
/* 0527f565 */  JNZ 0x0527ef40
/* 0527f56b */  MOV RDI,qword ptr [RSP + 0x48]
/* 0527f570 */  TEST RDI,RDI
/* 0527f573 */  JZ 0x0527f587
/* 0527f575 */  MOV qword ptr [RSP + 0x50],RDI
/* 0527f57a */  MOV RSI,qword ptr [RSP + 0x58]
/* 0527f57f */  SUB RSI,RDI
/* 0527f582 */  CALL 0x0412a280
/* 0527f587 */  MOV RDI,qword ptr [RSP + 0x30]
/* 0527f58c */  TEST RDI,RDI
/* 0527f58f */  JZ 0x0527f5a3
/* 0527f591 */  MOV qword ptr [RSP + 0x38],RDI
/* 0527f596 */  MOV RSI,qword ptr [RSP + 0x40]
/* 0527f59b */  SUB RSI,RDI
/* 0527f59e */  CALL 0x0412a280
/* 0527f5a3 */  LEA RDI,[RSP + 0x1e0]
/* 0527f5ab */  CALL 0x0d2ecea0
/* 0527f5b0 */  MOV ESI,0x40
/* 0527f5b5 */  MOV RDI,R12
/* 0527f5b8 */  CALL 0x0412a280
/* 0527f5bd */  ADD RSP,0x21e8
/* 0527f5c4 */  POP RBX
/* 0527f5c5 */  POP R12
/* 0527f5c7 */  POP R13
/* 0527f5c9 */  POP R14
/* 0527f5cb */  POP R15
/* 0527f5cd */  POP RBP
/* 0527f5ce */  RET
/* 0527f5cf */  CALL 0x04890760
/* 0527f5d4 */  LEA RDI,[RBX + 0xd1]
/* 0527f5db */  TEST CL,0x1
/* 0527f5de */  JZ 0x0527eea0
/* 0527f5e4 */  MOV RSI,qword ptr [0x0f6eaed8]
/* 0527f5eb */  CALL 0x0eee3000
/* 0527f5f0 */  TEST EAX,EAX
/* 0527f5f2 */  JNZ 0x0527eeb4
/* 0527f5f8 */  MOV qword ptr [RBX + 0xe8],R12
/* 0527f5ff */  MOV qword ptr [0x0f6eaee0],R15
/* 0527f606 */  JMP 0x0527eec7
/* 0527f60b */  MOV EDI,0x8
/* 0527f610 */  XOR ESI,ESI
/* 0527f612 */  CALL 0x0eec74c0
/* 0527f617 */  JMP 0x0527ebc9
/* 0527f61c */  MOV EDI,0x40
/* 0527f621 */  XOR ESI,ESI
/* 0527f623 */  CALL 0x0eec74c0
/* 0527f628 */  JMP 0x0527ebf7
