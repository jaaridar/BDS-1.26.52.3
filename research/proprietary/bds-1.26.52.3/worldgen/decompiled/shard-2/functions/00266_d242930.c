/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd342930 (ELF vaddr 0xd242930)
 * Label: callee-of:0xc752370
 * Body:  [[0d342930, 0d342d61]]
 * Ghidra: FUN_0d342930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0d342930(int *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  iVar5 = *param_1;
  if (0 < (long)iVar5) {
    lVar6 = *(long *)(param_1 + 2);
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar20 = 0.0;
    lVar19 = 0;
    fVar25 = _DAT_011983f0;
    do {
      lVar1 = lVar6 + lVar19;
      fVar22 = *(float *)(lVar6 + lVar19);
      fVar26 = fVar3 * fVar25 + *(float *)(lVar6 + 4 + lVar19);
      fVar28 = fVar4 * fVar25 + *(float *)(lVar6 + 8 + lVar19);
      fVar21 = (float)floorf();
      fVar29 = (fVar2 * fVar25 + fVar22) - fVar21;
      fVar27 = ((fVar29 * _DAT_011985dc + _DAT_01198c1c) * fVar29 + _DAT_01198400) *
               fVar29 * fVar29 * fVar29;
      fVar22 = (float)floorf(fVar26);
      fVar26 = fVar26 - fVar22;
      fVar24 = ((fVar26 * _DAT_011985dc + _DAT_01198c1c) * fVar26 + _DAT_01198400) *
               fVar26 * fVar26 * fVar26;
      fVar23 = (float)floorf(fVar28);
      uVar7 = (ulong)((int)fVar23 & 0xff);
      lVar8 = (long)*(int *)(lVar1 + 0xc + (ulong)((int)fVar21 & 0xff) * 4) +
              (ulong)((int)fVar22 & 0xff);
      lVar9 = (long)*(int *)(lVar1 + 0x10 + (ulong)((int)fVar21 & 0xff) * 4) +
              (ulong)((int)fVar22 & 0xff);
      lVar11 = (long)*(int *)(lVar1 + 0xc + lVar8 * 4) + uVar7;
      lVar15 = (long)*(int *)(lVar1 + 0xc + lVar9 * 4) + uVar7;
      lVar8 = (long)*(int *)(lVar1 + 0x10 + (long)(int)lVar8 * 4) + uVar7;
      fVar22 = fVar29 + _DAT_011985d4;
      uVar12 = (ulong)(*(uint *)(lVar1 + 0xc + lVar11 * 4) & 0xf);
      uVar13 = (ulong)(*(uint *)(lVar1 + 0xc + lVar15 * 4) & 0xf);
      uVar17 = (ulong)(*(uint *)(lVar1 + 0xc + lVar8 * 4) & 0xf);
      uVar18 = (ulong)(*(uint *)(lVar1 + 0x10 + (long)(int)lVar11 * 4) & 0xf);
      uVar16 = (ulong)(*(uint *)(lVar1 + 0x10 + (long)(int)lVar15 * 4) & 0xf);
      fVar28 = fVar28 - fVar23;
      uVar14 = (ulong)(*(uint *)(lVar1 + 0x10 + (long)(int)lVar8 * 4) & 0xf);
      fVar23 = fVar28 + _DAT_011985d4;
      lVar8 = (long)*(int *)(lVar1 + 0x10 + (long)(int)lVar9 * 4) + uVar7;
      fVar21 = fVar26 + _DAT_011985d4;
      uVar7 = (ulong)(*(uint *)(lVar1 + 0xc + lVar8 * 4) & 0xf);
      uVar10 = (ulong)(*(uint *)(lVar1 + 0x10 + (long)(int)lVar8 * 4) & 0xf);
      fVar30 = *(float *)(&UNK_01d9f3c8 + uVar18 * 0xc) * fVar23 +
               (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar18 * 0xc) * fVar29 +
               (float)((ulong)*(undefined8 *)(&UNK_01d9f3c0 + uVar18 * 0xc) >> 0x20) * fVar26;
      fVar31 = *(float *)(&UNK_01d9f3c8 + uVar12 * 0xc) * fVar28 +
               (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar12 * 0xc) * fVar29 +
               (float)((ulong)*(undefined8 *)(&UNK_01d9f3c0 + uVar12 * 0xc) >> 0x20) * fVar26;
      fVar32 = *(float *)(&UNK_01d9f3c8 + uVar14 * 0xc) * fVar23 +
               (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar14 * 0xc) * fVar29 +
               (float)((ulong)*(undefined8 *)(&UNK_01d9f3c0 + uVar14 * 0xc) >> 0x20) * fVar21;
      fVar29 = *(float *)(&UNK_01d9f3c8 + uVar17 * 0xc) * fVar28 +
               (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar17 * 0xc) * fVar29 +
               (float)((ulong)*(undefined8 *)(&UNK_01d9f3c0 + uVar17 * 0xc) >> 0x20) * fVar21;
      fVar30 = ((*(float *)(&UNK_01d9f3c8 + uVar16 * 0xc) * fVar23 +
                (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar16 * 0xc) * fVar22 +
                (float)((ulong)*(undefined8 *)(&UNK_01d9f3c0 + uVar16 * 0xc) >> 0x20) * fVar26) -
               fVar30) * fVar27 + fVar30;
      fVar31 = ((*(float *)(&UNK_01d9f3c8 + uVar13 * 0xc) * fVar28 +
                (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar13 * 0xc) * fVar22 +
                (float)((ulong)*(undefined8 *)(&UNK_01d9f3c0 + uVar13 * 0xc) >> 0x20) * fVar26) -
               fVar31) * fVar27 + fVar31;
      fVar31 = fVar24 * ((((*(float *)(&UNK_01d9f3c8 + uVar7 * 0xc) * fVar28 +
                           (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar7 * 0xc) * fVar22 +
                           (float)((ulong)*(undefined8 *)(&UNK_01d9f3c0 + uVar7 * 0xc) >> 0x20) *
                           fVar21) - fVar29) * fVar27 + fVar29) - fVar31) + fVar31;
      fVar20 = fVar20 + (((fVar24 * ((((*(float *)(&UNK_01d9f3c8 + uVar10 * 0xc) * fVar23 +
                                       (float)*(undefined8 *)(&UNK_01d9f3c0 + uVar10 * 0xc) * fVar22
                                       + (float)((ulong)*(undefined8 *)
                                                         (&UNK_01d9f3c0 + uVar10 * 0xc) >> 0x20) *
                                         fVar21) - fVar32) * fVar27 + fVar32) - fVar30) + fVar30) -
                         fVar31) * ((fVar28 * _DAT_011985dc + _DAT_01198c1c) * fVar28 +
                                   _DAT_01198400) * fVar28 * fVar28 * fVar28 + fVar31) / fVar25;
      fVar25 = fVar25 * _DAT_011986e0;
      lVar19 = lVar19 + 0x818;
    } while ((long)iVar5 * 0x818 != lVar19);
    return fVar20;
  }
  return 0.0;
}


