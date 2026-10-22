/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47e8d90
 * Label: string:jigsaw-persistence-enabled
 * Body:  [[047e8d90, 047e8e1b]]
 * Ghidra: FUN_047e8d90
 */


void FUN_047e8d90(void)

{
  long in_RAX;
  char in_CL;
  long unaff_RBX;
  ulong uVar1;
  undefined8 unaff_retaddr;
  
  *(char *)(in_RAX + -0x75) = *(char *)(in_RAX + -0x75) + in_CL;
  *(ulong *)(unaff_RBX + 0x20) = CONCAT71((int7)((ulong)in_RAX >> 8),(char)in_RAX + '$');
  func_0x047e8e20();
  *(undefined8 *)(unaff_RBX + 0x28) = unaff_retaddr;
  func_0x047e8e20();
  *(undefined8 *)(unaff_RBX + 0x30) = unaff_retaddr;
  func_0x047e8e20();
  *(undefined8 *)(unaff_RBX + 0x38) = unaff_retaddr;
  func_0x047e8e20();
  *(undefined8 *)(unaff_RBX + 0x40) = unaff_retaddr;
  uVar1 = 0xfffffffffffffffe;
  do {
    func_0x047e8e20();
    *(undefined8 *)(unaff_RBX + 0x50 + uVar1 * 4) = unaff_retaddr;
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x3fe);
  return;
}


