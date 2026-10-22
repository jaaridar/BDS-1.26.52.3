/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5c9c620
 * Label: callee-of:0x7e0b3b0
 * Body:  [[05c9c620, 05c9c624]]
 * Ghidra: FUN_05c9c620
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_05c9c620(void)

{
  long in_RCX;
  
  *(char *)(in_RCX + -0x77) = *(char *)(in_RCX + -0x77) + (char)in_RCX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


