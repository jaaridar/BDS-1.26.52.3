/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7ae2c0
 * Label: string:ZN20ReadOnlyBinaryStream14readVectorListI28BiomeWeightedTemp
 * Body:  [[0c7ae2c0, 0c7ae2ee] [0c7ae536, 0c7ae552]]
 * Ghidra: FUN_0c7ae2c0
 */


void FUN_0c7ae2c0(void)

{
  long unaff_R14;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  
  *(undefined **)(unaff_R14 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(unaff_R14 + 0x40) = 2;
  *(undefined4 *)(unaff_R14 + 0x60) = 3;
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  return;
}


