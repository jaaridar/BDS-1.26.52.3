/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb93af20
 * Label: string:worldGeneratorType
 * Body:  [[0b93ad2f, 0b93ad65] [0b93ae2c, 0b93aef0] [0b93af20, 0b93af5b]]
 * Ghidra: FUN_0b93af20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0b93af20(void)

{
  long lVar1;
  long in_RAX;
  int in_ECX;
  undefined8 *unaff_RBX;
  long *unaff_R14;
  long *in_stack_00000060;
  code *in_stack_00000118;
  
  _DAT_0f6c3750 = (long *)&DAT_0f6c3730;
  func_0x0eee2f40(&UNK_062619b0,&DAT_0f6c3730,0xf53dab8,in_ECX + *(int *)(in_RAX + -0x77));
  func_0x0410844d(0xf6c3760);
  if (_DAT_0f6c3750 == (long *)0x0) {
    in_stack_00000060 = (long *)0x0;
  }
  else if (_DAT_0f6c3750 == (long *)&DAT_0f6c3730) {
    in_stack_00000060 = (long *)&stack0x00000040;
    (**(code **)(_DAT_0f6c3730 + 0x18))(&DAT_0f6c3730);
  }
  else {
    in_stack_00000060 = (long *)(**(code **)(*_DAT_0f6c3750 + 0x10))();
  }
  (**(code **)(*unaff_R14 + 0x48))();
  if (in_stack_00000060 == (long *)&stack0x00000040) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (in_stack_00000060 == (long *)0x0) goto LAB_0b93ae8a;
  }
  (**(code **)(*in_stack_00000060 + lVar1))();
LAB_0b93ae8a:
  (**(code **)(*unaff_R14 + 0x50))(&stack0x000000f8);
  if (in_stack_00000118 != (code *)0x0) {
    (*in_stack_00000118)(&stack0x00000100);
  }
  unaff_RBX[6] = 0;
  unaff_RBX[7] = 0;
  unaff_RBX[4] = 0;
  unaff_RBX[5] = 0;
  unaff_RBX[2] = 0;
  unaff_RBX[3] = 0;
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  unaff_RBX[8] = 0;
  func_0x05d84ba0(unaff_RBX + 1);
  return;
}


