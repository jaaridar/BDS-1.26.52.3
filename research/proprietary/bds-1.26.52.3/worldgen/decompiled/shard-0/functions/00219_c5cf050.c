/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cf050
 * Label: JigsawBlock::vslot13
 * Body:  [[0c5cf050, 0c5cf056]]
 * Ghidra: wg_JigsawBlock__vslot13
 */


void wg_JigsawBlock__vslot13(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


