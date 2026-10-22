/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d03b0
 * Label: string:JigsawReplacement
 * Body:  [[0d1d03b0, 0d1d059b]]
 * Ghidra: FUN_0d1d03b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d1d03b0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong in_RAX;
  undefined8 uStack_28;
  
  uVar3 = _UNK_01d971b4;
  uVar2 = _UNK_01d971b0;
  uVar1 = _UNK_01d971ac;
  *param_1 = _DAT_01d971a8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0x18;
  *(undefined8 *)((long)param_1 + 0x19) = 0x2064696c61766e69;
  *(undefined4 *)((long)param_1 + 0x21) = 0x656d616e;
  *(undefined1 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 4;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uStack_28 = in_RAX;
  func_0x06cfd9a0(param_1 + 0x1e,0,0,0,0,0);
  func_0x06cfd9a0(param_1 + 0x2a,0,0,0,0,0);
  param_1[0x36] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x47) = 0;
  *(undefined8 *)(param_1 + 0x49) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)((long)param_1 + 0x181) = 0;
  *(undefined8 *)((long)param_1 + 0x189) = 0;
  uStack_28 = uStack_28 & 0xffffffffffffff;
  func_0x0d5d3c90(param_1 + 0x58,7,(long)&uStack_28 + 7);
  uStack_28._0_7_ = (uint7)(uint6)uStack_28;
  func_0x0d5d3c90(param_1 + 0x5e,(_DAT_0f720fb8 - _DAT_0f720fb0 >> 3) * -0x5555555555555555,
                  (long)&uStack_28 + 6);
  *(undefined8 *)((long)param_1 + 0x1a1) = 0;
  *(undefined8 *)((long)param_1 + 0x1a9) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  param_1[0x7c] = 0;
  return;
}


