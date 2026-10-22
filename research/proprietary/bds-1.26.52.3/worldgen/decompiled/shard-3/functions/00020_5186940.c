/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286940 (ELF vaddr 0x5186940)
 * Label: OverworldGeneratorMultinoise::vslot1
 * Body:  [[0412a280, 0412a284] [05286940, 05286956]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot1
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_OverworldGeneratorMultinoise__vslot1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x05286800();
  if (param_1 != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,param_1);
  }
  return uVar1;
}


