/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ca820
 * Label: XoroshiroRandom::vslot5
 * Body:  [[048ca7f6, 048ca808] [048ca820, 048ca853] [048caa06, 048caa1a]]
 * Ghidra: wg_XoroshiroRandom__vslot5
 */


void wg_XoroshiroRandom__vslot5(void)

{
  code *pcVar1;
  undefined8 uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *in_RCX;
  byte in_stack_00000480;
  undefined7 in_stack_00000481;
  undefined8 in_stack_00000490;
  ulong in_stack_000009c0;
  undefined8 in_stack_000009d0;
  
  *(uint *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffffc0) =
       *(uint *)(CONCAT44(in_register_00000004,in_EAX) & 0xffffffffffffffc0) | in_EAX & 0xffffffc0;
  *in_RCX = *in_RCX + (char)(in_EAX & 0xffffffc0);
  if (*in_RCX != '\0') {
    func_0x0412a280(in_stack_000009d0,in_stack_000009c0 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000480 & 1) != 0) {
    func_0x0412a280(in_stack_00000490,
                    CONCAT71(in_stack_00000481,in_stack_00000480) & 0xfffffffffffffffe);
  }
  func_0x048dc5a0(&stack0x000001a8);
  uVar2 = func_0x0eee2d70();
  func_0x048dc5a0(&stack0x000001a8);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


