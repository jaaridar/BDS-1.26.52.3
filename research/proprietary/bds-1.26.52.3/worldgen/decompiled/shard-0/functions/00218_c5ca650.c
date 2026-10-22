/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ca650
 * Label: JigsawBlock::vslot9
 * Body:  [[0c5ca650, 0c5ca699]]
 * Ghidra: wg_JigsawBlock__vslot9
 */


/* WARNING: Possible PIC construction at 0x0c5ca660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5ca665) */
/* WARNING: Removing unreachable block (ram,0x0c5ca675) */
/* WARNING: Removing unreachable block (ram,0x0c5ca67b) */
/* WARNING: Removing unreachable block (ram,0x0c5ca68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot9(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 in_RAX;
  long unaff_RBX;
  
  plVar1 = (long *)(param_4 + 0x48 + param_3);
  *plVar1 = *plVar1 + param_2;
  if (*(long *)(unaff_RBX + 0x58) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(unaff_RBX + 0x58));
  }
  return in_RAX;
}


