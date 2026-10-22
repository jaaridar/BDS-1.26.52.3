/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e88f0
 * Label: string:minecraft:subsurface_builder
 * Body:  [[0c7e88f0, 0c7e88f7]]
 * Ghidra: FUN_0c7e88f0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0c7e88f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  long unaff_RBP;
  
  cVar2 = *(char *)(param_2 + unaff_RBP * 8);
  pcVar1 = (char *)(CONCAT71((int7)((ulong)param_4 >> 8),cVar2) + -0x77);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


