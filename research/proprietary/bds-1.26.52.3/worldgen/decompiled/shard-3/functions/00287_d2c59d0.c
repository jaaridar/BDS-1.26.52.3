/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3c59d0 (ELF vaddr 0xd2c59d0)
 * Label: callee-of:0xd2a46a0
 * Body:  [[0d3c59d0, 0d3c5ab7] [0d3c5ac0, 0d3c5af6] [0d3c5b00, 0d3c5b65] [0d3c5b70, 0d3c5bbb] [0d3c5bc0, 0d3c5d5b] [0d3c5d60, 0d3c5f67] [0d3c5f70, 0d3c607a] [0d3c6080, 0d3c6153]]
 * Ghidra: FUN_0d3c59d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3c59d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong unaff_R13;
  bool bVar15;
  float fVar16;
  
  _DAT_0f71ff30 = (long *)0x0;
  _DAT_0f71ff38 = 0;
  _DAT_0f71ff20 = 0;
  _DAT_0f71ff28 = 0;
  _DAT_0f71ff40 = 1.0;
  uVar12 = 0;
  lVar8 = 0;
  uVar11 = 0;
  lVar14 = 0;
  do {
    plVar6 = (long *)(param_1 + lVar14);
    uVar3 = (long)*(int *)(param_1 + lVar14) + 0x9e3779b9;
    uVar3 = (long)*(int *)(param_1 + 4 + lVar14) + 0x9e3779b9 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
    if (uVar11 != 0) {
      uVar10 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar10 >> 0x38 < 2) {
        unaff_R13 = uVar11 - 1 & uVar3;
      }
      else {
        unaff_R13 = uVar3;
        if (uVar11 <= uVar3) {
          unaff_R13 = uVar3 % uVar11;
        }
      }
      plVar4 = *(long **)(lVar8 + unaff_R13 * 8);
      if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
        if ((byte)(uVar10 >> 0x38) < 2) {
          do {
            if (plVar4[1] == uVar3) {
              if (plVar4[2] == *plVar6) goto LAB_0d3c5fb0;
            }
            else if ((plVar4[1] & uVar11 - 1) != unaff_R13) break;
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar4[1];
            if (uVar10 == uVar3) {
              if (plVar4[2] == *plVar6) goto LAB_0d3c5fb0;
            }
            else {
              if (uVar11 <= uVar10) {
                if ((uVar10 | uVar11) >> 0x20 == 0) {
                  if ((uVar10 & 0xffffffff) % (uVar11 & 0xffffffff) == unaff_R13) goto LAB_0d3c5b7a;
                  break;
                }
                uVar10 = uVar10 % uVar11;
              }
              if (uVar10 != unaff_R13) break;
            }
LAB_0d3c5b7a:
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
      }
    }
    plVar4 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (plVar4 == (long *)0x0) {
      func_0x0eec74c0(0x30,0);
    }
    *plVar4 = 0;
    plVar4[1] = uVar3;
    lVar8 = *plVar6;
    lVar5 = plVar6[1];
    lVar2 = plVar6[3];
    plVar4[4] = plVar6[2];
    plVar4[5] = lVar2;
    plVar4[2] = lVar8;
    plVar4[3] = lVar5;
    if ((long)uVar11 < 0) {
      fVar16 = (float)uVar11;
      if (uVar11 != 0) goto LAB_0d3c5c36;
LAB_0d3c5c43:
      uVar10 = 1;
      if (2 < uVar11) {
        uVar10 = (ulong)((uVar11 & uVar11 - 1) != 0);
      }
      uVar10 = uVar11 * 2 | uVar10;
      fVar16 = (float)func_0x0eee3ab0((float)(uVar12 + 1) / _DAT_0f71ff40);
      uVar12 = (long)(fVar16 - _DAT_01198778) & (long)fVar16 >> 0x3f | (long)fVar16;
      if (uVar12 < uVar10) {
        uVar12 = uVar10;
      }
      uVar10 = 2;
      if ((uVar12 == 1) || (uVar10 = uVar12, (uVar12 & uVar12 - 1) == 0)) {
        bVar15 = uVar10 < uVar11;
        if (uVar10 <= uVar11) goto LAB_0d3c5dc3;
LAB_0d3c5cb7:
        if (uVar10 >> 0x3d != 0) {
          uVar7 = func_0x04882eb0();
          func_0x0412a280(plVar4,0x30);
          func_0x0d3c61b0();
          uVar7 = func_0x0eee2d70(uVar7);
          func_0x0d3c61b0();
          func_0x0eee2d70(uVar7);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        lVar8 = uVar10 * 8;
        lVar5 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
        if (lVar5 == 0) {
          func_0x0eec74c0(lVar8,0);
        }
        lVar2 = _DAT_0f71ff20;
        bVar15 = _DAT_0f71ff20 != 0;
        _DAT_0f71ff20 = lVar5;
        if (bVar15) {
          func_0x0412a280(lVar2,_DAT_0f71ff28 << 3);
        }
        lVar5 = _DAT_0f71ff20;
        _DAT_0f71ff28 = uVar10;
        func_0x0eee2dd0(_DAT_0f71ff20,0,lVar8);
        plVar6 = _DAT_0f71ff30;
        if (_DAT_0f71ff30 != (long *)0x0) {
          uVar12 = _DAT_0f71ff30[1];
          uVar11 = uVar10 - 1;
          if ((uVar10 & uVar11) == 0) {
            *(undefined **)(lVar5 + (uVar12 & uVar11) * 8) = &DAT_0f71ff30;
            uVar12 = uVar12 & uVar11;
            while (plVar13 = plVar6, plVar6 = (long *)*plVar13, plVar6 != (long *)0x0) {
              uVar10 = plVar6[1] & uVar11;
              if (uVar10 != uVar12) {
                if (*(long *)(lVar5 + uVar10 * 8) == 0) {
                  *(long **)(lVar5 + uVar10 * 8) = plVar13;
                  uVar12 = uVar10;
                }
                else {
                  *plVar13 = *plVar6;
                  *plVar6 = **(long **)(lVar5 + uVar10 * 8);
                  **(undefined8 **)(lVar5 + uVar10 * 8) = plVar6;
                  plVar6 = plVar13;
                }
              }
            }
          }
          else {
            if (uVar10 <= uVar12) {
              if ((uVar12 | uVar10) >> 0x20 == 0) {
                uVar12 = (uVar12 & 0xffffffff) % (uVar10 & 0xffffffff);
              }
              else {
                uVar12 = uVar12 % uVar10;
              }
            }
            *(undefined **)(lVar5 + uVar12 * 8) = &DAT_0f71ff30;
            plVar13 = (long *)*plVar6;
            while (plVar13 != (long *)0x0) {
              uVar11 = plVar13[1];
              if (uVar10 <= uVar11) {
                if ((uVar11 | uVar10) >> 0x20 == 0) {
                  uVar11 = (uVar11 & 0xffffffff) % (uVar10 & 0xffffffff);
                }
                else {
                  uVar11 = uVar11 % uVar10;
                }
              }
              if (uVar11 != uVar12) {
                if (*(long *)(lVar5 + uVar11 * 8) == 0) {
                  *(long **)(lVar5 + uVar11 * 8) = plVar6;
                  uVar12 = uVar11;
                }
                else {
                  *plVar6 = *plVar13;
                  *plVar13 = **(long **)(lVar5 + uVar11 * 8);
                  **(undefined8 **)(lVar5 + uVar11 * 8) = plVar13;
                  plVar13 = plVar6;
                }
              }
              plVar6 = plVar13;
              plVar13 = (long *)*plVar6;
            }
          }
        }
      }
      else {
        uVar10 = FUN_0412c3f0();
        bVar15 = uVar10 < _DAT_0f71ff28;
        uVar11 = _DAT_0f71ff28;
        if (_DAT_0f71ff28 < uVar10) goto LAB_0d3c5cb7;
LAB_0d3c5dc3:
        if (bVar15) {
          fVar16 = (float)func_0x0eee3ab0((float)_DAT_0f71ff38 / _DAT_0f71ff40);
          uVar12 = (long)(fVar16 - _DAT_01198778) & (long)fVar16 >> 0x3f | (long)fVar16;
          if ((uVar11 < 3) ||
             (uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
             uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
             1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
            uVar12 = FUN_0412c3f0(uVar12);
            lVar8 = _DAT_0f71ff20;
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
          }
          else {
            if (1 < uVar12) {
              lVar8 = 0x3f;
              if (uVar12 - 1 != 0) {
                for (; uVar12 - 1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              uVar12 = 1L << (-((byte)lVar8 ^ 0x3f) & 0x3f);
            }
            lVar8 = _DAT_0f71ff20;
            if (uVar12 < uVar10) {
              uVar12 = uVar10;
            }
          }
          uVar10 = uVar12;
          _DAT_0f71ff20 = lVar8;
          if (uVar10 < uVar11) {
            if (uVar10 != 0) goto LAB_0d3c5cb7;
            _DAT_0f71ff20 = 0;
            if (lVar8 != 0) {
              func_0x0412a280(lVar8,_DAT_0f71ff28 << 3);
            }
            _DAT_0f71ff28 = 0;
          }
        }
      }
      uVar11 = _DAT_0f71ff28;
      if ((_DAT_0f71ff28 & _DAT_0f71ff28 - 1) == 0) {
        unaff_R13 = _DAT_0f71ff28 - 1 & uVar3;
        plVar6 = *(long **)(_DAT_0f71ff20 + unaff_R13 * 8);
      }
      else {
        unaff_R13 = uVar3;
        if (uVar3 < _DAT_0f71ff28) goto LAB_0d3c5f80;
        unaff_R13 = uVar3 % _DAT_0f71ff28;
        plVar6 = *(long **)(_DAT_0f71ff20 + unaff_R13 * 8);
      }
      if (plVar6 == (long *)0x0) goto LAB_0d3c5ff0;
LAB_0d3c5f90:
      lVar8 = _DAT_0f71ff20;
      *plVar4 = *plVar6;
      *plVar6 = (long)plVar4;
    }
    else {
      fVar16 = (float)(long)uVar11;
      if (uVar11 == 0) goto LAB_0d3c5c43;
LAB_0d3c5c36:
      if (fVar16 * _DAT_0f71ff40 < (float)(uVar12 + 1)) goto LAB_0d3c5c43;
LAB_0d3c5f80:
      plVar6 = *(long **)(_DAT_0f71ff20 + unaff_R13 * 8);
      if (plVar6 != (long *)0x0) goto LAB_0d3c5f90;
LAB_0d3c5ff0:
      lVar8 = _DAT_0f71ff20;
      *plVar4 = (long)_DAT_0f71ff30;
      _DAT_0f71ff30 = plVar4;
      *(undefined **)(lVar8 + unaff_R13 * 8) = &DAT_0f71ff30;
      if (*plVar4 != 0) {
        uVar12 = *(ulong *)(*plVar4 + 8);
        if ((uVar11 & uVar11 - 1) == 0) {
          *(long **)(lVar8 + (uVar12 & uVar11 - 1) * 8) = plVar4;
        }
        else {
          if (uVar11 <= uVar12) {
            if ((uVar12 | uVar11) >> 0x20 == 0) {
              *(long **)(lVar8 + ((uVar12 & 0xffffffff) % (uVar11 & 0xffffffff)) * 8) = plVar4;
              goto LAB_0d3c5f9a;
            }
            uVar12 = uVar12 % uVar11;
          }
          *(long **)(lVar8 + uVar12 * 8) = plVar4;
        }
      }
    }
LAB_0d3c5f9a:
    uVar12 = _DAT_0f71ff38 + 1;
    _DAT_0f71ff38 = uVar12;
LAB_0d3c5fb0:
    lVar14 = lVar14 + 0x20;
    if (lVar14 == 0x120) {
      return;
    }
  } while( true );
}


