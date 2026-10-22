/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee2ef0 (ELF vaddr 0xede2ef0)
 * Label: callee-of:0x5a1f120
 * Body:  [[0eee2ef0, 0eee2ef5]]
 * Ghidra: <EXTERNAL>::memchr
 */


void memchr(void)

{
  (*(code *)PTR_memchr_0f546510)();
  return;
}



/* ---- assembly ---- */
/* 0eee2ef0 */  JMP qword ptr [0x0f546510]
