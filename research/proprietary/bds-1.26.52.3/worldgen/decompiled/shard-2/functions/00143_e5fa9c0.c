/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe5fa9c0
 * Label: string:minecraft:biome_music
 * Body:  [[0e5fa9c0, 0e5fa9ef]]
 * Ghidra: FUN_0e5fa9c0
 */


void FUN_0e5fa9c0(void)

{
  byte *pbVar1;
  undefined8 in_RAX;
  undefined8 *unaff_RBX;
  undefined8 unaff_R15;
  char in_CF;
  
  pbVar1 = (byte *)(CONCAT71((int7)((ulong)unaff_R15 >> 8),(char)unaff_R15 + (char)in_RAX + in_CF) +
                   0x72);
  *pbVar1 = *pbVar1 & (byte)unaff_RBX;
  unaff_RBX[3] = 0;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 0;
  *unaff_RBX = 0;
  unaff_RBX[5] = in_RAX;
  unaff_RBX[6] = 0;
  unaff_RBX[7] = 0;
  return;
}


