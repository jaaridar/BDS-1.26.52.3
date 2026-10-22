/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2491a0
 * Label: string:minecraft:biome_music
 * Body:  [[0e2491a0, 0e2491b3] [0e2491bb, 0e2491d2]]
 * Ghidra: FUN_0e2491a0
 */


void FUN_0e2491a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char in_CF;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       (*(char *)CONCAT71(in_register_00000001,in_AL) - in_AL) - in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x7b);
  *pcVar1 = *pcVar1 + (byte)param_4;
  pcVar1 = (char *)(param_4 * 2 + -0x3a);
  *pcVar1 = *pcVar1 << ((byte)param_4 & 0x1f);
  *(undefined8 *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff03) = param_3;
  *(undefined8 *)((CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff03) + 0x28) = param_2;
  *(undefined8 *)((CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff03) + 0x30) = 0;
  *(undefined **)((CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff03) + 0x38) =
       &UNK_0e248c90;
  return;
}


