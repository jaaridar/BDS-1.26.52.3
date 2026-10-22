/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc647d40 (ELF vaddr 0xc547d40)
 * Label: caller-of-callee
 * Body:  [[0c647d40, 0c647d40]]
 * Ghidra: _INIT_1716
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1716(void)

{
  byte bVar1;
  uint uVar2;
  uint ****ppppuVar3;
  uint ******ppppppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint *****pppppuVar8;
  uint *******pppppppuVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  uint *******pppppppuVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint *****pppppuVar19;
  uint *****pppppuVar20;
  long *plVar21;
  ulong uVar22;
  long *unaff_R12;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined8 uStack_190;
  ulong uStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  uint *******pppppppuStack_158;
  long *plStack_150;
  code *pcStack_140;
  int iStack_138;
  char cStack_134;
  undefined8 uStack_130;
  long lStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  uint *****pppppuStack_e8;
  uint *****pppppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  uint *****pppppuStack_a8;
  uint *******pppppppuStack_a0;
  long *plStack_98;
  uint *****pppppuStack_90;
  uint *******pppppppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  uint *****pppppuStack_40;
  long *plStack_38;
  
  _DAT_0f6ea000 = 0;
  _DAT_0f6ea008 = 0;
  _DAT_0f6ea00c = _UNK_014eb060;
  _DAT_0f6ea014 = 0x3f800000;
  plVar21 = &lStack_100;
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_b6 = 0;
  uStack_b0 = 0;
  uStack_ae = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  pppppuStack_e8 = (uint *****)0x0;
  pppppuStack_e0 = (uint *****)0x0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  plStack_108 = (long *)0x0;
  lStack_100 = 0;
  puStack_118 = (undefined *)0x0;
  plStack_110 = (long *)0x0;
  uStack_d0 = 0x3f600000;
  func_0x048af640(plVar21,8);
  uStack_b8 = 0;
  uStack_b6 = 0;
  uStack_b0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  puStack_118 = &UNK_0f534768;
  plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar11 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&UNK_0ef44a60;
  plStack_110 = plVar11 + 3;
  *(undefined1 *)(plVar11 + 3) = 1;
  puStack_118 = &UNK_0ef471f0;
  lRam000000000f6ea018 = 0;
  plRam000000000f6ea020 = (long *)0x0;
  plRam000000000f6ea028 = (long *)0x0;
  uRam000000000f6ea030 = 0;
  fRam000000000f6ea038 = 1.0;
  _DAT_0f6ea040 = 0;
  _DAT_0f6ea048 = (long *)0x0;
  plRam000000000f6ea050 = (long *)0x0;
  uRam000000000f6ea058 = 0;
  fRam000000000f6ea060 = 1.0;
  plStack_108 = plVar11;
  func_0x0eb6df80(&puStack_118);
  if (DAT_0f5b4958 == '\0') goto code_r0x0c64969b;
  do {
    pppppuVar19 = (uint *****)
                  (lStack_100 +
                  (ulong)((int)((ulong)(lStack_f8 - lStack_100) >> 3) - 1U & _DAT_0f5b4944) * 8);
    do {
      ppppuVar3 = *pppppuVar19;
      if (ppppuVar3 == (uint ****)0xffffffffffffffff) goto code_r0x0c647f04;
      pppppuVar19 = pppppuStack_e8 + (long)ppppuVar3 * 3;
    } while (*(uint *)(pppppuStack_e8 + (long)ppppuVar3 * 3 + 1) != _DAT_0f5b4944);
    if (pppppuVar19 == pppppuStack_e0) {
code_r0x0c647f04:
      pppppppuStack_158 = (uint *******)0x0;
      plStack_150 = (long *)0x0;
      func_0x048b1dc0(&pppppppuStack_158);
      pppppppuVar13 = pppppppuStack_158;
      plVar21 = plStack_150;
      if (pppppppuStack_158 != (uint *******)0x0) goto code_r0x0c647f7f;
code_r0x0c647f26:
      lVar12 = func_0x048aead0(plVar21);
      if (*(long *)(lVar12 + 0x78) == 0) goto code_r0x0c64954b;
      lVar12 = func_0x048aead0(plVar21);
      pppppuVar19 = *(uint ******)(*(long *)(lVar12 + 0x78) + 0x48);
      lVar12 = func_0x048aead0(plVar21);
      pppppuVar20 = *(uint ******)(*(long *)(lVar12 + 0x78) + 0x50);
      pppppuVar8 = pppppuVar20;
      pppppppuVar9 = pppppppuVar13;
      plVar11 = plVar21;
      if (pppppuVar19 == pppppuVar20) goto code_r0x0c64954b;
    }
    else {
      pppppppuVar13 = (uint *******)pppppuVar19[2];
      if (pppppppuVar13 == (uint *******)0x0) goto code_r0x0c647f26;
code_r0x0c647f7f:
      ppppppuVar4 = pppppppuVar13[0xf];
      if (ppppppuVar4 == (uint ******)0x0) {
code_r0x0c64954b:
        plVar21 = plStack_108;
        puStack_118 = &UNK_0f534768;
        if (plStack_108 == (long *)0x0) {
          *(undefined1 *)plStack_110 = 0;
        }
        else {
          *(undefined1 *)plStack_110 = 0;
          LOCK();
          plVar11 = plStack_108 + 1;
          lVar12 = *plVar11;
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (lVar12 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            func_0x0412c2d0(plVar21);
          }
        }
        lVar12 = lStack_c8;
        if (lStack_c8 != 0) {
          for (lVar24 = CONCAT62(uStack_be,uStack_c0); lVar12 != lVar24; lVar24 = lVar24 + -0x38) {
            if ((*(byte *)(lVar24 + -0x38) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar24 + -0x28),
                              *(ulong *)(lVar24 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_c0 = (undefined2)lVar12;
          uStack_be = (undefined6)((ulong)lVar12 >> 0x10);
          func_0x0412a280(lStack_c8,CONCAT62(uStack_b6,uStack_b8) - lStack_c8);
        }
        pppppppuStack_158 = (uint *******)&pppppuStack_e8;
        func_0x048b0f50(&pppppppuStack_158);
        if (lStack_100 != 0) {
          lStack_f8 = lStack_100;
          func_0x0412a280(lStack_100,lStack_f0 - lStack_100);
        }
        func_0x0eee2f40(&UNK_0c6353b0,0xf6ea018,0xf53dab8);
        return;
      }
      pppppuVar19 = ppppppuVar4[9];
      pppppuVar20 = ppppppuVar4[10];
      pppppuVar8 = pppppuVar20;
      pppppppuVar9 = pppppppuVar13;
      plVar11 = plVar21;
      if (pppppuVar19 == pppppuVar20) goto code_r0x0c64954b;
    }
code_r0x0c647fcd:
    plStack_98 = plVar11;
    pppppppuStack_a0 = pppppppuVar9;
    pppppuStack_a8 = pppppuVar8;
    uStack_48 = *(undefined4 *)pppppuVar19;
    pppppuStack_40 = pppppuVar19;
    plStack_38 = plVar21;
    plVar11 = (long *)(*(code *)pppppuVar19[7])(plVar21);
    uVar7 = uStack_48;
    if (*(uint *)(*plVar11 + 4) != _DAT_0f5b4944) {
code_r0x0c647fc0:
      pppppuVar19 = pppppuVar19 + 0xd;
      pppppuVar8 = pppppuStack_a8;
      pppppppuVar9 = pppppppuStack_a0;
      plVar11 = plStack_98;
      if (pppppuVar19 == pppppuVar20) goto code_r0x0c64954b;
      goto code_r0x0c647fcd;
    }
    if (pppppppuVar13 == (uint *******)0x0) {
      pppppppuVar13 = (uint *******)func_0x048aead0(plVar21,0);
    }
    pppppppuVar13 = (uint *******)func_0x048b0c90(plVar21,pppppppuVar13,uVar7,1);
    plVar16 = plVar21;
    plVar11 = unaff_R12;
    if (pppppppuVar13 == (uint *******)0x0) {
      pppppppuStack_158 = (uint *******)0x0;
      plStack_150 = (long *)0x0;
      func_0x048b0d20(&pppppppuStack_158);
      pppppppuVar13 = pppppppuStack_158;
      plVar16 = plStack_150;
      if (pppppppuStack_158 != (uint *******)0x0) goto code_r0x0c648076;
      uStack_190 = (long *)((ulong)uStack_190 & 0xffffffffffffff00);
      uVar15 = 0;
      lVar12 = (long)&uStack_190 + 1;
code_r0x0c648109:
      *(undefined1 *)(lVar12 + uVar15) = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      pcStack_70 = (code *)0x0;
      pppppppuStack_88 = (uint *******)0x0;
      plStack_80 = (long *)0x0;
      func_0x05d84ba0(&pppppppuStack_88);
      func_0x05d9a920(&pppppppuStack_158,&pppppuStack_40,&pppppppuStack_88);
      uVar6 = uStack_130;
      pppppuStack_90 = pppppuVar19;
      pppppppuVar13 = pppppppuStack_158;
      if (cStack_134 == '\x02') {
        pppppppuVar13 = (uint *******)&pppppppuStack_158;
      }
      if (pppppppuVar13 == (uint *******)0x0 || iStack_138 != 0x5bc9bf25) {
        if (lStack_128 == 0) {
          (*pcStack_120)(0,&pppppppuStack_158,0);
        }
        pppppppuVar13 = pppppppuStack_158;
        if (cStack_134 == '\x02') {
          pppppppuVar13 = (uint *******)&pppppppuStack_158;
        }
        pppppppuVar13 = (uint *******)func_0x0488e200(uVar6,lStack_128,0x5bc9bf25,pppppppuVar13);
      }
      bVar26 = ((ulong)uStack_190 & 1) == 0;
      lVar12 = lStack_180;
      if (bVar26) {
        lVar12 = (long)&uStack_190 + 1;
      }
      uVar2 = *(uint *)pppppppuVar13;
      plVar16 = (long *)(ulong)uVar2;
      uVar15 = (ulong)uStack_190 >> 1 & 0x7f;
      if (!bVar26) {
        uVar15 = uStack_188;
      }
      unaff_R12 = (long *)func_0x04883620(&plStack_170,lVar12,uVar15);
      plVar21 = plRam000000000f6ea020;
      if (plRam000000000f6ea020 != (long *)0x0) {
        uVar15 = (long)plRam000000000f6ea020 -
                 ((ulong)plRam000000000f6ea020 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          plVar25 = (long *)((long)plRam000000000f6ea020 - 1U & (ulong)unaff_R12);
          plVar14 = *(long **)(lRam000000000f6ea018 + (long)plVar25 * 8);
        }
        else if (unaff_R12 < plRam000000000f6ea020) {
          plVar14 = *(long **)(lRam000000000f6ea018 + (long)unaff_R12 * 8);
          plVar25 = unaff_R12;
        }
        else if (((ulong)unaff_R12 | (ulong)plRam000000000f6ea020) >> 0x20 == 0) {
          plVar25 = (long *)(((ulong)unaff_R12 & 0xffffffff) %
                            ((ulong)plRam000000000f6ea020 & 0xffffffff));
          plVar14 = *(long **)(lRam000000000f6ea018 + (long)plVar25 * 8);
        }
        else {
          plVar14 = *(long **)(lRam000000000f6ea018 +
                              (long)((ulong)unaff_R12 % (ulong)plRam000000000f6ea020) * 8);
          plVar25 = (long *)((ulong)unaff_R12 % (ulong)plRam000000000f6ea020);
        }
        plVar11 = unaff_R12;
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          lStack_178 = lStack_180;
          uVar23 = uStack_188;
          if (((ulong)uStack_190 & 1) == 0) {
            lStack_178 = (long)&uStack_190 + 1;
            uVar23 = (ulong)uStack_190 >> 1 & 0x7f;
          }
          if ((byte)(uVar15 >> 0x38) < 2) {
            uVar15 = (long)plRam000000000f6ea020 - 1;
            do {
              if ((long *)plVar14[1] == unaff_R12) {
                bVar1 = *(byte *)(plVar14 + 2);
                if ((bVar1 & 1) == 0) {
                  uVar22 = (ulong)(bVar1 >> 1);
                }
                else {
                  uVar22 = plVar14[3];
                }
                if (uVar22 == uVar23) {
                  if ((bVar1 & 1) == 0) {
                    lVar12 = (long)plVar14 + 0x11;
                  }
                  else {
                    lVar12 = plVar14[4];
                  }
                  iVar10 = func_0x0eee3000(lVar12,lStack_178,uVar23);
                  if (iVar10 == 0) goto code_r0x0c6492b1;
                }
              }
              else if ((long *)((ulong)plVar14[1] & uVar15) != plVar25) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              plVar18 = (long *)plVar14[1];
              if (plVar18 == unaff_R12) {
                bVar1 = *(byte *)(plVar14 + 2);
                if ((bVar1 & 1) == 0) {
                  uVar15 = (ulong)(bVar1 >> 1);
                }
                else {
                  uVar15 = plVar14[3];
                }
                if (uVar15 == uVar23) {
                  if ((bVar1 & 1) == 0) {
                    lVar12 = (long)plVar14 + 0x11;
                  }
                  else {
                    lVar12 = plVar14[4];
                  }
                  iVar10 = func_0x0eee3000(lVar12,lStack_178,uVar23);
                  if (iVar10 == 0) goto code_r0x0c6492b1;
                }
              }
              else {
                if (plVar21 <= plVar18) {
                  if (((ulong)plVar18 | (ulong)plVar21) >> 0x20 == 0) {
                    plVar18 = (long *)(((ulong)plVar18 & 0xffffffff) % ((ulong)plVar21 & 0xffffffff)
                                      );
                  }
                  else {
                    plVar18 = (long *)((ulong)plVar18 % (ulong)plVar21);
                  }
                }
                if (plVar18 != plVar25) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      unaff_R12 = plVar11;
      if (_DAT_0f6ea048 != (long *)0x0) {
        uVar15 = (long)_DAT_0f6ea048 - ((ulong)_DAT_0f6ea048 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          plVar21 = (long *)(ulong)(uVar2 & (int)_DAT_0f6ea048 - 1U);
        }
        else {
          plVar21 = plVar16;
          if (_DAT_0f6ea048 <= plVar16) {
            plVar21 = (long *)((ulong)plVar16 % ((ulong)_DAT_0f6ea048 & 0xffffffff));
          }
        }
        plVar11 = *(long **)(_DAT_0f6ea040 + (long)plVar21 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if ((byte)(uVar15 >> 0x38) < 2) {
            do {
              if ((long *)plVar11[1] == plVar16) {
                if (*(uint *)(plVar11 + 2) == uVar2) goto code_r0x0c6492b1;
              }
              else if ((long *)((ulong)plVar11[1] & (long)_DAT_0f6ea048 - 1U) != plVar21) break;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              plVar14 = (long *)plVar11[1];
              if (plVar14 == plVar16) {
                if (*(uint *)(plVar11 + 2) == uVar2) goto code_r0x0c6492b1;
              }
              else {
                if (_DAT_0f6ea048 <= plVar14) {
                  if (((ulong)plVar14 | (ulong)_DAT_0f6ea048) >> 0x20 == 0) {
                    if ((long *)(((ulong)plVar14 & 0xffffffff) % ((ulong)_DAT_0f6ea048 & 0xffffffff)
                                ) == plVar21) goto code_r0x0c648519;
                    break;
                  }
                  plVar14 = (long *)((ulong)plVar14 % (ulong)_DAT_0f6ea048);
                }
                if (plVar14 != plVar21) break;
              }
code_r0x0c648519:
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      uVar15 = (ulong)uStack_190 >> 1 & 0x7f;
      lVar12 = (long)&uStack_190 + 1;
      if (((ulong)uStack_190 & 1) != 0) {
        uVar15 = uStack_188;
        lVar12 = lStack_180;
      }
      plVar11 = (long *)func_0x04883620(&plStack_170,lVar12,uVar15);
      plVar21 = plRam000000000f6ea020;
      if (plRam000000000f6ea020 != (long *)0x0) {
        uVar15 = (long)plRam000000000f6ea020 -
                 ((ulong)plRam000000000f6ea020 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          unaff_R12 = (long *)((long)plRam000000000f6ea020 - 1U & (ulong)plVar11);
          plVar14 = *(long **)(lRam000000000f6ea018 + (long)unaff_R12 * 8);
        }
        else {
          unaff_R12 = plVar11;
          if (plRam000000000f6ea020 <= plVar11) {
            if (((ulong)plVar11 | (ulong)plRam000000000f6ea020) >> 0x20 == 0) {
              unaff_R12 = (long *)(((ulong)plVar11 & 0xffffffff) %
                                  ((ulong)plRam000000000f6ea020 & 0xffffffff));
              plVar14 = *(long **)(lRam000000000f6ea018 + (long)unaff_R12 * 8);
              goto joined_r0x0c64868e;
            }
            unaff_R12 = (long *)((ulong)plVar11 % (ulong)plRam000000000f6ea020);
          }
          plVar14 = *(long **)(lRam000000000f6ea018 + (long)unaff_R12 * 8);
        }
joined_r0x0c64868e:
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          lStack_178 = lStack_180;
          uVar23 = uStack_188;
          if (((ulong)uStack_190 & 1) == 0) {
            lStack_178 = (long)&uStack_190 + 1;
            uVar23 = (ulong)uStack_190 >> 1 & 0x7f;
          }
          if ((byte)(uVar15 >> 0x38) < 2) {
            uVar15 = (long)plRam000000000f6ea020 - 1;
            do {
              if ((long *)plVar14[1] == plVar11) {
                bVar1 = *(byte *)(plVar14 + 2);
                if ((bVar1 & 1) == 0) {
                  uVar22 = (ulong)(bVar1 >> 1);
                }
                else {
                  uVar22 = plVar14[3];
                }
                if (uVar22 == uVar23) {
                  if ((bVar1 & 1) == 0) {
                    lVar12 = (long)plVar14 + 0x11;
                  }
                  else {
                    lVar12 = plVar14[4];
                  }
                  iVar10 = func_0x0eee3000(lVar12,lStack_178,uVar23);
                  if (iVar10 == 0) goto code_r0x0c648cf5;
                }
              }
              else if ((long *)((ulong)plVar14[1] & uVar15) != unaff_R12) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              plVar25 = (long *)plVar14[1];
              if (plVar25 == plVar11) {
                bVar1 = *(byte *)(plVar14 + 2);
                if ((bVar1 & 1) == 0) {
                  uVar15 = (ulong)(bVar1 >> 1);
                }
                else {
                  uVar15 = plVar14[3];
                }
                if (uVar15 == uVar23) {
                  if ((bVar1 & 1) == 0) {
                    lVar12 = (long)plVar14 + 0x11;
                  }
                  else {
                    lVar12 = plVar14[4];
                  }
                  iVar10 = func_0x0eee3000(lVar12,lStack_178,uVar23);
                  if (iVar10 == 0) goto code_r0x0c648cf5;
                }
              }
              else {
                if (plVar21 <= plVar25) {
                  if (((ulong)plVar25 | (ulong)plVar21) >> 0x20 == 0) {
                    plVar25 = (long *)(((ulong)plVar25 & 0xffffffff) % ((ulong)plVar21 & 0xffffffff)
                                      );
                  }
                  else {
                    plVar25 = (long *)((ulong)plVar25 % (ulong)plVar21);
                  }
                }
                if (plVar25 != unaff_R12) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_168 = (undefined *)0xf6ea018;
      uStack_160 = 0;
      *plVar14 = 0;
      plVar14[1] = (long)plVar11;
      plStack_170 = plVar14;
      if (((ulong)uStack_190 & 1) == 0) {
        plVar14[4] = lStack_180;
        plVar14[2] = (long)uStack_190;
        plVar14[3] = uStack_188;
      }
      else {
        func_0x0412e5e0(plVar14 + 2,lStack_180,uStack_188);
      }
      *(uint *)(plVar14 + 5) = uVar2;
      uStack_160 = CONCAT71(uStack_160._1_7_,1);
      if ((long)plVar21 < 0) {
        fVar27 = (float)plVar21;
        if (plVar21 != (long *)0x0) goto code_r0x0c6488e3;
code_r0x0c648950:
        uVar15 = 1;
        if ((long *)0x2 < plVar21) {
          uVar15 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
        }
        plVar21 = (long *)((long)plVar21 * 2 | uVar15);
        fVar27 = (float)func_0x0eee3ab0((float)(uRam000000000f6ea030 + 1) / fRam000000000f6ea038);
        plVar25 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27);
        if (plVar25 < plVar21) {
          plVar25 = plVar21;
        }
        plVar21 = (long *)0x2;
        if ((plVar25 == (long *)0x1) ||
           (plVar21 = plVar25, ((ulong)plVar25 & (long)plVar25 - 1U) == 0)) {
          bVar26 = plVar21 < plRam000000000f6ea020;
          plVar25 = plVar21;
          if (plVar21 <= plRam000000000f6ea020) goto code_r0x0c648adf;
code_r0x0c6489cb:
          unaff_R12 = plVar25;
          if ((long *)0x1fffffffffffffff < unaff_R12) goto code_r0x0c649691;
          lVar12 = (long)unaff_R12 * 8;
          lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
          if (lVar24 == 0) {
            func_0x0eec74c0(lVar12,0);
          }
          lVar5 = lRam000000000f6ea018;
          bVar26 = lRam000000000f6ea018 != 0;
          lRam000000000f6ea018 = lVar24;
          if (bVar26) {
            func_0x0412a280(lVar5,(long)plRam000000000f6ea020 << 3);
          }
          lVar24 = lRam000000000f6ea018;
          plRam000000000f6ea020 = unaff_R12;
          func_0x0eee2dd0(lRam000000000f6ea018,0,lVar12);
          plVar21 = plRam000000000f6ea028;
          if (plRam000000000f6ea028 != (long *)0x0) {
            plVar25 = (long *)plRam000000000f6ea028[1];
            uVar15 = (long)unaff_R12 - 1;
            if (((ulong)unaff_R12 & uVar15) == 0) {
              *(undefined8 *)(lVar24 + ((ulong)plVar25 & uVar15) * 8) = 0xf6ea028;
              uVar23 = (ulong)plVar25 & uVar15;
              while (plVar25 = plVar21, plVar21 = (long *)*plVar25, plVar21 != (long *)0x0) {
                uVar22 = plVar21[1] & uVar15;
                if (uVar22 != uVar23) {
                  if (*(long *)(lVar24 + uVar22 * 8) == 0) {
                    *(long **)(lVar24 + uVar22 * 8) = plVar25;
                    uVar23 = uVar22;
                  }
                  else {
                    *plVar25 = *plVar21;
                    *plVar21 = **(long **)(lVar24 + uVar22 * 8);
                    **(undefined8 **)(lVar24 + uVar22 * 8) = plVar21;
                    plVar21 = plVar25;
                  }
                }
              }
            }
            else {
              if (unaff_R12 <= plVar25) {
                if (((ulong)plVar25 | (ulong)unaff_R12) >> 0x20 == 0) {
                  plVar25 = (long *)(((ulong)plVar25 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff)
                                    );
                }
                else {
                  plVar25 = (long *)((ulong)plVar25 % (ulong)unaff_R12);
                }
              }
              *(undefined8 *)(lVar24 + (long)plVar25 * 8) = 0xf6ea028;
              plVar18 = (long *)*plVar21;
              while (plVar18 != (long *)0x0) {
                plVar17 = (long *)plVar18[1];
                if (unaff_R12 <= plVar17) {
                  if (((ulong)plVar17 | (ulong)unaff_R12) >> 0x20 == 0) {
                    plVar17 = (long *)(((ulong)plVar17 & 0xffffffff) %
                                      ((ulong)unaff_R12 & 0xffffffff));
                  }
                  else {
                    plVar17 = (long *)((ulong)plVar17 % (ulong)unaff_R12);
                  }
                }
                if (plVar17 != plVar25) {
                  if (*(long *)(lVar24 + (long)plVar17 * 8) == 0) {
                    *(long **)(lVar24 + (long)plVar17 * 8) = plVar21;
                    plVar25 = plVar17;
                  }
                  else {
                    *plVar21 = *plVar18;
                    *plVar18 = **(long **)(lVar24 + (long)plVar17 * 8);
                    **(undefined8 **)(lVar24 + (long)plVar17 * 8) = plVar18;
                    plVar18 = plVar21;
                  }
                }
                plVar21 = plVar18;
                plVar18 = (long *)*plVar21;
              }
            }
          }
        }
        else {
          plVar21 = (long *)func_0x0412c3f0();
          bVar26 = plVar21 < plRam000000000f6ea020;
          plVar25 = plVar21;
          if (plRam000000000f6ea020 < plVar21) goto code_r0x0c6489cb;
code_r0x0c648adf:
          plVar25 = plRam000000000f6ea020;
          if (bVar26) {
            fVar27 = (float)func_0x0eee3ab0((float)uRam000000000f6ea030 / fRam000000000f6ea038);
            unaff_R12 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f |
                                (long)fVar27);
            if ((plVar25 < (long *)0x3) ||
               (uVar15 = (long)plVar25 - ((ulong)plVar25 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
               1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              unaff_R12 = (long *)func_0x0412c3f0(unaff_R12);
              lVar12 = lRam000000000f6ea018;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            else {
              if ((long *)0x1 < unaff_R12) {
                lVar12 = 0x3f;
                if ((long)unaff_R12 - 1U != 0) {
                  for (; (long)unaff_R12 - 1U >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                unaff_R12 = (long *)(1L << (-((byte)lVar12 ^ 0x3f) & 0x3f));
              }
              lVar12 = lRam000000000f6ea018;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            lRam000000000f6ea018 = lVar12;
            if (unaff_R12 < plVar25) {
              plVar25 = unaff_R12;
              if (unaff_R12 != (long *)0x0) goto code_r0x0c6489cb;
              lRam000000000f6ea018 = 0;
              if (lVar12 != 0) {
                func_0x0412a280(lVar12,(long)plRam000000000f6ea020 << 3);
              }
              plRam000000000f6ea020 = (long *)0x0;
            }
          }
        }
        plVar21 = plRam000000000f6ea020;
        if (((ulong)plRam000000000f6ea020 & (long)plRam000000000f6ea020 - 1U) != 0) {
          if (plRam000000000f6ea020 <= plVar11) {
            if (((ulong)plVar11 | (ulong)plRam000000000f6ea020) >> 0x20 == 0) {
              plVar11 = (long *)(((ulong)plVar11 & 0xffffffff) %
                                ((ulong)plRam000000000f6ea020 & 0xffffffff));
              plVar25 = *(long **)(lRam000000000f6ea018 + (long)plVar11 * 8);
              goto joined_r0x0c6493b7;
            }
            plVar11 = (long *)((ulong)plVar11 % (ulong)plRam000000000f6ea020);
          }
          plVar25 = *(long **)(lRam000000000f6ea018 + (long)plVar11 * 8);
          goto joined_r0x0c648cde;
        }
        plVar11 = (long *)((ulong)plVar11 & (long)plRam000000000f6ea020 - 1U);
        plVar25 = *(long **)(lRam000000000f6ea018 + (long)plVar11 * 8);
joined_r0x0c6493b7:
        if (plVar25 == (long *)0x0) goto code_r0x0c648903;
code_r0x0c648ce4:
        *plVar14 = *plVar25;
        *plVar25 = (long)plVar14;
      }
      else {
        fVar27 = (float)(long)plVar21;
        if (plVar21 == (long *)0x0) goto code_r0x0c648950;
code_r0x0c6488e3:
        if (fVar27 * fRam000000000f6ea038 < (float)(uRam000000000f6ea030 + 1))
        goto code_r0x0c648950;
        plVar25 = *(long **)(lRam000000000f6ea018 + (long)unaff_R12 * 8);
        plVar11 = unaff_R12;
joined_r0x0c648cde:
        if (plVar25 != (long *)0x0) goto code_r0x0c648ce4;
code_r0x0c648903:
        lVar12 = lRam000000000f6ea018;
        *plVar14 = (long)plRam000000000f6ea028;
        plRam000000000f6ea028 = plVar14;
        *(undefined8 *)(lVar12 + (long)plVar11 * 8) = 0xf6ea028;
        if (*plVar14 != 0) {
          plVar11 = *(long **)(*plVar14 + 8);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            *(long **)(lVar12 + ((ulong)plVar11 & (long)plVar21 - 1U) * 8) = plVar14;
          }
          else {
            if (plVar21 <= plVar11) {
              if (((ulong)plVar11 | (ulong)plVar21) >> 0x20 == 0) {
                *(long **)(lVar12 + (((ulong)plVar11 & 0xffffffff) % ((ulong)plVar21 & 0xffffffff))
                                    * 8) = plVar14;
                goto code_r0x0c648cee;
              }
              plVar11 = (long *)((ulong)plVar11 % (ulong)plVar21);
            }
            *(long **)(lVar12 + (long)plVar11 * 8) = plVar14;
          }
        }
      }
code_r0x0c648cee:
      uRam000000000f6ea030 = uRam000000000f6ea030 + 1;
code_r0x0c648cf5:
      plVar21 = _DAT_0f6ea048;
      if (_DAT_0f6ea048 != (long *)0x0) {
        uVar15 = (long)_DAT_0f6ea048 - ((ulong)_DAT_0f6ea048 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          unaff_R12 = (long *)(ulong)(uVar2 & (int)_DAT_0f6ea048 - 1U);
        }
        else {
          unaff_R12 = plVar16;
          if (_DAT_0f6ea048 <= plVar16) {
            unaff_R12 = (long *)((ulong)plVar16 % ((ulong)_DAT_0f6ea048 & 0xffffffff));
          }
        }
        plVar11 = *(long **)(_DAT_0f6ea040 + (long)unaff_R12 * 8);
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          if ((byte)(uVar15 >> 0x38) < 2) {
            do {
              if ((long *)plVar11[1] == plVar16) {
                if (*(uint *)(plVar11 + 2) == uVar2) goto code_r0x0c6492b1;
              }
              else if ((long *)((ulong)plVar11[1] & (long)_DAT_0f6ea048 - 1U) != unaff_R12) break;
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          else {
            do {
              plVar14 = (long *)plVar11[1];
              if (plVar14 == plVar16) {
                if (*(uint *)(plVar11 + 2) == uVar2) goto code_r0x0c6492b1;
              }
              else {
                if (_DAT_0f6ea048 <= plVar14) {
                  if (((ulong)plVar14 | (ulong)_DAT_0f6ea048) >> 0x20 == 0) {
                    if ((long *)(((ulong)plVar14 & 0xffffffff) % ((ulong)_DAT_0f6ea048 & 0xffffffff)
                                ) == unaff_R12) goto code_r0x0c648dca;
                    break;
                  }
                  plVar14 = (long *)((ulong)plVar14 % (ulong)_DAT_0f6ea048);
                }
                if (plVar14 != unaff_R12) break;
              }
code_r0x0c648dca:
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
        }
      }
      plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar11 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_168 = &DAT_0f6ea040;
      uStack_160 = 0;
      *plVar11 = 0;
      plVar11[1] = (long)plVar16;
      *(uint *)(plVar11 + 2) = uVar2;
      plStack_170 = plVar11;
      if (((ulong)uStack_190 & 1) == 0) {
        plVar11[5] = lStack_180;
        plVar11[3] = (long)uStack_190;
        plVar11[4] = uStack_188;
      }
      else {
        func_0x0412e5e0(plVar11 + 3,lStack_180,uStack_188);
      }
      uStack_160 = CONCAT71(uStack_160._1_7_,1);
      if ((long)plVar21 < 0) {
        fVar27 = (float)plVar21;
        if (plVar21 != (long *)0x0) goto code_r0x0c648f46;
code_r0x0c648f53:
        uVar15 = 1;
        if ((long *)0x2 < plVar21) {
          uVar15 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
        }
        plVar14 = (long *)((long)plVar21 * 2 | uVar15);
        fVar27 = (float)func_0x0eee3ab0((float)(uRam000000000f6ea058 + 1) / fRam000000000f6ea060);
        plVar21 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27);
        if (plVar21 < plVar14) {
          plVar21 = plVar14;
        }
        unaff_R12 = (long *)0x2;
        if ((plVar21 == (long *)0x1) ||
           (unaff_R12 = plVar21, ((ulong)plVar21 & (long)plVar21 - 1U) == 0)) {
          bVar26 = unaff_R12 < _DAT_0f6ea048;
          plVar21 = unaff_R12;
          if (unaff_R12 <= _DAT_0f6ea048) goto code_r0x0c6490df;
code_r0x0c648fce:
          if ((long *)0x1fffffffffffffff < unaff_R12) goto code_r0x0c649696;
          lVar12 = (long)unaff_R12 * 8;
          lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar12);
          if (lVar24 == 0) {
            func_0x0eec74c0(lVar12,0);
          }
          lVar5 = _DAT_0f6ea040;
          bVar26 = _DAT_0f6ea040 != 0;
          _DAT_0f6ea040 = lVar24;
          if (bVar26) {
            func_0x0412a280(lVar5,(long)_DAT_0f6ea048 << 3);
          }
          lVar24 = _DAT_0f6ea040;
          _DAT_0f6ea048 = unaff_R12;
          func_0x0eee2dd0(_DAT_0f6ea040,0,lVar12);
          plVar21 = plRam000000000f6ea050;
          if (plRam000000000f6ea050 != (long *)0x0) {
            plVar14 = (long *)plRam000000000f6ea050[1];
            uVar15 = (long)unaff_R12 - 1;
            if (((ulong)unaff_R12 & uVar15) == 0) {
              *(undefined8 *)(lVar24 + ((ulong)plVar14 & uVar15) * 8) = 0xf6ea050;
              uVar23 = (ulong)plVar14 & uVar15;
              while (plVar14 = plVar21, plVar21 = (long *)*plVar14, plVar21 != (long *)0x0) {
                uVar22 = plVar21[1] & uVar15;
                if (uVar22 != uVar23) {
                  if (*(long *)(lVar24 + uVar22 * 8) == 0) {
                    *(long **)(lVar24 + uVar22 * 8) = plVar14;
                    uVar23 = uVar22;
                  }
                  else {
                    *plVar14 = *plVar21;
                    *plVar21 = **(long **)(lVar24 + uVar22 * 8);
                    **(undefined8 **)(lVar24 + uVar22 * 8) = plVar21;
                    plVar21 = plVar14;
                  }
                }
              }
            }
            else {
              if (unaff_R12 <= plVar14) {
                if (((ulong)plVar14 | (ulong)unaff_R12) >> 0x20 == 0) {
                  plVar14 = (long *)(((ulong)plVar14 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff)
                                    );
                }
                else {
                  plVar14 = (long *)((ulong)plVar14 % (ulong)unaff_R12);
                }
              }
              *(undefined8 *)(lVar24 + (long)plVar14 * 8) = 0xf6ea050;
              plVar25 = (long *)*plVar21;
              while (plVar25 != (long *)0x0) {
                plVar18 = (long *)plVar25[1];
                if (unaff_R12 <= plVar18) {
                  if (((ulong)plVar18 | (ulong)unaff_R12) >> 0x20 == 0) {
                    plVar18 = (long *)(((ulong)plVar18 & 0xffffffff) %
                                      ((ulong)unaff_R12 & 0xffffffff));
                  }
                  else {
                    plVar18 = (long *)((ulong)plVar18 % (ulong)unaff_R12);
                  }
                }
                if (plVar18 != plVar14) {
                  if (*(long *)(lVar24 + (long)plVar18 * 8) == 0) {
                    *(long **)(lVar24 + (long)plVar18 * 8) = plVar21;
                    plVar14 = plVar18;
                  }
                  else {
                    *plVar21 = *plVar25;
                    *plVar25 = **(long **)(lVar24 + (long)plVar18 * 8);
                    **(undefined8 **)(lVar24 + (long)plVar18 * 8) = plVar25;
                    plVar25 = plVar21;
                  }
                }
                plVar21 = plVar25;
                plVar25 = (long *)*plVar21;
              }
            }
          }
        }
        else {
          unaff_R12 = (long *)func_0x0412c3f0();
          bVar26 = unaff_R12 < _DAT_0f6ea048;
          plVar21 = unaff_R12;
          if (_DAT_0f6ea048 < unaff_R12) goto code_r0x0c648fce;
code_r0x0c6490df:
          plVar14 = _DAT_0f6ea048;
          if (bVar26) {
            fVar27 = (float)func_0x0eee3ab0((float)uRam000000000f6ea058 / fRam000000000f6ea060);
            unaff_R12 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f |
                                (long)fVar27);
            if ((plVar14 < (long *)0x3) ||
               (uVar15 = (long)plVar14 - ((ulong)plVar14 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
               1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              unaff_R12 = (long *)func_0x0412c3f0(unaff_R12);
              lVar12 = _DAT_0f6ea040;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            else {
              if ((long *)0x1 < unaff_R12) {
                lVar12 = 0x3f;
                if ((long)unaff_R12 - 1U != 0) {
                  for (; (long)unaff_R12 - 1U >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                unaff_R12 = (long *)(1L << (-((byte)lVar12 ^ 0x3f) & 0x3f));
              }
              lVar12 = _DAT_0f6ea040;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            _DAT_0f6ea040 = lVar12;
            if (unaff_R12 < plVar14) {
              if (unaff_R12 != (long *)0x0) goto code_r0x0c648fce;
              _DAT_0f6ea040 = 0;
              if (lVar12 != 0) {
                func_0x0412a280(lVar12,(long)_DAT_0f6ea048 << 3);
              }
              _DAT_0f6ea048 = (long *)0x0;
            }
          }
        }
        plVar21 = _DAT_0f6ea048;
        if (((ulong)_DAT_0f6ea048 & (long)_DAT_0f6ea048 - 1U) == 0) {
          unaff_R12 = (long *)(ulong)(uVar2 & (int)_DAT_0f6ea048 - 1U);
        }
        else {
          unaff_R12 = plVar16;
          if ((_DAT_0f6ea048 <= plVar16) && (_DAT_0f6ea048 <= plVar16)) {
            unaff_R12 = (long *)((ulong)plVar16 % ((ulong)_DAT_0f6ea048 & 0xffffffff));
          }
        }
      }
      else {
        fVar27 = (float)(long)plVar21;
        if (plVar21 == (long *)0x0) goto code_r0x0c648f53;
code_r0x0c648f46:
        if (fVar27 * fRam000000000f6ea060 < (float)(uRam000000000f6ea058 + 1))
        goto code_r0x0c648f53;
      }
      lVar12 = _DAT_0f6ea040;
      plVar16 = *(long **)(_DAT_0f6ea040 + (long)unaff_R12 * 8);
      if (plVar16 == (long *)0x0) {
        *plVar11 = (long)plRam000000000f6ea050;
        plRam000000000f6ea050 = plVar11;
        *(undefined8 *)(lVar12 + (long)unaff_R12 * 8) = 0xf6ea050;
        if (*plVar11 != 0) {
          plVar16 = *(long **)(*plVar11 + 8);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            *(long **)(lVar12 + ((ulong)plVar16 & (long)plVar21 - 1U) * 8) = plVar11;
          }
          else {
            if (plVar21 <= plVar16) {
              if (((ulong)plVar16 | (ulong)plVar21) >> 0x20 == 0) {
                *(long **)(lVar12 + (((ulong)plVar16 & 0xffffffff) % ((ulong)plVar21 & 0xffffffff))
                                    * 8) = plVar11;
                goto code_r0x0c6492aa;
              }
              plVar16 = (long *)((ulong)plVar16 % (ulong)plVar21);
            }
            *(long **)(lVar12 + (long)plVar16 * 8) = plVar11;
          }
        }
      }
      else {
        *plVar11 = *plVar16;
        *plVar16 = (long)plVar11;
      }
code_r0x0c6492aa:
      uRam000000000f6ea058 = uRam000000000f6ea058 + 1;
code_r0x0c6492b1:
      if (pcStack_140 != (code *)0x0) {
        (*pcStack_140)(&pppppppuStack_158);
      }
      pppppuVar19 = pppppuStack_90;
      plVar21 = plStack_98;
      pppppppuVar13 = pppppppuStack_a0;
      pppppuVar20 = pppppuStack_a8;
      if (pcStack_70 != (code *)0x0) {
        (*pcStack_70)(&pppppppuStack_88);
      }
      if (((ulong)uStack_190 & 1) != 0) {
        func_0x0412a280(lStack_180,(ulong)uStack_190 & 0xfffffffffffffffe);
      }
      goto code_r0x0c647fc0;
    }
code_r0x0c648076:
    plStack_80 = plVar16;
    pppppppuStack_88 = pppppppuVar13;
    auVar28 = func_0x0ed6ae90(&pppppppuStack_88);
    uVar15 = auVar28._8_8_;
    if (uVar15 < 0xfffffffffffffff8) {
      if (uVar15 < 0x17) {
        uStack_190 = (long *)CONCAT71(uStack_190._1_7_,auVar28[8] * '\x02');
        lVar12 = (long)&uStack_190 + 1;
        if (uVar15 == 0) {
          uVar15 = 0;
          goto code_r0x0c648109;
        }
      }
      else {
        uVar23 = (uVar15 | 7) + 1;
        if ((uVar15 | 7) == 0x17) {
          uVar23 = 0x1a;
        }
        lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
        if (lVar12 == 0) {
          func_0x0eec74c0(uVar23,0);
        }
        unaff_R12 = (long *)(uVar23 | 1);
        uStack_190 = unaff_R12;
        uStack_188 = uVar15;
        lStack_180 = lVar12;
      }
      func_0x0eee2ee0(lVar12,auVar28._0_8_,uVar15);
      plVar11 = unaff_R12;
      goto code_r0x0c648109;
    }
    func_0x04882e30();
code_r0x0c649691:
    FUN_04882eb0();
code_r0x0c649696:
    FUN_04882eb0();
code_r0x0c64969b:
    iVar10 = func_0x04108328(&DAT_0f5b4958);
    if (iVar10 != 0) {
      func_0x07b0e020(0xf5b4940);
      FUN_0410844d(&DAT_0f5b4958);
    }
  } while( true );
}


