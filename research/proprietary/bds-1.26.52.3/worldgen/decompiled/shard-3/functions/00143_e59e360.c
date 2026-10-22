/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe59e360
 * Label: string:ZNK6cereal8internal10TypeSchemaINSt3__16vectorIN11SharedType
 * Body:  [[0e59e360, 0e59e3d1] [0e59e406, 0e59e455]]
 * Ghidra: FUN_0e59e360
 */


void FUN_0e59e360(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_RAX;
  long unaff_RBX;
  code *pcStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined1 uStack0000000000000024;
  undefined8 uStack0000000000000030;
  undefined *puStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined *in_stack_00000080;
  
  *(int *)(in_RAX + -0x77) = *(int *)(in_RAX + -0x77) + -1;
  uStack0000000000000020 = 0x3856fa76;
  pcStack0000000000000018 = (code *)0x0;
  uStack0000000000000024 = 3;
  uStack0000000000000030 = 0;
  puStack0000000000000038 = &UNK_0e586530;
  puVar1 = *(undefined8 **)(unaff_RBX + 0x28);
  uStack0000000000000060 = puVar1[4];
  uStack0000000000000040 = *puVar1;
  uStack0000000000000048 = puVar1[1];
  uStack0000000000000050 = puVar1[2];
  uStack0000000000000058 = puVar1[3];
  plVar2 = (long *)puVar1[2];
  if (plVar2 == (long *)0x0) {
    uStack0000000000000050 = 0;
  }
  else {
    uStack0000000000000050 = (**(code **)(*plVar2 + 0x30))(plVar2,0xb);
  }
  in_stack_00000080 = &UNK_0f4bff60;
  func_0x0ed75bc0(&stack0x00000080,*(undefined8 *)(unaff_RBX + 0x30),&stack0x00000000,
                  *(undefined8 *)(unaff_RBX + 0x38),&stack0x00000040);
  if (pcStack0000000000000018 != (code *)0x0) {
    (*pcStack0000000000000018)(&stack0x00000000);
  }
  return;
}


