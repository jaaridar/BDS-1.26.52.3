/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9d90 (ELF vaddr 0xd1d9d90)
 * Label: br::worldgen::processors::BlockRules::Test::vslot1
 * Body:  [[0d2d9d90, 0d2d9dd4]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__Test__vslot1
 */


void wg_br__worldgen__processors__BlockRules__Test__vslot1(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f578;
  if ((ulong)*(uint *)(param_1 + 7) != 0xffffffff) {
    (**(code **)(&UNK_0f45eb18 + (ulong)*(uint *)(param_1 + 7) * 8))(&uStack_9,param_1 + 1);
  }
  func_0x0412a280(param_1,0x40);
  return;
}


