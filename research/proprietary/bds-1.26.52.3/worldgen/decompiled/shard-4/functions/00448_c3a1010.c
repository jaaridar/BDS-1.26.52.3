/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc4a1010 (ELF vaddr 0xc3a1010)
 * Label: caller-of-callee
 * Body:  [[0c4a1010, 0c4a125e] [0c4a1260, 0c4a135d] [0c4a1360, 0c4a15db] [0c4a15e0, 0c4a1618] [0c4a1620, 0c4a1691] [0c4a16a0, 0c4a16b8] [0c4a16c0, 0c4a17a5] [0c4a17b0, 0c4a17f0] [0c4a1800, 0c4a1823] [0c4a1830, 0c4a1b85] [0c4a1b90, 0c4a1c67]]
 * Ghidra: FUN_0c4a1010
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0c4a1010(void)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ******ppppppuVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 *******pppppppuVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  long lVar19;
  bool bVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  long *plStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined8 *******pppppppuStack_168;
  long *plStack_160;
  code *pcStack_150;
  int iStack_148;
  char cStack_144;
  undefined8 uStack_140;
  long lStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long *plStack_120;
  long *plStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 *****pppppuStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined8 *******pppppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined4 uStack_a8;
  undefined8 *****pppppuStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 *******pppppppuStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plStack_180 = &lStack_110;
  uStack_e8 = 0;
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  pppppuStack_f8 = (undefined8 *****)0x0;
  pppppuStack_f0 = (undefined8 *****)0x0;
  lStack_108 = 0;
  lStack_100 = 0;
  plStack_118 = (long *)0x0;
  lStack_110 = 0;
  puStack_128 = (undefined *)0x0;
  plStack_120 = (long *)0x0;
  uStack_e0 = 0x3f600000;
  func_0x048af640(plStack_180,8);
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  puStack_128 = &UNK_0f534768;
  plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar9 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&UNK_0ef44a60;
  plStack_120 = plVar9 + 3;
  *(undefined1 *)(plVar9 + 3) = 1;
  puStack_128 = &UNK_0ef471f0;
  _DAT_0f6e6290 = 0;
  _DAT_0f6e6298 = 0;
  _DAT_0f6e62a0 = (long *)0x0;
  _DAT_0f6e62a8 = 0;
  _DAT_0f6e62b0 = 1.0;
  plStack_118 = plVar9;
  func_0x0c4a0eb0(&puStack_128);
  if (DAT_0f5b4170 == '\0') goto LAB_0c4a1c37;
