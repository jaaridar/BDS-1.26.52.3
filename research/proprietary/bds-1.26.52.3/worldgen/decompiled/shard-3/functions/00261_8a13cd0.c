/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b13cd0 (ELF vaddr 0x8a13cd0)
 * Label: callee-of:0x8a13c30
 * Body:  [[08b13cd0, 08b13de0]]
 * Ghidra: FUN_08b13cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08b13cd0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  char cStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_a8 = (**(code **)(*param_4 + 0x10))(param_4);
  uStack_98 = param_5;
  func_0x0470d9a0(&uStack_38,&UNK_012ab1c9,0x2e,0x41,&uStack_a8);
  uStack_98 = _DAT_0f146750;
  uStack_90 = _UNK_0f146758;
  uStack_a8 = _DAT_0f146740;
  uStack_a4 = _UNK_0f146744;
  uStack_a0 = _UNK_0f146748;
  uStack_9c = _UNK_0f14674c;
  uStack_88 = uStack_38;
  uStack_80 = uStack_30;
  uStack_78 = uStack_28;
  uStack_6e = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  cStack_60 = '\x01';
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0eee17a0(&uStack_58,&uStack_a8,&uStack_58,1);
  if ((cStack_60 == '\x01') && ((uStack_88 & 1) != 0)) {
    func_0x0412a280(uStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = uStack_58;
  *(undefined8 *)(param_1 + 6) = uStack_50;
  *(undefined8 *)(param_1 + 8) = uStack_48;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}


