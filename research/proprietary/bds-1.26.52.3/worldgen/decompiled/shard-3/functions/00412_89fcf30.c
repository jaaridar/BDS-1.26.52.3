/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8afcf30 (ELF vaddr 0x89fcf30)
 * Label: caller-of-callee
 * Body:  [[08afcf30, 08afcf8b] [08afcf90, 08afcfd4] [08afcfe0, 08afd4f9] [08afd500, 08afd76e] [08afd770, 08afdd67] [08afddea, 08afde19]]
 * Ghidra: FUN_08afcf30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_08afcf30(ulong *param_1,ulong param_2)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  char cVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  ulong *puVar15;
  byte bVar16;
  int *piVar17;
  uint *puVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  bool bVar27;
  uint *puStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  byte *pbStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  int iStack_18c;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong *puStack_170;
  uint *puStack_168;
  ulong uStack_160;
  long lStack_158;
  long *plStack_150;
  long alStack_148 [3];
  undefined *puStack_130;
  long *aplStack_128 [3];
  long lStack_110;
  long *plStack_108;
  ulong uStack_100;
  byte bStack_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  undefined1 auStack_c8 [152];
  
  plVar20 = *(long **)(param_2 + 0x88);
  uStack_180 = param_2;
  puStack_170 = param_1;
  if (plVar20 == (long *)0x0) {
    puVar18 = (uint *)0x0;
    puVar24 = (uint *)0x0;
    puVar25 = (uint *)0x0;
    uVar23 = 0;
    uVar11 = 0;
    iVar21 = 0;
  }
  else {
    lVar9 = param_2 + 0x158;
    uVar11 = 0;
    uVar23 = 0;
    iVar21 = 0;
    puVar24 = (uint *)0x0;
    puVar18 = (uint *)0x0;
    puVar26 = (uint *)0x0;
    lStack_158 = lVar9;
    do {
      uVar22 = (int)uVar23 + (int)plVar20[3];
      uVar23 = (ulong)uVar22;
      iVar21 = iVar21 + (int)plVar20[4];
      if (puVar24 < puVar18) {
        *(undefined8 *)(puVar24 + 4) = *(undefined8 *)((long)plVar20 + 0x24);
        uVar22 = *(uint *)(plVar20 + 3);
        uVar5 = *(uint *)((long)plVar20 + 0x1c);
        uVar6 = *(uint *)(plVar20 + 4);
        *puVar24 = *(uint *)((long)plVar20 + 0x14);
        puVar24[1] = uVar22;
        puVar24[2] = uVar5;
        puVar24[3] = uVar6;
        puVar25 = puVar26;
        puVar1 = puVar24;
      }
      else {
        uStack_160 = (long)puVar24 - (long)puVar26;
        puVar24 = (uint *)(((long)uStack_160 >> 3) * -0x5555555555555555 + 1);
        puStack_168 = puVar18;
        if ((uint *)0xaaaaaaaaaaaaaaa < puVar24) {
          func_0x08b2a7a0();
LAB_08afdcf5:
          func_0x04882eb0();
          goto LAB_08afdcfa;
        }
        uStack_188 = CONCAT44(uStack_188._4_4_,uVar22);
        lVar19 = (long)puVar18 - (long)puVar26;
        lVar9 = lVar19 >> 3;
        puVar18 = (uint *)(lVar9 * 0x5555555555555556);
        if (puVar24 < puVar18) {
          puVar24 = puVar18;
        }
        if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
          puVar24 = (uint *)0xaaaaaaaaaaaaaaa;
        }
        iStack_18c = iVar21;
        uStack_178 = uVar11;
        if ((uint *)0xaaaaaaaaaaaaaaa < puVar24) goto LAB_08afdcf5;
        lVar9 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)puVar24 * 0x18);
        if (lVar9 == 0) {
          FUN_0eec74c0((long)puVar24 * 0x18,0);
        }
        puVar18 = (uint *)(lVar9 + (long)puVar24 * 0x18);
        *(undefined8 *)(lVar9 + 0x10 + uStack_160) = *(undefined8 *)((long)plVar20 + 0x24);
        uVar22 = *(uint *)(plVar20 + 3);
        uVar5 = *(uint *)((long)plVar20 + 0x1c);
        uVar6 = *(uint *)(plVar20 + 4);
        puVar25 = (uint *)(lVar9 + uStack_160);
        *puVar25 = *(uint *)((long)plVar20 + 0x14);
        puVar25[1] = uVar22;
        puVar25[2] = uVar5;
        puVar25[3] = uVar6;
        uVar23 = SUB168(SEXT816((long)uStack_160) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        puVar1 = (uint *)(lVar9 + uStack_160);
        puVar25 = (uint *)(lVar9 + uStack_160 + ((uVar23 >> 2) - ((long)uVar23 >> 0x3f)) * 0x18);
        func_0x0eee2f00(puVar25,puVar26,uStack_160);
        if (puVar26 != (uint *)0x0) {
          func_0x0412a280(puVar26,lVar19);
        }
        uVar23 = uStack_188 & 0xffffffff;
        uVar11 = uStack_178;
        lVar9 = lStack_158;
        iVar21 = iStack_18c;
      }
      puVar24 = puVar1 + 6;
      bVar16 = *(byte *)(lVar9 + (ulong)*puVar1 * 0x18);
      if ((bVar16 & 1) == 0) {
        uVar12 = (ulong)(bVar16 >> 1);
      }
      else {
        uVar12 = *(ulong *)(lVar9 + 8 + (ulong)*puVar1 * 0x18);
      }
      if (uVar11 < uVar12) {
        uVar11 = uVar12;
      }
      plVar20 = (long *)*plVar20;
      puVar26 = puVar25;
    } while (plVar20 != (long *)0x0);
  }
  iStack_18c = iVar21;
  uStack_178 = uVar11;
  puStack_168 = puVar18;
  lVar9 = func_0x0417cc60();
  if (DAT_0f778830 == '\0') goto LAB_08afdd09;
