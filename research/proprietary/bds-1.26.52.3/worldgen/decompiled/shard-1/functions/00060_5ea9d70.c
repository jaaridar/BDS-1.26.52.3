/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5fa9d70 (ELF vaddr 0x5ea9d70)
 * Label: Editor::Services::EditorJigsawService::vslot9
 * Body:  [[05fa9d70, 05fa9d7c]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot9
 */


undefined4 wg_Editor__Services__EditorJigsawService__vslot9(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 2);
}


