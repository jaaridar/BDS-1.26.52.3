/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cc070
 * Label: JigsawBlock::vslot36
 * Body:  [[0c5cc070, 0c5cc08f] [0c5cc0a7, 0c5cc0cf] [0c5cc0d1, 0c5cc2a0] [0c5cc2b0, 0c5cc31f] [0c5cc331, 0c5cc366] [0c5cc3bf, 0c5cc403]]
 * Ghidra: wg_JigsawBlock__vslot36
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot36(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong unaff_RBX;
  ulong unaff_RBP;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong unaff_R12;
  ulong uVar10;
  ulong unaff_R13;
  long *unaff_R15;
  bool bVar11;
  byte bStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined8 in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  undefined8 in_stack_00000048;
  long *in_stack_00000090;
  long *in_stack_000000c0;
  
  lVar3 = _DAT_0f6e9b60;
  lVar4 = 0x3f;
  if (unaff_R12 != 0) {
    for (; unaff_R12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar10 = 1L << (-((byte)lVar4 ^ 0x3f) & 0x3f);
  if (uVar10 < unaff_RBX) {
    uVar10 = unaff_RBX;
  }
  if (uVar10 < unaff_R13) {
    if (uVar10 == 0) {
      _DAT_0f6e9b60 = 0;
      if (lVar3 != 0) {
        func_0x0412a280(lVar3,_DAT_0f6e9b68 << 3);
      }
      _DAT_0f6e9b68 = 0;
    }
    else {
      if (uVar10 >> 0x3d != 0) {
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
      lVar4 = uVar10 * 8;
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
      _DAT_0f6e9b68 = uVar10;
      func_0x0eee2dd0(_DAT_0f6e9b60,0,lVar4);
      plVar7 = _DAT_0f6e9b70;
      if (_DAT_0f6e9b70 != (long *)0x0) {
        uVar8 = _DAT_0f6e9b70[1];
        uVar6 = uVar10 - 1;
        if ((uVar10 & uVar6) == 0) {
          *(undefined **)(lVar3 + (uVar8 & uVar6) * 8) = &DAT_0f6e9b70;
          uVar10 = uVar8 & uVar6;
          while (plVar9 = plVar7, plVar7 = (long *)*plVar9, plVar7 != (long *)0x0) {
            uVar8 = plVar7[1] & uVar6;
            if (uVar8 != uVar10) {
              if (*(long *)(lVar3 + uVar8 * 8) == 0) {
                *(long **)(lVar3 + uVar8 * 8) = plVar9;
                uVar10 = uVar8;
              }
              else {
                *plVar9 = *plVar7;
                *plVar7 = **(undefined8 **)(lVar3 + uVar8 * 8);
                **(long **)(lVar3 + uVar8 * 8) = (long)plVar7;
                plVar7 = plVar9;
              }
            }
          }
        }
        else {
          if (uVar10 <= uVar8) {
            if ((uVar8 | uVar10) >> 0x20 == 0) {
              uVar8 = (uVar8 & 0xffffffff) % (uVar10 & 0xffffffff);
            }
            else {
              uVar8 = uVar8 % uVar10;
            }
          }
          *(undefined **)(lVar3 + uVar8 * 8) = &DAT_0f6e9b70;
          plVar9 = (long *)*plVar7;
          while (plVar9 != (long *)0x0) {
            uVar6 = plVar9[1];
            if (uVar10 <= uVar6) {
              if ((uVar6 | uVar10) >> 0x20 == 0) {
                uVar6 = (uVar6 & 0xffffffff) % (uVar10 & 0xffffffff);
              }
              else {
                uVar6 = uVar6 % uVar10;
              }
            }
            if (uVar6 != uVar8) {
              if (*(long *)(lVar3 + uVar6 * 8) == 0) {
                *(long **)(lVar3 + uVar6 * 8) = plVar7;
                uVar8 = uVar6;
              }
              else {
                *plVar7 = *plVar9;
                *plVar9 = **(long **)(lVar3 + uVar6 * 8);
                **(undefined8 **)(lVar3 + uVar6 * 8) = plVar9;
                plVar9 = plVar7;
              }
            }
            plVar7 = plVar9;
            plVar9 = (long *)*plVar7;
          }
        }
      }
    }
  }
  uVar10 = _DAT_0f6e9b68;
  lVar4 = _DAT_0f6e9b60;
  if ((_DAT_0f6e9b68 & _DAT_0f6e9b68 - 1) == 0) {
    unaff_RBP = unaff_RBP & _DAT_0f6e9b68 - 1;
  }
  else if (_DAT_0f6e9b68 <= unaff_RBP) {
    if ((unaff_RBP | _DAT_0f6e9b68) >> 0x20 == 0) {
      unaff_RBP = (unaff_RBP & 0xffffffff) % (_DAT_0f6e9b68 & 0xffffffff);
    }
    else {
      unaff_RBP = unaff_RBP % _DAT_0f6e9b68;
    }
  }
  plVar7 = *(long **)(_DAT_0f6e9b60 + unaff_RBP * 8);
  if (plVar7 == (long *)0x0) {
    *unaff_R15 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = unaff_R15;
    *(undefined **)(lVar4 + unaff_RBP * 8) = &DAT_0f6e9b70;
    if (*unaff_R15 != 0) {
      uVar6 = *(ulong *)(*unaff_R15 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        *(long **)(lVar4 + (uVar6 & uVar10 - 1) * 8) = unaff_R15;
      }
      else {
        if (uVar10 <= uVar6) {
          if ((uVar6 | uVar10) >> 0x20 == 0) {
            *(long **)(lVar4 + ((uVar6 & 0xffffffff) % (uVar10 & 0xffffffff)) * 8) = unaff_R15;
            goto LAB_0c5cc13b;
          }
          uVar6 = uVar6 % uVar10;
        }
        *(long **)(lVar4 + uVar6 * 8) = unaff_R15;
      }
    }
  }
  else {
    *unaff_R15 = *plVar7;
    *plVar7 = (long)unaff_R15;
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


