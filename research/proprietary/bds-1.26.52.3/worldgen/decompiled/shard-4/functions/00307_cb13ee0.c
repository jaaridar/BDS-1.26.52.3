/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc13ee0 (ELF vaddr 0xcb13ee0)
 * Label: caller-of-callee
 * Body:  [[0cc13ee0, 0cc1412a] [0cc14130, 0cc141fe] [0cc14200, 0cc1428a] [0cc14290, 0cc1431e] [0cc14320, 0cc14e5c] [0cc14e60, 0cc14eb1] [0cc14ec0, 0cc14f4a] [0cc14f50, 0cc14f7c] [0cc14f80, 0cc14f8d] [0cc14f90, 0cc14fcc] [0cc14fd0, 0cc1523f] [0cc1525d, 0cc1528a]]
 * Ghidra: FUN_0cc13ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc13ee0(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  byte *pbVar22;
  long *plVar23;
  long lVar24;
  bool bVar25;
  float fVar26;
  long *plStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  uint *puStack_68;
  byte *pbStack_60;
  undefined4 uStack_54;
  long lStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  
  plStack_a0 = (long *)0x0;
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    uStack_88 = (uint)*(undefined8 *)(param_2 + 0x60);
    uStack_84 = (uint)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    uStack_98 = *(uint *)(param_2 + 0x50);
    uStack_94 = *(uint *)(param_2 + 0x54);
    uStack_90 = *(uint *)(param_2 + 0x58);
    uStack_8c = *(uint *)(param_2 + 0x5c);
    lStack_80 = 0;
    uVar12 = (ulong)(byte)uStack_98;
    if ((uStack_98 & 1) == 0) goto LAB_0cc13f2a;
LAB_0cc13f57:
    if (CONCAT44(uStack_8c,uStack_90) != 0) goto LAB_0cc13f65;
LAB_0cc14055:
    lStack_80 = 0;
    plVar23 = (long *)0x0;
  }
  else {
    func_0x0412e5e0(&uStack_98,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58));
    lStack_80 = 0;
    uVar12 = (ulong)(byte)uStack_98;
    if ((uStack_98 & 1) != 0) goto LAB_0cc13f57;
LAB_0cc13f2a:
    if (uVar12 >> 1 == 0) goto LAB_0cc14055;
LAB_0cc13f65:
    lStack_80 = 0;
    if ((uVar12 & 1) == 0) {
      pbVar22 = (byte *)((long)&uStack_98 + 1);
      if (pbVar22 != (byte *)0x0) goto LAB_0cc13f86;
      goto LAB_0cc14055;
    }
    pbVar22 = (byte *)CONCAT44(uStack_84,uStack_88);
    if (pbVar22 == (byte *)0x0) goto LAB_0cc14055;
