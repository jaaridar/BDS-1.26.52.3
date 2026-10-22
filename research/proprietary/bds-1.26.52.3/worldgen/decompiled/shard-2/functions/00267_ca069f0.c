/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb069f0 (ELF vaddr 0xca069f0)
 * Label: callee-of:0xc95ddd0
 * Body:  [[0412d6b0, 0412d6b4] [0cb069f0, 0cb06a91] [0cb06aa0, 0cb06bf5] [0cb06c00, 0cb06c73] [0cb06c80, 0cb06cbc]]
 * Ghidra: FUN_0cb069f0
 */


/* WARNING: Possible PIC construction at 0x0cb06b8e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cb06b93) */
/* WARNING: Removing unreachable block (ram,0x0cb06ba0) */
/* WARNING: Removing unreachable block (ram,0x0cb06bcc) */
/* WARNING: Removing unreachable block (ram,0x0cb06bd7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb069f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lStack_40;
  long *plStack_38;
  
  if (param_1[9] == 0) {
    plVar5 = param_1 + 1;
    FUN_0412d680(plVar5);
    lVar2 = param_1[6];
    for (lVar8 = param_1[7]; lVar2 != lVar8; lVar8 = lVar8 + -8) {
      lVar3 = *(long *)(lVar8 + -8);
      *(undefined8 *)(lVar8 + -8) = 0;
      if (lVar3 != 0) {
        LOCK();
        plVar6 = (long *)(*(long *)(lVar3 + 0x30) + 0x370);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        func_0x0cadbac0(lVar3);
        func_0x0412a280(lVar3,0x18b0);
      }
    }
    param_1[7] = lVar2;
  }
  else {
    lVar2 = *param_1;
    if ((*(long *)(lVar2 + 0x1a8) == 0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(**(long **)(lVar2 + 0x1a8) + 0xc0))();
    plVar5 = param_1 + 1;
    FUN_0412d680(plVar5);
    plVar6 = (long *)param_1[6];
    plVar7 = (long *)param_1[7];
    if (plVar6 != plVar7) {
      plStack_38 = plVar5;
      do {
        if (*plVar6 != 0) {
          (**(code **)(**(long **)(*param_1 + 0xa0) + 0x760))();
          lVar2 = *param_1;
          if ((*(long *)(lVar2 + 0x1a8) == 0) &&
             (cVar4 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98)
             , cVar4 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar5 = *(long **)(lVar2 + 0x1a8);
          lStack_40 = *plVar6;
          *plVar6 = 0;
          (**(code **)(*plVar5 + 0xd0))(plVar5,&lStack_40);
          lVar2 = lStack_40;
          lStack_40 = 0;
          if (lVar2 != 0) {
            LOCK();
            plVar5 = (long *)(*(long *)(lVar2 + 0x30) + 0x370);
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            func_0x0cadbac0(lVar2);
            func_0x0412a280(lVar2,0x18b0);
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar7);
      plVar6 = (long *)param_1[6];
      plVar7 = (long *)param_1[7];
      plVar5 = plStack_38;
    }
    for (; plVar6 != plVar7; plVar7 = plVar7 + -1) {
      lVar2 = plVar7[-1];
      plVar7[-1] = 0;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar2 + 0x30) + 0x370);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        func_0x0cadbac0(lVar2);
        func_0x0412a280(lVar2,0x18b0);
      }
    }
    param_1[7] = (long)plVar6;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(plVar5);
  return;
}


