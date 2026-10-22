/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7ade20
 * Label: string:temperature
 * Body:  [[0c7ade20, 0c7ade5f] [0c7ade61, 0c7ade9a] [0c7adf26, 0c7adf42]]
 * Ghidra: FUN_0c7ade20
 */


void FUN_0c7ade20(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  code *pcVar1;
  long in_RAX;
  long lVar2;
  undefined8 unaff_RBX;
  long unaff_retaddr;
  
  *(byte *)(in_RAX + -0x73) = *(byte *)(in_RAX + -0x73) | param_4;
  *(undefined8 *)(unaff_retaddr + 8) = unaff_RBX;
  *(undefined8 *)(unaff_retaddr + -8) = 0xc7ade4a;
  lVar2 = func_0x0d6c9580(param_3);
  if ((ulong)*(uint *)(lVar2 + 0x60) != 0xffffffff) {
    pcVar1 = *(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar2 + 0x60) * 8);
    *(undefined8 *)(unaff_retaddr + -8) = 0xc7ade70;
    (*pcVar1)(unaff_retaddr + 8,lVar2 + 0x38);
  }
  *(undefined **)(lVar2 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar2 + 0x40) = 1;
  *(undefined4 *)(lVar2 + 0x60) = 3;
  if ((*(byte *)(unaff_retaddr + 0x10) & 1) != 0) {
    *(undefined8 *)(unaff_retaddr + -8) = 0xc7adf3b;
    func_0x0412a280(*(undefined8 *)(unaff_retaddr + 0x20),
                    *(ulong *)(unaff_retaddr + 0x10) & 0xfffffffffffffffe);
  }
  return;
}


