/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe39cba0
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e39cba0, 0e39cbb9] [0e39cc62, 0e39cc81]]
 * Ghidra: FUN_0e39cba0
 */


/* WARNING: Instruction at (ram,0x0e39cbb2) overlaps instruction at (ram,0x0e39cbb1)
    */

void FUN_0e39cba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte in_AL;
  undefined7 in_register_00000001;
  bool in_OF;
  
  if (in_OF) {
    in_AL = in_AL & 3;
  }
  *(undefined4 *)(CONCAT71(in_register_00000001,in_AL) + 0x20) = 0x613dba0b;
  *(undefined8 *)(CONCAT71(in_register_00000001,in_AL) + 0x18) = 0;
  *(undefined1 *)(CONCAT71(in_register_00000001,in_AL) + 0x24) = 3;
  *(undefined8 *)CONCAT71(in_register_00000001,in_AL) = param_3;
  *(undefined8 *)(CONCAT71(in_register_00000001,in_AL) + 0x28) = param_4;
  *(undefined8 *)(CONCAT71(in_register_00000001,in_AL) + 0x30) = 0;
  *(undefined **)(CONCAT71(in_register_00000001,in_AL) + 0x38) = &UNK_0e1c6d00;
  return;
}


