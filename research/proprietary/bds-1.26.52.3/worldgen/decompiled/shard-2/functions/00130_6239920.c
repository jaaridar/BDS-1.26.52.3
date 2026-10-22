/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6339920 (ELF vaddr 0x6239920)
 * Label: string:ZN6Editor8Services19EditorJigsawService5readyEvE3$_0
 * Body:  [[06339920, 06339935]]
 * Ghidra: FUN_06339920
 */


long FUN_06339920(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01738384) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


