/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6237ff0
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[06237ff0, 06237ff7]]
 * Ghidra: FUN_06237ff0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_06237ff0(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  long in_RCX;
  byte unaff_BH;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(in_RCX + -0x77) = *(char *)(in_RCX + -0x77) + (char)in_RCX + CARRY1(unaff_BH,unaff_BH);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


