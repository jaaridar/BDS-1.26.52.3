/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5fa9d80 (ELF vaddr 0x5ea9d80)
 * Label: Editor::Services::EditorJigsawService::vslot10
 * Body:  [[05fa9d80, 05fa9d87]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot10
 */


bool wg_Editor__Services__EditorJigsawService__vslot10(long param_1)

{
  return *(int *)(param_1 + 0x24) == 3;
}


