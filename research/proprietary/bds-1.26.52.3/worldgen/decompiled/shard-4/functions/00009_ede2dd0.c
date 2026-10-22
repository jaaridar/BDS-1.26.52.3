/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeee2dd0 (ELF vaddr 0xede2dd0)
 * Label: callee-of:0x517ab30
 * Body:  [[0eee2dd0, 0eee2dd5]]
 * Ghidra: <EXTERNAL>::memset
 */


void memset(void)

{
  (*(code *)PTR_memset_0f546480)();
  return;
}



/* ---- assembly ---- */
/* 0eee2dd0 */  JMP qword ptr [0x0f546480]
