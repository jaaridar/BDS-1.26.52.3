/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52bddf0 (ELF vaddr 0x51bddf0)
 * Label: callee-of:0x8a13c30
 * Body:  [[052bddf0, 052bde69]]
 * Ghidra: FUN_052bddf0
 */


void FUN_052bddf0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar11 = *param_2;
  uVar12 = param_2[1];
  uVar1 = param_2[4];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((long)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar2 = param_2[7];
  uVar7 = *(undefined4 *)(param_2 + 5);
  uVar8 = *(undefined4 *)((long)param_2 + 0x2c);
  uVar9 = *(undefined4 *)(param_2 + 6);
  uVar10 = *(undefined4 *)((long)param_2 + 0x34);
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uStack_48._0_4_ = (undefined4)uVar11;
  uStack_48._4_4_ = (undefined4)((ulong)uVar11 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar12;
  uStack_40._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
  *param_1 = (undefined4)uStack_48;
  param_1[1] = uStack_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[10] = uVar7;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_48 = uVar11;
  uStack_40 = uVar12;
  func_0x048e6d60(&uStack_48);
  return;
}


