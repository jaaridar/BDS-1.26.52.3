/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cbd00
 * Label: JigsawBlock::vslot19
 * Body:  [[0c5cbd00, 0c5cbd9e]]
 * Ghidra: wg_JigsawBlock__vslot19
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot19(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 *in_RAX;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong unaff_RBP;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong unaff_R13;
  long *unaff_R15;
  bool bVar19;
  float fVar20;
  ulong in_stack_00000018;
  byte bStack0000000000000020;
  undefined7 uStack0000000000000021;
  undefined8 in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  undefined8 in_stack_00000048;
  long *in_stack_00000090;
  long *in_stack_000000c0;
  
  *(undefined8 *)(param_3 + 0x10) = 0;
  uVar2 = *in_RAX;
  uVar3 = in_RAX[1];
  uVar4 = in_RAX[2];
  uVar5 = in_RAX[3];
  uVar6 = in_RAX[5];
  uVar7 = in_RAX[6];
  uVar8 = in_RAX[7];
  *(undefined4 *)(unaff_R15 + 0xe) = in_RAX[4];
  *(undefined4 *)((long)unaff_R15 + 0x74) = uVar6;
  *(undefined4 *)(unaff_R15 + 0xf) = uVar7;
  *(undefined4 *)((long)unaff_R15 + 0x7c) = uVar8;
  *(undefined4 *)(unaff_R15 + 0xc) = uVar2;
  *(undefined4 *)((long)unaff_R15 + 100) = uVar3;
  *(undefined4 *)(unaff_R15 + 0xd) = uVar4;
  *(undefined4 *)((long)unaff_R15 + 0x6c) = uVar5;
  if (in_stack_00000090 == (long *)0x0) {
    unaff_R15[0x14] = 0;
  }
  else if (in_stack_00000090 == (long *)&stack0x00000070) {
    unaff_R15[0x14] = (long)(unaff_R15 + 0x10);
    (**(code **)(*in_stack_00000090 + 0x18))();
  }
  else {
    unaff_R15[0x14] = (long)in_stack_00000090;
    in_stack_00000090 = (long *)0x0;
  }
  if ((long)unaff_R13 < 0) {
    fVar20 = (float)unaff_R13;
    if (unaff_R13 != 0) goto LAB_0c5cbdd1;
LAB_0c5cbde2:
    uVar14 = 1;
    if (2 < unaff_R13) {
      uVar14 = (ulong)((unaff_R13 & unaff_R13 - 1) != 0);
    }
    uVar14 = uVar14 | unaff_R13 * 2;
    fVar20 = (float)func_0x0eee3ab0((float)(_DAT_0f6e9b78 + 1) / _DAT_0f6e9b80);
    uVar16 = (long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20;
    if (uVar16 < uVar14) {
      uVar16 = uVar14;
    }
    uVar14 = 2;
    if ((uVar16 == 1) || (uVar14 = uVar16, (uVar16 & uVar16 - 1) == 0)) {
      bVar19 = uVar14 < _DAT_0f6e9b68;
      if (uVar14 <= _DAT_0f6e9b68) goto LAB_0c5cbf73;
LAB_0c5cbe61:
      if (uVar14 >> 0x3d != 0) {
        uVar13 = func_0x04882eb0();
        uVar13 = func_0x04882e20(uVar13);
        uVar13 = func_0x04882e20(uVar13);
        func_0x0412a280();
        func_0x0c5d3a10(&stack0x00000020);
        lVar12 = 0x20;
        if ((in_stack_000000c0 == (long *)&stack0x000000a0) ||
           (lVar12 = 0x28, in_stack_000000c0 != (long *)0x0)) {
          (**(code **)(*in_stack_000000c0 + lVar12))();
        }
        uVar13 = func_0x0eee2d70(uVar13);
        func_0x04882e20(uVar13);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar12 = uVar14 * 8;
      lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
      if (lVar10 == 0) {
        func_0x0eec74c0(lVar12,0);
      }
      lVar9 = _DAT_0f6e9b60;
      bVar19 = _DAT_0f6e9b60 != 0;
      _DAT_0f6e9b60 = lVar10;
      if (bVar19) {
        func_0x0412a280(lVar9,_DAT_0f6e9b68 << 3);
      }
      lVar10 = _DAT_0f6e9b60;
      _DAT_0f6e9b68 = uVar14;
      func_0x0eee2dd0(_DAT_0f6e9b60,0,lVar12);
      plVar15 = _DAT_0f6e9b70;
      if (_DAT_0f6e9b70 != (long *)0x0) {
        uVar17 = _DAT_0f6e9b70[1];
        uVar16 = uVar14 - 1;
        if ((uVar14 & uVar16) == 0) {
          *(undefined **)(lVar10 + (uVar17 & uVar16) * 8) = &DAT_0f6e9b70;
          uVar14 = uVar17 & uVar16;
          while (plVar18 = plVar15, plVar15 = (long *)*plVar18, plVar15 != (long *)0x0) {
            uVar17 = plVar15[1] & uVar16;
            if (uVar17 != uVar14) {
              if (*(long *)(lVar10 + uVar17 * 8) == 0) {
                *(long **)(lVar10 + uVar17 * 8) = plVar18;
                uVar14 = uVar17;
              }
              else {
                *plVar18 = *plVar15;
                *plVar15 = **(undefined8 **)(lVar10 + uVar17 * 8);
                **(long **)(lVar10 + uVar17 * 8) = (long)plVar15;
                plVar15 = plVar18;
              }
            }
          }
        }
        else {
          if (uVar14 <= uVar17) {
            if ((uVar17 | uVar14) >> 0x20 == 0) {
              uVar17 = (uVar17 & 0xffffffff) % (uVar14 & 0xffffffff);
            }
            else {
              uVar17 = uVar17 % uVar14;
            }
          }
          *(undefined **)(lVar10 + uVar17 * 8) = &DAT_0f6e9b70;
          plVar18 = (long *)*plVar15;
          while (plVar18 != (long *)0x0) {
            uVar16 = plVar18[1];
            if (uVar14 <= uVar16) {
              if ((uVar16 | uVar14) >> 0x20 == 0) {
                uVar16 = (uVar16 & 0xffffffff) % (uVar14 & 0xffffffff);
              }
              else {
                uVar16 = uVar16 % uVar14;
              }
            }
            if (uVar16 != uVar17) {
              if (*(long *)(lVar10 + uVar16 * 8) == 0) {
                *(long **)(lVar10 + uVar16 * 8) = plVar15;
                uVar17 = uVar16;
              }
              else {
                *plVar15 = *plVar18;
                *plVar18 = **(long **)(lVar10 + uVar16 * 8);
                **(undefined8 **)(lVar10 + uVar16 * 8) = plVar18;
                plVar18 = plVar15;
              }
            }
            plVar15 = plVar18;
            plVar18 = (long *)*plVar15;
          }
        }
      }
    }
    else {
      uVar14 = func_0x0412c3f0();
      bVar19 = uVar14 < _DAT_0f6e9b68;
      if (_DAT_0f6e9b68 < uVar14) goto LAB_0c5cbe61;
LAB_0c5cbf73:
      uVar16 = _DAT_0f6e9b68;
      if (bVar19) {
        fVar20 = (float)func_0x0eee3ab0((float)_DAT_0f6e9b78 / _DAT_0f6e9b80);
        uVar17 = (long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20;
        if ((uVar16 < 3) ||
           (uVar11 = uVar16 - (uVar16 >> 1 & 0x5555555555555555),
           uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
           1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar17 = func_0x0412c3f0(uVar17);
          lVar12 = _DAT_0f6e9b60;
          if (uVar17 < uVar14) {
            uVar17 = uVar14;
          }
        }
        else {
          if (1 < uVar17) {
            lVar12 = 0x3f;
            if (uVar17 - 1 != 0) {
              for (; uVar17 - 1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar17 = 1L << (-((byte)lVar12 ^ 0x3f) & 0x3f);
          }
          lVar12 = _DAT_0f6e9b60;
          if (uVar17 < uVar14) {
            uVar17 = uVar14;
          }
        }
        uVar14 = uVar17;
        _DAT_0f6e9b60 = lVar12;
        if (uVar14 < uVar16) {
          if (uVar14 != 0) goto LAB_0c5cbe61;
          _DAT_0f6e9b60 = 0;
          if (lVar12 != 0) {
            func_0x0412a280(lVar12,_DAT_0f6e9b68 << 3);
          }
          _DAT_0f6e9b68 = 0;
        }
      }
    }
    unaff_R13 = _DAT_0f6e9b68;
    if ((_DAT_0f6e9b68 & _DAT_0f6e9b68 - 1) == 0) {
      in_stack_00000018 = unaff_RBP & _DAT_0f6e9b68 - 1;
    }
    else {
      in_stack_00000018 = unaff_RBP;
      if (_DAT_0f6e9b68 <= unaff_RBP) {
        if ((unaff_RBP | _DAT_0f6e9b68) >> 0x20 == 0) {
          in_stack_00000018 = (unaff_RBP & 0xffffffff) % (_DAT_0f6e9b68 & 0xffffffff);
        }
        else {
          in_stack_00000018 = unaff_RBP % _DAT_0f6e9b68;
        }
      }
    }
  }
  else {
    fVar20 = (float)(long)unaff_R13;
    if (unaff_R13 == 0) goto LAB_0c5cbde2;
LAB_0c5cbdd1:
    if (fVar20 * _DAT_0f6e9b80 < (float)(_DAT_0f6e9b78 + 1)) goto LAB_0c5cbde2;
  }
  lVar12 = _DAT_0f6e9b60;
  plVar15 = *(long **)(_DAT_0f6e9b60 + in_stack_00000018 * 8);
  if (plVar15 == (long *)0x0) {
    *unaff_R15 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = unaff_R15;
    *(undefined **)(lVar12 + in_stack_00000018 * 8) = &DAT_0f6e9b70;
    if (*unaff_R15 != 0) {
      uVar14 = *(ulong *)(*unaff_R15 + 8);
      if ((unaff_R13 & unaff_R13 - 1) == 0) {
        *(long **)(lVar12 + (uVar14 & unaff_R13 - 1) * 8) = unaff_R15;
      }
      else {
        if (unaff_R13 <= uVar14) {
          if ((uVar14 | unaff_R13) >> 0x20 == 0) {
            *(long **)(lVar12 + ((uVar14 & 0xffffffff) % (unaff_R13 & 0xffffffff)) * 8) = unaff_R15;
            goto LAB_0c5cc13b;
          }
          uVar14 = uVar14 % unaff_R13;
        }
        *(long **)(lVar12 + uVar14 * 8) = unaff_R15;
      }
    }
  }
  else {
    *unaff_R15 = *plVar15;
    *plVar15 = (long)unaff_R15;
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
      lVar12 = 0x28;
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
  lVar12 = 0x20;
LAB_0c5cc1e5:
  (**(code **)(*in_stack_000000c0 + lVar12))();
  return;
}


