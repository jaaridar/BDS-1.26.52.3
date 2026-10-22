/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4136a00 (ELF vaddr 0x4036a00)
 * Label: callee-of:0xc5e1d20
 * Body:  [[04136a00, 04136a04]]
 * Ghidra: <EXTERNAL>::pthread_cond_destroy
 */


void pthread_cond_destroy(void)

{
  (*(code *)PTR_pthread_cond_destroy_0f546630)();
  return;
}


