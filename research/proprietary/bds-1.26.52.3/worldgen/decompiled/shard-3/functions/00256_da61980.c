/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xdb61980 (ELF vaddr 0xda61980)
 * Label: callee-of:0xda370f0
 * Body:  [[0db61980, 0db61a10]]
 * Ghidra: FUN_0db61980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0db61980(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if ((DAT_0f737160 == '\0') && (iVar3 = func_0x04108328(&DAT_0f737160), iVar3 != 0)) {
    FUN_0db61a20(0xf737148);
    func_0x0410844d(&DAT_0f737160);
  }
  plVar1 = (long *)(*param_1 +
                   (ulong)((int)((ulong)(param_1[1] - *param_1) >> 3) - 1U & _DAT_0f73714c) * 8);
  do {
    plVar4 = plVar1;
    lVar2 = *plVar4;
    if (lVar2 == -1) {
      return;
    }
    plVar1 = (long *)(param_1[3] + lVar2 * 0x18);
  } while (*(uint *)(param_1[3] + 8 + lVar2 * 0x18) != _DAT_0f73714c);
  *plVar4 = *plVar1;
  func_0x048af970();
  return;
}


