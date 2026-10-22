/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6b373e0 (ELF vaddr 0x6a373e0)
 * Label: caller-of-callee
 * Body:  [[06b373e0, 06b37b2d] [06b37b30, 06b37b49] [06b37b50, 06b37b94] [06b37ba0, 06b37bd0] [06b37be0, 06b38197] [06b381a0, 06b38286]]
 * Ghidra: FUN_06b373e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06b373e0(undefined8 *param_1,byte ******param_2,byte ******param_3,byte ******param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte ****ppppbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  byte *******pppppppbVar11;
  byte ******ppppppbVar12;
  ulong uVar13;
  byte *******pppppppbVar14;
  byte *****pppppbVar15;
  undefined8 *puVar16;
  byte ******ppppppbVar17;
  undefined4 uVar18;
  undefined1 extraout_DL;
  long extraout_RDX;
  byte ******ppppppbVar19;
  byte ******ppppppbVar20;
  byte *****pppppbVar21;
  byte **ppbVar22;
  byte ******ppppppbVar23;
  ulong uVar24;
  byte *****pppppbVar25;
  byte ***pppbVar26;
  bool bVar27;
  float fVar28;
  byte ******ppppppbStack_138;
  byte ******ppppppbStack_130;
  byte ******ppppppbStack_128;
  byte ******ppppppbStack_120;
  byte *******pppppppbStack_118;
  byte ******ppppppbStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  byte ******ppppppbStack_d0;
  int iStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_ac;
  byte ******ppppppbStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long *plStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 *puStack_38;
  
  iVar8 = _DAT_0f5987c0;
  ppppppbVar23 = _DAT_0f5987b8;
  pppppbVar15 = param_2[6];
  ppppppbStack_138 = param_2;
  puStack_38 = param_1;
  if ((pppppbVar15 == (byte *****)0x0) ||
     (ppppppbVar20 = (byte ******)*pppppbVar15,
     ppppppbVar20 == (byte ******)0x0 || *(int *)(pppppbVar15 + 1) != *(int *)(param_2 + 7))) {
    ppppppbStack_d0 = _DAT_0f5987b8;
    iStack_c8 = _DAT_0f5987c0;
    uStack_c0 = (byte *******)CONCAT44(uRam000000000f5987cc,_DAT_0f5987c8);
    uStack_b8 = uRam000000000f5987d0;
    uStack_b4 = uRam000000000f5987d4;
    if (*_DAT_0f5987b8 != (byte *****)0x0 && *(int *)(_DAT_0f5987b8 + 1) == _DAT_0f5987c0) {
      func_0x0d8568b0(*_DAT_0f5987b8,uStack_c0);
    }
    if (*(int *)(ppppppbVar23 + 1) != iVar8) goto LAB_06b378e2;
    goto LAB_06b3746a;
  }
  ppppppbStack_110 = ppppppbVar20 + 2;
  ppppppbStack_a8 = (byte ******)((ulong)ppppppbStack_a8 & 0xffffffffffff0000);
  puStack_a0 = &UNK_06c87340;
  puStack_98 = &UNK_06c87530;
  plStack_68 = (long *)0x0;
  uStack_58 = 0;
  uStack_50 = 0x100000058;
  plStack_48 = (long *)0x0;
  pppppppbStack_118 = (byte *******)&UNK_0f082828;
  uStack_f8 = (byte *******)&pppppppbStack_118;
  func_0x065bdd40(&pppppppbStack_118,&uStack_88);
  if ((byte ********)uStack_f8 == &pppppppbStack_118) {
    lVar9 = 0x20;
LAB_06b37527:
    (**(code **)((long)*uStack_f8 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (uStack_f8 != (byte *******)0x0) goto LAB_06b37527;
  }
  pppppppbVar14 = (byte *******)func_0x0d856c70(ppppppbVar20,&ppppppbStack_a8);
  plVar7 = plStack_48;
  ppppppbStack_128 = (byte ******)CONCAT71(ppppppbStack_128._1_7_,extraout_DL);
  plStack_48 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (plStack_68 == (long *)&uStack_88) {
    lVar9 = 0x20;
LAB_06b3758f:
    (**(code **)(*plStack_68 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (plStack_68 != (long *)0x0) goto LAB_06b3758f;
  }
  if ((int)pppppppbVar14 == -1) goto LAB_06b377ee;
  ppppppbVar23 = ppppppbVar20 + 7;
  uStack_ac = 0xfbe46d69;
  ppppppbVar19 = ppppppbVar20 + 0xe;
  pppppbVar15 = ppppppbVar20[0xe] +
                ((int)((ulong)((long)ppppppbVar20[0xf] - (long)ppppppbVar20[0xe]) >> 3) - 1U &
                0xfbe46d69);
  do {
    ppppbVar3 = *pppppbVar15;
    ppppppbStack_130 = param_3;
    ppppppbStack_120 = param_4;
    if (ppppbVar3 == (byte ****)0xffffffffffffffff) goto LAB_06b3760f;
    pppppbVar15 = ppppppbVar20[0x11] + (long)ppppbVar3 * 4;
  } while (*(int *)(ppppppbVar20[0x11] + (long)ppppbVar3 * 4 + 1) != -0x41b9297);
  if (pppppbVar15 != ppppppbVar20[0x12]) {
    pppppppbVar11 = (byte *******)pppppbVar15[2];
    goto LAB_06b3775b;
  }
LAB_06b3760f:
  ppppppbVar17 = (byte ******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
  if (ppppppbVar17 == (byte ******)0x0) {
    func_0x0eec74c0(0x80,0);
  }
  ppppppbVar17[1] = (byte *****)0x0;
  ppppppbVar17[2] = (byte *****)0x0;
  *ppppppbVar17 = (byte *****)&UNK_0f0828a8;
  if (DAT_0f59f778 == '\0') goto LAB_06b3824c;
LAB_06b3764e:
  pppppppbStack_118 = (byte *******)(ppppppbVar17 + 3);
  ppppppbVar17[8] = (byte *****)0x0;
  ppppppbVar17[9] = (byte *****)0x0;
  ppppppbVar17[6] = (byte *****)0x0;
  ppppppbVar17[7] = (byte *****)0x0;
  ppppppbVar17[4] = (byte *****)0x0;
  ppppppbVar17[5] = (byte *****)0x0;
  ppppppbVar17[10] = (byte *****)&DAT_0f59f760;
  *(undefined1 *)(ppppppbVar17 + 0xb) = 1;
  ppppppbVar17[0xc] = (byte *****)0xffffffff;
  ppppppbVar17[3] = (byte *****)&UNK_0f0828f8;
  ppppppbVar17[0xd] = (byte *****)0x0;
  ppppppbVar17[0xe] = (byte *****)0x0;
  ppppppbVar17[0xf] = (byte *****)0x0;
  ppppppbStack_110 = ppppppbVar17;
  func_0x065bf170(ppppppbVar19,&uStack_ac,&pppppppbStack_118);
  puStack_98 = &UNK_065bf690;
  uStack_88 = 0x145ad657;
  pcStack_90 = (code *)0x0;
  uStack_84 = CONCAT31(uStack_84._1_3_,3);
  ppppppbStack_a8 = ppppppbVar23;
  (*(code *)(*pppppppbStack_118)[5])(pppppppbStack_118,&ppppppbStack_a8);
  if (pcStack_90 != (code *)0x0) {
    (*pcStack_90)(&ppppppbStack_a8);
  }
  ppppppbVar23 = ppppppbStack_110;
  pppppppbVar11 = pppppppbStack_118;
  if (ppppppbStack_110 != (byte ******)0x0) {
    LOCK();
    ppppppbVar19 = ppppppbStack_110 + 1;
    pppppbVar15 = *ppppppbVar19;
    *ppppppbVar19 = (byte *****)((long)*ppppppbVar19 + -1);
    UNLOCK();
    if (pppppbVar15 == (byte *****)0x0) {
      (*(code *)(*ppppppbStack_110)[2])(ppppppbStack_110);
      func_0x0412c2d0(ppppppbVar23);
    }
  }
LAB_06b3775b:
  func_0x0d8547a0(pppppppbVar11,pppppppbVar14,0,0);
  puVar16 = (undefined8 *)func_0x06c894b0(pppppppbVar11,extraout_RDX + -1);
  if (ppppppbStack_120 != (byte ******)0x0) {
    LOCK();
    ppppppbStack_120[2] = (byte *****)((long)ppppppbStack_120[2] + 1);
    UNLOCK();
  }
  *puVar16 = 0;
  *(undefined4 *)(puVar16 + 1) = 0;
  puVar16[2] = 0xffffffffffffff;
  *(undefined1 *)(puVar16 + 3) = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = ppppppbStack_130;
  puVar16[7] = ppppppbStack_120;
  if (ppppppbStack_120 == (byte ******)0x0) {
    puVar16[8] = ppppppbStack_138[6];
    *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(ppppppbStack_138 + 7);
    puVar16[10] = ppppppbStack_138;
    pppppbVar15 = ppppppbVar20[1];
    if (pppppbVar15 != (byte *****)0x0) goto LAB_06b377f7;
LAB_06b3781b:
    uVar18 = 0;
  }
  else {
    LOCK();
    ppppppbStack_120[2] = (byte *****)((long)ppppppbStack_120[2] + 1);
    UNLOCK();
    puVar16[8] = ppppppbStack_138[6];
    *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(ppppppbStack_138 + 7);
    puVar16[10] = ppppppbStack_138;
    func_0x0412c2d0();
LAB_06b377ee:
    pppppbVar15 = ppppppbVar20[1];
    if (pppppbVar15 == (byte *****)0x0) goto LAB_06b3781b;
LAB_06b377f7:
    uVar18 = *(undefined4 *)(pppppbVar15 + 1);
  }
  pppppbVar21 = ppppppbVar20[0xe] +
                ((int)((ulong)((long)ppppppbVar20[0xf] - (long)ppppppbVar20[0xe]) >> 3) - 1U &
                0xfbe46d69);
  do {
    ppppbVar3 = *pppppbVar21;
    if (ppppbVar3 == (byte ****)0xffffffffffffffff) {
      pppppbVar21 = ppppppbVar20[0x12];
      break;
    }
    pppppbVar21 = ppppppbVar20[0x11] + (long)ppppbVar3 * 4;
  } while (*(int *)(ppppppbVar20[0x11] + (long)ppppbVar3 * 4 + 1) != -0x41b9297);
  pbVar1 = pppppbVar21[2][1][(ulong)pppppppbVar14 >> 0xc & 0xfffff][(uint)pppppppbVar14 & 0xfff];
  ppbVar22 = pppppbVar21[2][10][(ulong)pbVar1 >> 7 & 0x1ffffff];
  uVar13 = (ulong)((uint)pbVar1 & 0x7f);
  ppbVar22[uVar13 * 0xb] = (byte *)pppppbVar15;
  *(undefined4 *)(ppbVar22 + uVar13 * 0xb + 1) = uVar18;
  ppbVar22[uVar13 * 0xb + 2] = (byte *)pppppppbVar14;
  *(byte *)(ppbVar22 + uVar13 * 0xb + 3) = (byte)ppppppbStack_128;
  ppppppbVar23 = (byte ******)ppppppbVar20[1];
  if (ppppppbVar23 == (byte ******)0x0) {
    iStack_c8 = 0;
  }
  else {
    iStack_c8 = *(int *)(ppppppbVar23 + 1);
  }
  uStack_b8 = CONCAT31(uStack_b8._1_3_,(byte)ppppppbStack_128);
  ppppppbStack_d0 = ppppppbVar23;
  uStack_c0 = pppppppbVar14;
  if (*(int *)(ppppppbVar23 + 1) == iStack_c8) {
LAB_06b3746a:
    pppppbVar15 = *ppppppbVar23;
  }
  else {
LAB_06b378e2:
    pppppbVar15 = (byte *****)0x0;
  }
  uVar10 = func_0x06c89720(pppppbVar15,uStack_c0,uStack_b8);
  func_0x06b38b70(&ppppppbStack_a8,uVar10);
  if ((char)ppppppbStack_a8 == '\0') {
    func_0x049e8590(&pppppppbStack_118,&puStack_a0);
  }
  else {
    lStack_e8 = 0;
    pcStack_e0 = (code *)0x0;
    uStack_f8 = (byte *******)0x0;
    uStack_f0 = 0;
    uStack_108 = 0;
    pcStack_100 = (code *)0x0;
    pppppppbStack_118 = (byte *******)0x0;
    ppppppbStack_110 = (byte ******)0x0;
    func_0x05d84ba0(&pppppppbStack_118);
  }
  uVar10 = uStack_f0;
  pppppppbVar11 = pppppppbStack_118;
  if (uStack_f8._4_1_ == '\x02') {
    pppppppbVar11 = (byte *******)&pppppppbStack_118;
  }
  if (pppppppbVar11 == (byte *******)0x0 || (int)uStack_f8 != -0x5db38b49) {
    if (lStack_e8 == 0) {
      (*pcStack_e0)(0,&pppppppbStack_118,0);
    }
    pppppppbVar14 = pppppppbStack_118;
    if (uStack_f8._4_1_ == '\x02') {
      pppppppbVar14 = (byte *******)&pppppppbStack_118;
    }
    pppppppbVar11 = (byte *******)FUN_0488e200(uVar10,lStack_e8,0xa24c74b7,pppppppbVar14);
  }
  if (pcStack_100 != (code *)0x0) {
    (*pcStack_100)(&pppppppbStack_118);
  }
  ppppppbStack_120 = (byte ******)((long)pppppppbVar11 + 1);
  bVar27 = (*(byte *)pppppppbVar11 & 1) == 0;
  ppppppbVar23 = pppppppbVar11[2];
  if (bVar27) {
    ppppppbVar23 = ppppppbStack_120;
  }
  ppppppbVar20 = (byte ******)(ulong)(*(byte *)pppppppbVar11 >> 1);
  if (!bVar27) {
    ppppppbVar20 = pppppppbVar11[1];
  }
  ppppppbVar12 = (byte ******)func_0x04883620(&pppppppbStack_118,ppppppbVar23,ppppppbVar20);
  ppppppbStack_130 = ppppppbStack_138 + 0xc;
  ppppppbVar23 = (byte ******)ppppppbStack_138[0xd];
  if (ppppppbVar23 != (byte ******)0x0) {
    uVar13 = (long)ppppppbVar23 - ((ulong)ppppppbVar23 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
    uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar13 >> 0x38 < 2) {
      ppppppbStack_128 = (byte ******)((long)ppppppbVar23 - 1U & (ulong)ppppppbVar12);
    }
    else {
      ppppppbStack_128 = ppppppbVar12;
      if (ppppppbVar23 <= ppppppbVar12) {
        if (((ulong)ppppppbVar12 | (ulong)ppppppbVar23) >> 0x20 == 0) {
          ppppppbStack_128 =
               (byte ******)
               (((ulong)ppppppbVar12 & 0xffffffff) % ((ulong)ppppppbVar23 & 0xffffffff));
        }
        else {
          ppppppbStack_128 = (byte ******)((ulong)ppppppbVar12 % (ulong)ppppppbVar23);
        }
      }
    }
    if (((*ppppppbStack_130)[(long)ppppppbStack_128] != (byte ****)0x0) &&
       (pppbVar26 = *(*ppppppbStack_130)[(long)ppppppbStack_128], pppbVar26 != (byte ***)0x0)) {
      if ((*(byte *)pppppppbVar11 & 1) == 0) {
        ppppppbVar20 = (byte ******)(ulong)(*(byte *)pppppppbVar11 >> 1);
      }
      else {
        ppppppbVar20 = pppppppbVar11[1];
        ppppppbStack_120 = pppppppbVar11[2];
      }
      if ((byte)(uVar13 >> 0x38) < 2) {
        do {
          if ((byte ******)pppbVar26[1] == ppppppbVar12) {
            bVar2 = *(byte *)(pppbVar26 + 2);
            if ((bVar2 & 1) == 0) {
              ppppppbVar19 = (byte ******)(ulong)(bVar2 >> 1);
            }
            else {
              ppppppbVar19 = (byte ******)pppbVar26[3];
            }
            if (ppppppbVar19 == ppppppbVar20) {
              if ((bVar2 & 1) == 0) {
                ppbVar22 = (byte **)((long)pppbVar26 + 0x11);
              }
              else {
                ppbVar22 = pppbVar26[4];
              }
              iVar8 = func_0x0eee3000(ppbVar22,ppppppbStack_120,ppppppbVar20);
              if (iVar8 == 0) goto LAB_06b38088;
            }
          }
          else if ((byte ******)((ulong)pppbVar26[1] & (long)ppppppbVar23 - 1U) != ppppppbStack_128)
          break;
          pppbVar26 = (byte ***)*pppbVar26;
        } while (pppbVar26 != (byte ***)0x0);
      }
      else {
        do {
          ppppppbVar19 = (byte ******)pppbVar26[1];
          if (ppppppbVar19 == ppppppbVar12) {
            bVar2 = *(byte *)(pppbVar26 + 2);
            if ((bVar2 & 1) == 0) {
              ppppppbVar19 = (byte ******)(ulong)(bVar2 >> 1);
            }
            else {
              ppppppbVar19 = (byte ******)pppbVar26[3];
            }
            if (ppppppbVar19 == ppppppbVar20) {
              if ((bVar2 & 1) == 0) {
                ppbVar22 = (byte **)((long)pppbVar26 + 0x11);
              }
              else {
                ppbVar22 = pppbVar26[4];
              }
              iVar8 = func_0x0eee3000(ppbVar22,ppppppbStack_120,ppppppbVar20);
              if (iVar8 == 0) goto LAB_06b38088;
            }
          }
          else {
            if (ppppppbVar23 <= ppppppbVar19) {
              if (((ulong)ppppppbVar19 | (ulong)ppppppbVar23) >> 0x20 == 0) {
                ppppppbVar19 = (byte ******)
                               (((ulong)ppppppbVar19 & 0xffffffff) %
                               ((ulong)ppppppbVar23 & 0xffffffff));
              }
              else {
                ppppppbVar19 = (byte ******)((ulong)ppppppbVar19 % (ulong)ppppppbVar23);
              }
            }
            if (ppppppbVar19 != ppppppbStack_128) break;
          }
          pppbVar26 = (byte ***)*pppbVar26;
        } while (pppbVar26 != (byte ***)0x0);
      }
    }
  }
  pppppppbVar14 = (byte *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
  if (pppppppbVar14 == (byte *******)0x0) {
    func_0x0eec74c0(0x48,0);
  }
  pppppppbStack_118 = pppppppbVar14;
  ppppppbStack_110 = ppppppbStack_130;
  uStack_108 = 0;
  *pppppppbVar14 = (byte ******)0x0;
  pppppppbVar14[1] = ppppppbVar12;
  if (((ulong)*pppppppbVar11 & 1) == 0) {
    pppppppbVar14[4] = pppppppbVar11[2];
    ppppppbVar20 = pppppppbVar11[1];
    pppppppbVar14[2] = *pppppppbVar11;
    pppppppbVar14[3] = ppppppbVar20;
  }
  else {
    func_0x0412e5e0(pppppppbVar14 + 2,pppppppbVar11[2],pppppppbVar11[1]);
  }
  pppppppbVar14[5] = ppppppbStack_d0;
  *(int *)(pppppppbVar14 + 6) = iStack_c8;
  *(undefined4 *)(pppppppbVar14 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((long)pppppppbVar14 + 0x3c) = uStack_c0._4_4_;
  *(undefined4 *)(pppppppbVar14 + 8) = uStack_b8;
  *(undefined4 *)((long)pppppppbVar14 + 0x44) = uStack_b4;
  if ((ppppppbStack_d0 != (byte ******)0x0) &&
     (*ppppppbStack_d0 != (byte *****)0x0 && *(int *)(ppppppbStack_d0 + 1) == iStack_c8)) {
    func_0x0d8568b0(*ppppppbStack_d0,pppppppbVar14[7]);
  }
  uStack_108 = CONCAT71(uStack_108._1_7_,1);
  if ((long)ppppppbVar23 < 0) {
    fVar28 = *(float *)(ppppppbStack_138 + 0x10);
  }
  else {
    fVar28 = *(float *)(ppppppbStack_138 + 0x10);
  }
  if ((ppppppbVar23 != (byte ******)0x0) &&
     ((float)((long)ppppppbStack_138[0xf] + 1) <= (float)ppppppbVar23 * fVar28)) goto LAB_06b38065;
  uVar13 = 1;
  if ((byte ******)0x2 < ppppppbVar23) {
    uVar13 = (ulong)(((ulong)ppppppbVar23 & (long)ppppppbVar23 - 1U) != 0);
  }
  ppppppbVar20 = (byte ******)(uVar13 | (long)ppppppbVar23 * 2);
  fVar28 = (float)func_0x0eee3ab0((float)((long)ppppppbStack_138[0xf] + 1) / fVar28);
  ppppppbVar23 = (byte ******)((long)(fVar28 - _DAT_01198778) & (long)fVar28 >> 0x3f | (long)fVar28)
  ;
  if (ppppppbVar23 < ppppppbVar20) {
    ppppppbVar23 = ppppppbVar20;
  }
  ppppppbVar19 = (byte ******)0x2;
  if ((ppppppbVar23 == (byte ******)0x1) ||
     (ppppppbVar19 = ppppppbVar23, ((ulong)ppppppbVar23 & (ulong)((long)ppppppbVar23 - 1U)) == 0)) {
    ppppppbVar20 = (byte ******)ppppppbStack_138[0xd];
    bVar27 = ppppppbVar19 < ppppppbVar20;
    ppppppbVar23 = ppppppbVar19;
    if (ppppppbVar19 <= ppppppbVar20) goto LAB_06b37ec0;
  }
  else {
    ppppppbVar19 = (byte ******)FUN_0412c3f0();
    ppppppbVar20 = (byte ******)ppppppbStack_138[0xd];
    bVar27 = ppppppbVar19 < ppppppbVar20;
    ppppppbVar23 = ppppppbVar19;
    if (ppppppbVar19 <= ppppppbVar20) {
LAB_06b37ec0:
      if (!bVar27) goto LAB_06b38024;
      fVar28 = (float)func_0x0eee3ab0((float)ppppppbStack_138[0xf] /
                                      *(float *)(ppppppbStack_138 + 0x10));
      ppppppbVar23 = (byte ******)
                     ((long)(fVar28 - _DAT_01198778) & (long)fVar28 >> 0x3f | (long)fVar28);
      if ((ppppppbVar20 < (byte ******)0x3) ||
         (uVar13 = (long)ppppppbVar20 - ((ulong)ppppppbVar20 >> 1 & 0x5555555555555555),
         uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333),
         1 < (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        ppppppbVar23 = (byte ******)FUN_0412c3f0(ppppppbVar23);
        if (ppppppbVar23 < ppppppbVar19) {
          ppppppbVar23 = ppppppbVar19;
        }
      }
      else {
        if ((byte ******)0x1 < ppppppbVar23) {
          lVar9 = 0x3f;
          if ((byte *)((long)ppppppbVar23 + -1) != (byte *)0x0) {
            for (; (ulong)((long)ppppppbVar23 + -1) >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          ppppppbVar23 = (byte ******)(1L << (-((byte)lVar9 ^ 0x3f) & 0x3f));
        }
        if (ppppppbVar23 < ppppppbVar19) {
          ppppppbVar23 = ppppppbVar19;
        }
      }
      if (ppppppbVar20 <= ppppppbVar23) goto LAB_06b38024;
      if (ppppppbVar23 == (byte ******)0x0) {
        pppppbVar15 = *ppppppbStack_130;
        *ppppppbStack_130 = (byte *****)0x0;
        if (pppppbVar15 != (byte *****)0x0) {
          func_0x0412a280(pppppbVar15,(long)ppppppbStack_138[0xd] << 3);
        }
        ppppppbStack_138[0xd] = (byte *****)0x0;
        goto LAB_06b38024;
      }
    }
  }
  if ((ulong)ppppppbVar23 >> 0x3d != 0) {
    ppppppbVar17 = (byte ******)func_0x04882eb0();
    ppppppbVar20 = ppppppbStack_138;
    ppppppbStack_138 = ppppppbVar12;
LAB_06b3824c:
    iVar8 = func_0x04108328(&DAT_0f59f778);
    if (iVar8 != 0) {
      func_0x06c80730();
      func_0x0410844d(&DAT_0f59f778);
    }
    goto LAB_06b3764e;
  }
  lVar9 = (long)ppppppbVar23 * 8;
  pppppbVar15 = (byte *****)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar9);
  if (pppppbVar15 == (byte *****)0x0) {
    func_0x0eec74c0(lVar9,0);
  }
  pppppbVar21 = *ppppppbStack_130;
  *ppppppbStack_130 = pppppbVar15;
  if (pppppbVar21 != (byte *****)0x0) {
    func_0x0412a280(pppppbVar21,(long)ppppppbStack_138[0xd] << 3);
    pppppbVar15 = ppppppbStack_138[0xc];
  }
  ppppppbStack_138[0xd] = (byte *****)ppppppbVar23;
  func_0x0eee2dd0(pppppbVar15,0,lVar9);
  pppppbVar21 = ppppppbStack_138[0xe];
  if (pppppbVar21 != (byte *****)0x0) {
    ppppppbVar20 = (byte ******)pppppbVar21[1];
    pbVar1 = (byte *)((long)ppppppbVar23 - 1);
    if (((ulong)ppppppbVar23 & (ulong)pbVar1) == 0) {
      pppppbVar15[(ulong)ppppppbVar20 & (ulong)pbVar1] = (byte ****)(ppppppbStack_138 + 0xe);
      uVar13 = (ulong)ppppppbVar20 & (ulong)pbVar1;
      while (pppppbVar25 = pppppbVar21, pppppbVar21 = (byte *****)*pppppbVar25,
            pppppbVar21 != (byte *****)0x0) {
        uVar24 = (ulong)pppppbVar21[1] & (ulong)pbVar1;
        if (uVar24 != uVar13) {
          if (pppppbVar15[uVar24] == (byte ****)0x0) {
            pppppbVar15[uVar24] = (byte ****)pppppbVar25;
            uVar13 = uVar24;
          }
          else {
            *pppppbVar25 = *pppppbVar21;
            *pppppbVar21 = (byte ****)*pppppbVar15[uVar24];
            *pppppbVar15[uVar24] = (byte ***)pppppbVar21;
            pppppbVar21 = pppppbVar25;
          }
        }
      }
    }
    else {
      if (ppppppbVar23 <= ppppppbVar20) {
        if (((ulong)ppppppbVar20 | (ulong)ppppppbVar23) >> 0x20 == 0) {
          ppppppbVar20 = (byte ******)
                         (((ulong)ppppppbVar20 & 0xffffffff) % ((ulong)ppppppbVar23 & 0xffffffff));
        }
        else {
          ppppppbVar20 = (byte ******)((ulong)ppppppbVar20 % (ulong)ppppppbVar23);
        }
      }
      pppppbVar15[(long)ppppppbVar20] = (byte ****)(ppppppbStack_138 + 0xe);
      pppppbVar25 = (byte *****)*pppppbVar21;
      while (pppppbVar25 != (byte *****)0x0) {
        ppppppbVar19 = (byte ******)pppppbVar25[1];
        if (ppppppbVar23 <= ppppppbVar19) {
          if (((ulong)ppppppbVar19 | (ulong)ppppppbVar23) >> 0x20 == 0) {
            ppppppbVar19 = (byte ******)
                           (((ulong)ppppppbVar19 & 0xffffffff) % ((ulong)ppppppbVar23 & 0xffffffff))
            ;
          }
          else {
            ppppppbVar19 = (byte ******)((ulong)ppppppbVar19 % (ulong)ppppppbVar23);
          }
        }
        if (ppppppbVar19 != ppppppbVar20) {
          if (pppppbVar15[(long)ppppppbVar19] == (byte ****)0x0) {
            pppppbVar15[(long)ppppppbVar19] = (byte ****)pppppbVar21;
            ppppppbVar20 = ppppppbVar19;
          }
          else {
            *pppppbVar21 = *pppppbVar25;
            *pppppbVar25 = (byte ****)*pppppbVar15[(long)ppppppbVar19];
            *pppppbVar15[(long)ppppppbVar19] = (byte ***)pppppbVar25;
            pppppbVar25 = pppppbVar21;
          }
        }
        pppppbVar21 = pppppbVar25;
        pppppbVar25 = (byte *****)*pppppbVar21;
      }
    }
  }
LAB_06b38024:
  ppppppbVar23 = (byte ******)ppppppbStack_138[0xd];
  if (((ulong)ppppppbVar23 & (long)ppppppbVar23 - 1U) == 0) {
    ppppppbStack_128 = (byte ******)((ulong)ppppppbVar12 & (long)ppppppbVar23 - 1U);
  }
  else {
    ppppppbStack_128 = ppppppbVar12;
    if (ppppppbVar23 <= ppppppbVar12) {
      if (((ulong)ppppppbVar12 | (ulong)ppppppbVar23) >> 0x20 == 0) {
        ppppppbStack_128 =
             (byte ******)(((ulong)ppppppbVar12 & 0xffffffff) % ((ulong)ppppppbVar23 & 0xffffffff));
      }
      else {
        ppppppbStack_128 = (byte ******)((ulong)ppppppbVar12 % (ulong)ppppppbVar23);
      }
    }
  }
LAB_06b38065:
  pppppbVar15 = *ppppppbStack_130;
  ppppbVar3 = pppppbVar15[(long)ppppppbStack_128];
  if (ppppbVar3 == (byte ****)0x0) {
    *pppppppbVar14 = (byte ******)ppppppbStack_138[0xe];
    ppppppbStack_138[0xe] = (byte *****)pppppppbVar14;
    pppppbVar15[(long)ppppppbStack_128] = (byte ****)(ppppppbStack_138 + 0xe);
    if (*pppppppbVar14 != (byte ******)0x0) {
      ppppppbVar20 = (byte ******)(*pppppppbVar14)[1];
      if (((ulong)ppppppbVar23 & (long)ppppppbVar23 - 1U) == 0) {
        pppppbVar15[(ulong)ppppppbVar20 & (long)ppppppbVar23 - 1U] = (byte ****)pppppppbVar14;
      }
      else {
        if (ppppppbVar23 <= ppppppbVar20) {
          if (((ulong)ppppppbVar20 | (ulong)ppppppbVar23) >> 0x20 == 0) {
            pppppbVar15[((ulong)ppppppbVar20 & 0xffffffff) % ((ulong)ppppppbVar23 & 0xffffffff)] =
                 (byte ****)pppppppbVar14;
            goto LAB_06b38084;
          }
          ppppppbVar20 = (byte ******)((ulong)ppppppbVar20 % (ulong)ppppppbVar23);
        }
        pppppbVar15[(long)ppppppbVar20] = (byte ****)pppppppbVar14;
      }
    }
  }
  else {
    *pppppppbVar14 = (byte ******)*ppppbVar3;
    *ppppbVar3 = (byte ***)pppppppbVar14;
  }
LAB_06b38084:
  ppppppbStack_138[0xf] = (byte *****)((long)ppppppbStack_138[0xf] + 1);
LAB_06b38088:
  if ((code *)CONCAT44(uStack_84,uStack_88) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_84,uStack_88))(&puStack_a0);
  }
  pppppppbVar14 = uStack_c0;
  iVar8 = iStack_c8;
  ppppppbVar23 = ppppppbStack_d0;
  if (*(int *)(ppppppbStack_d0 + 1) == iStack_c8) {
    pppppbVar15 = *ppppppbStack_d0;
  }
  else {
    pppppbVar15 = (byte *****)0x0;
  }
  uVar6 = (undefined1)uStack_b8;
  puVar16 = (undefined8 *)func_0x06c89720(pppppbVar15,uStack_c0,(undefined1)uStack_b8);
  *puStack_38 = *puVar16;
  *(undefined4 *)(puStack_38 + 1) = *(undefined4 *)(puVar16 + 1);
  uVar18 = *(undefined4 *)((long)puVar16 + 0x14);
  uVar4 = *(undefined4 *)(puVar16 + 3);
  uVar5 = *(undefined4 *)((long)puVar16 + 0x1c);
  *(undefined4 *)(puStack_38 + 2) = *(undefined4 *)(puVar16 + 2);
  *(undefined4 *)((long)puStack_38 + 0x14) = uVar18;
  *(undefined4 *)(puStack_38 + 3) = uVar4;
  *(undefined4 *)((long)puStack_38 + 0x1c) = uVar5;
  pppppbVar15 = *ppppppbVar23;
  if (pppppbVar15 != (byte *****)0x0 && *(int *)(ppppppbVar23 + 1) == iVar8) {
    func_0x0d8569b0(pppppbVar15,pppppppbVar14,uVar6);
  }
  return;
}


