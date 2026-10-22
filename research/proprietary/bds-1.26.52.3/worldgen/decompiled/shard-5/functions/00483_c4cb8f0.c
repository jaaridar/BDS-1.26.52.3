/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cb8f0 (ELF vaddr 0xc4cb8f0)
 * Label: callee-of:0xc4b8460
 * Body:  [[0c5cb8f0, 0c5cbb5e] [0c5cbb60, 0c5cbb94] [0c5cbba0, 0c5cbc0c] [0c5cbc10, 0c5cbc2a] [0c5cbc30, 0c5cbf06] [0c5cbf10, 0c5cc2a0] [0c5cc2b0, 0c5cc366] [0c5cc3bf, 0c5cc403]]
 * Ghidra: FUN_0c5cb8f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c5cb8f0(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  bool bVar18;
  float fVar19;
  undefined1 uStack_f9;
  byte *pbStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long alStack_98 [4];
  long *plStack_78;
  long alStack_68 [4];
  long *plStack_48;
  
  func_0x0c5d7b20(&DAT_0f6e9b60,param_1);
  plVar7 = (long *)param_5[4];
  if (plVar7 == (long *)0x0) {
    plStack_48 = (long *)0x0;
  }
  else if (plVar7 == param_5) {
    plStack_48 = alStack_68;
    (**(code **)(*plVar7 + 0x18))();
  }
  else {
    param_5[4] = 0;
    plStack_48 = plVar7;
  }
  if ((*param_1 & 1) == 0) {
    uStack_d8 = param_1[2];
    uStack_e8 = *param_1;
    uStack_e0 = param_1[1];
  }
  else {
    func_0x0412e5e0(&uStack_e8,param_1[2],param_1[1]);
  }
  if ((*param_2 & 1) == 0) {
    uStack_c0 = param_2[2];
    uStack_d0 = *param_2;
    uStack_c8 = param_2[1];
  }
  else {
    func_0x0412e5e0(&uStack_d0,param_2[2],param_2[1]);
  }
  uStack_b8 = 0xf6e9020;
  uStack_a8 = 0xf6e9098;
  uStack_b0 = param_3;
  uStack_a0 = param_4;
  if (plStack_48 == (long *)0x0) {
    plStack_78 = (long *)0x0;
  }
  else if (plStack_48 == alStack_68) {
    plStack_78 = alStack_98;
    (**(code **)(*plStack_48 + 0x18))();
  }
  else {
    plStack_78 = (long *)(**(code **)(*plStack_48 + 0x10))();
  }
  pbStack_f8 = (byte *)((long)param_1 + 1);
  bVar18 = ((byte)*param_1 & 1) == 0;
  pbVar13 = (byte *)param_1[2];
  if (bVar18) {
    pbVar13 = pbStack_f8;
  }
  uVar15 = (ulong)(byte)((byte)*param_1 >> 1);
  if (!bVar18) {
    uVar15 = param_1[1];
  }
  uVar5 = func_0x04883620(&uStack_f9,pbVar13,uVar15);
  uVar15 = _DAT_0f6e9b68;
  if (_DAT_0f6e9b68 != 0) {
    uVar6 = _DAT_0f6e9b68 - (_DAT_0f6e9b68 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar6 >> 0x38 < 2) {
      uVar16 = _DAT_0f6e9b68 - 1 & uVar5;
    }
    else {
      uVar16 = uVar5;
      if (_DAT_0f6e9b68 <= uVar5) {
        if ((uVar5 | _DAT_0f6e9b68) >> 0x20 == 0) {
          uVar16 = (uVar5 & 0xffffffff) % (_DAT_0f6e9b68 & 0xffffffff);
        }
        else {
          uVar16 = uVar5 % _DAT_0f6e9b68;
        }
      }
    }
    plVar7 = *(long **)(_DAT_0f6e9b60 + uVar16 * 8);
    uStack_f0 = uVar16;
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (((byte)*param_1 & 1) == 0) {
        uVar9 = (ulong)(byte)((byte)*param_1 >> 1);
      }
      else {
        uVar9 = param_1[1];
        pbStack_f8 = (byte *)param_1[2];
      }
      if ((byte)(uVar6 >> 0x38) < 2) {
        uVar6 = _DAT_0f6e9b68 - 1;
        do {
          if (plVar7[1] == uVar5) {
            bVar1 = *(byte *)(plVar7 + 2);
            if ((bVar1 & 1) == 0) {
              uVar12 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar12 = plVar7[3];
            }
            if (uVar12 == uVar9) {
              if ((bVar1 & 1) == 0) {
                lVar10 = (long)plVar7 + 0x11;
              }
              else {
                lVar10 = plVar7[4];
              }
              iVar4 = func_0x0eee3000(lVar10,pbStack_f8,uVar9);
              uVar16 = uStack_f0;
              if (iVar4 == 0) goto LAB_0c5cc142;
            }
          }
          else if ((plVar7[1] & uVar6) != uVar16) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar5) {
            bVar1 = *(byte *)(plVar7 + 2);
            if ((bVar1 & 1) == 0) {
              uVar6 = (ulong)(bVar1 >> 1);
            }
            else {
              uVar6 = plVar7[3];
            }
            if (uVar6 == uVar9) {
              if ((bVar1 & 1) == 0) {
                lVar10 = (long)plVar7 + 0x11;
              }
              else {
                lVar10 = plVar7[4];
              }
              iVar4 = func_0x0eee3000(lVar10,pbStack_f8,uVar9);
              uVar16 = uStack_f0;
              if (iVar4 == 0) goto LAB_0c5cc142;
            }
          }
          else {
            if (uVar15 <= uVar6) {
              if ((uVar6 | uVar15) >> 0x20 == 0) {
                uVar6 = (uVar6 & 0xffffffff) % (uVar15 & 0xffffffff);
              }
              else {
                uVar6 = uVar6 % uVar15;
              }
            }
            if (uVar6 != uVar16) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar7 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  *plVar7 = 0;
  plVar7[1] = uVar5;
  if ((*param_1 & 1) == 0) {
    plVar7[4] = param_1[2];
    uVar6 = param_1[1];
    plVar7[2] = *param_1;
    plVar7[3] = uVar6;
  }
  else {
    func_0x0412e5e0(plVar7 + 2,param_1[2],param_1[1]);
  }
  plVar7[8] = uStack_d8;
  plVar7[6] = uStack_e8;
  plVar7[7] = uStack_e0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  plVar7[0xb] = uStack_c0;
  plVar7[9] = uStack_d0;
  plVar7[10] = uStack_c8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  *(undefined4 *)(plVar7 + 0xe) = (undefined4)uStack_a8;
  *(undefined4 *)((long)plVar7 + 0x74) = uStack_a8._4_4_;
  *(undefined4 *)(plVar7 + 0xf) = (undefined4)uStack_a0;
  *(undefined4 *)((long)plVar7 + 0x7c) = uStack_a0._4_4_;
  *(undefined4 *)(plVar7 + 0xc) = (undefined4)uStack_b8;
  *(undefined4 *)((long)plVar7 + 100) = uStack_b8._4_4_;
  *(undefined4 *)(plVar7 + 0xd) = (undefined4)uStack_b0;
  *(undefined4 *)((long)plVar7 + 0x6c) = uStack_b0._4_4_;
  if (plStack_78 == (long *)0x0) {
    plVar7[0x14] = 0;
  }
  else if (plStack_78 == alStack_98) {
    plVar7[0x14] = (long)(plVar7 + 0x10);
    (**(code **)(*plStack_78 + 0x18))();
  }
  else {
    plVar7[0x14] = (long)plStack_78;
    plStack_78 = (long *)0x0;
  }
  if ((long)uVar15 < 0) {
    fVar19 = (float)uVar15;
    if (uVar15 != 0) goto LAB_0c5cbdd1;
LAB_0c5cbde2:
    uVar6 = 1;
    if (2 < uVar15) {
      uVar6 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar6 = uVar6 | uVar15 * 2;
    fVar19 = (float)func_0x0eee3ab0((float)(_DAT_0f6e9b78 + 1) / _DAT_0f6e9b80);
    uVar15 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
    if (uVar15 < uVar6) {
      uVar15 = uVar6;
    }
    uVar6 = 2;
    if ((uVar15 == 1) || (uVar6 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
      bVar18 = uVar6 < _DAT_0f6e9b68;
      if (uVar6 <= _DAT_0f6e9b68) goto LAB_0c5cbf73;
LAB_0c5cbe61:
      if (uVar6 >> 0x3d != 0) {
        uVar11 = FUN_04882eb0();
        uVar11 = func_0x04882e20(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        func_0x0412a280(plVar7,0xb0);
        func_0x0c5d3a10(&uStack_e8);
        lVar10 = 0x20;
        if ((plStack_48 == alStack_68) || (lVar10 = 0x28, plStack_48 != (long *)0x0)) {
          (**(code **)(*plStack_48 + lVar10))();
        }
        uVar11 = func_0x0eee2d70(uVar11);
        func_0x04882e20(uVar11);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar10 = uVar6 * 8;
      lVar8 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
      if (lVar8 == 0) {
        func_0x0eec74c0(lVar10,0);
      }
      lVar3 = _DAT_0f6e9b60;
      bVar18 = _DAT_0f6e9b60 != 0;
      _DAT_0f6e9b60 = lVar8;
      if (bVar18) {
        func_0x0412a280(lVar3,_DAT_0f6e9b68 << 3);
      }
      lVar8 = _DAT_0f6e9b60;
      _DAT_0f6e9b68 = uVar6;
      func_0x0eee2dd0(_DAT_0f6e9b60,0,lVar10);
      plVar14 = _DAT_0f6e9b70;
      if (_DAT_0f6e9b70 != (long *)0x0) {
        uVar16 = _DAT_0f6e9b70[1];
        uVar15 = uVar6 - 1;
        if ((uVar6 & uVar15) == 0) {
          *(undefined **)(lVar8 + (uVar16 & uVar15) * 8) = &DAT_0f6e9b70;
          uVar6 = uVar16 & uVar15;
          while (plVar17 = plVar14, plVar14 = (long *)*plVar17, plVar14 != (long *)0x0) {
            uVar16 = plVar14[1] & uVar15;
            if (uVar16 != uVar6) {
              if (*(long *)(lVar8 + uVar16 * 8) == 0) {
                *(long **)(lVar8 + uVar16 * 8) = plVar17;
                uVar6 = uVar16;
              }
              else {
                *plVar17 = *plVar14;
                *plVar14 = **(long **)(lVar8 + uVar16 * 8);
                **(undefined8 **)(lVar8 + uVar16 * 8) = plVar14;
                plVar14 = plVar17;
              }
            }
          }
        }
        else {
          if (uVar6 <= uVar16) {
            if ((uVar16 | uVar6) >> 0x20 == 0) {
              uVar16 = (uVar16 & 0xffffffff) % (uVar6 & 0xffffffff);
            }
            else {
              uVar16 = uVar16 % uVar6;
            }
          }
          *(undefined **)(lVar8 + uVar16 * 8) = &DAT_0f6e9b70;
          plVar17 = (long *)*plVar14;
          while (plVar17 != (long *)0x0) {
            uVar15 = plVar17[1];
            if (uVar6 <= uVar15) {
              if ((uVar15 | uVar6) >> 0x20 == 0) {
                uVar15 = (uVar15 & 0xffffffff) % (uVar6 & 0xffffffff);
              }
              else {
                uVar15 = uVar15 % uVar6;
              }
            }
            if (uVar15 != uVar16) {
              if (*(long *)(lVar8 + uVar15 * 8) == 0) {
                *(long **)(lVar8 + uVar15 * 8) = plVar14;
                uVar16 = uVar15;
              }
              else {
                *plVar14 = *plVar17;
                *plVar17 = **(long **)(lVar8 + uVar15 * 8);
                **(undefined8 **)(lVar8 + uVar15 * 8) = plVar17;
                plVar17 = plVar14;
              }
            }
            plVar14 = plVar17;
            plVar17 = (long *)*plVar14;
          }
        }
      }
    }
    else {
      uVar6 = func_0x0412c3f0();
      bVar18 = uVar6 < _DAT_0f6e9b68;
      if (_DAT_0f6e9b68 < uVar6) goto LAB_0c5cbe61;
LAB_0c5cbf73:
      uVar15 = _DAT_0f6e9b68;
      if (bVar18) {
        fVar19 = (float)func_0x0eee3ab0((float)_DAT_0f6e9b78 / _DAT_0f6e9b80);
        uVar16 = (long)(fVar19 - _DAT_01198778) & (long)fVar19 >> 0x3f | (long)fVar19;
        if ((uVar15 < 3) ||
           (uVar9 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
           uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333),
           1 < (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar16 = func_0x0412c3f0(uVar16);
          lVar10 = _DAT_0f6e9b60;
          if (uVar16 < uVar6) {
            uVar16 = uVar6;
          }
        }
        else {
          if (1 < uVar16) {
            lVar10 = 0x3f;
            if (uVar16 - 1 != 0) {
              for (; uVar16 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            uVar16 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
          }
          lVar10 = _DAT_0f6e9b60;
          if (uVar16 < uVar6) {
            uVar16 = uVar6;
          }
        }
        uVar6 = uVar16;
        _DAT_0f6e9b60 = lVar10;
        if (uVar6 < uVar15) {
          if (uVar6 != 0) goto LAB_0c5cbe61;
          _DAT_0f6e9b60 = 0;
          if (lVar10 != 0) {
            func_0x0412a280(lVar10,_DAT_0f6e9b68 << 3);
          }
          _DAT_0f6e9b68 = 0;
        }
      }
    }
    uVar15 = _DAT_0f6e9b68;
    if ((_DAT_0f6e9b68 & _DAT_0f6e9b68 - 1) == 0) {
      uVar6 = uVar5 & _DAT_0f6e9b68 - 1;
    }
    else {
      uVar6 = uVar5;
      if (_DAT_0f6e9b68 <= uVar5) {
        if ((uVar5 | _DAT_0f6e9b68) >> 0x20 == 0) {
          uVar6 = (uVar5 & 0xffffffff) % (_DAT_0f6e9b68 & 0xffffffff);
        }
        else {
          uVar6 = uVar5 % _DAT_0f6e9b68;
        }
      }
    }
  }
  else {
    fVar19 = (float)(long)uVar15;
    if (uVar15 == 0) goto LAB_0c5cbde2;
LAB_0c5cbdd1:
    uVar6 = uStack_f0;
    if (fVar19 * _DAT_0f6e9b80 < (float)(_DAT_0f6e9b78 + 1)) goto LAB_0c5cbde2;
  }
  lVar10 = _DAT_0f6e9b60;
  plVar14 = *(long **)(_DAT_0f6e9b60 + uVar6 * 8);
  if (plVar14 == (long *)0x0) {
    *plVar7 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = plVar7;
    *(undefined **)(lVar10 + uVar6 * 8) = &DAT_0f6e9b70;
    if (*plVar7 != 0) {
      uVar5 = *(ulong *)(*plVar7 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        *(long **)(lVar10 + (uVar5 & uVar15 - 1) * 8) = plVar7;
      }
      else {
        if (uVar15 <= uVar5) {
          if ((uVar5 | uVar15) >> 0x20 == 0) {
            *(long **)(lVar10 + ((uVar5 & 0xffffffff) % (uVar15 & 0xffffffff)) * 8) = plVar7;
            goto LAB_0c5cc13b;
          }
          uVar5 = uVar5 % uVar15;
        }
        *(long **)(lVar10 + uVar5 * 8) = plVar7;
      }
    }
  }
  else {
    *plVar7 = *plVar14;
    *plVar14 = (long)plVar7;
  }
LAB_0c5cc13b:
  _DAT_0f6e9b78 = _DAT_0f6e9b78 + 1;
LAB_0c5cc142:
  if (plStack_78 == alStack_98) {
    (**(code **)(*plStack_78 + 0x20))();
joined_r0x0c5cc20d:
    if ((uStack_d0 & 1) != 0) goto LAB_0c5cc16f;
LAB_0c5cc1bf:
    if ((uStack_e8 & 1) == 0) goto LAB_0c5cc1c6;
LAB_0c5cc189:
    func_0x0412a280(uStack_d8,uStack_e8 & 0xfffffffffffffffe);
    if (plStack_48 != alStack_68) {
LAB_0c5cc1db:
      lVar10 = 0x28;
      if (plStack_48 == (long *)0x0) {
        return;
      }
      goto LAB_0c5cc1e5;
    }
  }
  else {
    if (plStack_78 == (long *)0x0) goto joined_r0x0c5cc20d;
    (**(code **)(*plStack_78 + 0x28))();
    if ((uStack_d0 & 1) == 0) goto LAB_0c5cc1bf;
LAB_0c5cc16f:
    func_0x0412a280(uStack_c0,uStack_d0 & 0xfffffffffffffffe);
    if ((uStack_e8 & 1) != 0) goto LAB_0c5cc189;
LAB_0c5cc1c6:
    if (plStack_48 != alStack_68) goto LAB_0c5cc1db;
  }
  lVar10 = 0x20;
LAB_0c5cc1e5:
  (**(code **)(*plStack_48 + lVar10))();
  return;
}


