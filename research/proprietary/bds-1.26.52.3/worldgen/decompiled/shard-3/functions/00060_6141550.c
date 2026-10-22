/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6241550 (ELF vaddr 0x6141550)
 * Label: Editor::Services::EditorJigsawService::vslot10
 * Body:  [[06241550, 0624159b] [06339fe0, 0633a081]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot10
 */


/* WARNING: Possible PIC construction at 0x0633a052: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_Editor__Services__EditorJigsawService__vslot10(long param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  bool bVar8;
  undefined8 uStack_20;
  
  plVar1 = (long *)(param_1 + 0x1f8);
  uStack_20 = 0x624156a;
  plVar4 = (long *)func_0x06339bd0(plVar1);
  if (plVar4 != (long *)(param_1 + 0x200)) {
    uStack_20 = 0x6241581;
    plVar4 = (long *)func_0x06339ef0(plVar1,param_2);
    if (plVar4 != (long *)(param_1 + 0x200)) {
      plVar7 = plVar4;
      plVar3 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar7[2];
          bVar8 = plVar7 != (long *)*plVar5;
          plVar7 = plVar5;
        } while (bVar8);
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((long *)*plVar1 == plVar4) {
        *plVar1 = (long)plVar5;
      }
      *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + -1;
      uStack_20 = 0x633a024;
      func_0x05fb1340(*(undefined8 *)(param_1 + 0x200),plVar4);
      uStack_20 = 0x633a031;
      uVar6 = func_0x0629d8f0(plVar4 + 8,plVar4[9]);
      plVar1 = (long *)plVar4[7];
      plVar4[7] = 0;
      if (plVar1 == (long *)0x0) {
        if ((*(byte *)(plVar4 + 4) & 1) != 0) {
          uStack_20 = 0x633a06e;
          uVar6 = func_0x0412a280(plVar4[6],plVar4[4] & 0xfffffffffffffffe);
        }
      }
      else {
        uStack_20 = 0x633a04a;
        uVar6 = func_0x0d328aa0(plVar1);
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0x633a057;
        plVar4 = plVar1;
      }
      *(undefined8 *)((long)register0x00000020 + -8) = uVar6;
      if (plVar4 != (long *)0x0) {
        pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
        (*pcVar2)(&DAT_0f5463b0,plVar4);
      }
      return *(long **)((long)register0x00000020 + -8);
    }
  }
  return plVar4;
}


