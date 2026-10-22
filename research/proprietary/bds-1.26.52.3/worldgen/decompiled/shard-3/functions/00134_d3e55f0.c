/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3e55f0
 * Label: string:ZNK20SnapToSurfaceFeature23_findSnapPosInDirectionER17IBlock
 * Body:  [[0d3e55f0, 0d3e569d]]
 * Ghidra: FUN_0d3e55f0
 */


void FUN_0d3e55f0(void)

{
  long *plVar1;
  long lVar2;
  long in_RAX;
  long *unaff_RBX;
  long *unaff_R14;
  long unaff_R15;
  long *in_stack_00000028;
  
  (**(code **)(in_RAX + 0x10))();
  func_0x0412c2d0();
  *(undefined1 *)(unaff_RBX + 0x10) = *(undefined1 *)(unaff_R15 + 0xa1);
  if (in_stack_00000028 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000028 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028);
      func_0x0412c2d0(in_stack_00000028);
    }
  }
  LOCK();
  lVar2 = *unaff_R14;
  *unaff_R14 = *unaff_R14 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*unaff_RBX + 0x10))();
    func_0x0412c2d0();
    LOCK();
    lVar2 = *unaff_R14;
    *unaff_R14 = *unaff_R14 + -1;
    UNLOCK();
  }
  else {
    LOCK();
    lVar2 = *unaff_R14;
    *unaff_R14 = *unaff_R14 + -1;
    UNLOCK();
  }
  if (lVar2 == 0) {
    (**(code **)(*unaff_RBX + 0x10))();
    func_0x0412c2d0();
  }
  return;
}


