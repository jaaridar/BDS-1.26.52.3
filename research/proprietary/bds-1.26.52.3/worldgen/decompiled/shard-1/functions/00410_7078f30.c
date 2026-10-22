/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x7178f30 (ELF vaddr 0x7078f30)
 * Label: caller-of-callee
 * Body:  [[07178f30, 071792bb] [071792c0, 07179439] [07179440, 071794a3] [071794b0, 0717975a] [07179760, 0717980b] [07179810, 0717985b] [07179860, 07179ab0] [07179ac0, 07179b05] [07179b10, 07179c60] [07179c70, 07179d2b] [07179d30, 07179e69] [07179e70, 07179fb4] [07179fc0, 0717a06d] [0717a070, 0717a0ec] [0717a0f0, 0717a1a7] [0717a1b0, 0717a26d] [0717a270, 0717a46e] [0717a470, 0717a6dd] [0717a6e0, 0717a791] [0717a7a0, 0717a819] [0717a820, 0717a92b] [0717a930, 0717a966] [0717a970, 0717aab9] [0717aac0, 0717aca9] [0717acb0, 0717adfc] [0717ae00, 0717aeb4] [0717aec0, 0717af3c] [0717af40, 0717afe7] [0717aff0, 0717bd04] [0717bd10, 0717bee2] [0717bef0, 0717c159] [0717c160, 0717c321] [0717c330, 0717cd27] [0717cd30, 0717ce69] [0717d272, 0717d30b]]
 * Ghidra: FUN_07178f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_07178f30(long *param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  byte bVar5;
  short sVar6;
  long **pplVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  byte bVar20;
  ushort uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  long **pplVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  int *piVar30;
  ulong uVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  undefined8 uVar35;
  uint uVar36;
  undefined4 *puVar37;
  ulong uVar38;
  long lVar39;
  undefined4 *puVar40;
  ulong uVar41;
  long **unaff_RBX;
  long *plVar42;
  int *piVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  byte *pbVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  short *psVar51;
  short *psVar52;
  ulong uVar53;
  undefined8 *puVar54;
  long *plVar55;
  ulong uVar56;
  long *in_FS_OFFSET;
  bool bVar57;
  undefined4 uVar58;
  long lStack_5d8;
  undefined8 uStack_548;
  undefined8 uStack_540;
  long *plStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long *plStack_4d0;
  undefined *puStack_4c8;
  long *plStack_4c0;
  long *plStack_4b8;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long *plStack_450;
  undefined *puStack_448;
  long *plStack_440;
  long *plStack_438;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long *plStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 uStack_3b8;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  long **pplStack_380;
  long *plStack_378;
  undefined3 uStack_370;
  undefined5 uStack_36d;
  undefined3 uStack_368;
  undefined8 uStack_365;
  undefined2 uStack_35d;
  undefined1 uStack_35b;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long *plStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined4 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  int *piStack_138;
  undefined *puStack_130;
  long *plStack_128;
  long *plStack_120;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_38;
  
  cVar19 = (**(code **)(**(long **)(param_1[3] + 0x1d0) + 0x9f0))();
  if ((cVar19 != '\0') || (lVar26 = *(long *)(*(long *)(param_1[3] + 0x90) + 0x350), lVar26 == 0))
  goto LAB_07179375;
  if (param_1[4] == 0) {
LAB_07179021:
    lStack_148 = lVar26;
    lStack_300 = func_0x07174f40(param_1);
    if (lStack_300 != 0) {
      pplVar25 = (long **)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      plVar28 = param_1;
      if (pplVar25 == (long **)0x0) goto LAB_0717ce10;
      do {
        *pplVar25 = (long *)&UNK_0f3eb6b0;
        pplVar25[1] = (long *)0x0;
        pplVar25[2] = (long *)0x0;
        pplVar25[3] = (long *)0x0;
        pplVar25[4] = (long *)0x0;
        pplVar25[5] = (long *)0x0;
        pplVar25[6] = (long *)0x0;
        plVar34 = (long *)plVar28[4];
        plVar28[4] = (long)pplVar25;
        if (plVar34 != (long *)0x0) {
          (**(code **)(*plVar34 + 8))();
        }
        if (*(long *)(lStack_300 + 0x18) == *(long *)(lStack_300 + 0x20)) {
          uVar27 = 0;
        }
        else {
          uVar27 = (ulong)((int)((ulong)(*(long *)(lStack_300 + 0x20) - *(long *)(lStack_300 + 0x18)
                                        ) >> 3) * -0x49249249 - 1);
        }
        uVar36 = (uint)uVar27;
        plVar34 = *(long **)(param_1[3] + 0x120);
        if (plVar34 != (long *)0x0) {
          uVar24 = 0;
          if (((0x328 < ((int)plVar34[1] - (int)*plVar34 & 0x7fff0U)) &&
              (unaff_RBX = *(long ***)(*plVar34 + 0x328), uVar24 = 0, unaff_RBX != (long **)0x0)) &&
             (cVar19 = (*(code *)(*unaff_RBX)[3])(unaff_RBX), cVar19 == '\x02')) {
            uVar24 = *(uint *)((long)unaff_RBX + 0xc);
          }
          if (uVar36 < uVar24) {
            uVar24 = uVar36;
          }
          plVar28 = *(long **)(param_1[3] + 0x120);
          if (plVar28 != (long *)0x0) {
            if (((0x328 < ((int)plVar28[1] - (int)*plVar28 & 0x7fff0U)) &&
                (unaff_RBX = *(long ***)(*plVar28 + 0x328), unaff_RBX != (long **)0x0)) &&
               ((cVar19 = (*(code *)(*unaff_RBX)[3])(unaff_RBX), cVar19 == '\x02' &&
                (*(uint *)((long)unaff_RBX + 0xc) != uVar24)))) {
              *(uint *)((long)unaff_RBX + 0xc) = uVar24;
              uVar21 = (*(code *)(*unaff_RBX)[2])(unaff_RBX);
              if (0x8c < uVar21) goto LAB_0717ce49;
              plVar28[(ulong)(uVar21 >> 6) + 3] =
                   plVar28[(ulong)(uVar21 >> 6) + 3] | 1L << ((byte)uVar21 & 0x3f);
            }
            plVar34 = *(long **)(param_1[3] + 0x120);
            if (plVar34 != (long *)0x0) {
              if (((0x330 < ((int)plVar34[1] - (int)*plVar34 & 0x7fff8U)) &&
                  (unaff_RBX = *(long ***)(*plVar34 + 0x330), unaff_RBX != (long **)0x0)) &&
                 ((cVar19 = (*(code *)(*unaff_RBX)[3])(unaff_RBX), cVar19 == '\x02' &&
                  (*(uint *)((long)unaff_RBX + 0xc) != uVar36)))) {
                *(uint *)((long)unaff_RBX + 0xc) = uVar36;
                uVar21 = (*(code *)(*unaff_RBX)[2])(unaff_RBX);
                if (0x8c < uVar21) {
LAB_0717ce49:
                  uVar35 = func_0x04882ef0(&UNK_012d4a56);
                  uVar35 = func_0x04882e20(uVar35);
                  uVar35 = func_0x04882e20(uVar35);
                  if ((uStack_388 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uStack_388 & 0xff00ffffffffffff) - 8);
                  }
                  uStack_388 = 0;
                  if ((uStack_390 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uStack_390 & 0xff00ffffffffffff) - 8);
                  }
                  uVar35 = _Unwind_Resume(uVar35);
                  uVar35 = func_0x04882e20(uVar35);
                  func_0x04882e20(uVar35);
                  pcVar10 = (code *)swi(3);
                  uVar27 = (*pcVar10)();
                  return uVar27;
                }
                plVar34[(ulong)(uVar21 >> 6) + 3] =
                     plVar34[(ulong)(uVar21 >> 6) + 3] | 1L << ((byte)uVar21 & 0x3f);
              }
              if (*(long **)(param_1[3] + 0x1d0) == (long *)0x0) {
                unaff_RBX = (long **)*in_FS_OFFSET;
                if (*(char *)(unaff_RBX + -0x195) != '\0') goto joined_r0x07179298;
                unaff_RBX[-0x2d5] = (long *)&UNK_0f147b18;
                *(undefined1 *)(unaff_RBX + -0x2d4) = 0;
                *(undefined1 *)(unaff_RBX + -0x197) = 0;
                if (*(char *)(unaff_RBX + -0xb) == '\0') goto LAB_0717ce31;
                goto LAB_071793b4;
              }
              pplVar25 = (long **)(**(code **)(**(long **)(param_1[3] + 0x1d0) + 0xa78))();
              while (uVar36 + 1 != 0) {
                uStack_140 = (ulong)(uVar36 + 1);
                lStack_2f8 = *in_FS_OFFSET;
                lStack_150 = lStack_2f8 + -0xa40;
                lStack_250 = lStack_2f8 + -0x16a8;
                uVar27 = 0;
LAB_07179459:
                lVar26 = *(long *)(lStack_300 + 0x18);
                lVar39 = uVar27 * 0x38;
                uStack_398 = *(undefined8 *)(lVar26 + 0x20 + lVar39);
                uVar31 = *(ulong *)(lVar26 + 0x28 + lVar39);
                uStack_248 = uVar27;
                if ((uVar31 & 0x80000000000000) != 0) {
                  lVar46 = *(long *)((uVar31 & 0xff00ffffffffffff) - 8);
                  lVar49 = lVar46 + 9;
                  plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar49,8);
                  if (plVar28 == (long *)0x0 && lVar49 != 0) {
                    func_0x0eec74c0(lVar49,8);
                  }
                  *plVar28 = lVar46;
                  memcpy(plVar28 + 1,uVar31 & 0xff00ffffffffffff,lVar46);
                  *(undefined1 *)((long)plVar28 + lVar46 + 8) = 0;
                  uVar31 = (ulong)(plVar28 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                }
                uStack_388 = 0;
                uVar48 = *(ulong *)(lVar39 + lVar26 + 0x30);
                uStack_390 = uVar31;
                if ((uVar48 & 0x80000000000000) != 0) {
                  lVar46 = *(long *)((uVar48 & 0xff00ffffffffffff) - 8);
                  lVar26 = lVar46 + 9;
                  plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar26,8);
                  if (lVar26 != 0 && plVar28 == (long *)0x0) {
                    func_0x0eec74c0(lVar26,8);
                  }
                  *plVar28 = lVar46;
                  memcpy(plVar28 + 1,uVar48 & 0xff00ffffffffffff,lVar46);
                  *(undefined1 *)((long)plVar28 + lVar46 + 8) = 0;
                  uVar48 = (ulong)(plVar28 + 1) & 0xff00ffffffffffff | 0x80000000000000;
                }
                puVar40 = (undefined4 *)(lVar39 + *(long *)(lStack_300 + 0x18));
                lVar26 = param_1[4];
                pplVar7 = *(long ***)(lVar26 + 0x28);
                unaff_RBX = *(long ***)(lVar26 + 0x30);
                uStack_388 = uVar48;
                if (pplVar7 < unaff_RBX) {
                  *(undefined4 *)pplVar7 = *puVar40;
                  lVar39 = (long)pplVar7 + 4;
LAB_07179721:
                  *(long *)(lVar26 + 0x28) = lVar39;
                  piVar30 = *(int **)(puVar40 + 2);
                  piStack_138 = *(int **)(puVar40 + 4);
                  if (piVar30 != piStack_138) {
                    do {
                      puVar40 = *(undefined4 **)(piVar30 + 2);
                      puVar37 = *(undefined4 **)(piVar30 + 4);
                      uVar31 = ((long)puVar37 - (long)puVar40 >> 3) * -0x71c71c71c71c71c7;
                      uVar48 = (ulong)*piVar30;
                      uVar27 = uVar31;
                      if (((long)uVar48 < 1) ||
                         (uVar27 = uVar48, uVar31 < uVar48 || uVar31 - uVar48 == 0)) {
                        uVar48 = uVar27;
                        if (puVar40 != puVar37) goto LAB_07179a15;
                      }
                      else {
                        iVar22 = 0;
                        for (; puVar40 != puVar37; puVar40 = puVar40 + 0x12) {
                          iVar22 = iVar22 + puVar40[2];
                        }
                        if (*(long **)(param_1[3] + 0x1d0) == (long *)0x0) {
                          lStack_5d8 = lStack_250;
                          if (*(char *)(lStack_2f8 + -0xca8) == '\0') {
                            *(undefined **)(lStack_2f8 + -0x16a8) = &UNK_0f147b18;
                            *(undefined1 *)(lStack_2f8 + -0x16a0) = 0;
                            *(undefined1 *)(lStack_2f8 + -0xcb8) = 0;
                            if (*(char *)(lStack_2f8 + -0x58) == '\0') {
                              func_0x0ee49c60(lStack_2f8 + -0xa40);
                              *(undefined1 *)(lStack_2f8 + -0x58) = 1;
                            }
                            lVar26 = lStack_2f8;
                            *(long *)(lStack_2f8 + -0xcb0) = lStack_150;
                            func_0x0417d010(&UNK_08b54510,lStack_2f8 + -0x16a8,0xf53dab8);
                            *(undefined1 *)(lVar26 + -0xca8) = 1;
                            lStack_5d8 = lStack_250;
                          }
                        }
                        else {
                          lStack_5d8 = (**(code **)(**(long **)(param_1[3] + 0x1d0) + 0xa78))();
                        }
                        lVar26 = 8;
                        uVar27 = 0;
                        do {
                          while( true ) {
                            lVar39 = *(long *)(piVar30 + 2);
                            puVar54 = (undefined8 *)(uVar27 * 0x48 + lVar39);
                            if ((long)puVar37 - (long)puVar54 == 0) break;
                            iVar23 = (**(code **)(**(long **)(lStack_5d8 + 0x9f8) + 0x18))
                                               (*(long **)(lStack_5d8 + 0x9f8),iVar22);
                            lVar46 = ((long)puVar37 - (long)puVar54 >> 3) * -0x71c71c71c71c71c7;
                            piVar43 = (int *)(lVar39 + lVar26);
                            lVar39 = 0;
                            do {
                              iVar23 = iVar23 - *piVar43;
                              if (iVar23 < 0) {
                                if (-1 < (int)(uint)lVar39) {
                                  uVar31 = (ulong)((uint)lVar39 & 0x7fffffff);
                                  iVar22 = iVar22 - *(int *)(puVar54 + uVar31 * 9 + 1);
                                  uVar58 = *(undefined4 *)(puVar54 + 2);
                                  plStack_538 = (long *)CONCAT44(plStack_538._4_4_,uVar58);
                                  puVar15 = (undefined *)*puVar54;
                                  plVar28 = (long *)puVar54[1];
                                  uVar35 = puVar54[5];
                                  uVar11 = *(undefined4 *)(puVar54 + 3);
                                  uVar12 = *(undefined4 *)((long)puVar54 + 0x1c);
                                  uVar13 = *(undefined4 *)(puVar54 + 4);
                                  uVar14 = *(undefined4 *)((long)puVar54 + 0x24);
                                  puVar54[3] = 0;
                                  puVar54[4] = 0;
                                  puVar54[5] = 0;
                                  uVar8 = puVar54[8];
                                  uVar16 = puVar54[6];
                                  uVar17 = puVar54[7];
                                  puVar54[6] = 0;
                                  puVar54[7] = 0;
                                  puVar54[8] = 0;
                                  uVar18 = (puVar54 + uVar31 * 9)[1];
                                  *puVar54 = puVar54[uVar31 * 9];
                                  puVar54[1] = uVar18;
                                  *(undefined4 *)(puVar54 + 2) =
                                       *(undefined4 *)(puVar54 + uVar31 * 9 + 2);
                                  uVar18 = (puVar54 + uVar31 * 9 + 3)[1];
                                  puVar54[3] = puVar54[uVar31 * 9 + 3];
                                  puVar54[4] = uVar18;
                                  uVar18 = (puVar54 + uVar31 * 9 + 5)[1];
                                  puVar54[5] = puVar54[uVar31 * 9 + 5];
                                  puVar54[6] = uVar18;
                                  uVar18 = (puVar54 + uVar31 * 9 + 7)[1];
                                  puVar54[7] = puVar54[uVar31 * 9 + 7];
                                  puVar54[8] = uVar18;
                                  *(undefined4 *)(puVar54 + uVar31 * 9 + 2) = uVar58;
                                  uStack_548._0_4_ = SUB84(puVar15,0);
                                  uStack_548._4_4_ = (undefined4)((ulong)puVar15 >> 0x20);
                                  uStack_540._0_4_ = SUB84(plVar28,0);
                                  uStack_540._4_4_ = (undefined4)((ulong)plVar28 >> 0x20);
                                  puVar9 = puVar54 + uVar31 * 9;
                                  *(undefined4 *)puVar9 = (undefined4)uStack_548;
                                  *(undefined4 *)((long)puVar9 + 4) = uStack_548._4_4_;
                                  *(undefined4 *)(puVar9 + 1) = (undefined4)uStack_540;
                                  *(undefined4 *)((long)puVar9 + 0xc) = uStack_540._4_4_;
                                  puVar9 = puVar54 + uVar31 * 9 + 3;
                                  *(undefined4 *)puVar9 = uVar11;
                                  *(undefined4 *)((long)puVar9 + 4) = uVar12;
                                  *(undefined4 *)(puVar9 + 1) = uVar13;
                                  *(undefined4 *)((long)puVar9 + 0xc) = uVar14;
                                  puVar54[uVar31 * 9 + 5] = uVar35;
                                  puVar54[uVar31 * 9 + 6] = uVar16;
                                  (puVar54 + uVar31 * 9 + 6)[1] = uVar17;
                                  puVar54[uVar31 * 9 + 8] = uVar8;
                                  uStack_548 = puVar15;
                                  uStack_540 = plVar28;
                                }
                                break;
                              }
                              lVar39 = lVar39 + 1;
                              piVar43 = piVar43 + 0x12;
                            } while (lVar46 + (ulong)(lVar46 == 0) != lVar39);
                            uVar27 = uVar27 + 1;
                            lVar26 = lVar26 + 0x48;
                            if (uVar27 == uVar48) goto LAB_071799de;
                          }
                          uVar27 = uVar27 + 1;
                          lVar26 = lVar26 + 0x48;
                        } while (uVar27 != uVar48);
LAB_071799de:
                        func_0x07034350(*(undefined8 *)(piVar30 + 2),puVar54 + 9,lStack_5d8);
                        puVar40 = *(undefined4 **)(piVar30 + 2);
                        puVar37 = *(undefined4 **)(piVar30 + 4);
                        if (puVar40 != puVar37) {
LAB_07179a15:
                          uStack_240 = 0;
                          do {
                            if ((*(long *)(puVar40 + 0xc) != *(long *)(puVar40 + 0xe)) &&
                               (plVar34 = *(long **)(puVar40 + 6),
                               plVar34 != *(long **)(puVar40 + 8))) {
                              plVar55 = (long *)param_1[3];
                              lStack_2a8 = 0;
                              puStack_2a0 = (undefined8 *)0x0;
                              uStack_2b8 = 0;
                              lStack_2b0 = 0;
                              uStack_2c8 = 0;
                              uStack_2c0 = 0;
                              uStack_2d8 = 0;
                              uStack_2d0 = 0;
                              plVar28 = (long *)plVar55[0x3a];
                              plStack_2e0 = plVar55;
                              if ((plVar28 == (long *)0x0) || (plVar55[0x4f] == -1)) {
                                uStack_2c8 = 0;
                              }
                              else {
                                uStack_2c8 = (**(code **)(*plVar28 + 0x1f8))
                                                       (plVar28,plVar55[0x4f],0);
                              }
                              lVar26 = *plVar34;
                              uVar36 = 0;
                              uVar27 = 0;
                              if (0 < (int)((ulong)(plVar34[1] - lVar26) >> 3) * -0xf0f0f0f) {
                                uVar31 = 0;
                                uVar27 = 0;
                                do {
                                  iVar22 = (int)uVar27;
                                  plVar28 = (long *)(uVar31 * 0x88);
                                  cVar19 = func_0x0b0302a0((long)plVar28 + lVar26 + 0x30,plVar55,
                                                           &plStack_2e0);
                                  if (cVar19 != '\0') {
                                    if (uVar31 != uVar27) {
                                      lVar26 = *plVar34;
                                      plStack_538 = (long *)CONCAT44(plStack_538._4_4_,
                                                                     *(undefined4 *)
                                                                      (lVar26 + 0x10 + (long)plVar28
                                                                      ));
                                      uStack_548 = *(undefined **)(lVar26 + (long)plVar28);
                                      uStack_540 = (long *)((undefined8 *)(lVar26 + (long)plVar28))
                                                           [1];
                                      uStack_520 = *(undefined8 *)(lVar26 + 0x28 + (long)plVar28);
                                      puVar4 = (ulong *)(lVar26 + 0x18 + (long)plVar28);
                                      uStack_530 = *puVar4;
                                      uStack_528 = puVar4[1];
                                      puVar54 = (undefined8 *)(lVar26 + 0x18 + (long)plVar28);
                                      *puVar54 = 0;
                                      puVar54[1] = 0;
                                      *(undefined8 *)(lVar26 + 0x28 + (long)plVar28) = 0;
                                      puStack_518 = &UNK_0f395808;
                                      puStack_510 = (undefined *)
                                                    CONCAT44(puStack_510._4_4_,
                                                             *(undefined4 *)
                                                              (lVar26 + 0x38 + (long)plVar28));
                                      pplStack_380 = &plStack_508;
                                      plStack_508 = (long *)0x0;
                                      plStack_500 = (long *)0x0;
                                      plStack_4f8 = (long *)0x0;
                                      plVar42 = *(long **)(lVar26 + 0x40 + (long)plVar28);
                                      plVar33 = *(long **)(lVar26 + 0x48 + (long)plVar28);
                                      plStack_378 = (long *)((ulong)plStack_378 & 0xffffffffffffff00
                                                            );
                                      lVar39 = (long)plVar33 - (long)plVar42;
                                      if (lVar39 != 0) {
                                        if (-1 < lVar39) {
                                          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,lVar39);
                                          if (plVar32 == (long *)0x0) {
                                            func_0x0eec74c0(lVar39,0);
                                          }
                                          plStack_4f8 = (long *)(lVar39 + (long)plVar32);
                                          plStack_500 = plVar32;
                                          do {
                                            lVar39 = plVar42[1];
                                            lVar46 = plVar42[1];
                                            *plStack_500 = *plVar42;
                                            plStack_500[1] = lVar46;
                                            if (lVar39 != 0) {
                                              LOCK();
                                              plVar2 = (long *)(lVar39 + 8);
                                              *plVar2 = *plVar2 + 1;
                                              UNLOCK();
                                            }
                                            plVar42 = plVar42 + 2;
                                            plStack_500 = plStack_500 + 2;
                                            plStack_508 = plVar32;
                                          } while (plVar42 != plVar33);
                                          goto LAB_07179ca2;
                                        }
                                        func_0x049d03a0();
LAB_0717cdf2:
                                        func_0x049d0440();
                                        goto LAB_0717cdf7;
                                      }
LAB_07179ca2:
                                      puVar3 = (undefined4 *)(lVar26 + (long)plVar28);
                                      pplStack_380 = &plStack_4f0;
                                      plStack_4f0 = (long *)0x0;
                                      plStack_4e8 = (long *)0x0;
                                      lStack_4e0 = 0;
                                      plVar42 = *(long **)(puVar3 + 0x16);
                                      plVar33 = *(long **)(puVar3 + 0x18);
                                      plStack_378 = (long *)((ulong)plStack_378 & 0xffffffffffffff00
                                                            );
                                      lVar39 = (long)plVar33 - (long)plVar42;
                                      if (lVar39 != 0) {
                                        if (lVar39 < 0) goto LAB_0717cdf2;
                                        plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                                    (&DAT_0f5463b0,lVar39);
                                        if (plVar32 == (long *)0x0) {
                                          func_0x0eec74c0(lVar39,0);
                                        }
                                        lStack_4e0 = lVar39 + (long)plVar32;
                                        plStack_4e8 = plVar32;
                                        do {
                                          lVar39 = plVar42[1];
                                          lVar46 = plVar42[1];
                                          *plStack_4e8 = *plVar42;
                                          plStack_4e8[1] = lVar46;
                                          if (lVar39 != 0) {
                                            LOCK();
                                            plVar2 = (long *)(lVar39 + 8);
                                            *plVar2 = *plVar2 + 1;
                                            UNLOCK();
                                          }
                                          plVar42 = plVar42 + 2;
                                          plStack_4e8 = plStack_4e8 + 2;
                                          plStack_4f0 = plVar32;
                                        } while (plVar42 != plVar33);
                                      }
                                      puVar54 = (undefined8 *)((long)iVar22 * 0x88 + lVar26);
                                      puStack_518 = &UNK_0f299f40;
                                      lStack_4d8 = *(long *)(puVar3 + 0x1c);
                                      plStack_4d0 = *(long **)(puVar3 + 0x1e);
                                      puStack_4c8 = *(undefined **)(puVar3 + 0x20);
                                      *(undefined8 *)(puVar3 + 0x1c) = 0;
                                      *(undefined8 *)(puVar3 + 0x1e) = 0;
                                      *(undefined8 *)(puVar3 + 0x20) = 0;
                                      uVar58 = *(undefined4 *)((long)puVar54 + 4);
                                      uVar11 = *(undefined4 *)(puVar54 + 1);
                                      uVar12 = *(undefined4 *)((long)puVar54 + 0xc);
                                      *puVar3 = *(undefined4 *)puVar54;
                                      puVar3[1] = uVar58;
                                      puVar3[2] = uVar11;
                                      puVar3[3] = uVar12;
                                      puVar3[4] = *(undefined4 *)(puVar54 + 2);
                                      if ((*(byte *)(puVar3 + 6) & 1) != 0) {
                                        func_0x0412a280(*(undefined8 *)(puVar3 + 10),
                                                        *(ulong *)(puVar3 + 6) & 0xfffffffffffffffe)
                                        ;
                                      }
                                      *(undefined8 *)((long)plVar28 + lVar26 + 0x28) = puVar54[5];
                                      uVar58 = *(undefined4 *)((long)puVar54 + 0x1c);
                                      uVar11 = *(undefined4 *)(puVar54 + 4);
                                      uVar12 = *(undefined4 *)((long)puVar54 + 0x24);
                                      *(undefined4 *)((long)plVar28 + lVar26 + 0x18) =
                                           *(undefined4 *)(puVar54 + 3);
                                      *(undefined4 *)((long)plVar28 + lVar26 + 0x1c) = uVar58;
                                      *(undefined4 *)((long)plVar28 + lVar26 + 0x20) = uVar11;
                                      *(undefined4 *)((long)plVar28 + lVar26 + 0x24) = uVar12;
                                      *(undefined2 *)(puVar54 + 3) = 0;
                                      puVar3[0xe] = *(undefined4 *)(puVar54 + 7);
                                      if (uVar31 != (long)iVar22) {
                                        func_0x049d0670((long)plVar28 + lVar26 + 0x40,puVar54[8],
                                                        puVar54[9],
                                                        (long)(puVar54[9] - puVar54[8]) >> 4);
                                        func_0x049d09c0(puVar3 + 0x16,puVar54[0xb],puVar54[0xc],
                                                        (long)(puVar54[0xc] - puVar54[0xb]) >> 4);
                                      }
                                      plVar28 = (long *)(puVar3 + 0x1c);
                                      lVar26 = *plVar28;
                                      if (lVar26 != 0) {
                                        lVar39 = *(long *)(puVar3 + 0x1e);
                                        lVar46 = lVar26;
                                        if (lVar26 != lVar39) {
                                          do {
                                            plVar42 = *(long **)(lVar39 + -8);
                                            *(undefined8 *)(lVar39 + -8) = 0;
                                            if (plVar42 != (long *)0x0) {
                                              (**(code **)(*plVar42 + 8))();
                                            }
                                            lVar39 = lVar39 + -8;
                                          } while (lVar39 != lVar26);
                                          lVar46 = *plVar28;
                                        }
                                        *(long *)(puVar3 + 0x1e) = lVar26;
                                        func_0x0412a280(lVar46,*(long *)(puVar3 + 0x20) - lVar46);
                                        *plVar28 = 0;
                                        *(undefined8 *)(puVar3 + 0x1e) = 0;
                                        *(undefined8 *)(puVar3 + 0x20) = 0;
                                      }
                                      uVar35 = puVar54[0xf];
                                      *(undefined8 *)(puVar3 + 0x1c) = puVar54[0xe];
                                      *(undefined8 *)(puVar3 + 0x1e) = uVar35;
                                      *(undefined8 *)(puVar3 + 0x20) = puVar54[0x10];
                                      puVar54[0xe] = 0;
                                      puVar54[0xf] = 0;
                                      puVar54[0x10] = 0;
                                      *(undefined4 *)puVar54 = (undefined4)uStack_548;
                                      *(undefined4 *)((long)puVar54 + 4) = uStack_548._4_4_;
                                      *(undefined4 *)(puVar54 + 1) = (undefined4)uStack_540;
                                      *(undefined4 *)((long)puVar54 + 0xc) = uStack_540._4_4_;
                                      *(undefined4 *)(puVar54 + 2) = plStack_538._0_4_;
                                      if ((*(byte *)(puVar54 + 3) & 1) != 0) {
                                        func_0x0412a280(puVar54[5],puVar54[3] & 0xfffffffffffffffe);
                                      }
                                      puVar54[5] = uStack_520;
                                      *(undefined4 *)(puVar54 + 3) = (undefined4)uStack_530;
                                      *(undefined4 *)((long)puVar54 + 0x1c) = uStack_530._4_4_;
                                      *(undefined4 *)(puVar54 + 4) = (undefined4)uStack_528;
                                      *(undefined4 *)((long)puVar54 + 0x24) = uStack_528._4_4_;
                                      uStack_530 = uStack_530 & 0xffffffffffff0000;
                                      *(undefined4 *)(puVar54 + 7) = puStack_510._0_4_;
                                      if (puVar54 != &uStack_548) {
                                        func_0x049d0670(puVar54 + 8,plStack_508,plStack_500,
                                                        (long)plStack_500 - (long)plStack_508 >> 4);
                                        func_0x049d09c0(puVar54 + 0xb,plStack_4f0,plStack_4e8,
                                                        (long)plStack_4e8 - (long)plStack_4f0 >> 4);
                                      }
                                      plVar28 = puVar54 + 0xe;
                                      lVar26 = *plVar28;
                                      if (lVar26 != 0) {
                                        lVar39 = puVar54[0xf];
                                        lVar46 = lVar26;
                                        if (lVar26 != lVar39) {
                                          do {
                                            plVar42 = *(long **)(lVar39 + -8);
                                            *(undefined8 *)(lVar39 + -8) = 0;
                                            if (plVar42 != (long *)0x0) {
                                              (**(code **)(*plVar42 + 8))();
                                            }
                                            lVar39 = lVar39 + -8;
                                          } while (lVar39 != lVar26);
                                          lVar46 = *plVar28;
                                        }
                                        puVar54[0xf] = lVar26;
                                        func_0x0412a280(lVar46,puVar54[0x10] - lVar46);
                                        *plVar28 = 0;
                                        puVar54[0xf] = 0;
                                        puVar54[0x10] = 0;
                                      }
                                      plVar42 = plStack_4f0;
                                      puVar54[0xe] = lStack_4d8;
                                      puVar54[0xf] = plStack_4d0;
                                      puVar54[0x10] = puStack_4c8;
                                      lStack_4d8 = 0;
                                      plStack_4d0 = (long *)0x0;
                                      puStack_4c8 = (undefined *)0x0;
                                      puStack_518 = &UNK_0f395808;
                                      plVar28 = plStack_4e8;
                                      if (plStack_4f0 != (long *)0x0) {
                                        for (; plVar42 != plVar28; plVar28 = plVar28 + -2) {
                                          plVar33 = (long *)plVar28[-1];
                                          if (plVar33 != (long *)0x0) {
                                            LOCK();
                                            plVar32 = plVar33 + 1;
                                            lVar26 = *plVar32;
                                            *plVar32 = *plVar32 + -1;
                                            UNLOCK();
                                            if (lVar26 == 0) {
                                              (**(code **)(*plVar33 + 0x10))(plVar33);
                                              func_0x0412c2d0(plVar33);
                                            }
                                          }
                                        }
                                        plStack_4e8 = plVar42;
                                        func_0x0412a280(plStack_4f0,lStack_4e0 - (long)plStack_4f0);
                                      }
                                      plVar42 = plStack_508;
                                      plVar28 = plStack_500;
                                      if (plStack_508 != (long *)0x0) {
                                        for (; plVar42 != plVar28; plVar28 = plVar28 + -2) {
                                          plVar33 = (long *)plVar28[-1];
                                          if (plVar33 != (long *)0x0) {
                                            LOCK();
                                            plVar32 = plVar33 + 1;
                                            lVar26 = *plVar32;
                                            *plVar32 = *plVar32 + -1;
                                            UNLOCK();
                                            if (lVar26 == 0) {
                                              (**(code **)(*plVar33 + 0x10))(plVar33);
                                              func_0x0412c2d0(plVar33);
                                            }
                                          }
                                        }
                                        plStack_500 = plVar42;
                                        func_0x0412a280(plStack_508,
                                                        (long)plStack_4f8 - (long)plStack_508);
                                      }
                                      if ((uStack_530 & 1) != 0) {
                                        func_0x0412a280(uStack_520,uStack_530 & 0xfffffffffffffffe);
                                      }
                                    }
                                    uVar27 = (ulong)(iVar22 + 1);
                                  }
                                  uVar31 = uVar31 + 1;
                                  lVar26 = *plVar34;
                                } while ((long)uVar31 <
                                         (long)((int)((ulong)(plVar34[1] - lVar26) >> 3) *
                                               -0xf0f0f0f));
                              }
                              lVar26 = *(long *)(puVar40 + 6);
                              plVar34 = (long *)param_1[3];
                              if (1 < (ulong)((*(long *)(puVar40 + 8) - lVar26 >> 3) *
                                             -0x5555555555555555)) {
                                lStack_2a8 = 0;
                                puStack_2a0 = (undefined8 *)0x0;
                                uStack_2b8 = 0;
                                lStack_2b0 = 0;
                                uStack_2c8 = 0;
                                uStack_2c0 = 0;
                                uStack_2d8 = 0;
                                uStack_2d0 = 0;
                                plVar28 = (long *)plVar34[0x3a];
                                plStack_2e0 = plVar34;
                                if ((plVar28 == (long *)0x0) || (plVar34[0x4f] == -1)) {
                                  uStack_2c8 = 0;
                                }
                                else {
                                  uStack_2c8 = (**(code **)(*plVar28 + 0x1f8))
                                                         (plVar28,plVar34[0x4f],0);
                                }
                                lVar39 = *(long *)(lVar26 + 0x18);
                                if ((int)((ulong)(*(long *)(lVar26 + 0x20) - lVar39) >> 3) *
                                    -0xf0f0f0f < 1) {
                                  uVar36 = 0;
                                }
                                else {
                                  plVar55 = (long *)0x0;
                                  uVar36 = 0;
                                  do {
                                    lVar46 = (long)plVar55 * 0x88;
                                    cVar19 = func_0x0b0302a0(lVar39 + lVar46 + 0x30,plVar34,
                                                             &plStack_2e0);
                                    if (cVar19 != '\0') {
                                      if (plVar55 != (long *)(ulong)uVar36) {
                                        lVar39 = *(long *)(lVar26 + 0x18);
                                        plStack_538 = (long *)CONCAT44(plStack_538._4_4_,
                                                                       *(undefined4 *)
                                                                        (lVar39 + 0x10 + lVar46));
                                        uStack_548 = *(undefined **)(lVar39 + lVar46);
                                        uStack_540 = (long *)((undefined8 *)(lVar39 + lVar46))[1];
                                        uStack_520 = *(undefined8 *)(lVar39 + 0x28 + lVar46);
                                        puVar4 = (ulong *)(lVar39 + 0x18 + lVar46);
                                        uStack_530 = *puVar4;
                                        uStack_528 = puVar4[1];
                                        puVar54 = (undefined8 *)(lVar39 + 0x18 + lVar46);
                                        *puVar54 = 0;
                                        puVar54[1] = 0;
                                        *(undefined8 *)(lVar39 + 0x28 + lVar46) = 0;
                                        puStack_518 = &UNK_0f395808;
                                        puStack_510 = (undefined *)
                                                      CONCAT44(puStack_510._4_4_,
                                                               *(undefined4 *)
                                                                (lVar39 + 0x38 + lVar46));
                                        pplStack_380 = &plStack_508;
                                        plStack_508 = (long *)0x0;
                                        plStack_500 = (long *)0x0;
                                        plStack_4f8 = (long *)0x0;
                                        plVar42 = *(long **)(lVar39 + 0x40 + lVar46);
                                        plVar33 = *(long **)(lVar39 + 0x48 + lVar46);
                                        plStack_378 = (long *)((ulong)plStack_378 &
                                                              0xffffffffffffff00);
                                        lVar49 = (long)plVar33 - (long)plVar42;
                                        plVar28 = plVar55;
                                        if (lVar49 != 0) {
                                          if (lVar49 < 0) goto LAB_0717ce06;
                                          plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,lVar49);
                                          if (plVar32 == (long *)0x0) {
                                            func_0x0eec74c0(lVar49,0);
                                          }
                                          plStack_4f8 = (long *)(lVar49 + (long)plVar32);
                                          plVar28 = plVar32;
                                          do {
                                            lVar49 = plVar42[1];
                                            lVar29 = plVar42[1];
                                            *plVar28 = *plVar42;
                                            plVar28[1] = lVar29;
                                            if (lVar49 != 0) {
                                              LOCK();
                                              plVar2 = (long *)(lVar49 + 8);
                                              *plVar2 = *plVar2 + 1;
                                              UNLOCK();
                                            }
                                            plVar42 = plVar42 + 2;
                                            plVar28 = plVar28 + 2;
                                            plStack_508 = plVar32;
                                            plStack_500 = plVar28;
                                          } while (plVar42 != plVar33);
                                        }
                                        puVar3 = (undefined4 *)(lVar39 + lVar46);
                                        pplStack_380 = &plStack_4f0;
                                        plStack_4f0 = (long *)0x0;
                                        plStack_4e8 = (long *)0x0;
                                        lStack_4e0 = 0;
                                        plVar42 = *(long **)(puVar3 + 0x16);
                                        plVar33 = *(long **)(puVar3 + 0x18);
                                        plStack_378 = (long *)((ulong)plStack_378 &
                                                              0xffffffffffffff00);
                                        lVar49 = (long)plVar33 - (long)plVar42;
                                        if (lVar49 != 0) {
                                          if (lVar49 < 0) goto LAB_0717ce01;
                                          plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                                      (&DAT_0f5463b0,lVar49);
                                          if (plVar28 == (long *)0x0) {
                                            func_0x0eec74c0(lVar49,0);
                                          }
                                          lStack_4e0 = lVar49 + (long)plVar28;
                                          plStack_4e8 = plVar28;
                                          do {
                                            lVar49 = plVar42[1];
                                            lVar29 = plVar42[1];
                                            *plStack_4e8 = *plVar42;
                                            plStack_4e8[1] = lVar29;
                                            if (lVar49 != 0) {
                                              LOCK();
                                              plVar32 = (long *)(lVar49 + 8);
                                              *plVar32 = *plVar32 + 1;
                                              UNLOCK();
                                            }
                                            plVar42 = plVar42 + 2;
                                            plStack_4e8 = plStack_4e8 + 2;
                                            plStack_4f0 = plVar28;
                                          } while (plVar42 != plVar33);
                                        }
                                        puVar54 = (undefined8 *)((long)(int)uVar36 * 0x88 + lVar39);
                                        puStack_518 = &UNK_0f299f40;
                                        lStack_4d8 = *(long *)(puVar3 + 0x1c);
                                        plStack_4d0 = *(long **)(puVar3 + 0x1e);
                                        puStack_4c8 = *(undefined **)(puVar3 + 0x20);
                                        *(undefined8 *)(puVar3 + 0x1c) = 0;
                                        *(undefined8 *)(puVar3 + 0x1e) = 0;
                                        *(undefined8 *)(puVar3 + 0x20) = 0;
                                        uVar58 = *(undefined4 *)((long)puVar54 + 4);
                                        uVar11 = *(undefined4 *)(puVar54 + 1);
                                        uVar12 = *(undefined4 *)((long)puVar54 + 0xc);
                                        *puVar3 = *(undefined4 *)puVar54;
                                        puVar3[1] = uVar58;
                                        puVar3[2] = uVar11;
                                        puVar3[3] = uVar12;
                                        puVar3[4] = *(undefined4 *)(puVar54 + 2);
                                        if ((*(byte *)(puVar3 + 6) & 1) != 0) {
                                          func_0x0412a280(*(undefined8 *)(puVar3 + 10),
                                                          *(ulong *)(puVar3 + 6) &
                                                          0xfffffffffffffffe);
                                        }
                                        lVar49 = lVar39 + lVar46;
                                        *(undefined8 *)(lVar49 + 0x28) = puVar54[5];
                                        uVar58 = *(undefined4 *)((long)puVar54 + 0x1c);
                                        uVar11 = *(undefined4 *)(puVar54 + 4);
                                        uVar12 = *(undefined4 *)((long)puVar54 + 0x24);
                                        *(undefined4 *)(lVar49 + 0x18) =
                                             *(undefined4 *)(puVar54 + 3);
                                        *(undefined4 *)(lVar49 + 0x1c) = uVar58;
                                        *(undefined4 *)(lVar49 + 0x20) = uVar11;
                                        *(undefined4 *)(lVar49 + 0x24) = uVar12;
                                        *(undefined2 *)(puVar54 + 3) = 0;
                                        puVar3[0xe] = *(undefined4 *)(puVar54 + 7);
                                        if (plVar55 != (long *)(long)(int)uVar36) {
                                          func_0x049d0670(lVar39 + lVar46 + 0x40,puVar54[8],
                                                          puVar54[9],
                                                          (long)(puVar54[9] - puVar54[8]) >> 4);
                                          func_0x049d09c0(puVar3 + 0x16,puVar54[0xb],puVar54[0xc],
                                                          (long)(puVar54[0xc] - puVar54[0xb]) >> 4);
                                        }
                                        plVar28 = (long *)(puVar3 + 0x1c);
                                        lVar39 = *plVar28;
                                        if (lVar39 != 0) {
                                          lVar46 = *(long *)(puVar3 + 0x1e);
                                          lVar49 = lVar39;
                                          if (lVar39 != lVar46) {
                                            do {
                                              plVar42 = *(long **)(lVar46 + -8);
                                              *(undefined8 *)(lVar46 + -8) = 0;
                                              if (plVar42 != (long *)0x0) {
                                                (**(code **)(*plVar42 + 8))();
                                              }
                                              lVar46 = lVar46 + -8;
                                            } while (lVar46 != lVar39);
                                            lVar49 = *plVar28;
                                          }
                                          *(long *)(puVar3 + 0x1e) = lVar39;
                                          func_0x0412a280(lVar49,*(long *)(puVar3 + 0x20) - lVar49);
                                          *plVar28 = 0;
                                          *(undefined8 *)(puVar3 + 0x1e) = 0;
                                          *(undefined8 *)(puVar3 + 0x20) = 0;
                                        }
                                        uVar35 = puVar54[0xf];
                                        *(undefined8 *)(puVar3 + 0x1c) = puVar54[0xe];
                                        *(undefined8 *)(puVar3 + 0x1e) = uVar35;
                                        *(undefined8 *)(puVar3 + 0x20) = puVar54[0x10];
                                        puVar54[0xe] = 0;
                                        puVar54[0xf] = 0;
                                        puVar54[0x10] = 0;
                                        *(undefined4 *)puVar54 = (undefined4)uStack_548;
                                        *(undefined4 *)((long)puVar54 + 4) = uStack_548._4_4_;
                                        *(undefined4 *)(puVar54 + 1) = (undefined4)uStack_540;
                                        *(undefined4 *)((long)puVar54 + 0xc) = uStack_540._4_4_;
                                        *(undefined4 *)(puVar54 + 2) = plStack_538._0_4_;
                                        if ((*(byte *)(puVar54 + 3) & 1) != 0) {
                                          func_0x0412a280(puVar54[5],puVar54[3] & 0xfffffffffffffffe
                                                         );
                                        }
                                        puVar54[5] = uStack_520;
                                        *(undefined4 *)(puVar54 + 3) = (undefined4)uStack_530;
                                        *(undefined4 *)((long)puVar54 + 0x1c) = uStack_530._4_4_;
                                        *(undefined4 *)(puVar54 + 4) = (undefined4)uStack_528;
                                        *(undefined4 *)((long)puVar54 + 0x24) = uStack_528._4_4_;
                                        uStack_530 = uStack_530 & 0xffffffffffff0000;
                                        *(undefined4 *)(puVar54 + 7) = puStack_510._0_4_;
                                        if (puVar54 != &uStack_548) {
                                          func_0x049d0670(puVar54 + 8,plStack_508,plStack_500,
                                                          (long)plStack_500 - (long)plStack_508 >> 4
                                                         );
                                          func_0x049d09c0(puVar54 + 0xb,plStack_4f0,plStack_4e8,
                                                          (long)plStack_4e8 - (long)plStack_4f0 >> 4
                                                         );
                                        }
                                        plVar28 = puVar54 + 0xe;
                                        lVar39 = *plVar28;
                                        if (lVar39 != 0) {
                                          lVar46 = puVar54[0xf];
                                          lVar49 = lVar39;
                                          if (lVar39 != lVar46) {
                                            do {
                                              plVar42 = *(long **)(lVar46 + -8);
                                              *(undefined8 *)(lVar46 + -8) = 0;
                                              if (plVar42 != (long *)0x0) {
                                                (**(code **)(*plVar42 + 8))();
                                              }
                                              lVar46 = lVar46 + -8;
                                            } while (lVar46 != lVar39);
                                            lVar49 = *plVar28;
                                          }
                                          puVar54[0xf] = lVar39;
                                          func_0x0412a280(lVar49,puVar54[0x10] - lVar49);
                                          *plVar28 = 0;
                                          puVar54[0xf] = 0;
                                          puVar54[0x10] = 0;
                                        }
                                        plVar42 = plStack_4f0;
                                        puVar54[0xe] = lStack_4d8;
                                        puVar54[0xf] = plStack_4d0;
                                        puVar54[0x10] = puStack_4c8;
                                        lStack_4d8 = 0;
                                        plStack_4d0 = (long *)0x0;
                                        puStack_4c8 = (undefined *)0x0;
                                        puStack_518 = &UNK_0f395808;
                                        plVar28 = plStack_4e8;
                                        if (plStack_4f0 != (long *)0x0) {
                                          for (; plVar42 != plVar28; plVar28 = plVar28 + -2) {
                                            plVar33 = (long *)plVar28[-1];
                                            if (plVar33 != (long *)0x0) {
                                              LOCK();
                                              plVar32 = plVar33 + 1;
                                              lVar39 = *plVar32;
                                              *plVar32 = *plVar32 + -1;
                                              UNLOCK();
                                              if (lVar39 == 0) {
                                                (**(code **)(*plVar33 + 0x10))(plVar33);
                                                func_0x0412c2d0(plVar33);
                                              }
                                            }
                                          }
                                          plStack_4e8 = plVar42;
                                          func_0x0412a280(plStack_4f0,lStack_4e0 - (long)plStack_4f0
                                                         );
                                        }
                                        plVar42 = plStack_508;
                                        plVar28 = plStack_500;
                                        if (plStack_508 != (long *)0x0) {
                                          for (; plVar42 != plVar28; plVar28 = plVar28 + -2) {
                                            plVar33 = (long *)plVar28[-1];
                                            if (plVar33 != (long *)0x0) {
                                              LOCK();
                                              plVar32 = plVar33 + 1;
                                              lVar39 = *plVar32;
                                              *plVar32 = *plVar32 + -1;
                                              UNLOCK();
                                              if (lVar39 == 0) {
                                                (**(code **)(*plVar33 + 0x10))(plVar33);
                                                func_0x0412c2d0(plVar33);
                                              }
                                            }
                                          }
                                          plStack_500 = plVar42;
                                          func_0x0412a280(plStack_508,
                                                          (long)plStack_4f8 - (long)plStack_508);
                                        }
                                        if ((uStack_530 & 1) != 0) {
                                          func_0x0412a280(uStack_520,uStack_530 & 0xfffffffffffffffe
                                                         );
                                        }
                                      }
                                      uVar36 = uVar36 + 1;
                                    }
                                    plVar55 = (long *)((long)plVar55 + 1);
                                    lVar39 = *(long *)(lVar26 + 0x18);
                                  } while ((long)plVar55 <
                                           (long)((int)((ulong)(*(long *)(lVar26 + 0x20) - lVar39)
                                                       >> 3) * -0xf0f0f0f));
                                }
                                plVar34 = (long *)param_1[3];
                              }
                              plVar55 = *(long **)(puVar40 + 0xc);
                              lStack_2a8 = 0;
                              puStack_2a0 = (undefined8 *)0x0;
                              uStack_2b8 = 0;
                              lStack_2b0 = 0;
                              uStack_2c8 = 0;
                              uStack_2c0 = 0;
                              uStack_2d8 = 0;
                              uStack_2d0 = 0;
                              plVar28 = (long *)plVar34[0x3a];
                              plStack_2e0 = plVar34;
                              if ((plVar28 == (long *)0x0) || (plVar34[0x4f] == -1)) {
                                uStack_2c8 = 0;
                              }
                              else {
                                uStack_2c8 = (**(code **)(*plVar28 + 0x1f8))
                                                       (plVar28,plVar34[0x4f],0);
                              }
                              lVar26 = *plVar55;
                              if (0 < (int)((ulong)(plVar55[1] - lVar26) >> 3) * -0xf0f0f0f) {
                                uVar31 = 0;
                                uVar38 = 0;
                                do {
                                  iVar22 = (int)uVar38;
                                  lVar39 = uVar31 * 0x88;
                                  cVar19 = func_0x0b0302a0(lVar26 + lVar39 + 0x30,plVar34,
                                                           &plStack_2e0);
                                  if (cVar19 != '\0') {
                                    if (uVar31 != uVar38) {
                                      lVar26 = *plVar55;
                                      plStack_538 = (long *)CONCAT44(plStack_538._4_4_,
                                                                     *(undefined4 *)
                                                                      (lVar26 + 0x10 + lVar39));
                                      uStack_548 = *(undefined **)(lVar26 + lVar39);
                                      uStack_540 = (long *)((undefined8 *)(lVar26 + lVar39))[1];
                                      uStack_520 = *(undefined8 *)(lVar26 + 0x28 + lVar39);
                                      puVar4 = (ulong *)(lVar26 + 0x18 + lVar39);
                                      uStack_530 = *puVar4;
                                      uStack_528 = puVar4[1];
                                      puVar54 = (undefined8 *)(lVar26 + 0x18 + lVar39);
                                      *puVar54 = 0;
                                      puVar54[1] = 0;
                                      *(undefined8 *)(lVar26 + 0x28 + lVar39) = 0;
                                      puStack_518 = &UNK_0f395808;
                                      puStack_510 = (undefined *)
                                                    CONCAT44(puStack_510._4_4_,
                                                             *(undefined4 *)(lVar26 + 0x38 + lVar39)
                                                            );
                                      pplStack_380 = &plStack_508;
                                      plStack_508 = (long *)0x0;
                                      plStack_500 = (long *)0x0;
                                      plStack_4f8 = (long *)0x0;
                                      plVar28 = *(long **)(lVar26 + 0x40 + lVar39);
                                      plVar42 = *(long **)(lVar26 + 0x48 + lVar39);
                                      plStack_378 = (long *)((ulong)plStack_378 & 0xffffffffffffff00
                                                            );
                                      lVar46 = (long)plVar42 - (long)plVar28;
                                      if (lVar46 != 0) {
                                        if (lVar46 < 0) goto LAB_0717cdf7;
                                        plVar33 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                                    (&DAT_0f5463b0,lVar46);
                                        if (plVar33 == (long *)0x0) {
                                          func_0x0eec74c0(lVar46,0);
                                        }
                                        plStack_4f8 = (long *)(lVar46 + (long)plVar33);
                                        plStack_500 = plVar33;
                                        do {
                                          lVar46 = plVar28[1];
                                          lVar49 = plVar28[1];
                                          *plStack_500 = *plVar28;
                                          plStack_500[1] = lVar49;
                                          if (lVar46 != 0) {
                                            LOCK();
                                            plVar32 = (long *)(lVar46 + 8);
                                            *plVar32 = *plVar32 + 1;
                                            UNLOCK();
                                          }
                                          plVar28 = plVar28 + 2;
                                          plStack_500 = plStack_500 + 2;
                                          plStack_508 = plVar33;
                                        } while (plVar28 != plVar42);
                                      }
                                      plVar28 = (long *)(lVar26 + lVar39);
                                      pplStack_380 = &plStack_4f0;
                                      plStack_4f0 = (long *)0x0;
                                      plStack_4e8 = (long *)0x0;
                                      lStack_4e0 = 0;
                                      plVar42 = (long *)plVar28[0xb];
                                      plVar33 = (long *)plVar28[0xc];
                                      plStack_378 = (long *)((ulong)plStack_378 & 0xffffffffffffff00
                                                            );
                                      lVar46 = (long)plVar33 - (long)plVar42;
                                      if (lVar46 != 0) {
                                        if (lVar46 < 0) goto LAB_0717cdfc;
                                        plVar32 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                                    (&DAT_0f5463b0,lVar46);
                                        if (plVar32 == (long *)0x0) {
                                          func_0x0eec74c0(lVar46,0);
                                        }
                                        lStack_4e0 = lVar46 + (long)plVar32;
                                        plStack_4e8 = plVar32;
                                        do {
                                          lVar46 = plVar42[1];
                                          lVar49 = plVar42[1];
                                          *plStack_4e8 = *plVar42;
                                          plStack_4e8[1] = lVar49;
                                          if (lVar46 != 0) {
                                            LOCK();
                                            plVar2 = (long *)(lVar46 + 8);
                                            *plVar2 = *plVar2 + 1;
                                            UNLOCK();
                                          }
                                          plVar42 = plVar42 + 2;
                                          plStack_4e8 = plStack_4e8 + 2;
                                          plStack_4f0 = plVar32;
                                        } while (plVar42 != plVar33);
                                      }
                                      puVar54 = (undefined8 *)((long)iVar22 * 0x88 + lVar26);
                                      puStack_518 = &UNK_0f299f40;
                                      lStack_4d8 = plVar28[0xe];
                                      plStack_4d0 = (long *)plVar28[0xf];
                                      puStack_4c8 = (undefined *)plVar28[0x10];
                                      plVar28[0xe] = 0;
                                      plVar28[0xf] = 0;
                                      plVar28[0x10] = 0;
                                      uVar58 = *(undefined4 *)((long)puVar54 + 4);
                                      uVar11 = *(undefined4 *)(puVar54 + 1);
                                      uVar12 = *(undefined4 *)((long)puVar54 + 0xc);
                                      *(undefined4 *)plVar28 = *(undefined4 *)puVar54;
                                      *(undefined4 *)((long)plVar28 + 4) = uVar58;
                                      *(undefined4 *)(plVar28 + 1) = uVar11;
                                      *(undefined4 *)((long)plVar28 + 0xc) = uVar12;
                                      *(undefined4 *)(plVar28 + 2) = *(undefined4 *)(puVar54 + 2);
                                      if ((*(byte *)(plVar28 + 3) & 1) != 0) {
                                        func_0x0412a280(plVar28[5],plVar28[3] & 0xfffffffffffffffe);
                                      }
                                      lVar46 = lVar26 + lVar39;
                                      *(undefined8 *)(lVar46 + 0x28) = puVar54[5];
                                      uVar58 = *(undefined4 *)((long)puVar54 + 0x1c);
                                      uVar11 = *(undefined4 *)(puVar54 + 4);
                                      uVar12 = *(undefined4 *)((long)puVar54 + 0x24);
                                      *(undefined4 *)(lVar46 + 0x18) = *(undefined4 *)(puVar54 + 3);
                                      *(undefined4 *)(lVar46 + 0x1c) = uVar58;
                                      *(undefined4 *)(lVar46 + 0x20) = uVar11;
                                      *(undefined4 *)(lVar46 + 0x24) = uVar12;
                                      *(undefined2 *)(puVar54 + 3) = 0;
                                      *(undefined4 *)(plVar28 + 7) = *(undefined4 *)(puVar54 + 7);
                                      if (uVar31 != (long)iVar22) {
                                        func_0x049d0670(lVar26 + lVar39 + 0x40,puVar54[8],puVar54[9]
                                                        ,(long)(puVar54[9] - puVar54[8]) >> 4);
                                        func_0x049d09c0(plVar28 + 0xb,puVar54[0xb],puVar54[0xc],
                                                        (long)(puVar54[0xc] - puVar54[0xb]) >> 4);
                                      }
                                      plVar42 = plVar28 + 0xe;
                                      lVar26 = *plVar42;
                                      if (lVar26 != 0) {
                                        lVar39 = plVar28[0xf];
                                        lVar46 = lVar26;
                                        if (lVar26 != lVar39) {
                                          do {
                                            plVar33 = *(long **)(lVar39 + -8);
                                            *(undefined8 *)(lVar39 + -8) = 0;
                                            if (plVar33 != (long *)0x0) {
                                              (**(code **)(*plVar33 + 8))();
                                            }
                                            lVar39 = lVar39 + -8;
                                          } while (lVar39 != lVar26);
                                          lVar46 = *plVar42;
                                        }
                                        plVar28[0xf] = lVar26;
                                        func_0x0412a280(lVar46,plVar28[0x10] - lVar46);
                                        *plVar42 = 0;
                                        plVar28[0xf] = 0;
                                        plVar28[0x10] = 0;
                                      }
                                      lVar26 = puVar54[0xf];
                                      plVar28[0xe] = puVar54[0xe];
                                      plVar28[0xf] = lVar26;
                                      plVar28[0x10] = puVar54[0x10];
                                      puVar54[0xe] = 0;
                                      puVar54[0xf] = 0;
                                      puVar54[0x10] = 0;
                                      *(undefined4 *)puVar54 = (undefined4)uStack_548;
                                      *(undefined4 *)((long)puVar54 + 4) = uStack_548._4_4_;
                                      *(undefined4 *)(puVar54 + 1) = (undefined4)uStack_540;
                                      *(undefined4 *)((long)puVar54 + 0xc) = uStack_540._4_4_;
                                      *(undefined4 *)(puVar54 + 2) = plStack_538._0_4_;
                                      if ((*(byte *)(puVar54 + 3) & 1) != 0) {
                                        func_0x0412a280(puVar54[5],puVar54[3] & 0xfffffffffffffffe);
                                      }
                                      puVar54[5] = uStack_520;
                                      *(undefined4 *)(puVar54 + 3) = (undefined4)uStack_530;
                                      *(undefined4 *)((long)puVar54 + 0x1c) = uStack_530._4_4_;
                                      *(undefined4 *)(puVar54 + 4) = (undefined4)uStack_528;
                                      *(undefined4 *)((long)puVar54 + 0x24) = uStack_528._4_4_;
                                      uStack_530 = uStack_530 & 0xffffffffffff0000;
                                      *(undefined4 *)(puVar54 + 7) = puStack_510._0_4_;
                                      if (puVar54 != &uStack_548) {
                                        func_0x049d0670(puVar54 + 8,plStack_508,plStack_500,
                                                        (long)plStack_500 - (long)plStack_508 >> 4);
                                        func_0x049d09c0(puVar54 + 0xb,plStack_4f0,plStack_4e8,
                                                        (long)plStack_4e8 - (long)plStack_4f0 >> 4);
                                      }
                                      plVar28 = puVar54 + 0xe;
                                      lVar26 = *plVar28;
                                      if (lVar26 != 0) {
                                        lVar39 = puVar54[0xf];
                                        lVar46 = lVar26;
                                        if (lVar26 != lVar39) {
                                          do {
                                            plVar42 = *(long **)(lVar39 + -8);
                                            *(undefined8 *)(lVar39 + -8) = 0;
                                            if (plVar42 != (long *)0x0) {
                                              (**(code **)(*plVar42 + 8))();
                                            }
                                            lVar39 = lVar39 + -8;
                                          } while (lVar39 != lVar26);
                                          lVar46 = *plVar28;
                                        }
                                        puVar54[0xf] = lVar26;
                                        func_0x0412a280(lVar46,puVar54[0x10] - lVar46);
                                        *plVar28 = 0;
                                        puVar54[0xf] = 0;
                                        puVar54[0x10] = 0;
                                      }
                                      plVar42 = plStack_4f0;
                                      puVar54[0xe] = lStack_4d8;
                                      puVar54[0xf] = plStack_4d0;
                                      puVar54[0x10] = puStack_4c8;
                                      lStack_4d8 = 0;
                                      plStack_4d0 = (long *)0x0;
                                      puStack_4c8 = (undefined *)0x0;
                                      puStack_518 = &UNK_0f395808;
                                      plVar28 = plStack_4e8;
                                      if (plStack_4f0 != (long *)0x0) {
                                        for (; plVar42 != plVar28; plVar28 = plVar28 + -2) {
                                          plVar33 = (long *)plVar28[-1];
                                          if (plVar33 != (long *)0x0) {
                                            LOCK();
                                            plVar32 = plVar33 + 1;
                                            lVar26 = *plVar32;
                                            *plVar32 = *plVar32 + -1;
                                            UNLOCK();
                                            if (lVar26 == 0) {
                                              (**(code **)(*plVar33 + 0x10))(plVar33);
                                              func_0x0412c2d0(plVar33);
                                            }
                                          }
                                        }
                                        plStack_4e8 = plVar42;
                                        func_0x0412a280(plStack_4f0,lStack_4e0 - (long)plStack_4f0);
                                      }
                                      plVar42 = plStack_508;
                                      plVar28 = plStack_500;
                                      if (plStack_508 != (long *)0x0) {
                                        for (; plVar42 != plVar28; plVar28 = plVar28 + -2) {
                                          plVar33 = (long *)plVar28[-1];
                                          if (plVar33 != (long *)0x0) {
                                            LOCK();
                                            plVar32 = plVar33 + 1;
                                            lVar26 = *plVar32;
                                            *plVar32 = *plVar32 + -1;
                                            UNLOCK();
                                            if (lVar26 == 0) {
                                              (**(code **)(*plVar33 + 0x10))(plVar33);
                                              func_0x0412c2d0(plVar33);
                                            }
                                          }
                                        }
                                        plStack_500 = plVar42;
                                        func_0x0412a280(plStack_508,
                                                        (long)plStack_4f8 - (long)plStack_508);
                                      }
                                      if ((uStack_530 & 1) != 0) {
                                        func_0x0412a280(uStack_520,uStack_530 & 0xfffffffffffffffe);
                                      }
                                    }
                                    uVar38 = (ulong)(iVar22 + 1);
                                  }
                                  uVar31 = uVar31 + 1;
                                  lVar26 = *plVar55;
                                } while ((long)uVar31 <
                                         (long)((int)((ulong)(plVar55[1] - lVar26) >> 3) *
                                               -0xf0f0f0f));
                                if (0 < (int)uVar38 && 0 < (int)uVar27) {
                                  (**(code **)(**(long **)(param_1[3] + 0x1d0) + 0xc48))
                                            (&puStack_2f0);
                                  plVar28 = *(long **)(puVar40 + 6);
                                  iVar22 = (*(code *)(*pplVar25)[3])(pplVar25,uVar27);
                                  psVar51 = (short *)((long)iVar22 * 0x88 + *plVar28);
                                  pplStack_380 = (long **)&UNK_0f36e918;
                                  uStack_368 = 0;
                                  uStack_365 = 0;
                                  plStack_378 = (long *)0x0;
                                  uStack_370 = 0;
                                  uStack_36d = 0;
                                  uStack_35d = 0x101;
                                  uStack_35b = 0;
                                  uStack_318 = 0;
                                  uStack_310 = 0;
                                  lStack_328 = 0;
                                  lStack_320 = 0;
                                  uStack_338 = 0;
                                  lStack_330 = 0;
                                  lStack_348 = 0;
                                  lStack_340 = 0;
                                  uStack_358 = 0;
                                  lStack_350 = 0;
                                  plStack_308 = (long *)0x0;
                                  func_0x0c454290(&pplStack_380);
                                  pplStack_380 = (long **)&UNK_0f36e858;
                                  sVar6 = *psVar51;
                                  uStack_548 = (undefined *)0x0;
                                  uStack_540 = (long *)0x0;
                                  if ((lStack_2e8 == 0) ||
                                     (plVar28 = (long *)func_0x0412c300(), uStack_540 = plVar28,
                                     plVar28 == (long *)0x0)) {
                                    plVar28 = (long *)0x0;
LAB_0717b147:
                                    cVar19 = func_0x0eeddcf0(&UNK_014099eb,&UNK_01394839,0x2b8,
                                                             &UNK_0131c097);
                                    if (cVar19 != '\0') {
                                      _DAT_00000000 = 0xdeadc0de;
                                    }
                                    if (plVar28 != (long *)0x0) {
                                      LOCK();
                                      plVar34 = plVar28 + 1;
                                      lVar26 = *plVar34;
                                      *plVar34 = *plVar34 + -1;
                                      UNLOCK();
                                      if (lVar26 == 0) {
                                        (**(code **)(*plVar28 + 0x10))(plVar28);
                                        func_0x0412c2d0(plVar28);
                                      }
                                    }
                                    if ((DAT_0f6e2da8 == '\0') &&
                                       (iVar22 = func_0x04108328(&DAT_0f6e2da8), iVar22 != 0)) {
                                      func_0x0eee2f40(&SUB_04963c80,&DAT_0f6e2da0,0xf53dab8);
                                      func_0x0410844d(&DAT_0f6e2da8);
                                    }
                                    plStack_2e0 = _DAT_0f6e2da0;
                                    if (_DAT_0f6e2da0 != (long *)0x0) {
                                      LOCK();
                                      *(int *)((long)_DAT_0f6e2da0 + 0xc) =
                                           *(int *)((long)_DAT_0f6e2da0 + 0xc) + 1;
                                      UNLOCK();
joined_r0x0717b1e4:
                                      if (plStack_2e0 != (long *)0x0) goto LAB_0717b1ea;
                                    }
LAB_0717b4b4:
                                    plVar28 = plStack_308;
                                    pplStack_380 = (long **)&UNK_0f36e918;
                                    plStack_308 = (long *)0x0;
                                    if (plVar28 != (long *)0x0) {
                                      (**(code **)(*plVar28 + 8))();
                                    }
                                    if (lStack_330 != 0) {
                                      lStack_328 = lStack_330;
                                      func_0x0412a280(lStack_330,lStack_320 - lStack_330);
                                    }
                                    if (lStack_350 != 0) {
                                      lStack_348 = lStack_350;
                                      func_0x0412a280(lStack_350,lStack_340 - lStack_350);
                                    }
                                    plVar28 = (long *)CONCAT53(uStack_36d,uStack_370);
                                    uStack_370 = 0;
                                    uStack_36d = 0;
                                    if (plVar28 != (long *)0x0) {
                                      (**(code **)(*plVar28 + 8))();
                                    }
                                    if (plStack_378 != (long *)0x0) {
                                      LOCK();
                                      *(int *)((long)plStack_378 + 0xc) =
                                           *(int *)((long)plStack_378 + 0xc) + -1;
                                      UNLOCK();
                                      if (((*(int *)((long)plStack_378 + 0xc) < 1) &&
                                          (*plStack_378 == 0)) && (plStack_378 != (long *)0x0)) {
                                        func_0x0412a280(plStack_378,0x10);
                                      }
                                    }
                                    if (lStack_2e8 != 0) {
                                      func_0x0412c2d0();
                                    }
                                  }
                                  else {
                                    uStack_548 = puStack_2f0;
                                    if (puStack_2f0 == (undefined *)0x0) goto LAB_0717b147;
                                    func_0x0c9fdd60(&plStack_2e0,puStack_2f0,(int)sVar6);
                                    LOCK();
                                    plVar34 = plVar28 + 1;
                                    lVar26 = *plVar34;
                                    *plVar34 = *plVar34 + -1;
                                    UNLOCK();
                                    if (lVar26 == 0) {
                                      (**(code **)(*plVar28 + 0x10))(plVar28);
                                      func_0x0412c2d0(plVar28);
                                      goto joined_r0x0717b1e4;
                                    }
                                    if (plStack_2e0 == (long *)0x0) goto LAB_0717b4b4;
LAB_0717b1ea:
                                    plVar28 = plStack_2e0;
                                    lVar26 = *plStack_2e0;
                                    if (lVar26 == 0) {
                                      LOCK();
                                      *(int *)((long)plStack_2e0 + 0xc) =
                                           *(int *)((long)plStack_2e0 + 0xc) + -1;
                                      UNLOCK();
                                      iVar22 = *(int *)((long)plStack_2e0 + 0xc);
joined_r0x0717b383:
                                      if (((iVar22 < 1) && (*plVar28 == 0)) &&
                                         (plStack_2e0 != (long *)0x0)) {
                                        func_0x0412a280(plStack_2e0,0x10);
                                      }
                                      lVar39 = 0;
                                      if (lVar26 != 0) goto LAB_0717b3ab;
                                    }
                                    else {
                                      iVar22 = *(int *)(psVar51 + 4);
                                      lVar39 = lVar26;
                                      if (iVar22 < *(int *)(psVar51 + 6)) {
                                        iVar23 = (*(code *)(*pplVar25)[3])();
                                        iVar22 = iVar22 + iVar23;
                                        lVar39 = *plVar28;
                                      }
                                      func_0x0c44f050(&uStack_548,lVar39,iVar22,
                                                      *(undefined4 *)(psVar51 + 2));
                                      uStack_548 = &UNK_0f36e858;
                                      func_0x0c44f4e0(&pplStack_380,&uStack_548);
                                      plVar34 = plStack_4d0;
                                      uStack_548 = &UNK_0f36e918;
                                      plStack_4d0 = (long *)0x0;
                                      if (plVar34 != (long *)0x0) {
                                        (**(code **)(*plVar34 + 8))();
                                      }
                                      if (plStack_4f8 != (long *)0x0) {
                                        plStack_4f0 = plStack_4f8;
                                        func_0x0412a280(plStack_4f8,
                                                        (long)plStack_4e8 - (long)plStack_4f8);
                                      }
                                      if (puStack_518 != (undefined *)0x0) {
                                        puStack_510 = puStack_518;
                                        func_0x0412a280(puStack_518,
                                                        (long)plStack_508 - (long)puStack_518);
                                      }
                                      plVar34 = plStack_538;
                                      plStack_538 = (long *)0x0;
                                      if (plVar34 != (long *)0x0) {
                                        (**(code **)(*plVar34 + 8))();
                                      }
                                      if (uStack_540 == (long *)0x0) {
                                        puVar40[4] = iVar22;
                                        LOCK();
                                        *(int *)((long)plVar28 + 0xc) =
                                             *(int *)((long)plVar28 + 0xc) + -1;
                                        UNLOCK();
                                        iVar22 = *(int *)((long)plVar28 + 0xc);
                                        goto joined_r0x0717b383;
                                      }
                                      LOCK();
                                      *(int *)((long)uStack_540 + 0xc) =
                                           *(int *)((long)uStack_540 + 0xc) + -1;
                                      UNLOCK();
                                      if (((*(int *)((long)uStack_540 + 0xc) < 1) &&
                                          (*uStack_540 == 0)) && (uStack_540 != (long *)0x0)) {
                                        func_0x0412a280(uStack_540,0x10);
                                      }
                                      puVar40[4] = iVar22;
                                      if (plStack_2e0 != (long *)0x0) {
                                        LOCK();
                                        *(int *)((long)plStack_2e0 + 0xc) =
                                             *(int *)((long)plStack_2e0 + 0xc) + -1;
                                        UNLOCK();
                                        iVar22 = *(int *)((long)plStack_2e0 + 0xc);
                                        plVar28 = plStack_2e0;
                                        goto joined_r0x0717b383;
                                      }
LAB_0717b3ab:
                                      func_0x0c44ed40(&puStack_b0);
                                      puStack_b0 = &UNK_0f36e858;
                                      uVar58 = 0;
                                      if (((int)uVar36 < 1) ||
                                         (lVar26 = *(long *)(puVar40 + 6),
                                         (ulong)((*(long *)(puVar40 + 8) - lVar26 >> 3) *
                                                -0x5555555555555555) < 2)) {
LAB_0717b735:
                                        plVar28 = *(long **)(puVar40 + 0xc);
                                        iVar22 = (*(code *)(*pplVar25)[3])(pplVar25,uVar38);
                                        psVar52 = (short *)((long)iVar22 * 0x88 + *plVar28);
                                        func_0x0c44ed40(&puStack_130);
                                        puStack_130 = &UNK_0f36e858;
                                        func_0x0ca14280(&plStack_2e0,&puStack_2f0,(int)*psVar52);
                                        plVar28 = plStack_2e0;
                                        if (plStack_2e0 == (long *)0x0) {
                                          lVar39 = 0;
                                        }
                                        else {
                                          lVar26 = *plStack_2e0;
                                          if (lVar26 == 0) {
                                            LOCK();
                                            *(int *)((long)plStack_2e0 + 0xc) =
                                                 *(int *)((long)plStack_2e0 + 0xc) + -1;
                                            UNLOCK();
                                            iVar22 = *(int *)((long)plStack_2e0 + 0xc);
joined_r0x0717b94e:
                                            if (((iVar22 < 1) && (*plVar28 == 0)) &&
                                               (plStack_2e0 != (long *)0x0)) {
                                              func_0x0412a280(plStack_2e0,0x10);
                                            }
                                            lVar39 = 0;
                                            if (lVar26 == 0) goto LAB_0717c967;
                                          }
                                          else {
                                            iVar22 = *(int *)(psVar52 + 4);
                                            lVar39 = lVar26;
                                            if (iVar22 < *(int *)(psVar52 + 6)) {
                                              iVar23 = (*(code *)(*pplVar25)[3])();
                                              iVar22 = iVar22 + iVar23;
                                              lVar39 = *plVar28;
                                            }
                                            func_0x0c44f050(&uStack_548,lVar39,iVar22,
                                                            *(undefined4 *)(psVar52 + 2));
                                            uStack_548 = &UNK_0f36e858;
                                            func_0x0c44f4e0(&puStack_130,&uStack_548);
                                            plVar34 = plStack_4d0;
                                            uStack_548 = &UNK_0f36e918;
                                            plStack_4d0 = (long *)0x0;
                                            if (plVar34 != (long *)0x0) {
                                              (**(code **)(*plVar34 + 8))();
                                            }
                                            if (plStack_4f8 != (long *)0x0) {
                                              plStack_4f0 = plStack_4f8;
                                              func_0x0412a280(plStack_4f8,
                                                              (long)plStack_4e8 - (long)plStack_4f8)
                                              ;
                                            }
                                            if (puStack_518 != (undefined *)0x0) {
                                              puStack_510 = puStack_518;
                                              func_0x0412a280(puStack_518,
                                                              (long)plStack_508 - (long)puStack_518)
                                              ;
                                            }
                                            plVar34 = plStack_538;
                                            plStack_538 = (long *)0x0;
                                            if (plVar34 != (long *)0x0) {
                                              (**(code **)(*plVar34 + 8))();
                                            }
                                            if (uStack_540 == (long *)0x0) {
                                              LOCK();
                                              *(int *)((long)plVar28 + 0xc) =
                                                   *(int *)((long)plVar28 + 0xc) + -1;
                                              UNLOCK();
                                              iVar22 = *(int *)((long)plVar28 + 0xc);
                                              goto joined_r0x0717b94e;
                                            }
                                            LOCK();
                                            *(int *)((long)uStack_540 + 0xc) =
                                                 *(int *)((long)uStack_540 + 0xc) + -1;
                                            UNLOCK();
                                            if (((*(int *)((long)uStack_540 + 0xc) < 1) &&
                                                (*uStack_540 == 0)) && (uStack_540 != (long *)0x0))
                                            {
                                              func_0x0412a280(uStack_540,0x10);
                                            }
                                            plVar28 = plStack_2e0;
                                            if (plStack_2e0 != (long *)0x0) {
                                              LOCK();
                                              *(int *)((long)plStack_2e0 + 0xc) =
                                                   *(int *)((long)plStack_2e0 + 0xc) + -1;
                                              UNLOCK();
                                              iVar22 = *(int *)((long)plStack_2e0 + 0xc);
                                              goto joined_r0x0717b94e;
                                            }
                                          }
                                          uVar35 = *(undefined8 *)(param_1[3] + 0x1d0);
                                          puVar54 = (undefined8 *)func_0x0b3cf240();
                                          uVar8 = *puVar54;
                                          lVar26 = *(long *)(param_1[3] + 0x10);
                                          uVar36 = *(uint *)(param_1[3] + 0x18);
                                          plVar34 = (long *)(*(long *)(lVar26 + 0x38) +
                                                            (ulong)((int)((ulong)(*(long *)(lVar26 +
                                                                                           0x40) -
                                                                                 *(long *)(lVar26 + 
                                                  0x38)) >> 3) - 1U & 0xaf993816) * 8);
                                          do {
                                            if (*plVar34 == -1) {
                                              plVar55 = *(long **)(lVar26 + 0x58);
                                              plVar34 = plVar55;
                                              goto LAB_0717b9e9;
                                            }
                                            lVar39 = *plVar34 * 0x20;
                                            plVar34 = (long *)(*(long *)(lVar26 + 0x50) + lVar39);
                                          } while (*(int *)(*(long *)(lVar26 + 0x50) + 8 + lVar39)
                                                   != -0x5066c7ea);
                                          plVar55 = *(long **)(lVar26 + 0x58);
LAB_0717b9e9:
                                          if ((plVar34 == plVar55) ||
                                             (lVar26 = plVar34[2], lVar26 == 0)) goto LAB_0717ce0b;
                                          uVar27 = (ulong)((uVar36 & 0x3ffff) >> 0xb);
                                          if ((((ulong)(*(long *)(lVar26 + 0x10) -
                                                        *(long *)(lVar26 + 8) >> 3) <= uVar27) ||
                                              ((lVar39 = *(long *)(*(long *)(lVar26 + 8) +
                                                                  uVar27 * 8), lVar39 == 0 ||
                                               (uVar24 = *(uint *)(lVar39 + (ulong)(uVar36 & 0x7ff)
                                                                            * 4),
                                               0x3fffe < (uVar36 & 0xfffc0000 ^ uVar24))))) ||
                                             (lVar26 = *(long *)(*(long *)(lVar26 + 0x50) +
                                                                (ulong)(uVar24 >> 4 & 0x3ff8)),
                                             lVar26 == 0)) goto LAB_0717ce0b;
                                          uStack_260 = *(undefined4 *)
                                                        (lVar26 + (ulong)(uVar24 & 0x7f) * 4);
                                          plStack_2e0 = (long *)((ulong)plStack_2e0 &
                                                                0xffffffff00000000);
                                          lStack_2a8 = 0;
                                          puStack_2a0 = (undefined8 *)0x0;
                                          uStack_2b8 = 0;
                                          lStack_2b0 = 0;
                                          uStack_2c8 = 0;
                                          uStack_2c0 = 0;
                                          uStack_298 = 0;
                                          uStack_290 = 0x3f800000;
                                          uStack_288 = 0;
                                          uStack_270 = 0;
                                          uStack_268 = 0;
                                          uStack_280 = 0;
                                          uStack_278 = 0;
                                          uStack_258 = 0;
                                          puVar4 = (ulong *)(psVar52 + 0xc);
                                          uStack_2d8 = uVar35;
                                          uStack_2d0 = uVar8;
                                          if (&uStack_280 != puVar4) {
                                            if ((*puVar4 & 1) == 0) {
                                              uStack_270 = *(undefined8 *)(psVar52 + 0x14);
                                              uStack_280 = *puVar4;
                                              uStack_278 = *(undefined8 *)(psVar52 + 0x10);
                                            }
                                            else {
                                              func_0x04885070(&uStack_280,
                                                              *(undefined8 *)(psVar52 + 0x14),
                                                              *(undefined8 *)(psVar52 + 0x10));
                                            }
                                          }
                                          uVar27 = uStack_390;
                                          uVar35 = uStack_398;
                                          uStack_188 = &pplStack_380;
                                          uStack_168 = uStack_398;
                                          uVar38 = uStack_390 & 0xff00ffffffffffff;
                                          uVar31 = uStack_390;
                                          uStack_180 = pplVar25;
                                          uStack_178 = &plStack_2e0;
                                          uStack_170 = puVar40;
                                          if ((uStack_390 & 0x80000000000000) != 0) {
                                            lVar39 = *(long *)(uVar38 - 8);
                                            lVar26 = lVar39 + 9;
                                            plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))
                                                                        (&DAT_0f5463b0,lVar26,8);
                                            if (lVar26 != 0 && plVar28 == (long *)0x0) {
                                              func_0x0eec74c0(lVar26,8);
                                            }
                                            *plVar28 = lVar39;
                                            memcpy(plVar28 + 1,uVar38,lVar39);
                                            *(undefined1 *)((long)plVar28 + lVar39 + 8) = 0;
                                            uVar31 = (ulong)(plVar28 + 1) & 0xff00ffffffffffff |
                                                     0x80000000000000;
                                          }
                                          uVar56 = uStack_388;
                                          uStack_158 = 0;
                                          uVar41 = uStack_388 & 0xff00ffffffffffff;
                                          uVar53 = uStack_388;
                                          uStack_160 = uVar31;
                                          if ((uStack_388 & 0x80000000000000) != 0) {
                                            lVar39 = *(long *)(uVar41 - 8);
                                            lVar26 = lVar39 + 9;
                                            plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))
                                                                        (&DAT_0f5463b0,lVar26,8);
                                            if (lVar26 != 0 && plVar28 == (long *)0x0) {
                                              func_0x0eec74c0(lVar26,8);
                                            }
                                            *plVar28 = lVar39;
                                            memcpy(plVar28 + 1,uVar41,lVar39);
                                            *(undefined1 *)((long)plVar28 + lVar39 + 8) = 0;
                                            uVar53 = (ulong)(plVar28 + 1) & 0xff00ffffffffffff |
                                                     0x80000000000000;
                                          }
                                          puVar54 = *(undefined8 **)(psVar51 + 0x38);
                                          puVar9 = *(undefined8 **)(psVar51 + 0x3c);
                                          uStack_158 = uVar53;
                                          if (puVar54 != puVar9) {
                                            do {
                                              plVar28 = (long *)*puVar54;
                                              uStack_1e8 = (undefined4)uStack_178;
                                              uStack_1e4 = uStack_178._4_4_;
                                              uStack_1e0 = (undefined4)uStack_170;
                                              uStack_1dc = uStack_170._4_4_;
                                              uStack_1f8 = (undefined4)uStack_188;
                                              uStack_1f4 = uStack_188._4_4_;
                                              uStack_1f0 = (undefined4)uStack_180;
                                              uStack_1ec = uStack_180._4_4_;
                                              uStack_1d8 = uVar35;
                                              uStack_1d0 = 0;
                                              uVar44 = uVar31;
                                              if ((uVar31 & 0x80000000000000) != 0) {
                                                lVar39 = *(long *)((uVar31 & 0xff00ffffffffffff) - 8
                                                                  );
                                                lVar26 = lVar39 + 9;
                                                plVar34 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20)
                                                                  )(&DAT_0f5463b0,lVar26,8);
                                                if (lVar26 != 0 && plVar34 == (long *)0x0) {
                                                  func_0x0eec74c0(lVar26,8);
                                                }
                                                *plVar34 = lVar39;
                                                memcpy(plVar34 + 1,uVar31 & 0xff00ffffffffffff,
                                                       lVar39);
                                                *(undefined1 *)((long)plVar34 + lVar39 + 8) = 0;
                                                uVar44 = (ulong)(plVar34 + 1) & 0xff00ffffffffffff |
                                                         0x80000000000000;
                                              }
                                              uStack_1c8 = 0;
                                              uVar45 = uVar53;
                                              uStack_1d0 = uVar44;
                                              if ((uVar53 & 0x80000000000000) != 0) {
                                                lVar39 = *(long *)((uVar53 & 0xff00ffffffffffff) - 8
                                                                  );
                                                lVar26 = lVar39 + 9;
                                                plVar34 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20)
                                                                  )(&DAT_0f5463b0,lVar26,8);
                                                if (lVar26 != 0 && plVar34 == (long *)0x0) {
                                                  func_0x0eec74c0(lVar26,8);
                                                }
                                                *plVar34 = lVar39;
                                                memcpy(plVar34 + 1,uVar53 & 0xff00ffffffffffff,
                                                       lVar39);
                                                *(undefined1 *)((long)plVar34 + lVar39 + 8) = 0;
                                                uVar45 = (ulong)(plVar34 + 1) & 0xff00ffffffffffff |
                                                         0x80000000000000;
                                              }
                                              uStack_1c8 = uVar45;
                                              bVar20 = func_0x0551ca70(&uStack_1d8,&UNK_0f459778);
                                              if (CONCAT44(uStack_1dc,uStack_1e0) == 0) {
                                                (**(code **)(*plVar28 + 0x18 +
                                                            (ulong)(bVar20 ^ 1) * 8))
                                                          (plVar28,CONCAT44(uStack_1f4,uStack_1f8),
                                                           CONCAT44(uStack_1ec,uStack_1f0),
                                                           CONCAT44(uStack_1e4,uStack_1e8));
                                              }
                                              else {
                                                (**(code **)(*plVar28 + 0x28 +
                                                            (ulong)(bVar20 ^ 1) * 8))(plVar28);
                                              }
                                              if ((uStack_1c8 & 0x80000000000000) != 0) {
                                                (**(code **)(_DAT_0f5463b0 + 0x28))
                                                          (&DAT_0f5463b0,
                                                           (uStack_1c8 & 0xff00ffffffffffff) - 8);
                                              }
                                              uStack_1c8 = 0;
                                              if ((uStack_1d0 & 0x80000000000000) != 0) {
                                                (**(code **)(_DAT_0f5463b0 + 0x28))
                                                          (&DAT_0f5463b0,
                                                           (uStack_1d0 & 0xff00ffffffffffff) - 8);
                                              }
                                              uStack_1d0 = 0;
                                              puVar54 = puVar54 + 1;
                                            } while (puVar54 != puVar9);
                                          }
                                          uStack_1c0 = &puStack_130;
                                          uStack_1b0 = &plStack_2e0;
                                          uStack_1a0 = uVar35;
                                          uStack_1b8 = pplVar25;
                                          uStack_1a8 = puVar40;
                                          if ((uVar27 & 0x80000000000000) != 0) {
                                            lVar39 = *(long *)(uVar38 - 8);
                                            lVar26 = lVar39 + 9;
                                            plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))
                                                                        (&DAT_0f5463b0,lVar26,8);
                                            if (lVar26 != 0 && plVar28 == (long *)0x0) {
                                              func_0x0eec74c0(lVar26,8);
                                            }
                                            *plVar28 = lVar39;
                                            memcpy(plVar28 + 1,uVar38,lVar39);
                                            *(undefined1 *)((long)plVar28 + lVar39 + 8) = 0;
                                            uVar27 = (ulong)(plVar28 + 1) & 0xff00ffffffffffff |
                                                     0x80000000000000;
                                          }
                                          uStack_190 = 0;
                                          uStack_198 = uVar27;
                                          if ((uVar56 & 0x80000000000000) != 0) {
                                            lVar39 = *(long *)(uVar41 - 8);
                                            lVar26 = lVar39 + 9;
                                            plVar28 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))
                                                                        (&DAT_0f5463b0,lVar26,8);
                                            if (lVar26 != 0 && plVar28 == (long *)0x0) {
                                              func_0x0eec74c0(lVar26,8);
                                            }
                                            *plVar28 = lVar39;
                                            memcpy(plVar28 + 1,uVar41,lVar39);
                                            *(undefined1 *)((long)plVar28 + lVar39 + 8) = 0;
                                            uVar56 = (ulong)(plVar28 + 1) & 0xff00ffffffffffff |
                                                     0x80000000000000;
                                          }
                                          puVar54 = *(undefined8 **)(psVar52 + 0x38);
                                          puVar9 = *(undefined8 **)(psVar52 + 0x3c);
                                          uStack_190 = uVar56;
                                          if (puVar54 != puVar9) {
                                            do {
                                              plVar28 = (long *)*puVar54;
                                              uStack_228 = (undefined4)uStack_1b0;
                                              uStack_224 = uStack_1b0._4_4_;
                                              uStack_220 = (undefined4)uStack_1a8;
                                              uStack_21c = uStack_1a8._4_4_;
                                              uStack_238 = (undefined4)uStack_1c0;
                                              uStack_234 = uStack_1c0._4_4_;
                                              uStack_230 = (undefined4)uStack_1b8;
                                              uStack_22c = uStack_1b8._4_4_;
                                              uStack_218 = uVar35;
                                              uStack_210 = 0;
                                              uVar31 = uVar27;
                                              if ((uVar27 & 0x80000000000000) != 0) {
                                                lVar39 = *(long *)((uVar27 & 0xff00ffffffffffff) - 8
                                                                  );
                                                lVar26 = lVar39 + 9;
                                                plVar34 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20)
                                                                  )(&DAT_0f5463b0,lVar26,8);
                                                if (lVar26 != 0 && plVar34 == (long *)0x0) {
                                                  func_0x0eec74c0(lVar26,8);
                                                }
                                                *plVar34 = lVar39;
                                                memcpy(plVar34 + 1,uVar27 & 0xff00ffffffffffff,
                                                       lVar39);
                                                *(undefined1 *)((long)plVar34 + lVar39 + 8) = 0;
                                                uVar31 = (ulong)(plVar34 + 1) & 0xff00ffffffffffff |
                                                         0x80000000000000;
                                              }
                                              uStack_208 = 0;
                                              uVar38 = uVar56;
                                              uStack_210 = uVar31;
                                              if ((uVar56 & 0x80000000000000) != 0) {
                                                lVar39 = *(long *)((uVar56 & 0xff00ffffffffffff) - 8
                                                                  );
                                                lVar26 = lVar39 + 9;
                                                plVar34 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20)
                                                                  )(&DAT_0f5463b0,lVar26,8);
                                                if (lVar26 != 0 && plVar34 == (long *)0x0) {
                                                  func_0x0eec74c0(lVar26,8);
                                                }
                                                *plVar34 = lVar39;
                                                memcpy(plVar34 + 1,uVar56 & 0xff00ffffffffffff,
                                                       lVar39);
                                                *(undefined1 *)((long)plVar34 + lVar39 + 8) = 0;
                                                uVar38 = (ulong)(plVar34 + 1) & 0xff00ffffffffffff |
                                                         0x80000000000000;
                                              }
                                              uStack_208 = uVar38;
                                              bVar20 = func_0x0551ca70(&uStack_218,&UNK_0f459778);
                                              if (CONCAT44(uStack_21c,uStack_220) == 0) {
                                                uVar36 = 0;
                                                (**(code **)(*plVar28 + 0x18 +
                                                            (ulong)(bVar20 ^ 1) * 8))
                                                          (plVar28,CONCAT44(uStack_234,uStack_238),
                                                           CONCAT44(uStack_22c,uStack_230),
                                                           CONCAT44(uStack_224,uStack_228));
                                              }
                                              else {
                                                uVar36 = (**(code **)(*plVar28 + 0x28 +
                                                                     (ulong)(bVar20 ^ 1) * 8))
                                                                   (plVar28);
                                              }
                                              if ((uStack_208 & 0x80000000000000) != 0) {
                                                (**(code **)(_DAT_0f5463b0 + 0x28))
                                                          (&DAT_0f5463b0,
                                                           (uStack_208 & 0xff00ffffffffffff) - 8);
                                              }
                                              uStack_208 = 0;
                                              if ((uStack_210 & 0x80000000000000) != 0) {
                                                (**(code **)(_DAT_0f5463b0 + 0x28))
                                                          (&DAT_0f5463b0,
                                                           (uStack_210 & 0xff00ffffffffffff) - 8);
                                              }
                                              uStack_210 = 0;
                                              if (0 < (int)uVar36) {
                                                uVar24 = 0xff;
                                                if ((plStack_378 != (long *)0x0) &&
                                                   (plVar28 = (long *)*plStack_378,
                                                   plVar28 != (long *)0x0)) {
                                                  func_0x0c455e60(&uStack_548,&pplStack_380);
                                                  uVar24 = (**(code **)(*plVar28 + 0x328))
                                                                     (plVar28,&uStack_548);
                                                  plVar28 = uStack_540;
                                                  uStack_548 = &UNK_0f3773c0;
                                                  uStack_540 = (long *)0x0;
                                                  if (plVar28 != (long *)0x0) {
                                                    (**(code **)(*plVar28 + 0x90))();
                                                  }
                                                  uVar24 = uVar24 & 0xff;
                                                }
                                                if (uVar36 < uVar24) {
                                                  uVar24 = uVar36;
                                                }
                                                func_0x0c4564a0(&pplStack_380,uVar24);
                                                puVar40[4] = uVar24;
                                              }
                                              puVar54 = puVar54 + 1;
                                            } while (puVar54 != puVar9);
                                          }
                                          func_0x0ca1a210(&uStack_548,&pplStack_380,&puStack_b0,
                                                          &puStack_130);
                                          uStack_3b8 = *(undefined1 *)(puVar40 + 1);
                                          uStack_3bc = puVar40[3];
                                          uStack_3c0 = *puVar40;
                                          uStack_3c8 = (undefined4)uStack_248;
                                          uStack_3a8 = *(undefined4 *)(psVar51 + 8);
                                          lVar26 = param_1[4];
                                          uVar27 = *(ulong *)(lVar26 + 0x10);
                                          uStack_3a4 = uVar58;
                                          if (uVar27 < *(ulong *)(lVar26 + 0x18)) {
                                            func_0x07136730(uVar27,&uStack_548);
                                            lVar39 = uVar27 + 0x1b0;
                                            *(long *)(lVar26 + 0x10) = lVar39;
                                          }
                                          else {
                                            lVar39 = func_0x07136840(lVar26 + 8,&uStack_548);
                                          }
                                          plVar28 = plStack_3d0;
                                          *(long *)(lVar26 + 0x10) = lVar39;
                                          uStack_240 = uStack_240 + 1;
                                          lVar39 = 7;
                                          if (uStack_240 < uVar48) {
                                            lVar39 = 0;
                                          }
                                          puStack_448 = &UNK_0f36e918;
                                          plStack_3d0 = (long *)0x0;
                                          if (plVar28 != (long *)0x0) {
                                            (**(code **)(*plVar28 + 8))();
                                          }
                                          if (lStack_3f8 != 0) {
                                            lStack_3f0 = lStack_3f8;
                                            func_0x0412a280(lStack_3f8,lStack_3e8 - lStack_3f8);
                                          }
                                          if (lStack_418 != 0) {
                                            lStack_410 = lStack_418;
                                            func_0x0412a280(lStack_418,lStack_408 - lStack_418);
                                          }
                                          plVar28 = plStack_438;
                                          plStack_438 = (long *)0x0;
                                          if (plVar28 != (long *)0x0) {
                                            (**(code **)(*plVar28 + 8))();
                                          }
                                          if (plStack_440 != (long *)0x0) {
                                            LOCK();
                                            *(int *)((long)plStack_440 + 0xc) =
                                                 *(int *)((long)plStack_440 + 0xc) + -1;
                                            UNLOCK();
                                            if (((*(int *)((long)plStack_440 + 0xc) < 1) &&
                                                (*plStack_440 == 0)) && (plStack_440 != (long *)0x0)
                                               ) {
                                              func_0x0412a280(plStack_440,0x10);
                                            }
                                            plStack_440 = (long *)0x0;
                                          }
                                          plVar28 = plStack_450;
                                          puStack_4c8 = &UNK_0f36e918;
                                          plStack_450 = (long *)0x0;
                                          if (plVar28 != (long *)0x0) {
                                            (**(code **)(*plVar28 + 8))();
                                          }
                                          if (lStack_478 != 0) {
                                            lStack_470 = lStack_478;
                                            func_0x0412a280(lStack_478,lStack_468 - lStack_478);
                                          }
                                          if (lStack_498 != 0) {
                                            lStack_490 = lStack_498;
                                            func_0x0412a280(lStack_498,lStack_488 - lStack_498);
                                          }
                                          plVar28 = plStack_4b8;
                                          plStack_4b8 = (long *)0x0;
                                          if (plVar28 != (long *)0x0) {
                                            (**(code **)(*plVar28 + 8))();
                                          }
                                          if (plStack_4c0 != (long *)0x0) {
                                            LOCK();
                                            *(int *)((long)plStack_4c0 + 0xc) =
                                                 *(int *)((long)plStack_4c0 + 0xc) + -1;
                                            UNLOCK();
                                            if (((*(int *)((long)plStack_4c0 + 0xc) < 1) &&
                                                (*plStack_4c0 == 0)) && (plStack_4c0 != (long *)0x0)
                                               ) {
                                              func_0x0412a280(plStack_4c0,0x10);
                                            }
                                            plStack_4c0 = (long *)0x0;
                                          }
                                          plVar28 = plStack_4d0;
                                          uStack_548 = &UNK_0f36e918;
                                          plStack_4d0 = (long *)0x0;
                                          if (plVar28 != (long *)0x0) {
                                            (**(code **)(*plVar28 + 8))();
                                          }
                                          if (plStack_4f8 != (long *)0x0) {
                                            plStack_4f0 = plStack_4f8;
                                            func_0x0412a280(plStack_4f8,
                                                            (long)plStack_4e8 - (long)plStack_4f8);
                                          }
                                          if (puStack_518 != (undefined *)0x0) {
                                            puStack_510 = puStack_518;
                                            func_0x0412a280(puStack_518,
                                                            (long)plStack_508 - (long)puStack_518);
                                          }
                                          plVar28 = plStack_538;
                                          plStack_538 = (long *)0x0;
                                          if (plVar28 != (long *)0x0) {
                                            (**(code **)(*plVar28 + 8))();
                                          }
                                          if (uStack_540 != (long *)0x0) {
                                            LOCK();
                                            *(int *)((long)uStack_540 + 0xc) =
                                                 *(int *)((long)uStack_540 + 0xc) + -1;
                                            UNLOCK();
                                            if (((*(int *)((long)uStack_540 + 0xc) < 1) &&
                                                (*uStack_540 == 0)) && (uStack_540 != (long *)0x0))
                                            {
                                              func_0x0412a280(uStack_540,0x10);
                                            }
                                          }
                                          if ((uStack_190 & 0x80000000000000) != 0) {
                                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                                      (&DAT_0f5463b0,
                                                       (uStack_190 & 0xff00ffffffffffff) - 8);
                                          }
                                          uStack_190 = 0;
                                          if ((uStack_198 & 0x80000000000000) != 0) {
                                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                                      (&DAT_0f5463b0,
                                                       (uStack_198 & 0xff00ffffffffffff) - 8);
                                          }
                                          if ((uStack_158 & 0x80000000000000) != 0) {
                                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                                      (&DAT_0f5463b0,
                                                       (uStack_158 & 0xff00ffffffffffff) - 8);
                                          }
                                          uStack_158 = 0;
                                          if ((uStack_160 & 0x80000000000000) != 0) {
                                            (**(code **)(_DAT_0f5463b0 + 0x28))
                                                      (&DAT_0f5463b0,
                                                       (uStack_160 & 0xff00ffffffffffff) - 8);
                                          }
                                          lVar26 = lStack_2b0;
                                          puVar54 = puStack_2a0;
                                          if ((uStack_280 & 1) != 0) {
                                            func_0x0412a280(uStack_270,
                                                            uStack_280 & 0xfffffffffffffffe);
                                            lVar26 = lStack_2b0;
                                            puVar54 = puStack_2a0;
                                          }
                                          while (puVar54 != (undefined8 *)0x0) {
                                            puVar9 = (undefined8 *)*puVar54;
                                            lStack_2b0 = lVar26;
                                            func_0x0412a280(puVar54,0x18);
                                            lVar26 = lStack_2b0;
                                            puVar54 = puVar9;
                                          }
                                          lStack_2b0 = 0;
                                          if (lVar26 != 0) {
                                            func_0x0412a280(lVar26,lStack_2a8 << 3);
                                          }
                                        }
