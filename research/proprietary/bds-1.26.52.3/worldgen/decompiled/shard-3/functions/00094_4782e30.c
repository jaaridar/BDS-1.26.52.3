/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4782e30
 * Label: callee-of:0x5a1f120
 * Body:  [[04782e30, 04782e78]]
 * Ghidra: FUN_04782e30
 */


/* WARNING: Instruction at (ram,0x04782e3a) overlaps instruction at (ram,0x04782e39)
    */

void FUN_04782e30(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  char in_ZF;
  
  if (param_4 + -1 == 0 || in_ZF == '\0') {
    param_3 = (uint)(param_4 + -1) ^ param_3;
    uVar1 = (in_EAX >> 2 ^ param_3) & 0x33333333;
    param_3 = param_3 ^ uVar1;
    uVar2 = uVar1 << 2 ^ in_EAX;
    uVar1 = uVar2 & 0xffff ^ param_3 >> 0x10;
    uVar2 = uVar2 ^ uVar1;
    param_3 = uVar1 << 0x10 ^ param_3;
    uVar1 = (uVar2 >> 4 ^ param_3) & 0xf0f0f0f;
    *param_1 = param_3 ^ uVar1;
    param_1[1] = uVar1 << 4 ^ uVar2;
    return;
  }
  return;
}


