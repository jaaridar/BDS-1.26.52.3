/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xecd7fa0 (ELF vaddr 0xebd7fa0)
 * Label: caller-of-callee
 * Body:  [[0ecd7fa0, 0ecd81e7] [0ecd81f0, 0ecd82fd] [0ecd8300, 0ecd857d] [0ecd8580, 0ecd85b5] [0ecd85c0, 0ecd8635] [0ecd8640, 0ecd865a] [0ecd8660, 0ecd873d] [0ecd8740, 0ecd877c] [0ecd8780, 0ecd87b7] [0ecd87c0, 0ecd88de] [0ecd88e0, 0ecd8c45] [0ecd8c50, 0ecd8d74] [0ecd8d80, 0ecd8e54]]
 * Ghidra: FUN_0ecd7fa0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ecd7fa0(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  long *plVar8;
  undefined8 *****pppppuVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  long lVar18;
  bool bVar19;
  float fVar20;
  undefined1 auVar21 [16];
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
  
  pppppppuVar12 = &ppppppuStack_120;
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
  func_0x048af640(pppppppuVar12,8);
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_de = 0;
  puStack_138 = &UNK_0f534768;
  plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar5 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&UNK_0ef44a60;
  plStack_130 = plVar5 + 3;
  *(undefined1 *)(plVar5 + 3) = 1;
  puStack_138 = &UNK_0ef471f0;
  _DAT_0f772588 = 0;
  _DAT_0f772590 = (undefined8 *******)0x0;
  _DAT_0f772598 = (long *)0x0;
  _DAT_0f7725a0 = 0;
  _DAT_0f7725a8 = 1.0;
  plStack_128 = plVar5;
  func_0x0ecaf190(&puStack_138);
  if (DAT_0f730c88 == '\0') goto LAB_0ecd8e24;
  do {
    ppppppuVar16 = ppppppuStack_120 +
                   ((int)((ulong)((long)ppppppuStack_118 - (long)ppppppuStack_120) >> 3) - 1U &
                   _DAT_0f730c74);
    do {
      pppppuVar9 = *ppppppuVar16;
      if (pppppuVar9 == (undefined8 *****)0xffffffffffffffff) goto LAB_0ecd811c;
      ppppppuVar16 = (undefined8 ******)(pppppuStack_108 + (long)pppppuVar9 * 3);
    } while (*(uint *)(pppppuStack_108 + (long)pppppuVar9 * 3 + 1) != _DAT_0f730c74);
    if (ppppppuVar16 == ppppppuStack_100) {
LAB_0ecd811c:
      pppppppuStack_188 = (undefined8 *******)0x0;
      pppppppuStack_180 = (undefined8 *******)0x0;
      func_0x048b1dc0(&pppppppuStack_188);
      pppppppuStack_c0 = pppppppuStack_188;
      pppppppuVar12 = pppppppuStack_180;
      if (pppppppuStack_188 != (undefined8 *******)0x0) goto LAB_0ecd81b6;
LAB_0ecd8146:
      lVar6 = func_0x048aead0(pppppppuVar12);
      if (*(long *)(lVar6 + 0x78) == 0) goto LAB_0ecd8ceb;
      lVar6 = func_0x048aead0(pppppppuVar12);
      pppppuVar9 = *(undefined8 ******)(*(long *)(lVar6 + 0x78) + 0x48);
      lVar6 = func_0x048aead0(pppppppuVar12);
      pppppuStack_b8 = *(undefined8 ******)(*(long *)(lVar6 + 0x78) + 0x50);
      pppppppuVar7 = pppppppuVar12;
      if (pppppuVar9 == pppppuStack_b8) goto LAB_0ecd8ceb;
    }
    else {
      pppppppuStack_c0 = (undefined8 *******)ppppppuVar16[2];
      if (pppppppuStack_c0 == (undefined8 *******)0x0) goto LAB_0ecd8146;
LAB_0ecd81b6:
      ppppppuVar16 = pppppppuStack_c0[0xf];
      if (ppppppuVar16 == (undefined8 ******)0x0) {
LAB_0ecd8ceb:
        plVar5 = plStack_128;
        puStack_138 = &UNK_0f534768;
        if (plStack_128 == (long *)0x0) {
          *(undefined1 *)plStack_130 = 0;
        }
        else {
          *(undefined1 *)plStack_130 = 0;
          LOCK();
          plVar8 = plStack_128 + 1;
          lVar6 = *plVar8;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            func_0x0412c2d0(plVar5);
          }
        }
        lVar6 = lStack_e8;
        if (lStack_e8 != 0) {
          for (lVar18 = CONCAT62(uStack_de,uStack_e0); lVar6 != lVar18; lVar18 = lVar18 + -0x38) {
            if ((*(byte *)(lVar18 + -0x38) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar18 + -0x28),
                              *(ulong *)(lVar18 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_e0 = (undefined2)lVar6;
          uStack_de = (undefined6)((ulong)lVar6 >> 0x10);
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
      pppppuVar9 = ppppppuVar16[9];
      pppppuStack_b8 = ppppppuVar16[10];
      pppppppuVar7 = pppppppuVar12;
      if (pppppuVar9 == pppppuStack_b8) goto LAB_0ecd8ceb;
    }
LAB_0ecd820a:
    pppppppuStack_140 = pppppppuVar7;
    uStack_60 = *(undefined4 *)pppppuVar9;
    pppppuStack_b0 = pppppuVar9;
    pppppuStack_58 = pppppuVar9;
    pppppppuStack_50 = pppppppuVar12;
    plVar5 = (long *)(*(code *)pppppuVar9[7])(pppppppuVar12);
    uVar2 = uStack_60;
    if (*(uint *)(*plVar5 + 4) != _DAT_0f730c74) goto LAB_0ecd81f0;
    pppppppuVar7 = pppppppuStack_c0;
    if (pppppppuStack_c0 == (undefined8 *******)0x0) {
      pppppppuVar7 = (undefined8 *******)func_0x048aead0(pppppppuVar12,0,uStack_60);
      pppppppuVar12 = pppppppuStack_140;
    }
    pppppppuVar7 = (undefined8 *******)func_0x048b0c90(pppppppuVar12,pppppppuVar7,uVar2,1);
    pppppppuVar17 = pppppppuVar12;
    if (pppppppuVar7 == (undefined8 *******)0x0) {
      pppppppuStack_188 = (undefined8 *******)0x0;
      pppppppuStack_180 = (undefined8 *******)0x0;
      func_0x048b0d20(&pppppppuStack_188);
      pppppppuVar7 = pppppppuStack_188;
      pppppppuVar17 = pppppppuStack_180;
      if (pppppppuStack_188 != (undefined8 *******)0x0) goto LAB_0ecd82cc;
      uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
      uVar10 = 0;
      lVar6 = (long)&uStack_1a8 + 1;
LAB_0ecd8359:
      *(undefined1 *)(lVar6 + uVar10) = 0;
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
      pppppppuVar12 = pppppppuStack_160;
      pppppppuVar7 = pppppppuStack_188;
      if (cStack_164 == '\x02') {
        pppppppuVar7 = &pppppppuStack_188;
      }
      pppppppuVar17 = &pppppppuStack_a8;
      if (pppppppuVar7 == (undefined8 *******)0x0 || iStack_168 != 0x6eb88147) {
        if (lStack_158 == 0) {
          (*pcStack_150)(0,&pppppppuStack_188,0);
        }
        pppppppuVar7 = pppppppuStack_188;
        if (cStack_164 == '\x02') {
          pppppppuVar7 = &pppppppuStack_188;
        }
        pppppppuVar7 = (undefined8 *******)
                       func_0x0488e200(pppppppuVar12,lStack_158,0x6eb88147,pppppppuVar7);
        pppppppuVar17 = pppppppuVar12;
      }
      bVar19 = (uStack_1a8 & 1) == 0;
      lVar6 = lStack_198;
      if (bVar19) {
        lVar6 = (long)&uStack_1a8 + 1;
      }
      uVar2 = *(undefined4 *)pppppppuVar7;
      uVar10 = uStack_1a8 >> 1 & 0x7f;
      if (!bVar19) {
        uVar10 = uStack_1a0;
      }
      pppppppuVar7 = (undefined8 *******)func_0x04883620(&plStack_48,lVar6,uVar10);
      pppppppuVar12 = _DAT_0f772590;
      if (_DAT_0f772590 != (undefined8 *******)0x0) {
        uVar10 = (long)_DAT_0f772590 - ((ulong)_DAT_0f772590 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
        uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar10 >> 0x38 < 2) {
          pppppppuVar17 = (undefined8 *******)((long)_DAT_0f772590 - 1U & (ulong)pppppppuVar7);
          plVar5 = *(long **)(_DAT_0f772588 + (long)pppppppuVar17 * 8);
        }
        else {
          pppppppuVar17 = pppppppuVar7;
          if (_DAT_0f772590 <= pppppppuVar7) {
            if (((ulong)pppppppuVar7 | (ulong)_DAT_0f772590) >> 0x20 == 0) {
              pppppppuVar17 =
                   (undefined8 *******)
                   (((ulong)pppppppuVar7 & 0xffffffff) % ((ulong)_DAT_0f772590 & 0xffffffff));
              plVar5 = *(long **)(_DAT_0f772588 + (long)pppppppuVar17 * 8);
              goto joined_r0x0ecd8b90;
            }
            pppppppuVar17 = (undefined8 *******)((ulong)pppppppuVar7 % (ulong)_DAT_0f772590);
          }
          plVar5 = *(long **)(_DAT_0f772588 + (long)pppppppuVar17 * 8);
        }
joined_r0x0ecd8b90:
        if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
          lStack_190 = lStack_198;
          uVar15 = uStack_1a0;
          if ((uStack_1a8 & 1) == 0) {
            lStack_190 = (long)&uStack_1a8 + 1;
            uVar15 = uStack_1a8 >> 1 & 0x7f;
          }
          if ((byte)(uVar10 >> 0x38) < 2) {
            uVar10 = (long)_DAT_0f772590 - 1;
            do {
              if ((undefined8 *******)plVar5[1] == pppppppuVar7) {
                bVar1 = *(byte *)(plVar5 + 2);
                if ((bVar1 & 1) == 0) {
                  uVar13 = (ulong)(bVar1 >> 1);
                }
                else {
                  uVar13 = plVar5[3];
                }
                if (uVar13 == uVar15) {
                  if ((bVar1 & 1) == 0) {
                    lVar6 = (long)plVar5 + 0x11;
                  }
                  else {
                    lVar6 = plVar5[4];
                  }
                  iVar4 = func_0x0eee3000(lVar6,lStack_190,uVar15);
                  if (iVar4 == 0) goto joined_r0x0ecd869d;
                }
              }
              else if ((undefined8 *******)((ulong)plVar5[1] & uVar10) != pppppppuVar17) break;
              plVar5 = (long *)*plVar5;
            } while (plVar5 != (long *)0x0);
          }
          else {
            do {
              pppppppuVar11 = (undefined8 *******)plVar5[1];
              if (pppppppuVar11 == pppppppuVar7) {
                bVar1 = *(byte *)(plVar5 + 2);
                if ((bVar1 & 1) == 0) {
                  uVar10 = (ulong)(bVar1 >> 1);
                }
                else {
                  uVar10 = plVar5[3];
                }
                if (uVar10 == uVar15) {
                  if ((bVar1 & 1) == 0) {
                    lVar6 = (long)plVar5 + 0x11;
                  }
                  else {
                    lVar6 = plVar5[4];
                  }
                  iVar4 = func_0x0eee3000(lVar6,lStack_190,uVar15);
                  if (iVar4 == 0) goto joined_r0x0ecd869d;
                }
              }
              else {
                if (pppppppuVar12 <= pppppppuVar11) {
                  if (((ulong)pppppppuVar11 | (ulong)pppppppuVar12) >> 0x20 == 0) {
                    pppppppuVar11 =
                         (undefined8 *******)
                         (((ulong)pppppppuVar11 & 0xffffffff) % ((ulong)pppppppuVar12 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppuVar11 =
                         (undefined8 *******)((ulong)pppppppuVar11 % (ulong)pppppppuVar12);
                  }
                }
                if (pppppppuVar11 != pppppppuVar17) break;
              }
              plVar5 = (long *)*plVar5;
            } while (plVar5 != (long *)0x0);
          }
        }
      }
      plVar5 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar5 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_40 = &DAT_0f772588;
      uStack_38 = 1;
      *plVar5 = 0;
      plVar5[1] = (long)pppppppuVar7;
      plVar5[4] = lStack_198;
      plVar5[2] = uStack_1a8;
      plVar5[3] = uStack_1a0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      lStack_198 = 0;
      *(undefined4 *)(plVar5 + 5) = uVar2;
      plStack_48 = plVar5;
      if ((long)pppppppuVar12 < 0) {
        fVar20 = (float)pppppppuVar12;
        if (pppppppuVar12 != (undefined8 *******)0x0) goto LAB_0ecd8793;
LAB_0ecd87c0:
        uVar10 = 1;
        if ((undefined8 *******)0x2 < pppppppuVar12) {
          uVar10 = (ulong)(((ulong)pppppppuVar12 & (long)pppppppuVar12 - 1U) != 0);
        }
        pppppppuVar17 = (undefined8 *******)((long)pppppppuVar12 * 2 | uVar10);
        fVar20 = (float)func_0x0eee3ab0((float)(_DAT_0f7725a0 + 1) / _DAT_0f7725a8);
        pppppppuVar12 =
             (undefined8 *******)
             ((long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20);
        if (pppppppuVar12 < pppppppuVar17) {
          pppppppuVar12 = pppppppuVar17;
        }
        pppppppuVar17 = (undefined8 *******)0x2;
        if ((pppppppuVar12 == (undefined8 *******)0x1) ||
           (pppppppuVar17 = pppppppuVar12, ((ulong)pppppppuVar12 & (long)pppppppuVar12 - 1U) == 0))
        {
          bVar19 = pppppppuVar17 < _DAT_0f772590;
          pppppppuVar12 = _DAT_0f772590;
          if (pppppppuVar17 <= _DAT_0f772590) goto LAB_0ecd893f;
LAB_0ecd883b:
          if ((ulong)pppppppuVar17 >> 0x3d != 0) goto LAB_0ecd8e1f;
          lVar6 = (long)pppppppuVar17 * 8;
          lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar6);
          if (lVar18 == 0) {
            func_0x0eec74c0(lVar6,0);
          }
          lVar3 = _DAT_0f772588;
          bVar19 = _DAT_0f772588 != 0;
          _DAT_0f772588 = lVar18;
          if (bVar19) {
            func_0x0412a280(lVar3,(long)_DAT_0f772590 << 3);
          }
          lVar18 = _DAT_0f772588;
          _DAT_0f772590 = pppppppuVar17;
          func_0x0eee2dd0(_DAT_0f772588,0,lVar6);
          plVar8 = _DAT_0f772598;
          if (_DAT_0f772598 != (long *)0x0) {
            pppppppuVar12 = (undefined8 *******)_DAT_0f772598[1];
            uVar10 = (long)pppppppuVar17 - 1;
            if (((ulong)pppppppuVar17 & uVar10) == 0) {
              *(undefined **)(lVar18 + ((ulong)pppppppuVar12 & uVar10) * 8) = &DAT_0f772598;
              uVar15 = (ulong)pppppppuVar12 & uVar10;
              while (plVar14 = plVar8, plVar8 = (long *)*plVar14, plVar8 != (long *)0x0) {
                uVar13 = plVar8[1] & uVar10;
                if (uVar13 != uVar15) {
                  if (*(long *)(lVar18 + uVar13 * 8) == 0) {
                    *(long **)(lVar18 + uVar13 * 8) = plVar14;
                    uVar15 = uVar13;
                  }
                  else {
                    *plVar14 = *plVar8;
                    *plVar8 = **(long **)(lVar18 + uVar13 * 8);
                    **(undefined8 **)(lVar18 + uVar13 * 8) = plVar8;
                    plVar8 = plVar14;
                  }
                }
              }
            }
            else {
              if (pppppppuVar17 <= pppppppuVar12) {
                if (((ulong)pppppppuVar12 | (ulong)pppppppuVar17) >> 0x20 == 0) {
                  pppppppuVar12 =
                       (undefined8 *******)
                       (((ulong)pppppppuVar12 & 0xffffffff) % ((ulong)pppppppuVar17 & 0xffffffff));
                }
                else {
                  pppppppuVar12 = (undefined8 *******)((ulong)pppppppuVar12 % (ulong)pppppppuVar17);
                }
              }
              *(undefined **)(lVar18 + (long)pppppppuVar12 * 8) = &DAT_0f772598;
              plVar14 = (long *)*plVar8;
              while (plVar14 != (long *)0x0) {
                pppppppuVar11 = (undefined8 *******)plVar14[1];
                if (pppppppuVar17 <= pppppppuVar11) {
                  if (((ulong)pppppppuVar11 | (ulong)pppppppuVar17) >> 0x20 == 0) {
                    pppppppuVar11 =
                         (undefined8 *******)
                         (((ulong)pppppppuVar11 & 0xffffffff) % ((ulong)pppppppuVar17 & 0xffffffff))
                    ;
                  }
                  else {
                    pppppppuVar11 =
                         (undefined8 *******)((ulong)pppppppuVar11 % (ulong)pppppppuVar17);
                  }
                }
                if (pppppppuVar11 != pppppppuVar12) {
                  if (*(long *)(lVar18 + (long)pppppppuVar11 * 8) == 0) {
                    *(long **)(lVar18 + (long)pppppppuVar11 * 8) = plVar8;
                    pppppppuVar12 = pppppppuVar11;
                  }
                  else {
                    *plVar8 = *plVar14;
                    *plVar14 = **(long **)(lVar18 + (long)pppppppuVar11 * 8);
                    **(undefined8 **)(lVar18 + (long)pppppppuVar11 * 8) = plVar14;
                    plVar14 = plVar8;
                  }
                }
                plVar8 = plVar14;
                plVar14 = (long *)*plVar8;
              }
            }
          }
        }
        else {
          pppppppuVar17 = (undefined8 *******)func_0x0412c3f0();
          bVar19 = pppppppuVar17 < _DAT_0f772590;
          pppppppuVar12 = _DAT_0f772590;
          if (_DAT_0f772590 < pppppppuVar17) goto LAB_0ecd883b;
LAB_0ecd893f:
          pppppppuVar12 = _DAT_0f772590;
          if (bVar19) {
            fVar20 = (float)func_0x0eee3ab0((float)_DAT_0f7725a0 / _DAT_0f7725a8);
            pppppppuVar11 =
                 (undefined8 *******)
                 ((long)(fVar20 - _DAT_01198778) & (long)fVar20 >> 0x3f | (long)fVar20);
            if ((pppppppuVar12 < (undefined8 *******)0x3) ||
               (uVar10 = (long)pppppppuVar12 - ((ulong)pppppppuVar12 >> 1 & 0x5555555555555555),
               uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333),
               1 < (byte)(((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              pppppppuVar11 = (undefined8 *******)func_0x0412c3f0(pppppppuVar11);
              lVar6 = _DAT_0f772588;
              if (pppppppuVar11 < pppppppuVar17) {
                pppppppuVar11 = pppppppuVar17;
              }
            }
            else {
              if ((undefined8 *******)0x1 < pppppppuVar11) {
                lVar6 = 0x3f;
                if ((long)pppppppuVar11 - 1U != 0) {
                  for (; (long)pppppppuVar11 - 1U >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                pppppppuVar11 = (undefined8 *******)(1L << (-((byte)lVar6 ^ 0x3f) & 0x3f));
              }
              lVar6 = _DAT_0f772588;
              if (pppppppuVar11 < pppppppuVar17) {
                pppppppuVar11 = pppppppuVar17;
              }
            }
            pppppppuVar17 = pppppppuVar11;
            _DAT_0f772588 = lVar6;
            if (pppppppuVar17 < pppppppuVar12) {
              if (pppppppuVar17 != (undefined8 *******)0x0) goto LAB_0ecd883b;
              _DAT_0f772588 = 0;
              if (lVar6 != 0) {
                func_0x0412a280(lVar6,(long)_DAT_0f772590 << 3);
              }
              _DAT_0f772590 = (undefined8 *******)0x0;
            }
          }
        }
        if (((ulong)_DAT_0f772590 & (long)_DAT_0f772590 - 1U) == 0) {
          pppppppuVar17 = (undefined8 *******)((ulong)pppppppuVar7 & (long)_DAT_0f772590 - 1U);
          plVar8 = *(long **)(_DAT_0f772588 + (long)pppppppuVar17 * 8);
        }
        else {
          if (_DAT_0f772590 <= pppppppuVar7) {
            if (((ulong)pppppppuVar7 | (ulong)_DAT_0f772590) >> 0x20 == 0) {
              pppppppuVar17 =
                   (undefined8 *******)
                   (((ulong)pppppppuVar7 & 0xffffffff) % ((ulong)_DAT_0f772590 & 0xffffffff));
              plVar8 = *(long **)(_DAT_0f772588 + (long)pppppppuVar17 * 8);
              goto joined_r0x0ecd8bb2;
            }
            pppppppuVar7 = (undefined8 *******)((ulong)pppppppuVar7 % (ulong)_DAT_0f772590);
          }
          plVar8 = *(long **)(_DAT_0f772588 + (long)pppppppuVar7 * 8);
          pppppppuVar17 = pppppppuVar7;
        }
joined_r0x0ecd8bb2:
        pppppppuVar12 = _DAT_0f772590;
        if (plVar8 == (long *)0x0) goto LAB_0ecd8bb8;
LAB_0ecd8b14:
        *plVar5 = *plVar8;
        *plVar8 = (long)plVar5;
      }
      else {
        fVar20 = (float)(long)pppppppuVar12;
        if (pppppppuVar12 == (undefined8 *******)0x0) goto LAB_0ecd87c0;
LAB_0ecd8793:
        if (fVar20 * _DAT_0f7725a8 < (float)(_DAT_0f7725a0 + 1)) goto LAB_0ecd87c0;
        plVar8 = *(long **)(_DAT_0f772588 + (long)pppppppuVar17 * 8);
        if (plVar8 != (long *)0x0) goto LAB_0ecd8b14;
LAB_0ecd8bb8:
        lVar6 = _DAT_0f772588;
        *plVar5 = (long)_DAT_0f772598;
        _DAT_0f772598 = plVar5;
        *(undefined **)(lVar6 + (long)pppppppuVar17 * 8) = &DAT_0f772598;
        if (*plVar5 != 0) {
          pppppppuVar7 = *(undefined8 ********)(*plVar5 + 8);
          if (((ulong)pppppppuVar12 & (long)pppppppuVar12 - 1U) == 0) {
            *(long **)(lVar6 + ((ulong)pppppppuVar7 & (long)pppppppuVar12 - 1U) * 8) = plVar5;
          }
          else {
            if (pppppppuVar12 <= pppppppuVar7) {
              if (((ulong)pppppppuVar7 | (ulong)pppppppuVar12) >> 0x20 == 0) {
                *(long **)(lVar6 + (((ulong)pppppppuVar7 & 0xffffffff) %
                                   ((ulong)pppppppuVar12 & 0xffffffff)) * 8) = plVar5;
                goto LAB_0ecd8b1e;
              }
              pppppppuVar7 = (undefined8 *******)((ulong)pppppppuVar7 % (ulong)pppppppuVar12);
            }
            *(long **)(lVar6 + (long)pppppppuVar7 * 8) = plVar5;
          }
        }
      }
LAB_0ecd8b1e:
      _DAT_0f7725a0 = _DAT_0f7725a0 + 1;
joined_r0x0ecd869d:
      if (pcStack_170 != (code *)0x0) {
        (*pcStack_170)(&pppppppuStack_188);
      }
      pppppppuVar12 = pppppppuStack_140;
      if (pcStack_90 != (code *)0x0) {
        (*pcStack_90)(&pppppppuStack_a8);
      }
      if ((uStack_1a8 & 1) != 0) {
        func_0x0412a280(lStack_198,uStack_1a8 & 0xfffffffffffffffe);
      }
LAB_0ecd81f0:
      pppppuVar9 = pppppuStack_b0 + 0xd;
      pppppppuVar7 = pppppppuStack_140;
      if (pppppuVar9 == pppppuStack_b8) goto LAB_0ecd8ceb;
      goto LAB_0ecd820a;
    }
LAB_0ecd82cc:
    pppppppuStack_a0 = pppppppuVar17;
    pppppppuStack_a8 = pppppppuVar7;
    auVar21 = func_0x0ed6ae90(&pppppppuStack_a8);
    uVar10 = auVar21._8_8_;
    if (uVar10 < 0xfffffffffffffff8) {
      if (uVar10 < 0x17) {
        uStack_1a8 = CONCAT71(uStack_1a8._1_7_,auVar21[8] * '\x02');
        lVar6 = (long)&uStack_1a8 + 1;
        if (uVar10 == 0) {
          uVar10 = 0;
          goto LAB_0ecd8359;
        }
      }
      else {
        uVar15 = (uVar10 | 7) + 1;
        if ((uVar10 | 7) == 0x17) {
          uVar15 = 0x1a;
        }
        lVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar15);
        if (lVar6 == 0) {
          func_0x0eec74c0(uVar15,0);
        }
        uStack_1a8 = uVar15 | 1;
        uStack_1a0 = uVar10;
        lStack_198 = lVar6;
      }
      func_0x0eee2ee0(lVar6,auVar21._0_8_,uVar10);
      goto LAB_0ecd8359;
    }
    func_0x04882e30();
LAB_0ecd8e1f:
    FUN_04882eb0();
LAB_0ecd8e24:
    iVar4 = func_0x04108328(&DAT_0f730c88);
    if (iVar4 != 0) {
      func_0x0d944c40(0xf730c70);
      FUN_0410844d(&DAT_0f730c88);
    }
  } while( true );
}


