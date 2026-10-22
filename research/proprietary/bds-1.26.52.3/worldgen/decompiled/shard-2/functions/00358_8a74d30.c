/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x8b74d30 (ELF vaddr 0x8a74d30)
 * Label: caller-of-callee
 * Body:  [[08b74d30, 08b74ea0] [08b74eb0, 08b74ff8] [08b75000, 08b750cb] [08b750d0, 08b751ca] [08b751d0, 08b75206] [08b75210, 08b75556] [08b75560, 08b75660] [08b75670, 08b75717] [08b75720, 08b757bc] [08b757c0, 08b75923] [08b75930, 08b75982] [08b75990, 08b75f66] [08b75f70, 08b766bd] [08b766c0, 08b769c5] [08b769d0, 08b76ac1] [08b76b68, 08b76ba4] [08b76ba8, 08b76bb6] [08b76cc1, 08b76cd6] [08b76e3a, 08b76e59]]
 * Ghidra: FUN_08b74d30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_08b74d30(undefined8 *param_1,long *param_2,undefined8 param_3,long *param_4,byte param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  char cVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong unaff_RBP;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  long *plStack_2e0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  char cStack_218;
  char cStack_210;
  long *plStack_208;
  undefined8 *puStack_200;
  long *plStack_1f8;
  char cStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  byte bStack_1d0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long **pplStack_188;
  long *plStack_f8;
  long *plStack_f0;
  undefined *puStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  if (param_2[5] != 0) {
    func_0x0eee2f00(&plStack_1a8,param_3,0xb0);
    uStack_b0 = func_0x08b53b60(&plStack_1a8);
    uStack_b0 = (uStack_b0 >> 2) + 0x9e3779b9 + uStack_b0 * 0x40 + (ulong)param_5 ^ uStack_b0;
    for (puVar20 = (undefined8 *)param_2[0x1b]; puVar20 != (undefined8 *)0x0;
        puVar20 = (undefined8 *)*puVar20) {
      if (uStack_b0 == puVar20[6]) {
        (**(code **)(*(long *)puVar20[3] + 0x20))();
        *(undefined1 *)(puVar20 + 5) = 1;
        break;
      }
    }
    uStack_2b8 = (long *)0x0;
    uStack_2b0 = (long *)0x0;
    plStack_2a8 = (long *)0x0;
    plStack_1f8 = param_2 + 7;
    cStack_1f0 = '\x01';
    puStack_200 = param_1;
    func_0x0412d550();
    plVar14 = (long *)param_2[3];
    if (plVar14 == param_2 + 4) {
      plStack_248 = (long *)0x0;
      uStack_2b8._0_4_ = 0;
      uStack_2b8._4_4_ = 0;
      uStack_2b0._0_4_ = 0;
      uStack_2b0._4_4_ = 0;
    }
    else {
      do {
        plVar11 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x60);
        if (plVar11 == (long *)0x0) {
          func_0x0eec74c0(0x60,0);
        }
        plVar11[1] = 0;
        plVar11[2] = 0;
        *plVar11 = (long)&UNK_0f14a5b8;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[5] = 0;
        plVar11[6] = 0;
        plVar11[7] = 0;
        plVar11[8] = 0;
        plVar11[9] = 0;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        plVar12 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xc0);
        if (plVar12 == (long *)0x0) {
          func_0x0eec74c0(0xc0,0);
        }
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = (long)&UNK_0f14a608;
        plVar12[4] = 0;
        plVar12[5] = 0;
        plVar12[6] = 0;
        plVar12[7] = 0;
        plVar12[8] = 0;
        plVar12[9] = 0;
        plVar12[10] = 0;
        plVar12[0xb] = 0;
        plVar12[0xc] = 0;
        plVar12[0xd] = 0;
        plVar12[0xe] = 0;
        plVar12[0xf] = 0;
        plVar12[0x10] = 0;
        plVar12[0x11] = 0;
        plVar12[0x12] = 0;
        plVar12[0x13] = 0;
        plVar12[0x14] = 0;
        plVar12[0x15] = 0;
        plVar12[0x16] = 0;
        plVar12[0x17] = 0;
        plVar12[3] = (long)&UNK_0f14a728;
        lVar13 = func_0x0412dd40();
        plVar12[8] = lVar13;
        plVar12[0x10] = 0;
        plVar12[0x11] = 0;
        plVar12[0x12] = 0;
        func_0x0412d6c0(plVar12 + 0x13);
        plVar12[3] = (long)&UNK_0f14a658;
        plVar11[3] = (long)(plVar12 + 3);
        plVar11[4] = (long)plVar12;
        if (plVar12[5] == 0) {
          LOCK();
          plVar12[1] = plVar12[1] + 1;
          UNLOCK();
          LOCK();
          plVar12[2] = plVar12[2] + 1;
          UNLOCK();
          plVar12[4] = (long)(plVar12 + 4);
          plVar12[5] = (long)plVar12;
LAB_08b75016:
          plVar17 = plVar12 + 1;
          LOCK();
          lVar13 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            FUN_0412c2d0(plVar12);
          }
        }
        else if (*(long *)(plVar12[5] + 8) == -1) {
          LOCK();
          plVar12[1] = plVar12[1] + 1;
          UNLOCK();
          LOCK();
          plVar12[2] = plVar12[2] + 1;
          UNLOCK();
          plVar12[4] = (long)(plVar12 + 4);
          plVar12[5] = (long)plVar12;
          FUN_0412c2d0();
          goto LAB_08b75016;
        }
        plVar17 = uStack_2b0;
        plVar12 = uStack_2b8;
        plStack_1a8 = plVar11 + 3;
        *(undefined1 *)(plVar11 + 5) = 0;
        *(undefined1 *)(plVar11 + 0xb) = 0;
        uStack_298 = (long *)plVar11[3];
        plStack_290 = (long *)plVar11[4];
        if (plStack_290 != (long *)0x0) {
          LOCK();
          plStack_290[1] = plStack_290[1] + 1;
          UNLOCK();
        }
        uStack_88 = 0;
        plStack_80 = (long *)0x0;
        plStack_1a0 = plVar11;
        if (plStack_2a8 <= uStack_2b0) {
          lVar13 = (long)uStack_2b0 - (long)uStack_2b8;
          uVar15 = (lVar13 >> 4) + 1;
          if (uVar15 < 0x1000000000000000) {
            plStack_a8 = plStack_2a8;
            uVar25 = (long)plStack_2a8 - (long)uStack_2b8 >> 3;
            if (uVar25 <= uVar15) {
              uVar25 = uVar15;
            }
            if (0x7fffffffffffffef < (ulong)((long)plStack_2a8 - (long)uStack_2b8)) {
              uVar25 = 0xfffffffffffffff;
            }
            plStack_208 = plStack_290;
            plStack_a0 = uStack_298;
            if (uVar25 < 0x1000000000000000) {
              lVar26 = uVar25 * 0x10;
              lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar26);
              if (lVar18 == 0) {
                func_0x0eec74c0(lVar26,0);
              }
              *(long **)(lVar18 + lVar13) = plStack_a0;
              *(long **)(lVar18 + 8 + lVar13) = plStack_208;
              uStack_298 = (long *)0x0;
              plStack_290 = (long *)0x0;
              plVar22 = (long *)(lVar18 + lVar13 + (lVar13 >> 4) * -0x10);
              plVar11 = plVar12;
              plVar16 = plVar22;
              plVar21 = plStack_a8;
              if (plVar12 != plVar17) {
                do {
                  uVar5 = *(undefined4 *)((long)plVar11 + 4);
                  lVar1 = plVar11[1];
                  uVar6 = *(undefined4 *)((long)plVar11 + 0xc);
                  *(int *)plVar16 = (int)*plVar11;
                  *(undefined4 *)((long)plVar16 + 4) = uVar5;
                  *(int *)(plVar16 + 1) = (int)lVar1;
                  *(undefined4 *)((long)plVar16 + 0xc) = uVar6;
                  *plVar11 = 0;
                  plVar11[1] = 0;
                  plVar11 = plVar11 + 2;
                  plVar16 = plVar16 + 2;
                  plStack_208 = plVar22;
                } while (plVar11 != plVar17);
                do {
                  plVar11 = (long *)plVar12[1];
                  if (plVar11 != (long *)0x0) {
                    LOCK();
                    plVar22 = plVar11 + 1;
                    lVar1 = *plVar22;
                    *plVar22 = *plVar22 + -1;
                    UNLOCK();
                    if (lVar1 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                      FUN_0412c2d0(plVar11);
                    }
                  }
                  plVar12 = plVar12 + 2;
                  plVar22 = plStack_208;
                  plVar21 = plStack_2a8;
                  plVar11 = uStack_2b8;
                } while (plVar12 != plVar17);
              }
              plStack_2a8 = (long *)(lVar26 + lVar18);
              uStack_2b8 = plVar22;
              if (plVar11 != (long *)0x0) {
                func_0x0412a280(plVar11,(long)plVar21 - (long)plVar11);
              }
              plVar12 = plStack_290;
              uStack_2b0 = (long *)(lVar13 + lVar18 + 0x10);
              plVar11 = plStack_80;
              if (plStack_290 != (long *)0x0) {
                LOCK();
                plVar17 = plStack_290 + 1;
                lVar13 = *plVar17;
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  (**(code **)(*plStack_290 + 0x10))(plStack_290);
                  FUN_0412c2d0(plVar12);
                  plVar11 = plStack_80;
                }
              }
              plStack_80 = plVar11;
              if (plVar11 != (long *)0x0) {
                LOCK();
                plVar12 = plVar11 + 1;
                lVar13 = *plVar12;
                *plVar12 = *plVar12 + -1;
                UNLOCK();
                if (lVar13 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                  FUN_0412c2d0(plVar11);
                }
              }
              goto LAB_08b752c0;
            }
          }
          else {
            func_0x08badbc0();
          }
          func_0x04882eb0();
          plStack_2e0 = param_4;
          goto LAB_08b76a9d;
        }
        *uStack_2b0 = (long)uStack_298;
        uStack_2b0[1] = (long)plStack_290;
        uStack_298 = (long *)0x0;
        plStack_290 = (long *)0x0;
        uStack_2b0 = uStack_2b0 + 2;
