/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d9bb0 (ELF vaddr 0xd1d9bb0)
 * Label: br::worldgen::processors::PosRules::Test::vslot1
 * Body:  [[0d2d9bb0, 0d2d9bf4]]
 * Ghidra: wg_br__worldgen__processors__PosRules__Test__vslot1
 */


void wg_br__worldgen__processors__PosRules__Test__vslot1(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f548;
  if ((ulong)*(uint *)(param_1 + 5) != 0xffffffff) {
    (**(code **)(&UNK_0f45eb78 + (ulong)*(uint *)(param_1 + 5) * 8))(&uStack_9,param_1 + 1);
  }
  func_0x0412a280(param_1,0x30);
  return;
}


