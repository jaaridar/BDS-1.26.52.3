/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe810160 (ELF vaddr 0xe710160)
 * Label: caller-of-callee
 * Body:  [[0e810160, 0e8103a7] [0e8103b0, 0e8104bd] [0e8104c0, 0e81073e] [0e810740, 0e810775] [0e810780, 0e8107f5] [0e810800, 0e81081a] [0e810820, 0e8108fe] [0e810900, 0e81093c] [0e810940, 0e810977] [0e810980, 0e810a9e] [0e810aa0, 0e810e05] [0e810e10, 0e810f34] [0e810f40, 0e811014]]
 * Ghidra: FUN_0e810160
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e810160(void)

{
  undefined1 uVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *******pppppppuVar8;
  long *plVar9;
  undefined8 *****pppppuVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  long lVar19;
  bool bVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  code *pcStack_170;
  int iStack_168;
  char cStack_164;
  undefined8 *******pppppppuStack_160;
  long lStack_158;
  code *pcStack_150;
  undefined8 *******pppppppuStack_140;
  undefined *puStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  long lStack_110;
  undefined8 *****pppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined8 *******pppppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 *******pppppppuStack_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_60;
  undefined8 *****pppppuStack_58;
  undefined8 *******pppppppuStack_50;
  long *plStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  pppppppuVar13 = &ppppppuStack_120;
  uStack_f8 = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d0 = 0;
  uStack_ce = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  pppppuStack_108 = (undefined8 *****)0x0;
  ppppppuStack_100 = (undefined8 ******)0x0;
  ppppppuStack_118 = (undefined8 ******)0x0;
  lStack_110 = 0;
  plStack_128 = (long *)0x0;
  ppppppuStack_120 = (undefined8 ******)0x0;
  puStack_138 = (undefined *)0x0;
  plStack_130 = (long *)0x0;
  uStack_f0 = 0x3f600000;
  func_0x048af640(pppppppuVar13,8);
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  puStack_138 = &UNK_0f534768;
  plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar6 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&UNK_0ef44a60;
  plStack_130 = plVar6 + 3;
  *(undefined1 *)(plVar6 + 3) = 1;
  puStack_138 = &UNK_0ef471f0;
  _DAT_0f7617a0 = 0;
  _DAT_0f7617a8 = (undefined8 *******)0x0;
  _DAT_0f7617b0 = (long *)0x0;
  _DAT_0f7617b8 = 0;
  _DAT_0f7617c0 = 1.0;
  plStack_128 = plVar6;
  func_0x0e7f63e0(&puStack_138);
  if (DAT_0f741ee0 == '\0') goto LAB_0e810fe4;
  do {
    ppppppuVar17 = ppppppuStack_120 +
                   ((int)((ulong)((long)ppppppuStack_118 - (long)ppppppuStack_120) >> 3) - 1U &
                   _DAT_0f741ecc);
    do {
      pppppuVar10 = *ppppppuVar17;
      if (pppppuVar10 == (undefined8 *****)0xffffffffffffffff) goto LAB_0e8102dc;
      ppppppuVar17 = (undefined8 ******)(pppppuStack_108 + (long)pppppuVar10 * 3);
    } while (*(uint *)(pppppuStack_108 + (long)pppppuVar10 * 3 + 1) != _DAT_0f741ecc);
    if (ppppppuVar17 == ppppppuStack_100) {
LAB_0e8102dc:
      pppppppuStack_188 = (undefined8 *******)0x0;
      pppppppuStack_180 = (undefined8 *******)0x0;
      func_0x048b1dc0(&pppppppuStack_188);
      pppppppuStack_c0 = pppppppuStack_188;
      pppppppuVar13 = pppppppuStack_180;
      if (pppppppuStack_188 != (undefined8 *******)0x0) goto LAB_0e810376;
LAB_0e810306:
      lVar7 = func_0x048aead0(pppppppuVar13);
      if (*(long *)(lVar7 + 0x78) == 0) goto LAB_0e810eab;
      lVar7 = func_0x048aead0(pppppppuVar13);
      pppppuVar10 = *(undefined8 ******)(*(long *)(lVar7 + 0x78) + 0x48);
      lVar7 = func_0x048aead0(pppppppuVar13);
      pppppuStack_b8 = *(undefined8 ******)(*(long *)(lVar7 + 0x78) + 0x50);
      pppppppuVar8 = pppppppuVar13;
      if (pppppuVar10 == pppppuStack_b8) goto LAB_0e810eab;
    }
    else {
      pppppppuStack_c0 = (undefined8 *******)ppppppuVar17[2];
      if (pppppppuStack_c0 == (undefined8 *******)0x0) goto LAB_0e810306;
LAB_0e810376:
      ppppppuVar17 = pppppppuStack_c0[0xf];
      if (ppppppuVar17 == (undefined8 ******)0x0) {
LAB_0e810eab:
        plVar6 = plStack_128;
        puStack_138 = &UNK_0f534768;
        if (plStack_128 == (long *)0x0) {
          *(undefined1 *)plStack_130 = 0;
        }
        else {
          *(undefined1 *)plStack_130 = 0;
          LOCK();
          plVar9 = plStack_128 + 1;
          lVar7 = *plVar9;
          *plVar9 = *plVar9 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            func_0x0412c2d0(plVar6);
          }
        }
        lVar7 = lStack_e8;
        if (lStack_e8 != 0) {
          for (lVar19 = CONCAT62(uStack_de,uStack_e0); lVar7 != lVar19; lVar19 = lVar19 + -0x38) {
            if ((*(byte *)(lVar19 + -0x38) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar19 + -0x28),
                              *(ulong *)(lVar19 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_e0 = (undefined2)lVar7;
          uStack_de = (undefined6)((ulong)lVar7 >> 0x10);
          func_0x0412a280(lStack_e8,CONCAT62(uStack_d6,uStack_d8) - lStack_e8);
        }
        pppppppuStack_188 = (undefined8 *******)&pppppuStack_108;
        func_0x048b0f50(&pppppppuStack_188);
        if (ppppppuStack_120 != (undefined8 ******)0x0) {
          ppppppuStack_118 = ppppppuStack_120;
          func_0x0412a280(ppppppuStack_120,lStack_110 - (long)ppppppuStack_120);
        }
        return;
      }
      pppppuVar10 = ppppppuVar17[9];
      pppppuStack_b8 = ppppppuVar17[10];
      pppppppuVar8 = pppppppuVar13;
      if (pppppuVar10 == pppppuStack_b8) goto LAB_0e810eab;
    }
LAB_0e8103ca:
    pppppppuStack_140 = pppppppuVar8;
    uStack_60 = *(undefined4 *)pppppuVar10;
    pppppuStack_b0 = pppppuVar10;
    pppppuStack_58 = pppppuVar10;
    pppppppuStack_50 = pppppppuVar13;
    plVar6 = (long *)(*(code *)pppppuVar10[7])(pppppppuVar13);
    uVar4 = uStack_60;
    if (*(uint *)(*plVar6 + 4) != _DAT_0f741ecc) goto LAB_0e8103b0;
    pppppppuVar8 = pppppppuStack_c0;
    if (pppppppuStack_c0 == (undefined8 *******)0x0) {
      pppppppuVar8 = (undefined8 *******)func_0x048aead0(pppppppuVar13,0,uStack_60);
      pppppppuVar13 = pppppppuStack_140;
    }
    pppppppuVar8 = (undefined8 *******)FUN_048b0c90(pppppppuVar13,pppppppuVar8,uVar4,1);
    pppppppuVar18 = pppppppuVar13;
    if (pppppppuVar8 == (undefined8 *******)0x0) {
      pppppppuStack_188 = (undefined8 *******)0x0;
      pppppppuStack_180 = (undefined8 *******)0x0;
      func_0x048b0d20(&pppppppuStack_188);
      pppppppuVar8 = pppppppuStack_188;
      pppppppuVar18 = pppppppuStack_180;
      if (pppppppuStack_188 != (undefined8 *******)0x0) goto LAB_0e81048c;
      uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
      uVar11 = 0;
      lVar7 = (long)&uStack_1a8 + 1;
LAB_0e810519:
      *(undefined1 *)(lVar7 + uVar11) = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = 0;
      pcStack_90 = (code *)0x0;
      pppppppuStack_a8 = (undefined8 *******)0x0;
      pppppppuStack_a0 = (undefined8 *******)0x0;
      func_0x05d84ba0(&pppppppuStack_a8);
      func_0x05d9a920(&pppppppuStack_188,&pppppuStack_58,&pppppppuStack_a8);
      pppppppuVar13 = pppppppuStack_160;
      pppppppuVar8 = pppppppuStack_188;
      if (cStack_164 == '\x02') {
        pppppppuVar8 = &pppppppuStack_188;
      }
      pppppppuVar18 = &pppppppuStack_a8;
      if (pppppppuVar8 == (undefined8 *******)0x0 || iStack_168 != -0xac02810) {
        if (lStack_158 == 0) {
          (*pcStack_150)(0,&pppppppuStack_188,0);
        }
        pppppppuVar8 = pppppppuStack_188;
        if (cStack_164 == '\x02') {
          pppppppuVar8 = &pppppppuStack_188;
        }
        pppppppuVar8 = (undefined8 *******)
                       func_0x0488e200(pppppppuVar13,lStack_158,0xf53fd7f0,pppppppuVar8);
        pppppppuVar18 = pppppppuVar13;
      }
      bVar20 = (uStack_1a8 & 1) == 0;
      lVar7 = lStack_198;
      if (bVar20) {
        lVar7 = (long)&uStack_1a8 + 1;
      }
      uVar1 = *(undefined1 *)pppppppuVar8;
      uVar11 = uStack_1a8 >> 1 & 0x7f;
      if (!bVar20) {
        uVar11 = uStack_1a0;
      }
      pppppppuVar8 = (undefined8 *******)func_0x04883620(&plStack_48,lVar7,uVar11);
      pppppppuVar13 = _DAT_0f7617a8;
      if (_DAT_0f7617a8 != (undefined8 *******)0x0) {
        uVar11 = (long)_DAT_0f7617a8 - ((ulong)_DAT_0f7617a8 >> 1 & 0x5555555555555555);
        uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
        uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar11 >> 0x38 < 2) {
          pppppppuVar18 = (undefined8 *******)((long)_DAT_0f7617a8 - 1U & (ulong)pppppppuVar8);
          plVar6 = *(long **)(_DAT_0f7617a0 + (long)pppppppuVar18 * 8);
        }
        else {
          pppppppuVar18 = pppppppuVar8;
          if (_DAT_0f7617a8 <= pppppppuVar8) {
            if (((ulong)pppppppuVar8 | (ulong)_DAT_0f7617a8) >> 0x20 == 0) {
              pppppppuVar18 =
                   (undefined8 *******)
                   (((ulong)pppppppuVar8 & 0xffffffff) % ((ulong)_DAT_0f7617a8 & 0xffffffff));
              plVar6 = *(long **)(_DAT_0f7617a0 + (long)pppppppuVar18 * 8);
              goto joined_r0x0e810d50;
            }
            pppppppuVar18 = (undefined8 *******)((ulong)pppppppuVar8 % (ulong)_DAT_0f7617a8);
          }
          plVar6 = *(long **)(_DAT_0f7617a0 + (long)pppppppuVar18 * 8);
        }
joined_r0x0e810d50:
        if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
          lStack_190 = lStack_198;
          uVar16 = uStack_1a0;
          if ((uStack_1a8 & 1) == 0) {
            lStack_190 = (long)&uStack_1a8 + 1;
            uVar16 = uStack_1a8 >> 1 & 0x7f;
          }
          if ((byte)(uVar11 >> 0x38) < 2) {
            uVar11 = (long)_DAT_0f7617a8 - 1;
            do {
              if ((undefined8 *******)plVar6[1] == pppppppuVar8) {
                bVar2 = *(byte *)(plVar6 + 2);
                if ((bVar2 & 1) == 0) {
                  uVar14 = (ulong)(bVar2 >> 1);
                }
                else {
                  uVar14 = plVar6[3];
                }
                if (uVar14 == uVar16) {
                  if ((bVar2 & 1) == 0) {
                    lVar7 = (long)plVar6 + 0x11;
                  }
                  else {
                    lVar7 = plVar6[4];
                  }
                  iVar5 = bcmp(lVar7,lStack_190,uVar16);
                  if (iVar5 == 0) goto joined_r0x0e81085d;
                }
              }
              else if ((undefined8 *******)((ulong)plVar6[1] & uVar11) != pppppppuVar18) break;
              plVar6 = (long *)*plVar6;
            } while (plVar6 != (long *)0x0);
          }
          else {
            do {
              pppppppuVar12 = (undefined8 *******)plVar6[1];
              if (pppppppuVar12 == pppppppuVar8) {
                bVar2 = *(byte *)(plVar6 + 2);
                if ((bVar2 & 1) == 0) {
                  uVar11 = (ulong)(bVar2 >> 1);
                }
                else {
                  uVar11 = plVar6[3];
                }
                if (uVar11 == uVar16) {
                  if ((bVar2 & 1) == 0) {
                    lVar7 = (long)plVar6 + 0x11;
                  }
                  else {
                    lVar7 = plVar6[4];
                  }
                  iVar5 = bcmp(lVar7,lStack_190,uVar16);
                  if (iVar5 == 0) goto joined_r0x0e81085d;
                }
              }
              else {
                if (pppppppuVar13 <= pppppppuVar12) {
                  if (((ulong)pppppppuVar12 | (ulong)pppppppuVar13) >> 0x20 == 0) {
                    pppppppuVar12 =
                         (undefined8 *******)
                         (((ulong)pppppppuVar12 & 0xffffffff) % ((ulong)pppppppuVar13 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppuVar12 =
                         (undefined8 *******)((ulong)pppppppuVar12 % (ulong)pppppppuVar13);
                  }
                }
                if (pppppppuVar12 != pppppppuVar18) break;
              }
              plVar6 = (long *)*plVar6;
            } while (plVar6 != (long *)0x0);
          }
        }
      }
      plVar6 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar6 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_40 = &DAT_0f7617a0;
      uStack_38 = 1;
      *plVar6 = 0;
      plVar6[1] = (long)pppppppuVar8;
      plVar6[4] = lStack_198;
      plVar6[2] = uStack_1a8;
      plVar6[3] = uStack_1a0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
      *(undefined1 *)(plVar6 + 5) = uVar1;
      plStack_48 = plVar6;
      if ((long)pppppppuVar13 < 0) {
        fVar21 = (float)pppppppuVar13;
        if (pppppppuVar13 != (undefined8 *******)0x0) goto LAB_0e810953;
LAB_0e810980:
        uVar11 = 1;
        if ((undefined8 *******)0x2 < pppppppuVar13) {
          uVar11 = (ulong)(((ulong)pppppppuVar13 & (long)pppppppuVar13 - 1U) != 0);
        }
        pppppppuVar18 = (undefined8 *******)((long)pppppppuVar13 * 2 | uVar11);
        fVar21 = (float)func_0x0eee3ab0((float)(_DAT_0f7617b8 + 1) / _DAT_0f7617c0);
        pppppppuVar13 =
             (undefined8 *******)
             ((long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21);
        if (pppppppuVar13 < pppppppuVar18) {
          pppppppuVar13 = pppppppuVar18;
        }
        pppppppuVar18 = (undefined8 *******)0x2;
        if ((pppppppuVar13 == (undefined8 *******)0x1) ||
           (pppppppuVar18 = pppppppuVar13, ((ulong)pppppppuVar13 & (long)pppppppuVar13 - 1U) == 0))
        {
          bVar20 = pppppppuVar18 < _DAT_0f7617a8;
          pppppppuVar13 = _DAT_0f7617a8;
          if (pppppppuVar18 <= _DAT_0f7617a8) goto LAB_0e810aff;
LAB_0e8109fb:
          if ((ulong)pppppppuVar18 >> 0x3d != 0) goto LAB_0e810fdf;
          lVar7 = (long)pppppppuVar18 * 8;
          lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar7);
          if (lVar19 == 0) {
            func_0x0eec74c0(lVar7,0);
          }
          lVar3 = _DAT_0f7617a0;
          bVar20 = _DAT_0f7617a0 != 0;
          _DAT_0f7617a0 = lVar19;
          if (bVar20) {
            func_0x0412a280(lVar3,(long)_DAT_0f7617a8 << 3);
          }
          lVar19 = _DAT_0f7617a0;
          _DAT_0f7617a8 = pppppppuVar18;
          memset(_DAT_0f7617a0,0,lVar7);
          plVar9 = _DAT_0f7617b0;
          if (_DAT_0f7617b0 != (long *)0x0) {
            pppppppuVar13 = (undefined8 *******)_DAT_0f7617b0[1];
            uVar11 = (long)pppppppuVar18 - 1;
            if (((ulong)pppppppuVar18 & uVar11) == 0) {
              *(undefined **)(lVar19 + ((ulong)pppppppuVar13 & uVar11) * 8) = &DAT_0f7617b0;
              uVar16 = (ulong)pppppppuVar13 & uVar11;
              while (plVar15 = plVar9, plVar9 = (long *)*plVar15, plVar9 != (long *)0x0) {
                uVar14 = plVar9[1] & uVar11;
                if (uVar14 != uVar16) {
                  if (*(long *)(lVar19 + uVar14 * 8) == 0) {
                    *(long **)(lVar19 + uVar14 * 8) = plVar15;
                    uVar16 = uVar14;
                  }
                  else {
                    *plVar15 = *plVar9;
                    *plVar9 = **(long **)(lVar19 + uVar14 * 8);
                    **(undefined8 **)(lVar19 + uVar14 * 8) = plVar9;
                    plVar9 = plVar15;
                  }
                }
              }
            }
            else {
              if (pppppppuVar18 <= pppppppuVar13) {
                if (((ulong)pppppppuVar13 | (ulong)pppppppuVar18) >> 0x20 == 0) {
                  pppppppuVar13 =
                       (undefined8 *******)
                       (((ulong)pppppppuVar13 & 0xffffffff) % ((ulong)pppppppuVar18 & 0xffffffff));
                }
                else {
                  pppppppuVar13 = (undefined8 *******)((ulong)pppppppuVar13 % (ulong)pppppppuVar18);
                }
              }
              *(undefined **)(lVar19 + (long)pppppppuVar13 * 8) = &DAT_0f7617b0;
              plVar15 = (long *)*plVar9;
              while (plVar15 != (long *)0x0) {
                pppppppuVar12 = (undefined8 *******)plVar15[1];
                if (pppppppuVar18 <= pppppppuVar12) {
                  if (((ulong)pppppppuVar12 | (ulong)pppppppuVar18) >> 0x20 == 0) {
                    pppppppuVar12 =
                         (undefined8 *******)
                         (((ulong)pppppppuVar12 & 0xffffffff) % ((ulong)pppppppuVar18 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppuVar12 =
                         (undefined8 *******)((ulong)pppppppuVar12 % (ulong)pppppppuVar18);
                  }
                }
                if (pppppppuVar12 != pppppppuVar13) {
                  if (*(long *)(lVar19 + (long)pppppppuVar12 * 8) == 0) {
                    *(long **)(lVar19 + (long)pppppppuVar12 * 8) = plVar9;
                    pppppppuVar13 = pppppppuVar12;
                  }
                  else {
                    *plVar9 = *plVar15;
                    *plVar15 = **(long **)(lVar19 + (long)pppppppuVar12 * 8);
                    **(undefined8 **)(lVar19 + (long)pppppppuVar12 * 8) = plVar15;
                    plVar15 = plVar9;
                  }
                }
                plVar9 = plVar15;
                plVar15 = (long *)*plVar9;
              }
            }
          }
        }
        else {
          pppppppuVar18 = (undefined8 *******)func_0x0412c3f0();
          bVar20 = pppppppuVar18 < _DAT_0f7617a8;
          pppppppuVar13 = _DAT_0f7617a8;
          if (_DAT_0f7617a8 < pppppppuVar18) goto LAB_0e8109fb;
LAB_0e810aff:
          pppppppuVar13 = _DAT_0f7617a8;
          if (bVar20) {
            fVar21 = (float)func_0x0eee3ab0((float)_DAT_0f7617b8 / _DAT_0f7617c0);
            pppppppuVar12 =
                 (undefined8 *******)
                 ((long)(fVar21 - _DAT_01198778) & (long)fVar21 >> 0x3f | (long)fVar21);
            if ((pppppppuVar13 < (undefined8 *******)0x3) ||
               (uVar11 = (long)pppppppuVar13 - ((ulong)pppppppuVar13 >> 1 & 0x5555555555555555),
               uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333),
               1 < (byte)(((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              pppppppuVar12 = (undefined8 *******)func_0x0412c3f0(pppppppuVar12);
              lVar7 = _DAT_0f7617a0;
              if (pppppppuVar12 < pppppppuVar18) {
                pppppppuVar12 = pppppppuVar18;
              }
            }
            else {
              if ((undefined8 *******)0x1 < pppppppuVar12) {
                lVar7 = 0x3f;
                if ((long)pppppppuVar12 - 1U != 0) {
                  for (; (long)pppppppuVar12 - 1U >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                pppppppuVar12 = (undefined8 *******)(1L << (-((byte)lVar7 ^ 0x3f) & 0x3f));
              }
              lVar7 = _DAT_0f7617a0;
              if (pppppppuVar12 < pppppppuVar18) {
                pppppppuVar12 = pppppppuVar18;
              }
            }
            pppppppuVar18 = pppppppuVar12;
            _DAT_0f7617a0 = lVar7;
            if (pppppppuVar18 < pppppppuVar13) {
              if (pppppppuVar18 != (undefined8 *******)0x0) goto LAB_0e8109fb;
              _DAT_0f7617a0 = 0;
              if (lVar7 != 0) {
                func_0x0412a280(lVar7,(long)_DAT_0f7617a8 << 3);
              }
              _DAT_0f7617a8 = (undefined8 *******)0x0;
            }
          }
        }
        if (((ulong)_DAT_0f7617a8 & (long)_DAT_0f7617a8 - 1U) == 0) {
          pppppppuVar18 = (undefined8 *******)((ulong)pppppppuVar8 & (long)_DAT_0f7617a8 - 1U);
          plVar9 = *(long **)(_DAT_0f7617a0 + (long)pppppppuVar18 * 8);
        }
        else {
          if (_DAT_0f7617a8 <= pppppppuVar8) {
            if (((ulong)pppppppuVar8 | (ulong)_DAT_0f7617a8) >> 0x20 == 0) {
              pppppppuVar18 =
                   (undefined8 *******)
                   (((ulong)pppppppuVar8 & 0xffffffff) % ((ulong)_DAT_0f7617a8 & 0xffffffff));
              plVar9 = *(long **)(_DAT_0f7617a0 + (long)pppppppuVar18 * 8);
              goto joined_r0x0e810d72;
            }
            pppppppuVar8 = (undefined8 *******)((ulong)pppppppuVar8 % (ulong)_DAT_0f7617a8);
          }
          plVar9 = *(long **)(_DAT_0f7617a0 + (long)pppppppuVar8 * 8);
          pppppppuVar18 = pppppppuVar8;
        }
joined_r0x0e810d72:
        pppppppuVar13 = _DAT_0f7617a8;
        if (plVar9 == (long *)0x0) goto LAB_0e810d78;
LAB_0e810cd4:
        *plVar6 = *plVar9;
        *plVar9 = (long)plVar6;
      }
      else {
        fVar21 = (float)(long)pppppppuVar13;
        if (pppppppuVar13 == (undefined8 *******)0x0) goto LAB_0e810980;
LAB_0e810953:
        if (fVar21 * _DAT_0f7617c0 < (float)(_DAT_0f7617b8 + 1)) goto LAB_0e810980;
        plVar9 = *(long **)(_DAT_0f7617a0 + (long)pppppppuVar18 * 8);
        if (plVar9 != (long *)0x0) goto LAB_0e810cd4;
LAB_0e810d78:
        lVar7 = _DAT_0f7617a0;
        *plVar6 = (long)_DAT_0f7617b0;
        _DAT_0f7617b0 = plVar6;
        *(undefined **)(lVar7 + (long)pppppppuVar18 * 8) = &DAT_0f7617b0;
        if (*plVar6 != 0) {
          pppppppuVar8 = *(undefined8 ********)(*plVar6 + 8);
          if (((ulong)pppppppuVar13 & (long)pppppppuVar13 - 1U) == 0) {
            *(long **)(lVar7 + ((ulong)pppppppuVar8 & (long)pppppppuVar13 - 1U) * 8) = plVar6;
          }
          else {
            if (pppppppuVar13 <= pppppppuVar8) {
              if (((ulong)pppppppuVar8 | (ulong)pppppppuVar13) >> 0x20 == 0) {
                *(long **)(lVar7 + (((ulong)pppppppuVar8 & 0xffffffff) %
                                   ((ulong)pppppppuVar13 & 0xffffffff)) * 8) = plVar6;
                goto LAB_0e810cde;
              }
              pppppppuVar8 = (undefined8 *******)((ulong)pppppppuVar8 % (ulong)pppppppuVar13);
            }
            *(long **)(lVar7 + (long)pppppppuVar8 * 8) = plVar6;
          }
        }
      }
LAB_0e810cde:
      _DAT_0f7617b8 = _DAT_0f7617b8 + 1;
joined_r0x0e81085d:
      if (pcStack_170 != (code *)0x0) {
        (*pcStack_170)(&pppppppuStack_188);
      }
      pppppppuVar13 = pppppppuStack_140;
      if (pcStack_90 != (code *)0x0) {
        (*pcStack_90)(&pppppppuStack_a8);
      }
      if ((uStack_1a8 & 1) != 0) {
        func_0x0412a280(lStack_198,uStack_1a8 & 0xfffffffffffffffe);
      }
LAB_0e8103b0:
      pppppuVar10 = pppppuStack_b0 + 0xd;
      pppppppuVar8 = pppppppuStack_140;
      if (pppppuVar10 == pppppuStack_b8) goto LAB_0e810eab;
      goto LAB_0e8103ca;
    }
LAB_0e81048c:
    pppppppuStack_a0 = pppppppuVar18;
    pppppppuStack_a8 = pppppppuVar8;
    auVar22 = func_0x0ed6ae90(&pppppppuStack_a8);
    uVar11 = auVar22._8_8_;
    if (uVar11 < 0xfffffffffffffff8) {
      if (uVar11 < 0x17) {
        uStack_1a8 = CONCAT71(uStack_1a8._1_7_,auVar22[8] * '\x02');
        lVar7 = (long)&uStack_1a8 + 1;
        if (uVar11 == 0) {
          uVar11 = 0;
          goto LAB_0e810519;
        }
      }
      else {
        uVar16 = (uVar11 | 7) + 1;
        if ((uVar11 | 7) == 0x17) {
          uVar16 = 0x1a;
        }
        lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
        if (lVar7 == 0) {
          func_0x0eec74c0(uVar16,0);
        }
        uStack_1a8 = uVar16 | 1;
        uStack_1a0 = uVar11;
        lStack_198 = lVar7;
      }
      memmove(lVar7,auVar22._0_8_,uVar11);
      goto LAB_0e810519;
    }
    func_0x04882e30();
LAB_0e810fdf:
    func_0x04882eb0();
LAB_0e810fe4:
    iVar5 = FUN_04108328(&DAT_0f741ee0);
    if (iVar5 != 0) {
      func_0x0df641a0(0xf741ec8);
      func_0x0410844d(&DAT_0f741ee0);
    }
  } while( true );
}


