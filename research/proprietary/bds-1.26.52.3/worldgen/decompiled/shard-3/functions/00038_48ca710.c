/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ca710
 * Label: XoroshiroRandom::vslot2
 * Body:  [[048ca710, 048ca721] [048ca8b9, 048ca8c7] [048ca8cb, 048ca901]]
 * Ghidra: wg_XoroshiroRandom__vslot2
 */


void wg_XoroshiroRandom__vslot2(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x04915eb0(&stack0x00000480);
  func_0x04915f10(&stack0x000009c0);
  func_0x04136b90();
  func_0x048c0df0();
  func_0x0412a280();
  func_0x048dc5a0(&stack0x000001a8);
  uVar2 = func_0x0eee2d70();
  func_0x048dc5a0(&stack0x000001a8);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


