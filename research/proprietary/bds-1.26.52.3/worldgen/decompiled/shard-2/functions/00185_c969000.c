/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc969000
 * Label: Dimension::vslot3
 * Body:  [[0c969000, 0c96900f] [0c969011, 0c96903c]]
 * Ghidra: wg_Dimension__vslot3
 */


void wg_Dimension__vslot3(char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  byte *in_RAX;
  byte in_stack_00000390;
  undefined7 in_stack_00000391;
  undefined8 in_stack_000003a0;
  char in_stack_000003d0;
  byte in_stack_000003e0;
  undefined7 in_stack_000003e1;
  undefined8 in_stack_000003f0;
  char in_stack_00000420;
  char in_stack_000004e0;
  char in_stack_00000530;
  
  in_RAX[-0x77] = in_RAX[-0x77] + param_4;
  *in_RAX = *in_RAX | (byte)in_RAX;
  *param_1 = *param_1 + param_4;
  func_0x0c96aca0();
  func_0x048e6d60(&stack0x00000880);
  if (in_stack_000004e0 == '\0') {
    func_0x048e6d60(&stack0x000004a0);
  }
  if (in_stack_00000530 == '\0') {
    func_0x048e6d60(&stack0x000004f0);
  }
  if (in_stack_000003d0 == '\x01') {
    if ((in_stack_00000390 & 1) != 0) {
      func_0x0412a280(in_stack_000003a0,
                      CONCAT71(in_stack_00000391,in_stack_00000390) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000390);
  }
  if (in_stack_00000420 == '\x01') {
    if ((in_stack_000003e0 & 1) != 0) {
      func_0x0412a280(in_stack_000003f0,
                      CONCAT71(in_stack_000003e1,in_stack_000003e0) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x000003e0);
  }
  func_0x048e0830(&stack0x00000610);
  return;
}


