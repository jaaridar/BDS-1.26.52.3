/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcaaf3d0 (ELF vaddr 0xc9af3d0)
 * Label: callee-of:0xca314e0
 * Body:  [[0caaf3d0, 0caaf4c2] [0caaf4d0, 0caaf51d] [0caaf520, 0caaf83c]]
 * Ghidra: FUN_0caaf3d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0caaf3d0(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 uVar6;
  ulong extraout_RDX_01;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_R13;
  ulong *puVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar4 = (long)(int)*param_2 + 0x9e3779b9;
  uVar4 = (uVar4 >> 2) + 0x9e3779b9 + uVar4 * 0x40 + (long)*(int *)((long)param_2 + 4) ^ uVar4;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      unaff_R13 = uVar7 - 1 & uVar4;
    }
    else {
      unaff_R13 = uVar4;
      if (uVar7 <= uVar4) {
        unaff_R13 = uVar4 % uVar7;
      }
    }
    puVar1 = *(undefined8 **)(*param_1 + unaff_R13 * 8);
    if ((puVar1 != (undefined8 *)0x0) && (puVar10 = (ulong *)*puVar1, puVar10 != (ulong *)0x0)) {
      if ((byte)(uVar5 >> 0x38) < 2) {
        do {
          if (puVar10[1] == uVar4) {
            if (puVar10[2] == *param_2) goto LAB_0caaf4ef;
          }
          else if ((puVar10[1] & uVar7 - 1) != unaff_R13) break;
          puVar10 = (ulong *)*puVar10;
        } while (puVar10 != (ulong *)0x0);
      }
      else {
        do {
          uVar5 = puVar10[1];
          if (uVar5 == uVar4) {
            if (puVar10[2] == *param_2) goto LAB_0caaf4ef;
          }
          else {
            if (uVar7 <= uVar5) {
              if ((uVar5 | uVar7) >> 0x20 == 0) {
                uVar5 = (uVar5 & 0xffffffff) % (uVar7 & 0xffffffff);
              }
              else {
                uVar5 = uVar5 % uVar7;
              }
            }
            if (uVar5 != unaff_R13) break;
          }
          puVar10 = (ulong *)*puVar10;
        } while (puVar10 != (ulong *)0x0);
      }
    }
  }
  auVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
  uVar5 = auVar14._8_8_;
  puVar10 = auVar14._0_8_;
  if (puVar10 == (ulong *)0x0) {
    func_0x0eec74c0(0x28,0);
    uVar5 = extraout_RDX_01;
  }
  *puVar10 = 0;
  puVar10[1] = uVar4;
  puVar10[2] = *(ulong *)*param_4;
  puVar10[3] = 0;
  puVar10[4] = 0;
  if ((long)uVar7 < 0) {
    fVar13 = (float)uVar7;
    fVar12 = *(float *)(param_1 + 4);
    if (uVar7 != 0) goto LAB_0caaf5e9;
LAB_0caaf5fa:
    uVar5 = 1;
    if (2 < uVar7) {
      uVar5 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar5 = uVar5 | uVar7 * 2;
    fVar12 = (float)ceilf((float)(param_1[3] + 1) / fVar12);
    uVar8 = (long)(fVar12 - _DAT_01198778) & (long)fVar12 >> 0x3f | (long)fVar12;
    if (uVar8 < uVar5) {
      uVar8 = uVar5;
    }
    uVar9 = 2;
    if ((uVar8 == 1) || (uVar9 = uVar8, (uVar8 & uVar8 - 1) == 0)) {
      auVar14._8_8_ = extraout_RDX;
      auVar14._0_8_ = uVar9;
      bVar11 = uVar9 < uVar7;
      if (uVar9 <= uVar7) goto LAB_0caaf68c;
LAB_0caaf66b:
      func_0x0caaf890(param_1,uVar9);
      uVar5 = extraout_RDX_00;
    }
    else {
      auVar14 = func_0x0412c3f0();
      uVar9 = auVar14._0_8_;
      uVar7 = param_1[1];
      bVar11 = uVar9 < uVar7;
      if (uVar7 < uVar9) goto LAB_0caaf66b;
LAB_0caaf68c:
      uVar5 = auVar14._8_8_;
      if (bVar11) {
        fVar12 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar5 = (long)(fVar12 - _DAT_01198778) & (long)fVar12 >> 0x3f | (long)fVar12;
        if (uVar7 < 3) {
LAB_0caaf769:
          auVar15 = func_0x0412c3f0(uVar5);
        }
        else {
          uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
          uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
          uVar8 = (uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f;
          auVar15._8_8_ = uVar8;
          auVar15._0_8_ = uVar5;
          if (1 < (byte)(uVar8 * 0x101010101010101 >> 0x38)) goto LAB_0caaf769;
          if (1 < uVar5) {
            lVar2 = 0x3f;
            if (uVar5 - 1 != 0) {
              for (; uVar5 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            auVar15._0_8_ = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
          }
        }
        uVar5 = auVar15._8_8_;
        uVar9 = auVar14._0_8_;
        if (auVar14._0_8_ <= auVar15._0_8_) {
          uVar9 = auVar15._0_8_;
        }
        if (uVar9 < uVar7) goto LAB_0caaf66b;
      }
    }
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_R13 = uVar4 & uVar7 - 1;
    }
    else {
      unaff_R13 = uVar4;
      if (uVar7 <= uVar4) {
        uVar5 = uVar4 % uVar7;
        unaff_R13 = uVar5;
      }
    }
  }
  else {
    fVar13 = (float)(long)uVar7;
    fVar12 = *(float *)(param_1 + 4);
    if (uVar7 == 0) goto LAB_0caaf5fa;
LAB_0caaf5e9:
    if (fVar13 * fVar12 < (float)(param_1[3] + 1)) goto LAB_0caaf5fa;
  }
  lVar2 = *param_1;
  puVar3 = *(ulong **)(lVar2 + unaff_R13 * 8);
  if (puVar3 == (ulong *)0x0) {
    uVar5 = param_1[2];
    *puVar10 = uVar5;
    param_1[2] = (long)puVar10;
    *(long **)(lVar2 + unaff_R13 * 8) = param_1 + 2;
    if (*puVar10 != 0) {
      uVar4 = *(ulong *)(*puVar10 + 8);
      uVar5 = uVar7 - 1;
      if ((uVar7 & uVar5) == 0) {
        *(ulong **)(lVar2 + (uVar4 & uVar5) * 8) = puVar10;
      }
      else {
        if (uVar7 <= uVar4) {
          if ((uVar4 | uVar7) >> 0x20 == 0) {
            uVar5 = (uVar4 & 0xffffffff) % (uVar7 & 0xffffffff);
            *(ulong **)(lVar2 + uVar5 * 8) = puVar10;
            goto LAB_0caaf7b8;
          }
          uVar4 = uVar4 % uVar7;
          uVar5 = uVar4;
        }
        *(ulong **)(lVar2 + uVar4 * 8) = puVar10;
      }
    }
  }
  else {
    *puVar10 = *puVar3;
    *puVar3 = (ulong)puVar10;
  }
LAB_0caaf7b8:
  param_1[3] = param_1[3] + 1;
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_0caaf7be:
  auVar16._8_8_ = uVar6;
  auVar16._0_8_ = puVar10;
  return auVar16;
LAB_0caaf4ef:
  uVar6 = 0;
  goto LAB_0caaf7be;
}


