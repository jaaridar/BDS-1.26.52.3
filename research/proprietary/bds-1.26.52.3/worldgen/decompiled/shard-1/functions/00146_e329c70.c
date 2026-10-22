/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe329c70
 * Label: string:minecraft:biome_music
 * Body:  [[0e329c70, 0e329c9b]]
 * Ghidra: FUN_0e329c70
 */


void FUN_0e329c70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte unaff_BL;
  
  *(byte *)(param_1 + 0x72) = *(byte *)(param_1 + 0x72) & unaff_BL;
  *(undefined8 *)(CONCAT71(in_register_00000001,in_AL) + 0x18) = 0;
  *(undefined1 *)(CONCAT71(in_register_00000001,in_AL) + 0x24) = 0;
  *(undefined8 *)CONCAT71(in_register_00000001,in_AL) = 0;
  *(ulong *)(CONCAT71(in_register_00000001,in_AL) + 0x28) =
       CONCAT62((int6)((ulong)param_4 >> 0x10),CONCAT11(0x48,(char)param_4));
  *(undefined8 *)(CONCAT71(in_register_00000001,in_AL) + 0x30) = 0;
  *(undefined8 *)(CONCAT71(in_register_00000001,in_AL) + 0x38) = 0;
  return;
}


