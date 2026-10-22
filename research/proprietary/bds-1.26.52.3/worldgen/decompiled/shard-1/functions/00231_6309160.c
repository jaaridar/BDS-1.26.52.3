/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6409160 (ELF vaddr 0x6309160)
 * Label: callee-of:0xca32f20
 * Body:  [[06409160, 064091af]]
 * Ghidra: FUN_06409160
 */


/* WARNING: Possible PIC construction at 0x06409178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0640917d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_06409160(long *param_1)

{
  code *pcVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined8 auStack_20 [2];
  
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 == 0) {
      return in_RAX;
    }
  }
  else {
    register0x00000020 = (BADSPACEBASE *)auStack_20;
    auStack_20[0] = 0x640917d;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


