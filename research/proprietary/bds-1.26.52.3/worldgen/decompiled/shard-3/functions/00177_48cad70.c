/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cad70 (ELF vaddr 0x48cad70)
 * Label: EditorCustomBiomeSource::vslot1
 * Body:  [[049cad70, 049cad86]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_EditorCustomBiomeSource__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x049cac20();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


