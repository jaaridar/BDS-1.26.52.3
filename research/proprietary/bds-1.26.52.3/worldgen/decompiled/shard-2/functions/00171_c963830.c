/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xca63830 (ELF vaddr 0xc963830)
 * Label: callee-of:0xc961580
 * Body:  [[0ca63830, 0ca6390e] [0ca63910, 0ca639d0] [0ca639e0, 0ca6444e] [0ca64450, 0ca64482] [0ca64490, 0ca648e5] [0ca649af, 0ca649d2] [0ca649d7, 0ca649ef]]
 * Ghidra: FUN_0ca63830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0ca63830(long *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *unaff_RBP;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  uint uStack_104;
  long *plStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  uint uStack_d8;
  char cStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  uint uStack_b8;
  char cStack_b0;
  long lStack_a8;
  ulong uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined4 uStack_60;
  ulong uStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined4 uStack_38;
  
  cVar5 = (**(code **)(*(long *)param_1[0x14] + 0x9f0))();
  if (cVar5 == '\0') {
    plVar8 = (long *)param_1[0x60];
    plStack_88 = &lStack_80;
    plVar7 = param_1 + 0x61;
    lStack_80 = param_1[0x61];
    lStack_78 = param_1[0x62];
    lVar22 = lStack_80;
    if (lStack_78 != 0) {
      *(long **)(lStack_80 + 0x10) = plStack_88;
      param_1[0x60] = (long)plVar7;
      *plVar7 = 0;
      param_1[0x62] = 0;
      lVar22 = 0;
      plStack_88 = plVar8;
    }
    func_0x0ca7c290(lVar22);
    param_1[0x60] = (long)plVar7;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    (**(code **)(*(long *)param_1[0x14] + 0x568))();
    if (plStack_88 != &lStack_80) {
      plStack_50 = param_1 + 0x5b;
      plVar7 = plStack_88;
      do {
        plVar8 = (long *)(**(code **)(*param_1 + 0x60))(param_1,plVar7[4],0);
        if (plVar8 == (long *)0x0) goto LAB_0ca63e90;
        lStack_a8 = floorf();
        fVar24 = (float)floorf();
        lStack_f0 = CONCAT44((int)(float)lStack_a8 >> 4,(int)fVar24 >> 4);
        lVar22 = plVar8[2];
        uVar21 = *(uint *)(plVar8 + 3);
        plVar9 = (long *)(*(long *)(lVar22 + 0x38) +
                         (ulong)((int)((ulong)(*(long *)(lVar22 + 0x40) - *(long *)(lVar22 + 0x38))
                                      >> 3) - 1U & 0x7ceeac38) * 8);
        do {
          if (*plVar9 == -1) {
            plVar12 = *(long **)(lVar22 + 0x58);
            plVar9 = plVar12;
            goto LAB_0ca639e7;
          }
          lVar16 = *plVar9 * 0x20;
          plVar9 = (long *)(*(long *)(lVar22 + 0x50) + lVar16);
        } while (*(int *)(*(long *)(lVar22 + 0x50) + 8 + lVar16) != 0x7ceeac38);
        plVar12 = *(long **)(lVar22 + 0x58);
LAB_0ca639e7:
        if ((plVar9 == plVar12) || (lVar22 = plVar9[2], lVar22 == 0)) {
LAB_0ca648c8:
          FUN_04890760();
LAB_0ca648cd:
          func_0x04882eb0();
LAB_0ca648d2:
          func_0x0ca75570();
LAB_0ca648d7:
          func_0x05344850();
LAB_0ca648dc:
          uVar11 = func_0x04882eb0();
          (**(code **)(*unaff_RBP + 8))(unaff_RBP);
          func_0x0ca7c290(lStack_80);
          uVar11 = func_0x0eee2d70(uVar11);
          func_0x0ca7c290(lStack_80);
          func_0x0eee2d70(uVar11);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = (ulong)((uVar21 & 0x3ffff) >> 0xb);
        if (((ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3) <= uVar13) ||
           (((lVar16 = *(long *)(*(long *)(lVar22 + 8) + uVar13 * 8), lVar16 == 0 ||
             (uVar15 = *(uint *)(lVar16 + (ulong)(uVar21 & 0x7ff) * 4),
             0x3fffe < (uVar21 & 0xfffc0000 ^ uVar15))) ||
            (lVar22 = *(long *)(*(long *)(lVar22 + 0x50) + (ulong)(uVar15 >> 4 & 0x3ff8)),
            lVar22 == 0)))) goto LAB_0ca648c8;
        lStack_90 = *(long *)(lVar22 + (ulong)(uVar15 & 0x7f) * 8);
        if (lStack_f0 != lStack_90) {
          plVar9 = (long *)(**(code **)(*param_1 + 0x68))(param_1);
          lStack_a8 = (**(code **)(*plVar9 + 0x148))(plVar9,&lStack_90);
          if (lStack_a8 == 0) goto LAB_0ca63e90;
          plStack_f8 = (long *)(**(code **)(*plVar9 + 0x148))(plVar9,&lStack_f0);
          if (plStack_f8 != (long *)0x0) {
            unaff_RBP = (long *)param_1[0xd];
            if (unaff_RBP < (long *)param_1[0xe]) {
              *unaff_RBP = lStack_90;
              unaff_RBP[1] = lStack_f0;
              plVar9 = unaff_RBP + 2;
LAB_0ca63c72:
              param_1[0xd] = (long)plVar9;
              plVar9 = *(long **)plVar8[1];
              plVar12 = (long *)((undefined8 *)plVar8[1])[1];
              if (plVar12 == (long *)0x0) {
                uVar21 = *(uint *)(plVar8 + 3);
              }
              else {
                LOCK();
                plVar12[2] = plVar12[2] + 1;
                UNLOCK();
                LOCK();
                plVar12[2] = plVar12[2] + 1;
                UNLOCK();
                func_0x0412c2d0(plVar12);
                uVar21 = *(uint *)(plVar8 + 3);
                LOCK();
                plVar12[2] = plVar12[2] + 1;
                UNLOCK();
                func_0x0412c2d0(plVar12);
                LOCK();
                plVar12[2] = plVar12[2] + 1;
                UNLOCK();
              }
              unaff_RBP = (long *)(ulong)uVar21;
              plStack_e8 = plVar9;
              plStack_e0 = plVar12;
              uStack_d8 = uVar21;
              func_0x0cae0110(lStack_a8,&plStack_e8);
              if (plStack_e0 != (long *)0x0) {
                func_0x0412c2d0();
              }
              if (plVar12 != (long *)0x0) {
                LOCK();
                plVar12[2] = plVar12[2] + 1;
                UNLOCK();
              }
              plStack_c8 = plVar9;
              plStack_c0 = plVar12;
              uStack_b8 = uVar21;
              func_0x0cadfa10(plStack_f8,&plStack_c8);
              if (plStack_c0 != (long *)0x0) {
                func_0x0412c2d0();
              }
              lVar22 = plVar8[2];
              uVar21 = *(uint *)(plVar8 + 3);
              plVar9 = (long *)(*(long *)(lVar22 + 0x38) +
                               (ulong)((int)((ulong)(*(long *)(lVar22 + 0x40) -
                                                    *(long *)(lVar22 + 0x38)) >> 3) - 1U &
                                      0x232c54ac) * 8);
              do {
                if (*plVar9 == -1) goto LAB_0ca63e76;
                lVar16 = *plVar9 * 0x20;
                plVar9 = (long *)(*(long *)(lVar22 + 0x50) + lVar16);
              } while (*(int *)(*(long *)(lVar22 + 0x50) + 8 + lVar16) != 0x232c54ac);
              if ((plVar9 != *(long **)(lVar22 + 0x58)) && (lVar22 = plVar9[2], lVar22 != 0)) {
                uVar13 = (ulong)((uVar21 & 0x3ffff) >> 0xb);
                if (((uVar13 < (ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3)) &&
                    ((lVar16 = *(long *)(*(long *)(lVar22 + 8) + uVar13 * 8), lVar16 != 0 &&
                     (uVar15 = *(uint *)(lVar16 + (ulong)(uVar21 & 0x7ff) * 4),
                     (uVar21 & 0xfffc0000 ^ uVar15) < 0x3ffff)))) &&
                   ((lVar22 = *(long *)(*(long *)(lVar22 + 0x50) + (ulong)(uVar15 >> 4 & 0x3ff8)),
                    lVar22 != 0 &&
                    (lVar22 = *(long *)(lVar22 + (ulong)(uVar15 & 0x7f) * 8), lVar22 != 0)))) {
                  plVar10 = (long *)func_0x0412c300(plVar8[0x39]);
                  plVar9 = (long *)plVar8[0x38];
                  LOCK();
                  plVar8 = plVar10 + 1;
                  lVar16 = *plVar8;
                  *plVar8 = *plVar8 + -1;
                  UNLOCK();
                  if (lVar16 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                    func_0x0412c2d0(plVar10);
                  }
                  uVar11 = (**(code **)(*plVar9 + 0x68))(plVar9);
                  lVar16 = lStack_f0;
                  uVar6 = (**(code **)(*param_1 + 0x18))();
                  func_0x0c5e6f00(lVar22,uVar11,lVar16,uVar6);
                }
              }
LAB_0ca63e76:
              if (plVar12 != (long *)0x0) {
                func_0x0412c2d0(plVar12);
              }
              goto LAB_0ca63e90;
            }
            plVar9 = (long *)param_1[0xc];
            lVar22 = (long)unaff_RBP - (long)plVar9;
            uVar13 = (lVar22 >> 4) + 1;
            if (uVar13 < 0x1000000000000000) {
              uStack_98 = param_1[0xe] - (long)plVar9;
              uVar19 = (long)uStack_98 >> 3;
              if ((ulong)((long)uStack_98 >> 3) <= uVar13) {
                uVar19 = uVar13;
              }
              if (0x7fffffffffffffef < uStack_98) {
                uVar19 = 0xfffffffffffffff;
              }
              plStack_100 = plVar9;
              if (uVar19 < 0x1000000000000000) {
                lVar20 = uVar19 * 0x10;
                lVar16 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar20);
                if (lVar16 == 0) {
                  FUN_0eec74c0(lVar20,0);
                }
                *(long *)(lVar16 + lVar22) = lStack_90;
                *(long *)(lVar16 + 8 + lVar22) = lStack_f0;
                plVar10 = (long *)(lVar16 + lVar22 + (lVar22 >> 4) * -0x10);
                plVar9 = plVar10;
                for (plVar12 = plStack_100; plVar12 != unaff_RBP; plVar12 = plVar12 + 2) {
                  lVar17 = plVar12[1];
                  *plVar9 = *plVar12;
                  plVar9[1] = lVar17;
                  plVar9 = plVar9 + 2;
                }
                plVar9 = (long *)(lVar16 + lVar22 + 0x10);
                param_1[0xc] = (long)plVar10;
                param_1[0xd] = (long)plVar9;
                param_1[0xe] = lVar20 + lVar16;
                if (plStack_100 != (long *)0x0) {
                  func_0x0412a280(plStack_100,uStack_98);
                }
                goto LAB_0ca63c72;
              }
              goto LAB_0ca648cd;
            }
            goto LAB_0ca648d2;
          }
          lVar22 = plVar8[2];
          uVar21 = *(uint *)(plVar8 + 3);
          plVar12 = (long *)(*(long *)(lVar22 + 0x38) +
                            (ulong)((int)((ulong)(*(long *)(lVar22 + 0x40) -
                                                 *(long *)(lVar22 + 0x38)) >> 3) - 1U & 0x7ee81405)
                            * 8);
          do {
            if (*plVar12 == -1) goto LAB_0ca63f19;
            lVar16 = *plVar12 * 0x20;
            plVar12 = (long *)(*(long *)(lVar22 + 0x50) + lVar16);
          } while (*(int *)(*(long *)(lVar22 + 0x50) + 8 + lVar16) != 0x7ee81405);
          if ((plVar12 != *(long **)(lVar22 + 0x58)) && (lVar22 = plVar12[2], lVar22 != 0)) {
            uVar13 = (ulong)((uVar21 & 0x3ffff) >> 0xb);
            if ((uVar13 < (ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3)) &&
               ((lVar22 = *(long *)(*(long *)(lVar22 + 8) + uVar13 * 8), lVar22 != 0 &&
                ((uVar21 & 0xfffc0000 ^ *(uint *)(lVar22 + (ulong)(uVar21 & 0x7ff) * 4)) < 0x3ffff))
               )) goto LAB_0ca63e90;
          }
LAB_0ca63f19:
          unaff_RBP = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
          if (unaff_RBP == (long *)0x0) {
            FUN_0eec74c0(0x20,0);
          }
          *unaff_RBP = (long)&UNK_0f47e0b0;
          *(undefined1 (*) [16])(unaff_RBP + 2) = (undefined1  [16])0x0;
          unaff_RBP[1] = (long)(unaff_RBP + 2);
          func_0x0b3ec840(plVar8,unaff_RBP);
          func_0x0b406c40(plVar8,param_1);
          plStack_f8 = (long *)CONCAT44(plStack_f8._4_4_,*(undefined4 *)(plVar8[0x41] + 8));
          fVar24 = (float)floorf();
          fVar25 = (float)floorf();
          iVar18 = (int)fVar24 >> 4;
          plStack_100 = (long *)CONCAT44(plStack_100._4_4_,iVar18);
          lVar22 = plVar8[2];
          uVar21 = *(uint *)(plVar8 + 3);
          lVar16 = *(long *)(lVar22 + 0x38);
          iVar4 = (int)((ulong)(*(long *)(lVar22 + 0x40) - lVar16) >> 3);
          uVar15 = iVar4 - 1;
          plVar12 = (long *)(lVar16 + (ulong)(uVar15 & 0x88f8eb8f) * 8);
          do {
            plStack_f8 = plVar9;
            if (*plVar12 == -1) {
              plVar9 = *(long **)(lVar22 + 0x58);
              goto LAB_0ca640fe;
            }
            lVar20 = *plVar12 * 0x20;
            plVar12 = (long *)(*(long *)(lVar22 + 0x50) + lVar20);
          } while (*(int *)(*(long *)(lVar22 + 0x50) + 8 + lVar20) != -0x77071471);
          plVar9 = *(long **)(lVar22 + 0x58);
          if ((plVar12 == plVar9) || (lVar20 = plVar12[2], lVar20 == 0)) {
LAB_0ca640fe:
            *(undefined1 *)((long)plVar8 + 0x253) = 1;
            plVar12 = (long *)(lVar16 + (ulong)(uVar15 & 0x9739cd15) * 8);
            lVar22 = *(long *)(lVar22 + 0x50);
            do {
              if (*plVar12 == -1) goto LAB_0ca641c0;
              lVar20 = *plVar12 * 0x20;
              plVar12 = (long *)(lVar22 + lVar20);
            } while (*(int *)(lVar22 + 8 + lVar20) != -0x68c632eb);
            if ((plVar12 == plVar9) || (lVar20 = plVar12[2], lVar20 == 0)) {
LAB_0ca641c0:
              lVar20 = 0;
            }
            else {
              uVar13 = (ulong)((uVar21 & 0x3ffff) >> 0xb);
              if (((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar13) ||
                 ((lVar17 = *(long *)(*(long *)(lVar20 + 8) + uVar13 * 8), lVar17 == 0 ||
                  (uVar1 = *(uint *)(lVar17 + (ulong)(uVar21 & 0x7ff) * 4),
                  0x3fffe < (uVar21 & 0xfffc0000 ^ uVar1))))) goto LAB_0ca641c0;
              lVar20 = (ulong)(uVar1 & 0x7f) * 0x38 +
                       *(long *)(*(long *)(lVar20 + 0x50) + (ulong)((uVar1 & 0x3ff80) >> 4));
            }
            plVar12 = (long *)(lVar16 + (ulong)(iVar4 - 1U & 0x7ceeac38) * 8);
            do {
              lVar17 = *plVar12;
              plVar12 = plVar9;
              if (lVar17 == -1) break;
              lVar17 = lVar17 * 0x20;
              plVar12 = (long *)(lVar22 + lVar17);
            } while (*(int *)(lVar22 + 8 + lVar17) != 0x7ceeac38);
            if ((plVar12 != plVar9) && (lVar17 = plVar12[2], lVar17 != 0)) {
              uVar13 = (ulong)((uVar21 & 0x3ffff) >> 0xb);
              if ((uVar13 < (ulong)(*(long *)(lVar17 + 0x10) - *(long *)(lVar17 + 8) >> 3)) &&
                 (lVar2 = *(long *)(*(long *)(lVar17 + 8) + uVar13 * 8), lVar2 != 0)) {
                uVar1 = *(uint *)(lVar2 + (ulong)(uVar21 & 0x7ff) * 4);
                if (((uVar1 ^ uVar21 & 0xfffc0000) < 0x3ffff) &&
                   (lVar17 = *(long *)(*(long *)(lVar17 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)),
                   lVar17 != 0)) {
                  plVar12 = (long *)(lVar16 + (ulong)(uVar15 & 0xaf993816) * 8);
                  do {
                    lVar16 = *plVar12;
                    plVar12 = plVar9;
                    if (lVar16 == -1) break;
                    lVar16 = lVar16 * 0x20;
                    plVar12 = (long *)(lVar22 + lVar16);
                  } while (*(int *)(lVar22 + 8 + lVar16) != -0x5066c7ea);
                  if (((((plVar12 != plVar9) && (lVar22 = plVar12[2], lVar22 != 0)) &&
                       (uVar13 < (ulong)(*(long *)(lVar22 + 0x10) - *(long *)(lVar22 + 8) >> 3))) &&
                      ((lVar16 = *(long *)(*(long *)(lVar22 + 8) + uVar13 * 8), lVar16 != 0 &&
                       (uVar15 = *(uint *)(lVar16 + (ulong)(uVar21 & 0x7ff) * 4),
                       (uVar21 & 0xfffc0000 ^ uVar15) < 0x3ffff)))) &&
                     (lVar22 = *(long *)(*(long *)(lVar22 + 0x50) + (ulong)(uVar15 >> 4 & 0x3ff8)),
                     lVar22 != 0)) {
                    if (unaff_RBP[3] == 0) {
                      (**(code **)(*unaff_RBP + 8))(unaff_RBP);
                      cVar5 = *(char *)((long)plVar8 + 0x251);
                    }
                    else {
                      plStack_e8 = unaff_RBP;
                      func_0x0ca666e0(param_1,*(undefined8 *)(lVar17 + (ulong)(uVar1 & 0x7f) * 8),
                                      CONCAT44((int)fVar25 >> 4,iVar18),
                                      *(undefined4 *)(lVar22 + (ulong)(uVar15 & 0x7f) * 4),lVar20,
                                      &plStack_e8);
                      if (plStack_e8 != (long *)0x0) {
                        (**(code **)(*plStack_e8 + 8))();
                      }
                      *(undefined1 *)(param_1 + 3) = 1;
                      cVar5 = *(char *)((long)plVar8 + 0x251);
                    }
                    goto joined_r0x0ca643a9;
                  }
                }
              }
            }
            goto LAB_0ca648c8;
          }
          uVar13 = (ulong)((uVar21 & 0x3ffff) >> 0xb);
          if (((ulong)(*(long *)(lVar20 + 0x10) - *(long *)(lVar20 + 8) >> 3) <= uVar13) ||
             (((lVar17 = *(long *)(*(long *)(lVar20 + 8) + uVar13 * 8), lVar17 == 0 ||
               (uVar1 = *(uint *)(lVar17 + (ulong)(uVar21 & 0x7ff) * 4),
               0x3fffe < (uVar21 & 0xfffc0000 ^ uVar1))) ||
              (*(long *)(*(long *)(lVar20 + 0x50) + (ulong)(uVar1 >> 4 & 0x3ff8)) == 0))))
          goto LAB_0ca640fe;
          *(undefined1 *)((long)plVar8 + 0x252) = 1;
          if (unaff_RBP[3] == 0) {
            (**(code **)(*unaff_RBP + 8))(unaff_RBP);
LAB_0ca6469a:
            plVar8 = (long *)(**(code **)(*plStack_f8 + 0x1a8))();
            (**(code **)(*plVar8 + 0x20))(&plStack_e8,plVar8,&lStack_f0);
            plVar8 = plStack_e0;
            if ((plStack_e8 == (long *)0x0) || (*(byte *)(plStack_e8 + 0x17) < 2)) {
              plVar9 = (long *)0x0;
              plVar12 = (long *)0x0;
joined_r0x0ca64702:
              if (plStack_e0 != (long *)0x0) {
                LOCK();
                plVar10 = plStack_e0 + 1;
                lVar22 = *plVar10;
                *plVar10 = *plVar10 + -1;
                UNLOCK();
                if (lVar22 == 0) {
                  (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
                  func_0x0412c2d0(plVar8);
                }
              }
            }
            else {
              plVar9 = plStack_e8;
              if (plStack_e0 != (long *)0x0) {
                LOCK();
                plStack_e0[1] = plStack_e0[1] + 1;
                UNLOCK();
                plVar12 = plStack_e0;
                goto joined_r0x0ca64702;
              }
              plVar12 = (long *)0x0;
            }
            if ((plVar9 != (long *)0x0) && (6 < *(byte *)(plVar9 + 0x17))) {
              *(undefined1 *)((long)plVar9 + 0x152f) = 1;
            }
            if (plVar12 != (long *)0x0) {
              LOCK();
              plVar8 = plVar12 + 1;
              lVar22 = *plVar8;
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (lVar22 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                func_0x0412c2d0(plVar12);
              }
            }
            goto LAB_0ca63e90;
          }
          plStack_e8 = (long *)CONCAT44((int)fVar25 >> 4,iVar18);
          lVar22 = func_0x0ca7cf10(plStack_50,&plStack_e8);
          puVar14 = *(undefined8 **)(lVar22 + 0x20);
          if (puVar14 < *(undefined8 **)(lVar22 + 0x28)) {
            *puVar14 = unaff_RBP;
            puVar14 = puVar14 + 1;
LAB_0ca64865:
            *(undefined8 **)(lVar22 + 0x20) = puVar14;
            *(undefined1 *)(param_1 + 3) = 1;
            cVar5 = *(char *)((long)plVar8 + 0x251);
joined_r0x0ca643a9:
            if (cVar5 == '\0') {
              (**(code **)(*plVar8 + 0x60))();
            }
            unaff_RBP = *(long **)(plVar8[1] + 8);
            if (unaff_RBP == (long *)0x0) {
              uVar21 = *(uint *)(plVar8 + 3);
            }
            else {
              LOCK();
              unaff_RBP[2] = unaff_RBP[2] + 1;
              UNLOCK();
              LOCK();
              unaff_RBP[2] = unaff_RBP[2] + 1;
              UNLOCK();
              func_0x0412c2d0(unaff_RBP);
              uVar21 = *(uint *)(plVar8 + 3);
              LOCK();
              unaff_RBP[2] = unaff_RBP[2] + 1;
              UNLOCK();
            }
            lVar22 = *(long *)(lStack_a8 + 0x1398);
            lVar16 = *(long *)(lStack_a8 + 0x13a0);
            if (lVar22 != lVar16) {
              if ((~uVar21 & 0x3ffff) == 0) {
                if (unaff_RBP == (long *)0x0) {
                  do {
                    lVar20 = lVar22;
                    if ((~*(uint *)(lVar22 + 0x10) & 0x3ffff) == 0) break;
                    lVar22 = lVar22 + 0x18;
                    lVar20 = lVar16;
                  } while (lVar22 != lVar16);
                }
                else {
                  do {
                    LOCK();
                    unaff_RBP[2] = unaff_RBP[2] + 1;
                    UNLOCK();
                    uVar21 = *(uint *)(lVar22 + 0x10);
                    func_0x0412c2d0(unaff_RBP);
                    lVar20 = lVar22;
                    if ((~uVar21 & 0x3ffff) == 0) break;
                    lVar22 = lVar22 + 0x18;
                    lVar20 = lVar16;
                  } while (lVar22 != lVar16);
                }
              }
              else {
                do {
                  if (unaff_RBP != (long *)0x0) {
                    LOCK();
                    unaff_RBP[2] = unaff_RBP[2] + 1;
                    UNLOCK();
                  }
                  if (*(uint *)(lVar22 + 0x10) == uVar21 &&
                      (~*(uint *)(lVar22 + 0x10) & 0x3ffff) != 0) {
                    bVar23 = unaff_RBP == *(long **)(lVar22 + 8);
                  }
                  else {
                    bVar23 = false;
                  }
                  if (unaff_RBP != (long *)0x0) {
                    func_0x0412c2d0(unaff_RBP);
                  }
                  lVar20 = lVar22;
                } while ((!bVar23) && (lVar22 = lVar22 + 0x18, lVar20 = lVar16, lVar22 != lVar16));
              }
              lVar16 = *(long *)(lStack_a8 + 0x13a0);
              lVar22 = lVar20;
            }
            if (unaff_RBP != (long *)0x0) {
              func_0x0412c2d0(unaff_RBP);
              func_0x0412c2d0(unaff_RBP);
            }
            if (lVar22 != lVar16) {
              uVar11 = *(undefined8 *)plVar8[1];
              unaff_RBP = (long *)((undefined8 *)plVar8[1])[1];
              if (unaff_RBP == (long *)0x0) {
                uVar6 = (undefined4)plVar8[3];
                plStack_68 = (long *)0x0;
              }
              else {
                LOCK();
                unaff_RBP[2] = unaff_RBP[2] + 1;
                UNLOCK();
                LOCK();
                unaff_RBP[2] = unaff_RBP[2] + 1;
                UNLOCK();
                func_0x0412c2d0(unaff_RBP);
                uVar6 = (undefined4)plVar8[3];
                LOCK();
                unaff_RBP[2] = unaff_RBP[2] + 1;
                UNLOCK();
                func_0x0412c2d0(unaff_RBP);
                LOCK();
                unaff_RBP[2] = unaff_RBP[2] + 1;
                UNLOCK();
                plStack_68 = unaff_RBP;
              }
              uStack_70 = uVar11;
              uStack_60 = uVar6;
              func_0x0cae0110(lStack_a8,&uStack_70);
              if (plStack_68 != (long *)0x0) {
                func_0x0412c2d0();
              }
              plVar8 = (long *)param_1[0x14];
              if (unaff_RBP != (long *)0x0) {
                LOCK();
                unaff_RBP[2] = unaff_RBP[2] + 1;
                UNLOCK();
              }
              uStack_48 = uVar11;
              plStack_40 = unaff_RBP;
              uStack_38 = uVar6;
              (**(code **)(*plVar8 + 0x788))(&plStack_e8,plVar8,&uStack_48);
              if (plStack_40 != (long *)0x0) {
                func_0x0412c2d0();
              }
              plStack_c8 = (long *)((ulong)plStack_c8 & 0xffffffffffffff00);
              cStack_b0 = cStack_d0 == '\x01';
              if ((bool)cStack_b0) {
                plStack_c8 = plStack_e8;
                plStack_c0 = plStack_e0;
                uStack_b8 = uStack_d8;
                cStack_d0 = '\0';
              }
              (**(code **)(*plVar8 + 0x778))(plVar8,&plStack_c8);
              if (cStack_b0 == '\x01') {
                cStack_b0 = '\0';
                uStack_104 = uStack_b8;
                func_0x0d87c640(plStack_c8 + 5,&uStack_104);
              }
              if (cStack_d0 == '\x01') {
                cStack_d0 = '\0';
                uStack_104 = uStack_d8;
                func_0x0d87c640(plStack_e8 + 5,&uStack_104);
              }
              if (unaff_RBP != (long *)0x0) {
                func_0x0412c2d0(unaff_RBP);
              }
            }
            goto LAB_0ca6469a;
          }
          plVar9 = *(long **)(lVar22 + 0x18);
          lVar16 = (long)puVar14 - (long)plVar9;
          uVar13 = (lVar16 >> 3) + 1;
          if (uVar13 >> 0x3d == 0) {
            uStack_58 = (long)*(undefined8 **)(lVar22 + 0x28) - (long)plVar9;
            uVar19 = (long)uStack_58 >> 2;
            if ((ulong)((long)uStack_58 >> 2) <= uVar13) {
              uVar19 = uVar13;
            }
            if (0x7ffffffffffffff7 < uStack_58) {
              uVar19 = 0x1fffffffffffffff;
            }
            plStack_100 = plVar9;
            if (0x1fffffffffffffff < uVar19) goto LAB_0ca648dc;
            lVar20 = func_0x0ee32660(uVar19 * 8);
            plVar9 = plStack_100;
            uStack_98 = lVar20 + uVar19 * 8;
            *(long **)(lVar20 + lVar16) = unaff_RBP;
            puVar14 = (undefined8 *)(lVar20 + lVar16 + 8);
            lVar20 = lVar20 + lVar16 + (lVar16 >> 3) * -8;
            memcpy(lVar20,plStack_100,lVar16);
            *(long *)(lVar22 + 0x18) = lVar20;
            *(undefined8 **)(lVar22 + 0x20) = puVar14;
            *(ulong *)(lVar22 + 0x28) = uStack_98;
            if (plVar9 != (long *)0x0) {
              func_0x0412a280(plVar9,uStack_58);
            }
            goto LAB_0ca64865;
          }
          goto LAB_0ca648d7;
        }
LAB_0ca63e90:
        plVar8 = (long *)plVar7[1];
        plVar9 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar9[2];
            bVar23 = plVar9 != (long *)*plVar7;
            plVar9 = plVar7;
          } while (bVar23);
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      } while (plVar7 != &lStack_80);
    }
    func_0x0ca7c290(lStack_80);
  }
  return;
}


