/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb96a1e0
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[0b96a1e0, 0b96a2d0]]
 * Ghidra: FUN_0b96a1e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b96a1e0(void)

{
  long *plVar1;
  char *in_RAX;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_RBX;
  long *in_stack_00000020;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  func_0x0b92fbc0();
  if (in_stack_00000020 == (long *)&stack0x00000000) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (in_stack_00000020 == (long *)0x0) goto LAB_0b96a21b;
  }
  (**(code **)(*in_stack_00000020 + lVar2))();
LAB_0b96a21b:
  lVar2 = func_0x0412dd40();
  plVar3 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (plVar3 == (long *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&UNK_0f2e9f78;
  plVar3[3] = (long)&UNK_0f2e9fc8;
  *(undefined4 *)(plVar3 + 6) = 0;
  plVar3[7] = lVar2;
  LOCK();
  plVar3[1] = plVar3[1] + 1;
  UNLOCK();
  LOCK();
  plVar3[2] = plVar3[2] + 1;
  UNLOCK();
  plVar3[4] = (long)(plVar3 + 4);
  plVar3[5] = (long)plVar3;
  LOCK();
  plVar1 = plVar3 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    func_0x0412c2d0(plVar3);
  }
  *unaff_RBX = plVar3 + 3;
  unaff_RBX[1] = plVar3;
  return;
}


