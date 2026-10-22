/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8485900
 * Label: FeatureRegistryPacket::vslot6
 * Body:  [[08485900, 08485972]]
 * Ghidra: wg_FeatureRegistryPacket__vslot6
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FeatureRegistryPacket__vslot6(void)

{
  int iVar1;
  
  if ((DAT_0f5d1f90 == '\0') && (iVar1 = func_0x04108328(&DAT_0f5d1f90), iVar1 != 0)) {
    _DAT_0f5d1f88 = _DAT_0f550af0;
    _DAT_0f550af0 = _DAT_0f550af0 + 1;
    func_0x0410844d(&DAT_0f5d1f90);
  }
  _DAT_0f5d1f68 = _DAT_0f5d1f88;
  _DAT_0f5d1f6c = 0x6f70848e;
  _DAT_0f5d1f70 = &UNK_01291bc3;
  _DAT_0f5d1f78 = 0x2e;
  return;
}


