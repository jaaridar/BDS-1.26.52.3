/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a53380 (ELF vaddr 0x4953380)
 * Label: string:minecraft:subsurface_builder
 * Body:  [[04a53380, 04a5343e]]
 * Ghidra: FUN_04a53380
 */


void FUN_04a53380(undefined8 param_1)

{
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  func_0x04a53440();
  func_0x04a53510(param_1);
  FUN_04a53630(param_1);
  func_0x04a53700(param_1);
  func_0x04a537d0(param_1);
  func_0x04a538f0(param_1);
  FUN_04a53a10(param_1);
  func_0x04a53b30(param_1);
  func_0x04a53c50(param_1);
  func_0x04a53d70(param_1);
  func_0x04a53e90(param_1);
  uStack_9 = 1;
  func_0x04a53fb0(param_1,&UNK_01df4750,0x1c,&uStack_9);
  FUN_04a54120(param_1);
  uStack_a = 1;
  func_0x04a53fb0(param_1,&DAT_01e44d00,0x1c,&uStack_a);
  func_0x04a54240(param_1);
  func_0x04a54360(param_1);
  func_0x04a54430(param_1);
  return;
}


