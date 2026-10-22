/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca6a5d0 (ELF vaddr 0xc96a5d0)
 * Label: Dimension::vslot15
 * Body:  [[0ca6a5d0, 0ca6a8ab]]
 * Ghidra: wg_Dimension__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_Dimension__vslot15
               (long param_1,undefined8 param_2,undefined4 param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  short sVar10;
  ulong uVar11;
  long *plVar12;
  short sVar13;
  long lStack_40;
  long *plStack_38;
  
  lVar6 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x568))();
  if ((**(byte **)(lVar6 + 0x138) & 0x20) == 0) {
    return;
  }
  cVar4 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x9f0))();
  if (cVar4 != '\0') {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x920))(&lStack_40);
  if (lStack_40 != 0) {
    if ((DAT_0f649980 == '\0') && (iVar5 = func_0x04108328(&DAT_0f649980), iVar5 != 0)) {
      func_0x09ce8df0(0xf649968);
      func_0x0410844d(&DAT_0f649980);
    }
    plVar7 = (long *)(*(long *)(lStack_40 + 0x28) +
                     (ulong)((int)((ulong)(*(long *)(lStack_40 + 0x30) - *(long *)(lStack_40 + 0x28)
                                          ) >> 3) - 1U & _DAT_0f64996c) * 8);
    do {
      if (*plVar7 == -1) {
        plVar7 = *(long **)(lStack_40 + 0x48);
        break;
      }
      lVar6 = *plVar7 * 0x30;
      plVar7 = (long *)(*(long *)(lStack_40 + 0x40) + lVar6);
    } while (*(uint *)(*(long *)(lStack_40 + 0x40) + 8 + lVar6) != _DAT_0f64996c);
    lVar6 = 0;
    if ((int)plVar7[5] == -0x1a3b76f7) {
      lVar6 = plVar7[2];
    }
    if (*(char *)((long)plVar7 + 0x2c) == '\x04') {
      lVar6 = 0;
    }
    lVar6 = *(long *)(lVar6 + 8);
    uVar9 = (((ulong)((int)param_4 * 8 & 0xffffffc0) | 8) ^ param_4 >> 0x20) * -0x622015f714c7d297;
    uVar9 = (uVar9 >> 0x2f ^ param_4 >> 0x20 ^ uVar9) * -0x622015f714c7d297;
    lVar1 = *(long *)(lVar6 + 0x38);
    uVar11 = (*(long *)(lVar6 + 0x40) - lVar1 >> 3) - 1;
    plVar7 = (long *)(lVar1 + ((uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297 & uVar11) * 8);
    lVar2 = *(long *)(lVar6 + 0x50);
    do {
      lVar3 = *plVar7;
      if (lVar3 == -1) {
        plVar12 = *(long **)(lVar6 + 0x58);
        goto LAB_0ca6a751;
      }
      plVar7 = (long *)(lVar2 + lVar3 * 0x18);
    } while (*(ulong *)(lVar2 + 8 + lVar3 * 0x18) != param_4);
    plVar12 = *(long **)(lVar6 + 0x58);
    if (plVar7 == plVar12) {
LAB_0ca6a751:
      sVar13 = -1;
    }
    else {
      sVar13 = (short)plVar7[2];
    }
    uVar9 = (((ulong)((int)param_5 * 8 & 0xffffffc0) | 8) ^ param_5 >> 0x20) * -0x622015f714c7d297;
    uVar9 = (uVar9 >> 0x2f ^ param_5 >> 0x20 ^ uVar9) * -0x622015f714c7d297;
    plVar7 = (long *)(lVar1 + (uVar11 & (uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297) * 8);
    do {
      lVar6 = *plVar7;
      if (lVar6 == -1) goto LAB_0ca6a7e1;
      plVar7 = (long *)(lVar2 + lVar6 * 0x18);
    } while (*(ulong *)(lVar2 + 8 + lVar6 * 0x18) != param_5);
    if (plVar7 == plVar12) {
LAB_0ca6a7e1:
      sVar10 = -1;
      if (sVar13 == -1) goto LAB_0ca6a83f;
    }
    else {
      sVar10 = (short)plVar7[2];
      if (sVar13 == sVar10) goto LAB_0ca6a83f;
    }
    if (sVar13 != -1) {
      uVar8 = func_0x0d27dc70(*(long *)(param_1 + 0x3e0) + 0x10,param_2,param_3);
      func_0x0d27c100(uVar8,param_2,param_3);
    }
    if (sVar10 != -1) {
      uVar8 = func_0x0d27dc70(*(long *)(param_1 + 0x3e0) + 0x10,param_2,param_3);
      func_0x0d27bf80(uVar8,param_2,param_3,sVar10);
    }
  }
LAB_0ca6a83f:
  if (plStack_38 != (long *)0x0) {
    LOCK();
    plVar7 = plStack_38 + 1;
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x0412c2d0(plStack_38);
    }
  }
  return;
}