LAB_08afd179:
  uVar11 = uStack_180;
  uStack_188 = CONCAT44(uStack_188._4_4_,(int)uVar23);
  puStack_1c0 = (uint *)((double)(lVar9 - _DAT_0f778828) / _DAT_014f0138 -
                        *(double *)(uStack_180 + 0x2298));
  func_0x04886140(alStack_148);
  *(uint *)((long)aplStack_128 + *(long *)(alStack_148[2] + -0x18) + -8) =
       *(uint *)((long)aplStack_128 + *(long *)(alStack_148[2] + -0x18) + -8) & 0xfffffefb | 4;
  *(undefined8 *)((long)aplStack_128 + *(long *)(alStack_148[2] + -0x18)) = 2;
  uVar10 = func_0x04885260(alStack_148 + 2,&UNK_014b52f8,0x1c);
  uVar10 = func_0x0413b720(uVar10,(long)(double)puStack_1c0);
  func_0x04885260(uVar10,&UNK_01435107,10);
  func_0x0412d550(0xf5a3810);
  LOCK();
  _DAT_0f5a38e0 = _DAT_0f5a38e0 + 1;
  UNLOCK();
  FUN_0412d610(0xf5a3810);
  plVar20 = _DAT_0f5a38f8;
  pbVar7 = _DAT_0f5a38f0;
  if ((_DAT_0f5a38f0 != (byte *)0x0) && (*_DAT_0f5a38f0 == 1)) {
    bVar16 = 1;
    if (_DAT_0f5a38f8 != (long *)0x0) {
      LOCK();
      _DAT_0f5a38f8[1] = _DAT_0f5a38f8[1] + 1;
      UNLOCK();
      bVar16 = *pbVar7;
    }
    lVar9 = _DAT_0f5a3900;
    uStack_1b8 = (long **)0xf5a3810;
    uStack_1b0 = CONCAT71(uStack_1b0._1_7_,1);
    pbStack_1a8 = pbVar7;
    plStack_1a0 = plVar20;
    lStack_198 = _DAT_0f5a3900;
    if (((bVar16 & 1) == 0) &&
       (cVar8 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_0120b832),
       cVar8 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    piVar3 = *(int **)(lVar9 + 0x20);
    for (piVar17 = *(int **)(lVar9 + 0x18); (piVar17 != piVar3 && (*piVar17 != 0x27));
        piVar17 = piVar17 + 0x20) {
    }
    if ((piVar17 == piVar3) || (lVar9 = *(long *)(piVar17 + 2), *(long *)(piVar17 + 2) == 0)) {
      uVar12 = 0;
    }
    else {
      do {
        lVar19 = lVar9;
        lVar9 = *(long *)(*(long *)(lVar19 + 8) + 0x1a0);
      } while (lVar9 != 0);
      uVar12 = (ulong)*(byte *)(lVar19 + 0x10);
    }
    plStack_1a0 = (long *)0x0;
    pbStack_1a8 = (byte *)0x0;
    if (plVar20 != (long *)0x0) {
      plStack_1a0 = (long *)0x0;
      pbStack_1a8 = (byte *)0x0;
      LOCK();
      plVar2 = plVar20 + 1;
      lVar9 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar9 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        func_0x0412c2d0(plVar20);
        lStack_198 = 0;
        if (plStack_1a0 != (long *)0x0) {
          lStack_198 = 0;
          LOCK();
          plVar20 = plStack_1a0 + 1;
          lVar9 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          plVar20 = plStack_1a0;
          if (lVar9 == 0) goto LAB_08afdcc0;
        }
      }
      else {
        lStack_198 = 0;
      }
    }
    do {
      if ((char)uStack_1b0 == '\x01') {
        func_0x0eee02f0(uStack_1b8);
      }
      uVar23 = 0xaaaaaaaaaaaaaaab;
      if ((char)uVar12 != '\0') {
        plStack_150 = alStack_148;
        if ((ulong)*(uint *)(uVar11 + 0x40) == 0xffffffff) {
          func_0x04931450();
          puStack_1c0 = puVar25;
          break;
        }
        uStack_1b8 = &plStack_150;
        (**(code **)(&UNK_0f13e3d8 + (ulong)*(uint *)(uVar11 + 0x40) * 8))
                  (&uStack_1b8,uVar11 + 0x38);
      }
      uVar10 = func_0x04885260(alStack_148 + 2,&UNK_01347b9c,0xd);
      uVar10 = func_0x0413b720(uVar10,uStack_188 & 0xffffffff);
      uVar10 = func_0x04885260(uVar10,&UNK_0121f022,2);
      func_0x08afce80(uVar10,*(undefined4 *)(uVar11 + 0x68));
      uVar10 = func_0x04885260(uVar10,&UNK_012ee262,2);
      func_0x08afce80(uVar10,*(undefined4 *)(uVar11 + 100));
      func_0x04885260(uVar10,&UNK_0120f08f,2);
      uVar11 = ((long)puVar24 - (long)puVar25 >> 3) * -0x5555555555555555;
      lVar9 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uStack_160 = 0;
      if (puVar24 != puVar25) {
        uStack_160 = (ulong)(((uint)lVar9 ^ 0x3f) * 2) ^ 0x7e;
      }
      func_0x08b2dcf0(puVar25,puVar24,uStack_160,1);
      if (puVar24 != puVar25) {
        uStack_188 = uStack_180 + 0x158;
        puVar18 = puVar25;
        do {
          if ((puVar18[2] != 0) && (puVar18[1] != 0)) {
            uVar11 = (ulong)*puVar18;
            bVar16 = *(byte *)(uStack_188 + uVar11 * 0x18);
            bVar27 = (bVar16 & 1) != 0;
            puVar26 = (uint *)(ulong)(bVar16 >> 1);
            if (bVar27) {
              puVar26 = *(uint **)(uStack_188 + 8 + uVar11 * 0x18);
            }
            lVar9 = uStack_188 + 1 + uVar11 * 0x18;
            if (bVar27) {
              lVar9 = *(long *)(uStack_188 + 0x10 + uVar11 * 0x18);
            }
            uVar12 = func_0x04885260(alStack_148 + 2,lVar9,puVar26);
            uVar11 = (uStack_178 - (long)puVar26) + 1;
            if (0xfffffffffffffff7 < uVar11) goto LAB_08afdcfa;
            if (uVar11 < 0x17) {
              uStack_1b8 = (long **)CONCAT71(uStack_1b8._1_7_,(char)uVar11 * '\x02');
              uVar23 = (long)&uStack_1b8 + 1;
              if (uVar11 != 0) goto LAB_08afd5db;
            }
            else {
              uVar13 = (uVar11 | 7) + 1;
              if ((uVar11 | 7) == 0x17) {
                uVar13 = 0x1a;
              }
              uVar23 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar13);
              if (uVar23 == 0) {
                FUN_0eec74c0(uVar13,0);
              }
              uStack_1b8 = (long **)(uVar13 | 1);
              uStack_1b0 = uVar11;
              pbStack_1a8 = (byte *)uVar23;
LAB_08afd5db:
              func_0x0eee2dd0(uVar23,0x20,uVar11);
            }
            *(undefined1 *)(uVar23 + uVar11) = 0;
            uVar11 = (ulong)uStack_1b8 >> 1 & 0x7f;
            pbVar7 = (byte *)((long)&uStack_1b8 + 1);
            if (((ulong)uStack_1b8 & 1) != 0) {
              uVar11 = uStack_1b0;
              pbVar7 = pbStack_1a8;
            }
            uVar10 = func_0x04885260(uVar12,pbVar7,uVar11);
            func_0x08afce80(uVar10,puVar18[2]);
            uVar10 = func_0x04885260(uVar10,&UNK_01364719,6);
            uVar10 = func_0x0413b720(uVar10,puVar18[1]);
            uVar10 = func_0x04885260(uVar10,&UNK_012deb17,6);
            func_0x08afce80(uVar10,(ulong)puVar18[2] / (ulong)puVar18[1],
                            (ulong)puVar18[2] % (ulong)puVar18[1]);
            func_0x04885260(uVar10,&UNK_013a8ff4,1);
            if (((ulong)uStack_1b8 & 1) != 0) {
              func_0x0412a280(pbStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
            }
          }
          puVar18 = puVar18 + 6;
        } while (puVar18 != puVar24);
      }
      uVar10 = func_0x04885260(alStack_148 + 2,&UNK_014001db,0x11);
      uVar23 = uStack_180;
      uVar10 = func_0x0413b720(uVar10,iStack_18c);
      uVar10 = func_0x04885260(uVar10,&UNK_0121f022,2);
      func_0x08afce80(uVar10,*(undefined4 *)(uVar23 + 0x70));
      uVar10 = func_0x04885260(uVar10,&UNK_012ee262,2);
      func_0x08afce80(uVar10,*(undefined4 *)(uVar23 + 0x6c));
      func_0x04885260(uVar10,&UNK_0120f08f,2);
      func_0x08b2f580(puVar25,puVar24,uStack_160,1);
      if (puVar24 != puVar25) {
        uStack_188 = uStack_180 + 0x158;
        puVar18 = puVar25;
        do {
          if ((puVar18[4] != 0) && (puVar18[3] != 0)) {
            uVar11 = (ulong)*puVar18;
            bVar16 = *(byte *)(uStack_188 + uVar11 * 0x18);
            bVar27 = (bVar16 & 1) != 0;
            uVar23 = (ulong)(bVar16 >> 1);
            if (bVar27) {
              uVar23 = *(ulong *)(uStack_188 + 8 + uVar11 * 0x18);
            }
            lVar9 = uStack_188 + 1 + uVar11 * 0x18;
            if (bVar27) {
              lVar9 = *(long *)(uStack_188 + 0x10 + uVar11 * 0x18);
            }
            uVar23 = (uStack_178 - uVar23) + 1;
            if (*(int *)(uStack_180 + 0x30) == 0) {
              uVar12 = func_0x04885260(alStack_148 + 2,lVar9);
              if (0xfffffffffffffff7 < uVar23) goto LAB_08afdd04;
              if (uVar23 < 0x17) {
                uStack_1b8 = (long **)CONCAT71(uStack_1b8._1_7_,(char)uVar23 * '\x02');
                uVar13 = (long)&uStack_1b8 + 1;
                if (uVar23 != 0) goto LAB_08afd993;
              }
              else {
                uVar11 = (uVar23 | 7) + 1;
                if ((uVar23 | 7) == 0x17) {
                  uVar11 = 0x1a;
                }
                uVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
                if (uVar13 == 0) {
                  FUN_0eec74c0(uVar11,0);
                }
                uStack_1b8 = (long **)(uVar11 | 1);
                uStack_1b0 = uVar23;
                pbStack_1a8 = (byte *)uVar13;
LAB_08afd993:
                func_0x0eee2dd0(uVar13,0x20,uVar23);
              }
              *(undefined1 *)(uVar13 + uVar23) = 0;
              uVar23 = (ulong)uStack_1b8 >> 1 & 0x7f;
              pbVar7 = (byte *)((long)&uStack_1b8 + 1);
              if (((ulong)uStack_1b8 & 1) != 0) {
                uVar23 = uStack_1b0;
                pbVar7 = pbStack_1a8;
              }
              uVar10 = func_0x04885260(uVar12,pbVar7,uVar23);
              func_0x08afce80(uVar10,puVar18[4]);
              uVar10 = func_0x04885260(uVar10,&UNK_0120f092,10);
              uVar10 = func_0x0413b720(uVar10,puVar18[5]);
              uVar10 = func_0x04885260(uVar10,&UNK_01239613,1);
              uVar10 = func_0x0413b720(uVar10,puVar18[3]);
              uVar10 = func_0x04885260(uVar10,&UNK_012ee262,2);
              uVar10 = func_0x0413be50(((float)puVar18[5] * _DAT_01198c58) / (float)puVar18[3],
                                       uVar10);
              uVar10 = func_0x04885260(uVar10,&UNK_01311cc8,8);
              func_0x08afce80(uVar10,(ulong)puVar18[4] / (ulong)puVar18[3],
                              (ulong)puVar18[4] % (ulong)puVar18[3]);
              func_0x04885260(uVar10,&UNK_013a8ff4,1);
            }
            else {
              uVar12 = func_0x04885260(alStack_148 + 2,lVar9);
              puVar26 = puVar25;
              if (0xfffffffffffffff7 < uVar23) goto LAB_08afdcff;
              if (uVar23 < 0x17) {
                uStack_1b8 = (long **)CONCAT71(uStack_1b8._1_7_,(char)uVar23 * '\x02');
                uVar13 = (long)&uStack_1b8 + 1;
                if (uVar23 != 0) goto LAB_08afd893;
              }
              else {
                uVar11 = (uVar23 | 7) + 1;
                if ((uVar23 | 7) == 0x17) {
                  uVar11 = 0x1a;
                }
                uVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar11);
                if (uVar13 == 0) {
                  FUN_0eec74c0(uVar11,0);
                }
                uStack_1b8 = (long **)(uVar11 | 1);
                uStack_1b0 = uVar23;
                pbStack_1a8 = (byte *)uVar13;
LAB_08afd893:
                func_0x0eee2dd0(uVar13,0x20,uVar23);
              }
              *(undefined1 *)(uVar13 + uVar23) = 0;
              uVar23 = (ulong)uStack_1b8 >> 1 & 0x7f;
              pbVar7 = (byte *)((long)&uStack_1b8 + 1);
              if (((ulong)uStack_1b8 & 1) != 0) {
                uVar23 = uStack_1b0;
                pbVar7 = pbStack_1a8;
              }
              uVar10 = func_0x04885260(uVar12,pbVar7,uVar23);
              func_0x08afce80(uVar10,puVar18[4]);
              uVar10 = func_0x04885260(uVar10,&UNK_01364719,6);
              uVar10 = func_0x0413b720(uVar10,puVar18[3]);
              uVar10 = func_0x04885260(uVar10,&UNK_012deb17,6);
              func_0x08afce80(uVar10,(ulong)puVar18[4] / (ulong)puVar18[3],
                              (ulong)puVar18[4] % (ulong)puVar18[3]);
              func_0x04885260(uVar10,&UNK_013a8ff4,1);
            }
            if (((ulong)uStack_1b8 & 1) != 0) {
              func_0x0412a280(pbStack_1a8,(ulong)uStack_1b8 & 0xfffffffffffffffe);
            }
          }
          puVar18 = puVar18 + 6;
        } while (puVar18 != puVar24);
      }
      func_0x04885260(alStack_148 + 2,&UNK_013a8ff4,1);
      if ((uStack_d0 & 0x10) == 0) {
        if ((uStack_d0 & 8) != 0) {
          uVar11 = lStack_110 - (long)aplStack_128[1];
          plVar20 = aplStack_128[1];
          goto joined_r0x08afdb45;
        }
        *(char *)puStack_170 = '\0';
LAB_08afdb65:
        pcVar14 = (char *)((long)puStack_170 + 1);
        uVar11 = 0;
LAB_08afdbc5:
        pcVar14[uVar11] = '\0';
        alStack_148[0] = _UNK_0eeed4d8;
        *(undefined8 *)((long)alStack_148 + *(long *)(_UNK_0eeed4d8 + -0x18)) = _UNK_0eeed518;
        alStack_148[2] = _UNK_0eeed520;
        puStack_130 = &UNK_0eeed150;
        if ((bStack_f0 & 1) != 0) {
          func_0x0412a280(uStack_e0,CONCAT71(uStack_ef,bStack_f0) & 0xfffffffffffffffe);
        }
        puStack_130 = &UNK_0eeece20;
        func_0x04167a40(aplStack_128);
        func_0x0413c8a0(alStack_148,&UNK_0eeed4e0);
        func_0x04138180(auStack_c8);
        if (puVar25 != (uint *)0x0) {
          func_0x0412a280(puVar25,(long)puStack_168 - (long)puVar25);
        }
        return puStack_170;
      }
      if (uStack_d8 < uStack_100) {
        uStack_d8 = uStack_100;
      }
      uVar11 = uStack_d8 - (long)plStack_108;
      plVar20 = plStack_108;
joined_r0x08afdb45:
      if (uVar11 < 0xfffffffffffffff8) {
        if (uVar11 < 0x17) {
          *(char *)puStack_170 = (char)uVar11 * '\x02';
          pcVar14 = (char *)((long)puStack_170 + 1);
          if (uVar11 == 0) goto LAB_08afdb65;
        }
        else {
          uVar23 = 0x1a;
          if ((uVar11 | 7) != 0x17) {
            uVar23 = (uVar11 | 7) + 1;
          }
          pcVar14 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
          if (pcVar14 == (char *)0x0) {
            FUN_0eec74c0(uVar23,0);
          }
          puStack_170[2] = (ulong)pcVar14;
          *puStack_170 = uVar23 | 1;
          puStack_170[1] = uVar11;
        }
        func_0x0eee2ee0(pcVar14,plVar20,uVar11);
        goto LAB_08afdbc5;
      }
      func_0x04882e30();
LAB_08afdcc0:
      (**(code **)(*plVar20 + 0x10))(plVar20);
      func_0x0412c2d0(plVar20);
    } while( true );
  }
  uVar10 = func_0x0eee02f0(0xf5a3810);
  func_0x06d03310(&uStack_1b8);
  func_0x04143680(alStack_148);
  if (puStack_1c0 != (uint *)0x0) {
    func_0x0412a280(puStack_1c0,(long)puStack_168 - (long)puStack_1c0);
  }
  func_0x0eee2d70(uVar10);
  pcVar4 = (code *)swi(3);
  puVar15 = (ulong *)(*pcVar4)();
  return puVar15;
LAB_08afdcfa:
  func_0x04882e30();
LAB_08afdcff:
  func_0x04882e30();
  puVar25 = puVar26;
LAB_08afdd04:
  lVar9 = func_0x04882e30();
LAB_08afdd09:
  iVar21 = func_0x04108328(&DAT_0f778830);
  if (iVar21 != 0) {
    _DAT_0f778828 = func_0x0417cc60();
    func_0x0410844d(&DAT_0f778830);
  }
  goto LAB_08afd179;
}


