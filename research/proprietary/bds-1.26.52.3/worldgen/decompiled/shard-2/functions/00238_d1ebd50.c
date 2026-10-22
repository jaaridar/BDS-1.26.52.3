/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ebd50 (ELF vaddr 0xd1ebd50)
 * Label: callee-of:0x517ab30
 * Body:  [[0d2ebd50, 0d2ebdc1] [0d2ebdd0, 0d2ebe17] [0d2ebe20, 0d2ec0ee]]
 * Ghidra: FUN_0d2ebd50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d2ebd50(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6,long param_7,int param_8,int param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar6 = _DAT_0f71ecc8;
  fVar5 = _DAT_0f71ecc4;
  fVar3 = _DAT_011986e0;
  fVar2 = _DAT_011985d4;
  if ((param_9 != 0 && param_7 != 0) && (param_8 != 0)) {
    fVar14 = _DAT_0f71ecc8 + _DAT_0f71ecc8;
    lVar9 = 0;
    iVar7 = 0;
    do {
      lVar4 = _DAT_0f71eca8;
      fVar18 = ((float)iVar7 + param_2) * param_4 + param_6[1];
      lVar1 = param_7 + (long)(int)lVar9 * 4;
      lVar10 = 0;
      do {
        fVar20 = ((float)(int)lVar10 + param_1) * param_3 + *param_6;
        fVar11 = (fVar18 + fVar20) * fVar5;
        fVar12 = fVar11 + fVar20;
        fVar11 = fVar11 + fVar18;
        uVar15 = (int)fVar12 - (uint)(fVar12 <= 0.0);
        uVar16 = (int)fVar11 - (uint)(fVar11 <= 0.0);
        fVar11 = (float)(int)(uVar15 + uVar16) * fVar6;
        fVar20 = fVar20 - ((float)(int)uVar15 - fVar11);
        fVar21 = fVar18 - ((float)(int)uVar16 - fVar11);
        fVar22 = 0.0;
        fVar11 = 0.0;
        fVar12 = _DAT_011983f0;
        if (fVar20 <= fVar21) {
          fVar12 = 0.0;
          fVar11 = _DAT_011983f0;
        }
        uVar15 = uVar15 & 0xff;
        uVar16 = uVar16 & 0xff;
        fVar13 = (fVar3 - fVar20 * fVar20) - fVar21 * fVar21;
        if (0.0 <= fVar13) {
          fVar22 = param_6[(long)(int)param_6[(ulong)uVar16 + 3] + (ulong)uVar15 + 3];
          lVar8 = (long)(int)((int)fVar22 +
                             (((uint)((int)fVar22 / 6 + ((int)fVar22 >> 0x1f)) >> 1) -
                             ((int)fVar22 >> 0x1f)) * -0xc);
          fVar22 = (*(float *)(lVar4 + lVar8 * 0xc) * fVar20 +
                   *(float *)(lVar4 + 4 + lVar8 * 0xc) * fVar21) * fVar13 * fVar13 * fVar13 * fVar13
          ;
        }
        fVar19 = (fVar20 - fVar12) + fVar6;
        fVar11 = (fVar21 - fVar11) + fVar6;
        fVar13 = (fVar3 - fVar19 * fVar19) - fVar11 * fVar11;
        fVar17 = 0.0;
        fVar12 = 0.0;
        if (0.0 <= fVar13) {
          fVar12 = param_6[(long)(int)((int)param_6[(ulong)((fVar20 <= fVar21) + uVar16) + 3] +
                                       uVar15 + (uint)(fVar21 < fVar20)) + 3];
          lVar8 = (long)(int)((int)fVar12 +
                             (((uint)((int)fVar12 / 6 + ((int)fVar12 >> 0x1f)) >> 1) -
                             ((int)fVar12 >> 0x1f)) * -0xc);
          fVar12 = (fVar19 * *(float *)(lVar4 + lVar8 * 0xc) +
                   fVar11 * *(float *)(lVar4 + 4 + lVar8 * 0xc)) * fVar13 * fVar13 * fVar13 * fVar13
          ;
        }
        fVar13 = fVar20 + fVar2 + fVar14;
        fVar20 = fVar21 + fVar2 + fVar14;
        fVar11 = (fVar3 - fVar13 * fVar13) - fVar20 * fVar20;
        if (0.0 <= fVar11) {
          fVar21 = param_6[(long)(int)((int)param_6[(ulong)uVar16 + 4] + uVar15 + 1) + 3];
          lVar8 = (long)(int)((int)fVar21 +
                             (((uint)((int)fVar21 / 6 + ((int)fVar21 >> 0x1f)) >> 1) -
                             ((int)fVar21 >> 0x1f)) * -0xc);
          fVar17 = (fVar13 * *(float *)(lVar4 + lVar8 * 0xc) +
                   fVar20 * *(float *)(lVar4 + 4 + lVar8 * 0xc)) * fVar11 * fVar11 * fVar11 * fVar11
          ;
        }
        *(float *)(lVar1 + lVar10 * 4) =
             (fVar22 + fVar12 + fVar17) * _DAT_011987ec * param_5 + *(float *)(lVar1 + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while (param_8 != (int)lVar10);
      iVar7 = iVar7 + 1;
      lVar9 = (int)lVar9 + lVar10;
    } while (iVar7 != param_9);
  }
  return;
}


