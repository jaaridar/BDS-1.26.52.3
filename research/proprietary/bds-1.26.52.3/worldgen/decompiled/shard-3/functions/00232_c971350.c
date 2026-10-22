/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca71350 (ELF vaddr 0xc971350)
 * Label: callee-of:0x517ab30
 * Body:  [[0ca71350, 0ca713ec] [0ca713f0, 0ca71443] [0ca71450, 0ca7152b] [0ca71530, 0ca71576] [0ca71580, 0ca715c7] [0ca715d0, 0ca71882] [0ca71890, 0ca71952] [0ca71960, 0ca71991] [0ca719a0, 0ca71a86] [0ca71a90, 0ca71ab4] [0ca71ac0, 0ca71c1e] [0ca71c20, 0ca71c38] [0ca71c40, 0ca720be] [0ca720c0, 0ca720f3] [0ca72100, 0ca72188] [0ca72190, 0ca722e3] [0ca723ed, 0ca72413]]
 * Ghidra: FUN_0ca71350
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca71350(long param_1,ulong param_2,int *param_3,undefined8 *param_4)

{
  long ******pppppplVar1;
  long ******pppppplVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  long *****ppppplVar5;
  undefined *puVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  long ******pppppplVar13;
  ulong uVar14;
  undefined **ppuVar15;
  long *plVar16;
  uint uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  ulong *puVar21;
  long lVar22;
  ulong *puVar23;
  undefined **ppuVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong *puVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  ulong uVar37;
  long lVar38;
  ulong *puVar39;
  long lVar40;
  ulong *puStack_1d8;
  ulong *puStack_1c0;
  int *piStack_1b8;
  ulong uStack_1a8;
  long *******ppppppplStack_188;
  long ******pppppplStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 *puStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  long *plStack_128;
  int iStack_11c;
  long *******ppppppplStack_118;
  long ******apppppplStack_110 [5];
  uint uStack_e8;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  uint uStack_a8;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  ulong *puStack_60;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined **ppuStack_40;
  ulong uStack_38;
  
  lStack_70 = param_1 + 0x80;
  puStack_158 = param_4;
  func_0x0412d680();
  LOCK();
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  UNLOCK();
  puVar21 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x908);
  puVar39 = puVar21;
  piStack_1b8 = param_3;
  uStack_1a8 = param_2;
  if (puVar21 == (ulong *)0x0) goto LAB_0ca72288;
