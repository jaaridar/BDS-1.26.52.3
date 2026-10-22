/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x519ba60
 * Label: WorldGenerator::vslot33
 * Body:  [[0519ba60, 0519ba6e]]
 * Ghidra: wg_WorldGenerator__vslot33
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_WorldGenerator__vslot33(void)

{
  char *pcVar1;
  uint in_EAX;
  char in_CL;
  
  pcVar1 = (char *)((ulong)((in_EAX & 0xffffff00) + 0x8d480000) + 0x39);
  *pcVar1 = *pcVar1 + in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- assembly ---- */
/* 0519ba60 */  AND AL,0x0
/* 0519ba62 */  ADD EAX,0x8d480000
/* 0519ba67 */  TEST byte ptr [RAX],AH
/* 0519ba6a */  ADD AL,0x0
/* 0519ba6c */  ADD byte ptr [RAX + 0x39],CL
