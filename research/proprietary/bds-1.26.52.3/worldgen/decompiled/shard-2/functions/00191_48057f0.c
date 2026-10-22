/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49057f0 (ELF vaddr 0x48057f0)
 * Label: callee-of:0xe3ddaa0
 * Body:  [[049057f0, 0490596b]]
 * Ghidra: FUN_049057f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_049057f0(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  
  *(undefined4 *)(param_1 + 0x1c) = 2;
  iVar1 = *param_2;
  *(int *)(param_1 + 0x18) = iVar1;
  lVar2 = *(long *)(param_2 + 0xc);
  *(long *)(param_1 + 8) = lVar2;
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  piVar17 = *(int **)(lVar3 + 0x60);
  piVar15 = *(int **)(lVar3 + 0x68);
  while( true ) {
    if (piVar17 == piVar15) {
      if (piVar15 < *(int **)(lVar3 + 0x70)) {
        *(undefined8 *)(piVar15 + 0xc) = *(undefined8 *)(param_2 + 0xc);
        uVar4 = *(undefined8 *)param_2;
        uVar11 = *(undefined8 *)(param_2 + 2);
        uVar12 = *(undefined8 *)(param_2 + 4);
        uVar13 = *(undefined8 *)(param_2 + 6);
        uVar14 = *(undefined8 *)(param_2 + 10);
        *(undefined8 *)(piVar15 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(piVar15 + 10) = uVar14;
        *(undefined8 *)(piVar15 + 4) = uVar12;
        *(undefined8 *)(piVar15 + 6) = uVar13;
        *(undefined8 *)piVar15 = uVar4;
        *(undefined8 *)(piVar15 + 2) = uVar11;
        uVar4 = *(undefined8 *)(param_2 + 0xe);
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        *(undefined8 *)(piVar15 + 0xe) = uVar4;
        piVar15[0x10] = param_2[0x10];
        uVar4 = *(undefined8 *)(param_2 + 0x14);
        *(undefined8 *)(piVar15 + 0x12) = *(undefined8 *)(param_2 + 0x12);
        *(undefined8 *)(piVar15 + 0x14) = uVar4;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        piVar15 = piVar15 + 0x16;
      }
      else {
        piVar15 = (int *)func_0x04905980(lVar3 + 0x60);
      }
      *(int **)(lVar3 + 0x68) = piVar15;
      return piVar15;
    }
    piVar16 = piVar17;
    if (*piVar17 == iVar1) break;
    piVar17 = piVar17 + 0x16;
  }
  do {
    if (*(long *)(piVar16 + 0xc) == lVar2) {
      return piVar16;
    }
    piVar15 = piVar16 + 0xe;
    piVar16 = *(int **)piVar15;
  } while (*(int **)piVar15 != (int *)0x0);
  do {
    piVar15 = piVar17;
    piVar17 = *(int **)(piVar15 + 0xe);
  } while (*(int **)(piVar15 + 0xe) != (int *)0x0);
  piVar17 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x58);
  if (piVar17 == (int *)0x0) {
    func_0x0eec74c0(0x58,0);
  }
  *(undefined8 *)(piVar17 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)param_2;
  uVar11 = *(undefined8 *)(param_2 + 2);
  iVar1 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  iVar8 = param_2[9];
  iVar9 = param_2[10];
  iVar10 = param_2[0xb];
  piVar17[8] = param_2[8];
  piVar17[9] = iVar8;
  piVar17[10] = iVar9;
  piVar17[0xb] = iVar10;
  piVar17[4] = iVar1;
  piVar17[5] = iVar5;
  piVar17[6] = iVar6;
  piVar17[7] = iVar7;
  *(undefined8 *)piVar17 = uVar4;
  *(undefined8 *)(piVar17 + 2) = uVar11;
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined8 *)(piVar17 + 0xe) = uVar4;
  piVar17[0x10] = param_2[0x10];
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(piVar17 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(piVar17 + 0x14) = uVar4;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  lVar2 = *(long *)(piVar15 + 0xe);
  *(int **)(piVar15 + 0xe) = piVar17;
  if (lVar2 == 0) {
    return piVar17;
  }
  piVar17 = (int *)func_0x048aea50(lVar2);
  if (lVar2 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar2);
  }
  return piVar17;
}


