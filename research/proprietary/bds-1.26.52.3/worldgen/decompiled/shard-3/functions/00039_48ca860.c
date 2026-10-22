/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48ca860
 * Label: XoroshiroRandom::vslot6
 * Body:  [[048ca5bb, 048ca5e0] [048ca679, 048ca6d0] [048ca860, 048ca882] [048caa33, 048caaa7] [048caaae, 048caadb]]
 * Ghidra: wg_XoroshiroRandom__vslot6
 */


void wg_XoroshiroRandom__vslot6(undefined8 param_1,ulong param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 in_AL;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 in_AH;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined2 in_register_00000002;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 in_register_00000004;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulong in_stack_00000050;
  undefined8 in_stack_00000060;
  byte bStack00000000000001d8;
  undefined7 uStack00000000000001d9;
  undefined8 in_stack_000001e8;
  byte bStack00000000000001f0;
  undefined7 uStack00000000000001f1;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000490;
  byte in_stack_000009c0;
  undefined7 in_stack_000009c1;
  undefined8 in_stack_000009d0;
  
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x75);
  *pcVar1 = *pcVar1 + param_4;
  puVar2 = (undefined1 *)
           (CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x24,in_AL))) +
           CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x24,in_AL))));
  *puVar2 = *puVar2;
  func_0x0412a280(in_stack_00000490,param_2 & 0xfffffffffffffffe);
  func_0x048862c0(&stack0x000009c0);
  while( true ) {
    if ((bStack00000000000001f0 & 1) != 0) {
      func_0x0412a280(in_stack_00000200,
                      CONCAT71(uStack00000000000001f1,bStack00000000000001f0) & 0xfffffffffffffffe);
    }
    if ((bStack00000000000001d8 & 1) != 0) break;
    func_0x04886070(&stack0x000001b8);
    func_0x0eee2d70();
    func_0x0412a280();
    if ((in_stack_00000050 & 1) != 0) {
      func_0x0412a280(in_stack_00000060,in_stack_00000050 & 0xfffffffffffffffe);
    }
  }
  func_0x0412a280(in_stack_000001e8,
                  CONCAT71(uStack00000000000001d9,bStack00000000000001d8) & 0xfffffffffffffffe);
  func_0x04886070(&stack0x000001b8);
  func_0x0eee2d70();
  if ((in_stack_000009c0 & 1) != 0) {
    func_0x0412a280(in_stack_000009d0,
                    CONCAT71(in_stack_000009c1,in_stack_000009c0) & 0xfffffffffffffffe);
  }
  func_0x048dc5a0(&stack0x000001a8);
  func_0x0eee2d70(CONCAT44(extraout_var_01,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL)))
                 );
  func_0x048dc5a0(&stack0x000001a8);
  func_0x0eee2d70(CONCAT44(extraout_var_02,
                           CONCAT22(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00))));
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


