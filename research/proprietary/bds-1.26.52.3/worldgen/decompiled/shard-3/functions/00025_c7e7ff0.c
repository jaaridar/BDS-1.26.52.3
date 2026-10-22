/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e7ff0
 * Label: SharedTypes::Beta::SurfaceBuilderBiomeJsonComponent::vslot0
 * Body:  [[0c7e7ff0, 0c7e8082] [0c7e94b4, 0c7e94d2]]
 * Ghidra: wg_SharedTypes__Beta__SurfaceBuilderBiomeJsonComponent__vslot0
 */


/* WARNING: Removing unreachable block (ram,0x0c7e8076) */

void wg_SharedTypes__Beta__SurfaceBuilderBiomeJsonComponent__vslot0(void)

{
  undefined8 in_RAX;
  long unaff_R15;
  byte in_stack_00000690;
  undefined7 in_stack_00000691;
  undefined8 in_stack_000006a0;
  
  *(undefined8 *)(unaff_R15 + 0x38) = in_RAX;
  *(undefined4 *)(unaff_R15 + 0x40) = 1;
  *(undefined4 *)(unaff_R15 + 0x60) = 3;
  if ((in_stack_00000690 & 1) != 0) {
    func_0x0412a280(in_stack_000006a0,
                    CONCAT71(in_stack_00000691,in_stack_00000690) & 0xfffffffffffffffe);
  }
  func_0x0d6bbef0();
  return;
}


