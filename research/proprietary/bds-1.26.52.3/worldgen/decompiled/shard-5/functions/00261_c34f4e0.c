/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc44f4e0 (ELF vaddr 0xc34f4e0)
 * Label: callee-of:0xc5cb4d0
 * Body:  [[0c44f4e0, 0c44f63f]]
 * Ghidra: FUN_0c44f4e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0c44f4e0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plStack_28;
  
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1;
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)((long)plVar2 + 0xc) = *(int *)((long)plVar2 + 0xc) + -1;
    UNLOCK();
    if ((*(int *)((long)plVar2 + 0xc) < 1) && (*plVar2 == 0)) {
      FUN_0412a280(plVar2,0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 == 0) {
    plStack_28 = (long *)0x0;
  }
  else {
    plStack_28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (plStack_28 == (long *)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    *plStack_28 = (long)&UNK_0f47e0b0;
    plStack_28[2] = 0;
    plStack_28[3] = 0;
    plStack_28[1] = (long)(plStack_28 + 2);
    func_0x0d6bd5f0(plStack_28,lVar1);
  }
  func_0x0c44fd30(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    (**(code **)(*plStack_28 + 8))();
  }
  if (param_1 != param_2) {
    func_0x0c474810(param_1 + 0x30,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
                    *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3);
    func_0x0c474810(param_1 + 0x50,*(long *)(param_2 + 0x50),*(long *)(param_2 + 0x58),
                    *(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3);
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  func_0x0c45ff60(param_1);
  return param_1;
}


