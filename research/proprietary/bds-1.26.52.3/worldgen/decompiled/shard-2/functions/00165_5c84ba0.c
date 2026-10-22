/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5d84ba0 (ELF vaddr 0x5c84ba0)
 * Label: callee-of:0x5ea9cf0
 * Body:  [[05d84ba0, 05d84c77]]
 * Ghidra: FUN_05d84ba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05d84ba0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 uStack_29;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  param_1[2] = &UNK_0488e0b0;
  *(undefined4 *)(param_1 + 4) = 0x48b5725f;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *param_1 = 0;
  lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  if (lVar5 == 0) {
    func_0x048b0de0(&uStack_28,&uStack_29);
    _DAT_0f54fd90 = (undefined4)uStack_28;
    uRam000000000f54fd94 = uStack_28._4_4_;
    uVar3 = (undefined4)uStack_20;
    uVar4 = uStack_20._4_4_;
    uStack_28 = 0;
    uStack_20 = (long *)0x0;
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
    plVar2 = uStack_20;
    if (uStack_20 != (long *)0x0) {
      LOCK();
      plVar1 = uStack_20 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*uStack_20 + 0x10))(uStack_20);
        func_0x0412c2d0(plVar2);
      }
    }
    lVar5 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  }
  param_1[5] = lVar5;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


