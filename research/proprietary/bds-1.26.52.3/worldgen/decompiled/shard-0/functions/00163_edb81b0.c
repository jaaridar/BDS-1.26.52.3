/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xedb81b0
 * Label: callee-of:0x524f1c0
 * Body:  [[0edb81b0, 0edb81ce] [0edb81f7, 0edb8205] [0edb824f, 0edb8253]]
 * Ghidra: FUN_0edb81b0
 */


void FUN_0edb81b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long in_RAX;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  undefined8 unaff_R15;
  
  *(int *)(param_2 + 0x10) = (int)param_4;
  if (param_4 == 0) {
    *unaff_R14 = unaff_R15;
  }
  else {
    *(undefined8 *)(in_RAX + 0x10) = unaff_R15;
    *unaff_RBX = unaff_RBX + 1;
    unaff_RBX[1] = 0;
    unaff_RBX[2] = 0;
  }
  return;
}


