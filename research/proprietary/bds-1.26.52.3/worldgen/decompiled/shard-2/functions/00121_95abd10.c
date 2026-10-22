/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x96abd10 (ELF vaddr 0x95abd10)
 * Label: string:minecraft:overworld
 * Body:  [[096abd10, 096abe9b]]
 * Ghidra: FUN_096abd10
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_096abd10(undefined8 *param_1)

{
  byte bStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  byte bStack_58;
  undefined7 uStack_57;
  undefined8 uStack_48;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_30;
  
  func_0x096ac210(&bStack_b8,&UNK_0143746e,&DAT_0142bedc);
  func_0x096ac390(&bStack_88,&UNK_0122c08f,&UNK_014c988a);
  func_0x096ac510(&bStack_58,&UNK_011c1a27,&DAT_013df14a);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x04899980(param_1,&bStack_b8);
  func_0x04899980(param_1,&bStack_88,&bStack_88);
  func_0x04899980(param_1,&bStack_58,&bStack_58);
  if ((bStack_40 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_30,CONCAT71(uStack_3f,bStack_40) & 0xfffffffffffffffe);
  }
  if ((bStack_58 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_48,CONCAT71(uStack_57,bStack_58) & 0xfffffffffffffffe);
  }
  if ((bStack_70 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_60,CONCAT71(uStack_6f,bStack_70) & 0xfffffffffffffffe);
  }
  if ((bStack_88 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  if ((bStack_a0 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_90,CONCAT71(uStack_9f,bStack_a0) & 0xfffffffffffffffe);
  }
  if ((bStack_b8 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_a8,CONCAT71(uStack_b7,bStack_b8) & 0xfffffffffffffffe);
  }
  return param_1;
}


