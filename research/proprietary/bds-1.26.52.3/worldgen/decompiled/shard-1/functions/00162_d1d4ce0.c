/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d4ce0
 * Label: br::worldgen::StructureHeightProvider::vslot2
 * Body:  [[0d1d4ce0, 0d1d4e6b]]
 * Ghidra: wg_br__worldgen__StructureHeightProvider__vslot2
 */


/* WARNING: Removing unreachable block (ram,0x0d1d4e23) */
/* WARNING: Removing unreachable block (ram,0x0d1d4e34) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void wg_br__worldgen__StructureHeightProvider__vslot2
               (undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *in_RAX;
  long lVar6;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  byte bStack0000000000000030;
  undefined7 uStack0000000000000031;
  undefined8 in_stack_00000040;
  undefined *in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000070;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  if ((*param_3 & 1) == 0) {
    in_stack_00000020 = *(undefined8 *)(param_3 + 0x10);
    _uStack0000000000000010 = *(undefined8 *)param_3;
    _uStack0000000000000018 = *(undefined8 *)(param_3 + 8);
  }
  else {
    func_0x0412e5e0(&stack0x00000010,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  in_stack_00000070 = (undefined8 *)&stack0x00000030;
  lVar6 = func_0x0d6c9580();
  if ((ulong)*(uint *)(lVar6 + 0x60) != 0xffffffff) {
    (**(code **)(&UNK_0f47e8c0 + (ulong)*(uint *)(lVar6 + 0x60) * 8))(&stack0x00000070,lVar6 + 0x38)
    ;
  }
  uVar5 = in_stack_00000020;
  uVar1 = uStack0000000000000010;
  uVar2 = uStack0000000000000014;
  uVar3 = uStack0000000000000018;
  uVar4 = uStack000000000000001c;
  _uStack0000000000000010 = 0;
  _uStack0000000000000018 = 0;
  in_stack_00000020 = 0;
  *(undefined **)(lVar6 + 0x38) = &UNK_0f47e5e8;
  *(undefined4 *)(lVar6 + 0x40) = uVar1;
  *(undefined4 *)(lVar6 + 0x44) = uVar2;
  *(undefined4 *)(lVar6 + 0x48) = uVar3;
  *(undefined4 *)(lVar6 + 0x4c) = uVar4;
  *(undefined8 *)(lVar6 + 0x50) = uVar5;
  *(undefined4 *)(lVar6 + 0x60) = 8;
  if ((bStack0000000000000030 & 1) != 0) {
    func_0x0412a280(in_stack_00000040,
                    CONCAT71(uStack0000000000000031,bStack0000000000000030) & 0xfffffffffffffffe);
  }
  func_0x0d1d4f00();
  in_stack_00000070 = (undefined8 *)&UNK_0f459b88;
  func_0x0d1d2dc0();
  (**(code **)((long)in_stack_00000070 + 0x20))();
  in_stack_00000050 = &UNK_0f47e0b0;
  func_0x0d6c9500(&stack0x00000058,in_stack_00000060);
  return;
}


