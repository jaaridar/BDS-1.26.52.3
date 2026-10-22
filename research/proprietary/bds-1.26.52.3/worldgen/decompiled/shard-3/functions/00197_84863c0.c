/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x84863c0
 * Label: FeatureRegistryPacket::vslot12
 * Body:  [[084863c0, 084863f2]]
 * Ghidra: wg_FeatureRegistryPacket__vslot12
 */


void wg_FeatureRegistryPacket__vslot12(void)

{
  byte *pbVar1;
  char *in_RAX;
  long in_RCX;
  char *in_R8;
  long in_R9;
  long unaff_R12;
  undefined8 unaff_R13;
  long unaff_R15;
  
  *(char *)(in_RCX + -0x77) = *(char *)(in_RCX + -0x77) + (char)in_RCX;
  *(byte *)(in_R9 + -0x39) = *(byte *)(in_R9 + -0x39) & (byte)in_R8;
  pbVar1 = (byte *)(unaff_R15 + -0x38b6a7b7 + unaff_R12 * 8);
  *pbVar1 = *pbVar1 ^ (byte)in_R9;
  *in_R8 = *in_R8 - (byte)in_R8;
  *in_RAX = *in_RAX + (char)in_RAX;
  *(char *)(in_RCX + -0x3a) = *(char *)(in_RCX + -0x3a) + (char)in_RAX;
  *(undefined8 *)(unaff_R15 + 0x10) = unaff_R13;
  return;
}