LAB_08b752c0:
        plStack_f8 = plStack_1a8;
        plStack_f0 = plStack_1a0;
        plStack_1a8 = (long *)0x0;
        plStack_1a0 = (long *)0x0;
        uStack_298 = (long *)CONCAT71(uStack_298._1_7_,param_5);
        (**(code **)(plVar14[6] + 0x10))(plVar14 + 6,param_3,param_4,&uStack_298,&plStack_f8);
        plVar12 = plStack_f0;
        plVar11 = plStack_1a0;
        if (plStack_f0 != (long *)0x0) {
          LOCK();
          plVar17 = plStack_f0 + 1;
          lVar13 = *plVar17;
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
            FUN_0412c2d0(plVar12);
            plVar11 = plStack_1a0;
          }
        }
        plStack_1a0 = plVar11;
        if (plVar11 != (long *)0x0) {
          LOCK();
          plVar12 = plVar11 + 1;
          lVar13 = *plVar12;
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            FUN_0412c2d0(plVar11);
          }
        }
        plVar11 = (long *)plVar14[1];
        plVar12 = plVar14;
        if ((long *)plVar14[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar12[2];
            bVar29 = plVar12 != (long *)*plVar14;
            plVar12 = plVar14;
          } while (bVar29);
        }
        else {
          do {
            plVar14 = plVar11;
            plVar11 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      } while (plVar14 != param_2 + 4);
      plStack_248 = plStack_2a8;
    }
    uStack_258 = CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
    uStack_250 = CONCAT44(uStack_2b0._4_4_,(undefined4)uStack_2b0);
    uStack_2b8 = (long *)0x0;
    uStack_2b0 = (long *)0x0;
    plStack_2a8 = (long *)0x0;
    plStack_2e0 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98);
    if (plStack_2e0 == (long *)0x0) goto LAB_08b76a40;
    do {
      plStack_2e0[1] = 0;
      plStack_2e0[2] = 0;
      *plStack_2e0 = (long)&UNK_0f14a778;
      plStack_2e0[3] = (long)&UNK_0f14a7c8;
      plStack_2e0[6] = 0;
      plStack_2e0[7] = 0;
      plStack_2e0[8] = 0;
      plStack_2e0[9] = 0;
      plStack_2e0[10] = 0;
      plStack_2e0[0xb] = 0x100000001;
      plStack_2e0[0xc] = 0;
      plStack_2e0[0xd] = 0;
      plStack_2e0[0xe] = 0;
      plStack_2e0[0xf] = 0;
      plStack_2e0[0x10] = 0;
      plStack_2e0[0x11] = 0;
      plStack_2e0[0x12] = 0;
      LOCK();
      plStack_2e0[1] = plStack_2e0[1] + 1;
      UNLOCK();
      LOCK();
      plStack_2e0[2] = plStack_2e0[2] + 1;
      UNLOCK();
      plStack_2e0[4] = (long)(plStack_2e0 + 4);
      plStack_2e0[5] = (long)plStack_2e0;
      LOCK();
      plVar14 = plStack_2e0 + 1;
      lVar13 = *plVar14;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
        FUN_0412c2d0(plStack_2e0);
      }
      plVar11 = plStack_248;
      plVar14 = (long *)uStack_250;
      lVar18 = uStack_258;
      uStack_298 = (long *)uStack_258;
      plStack_290 = (long *)uStack_250;
      plStack_288 = plStack_248;
      uStack_258 = 0;
      uStack_250 = 0;
      plStack_248 = (long *)0x0;
      *(uint *)(plStack_2e0 + 0xb) = (uint)((long *)lVar18 == plVar14);
      lVar13 = plStack_2e0[0x10];
      if (lVar13 != 0) {
        lVar18 = plStack_2e0[0x11];
        lVar26 = lVar13;
        if (lVar13 != lVar18) {
          do {
            plVar14 = *(long **)(lVar18 + -8);
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar11 = plVar14 + 1;
              lVar26 = *plVar11;
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              if (lVar26 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                FUN_0412c2d0(plVar14);
              }
            }
            lVar18 = lVar18 + -0x10;
          } while (lVar18 != lVar13);
          lVar26 = plStack_2e0[0x10];
        }
        plVar11 = plStack_288;
        plVar14 = plStack_290;
        lVar18 = (long)uStack_298;
        plStack_2e0[0x11] = lVar13;
        func_0x0412a280(lVar26,plStack_2e0[0x12] - lVar26);
        plStack_2e0[0x10] = 0;
        plStack_2e0[0x11] = 0;
        plStack_2e0[0x12] = 0;
      }
      plStack_2e0[0x10] = lVar18;
      plStack_2e0[0x11] = (long)plVar14;
      plStack_2e0[0x12] = (long)plVar11;
      uStack_298 = (long *)0x0;
      plStack_290 = (long *)0x0;
      plStack_288 = (long *)0x0;
      plStack_2e0[0xc] = (long)plVar14 - lVar18 >> 4;
      if (plStack_2e0[5] == 0) goto LAB_08b76a9d;
      lVar13 = plStack_2e0[4];
      plVar14 = (long *)func_0x0412c300();
      if (plVar14 == (long *)0x0) goto LAB_08b76a9d;
      plVar11 = (long *)(lVar13 + -8);
      if (lVar13 == 0) {
        plVar11 = (long *)0x0;
      }
      plVar12 = plStack_2e0 + 1;
      puVar3 = (undefined8 *)plStack_2e0[0x11];
      for (puVar20 = (undefined8 *)plStack_2e0[0x10]; puVar20 != puVar3; puVar20 = puVar20 + 2) {
        plVar17 = (long *)*puVar20;
        LOCK();
        plVar14[1] = plVar14[1] + 1;
        UNLOCK();
        plStack_1a8 = (long *)&UNK_0f14a878;
        plStack_1a0 = plVar11;
        plStack_198 = plVar14;
        pplStack_188 = &plStack_1a8;
        (**(code **)(*plVar17 + 0x30))(plVar17,&plStack_1a8);
        if (pplStack_188 == &plStack_1a8) {
          lVar13 = 0x20;
LAB_08b75675:
          (**(code **)((long)*pplStack_188 + lVar13))();
        }
        else {
          lVar13 = 0x28;
          if (pplStack_188 != (long **)0x0) goto LAB_08b75675;
        }
      }
      LOCK();
      plVar17 = plVar14 + 1;
      lVar13 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        FUN_0412c2d0(plVar14);
      }
      plVar17 = uStack_298;
      plVar14 = plStack_290;
      if (uStack_298 != (long *)0x0) {
        for (; plVar17 != plVar14; plVar14 = plVar14 + -2) {
          plVar11 = (long *)plVar14[-1];
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar22 = plVar11 + 1;
            lVar13 = *plVar22;
            *plVar22 = *plVar22 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              FUN_0412c2d0(plVar11);
            }
          }
        }
        plStack_290 = plVar17;
        func_0x0412a280(uStack_298,(long)plStack_288 - (long)uStack_298);
      }
      LOCK();
      *plVar12 = *plVar12 + 1;
      UNLOCK();
      LOCK();
      lVar13 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
        FUN_0412c2d0(plStack_2e0);
      }
      lVar18 = uStack_258;
      lVar13 = uStack_250;
      if (uStack_258 != 0) {
        for (; lVar18 != lVar13; lVar13 = lVar13 + -0x10) {
          plVar11 = *(long **)(lVar13 + -8);
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar14 = plVar11 + 1;
            lVar26 = *plVar14;
            *plVar14 = *plVar14 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              FUN_0412c2d0(plVar11);
            }
          }
        }
        uStack_250 = lVar18;
        func_0x0412a280(uStack_258,(long)plStack_248 - uStack_258);
      }
      plVar14 = (long *)param_2[0x1e];
      param_2[0x1e] = (long)plVar14 + 1;
      if (plStack_2e0 != (long *)0x0) {
        LOCK();
        *plVar12 = *plVar12 + 1;
        UNLOCK();
      }
      plVar17 = param_2 + 0x19;
      plVar22 = (long *)param_2[0x1a];
      if (plVar22 != (long *)0x0) {
        uVar15 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
        uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar15 >> 0x38 < 2) {
          plVar11 = (long *)((long)plVar22 - 1U & (ulong)plVar14);
          puVar20 = *(undefined8 **)(*plVar17 + (long)plVar11 * 8);
        }
        else {
          plVar11 = plVar14;
          if (plVar22 <= plVar14) {
            if (((ulong)plVar14 | (ulong)plVar22) >> 0x20 == 0) {
              plVar11 = (long *)(((ulong)plVar14 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff));
              puVar20 = *(undefined8 **)(*plVar17 + (long)plVar11 * 8);
              goto joined_r0x08b75b45;
            }
            plVar11 = (long *)((ulong)plVar14 % (ulong)plVar22);
          }
          puVar20 = *(undefined8 **)(*plVar17 + (long)plVar11 * 8);
        }
