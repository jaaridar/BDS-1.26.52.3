/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5fa9d50 (ELF vaddr 0x5ea9d50)
 * Label: Editor::Services::EditorJigsawService::vslot8
 * Body:  [[05fa9d50, 05fa9d64]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot8
 */


undefined4 wg_Editor__Services__EditorJigsawService__vslot8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 2 || *(uint *)(param_1 + 0x24) == 1);
}


