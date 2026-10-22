/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1f8f10
 * Label: caller-of-seed
 * Body:  [[0d1f8f10, 0d1f8fb6]]
 * Ghidra: FUN_0d1f8f10
 */


void FUN_0d1f8f10(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_RBX;
  long *in_XMM0_Qb;
  undefined8 in_stack_00000278;
  char in_stack_00000280;
  
  if (unaff_RBX != (long *)0x0) {
    LOCK();
    plVar1 = unaff_RBX + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*unaff_RBX + 0x10))();
      func_0x0412c2d0();
    }
    if (in_XMM0_Qb != (long *)0x0) {
      LOCK();
      plVar1 = in_XMM0_Qb + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*in_XMM0_Qb + 0x10))(in_XMM0_Qb);
        func_0x0412c2d0(in_XMM0_Qb);
      }
    }
  }
  if (in_stack_00000280 == '\x01') {
    func_0x0eee02f0(in_stack_00000278);
  }
  return;
}


