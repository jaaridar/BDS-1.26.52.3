/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc5cbb10
 * Label: JigsawBlock::vslot72
 * Body:  [[0c5cbb10, 0c5cbb5e] [0c5cbb60, 0c5cbb94] [0c5cbba0, 0c5cbc0c] [0c5cbc10, 0c5cbc2a] [0c5cbc30, 0c5cbdac] [0c5cbdbe, 0c5cbdd0] [0c5cbf70, 0c5cbf70] [0c5cc320, 0c5cc330]]
 * Ghidra: wg_JigsawBlock__vslot72
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_JigsawBlock__vslot72(undefined8 param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  ulong in_RAX;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong unaff_RBP;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  byte *unaff_R12;
  ulong unaff_R13;
  bool bVar15;
  float fVar16;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  long *in_stack_00000090;
  long *in_stack_000000c0;
  
  if (((in_RAX & 0x18) != 0) &&
     (plVar5 = *(long **)(in_RAX & 0xffffffffffffff18), plVar5 != (long *)0x0)) {
    if ((*unaff_R12 & 1) == 0) {
      uVar10 = (ulong)(*unaff_R12 >> 1);
    }
    else {
      uVar10 = *(ulong *)(unaff_R12 + 8);
      in_stack_00000010 = *(undefined8 *)(unaff_R12 + 0x10);
    }
    if (param_4 < 2) {
      do {
        if (plVar5[1] == unaff_RBP) {
          bVar1 = *(byte *)(plVar5 + 2);
          if ((bVar1 & 1) == 0) {
            uVar12 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar12 = plVar5[3];
          }
          if (uVar12 == uVar10) {
            if ((bVar1 & 1) == 0) {
              lVar8 = (long)plVar5 + 0x11;
            }
            else {
              lVar8 = plVar5[4];
            }
            iVar4 = func_0x0eee3000(lVar8,in_stack_00000010,uVar10);
            param_2 = in_stack_00000018;
            if (iVar4 == 0) goto LAB_0c5cc142;
          }
        }
        else if ((plVar5[1] & unaff_R13 - 1) != param_2) break;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        uVar12 = plVar5[1];
        if (uVar12 == unaff_RBP) {
          bVar1 = *(byte *)(plVar5 + 2);
          if ((bVar1 & 1) == 0) {
            uVar12 = (ulong)(bVar1 >> 1);
          }
          else {
            uVar12 = plVar5[3];
          }
          if (uVar12 == uVar10) {
            if ((bVar1 & 1) == 0) {
              lVar8 = (long)plVar5 + 0x11;
            }
            else {
              lVar8 = plVar5[4];
            }
            iVar4 = func_0x0eee3000(lVar8,in_stack_00000010,uVar10);
            param_2 = in_stack_00000018;
            if (iVar4 == 0) goto LAB_0c5cc142;
          }
        }
        else {
          if (unaff_R13 <= uVar12) {
            if ((uVar12 | unaff_R13) >> 0x20 == 0) {
              uVar12 = (uVar12 & 0xffffffff) % (unaff_R13 & 0xffffffff);
            }
            else {
              uVar12 = uVar12 % unaff_R13;
            }
          }
          if (uVar12 != param_2) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xb0);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0xb0,0);
  }
  *plVar5 = 0;
  plVar5[1] = unaff_RBP;
  if ((*unaff_R12 & 1) == 0) {
    plVar5[4] = *(long *)(unaff_R12 + 0x10);
    lVar8 = *(long *)(unaff_R12 + 8);
    plVar5[2] = *(long *)unaff_R12;
    plVar5[3] = lVar8;
  }
  else {
    func_0x0412e5e0(plVar5 + 2,*(undefined8 *)(unaff_R12 + 0x10),*(undefined8 *)(unaff_R12 + 8));
  }
  plVar5[8] = in_stack_00000030;
  plVar5[6] = in_stack_00000020;
  plVar5[7] = in_stack_00000028;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  plVar5[0xb] = in_stack_00000048;
  plVar5[9] = in_stack_00000038;
  plVar5[10] = in_stack_00000040;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  *(undefined4 *)(plVar5 + 0xe) = uStack0000000000000060;
  *(undefined4 *)((long)plVar5 + 0x74) = uStack0000000000000064;
  *(undefined4 *)(plVar5 + 0xf) = uStack0000000000000068;
  *(undefined4 *)((long)plVar5 + 0x7c) = uStack000000000000006c;
  *(undefined4 *)(plVar5 + 0xc) = uStack0000000000000050;
  *(undefined4 *)((long)plVar5 + 100) = uStack0000000000000054;
  *(undefined4 *)(plVar5 + 0xd) = uStack0000000000000058;
  *(undefined4 *)((long)plVar5 + 0x6c) = uStack000000000000005c;
  if (in_stack_00000090 == (long *)0x0) {
    plVar5[0x14] = 0;
  }
  else if (in_stack_00000090 == (long *)&stack0x00000070) {
    plVar5[0x14] = (long)(plVar5 + 0x10);
    (**(code **)(*in_stack_00000090 + 0x18))();
  }
  else {
    plVar5[0x14] = (long)in_stack_00000090;
    in_stack_00000090 = (long *)0x0;
  }
  if ((long)unaff_R13 < 0) {
    fVar16 = (float)unaff_R13;
    if (unaff_R13 != 0) goto LAB_0c5cbdd1;
LAB_0c5cbde2:
    uVar10 = 1;
    if (2 < unaff_R13) {
      uVar10 = (ulong)((unaff_R13 & unaff_R13 - 1) != 0);
    }
    uVar10 = uVar10 | unaff_R13 * 2;
    fVar16 = (float)func_0x0eee3ab0((float)(_DAT_0f6e9b78 + 1) / _DAT_0f6e9b80);
    uVar12 = (long)(fVar16 - _DAT_01198778) & (long)fVar16 >> 0x3f | (long)fVar16;
    if (uVar12 < uVar10) {
      uVar12 = uVar10;
    }
    uVar10 = 2;
    if ((uVar12 == 1) || (uVar10 = uVar12, (uVar12 & uVar12 - 1) == 0)) {
      bVar15 = uVar10 < _DAT_0f6e9b68;
      if (uVar10 <= _DAT_0f6e9b68) goto LAB_0c5cbf73;
LAB_0c5cbe61:
      if (uVar10 >> 0x3d != 0) {
        uVar9 = func_0x04882eb0();
        uVar9 = func_0x04882e20(uVar9);
        uVar9 = func_0x04882e20(uVar9);
        func_0x0412a280(plVar5,0xb0);
        func_0x0c5d3a10(&stack0x00000020);
        lVar8 = 0x20;
        if ((in_stack_000000c0 == (long *)&stack0x000000a0) ||
           (lVar8 = 0x28, in_stack_000000c0 != (long *)0x0)) {
          (**(code **)(*in_stack_000000c0 + lVar8))();
        }
        uVar9 = func_0x0eee2d70(uVar9);
        func_0x04882e20(uVar9);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = uVar10 * 8;
      lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar8);
      if (lVar6 == 0) {
        func_0x0eec74c0(lVar8,0);
      }
      lVar3 = _DAT_0f6e9b60;
      bVar15 = _DAT_0f6e9b60 != 0;
      _DAT_0f6e9b60 = lVar6;
      if (bVar15) {
        func_0x0412a280(lVar3,_DAT_0f6e9b68 << 3);
      }
      lVar6 = _DAT_0f6e9b60;
      _DAT_0f6e9b68 = uVar10;
      func_0x0eee2dd0(_DAT_0f6e9b60,0,lVar8);
      plVar11 = _DAT_0f6e9b70;
      if (_DAT_0f6e9b70 != (long *)0x0) {
        uVar13 = _DAT_0f6e9b70[1];
        uVar12 = uVar10 - 1;
        if ((uVar10 & uVar12) == 0) {
          *(undefined **)(lVar6 + (uVar13 & uVar12) * 8) = &DAT_0f6e9b70;
          uVar10 = uVar13 & uVar12;
          while (plVar14 = plVar11, plVar11 = (long *)*plVar14, plVar11 != (long *)0x0) {
            uVar13 = plVar11[1] & uVar12;
            if (uVar13 != uVar10) {
              if (*(long *)(lVar6 + uVar13 * 8) == 0) {
                *(long **)(lVar6 + uVar13 * 8) = plVar14;
                uVar10 = uVar13;
              }
              else {
                *plVar14 = *plVar11;
                *plVar11 = **(long **)(lVar6 + uVar13 * 8);
                **(undefined8 **)(lVar6 + uVar13 * 8) = plVar11;
                plVar11 = plVar14;
              }
            }
          }
        }
        else {
          if (uVar10 <= uVar13) {
            if ((uVar13 | uVar10) >> 0x20 == 0) {
              uVar13 = (uVar13 & 0xffffffff) % (uVar10 & 0xffffffff);
            }
            else {
              uVar13 = uVar13 % uVar10;
            }
          }
          *(undefined **)(lVar6 + uVar13 * 8) = &DAT_0f6e9b70;
          plVar14 = (long *)*plVar11;
          while (plVar14 != (long *)0x0) {
            uVar12 = plVar14[1];
            if (uVar10 <= uVar12) {
              if ((uVar12 | uVar10) >> 0x20 == 0) {
                uVar12 = (uVar12 & 0xffffffff) % (uVar10 & 0xffffffff);
              }
              else {
                uVar12 = uVar12 % uVar10;
              }
            }
            if (uVar12 != uVar13) {
              if (*(long *)(lVar6 + uVar12 * 8) == 0) {
                *(long **)(lVar6 + uVar12 * 8) = plVar11;
                uVar13 = uVar12;
              }
              else {
                *plVar11 = *plVar14;
                *plVar14 = **(long **)(lVar6 + uVar12 * 8);
                **(undefined8 **)(lVar6 + uVar12 * 8) = plVar14;
                plVar14 = plVar11;
              }
            }
            plVar11 = plVar14;
            plVar14 = (long *)*plVar11;
          }
        }
      }
    }
    else {
      uVar10 = func_0x0412c3f0();
      bVar15 = uVar10 < _DAT_0f6e9b68;
      if (_DAT_0f6e9b68 < uVar10) goto LAB_0c5cbe61;
LAB_0c5cbf73:
      uVar12 = _DAT_0f6e9b68;
      if (bVar15) {
        fVar16 = (float)func_0x0eee3ab0((float)_DAT_0f6e9b78 / _DAT_0f6e9b80);
        uVar13 = (long)(fVar16 - _DAT_01198778) & (long)fVar16 >> 0x3f | (long)fVar16;
        if ((uVar12 < 3) ||
           (uVar7 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
           uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333),
           1 < (byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar13 = func_0x0412c3f0(uVar13);
          lVar8 = _DAT_0f6e9b60;
          if (uVar13 < uVar10) {
            uVar13 = uVar10;
          }
        }
        else {
          if (1 < uVar13) {
            lVar8 = 0x3f;
            if (uVar13 - 1 != 0) {
              for (; uVar13 - 1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar13 = 1L << (-((byte)lVar8 ^ 0x3f) & 0x3f);
          }
          lVar8 = _DAT_0f6e9b60;
          if (uVar13 < uVar10) {
            uVar13 = uVar10;
          }
        }
        uVar10 = uVar13;
        _DAT_0f6e9b60 = lVar8;
        if (uVar10 < uVar12) {
          if (uVar10 != 0) goto LAB_0c5cbe61;
          _DAT_0f6e9b60 = 0;
          if (lVar8 != 0) {
            func_0x0412a280(lVar8,_DAT_0f6e9b68 << 3);
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
    fVar16 = (float)(long)unaff_R13;
    if (unaff_R13 == 0) goto LAB_0c5cbde2;
LAB_0c5cbdd1:
    if (fVar16 * _DAT_0f6e9b80 < (float)(_DAT_0f6e9b78 + 1)) goto LAB_0c5cbde2;
  }
  lVar8 = _DAT_0f6e9b60;
  plVar11 = *(long **)(_DAT_0f6e9b60 + in_stack_00000018 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar5 = (long)_DAT_0f6e9b70;
    _DAT_0f6e9b70 = plVar5;
    *(undefined **)(lVar8 + in_stack_00000018 * 8) = &DAT_0f6e9b70;
    if (*plVar5 != 0) {
      uVar10 = *(ulong *)(*plVar5 + 8);
      if ((unaff_R13 & unaff_R13 - 1) == 0) {
        *(long **)(lVar8 + (uVar10 & unaff_R13 - 1) * 8) = plVar5;
      }
      else {
        if (unaff_R13 <= uVar10) {
          if ((uVar10 | unaff_R13) >> 0x20 == 0) {
            *(long **)(lVar8 + ((uVar10 & 0xffffffff) % (unaff_R13 & 0xffffffff)) * 8) = plVar5;
            goto LAB_0c5cc13b;
          }
          uVar10 = uVar10 % unaff_R13;
        }
        *(long **)(lVar8 + uVar10 * 8) = plVar5;
      }
    }
  }
  else {
    *plVar5 = *plVar11;
    *plVar11 = (long)plVar5;
  }
LAB_0c5cc13b:
  _DAT_0f6e9b78 = _DAT_0f6e9b78 + 1;
LAB_0c5cc142:
  if (in_stack_00000090 == (long *)&stack0x00000070) {
    (**(code **)(*in_stack_00000090 + 0x20))();
joined_r0x0c5cc20d:
    if ((in_stack_00000038 & 1) != 0) goto LAB_0c5cc16f;
LAB_0c5cc1bf:
    if ((in_stack_00000020 & 1) == 0) goto LAB_0c5cc1c6;
LAB_0c5cc189:
    func_0x0412a280(in_stack_00000030,in_stack_00000020 & 0xfffffffffffffffe);
    if (in_stack_000000c0 != (long *)&stack0x000000a0) {
LAB_0c5cc1db:
      lVar8 = 0x28;
      if (in_stack_000000c0 == (long *)0x0) {
        return;
      }
      goto LAB_0c5cc1e5;
    }
  }
  else {
    if (in_stack_00000090 == (long *)0x0) goto joined_r0x0c5cc20d;
    (**(code **)(*in_stack_00000090 + 0x28))();
    if ((in_stack_00000038 & 1) == 0) goto LAB_0c5cc1bf;
LAB_0c5cc16f:
    func_0x0412a280(in_stack_00000048,in_stack_00000038 & 0xfffffffffffffffe);
    if ((in_stack_00000020 & 1) != 0) goto LAB_0c5cc189;
LAB_0c5cc1c6:
    if (in_stack_000000c0 != (long *)&stack0x000000a0) goto LAB_0c5cc1db;
  }
  lVar8 = 0x20;
LAB_0c5cc1e5:
  (**(code **)(*in_stack_000000c0 + lVar8))();
  return;
}


