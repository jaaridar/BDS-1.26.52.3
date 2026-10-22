/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcb2f260 (ELF vaddr 0xca2f260)
 * Label: callee-of:0xca2cd50
 * Body:  [[0cb2f260, 0cb2f2e6] [0cb2f2f0, 0cb2f384] [0cb2f390, 0cb2f3db] [0cb2f3e0, 0cb2f46e] [0cb2f470, 0cb2f4bc] [0cb2f4c0, 0cb2f50d] [0cb2f510, 0cb2f707] [0cb2f710, 0cb2f827] [0cb2f830, 0cb2f877] [0cb2f880, 0cb2f9ab] [0cb2fae2, 0cb2fb2a] [0cb2fcd1, 0cb2fd26] [0cb2fda3, 0cb2ff93]]
 * Ghidra: FUN_0cb2f260
 */


/* WARNING: Possible PIC construction at 0x0cb2fdce: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fdfe: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fe2e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fe5e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fe8e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2febe: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2ff5e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2ff3e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fd0f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2f599: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fa3d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fa54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fcad: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fc56: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0cb2fc99: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0cb2fcb2) */
/* WARNING: Removing unreachable block (ram,0x0cb2f59e) */
/* WARNING: Removing unreachable block (ram,0x0cb2fd14) */
/* WARNING: Removing unreachable block (ram,0x0cb2fd22) */
/* WARNING: Removing unreachable block (ram,0x0cb2ff43) */
/* WARNING: Removing unreachable block (ram,0x0cb2ff50) */
/* WARNING: Removing unreachable block (ram,0x0cb2ff63) */
/* WARNING: Removing unreachable block (ram,0x0cb2ff70) */
/* WARNING: Removing unreachable block (ram,0x0cb2fc9e) */
/* WARNING: Removing unreachable block (ram,0x0cb2fca8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cb2f260(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined *puVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  bool bVar32;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  long *plStack_140;
  undefined8 *puStack_138;
  long lStack_130;
  long *plStack_128;
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
  plVar26 = *(long **)(param_1 + 0x40);
  lStack_158 = param_1;
  lVar18 = func_0x0eee2fc0();
  lVar28 = *plVar26;
  LOCK();
  lVar29 = plVar26[2];
  bVar32 = lVar28 == lVar29;
  if (bVar32) {
    plVar26[2] = lVar18;
    lVar29 = lVar28;
  }
  UNLOCK();
  plStack_140 = plVar26;
  if (!bVar32) {
    iVar22 = 3000;
    do {
      while( true ) {
        if ((lVar29 == lVar18) && (iVar15 = (int)plVar26[1] + 1, iVar15 != -1)) {
          *(int *)(plVar26 + 1) = iVar15;
          goto LAB_0cb2f32f;
        }
        if (iVar22 == 0) break;
        iVar22 = iVar22 + -1;
        lVar28 = *plVar26;
        LOCK();
        lVar29 = plVar26[2];
        bVar32 = lVar28 == lVar29;
        if (bVar32) {
          plVar26[2] = lVar18;
          lVar29 = lVar28;
        }
        UNLOCK();
        if (bVar32) goto LAB_0cb2f327;
      }
      func_0x0eee35d0();
      iVar22 = 0;
      lVar28 = *plVar26;
      LOCK();
      lVar29 = plVar26[2];
      bVar32 = lVar28 == lVar29;
      if (bVar32) {
        plVar26[2] = lVar18;
        lVar29 = lVar28;
      }
      UNLOCK();
    } while (!bVar32);
  }
LAB_0cb2f327:
  *(undefined4 *)(plVar26 + 1) = 1;
LAB_0cb2f32f:
  iVar22 = (int)param_2;
  uStack_120 = (ulong)(iVar22 - 1U);
  uVar16 = (int)((ulong)param_2 >> 0x20) - 1;
  uStack_110 = (ulong)uVar16;
  if (*(long *)(*(long *)(lStack_158 + 0x40) + 0x20) != 0) {
    lStack_168 = (long)iVar22 + 0x9e3779b8;
    puStack_138 = (undefined8 *)((param_2 >> 0x20) + 0x9e3779b8);
    lVar29 = 0;
    do {
      if (*(long *)(*(long *)(lStack_158 + 0x40) + 0x20) != 0) {
        uVar17 = (iVar22 - 1U) + (int)lVar29;
        uStack_148 = (ulong)uVar17;
        uVar30 = lStack_168 + lVar29;
        lVar28 = 0;
LAB_0cb2f3e9:
        uVar31 = *(ulong *)(*(long *)(lStack_158 + 0x40) + 0x20);
        if (uVar31 != 0) {
          uVar23 = (long)puStack_138 + lVar28 + (uVar30 >> 2) + uVar30 * 0x40 ^ uVar30;
          uVar24 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
          uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
          uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar24 >> 0x38 < 2) {
            uVar25 = uVar31 - 1 & uVar23;
          }
          else {
            uVar25 = uVar23;
            if (uVar31 <= uVar23) {
              uVar25 = uVar23 % uVar31;
            }
          }
          plVar26 = *(long **)(*(long *)(*(long *)(lStack_158 + 0x40) + 0x18) + uVar25 * 8);
          if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
            lVar27 = CONCAT44(uVar16 + (int)lVar28,uVar17);
            if ((byte)(uVar24 >> 0x38) < 2) {
              do {
                if (plVar26[1] == uVar23) {
                  if (plVar26[2] == lVar27) goto LAB_0cb2f538;
                }
                else if ((plVar26[1] & uVar31 - 1) != uVar25) break;
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
            else {
              do {
                uVar24 = plVar26[1];
                if (uVar24 == uVar23) {
                  if (plVar26[2] == lVar27) goto LAB_0cb2f538;
                }
                else {
                  if (uVar31 <= uVar24) {
                    if ((uVar24 | uVar31) >> 0x20 == 0) {
                      if ((uVar24 & 0xffffffff) % (uVar31 & 0xffffffff) == uVar25)
                      goto LAB_0cb2f4c6;
                      break;
                    }
                    uVar24 = uVar24 % uVar31;
                  }
                  if (uVar24 != uVar25) break;
                }
LAB_0cb2f4c6:
                plVar26 = (long *)*plVar26;
              } while (plVar26 != (long *)0x0);
            }
          }
        }
        goto LAB_0cb2f3e0;
      }
LAB_0cb2f390:
      lVar29 = lVar29 + 1;
    } while (lVar29 != 3);
  }
  if (plStack_140[2] == lVar18) {
    iVar15 = (int)plStack_140[1];
    if (iVar15 == 1) {
      *(undefined4 *)(plStack_140 + 1) = 0;
      plStack_140[2] = *plStack_140;
      goto LAB_0cb2f61d;
    }
    if (iVar15 != 0) {
      *(int *)(plStack_140 + 1) = iVar15 + -1;
      goto LAB_0cb2f61d;
    }
  }
  cVar14 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
  if (cVar14 != '\0') {
    _DAT_00000000 = 0xdeadc0de;
  }
LAB_0cb2f61d:
  lStack_f8 = (long)iVar22 + 0x9e3779b8;
  lStack_f0 = (param_2 >> 0x20) + 0x9e3779b8;
  lVar29 = 0;
  lStack_118 = lVar18;
LAB_0cb2f665:
  uStack_d8 = (ulong)(uint)((int)uStack_120 + (int)lVar29);
  plStack_140 = (long *)(lStack_f8 + lVar29);
  lStack_d0 = ((ulong)plStack_140 >> 2) + (long)plStack_140 * 0x40 + lStack_f0;
  puStack_138 = &uStack_c8 + lVar29 * 6;
  uVar30 = 0;
  lStack_e8 = lVar29;
LAB_0cb2f6e0:
  plVar4 = (long *)puStack_138[uVar30 * 2];
  if (plVar4 != (long *)0x0) {
    lVar28 = plVar4[5];
    LOCK();
    lVar29 = plVar4[7];
    bVar32 = lVar28 == lVar29;
    if (bVar32) {
      plVar4[7] = lVar18;
      lVar29 = lVar28;
    }
    UNLOCK();
    if (!bVar32) {
      iVar22 = 3000;
      do {
        while( true ) {
          if ((lVar29 == lVar18) && (iVar15 = (int)plVar4[6] + 1, iVar15 != -1)) {
            *(int *)(plVar4 + 6) = iVar15;
            uVar31 = plVar4[1];
            if (uVar31 == 0) goto LAB_0cb2f8c0;
            goto LAB_0cb2f75c;
          }
          if (iVar22 == 0) break;
          iVar22 = iVar22 + -1;
          lVar28 = plVar4[5];
          LOCK();
          lVar29 = plVar4[7];
          bVar32 = lVar28 == lVar29;
          if (bVar32) {
            plVar4[7] = lVar18;
            lVar29 = lVar28;
          }
          UNLOCK();
          if (bVar32) goto LAB_0cb2f748;
        }
        func_0x0eee35d0();
        iVar22 = 0;
        lVar28 = plVar4[5];
        LOCK();
        lVar29 = plVar4[7];
        bVar32 = lVar28 == lVar29;
        if (bVar32) {
          plVar4[7] = lVar18;
          lVar29 = lVar28;
        }
        UNLOCK();
      } while (!bVar32);
    }
LAB_0cb2f748:
    *(undefined4 *)(plVar4 + 6) = 1;
    uVar31 = plVar4[1];
    if (uVar31 != 0) {
LAB_0cb2f75c:
      uVar23 = lStack_d0 + uVar30 ^ (ulong)plStack_140;
      uVar24 = uVar31 - (uVar31 >> 1 & 0x5555555555555555);
      uVar24 = (uVar24 >> 2 & 0x3333333333333333) + (uVar24 & 0x3333333333333333);
      uVar24 = ((uVar24 >> 4) + uVar24 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar24 >> 0x38 < 2) {
        uVar25 = uVar31 - 1 & uVar23;
      }
      else {
        uVar25 = uVar23;
        if (uVar31 <= uVar23) {
          uVar25 = uVar23 % uVar31;
        }
      }
      plVar26 = *(long **)(*plVar4 + uVar25 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        lVar29 = ((ulong)(uint)((int)uStack_110 + (int)uVar30) << 0x20) + uStack_d8;
        if ((byte)(uVar24 >> 0x38) < 2) {
          do {
            if (plVar26[1] == uVar23) {
              if (plVar26[2] == lVar29) goto LAB_0cb2fafd;
            }
            else if ((plVar26[1] & uVar31 - 1) != uVar25) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar26[1];
            if (uVar24 == uVar23) {
              if (plVar26[2] == lVar29) goto LAB_0cb2fafd;
            }
            else {
              if (uVar31 <= uVar24) {
                if ((uVar24 | uVar31) >> 0x20 == 0) {
                  if ((uVar24 & 0xffffffff) % (uVar31 & 0xffffffff) == uVar25) goto LAB_0cb2f83a;
                  break;
                }
                uVar24 = uVar24 % uVar31;
              }
              if (uVar24 != uVar25) break;
            }
LAB_0cb2f83a:
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
LAB_0cb2f8c0:
    lVar29 = 0;
    goto LAB_0cb2f8c2;
  }
  goto LAB_0cb2f6d3;
LAB_0cb2f538:
  lVar27 = plVar26[3];
  uVar5 = *(undefined4 *)((long)plVar26 + 0x1c);
  lVar7 = plVar26[4];
  uVar6 = *(undefined4 *)((long)plVar26 + 0x24);
  if (plVar26[4] != 0) {
    LOCK();
    plVar26 = (long *)(plVar26[4] + 8);
    *plVar26 = *plVar26 + 1;
    UNLOCK();
  }
  puVar19 = &uStack_c8 + lVar29 * 6 + lVar28 * 2;
  plVar26 = (long *)puVar19[1];
  *(int *)puVar19 = (int)lVar27;
  *(undefined4 *)((long)puVar19 + 4) = uVar5;
  *(int *)(puVar19 + 1) = (int)lVar7;
  *(undefined4 *)((long)puVar19 + 0xc) = uVar6;
  if (plVar26 != (long *)0x0) {
    LOCK();
    plVar4 = plVar26 + 1;
    lVar27 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar27 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      goto SUB_0412c2d0;
    }
  }
LAB_0cb2f3e0:
  lVar28 = lVar28 + 1;
  if (lVar28 == 3) goto LAB_0cb2f390;
  goto LAB_0cb2f3e9;
LAB_0cb2fafd:
  lVar29 = plVar26[3];
  lVar28 = plVar26[4];
  if (lVar28 == 0) {
LAB_0cb2f8c2:
    lVar28 = 0;
    if (plVar4[7] != lVar18) goto LAB_0cb2f8e3;
LAB_0cb2f8d3:
    iVar22 = (int)plVar4[6];
    if (iVar22 != 1) {
      if (iVar22 == 0) goto LAB_0cb2f8e3;
      *(int *)(plVar4 + 6) = iVar22 + -1;
      uStack_148 = uVar30;
      goto joined_r0x0cb2f925;
    }
    *(undefined4 *)(plVar4 + 6) = 0;
    plVar4[7] = plVar4[5];
    uStack_148 = uVar30;
LAB_0cb2f940:
    lStack_108 = 0;
    plStack_100 = (long *)0x0;
    if (lVar28 == 0) goto LAB_0cb2fcd1;
LAB_0cb2f951:
    plStack_100 = (long *)0x0;
    lStack_108 = 0;
    plStack_100 = (long *)func_0x0412c300(lVar28);
    if (plStack_100 != (long *)0x0) {
      lStack_108 = lVar29;
      if (lVar29 != 0) {
        uVar30 = *(ulong *)(lVar29 + 0x50);
        bVar3 = *(byte *)(lVar29 + 0xb8);
        puStack_160 = (undefined *)(ulong)bVar3;
        uVar16 = (uint)uVar30;
        lStack_168 = lVar28;
        switch(bVar3) {
        case 2:
        case 6:
        case 8:
          uStack_170 = (ulong)(uVar16 - 1);
          uVar31 = uVar30 >> 0x20;
          uStack_150 = uVar30;
          do {
            uStack_170 = CONCAT44((int)uVar31 + -1,(int)uStack_170);
            do {
              func_0x0cb30920(&lStack_130,plVar4,&uStack_170);
              plVar26 = plStack_128;
              lVar29 = lStack_130;
              lVar28 = lStack_168;
              if (plStack_128 == (long *)0x0) goto LAB_0cb2fcd1;
              LOCK();
              plStack_128[2] = plStack_128[2] + 1;
              UNLOCK();
              plVar20 = (long *)func_0x0412c300(plStack_128);
              if (plVar20 == (long *)0x0) goto SUB_0412c2d0;
              if (lVar29 == 0) {
                bVar32 = false;
                LOCK();
                plVar1 = plVar20 + 1;
                lVar29 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
              }
              else {
                bVar32 = bVar3 <= *(byte *)(lVar29 + 0xb8);
                LOCK();
                plVar1 = plVar20 + 1;
                lVar29 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
              }
              if (lVar29 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar26 = plVar20;
                goto SUB_0412c2d0;
              }
              func_0x0412c2d0(plVar26);
              lVar28 = lStack_168;
              plVar26 = plStack_128;
              if (plStack_128 != (long *)0x0) goto SUB_0412c2d0;
              if (!bVar32) goto LAB_0cb2fcd1;
              iVar8 = uStack_170._4_4_;
              iVar22 = uStack_170._4_4_ + 1;
              iVar15 = (int)uStack_170;
              uStack_170 = CONCAT44(iVar22,(int)uStack_170);
              uVar31 = (ulong)uStack_150._4_4_;
            } while (iVar8 <= (int)uStack_150._4_4_);
            uStack_170 = CONCAT44(iVar22,(int)uStack_170 + 1);
          } while (iVar15 <= (int)uStack_150);
          func_0x0cb30ba0(*(undefined8 *)(lStack_158 + 0x40),&uStack_150,puStack_160);
          break;
        case 4:
          uStack_170 = uVar30;
          if ((cRam000000000f6faa70 == '\0') && (iVar22 = func_0x04108328(0xf6faa70), iVar22 != 0))
          {
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
            FUN_0410844d(0xf6faa70);
          }
          uVar17 = (uint)(uVar30 >> 0x20);
          puStack_160 = &UNK_014f0908;
          if ((((uVar16 | uVar17) & 1) != 0) &&
             (((uVar30 & 1) == 0 || (puStack_160 = &UNK_014f0748, (uVar30 >> 0x20 & 1) != 0)))) {
            bVar32 = (uVar30 >> 0x20 & 1) == 0;
            puStack_160 = &UNK_014f0510;
            if (bVar32) {
              puStack_160 = (undefined *)0x0;
            }
            puVar21 = &UNK_014f08d0;
            if (bVar32) {
              puVar21 = (undefined *)0x0;
            }
            if ((uVar30 & 1) == 0) {
              puStack_160 = puVar21;
            }
          }
          lVar29 = 0;
          do {
            uStack_150 = CONCAT44(uVar17 - *(int *)(lVar29 * 8 + 0xf6faa34),
                                  uVar16 - *(int *)(lVar29 * 8 + 0xf6faa30));
            func_0x0cb30920(&lStack_130,plVar4,&uStack_150);
            plVar26 = plStack_128;
            lVar28 = lStack_168;
            if (plStack_128 == (long *)0x0) goto LAB_0cb2fcd1;
            bVar3 = puStack_160[lVar29];
            plVar20 = (long *)func_0x0412c300(plStack_128);
            lVar18 = lStack_118;
            lVar28 = lStack_168;
            if (plVar20 == (long *)0x0) {
              func_0x0412c2d0(plVar26);
              lVar28 = lStack_168;
              lVar18 = lStack_118;
              goto LAB_0cb2fcd1;
            }
            if (lStack_130 == 0) {
              bVar32 = false;
            }
            else {
              bVar32 = bVar3 <= *(byte *)(lStack_130 + 0xb8);
            }
            LOCK();
            plVar26 = plVar20 + 1;
            lVar27 = *plVar26;
            *plVar26 = *plVar26 + -1;
            UNLOCK();
            if (lVar27 == 0) {
              plStack_e0 = plVar20;
              (**(code **)(*plVar20 + 0x10))(plVar20);
              plVar26 = plStack_e0;
              goto SUB_0412c2d0;
            }
            plVar26 = plStack_128;
            if (plStack_128 != (long *)0x0) goto SUB_0412c2d0;
            if (!bVar32) goto LAB_0cb2fcd1;
            lVar29 = lVar29 + 1;
          } while (lVar29 != 8);
          func_0x0cb30ba0(*(undefined8 *)(lStack_158 + 0x40),&uStack_170,4);
        }
        goto LAB_0cb2fcd1;
      }
      goto LAB_0cb2fcdb;
    }
  }
  else {
    LOCK();
    *(long *)(lVar28 + 0x10) = *(long *)(lVar28 + 0x10) + 1;
    UNLOCK();
    if (plVar4[7] == lVar18) goto LAB_0cb2f8d3;
LAB_0cb2f8e3:
    uStack_148 = uVar30;
    cVar14 = func_0x0eeddcf0(&UNK_01239425,&UNK_01198d5e,0x6d,&UNK_0126e3df,&UNK_0121f006);
    if (cVar14 == '\0') goto LAB_0cb2f940;
    _DAT_00000000 = 0xdeadc0de;
joined_r0x0cb2f925:
    plStack_100 = (long *)0x0;
    lStack_108 = 0;
    if (lVar28 != 0) goto LAB_0cb2f951;
LAB_0cb2fcd1:
    if (plStack_100 != (long *)0x0) {
LAB_0cb2fcdb:
      plVar26 = plStack_100;
      LOCK();
      plVar4 = plStack_100 + 1;
      lVar29 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar29 == 0) {
        (**(code **)(*plStack_100 + 0x10))(plStack_100);
        goto SUB_0412c2d0;
      }
    }
    uVar30 = uStack_148;
    if (lVar28 == 0) goto LAB_0cb2f6d3;
  }
  uVar30 = uStack_148;
  func_0x0412c2d0(lVar28);
LAB_0cb2f6d3:
  plVar26 = plStack_40;
  plVar13 = plStack_50;
  plVar12 = plStack_60;
  plVar11 = plStack_70;
  plVar10 = plStack_80;
  plVar9 = plStack_90;
  plVar1 = plStack_a0;
  plVar20 = plStack_b0;
  plVar4 = uStack_c0;
  uVar30 = uVar30 + 1;
  if (uVar30 == 3) goto LAB_0cb2f650;
  goto LAB_0cb2f6e0;
LAB_0cb2f650:
  lVar29 = lStack_e8 + 1;
  if (lVar29 == 3) goto LAB_0cb2fda3;
  goto LAB_0cb2f665;
LAB_0cb2fda3:
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar29 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      goto SUB_0412c2d0;
    }
  }
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_50 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      plVar26 = plVar13;
      goto SUB_0412c2d0;
    }
  }
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_60 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      plVar26 = plVar12;
      goto SUB_0412c2d0;
    }
  }
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_70 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      plVar26 = plVar11;
      goto SUB_0412c2d0;
    }
  }
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_80 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      plVar26 = plVar10;
      goto SUB_0412c2d0;
    }
  }
  if (plStack_90 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_90 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      plVar26 = plVar9;
      goto SUB_0412c2d0;
    }
  }
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_a0 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      plVar26 = plVar1;
      goto SUB_0412c2d0;
    }
  }
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar26 = plStack_b0 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      plVar26 = plVar20;
      goto SUB_0412c2d0;
    }
  }
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar26 = uStack_c0 + 1;
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + -1;
    UNLOCK();
    if (lVar29 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      plVar26 = plVar4;
SUB_0412c2d0:
      if (plVar26[2] != 0) {
        LOCK();
        plVar4 = plVar26 + 2;
        lVar29 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar29 != 0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0412c2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar26 + 0x20))();
      return;
    }
  }
  return;
}


