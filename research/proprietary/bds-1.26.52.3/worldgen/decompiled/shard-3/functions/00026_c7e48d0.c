/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e48d0
 * Label: SharedTypes::v1_26_30::SurfaceBuilderBiomeJsonComponent::vslot0
 * Body:  [[0c7e48d0, 0c7e4975] [0c7e53ab, 0c7e53d0]]
 * Ghidra: wg_SharedTypes__v1_26_30__SurfaceBuilderBiomeJsonComponent__vslot0
 */


void wg_SharedTypes__v1_26_30__SurfaceBuilderBiomeJsonComponent__vslot0(void)

{
  long lVar1;
  byte in_stack_00000010;
  undefined7 uStack0000000000000011;
  undefined1 in_stack_00000018;
  undefined1 uStack0000000000000019;
  undefined8 in_stack_00000020;
  byte bStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined8 in_stack_00000038;
  
  lVar1 = func_0x0d6c9580();
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000010,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 3;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((bStack0000000000000028 & 1) != 0) {
    func_0x0412a280(in_stack_00000038,
                    CONCAT71(uStack0000000000000029,bStack0000000000000028) & 0xfffffffffffffffe);
  }
  in_stack_00000010 = 0x10;
  uStack0000000000000011 = 0x69625f6e65706f;
  in_stack_00000018 = 0x74;
  uStack0000000000000019 = 0;
  func_0x0d6bbef0();
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT71(uStack0000000000000011,in_stack_00000010) & 0xfffffffffffffffe);
  }
  return;
}


