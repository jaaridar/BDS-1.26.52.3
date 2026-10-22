/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5d0340
 * Label: JigsawBlock::vslot113
 * Body:  [[0c5d0340, 0c5d034c]]
 * Ghidra: wg_JigsawBlock__vslot113
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_JigsawBlock__vslot113(void)

{
  long in_RAX;
  byte in_CL;
  long in_R8;
  char in_CF;
  
  *(char *)(in_RAX + -0x77) = (*(char *)(in_RAX + -0x77) - in_CL) - in_CF;
  *(byte *)(in_R8 + -0x77) =
       *(byte *)(in_R8 + -0x77) | in_CL | (byte)*(undefined4 *)(in_RAX + -0x77);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


