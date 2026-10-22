/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cbb30
 * Label: JigsawBlock::vslot14
 * Body:  [[0c5cbb30, 0c5cbb4a] [0c5cbb59, 0c5cbb5e] [0c5cbb60, 0c5cbb94] [0c5cbba0, 0c5cbc0c]]
 * Ghidra: wg_JigsawBlock__vslot14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot14(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong unaff_RBX;
  ulong uVar18;
  ulong unaff_RBP;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  byte *unaff_R12;
  ulong unaff_R13;
  long *unaff_R15;
  bool bVar23;
  float fVar24;
  long unaff_retaddr;
  
  *(undefined8 *)(unaff_retaddr + 0x10) = *(undefined8 *)(unaff_R12 + 0x10);
  if (param_4 < 2) {
    do {
      if (unaff_R15[1] == unaff_RBP) {
        bVar1 = *(byte *)(unaff_R15 + 2);
        if ((bVar1 & 1) == 0) {
          uVar18 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar18 = unaff_R15[3];
        }
        if (uVar18 == unaff_RBX) {
          if ((bVar1 & 1) == 0) {
            lVar16 = (long)unaff_R15 + 0x11;
          }
          else {
            lVar16 = unaff_R15[4];
          }
          *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbbc4;
          iVar12 = func_0x0eee3000(lVar16,*(undefined8 *)(unaff_retaddr + 0x10));
          param_2 = *(ulong *)(unaff_retaddr + 0x18);
          if (iVar12 == 0) goto LAB_0c5cc142;
        }
      }
      else if ((unaff_R15[1] & unaff_R13 - 1) != param_2) break;
      unaff_R15 = (long *)*unaff_R15;
    } while (unaff_R15 != (long *)0x0);
  }
  else {
    do {
      uVar18 = unaff_R15[1];
      if (uVar18 == unaff_RBP) {
        bVar1 = *(byte *)(unaff_R15 + 2);
        if ((bVar1 & 1) == 0) {
          uVar18 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar18 = unaff_R15[3];
        }
        if (uVar18 == unaff_RBX) {
          if ((bVar1 & 1) == 0) {
            lVar16 = (long)unaff_R15 + 0x11;
          }
          else {
            lVar16 = unaff_R15[4];
          }
          *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbc54;
          iVar12 = func_0x0eee3000(lVar16,*(undefined8 *)(unaff_retaddr + 0x10));
          param_2 = *(ulong *)(unaff_retaddr + 0x18);
          if (iVar12 == 0) goto LAB_0c5cc142;
        }
      }
      else {
        if (unaff_R13 <= uVar18) {
          if ((uVar18 | unaff_R13) >> 0x20 == 0) {
            uVar18 = (uVar18 & 0xffffffff) % (unaff_R13 & 0xffffffff);
          }
          else {
            uVar18 = uVar18 % unaff_R13;
          }
        }
        if (uVar18 != param_2) break;
      }
      unaff_R15 = (long *)*unaff_R15;
    } while (unaff_R15 != (long *)0x0);
  }
  pcVar3 = *(code **)(_DAT_0f5463b0 + 0x10);
  *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbc7b;
  plVar13 = (long *)(*pcVar3)(&DAT_0f5463b0,0xb0);
  if (plVar13 == (long *)0x0) {
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc32c;
    func_0x0eec74c0(0xb0,0);
  }
  *plVar13 = 0;
  plVar13[1] = unaff_RBP;
  if ((*unaff_R12 & 1) == 0) {
    plVar13[4] = *(long *)(unaff_R12 + 0x10);
    lVar16 = *(long *)(unaff_R12 + 8);
    plVar13[2] = *(long *)unaff_R12;
    plVar13[3] = lVar16;
  }
  else {
    uVar17 = *(undefined8 *)(unaff_R12 + 8);
    uVar2 = *(undefined8 *)(unaff_R12 + 0x10);
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbcbf;
    func_0x0412e5e0(plVar13 + 2,uVar2,uVar17);
  }
  plVar13[8] = *(long *)(unaff_retaddr + 0x30);
  lVar16 = *(long *)(unaff_retaddr + 0x28);
  plVar13[6] = *(long *)(unaff_retaddr + 0x20);
  plVar13[7] = lVar16;
  *(undefined8 *)(unaff_retaddr + 0x20) = 0;
  *(undefined8 *)(unaff_retaddr + 0x28) = 0;
  *(undefined8 *)(unaff_retaddr + 0x30) = 0;
  plVar13[0xb] = *(long *)(unaff_retaddr + 0x48);
  lVar16 = *(long *)(unaff_retaddr + 0x40);
  plVar13[9] = *(long *)(unaff_retaddr + 0x38);
  plVar13[10] = lVar16;
  *(long *)(unaff_retaddr + 0x38) = 0;
  *(undefined8 *)(unaff_retaddr + 0x40) = 0;
  *(undefined8 *)(unaff_retaddr + 0x48) = 0;
  uVar4 = *(undefined4 *)(unaff_retaddr + 0x50);
  uVar5 = *(undefined4 *)(unaff_retaddr + 0x54);
  uVar6 = *(undefined4 *)(unaff_retaddr + 0x58);
  uVar7 = *(undefined4 *)(unaff_retaddr + 0x5c);
  uVar8 = *(undefined4 *)(unaff_retaddr + 100);
  uVar9 = *(undefined4 *)(unaff_retaddr + 0x68);
  uVar10 = *(undefined4 *)(unaff_retaddr + 0x6c);
  *(undefined4 *)(plVar13 + 0xe) = *(undefined4 *)(unaff_retaddr + 0x60);
  *(undefined4 *)((long)plVar13 + 0x74) = uVar8;
  *(undefined4 *)(plVar13 + 0xf) = uVar9;
  *(undefined4 *)((long)plVar13 + 0x7c) = uVar10;
  *(undefined4 *)(plVar13 + 0xc) = uVar4;
  *(undefined4 *)((long)plVar13 + 100) = uVar5;
  *(undefined4 *)(plVar13 + 0xd) = uVar6;
  *(undefined4 *)((long)plVar13 + 0x6c) = uVar7;
  plVar19 = *(long **)(unaff_retaddr + 0x90);
  if (plVar19 == (long *)0x0) {
    plVar13[0x14] = 0;
  }
  else if (plVar19 == (long *)(unaff_retaddr + 0x70)) {
    plVar13[0x14] = (long)(plVar13 + 0x10);
    pcVar3 = *(code **)(*plVar19 + 0x18);
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbd66;
    (*pcVar3)();
  }
  else {
    plVar13[0x14] = (long)plVar19;
    *(undefined8 *)(unaff_retaddr + 0x90) = 0;
  }
  uVar18 = *(ulong *)(unaff_retaddr + 0x18);
  if ((long)unaff_R13 < 0) {
    fVar24 = (float)unaff_R13;
    if (unaff_R13 != 0) goto LAB_0c5cbdd1;
LAB_0c5cbde2:
    uVar18 = 1;
    if (2 < unaff_R13) {
      uVar18 = (ulong)((unaff_R13 & unaff_R13 - 1) != 0);
    }
    uVar18 = uVar18 | unaff_R13 * 2;
    fVar24 = (float)(_DAT_0f6e9b78 + 1) / _DAT_0f6e9b80;
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbe0d;
    fVar24 = (float)func_0x0eee3ab0(fVar24);
    uVar20 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
    if (uVar20 < uVar18) {
      uVar20 = uVar18;
    }
    uVar18 = 2;
    if ((uVar20 == 1) || (uVar18 = uVar20, (uVar20 & uVar20 - 1) == 0)) {
      bVar23 = uVar18 < _DAT_0f6e9b68;
      if (uVar18 <= _DAT_0f6e9b68) goto LAB_0c5cbf73;
LAB_0c5cbe61:
      if (uVar18 >> 0x3d != 0) {
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc345;
        uVar17 = func_0x04882eb0();
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc34d;
        uVar17 = func_0x04882e20(uVar17);
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc355;
        uVar17 = func_0x04882e20(uVar17);
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc365;
        func_0x0412a280(plVar13,0xb0);
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc3c9;
        func_0x0c5d3a10(unaff_retaddr + 0x20);
        plVar13 = *(long **)(unaff_retaddr + 0xc0);
        lVar16 = 0x20;
        if ((plVar13 == (long *)(unaff_retaddr + 0xa0)) || (lVar16 = 0x28, plVar13 != (long *)0x0))
        {
          pcVar3 = *(code **)(*plVar13 + lVar16);
          *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc3f3;
          (*pcVar3)();
        }
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc3fb;
        uVar17 = func_0x0eee2d70(uVar17);
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc403;
        func_0x04882e20(uVar17);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar16 = uVar18 * 8;
      pcVar3 = *(code **)(_DAT_0f5463b0 + 0x10);
      *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbe8a;
      lVar14 = (*pcVar3)(&DAT_0f5463b0,lVar16);
      if (lVar14 == 0) {
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc33b;
        func_0x0eec74c0(lVar16,0);
      }
      lVar11 = _DAT_0f6e9b60;
      bVar23 = _DAT_0f6e9b60 != 0;
      _DAT_0f6e9b60 = lVar14;
      if (bVar23) {
        lVar14 = _DAT_0f6e9b68 << 3;
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbeb9;
        func_0x0412a280(lVar11,lVar14);
      }
      lVar14 = _DAT_0f6e9b60;
      _DAT_0f6e9b68 = uVar18;
      *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbed4;
      func_0x0eee2dd0(lVar14,0,lVar16);
      plVar19 = _DAT_0f6e9b70;
      if (_DAT_0f6e9b70 != (long *)0x0) {
        uVar21 = _DAT_0f6e9b70[1];
        uVar20 = uVar18 - 1;
        if ((uVar18 & uVar20) == 0) {
          *(undefined **)(lVar14 + (uVar21 & uVar20) * 8) = &DAT_0f6e9b70;
          uVar18 = uVar21 & uVar20;
          while (plVar22 = plVar19, plVar19 = (long *)*plVar22, plVar19 != (long *)0x0) {
            uVar21 = plVar19[1] & uVar20;
            if (uVar21 != uVar18) {
              if (*(long *)(lVar14 + uVar21 * 8) == 0) {
                *(long **)(lVar14 + uVar21 * 8) = plVar22;
                uVar18 = uVar21;
              }
              else {
                *plVar22 = *plVar19;
                *plVar19 = **(long **)(lVar14 + uVar21 * 8);
                **(undefined8 **)(lVar14 + uVar21 * 8) = plVar19;
                plVar19 = plVar22;
              }
            }
          }
        }
        else {
          if (uVar18 <= uVar21) {
            if ((uVar21 | uVar18) >> 0x20 == 0) {
              uVar21 = (uVar21 & 0xffffffff) % (uVar18 & 0xffffffff);
            }
            else {
              uVar21 = uVar21 % uVar18;
            }
          }
          *(undefined **)(lVar14 + uVar21 * 8) = &DAT_0f6e9b70;
          plVar22 = (long *)*plVar19;
          while (plVar22 != (long *)0x0) {
            uVar20 = plVar22[1];
            if (uVar18 <= uVar20) {
              if ((uVar20 | uVar18) >> 0x20 == 0) {
                uVar20 = (uVar20 & 0xffffffff) % (uVar18 & 0xffffffff);
              }
              else {
                uVar20 = uVar20 % uVar18;
              }
            }
            if (uVar20 != uVar21) {
              if (*(long *)(lVar14 + uVar20 * 8) == 0) {
                *(long **)(lVar14 + uVar20 * 8) = plVar19;
                uVar21 = uVar20;
              }
              else {
                *plVar19 = *plVar22;
                *plVar22 = **(long **)(lVar14 + uVar20 * 8);
                **(undefined8 **)(lVar14 + uVar20 * 8) = plVar22;
                plVar22 = plVar19;
              }
            }
            plVar19 = plVar22;
            plVar22 = (long *)*plVar19;
          }
        }
      }
    }
    else {
      *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbf60;
      uVar18 = func_0x0412c3f0();
      bVar23 = uVar18 < _DAT_0f6e9b68;
      if (_DAT_0f6e9b68 < uVar18) goto LAB_0c5cbe61;
LAB_0c5cbf73:
      uVar20 = _DAT_0f6e9b68;
      if (bVar23) {
        fVar24 = (float)_DAT_0f6e9b78 / _DAT_0f6e9b80;
        *(undefined8 *)(unaff_retaddr + -8) = 0xc5cbfdd;
        fVar24 = (float)func_0x0eee3ab0(fVar24);
        uVar21 = (long)(fVar24 - _DAT_01198778) & (long)fVar24 >> 0x3f | (long)fVar24;
        if ((uVar20 < 3) ||
           (uVar15 = uVar20 - (uVar20 >> 1 & 0x5555555555555555),
           uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
           1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc098;
          uVar21 = func_0x0412c3f0(uVar21);
          lVar16 = _DAT_0f6e9b60;
          if (uVar21 < uVar18) {
            uVar21 = uVar18;
          }
        }
        else {
          if (1 < uVar21) {
            lVar16 = 0x3f;
            if (uVar21 - 1 != 0) {
              for (; uVar21 - 1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar21 = 1L << (-((byte)lVar16 ^ 0x3f) & 0x3f);
          }
          lVar16 = _DAT_0f6e9b60;
          if (uVar21 < uVar18) {
            uVar21 = uVar18;
          }
        }
        uVar18 = uVar21;
        _DAT_0f6e9b60 = lVar16;
        if (uVar18 < uVar20) {
          if (uVar18 != 0) goto LAB_0c5cbe61;
          _DAT_0f6e9b60 = 0;
          if (lVar16 != 0) {
            lVar14 = _DAT_0f6e9b68 << 3;
            *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc0d7;
            func_0x0412a280(lVar16,lVar14);
          }
          _DAT_0f6e9b68 = 0;
        }
      }
    }
    unaff_R13 = _DAT_0f6e9b68;
    if ((_DAT_0f6e9b68 & _DAT_0f6e9b68 - 1) == 0) {
      uVar18 = unaff_RBP & _DAT_0f6e9b68 - 1;
    }
    else {
      uVar18 = unaff_RBP;
      if (_DAT_0f6e9b68 <= unaff_RBP) {
        if ((unaff_RBP | _DAT_0f6e9b68) >> 0x20 == 0) {
          uVar18 = (unaff_RBP & 0xffffffff) % (_DAT_0f6e9b68 & 0xffffffff);
        }
        else {
          uVar18 = unaff_RBP % _DAT_0f6e9b68;
        }
      }
    }
  }
  else {
    fVar24 = (float)(long)unaff_R13;
    if (unaff_R13 == 0) goto LAB_0c5cbde2;
LAB_0c5cbdd1:
    if (fVar24 * _DAT_0f6e9b80 < (float)(_DAT_0f6e9b78 + 1)) goto LAB_0c5cbde2;
  }
  lVar16 = _DAT_0f6e9b60;
  plVar19 = *(long **)(_DAT_0f6e9b60 + uVar18 * 8);
  if (plVar19 == (long *)0x0) {
    *plVar13 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = plVar13;
    *(undefined **)(lVar16 + uVar18 * 8) = &DAT_0f6e9b70;
    if (*plVar13 != 0) {
      uVar18 = *(ulong *)(*plVar13 + 8);
      if ((unaff_R13 & unaff_R13 - 1) == 0) {
        *(long **)(lVar16 + (uVar18 & unaff_R13 - 1) * 8) = plVar13;
      }
      else {
        if (unaff_R13 <= uVar18) {
          if ((uVar18 | unaff_R13) >> 0x20 == 0) {
            *(long **)(lVar16 + ((uVar18 & 0xffffffff) % (unaff_R13 & 0xffffffff)) * 8) = plVar13;
            goto LAB_0c5cc13b;
          }
          uVar18 = uVar18 % unaff_R13;
        }
        *(long **)(lVar16 + uVar18 * 8) = plVar13;
      }
    }
  }
  else {
    *plVar13 = *plVar19;
    *plVar19 = (long)plVar13;
  }
LAB_0c5cc13b:
  _DAT_0f6e9b78 = _DAT_0f6e9b78 + 1;
LAB_0c5cc142:
  plVar13 = *(long **)(unaff_retaddr + 0x90);
  if (plVar13 == (long *)(unaff_retaddr + 0x70)) {
    pcVar3 = *(code **)(*plVar13 + 0x20);
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc208;
    (*pcVar3)();
    bVar1 = *(byte *)(unaff_retaddr + 0x38);
joined_r0x0c5cc20d:
    if ((bVar1 & 1) != 0) goto LAB_0c5cc16f;
LAB_0c5cc1bf:
    if ((*(byte *)(unaff_retaddr + 0x20) & 1) == 0) goto LAB_0c5cc1c6;
LAB_0c5cc189:
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc19c;
    func_0x0412a280(*(undefined8 *)(unaff_retaddr + 0x30),
                    *(ulong *)(unaff_retaddr + 0x20) & 0xfffffffffffffffe);
    plVar13 = *(long **)(unaff_retaddr + 0xc0);
    if (plVar13 != (long *)(unaff_retaddr + 0xa0)) {
LAB_0c5cc1db:
      lVar16 = 0x28;
      if (plVar13 == (long *)0x0) {
        return;
      }
      goto LAB_0c5cc1e5;
    }
  }
  else {
    if (plVar13 == (long *)0x0) {
      bVar1 = *(byte *)(unaff_retaddr + 0x38);
      goto joined_r0x0c5cc20d;
    }
    pcVar3 = *(code **)(*plVar13 + 0x28);
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc168;
    (*pcVar3)();
    if ((*(byte *)(unaff_retaddr + 0x38) & 1) == 0) goto LAB_0c5cc1bf;
LAB_0c5cc16f:
    *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc182;
    func_0x0412a280(*(undefined8 *)(unaff_retaddr + 0x48),
                    *(ulong *)(unaff_retaddr + 0x38) & 0xfffffffffffffffe);
    if ((*(byte *)(unaff_retaddr + 0x20) & 1) != 0) goto LAB_0c5cc189;
LAB_0c5cc1c6:
    plVar13 = *(long **)(unaff_retaddr + 0xc0);
    if (plVar13 != (long *)(unaff_retaddr + 0xa0)) goto LAB_0c5cc1db;
  }
  lVar16 = 0x20;
LAB_0c5cc1e5:
  pcVar3 = *(code **)(*plVar13 + lVar16);
  *(undefined8 *)(unaff_retaddr + -8) = 0xc5cc1eb;
  (*pcVar3)();
  return;
}


