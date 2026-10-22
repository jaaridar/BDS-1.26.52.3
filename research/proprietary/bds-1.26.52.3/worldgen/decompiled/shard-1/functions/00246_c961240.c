/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca61240 (ELF vaddr 0xc961240)
 * Label: Dimension::vslot45
 * Body:  [[0412d6b0, 0412d6b4] [0ca61240, 0ca612ce] [0ca612d0, 0ca61306] [0cb069f0, 0cb06a91] [0cb06aa0, 0cb06bf5] [0cb06c00, 0cb06c73] [0cb06c80, 0cb06cbc] [0eee2d60, 0eee2d65]]
 * Ghidra: wg_Dimension__vslot45
 */


/* WARNING: Possible PIC construction at 0x0cb06b8e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cb06b93) */
/* WARNING: Removing unreachable block (ram,0x0cb06ba0) */
/* WARNING: Removing unreachable block (ram,0x0cb06bcc) */
/* WARNING: Removing unreachable block (ram,0x0cb06bd7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot45(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xca61260;
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x390))(*(long **)(param_1 + 0xa0),param_1 + 8);
  uStack_30 = 0xca61270;
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0xc0))();
  lVar6 = *(long *)(param_1 + 0x318);
  lVar1 = *(long *)(lVar6 + 8);
  for (lVar9 = *(long *)(lVar6 + 0x10); lVar1 != lVar9; lVar9 = lVar9 + -0x10) {
    plVar5 = *(long **)(lVar9 + -8);
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      lVar3 = *plVar7;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        uStack_30 = 0xca612fd;
        (**(code **)(*plVar5 + 0x10))(plVar5);
        uStack_30 = 0xca61305;
        func_0x0412c2d0(plVar5);
      }
    }
  }
  *(long *)(lVar6 + 0x10) = lVar1;
  uStack_30 = 0xca61298;
  (**(code **)(**(long **)(param_1 + 0x1a8) + 200))();
  if (*(long **)(param_1 + 0x438) != (long *)0x0) {
    uStack_30 = 0xca612aa;
    (**(code **)(**(long **)(param_1 + 0x438) + 0x28))();
  }
  uStack_30 = 0xca612b7;
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  plVar5 = (long *)(param_1 + 0x328);
  if (*(long *)(param_1 + 0x370) == 0) {
    lVar6 = param_1 + 0x330;
    func_0x0412d680(lVar6);
    lVar1 = *(long *)(param_1 + 0x358);
    for (lVar9 = *(long *)(param_1 + 0x360); lVar1 != lVar9; lVar9 = lVar9 + -8) {
      lVar3 = *(long *)(lVar9 + -8);
      *(undefined8 *)(lVar9 + -8) = 0;
      if (lVar3 != 0) {
        LOCK();
        plVar5 = (long *)(*(long *)(lVar3 + 0x30) + 0x370);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        func_0x0cadbac0(lVar3);
        func_0x0412a280(lVar3,0x18b0);
      }
    }
    *(long *)(param_1 + 0x360) = lVar1;
  }
  else {
    lVar6 = *plVar5;
    if ((*(long *)(lVar6 + 0x1a8) == 0) &&
       (cVar4 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98),
       cVar4 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    (**(code **)(**(long **)(lVar6 + 0x1a8) + 0xc0))();
    lVar6 = param_1 + 0x330;
    func_0x0412d680(lVar6);
    plVar7 = *(long **)(param_1 + 0x358);
    plVar8 = *(long **)(param_1 + 0x360);
    if (plVar7 != plVar8) {
      lStack_38 = lVar6;
      do {
        if (*plVar7 != 0) {
          (**(code **)(**(long **)(*plVar5 + 0xa0) + 0x760))();
          lVar6 = *plVar5;
          if ((*(long *)(lVar6 + 0x1a8) == 0) &&
             (cVar4 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef,&UNK_012cdf98)
             , cVar4 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar2 = *(long **)(lVar6 + 0x1a8);
          lStack_40 = *plVar7;
          *plVar7 = 0;
          (**(code **)(*plVar2 + 0xd0))(plVar2,&lStack_40);
          lVar6 = lStack_40;
          lStack_40 = 0;
          if (lVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*(long *)(lVar6 + 0x30) + 0x370);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            func_0x0cadbac0(lVar6);
            func_0x0412a280(lVar6,0x18b0);
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar8);
      plVar7 = *(long **)(param_1 + 0x358);
      plVar8 = *(long **)(param_1 + 0x360);
      lVar6 = lStack_38;
    }
    for (; plVar7 != plVar8; plVar8 = plVar8 + -1) {
      lVar1 = plVar8[-1];
      plVar8[-1] = 0;
      if (lVar1 != 0) {
        LOCK();
        plVar5 = (long *)(*(long *)(lVar1 + 0x30) + 0x370);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        func_0x0cadbac0(lVar1);
        func_0x0412a280(lVar1,0x18b0);
      }
    }
    *(long **)(param_1 + 0x360) = plVar7;
  }
  (*(code *)PTR_pthread_mutex_unlock_0f546448)(lVar6);
  return;
}


