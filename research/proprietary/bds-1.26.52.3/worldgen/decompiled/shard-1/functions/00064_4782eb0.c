/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4782eb0
 * Label: callee-of:0x4de9260
 * Body:  [[04782eb0, 04783813] [04784187, 0478423a]]
 * Ghidra: FUN_04782eb0
 */


void FUN_04782eb0(uint *param_1,long param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint in_R10D;
  uint uVar3;
  
  param_5 = *(uint *)(&UNK_0153d550 + (param_3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (in_R10D >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (in_R10D >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(in_R10D >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (param_6 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + (param_6 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153da50 + (param_6 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)(param_6 >> 0x1a) * 4) ^ param_5;
  uVar3 = *(uint *)(param_2 + 8) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0xc) ^ param_5;
  uVar1 = uVar2 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  uVar3 = *(uint *)(param_2 + 0x10) ^ param_4;
  uVar2 = *(uint *)(param_2 + 0x14) ^ param_4;
  uVar1 = uVar2 >> 4;
  param_5 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_5;
  uVar3 = *(uint *)(param_2 + 0x18) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0x1c) ^ param_5;
  uVar1 = uVar2 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  uVar3 = *(uint *)(param_2 + 0x20) ^ param_4;
  uVar2 = *(uint *)(param_2 + 0x24) ^ param_4;
  uVar1 = uVar2 >> 4;
  param_5 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_5;
  uVar3 = *(uint *)(param_2 + 0x28) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0x2c) ^ param_5;
  uVar1 = uVar2 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  uVar3 = *(uint *)(param_2 + 0x30) ^ param_4;
  uVar2 = *(uint *)(param_2 + 0x34) ^ param_4;
  uVar1 = uVar2 >> 4;
  param_5 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_5;
  uVar3 = *(uint *)(param_2 + 0x38) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0x3c) ^ param_5;
  uVar1 = uVar2 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  uVar3 = *(uint *)(param_2 + 0x40) ^ param_4;
  uVar2 = *(uint *)(param_2 + 0x44) ^ param_4;
  uVar1 = uVar2 >> 4;
  param_5 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_5;
  uVar3 = *(uint *)(param_2 + 0x48) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0x4c) ^ param_5;
  uVar1 = uVar2 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  uVar3 = *(uint *)(param_2 + 0x50) ^ param_4;
  uVar2 = *(uint *)(param_2 + 0x54) ^ param_4;
  uVar1 = uVar2 >> 4;
  param_5 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_5;
  uVar3 = *(uint *)(param_2 + 0x58) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0x5c) ^ param_5;
  uVar1 = uVar2 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  uVar3 = *(uint *)(param_2 + 0x60) ^ param_4;
  uVar2 = *(uint *)(param_2 + 100) ^ param_4;
  uVar1 = uVar2 >> 4;
  param_5 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_5;
  uVar3 = *(uint *)(param_2 + 0x68) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0x6c) ^ param_5;
  uVar1 = uVar2 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  uVar3 = *(uint *)(param_2 + 0x70) ^ param_4;
  uVar2 = *(uint *)(param_2 + 0x74) ^ param_4;
  uVar1 = uVar2 >> 4;
  param_5 = *(uint *)(&UNK_0153d550 + (uVar3 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar3 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar3 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar2 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_5;
  uVar2 = *(uint *)(param_2 + 0x78) ^ param_5;
  uVar3 = *(uint *)(param_2 + 0x7c) ^ param_5;
  uVar1 = uVar3 >> 4;
  param_4 = *(uint *)(&UNK_0153d550 + (uVar2 & 0xfc)) ^
            *(uint *)(&UNK_0153d750 + (uVar2 >> 8 & 0xfc)) ^
            *(uint *)(&UNK_0153d950 + (uVar2 >> 0x10 & 0xfc)) ^
            *(uint *)(&UNK_0153db50 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&UNK_0153d650 + (uVar1 & 0xfc)) ^
            *(uint *)(&UNK_0153d850 + ((uVar1 & 0xfc00) >> 8)) ^
            *(uint *)(&UNK_0153da50 + ((uVar1 & 0xfc0000) >> 0x10)) ^
            *(uint *)(&UNK_0153dc50 + (ulong)((uVar3 << 0x1c | uVar1) >> 0x1a) * 4) ^ param_4;
  *param_1 = param_5 << 0x1d | param_5 >> 3;
  param_1[1] = param_4 << 0x1d | param_4 >> 3;
  return;
}


