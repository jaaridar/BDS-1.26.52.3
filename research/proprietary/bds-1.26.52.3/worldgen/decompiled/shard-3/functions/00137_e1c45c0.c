/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1c45c0
 * Label: string:minecraft:biome_music
 * Body:  [[0e1c45c0, 0e1c4617] [0e1c4730, 0e1c4743] [0e1c478e, 0e1c479e]]
 * Ghidra: FUN_0e1c45c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0e1c45c0(void)

{
  long lVar1;
  long *unaff_RBX;
  
  unaff_RBX[2] = (long)&UNK_0e1c4540;
  *(undefined4 *)(unaff_RBX + 4) = 0x297e8f79;
  unaff_RBX[3] = (long)&UNK_0e1c47c0;
  *(undefined1 *)((long)unaff_RBX + 0x24) = 1;
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (lVar1 == 0) {
    func_0x0eec74c0(0x20,0);
  }
  func_0x0a7a5a80(lVar1);
  *unaff_RBX = lVar1;
  return 0;
}


