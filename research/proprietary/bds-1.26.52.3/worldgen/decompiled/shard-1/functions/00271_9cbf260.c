/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9dbf260 (ELF vaddr 0x9cbf260)
 * Label: callee-of:0xc95fb20
 * Body:  [[09dbf260, 09dbf3c2] [09dbf3d0, 09dbf427]]
 * Ghidra: FUN_09dbf260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09dbf260(long param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_48;
  
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = param_5;
  uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  plStack_48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plStack_48 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  *plStack_48 = (long)&UNK_0f1e4360;
  plStack_48[1] = param_1;
  plStack_48[2] = param_4;
  plStack_48[3] = lStack_70;
  plStack_48[4] = (long)param_2;
  plStack_48[5] = (long)&lStack_88;
  func_0x0ca6c6f0(param_1 + 0x20,&UNK_01a2d740,param_2 + 4,uVar4,param_3,&lStack_68);
  if (plStack_48 == &lStack_68) {
    lVar5 = 0x20;
LAB_09dbf345:
    (**(code **)(*plStack_48 + lVar5))();
    lVar5 = lStack_88;
    if (lStack_88 == lStack_80) goto joined_r0x09dbf3b2;
  }
  else {
    lVar5 = 0x28;
    if (plStack_48 != (long *)0x0) goto LAB_09dbf345;
    lVar5 = lStack_88;
    if (lStack_88 == lStack_80) goto joined_r0x09dbf3b2;
  }
  lVar2 = lStack_80;
  lVar6 = lStack_88;
  do {
    (**(code **)(*param_3 + 0x68))(&lStack_68,param_3,lVar6,0);
    plVar3 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        func_0x0412c2d0(plVar3);
      }
    }
    lVar6 = lVar6 + 0x18;
    lVar5 = lStack_88;
  } while (lVar6 != lVar2);
joined_r0x09dbf3b2:
  lStack_88 = lVar5;
  lVar2 = lStack_80;
  if (lVar5 != 0) {
    for (; lVar5 != lVar2; lVar2 = lVar2 + -0x18) {
      if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar2 + -8),*(ulong *)(lVar2 + -0x18) & 0xfffffffffffffffe);
      }
    }
    lStack_80 = lVar5;
    func_0x0412a280(lStack_88,lStack_78 - lStack_88);
  }
  return;
}


