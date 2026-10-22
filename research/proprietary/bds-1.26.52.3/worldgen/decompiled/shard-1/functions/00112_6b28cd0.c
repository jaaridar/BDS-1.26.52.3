/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6b28cd0
 * Label: string:ZN6Editor12ScriptModule19ScriptJigsawServiceC1EPNS_8Services
 * Body:  [[06b28cd0, 06b28d6b]]
 * Ghidra: FUN_06b28cd0
 */


/* WARNING: Instruction at (ram,0x06b28cf6) overlaps instruction at (ram,0x06b28cf1)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06b28cd0(undefined8 param_1)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long in_RAX;
  undefined8 uVar5;
  char in_CL;
  undefined8 *unaff_RBX;
  long *unaff_R14;
  char in_CF;
  char in_SF;
  char in_OF;
  undefined8 in_MM0;
  long *in_XMM0_Qb;
  long *in_stack_00000018;
  
  if (in_OF == in_SF) {
    pcVar1 = (char *)(in_RAX + -0x73);
    *pcVar1 = *pcVar1 + in_CL + in_CF;
    plVar2 = _DAT_0f54fd98;
    if (*pcVar1 != '\0') {
      psubsb(in_MM0,*unaff_RBX);
      in_stack_00000018 = (long *)0x0;
      unaff_R14 = _DAT_0f54fd98;
      _DAT_0f54fd90 = param_1;
      _DAT_0f54fd98 = in_XMM0_Qb;
    }
    if (*pcVar1 != '\0' && plVar2 != (long *)0x0) {
      LOCK();
      plVar2 = unaff_R14 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*unaff_R14 + 0x10))(unaff_R14);
        func_0x0412c2d0(unaff_R14);
      }
    }
    if (in_stack_00000018 != (long *)0x0) {
      LOCK();
      plVar2 = in_stack_00000018 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
        func_0x0412c2d0(in_stack_00000018);
      }
    }
    uVar4 = _DAT_0f54fd90;
    uVar5 = func_0x06157820(_DAT_0f54fd90);
    unaff_RBX[3] = uVar5;
    unaff_RBX[4] = uVar4;
    return;
  }
  uRamc7482374f6854d08 = (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


