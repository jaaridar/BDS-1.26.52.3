/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb5ab100 (ELF vaddr 0xb4ab100)
 * Label: callee-of:0xc555900
 * Body:  [[0b5ab100, 0b5ab2bd]]
 * Ghidra: FUN_0b5ab100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b5ab100(undefined1 (*param_1) [16],byte param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  uVar8 = _DAT_011983f0;
  if (5 < param_2) {
    *param_1 = ZEXT416(_DAT_011983f0);
    param_1[1] = ZEXT416(uVar8);
    *(uint *)param_1[2] = uVar8;
    return;
  }
  uVar8 = 0;
  if (param_3 < 4) {
    uVar8 = param_3;
  }
  uVar6 = (ulong)param_2;
  bVar7 = (&UNK_01bda5c5)[uVar6];
  if ((bVar7 == param_2 || uVar8 == 0) || (bVar7 == (&UNK_01591886)[uVar6])) goto LAB_0b5ab171;
  if (uVar8 == 2) {
    bVar7 = (&UNK_01591886)[bVar7];
    goto LAB_0b5ab171;
  }
  uVar9 = (uVar8 != 3) + 1 + (uint)(uVar8 != 3);
  if ((param_2 & 5) == 0) {
    uVar8 = uVar9;
  }
  if (param_2 == 4) {
    uVar8 = uVar9;
  }
  uVar9 = (uint)(uVar8 != 3) * 2 + 1;
  if (1 < param_2) {
    uVar9 = uVar8;
  }
  uVar10 = (uint)bVar7;
  if ((3U >> (param_2 & 0x1f) & 1) == 0) {
    if ((0xcU >> (param_2 & 0x1f) & 1) == 0) {
      if ((3U >> (uVar10 & 0x1f) & 1) != 0) {
        bVar7 = uVar8 == 3 | 2;
        goto LAB_0b5ab171;
      }
      if ((0xcU >> (uVar10 & 0x1f) & 1) == 0) goto LAB_0b5ab2a2;
    }
    else {
      if ((3U >> (uVar10 & 0x1f) & 1) != 0) goto LAB_0b5ab273;
      if ((0xcU >> (uVar10 & 0x1f) & 1) == 0) {
        bVar7 = uVar8 == 3;
        goto LAB_0b5ab171;
      }
    }
    bVar7 = uVar8 != 3;
  }
  else {
    if (bVar7 - 4 < 2) {
LAB_0b5ab2a2:
      bVar7 = uVar9 == 3 ^ 3;
      goto LAB_0b5ab171;
    }
    if (1 < uVar10 - 2) goto LAB_0b5ab171;
LAB_0b5ab273:
    bVar7 = uVar8 == 3 ^ 5;
  }
LAB_0b5ab171:
  fVar2 = *(float *)(&UNK_01823a70 + uVar6 * 0xc);
  fVar3 = *(float *)(&UNK_01823a70 + (ulong)bVar7 * 0xc);
  fVar11 = (float)*(undefined8 *)(&UNK_01823a74 + uVar6 * 0xc);
  fVar12 = (float)((ulong)*(undefined8 *)(&UNK_01823a74 + uVar6 * 0xc) >> 0x20);
  uVar10 = (uint)fVar11 ^ _DAT_014e9ac0;
  uVar8 = _DAT_014e9ac0 ^ (uint)fVar12;
  uVar9 = _UNK_014e9ac4 ^ (uint)fVar2;
  lVar1 = (ulong)bVar7 * 0xc;
  fVar4 = *(float *)(&UNK_01823a74 + lVar1);
  fVar5 = *(float *)(&UNK_01823a78 + lVar1);
  *(float *)*param_1 = fVar5 * fVar11 - fVar12 * fVar4;
  *(float *)(*param_1 + 4) = fVar3 * fVar12 - fVar2 * fVar5;
  *(float *)(*param_1 + 8) = fVar2 * fVar4 - fVar11 * fVar3;
  *(float *)(*param_1 + 0xc) = fVar3;
  *(float *)param_1[1] = fVar4;
  *(float *)(param_1[1] + 4) = fVar5;
  *(uint *)(param_1[1] + 8) = uVar9;
  *(uint *)(param_1[1] + 0xc) = uVar10;
  *(uint *)param_1[2] = uVar8;
  return;
}


