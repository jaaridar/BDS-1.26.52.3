/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48b0f50 (ELF vaddr 0x47b0f50)
 * Label: callee-of:0x82ea1a0
 * Body:  [[048b0f50, 048b0f82] [048b0f90, 048b103e]]
 * Ghidra: FUN_048b0f50
 */


/* WARNING: Possible PIC construction at 0x048b0fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x048b0f98: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_048b0f50(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 in_RAX;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_40 [2];
  
  plVar4 = (long *)*param_1;
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    return in_RAX;
  }
  lVar6 = plVar4[1];
  plVar5 = plVar4;
  lVar7 = lVar2;
  if (lVar2 != lVar6) {
    do {
      lVar7 = *(long *)(lVar6 + -8);
      *(undefined8 *)(lVar6 + -8) = 0;
      if (lVar7 != 0) {
        lVar2 = *(long *)(lVar7 + 0x78);
        *(undefined8 *)(lVar7 + 0x78) = 0;
        if (lVar2 == 0) {
          plVar5 = *(long **)(lVar7 + 0x70);
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            plVar4 = (long *)*plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (plVar4 == (long *)0x0) {
              auStack_40[0] = 0x48b1001;
              (**(code **)(*plVar5 + 0x10))(plVar5);
              auStack_40[0] = 0x48b1009;
              plVar4 = (long *)func_0x0412c2d0(plVar5);
            }
          }
          register0x00000020 = (BADSPACEBASE *)auStack_40;
          auStack_40[0] = 0x48b0f9d;
        }
        else {
          auStack_40[0] = 0x48b0fd0;
          plVar4 = (long *)func_0x048ae940(lVar2);
          register0x00000020 = (BADSPACEBASE *)auStack_40;
          auStack_40[0] = 0x48b0fdd;
          lVar7 = lVar2;
        }
        goto SUB_0412a280;
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != lVar2);
    plVar5 = (long *)*param_1;
    lVar7 = *(long *)*param_1;
  }
  plVar4[1] = lVar2;
  plVar4 = plVar5;
SUB_0412a280:
  *(long **)((long)register0x00000020 + -8) = plVar4;
  if (lVar7 != 0) {
    pcVar3 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar3)(&DAT_0f5463b0,lVar7);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


