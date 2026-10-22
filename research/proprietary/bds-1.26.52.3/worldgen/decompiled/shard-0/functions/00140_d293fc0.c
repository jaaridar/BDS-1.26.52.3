/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd293fc0
 * Label: string:minecraft:trial_chambers/spawner/small_melee/cave_spider
 * Body:  [[0d293fc0, 0d293fc2]]
 * Ghidra: FUN_0d293fc0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0d293fc0(void)

{
  long in_RAX;
  byte in_CL;
  
  *(byte *)(in_RAX + -0x75) = *(byte *)(in_RAX + -0x75) ^ in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