LAB_0717c967:
                                        plVar28 = plStack_b8;
                                        puStack_130 = &UNK_0f36e918;
                                        plStack_b8 = (long *)0x0;
                                        if (plVar28 != (long *)0x0) {
                                          (**(code **)(*plVar28 + 8))();
                                        }
                                        if (lStack_e0 != 0) {
                                          lStack_d8 = lStack_e0;
                                          func_0x0412a280(lStack_e0,lStack_d0 - lStack_e0);
                                        }
                                        if (lStack_100 != 0) {
                                          lStack_f8 = lStack_100;
                                          func_0x0412a280(lStack_100,lStack_f0 - lStack_100);
                                        }
                                        plVar28 = plStack_120;
                                        plStack_120 = (long *)0x0;
                                        if (plVar28 != (long *)0x0) {
                                          (**(code **)(*plVar28 + 8))();
                                        }
                                        if (plStack_128 != (long *)0x0) {
                                          LOCK();
                                          *(int *)((long)plStack_128 + 0xc) =
                                               *(int *)((long)plStack_128 + 0xc) + -1;
                                          UNLOCK();
                                          if (((*(int *)((long)plStack_128 + 0xc) < 1) &&
                                              (*plStack_128 == 0)) && (plStack_128 != (long *)0x0))
                                          {
                                            func_0x0412a280(plStack_128,0x10);
                                          }
                                        }
                                      }
                                      else {
                                        iVar22 = (*(code *)(*pplVar25)[3])();
                                        lVar26 = *(long *)(lVar26 + 0x18);
                                        func_0x0ca14280(&plStack_2e0,&puStack_2f0,
                                                        (int)*(short *)(lVar26 + (long)iVar22 * 0x88
                                                                       ));
                                        plVar28 = plStack_2e0;
                                        if (plStack_2e0 != (long *)0x0) {
                                          lVar39 = *plStack_2e0;
                                          if (lVar39 == 0) {
                                            uVar58 = 0;
LAB_0717b6f0:
                                            LOCK();
                                            *(int *)((long)plVar28 + 0xc) =
                                                 *(int *)((long)plVar28 + 0xc) + -1;
                                            UNLOCK();
                                            iVar22 = *(int *)((long)plVar28 + 0xc);
                                          }
                                          else {
                                            lVar26 = lVar26 + (long)iVar22 * 0x88;
                                            iVar22 = *(int *)(lVar26 + 8);
                                            lVar46 = lVar39;
                                            if (iVar22 < *(int *)(lVar26 + 0xc)) {
                                              iVar23 = (*(code *)(*pplVar25)[3])();
                                              iVar22 = iVar22 + iVar23;
                                              lVar46 = *plVar28;
                                            }
                                            func_0x0c44f050(&uStack_548,lVar46,iVar22,
                                                            *(undefined4 *)(lVar26 + 4));
                                            uStack_548 = &UNK_0f36e858;
                                            func_0x0c44f4e0(&puStack_b0,&uStack_548);
                                            plVar34 = plStack_4d0;
                                            uStack_548 = &UNK_0f36e918;
                                            plStack_4d0 = (long *)0x0;
                                            if (plVar34 != (long *)0x0) {
                                              (**(code **)(*plVar34 + 8))();
                                            }
                                            if (plStack_4f8 != (long *)0x0) {
                                              plStack_4f0 = plStack_4f8;
                                              func_0x0412a280(plStack_4f8,
                                                              (long)plStack_4e8 - (long)plStack_4f8)
                                              ;
                                            }
                                            if (puStack_518 != (undefined *)0x0) {
                                              puStack_510 = puStack_518;
                                              func_0x0412a280(puStack_518,
                                                              (long)plStack_508 - (long)puStack_518)
                                              ;
                                            }
                                            plVar34 = plStack_538;
                                            plStack_538 = (long *)0x0;
                                            if (plVar34 != (long *)0x0) {
                                              (**(code **)(*plVar34 + 8))();
                                            }
                                            if (uStack_540 == (long *)0x0) {
                                              uVar58 = *(undefined4 *)(lVar26 + 0x10);
                                              goto LAB_0717b6f0;
                                            }
                                            LOCK();
                                            *(int *)((long)uStack_540 + 0xc) =
                                                 *(int *)((long)uStack_540 + 0xc) + -1;
                                            UNLOCK();
                                            if (((*(int *)((long)uStack_540 + 0xc) < 1) &&
                                                (*uStack_540 == 0)) && (uStack_540 != (long *)0x0))
                                            {
                                              func_0x0412a280(uStack_540,0x10);
                                            }
                                            uVar58 = *(undefined4 *)(lVar26 + 0x10);
                                            if (plStack_2e0 == (long *)0x0) goto LAB_0717b735;
                                            LOCK();
                                            *(int *)((long)plStack_2e0 + 0xc) =
                                                 *(int *)((long)plStack_2e0 + 0xc) + -1;
                                            UNLOCK();
                                            iVar22 = *(int *)((long)plStack_2e0 + 0xc);
                                            plVar28 = plStack_2e0;
                                          }
                                          if (((iVar22 < 1) && (*plVar28 == 0)) &&
                                             (plStack_2e0 != (long *)0x0)) {
                                            func_0x0412a280(plStack_2e0,0x10);
                                          }
                                          if (lVar39 != 0) goto LAB_0717b735;
                                        }
                                        lVar39 = 0;
                                      }
                                      plVar28 = plStack_38;
                                      puStack_b0 = &UNK_0f36e918;
                                      plStack_38 = (long *)0x0;
                                      if (plVar28 != (long *)0x0) {
                                        (**(code **)(*plVar28 + 8))();
                                      }
                                      if (lStack_60 != 0) {
                                        lStack_58 = lStack_60;
                                        func_0x0412a280(lStack_60,lStack_50 - lStack_60);
                                      }
                                      if (lStack_80 != 0) {
                                        lStack_78 = lStack_80;
                                        func_0x0412a280(lStack_80,lStack_70 - lStack_80);
                                      }
                                      plVar28 = plStack_a0;
                                      plStack_a0 = (long *)0x0;
                                      if (plVar28 != (long *)0x0) {
                                        (**(code **)(*plVar28 + 8))();
                                      }
                                      if (plStack_a8 != (long *)0x0) {
                                        LOCK();
                                        *(int *)((long)plStack_a8 + 0xc) =
                                             *(int *)((long)plStack_a8 + 0xc) + -1;
                                        UNLOCK();
                                        if (((*(int *)((long)plStack_a8 + 0xc) < 1) &&
                                            (*plStack_a8 == 0)) && (plStack_a8 != (long *)0x0)) {
                                          func_0x0412a280(plStack_a8,0x10);
                                        }
                                      }
                                    }
                                    plVar28 = plStack_308;
                                    pplStack_380 = (long **)&UNK_0f36e918;
                                    plStack_308 = (long *)0x0;
                                    if (plVar28 != (long *)0x0) {
                                      (**(code **)(*plVar28 + 8))();
                                    }
                                    if (lStack_330 != 0) {
                                      lStack_328 = lStack_330;
                                      func_0x0412a280(lStack_330,lStack_320 - lStack_330);
                                    }
                                    if (lStack_350 != 0) {
                                      lStack_348 = lStack_350;
                                      func_0x0412a280(lStack_350,lStack_340 - lStack_350);
                                    }
                                    plVar28 = (long *)CONCAT53(uStack_36d,uStack_370);
                                    uStack_370 = 0;
                                    uStack_36d = 0;
                                    if (plVar28 != (long *)0x0) {
                                      (**(code **)(*plVar28 + 8))();
                                    }
                                    if (plStack_378 != (long *)0x0) {
                                      LOCK();
                                      *(int *)((long)plStack_378 + 0xc) =
                                           *(int *)((long)plStack_378 + 0xc) + -1;
                                      UNLOCK();
                                      if (((*(int *)((long)plStack_378 + 0xc) < 1) &&
                                          (*plStack_378 == 0)) && (plStack_378 != (long *)0x0)) {
                                        func_0x0412a280(plStack_378,0x10);
                                      }
                                    }
                                    if (lStack_2e8 != 0) {
                                      func_0x0412c2d0();
                                    }
                                    if (lVar39 != 0) break;
                                  }
                                }
                              }
                            }
                            puVar40 = puVar40 + 0x12;
                          } while (puVar40 != puVar37);
                        }
                      }
                      piVar30 = piVar30 + 8;
                      uVar48 = uStack_388;
                    } while (piVar30 != piStack_138);
                  }
                  if ((uVar48 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uVar48 & 0xff00ffffffffffff) - 8);
                  }
                  unaff_RBX = &plStack_2e0;
                  uStack_388 = 0;
                  if ((uStack_390 & 0x80000000000000) != 0) {
                    (**(code **)(_DAT_0f5463b0 + 0x28))
                              (&DAT_0f5463b0,(uStack_390 & 0xff00ffffffffffff) - 8);
                  }
                  uVar27 = uStack_248 + 1;
                  if (uVar27 == uStack_140) break;
                  goto LAB_07179459;
                }
                lVar46 = *(long *)(lVar26 + 0x20);
                lVar49 = (long)pplVar7 - lVar46;
                uVar27 = lVar49 >> 2;
                uVar31 = uVar27 + 1;
                if (uVar31 < 0x4000000000000000) {
                  unaff_RBX = (long **)((long)unaff_RBX - lVar46);
                  uVar38 = (long)unaff_RBX >> 1;
                  if ((ulong)((long)unaff_RBX >> 1) <= uVar31) {
                    uVar38 = uVar31;
                  }
                  if ((long **)0x7ffffffffffffffb < unaff_RBX) {
                    uVar38 = 0x3fffffffffffffff;
                  }
                  if (0x3fffffffffffffff < uVar38) goto LAB_0717ce2c;
                  lVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar38 * 4);
                  if (lVar29 == 0) {
                    func_0x0eec74c0(uVar38 * 4,0);
                  }
                  *(undefined4 *)(lVar29 + lVar49) = *puVar40;
                  lVar39 = lVar29 + lVar49 + 4;
                  lVar50 = lVar29 + lVar49 + uVar27 * -4;
                  memcpy(lVar50,lVar46,lVar49);
                  *(long *)(lVar26 + 0x20) = lVar50;
                  *(long *)(lVar26 + 0x28) = lVar39;
                  *(ulong *)(lVar26 + 0x30) = lVar29 + uVar38 * 4;
                  if (lVar46 != 0) {
                    func_0x0412a280(lVar46,unaff_RBX);
                  }
                  goto LAB_07179721;
                }
                func_0x0533ee50();
