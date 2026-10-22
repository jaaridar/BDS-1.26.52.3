/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cc0a0
 * Label: JigsawBlock::vslot37
 * Body:  [[0c5cbdda, 0c5cbde1] [0c5cbe61, 0c5cbf06] [0c5cbf10, 0c5cbf5a] [0c5cc0a0, 0c5cc2a0] [0c5cc2b0, 0c5cc31f] [0c5cc331, 0c5cc366] [0c5cc3bf, 0c5cc403]]
 * Ghidra: wg_JigsawBlock__vslot37
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot37(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong in_RAX;
  long lVar4;
  undefined8 uVar5;
  long in_RCX;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_RBP;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong unaff_R12;
  ulong unaff_R13;
  long *unaff_R15;
  bool bVar11;
  undefined1 in_ZF;
  byte bStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined8 in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  undefined8 in_stack_00000048;
  long *in_stack_00000090;
  long *in_stack_000000c0;
  
  lVar4 = _DAT_0f6e9b60;
  if (in_RCX != 0) {
    if ((uint)&stack0x00000000 < (uint)unaff_RBP) {
      if (unaff_R12 == 0) {
        _DAT_0f6e9b60 = 0;
        if (lVar4 != 0) {
          func_0x0412a280(lVar4,_DAT_0f6e9b68 << 3);
        }
        _DAT_0f6e9b68 = 0;
      }
      else {
        if (unaff_R12 >> 0x3d != 0) {
          uVar5 = func_0x04882eb0();
          uVar5 = func_0x04882e20(uVar5);
          uVar5 = func_0x04882e20(uVar5);
          func_0x0412a280();
          func_0x0c5d3a10(&stack0x00000020);
          lVar4 = 0x20;
          if ((in_stack_000000c0 == (long *)&stack0x000000a0) ||
             (lVar4 = 0x28, in_stack_000000c0 != (long *)0x0)) {
            (**(code **)(*in_stack_000000c0 + lVar4))();
          }
          uVar5 = func_0x0eee2d70(uVar5);
          func_0x04882e20(uVar5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar4 = unaff_R12 * 8;
        lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar4);
        if (lVar3 == 0) {
          func_0x0eec74c0(lVar4,0);
        }
        lVar2 = _DAT_0f6e9b60;
        bVar11 = _DAT_0f6e9b60 != 0;
        _DAT_0f6e9b60 = lVar3;
        if (bVar11) {
          func_0x0412a280(lVar2,_DAT_0f6e9b68 << 3);
        }
        lVar3 = _DAT_0f6e9b60;
        _DAT_0f6e9b68 = unaff_R12;
        func_0x0eee2dd0(_DAT_0f6e9b60,0,lVar4);
        plVar8 = _DAT_0f6e9b70;
        if (_DAT_0f6e9b70 != (long *)0x0) {
          uVar6 = _DAT_0f6e9b70[1];
          uVar7 = unaff_R12 - 1;
          if ((unaff_R12 & uVar7) == 0) {
            *(undefined **)(lVar3 + (uVar6 & uVar7) * 8) = &DAT_0f6e9b70;
            uVar6 = uVar6 & uVar7;
            while (plVar10 = plVar8, plVar8 = (long *)*plVar10, plVar8 != (long *)0x0) {
              uVar9 = plVar8[1] & uVar7;
              if (uVar9 != uVar6) {
                if (*(long *)(lVar3 + uVar9 * 8) == 0) {
                  *(long **)(lVar3 + uVar9 * 8) = plVar10;
                  uVar6 = uVar9;
                }
                else {
                  *plVar10 = *plVar8;
                  *plVar8 = **(undefined8 **)(lVar3 + uVar9 * 8);
                  **(long **)(lVar3 + uVar9 * 8) = (long)plVar8;
                  plVar8 = plVar10;
                }
              }
            }
          }
          else {
            if (unaff_R12 <= uVar6) {
              if ((uVar6 | unaff_R12) >> 0x20 == 0) {
                uVar6 = (uVar6 & 0xffffffff) % (unaff_R12 & 0xffffffff);
              }
              else {
                uVar6 = uVar6 % unaff_R12;
              }
            }
            *(undefined **)(lVar3 + uVar6 * 8) = &DAT_0f6e9b70;
            plVar10 = (long *)*plVar8;
            while (plVar10 != (long *)0x0) {
              uVar7 = plVar10[1];
              if (unaff_R12 <= uVar7) {
                if ((uVar7 | unaff_R12) >> 0x20 == 0) {
                  uVar7 = (uVar7 & 0xffffffff) % (unaff_R12 & 0xffffffff);
                }
                else {
                  uVar7 = uVar7 % unaff_R12;
                }
              }
              if (uVar7 != uVar6) {
                if (*(long *)(lVar3 + uVar7 * 8) == 0) {
                  *(long **)(lVar3 + uVar7 * 8) = plVar8;
                  uVar6 = uVar7;
                }
                else {
                  *plVar8 = *plVar10;
                  *plVar10 = **(long **)(lVar3 + uVar7 * 8);
                  **(undefined8 **)(lVar3 + uVar7 * 8) = plVar10;
                  plVar10 = plVar8;
                }
              }
              plVar8 = plVar10;
              plVar10 = (long *)*plVar8;
            }
          }
        }
      }
    }
    in_RAX = _DAT_0f6e9b68 - 1;
    in_ZF = (_DAT_0f6e9b68 & in_RAX) == 0;
    unaff_R13 = _DAT_0f6e9b68;
  }
  lVar4 = _DAT_0f6e9b60;
  if ((bool)in_ZF) {
    unaff_RBP = unaff_RBP & in_RAX;
  }
  else if (unaff_R13 <= unaff_RBP) {
    if ((unaff_RBP | unaff_R13) >> 0x20 == 0) {
      unaff_RBP = (unaff_RBP & 0xffffffff) % (unaff_R13 & 0xffffffff);
    }
    else {
      unaff_RBP = unaff_RBP % unaff_R13;
    }
  }
  plVar8 = *(long **)(_DAT_0f6e9b60 + unaff_RBP * 8);
  if (plVar8 == (long *)0x0) {
    *unaff_R15 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = unaff_R15;
    *(undefined **)(lVar4 + unaff_RBP * 8) = &DAT_0f6e9b70;
    if (*unaff_R15 != 0) {
      uVar7 = *(ulong *)(*unaff_R15 + 8);
      if ((unaff_R13 & unaff_R13 - 1) == 0) {
        *(long **)(lVar4 + (uVar7 & unaff_R13 - 1) * 8) = unaff_R15;
      }
      else {
        if (unaff_R13 <= uVar7) {
          if ((uVar7 | unaff_R13) >> 0x20 == 0) {
            *(long **)(lVar4 + ((uVar7 & 0xffffffff) % (unaff_R13 & 0xffffffff)) * 8) = unaff_R15;
            goto LAB_0c5cc13b;
          }
          uVar7 = uVar7 % unaff_R13;
        }
        *(long **)(lVar4 + uVar7 * 8) = unaff_R15;
      }
    }
  }
  else {
    *unaff_R15 = *plVar8;
    *plVar8 = (long)unaff_R15;
  }
LAB_0c5cc13b:
  _DAT_0f6e9b78 = _DAT_0f6e9b78 + 1;
  if (in_stack_00000090 == (long *)&stack0x00000070) {
    (**(code **)(*in_stack_00000090 + 0x20))();
joined_r0x0c5cc20d:
    if ((bStack0000000000000038 & 1) != 0) goto LAB_0c5cc16f;
LAB_0c5cc1bf:
    if ((bStack0000000000000020 & 1) == 0) goto LAB_0c5cc1c6;
LAB_0c5cc189:
    func_0x0412a280(in_stack_00000030,
                    CONCAT71(uStack0000000000000021,bStack0000000000000020) & 0xfffffffffffffffe);
    if (in_stack_000000c0 != (long *)&stack0x000000a0) {
LAB_0c5cc1db:
      lVar4 = 0x28;
      if (in_stack_000000c0 == (long *)0x0) {
        return;
      }
      goto LAB_0c5cc1e5;
    }
  }
  else {
    if (in_stack_00000090 == (long *)0x0) goto joined_r0x0c5cc20d;
    (**(code **)(*in_stack_00000090 + 0x28))();
    if ((bStack0000000000000038 & 1) == 0) goto LAB_0c5cc1bf;
LAB_0c5cc16f:
    func_0x0412a280(in_stack_00000048,
                    CONCAT71(uStack0000000000000039,bStack0000000000000038) & 0xfffffffffffffffe);
    if ((bStack0000000000000020 & 1) != 0) goto LAB_0c5cc189;
LAB_0c5cc1c6:
    if (in_stack_000000c0 != (long *)&stack0x000000a0) goto LAB_0c5cc1db;
  }
  lVar4 = 0x20;
LAB_0c5cc1e5:
  (**(code **)(*in_stack_000000c0 + lVar4))();
  return;
}


