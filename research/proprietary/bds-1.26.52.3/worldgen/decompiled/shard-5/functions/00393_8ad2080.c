/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8bd2080 (ELF vaddr 0x8ad2080)
 * Label: caller-of-callee
 * Body:  [[08bd2080, 08bd21ae] [08bd21b0, 08bd2212] [08bd2220, 08bd2a81] [08bd2a90, 08bd2c90] [08bd2ca0, 08bd2cd3] [08bd2ce0, 08bd2d44] [08bd2d50, 08bd2d69] [08bd2d70, 08bd2e14] [08bd2e20, 08bd2e99] [08bd2ea0, 08bd2edd] [08bd2ee0, 08bd2f04] [08bd2f10, 08bd301c] [08bd3020, 08bd328c] [08bd3290, 08bd3309] [08bd3310, 08bd34af] [08bd35c0, 08bd35cd]]
 * Ghidra: FUN_08bd2080
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08bd2080(long *param_1,long *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  undefined1 extraout_DL;
  ulong uVar18;
  long extraout_RDX;
  long extraout_RDX_00;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  long *plStack_148;
  int iStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  undefined4 uStack_12c;
  ulong uStack_120;
  undefined4 uStack_10c;
  long *plStack_108;
  long *plStack_100;
  char cStack_f8;
  long **pplStack_e8;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_60;
  undefined4 uStack_58;
  long *plStack_50;
  ulong *puStack_48;
  long lStack_40;
  ulong *puStack_38;
  
  if (((char *)param_1[5] != (char *)0x0) && (*(char *)param_1[5] == '\x01')) {
    if (param_1[3] != 0) {
      puVar6 = (undefined8 *)param_1[2];
      while (puVar6 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar6;
        plVar4 = (long *)puVar6[5];
        if ((plVar4 != (long *)0x0) && (*plVar4 != 0 && (int)plVar4[1] == *(int *)(puVar6 + 6))) {
          func_0x0d8569b0(*plVar4,puVar6[7],*(undefined4 *)(puVar6 + 8));
        }
        if ((*(byte *)(puVar6 + 2) & 1) != 0) {
          func_0x0412a280(puVar6[4],puVar6[2] & 0xfffffffffffffffe);
        }
        func_0x0412a280(puVar6,0x48);
        puVar6 = puVar2;
      }
      param_1[2] = 0;
      if (param_1[1] != 0) {
        func_0x0eee2dd0(*param_1,0,param_1[1] << 3);
      }
      param_1[3] = 0;
      if ((param_1[5] == 0) &&
         (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012452d7),
         cVar9 != '\0')) {
        _DAT_00000000 = 0xdeadc0de;
      }
    }
    if ((*(char *)param_1[5] == '\0') &&
       (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012452d7),
       cVar9 != '\0')) {
      _DAT_00000000 = 0xdeadc0de;
    }
    lStack_40 = param_1[7];
    puVar11 = *(ulong **)(lStack_40 + 0x380);
    puStack_48 = *(ulong **)(lStack_40 + 0x388);
    if (puVar11 != puStack_48) {
      plVar4 = param_1 + 2;
      plStack_50 = param_2;
      do {
        uVar13 = *puVar11;
        if (uVar13 != *(ulong *)(lStack_40 + 0x3b8)) {
          if ((param_1[5] == 0) &&
             (cVar9 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,&UNK_012452d7),
             cVar9 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          if ((*(char *)param_1[5] == '\0') &&
             (cVar9 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,&UNK_012452d7)
             , cVar9 != '\0')) {
            _DAT_00000000 = 0xdeadc0de;
          }
          plVar12 = (long *)*param_2;
          puStack_38 = puVar11;
          if (plVar12 == (long *)0x0) {
LAB_08bd246d:
            plStack_148 = _DAT_0f5ea7e0;
            iStack_140 = _DAT_0f5ea7e8;
            uStack_138 = (long *)CONCAT44(uRam000000000f5ea7f4,_DAT_0f5ea7f0);
            uStack_130 = uRam000000000f5ea7f8;
            uStack_12c = uRam000000000f5ea7fc;
            if ((_DAT_0f5ea7e0 != (long *)0x0) &&
               (*_DAT_0f5ea7e0 != 0 && (int)_DAT_0f5ea7e0[1] == _DAT_0f5ea7e8)) {
              func_0x0d8568b0(*_DAT_0f5ea7e0,uStack_138);
            }
            plVar12 = (long *)*param_2;
            if (plVar12 == (long *)0x0) {
LAB_08bd28d0:
              lVar21 = 0;
            }
            else {
LAB_08bd24c1:
              if ((int)plVar12[1] != (int)param_2[1]) goto LAB_08bd28d0;
              lVar21 = *plVar12;
            }
            plStack_60 = uStack_138;
            uStack_58 = CONCAT31(uStack_58._1_3_,(undefined1)uStack_130);
            uStack_10c = 0x42b6b579;
            plVar12 = (long *)(*(long *)(lVar21 + 0x70) +
                              (ulong)((int)((ulong)(*(long *)(lVar21 + 0x78) -
                                                   *(long *)(lVar21 + 0x70)) >> 3) - 1U & 0x42b6b579
                                     ) * 8);
            do {
              if (*plVar12 == -1) goto LAB_08bd294f;
              lVar14 = *plVar12 * 0x20;
              plVar12 = (long *)(*(long *)(lVar21 + 0x88) + lVar14);
            } while (*(int *)(*(long *)(lVar21 + 0x88) + 8 + lVar14) != 0x42b6b579);
            if (plVar12 == *(long **)(lVar21 + 0x90)) {
LAB_08bd294f:
              plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
              if (plVar12 == (long *)0x0) {
                func_0x0eec74c0(0x80,0);
              }
              plVar12[1] = 0;
              plVar12[2] = 0;
              *plVar12 = (long)&UNK_0f152ec0;
              if ((DAT_0f5ef110 == '\0') && (iVar10 = func_0x04108328(&DAT_0f5ef110), iVar10 != 0))
              {
                func_0x08d0a7e0();
                FUN_0410844d(&DAT_0f5ef110);
              }
              plStack_108 = plVar12 + 3;
              plVar12[8] = 0;
              plVar12[9] = 0;
              plVar12[6] = 0;
              plVar12[7] = 0;
              plVar12[4] = 0;
              plVar12[5] = 0;
              plVar12[10] = (long)&DAT_0f5ef0f8;
              *(undefined1 *)(plVar12 + 0xb) = 1;
              plVar12[0xc] = 0xffffffff;
              plVar12[3] = (long)&UNK_0f152f10;
              plVar12[0xd] = 0;
              plVar12[0xe] = 0;
              plVar12[0xf] = 0;
              plStack_100 = plVar12;
              func_0x065bf170(lVar21 + 0x70,&uStack_10c,&plStack_108);
              plStack_c8 = (long *)&UNK_065bf690;
              uStack_b8._0_4_ = 0x145ad657;
              uStack_c0 = (code *)0x0;
              uStack_b8._4_1_ = 3;
              plStack_d8 = (long *)(lVar21 + 0x38);
              (**(code **)(*plStack_108 + 0x28))(plStack_108,&plStack_d8);
              if (uStack_c0 != (code *)0x0) {
                (*uStack_c0)(&plStack_d8);
              }
              plVar20 = plStack_100;
              plVar12 = plStack_108;
              if (plStack_100 != (long *)0x0) {
                LOCK();
                plVar23 = plStack_100 + 1;
                lVar14 = *plVar23;
                *plVar23 = *plVar23 + -1;
                UNLOCK();
                if (lVar14 == 0) {
                  (**(code **)(*plStack_100 + 0x10))(plStack_100);
                  func_0x0412c2d0(plVar20);
                }
              }
            }
            else {
              plVar12 = (long *)plVar12[2];
            }
            func_0x0d8547a0(plVar12,uStack_138,0,0);
            puVar11 = (ulong *)func_0x08d0a860(plVar12,extraout_RDX_00 + -1);
            *puVar11 = uVar13;
            uVar22 = (((ulong)((int)uVar13 * 8 & 0xffffffc0) | 8) ^ uVar13 >> 0x20) *
                     -0x622015f714c7d297;
            uVar22 = (uVar22 >> 0x2f ^ uVar13 >> 0x20 ^ uVar22) * -0x622015f714c7d297;
            func_0x0d8526e0(lVar21 + 0x170,&UNK_019130f3,
                            (uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297,&plStack_60);
            func_0x0d8568b0(lVar21,plStack_60,uStack_58);
          }
          else {
            uVar22 = param_1[7];
            iVar10 = (int)param_2[1];
            iVar16 = (int)plVar12[1];
            lVar21 = *plVar12;
            if (lVar21 == 0 || iVar16 != iVar10) {
LAB_08bd245e:
              if (lVar21 == 0 || iVar16 != iVar10) goto LAB_08bd246d;
              plStack_100 = (long *)(lVar21 + 0x10);
              plStack_d8 = (long *)((ulong)plStack_d8 & 0xffffffffffff0000);
              plStack_d0 = (long *)&UNK_08d078f0;
              plStack_c8 = (long *)&UNK_08d07ad0;
              plStack_98 = (long *)0x0;
              uStack_88 = 0;
              uStack_80 = 0x100000020;
              plStack_78 = (long *)0x0;
              plStack_108 = (long *)&UNK_0f152d70;
              pplStack_e8 = &plStack_108;
              func_0x065bdd40(&plStack_108,&uStack_b8);
              if (pplStack_e8 == &plStack_108) {
                lVar14 = 0x20;
LAB_08bd257e:
                (**(code **)((long)*pplStack_e8 + lVar14))();
              }
              else {
                lVar14 = 0x28;
                if (pplStack_e8 != (long **)0x0) goto LAB_08bd257e;
              }
              uStack_138 = (long *)func_0x0d856c70(lVar21,&plStack_d8);
              plVar12 = plStack_78;
              plStack_78 = (long *)0x0;
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 8))();
              }
              if (plStack_98 == &uStack_b8) {
                (**(code **)(*plStack_98 + 0x20))();
joined_r0x08bd27d8:
                if ((int)uStack_138 != -1) goto LAB_08bd25ef;
LAB_08bd27b4:
                plStack_148 = *(long **)(lVar21 + 8);
                if (plStack_148 == (long *)0x0) goto LAB_08bd28a7;
LAB_08bd27c1:
                iStack_140 = (int)plStack_148[1];
              }
              else {
                if (plStack_98 == (long *)0x0) goto joined_r0x08bd27d8;
                (**(code **)(*plStack_98 + 0x28))();
                if ((int)uStack_138 == -1) goto LAB_08bd27b4;
LAB_08bd25ef:
                plStack_60 = (long *)CONCAT44(plStack_60._4_4_,0x794d082e);
                plVar12 = (long *)(*(long *)(lVar21 + 0x70) +
                                  (ulong)((int)((ulong)(*(long *)(lVar21 + 0x78) -
                                                       *(long *)(lVar21 + 0x70)) >> 3) - 1U &
                                         0x794d082e) * 8);
                do {
                  if (*plVar12 == -1) goto LAB_08bd2669;
                  lVar14 = *plVar12 * 0x20;
                  plVar12 = (long *)(*(long *)(lVar21 + 0x88) + lVar14);
                } while (*(int *)(*(long *)(lVar21 + 0x88) + 8 + lVar14) != 0x794d082e);
                if (plVar12 == *(long **)(lVar21 + 0x90)) {
LAB_08bd2669:
                  plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x80);
                  if (plVar12 == (long *)0x0) {
                    func_0x0eec74c0(0x80,0);
                  }
                  plVar12[1] = 0;
                  plVar12[2] = 0;
                  *plVar12 = (long)&UNK_0f152df0;
                  if ((DAT_0f5a1e00 == '\0') &&
                     (iVar10 = func_0x04108328(&DAT_0f5a1e00), iVar10 != 0)) {
                    func_0x06c7a7d0(0xf5a1de8);
                    FUN_0410844d(&DAT_0f5a1e00);
                  }
                  plStack_108 = plVar12 + 3;
                  plVar12[8] = 0;
                  plVar12[9] = 0;
                  plVar12[6] = 0;
                  plVar12[7] = 0;
                  plVar12[4] = 0;
                  plVar12[5] = 0;
                  plVar12[10] = 0xf5a1de8;
                  *(undefined1 *)(plVar12 + 0xb) = 1;
                  plVar12[0xc] = 0xffffffff;
                  plVar12[3] = (long)&UNK_0f152e40;
                  plVar12[0xd] = 0;
                  plVar12[0xe] = 0;
                  plVar12[0xf] = 0;
                  plStack_100 = plVar12;
                  func_0x065bf170(lVar21 + 0x70,&plStack_60,&plStack_108);
                  plStack_c8 = (long *)&UNK_065bf690;
                  uStack_b8._0_4_ = 0x145ad657;
                  uStack_c0 = (code *)0x0;
                  uStack_b8._4_1_ = 3;
                  plStack_d8 = (long *)(lVar21 + 0x38);
                  (**(code **)(*plStack_108 + 0x28))(plStack_108,&plStack_d8);
                  if (uStack_c0 != (code *)0x0) {
                    (*uStack_c0)(&plStack_d8);
                  }
                  plVar20 = plStack_100;
                  plVar12 = plStack_108;
                  if (plStack_100 != (long *)0x0) {
                    LOCK();
                    plVar23 = plStack_100 + 1;
                    lVar14 = *plVar23;
                    *plVar23 = *plVar23 + -1;
                    UNLOCK();
                    if (lVar14 == 0) {
                      (**(code **)(*plStack_100 + 0x10))(plStack_100);
                      func_0x0412c2d0(plVar20);
                    }
                  }
                }
                else {
                  plVar12 = (long *)plVar12[2];
                }
                func_0x0d8547a0(plVar12,uStack_138,0,0);
                plVar12 = (long *)func_0x08d09c10(plVar12,extraout_RDX + -1);
                *plVar12 = *plStack_50;
                *(int *)(plVar12 + 1) = (int)plStack_50[1];
                plVar12[2] = uVar13;
                plVar12[3] = uVar22;
                plStack_148 = *(long **)(lVar21 + 8);
                param_2 = plStack_50;
                uStack_120 = uVar22;
                if (plStack_148 != (long *)0x0) goto LAB_08bd27c1;
LAB_08bd28a7:
                iStack_140 = 0;
              }
              uStack_130 = CONCAT31(uStack_130._1_3_,extraout_DL);
              plVar12 = (long *)*param_2;
              if (plVar12 != (long *)0x0) goto LAB_08bd24c1;
              goto LAB_08bd28d0;
            }
            uVar18 = (((ulong)((int)uVar13 * 8 & 0xffffffc0) | 8) ^ uVar13 >> 0x20) *
                     -0x622015f714c7d297;
            uVar18 = (uVar18 >> 0x2f ^ uVar13 >> 0x20 ^ uVar18) * -0x622015f714c7d297;
            func_0x0d854110(&plStack_108,lVar21 + 0x170,&UNK_019130f3,
                            (uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297);
            pcVar5 = uStack_c0;
            plVar12 = plStack_100;
            uStack_138 = plStack_108;
            if (cStack_f8 != '\x01') {
              plVar12 = (long *)*param_2;
              if (plVar12 == (long *)0x0) goto LAB_08bd246d;
              iVar10 = (int)param_2[1];
              iVar16 = (int)plVar12[1];
              lVar21 = *plVar12;
              goto LAB_08bd245e;
            }
            uVar7 = plStack_100._0_1_;
            plStack_148 = (long *)*param_2;
            iStack_140 = (int)param_2[1];
            if (plStack_148 == (long *)0x0) {
              plStack_d8 = (long *)0x0;
              plStack_d0 = (long *)CONCAT44(plStack_d0._4_4_,iStack_140);
              plStack_c8 = plStack_108;
              uStack_c0 = (code *)CONCAT71(uStack_c0._1_7_,plStack_100._0_1_);
              pcVar8 = uStack_c0;
              plStack_148 = (long *)0x0;
              uStack_c0._4_4_ = SUB84(pcVar5,4);
              uStack_130 = (uint)uStack_c0;
              uStack_12c = uStack_c0._4_4_;
              uStack_c0 = pcVar8;
            }
            else {
              if (*plStack_148 != 0 && (int)plStack_148[1] == iStack_140) {
                func_0x0d8568b0(*plStack_148,plStack_108);
              }
              pcVar5 = uStack_c0;
              plStack_d0 = (long *)CONCAT44(plStack_d0._4_4_,iStack_140);
              plStack_c8 = uStack_138;
              uStack_c0 = (code *)CONCAT71(uStack_c0._1_7_,uVar7);
              pcVar8 = uStack_c0;
              uStack_b8._0_4_ = CONCAT31(uStack_b8._1_3_,1);
              uStack_c0._4_4_ = SUB84(pcVar5,4);
              uStack_130 = (uint)uStack_c0;
              uStack_12c = uStack_c0._4_4_;
              iVar10 = (int)plStack_148[1];
              lVar21 = *plStack_148;
              plStack_d8 = plStack_148;
              uStack_c0 = pcVar8;
              if (lVar21 != 0 && iVar10 == iStack_140) {
                func_0x0d8568b0(lVar21,uStack_138);
                iVar10 = (int)plStack_148[1];
                lVar21 = *plStack_148;
              }
              if (lVar21 != 0 && iVar10 == iStack_140) {
                func_0x0d8569b0(lVar21,uStack_138,(ulong)plVar12 & 0xff);
              }
            }
          }
          lVar21 = uVar13 + 0x199;
          bVar24 = (*(byte *)(uVar13 + 0x198) & 1) == 0;
          lVar14 = *(long *)(uVar13 + 0x1a8);
          if (bVar24) {
            lVar14 = lVar21;
          }
          uVar22 = (ulong)(*(byte *)(uVar13 + 0x198) >> 1);
          if (!bVar24) {
            uVar22 = *(ulong *)(uVar13 + 0x1a0);
          }
          uVar18 = func_0x04883620(&plStack_d8,lVar14,uVar22);
          uVar22 = param_1[1];
          if (uVar22 != 0) {
            uVar19 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
            uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
            uVar19 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar19 >> 0x38 < 2) {
              uStack_120 = uVar22 - 1 & uVar18;
            }
            else {
              uStack_120 = uVar18;
              if (uVar22 <= uVar18) {
                if ((uVar18 | uVar22) >> 0x20 == 0) {
                  uStack_120 = (uVar18 & 0xffffffff) % (uVar22 & 0xffffffff);
                }
                else {
                  uStack_120 = uVar18 % uVar22;
                }
              }
            }
            plVar12 = *(long **)(*param_1 + uStack_120 * 8);
            if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
              if ((*(byte *)(uVar13 + 0x198) & 1) == 0) {
                uVar17 = (ulong)(*(byte *)(uVar13 + 0x198) >> 1);
              }
              else {
                uVar17 = *(ulong *)(uVar13 + 0x1a0);
                lVar21 = *(long *)(uVar13 + 0x1a8);
              }
              if ((byte)(uVar19 >> 0x38) < 2) {
                do {
                  if (plVar12[1] == uVar18) {
                    bVar1 = *(byte *)(plVar12 + 2);
                    if ((bVar1 & 1) == 0) {
                      uVar19 = (ulong)(bVar1 >> 1);
                    }
                    else {
                      uVar19 = plVar12[3];
                    }
                    if (uVar19 == uVar17) {
                      if ((bVar1 & 1) == 0) {
                        lVar14 = (long)plVar12 + 0x11;
                      }
                      else {
                        lVar14 = plVar12[4];
                      }
                      iVar10 = func_0x0eee3000(lVar14,lVar21,uVar17);
                      if (iVar10 == 0) goto LAB_08bd3251;
                    }
                  }
                  else if ((plVar12[1] & uVar22 - 1) != uStack_120) break;
                  plVar12 = (long *)*plVar12;
                } while (plVar12 != (long *)0x0);
              }
              else {
                do {
                  uVar19 = plVar12[1];
                  if (uVar19 == uVar18) {
                    bVar1 = *(byte *)(plVar12 + 2);
                    if ((bVar1 & 1) == 0) {
                      uVar19 = (ulong)(bVar1 >> 1);
                    }
                    else {
                      uVar19 = plVar12[3];
                    }
                    if (uVar19 == uVar17) {
                      if ((bVar1 & 1) == 0) {
                        lVar14 = (long)plVar12 + 0x11;
                      }
                      else {
                        lVar14 = plVar12[4];
                      }
                      iVar10 = func_0x0eee3000(lVar14,lVar21,uVar17);
                      if (iVar10 == 0) goto LAB_08bd3251;
                    }
                  }
                  else {
                    if (uVar22 <= uVar19) {
                      if ((uVar19 | uVar22) >> 0x20 == 0) {
                        uVar19 = (uVar19 & 0xffffffff) % (uVar22 & 0xffffffff);
                      }
                      else {
                        uVar19 = uVar19 % uVar22;
                      }
                    }
                    if (uVar19 != uStack_120) break;
                  }
                  plVar12 = (long *)*plVar12;
                } while (plVar12 != (long *)0x0);
              }
            }
          }
          plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x48);
          if (plVar12 == (long *)0x0) {
            func_0x0eec74c0(0x48,0);
          }
          plStack_c8 = (long *)0x0;
          *plVar12 = 0;
          plVar12[1] = uVar18;
          plStack_d8 = plVar12;
          plStack_d0 = param_1;
          if ((*(byte *)(uVar13 + 0x198) & 1) == 0) {
            plVar12[4] = *(long *)(uVar13 + 0x1a8);
            lVar21 = *(long *)(uVar13 + 0x1a0);
            plVar12[2] = *(long *)(uVar13 + 0x198);
            plVar12[3] = lVar21;
          }
          else {
            func_0x0412e5e0(plVar12 + 2,*(undefined8 *)(uVar13 + 0x1a8),
                            *(undefined8 *)(uVar13 + 0x1a0));
          }
          plVar12[5] = (long)plStack_148;
          *(int *)(plVar12 + 6) = iStack_140;
          plVar12[7] = (long)uStack_138;
          plVar12[8] = CONCAT44(uStack_12c,uStack_130);
          plStack_148 = (long *)0x0;
          iStack_140 = 0;
          uStack_138 = (long *)0xffffffffffffff;
          uStack_130 = uStack_130 & 0xffffff00;
          plStack_c8 = (long *)CONCAT71(plStack_c8._1_7_,1);
          if ((long)uVar22 < 0) {
            fVar26 = (float)uVar22;
            fVar25 = *(float *)(param_1 + 4);
            if (uVar22 != 0) goto LAB_08bd2ef4;
LAB_08bd2f10:
            uVar13 = 1;
            if (2 < uVar22) {
              uVar13 = (ulong)((uVar22 & uVar22 - 1) != 0);
            }
            uVar13 = uVar22 * 2 | uVar13;
            fVar25 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar25);
            uVar22 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
            if (uVar22 < uVar13) {
              uVar22 = uVar13;
            }
            uVar13 = 2;
            if ((uVar22 == 1) || (uVar13 = uVar22, (uVar22 & uVar22 - 1) == 0)) {
              uVar22 = param_1[1];
              bVar24 = uVar13 < uVar22;
              if (uVar13 <= uVar22) goto LAB_08bd3084;
LAB_08bd2f8b:
              if (uVar13 >> 0x3d != 0) {
                uVar15 = FUN_04882eb0();
                uVar15 = func_0x04882e20(uVar15);
                func_0x065be050(&plStack_108);
                uVar15 = func_0x0eee2d70(uVar15);
                uVar15 = func_0x04882e20(uVar15);
                func_0x0d85dec0(&plStack_d8);
                func_0x0eee2d70(uVar15);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar21 = uVar13 * 8;
              lVar14 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar21);
              if (lVar14 == 0) {
                func_0x0eec74c0(lVar21,0);
              }
              lVar3 = *param_1;
              *param_1 = lVar14;
              if (lVar3 != 0) {
                func_0x0412a280(lVar3,param_1[1] << 3);
                lVar14 = *param_1;
              }
              param_1[1] = uVar13;
              func_0x0eee2dd0(lVar14,0,lVar21);
              plVar20 = (long *)param_1[2];
              if (plVar20 != (long *)0x0) {
                uVar19 = plVar20[1];
                uVar22 = uVar13 - 1;
                if ((uVar13 & uVar22) == 0) {
                  *(long **)(lVar14 + (uVar19 & uVar22) * 8) = plVar4;
                  uVar13 = uVar19 & uVar22;
                  while (plVar23 = plVar20, plVar20 = (long *)*plVar23, plVar20 != (long *)0x0) {
                    uVar19 = plVar20[1] & uVar22;
                    if (uVar19 != uVar13) {
                      if (*(long *)(lVar14 + uVar19 * 8) == 0) {
                        *(long **)(lVar14 + uVar19 * 8) = plVar23;
                        uVar13 = uVar19;
                      }
                      else {
                        *plVar23 = *plVar20;
                        *plVar20 = **(undefined8 **)(lVar14 + uVar19 * 8);
                        **(long **)(lVar14 + uVar19 * 8) = (long)plVar20;
                        plVar20 = plVar23;
                      }
                    }
                  }
                }
                else {
                  if (uVar13 <= uVar19) {
                    if ((uVar19 | uVar13) >> 0x20 == 0) {
                      uVar19 = (uVar19 & 0xffffffff) % (uVar13 & 0xffffffff);
                    }
                    else {
                      uVar19 = uVar19 % uVar13;
                    }
                  }
                  *(long **)(lVar14 + uVar19 * 8) = plVar4;
                  plVar23 = (long *)*plVar20;
                  while (plVar23 != (long *)0x0) {
                    uVar22 = plVar23[1];
                    if (uVar13 <= uVar22) {
                      if ((uVar22 | uVar13) >> 0x20 == 0) {
                        uVar22 = (uVar22 & 0xffffffff) % (uVar13 & 0xffffffff);
                      }
                      else {
                        uVar22 = uVar22 % uVar13;
                      }
                    }
                    if (uVar22 != uVar19) {
                      if (*(long *)(lVar14 + uVar22 * 8) == 0) {
                        *(long **)(lVar14 + uVar22 * 8) = plVar20;
                        uVar19 = uVar22;
                      }
                      else {
                        *plVar20 = *plVar23;
                        *plVar23 = **(long **)(lVar14 + uVar22 * 8);
                        **(undefined8 **)(lVar14 + uVar22 * 8) = plVar23;
                        plVar23 = plVar20;
                      }
                    }
                    plVar20 = plVar23;
                    plVar23 = (long *)*plVar20;
                  }
                }
              }
            }
            else {
              uVar13 = func_0x0412c3f0();
              uVar22 = param_1[1];
              bVar24 = uVar13 < uVar22;
              if (uVar22 < uVar13) goto LAB_08bd2f8b;
LAB_08bd3084:
              if (bVar24) {
                fVar25 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
                uVar19 = (long)(fVar25 - _DAT_01198778) & (long)fVar25 >> 0x3f | (long)fVar25;
                if ((uVar22 < 3) ||
                   (uVar17 = uVar22 - (uVar22 >> 1 & 0x5555555555555555),
                   uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333),
                   1 < (byte)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  uVar19 = func_0x0412c3f0(uVar19);
                  if (uVar19 < uVar13) {
                    uVar19 = uVar13;
                  }
                }
                else {
                  if (1 < uVar19) {
                    lVar21 = 0x3f;
                    if (uVar19 - 1 != 0) {
                      for (; uVar19 - 1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                      }
                    }
                    uVar19 = 1L << (-((byte)lVar21 ^ 0x3f) & 0x3f);
                  }
                  if (uVar19 < uVar13) {
                    uVar19 = uVar13;
                  }
                }
                uVar13 = uVar19;
                if (uVar13 < uVar22) {
                  if (uVar13 != 0) goto LAB_08bd2f8b;
                  lVar21 = *param_1;
                  *param_1 = 0;
                  if (lVar21 != 0) {
                    func_0x0412a280(lVar21,param_1[1] << 3);
                  }
                  param_1[1] = 0;
                }
              }
            }
            uVar22 = param_1[1];
            if ((uVar22 & uVar22 - 1) == 0) {
              uVar13 = uVar18 & uVar22 - 1;
            }
            else {
              uVar13 = uVar18;
              if (uVar22 <= uVar18) {
                if ((uVar18 | uVar22) >> 0x20 == 0) {
                  uVar13 = (uVar18 & 0xffffffff) % (uVar22 & 0xffffffff);
                }
                else {
                  uVar13 = uVar18 % uVar22;
                }
              }
            }
          }
          else {
            fVar26 = (float)(long)uVar22;
            fVar25 = *(float *)(param_1 + 4);
            if (uVar22 == 0) goto LAB_08bd2f10;
LAB_08bd2ef4:
            uVar13 = uStack_120;
            if (fVar26 * fVar25 < (float)(param_1[3] + 1)) goto LAB_08bd2f10;
          }
          lVar21 = *param_1;
          plVar20 = *(long **)(lVar21 + uVar13 * 8);
          if (plVar20 == (long *)0x0) {
            *plVar12 = *plVar4;
            *plVar4 = (long)plVar12;
            *(long **)(lVar21 + uVar13 * 8) = plVar4;
            if (*plVar12 != 0) {
              uVar13 = *(ulong *)(*plVar12 + 8);
              if ((uVar22 & uVar22 - 1) == 0) {
                *(long **)(lVar21 + (uVar13 & uVar22 - 1) * 8) = plVar12;
              }
              else {
                if (uVar22 <= uVar13) {
                  if ((uVar13 | uVar22) >> 0x20 == 0) {
                    *(long **)(lVar21 + ((uVar13 & 0xffffffff) % (uVar22 & 0xffffffff)) * 8) =
                         plVar12;
                    goto LAB_08bd3249;
                  }
                  uVar13 = uVar13 % uVar22;
                }
                *(long **)(lVar21 + uVar13 * 8) = plVar12;
              }
            }
          }
          else {
            *plVar12 = *plVar20;
            *plVar20 = (long)plVar12;
          }
LAB_08bd3249:
          param_1[3] = param_1[3] + 1;
LAB_08bd3251:
          param_2 = plStack_50;
          puVar11 = puStack_38;
          if ((plStack_148 != (long *)0x0) &&
             (*plStack_148 != 0 && (int)plStack_148[1] == iStack_140)) {
            func_0x0d8569b0(*plStack_148,uStack_138,uStack_130);
            param_2 = plStack_50;
            puVar11 = puStack_38;
          }
        }
        puVar11 = puVar11 + 1;
      } while (puVar11 != puStack_48);
    }
    plVar4 = (long *)param_1[6];
    param_1[5] = 0;
    param_1[6] = 0;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar12 = plVar4 + 1;
      lVar21 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar21 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        func_0x0412c2d0(plVar4);
      }
    }
    param_1[7] = 0;
  }
  return;
}


