/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4891200 (ELF vaddr 0x4791200)
 * Label: callee-of:0x5188b10
 * Body:  [[04891200, 0489122f]]
 * Ghidra: FUN_04891200
 */


void FUN_04891200(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)func_0x041086b0(8);
  *puVar2 = &UNK_0eef0410;
  func_0x041088a0(puVar2,&UNK_0eef0428,&UNK_0417ccb0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


