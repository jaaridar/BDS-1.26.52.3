/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc74fdd0
 * Label: FixedBiomeSource::vslot2
 * Body:  [[0c74fdd0, 0c74fee8] [0c750a03, 0c750a28]]
 * Ghidra: wg_FixedBiomeSource__vslot2
 */


void wg_FixedBiomeSource__vslot2(void)

{
  undefined8 in_RAX;
  long lVar1;
  long unaff_RBX;
  byte bStack0000000000000008;
  undefined7 uStack0000000000000009;
  undefined4 in_stack_00000010;
  undefined1 uStack0000000000000014;
  undefined8 in_stack_00000018;
  byte in_stack_00000020;
  undefined7 uStack0000000000000021;
  undefined1 in_stack_00000028;
  undefined1 uStack0000000000000029;
  undefined8 in_stack_00000030;
  byte in_stack_00000038;
  undefined7 uStack0000000000000039;
  undefined1 uStack0000000000000040;
  undefined2 uStack0000000000000041;
  undefined8 in_stack_00000048;
  
  uStack0000000000000039 = (undefined7)in_RAX;
  uStack0000000000000040 = (undefined1)((ulong)in_RAX >> 0x38);
  uStack0000000000000041 = 0x6e;
  bStack0000000000000008 = (byte)&stack0x00000038;
  uStack0000000000000009 = (undefined7)((ulong)&stack0x00000038 >> 8);
  lVar1 = func_0x0d6c9580(unaff_RBX + 8,&stack0x00000038,&UNK_01563a4f,&stack0x00000008,
                          &stack0x00000020);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000008,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((in_stack_00000038 & 1) != 0) {
    func_0x0412a280(in_stack_00000048,
                    CONCAT71(uStack0000000000000039,in_stack_00000038) & 0xfffffffffffffffe);
  }
  bStack0000000000000008 = 0x16;
  uStack0000000000000009 = 0x6c6c61775f6e69;
  in_stack_00000010 = 0x7469625f;
  uStack0000000000000014 = 0;
  func_0x0d6bbef0();
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(in_stack_00000018,
                    CONCAT71(uStack0000000000000009,bStack0000000000000008) & 0xfffffffffffffffe);
  }
  in_stack_00000020 = 0x10;
  uStack0000000000000021 = 0x69625f6e65706f;
  in_stack_00000028 = 0x74;
  uStack0000000000000029 = 0;
  func_0x0d6bbef0();
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(in_stack_00000030,
                    CONCAT71(uStack0000000000000021,in_stack_00000020) & 0xfffffffffffffffe);
  }
  return;
}


