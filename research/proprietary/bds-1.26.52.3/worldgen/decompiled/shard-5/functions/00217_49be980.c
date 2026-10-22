/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4abe980 (ELF vaddr 0x49be980)
 * Label: callee-of:0x49ec340
 * Body:  [[04abe980, 04abea07] [04abea10, 04abea28] [04abea30, 04abeac2]]
 * Ghidra: FUN_04abe980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_04abe980(long param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0xa0);
  if (((lVar5 != *(long *)(param_1 + 0x90)) || (*(int *)(param_1 + 0x98) != 0)) &&
     (lVar5 = func_0x0eeddcf0(&UNK_014756d5,&UNK_01198d5e,0x25,&UNK_0126e3df,&UNK_013a8ed3),
     (char)lVar5 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x68) = lVar3;
    lVar5 = FUN_0412a280(lVar3,*(long *)(param_1 + 0x70) - lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x50);
    lVar6 = lVar3;
    if (lVar3 != lVar5) {
      do {
        if ((*(byte *)(lVar5 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar5 + -0x40);
        }
        else {
          FUN_0412a280(*(undefined8 *)(lVar5 + -0x10),*(ulong *)(lVar5 + -0x20) & 0xfffffffffffffffe
                      );
          bVar2 = *(byte *)(lVar5 + -0x40);
        }
        if ((bVar2 & 1) != 0) {
          FUN_0412a280(*(undefined8 *)(lVar5 + -0x30),*(ulong *)(lVar5 + -0x40) & 0xfffffffffffffffe
                      );
        }
        lVar5 = lVar5 + -0x48;
      } while (lVar5 != lVar3);
      lVar6 = *(long *)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x50) = lVar3;
    lVar5 = FUN_0412a280(lVar6,*(long *)(param_1 + 0x58) - lVar6);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar5 = FUN_0412c2d0(plVar4);
      bVar2 = *(byte *)(param_1 + 0x10);
      goto joined_r0x04abeaab;
    }
  }
  bVar2 = *(byte *)(param_1 + 0x10);
joined_r0x04abeaab:
  if ((bVar2 & 1) == 0) {
    return lVar5;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,*(long *)(param_1 + 0x20));
  }
  return lVar5;
}


