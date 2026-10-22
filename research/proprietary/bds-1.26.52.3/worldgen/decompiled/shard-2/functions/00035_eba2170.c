/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xeba2170
 * Label: caller-of-seed
 * Body:  [[0eba2170, 0eba2175]]
 * Ghidra: FUN_0eba2170
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0eba2170(void)

{
  char in_AL;
  long unaff_RBX;
  
  *(char *)(unaff_RBX + -0x7bf0fd08) = *(char *)(unaff_RBX + -0x7bf0fd08) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


