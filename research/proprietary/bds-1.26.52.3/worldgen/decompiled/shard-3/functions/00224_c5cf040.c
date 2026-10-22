/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cf040
 * Label: JigsawBlock::vslot124
 * Body:  [[0c5cf040, 0c5cf050]]
 * Ghidra: wg_JigsawBlock__vslot124
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * wg_JigsawBlock__vslot124(void)

{
  int *piVar1;
  char *in_RAX;
  long unaff_RBX;
  long unaff_RBP;
  
  piVar1 = (int *)((long)&__DT_RELA[0x2b00b].r_info + unaff_RBP + 7);
  *piVar1 = *piVar1 << 1;
  *in_RAX = *in_RAX + (char)in_RAX;
  if (unaff_RBX != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0);
  }
  return in_RAX;
}


