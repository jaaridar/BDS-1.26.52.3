/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc752b30
 * Label: VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::vslot3
 * Body:  [[0c752878, 0c752894] [0c752b30, 0c752bc5] [0c752c83, 0c752cad]]
 * Ghidra: wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot3
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot3(void)

{
  long lVar1;
  long unaff_R14;
  byte bStack0000000000000010;
  undefined7 uStack0000000000000011;
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  byte in_stack_00000030;
  undefined4 uStack0000000000000031;
  undefined3 uStack0000000000000035;
  undefined4 uStack0000000000000039;
  undefined4 uStack000000000000003d;
  undefined1 uStack0000000000000041;
  undefined6 uStack0000000000000042;
  
  func_0x0d6bbef0();
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT71(uStack0000000000000011,bStack0000000000000010) & 0xfffffffffffffffe);
  }
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
