/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x84863d0
 * Label: FeatureRegistryPacket::vslot4
 * Body:  [[084863d0, 084863f2]]
 * Ghidra: wg_FeatureRegistryPacket__vslot4
 */


void wg_FeatureRegistryPacket__vslot4(void)

{
  undefined8 unaff_R13;
  long unaff_R15;
  
  *(undefined8 *)(unaff_R15 + 0x28) = 0;
  *(undefined1 *)(unaff_R15 + 0x34) = 2;
  *(undefined8 *)(unaff_R15 + 0x10) = unaff_R13;
  return;
}


