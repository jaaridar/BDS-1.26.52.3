/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x52a3830 (ELF vaddr 0x51a3830)
 * Label: callee-of:0x517c470
 * Body:  [[052a3830, 052a38f8]]
 * Ghidra: FUN_052a3830
 */


void FUN_052a3830(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plStack_10;
  
  plStack_10 = param_1;
  func_0x052a3910(param_1 + 0x12,&plStack_10);
  func_0x052a39f0(param_1 + 0x24);
  func_0x04136a00(param_1 + 0x1d);
  func_0x04136a00(param_1 + 0x17);
  plVar2 = (long *)param_1[0x10];
  if (plVar2 == param_1 + 0xc) {
    lVar1 = 0x20;
LAB_052a38c1:
    (**(code **)(*plVar2 + lVar1))();
    plVar2 = (long *)param_1[10];
    if (plVar2 != param_1 + 6) goto LAB_052a3899;
LAB_052a38d4:
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (plVar2 != (long *)0x0) goto LAB_052a38c1;
    plVar2 = (long *)param_1[10];
    if (plVar2 == param_1 + 6) goto LAB_052a38d4;
LAB_052a3899:
    lVar1 = 0x28;
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)param_1[4];
      goto joined_r0x052a38e6;
    }
  }
  (**(code **)(*plVar2 + lVar1))();
  plVar2 = (long *)param_1[4];
joined_r0x052a38e6:
  if (plVar2 == param_1) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  (**(code **)(*plVar2 + lVar1))();
  return;
}


