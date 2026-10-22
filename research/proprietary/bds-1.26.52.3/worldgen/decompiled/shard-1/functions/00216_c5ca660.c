/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ca660
 * Label: JigsawBlock::vslot10
 * Body:  [[0c5ca660, 0c5ca699]]
 * Ghidra: wg_JigsawBlock__vslot10
 */


/* WARNING: Possible PIC construction at 0x0c5ca660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5ca665) */
/* WARNING: Removing unreachable block (ram,0x0c5ca675) */
/* WARNING: Removing unreachable block (ram,0x0c5ca67b) */
/* WARNING: Removing unreachable block (ram,0x0c5ca68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_JigsawBlock__vslot10(long param_1)

{
  undefined8 in_RAX;
  
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


