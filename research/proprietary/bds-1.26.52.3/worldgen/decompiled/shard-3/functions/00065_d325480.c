/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd325480
 * Label: string:minecraft:weighted_random_feature
 * Body:  [[0d325480, 0d3254ed] [0d325be7, 0d325cee] [0d325d26, 0d325d37] [0d325d40, 0d325dc7]]
 * Ghidra: FUN_0d325480
 */


void FUN_0d325480(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long in_RAX;
  char in_CL;
  undefined8 *unaff_RBX;
  long unaff_R14;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  byte bStack0000000000000100;
  undefined7 uStack0000000000000101;
  undefined8 in_stack_00000110;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  ulong uStack0000000000000178;
  undefined2 uStack0000000000000180;
  undefined8 *puStack0000000000000188;
  
  *(char *)(in_RAX + -0x73) = *(char *)(in_RAX + -0x73) + in_CL;
  uStack0000000000000178 = (ulong)((int)in_RAX + 0x21bdfd7);
  puStack0000000000000188 = &stack0x00000010;
  uStack0000000000000180 = 0x10;
  cVar3 = func_0x0d326050(&stack0x00000190,&stack0x00000178,&stack0x00000100,
                          *(undefined8 *)(unaff_R14 + 0x70));
  if ((in_stack_00000018 & 1) != 0) {
    func_0x0412a280(in_stack_00000028,in_stack_00000018 & 0xfffffffffffffffe);
  }
  if (cVar3 == '\0') {
    func_0x0d6b2c60(&stack0x000004b8);
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
    func_0x0c4a4310(unaff_RBX + 0xc,&stack0x000004b8);
    *(undefined1 *)(unaff_RBX + 3) = 0;
    func_0x05d85c50(&stack0x000004b8);
    lVar1 = in_stack_00000128;
  }
  else {
    func_0x0d6b2c60(&stack0x00000468);
    func_0x0d326350();
    func_0x05d85c50(&stack0x00000468);
    lVar1 = in_stack_00000128;
  }
  in_stack_00000128 = lVar1;
  lVar2 = in_stack_00000130;
  if (lVar1 != 0) {
    for (; lVar1 != lVar2; lVar2 = lVar2 + -0x20) {
      if ((*(byte *)(lVar2 + -0x20) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar2 + -0x10),
                        *(ulong *)(lVar2 + -0x20) & 0xfffffffffffffffe);
      }
    }
    in_stack_00000130 = lVar1;
    func_0x0412a280(in_stack_00000128,in_stack_00000138 - in_stack_00000128);
  }
  if ((bStack0000000000000100 & 1) != 0) {
    func_0x0412a280(in_stack_00000110,
                    CONCAT71(uStack0000000000000101,bStack0000000000000100) & 0xfffffffffffffffe);
  }
  func_0x0490a470(&stack0x00000190);
  return;
}


