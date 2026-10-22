/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4785070
 * Label: callee-of:0x4de9260
 * Body:  [[04784f80, 047850b7]]
 * Ghidra: FUN_04785070
 */


void FUN_04785070(uint param_1,long param_2,uint param_3,uint param_4,ulong param_5,ulong param_6)

{
  sbyte sVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  long in_R10;
  uint uVar5;
  ulong in_R11;
  bool bVar6;
  
  while( true ) {
    param_3 = param_3 | *(uint *)(in_R10 + 0x700 + in_R11 * 4);
    *(uint *)(param_2 + param_5 * 8) =
         (param_4 & 0xffff | param_3 << 0x10) << 2 | (param_3 & 0xffff) >> 0xe;
    *(uint *)(param_2 + 4 + param_5 * 8) =
         (param_3 & 0x3ff0000 | param_4 >> 0x10) << 6 | param_3 >> 0x1a;
    param_5 = param_5 + 1;
    if (param_5 == 0x10) break;
    bVar6 = (param_6 >> (param_5 & 0x3f) & 1) == 0;
    sVar1 = bVar6 + 1;
    uVar4 = (param_1 & 0xfffffff) >> sVar1;
    bVar2 = bVar6 ^ 0x1b;
    param_1 = param_1 << bVar2 | uVar4;
    uVar3 = in_EAX >> sVar1;
    uVar5 = in_EAX << bVar2 | uVar3;
    in_EAX = uVar5 & 0xfffffff;
    param_4 = *(uint *)(in_R10 + 0x100 + (ulong)(uVar4 >> 7 & 0x3c | uVar4 >> 6 & 3) * 4) |
              *(uint *)(in_R10 + (ulong)(uVar4 & 0x3f) * 4) |
              *(uint *)(in_R10 + 0x200 + (ulong)(uVar4 >> 0xe & 0x30 | uVar4 >> 0xd & 0xf) * 4) |
              *(uint *)(in_R10 + 0x300 +
                       (ulong)(param_1 >> 0x16 & 0x38 | uVar4 >> 0x15 & 6 | uVar4 >> 0x14 & 1) * 4);
    param_3 = *(uint *)(in_R10 + 0x500 + (ulong)(uVar3 >> 8 & 0x3c | uVar3 >> 7 & 3) * 4) |
              *(uint *)(in_R10 + 0x400 + (ulong)(uVar3 & 0x3f) * 4) |
              *(uint *)((ulong)(uVar3 >> 0xd & 0xfc) + 0x600 + in_R10);
    in_R11 = (ulong)(uVar5 >> 0x16 & 0x30 | uVar3 >> 0x15 & 0xf);
  }
  return;
}


