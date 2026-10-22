/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2ecea0 (ELF vaddr 0xd1ecea0)
 * Label: callee-of:0x517ea80
 * Body:  [[0d2ecea0, 0d2ecebe] [0d2ecec0, 0d2ecf03] [0d2ecf10, 0d2ecf52] [0d2ecf60, 0d2ecf96]]
 * Ghidra: FUN_0d2ecea0
 */


/* WARNING: Possible PIC construction at 0x0d2ecee8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d2ecea0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  undefined8 uStack_20;
  
  lVar1 = param_1[6];
  if (lVar1 == 0) {
    lVar1 = param_1[3];
    if (lVar1 != 0) {
      lVar4 = param_1[4];
      lVar3 = lVar1;
      if (lVar1 != lVar4) {
        do {
          if (*(long *)(lVar4 + -8) != 0) {
            uStack_20 = 0xd2ecf27;
            func_0x0412c2d0();
          }
          lVar4 = lVar4 + -0x48;
        } while (lVar4 != lVar1);
        lVar3 = param_1[3];
      }
      param_1[4] = lVar1;
      uStack_20 = 0xd2ecf3d;
      in_RAX = func_0x0412a280(lVar3,param_1[5] - lVar3);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return in_RAX;
    }
    lVar4 = param_1[1];
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        if (*(long *)(lVar4 + -8) != 0) {
          uStack_20 = 0xd2ecf77;
          in_RAX = func_0x0412c2d0();
        }
        lVar4 = lVar4 + -0x40;
      } while (lVar4 != lVar1);
      lVar3 = *param_1;
    }
    param_1[1] = lVar1;
  }
  else {
    lVar4 = param_1[7];
    lVar3 = lVar1;
    if (lVar1 != lVar4) {
      do {
        if (*(long *)(lVar4 + -8) != 0) {
          uStack_20 = 0xd2eced7;
          in_RAX = func_0x0412c2d0();
        }
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != lVar1);
      lVar3 = param_1[6];
    }
    param_1[7] = lVar1;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0xd2eceed;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar3 != 0) {
    pcVar2 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar2)(&DAT_0f5463b0,lVar3);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


