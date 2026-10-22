/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe8e5120
 * Label: string:virtual void cereal::internal::TypeSchema<std::optional<std:
 * Body:  [[0e8e5120, 0e8e5155]]
 * Ghidra: FUN_0e8e5120
 */


void FUN_0e8e5120(void)

{
  undefined4 *puVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte in_CL;
  long unaff_R14;
  
  if (*(byte *)(CONCAT71(in_register_00000001,in_AL) + -0x75) < in_CL) {
    puVar1 = (undefined4 *)func_0x0488e200();
    *(undefined4 *)(unaff_R14 + 0x10) = *puVar1;
  }
  return;
}


