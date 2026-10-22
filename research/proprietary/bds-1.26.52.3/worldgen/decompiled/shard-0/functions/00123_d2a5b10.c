/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a5b10 (ELF vaddr 0xd2a5b10)
 * Label: FlatWorldGenerator::vslot48
 * Body:  [[0d3a5b10, 0d3a5b3f]]
 * Ghidra: wg_FlatWorldGenerator__vslot48
 */


undefined8 wg_FlatWorldGenerator__vslot48(undefined8 param_1,long param_2)

{
  undefined *puStack_18;
  undefined8 uStack_10;
  
  uStack_10 = *(undefined8 *)(param_2 + 0x158);
  puStack_18 = &UNK_0f3dc940;
  func_0x0c851650(param_1,&puStack_18);
  return param_1;
}


