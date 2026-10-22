/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8627de0 (ELF vaddr 0x8527de0)
 * Label: callee-of:0x8486630
 * Body:  [[08627de0, 08627e88]]
 * Ghidra: FUN_08627de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08627de0(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte bStack_48;
  undefined7 uStack_47;
  undefined8 uStack_38;
  char cStack_20;
  
  uStack_58 = _DAT_0f1258a8;
  uStack_50 = _UNK_0f1258b0;
  uStack_68 = _DAT_0f125898;
  uStack_60 = _UNK_0f1258a0;
  bStack_48 = 0;
  cStack_20 = '\0';
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x0eee17a0(&uStack_88,&uStack_68,&stack0xffffffffffffffe8,1);
  if ((cStack_20 == '\x01') && ((bStack_48 & 1) != 0)) {
    FUN_0412a280(uStack_38,CONCAT71(uStack_47,bStack_48) & 0xfffffffffffffffe);
  }
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = uStack_88;
  *(undefined8 *)(param_1 + 6) = uStack_80;
  *(undefined8 *)(param_1 + 8) = uStack_78;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}


