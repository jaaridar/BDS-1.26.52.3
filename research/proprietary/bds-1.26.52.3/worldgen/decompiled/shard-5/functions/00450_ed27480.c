/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xee27480 (ELF vaddr 0xed27480)
 * Label: caller-of-callee
 * Body:  [[0ee27480, 0ee2756d] [0ee27570, 0ee276e4] [0ee276f0, 0ee27738] [0ee27740, 0ee27745] [0ee27750, 0ee277a8] [0ee277b0, 0ee279fd] [0ee27a00, 0ee27b1b] [0ee27b20, 0ee27bf8] [0ee27c00, 0ee27c58] [0ee27c60, 0ee27c75] [0ee27c80, 0ee27d58] [0ee27d60, 0ee27d8e] [0ee27d90, 0ee27da8] [0ee27db0, 0ee27ea5] [0ee27eb0, 0ee27f68] [0ee27f70, 0ee27f73] [0ee27f80, 0ee28005] [0ee28010, 0ee28049] [0ee28050, 0ee283f1] [0ee28443, 0ee28490] [0ee284bb, 0ee284c6] [0ee284d4, 0ee284f3]]
 * Ghidra: FUN_0ee27480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0ee27480(long *param_1,long param_2,char param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined4 uStack_21c;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  char cStack_1e8;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long lStack_188;
  long lStack_180;
  long *plStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  long *plStack_140;
  long alStack_138 [32];
  ulong uStack_38;
  
  plStack_178 = param_1 + 0x1e;
  plStack_170 = param_1 + 0x34;
  lVar16 = param_2 + 0x108;
  puStack_150 = (undefined8 *)(param_2 + 0xd0);
  lStack_188 = lVar16;
  lStack_180 = param_2;
  do {
    lStack_158 = func_0x0417cc60();
    func_0x0eee2dd0(alStack_138,0,0x108);
    func_0x0ee26bd0(plStack_178);
    func_0x0412d680(plStack_170);
    uStack_21c = 0x7fffffff;
    if ((long *)param_1[0x39] != (long *)param_1[0x3a]) {
      uStack_21c = *(undefined4 *)(*(long *)param_1[0x39] + 0x30);
    }
    pthread_mutex_unlock(plStack_170);
    plStack_198 = (long *)0x0;
    plStack_190 = (long *)0x0;
    do {
      plStack_218 = (long *)0x0;
      plStack_210 = (long *)0x0;
      plStack_208 = (long *)0x0;
      lStack_160 = func_0x0417cc60();
      if (lStack_160 < *(long *)(param_2 + 0x100) || *(long *)(param_2 + 0x100) == 0) {
        bVar19 = 0;
      }
      else {
        puStack_1c8 = puStack_150;
        plStack_1c0 = (long *)((ulong)plStack_1c0 & 0xffffffffffffff00);
        lVar9 = func_0x0eee2fc0();
        lVar18 = *(long *)(param_2 + 0xd0);
        LOCK();
        lVar12 = *(long *)(param_2 + 0xe0);
        bVar25 = lVar18 == lVar12;
        if (bVar25) {
          *(long *)(param_2 + 0xe0) = lVar9;
          lVar12 = lVar18;
        }
        UNLOCK();
        iVar14 = 1;
        if ((bVar25) || ((lVar12 == lVar9 && (iVar14 = *(int *)(param_2 + 0xd8) + 1, iVar14 != -1)))
           ) {
          *(int *)(param_2 + 0xd8) = iVar14;
          plStack_1c0 = (long *)CONCAT71(plStack_1c0._1_7_,1);
          plVar22 = *(long **)(param_2 + 0xe8);
          plVar23 = *(long **)(param_2 + 0xf0);
          lVar16 = (long)plVar23 - (long)plVar22;
          lStack_148 = lVar9;
          if (lVar16 == 0) {
            plVar10 = (long *)0x0;
            lVar16 = 0;
LAB_0ee27b33:
            *(long *)(param_2 + 0x100) = lVar16;
LAB_0ee27b40:
            if (puStack_1c8[2] != lStack_148) {
LAB_0ee27b63:
              cVar7 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
              if (cVar7 == '\0') goto LAB_0ee27bd0;
              _DAT_00000000 = 0xdeadc0de;
              plVar23 = plStack_218;
              plVar22 = plStack_218;
              if (plStack_218 == plVar10) goto joined_r0x0ee27bdd;
              goto LAB_0ee27c09;
            }
            iVar14 = *(int *)(puStack_1c8 + 1);
            if (iVar14 == 1) {
              *(undefined4 *)(puStack_1c8 + 1) = 0;
              puStack_1c8[2] = *puStack_1c8;
              goto LAB_0ee27bd0;
            }
            if (iVar14 == 0) goto LAB_0ee27b63;
            *(int *)(puStack_1c8 + 1) = iVar14 + -1;
            plVar23 = plStack_218;
            plVar22 = plStack_218;
            if (plStack_218 != plVar10) goto LAB_0ee27c09;
          }
          else {
            if (lVar16 < 0) {
LAB_0ee283dc:
              uVar13 = func_0x0ee31000();
              func_0x041084d6(&DAT_0f7786d8);
              func_0x0488fce0(&plStack_1d8);
              func_0x0eee2d70(uVar13);
              func_0x0412a280(plStack_208,(ulong)plStack_218 & 0xfffffffffffffffe);
              func_0x0488fce0(&plStack_1d8);
              uVar13 = func_0x0eee2d70(uVar13);
              uVar13 = func_0x04882e20(uVar13);
              uVar13 = func_0x04882e20(uVar13);
              func_0x0d773b20(&puStack_1c8);
              func_0x0ee2d4a0(&plStack_218);
              func_0x0488fce0(&plStack_198);
              func_0x0eee2d70(uVar13);
              pcVar3 = (code *)swi(3);
              uVar13 = (*pcVar3)();
              return uVar13;
            }
            plVar10 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar16);
            if (plVar10 == (long *)0x0) {
              func_0x0eec74c0(lVar16,0);
            }
            plStack_208 = (long *)(lVar16 + (long)plVar10);
            lVar12 = *plVar22;
            lVar16 = *(long *)(lVar12 + 0x48);
            plStack_218 = plVar10;
            plStack_210 = plVar10;
            if (lStack_160 < lVar16) goto LAB_0ee27b33;
            do {
              lVar16 = (long)plVar23 - (long)plVar22 >> 4;
              if (1 < lVar16) {
                lStack_168 = plVar22[1];
                *plVar22 = 0;
                plVar22[1] = 0;
                plVar10 = plVar22;
                lVar18 = 0;
                plStack_140 = plVar23;
                do {
                  plVar23 = plVar10 + lVar18 * 2 + 2;
                  lVar9 = lVar18 * 2 + 2;
                  lVar21 = lVar18 * 2 + 1;
                  if (lVar9 < lVar16) {
                    lVar15 = plVar10[lVar18 * 2 + 2];
                    if (*(long *)(plVar10[lVar18 * 2 + 4] + 0x48) < *(long *)(lVar15 + 0x48)) {
                      plVar23 = plVar10 + lVar18 * 2 + 4;
                      lVar15 = plVar10[lVar18 * 2 + 4];
                      lVar21 = lVar9;
                    }
                  }
                  else {
                    lVar15 = *plVar23;
                  }
                  lVar18 = plVar23[1];
                  *plVar23 = 0;
                  plVar23[1] = 0;
                  *plVar10 = lVar15;
                  plVar11 = (long *)plVar10[1];
                  plVar10[1] = lVar18;
                  if (plVar11 != (long *)0x0) {
                    LOCK();
                    plVar10 = plVar11 + 1;
                    lVar18 = *plVar10;
                    *plVar10 = *plVar10 + -1;
                    UNLOCK();
                    if (lVar18 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                      func_0x0412c2d0(plVar11);
                    }
                  }
                  plVar11 = plStack_140;
                  plVar10 = plVar23;
                  lVar18 = lVar21;
                } while (lVar21 <= (long)(lVar16 - 2U >> 1));
                if (plVar23 == plStack_140 + -2) {
                  *plVar23 = lVar12;
                  plVar22 = (long *)plVar23[1];
                  plVar23[1] = lStack_168;
joined_r0x0ee27943:
                  if (plVar22 != (long *)0x0) {
                    LOCK();
                    plVar23 = plVar22 + 1;
                    lVar16 = *plVar23;
                    *plVar23 = *plVar23 + -1;
                    UNLOCK();
                    if (lVar16 == 0) {
                      (**(code **)(*plVar22 + 0x10))(plVar22);
                      func_0x0412c2d0(plVar22);
                    }
                  }
                }
                else {
                  lVar16 = plStack_140[-2];
                  uVar5 = *(undefined4 *)((long)plStack_140 + -0xc);
                  lVar18 = plStack_140[-1];
                  uVar6 = *(undefined4 *)((long)plStack_140 + -4);
                  plStack_140[-2] = 0;
                  plStack_140[-1] = 0;
                  plVar10 = (long *)plVar23[1];
                  *(int *)plVar23 = (int)lVar16;
                  *(undefined4 *)((long)plVar23 + 4) = uVar5;
                  *(int *)(plVar23 + 1) = (int)lVar18;
                  *(undefined4 *)((long)plVar23 + 0xc) = uVar6;
                  if (plVar10 != (long *)0x0) {
                    LOCK();
                    plVar1 = plVar10 + 1;
                    lVar16 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar16 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      func_0x0412c2d0(plVar10);
                    }
                  }
                  plVar11[-2] = lVar12;
                  plVar10 = (long *)plVar11[-1];
                  plVar11[-1] = lStack_168;
                  if (plVar10 != (long *)0x0) {
                    LOCK();
                    plVar11 = plVar10 + 1;
                    lVar16 = *plVar11;
                    *plVar11 = *plVar11 + -1;
                    UNLOCK();
                    if (lVar16 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      func_0x0412c2d0(plVar10);
                    }
                  }
                  lVar16 = (long)plVar23 + (0x10 - (long)plVar22) >> 4;
                  if (1 < lVar16) {
                    uVar24 = lVar16 - 2U >> 1;
                    lVar16 = *plVar23;
                    if (*(long *)(lVar16 + 0x48) < *(long *)(plVar22[uVar24 * 2] + 0x48)) {
                      lVar12 = plVar23[1];
                      *plVar23 = 0;
                      plVar23[1] = 0;
                      lVar18 = plVar22[uVar24 * 2];
                      plVar10 = plVar22 + uVar24 * 2;
                      do {
                        plVar11 = plVar10;
                        lVar9 = plVar11[1];
                        *plVar11 = 0;
                        plVar11[1] = 0;
                        *plVar23 = lVar18;
                        plVar10 = (long *)plVar23[1];
                        plVar23[1] = lVar9;
                        if (plVar10 != (long *)0x0) {
                          LOCK();
                          plVar23 = plVar10 + 1;
                          lVar18 = *plVar23;
                          *plVar23 = *plVar23 + -1;
                          UNLOCK();
                          if (lVar18 == 0) {
                            (**(code **)(*plVar10 + 0x10))(plVar10);
                            func_0x0412c2d0(plVar10);
                          }
                        }
                        if (uVar24 == 0) break;
                        uVar24 = uVar24 - 1 >> 1;
                        lVar18 = plVar22[uVar24 * 2];
                        plVar10 = plVar22 + uVar24 * 2;
                        plVar23 = plVar11;
                      } while (*(long *)(lVar16 + 0x48) < *(long *)(lVar18 + 0x48));
                      *plVar11 = lVar16;
                      plVar22 = (long *)plVar11[1];
                      plVar11[1] = lVar12;
                      goto joined_r0x0ee27943;
                    }
                  }
                }
              }
              lVar12 = lStack_180;
              lVar16 = *(long *)(lStack_180 + 0xf0);
              uStack_1a8 = *(long **)(lVar16 + -0x10);
              uStack_1a0 = *(long **)(lVar16 + -8);
              *(undefined8 *)(lVar16 + -0x10) = 0;
              *(undefined8 *)(lVar16 + -8) = 0;
              lVar16 = *(long *)(lStack_180 + 0xf0);
              plVar22 = *(long **)(lVar16 + -8);
              if (plVar22 != (long *)0x0) {
                LOCK();
                plVar23 = plVar22 + 1;
                lVar18 = *plVar23;
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (lVar18 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                  func_0x0412c2d0(plVar22);
                }
              }
              plVar22 = plStack_218;
              *(long *)(lVar12 + 0xf0) = lVar16 + -0x10;
              if (plStack_208 <= plStack_210) {
                lVar16 = (long)plStack_210 - (long)plStack_218;
                uVar24 = (lVar16 >> 4) + 1;
                if (uVar24 < 0x1000000000000000) {
                  uVar20 = (long)plStack_208 - (long)plStack_218;
                  uVar17 = (long)uVar20 >> 3;
                  if ((ulong)((long)uVar20 >> 3) <= uVar24) {
                    uVar17 = uVar24;
                  }
                  if (0x7fffffffffffffef < uVar20) {
                    uVar17 = 0xfffffffffffffff;
                  }
                  if (uVar17 < 0x1000000000000000) {
                    lVar18 = uVar17 * 0x10;
                    lVar12 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar18);
                    if (lVar12 == 0) {
                      func_0x0eec74c0(lVar18,0);
                    }
                    puVar2 = (undefined4 *)(lVar12 + lVar16);
                    *puVar2 = (undefined4)uStack_1a8;
                    puVar2[1] = uStack_1a8._4_4_;
                    puVar2[2] = (undefined4)uStack_1a0;
                    puVar2[3] = uStack_1a0._4_4_;
                    plVar10 = (long *)(lVar12 + lVar16 + 0x10);
                    plVar23 = (long *)(lVar12 + lVar16 + (lVar16 >> 4) * -0x10);
                    func_0x0eee2f00(plVar23,plVar22,lVar16);
                    plStack_218 = plVar23;
                    plStack_208 = (long *)(lVar18 + lVar12);
                    if (plVar22 != (long *)0x0) {
                      func_0x0412a280(plVar22,uVar20);
                    }
                    goto LAB_0ee27acd;
                  }
                  FUN_04882eb0();
                }
                func_0x0ee31000();
                goto LAB_0ee283dc;
              }
              *(undefined4 *)plStack_210 = (undefined4)uStack_1a8;
              *(undefined4 *)((long)plStack_210 + 4) = uStack_1a8._4_4_;
              *(undefined4 *)(plStack_210 + 1) = (undefined4)uStack_1a0;
              *(undefined4 *)((long)plStack_210 + 0xc) = uStack_1a0._4_4_;
              plVar10 = plStack_210 + 2;
LAB_0ee27acd:
              plVar22 = *(long **)(lStack_180 + 0xe8);
              plVar23 = *(long **)(lStack_180 + 0xf0);
              plStack_210 = plVar10;
              if (plVar22 == plVar23) {
                lVar16 = 0;
                break;
              }
              lVar12 = *plVar22;
              lVar16 = *(long *)(lVar12 + 0x48);
            } while (lVar16 <= lStack_160);
            *(long *)(lStack_180 + 0x100) = lVar16;
            param_2 = lStack_180;
            if (((ulong)plStack_1c0 & 1) != 0) goto LAB_0ee27b40;
LAB_0ee27bd0:
            plVar23 = plStack_218;
            plVar22 = plStack_218;
            if (plStack_218 != plVar10) {
LAB_0ee27c09:
              do {
                puStack_1c8 = (undefined8 *)*plVar23;
                plStack_1c0 = (long *)plVar23[1];
                *plVar23 = 0;
                plVar23[1] = 0;
                func_0x0ee28500(param_2,&puStack_1c8,0);
                plVar22 = plStack_1c0;
                if (plStack_1c0 != (long *)0x0) {
                  LOCK();
                  plVar11 = plStack_1c0 + 1;
                  lVar16 = *plVar11;
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
                    func_0x0412c2d0(plVar22);
                  }
                }
                plVar23 = plVar23 + 2;
                plVar22 = plStack_218;
              } while (plVar23 != plVar10);
            }
          }
joined_r0x0ee27bdd:
          plStack_218 = plVar22;
          plVar23 = plStack_210;
          if (plVar22 != (long *)0x0) {
            for (; plVar22 != plVar23; plVar23 = plVar23 + -2) {
              plVar10 = (long *)plVar23[-1];
              if (plVar10 != (long *)0x0) {
                LOCK();
                plVar11 = plVar10 + 1;
                lVar16 = *plVar11;
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (lVar16 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                  func_0x0412c2d0(plVar10);
                }
              }
            }
            func_0x0412a280(plStack_218,(long)plStack_208 - (long)plStack_218);
          }
          bVar19 = 0;
          lVar16 = lStack_188;
        }
        else {
          bVar19 = 1;
        }
      }
      func_0x0ee265c0(&plStack_218,lVar16,uStack_21c);
      plVar23 = plStack_190;
      plVar22 = plStack_210;
      plStack_198 = plStack_218;
      plStack_218 = (long *)0x0;
      plStack_210 = (long *)0x0;
      if (plStack_190 != (long *)0x0) {
        LOCK();
        plVar10 = plStack_190 + 1;
        lVar12 = *plVar10;
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          lVar12 = *plStack_190;
          plStack_190 = plVar22;
          (**(code **)(lVar12 + 0x10))(plVar23);
          func_0x0412c2d0(plVar23);
          plVar23 = plStack_210;
          plVar22 = plStack_190;
          if (plStack_210 != (long *)0x0) {
            LOCK();
            plVar10 = plStack_210 + 1;
            lVar12 = *plVar10;
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plStack_210 + 0x10))(plStack_210);
              func_0x0412c2d0(plVar23);
              plVar22 = plStack_190;
            }
          }
        }
      }
      plStack_190 = plVar22;
    } while ((bool)(bVar19 & plStack_198 == (long *)0x0));
    if (plStack_198 == (long *)0x0) {
      func_0x0ee265c0(&plStack_1d8,plStack_178,0x7fffffff);
      plVar22 = plStack_190;
      if (plStack_190 != (long *)0x0) {
        LOCK();
        plVar23 = plStack_190 + 1;
        lVar12 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_190 + 0x10))(plStack_190);
          func_0x0412c2d0(plVar22);
        }
      }
      if (plStack_1d8 != (long *)0x0) goto LAB_0ee27df6;
      iVar14 = 0;
    }
    else {
      plStack_1d8 = plStack_198;
      plStack_1d0 = plStack_190;
LAB_0ee27df6:
      if ((DAT_0f7786d8 == '\0') && (iVar14 = func_0x04108328(&DAT_0f7786d8), iVar14 != 0)) {
        _DAT_0f7785a8 = func_0x0eecbd00(&UNK_0133d001,8,0);
        DAT_0f7785b0 = 1;
        _DAT_0f7785b8 = &UNK_0144425e;
        _DAT_0f7785c0 = &UNK_0144425e;
        _DAT_0f7785c8 = 0x15;
        DAT_0f7785d0 = 1;
        _DAT_0f7785d8 = 0;
        _DAT_0f7785e0 = _DAT_0f534918;
        uRam000000000f7785e8 = _UNK_0f534920;
        _DAT_0f7785f0 = _DAT_0f534928;
        uRam000000000f7785f8 = _UNK_0f534930;
        _DAT_0f778600 = 0;
        DAT_0f778630 = 0;
        _DAT_0f778638 = 0;
        _DAT_0f778610 = 0;
        uRam000000000f778618 = 0;
        DAT_0f778620 = 0;
        _DAT_0f778698 = 0;
        uRam000000000f7786a0 = 0;
        _DAT_0f7786a8 = 0;
        DAT_0f778690 = 0;
        _DAT_0f778660 = 0;
        uRam000000000f778668 = 0;
        _DAT_0f778650 = 0;
        uRam000000000f778658 = 0;
        _DAT_0f778640 = 0;
        uRam000000000f778648 = 0;
        _DAT_0f778670 = 0;
        _DAT_0f778680 = &UNK_01e80174;
        _DAT_0f778688 = 5;
        _DAT_0f7786b0 = 0;
        DAT_0f7786b8 = 0;
        DAT_0f7786c8 = 0;
        _DAT_0f7786d0 = 0;
        func_0x0eee2f40(&UNK_08b30de0,&DAT_0f7785a8,0xf53dab8);
        FUN_0410844d(&DAT_0f7786d8);
        param_2 = lStack_180;
      }
      puStack_1c8 = (undefined8 *)&DAT_0f7785a8;
      plStack_1c0 = (long *)((ulong)plStack_1c0 & 0xffffffffffffff00);
      uStack_1b0 = 0;
      plStack_218 = (long *)((ulong)plStack_218 & 0xffffffffffffff00);
      cStack_1e8 = '\0';
      uVar8 = func_0x0eecc050(&DAT_0f7785a8,auStack_1b8,&plStack_218);
      if ((cStack_1e8 == '\x01') && (((ulong)plStack_218 & 1) != 0)) {
        func_0x0412a280(plStack_208,(ulong)plStack_218 & 0xfffffffffffffffe);
      }
      plVar22 = plStack_1d8;
      plStack_1c0 = (long *)CONCAT71(plStack_1c0._1_7_,uVar8);
      bVar19 = *(byte *)(plStack_1d8 + 10);
      uVar24 = plStack_1d8[0xb];
      if (0xfd < uVar24) {
        uVar24 = 0xfe;
      }
      uVar17 = (ulong)(bVar19 >> 1);
      if ((bVar19 & 1) != 0) {
        uVar17 = uVar24;
      }
      if (uVar17 != 0) {
        if ((bVar19 & 1) == 0) {
          lVar16 = (long)plStack_1d8 + 0x51;
        }
        else {
          lVar16 = plStack_1d8[0xc];
        }
        func_0x0eee2ee0(alStack_138,lVar16,uVar17);
      }
      *(undefined1 *)((long)alStack_138 + uVar17) = 0;
      if (plStack_1d0 != (long *)0x0) {
        LOCK();
        plStack_1d0[1] = plStack_1d0[1] + 1;
        UNLOCK();
      }
      param_1[0x1a] = (long)plVar22;
      plVar22 = (long *)param_1[0x1b];
      param_1[0x1b] = (long)plStack_1d0;
      uStack_38 = uVar17;
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar23 = plVar22 + 1;
        lVar16 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          func_0x0412c2d0(plVar22);
        }
      }
      lVar16 = lStack_188;
      plVar22 = plStack_1d8;
      plStack_210 = alStack_138;
      plStack_208 = (long *)CONCAT71(plStack_208._1_7_,1);
      if (param_3 == '\0') {
        uVar8 = 1;
      }
      else if (param_3 == '\x02') {
        uVar8 = (undefined1)plStack_1d8[1];
      }
      else {
        uVar8 = 0;
      }
      plStack_218 = param_1;
      iVar14 = (**(code **)(*plStack_1d8 + 0x20))(plStack_1d8,param_1,uVar8);
      if (iVar14 != 2) {
        if (iVar14 == 0) {
          uStack_1a8 = plVar22;
          uStack_1a0 = plStack_1d0;
          plStack_1d8 = (long *)0x0;
          plStack_1d0 = (long *)0x0;
          func_0x0ee28500(param_2,&uStack_1a8,0);
          plVar22 = uStack_1a0;
          iVar14 = 1;
          if (uStack_1a0 != (long *)0x0) {
            LOCK();
            plVar23 = uStack_1a0 + 1;
            lVar12 = *plVar23;
            *plVar23 = *plVar23 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*uStack_1a0 + 0x10))(uStack_1a0);
              func_0x0412c2d0(plVar22);
            }
          }
        }
        else {
          iVar14 = 1;
        }
      }
      if ((char)plStack_208 == '\x01') {
        if (plStack_210[0x20] == 0xff) {
          *(undefined1 *)plStack_210 = 0;
          plStack_210[0x20] = 0;
        }
        else {
          *(undefined1 *)((long)plStack_210 + plStack_210[0x20]) = 0x21;
          lVar12 = plStack_210[0x20];
          plStack_210[0x20] = lVar12 + 1;
          *(undefined1 *)((long)plStack_210 + lVar12 + 1) = 0;
        }
        plVar22 = (long *)plStack_218[0x1b];
        plStack_218[0x1a] = 0;
        plStack_218[0x1b] = 0;
        if (plVar22 == (long *)0x0) goto LAB_0ee280a0;
        LOCK();
        plVar23 = plVar22 + 1;
        lVar12 = *plVar23;
        *plVar23 = *plVar23 + -1;
        UNLOCK();
        if (lVar12 != 0) goto LAB_0ee280a0;
        (**(code **)(*plVar22 + 0x10))(plVar22);
        func_0x0412c2d0(plVar22);
      }
      else {
LAB_0ee280a0:
      }
      if ((char)plStack_1c0 == '\x01') {
        func_0x0eec86b0(&DAT_0f5463d0,auStack_1b8,puStack_1c8 + 0xc);
      }
    }
    plVar22 = plStack_1d0;
    if (plStack_1d0 != (long *)0x0) {
      LOCK();
      plVar23 = plStack_1d0 + 1;
      lVar12 = *plVar23;
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
        func_0x0412c2d0(plVar22);
      }
    }
    if (iVar14 == 0) {
      return 0;
    }
    if (iVar14 == 1) {
      lVar12 = func_0x0417cc60();
      lVar16 = param_1[0x1c];
      LOCK();
      *(long *)(lVar16 + 0x58) = *(long *)(lVar16 + 0x58) + 1;
      UNLOCK();
      LOCK();
      *(long *)(lVar16 + 0x60) = *(long *)(lVar16 + 0x60) + (lVar12 - lStack_158);
      UNLOCK();
      if ((param_1 == *(long **)(lVar16 + 0x50)) && (*(long *)(lVar16 + 0x88) < lVar12)) {
        dVar4 = (double)(lVar12 - *(long *)(lVar16 + 0x80)) / _DAT_014f0138;
        *(long *)(lVar16 + 0x80) = lVar12;
        *(long *)(lVar16 + 0x88) = lVar12 + 1000000000;
        if (*(long *)(lVar16 + 0x58) != 0) {
          uVar24 = *(ulong *)(lVar16 + 0x60);
          uVar17 = *(ulong *)(lVar16 + 0x58);
          if ((uVar24 | uVar17) >> 0x20 == 0) {
            uVar24 = (uVar24 & 0xffffffff) / (uVar17 & 0xffffffff);
          }
          else {
            uVar24 = uVar24 / uVar17;
          }
          auVar26._8_4_ = (int)(uVar24 >> 0x20);
          auVar26._0_8_ = uVar24;
          auVar26._12_4_ = _UNK_014e26a4;
          dVar27 = ((auVar26._8_8_ - _UNK_014e0ce8) +
                   ((double)CONCAT44(_DAT_014e26a0,(int)uVar24) - _DAT_014e0ce0)) / _DAT_014f0138;
          LOCK();
          *(double *)(lVar16 + 0x70) =
               (*(double *)(lVar16 + 0x70) - dVar27) * _DAT_014f05b0 + dVar27;
          UNLOCK();
        }
        LOCK();
        *(int *)(lVar16 + 0x78) = (int)(long)((double)*(uint *)(lVar16 + 0x68) / dVar4);
        UNLOCK();
        LOCK();
        *(undefined4 *)(lVar16 + 0x68) = 0;
        UNLOCK();
        LOCK();
        *(undefined8 *)(lVar16 + 0x58) = 0;
        UNLOCK();
        LOCK();
        *(undefined8 *)(lVar16 + 0x60) = 0;
        UNLOCK();
      }
      param_1[0x19] = lVar12;
      return 1;
    }
  } while( true );
}


