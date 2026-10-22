/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc6e9230 (ELF vaddr 0xc5e9230)
 * Label: callee-of:0x49bead0
 * Body:  [[0c6e9230, 0c6e9265] [0c6e9270, 0c6e93c7]]
 * Ghidra: FUN_0c6e9230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0c6e9230(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x89) == '\x01') {
    lVar4 = func_0x0eee2fc0();
    lVar1 = *(long *)(param_1 + 0x90);
    LOCK();
    lVar5 = *(long *)(param_1 + 0xa0);
    bVar7 = lVar1 == lVar5;
    if (bVar7) {
      *(long *)(param_1 + 0xa0) = lVar4;
      lVar5 = lVar1;
    }
    UNLOCK();
    if (!bVar7) {
      iVar6 = 3000;
      do {
        while( true ) {
          if ((lVar5 == lVar4) && (iVar3 = *(int *)(param_1 + 0x98) + 1, iVar3 != -1)) {
            *(int *)(param_1 + 0x98) = iVar3;
            cVar2 = *(char *)(param_1 + 0x89);
            goto joined_r0x0c6e934f;
          }
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          lVar1 = *(long *)(param_1 + 0x90);
          LOCK();
          lVar5 = *(long *)(param_1 + 0xa0);
          bVar7 = lVar1 == lVar5;
          if (bVar7) {
            *(long *)(param_1 + 0xa0) = lVar4;
            lVar5 = lVar1;
          }
          UNLOCK();
          if (bVar7) goto LAB_0c6e92b7;
        }
        func_0x0eee35d0();
        iVar6 = 0;
        lVar1 = *(long *)(param_1 + 0x90);
        LOCK();
        lVar5 = *(long *)(param_1 + 0xa0);
        bVar7 = lVar1 == lVar5;
        if (bVar7) {
          *(long *)(param_1 + 0xa0) = lVar4;
          lVar5 = lVar1;
        }
        UNLOCK();
      } while (!bVar7);
    }
LAB_0c6e92b7:
    *(undefined4 *)(param_1 + 0x98) = 1;
    cVar2 = *(char *)(param_1 + 0x89);
joined_r0x0c6e934f:
    if (cVar2 == '\x01') {
      func_0x0c6eb860(param_1,1);
    }
    if (*(long *)(param_1 + 0xa0) == lVar4) {
      iVar6 = *(int *)(param_1 + 0x98);
      if (iVar6 == 1) {
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x90);
        goto LAB_0c6e936f;
      }
      if (iVar6 != 0) {
        *(int *)(param_1 + 0x98) = iVar6 + -1;
        lVar5 = *(long *)(param_1 + 0x80);
        goto joined_r0x0c6e9393;
      }
    }
    cVar2 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar2 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
      lVar5 = *(long *)(param_1 + 0x80);
      goto joined_r0x0c6e9393;
    }
  }
LAB_0c6e936f:
  lVar5 = *(long *)(param_1 + 0x80);
joined_r0x0c6e9393:
  if (((lVar5 == 0) && (*(char *)(param_1 + 0x7c) == '\x01')) && (*(int *)(param_1 + 0x78) == 0)) {
    func_0x05a37050(1,3,0x11,&UNK_011feb54);
    return 0;
  }
  return lVar5;
}