LAB_0cc13f86:
    if (*pbVar22 == 0) goto LAB_0cc14055;
    plVar23 = (long *)0xcbf29ce484222325;
    uVar12 = func_0x0eee2e90(pbVar22);
    if (uVar12 != 0) {
      uVar21 = (ulong)((uint)uVar12 & 7);
      if (7 < uVar12) {
        uVar12 = uVar12 & 0xfffffffffffffff8;
        do {
          plVar23 = (long *)(((((((((long)plVar23 * 0x100000001b3 ^ (ulong)*pbVar22) * 0x100000001b3
                                  ^ (ulong)pbVar22[1]) * 0x100000001b3 ^ (ulong)pbVar22[2]) *
                                 0x100000001b3 ^ (ulong)pbVar22[3]) * 0x100000001b3 ^
                               (ulong)pbVar22[4]) * 0x100000001b3 ^ (ulong)pbVar22[5]) *
                              0x100000001b3 ^ (ulong)pbVar22[6]) * 0x100000001b3 ^ (ulong)pbVar22[7]
                            );
          pbVar22 = pbVar22 + 8;
          uVar12 = uVar12 - 8;
        } while (uVar12 != 0);
      }
      if (uVar21 != 0) {
        uVar12 = 0;
        do {
          plVar23 = (long *)((long)plVar23 * 0x100000001b3 ^ (ulong)pbVar22[uVar12]);
          uVar12 = uVar12 + 1;
        } while (uVar21 != uVar12);
      }
    }
  }
  plStack_a0 = plVar23;
  lVar8 = func_0x0cc422f0(0xf6ff9e0,&plStack_a0,0,0,0);
  if ((uStack_98 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_84,uStack_88),CONCAT44(uStack_94,uStack_98) & 0xfffffffffffffffe
                   );
  }
  if (lVar8 == 0) {
    uVar12 = 1;
    if ((ulong)*(byte *)(param_2 + 0x6c) <= (ulong)(_DAT_0f71e698 - _DAT_0f71e690 >> 3)) {
      uVar12 = (ulong)*(byte *)(param_2 + 0x6c);
    }
    uStack_54 = *(undefined4 *)(param_2 + 0x68);
    uStack_48 = *(undefined8 *)(_DAT_0f71e690 + uVar12 * 8);
    puStack_68 = (uint *)(param_2 + 0x50);
    if ((DAT_0f6ff830 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6ff830), iVar7 != 0)) {
      func_0x0cbe9be0();
      __cxa_atexit(&UNK_0cbea060,&DAT_0f6ff808,0xf53dab8);
      func_0x0410844d(&DAT_0f6ff830);
    }
    if ((DAT_0f6ff8c0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6ff8c0), iVar7 != 0)) {
      func_0x0cbeaab0(&UNK_0f3f5340);
      __cxa_atexit(&UNK_0cbeb2d0,&DAT_0f6ff898,0xf53dab8);
      func_0x0410844d(&DAT_0f6ff8c0);
    }
    pbVar22 = *(byte **)(param_2 + 0x70);
    lStack_70 = param_2;
    pbStack_60 = *(byte **)(param_2 + 0x78);
    if (pbVar22 != *(byte **)(param_2 + 0x78)) {
      lStack_50 = param_2 + 0x70;
      do {
        bVar25 = (*pbVar22 & 1) == 0;
        pbVar17 = *(byte **)(pbVar22 + 0x10);
        if (bVar25) {
          pbVar17 = pbVar22 + 1;
        }
        uVar12 = (ulong)(*pbVar22 >> 1);
        if (!bVar25) {
          uVar12 = *(ulong *)(pbVar22 + 8);
        }
        uVar9 = func_0x04883620(&plStack_a0,pbVar17,uVar12);
        uVar21 = _DAT_0f6ff810;
        if (_DAT_0f6ff810 != 0) {
          uVar14 = _DAT_0f6ff810 - (_DAT_0f6ff810 >> 1 & 0x5555555555555555);
          uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
          uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar14 >> 0x38 < 2) {
            uVar16 = _DAT_0f6ff810 - 1 & uVar9;
            plVar23 = *(long **)(_DAT_0f6ff808 + uVar16 * 8);
          }
          else if (uVar9 < _DAT_0f6ff810) {
            plVar23 = *(long **)(_DAT_0f6ff808 + uVar9 * 8);
            uVar16 = uVar9;
          }
          else if ((uVar9 | _DAT_0f6ff810) >> 0x20 == 0) {
            uVar16 = (uVar9 & 0xffffffff) % (_DAT_0f6ff810 & 0xffffffff);
            plVar23 = *(long **)(_DAT_0f6ff808 + uVar16 * 8);
          }
          else {
            plVar23 = *(long **)(_DAT_0f6ff808 + (uVar9 % _DAT_0f6ff810) * 8);
            uVar16 = uVar9 % _DAT_0f6ff810;
          }
          if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
            uStack_78 = uVar16;
            if ((byte)(uVar14 >> 0x38) < 2) {
              uVar21 = _DAT_0f6ff810 - 1;
              do {
                if (uVar9 == plVar23[1]) {
                  if ((plVar23[3] == uVar12) &&
                     (iVar7 = bcmp(plVar23[2],pbVar17,uVar12), uVar16 = uStack_78, iVar7 == 0))
                  goto LAB_0cc1433b;
                }
                else if ((plVar23[1] & uVar21) != uVar16) break;
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
            else {
              do {
                uVar14 = plVar23[1];
                if (uVar9 == uVar14) {
                  if ((plVar23[3] == uVar12) &&
                     (iVar7 = bcmp(plVar23[2],pbVar17,uVar12), uVar16 = uStack_78, iVar7 == 0))
                  goto LAB_0cc1433b;
                }
                else {
                  if (uVar21 <= uVar14) {
                    if ((uVar14 | uVar21) >> 0x20 == 0) {
                      uVar14 = (uVar14 & 0xffffffff) % (uVar21 & 0xffffffff);
                    }
                    else {
                      uVar14 = uVar14 % uVar21;
                    }
                  }
                  if (uVar14 != uVar16) break;
                }
                plVar23 = (long *)*plVar23;
              } while (plVar23 != (long *)0x0);
            }
          }
        }
        pbVar22 = pbVar22 + 0x18;
      } while (pbVar22 != pbStack_60);
    }
    goto LAB_0cc14b72;
  }
  if (*(char *)(param_2 + 0x110) == '\0') {
    return;
  }
  goto LAB_0cc14e89;
