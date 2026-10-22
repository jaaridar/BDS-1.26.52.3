/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc964d50
 * Label: Dimension::vslot29
 * Body:  [[0c964d50, 0c964d7e] [0c964dc3, 0c964dd5]]
 * Ghidra: wg_Dimension__vslot29
 */


void wg_Dimension__vslot29(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  long unaff_R13;
  undefined8 in_stack_00000010;
  
  func_0x0489d8e0(&stack0x00000058,in_EAX);
  func_0x0624dd30(&stack0x00000048);
  if (unaff_R13 != 0) {
    func_0x0412c2d0();
  }
  func_0x0c964f10(in_stack_00000010);
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


