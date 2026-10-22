/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ca7e0
 * Label: XoroshiroRandom::vslot4
 * Body:  [[048ca7e0, 048ca808] [048ca828, 048ca853]]
 * Ghidra: wg_XoroshiroRandom__vslot4
 */


void wg_XoroshiroRandom__vslot4(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  char in_AL;
  char cVar4;
  undefined7 in_register_00000001;
  char in_CL;
  byte in_stack_00000478;
  undefined7 in_stack_00000479;
  undefined8 in_stack_00000488;
  byte in_stack_000009b8;
  undefined7 in_stack_000009b9;
  undefined8 in_stack_000009c8;
  
  cVar4 = in_AL + *(char *)CONCAT71(in_register_00000001,in_AL);
  *(char *)CONCAT71(in_register_00000001,cVar4) =
       *(char *)CONCAT71(in_register_00000001,cVar4) + cVar4;
  *(char *)CONCAT71(in_register_00000001,cVar4) =
       *(char *)CONCAT71(in_register_00000001,cVar4) + cVar4;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar4) + -0x7b);
  *pcVar1 = *pcVar1 + in_CL;
  if ((in_stack_000009b8 & 1) != 0) {
    func_0x0412a280(in_stack_000009c8,
                    CONCAT71(in_stack_000009b9,in_stack_000009b8) & 0xfffffffffffffffe);
  }
  if ((in_stack_00000478 & 1) != 0) {
    func_0x0412a280(in_stack_00000488,
                    CONCAT71(in_stack_00000479,in_stack_00000478) & 0xfffffffffffffffe);
  }
  func_0x048dc5a0(&stack0x000001a0);
  uVar3 = func_0x0eee2d70();
  func_0x048dc5a0(&stack0x000001a0);
  func_0x0eee2d70(uVar3);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


