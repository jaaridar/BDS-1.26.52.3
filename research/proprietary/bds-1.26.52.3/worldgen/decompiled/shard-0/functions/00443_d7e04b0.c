/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd8e04b0 (ELF vaddr 0xd7e04b0)
 * Label: caller-of-callee
 * Body:  [[0d8e04b0, 0d8e06e1] [0d8e06f0, 0d8e08ca] [0d8e08d0, 0d8e09eb] [0d8e09f0, 0d8e0a3c] [0d8e0a40, 0d8e0b0c] [0d8e0b10, 0d8e0b5d] [0d8e0b60, 0d8e0b83] [0d8e0b90, 0d8e0cae] [0d8e0cb0, 0d8e0fb9] [0d8e0fc0, 0d8e10c7] [0d8e10d0, 0d8e119f]]
 * Ghidra: FUN_0d8e04b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d8e04b0(void)

{
  uint uVar1;
  uint ****ppppuVar2;
  uint ******ppppppuVar3;
  long lVar4;
  undefined8 uVar5;
  uint *****pppppuVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  uint *******pppppppuVar10;
  ulong uVar11;
  ulong uVar12;
  uint *****pppppuVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  uint *****pppppuVar20;
  bool bVar21;
  float fVar22;
  undefined1 auVar23 [16];
  long *plStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  undefined *puStack_188;
  long *plStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  uint *****pppppuStack_158;
  uint *****pppppuStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  long *plStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  uint *******pppppppuStack_f8;
  long *plStack_f0;
  code *pcStack_e0;
  int iStack_d8;
  char cStack_d4;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  uint *****pppppuStack_a0;
  uint *******pppppppuStack_98;
  uint uStack_90;
  uint *****pppppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plStack_1b0 = &lStack_170;
  uStack_148 = 0;
  uStack_128 = 0;
  uStack_126 = 0;
  uStack_120 = 0;
  uStack_11e = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  uStack_12e = 0;
  pppppuStack_158 = (uint *****)0x0;
  pppppuStack_150 = (uint *****)0x0;
  lStack_168 = 0;
  lStack_160 = 0;
  plStack_178 = (long *)0x0;
  lStack_170 = 0;
  puStack_188 = (undefined *)0x0;
  plStack_180 = (long *)0x0;
  uStack_140 = 0x3f600000;
  func_0x048af640(plStack_1b0,8);
  uStack_128 = 0;
  uStack_126 = 0;
  uStack_120 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  uStack_12e = 0;
  puStack_188 = &UNK_0f534768;
  plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar8 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&UNK_0ef44a60;
  plStack_180 = plVar8 + 3;
  *(undefined1 *)(plVar8 + 3) = 1;
  puStack_188 = &UNK_0ef471f0;
  _DAT_0f72c540 = 0;
  _DAT_0f72c548 = 0;
  _DAT_0f72c550 = (long *)0x0;
  _DAT_0f72c558 = 0;
  _DAT_0f72c560 = 1.0;
  plStack_178 = plVar8;
  func_0x0d8deae0(&puStack_188);
  if (DAT_0f72c588 == '\0') goto LAB_0d8e1176;
  do {
    pppppuVar13 = (uint *****)
                  (lStack_170 +
                  (ulong)((int)((ulong)(lStack_168 - lStack_170) >> 3) - 1U & _DAT_0f72c574) * 8);
    do {
      ppppuVar2 = *pppppuVar13;
      if (ppppuVar2 == (uint ****)0xffffffffffffffff) goto LAB_0d8e0609;
      pppppuVar13 = pppppuStack_158 + (long)ppppuVar2 * 3;
    } while (*(uint *)(pppppuStack_158 + (long)ppppuVar2 * 3 + 1) != _DAT_0f72c574);
    if (pppppuVar13 == pppppuStack_150) {
LAB_0d8e0609:
      pppppppuStack_f8 = (uint *******)0x0;
      plStack_f0 = (long *)0x0;
      func_0x048b1dc0(&pppppppuStack_f8);
      plStack_1b0 = plStack_f0;
      pppppppuStack_98 = pppppppuStack_f8;
      if (pppppppuStack_f8 == (uint *******)0x0) goto LAB_0d8e0641;
LAB_0d8e06aa:
      ppppppuVar3 = pppppppuStack_98[0xf];
      if (ppppppuVar3 == (uint ******)0x0) {
LAB_0d8e105a:
        plVar8 = plStack_178;
        puStack_188 = &UNK_0f534768;
        if (plStack_178 == (long *)0x0) {
          *(undefined1 *)plStack_180 = 0;
        }
        else {
          *(undefined1 *)plStack_180 = 0;
          LOCK();
          plVar14 = plStack_178 + 1;
          lVar9 = *plVar14;
          *plVar14 = *plVar14 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            func_0x0412c2d0(plVar8);
          }
        }
        lVar9 = lStack_138;
        if (lStack_138 != 0) {
          for (lVar19 = CONCAT62(uStack_12e,uStack_130); lVar9 != lVar19; lVar19 = lVar19 + -0x38) {
            if ((*(byte *)(lVar19 + -0x38) & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(lVar19 + -0x28),
                                 *(ulong *)(lVar19 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_130 = (undefined2)lVar9;
          uStack_12e = (undefined6)((ulong)lVar9 >> 0x10);
          thunk_FUN_0ee326a0(lStack_138,CONCAT62(uStack_126,uStack_128) - lStack_138);
        }
        pppppppuStack_f8 = (uint *******)&pppppuStack_158;
        func_0x048b0f50(&pppppppuStack_f8);
        if (lStack_170 != 0) {
          lStack_168 = lStack_170;
          thunk_FUN_0ee326a0(lStack_170,lStack_160 - lStack_170);
        }
        return;
      }
      pppppuVar13 = ppppppuVar3[9];
      pppppuVar20 = ppppppuVar3[10];
      pppppuVar6 = pppppuVar20;
      if (pppppuVar13 == pppppuVar20) goto LAB_0d8e105a;
    }
    else {
      pppppppuStack_98 = (uint *******)pppppuVar13[2];
      if (pppppppuStack_98 != (uint *******)0x0) goto LAB_0d8e06aa;
LAB_0d8e0641:
      lVar9 = func_0x048aead0(plStack_1b0);
      if (*(long *)(lVar9 + 0x78) == 0) goto LAB_0d8e105a;
      lVar9 = func_0x048aead0(plStack_1b0);
      pppppuVar13 = *(uint ******)(*(long *)(lVar9 + 0x78) + 0x48);
      lVar9 = func_0x048aead0(plStack_1b0);
      pppppuVar20 = *(uint ******)(*(long *)(lVar9 + 0x78) + 0x50);
      pppppuVar6 = pppppuVar20;
      if (pppppuVar13 == pppppuVar20) goto LAB_0d8e105a;
    }
LAB_0d8e06fd:
    pppppuStack_a0 = pppppuVar6;
    uStack_90 = *(uint *)pppppuVar13;
    plStack_80 = plStack_1b0;
    pppppuStack_88 = pppppuVar13;
    plVar8 = (long *)(*(code *)pppppuVar13[7])();
    if (*(uint *)(*plVar8 + 4) != _DAT_0f72c574) goto LAB_0d8e06f0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    pcStack_60 = (code *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x05d84ba0(&uStack_78);
    func_0x05d9a920(&pppppppuStack_f8,&pppppuStack_88,&uStack_78);
    uVar5 = uStack_d0;
    pppppppuVar10 = pppppppuStack_f8;
    if (cStack_d4 == '\x02') {
      pppppppuVar10 = (uint *******)&pppppppuStack_f8;
    }
    if (pppppppuVar10 == (uint *******)0x0 || iStack_d8 != 0x5f650391) {
      if (lStack_c8 == 0) {
        (*pcStack_c0)(0,&pppppppuStack_f8,0);
      }
      pppppppuVar10 = pppppppuStack_f8;
      if (cStack_d4 == '\x02') {
        pppppppuVar10 = (uint *******)&pppppppuStack_f8;
      }
      pppppppuVar10 = (uint *******)func_0x0488e200(uVar5,lStack_c8,0x5f650391,pppppppuVar10);
    }
    uVar1 = *(uint *)pppppppuVar10;
    uVar18 = (ulong)uVar1;
    uVar11 = (ulong)uStack_90;
    pppppppuVar10 = pppppppuStack_98;
    if (pppppppuStack_98 == (uint *******)0x0) {
      pppppppuVar10 = (uint *******)func_0x048aead0(plStack_1b0,0);
    }
    plVar8 = (long *)func_0x048b0c90(plStack_1b0,pppppppuVar10,uVar11,1);
    if (plVar8 == (long *)0x0) {
      plStack_118 = (long *)0x0;
      plStack_110 = (long *)0x0;
      func_0x048b0d20(&plStack_118);
      plStack_b8 = plStack_118;
      plStack_b0 = plStack_110;
      if (plStack_118 != (long *)0x0) goto LAB_0d8e087d;
      uStack_1a8 = uStack_1a8 & 0xffffffffffff0000;
      uVar15 = _DAT_0f72c548;
joined_r0x0d8e0a81:
      _DAT_0f72c548 = uVar15;
      if (uVar15 != 0) {
        uVar11 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        uVar16 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar16 >> 0x38 < 2) {
          uVar11 = (ulong)(uVar1 & (int)uVar15 - 1U);
        }
        else {
          uVar11 = uVar18;
          if (uVar15 <= uVar18) {
            uVar11 = uVar18 % (uVar15 & 0xffffffff);
          }
        }
        plVar8 = *(long **)(_DAT_0f72c540 + uVar11 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          if ((byte)(uVar16 >> 0x38) < 2) {
            do {
              if (plVar8[1] == uVar18) {
                if (*(uint *)(plVar8 + 2) == uVar1) goto LAB_0d8e0ed0;
              }
              else if ((plVar8[1] & uVar15 - 1) != uVar11) break;
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          else {
            do {
              uVar16 = plVar8[1];
              if (uVar16 == uVar18) {
                if (*(uint *)(plVar8 + 2) == uVar1) goto LAB_0d8e0ed0;
              }
              else {
                if (uVar15 <= uVar16) {
                  if ((uVar16 | uVar15) >> 0x20 == 0) {
                    if ((uVar16 & 0xffffffff) % (uVar15 & 0xffffffff) == uVar11) goto LAB_0d8e09fa;
                    break;
                  }
                  uVar16 = uVar16 % uVar15;
                }
                if (uVar16 != uVar11) break;
              }
LAB_0d8e09fa:
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
      }
      plVar8 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar8 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      plStack_110 = (long *)&DAT_0f72c540;
      uStack_108 = 1;
      *plVar8 = 0;
      plVar8[1] = uVar18;
      *(uint *)(plVar8 + 2) = uVar1;
      plVar8[5] = lStack_198;
      plVar8[3] = uStack_1a8;
      plVar8[4] = uStack_1a0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
      plStack_118 = plVar8;
      if ((long)uVar15 < 0) {
        fVar22 = (float)uVar15;
        if (uVar15 != 0) goto LAB_0d8e0b73;
LAB_0d8e0b90:
        uVar11 = 1;
        if (2 < uVar15) {
          uVar11 = (ulong)((uVar15 & uVar15 - 1) != 0);
        }
        uVar11 = uVar15 * 2 | uVar11;
        fVar22 = (float)ceilf((float)(_DAT_0f72c558 + 1) / _DAT_0f72c560);
        uVar15 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
        if (uVar15 < uVar11) {
          uVar15 = uVar11;
        }
        uVar11 = 2;
        if ((uVar15 == 1) || (uVar11 = uVar15, (uVar15 & uVar15 - 1) == 0)) {
          bVar21 = uVar11 < _DAT_0f72c548;
          if (uVar11 <= _DAT_0f72c548) goto LAB_0d8e0d0f;
LAB_0d8e0c0b:
          if (uVar11 >> 0x3d != 0) goto LAB_0d8e1171;
          lVar9 = uVar11 * 8;
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
          if (lVar19 == 0) {
            func_0x0eec74c0(lVar9,0);
          }
          lVar4 = _DAT_0f72c540;
          bVar21 = _DAT_0f72c540 != 0;
          _DAT_0f72c540 = lVar19;
          if (bVar21) {
            thunk_FUN_0ee326a0(lVar4,_DAT_0f72c548 << 3);
          }
          lVar19 = _DAT_0f72c540;
          _DAT_0f72c548 = uVar11;
          func_0x0eee2dd0(_DAT_0f72c540,0,lVar9);
          plVar14 = _DAT_0f72c550;
          if (_DAT_0f72c550 != (long *)0x0) {
            uVar16 = _DAT_0f72c550[1];
            uVar15 = uVar11 - 1;
            if ((uVar11 & uVar15) == 0) {
              *(undefined **)(lVar19 + (uVar16 & uVar15) * 8) = &DAT_0f72c550;
              uVar11 = uVar16 & uVar15;
              while (plVar17 = plVar14, plVar14 = (long *)*plVar17, plVar14 != (long *)0x0) {
                uVar16 = plVar14[1] & uVar15;
                if (uVar16 != uVar11) {
                  if (*(long *)(lVar19 + uVar16 * 8) == 0) {
                    *(long **)(lVar19 + uVar16 * 8) = plVar17;
                    uVar11 = uVar16;
                  }
                  else {
                    *plVar17 = *plVar14;
                    *plVar14 = **(long **)(lVar19 + uVar16 * 8);
                    **(undefined8 **)(lVar19 + uVar16 * 8) = plVar14;
                    plVar14 = plVar17;
                  }
                }
              }
            }
            else {
              if (uVar11 <= uVar16) {
                if ((uVar16 | uVar11) >> 0x20 == 0) {
                  uVar16 = (uVar16 & 0xffffffff) % (uVar11 & 0xffffffff);
                }
                else {
                  uVar16 = uVar16 % uVar11;
                }
              }
              *(undefined **)(lVar19 + uVar16 * 8) = &DAT_0f72c550;
              plVar17 = (long *)*plVar14;
              while (plVar17 != (long *)0x0) {
                uVar15 = plVar17[1];
                if (uVar11 <= uVar15) {
                  if ((uVar15 | uVar11) >> 0x20 == 0) {
                    uVar15 = (uVar15 & 0xffffffff) % (uVar11 & 0xffffffff);
                  }
                  else {
                    uVar15 = uVar15 % uVar11;
                  }
                }
                if (uVar15 != uVar16) {
                  if (*(long *)(lVar19 + uVar15 * 8) == 0) {
                    *(long **)(lVar19 + uVar15 * 8) = plVar14;
                    uVar16 = uVar15;
                  }
                  else {
                    *plVar14 = *plVar17;
                    *plVar17 = **(long **)(lVar19 + uVar15 * 8);
                    **(undefined8 **)(lVar19 + uVar15 * 8) = plVar17;
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
          uVar11 = func_0x0412c3f0();
          bVar21 = uVar11 < _DAT_0f72c548;
          if (_DAT_0f72c548 < uVar11) goto LAB_0d8e0c0b;
LAB_0d8e0d0f:
          uVar15 = _DAT_0f72c548;
          if (bVar21) {
            fVar22 = (float)ceilf((float)_DAT_0f72c558 / _DAT_0f72c560);
            uVar16 = (long)(fVar22 - _DAT_01198778) & (long)fVar22 >> 0x3f | (long)fVar22;
            if ((uVar15 < 3) ||
               (uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555),
               uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
               1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar16 = func_0x0412c3f0(uVar16);
              lVar9 = _DAT_0f72c540;
              if (uVar16 < uVar11) {
                uVar16 = uVar11;
              }
            }
            else {
              if (1 < uVar16) {
                lVar9 = 0x3f;
                if (uVar16 - 1 != 0) {
                  for (; uVar16 - 1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                uVar16 = 1L << (-((byte)lVar9 ^ 0x3f) & 0x3f);
              }
              lVar9 = _DAT_0f72c540;
              if (uVar16 < uVar11) {
                uVar16 = uVar11;
              }
            }
            uVar11 = uVar16;
            _DAT_0f72c540 = lVar9;
            if (uVar11 < uVar15) {
              if (uVar11 != 0) goto LAB_0d8e0c0b;
              _DAT_0f72c540 = 0;
              if (lVar9 != 0) {
                thunk_FUN_0ee326a0(lVar9,_DAT_0f72c548 << 3);
              }
              _DAT_0f72c548 = 0;
            }
          }
        }
        uVar15 = _DAT_0f72c548;
        if ((_DAT_0f72c548 & _DAT_0f72c548 - 1) == 0) {
          uVar11 = (ulong)(uVar1 & (int)_DAT_0f72c548 - 1U);
        }
        else {
          uVar11 = uVar18;
          if ((_DAT_0f72c548 <= uVar18) && (_DAT_0f72c548 <= uVar18)) {
            uVar11 = uVar18 % (_DAT_0f72c548 & 0xffffffff);
          }
        }
      }
      else {
        fVar22 = (float)(long)uVar15;
        if (uVar15 == 0) goto LAB_0d8e0b90;
LAB_0d8e0b73:
        if (fVar22 * _DAT_0f72c560 < (float)(_DAT_0f72c558 + 1)) goto LAB_0d8e0b90;
      }
      lVar9 = _DAT_0f72c540;
      plVar14 = *(long **)(_DAT_0f72c540 + uVar11 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar8 = (long)_DAT_0f72c550;
        _DAT_0f72c550 = plVar8;
        *(undefined **)(lVar9 + uVar11 * 8) = &DAT_0f72c550;
        if (*plVar8 != 0) {
          uVar11 = *(ulong *)(*plVar8 + 8);
          if ((uVar15 & uVar15 - 1) == 0) {
            *(long **)(lVar9 + (uVar11 & uVar15 - 1) * 8) = plVar8;
          }
          else {
            if (uVar15 <= uVar11) {
              if ((uVar11 | uVar15) >> 0x20 == 0) {
                *(long **)(lVar9 + ((uVar11 & 0xffffffff) % (uVar15 & 0xffffffff)) * 8) = plVar8;
                goto LAB_0d8e0ec9;
              }
              uVar11 = uVar11 % uVar15;
            }
            *(long **)(lVar9 + uVar11 * 8) = plVar8;
          }
        }
      }
      else {
        *plVar8 = *plVar14;
        *plVar14 = (long)plVar8;
      }
LAB_0d8e0ec9:
      _DAT_0f72c558 = _DAT_0f72c558 + 1;
LAB_0d8e0ed0:
      if ((uStack_1a8 & 1) != 0) {
        thunk_FUN_0ee326a0(lStack_198,uStack_1a8 & 0xfffffffffffffffe);
      }
      pppppuVar20 = pppppuStack_a0;
      if (pcStack_e0 != (code *)0x0) {
        (*pcStack_e0)(&pppppppuStack_f8);
      }
      if (pcStack_60 != (code *)0x0) {
        (*pcStack_60)(&uStack_78);
      }
LAB_0d8e06f0:
      pppppuVar13 = pppppuVar13 + 0xd;
      pppppuVar6 = pppppuStack_a0;
      if (pppppuVar13 == pppppuVar20) goto LAB_0d8e105a;
      goto LAB_0d8e06fd;
    }
    plStack_b0 = plStack_1b0;
    plStack_b8 = plVar8;
LAB_0d8e087d:
    auVar23 = func_0x0ed6ae90(&plStack_b8);
    uVar15 = uStack_1a8;
    uVar16 = auVar23._8_8_;
    if (uVar16 < 0xfffffffffffffff8) {
      if (uVar16 < 0x17) {
        uStack_1a8 = CONCAT71(uStack_1a8._1_7_,auVar23[8] * '\x02');
        lVar9 = (long)&uStack_1a8 + 1;
        if (uVar16 == 0) {
          uStack_1a8 = uVar15 & 0xffffffffffff0000;
          uVar15 = _DAT_0f72c548;
          goto joined_r0x0d8e0a81;
        }
      }
      else {
        uVar11 = (uVar16 | 7) + 1;
        if ((uVar16 | 7) == 0x17) {
          uVar11 = 0x1a;
        }
        lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
        if (lVar9 == 0) {
          func_0x0eec74c0(uVar11,0);
        }
        uVar11 = uVar11 | 1;
        uStack_1a8 = uVar11;
        uStack_1a0 = uVar16;
        lStack_198 = lVar9;
      }
      func_0x0eee2ee0(lVar9,auVar23._0_8_,uVar16);
      *(undefined1 *)(lVar9 + uVar16) = 0;
      uVar15 = _DAT_0f72c548;
      goto joined_r0x0d8e0a81;
    }
    func_0x04882e30();
LAB_0d8e1171:
    func_0x04882eb0();
LAB_0d8e1176:
    iVar7 = func_0x04108328(&DAT_0f72c588);
    if (iVar7 != 0) {
      func_0x0d9290a0();
      func_0x0410844d(&DAT_0f72c588);
    }
  } while( true );
}


