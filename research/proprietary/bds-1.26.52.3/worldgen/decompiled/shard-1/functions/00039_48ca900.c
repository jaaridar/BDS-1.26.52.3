/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ca900
 * Label: XoroshiroRandom::vslot8
 * Body:  [[048ca900, 048caa1a] [048caacb, 048cab01]]
 * Ghidra: wg_XoroshiroRandom__vslot8
 */


void wg_XoroshiroRandom__vslot8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  char in_AL;
  undefined7 in_register_00000001;
  byte in_stack_00000480;
  undefined7 in_stack_00000481;
  undefined8 in_stack_00000490;
  long in_stack_000008f0;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  func_0x0ee17510(&stack0x00000210);
  func_0x048dbd40(&stack0x00000480);
  func_0x0d200c80(&stack0x000003a0);
  wg_br__worldgen__WorldGenRandom__vslot13(&stack0x00000010);
  if (in_stack_000008f0 != 0) {
    func_0x04917960();
  }
  func_0x048dc200(&stack0x00000160);
  func_0x048dc230(&stack0x00000440);
  func_0x048dc270(&stack0x000009c0);
  func_0x048dc5a0(&stack0x000001a8);
  uVar2 = func_0x0eee2d70();
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  uVar2 = func_0x04882e20(uVar2);
  func_0x048c3ac0(&stack0x000009c0);
  if ((in_stack_00000480 & 1) != 0) {
    func_0x0412a280(in_stack_00000490,
                    CONCAT71(in_stack_00000481,in_stack_00000480) & 0xfffffffffffffffe);
  }
  func_0x048dc5a0(&stack0x000001a8);
  uVar2 = func_0x0eee2d70(uVar2);
  func_0x048dc5a0(&stack0x000001a8);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


