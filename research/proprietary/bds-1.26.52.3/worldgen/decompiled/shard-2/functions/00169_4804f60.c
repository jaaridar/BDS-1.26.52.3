/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4904f60 (ELF vaddr 0x4804f60)
 * Label: callee-of:0x82ea1a0
 * Body:  [[04904f60, 04904fcc] [04904fd0, 0490503c]]
 * Ghidra: FUN_04904f60
 */


void FUN_04904f60(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puStack_20;
  
  *param_1 = &UNK_0f534768;
  plVar3 = (long *)param_1[2];
  if (plVar3 == (long *)0x0) {
    *(undefined1 *)param_1[1] = 0;
  }
  else {
    *(undefined1 *)param_1[1] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    lVar5 = param_1[0xb];
    lVar4 = lVar2;
    if (lVar2 != lVar5) {
      do {
        if ((*(byte *)(lVar5 + -0x38) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar5 + -0x28),
                          *(ulong *)(lVar5 + -0x38) & 0xfffffffffffffffe);
        }
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != lVar2);
      lVar4 = param_1[10];
    }
    param_1[0xb] = lVar2;
    func_0x0412a280(lVar4,param_1[0xc] - lVar4);
  }
  puStack_20 = param_1 + 6;
  func_0x048b0f50(&puStack_20);
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    param_1[4] = lVar2;
    func_0x0412a280(lVar2,param_1[5] - lVar2);
  }
  return;
}


