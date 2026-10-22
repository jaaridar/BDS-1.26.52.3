/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412d680 (ELF vaddr 0x402d680)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0412d680, 0412d69a]]
 * Ghidra: FUN_0412d680
 */


undefined8 FUN_0412d680(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  
  iVar2 = func_0x0eee2d30();
  if (iVar2 == 0) {
    return in_RAX;
  }
  func_0x0412e520(iVar2,&UNK_0133d1cb);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}


