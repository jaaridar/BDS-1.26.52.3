/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe557990
 * Label: string:static const BasicSchema::EnumMapping::View &cereal::interna
 * Body:  [[0e557990, 0e5579a1] [0e5579b0, 0e5579df]]
 * Ghidra: FUN_0e557990
 */


void FUN_0e557990(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *in_RAX;
  undefined8 *unaff_RBX;
  undefined8 *unaff_R14;
  long unaff_R15;
  
  *in_RAX = *in_RAX + (byte)in_RAX;
  *in_RAX = *in_RAX ^ (byte)in_RAX;
  in_RAX[0x34] = 0;
  *(byte **)(unaff_R15 + 0x28) = in_RAX + 0x38;
  uVar1 = *unaff_R14;
  uVar2 = unaff_R14[1];
  uVar3 = unaff_R14[2];
  uVar4 = unaff_R14[3];
  uVar5 = unaff_R14[4];
  uVar6 = unaff_R14[5];
  uVar7 = *(undefined8 *)((long)unaff_R14 + 0x34);
  *(undefined8 *)((long)unaff_RBX + 0x2c) = *(undefined8 *)((long)unaff_R14 + 0x2c);
  *(undefined8 *)((long)unaff_RBX + 0x34) = uVar7;
  unaff_RBX[4] = uVar5;
  unaff_RBX[5] = uVar6;
  unaff_RBX[2] = uVar3;
  unaff_RBX[3] = uVar4;
  *unaff_RBX = uVar1;
  unaff_RBX[1] = uVar2;
  return;
}


