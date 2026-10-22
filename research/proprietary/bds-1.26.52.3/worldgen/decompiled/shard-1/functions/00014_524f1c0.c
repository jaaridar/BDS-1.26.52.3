/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x524f1c0
 * Label: ClimateBiomeComponentGlue::vslot2
 * Body:  [[0524f1c0, 0524f220]]
 * Ghidra: wg_ClimateBiomeComponentGlue__vslot2
 */


void wg_ClimateBiomeComponentGlue__vslot2(void)

{
  long *plVar1;
  long lVar2;
  long in_RAX;
  long *unaff_RBX;
  long *in_stack_00000028;
  
  LOCK();
  plVar1 = unaff_RBX + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + in_RAX;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*unaff_RBX + 0x10))();
    func_0x0412c2d0();
  }
  if (in_stack_00000028 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000028 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*in_stack_00000028 + 0x10))(in_stack_00000028);
      func_0x0412c2d0(in_stack_00000028);
    }
  }
  return;
}



/* ---- assembly ---- */
/* 0524f1c0 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0524f1c6 */  TEST RAX,RAX
/* 0524f1c9 */  JNZ 0x0524f1dc
/* 0524f1cb */  MOV RAX,qword ptr [RBX]
/* 0524f1ce */  MOV RDI,RBX
/* 0524f1d1 */  CALL qword ptr [RAX + 0x10]
/* 0524f1d4 */  MOV RDI,RBX
/* 0524f1d7 */  CALL 0x0412c2d0
/* 0524f1dc */  MOV RBX,qword ptr [RSP + 0x28]
/* 0524f1e1 */  MOV qword ptr [RSP + 0x30],0x0
/* 0524f1ea */  TEST RBX,RBX
/* 0524f1ed */  JZ 0x0524f212
/* 0524f1ef */  MOV RAX,-0x1
/* 0524f1f6 */  XADD.LOCK qword ptr [RBX + 0x8],RAX
/* 0524f1fc */  TEST RAX,RAX
/* 0524f1ff */  JNZ 0x0524f212
/* 0524f201 */  MOV RAX,qword ptr [RBX]
/* 0524f204 */  MOV RDI,RBX
/* 0524f207 */  CALL qword ptr [RAX + 0x10]
/* 0524f20a */  MOV RDI,RBX
/* 0524f20d */  CALL 0x0412c2d0
/* 0524f212 */  ADD RSP,0x38
/* 0524f216 */  POP RBX
/* 0524f217 */  POP R12
/* 0524f219 */  POP R13
/* 0524f21b */  POP R14
/* 0524f21d */  POP R15
/* 0524f21f */  POP RBP
/* 0524f220 */  RET
