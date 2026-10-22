/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4b8460
 * Label: string:Tests the current temperature against a provided value in th
 * Body:  [[0c4b8460, 0c4b8479]]
 * Ghidra: FUN_0c4b8460
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0c4b8460(char *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  char in_AL;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  
  pcVar2 = (char *)(ulong)(uint)(int)CONCAT11(0x24,in_AL);
  *pcVar2 = *pcVar2 + in_AL;
  pcVar2[-0x77] = pcVar2[-0x77] + param_4;
  *param_1 = *param_1 + param_4;
  pcVar2[-0x77] = pcVar2[-0x77] + param_4 + in_AL;
  puVar3 = (undefined8 *)0x901c;
  cVar1 = '\a';
  puRam000000000000901c = unaff_RBP;
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  uRam0000000000008fdc = 0x901c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


