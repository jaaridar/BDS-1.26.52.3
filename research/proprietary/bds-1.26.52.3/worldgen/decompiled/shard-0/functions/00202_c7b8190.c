/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8b8190 (ELF vaddr 0xc7b8190)
 * Label: Biome::vslot1
 * Body:  [[0c8b8190, 0c8b81a6]]
 * Ghidra: wg_Biome__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_Biome__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x0c8b8060();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


