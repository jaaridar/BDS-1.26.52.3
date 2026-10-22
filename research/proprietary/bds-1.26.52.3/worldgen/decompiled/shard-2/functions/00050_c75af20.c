/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc75af20
 * Label: string:ZZZN18BiomeSurfaceSystem28resolveBuilderImplementationER13Bi
 * Body:  [[0c75af20, 0c75af50] [0c75b020, 0c75b048] [0c75b22d, 0c75b249]]
 * Ghidra: FUN_0c75af20
 */


void FUN_0c75af20(void)

{
  ulong in_RAX;
  ulong uVar1;
  byte bStack0000000000000030;
  undefined7 uStack0000000000000031;
  undefined8 in_stack_00000040;
  
  uVar1 = in_RAX & 0xffffffff;
  if ((ulong)*(uint *)(in_RAX + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(in_RAX + 0x60) * 8))
              (&stack0x00000028,uVar1 + 0x38);
  }
  *(undefined **)(uVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(uVar1 + 0x40) = 5;
  *(undefined4 *)(uVar1 + 0x60) = 3;
  if ((bStack0000000000000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,
                    CONCAT71(uStack0000000000000031,bStack0000000000000030) & 0xfffffffffffffffe);
  }
  return;
}


