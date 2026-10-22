/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xede2ee0
 * Label: callee-of:0x5a1f120
 * Body:  [[0ede2ee0, 0ede2ee2]]
 * Ghidra: FUN_0ede2ee0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0ede2ee0(void)

{
  long in_RAX;
  char in_CL;
  
  *(char *)(in_RAX + -0x77) = *(char *)(in_RAX + -0x77) + in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


