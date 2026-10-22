/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd6bb450 (ELF vaddr 0xd5bb450)
 * Label: callee-of:0xc9687f0
 * Body:  [[0d6bb450, 0d6bb4dd]]
 * Ghidra: FUN_0d6bb450
 */


long FUN_0d6bb450(long param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_39;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong *puStack_18;
  
  if (*param_3 == 0) {
    lVar2 = 0;
  }
  else {
    uStack_28 = param_2[2];
    uStack_38 = *param_2;
    uStack_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    lVar1 = *param_3;
    puStack_18 = &uStack_38;
    lVar2 = func_0x0d6c9580(param_1 + 8,puStack_18,&UNK_01563a4f,&puStack_18,&uStack_39);
    lVar2 = lVar2 + 0x38;
    func_0x0d6bb5a0(lVar2,lVar1);
    if ((uStack_38 & 1) != 0) {
      func_0x0412a280(uStack_28,uStack_38 & 0xfffffffffffffffe);
    }
  }
  return lVar2;
}