joined_r0x08b75b45:
        if ((puVar20 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar20, plVar16 != (long *)0x0))
        {
          if ((byte)(uVar15 >> 0x38) < 2) {
            do {
              if ((long *)plVar16[1] == plVar14) {
                if ((long *)plVar16[2] == plVar14) goto LAB_08b75c60;
              }
              else if ((long *)((ulong)plVar16[1] & (long)plVar22 - 1U) != plVar11) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              plVar21 = (long *)plVar16[1];
              if (plVar21 == plVar14) {
                if ((long *)plVar16[2] == plVar14) goto LAB_08b75c60;
              }
              else {
                if (plVar22 <= plVar21) {
                  if (((ulong)plVar21 | (ulong)plVar22) >> 0x20 == 0) {
                    if ((long *)(((ulong)plVar21 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff)) ==
                        plVar11) goto LAB_08b7593a;
                    break;
                  }
                  plVar21 = (long *)((ulong)plVar21 % (ulong)plVar22);
                }
                if (plVar21 != plVar11) break;
              }
LAB_08b7593a:
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
      }
      plVar16 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (plVar16 == (long *)0x0) {
        func_0x0eec74c0(0x38,0);
      }
      plStack_198 = (long *)0x1;
      *plVar16 = 0;
      plVar16[1] = (long)plVar14;
      plVar16[2] = (long)plVar14;
      plVar16[5] = 0;
      plVar16[6] = 0;
      plVar16[3] = 0;
      plVar16[4] = 0;
      *(undefined1 *)(plVar16 + 5) = 1;
      plVar21 = param_2 + 0x1b;
      plStack_1a8 = plVar16;
      plStack_1a0 = plVar17;
      if ((long)plVar22 < 0) {
        fVar31 = (float)plVar22;
        fVar30 = *(float *)(param_2 + 0x1d);
        if (plVar22 != (long *)0x0) goto LAB_08b75c2e;
LAB_08b75e3c:
        uVar15 = 1;
        if ((long *)0x2 < plVar22) {
          uVar15 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
        }
        plVar24 = (long *)(uVar15 | (long)plVar22 * 2);
        fVar30 = (float)func_0x0eee3ab0((float)(param_2[0x1c] + 1) / fVar30);
        plVar11 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30);
        if (plVar11 < plVar24) {
          plVar11 = plVar24;
        }
        plVar24 = (long *)0x2;
        if ((plVar11 == (long *)0x1) ||
           (plVar24 = plVar11, ((ulong)plVar11 & (long)plVar11 - 1U) == 0)) {
          bVar29 = plVar24 < plVar22;
          plVar11 = plVar24;
          if (plVar24 <= plVar22) goto LAB_08b76745;
LAB_08b75ebf:
          if ((ulong)plVar24 >> 0x3d != 0) goto LAB_08b76aa7;
          lVar13 = (long)plVar24 * 8;
          lVar18 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar13);
          if (lVar18 == 0) {
            func_0x0eec74c0(lVar13,0);
          }
          lVar26 = *plVar17;
          *plVar17 = lVar18;
          if (lVar26 != 0) {
            func_0x0412a280(lVar26,param_2[0x1a] << 3);
            lVar18 = param_2[0x19];
          }
          param_2[0x1a] = (long)plVar24;
          func_0x0eee2dd0(lVar18,0,lVar13);
          plVar11 = (long *)param_2[0x1b];
          if (plVar11 != (long *)0x0) {
            plVar22 = (long *)plVar11[1];
            uVar15 = (long)plVar24 - 1;
            if (((ulong)plVar24 & uVar15) == 0) {
              *(long **)(lVar18 + ((ulong)plVar22 & uVar15) * 8) = plVar21;
              uVar25 = (ulong)plVar22 & uVar15;
              while (plVar22 = plVar11, plVar11 = (long *)*plVar22, plVar11 != (long *)0x0) {
                uVar27 = plVar11[1] & uVar15;
                if (uVar27 != uVar25) {
                  if (*(long *)(lVar18 + uVar27 * 8) == 0) {
                    *(long **)(lVar18 + uVar27 * 8) = plVar22;
                    uVar25 = uVar27;
                  }
                  else {
                    *plVar22 = *plVar11;
                    *plVar11 = **(undefined8 **)(lVar18 + uVar27 * 8);
                    **(long **)(lVar18 + uVar27 * 8) = (long)plVar11;
                    plVar11 = plVar22;
                  }
                }
              }
            }
            else {
              if (plVar24 <= plVar22) {
                if (((ulong)plVar22 | (ulong)plVar24) >> 0x20 == 0) {
                  plVar22 = (long *)(((ulong)plVar22 & 0xffffffff) % ((ulong)plVar24 & 0xffffffff));
                }
                else {
                  plVar22 = (long *)((ulong)plVar22 % (ulong)plVar24);
                }
              }
              *(long **)(lVar18 + (long)plVar22 * 8) = plVar21;
              plVar28 = (long *)*plVar11;
              while (plVar28 != (long *)0x0) {
                plVar23 = (long *)plVar28[1];
                if (plVar24 <= plVar23) {
                  if (((ulong)plVar23 | (ulong)plVar24) >> 0x20 == 0) {
                    plVar23 = (long *)(((ulong)plVar23 & 0xffffffff) % ((ulong)plVar24 & 0xffffffff)
                                      );
                  }
                  else {
                    plVar23 = (long *)((ulong)plVar23 % (ulong)plVar24);
                  }
                }
                if (plVar23 != plVar22) {
                  if (*(long *)(lVar18 + (long)plVar23 * 8) == 0) {
                    *(long **)(lVar18 + (long)plVar23 * 8) = plVar11;
                    plVar22 = plVar23;
                  }
                  else {
                    *plVar11 = *plVar28;
                    *plVar28 = **(long **)(lVar18 + (long)plVar23 * 8);
                    **(undefined8 **)(lVar18 + (long)plVar23 * 8) = plVar28;
                    plVar28 = plVar11;
                  }
                }
                plVar11 = plVar28;
                plVar28 = (long *)*plVar11;
              }
            }
          }
        }
        else {
          plVar24 = (long *)func_0x0412c3f0();
          plVar22 = (long *)param_2[0x1a];
          bVar29 = plVar24 < plVar22;
          plVar11 = plVar24;
          if (plVar22 < plVar24) goto LAB_08b75ebf;
LAB_08b76745:
          if (bVar29) {
            fVar30 = (float)func_0x0eee3ab0((float)(ulong)param_2[0x1c] / *(float *)(param_2 + 0x1d)
                                           );
            plVar24 = (long *)((long)(fVar30 - _DAT_01198778) & (long)fVar30 >> 0x3f | (long)fVar30)
            ;
            if ((plVar22 < (long *)0x3) ||
               (uVar15 = (long)plVar22 - ((ulong)plVar22 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
               1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              plVar24 = (long *)func_0x0412c3f0(plVar24);
            }
            else if ((long *)0x1 < plVar24) {
              lVar13 = 0x3f;
              if ((long)plVar24 - 1U != 0) {
                for (; (long)plVar24 - 1U >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              plVar24 = (long *)(1L << (-((byte)lVar13 ^ 0x3f) & 0x3f));
            }
            if (plVar24 < plVar11) {
              plVar24 = plVar11;
            }
            if (plVar24 < plVar22) {
              if (plVar24 != (long *)0x0) goto LAB_08b75ebf;
              lVar13 = *plVar17;
              *plVar17 = 0;
              if (lVar13 != 0) {
                func_0x0412a280(lVar13,param_2[0x1a] << 3);
              }
              param_2[0x1a] = 0;
            }
          }
        }
        plVar22 = (long *)param_2[0x1a];
        if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
          plVar11 = (long *)((long)plVar22 - 1U & (ulong)plVar14);
          lVar13 = *plVar17;
          plVar17 = *(long **)(lVar13 + (long)plVar11 * 8);
          goto joined_r0x08b76956;
        }
        if (plVar14 < plVar22) {
          lVar13 = *plVar17;
          plVar17 = *(long **)(lVar13 + (long)plVar14 * 8);
          plVar11 = plVar14;
        }
        else {
          if (((ulong)plVar14 | (ulong)plVar22) >> 0x20 != 0) {
            plVar11 = (long *)((ulong)plVar14 % (ulong)plVar22);
            lVar13 = *plVar17;
            plVar17 = *(long **)(lVar13 + (long)plVar11 * 8);
            goto joined_r0x08b76956;
          }
          plVar11 = (long *)(((ulong)plVar14 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff));
          lVar13 = *plVar17;
          plVar17 = *(long **)(lVar13 + (long)plVar11 * 8);
        }
        if (plVar17 != (long *)0x0) goto LAB_08b75c4b;
LAB_08b768dd:
        *plVar16 = *plVar21;
        *plVar21 = (long)plVar16;
        *(long **)(lVar13 + (long)plVar11 * 8) = plVar21;
        if (*plVar16 != 0) {
          plVar11 = *(long **)(*plVar16 + 8);
          if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
            *(long **)(lVar13 + ((ulong)plVar11 & (long)plVar22 - 1U) * 8) = plVar16;
          }
          else {
            if (plVar22 <= plVar11) {
              if (((ulong)plVar11 | (ulong)plVar22) >> 0x20 == 0) {
                *(long **)(lVar13 + (((ulong)plVar11 & 0xffffffff) % ((ulong)plVar22 & 0xffffffff))
                                    * 8) = plVar16;
                goto LAB_08b75c55;
              }
              plVar11 = (long *)((ulong)plVar11 % (ulong)plVar22);
            }
            *(long **)(lVar13 + (long)plVar11 * 8) = plVar16;
          }
        }
      }
      else {
        fVar31 = (float)(long)plVar22;
        fVar30 = *(float *)(param_2 + 0x1d);
        if (plVar22 == (long *)0x0) goto LAB_08b75e3c;
LAB_08b75c2e:
        if (fVar31 * fVar30 < (float)(param_2[0x1c] + 1)) goto LAB_08b75e3c;
        lVar13 = *plVar17;
        plVar17 = *(long **)(lVar13 + (long)plVar11 * 8);
joined_r0x08b76956:
        if (plVar17 == (long *)0x0) goto LAB_08b768dd;
LAB_08b75c4b:
        *plVar16 = *plVar17;
        *plVar17 = (long)plVar16;
      }
LAB_08b75c55:
      param_2[0x1c] = param_2[0x1c] + 1;
LAB_08b75c60:
      plVar11 = plStack_2e0 + 3;
      plVar16[3] = (long)plVar11;
      plVar17 = (long *)plVar16[4];
      plVar16[4] = (long)plStack_2e0;
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar22 = plVar17 + 1;
        lVar13 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          FUN_0412c2d0(plVar17);
        }
      }
      *(undefined1 *)(plVar16 + 5) = 0;
      uVar5 = (undefined4)uStack_298;
      *(undefined4 *)((long)plVar16 + 0x29) = uVar5;
      *(undefined4 *)((long)plVar16 + 0x2c) = uStack_298._3_4_;
      plVar16[6] = uStack_b0;
      puStack_60 = &UNK_011f4d5a;
      uStack_58 = 0xb8;
      uStack_50 = _DAT_0f778528;
      uStack_48 = 0xffffffff00000001;
      uStack_40 = 0;
      lStack_38 = 0;
      lVar13 = param_2[0x20];
      lStack_38 = func_0x0417cc60();
      lStack_38 = lStack_38 + lVar13;
      plVar17 = (long *)param_2[0x1f];
      uVar9 = (**(code **)(*plVar17 + 0x48))(plVar17);
      puStack_e8 = (undefined *)0x0;
      plStack_e0 = (long *)0x0;
      uStack_78 = 0;
      plStack_70 = (long *)0x0;
      plStack_1a8 = (long *)&UNK_0f149650;
      plStack_1a0 = param_2;
      plStack_198 = plVar14;
      func_0x0488fb40(&plStack_1e8,plVar17,&puStack_60,&puStack_e8,uVar9,&plStack_1a8);
      if (plStack_1a8 != (long *)0x0) {
        (*(code *)plStack_1a8[1])(&plStack_1a8);
      }
      plVar22 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        LOCK();
        plVar16 = plStack_e0 + 1;
        lVar13 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          FUN_0412c2d0(plVar22);
        }
      }
      plStack_98 = plStack_1e8;
      plStack_90 = plStack_1e0;
      if (plStack_1e0 != (long *)0x0) {
        LOCK();
        plStack_1e0[1] = plStack_1e0[1] + 1;
        UNLOCK();
      }
      iVar2 = (int)plVar17[0x10];
      if (iVar2 != 1) {
        if (iVar2 == 3) {
          *(undefined4 *)(plStack_1e8 + 6) = 0;
        }
        else if (iVar2 == 2) {
          (**(code **)(*plStack_1e8 + 0x10))();
          goto LAB_08b7600f;
        }
        uStack_298 = plStack_1e8;
        plStack_290 = plStack_1e0;
        if (plStack_1e0 != (long *)0x0) {
          LOCK();
          plStack_1e0[1] = plStack_1e0[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar17 + 0x28))(plVar17,&uStack_298,0);
        plVar17 = plStack_290;
        if (plStack_290 != (long *)0x0) {
          LOCK();
          plVar22 = plStack_290 + 1;
          lVar13 = *plVar22;
          *plVar22 = *plVar22 + -1;
          UNLOCK();
          if (lVar13 == 0) {
            (**(code **)(*plStack_290 + 0x10))(plStack_290);
            FUN_0412c2d0(plVar17);
          }
        }
      }
