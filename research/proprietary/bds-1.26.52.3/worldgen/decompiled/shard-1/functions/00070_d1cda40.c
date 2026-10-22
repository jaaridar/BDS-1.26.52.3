/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1cda40
 * Label: string:Identifier '%s' failed validation when registering jigsaw st
 * Body:  [[0d1cda40, 0d1cda7a]]
 * Ghidra: FUN_0d1cda40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d1cda40(void)

{
  long *plVar1;
  undefined8 in_RAX;
  long unaff_RBX;
  long unaff_R14;
  long unaff_R15;
  long lVar2;
  
  while (lVar2 = unaff_R15 + -8, lVar2 != unaff_R14) {
    plVar1 = *(long **)(unaff_R15 + -0x10);
    *(undefined8 *)(unaff_R15 + -0x10) = 0;
    unaff_R15 = lVar2;
    if (plVar1 != (long *)0x0) {
      in_RAX = (**(code **)(*plVar1 + 8))();
    }
  }
  *(long *)(unaff_RBX + 0x18) = unaff_R14;
  if (*(long *)(unaff_RBX + 0x10) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(unaff_RBX + 0x10));
  }
  return in_RAX;
}


