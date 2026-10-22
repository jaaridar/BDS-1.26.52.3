/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x4a84090 (ELF vaddr 0x4984090)
 * Label: caller-of-seed
 * Body:  [[04a84090, 04a8412c]]
 * Ghidra: FUN_04a84090
 */


void FUN_04a84090(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  wg_Dimension__vslot34();
  if (*(long *)(param_1 + 0x4b8) != 0) {
    puStack_30 = &UNK_013251e1;
    uStack_28 = 0xb;
    lVar2 = func_0x0d6c97a0(param_2 + 8,&puStack_30);
    if ((lVar2 != param_2 + 0x10) && (*(int *)(lVar2 + 0x60) == 10)) {
      uVar1 = *(undefined8 *)(param_1 + 0x4b8);
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
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


