/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcaf9360 (ELF vaddr 0xc9f9360)
 * Label: caller-of-callee
 * Body:  [[0caf9360, 0caf945a] [0caf9460, 0caf9661] [0caf9670, 0caf96a4] [0caf96b0, 0caf9759] [0caf9760, 0caf9bb1] [0caf9bc0, 0caf9c20] [0caf9c30, 0caf9c5c] [0caf9c60, 0caf9c8e] [0caf9c90, 0caf9d29] [0caf9d30, 0caf9d9d] [0caf9da0, 0caf9ffc] [0cafa000, 0cafa0f3] [0cafa100, 0cafa146] [0cafa150, 0cafa1a2] [0cafa1b0, 0cafa257] [0cafa260, 0cafa2cd] [0cafa2d0, 0cafab49] [0cafab50, 0cafabfc]]
 * Ghidra: FUN_0caf9360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0caf9360(long param_1,long *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  long *plVar25;
  int iVar26;
  uint uVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  byte bVar31;
  uint uVar32;
  ulong uVar33;
  short sVar34;
  long lVar35;
  ulong uVar36;
  short sVar37;
  long lVar38;
  ulong uVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  uint uStack_7be0;
  uint uStack_7bd4;
  undefined8 uStack_7bd0;
  long lStack_7bc8;
  ulong uStack_7bc0;
  long *plStack_7bb8;
  undefined8 uStack_7bb0;
  undefined8 uStack_7ba8;
  long lStack_7ba0;
  uint uStack_7b98;
  int iStack_7b94;
  int iStack_7b90;
  uint uStack_7b8c;
  long lStack_7b88;
  long *plStack_7b80;
  undefined4 uStack_7b74;
  undefined4 uStack_7b70;
  undefined4 uStack_7b6c;
  ulong uStack_7b68;
  long lStack_7b60;
  int iStack_7b58;
  int iStack_7b54;
  long lStack_7b50;
  long lStack_7b48;
  long lStack_7b40;
  byte bStack_7b38;
  uint uStack_7b30;
  int iStack_7b2c;
  undefined1 auStack_79c0 [368];
  long *plStack_7850;
  long *plStack_7848;
  undefined1 uStack_7840;
  long lStack_7838;
  long alStack_200 [57];
  byte bStack_38;
  
  plVar3 = param_2 + 0x22;
  func_0x0412d550(plVar3);
  lVar42 = param_2[0x34];
  lVar35 = param_2[0x35];
  func_0x0412d610(plVar3);
  iStack_7b58 = (int)lVar42 + 1;
  iStack_7b54 = (int)lVar35 + 1;
  uVar14 = (**(code **)(*param_2 + 0x20))(&lStack_7b88,param_2,&iStack_7b58);
  lVar42 = lStack_7b88;
  if (lStack_7b88 == 0) {
    uStack_7be0 = (uint)CONCAT71((int7)((ulong)uVar14 >> 8),1);
  }
  else {
    uStack_7b74 = *(undefined4 *)(lStack_7b88 + 0x50);
    uStack_7b6c = *(undefined4 *)(lStack_7b88 + 0x54);
    uStack_7b70 = 0;
    lVar35 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) * 0x4ec4ec4ec4ec4ec5;
    iStack_7b94 = -1;
    plStack_7bb8 = param_2;
    if (-1 < (short)((short)lVar35 + -1)) {
      iVar26 = (int)lVar35;
      lVar35 = lVar35 + -2;
      do {
        iVar26 = iVar26 + -1;
        sVar34 = (short)iVar26;
        lVar38 = (ulong)((int)lVar35 + 1U & 0x7fff) * 0x68 + *(long *)(param_1 + 0x108);
        if ((_DAT_0f6ffb10 == (long *)0x0) &&
           (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,&UNK_013a2901),
           cVar6 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        uVar14 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
        plVar1 = *(long **)(lVar38 + 0x30);
        cVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar14);
        if ((cVar6 == '\0') ||
           ((plVar1 = *(long **)(lVar38 + 0x38), plVar1 != (long *)0x0 &&
            (cVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,uVar14), cVar6 == '\0'))))
        goto LAB_0caf9527;
        sVar34 = (short)lVar35;
        lVar35 = lVar35 + -1;
      } while (-1 < sVar34);
      sVar34 = -1;
LAB_0caf9527:
      iStack_7b94 = (int)sVar34;
    }
    cVar6 = func_0x0ca97750(*(undefined8 *)(*(long *)(lStack_7b88 + 0x30) + 0x1a0),&uStack_7b74);
    plVar1 = plStack_7bb8;
    if (cVar6 == '\0') {
      uStack_7be0 = 0;
    }
    else {
      func_0x0ca8a1f0(&lStack_7b50,*(undefined8 *)(*(long *)(lStack_7b88 + 0x30) + 0x198),
                      lVar42 + 0x50,plStack_7bb8);
      uStack_7be0 = (uint)bStack_7b38;
      if (bStack_7b38 == 1) {
        (*param_4)(param_5);
        func_0x0c9d0c10(auStack_79c0,plVar1[4],plVar1[5],plVar1,0,1,0,0);
        lVar42 = *(long *)(param_1 + 0x30);
        sVar37 = *(short *)(lVar42 + 0xaa) - *(short *)(lVar42 + 0xa8);
        sVar34 = sVar37 + 0xf;
        if (-1 < sVar37) {
          sVar34 = sVar37;
        }
        if (*(char *)(lVar42 + 0x11c) == '\0') {
          uVar33 = (*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3) *
                   0x4ec4ec4ec4ec4ec5;
        }
        else {
          plStack_7848 = (long *)CONCAT71(plStack_7848._1_7_,1);
          plStack_7850 = plVar3;
          func_0x0412d550();
          plVar25 = (long *)plVar1[0x3a];
          plVar1 = (long *)plVar1[0x3b];
          if ((ushort)(sVar37 - 0x10U) < 0xffe1 && plVar25 != plVar1) {
            uVar39 = (ulong)((uint)(int)sVar34 >> 4 & 0xffff);
            uStack_7bd0 = uVar39 * 0x68 + -0x30;
            uVar33 = 0;
            do {
              uVar15 = uVar39;
              lVar42 = uStack_7bd0;
              if (*plVar25 != 0) {
                do {
                  lVar35 = *(long *)(*plVar25 + 0x108);
                  if ((_DAT_0f6ffb10 == (long *)0x0) &&
                     (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                              &UNK_013a2901), cVar6 != '\0')) {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                  uVar14 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
                  plVar2 = *(long **)(lVar35 + -8 + lVar42);
                  cVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar14);
                  if ((cVar6 == '\0') ||
                     ((plVar2 = *(long **)(lVar35 + lVar42), plVar2 != (long *)0x0 &&
                      (cVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar14), cVar6 == '\0')))) {
                    uVar15 = (ulong)((uint)uVar15 & 0x7fffffff);
                    goto LAB_0caf9677;
                  }
                  bVar4 = 1 < (long)uVar15;
                  uVar15 = uVar15 - 1;
                  lVar42 = lVar42 + -0x68;
                } while (bVar4);
                uVar15 = 0;
LAB_0caf9677:
                if (uVar33 <= uVar15) {
                  uVar33 = uVar15;
                }
              }
              plVar25 = plVar25 + 2;
            } while (plVar25 != plVar1);
          }
          else {
            uVar33 = 0;
          }
          func_0x0412d610(plVar3);
        }
        if (uVar33 != 0) {
          lStack_7b60 = param_1 + 0x50;
          uVar39 = 0;
          uStack_7b68 = uVar33;
          do {
            lVar42 = *(long *)(param_1 + 0x108);
            if ((uVar39 < (ulong)((*(long *)(param_1 + 0x110) - lVar42 >> 3) * 0x4ec4ec4ec4ec4ec5))
               && (lVar42 != 0)) {
              lVar42 = lVar42 + uVar39 * 0x68;
              if ((*(char *)(lVar42 + 0x1d) == '\x01') && (*(int *)(lVar42 + 0x18) != 2)) {
                if ((*(char *)(param_1 + 0x14e2) != '\x01') ||
                   (cVar6 = (**(code **)(**(long **)(param_1 + 0x28) + 0x9f0))(), cVar6 == '\0')) {
                  bVar4 = false;
                  goto LAB_0caf9bc9;
                }
                cVar6 = *(char *)(lVar42 + 0x61);
                uVar7 = (**(code **)(**(long **)(param_1 + 0x28) + 0x9f0))();
                lVar38 = func_0x0417cc60();
                lVar35 = *(long *)(param_1 + 0x108);
                uVar36 = (long)cVar6 -
                         (long)(short)((uint)(int)*(short *)(*(long *)(param_1 + 0x30) + 0xa8) >> 4)
                ;
                uVar15 = (*(long *)(param_1 + 0x110) - lVar35 >> 3) * 0x4ec4ec4ec4ec4ec5;
                if (uVar36 <= uVar15 && uVar15 - uVar36 != 0) {
                  if ((_DAT_0f6ffb10 == (long *)0x0) &&
                     (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                              &UNK_013a2901), cVar6 != '\0')) {
                    _DAT_00000000 = 0xdeadc0de;
                  }
                  lVar35 = lVar35 + uVar36 * 0x68;
                  uVar14 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
                  plVar3 = *(long **)(lVar35 + 0x30);
                  cVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar14);
                  lStack_7bc8 = lVar42;
                  uStack_7bc0 = uVar39;
                  if ((cVar6 != '\0') &&
                     ((plVar3 = *(long **)(lVar35 + 0x38), plVar3 == (long *)0x0 ||
                      (cVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar14), cVar6 != '\0')))) {
                    bVar16 = 1;
                    lVar42 = 8;
                    do {
                      uStack_7b30 = *(int *)(&UNK_019b3c48 + lVar42) + *(int *)(param_1 + 0x50);
                      iStack_7b2c = *(int *)(&UNK_019b3c50 + lVar42) + *(int *)(param_1 + 0x54);
                      (**(code **)(*plStack_7bb8 + 0x20))(&plStack_7850,plStack_7bb8,&uStack_7b30);
                      bVar21 = 0;
                      if (plStack_7850 != (long *)0x0) {
                        lVar35 = plStack_7850[0x21];
                        if ((long)*(int *)(&UNK_019b3c4c + lVar42) + uVar36 <
                            (ulong)((plStack_7850[0x22] - lVar35 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
                          lVar43 = ((long)*(int *)(&UNK_019b3c4c + lVar42) + uVar36) * 0x68;
                          if (*(long *)(lVar35 + 0x10 + lVar43) == 0) {
                            if ((_DAT_0f6ffb10 == (long *)0x0) &&
                               (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,
                                                        &UNK_013a2868,&UNK_013a2901), cVar6 != '\0')
                               ) {
                              _DAT_00000000 = 0xdeadc0de;
                            }
                            lVar35 = lVar35 + lVar43;
                            uVar14 = *(undefined8 *)(*_DAT_0f6ffb10 + 0x200);
                            cVar6 = (**(code **)(**(long **)(lVar35 + 0x30) + 0x18))
                                              (*(long **)(lVar35 + 0x30),uVar14);
                            if (cVar6 != '\0') {
                              plVar3 = *(long **)(lVar35 + 0x38);
                              bVar21 = 0;
                              if ((plVar3 == (long *)0x0) ||
                                 (cVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,uVar14),
                                 cVar6 != '\0')) goto LAB_0caf9a7c;
                            }
                            uVar14 = FUN_0cc41df0(&DAT_0f6ff9e0,0xf6eae78,1);
                            cVar6 = (**(code **)(**(long **)(lVar35 + 0x30) + 0x10))
                                              (*(long **)(lVar35 + 0x30),uVar14);
                            bVar21 = 0;
                            if (cVar6 != '\0') {
                              plVar3 = *(long **)(lVar35 + 0x38);
                              if (plVar3 != (long *)0x0) {
                                bVar21 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar14);
                                bVar16 = bVar16 & bVar21;
                                bVar21 = (bVar21 ^ 1) * '\x02';
                              }
                              goto LAB_0caf9a7c;
                            }
                            bVar21 = 2;
                          }
                          else {
                            bVar21 = 0;
                          }
                          bVar16 = 0;
                        }
                      }
LAB_0caf9a7c:
                      plVar3 = plStack_7848;
                      if (plStack_7848 != (long *)0x0) {
                        LOCK();
                        plVar1 = plStack_7848 + 1;
                        lVar35 = *plVar1;
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (lVar35 == 0) {
                          (**(code **)(*plStack_7848 + 0x10))(plStack_7848);
                          func_0x0412c2d0(plVar3);
                        }
                      }
                    } while (((bVar21 & 3) == 0) && (lVar42 = lVar42 + 0xc, lVar42 != 0x50));
                    uVar39 = uStack_7bc0;
                    lVar42 = lStack_7bc8;
                    if (bVar16 != 0) goto LAB_0caf9805;
                  }
                  func_0x0c9d0c10(&uStack_7b30,plStack_7bb8[4],plStack_7bb8[5],plStack_7bb8,0,0,0,0)
                  ;
                  uVar8 = func_0x0cadee90(*(undefined8 *)(param_1 + 0x28));
                  func_0x0ca9e0d0(&plStack_7850,&uStack_7b30,uVar36,lStack_7b60,uVar8,1,0);
                  iVar26 = 0;
                  uVar10 = 0x10;
                  do {
                    uVar19 = uVar10 * 0x40;
                    uStack_7b98 = uVar10 + 1;
                    uVar11 = uStack_7b98 * 0x40;
                    uStack_7b8c = uVar19 - 0x40;
                    iStack_7b90 = 0x10;
                    iVar12 = 0;
                    do {
                      uVar23 = iStack_7b90 * 0x1000;
                      iStack_7b90 = iStack_7b90 + 1;
                      uVar20 = iStack_7b90 * 0x1000;
                      uVar40 = 0xf;
                      do {
                        uVar13 = uVar40 + 1;
                        uVar41 = uVar23 | uVar19 | uVar13;
                        lVar42 = *(long *)((long)alStack_200 +
                                          (ulong)((uVar13 & 0x30) >> 1) +
                                          (ulong)(uVar41 >> 5 & 0x60) + (ulong)(uVar41 >> 9 & 0x180)
                                          );
                        if (lVar42 == 0) {
                          if ((_DAT_0f6ffb10 == (long *)0x0) &&
                             (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,
                                                      &UNK_013a2868), cVar6 != '\0')) {
                            _DAT_00000000 = 0xdeadc0de;
                          }
                          lVar35 = *(long *)(*_DAT_0f6ffb10 + 0x200);
                          lVar42 = lVar35;
                        }
                        else {
                          uVar27 = (uVar40 + (uVar41 >> 2 & 0xf0 | uVar41 >> 4 & 0xf00)) - 0xf;
                          lVar35 = (**(code **)(**(long **)(lVar42 + 0x30) + 0x20))
                                             (*(long **)(lVar42 + 0x30),uVar27 & 0xffff);
                          plVar3 = *(long **)(lVar42 + 0x38);
                          if (plVar3 == (long *)0x0) {
                            if ((_DAT_0f6ffb10 == (long *)0x0) &&
                               (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,
                                                        &UNK_013a2868), cVar6 != '\0')) {
                              _DAT_00000000 = 0xdeadc0de;
                            }
                            lVar42 = *(long *)(*_DAT_0f6ffb10 + 0x200);
                          }
                          else {
                            lVar42 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar27 & 0xffff);
                          }
                        }
                        if ((lVar35 != 0) && (lVar42 != 0)) {
                          uVar30 = uVar13 & 0x7ffffff0;
                          uVar32 = uVar30 | uVar23;
                          uVar27 = uVar32 | uVar19;
                          uStack_7bb0 = (ulong)uVar27;
                          lStack_7ba0 = (long)alStack_200 +
                                        (ulong)(uVar27 >> 5 & 0x60) + (ulong)(uVar27 >> 9 & 0x180);
                          uStack_7ba8 = (ulong)((uVar13 & 0x30) >> 1);
                          lVar43 = *(long *)(lStack_7ba0 + uStack_7ba8);
                          uStack_7bd0._4_4_ = (undefined4)((ulong)uStack_7bd0 >> 0x20);
                          uStack_7bd0 = CONCAT44(uStack_7bd0._4_4_,uVar27 >> 4);
                          bVar16 = bStack_38;
                          if (lVar43 != 0) {
                            uVar27 = ((uVar27 >> 2 & 0xf0 | uVar27 >> 4 & 0xf00) + uVar40) - 0xf;
                            if (*(long *)(lVar43 + 8) == 0) {
                              bVar16 = 0;
                              if (*(char *)(lVar43 + 0x1c) != '\0') {
                                bVar16 = 0xf;
                              }
                              lVar43 = *(long *)(lVar43 + 0x10);
                              if (lVar43 != 0) goto LAB_0cafa403;
LAB_0cafa44a:
                              bVar21 = 0;
                            }
                            else {
                              bVar16 = (char)uVar27 * '\x04' & 4;
                              bVar16 = ((byte)(0xf << bVar16) &
                                       *(byte *)(*(long *)(lVar43 + 8) +
                                                (ulong)((uVar27 & 0xffff) >> 1))) >> bVar16 & 0xf;
                              lVar43 = *(long *)(lVar43 + 0x10);
                              if (lVar43 == 0) goto LAB_0cafa44a;
LAB_0cafa403:
                              bVar21 = (char)uVar27 * '\x04' & 4;
                              bVar21 = ((byte)(0xf << bVar21) &
                                       *(byte *)(lVar43 + (ulong)((uVar27 & 0xffff) >> 1))) >>
                                       bVar21 & 0xf;
                            }
                            bVar16 = bVar16 << 4 | bVar21;
                          }
                          bVar28 = (byte)*(undefined4 *)(lVar35 + 0xa4);
                          bVar21 = (byte)*(undefined4 *)(lVar42 + 0xa4);
                          if (bVar21 < bVar28) {
                            bVar21 = bVar28;
                          }
                          bVar28 = bVar16;
                          if ((bVar16 & 0xf) <= bVar21) {
                            bVar28 = bVar21;
                          }
                          bVar28 = bVar28 & 0xf;
                          bVar21 = *(byte *)(lVar42 + 0xa5);
                          if (*(byte *)(lVar42 + 0xa5) < *(byte *)(lVar35 + 0xa5)) {
                            bVar21 = *(byte *)(lVar35 + 0xa5);
                          }
                          bVar22 = bVar21 + (bVar21 == 0);
                          if ((bVar28 != 0) || (bVar21 != 0xf)) {
                            if (iVar26 == 0xf) {
                              uVar32 = uVar32 | uVar11;
                              lVar42 = *(long *)((long)alStack_200 +
                                                (ulong)((uVar13 & 0x30) >> 1) +
                                                (ulong)(uVar32 >> 5 & 0x60) +
                                                (ulong)(uVar32 >> 9 & 0x180));
                              bVar4 = true;
                              if (lVar42 == 0) goto joined_r0x0cafa654;
                              if (*(int *)(lVar42 + 0x18) == 1) goto LAB_0cafa50f;
LAB_0cafa5bc:
                              bVar4 = true;
                              uVar27 = (uVar40 + (uVar32 >> 2 & 0xf0 | uVar32 >> 4 & 0xf00)) - 0xf;
                              if (*(long *)(lVar42 + 8) == 0) {
                                bVar17 = 0;
                                if (*(char *)(lVar42 + 0x1c) != '\0') {
                                  bVar17 = 0xf;
                                }
                                lVar42 = *(long *)(lVar42 + 0x10);
                                if (lVar42 != 0) goto LAB_0cafa619;
LAB_0cafaa5b:
                                bVar21 = 0;
                              }
                              else {
                                bVar21 = (char)uVar27 * '\x04' & 4;
                                bVar17 = ((byte)(0xf << bVar21) &
                                         *(byte *)(*(long *)(lVar42 + 8) +
                                                  (ulong)((uVar27 & 0xffff) >> 1))) >> bVar21 & 0xf;
                                lVar42 = *(long *)(lVar42 + 0x10);
                                if (lVar42 == 0) goto LAB_0cafaa5b;
LAB_0cafa619:
                                bVar21 = (char)uVar27 * '\x04' & 4;
                                bVar21 = ((byte)(0xf << bVar21) &
                                         *(byte *)(lVar42 + (ulong)((uVar27 & 0xffff) >> 1))) >>
                                         bVar21 & 0xf;
                              }
                              bVar21 = bVar17 << 4 | bVar21;
                              if (iVar12 != 0xf) goto LAB_0cafa65a;
LAB_0cafa51c:
                              uVar30 = uVar30 | uVar20 | uVar19;
                              lVar42 = *(long *)((long)alStack_200 +
                                                (ulong)((uVar13 & 0x30) >> 1) +
                                                (ulong)(uVar30 >> 5 & 0x60) +
                                                (ulong)(uVar30 >> 9 & 0x180));
                              if ((lVar42 != 0) && (*(int *)(lVar42 + 0x18) != 1))
                              goto LAB_0cafa99f;
LAB_0cafa6ac:
                              bVar4 = true;
joined_r0x0cafa7ae:
                              uVar33 = 0;
                              if (uVar40 != 0x1e) goto LAB_0cafa6bc;
LAB_0cafa7b4:
                              uVar30 = uVar40 + 2;
                              uVar27 = uVar30 & 0x7ffffff0 | uVar19;
                              lVar42 = *(long *)((long)alStack_200 +
                                                (ulong)((uVar30 & 0x30) >> 1) +
                                                (ulong)((uVar27 | uVar23) >> 9 & 0x180) +
                                                (ulong)(uVar27 >> 5 & 0x60));
                              if ((lVar42 == 0) || (*(int *)(lVar42 + 0x18) == 1)) {
LAB_0cafa86a:
                                bVar17 = 0;
                              }
                              else {
                                uVar27 = uVar27 >> 2 & 0xf0 | uVar30 & 0xf |
                                         (uVar27 | uVar23) >> 4 & 0xf00;
                                lVar35 = *(long *)(lVar42 + 8);
joined_r0x0cafa744:
                                if (lVar35 == 0) {
                                  bVar31 = 0;
                                  if (*(char *)(lVar42 + 0x1c) != '\0') {
                                    bVar31 = 0xf;
                                  }
                                  lVar42 = *(long *)(lVar42 + 0x10);
                                  if (lVar42 != 0) goto LAB_0cafa77b;
LAB_0cafa855:
                                  bVar17 = 0;
                                }
                                else {
                                  bVar17 = (char)uVar27 * '\x04' & 4;
                                  bVar31 = ((byte)(0xf << bVar17) &
                                           *(byte *)(lVar35 + (ulong)(uVar27 >> 1))) >> bVar17 & 0xf
                                  ;
                                  lVar42 = *(long *)(lVar42 + 0x10);
                                  if (lVar42 == 0) goto LAB_0cafa855;
LAB_0cafa77b:
                                  bVar17 = (byte)(uVar27 << 2) & 4;
                                  bVar17 = ((byte)(0xf << bVar17) &
                                           *(byte *)(lVar42 + (ulong)(uVar27 >> 1))) >> bVar17 & 0xf
                                  ;
                                }
                                bVar17 = bVar31 << 4 | bVar17;
                              }
                              bVar31 = (byte)(uVar33 >> 4);
                              bVar5 = bVar17 >> 4;
                              if (bVar17 >> 4 < bVar31) {
                                bVar5 = bVar31;
                              }
                              if (bVar5 <= bVar21 >> 4) {
                                bVar5 = bVar21 >> 4;
                              }
                              bVar29 = (byte)uVar33 & 0xf;
                              bVar31 = bVar17 & 0xf;
                              if ((bVar17 & 0xf) < bVar29) {
                                bVar31 = bVar29;
                              }
                              if (bVar31 <= (bVar21 & 0xf)) {
                                bVar31 = bVar21 & 0xf;
                              }
                              bVar21 = bVar31 - bVar22;
                              if (bVar31 < bVar22) {
                                bVar21 = 0;
                              }
                              bVar16 = bVar16 >> 4;
                              bVar17 = bVar16;
                              if ((bVar22 < bVar5) &&
                                 (bVar17 = bVar5 - bVar22 & 0xf, bVar17 < bVar16)) {
                                bVar17 = bVar16;
                              }
                              if (bVar28 <= bVar21) {
                                bVar28 = bVar21;
                              }
                              bVar28 = bVar28 | bVar17 << 4;
                            }
                            else {
                              bVar4 = false;
                              if (iVar26 == 0) {
                                uVar32 = uVar32 | uStack_7b8c;
                                lVar42 = *(long *)((long)alStack_200 +
                                                  (ulong)(uVar32 >> 1 & 0x18) +
                                                  (ulong)(uVar32 >> 5 & 0x60) +
                                                  (ulong)(uVar32 >> 9 & 0x180));
                                if ((lVar42 != 0) && (*(int *)(lVar42 + 0x18) != 1))
                                goto LAB_0cafa5bc;
LAB_0cafa50f:
                                bVar4 = true;
                              }
joined_r0x0cafa654:
                              bVar21 = 0;
                              if (iVar12 == 0xf) goto LAB_0cafa51c;
LAB_0cafa65a:
                              if (iVar12 != 0) goto joined_r0x0cafa7ae;
                              uVar30 = uVar30 | uVar23 - 0x1000 | uVar19;
                              lVar42 = *(long *)((long)alStack_200 +
                                                (ulong)((uVar13 & 0x30) >> 1) +
                                                (ulong)(uVar30 >> 5 & 0x60) +
                                                (ulong)(uVar30 >> 9 & 0x180));
                              if ((lVar42 == 0) || (*(int *)(lVar42 + 0x18) == 1))
                              goto LAB_0cafa6ac;
LAB_0cafa99f:
                              bVar4 = true;
                              uVar27 = ((uVar30 >> 2 & 0xf0 | uVar30 >> 4 & 0xf00) + uVar40) - 0xf;
                              if (*(long *)(lVar42 + 8) == 0) {
                                bVar17 = 0;
                                if (*(char *)(lVar42 + 0x1c) != '\0') {
                                  bVar17 = 0xf;
                                }
                                lVar42 = *(long *)(lVar42 + 0x10);
                                if (lVar42 != 0) goto LAB_0cafa9fe;
LAB_0cafaa9d:
                                bVar31 = 0;
                              }
                              else {
                                bVar17 = (char)uVar27 * '\x04' & 4;
                                bVar17 = ((byte)(0xf << bVar17) &
                                         *(byte *)(*(long *)(lVar42 + 8) +
                                                  (ulong)((uVar27 & 0xffff) >> 1))) >> bVar17 & 0xf;
                                lVar42 = *(long *)(lVar42 + 0x10);
                                if (lVar42 == 0) goto LAB_0cafaa9d;
LAB_0cafa9fe:
                                bVar31 = (char)uVar27 * '\x04' & 4;
                                bVar31 = ((byte)(0xf << bVar31) &
                                         *(byte *)(lVar42 + (ulong)((uVar27 & 0xffff) >> 1))) >>
                                         bVar31 & 0xf;
                              }
                              uVar33 = (ulong)(byte)(bVar17 << 4 | bVar31);
                              if (uVar40 == 0x1e) goto LAB_0cafa7b4;
LAB_0cafa6bc:
                              if (uVar40 == 0xf) {
                                lVar42 = *(long *)((long)alStack_200 +
                                                  (ulong)((uVar19 | uVar23) >> 9 & 0x180) +
                                                  (ulong)((uVar10 & 0x30) << 1));
                                if ((lVar42 == 0) || (*(int *)(lVar42 + 0x18) == 1))
                                goto LAB_0cafa86a;
                                uVar27 = (uVar10 & 0xf) << 4 | 0xf | (uVar19 | uVar23) >> 4 & 0xf00;
                                lVar35 = *(long *)(lVar42 + 8);
                                goto joined_r0x0cafa744;
                              }
                              if (bVar4) goto LAB_0cafa86a;
                              bVar28 = bVar28 | bVar16 & 0xf0;
                            }
                            if (bVar28 != 0) {
                              uStack_7bd4 = uVar41;
                              func_0x0ca981f0(&plStack_7850,&uStack_7bd4,0,bVar28 >> 4);
                              if (*(long *)(lStack_7ba0 + uStack_7ba8) != 0) {
                                uStack_7bd4 = (uVar40 + (int)uStack_7bb0) - 0xf;
                                func_0x0ca9f3f0(&plStack_7850,&uStack_7bd4,0,bVar28 & 0xf,bVar22,
                                                bVar22,0,uVar40 + ((uint)(uStack_7bb0 >> 2) & 0xf0 |
                                                                  (uint)uStack_7bd0 & 0xf00) + -0xf)
                                ;
                              }
                            }
                          }
                        }
                        uVar40 = uVar13;
                      } while (uVar13 != 0x1f);
                      iVar12 = iVar12 + 1;
                    } while (iVar12 != 0x10);
                    iVar26 = iVar26 + 1;
                    uVar10 = uStack_7b98;
                  } while (iVar26 != 0x10);
                  func_0x0ca987e0(&plStack_7850);
                  func_0x0ca99f40(&plStack_7850);
                  func_0x0ca9a8e0(&plStack_7850);
                  func_0x0ca9c870(&plStack_7850);
                  func_0x0ca9eee0(&plStack_7850);
                  func_0x0c9d0f40(&uStack_7b30);
                  uVar33 = uStack_7b68;
                  uVar39 = uStack_7bc0;
                  lVar42 = lStack_7bc8;
                }
