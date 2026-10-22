/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee35d0 (ELF vaddr 0xede35d0)
 * Label: callee-of:0xca2cd50
 * Body:  [[0eee35d0, 0eee35d5]]
 * Ghidra: <EXTERNAL>::sched_yield
 */


void sched_yield(void)

{
  (*(code *)PTR_sched_yield_0f546880)();
  return;
}


