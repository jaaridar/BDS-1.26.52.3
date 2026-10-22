/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1c4580
 * Label: br::worldgen::processors::JigsawReplacement::vslot0
 * Body:  [[0d1c4580, 0d1c458f]]
 * Ghidra: wg_br__worldgen__processors__JigsawReplacement__vslot0
 */


/* WARNING: Removing unreachable block (ram,0x0d1c463f) */
/* WARNING: Removing unreachable block (ram,0x0d1c479d) */

void wg_br__worldgen__processors__JigsawReplacement__vslot0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *unaff_RBX;
  long *in_stack_00000010;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_000000a8;
  ulong in_stack_000000c0;
  undefined8 in_stack_000000d0;
  ulong in_stack_000000e8;
  undefined8 in_stack_000000f8;
  ulong in_stack_00000110;
  undefined8 in_stack_00000120;
  ulong in_stack_00000130;
  undefined8 in_stack_00000140;
  ulong in_stack_00000150;
  undefined8 in_stack_00000160;
  byte in_stack_00000170;
  
  func_0x0412a280(in_stack_000000a8,param_2 & 0xfffffffffffffffe);
  uStack000000000000004c = in_stack_000000e8._4_4_;
  func_0x0c9f6080();
  if ((in_stack_000000e8 & 1) != 0) {
    func_0x0412a280(in_stack_000000f8,
                    CONCAT44(uStack000000000000004c,(int)in_stack_000000e8) & 0xfffffffffffffffe);
  }
  if ((in_stack_000000c0 & 1) != 0) {
    func_0x0412a280(in_stack_000000d0,in_stack_000000c0 & 0xfffffffffffffffe);
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


