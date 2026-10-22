/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb96a490
 * Label: string:ZN6Editor25ServiceProviderCollection12addUnmanagedINS_8Servi
 * Body:  [[0b96a490, 0b96a49c]]
 * Ghidra: FUN_0b96a490
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0b96a490(void)

{
  int in_EAX;
  uint uVar1;
  char in_CL;
  long unaff_RBX;
  byte in_CF;
  longdouble in_ST0;
  char *pcVar2;
  
  uVar1 = (in_EAX + 0x67410784) - (uint)in_CF;
  pcVar2 = (char *)(ulong)uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x77] = pcVar2[-0x77] + in_CL;
  *(short *)(unaff_RBX + -0x17) = (short)ROUND(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


