/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc55e1b0
 * Label: string:ZN11BlockEvents18BlockEventExecutorINS_24BlockPlayerInteract
 * Body:  [[0c55e1b0, 0c55e1e2]]
 * Ghidra: FUN_0c55e1b0
 */


void FUN_0c55e1b0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulong in_RAX;
  undefined8 *puVar3;
  byte in_CL;
  long unaff_RBX;
  long in_R8;
  char in_R9B;
  long in_R11;
  byte unaff_R14B;
  undefined8 in_XMM0_Qb;
  undefined8 in_XMM1_Qb;
  
  puVar3 = (undefined8 *)(in_RAX & 0xffffffffffffff00);
  pbVar1 = (byte *)((long)puVar3 - 0x75);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_CL;
  *(char *)(in_R8 + 0x3b) = (*(char *)(in_R8 + 0x3b) - in_R9B) - CARRY1(bVar2,in_CL);
  *(byte *)(in_R11 + 0x20) = *(byte *)(in_R11 + 0x20) & unaff_R14B;
  puVar3[2] = param_1;
  puVar3[3] = in_XMM0_Qb;
  *puVar3 = param_2;
  puVar3[1] = in_XMM1_Qb;
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  *(undefined8 **)(unaff_RBX + 0x18) = puVar3 + 10;
  return;
}


