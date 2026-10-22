/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x84863b0
 * Label: FeatureRegistryPacket::vslot11
 * Body:  [[084863b0, 084863f2]]
 * Ghidra: wg_FeatureRegistryPacket__vslot11
 */


void wg_FeatureRegistryPacket__vslot11(undefined4 *param_1)

{
  undefined8 unaff_R13;
  long unaff_R15;
  
  *param_1 = (int)&stack0x00000000;
  *(undefined **)(unaff_R15 + 8) = &UNK_08486820;
  *(undefined **)(unaff_R15 + 0x20) = &UNK_084868a0;
  *(undefined4 *)(unaff_R15 + 0x30) = 0x5849e78c;
  *(undefined8 *)(unaff_R15 + 0x28) = 0;
  *(undefined1 *)(unaff_R15 + 0x34) = 2;
  *(undefined8 *)(unaff_R15 + 0x10) = unaff_R13;
  return;
}


