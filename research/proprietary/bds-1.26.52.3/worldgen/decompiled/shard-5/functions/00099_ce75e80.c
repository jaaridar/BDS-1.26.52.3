/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf75e80 (ELF vaddr 0xce75e80)
 * Label: JigsawBlockActor::vslot17
 * Body:  [[0cf75e80, 0cf75e87]]
 * Ghidra: wg_JigsawBlockActor__vslot17
 */


bool wg_JigsawBlockActor__vslot17(long param_1,char param_2)

{
  return *(char *)(param_1 + 0x14) == param_2;
}


