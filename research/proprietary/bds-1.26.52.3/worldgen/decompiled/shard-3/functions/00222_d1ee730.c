/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ee730 (ELF vaddr 0xd1ee730)
 * Label: callee-of:0x517ea80
 * Body:  [[0d2ee730, 0d2ee856] [0d2ee860, 0d2ee9d3]]
 * Ghidra: FUN_0d2ee730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0d2ee730(float param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  piVar2 = (int *)param_2[4];
  fVar15 = 0.0;
  for (piVar6 = (int *)param_2[3]; piVar6 != piVar2; piVar6 = piVar6 + 0x12) {
    iVar8 = *param_3;
    iVar4 = param_3[1];
    iVar5 = piVar6[6];
    iVar10 = iVar5;
    if (iVar5 < iVar4) {
      iVar10 = iVar4;
    }
    if (piVar6[4] < iVar4) {
      iVar10 = piVar6[4];
    }
    iVar9 = iVar8 - piVar6[3];
    if (iVar8 - piVar6[3] < *piVar6 - iVar8) {
      iVar9 = *piVar6 - iVar8;
    }
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    iVar1 = param_3[2];
    iVar7 = iVar1 - piVar6[5];
    if (iVar1 - piVar6[5] < piVar6[2] - iVar1) {
      iVar7 = piVar6[2] - iVar1;
    }
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    fVar12 = (float)(iVar4 - iVar10);
    fVar12 = SQRT((float)(iVar1 - piVar6[8]) * (float)(iVar1 - piVar6[8]) +
                  (float)(iVar8 - piVar6[7]) * (float)(iVar8 - piVar6[7]) + fVar12 * fVar12);
    fVar13 = (float)piVar6[(ulong)(iVar5 < iVar4) + 0xc] + (float)piVar6[9];
    fVar14 = _DAT_0119858c - fVar12 / fVar13;
    fVar11 = (float)func_0x0d2ec220(iVar9,iVar4 - iVar10,iVar7);
    fVar15 = fVar15 + fVar11 * (float)(-(uint)(0.0 < fVar13) &
                                      -(uint)(fVar12 <= fVar13) & (uint)fVar14);
  }
  piVar2 = (int *)param_2[1];
  for (piVar6 = (int *)*param_2; piVar6 != piVar2; piVar6 = piVar6 + 0x10) {
    iVar4 = *piVar6 - *param_3;
    iVar8 = *param_3 - piVar6[3];
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    iVar5 = piVar6[2] - param_3[2];
    iVar4 = param_3[2] - piVar6[5];
    if (iVar4 < iVar5) {
      iVar4 = iVar5;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    fVar12 = (float)func_0x0d2ec220(iVar8,param_3[1] - piVar6[6],iVar4);
    fVar15 = fVar15 + fVar12 * _DAT_011985e4;
  }
  if (param_1 + fVar15 <= 0.0) {
    piVar6 = (int *)param_2[6];
    if (piVar6 != (int *)param_2[7]) {
      iVar8 = param_3[1];
      do {
        iVar4 = piVar6[1];
        if (piVar6[1] < iVar8) {
          iVar4 = iVar8;
        }
        if (piVar6[4] < iVar8) {
          iVar4 = piVar6[4];
        }
        iVar5 = *param_3 - piVar6[3];
        iVar10 = *piVar6 - *param_3;
        if (iVar5 < iVar10) {
          iVar5 = iVar10;
        }
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        iVar9 = piVar6[2] - param_3[2];
        iVar10 = param_3[2] - piVar6[5];
        if (iVar10 < iVar9) {
          iVar10 = iVar9;
        }
        iVar4 = (int)((float)(iVar8 - iVar4) * _DAT_011986e0);
        if (iVar10 < 1) {
          iVar10 = 0;
        }
        fVar12 = (float)(int)SQRT((double)(iVar10 * iVar10 + iVar5 * iVar5 + iVar4 * iVar4)) /
                 _DAT_011985dc;
        bVar3 = _DAT_011983f0 < fVar12;
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        fVar15 = fVar15 + (float)(~-(uint)bVar3 & (uint)(_DAT_011983f0 - fVar12));
        piVar6 = piVar6 + 10;
      } while (piVar6 != (int *)param_2[7]);
    }
  }
  return fVar15;
}


