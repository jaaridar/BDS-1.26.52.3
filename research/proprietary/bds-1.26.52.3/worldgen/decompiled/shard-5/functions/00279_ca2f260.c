/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb2f260 (ELF vaddr 0xca2f260)
 * Label: callee-of:0xca314e0
 * Body:  [[0cb2f260, 0cb2f2e6] [0cb2f2f0, 0cb2f384] [0cb2f390, 0cb2f3db] [0cb2f3e0, 0cb2f46e] [0cb2f470, 0cb2f4bc] [0cb2f4c0, 0cb2f50d] [0cb2f510, 0cb2f707] [0cb2f710, 0cb2f827] [0cb2f830, 0cb2f877] [0cb2f880, 0cb2f9ab] [0cb2fae2, 0cb2fb2a] [0cb2fcd1, 0cb2fd26] [0cb2fda3, 0cb2ff93]]
 * Ghidra: FUN_0cb2f260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb2f260(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  bool bVar27;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  uStack_48 = 0;
  plStack_40 = (long *)0x0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_88 = 0;
  plStack_80 = (long *)0x0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_c0 = (long *)0x0;
  plVar20 = *(long **)(param_1 + 0x40);
  lStack_158 = param_1;
  lVar10 = func_0x0eee2fc0();
  lVar11 = *plVar20;
  LOCK();
  lVar24 = plVar20[2];
  bVar27 = lVar11 == lVar24;
  if (bVar27) {
    plVar20[2] = lVar10;
    lVar24 = lVar11;
  }
  UNLOCK();
  plStack_140 = plVar20;
  if (!bVar27) {
    iVar15 = 3000;
    do {
      while( true ) {
        if ((lVar24 == lVar10) && (iVar9 = (int)plVar20[1] + 1, iVar9 != -1)) {
          *(int *)(plVar20 + 1) = iVar9;
          goto LAB_0cb2f32f;
        }
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        lVar11 = *plVar20;
        LOCK();
        lVar24 = plVar20[2];
        bVar27 = lVar11 == lVar24;
        if (bVar27) {
          plVar20[2] = lVar10;
          lVar24 = lVar11;
        }
        UNLOCK();
        if (bVar27) goto LAB_0cb2f327;
      }
      func_0x0eee35d0();
      iVar15 = 0;
      lVar11 = *plVar20;
      LOCK();
      lVar24 = plVar20[2];
      bVar27 = lVar11 == lVar24;
      if (bVar27) {
        plVar20[2] = lVar10;
        lVar24 = lVar11;
      }
      UNLOCK();
    } while (!bVar27);
  }
LAB_0cb2f327:
  *(undefined4 *)(plVar20 + 1) = 1;
LAB_0cb2f32f:
  iVar15 = (int)param_2;
  uStack_120 = (ulong)(iVar15 - 1);
  uStack_110 = (ulong)((int)((ulong)param_2 >> 0x20) - 1);
  if (*(long *)(*(long *)(lStack_158 + 0x40) + 0x20) != 0) {
    lStack_168 = (long)iVar15 + 0x9e3779b8;
    puVar22 = (undefined8 *)((param_2 >> 0x20) + 0x9e3779b8);
    lVar24 = 0;
    puStack_138 = puVar22;
    do {
      if (*(long *)(*(long *)(lStack_158 + 0x40) + 0x20) != 0) {
        uStack_148 = (ulong)(uint)((int)uStack_120 + (int)lVar24);
        uVar25 = lStack_168 + lVar24;
        lVar11 = uVar25 * 0x40 + (long)puVar22;
        lVar23 = 0;
LAB_0cb2f3e9:
        uVar26 = *(ulong *)(*(long *)(lStack_158 + 0x40) + 0x20);
        if (uVar26 != 0) {
          uVar17 = (uVar25 >> 2) + lVar11 + lVar23 ^ uVar25;
          uVar18 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
          uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar18 >> 0x38 < 2) {
            uVar19 = uVar26 - 1 & uVar17;
          }
          else {
            uVar19 = uVar17;
            if (uVar26 <= uVar17) {
              uVar19 = uVar17 % uVar26;
            }
          }
          plVar20 = *(long **)(*(long *)(*(long *)(lStack_158 + 0x40) + 0x18) + uVar19 * 8);
          if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
            lVar21 = ((ulong)(uint)((int)uStack_110 + (int)lVar23) << 0x20) + uStack_148;
            if ((byte)(uVar18 >> 0x38) < 2) {
              do {
                if (plVar20[1] == uVar17) {
                  if (plVar20[2] == lVar21) goto LAB_0cb2f538;
                }
                else if ((plVar20[1] & uVar26 - 1) != uVar19) break;
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
            else {
              do {
                uVar18 = plVar20[1];
                if (uVar18 == uVar17) {
                  if (plVar20[2] == lVar21) goto LAB_0cb2f538;
                }
                else {
                  if (uVar26 <= uVar18) {
                    if ((uVar18 | uVar26) >> 0x20 == 0) {
                      if ((uVar18 & 0xffffffff) % (uVar26 & 0xffffffff) == uVar19)
                      goto LAB_0cb2f4c6;
                      break;
                    }
                    uVar18 = uVar18 % uVar26;
                  }
                  if (uVar18 != uVar19) break;
                }
LAB_0cb2f4c6:
                plVar20 = (long *)*plVar20;
              } while (plVar20 != (long *)0x0);
            }
          }
        }
        goto LAB_0cb2f3e0;
      }
LAB_0cb2f390:
      lVar24 = lVar24 + 1;
    } while (lVar24 != 3);
  }
  if (plStack_140[2] == lVar10) {
    iVar9 = (int)plStack_140[1];
    if (iVar9 == 1) {
      *(undefined4 *)(plStack_140 + 1) = 0;
      plStack_140[2] = *plStack_140;
      goto LAB_0cb2f61d;
    }
    if (iVar9 != 0) {
      *(int *)(plStack_140 + 1) = iVar9 + -1;
      goto LAB_0cb2f61d;
    }
  }
  cVar8 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar8 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_0cb2f61d:
  lStack_f8 = (long)iVar15 + 0x9e3779b8;
  lStack_f0 = (param_2 >> 0x20) + 0x9e3779b8;
  lVar24 = 0;
  lStack_118 = lVar10;
LAB_0cb2f665:
  uStack_d8 = (ulong)(uint)((int)uStack_120 + (int)lVar24);
  plStack_140 = (long *)(lStack_f8 + lVar24);
  lStack_d0 = ((ulong)plStack_140 >> 2) + (long)plStack_140 * 0x40 + lStack_f0;
  puStack_138 = &uStack_c8 + lVar24 * 6;
  uVar25 = 0;
  lStack_e8 = lVar24;
LAB_0cb2f6e0:
  plVar20 = (long *)puStack_138[uVar25 * 2];
  if (plVar20 != (long *)0x0) {
    lVar11 = plVar20[5];
    LOCK();
    lVar24 = plVar20[7];
    bVar27 = lVar11 == lVar24;
    if (bVar27) {
      plVar20[7] = lVar10;
      lVar24 = lVar11;
    }
    UNLOCK();
    if (!bVar27) {
      iVar15 = 3000;
      do {
        while( true ) {
          if ((lVar24 == lVar10) && (iVar9 = (int)plVar20[6] + 1, iVar9 != -1)) {
            *(int *)(plVar20 + 6) = iVar9;
            uVar26 = plVar20[1];
            goto joined_r0x0cb2f8af;
          }
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          lVar11 = plVar20[5];
          LOCK();
          lVar24 = plVar20[7];
          bVar27 = lVar11 == lVar24;
          if (bVar27) {
            plVar20[7] = lVar10;
            lVar24 = lVar11;
          }
          UNLOCK();
          if (bVar27) goto LAB_0cb2f748;
        }
        func_0x0eee35d0();
        iVar15 = 0;
        lVar11 = plVar20[5];
        LOCK();
        lVar24 = plVar20[7];
        bVar27 = lVar11 == lVar24;
        if (bVar27) {
          plVar20[7] = lVar10;
          lVar24 = lVar11;
        }
        UNLOCK();
      } while (!bVar27);
    }
LAB_0cb2f748:
    *(undefined4 *)(plVar20 + 6) = 1;
    uVar26 = plVar20[1];
joined_r0x0cb2f8af:
    uStack_148 = uVar25;
    if (uVar26 != 0) {
      uVar17 = lStack_d0 + uVar25 ^ (ulong)plStack_140;
      uVar18 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
      uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar18 >> 0x38 < 2) {
        uVar19 = uVar26 - 1 & uVar17;
      }
      else {
        uVar19 = uVar17;
        if (uVar26 <= uVar17) {
          uVar19 = uVar17 % uVar26;
        }
      }
      plVar13 = *(long **)(*plVar20 + uVar19 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        lVar24 = ((ulong)(uint)((int)uStack_110 + (int)uVar25) << 0x20) + uStack_d8;
        if ((byte)(uVar18 >> 0x38) < 2) {
          do {
            if (plVar13[1] == uVar17) {
              if (plVar13[2] == lVar24) goto LAB_0cb2fafd;
            }
            else if ((plVar13[1] & uVar26 - 1) != uVar19) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar13[1];
            if (uVar25 == uVar17) {
              if (plVar13[2] == lVar24) goto LAB_0cb2fafd;
            }
            else {
              if (uVar26 <= uVar25) {
                if ((uVar25 | uVar26) >> 0x20 == 0) {
                  if ((uVar25 & 0xffffffff) % (uVar26 & 0xffffffff) == uVar19) goto LAB_0cb2f83a;
                  break;
                }
                uVar25 = uVar25 % uVar26;
              }
              if (uVar25 != uVar19) break;
            }
LAB_0cb2f83a:
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    lVar24 = 0;
    goto LAB_0cb2f8c2;
  }
  goto LAB_0cb2f6d3;
LAB_0cb2f538:
  lVar21 = plVar20[3];
  uVar4 = *(undefined4 *)((long)plVar20 + 0x1c);
  lVar6 = plVar20[4];
  uVar5 = *(undefined4 *)((long)plVar20 + 0x24);
  if (plVar20[4] != 0) {
    LOCK();
    plVar20 = (long *)(plVar20[4] + 8);
    *plVar20 = *plVar20 + 1;
    UNLOCK();
  }
  puVar12 = &uStack_c8 + lVar24 * 6 + lVar23 * 2;
  plVar20 = (long *)puVar12[1];
  *(int *)puVar12 = (int)lVar21;
  *(undefined4 *)((long)puVar12 + 4) = uVar4;
  *(int *)(puVar12 + 1) = (int)lVar6;
  *(undefined4 *)((long)puVar12 + 0xc) = uVar5;
  if (plVar20 != (long *)0x0) {
    LOCK();
    plVar13 = plVar20 + 1;
    lVar21 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      FUN_0412c2d0(plVar20);
      puVar22 = puStack_138;
    }
  }
LAB_0cb2f3e0:
  lVar23 = lVar23 + 1;
  if (lVar23 == 3) goto LAB_0cb2f390;
  goto LAB_0cb2f3e9;
LAB_0cb2fafd:
  lVar24 = plVar13[3];
  lVar11 = plVar13[4];
  if (lVar11 == 0) {
LAB_0cb2f8c2:
    lVar11 = 0;
    if (plVar20[7] != lVar10) goto LAB_0cb2f8e3;
LAB_0cb2f8d3:
    iVar15 = (int)plVar20[6];
    if (iVar15 != 1) {
      if (iVar15 == 0) goto LAB_0cb2f8e3;
      *(int *)(plVar20 + 6) = iVar15 + -1;
      goto joined_r0x0cb2f925;
    }
    *(undefined4 *)(plVar20 + 6) = 0;
    plVar20[7] = plVar20[5];
LAB_0cb2f940:
    lStack_108 = 0;
    plStack_100 = (long *)0x0;
    if (lVar11 == 0) goto LAB_0cb2fcd1;
LAB_0cb2f951:
    plStack_100 = (long *)0x0;
    lStack_108 = 0;
    plStack_100 = (long *)func_0x0412c300(lVar11);
    if (plStack_100 != (long *)0x0) {
      lStack_108 = lVar24;
      if (lVar24 != 0) {
        uVar25 = *(ulong *)(lVar24 + 0x50);
        bVar2 = *(byte *)(lVar24 + 0xb8);
        puStack_160 = (undefined *)(ulong)bVar2;
        uVar3 = (uint)uVar25;
        lStack_168 = lVar11;
        switch(bVar2) {
        case 2:
        case 6:
        case 8:
          uStack_170 = (ulong)(uVar3 - 1);
          uVar26 = uVar25 >> 0x20;
          uStack_150 = uVar25;
          do {
            uStack_170 = CONCAT44((int)uVar26 + -1,(int)uStack_170);
            do {
              func_0x0cb30920(&lStack_130,plVar20,&uStack_170);
              lVar23 = lStack_128;
              lVar24 = lStack_130;
              lVar11 = lStack_168;
              if (lStack_128 == 0) goto LAB_0cb2fcd1;
              LOCK();
              *(long *)(lStack_128 + 0x10) = *(long *)(lStack_128 + 0x10) + 1;
              UNLOCK();
              plVar13 = (long *)func_0x0412c300(lStack_128);
              if (plVar13 == (long *)0x0) {
                FUN_0412c2d0(lVar23);
                FUN_0412c2d0(lVar23);
                lVar11 = lStack_168;
                goto LAB_0cb2fcd1;
              }
              if (lVar24 == 0) {
                bVar27 = false;
                LOCK();
                plVar1 = plVar13 + 1;
                lVar24 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
              }
              else {
                bVar27 = bVar2 <= *(byte *)(lVar24 + 0xb8);
                LOCK();
                plVar1 = plVar13 + 1;
                lVar24 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
              }
              if (lVar24 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
                FUN_0412c2d0(plVar13);
              }
              FUN_0412c2d0(lVar23);
              if (lStack_128 != 0) {
                FUN_0412c2d0();
              }
              lVar11 = lStack_168;
              if (!bVar27) goto LAB_0cb2fcd1;
              iVar7 = uStack_170._4_4_;
              iVar15 = uStack_170._4_4_ + 1;
              iVar9 = (int)uStack_170;
              uStack_170 = CONCAT44(iVar15,(int)uStack_170);
              uVar26 = (ulong)uStack_150._4_4_;
            } while (iVar7 <= (int)uStack_150._4_4_);
            uStack_170 = CONCAT44(iVar15,(int)uStack_170 + 1);
          } while (iVar9 <= (int)uStack_150);
          func_0x0cb30ba0(*(undefined8 *)(lStack_158 + 0x40),&uStack_150,puStack_160);
          break;
        case 4:
          uStack_170 = uVar25;
          if ((cRam000000000f6faa70 == '\0') && (iVar15 = FUN_04108328(0xf6faa70), iVar15 != 0)) {
            uRam000000000f6faa30 = _UNK_014e3090;
            uRam000000000f6faa38 = _UNK_014e3098;
            uRam000000000f6faa40 = _UNK_014e6040;
            uRam000000000f6faa48 = _UNK_014e6048;
            uRam000000000f6faa50 = _UNK_014e8510;
            uRam000000000f6faa58 = _UNK_014e8518;
            uRam000000000f6faa60 = _UNK_014e6560;
            uRam000000000f6faa64 = _UNK_014e6564;
            uRam000000000f6faa68 = _UNK_014e6568;
            uRam000000000f6faa6c = _UNK_014e656c;
            func_0x0410844d(0xf6faa70);
          }
          uVar16 = (uint)(uVar25 >> 0x20);
          puStack_160 = &UNK_014f0908;
          if ((((uVar3 | uVar16) & 1) != 0) &&
             (((uVar25 & 1) == 0 || (puStack_160 = &UNK_014f0748, (uVar25 >> 0x20 & 1) != 0)))) {
            bVar27 = (uVar25 >> 0x20 & 1) == 0;
            puStack_160 = &UNK_014f0510;
            if (bVar27) {
              puStack_160 = (undefined *)0x0;
            }
            puVar14 = &UNK_014f08d0;
            if (bVar27) {
              puVar14 = (undefined *)0x0;
            }
            if ((uVar25 & 1) == 0) {
              puStack_160 = puVar14;
            }
          }
          lVar24 = 0;
          do {
            uStack_150 = CONCAT44(uVar16 - *(int *)(lVar24 * 8 + 0xf6faa34),
                                  uVar3 - *(int *)(lVar24 * 8 + 0xf6faa30));
            func_0x0cb30920(&lStack_130,plVar20,&uStack_150);
            lVar23 = lStack_128;
            lVar11 = lStack_168;
            if (lStack_128 == 0) goto LAB_0cb2fcd1;
            bVar2 = puStack_160[lVar24];
            plVar13 = (long *)func_0x0412c300(lStack_128);
            lVar10 = lStack_118;
            if (plVar13 == (long *)0x0) {
              FUN_0412c2d0(lVar23);
              lVar11 = lStack_168;
              lVar10 = lStack_118;
              goto LAB_0cb2fcd1;
            }
            if (lStack_130 == 0) {
              bVar27 = false;
            }
            else {
              bVar27 = bVar2 <= *(byte *)(lStack_130 + 0xb8);
            }
            LOCK();
            plVar1 = plVar13 + 1;
            lVar11 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              plStack_e0 = plVar13;
              (**(code **)(*plVar13 + 0x10))(plVar13);
              FUN_0412c2d0(plStack_e0);
            }
            if (lStack_128 != 0) {
              FUN_0412c2d0();
            }
            lVar11 = lStack_168;
            if (!bVar27) goto LAB_0cb2fcd1;
            lVar24 = lVar24 + 1;
          } while (lVar24 != 8);
          func_0x0cb30ba0(*(undefined8 *)(lStack_158 + 0x40),&uStack_170,4);
        }
        goto LAB_0cb2fcd1;
      }
      goto LAB_0cb2fcdb;
    }
  }
  else {
    LOCK();
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    UNLOCK();
    if (plVar20[7] == lVar10) goto LAB_0cb2f8d3;
LAB_0cb2f8e3:
    cVar8 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar8 == '\0') goto LAB_0cb2f940;
    _DAT_00000000 = 0xdeadc0de;
joined_r0x0cb2f925:
    plStack_100 = (long *)0x0;
    lStack_108 = 0;
    if (lVar11 != 0) goto LAB_0cb2f951;
LAB_0cb2fcd1:
    uVar25 = uStack_148;
    if (plStack_100 != (long *)0x0) {
LAB_0cb2fcdb:
      plVar13 = plStack_100;
      LOCK();
      plVar20 = plStack_100 + 1;
      lVar24 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      uVar25 = uStack_148;
      if (lVar24 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        FUN_0412c2d0(plVar13);
        uVar25 = uStack_148;
      }
    }
    uStack_148 = uVar25;
    if (lVar11 == 0) goto LAB_0cb2f6d3;
  }
  uVar25 = uStack_148;
  FUN_0412c2d0(lVar11);
LAB_0cb2f6d3:
  plVar20 = plStack_40;
  uVar25 = uVar25 + 1;
  if (uVar25 == 3) goto LAB_0cb2f650;
  goto LAB_0cb2f6e0;
LAB_0cb2f650:
  lVar24 = lStack_e8 + 1;
  if (lVar24 == 3) {
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_40 + 1;
      lVar24 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        FUN_0412c2d0(plVar20);
      }
    }
    plVar20 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_50 + 1;
      lVar24 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        FUN_0412c2d0(plVar20);
      }
    }
    plVar20 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_60 + 1;
      lVar24 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        FUN_0412c2d0(plVar20);
      }
    }
    plVar20 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_70 + 1;
      lVar24 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        FUN_0412c2d0(plVar20);
      }
    }
    plVar20 = plStack_80;
    if (plStack_80 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_80 + 1;
      lVar24 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_80 + 0x10))(plStack_80);
        FUN_0412c2d0(plVar20);
      }
    }
    plVar20 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      LOCK();
      plVar13 = plStack_90 + 1;
      lVar24 = *plVar13;
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        FUN_0412c2d0(plVar20);
      }
    }
    plVar13 = plStack_a0;
    plVar20 = plStack_b0;
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_a0 + 1;
      lVar24 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        FUN_0412c2d0(plVar13);
        plVar20 = plStack_b0;
      }
    }
    plVar13 = uStack_c0;
    plStack_b0 = plVar20;
    if (plVar20 != (long *)0x0) {
      LOCK();
      plVar1 = plVar20 + 1;
      lVar24 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        FUN_0412c2d0(plVar20);
        plVar13 = uStack_c0;
      }
    }
    if (plVar13 != (long *)0x0) {
      LOCK();
      plVar20 = plVar13 + 1;
      lVar24 = *plVar20;
      *plVar20 = *plVar20 + -1;
      UNLOCK();
      if (lVar24 == 0) {
        uStack_c0 = plVar13;
        (**(code **)(*plVar13 + 0x10))(plVar13);
        if (plVar13[2] != 0) {
          LOCK();
          plVar20 = plVar13 + 2;
          lVar24 = *plVar20;
          *plVar20 = *plVar20 + -1;
          UNLOCK();
          if (lVar24 != 0) {
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x20))();
        return;
      }
    }
    return;
  }
  goto LAB_0cb2f665;
}


