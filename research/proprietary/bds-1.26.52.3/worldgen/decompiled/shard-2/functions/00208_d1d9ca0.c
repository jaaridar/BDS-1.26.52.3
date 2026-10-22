/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9ca0 (ELF vaddr 0xd1d9ca0)
 * Label: br::worldgen::processors::BlockEntity::Modifier::vslot1
 * Body:  [[0d2d9ca0, 0d2d9ce4]]
 * Ghidra: wg_br__worldgen__processors__BlockEntity__Modifier__vslot1
 */


void wg_br__worldgen__processors__BlockEntity__Modifier__vslot1(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f6c8;
  if ((ulong)*(uint *)(param_1 + 5) != 0xffffffff) {
    (**(code **)(&UNK_0f45eb98 + (ulong)*(uint *)(param_1 + 5) * 8))(&uStack_9,param_1 + 1);
  }
  thunk_FUN_0ee326a0(param_1,0x30);
  return;
}


