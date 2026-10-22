/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7f4f420 (ELF vaddr 0x7e4f420)
 * Label: callee-of:0x7e0b3b0
 * Body:  [[07f4f420, 07f4f5d3]]
 * Ghidra: FUN_07f4f420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_07f4f420(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined *puVar10;
  int *piVar11;
  long *plVar12;
  int *piVar13;
  undefined4 uStack_1c;
  
  *(undefined4 *)((long)param_2 + 0x34) = 0xbb8863ad;
  *(undefined1 *)(param_2 + 7) = 1;
  uStack_1c = 0xbb8863ad;
  lVar1 = *param_2;
  if ((DAT_0f5c1050 == '\0') && (iVar9 = func_0x04108328(&DAT_0f5c1050), iVar9 != 0)) {
    func_0x07f4b170();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5c0fd0,0xf53dab8);
    func_0x0410844d(&DAT_0f5c1050);
  }
  plVar12 = (long *)(*(long *)(lVar1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3) -
                            1U & *(uint *)(_DAT_0f5c0fd0 + 4)) * 8);
  do {
    lVar2 = *plVar12;
    if (lVar2 == -1) goto LAB_07f4f4a0;
    plVar12 = (long *)(*(long *)(lVar1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f5c0fd0 + 4));
  if (plVar12 == *(long **)(lVar1 + 0x38)) {
LAB_07f4f4a0:
    puVar10 = &DAT_0f5c0fd0;
  }
  else {
    puVar10 = (undefined *)plVar12[2];
  }
  lVar1 = *(long *)(puVar10 + 0x68);
  piVar11 = *(int **)(lVar1 + 0x28);
  for (piVar13 = *(int **)(lVar1 + 0x20); (piVar13 != piVar11 && (*piVar13 != -0x44779c53));
      piVar13 = piVar13 + 0xe) {
  }
  if (piVar13 == piVar11) {
    if (piVar11 < *(int **)(lVar1 + 0x30)) {
      *piVar11 = -0x44779c53;
      piVar11[2] = 0;
      piVar11[3] = 0;
      piVar11[4] = 0;
      piVar11[5] = 0;
      piVar11[6] = 0;
      piVar11[7] = 0;
      piVar11[8] = 0;
      piVar11[9] = 0;
      piVar11[10] = 0x3f800000;
      *(undefined1 *)(piVar11 + 0xc) = 0;
      *(undefined1 *)(piVar11 + 0xd) = 0;
      piVar11 = piVar11 + 0xe;
    }
    else {
      piVar11 = (int *)FUN_05d9c2b0(lVar1 + 0x20,&uStack_1c);
    }
    *(int **)(lVar1 + 0x28) = piVar11;
  }
  else if ((*(long *)(piVar13 + 8) != 0) &&
          (cVar8 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_012c353a),
          cVar8 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = param_2[3];
  lVar5 = param_2[4];
  lVar6 = param_2[5];
  uVar7 = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = uVar7;
  param_1[4] = lVar5;
  param_1[5] = lVar6;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return;
}


