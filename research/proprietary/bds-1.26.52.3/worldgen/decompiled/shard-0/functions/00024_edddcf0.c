/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xedddcf0
 * Label: callee-of:0x493a160
 * Body:  [[0edddcf0, 0edddda6]]
 * Ghidra: FUN_0edddcf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0edddcf0(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if ((DAT_0f775d38 == '\0') && (iVar2 = func_0x04108328(&DAT_0f775d38), iVar2 != 0)) {
    func_0x0eddddb0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f775cb8,0xf53dab8);
    func_0x0410844d(&DAT_0f775d38);
  }
  plVar3 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U &
                          *(uint *)(_DAT_0f775cb8 + 4)) * 8);
  do {
    lVar1 = *plVar3;
    if (lVar1 == -1) goto LAB_0edddd40;
    plVar3 = (long *)(param_1[3] + lVar1 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f775cb8 + 4));
  if (plVar3 != (long *)param_1[4]) {
    return (undefined *)plVar3[2];
  }
LAB_0edddd40:
  return &DAT_0f775cb8;
}


