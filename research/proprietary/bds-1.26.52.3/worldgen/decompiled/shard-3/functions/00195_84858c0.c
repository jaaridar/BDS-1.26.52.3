/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x84858c0
 * Label: FeatureRegistryPacket::vslot2
 * Body:  [[084857e0, 084858a5] [084858c0, 084858f9]]
 * Ghidra: wg_FeatureRegistryPacket__vslot2
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wg_FeatureRegistryPacket__vslot2(void)

{
  int iVar1;
  undefined8 unaff_retaddr;
  
  func_0x0410844d(&DAT_0f5d1f80);
  if (DAT_0f5d1f80 == '\0') {
    iVar1 = func_0x04108328(&DAT_0f5d1f80);
    if (iVar1 != 0) {
      func_0x08485900();
      func_0x0410844d(&DAT_0f5d1f80);
    }
  }
  _DAT_0f5d1ee0 = &DAT_0f5d1f68;
  _DAT_0f5d1ee8 = _DAT_0f5d1f6c;
  _DAT_0f5d1ef0 = 0;
  _DAT_0f5d1ef8 = 0x80;
  _DAT_0f5d1f00 = 1;
  _DAT_0f5d1f08 = &UNK_08485710;
  _DAT_0f5d1f10 = &UNK_08485980;
  _DAT_0f5d1f18 = 0;
  _DAT_0f5d1f20 = &UNK_08485b20;
  _DAT_0f5d1f28 = 1;
  _DAT_0f5d1f30 = &UNK_048b37a0;
  _DAT_0f5d1f38 = &UNK_08485bd0;
  _DAT_0f5d1f40 = 0;
  _DAT_0f5d1f48 = 0;
  uRam000000000f5d1f50 = 0;
  _DAT_0f5d1f58 = 0;
  return unaff_retaddr;
}


