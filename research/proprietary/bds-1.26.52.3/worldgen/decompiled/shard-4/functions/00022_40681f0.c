/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x41681f0 (ELF vaddr 0x40681f0)
 * Label: callee2-of:0x49a9390
 * Body:  [[041681f0, 04168263]]
 * Ghidra: FUN_041681f0
 */


void FUN_041681f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *plStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  lVar1 = *param_1;
  plStack_28 = param_2;
  if (*param_2 != -1) {
    ppuStack_20 = &puStack_18;
    puStack_18 = (undefined1 *)&plStack_28;
    func_0x0417b760(param_2,&ppuStack_20,&UNK_04179ee0);
  }
  lVar2 = *(long *)(lVar1 + 0x10);
  if (((long)(int)param_2[1] - 1U < (ulong)(*(long *)(lVar1 + 0x18) - lVar2 >> 3)) &&
     (*(long *)(lVar2 + -8 + (long)(int)param_2[1] * 8) != 0)) {
    return;
  }
  func_0x04142d40();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


