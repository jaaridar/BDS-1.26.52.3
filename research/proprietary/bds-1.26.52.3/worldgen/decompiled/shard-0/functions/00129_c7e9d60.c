/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e9d60
 * Label: string:Biomes in Nether are only compatible with following Surface
 * Body:  [[0c7e9d60, 0c7e9d6a]]
 * Ghidra: FUN_0c7e9d60
 */


void FUN_0c7e9d60(undefined8 param_1,undefined1 *param_2,undefined2 param_3,undefined8 param_4)

{
  char *pcVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  out(*param_2,param_3);
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x77);
  *pcVar1 = *pcVar1 + (char)param_4 + (char)((ulong)param_4 >> 8);
  return;
}


