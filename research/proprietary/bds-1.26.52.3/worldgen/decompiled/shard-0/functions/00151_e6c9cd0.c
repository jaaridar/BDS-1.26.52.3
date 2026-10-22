/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe6c9cd0
 * Label: string:minecraft:biome_music
 * Body:  [[0e6c9cd0, 0e6c9cd3]]
 * Ghidra: FUN_0e6c9cd0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0e6c9cd0(void)

{
  long in_RCX;
  char in_CF;
  
  *(char *)(in_RCX + -0x77) = *(char *)(in_RCX + -0x77) + (char)in_RCX + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


