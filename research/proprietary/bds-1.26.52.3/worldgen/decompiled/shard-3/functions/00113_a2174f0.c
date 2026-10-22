/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xa2174f0
 * Label: string:ZN9Scripting18EnumBindingBuilderINSt3__112basic_stringIcNS1_
 * Body:  [[0a2174f0, 0a217506] [0a21758b, 0a217593]]
 * Ghidra: FUN_0a2174f0
 */


void FUN_0a2174f0(undefined8 param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,byte param_7)

{
  byte *pbVar1;
  byte bVar2;
  char *in_RAX;
  byte bVar3;
  undefined8 *unaff_R14;
  bool bVar4;
  undefined8 in_XMM0_Qb;
  
  bVar3 = (byte)param_5;
  *in_RAX = *in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(in_RAX + -0x75);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  pbVar1 = (byte *)(param_5 + -0x77);
  bVar4 = CARRY1(*pbVar1,bVar3) || CARRY1(*pbVar1 + bVar3,CARRY1(bVar2,bVar3));
  *pbVar1 = *pbVar1 + bVar3 + CARRY1(bVar2,bVar3);
  bVar2 = *param_2;
  bVar3 = *param_2;
  *param_2 = bVar3 + param_7 + bVar4;
  *in_RAX = *in_RAX + (char)in_RAX + (CARRY1(bVar2,param_7) || CARRY1(bVar3 + param_7,bVar4));
  *unaff_R14 = param_1;
  unaff_R14[1] = in_XMM0_Qb;
  return;
}


