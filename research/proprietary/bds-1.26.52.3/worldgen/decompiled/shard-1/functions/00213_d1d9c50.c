/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9c50 (ELF vaddr 0xd1d9c50)
 * Label: br::worldgen::processors::BlockEntity::Modifier::vslot0
 * Body:  [[0d2d9c50, 0d2d9c8e]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__Modifier__vslot0
 */


void wg_br__worldgen__processors__BlockEntity__Modifier__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f6c8;
  if ((ulong)*(uint *)(param_1 + 5) != 0xffffffff) {
    (**(code **)(&UNK_0f45eb98 + (ulong)*(uint *)(param_1 + 5) * 8))(&uStack_9,param_1 + 1);
  }
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return;
}


