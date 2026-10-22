/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48caa60
 * Label: XoroshiroRandom::vslot9
 * Body:  [[048ca5bb, 048ca5e0] [048ca679, 048ca6d0] [048caa4e, 048caa5d] [048caa60, 048caaa7] [048caaae, 048cab01]]
 * Ghidra: wg_XoroshiroRandom__vslot9
 */


void wg_XoroshiroRandom__vslot9(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 in_AL;
  ulong in_stack_00000050;
  undefined8 in_stack_00000060;
  byte bStack00000000000001d8;
  undefined7 uStack00000000000001d9;
  undefined8 in_stack_000001e8;
  byte bStack00000000000001f0;
  undefined7 uStack00000000000001f1;
  undefined8 in_stack_00000200;
  byte in_stack_000009c0;
  undefined7 in_stack_000009c1;
  undefined8 in_stack_000009d0;
  
  out(0xfe,in_AL);
  do {
    func_0x0412a280(param_1,param_2);
    do {
      while( true ) {
        if ((bStack00000000000001d8 & 1) != 0) {
          func_0x0412a280(in_stack_000001e8,
                          CONCAT71(uStack00000000000001d9,bStack00000000000001d8) &
                          0xfffffffffffffffe);
          func_0x04886070(&stack0x000001b8);
          uVar2 = func_0x0eee2d70();
          if ((in_stack_000009c0 & 1) != 0) {
            func_0x0412a280(in_stack_000009d0,
                            CONCAT71(in_stack_000009c1,in_stack_000009c0) & 0xfffffffffffffffe);
          }
          func_0x048dc5a0(&stack0x000001a8);
          uVar2 = func_0x0eee2d70(uVar2);
          func_0x048dc5a0(&stack0x000001a8);
          func_0x0eee2d70(uVar2);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        func_0x04886070(&stack0x000001b8);
        func_0x0eee2d70();
        func_0x0412a280();
        if ((in_stack_00000050 & 1) == 0) break;
        func_0x0412a280(in_stack_00000060,in_stack_00000050 & 0xfffffffffffffffe);
        if ((bStack00000000000001f0 & 1) != 0) goto LAB_048caa4e;
      }
    } while ((bStack00000000000001f0 & 1) == 0);
LAB_048caa4e:
    param_2 = CONCAT71(uStack00000000000001f1,bStack00000000000001f0) & 0xfffffffffffffffe;
    param_1 = in_stack_00000200;
  } while( true );
}


