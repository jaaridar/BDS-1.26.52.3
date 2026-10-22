/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb1a7d30
 * Label: string:Spawn Rules for 'heightmap' in {} must use a registered heig
 * Body:  [[0b1a7977, 0b1a7b19] [0b1a7b20, 0b1a7cd6] [0b1a7d10, 0b1a7d2c] [0b1a7d30, 0b1a7ddf]]
 * Ghidra: FUN_0b1a7d30
 */


/* WARNING: Instruction at (ram,0x0b1a7d35) overlaps instruction at (ram,0x0b1a7d34)
    */
/* WARNING: Removing unreachable block (ram,0x0b1a7a39) */
/* WARNING: Removing unreachable block (ram,0x0b1a7a99) */
/* WARNING: Removing unreachable block (ram,0x0b1a7aa4) */
/* WARNING: Removing unreachable block (ram,0x0b1a7aaa) */
/* WARNING: Removing unreachable block (ram,0x0b1a7ab0) */
/* WARNING: Removing unreachable block (ram,0x0b1a7a82) */
/* WARNING: Removing unreachable block (ram,0x0b1a7ab7) */
/* WARNING: Removing unreachable block (ram,0x0b1a7a86) */
/* WARNING: Removing unreachable block (ram,0x0b1a7ac6) */
/* WARNING: Removing unreachable block (ram,0x0b1a7afb) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b28) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b41) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b64) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b70) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b86) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b20) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b88) */
/* WARNING: Removing unreachable block (ram,0x0b1a7b99) */
/* WARNING: Removing unreachable block (ram,0x0b1a7bae) */
/* WARNING: Removing unreachable block (ram,0x0b1a7bd4) */
/* WARNING: Removing unreachable block (ram,0x0b1a7bec) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c05) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c1d) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c33) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c4c) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c59) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c6a) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c74) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c8d) */
/* WARNING: Removing unreachable block (ram,0x0b1a7c94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0b1a7d30(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  char *pcVar1;
  long *plVar2;
  ulong in_RAX;
  char *pcVar3;
  ulong uVar4;
  long unaff_RBX;
  long unaff_RBP;
  ulong unaff_R12;
  ulong unaff_R14;
  long unaff_R15;
  byte bStack0000000000000050;
  undefined7 uStack0000000000000051;
  undefined8 in_stack_00000060;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  byte bStack0000000000000080;
  undefined7 uStack0000000000000081;
  undefined8 in_stack_00000090;
  undefined4 in_stack_000000a8;
  byte bStack00000000000000b8;
  undefined7 uStack00000000000000b9;
  undefined8 in_stack_000000c8;
  long in_stack_000000e0;
  long in_stack_000000f0;
  byte bStack00000000000000f8;
  undefined7 uStack00000000000000f9;
  undefined8 in_stack_00000108;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  
  do {
    pcVar3 = (char *)(in_RAX & 0xffffffffffffffe0);
    *pcVar3 = *pcVar3 + (char)pcVar3;
    pcVar1 = (char *)(param_4 * 5 + -0x1e);
    *pcVar1 = *pcVar1 + (char)param_4;
    uVar4 = param_3 >> 6;
    param_3 = unaff_R12;
    if ((*(ulong *)(param_4 + uVar4 * 8) >> (unaff_R12 & 0x3f) & 1) == 0) {
      func_0x0b63c8a0(in_stack_000000a8,in_stack_00000078,pcVar3 + unaff_R15 + -0x88,
                      &stack0x00000050,&stack0x00000080);
    }
    do {
      param_3 = param_3 + 1;
      unaff_R15 = unaff_R15 + 0xa8;
      if (unaff_R14 == param_3) {
        if ((bStack0000000000000080 & 1) != 0) {
          func_0x0412a280(in_stack_00000090,
                          CONCAT71(uStack0000000000000081,bStack0000000000000080) &
                          0xfffffffffffffffe);
        }
        plVar2 = in_stack_00000070;
        if ((bStack0000000000000050 & 1) != 0) {
          func_0x0412a280(in_stack_00000060,
                          CONCAT71(uStack0000000000000051,bStack0000000000000050) &
                          0xfffffffffffffffe);
        }
        if ((in_stack_00000120 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(in_stack_00000120 & 0xff00ffffffffffff) - 8);
        }
        in_stack_00000120 = 0;
        if ((in_stack_00000118 & 0x80000000000000) != 0) {
          (**(code **)(_DAT_0f5463b0 + 0x28))
                    (&DAT_0f5463b0,(in_stack_00000118 & 0xff00ffffffffffff) - 8);
        }
        in_stack_00000118 = 0;
        if ((bStack00000000000000f8 & 1) != 0) {
          func_0x0412a280(in_stack_00000108,
                          CONCAT71(uStack00000000000000f9,bStack00000000000000f8) &
                          0xfffffffffffffffe);
        }
        if (in_stack_000000e0 != 0) {
          func_0x0412a280(in_stack_000000e0,in_stack_000000f0 << 3);
        }
        if ((bStack00000000000000b8 & 1) != 0) {
          func_0x0412a280(in_stack_000000c8,
                          CONCAT71(uStack00000000000000b9,bStack00000000000000b8) &
                          0xfffffffffffffffe);
        }
        *plVar2 = unaff_RBX + 0x18;
        plVar2[1] = unaff_RBX;
        func_0x0eeb81b0(&stack0x00000150);
        return plVar2;
      }
      in_RAX = *(ulong *)(unaff_RBP + 0xb8);
      param_4 = in_stack_000000e0;
      unaff_R12 = param_3;
    } while (*(char *)(in_RAX + unaff_R15) != '\x01');
  } while( true );
}


