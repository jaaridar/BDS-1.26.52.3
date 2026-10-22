/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x49db610 (ELF vaddr 0x48db610)
 * Label: callee-of:0x48cac20
 * Body:  [[049db610, 049db635] [049db640, 049db6bb]]
 * Ghidra: FUN_049db610
 */


/* WARNING: Possible PIC construction at 0x049db645: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_049db610(long *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_30 [2];
  
  auStack_30[0] = 0x49db627;
  func_0x04136a00(param_1 + 0x10);
  auStack_30[0] = 0x49db630;
  lVar4 = func_0x04136a00(param_1 + 10);
  lVar5 = param_1[2];
  if (lVar5 == 0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 == 0) {
      return lVar4;
    }
  }
  else {
    plVar2 = *(long **)(lVar5 + 0x20);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        auStack_30[0] = 0x49db67c;
        (**(code **)(*plVar2 + 0x10))(plVar2);
        auStack_30[0] = 0x49db684;
        lVar4 = func_0x0412c2d0(plVar2);
      }
    }
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0x49db64a;
  }
  *(long *)((long)register0x00000020 + -8) = lVar4;
  if (lVar5 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar5);
  }
  return *(long *)((long)register0x00000020 + -8);
}


