/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc81ef30
 * Label: string:world_gen
 * Body:  [[0c81ef30, 0c81ef43]]
 * Ghidra: FUN_0c81ef30
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0c81ef30(void)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char in_CL;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x75);
  *pcVar1 = *pcVar1 + in_CL;
  *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) =
       *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL));
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) + -0x7b);
  *pcVar1 = *pcVar1 + in_CL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


