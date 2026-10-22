/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x62414b0 (ELF vaddr 0x61414b0)
 * Label: Editor::Services::EditorJigsawService::vslot5
 * Body:  [[062414b0, 062414f5]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot5
 */


undefined8 wg_Editor__Services__EditorJigsawService__vslot5(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = func_0x06339bd0(param_1 + 0x1f8);
  if (lVar1 != param_1 + 0x200) {
    lVar1 = func_0x06339cc0(param_1 + 0x1f8,param_2,param_2);
    return *(undefined8 *)(lVar1 + 0x38);
  }
  return 0;
}


