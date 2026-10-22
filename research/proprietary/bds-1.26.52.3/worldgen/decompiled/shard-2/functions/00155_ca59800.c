/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca59800
 * Label: callee-of:0x517c470
 * Body:  [[0ca59800, 0ca5984c] [0ca59851, 0ca5985b] [0ca59860, 0ca59a0e]]
 * Ghidra: FUN_0ca59800
 */


/* WARNING: Instruction at (ram,0x0ca59851) overlaps instruction at (ram,0x0ca5984d)
    */
/* WARNING: Removing unreachable block (ram,0x0ca59851) */
/* WARNING: Removing unreachable block (ram,0x0ca5989f) */
/* WARNING: Removing unreachable block (ram,0x0ca59853) */

void FUN_0ca59800(undefined8 param_1,undefined1 *param_2,undefined2 param_3)

{
  ulong uVar1;
  undefined4 in_EAX;
  undefined8 *unaff_RBX;
  int unaff_EBP;
  undefined4 *unaff_R15;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  ulong in_stack_00000058;
  undefined2 uStack0000000000000060;
  undefined1 uStack0000000000000066;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000090;
  long in_stack_000000a0;
  char in_stack_000000a8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  undefined4 uStack000000000000013c;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined1 uStack000000000000014c;
  
  uVar1 = in_stack_00000058;
  out(*param_2,param_3);
  *(byte *)(long)(unaff_EBP + 0x72) = *(byte *)(long)(unaff_EBP + 0x72) & (byte)((uint)in_EAX >> 8);
  in_stack_00000058._6_2_ = (undefined2)in_EAX;
  uStack0000000000000060 = (undefined2)((uint)in_EAX >> 0x10);
  uStack0000000000000066 = 0;
  func_0x0d6b13c0();
  if ((uVar1 & 1) != 0) {
    func_0x0412a280(in_stack_00000068,
                    CONCAT26(in_stack_00000058._6_2_,(int6)uVar1) & 0xfffffffffffffffe);
  }
  if (in_stack_00000070 != 0) {
    for (; in_stack_00000070 != in_stack_00000078; in_stack_00000078 = in_stack_00000078 + -0x20) {
      if ((*(byte *)(in_stack_00000078 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(in_stack_00000078 + -8),
                        *(ulong *)(in_stack_00000078 + -0x18) & 0xfffffffffffffffe);
      }
    }
    func_0x0412a280(in_stack_00000070,in_stack_00000080 - in_stack_00000070);
  }
  in_stack_00000108 = in_stack_00000008;
  in_stack_00000110 = in_stack_00000010;
  in_stack_00000118 = in_stack_00000018;
  in_stack_00000120 = in_stack_00000020;
  in_stack_00000128 = in_stack_00000028;
  in_stack_00000130 = uStack0000000000000030;
  uStack0000000000000134 = uStack0000000000000034;
  in_stack_00000138 = uStack0000000000000038;
  uStack000000000000013c = uStack000000000000003c;
  in_stack_00000140 = in_stack_00000040;
  uStack000000000000014c = *(undefined1 *)(unaff_R15 + 1);
  in_stack_00000148 = *unaff_R15;
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  unaff_RBX[2] = 0;
  *(undefined1 *)(unaff_RBX + 3) = 1;
  unaff_RBX[4] = 0;
  unaff_RBX[5] = 0;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = 0;
  unaff_RBX[9] = &UNK_0488e0b0;
  *(undefined4 *)(unaff_RBX + 0xb) = 0x48b5725f;
  unaff_RBX[10] = 0;
  *(undefined1 *)((long)unaff_RBX + 0x5c) = 0;
  unaff_RBX[0xc] = 0;
  unaff_RBX[0xd] = 0;
  unaff_RBX[0xe] = 0;
  unaff_RBX[0xf] = 0;
  unaff_RBX[0x10] = 0;
  unaff_RBX[0x11] = 0;
  unaff_RBX[0x12] = 0;
  unaff_RBX[0x13] = 0;
  unaff_RBX[0x14] = 0;
  *(undefined4 *)(unaff_RBX + 0x15) = 0xfefffffc;
  *(undefined1 *)((long)unaff_RBX + 0xac) = 0;
  func_0x0c4a4310(unaff_RBX + 0xc,&stack0x00000100);
  *(undefined1 *)(unaff_RBX + 3) = 0;
  func_0x05d85c50(&stack0x00000100);
  if ((in_stack_000000a8 == '\x01') && (in_stack_00000090 != 0)) {
    func_0x0ca39670(&stack0x00000090);
    func_0x0412a280(in_stack_00000090,in_stack_000000a0 - in_stack_00000090);
  }
  func_0x05d85c50(&stack0x00000000);
  return;
}


