/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee2f00 (ELF vaddr 0xede2f00)
 * Label: callee-of:0x4de9260
 * Body:  [[0eee2f00, 0eee2f05]]
 * Ghidra: <EXTERNAL>::memcpy
 */


void memcpy(void)

{
  (*(code *)PTR_memcpy_0f546518)();
  return;
}



/* ---- assembly ---- */
/* 0eee2f00 */  JMP qword ptr [0x0f546518]
