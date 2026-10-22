/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48f60c0 (ELF vaddr 0x47f60c0)
 * Label: callee-of:0x61416e0
 * Body:  [[048f60c0, 048f60f1]]
 * Ghidra: FUN_048f60c0
 */


/* WARNING: Possible PIC construction at 0x048f60d5: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_048f60c0(long *param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uStack_10;
  
  lVar2 = param_1[3];
  if (lVar2 == 0) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      return in_RAX;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x48f60da;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


