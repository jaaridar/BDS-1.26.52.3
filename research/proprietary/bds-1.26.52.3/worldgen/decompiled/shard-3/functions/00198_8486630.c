/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8486630
 * Label: FeatureRegistryPacket::vslot16
 * Body:  [[08486630, 08486665]]
 * Ghidra: wg_FeatureRegistryPacket__vslot16
 */


void wg_FeatureRegistryPacket__vslot16(void)

{
  int in_EAX;
  long unaff_RBX;
  undefined8 unaff_retaddr;
  
  *(ulong *)(unaff_RBX + 0x20) = (ulong)(in_EAX + 0x26b);
  *(undefined4 *)(unaff_RBX + 0x30) = 0x5849e78c;
  *(undefined8 *)(unaff_RBX + 0x28) = 0;
  *(undefined1 *)(unaff_RBX + 0x34) = 2;
  *(undefined8 *)(unaff_RBX + 0x10) = unaff_retaddr;
  return;
}


