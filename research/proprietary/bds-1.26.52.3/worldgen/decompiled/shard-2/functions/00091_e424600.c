/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe524600 (ELF vaddr 0xe424600)
 * Label: string:Factory<Type> cereal::BasicFactory<SharedTypes::v1_21_20::Ji
 * Body:  [[0e524600, 0e5248f0]]
 * Ghidra: FUN_0e524600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0e524600(long *param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  char cVar4;
  undefined4 in_EAX;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 in_R9;
  
  if ((char)param_1[7] == '\0') {
    *(undefined4 *)((long)param_1 + 0x34) = 0xbb8863ad;
    *(undefined1 *)(param_1 + 7) = 1;
    lVar1 = *param_1;
    uVar8 = CONCAT44(0xbb8863ad,in_EAX);
    if ((DAT_0f755030 == '\0') && (iVar6 = func_0x04108328(&DAT_0f755030), iVar6 != 0)) {
      func_0x0e520b00();
      __cxa_atexit(&UNK_048ae800,&DAT_0f754fb0,0xf53dab8);
      FUN_0410844d(&DAT_0f755030);
    }
    plVar9 = (long *)(*(long *)(lVar1 + 0x18) +
                     (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3)
                             - 1U & *(uint *)(_DAT_0f754fb0 + 4)) * 8);
    do {
      lVar2 = *plVar9;
      if (lVar2 == -1) goto LAB_0e524770;
      plVar9 = (long *)(*(long *)(lVar1 + 0x30) + lVar2 * 0x18);
    } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f754fb0 + 4));
    if (plVar9 == *(long **)(lVar1 + 0x38)) {
LAB_0e524770:
      puVar7 = &DAT_0f754fb0;
    }
    else {
      puVar7 = (undefined *)plVar9[2];
    }
    lVar1 = *(long *)(puVar7 + 0x68);
    piVar3 = *(int **)(lVar1 + 0x28);
    for (piVar10 = *(int **)(lVar1 + 0x20); (piVar10 != piVar3 && (*piVar10 != -0x44779c53));
        piVar10 = piVar10 + 0xe) {
    }
    if (piVar10 == piVar3) {
      if (piVar3 < *(int **)(lVar1 + 0x30)) {
        *piVar3 = -0x44779c53;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        piVar3[6] = 0;
        piVar3[7] = 0;
        piVar3[8] = 0;
        piVar3[9] = 0;
        piVar3[10] = 0x3f800000;
        *(undefined1 *)(piVar3 + 0xc) = 0;
        *(undefined1 *)(piVar3 + 0xd) = 0;
        *(int **)(lVar1 + 0x28) = piVar3 + 0xe;
      }
      else {
        uVar8 = func_0x05d9c2b0(lVar1 + 0x20,&stack0xffffffffffffffdc);
        *(undefined8 *)(lVar1 + 0x28) = uVar8;
      }
    }
    else if ((*(long *)(piVar10 + 8) != 0) &&
            (cVar4 = func_0x0eeddcf0(&UNK_014ca1eb,&UNK_0144861d,0x371,&UNK_0119d818,&UNK_0138b3db,
                                     in_R9,uVar8), cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  iVar6 = *(int *)((long)param_1 + 0x34);
  lVar1 = *param_1;
  if ((DAT_0f755030 == '\0') && (iVar5 = func_0x04108328(&DAT_0f755030), iVar5 != 0)) {
    func_0x0e520b00();
    __cxa_atexit(&UNK_048ae800,&DAT_0f754fb0,0xf53dab8);
    FUN_0410844d(&DAT_0f755030);
  }
  plVar9 = (long *)(*(long *)(lVar1 + 0x18) +
                   (ulong)((int)((ulong)(*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18)) >> 3) -
                           1U & *(uint *)(_DAT_0f754fb0 + 4)) * 8);
  do {
    lVar2 = *plVar9;
    if (lVar2 == -1) goto LAB_0e524670;
    plVar9 = (long *)(*(long *)(lVar1 + 0x30) + lVar2 * 0x18);
  } while (*(uint *)(*(long *)(lVar1 + 0x30) + 8 + lVar2 * 0x18) != *(uint *)(_DAT_0f754fb0 + 4));
  if (plVar9 == *(long **)(lVar1 + 0x38)) {
LAB_0e524670:
    puVar7 = &DAT_0f754fb0;
  }
  else {
    puVar7 = (undefined *)plVar9[2];
  }
  piVar3 = *(int **)(*(long *)(puVar7 + 0x68) + 0x28);
  for (piVar10 = *(int **)(*(long *)(puVar7 + 0x68) + 0x20);
      (piVar10 != piVar3 && (*piVar10 != iVar6)); piVar10 = piVar10 + 0xe) {
  }
  if ((piVar10 == piVar3) &&
     (cVar4 = func_0x0eeddcf0(&UNK_013e0236,&UNK_01208bb9,0x326,&UNK_0119d818,&UNK_014a9551),
     cVar4 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  return piVar10;
}


