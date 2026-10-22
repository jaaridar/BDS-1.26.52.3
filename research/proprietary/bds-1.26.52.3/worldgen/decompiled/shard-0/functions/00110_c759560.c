/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc759560
 * Label: string:minecraft:azalea_tree_feature
 * Body:  [[0c759560, 0c75961e]]
 * Ghidra: FUN_0c759560
 */


/* WARNING: Instruction at (ram,0x0c75956a) overlaps instruction at (ram,0x0c759567)
    */

void FUN_0c759560(undefined8 param_1)

{
  long lVar1;
  byte bStack0000000000000010;
  undefined5 uStack0000000000000011;
  undefined2 uStack0000000000000016;
  undefined1 in_stack_00000018;
  undefined5 uStack0000000000000019;
  undefined1 uStack000000000000001e;
  undefined8 in_stack_00000020;
  byte bStack0000000000000028;
  undefined7 uStack0000000000000029;
  undefined8 in_stack_00000038;
  
  bStack0000000000000010 = (byte)&stack0x00000028;
  uStack0000000000000011 = (undefined5)((ulong)&stack0x00000028 >> 8);
  uStack0000000000000016 = (undefined2)((ulong)&stack0x00000028 >> 0x30);
  lVar1 = func_0x0d6c9580(param_1,&stack0x00000028,&UNK_01563a4f,&stack0x00000010,&stack0x0000000f);
  if ((ulong)*(uint *)(lVar1 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar1 + 0x60) * 8))(&stack0x00000010,lVar1 + 0x38)
    ;
  }
  *(undefined **)(lVar1 + 0x38) = &UNK_0f47e2e0;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x60) = 3;
  if ((bStack0000000000000028 & 1) != 0) {
    func_0x0412a280(in_stack_00000038,
                    CONCAT71(uStack0000000000000029,bStack0000000000000028) & 0xfffffffffffffffe);
  }
  bStack0000000000000010 = 0x1a;
  uStack0000000000000011 = 0x6767697274;
  uStack0000000000000016 = 0x7265;
  in_stack_00000018 = 0x65;
  uStack0000000000000019 = 0x7469625f64;
  uStack000000000000001e = 0;
  func_0x0d6bbef0();
  if ((bStack0000000000000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,
                    CONCAT26(uStack0000000000000016,
                             CONCAT51(uStack0000000000000011,bStack0000000000000010)) &
                    0xfffffffffffffffe);
  }
  return;
}


