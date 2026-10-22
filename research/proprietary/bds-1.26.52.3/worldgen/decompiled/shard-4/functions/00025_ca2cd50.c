/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb2cd50 (ELF vaddr 0xca2cd50)
 * Label: caller-of-callee
 * Body:  [[0cb2cd50, 0cb2d002] [0cb2d010, 0cb2d1c7] [0cb2d1d0, 0cb2d211] [0cb2d220, 0cb2d276] [0cb2d280, 0cb2d298] [0cb2d2a0, 0cb2d2ee] [0cb2d2f0, 0cb2d32b] [0cb2d330, 0cb2d353] [0cb2d360, 0cb2d491] [0cb2d4a0, 0cb2d699] [0cb2d6a0, 0cb2d6e9] [0cb2d6f0, 0cb2d76d] [0cb2d770, 0cb2d7fa] [0cb2d800, 0cb2da68] [0cb2da70, 0cb2dbce] [0cb2dbd0, 0cb2dc0b] [0cb2dc10, 0cb2dc7a] [0cb2dc80, 0cb2dc99] [0cb2dca0, 0cb2dcc7] [0cb2dcd0, 0cb2ddc2] [0cb2ddd0, 0cb2de0e] [0cb2de10, 0cb2de5b] [0cb2de60, 0cb2e5a0] [0cb2e5b0, 0cb2e5cc] [0cb2e5d0, 0cb2e671] [0cb2e680, 0cb2e6b6] [0cb2e6c0, 0cb2ec49] [0cb2ec50, 0cb2ecee] [0cb2ecf0, 0cb2ee4e] [0cb2f026, 0cb2f048] [0cb2f072, 0cb2f092]]
 * Ghidra: FUN_0cb2cd50
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0cb2cd50(ulong *param_1,undefined1 param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  int *piVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  int *piVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  undefined **ppuVar30;
  long lVar31;
  ulong *puVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  long lVar35;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int iStack_300;
  int iStack_2fc;
  ulong *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d0;
  ulong *puStack_2c8;
  undefined **ppuStack_2c0;
  ulong *puStack_2b8;
  int iStack_2b0;
  int iStack_2ac;
  ulong uStack_2a8;
  long *plStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  ulong uStack_200;
  ulong uStack_1f8;
  int iStack_1f0;
  ulong uStack_1ec;
  int iStack_1e4;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined *puStack_1c8;
  ulong *puStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  undefined **ppuStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long alStack_198 [4];
  long *plStack_178;
  long alStack_168 [4];
  long *plStack_148;
  
  if (((byte)param_1[9] & 1) != 0) {
    return (undefined *)(ulong)(byte)param_1[9];
  }
  uVar15 = param_1[8];
  puVar10 = (undefined *)func_0x0eee2fc0();
  puVar4 = *(undefined **)(uVar15 + 0xd0);
  LOCK();
  puVar11 = *(undefined **)(uVar15 + 0xe0);
  bVar36 = puVar4 == puVar11;
  if (bVar36) {
    *(undefined **)(uVar15 + 0xe0) = puVar10;
    puVar11 = puVar4;
  }
  UNLOCK();
  if (bVar36) {
    *(undefined4 *)(uVar15 + 0xd8) = 1;
    plVar29 = (long *)param_1[4];
  }
  else {
    if (puVar11 != puVar10) {
      return puVar11;
    }
    uVar7 = *(int *)(uVar15 + 0xd8) + 1;
    if (uVar7 == 0xffffffff) {
      return (undefined *)0xffffffff;
    }
    *(uint *)(uVar15 + 0xd8) = uVar7;
    plVar29 = (long *)param_1[4];
  }
  uStack_2a8 = 0;
  if (plVar29 != (long *)0x0) {
    uStack_2a8 = 0;
    puStack_1c8 = &UNK_0f3f2230;
    puStack_1c0 = &uStack_2a8;
    ppuStack_1a8 = &puStack_1c8;
    (**(code **)(*plVar29 + 0x48))(plVar29,&puStack_1c8);
    if (ppuStack_1a8 == &puStack_1c8) {
      (**(code **)(*ppuStack_1a8 + 0x20))();
    }
    else if (ppuStack_1a8 != (undefined **)0x0) {
      (**(code **)(*ppuStack_1a8 + 0x28))();
    }
    if (0x400 < uStack_2a8) goto LAB_0cb2ce8f;
  }
  if ((_DAT_0f728590 == (char *)0x0) &&
     (cVar6 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012713a8),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if ((*_DAT_0f728590 == '\0') &&
     (cVar6 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012713a8),
     cVar6 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  iStack_2b0 = (int)((ulong)(*(long *)(_DAT_0f7285a0 + 0x28) - *(long *)(_DAT_0f7285a0 + 0x20)) >> 3
                    );
  uStack_200 = (ulong)(uint)(iStack_2b0 * 2);
  iStack_2b0 = iStack_2b0 * 6;
  do {
    iVar22 = *(int *)(param_1[8] + 200);
    if ((int)uStack_200 <= iVar22) break;
    uVar15 = param_1[8];
    puVar4 = *(undefined **)(uVar15 + 0x70);
    LOCK();
    puVar11 = *(undefined **)(uVar15 + 0x80);
    bVar36 = puVar4 == puVar11;
    if (bVar36) {
      *(undefined **)(uVar15 + 0x80) = puVar10;
      puVar11 = puVar4;
    }
    UNLOCK();
    iStack_2ac = iVar22;
    if (!bVar36) {
      iVar22 = 3000;
      do {
        while( true ) {
          if ((puVar11 == puVar10) && (iVar8 = *(int *)(uVar15 + 0x78) + 1, iVar8 != -1)) {
            *(int *)(uVar15 + 0x78) = iVar8;
            goto LAB_0cb2d05f;
          }
          if (iVar22 == 0) break;
          iVar22 = iVar22 + -1;
          puVar4 = *(undefined **)(uVar15 + 0x70);
          LOCK();
          puVar11 = *(undefined **)(uVar15 + 0x80);
          bVar36 = puVar4 == puVar11;
          if (bVar36) {
            *(undefined **)(uVar15 + 0x80) = puVar10;
            puVar11 = puVar4;
          }
          UNLOCK();
          if (bVar36) goto LAB_0cb2d058;
        }
        sched_yield();
        iVar22 = 0;
        puVar4 = *(undefined **)(uVar15 + 0x70);
        LOCK();
        puVar11 = *(undefined **)(uVar15 + 0x80);
        bVar36 = puVar4 == puVar11;
        if (bVar36) {
          *(undefined **)(uVar15 + 0x80) = puVar10;
          puVar11 = puVar4;
        }
        UNLOCK();
      } while (!bVar36);
    }
LAB_0cb2d058:
    *(undefined4 *)(uVar15 + 0x78) = 1;
LAB_0cb2d05f:
    ppuVar34 = (undefined **)param_1[8];
    puVar4 = ppuVar34[8];
    LOCK();
    puVar11 = ppuVar34[10];
    bVar36 = puVar4 == puVar11;
    if (bVar36) {
      ppuVar34[10] = puVar10;
      puVar11 = puVar4;
    }
    UNLOCK();
    uStack_2d0 = uVar15;
    if (!bVar36) {
      iVar22 = 3000;
      do {
        while( true ) {
          if ((puVar11 == puVar10) && (*(int *)(ppuVar34 + 9) + 1 != -1)) {
            *(int *)(ppuVar34 + 9) = *(int *)(ppuVar34 + 9) + 1;
            goto LAB_0cb2d0cb;
          }
          if (iVar22 == 0) break;
          iVar22 = iVar22 + -1;
          puVar4 = ppuVar34[8];
          LOCK();
          puVar11 = ppuVar34[10];
          bVar36 = puVar4 == puVar11;
          if (bVar36) {
            ppuVar34[10] = puVar10;
            puVar11 = puVar4;
          }
          UNLOCK();
          if (bVar36) goto LAB_0cb2d0c3;
        }
        sched_yield();
        iVar22 = 0;
        puVar4 = ppuVar34[8];
        LOCK();
        puVar11 = ppuVar34[10];
        bVar36 = puVar4 == puVar11;
        if (bVar36) {
          ppuVar34[10] = puVar10;
          puVar11 = puVar4;
        }
        UNLOCK();
      } while (!bVar36);
    }
LAB_0cb2d0c3:
    *(undefined4 *)(ppuVar34 + 9) = 1;
LAB_0cb2d0cb:
    uVar15 = param_1[8];
    puVar32 = *(ulong **)(uVar15 + 0x58);
    puStack_2f8 = *(ulong **)(uVar15 + 0x60);
    if (puVar32 != puStack_2f8) {
      ppuStack_2c0 = ppuVar34 + 8;
      ppuStack_2f0 = ppuVar34;
      do {
        uVar15 = param_1[8];
        bVar3 = (byte)puVar32[1];
        uVar12 = (long)(int)*puVar32 + 0x9e3779b9;
        uVar12 = uVar12 * 0x40 + (ulong)bVar3 + 0x9e3779b9 + (uVar12 >> 2) ^ uVar12;
        ppuVar30 = (undefined **)
                   ((long)*(int *)((long)puVar32 + 4) + 0x9e3779b9 + uVar12 * 0x40 + (uVar12 >> 2) ^
                   uVar12);
        ppuVar24 = *(undefined ***)(uVar15 + 0x90);
        ppuVar33 = ppuVar34;
        if (ppuVar24 != (undefined **)0x0) {
          uVar12 = (long)ppuVar24 - ((ulong)ppuVar24 >> 1 & 0x5555555555555555);
          uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
          uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar12 >> 0x38 < 2) {
            ppuVar34 = (undefined **)((long)ppuVar24 - 1U & (ulong)ppuVar30);
          }
          else {
            ppuVar34 = ppuVar30;
            if (ppuVar24 <= ppuVar30) {
              ppuVar34 = (undefined **)((ulong)ppuVar30 % (ulong)ppuVar24);
            }
          }
          plVar29 = *(long **)(*(long *)(uVar15 + 0x88) + (long)ppuVar34 * 8);
          ppuVar33 = ppuVar34;
          if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
            if ((byte)(uVar12 >> 0x38) < 2) {
              do {
                if ((undefined **)plVar29[1] == ppuVar30) {
                  if ((plVar29[2] == *puVar32) && (*(byte *)(plVar29 + 3) == bVar3))
                  goto LAB_0cb2d6d1;
                }
                else if ((undefined **)((ulong)plVar29[1] & (long)ppuVar24 - 1U) != ppuVar34) break;
                plVar29 = (long *)*plVar29;
              } while (plVar29 != (long *)0x0);
            }
            else {
              do {
                ppuVar25 = (undefined **)plVar29[1];
                if (ppuVar25 == ppuVar30) {
                  if ((plVar29[2] == *puVar32) && (*(byte *)(plVar29 + 3) == bVar3))
                  goto LAB_0cb2d6d1;
                }
                else {
                  if (ppuVar24 <= ppuVar25) {
                    if (((ulong)ppuVar25 | (ulong)ppuVar24) >> 0x20 == 0) {
                      ppuVar25 = (undefined **)
                                 (((ulong)ppuVar25 & 0xffffffff) % ((ulong)ppuVar24 & 0xffffffff));
                    }
                    else {
                      ppuVar25 = (undefined **)((ulong)ppuVar25 % (ulong)ppuVar24);
                    }
                  }
                  if (ppuVar25 != ppuVar34) break;
                }
                plVar29 = (long *)*plVar29;
              } while (plVar29 != (long *)0x0);
            }
          }
        }
        plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
        if (plVar29 == (long *)0x0) {
          func_0x0eec74c0(0x20,0);
        }
        *plVar29 = 0;
        plVar29[1] = (long)ppuVar30;
        uVar12 = puVar32[1];
        plVar29[2] = *puVar32;
        plVar29[3] = uVar12;
        fVar37 = (float)(*(long *)(uVar15 + 0xa0) + 1);
        if ((long)ppuVar24 < 0) {
          fVar39 = (float)ppuVar24;
          fVar38 = *(float *)(uVar15 + 0xa8);
          if (ppuVar24 != (undefined **)0x0) goto LAB_0cb2d343;
LAB_0cb2d360:
          uVar12 = 1;
          if ((undefined **)0x2 < ppuVar24) {
            uVar12 = (ulong)(((ulong)ppuVar24 & (long)ppuVar24 - 1U) != 0);
          }
          ppuVar33 = (undefined **)((long)ppuVar24 * 2 | uVar12);
          fVar37 = (float)func_0x0eee3ab0(fVar37 / fVar38);
          ppuVar34 = (undefined **)
                     ((long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37);
          if (ppuVar34 < ppuVar33) {
            ppuVar34 = ppuVar33;
          }
          ppuVar33 = (undefined **)0x2;
          if ((ppuVar34 == (undefined **)0x1) ||
             (ppuVar33 = ppuVar34, ((ulong)ppuVar34 & (long)ppuVar34 - 1U) == 0)) {
            bVar36 = ppuVar33 < ppuVar24;
            ppuVar34 = ppuVar33;
            if (ppuVar33 <= ppuVar24) goto LAB_0cb2d504;
LAB_0cb2d3da:
            if ((ulong)ppuVar33 >> 0x3d != 0) goto LAB_0cb2ee1f;
            lVar20 = (long)ppuVar33 * 8;
            ppuVar34 = (undefined **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
            if (ppuVar34 == (undefined **)0x0) {
              func_0x0eec74c0(lVar20,0);
            }
            lVar35 = *(long *)(uVar15 + 0x88);
            *(undefined ***)(uVar15 + 0x88) = ppuVar34;
            puStack_2c8 = puVar32;
            if (lVar35 != 0) {
              func_0x0412a280(lVar35,*(long *)(uVar15 + 0x90) << 3);
              ppuVar34 = *(undefined ***)(uVar15 + 0x88);
            }
            *(undefined ***)(uVar15 + 0x90) = ppuVar33;
            memset(ppuVar34,0,lVar20);
            plVar18 = *(long **)(uVar15 + 0x98);
            puVar32 = puStack_2c8;
            if (plVar18 != (long *)0x0) {
              ppuVar24 = (undefined **)plVar18[1];
              uVar12 = (long)ppuVar33 - 1;
              if (((ulong)ppuVar33 & uVar12) == 0) {
                ppuVar34[(ulong)ppuVar24 & uVar12] = (undefined *)(uVar15 + 0x98);
                uVar16 = (ulong)ppuVar24 & uVar12;
                while (plVar28 = plVar18, plVar18 = (long *)*plVar28, plVar18 != (long *)0x0) {
                  uVar26 = plVar18[1] & uVar12;
                  if (uVar26 != uVar16) {
                    if (ppuVar34[uVar26] == (undefined *)0x0) {
                      ppuVar34[uVar26] = (undefined *)plVar28;
                      uVar16 = uVar26;
                    }
                    else {
                      *plVar28 = *plVar18;
                      *plVar18 = *(undefined8 *)ppuVar34[uVar26];
                      *(long **)ppuVar34[uVar26] = plVar18;
                      plVar18 = plVar28;
                    }
                  }
                }
              }
              else {
                if (ppuVar33 <= ppuVar24) {
                  if (((ulong)ppuVar24 | (ulong)ppuVar33) >> 0x20 == 0) {
                    ppuVar24 = (undefined **)
                               (((ulong)ppuVar24 & 0xffffffff) % ((ulong)ppuVar33 & 0xffffffff));
                  }
                  else {
                    ppuVar24 = (undefined **)((ulong)ppuVar24 % (ulong)ppuVar33);
                  }
                }
                ppuVar34[(long)ppuVar24] = (undefined *)(uVar15 + 0x98);
                plVar28 = (long *)*plVar18;
                while (plVar28 != (long *)0x0) {
                  ppuVar25 = (undefined **)plVar28[1];
                  if (ppuVar33 <= ppuVar25) {
                    if (((ulong)ppuVar25 | (ulong)ppuVar33) >> 0x20 == 0) {
                      ppuVar25 = (undefined **)
                                 (((ulong)ppuVar25 & 0xffffffff) % ((ulong)ppuVar33 & 0xffffffff));
                    }
                    else {
                      ppuVar25 = (undefined **)((ulong)ppuVar25 % (ulong)ppuVar33);
                    }
                  }
                  if (ppuVar25 != ppuVar24) {
                    if (ppuVar34[(long)ppuVar25] == (undefined *)0x0) {
                      ppuVar34[(long)ppuVar25] = (undefined *)plVar18;
                      ppuVar24 = ppuVar25;
                    }
                    else {
                      *plVar18 = *plVar28;
                      *plVar28 = *(long *)ppuVar34[(long)ppuVar25];
                      *(long **)ppuVar34[(long)ppuVar25] = plVar28;
                      plVar28 = plVar18;
                    }
                  }
                  plVar18 = plVar28;
                  plVar28 = (long *)*plVar18;
                }
              }
            }
          }
          else {
            ppuVar33 = (undefined **)func_0x0412c3f0();
            ppuVar24 = *(undefined ***)(uVar15 + 0x90);
            bVar36 = ppuVar33 < ppuVar24;
            ppuVar34 = ppuVar33;
            if (ppuVar24 < ppuVar33) goto LAB_0cb2d3da;
LAB_0cb2d504:
            if (bVar36) {
              fVar37 = (float)func_0x0eee3ab0((float)*(ulong *)(uVar15 + 0xa0) /
                                              *(float *)(uVar15 + 0xa8));
              ppuVar33 = (undefined **)
                         ((long)(fVar37 - _DAT_01198778) & (long)fVar37 >> 0x3f | (long)fVar37);
              if ((ppuVar24 < (undefined **)0x3) ||
                 (uVar12 = (long)ppuVar24 - ((ulong)ppuVar24 >> 1 & 0x5555555555555555),
                 uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
                 1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                           ))) {
                ppuVar33 = (undefined **)func_0x0412c3f0(ppuVar33);
                if (ppuVar33 < ppuVar34) {
                  ppuVar33 = ppuVar34;
                }
              }
              else {
                if ((undefined **)0x1 < ppuVar33) {
                  lVar20 = 0x3f;
                  if ((long)ppuVar33 - 1U != 0) {
                    for (; (long)ppuVar33 - 1U >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  ppuVar33 = (undefined **)(1L << (-((byte)lVar20 ^ 0x3f) & 0x3f));
                }
                if (ppuVar33 < ppuVar34) {
                  ppuVar33 = ppuVar34;
                }
              }
              if (ppuVar33 < ppuVar24) {
                if (ppuVar33 != (undefined **)0x0) goto LAB_0cb2d3da;
                lVar20 = *(long *)(uVar15 + 0x88);
                *(undefined8 *)(uVar15 + 0x88) = 0;
                if (lVar20 != 0) {
                  func_0x0412a280(lVar20,*(long *)(uVar15 + 0x90) << 3);
                }
                *(undefined8 *)(uVar15 + 0x90) = 0;
              }
            }
          }
          ppuVar24 = *(undefined ***)(uVar15 + 0x90);
          if (((ulong)ppuVar24 & (long)ppuVar24 - 1U) == 0) {
            ppuVar33 = (undefined **)((ulong)ppuVar30 & (long)ppuVar24 - 1U);
          }
          else {
            ppuVar33 = ppuVar30;
            if (ppuVar24 <= ppuVar30) {
              ppuVar33 = (undefined **)((ulong)ppuVar30 % (ulong)ppuVar24);
            }
          }
        }
        else {
          fVar39 = (float)(long)ppuVar24;
          fVar38 = *(float *)(uVar15 + 0xa8);
          if (ppuVar24 == (undefined **)0x0) goto LAB_0cb2d360;
LAB_0cb2d343:
          ppuVar34 = ppuVar33;
          if (fVar39 * fVar38 < fVar37) goto LAB_0cb2d360;
        }
        lVar20 = *(long *)(uVar15 + 0x88);
        plVar18 = *(long **)(lVar20 + (long)ppuVar33 * 8);
        if (plVar18 == (long *)0x0) {
          *plVar29 = *(long *)(uVar15 + 0x98);
          *(long **)(uVar15 + 0x98) = plVar29;
          *(ulong *)(lVar20 + (long)ppuVar33 * 8) = uVar15 + 0x98;
          if (*plVar29 != 0) {
            ppuVar33 = *(undefined ***)(*plVar29 + 8);
            if (((ulong)ppuVar24 & (long)ppuVar24 - 1U) == 0) {
              *(long **)(lVar20 + ((ulong)ppuVar33 & (long)ppuVar24 - 1U) * 8) = plVar29;
            }
            else {
              if (ppuVar24 <= ppuVar33) {
                if (((ulong)ppuVar33 | (ulong)ppuVar24) >> 0x20 == 0) {
                  *(long **)(lVar20 + (((ulong)ppuVar33 & 0xffffffff) %
                                      ((ulong)ppuVar24 & 0xffffffff)) * 8) = plVar29;
                  goto LAB_0cb2d6ca;
                }
                ppuVar33 = (undefined **)((ulong)ppuVar33 % (ulong)ppuVar24);
              }
              *(long **)(lVar20 + (long)ppuVar33 * 8) = plVar29;
            }
          }
        }
        else {
          *plVar29 = *plVar18;
          *plVar18 = (long)plVar29;
        }
LAB_0cb2d6ca:
        *(long *)(uVar15 + 0xa0) = *(long *)(uVar15 + 0xa0) + 1;
LAB_0cb2d6d1:
        puVar32 = puVar32 + 2;
      } while (puVar32 != puStack_2f8);
      uVar15 = param_1[8];
      puVar32 = *(ulong **)(uVar15 + 0x58);
      ppuVar34 = ppuStack_2f0;
    }
    *(ulong **)(uVar15 + 0x60) = puVar32;
    if (ppuVar34[10] == puVar10) {
      iVar22 = *(int *)(ppuVar34 + 9);
      if (iVar22 == 1) {
        *(undefined4 *)(ppuVar34 + 9) = 0;
        ppuVar34[10] = ppuVar34[8];
        goto LAB_0cb2d8a0;
      }
      if (iVar22 == 0) goto LAB_0cb2d82d;
      *(int *)(ppuVar34 + 9) = iVar22 + -1;
      uVar15 = param_1[8];
      plVar18 = *(long **)(uVar15 + 0x98);
    }
    else {
LAB_0cb2d82d:
      cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
      if (cVar6 == '\0') {
LAB_0cb2d8a0:
        uVar15 = param_1[8];
        plVar18 = *(long **)(uVar15 + 0x98);
      }
      else {
        _DAT_00000000 = 0xdeadc0de;
        uVar15 = param_1[8];
        plVar18 = *(long **)(uVar15 + 0x98);
      }
    }
    if (plVar18 != (long *)0x0) {
      do {
        plVar28 = plVar18 + 2;
        uVar15 = param_1[8];
        iVar22 = (**(code **)(**(long **)(param_1[5] + 0x3a8) + 0x10))
                           (*(long **)(param_1[5] + 0x3a8),plVar28);
        puStack_2f8 = (ulong *)CONCAT44(puStack_2f8._4_4_,iVar22);
        puVar32 = *(ulong **)(uVar15 + 0xb8);
        if (puVar32 < *(ulong **)(uVar15 + 0xc0)) {
          iVar8 = *(int *)((long)plVar18 + 0x14);
          lVar20 = plVar18[3];
          iVar9 = *(int *)((long)plVar18 + 0x1c);
          *(int *)puVar32 = (int)*plVar28;
          *(int *)((long)puVar32 + 4) = iVar8;
          *(int *)(puVar32 + 1) = (int)lVar20;
          *(int *)((long)puVar32 + 0xc) = iVar9;
          *(int *)(puVar32 + 2) = iVar22;
          puVar32 = puVar32 + 3;
        }
        else {
          puVar14 = *(ulong **)(uVar15 + 0xb0);
          plVar29 = (long *)((long)puVar32 - (long)puVar14);
          ppuVar34 = (undefined **)(((long)plVar29 >> 3) * -0x5555555555555555 + 1);
          if ((undefined **)0xaaaaaaaaaaaaaaa < ppuVar34) {
            func_0x0cb4a890();
LAB_0cb2ee1a:
            func_0x04882eb0();
LAB_0cb2ee1f:
            uVar21 = func_0x04882eb0();
            if (puStack_1c8 != (undefined *)0x0) {
              (**(code **)(puStack_1c8 + 8))(&puStack_1c8);
            }
            func_0x0cb307f0(ppuVar34,plVar29);
            func_0x04a7efb0(&uStack_2a8);
            func_0x064bd3a0(&ppuStack_2e8);
            func_0x0cb2f230(puStack_2f8);
            func_0x0eee0720(uStack_2d0 + 0x70);
            uVar21 = func_0x0eee2d70(uVar21);
            func_0x04882e20(uVar21);
            return (undefined *)0x0;
          }
          ppuStack_2f0 = (undefined **)((long)*(ulong **)(uVar15 + 0xc0) - (long)puVar14);
          ppuVar24 = (undefined **)(((long)ppuStack_2f0 >> 3) * 0x5555555555555556);
          if (ppuVar34 < ppuVar24) {
            ppuVar34 = ppuVar24;
          }
          if (0x555555555555554 < (ulong)(((long)ppuStack_2f0 >> 3) * -0x5555555555555555)) {
            ppuVar34 = (undefined **)0xaaaaaaaaaaaaaaa;
          }
          puStack_2c8 = puVar14;
          if ((undefined **)0xaaaaaaaaaaaaaaa < ppuVar34) goto LAB_0cb2ee1a;
          ppuStack_2c0 = (undefined **)((long)ppuVar34 * 0x18);
          piVar13 = (int *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
          if (piVar13 == (int *)0x0) {
            func_0x0eec74c0(ppuStack_2c0,0);
          }
          iVar22 = *(int *)((long)plVar18 + 0x14);
          lVar20 = plVar18[3];
          iVar8 = *(int *)((long)plVar18 + 0x1c);
          piVar23 = (int *)((long)piVar13 + (long)plVar29);
          *piVar23 = (int)*plVar28;
          piVar23[1] = iVar22;
          piVar23[2] = (int)lVar20;
          piVar23[3] = iVar8;
          *(undefined4 *)((long)(piVar13 + 4) + (long)plVar29) = puStack_2f8._0_4_;
          piVar23 = piVar13;
          for (puVar14 = puStack_2c8; puVar14 != puVar32; puVar14 = puVar14 + 3) {
            *(ulong *)(piVar23 + 4) = puVar14[2];
            iVar22 = *(int *)((long)puVar14 + 4);
            uVar12 = puVar14[1];
            iVar8 = *(int *)((long)puVar14 + 0xc);
            *piVar23 = (int)*puVar14;
            piVar23[1] = iVar22;
            piVar23[2] = (int)uVar12;
            piVar23[3] = iVar8;
            piVar23 = piVar23 + 6;
          }
          puVar32 = (ulong *)((long)piVar13 + (long)plVar29 + 0x18);
          *(int **)(uVar15 + 0xb0) = piVar13;
          *(ulong **)(uVar15 + 0xb8) = puVar32;
          *(int **)(uVar15 + 0xc0) = piVar13 + (long)ppuVar34 * 6;
          if (puStack_2c8 != (ulong *)0x0) {
            func_0x0412a280(puStack_2c8,ppuStack_2f0);
          }
        }
        *(ulong **)(uVar15 + 0xb8) = puVar32;
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      uVar15 = param_1[8];
    }
    iVar22 = iStack_2b0 - iStack_2ac;
    lVar20 = *(long *)(uVar15 + 0xb0);
    lVar35 = *(long *)(uVar15 + 0xb8);
    uVar15 = (lVar35 - lVar20 >> 3) * -0x5555555555555555;
    lVar31 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    uVar7 = ((uint)lVar31 ^ 0x3f) * 2 ^ 0x7e;
    if (lVar35 == lVar20) {
      uVar7 = 0;
    }
    func_0x0cb4a8a0(lVar20,lVar35,uVar7,1);
    uVar15 = param_1[8];
    lVar20 = *(long *)(uVar15 + 0xb0);
    lVar35 = *(long *)(uVar15 + 0xb8);
    if (0 < iVar22 && lVar35 != lVar20) {
LAB_0cb2db00:
      plVar29 = (long *)(lVar35 + -0x18);
      uVar12 = *(ulong *)(uVar15 + 0x90);
      if (uVar12 != 0) {
        lVar20 = *(long *)(uVar15 + 0x88);
        bVar3 = *(byte *)(lVar35 + -0x10);
        uVar16 = (long)*(int *)(lVar35 + -0x18) + 0x9e3779b9;
        uVar16 = uVar16 * 0x40 + (ulong)bVar3 + 0x9e3779b9 + (uVar16 >> 2) ^ uVar16;
        uVar16 = (long)*(int *)(lVar35 + -0x14) + 0x9e3779b9 + uVar16 * 0x40 + (uVar16 >> 2) ^
                 uVar16;
        uVar26 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
        uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar26 >> 0x38 < 2) {
          uVar27 = uVar12 - 1 & uVar16;
        }
        else {
          uVar27 = uVar16;
          if (uVar12 <= uVar16) {
            uVar27 = uVar16 % uVar12;
          }
        }
        puVar19 = *(undefined8 **)(lVar20 + uVar27 * 8);
        if ((puVar19 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar19, plVar18 != (long *)0x0))
        {
          uVar2 = uVar12 - 1;
          bVar5 = (byte)(uVar26 >> 0x38);
          if (bVar5 < 2) {
            do {
              if (plVar18[1] == uVar16) {
                if ((plVar18[2] == *plVar29) && (*(byte *)(plVar18 + 3) == bVar3))
                goto LAB_0cb2dc3d;
              }
              else if ((plVar18[1] & uVar2) != uVar27) break;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar26 = plVar18[1];
              if (uVar26 == uVar16) {
                if ((plVar18[2] == *plVar29) && (*(byte *)(plVar18 + 3) == bVar3))
                goto LAB_0cb2dc3d;
              }
              else {
                if (uVar12 <= uVar26) {
                  if ((uVar26 | uVar12) >> 0x20 == 0) {
                    uVar26 = (uVar26 & 0xffffffff) % (uVar12 & 0xffffffff);
                  }
                  else {
                    uVar26 = uVar26 % uVar12;
                  }
                }
                if (uVar26 != uVar27) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
      goto LAB_0cb2dca5;
    }
LAB_0cb2ec50:
    *(long *)(uVar15 + 0xb8) = lVar20;
    if (*(undefined **)(uStack_2d0 + 0x80) == puVar10) {
      iVar22 = *(int *)(uStack_2d0 + 0x78);
      if (iVar22 == 1) {
        *(undefined4 *)(uStack_2d0 + 0x78) = 0;
        *(undefined8 *)(uStack_2d0 + 0x80) = *(undefined8 *)(uStack_2d0 + 0x70);
      }
      else {
        if (iVar22 == 0) goto LAB_0cb2ec76;
        *(int *)(uStack_2d0 + 0x78) = iVar22 + -1;
      }
    }
    else {
LAB_0cb2ec76:
      cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
      if (cVar6 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    uVar15 = param_1[8];
    puVar4 = *(undefined **)(uVar15 + 0x70);
    LOCK();
    puVar11 = *(undefined **)(uVar15 + 0x80);
    bVar36 = puVar4 == puVar11;
    if (bVar36) {
      *(undefined **)(uVar15 + 0x80) = puVar10;
      puVar11 = puVar4;
    }
    UNLOCK();
    if (!bVar36) {
      iVar22 = 3000;
      do {
        while( true ) {
          if ((puVar11 == puVar10) && (iVar8 = *(int *)(uVar15 + 0x78) + 1, iVar8 != -1)) {
            *(int *)(uVar15 + 0x78) = iVar8;
            uVar12 = param_1[8];
            if (*(long *)(uVar12 + 0x60) != *(long *)(uVar12 + 0x58)) goto LAB_0cb2ed80;
            goto LAB_0cb2ed49;
          }
          if (iVar22 == 0) break;
          iVar22 = iVar22 + -1;
          puVar4 = *(undefined **)(uVar15 + 0x70);
          LOCK();
          puVar11 = *(undefined **)(uVar15 + 0x80);
          bVar36 = puVar4 == puVar11;
          if (bVar36) {
            *(undefined **)(uVar15 + 0x80) = puVar10;
            puVar11 = puVar4;
          }
          UNLOCK();
          if (bVar36) goto LAB_0cb2ed34;
        }
        sched_yield();
        iVar22 = 0;
        puVar4 = *(undefined **)(uVar15 + 0x70);
        LOCK();
        puVar11 = *(undefined **)(uVar15 + 0x80);
        bVar36 = puVar4 == puVar11;
        if (bVar36) {
          *(undefined **)(uVar15 + 0x80) = puVar10;
          puVar11 = puVar4;
        }
        UNLOCK();
      } while (!bVar36);
    }
LAB_0cb2ed34:
    *(undefined4 *)(uVar15 + 0x78) = 1;
    uVar12 = param_1[8];
    if (*(long *)(uVar12 + 0x60) == *(long *)(uVar12 + 0x58)) {
LAB_0cb2ed49:
      if (*(long *)(uVar12 + 0xa0) != 0) goto LAB_0cb2ed80;
      bVar36 = false;
      if (*(undefined **)(uVar15 + 0x80) == puVar10) goto LAB_0cb2ed91;
LAB_0cb2eda1:
      cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
      if (cVar6 != '\0') {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    else {
LAB_0cb2ed80:
      bVar36 = true;
      if (*(undefined **)(uVar15 + 0x80) != puVar10) goto LAB_0cb2eda1;
LAB_0cb2ed91:
      iVar22 = *(int *)(uVar15 + 0x78);
      if (iVar22 == 1) {
        *(undefined4 *)(uVar15 + 0x78) = 0;
        *(undefined8 *)(uVar15 + 0x80) = *(undefined8 *)(uVar15 + 0x70);
      }
      else {
        if (iVar22 == 0) goto LAB_0cb2eda1;
        *(int *)(uVar15 + 0x78) = iVar22 + -1;
      }
    }
  } while (bVar36);
LAB_0cb2ce8f:
  puVar11 = (undefined *)param_1[8];
  if (*(undefined **)(puVar11 + 0xe0) == puVar10) {
    iVar22 = *(int *)(puVar11 + 0xd8);
    if (iVar22 == 1) {
      *(undefined4 *)(puVar11 + 0xd8) = 0;
      *(undefined8 *)(puVar11 + 0xe0) = *(undefined8 *)(puVar11 + 0xd0);
      return puVar11;
    }
    if (iVar22 != 0) {
      *(int *)(puVar11 + 0xd8) = iVar22 + -1;
      return puVar11;
    }
  }
  puVar11 = (undefined *)
            func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if ((char)puVar11 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
  return puVar11;
LAB_0cb2dc3d:
  if (bVar5 < 2) {
    uVar16 = uVar16 & uVar2;
  }
  else if (uVar12 <= uVar16) {
    uVar16 = uVar16 % uVar12;
  }
  plVar28 = *(long **)(lVar20 + uVar16 * 8);
  do {
    plVar17 = plVar28;
    plVar28 = (long *)*plVar17;
  } while ((long *)*plVar17 != plVar18);
  if (plVar17 == (long *)(uVar15 + 0x98)) {
LAB_0cb2e02d:
    if (*plVar18 != 0) {
      uVar26 = *(ulong *)(*plVar18 + 8);
      if (bVar5 < 2) {
        uVar26 = uVar26 & uVar2;
      }
      else if (uVar12 <= uVar26) {
        if ((uVar26 | uVar12) >> 0x20 == 0) {
          uVar26 = (uVar26 & 0xffffffff) % (uVar12 & 0xffffffff);
        }
        else {
          uVar26 = uVar26 % uVar12;
        }
      }
      if (uVar26 == uVar16) goto LAB_0cb2e073;
    }
    *(undefined8 *)(lVar20 + uVar16 * 8) = 0;
  }
  else {
    uVar26 = plVar17[1];
    if (bVar5 < 2) {
      uVar26 = uVar26 & uVar2;
    }
    else if (uVar12 <= uVar26) {
      if ((uVar26 | uVar12) >> 0x20 == 0) {
        uVar26 = (uVar26 & 0xffffffff) % (uVar12 & 0xffffffff);
      }
      else {
        uVar26 = uVar26 % uVar12;
      }
    }
    if (uVar26 != uVar16) goto LAB_0cb2e02d;
  }
LAB_0cb2e073:
  lVar31 = *plVar18;
  if (lVar31 == 0) {
    lVar31 = 0;
  }
  else {
    uVar26 = *(ulong *)(lVar31 + 8);
    if (bVar5 < 2) {
      uVar26 = uVar26 & uVar2;
    }
    else if (uVar12 <= uVar26) {
      if ((uVar26 | uVar12) >> 0x20 == 0) {
        uVar26 = (uVar26 & 0xffffffff) % (uVar12 & 0xffffffff);
      }
      else {
        uVar26 = uVar26 % uVar12;
      }
    }
    if (uVar26 != uVar16) {
      *(long **)(lVar20 + uVar26 * 8) = plVar17;
      lVar31 = *plVar18;
    }
  }
  *plVar17 = lVar31;
  *plVar18 = 0;
  *(long *)(uVar15 + 0xa0) = *(long *)(uVar15 + 0xa0) + -1;
  func_0x0412a280(plVar18,0x20);
  uVar15 = param_1[8];
LAB_0cb2dca5:
  LOCK();
  *(int *)(uVar15 + 0xcc) = *(int *)(uVar15 + 0xcc) + -1;
  UNLOCK();
  plVar18 = (long *)param_1[8];
  puVar4 = (undefined *)*plVar18;
  LOCK();
  puVar11 = (undefined *)plVar18[2];
  bVar36 = puVar4 == puVar11;
  if (bVar36) {
    plVar18[2] = (long)puVar10;
    puVar11 = puVar4;
  }
  UNLOCK();
  if (!bVar36) {
    iVar8 = 3000;
    do {
      while( true ) {
        if ((puVar11 == puVar10) && (iVar9 = (int)plVar18[1] + 1, iVar9 != -1)) {
          *(int *)(plVar18 + 1) = iVar9;
          uVar15 = param_1[8];
          uVar12 = *(ulong *)(uVar15 + 0x20);
          goto joined_r0x0cb2de93;
        }
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        puVar4 = (undefined *)*plVar18;
        LOCK();
        puVar11 = (undefined *)plVar18[2];
        bVar36 = puVar4 == puVar11;
        if (bVar36) {
          plVar18[2] = (long)puVar10;
          puVar11 = puVar4;
        }
        UNLOCK();
        if (bVar36) goto LAB_0cb2dd10;
      }
      sched_yield();
      iVar8 = 0;
      puVar4 = (undefined *)*plVar18;
      LOCK();
      puVar11 = (undefined *)plVar18[2];
      bVar36 = puVar4 == puVar11;
      if (bVar36) {
        plVar18[2] = (long)puVar10;
        puVar11 = puVar4;
      }
      UNLOCK();
    } while (!bVar36);
  }
LAB_0cb2dd10:
  *(undefined4 *)(plVar18 + 1) = 1;
  uVar15 = param_1[8];
  uVar12 = *(ulong *)(uVar15 + 0x20);
joined_r0x0cb2de93:
  if (uVar12 != 0) {
    uVar16 = (long)*(int *)(lVar35 + -0x18) + 0x9e3779b9;
    uVar16 = (long)*(int *)(lVar35 + -0x14) + 0x9e3779b9 + uVar16 * 0x40 + (uVar16 >> 2) ^ uVar16;
    uVar26 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
    uVar26 = ((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar26 >> 0x38 < 2) {
      uVar27 = uVar12 - 1 & uVar16;
    }
    else {
      uVar27 = uVar16;
      if (uVar12 <= uVar16) {
        uVar27 = uVar16 % uVar12;
      }
    }
    plVar28 = *(long **)(*(long *)(uVar15 + 0x18) + uVar27 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if ((byte)(uVar26 >> 0x38) < 2) {
        do {
          if (plVar28[1] == uVar16) {
            if (plVar28[2] == *plVar29) goto LAB_0cb2df4a;
          }
          else if ((plVar28[1] & uVar12 - 1) != uVar27) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar28[1];
          if (uVar15 == uVar16) {
            if (plVar28[2] == *plVar29) goto LAB_0cb2df4a;
          }
          else {
            if (uVar12 <= uVar15) {
              if ((uVar15 | uVar12) >> 0x20 == 0) {
                if ((uVar15 & 0xffffffff) % (uVar12 & 0xffffffff) == uVar27) goto LAB_0cb2de1a;
                break;
              }
              uVar15 = uVar15 % uVar12;
            }
            if (uVar15 != uVar27) break;
          }
LAB_0cb2de1a:
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  if ((undefined *)plVar18[2] == puVar10) {
    iVar8 = (int)plVar18[1];
    if (iVar8 == 1) {
      *(undefined4 *)(plVar18 + 1) = 0;
      plVar18[2] = *plVar18;
    }
    else {
      if (iVar8 == 0) goto LAB_0cb2deb7;
      *(int *)(plVar18 + 1) = iVar8 + -1;
    }
  }
  else {
LAB_0cb2deb7:
    cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  iVar8 = 0;
  goto LAB_0cb2df12;
LAB_0cb2df4a:
  puStack_2c8 = (ulong *)plVar28[3];
  puStack_2f8 = (ulong *)plVar28[4];
  if (puStack_2f8 != (ulong *)0x0) {
    LOCK();
    puStack_2f8[1] = puStack_2f8[1] + 1;
    UNLOCK();
  }
  if ((undefined *)plVar18[2] == puVar10) {
    iVar8 = (int)plVar18[1];
    if (iVar8 == 1) {
      *(undefined4 *)(plVar18 + 1) = 0;
      plVar18[2] = *plVar18;
    }
    else {
      if (iVar8 == 0) goto LAB_0cb2df88;
      *(int *)(plVar18 + 1) = iVar8 + -1;
    }
  }
  else {
LAB_0cb2df88:
    cVar6 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar6 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uStack_1f8 = (ulong)(*(int *)(lVar35 + -0x18) - 1);
  iStack_1f0 = *(int *)(lVar35 + -0x14) + -1;
  uStack_1ec = (ulong)(*(int *)(lVar35 + -0x18) + 1);
  iStack_1e4 = *(int *)(lVar35 + -0x14) + 1;
  uStack_1e0 = 0x100000003;
  uStack_1d8 = _DAT_014e7fe0;
  uStack_1d4 = _UNK_014e7fe4;
  uStack_1d0 = _UNK_014e7fe8;
  uStack_1cc = _UNK_014e7fec;
  plVar18 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x240);
  if (plVar18 == (long *)0x0) {
    func_0x0eec74c0(0x240,0);
  }
  plVar18[1] = 0;
  plVar18[2] = 0;
  *plVar18 = (long)&UNK_0f0409a0;
  uVar15 = param_1[5];
  plVar18[4] = (long)&UNK_0f534768;
  puVar19 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar19 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puVar19[1] = 0;
  puVar19[2] = 0;
  *puVar19 = &UNK_0ef44a60;
  *(undefined1 *)(puVar19 + 3) = 1;
  plVar18[5] = (long)(puVar19 + 3);
  plVar18[6] = (long)puVar19;
  plVar18[4] = (long)&UNK_0f3f0e90;
  *(undefined4 *)(plVar18 + 7) = 0x10;
  if (uVar15 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(uVar15 + 0xa0);
  }
  ppuStack_2f0 = (undefined **)(plVar18 + 4);
  plVar18[8] = lVar20;
  plVar18[9] = uVar15;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = *(long *)(uVar15 + 0x390);
  *(undefined1 *)(plVar18 + 0xd) = 0;
  plVar18[0xe] = 0;
  plVar18[0xf] = 0;
  plVar18[0x10] = 0;
  plVar18[0x11] = 0;
  plVar18[4] = (long)&UNK_0f3f24c8;
  *(undefined4 *)(plVar18 + 0x12) = 0;
  plVar18[0x18] = 0;
  plVar18[0x1e] = 0;
  plVar18[0x24] = 0;
  func_0x0412d440(plVar18 + 0x26);
  plVar18[0x42] = 0;
  plVar18[0x43] = 0;
  plVar18[0x40] = 0;
  plVar18[0x41] = 0;
  plVar18[0x3e] = 0;
  plVar18[0x3f] = 0;
  plVar18[0x3c] = 0;
  plVar18[0x3d] = 0;
  plVar18[0x3a] = 0;
  plVar18[0x3b] = 0;
  plVar18[0x38] = 0;
  plVar18[0x39] = 0;
  *(undefined1 *)(plVar18 + 0x44) = 0;
  *(undefined4 *)((long)plVar18 + 0x222) = 0x7fff8000;
  plVar18[0x46] = (long)param_1;
  plStack_218 = (long *)0x0;
  uStack_210 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  lStack_238 = 0;
  uStack_230 = 0;
  plStack_248 = (long *)0x0;
  uStack_240 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  lStack_268 = 0;
  uStack_260 = 0;
  plStack_278 = (long *)0x0;
  uStack_270 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  lStack_298 = 0;
  uStack_290 = 0;
  uStack_2a8 = 0;
  plStack_2a0 = (long *)0x0;
  puStack_1c8 = &UNK_0f3f2300;
  puStack_1c0 = puStack_2c8;
  ppuStack_1a8 = &puStack_1c8;
  func_0x0cb56120(&puStack_1c8,&lStack_298);
  if (ppuStack_1a8 == &puStack_1c8) {
    lVar20 = 0x20;
LAB_0cb2e37c:
    (**(code **)(*ppuStack_1a8 + lVar20))();
  }
  else {
    lVar20 = 0x28;
    if (ppuStack_1a8 != (undefined **)0x0) goto LAB_0cb2e37c;
  }
  func_0x0cb2ca30(&puStack_1c8,&uStack_2a8);
  FUN_0cb343c0(&puStack_1c8,&uStack_1f8);
  plVar28 = plStack_178;
  plStack_178 = (long *)0x0;
  if (plVar28 == alStack_198) {
    lVar20 = 0x20;
LAB_0cb2e3dc:
    (**(code **)(*plVar28 + lVar20))();
  }
  else {
    lVar20 = 0x28;
    if (plVar28 != (long *)0x0) goto LAB_0cb2e3dc;
  }
  plVar28 = plStack_148;
  plStack_148 = (long *)0x0;
  if (plVar28 == alStack_168) {
    lVar20 = 0x20;
LAB_0cb2e414:
    (**(code **)(*plVar28 + lVar20))();
  }
  else {
    lVar20 = 0x28;
    if (plVar28 != (long *)0x0) goto LAB_0cb2e414;
  }
  ppuVar34 = ppuStack_1a8;
  ppuStack_1a8 = (undefined **)0x0;
  if (ppuVar34 == &puStack_1c8) {
    lVar20 = 0x20;
LAB_0cb2e44c:
    (**(code **)(*ppuVar34 + lVar20))();
  }
  else {
    lVar20 = 0x28;
    if (ppuVar34 != (undefined **)0x0) goto LAB_0cb2e44c;
  }
  puStack_2b8 = (ulong *)(plVar18 + 0x14);
  func_0x052a3910(plVar18 + 0x26,&puStack_2b8);
  func_0x0cb592c0(plVar18 + 0x14,&puStack_1c8);
  func_0x052a3830(&puStack_1c8);
  if (plStack_218 == &lStack_238) {
    lVar20 = 0x20;
LAB_0cb2e4ec:
    (**(code **)(*plStack_218 + lVar20))();
    if (plStack_248 != &lStack_268) goto LAB_0cb2e4bc;
LAB_0cb2e507:
    lVar20 = 0x20;
LAB_0cb2e50c:
    (**(code **)(*plStack_248 + lVar20))();
    if (plStack_278 != &lStack_298) goto LAB_0cb2e4db;
LAB_0cb2e527:
    lVar20 = 0x20;
LAB_0cb2e52c:
    (**(code **)(*plStack_278 + lVar20))();
  }
  else {
    lVar20 = 0x28;
    if (plStack_218 != (long *)0x0) goto LAB_0cb2e4ec;
    if (plStack_248 == &lStack_268) goto LAB_0cb2e507;
LAB_0cb2e4bc:
    lVar20 = 0x28;
    if (plStack_248 != (long *)0x0) goto LAB_0cb2e50c;
    if (plStack_278 == &lStack_298) goto LAB_0cb2e527;
LAB_0cb2e4db:
    lVar20 = 0x28;
    if (plStack_278 != (long *)0x0) goto LAB_0cb2e52c;
  }
  ppuStack_2e8 = ppuStack_2f0;
  uStack_2e0 = plVar18;
  (**(code **)(plVar18[4] + 0x20))(&uStack_2a8,ppuStack_2f0,plVar29);
  if ((uStack_2a8 == 0) || (*(char *)(uStack_2a8 + 0xb8) != *(char *)(lVar35 + -0x10))) {
LAB_0cb2e6db:
    iVar8 = 0;
  }
  else {
    if (1 < *(byte *)(uStack_2a8 + 0xb8)) {
      iStack_300 = *(int *)(lVar35 + -0x18) + -1;
      iVar8 = *(int *)(lVar35 + -0x14);
      do {
        iStack_2fc = iVar8 + -1;
        do {
          ppuVar34 = ppuStack_2e8;
          (**(code **)(*ppuStack_2e8 + 0x20))(&puStack_1c8,ppuStack_2e8,&iStack_300);
          puVar32 = puStack_1c0;
          if (puStack_1c8 == (undefined *)0x0) {
            iVar8 = 1;
          }
          else {
            iVar8 = 0;
            if (puStack_1c8[0x152e] == '\x01') {
              iStack_1f0 = iStack_2fc << 4;
              uStack_1f8 = (ulong)(uint)(iStack_300 << 4);
              puStack_2b8 = &uStack_1f8;
              func_0x0cb59800(ppuVar34 + 0x22,&puStack_2b8);
              iVar8 = 7;
              puVar32 = puStack_1c0;
            }
          }
          iVar9 = iStack_300;
          puStack_1c0 = puVar32;
          if (puVar32 != (ulong *)0x0) {
            LOCK();
            puVar14 = puVar32 + 1;
            uVar15 = *puVar14;
            *puVar14 = *puVar14 - 1;
            UNLOCK();
            if (uVar15 == 0) {
              (**(code **)(*puVar32 + 0x10))(puVar32);
              func_0x0412c2d0(puVar32);
              iVar9 = iStack_300;
            }
          }
          iStack_300 = iVar9;
          if ((iVar8 != 7) && (iVar8 != 0)) goto LAB_0cb2e6db;
          iVar1 = iStack_2fc + 1;
          iVar8 = *(int *)(lVar35 + -0x14);
          bVar36 = iStack_2fc <= iVar8;
          iStack_2fc = iVar1;
        } while (bVar36);
        iStack_300 = iVar9 + 1;
      } while (iVar9 <= *(int *)plVar29);
    }
    if (*(char *)(uStack_2a8 + 0x152e) == '\x01') {
      iVar8 = 1;
      func_0x0cb2f260(param_1,*(undefined8 *)(uStack_2a8 + 0x50));
    }
    else {
      LOCK();
      *(int *)(param_1[8] + 200) = *(int *)(param_1[8] + 200) + 1;
      UNLOCK();
      cVar6 = func_0x0cae0790(uStack_2a8,0,1);
      if (cVar6 == '\0') {
        cVar6 = func_0x0cae0790(uStack_2a8,2,3);
        if (cVar6 != '\0') {
          if ((*(char *)(**(long **)(param_1[4] + 0x3b8) + 0x350) == '\0') &&
             (cVar6 = func_0x0eeddcf0(&UNK_013bcf50,&UNK_0148add0,0x239,&UNK_014dad28,&UNK_0131c428)
             , cVar6 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar18 = plStack_2a0;
          plVar29 = uStack_2e0;
          if (plStack_2a0 != (long *)0x0) {
            LOCK();
            plStack_2a0[1] = plStack_2a0[1] + 1;
            UNLOCK();
          }
          if (uStack_2e0 != (long *)0x0) {
            LOCK();
            uStack_2e0[1] = uStack_2e0[1] + 1;
            UNLOCK();
          }
          puStack_1c8 = &UNK_0f3f2178;
          uStack_1b8 = uStack_2a8;
          plStack_1b0 = plStack_2a0;
          if (plStack_2a0 != (long *)0x0) {
            LOCK();
            plStack_2a0[1] = plStack_2a0[1] + 1;
            UNLOCK();
          }
          ppuStack_1a8 = ppuStack_2e8;
          uStack_1a0 = (undefined4)uStack_2e0;
          uStack_19c = uStack_2e0._4_4_;
          if (uStack_2e0 != (long *)0x0) {
            LOCK();
            uStack_2e0[1] = uStack_2e0[1] + 1;
            UNLOCK();
          }
          puStack_1c0 = param_1;
          func_0x0cb302a0(param_1[5],&UNK_013523da,0x12,param_2,&puStack_1c8);
LAB_0cb2eb6b:
          if (puStack_1c8 != (undefined *)0x0) {
            (**(code **)(puStack_1c8 + 8))(&puStack_1c8);
          }
          if (plVar29 != (long *)0x0) {
            LOCK();
            plVar28 = plVar29 + 1;
            lVar20 = *plVar28;
            *plVar28 = *plVar28 + -1;
            UNLOCK();
            if (lVar20 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              func_0x0412c2d0(plVar29);
            }
          }
          goto LAB_0cb2ebad;
        }
        cVar6 = func_0x0cae0790(uStack_2a8,4,5);
        plVar18 = plStack_2a0;
        plVar29 = uStack_2e0;
        if (cVar6 != '\0') {
          if (plStack_2a0 != (long *)0x0) {
            LOCK();
            plStack_2a0[1] = plStack_2a0[1] + 1;
            UNLOCK();
          }
          if (uStack_2e0 != (long *)0x0) {
            LOCK();
            uStack_2e0[1] = uStack_2e0[1] + 1;
            UNLOCK();
          }
          puStack_1c8 = &UNK_0f3f2190;
          uStack_1b8 = uStack_2a8;
          plStack_1b0 = plStack_2a0;
          if (plStack_2a0 != (long *)0x0) {
            LOCK();
            plStack_2a0[1] = plStack_2a0[1] + 1;
            UNLOCK();
          }
          ppuStack_1a8 = ppuStack_2e8;
          uStack_1a0 = (undefined4)uStack_2e0;
          uStack_19c = uStack_2e0._4_4_;
          if (uStack_2e0 != (long *)0x0) {
            LOCK();
            uStack_2e0[1] = uStack_2e0[1] + 1;
            UNLOCK();
          }
          puStack_1c0 = param_1;
          func_0x0cb302a0(param_1[5],&UNK_013523ed,8,param_2,&puStack_1c8);
          goto LAB_0cb2eb6b;
        }
        cVar6 = func_0x0cae0790(uStack_2a8,6,7);
        plVar18 = plStack_2a0;
        plVar29 = uStack_2e0;
        if (cVar6 != '\0') {
          if (plStack_2a0 != (long *)0x0) {
            LOCK();
            plStack_2a0[1] = plStack_2a0[1] + 1;
            UNLOCK();
          }
          if (uStack_2e0 != (long *)0x0) {
            LOCK();
            uStack_2e0[1] = uStack_2e0[1] + 1;
            UNLOCK();
          }
          puStack_1c8 = &UNK_0f3f21a8;
          uStack_1b8 = uStack_2a8;
          plStack_1b0 = plStack_2a0;
          if (plStack_2a0 != (long *)0x0) {
            LOCK();
            plStack_2a0[1] = plStack_2a0[1] + 1;
            UNLOCK();
          }
          ppuStack_1a8 = ppuStack_2e8;
          uStack_1a0 = (undefined4)uStack_2e0;
          uStack_19c = uStack_2e0._4_4_;
          if (uStack_2e0 != (long *)0x0) {
            LOCK();
            uStack_2e0[1] = uStack_2e0[1] + 1;
            UNLOCK();
          }
          puStack_1c0 = param_1;
          func_0x0cb302a0(param_1[5],&UNK_011ca756,10,param_2,&puStack_1c8);
          goto LAB_0cb2eb6b;
        }
        cVar6 = func_0x0cae0790(uStack_2a8,8,9);
        if (cVar6 != '\0') {
          iVar8 = 1;
          func_0x0cb30180(param_1,uStack_2a8,plStack_2a0,&ppuStack_2e8,param_2);
          goto LAB_0cb2e6dd;
        }
        LOCK();
        *(int *)(param_1[8] + 200) = *(int *)(param_1[8] + 200) + -1;
        UNLOCK();
      }
      else {
        if ((*(char *)(**(long **)(param_1[4] + 0x3b8) + 0x350) == '\0') &&
           (cVar6 = func_0x0eeddcf0(&UNK_013bcf50,&UNK_0148add0,0x1e7,&UNK_014dad28,&UNK_0126860b),
           cVar6 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        plVar18 = plStack_2a0;
        if (plStack_2a0 == (long *)0x0) {
          plStack_1b0 = (long *)0x0;
        }
        else {
          LOCK();
          plStack_2a0[1] = plStack_2a0[1] + 1;
          UNLOCK();
          plStack_1b0 = plStack_2a0;
          LOCK();
          plStack_2a0[1] = plStack_2a0[1] + 1;
          UNLOCK();
        }
        uStack_1b8 = uStack_2a8;
        puStack_1c8 = &UNK_0f3f2160;
        puStack_1c0 = param_1;
        func_0x0cb302a0(param_1[5],&UNK_01409c52,9,param_2,&puStack_1c8);
        if (puStack_1c8 != (undefined *)0x0) {
          (**(code **)(puStack_1c8 + 8))(&puStack_1c8);
        }
LAB_0cb2ebad:
        if (plVar18 != (long *)0x0) {
          LOCK();
          plVar29 = plVar18 + 1;
          lVar20 = *plVar29;
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            func_0x0412c2d0(plVar18);
          }
        }
      }
      iVar8 = 1;
    }
  }
LAB_0cb2e6dd:
  plVar18 = plStack_2a0;
  plVar29 = uStack_2e0;
  if (plStack_2a0 != (long *)0x0) {
    LOCK();
    plVar28 = plStack_2a0 + 1;
    lVar20 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plStack_2a0 + 0x10))(plStack_2a0);
      func_0x0412c2d0(plVar18);
      plVar29 = uStack_2e0;
    }
  }
  uStack_2e0 = plVar29;
  if (plVar29 != (long *)0x0) {
    LOCK();
    plVar18 = plVar29 + 1;
    lVar20 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      func_0x0412c2d0(plVar29);
    }
  }
  puVar32 = puStack_2f8;
  if (puStack_2f8 != (ulong *)0x0) {
    LOCK();
    puVar14 = puStack_2f8 + 1;
    uVar15 = *puVar14;
    *puVar14 = *puVar14 - 1;
    UNLOCK();
    if (uVar15 == 0) {
      (**(code **)(*puStack_2f8 + 0x10))(puStack_2f8);
      func_0x0412c2d0(puVar32);
    }
  }
LAB_0cb2df12:
  uVar15 = param_1[8];
  lVar20 = *(long *)(uVar15 + 0xb0);
  lVar35 = *(long *)(uVar15 + 0xb8) + -0x18;
  *(long *)(uVar15 + 0xb8) = lVar35;
  if ((lVar35 == lVar20) || (iVar22 = iVar22 - iVar8, iVar22 == 0)) goto LAB_0cb2ec50;
  goto LAB_0cb2db00;
}


