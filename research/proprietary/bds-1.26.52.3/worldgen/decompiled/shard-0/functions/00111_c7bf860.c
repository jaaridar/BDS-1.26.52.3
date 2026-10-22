/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc7bf860
 * Label: string:world_gen
 * Body:  [[0c7bf860, 0c7bf974] [0c7c0623, 0c7c0648]]
 * Ghidra: FUN_0c7bf860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c7bf860(void)

{
  undefined1 auVar1 [16];
  undefined8 in_RAX;
  long lVar2;
  long unaff_RBX;
  byte bStack0000000000000008;
  undefined4 uStack0000000000000009;
  undefined3 uStack000000000000000d;
  undefined1 uStack0000000000000010;
  undefined4 uStack0000000000000011;
  undefined3 uStack0000000000000015;
  undefined1 uStack0000000000000018;
  undefined4 uStack0000000000000019;
  undefined3 uStack000000000000001d;
  byte in_stack_00000020;
  undefined7 uStack0000000000000021;
  undefined1 uStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined1 uStack0000000000000030;
  undefined7 uStack0000000000000031;
  byte in_stack_00000038;
  undefined7 uStack0000000000000039;
  undefined1 in_stack_00000040;
  undefined1 uStack0000000000000041;
  undefined8 in_stack_00000048;
  
  auVar1 = _bStack0000000000000008;
  uStack0000000000000021 = (undefined7)in_RAX;
  uStack0000000000000028 = 0x69;
  uStack0000000000000029 = 0x6e6f6974636572;
  uStack0000000000000030 = 0;
  bStack0000000000000008 = (byte)&stack0x00000020;
  uStack0000000000000009 = (undefined4)((ulong)&stack0x00000020 >> 8);
  uStack0000000000000010 = auVar1[8];
  uStack000000000000000d = (undefined3)((ulong)&stack0x00000020 >> 0x28);
  lVar2 = func_0x0d6c9580(unaff_RBX + 8,&stack0x00000020,&UNK_01563a4f,&stack0x00000008,
                          &stack0x00000038);
  if ((ulong)*(uint *)(lVar2 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar2 + 0x60) * 8))(&stack0x00000008,lVar2 + 0x38)
    ;
  }
  *(undefined **)(lVar2 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar2 + 0x40) = 3;
  *(undefined4 *)(lVar2 + 0x60) = 3;
  if ((in_stack_00000020 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack0000000000000031,uStack0000000000000030),
                    CONCAT71(uStack0000000000000021,in_stack_00000020) & 0xfffffffffffffffe);
  }
  bStack0000000000000008 = 0x26;
  uStack0000000000000009 = _DAT_013a2120;
  _uStack000000000000000d = _UNK_013a2124;
  uStack0000000000000011 = _UNK_013a2128;
  uStack0000000000000015 = (undefined3)_UNK_013a212c;
  uStack0000000000000018 = 0x5f;
  uStack0000000000000019 = 0x746962;
  func_0x0d6bbef0();
  if ((bStack0000000000000008 & 1) != 0) {
    func_0x0412a280(CONCAT35(uStack000000000000001d,
                             CONCAT41(uStack0000000000000019,uStack0000000000000018)),
                    CONCAT35(uStack000000000000000d,
                             CONCAT41(uStack0000000000000009,bStack0000000000000008)) &
                    0xfffffffffffffffe);
  }
  in_stack_00000038 = 0x10;
  uStack0000000000000039 = 0x69625f64616564;
  in_stack_00000040 = 0x74;
  uStack0000000000000041 = 0;
  func_0x0d6bbef0();
  if ((in_stack_00000038 & 1) != 0) {
    func_0x0412a280(in_stack_00000048,
                    CONCAT71(uStack0000000000000039,in_stack_00000038) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x13a2120  coral_hang_type_bit
 */
