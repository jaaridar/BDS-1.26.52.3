/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cbdb0
 * Label: JigsawBlock::vslot16
 * Body:  [[0c5cbdb0, 0c5cbdbd] [0c5cbdd1, 0c5cbf06] [0c5cbf10, 0c5cbf6f] [0c5cbf71, 0c5cbf8f] [0c5cbf91, 0c5cc02f]]
 * Ghidra: wg_JigsawBlock__vslot16
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot16
               (float param_1,undefined8 param_2,float param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  ulong uVar8;
  ulong unaff_RBP;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong unaff_R13;
  long *unaff_R15;
  bool bVar13;
  float fVar14;
  byte bStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined8 in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  undefined8 in_stack_00000048;
  long *in_stack_00000090;
  long *in_stack_000000c0;
  
  cVar7 = (char)param_6 - (char)((ulong)param_7 >> 8);
  uVar8 = CONCAT71((int7)((ulong)param_6 >> 8),cVar7);
  if ((cVar7 == '\0') || (param_3 * _DAT_0f6e9b80 < param_1)) {
    uVar8 = 1;
    if (2 < unaff_R13) {
      uVar8 = (ulong)((unaff_R13 & unaff_R13 - 1) != 0);
    }
    uVar8 = uVar8 | unaff_R13 * 2;
    fVar14 = (float)func_0x0eee3ab0(param_1 / _DAT_0f6e9b80);
    uVar10 = (long)(fVar14 - _DAT_01198778) & (long)fVar14 >> 0x3f | (long)fVar14;
    if (uVar10 < uVar8) {
      uVar10 = uVar8;
    }
    uVar8 = 2;
    if ((uVar10 == 1) || (uVar8 = uVar10, (uVar10 & uVar10 - 1) == 0)) {
      bVar13 = uVar8 < _DAT_0f6e9b68;
      if (uVar8 <= _DAT_0f6e9b68) goto LAB_0c5cbf73;
LAB_0c5cbe61:
      if (uVar8 >> 0x3d != 0) {
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
      lVar5 = uVar8 * 8;
      lVar3 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
      if (lVar3 == 0) {
        func_0x0eec74c0(lVar5,0);
      }
      lVar2 = _DAT_0f6e9b60;
      bVar13 = _DAT_0f6e9b60 != 0;
      _DAT_0f6e9b60 = lVar3;
      if (bVar13) {
        func_0x0412a280(lVar2,_DAT_0f6e9b68 << 3);
      }
      lVar3 = _DAT_0f6e9b60;
      _DAT_0f6e9b68 = uVar8;
      func_0x0eee2dd0(_DAT_0f6e9b60,0,lVar5);
      plVar9 = _DAT_0f6e9b70;
      if (_DAT_0f6e9b70 != (long *)0x0) {
        uVar11 = _DAT_0f6e9b70[1];
        uVar10 = uVar8 - 1;
        if ((uVar8 & uVar10) == 0) {
          *(undefined **)(lVar3 + (uVar11 & uVar10) * 8) = &DAT_0f6e9b70;
          uVar8 = uVar11 & uVar10;
          while (plVar12 = plVar9, plVar9 = (long *)*plVar12, plVar9 != (long *)0x0) {
            uVar11 = plVar9[1] & uVar10;
            if (uVar11 != uVar8) {
              if (*(long *)(lVar3 + uVar11 * 8) == 0) {
                *(long **)(lVar3 + uVar11 * 8) = plVar12;
                uVar8 = uVar11;
              }
              else {
                *plVar12 = *plVar9;
                *plVar9 = **(undefined8 **)(lVar3 + uVar11 * 8);
                **(long **)(lVar3 + uVar11 * 8) = (long)plVar9;
                plVar9 = plVar12;
              }
            }
          }
        }
        else {
          if (uVar8 <= uVar11) {
            if ((uVar11 | uVar8) >> 0x20 == 0) {
              uVar11 = (uVar11 & 0xffffffff) % (uVar8 & 0xffffffff);
            }
            else {
              uVar11 = uVar11 % uVar8;
            }
          }
          *(undefined **)(lVar3 + uVar11 * 8) = &DAT_0f6e9b70;
          plVar12 = (long *)*plVar9;
          while (plVar12 != (long *)0x0) {
            uVar10 = plVar12[1];
            if (uVar8 <= uVar10) {
              if ((uVar10 | uVar8) >> 0x20 == 0) {
                uVar10 = (uVar10 & 0xffffffff) % (uVar8 & 0xffffffff);
              }
              else {
                uVar10 = uVar10 % uVar8;
              }
            }
            if (uVar10 != uVar11) {
              if (*(long *)(lVar3 + uVar10 * 8) == 0) {
                *(long **)(lVar3 + uVar10 * 8) = plVar9;
                uVar11 = uVar10;
              }
              else {
                *plVar9 = *plVar12;
                *plVar12 = **(long **)(lVar3 + uVar10 * 8);
                **(undefined8 **)(lVar3 + uVar10 * 8) = plVar12;
                plVar12 = plVar9;
              }
            }
            plVar9 = plVar12;
            plVar12 = (long *)*plVar9;
          }
        }
      }
    }
    else {
      uVar8 = func_0x0412c3f0();
      bVar13 = uVar8 < _DAT_0f6e9b68;
      if (_DAT_0f6e9b68 < uVar8) goto LAB_0c5cbe61;
LAB_0c5cbf73:
      uVar10 = _DAT_0f6e9b68;
      if (bVar13) {
        fVar14 = (float)func_0x0eee3ab0((float)_DAT_0f6e9b78 / _DAT_0f6e9b80);
        uVar11 = (long)(fVar14 - _DAT_01198778) & (long)fVar14 >> 0x3f | (long)fVar14;
        if ((uVar10 < 3) ||
           (uVar4 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
           uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333),
           1 < (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar11 = func_0x0412c3f0(uVar11);
          lVar5 = _DAT_0f6e9b60;
          if (uVar11 < uVar8) {
            uVar11 = uVar8;
          }
        }
        else {
          if (1 < uVar11) {
            lVar5 = 0x3f;
            if (uVar11 - 1 != 0) {
              for (; uVar11 - 1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar11 = 1L << (-((byte)lVar5 ^ 0x3f) & 0x3f);
          }
          lVar5 = _DAT_0f6e9b60;
          if (uVar11 < uVar8) {
            uVar11 = uVar8;
          }
        }
        uVar8 = uVar11;
        _DAT_0f6e9b60 = lVar5;
        if (uVar8 < uVar10) {
          if (uVar8 != 0) goto LAB_0c5cbe61;
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
      uVar8 = unaff_RBP & _DAT_0f6e9b68 - 1;
    }
    else {
      uVar8 = unaff_RBP;
      if (_DAT_0f6e9b68 <= unaff_RBP) {
        if ((unaff_RBP | _DAT_0f6e9b68) >> 0x20 == 0) {
          uVar8 = (unaff_RBP & 0xffffffff) % (_DAT_0f6e9b68 & 0xffffffff);
        }
        else {
          uVar8 = unaff_RBP % _DAT_0f6e9b68;
        }
      }
    }
  }
  lVar5 = _DAT_0f6e9b60;
  plVar9 = *(long **)(_DAT_0f6e9b60 + uVar8 * 8);
  if (plVar9 == (long *)0x0) {
    *unaff_R15 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = unaff_R15;
    *(undefined **)(lVar5 + uVar8 * 8) = &DAT_0f6e9b70;
    if (*unaff_R15 != 0) {
      uVar8 = *(ulong *)(*unaff_R15 + 8);
      if ((unaff_R13 & unaff_R13 - 1) == 0) {
        *(long **)(lVar5 + (uVar8 & unaff_R13 - 1) * 8) = unaff_R15;
      }
      else {
        if (unaff_R13 <= uVar8) {
          if ((uVar8 | unaff_R13) >> 0x20 == 0) {
            *(long **)(lVar5 + ((uVar8 & 0xffffffff) % (unaff_R13 & 0xffffffff)) * 8) = unaff_R15;
            goto LAB_0c5cc13b;
          }
          uVar8 = uVar8 % unaff_R13;
        }
        *(long **)(lVar5 + uVar8 * 8) = unaff_R15;
      }
    }
  }
  else {
    *unaff_R15 = *plVar9;
    *plVar9 = (long)unaff_R15;
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


