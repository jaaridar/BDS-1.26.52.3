/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ca480
 * Label: JigsawBlock::vslot8
 * Body:  [[0c5ca480, 0c5ca49b]]
 * Ghidra: wg_JigsawBlock__vslot8
 */


/* WARNING: Possible PIC construction at 0x0c5ca489: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0c5ca48e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long wg_JigsawBlock__vslot8(void)

{
  long in_RAX;
  
  if (in_RAX != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return in_RAX;
}


