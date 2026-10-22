/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cde70
 * Label: JigsawBlock::vslot70
 * Body:  [[0c5cde70, 0c5cde76]]
 * Ghidra: wg_JigsawBlock__vslot70
 */


void wg_JigsawBlock__vslot70(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


