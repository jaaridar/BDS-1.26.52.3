/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcad6ff0 (ELF vaddr 0xc9d6ff0)
 * Label: callee-of:0xd1cf130
 * Body:  [[0cad6ff0, 0cad709a]]
 * Ghidra: FUN_0cad6ff0
 */


void FUN_0cad6ff0(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uStack_31;
  byte bStack_30;
  undefined7 uStack_2f;
  undefined1 uStack_28;
  undefined2 uStack_27;
  undefined1 uStack_25;
  undefined8 uStack_20;
  byte *pbStack_18;
  
  bStack_30 = 0x14;
  uStack_2f = 0x546e6f69746341;
  uStack_28 = 0x79;
  uStack_27 = 0x6570;
  uStack_25 = 0;
  uVar1 = *(undefined1 *)(param_1 + 8);
  pbStack_18 = &bStack_30;
  lVar2 = func_0x0d6c9580(param_2 + 8,pbStack_18,&UNK_01563a4f,&pbStack_18,&uStack_31);
  if ((ulong)*(uint *)(lVar2 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar2 + 0x60) * 8))(&pbStack_18,lVar2 + 0x38);
  }
  *(undefined **)(lVar2 + 0x38) = &UNK_0f47e040;
  *(undefined1 *)(lVar2 + 0x40) = uVar1;
  *(undefined4 *)(lVar2 + 0x60) = 1;
  if ((bStack_30 & 1) != 0) {
    func_0x0412a280(uStack_20,CONCAT71(uStack_2f,bStack_30) & 0xfffffffffffffffe);
  }
  return;
}


