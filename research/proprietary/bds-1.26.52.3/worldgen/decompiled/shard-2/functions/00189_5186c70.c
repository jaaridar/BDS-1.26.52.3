/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286c70 (ELF vaddr 0x5186c70)
 * Label: callee-of:0x5186c40
 * Body:  [[05286c70, 052871ae] [052871b0, 05287517]]
 * Ghidra: FUN_05286c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05286c70(uint *param_1,ulong param_2,long param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [12];
  long *plVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong uStack_170;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  float fStack_120;
  uint uStack_11c;
  int iStack_118;
  float fStack_114;
  float fStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_d8 [16];
  uint *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined4 *puStack_50;
  undefined1 auStack_48 [16];
  
  uStack_a8 = param_5;
  plStack_98 = param_4;
  if (PTR__ZTHN11ChunkSource17gPerfIsClientSideE_0f53c8c0 != (undefined *)0x0) {
    func_0x0eee3820();
  }
  uStack_68 = *(undefined1 *)(*in_FS_OFFSET + -0xb67);
  uStack_78 = &UNK_011b8ea4;
  uStack_70 = &UNK_01412d7a;
  lStack_60 = func_0x0417cc60();
  puStack_80 = &UNK_0f3ef960;
  uVar10 = (int)(param_2 >> 0x1c) >> 2 & 0xfffffffc;
  uVar21 = (ulong)uVar10;
  uVar18 = (int)param_2 * 4 - 2;
  uVar19 = (ulong)uVar18;
  uVar10 = uVar10 - 2;
  uStack_170 = (ulong)uVar10;
  *(ulong *)param_1 = CONCAT44(uVar10,uVar18);
  param_1[2] = 8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xa00);
  uVar20 = uVar19;
  if (uVar11 == 0) goto LAB_05287507;
  do {
    iVar14 = (int)param_2 * 4;
    puStack_c0 = param_1 + 4;
    *(ulong *)(param_1 + 4) = uVar11;
    lVar17 = uVar11 + 0xa00;
    *(long *)(param_1 + 8) = lVar17;
    auStack_d8._0_8_ = uVar11;
    func_0x0eee2dd0(uVar11,0,0xa00);
    *(long *)(param_1 + 6) = lVar17;
    iVar4 = (int)uVar21;
    iStack_10c = iVar4 + 5;
    iStack_118 = iVar14 + 5;
    lStack_88 = param_3 + 0x2b8;
    lStack_a0 = param_3 + 0x150;
    lStack_90 = param_3 + 0x38;
    uVar16 = (long)(iVar14 + -4) + 2;
    uStack_b0 = (ulong)(iVar4 - 3);
    uStack_b8 = (long)iVar4 - 2;
    uVar10 = 8;
LAB_05286e20:
    uVar18 = (uint)uVar16;
    fStack_114 = (float)(int)uVar18 * _DAT_011987f8 * _DAT_01198790;
    uVar11 = uStack_b0 & 0xffffffff;
    uVar21 = uStack_b8;
    while( true ) {
      uVar19 = uVar21 << 0x20 | uVar16 & 0xffffffff;
      uStack_58 = uVar19;
      func_0x052580c0(&uStack_108,param_3,&uStack_58);
      uStack_128 = uStack_100;
      uStack_124 = uStack_f8;
      fStack_120 = ((float)((uint)((float)(uStack_fc & _DAT_014e7ba0) + _DAT_0119852c) &
                           _DAT_014e7ba0) + _DAT_011988a8) * _DAT_01198930;
      uStack_11c = uStack_fc;
      puStack_50 = &uStack_128;
      param_2 = uVar20;
      if ((ulong)*(uint *)(param_3 + 0x330) == 0xffffffff) break;
      uStack_130 = &puStack_50;
      fVar22 = (float)(**(code **)(&UNK_0ef53670 + (ulong)*(uint *)(param_3 + 0x330) * 8))
                                (&uStack_130,lStack_88);
      fVar23 = 0.0;
      uVar15 = (uint)uVar21;
      if (0.0 < fVar22) {
        fVar23 = (float)func_0x0d3414e0(fStack_114,lStack_a0);
        fVar23 = (float)(~-(uint)(0.0 < fVar23) & (uint)(fVar22 * _DAT_011986e0) |
                        (uint)fVar22 & -(uint)(0.0 < fVar23)) * fVar23;
      }
      uVar8 = uStack_108;
      uStack_f0._4_4_ = fVar23;
      uStack_e8 = func_0x0d3414e0(param_3);
      uStack_e4 = func_0x0d3414e0(uVar8,lStack_90);
      fVar9 = uStack_f0._4_4_;
      fVar23 = (float)uStack_f0;
      fVar22 = fStack_f4;
      auVar7._4_4_ = (float)uStack_f0;
      auVar7._0_4_ = fStack_f4;
      auVar7._8_4_ = uStack_f0._4_4_;
      auVar7._12_4_ = uStack_e8;
      auVar5._4_8_ = extraout_XMM1_Qb;
      auVar5._0_4_ = (float)uStack_f0;
      auVar27._0_8_ = auVar5._0_8_ << 0x20;
      auVar27._8_4_ = uStack_f0._4_4_;
      auVar27._12_4_ = uStack_e8;
      auVar28._8_8_ = auVar7._8_8_;
      auVar28._0_8_ = auVar27._8_8_;
      if (plStack_98 == (long *)0x0) {
        uStack_130 = (undefined4 **)CONCAT44((int)(uVar15 * 4) >> 4,(int)(uVar18 * 4) >> 4);
        FUN_0525af30(&uStack_128,uStack_a8,&uStack_130);
        plVar6 = (long *)CONCAT44(uStack_124,uStack_128);
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)CONCAT44(uStack_11c,fStack_120);
        }
        else {
          lVar12 = ((long)(int)uVar18 - (long)(int)plVar6[3]) * 0x660 + *plVar6;
          lVar17 = ((long)(int)uVar15 - (long)*(int *)((long)plVar6 + 0x1c)) * 0x198;
          fVar24 = *(float *)(lVar17 + 4 + lVar12);
          if ((fVar24 != _DAT_011987f4) || (NAN(fVar24) || NAN(_DAT_011987f4))) {
            fVar25 = *(float *)(lVar12 + lVar17) / _DAT_011988e8;
            fVar26 = _DAT_011983f0;
            if (fVar25 <= _DAT_011983f0) {
              fVar26 = fVar25;
            }
            fVar26 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar26);
            auStack_d8 = ZEXT416((uint)(fVar26 * _DAT_01198af0 * fVar26 -
                                       (fVar26 + fVar26) * fVar26 * fVar26));
            fVar24 = (float)(int)(short)(int)fVar24 + _DAT_011986e0;
            fVar26 = (float)func_0x0eee37e0();
            fVar26 = (float)func_0x0eee37e0(fVar26 + _DAT_01198494);
            fVar24 = (fVar26 * _DAT_01198af0 * fVar26 +
                     (fVar24 + _DAT_011987cc) * _DAT_01198c60 +
                     (fVar24 + _DAT_01198854) * _DAT_01198930 * fVar26) /
                     ((fVar26 * _DAT_01198930 + _DAT_01198c60) * _DAT_01198c54);
            fVar22 = fVar24 + (float)auStack_d8._0_4_ * (fVar22 - fVar24);
            fVar23 = _UNK_014e91b4 + (float)auStack_d8._0_4_ * (fVar23 + _DAT_01198b48);
            auVar28._0_4_ = fVar9 * (float)auStack_d8._0_4_ + _DAT_011983fc;
            param_2 = uVar16;
          }
          plVar6 = (long *)CONCAT44(uStack_11c,fStack_120);
        }
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar17 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar17 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_0412c2d0(plVar6);
            param_2 = uVar16;
          }
        }
        uStack_f0._4_4_ = auVar28._0_4_;
        uVar20 = (ulong)*param_1;
        uStack_170 = (ulong)param_1[1];
        uVar10 = param_1[2];
        lVar17 = *(long *)(param_1 + 6);
        lVar12 = *(long *)(param_1 + 4);
      }
      else {
        lVar12 = ((ulong)(uVar18 & 3) - (long)(int)plStack_98[3]) * 0x660 + *plStack_98;
        lVar13 = ((ulong)(uVar15 & 3) - (long)*(int *)((long)plStack_98 + 0x1c)) * 0x198;
        fVar24 = *(float *)(lVar13 + 4 + lVar12);
        if ((fVar24 != _DAT_011987f4) || (NAN(fVar24) || NAN(_DAT_011987f4))) {
          fVar25 = *(float *)(lVar12 + lVar13) / _DAT_011988e8;
          fVar26 = _DAT_011983f0;
          if (fVar25 <= _DAT_011983f0) {
            fVar26 = fVar25;
          }
          fVar26 = (float)(~-(uint)(fVar25 < 0.0) & (uint)fVar26);
          auStack_48 = ZEXT416((uint)(fVar26 * _DAT_01198af0 * fVar26 -
                                     (fVar26 + fVar26) * fVar26 * fVar26));
          fStack_110 = (float)(int)(short)(int)fVar24 + _DAT_011986e0;
          fVar24 = (float)func_0x0eee37e0();
          fVar24 = (float)func_0x0eee37e0(fVar24 + _DAT_01198494);
          fStack_f4 = (fVar24 * _DAT_01198af0 * fVar24 +
                      (fStack_110 + _DAT_011987cc) * _DAT_01198c60 +
                      (fStack_110 + _DAT_01198854) * _DAT_01198930 * fVar24) /
                      ((fVar24 * _DAT_01198930 + _DAT_01198c60) * _DAT_01198c54);
          fStack_f4 = fStack_f4 + (float)auStack_48._0_4_ * (fVar22 - fStack_f4);
          uStack_f0._0_4_ = _UNK_014e91b4 + (float)auStack_48._0_4_ * (fVar23 + _DAT_01198b48);
          auVar28._0_4_ = fVar9 * (float)auStack_48._0_4_ + _DAT_011983fc;
        }
        uStack_f0._4_4_ = auVar28._0_4_;
        lVar12 = auStack_d8._0_8_;
        fVar22 = fStack_f4;
        fVar23 = (float)uStack_f0;
      }
      uVar19 = ((uVar16 - (long)(int)uVar20) * (long)(int)uVar10 - (long)(int)uStack_170) + uVar21;
      fStack_f4 = fVar22;
      uStack_f0._0_4_ = fVar23;
      if ((ulong)((lVar17 - lVar12 >> 3) * -0x3333333333333333) <= uVar19) {
        func_0x0d309550();
        uVar19 = uVar20;
        break;
      }
      *(ulong *)(lVar12 + 0x20 + uVar19 * 0x28) = CONCAT44(uStack_e4,uStack_e8);
      puVar3 = (undefined8 *)(lVar12 + 0x10 + uVar19 * 0x28);
      *puVar3 = CONCAT44(fVar22,uStack_f8);
      puVar3[1] = CONCAT44(uStack_f0._4_4_,fVar23);
      auStack_d8._0_8_ = lVar12;
      puVar2 = (undefined4 *)(lVar12 + uVar19 * 0x28);
      *puVar2 = uStack_108;
      puVar2[1] = uStack_104;
      puVar2[2] = uStack_100;
      puVar2[3] = uStack_fc;
      uVar15 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar15;
      uVar21 = uVar21 + 1;
      if (iStack_10c <= (int)uVar15) goto code_r0x0528748f;
    }
    func_0x04931450();
    uVar11 = uStack_170;
    uStack_170 = uVar16 & 0xffffffff;
LAB_05287507:
    func_0x0eec74c0(0xa00);
    uVar20 = uVar19;
  } while( true );
code_r0x0528748f:
  uVar16 = uVar16 + 1;
  if (iStack_118 <= (int)uVar18) {
    puStack_80 = &UNK_0f3ef960;
    uStack_108 = (undefined4)uStack_78;
    uStack_104 = uStack_78._4_4_;
    uStack_100 = (undefined4)uStack_70;
    uStack_fc = uStack_70._4_4_;
    uStack_f8 = CONCAT31(uStack_f8._1_3_,uStack_68);
    uStack_f0 = func_0x0417cc60();
    uStack_f0 = uStack_f0 - lStack_60;
    func_0x0cad8200(&uStack_108);
    return;
  }
  goto LAB_05286e20;
}


