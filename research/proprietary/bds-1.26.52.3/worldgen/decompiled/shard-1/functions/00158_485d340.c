/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x485d340
 * Label: EditorCustomBiomeSource::vslot3
 * Body:  [[0485d340, 0485d357]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot3
 */


undefined4 wg_EditorCustomBiomeSource__vslot3(void)

{
  undefined4 uVar1;
  char *in_RAX;
  undefined8 *unaff_RBP;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)((long)unaff_RBP + 0x31) = *(char *)((long)unaff_RBP + 0x31) + (char)in_RAX;
  *unaff_RBP = 0x485d34b;
  uVar1 = func_0x0485cec0();
  return uVar1;
}


