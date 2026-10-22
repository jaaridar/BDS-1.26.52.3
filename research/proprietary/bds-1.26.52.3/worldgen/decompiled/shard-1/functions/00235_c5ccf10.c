/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ccf10
 * Label: JigsawBlock::vslot98
 * Body:  [[0c5ccf10, 0c5ccf17]]
 * Ghidra: wg_JigsawBlock__vslot98
 */


void wg_JigsawBlock__vslot98(void)

{
  code *pcVar1;
  long in_RAX;
  byte in_CL;
  
  *(byte *)(in_RAX + 0xf) = *(byte *)(in_RAX + 0xf) | in_CL;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


