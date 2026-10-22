/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeeddcf0 (ELF vaddr 0xedddcf0)
 * Label: callee-of:0x493a160
 * Body:  [[0eeddcf0, 0eedddea]]
 * Ghidra: FUN_0eeddcf0
 */


void FUN_0eeddcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  code *pcVar2;
  char in_AL;
  undefined8 uVar3;
  long *in_FS_OFFSET;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_d8 [40];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  if (in_AL != '\0') {
    uStack_a8 = param_1;
    uStack_98 = param_2;
    uStack_88 = param_3;
    uStack_78 = param_4;
    uStack_68 = param_5;
    uStack_58 = param_6;
    uStack_48 = param_7;
    uStack_38 = param_8;
  }
  puStack_e8 = auStack_d8;
  puStack_f0 = &stack0x00000008;
  uStack_f8 = 0x3000000028;
  uStack_b0 = param_14;
  if (*(long *)(*in_FS_OFFSET + -0x50) == 0) {
    func_0x0eeb5fa0(param_9,param_10,param_11,param_12,param_13,&uStack_f8);
  }
  else {
    puStack_108 = &uStack_f8;
    plVar1 = *(long **)(*(long *)(*in_FS_OFFSET + -0x50) + 0x20);
    uStack_100 = param_9;
    if (plVar1 == (long *)0x0) {
      uVar3 = func_0x04891200();
      func_0x0eee2d70(uVar3);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&uStack_100,&puStack_108);
  }
  return;
}


