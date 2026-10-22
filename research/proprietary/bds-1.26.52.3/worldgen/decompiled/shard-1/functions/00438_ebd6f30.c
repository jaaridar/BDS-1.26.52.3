/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xecd6f30 (ELF vaddr 0xebd6f30)
 * Label: caller-of-callee
 * Body:  [[0ecd6f30, 0ecd7152] [0ecd7160, 0ecd731a] [0ecd7320, 0ecd746a] [0ecd7470, 0ecd74be] [0ecd74c0, 0ecd7669] [0ecd7670, 0ecd778e] [0ecd7790, 0ecd7aab] [0ecd7ab0, 0ecd7bbb] [0ecd7bc0, 0ecd7c9c]]
 * Ghidra: FUN_0ecd6f30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ecd6f30(void)

{
  uint uVar1;
  uint ****ppppuVar2;
  uint ******ppppppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint *****pppppuVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  uint *******pppppppuVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint *****pppppuVar15;
  uint *****pppppuVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  bool bVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  uint *******pppppppuStack_188;
  long *plStack_180;
  code *pcStack_170;
  int iStack_168;
  char cStack_164;
  undefined8 uStack_160;
  long lStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long *plStack_140;
  long *plStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  uint *****pppppuStack_118;
  uint *****pppppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  uint *****pppppuStack_a0;
  uint *******pppppppuStack_98;
  undefined4 uStack_90;
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
  
  plVar12 = &lStack_130;
  uStack_108 = 0;
  uStack_e8 = 0;
  uStack_e6 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_ee = 0;
  pppppuStack_118 = (uint *****)0x0;
  pppppuStack_110 = (uint *****)0x0;
  lStack_128 = 0;
  lStack_120 = 0;
  plStack_138 = (long *)0x0;
  lStack_130 = 0;
  puStack_148 = (undefined *)0x0;
  plStack_140 = (long *)0x0;
  uStack_100 = 0x3f600000;
  func_0x048af640(plVar12,8);
  uStack_e8 = 0;
  uStack_e6 = 0;
  uStack_e0 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_ee = 0;
  puStack_148 = &UNK_0f534768;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef44a60;
  plStack_140 = plVar9 + 3;
  *(undefined1 *)(plVar9 + 3) = 1;
  puStack_148 = &UNK_0ef471f0;
  _DAT_0f772558 = 0;
  _DAT_0f772560 = 0;
  _DAT_0f772568 = (long *)0x0;
  _DAT_0f772570 = 0;
  _DAT_0f772578 = 1.0;
  plStack_138 = plVar9;
  func_0x0ecaf190(&puStack_148);
  if (DAT_0f730c88 == '\0') goto LAB_0ecd7c6c;
  do {
    pppppuVar15 = (uint *****)
                  (lStack_130 +
                  (ulong)((int)((ulong)(lStack_128 - lStack_130) >> 3) - 1U & _DAT_0f730c74) * 8);
    do {
      ppppuVar2 = *pppppuVar15;
      if (ppppuVar2 == (uint ****)0xffffffffffffffff) goto LAB_0ecd7098;
      pppppuVar15 = pppppuStack_118 + (long)ppppuVar2 * 3;
    } while (*(uint *)(pppppuStack_118 + (long)ppppuVar2 * 3 + 1) != _DAT_0f730c74);
    if (pppppuVar15 == pppppuStack_110) {
LAB_0ecd7098:
      pppppppuStack_188 = (uint *******)0x0;
      plStack_180 = (long *)0x0;
      func_0x048b1dc0(&pppppppuStack_188);
      pppppppuStack_98 = pppppppuStack_188;
      plVar12 = plStack_180;
      if (pppppppuStack_188 != (uint *******)0x0) goto LAB_0ecd7123;
LAB_0ecd70c2:
      lVar10 = FUN_048aead0(plVar12);
      if (*(long *)(lVar10 + 0x78) == 0) goto LAB_0ecd7b4b;
      lVar10 = FUN_048aead0(plVar12);
      pppppuVar15 = *(uint ******)(*(long *)(lVar10 + 0x78) + 0x48);
      lVar10 = FUN_048aead0(plVar12);
      pppppuVar16 = *(uint ******)(*(long *)(lVar10 + 0x78) + 0x50);
      plVar9 = plVar12;
      pppppuVar7 = pppppuVar16;
      if (pppppuVar15 == pppppuVar16) goto LAB_0ecd7b4b;
    }
    else {
      pppppppuStack_98 = (uint *******)pppppuVar15[2];
      if (pppppppuStack_98 == (uint *******)0x0) goto LAB_0ecd70c2;
LAB_0ecd7123:
      ppppppuVar3 = pppppppuStack_98[0xf];
      if (ppppppuVar3 == (uint ******)0x0) {
LAB_0ecd7b4b:
        plVar12 = plStack_138;
        puStack_148 = &UNK_0f534768;
        if (plStack_138 == (long *)0x0) {
          *(undefined1 *)plStack_140 = 0;
        }
        else {
          *(undefined1 *)plStack_140 = 0;
          LOCK();
          plVar9 = plStack_138 + 1;
          lVar10 = *plVar9;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            func_0x0412c2d0(plVar12);
          }
        }
        lVar10 = lStack_f8;
        if (lStack_f8 != 0) {
          for (lVar21 = CONCAT62(uStack_ee,uStack_f0); lVar10 != lVar21; lVar21 = lVar21 + -0x38) {
            if ((*(byte *)(lVar21 + -0x38) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar21 + -0x28),
                              *(ulong *)(lVar21 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_f0 = (undefined2)lVar10;
          uStack_ee = (undefined6)((ulong)lVar10 >> 0x10);
          func_0x0412a280(lStack_f8,CONCAT62(uStack_e6,uStack_e8) - lStack_f8);
        }
        pppppppuStack_188 = (uint *******)&pppppuStack_118;
        func_0x048b0f50(&pppppppuStack_188);
        if (lStack_130 != 0) {
          lStack_128 = lStack_130;
          func_0x0412a280(lStack_130,lStack_120 - lStack_130);
        }
        return;
      }
      pppppuVar15 = ppppppuVar3[9];
      pppppuVar16 = ppppppuVar3[10];
      plVar9 = plVar12;
      pppppuVar7 = pppppuVar16;
      if (pppppuVar15 == pppppuVar16) goto LAB_0ecd7b4b;
    }
LAB_0ecd716d:
    pppppuStack_a0 = pppppuVar7;
    plStack_a8 = plVar9;
    uStack_90 = *(undefined4 *)pppppuVar15;
    pppppuStack_88 = pppppuVar15;
    plStack_80 = plVar12;
    plVar9 = (long *)(*(code *)pppppuVar15[7])(plVar12);
    if (*(uint *)(*plVar9 + 4) != _DAT_0f730c74) goto LAB_0ecd7160;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    pcStack_60 = (code *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x05d84ba0(&uStack_78);
    func_0x05d9a920(&pppppppuStack_188,&pppppuStack_88,&uStack_78);
    uVar5 = uStack_160;
    pppppppuVar11 = pppppppuStack_188;
    if (cStack_164 == '\x02') {
      pppppppuVar11 = (uint *******)&pppppppuStack_188;
    }
    if (pppppppuVar11 == (uint *******)0x0 || iStack_168 != 0x6eb88147) {
      if (lStack_158 == 0) {
        (*pcStack_150)(0,&pppppppuStack_188,0);
      }
      pppppppuVar11 = pppppppuStack_188;
      if (cStack_164 == '\x02') {
        pppppppuVar11 = (uint *******)&pppppppuStack_188;
      }
      pppppppuVar11 = (uint *******)FUN_0488e200(uVar5,lStack_158,0x6eb88147,pppppppuVar11);
    }
    uVar6 = uStack_90;
    uVar1 = *(uint *)pppppppuVar11;
    pppppppuVar11 = pppppppuStack_98;
    if (pppppppuStack_98 == (uint *******)0x0) {
      pppppppuVar11 = (uint *******)FUN_048aead0(plVar12,0);
    }
    plVar9 = (long *)func_0x048b0c90(plVar12,pppppppuVar11,uVar6,1);
    plVar19 = plVar12;
    if (plVar9 == (long *)0x0) {
      plStack_d8 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      func_0x048b0d20(&plStack_d8);
      plStack_b8 = plStack_d8;
      plStack_b0 = plStack_d0;
      plVar9 = plStack_b8;
      plVar19 = plStack_b0;
      if (plStack_d8 != (long *)0x0) goto LAB_0ecd72e1;
      uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
      uVar13 = 0;
      lVar10 = (long)&uStack_1a8 + 1;
LAB_0ecd7379:
      uVar18 = _DAT_0f772560;
      uVar20 = (ulong)(int)uVar1;
      *(undefined1 *)(lVar10 + uVar13) = 0;
      if (_DAT_0f772560 != 0) {
        uVar13 = _DAT_0f772560 - (_DAT_0f772560 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
        uVar17 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar17 >> 0x38 < 2) {
          uVar13 = _DAT_0f772560 - 1 & uVar20;
          plVar9 = *(long **)(_DAT_0f772558 + uVar13 * 8);
        }
        else {
          uVar13 = uVar20;
          if (_DAT_0f772560 <= uVar20) {
            if ((uVar20 | _DAT_0f772560) >> 0x20 == 0) {
              uVar13 = (ulong)uVar1 % (_DAT_0f772560 & 0xffffffff);
              plVar9 = *(long **)(_DAT_0f772558 + uVar13 * 8);
              goto joined_r0x0ecd7513;
            }
            uVar13 = uVar20 % _DAT_0f772560;
          }
          plVar9 = *(long **)(_DAT_0f772558 + uVar13 * 8);
        }
joined_r0x0ecd7513:
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          if ((byte)(uVar17 >> 0x38) < 2) {
            do {
              if (plVar9[1] == uVar20) {
                if (*(uint *)(plVar9 + 2) == uVar1) goto LAB_0ecd7a0d;
              }
              else if ((plVar9[1] & _DAT_0f772560 - 1) != uVar13) break;
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
          else {
            do {
              uVar17 = plVar9[1];
              if (uVar17 == uVar20) {
                if (*(uint *)(plVar9 + 2) == uVar1) goto LAB_0ecd7a0d;
              }
              else {
                if (_DAT_0f772560 <= uVar17) {
                  if ((uVar17 | _DAT_0f772560) >> 0x20 == 0) {
                    if ((uVar17 & 0xffffffff) % (_DAT_0f772560 & 0xffffffff) == uVar13)
                    goto LAB_0ecd747d;
                    break;
                  }
                  uVar17 = uVar17 % _DAT_0f772560;
                }
                if (uVar17 != uVar13) break;
              }
LAB_0ecd747d:
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
        }
      }
      plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar12 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      plStack_d0 = (long *)&DAT_0f772558;
      uStack_c8 = 1;
      *plVar12 = 0;
      plVar12[1] = uVar20;
      *(uint *)(plVar12 + 2) = uVar1;
      plVar12[5] = lStack_198;
      plVar12[3] = uStack_1a8;
      plVar12[4] = uStack_1a0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
      plStack_d8 = plVar12;
      if ((long)uVar18 < 0) {
        fVar23 = (float)uVar18;
        if (uVar18 != 0) goto LAB_0ecd7603;
LAB_0ecd7670:
        uVar13 = 1;
        if (2 < uVar18) {
          uVar13 = (ulong)((uVar18 & uVar18 - 1) != 0);
        }
        uVar13 = uVar18 * 2 | uVar13;
        fVar23 = (float)func_0x0eee3ab0((float)(_DAT_0f772570 + 1) / _DAT_0f772578);
        uVar18 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
        if (uVar18 < uVar13) {
          uVar18 = uVar13;
        }
        uVar13 = 2;
        if ((uVar18 == 1) || (uVar13 = uVar18, (uVar18 & uVar18 - 1) == 0)) {
          bVar22 = uVar13 < _DAT_0f772560;
          if (uVar13 <= _DAT_0f772560) goto LAB_0ecd77ef;
LAB_0ecd76eb:
          if (uVar13 >> 0x3d != 0) goto LAB_0ecd7c67;
          lVar10 = uVar13 * 8;
          lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
          if (lVar21 == 0) {
            func_0x0eec74c0(lVar10,0);
          }
          lVar4 = _DAT_0f772558;
          bVar22 = _DAT_0f772558 != 0;
          _DAT_0f772558 = lVar21;
          if (bVar22) {
            func_0x0412a280(lVar4,_DAT_0f772560 << 3);
          }
          lVar21 = _DAT_0f772558;
          _DAT_0f772560 = uVar13;
          func_0x0eee2dd0(_DAT_0f772558,0,lVar10);
          plVar9 = _DAT_0f772568;
          if (_DAT_0f772568 != (long *)0x0) {
            uVar17 = _DAT_0f772568[1];
            uVar18 = uVar13 - 1;
            if ((uVar13 & uVar18) == 0) {
              *(undefined **)(lVar21 + (uVar17 & uVar18) * 8) = &DAT_0f772568;
              uVar13 = uVar17 & uVar18;
              while (plVar19 = plVar9, plVar9 = (long *)*plVar19, plVar9 != (long *)0x0) {
                uVar17 = plVar9[1] & uVar18;
                if (uVar17 != uVar13) {
                  if (*(long *)(lVar21 + uVar17 * 8) == 0) {
                    *(long **)(lVar21 + uVar17 * 8) = plVar19;
                    uVar13 = uVar17;
                  }
                  else {
                    *plVar19 = *plVar9;
                    *plVar9 = **(long **)(lVar21 + uVar17 * 8);
                    **(undefined8 **)(lVar21 + uVar17 * 8) = plVar9;
                    plVar9 = plVar19;
                  }
                }
              }
            }
            else {
              if (uVar13 <= uVar17) {
                if ((uVar17 | uVar13) >> 0x20 == 0) {
                  uVar17 = (uVar17 & 0xffffffff) % (uVar13 & 0xffffffff);
                }
                else {
                  uVar17 = uVar17 % uVar13;
                }
              }
              *(undefined **)(lVar21 + uVar17 * 8) = &DAT_0f772568;
              plVar19 = (long *)*plVar9;
              while (plVar19 != (long *)0x0) {
                uVar18 = plVar19[1];
                if (uVar13 <= uVar18) {
                  if ((uVar18 | uVar13) >> 0x20 == 0) {
                    uVar18 = (uVar18 & 0xffffffff) % (uVar13 & 0xffffffff);
                  }
                  else {
                    uVar18 = uVar18 % uVar13;
                  }
                }
                if (uVar18 != uVar17) {
                  if (*(long *)(lVar21 + uVar18 * 8) == 0) {
                    *(long **)(lVar21 + uVar18 * 8) = plVar9;
                    uVar17 = uVar18;
                  }
                  else {
                    *plVar9 = *plVar19;
                    *plVar19 = **(long **)(lVar21 + uVar18 * 8);
                    **(undefined8 **)(lVar21 + uVar18 * 8) = plVar19;
                    plVar19 = plVar9;
                  }
                }
                plVar9 = plVar19;
                plVar19 = (long *)*plVar9;
              }
            }
          }
        }
        else {
          uVar13 = FUN_0412c3f0();
          bVar22 = uVar13 < _DAT_0f772560;
          if (_DAT_0f772560 < uVar13) goto LAB_0ecd76eb;
LAB_0ecd77ef:
          uVar18 = _DAT_0f772560;
          if (bVar22) {
            fVar23 = (float)func_0x0eee3ab0((float)_DAT_0f772570 / _DAT_0f772578);
            uVar17 = (long)(fVar23 - _DAT_01198778) & (long)fVar23 >> 0x3f | (long)fVar23;
            if ((uVar18 < 3) ||
               (uVar14 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
               uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333),
               1 < (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar17 = FUN_0412c3f0(uVar17);
              lVar10 = _DAT_0f772558;
              if (uVar17 < uVar13) {
                uVar17 = uVar13;
              }
            }
            else {
              if (1 < uVar17) {
                lVar10 = 0x3f;
                if (uVar17 - 1 != 0) {
                  for (; uVar17 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                  }
                }
                uVar17 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
              }
              lVar10 = _DAT_0f772558;
              if (uVar17 < uVar13) {
                uVar17 = uVar13;
              }
            }
            uVar13 = uVar17;
            _DAT_0f772558 = lVar10;
            if (uVar13 < uVar18) {
              if (uVar13 != 0) goto LAB_0ecd76eb;
              _DAT_0f772558 = 0;
              if (lVar10 != 0) {
                func_0x0412a280(lVar10,_DAT_0f772560 << 3);
              }
              _DAT_0f772560 = 0;
            }
          }
        }
        uVar18 = _DAT_0f772560;
        if ((_DAT_0f772560 & _DAT_0f772560 - 1) != 0) {
          if (_DAT_0f772560 <= uVar20) {
            if ((uVar20 | _DAT_0f772560) >> 0x20 == 0) {
              uVar13 = (ulong)uVar1 % (_DAT_0f772560 & 0xffffffff);
              plVar9 = *(long **)(_DAT_0f772558 + uVar13 * 8);
              goto joined_r0x0ecd7a79;
            }
            uVar20 = uVar20 % _DAT_0f772560;
          }
          plVar9 = *(long **)(_DAT_0f772558 + uVar20 * 8);
          uVar13 = uVar20;
          goto joined_r0x0ecd79ee;
        }
        uVar13 = uVar20 & _DAT_0f772560 - 1;
        plVar9 = *(long **)(_DAT_0f772558 + uVar13 * 8);
joined_r0x0ecd7a79:
        if (plVar9 == (long *)0x0) goto LAB_0ecd7623;
LAB_0ecd79f4:
        *plVar12 = *plVar9;
        *plVar9 = (long)plVar12;
      }
      else {
        fVar23 = (float)(long)uVar18;
        if (uVar18 == 0) goto LAB_0ecd7670;
LAB_0ecd7603:
        if (fVar23 * _DAT_0f772578 < (float)(_DAT_0f772570 + 1)) goto LAB_0ecd7670;
        plVar9 = *(long **)(_DAT_0f772558 + uVar13 * 8);
joined_r0x0ecd79ee:
        if (plVar9 != (long *)0x0) goto LAB_0ecd79f4;
LAB_0ecd7623:
        lVar10 = _DAT_0f772558;
        *plVar12 = (long)_DAT_0f772568;
        _DAT_0f772568 = plVar12;
        *(undefined **)(lVar10 + uVar13 * 8) = &DAT_0f772568;
        if (*plVar12 != 0) {
          uVar13 = *(ulong *)(*plVar12 + 8);
          if ((uVar18 & uVar18 - 1) == 0) {
            *(long **)(lVar10 + (uVar13 & uVar18 - 1) * 8) = plVar12;
          }
          else {
            if (uVar18 <= uVar13) {
              if ((uVar13 | uVar18) >> 0x20 == 0) {
                *(long **)(lVar10 + ((uVar13 & 0xffffffff) % (uVar18 & 0xffffffff)) * 8) = plVar12;
                goto LAB_0ecd79fe;
              }
              uVar13 = uVar13 % uVar18;
            }
            *(long **)(lVar10 + uVar13 * 8) = plVar12;
          }
        }
      }
LAB_0ecd79fe:
      _DAT_0f772570 = _DAT_0f772570 + 1;
      plVar12 = plStack_a8;
LAB_0ecd7a0d:
      if ((uStack_1a8 & 1) != 0) {
        func_0x0412a280(lStack_198,uStack_1a8 & 0xfffffffffffffffe);
      }
      pppppuVar16 = pppppuStack_a0;
      if (pcStack_170 != (code *)0x0) {
        (*pcStack_170)(&pppppppuStack_188);
      }
      if (pcStack_60 != (code *)0x0) {
        (*pcStack_60)(&uStack_78);
      }
LAB_0ecd7160:
      pppppuVar15 = pppppuVar15 + 0xd;
      plVar9 = plStack_a8;
      pppppuVar7 = pppppuStack_a0;
      if (pppppuVar15 == pppppuVar16) goto LAB_0ecd7b4b;
      goto LAB_0ecd716d;
    }
LAB_0ecd72e1:
    plStack_b0 = plVar19;
    plStack_b8 = plVar9;
    auVar24 = func_0x0ed6ae90(&plStack_b8);
    uVar13 = auVar24._8_8_;
    if (uVar13 < 0xfffffffffffffff8) {
      if (uVar13 < 0x17) {
        uStack_1a8 = CONCAT71(uStack_1a8._1_7_,auVar24[8] * '\x02');
        lVar10 = (long)&uStack_1a8 + 1;
        if (uVar13 == 0) {
          uVar13 = 0;
          goto LAB_0ecd7379;
        }
      }
      else {
        uVar18 = (uVar13 | 7) + 1;
        if ((uVar13 | 7) == 0x17) {
          uVar18 = 0x1a;
        }
        lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar18);
        if (lVar10 == 0) {
          func_0x0eec74c0(uVar18,0);
        }
        uStack_1a8 = uVar18 | 1;
        uStack_1a0 = uVar13;
        lStack_198 = lVar10;
      }
      func_0x0eee2ee0(lVar10,auVar24._0_8_,uVar13);
      goto LAB_0ecd7379;
    }
    func_0x04882e30();
LAB_0ecd7c67:
    func_0x04882eb0();
LAB_0ecd7c6c:
    iVar8 = func_0x04108328(&DAT_0f730c88);
    if (iVar8 != 0) {
      func_0x0d944c40(0xf730c70);
      func_0x0410844d(&DAT_0f730c88);
    }
  } while( true );
}


