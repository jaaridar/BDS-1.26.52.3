/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x493b550
 * Label: BiomeSource3d::vslot10
 * Body:  [[0493b550, 0493b556]]
 * Ghidra: wg_BiomeSource3d__vslot10
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_BiomeSource3d__vslot10(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  long in_RAX;
  long in_RCX;
  char in_R9B;
  byte in_CF;
  
  pbVar1 = (byte *)(in_RCX + -0x77);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1 + (byte)in_RCX;
  *pbVar1 = bVar3 + in_CF;
  *(char *)(in_RAX + -0x7b) =
       *(char *)(in_RAX + -0x7b) + in_R9B + (CARRY1(bVar2,(byte)in_RCX) || CARRY1(bVar3,in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- assembly ---- */
/* 0493b550 */  ADC byte ptr [RCX + -0x77],CL
/* 0493b553 */  ADC byte ptr [RAX + -0x7b],R9B
