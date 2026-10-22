/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4953440
 * Label: string:minecraft:climate
 * Body:  [[0495185c, 04951909] [04953440, 049534f3] [049534fc, 04953913]]
 * Ghidra: FUN_04953440
 */


/* WARNING: Removing unreachable block (ram,0x049538d5) */
/* WARNING: Removing unreachable block (ram,0x04953480) */
/* WARNING: Removing unreachable block (ram,0x04953520) */
/* WARNING: Removing unreachable block (ram,0x049518e7) */

ulong FUN_04953440(void)

{
  uint *puVar1;
  char cVar2;
  long in_RCX;
  long unaff_RBX;
  ulong uVar3;
  ulong in_R8;
  int unaff_R12D;
  ulong unaff_R13;
  uint unaff_R14D;
  int unaff_R15D;
  bool in_OF;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long *in_stack_00000040;
  undefined4 in_stack_00000048;
  ulong in_stack_00000058;
  long in_stack_00000070;
  undefined4 uStack0000000000000078;
  long in_stack_000000d0;
  uint in_stack_000000d8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001b0;
  undefined8 *in_stack_000001b8;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  
  puVar1 = (uint *)(unaff_RBX + 0x44 + in_RCX * 4);
  *puVar1 = *puVar1 >> 4 | *puVar1 << 0x1c;
  if (in_OF) goto LAB_0495348f;
  in_stack_00000008._4_4_ = 5;
  uStack0000000000000010 = (undefined4)in_RCX;
  uStack0000000000000014 = (undefined4)((ulong)in_RCX >> 0x20);
  unaff_RBX = 1;
  cVar2 = '\x01';
  if ((_uStack0000000000000078 & 0xffffffff) != in_R8) {
    unaff_R15D = unaff_R14D + 4;
    unaff_R12D = 0;
    unaff_R13 = 0;
    do {
      if (((ulong)(uint)(unaff_R15D + unaff_R12D) + 0x10 <= in_stack_00000058) &&
         (syscall(), (ulong)(uint)(unaff_R15D + unaff_R12D) == 8)) {
        syscall();
      }
      unaff_R13 = unaff_R13 + 1;
LAB_0495348f:
      cVar2 = (char)unaff_RBX;
      unaff_R12D = unaff_R12D + 0x10;
    } while (unaff_R13 < (ulong)((long)(_uStack0000000000000078 - in_stack_00000070) >> 4));
  }
  if (((ulong)unaff_R14D + 4 <= in_stack_00000058) && (syscall(), (ulong)unaff_R14D == 8)) {
    syscall();
  }
  if (cVar2 != '\0') {
    func_0x04957c30(in_stack_000000d0,in_stack_000000d8,2,(long)&stack0x00000008 + 4);
    cVar2 = func_0x04957c90(&stack0x00000020,(long)&stack0x00000008 + 4);
    if (cVar2 != '\0') {
      func_0x04957c30(in_stack_000000d0,in_stack_000000d8,3,(long)&stack0x00000008 + 4);
      cVar2 = func_0x04957e90(&stack0x00000020,(long)&stack0x00000008 + 4);
      if (cVar2 != '\0') {
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,4,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670003;
        cVar2 = func_0x049589f0(&stack0x00000020,&stack0x00000010,&UNK_01221dd1);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,5,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670004;
        cVar2 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_012bd30b);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,6,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670005;
        cVar2 = func_0x049589f0(&stack0x00000020,&stack0x00000010,&UNK_01271659);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,7,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670006;
        cVar2 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_0127166a);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,8,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670007;
        cVar2 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_01447425);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,9,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670008;
        cVar2 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_01271654);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,10,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x47670009;
        cVar2 = func_0x04958df0(&stack0x00000020,&stack0x00000010,(int)in_stack_00000040[5],
                                &UNK_012578cd);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,0xb,(long)&stack0x00000008 + 4);
        in_stack_00000008._4_4_ = 0x4767000a;
        cVar2 = func_0x04958e40(&stack0x00000020,(long)&stack0x00000008 + 4);
        if (cVar2 == '\0') {
          in_stack_00000008._4_4_ = 0;
          uStack0000000000000010 = 0;
          uStack0000000000000014 = 0;
        }
        func_0x04957c30(in_stack_000000d0,in_stack_000000d8,0xc,(long)&stack0x00000008 + 4);
        uVar3 = CONCAT71((int7)((ulong)&stack0x00000010 >> 8),1);
        (**(code **)(*in_stack_00000040 + 0x30))();
        goto LAB_04953896;
      }
    }
  }
  uVar3 = 0;
LAB_04953896:
  if (((in_stack_000000f0._4_4_ != 2) &&
      ((ulong)in_stack_000000d8 + 0xc <= *(ulong *)(in_stack_000000d0 + 0x10))) &&
     (syscall(), (ulong)in_stack_000000d8 == 8)) {
    syscall();
  }
  func_0x049539a0(&stack0x00000020);
  while (in_stack_000001b8 != (undefined8 *)0x0) {
    in_stack_000001b8 = (undefined8 *)*in_stack_000001b8;
    syscall();
  }
  return uVar3 & 0xffffffff;
}


