/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5c88c0
 * Label: JigsawBlock::vslot97
 * Body:  [[0c5c88c0, 0c5c88cb]]
 * Ghidra: wg_JigsawBlock__vslot97
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * wg_JigsawBlock__vslot97(long param_1)

{
  char *in_RAX;
  long unaff_RBX;
  longdouble in_ST0;
  
  *(short *)(unaff_RBX + -0x42) = (short)ROUND(in_ST0);
  *in_RAX = *in_RAX + (char)in_RAX;
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return in_RAX;
}


