/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6cef20 (ELF vaddr 0xc5cef20)
 * Label: callee-of:0xc961580
 * Body:  [[0c6cef20, 0c6cefff]]
 * Ghidra: FUN_0c6cef20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0c6cef20(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  short sStack_1c;
  short sStack_1a;
  
  if (DAT_0f6ea578 == '\0') {
    iVar1 = func_0x04108328(&DAT_0f6ea578);
    if (iVar1 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f6ea570 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f6ea578);
    }
  }
  sStack_1c = _DAT_0f6ea570;
  lVar2 = func_0x0ce66720(param_1 + 0x28,&sStack_1c);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),0x3e);
  if (lVar2 == 0) {
    if (DAT_0f5fb8c8 == '\0') {
      iVar1 = func_0x04108328(&DAT_0f5fb8c8);
      if (iVar1 != 0) {
        LOCK();
        UNLOCK();
        _DAT_0f5fb8c0 = _DAT_0f556458;
        _DAT_0f556458 = _DAT_0f556458 + 1;
        func_0x0410844d(&DAT_0f5fb8c8);
      }
    }
    sStack_1a = _DAT_0f5fb8c0;
    lVar2 = func_0x0ce66720(param_1 + 0x28,&sStack_1a);
    if (lVar2 == 0) {
      uVar3 = (ulong)*(byte *)(param_1 + 0x131);
    }
  }
  return uVar3 & 0xffffffff;
}


