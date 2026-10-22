/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcdbf900 (ELF vaddr 0xccbf900)
 * Label: callee-of:0xc5cc510
 * Body:  [[0cdbf900, 0cdbfa01]]
 * Ghidra: FUN_0cdbf900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cdbf900(long param_1)

{
  int iVar1;
  undefined8 in_RAX;
  long lVar2;
  long lVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_0f706278 == '\0') {
    iVar1 = FUN_04108328(&DAT_0f706278);
    if (iVar1 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f706270 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f706278);
    }
  }
  uStack_18._0_6_ = CONCAT24(_DAT_0f706270,(undefined4)uStack_18);
  lVar2 = func_0x0ce66720(param_1 + 8,(long)&uStack_18 + 4);
  if (lVar2 != 0) {
    return lVar2 + 8;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (DAT_0f706278 == '\0') {
    iVar1 = FUN_04108328(&DAT_0f706278);
    if (iVar1 != 0) {
      LOCK();
      UNLOCK();
      _DAT_0f706270 = _DAT_0f556458;
      _DAT_0f556458 = _DAT_0f556458 + 1;
      func_0x0410844d(&DAT_0f706278);
    }
  }
  uStack_18 = CONCAT26(_DAT_0f706270,(undefined6)uStack_18);
  lVar3 = func_0x0ce66720(lVar2 + 0x28,(long)&uStack_18 + 6);
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}


