/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8485ad0
 * Label: FeatureRegistryPacket::vslot7
 * Body:  [[08485ad0, 08485adb]]
 * Ghidra: wg_FeatureRegistryPacket__vslot7
 */


undefined8 wg_FeatureRegistryPacket__vslot7(void)

{
  char *in_RAX;
  char in_CF;
  
  *in_RAX = (*in_RAX - (char)in_RAX) - in_CF;
  *in_RAX = *in_RAX + (char)in_RAX;
  return 0;
}


