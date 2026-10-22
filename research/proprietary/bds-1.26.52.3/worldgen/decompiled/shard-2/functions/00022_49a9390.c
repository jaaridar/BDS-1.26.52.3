/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4aa9390 (ELF vaddr 0x49a9390)
 * Label: callee-of:0x4de9260
 * Body:  [[04aa9390, 04aa944d]]
 * Ghidra: FUN_04aa9390
 */


void FUN_04aa9390(long param_1,byte *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  bool bVar6;
  
  FUN_041679a0();
  uVar2 = func_0x041681f0(param_1,0xf547a30);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = func_0x041681f0(param_1,0xf547770);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  bVar6 = (*param_2 & 1) != 0;
  pbVar4 = param_2 + 1;
  if (bVar6) {
    pbVar4 = *(byte **)(param_2 + 0x10);
  }
  uVar5 = (ulong)(*param_2 >> 1);
  if (bVar6) {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  pbVar3 = (byte *)func_0x04aa9aa0(param_1,pbVar4,pbVar4 + uVar5);
  if (pbVar3 == pbVar4 + uVar5) {
    return;
  }
  uVar2 = func_0x04aa9cc0();
  func_0x04aa7930(param_1 + 0x28);
  FUN_04167a40(param_1);
  uVar2 = func_0x0eee2d70(uVar2);
  FUN_04167a40(param_1);
  func_0x0eee2d70(uVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


