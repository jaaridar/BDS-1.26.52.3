/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4abe980 (ELF vaddr 0x49be980)
 * Label: callee-of:0x4e2bb50
 * Body:  [[04abe980, 04abea07] [04abea10, 04abea28] [04abea30, 04abeac2]]
 * Ghidra: FUN_04abe980
 */


/* WARNING: Possible PIC construction at 0x04abe9ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04abea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04abea59) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04abe980(long param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_20;
  
  lVar5 = *(long *)(param_1 + 0xa0);
  if ((lVar5 != *(long *)(param_1 + 0x90)) || (*(int *)(param_1 + 0x98) != 0)) {
    uStack_20 = 0x4abe9c9;
    lVar5 = FUN_0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3);
    if ((char)lVar5 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    *(long *)(param_1 + 0x68) = lVar6;
    register0x00000020 = (BADSPACEBASE *)&uStack_20;
    uStack_20 = 0x4abe9f1;
    goto SUB_0412a280;
  }
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    lVar8 = *(long *)(param_1 + 0x50);
    lVar7 = lVar6;
    if (lVar6 != lVar8) {
      do {
        if ((*(byte *)(lVar8 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar8 + -0x40);
        }
        else {
          uStack_20 = 0x4abea41;
          lVar5 = func_0x0412a280(*(undefined8 *)(lVar8 + -0x10),
                                  *(ulong *)(lVar8 + -0x20) & 0xfffffffffffffffe);
          bVar2 = *(byte *)(lVar8 + -0x40);
        }
        if ((bVar2 & 1) != 0) {
          lVar6 = *(long *)(lVar8 + -0x30);
          register0x00000020 = (BADSPACEBASE *)&uStack_20;
          uStack_20 = 0x4abea59;
          goto SUB_0412a280;
        }
        lVar8 = lVar8 + -0x48;
      } while (lVar8 != lVar6);
      lVar7 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x50) = lVar6;
    uStack_20 = 0x4abea6f;
    lVar5 = func_0x0412a280(lVar7,*(long *)(param_1 + 0x58) - lVar7);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if (plVar3 == (long *)0x0) {
LAB_04abea8a:
    bVar2 = *(byte *)(param_1 + 0x10);
  }
  else {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 != 0) goto LAB_04abea8a;
    uStack_20 = 0x4abea9f;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uStack_20 = 0x4abeaa7;
    lVar5 = FUN_0412c2d0(plVar3);
    bVar2 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar2 & 1) == 0) {
    return lVar5;
  }
  lVar6 = *(long *)(param_1 + 0x20);
SUB_0412a280:
  *(long *)((long)register0x00000020 + -8) = lVar5;
  if (lVar6 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar6);
  }
  return *(long *)((long)register0x00000020 + -8);
}


