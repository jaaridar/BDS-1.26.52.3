/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412d450 (ELF vaddr 0x402d450)
 * Label: callee2-of:0x515af30
 * Body:  [[0412d450, 0412d4e0]]
 * Ghidra: FUN_0412d450
 */


void FUN_0412d450(long param_1)

{
  uint uVar1;
  long lStack_28;
  char cStack_20;
  
  cStack_20 = '\x01';
  lStack_28 = param_1;
  FUN_0412d680();
  uVar1 = *(uint *)(param_1 + 0x88);
  if ((int)uVar1 < 0) {
    do {
      func_0x04136a30(param_1 + 0x28,&lStack_28);
      uVar1 = *(uint *)(param_1 + 0x88);
    } while ((int)uVar1 < 0);
  }
  *(uint *)(param_1 + 0x88) = uVar1 | 0x80000000;
  if (uVar1 != 0) {
    do {
      func_0x04136a30(param_1 + 0x58,&lStack_28);
    } while ((*(uint *)(param_1 + 0x88) & 0x7fffffff) != 0);
  }
  if (cStack_20 == '\x01') {
    func_0x0412d6b0(lStack_28);
  }
  return;
}


