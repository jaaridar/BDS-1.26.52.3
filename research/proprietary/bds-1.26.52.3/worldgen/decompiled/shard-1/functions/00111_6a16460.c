/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6a16460
 * Label: string:EditorJigsawSection
 * Body:  [[06a16460, 06a164ab] [06a1663f, 06a1666c]]
 * Ghidra: FUN_06a16460
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_06a16460(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 *unaff_RBX;
  long unaff_R15;
  
  puVar2 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (puVar2 == (undefined1 *)0x0) {
    func_0x0eec74c0(0x68,0);
    DAT_00000000 = 0;
    uRam0000000000000060 = 0;
    cVar1 = *(char *)(unaff_R15 + 0x60);
  }
  else {
    *puVar2 = 0;
    puVar2[0x60] = 0;
    cVar1 = *(char *)(unaff_R15 + 0x60);
  }
  if (cVar1 == '\x01') {
    func_0x06a16870(puVar2);
    puVar2[0x60] = 1;
  }
  *unaff_RBX = puVar2;
  return 0;
}


