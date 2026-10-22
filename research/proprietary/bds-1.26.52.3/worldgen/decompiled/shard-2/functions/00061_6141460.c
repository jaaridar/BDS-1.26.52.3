/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6241460 (ELF vaddr 0x6141460)
 * Label: Editor::Services::EditorJigsawService::vslot14
 * Body:  [[06241460, 062414a5]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot14
 */


undefined8 wg_Editor__Services__EditorJigsawService__vslot14(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = func_0x06339bd0(param_1 + 0x220);
  if (lVar1 != param_1 + 0x228) {
    lVar1 = func_0x06339cc0(param_1 + 0x220,param_2,param_2);
    return *(undefined8 *)(lVar1 + 0x38);
  }
  return 0;
}


