/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7b5240
 * Label: string:no_legacy_worldgen
 * Body:  [[0c7b4ea8, 0c7b4ec4] [0c7b5240, 0c7b52dd]]
 * Ghidra: FUN_0c7b5240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c7b5240(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_R14;
  undefined4 in_stack_00000020;
  undefined1 *in_stack_00000028;
  byte in_stack_00000030;
  undefined4 uStack0000000000000031;
  undefined3 uStack0000000000000035;
  undefined4 uStack0000000000000039;
  undefined4 uStack000000000000003d;
  undefined1 uStack0000000000000041;
  undefined6 uStack0000000000000042;
  
  func_0x0412a280(in_stack_00000020,param_2 & 0xfffffffffffffffe);
  in_stack_00000030 = 0x20;
  uStack0000000000000031 = _DAT_0129b6bd;
  _uStack0000000000000035 = _UNK_0129b6c1;
  uStack0000000000000039 = _UNK_0129b6c5;
  uStack000000000000003d = _UNK_0129b6c9;
  uStack0000000000000041 = 0;
  in_stack_00000028 = &stack0x00000030;
  lVar1 = func_0x0d6c9580(unaff_R14 + 8,in_stack_00000028,&UNK_01563a4f,&stack0x00000028,
                          &stack0x0000000f);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000028,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((in_stack_00000030 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack0000000000000042,
                             CONCAT11(uStack0000000000000041,uStack000000000000003d._3_1_)),
                    CONCAT35(uStack0000000000000035,
                             CONCAT41(uStack0000000000000031,in_stack_00000030)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x129b6bd  weirdo_direction
 */
