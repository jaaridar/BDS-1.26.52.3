/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca5db60
 * Label: string:minecraft:cave_spider
 * Body:  [[0ca5db60, 0ca5ddcb]]
 * Ghidra: FUN_0ca5db60
 */


void FUN_0ca5db60(void)

{
  byte bVar1;
  long lVar2;
  long unaff_RBX;
  long *plVar3;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  byte *in_stack_00000038;
  
  func_0x0ca5f9a0();
  func_0x0ca5fa10();
  lVar2 = *(long *)(unaff_RBX + 0x1c8);
  *(undefined8 *)(unaff_RBX + 0x1c8) = 0;
  if (lVar2 != 0) {
    func_0x0412a280(lVar2,1);
  }
  func_0x0ca5f4b0(in_stack_00000010);
  plVar3 = *(long **)(unaff_RBX + 0x1b8);
  *(undefined8 *)(unaff_RBX + 0x1b8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(unaff_RBX + 0x1a8);
  *(undefined8 *)(unaff_RBX + 0x1a8) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  func_0x0ca5f4f0(in_stack_00000018);
  lVar2 = *(long *)(unaff_RBX + 0x198);
  *(undefined8 *)(unaff_RBX + 0x198) = 0;
  if (lVar2 != 0) goto LAB_0ca5dd41;
  plVar3 = *(long **)(unaff_RBX + 400);
  *(undefined8 *)(unaff_RBX + 400) = 0;
  if (plVar3 != (long *)0x0) goto LAB_0ca5dd66;
LAB_0ca5dc12:
  plVar3 = *(long **)(unaff_RBX + 0x188);
  *(undefined8 *)(unaff_RBX + 0x188) = 0;
  do {
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = (long *)*in_stack_00000020;
    *in_stack_00000020 = 0;
    if (plVar3 == (long *)0x0) {
      if ((*in_stack_00000038 & 1) != 0) goto LAB_0ca5dda0;
LAB_0ca5dc55:
      bVar1 = *(byte *)(unaff_RBX + 0x140);
    }
    else {
      (**(code **)(*plVar3 + 8))();
      if ((*in_stack_00000038 & 1) == 0) goto LAB_0ca5dc55;
LAB_0ca5dda0:
      func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x168),
                      *(ulong *)(unaff_RBX + 0x158) & 0xfffffffffffffffe);
      bVar1 = *(byte *)(unaff_RBX + 0x140);
    }
    if ((bVar1 & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(unaff_RBX + 0x150),
                      *(ulong *)(unaff_RBX + 0x140) & 0xfffffffffffffffe);
    }
    plVar3 = *(long **)(unaff_RBX + 0x138);
    *(undefined8 *)(unaff_RBX + 0x138) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    func_0x0534d960(unaff_RBX + 0x128);
    plVar3 = *(long **)(unaff_RBX + 0x120);
    *(long *)(unaff_RBX + 0x120) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    func_0x0bc32f20(unaff_RBX + 0xd0);
    func_0x0ca5fa60(unaff_RBX + 0xb0);
    func_0x0ca7c1b0(unaff_RBX + 0x78);
    lVar2 = *(long *)(unaff_RBX + 0x60);
    if (lVar2 != 0) {
      *(long *)(unaff_RBX + 0x68) = lVar2;
      func_0x0412a280(lVar2,*(long *)(unaff_RBX + 0x70) - lVar2);
    }
    if (*(long *)(unaff_RBX + 0x58) != 0) {
      func_0x0412c2d0();
    }
    func_0x0ee13f50(unaff_RBX + 0x38);
    unaff_RBX = unaff_RBX + 0x10;
    func_0x0c92bcd0(unaff_RBX);
    func_0x0eee2d70(unaff_retaddr);
LAB_0ca5dd41:
    func_0x0412a280();
    plVar3 = *(long **)(unaff_RBX + 400);
    *(undefined8 *)(unaff_RBX + 400) = 0;
    if (plVar3 == (long *)0x0) goto LAB_0ca5dc12;
LAB_0ca5dd66:
    (**(code **)(*plVar3 + 8))();
    plVar3 = *(long **)(unaff_RBX + 0x188);
    *(undefined8 *)(unaff_RBX + 0x188) = 0;
  } while( true );
}


