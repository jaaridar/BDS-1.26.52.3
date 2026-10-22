/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6140ce0
 * Label: Editor::Services::EditorJigsawService::vslot3
 * Body:  [[06140ce0, 06140cf0] [06140d00, 06140d16]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot3
 */


void wg_Editor__Services__EditorJigsawService__vslot3
               (undefined8 param_1,long param_2,int *param_3,int param_4)

{
  uint in_EAX;
  int *piVar1;
  
  do {
    piVar1 = param_3;
    param_3 = piVar1 + 0x16;
  } while (*piVar1 != param_4);
  for (; *(long *)(piVar1 + 0xc) != param_2; piVar1 = *(int **)(piVar1 + 0xe)) {
  }
  piVar1[4] = piVar1[4] | in_EAX;
  return;
}


