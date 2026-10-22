/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ca680
 * Label: JigsawBlock::vslot12
 * Body:  [[0c5ca680, 0c5ca699]]
 * Ghidra: wg_JigsawBlock__vslot12
 */


/* WARNING: Possible PIC construction at 0x0c5ca687: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5ca68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot12(void)

{
  undefined8 in_RAX;
  long unaff_RBX;
  
  if (*(int *)(unaff_RBX + 0x20) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(int *)(unaff_RBX + 0x20));
  }
  return in_RAX;
}


