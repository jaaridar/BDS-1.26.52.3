/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7ead20
 * Label: string:The SurfaceBuilderComponent could not be resolved.
 * Body:  [[0c7ead20, 0c7ead7a] [0c7eb3e4, 0c7eb400]]
 * Ghidra: FUN_0c7ead20
 */


void FUN_0c7ead20(undefined8 param_1)

{
  long lVar1;
  undefined4 unaff_EBX;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  undefined8 in_stack_00000020;
  
  lVar1 = func_0x0d6c9580(param_1,unaff_EBX);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000008,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 4;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT71(uStack0000000000000011,bStack0000000000000010) & 0xfffffffffffffffe);
  }
  return;
}


