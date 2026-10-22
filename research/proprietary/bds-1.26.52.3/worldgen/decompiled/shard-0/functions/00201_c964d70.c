/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc964d70
 * Label: Dimension::vslot30
 * Body:  [[0c964d70, 0c964d7e] [0c964dc3, 0c964dd5]]
 * Ghidra: wg_Dimension__vslot30
 */


void wg_Dimension__vslot30(void)

{
  code *pcVar1;
  long unaff_R13;
  undefined8 in_stack_00000018;
  
  if (unaff_R13 != 0) {
    func_0x0412c2d0();
  }
  func_0x0c964f10(in_stack_00000018);
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


