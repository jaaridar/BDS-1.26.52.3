/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd352b40 (ELF vaddr 0xd252b40)
 * Label: callee-of:0xc970460
 * Body:  [[0d352b40, 0d352b6a] [0d352b70, 0d352bbc] [0d352bc0, 0d352c22]]
 * Ghidra: FUN_0d352b40
 */


/* WARNING: Possible PIC construction at 0x0d352ba1: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d352b40(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_30 [2];
  
  auStack_30[0] = 0xd352b54;
  lVar5 = func_0x0d352c30(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      return lVar5;
    }
    lVar7 = *(long *)(param_1 + 0x20);
    lVar6 = lVar2;
    if (lVar2 != lVar7) {
      do {
        plVar3 = *(long **)(lVar7 + -8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar5 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar5 == 0) {
            auStack_30[0] = 0xd352bee;
            (**(code **)(*plVar3 + 0x10))(plVar3);
            auStack_30[0] = 0xd352bf6;
            lVar5 = func_0x0412c2d0(plVar3);
          }
        }
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != lVar2);
      lVar6 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x38);
    lVar6 = lVar2;
    if (lVar2 != lVar7) {
      do {
        plVar3 = *(long **)(lVar7 + -8);
        *(undefined8 *)(lVar7 + -8) = 0;
        if (plVar3 != (long *)0x0) {
          auStack_30[0] = 0xd352b90;
          lVar5 = (**(code **)(*plVar3 + 8))();
        }
        lVar7 = lVar7 + -8;
      } while (lVar7 != lVar2);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x38) = lVar2;
    register0x00000020 = (BADSPACEBASE *)auStack_30;
    auStack_30[0] = 0xd352ba6;
  }
  *(long *)((long)register0x00000020 + -8) = lVar5;
  if (lVar6 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar6);
  }
  return *(long *)((long)register0x00000020 + -8);
}


