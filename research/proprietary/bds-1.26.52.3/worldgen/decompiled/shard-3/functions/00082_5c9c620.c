/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d9c620 (ELF vaddr 0x5c9c620)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[05d9c620, 05d9c6ee] [05d9c6f0, 05d9c73d] [05d9c740, 05d9ca53]]
 * Ghidra: FUN_05d9c620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_05d9c620(long *param_1,uint *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong in_RAX;
  ulong uVar5;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 uVar6;
  ulong uVar7;
  ulong extraout_RDX_01;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulong uStack_38;
  
  uVar1 = *param_2;
  uVar7 = (ulong)uVar1;
  uVar8 = param_1[1];
  uStack_38 = in_RAX;
  if (uVar8 != 0) {
    uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 >> 0x38 < 2) {
      uStack_38 = (ulong)(uVar1 & (int)uVar8 - 1U);
    }
    else {
      uStack_38 = uVar7;
      if (uVar8 <= uVar7) {
        uStack_38 = uVar7 % (uVar8 & 0xffffffff);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + uStack_38 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (puVar11 = (ulong *)*puVar2, puVar11 != (ulong *)0x0)) {
      if ((byte)(uVar5 >> 0x38) < 2) {
        do {
          if (puVar11[1] == uVar7) {
            if ((uint)puVar11[2] == uVar1) goto LAB_05d9c70f;
          }
          else if ((puVar11[1] & uVar8 - 1) != uStack_38) break;
          puVar11 = (ulong *)*puVar11;
        } while (puVar11 != (ulong *)0x0);
      }
      else {
        do {
          uVar5 = puVar11[1];
          if (uVar5 == uVar7) {
            if ((uint)puVar11[2] == uVar1) goto LAB_05d9c70f;
          }
          else {
            if (uVar8 <= uVar5) {
              if ((uVar5 | uVar8) >> 0x20 == 0) {
                uVar5 = (uVar5 & 0xffffffff) % (uVar8 & 0xffffffff);
              }
              else {
                uVar5 = uVar5 % uVar8;
              }
            }
            if (uVar5 != uStack_38) break;
          }
          puVar11 = (ulong *)*puVar11;
        } while (puVar11 != (ulong *)0x0);
      }
    }
  }
  auVar15 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x18);
  uVar5 = auVar15._8_8_;
  puVar11 = auVar15._0_8_;
  if (puVar11 == (ulong *)0x0) {
    func_0x0eec74c0(0x18,0);
    uVar5 = extraout_RDX_01;
  }
  *puVar11 = 0;
  puVar11[1] = uVar7;
  *(undefined4 *)(puVar11 + 2) = *param_3;
  *(undefined1 *)((long)puVar11 + 0x14) = *param_4;
  if ((long)uVar8 < 0) {
    fVar14 = (float)uVar8;
    fVar13 = *(float *)(param_1 + 4);
    if (uVar8 != 0) goto LAB_05d9c7f5;
LAB_05d9c807:
    uVar5 = 1;
    if (2 < uVar8) {
      uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar5 = uVar5 | uVar8 * 2;
    fVar13 = (float)ceilf((float)(param_1[3] + 1) / fVar13);
    uVar9 = (long)(fVar13 - _DAT_01198778) & (long)fVar13 >> 0x3f | (long)fVar13;
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    uVar10 = 2;
    if ((uVar9 == 1) || (uVar10 = uVar9, (uVar9 & uVar9 - 1) == 0)) {
      auVar15._8_8_ = extraout_RDX;
      auVar15._0_8_ = uVar10;
      bVar12 = uVar10 < uVar8;
      if (uVar10 <= uVar8) goto LAB_05d9c899;
LAB_05d9c878:
      func_0x05d9ca70(param_1,uVar10);
      uVar5 = extraout_RDX_00;
    }
    else {
      auVar15 = func_0x0412c3f0();
      uVar10 = auVar15._0_8_;
      uVar8 = param_1[1];
      bVar12 = uVar10 < uVar8;
      if (uVar8 < uVar10) goto LAB_05d9c878;
LAB_05d9c899:
      uVar5 = auVar15._8_8_;
      if (bVar12) {
        fVar13 = (float)ceilf((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        uVar5 = (long)(fVar13 - _DAT_01198778) & (long)fVar13 >> 0x3f | (long)fVar13;
        if (uVar8 < 3) {
LAB_05d9c977:
          auVar16 = func_0x0412c3f0(uVar5);
        }
        else {
          uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
          uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
          uVar9 = (uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f;
          auVar16._8_8_ = uVar9;
          auVar16._0_8_ = uVar5;
          if (1 < (byte)(uVar9 * 0x101010101010101 >> 0x38)) goto LAB_05d9c977;
          if (1 < uVar5) {
            lVar3 = 0x3f;
            if (uVar5 - 1 != 0) {
              for (; uVar5 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            auVar16._0_8_ = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
          }
        }
        uVar5 = auVar16._8_8_;
        uVar10 = auVar15._0_8_;
        if (auVar15._0_8_ <= auVar16._0_8_) {
          uVar10 = auVar16._0_8_;
        }
        if (uVar10 < uVar8) goto LAB_05d9c878;
      }
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uStack_38 = (ulong)(uVar1 & (int)uVar8 - 1U);
    }
    else {
      uStack_38 = uVar7;
      if ((uVar8 <= uVar7) && (uVar8 <= uVar7)) {
        uVar5 = uVar7 % (uVar8 & 0xffffffff);
        uStack_38 = uVar5;
      }
    }
  }
  else {
    fVar14 = (float)(long)uVar8;
    fVar13 = *(float *)(param_1 + 4);
    if (uVar8 == 0) goto LAB_05d9c807;
LAB_05d9c7f5:
    if (fVar14 * fVar13 < (float)(param_1[3] + 1)) goto LAB_05d9c807;
  }
  lVar3 = *param_1;
  puVar4 = *(ulong **)(lVar3 + uStack_38 * 8);
  if (puVar4 == (ulong *)0x0) {
    uVar5 = param_1[2];
    *puVar11 = uVar5;
    param_1[2] = (long)puVar11;
    *(long **)(lVar3 + uStack_38 * 8) = param_1 + 2;
    if (*puVar11 != 0) {
      uVar7 = *(ulong *)(*puVar11 + 8);
      uVar5 = uVar8 - 1;
      if ((uVar8 & uVar5) == 0) {
        *(ulong **)(lVar3 + (uVar7 & uVar5) * 8) = puVar11;
      }
      else {
        if (uVar8 <= uVar7) {
          if ((uVar7 | uVar8) >> 0x20 == 0) {
            uVar5 = (uVar7 & 0xffffffff) % (uVar8 & 0xffffffff);
            *(ulong **)(lVar3 + uVar5 * 8) = puVar11;
            goto LAB_05d9c9cf;
          }
          uVar7 = uVar7 % uVar8;
          uVar5 = uVar7;
        }
        *(ulong **)(lVar3 + uVar7 * 8) = puVar11;
      }
    }
  }
  else {
    *puVar11 = *puVar4;
    *puVar4 = (ulong)puVar11;
  }
LAB_05d9c9cf:
  param_1[3] = param_1[3] + 1;
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_05d9c9d5:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = puVar11;
  return auVar17;
LAB_05d9c70f:
  uVar6 = 0;
  goto LAB_05d9c9d5;
}


