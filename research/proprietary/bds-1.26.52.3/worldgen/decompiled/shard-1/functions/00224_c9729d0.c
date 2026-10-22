/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca729d0 (ELF vaddr 0xc9729d0)
 * Label: callee-of:0x517ea80
 * Body:  [[0ca729d0, 0ca72ab1]]
 * Ghidra: FUN_0ca729d0
 */


void FUN_0ca729d0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_30;
  char cStack_28;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x78) + 0x30);
  if (plVar1 != *(long **)(*(long *)(param_1 + 0x78) + 0x38)) {
    lVar2 = *plVar1;
    lStack_30 = lVar2 + 0x120;
    cStack_28 = '\x01';
    func_0x0412d680();
    if (0 < *(int *)(lVar2 + 0x178)) {
      do {
        func_0x04136a30(lVar2 + 0x148,&lStack_30);
      } while (0 < *(int *)(lVar2 + 0x178));
    }
    if (cStack_28 == '\x01') {
      func_0x0412d6b0(lStack_30);
    }
  }
  lStack_30 = param_1 + 0x80;
  cStack_28 = '\x01';
  func_0x0412d680();
  if (0 < *(int *)(param_1 + 0xd8)) {
    do {
      func_0x04136a30(param_1 + 0xa8,&lStack_30);
    } while (0 < *(int *)(param_1 + 0xd8));
  }
  if (cStack_28 == '\x01') {
    func_0x0412d6b0(lStack_30);
  }
  return;
}


