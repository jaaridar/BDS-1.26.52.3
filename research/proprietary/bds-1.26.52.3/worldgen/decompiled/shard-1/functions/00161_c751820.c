/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc751820
 * Label: FixedBiomeSource::vslot10
 * Body:  [[0c751820, 0c7518c2]]
 * Ghidra: wg_FixedBiomeSource__vslot10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_FixedBiomeSource__vslot10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puStack0000000000000008;
  byte in_stack_00000010;
  undefined4 uStack0000000000000011;
  undefined3 uStack0000000000000015;
  undefined4 uStack0000000000000019;
  undefined4 uStack000000000000001d;
  undefined1 uStack0000000000000021;
  undefined6 uStack0000000000000022;
  
  uStack0000000000000011 = _DAT_01268347;
  _uStack0000000000000015 = _UNK_0126834b;
  uStack0000000000000019 = _UNK_0126834f;
  uStack000000000000001d = _UNK_01268353;
  uStack0000000000000021 = 0;
  puStack0000000000000008 = &stack0x00000010;
  lVar1 = func_0x0d6c9580(param_3 + 8,puStack0000000000000008,&UNK_01563a4f,&stack0x00000008,
                          &stack0x00000007);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000008,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 5;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(CONCAT62(uStack0000000000000022,
                             CONCAT11(uStack0000000000000021,uStack000000000000001d._3_1_)),
                    CONCAT35(uStack0000000000000015,
                             CONCAT41(uStack0000000000000011,in_stack_00000010)) &
                    0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x1268347  facing_direction
 */
