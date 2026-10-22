/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7818a0
 * Label: string:ZNK22VanillaSurfaceBuilders20CappedSurfaceBuilder14buildSurf
 * Body:  [[0c7818a0, 0c7818a4]]
 * Ghidra: FUN_0c7818a0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0c7818a0(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  long in_RCX;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(in_RCX + -0x39) = *(char *)(in_RCX + -0x39) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


