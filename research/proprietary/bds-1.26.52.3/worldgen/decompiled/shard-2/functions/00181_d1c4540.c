/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1c4540
 * Label: br::worldgen::processors::ProtectedBlock::vslot1
 * Body:  [[0d1c4540, 0d1c47c8]]
 * Ghidra: wg_br__worldgen__processors__ProtectedBlock__vslot1
 */


/* WARNING: Removing unreachable block (ram,0x0d1c463f) */
/* WARNING: Removing unreachable block (ram,0x0d1c479d) */

void wg_br__worldgen__processors__ProtectedBlock__vslot1(void)

{
  long *plVar1;
  long lVar2;
  undefined8 in_RAX;
  char *pcVar3;
  char in_CL;
  long *unaff_RBX;
  long *in_stack_00000008;
  undefined4 uStack0000000000000044;
  ulong in_stack_00000068;
  undefined8 in_stack_00000078;
  ulong in_stack_00000090;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000f0;
  ulong in_stack_00000108;
  undefined8 in_stack_00000118;
  ulong in_stack_00000128;
  undefined8 in_stack_00000138;
  ulong in_stack_00000148;
  undefined8 in_stack_00000158;
  byte in_stack_00000168;
  
  pcVar3 = (char *)CONCAT62((int6)((ulong)in_RAX >> 0x10),CONCAT11(0x24,(char)in_RAX));
  *pcVar3 = *pcVar3 + (char)in_RAX;
  pcVar3[-0x73] = pcVar3[-0x73] + in_CL;
  func_0x0c9f5b10();
  if ((in_stack_00000068 & 1) != 0) {
    func_0x0412a280(in_stack_00000078,in_stack_00000068 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000090 & 1) != 0) {
    func_0x0412a280(in_stack_000000a0,in_stack_00000090 & 0xfffffffffffffffe);
  }
  uStack0000000000000044 = in_stack_000000e0._4_4_;
  func_0x0c9f6080();
  if ((in_stack_000000e0 & 1) != 0) {
    func_0x0412a280(in_stack_000000f0,
                    CONCAT44(uStack0000000000000044,(int)in_stack_000000e0) & 0xfffffffffffffffe);
  }
  if ((in_stack_000000b8 & 1) != 0) {
    func_0x0412a280(in_stack_000000c8,in_stack_000000b8 & 0xfffffffffffffffe);
  }
  if ((in_stack_00000168 & 1) != 0) {
    if ((in_stack_00000148 & 1) != 0) {
      func_0x0412a280(in_stack_00000158,in_stack_00000148 & 0xfffffffffffffffe);
    }
    if ((in_stack_00000128 & 1) != 0) {
      func_0x0412a280(in_stack_00000138,in_stack_00000128 & 0xfffffffffffffffe);
    }
    if ((in_stack_00000108 & 1) != 0) {
      func_0x0412a280(in_stack_00000118,in_stack_00000108 & 0xfffffffffffffffe);
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
  if (in_stack_00000008 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000008 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000008 + 0x10))(in_stack_00000008);
      func_0x0412c2d0(in_stack_00000008);
    }
  }
  return;
}


