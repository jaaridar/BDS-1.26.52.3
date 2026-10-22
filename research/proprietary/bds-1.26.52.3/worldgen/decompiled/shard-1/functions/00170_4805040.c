/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4905040 (ELF vaddr 0x4805040)
 * Label: callee-of:0x82ea1a0
 * Body:  [[04905040, 04905062] [04905070, 049050db]]
 * Ghidra: FUN_04905040
 */


void FUN_04905040(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plStack_20;
  
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    lVar3 = param_1[8];
    lVar2 = lVar1;
    if (lVar1 != lVar3) {
      do {
        if ((*(byte *)(lVar3 + -0x38) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar3 + -0x28),
                          *(ulong *)(lVar3 + -0x38) & 0xfffffffffffffffe);
        }
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != lVar1);
      lVar2 = param_1[7];
    }
    param_1[8] = lVar1;
    func_0x0412a280(lVar2,param_1[9] - lVar2);
  }
  plStack_20 = param_1 + 3;
  func_0x048b0f50(&plStack_20);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    param_1[1] = lVar1;
    func_0x0412a280(lVar1,param_1[2] - lVar1);
  }
  return;
}


