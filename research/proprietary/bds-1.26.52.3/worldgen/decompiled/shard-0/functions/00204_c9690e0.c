/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc9690e0
 * Label: Dimension::vslot40
 * Body:  [[0c9690e0, 0c969182]]
 * Ghidra: wg_Dimension__vslot40
 */


void wg_Dimension__vslot40(void)

{
  byte in_stack_000002f0;
  undefined7 in_stack_000002f1;
  char in_stack_00000330;
  byte in_stack_00000340;
  undefined7 in_stack_00000341;
  undefined8 in_stack_00000350;
  char in_stack_00000380;
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
  
  func_0x0c96b020(&stack0x000002f0);
  func_0x0c96aca0();
  func_0x048e6d60(&stack0x00000800);
  if (in_stack_00000330 == '\x01') {
    if ((in_stack_000002f0 & 1) != 0) {
      func_0x0412a280(0,CONCAT71(in_stack_000002f1,in_stack_000002f0) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x000002f0);
  }
  if (in_stack_00000380 == '\x01') {
    if ((in_stack_00000340 & 1) != 0) {
      func_0x0412a280(in_stack_00000350,
                      CONCAT71(in_stack_00000341,in_stack_00000340) & 0xfffffffffffffffe);
    }
  }
  else {
    func_0x048e6d60(&stack0x00000340);
  }
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


