/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2eb5d0 (ELF vaddr 0xd1eb5d0)
 * Label: callee-of:0x51f0250
 * Body:  [[0d2eb5d0, 0d2eb854]]
 * Ghidra: FUN_0d2eb5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d2eb5d0(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar10 = (float)*param_2;
  fVar12 = (float)((ulong)*param_2 >> 0x20);
  fVar3 = (fVar12 + fVar10) * _DAT_0f71ecc4;
  fVar4 = fVar3 + fVar10;
  fVar3 = fVar3 + fVar12;
  uVar5 = (int)fVar4 - (uint)(fVar4 <= 0.0);
  uVar6 = (int)fVar3 - (uint)(fVar3 <= 0.0);
  fVar3 = (float)(int)(uVar5 + uVar6) * _DAT_0f71ecc8;
  fVar10 = fVar10 - ((float)(int)uVar5 - fVar3);
  fVar12 = fVar12 - ((float)(int)uVar6 - fVar3);
  fVar3 = 0.0;
  if (fVar12 < fVar10) {
    fVar4 = 0.0;
    fVar8 = _DAT_011983f0;
  }
  else {
    fVar4 = _DAT_011983f0;
    fVar8 = 0.0;
  }
  fVar8 = (fVar10 - fVar8) + _DAT_0f71ecc8;
  fVar9 = (fVar12 - fVar4) + _DAT_0f71ecc8;
  uVar5 = uVar5 & 0xff;
  uVar6 = uVar6 & 0xff;
  fVar15 = (_DAT_011986e0 - fVar10 * fVar10) - fVar12 * fVar12;
  fVar4 = 0.0;
  if (0.0 <= fVar15) {
    iVar1 = *(int *)(param_1 + 0xc +
                    ((long)*(int *)(param_1 + 0xc + (ulong)uVar6 * 4) + (ulong)uVar5) * 4);
    lVar2 = (long)(int)(iVar1 + (((uint)(iVar1 / 6 + (iVar1 >> 0x1f)) >> 1) - (iVar1 >> 0x1f)) *
                                -0xc);
    fVar3 = (fVar10 * *(float *)(_DAT_0f71eca8 + lVar2 * 0xc) +
            fVar12 * *(float *)(_DAT_0f71eca8 + 4 + lVar2 * 0xc)) *
            fVar15 * fVar15 * fVar15 * fVar15;
    fVar4 = fVar12;
  }
  fVar15 = fVar10 + _DAT_011985d4 + _DAT_0f71ecc8 + _DAT_0f71ecc8;
  fVar7 = _DAT_011985d4 + fVar12 + _DAT_0f71ecc8 + _DAT_0f71ecc8;
  fVar14 = (_DAT_011986e0 - fVar8 * fVar8) - fVar9 * fVar9;
  fVar11 = 0.0;
  fVar13 = 0.0;
  if (0.0 <= fVar14) {
    iVar1 = *(int *)(param_1 + 0xc +
                    (long)(int)(*(int *)(param_1 + 0xc + (ulong)((fVar10 <= fVar12) + uVar6) * 4) +
                                uVar5 + (uint)(fVar12 < fVar10)) * 4);
    lVar2 = (long)(int)(iVar1 + (((uint)(iVar1 / 6 + (iVar1 >> 0x1f)) >> 1) - (iVar1 >> 0x1f)) *
                                -0xc);
    fVar13 = (fVar8 * *(float *)(_DAT_0f71eca8 + lVar2 * 0xc) +
             fVar9 * *(float *)(_DAT_0f71eca8 + 4 + lVar2 * 0xc)) *
             fVar14 * fVar14 * fVar14 * fVar14;
  }
  fVar10 = (_DAT_011986e0 - fVar15 * fVar15) - fVar7 * fVar7;
  if (0.0 <= fVar10) {
    iVar1 = *(int *)(param_1 + 0xc +
                    (long)(int)(uVar5 + *(int *)(param_1 + 0x10 + (ulong)uVar6 * 4) + 1) * 4);
    lVar2 = (long)(int)(iVar1 + (((uint)(iVar1 / 6 + (iVar1 >> 0x1f)) >> 1) - (iVar1 >> 0x1f)) *
                                -0xc);
    fVar11 = (fVar15 * *(float *)(_DAT_0f71eca8 + lVar2 * 0xc) +
             fVar7 * *(float *)(_DAT_0f71eca8 + 4 + lVar2 * 0xc)) *
             fVar10 * fVar10 * fVar10 * fVar10;
  }
  return CONCAT44(fVar4,(fVar3 + fVar13 + fVar11) * _DAT_011987ec);
}


