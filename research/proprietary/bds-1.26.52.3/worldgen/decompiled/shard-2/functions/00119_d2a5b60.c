/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a5b60 (ELF vaddr 0xd2a5b60)
 * Label: FlatWorldGenerator::vslot50
 * Body:  [[0d3a5b60, 0d3a5b79]]
 * Ghidra: wg_FlatWorldGenerator__vslot50
 */


undefined1  [16] wg_FlatWorldGenerator__vslot50(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = *(undefined4 *)(param_1 + 0x140);
  auVar1._0_4_ = *(undefined4 *)(param_1 + 0x138);
  auVar1._8_4_ = *(undefined4 *)(param_1 + 0x13c);
  auVar1._12_4_ = 0;
  return auVar1;
}


