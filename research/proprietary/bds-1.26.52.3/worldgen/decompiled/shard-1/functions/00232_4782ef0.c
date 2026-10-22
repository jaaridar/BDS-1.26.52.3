/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4882ef0 (ELF vaddr 0x4782ef0)
 * Label: callee-of:0xce76060
 * Body:  [[04882ef0, 04882f38]]
 * Ghidra: FUN_04882ef0
 */


void FUN_04882ef0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = func_0x041086b0(0x10);
  func_0x04882f40(uVar2,param_1);
  uVar3 = func_0x041088a0(uVar2,&UNK_0eeec978,&UNK_0412bce0);
  func_0x04108780(uVar2);
  func_0x0eee2d70(uVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


