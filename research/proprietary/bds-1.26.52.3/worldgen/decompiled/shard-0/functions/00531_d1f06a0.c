/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f06a0 (ELF vaddr 0xd1f06a0)
 * Label: callee-of:0x517ea80
 * Body:  [[0d2f06a0, 0d2f071d] [0d2f076a, 0d2f07da] [0d2f0954, 0d2f0996] [0d2f09a0, 0d2f0b14]]
 * Ghidra: FUN_0d2f06a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0d2f06a0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dStack_48;
  
  if (DAT_0f71ecf0 == '\0') {
    iVar3 = func_0x04108328(&DAT_0f71ecf0);
    if (iVar3 != 0) {
      func_0x0d2ef500();
      func_0x0eee2f40(&UNK_0d2ef940,&DAT_0f71ece8,0xf53dab8);
      func_0x0410844d(&DAT_0f71ecf0);
    }
  }
  lVar2 = _DAT_0f71ece8;
  if (DAT_0f71ed00 == '\0') {
    iVar3 = func_0x04108328(&DAT_0f71ed00);
    if (iVar3 != 0) {
      func_0x0d2ef960();
      func_0x0eee2f40(&UNK_0d2ec4d0,&DAT_0f71ecf8,0xf53dab8);
      func_0x0410844d(&DAT_0f71ed00);
    }
  }
  piVar5 = (int *)*param_1;
  iVar3 = (int)((ulong)param_2 >> 0x20);
  iVar15 = (int)param_2;
  if (piVar5 == (int *)param_1[1]) {
    dStack_48 = 0.0;
  }
  else {
    dStack_48 = 0.0;
    do {
      iVar4 = iVar15 - piVar5[3];
      if (iVar15 - piVar5[3] < *piVar5 - iVar15) {
        iVar4 = *piVar5 - iVar15;
      }
      iVar9 = 0;
      if (0 < iVar4) {
        iVar9 = iVar4;
      }
      iVar13 = param_3 - piVar5[5];
      if (param_3 - piVar5[5] < piVar5[2] - param_3) {
        iVar13 = piVar5[2] - param_3;
      }
      iVar11 = 0;
      if (0 < iVar13) {
        iVar11 = iVar13;
      }
      if (*(byte *)(piVar5 + 6) - 1 < 4) {
        iVar6 = piVar5[7] + piVar5[1];
        iVar12 = iVar3 - iVar6;
        switch((uint)*(byte *)(piVar5 + 6)) {
        case 1:
          dVar18 = 0.0;
          if ((iVar13 < 6 && iVar4 < 6) && iVar12 + 0xcU < 0x18) {
            dVar18 = (double)*(float *)(_DAT_0f71ecf8 + 0x7080 +
                                       (ulong)(iVar11 * 0x30 + iVar9 * 0x480 + iVar12 + 0xcU) * 4);
          }
          goto code_r0x0d2f075c;
        case 2:
          dVar18 = 0.0;
          if ((iVar13 < 0xc && iVar4 < 0xc) && iVar12 + 0xcU < 0x18) {
            uVar7 = (ulong)((iVar12 + 0xcU) * 0x180 + iVar12 + iVar11 * 0x2400 + iVar9 * 0x36000 +
                           0x2a3040);
code_r0x0d2f0749:
            fVar16 = *(float *)(lVar2 + uVar7 * 4);
code_r0x0d2f0754:
            dVar18 = (double)fVar16;
          }
          break;
        case 3:
          iVar6 = iVar6 - iVar3;
          iVar14 = iVar3 - piVar5[4];
          if (iVar3 - piVar5[4] < iVar6) {
            iVar14 = iVar6;
          }
          dVar18 = 0.0;
          if ((iVar13 < 0xc && iVar4 < 0xc) && iVar14 < 0xc) {
            if (iVar14 < 1) {
              iVar14 = 0;
            }
            uVar7 = (ulong)(iVar14 * 0x180 + iVar12 + iVar11 * 0x2400 + iVar9 * 0x36000 + 0x2a4240);
            goto code_r0x0d2f0749;
          }
          break;
        case 4:
          iVar12 = piVar5[1] - iVar3;
          iVar6 = iVar3 - piVar5[4];
          if (iVar3 - piVar5[4] < iVar12) {
            iVar6 = iVar12;
          }
          dVar18 = 0.0;
          if (iVar13 < 0xc && (iVar6 < 0xc && iVar4 < 0xc)) {
            if (iVar6 < 1) {
              iVar6 = 0;
            }
            fVar16 = *(float *)(_DAT_0f71ecf8 + 0x70b0 +
                               (ulong)(uint)(iVar9 * 0x240 + iVar11 * 0x18 + iVar6) * 4);
            goto code_r0x0d2f0754;
          }
        }
        dVar18 = dVar18 * _DAT_014f09d0;
code_r0x0d2f075c:
        dStack_48 = dStack_48 + dVar18;
      }
      piVar5 = piVar5 + 8;
    } while (piVar5 != (int *)param_1[1]);
  }
  if (DAT_0f71ecf0 == '\0') {
    iVar4 = func_0x04108328(&DAT_0f71ecf0);
    if (iVar4 != 0) {
      func_0x0d2ef500();
      func_0x0eee2f40(&UNK_0d2ef940,&DAT_0f71ece8,0xf53dab8);
      func_0x0410844d(&DAT_0f71ecf0);
    }
  }
  piVar5 = (int *)param_1[3];
  if (piVar5 == (int *)param_1[4]) {
    dVar18 = 0.0;
  }
  else {
    dVar18 = 0.0;
    do {
      uVar8 = (iVar15 - *piVar5) + 0xc;
      uVar1 = (iVar3 - piVar5[1]) + 0xc;
      uVar10 = (param_3 - piVar5[2]) + 0xc;
      dVar17 = 0.0;
      if (uVar10 < 0x18 && (uVar1 < 0x18 && uVar8 < 0x18)) {
        dVar17 = (double)*(float *)(_DAT_0f71ece8 +
                                   (ulong)((iVar3 - piVar5[1]) + uVar1 * 0x180 + uVar8 * 0x36000 +
                                           uVar10 * 0x2400 + 0x40) * 4);
      }
      dVar18 = dVar18 + dVar17 * _DAT_014f0350;
      piVar5 = piVar5 + 5;
    } while (piVar5 != (int *)param_1[4]);
  }
  return dStack_48 + dVar18;
}


