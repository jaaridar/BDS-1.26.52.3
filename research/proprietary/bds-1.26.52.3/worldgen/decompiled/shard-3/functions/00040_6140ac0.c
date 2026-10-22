/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6240ac0 (ELF vaddr 0x6140ac0)
 * Label: Editor::Services::EditorJigsawService::vslot1
 * Body:  [[06240ac0, 06240ad6]]
 * Ghidra: wg_Editor__Services__EditorJigsawService__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_Editor__Services__EditorJigsawService__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x062407e0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