LAB_0717ce2c:
                func_0x04882eb0();
LAB_0717ce31:
                uVar36 = (uint)uVar27;
                func_0x0ee49c60(unaff_RBX + -0x148);
                *(undefined1 *)(unaff_RBX + -0xb) = 1;
LAB_071793b4:
                unaff_RBX[-0x196] = (long *)(unaff_RBX + -0x148);
                func_0x0417d010(&UNK_08b54510,unaff_RBX + -0x2d5,0xf53dab8);
                *(undefined1 *)(unaff_RBX + -0x195) = 1;
joined_r0x07179298:
                pplVar25 = unaff_RBX + -0x2d5;
              }
              lVar39 = *(long *)(param_1[4] + 0x10);
              iVar22 = _DAT_0f6d2e28;
              for (lVar26 = *(long *)(param_1[4] + 8); lVar26 != lVar39; lVar26 = lVar26 + 0x1b0) {
                if (*(int *)(lVar26 + 0x1a8) == 0) {
                  iVar23 = iVar22 + 2;
                  iVar22 = iVar22 + 1;
                  if (iVar22 == 0) {
                    iVar22 = iVar23;
                  }
                  _DAT_0f6d2e28 = iVar22;
                  *(int *)(lVar26 + 0x1a8) = iVar22;
                }
              }
              pbVar1 = (byte *)(lStack_148 + 0x20);
              pbVar47 = (byte *)(param_1 + 8);
              uVar27 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
              if (pbVar47 != pbVar1) {
                bVar20 = *pbVar1;
                if ((*pbVar47 & 1) == 0) {
                  if ((bVar20 & 1) == 0) {
                    param_1[10] = *(long *)(lStack_148 + 0x30);
                    lVar26 = *(long *)(lStack_148 + 0x28);
                    *(undefined8 *)pbVar47 = *(undefined8 *)pbVar1;
                    param_1[9] = lVar26;
                  }
                  else {
                    func_0x04885070(pbVar47,*(undefined8 *)(lStack_148 + 0x30),
                                    *(undefined8 *)(lStack_148 + 0x28));
                  }
                }
                else {
                  bVar57 = (bVar20 & 1) != 0;
                  lVar26 = lStack_148 + 0x21;
                  if (bVar57) {
                    lVar26 = *(long *)(lStack_148 + 0x30);
                  }
                  uVar31 = (ulong)(bVar20 >> 1);
                  if (bVar57) {
                    uVar31 = *(ulong *)(lStack_148 + 0x28);
                  }
                  func_0x04885120(pbVar47,lVar26,uVar31);
                }
              }
              goto LAB_07179377;
            }
          }
        }
