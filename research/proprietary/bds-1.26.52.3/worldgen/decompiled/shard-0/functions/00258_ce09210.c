/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcf09210 (ELF vaddr 0xce09210)
 * Label: callee-of:0x614e190
 * Body:  [[0cf09210, 0cf093d1]]
 * Ghidra: FUN_0cf09210
 */


byte * FUN_0cf09210(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (param_1 == param_2) goto LAB_0cf093b7;
  bVar1 = *param_2;
  if ((*param_1 & 1) == 0) {
    if ((bVar1 & 1) != 0) {
      func_0x04885070(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      bVar6 = param_2[0x18];
      bVar1 = param_1[0x18];
      goto joined_r0x0cf09279;
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    bVar6 = param_2[0x18];
    if ((param_1[0x18] & 1) != 0) goto LAB_0cf092c8;
LAB_0cf0927b:
    if ((bVar6 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      uVar4 = *(undefined4 *)(param_2 + 0x20);
      uVar5 = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      *(undefined4 *)(param_1 + 0x20) = uVar4;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      bVar6 = param_2[0x30];
      bVar1 = param_1[0x30];
      goto joined_r0x0cf092ee;
    }
    func_0x04885070(param_1 + 0x18,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
    bVar6 = param_2[0x30];
    if ((param_1[0x30] & 1) == 0) goto LAB_0cf092f0;
LAB_0cf09333:
    bVar9 = (bVar6 & 1) != 0;
    pbVar8 = param_2 + 0x31;
    if (bVar9) {
      pbVar8 = *(byte **)(param_2 + 0x40);
    }
    uVar7 = (ulong)(bVar6 >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(param_2 + 0x38);
    }
    func_0x04885120(param_1 + 0x30,pbVar8,uVar7);
    bVar1 = param_2[0x48];
    bVar6 = param_1[0x48];
  }
  else {
    bVar9 = (bVar1 & 1) != 0;
    pbVar8 = param_2 + 1;
    if (bVar9) {
      pbVar8 = *(byte **)(param_2 + 0x10);
    }
    uVar7 = (ulong)(bVar1 >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(param_2 + 8);
    }
    func_0x04885120(param_1,pbVar8,uVar7);
    bVar6 = param_2[0x18];
    bVar1 = param_1[0x18];
joined_r0x0cf09279:
    if ((bVar1 & 1) == 0) goto LAB_0cf0927b;
LAB_0cf092c8:
    bVar9 = (bVar6 & 1) != 0;
    pbVar8 = param_2 + 0x19;
    if (bVar9) {
      pbVar8 = *(byte **)(param_2 + 0x28);
    }
    uVar7 = (ulong)(bVar6 >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(param_2 + 0x20);
    }
    func_0x04885120(param_1 + 0x18,pbVar8,uVar7);
    bVar6 = param_2[0x30];
    bVar1 = param_1[0x30];
joined_r0x0cf092ee:
    if ((bVar1 & 1) != 0) goto LAB_0cf09333;
LAB_0cf092f0:
    if ((bVar6 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      uVar3 = *(undefined4 *)(param_2 + 0x34);
      uVar4 = *(undefined4 *)(param_2 + 0x38);
      uVar5 = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = uVar3;
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      *(undefined4 *)(param_1 + 0x3c) = uVar5;
      bVar1 = param_2[0x48];
      bVar6 = param_1[0x48];
    }
    else {
      func_0x04885070(param_1 + 0x30,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38)
                     );
      bVar1 = param_2[0x48];
      bVar6 = param_1[0x48];
    }
  }
  if ((bVar6 & 1) == 0) {
    if ((bVar1 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
    }
    else {
      func_0x04885070(param_1 + 0x48,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50)
                     );
    }
  }
  else {
    bVar9 = (bVar1 & 1) != 0;
    pbVar8 = param_2 + 0x49;
    if (bVar9) {
      pbVar8 = *(byte **)(param_2 + 0x58);
    }
    uVar7 = (ulong)(bVar1 >> 1);
    if (bVar9) {
      uVar7 = *(ulong *)(param_2 + 0x50);
    }
    func_0x04885120(param_1 + 0x48,pbVar8,uVar7);
  }
LAB_0cf093b7:
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x65) = *(undefined8 *)(param_2 + 0x65);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  return param_1;
}


