/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a84130 (ELF vaddr 0x4984130)
 * Label: caller-of-seed
 * Body:  [[04a84130, 04a841d0]]
 * Ghidra: FUN_04a84130
 */


void FUN_04a84130(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x0ca67b50(param_1 + -0x10);
  if (*(long *)(param_1 + 0x4a8) != 0) {
    puStack_30 = &UNK_013251e1;
    uStack_28 = 0xb;
    lVar2 = func_0x0d6c97a0(param_2 + 8,&puStack_30);
    if ((lVar2 != param_2 + 0x10) && (*(int *)(lVar2 + 0x60) == 10)) {
      uVar1 = *(undefined8 *)(param_1 + 0x4a8);
      puStack_30 = &UNK_013251e1;
      uStack_28 = 0xb;
      lVar3 = func_0x0d6c97a0(param_2 + 8,&puStack_30);
      lVar2 = 0;
      if (*(int *)(lVar3 + 0x60) == 10) {
        lVar2 = lVar3 + 0x38;
      }
      func_0x04a7bae0(uVar1,lVar2);
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


