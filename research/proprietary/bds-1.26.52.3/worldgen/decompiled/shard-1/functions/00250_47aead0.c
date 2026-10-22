/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48aead0 (ELF vaddr 0x47aead0)
 * Label: callee-of:0x61407e0
 * Body:  [[048aead0, 048aebac]]
 * Ghidra: FUN_048aead0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_048aead0(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if ((DAT_0f550ab8 == '\0') && (iVar2 = func_0x04108328(&DAT_0f550ab8), iVar2 != 0)) {
    func_0x048aebb0(&DAT_0f550a38);
    __cxa_atexit(&UNK_048ae800,&DAT_0f550a38,0xf53dab8);
    func_0x0410844d(&DAT_0f550ab8);
  }
  plVar3 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U &
                          *(uint *)(_DAT_0f550a38 + 4)) * 8);
  do {
    lVar1 = *plVar3;
    if (lVar1 == -1) goto LAB_048aeb30;
    plVar3 = (long *)(param_1[3] + lVar1 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f550a38 + 4));
  if (plVar3 != (long *)param_1[4]) {
    return (undefined *)plVar3[2];
  }
LAB_048aeb30:
  return &DAT_0f550a38;
}