LAB_0c4a1133:
  pppppuVar18 = (undefined8 *****)
                (lStack_110 +
                (ulong)((int)((ulong)(lStack_108 - lStack_110) >> 3) - 1U & _DAT_0f5b415c) * 8);
  do {
    ppppuVar3 = *pppppuVar18;
    if (ppppuVar3 == (undefined8 ****)0xffffffffffffffff) goto LAB_0c4a118c;
    pppppuVar18 = pppppuStack_f8 + (long)ppppuVar3 * 3;
  } while (*(uint *)(pppppuStack_f8 + (long)ppppuVar3 * 3 + 1) != _DAT_0f5b415c);
  if (pppppuVar18 == pppppuStack_f0) {
LAB_0c4a118c:
    pppppppuStack_168 = (undefined8 *******)0x0;
    plStack_160 = (long *)0x0;
    func_0x048b1dc0(&pppppppuStack_168);
    pppppppuStack_b8 = pppppppuStack_168;
    plStack_180 = plStack_160;
  }
  else {
    pppppppuStack_b8 = (undefined8 *******)pppppuVar18[2];
  }
  if (pppppppuStack_b8 == (undefined8 *******)0x0) {
    lVar10 = func_0x048aead0(plStack_180);
    plVar9 = plStack_180;
    if (*(long *)(lVar10 + 0x78) == 0) goto LAB_0c4a1b0c;
    lVar10 = func_0x048aead0(plStack_180);
    pppppuVar18 = *(undefined8 ******)(*(long *)(lVar10 + 0x78) + 0x48);
    lVar10 = func_0x048aead0(plVar9);
    pppppuStack_b0 = *(undefined8 ******)(*(long *)(lVar10 + 0x78) + 0x50);
    if (pppppuVar18 == pppppuStack_b0) goto LAB_0c4a1b0c;
  }
  else {
    ppppppuVar4 = pppppppuStack_b8[0xf];
    if (ppppppuVar4 == (undefined8 ******)0x0) {
LAB_0c4a1b0c:
      plVar9 = plStack_118;
      puStack_128 = &UNK_0f534768;
      if (plStack_118 == (long *)0x0) {
        *(undefined1 *)plStack_120 = 0;
      }
      else {
        *(undefined1 *)plStack_120 = 0;
        LOCK();
        plVar5 = plStack_118 + 1;
        lVar10 = *plVar5;
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          func_0x0412c2d0(plVar9);
        }
      }
      lVar10 = lStack_d8;
      if (lStack_d8 != 0) {
        for (lVar19 = CONCAT62(uStack_ce,uStack_d0); lVar10 != lVar19; lVar19 = lVar19 + -0x38) {
          if ((*(byte *)(lVar19 + -0x38) & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(lVar19 + -0x28),
                            *(ulong *)(lVar19 + -0x38) & 0xfffffffffffffffe);
          }
        }
        uStack_d0 = (undefined2)lVar10;
        uStack_ce = (undefined6)((ulong)lVar10 >> 0x10);
        func_0x0412a280(lStack_d8,CONCAT62(uStack_c6,uStack_c8) - lStack_d8);
      }
      pppppppuStack_168 = (undefined8 *******)&pppppuStack_f8;
      func_0x048b0f50(&pppppppuStack_168);
      if (lStack_110 != 0) {
        lStack_108 = lStack_110;
        func_0x0412a280(lStack_110,lStack_100 - lStack_110);
      }
      return;
    }
    pppppuVar18 = ppppppuVar4[9];
    pppppuStack_b0 = ppppppuVar4[10];
    if (pppppuVar18 == pppppuStack_b0) goto LAB_0c4a1b0c;
  }
  do {
    uStack_a8 = *(undefined4 *)pppppuVar18;
    plStack_98 = plStack_180;
    pppppuStack_a0 = pppppuVar18;
    plVar9 = (long *)(*(code *)pppppuVar18[7])();
    uVar7 = uStack_a8;
    if (*(uint *)(*plVar9 + 4) == _DAT_0f5b415c) {
      pppppppuVar11 = pppppppuStack_b8;
      if (pppppppuStack_b8 == (undefined8 *******)0x0) {
        pppppppuVar11 = (undefined8 *******)func_0x048aead0(plStack_180,0,uStack_a8);
      }
      pppppppuVar11 = (undefined8 *******)FUN_048b0c90(plStack_180,pppppppuVar11,uVar7,1);
      if (pppppppuVar11 == (undefined8 *******)0x0) {
        pppppppuStack_168 = (undefined8 *******)0x0;
        plStack_160 = (long *)0x0;
        func_0x048b0d20(&pppppppuStack_168);
        pppppppuStack_78 = pppppppuStack_168;
        plStack_70 = plStack_160;
        if (pppppppuStack_168 != (undefined8 *******)0x0) goto LAB_0c4a1329;
        uStack_198 = uStack_198 & 0xffffffffffffff00;
        uVar17 = 0;
        lVar10 = (long)&uStack_198 + 1;
      }
      else {
        plStack_70 = plStack_180;
        pppppppuStack_78 = pppppppuVar11;
LAB_0c4a1329:
        auVar22 = func_0x0ed6ae90(&pppppppuStack_78);
        uVar17 = auVar22._8_8_;
        if (0xfffffffffffffff7 < uVar17) break;
        if (uVar17 < 0x17) {
          uStack_198 = CONCAT71(uStack_198._1_7_,auVar22[8] * '\x02');
          lVar10 = (long)&uStack_198 + 1;
          if (uVar17 == 0) {
            uVar17 = 0;
            goto LAB_0c4a13b9;
          }
        }
        else {
          uVar12 = (uVar17 | 7) + 1;
          if ((uVar17 | 7) == 0x17) {
            uVar12 = 0x1a;
          }
          lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12);
          if (lVar10 == 0) {
            func_0x0eec74c0(uVar12,0);
          }
          uStack_198 = uVar12 | 1;
          uStack_190 = uVar17;
          lStack_188 = lVar10;
        }
        memmove(lVar10,auVar22._0_8_,uVar17);
      }
LAB_0c4a13b9:
      *(undefined1 *)(lVar10 + uVar17) = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      pcStack_60 = (code *)0x0;
      pppppppuStack_78 = (undefined8 *******)0x0;
      plStack_70 = (long *)0x0;
      func_0x05d84ba0(&pppppppuStack_78);
      func_0x05d9a920(&pppppppuStack_168,&pppppuStack_a0,&pppppppuStack_78);
      uVar6 = uStack_140;
      pppppppuVar11 = pppppppuStack_168;
      if (cStack_144 == '\x02') {
        pppppppuVar11 = &pppppppuStack_168;
      }
      if (pppppppuVar11 == (undefined8 *******)0x0 || iStack_148 != 0x3b30fee3) {
        if (lStack_138 == 0) {
          (*pcStack_130)(0,&pppppppuStack_168,0);
        }
        pppppppuVar11 = pppppppuStack_168;
        if (cStack_144 == '\x02') {
          pppppppuVar11 = &pppppppuStack_168;
        }
        pppppppuVar11 =
             (undefined8 *******)func_0x0488e200(uVar6,lStack_138,0x3b30fee3,pppppppuVar11);
      }
      bVar20 = (uStack_198 & 1) == 0;
      lVar10 = lStack_188;
      if (bVar20) {
        lVar10 = (long)&uStack_198 + 1;
      }
      uVar1 = *(undefined1 *)pppppppuVar11;
      uVar17 = uStack_198 >> 1 & 0x7f;
      if (!bVar20) {
        uVar17 = uStack_190;
      }
      uVar12 = func_0x04883620(&plStack_90,lVar10,uVar17);
      uVar17 = _DAT_0f6e6298;
      if (_DAT_0f6e6298 != 0) {
        uVar15 = _DAT_0f6e6298 - (_DAT_0f6e6298 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          uVar13 = _DAT_0f6e6298 - 1 & uVar12;
        }
        else {
          uVar13 = uVar12;
          if (_DAT_0f6e6298 <= uVar12) {
            if ((uVar12 | _DAT_0f6e6298) >> 0x20 == 0) {
              uVar13 = (uVar12 & 0xffffffff) % (_DAT_0f6e6298 & 0xffffffff);
            }
            else {
              uVar13 = uVar12 % _DAT_0f6e6298;
            }
          }
        }
        plVar9 = *(long **)(_DAT_0f6e6290 + uVar13 * 8);
        uStack_178 = uVar13;
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          lStack_170 = lStack_188;
          uVar16 = uStack_190;
          if ((uStack_198 & 1) == 0) {
            lStack_170 = (long)&uStack_198 + 1;
            uVar16 = uStack_198 >> 1 & 0x7f;
          }
          if ((byte)(uVar15 >> 0x38) < 2) {
            uVar15 = _DAT_0f6e6298 - 1;
            do {
              if (plVar9[1] == uVar12) {
                bVar2 = *(byte *)(plVar9 + 2);
                if ((bVar2 & 1) == 0) {
                  uVar14 = (ulong)(bVar2 >> 1);
                }
                else {
                  uVar14 = plVar9[3];
                }
                if (uVar14 == uVar16) {
                  if ((bVar2 & 1) == 0) {
                    lVar10 = (long)plVar9 + 0x11;
                  }
                  else {
                    lVar10 = plVar9[4];
                  }
                  iVar8 = bcmp(lVar10,lStack_170,uVar16);
                  uVar13 = uStack_178;
                  if (iVar8 == 0) goto joined_r0x0c4a1708;
                }
              }
              else if ((plVar9[1] & uVar15) != uVar13) break;
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
          else {
            do {
              uVar15 = plVar9[1];
              if (uVar15 == uVar12) {
                bVar2 = *(byte *)(plVar9 + 2);
                if ((bVar2 & 1) == 0) {
                  uVar15 = (ulong)(bVar2 >> 1);
                }
                else {
                  uVar15 = plVar9[3];
                }
                if (uVar15 == uVar16) {
                  if ((bVar2 & 1) == 0) {
                    lVar10 = (long)plVar9 + 0x11;
                  }
                  else {
                    lVar10 = plVar9[4];
                  }
                  iVar8 = bcmp(lVar10,lStack_170,uVar16);
                  uVar13 = uStack_178;
                  if (iVar8 == 0) goto joined_r0x0c4a1708;
                }
              }
              else {
                if (uVar17 <= uVar15) {
                  if ((uVar15 | uVar17) >> 0x20 == 0) {
                    uVar15 = (uVar15 & 0xffffffff) % (uVar17 & 0xffffffff);
                  }
                  else {
                    uVar15 = uVar15 % uVar17;
                  }
                }
                if (uVar15 != uVar13) break;
              }
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
        }
      }
      plVar9 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar9 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_88 = &DAT_0f6e6290;
      uStack_80 = 1;
      *plVar9 = 0;
      plVar9[1] = uVar12;
      plVar9[4] = lStack_188;
      plVar9[2] = uStack_198;
      plVar9[3] = uStack_190;
      uStack_198 = 0;
      uStack_190 = 0;
      lStack_188 = 0;
      *(undefined1 *)(plVar9 + 5) = uVar1;
      plStack_90 = plVar9;
      if ((long)uVar17 < 0) {
        fVar21 = (float)uVar17;
        if (uVar17 != 0) goto LAB_0c4a1813;
LAB_0c4a1830:
        uVar15 = 1;
        if (2 < uVar17) {
          uVar15 = (ulong)((uVar17 & uVar17 - 1) != 0);
        }
        uVar15 = uVar17 * 2 | uVar15;
        fVar21 = (float)func_0x0eee3ab0((float)(_DAT_0f6e62a8 + 1) / _DAT_0f6e62b0);
        uVar17 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
        if (uVar17 < uVar15) {
          uVar17 = uVar15;
        }
        uVar15 = 2;
        if ((uVar17 == 1) || (uVar15 = uVar17, (uVar17 & uVar17 - 1) == 0)) {
          bVar20 = uVar15 < _DAT_0f6e6298;
          if (uVar15 <= _DAT_0f6e6298) goto LAB_0c4a18c8;
LAB_0c4a18a0:
          func_0x0c4b5a30(&DAT_0f6e6290,uVar15);
        }
        else {
          uVar15 = func_0x0412c3f0();
          bVar20 = uVar15 < _DAT_0f6e6298;
          if (_DAT_0f6e6298 < uVar15) goto LAB_0c4a18a0;
LAB_0c4a18c8:
          uVar17 = _DAT_0f6e6298;
          if (bVar20) {
            fVar21 = (float)func_0x0eee3ab0((float)_DAT_0f6e62a8 / _DAT_0f6e62b0);
            uVar13 = (long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21;
            if ((uVar17 < 3) ||
               (uVar16 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
               uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
               1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar13 = func_0x0412c3f0(uVar13);
            }
            else if (1 < uVar13) {
              lVar10 = 0x3f;
              if (uVar13 - 1 != 0) {
                for (; uVar13 - 1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar13 = 1L << (-((byte)lVar10 ^ 0x3f) & 0x3f);
            }
            if (uVar15 <= uVar13) {
              uVar15 = uVar13;
            }
            if (uVar15 < uVar17) goto LAB_0c4a18a0;
          }
        }
        uVar17 = _DAT_0f6e6298;
        if ((_DAT_0f6e6298 & _DAT_0f6e6298 - 1) == 0) {
          uVar15 = uVar12 & _DAT_0f6e6298 - 1;
        }
        else {
          uVar15 = uVar12;
          if (_DAT_0f6e6298 <= uVar12) {
            if ((uVar12 | _DAT_0f6e6298) >> 0x20 == 0) {
              uVar15 = (uVar12 & 0xffffffff) % (_DAT_0f6e6298 & 0xffffffff);
            }
            else {
              uVar15 = uVar12 % _DAT_0f6e6298;
            }
          }
        }
      }
      else {
        fVar21 = (float)(long)uVar17;
        if (uVar17 == 0) goto LAB_0c4a1830;
LAB_0c4a1813:
        uVar15 = uStack_178;
        if (fVar21 * _DAT_0f6e62b0 < (float)(_DAT_0f6e62a8 + 1)) goto LAB_0c4a1830;
      }
      lVar10 = _DAT_0f6e6290;
      plVar5 = *(long **)(_DAT_0f6e6290 + uVar15 * 8);
      if (plVar5 == (long *)0x0) {
        *plVar9 = (long)_DAT_0f6e62a0;
        _DAT_0f6e62a0 = plVar9;
        *(undefined **)(lVar10 + uVar15 * 8) = &DAT_0f6e62a0;
        if (*plVar9 != 0) {
          uVar12 = *(ulong *)(*plVar9 + 8);
          if ((uVar17 & uVar17 - 1) == 0) {
            *(long **)(lVar10 + (uVar12 & uVar17 - 1) * 8) = plVar9;
          }
          else {
            if (uVar17 <= uVar12) {
              if ((uVar12 | uVar17) >> 0x20 == 0) {
                *(long **)(lVar10 + ((uVar12 & 0xffffffff) % (uVar17 & 0xffffffff)) * 8) = plVar9;
                goto LAB_0c4a1a29;
              }
              uVar12 = uVar12 % uVar17;
            }
            *(long **)(lVar10 + uVar12 * 8) = plVar9;
          }
        }
      }
      else {
        *plVar9 = *plVar5;
        *plVar5 = (long)plVar9;
      }
LAB_0c4a1a29:
      _DAT_0f6e62a8 = _DAT_0f6e62a8 + 1;
joined_r0x0c4a1708:
      if (pcStack_150 != (code *)0x0) {
        (*pcStack_150)(&pppppppuStack_168);
      }
      if (pcStack_60 != (code *)0x0) {
        (*pcStack_60)(&pppppppuStack_78);
      }
      if ((uStack_198 & 1) != 0) {
        func_0x0412a280(lStack_188,uStack_198 & 0xfffffffffffffffe);
      }
    }
    pppppuVar18 = pppppuVar18 + 0xd;
    if (pppppuVar18 == pppppuStack_b0) goto LAB_0c4a1b0c;
  } while( true );
  func_0x04882e30();
LAB_0c4a1c37:
  iVar8 = FUN_04108328(&DAT_0f5b4170);
  if (iVar8 != 0) {
    func_0x07ad5710(0xf5b4158);
    func_0x0410844d(&DAT_0f5b4170);
  }
  goto LAB_0c4a1133;
}


