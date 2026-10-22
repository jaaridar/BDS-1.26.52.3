/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6bbef0 (ELF vaddr 0xd5bbef0)
 * Label: callee-of:0xd1cf130
 * Body:  [[0d6bbef0, 0d6bbf9a]]
 * Ghidra: FUN_0d6bbef0
 */


void FUN_0d6bbef0(long param_1,ulong *param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong *puStack_18;
  
  uStack_28 = param_2[2];
  uStack_38 = *param_2;
  uStack_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puStack_18 = &uStack_38;
  lVar1 = func_0x0d6c9580(param_1 + 8,puStack_18,&UNK_01563a4f,&puStack_18,&uStack_39);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&puStack_18,lVar1 + 0x38);
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e040;
  *(undefined1 *)(lVar1 + 0x40) = param_3;
  *(undefined4 *)(lVar1 + 0x60) = 1;
  if ((uStack_38 & 1) != 0) {
    func_0x0412a280(uStack_28,uStack_38 & 0xfffffffffffffffe);
  }
  return;
}


