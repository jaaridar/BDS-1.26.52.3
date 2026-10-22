/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c88b0
 * Label: JigsawBlock::vslot96
 * Body:  [[0c5c88b0, 0c5c88cb]]
 * Ghidra: wg_JigsawBlock__vslot96
 */


/* WARNING: Possible PIC construction at 0x0c5c88b9: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5c88be) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlock__vslot96(void)

{
  long in_RAX;
  
  if (in_RAX != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return in_RAX;
}


