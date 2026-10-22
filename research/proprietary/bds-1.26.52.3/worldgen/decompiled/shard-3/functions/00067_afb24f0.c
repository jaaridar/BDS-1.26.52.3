/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xafb24f0
 * Label: string:is_temperature_value
 * Body:  [[0afb24f0, 0afb24f4]]
 * Ghidra: FUN_0afb24f0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0afb24f0(void)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char in_CL;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x48);
  *pcVar1 = *pcVar1 + in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


