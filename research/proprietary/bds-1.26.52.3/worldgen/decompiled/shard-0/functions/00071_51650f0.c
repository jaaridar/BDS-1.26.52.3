/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x51650f0
 * Label: string:minecraft:nether_gold_ore_feature
 * Body:  [[051650f0, 051650fd] [051668f3, 051668fb]]
 * Ghidra: FUN_051650f0
 */


void FUN_051650f0(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + param_4;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  func_0x0eee2d70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