LAB_0caf9805:
                plStack_7850 = (long *)&UNK_011b8ea4;
                plStack_7848 = (long *)&UNK_0137a08e;
                uStack_7840 = uVar7;
                lStack_7838 = func_0x0417cc60();
                lStack_7838 = lStack_7838 - lVar38;
                func_0x0cad8200(&plStack_7850);
                *(undefined1 *)(lVar42 + 0x1e) = 0;
              }
            }
            else {
              bVar4 = true;
              lVar42 = 0;
LAB_0caf9bc9:
              (**(code **)(**(long **)(param_1 + 0x28) + 0x9f0))();
              uVar7 = func_0x0cadee90(*(undefined8 *)(param_1 + 0x28));
              func_0x0ca9e0d0(&plStack_7850,auStack_79c0,uVar39,lStack_7b60,uVar7,1,0);
              iVar26 = 0;
              iVar12 = 0x10;
              lStack_7bc8 = lVar42;
              uStack_7bc0 = uVar39;
              do {
                uStack_7bd0 = CONCAT44(uStack_7bd0._4_4_,iVar12 << 6);
                iVar9 = 0x10;
                iVar18 = 0;
                do {
                  lStack_7ba0 = CONCAT44(lStack_7ba0._4_4_,iVar9 << 0xc);
                  uVar10 = iVar9 << 0xc | (uint)uStack_7bd0;
                  iVar24 = 0;
                  do {
                    uVar11 = iVar24 + 0x10;
                    uVar19 = uVar10 | uVar11;
                    lVar42 = *(long *)((long)alStack_200 +
                                      (ulong)(uVar19 >> 1 & 0x18) +
                                      (ulong)(uVar19 >> 5 & 0x60) + (ulong)(uVar19 >> 9 & 0x180));
                    if (lVar42 == 0) {
                      if ((_DAT_0f6ffb10 == (long *)0x0) &&
                         (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                                  &UNK_013a2901), cVar6 != '\0')) {
                        _DAT_00000000 = 0xdeadc0de;
                      }
                      lVar42 = *(long *)(*_DAT_0f6ffb10 + 0x200);
                      lVar35 = lVar42;
                    }
                    else {
                      uVar40 = (uVar19 >> 2 & 0xf0 | uVar19 >> 4 & 0xf00) + iVar24;
                      lVar35 = (**(code **)(**(long **)(lVar42 + 0x30) + 0x20))
                                         (*(long **)(lVar42 + 0x30),uVar40 & 0xffff);
                      plVar3 = *(long **)(lVar42 + 0x38);
                      if (plVar3 == (long *)0x0) {
                        if ((_DAT_0f6ffb10 == (long *)0x0) &&
                           (cVar6 = func_0x0eeddcf0(&UNK_013a28c0,&UNK_011e3821,0x2fd,&UNK_013a2868,
                                                    &UNK_013a2901), cVar6 != '\0')) {
                          _DAT_00000000 = 0xdeadc0de;
                        }
                        lVar42 = *(long *)(*_DAT_0f6ffb10 + 0x200);
                      }
                      else {
                        lVar42 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar40 & 0xffff);
                      }
                    }
                    if ((lVar35 != 0) && (lVar42 != 0)) {
                      uVar20 = uVar11 & 0x7ffffff0 | (uint)uStack_7bd0;
                      uVar40 = uVar20 | (uint)lStack_7ba0;
                      lVar43 = (ulong)(uVar40 >> 9 & 0x180) + ((ulong)(uVar20 >> 5 & 0x60) - 0x200);
                      uVar33 = (ulong)(uVar40 >> 1 & 0x18);
                      lVar38 = *(long *)((long)alStack_200 + uVar33 + lVar43 + 0x200);
                      bVar16 = bStack_38;
                      if (lVar38 != 0) {
                        uVar23 = (uVar20 >> 2 & 0xf0 | uVar40 >> 4 & 0xf00) + iVar24;
                        if (*(long *)(lVar38 + 8) == 0) {
                          bVar16 = 0;
                          if (*(char *)(lVar38 + 0x1c) != '\0') {
                            bVar16 = 0xf;
                          }
                          lVar38 = *(long *)(lVar38 + 0x10);
                          if (lVar38 != 0) goto LAB_0caf9ebf;
LAB_0caf9f06:
                          bVar21 = 0;
                        }
                        else {
                          bVar16 = (char)uVar23 * '\x04' & 4;
                          bVar16 = ((byte)(0xf << bVar16) &
                                   *(byte *)(*(long *)(lVar38 + 8) + (ulong)((uVar23 & 0xffff) >> 1)
                                            )) >> bVar16 & 0xf;
                          lVar38 = *(long *)(lVar38 + 0x10);
                          if (lVar38 == 0) goto LAB_0caf9f06;
LAB_0caf9ebf:
                          bVar21 = (char)uVar23 * '\x04' & 4;
                          bVar21 = ((byte)(0xf << bVar21) &
                                   *(byte *)(lVar38 + (ulong)((uVar23 & 0xffff) >> 1))) >> bVar21 &
                                   0xf;
                        }
                        bVar16 = bVar16 << 4 | bVar21;
                      }
                      bVar28 = (byte)*(undefined4 *)(lVar35 + 0xa4);
                      bVar21 = (byte)*(undefined4 *)(lVar42 + 0xa4);
                      if (bVar21 < bVar28) {
                        bVar21 = bVar28;
                      }
                      if (bVar21 < (bVar16 & 0xf)) {
                        bVar21 = bVar16;
                      }
                      if ((0xf < bVar16) || ((bVar21 & 0xf) != 0)) {
                        uVar39 = uStack_7bb0 >> 0x20;
                        uStack_7bb0 = CONCAT44((int)uVar39,uVar40 >> 4);
                        uVar39 = uStack_7ba8 >> 0x20;
                        uStack_7ba8 = CONCAT44((int)uVar39,uVar40);
                        bVar28 = *(byte *)(lVar42 + 0xa5);
                        if (*(byte *)(lVar42 + 0xa5) < *(byte *)(lVar35 + 0xa5)) {
                          bVar28 = *(byte *)(lVar35 + 0xa5);
                        }
                        uStack_7b30 = uVar19;
                        func_0x0ca981f0(&plStack_7850,&uStack_7b30,0,bVar16 >> 4,bVar28,bVar28);
                        if (*(long *)((long)alStack_200 + uVar33 + lVar43 + 0x200) != 0) {
                          uStack_7b30 = (int)uStack_7ba8 + iVar24;
                          func_0x0ca9f3f0(&plStack_7850,&uStack_7b30,0,bVar21 & 0xf,bVar28,bVar28,0,
                                          (uVar20 >> 2 & 0xf0 | (uint)uStack_7bb0 & 0xf00) + iVar24)
                          ;
                        }
                      }
                    }
                    iVar24 = iVar24 + 1;
                  } while (uVar11 != 0x1f);
                  iVar18 = iVar18 + 1;
                  iVar9 = iVar9 + 1;
                } while (iVar18 != 0x10);
                iVar26 = iVar26 + 1;
                iVar12 = iVar12 + 1;
              } while (iVar26 != 0x10);
              func_0x0ca987e0(&plStack_7850);
              func_0x0ca99f40(&plStack_7850);
              func_0x0ca9a8e0(&plStack_7850);
              func_0x0ca9c870(&plStack_7850);
              func_0x0ca9eee0(&plStack_7850);
              uVar33 = uStack_7b68;
              uVar39 = uStack_7bc0;
              if (!bVar4) {
                *(undefined1 *)(lStack_7bc8 + 0x1d) = 0;
              }
            }
            uVar39 = uVar39 + 1;
          } while (uVar39 != uVar33);
        }
        *(undefined1 *)(param_1 + 0x14e3) = 1;
        func_0x0c9d0f40(auStack_79c0);
      }
      func_0x0ca97aa0(*(undefined8 *)(*(long *)(lStack_7b88 + 0x30) + 0x1a0),&uStack_7b74,
                      iStack_7b94);
      lVar42 = lStack_7b50;
      if ((bStack_7b38 == 1) && (lVar35 = lStack_7b48, lStack_7b50 != 0)) {
        for (; lVar42 != lVar35; lVar35 = lVar35 + -0x20) {
          if (*(char *)(lVar35 + -8) == '\x01') {
            func_0x0412d6b0(*(undefined8 *)(lVar35 + -0x10));
          }
          plVar3 = *(long **)(lVar35 + -0x18);
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar38 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar38 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              func_0x0412c2d0(plVar3);
            }
          }
        }
        lStack_7b48 = lVar42;
        func_0x0412a280(lStack_7b50,lStack_7b40 - lStack_7b50);
      }
    }
  }
  if (plStack_7b80 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_7b80 + 1;
    lVar42 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*plStack_7b80 + 0x10))(plStack_7b80);
      func_0x0412c2d0(plStack_7b80);
    }
  }
  return uStack_7be0;
}


