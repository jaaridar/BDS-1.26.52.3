/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9f90d70 (ELF vaddr 0x9e90d70)
 * Label: callee-of:0xc7e3540
 * Body:  [[09f90d70, 09f90d9b] [09f90da0, 09f90dee] [09f90df0, 09f90e35]]
 * Ghidra: FUN_09f90d70
 */


/* WARNING: Possible PIC construction at 0x09f90de8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x09f90ded) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_09f90d70(long *param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined8 in_RAX;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_30;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 == 0) {
    return in_RAX;
  }
  lVar9 = plVar3[1];
  plVar7 = plVar3;
  lVar8 = lVar4;
  if (lVar4 != lVar9) {
    do {
      plVar7 = (long *)0x0;
      if (*(code **)(lVar9 + -0x28) != (code *)0x0) {
        uStack_30 = 0x9f90db7;
        plVar7 = (long *)(**(code **)(lVar9 + -0x28))(lVar9 + -0x40);
      }
      plVar5 = *(long **)(lVar9 + -0x48);
      if (plVar5 == (long *)0x0) {
LAB_09f90dd2:
        bVar2 = *(byte *)(lVar9 + -0x68);
      }
      else {
        LOCK();
        plVar1 = plVar5 + 1;
        plVar7 = (long *)*plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (plVar7 != (long *)0x0) goto LAB_09f90dd2;
        uStack_30 = 0x9f90df9;
        (**(code **)(*plVar5 + 0x10))(plVar5);
        uStack_30 = 0x9f90e01;
        plVar7 = (long *)FUN_0412c2d0(plVar5);
        bVar2 = *(byte *)(lVar9 + -0x68);
      }
      if ((bVar2 & 1) != 0) {
        lVar8 = *(long *)(lVar9 + -0x58);
        register0x00000020 = (BADSPACEBASE *)&uStack_30;
        uStack_30 = 0x9f90ded;
        goto SUB_0412a280;
      }
      lVar9 = lVar9 + -0x68;
    } while (lVar9 != lVar4);
    plVar7 = (long *)*param_1;
    lVar8 = *(long *)*param_1;
  }
  plVar3[1] = lVar4;
SUB_0412a280:
  *(long **)((long)register0x00000020 + -8) = plVar7;
  if (lVar8 != 0) {
    pcVar6 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar6)(&DAT_0f5463b0,lVar8);
  }
  return *(undefined8 *)((long)register0x00000020 + -8);
}


