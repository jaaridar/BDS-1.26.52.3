/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x629d9c0 (ELF vaddr 0x619d9c0)
 * Label: EditorJigsawStructureLoader::vslot1
 * Body:  [[0629d9c0, 0629d9d6]]
 * Ghidra: wg_EditorJigsawStructureLoader__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_EditorJigsawStructureLoader__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0d3086c0();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


