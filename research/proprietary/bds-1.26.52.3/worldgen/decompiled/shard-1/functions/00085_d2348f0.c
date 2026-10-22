/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2348f0
 * Label: StructurePoolBlockPredicateCappedRandomBlockReplacement::vslot3
 * Body:  [[0d2348f0, 0d2348f2]]
 * Ghidra: wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot3
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_StructurePoolBlockPredicateCappedRandomBlockReplacement__vslot3(void)

{
  long in_RAX;
  char in_CL;
  char in_CF;
  
  *(char *)(in_RAX + -0x77) = (*(char *)(in_RAX + -0x77) - in_CL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


