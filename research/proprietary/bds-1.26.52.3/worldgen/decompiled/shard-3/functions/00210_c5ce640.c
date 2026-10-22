/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ce640
 * Label: JigsawBlock::vslot60
 * Body:  [[0c5ce640, 0c5ce647]]
 * Ghidra: wg_JigsawBlock__vslot60
 */


void wg_JigsawBlock__vslot60(void)

{
  code *pcVar1;
  long in_RAX;
  byte in_CL;
  
  *(byte *)(in_RAX + 0xf) = *(byte *)(in_RAX + 0xf) | in_CL;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


