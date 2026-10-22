/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb61aa0 (ELF vaddr 0xda61aa0)
 * Label: callee-of:0xda370f0
 * Body:  [[0db61aa0, 0db61b7c]]
 * Ghidra: FUN_0db61aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0db61aa0(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if ((DAT_0f737140 == '\0') && (iVar2 = func_0x04108328(&DAT_0f737140), iVar2 != 0)) {
    func_0x0db61b80(&DAT_0f7370c0);
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f7370c0,0xf53dab8);
    func_0x0410844d(&DAT_0f737140);
  }
  plVar3 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U &
                          *(uint *)(_DAT_0f7370c0 + 4)) * 8);
  do {
    lVar1 = *plVar3;
    if (lVar1 == -1) goto LAB_0db61b00;
    plVar3 = (long *)(param_1[3] + lVar1 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar1 * 0x18) != *(uint *)(_DAT_0f7370c0 + 4));
  if (plVar3 != (long *)param_1[4]) {
    return (undefined *)plVar3[2];
  }
LAB_0db61b00:
  return &DAT_0f7370c0;
}


