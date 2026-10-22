/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493d130
 * Label: string:/mnt/vss/_work/1/s/handheld/src-vanilla/vanilla_shared/src/c
 * Body:  [[0493d130, 0493d140]]
 * Ghidra: FUN_0493d130
 */


void FUN_0493d130(undefined8 param_1,long param_2)

{
  long *plVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  byte in_R9B;
  byte *unaff_R15;
  
  *unaff_R15 = *unaff_R15 | in_R9B;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + in_EAX;
  if (CONCAT44(in_register_00000004,in_EAX) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(in_register_00000004,in_EAX) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return;
}


