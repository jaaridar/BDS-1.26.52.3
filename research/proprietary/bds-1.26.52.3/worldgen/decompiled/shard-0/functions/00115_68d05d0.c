/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x68d05d0
 * Label: string:DisableTerrainRendering
 * Body:  [[068d05d0, 068d064c]]
 * Ghidra: FUN_068d05d0
 */


void FUN_068d05d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long in_RAX;
  long *in_stack_00000098;
  uint in_stack_000002b0;
  
  (**(code **)(param_4 + in_RAX * 8))(param_1,&stack0x00000018);
  if ((ulong)in_stack_000002b0 != 0xffffffff) {
    (**(code **)(&UNK_0f059fe8 + (ulong)in_stack_000002b0 * 8))(&stack0x00000018,&stack0x000000b0);
  }
  plVar3 = in_stack_00000098;
  if (in_stack_00000098 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000098 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000098 + 0x10))(in_stack_00000098);
      func_0x0412c2d0(plVar3);
    }
  }
  return;
}


