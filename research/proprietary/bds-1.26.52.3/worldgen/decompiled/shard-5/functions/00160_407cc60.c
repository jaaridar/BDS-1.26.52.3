/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x417cc60 (ELF vaddr 0x407cc60)
 * Label: callee-of:0x51884e0
 * Body:  [[0417cc60, 0417cca5]]
 * Ghidra: FUN_0417cc60
 */


long FUN_0417cc60(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_10;
  long lStack_8;
  
  iVar2 = func_0x0eee35c0(1,&lStack_10);
  if (iVar2 == 0) {
    return lStack_10 * 1000000000 + lStack_8;
  }
  puVar3 = (undefined4 *)func_0x0eee2fd0();
  uVar4 = func_0x0412e520(*puVar3,&UNK_0121f17e);
  func_0x04882e20(uVar4);
  pcVar1 = (code *)swi(3);
  lVar5 = (*pcVar1)();
  return lVar5;
}


