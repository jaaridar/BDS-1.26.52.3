/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc752b10
 * Label: VanillaSurfaceBuilders::CappedSurfaceBuilder::vslot6
 * Body:  [[0c752878, 0c752894] [0c752b10, 0c752bc5] [0c752c83, 0c752cad]]
 * Ghidra: wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot6
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__CappedSurfaceBuilder__vslot6(void)

{
  undefined8 in_RAX;
  long lVar1;
  long unaff_R14;
  long in_FS_OFFSET;
  byte bStack0000000000000018;
  undefined7 uStack0000000000000019;
  undefined8 uStack0000000000000020;
  undefined1 uStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined1 *in_stack_00000030;
  byte in_stack_00000038;
  undefined4 uStack0000000000000039;
  undefined3 uStack000000000000003d;
  undefined4 uStack0000000000000041;
  undefined4 uStack0000000000000045;
  undefined1 uStack0000000000000049;
  undefined6 uStack000000000000004a;
  
  *(undefined8 *)((long)&stack0x00000018 + in_FS_OFFSET + 1) = in_RAX;
  uStack0000000000000020 = 0x7469625f6e776f64;
  uStack0000000000000028 = 0;
  func_0x0d6bbef0();
  if ((bStack0000000000000018 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack0000000000000029,uStack0000000000000028),
                    CONCAT71(uStack0000000000000019,bStack0000000000000018) & 0xfffffffffffffffe);
  }
  in_stack_00000038 = 0x20;
  uStack0000000000000039 = _DAT_0129b6bd;
  _uStack000000000000003d = _UNK_0129b6c1;
  uStack0000000000000041 = _UNK_0129b6c5;
  uStack0000000000000045 = _UNK_0129b6c9;
  uStack0000000000000049 = 0;
  in_stack_00000030 = &stack0x00000038;
  lVar1 = func_0x0d6c9580(unaff_R14 + 8,in_stack_00000030,&UNK_01563a4f,&stack0x00000030,
                          &stack0x00000017);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000030,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((in_stack_00000038 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack000000000000004a,
                             CONCAT11(uStack0000000000000049,uStack0000000000000045._3_1_)),
                    CONCAT35(uStack000000000000003d,
                             CONCAT41(uStack0000000000000039,in_stack_00000038)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x129b6bd  weirdo_direction
 */
