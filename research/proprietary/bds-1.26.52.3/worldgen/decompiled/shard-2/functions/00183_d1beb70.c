/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1beb70
 * Label: br::worldgen::processors::Rule::vslot5
 * Body:  [[0d1beb70, 0d1beb97]]
 * Ghidra: wg_br__worldgen__processors__Rule__vslot5
 */


/* WARNING: Possible PIC construction at 0x0d1beb81: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d1beb86) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_br__worldgen__processors__Rule__vslot5(void)

{
  long *plVar1;
  undefined8 in_RAX;
  long unaff_RBX;
  long unaff_R14;
  long lVar2;
  long unaff_R15;
  
  while (lVar2 = unaff_R15 + -8, lVar2 != unaff_R14) {
    plVar1 = *(long **)(unaff_R15 + -0x10);
    *(undefined8 *)(unaff_R15 + -0x10) = 0;
    unaff_R15 = lVar2;
    if (plVar1 != (long *)0x0) {
      in_RAX = (**(code **)(*plVar1 + 8))();
    }
  }
  *(long *)(unaff_RBX + 0x10) = unaff_R14;
  if (*(long *)(unaff_RBX + 8) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(unaff_RBX + 8));
  }
  return in_RAX;
}


