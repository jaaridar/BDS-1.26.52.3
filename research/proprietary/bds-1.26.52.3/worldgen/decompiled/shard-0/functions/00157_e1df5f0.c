/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe2df5f0 (ELF vaddr 0xe1df5f0)
 * Label: SharedTypes::v1_21_80::BiomeReplacementConstraint::vslot0
 * Body:  [[0e2df5f0, 0e2df789] [0e2df790, 0e2df7ed] [0e2df7f0, 0e2df8dd] [0e2df8e0, 0e2df917] [0e2df920, 0e2df9b4] [0e2df9c0, 0e2dfa30] [0e2dfa40, 0e2dfaab] [0e2dfab0, 0e2dfc40] [0e2dfc50, 0e2dfc7a] [0e2dfc80, 0e2dfe0c] [0e2dfe10, 0e2dfe30] [0e2dfe40, 0e2dfe61] [0e2dfe70, 0e2e0099] [0e2e00a0, 0e2e0219] [0e2e0220, 0e2e02ff]]
 * Ghidra: wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SharedTypes__v1_21_80__BiomeReplacementConstraint__vslot0
               (long param_1,undefined8 param_2,long param_3)

{
  long ******pppppplVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined7 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  ulong *puVar11;
  byte bVar12;
  long *****ppppplVar13;
  long ******pppppplVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  long lVar19;
  ulong uVar20;
  long *****ppppplVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_158 [8];
  long *****ppppplStack_150;
  long *****ppppplStack_148;
  undefined1 auStack_140 [16];
  undefined1 *puStack_130;
  undefined1 auStack_128 [8];
  long *****ppppplStack_120;
  long *****ppppplStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  long *****ppppplStack_f8;
  uint uStack_ec;
  byte bStack_e8;
  undefined7 uStack_e7;
  ulong uStack_e0;
  undefined7 *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined1 (*pauStack_c0) [16];
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  long *******ppppppplStack_a0;
  long *****ppppplStack_98;
  undefined1 *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 (*pauStack_78) [16];
  long *******appppppplStack_70 [3];
  code *pcStack_58;
  int iStack_50;
  char cStack_4c;
  undefined8 uStack_48;
  long lStack_40;
  code *pcStack_38;
  
  if ((*(byte *)(param_3 + 0x2aa) & *(byte *)(param_1 + 0x18)) != 0) {
    lStack_c8 = param_3;
    func_0x0e370940(appppppplStack_70);
    if (pcStack_38 == (code *)0x0) {
      if ((DAT_0f74e9f0 == '\0') && (iVar8 = func_0x04108328(&DAT_0f74e9f0), iVar8 != 0)) {
        func_0x0e36ede0();
        func_0x0410844d(&DAT_0f74e9f0);
      }
      func_0x0ed5ef10(auStack_128,lStack_c8,&DAT_0f74e9d8,param_2);
      ppppplVar21 = ppppplStack_118;
      if (((ulong)auStack_128 & 1) == 0) {
        ppppplVar21 = (long *****)(auStack_128 + 1);
      }
      cVar7 = func_0x0eeddcf0(ppppplVar21,&UNK_0121f913,0x107,&UNK_0130ea24,&UNK_0145a23e);
      if (((ulong)auStack_128 & 1) != 0) {
        thunk_FUN_0ee326a0(ppppplStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
      }
      if (cVar7 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    ppppppplStack_a0 = appppppplStack_70[0];
    if (cStack_4c == '\x02') {
      ppppppplStack_a0 = (long *******)appppppplStack_70;
    }
    if (ppppppplStack_a0 == (long *******)0x0 || iStack_50 != -0x6e92d98b) {
      if (lStack_40 == 0) {
        (*pcStack_38)(0,appppppplStack_70,0);
      }
      if (cStack_4c == '\x02') {
        appppppplStack_70[0] = (long *******)appppppplStack_70;
      }
      ppppppplStack_a0 =
           (long *******)func_0x0488e200(uStack_48,lStack_40,0x916d2675,appppppplStack_70[0]);
    }
    pppppplVar14 = *ppppppplStack_a0;
    if (pppppplVar14 != ppppppplStack_a0[1]) {
      plStack_b8 = (long *)auStack_b0;
      auStack_b0 = (undefined1  [16])0x0;
      uVar20 = 0;
LAB_0e2df7c3:
      pppppplVar1 = pppppplVar14 + uVar20 * 7;
      uStack_80 = uVar20;
      if (((ulong)pppppplVar14[uVar20 * 7] & 1) == 0) {
        ppppplStack_118 = pppppplVar1[2];
        auStack_128 = (undefined1  [8])*pppppplVar1;
        ppppplStack_120 = pppppplVar1[1];
      }
      else {
        FUN_0412e5e0(auStack_128,pppppplVar1[2],pppppplVar1[1]);
      }
      auStack_110 = (undefined1  [16])0x0;
      lStack_100 = 0;
      func_0x053595a0();
      ppppplStack_f8 = pppppplVar1[6];
      ppppplVar13 = (long *****)((ulong)auStack_128 >> 1 & 0x7f);
      ppppplVar21 = (long *****)(auStack_128 + 1);
      if (((ulong)auStack_128 & 1) != 0) {
        ppppplVar13 = ppppplStack_120;
        ppppplVar21 = ppppplStack_118;
      }
      if ((ppppplVar13 == (long *****)0x13) &&
         (auVar28[0] = -(*(char *)ppppplVar21 == DAT_014e3ca0),
         auVar28[1] = -(*(char *)((long)ppppplVar21 + 1) == UNK_014e3ca1),
         auVar28[2] = -(*(char *)((long)ppppplVar21 + 2) == UNK_014e3ca2),
         auVar28[3] = -(*(char *)((long)ppppplVar21 + 3) == UNK_014e3ca3),
         auVar28[4] = -(*(char *)((long)ppppplVar21 + 4) == UNK_014e3ca4),
         auVar28[5] = -(*(char *)((long)ppppplVar21 + 5) == UNK_014e3ca5),
         auVar28[6] = -(*(char *)((long)ppppplVar21 + 6) == UNK_014e3ca6),
         auVar28[7] = -(*(char *)((long)ppppplVar21 + 7) == UNK_014e3ca7),
         auVar28[8] = -(*(char *)(ppppplVar21 + 1) == UNK_014e3ca8),
         auVar28[9] = -(*(char *)((long)ppppplVar21 + 9) == UNK_014e3ca9),
         auVar28[10] = -(*(char *)((long)ppppplVar21 + 10) == UNK_014e3caa),
         auVar28[0xb] = -(*(char *)((long)ppppplVar21 + 0xb) == UNK_014e3cab),
         auVar28[0xc] = -(*(char *)((long)ppppplVar21 + 0xc) == UNK_014e3cac),
         auVar28[0xd] = -(*(char *)((long)ppppplVar21 + 0xd) == UNK_014e3cad),
         auVar28[0xe] = -(*(char *)((long)ppppplVar21 + 0xe) == UNK_014e3cae),
         auVar28[0xf] = -(*(char *)((long)ppppplVar21 + 0xf) == UNK_014e3caf),
         auVar29[0] = -(*(char *)((long)ppppplVar21 + 3) == DAT_014e91d0),
         auVar29[1] = -(*(char *)((long)ppppplVar21 + 4) == UNK_014e91d1),
         auVar29[2] = -(*(char *)((long)ppppplVar21 + 5) == UNK_014e91d2),
         auVar29[3] = -(*(char *)((long)ppppplVar21 + 6) == UNK_014e91d3),
         auVar29[4] = -(*(char *)((long)ppppplVar21 + 7) == UNK_014e91d4),
         auVar29[5] = -(*(char *)(ppppplVar21 + 1) == UNK_014e91d5),
         auVar29[6] = -(*(char *)((long)ppppplVar21 + 9) == UNK_014e91d6),
         auVar29[7] = -(*(char *)((long)ppppplVar21 + 10) == UNK_014e91d7),
         auVar29[8] = -(*(char *)((long)ppppplVar21 + 0xb) == UNK_014e91d8),
         auVar29[9] = -(*(char *)((long)ppppplVar21 + 0xc) == UNK_014e91d9),
         auVar29[10] = -(*(char *)((long)ppppplVar21 + 0xd) == UNK_014e91da),
         auVar29[0xb] = -(*(char *)((long)ppppplVar21 + 0xe) == UNK_014e91db),
         auVar29[0xc] = -(*(char *)((long)ppppplVar21 + 0xf) == UNK_014e91dc),
         auVar29[0xd] = -(*(char *)(ppppplVar21 + 2) == UNK_014e91dd),
         auVar29[0xe] = -(*(char *)((long)ppppplVar21 + 0x11) == UNK_014e91de),
         auVar29[0xf] = -(*(char *)((long)ppppplVar21 + 0x12) == UNK_014e91df),
         auVar29 = auVar29 & auVar28,
         (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff)) {
        pauStack_78 = (undefined1 (*) [16])auStack_110._8_8_;
        pauVar9 = (undefined1 (*) [16])auStack_110._0_8_;
        if (auStack_110._0_8_ != auStack_110._8_8_) {
LAB_0e2df8c0:
          if (((ulong)auStack_128 & 1) == 0) {
            ppppplStack_148 = ppppplStack_118;
            ppppplStack_150 = ppppplStack_120;
            auStack_158 = auStack_128;
          }
          else {
            FUN_0412e5e0(auStack_158,ppppplStack_118,ppppplStack_120);
          }
          pauStack_c0 = pauVar9;
          if (((*pauVar9)[0] & 1) == 0) {
            puStack_130 = *(undefined1 **)pauVar9[1];
            auStack_140 = *pauVar9;
          }
          else {
            FUN_0412e5e0(auStack_140,*(undefined8 *)pauVar9[1],*(undefined8 *)(*pauVar9 + 8));
          }
          puVar22 = (undefined8 *)auStack_b0;
          puVar24 = puVar22;
          if ((undefined8 *)auStack_b0._0_8_ != (undefined8 *)0x0) {
            bVar27 = (auStack_158[0] & 1) == 0;
            ppppplVar21 = ppppplStack_148;
            if (bVar27) {
              ppppplVar21 = (long *****)(auStack_158 + 1);
            }
            ppppplVar13 = (long *****)(ulong)(auStack_158[0] >> 1);
            if (!bVar27) {
              ppppplVar13 = ppppplStack_150;
            }
            uStack_88 = (ulong)(auStack_140[0] >> 1);
            bVar12 = auStack_140[0] & 1;
            uStack_ec = (uint)bVar12;
            puStack_90 = puStack_130;
            if (bVar12 == 0) {
              puStack_90 = auStack_140 + 1;
            }
            puVar6 = (undefined8 *)auStack_b0._0_8_;
            uStack_d0 = (ulong)ppppplVar13;
            ppppplStack_98 = ppppplVar21;
            if (bVar12 != 0) {
              uStack_88 = auStack_140._8_8_;
            }
            do {
              while( true ) {
                puVar22 = puVar6;
                bVar27 = (*(byte *)(puVar22 + 4) & 1) != 0;
                lVar19 = (long)puVar22 + 0x21;
                if (bVar27) {
                  lVar19 = puVar22[6];
                }
                uVar20 = (ulong)(*(byte *)(puVar22 + 4) >> 1);
                if (bVar27) {
                  uVar20 = puVar22[5];
                }
                uVar23 = (ulong)ppppplVar13;
                if (uVar20 < ppppplVar13) {
                  uVar23 = uVar20;
                }
                iVar8 = func_0x0eee2ff0(ppppplVar21,lVar19,uVar23);
                uVar16 = uStack_88;
                if (iVar8 == 0) break;
                if (-1 < iVar8) goto LAB_0e2dfa0e;
LAB_0e2df9c0:
                puVar6 = (undefined8 *)*puVar22;
                puVar24 = puVar22;
                if ((undefined8 *)*puVar22 == (undefined8 *)0x0) goto LAB_0e2dfb53;
              }
              if (ppppplVar13 != (long *****)uVar20) {
                if (uVar20 <= ppppplVar13) goto LAB_0e2dfa0e;
                goto LAB_0e2df9c0;
              }
              bVar27 = (*(byte *)(puVar22 + 7) & 1) != 0;
              lVar25 = (long)puVar22 + 0x39;
              if (bVar27) {
                lVar25 = puVar22[9];
              }
              uVar26 = (ulong)(*(byte *)(puVar22 + 7) >> 1);
              if (bVar27) {
                uVar26 = puVar22[8];
              }
              uVar15 = uStack_88;
              if (uVar26 < uStack_88) {
                uVar15 = uVar26;
              }
              iVar8 = func_0x0eee2ff0(puStack_90,lVar25,uVar15);
              ppppplVar13 = (long *****)uStack_d0;
              ppppplVar21 = ppppplStack_98;
              if (iVar8 == 0) {
                if (uVar26 <= uVar16) goto LAB_0e2dfa0e;
                goto LAB_0e2df9c0;
              }
              if (iVar8 < 0) goto LAB_0e2df9c0;
LAB_0e2dfa0e:
              iVar8 = func_0x0eee2ff0(lVar19,ppppplVar21,uVar23);
              uVar23 = uStack_88;
              if (iVar8 == 0) {
                bVar27 = uVar20 < ppppplVar13;
                if ((long *****)uVar20 == ppppplVar13) {
                  bVar27 = (*(byte *)(puVar22 + 7) & 1) != 0;
                  lVar19 = (long)puVar22 + 0x39;
                  if (bVar27) {
                    lVar19 = puVar22[9];
                  }
                  uVar20 = (ulong)(*(byte *)(puVar22 + 7) >> 1);
                  if (bVar27) {
                    uVar20 = puVar22[8];
                  }
                  uVar16 = uVar20;
                  if (uStack_88 < uVar20) {
                    uVar16 = uStack_88;
                  }
                  iVar8 = func_0x0eee2ff0(lVar19,puStack_90,uVar16);
                  ppppplVar13 = (long *****)uStack_d0;
                  if (iVar8 != 0) goto joined_r0x0e2dfaff;
                  bVar27 = uVar20 < uVar23;
                }
                ppppplVar13 = (long *****)uStack_d0;
                if (!bVar27) goto LAB_0e2dfc80;
              }
              else {
joined_r0x0e2dfaff:
                if (-1 < iVar8) {
LAB_0e2dfc80:
                  pauVar18 = pauStack_c0;
                  bVar27 = false;
                  if ((char)uStack_ec != '\0') {
                    bVar27 = false;
                    thunk_FUN_0ee326a0(puStack_130,auStack_140._0_8_ & 0xfffffffffffffffe);
                  }
                  goto LAB_0e2dfdc8;
                }
              }
              puVar6 = (undefined8 *)puVar22[1];
            } while ((undefined8 *)puVar22[1] != (undefined8 *)0x0);
            puVar24 = puVar22 + 1;
          }
LAB_0e2dfb53:
          pauVar9 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
          if (pauVar9 == (undefined1 (*) [16])0x0) {
            func_0x0eec74c0(0x50,0);
          }
          *(long ******)pauVar9[3] = ppppplStack_148;
          *(undefined1 (*) [8])pauVar9[2] = auStack_158;
          *(long ******)(pauVar9[2] + 8) = ppppplStack_150;
          _auStack_158 = (undefined1  [16])0x0;
          ppppplStack_148 = (long *****)0x0;
          *(undefined1 **)(pauVar9[4] + 8) = puStack_130;
          *(undefined8 *)(pauVar9[3] + 8) = auStack_140._0_8_;
          *(undefined8 *)pauVar9[4] = auStack_140._8_8_;
          auStack_140 = (undefined1  [16])0x0;
          puStack_130 = (undefined1 *)0x0;
          *pauVar9 = (undefined1  [16])0x0;
          *(undefined8 **)pauVar9[1] = puVar22;
          *puVar24 = pauVar9;
          if ((long *)*plStack_b8 != (long *)0x0) {
            plStack_b8 = (long *)*plStack_b8;
          }
          pauVar9[1][8] = pauVar9 == (undefined1 (*) [16])auStack_b0._0_8_;
          if (pauVar9 != (undefined1 (*) [16])auStack_b0._0_8_) {
            do {
              while( true ) {
                pauVar18 = *(undefined1 (**) [16])pauVar9[1];
                if (pauVar18[1][8] != '\0') goto LAB_0e2dfda0;
                pauVar10 = *(undefined1 (**) [16])pauVar18[1];
                pauVar17 = *(undefined1 (**) [16])*pauVar10;
                if (pauVar18 == pauVar17) break;
                if ((pauVar17 == (undefined1 (*) [16])0x0) || (pauVar17[1][8] != '\0')) {
                  pauVar17 = *(undefined1 (**) [16])*pauVar18;
                  if (pauVar9 == pauVar17) {
                    lVar19 = *(long *)(*pauVar17 + 8);
                    *(long *)*pauVar18 = lVar19;
                    if (lVar19 != 0) {
                      *(undefined1 (**) [16])(lVar19 + 0x10) = pauVar18;
                      pauVar10 = *(undefined1 (**) [16])pauVar18[1];
                    }
                    *(undefined1 (**) [16])pauVar17[1] = pauVar10;
                    if (pauVar18 == *(undefined1 (**) [16])*pauVar10) {
                      *(undefined1 (**) [16])*pauVar10 = pauVar17;
                    }
                    else {
                      *(undefined1 (**) [16])(*pauVar10 + 8) = pauVar17;
                    }
                    *(undefined1 (**) [16])(*pauVar17 + 8) = pauVar18;
                    *(undefined1 (**) [16])pauVar18[1] = pauVar17;
                    pauVar10 = *(undefined1 (**) [16])pauVar17[1];
                    pauVar18 = pauVar17;
                  }
                  pauVar18[1][8] = 1;
                  pauVar10[1][8] = 0;
                  plVar2 = *(long **)(*pauVar10 + 8);
                  lVar19 = *plVar2;
                  *(long *)(*pauVar10 + 8) = lVar19;
                  if (lVar19 != 0) {
                    *(undefined1 (**) [16])(lVar19 + 0x10) = pauVar10;
                  }
                  puVar22 = *(undefined8 **)pauVar10[1];
                  plVar2[2] = (long)puVar22;
                  if (pauVar10 == (undefined1 (*) [16])*puVar22) {
                    *puVar22 = plVar2;
                  }
                  else {
                    puVar22[1] = plVar2;
                  }
                  *plVar2 = (long)pauVar10;
                  *(long **)pauVar10[1] = plVar2;
                  goto LAB_0e2dfda0;
                }
                pauVar18[1][8] = 1;
                pauVar10[1][8] = pauVar10 == (undefined1 (*) [16])auStack_b0._0_8_;
                pauVar17[1][8] = 1;
                pauVar9 = pauVar10;
                if (pauVar10 == (undefined1 (*) [16])auStack_b0._0_8_) goto LAB_0e2dfda0;
              }
              lVar19 = *(long *)(*pauVar10 + 8);
              if ((lVar19 == 0) || (*(char *)(lVar19 + 0x18) != '\0')) {
                if (pauVar9 != *(undefined1 (**) [16])*pauVar18) {
                  pauVar9 = *(undefined1 (**) [16])(*pauVar18 + 8);
                  lVar19 = *(long *)*pauVar9;
                  *(long *)(*pauVar18 + 8) = lVar19;
                  if (lVar19 == 0) {
                    *(undefined1 (**) [16])pauVar9[1] = pauVar10;
LAB_0e2dfd03:
                    *(undefined1 (**) [16])*pauVar10 = pauVar9;
                  }
                  else {
                    *(undefined1 (**) [16])(lVar19 + 0x10) = pauVar18;
                    pauVar10 = *(undefined1 (**) [16])pauVar18[1];
                    pauVar17 = *(undefined1 (**) [16])*pauVar10;
                    *(undefined1 (**) [16])pauVar9[1] = pauVar10;
                    if (pauVar18 == pauVar17) goto LAB_0e2dfd03;
                    *(undefined1 (**) [16])(*pauVar10 + 8) = pauVar9;
                  }
                  *(undefined1 (**) [16])*pauVar9 = pauVar18;
                  *(undefined1 (**) [16])pauVar18[1] = pauVar9;
                  pauVar10 = *(undefined1 (**) [16])pauVar9[1];
                  pauVar17 = *(undefined1 (**) [16])*pauVar10;
                  pauVar18 = pauVar9;
                }
                pauVar18[1][8] = 1;
                pauVar10[1][8] = 0;
                lVar19 = *(long *)(*pauVar17 + 8);
                *(long *)*pauVar10 = lVar19;
                if (lVar19 != 0) {
                  *(undefined1 (**) [16])(lVar19 + 0x10) = pauVar10;
                }
                puVar22 = *(undefined8 **)pauVar10[1];
                *(undefined8 **)pauVar17[1] = puVar22;
                if (pauVar10 == (undefined1 (*) [16])*puVar22) {
                  *puVar22 = pauVar17;
                }
                else {
                  puVar22[1] = pauVar17;
                }
                *(undefined1 (**) [16])(*pauVar17 + 8) = pauVar10;
                *(undefined1 (**) [16])pauVar10[1] = pauVar17;
                break;
              }
              pauVar18[1][8] = 1;
              pauVar10[1][8] = pauVar10 == (undefined1 (*) [16])auStack_b0._0_8_;
              *(undefined1 *)(lVar19 + 0x18) = 1;
              pauVar9 = pauVar10;
            } while (pauVar10 != (undefined1 (*) [16])auStack_b0._0_8_);
          }
LAB_0e2dfda0:
          auStack_b0._8_8_ = auStack_b0._8_8_ + 1;
          bVar27 = true;
          pauVar18 = pauStack_c0;
LAB_0e2dfdc8:
          if ((auStack_158[0] & 1) != 0) {
            thunk_FUN_0ee326a0(ppppplStack_148,(ulong)auStack_158 & 0xfffffffffffffffe);
          }
          if (bVar27) goto code_r0x0e2dfde8;
          if (((*pauVar18)[0] & 1) == 0) {
            ppppplStack_148 = (long *****)(*pauVar18 + 1);
          }
          else {
            ppppplStack_148 = *(long ******)pauVar18[1];
          }
          auStack_158 = (undefined1  [8])&DAT_0142bedc;
          ppppplStack_150 = (long *****)0x13;
          FUN_0470d9a0(&bStack_e8,&UNK_012d1a25,0x3e,0xcd,auStack_158);
          uVar20 = (ulong)(bStack_e8 >> 1);
          puVar5 = &uStack_e7;
          if ((bStack_e8 & 1) != 0) {
            uVar20 = uStack_e0;
            puVar5 = puStack_d8;
          }
          auStack_158 = (undefined1  [8])0x0;
          if (puVar5 == (undefined7 *)0x0) {
            auStack_158 = (undefined1  [8])((ulong)((uint)uVar20 & 0x7f) << 0x30);
          }
          else {
            lVar19 = uVar20 + 9;
            puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
            if (lVar19 != 0 && puVar11 == (ulong *)0x0) {
              func_0x0eec74c0(lVar19,8);
            }
            *puVar11 = uVar20;
            func_0x0eee2f00(puVar11 + 1,puVar5,uVar20);
            *(undefined1 *)((long)puVar11 + uVar20 + 8) = 0;
            auStack_158 = (undefined1  [8])
                          ((ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
          }
          func_0x0ed5ffe0(lStack_c8,0x40,auStack_158);
          if (((ulong)auStack_158 & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,((ulong)auStack_158 & 0xff00ffffffffffff) - 8);
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = ppppplStack_150;
          _auStack_158 = auVar3 << 0x40;
          if ((bStack_e8 & 1) != 0) {
            thunk_FUN_0ee326a0(puStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
          }
          lVar19 = auStack_110._0_8_;
          if (auStack_110._0_8_ != 0) {
            for (lVar25 = auStack_110._8_8_; lVar19 != lVar25; lVar25 = lVar25 + -0x18) {
              if ((*(byte *)(lVar25 + -0x18) & 1) != 0) {
                thunk_FUN_0ee326a0(*(undefined8 *)(lVar25 + -8),
                                   *(ulong *)(lVar25 + -0x18) & 0xfffffffffffffffe);
              }
            }
            goto LAB_0e2e0248;
          }
          goto LAB_0e2e025a;
        }
        goto LAB_0e2dfe15;
      }
      auStack_158 = (undefined1  [8])&DAT_0142bedc;
      ppppplStack_150 = (long *****)0x13;
      ppppplStack_148 = ppppplVar21;
      FUN_0470d9a0(&bStack_e8,&UNK_013041bd,0x22,0xcd,auStack_158);
      uVar20 = (ulong)(bStack_e8 >> 1);
      puVar5 = &uStack_e7;
      if ((bStack_e8 & 1) != 0) {
        uVar20 = uStack_e0;
        puVar5 = puStack_d8;
      }
      auStack_158 = (undefined1  [8])0x0;
      if (puVar5 == (undefined7 *)0x0) {
        auStack_158 = (undefined1  [8])((ulong)((uint)uVar20 & 0x7f) << 0x30);
      }
      else {
        lVar19 = uVar20 + 9;
        puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar19,8);
        if (lVar19 != 0 && puVar11 == (ulong *)0x0) {
          func_0x0eec74c0(lVar19,8);
        }
        *puVar11 = uVar20;
        func_0x0eee2f00(puVar11 + 1,puVar5,uVar20);
        *(undefined1 *)((long)puVar11 + uVar20 + 8) = 0;
        auStack_158 = (undefined1  [8])
                      ((ulong)(puVar11 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      func_0x0ed5ffe0(lStack_c8,0x40,auStack_158);
      if (((ulong)auStack_158 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)auStack_158 & 0xff00ffffffffffff) - 8);
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = ppppplStack_150;
      _auStack_158 = auVar4 << 0x40;
      if ((bStack_e8 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
      }
      lVar19 = auStack_110._0_8_;
      if (auStack_110._0_8_ != 0) {
        for (lVar25 = auStack_110._8_8_; lVar19 != lVar25; lVar25 = lVar25 + -0x18) {
          if ((*(byte *)(lVar25 + -0x18) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar25 + -8),
                               *(ulong *)(lVar25 + -0x18) & 0xfffffffffffffffe);
          }
        }
LAB_0e2e0248:
        auStack_110._8_8_ = lVar19;
        thunk_FUN_0ee326a0(auStack_110._0_8_,lStack_100 - auStack_110._0_8_);
      }
LAB_0e2e025a:
      if (((ulong)auStack_128 & 1) != 0) {
        thunk_FUN_0ee326a0(ppppplStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
      }
LAB_0e2e0274:
      func_0x0440a3b0(&plStack_b8,auStack_b0._0_8_);
      if (pcStack_58 == (code *)0x0) {
        return;
      }
      goto LAB_0e2e0296;
    }
    auStack_128 = (undefined1  [8])0x2600000137152d;
    func_0x0ed5ffe0(lStack_c8,0x40,auStack_128);
    if (((ulong)auStack_128 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)auStack_128 & 0xff00ffffffffffff) - 8);
    }
    if (pcStack_58 != (code *)0x0) {
LAB_0e2e0296:
      (*pcStack_58)(appppppplStack_70);
    }
  }
  return;
code_r0x0e2dfde8:
  pauVar9 = (undefined1 (*) [16])(pauVar18[1] + 8);
  if ((undefined1 (*) [16])(pauVar18[1] + 8) == pauStack_78) goto LAB_0e2dfe10;
  goto LAB_0e2df8c0;
LAB_0e2dfe10:
  pauVar9 = (undefined1 (*) [16])auStack_110._0_8_;
LAB_0e2dfe15:
  if (pauVar9 != (undefined1 (*) [16])0x0) {
    pauVar18 = pauVar9;
    for (pauVar10 = (undefined1 (*) [16])auStack_110._8_8_; pauVar9 != pauVar10;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-2] + 8)) {
      if ((pauVar10[-2][8] & 1) != 0) {
        thunk_FUN_0ee326a0(*(undefined8 *)(pauVar10[-1] + 8),
                           *(ulong *)(pauVar10[-2] + 8) & 0xfffffffffffffffe);
      }
      pauVar18 = (undefined1 (*) [16])auStack_110._0_8_;
    }
    auStack_110._8_8_ = pauVar9;
    thunk_FUN_0ee326a0(pauVar18,lStack_100 - (long)pauVar18);
  }
  if (((ulong)auStack_128 & 1) != 0) {
    thunk_FUN_0ee326a0(ppppplStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
  }
  uVar20 = uStack_80 + 1;
  pppppplVar14 = *ppppppplStack_a0;
  if ((ulong)(((long)ppppppplStack_a0[1] - (long)pppppplVar14 >> 3) * 0x6db6db6db6db6db7) <= uVar20)
  goto LAB_0e2e0274;
  goto LAB_0e2df7c3;
}



/* ---- referenced strings ----
 * 0x14e3ca0  minecraft:overwo
 * 0x14e91d0  ecraft:overworld
 */
