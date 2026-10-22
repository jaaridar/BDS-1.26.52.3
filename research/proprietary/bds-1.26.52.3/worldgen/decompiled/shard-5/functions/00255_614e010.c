/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x624e010 (ELF vaddr 0x614e010)
 * Label: callee-of:0x614dde0
 * Body:  [[0624e010, 0624e0ff]]
 * Ghidra: FUN_0624e010
 */


void FUN_0624e010(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    bVar1 = param_2[0x18];
  }
  else {
    func_0x0412e5e0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    bVar1 = param_2[0x18];
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
    param_1[7] = uVar3;
    param_1[8] = uVar4;
    param_1[9] = uVar5;
    bVar1 = param_2[0x30];
  }
  else {
    func_0x0412e5e0(param_1 + 6,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
    bVar1 = param_2[0x30];
  }
  if ((bVar1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x40);
    uVar3 = *(undefined4 *)(param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 0x38);
    uVar5 = *(undefined4 *)(param_2 + 0x3c);
    param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
  }
  else {
    func_0x0412e5e0(param_1 + 0xc,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x38));
  }
  if ((param_2[0x48] & 1) == 0) {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x58);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x14) = uVar2;
  }
  else {
    func_0x0412e5e0(param_1 + 0x12,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50));
  }
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)(param_2 + 0x65);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}


