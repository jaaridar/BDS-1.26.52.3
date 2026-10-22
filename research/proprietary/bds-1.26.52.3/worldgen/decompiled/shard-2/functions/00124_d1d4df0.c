/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d4df0
 * Label: string:bool br::worldgen::StructureInstance::postProcess(BlockSourc
 * Body:  [[0d1d4df0, 0d1d4e6b]]
 * Ghidra: FUN_0d1d4df0
 */


void FUN_0d1d4df0(void)

{
  char cVar1;
  char *in_RAX;
  char *pcVar2;
  long lVar3;
  long in_RCX;
  long *unaff_R13;
  undefined8 in_stack_00000060;
  long *in_stack_00000090;
  
  cVar1 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *in_RAX = *in_RAX + cVar1;
  pcVar2 = (char *)(in_RCX * 5 + -0x54);
  *pcVar2 = *pcVar2 + (char)in_RCX;
  pcVar2 = (char *)((ulong)in_RAX & 0xffffffffffffff90);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  pcVar2 = (char *)(in_RCX * 5 + -9);
  *pcVar2 = *pcVar2 + (char)in_RCX;
  func_0x0d1d2dc0();
  if (in_stack_00000090 == unaff_R13) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (in_stack_00000090 == (long *)0x0) goto LAB_0d1d4e48;
  }
  (**(code **)(*in_stack_00000090 + lVar3))();
LAB_0d1d4e48:
  func_0x0d6c9500(&stack0x00000058,in_stack_00000060);
  return;
}


