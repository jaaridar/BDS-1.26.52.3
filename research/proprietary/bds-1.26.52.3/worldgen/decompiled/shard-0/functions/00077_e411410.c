/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe411410
 * Label: string:Factory<Type> cereal::BasicFactory<SharedTypes::v1_21_20::Ji
 * Body:  [[0e411410, 0e41147a]]
 * Ghidra: FUN_0e411410
 */


void FUN_0e411410(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong in_stack_00000008;
  undefined8 in_stack_00000018;
  long *in_stack_000000e8;
  
  func_0x0412c2d0();
  plVar3 = in_stack_000000e8;
  if (in_stack_000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_000000e8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_000000e8 + 0x10))(in_stack_000000e8);
      func_0x0412c2d0(plVar3);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((in_stack_00000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,in_stack_00000008 & 0xfffffffffffffffe);
  }
  return;
}


