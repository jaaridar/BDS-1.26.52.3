/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cbb20
 * Label: JigsawBlock::vslot73
 * Body:  [[0c5cbb20, 0c5cbb2a]]
 * Ghidra: wg_JigsawBlock__vslot73
 */


uint wg_JigsawBlock__vslot73(void)

{
  uint in_EAX;
  long in_RCX;
  int *in_R8;
  
  *in_R8 = *in_R8 + in_EAX;
  *(char *)(in_RCX + 0xf) = *(char *)(in_RCX + 0xf) + (char)in_EAX;
  return in_EAX & 0xfffffff6;
}