LAB_08b7600f:
      plVar17 = plStack_90;
      if (plStack_90 != (long *)0x0) {
        LOCK();
        plVar22 = plStack_90 + 1;
        lVar13 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          FUN_0412c2d0(plVar17);
        }
      }
      plVar22 = plStack_70;
      plVar17 = plStack_1e0;
      if (plStack_70 != (long *)0x0) {
        LOCK();
        plVar16 = plStack_70 + 1;
        lVar13 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          FUN_0412c2d0(plVar22);
        }
      }
      if (plVar17 != (long *)0x0) {
        LOCK();
        plVar22 = plVar17 + 1;
        lVar13 = *plVar22;
        *plVar22 = *plVar22 + -1;
        UNLOCK();
        if (lVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          FUN_0412c2d0(plVar17);
        }
      }
      plVar17 = (long *)param_2[0x1f];
      puStack_e8 = &UNK_011f4d5a;
      plStack_e0 = (long *)0xb8;
      uStack_d8 = _DAT_0f778528;
      uStack_d0 = 0xffffffff00000001;
      uStack_c8 = 0;
      uStack_c0 = 0;
      if (plStack_2e0 != (long *)0x0) {
        LOCK();
        *plVar12 = *plVar12 + 1;
        UNLOCK();
      }
      plStack_1e8 = (long *)&UNK_0f1498e0;
      plStack_1e0 = param_2;
      plStack_1d8 = plVar14;
      bStack_1d0 = param_5;
      plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1b0);
      if (plVar14 == (long *)0x0) {
        func_0x0eec74c0(0x1b0,0);
      }
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&UNK_0f149690;
      if (plVar17 != (long *)0x0) goto code_r0x08b7616f;
      func_0x04890760();
