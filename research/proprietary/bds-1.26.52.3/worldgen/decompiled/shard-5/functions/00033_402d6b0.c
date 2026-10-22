/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x412d6b0 (ELF vaddr 0x402d6b0)
 * Label: callee-of:0x517c470
 * Body:  [[0412d6b0, 0412d6b4]]
 * Ghidra: <EXTERNAL>::pthread_mutex_unlock
 */


void pthread_mutex_unlock(void)

{
  (*(code *)PTR_pthread_mutex_unlock_0f546448)();
  return;
}


