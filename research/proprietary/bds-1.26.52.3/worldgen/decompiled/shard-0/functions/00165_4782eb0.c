/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4882eb0 (ELF vaddr 0x4782eb0)
 * Label: callee-of:0x5250120
 * Body:  [[04882eb0, 04882edc]]
 * Ghidra: FUN_04882eb0
 */


void FUN_04882eb0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x041086b0(8);
  func_0x0412a430(uVar2);
  func_0x041088a0(uVar2,&UNK_0eeebbc0,&SUB_0412a380);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


