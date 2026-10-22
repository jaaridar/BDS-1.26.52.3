/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x495d360 (ELF vaddr 0x485d360)
 * Label: EditorCustomBiomeSource::vslot5
 * Body:  [[0495d360, 0495d393]]
 * Ghidra: wg_EditorCustomBiomeSource__vslot5
 */


undefined8 wg_EditorCustomBiomeSource__vslot5(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    uStack_8 = *(undefined4 *)(param_2 + 1);
    uStack_10 = *param_2;
    uStack_4 = 1;
    uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,&uStack_10);
    return uVar2;
  }
  return 0;
}


