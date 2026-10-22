/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc964d20
 * Label: Dimension::vslot26
 * Body:  [[0c9649ec, 0c964c6e] [0c964c84, 0c964cb7] [0c964cc0, 0c964d1d] [0c964d20, 0c964d36]]
 * Ghidra: wg_Dimension__vslot26
 */


/* WARNING: Instruction at (ram,0x0c964d21) overlaps instruction at (ram,0x0c964d20)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0c964c04) */
/* WARNING: Removing unreachable block (ram,0x0c964c84) */
/* WARNING: Removing unreachable block (ram,0x0c964ca7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * wg_Dimension__vslot26(char *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  char in_AL;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong unaff_RBX;
  long unaff_RBP;
  long *unaff_R12;
  long unaff_R13;
  long unaff_R14;
  bool in_ZF;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  ulong in_stack_00000060;
  
  *param_1 = in_AL * in_AL;
  if (in_ZF) {
    func_0x0eec74c0();
    in_stack_00000060 = unaff_RBX | 1;
    func_0x0eee2f00();
    *(undefined1 *)(unaff_RBP + unaff_R13) = 0;
    (**(code **)(*unaff_R12 + 0x10))(&stack0x00000010);
    plVar4 = in_stack_00000038;
    if ((in_stack_00000060 & 1) != 0) {
      func_0x0412a280(unaff_RBP,in_stack_00000060 & 0xfffffffffffffffe);
    }
    if (in_stack_00000010 == 0) {
      *plVar4 = 0;
      plVar4[1] = 0;
    }
    else {
      if ((*(long *)(unaff_R14 + 0x18) == 0) &&
         (cVar5 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012e86ba),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      if ((**(char **)(unaff_R14 + 0x18) == '\0') &&
         (cVar5 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012e86ba),
         cVar5 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
      (**(code **)(**(long **)(unaff_R14 + 0x28) + 0x18))
                (*(long **)(unaff_R14 + 0x28),in_stack_00000010);
      plVar6 = in_stack_00000018;
      lVar2 = in_stack_00000010;
      lVar3 = *(long *)(unaff_R14 + 0x10);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000010 = 0;
      in_stack_00000018 = (long *)0x0;
      in_stack_00000060 = CONCAT62(in_stack_00000060._2_6_,in_stack_00000008._6_2_);
      *plVar4 = lVar2;
      plVar4[1] = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar6[2] = plVar6[2] + 1;
        UNLOCK();
      }
      func_0x0ca86920(lVar3 + 0x18,&stack0x00000060,&stack0x00000060,&stack0x00000028);
      plVar6 = in_stack_00000030;
      if (in_stack_00000030 != (long *)0x0) {
        LOCK();
        plVar8 = in_stack_00000030 + 1;
        lVar3 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*in_stack_00000030 + 0x10))(in_stack_00000030);
          func_0x0412c2d0(plVar6);
        }
      }
      plVar6 = (long *)func_0x0412c300(plVar4[1]);
      lVar3 = *plVar4;
      in_stack_00000060 = 0;
      in_stack_00000050 = lVar3;
      in_stack_00000058 = plVar6;
      cVar5 = func_0x0edf96c0(unaff_R14 + 0xa0,&stack0x00000060);
      if (cVar5 != '\0') {
        if (in_stack_00000060 == 0) {
          for (plVar8 = (long *)0x0; plVar8 != (long *)0x0; plVar8 = plVar8 + 2) {
            if ((plVar8[1] != 0) &&
               (plVar7 = (long *)func_0x0412c300(), in_stack_00000048 = plVar7,
               plVar7 != (long *)0x0)) {
              in_stack_00000040 = *plVar8;
              if (in_stack_00000040 != 0) {
                (**(code **)(*(long *)(in_stack_00000040 + 0x40) + 0x10))
                          (in_stack_00000040 + 0x40,lVar3);
              }
              LOCK();
              plVar1 = plVar7 + 1;
              lVar2 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar2 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                func_0x0412c2d0(plVar7);
              }
            }
          }
        }
        else {
          (**(code **)(*(long *)(in_stack_00000060 + 0x40) + 0x10))(in_stack_00000060 + 0x40,lVar3);
        }
      }
      (*_UNK_0f3e85a0)(&stack0x00000040,&stack0x00000080);
      LOCK();
      plVar8 = plVar6 + 1;
      lVar3 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        func_0x0412c2d0(plVar6);
      }
    }
    plVar6 = in_stack_00000018;
    if (in_stack_00000018 != (long *)0x0) {
      LOCK();
      plVar8 = in_stack_00000018 + 1;
      lVar3 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000018);
        func_0x0412c2d0(plVar6);
      }
    }
    return plVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


