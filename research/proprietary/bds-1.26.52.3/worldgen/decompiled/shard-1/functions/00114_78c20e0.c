/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x78c20e0
 * Label: string:JIGSAW_EDITOR
 * Body:  [[078c20e0, 078c20eb]]
 * Ghidra: FUN_078c20e0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_078c20e0(char *param_1,byte *param_2,undefined8 param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  cVar2 = *(char *)(CONCAT71(in_register_00000001,in_AL) + -0x75);
  bVar1 = *param_2;
  *(byte *)(CONCAT71(in_register_00000001,bVar1) & 0xffffffffffffffd8) =
       *(char *)(CONCAT71(in_register_00000001,bVar1) & 0xffffffffffffffd8) + (bVar1 & 0xd8);
  *param_1 = *param_1 + param_4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