LAB_0cc1433b:
  bVar25 = (*pbVar22 & 1) != 0;
  pbVar17 = pbVar22 + 1;
  if (bVar25) {
    pbVar17 = *(byte **)(pbVar22 + 0x10);
  }
  uVar12 = (ulong)(*pbVar22 >> 1);
  if (bVar25) {
    uVar12 = *(ulong *)(pbVar22 + 8);
  }
  uVar9 = func_0x04883620(&plStack_a0,pbVar17,uVar12);
  uVar21 = _DAT_0f6ff8a0;
  if (_DAT_0f6ff8a0 != 0) {
    uVar14 = _DAT_0f6ff8a0 - (_DAT_0f6ff8a0 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
    uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar14 >> 0x38 < 2) {
      uVar16 = _DAT_0f6ff8a0 - 1 & uVar9;
    }
    else {
      uVar16 = uVar9;
      if (_DAT_0f6ff8a0 <= uVar9) {
        if ((uVar9 | _DAT_0f6ff8a0) >> 0x20 == 0) {
          uVar16 = (uVar9 & 0xffffffff) % (_DAT_0f6ff8a0 & 0xffffffff);
        }
        else {
          uVar16 = uVar9 % _DAT_0f6ff8a0;
        }
      }
    }
    plVar10 = *(long **)(_DAT_0f6ff898 + uVar16 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if ((byte)(uVar14 >> 0x38) < 2) {
        uVar21 = _DAT_0f6ff8a0 - 1;
        do {
          if (uVar9 == plVar10[1]) {
            if ((plVar10[3] == uVar12) && (iVar7 = bcmp(plVar10[2],pbVar17,uVar12), iVar7 == 0))
            goto LAB_0cc1447c;
          }
          else if ((plVar10[1] & uVar21) != uVar16) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar10[1];
          if (uVar9 == uVar14) {
            if ((plVar10[3] == uVar12) && (iVar7 = bcmp(plVar10[2],pbVar17,uVar12), iVar7 == 0))
            goto LAB_0cc1447c;
          }
          else {
            if (uVar21 <= uVar14) {
              if ((uVar14 | uVar21) >> 0x20 == 0) {
                uVar14 = (uVar14 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar14 = uVar14 % uVar21;
              }
            }
            if (uVar14 != uVar16) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  goto LAB_0cc14b35;
LAB_0cc1447c:
  lVar8 = plVar10[4];
  if ((DAT_0f6ff8f0 == '\0') && (iVar7 = FUN_04108328(&DAT_0f6ff8f0), iVar7 != 0)) {
    _DAT_0f6ff8d8 = (long *)0x0;
    _DAT_0f6ff8e0 = 0;
    _DAT_0f6ff8c8 = 0;
    _DAT_0f6ff8d0 = 0;
    _DAT_0f6ff8e8 = 1.0;
    __cxa_atexit(&UNK_0cbeb320,&DAT_0f6ff8c8,0xf53dab8);
    func_0x0410844d(&DAT_0f6ff8f0);
  }
  pbVar22 = (byte *)(lStack_70 + 0x51);
  bVar25 = (*(byte *)(lStack_70 + 0x50) & 1) == 0;
  pbVar17 = *(byte **)(lStack_70 + 0x60);
  if (bVar25) {
    pbVar17 = pbVar22;
  }
  uVar21 = (ulong)(*(byte *)(lStack_70 + 0x50) >> 1);
  if (!bVar25) {
    uVar21 = *(ulong *)(lStack_70 + 0x58);
  }
  uVar9 = func_0x04883620(&plStack_a0,pbVar17,uVar21);
  uVar21 = _DAT_0f6ff8d0;
  uStack_78 = uVar9;
  if (_DAT_0f6ff8d0 != 0) {
    uVar12 = _DAT_0f6ff8d0 - (_DAT_0f6ff8d0 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
    uVar14 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar14 >> 0x38 < 2) {
      uVar12 = _DAT_0f6ff8d0 - 1 & uVar9;
    }
    else {
      uVar12 = uVar9;
      if (_DAT_0f6ff8d0 <= uVar9) {
        if ((uVar9 | _DAT_0f6ff8d0) >> 0x20 == 0) {
          uVar12 = (uVar9 & 0xffffffff) % (_DAT_0f6ff8d0 & 0xffffffff);
        }
        else {
          uVar12 = uVar9 % _DAT_0f6ff8d0;
        }
      }
    }
    puVar15 = *(undefined8 **)(_DAT_0f6ff8c8 + uVar12 * 8);
    if ((puVar15 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar15, plVar10 != (long *)0x0)) {
      if ((*(byte *)(lStack_70 + 0x50) & 1) == 0) {
        uVar16 = (ulong)(*(byte *)(lStack_70 + 0x50) >> 1);
      }
      else {
        uVar16 = *(ulong *)(lStack_70 + 0x58);
        pbVar22 = *(byte **)(lStack_70 + 0x60);
      }
      if ((byte)(uVar14 >> 0x38) < 2) {
        uVar14 = _DAT_0f6ff8d0 - 1;
        pbStack_60 = pbVar22;
        do {
          if (plVar10[1] == uVar9) {
            bVar6 = *(byte *)(plVar10 + 2);
            if ((bVar6 & 1) == 0) {
              uVar13 = (ulong)(bVar6 >> 1);
            }
            else {
              uVar13 = plVar10[3];
            }
            if (uVar13 == uVar16) {
              if ((bVar6 & 1) == 0) {
                lVar19 = (long)plVar10 + 0x11;
              }
              else {
                lVar19 = plVar10[4];
              }
              iVar7 = bcmp(lVar19,pbStack_60,uVar16);
              uVar9 = uStack_78;
              if (iVar7 == 0) goto LAB_0cc14b31;
            }
          }
          else if ((plVar10[1] & uVar14) != uVar12) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar10[1];
          if (uVar14 == uVar9) {
            bVar6 = *(byte *)(plVar10 + 2);
            if ((bVar6 & 1) == 0) {
              uVar14 = (ulong)(bVar6 >> 1);
            }
            else {
              uVar14 = plVar10[3];
            }
            if (uVar14 == uVar16) {
              if ((bVar6 & 1) == 0) {
                lVar19 = (long)plVar10 + 0x11;
              }
              else {
                lVar19 = plVar10[4];
              }
              iVar7 = bcmp(lVar19,pbVar22,uVar16);
              uVar9 = uStack_78;
              if (iVar7 == 0) goto LAB_0cc14b31;
            }
          }
          else {
            if (uVar21 <= uVar14) {
              if ((uVar14 | uVar21) >> 0x20 == 0) {
                uVar14 = (uVar14 & 0xffffffff) % (uVar21 & 0xffffffff);
              }
              else {
                uVar14 = uVar14 % uVar21;
              }
            }
            if (uVar14 != uVar12) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar10 == (long *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uStack_98 = 0xf6ff8c8;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  *plVar10 = 0;
  plVar10[1] = uStack_78;
  plStack_a0 = plVar10;
  if ((*puStack_68 & 1) == 0) {
    plVar10[4] = *(long *)(puStack_68 + 4);
    lVar19 = *(long *)(puStack_68 + 2);
    plVar10[2] = *(long *)puStack_68;
    plVar10[3] = lVar19;
  }
  else {
    func_0x0412e5e0(plVar10 + 2,*(undefined8 *)(lStack_70 + 0x60),*(undefined8 *)(lStack_70 + 0x58))
    ;
  }
  *(undefined4 *)(plVar10 + 5) = 0;
  uStack_90 = CONCAT31(uStack_90._1_3_,1);
  if ((uVar21 == 0) || ((float)uVar21 * _DAT_0f6ff8e8 < (float)(_DAT_0f6ff8e0 + 1))) {
    uVar12 = 1;
    if (2 < uVar21) {
      uVar12 = (ulong)((uVar21 & uVar21 - 1) != 0);
    }
    uVar12 = uVar12 | uVar21 * 2;
    fVar26 = (float)func_0x0eee3ab0((float)(_DAT_0f6ff8e0 + 1) / _DAT_0f6ff8e8);
    uVar21 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
    if (uVar21 < uVar12) {
      uVar21 = uVar12;
    }
    uVar12 = 2;
    if ((uVar21 != 1) && (uVar12 = uVar21, (uVar21 & uVar21 - 1) != 0)) {
      uVar12 = func_0x0412c3f0();
    }
    uVar21 = _DAT_0f6ff8d0;
    if (_DAT_0f6ff8d0 < uVar12) {
LAB_0cc14878:
      if (uVar12 >> 0x3d != 0) {
        uVar11 = func_0x04882eb0();
        func_0x041084d6(&DAT_0f6ff8c0);
        uVar11 = func_0x0eee2d70(uVar11);
        func_0x041084d6(&DAT_0f6ff830);
        uVar11 = func_0x0eee2d70(uVar11);
        func_0x0ccb0980(&plStack_a0);
        uVar11 = func_0x0eee2d70(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        uVar11 = func_0x04882e20(uVar11);
        if ((uStack_98 & 1) != 0) {
          func_0x0412a280(CONCAT44(uStack_84,uStack_88),
                          CONCAT44(uStack_94,uStack_98) & 0xfffffffffffffffe);
        }
        uVar11 = func_0x0eee2d70(uVar11);
        func_0x04882e20(uVar11);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar19 = uVar12 * 8;
      lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar19);
      if (lVar24 == 0) {
        func_0x0eec74c0(lVar19,0);
      }
      lVar2 = _DAT_0f6ff8c8;
      bVar25 = _DAT_0f6ff8c8 != 0;
      _DAT_0f6ff8c8 = lVar24;
      if (bVar25) {
        func_0x0412a280(lVar2,_DAT_0f6ff8d0 << 3);
      }
      lVar24 = _DAT_0f6ff8c8;
      _DAT_0f6ff8d0 = uVar12;
      memset(_DAT_0f6ff8c8,0,lVar19);
      plVar18 = _DAT_0f6ff8d8;
      if (_DAT_0f6ff8d8 != (long *)0x0) {
        uVar9 = _DAT_0f6ff8d8[1];
        uVar21 = uVar12 - 1;
        if ((uVar12 & uVar21) == 0) {
          *(undefined **)(lVar24 + (uVar9 & uVar21) * 8) = &DAT_0f6ff8d8;
          uVar12 = uVar9 & uVar21;
          while (plVar20 = plVar18, plVar18 = (long *)*plVar20, plVar18 != (long *)0x0) {
            uVar9 = plVar18[1] & uVar21;
            if (uVar9 != uVar12) {
              if (*(long *)(lVar24 + uVar9 * 8) == 0) {
                *(long **)(lVar24 + uVar9 * 8) = plVar20;
                uVar12 = uVar9;
              }
              else {
                *plVar20 = *plVar18;
                *plVar18 = **(long **)(lVar24 + uVar9 * 8);
                **(undefined8 **)(lVar24 + uVar9 * 8) = plVar18;
                plVar18 = plVar20;
              }
            }
          }
        }
        else {
          if (uVar12 <= uVar9) {
            if ((uVar9 | uVar12) >> 0x20 == 0) {
              uVar9 = (uVar9 & 0xffffffff) % (uVar12 & 0xffffffff);
            }
            else {
              uVar9 = uVar9 % uVar12;
            }
          }
          *(undefined **)(lVar24 + uVar9 * 8) = &DAT_0f6ff8d8;
          plVar20 = (long *)*plVar18;
          while (plVar20 != (long *)0x0) {
            uVar21 = plVar20[1];
            if (uVar12 <= uVar21) {
              if ((uVar21 | uVar12) >> 0x20 == 0) {
                uVar21 = (uVar21 & 0xffffffff) % (uVar12 & 0xffffffff);
              }
              else {
                uVar21 = uVar21 % uVar12;
              }
            }
            if (uVar21 != uVar9) {
              if (*(long *)(lVar24 + uVar21 * 8) == 0) {
                *(long **)(lVar24 + uVar21 * 8) = plVar18;
                uVar9 = uVar21;
              }
              else {
                *plVar18 = *plVar20;
                *plVar20 = **(long **)(lVar24 + uVar21 * 8);
                **(undefined8 **)(lVar24 + uVar21 * 8) = plVar20;
                plVar20 = plVar18;
              }
            }
            plVar18 = plVar20;
            plVar20 = (long *)*plVar18;
          }
        }
      }
    }
    else if (uVar12 < _DAT_0f6ff8d0) {
      fVar26 = (float)func_0x0eee3ab0((float)_DAT_0f6ff8e0 / _DAT_0f6ff8e8);
      uVar9 = (long)(fVar26 - _DAT_01198778) & (long)fVar26 >> 0x3f | (long)fVar26;
      if ((uVar21 < 3) ||
         (uVar14 = uVar21 - (uVar21 >> 1 & 0x5555555555555555),
         uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333),
         1 < (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        uVar9 = func_0x0412c3f0(uVar9);
      }
      else if (1 < uVar9) {
        lVar19 = 0x3f;
        if (uVar9 - 1 != 0) {
          for (; uVar9 - 1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar9 = 1L << (-((byte)lVar19 ^ 0x3f) & 0x3f);
      }
      lVar19 = _DAT_0f6ff8c8;
      if (uVar9 < uVar12) {
        uVar9 = uVar12;
      }
      if (uVar9 < uVar21) {
        uVar12 = uVar9;
        if (uVar9 != 0) goto LAB_0cc14878;
        _DAT_0f6ff8c8 = 0;
        if (lVar19 != 0) {
          func_0x0412a280(lVar19,_DAT_0f6ff8d0 << 3);
        }
        _DAT_0f6ff8d0 = 0;
      }
    }
    uVar21 = _DAT_0f6ff8d0;
    if ((_DAT_0f6ff8d0 & _DAT_0f6ff8d0 - 1) == 0) {
      uVar12 = uStack_78 & _DAT_0f6ff8d0 - 1;
    }
    else {
      uVar12 = uStack_78;
      if (_DAT_0f6ff8d0 <= uStack_78) {
        if ((uStack_78 | _DAT_0f6ff8d0) >> 0x20 == 0) {
          uVar12 = (uStack_78 & 0xffffffff) % (_DAT_0f6ff8d0 & 0xffffffff);
        }
        else {
          uVar12 = uStack_78 % _DAT_0f6ff8d0;
        }
      }
    }
  }
  lVar19 = _DAT_0f6ff8c8;
  plVar18 = *(long **)(_DAT_0f6ff8c8 + uVar12 * 8);
  if (plVar18 == (long *)0x0) {
    *plVar10 = (long)_DAT_0f6ff8d8;
    _DAT_0f6ff8d8 = plVar10;
    *(undefined **)(lVar19 + uVar12 * 8) = &DAT_0f6ff8d8;
    if (*plVar10 != 0) {
      uVar12 = *(ulong *)(*plVar10 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        *(long **)(lVar19 + (uVar12 & uVar21 - 1) * 8) = plVar10;
      }
      else {
        if (uVar21 <= uVar12) {
          if ((uVar12 | uVar21) >> 0x20 == 0) {
            *(long **)(lVar19 + ((uVar12 & 0xffffffff) % (uVar21 & 0xffffffff)) * 8) = plVar10;
            goto LAB_0cc14b2a;
          }
          uVar12 = uVar12 % uVar21;
        }
        *(long **)(lVar19 + uVar12 * 8) = plVar10;
      }
    }
  }
  else {
    *plVar10 = *plVar18;
    *plVar18 = (long)plVar10;
  }
LAB_0cc14b2a:
  _DAT_0f6ff8e0 = _DAT_0f6ff8e0 + 1;
LAB_0cc14b31:
  *(int *)(plVar10 + 5) = (int)lVar8;
LAB_0cc14b35:
  plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,uStack_54);
  lVar8 = (**(code **)(plVar23[4] + 0x10))
                    (plVar23 + 4,0xf6ff9e0,lStack_50,puStack_68,&plStack_a0,uStack_48);
  if (lVar8 == 0) {
LAB_0cc14b72:
    lVar8 = lStack_70;
    plStack_a0 = (long *)0x0;
    if ((*puStack_68 & 1) == 0) {
      uStack_88 = (uint)*(undefined8 *)(puStack_68 + 4);
      uStack_84 = (uint)((ulong)*(undefined8 *)(puStack_68 + 4) >> 0x20);
      uStack_98 = *puStack_68;
      uStack_94 = puStack_68[1];
      uStack_90 = puStack_68[2];
      uStack_8c = puStack_68[3];
      lStack_80 = 0;
      uVar12 = (ulong)(byte)uStack_98;
      if ((uStack_98 & 1) == 0) goto LAB_0cc14baf;
LAB_0cc14bed:
      if (CONCAT44(uStack_8c,uStack_90) != 0) goto LAB_0cc14c00;
LAB_0cc14cf5:
      lStack_80 = 0;
      plVar23 = (long *)0x0;
    }
    else {
      func_0x0412e5e0(&uStack_98,*(undefined8 *)(lStack_70 + 0x60),*(undefined8 *)(lStack_70 + 0x58)
                     );
      lStack_80 = 0;
      uVar12 = (ulong)(byte)uStack_98;
      if ((uStack_98 & 1) != 0) goto LAB_0cc14bed;
LAB_0cc14baf:
      if (uVar12 >> 1 == 0) goto LAB_0cc14cf5;
LAB_0cc14c00:
      lStack_80 = 0;
      if ((uVar12 & 1) == 0) {
        pbVar22 = (byte *)((long)&uStack_98 + 1);
        if (pbVar22 != (byte *)0x0) goto LAB_0cc14c21;
        goto LAB_0cc14cf5;
      }
      pbVar22 = (byte *)CONCAT44(uStack_84,uStack_88);
      if (pbVar22 == (byte *)0x0) goto LAB_0cc14cf5;
LAB_0cc14c21:
      if (*pbVar22 == 0) goto LAB_0cc14cf5;
      plVar23 = (long *)0xcbf29ce484222325;
      uVar12 = func_0x0eee2e90(pbVar22);
      if (uVar12 != 0) {
        uVar21 = (ulong)((uint)uVar12 & 7);
        if (7 < uVar12) {
          uVar12 = uVar12 & 0xfffffffffffffff8;
          do {
            plVar23 = (long *)(((((((((long)plVar23 * 0x100000001b3 ^ (ulong)*pbVar22) *
                                     0x100000001b3 ^ (ulong)pbVar22[1]) * 0x100000001b3 ^
                                   (ulong)pbVar22[2]) * 0x100000001b3 ^ (ulong)pbVar22[3]) *
                                  0x100000001b3 ^ (ulong)pbVar22[4]) * 0x100000001b3 ^
                                (ulong)pbVar22[5]) * 0x100000001b3 ^ (ulong)pbVar22[6]) *
                               0x100000001b3 ^ (ulong)pbVar22[7]);
            pbVar22 = pbVar22 + 8;
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
        }
        if (uVar21 != 0) {
          uVar12 = 0;
          do {
            plVar23 = (long *)((long)plVar23 * 0x100000001b3 ^ (ulong)pbVar22[uVar12]);
            uVar12 = uVar12 + 1;
          } while (uVar21 != uVar12);
        }
      }
    }
    bVar6 = *(byte *)(lVar8 + 0x6c);
    uVar12 = 1;
    if ((ulong)bVar6 <= (ulong)(_DAT_0f71e698 - _DAT_0f71e690 >> 3)) {
      uVar12 = (ulong)bVar6;
    }
    plStack_a0 = plVar23;
    lVar8 = func_0x05cf92c0(0xf6ff9e0,&plStack_a0,lVar8 + 0x68,
                            *(undefined8 *)(_DAT_0f71e690 + uVar12 * 8));
    if ((uStack_98 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_84,uStack_88),
                      CONCAT44(uStack_94,uStack_98) & 0xfffffffffffffffe);
    }
  }
  param_2 = lStack_70;
  bVar6 = *(byte *)(lVar8 + 0x135) & 0xfe | *(byte *)(lStack_70 + 0x110);
  *(byte *)(lVar8 + 0x135) = bVar6;
  if (*(char *)(lStack_70 + 0xa4) == '\x01') {
    *(undefined4 *)(lVar8 + 300) = *(undefined4 *)(lStack_70 + 0xa0);
    if (*(char *)(lStack_70 + 0xa8) != '\x01') goto LAB_0cc14d97;
LAB_0cc14dbd:
    *(byte *)(lVar8 + 0x10c) = *(byte *)(lVar8 + 0x10c) | 8;
    if (*(char *)(lStack_70 + 0xa9) != '\x01') goto LAB_0cc14dcf;
LAB_0cc14da0:
    *(byte *)(lVar8 + 0x10c) = *(byte *)(lVar8 + 0x10c) | 0x10;
    cVar1 = *(char *)(lStack_70 + 0xaa);
  }
  else {
    if (*(char *)(lStack_70 + 0xa8) == '\x01') goto LAB_0cc14dbd;
LAB_0cc14d97:
    if (*(char *)(lStack_70 + 0xa9) == '\x01') goto LAB_0cc14da0;
LAB_0cc14dcf:
    cVar1 = *(char *)(lStack_70 + 0xaa);
  }
  if (cVar1 == '\x01') {
    *(byte *)(lVar8 + 0x135) = bVar6 | 4;
  }
  puStack_40 = &UNK_0f40dd80;
  uStack_34 = 0;
  uStack_38 = 1;
  func_0x0ce6c6a0(&puStack_40,lVar8 + 0x28);
  plStack_a0 = (long *)&UNK_0f40da60;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  lStack_80 = 0;
  uStack_98 = CONCAT31(uStack_98._1_3_,1);
  func_0x0ce6cb00(&plStack_a0,lVar8 + 0x28);
  uVar5 = uStack_8c;
  uVar4 = uStack_90;
  plStack_a0 = (long *)&UNK_0f40da60;
  lVar19 = CONCAT44(uStack_8c,uStack_90);
  if (lVar19 == 0) {
LAB_0cc14e89:
    puVar15 = *(undefined8 **)(param_2 + 0xf8);
  }
  else {
    lVar24 = CONCAT44(uStack_84,uStack_88);
    if (lVar19 != lVar24) {
      do {
        *(undefined **)(lVar24 + -0x18) = &UNK_0f3773c0;
        plVar23 = *(long **)(lVar24 + -0x10);
        *(undefined8 *)(lVar24 + -0x10) = 0;
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x90))();
        }
        lVar24 = lVar24 + -0x18;
      } while (lVar24 != lVar19);
      lVar19 = CONCAT44(uStack_8c,uStack_90);
    }
    uStack_88 = uVar4;
    uStack_84 = uVar5;
    func_0x0412a280(lVar19,lStack_80 - lVar19);
    puVar15 = *(undefined8 **)(param_2 + 0xf8);
  }
  for (; puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
    (**(code **)(*(long *)puVar15[5] + 0x10))((long *)puVar15[5],lVar8);
  }
  func_0x0c6cfbe0(lVar8);
  lVar19 = *(long *)(lVar8 + 0x2d8);
  if (lVar19 != 0) {
    lVar2 = *(long *)(param_2 + 0xb8);
    for (lVar24 = *(long *)(param_2 + 0xb0); lVar24 != lVar2; lVar24 = lVar24 + 0x28) {
      func_0x0cb8b970(lVar19,lVar24);
    }
    plVar23 = *(long **)(lVar8 + 0x1a8);
    while (plVar23 != (long *)(lVar8 + 0x1b0)) {
      func_0x0cb8cfd0(lVar19,plVar23[7]);
      plVar10 = (long *)plVar23[1];
      plVar18 = plVar23;
      if ((long *)plVar23[1] == (long *)0x0) {
        do {
          plVar23 = (long *)plVar18[2];
          bVar25 = plVar18 != (long *)*plVar23;
          plVar18 = plVar23;
        } while (bVar25);
      }
      else {
        do {
          plVar23 = plVar10;
          plVar10 = (long *)*plVar23;
        } while ((long *)*plVar23 != (long *)0x0);
      }
    }
    plVar23 = *(long **)(lVar19 + 0xd0);
    while (plVar23 != (long *)(lVar19 + 0xd8)) {
      func_0x0c6cd240(lVar8,*(long *)(plVar23[5] + 0x60),
                      *(undefined8 *)(*(long *)(plVar23[5] + 0x60) + 0x10));
      plVar10 = (long *)plVar23[1];
      plVar18 = plVar23;
      if ((long *)plVar23[1] == (long *)0x0) {
        do {
          plVar23 = (long *)plVar18[2];
          bVar25 = plVar18 != (long *)*plVar23;
          plVar18 = plVar23;
        } while (bVar25);
      }
      else {
        do {
          plVar23 = plVar10;
          plVar10 = (long *)*plVar23;
        } while ((long *)*plVar23 != (long *)0x0);
      }
    }
  }
  return;
}


