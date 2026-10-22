/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd410380
 * Label: string:minecraft:aggregate_feature
 * Body:  [[0d410380, 0d410384]]
 * Ghidra: FUN_0d410380
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0d410380(void)

{
  long in_RCX;
  
  *(char *)(in_RCX + -0x7f) = *(char *)(in_RCX + -0x7f) + (char)in_RCX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


