/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cdc10
 * Label: JigsawBlock::vslot47
 * Body:  [[0c5cdc10, 0c5cdc13]]
 * Ghidra: wg_JigsawBlock__vslot47
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_JigsawBlock__vslot47(void)

{
  long in_RAX;
  byte in_CL;
  
  *(byte *)(in_RAX + -0x39) = *(byte *)(in_RAX + -0x39) ^ in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


