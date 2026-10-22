/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x47aea50
 * Label: callee-of:0xe3ddaa0
 * Body:  [[047aea50, 047aeb0f] [047aeb13, 047af066]]
 * Ghidra: FUN_047aea50
 */


long FUN_047aea50(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 unaff_RBP;
  uint uVar6;
  long unaff_R12;
  uint unaff_R13D;
  long unaff_R14;
  long unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  
  do {
    unaff_R13D = unaff_R13D + 1;
    iVar1 = func_0x04771600();
  } while (iVar1 == 0);
  if (unaff_R13D == 2) {
    iVar1 = func_0x04775df0(unaff_retaddr);
    if ((iVar1 != 0) && (iVar1 = func_0x047795d0(in_stack_00000020), iVar1 != 0)) {
      *(undefined4 *)(in_stack_00000020 + 0x10) = 0;
      iVar1 = func_0x04794960(in_stack_00000018,unaff_retaddr,in_stack_00000020);
      if ((iVar1 != 0) &&
         ((((iVar1 = func_0x04775d30(in_stack_00000010,in_stack_00000018), iVar1 != 0 &&
            (iVar1 = func_0x04775c60(unaff_retaddr,unaff_retaddr,in_stack_00000010), iVar1 != 0)) &&
           (iVar1 = func_0x0477a1b0(unaff_retaddr,1), iVar1 != 0)) &&
          ((iVar1 = func_0x04775c60(in_stack_00000008), iVar1 != 0 &&
           (iVar1 = func_0x04775c60(in_stack_00000008,in_stack_00000008,unaff_retaddr), iVar1 != 0))
          )))) {
        lVar4 = func_0x04770b70();
joined_r0x047aec2f:
        if (lVar4 != 0) goto LAB_047aeac4;
      }
    }
  }
  else if (unaff_R13D == 1) {
    iVar1 = func_0x047795d0(in_stack_00000020);
    if (iVar1 != 0) {
      *(undefined4 *)(in_stack_00000020 + 0x10) = 0;
      iVar1 = func_0x0477a0c0(in_stack_00000020,1);
      if ((iVar1 != 0) && (iVar1 = func_0x04794960(), iVar1 != 0)) {
LAB_047aeac4:
        iVar1 = func_0x04775d30(in_stack_00000008);
        if (iVar1 != 0) {
          iVar1 = func_0x04771470(in_stack_00000008,unaff_RBP);
          if (iVar1 == 0) goto LAB_047aeb23;
          func_0x047c6f20(3,0x79,0x6f,&UNK_0123b9d0,0x15f);
        }
      }
    }
  }
  else {
    lVar4 = func_0x04770b70(in_stack_00000020);
    if (lVar4 != 0) {
      *(undefined4 *)(in_stack_00000020 + 0x10) = 0;
      uVar6 = 2;
      do {
        if (uVar6 < 0x16) {
LAB_047aecea:
          iVar1 = func_0x04770ca0(in_stack_00000010,uVar6);
          if (iVar1 == 0) goto LAB_047aeb13;
        }
        else {
          uVar2 = func_0x047705b0();
          iVar1 = func_0x04778a70(in_stack_00000010,uVar2,0,0);
          if (iVar1 == 0) goto LAB_047aeb13;
          iVar1 = func_0x04771420(in_stack_00000010);
          if (-1 < iVar1) {
            pcVar5 = (code *)&SUB_047765e0;
            if (*(int *)(unaff_R12 + 0x10) == 0) {
              pcVar5 = (code *)&SUB_047769b0;
            }
            iVar1 = (*pcVar5)(in_stack_00000010,in_stack_00000010);
            if (iVar1 == 0) goto LAB_047aeb13;
          }
          iVar1 = func_0x04770740(in_stack_00000010);
          if (iVar1 != 0) goto LAB_047aecea;
        }
        iVar1 = func_0x047af070(in_stack_00000010,in_stack_00000020);
        if (iVar1 < -1) goto LAB_047aeb13;
        if (iVar1 != 1) {
          if (iVar1 == -1) {
            iVar1 = func_0x047795d0(in_stack_00000020,in_stack_00000020,unaff_R13D);
            if ((iVar1 == 0) ||
               (iVar1 = func_0x04794960(in_stack_00000010,in_stack_00000010,in_stack_00000020),
               iVar1 == 0)) goto LAB_047aeb13;
            iVar1 = func_0x047719e0(in_stack_00000010);
            if (iVar1 != 0) {
              func_0x047c6f20(3,0x79,0x70,&UNK_0123b9d0,0xe4);
              goto LAB_047aeb13;
            }
            iVar1 = func_0x04778f70(unaff_retaddr,in_stack_00000020);
            if (iVar1 == 0) goto LAB_047aeb13;
            iVar1 = func_0x04770740(unaff_retaddr);
            if (iVar1 == 0) {
              iVar1 = func_0x04794960(in_stack_00000008,unaff_RBP,unaff_retaddr);
              if (iVar1 == 0) goto LAB_047aeb13;
              iVar1 = func_0x04770740(in_stack_00000008);
              if (iVar1 != 0) goto LAB_047aee7b;
            }
            else {
              iVar1 = func_0x04775650(unaff_retaddr,unaff_RBP);
              if (iVar1 == 0) goto LAB_047aeb13;
              iVar1 = func_0x04770740(unaff_retaddr);
              if (iVar1 != 0) {
LAB_047aee7b:
                func_0x04770ca0();
                goto LAB_047aeb23;
              }
              iVar1 = func_0x04770ca0(in_stack_00000008,1);
              if (iVar1 == 0) goto LAB_047aeb13;
            }
            iVar1 = func_0x04775d30(in_stack_00000018,in_stack_00000008);
            if ((iVar1 == 0) ||
               (iVar1 = func_0x04775c60(in_stack_00000018,in_stack_00000018,unaff_RBP), iVar1 == 0))
            goto LAB_047aeb13;
            iVar1 = func_0x04775c60(in_stack_00000008,in_stack_00000008,unaff_RBP);
            goto joined_r0x047aeee1;
          }
          if (iVar1 == 0) {
            func_0x047c6f20(3,0x79,0x70,&UNK_0123b9d0,0xc9);
            goto LAB_047aeb13;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x52);
      func_0x047c6f20(3,0x79,0x71,&UNK_0123b9d0,0xd5);
    }
  }
LAB_047aeb13:
  if (unaff_R15 != unaff_R14) {
    func_0x04770750();
  }
  unaff_R15 = 0;
LAB_047aeb23:
  func_0x047729b0();
  return unaff_R15;
joined_r0x047aeee1:
  if (iVar1 == 0) goto LAB_047aeb13;
  iVar1 = func_0x047719e0(in_stack_00000018);
  if (iVar1 != 0) {
    lVar4 = func_0x04770b70();
    goto joined_r0x047aec2f;
  }
  if (unaff_R13D < 2) {
LAB_047af021:
    func_0x047c6f20(3,0x79,0x6f,&UNK_0123b9d0,0x140);
    goto LAB_047aeb13;
  }
  iVar1 = func_0x04775d30(unaff_retaddr,in_stack_00000018);
  if (iVar1 == 0) goto LAB_047aeb13;
  iVar1 = func_0x047719e0(unaff_retaddr);
  uVar6 = 1;
  if (iVar1 == 0) {
    if (unaff_R13D == 2) goto LAB_047af021;
    uVar6 = 2;
    while( true ) {
      iVar1 = func_0x04775c60(unaff_retaddr,unaff_retaddr,unaff_retaddr);
      if (iVar1 == 0) goto LAB_047aeb13;
      iVar1 = func_0x047719e0(unaff_retaddr);
      if (iVar1 != 0) break;
      uVar6 = uVar6 + 1;
      if (unaff_R13D == uVar6) goto LAB_047af021;
    }
  }
  lVar4 = func_0x04770b70(unaff_retaddr,in_stack_00000010);
  if (lVar4 == 0) goto LAB_047aeb13;
  iVar1 = ~uVar6 + unaff_R13D;
  if (iVar1 != 0 && SCARRY4(~uVar6,unaff_R13D) == iVar1 < 0) {
    iVar1 = unaff_R13D - uVar6;
    do {
      iVar3 = func_0x04775d30(unaff_retaddr,unaff_retaddr);
      if (iVar3 == 0) goto LAB_047aeb13;
      iVar1 = iVar1 + -1;
    } while (1 < iVar1);
  }
  iVar1 = func_0x04775c60(in_stack_00000010,unaff_retaddr);
  if ((iVar1 == 0) ||
     (iVar1 = func_0x04775c60(in_stack_00000008,in_stack_00000008,unaff_retaddr), iVar1 == 0))
  goto LAB_047aeb13;
  iVar1 = func_0x04775c60(in_stack_00000018,in_stack_00000018,in_stack_00000010);
  unaff_R13D = uVar6;
  goto joined_r0x047aeee1;
}


