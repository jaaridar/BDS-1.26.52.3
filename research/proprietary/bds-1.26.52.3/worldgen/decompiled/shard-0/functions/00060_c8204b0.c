/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc8204b0
 * Label: string:world_gen
 * Body:  [[0c8204b0, 0c8204b2]]
 * Ghidra: FUN_0c8204b0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0c8204b0(void)

{
  long in_RAX;
  
  *(int *)(in_RAX + 0x21) = *(int *)(in_RAX + 0x21) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


