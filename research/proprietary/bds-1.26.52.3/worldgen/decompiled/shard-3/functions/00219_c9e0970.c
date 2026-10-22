/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcae0970 (ELF vaddr 0xc9e0970)
 * Label: callee-of:0x517ab30
 * Body:  [[0cae0970, 0cae09a0] [0cae09b0, 0cae0a99]]
 * Ghidra: FUN_0cae0970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cae0970(long param_1,char param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  
  plVar1 = *(long **)(param_1 + 0x1510);
  lVar5 = func_0x0eee2fc0();
  lVar2 = *plVar1;
  LOCK();
  lVar6 = plVar1[2];
  bVar8 = lVar2 == lVar6;
  if (bVar8) {
    plVar1[2] = lVar5;
    lVar6 = lVar2;
  }
  UNLOCK();
  if (!bVar8) {
    iVar7 = 3000;
    do {
      while( true ) {
        if ((lVar6 == lVar5) && (iVar4 = (int)plVar1[1] + 1, iVar4 != -1)) {
          *(int *)(plVar1 + 1) = iVar4;
          LOCK();
          bVar8 = param_2 == *(char *)(param_1 + 0xb8);
          if (bVar8) {
            *(char *)(param_1 + 0xb8) = param_3;
          }
          UNLOCK();
          goto joined_r0x0cae0a78;
        }
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        lVar2 = *plVar1;
        LOCK();
        lVar6 = plVar1[2];
        bVar8 = lVar2 == lVar6;
        if (bVar8) {
          plVar1[2] = lVar5;
          lVar6 = lVar2;
        }
        UNLOCK();
        if (bVar8) goto LAB_0cae09e6;
      }
      sched_yield();
      iVar7 = 0;
      lVar2 = *plVar1;
      LOCK();
      lVar6 = plVar1[2];
      bVar8 = lVar2 == lVar6;
      if (bVar8) {
        plVar1[2] = lVar5;
        lVar6 = lVar2;
      }
      UNLOCK();
    } while (!bVar8);
  }
LAB_0cae09e6:
  *(undefined4 *)(plVar1 + 1) = 1;
  LOCK();
  bVar8 = param_2 == *(char *)(param_1 + 0xb8);
  if (bVar8) {
    *(char *)(param_1 + 0xb8) = param_3;
  }
  UNLOCK();
joined_r0x0cae0a78:
  if (bVar8) {
    *(undefined1 *)(param_1 + 0xb9) = 0;
    func_0x0cae0900(*(undefined8 *)(param_1 + 0x1510),param_2,param_3);
  }
  if (plVar1[2] == lVar5) {
    iVar7 = (int)plVar1[1];
    if (iVar7 == 1) {
      *(undefined4 *)(plVar1 + 1) = 0;
      plVar1[2] = *plVar1;
      return;
    }
    if (iVar7 != 0) {
      *(int *)(plVar1 + 1) = iVar7 + -1;
      return;
    }
  }
  cVar3 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar3 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  return;
}


