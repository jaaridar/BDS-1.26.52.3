/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd400ec0
 * Label: string:minecraft:feature_rules
 * Body:  [[0d400ec0, 0d400ed7] [0d400f70, 0d400f7c] [0d4010a5, 0d4010e8] [0d4013a7, 0d4013e5]]
 * Ghidra: FUN_0d400ec0
 */


void FUN_0d400ec0(void)

{
  code *pcVar1;
  long lVar2;
  long *in_stack_00000008;
  long in_stack_00000060;
  byte bStack00000000000000e8;
  undefined7 uStack00000000000000e9;
  undefined8 in_stack_000000f8;
  long in_stack_00000110;
  long *in_stack_000002a0;
  
  func_0x0412a280();
  if (in_stack_00000060 != 0) {
    (**(code **)(in_stack_00000060 + 8))(&stack0x00000060);
  }
  if (in_stack_00000110 != 0) {
    (**(code **)(in_stack_00000110 + 8))(&stack0x00000110);
  }
  if ((bStack00000000000000e8 & 1) != 0) {
    func_0x0412a280(in_stack_000000f8,
                    CONCAT71(uStack00000000000000e9,bStack00000000000000e8) & 0xfffffffffffffffe);
  }
  lVar2 = 0x20;
  if ((in_stack_000002a0 != (long *)&stack0x00000280) &&
     (lVar2 = 0x28, in_stack_000002a0 == (long *)0x0)) {
    in_stack_000002a0 = in_stack_00000008;
    lVar2 = func_0x0eee2d70();
  }
  (**(code **)(*in_stack_000002a0 + lVar2))();
  func_0x0eee2d70(in_stack_00000008);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


