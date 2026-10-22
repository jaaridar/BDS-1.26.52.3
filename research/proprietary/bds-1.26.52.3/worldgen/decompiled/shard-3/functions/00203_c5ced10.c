/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5ced10
 * Label: JigsawBlock::vslot24
 * Body:  [[0c5ced10, 0c5ced16]]
 * Ghidra: wg_JigsawBlock__vslot24
 */


void wg_JigsawBlock__vslot24(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


