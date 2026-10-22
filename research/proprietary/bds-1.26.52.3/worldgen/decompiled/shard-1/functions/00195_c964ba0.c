/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc964ba0
 * Label: Dimension::vslot7
 * Body:  [[0c964ba0, 0c964c3a] [0c964c42, 0c964c4f] [0c964c51, 0c964cb7] [0c964cc0, 0c964d27]]
 * Ghidra: wg_Dimension__vslot7
 */


void wg_Dimension__vslot7(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long *unaff_R15;
  long *in_stack_00000018;
  long in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  uint in_stack_00000280;
  
  cVar4 = func_0x0edf96c0(param_2);
  plVar1 = in_stack_00000078;
  if (cVar4 != '\0') {
    plVar6 = in_stack_00000070;
    if (in_stack_00000060 == 0) {
      for (; plVar6 != plVar1; plVar6 = plVar6 + 2) {
        if ((plVar6[1] != 0) &&
           (plVar5 = (long *)func_0x0412c300(), in_stack_00000048 = plVar5, plVar5 != (long *)0x0))
        {
          in_stack_00000040 = *plVar6;
          if (in_stack_00000040 != 0) {
            (**(code **)(*(long *)(in_stack_00000040 + 0x40) + 0x10))(in_stack_00000040 + 0x40);
          }
          LOCK();
          plVar2 = plVar5 + 1;
          lVar3 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            func_0x0412c2d0(plVar5);
          }
        }
      }
    }
    else {
      (**(code **)(*(long *)(in_stack_00000060 + 0x40) + 0x10))(in_stack_00000060 + 0x40);
    }
  }
  if ((ulong)in_stack_00000280 != 0xffffffff) {
    (**(code **)(&UNK_0f3e85a0 + (ulong)in_stack_00000280 * 8))(&stack0x00000040,&stack0x00000080);
  }
  plVar1 = in_stack_00000068;
  if (in_stack_00000068 != (long *)0x0) {
    LOCK();
    plVar6 = in_stack_00000068 + 1;
    lVar3 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_00000068 + 0x10))(in_stack_00000068);
      func_0x0412c2d0(plVar1);
      LOCK();
      plVar1 = unaff_R15 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      goto joined_r0x0c964c26;
    }
  }
  LOCK();
  plVar1 = unaff_R15 + 1;
  lVar3 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
joined_r0x0c964c26:
  if (lVar3 == 0) {
    (**(code **)(*unaff_R15 + 0x10))();
    func_0x0412c2d0();
  }
  if (in_stack_00000018 != (long *)0x0) {
    LOCK();
    plVar1 = in_stack_00000018 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
      func_0x0412c2d0(in_stack_00000018);
    }
  }
  return;
}


