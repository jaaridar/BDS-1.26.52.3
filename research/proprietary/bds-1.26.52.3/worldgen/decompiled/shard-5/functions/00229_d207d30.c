/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd307d30 (ELF vaddr 0xd207d30)
 * Label: callee-of:0xd2086c0
 * Body:  [[0d307d30, 0d307fe0] [0d307ff0, 0d308037]]
 * Ghidra: FUN_0d307d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0d307d30(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  if (((ulong)param_1[0x1d] >> 0x37 & 1) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x1d] & 0xff00ffffffffffffU) - 8);
  }
  param_1[0x1d] = 0;
  if ((param_1[0x1c] & 0x80000000000000U) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x1c] & 0xff00ffffffffffffU) - 8);
  }
  param_1[0x1c] = 0;
  lVar3 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar3 != 0) {
    FUN_0412a280(lVar3,8);
  }
  lVar3 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar3 != 0) {
    FUN_0412a280(lVar3,8);
  }
  lVar3 = param_1[0x18];
  param_1[0x18] = 0;
  if (lVar3 != 0) {
    plVar5 = *(long **)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0412c2d0(plVar5);
      }
      plVar5 = *(long **)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x18) = 0;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          FUN_0412c2d0(plVar5);
        }
      }
    }
    FUN_0412a280(lVar3,0x30);
  }
  plVar5 = (long *)param_1[0x16];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (plVar5 == (long *)0x0) {
    param_1[0x17] = 0;
    uVar2 = param_1[0x14];
  }
  else {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_0412c2d0(plVar5);
    }
    plVar5 = (long *)param_1[0x16];
    param_1[0x17] = 0;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_0412c2d0(plVar5);
      }
    }
    uVar2 = param_1[0x14];
  }
  if ((uVar2 & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar2 & 0xff00ffffffffffff) - 8);
  }
  param_1[0x14] = 0;
  if ((param_1[0x13] & 0x80000000000000U) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x13] & 0xff00ffffffffffffU) - 8);
  }
  param_1[0x13] = 0;
  plVar5 = (long *)param_1[0x10];
  if (plVar5 == param_1 + 0xc) {
    lVar3 = 0x20;
LAB_0d307fa0:
    (**(code **)(*plVar5 + lVar3))();
    plVar5 = (long *)param_1[10];
    if (plVar5 != param_1 + 6) goto LAB_0d307f8f;
LAB_0d307fb3:
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (plVar5 != (long *)0x0) goto LAB_0d307fa0;
    plVar5 = (long *)param_1[10];
    if (plVar5 == param_1 + 6) goto LAB_0d307fb3;
LAB_0d307f8f:
    lVar3 = 0x28;
    if (plVar5 == (long *)0x0) goto LAB_0d307fbe;
  }
  (**(code **)(*plVar5 + lVar3))();
LAB_0d307fbe:
  uVar4 = func_0x04908570(param_1 + 3,param_1[4]);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar7 = param_1[1];
    lVar6 = lVar3;
    if (lVar3 != lVar7) {
      do {
        plVar5 = *(long **)(lVar7 + -8);
        *(undefined8 *)(lVar7 + -8) = 0;
        if (plVar5 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar5 + 8))();
        }
        lVar7 = lVar7 + -8;
      } while (lVar7 != lVar3);
      lVar6 = *param_1;
    }
    param_1[1] = lVar3;
    if (lVar6 != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x18))(&DAT_0f5463b0,lVar6);
    }
    return uVar4;
  }
  return uVar4;
}


