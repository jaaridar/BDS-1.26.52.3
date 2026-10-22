/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd0141c0 (ELF vaddr 0xcf141c0)
 * Label: caller-of-callee
 * Body:  [[0d0141c0, 0d014416] [0d014420, 0d0147b1] [0d0147c0, 0d0147f4] [0d014800, 0d014869] [0d014870, 0d01488a] [0d014890, 0d0148ba] [0d0148c0, 0d01497d] [0d014980, 0d0149cb] [0d0149d0, 0d014b51] [0d014b60, 0d014b94] [0d014ba0, 0d014c06] [0d014c10, 0d014c28] [0d014c30, 0d014ce8] [0d014cf0, 0d014d1c] [0d014d20, 0d014d63] [0d014d70, 0d014de9] [0d014df0, 0d014f15] [0d014f20, 0d015252] [0d015260, 0d0152ab] [0d0152b0, 0d015351] [0d015360, 0d015384] [0d015390, 0d0153d3] [0d0153e0, 0d015406] [0d015410, 0d015535] [0d015540, 0d01588a] [0d015890, 0d015914] [0d015920, 0d015a54] [0d015a60, 0d015b41]]
 * Ghidra: FUN_0d0141c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d0141c0(void)

{
  byte bVar1;
  byte bVar2;
  byte ****ppppbVar3;
  byte ******ppppppbVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  byte *****pppppbVar9;
  byte *******pppppppbVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  byte *******pppppppbVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  byte *****pppppbVar19;
  byte *****pppppbVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  long *unaff_R12;
  long lVar24;
  long *plVar25;
  bool bVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined8 uStack_198;
  long *plStack_190;
  long lStack_188;
  long *plStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  byte *******pppppppbStack_158;
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
  byte *****pppppbStack_e8;
  byte *****pppppbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  byte *****pppppbStack_a8;
  byte *******pppppppbStack_a0;
  long *plStack_98;
  byte *****pppppbStack_90;
  byte *******pppppppbStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  byte *****pppppbStack_40;
  long *plStack_38;
  
  plVar21 = &lStack_100;
  uStack_d8 = 0;
  uStack_b8 = 0;
  uStack_b6 = 0;
  uStack_b0 = 0;
  uStack_ae = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uStack_be = 0;
  pppppbStack_e8 = (byte *****)0x0;
  pppppbStack_e0 = (byte *****)0x0;
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
  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (plVar12 == (long *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&UNK_0ef44a60;
  plStack_110 = plVar12 + 3;
  *(undefined1 *)(plVar12 + 3) = 1;
  puStack_118 = &UNK_0ef471f0;
  _DAT_0f71c618 = 0;
  _DAT_0f71c620 = (long *)0x0;
  _DAT_0f71c628 = (long *)0x0;
  _DAT_0f71c630 = 0;
  _DAT_0f71c638 = 0x3f800000;
  _DAT_0f71c640 = 0;
  _DAT_0f71c648 = (long *)0x0;
  _DAT_0f71c650 = (long *)0x0;
  _DAT_0f71c658 = 0;
  _DAT_0f71c660 = 0x3f800000;
  plStack_108 = plVar12;
  func_0x0d012070(&puStack_118);
  if (DAT_0f706878 == '\0') goto LAB_0d015b11;
  do {
    pppppbVar19 = (byte *****)
                  (lStack_100 +
                  (ulong)((int)((ulong)(lStack_f8 - lStack_100) >> 3) - 1U & _DAT_0f706864) * 8);
    do {
      ppppbVar3 = *pppppbVar19;
      if (ppppbVar3 == (byte ****)0xffffffffffffffff) goto LAB_0d014364;
      pppppbVar19 = pppppbStack_e8 + (long)ppppbVar3 * 3;
    } while (*(uint *)(pppppbStack_e8 + (long)ppppbVar3 * 3 + 1) != _DAT_0f706864);
    if (pppppbVar19 == pppppbStack_e0) {
LAB_0d014364:
      pppppppbStack_158 = (byte *******)0x0;
      plStack_150 = (long *)0x0;
      func_0x048b1dc0(&pppppppbStack_158);
      pppppppbVar14 = pppppppbStack_158;
      plVar21 = plStack_150;
      if (pppppppbStack_158 != (byte *******)0x0) goto LAB_0d0143df;
LAB_0d014386:
      lVar13 = func_0x048aead0(plVar21);
      if (*(long *)(lVar13 + 0x78) == 0) goto LAB_0d0159db;
      lVar13 = func_0x048aead0(plVar21);
      pppppbVar19 = *(byte ******)(*(long *)(lVar13 + 0x78) + 0x48);
      lVar13 = func_0x048aead0(plVar21);
      pppppbVar20 = *(byte ******)(*(long *)(lVar13 + 0x78) + 0x50);
      pppppbVar9 = pppppbVar20;
      pppppppbVar10 = pppppppbVar14;
      plVar12 = plVar21;
      if (pppppbVar19 == pppppbVar20) goto LAB_0d0159db;
    }
    else {
      pppppppbVar14 = (byte *******)pppppbVar19[2];
      if (pppppppbVar14 == (byte *******)0x0) goto LAB_0d014386;
LAB_0d0143df:
      ppppppbVar4 = pppppppbVar14[0xf];
      if (ppppppbVar4 == (byte ******)0x0) {
LAB_0d0159db:
        plVar21 = plStack_108;
        puStack_118 = &UNK_0f534768;
        if (plStack_108 == (long *)0x0) {
          *(undefined1 *)plStack_110 = 0;
        }
        else {
          *(undefined1 *)plStack_110 = 0;
          LOCK();
          plVar12 = plStack_108 + 1;
          lVar13 = *plVar12;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            FUN_0412c2d0(plVar21);
          }
        }
        lVar13 = lStack_c8;
        if (lStack_c8 != 0) {
          for (lVar24 = CONCAT62(uStack_be,uStack_c0); lVar13 != lVar24; lVar24 = lVar24 + -0x38) {
            if ((*(byte *)(lVar24 + -0x38) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar24 + -0x28),
                              *(ulong *)(lVar24 + -0x38) & 0xfffffffffffffffe);
            }
          }
          uStack_c0 = (undefined2)lVar13;
          uStack_be = (undefined6)((ulong)lVar13 >> 0x10);
          func_0x0412a280(lStack_c8,CONCAT62(uStack_b6,uStack_b8) - lStack_c8);
        }
        pppppppbStack_158 = (byte *******)&pppppbStack_e8;
        func_0x048b0f50(&pppppppbStack_158);
        if (lStack_100 != 0) {
          lStack_f8 = lStack_100;
          func_0x0412a280(lStack_100,lStack_f0 - lStack_100);
        }
        return;
      }
      pppppbVar19 = ppppppbVar4[9];
      pppppbVar20 = ppppppbVar4[10];
      pppppbVar9 = pppppbVar20;
      pppppppbVar10 = pppppppbVar14;
      plVar12 = plVar21;
      if (pppppbVar19 == pppppbVar20) goto LAB_0d0159db;
    }
LAB_0d01442d:
    plStack_98 = plVar12;
    pppppppbStack_a0 = pppppppbVar10;
    pppppbStack_a8 = pppppbVar9;
    uStack_48 = *(undefined4 *)pppppbVar19;
    pppppbStack_40 = pppppbVar19;
    plStack_38 = plVar21;
    plVar12 = (long *)(*(code *)pppppbVar19[7])(plVar21);
    uVar8 = uStack_48;
    if (*(uint *)(*plVar12 + 4) != _DAT_0f706864) {
LAB_0d014420:
      pppppbVar19 = pppppbVar19 + 0xd;
      pppppbVar9 = pppppbStack_a8;
      pppppppbVar10 = pppppppbStack_a0;
      plVar12 = plStack_98;
      if (pppppbVar19 == pppppbVar20) goto LAB_0d0159db;
      goto LAB_0d01442d;
    }
    if (pppppppbVar14 == (byte *******)0x0) {
      pppppppbVar14 = (byte *******)func_0x048aead0(plVar21,0);
    }
    pppppppbVar14 = (byte *******)func_0x048b0c90(plVar21,pppppppbVar14,uVar8,1);
    plVar12 = plVar21;
    if (pppppppbVar14 == (byte *******)0x0) {
      pppppppbStack_158 = (byte *******)0x0;
      plStack_150 = (long *)0x0;
      func_0x048b0d20(&pppppppbStack_158);
      pppppppbVar14 = pppppppbStack_158;
      plVar12 = plStack_150;
      if (pppppppbStack_158 != (byte *******)0x0) goto LAB_0d0144c6;
      uStack_198 = (long *)((ulong)uStack_198 & 0xffffffffffffff00);
      plVar12 = (long *)0x0;
      lVar13 = (long)&uStack_198 + 1;
LAB_0d014559:
      *(undefined1 *)(lVar13 + (long)plVar12) = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      pcStack_70 = (code *)0x0;
      pppppppbStack_88 = (byte *******)0x0;
      plStack_80 = (long *)0x0;
      func_0x05d84ba0(&pppppppbStack_88);
      func_0x05d9a920(&pppppppbStack_158,&pppppbStack_40,&pppppppbStack_88);
      uVar7 = uStack_130;
      pppppbStack_90 = pppppbVar19;
      pppppppbVar14 = pppppppbStack_158;
      if (cStack_134 == '\x02') {
        pppppppbVar14 = (byte *******)&pppppppbStack_158;
      }
      if (pppppppbVar14 == (byte *******)0x0 || iStack_138 != -0x6e57439b) {
        if (lStack_128 == 0) {
          (*pcStack_120)(0,&pppppppbStack_158,0);
        }
        pppppppbVar14 = pppppppbStack_158;
        if (cStack_134 == '\x02') {
          pppppppbVar14 = (byte *******)&pppppppbStack_158;
        }
        pppppppbVar14 = (byte *******)func_0x0488e200(uVar7,lStack_128,0x91a8bc65,pppppppbVar14);
      }
      bVar26 = ((ulong)uStack_198 & 1) == 0;
      lVar13 = lStack_188;
      if (bVar26) {
        lVar13 = (long)&uStack_198 + 1;
      }
      bVar1 = *(byte *)pppppppbVar14;
      plVar21 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
      if (!bVar26) {
        plVar21 = plStack_190;
      }
      plVar12 = (long *)func_0x04883620(&plStack_180,lVar13,plVar21);
      plVar21 = _DAT_0f71c620;
      if (_DAT_0f71c620 != (long *)0x0) {
        uVar16 = (long)_DAT_0f71c620 - ((ulong)_DAT_0f71c620 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
        uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar16 >> 0x38 < 2) {
          plVar25 = (long *)((long)_DAT_0f71c620 - 1U & (ulong)plVar12);
          plVar22 = *(long **)(_DAT_0f71c618 + (long)plVar25 * 8);
        }
        else if (plVar12 < _DAT_0f71c620) {
          plVar22 = *(long **)(_DAT_0f71c618 + (long)plVar12 * 8);
          plVar25 = plVar12;
        }
        else if (((ulong)plVar12 | (ulong)_DAT_0f71c620) >> 0x20 == 0) {
          plVar25 = (long *)(((ulong)plVar12 & 0xffffffff) % ((ulong)_DAT_0f71c620 & 0xffffffff));
          plVar22 = *(long **)(_DAT_0f71c618 + (long)plVar25 * 8);
        }
        else {
          plVar22 = *(long **)(_DAT_0f71c618 + (long)((ulong)plVar12 % (ulong)_DAT_0f71c620) * 8);
          plVar25 = (long *)((ulong)plVar12 % (ulong)_DAT_0f71c620);
        }
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          lVar13 = lStack_188;
          unaff_R12 = plStack_190;
          if (((ulong)uStack_198 & 1) == 0) {
            unaff_R12 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
            lVar13 = (long)&uStack_198 + 1;
          }
          if ((byte)(uVar16 >> 0x38) < 2) {
            uVar16 = (long)_DAT_0f71c620 - 1;
            do {
              if ((long *)plVar22[1] == plVar12) {
                bVar2 = *(byte *)(plVar22 + 2);
                if ((bVar2 & 1) == 0) {
                  plVar21 = (long *)(ulong)(bVar2 >> 1);
                }
                else {
                  plVar21 = (long *)plVar22[3];
                }
                if (plVar21 == unaff_R12) {
                  if ((bVar2 & 1) == 0) {
                    lVar24 = (long)plVar22 + 0x11;
                  }
                  else {
                    lVar24 = plVar22[4];
                  }
                  iVar11 = func_0x0eee3000(lVar24,lVar13,unaff_R12);
                  if (iVar11 == 0) goto LAB_0d015761;
                }
              }
              else if ((long *)((ulong)plVar22[1] & uVar16) != plVar25) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              plVar18 = (long *)plVar22[1];
              if (plVar18 == plVar12) {
                bVar2 = *(byte *)(plVar22 + 2);
                if ((bVar2 & 1) == 0) {
                  plVar18 = (long *)(ulong)(bVar2 >> 1);
                }
                else {
                  plVar18 = (long *)plVar22[3];
                }
                if (plVar18 == unaff_R12) {
                  if ((bVar2 & 1) == 0) {
                    lVar24 = (long)plVar22 + 0x11;
                  }
                  else {
                    lVar24 = plVar22[4];
                  }
                  iVar11 = func_0x0eee3000(lVar24,lVar13,unaff_R12);
                  if (iVar11 == 0) goto LAB_0d015761;
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
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
      plVar21 = (long *)(ulong)bVar1;
      if (_DAT_0f71c648 != (long *)0x0) {
        uVar16 = (long)_DAT_0f71c648 - ((ulong)_DAT_0f71c648 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
        uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar16 >> 0x38 < 2) {
          plVar12 = (long *)(ulong)((uint)bVar1 & (int)_DAT_0f71c648 - 1U);
        }
        else {
          plVar12 = plVar21;
          if (_DAT_0f71c648 <= plVar21) {
            plVar12 = (long *)(ulong)(byte)(bVar1 % (byte)_DAT_0f71c648);
          }
        }
        plVar22 = *(long **)(_DAT_0f71c640 + (long)plVar12 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if ((byte)(uVar16 >> 0x38) < 2) {
            do {
              if ((long *)plVar22[1] == plVar21) {
                if (*(byte *)(plVar22 + 2) == bVar1) goto LAB_0d015761;
              }
              else if ((long *)((ulong)plVar22[1] & (long)_DAT_0f71c648 - 1U) != plVar12) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              plVar25 = (long *)plVar22[1];
              if (plVar25 == plVar21) {
                if (*(byte *)(plVar22 + 2) == bVar1) goto LAB_0d015761;
              }
              else {
                if (_DAT_0f71c648 <= plVar25) {
                  if (((ulong)plVar25 | (ulong)_DAT_0f71c648) >> 0x20 == 0) {
                    if ((long *)(((ulong)plVar25 & 0xffffffff) % ((ulong)_DAT_0f71c648 & 0xffffffff)
                                ) == plVar12) goto LAB_0d01498e;
                    break;
                  }
                  plVar25 = (long *)((ulong)plVar25 % (ulong)_DAT_0f71c648);
                }
                if (plVar25 != plVar12) break;
              }
LAB_0d01498e:
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
      plVar12 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
      lVar13 = (long)&uStack_198 + 1;
      if (((ulong)uStack_198 & 1) != 0) {
        plVar12 = plStack_190;
        lVar13 = lStack_188;
      }
      plVar12 = (long *)func_0x04883620(&plStack_180,lVar13,plVar12);
      plVar22 = _DAT_0f71c620;
      plStack_160 = plVar21;
      if (_DAT_0f71c620 != (long *)0x0) {
        uVar16 = (long)_DAT_0f71c620 - ((ulong)_DAT_0f71c620 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
        uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar16 >> 0x38 < 2) {
          unaff_R12 = (long *)((long)_DAT_0f71c620 - 1U & (ulong)plVar12);
          puVar5 = *(undefined8 **)(_DAT_0f71c618 + (long)unaff_R12 * 8);
        }
        else {
          unaff_R12 = plVar12;
          if (_DAT_0f71c620 <= plVar12) {
            if (((ulong)plVar12 | (ulong)_DAT_0f71c620) >> 0x20 == 0) {
              unaff_R12 = (long *)(((ulong)plVar12 & 0xffffffff) %
                                  ((ulong)_DAT_0f71c620 & 0xffffffff));
              puVar5 = *(undefined8 **)(_DAT_0f71c618 + (long)unaff_R12 * 8);
              goto joined_r0x0d014afe;
            }
            unaff_R12 = (long *)((ulong)plVar12 % (ulong)_DAT_0f71c620);
          }
          puVar5 = *(undefined8 **)(_DAT_0f71c618 + (long)unaff_R12 * 8);
        }
joined_r0x0d014afe:
        if ((puVar5 != (undefined8 *)0x0) && (plVar25 = (long *)*puVar5, plVar25 != (long *)0x0)) {
          lStack_168 = lStack_188;
          plVar21 = plStack_190;
          if (((ulong)uStack_198 & 1) == 0) {
            lStack_168 = (long)&uStack_198 + 1;
            plVar21 = (long *)((ulong)uStack_198 >> 1 & 0x7f);
          }
          if ((byte)(uVar16 >> 0x38) < 2) {
            uVar16 = (long)_DAT_0f71c620 - 1;
            do {
              if ((long *)plVar25[1] == plVar12) {
                bVar2 = *(byte *)(plVar25 + 2);
                if ((bVar2 & 1) == 0) {
                  plVar18 = (long *)(ulong)(bVar2 >> 1);
                }
                else {
                  plVar18 = (long *)plVar25[3];
                }
                if (plVar18 == plVar21) {
                  if ((bVar2 & 1) == 0) {
                    lVar13 = (long)plVar25 + 0x11;
                  }
                  else {
                    lVar13 = plVar25[4];
                  }
                  iVar11 = func_0x0eee3000(lVar13,lStack_168,plVar21);
                  if (iVar11 == 0) goto LAB_0d015195;
                }
              }
              else if ((long *)((ulong)plVar25[1] & uVar16) != unaff_R12) break;
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
          else {
            do {
              plVar18 = (long *)plVar25[1];
              if (plVar18 == plVar12) {
                bVar2 = *(byte *)(plVar25 + 2);
                if ((bVar2 & 1) == 0) {
                  plVar18 = (long *)(ulong)(bVar2 >> 1);
                }
                else {
                  plVar18 = (long *)plVar25[3];
                }
                if (plVar18 == plVar21) {
                  if ((bVar2 & 1) == 0) {
                    lVar13 = (long)plVar25 + 0x11;
                  }
                  else {
                    lVar13 = plVar25[4];
                  }
                  iVar11 = func_0x0eee3000(lVar13,lStack_168,plVar21);
                  if (iVar11 == 0) goto LAB_0d015195;
                }
              }
              else {
                if (plVar22 <= plVar18) {
                  if (((ulong)plVar18 | (ulong)plVar22) >> 0x20 == 0) {
                    plVar18 = (long *)(((ulong)plVar18 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff)
                                      );
                  }
                  else {
                    plVar18 = (long *)((ulong)plVar18 % (ulong)plVar22);
                  }
                }
                if (plVar18 != unaff_R12) break;
              }
              plVar25 = (long *)*plVar25;
            } while (plVar25 != (long *)0x0);
          }
        }
      }
      plVar25 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar25 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_178 = &DAT_0f71c618;
      uStack_170 = 0;
      *plVar25 = 0;
      plVar25[1] = (long)plVar12;
      plStack_180 = plVar25;
      if (((ulong)uStack_198 & 1) == 0) {
        plVar25[4] = lStack_188;
        plVar25[2] = (long)uStack_198;
        plVar25[3] = (long)plStack_190;
      }
      else {
        func_0x0412e5e0(plVar25 + 2,lStack_188,plStack_190);
      }
      *(byte *)(plVar25 + 5) = bVar1;
      uStack_170 = CONCAT71(uStack_170._1_7_,1);
      if ((long)plVar22 < 0) {
        fVar27 = (float)plVar22;
        if (plVar22 != (long *)0x0) goto LAB_0d014d83;
LAB_0d014df0:
        uVar16 = 1;
        if ((long *)0x2 < plVar22) {
          uVar16 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
        }
        plVar21 = (long *)((long)plVar22 * 2 | uVar16);
        fVar27 = (float)func_0x0eee3ab0((float)(_DAT_0f71c630 + 1) / _DAT_0f71c638);
        plVar22 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27);
        if (plVar22 < plVar21) {
          plVar22 = plVar21;
        }
        plVar21 = (long *)0x2;
        if ((plVar22 == (long *)0x1) ||
           (plVar21 = plVar22, ((ulong)plVar22 & (long)plVar22 - 1U) == 0)) {
          bVar26 = plVar21 < _DAT_0f71c620;
          plVar22 = plVar21;
          if (plVar21 <= _DAT_0f71c620) goto LAB_0d014f7f;
LAB_0d014e6b:
          unaff_R12 = plVar22;
          if ((long *)0x1fffffffffffffff < unaff_R12) goto LAB_0d015b07;
          lVar13 = (long)unaff_R12 * 8;
          lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
          if (lVar24 == 0) {
            func_0x0eec74c0(lVar13,0);
          }
          lVar6 = _DAT_0f71c618;
          bVar26 = _DAT_0f71c618 != 0;
          _DAT_0f71c618 = lVar24;
          if (bVar26) {
            func_0x0412a280(lVar6,(long)_DAT_0f71c620 << 3);
          }
          lVar24 = _DAT_0f71c618;
          _DAT_0f71c620 = unaff_R12;
          func_0x0eee2dd0(_DAT_0f71c618,0,lVar13);
          plVar21 = _DAT_0f71c628;
          if (_DAT_0f71c628 != (long *)0x0) {
            plVar22 = (long *)_DAT_0f71c628[1];
            uVar16 = (long)unaff_R12 - 1;
            if (((ulong)unaff_R12 & uVar16) == 0) {
              *(undefined **)(lVar24 + ((ulong)plVar22 & uVar16) * 8) = &DAT_0f71c628;
              uVar15 = (ulong)plVar22 & uVar16;
              while (plVar22 = plVar21, plVar21 = (long *)*plVar22, plVar21 != (long *)0x0) {
                uVar23 = plVar21[1] & uVar16;
                if (uVar23 != uVar15) {
                  if (*(long *)(lVar24 + uVar23 * 8) == 0) {
                    *(long **)(lVar24 + uVar23 * 8) = plVar22;
                    uVar15 = uVar23;
                  }
                  else {
                    *plVar22 = *plVar21;
                    *plVar21 = **(long **)(lVar24 + uVar23 * 8);
                    **(undefined8 **)(lVar24 + uVar23 * 8) = plVar21;
                    plVar21 = plVar22;
                  }
                }
              }
            }
            else {
              if (unaff_R12 <= plVar22) {
                if (((ulong)plVar22 | (ulong)unaff_R12) >> 0x20 == 0) {
                  plVar22 = (long *)(((ulong)plVar22 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff)
                                    );
                }
                else {
                  plVar22 = (long *)((ulong)plVar22 % (ulong)unaff_R12);
                }
              }
              *(undefined **)(lVar24 + (long)plVar22 * 8) = &DAT_0f71c628;
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
                if (plVar17 != plVar22) {
                  if (*(long *)(lVar24 + (long)plVar17 * 8) == 0) {
                    *(long **)(lVar24 + (long)plVar17 * 8) = plVar21;
                    plVar22 = plVar17;
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
          bVar26 = plVar21 < _DAT_0f71c620;
          plVar22 = plVar21;
          if (_DAT_0f71c620 < plVar21) goto LAB_0d014e6b;
LAB_0d014f7f:
          plVar22 = _DAT_0f71c620;
          if (bVar26) {
            fVar27 = (float)func_0x0eee3ab0((float)_DAT_0f71c630 / _DAT_0f71c638);
            unaff_R12 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f |
                                (long)fVar27);
            if ((plVar22 < (long *)0x3) ||
               (uVar16 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555),
               uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
               1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              unaff_R12 = (long *)func_0x0412c3f0(unaff_R12);
              lVar13 = _DAT_0f71c618;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            else {
              if ((long *)0x1 < unaff_R12) {
                lVar13 = 0x3f;
                if ((long)unaff_R12 - 1U != 0) {
                  for (; (long)unaff_R12 - 1U >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                unaff_R12 = (long *)(1L << (-((byte)lVar13 ^ 0x3f) & 0x3f));
              }
              lVar13 = _DAT_0f71c618;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            _DAT_0f71c618 = lVar13;
            if (unaff_R12 < plVar22) {
              plVar22 = unaff_R12;
              if (unaff_R12 != (long *)0x0) goto LAB_0d014e6b;
              _DAT_0f71c618 = 0;
              if (lVar13 != 0) {
                func_0x0412a280(lVar13,(long)_DAT_0f71c620 << 3);
              }
              _DAT_0f71c620 = (long *)0x0;
            }
          }
        }
        plVar22 = _DAT_0f71c620;
        if (((ulong)_DAT_0f71c620 & (long)_DAT_0f71c620 - 1U) != 0) {
          if (_DAT_0f71c620 <= plVar12) {
            if (((ulong)plVar12 | (ulong)_DAT_0f71c620) >> 0x20 == 0) {
              plVar12 = (long *)(((ulong)plVar12 & 0xffffffff) % ((ulong)_DAT_0f71c620 & 0xffffffff)
                                );
              plVar21 = *(long **)(_DAT_0f71c618 + (long)plVar12 * 8);
              goto joined_r0x0d015849;
            }
            plVar12 = (long *)((ulong)plVar12 % (ulong)_DAT_0f71c620);
          }
          plVar21 = *(long **)(_DAT_0f71c618 + (long)plVar12 * 8);
          goto joined_r0x0d01517e;
        }
        plVar12 = (long *)((ulong)plVar12 & (long)_DAT_0f71c620 - 1U);
        plVar21 = *(long **)(_DAT_0f71c618 + (long)plVar12 * 8);
joined_r0x0d015849:
        if (plVar21 == (long *)0x0) goto LAB_0d014da3;
LAB_0d015184:
        *plVar25 = *plVar21;
        *plVar21 = (long)plVar25;
      }
      else {
        fVar27 = (float)(long)plVar22;
        if (plVar22 == (long *)0x0) goto LAB_0d014df0;
LAB_0d014d83:
        if (fVar27 * _DAT_0f71c638 < (float)(_DAT_0f71c630 + 1)) goto LAB_0d014df0;
        plVar21 = *(long **)(_DAT_0f71c618 + (long)unaff_R12 * 8);
        plVar12 = unaff_R12;
joined_r0x0d01517e:
        if (plVar21 != (long *)0x0) goto LAB_0d015184;
LAB_0d014da3:
        lVar13 = _DAT_0f71c618;
        *plVar25 = (long)_DAT_0f71c628;
        _DAT_0f71c628 = plVar25;
        *(undefined **)(lVar13 + (long)plVar12 * 8) = &DAT_0f71c628;
        if (*plVar25 != 0) {
          plVar21 = *(long **)(*plVar25 + 8);
          if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
            *(long **)(lVar13 + ((ulong)plVar21 & (long)plVar22 - 1U) * 8) = plVar25;
          }
          else {
            if (plVar22 <= plVar21) {
              if (((ulong)plVar21 | (ulong)plVar22) >> 0x20 == 0) {
                *(long **)(lVar13 + (((ulong)plVar21 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff))
                                    * 8) = plVar25;
                goto LAB_0d01518e;
              }
              plVar21 = (long *)((ulong)plVar21 % (ulong)plVar22);
            }
            *(long **)(lVar13 + (long)plVar21 * 8) = plVar25;
          }
        }
      }
LAB_0d01518e:
      _DAT_0f71c630 = _DAT_0f71c630 + 1;
LAB_0d015195:
      plVar12 = plStack_160;
      plVar21 = _DAT_0f71c648;
      if (_DAT_0f71c648 != (long *)0x0) {
        uVar16 = (long)_DAT_0f71c648 - ((ulong)_DAT_0f71c648 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
        uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar16 >> 0x38 < 2) {
          plVar25 = (long *)(ulong)((uint)plStack_160 & (int)_DAT_0f71c648 - 1U);
        }
        else {
          plVar25 = plStack_160;
          if (_DAT_0f71c648 <= plStack_160) {
            plVar25 = (long *)(ulong)(byte)(bVar1 % (byte)_DAT_0f71c648);
          }
        }
        plVar22 = *(long **)(_DAT_0f71c640 + (long)plVar25 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if ((byte)(uVar16 >> 0x38) < 2) {
            do {
              if ((long *)plVar22[1] == plStack_160) {
                if (*(byte *)(plVar22 + 2) == bVar1) goto LAB_0d015761;
              }
              else if ((long *)((ulong)plVar22[1] & (long)_DAT_0f71c648 - 1U) != plVar25) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              plVar18 = (long *)plVar22[1];
              if (plVar18 == plStack_160) {
                if (*(byte *)(plVar22 + 2) == bVar1) goto LAB_0d015761;
              }
              else {
                if (_DAT_0f71c648 <= plVar18) {
                  if (((ulong)plVar18 | (ulong)_DAT_0f71c648) >> 0x20 == 0) {
                    if ((long *)(((ulong)plVar18 & 0xffffffff) % ((ulong)_DAT_0f71c648 & 0xffffffff)
                                ) == plVar25) goto LAB_0d01526e;
                    break;
                  }
                  plVar18 = (long *)((ulong)plVar18 % (ulong)_DAT_0f71c648);
                }
                if (plVar18 != plVar25) break;
              }
LAB_0d01526e:
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
        }
      }
      plVar22 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
      if (plVar22 == (long *)0x0) {
        func_0x0eec74c0(0x30,0);
      }
      puStack_178 = &DAT_0f71c640;
      uStack_170 = 0;
      *plVar22 = 0;
      plVar22[1] = (long)plVar12;
      *(byte *)(plVar22 + 2) = bVar1;
      plStack_180 = plVar22;
      if (((ulong)uStack_198 & 1) == 0) {
        plVar22[5] = lStack_188;
        plVar22[3] = (long)uStack_198;
        plVar22[4] = (long)plStack_190;
      }
      else {
        func_0x0412e5e0(plVar22 + 3,lStack_188,plStack_190);
      }
      uStack_170 = CONCAT71(uStack_170._1_7_,1);
      if ((long)plVar21 < 0) {
        fVar27 = (float)plVar21;
        if (plVar21 != (long *)0x0) goto LAB_0d0153f6;
LAB_0d015410:
        uVar16 = 1;
        if ((long *)0x2 < plVar21) {
          uVar16 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
        }
        plVar21 = (long *)((long)plVar21 * 2 | uVar16);
        fVar27 = (float)func_0x0eee3ab0((float)(_DAT_0f71c658 + 1) / _DAT_0f71c660);
        plVar12 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f | (long)fVar27);
        if (plVar12 < plVar21) {
          plVar12 = plVar21;
        }
        plVar21 = (long *)0x2;
        if ((plVar12 == (long *)0x1) ||
           (plVar21 = plVar12, ((ulong)plVar12 & (long)plVar12 - 1U) == 0)) {
          bVar26 = plVar21 < _DAT_0f71c648;
          plVar12 = plVar21;
          if (plVar21 <= _DAT_0f71c648) goto LAB_0d01559f;
LAB_0d01548b:
          unaff_R12 = plVar12;
          if ((long *)0x1fffffffffffffff < unaff_R12) goto LAB_0d015b0c;
          lVar13 = (long)unaff_R12 * 8;
          lVar24 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
          if (lVar24 == 0) {
            func_0x0eec74c0(lVar13,0);
          }
          lVar6 = _DAT_0f71c640;
          bVar26 = _DAT_0f71c640 != 0;
          _DAT_0f71c640 = lVar24;
          if (bVar26) {
            func_0x0412a280(lVar6,(long)_DAT_0f71c648 << 3);
          }
          lVar24 = _DAT_0f71c640;
          _DAT_0f71c648 = unaff_R12;
          func_0x0eee2dd0(_DAT_0f71c640,0,lVar13);
          plVar21 = _DAT_0f71c650;
          if (_DAT_0f71c650 != (long *)0x0) {
            plVar12 = (long *)_DAT_0f71c650[1];
            uVar16 = (long)unaff_R12 - 1;
            if (((ulong)unaff_R12 & uVar16) == 0) {
              *(undefined **)(lVar24 + ((ulong)plVar12 & uVar16) * 8) = &DAT_0f71c650;
              uVar15 = (ulong)plVar12 & uVar16;
              while (plVar12 = plVar21, plVar21 = (long *)*plVar12, plVar21 != (long *)0x0) {
                uVar23 = plVar21[1] & uVar16;
                if (uVar23 != uVar15) {
                  if (*(long *)(lVar24 + uVar23 * 8) == 0) {
                    *(long **)(lVar24 + uVar23 * 8) = plVar12;
                    uVar15 = uVar23;
                  }
                  else {
                    *plVar12 = *plVar21;
                    *plVar21 = **(long **)(lVar24 + uVar23 * 8);
                    **(undefined8 **)(lVar24 + uVar23 * 8) = plVar21;
                    plVar21 = plVar12;
                  }
                }
              }
            }
            else {
              if (unaff_R12 <= plVar12) {
                if (((ulong)plVar12 | (ulong)unaff_R12) >> 0x20 == 0) {
                  plVar12 = (long *)(((ulong)plVar12 & 0xffffffff) % ((ulong)unaff_R12 & 0xffffffff)
                                    );
                }
                else {
                  plVar12 = (long *)((ulong)plVar12 % (ulong)unaff_R12);
                }
              }
              *(undefined **)(lVar24 + (long)plVar12 * 8) = &DAT_0f71c650;
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
                if (plVar18 != plVar12) {
                  if (*(long *)(lVar24 + (long)plVar18 * 8) == 0) {
                    *(long **)(lVar24 + (long)plVar18 * 8) = plVar21;
                    plVar12 = plVar18;
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
          plVar21 = (long *)func_0x0412c3f0();
          bVar26 = plVar21 < _DAT_0f71c648;
          plVar12 = plVar21;
          if (_DAT_0f71c648 < plVar21) goto LAB_0d01548b;
LAB_0d01559f:
          plVar12 = _DAT_0f71c648;
          if (bVar26) {
            fVar27 = (float)func_0x0eee3ab0((float)_DAT_0f71c658 / _DAT_0f71c660);
            unaff_R12 = (long *)((long)(fVar27 - _DAT_01198778) & (long)fVar27 >> 0x3f |
                                (long)fVar27);
            if ((plVar12 < (long *)0x3) ||
               (uVar16 = (long)plVar12 - ((ulong)plVar12 >> 1 & 0x5555555555555555),
               uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333),
               1 < (byte)(((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              unaff_R12 = (long *)func_0x0412c3f0(unaff_R12);
              lVar13 = _DAT_0f71c640;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            else {
              if ((long *)0x1 < unaff_R12) {
                lVar13 = 0x3f;
                if ((long)unaff_R12 - 1U != 0) {
                  for (; (long)unaff_R12 - 1U >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                unaff_R12 = (long *)(1L << (-((byte)lVar13 ^ 0x3f) & 0x3f));
              }
              lVar13 = _DAT_0f71c640;
              if (unaff_R12 < plVar21) {
                unaff_R12 = plVar21;
              }
            }
            _DAT_0f71c640 = lVar13;
            if (unaff_R12 < plVar12) {
              plVar12 = unaff_R12;
              if (unaff_R12 != (long *)0x0) goto LAB_0d01548b;
              _DAT_0f71c640 = 0;
              if (lVar13 != 0) {
                func_0x0412a280(lVar13,(long)_DAT_0f71c648 << 3);
              }
              _DAT_0f71c648 = (long *)0x0;
            }
          }
        }
        plVar21 = _DAT_0f71c648;
        if (((ulong)_DAT_0f71c648 & (long)_DAT_0f71c648 - 1U) == 0) {
          plVar25 = (long *)(ulong)((uint)plStack_160 & (int)_DAT_0f71c648 - 1U);
        }
        else {
          plVar25 = plStack_160;
          if ((_DAT_0f71c648 <= plStack_160) && (_DAT_0f71c648 <= plStack_160)) {
            plVar25 = (long *)(((ulong)plStack_160 & 0xffffffff) %
                              ((ulong)_DAT_0f71c648 & 0xffffffff));
          }
        }
      }
      else {
        fVar27 = (float)(long)plVar21;
        if (plVar21 == (long *)0x0) goto LAB_0d015410;
LAB_0d0153f6:
        if (fVar27 * _DAT_0f71c660 < (float)(_DAT_0f71c658 + 1)) goto LAB_0d015410;
      }
      lVar13 = _DAT_0f71c640;
      plVar12 = *(long **)(_DAT_0f71c640 + (long)plVar25 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar22 = (long)_DAT_0f71c650;
        _DAT_0f71c650 = plVar22;
        *(undefined **)(lVar13 + (long)plVar25 * 8) = &DAT_0f71c650;
        if (*plVar22 != 0) {
          plVar12 = *(long **)(*plVar22 + 8);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            *(long **)(lVar13 + ((ulong)plVar12 & (long)plVar21 - 1U) * 8) = plVar22;
          }
          else {
            if (plVar21 <= plVar12) {
              if (((ulong)plVar12 | (ulong)plVar21) >> 0x20 == 0) {
                *(long **)(lVar13 + (((ulong)plVar12 & 0xffffffff) % ((ulong)plVar21 & 0xffffffff))
                                    * 8) = plVar22;
                goto LAB_0d01575a;
              }
              plVar12 = (long *)((ulong)plVar12 % (ulong)plVar21);
            }
            *(long **)(lVar13 + (long)plVar12 * 8) = plVar22;
          }
        }
      }
      else {
        *plVar22 = *plVar12;
        *plVar12 = (long)plVar22;
      }
LAB_0d01575a:
      _DAT_0f71c658 = _DAT_0f71c658 + 1;
LAB_0d015761:
      if (pcStack_140 != (code *)0x0) {
        (*pcStack_140)(&pppppppbStack_158);
      }
      pppppbVar19 = pppppbStack_90;
      plVar21 = plStack_98;
      pppppppbVar14 = pppppppbStack_a0;
      pppppbVar20 = pppppbStack_a8;
      if (pcStack_70 != (code *)0x0) {
        (*pcStack_70)(&pppppppbStack_88);
      }
      if (((ulong)uStack_198 & 1) != 0) {
        func_0x0412a280(lStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
      }
      goto LAB_0d014420;
    }
LAB_0d0144c6:
    plStack_80 = plVar12;
    pppppppbStack_88 = pppppppbVar14;
    auVar28 = func_0x0ed6ae90(&pppppppbStack_88);
    plVar12 = auVar28._8_8_;
    if (plVar12 < (long *)0xfffffffffffffff8) {
      if (plVar12 < (long *)0x17) {
        uStack_198 = (long *)CONCAT71(uStack_198._1_7_,auVar28[8] * '\x02');
        lVar13 = (long)&uStack_198 + 1;
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0x0;
          goto LAB_0d014559;
        }
      }
      else {
        uVar16 = ((ulong)plVar12 | 7) + 1;
        if (((ulong)plVar12 | 7) == 0x17) {
          uVar16 = 0x1a;
        }
        lVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar16);
        if (lVar13 == 0) {
          func_0x0eec74c0(uVar16,0);
        }
        unaff_R12 = (long *)(uVar16 | 1);
        uStack_198 = unaff_R12;
        plStack_190 = plVar12;
        lStack_188 = lVar13;
      }
      func_0x0eee2ee0(lVar13,auVar28._0_8_,plVar12);
      goto LAB_0d014559;
    }
    FUN_04882e30();
LAB_0d015b07:
    func_0x04882eb0();
LAB_0d015b0c:
    func_0x04882eb0();
LAB_0d015b11:
    iVar11 = func_0x04108328(&DAT_0f706878);
    if (iVar11 != 0) {
      func_0x0cdda820(0xf706860);
      func_0x0410844d(&DAT_0f706878);
    }
  } while( true );
}


