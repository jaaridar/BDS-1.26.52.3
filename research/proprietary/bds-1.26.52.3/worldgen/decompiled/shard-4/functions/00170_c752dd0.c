/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xc852dd0 (ELF vaddr 0xc752dd0)
 * Label: VanillaSurfaceBuilders::OverworldDefaultSurfaceBuilder::vslot5
 * Body:  [[0c852dd0, 0c852ddd] [0c852de0, 0c85317d] [0c853180, 0c853682] [0c853690, 0c8537f8] [0c853800, 0c853873] [0c853880, 0c853f8c] [0c853fe0, 0c85400e]]
 * Ghidra: wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot5
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wg_VanillaSurfaceBuilders__OverworldDefaultSurfaceBuilder__vslot5
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  float fVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  short *psVar19;
  long lVar20;
  undefined8 *puVar21;
  short sVar22;
  int iVar23;
  int *piVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  uint uVar30;
  long lVar31;
  int iVar32;
  undefined8 uVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  short sVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 *puStack_3b0;
  int iStack_39c;
  undefined8 *puStack_388;
  undefined1 auStack_378 [24];
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined1 uStack_349;
  int *piStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  int *piStack_328;
  long lStack_320;
  int iStack_318;
  float fStack_314;
  int iStack_310;
  int iStack_30c;
  undefined1 auStack_308 [16];
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  undefined1 uStack_2a8;
  long *plStack_298;
  undefined8 *puStack_290;
  ulong uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 auStack_278 [8];
  long lStack_270;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [12];
  undefined4 uStack_23c;
  undefined8 uStack_238;
  uint uStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined4 uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [12];
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [12];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined2 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined **ppuStack_148;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [12];
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  uint uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined4 uStack_74;
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_5c [13];
  undefined3 uStack_4f;
  undefined5 uStack_4c;
  
  puVar29 = (undefined8 *)*param_3;
  if (puVar29 != (undefined8 *)0x0) {
    if (DAT_0f5573f8 == '\0') goto LAB_0c853f3a;
LAB_0c852e15:
    psVar19 = (short *)*puVar29;
    auStack_308 = (undefined1  [16])0x0;
    for (; psVar19 != (short *)puVar29[1]; psVar19 = psVar19 + 8) {
      if (*psVar19 == _DAT_0f5573f0) {
        lVar31 = *(long *)(psVar19 + 4);
        if (lVar31 != 0) {
          puVar29 = *(undefined8 **)(lVar31 + 8);
          puVar26 = *(undefined8 **)(lVar31 + 0x10);
          auStack_308 = *(undefined1 (*) [16])(lVar31 + 0x18);
          puStack_358 = *(undefined8 **)(lVar31 + 0x28);
          iStack_39c = *(int *)(lVar31 + 0x30);
          lVar31 = param_3[3];
          goto joined_r0x0c852e8b;
        }
        break;
      }
    }
    puVar29 = (undefined8 *)0x0;
    puVar26 = (undefined8 *)0x0;
    puStack_358 = (undefined8 *)0x0;
    iStack_39c = 0;
    lVar31 = param_3[3];
joined_r0x0c852e8b:
    if (lVar31 == 0) {
      piStack_348 = (int *)0x0;
      piStack_328 = (int *)0x0;
      lStack_320 = 0;
    }
    else {
      auStack_208 = (undefined1  [16])0x0;
      auStack_218 = (undefined1  [16])0x0;
      uStack_1f8 = 3;
      ppuStack_148 = &puStack_168;
      auStack_1f0 = (undefined1  [16])0x0;
      auStack_1e0 = (undefined1  [16])0x0;
      auStack_1d0 = (undefined1  [16])0x0;
      auStack_1c0 = (undefined1  [16])0x0;
      auStack_1b0 = SUB1612((undefined1  [16])0x0,0);
      uStack_1a4 = 0;
      auStack_1a0 = SUB1612((undefined1  [16])0x0,4);
      auStack_190 = (undefined1  [16])0x0;
      auStack_180 = (undefined1  [16])0x0;
      uStack_170 = 0;
      puStack_168 = &UNK_0f325c88;
      puStack_160 = &UNK_0bccfd60;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_110 = 0;
      uStack_b8 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      auStack_d8 = SUB1612((undefined1  [16])0x0,0);
      uStack_cc = 0;
      auStack_e8 = (undefined1  [16])0x0;
      auStack_f8 = (undefined1  [16])0x0;
      auStack_108 = (undefined1  [16])0x0;
      uStack_70 = 0;
      uStack_68 = 0;
      auStack_80 = SUB1612((undefined1  [16])0x0,0);
      uStack_74 = 0;
      auStack_90 = (undefined1  [16])0x0;
      auStack_a0 = (undefined1  [16])0x0;
      auStack_b0 = (undefined1  [16])0x0;
      uStack_60 = 0x3f800000;
      auStack_120 = (undefined1  [16])0x0;
      auStack_5c = SUB1613((undefined1  [16])0x0,0);
      uStack_4f = 0;
      uStack_4c = 0;
      auStack_130._0_12_ = ZEXT412(0x3f800000) << 0x40;
      auStack_130._12_4_ = 0;
      auStack_2b8 = (undefined1  [16])0x0;
      auStack_2c8 = (undefined1  [16])0x0;
      auStack_2d8 = (undefined1  [16])0x0;
      uStack_2a8 = 0;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = auStack_2d8;
      auStack_228 = auVar44 << 0x40;
      uStack_280 = 0;
      auStack_268 = (undefined1  [16])0x0;
      auStack_258 = (undefined1  [16])0x0;
      auStack_248 = SUB1612((undefined1  [16])0x0,0);
      uStack_23c = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      stack0xfffffffffffffd8c = SUB1612((undefined1  [16])0x0,4);
      auStack_278._0_4_ = (float)(int)*(short *)((long)param_2 + 0x14);
      func_0x0b5f8420(auStack_2d8,0x321a00ce902e22a1,&UNK_0143ed0f,&uStack_280);
      if ((ulong)uStack_230 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_230 * 8))(&uStack_349,&lStack_270);
      }
      func_0x0c8bf410(&uStack_280,lVar31,auStack_228,param_2[1],param_4[1],0,
                      *(int *)(*param_4 + 0x14) + -1);
      piStack_348 = (int *)CONCAT44(uStack_27c,uStack_280);
      piStack_328 = (int *)auStack_278;
      if ((undefined1  [8])piStack_348 != auStack_278) {
        iVar16 = *(int *)(*param_4 + 0x14) + -1;
        piVar24 = piStack_348;
        auVar44 = auStack_308;
        do {
          if ((*piVar24 <= iVar16) && (iVar16 <= piVar24[1])) {
            if (*(undefined8 **)(piVar24 + 2) != (undefined8 *)0x0) {
              puVar29 = *(undefined8 **)(piVar24 + 2);
            }
            if (*(undefined8 **)(piVar24 + 4) != (undefined8 *)0x0) {
              puVar26 = *(undefined8 **)(piVar24 + 4);
            }
            auVar2 = *(undefined1 (*) [16])(piVar24 + 6);
            auVar41._0_4_ = -(uint)(auVar2._0_4_ == 0);
            auVar41._4_4_ = -(uint)(auVar2._4_4_ == 0);
            auVar41._8_4_ = -(uint)(auVar2._8_4_ == 0);
            auVar41._12_4_ = -(uint)(auVar2._12_4_ == 0);
            auVar43._4_4_ = auVar41._0_4_;
            auVar43._0_4_ = auVar41._4_4_;
            auVar43._8_4_ = auVar41._12_4_;
            auVar43._12_4_ = auVar41._8_4_;
            auVar44 = ~(auVar43 & auVar41) & auVar2 | auVar44 & auVar43 & auVar41;
            auStack_308 = auVar44;
            if (*(undefined8 **)(piVar24 + 10) != (undefined8 *)0x0) {
              puStack_358 = *(undefined8 **)(piVar24 + 10);
            }
          }
          piVar24 = piVar24 + 0xe;
        } while ((undefined1  [8])piVar24 != auStack_278);
      }
      lStack_320 = lStack_270;
      uVar33 = auStack_2c8._8_8_;
      if (auStack_2c8._8_8_ != 0) {
        lVar31 = auStack_2b8._0_8_;
        if (auStack_2c8._8_8_ != auStack_2b8._0_8_) {
          do {
            lVar31 = lVar31 + -8;
            func_0x0b62f250(lVar31,0);
          } while (lVar31 != uVar33);
        }
        auStack_2b8._0_8_ = uVar33;
        func_0x0412a280(auStack_2c8._8_8_,auStack_2b8._8_8_ - auStack_2c8._8_8_);
      }
      if (auStack_2d8._0_8_ != 0) {
        auStack_2d8._8_8_ = auStack_2d8._0_8_;
        func_0x0412a280(auStack_2d8._0_8_,auStack_2c8._0_8_ - auStack_2d8._0_8_);
      }
      if ((ulong)uStack_68 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_68 * 8))(&uStack_280,auStack_b0 + 8);
      }
      uStack_68 = 0xffffffff;
      if ((ulong)uStack_c0 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_c0 * 8))(&uStack_280,auStack_108 + 8);
      }
      uStack_c0 = 0xffffffff;
      if (ppuStack_148 == &puStack_168) {
        lVar31 = 0x20;
LAB_0c853c0c:
        (**(code **)(*ppuStack_148 + lVar31))();
      }
      else {
        lVar31 = 0x28;
        if (ppuStack_148 != (undefined **)0x0) goto LAB_0c853c0c;
      }
      if (auStack_208._8_8_ != 0) {
        func_0x0412c2d0();
      }
    }
    lVar31 = param_3[2];
    puStack_2e8 = puVar26;
    puStack_2e0 = puVar29;
    if ((lVar31 == 0) ||
       (((((bVar3 = *(byte *)(lVar31 + 0x10), bVar3 == 0 && (*(char *)(lVar31 + 0x11) == '\0')) &&
          (*(char *)(lVar31 + 0x12) == '\0')) && (*(char *)(lVar31 + 0x13) != '\x01')) ||
        (puVar29 = *(undefined8 **)(lVar31 + 8), puVar29 == (undefined8 *)0x0)))) {
      puVar26 = (undefined8 *)0x0;
    }
    else {
      plVar8 = (long *)*param_4;
      plVar9 = *(long **)param_4[4];
      uVar5 = *(ushort *)((long *)param_4[4] + 1);
      uVar17 = (uint)uVar5;
      uVar36 = *(uint *)param_4[1];
      uVar37 = uVar36 & 0xf;
      uVar35 = ((uint *)param_4[1])[2] & 0xf;
      puVar26 = puVar29;
      puStack_338 = param_2;
      if ((bVar3 != 0) || (*(char *)(lVar31 + 0x11) == '\x01')) {
        iVar16 = uVar35 - 1;
        if (uVar35 == 0) {
          iVar16 = 0;
        }
        uVar30 = 0xe;
        if (uVar35 < 0xe) {
          uVar30 = uVar35;
        }
        iVar6 = *(int *)((long)plVar8 + 0x14);
        uVar1 = iVar6 - 1;
        sVar38 = (short)uVar1;
        sVar22 = sVar38;
        if (plVar9 != (long *)0x0) {
          lVar27 = *plVar9;
          if (lVar27 != plVar9[1]) {
            uVar25 = (ulong)(iVar16 << 4 | uVar37);
            if ((ulong)(plVar9[1] - lVar27 >> 1) <= uVar25) goto LAB_0c853f86;
            sVar22 = *(short *)(lVar27 + uVar25 * 2) - uVar5;
            if (sVar38 <= sVar22) {
              sVar22 = sVar38;
            }
          }
        }
        if (0 < sVar22) {
          uVar25 = (ulong)(CONCAT24(sVar22,uVar36) & 0xffff0000000f);
          do {
            iVar23 = (int)(uVar25 >> 0x20);
            if (*(long *)(*(long *)(*(long *)(*plVar8 +
                                             (ulong)(uint)(((int)plVar8[3] * (int)uVar25 + iVar16) *
                                                           iVar6 + iVar23) * 8) + 0x68) + 200) !=
                _DAT_0f6eaec0) {
              iVar16 = (int)(short)(uVar25 >> 0x20);
              goto joined_r0x0c853c35;
            }
            uVar25 = uVar25 & 0xffffffff | (uVar25 & 0xffffffff00000000) - 0x100000000;
          } while (1 < iVar23);
        }
        iVar16 = 0;
joined_r0x0c853c35:
        if (plVar9 != (long *)0x0) {
          lVar27 = *plVar9;
          if (lVar27 != plVar9[1]) {
            uVar25 = (ulong)((uVar30 + 1) * 0x10 | uVar37);
            if ((ulong)(plVar9[1] - lVar27 >> 1) <= uVar25) goto LAB_0c853f86;
            uVar36 = *(ushort *)(lVar27 + uVar25 * 2) - uVar17;
            if (sVar38 <= (short)uVar36) {
              uVar36 = uVar1;
            }
            sVar38 = (short)uVar36;
            uVar1 = uVar36;
          }
        }
        iVar23 = 0;
        if (0 < sVar38) {
          iVar23 = 0;
          puStack_330 = (undefined8 *)CONCAT44(puStack_330._4_4_,iVar16);
          uVar25 = ((ulong)uVar1 & 0xffff) << 0x20 | (ulong)uVar37;
          do {
            iVar32 = (int)(uVar25 >> 0x20);
            if (*(long *)(*(long *)(*(long *)(*plVar8 +
                                             (ulong)(((int)plVar8[3] * (int)uVar25 + uVar30 + 1) *
                                                     iVar6 + iVar32) * 8) + 0x68) + 200) !=
                _DAT_0f6eaec0) {
              iVar23 = (int)(short)(uVar25 >> 0x20);
              break;
            }
            uVar25 = uVar25 & 0xffffffff | (uVar25 & 0xffffffff00000000) - 0x100000000;
          } while (1 < iVar32);
        }
        if (((*(byte *)(lVar31 + 0x11) & 3 < iVar16 - iVar23) != 0) ||
           ((bVar3 & iVar16 - iVar23 < -3) != 0)) goto LAB_0c853499;
      }
      if ((*(char *)(lVar31 + 0x13) == '\0') && (*(char *)(lVar31 + 0x12) != '\x01')) {
        puVar26 = (undefined8 *)0x0;
      }
      else {
        uVar36 = 1;
        if (1 < uVar37) {
          uVar36 = uVar37;
        }
        uVar30 = 0xe;
        if (uVar37 < 0xe) {
          uVar30 = uVar37;
        }
        iVar6 = *(int *)((long)plVar8 + 0x14);
        iVar16 = iVar6 + -1;
        sVar38 = (short)iVar16;
        iVar23 = iVar16;
        if (plVar9 != (long *)0x0) {
          lVar27 = *plVar9;
          if (lVar27 != plVar9[1]) {
            uVar25 = (ulong)(uVar35 * 0x10 + (uVar36 - 1));
            if ((ulong)(plVar9[1] - lVar27 >> 1) <= uVar25) goto LAB_0c853f86;
            iVar23 = *(ushort *)(lVar27 + uVar25 * 2) - uVar17;
            if (sVar38 <= (short)iVar23) {
              iVar23 = iVar16;
            }
          }
        }
        iVar32 = 0;
        if (0 < (short)iVar23) {
          uVar25 = CONCAT44(iVar23,uVar36 - 1) & 0xffffffffffff;
          do {
            iVar23 = (int)(uVar25 >> 0x20);
            if (*(long *)(*(long *)(*(long *)(*plVar8 +
                                             (ulong)(((int)plVar8[3] * (int)uVar25 + uVar35) * iVar6
                                                    + iVar23) * 8) + 0x68) + 200) != _DAT_0f6eaec0)
            {
              iVar32 = (int)(short)(uVar25 >> 0x20);
              break;
            }
            uVar25 = uVar25 & 0xffffffff | (uVar25 & 0xffffffff00000000) - 0x100000000;
          } while (1 < iVar23);
        }
        if (plVar9 == (long *)0x0) {
LAB_0c853e89:
          iVar23 = iVar16;
          if (0 < sVar38) goto LAB_0c853e96;
LAB_0c853e7f:
          iVar16 = 0;
        }
        else {
          lVar27 = *plVar9;
          if (lVar27 == plVar9[1]) goto LAB_0c853e89;
          uVar25 = (ulong)(uVar35 * 0x10 + uVar30 + 1);
          if ((ulong)(plVar9[1] - lVar27 >> 1) <= uVar25) goto LAB_0c853f86;
          iVar23 = *(ushort *)(lVar27 + uVar25 * 2) - uVar17;
          if (sVar38 <= (short)iVar23) {
            iVar23 = iVar16;
          }
          if ((short)iVar23 < 1) goto LAB_0c853e7f;
LAB_0c853e96:
          iVar16 = 0;
          uVar25 = CONCAT44(iVar23,uVar30 + 1) & 0xffffffffffff;
          do {
            iVar23 = (int)(uVar25 >> 0x20);
            if (*(long *)(*(long *)(*(long *)(*plVar8 +
                                             (ulong)(((int)plVar8[3] * (int)uVar25 + uVar35) * iVar6
                                                    + iVar23) * 8) + 0x68) + 200) != _DAT_0f6eaec0)
            {
              iVar16 = (int)(short)(uVar25 >> 0x20);
              break;
            }
            uVar25 = uVar25 & 0xffffffff | (uVar25 & 0xffffffff00000000) - 0x100000000;
          } while (1 < iVar23);
        }
        if (((*(char *)(lVar31 + 0x13) != '\0') && (3 < iVar32 - iVar16)) ||
           ((puVar26 = (undefined8 *)0x0, *(char *)(lVar31 + 0x12) == '\x01' &&
            (iVar32 - iVar16 < -3)))) {
          puVar26 = puVar29;
        }
      }
    }