LAB_08b76a40:
      func_0x0eec74c0(0x98,0);
    } while( true );
  }
  cStack_210 = (char)param_2[0x26];
  if (cStack_210 == '\0') {
    uStack_238 = (undefined1)param_2[0x21];
    uStack_230 = uStack_230 & 0xffffffffffffff00;
    cStack_218 = '\0';
    if ((char)param_2[0x25] == '\x01') {
      if ((param_2[0x22] & 1U) == 0) {
        plStack_220 = (long *)param_2[0x24];
        uStack_230 = param_2[0x22];
        uStack_228 = param_2[0x23];
      }
      else {
        func_0x0412e5e0(&uStack_230,param_2[0x24],param_2[0x23]);
      }
      cStack_218 = '\x01';
      unaff_RBP = 1;
    }
    else {
      unaff_RBP = 0;
    }
  }
  plVar14 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x68);
  if (plVar14 == (long *)0x0) {
    func_0x0eec74c0(0x68,0);
  }
  plVar11 = plStack_220;
  plVar14[1] = 0;
  plVar14[2] = 0;
  *plVar14 = (long)&UNK_0f14a508;
  if (cStack_210 == '\0') {
    if ((unaff_RBP & 1) == 0) {
      plVar14[3] = (long)&UNK_0f14a558;
      *(undefined1 *)(plVar14 + 0xb) = 0;
      *(undefined1 *)(plVar14 + 6) = uStack_238;
      *(undefined1 *)(plVar14 + 7) = 0;
      *(undefined1 *)(plVar14 + 10) = 0;
    }
    else {
      uVar5 = (undefined4)uStack_230;
      uVar6 = uStack_230._4_4_;
      uVar7 = (undefined4)uStack_228;
      uVar8 = uStack_228._4_4_;
      uStack_230 = 0;
      uStack_228 = 0;
      plStack_220 = (long *)0x0;
      plVar14[3] = (long)&UNK_0f14a558;
      *(undefined1 *)(plVar14 + 0xb) = 0;
      *(undefined1 *)(plVar14 + 6) = uStack_238;
      *(undefined4 *)(plVar14 + 7) = uVar5;
      *(undefined4 *)((long)plVar14 + 0x3c) = uVar6;
      *(undefined4 *)(plVar14 + 8) = uVar7;
      *(undefined4 *)((long)plVar14 + 0x44) = uVar8;
      plVar14[9] = (long)plVar11;
      *(undefined1 *)(plVar14 + 10) = 1;
    }
  }
  else {
    plVar14[3] = (long)&UNK_0f14a558;
    *(char *)(plVar14 + 0xb) = cStack_210;
  }
  *(undefined1 *)(plVar14 + 0xc) = 1;
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  LOCK();
  plVar14[2] = plVar14[2] + 1;
  UNLOCK();
  plVar14[4] = (long)(plVar14 + 4);
  plVar14[5] = (long)plVar14;
  LOCK();
  plVar11 = plVar14 + 1;
  lVar13 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0412c2d0(plVar14);
  }
  *param_1 = plVar14 + 3;
  param_1[1] = plVar14;
  if (cStack_210 != '\0') {
    return param_1;
  }
  if (cStack_218 != '\x01') {
    return param_1;
  }
  if ((uStack_230 & 1) == 0) {
    return param_1;
  }
  uVar15 = uStack_230 & 0xfffffffffffffffe;
  plVar14 = plStack_220;
  goto LAB_08b7670f;
