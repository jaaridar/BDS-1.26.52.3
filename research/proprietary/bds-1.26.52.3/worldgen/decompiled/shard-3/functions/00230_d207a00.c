/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd307a00 (ELF vaddr 0xd207a00)
 * Label: callee-of:0xd2086c0
 * Body:  [[0d307a00, 0d307cb0] [0d307cc0, 0d307d07]]
 * Ghidra: FUN_0d307a00
 */


/* WARNING: Possible PIC construction at 0x0d307a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0d307b49: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d307a00(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long in_RAX;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_30;
  
  if (((ulong)param_1[0x1d] >> 0x37 & 1) != 0) {
    uStack_30 = 0xd307a3c;
    in_RAX = (**(code **)(_DAT_0f5463b0 + 0x28))
                       (&DAT_0f5463b0,(param_1[0x1d] & 0xff00ffffffffffffU) - 8);
  }
  param_1[0x1d] = 0;
  if ((param_1[0x1c] & 0x80000000000000U) != 0) {
    uStack_30 = 0xd307a75;
    in_RAX = (**(code **)(_DAT_0f5463b0 + 0x28))
                       (&DAT_0f5463b0,(param_1[0x1c] & 0xff00ffffffffffffU) - 8);
  }
  param_1[0x1c] = 0;
  lVar5 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar5 != 0) {
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    uStack_30 = 0xd307aa1;
    goto SUB_0412a280;
  }
  lVar5 = param_1[0x19];
  param_1[0x19] = 0;
  if (lVar5 != 0) {
    uStack_30 = 0xd307ac2;
    in_RAX = func_0x0412a280(lVar5,8);
  }
  lVar5 = param_1[0x18];
  param_1[0x18] = 0;
  if (lVar5 != 0) {
    plVar6 = *(long **)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      in_RAX = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (in_RAX == 0) {
        uStack_30 = 0xd307b05;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uStack_30 = 0xd307b0d;
        in_RAX = func_0x0412c2d0(plVar6);
      }
      plVar6 = *(long **)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        in_RAX = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (in_RAX == 0) {
          uStack_30 = 0xd307b39;
          (**(code **)(*plVar6 + 0x10))(plVar6);
          uStack_30 = 0xd307b41;
          in_RAX = func_0x0412c2d0(plVar6);
        }
      }
    }
    register0x00000020 = (BADSPACEBASE *)&uStack_30;
    uStack_30 = 0xd307b4e;
    goto SUB_0412a280;
  }
  plVar6 = (long *)param_1[0x16];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (plVar6 == (long *)0x0) {
    param_1[0x17] = 0;
    uVar2 = param_1[0x14];
  }
  else {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      uStack_30 = 0xd307b7f;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uStack_30 = 0xd307b87;
      func_0x0412c2d0(plVar6);
    }
    plVar6 = (long *)param_1[0x16];
    param_1[0x17] = 0;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        uStack_30 = 0xd307bb9;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uStack_30 = 0xd307bc1;
        func_0x0412c2d0(plVar6);
      }
    }
    uVar2 = param_1[0x14];
  }
  if ((uVar2 & 0x80000000000000) != 0) {
    uStack_30 = 0xd307bfe;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uVar2 & 0xff00ffffffffffff) - 8);
  }
  param_1[0x14] = 0;
  if ((param_1[0x13] & 0x80000000000000U) != 0) {
    uStack_30 = 0xd307c2d;
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(param_1[0x13] & 0xff00ffffffffffffU) - 8);
  }
  param_1[0x13] = 0;
  plVar6 = (long *)param_1[0x10];
  if (plVar6 == param_1 + 0xc) {
    lVar5 = 0x20;
LAB_0d307c70:
    uStack_30 = 0xd307c76;
    (**(code **)(*plVar6 + lVar5))();
    plVar6 = (long *)param_1[10];
    if (plVar6 != param_1 + 6) goto LAB_0d307c5f;
LAB_0d307c83:
    lVar5 = 0x20;
LAB_0d307c88:
    uStack_30 = 0xd307c8e;
    (**(code **)(*plVar6 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (plVar6 != (long *)0x0) goto LAB_0d307c70;
    plVar6 = (long *)param_1[10];
    if (plVar6 == param_1 + 6) goto LAB_0d307c83;
LAB_0d307c5f:
    lVar5 = 0x28;
    if (plVar6 != (long *)0x0) goto LAB_0d307c88;
  }
  uStack_30 = 0xd307c9b;
  in_RAX = func_0x04908570(param_1 + 3,param_1[4]);
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return in_RAX;
  }
  lVar7 = param_1[1];
  lVar5 = lVar3;
  if (lVar3 != lVar7) {
    do {
      plVar6 = *(long **)(lVar7 + -8);
      *(undefined8 *)(lVar7 + -8) = 0;
      if (plVar6 != (long *)0x0) {
        uStack_30 = 0xd307ce0;
        in_RAX = (**(code **)(*plVar6 + 8))();
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != lVar3);
    lVar5 = *param_1;
  }
  param_1[1] = lVar3;
SUB_0412a280:
  *(long *)((long)register0x00000020 + -8) = in_RAX;
  if (lVar5 != 0) {
    pcVar4 = *(code **)(_DAT_0f5463b0 + 0x18);
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0xee326ba;
    (*pcVar4)(&DAT_0f5463b0,lVar5);
  }
  return *(long *)((long)register0x00000020 + -8);
}


