/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc970cc0
 * Label: WorldGenerator::vslot44
 * Body:  [[0c970cc0, 0c970cca]]
 * Ghidra: wg_WorldGenerator__vslot44
 */


/* WARNING: Control flow encountered bad instruction data */

void wg_WorldGenerator__vslot44(byte *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x7b);
  *pcVar1 = *pcVar1 + param_4;
  *param_1 = *param_1 >> 4 | *param_1 << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ---- assembly ---- */
/* 0c970cc0 */  TEST byte ptr [RAX + RDI*0x4],AH
/* 0c970cc3 */  ADD byte ptr [RAX],AL
/* 0c970cc5 */  ADD byte ptr [RAX + -0x7b],CL
/* 0c970cc8 */  ROR byte ptr [RDI],0x84
