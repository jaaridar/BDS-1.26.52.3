/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x836acf0
 * Label: string:These are sent from the client to tell the Server map about
 * Body:  [[0836ac8f, 0836aca0] [0836acf0, 0836ae05]]
 * Ghidra: FUN_0836acf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0836acf0(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_stack_00000008;
  ulong in_stack_00000010;
  undefined *in_stack_00000020;
  code *in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined *in_stack_00000048;
  long in_stack_00000070;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  func_0x048b0de0((ulong)&stack0x00000080 & 0xffffffff,&stack0x0000000f);
  _DAT_0f54fd90 = uStack0000000000000080;
  uRam000000000f54fd94 = uStack0000000000000084;
  uVar4 = uStack0000000000000088;
  uVar5 = uStack000000000000008c;
  _uStack0000000000000080 = 0;
  _uStack0000000000000088 = (long *)0x0;
  plVar3 = (long *)CONCAT44(uRam000000000f54fd9c,_DAT_0f54fd98);
  _DAT_0f54fd98 = uVar4;
  uRam000000000f54fd9c = uVar5;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  plVar3 = _uStack0000000000000088;
  if (_uStack0000000000000088 != (long *)0x0) {
    LOCK();
    plVar1 = _uStack0000000000000088 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*_uStack0000000000000088 + 0x10))(_uStack0000000000000088);
      func_0x0412c2d0(plVar3);
    }
  }
  in_stack_00000038 = CONCAT44(uRam000000000f54fd94,_DAT_0f54fd90);
  in_stack_00000020 = &UNK_0490c9f0;
  in_stack_00000030 = 0x95e97e5e;
  in_stack_00000028 = (code *)0x0;
  uStack0000000000000034 = 2;
  in_stack_00000010 = (ulong)in_stack_00000008;
  in_stack_00000040 = 0;
  in_stack_00000048 = &UNK_0490c9d0;
  (**(code **)(in_stack_00000070 + 0x38))(&stack0x00000070);
  if (in_stack_00000028 != (code *)0x0) {
    (*in_stack_00000028)(&stack0x00000010);
  }
  return;
}


