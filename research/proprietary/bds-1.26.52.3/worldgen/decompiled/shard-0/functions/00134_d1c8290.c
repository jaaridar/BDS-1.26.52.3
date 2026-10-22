/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1c8290
 * Label: string:Identifier '%s' failed validation when registering jigsaw st
 * Body:  [[0d1c8290, 0d1c8297]]
 * Ghidra: FUN_0d1c8290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d1c8290(long param_1)

{
  undefined8 in_RAX;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = in_RAX;
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uStack0000000000000008;
}


