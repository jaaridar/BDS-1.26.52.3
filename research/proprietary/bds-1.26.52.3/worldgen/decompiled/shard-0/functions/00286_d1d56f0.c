/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2d56f0 (ELF vaddr 0xd1d56f0)
 * Label: callee-of:0xd1d5450
 * Body:  [[0d2d56f0, 0d2d5832]]
 * Ghidra: FUN_0d2d56f0
 */


void FUN_0d2d56f0(ulong *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  
  func_0x04134310(param_1,*param_2);
  puVar2 = *(undefined **)(param_2 + 2);
  if (puVar2 == &UNK_0d2d5840) {
    puVar9 = &UNK_014249bc;
    lVar8 = 8;
    bVar1 = (byte)*param_1;
  }
  else if (puVar2 == &UNK_0d2d5850) {
    puVar9 = &UNK_012e9d15;
    lVar8 = 0xc;
    bVar1 = (byte)*param_1;
  }
  else if (puVar2 == &UNK_0d2d5860) {
    puVar9 = &UNK_011e4b98;
    lVar8 = 9;
    bVar1 = (byte)*param_1;
  }
  else {
    puVar9 = &DAT_01255173;
    if (puVar2 == &UNK_0d2d5870) {
      puVar9 = &UNK_013533b2;
    }
    lVar8 = (ulong)(puVar2 == &UNK_0d2d5870) + 7;
    bVar1 = (byte)*param_1;
  }
  if ((bVar1 & 1) == 0) {
    uVar5 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar5 = param_1[1];
  }
  uVar5 = uVar5 + lVar8 + 1;
  if (0xfffffffffffffff7 < uVar5) {
    uVar4 = func_0x04882e30();
    if ((*param_1 & 1) != 0) {
      func_0x0412a280(param_1[2],*param_1 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar4);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = (*param_1 & 0xfffffffffffffffe) - 1;
  if ((bVar1 & 1) == 0) {
    uVar6 = 0x16;
  }
  if (uVar6 < uVar5) {
    uVar6 = 0x19;
    if ((uVar5 | 7) != 0x17) {
      uVar6 = uVar5 | 7;
    }
    uVar7 = 0x16;
    if (0x16 < uVar5) {
      uVar7 = uVar6;
    }
    func_0x0412f770(param_1,uVar7);
  }
  func_0x0412fea0(param_1,0x20);
  func_0x0412f8c0(param_1,puVar9,lVar8);
  return;
}


