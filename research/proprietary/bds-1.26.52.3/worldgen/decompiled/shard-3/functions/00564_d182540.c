/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd282540 (ELF vaddr 0xd182540)
 * Label: caller-of-callee
 * Body:  [[0d282540, 0d2828f7] [0d282900, 0d28294d] [0d282950, 0d282ab8] [0d282ac0, 0d282da4] [0d282db0, 0d282dc8] [0d282dd0, 0d282e0d] [0d282e10, 0d282e26] [0d282e30, 0d282f65] [0d282f70, 0d282fa3] [0d282fb0, 0d2830a7] [0d2830b0, 0d283246] [0d283250, 0d2833db] [0d2833e0, 0d283410] [0d283420, 0d283790] [0d2837a0, 0d2838ac] [0d2838b0, 0d283918] [0d283920, 0d28397a] [0d283980, 0d2839a7] [0d2839b0, 0d2839cc] [0d2839d0, 0d283a54] [0d283a60, 0d283aa5] [0d283ab0, 0d283b09] [0d283b10, 0d283bba] [0d283bc0, 0d283cd0] [0d283ce0, 0d283d0d] [0d283d10, 0d283d79] [0d283d80, 0d283e1d] [0d283e20, 0d283f78] [0d283f80, 0d284025] [0d284030, 0d284045] [0d284050, 0d284073] [0d284080, 0d2840a2] [0d2840b0, 0d2840fa] [0d284100, 0d284193] [0d2841a0, 0d2841bd] [0d2841c0, 0d284234] [0d284240, 0d284285] [0d284290, 0d2842f4] [0d284300, 0d284345] [0d284350, 0d28442d] [0d2844ff, 0d284521] [0d284530, 0d284572] [0d284580, 0d2845e4] [0d2845f0, 0d284632] [0d284640, 0d28468d]]
 * Ghidra: FUN_0d282540
 */


