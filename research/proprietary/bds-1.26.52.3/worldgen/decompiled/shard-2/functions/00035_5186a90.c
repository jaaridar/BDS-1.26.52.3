/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5286a90 (ELF vaddr 0x5186a90)
 * Label: OverworldGeneratorMultinoise::vslot60
 * Body:  [[05286a90, 05286b2e]]
 * Ghidra: wg_OverworldGeneratorMultinoise__vslot60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_OverworldGeneratorMultinoise__vslot60
                 (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,short param_5,
                 short param_6,short param_7)

{
  long lVar1;
  
  lVar1 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (lVar1 == 0) {
    func_0x0eec74c0(0x68,0);
  }
  func_0x052588d0(lVar1,param_3,param_2 + 0x5e8,param_2 + 0x908,param_4,(int)param_5,(int)param_6,
                  (int)param_7);
  *param_1 = lVar1;
  return param_1;
}


