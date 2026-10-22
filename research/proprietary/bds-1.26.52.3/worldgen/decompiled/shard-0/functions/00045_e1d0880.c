/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe1d0880
 * Label: string:Jigsaw Block Metadata
 * Body:  [[0e1d087c, 0e1d087e] [0e1d0880, 0e1d0881]]
 * Ghidra: FUN_0e1d0880
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0e1d0880(void)

{
  long in_RAX;
  char in_CL;
  long unaff_RBX;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(in_RAX + -0x73) = *(char *)(in_RAX + -0x73) + in_CL;
  *(ulong *)(unaff_RBX + 0x38) = (ulong)((int)in_RAX - 0x584);
  return;
}


