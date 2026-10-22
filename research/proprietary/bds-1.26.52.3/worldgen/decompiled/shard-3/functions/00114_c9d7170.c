/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcad7170 (ELF vaddr 0xc9d7170)
 * Label: JigsawStructurePostprocessAction::vslot4
 * Body:  [[0cad7170, 0cad717a]]
 * Ghidra: wg_JigsawStructurePostprocessAction__vslot4
 */


bool wg_JigsawStructurePostprocessAction__vslot4(long param_1,long param_2)

{
  return *(char *)(param_1 + 8) == *(char *)(param_2 + 8);
}


