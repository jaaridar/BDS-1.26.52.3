/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc961240
 * Label: Dimension::vslot45
 * Body:  [[0c961087, 0c9610a1] [0c961240, 0c961352]]
 * Ghidra: wg_Dimension__vslot45
 */


/* WARNING: Removing unreachable block (ram,0x0c961292) */
/* WARNING: Removing unreachable block (ram,0x0c9612a4) */
/* WARNING: Removing unreachable block (ram,0x0c961327) */
/* WARNING: Removing unreachable block (ram,0x0c96133d) */

void wg_Dimension__vslot45(long *param_1)

{
  long *plVar1;
  long lVar2;
  byte *in_RAX;
  long unaff_RBX;
  undefined8 unaff_R14;
  long *in_stack_00000018;
  long *in_stack_00000030;
  
  *in_RAX = *in_RAX & (byte)in_RAX;
  *in_RAX = *in_RAX + (byte)in_RAX;
  (**(code **)(in_RAX + *param_1))();
  if (in_stack_00000030 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000030 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000030 + 0x10))(in_stack_00000030);
      func_0x0412c2d0(in_stack_00000030);
    }
  }
  lVar2 = *(long *)(unaff_RBX + 0x10);
  *(undefined8 *)(unaff_RBX + 0x10) = unaff_R14;
  if (lVar2 != 0) {
    func_0x063a6060(lVar2);
    func_0x0412a280(lVar2,0x130);
  }
  if (in_stack_00000018 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000018 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
      func_0x0412c2d0(in_stack_00000018);
    }
  }
  return;
}


