/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc661530 (ELF vaddr 0xc561530)
 * Label: callee-of:0x5a1f120
 * Body:  [[0c661530, 0c661658]]
 * Ghidra: FUN_0c661530
 */


undefined8 FUN_0c661530(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  long *plStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  if (param_4 != 0) {
    func_0x0c645cd0(param_1 + 0x368);
  }
  uVar3 = func_0x08ccae40(param_1 + 0x368);
  uVar2 = *(undefined2 *)(param_1 + 0x14e);
  if (param_2 == 0) {
    puStack_68 = (undefined *)0x0;
    lStack_60 = 0;
  }
  else {
    puStack_58 = &UNK_0f3afec0;
    plStack_50 = (long *)param_1;
    lStack_48 = param_2;
    uStack_40 = param_3;
    ppuStack_38 = &puStack_58;
    func_0x08ccb700(&puStack_68,uVar3,&puStack_58);
    if (ppuStack_38 == &puStack_58) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (ppuStack_38 == (undefined **)0x0) goto LAB_0c6615cf;
    }
    (**(code **)(*ppuStack_38 + lVar4))();
  }
LAB_0c6615cf:
  func_0x0c6ed620(uVar3,uVar2,&puStack_68,1);
  if (lStack_60 != 0) {
    plVar5 = (long *)func_0x0412c300();
    plStack_50 = plVar5;
    if (plVar5 != (long *)0x0) {
      puStack_58 = puStack_68;
      if (puStack_68 != (undefined *)0x0) {
        (**(code **)(**(long **)(puStack_68 + 0x28) + 0x10))();
      }
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        func_0x0412c2d0(plVar5);
      }
    }
    if (lStack_60 != 0) {
      func_0x0412c2d0();
    }
  }
  return uVar3;
}


