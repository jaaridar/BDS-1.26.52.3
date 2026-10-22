/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1c4590
 * Label: br::worldgen::StructureProcessor::vslot1
 * Body:  [[0d1c4590, 0d1c459f] [0d1c45a1, 0d1c47c8]]
 * Ghidra: wg_br__worldgen__StructureProcessor__vslot1
 */


/* WARNING: Removing unreachable block (ram,0x0d1c463f) */
/* WARNING: Removing unreachable block (ram,0x0d1c479d) */

void wg_br__worldgen__StructureProcessor__vslot1(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_RBX;
  long *in_stack_00000010;
  undefined8 uStack0000000000000018;
  ulong uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  uint uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_000000b8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000110;
  undefined8 in_stack_00000120;
  ulong in_stack_00000130;
  undefined8 in_stack_00000140;
  ulong in_stack_00000150;
  undefined8 in_stack_00000160;
  byte in_stack_00000170;
  
  uStack0000000000000038 = 0;
  uStack0000000000000020 = in_stack_000000c0;
  uStack0000000000000028 = in_stack_000000c8;
  uStack0000000000000030 = in_stack_000000d0;
  uStack0000000000000018 = in_stack_000000b8;
  uStack0000000000000060 = 0;
  uStack0000000000000048 = (uint)in_stack_000000e8;
  uStack000000000000004c = in_stack_000000e8._4_4_;
  uStack0000000000000050 = in_stack_000000f0;
  uStack0000000000000058 = in_stack_000000f8;
  uStack0000000000000040 = in_stack_000000e0;
  func_0x0c9f6080();
  if ((uStack0000000000000048 & 1) != 0) {
    func_0x0412a280(uStack0000000000000058,
                    CONCAT44(uStack000000000000004c,uStack0000000000000048) & 0xfffffffffffffffe);
  }
  if ((uStack0000000000000020 & 1) != 0) {
    func_0x0412a280(uStack0000000000000030,uStack0000000000000020 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000170 & 1) != 0) {
    if ((in_stack_00000150 & 1) != 0) {
      func_0x0412a280(in_stack_00000160,in_stack_00000150 & 0xfffffffffffffffe);
    }
    if ((in_stack_00000130 & 1) != 0) {
      func_0x0412a280(in_stack_00000140,in_stack_00000130 & 0xfffffffffffffffe);
    }
    if ((in_stack_00000110 & 1) != 0) {
      func_0x0412a280(in_stack_00000120,in_stack_00000110 & 0xfffffffffffffffe);
    }
  }
  if (unaff_RBX != (long *)0x0) {
    LOCK();
    plVar1 = unaff_RBX + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*unaff_RBX + 0x10))();
      func_0x0412c2d0();
    }
  }
  if (in_stack_00000010 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000010 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000010 + 0x10))(in_stack_00000010);
      func_0x0412c2d0(in_stack_00000010);
    }
  }
  return;
}


