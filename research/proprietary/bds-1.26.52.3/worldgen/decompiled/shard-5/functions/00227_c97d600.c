/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca7d600 (ELF vaddr 0xc97d600)
 * Label: callee-of:0xc9690e0
 * Body:  [[0ca7d600, 0ca7d718] [0ca7d720, 0ca7d789] [0ca7d790, 0ca7d988] [0ca7d990, 0ca7dc15] [0ca7dc20, 0ca7dcc8]]
 * Ghidra: FUN_0ca7d600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0ca7d600(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar14;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong unaff_R13;
  ulong *puVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong *puStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  iVar2 = *param_2;
  uVar18 = (long)iVar2 + 0x9e3779b9;
  iVar3 = param_2[1];
  uVar18 = (uVar18 >> 2) + 0x9e3779b9 + uVar18 * 0x40 + (long)iVar3 ^ uVar18;
  iVar4 = param_2[2];
  uVar18 = (uVar18 >> 2) + 0x9e3779b9 + uVar18 * 0x40 + (long)iVar4 ^ uVar18;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar10 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
    uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar10 >> 0x38 < 2) {
      unaff_R13 = uVar16 + 0x3fffffffffff & uVar18;
    }
    else {
      unaff_R13 = uVar18;
      if (uVar16 <= uVar18) {
        unaff_R13 = uVar18 % uVar16;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_R13 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (puVar19 = (ulong *)*puVar5, puVar19 != (ulong *)0x0)) {
      if ((byte)(uVar10 >> 0x38) < 2) {
        do {
          if (puVar19[1] == uVar18) {
            if ((((int)puVar19[2] == iVar2) && (*(int *)((long)puVar19 + 0x14) == iVar3)) &&
               ((int)puVar19[3] == iVar4)) goto LAB_0ca7d74f;
          }
          else if ((puVar19[1] & uVar16 - 1) != unaff_R13) break;
          puVar19 = (ulong *)*puVar19;
        } while (puVar19 != (ulong *)0x0);
      }
      else {
        do {
          uVar10 = puVar19[1];
          if (uVar10 == uVar18) {
            if ((((int)puVar19[2] == iVar2) && (*(int *)((long)puVar19 + 0x14) == iVar3)) &&
               ((int)puVar19[3] == iVar4)) goto LAB_0ca7d74f;
          }
          else {
            if (uVar16 <= uVar10) {
              if ((uVar10 | uVar16) >> 0x20 == 0) {
                uVar10 = (uVar10 & 0xffffffff) % (uVar16 & 0xffffffff);
              }
              else {
                uVar10 = uVar10 % uVar16;
              }
            }
            if (uVar10 != unaff_R13) break;
          }
          puVar19 = (ulong *)*puVar19;
        } while (puVar19 != (ulong *)0x0);
      }
    }
  }
  auVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
  uVar10 = auVar23._8_8_;
  puVar19 = auVar23._0_8_;
  if (puVar19 == (ulong *)0x0) {
    func_0x0eec74c0(0x50,0);
    uVar10 = extraout_RDX_02;
  }
  uStack_38 = 1;
  *puVar19 = 0;
  puVar19[1] = uVar18;
  puVar15 = (ulong *)*param_4;
  puVar19[2] = *puVar15;
  *(int *)(puVar19 + 3) = (int)puVar15[1];
  puVar19[4] = 0;
  puVar19[5] = 0;
  puVar19[6] = 0;
  puVar19[7] = 0;
  puVar19[8] = 0;
  puVar19[9] = 0;
  if ((long)uVar16 < 0) {
    fVar22 = (float)uVar16;
    fVar21 = *(float *)(param_1 + 4);
    if (uVar16 != 0) goto LAB_0ca7d86a;
LAB_0ca7d87b:
    uVar10 = 1;
    if (2 < uVar16) {
      uVar10 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar10 = uVar10 | uVar16 * 2;
    puStack_48 = puVar19;
    plStack_40 = param_1;
    fVar21 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar21);
    uVar16 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
    if (uVar16 < uVar10) {
      uVar16 = uVar10;
    }
    uVar13 = 2;
    if ((uVar16 == 1) || (uVar13 = uVar16, (uVar16 & uVar16 - 1) == 0)) {
      auVar23._8_8_ = extraout_RDX;
      auVar23._0_8_ = uVar13;
      uVar16 = param_1[1];
      bVar20 = uVar13 < uVar16;
      if (uVar13 <= uVar16) goto LAB_0ca7d9f0;
LAB_0ca7d8fb:
      if (uVar13 >> 0x3d != 0) {
        uVar12 = func_0x04882eb0();
        func_0x0ca7dcd0(&puStack_48);
        func_0x0eee2d70(uVar12);
        pcVar7 = (code *)swi(3);
        auVar23 = (*pcVar7)();
        return auVar23;
      }
      lVar1 = uVar13 * 8;
      lVar11 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar1);
      if (lVar11 == 0) {
        func_0x0eec74c0(lVar1,0);
      }
      lVar6 = *param_1;
      *param_1 = lVar11;
      if (lVar6 != 0) {
        FUN_0412a280(lVar6,param_1[1] << 3);
        lVar11 = *param_1;
      }
      param_1[1] = uVar13;
      func_0x0eee2dd0(lVar11,0,lVar1);
      puVar15 = (ulong *)param_1[2];
      uVar10 = extraout_RDX_00;
      if (puVar15 != (ulong *)0x0) {
        uVar14 = puVar15[1];
        uVar16 = uVar13 - 1;
        if ((uVar13 & uVar16) == 0) {
          *(long **)(lVar11 + (uVar14 & uVar16) * 8) = param_1 + 2;
          uVar13 = uVar14 & uVar16;
          while( true ) {
            puVar17 = puVar15;
            puVar15 = (ulong *)*puVar17;
            uVar10 = 0;
            if (puVar15 == (ulong *)0x0) break;
            uVar10 = puVar15[1] & uVar16;
            if (uVar10 != uVar13) {
              if (*(long *)(lVar11 + uVar10 * 8) == 0) {
                *(ulong **)(lVar11 + uVar10 * 8) = puVar17;
                uVar13 = uVar10;
              }
              else {
                *puVar17 = *puVar15;
                *puVar15 = **(ulong **)(lVar11 + uVar10 * 8);
                **(ulong **)(lVar11 + uVar10 * 8) = (ulong)puVar15;
                puVar15 = puVar17;
              }
            }
          }
        }
        else {
          uVar10 = extraout_RDX_00;
          if (uVar13 <= uVar14) {
            if ((uVar14 | uVar13) >> 0x20 == 0) {
              uVar14 = (uVar14 & 0xffffffff) % (uVar13 & 0xffffffff);
              uVar10 = uVar14;
            }
            else {
              uVar14 = uVar14 % uVar13;
              uVar10 = uVar14;
            }
          }
          *(long **)(lVar11 + uVar14 * 8) = param_1 + 2;
          puVar17 = (ulong *)*puVar15;
          while (puVar17 != (ulong *)0x0) {
            uVar16 = puVar17[1];
            if (uVar13 <= uVar16) {
              if ((uVar16 | uVar13) >> 0x20 == 0) {
                uVar16 = (uVar16 & 0xffffffff) % (uVar13 & 0xffffffff);
                uVar10 = uVar16;
              }
              else {
                uVar16 = uVar16 % uVar13;
                uVar10 = uVar16;
              }
            }
            if (uVar16 != uVar14) {
              if (*(long *)(lVar11 + uVar16 * 8) == 0) {
                *(ulong **)(lVar11 + uVar16 * 8) = puVar15;
                uVar14 = uVar16;
              }
              else {
                *puVar15 = *puVar17;
                uVar10 = **(ulong **)(lVar11 + uVar16 * 8);
                *puVar17 = uVar10;
                **(undefined8 **)(lVar11 + uVar16 * 8) = puVar17;
                puVar17 = puVar15;
              }
            }
            puVar15 = puVar17;
            puVar17 = (ulong *)*puVar15;
          }
        }
      }
    }
    else {
      auVar23 = func_0x0412c3f0();
      uVar13 = auVar23._0_8_;
      uVar16 = param_1[1];
      bVar20 = uVar13 < uVar16;
      if (uVar16 < uVar13) goto LAB_0ca7d8fb;
LAB_0ca7d9f0:
      uVar10 = auVar23._8_8_;
      uVar13 = auVar23._0_8_;
      if (bVar20) {
        fVar21 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar10 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
        if (uVar16 < 3) {
LAB_0ca7db07:
          auVar24 = func_0x0412c3f0(uVar10);
          auVar8._8_8_ = auVar24._8_8_;
          auVar8._0_8_ = uVar13;
          if (auVar24._0_8_ < uVar13) {
            auVar24 = auVar8;
          }
        }
        else {
          uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
          auVar9._8_8_ = uVar14;
          auVar9._0_8_ = uVar13;
          if (1 < (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
          goto LAB_0ca7db07;
          if (1 < uVar10) {
            lVar1 = 0x3f;
            if (uVar10 - 1 != 0) {
              for (; uVar10 - 1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            uVar10 = 1L << (-((byte)lVar1 ^ 0x3f) & 0x3f);
          }
          auVar24._8_8_ = uVar14;
          auVar24._0_8_ = uVar10;
          if (uVar10 < uVar13) {
            auVar24 = auVar9;
          }
        }
        uVar10 = auVar24._8_8_;
        uVar13 = auVar24._0_8_;
        if (uVar13 < uVar16) {
          if (uVar13 != 0) goto LAB_0ca7d8fb;
          lVar1 = *param_1;
          *param_1 = 0;
          if (lVar1 != 0) {
            FUN_0412a280(lVar1,param_1[1] << 3);
            uVar10 = extraout_RDX_01;
          }
          param_1[1] = 0;
        }
      }
    }
    uVar16 = param_1[1];
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_R13 = uVar18 & uVar16 + 0x3fffffffffff;
    }
    else {
      unaff_R13 = uVar18;
      if (uVar16 <= uVar18) {
        uVar10 = uVar18 % uVar16;
        unaff_R13 = uVar10;
      }
    }
  }
  else {
    fVar22 = (float)(long)uVar16;
    fVar21 = *(float *)(param_1 + 4);
    if (uVar16 == 0) goto LAB_0ca7d87b;
LAB_0ca7d86a:
    if (fVar22 * fVar21 < (float)(param_1[3] + 1)) goto LAB_0ca7d87b;
  }
  lVar1 = *param_1;
  puVar15 = *(ulong **)(lVar1 + unaff_R13 * 8);
  if (puVar15 == (ulong *)0x0) {
    uVar10 = param_1[2];
    *puVar19 = uVar10;
    param_1[2] = (long)puVar19;
    *(long **)(lVar1 + unaff_R13 * 8) = param_1 + 2;
    if (*puVar19 != 0) {
      uVar18 = *(ulong *)(*puVar19 + 8);
      uVar10 = uVar16 - 1;
      if ((uVar16 & uVar10) == 0) {
        *(ulong **)(lVar1 + (uVar18 & uVar10) * 8) = puVar19;
      }
      else {
        if (uVar16 <= uVar18) {
          if ((uVar18 | uVar16) >> 0x20 == 0) {
            uVar10 = (uVar18 & 0xffffffff) % (uVar16 & 0xffffffff);
            *(ulong **)(lVar1 + uVar10 * 8) = puVar19;
            goto LAB_0ca7db8f;
          }
          uVar18 = uVar18 % uVar16;
          uVar10 = uVar18;
        }
        *(ulong **)(lVar1 + uVar18 * 8) = puVar19;
      }
    }
  }
  else {
    *puVar19 = *puVar15;
    *puVar15 = (ulong)puVar19;
  }
LAB_0ca7db8f:
  param_1[3] = param_1[3] + 1;
  uVar12 = CONCAT71((int7)(uVar10 >> 8),1);
LAB_0ca7db95:
  auVar25._8_8_ = uVar12;
  auVar25._0_8_ = puVar19;
  return auVar25;
LAB_0ca7d74f:
  uVar12 = 0;
  goto LAB_0ca7db95;
}