LAB_0717ce0b:
        pplVar25 = (long **)func_0x04890760();
LAB_0717ce10:
        func_0x0eec74c0(0x38,0);
        unaff_RBX = pplVar25;
      } while( true );
    }
  }
  else {
    bVar20 = *(byte *)(param_1 + 8);
    if ((bVar20 & 1) == 0) {
      pplVar25 = (long **)(ulong)(bVar20 >> 1);
    }
    else {
      pplVar25 = (long **)param_1[9];
    }
    bVar5 = *(byte *)(lVar26 + 0x20);
    pplVar7 = *(long ***)(lVar26 + 0x28);
    unaff_RBX = (long **)(ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      unaff_RBX = pplVar7;
    }
    if (pplVar25 == unaff_RBX) {
      if ((bVar20 & 1) == 0) {
        lVar39 = (long)param_1 + 0x41;
        if ((bVar5 & 1) == 0) goto LAB_07178fd5;
LAB_07178ffc:
        lVar46 = *(long *)(lVar26 + 0x30);
      }
      else {
        lVar39 = param_1[10];
        if ((bVar5 & 1) != 0) goto LAB_07178ffc;
LAB_07178fd5:
        lVar46 = lVar26 + 0x21;
      }
      iVar22 = func_0x0eee3000(lVar39,lVar46,pplVar25);
      if ((pplVar25 != (long **)0x0) && (iVar22 != 0)) goto LAB_07179021;
    }
    else if (pplVar25 != (long **)0x0) goto LAB_07179021;
    plVar28 = param_1 + 8;
    if (plVar28 != (long *)(lVar26 + 0x20)) {
      if ((bVar20 & 1) == 0) {
        if ((bVar5 & 1) == 0) {
          param_1[10] = *(long *)(lVar26 + 0x30);
          lVar39 = *(long *)(lVar26 + 0x28);
          *plVar28 = *(long *)(lVar26 + 0x20);
          param_1[9] = lVar39;
        }
        else {
          func_0x04885070(plVar28,*(undefined8 *)(lVar26 + 0x30),pplVar7);
        }
      }
      else {
        if ((bVar5 & 1) == 0) {
          lVar26 = lVar26 + 0x21;
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x30);
        }
        func_0x04885120(plVar28,lVar26,unaff_RBX);
      }
    }
  }
LAB_07179375:
  uVar27 = 0;
LAB_07179377:
  return uVar27 & 0xffffffff;
LAB_0717cdf7:
  func_0x049d03a0();
LAB_0717cdfc:
  func_0x049d0440();
LAB_0717ce01:
  func_0x049d0440();
LAB_0717ce06:
  func_0x049d03a0();
  goto LAB_0717ce0b;
}


