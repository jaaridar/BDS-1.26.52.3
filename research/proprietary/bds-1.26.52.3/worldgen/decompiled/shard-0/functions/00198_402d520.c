/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412d520 (ELF vaddr 0x402d520)
 * Label: callee2-of:0x515af30
 * Body:  [[0412d520, 0412d547] [04136a20, 04136a24]]
 * Ghidra: FUN_0412d520
 */


void FUN_0412d520(long param_1)

{
  func_0x0412d680();
  *(undefined4 *)(param_1 + 0x88) = 0;
  func_0x0412d6b0(param_1);
  (*(code *)PTR_pthread_cond_broadcast_0f546458)(param_1 + 0x28);
  return;
}


