/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x62410a0 (ELF vaddr 0x61410a0)
 * Label: Editor::Services::EditorJigsawService::vslot12
 * Body:  [[062410a0, 062410dd] [062410e0, 0624111c] [06241120, 0624112e]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot12
 */


long * wg_Editor__Services__EditorJigsawService__vslot12(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  plVar2 = *(long **)(param_2 + 0x278);
  while (plVar2 != (long *)(param_2 + 0x280)) {
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


