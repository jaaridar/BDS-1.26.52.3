/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x84c9100
 * Label: FeatureRegistryPacket::vslot1
 * Body:  [[084c9100, 084c9118] [084c91c8, 084c91d0]]
 * Ghidra: wg_FeatureRegistryPacket__vslot1
 */


void wg_FeatureRegistryPacket__vslot1
               (undefined8 param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,byte param_5
               ,undefined8 param_6,byte param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long in_RAX;
  char *unaff_RBX;
  undefined8 in_XMM0_Qb;
  byte bVar4;
  
  pbVar1 = (byte *)(in_RAX + -0x77);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_5;
  bVar3 = *param_2;
  bVar4 = *param_2;
  *param_2 = bVar4 + param_7 + CARRY1(bVar2,param_5);
  *unaff_RBX = *unaff_RBX + (char)in_RAX +
               (CARRY1(bVar3,param_7) || CARRY1(bVar4 + param_7,CARRY1(bVar2,param_5)));
  *param_3 = param_1;
  param_3[1] = in_XMM0_Qb;
  unaff_RBX[0] = '\0';
  unaff_RBX[1] = '\0';
  return;
}


