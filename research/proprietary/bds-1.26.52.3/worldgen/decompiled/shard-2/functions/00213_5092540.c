/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5192540 (ELF vaddr 0x5092540)
 * Label: br::worldgen::processors::BlockRules::Test::vslot0
 * Body:  [[05192540, 0519257e]]
 * Ghidra: wg_br__worldgen__processors__BlockRules__Test__vslot0
 */


void wg_br__worldgen__processors__BlockRules__Test__vslot0(undefined8 *param_1)

{
  undefined1 uStack_9;
  
  *param_1 = &UNK_0f45f578;
  if ((ulong)*(uint *)(param_1 + 7) != 0xffffffff) {
    (**(code **)(&UNK_0ef9cd08 + (ulong)*(uint *)(param_1 + 7) * 8))(&uStack_9,param_1 + 1);
  }
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return;
}


