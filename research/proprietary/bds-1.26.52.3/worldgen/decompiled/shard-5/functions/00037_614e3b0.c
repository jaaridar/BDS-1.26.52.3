/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624e3b0 (ELF vaddr 0x614e3b0)
 * Label: Editor::Services::EditorJigsawService::vslot21
 * Body:  [[0624e3b0, 0624e465]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot21
 */


undefined8
wg_Editor__Services__EditorJigsawService__vslot21(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  undefined1 *puStack_28;
  
  plStack_60 = (long *)0x0;
  uStack_50 = 0;
  puStack_58 = &UNK_0f029798;
  plVar1 = (long *)param_3[4];
  if (plVar1 == (long *)0x0) {
    puStack_28 = (undefined1 *)0x0;
  }
  else if (plVar1 == param_3) {
    puStack_28 = auStack_48;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    puStack_28 = (undefined1 *)(**(code **)(*plVar1 + 0x10))();
  }
  (**(code **)(*(long *)(param_2 + 0x50) + 0x10))
            (param_1,(long *)(param_2 + 0x50),&puStack_58,0,&plStack_60,0);
  if (puStack_58 != (undefined *)0x0) {
    (**(code **)(puStack_58 + 8))(&puStack_58);
  }
  plVar1 = plStack_60;
  plStack_60 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}


