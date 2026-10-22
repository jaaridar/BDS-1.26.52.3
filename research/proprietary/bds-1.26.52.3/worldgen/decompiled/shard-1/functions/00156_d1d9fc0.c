/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d9fc0
 * Label: br::worldgen::processors::JigsawReplacement::vslot1
 * Body:  [[0d1d9fc0, 0d1d9fc0]]
 * Ghidra: wg_br__worldgen__processors__JigsawReplacement__vslot1
 */


void wg_br__worldgen__processors__JigsawReplacement__vslot1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}


