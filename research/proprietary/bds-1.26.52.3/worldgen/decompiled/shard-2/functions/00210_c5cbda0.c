/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cbda0
 * Label: JigsawBlock::vslot15
 * Body:  [[0c5cbda0, 0c5cbf06] [0c5cbf10, 0c5cc04f]]
 * Ghidra: wg_JigsawBlock__vslot15
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot15
               (float param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong unaff_RBP;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong unaff_R13;
  long *unaff_R15;
  bool bVar12;
  float fVar13;
  byte bStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined8 in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  undefined8 in_stack_00000048;
  long *in_stack_00000090;
  long *in_stack_000000c0;
  
  if ((long)unaff_R13 < 0) {
    fVar13 = (float)(long)((uint)unaff_RBP & 1 | param_5);
    fVar13 = fVar13 + fVar13;
    if (unaff_R13 != 0) goto LAB_0c5cbdd1;
LAB_0c5cbde2:
    uVar7 = 1;
    if (2 < unaff_R13) {
      uVar7 = (ulong)((unaff_R13 & unaff_R13 - 1) != 0);
    }
    uVar7 = uVar7 | unaff_R13 * 2;
    fVar13 = (float)func_0x0eee3ab0(param_1 / _DAT_0f6e9b80);
    uVar9 = (long)(fVar13 - _DAT_01198778) & (long)fVar13 >> 0x3f | (long)fVar13;
    if (uVar9 < uVar7) {
      uVar9 = uVar7;
    }
    uVar7 = 2;
    if ((uVar9 == 1) || (uVar7 = uVar9, (uVar9 & uVar9 - 1) == 0)) {
      bVar12 = uVar7 < _DAT_0f6e9b68;
      if (uVar7 <= _DAT_0f6e9b68) goto LAB_0c5cbf73;
LAB_0c5cbe61:
      if (uVar7 >> 0x3d != 0) {
        uVar6 = func_0x04882eb0();
        uVar6 = func_0x04882e20(uVar6);
        uVar6 = func_0x04882e20(uVar6);
        func_0x0412a280();
        func_0x0c5d3a10(&stack0x00000020);
        lVar5 = 0x20;
        if ((in_stack_000000c0 == (long *)&stack0x000000a0) ||
           (lVar5 = 0x28, in_stack_000000c0 != (long *)0x0)) {
          (**(code **)(*in_stack_000000c0 + lVar5))();
        }
        uVar6 = func_0x0eee2d70(uVar6);
        func_0x04882e20(uVar6);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar5 = uVar7 * 8;
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
      if (lVar3 == 0) {
        func_0x0eec74c0(lVar5,0);
      }
      lVar2 = _DAT_0f6e9b60;
      bVar12 = _DAT_0f6e9b60 != 0;
      _DAT_0f6e9b60 = lVar3;
      if (bVar12) {
        func_0x0412a280(lVar2,_DAT_0f6e9b68 << 3);
      }
      lVar3 = _DAT_0f6e9b60;
      _DAT_0f6e9b68 = uVar7;
      func_0x0eee2dd0(_DAT_0f6e9b60,0,lVar5);
      plVar8 = _DAT_0f6e9b70;
      if (_DAT_0f6e9b70 != (long *)0x0) {
        uVar10 = _DAT_0f6e9b70[1];
        uVar9 = uVar7 - 1;
        if ((uVar7 & uVar9) == 0) {
          *(undefined **)(lVar3 + (uVar10 & uVar9) * 8) = &DAT_0f6e9b70;
          uVar7 = uVar10 & uVar9;
          while (plVar11 = plVar8, plVar8 = (long *)*plVar11, plVar8 != (long *)0x0) {
            uVar10 = plVar8[1] & uVar9;
            if (uVar10 != uVar7) {
              if (*(long *)(lVar3 + uVar10 * 8) == 0) {
                *(long **)(lVar3 + uVar10 * 8) = plVar11;
                uVar7 = uVar10;
              }
              else {
                *plVar11 = *plVar8;
                *plVar8 = **(undefined8 **)(lVar3 + uVar10 * 8);
                **(long **)(lVar3 + uVar10 * 8) = (long)plVar8;
                plVar8 = plVar11;
              }
            }
          }
        }
        else {
          if (uVar7 <= uVar10) {
            if ((uVar10 | uVar7) >> 0x20 == 0) {
              uVar10 = (uVar10 & 0xffffffff) % (uVar7 & 0xffffffff);
            }
            else {
              uVar10 = uVar10 % uVar7;
            }
          }
          *(undefined **)(lVar3 + uVar10 * 8) = &DAT_0f6e9b70;
          plVar11 = (long *)*plVar8;
          while (plVar11 != (long *)0x0) {
            uVar9 = plVar11[1];
            if (uVar7 <= uVar9) {
              if ((uVar9 | uVar7) >> 0x20 == 0) {
                uVar9 = (uVar9 & 0xffffffff) % (uVar7 & 0xffffffff);
              }
              else {
                uVar9 = uVar9 % uVar7;
              }
            }
            if (uVar9 != uVar10) {
              if (*(long *)(lVar3 + uVar9 * 8) == 0) {
                *(long **)(lVar3 + uVar9 * 8) = plVar8;
                uVar10 = uVar9;
              }
              else {
                *plVar8 = *plVar11;
                *plVar11 = **(long **)(lVar3 + uVar9 * 8);
                **(undefined8 **)(lVar3 + uVar9 * 8) = plVar11;
                plVar11 = plVar8;
              }
            }
            plVar8 = plVar11;
            plVar11 = (long *)*plVar8;
          }
        }
      }
    }
    else {
      uVar7 = func_0x0412c3f0();
      bVar12 = uVar7 < _DAT_0f6e9b68;
      if (_DAT_0f6e9b68 < uVar7) goto LAB_0c5cbe61;
LAB_0c5cbf73:
      uVar9 = _DAT_0f6e9b68;
      if (bVar12) {
        fVar13 = (float)func_0x0eee3ab0((float)_DAT_0f6e9b78 / _DAT_0f6e9b80);
        uVar10 = (long)(fVar13 - _DAT_01198778) & (long)fVar13 >> 0x3f | (long)fVar13;
        if ((uVar9 < 3) ||
           (uVar4 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
           uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333),
           1 < (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar10 = func_0x0412c3f0(uVar10);
          lVar5 = _DAT_0f6e9b60;
          if (uVar10 < uVar7) {
            uVar10 = uVar7;
          }
        }
        else {
          if (1 < uVar10) {
            lVar5 = 0x3f;
            if (uVar10 - 1 != 0) {
              for (; uVar10 - 1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar10 = 1L << (-((byte)lVar5 ^ 0x3f) & 0x3f);
          }
          lVar5 = _DAT_0f6e9b60;
          if (uVar10 < uVar7) {
            uVar10 = uVar7;
          }
        }
        uVar7 = uVar10;
        _DAT_0f6e9b60 = lVar5;
        if (uVar7 < uVar9) {
          if (uVar7 != 0) goto LAB_0c5cbe61;
          _DAT_0f6e9b60 = 0;
          if (lVar5 != 0) {
            func_0x0412a280(lVar5,_DAT_0f6e9b68 << 3);
          }
          _DAT_0f6e9b68 = 0;
        }
      }
    }
    unaff_R13 = _DAT_0f6e9b68;
    if ((_DAT_0f6e9b68 & _DAT_0f6e9b68 - 1) == 0) {
      param_4 = unaff_RBP & _DAT_0f6e9b68 - 1;
    }
    else {
      param_4 = unaff_RBP;
      if (_DAT_0f6e9b68 <= unaff_RBP) {
        if ((unaff_RBP | _DAT_0f6e9b68) >> 0x20 == 0) {
          param_4 = (unaff_RBP & 0xffffffff) % (_DAT_0f6e9b68 & 0xffffffff);
        }
        else {
          param_4 = unaff_RBP % _DAT_0f6e9b68;
        }
      }
    }
  }
  else {
    fVar13 = (float)(long)unaff_R13;
    if (unaff_R13 == 0) goto LAB_0c5cbde2;
LAB_0c5cbdd1:
    if (fVar13 * _DAT_0f6e9b80 < param_1) goto LAB_0c5cbde2;
  }
  lVar5 = _DAT_0f6e9b60;
  plVar8 = *(long **)(_DAT_0f6e9b60 + param_4 * 8);
  if (plVar8 == (long *)0x0) {
    *unaff_R15 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = unaff_R15;
    *(undefined **)(lVar5 + param_4 * 8) = &DAT_0f6e9b70;
    if (*unaff_R15 != 0) {
      uVar7 = *(ulong *)(*unaff_R15 + 8);
      if ((unaff_R13 & unaff_R13 - 1) == 0) {
        *(long **)(lVar5 + (uVar7 & unaff_R13 - 1) * 8) = unaff_R15;
      }
      else {
        if (unaff_R13 <= uVar7) {
          if ((uVar7 | unaff_R13) >> 0x20 == 0) {
            *(long **)(lVar5 + ((uVar7 & 0xffffffff) % (unaff_R13 & 0xffffffff)) * 8) = unaff_R15;
            goto LAB_0c5cc13b;
          }
          uVar7 = uVar7 % unaff_R13;
        }
        *(long **)(lVar5 + uVar7 * 8) = unaff_R15;
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
      lVar5 = 0x28;
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
  lVar5 = 0x20;
LAB_0c5cc1e5:
  (**(code **)(*in_stack_000000c0 + lVar5))();
  return;
}


