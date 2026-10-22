/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf4ee40
 * Label: string:ZN18SculkBlockBehavior15_canPlaceGrowthER17IBlockWorldGenAPI
 * Body:  [[0cf4ee40, 0cf4ee89]]
 * Ghidra: FUN_0cf4ee40
 */


undefined4 FUN_0cf4ee40(long *param_1)

{
  undefined4 unaff_R15D;
  long *in_stack_00000038;
  
  (**(code **)(*param_1 + 8))();
  if (in_stack_00000038 != (long *)0x0) {
    LOCK();
    *(int *)((long)in_stack_00000038 + 0xc) = *(int *)((long)in_stack_00000038 + 0xc) + -1;
    UNLOCK();
    if (((*(int *)((long)in_stack_00000038 + 0xc) < 1) && (*in_stack_00000038 == 0)) &&
       (in_stack_00000038 != (long *)0x0)) {
      func_0x0412a280(in_stack_00000038,0x10);
    }
  }
  return unaff_R15D;
}


