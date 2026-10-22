/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xaf45f50
 * Label: string:is_temperature_value
 * Body:  [[0af45f50, 0af45f52]]
 * Ghidra: FUN_0af45f50
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0af45f50(void)

{
  long in_RAX;
  char in_CL;
  
  *(char *)(in_RAX + 0x39) = *(char *)(in_RAX + 0x39) + in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


