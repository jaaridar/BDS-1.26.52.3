/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6847c0 (ELF vaddr 0xc5847c0)
 * Label: caller-of-seed
 * Body:  [[0c6847c0, 0c6848ea]]
 * Ghidra: FUN_0c6847c0
 */


void FUN_0c6847c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 byte *param_5,byte *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0x0c682cd0();
  *param_1 = &UNK_0f3b30e0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  if (param_4[0x18] == 1) {
    if ((*param_4 & 1) == 0) {
      param_1[0x7a] = *(undefined8 *)(param_4 + 0x10);
      uVar1 = *(undefined4 *)(param_4 + 4);
      uVar2 = *(undefined4 *)(param_4 + 8);
      uVar3 = *(undefined4 *)(param_4 + 0xc);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)param_4;
      *(undefined4 *)((long)param_1 + 0x3c4) = uVar1;
      *(undefined4 *)(param_1 + 0x79) = uVar2;
      *(undefined4 *)((long)param_1 + 0x3cc) = uVar3;
    }
    else {
      func_0x0412e5e0(param_1 + 0x78,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
    }
    *(undefined1 *)(param_1 + 0x7b) = 1;
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  if (param_5[0x18] == 1) {
    if ((*param_5 & 1) == 0) {
      param_1[0x7e] = *(undefined8 *)(param_5 + 0x10);
      uVar1 = *(undefined4 *)(param_5 + 4);
      uVar2 = *(undefined4 *)(param_5 + 8);
      uVar3 = *(undefined4 *)(param_5 + 0xc);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)param_5;
      *(undefined4 *)((long)param_1 + 0x3e4) = uVar1;
      *(undefined4 *)(param_1 + 0x7d) = uVar2;
      *(undefined4 *)((long)param_1 + 0x3ec) = uVar3;
    }
    else {
      func_0x0412e5e0(param_1 + 0x7c,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 8));
    }
    *(undefined1 *)(param_1 + 0x7f) = 1;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  if (param_6[0x18] == 1) {
    if ((*param_6 & 1) == 0) {
      param_1[0x82] = *(undefined8 *)(param_6 + 0x10);
      uVar1 = *(undefined4 *)(param_6 + 4);
      uVar2 = *(undefined4 *)(param_6 + 8);
      uVar3 = *(undefined4 *)(param_6 + 0xc);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)param_6;
      *(undefined4 *)((long)param_1 + 0x404) = uVar1;
      *(undefined4 *)(param_1 + 0x81) = uVar2;
      *(undefined4 *)((long)param_1 + 0x40c) = uVar3;
    }
    else {
      func_0x0412e5e0(param_1 + 0x80,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 8));
    }
    *(undefined1 *)(param_1 + 0x83) = 1;
  }
  func_0x0c684930(param_1,&UNK_0c684f20,0,0);
  return;
}


