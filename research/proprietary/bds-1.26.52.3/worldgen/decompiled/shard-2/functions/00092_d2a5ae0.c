/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2a5ae0
 * Label: FlatWorldGenerator::vslot46
 * Body:  [[0d2a5ae0, 0d2a5b0f]]
 * Ghidra: wg_FlatWorldGenerator__vslot46
 */


void wg_FlatWorldGenerator__vslot46(void)

{
  char cVar1;
  undefined8 *unaff_RBX;
  undefined1 *puVar2;
  long unaff_R14;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  
  func_0x0ed684d0(&stack0x00000010);
  cVar1 = func_0x0d2a6170(&stack0x00000180,&stack0x00000010,&stack0x00000110,
                          *(undefined8 *)(unaff_R14 + 0x70));
  func_0x04907660(&stack0x00000038);
  if (in_stack_00000020 != 0) {
    in_stack_00000028 = in_stack_00000020;
    func_0x0412a280(in_stack_00000020,in_stack_00000030 - in_stack_00000020);
  }
  if (cVar1 == '\0') {
    func_0x0d6b2c60(&stack0x000004a8);
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
    puVar2 = &stack0x000004a8;
    func_0x0c4a4310(unaff_RBX + 0xc,puVar2);
    *(undefined1 *)(unaff_RBX + 3) = 0;
  }
  else {
    func_0x0d6b2c60(&stack0x00000458);
    func_0x0d2a6400();
    puVar2 = &stack0x00000458;
  }
  func_0x05d85c50(puVar2);
  func_0x0d2a6760(&stack0x00000110);
  func_0x0490a470(&stack0x00000180);
  return;
}


