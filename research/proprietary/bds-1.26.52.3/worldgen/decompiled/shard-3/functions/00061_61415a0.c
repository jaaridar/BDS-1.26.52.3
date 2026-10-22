/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x62415a0 (ELF vaddr 0x61415a0)
 * Label: Editor::Services::EditorJigsawService::vslot15
 * Body:  [[062415a0, 06241619]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot15
 */


long * wg_Editor__Services__EditorJigsawService__vslot15
                 (long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = func_0x06339bd0(param_2 + 0x220,param_3);
  if (lVar1 == param_2 + 0x228) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (long)(param_1 + 1);
  }
  else {
    lVar1 = func_0x06339cc0(param_2 + 0x220,param_3,param_3);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (long)(param_1 + 1);
    func_0x0633a090(param_1,*(undefined8 *)(lVar1 + 0x40),lVar1 + 0x48);
  }
  return param_1;
}


