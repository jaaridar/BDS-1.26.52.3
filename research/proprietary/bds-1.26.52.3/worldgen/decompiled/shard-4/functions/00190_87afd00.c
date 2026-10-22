/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88afd00 (ELF vaddr 0x87afd00)
 * Label: callee-of:0x871a310
 * Body:  [[088afd00, 088afddc]]
 * Ghidra: FUN_088afd00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_088afd00(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if ((DAT_0f5dfc48 == '\0') && (iVar2 = FUN_04108328(&DAT_0f5dfc48), iVar2 != 0)) {
    func_0x088afde0(&DAT_0f5dfbc8);
    __cxa_atexit(&UNK_048ae800,&DAT_0f5dfbc8,0xf53dab8);
    func_0x0410844d(&DAT_0f5dfc48);
  }
  plVar3 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U &
                          *(uint *)(_DAT_0f5dfbc8 + 4)) * 8);
  do {
    lVar1 = *plVar3;
    if (lVar1 == -1) goto LAB_088afd60;
    plVar3 = (long *)(param_1[3] + lVar1 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5dfbc8 + 4));
  if (plVar3 != (long *)param_1[4]) {
    return (undefined *)plVar3[2];
  }
LAB_088afd60:
  return &DAT_0f5dfbc8;
}


