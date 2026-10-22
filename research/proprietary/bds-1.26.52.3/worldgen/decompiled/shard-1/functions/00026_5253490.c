/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5253490
 * Label: SurfaceBuilderBiomeComponentGlue::vslot2
 * Body:  [[05253490, 052535a9] [052535c0, 052535ce]]
 * Ghidra: wg_SurfaceBuilderBiomeComponentGlue__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x05253578) */
/* WARNING: Removing unreachable block (ram,0x0525358a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SurfaceBuilderBiomeComponentGlue__vslot2(void)

{
  long *plVar1;
  long in_RAX;
  long lVar2;
  ulong in_RCX;
  undefined8 unaff_RBX;
  undefined8 *unaff_RBP;
  long unaff_R13;
  ulong uVar3;
  long *in_stack_00000030;
  
  uVar3 = 0x1a;
  if (in_RAX != 0x17) {
    uVar3 = in_RCX;
  }
  lVar2 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar3);
  if (lVar2 == 0) {
    func_0x0eec74c0(uVar3,0);
  }
  func_0x0eee2f00(lVar2);
  *(undefined1 *)(lVar2 + unaff_R13) = 0;
  func_0x0d336610();
  *unaff_RBP = unaff_RBX;
  func_0x0412a280(lVar2,uVar3 & 0xfffffffffffffffe);
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
  return;
}


