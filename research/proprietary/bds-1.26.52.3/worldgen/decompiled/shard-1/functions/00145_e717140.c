/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe717140
 * Label: string:minecraft:biome_music
 * Body:  [[0e717140, 0e717270]]
 * Ghidra: FUN_0e717140
 */


void FUN_0e717140(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *in_RCX;
  long *unaff_R12;
  long *in_XMM0_Qb;
  byte unaff_retaddr;
  undefined7 unaff_retaddr_00;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  long in_stack_000000b8;
  undefined8 uStack00000000000000e0;
  long *plStack00000000000000e8;
  
  *(undefined4 *)(unaff_R12 + 0x10) = in_stack_00000088;
  unaff_R12[0x11] = in_stack_00000090;
  unaff_R12[0x12] = in_stack_00000098;
  unaff_R12[0x13] = in_stack_000000a0;
  *in_RCX = param_1;
  in_RCX[1] = in_XMM0_Qb;
  in_RCX[2] = 0;
  unaff_R12[0x16] = in_stack_000000b8;
  *(undefined4 *)(unaff_R12 + 0x14) = uStack00000000000000a8;
  *(undefined4 *)((long)unaff_R12 + 0xa4) = uStack00000000000000ac;
  *(undefined4 *)(unaff_R12 + 0x15) = uStack00000000000000b0;
  *(undefined4 *)((long)unaff_R12 + 0xac) = uStack00000000000000b4;
  in_stack_000000b8 = 0;
  _uStack00000000000000a8 = param_1;
  uStack00000000000000e0 = param_1;
  plStack00000000000000e8 = in_XMM0_Qb;
  func_0x048afd20(in_stack_00000018,&stack0x000000c8);
  if (unaff_R12 != (long *)0x0) {
    LOCK();
    plVar1 = unaff_R12 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*unaff_R12 + 0x10))(unaff_R12);
      func_0x0412c2d0(unaff_R12);
    }
  }
  if (plStack00000000000000e8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack00000000000000e8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack00000000000000e8 + 0x10))(plStack00000000000000e8);
      func_0x0412c2d0(plStack00000000000000e8);
    }
  }
  func_0x048aeca0(&stack0x00000020);
  if ((unaff_retaddr & 1) != 0) {
    func_0x0412a280(in_stack_00000010,CONCAT71(unaff_retaddr_00,unaff_retaddr) & 0xfffffffffffffffe)
    ;
  }
  return;
}