/* WARNING: Removing unreachable block (ram,0x0d283f6b) */
/* WARNING: Removing unreachable block (ram,0x0d283fbc) */
/* WARNING: Removing unreachable block (ram,0x0d283fc4) */
/* WARNING: Removing unreachable block (ram,0x0d283f80) */
/* WARNING: Removing unreachable block (ram,0x0d283fd9) */
/* WARNING: Removing unreachable block (ram,0x0d2841df) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d282540(ushort ******param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  ushort ***pppuVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [8];
  ushort uVar13;
  int iVar14;
  long lVar15;
  ushort ****ppppuVar16;
  ushort ****ppppuVar17;
  ushort ****ppppuVar18;
  ushort ******ppppppuVar19;
  ushort ***pppuVar20;
  long lVar21;
  ushort ******ppppppuVar22;
  undefined8 uVar23;
  uint uVar24;
  ushort ******ppppppuVar25;
  ushort *****pppppuVar26;
  long lVar27;
  ulong uVar28;
  ushort ******ppppppuVar29;
  ulong uVar30;
  ushort *****pppppuVar31;
  ushort ******ppppppuVar32;
  ushort *****pppppuVar33;
  ushort ******ppppppuVar34;
  ushort *****pppppuVar35;
  ushort ****ppppuVar36;
  ushort ***pppuVar37;
  ushort *****pppppuVar38;
  ulong uVar39;
  ushort *****pppppuVar40;
  ushort ******ppppppuVar41;
  ushort ******ppppppuVar42;
  ushort ***pppuVar43;
  bool bVar44;
  float fVar45;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ushort ******ppppppuStack_118;
  ushort ******ppppppuStack_110;
  ushort ******ppppppuStack_108;
  ushort *****pppppuStack_f8;
  ushort ******ppppppuStack_f0;
  ushort ******ppppppuStack_e8;
  ushort ******ppppppuStack_e0;
  ushort ******ppppppuStack_d8;
  ushort ******ppppppuStack_d0;
  ushort ******ppppppuStack_c8;
  ushort ******ppppppuStack_c0;
  ushort ******ppppppuStack_b8;
  undefined1 auStack_a8 [8];
  ushort ******ppppppuStack_a0;
  ushort ******ppppppuStack_98;
  ushort ******ppppppuStack_90;
  ushort ******ppppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ushort *****pppppuStack_68;
  ushort *****pppppuStack_60;
  ushort *****pppppuStack_58;
  ushort *****pppppuStack_50;
  ushort ******ppppppuStack_48;
  undefined8 *puStack_40;
  ushort ******ppppppuStack_38;
  
  if (param_1[2] == param_1[3]) {
    return;
  }
  if (param_1[1] == (ushort *****)0x0) {
    return;
  }
  pppppuVar26 = *param_1;
  if (pppppuVar26 == (ushort *****)0x0) {
    return;
  }
  lVar27 = (long)param_1[3] - (long)param_1[2] >> 3;
  uVar28 = lVar27 * 0x2e8ba2e8ba2e8ba3;
  ppppuVar17 = pppppuVar26[8];
  ppppuVar36 = pppppuVar26[10];
  lVar15 = (long)ppppuVar36 - (long)ppppuVar17 >> 3;
  if (uVar28 < (ulong)(lVar15 * -0x5555555555555555) || uVar28 + lVar15 * 0x5555555555555555 == 0) {
LAB_0d282679:
    ppppuVar17 = *pppppuVar26;
    ppppuVar36 = pppppuVar26[2];
    if ((ulong)(((long)ppppuVar36 - (long)ppppuVar17 >> 3) * -0x5555555555555555) < uVar28) {
      if (0xaaaaaaaaaaaaaaa < uVar28) goto LAB_0d28441f;
      ppppuVar18 = pppppuVar26[1];
      ppppuVar16 = (ushort ****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0x18);
      if (ppppuVar16 == (ushort ****)0x0) {
        FUN_0eec74c0(uVar28 * 0x18,0);
      }
      ppppppuStack_e8 = (ushort ******)(ppppuVar16 + uVar28 * 3);
      func_0x0eee2f00(ppppuVar16,ppppuVar17);
      *pppppuVar26 = ppppuVar16;
      pppppuVar26[1] = (ushort ****)((long)ppppuVar16 + ((long)ppppuVar18 - (long)ppppuVar17));
      pppppuVar26[2] = (ushort ****)ppppppuStack_e8;
      if (ppppuVar17 != (ushort ****)0x0) {
        func_0x0412a280(ppppuVar17,(long)ppppuVar36 - (long)ppppuVar17);
        pppppuVar26 = *param_1;
        uVar28 = ((long)param_1[3] - (long)param_1[2] >> 3) * 0x2e8ba2e8ba2e8ba3;
      }
    }
    fVar45 = (float)func_0x0eee3ab0((float)uVar28 / *(float *)(pppppuVar26 + 7));
    ppppuVar36 = (ushort ****)((long)(fVar45 - _DAT_01198778) & (long)fVar45 >> 0x3f | (long)fVar45)
    ;
    ppppuVar17 = (ushort ****)0x2;
    if ((ppppuVar36 == (ushort ****)0x1) ||
       (ppppuVar17 = ppppuVar36, ((ulong)ppppuVar36 & (long)ppppuVar36 - 1U) == 0)) {
      ppppuVar36 = pppppuVar26[4];
      bVar44 = ppppuVar17 < ppppuVar36;
      if (ppppuVar17 <= ppppuVar36) goto LAB_0d2827ec;
LAB_0d2827c7:
      func_0x0d298a40(pppppuVar26 + 3,ppppuVar17);
    }
    else {
      ppppuVar17 = (ushort ****)func_0x0412c3f0();
      ppppuVar36 = pppppuVar26[4];
      bVar44 = ppppuVar17 < ppppuVar36;
      if (ppppuVar36 < ppppuVar17) goto LAB_0d2827c7;
LAB_0d2827ec:
      if (bVar44) {
        fVar45 = (float)func_0x0eee3ab0((float)pppppuVar26[6] / *(float *)(pppppuVar26 + 7));
        ppppuVar18 = (ushort ****)
                     ((long)(fVar45 - _DAT_01198778) & (long)fVar45 >> 0x3f | (long)fVar45);
        if ((ppppuVar36 < (ushort ****)0x3) ||
           (uVar28 = (long)ppppuVar36 - ((ulong)ppppuVar36 >> 1 & 0x5555555555555555),
           uVar28 = (uVar28 >> 2 & 0x3333333333333333) + (uVar28 & 0x3333333333333333),
           1 < (byte)(((uVar28 >> 4) + uVar28 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          ppppuVar18 = (ushort ****)func_0x0412c3f0(ppppuVar18);
        }
        else if ((ushort ****)0x1 < ppppuVar18) {
          lVar15 = 0x3f;
          if ((long)ppppuVar18 - 1U != 0) {
            for (; (long)ppppuVar18 - 1U >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          ppppuVar18 = (ushort ****)(1L << (-((byte)lVar15 ^ 0x3f) & 0x3f));
        }
        if (ppppuVar17 <= ppppuVar18) {
          ppppuVar17 = ppppuVar18;
        }
        if (ppppuVar17 < ppppuVar36) goto LAB_0d2827c7;
      }
    }
    pppppuVar26 = *param_1;
    ppppuVar17 = pppppuVar26[8];
    ppppuVar36 = pppppuVar26[9];
    pppppuVar31 = pppppuVar26;
    if (ppppuVar17 != ppppuVar36) {
      do {
        pppuVar37 = ppppuVar36[-3];
        if (pppuVar37 != (ushort ***)0x0) {
          ppppuVar36[-2] = pppuVar37;
          func_0x0412a280(pppuVar37,(long)ppppuVar36[-1] - (long)pppuVar37);
        }
        ppppuVar36 = ppppuVar36 + -3;
      } while (ppppuVar36 != ppppuVar17);
      pppppuVar31 = *param_1;
    }
    pppppuVar26[9] = ppppuVar17;
    ppppuVar17 = *pppppuVar31;
    ppppuVar36 = pppppuVar31[1];
    if (ppppuVar17 == ppppuVar36) {
      pppppuVar31[1] = ppppuVar17;
      ppppuVar17 = pppppuVar31[6];
    }
    else {
      do {
        if (((ulong)ppppuVar36[-3] & 1) != 0) {
          func_0x0412a280(ppppuVar36[-1],(ulong)ppppuVar36[-3] & 0xfffffffffffffffe);
        }
        ppppuVar36 = ppppuVar36 + -3;
      } while (ppppuVar36 != ppppuVar17);
      pppppuVar26 = *param_1;
      pppppuVar31[1] = ppppuVar17;
      ppppuVar17 = pppppuVar26[6];
      pppppuVar31 = pppppuVar26;
    }
    if (ppppuVar17 != (ushort ****)0x0) {
      ppppuVar17 = pppppuVar31[5];
      while (ppppuVar17 != (ushort ****)0x0) {
        ppppuVar36 = (ushort ****)*ppppuVar17;
        func_0x0412a280(ppppuVar17,0x28);
        ppppuVar17 = ppppuVar36;
      }
      pppppuVar31[5] = (ushort ****)0x0;
      if (pppppuVar31[4] != (ushort ****)0x0) {
        func_0x0eee2dd0(pppppuVar31[3],0,(long)pppppuVar31[4] << 3);
      }
      pppppuVar31[6] = (ushort ****)0x0;
      pppppuVar31 = *param_1;
    }
    ppppppuStack_118 = (ushort ******)0x0;
    ppppppuStack_110 = (ushort ******)0x0;
    ppppppuStack_108 = (ushort ******)0x0;
    ppppppuVar22 = (ushort ******)param_1[2];
    ppppppuVar29 = (ushort ******)param_1[3];
    ppppppuVar34 = param_1;
    pppppuStack_50 = pppppuVar31;
    if ((long)ppppppuVar29 - (long)ppppppuVar22 == 0) goto LAB_0d282aa9;
    lVar15 = (long)ppppppuVar29 - (long)ppppppuVar22 >> 3;
    ppppppuVar29 = (ushort ******)(lVar15 * 0x2e8ba2e8ba2e8ba3);
    if (ppppppuVar29 < (ushort ******)0x38e38e38e38e38f) {
      ppppppuStack_88 = (ushort ******)&ppppppuStack_118;
      pppppuVar26 = (ushort *****)(lVar15 * 0x1745d1745d1745d8);
      ppppppuVar19 = (ushort ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pppppuVar26);
      if (ppppppuVar19 == (ushort ******)0x0) goto LAB_0d2843b6;
LAB_0d282a5c:
      ppppppuStack_90 = ppppppuVar19 + (long)ppppppuVar29 * 9;
      auStack_a8 = (undefined1  [8])ppppppuVar19;
      ppppppuStack_a0 = ppppppuVar19;
      ppppppuStack_98 = ppppppuVar19;
      func_0x0d2987b0(&ppppppuStack_118,auStack_a8);
      func_0x0d298960(auStack_a8);
      ppppppuVar22 = (ushort ******)ppppppuVar34[2];
      ppppppuVar29 = (ushort ******)ppppppuVar34[3];
LAB_0d282aa9:
      if (ppppppuVar22 == ppppppuVar29) {
        ppppppuStack_d8 = (ushort ******)0x0;
        ppppppuStack_d0 = (ushort ******)0x0;
        ppppppuStack_c8 = (ushort ******)0x0;
        if (ppppppuStack_118 != ppppppuStack_110) goto LAB_0d2833f8;
      }
      else {
        do {
          ppppppuStack_e0 = ppppppuVar29;
          bVar44 = (*(byte *)(ppppppuVar22 + 1) & 1) != 0;
          pppppuVar26 = (ushort *****)((long)ppppppuVar22 + 9);
          if (bVar44) {
            pppppuVar26 = ppppppuVar22[3];
          }
          pppppuVar31 = (ushort *****)(ulong)(*(byte *)(ppppppuVar22 + 1) >> 1);
          if (bVar44) {
            pppppuVar31 = ppppppuVar22[2];
          }
          uVar13 = func_0x0d284bf0(&pppppuStack_50,pppppuVar26,pppppuVar31);
          pppppuStack_60 = (ushort *****)CONCAT62(pppppuStack_60._2_6_,uVar13);
          uVar28 = (ulong)uVar13;
          ppppuVar36 = (*ppppppuVar34)[8];
          ppppuVar17 = ppppuVar36 + uVar28 * 3;
          ppppppuVar29 = (ushort ******)
                         (((long)ppppppuVar22[6] - (long)ppppppuVar22[5] >> 3) * 0x3333333333333334
                         + ((long)ppppppuVar22[9] - (long)ppppppuVar22[8] >> 3) *
                           -0x5555555555555555);
          pppuVar37 = ppppuVar36[uVar28 * 3];
          pppuVar6 = ppppuVar36[uVar28 * 3 + 2];
          ppppppuStack_f0 = ppppppuVar22;
          if ((ushort ******)((long)pppuVar6 - (long)pppuVar37 >> 1) < ppppppuVar29) {
            if ((long)ppppppuVar29 < 0) goto LAB_0d284406;
            pppuVar43 = ppppuVar17[1];
            pppuVar20 = (ushort ***)
                        (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)ppppppuVar29 * 2);
            if (pppuVar20 == (ushort ***)0x0) {
              FUN_0eec74c0((long)ppppppuVar29 * 2,0);
            }
            ppppppuVar29 = (ushort ******)((long)pppuVar20 + (long)ppppppuVar29 * 2);
            func_0x0eee2f00(pppuVar20,pppuVar37,(long)pppuVar43 - (long)pppuVar37);
            ppppppuVar22 = ppppppuStack_f0;
            *ppppuVar17 = pppuVar20;
            ppppuVar17[1] = (ushort ***)((long)pppuVar20 + ((long)pppuVar43 - (long)pppuVar37));
            ppppuVar17[2] = (ushort ***)ppppppuVar29;
            if (pppuVar37 != (ushort ***)0x0) {
              func_0x0412a280(pppuVar37,(long)pppuVar6 - (long)pppuVar37);
            }
          }
          ppppppuVar19 = (ushort ******)ppppppuVar22[8];
          ppppppuStack_e8 = (ushort ******)ppppppuVar22[9];
          if (ppppppuVar19 != ppppppuStack_e8) {
            do {
              bVar44 = (*(byte *)ppppppuVar19 & 1) != 0;
              pppppuVar26 = (ushort *****)((long)ppppppuVar19 + 1);
              if (bVar44) {
                pppppuVar26 = ppppppuVar19[2];
              }
              ppppppuVar34 = (ushort ******)(ulong)(*(byte *)ppppppuVar19 >> 1);
              if (bVar44) {
                ppppppuVar34 = (ushort ******)ppppppuVar19[1];
              }
              if ((ushort ******)0xfffffffffffffff7 < ppppppuVar34) goto LAB_0d2843b1;
              ppppppuVar29 = (ushort ******)param_1[1];
              if (ppppppuVar34 < (ushort ******)0x17) {
                auStack_a8[0] = (char)ppppppuVar34 * '\x02';
                ppppppuVar22 = (ushort ******)(auStack_a8 + 1);
                if (ppppppuVar34 != (ushort ******)0x0) goto LAB_0d282d14;
              }
              else {
                uVar28 = ((ulong)ppppppuVar34 | 7) + 1;
                if (((ulong)ppppppuVar34 | 7) == 0x17) {
                  uVar28 = 0x1a;
                }
                ppppppuVar22 = (ushort ******)
                               (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
                if (ppppppuVar22 == (ushort ******)0x0) {
                  FUN_0eec74c0(uVar28,0);
                }
                auStack_a8 = (undefined1  [8])(uVar28 | 1);
                ppppppuStack_a0 = ppppppuVar34;
                ppppppuStack_98 = ppppppuVar22;
LAB_0d282d14:
                func_0x0eee2f00(ppppppuVar22,pppppuVar26,ppppppuVar34);
              }
              *(byte *)((long)ppppppuVar22 + (long)ppppppuVar34) = 0;
              ppppppuVar34 = (ushort ******)((ulong)auStack_a8 >> 1 & 0x7f);
              ppppppuVar22 = (ushort ******)(auStack_a8 + 1);
              if (((ulong)auStack_a8 & 1) != 0) {
                ppppppuVar34 = ppppppuStack_a0;
                ppppppuVar22 = ppppppuStack_98;
              }
              uVar28 = FUN_04883620(&ppppppuStack_d8,ppppppuVar22,ppppppuVar34);
              auVar12 = auStack_a8;
              ppppuVar36 = (*ppppppuVar29)
                           [((ulong)((long)ppppppuVar29[1] - (long)*ppppppuVar29) >> 3) - 1 & uVar28
                           ];
              if (ppppuVar36 != (ushort ****)0xffffffffffffffff) {
                ppppppuVar22 = ppppppuStack_98;
                ppppppuVar34 = ppppppuStack_a0;
                if (((ulong)auStack_a8 & 1) == 0) {
                  ppppppuVar22 = (ushort ******)(auStack_a8 + 1);
                  ppppppuVar34 = (ushort ******)((ulong)auStack_a8 >> 1 & 0x7f);
                }
                pppppuVar26 = ppppppuVar29[3];
                do {
                  bVar3 = *(byte *)(pppppuVar26 + (long)ppppuVar36 * 5 + 1);
                  if ((bVar3 & 1) == 0) {
                    ppppppuVar25 = (ushort ******)(ulong)(bVar3 >> 1);
                  }
                  else {
                    ppppppuVar25 = (ushort ******)pppppuVar26[(long)ppppuVar36 * 5 + 2];
                  }
                  pppppuVar31 = pppppuVar26 + (long)ppppuVar36 * 5;
                  if (ppppppuVar25 == ppppppuVar34) {
                    if ((bVar3 & 1) == 0) {
                      ppppuVar36 = (ushort ****)((long)pppppuVar31 + 9);
                    }
                    else {
                      ppppuVar36 = pppppuVar31[3];
                    }
                    iVar14 = func_0x0eee3000(ppppuVar36,ppppppuVar22,ppppppuVar34);
                    if (iVar14 == 0) goto joined_r0x0d282f79;
                  }
                  ppppuVar36 = *pppppuVar31;
                } while (ppppuVar36 != (ushort ****)0xffffffffffffffff);
              }
              pppppuVar31 = ppppppuVar29[4];
joined_r0x0d282f79:
              if (((ulong)auVar12 & 1) != 0) {
                func_0x0412a280(ppppppuStack_98,(ulong)auStack_a8 & 0xfffffffffffffffe);
              }
              if ((pppppuVar31 != ppppppuVar29[4]) &&
                 (uVar13 = *(ushort *)(pppppuVar31 + 4), uVar13 != 0xffff)) {
                pppuVar37 = ppppuVar17[1];
                if (ppppuVar17[2] <= pppuVar37) {
                  pppuVar6 = *ppppuVar17;
                  lVar27 = (long)pppuVar37 - (long)pppuVar6;
                  lVar15 = lVar27 >> 1;
                  if (lVar15 < -1) {
                    func_0x0d298c20();
                  }
                  else {
                    pppppuStack_58 = (ushort *****)CONCAT62(pppppuStack_58._2_6_,uVar13);
                    uVar39 = (long)ppppuVar17[2] - (long)pppuVar6;
                    uVar28 = lVar15 + 1U;
                    if (lVar15 + 1U < uVar39) {
                      uVar28 = uVar39;
                    }
                    uVar30 = 0x7fffffffffffffff;
                    if (uVar39 < 0x7ffffffffffffffe) {
                      uVar30 = uVar28;
                    }
                    if (-1 < (long)uVar30) {
                      pppppuStack_f8 = (ushort *****)(uVar30 * 2);
                      lVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
                      if (lVar21 == 0) {
                        FUN_0eec74c0(pppppuStack_f8,0);
                      }
                      pppppuStack_f8 = (ushort *****)(lVar21 + uVar30 * 2);
                      *(undefined2 *)(lVar21 + lVar27) = pppppuStack_58._0_2_;
                      ppppppuVar29 = (ushort ******)(lVar21 + lVar27 + 2);
                      pppuVar37 = (ushort ***)(lVar21 + lVar27 + lVar15 * -2);
                      func_0x0eee2f00(pppuVar37,pppuVar6,lVar27);
                      *ppppuVar17 = pppuVar37;
                      ppppuVar17[1] = (ushort ***)ppppppuVar29;
                      ppppuVar17[2] = (ushort ***)pppppuStack_f8;
                      if (pppuVar6 != (ushort ***)0x0) {
                        func_0x0412a280(pppuVar6,uVar39);
                      }
                      goto LAB_0d282c63;
                    }
                  }
                  func_0x04882eb0();
                  goto LAB_0d2843fc;
                }
                *(ushort *)pppuVar37 = uVar13;
                ppppppuVar29 = (ushort ******)((long)pppuVar37 + 2);
LAB_0d282c63:
                ppppuVar17[1] = (ushort ***)ppppppuVar29;
              }
              ppppppuVar19 = ppppppuVar19 + 3;
            } while (ppppppuVar19 != ppppppuStack_e8);
          }
          ppppppuVar22 = ppppppuStack_f0;
          auStack_a8._0_2_ = (ushort)pppppuStack_60;
          ppppppuStack_90 = (ushort ******)0x0;
          ppppppuStack_88 = (ushort ******)0x0;
          ppppppuStack_a0 = (ushort ******)0x0;
          ppppppuStack_98 = (ushort ******)0x0;
          uStack_80 = 0;
          if (&ppppppuStack_a0 != (ushort *******)ppppppuStack_f0) {
            if (((ulong)ppppppuStack_f0[1] & 1) == 0) {
              ppppppuStack_88 = (ushort ******)ppppppuStack_f0[3];
              ppppppuStack_98 = (ushort ******)ppppppuStack_f0[1];
              ppppppuStack_90 = (ushort ******)ppppppuStack_f0[2];
            }
            else {
              FUN_04885070(&ppppppuStack_98,ppppppuStack_f0[3],ppppppuStack_f0[2]);
            }
          }
          ppppppuStack_a0 = (ushort ******)*ppppppuVar22;
          uVar8 = *(undefined4 *)(ppppppuVar22 + 5);
          uVar9 = *(undefined4 *)((long)ppppppuVar22 + 0x2c);
          uStack_78 = ppppppuVar22[5];
          uVar10 = *(undefined4 *)(ppppppuVar22 + 6);
          uVar11 = *(undefined4 *)((long)ppppppuVar22 + 0x34);
          uStack_70 = ppppppuVar22[6];
          pppppuStack_68 = ppppppuVar22[7];
          ppppppuVar22[5] = (ushort *****)0x0;
          ppppppuVar22[6] = (ushort *****)0x0;
          ppppppuVar22[7] = (ushort *****)0x0;
          if (ppppppuStack_110 < ppppppuStack_108) {
            *(undefined2 *)ppppppuStack_110 = auStack_a8._0_2_;
            ppppppuStack_110[3] = (ushort *****)0x0;
            ppppppuStack_110[4] = (ushort *****)0x0;
            ppppppuStack_110[1] = (ushort *****)0x0;
            ppppppuStack_110[2] = (ushort *****)0x0;
            ppppppuStack_110[5] = (ushort *****)0x0;
            ppppppuStack_110[4] = (ushort *****)ppppppuStack_88;
            ppppppuStack_110[2] = (ushort *****)ppppppuStack_98;
            ppppppuStack_110[3] = (ushort *****)ppppppuStack_90;
            ppppppuStack_98 = (ushort ******)((ulong)ppppppuStack_98 & 0xffffffffffff0000);
            ppppppuStack_110[1] = (ushort *****)ppppppuStack_a0;
            ppppppuStack_110[6] = (ushort *****)0x0;
            ppppppuStack_110[7] = (ushort *****)0x0;
            ppppppuStack_110[8] = (ushort *****)0x0;
            *(undefined4 *)(ppppppuStack_110 + 6) = uVar8;
            *(undefined4 *)((long)ppppppuStack_110 + 0x34) = uVar9;
            *(undefined4 *)(ppppppuStack_110 + 7) = uVar10;
            *(undefined4 *)((long)ppppppuStack_110 + 0x3c) = uVar11;
            ppppppuStack_110[8] = pppppuStack_68;
            uStack_78 = (ushort *****)0x0;
            uStack_70 = (ushort *****)0x0;
            pppppuStack_68 = (ushort *****)0x0;
            ppppppuStack_110 = ppppppuStack_110 + 9;
          }
          else {
            lVar15 = (long)ppppppuStack_110 - (long)ppppppuStack_118;
            uVar28 = (lVar15 >> 3) * -0x71c71c71c71c71c7 + 1;
            if (0x38e38e38e38e38e < uVar28) goto LAB_0d28440b;
            lVar27 = (long)ppppppuStack_108 - (long)ppppppuStack_118 >> 3;
            uVar39 = lVar27 * 0x1c71c71c71c71c72;
            if (uVar28 < uVar39) {
              uVar28 = uVar39;
            }
            if (0x1c71c71c71c71c6 < (ulong)(lVar27 * -0x71c71c71c71c71c7)) {
              uVar28 = 0x38e38e38e38e38e;
            }
            ppppppuStack_b8 = (ushort ******)&ppppppuStack_118;
            if (uVar28 == 0) {
              ppppppuVar22 = (ushort ******)0x0;
            }
            else {
              if (0x38e38e38e38e38e < uVar28) goto LAB_0d284410;
              ppppppuVar22 = (ushort ******)
                             (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 0x48);
              if (ppppppuVar22 == (ushort ******)0x0) {
                FUN_0eec74c0(uVar28 * 0x48,0);
                ppppppuVar22 = (ushort ******)0x0;
              }
            }
            ppppppuStack_d0 = (ushort ******)((long)ppppppuVar22 + lVar15);
            ppppppuStack_c0 = ppppppuVar22 + uVar28 * 9;
            *(undefined2 *)((long)ppppppuVar22 + lVar15) = auStack_a8._0_2_;
            pbVar1 = (byte *)((long)ppppppuVar22 + lVar15 + 0x18);
            pbVar1[0] = 0;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pbVar1[4] = 0;
            pbVar1[5] = 0;
            pbVar1[6] = 0;
            pbVar1[7] = 0;
            pbVar1[8] = 0;
            pbVar1[9] = 0;
            pbVar1[10] = 0;
            pbVar1[0xb] = 0;
            pbVar1[0xc] = 0;
            pbVar1[0xd] = 0;
            pbVar1[0xe] = 0;
            pbVar1[0xf] = 0;
            pbVar1 = (byte *)((long)ppppppuVar22 + lVar15 + 8);
            pbVar1[0] = 0;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pbVar1[4] = 0;
            pbVar1[5] = 0;
            pbVar1[6] = 0;
            pbVar1[7] = 0;
            pbVar1[8] = 0;
            pbVar1[9] = 0;
            pbVar1[10] = 0;
            pbVar1[0xb] = 0;
            pbVar1[0xc] = 0;
            pbVar1[0xd] = 0;
            pbVar1[0xe] = 0;
            pbVar1[0xf] = 0;
            pbVar1 = (byte *)((long)ppppppuVar22 + lVar15 + 0x28);
            pbVar1[0] = 0;
            pbVar1[1] = 0;
            pbVar1[2] = 0;
            pbVar1[3] = 0;
            pbVar1[4] = 0;
            pbVar1[5] = 0;
            pbVar1[6] = 0;
            pbVar1[7] = 0;
            *(ushort *******)((long)ppppppuVar22 + lVar15 + 0x20) = ppppppuStack_88;
            pbVar1 = (byte *)((long)ppppppuVar22 + lVar15 + 0x10);
            *(ushort *******)pbVar1 = ppppppuStack_98;
            *(ushort *******)(pbVar1 + 8) = ppppppuStack_90;
            ppppppuStack_98 = (ushort ******)((ulong)ppppppuStack_98 & 0xffffffffffff0000);
            *(ushort *******)((long)ppppppuVar22 + lVar15 + 8) = ppppppuStack_a0;
            pbVar1 = (byte *)((long)ppppppuVar22 + lVar15 + 0x30);
            *(undefined4 *)pbVar1 = (undefined4)uStack_78;
            *(undefined4 *)(pbVar1 + 4) = uStack_78._4_4_;
            *(undefined4 *)(pbVar1 + 8) = (undefined4)uStack_70;
            *(undefined4 *)(pbVar1 + 0xc) = uStack_70._4_4_;
            *(ushort ******)((long)ppppppuVar22 + lVar15 + 0x40) = pppppuStack_68;
            uStack_78 = (ushort *****)0x0;
            uStack_70 = (ushort *****)0x0;
            pppppuStack_68 = (ushort *****)0x0;
            ppppppuStack_c8 = (ushort ******)((long)ppppppuVar22 + lVar15 + 0x48);
            ppppppuStack_d8 = ppppppuVar22;
            func_0x0d2987b0(&ppppppuStack_118,&ppppppuStack_d8);
            ppppppuVar29 = ppppppuStack_110;
            func_0x0d298960(&ppppppuStack_d8);
            pppppuVar31 = uStack_78;
            ppppppuVar22 = ppppppuStack_f0;
            ppppppuStack_110 = ppppppuVar29;
            pppppuVar26 = uStack_70;
            if (uStack_78 != (ushort *****)0x0) {
              for (; pppppuVar31 != pppppuVar26; pppppuVar26 = pppppuVar26 + -5) {
                if (((ulong)pppppuVar26[-4] & 1) != 0) {
                  func_0x0412a280(pppppuVar26[-2],(ulong)pppppuVar26[-4] & 0xfffffffffffffffe);
                }
              }
              uStack_70 = pppppuVar31;
              func_0x0412a280(uStack_78,(long)pppppuStack_68 - (long)uStack_78);
              ppppppuVar22 = ppppppuStack_f0;
            }
          }
          if (((ulong)ppppppuStack_98 & 1) != 0) {
            func_0x0412a280(ppppppuStack_88,(ulong)ppppppuStack_98 & 0xfffffffffffffffe);
          }
          ppppppuVar22 = ppppppuVar22 + 0xb;
          ppppppuVar34 = param_1;
          ppppppuVar29 = ppppppuStack_e0;
        } while (ppppppuVar22 != ppppppuStack_e0);
        ppppppuStack_d8 = (ushort ******)0x0;
        ppppppuStack_d0 = (ushort ******)0x0;
        ppppppuStack_c8 = (ushort ******)0x0;
        if ((long)param_1[3] - (long)param_1[2] != 0) {
          lVar15 = (long)param_1[3] - (long)param_1[2] >> 3;
          if (0x38e38e38e38e38e < (ulong)(lVar15 * 0x2e8ba2e8ba2e8ba3)) goto LAB_0d284424;
          ppppppuStack_88 = (ushort ******)&ppppppuStack_d8;
          ppppppuVar22 = (ushort ******)
                         (**(code **)(_DAT_0f5463b0 + 0x10))
                                   (&DAT_0f5463b0,lVar15 * 0x1745d1745d1745d8);
          if (ppppppuVar22 == (ushort ******)0x0) {
            FUN_0eec74c0(lVar15 * 0x1745d1745d1745d8,0);
          }
          ppppppuStack_90 = ppppppuVar22 + lVar15 * 0x2e8ba2e8ba2e8bb;
          auStack_a8 = (undefined1  [8])ppppppuVar22;
          ppppppuStack_a0 = ppppppuVar22;
          ppppppuStack_98 = ppppppuVar22;
          func_0x0d2987b0(&ppppppuStack_d8,auStack_a8);
          func_0x0d298960(auStack_a8);
        }
        if (ppppppuStack_118 != ppppppuStack_110) {
LAB_0d2833f8:
          do {
            if ((long)ppppppuStack_110 - (long)ppppppuStack_118 == 0) {
              ppppppuVar22 = ppppppuStack_d8;
              ppppppuVar29 = ppppppuStack_d0;
              if (ppppppuStack_d8 != ppppppuStack_d0) goto LAB_0d2839c3;
            }
            else {
              uVar28 = ((long)ppppppuStack_110 - (long)ppppppuStack_118 >> 3) * -0x71c71c71c71c71c7
                       - 1;
              ppppppuVar22 = ppppppuStack_118;
              ppppppuVar29 = ppppppuStack_110;
              do {
                ppppppuVar19 = ppppppuStack_d0;
                if (ppppppuVar22[uVar28 * 9 + 6] == ppppppuVar22[uVar28 * 9 + 7]) {
                  ppppppuVar22 = ppppppuVar22 + uVar28 * 9;
                  if (ppppppuStack_d0 < ppppppuStack_c8) {
                    *(ushort *)ppppppuStack_d0 = *(ushort *)ppppppuVar22;
                    ppppppuStack_d0[1] = (ushort *****)0x0;
                    ppppppuStack_d0[2] = (ushort *****)0x0;
                    ppppppuStack_d0[3] = (ushort *****)0x0;
                    ppppppuStack_d0[4] = (ushort *****)0x0;
                    ppppppuStack_d0[5] = (ushort *****)0x0;
                    if (ppppppuStack_d0 != ppppppuVar22) {
                      if (((ulong)ppppppuVar22[2] & 1) == 0) {
                        ppppppuStack_d0[4] = ppppppuVar22[4];
                        pppppuVar26 = ppppppuVar22[3];
                        ppppppuStack_d0[2] = ppppppuVar22[2];
                        ppppppuStack_d0[3] = pppppuVar26;
                      }
                      else {
                        FUN_04885070(ppppppuStack_d0 + 2,ppppppuVar22[4],ppppppuVar22[3]);
                      }
                    }
                    ppppppuVar19[1] = ppppppuVar22[1];
                    ppppppuVar19[6] = (ushort *****)0x0;
                    ppppppuVar19[7] = (ushort *****)0x0;
                    ppppppuVar19[8] = (ushort *****)0x0;
                    func_0x050af1d0(ppppppuVar19 + 6,ppppppuVar22[6],ppppppuVar22[7],
                                    ((long)ppppppuVar22[7] - (long)ppppppuVar22[6] >> 3) *
                                    -0x3333333333333333);
                    ppppppuVar19 = ppppppuVar19 + 9;
                  }
                  else {
                    lVar15 = (long)ppppppuStack_d0 - (long)ppppppuStack_d8;
                    uVar39 = (lVar15 >> 3) * -0x71c71c71c71c71c7 + 1;
                    if (0x38e38e38e38e38e < uVar39) goto LAB_0d2843fc;
                    lVar27 = (long)ppppppuStack_c8 - (long)ppppppuStack_d8 >> 3;
                    uVar30 = lVar27 * 0x1c71c71c71c71c72;
                    if (uVar39 < uVar30) {
                      uVar39 = uVar30;
                    }
                    if (0x1c71c71c71c71c6 < (ulong)(lVar27 * -0x71c71c71c71c71c7)) {
                      uVar39 = 0x38e38e38e38e38e;
                    }
                    ppppppuStack_88 = (ushort ******)&ppppppuStack_d8;
                    if (uVar39 == 0) {
                      ppppppuVar29 = (ushort ******)0x0;
                    }
                    else {
                      if (0x38e38e38e38e38e < uVar39) goto LAB_0d284401;
                      ppppppuVar29 = (ushort ******)
                                     (**(code **)(_DAT_0f5463b0 + 0x10))
                                               (&DAT_0f5463b0,uVar39 * 0x48);
                      if (ppppppuVar29 == (ushort ******)0x0) {
                        FUN_0eec74c0(uVar39 * 0x48,0);
                        ppppppuVar29 = (ushort ******)0x0;
                      }
                    }
                    ppppppuVar34 = (ushort ******)((long)ppppppuVar29 + lVar15);
                    ppppppuStack_90 = ppppppuVar29 + uVar39 * 9;
                    *(ushort *)((long)ppppppuVar29 + lVar15) = *(ushort *)ppppppuVar22;
                    pbVar1 = (byte *)((long)ppppppuVar29 + lVar15 + 0x10);
                    pbVar2 = (byte *)((long)ppppppuVar29 + lVar15 + 8);
                    pbVar2[0] = 0;
                    pbVar2[1] = 0;
                    pbVar2[2] = 0;
                    pbVar2[3] = 0;
                    pbVar2[4] = 0;
                    pbVar2[5] = 0;
                    pbVar2[6] = 0;
                    pbVar2[7] = 0;
                    pbVar2[8] = 0;
                    pbVar2[9] = 0;
                    pbVar2[10] = 0;
                    pbVar2[0xb] = 0;
                    pbVar2[0xc] = 0;
                    pbVar2[0xd] = 0;
                    pbVar2[0xe] = 0;
                    pbVar2[0xf] = 0;
                    pbVar2 = (byte *)((long)ppppppuVar29 + lVar15 + 0x18);
                    pbVar2[0] = 0;
                    pbVar2[1] = 0;
                    pbVar2[2] = 0;
                    pbVar2[3] = 0;
                    pbVar2[4] = 0;
                    pbVar2[5] = 0;
                    pbVar2[6] = 0;
                    pbVar2[7] = 0;
                    pbVar2[8] = 0;
                    pbVar2[9] = 0;
                    pbVar2[10] = 0;
                    pbVar2[0xb] = 0;
                    pbVar2[0xc] = 0;
                    pbVar2[0xd] = 0;
                    pbVar2[0xe] = 0;
                    pbVar2[0xf] = 0;
                    pbVar2 = (byte *)((long)ppppppuVar29 + lVar15 + 0x28);
                    pbVar2[0] = 0;
                    pbVar2[1] = 0;
                    pbVar2[2] = 0;
                    pbVar2[3] = 0;
                    pbVar2[4] = 0;
                    pbVar2[5] = 0;
                    pbVar2[6] = 0;
                    pbVar2[7] = 0;
                    auStack_a8 = (undefined1  [8])ppppppuVar29;
                    ppppppuStack_a0 = ppppppuVar34;
                    ppppppuStack_98 = ppppppuVar34;
                    if (ppppppuVar34 != ppppppuVar22) {
                      if (((ulong)ppppppuVar22[2] & 1) == 0) {
                        *(ushort ******)(pbVar1 + 0x10) = ppppppuVar22[4];
                        pppppuVar26 = ppppppuVar22[3];
                        *(ushort ******)pbVar1 = ppppppuVar22[2];
                        *(ushort ******)(pbVar1 + 8) = pppppuVar26;
                      }
                      else {
                        FUN_04885070(pbVar1,ppppppuVar22[4],ppppppuVar22[3]);
                      }
                    }
                    ppppppuVar34[1] = ppppppuVar22[1];
                    ppppppuVar34[6] = (ushort *****)0x0;
                    ppppppuVar34[7] = (ushort *****)0x0;
                    ppppppuVar34[8] = (ushort *****)0x0;
                    func_0x050af1d0(ppppppuVar34 + 6,ppppppuVar22[6],ppppppuVar22[7],
                                    ((long)ppppppuVar22[7] - (long)ppppppuVar22[6] >> 3) *
                                    -0x3333333333333333);
                    ppppppuStack_98 = ppppppuStack_98 + 9;
                    func_0x0d2987b0(&ppppppuStack_d8,auStack_a8);
                    ppppppuVar19 = ppppppuStack_d0;
                    func_0x0d298960(auStack_a8);
                  }
                  ppppppuVar34 = ppppppuStack_110;
                  ppppppuVar29 = ppppppuStack_118;
                  uVar13 = *(ushort *)(ppppppuStack_118 + uVar28 * 9);
                  ppppppuStack_f0 = (ushort ******)ppppppuStack_118[uVar28 * 9 + 2];
                  pppppuStack_f8 = ppppppuStack_118[uVar28 * 9 + 3];
                  pppppuVar26 = ppppppuStack_118[uVar28 * 9 + 4];
                  *(ushort *)(ppppppuStack_118 + uVar28 * 9 + 2) = 0;
                  pppppuStack_58 = ppppppuStack_118[uVar28 * 9 + 1];
                  pppppuVar35 = ppppppuStack_118[uVar28 * 9 + 6];
                  pppppuVar40 = (ppppppuStack_118 + uVar28 * 9 + 6)[1];
                  ppppppuStack_e8 = (ushort ******)ppppppuStack_118[uVar28 * 9 + 8];
                  ppppppuStack_118[uVar28 * 9 + 6] = (ushort *****)0x0;
                  (ppppppuStack_118 + uVar28 * 9 + 6)[1] = (ushort *****)0x0;
                  ppppppuStack_118[uVar28 * 9 + 8] = (ushort *****)0x0;
                  *(ushort *)(ppppppuStack_118 + uVar28 * 9) = *(ushort *)(ppppppuStack_110 + -9);
                  ppppppuStack_118[uVar28 * 9 + 4] = ppppppuStack_110[-5];
                  uVar8 = *(undefined4 *)((long)ppppppuStack_110 + -0x34);
                  uVar9 = *(undefined4 *)(ppppppuStack_110 + -6);
                  uVar10 = *(undefined4 *)((long)ppppppuStack_110 + -0x2c);
                  ppppppuVar22 = ppppppuStack_118 + uVar28 * 9 + 2;
                  *(undefined4 *)ppppppuVar22 = *(undefined4 *)(ppppppuStack_110 + -7);
                  *(undefined4 *)((long)ppppppuVar22 + 4) = uVar8;
                  *(undefined4 *)(ppppppuVar22 + 1) = uVar9;
                  *(undefined4 *)((long)ppppppuVar22 + 0xc) = uVar10;
                  *(ushort *)(ppppppuStack_110 + -7) = 0;
                  ppppppuStack_118[uVar28 * 9 + 1] = ppppppuStack_110[-8];
                  ppppppuStack_118[uVar28 * 9 + 5] = (ushort *****)0x0;
                  pppppuVar31 = ppppppuStack_118[uVar28 * 9 + 6];
                  ppppppuStack_d0 = ppppppuVar19;
                  if (pppppuVar31 != (ushort *****)0x0) {
                    pppppuStack_60 = (ushort *****)CONCAT62(pppppuStack_60._2_6_,uVar13);
                    ppppppuVar22 = ppppppuStack_118 + uVar28 * 9 + 6;
                    pppppuVar33 = ppppppuStack_118[uVar28 * 9 + 7];
                    pppppuVar38 = pppppuVar31;
                    if (pppppuVar31 != pppppuVar33) {
                      do {
                        if (((ulong)pppppuVar33[-4] & 1) != 0) {
                          func_0x0412a280(pppppuVar33[-2],
                                          (ulong)pppppuVar33[-4] & 0xfffffffffffffffe);
                        }
                        pppppuVar33 = pppppuVar33 + -5;
                      } while (pppppuVar33 != pppppuVar31);
                      pppppuVar38 = *ppppppuVar22;
                    }
                    ppppppuVar29[uVar28 * 9 + 7] = pppppuVar31;
                    func_0x0412a280(pppppuVar38,
                                    (long)ppppppuVar29[uVar28 * 9 + 8] - (long)pppppuVar38);
                    *ppppppuVar22 = (ushort *****)0x0;
                    ppppppuVar29[uVar28 * 9 + 7] = (ushort *****)0x0;
                    ppppppuVar29[uVar28 * 9 + 8] = (ushort *****)0x0;
                    uVar13 = (ushort)pppppuStack_60;
                  }
                  uVar8 = *(undefined4 *)((long)ppppppuVar34 + -0x14);
                  uVar9 = *(undefined4 *)(ppppppuVar34 + -2);
                  uVar10 = *(undefined4 *)((long)ppppppuVar34 + -0xc);
                  *(undefined4 *)(ppppppuVar29 + uVar28 * 9 + 6) =
                       *(undefined4 *)(ppppppuVar34 + -3);
                  *(undefined4 *)((long)ppppppuVar29 + (uVar28 * 0x24 + 0x1a) * 2) = uVar8;
                  *(undefined4 *)(ppppppuVar29 + uVar28 * 9 + 7) = uVar9;
                  *(undefined4 *)((long)ppppppuVar29 + (uVar28 * 0x24 + 0x1e) * 2) = uVar10;
                  ppppppuVar29[uVar28 * 9 + 8] = ppppppuVar34[-1];
                  ppppppuVar34[-3] = (ushort *****)0x0;
                  ppppppuVar34[-2] = (ushort *****)0x0;
                  ppppppuVar34[-1] = (ushort *****)0x0;
                  *(ushort *)(ppppppuVar34 + -9) = uVar13;
                  if (((ulong)ppppppuVar34[-7] & 1) == 0) {
                    ppppppuVar34[-7] = (ushort *****)ppppppuStack_f0;
                    ppppppuVar34[-6] = pppppuStack_f8;
                    ppppppuVar34[-5] = pppppuVar26;
                    ppppppuVar34[-8] = pppppuStack_58;
                    ppppppuVar34[-4] = (ushort *****)0x0;
                  }
                  else {
                    func_0x0412a280(ppppppuVar34[-5],(ulong)ppppppuVar34[-7] & 0xfffffffffffffffe);
                    pppppuVar31 = ppppppuVar34[-3];
                    ppppppuVar34[-7] = (ushort *****)ppppppuStack_f0;
                    ppppppuVar34[-6] = pppppuStack_f8;
                    ppppppuVar34[-5] = pppppuVar26;
                    ppppppuVar34[-8] = pppppuStack_58;
                    ppppppuVar34[-4] = (ushort *****)0x0;
                    if (pppppuVar31 != (ushort *****)0x0) {
                      pppppuVar26 = ppppppuVar34[-2];
                      pppppuVar33 = pppppuVar31;
                      if (pppppuVar31 != pppppuVar26) {
                        do {
                          if (((ulong)pppppuVar26[-4] & 1) != 0) {
                            func_0x0412a280(pppppuVar26[-2],
                                            (ulong)pppppuVar26[-4] & 0xfffffffffffffffe);
                          }
                          pppppuVar26 = pppppuVar26 + -5;
                        } while (pppppuVar26 != pppppuVar31);
                        pppppuVar33 = ppppppuVar34[-3];
                      }
                      ppppppuVar34[-2] = pppppuVar31;
                      func_0x0412a280(pppppuVar33,(long)ppppppuVar34[-1] - (long)pppppuVar33);
                    }
                  }
                  ppppppuVar29 = ppppppuStack_110;
                  uStack_128 = SUB84(pppppuVar35,0);
                  uStack_124 = (undefined4)((ulong)pppppuVar35 >> 0x20);
                  uStack_120 = SUB84(pppppuVar40,0);
                  uStack_11c = (undefined4)((ulong)pppppuVar40 >> 0x20);
                  *(undefined4 *)(ppppppuVar34 + -3) = uStack_128;
                  *(undefined4 *)((long)ppppppuVar34 + -0x14) = uStack_124;
                  *(undefined4 *)(ppppppuVar34 + -2) = uStack_120;
                  *(undefined4 *)((long)ppppppuVar34 + -0xc) = uStack_11c;
                  ppppppuVar34[-1] = (ushort *****)ppppppuStack_e8;
                  pppppuVar26 = ppppppuStack_110[-3];
                  if (pppppuVar26 != (ushort *****)0x0) {
                    pppppuVar31 = ppppppuStack_110[-2];
                    pppppuVar35 = pppppuVar26;
                    if (pppppuVar26 != pppppuVar31) {
                      do {
                        if (((ulong)pppppuVar31[-4] & 1) != 0) {
                          func_0x0412a280(pppppuVar31[-2],
                                          (ulong)pppppuVar31[-4] & 0xfffffffffffffffe);
                        }
                        pppppuVar31 = pppppuVar31 + -5;
                      } while (pppppuVar31 != pppppuVar26);
                      pppppuVar35 = ppppppuVar29[-3];
                    }
                    ppppppuVar29[-2] = pppppuVar26;
                    func_0x0412a280(pppppuVar35,(long)ppppppuVar29[-1] - (long)pppppuVar35);
                  }
                  if (((ulong)ppppppuVar29[-7] & 1) != 0) {
                    func_0x0412a280(ppppppuVar29[-5],(ulong)ppppppuVar29[-7] & 0xfffffffffffffffe);
                  }
                  ppppppuVar29 = ppppppuVar29 + -9;
                  ppppppuVar22 = ppppppuStack_118;
                  ppppppuVar34 = param_1;
                  ppppppuStack_110 = ppppppuVar29;
                }
                uVar28 = uVar28 - 1;
              } while (uVar28 < (ulong)(((long)ppppppuVar29 - (long)ppppppuVar22 >> 3) *
                                       -0x71c71c71c71c71c7));
              if (ppppppuVar22 != ppppppuVar29 && ppppppuStack_d8 == ppppppuStack_d0) break;
              ppppppuVar22 = ppppppuStack_d8;
              ppppppuVar29 = ppppppuStack_d0;
              if (ppppppuStack_d8 != ppppppuStack_d0) {
LAB_0d2839c3:
                ppppppuStack_48 = ppppppuStack_d0;
                ppppppuVar25 = ppppppuStack_d8;
                do {
                  pppppuStack_f8 = (ushort *****)((long)ppppppuVar25 + 0x11);
                  bVar44 = (*(byte *)(ppppppuVar25 + 2) & 1) == 0;
                  pppppuVar26 = ppppppuVar25[4];
                  if (bVar44) {
                    pppppuVar26 = pppppuStack_f8;
                  }
                  pppppuVar31 = (ushort *****)(ulong)(*(byte *)(ppppppuVar25 + 2) >> 1);
                  if (!bVar44) {
                    pppppuVar31 = ppppppuVar25[3];
                  }
                  func_0x0d284bf0(&pppppuStack_50,pppppuVar26,pppppuVar31);
                  ppppppuStack_38 = ppppppuStack_110;
                  if (ppppppuStack_118 != ppppppuStack_110) {
                    ppppppuVar22 = ppppppuVar25 + 1;
                    puStack_40 = (undefined8 *)
                                 ((ulong)((uint)*(ushort *)ppppppuVar25 * 0x18) +
                                 (long)(*ppppppuVar34)[8]);
                    ppppppuVar29 = ppppppuStack_118;
                    do {
                      ppppppuVar42 = (ushort ******)ppppppuVar29[6];
                      ppppppuVar32 = (ushort ******)ppppppuVar29[7];
                      ppppppuVar19 = ppppppuVar42;
                      ppppppuStack_e0 = ppppppuVar29;
                      if (ppppppuVar42 == ppppppuVar32) {
LAB_0d283b70:
                        if (ppppppuVar19 != ppppppuVar32) {
                          pppppuVar26 = (ushort *****)*puStack_40;
                          pppppuVar31 = (ushort *****)puStack_40[1];
                          if (pppppuVar26 != pppppuVar31) {
                            ppppppuVar29 = (ushort ******)
                                           ((ulong)((uint)*(ushort *)ppppppuStack_e0 * 0x18) +
                                           (long)(*ppppppuVar34)[8]);
                            ppppppuVar42 = (ushort ******)ppppppuVar29[1];
                            ppppppuStack_f0 = ppppppuVar29;
                            pppppuStack_60 = pppppuVar31;
                            do {
                              if (ppppppuVar29[2] <= ppppppuVar42) {
                                ppppppuVar32 = (ushort ******)*ppppppuVar29;
                                ppppppuVar34 = (ushort ******)
                                               ((long)ppppppuVar42 - (long)ppppppuVar32);
                                lVar15 = (long)ppppppuVar34 >> 1;
                                if (lVar15 < -1) {
                                  func_0x0d298c20();
                                }
                                else {
                                  pppppuVar35 = (ushort *****)
                                                ((long)ppppppuVar29[2] - (long)ppppppuVar32);
                                  pppppuVar31 = pppppuVar35;
                                  if (pppppuVar35 <= (ushort *****)(lVar15 + 1U)) {
                                    pppppuVar31 = (ushort *****)(lVar15 + 1U);
                                  }
                                  pppppuVar40 = (ushort *****)0x7fffffffffffffff;
                                  if (pppppuVar35 < (ushort *****)0x7ffffffffffffffe) {
                                    pppppuVar40 = pppppuVar31;
                                  }
                                  if (-1 < (long)pppppuVar40) {
                                    ppppppuStack_e8 = ppppppuVar32;
                                    pppppuStack_58 = pppppuVar35;
                                    lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                                       (&DAT_0f5463b0,(long)pppppuVar40 * 2);
                                    if (lVar27 == 0) {
                                      FUN_0eec74c0((long)pppppuVar40 * 2,0);
                                    }
                                    ppppppuVar19 = ppppppuStack_e8;
                                    *(ushort *)(lVar27 + (long)ppppppuVar34) =
                                         *(ushort *)pppppuVar26;
                                    ppppppuVar42 = (ushort ******)((long)ppppppuVar34 + lVar27 + 2);
                                    pppppuVar31 = (ushort *****)
                                                  ((long)ppppppuVar34 + lVar15 * -2 + lVar27);
                                    func_0x0eee2f00(pppppuVar31,ppppppuStack_e8,ppppppuVar34);
                                    ppppppuVar29 = ppppppuStack_f0;
                                    *ppppppuStack_f0 = pppppuVar31;
                                    ppppppuStack_f0[1] = (ushort *****)ppppppuVar42;
                                    ppppppuStack_f0[2] =
                                         (ushort *****)(lVar27 + (long)pppppuVar40 * 2);
                                    pppppuVar31 = pppppuStack_60;
                                    if (ppppppuVar19 != (ushort ******)0x0) {
                                      func_0x0412a280(ppppppuVar19,pppppuStack_58);
                                      pppppuVar31 = pppppuStack_60;
                                    }
                                    goto LAB_0d283bcf;
                                  }
                                }
                                func_0x04882eb0();
                                goto LAB_0d2843b1;
                              }
                              *(ushort *)ppppppuVar42 = *(ushort *)pppppuVar26;
                              ppppppuVar42 = (ushort ******)((long)ppppppuVar42 + 2);
LAB_0d283bcf:
                              ppppppuVar29[1] = (ushort *****)ppppppuVar42;
                              pppppuVar26 = (ushort *****)((long)pppppuVar26 + 2);
                              ppppppuVar19 = ppppppuVar42;
                            } while (pppppuVar26 != pppppuVar31);
                            ppppppuVar42 = (ushort ******)ppppppuStack_e0[6];
                            ppppppuVar32 = (ushort ******)ppppppuStack_e0[7];
                            ppppppuVar34 = param_1;
                          }
                          ppppppuVar29 = ppppppuVar42;
                          ppppppuVar19 = ppppppuVar42;
                          if ((long)ppppppuVar32 - (long)ppppppuVar42 == 0) {
LAB_0d283dff:
                            ppppppuVar42 = ppppppuStack_e0;
                            ppppppuVar41 = ppppppuVar29 + 5;
                            if (ppppppuVar41 != ppppppuVar32 && ppppppuVar29 != ppppppuVar32) {
                              do {
                                if (*ppppppuVar41 == *ppppppuVar22) {
                                  if (((ushort ******)ppppppuVar41[4] != ppppppuVar22) ||
                                     (ppppppuVar41 != (ushort ******)ppppppuVar25[5])) {
                                    bVar3 = *(byte *)(ppppppuVar41 + 1);
                                    if ((bVar3 & 1) == 0) {
                                      pppppuVar26 = (ushort *****)(ulong)(bVar3 >> 1);
                                      uVar28 = (ulong)*(byte *)(ppppppuVar25 + 2);
                                      if ((*(byte *)(ppppppuVar25 + 2) & 1) == 0) goto LAB_0d283e9c;
LAB_0d283eb8:
                                      if (pppppuVar26 != ppppppuVar25[3]) goto LAB_0d283f00;
                                    }
                                    else {
                                      pppppuVar26 = ppppppuVar41[2];
                                      uVar28 = (ulong)*(byte *)(ppppppuVar25 + 2);
                                      if ((*(byte *)(ppppppuVar25 + 2) & 1) != 0) goto LAB_0d283eb8;
LAB_0d283e9c:
                                      if (pppppuVar26 != (ushort *****)(uVar28 >> 1))
                                      goto LAB_0d283f00;
                                    }
                                    if ((bVar3 & 1) == 0) {
                                      pppppuVar26 = (ushort *****)((long)ppppppuVar41 + 9);
                                    }
                                    else {
                                      pppppuVar26 = ppppppuVar41[3];
                                    }
                                    pppppuVar31 = pppppuStack_f8;
                                    if ((uVar28 & 1) != 0) {
                                      pppppuVar31 = ppppppuVar25[4];
                                    }
                                    iVar14 = func_0x0eee3000(pppppuVar26,pppppuVar31);
                                    if (iVar14 != 0) goto LAB_0d283f00;
                                    ppppppuVar41[4] = (ushort *****)ppppppuVar22;
                                    ppppppuVar25[5] = (ushort *****)ppppppuVar41;
                                  }
                                }
                                else {
LAB_0d283f00:
                                  ppppppuVar41[4] = (ushort *****)0x0;
                                  if (((ulong)ppppppuVar19[1] & 1) != 0) {
                                    func_0x0412a280(ppppppuVar19[3],
                                                    (ulong)ppppppuVar19[1] & 0xfffffffffffffffe);
                                  }
                                  ppppppuVar19[3] = ppppppuVar41[3];
                                  uVar8 = *(undefined4 *)((long)ppppppuVar41 + 0xc);
                                  uVar9 = *(undefined4 *)(ppppppuVar41 + 2);
                                  uVar10 = *(undefined4 *)((long)ppppppuVar41 + 0x14);
                                  *(undefined4 *)(ppppppuVar19 + 1) =
                                       *(undefined4 *)(ppppppuVar41 + 1);
                                  *(undefined4 *)((long)ppppppuVar19 + 0xc) = uVar8;
                                  *(undefined4 *)(ppppppuVar19 + 2) = uVar9;
                                  *(undefined4 *)((long)ppppppuVar19 + 0x14) = uVar10;
                                  *(ushort *)(ppppppuVar41 + 1) = 0;
                                  *ppppppuVar19 = *ppppppuVar41;
                                  ppppppuVar19[4] = (ushort *****)0x0;
                                  ppppppuVar19 = ppppppuVar19 + 5;
                                }
                                ppppppuVar41 = ppppppuVar41 + 5;
                              } while (ppppppuVar41 != ppppppuVar32);
                              ppppppuVar32 = (ushort ******)ppppppuVar42[7];
                            }
                          }
                          else {
                            pppppuVar26 = *ppppppuVar22;
                            do {
                              if (*ppppppuVar29 == pppppuVar26) {
                                if (((ushort ******)ppppppuVar29[4] == ppppppuVar22) &&
                                   (ppppppuVar34 = param_1,
                                   ppppppuVar29 == (ushort ******)ppppppuVar25[5]))
                                goto LAB_0d283dff;
                                bVar3 = *(byte *)(ppppppuVar29 + 1);
                                if ((bVar3 & 1) == 0) {
                                  pppppuVar31 = (ushort *****)(ulong)(bVar3 >> 1);
                                  uVar28 = (ulong)*(byte *)(ppppppuVar25 + 2);
                                  if ((*(byte *)(ppppppuVar25 + 2) & 1) == 0) goto LAB_0d283d6f;
LAB_0d283d91:
                                  if (pppppuVar31 != ppppppuVar25[3]) goto LAB_0d283d1d;
                                }
                                else {
                                  pppppuVar31 = ppppppuVar29[2];
                                  uVar28 = (ulong)*(byte *)(ppppppuVar25 + 2);
                                  if ((*(byte *)(ppppppuVar25 + 2) & 1) != 0) goto LAB_0d283d91;
LAB_0d283d6f:
                                  if (pppppuVar31 != (ushort *****)(uVar28 >> 1)) goto LAB_0d283d1d;
                                }
                                if ((bVar3 & 1) == 0) {
                                  pppppuVar31 = (ushort *****)((long)ppppppuVar29 + 9);
                                }
                                else {
                                  pppppuVar31 = ppppppuVar29[3];
                                }
                                pppppuVar35 = pppppuStack_f8;
                                if ((uVar28 & 1) != 0) {
                                  pppppuVar35 = ppppppuVar25[4];
                                }
                                iVar14 = func_0x0eee3000(pppppuVar31,pppppuVar35);
                                if (iVar14 == 0) {
                                  ppppppuVar29[4] = (ushort *****)ppppppuVar22;
                                  ppppppuVar25[5] = (ushort *****)ppppppuVar29;
                                  ppppppuVar34 = param_1;
                                  goto LAB_0d283dff;
                                }
                              }
LAB_0d283d1d:
                              ppppppuVar29[4] = (ushort *****)0x0;
                              ppppppuVar29 = ppppppuVar29 + 5;
                              ppppppuVar19 = ppppppuVar19 + 5;
                            } while (ppppppuVar29 != ppppppuVar32);
                            ppppppuVar19 = (ushort ******)
                                           (((long)ppppppuVar32 - (long)ppppppuVar42) +
                                           (long)ppppppuVar42);
                            ppppppuVar34 = param_1;
                          }
                          if (ppppppuVar19 != ppppppuVar32) {
                            for (; ppppppuVar19 != ppppppuVar32; ppppppuVar32 = ppppppuVar32 + -5) {
                              if (((ulong)ppppppuVar32[-4] & 1) != 0) {
                                func_0x0412a280(ppppppuVar32[-2],
                                                (ulong)ppppppuVar32[-4] & 0xfffffffffffffffe);
                              }
                            }
                            ppppppuStack_e0[7] = (ushort *****)ppppppuVar19;
                            ppppppuVar34 = param_1;
                          }
                        }
                      }
                      else {
                        pppppuVar26 = *ppppppuVar22;
                        do {
                          if (*ppppppuVar19 == pppppuVar26) {
                            if (((ushort ******)ppppppuVar19[4] == ppppppuVar22) &&
                               (ppppppuVar19 == (ushort ******)ppppppuVar25[5])) goto LAB_0d283b70;
                            bVar3 = *(byte *)(ppppppuVar19 + 1);
                            if ((bVar3 & 1) == 0) {
                              pppppuVar31 = (ushort *****)(ulong)(bVar3 >> 1);
                              uVar28 = (ulong)*(byte *)(ppppppuVar25 + 2);
                              if ((*(byte *)(ppppppuVar25 + 2) & 1) == 0) goto LAB_0d283aff;
LAB_0d283b1e:
                              if (pppppuVar31 != ppppppuVar25[3]) goto LAB_0d283abd;
                            }
                            else {
                              pppppuVar31 = ppppppuVar19[2];
                              uVar28 = (ulong)*(byte *)(ppppppuVar25 + 2);
                              if ((*(byte *)(ppppppuVar25 + 2) & 1) != 0) goto LAB_0d283b1e;
LAB_0d283aff:
                              if (pppppuVar31 != (ushort *****)(uVar28 >> 1)) goto LAB_0d283abd;
                            }
                            if ((bVar3 & 1) == 0) {
                              pppppuVar31 = (ushort *****)((long)ppppppuVar19 + 9);
                            }
                            else {
                              pppppuVar31 = ppppppuVar19[3];
                            }
                            pppppuVar35 = pppppuStack_f8;
                            if ((uVar28 & 1) != 0) {
                              pppppuVar35 = ppppppuVar25[4];
                            }
                            iVar14 = func_0x0eee3000(pppppuVar31,pppppuVar35);
                            if (iVar14 == 0) {
                              ppppppuVar19[4] = (ushort *****)ppppppuVar22;
                              ppppppuVar25[5] = (ushort *****)ppppppuVar19;
                              goto LAB_0d283b70;
                            }
                          }
LAB_0d283abd:
                          ppppppuVar19[4] = (ushort *****)0x0;
                          ppppppuVar19 = ppppppuVar19 + 5;
                        } while (ppppppuVar19 != ppppppuVar32);
                      }
                      ppppppuVar29 = ppppppuStack_e0 + 9;
                    } while (ppppppuVar29 != ppppppuStack_38);
                  }
                  ppppppuVar25 = ppppppuVar25 + 9;
                  ppppppuVar22 = ppppppuStack_d8;
                  ppppppuVar29 = ppppppuStack_d0;
                } while (ppppppuVar25 != ppppppuStack_48);
              }
            }
            for (; ppppppuVar22 != ppppppuVar29; ppppppuVar29 = ppppppuVar29 + -9) {
              pppppuVar26 = ppppppuVar29[-3];
              if (pppppuVar26 != (ushort *****)0x0) {
                pppppuVar31 = ppppppuVar29[-2];
                pppppuVar35 = pppppuVar26;
                if (pppppuVar26 != pppppuVar31) {
                  do {
                    if (((ulong)pppppuVar31[-4] & 1) != 0) {
                      func_0x0412a280(pppppuVar31[-2],(ulong)pppppuVar31[-4] & 0xfffffffffffffffe);
                    }
                    pppppuVar31 = pppppuVar31 + -5;
                  } while (pppppuVar31 != pppppuVar26);
                  pppppuVar35 = ppppppuVar29[-3];
                }
                ppppppuVar29[-2] = pppppuVar26;
                func_0x0412a280(pppppuVar35,(long)ppppppuVar29[-1] - (long)pppppuVar35);
              }
              if (((ulong)ppppppuVar29[-7] & 1) != 0) {
                func_0x0412a280(ppppppuVar29[-5],(ulong)ppppppuVar29[-7] & 0xfffffffffffffffe);
              }
            }
            ppppppuStack_d0 = ppppppuVar22;
          } while (ppppppuStack_118 != ppppppuStack_110);
        }
      }
      ppppuVar17 = (*ppppppuVar34)[8];
      ppppuVar36 = (*ppppppuVar34)[9];
      if (ppppuVar17 == ppppuVar36) goto LAB_0d2841ef;
      goto LAB_0d284114;
    }
    goto LAB_0d284415;
  }
  if (uVar28 < 0xaaaaaaaaaaaaaab) {
    ppppuVar18 = pppppuVar26[9];
    ppppuVar16 = (ushort ****)
                 (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar27 * 0x5d1745d1745d1748);
    if (ppppuVar16 == (ushort ****)0x0) {
      FUN_0eec74c0(lVar27 * 0x5d1745d1745d1748,0);
    }
    ppppppuStack_e8 = (ushort ******)(ppppuVar16 + lVar27 * 0xba2e8ba2e8ba2e9);
    func_0x0eee2f00(ppppuVar16,ppppuVar17);
    pppppuVar26[8] = ppppuVar16;
    pppppuVar26[9] = (ushort ****)((long)ppppuVar16 + ((long)ppppuVar18 - (long)ppppuVar17));
    pppppuVar26[10] = (ushort ****)ppppppuStack_e8;
    if (ppppuVar17 != (ushort ****)0x0) {
      func_0x0412a280(ppppuVar17,(long)ppppuVar36 - (long)ppppuVar17);
      pppppuVar26 = *param_1;
      uVar28 = ((long)param_1[3] - (long)param_1[2] >> 3) * 0x2e8ba2e8ba2e8ba3;
    }
    goto LAB_0d282679;
  }
  goto LAB_0d28441a;
LAB_0d2843b1:
  func_0x04882e30();
LAB_0d2843b6:
  FUN_0eec74c0(pppppuVar26,0);
  goto LAB_0d282a5c;
LAB_0d284114:
  pppuVar37 = *ppppuVar17;
  pppuVar6 = ppppuVar17[1];
  uVar28 = (long)pppuVar6 - (long)pppuVar37 >> 1;
  lVar15 = 0x3f;
  if (uVar28 != 0) {
    for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar24 = ((uint)lVar15 ^ 0x3f) * 2 ^ 0x7e;
  if (pppuVar6 == pppuVar37) {
    uVar24 = 0;
  }
  func_0x0d2a29e0(pppuVar37,pppuVar6,uVar24,1);
  pppuVar37 = *ppppuVar17;
  pppuVar6 = ppppuVar17[1];
  if (pppuVar37 == pppuVar6) {
LAB_0d284180:
    pppuVar43 = pppuVar37;
    if (pppuVar43 != pppuVar6) goto LAB_0d284185;
  }
  else {
    do {
      pppuVar43 = pppuVar37;
      pppuVar37 = (ushort ***)((long)pppuVar43 + 2);
      if (pppuVar37 == pppuVar6) goto LAB_0d284180;
    } while (*(short *)pppuVar43 != *(short *)pppuVar37);
LAB_0d284185:
    pppuVar37 = (ushort ***)((long)pppuVar43 + 4);
    if (pppuVar37 != pppuVar6) {
      sVar4 = *(short *)pppuVar43;
      do {
        sVar5 = *(short *)pppuVar37;
        if (sVar4 != sVar5) {
          *(short *)((long)pppuVar43 + 2) = sVar5;
          pppuVar43 = (ushort ***)((long)pppuVar43 + 2);
        }
        pppuVar37 = (ushort ***)((long)pppuVar37 + 2);
        sVar4 = sVar5;
      } while (pppuVar37 != pppuVar6);
    }
    if ((ushort ***)((long)pppuVar43 + 2) != pppuVar6) {
      ppppuVar17[1] = (ushort ***)((long)pppuVar43 + 2);
    }
  }
  ppppuVar17 = ppppuVar17 + 3;
  if (ppppuVar17 == ppppuVar36) {
LAB_0d2841ef:
    pppppuVar26 = ppppppuVar34[2];
    pppppuVar31 = ppppppuVar34[3];
    ppppppuVar22 = ppppppuStack_d8;
    while (ppppppuStack_d8 = ppppppuVar22, pppppuVar26 != pppppuVar31) {
      pppppuVar31 = pppppuVar31 + -0xb;
      func_0x0d284b20(pppppuVar31);
      ppppppuVar22 = ppppppuStack_d8;
    }
    ppppppuVar34[3] = pppppuVar26;
    ppppppuVar29 = ppppppuStack_d0;
    if (ppppppuVar22 != (ushort ******)0x0) {
      for (; ppppppuVar22 != ppppppuVar29; ppppppuVar29 = ppppppuVar29 + -9) {
        pppppuVar26 = ppppppuVar29[-3];
        if (pppppuVar26 != (ushort *****)0x0) {
          pppppuVar31 = ppppppuVar29[-2];
          pppppuVar35 = pppppuVar26;
          if (pppppuVar26 != pppppuVar31) {
            do {
              if (((ulong)pppppuVar31[-4] & 1) != 0) {
                func_0x0412a280(pppppuVar31[-2],(ulong)pppppuVar31[-4] & 0xfffffffffffffffe);
              }
              pppppuVar31 = pppppuVar31 + -5;
            } while (pppppuVar31 != pppppuVar26);
            pppppuVar35 = ppppppuVar29[-3];
          }
          ppppppuVar29[-2] = pppppuVar26;
          func_0x0412a280(pppppuVar35,(long)ppppppuVar29[-1] - (long)pppppuVar35);
        }
        if (((ulong)ppppppuVar29[-7] & 1) != 0) {
          func_0x0412a280(ppppppuVar29[-5],(ulong)ppppppuVar29[-7] & 0xfffffffffffffffe);
        }
      }
      ppppppuStack_d0 = ppppppuVar22;
      func_0x0412a280(ppppppuStack_d8,(long)ppppppuStack_c8 - (long)ppppppuStack_d8);
    }
    ppppppuVar29 = ppppppuStack_118;
    ppppppuVar22 = ppppppuStack_110;
    if (ppppppuStack_118 != (ushort ******)0x0) {
      for (; ppppppuVar29 != ppppppuVar22; ppppppuVar22 = ppppppuVar22 + -9) {
        pppppuVar26 = ppppppuVar22[-3];
        if (pppppuVar26 != (ushort *****)0x0) {
          pppppuVar31 = ppppppuVar22[-2];
          pppppuVar35 = pppppuVar26;
          if (pppppuVar26 != pppppuVar31) {
            do {
              if (((ulong)pppppuVar31[-4] & 1) != 0) {
                func_0x0412a280(pppppuVar31[-2],(ulong)pppppuVar31[-4] & 0xfffffffffffffffe);
              }
              pppppuVar31 = pppppuVar31 + -5;
            } while (pppppuVar31 != pppppuVar26);
            pppppuVar35 = ppppppuVar22[-3];
          }
          ppppppuVar22[-2] = pppppuVar26;
          func_0x0412a280(pppppuVar35,(long)ppppppuVar22[-1] - (long)pppppuVar35);
        }
        if (((ulong)ppppppuVar22[-7] & 1) != 0) {
          func_0x0412a280(ppppppuVar22[-5],(ulong)ppppppuVar22[-7] & 0xfffffffffffffffe);
        }
      }
      ppppppuStack_110 = ppppppuVar29;
      func_0x0412a280(ppppppuStack_118,(long)ppppppuStack_108 - (long)ppppppuStack_118);
    }
    return;
  }
  goto LAB_0d284114;
LAB_0d2843fc:
  func_0x0d2987a0();
LAB_0d284401:
  func_0x04882eb0();
LAB_0d284406:
  func_0x0d298c20();
LAB_0d28440b:
  func_0x0d2987a0();
LAB_0d284410:
  func_0x04882eb0();
LAB_0d284415:
  func_0x0d2987a0();
LAB_0d28441a:
  func_0x0d298790();
LAB_0d28441f:
  func_0x0488efe0();
LAB_0d284424:
  uVar23 = func_0x0d2987a0();
  ppppppuVar29 = ppppppuStack_d8;
  ppppppuVar22 = ppppppuStack_d0;
  if (ppppppuStack_d8 != (ushort ******)0x0) {
    for (; ppppppuVar29 != ppppppuVar22; ppppppuVar22 = ppppppuVar22 + -9) {
      pppppuVar26 = ppppppuVar22[-3];
      if (pppppuVar26 != (ushort *****)0x0) {
        pppppuVar31 = ppppppuVar22[-2];
        pppppuVar35 = pppppuVar26;
        if (pppppuVar26 != pppppuVar31) {
          do {
            if (((ulong)pppppuVar31[-4] & 1) != 0) {
              func_0x0412a280(pppppuVar31[-2],(ulong)pppppuVar31[-4] & 0xfffffffffffffffe);
            }
            pppppuVar31 = pppppuVar31 + -5;
          } while (pppppuVar31 != pppppuVar26);
          pppppuVar35 = ppppppuVar22[-3];
        }
        ppppppuVar22[-2] = pppppuVar26;
        func_0x0412a280(pppppuVar35,(long)ppppppuVar22[-1] - (long)pppppuVar35);
      }
      if (((ulong)ppppppuVar22[-7] & 1) != 0) {
        func_0x0412a280(ppppppuVar22[-5],(ulong)ppppppuVar22[-7] & 0xfffffffffffffffe);
      }
    }
    ppppppuStack_d0 = ppppppuVar29;
    func_0x0412a280(ppppppuStack_d8,(long)ppppppuStack_c8 - (long)ppppppuStack_d8);
  }
  ppppppuVar29 = ppppppuStack_118;
  ppppppuVar22 = ppppppuStack_110;
  if (ppppppuStack_118 != (ushort ******)0x0) {
    for (; ppppppuVar29 != ppppppuVar22; ppppppuVar22 = ppppppuVar22 + -9) {
      pppppuVar26 = ppppppuVar22[-3];
      if (pppppuVar26 != (ushort *****)0x0) {
        pppppuVar31 = ppppppuVar22[-2];
        pppppuVar35 = pppppuVar26;
        if (pppppuVar26 != pppppuVar31) {
          do {
            if (((ulong)pppppuVar31[-4] & 1) != 0) {
              func_0x0412a280(pppppuVar31[-2],(ulong)pppppuVar31[-4] & 0xfffffffffffffffe);
            }
            pppppuVar31 = pppppuVar31 + -5;
          } while (pppppuVar31 != pppppuVar26);
          pppppuVar35 = ppppppuVar22[-3];
        }
        ppppppuVar22[-2] = pppppuVar26;
        func_0x0412a280(pppppuVar35,(long)ppppppuVar22[-1] - (long)pppppuVar35);
      }
      if (((ulong)ppppppuVar22[-7] & 1) != 0) {
        func_0x0412a280(ppppppuVar22[-5],(ulong)ppppppuVar22[-7] & 0xfffffffffffffffe);
      }
    }
    ppppppuStack_110 = ppppppuVar29;
    func_0x0412a280(ppppppuStack_118,(long)ppppppuStack_108 - (long)ppppppuStack_118);
  }
  func_0x0eee2d70(uVar23);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


