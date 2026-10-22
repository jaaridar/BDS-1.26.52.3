/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x525e840 (ELF vaddr 0x515e840)
 * Label: br::worldgen::processors::PosRules::Test::vslot0
 * Body:  [[0525e840, 0525e87e]]
 * Ghidra: wg_br__worldgen__processors__PosRules__Test__vslot0
 */


void wg_br__worldgen__processors__PosRules__Test__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f548;
  if ((ulong)*(uint *)(param_1 + 5) != 0xffffffff) {
    (**(code **)(&UNK_0ef9cd68 + (ulong)*(uint *)(param_1 + 5) * 8))(&uStack_9,param_1 + 1);
  }
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return;
}


