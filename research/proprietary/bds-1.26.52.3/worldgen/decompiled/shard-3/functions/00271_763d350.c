/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x773d350 (ELF vaddr 0x763d350)
 * Label: callee-of:0xc961580
 * Body:  [[0773d350, 0773d387]]
 * Ghidra: FUN_0773d350
 */


/* WARNING: Possible PIC construction at 0x0773d368: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0773d350(long *param_1)

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
    param_1[1] = lVar2;
  }
  else {
    param_1[4] = lVar2;
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x773d36d;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


