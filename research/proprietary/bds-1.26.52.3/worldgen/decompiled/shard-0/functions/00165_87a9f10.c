/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x88a9f10 (ELF vaddr 0x87a9f10)
 * Label: callee-of:0x871a310
 * Body:  [[088a9f10, 088a9fec]]
 * Ghidra: FUN_088a9f10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_088a9f10(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if ((DAT_0f5dfb90 == '\0') && (iVar2 = func_0x04108328(&DAT_0f5dfb90), iVar2 != 0)) {
    func_0x088a9ff0(&DAT_0f5dfb10);
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f5dfb10,0xf53dab8);
    func_0x0410844d(&DAT_0f5dfb90);
  }
  plVar3 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U &
                          *(uint *)(_DAT_0f5dfb10 + 4)) * 8);
  do {
    lVar1 = *plVar3;
    if (lVar1 == -1) goto LAB_088a9f70;
    plVar3 = (long *)(param_1[3] + lVar1 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f5dfb10 + 4));
  if (plVar3 != (long *)param_1[4]) {
    return (undefined *)plVar3[2];
  }
LAB_088a9f70:
  return &DAT_0f5dfb10;
}


