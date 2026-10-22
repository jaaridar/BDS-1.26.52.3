/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cfcf20 (ELF vaddr 0x5bfcf20)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cfcf20, 05cfcf9b]]
 * Ghidra: FUN_05cfcf20
 */


/* WARNING: Possible PIC construction at 0x05cfcf78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05cfcf58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05cfcf7d) */
/* WARNING: Removing unreachable block (ram,0x05cfcf5d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05cfcf20(byte *param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 uStack_10;
  
  if ((param_1[0xf0] & 1) == 0) {
    if ((param_1[0xd8] & 1) == 0) {
      uStack_10 = 0x5cfcf3f;
      in_RAX = func_0x04abe980(param_1 + 0x30);
      if ((*param_1 & 1) == 0) {
        return in_RAX;
      }
      lVar2 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar2 = *(long *)(param_1 + 0xe8);
      register0x00000020 = (BADSPACEBASE *)&uStack_10;
      uStack_10 = 0x5cfcf7d;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x100);
    register0x00000020 = (BADSPACEBASE *)&uStack_10;
    uStack_10 = 0x5cfcf5d;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


