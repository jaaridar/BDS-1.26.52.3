/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc41df0 (ELF vaddr 0xcb41df0)
 * Label: callee-of:0x4e2bb50
 * Body:  [[0cc41df0, 0cc41e9f]]
 * Ghidra: FUN_0cc41df0
 */


undefined8 FUN_0cc41df0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  
  uStack_38 = *(undefined4 *)(param_1 + 0x148);
  uStack_34 = *(undefined4 *)(param_1 + 0x14c);
  uStack_30 = *(undefined4 *)(param_1 + 0x150);
  uStack_2c = *(undefined4 *)(param_1 + 0x154);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46520(auStack_28,&uStack_38);
  plVar1 = (long *)CONCAT44(uStack_2c,uStack_30);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  lVar3 = func_0x0cc422f0(param_1,param_2,0,0,0);
  if (lVar3 == 0) {
    uVar4 = FUN_0cc41df0(param_1,&DAT_0f6eaec0,0);
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x200);
  }
  func_0x0cc465d0(auStack_28);
  return uVar4;
}


