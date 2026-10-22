/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6337460 (ELF vaddr 0x6237460)
 * Label: callee-of:0x61407e0
 * Body:  [[06337460, 0633750b]]
 * Ghidra: FUN_06337460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06337460(void)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 uStack_19;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar5 == 0) {
    func_0x048b0de0(&uStack_18,&uStack_19);
    _DAT_0f54fd90 = (undefined4)uStack_18;
    uRam000000000f54fd94 = uStack_18._4_4_;
    uVar3 = (undefined4)uStack_10;
    uVar4 = uStack_10._4_4_;
    uStack_18 = 0;
    uStack_10 = (long *)0x0;
    plVar2 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
    _DAT_0f54fd98 = uVar3;
    uRam000000000f54fd9c = uVar4;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        func_0x0412c2d0(plVar2);
      }
    }
    plVar2 = uStack_10;
    if (uStack_10 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_10 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*uStack_10 + 0x10))(uStack_10);
        func_0x0412c2d0(plVar2);
      }
    }
    lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  func_0x06337520(lVar5);
  return;
}