LAB_08b76a9d:
  func_0x04891290();
  goto LAB_08b76aa2;
code_r0x08b7616f:
  plVar22 = plVar14 + 4;
  uStack_298 = (long *)0x0;
  plStack_290 = (long *)0x0;
  if (plStack_1e8 == (long *)0x0) {
    uStack_298 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1e8)(&plStack_1e8,&uStack_298);
    uStack_298 = plStack_1e8;
  }
  plStack_1e8 = (long *)0x0;
  func_0x0ee25c30(plVar22,plVar17,&puStack_e8,0);
  plStack_1a8 = (long *)0x0;
  plStack_1a0 = (long *)0x0;
  if (uStack_298 == (long *)0x0) {
    plStack_1a8 = (long *)0x0;
  }
  else {
    (*(code *)*uStack_298)(&uStack_298,&plStack_1a8);
    plStack_1a8 = uStack_298;
  }
  uStack_298 = (long *)0x0;
  plVar14[0x13] = 0;
  plVar14[0x14] = 0;
  plVar14[0x12] = (long)&UNK_0f149818;
  plVar14[0x16] = 0;
  plVar14[0x17] = 0;
  if (plStack_1a8 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    (*(code *)*plStack_1a8)(&plStack_1a8,plVar14 + 0x16);
    plVar16 = plStack_1a8;
  }
  plStack_1a8 = (long *)0x0;
  plVar14[0x16] = (long)plVar16;
  plVar14[0x1e] = 0;
  plVar14[0x1f] = 0;
  plVar14[0x20] = 0;
  *(undefined1 *)(plVar14 + 0x21) = 1;
  *(undefined1 *)(plVar14 + 0x22) = 0;
  *(undefined1 *)(plVar14 + 0x28) = 0;
  plVar14[4] = (long)&UNK_0f1496e0;
  plVar14[0x12] = (long)&UNK_0f149730;
  plVar14[0x29] = 0;
  plVar14[0x2a] = 0;
  plVar14[0x2b] = 0;
  plVar14[0x2c] = 0;
  plVar14[0x2d] = 0;
  *(undefined4 *)(plVar14 + 0x2e) = 1;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  plVar14[0x2f] = 0;
  plVar14[0x30] = 0;
  *(undefined8 *)((long)plVar14 + 0x181) = 0;
  *(undefined8 *)((long)plVar14 + 0x189) = 0;
  if ((plVar16 == (long *)0x0) &&
     (cVar10 = FUN_0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_0125f07a),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (uStack_298 != (long *)0x0) {
    (**(code **)((long)uStack_298 + 8))(&uStack_298);
  }
  if (plVar14[0x14] == 0) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar14[2] = plVar14[2] + 1;
    UNLOCK();
    plVar14[0x13] = (long)(plVar14 + 0x13);
    plVar14[0x14] = (long)plVar14;
LAB_08b7638f:
    plVar16 = plVar14 + 1;
    LOCK();
    lVar13 = *plVar16;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0412c2d0(plVar14);
    }
  }
  else if (*(long *)(plVar14[0x14] + 8) == -1) {
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar14[2] = plVar14[2] + 1;
    UNLOCK();
    plVar14[0x13] = (long)(plVar14 + 0x13);
    plVar14[0x14] = (long)plVar14;
    FUN_0412c2d0();
    goto LAB_08b7638f;
  }
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  uStack_298 = plVar22;
  plStack_290 = plVar14;
  (**(code **)(*plVar17 + 0x20))(plVar17,&uStack_298);
  plVar16 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    LOCK();
    plVar21 = plStack_290 + 1;
    lVar13 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      FUN_0412c2d0(plVar16);
    }
  }
  func_0x08bae0c0(plVar22,0,0,0);
  uVar9 = uStack_c8;
  func_0x0412d680(plVar14 + 0x29);
  *(undefined1 *)(plVar14 + 0x32) = uVar9;
  if (plStack_2e0 != (long *)0x0) {
    LOCK();
    *plVar12 = *plVar12 + 1;
    UNLOCK();
  }
  plVar14[0x33] = (long)plVar11;
  plVar16 = (long *)plVar14[0x34];
  plVar14[0x34] = (long)plStack_2e0;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar21 = plVar16 + 1;
    lVar13 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN_0412c2d0(plVar16);
    }
  }
  func_0x0412d6b0(plVar14 + 0x29);
  if (plVar14[0x14] == 0) {
LAB_08b76aa2:
    func_0x04891290();
LAB_08b76aa7:
    uVar19 = func_0x04882eb0();
    if ((cStack_218 == '\x01') && ((uStack_230 & 1) != 0)) {
      func_0x0412a280(plStack_220,uStack_230 & 0xfffffffffffffffe);
    }
    uVar19 = func_0x0eee2d70(uVar19);
    func_0x08bb9420(&plStack_1a8);
    func_0x08b76f90(plStack_2e0);
    func_0x08b76fc0(0);
    func_0x08b76fc0(plStack_2e0);
    func_0x06cfcdf0(&plStack_1f8);
    func_0x08b76ef0(&uStack_2b8);
    func_0x0eee2d70(uVar19);
    pcVar4 = (code *)swi(3);
    puVar20 = (undefined8 *)(*pcVar4)();
    return puVar20;
  }
  lVar13 = plVar14[0x13];
  plVar16 = (long *)func_0x0412c300();
  if (plVar16 == (long *)0x0) goto LAB_08b76aa2;
  plVar21 = (long *)(lVar13 + -0x78);
  if (lVar13 == 0) {
    plVar21 = (long *)0x0;
  }
  LOCK();
  plVar16[2] = plVar16[2] + 1;
  UNLOCK();
  LOCK();
  plVar24 = plVar16 + 1;
  lVar13 = *plVar24;
  *plVar24 = *plVar24 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_0412c2d0(plVar16);
  }
  plStack_1a8 = (long *)&UNK_0f149860;
  plStack_1a0 = plVar21;
  plStack_198 = plVar16;
  pplStack_188 = &plStack_1a8;
  (**(code **)(*plVar11 + 0x30))(plVar11,&plStack_1a8);
  param_1 = puStack_200;
  if (pplStack_188 == &plStack_1a8) {
    lVar13 = 0x20;
LAB_08b76545:
    (**(code **)((long)*pplStack_188 + lVar13))();
  }
  else {
    lVar13 = 0x28;
    if (pplStack_188 != (long **)0x0) goto LAB_08b76545;
  }
  LOCK();
  lVar13 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
    FUN_0412c2d0(plStack_2e0);
  }
  if (plStack_1e8 != (long *)0x0) {
    (*(code *)plStack_1e8[1])(&plStack_1e8);
  }
  LOCK();
  plVar14[1] = plVar14[1] + 1;
  UNLOCK();
  iVar2 = (int)plVar17[0x10];
  uStack_298 = plVar22;
  plStack_290 = plVar14;
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      *(undefined4 *)(plVar14 + 10) = 0;
    }
    else if (iVar2 == 2) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      goto LAB_08b76620;
    }
    LOCK();
    plVar14[1] = plVar14[1] + 1;
    UNLOCK();
    plStack_1a8 = plVar22;
    plStack_1a0 = plVar14;
    (**(code **)(*plVar17 + 0x28))(plVar17,&plStack_1a8,0);
    plVar11 = plStack_1a0;
    if (plStack_1a0 != (long *)0x0) {
      LOCK();
      plVar17 = plStack_1a0 + 1;
      lVar13 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        FUN_0412c2d0(plVar11);
      }
    }
  }
