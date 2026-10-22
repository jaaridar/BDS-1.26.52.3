/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6241150 (ELF vaddr 0x6141150)
 * Label: Editor::Services::EditorJigsawService::vslot3
 * Body:  [[06241150, 0624118d] [06241190, 062411cc] [062411d0, 062411de]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot3
 */


long * wg_Editor__Services__EditorJigsawService__vslot3(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  plVar2 = *(long **)(param_2 + 0x250);
  while (plVar2 != (long *)(param_2 + 600)) {
    func_0x06339950(param_1,param_1 + 1,(char)plVar2[4],plVar2 + 4);
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar2;
    if ((long *)plVar2[1] == (long *)0x0) {
      do {
        plVar2 = (long *)plVar3[2];
        bVar4 = plVar3 != (long *)*plVar2;
        plVar3 = plVar2;
      } while (bVar4);
    }
    else {
      do {
        plVar2 = plVar1;
        plVar1 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  return param_1;
}


