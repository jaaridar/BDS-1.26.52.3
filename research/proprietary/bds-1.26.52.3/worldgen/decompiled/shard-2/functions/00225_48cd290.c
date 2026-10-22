/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49cd290 (ELF vaddr 0x48cd290)
 * Label: callee-of:0x51f1f50
 * Body:  [[049cd290, 049cd2c7]]
 * Ghidra: FUN_049cd290
 */


/* WARNING: Possible PIC construction at 0x049cd2a8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_049cd290(long *param_1)

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
    uStack_10 = 0x49cd2ad;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar2 != 0) {
    pcVar1 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar1)(&DAT_0f5463b0,lVar2);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


