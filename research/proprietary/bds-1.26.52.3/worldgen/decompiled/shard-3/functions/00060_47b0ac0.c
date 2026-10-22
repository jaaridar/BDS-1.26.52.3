/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47b0ac0
 * Label: callee-of:0x871a310
 * Body:  [[047b0ac0, 047b0ac4]]
 * Ghidra: FUN_047b0ac0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_047b0ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  char *pcVar5;
  char *in_RAX;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  long unaff_RBP;
  
  bVar9 = (byte)((ulong)param_3 >> 8);
  bVar8 = (byte)param_3;
  cVar7 = (char)((ulong)param_4 >> 8);
  cVar6 = (char)param_4;
  cVar3 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar3;
  *in_RAX = *in_RAX + cVar6;
  *in_RAX = *in_RAX + cVar3;
  *in_RAX = *in_RAX + cVar3;
  *in_RAX = *in_RAX + cVar3;
  *(char *)(param_4 + 0x1154d) = *(char *)(param_4 + 0x1154d) + cVar6;
  *in_RAX = *in_RAX + cVar3;
  pcVar5 = (char *)((ulong)(byte)(cVar3 + bVar9) & 0xf);
  *pcVar5 = *pcVar5 + cVar6;
  cVar3 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *(char *)(param_4 + 0x1154d) = *(char *)(param_4 + 0x1154d) + cVar6;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar6;
  *pcVar5 = *pcVar5 + cVar6;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar7;
  *pcVar5 = *pcVar5 + bVar8;
  *pcVar5 = *pcVar5 + cVar6;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  bVar4 = cVar3 + bVar9;
  pbRam00000000000005d3 = (byte *)(ulong)bVar4;
  bVar2 = *pbRam00000000000005d3;
  *pbRam00000000000005d3 = *pbRam00000000000005d3 + bVar4;
  *(char *)(unaff_RBP + 0xf) = (*(char *)(unaff_RBP + 0xf) - cVar6) - CARRY1(bVar2,bVar4);
  *pbRam00000000000005d3 = *pbRam00000000000005d3 + bVar4;
  *pbRam00000000000005d3 = *pbRam00000000000005d3 + bVar4;
  *pbRam00000000000005d3 = *pbRam00000000000005d3 | bVar4;
  *pbRam00000000000005d3 = *pbRam00000000000005d3 + bVar4;
  *pbRam00000000000005d3 = *pbRam00000000000005d3 + bVar4;
  *pbRam00000000000005d3 = *pbRam00000000000005d3 + bVar4;
  *pbRam00000000000005d3 = *pbRam00000000000005d3 | bVar8;
  pcVar5 = (char *)(ulong)bVar4;
  *pcVar5 = *pcVar5 + bVar4;
  *pcVar5 = *pcVar5;
  pcVar5 = (char *)((ulong)bVar4 & 0xf);
  *pcVar5 = *pcVar5 + cVar6;
  cVar3 = (char)pcVar5;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  pbVar1 = (byte *)(pcVar5 + 8);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  *(char *)((long)pcVar5 * 2) = *(char *)((long)pcVar5 * 2) + cVar6 + CARRY1(bVar2,bVar9);
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar7;
  *pcVar5 = *pcVar5 + cVar6;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


