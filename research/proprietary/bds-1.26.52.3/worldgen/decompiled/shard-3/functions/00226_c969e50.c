/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca69e50 (ELF vaddr 0xc969e50)
 * Label: Dimension::vslot6
 * Body:  [[0412d6b0, 0412d6b4] [0ca69e50, 0ca69e5b] [0cb069f0, 0cb06a91] [0cb06aa0, 0cb06bf5] [0cb06c00, 0cb06c73] [0cb06c80, 0cb06cbc] [0eee2d60, 0eee2d65]]
 * Ghidra: wg_Dimension__vslot6
 */


/* WARNING: Possible PIC construction at 0x0cb06b8e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cb06b93) */
/* WARNING: Removing unreachable block (ram,0x0cb06ba0) */
/* WARNING: Removing unreachable block (ram,0x0cb06bcc) */
/* WARNING: Removing unreachable block (ram,0x0cb06bd7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot6(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lStack_40;
  long lStack_38;
  
  plVar6 = (long *)(param_1 + 0x328);
  if (*(long *)(param_1 + 0x370) == 0) {
    lVar5 = param_1 + 0x330;
    func_0x0412d680(lVar5);
    lVar2 = *(long *)(param_1 + 0x358);
    for (lVar9 = *(long *)(param_1 + 0x360); lVar2 != lVar9; lVar9 = lVar9 + -8) {
      lVar3 = *(long *)(lVar9 + -8);
      *(undefined8 *)(lVar9 + -8) = 0;
      if (lVar3 != 0) {
        LOCK();
        plVar6 = (long *)(*(long *)(lVar3 + 0x30) + 0x370);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        func_0x0cadbac0(lVar3);
        func_0x0412a280(lVar3,0x18b0);
      }
    }
    *(long *)(param_1 + 0x360) = lVar2;
  }
  else {
    lVar5 = *plVar6;
    if ((*(long *)(lVar5 + 0x1a8) == 0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(**(long **)(lVar5 + 0x1a8) + 0xc0))();
    lVar5 = param_1 + 0x330;
    func_0x0412d680(lVar5);
    plVar7 = *(long **)(param_1 + 0x358);
    plVar8 = *(long **)(param_1 + 0x360);
    if (plVar7 != plVar8) {
      lStack_38 = lVar5;
      do {
        if (*plVar7 != 0) {
          (**(code **)(**(long **)(*plVar6 + 0xa0) + 0x760))();
          lVar5 = *plVar6;
          if ((*(long *)(lVar5 + 0x1a8) == 0) &&
             (cVar4 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98)
             , cVar4 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar1 = *(long **)(lVar5 + 0x1a8);
          lStack_40 = *plVar7;
          *plVar7 = 0;
          (**(code **)(*plVar1 + 0xd0))(plVar1,&lStack_40);
          lVar5 = lStack_40;
          lStack_40 = 0;
          if (lVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar5 + 0x30) + 0x370);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            func_0x0cadbac0(lVar5);
            func_0x0412a280(lVar5,0x18b0);
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar8);
      plVar7 = *(long **)(param_1 + 0x358);
      plVar8 = *(long **)(param_1 + 0x360);
      lVar5 = lStack_38;
    }
    for (; plVar7 != plVar8; plVar8 = plVar8 + -1) {
      lVar2 = plVar8[-1];
      plVar8[-1] = 0;
      if (lVar2 != 0) {
        LOCK();
        plVar6 = (long *)(*(long *)(lVar2 + 0x30) + 0x370);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        func_0x0cadbac0(lVar2);
        func_0x0412a280(lVar2,0x18b0);
      }
    }
    *(long **)(param_1 + 0x360) = plVar7;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(lVar5);
  return;
}


