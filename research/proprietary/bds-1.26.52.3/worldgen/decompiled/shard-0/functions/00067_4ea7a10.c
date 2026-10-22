/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4ea7a10
 * Label: callee-of:0x4de9260
 * Body:  [[04ea79d0, 04ea7a0d] [04ea7a10, 04ea7a67]]
 * Ghidra: FUN_04ea7a10
 */


long FUN_04ea7a10(void)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long *unaff_RBX;
  long unaff_R12;
  long unaff_R13;
  long unaff_R14;
  long *unaff_R15;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x04ea7a10:
  (**(code **)(*unaff_R15 + 0x10))(unaff_R15);
  func_0x0412c2d0(unaff_R15);
  bVar3 = *(byte *)(unaff_R14 + 8);
  lVar4 = unaff_R14;
  do {
    if ((bVar3 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar4 + 0x18),*(ulong *)(lVar4 + 8) & 0xfffffffffffffffe);
    }
    unaff_R14 = lVar4 + 0x38;
    if (unaff_R14 == unaff_R13) {
      lVar4 = *unaff_RBX;
      *unaff_RBX = unaff_R12;
      unaff_RBX[1] = in_stack_00000010;
      lVar2 = unaff_RBX[2];
      unaff_RBX[2] = in_stack_00000018;
      if (lVar4 != 0) {
        func_0x0412a280(lVar4,lVar2 - lVar4);
      }
      return in_stack_00000010;
    }
    unaff_R15 = *(long **)(lVar4 + 0x68);
    if (unaff_R15 != (long *)0x0) {
      LOCK();
      plVar1 = unaff_R15 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) goto code_r0x04ea7a10;
    }
    bVar3 = *(byte *)(lVar4 + 0x40);
    lVar4 = unaff_R14;
  } while( true );
}