LAB_0ca713b8:
  puStack_1c0 = puVar39 + 0x121;
  uVar32 = (ulong)(uint)piStack_1b8[1];
  lVar26 = (long)(*piStack_1b8 + -8);
  puStack_1d8 = puVar39;
  do {
    uStack_150 = lVar26 + 0x9e3779b9;
    lVar34 = uStack_150 * 0x40;
    uVar28 = uStack_150 >> 2;
    lVar38 = (long)((int)uVar32 + -8);
    do {
      ppppppplStack_118 = (long *******)CONCAT44((int)lVar38,(int)lVar26);
      uVar32 = *(ulong *)(param_1 + 0xe8);
      if (uVar32 != 0) {
        uVar29 = lVar38 + lVar34 + 0x9e3779b9 + uVar28 ^ uStack_150;
        uVar31 = uVar32 - (uVar32 >> 1 & 0x5555555555555555);
        uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333);
        uVar31 = ((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar31 >> 0x38 < 2) {
          uVar35 = uVar32 - 1 & uVar29;
        }
        else {
          uVar35 = uVar29;
          if (uVar32 <= uVar29) {
            uVar35 = uVar29 % uVar32;
          }
        }
        plVar36 = *(long **)(*(long *)(param_1 + 0xe0) + uVar35 * 8);
        if ((plVar36 != (long *)0x0) && (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0)) {
          if ((byte)(uVar31 >> 0x38) < 2) {
            do {
              if (uVar29 == plVar36[1]) {
                if ((long *******)plVar36[2] == ppppppplStack_118) goto LAB_0ca71460;
              }
              else if ((plVar36[1] & uVar32 - 1) != uVar35) break;
              plVar36 = (long *)*plVar36;
            } while (plVar36 != (long *)0x0);
          }
          else {
            do {
              uVar31 = plVar36[1];
              if (uVar29 == uVar31) {
                if ((long *******)plVar36[2] == ppppppplStack_118) goto LAB_0ca71460;
              }
              else {
                if (uVar32 <= uVar31) {
                  if ((uVar31 | uVar32) >> 0x20 == 0) {
                    if ((uVar31 & 0xffffffff) % (uVar32 & 0xffffffff) == uVar35) goto LAB_0ca7158a;
                    break;
                  }
                  uVar31 = uVar31 % uVar32;
                }
                if (uVar31 != uVar35) break;
              }
LAB_0ca7158a:
              plVar36 = (long *)*plVar36;
            } while (plVar36 != (long *)0x0);
          }
        }
      }
      func_0x0647bc50((long *)(param_1 + 0xe0),&ppppppplStack_118);
      if (puVar39 < puStack_1c0) {
        *puVar39 = (ulong)ppppppplStack_118;
        puVar39 = puVar39 + 1;
      }
      else {
        puVar21 = (ulong *)((long)puVar39 - (long)puStack_1d8);
        lVar40 = (long)puVar21 >> 3;
        uVar32 = lVar40 + 1;
        if (0x1fffffffffffffff < uVar32) goto LAB_0ca72279;
        uVar31 = (long)puStack_1c0 - (long)puStack_1d8;
        uVar29 = (long)uVar31 >> 2;
        if ((ulong)((long)uVar31 >> 2) <= uVar32) {
          uVar29 = uVar32;
        }
        if (0x7ffffffffffffff7 < uVar31) {
          uVar29 = 0x1fffffffffffffff;
        }
        if (0x1fffffffffffffff < uVar29) goto LAB_0ca7227e;
        lVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 8);
        if (lVar22 == 0) {
          func_0x0eec74c0(uVar29 * 8,0);
        }
        *(long ********)(lVar22 + (long)puVar21) = ppppppplStack_118;
        puVar33 = (ulong *)((long)puVar21 + lVar40 * -8 + lVar22);
        if (puStack_1d8 != puVar39) {
          puVar23 = puStack_1d8;
          puVar30 = puVar33;
          if (((ulong *)0x47 < puVar21 + -1) &&
             (0x1f < (ulong)((long)puVar39 + (lVar22 - ((long)puStack_1d8 * 2 + (long)puVar21))))) {
            uVar32 = ((ulong)(puVar21 + -1) >> 3) + 1;
            uVar35 = uVar32 & 0xfffffffffffffffc;
            puVar23 = puStack_1d8 + uVar35;
            puVar30 = puVar33 + uVar35;
            lVar40 = lVar22 + lVar40 * -8;
            uVar37 = 0;
            do {
              puVar3 = puStack_1d8 + uVar37;
              uVar9 = *(undefined4 *)((long)puVar3 + 4);
              uVar14 = puVar3[1];
              uVar10 = *(undefined4 *)((long)puVar3 + 0xc);
              uVar11 = puStack_1d8[uVar37 + 2];
              uVar12 = (puStack_1d8 + uVar37 + 2)[1];
              puVar4 = (undefined4 *)((long)puVar21 + uVar37 * 8 + lVar40);
              *puVar4 = (int)*puVar3;
              puVar4[1] = uVar9;
              puVar4[2] = (int)uVar14;
              puVar4[3] = uVar10;
              puVar3 = (ulong *)((long)puVar21 + uVar37 * 8 + lVar40 + 0x10);
              *puVar3 = uVar11;
              puVar3[1] = uVar12;
              uVar37 = uVar37 + 4;
            } while (uVar35 != uVar37);
            if (uVar32 == uVar35) goto LAB_0ca71783;
          }
          do {
            *puVar30 = *puVar23;
            puVar23 = puVar23 + 1;
            puVar30 = puVar30 + 1;
          } while (puVar23 != puVar39);
        }
LAB_0ca71783:
        puStack_1c0 = (ulong *)(lVar22 + uVar29 * 8);
        puVar39 = (ulong *)((long)puVar21 + lVar22 + 8);
        func_0x0412a280(puStack_1d8,uVar31);
        puStack_1d8 = puVar33;
      }
LAB_0ca71460:
      uVar32 = (ulong)piStack_1b8[1];
      bVar7 = lVar38 < (long)(uVar32 + 8);
      lVar38 = lVar38 + 1;
    } while (bVar7);
    bVar7 = lVar26 < (long)*piStack_1b8 + 8;
    lVar26 = lVar26 + 1;
  } while (bVar7);
  if (puStack_1d8 != puVar39) {
    uStack_98 = uStack_1a8;
    puStack_90 = puStack_158;
    ppuVar24 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (ppuVar24 == (undefined **)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    ppuVar24[2] = (undefined *)0x0;
    ppuVar24[3] = (undefined *)0x0;
    *ppuVar24 = (undefined *)0x0;
    ppuVar24[1] = (undefined *)0x0;
    *(undefined4 *)(ppuVar24 + 4) = 0x3f800000;
    ppuStack_88 = ppuVar24;
    puVar25 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar25 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    puVar25[2] = 0;
    puVar25[3] = 0;
    *puVar25 = 0;
    puVar25[1] = 0;
    *(undefined4 *)(puVar25 + 4) = 0x3f800000;
    lStack_78 = param_1 + 0x108;
    puStack_80 = puVar25;
    func_0x0eee1580(lStack_78,&uStack_98);
    puVar21 = puStack_1d8;
    do {
      uStack_1a8 = *puVar21;
      ppuStack_68 = *(undefined ***)(param_1 + 0x78);
      puStack_48 = &UNK_0f3ed9d8;
      ppuStack_40 = ppuStack_68 + 9;
      lStack_178 = 0;
      lStack_170 = 0;
      lStack_168 = 0;
      puVar6 = ppuStack_68[2];
      puStack_60 = puVar21;
      uStack_38 = uStack_1a8;
      if (puVar6 != (undefined *)0x0) {
        if ((undefined *)0x1fffffffffffffff < puVar6) {
          uVar27 = func_0x0ca7bab0();
          ppuStack_88 = (undefined **)0x0;
          func_0x0629e540(&ppuStack_88,ppuVar24);
          func_0x0412a280(puStack_1d8,(long)puStack_1c0 - (long)puStack_1d8);
          func_0x0412d6b0(lStack_70);
          func_0x0eee2d70(uVar27);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ppuVar24 = (undefined **)((long)puVar6 * 8);
        lVar26 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,ppuVar24);
        if (lVar26 == 0) {
          func_0x0eec74c0(ppuVar24,0);
        }
        lStack_168 = lVar26 + (long)puVar6 * 8;
        lStack_178 = lVar26;
      }
      puVar25 = (undefined8 *)ppuStack_68[3];
      puStack_50 = (undefined8 *)ppuStack_68[4];
      if (puVar25 != puStack_50) {
        do {
          ppuStack_138 = ppuStack_68;
          ppuStack_130 = &puStack_48;
          plStack_128 = &lStack_178;
          plVar36 = (long *)*puVar25;
          lStack_170 = lStack_178;
          puVar33 = (ulong *)*plVar36;
          puVar21 = (ulong *)plVar36[1];
          puStack_158 = puVar25;
          lStack_148 = param_1;
          if (puVar33 == puVar21) {
            iVar19 = 0;
            iVar20 = *(int *)((long)plVar36 + 0x34);
            uVar32 = uStack_1a8;
            ppuVar24 = ppuStack_68;
          }
          else {
            iVar19 = 0;
            uStack_140 = uStack_1a8;
            plStack_58 = plVar36;
            do {
              func_0x0ca7b620(&ppppppplStack_118,ppuStack_130,*puVar33);
              plVar36 = plStack_128;
              if ((ppppppplStack_118 == (long *******)0x0) ||
                 (ppppppplStack_118[7] == ppppppplStack_118[8])) {
                puVar25 = (undefined8 *)plStack_128[1];
                if ((undefined8 *)plStack_128[2] <= puVar25) {
                  lVar26 = *plStack_128;
                  lVar38 = (long)puVar25 - lVar26;
                  uVar32 = (lVar38 >> 3) + 1;
                  if (uVar32 < 0x2000000000000000) {
                    uVar29 = plStack_128[2] - lVar26;
                    uVar28 = (long)uVar29 >> 2;
                    if ((ulong)((long)uVar29 >> 2) <= uVar32) {
                      uVar28 = uVar32;
                    }
                    if (0x7ffffffffffffff7 < uVar29) {
                      uVar28 = 0x1fffffffffffffff;
                    }
                    if (uVar28 < 0x2000000000000000) {
                      uStack_150 = uVar29;
                      lVar34 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28 * 8);
                      if (lVar34 == 0) {
                        func_0x0eec74c0(uVar28 * 8,0);
                      }
                      piStack_1b8 = (int *)(uVar28 * 8 + lVar34);
                      *(ulong **)(lVar34 + lVar38) = puVar33;
                      ppuVar24 = (undefined **)(lVar38 + lVar34 + 8);
                      lVar34 = lVar38 + lVar34 + (lVar38 >> 3) * -8;
                      func_0x0eee2f00(lVar34,lVar26,lVar38);
                      *plVar36 = lVar34;
                      plVar36[1] = (long)ppuVar24;
                      plVar36[2] = (long)piStack_1b8;
                      if (lVar26 != 0) {
                        func_0x0412a280(lVar26,uStack_150);
                      }
                      goto LAB_0ca71bb5;
                    }
                    func_0x04882eb0();
                  }
                  func_0x0ca7bab0();
                  goto LAB_0ca72274;
                }
                *puVar25 = puVar33;
                ppuVar24 = (undefined **)(puVar25 + 1);
LAB_0ca71bb5:
                plVar36[1] = (long)ppuVar24;
                iVar19 = iVar19 + (int)puVar33[2];
                bVar7 = true;
                pppppplVar13 = apppppplStack_110[0];
              }
              else {
                bVar7 = false;
                pppppplVar13 = apppppplStack_110[0];
              }
              apppppplStack_110[0] = pppppplVar13;
              if (pppppplVar13 != (long ******)0x0) {
                LOCK();
                pppppplVar1 = pppppplVar13 + 1;
                ppppplVar5 = *pppppplVar1;
                *pppppplVar1 = (long *****)((long)*pppppplVar1 + -1);
                UNLOCK();
                if (ppppplVar5 == (long *****)0x0) {
                  (*(code *)(*pppppplVar13)[2])(pppppplVar13);
                  func_0x0412c2d0(pppppplVar13);
                }
              }
              if (!bVar7) goto LAB_0ca719a0;
              puVar33 = puVar33 + 3;
            } while (puVar33 != puVar21);
            iVar20 = *(int *)((long)plStack_58 + 0x34);
            uVar32 = uStack_140;
            plVar36 = plStack_58;
            ppuVar24 = ppuStack_138;
          }
          uStack_140 = uVar32;
          ppuStack_138 = ppuVar24;
          if (iVar20 == -1) goto LAB_0ca72283;
          uVar28 = func_0x0d2d2570(plVar36 + 5,plVar36 + 3,ppuVar24,uVar32);
          if ((uVar32 == uVar28) &&
             ((_DAT_011983f0 <= *(float *)(plVar36 + 3) ||
              (cVar18 = (*(code *)plVar36[4])(*ppuVar24,(long)*(int *)((long)plVar36 + 0x1c),uVar32)
              , cVar18 != '\0')))) {
            ppuVar15 = ppuStack_130;
            if (plVar36[1] - *plVar36 == 0x18) {
              uVar27 = *(undefined8 *)*plVar36;
              lVar26 = *(long *)(param_1 + 0x28);
              if ((*(long *)(lVar26 + 0x1a8) == 0) &&
                 (cVar18 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef),
                 cVar18 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              plVar36 = *(long **)(lVar26 + 0x1a8);
              (**(code **)(*plVar36 + 0x148))(&ppppppplStack_118,plVar36,&uStack_140,uVar27);
              pppppplVar13 = apppppplStack_110[0];
              if ((ppppppplStack_118 != (long *******)0x0) &&
                 (ppppppplStack_118[7] != ppppppplStack_118[8])) {
                ppppppplStack_d8 = ppppppplStack_118;
                pppppplStack_d0 = apppppplStack_110[0];
                ppppppplStack_118 = (long *******)0x0;
                apppppplStack_110[0] = (long ******)0x0;
                (**(code **)(*ppuVar15 + 0x18))(ppuVar15,uVar27,&ppppppplStack_d8);
                pppppplVar1 = pppppplStack_d0;
                pppppplVar13 = apppppplStack_110[0];
                if (pppppplStack_d0 != (long ******)0x0) {
                  LOCK();
                  pppppplVar2 = pppppplStack_d0 + 1;
                  ppppplVar5 = *pppppplVar2;
                  *pppppplVar2 = (long *****)((long)*pppppplVar2 + -1);
                  UNLOCK();
                  if (ppppplVar5 == (long *****)0x0) {
                    (*(code *)(*pppppplStack_d0)[2])(pppppplStack_d0);
                    func_0x0412c2d0(pppppplVar1);
                    pppppplVar13 = apppppplStack_110[0];
                  }
                }
              }
              ppuVar24 = ppuVar15;
              apppppplStack_110[0] = pppppplVar13;
              if (pppppplVar13 != (long ******)0x0) {
                LOCK();
                pppppplVar1 = pppppplVar13 + 1;
                ppppplVar5 = *pppppplVar1;
                *pppppplVar1 = (long *****)((long)*pppppplVar1 + -1);
                UNLOCK();
                if (ppppplVar5 == (long *****)0x0) {
                  (*(code *)(*pppppplVar13)[2])(pppppplVar13);
                  func_0x0412c2d0(pppppplVar13);
                }
              }
            }
            else {
              ppppppplStack_d8 = (long *******)&UNK_0f45e800;
              pppppplStack_d0 = (long ******)&UNK_0f2bdd80;
              uStack_c8 = 0x5deece66d;
              uStack_c0 = 0;
              uStack_b8 = 0;
              uStack_a8 = 0;
              func_0x0d2d2c60(&ppppppplStack_d8,*ppuStack_138,uStack_140 & 0xffffffff,
                              uStack_140._4_4_);
              uVar17 = uStack_a8;
              ppppppplStack_118 = (long *******)&UNK_0f45e800;
              apppppplStack_110[0] = (long ******)((ulong)apppppplStack_110[0] & 0xffffffffffffff00)
              ;
              uStack_e8 = 0xffffffff;
              if ((ulong)uStack_a8 != 0xffffffff) {
                ppppppplStack_188 = apppppplStack_110;
                (**(code **)(&UNK_0f45ee88 + (ulong)uStack_a8 * 8))
                          (&ppppppplStack_188,&pppppplStack_d0);
                uStack_e8 = uVar17;
                if ((ulong)uStack_a8 != 0xffffffff) {
                  (**(code **)(&UNK_0f3ed9b8 + (ulong)uStack_a8 * 8))
                            (&ppppppplStack_188,&pppppplStack_d0);
                }
              }
              if (*plStack_128 != plStack_128[1]) {
                do {
                  ppppppplStack_188 = (long *******)&iStack_11c;
                  iStack_11c = iVar19;
                  if ((ulong)uStack_e8 == 0xffffffff) goto LAB_0ca72274;
                  ppppppplStack_d8 = (long *******)&ppppppplStack_188;
                  iVar20 = (**(code **)(&UNK_0f45eeb8 + (ulong)uStack_e8 * 8))
                                     (&ppppppplStack_d8,apppppplStack_110);
                  ppuVar24 = ppuStack_130;
                  lVar26 = 0;
                  plVar36 = (long *)*plStack_128;
                  while ((plVar36 != (long *)plStack_128[1] &&
                         (iVar20 = iVar20 - *(int *)(*plVar36 + 0x10), -1 < iVar20))) {
                    lVar26 = lVar26 + 1;
                    plVar36 = plVar36 + 1;
                  }
                  puVar25 = (undefined8 *)((long *)*plStack_128)[lVar26];
                  uVar27 = *puVar25;
                  puVar21 = *(ulong **)(param_1 + 0x28);
                  if ((puVar21[0x35] == 0) &&
                     (cVar18 = func_0x0eeddcf0(&UNK_014dab29,&UNK_014dab47,0x4ab,&UNK_0136e3ef),
                     cVar18 != '\0')) {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                  (**(code **)(*(long *)puVar21[0x35] + 0x148))
                            (&ppppppplStack_d8,(long *)puVar21[0x35],&uStack_140,uVar27);
                  pppppplVar13 = pppppplStack_d0;
                  if (ppppppplStack_d8 == (long *******)0x0) {
                    bVar7 = false;
                  }
                  else if (ppppppplStack_d8[7] == ppppppplStack_d8[8]) {
                    bVar7 = false;
                  }
                  else {
                    ppppppplStack_188 = ppppppplStack_d8;
                    pppppplStack_180 = pppppplStack_d0;
                    ppppppplStack_d8 = (long *******)0x0;
                    pppppplStack_d0 = (long ******)0x0;
                    (**(code **)(*ppuVar24 + 0x18))(ppuVar24,uVar27,&ppppppplStack_188);
                    pppppplVar1 = pppppplStack_180;
                    bVar7 = true;
                    pppppplVar13 = pppppplStack_d0;
                    if (pppppplStack_180 != (long ******)0x0) {
                      LOCK();
                      pppppplVar2 = pppppplStack_180 + 1;
                      ppppplVar5 = *pppppplVar2;
                      *pppppplVar2 = (long *****)((long)*pppppplVar2 + -1);
                      UNLOCK();
                      if (ppppplVar5 == (long *****)0x0) {
                        (*(code *)(*pppppplStack_180)[2])(pppppplStack_180);
                        func_0x0412c2d0(pppppplVar1);
                        pppppplVar13 = pppppplStack_d0;
                      }
                    }
                  }
                  pppppplStack_d0 = pppppplVar13;
                  if (pppppplVar13 != (long ******)0x0) {
                    LOCK();
                    pppppplVar1 = pppppplVar13 + 1;
                    ppppplVar5 = *pppppplVar1;
                    *pppppplVar1 = (long *****)((long)*pppppplVar1 + -1);
                    UNLOCK();
                    if (ppppplVar5 == (long *****)0x0) {
                      (*(code *)(*pppppplVar13)[2])(pppppplVar13);
                      func_0x0412c2d0(pppppplVar13);
                    }
                  }
                  plVar36 = plStack_128;
                  if (bVar7) break;
                  iVar20 = *(int *)(puVar25 + 2);
                  lVar34 = *plStack_128;
                  lVar38 = lVar34 + lVar26 * 8;
                  lVar40 = lVar34 + lVar26 * 8 + 8;
                  lVar26 = plStack_128[1] - lVar40;
                  if (lVar26 != 0) {
                    memmove(lVar38,lVar40,lVar26);
                    lVar34 = *plStack_128;
                  }
                  plVar16 = plStack_128;
                  ppuVar24 = (undefined **)(lVar38 + lVar26);
                  plVar36[1] = (long)ppuVar24;
                  iVar19 = iVar19 - iVar20;
                } while (lVar34 != plVar16[1]);
              }
              if ((ulong)uStack_e8 != 0xffffffff) {
                (**(code **)(&UNK_0f3ed9b8 + (ulong)uStack_e8 * 8))
                          (&ppppppplStack_d8,apppppplStack_110);
              }
            }
          }
LAB_0ca719a0:
          puVar25 = puStack_158 + 2;
        } while (puVar25 != puStack_50);
      }
      if (lStack_178 != 0) {
        lStack_170 = lStack_178;
        func_0x0412a280(lStack_178,lStack_168 - lStack_178);
      }
      puVar21 = puStack_60 + 1;
    } while (puVar21 != puVar39);
    func_0x0eee1580(lStack_78,0);
    puVar25 = puStack_80;
    puStack_80 = (undefined8 *)0x0;
    if (puVar25 != (undefined8 *)0x0) {
      func_0x0629e480(&puStack_80);
    }
    ppuVar24 = ppuStack_88;
    ppuStack_88 = (undefined **)0x0;
    if (ppuVar24 != (undefined **)0x0) {
      func_0x0629e540(&ppuStack_88);
    }
  }
  LOCK();
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
  UNLOCK();
  func_0x04136a20(param_1 + 0xa8);
  func_0x0412a280(puStack_1d8,(long)puStack_1c0 - (long)puStack_1d8);
  func_0x0412d6b0(lStack_70);
  return;
LAB_0ca72274:
  func_0x04931450();
LAB_0ca72279:
  func_0x04fa6650();
LAB_0ca7227e:
  func_0x04882eb0();
LAB_0ca72283:
  func_0x04931450();
LAB_0ca72288:
  func_0x0eec74c0(0x908,0);
  puVar39 = puVar21;
  goto LAB_0ca713b8;
}


