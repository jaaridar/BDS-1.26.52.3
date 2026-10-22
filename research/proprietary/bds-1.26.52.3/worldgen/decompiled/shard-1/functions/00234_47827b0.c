/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48827b0 (ELF vaddr 0x47827b0)
 * Label: callee-of:0xe055e60
 * Body:  [[048827b0, 048827e2]]
 * Ghidra: FUN_048827b0
 */


/* WARNING: Possible PIC construction at 0x048827c6: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_048827b0(byte *param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uStack_10;
  
  if ((param_1[0x18] & 1) == 0) {
    if ((*param_1 & 1) == 0) {
      return in_RAX;
    }
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x48827cb;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


