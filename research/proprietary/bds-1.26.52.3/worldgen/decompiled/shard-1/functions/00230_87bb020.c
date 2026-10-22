/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88bb020 (ELF vaddr 0x87bb020)
 * Label: callee-of:0x871a310
 * Body:  [[088bb020, 088bb0fc]]
 * Ghidra: FUN_088bb020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_088bb020(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if ((DAT_0f5dfdb8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5dfdb8), iVar2 != 0)) {
    func_0x088bb100(&DAT_0f5dfd38);
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dfd38,0xf53dab8);
    func_0x0410844d(&DAT_0f5dfdb8);
  }
  plVar3 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U &
                          *(uint *)(_DAT_0f5dfd38 + 4)) * 8);
  do {
    lVar1 = *plVar3;
    if (lVar1 == -1) goto LAB_088bb080;
    plVar3 = (long *)(param_1[3] + lVar1 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5dfd38 + 4));
  if (plVar3 != (long *)param_1[4]) {
    return (undefined *)plVar3[2];
  }
LAB_088bb080:
  return &DAT_0f5dfd38;
}


