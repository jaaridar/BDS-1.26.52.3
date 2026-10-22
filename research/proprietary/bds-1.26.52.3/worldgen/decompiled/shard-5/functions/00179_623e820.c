/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x633e820 (ELF vaddr 0x623e820)
 * Label: string:{}, ()NSt3__110__function6__funcIZN6Editor8Services19EditorJ
 * Body:  [[0633e820, 0633e8d7]]
 * Ghidra: FUN_0633e820
 */


void FUN_0633e820(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined4 uStack_83;
  undefined3 uStack_7f;
  undefined8 uStack_7c;
  undefined4 uStack_68;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_88 = 0x8000;
  uStack_84 = 0x20;
  uStack_83 = 0;
  uStack_7f = 0;
  uStack_7c = 0xffffffff;
  uStack_68 = 0;
  puStack_58 = &UNK_017383bb;
  uStack_50 = 2;
  uStack_28 = 0;
  puStack_48 = &UNK_017383b9;
  uStack_40 = 1;
  puStack_38 = &UNK_017383ba;
  uStack_30 = 1;
  lVar2 = func_0x0633dcd0(&uStack_88);
  lVar1 = *param_2;
  *param_2 = lVar2;
  param_2[1] = param_2[1] + (lVar1 - lVar2);
  func_0x0633e200(&uStack_88,param_1,param_3);
  return;
}


