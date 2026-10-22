/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ca700
 * Label: XoroshiroRandom::vslot1
 * Body:  [[048ca700, 048ca70c]]
 * Ghidra: wg_XoroshiroRandom__vslot1
 */


void wg_XoroshiroRandom__vslot1(void)

{
  code *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  func_0x048dc5a0(&stack0x000001a8);
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


