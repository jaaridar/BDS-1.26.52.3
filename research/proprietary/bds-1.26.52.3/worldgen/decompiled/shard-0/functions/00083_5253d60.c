/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5253d60
 * Label: SurfaceMaterialAdjustmentsBiomeComponentGlue::vslot2
 * Body:  [[05253d60, 05253e52] [05253e69, 05253e77]]
 * Ghidra: wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x05253e21) */
/* WARNING: Removing unreachable block (ram,0x05253e33) */

void wg_SurfaceMaterialAdjustmentsBiomeComponentGlue__vslot2(void)

{
  long *plVar1;
  long in_RAX;
  long lVar2;
  undefined8 unaff_RBX;
  long unaff_R13;
  ulong unaff_R14;
  long *in_stack_00000020;
  undefined8 *in_stack_00000030;
  
  lVar2 = (**(code **)(in_RAX + 0x10))();
  if (lVar2 == 0) {
    func_0x0eec74c0();
  }
  func_0x0eee2f00(lVar2);
  *(undefined1 *)(lVar2 + unaff_R13) = 0;
  func_0x0d336610();
  *in_stack_00000030 = unaff_RBX;
  func_0x0412a280(lVar2,unaff_R14 & 0xfffffffffffffffe);
  if (in_stack_00000020 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000020 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000020 + 0x10))(in_stack_00000020);
      func_0x0412c2d0(in_stack_00000020);
    }
  }
  return;
}


