/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee2fc0 (ELF vaddr 0xede2fc0)
 * Label: callee-of:0xca314e0
 * Body:  [[0eee2fc0, 0eee2fc5]]
 * Ghidra: <EXTERNAL>::pthread_self
 */


void pthread_self(void)

{
  (*(code *)PTR_pthread_self_0f546578)();
  return;
}


