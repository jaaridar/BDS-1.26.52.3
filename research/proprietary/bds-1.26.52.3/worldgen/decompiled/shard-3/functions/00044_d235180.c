/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd235180
 * Label: string:Index out of jigsaw block metadata range
 * Body:  [[0d234f0b, 0d234f12] [0d234fa5, 0d235050] [0d235060, 0d2350aa] [0d2350e9, 0d235111] [0d235180, 0d235287] [0d2353b5, 0d23549d] [0d2354a0, 0d23550f] [0d23553f, 0d23554d] [0d23556c, 0d2355b4] [0d2355c7, 0d235636]]
 * Ghidra: FUN_0d235180
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0d235180(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong in_RAX;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong in_RCX;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_RBX;
  ulong unaff_RBP;
  ulong uVar9;
  long *plVar10;
  long *unaff_R12;
  ulong unaff_R13;
  ulong unaff_R14;
  long *unaff_R15;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_000000c0;
  
  uVar7 = (in_RAX >> 2 & in_RCX) + (in_RAX & in_RCX);
  if ((byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) < 2) {
    if (1 < unaff_R13) {
      lVar6 = 0x3f;
      if (unaff_R13 - 1 != 0) {
        for (; unaff_R13 - 1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      unaff_R13 = 1L << (-((byte)lVar6 ^ 0x3f) & 0x3f);
    }
    if (unaff_R13 < unaff_RBP) {
      unaff_R13 = unaff_RBP;
    }
  }
  else {
    unaff_R13 = func_0x0412c3f0();
    if (unaff_R13 < unaff_RBP) {
      unaff_R13 = unaff_RBP;
    }
  }
  if (unaff_R13 < unaff_RBX) {
    if (unaff_R13 == 0) {
      lVar6 = *unaff_R15;
      *unaff_R15 = 0;
      if (lVar6 != 0) {
        func_0x0412a280(lVar6,*(long *)(in_stack_00000028 + 0xc0) << 3);
      }
      *(undefined8 *)(in_stack_00000028 + 0xc0) = 0;
    }
    else {
      if (unaff_R13 >> 0x3d != 0) {
        func_0x04882eb0();
        uVar4 = func_0x04882eb0();
        uVar4 = func_0x04882e20(uVar4);
        uVar4 = func_0x04882e20(uVar4);
        uVar4 = func_0x04882e20(uVar4);
        uVar4 = func_0x04882e20(uVar4);
        uVar4 = func_0x04882e20(uVar4);
        plVar5 = (long *)func_0x04882e20(uVar4);
        func_0x0d266e90(&stack0x00000040);
        if ((in_stack_00000010 & 1) != 0) {
          func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
          uVar4 = func_0x0eee2d70(plVar5);
          plVar5 = (long *)func_0x04882e20(uVar4);
          lVar6 = 0x20;
          plVar10 = in_stack_000000c0;
          if ((in_stack_000000c0 == (long *)&stack0x000000a0) ||
             (lVar6 = 0x28, in_stack_000000c0 != (long *)0x0)) goto LAB_0d235620;
        }
        plVar10 = plVar5;
        lVar6 = func_0x0eee2d70();
LAB_0d235620:
        (**(code **)(*plVar10 + lVar6))();
        uVar4 = func_0x0eee2d70(plVar5);
        func_0x04882e20(uVar4);
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      lVar6 = unaff_R13 * 8;
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar6);
      if (lVar3 == 0) {
        func_0x0eec74c0(lVar6,0);
      }
      lVar1 = *unaff_R15;
      *unaff_R15 = lVar3;
      if (lVar1 != 0) {
        func_0x0412a280(lVar1,*(long *)(in_stack_00000028 + 0xc0) << 3);
        lVar3 = *(long *)(in_stack_00000028 + 0xb8);
      }
      *(ulong *)(in_stack_00000028 + 0xc0) = unaff_R13;
      func_0x0eee2dd0(lVar3,0,lVar6);
      plVar5 = *(long **)(in_stack_00000028 + 200);
      unaff_R15 = in_stack_00000030;
      if (plVar5 != (long *)0x0) {
        uVar8 = plVar5[1];
        uVar7 = unaff_R13 - 1;
        if ((unaff_R13 & uVar7) == 0) {
          *(long *)(lVar3 + (uVar8 & uVar7) * 8) = in_stack_00000028 + 200;
          uVar8 = uVar8 & uVar7;
          while (plVar10 = plVar5, plVar5 = (long *)*plVar10, plVar5 != (long *)0x0) {
            uVar9 = plVar5[1] & uVar7;
            if (uVar9 != uVar8) {
              if (*(long *)(lVar3 + uVar9 * 8) == 0) {
                *(long **)(lVar3 + uVar9 * 8) = plVar10;
                uVar8 = uVar9;
              }
              else {
                *plVar10 = *plVar5;
                *plVar5 = **(undefined8 **)(lVar3 + uVar9 * 8);
                **(long **)(lVar3 + uVar9 * 8) = (long)plVar5;
                plVar5 = plVar10;
              }
            }
          }
        }
        else {
          if (unaff_R13 <= uVar8) {
            if ((uVar8 | unaff_R13) >> 0x20 == 0) {
              uVar8 = (uVar8 & 0xffffffff) % (unaff_R13 & 0xffffffff);
            }
            else {
              uVar8 = uVar8 % unaff_R13;
            }
          }
          *(long *)(lVar3 + uVar8 * 8) = in_stack_00000028 + 200;
          plVar10 = (long *)*plVar5;
          while (plVar10 != (long *)0x0) {
            uVar7 = plVar10[1];
            if (unaff_R13 <= uVar7) {
              if ((uVar7 | unaff_R13) >> 0x20 == 0) {
                uVar7 = (uVar7 & 0xffffffff) % (unaff_R13 & 0xffffffff);
              }
              else {
                uVar7 = uVar7 % unaff_R13;
              }
            }
            if (uVar7 != uVar8) {
              if (*(long *)(lVar3 + uVar7 * 8) == 0) {
                *(long **)(lVar3 + uVar7 * 8) = plVar5;
                uVar8 = uVar7;
              }
              else {
                *plVar5 = *plVar10;
                *plVar10 = **(long **)(lVar3 + uVar7 * 8);
                **(undefined8 **)(lVar3 + uVar7 * 8) = plVar10;
                plVar10 = plVar5;
              }
            }
            plVar5 = plVar10;
            plVar10 = (long *)*plVar5;
          }
        }
      }
    }
  }
  uVar7 = *(ulong *)(in_stack_00000028 + 0xc0);
  if ((uVar7 & uVar7 - 1) == 0) {
    in_stack_00000008 = in_stack_00000008 & uVar7 - 1;
  }
  else if (uVar7 <= in_stack_00000008) {
    if ((in_stack_00000008 | uVar7) >> 0x20 == 0) {
      in_stack_00000008 = (in_stack_00000008 & 0xffffffff) % (uVar7 & 0xffffffff);
    }
    else {
      in_stack_00000008 = in_stack_00000008 % uVar7;
    }
  }
  lVar6 = *unaff_R15;
  plVar5 = *(long **)(lVar6 + in_stack_00000008 * 8);
  if (plVar5 == (long *)0x0) {
    *unaff_R12 = *(long *)(in_stack_00000028 + 200);
    *(long **)(in_stack_00000028 + 200) = unaff_R12;
    *(long *)(lVar6 + in_stack_00000008 * 8) = in_stack_00000028 + 200;
    if (*unaff_R12 != 0) {
      uVar8 = *(ulong *)(*unaff_R12 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        *(long **)(lVar6 + (uVar8 & uVar7 - 1) * 8) = unaff_R12;
      }
      else {
        if (uVar7 <= uVar8) {
          if ((uVar8 | uVar7) >> 0x20 == 0) {
            *(long **)(lVar6 + ((uVar8 & 0xffffffff) % (uVar7 & 0xffffffff)) * 8) = unaff_R12;
            goto LAB_0d2353d1;
          }
          uVar8 = uVar8 % uVar7;
        }
        *(long **)(lVar6 + uVar8 * 8) = unaff_R12;
      }
    }
  }
  else {
    *unaff_R12 = *plVar5;
    *plVar5 = (long)unaff_R12;
  }
LAB_0d2353d1:
  *(long *)(in_stack_00000028 + 0xd0) = *(long *)(in_stack_00000028 + 0xd0) + 1;
  *(short *)(unaff_R12 + 5) = (short)unaff_R14;
  *(undefined1 *)((long)unaff_R12 + 0x2a) = 0;
  if ((in_stack_00000010 & 1) != 0) {
    func_0x0412a280(in_stack_00000020,in_stack_00000010 & 0xfffffffffffffffe);
  }
  return unaff_R14 & 0xffffffff;
}


