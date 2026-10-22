/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x485b6e0
 * Label: XoroshiroRandom::vslot10
 * Body:  [[0485b6e0, 0485b6e4]]
 * Ghidra: wg_XoroshiroRandom__vslot10
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_XoroshiroRandom__vslot10(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  long in_RCX;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(in_RCX + -0x77) = *(char *)(in_RCX + -0x77) + (char)in_RCX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


