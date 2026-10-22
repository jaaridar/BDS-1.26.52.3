/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49e9990 (ELF vaddr 0x48e9990)
 * Label: callee-of:0x61416e0
 * Body:  [[049e9990, 049e9a5e]]
 * Ghidra: FUN_049e9990
 */


/* WARNING: Possible PIC construction at 0x049e99b3: Changing call to branch */
/* WARNING: Possible PIC construction at 0x049e99f3: Changing call to branch */
/* WARNING: Possible PIC construction at 0x049e9a30: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_049e9990(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  
  if (param_1[9] == 0) {
    lVar1 = param_1[6];
    if (lVar1 == 0) {
      lVar1 = param_1[3];
      if (lVar1 == 0) {
        if (*param_1 == 0) {
          return in_RAX;
        }
        uStack_20 = 0x49e9a45;
        in_RAX = func_0x049ea2c0(param_1);
        lVar3 = *param_1;
      }
      else {
        lVar4 = param_1[4];
        lVar3 = lVar1;
        if (lVar1 != lVar4) {
          do {
            lVar4 = lVar4 + -0x48;
            uStack_20 = 0x49e9a1c;
            in_RAX = func_0x049ea190(lVar4);
          } while (lVar4 != lVar1);
          lVar3 = param_1[3];
        }
        param_1[4] = lVar1;
        register0x00000020 = (BADSPACEBASE *)&uStack_20;
        uStack_20 = 0x49e9a35;
      }
    }
    else {
      lVar4 = param_1[7];
      lVar3 = lVar1;
      if (lVar1 != lVar4) {
        do {
          lVar4 = lVar4 + -0x168;
          uStack_20 = 0x49e99df;
          in_RAX = func_0x049e9b20(lVar4);
        } while (lVar4 != lVar1);
        lVar3 = param_1[6];
      }
      param_1[7] = lVar1;
      register0x00000020 = (BADSPACEBASE *)&uStack_20;
      uStack_20 = 0x49e99f8;
    }
  }
  else {
    uStack_20 = 0x49e99a8;
    in_RAX = func_0x049e9a60(param_1 + 9);
    lVar3 = param_1[9];
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x49e99b8;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


