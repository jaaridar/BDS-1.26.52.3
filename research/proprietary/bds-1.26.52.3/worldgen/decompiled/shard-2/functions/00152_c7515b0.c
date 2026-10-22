/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7515b0
 * Label: FixedBiomeSource::vslot7
 * Body:  [[0c7515b0, 0c7515b4]]
 * Ghidra: wg_FixedBiomeSource__vslot7
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_FixedBiomeSource__vslot7(void)

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


