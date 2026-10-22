/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9af1a50 (ELF vaddr 0x99f1a50)
 * Label: callee-of:0xcd3ed10
 * Body:  [[09af1a50, 09af1ada]]
 * Ghidra: FUN_09af1a50
 */


void FUN_09af1a50(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((*param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    bVar1 = param_2[0x30];
  }
  else {
    func_0x0412e5e0(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    bVar1 = param_2[0x30];
  }
  if (bVar1 != 1) {
    return;
  }
  if ((param_2[0x18] & 1) == 0) {
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 8) = uVar5;
  }
  else {
    func_0x0412e5e0(param_1 + 6,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20));
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}


