/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca32730
 * Label: WorldGenerator::vslot11
 * Body:  [[0ca32730, 0ca32732]]
 * Ghidra: wg_WorldGenerator__vslot11
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_WorldGenerator__vslot11(void)

{
  long in_RAX;
  
  *(int *)(in_RAX + 0x21) = *(int *)(in_RAX + 0x21) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


