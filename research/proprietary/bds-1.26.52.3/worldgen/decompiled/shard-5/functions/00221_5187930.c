/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5287930 (ELF vaddr 0x5187930)
 * Label: callee-of:0x5187590
 * Body:  [[05287930, 05287c2c] [05287c30, 05287cca] [05287cd0, 05287e2c] [05287e30, 05287eec] [05287ef0, 0528815e] [05288160, 05288407] [05288410, 05288459]]
 * Ghidra: FUN_05287930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05287930(long param_1,long param_2,int param_3,int param_4,undefined8 param_5,long *param_6
                 ,long param_7)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_00;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 in_stack_ffffffffffffce68 [16];
  undefined8 uStack_3168;
  float fStack_3160;
  float fStack_3158;
  float fStack_3154;
  int iStack_3150;
  int iStack_314c;
  undefined1 auStack_3148 [16];
  long lStack_3130;
  long *plStack_3128;
  int iStack_3120;
  int iStack_311c;
  long *plStack_3118;
  float fStack_3110;
  undefined4 uStack_310c;
  undefined1 auStack_3108 [16];
  undefined1 auStack_30f8 [16];
  ulong uStack_30e8;
  long lStack_30e0;
  long *plStack_30d8;
  long lStack_30d0;
  ulong uStack_30c8;
  undefined8 uStack_30c0;
  long lStack_30b8;
  long lStack_30b0;
  long lStack_30a8;
  long lStack_30a0;
  long lStack_3098;
  long lStack_3090;
  long lStack_3088;
  long lStack_3080;
  undefined1 *puStack_3078;
  long lStack_3070;
  undefined8 uStack_3068;
  undefined8 uStack_3058;
  undefined8 uStack_3040;
  float fStack_3038;
  undefined8 uStack_2038;
  float fStack_2030;
  undefined1 auStack_1034 [4100];
  undefined8 extraout_XMM0_Qb;
  
  plStack_3128 = param_6;
  lStack_30d0 = param_1;
  uStack_30c0 = param_5;
  func_0x0eee2dd0(param_1,0,0x1004);
  uStack_30e8 = (ulong)(uint)(param_3 << 2);
  uStack_30c8 = (ulong)(uint)(param_4 << 2);
  iVar2 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xa8);
  iVar6 = iVar2 >> 0x1f;
  iVar2 = iVar6 - iVar2;
  iVar3 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  fStack_3160 = (float)(param_4 << 2);
  uStack_3168 = CONCAT44((float)(iVar6 - (iVar3 >> 3)),(float)(param_3 << 2));
  func_0x0eee2dd0(auStack_1034,0,0x1004);
  lVar9 = (long)*(int *)(param_2 + 0x240);
  if (0 < lVar9) {
    lVar14 = *(long *)(param_2 + 0x248);
    auVar19 = ZEXT416((uint)_DAT_011983f0);
    do {
      fStack_2030 = auVar19._0_4_ * _DAT_014e8d20;
      uStack_2038 = CONCAT44(auVar19._0_4_ * _UNK_014e8d24,fStack_2030);
      in_stack_ffffffffffffce68 = auVar19;
      func_0x0d33ef10(lVar14,auStack_1034,&uStack_3168,5,0x29,5,&uStack_2038,1,1,1,auVar19);
      auVar19._4_12_ = in_stack_ffffffffffffce68._4_12_;
      auVar19._0_4_ = in_stack_ffffffffffffce68._0_4_ * _DAT_011986e0;
      lVar14 = lVar14 + 0x818;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  func_0x0eee2dd0(&uStack_2038,0,0x1004);
  lVar9 = (long)*(int *)(param_2 + 0x1f0);
  if (0 < lVar9) {
    lVar14 = *(long *)(param_2 + 0x1f8);
    fVar16 = _DAT_011983f0;
    do {
      in_stack_ffffffffffffce68._0_4_ = fVar16;
      fStack_3038 = fVar16 * _DAT_01198354;
      uStack_3040 = CONCAT44(fStack_3038,fStack_3038);
      func_0x0d33ef10(lVar14,&uStack_2038,&uStack_3168,5,0x29,5,&uStack_3040,1,1,1);
      fVar16 = in_stack_ffffffffffffce68._0_4_ * _DAT_011986e0;
      lVar14 = lVar14 + 0x818;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  func_0x0eee2dd0(&uStack_3040,0,0x1004);
  lVar9 = (long)*(int *)(param_2 + 0x218);
  if (0 < lVar9) {
    lVar14 = *(long *)(param_2 + 0x220);
    fVar16 = _DAT_011983f0;
    do {
      in_stack_ffffffffffffce68._0_4_ = fVar16;
      fStack_3110 = fVar16 * _DAT_01198354;
      plStack_3118 = (long *)CONCAT44(fStack_3110,fStack_3110);
      func_0x0d33ef10(lVar14,&uStack_3040,&uStack_3168,5,0x29,5,&plStack_3118,1,1,1);
      fVar16 = in_stack_ffffffffffffce68._0_4_ * _DAT_011986e0;
      lVar14 = lVar14 + 0x818;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  plStack_30d8 = plStack_3128 + 0x2e;
  lStack_30e0 = 0;
  lVar9 = 0;
  do {
    fStack_3158 = ((float)((uint)lStack_30e0 & 0xff) + (float)uStack_3168) * _DAT_011987f8;
    auStack_30f8 = ZEXT416((uint)fStack_3158);
    iVar3 = (int)uStack_30e8 + (uint)lStack_30e0;
    fStack_3158 = fStack_3158 * _DAT_0119858c;
    iStack_3150 = iVar3 * 4 >> 4;
    lStack_3130 = (long)iVar3;
    lStack_30a8 = 0;
    do {
      iVar3 = (int)uStack_30c8 + (uint)lStack_30a8;
      lStack_30a0 = (long)iVar3;
      fStack_3154 = ((float)((uint)lStack_30a8 & 0xff) + fStack_3160) * _DAT_011987f8 *
                    _DAT_0119858c;
      lStack_30b0 = (long)(int)lVar9;
      iStack_314c = iVar3 * 4 >> 4;
      lStack_3070 = lStack_30d0 + lStack_30b0 * 4;
      lStack_3088 = (long)plStack_30d8 + lStack_30b0 * 4;
      lStack_3090 = param_7 + lStack_30b0 * 4;
      puStack_3078 = auStack_1034 + lStack_30b0 * 4;
      lStack_3098 = (long)&uStack_3040 + lStack_30b0 * 4;
      lStack_3080 = (long)&uStack_2038 + lStack_30b0 * 4;
      iVar3 = -8;
      uVar10 = 0;
      lStack_30b8 = lVar9;
      do {
        fVar16 = (float)((uint)uVar10 & 0xff);
        auStack_3148._0_4_ = fVar16;
        auVar19 = ZEXT416((uint)((uStack_3168._4_4_ + fVar16) * _DAT_01198494));
        iVar6 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xa8);
        iVar12 = iVar6 >> 0x1f;
        iVar6 = iVar12 - iVar6;
        iVar2 = iVar6 + 7;
        if (-1 < iVar6) {
          iVar2 = iVar6;
        }
        auVar20._0_8_ = func_0x05259f00(*(undefined8 *)(param_2 + 0xc90),uVar10 & 0xffffffff);
        auVar20._8_8_ = extraout_XMM0_Qb;
        iVar8 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xaa);
        iVar4 = iVar8 >> 0x1f;
        iVar8 = iVar4 - iVar8;
        iVar6 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        iVar7 = (int)*(short *)(*(long *)(param_2 + 0x28) + 0xa8);
        iVar11 = iVar7 >> 0x1f;
        iVar7 = iVar11 - iVar7;
        iVar8 = iVar7 + 7;
        if (-1 < iVar7) {
          iVar8 = iVar7;
        }
        fVar16 = (float)((iVar4 - (iVar6 >> 3)) + ((iVar8 >> 3) - iVar11) + iVar3) * _DAT_011986e0;
        auVar21 = ZEXT416((uint)_DAT_01198aa4);
        if ((0.0 <= fVar16) && (auVar21 = auVar20, fVar16 <= _DAT_011983f0)) {
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = ((float)auVar20._0_8_ + _DAT_01198400) * fVar16 + _DAT_01198aa4;
        }
        uVar15 = -(uint)(_DAT_011983f0 < (float)auStack_3148._0_4_ / _DAT_01198af0);
        auVar23._0_4_ =
             ~uVar15 & (uint)((auVar21._0_4_ + _DAT_01198c1c) *
                              ((float)auStack_3148._0_4_ / _DAT_01198af0) + _DAT_01198358);
        auVar23._4_4_ = auVar21._4_4_;
        auVar23._8_4_ = auVar21._8_4_;
        auVar23._12_4_ = auVar21._12_4_;
        auStack_3148 = ZEXT416(uVar15 & (uint)auVar21._0_4_) | auVar23;
        iStack_3120 = iStack_3150;
        iStack_311c = iStack_314c;
        func_0x0525af30(&plStack_3118,*(undefined8 *)(param_2 + 0xca8),&iStack_3120);
        if (plStack_3118 == (long *)0x0) {
LAB_05288150:
          if (CONCAT44(uStack_310c,fStack_3110) != 0) goto LAB_05288175;
LAB_0528818b:
          if (_DAT_01198730 <= (float)auStack_3148._0_4_) {
LAB_0528819d:
            fVar17 = (float)func_0x0d3414e0(*(undefined8 *)(param_7 + 0x3118));
            lVar9 = lStack_3090;
            fVar16 = _DAT_011983f0;
            if (fVar17 <= _DAT_011983f0) {
              fVar16 = fVar17;
            }
            *(uint *)(lStack_3090 + uVar10 * 4) =
                 -(uint)(fVar17 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)(fVar17 < _DAT_011985d4) & (uint)fVar16;
            auStack_3108._4_12_ = auVar19._4_12_;
            auStack_3108._0_4_ = auVar19._0_4_ * _DAT_011987f8;
            fVar17 = (float)func_0x0d3414e0(*(long *)(param_7 + 0x3118) + 0x38);
            fVar16 = _DAT_011983f0;
            if (fVar17 <= _DAT_011983f0) {
              fVar16 = fVar17;
            }
            *(uint *)(lVar9 + 0x1004 + uVar10 * 4) =
                 -(uint)(fVar17 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)(fVar17 < _DAT_011985d4) & (uint)fVar16;
            fVar17 = (float)func_0x0d3414e0(*(long *)(param_7 + 0x3118) + 0x70);
            plVar1 = plStack_3128;
            fVar16 = _DAT_011983f0;
            if (fVar17 <= _DAT_011983f0) {
              fVar16 = fVar17;
            }
            *(uint *)(lVar9 + 0x2008 + uVar10 * 4) =
                 -(uint)(fVar17 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)(fVar17 < _DAT_011985d4) & (uint)fVar16;
            uStack_3058 = func_0x0d3414e0(*plStack_3128);
            auStack_3108._0_8_ = func_0x0d3414e0(*plVar1 + 0x38);
            auStack_3108._8_8_ = extraout_XMM0_Qb_00;
            uStack_3068 = func_0x0d3414e0(*plVar1 + 0x70);
            fVar18 = (float)func_0x0d3414e0(*plVar1 + 0xa8);
            fVar22 = _DAT_011985d4;
            fVar16 = _DAT_011983f0;
            fVar17 = _DAT_011983f0;
            if ((float)uStack_3058 <= _DAT_011983f0) {
              fVar17 = (float)uStack_3058;
            }
            *(uint *)(lStack_3088 + uVar10 * 4) =
                 -(uint)((float)uStack_3058 < _DAT_011985d4) & (uint)_DAT_011985d4 |
                 ~-(uint)((float)uStack_3058 < _DAT_011985d4) & (uint)fVar17;
            fVar17 = fVar16;
            if ((float)auStack_3108._0_4_ <= fVar16) {
              fVar17 = (float)auStack_3108._0_4_;
            }
            *(uint *)(lStack_3088 + 0x1004 + uVar10 * 4) =
                 -(uint)((float)auStack_3108._0_4_ < fVar22) & (uint)fVar22 |
                 ~-(uint)((float)auStack_3108._0_4_ < fVar22) & (uint)fVar17;
            fVar17 = fVar16;
            if ((float)uStack_3068 <= fVar16) {
              fVar17 = (float)uStack_3068;
            }
            *(uint *)(lStack_3088 + 0x2008 + uVar10 * 4) =
                 -(uint)((float)uStack_3068 < fVar22) & (uint)fVar22 |
                 ~-(uint)((float)uStack_3068 < fVar22) & (uint)fVar17;
            if (fVar18 <= fVar16) {
              fVar16 = fVar18;
            }
            *(uint *)(lStack_3088 + 0x300c + uVar10 * 4) =
                 -(uint)(fVar18 < fVar22) & (uint)fVar22 | ~-(uint)(fVar18 < fVar22) & (uint)fVar16;
          }
        }
        else {
          iVar4 = (int)(short)plStack_3118[4] >> 0x1f;
          iVar8 = iVar4 - (short)plStack_3118[4];
          iVar6 = iVar8 + 7;
          if (-1 < iVar8) {
            iVar6 = iVar8;
          }
          uVar15 = (iVar12 - (iVar2 >> 3)) + ((iVar6 >> 3) - iVar4) + (uint)uVar10;
          if (uVar15 < 0x29) {
            pfVar5 = (float *)((lStack_30a0 - *(int *)((long)plStack_3118 + 0x1c)) * 0x198 +
                              (lStack_3130 - (int)plStack_3118[3]) * 0x660 + *plStack_3118);
            fVar16 = pfVar5[(ulong)uVar15 + 2];
            if ((fVar16 == _DAT_011987f4) && (!NAN(fVar16) && !NAN(_DAT_011987f4)))
            goto LAB_05288150;
            fVar22 = *pfVar5 / _DAT_01198af0;
            fVar17 = _DAT_011983f0;
            if (fVar22 <= _DAT_011983f0) {
              fVar17 = fVar22;
            }
            auStack_3148._0_4_ =
                 ((float)auStack_3148._0_4_ - fVar16 * _DAT_0119834c) *
                 (float)(~-(uint)(fVar22 < _DAT_011983fc) & (uint)fVar17) + fVar16 * _DAT_0119834c;
          }
          if (CONCAT44(uStack_310c,fStack_3110) == 0) goto LAB_0528818b;
LAB_05288175:
          plVar13 = (long *)CONCAT44(uStack_310c,fStack_3110);
          LOCK();
          plVar1 = plVar13 + 1;
          lVar9 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar9 != 0) goto LAB_0528818b;
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN_0412c2d0(plVar13);
          if (_DAT_01198730 <= (float)auStack_3148._0_4_) goto LAB_0528819d;
        }
        *(undefined4 *)(lStack_3070 + uVar10 * 4) = auStack_3148._0_4_;
        iVar3 = iVar3 + -1;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 != 0x29);
      lStack_30a8 = lStack_30a8 + 1;
      lVar9 = lStack_30b0 + uVar10;
    } while (lStack_30a8 != 5);
    lStack_30e0 = lStack_30e0 + 1;
    lVar9 = (long)(int)lStack_30b8 + uVar10;
    if (lStack_30e0 == 5) {
      return;
    }
  } while( true );
}