LAB_0c853499:
    auStack_228._0_2_ = *(undefined2 *)((long)param_2 + 0x14);
    plVar8 = (long *)param_3[8];
    puStack_330 = puVar26;
    if (plVar8 == (long *)0x0) {
      func_0x04891200(0,param_4[1]);
LAB_0c853f81:
      FUN_0c6e2980();
LAB_0c853f86:
      uVar33 = FUN_0c6e2980();
      if (piStack_348 != (int *)0x0) {
        func_0x0412a280(piStack_348,lStack_320 - (long)piStack_348);
      }
      func_0x0eee2d70(uVar33);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    fStack_314 = (float)(**(code **)(*plVar8 + 0x30))(plVar8,param_4[1],auStack_228);
    fVar7 = *(float *)(param_4 + 2);
    fVar39 = (float)(**(code **)(*(long *)*param_2 + 0x30))();
    plStack_298 = (long *)*param_2;
    plVar8 = (long *)*param_4;
    puVar10 = (uint *)param_4[1];
    iStack_30c = (int)*(short *)((long)param_2 + 0x14);
    iStack_310 = *(int *)(param_2 + 2);
    iVar16 = *(int *)((long)param_4 + 0x14);
    plVar9 = (long *)param_4[4];
    cVar4 = *(char *)((long)param_2 + 0x16);
    puStack_290 = (undefined8 *)func_0x0cc41df0(0xf6ff9e0,0xf712e90,1);
    puStack_2f0 = (undefined8 *)func_0x0cc41df0(0xf6ff9e0,&DAT_0f6eaec0,1);
    uVar35 = *puVar10 & 0xf;
    uVar17 = puVar10[2] & 0xf;
    uVar36 = *(int *)((long)plVar8 + 0x14) - 1;
    param_2 = (undefined8 *)(ulong)uVar36;
    plVar11 = (long *)*plVar9;
    if (plVar11 != (long *)0x0) {
      lVar31 = *plVar11;
      if (lVar31 != plVar11[1]) {
        uVar25 = (ulong)(uVar17 << 4 | uVar35);
        if ((ulong)(plVar11[1] - lVar31 >> 1) <= uVar25) goto LAB_0c853f81;
        uVar37 = (uint)(short)(*(short *)(lVar31 + uVar25 * 2) - (short)plVar9[1]);
        if ((int)uVar36 < (int)uVar37) {
          uVar37 = uVar36;
        }
        param_2 = (undefined8 *)(ulong)uVar37;
      }
    }
    if (iVar16 < (int)param_2) {
      iVar32 = (int)(fVar39 * _DAT_01198630 + fVar7 / _DAT_01198af0 + _DAT_01198af0);
      uVar36 = (uVar35 * (int)plVar8[3] + uVar17) * *(int *)((long)plVar8 + 0x14);
      puStack_338 = (undefined8 *)(ulong)uVar36;
      uStack_288 = (ulong)(uVar36 + 1);
      iStack_318 = iVar16 + 1;
      iVar6 = -0x7ffffc18;
      iVar23 = -1;
      puStack_3b0 = puStack_2e0;
      puStack_340 = puStack_2e0;
      puStack_388 = puStack_2e8;
      auStack_378._0_16_ = auStack_308;
      puVar29 = puStack_358;
      puVar26 = puStack_2e8;
LAB_0c8536aa:
      iVar14 = (int)param_2;
      param_4 = (long *)(ulong)(uint)((int)puStack_338 + iVar14);
      lVar27 = *plVar8;
      lVar31 = *(long *)(lVar27 + (long)param_4 * 8);
      lVar34 = *(long *)(lVar31 + 0x68);
      lVar28 = *(long *)(lVar34 + 200);
      if (lVar28 != _DAT_0f713fc8) {
        if ((((cVar4 != '\0') &&
             (*(long *)(*(long *)(auStack_378._8_8_ + 0x68) + 200) != _DAT_0f71a0d0)) &&
            (-1 < iVar23)) &&
           ((lVar28 == _DAT_0f6eaec0 || (*(char *)(*(long *)(lVar34 + 0x20) + 2) == '\x01')))) {
          uVar25 = (ulong)(uint)((int)uStack_288 + iVar14);
          lVar12 = *(long *)(lVar27 + uVar25 * 8);
          if (lVar12 != 0) {
            lVar12 = *(long *)(*(long *)(lVar12 + 0x68) + 200);
            uVar33 = 0xf71bef0;
            if ((lVar12 == _DAT_0f714c90) || (uVar33 = 0xf71bf18, lVar12 == _DAT_0f714cb8)) {
              lVar20 = func_0x0cc41df0(0xf6ff9e0,uVar33,1);
              lVar27 = *plVar8;
              lVar34 = *(long *)(lVar31 + 0x68);
              lVar28 = *(long *)(lVar34 + 200);
            }
            else {
              lVar20 = auStack_378._8_8_;
              if (lVar12 != _DAT_0f714ce0) goto LAB_0c8537a0;
            }
            *(long *)(lVar27 + uVar25 * 8) = lVar20;
          }
        }
LAB_0c8537a0:
        param_3 = _DAT_0f70e208;
        if (lVar28 == _DAT_0f6eaec0) {
          iVar23 = -1;
          iVar6 = -0x7ffffc18;
        }
        else {
          if (piStack_348 != piStack_328) {
            puStack_3b0 = puStack_2e0;
            auStack_378._0_16_ = auStack_308;
            puVar29 = puStack_358;
            piVar24 = piStack_348;
            puVar26 = puStack_2e8;
            auVar44 = auStack_308;
            do {
              if ((*piVar24 <= iVar14) && (iVar14 <= piVar24[1])) {
                if (*(undefined8 **)(piVar24 + 2) != (undefined8 *)0x0) {
                  puStack_3b0 = *(undefined8 **)(piVar24 + 2);
                }
                if (*(undefined8 **)(piVar24 + 4) != (undefined8 *)0x0) {
                  puVar26 = *(undefined8 **)(piVar24 + 4);
                }
                auVar2 = *(undefined1 (*) [16])(piVar24 + 6);
                auVar40._0_4_ = -(uint)(auVar2._0_4_ == _DAT_014e8c20);
                auVar40._4_4_ = -(uint)(auVar2._4_4_ == _UNK_014e8c24);
                auVar40._8_4_ = -(uint)(auVar2._8_4_ == _UNK_014e8c28);
                auVar40._12_4_ = -(uint)(auVar2._12_4_ == _UNK_014e8c2c);
                auVar42._4_4_ = auVar40._0_4_;
                auVar42._0_4_ = auVar40._4_4_;
                auVar42._8_4_ = auVar40._12_4_;
                auVar42._12_4_ = auVar40._8_4_;
                auVar44 = ~(auVar42 & auVar40) & auVar2 | auVar44 & auVar42 & auVar40;
                auStack_378._0_16_ = auVar44;
                if (*(undefined8 **)(piVar24 + 10) != (undefined8 *)0x0) {
                  puVar29 = *(undefined8 **)(piVar24 + 10);
                }
              }
              piVar24 = piVar24 + 0xe;
            } while (piVar24 != piStack_328);
          }
          if (puStack_330 != (undefined8 *)0x0) {
            puStack_3b0 = puStack_330;
            puStack_388 = puStack_330;
            puStack_340 = puStack_330;
            puVar26 = puStack_330;
          }
          iVar15 = iStack_30c;
          if (iStack_310 == 0) {
            iVar15 = iVar6;
          }
          if (((long)_DAT_0f70e208 - (long)_DAT_0f70e200 == -8) ||
             (_DAT_0f70e208 != (undefined8 *)0x0 && _DAT_0f70e200 == (undefined8 *)0x0))
          goto LAB_0c853f35;
          puVar21 = _DAT_0f70e200;
          if (_DAT_0f70e208 == _DAT_0f70e200) {
LAB_0c853916:
            if (puVar21 != _DAT_0f70e208) {
              if (iVar23 == -1) {
                puStack_360 = (undefined8 *)auStack_378._8_8_;
                puVar21 = puStack_2f0;
                if ((0 < iVar32) &&
                   (puVar21 = puStack_340, puStack_360 = puStack_388,
                   iVar14 <= iVar15 + 1 && iVar15 + -4 <= iVar14)) {
                  puVar21 = puStack_3b0;
                  puStack_360 = puVar26;
                }
                if ((iVar14 < iVar15) && (*(long *)(puVar21[0xd] + 200) == _DAT_0f6eaec0)) {
                  lVar31 = func_0x0cc41df0(0xf6ff9e0,&DAT_0f713f00,1);
                  puVar21 = puVar29;
                  if (puVar29[0x22] == *(long *)(lVar31 + 0x110)) {
                    puVar21 = puStack_290;
                  }
                  if (_DAT_01198788 <= fStack_314) {
                    puVar21 = puVar29;
                  }
                }
                iVar23 = iVar32;
                puStack_340 = puVar21;
                if (iVar14 < iVar15 + -1) {
                  if (iVar14 == iStack_318 || iVar14 < iVar15 - (iStack_39c + iVar32)) {
                    *(long *)(*plVar8 + (long)param_4 * 8) = auStack_378._0_8_;
                    puStack_388 = (undefined8 *)auStack_378._8_8_;
                    puStack_340 = puStack_2f0;
                  }
                  else {
                    *(undefined8 **)(*plVar8 + (long)param_4 * 8) = puStack_360;
                    puStack_388 = puStack_360;
                  }
                }
                else {
                  *(undefined8 **)(*plVar8 + (long)param_4 * 8) = puVar21;
                  puStack_388 = puStack_360;
                }
              }
              else if (iVar23 < 1) {
                *(undefined8 *)(lVar27 + (long)param_4 * 8) = auStack_378._8_8_;
              }
              else {
                *(undefined8 **)(lVar27 + (long)param_4 * 8) = puStack_388;
                iVar23 = iVar23 + -1;
                if (iVar23 == 0) {
                  if (((long)_DAT_0f713d18 - (long)_DAT_0f713d10 != -8) &&
                     (_DAT_0f713d18 == (undefined8 *)0x0 || _DAT_0f713d10 != (undefined8 *)0x0)) {
                    puVar21 = _DAT_0f713d10;
                    if (_DAT_0f713d18 == _DAT_0f713d10) {
LAB_0c853b58:
                      if (puVar21 == _DAT_0f713d18) {
                        iVar23 = 0;
                      }
                      else {
                        iVar18 = (**(code **)(*plStack_298 + 0x18))(plStack_298,4);
                        iVar23 = iVar14 - iVar15;
                        if (iVar14 - iVar15 < 1) {
                          iVar23 = 0;
                        }
                        puStack_388 = (undefined8 *)func_0x0cc41df0(0xf6ff9e0,0xf71bef0,1);
                        iVar23 = iVar18 + iVar23;
                      }
                    }
                    else {
                      do {
                        if (*(long *)(puStack_388[0xd] + 200) == *(long *)*puVar21)
                        goto LAB_0c853b58;
                        puVar21 = puVar21 + 1;
                        iVar23 = 0;
                      } while (puVar21 != _DAT_0f713d18);
                    }
                    goto LAB_0c85369e;
                  }
                  goto LAB_0c853f35;
                }
              }
              goto LAB_0c85369e;
            }
          }
          else {
            do {
              if (lVar28 == *(long *)*puVar21) goto LAB_0c853916;
              puVar21 = puVar21 + 1;
            } while (puVar21 != _DAT_0f70e208);
          }
          if (lVar28 == _DAT_0f713f00) {
            *(undefined8 **)(lVar27 + (long)param_4 * 8) = puVar29;
          }
          if (((((**(byte **)(lVar34 + 0x20) | 8) == 0xd) || (lVar28 == _DAT_0f71b278)) ||
              (lVar28 == _DAT_0f71b250)) && (iVar6 < iVar14 + 1)) {
            iVar6 = iVar14 + 1;
          }
        }
      }
LAB_0c85369e:
      param_2 = (undefined8 *)(ulong)(iVar14 - 1U);
      if ((int)(iVar14 - 1U) <= iVar16) goto LAB_0c853bd8;
      goto LAB_0c8536aa;
    }
LAB_0c853bd8:
    if (piStack_348 != (int *)0x0) {
      func_0x0412a280(piStack_348,lStack_320 - (long)piStack_348);
    }
  }
  return;
LAB_0c853f35:
  func_0x04890760();
LAB_0c853f3a:
  iVar16 = FUN_04108328(&DAT_0f5573f8);
  if (iVar16 != 0) {
    LOCK();
    UNLOCK();
    _DAT_0f5573f0 = _DAT_0f556458;
    _DAT_0f556458 = _DAT_0f556458 + 1;
    func_0x0410844d(&DAT_0f5573f8);
  }
  goto LAB_0c852e15;
}


