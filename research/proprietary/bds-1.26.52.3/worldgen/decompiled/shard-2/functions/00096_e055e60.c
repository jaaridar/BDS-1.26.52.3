/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe155e60 (ELF vaddr 0xe055e60)
 * Label: SharedTypes::v1_26_0::BiomeReplacementConstraint::vslot0
 * Body:  [[0e155e60, 0e155ff9] [0e156000, 0e15605d] [0e156060, 0e156106] [0e156110, 0e15616d] [0e156170, 0e1561a7] [0e1561b0, 0e156244] [0e156250, 0e1562bc] [0e1562c0, 0e156327] [0e156330, 0e1564b0] [0e1564c0, 0e1564ec] [0e1564f0, 0e156676] [0e156680, 0e1566a0] [0e1566b0, 0e1566d1] [0e1566e0, 0e15691d] [0e156920, 0e156aae] [0e156ab0, 0e156b8f]]
 * Ghidra: wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_SharedTypes__v1_26_0__BiomeReplacementConstraint__vslot0
               (long param_1,undefined8 param_2,long param_3)

{
  long ******pppppplVar1;
  long *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined7 *puVar7;
  char cVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong *puVar12;
  byte bVar13;
  long *****ppppplVar14;
  long ******pppppplVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  long lVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  long *****ppppplVar24;
  undefined1 (*pauVar25) [16];
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
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
  long *plStack_c0;
  undefined1 auStack_b8 [16];
  long *******ppppppplStack_a8;
  undefined1 (*pauStack_a0) [16];
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
    func_0x0e1790c0(appppppplStack_70);
    if (pcStack_38 == (code *)0x0) {
      if ((DAT_0f746ba0 == '\0') && (iVar9 = func_0x04108328(&DAT_0f746ba0), iVar9 != 0)) {
        func_0x0e177580();
        FUN_0410844d(&DAT_0f746ba0);
      }
      func_0x0ed5ef10(auStack_128,lStack_c8,&DAT_0f746b88,param_2);
      ppppplVar24 = ppppplStack_118;
      if (((ulong)auStack_128 & 1) == 0) {
        ppppplVar24 = (long *****)(auStack_128 + 1);
      }
      cVar8 = func_0x0eeddcf0(ppppplVar24,&UNK_0121f913,0x107,&UNK_0130ea24,&UNK_01355f80);
      if (((ulong)auStack_128 & 1) != 0) {
        thunk_FUN_0ee326a0(ppppplStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
      }
      if (cVar8 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    ppppppplStack_a8 = appppppplStack_70[0];
    if (cStack_4c == '\x02') {
      ppppppplStack_a8 = (long *******)appppppplStack_70;
    }
    if (ppppppplStack_a8 == (long *******)0x0 || iStack_50 != -0x2d33ed26) {
      if (lStack_40 == 0) {
        (*pcStack_38)(0,appppppplStack_70,0);
      }
      if (cStack_4c == '\x02') {
        appppppplStack_70[0] = (long *******)appppppplStack_70;
      }
      ppppppplStack_a8 =
           (long *******)FUN_0488e200(uStack_48,lStack_40,0xd2cc12da,appppppplStack_70[0]);
    }
    pppppplVar15 = *ppppppplStack_a8;
    if (pppppplVar15 != ppppppplStack_a8[1]) {
      plStack_c0 = (long *)auStack_b8;
      auStack_b8 = (undefined1  [16])0x0;
      uVar22 = 0;
      while( true ) {
        pppppplVar1 = pppppplVar15 + uVar22 * 7;
        uStack_80 = uVar22;
        if (((ulong)pppppplVar15[uVar22 * 7] & 1) == 0) {
          ppppplStack_118 = pppppplVar1[2];
          auStack_128 = (undefined1  [8])*pppppplVar1;
          ppppplStack_120 = pppppplVar1[1];
        }
        else {
          func_0x0412e5e0(auStack_128,pppppplVar1[2],pppppplVar1[1]);
        }
        auStack_110 = (undefined1  [16])0x0;
        lStack_100 = 0;
        func_0x053595a0();
        ppppplStack_f8 = pppppplVar1[6];
        ppppplVar14 = (long *****)((ulong)auStack_128 >> 1 & 0x7f);
        ppppplVar24 = (long *****)(auStack_128 + 1);
        if (((ulong)auStack_128 & 1) != 0) {
          ppppplVar14 = ppppplStack_120;
          ppppplVar24 = ppppplStack_118;
        }
        if (ppppplVar14 != (long *****)0x10) break;
        auVar31[0] = -(*(char *)ppppplVar24 == DAT_014eaeb0);
        auVar31[1] = -(*(char *)((long)ppppplVar24 + 1) == UNK_014eaeb1);
        auVar31[2] = -(*(char *)((long)ppppplVar24 + 2) == UNK_014eaeb2);
        auVar31[3] = -(*(char *)((long)ppppplVar24 + 3) == UNK_014eaeb3);
        auVar31[4] = -(*(char *)((long)ppppplVar24 + 4) == UNK_014eaeb4);
        auVar31[5] = -(*(char *)((long)ppppplVar24 + 5) == UNK_014eaeb5);
        auVar31[6] = -(*(char *)((long)ppppplVar24 + 6) == UNK_014eaeb6);
        auVar31[7] = -(*(char *)((long)ppppplVar24 + 7) == UNK_014eaeb7);
        auVar31[8] = -(*(char *)(ppppplVar24 + 1) == UNK_014eaeb8);
        auVar31[9] = -(*(char *)((long)ppppplVar24 + 9) == UNK_014eaeb9);
        auVar31[10] = -(*(char *)((long)ppppplVar24 + 10) == UNK_014eaeba);
        auVar31[0xb] = -(*(char *)((long)ppppplVar24 + 0xb) == UNK_014eaebb);
        auVar31[0xc] = -(*(char *)((long)ppppplVar24 + 0xc) == UNK_014eaebc);
        auVar31[0xd] = -(*(char *)((long)ppppplVar24 + 0xd) == UNK_014eaebd);
        auVar31[0xe] = -(*(char *)((long)ppppplVar24 + 0xe) == UNK_014eaebe);
        auVar31[0xf] = -(*(char *)((long)ppppplVar24 + 0xf) == UNK_014eaebf);
        uVar4 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
LAB_0e156120:
        if (uVar4 != 0xffff) goto LAB_0e156947;
        pauStack_78 = (undefined1 (*) [16])auStack_110._8_8_;
        pauVar25 = (undefined1 (*) [16])auStack_110._0_8_;
        if (auStack_110._0_8_ != auStack_110._8_8_) {
          do {
            if (((ulong)auStack_128 & 1) == 0) {
              ppppplStack_148 = ppppplStack_118;
              ppppplStack_150 = ppppplStack_120;
              auStack_158 = auStack_128;
            }
            else {
              func_0x0412e5e0(auStack_158,ppppplStack_118,ppppplStack_120);
            }
            pauStack_a0 = pauVar25;
            if (((*pauVar25)[0] & 1) == 0) {
              puStack_130 = *(undefined1 **)pauVar25[1];
              auStack_140 = *pauVar25;
            }
            else {
              func_0x0412e5e0(auStack_140,*(undefined8 *)pauVar25[1],*(undefined8 *)(*pauVar25 + 8))
              ;
            }
            pauVar25 = &auStack_b8;
            pauVar19 = &auStack_b8;
            if ((undefined1 (*) [16])auStack_b8._0_8_ != (undefined1 (*) [16])0x0) {
              bVar29 = (auStack_158[0] & 1) == 0;
              ppppplVar24 = ppppplStack_148;
              if (bVar29) {
                ppppplVar24 = (long *****)(auStack_158 + 1);
              }
              ppppplVar14 = (long *****)(ulong)(auStack_158[0] >> 1);
              if (!bVar29) {
                ppppplVar14 = ppppplStack_150;
              }
              uStack_88 = (ulong)(auStack_140[0] >> 1);
              bVar13 = auStack_140[0] & 1;
              uStack_ec = (uint)bVar13;
              puStack_90 = puStack_130;
              if (bVar13 == 0) {
                puStack_90 = auStack_140 + 1;
              }
              pauVar11 = (undefined1 (*) [16])auStack_b8._0_8_;
              uStack_d0 = (ulong)ppppplVar14;
              ppppplStack_98 = ppppplVar24;
              if (bVar13 != 0) {
                uStack_88 = auStack_140._8_8_;
              }
              do {
                while( true ) {
                  pauVar10 = pauVar11;
                  bVar29 = (pauVar10[2][0] & 1) != 0;
                  puVar21 = pauVar10[2] + 1;
                  if (bVar29) {
                    puVar21 = *(undefined1 **)pauVar10[3];
                  }
                  uVar22 = (ulong)((byte)pauVar10[2][0] >> 1);
                  if (bVar29) {
                    uVar22 = *(ulong *)(pauVar10[2] + 8);
                  }
                  uVar27 = (ulong)ppppplVar14;
                  if (uVar22 < ppppplVar14) {
                    uVar27 = uVar22;
                  }
                  iVar9 = func_0x0eee2ff0(ppppplVar24,puVar21,uVar27);
                  uVar17 = uStack_88;
                  pauVar19 = pauVar10;
                  if (iVar9 == 0) break;
                  if (-1 < iVar9) goto LAB_0e15629a;
LAB_0e156250:
                  pauVar11 = *(undefined1 (**) [16])*pauVar10;
                  pauVar25 = pauVar10;
                  if (*(undefined1 (**) [16])*pauVar10 == (undefined1 (*) [16])0x0)
                  goto LAB_0e1563cd;
                }
                if (ppppplVar14 != (long *****)uVar22) {
                  if (uVar22 <= ppppplVar14) goto LAB_0e15629a;
                  goto LAB_0e156250;
                }
                bVar29 = (pauVar10[3][8] & 1) != 0;
                puVar23 = pauVar10[3] + 9;
                if (bVar29) {
                  puVar23 = *(undefined1 **)(pauVar10[4] + 8);
                }
                uVar26 = (ulong)((byte)pauVar10[3][8] >> 1);
                if (bVar29) {
                  uVar26 = *(ulong *)pauVar10[4];
                }
                uVar16 = uStack_88;
                if (uVar26 < uStack_88) {
                  uVar16 = uVar26;
                }
                iVar9 = func_0x0eee2ff0(puStack_90,puVar23,uVar16);
                ppppplVar24 = ppppplStack_98;
                ppppplVar14 = (long *****)uStack_d0;
                if (iVar9 == 0) {
                  if (uVar26 <= uVar17) goto LAB_0e15629a;
                  goto LAB_0e156250;
                }
                if (iVar9 < 0) goto LAB_0e156250;
LAB_0e15629a:
                iVar9 = func_0x0eee2ff0(puVar21,ppppplVar24,uVar27);
                uVar27 = uStack_88;
                if (iVar9 == 0) {
                  bVar29 = uVar22 < ppppplVar14;
                  if ((long *****)uVar22 == ppppplVar14) {
                    bVar29 = (pauVar10[3][8] & 1) != 0;
                    puVar21 = pauVar10[3] + 9;
                    if (bVar29) {
                      puVar21 = *(undefined1 **)(pauVar10[4] + 8);
                    }
                    uVar22 = (ulong)((byte)pauVar10[3][8] >> 1);
                    if (bVar29) {
                      uVar22 = *(ulong *)pauVar10[4];
                    }
                    uVar17 = uVar22;
                    if (uStack_88 < uVar22) {
                      uVar17 = uStack_88;
                    }
                    iVar9 = func_0x0eee2ff0(puVar21,puStack_90,uVar17);
                    ppppplVar14 = (long *****)uStack_d0;
                    if (iVar9 != 0) goto joined_r0x0e15637b;
                    bVar29 = uVar22 < uVar27;
                  }
                  ppppplVar14 = (long *****)uStack_d0;
                  if (!bVar29) goto LAB_0e1564f0;
                }
                else {
joined_r0x0e15637b:
                  if (-1 < iVar9) {
LAB_0e1564f0:
                    bVar29 = false;
                    if ((char)uStack_ec != '\0') {
                      bVar29 = false;
                      thunk_FUN_0ee326a0(puStack_130,auStack_140._0_8_ & 0xfffffffffffffffe);
                    }
                    goto LAB_0e156629;
                  }
                }
                pauVar11 = *(undefined1 (**) [16])(*pauVar10 + 8);
              } while (*(undefined1 (**) [16])(*pauVar10 + 8) != (undefined1 (*) [16])0x0);
              pauVar25 = (undefined1 (*) [16])(*pauVar10 + 8);
            }
LAB_0e1563cd:
            pauVar10 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x50);
            if (pauVar10 == (undefined1 (*) [16])0x0) {
              func_0x0eec74c0(0x50,0);
            }
            *(long ******)pauVar10[3] = ppppplStack_148;
            *(undefined1 (*) [8])pauVar10[2] = auStack_158;
            *(long ******)(pauVar10[2] + 8) = ppppplStack_150;
            _auStack_158 = (undefined1  [16])0x0;
            ppppplStack_148 = (long *****)0x0;
            *(undefined1 **)(pauVar10[4] + 8) = puStack_130;
            *(undefined8 *)(pauVar10[3] + 8) = auStack_140._0_8_;
            *(undefined8 *)pauVar10[4] = auStack_140._8_8_;
            auStack_140 = (undefined1  [16])0x0;
            puStack_130 = (undefined1 *)0x0;
            *pauVar10 = (undefined1  [16])0x0;
            *(undefined1 (**) [16])pauVar10[1] = pauVar19;
            *(undefined1 (**) [16])*pauVar25 = pauVar10;
            if ((long *)*plStack_c0 != (long *)0x0) {
              plStack_c0 = (long *)*plStack_c0;
            }
            pauVar10[1][8] = pauVar10 == (undefined1 (*) [16])auStack_b8._0_8_;
            pauVar25 = pauVar10;
            if (pauVar10 != (undefined1 (*) [16])auStack_b8._0_8_) {
              do {
                while( true ) {
                  pauVar19 = *(undefined1 (**) [16])pauVar25[1];
                  if (pauVar19[1][8] != '\0') goto LAB_0e156600;
                  pauVar11 = *(undefined1 (**) [16])pauVar19[1];
                  pauVar18 = *(undefined1 (**) [16])*pauVar11;
                  if (pauVar19 == pauVar18) break;
                  if ((pauVar18 == (undefined1 (*) [16])0x0) || (pauVar18[1][8] != '\0')) {
                    pauVar18 = *(undefined1 (**) [16])*pauVar19;
                    if (pauVar25 == pauVar18) {
                      lVar20 = *(long *)(*pauVar18 + 8);
                      *(long *)*pauVar19 = lVar20;
                      if (lVar20 != 0) {
                        *(undefined1 (**) [16])(lVar20 + 0x10) = pauVar19;
                        pauVar11 = *(undefined1 (**) [16])pauVar19[1];
                      }
                      *(undefined1 (**) [16])pauVar18[1] = pauVar11;
                      if (pauVar19 == *(undefined1 (**) [16])*pauVar11) {
                        *(undefined1 (**) [16])*pauVar11 = pauVar18;
                      }
                      else {
                        *(undefined1 (**) [16])(*pauVar11 + 8) = pauVar18;
                      }
                      *(undefined1 (**) [16])(*pauVar18 + 8) = pauVar19;
                      *(undefined1 (**) [16])pauVar19[1] = pauVar18;
                      pauVar11 = *(undefined1 (**) [16])pauVar18[1];
                      pauVar19 = pauVar18;
                    }
                    pauVar19[1][8] = 1;
                    pauVar11[1][8] = 0;
                    plVar2 = *(long **)(*pauVar11 + 8);
                    lVar20 = *plVar2;
                    *(long *)(*pauVar11 + 8) = lVar20;
                    if (lVar20 != 0) {
                      *(undefined1 (**) [16])(lVar20 + 0x10) = pauVar11;
                    }
                    puVar3 = *(undefined8 **)pauVar11[1];
                    plVar2[2] = (long)puVar3;
                    if (pauVar11 == (undefined1 (*) [16])*puVar3) {
                      *puVar3 = plVar2;
                    }
                    else {
                      puVar3[1] = plVar2;
                    }
                    *plVar2 = (long)pauVar11;
                    *(long **)pauVar11[1] = plVar2;
                    goto LAB_0e156600;
                  }
                  pauVar19[1][8] = 1;
                  pauVar11[1][8] = pauVar11 == (undefined1 (*) [16])auStack_b8._0_8_;
                  pauVar18[1][8] = 1;
                  pauVar25 = pauVar11;
                  if (pauVar11 == (undefined1 (*) [16])auStack_b8._0_8_) goto LAB_0e156600;
                }
                lVar20 = *(long *)(*pauVar11 + 8);
                if ((lVar20 == 0) || (*(char *)(lVar20 + 0x18) != '\0')) {
                  if (pauVar25 != *(undefined1 (**) [16])*pauVar19) {
                    pauVar25 = *(undefined1 (**) [16])(*pauVar19 + 8);
                    lVar20 = *(long *)*pauVar25;
                    *(long *)(*pauVar19 + 8) = lVar20;
                    if (lVar20 == 0) {
                      *(undefined1 (**) [16])pauVar25[1] = pauVar11;
LAB_0e15656e:
                      *(undefined1 (**) [16])*pauVar11 = pauVar25;
                    }
                    else {
                      *(undefined1 (**) [16])(lVar20 + 0x10) = pauVar19;
                      pauVar11 = *(undefined1 (**) [16])pauVar19[1];
                      pauVar18 = *(undefined1 (**) [16])*pauVar11;
                      *(undefined1 (**) [16])pauVar25[1] = pauVar11;
                      if (pauVar19 == pauVar18) goto LAB_0e15656e;
                      *(undefined1 (**) [16])(*pauVar11 + 8) = pauVar25;
                    }
                    *(undefined1 (**) [16])*pauVar25 = pauVar19;
                    *(undefined1 (**) [16])pauVar19[1] = pauVar25;
                    pauVar11 = *(undefined1 (**) [16])pauVar25[1];
                    pauVar18 = *(undefined1 (**) [16])*pauVar11;
                    pauVar19 = pauVar25;
                  }
                  pauVar19[1][8] = 1;
                  pauVar11[1][8] = 0;
                  lVar20 = *(long *)(*pauVar18 + 8);
                  *(long *)*pauVar11 = lVar20;
                  if (lVar20 != 0) {
                    *(undefined1 (**) [16])(lVar20 + 0x10) = pauVar11;
                  }
                  puVar3 = *(undefined8 **)pauVar11[1];
                  *(undefined8 **)pauVar18[1] = puVar3;
                  if (pauVar11 == (undefined1 (*) [16])*puVar3) {
                    *puVar3 = pauVar18;
                  }
                  else {
                    puVar3[1] = pauVar18;
                  }
                  *(undefined1 (**) [16])(*pauVar18 + 8) = pauVar11;
                  *(undefined1 (**) [16])pauVar11[1] = pauVar18;
                  break;
                }
                pauVar19[1][8] = 1;
                pauVar11[1][8] = pauVar11 == (undefined1 (*) [16])auStack_b8._0_8_;
                *(undefined1 *)(lVar20 + 0x18) = 1;
                pauVar25 = pauVar11;
              } while (pauVar11 != (undefined1 (*) [16])auStack_b8._0_8_);
            }
LAB_0e156600:
            auStack_b8._8_8_ = auStack_b8._8_8_ + 1;
            bVar29 = true;
LAB_0e156629:
            if ((auStack_158[0] & 1) != 0) {
              thunk_FUN_0ee326a0(ppppplStack_148,(ulong)auStack_158 & 0xfffffffffffffffe);
            }
            if (!bVar29) {
              if (((*pauStack_a0)[0] & 1) == 0) {
                ppppplStack_148 = (long *****)(*pauStack_a0 + 1);
              }
              else {
                ppppplStack_148 = *(long ******)pauStack_a0[1];
              }
              bVar29 = (pauVar10[2][0] & 1) != 0;
              auStack_158 = (undefined1  [8])(pauVar10[2] + 1);
              if (bVar29) {
                auStack_158 = (undefined1  [8])*(undefined1 **)pauVar10[3];
              }
              ppppplStack_150 = (long *****)(ulong)((byte)pauVar10[2][0] >> 1);
              if (bVar29) {
                ppppplStack_150 = (long *****)*(ulong *)(pauVar10[2] + 8);
              }
              FUN_0470d9a0(&bStack_e8,&UNK_012d1a25,0x3e,0xcd,auStack_158);
              uVar22 = (ulong)(bStack_e8 >> 1);
              puVar7 = &uStack_e7;
              if ((bStack_e8 & 1) != 0) {
                uVar22 = uStack_e0;
                puVar7 = puStack_d8;
              }
              auStack_158 = (undefined1  [8])0x0;
              if (puVar7 == (undefined7 *)0x0) {
                auStack_158 = (undefined1  [8])((ulong)((uint)uVar22 & 0x7f) << 0x30);
              }
              else {
                lVar20 = uVar22 + 9;
                puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar20,8);
                if (lVar20 != 0 && puVar12 == (ulong *)0x0) {
                  func_0x0eec74c0(lVar20,8);
                }
                *puVar12 = uVar22;
                func_0x0eee2f00(puVar12 + 1,puVar7,uVar22);
                *(undefined1 *)((long)puVar12 + uVar22 + 8) = 0;
                auStack_158 = (undefined1  [8])
                              ((ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
              }
              func_0x0ed5ffe0(lStack_c8,0x40,auStack_158);
              if (((ulong)auStack_158 & 0x80000000000000) != 0) {
                (**(code **)(_DAT_0f5463b0 + 0x28))
                          (&DAT_0f5463b0,((ulong)auStack_158 & 0xff00ffffffffffff) - 8);
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = ppppplStack_150;
              _auStack_158 = auVar5 << 0x40;
              if ((bStack_e8 & 1) != 0) {
                thunk_FUN_0ee326a0(puStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
              }
              lVar20 = auStack_110._0_8_;
              if (auStack_110._0_8_ != 0) {
                for (lVar28 = auStack_110._8_8_; lVar20 != lVar28; lVar28 = lVar28 + -0x18) {
                  if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
                    thunk_FUN_0ee326a0(*(undefined8 *)(lVar28 + -8),
                                       *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
                  }
                }
                goto LAB_0e156ad8;
              }
              goto LAB_0e156aea;
            }
            pauVar25 = (undefined1 (*) [16])(pauStack_a0[1] + 8);
          } while ((undefined1 (*) [16])(pauStack_a0[1] + 8) != pauStack_78);
          pauVar25 = (undefined1 (*) [16])auStack_110._0_8_;
        }
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          pauVar19 = pauVar25;
          for (pauVar11 = (undefined1 (*) [16])auStack_110._8_8_; pauVar25 != pauVar11;
              pauVar11 = (undefined1 (*) [16])(pauVar11[-2] + 8)) {
            if ((pauVar11[-2][8] & 1) != 0) {
              thunk_FUN_0ee326a0(*(undefined8 *)(pauVar11[-1] + 8),
                                 *(ulong *)(pauVar11[-2] + 8) & 0xfffffffffffffffe);
            }
            pauVar19 = (undefined1 (*) [16])auStack_110._0_8_;
          }
          auStack_110._8_8_ = pauVar25;
          thunk_FUN_0ee326a0(pauVar19,lStack_100 - (long)pauVar19);
        }
        if (((ulong)auStack_128 & 1) != 0) {
          thunk_FUN_0ee326a0(ppppplStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
        }
        uVar22 = uStack_80 + 1;
        pppppplVar15 = *ppppppplStack_a8;
        if ((ulong)(((long)ppppppplStack_a8[1] - (long)pppppplVar15 >> 3) * 0x6db6db6db6db6db7) <=
            uVar22) goto LAB_0e156b04;
      }
      if (ppppplVar14 == (long *****)0x13) {
        auVar30[0] = -(*(char *)ppppplVar24 == DAT_014e3ca0);
        auVar30[1] = -(*(char *)((long)ppppplVar24 + 1) == UNK_014e3ca1);
        auVar30[2] = -(*(char *)((long)ppppplVar24 + 2) == UNK_014e3ca2);
        auVar30[3] = -(*(char *)((long)ppppplVar24 + 3) == UNK_014e3ca3);
        auVar30[4] = -(*(char *)((long)ppppplVar24 + 4) == UNK_014e3ca4);
        auVar30[5] = -(*(char *)((long)ppppplVar24 + 5) == UNK_014e3ca5);
        auVar30[6] = -(*(char *)((long)ppppplVar24 + 6) == UNK_014e3ca6);
        auVar30[7] = -(*(char *)((long)ppppplVar24 + 7) == UNK_014e3ca7);
        auVar30[8] = -(*(char *)(ppppplVar24 + 1) == UNK_014e3ca8);
        auVar30[9] = -(*(char *)((long)ppppplVar24 + 9) == UNK_014e3ca9);
        auVar30[10] = -(*(char *)((long)ppppplVar24 + 10) == UNK_014e3caa);
        auVar30[0xb] = -(*(char *)((long)ppppplVar24 + 0xb) == UNK_014e3cab);
        auVar30[0xc] = -(*(char *)((long)ppppplVar24 + 0xc) == UNK_014e3cac);
        auVar30[0xd] = -(*(char *)((long)ppppplVar24 + 0xd) == UNK_014e3cad);
        auVar30[0xe] = -(*(char *)((long)ppppplVar24 + 0xe) == UNK_014e3cae);
        auVar30[0xf] = -(*(char *)((long)ppppplVar24 + 0xf) == UNK_014e3caf);
        auVar32[0] = -(*(char *)((long)ppppplVar24 + 3) == DAT_014e91d0);
        auVar32[1] = -(*(char *)((long)ppppplVar24 + 4) == UNK_014e91d1);
        auVar32[2] = -(*(char *)((long)ppppplVar24 + 5) == UNK_014e91d2);
        auVar32[3] = -(*(char *)((long)ppppplVar24 + 6) == UNK_014e91d3);
        auVar32[4] = -(*(char *)((long)ppppplVar24 + 7) == UNK_014e91d4);
        auVar32[5] = -(*(char *)(ppppplVar24 + 1) == UNK_014e91d5);
        auVar32[6] = -(*(char *)((long)ppppplVar24 + 9) == UNK_014e91d6);
        auVar32[7] = -(*(char *)((long)ppppplVar24 + 10) == UNK_014e91d7);
        auVar32[8] = -(*(char *)((long)ppppplVar24 + 0xb) == UNK_014e91d8);
        auVar32[9] = -(*(char *)((long)ppppplVar24 + 0xc) == UNK_014e91d9);
        auVar32[10] = -(*(char *)((long)ppppplVar24 + 0xd) == UNK_014e91da);
        auVar32[0xb] = -(*(char *)((long)ppppplVar24 + 0xe) == UNK_014e91db);
        auVar32[0xc] = -(*(char *)((long)ppppplVar24 + 0xf) == UNK_014e91dc);
        auVar32[0xd] = -(*(char *)(ppppplVar24 + 2) == UNK_014e91dd);
        auVar32[0xe] = -(*(char *)((long)ppppplVar24 + 0x11) == UNK_014e91de);
        auVar32[0xf] = -(*(char *)((long)ppppplVar24 + 0x12) == UNK_014e91df);
        auVar32 = auVar32 & auVar30;
        uVar4 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
        goto LAB_0e156120;
      }
LAB_0e156947:
      auStack_158 = (undefined1  [8])&DAT_0142bedc;
      ppppplStack_150 = (long *****)0x13;
      ppppplStack_148 = (long *****)&UNK_014c988a;
      auStack_140._8_8_ = ppppplVar24;
      auStack_140._0_8_ = 0x10;
      FUN_0470d9a0(&bStack_e8,&UNK_013a6428,0x31,0xcdd,auStack_158);
      uVar22 = (ulong)(bStack_e8 >> 1);
      puVar7 = &uStack_e7;
      if ((bStack_e8 & 1) != 0) {
        uVar22 = uStack_e0;
        puVar7 = puStack_d8;
      }
      auStack_158 = (undefined1  [8])0x0;
      if (puVar7 == (undefined7 *)0x0) {
        auStack_158 = (undefined1  [8])((ulong)((uint)uVar22 & 0x7f) << 0x30);
      }
      else {
        lVar20 = uVar22 + 9;
        puVar12 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar20,8);
        if (lVar20 != 0 && puVar12 == (ulong *)0x0) {
          func_0x0eec74c0(lVar20,8);
        }
        *puVar12 = uVar22;
        func_0x0eee2f00(puVar12 + 1,puVar7,uVar22);
        *(undefined1 *)((long)puVar12 + uVar22 + 8) = 0;
        auStack_158 = (undefined1  [8])
                      ((ulong)(puVar12 + 1) & 0xff00ffffffffffff | 0x80000000000000);
      }
      func_0x0ed5ffe0(lStack_c8,0x40,auStack_158);
      if (((ulong)auStack_158 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,((ulong)auStack_158 & 0xff00ffffffffffff) - 8);
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = ppppplStack_150;
      _auStack_158 = auVar6 << 0x40;
      if ((bStack_e8 & 1) != 0) {
        thunk_FUN_0ee326a0(puStack_d8,CONCAT71(uStack_e7,bStack_e8) & 0xfffffffffffffffe);
      }
      lVar20 = auStack_110._0_8_;
      if (auStack_110._0_8_ != 0) {
        for (lVar28 = auStack_110._8_8_; lVar20 != lVar28; lVar28 = lVar28 + -0x18) {
          if ((*(byte *)(lVar28 + -0x18) & 1) != 0) {
            thunk_FUN_0ee326a0(*(undefined8 *)(lVar28 + -8),
                               *(ulong *)(lVar28 + -0x18) & 0xfffffffffffffffe);
          }
        }
LAB_0e156ad8:
        auStack_110._8_8_ = lVar20;
        thunk_FUN_0ee326a0(auStack_110._0_8_,lStack_100 - auStack_110._0_8_);
      }
LAB_0e156aea:
      if (((ulong)auStack_128 & 1) != 0) {
        thunk_FUN_0ee326a0(ppppplStack_118,(ulong)auStack_128 & 0xfffffffffffffffe);
      }
LAB_0e156b04:
      func_0x0440a3b0(&plStack_c0,auStack_b8._0_8_);
      if (pcStack_58 == (code *)0x0) {
        return;
      }
      goto LAB_0e156b26;
    }
    auStack_128 = (undefined1  [8])0x2600000126b74c;
    func_0x0ed5ffe0(lStack_c8,0x40,auStack_128);
    if (((ulong)auStack_128 >> 0x37 & 1) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))
                (&DAT_0f5463b0,((ulong)auStack_128 & 0xff00ffffffffffff) - 8);
    }
    if (pcStack_58 != (code *)0x0) {
LAB_0e156b26:
      (*pcStack_58)(appppppplStack_70);
    }
  }
  return;
}



/* ---- referenced strings ----
 * 0x14e3ca0  minecraft:overwo
 * 0x14e91d0  ecraft:overworld
 * 0x14eaeb0  minecraft:nether
 */
