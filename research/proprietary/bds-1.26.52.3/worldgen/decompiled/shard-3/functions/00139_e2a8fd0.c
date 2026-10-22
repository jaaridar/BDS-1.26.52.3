/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2a8fd0
 * Label: string:virtual bool cereal::internal::TypeSchema<std::unordered_map
 * Body:  [[0e2a8fd0, 0e2a9003] [0e2a9005, 0e2a9008]]
 * Ghidra: FUN_0e2a8fd0
 */


/* WARNING: Instruction at (ram,0x0e2a9005) overlaps instruction at (ram,0x0e2a9004)
    */

undefined1 FUN_0e2a8fd0(void)

{
  undefined4 *puVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte in_CL;
  long unaff_R14;
  
  if (in_CL <= *(byte *)(CONCAT71(in_register_00000001,in_AL) + -0x75)) {
    register0x00000020 = (BADSPACEBASE *)&stack0x00000008;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = 0xe2a8ff0;
  puVar1 = (undefined4 *)func_0x0488e200();
  *(undefined4 *)(unaff_R14 + 0x21c) = *puVar1;
  return 1;
}


