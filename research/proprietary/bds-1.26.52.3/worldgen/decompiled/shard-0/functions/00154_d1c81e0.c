/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1c81e0
 * Label: br::worldgen::JigsawStructure::vslot0
 * Body:  [[0d1c81d0, 0d1c81dc] [0d1c81e0, 0d1c8217]]
 * Ghidra: wg_br__worldgen__JigsawStructure__vslot0
 */


/* WARNING: Possible PIC construction at 0x0d1c8201: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0d1c8206) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * wg_br__worldgen__JigsawStructure__vslot0(long *param_1)

{
  char *in_RAX;
  long unaff_RBX;
  long unaff_R14;
  long unaff_R15;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  while( true ) {
    if (param_1 != (long *)0x0) {
      in_RAX = (char *)(**(code **)(*param_1 + 8))();
    }
    if (unaff_R15 + -8 == unaff_R14) break;
    param_1 = *(long **)(unaff_R15 + -0x10);
    *(undefined8 *)(unaff_R15 + -0x10) = 0;
    unaff_R15 = unaff_R15 + -8;
  }
  *(long *)(unaff_RBX + 0x10) = unaff_R14;
  if (*(long *)(unaff_RBX + 8) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(unaff_RBX + 8));
  }
  return in_RAX;
}


