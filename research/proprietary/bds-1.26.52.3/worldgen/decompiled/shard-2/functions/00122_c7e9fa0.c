/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7e9fa0
 * Label: string:Biomes in Nether are only compatible with following Surface
 * Body:  [[0c7e9fa0, 0c7ea029] [0c7ea3ab, 0c7ea3c7]]
 * Ghidra: FUN_0c7e9fa0
 */


void FUN_0c7e9fa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puStack0000000000000008;
  byte bStack0000000000000010;
  undefined4 uStack0000000000000011;
  undefined2 uStack0000000000000015;
  undefined1 uStack0000000000000017;
  undefined8 in_stack_00000020;
  
  uStack0000000000000015 = 0x6874;
  uStack0000000000000017 = 0;
  puStack0000000000000008 = (undefined8 *)&stack0x00000010;
  lVar1 = func_0x0d6c9580(param_3 + 8,puStack0000000000000008,&UNK_01563a4f,&stack0x00000008,
                          &stack0x00000007);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000008,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT17(uStack0000000000000017,
                             CONCAT25(uStack0000000000000015,
                                      CONCAT41(uStack0000000000000011,bStack0000000000000010))) &
                    0xfffffffffffffffe);
  }
  return;
}


