/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x533f350 (ELF vaddr 0x523f350)
 * Label: callee-of:0x5254ab0
 * Body:  [[0533f350, 0533f37d] [0533f380, 0533f3ef]]
 * Ghidra: FUN_0533f350
 */


void FUN_0533f350(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar1 != lVar2) {
    do {
      param_1[2] = lVar2 + -0x68;
      if ((ulong)*(uint *)(lVar2 + -0x40) != 0xffffffff) {
        (**(code **)(&UNK_0efa3780 + (ulong)*(uint *)(lVar2 + -0x40) * 8))(&uStack_32,lVar2 + -0x48)
        ;
      }
      *(undefined4 *)(lVar2 + -0x40) = 0xffffffff;
      if ((ulong)*(uint *)(lVar2 + -0x50) != 0xffffffff) {
        (**(code **)(&UNK_0efa3780 + (ulong)*(uint *)(lVar2 + -0x50) * 8))(&uStack_31,lVar2 + -0x58)
        ;
      }
      *(undefined4 *)(lVar2 + -0x50) = 0xffffffff;
      lVar2 = param_1[2];
    } while (lVar1 != lVar2);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x0412a280(lVar1,param_1[3] - lVar1);
  }
  return;
}


