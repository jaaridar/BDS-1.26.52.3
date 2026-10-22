/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x41679a0 (ELF vaddr 0x40679a0)
 * Label: callee2-of:0x49a9390
 * Body:  [[041679a0, 041679fd]]
 * Ghidra: FUN_041679a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_041679a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_0f547a10 == '\0') {
    iVar3 = func_0x04108328(&DAT_0f547a10);
    if (iVar3 != 0) {
      uVar4 = func_0x04162c10();
      func_0x04167a20(&DAT_0f547a08,uVar4);
      func_0x0410844d(&DAT_0f547a10);
    }
  }
  lVar2 = _DAT_0f547a08;
  *param_1 = _DAT_0f547a08;
  if (lVar2 != 0xf5478c0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}


