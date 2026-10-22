/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7add30
 * Label: string:ZN12BinaryStream15writeVectorListI28BiomeWeightedTemperature
 * Body:  [[0c7add30, 0c7add72] [0c7adf26, 0c7adf42]]
 * Ghidra: FUN_0c7add30
 */


void FUN_0c7add30(void)

{
  long in_RAX;
  long unaff_R14;
  bool in_ZF;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  undefined8 in_stack_00000020;
  
  if (!in_ZF) {
    (**(code **)(&UNK_0f47e8c0 + in_RAX * 8))(&stack0x00000008,unaff_R14 + 0x38);
  }
  *(undefined **)(unaff_R14 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(unaff_R14 + 0x40) = 3;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT71(uStack0000000000000011,bStack0000000000000010) & 0xfffffffffffffffe);
  }
  return;
}


