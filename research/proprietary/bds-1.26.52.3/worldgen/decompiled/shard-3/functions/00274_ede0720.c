/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee0720 (ELF vaddr 0xede0720)
 * Label: callee-of:0xca2cd50
 * Body:  [[0eee0720, 0eee07a2]]
 * Ghidra: FUN_0eee0720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0eee0720(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  
  lVar2 = param_1[2];
  lVar4 = func_0x0eee2fc0();
  if (lVar2 == lVar4) {
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[2] = *param_1;
      return;
    }
    if (iVar1 != 0) {
      *(int *)(param_1 + 1) = iVar1 + -1;
      return;
    }
  }
  cVar3 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar3 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  return;
}


