/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7c2830
 * Label: caller-of-seed
 * Body:  [[0c7c2830, 0c7c28b4] [0c7c2e67, 0c7c2e83]]
 * Ghidra: FUN_0c7c2830
 */


void FUN_0c7c2830(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puStack0000000000000008;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  undefined6 uStack0000000000000020;
  undefined1 uStack0000000000000026;
  undefined1 uStack0000000000000027;
  
  uStack0000000000000026 = 0;
  puStack0000000000000008 = (undefined8 *)&stack0x00000010;
  lVar1 = func_0x0d6c9580(param_3 + 8,puStack0000000000000008,&UNK_01563a4f,&stack0x00000008,
                          &stack0x00000007);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000008,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 9;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack0000000000000027,
                             CONCAT16(uStack0000000000000026,uStack0000000000000020)),
                    CONCAT71(uStack0000000000000011,bStack0000000000000010) & 0xfffffffffffffffe);
  }
  return;
}


