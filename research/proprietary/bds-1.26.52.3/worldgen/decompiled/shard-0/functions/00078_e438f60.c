/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe438f60
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e438f51, 0e438f59] [0e438f60, 0e438f85]]
 * Ghidra: FUN_0e438f60
 */


void FUN_0e438f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  long in_RAX;
  bool in_ZF;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  puVar1 = (uint *)(in_RAX + 0x39);
  *puVar1 = *puVar1 >> 1 | *puVar1 << 0x1f;
  if (in_ZF) {
    uStack0000000000000008 = 0xf752228;
  }
  else {
    uStack0000000000000008 = *(undefined8 *)(param_4 + 0x10);
  }
  uStack0000000000000010 = param_2;
  func_0x0ed76130(param_1,param_2,&stack0x00000008);
  return;
}