LAB_08b76620:
  plVar11 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    LOCK();
    plVar17 = plStack_290 + 1;
    lVar13 = *plVar17;
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      FUN_0412c2d0(plVar11);
    }
  }
  *param_1 = plVar14 + 0x12;
  param_1[1] = plVar14;
  LOCK();
  lVar13 = *plVar12;
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (lVar13 == 0) {
    (**(code **)(*plStack_2e0 + 0x10))(plStack_2e0);
    FUN_0412c2d0(plStack_2e0);
  }
  if (cStack_1f0 == '\x01') {
    func_0x0412d610(plStack_1f8);
  }
  plVar11 = uStack_2b8;
  plVar14 = uStack_2b0;
  if (uStack_2b8 == (long *)0x0) {
    return param_1;
  }
  for (; plVar11 != plVar14; plVar14 = plVar14 + -2) {
    plVar12 = (long *)plVar14[-1];
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar17 = plVar12 + 1;
      lVar13 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar13 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_0412c2d0(plVar12);
      }
    }
    param_1 = puStack_200;
  }
  uVar15 = (long)plStack_2a8 - (long)uStack_2b8;
  plVar14 = uStack_2b8;
LAB_08b7670f:
  func_0x0412a280(plVar14,uVar15);
  return param_1;
}


