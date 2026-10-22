/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412d550 (ELF vaddr 0x402d550)
 * Label: callee-of:0x517c470
 * Body:  [[0412d550, 0412d5c6]]
 * Ghidra: FUN_0412d550
 */


void FUN_0412d550(long param_1)

{
  long lStack_28;
  byte bStack_20;
  
  bStack_20 = 1;
  lStack_28 = param_1;
  func_0x0412d680();
  if (*(uint *)(param_1 + 0x88) < 0x7fffffff) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) + 1;
  }
  else {
    do {
      func_0x04136a30(param_1 + 0x28,&lStack_28);
    } while (0x7ffffffe < *(uint *)(param_1 + 0x88));
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) + 1;
    param_1 = lStack_28;
    if ((bStack_20 & 1) == 0) {
      return;
    }
  }
  func_0x0412d6b0(param_1);
  return;
}


