/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5258c60 (ELF vaddr 0x5158c60)
 * Label: callee-of:0x5188b10
 * Body:  [[05258c60, 05258d89] [05258d90, 05258de1] [05258df0, 05258e42] [05258e50, 05258fe6] [05258ff0, 05259062] [05259070, 052590d8] [052590e0, 0525994d]]
 * Ghidra: FUN_05258c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05258c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 ulong *param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  bool bVar30;
  char cVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar40;
  float fVar41;
  float fVar42;
  int iStack_f8;
  undefined8 uStack_f0;
  uint uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  ulong uStack_88;
  ulong uStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char cStack_5c;
  ulong *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar39 = (undefined4)((ulong)param_3 >> 0x20);
  uVar11 = *(uint *)((long)param_5 + 4);
  if ((int)uVar11 < -0x36) {
    *(undefined8 *)((long)param_4 + 0x1c) = 0xffffffca;
    *(undefined1 *)((long)param_4 + 0x24) = 1;
    *(bool *)((long)param_4 + 0x25) = uVar11 == 0xffffffc9;
  }
  else {
    uVar23 = *param_5;
    uVar11 = (uint)param_5[1];
    uVar28 = uVar23 >> 0x20;
    iVar12 = (int)(uVar23 >> 0x20) + 1;
    iVar20 = (int)uVar23 + -5;
    iVar32 = iVar20 >> 0x1f;
    iVar20 = iVar32 - iVar20;
    iVar13 = iVar20 + 0xf;
    if (-1 < iVar20) {
      iVar13 = iVar20;
    }
    uStack_50 = (ulong)(uint)(iVar32 - (iVar13 >> 4));
    iVar20 = iVar12 >> 0x1f;
    iVar13 = (int)((ulong)((long)(iVar20 - iVar12) * -0x2aaaaaab) >> 0x20);
    uVar24 = (iVar20 - (iVar13 >> 0x1f)) + (iVar13 >> 1);
    uStack_48 = (ulong)uVar24;
    iVar12 = (int)(uVar11 - 5) >> 0x1f;
    iVar20 = iVar12 - (uVar11 - 5);
    iVar13 = iVar20 + 0xf;
    if (-1 < iVar20) {
      iVar13 = iVar20;
    }
    iVar12 = iVar12 - (iVar13 >> 4);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    lStack_e0 = (long)iVar12;
    uVar15 = 0xffffffffffffffff;
    uVar10 = CONCAT71((int7)(int3)((uint)iVar12 >> 8),1);
    uStack_88 = 0;
    iStack_f8 = 0;
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    lVar18 = 0;
    uVar34 = 0xffffffffffffffff;
    auStack_a8._0_8_ = 0xffffffffffffffff;
    do {
      uVar7 = (undefined4)uVar10;
      iVar13 = (int)(lVar18 + uStack_50);
      uStack_40 = (lVar18 + uStack_50 & 0xffffffff) * 0x2fc20f00000000;
      iStack_70 = iVar13 * 0x10;
      uVar16 = 0xffffffff;
      do {
        uStack_38 = uVar16;
        uVar8 = uVar24 + (int)uStack_38;
        uStack_b0 = (long)(CONCAT44(0,uVar8) << 0x20 ^ uStack_40) >> 0x20;
        auStack_98._0_8_ = CONCAT44(0,uVar8);
        lVar18 = 0;
        uVar16 = uVar15;
        bVar6 = true;
        do {
          bVar30 = bVar6;
          iVar12 = (int)(lVar18 + lStack_e0);
          lVar22 = (long)(int)(((iVar13 - (int)param_4[5]) * (int)param_4[7] +
                               (uVar8 - *(int *)((long)param_4 + 0x2c))) *
                               *(int *)((long)param_4 + 0x3c) + (iVar12 - (int)param_4[6]));
          puVar1 = (ulong *)(param_4[8] + lVar22 * 0x14);
          if (((*(int *)(param_4[8] + lVar22 * 0x14) == 0x7fffffff) &&
              (*(int *)((long)puVar1 + 4) == 0x7fffffff)) && ((int)puVar1[1] == 0x7fffffff)) {
            uVar23 = (lVar18 + lStack_e0) * 0x6ebfff5 ^ uStack_b0;
            uVar28 = (long)((uVar23 * 0x285b825 + 0xb) * uVar23) >> 0x10 ^
                     *(ulong *)(*param_4 + 0xe8);
            uVar23 = *(ulong *)(*param_4 + 0xf0);
            if (uVar28 == 0 && uVar23 == 0) {
              uVar23 = 0x6a09e667f3bcc909;
              uVar28 = 0x9e3779b97f4a7c15;
            }
            uVar17 = uVar23 ^ uVar28;
            uVar15 = uVar17 << 0x15 ^ (uVar28 << 0x31 | uVar28 >> 0xf) ^ uVar17;
            uVar17 = uVar17 << 0x1c | uVar17 >> 0x24;
            lVar18 = (ulong)(((int)(uVar28 + uVar23) * 0x20000 | (uint)(uVar28 + uVar23 >> 0x2f)) +
                            (int)uVar28) * 10;
            uVar11 = (uint)lVar18;
            while (iVar20 = (int)uVar15, uVar11 < 6) {
              lVar18 = uVar15 + uVar17;
              uVar17 = uVar17 ^ uVar15;
              uVar15 = uVar17 << 0x15 ^ (uVar15 << 0x31 | uVar15 >> 0xf) ^ uVar17;
              uVar17 = uVar17 << 0x1c | uVar17 >> 0x24;
              lVar18 = (ulong)(((int)lVar18 * 0x20000 | (uint)((ulong)lVar18 >> 0x2f)) + iVar20) *
                       10;
              uVar11 = (uint)lVar18;
            }
            uVar11 = ((int)(uVar15 + uVar17) * 0x20000 | (uint)(uVar15 + uVar17 >> 0x2f)) + iVar20;
            uVar17 = uVar17 ^ uVar15;
            uVar23 = uVar17 << 0x15 ^ (uVar15 << 0x31 | uVar15 >> 0xf) ^ uVar17;
            uVar28 = uVar17 << 0x1c | uVar17 >> 0x24;
            while( true ) {
              if (((ulong)uVar11 * 9 & 0xfffffffc) != 0) break;
              uVar11 = ((int)(uVar23 + uVar28) * 0x20000 | (uint)(uVar23 + uVar28 >> 0x2f)) +
                       (int)uVar23;
              uVar28 = uVar28 ^ uVar23;
              uVar23 = uVar28 << 0x15 ^ (uVar23 << 0x31 | uVar23 >> 0xf) ^ uVar28;
              uVar28 = uVar28 << 0x1c | uVar28 >> 0x24;
            }
            lVar22 = (ulong)(((int)(uVar23 + uVar28) * 0x20000 | (uint)(uVar23 + uVar28 >> 0x2f)) +
                            (int)uVar23) * 10;
            if ((uint)lVar22 < 6) {
              uVar28 = uVar28 ^ uVar23;
              uVar15 = uVar28 << 0x1c | uVar28 >> 0x24;
              uVar28 = uVar28 << 0x15 ^ (uVar23 << 0x31 | uVar23 >> 0xf) ^ uVar28;
              do {
                lVar22 = uVar15 + uVar28;
                iVar20 = (int)uVar28;
                uVar15 = uVar15 ^ uVar28;
                uVar28 = uVar15 << 0x15 ^ (uVar28 << 0x31 | uVar28 >> 0xf) ^ uVar15;
                uVar15 = uVar15 << 0x1c | uVar15 >> 0x24;
                lVar22 = (ulong)(((int)lVar22 * 0x20000 | (uint)((ulong)lVar22 >> 0x2f)) + iVar20) *
                         10;
              } while ((uint)lVar22 < 6);
            }
            uVar25 = (int)((ulong)lVar18 >> 0x20) + iStack_70;
            uVar17 = (ulong)uVar25;
            uVar11 = (int)((ulong)uVar11 * 9 >> 0x20) + uVar8 * 0xc;
            uVar35 = (ulong)uVar11;
            uVar14 = iVar12 << 4 | (uint)((ulong)lVar22 >> 0x20);
            *puVar1 = CONCAT44(uVar11,uVar25);
            *(uint *)(puVar1 + 1) = uVar14;
            uVar23 = (ulong)(uint)*param_5;
            uVar28 = (ulong)*(uint *)((long)param_5 + 4);
            uVar11 = (uint)param_5[1];
          }
          else {
            uVar17 = *puVar1;
            uVar35 = uVar17 >> 0x20;
            uVar14 = (uint)puVar1[1];
          }
          lVar22 = (long)(int)uVar17 - (long)(int)uVar23;
          lVar18 = (long)(int)uVar35 - (long)(int)uVar28;
          uVar33 = ((long)(int)uVar14 - (long)(int)uVar11) * ((long)(int)uVar14 - (long)(int)uVar11)
                   + lVar18 * lVar18 + lVar22 * lVar22;
          if (uVar16 < uVar33) {
            uVar15 = uVar16;
            if (uVar34 < uVar33) {
              if (uVar33 <= (ulong)auStack_a8._0_8_) {
                uStack_d8 = uVar17 & 0xffffffff | uVar35 << 0x20;
                auStack_a8._0_8_ = uVar33;
                uStack_d0 = uVar14;
              }
            }
            else {
              uStack_d0 = uStack_e8;
              uStack_d8 = uStack_f0;
              uStack_f0 = uVar17 & 0xffffffff | uVar35 << 0x20;
              auStack_a8._0_8_ = uVar34;
              uVar34 = uVar33;
              uStack_e8 = uVar14;
            }
          }
          else {
            uStack_d0 = uStack_e8;
            uStack_d8 = uStack_f0;
            uStack_f0 = uStack_80;
            uStack_e8 = uStack_78;
            uStack_80 = uVar17 & 0xffffffff | uVar35 << 0x20;
            uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)uVar17);
            auStack_a8._0_8_ = uVar34;
            uVar15 = uVar33;
            uVar34 = uVar16;
            iStack_f8 = (int)uVar35;
            uStack_88 = (ulong)uVar14;
            uStack_78 = uVar14;
          }
          lVar18 = 1;
          uVar16 = uVar15;
          bVar6 = false;
        } while (bVar30);
        uVar8 = (int)uStack_38 + 1;
        uVar16 = (ulong)uVar8;
      } while (uVar8 != 2);
      lVar18 = 1;
      uStack_74._0_1_ = (char)uVar10;
      uVar10 = 0;
    } while ((char)uStack_74 != '\0');
    iVar12 = ((int)(float)uStack_c8 >> 0x1f) - (int)(float)uStack_c8;
    iVar13 = iVar12 + 0xf;
    if (-1 < iVar12) {
      iVar13 = iVar12;
    }
    iVar12 = (int)((ulong)((long)((iStack_f8 >> 0x1f) - iStack_f8) * -0x2aaaaaab) >> 0x20);
    iVar32 = (int)uStack_88 >> 0x1f;
    iVar21 = iVar32 - (int)uStack_88;
    iVar20 = iVar21 + 0xf;
    if (-1 < iVar21) {
      iVar20 = iVar21;
    }
    lVar18 = (long)((((((int)(float)uStack_c8 >> 0x1f) - (iVar13 >> 4)) - (int)param_4[5]) *
                     (int)param_4[7] +
                    ((((iVar12 >> 1) - (iVar12 >> 0x1f)) + (iStack_f8 >> 0x1f)) -
                    *(int *)((long)param_4 + 0x2c))) * *(int *)((long)param_4 + 0x3c) +
                   ((iVar32 - (iVar20 >> 4)) - (int)param_4[6]));
    puVar2 = (undefined8 *)(param_4[8] + lVar18 * 0x14);
    uVar11 = *(uint *)(param_4[8] + 0xc + lVar18 * 0x14);
    uStack_74 = uVar7;
    puStack_58 = param_5;
    if (uVar11 == 0x7fffffff) {
      func_0x05259950(&uStack_6c,param_4,&uStack_80);
      *puVar2 = CONCAT44(uStack_68,uStack_6c);
      puVar2[1] = CONCAT44(uStack_60,uStack_64);
      *(char *)(puVar2 + 2) = cStack_5c;
      uVar11 = *(uint *)((long)puVar2 + 0xc);
      cVar19 = cStack_5c;
    }
    else {
      cVar19 = *(char *)(puVar2 + 2);
    }
    auVar5 = auStack_98;
    auVar4 = auStack_a8;
    auStack_98._4_4_ = 0;
    auStack_98._0_4_ = uVar11;
    lVar18 = uVar15 - uVar34;
    if ((long)uVar15 < (long)uVar34) {
      lVar18 = uVar34 - uVar15;
    }
    fVar37 = (float)lVar18 * _DAT_011988f4 + _DAT_011983f0;
    *(bool *)((long)param_4 + 0x25) = _DAT_01198450 < fVar37;
    *(uint *)((long)param_4 + 0x1c) = uVar11;
    *(char *)((long)param_4 + 0x24) = cVar19;
    fVar41 = 0.0;
    if (_DAT_011985d4 < fVar37) {
      lStack_e0 = CONCAT71(lStack_e0._1_7_,cVar19);
      auStack_98._8_8_ = auVar5._8_8_;
      uStack_c8 = uVar15 - auStack_a8._0_8_;
      if ((long)uVar15 < (long)auStack_a8._0_8_) {
        uStack_c8 = auStack_a8._0_8_ - uVar15;
      }
      lVar18 = uVar34 - auStack_a8._0_8_;
      if ((long)uVar34 < (long)auStack_a8._0_8_) {
        lVar18 = auStack_a8._0_8_ - uVar34;
      }
      iVar12 = ((int)uStack_f0 >> 0x1f) - (int)uStack_f0;
      iVar13 = iVar12 + 0xf;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      iVar12 = (int)((ulong)((long)((uStack_f0._4_4_ >> 0x1f) - uStack_f0._4_4_) * -0x2aaaaaab) >>
                    0x20);
      iVar32 = ((int)uStack_e8 >> 0x1f) - uStack_e8;
      iVar20 = iVar32 + 0xf;
      if (-1 < iVar32) {
        iVar20 = iVar32;
      }
      iVar32 = (int)param_4[5];
      iVar21 = *(int *)((long)param_4 + 0x2c);
      iVar36 = (int)param_4[6];
      iVar27 = (int)param_4[7];
      iVar26 = *(int *)((long)param_4 + 0x3c);
      lVar29 = (long)((((((int)uStack_f0 >> 0x1f) - (iVar13 >> 4)) - iVar32) * iVar27 +
                      ((((iVar12 >> 1) - (iVar12 >> 0x1f)) + (uStack_f0._4_4_ >> 0x1f)) - iVar21)) *
                      iVar26 + ((((int)uStack_e8 >> 0x1f) - (iVar20 >> 4)) - iVar36));
      lVar22 = param_4[8];
      puVar3 = (undefined4 *)(lVar22 + lVar29 * 0x14);
      auStack_a8._0_4_ = *(uint *)(lVar22 + 0xc + lVar29 * 0x14);
      auStack_a8._4_4_ = 0;
      uStack_88 = CONCAT44(uStack_88._4_4_,fVar37);
      if (auStack_a8._0_4_ == 0x7fffffff) {
        auStack_a8 = auVar4;
        func_0x05259950(&uStack_6c,param_4,&uStack_f0);
        auVar4 = auStack_a8;
        *puVar3 = uStack_6c;
        puVar3[1] = uStack_68;
        puVar3[2] = uStack_64;
        puVar3[3] = uStack_60;
        *(char *)(puVar3 + 4) = cStack_5c;
        auStack_a8._4_4_ = 0;
        auStack_a8._0_4_ = puVar3[3];
        auStack_a8._8_8_ = auVar4._8_8_;
        iVar32 = (int)param_4[5];
        iVar21 = *(int *)((long)param_4 + 0x2c);
        iVar36 = (int)param_4[6];
        iVar27 = (int)param_4[7];
        iVar26 = *(int *)((long)param_4 + 0x3c);
        lVar22 = param_4[8];
        cVar19 = cStack_5c;
      }
      else {
        auStack_a8._8_8_ = auVar4._8_8_;
        cVar19 = *(char *)(puVar3 + 4);
      }
      iVar12 = ((int)uStack_d8 >> 0x1f) - (int)uStack_d8;
      iVar13 = iVar12 + 0xf;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      iVar12 = (int)((ulong)((long)((uStack_d8._4_4_ >> 0x1f) - uStack_d8._4_4_) * -0x2aaaaaab) >>
                    0x20);
      iVar9 = ((int)uStack_d0 >> 0x1f) - uStack_d0;
      iVar20 = iVar9 + 0xf;
      if (-1 < iVar9) {
        iVar20 = iVar9;
      }
      lVar29 = (long)(((((int)uStack_d0 >> 0x1f) - iVar36) - (iVar20 >> 4)) +
                     (((uStack_d8._4_4_ >> 0x1f) - iVar21) + ((iVar12 >> 1) - (iVar12 >> 0x1f)) +
                     ((((int)uStack_d8 >> 0x1f) - iVar32) - (iVar13 >> 4)) * iVar27) * iVar26);
      puVar2 = (undefined8 *)(lVar22 + lVar29 * 0x14);
      iVar13 = *(int *)(lVar22 + 0xc + lVar29 * 0x14);
      if (iVar13 == 0x7fffffff) {
        func_0x05259950(&uStack_6c,param_4,&uStack_d8);
        *puVar2 = CONCAT44(uStack_68,uStack_6c);
        puVar2[1] = CONCAT44(uStack_60,uStack_64);
        *(char *)(puVar2 + 2) = cStack_5c;
        iVar13 = *(int *)((long)puVar2 + 0xc);
        cVar31 = cStack_5c;
      }
      else {
        cVar31 = *(char *)(puVar2 + 2);
      }
      puVar1 = puStack_58;
      iVar12 = auStack_98._0_4_;
      fVar41 = (float)(long)uStack_c8;
      uVar23 = *puStack_58;
      iVar20 = (int)(uVar23 >> 0x20);
      iVar32 = auStack_a8._0_4_;
      fVar37 = _DAT_01198c14;
      if (((iVar20 < iVar12) && (iVar20 < iVar32)) && ((char)lStack_e0 != cVar19)) {
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_c8._0_4_ = _DAT_011983f0;
        uStack_c8._4_4_ = 0;
      }
      else {
        uStack_c8._0_4_ = 0.0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_c8._4_4_ = 0;
        if (iVar12 - iVar32 != 0) {
          iVar21 = iVar32 - iVar12;
          if (iVar32 < iVar12) {
            iVar21 = iVar12 - iVar32;
          }
          fVar38 = ((float)iVar20 + _DAT_011986e0) - (float)(iVar32 + iVar12) * _DAT_011986e0;
          fVar42 = (float)iVar21 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar38);
          if (fVar38 <= 0.0) {
            uStack_c8._0_4_ =
                 (fVar42 + _DAT_01198af0) /
                 *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar42 + _DAT_01198af0) * 4);
          }
          else {
            uStack_c8._0_4_ = (fVar42 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar42) * 4)
            ;
          }
          uStack_c8._4_4_ = uVar39;
          uStack_c0 = in_XMM2_Dc;
          uStack_bc = in_XMM2_Dd;
          if ((float)(_DAT_014e7ba0 & (uint)(float)uStack_c8) <= _DAT_01198724) {
            uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar41);
            fVar37 = (float)func_0x0d3414e0((float)(int)uVar23,*param_4);
            iVar12 = auStack_98._0_4_;
            uStack_c8._0_4_ = (float)uStack_c8 + fVar37;
            uVar23 = *puVar1;
            iVar20 = (int)(uVar23 >> 0x20);
            fVar41 = (float)uStack_b0;
          }
        }
      }
      fVar41 = fVar41 * _DAT_01198cf4;
      fVar42 = (float)lVar18 * _DAT_01198cf4;
      if (((iVar20 < iVar12) && (iVar20 < iVar13)) && ((char)lStack_e0 != cVar31)) {
        auStack_98._4_4_ = 0;
        auStack_98._8_4_ = 0;
        auStack_98._12_4_ = 0;
        auStack_98._0_4_ = _DAT_011983f0;
      }
      else {
        auStack_98._0_4_ = 0.0;
        auStack_98._4_4_ = 0;
        auStack_98._8_4_ = 0;
        auStack_98._12_4_ = 0;
        if (iVar12 - iVar13 != 0) {
          iVar21 = iVar13 - iVar12;
          if (iVar13 < iVar12) {
            iVar21 = iVar12 - iVar13;
          }
          fVar40 = ((float)iVar20 + _DAT_011986e0) - (float)(iVar12 + iVar13) * _DAT_011986e0;
          fVar38 = (float)iVar21 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar40);
          if (fVar40 <= 0.0) {
            auStack_98._0_4_ =
                 (fVar38 + _DAT_01198af0) /
                 *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar38 + _DAT_01198af0) * 4);
          }
          else {
            auStack_98._0_4_ =
                 (fVar38 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar38) * 4);
          }
          auStack_98._12_4_ = 0;
          auStack_98._8_4_ = 0;
          auStack_98._4_4_ = 0;
          if ((float)(_DAT_014e7ba0 & auStack_98._0_4_) <= _DAT_01198724) {
            if ((fVar37 != _DAT_01198c14) || (NAN(fVar37) || NAN(_DAT_01198c14))) {
              auStack_98._0_4_ = (float)auStack_98._0_4_ + fVar37;
            }
            else {
              uStack_b0 = CONCAT44(uStack_b0._4_4_,fVar41);
              auStack_98 = ZEXT416((uint)auStack_98._0_4_);
              fVar37 = (float)func_0x0d3414e0((float)(int)uVar23,*param_4);
              auStack_98._0_4_ = (float)auStack_98._0_4_ + fVar37;
              uVar23 = *puVar1;
              iVar20 = (int)(uVar23 >> 0x20);
              fVar41 = (float)uStack_b0;
            }
          }
        }
      }
      fVar41 = _DAT_011983f0 - fVar41;
      fVar42 = _DAT_011983f0 - fVar42;
      if (((iVar32 <= iVar20) || (iVar13 <= iVar20)) ||
         (auStack_a8._0_4_ = _DAT_011983f0, cVar19 == cVar31)) {
        auStack_a8._0_4_ = 0.0;
        if (iVar32 - iVar13 != 0) {
          iVar12 = iVar13 - iVar32;
          if (iVar13 < iVar32) {
            iVar12 = iVar32 - iVar13;
          }
          fVar40 = ((float)iVar20 + _DAT_011986e0) - (float)(iVar13 + iVar32) * _DAT_011986e0;
          fVar38 = (float)iVar12 * _DAT_011986e0 - (float)(_DAT_014e7ba0 & (uint)fVar40);
          if (fVar40 <= 0.0) {
            auStack_a8._0_4_ =
                 (fVar38 + _DAT_01198af0) /
                 *(float *)(&UNK_014f03a8 + (ulong)(0.0 < fVar38 + _DAT_01198af0) * 4);
          }
          else {
            auStack_a8._0_4_ =
                 (fVar38 + 0.0) / *(float *)(&UNK_014f0310 + (ulong)(0.0 < fVar38) * 4);
          }
          if ((float)(_DAT_014e7ba0 & auStack_a8._0_4_) <= _DAT_01198724) {
            if ((fVar37 == _DAT_01198c14) && (!NAN(fVar37) && !NAN(_DAT_01198c14))) {
              auStack_a8 = ZEXT416((uint)auStack_a8._0_4_);
              lStack_e0 = CONCAT44(lStack_e0._4_4_,fVar42);
              fVar37 = (float)func_0x0d3414e0((float)(int)uVar23,*param_4);
              fVar42 = (float)lStack_e0;
            }
            auStack_a8._0_4_ = (float)auStack_a8._0_4_ + fVar37;
          }
        }
      }
      fVar37 = 0.0;
      if (0.0 <= (float)uStack_88) {
        fVar37 = (float)uStack_88;
      }
      fVar38 = 0.0;
      if (0.0 <= fVar41) {
        fVar38 = fVar41;
      }
      fVar41 = 0.0;
      if (0.0 <= fVar42) {
        fVar41 = fVar42;
      }
      fVar42 = fVar38 * (float)auStack_98._0_4_;
      if (fVar38 * (float)auStack_98._0_4_ <= fVar41 * (float)auStack_a8._0_4_) {
        fVar42 = fVar41 * (float)auStack_a8._0_4_;
      }
      if ((float)uStack_c8 <= fVar42) {
        uStack_c8._0_4_ = fVar42;
      }
      uStack_c8._0_4_ = (fVar37 + fVar37) * (float)uStack_c8;
      fVar41 = 0.0;
      if (0.0 <= (float)uStack_c8) {
        fVar41 = (float)uStack_c8;
      }
    }
    *(float *)(param_4 + 4) = fVar41;
  }
  return;
}


