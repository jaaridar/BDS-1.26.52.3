/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x633f210 (ELF vaddr 0x623f210)
 * Label: string:ZN6Editor8Services19EditorJigsawService33_loadBehaviorPackJi
 * Body:  [[0633f210, 0633f225]]
 * Ghidra: FUN_0633f210
 */


long FUN_0633f210(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(undefined **)(param_2 + 8) == &UNK_01738467) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}


