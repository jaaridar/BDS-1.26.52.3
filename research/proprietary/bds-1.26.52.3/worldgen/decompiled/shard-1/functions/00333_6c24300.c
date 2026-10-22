/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x6d24300 (ELF vaddr 0x6c24300)
 * Label: caller-of-callee
 * Body:  [[06d24300, 06d27f84] [06d28105, 06d28119] [06d2819d, 06d2823c] [06d283a4, 06d283ea] [06d28484, 06d286cf]]
 * Ghidra: FUN_06d24300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06d24300(undefined4 param_1,long *param_2,long *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  ulong *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  long *plVar13;
  uint *puVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 (*pauVar19) [16];
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  long *plVar24;
  ulong extraout_RDX;
  byte bVar25;
  int iVar26;
  undefined1 (*unaff_RBP) [16];
  ulong uVar27;
  uint uVar28;
  byte *pbVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  long *plVar35;
  byte *pbVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  long *plVar40;
  undefined1 (*unaff_R13) [16];
  long *plVar41;
  undefined1 (*unaff_R15) [16];
  bool bVar42;
  float fVar43;
  float fVar44;
  int iVar45;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  char *pcStack_678;
  long *plStack_670;
  long *plStack_668;
  long lStack_660;
  long *plStack_658;
  uint *puStack_650;
  uint *puStack_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 uStack_638;
  undefined1 auStack_628 [24];
  long *plStack_610;
  undefined1 auStack_608 [4];
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  long *plStack_5f8;
  long *plStack_5e8;
  long *plStack_5e0;
  undefined1 auStack_5d8 [24];
  uint auStack_5c0 [5];
  uint uStack_5ac;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  uint uStack_594;
  uint uStack_590;
  uint uStack_58c;
  long lStack_588;
  float fStack_574;
  byte bStack_570;
  undefined4 uStack_56f;
  undefined2 uStack_56b;
  undefined1 uStack_569;
  undefined7 uStack_568;
  undefined1 uStack_561;
  byte *pbStack_560;
  ulong *puStack_558;
  long *plStack_548;
  uint *puStack_540;
  undefined8 uStack_538;
  int iStack_530;
  undefined4 uStack_52c;
  byte bStack_528;
  byte bStack_527;
  short sStack_526;
  undefined1 uStack_524;
  undefined2 uStack_523;
  undefined1 uStack_521;
  uint uStack_520;
  undefined4 uStack_51c;
  byte *pbStack_518;
  undefined1 auStack_510 [8];
  undefined8 uStack_508;
  undefined1 uStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long *plStack_4b0;
  uint auStack_4a8 [4];
  uint uStack_498;
  byte bStack_420;
  undefined7 uStack_41f;
  undefined1 uStack_418;
  undefined4 uStack_417;
  undefined1 uStack_413;
  undefined8 uStack_410;
  long *plStack_408;
  byte bStack_400;
  undefined4 uStack_3ff;
  undefined3 uStack_3fb;
  undefined8 uStack_3f0;
  uint *puStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long *plStack_370;
  uint auStack_368 [4];
  uint uStack_358;
  char cStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  long *plStack_338;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long *plStack_2d0;
  uint auStack_2c8 [4];
  uint uStack_2b8;
  uint *puStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long *plStack_238;
  uint auStack_230 [4];
  uint uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 uStack_200;
  uint *puStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *plStack_180;
  uint auStack_178 [4];
  uint uStack_168;
  uint *puStack_160;
  long *plStack_158;
  long *plStack_150;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_e8;
  uint auStack_e0 [4];
  uint uStack_d0;
  uint *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long *plStack_50;
  uint auStack_48 [4];
  uint uStack_38;
  
  if (param_3 == (long *)0x0) {
    return;
  }
  plVar40 = (long *)0xffffffff;
  lVar11 = param_3[2];
  uVar8 = *(uint *)(param_3 + 3);
  plVar35 = (long *)(*(long *)(lVar11 + 0x38) +
                    (ulong)((int)((ulong)(*(long *)(lVar11 + 0x40) - *(long *)(lVar11 + 0x38)) >> 3)
                            - 1U & 0xacb47b38) * 8);
  do {
    if (*plVar35 == -1) {
      return;
    }
    lVar38 = *plVar35 * 0x20;
    plVar35 = (long *)(*(long *)(lVar11 + 0x50) + lVar38);
  } while (*(int *)(*(long *)(lVar11 + 0x50) + 8 + lVar38) != -0x534b84c8);
  if (plVar35 == *(long **)(lVar11 + 0x58)) {
    return;
  }
  lVar11 = plVar35[2];
  if (lVar11 == 0) {
    return;
  }
  uVar39 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
  if ((ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >> 3) <= uVar39) {
    return;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 8) + uVar39 * 8);
  if (lVar11 == 0) {
    return;
  }
  if (0x3fffe < (uVar8 & 0xfffc0000 ^ *(uint *)(lVar11 + (ulong)(uVar8 & 0x7ff) * 4))) {
    return;
  }
  plStack_610 = (long *)CONCAT44(plStack_610._4_4_,param_4);
  plStack_5e8 = (long *)CONCAT44(plStack_5e8._4_4_,param_1);
  puStack_650 = (uint *)0x6d24402;
  plStack_408 = param_2;
  lVar11 = (**(code **)(*param_3 + 0x6b0))(param_3);
  if (lVar11 == 0) {
    return;
  }
  puStack_650 = (uint *)0x6d24417;
  pauVar12 = (undefined1 (*) [16])func_0x0412c300(param_3[0x39]);
  plVar41 = (long *)param_3[0x38];
  LOCK();
  plVar35 = (long *)(*pauVar12 + 8);
  lVar11 = *plVar35;
  *plVar35 = *plVar35 + -1;
  UNLOCK();
  if (lVar11 == 0) {
    puStack_650 = (uint *)0x6d2443c;
    (**(code **)(*(long *)*pauVar12 + 0x10))(pauVar12);
    puStack_650 = (uint *)0x6d24444;
    func_0x0412c2d0(pauVar12);
    unaff_R15 = pauVar12;
  }
  plStack_5e0 = param_3 + 1;
  puStack_650 = (uint *)0x6d24456;
  plVar13 = (long *)(**(code **)(*plVar41 + 0x68))(plVar41);
  lVar11 = param_3[2];
  uVar8 = *(uint *)(param_3 + 3);
  lVar38 = *(long *)(lVar11 + 0x38);
  uVar39 = (ulong)(*(long *)(lVar11 + 0x40) - lVar38) >> 3;
  plVar35 = (long *)(uVar39 + 0xffffffff);
  plVar41 = (long *)(lVar38 + (ulong)((uint)plVar35 & 0xc67426f3) * 8);
  lVar17 = *(long *)(lVar11 + 0x50);
  do {
    if (*plVar41 == -1) {
      plVar20 = *(long **)(lVar11 + 0x58);
      plVar41 = plVar20;
      goto LAB_06d244b9;
    }
    lVar37 = *plVar41 * 0x20;
    plVar41 = (long *)(lVar17 + lVar37);
  } while (*(int *)(lVar17 + 8 + lVar37) != -0x398bd90d);
  plVar20 = *(long **)(lVar11 + 0x58);
LAB_06d244b9:
  if ((plVar41 != plVar20) && (lVar11 = plVar41[2], lVar11 != 0)) {
    pauVar19 = (undefined1 (*) [16])(ulong)((uVar8 & 0x3ffff) >> 0xb);
    pauVar12 = *(undefined1 (**) [16])(lVar11 + 8);
    unaff_R13 = (undefined1 (*) [16])(*(long *)(lVar11 + 0x10) - (long)pauVar12 >> 3);
    unaff_R15 = pauVar12;
    if (pauVar19 < unaff_R13) {
      unaff_R15 = (undefined1 (*) [16])0x0;
      if (*(long *)(*pauVar12 + (long)pauVar19 * 8) != 0) {
        uVar28 = uVar8 & 0x7ff;
        unaff_R13 = (undefined1 (*) [16])(ulong)uVar28;
        uVar8 = uVar8 & 0xfffc0000;
        uVar9 = *(uint *)(*(long *)(*pauVar12 + (long)pauVar19 * 8) + (long)unaff_R13 * 4);
        unaff_RBP = (undefined1 (*) [16])(ulong)(uVar9 ^ uVar8);
        unaff_R15 = (undefined1 (*) [16])(ulong)uVar9;
        if ((uVar9 ^ uVar8) < 0x3ffff) {
          unaff_R13 = (undefined1 (*) [16])(ulong)(uVar9 >> 4 & 0x3ff8);
          if (*(long *)(*unaff_R13 + *(long *)(lVar11 + 0x50)) != 0) {
            unaff_R15 = (undefined1 (*) [16])((ulong)(uVar9 & 0x7f) * 3);
            puStack_558 = (ulong *)(*(long *)(*unaff_R13 + *(long *)(lVar11 + 0x50)) +
                                   (ulong)(uVar9 & 0x7f) * 0x18);
            plVar41 = (long *)(lVar38 + (ulong)((int)uVar39 - 1U & 0x1b5d5238) * 8);
            do {
              lVar11 = *plVar41;
              plVar41 = plVar20;
              if (lVar11 == -1) break;
              lVar11 = lVar11 * 0x20;
              plVar41 = (long *)(lVar17 + lVar11);
            } while (*(int *)(lVar17 + 8 + lVar11) != 0x1b5d5238);
            if ((plVar41 != plVar20) && (lVar11 = plVar41[2], lVar11 != 0)) {
              unaff_R13 = (undefined1 (*) [16])
                          (*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >> 3);
              if ((pauVar19 < unaff_R13) &&
                 (lVar37 = *(long *)(*(long *)(lVar11 + 8) + (long)pauVar19 * 8), lVar37 != 0)) {
                uVar9 = *(uint *)(lVar37 + (ulong)uVar28 * 4);
                unaff_RBP = (undefined1 (*) [16])(ulong)(uVar9 ^ uVar8);
                if ((uVar9 ^ uVar8) < 0x3ffff) {
                  unaff_R13 = (undefined1 (*) [16])(ulong)(uVar9 >> 4 & 0x3ff8);
                  if (*(long *)(*unaff_R13 + *(long *)(lVar11 + 0x50)) != 0) {
                    unaff_R13 = (undefined1 (*) [16])
                                (*(long *)(*unaff_R13 + *(long *)(lVar11 + 0x50)) +
                                (ulong)(uVar9 & 0x7f) * 0x24);
                    plVar35 = (long *)(lVar38 + (ulong)((uint)plVar35 & 0x98e40c0e) * 8);
                    do {
                      lVar11 = *plVar35;
                      plVar35 = plVar20;
                      if (lVar11 == -1) break;
                      lVar11 = lVar11 * 0x20;
                      plVar35 = (long *)(lVar17 + lVar11);
                    } while (*(int *)(lVar17 + 8 + lVar11) != -0x671bf3f2);
                    if ((((((plVar35 == plVar20) || (lVar11 = plVar35[2], lVar11 == 0)) ||
                          ((undefined1 (*) [16])
                           (*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >> 3) <= pauVar19)) ||
                         ((lVar38 = *(long *)(*(long *)(lVar11 + 8) + (long)pauVar19 * 8),
                          lVar38 == 0 ||
                          (uVar9 = *(uint *)(lVar38 + (ulong)uVar28 * 4), 0x3fffe < (uVar8 ^ uVar9))
                          ))) || (lVar11 = *(long *)(*(long *)(lVar11 + 0x50) +
                                                    (ulong)((uVar9 & 0x3ff80) >> 4)), lVar11 == 0))
                       || (puVar14 = (uint *)(lVar11 + (ulong)((uVar9 & 0x7f) << 4)),
                          (~*puVar14 & 0x3ffff) == 0)) {
LAB_06d246b6:
                      auStack_5d8._0_4_ = *(undefined4 *)(*unaff_R13 + 4);
                      auStack_628._0_4_ = *(undefined4 *)(*unaff_R13 + 8);
                      puStack_650 = (uint *)0x6d246d9;
                      fVar43 = (float)func_0x0eee4390(*(undefined4 *)*unaff_R13);
                      iVar26 = (int)fVar43;
                      puStack_650 = (uint *)0x6d246e8;
                      fVar43 = (float)func_0x0eee4390(auStack_5d8._0_4_);
                      puStack_650 = (uint *)0x6d246f8;
                      fVar44 = (float)func_0x0eee4390(auStack_628._0_4_);
                      uStack_520 = (uint)fVar44;
                      uVar8 = (int)fVar43 - 2;
                      unaff_R15 = (undefined1 (*) [16])((ulong)uVar8 << 0x20);
                      bStack_528 = (byte)iVar26;
                      bStack_527 = (byte)((uint)iVar26 >> 8);
                      sStack_526 = (short)((uint)iVar26 >> 0x10);
                      uStack_524 = (undefined1)uVar8;
                      uStack_523 = (undefined2)(uVar8 >> 8);
                      uStack_521 = (undefined1)(uVar8 >> 0x18);
                      puStack_650 = (uint *)0x6d24727;
                      lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,&bStack_528);
                      if ((*(long *)(*(long *)(lVar11 + 0x68) + 200) != _DAT_0f714e98) ||
                         (fVar43 = *(float *)*unaff_R13 - *(float *)(*unaff_R13 + 0xc),
                         fVar44 = *(float *)(*unaff_R13 + 8) - *(float *)(unaff_R13[1] + 4),
                         (float)((uint)(SQRT(fVar44 * fVar44 + fVar43 * fVar43 + 0.0) *
                                       _DAT_01198af0) & _DAT_014e7ba0) <= _DAT_01198a9c)) {
                        lVar11 = param_3[2];
                        uVar8 = *(uint *)(param_3 + 3);
                        plVar35 = (long *)(*(long *)(lVar11 + 0x38) +
                                          (ulong)((int)((ulong)(*(long *)(lVar11 + 0x40) -
                                                               *(long *)(lVar11 + 0x38)) >> 3) - 1U
                                                 & 0x78e89f39) * 8);
                        do {
                          if (*plVar35 == -1) {
                            plVar41 = *(long **)(lVar11 + 0x58);
                            plVar35 = plVar41;
                            goto LAB_06d247d8;
                          }
                          lVar38 = *plVar35 * 0x20;
                          plVar35 = (long *)(*(long *)(lVar11 + 0x50) + lVar38);
                        } while (*(int *)(*(long *)(lVar11 + 0x50) + 8 + lVar38) != 0x78e89f39);
                        plVar41 = *(long **)(lVar11 + 0x58);
LAB_06d247d8:
                        if ((plVar35 != plVar41) && (lVar11 = plVar35[2], lVar11 != 0)) {
                          uVar39 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
                          if ((uVar39 < (ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8) >>
                                               3)) &&
                             ((lVar11 = *(long *)(*(long *)(lVar11 + 8) + uVar39 * 8), lVar11 != 0
                              && (auStack_628._0_4_ = 1,
                                 (uVar8 & 0xfffc0000 ^
                                 *(uint *)(lVar11 + (ulong)(uVar8 & 0x7ff) * 4)) < 0x3ffff))))
                          goto LAB_06d24be1;
                        }
                        puStack_650 = (uint *)0x6d2483e;
                        cVar7 = func_0x07367b30(plVar13,plStack_5e0);
                        auStack_628._0_4_ = 4;
                        if (cVar7 == '\0') {
                          uVar10 = (undefined4)param_3[3];
                          bStack_528 = (byte)uVar10;
                          bStack_527 = (byte)((uint)uVar10 >> 8);
                          sStack_526 = (short)((uint)uVar10 >> 0x10);
                          puStack_650 = (uint *)0x6d24869;
                          uVar9 = func_0x06d84c00(param_3[2],&bStack_528);
                          unaff_RBP = (undefined1 (*) [16])(ulong)uVar9;
                          lVar11 = param_3[2];
                          uVar8 = *(uint *)(param_3 + 3);
                          plVar41 = (long *)(*(long *)(lVar11 + 0x38) +
                                            (ulong)((int)((ulong)(*(long *)(lVar11 + 0x40) -
                                                                 *(long *)(lVar11 + 0x38)) >> 3) -
                                                    1U & 0xbac1b3cf) * 8);
                          do {
                            if (*plVar41 == -1) {
                              plVar20 = *(long **)(lVar11 + 0x58);
                              plVar35 = (long *)0xffffffffffffffff;
                              plVar41 = plVar20;
                              goto LAB_06d248c7;
                            }
                            plVar35 = (long *)(*plVar41 * 0x20);
                            plVar41 = (long *)(*(long *)(lVar11 + 0x50) + (long)plVar35);
                          } while (*(int *)(*(long *)(lVar11 + 0x50) + 8 + (long)plVar35) !=
                                   -0x453e4c31);
                          plVar20 = *(long **)(lVar11 + 0x58);
LAB_06d248c7:
                          if ((plVar41 != plVar20) && (lVar11 = plVar41[2], lVar11 != 0)) {
                            uVar39 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
                            plVar35 = *(long **)(lVar11 + 8);
                            if ((uVar39 < (ulong)(*(long *)(lVar11 + 0x10) - (long)plVar35 >> 3)) &&
                               (((plVar35[uVar39] != 0 &&
                                 (uVar28 = *(uint *)(plVar35[uVar39] + (ulong)(uVar8 & 0x7ff) * 4),
                                 (uVar8 & 0xfffc0000 ^ uVar28) < 0x3ffff)) &&
                                (lVar11 = *(long *)(*(long *)(lVar11 + 0x50) +
                                                   (ulong)(uVar28 >> 4 & 0x3ff8)), lVar11 != 0)))) {
                              auStack_5d8._0_16_ = *unaff_R13;
                              auStack_628._8_4_ = auStack_5d8._8_4_;
                              auStack_628._0_8_ = auStack_5d8._8_8_;
                              auStack_628._12_4_ = auStack_5d8._12_4_;
                              puStack_650 = (uint *)0x6d2496f;
                              uStack_5a8 = (long *)func_0x0eee4390(*(undefined4 *)
                                                                    (lVar11 + 4 +
                                                                    (ulong)((uVar28 & 0x7f) << 5)));
                              uStack_5a0 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                              puStack_650 = (uint *)0x6d24981;
                              fVar43 = (float)func_0x0eee4390(auStack_5d8._0_4_);
                              iVar26 = (int)fVar43;
                              iVar45 = (int)(float)uStack_5a8;
                              bStack_528 = (byte)iVar26;
                              bStack_527 = (byte)((uint)iVar26 >> 8);
                              sStack_526 = (short)((uint)iVar26 >> 0x10);
                              uStack_524 = (undefined1)iVar45;
                              uStack_523 = (undefined2)((uint)iVar45 >> 8);
                              uStack_521 = (undefined1)((uint)iVar45 >> 0x18);
                              puStack_650 = (uint *)0x6d2499f;
                              fVar43 = (float)func_0x0eee4390(auStack_628._0_4_);
                              uStack_520 = (uint)fVar43;
                              puStack_650 = (uint *)0x6d249bb;
                              lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,&bStack_528);
                              uVar39 = *(ulong *)(*(long *)(lVar11 + 0x68) + 0x108);
                              bVar25 = (byte)uVar9 ^ 1 | (byte)(uint)(uVar39 >> 0x21) & 1;
                              unaff_RBP = (undefined1 (*) [16])
                                          (ulong)CONCAT31((int3)(uVar9 >> 8),bVar25);
                              if (bVar25 == 0) {
                                auStack_628._0_4_ = 3;
                                if (*(long *)(*(long *)(lVar11 + 0x68) + 200) != _DAT_0f71c5a8) {
LAB_06d24a09:
                                  auStack_628._0_4_ = 3;
                                  plVar35 = (long *)param_3[2];
                                  uVar8 = *(uint *)(param_3 + 3);
                                  plVar41 = (long *)(plVar35[7] +
                                                    (ulong)((int)((ulong)(plVar35[8] - plVar35[7])
                                                                 >> 3) - 1U & 0x68b75d48) * 8);
                                  do {
                                    if (*plVar41 == -1) {
                                      plVar41 = (long *)plVar35[0xb];
                                      plVar20 = plVar41;
                                      goto LAB_06d24a57;
                                    }
                                    lVar11 = *plVar41 * 0x20;
                                    plVar41 = (long *)(plVar35[10] + lVar11);
                                  } while (*(int *)(plVar35[10] + 8 + lVar11) != 0x68b75d48);
                                  plVar20 = (long *)plVar35[0xb];
LAB_06d24a57:
                                  if ((plVar41 != plVar20) && (lVar11 = plVar41[2], lVar11 != 0)) {
                                    uVar39 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
                                    if (((uVar39 < (ulong)(*(long *)(lVar11 + 0x10) -
                                                           *(long *)(lVar11 + 8) >> 3)) &&
                                        ((lVar38 = *(long *)(*(long *)(lVar11 + 8) + uVar39 * 8),
                                         lVar38 != 0 &&
                                         (uVar9 = *(uint *)(lVar38 + (ulong)(uVar8 & 0x7ff) * 4),
                                         (uVar8 & 0xfffc0000 ^ uVar9) < 0x3ffff)))) &&
                                       (lVar11 = *(long *)(*(long *)(lVar11 + 0x50) +
                                                          (ulong)(uVar9 >> 4 & 0x3ff8)), lVar11 != 0
                                       )) {
                                      lVar37 = (ulong)(uVar9 & 0x7f) * 0x5b8;
                                      lVar38 = lVar11 + lVar37;
                                      lVar17 = 0x4c8;
                                      if ((((*(char *)(lVar11 + 0x534 + lVar37) == '\x01') &&
                                           (lVar17 = 0x3d8, *(char *)(lVar38 + 0x444) == '\x01')) &&
                                          (lVar17 = 0x2e8, *(char *)(lVar38 + 0x354) == '\x01')) &&
                                         (((lVar17 = 0x1f8, *(char *)(lVar38 + 0x264) == '\x01' &&
                                           (lVar17 = 0x108, *(char *)(lVar38 + 0x174) == '\x01')) &&
                                          (lVar17 = 0x18, *(char *)(lVar38 + 0x84) == '\x01')))) {
                                        pcVar15 = (char *)0xf551eb0;
                                      }
                                      else {
                                        pcVar15 = (char *)(lVar38 + 0x6c + lVar17);
                                      }
                                      if ((*pcVar15 == '\x01') ||
                                         (auStack_628._0_4_ = 5, (pcVar15[4] & 1U) == 0)) {
                                        auStack_628._0_4_ = 7;
                                        if (((*puStack_558 & 2) == 0) &&
                                           (auStack_628._0_4_ = 8, (*puStack_558 & 8) == 0)) {
                                          puStack_650 = (uint *)0x6d24b90;
                                          lVar11 = func_0x06d702e0();
                                          auStack_628._0_4_ = 9;
                                          if (*(long *)(lVar11 + 0x10) == 0) {
                                            puStack_650 = (uint *)0x6d24ba9;
                                            cVar7 = func_0x0bbb7f80(plStack_5e0);
                                            auStack_628._0_4_ = 0xb;
                                            if (cVar7 != '\x02') {
                                              puStack_650 = (uint *)0x6d24bbf;
                                              cVar7 = func_0x0bbfa260(plStack_5e0);
                                              if (cVar7 != '\0') {
                                                puStack_650 = (uint *)0x6d24bcd;
                                                cVar7 = func_0x0bbfa1b0(plStack_5e0);
                                                auVar3._12_4_ = 0;
                                                auVar3._0_12_ = auStack_628._4_12_;
                                                auStack_628._0_16_ = auVar3 << 0x20;
                                                if (cVar7 != '\0') goto LAB_06d24be1;
                                              }
                                              auStack_628._0_4_ = 2;
                                            }
                                          }
                                        }
                                      }
                                      goto LAB_06d24be1;
                                    }
                                  }
                                  goto LAB_06d27f65;
                                }
                              }
                              else {
                                auStack_628._0_4_ = 3;
                                if ((uVar39 >> 0x21 & 1) == 0) goto LAB_06d24a09;
                              }
                              goto LAB_06d24be1;
                            }
                          }
                          goto LAB_06d27f65;
                        }
                      }
                      else {
                        auStack_628._0_4_ = 10;
                      }
                    }
                    else {
                      auStack_628._0_4_ = 6;
                      if (*(long *)(puVar14 + 2) == -1) goto LAB_06d246b6;
                    }
LAB_06d24be1:
                    auStack_5d8._0_4_ = *(undefined4 *)((undefined8 *)param_3[0x41] + 1);
                    uStack_5a8 = *(long **)param_3[0x41];
                    uStack_5a0 = 0;
                    puStack_650 = (uint *)0x6d24c04;
                    puStack_558 = (ulong *)func_0x0eee4390();
                    puStack_650 = (uint *)0x6d24c1d;
                    fVar43 = (float)func_0x0eee4390(uStack_5a8._4_4_);
                    uStack_538 = CONCAT44((int)fVar43,(int)puStack_558._0_4_);
                    puStack_650 = (uint *)0x6d24c3f;
                    fVar43 = (float)func_0x0eee4390(auStack_5d8._0_4_);
                    iStack_530 = (int)fVar43;
                    puStack_650 = (uint *)0x6d24c56;
                    plVar13 = (long *)func_0x0412c300(param_3[0x39]);
                    plVar41 = (long *)param_3[0x38];
                    LOCK();
                    plVar35 = plVar13 + 1;
                    lVar11 = *plVar35;
                    *plVar35 = *plVar35 + -1;
                    UNLOCK();
                    if (lVar11 == 0) {
                      puStack_650 = (uint *)0x6d24c7b;
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                      puStack_650 = (uint *)0x6d24c83;
                      func_0x0412c2d0(plVar13);
                    }
                    puStack_650 = (uint *)0x6d24c8c;
                    plVar35 = (long *)(**(code **)(*plVar41 + 0x68))(plVar41);
                    puStack_650 = (uint *)0x6d24ca3;
                    lVar11 = (**(code **)(*plVar35 + 0x138))(plVar35,&uStack_538);
                    if (lVar11 == 0) {
LAB_06d24d05:
                      puStack_650 = (uint *)0x6d24d11;
                      plVar41 = (long *)(**(code **)(*plVar35 + 0x158))(plVar35);
                      puStack_650 = (uint *)0x6d24d1d;
                      uVar16 = (**(code **)(*plVar41 + 0x2b0))(plVar41);
                      puStack_650 = (uint *)0x6d24d2d;
                      uVar10 = (**(code **)(*(long *)plVar35[7] + 0xd0))();
                      puStack_650 = (uint *)0x6d24d37;
                      plVar13 = (long *)func_0x0c8cca10(uVar16,uVar10);
                    }
                    else {
                      if ((uStack_538._4_4_ < *(short *)((long)plVar35 + 0x42)) ||
                         ((short)plVar35[8] <= uStack_538._4_4_)) goto LAB_06d24d05;
                      bStack_528 = (byte)uStack_538 & 0xf;
                      sStack_526 = (short)((ulong)uStack_538 >> 0x20) -
                                   *(short *)((long)plVar35 + 0x42);
                      bStack_527 = (byte)iStack_530 & 0xf;
                      puStack_650 = (uint *)0x6d24d03;
                      plVar13 = (long *)func_0x0caf8020(lVar11,&bStack_528);
                    }
                    puStack_650 = (uint *)0x6d24d48;
                    plVar35 = (long *)(**(code **)(*plStack_408 + 0x70))();
                    puStack_650 = (uint *)0x6d24d57;
                    uVar8 = (**(code **)(*param_3 + 0x6b8))(param_3);
                    unaff_R13 = (undefined1 (*) [16])(ulong)uVar8;
                    bStack_570 = 10;
                    uStack_56f = 0x6d6f6942;
                    uStack_56b = 0x65;
                    puStack_2b0 = (uint *)CONCAT44(puStack_2b0._4_4_,uVar8);
                    pbStack_518 = pbStack_560;
                    bStack_528 = 10;
                    bStack_527 = 0x42;
                    sStack_526 = 0x6f69;
                    uStack_524 = 0x6d;
                    uStack_523 = 0x65;
                    uStack_521 = uStack_569;
                    uStack_520 = (uint)uStack_568;
                    uStack_51c = CONCAT13(uStack_561,(int3)((uint7)uStack_568 >> 0x20));
                    unaff_RBP = (undefined1 (*) [16])auStack_510;
                    puStack_650 = (uint *)0x6d24df9;
                    uStack_5ac = uVar8;
                    func_0x048630e0(unaff_RBP,(short)plVar13[0x2d]);
                    uStack_500 = 0xb;
                    puStack_3e8 = (uint *)(plVar35 + 0x43);
                    plStack_3e0 = (long *)CONCAT71(plStack_3e0._1_7_,1);
                    puStack_650 = (uint *)0x6d24e1d;
                    FUN_0412d450();
                    puStack_650 = (uint *)0x6d24e3c;
                    uStack_5a8 = plVar35;
                    lVar11 = func_0x06d81470(plVar35 + 0x10,unaff_R13,&puStack_2b0);
                    cStack_348 = (char)&bStack_570;
                    uStack_347 = (undefined7)((ulong)&bStack_570 >> 8);
                    puStack_650 = (uint *)0x6d24e60;
                    unaff_R15 = (undefined1 (*) [16])
                                func_0x06d807c0(lVar11 + 0x18,&bStack_570,&cStack_348);
                    pbVar36 = unaff_R15[2] + 8;
                    if (pbVar36 != &bStack_528) {
                      if ((*pbVar36 & 1) == 0) {
                        if ((bStack_528 & 1) == 0) {
                          *(byte **)(unaff_R15[3] + 8) = pbStack_518;
                          *(uint *)pbVar36 = CONCAT22(sStack_526,CONCAT11(bStack_527,bStack_528));
                          *(uint *)(unaff_R15[2] + 0xc) =
                               CONCAT13(uStack_521,CONCAT21(uStack_523,uStack_524));
                          *(uint *)unaff_R15[3] = uStack_520;
                          *(undefined4 *)(unaff_R15[3] + 4) = uStack_51c;
                        }
                        else {
                          puStack_650 = (uint *)0x6d24eda;
                          func_0x04885070(pbVar36,pbStack_518,CONCAT44(uStack_51c,uStack_520));
                        }
                      }
                      else {
                        bVar42 = (bStack_528 & 1) != 0;
                        pbVar29 = &bStack_527;
                        if (bVar42) {
                          pbVar29 = pbStack_518;
                        }
                        uVar39 = (ulong)(bStack_528 >> 1);
                        if (bVar42) {
                          uVar39 = CONCAT44(uStack_51c,uStack_520);
                        }
                        puStack_650 = (uint *)0x6d24ec3;
                        func_0x04885120(pbVar36,pbVar29,uVar39);
                      }
                    }
                    puStack_650 = (uint *)0x6d24ee6;
                    func_0x04863740(unaff_R15 + 4,unaff_RBP);
                    unaff_R15[5][0] = uStack_500;
                    if ((char)plStack_3e0 == '\x01') {
                      puStack_650 = (uint *)0x6d24f09;
                      func_0x0412d520(puStack_3e8);
                    }
                    puStack_650 = (uint *)0x6d24f11;
                    func_0x04863610(unaff_RBP);
                    if ((bStack_528 & 1) != 0) {
                      puStack_650 = (uint *)0x6d24f34;
                      func_0x0412a280(pbStack_518,
                                      CONCAT17(uStack_521,
                                               CONCAT25(uStack_523,
                                                        CONCAT14(uStack_524,
                                                                 CONCAT22(sStack_526,
                                                                          CONCAT11(bStack_527,
                                                                                   bStack_528))))) &
                                      0xfffffffffffffffe);
                    }
                    if ((bStack_570 & 1) != 0) {
                      puStack_650 = (uint *)0x6d24f57;
                      func_0x0412a280(pbStack_560,
                                      CONCAT17(uStack_569,
                                               CONCAT25(uStack_56b,CONCAT41(uStack_56f,bStack_570)))
                                      & 0xfffffffffffffffe);
                    }
                    pauVar12 = _DAT_0f5a3078;
                    lVar11 = param_3[2];
                    uVar9 = *(uint *)(param_3 + 3);
                    plVar41 = (long *)(*(long *)(lVar11 + 0x38) +
                                      (ulong)((int)((ulong)(*(long *)(lVar11 + 0x40) -
                                                           *(long *)(lVar11 + 0x38)) >> 3) - 1U &
                                             0x324d52cb) * 8);
                    do {
                      if (*plVar41 == -1) {
                        plVar20 = *(long **)(lVar11 + 0x58);
                        plVar35 = (long *)0xffffffffffffffff;
                        plVar41 = plVar20;
                        goto LAB_06d24fa8;
                      }
                      plVar35 = (long *)(*plVar41 * 0x20);
                      plVar41 = (long *)(*(long *)(lVar11 + 0x50) + (long)plVar35);
                    } while (*(int *)(*(long *)(lVar11 + 0x50) + 8 + (long)plVar35) != 0x324d52cb);
                    plVar20 = *(long **)(lVar11 + 0x58);
LAB_06d24fa8:
                    if ((plVar41 != plVar20) && (lVar11 = plVar41[2], lVar11 != 0)) {
                      uVar39 = (ulong)((uVar9 & 0x3ffff) >> 0xb);
                      plVar35 = *(long **)(lVar11 + 8);
                      if ((uVar39 < (ulong)(*(long *)(lVar11 + 0x10) - (long)plVar35 >> 3)) &&
                         (((plVar35[uVar39] != 0 &&
                           (uVar28 = *(uint *)(plVar35[uVar39] + (ulong)(uVar9 & 0x7ff) * 4),
                           (uVar9 & 0xfffc0000 ^ uVar28) < 0x3ffff)) &&
                          (lVar11 = *(long *)(*(long *)(lVar11 + 0x50) +
                                             (ulong)(uVar28 >> 4 & 0x3ff8)), lVar11 != 0)))) {
                        puStack_558 = (ulong *)CONCAT44(puStack_558._4_4_,uVar8);
                        auVar5 = auStack_5d8._4_12_;
                        auVar4._12_4_ = 0;
                        auVar4._0_12_ = auStack_5d8._4_12_;
                        auStack_5d8._0_16_ = auVar4 << 0x20;
                        if (*(char *)(lVar11 + (ulong)(uVar28 & 0x7f)) != '\x01') {
                          auStack_5d8._0_4_ = plStack_5e8._0_4_;
                          auStack_5d8._0_16_ = CONCAT124(auVar5,auStack_5d8._0_4_);
                        }
                        puStack_2b0 = (uint *)CONCAT44(puStack_2b0._4_4_,auStack_628._0_4_);
                        puStack_650 = (uint *)0x6d25071;
                        uVar8 = (**(code **)(*param_3 + 0x6b8))(param_3);
                        unaff_RBP = (undefined1 (*) [16])(ulong)uVar8;
                        cStack_348 = '\x1e';
                        uStack_347 = 0x54726579616c50;
                        uStack_340 = 0x72;
                        uStack_33f = 0x64656c6c657661;
                        plStack_338 = (long *)((ulong)plStack_338 & 0xffffffffffffff00);
                        puStack_650 = (uint *)0x6d250b3;
                        plVar35 = (long *)(**(code **)(*param_3 + 0x6b0))(param_3);
                        puStack_650 = (uint *)0x6d250bc;
                        uVar16 = (**(code **)(*plVar35 + 0x70))(plVar35);
                        puStack_650 = (uint *)0x6d250cb;
                        uVar10 = (**(code **)(*param_3 + 0x6b8))(param_3);
                        plStack_3d8 = (long *)0x0;
                        uStack_3d0 = 0;
                        puStack_3e8 = (uint *)0x0;
                        plStack_3e0 = (long *)0x0;
                        uStack_3c8 = 0x3f800000;
                        puStack_650 = (uint *)0x6d250fe;
                        func_0x06d11ff0(uVar16,&puStack_3e8,uVar10,pauVar12);
                        puStack_650 = (uint *)0x6d25123;
                        func_0x06d0cfa0(&bStack_528,uVar8,&cStack_348,&puStack_3e8,0x20);
                        puStack_650 = (uint *)0x6d25130;
                        func_0x06d72260(&puStack_3e8);
                        uStack_508 = 0xb400000001;
                        puStack_3e8 = (uint *)CONCAT71(puStack_3e8._1_7_,1);
                        puStack_650 = (uint *)0x6d25171;
                        func_0x06d06340(&bStack_528,&UNK_011f0fb6,&puStack_3e8,0xb,1);
                        puVar6 = puStack_558;
                        unaff_R13 = (undefined1 (*) [16])((ulong)puStack_558 & 0xffffffff);
                        puStack_650 = (uint *)0x6d251a0;
                        func_0x06d07510(&bStack_528,&UNK_01343889,&puStack_2b0,0xb,1);
                        puStack_3e8 = (uint *)((ulong)puStack_3e8 & 0xffffffff00000000);
                        puStack_650 = (uint *)0x6d251b3;
                        lVar11 = func_0x0b3cf140(param_3);
                        if (lVar11 == 0) {
LAB_06d252ab:
                          puStack_650 = (uint *)0x6d252d2;
                          func_0x06d07510(&bStack_528,&UNK_01462dd6,&puStack_3e8,0xb,1);
                          puStack_650 = (uint *)0x6d252df;
                          cStack_348 = func_0x0b3d3e80(param_3,5);
                          if (cStack_348 != '\0') {
                            puStack_650 = (uint *)0x6d25311;
                            func_0x06d06340(&bStack_528,&UNK_013c80c8,&cStack_348,0xb,1);
                          }
                          puStack_650 = (uint *)0x6d2532e;
                          func_0x06d08510(&bStack_528,&UNK_014cceaf,3,
                                          (ulong)plStack_610 & 0xffffffff);
                          puStack_650 = (uint *)0x6d2534d;
                          func_0x06d08b50(auStack_5d8._0_4_,&bStack_528,&UNK_01360375,1);
                          puVar1 = (undefined4 *)param_3[0x41];
                          plStack_5e8 = (long *)CONCAT44(plStack_5e8._4_4_,puVar1[1]);
                          puStack_540 = (uint *)CONCAT44(puStack_540._4_4_,puVar1[2]);
                          puStack_650 = (uint *)0x6d2538a;
                          func_0x06d08b50(*puVar1,&bStack_528,&UNK_012dafab,4);
                          puStack_650 = (uint *)0x6d253a9;
                          func_0x06d08b50(plStack_5e8._0_4_,&bStack_528,&UNK_01498bce,4);
                          puStack_650 = (uint *)0x6d253cb;
                          func_0x06d08b50(puStack_540._0_4_,&bStack_528,&UNK_013291e5,4);
                          puStack_650 = (uint *)0x6d253d7;
                          plVar35 = (long *)(**(code **)(*param_3 + 0x6b0))(param_3);
                          puStack_650 = (uint *)0x6d253e0;
                          uVar16 = (**(code **)(*plVar35 + 0x70))(plVar35);
                          puStack_650 = (uint *)0x6d253f0;
                          func_0x06d06910(uVar16,&bStack_528);
                          puStack_650 = (uint *)0x6d253fd;
                          func_0x06d0d580(&bStack_528);
                          puStack_650 = (uint *)0x6d2540a;
                          func_0x06d1cc70(&bStack_528);
                          if (CONCAT17(uStack_521,
                                       CONCAT25(uStack_523,
                                                CONCAT14(uStack_524,
                                                         CONCAT22(sStack_526,
                                                                  CONCAT11(bStack_527,bStack_528))))
                                      ) == 0) {
                            puStack_650 = (uint *)0x6d2543d;
                            cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                                    &UNK_011a0d41);
                            if (cVar7 != '\0') {
                              _DAT_00000000 = 0xdeadc0de;
                            }
                          }
                          if (*(char *)CONCAT17(uStack_521,
                                                CONCAT25(uStack_523,
                                                         CONCAT14(uStack_524,
                                                                  CONCAT22(sStack_526,
                                                                           CONCAT11(bStack_527,
                                                                                    bStack_528)))))
                              == '\0') {
                            puStack_650 = (uint *)0x6d25481;
                            cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                                    &UNK_011a0d41);
                            if (cVar7 != '\0') {
                              _DAT_00000000 = 0xdeadc0de;
                            }
                          }
                          puStack_650 = (uint *)0x6d254b2;
                          (**(code **)(*(long *)pbStack_518 + 0xf8))
                                    (auStack_5d8._0_4_,pbStack_518,param_3,auStack_628._0_4_,
                                     (ulong)plStack_610 & 0xffffffff);
                          plVar35 = (long *)CONCAT44(uStack_51c,uStack_520);
                          bStack_528 = 0;
                          bStack_527 = 0;
                          sStack_526 = 0;
                          uStack_524 = 0;
                          uStack_523 = 0;
                          uStack_521 = 0;
                          uStack_520 = 0;
                          uStack_51c = 0;
                          unaff_R15 = (undefined1 (*) [16])0x0;
                          if (plVar35 != (long *)0x0) {
                            LOCK();
                            plVar41 = plVar35 + 1;
                            lVar11 = *plVar41;
                            *plVar41 = *plVar41 + -1;
                            UNLOCK();
                            if (lVar11 == 0) {
                              puStack_650 = (uint *)0x6d254e5;
                              (**(code **)(*plVar35 + 0x10))(plVar35);
                              puStack_650 = (uint *)0x6d254ed;
                              func_0x0412c2d0(plVar35);
                            }
                            unaff_R15 = (undefined1 (*) [16])CONCAT44(uStack_51c,uStack_520);
                            pbStack_518 = (byte *)0x0;
                            if (unaff_R15 != (undefined1 (*) [16])0x0) {
                              LOCK();
                              plVar35 = (long *)(*unaff_R15 + 8);
                              lVar11 = *plVar35;
                              *plVar35 = *plVar35 + -1;
                              UNLOCK();
                              if (lVar11 == 0) {
                                puStack_650 = (uint *)0x6d25521;
                                (**(code **)(*(long *)*unaff_R15 + 0x10))(unaff_R15);
                                puStack_650 = (uint *)0x6d25529;
                                func_0x0412c2d0(unaff_R15);
                              }
                            }
                          }
                          bStack_400 = 6;
                          uStack_3ff = 0x6d6944;
                          lVar11 = param_3[2];
                          uVar8 = *(uint *)(param_3 + 3);
                          plVar41 = (long *)(*(long *)(lVar11 + 0x38) +
                                            (ulong)((int)((ulong)(*(long *)(lVar11 + 0x40) -
                                                                 *(long *)(lVar11 + 0x38)) >> 3) -
                                                    1U & 0xaf993816) * 8);
                          do {
                            if (*plVar41 == -1) {
                              plVar20 = *(long **)(lVar11 + 0x58);
                              plVar41 = plVar20;
                              goto LAB_06d25599;
                            }
                            lVar38 = *plVar41 * 0x20;
                            plVar41 = (long *)(*(long *)(lVar11 + 0x50) + lVar38);
                          } while (*(int *)(*(long *)(lVar11 + 0x50) + 8 + lVar38) != -0x5066c7ea);
                          plVar20 = *(long **)(lVar11 + 0x58);
LAB_06d25599:
                          plVar35 = uStack_5a8;
                          if ((plVar41 != plVar20) && (lVar11 = plVar41[2], lVar11 != 0)) {
                            uVar39 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
                            if ((uVar39 < (ulong)(*(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 8)
                                                 >> 3)) &&
                               (((lVar38 = *(long *)(*(long *)(lVar11 + 8) + uVar39 * 8),
                                 lVar38 != 0 &&
                                 (uVar9 = *(uint *)(lVar38 + (ulong)(uVar8 & 0x7ff) * 4),
                                 (uVar8 & 0xfffc0000 ^ uVar9) < 0x3ffff)) &&
                                (lVar11 = *(long *)(*(long *)(lVar11 + 0x50) +
                                                   (ulong)(uVar9 >> 4 & 0x3ff8)), lVar11 != 0)))) {
                              uVar10 = *(undefined4 *)(lVar11 + (ulong)(uVar9 & 0x7f) * 4);
                              bStack_528 = (byte)uVar10;
                              bStack_527 = (byte)((uint)uVar10 >> 8);
                              sStack_526 = (short)((uint)uVar10 >> 0x10);
                              puStack_650 = (uint *)0x6d25643;
                              func_0x06d1dff0(uStack_5a8,unaff_R13,&bStack_400,&bStack_528);
                              if ((bStack_400 & 1) != 0) {
                                puStack_650 = (uint *)0x6d25666;
                                func_0x0412a280(uStack_3f0,
                                                CONCAT35(uStack_3fb,CONCAT41(uStack_3ff,bStack_400))
                                                & 0xfffffffffffffffe);
                              }
                              puStack_650 = (uint *)0x6d2567d;
                              (**(code **)(*param_3 + 0x5d0))(&bStack_528,param_3);
                              puStack_650 = (uint *)0x6d25685;
                              uStack_52c = func_0x0d3544f0(&bStack_528);
                              plVar35 = uStack_5a8;
                              if ((uStack_520 & 1) != 0) {
                                puStack_650 = (uint *)0x6d256b2;
                                func_0x0412a280(auStack_510,
                                                CONCAT44(uStack_51c,uStack_520) & 0xfffffffffffffffe
                                               );
                              }
                              bStack_420 = 0x18;
                              uStack_41f = 0x6546646c726f57;
                              uStack_418 = 0x61;
                              uStack_417 = 0x65727574;
                              uStack_413 = 0;
                              puStack_650 = (uint *)0x6d25701;
                              func_0x06d1dff0(plVar35,(ulong)puVar6 & 0xffffffff,&bStack_420,
                                              &uStack_52c);
                              if ((bStack_420 & 1) != 0) {
                                puStack_650 = (uint *)0x6d25724;
                                func_0x0412a280(uStack_410,
                                                CONCAT71(uStack_41f,bStack_420) & 0xfffffffffffffffe
                                               );
                              }
                              puStack_650 = (uint *)0x6d25730;
                              FUN_0412d680(0xf5a3080);
                              puStack_650 = (uint *)0x6d25740;
                              lVar11 = func_0x06d81ee0(unaff_R13,&uStack_5ac);
                              if ((*(byte *)(plVar13 + 0x33) & 1) == 0) {
                                lStack_588 = plVar13[0x35];
                                uStack_598 = *(uint *)(plVar13 + 0x33);
                                uStack_594 = *(uint *)((long)plVar13 + 0x19c);
                                uStack_590 = *(uint *)(plVar13 + 0x34);
                                uStack_58c = *(uint *)((long)plVar13 + 0x1a4);
                              }
                              else {
                                puStack_650 = (uint *)0x6d25789;
                                func_0x0412e5e0(&uStack_598,plVar13[0x35],plVar13[0x34]);
                              }
                              lVar38 = lVar11 + 0x1f0;
                              bStack_528 = (byte)lVar38;
                              bStack_527 = (byte)((ulong)lVar38 >> 8);
                              sStack_526 = (short)((ulong)lVar38 >> 0x10);
                              uStack_524 = (undefined1)((ulong)lVar38 >> 0x20);
                              uStack_523 = (undefined2)((ulong)lVar38 >> 0x28);
                              uStack_521 = (undefined1)((ulong)lVar38 >> 0x38);
                              uStack_520 = CONCAT31(uStack_520._1_3_,1);
                              puStack_650 = (uint *)0x6d257a9;
                              FUN_0412d450(lVar38);
                              auStack_628._0_8_ = lVar38;
                              puVar14 = *(uint **)(lVar11 + 0x20);
                              puVar30 = *(uint **)(lVar11 + 0x28);
                              if (puVar14 == puVar30) {
LAB_06d2582b:
                                if (puVar14 == puVar30) goto LAB_06d25830;
                              }
                              else {
                                uVar39 = (ulong)((byte)uStack_598 >> 1);
                                lVar38 = (long)&uStack_598 + 1;
                                if ((uStack_598 & 1) != 0) {
                                  uVar39 = CONCAT44(uStack_58c,uStack_590);
                                  lVar38 = lStack_588;
                                }
                                do {
                                  bVar25 = (byte)*puVar14;
                                  if ((bVar25 & 1) == 0) {
                                    uVar18 = (ulong)(bVar25 >> 1);
                                  }
                                  else {
                                    uVar18 = *(ulong *)(puVar14 + 2);
                                  }
                                  if (uVar18 == uVar39) {
                                    if ((bVar25 & 1) == 0) {
                                      pbVar36 = (byte *)((long)puVar14 + 1);
                                    }
                                    else {
                                      pbVar36 = *(byte **)(puVar14 + 4);
                                    }
                                    puStack_650 = (uint *)0x6d257f8;
                                    iVar26 = func_0x0eee3000(pbVar36,lVar38,uVar39);
                                    if (iVar26 == 0) goto LAB_06d2582b;
                                  }
                                  puVar14 = puVar14 + 6;
                                } while (puVar14 != puVar30);
LAB_06d25830:
                                if (puVar30 < *(uint **)(lVar11 + 0x30)) {
                                  if ((uStack_598 & 1) == 0) {
                                    *(long *)(puVar30 + 4) = lStack_588;
                                    *puVar30 = uStack_598;
                                    puVar30[1] = uStack_594;
                                    puVar30[2] = uStack_590;
                                    puVar30[3] = uStack_58c;
                                  }
                                  else {
                                    puStack_650 = (uint *)0x6d2588d;
                                    func_0x0412e5e0(puVar30,lStack_588,
                                                    CONCAT44(uStack_58c,uStack_590));
                                  }
                                  puVar30 = puVar30 + 6;
                                  *(uint **)(lVar11 + 0x28) = puVar30;
                                }
                                else {
                                  puStack_650 = (uint *)0x6d25870;
                                  puVar30 = (uint *)func_0x04909bd0(lVar11 + 0x20,&uStack_598);
                                }
                                *(uint **)(lVar11 + 0x28) = puVar30;
                              }
                              puStack_650 = (uint *)0x6d258a5;
                              func_0x0412d520(auStack_628._0_8_);
                              puVar6 = puStack_558;
                              if ((uStack_598 & 1) != 0) {
                                puStack_650 = (uint *)0x6d258cf;
                                func_0x0412a280(lStack_588,
                                                CONCAT44(uStack_594,uStack_598) & 0xfffffffffffffffe
                                               );
                              }
                              uStack_218 = *(long *)param_3[0x41];
                              uStack_210 = 0;
                              fStack_574 = *(float *)((long *)param_3[0x41] + 1);
                              puStack_650 = (uint *)0x6d258ff;
                              lVar17 = func_0x06d81ee0((ulong)puVar6 & 0xffffffff,&uStack_5ac);
                              puStack_650 = (uint *)0x6d2590e;
                              plVar40 = (long *)func_0x0412c300(param_3[0x39]);
                              lVar38 = param_3[0x38];
                              LOCK();
                              plVar35 = plVar40 + 1;
                              lVar11 = *plVar35;
                              *plVar35 = *plVar35 + -1;
                              UNLOCK();
                              auStack_628._0_8_ = lVar17;
                              if (lVar11 == 0) {
                                puStack_650 = (uint *)0x6d25938;
                                (**(code **)(*plVar40 + 0x10))(plVar40);
                                lVar17 = auStack_628._0_8_;
                                puStack_650 = (uint *)0x6d25945;
                                func_0x0412c2d0(plVar40);
                              }
                              if ((*(byte *)(lVar38 + 0x140) & 1) == 0) {
                                plStack_5f8 = *(long **)(lVar38 + 0x150);
                                auStack_608 = *(undefined1 (*) [4])(lVar38 + 0x140);
                                uStack_604 = *(undefined4 *)(lVar38 + 0x144);
                                uStack_600 = *(undefined4 *)(lVar38 + 0x148);
                                uStack_5fc = *(undefined4 *)(lVar38 + 0x14c);
                              }
                              else {
                                puStack_650 = (uint *)0x6d25982;
                                func_0x0412e5e0(auStack_608,*(undefined8 *)(lVar38 + 0x150),
                                                *(undefined8 *)(lVar38 + 0x148));
                              }
                              puVar14 = (uint *)(lVar17 + 0x1f0);
                              plStack_3e0 = (long *)CONCAT71(plStack_3e0._1_7_,1);
                              puStack_650 = (uint *)0x6d259a1;
                              puStack_3e8 = puVar14;
                              FUN_0412d450(puVar14);
                              bVar42 = ((uint)auStack_608 & 1) == 0;
                              plStack_5e8 = (long *)(auStack_608 + 1);
                              plVar35 = plStack_5f8;
                              if (bVar42) {
                                plVar35 = plStack_5e8;
                              }
                              uVar39 = (ulong)(auStack_608[0] >> 1);
                              if (!bVar42) {
                                uVar39 = CONCAT44(uStack_5fc,uStack_600);
                              }
                              puStack_650 = (uint *)0x6d259da;
                              puStack_540 = puVar14;
                              uVar18 = func_0x04883620(&bStack_528,plVar35,uVar39);
                              plStack_610 = (long *)(lVar17 + 0x38);
                              uVar39 = *(ulong *)(lVar17 + 0x40);
                              if (uVar39 != 0) {
                                uVar21 = uVar39 - (uVar39 >> 1 & 0x5555555555555555);
                                uVar21 = (uVar21 >> 2 & 0x3333333333333333) +
                                         (uVar21 & 0x3333333333333333);
                                uVar21 = ((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) *
                                         0x101010101010101;
                                if (uVar21 >> 0x38 < 2) {
                                  uVar22 = uVar39 - 1 & uVar18;
                                }
                                else {
                                  uVar22 = uVar18;
                                  if (uVar39 <= uVar18) {
                                    if ((uVar18 | uVar39) >> 0x20 == 0) {
                                      uVar22 = (uVar18 & 0xffffffff) % (uVar39 & 0xffffffff);
                                    }
                                    else {
                                      uVar22 = uVar18 % uVar39;
                                    }
                                  }
                                }
                                plVar35 = *(long **)(*plStack_610 + uVar22 * 8);
                                if ((plVar35 != (long *)0x0) &&
                                   (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)) {
                                  if (((uint)auStack_608 & 1) == 0) {
                                    uVar27 = (ulong)(auStack_608[0] >> 1);
                                    uStack_5a8 = (long *)(auStack_608 + 1);
                                  }
                                  else {
                                    uVar27 = CONCAT44(uStack_5fc,uStack_600);
                                    uStack_5a8 = plStack_5f8;
                                  }
                                  if ((byte)(uVar21 >> 0x38) < 2) {
                                    do {
                                      if (plVar35[1] == uVar18) {
                                        bVar25 = *(byte *)(plVar35 + 2);
                                        if ((bVar25 & 1) == 0) {
                                          uVar21 = (ulong)(bVar25 >> 1);
                                        }
                                        else {
                                          uVar21 = plVar35[3];
                                        }
                                        if (uVar21 == uVar27) {
                                          if ((bVar25 & 1) == 0) {
                                            lVar11 = (long)plVar35 + 0x11;
                                          }
                                          else {
                                            lVar11 = plVar35[4];
                                          }
                                          puStack_650 = (uint *)0x6d25b39;
                                          iVar26 = func_0x0eee3000(lVar11,uStack_5a8,uVar27);
                                          if (iVar26 == 0) goto LAB_06d25bb9;
                                        }
                                      }
                                      else if ((plVar35[1] & uVar39 - 1) != uVar22) break;
                                      plVar35 = (long *)*plVar35;
                                    } while (plVar35 != (long *)0x0);
                                  }
                                  else {
                                    do {
                                      uVar21 = plVar35[1];
                                      if (uVar21 == uVar18) {
                                        bVar25 = *(byte *)(plVar35 + 2);
                                        if ((bVar25 & 1) == 0) {
                                          uVar21 = (ulong)(bVar25 >> 1);
                                        }
                                        else {
                                          uVar21 = plVar35[3];
                                        }
                                        if (uVar21 == uVar27) {
                                          if ((bVar25 & 1) == 0) {
                                            lVar11 = (long)plVar35 + 0x11;
                                          }
                                          else {
                                            lVar11 = plVar35[4];
                                          }
                                          puStack_650 = (uint *)0x6d25bb5;
                                          iVar26 = func_0x0eee3000(lVar11,uStack_5a8,uVar27);
                                          if (iVar26 == 0) goto LAB_06d25bb9;
                                        }
                                      }
                                      else {
                                        if (uVar39 <= uVar21) {
                                          if ((uVar21 | uVar39) >> 0x20 == 0) {
                                            uVar21 = (uVar21 & 0xffffffff) % (uVar39 & 0xffffffff);
                                          }
                                          else {
                                            uVar21 = uVar21 % uVar39;
                                          }
                                        }
                                        if (uVar21 != uVar22) break;
                                      }
                                      plVar35 = (long *)*plVar35;
                                    } while (plVar35 != (long *)0x0);
                                  }
                                }
                              }
                              bVar42 = ((uint)auStack_608 & 1) == 0;
                              plVar35 = plStack_5f8;
                              if (bVar42) {
                                plVar35 = (long *)(auStack_608 + 1);
                              }
                              uVar39 = (ulong)(auStack_608[0] >> 1);
                              if (!bVar42) {
                                uVar39 = CONCAT44(uStack_5fc,uStack_600);
                              }
                              puStack_650 = (uint *)0x6d25c48;
                              plVar40 = (long *)func_0x04883620(&bStack_528,plVar35,uVar39);
                              plVar35 = *(long **)(auStack_628._0_8_ + 0x40);
                              plVar13 = (long *)auStack_628._0_8_;
                              if (plVar35 != (long *)0x0) {
                                uVar39 = (long)plVar35 - ((ulong)plVar35 >> 1 & 0x5555555555555555);
                                uVar39 = (uVar39 >> 2 & 0x3333333333333333) +
                                         (uVar39 & 0x3333333333333333);
                                uVar39 = ((uVar39 >> 4) + uVar39 & 0xf0f0f0f0f0f0f0f) *
                                         0x101010101010101;
                                if (uVar39 >> 0x38 < 2) {
                                  plVar41 = (long *)((ulong)((long)plVar35 - 1U) & (ulong)plVar40);
                                }
                                else {
                                  plVar41 = plVar40;
                                  if (plVar35 <= plVar40) {
                                    if (((ulong)plVar40 | (ulong)plVar35) >> 0x20 == 0) {
                                      plVar41 = (long *)(((ulong)plVar40 & 0xffffffff) %
                                                        ((ulong)plVar35 & 0xffffffff));
                                    }
                                    else {
                                      plVar41 = (long *)((ulong)plVar40 % (ulong)plVar35);
                                    }
                                  }
                                }
                                puVar2 = *(undefined8 **)(*plStack_610 + (long)plVar41 * 8);
                                uStack_5a8 = plVar41;
                                if (puVar2 != (undefined8 *)0x0) {
                                  plVar13 = (long *)*puVar2;
                                  if (plVar13 != (long *)0x0) {
                                    if (((uint)auStack_608 & 1) == 0) {
                                      uVar18 = (ulong)(auStack_608[0] >> 1);
                                      plStack_548 = (long *)(auStack_608 + 1);
                                    }
                                    else {
                                      uVar18 = CONCAT44(uStack_5fc,uStack_600);
                                      plStack_548 = plStack_5f8;
                                    }
                                    if ((byte)(uVar39 >> 0x38) < 2) {
                                      do {
                                        if ((long *)plVar13[1] == plVar40) {
                                          bVar25 = *(byte *)(plVar13 + 2);
                                          if ((bVar25 & 1) == 0) {
                                            uVar39 = (ulong)(bVar25 >> 1);
                                          }
                                          else {
                                            uVar39 = plVar13[3];
                                          }
                                          if (uVar39 == uVar18) {
                                            if ((bVar25 & 1) == 0) {
                                              lVar11 = (long)plVar13 + 0x11;
                                            }
                                            else {
                                              lVar11 = plVar13[4];
                                            }
                                            puStack_650 = (uint *)0x6d25da9;
                                            iVar26 = func_0x0eee3000(lVar11,plStack_548,uVar18);
                                            plVar41 = uStack_5a8;
                                            if (iVar26 == 0) goto LAB_06d26151;
                                          }
                                        }
                                        else if ((long *)((ulong)plVar13[1] &
                                                         (ulong)((long)plVar35 - 1U)) != plVar41)
                                        break;
                                        plVar13 = (long *)*plVar13;
                                      } while (plVar13 != (long *)0x0);
                                    }
                                    else {
                                      do {
                                        plVar20 = (long *)plVar13[1];
                                        if (plVar20 == plVar40) {
                                          bVar25 = *(byte *)(plVar13 + 2);
                                          if ((bVar25 & 1) == 0) {
                                            uVar39 = (ulong)(bVar25 >> 1);
                                          }
                                          else {
                                            uVar39 = plVar13[3];
                                          }
                                          if (uVar39 == uVar18) {
                                            if ((bVar25 & 1) == 0) {
                                              lVar11 = (long)plVar13 + 0x11;
                                            }
                                            else {
                                              lVar11 = plVar13[4];
                                            }
                                            puStack_650 = (uint *)0x6d25e28;
                                            iVar26 = func_0x0eee3000(lVar11,plStack_548,uVar18);
                                            plVar41 = uStack_5a8;
                                            if (iVar26 == 0) goto LAB_06d26151;
                                          }
                                        }
                                        else {
                                          if (plVar35 <= plVar20) {
                                            if (((ulong)plVar20 | (ulong)plVar35) >> 0x20 == 0) {
                                              plVar20 = (long *)(((ulong)plVar20 & 0xffffffff) %
                                                                ((ulong)plVar35 & 0xffffffff));
                                            }
                                            else {
                                              plVar20 = (long *)((ulong)plVar20 % (ulong)plVar35);
                                            }
                                          }
                                          if (plVar20 != plVar41) break;
                                        }
                                        plVar13 = (long *)*plVar13;
                                      } while (plVar13 != (long *)0x0);
                                    }
                                  }
                                  plVar13 = (long *)auStack_628._0_8_;
                                }
                              }
                              puStack_650 = (uint *)0x6d25e54;
                              plVar41 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))
                                                          (&DAT_0f5463b0,0x40);
                              if (plVar41 == (long *)0x0) {
                                puStack_650 = (uint *)0x6d27f4f;
                                func_0x0eec74c0(0x40,0);
                              }
                              bStack_528 = (byte)plVar41;
                              bStack_527 = (byte)((ulong)plVar41 >> 8);
                              sStack_526 = (short)((ulong)plVar41 >> 0x10);
                              uStack_524 = (undefined1)((ulong)plVar41 >> 0x20);
                              uStack_523 = (undefined2)((ulong)plVar41 >> 0x28);
                              uStack_521 = (undefined1)((ulong)plVar41 >> 0x38);
                              uStack_520 = (uint)plStack_610;
                              uStack_51c = (undefined4)((ulong)plStack_610 >> 0x20);
                              pbStack_518 = (byte *)0x0;
                              *plVar41 = 0;
                              plVar41[1] = (long)plVar40;
                              if (((uint)auStack_608 & 1) == 0) {
                                plVar41[4] = (long)plStack_5f8;
                                plVar41[2] = CONCAT44(uStack_604,auStack_608);
                                plVar41[3] = CONCAT44(uStack_5fc,uStack_600);
                              }
                              else {
                                puStack_650 = (uint *)0x6d25ebd;
                                func_0x0412e5e0(plVar41 + 2,plStack_5f8,
                                                CONCAT44(uStack_5fc,uStack_600));
                              }
                              plVar41[5] = uStack_218;
                              *(float *)(plVar41 + 6) = fStack_574;
                              plVar41[7] = 0x3ff0000000000000;
                              pbStack_518 = (byte *)CONCAT71(pbStack_518._1_7_,1);
                              if ((plVar35 == (long *)0x0) ||
                                 (plVar20 = uStack_5a8,
                                 (float)plVar35 * *(float *)(plVar13 + 0xb) <
                                 (float)(plVar13[10] + 1))) {
                                uVar39 = 1;
                                if ((long *)0x2 < plVar35) {
                                  uVar39 = (ulong)(((ulong)plVar35 & (ulong)((long)plVar35 - 1U)) !=
                                                  0);
                                }
                                uVar39 = uVar39 | (long)plVar35 * 2;
                                puStack_650 = (uint *)0x6d25f87;
                                fVar43 = (float)func_0x0eee3ab0((float)(plVar13[10] + 1) /
                                                                *(float *)(plVar13 + 0xb));
                                uVar18 = (long)(fVar43 - _DAT_01198778) & (long)fVar43 >> 0x3f |
                                         (long)fVar43;
                                if (uVar18 < uVar39) {
                                  uVar18 = uVar39;
                                }
                                uVar39 = 2;
                                if ((uVar18 != 1) && (uVar39 = uVar18, (uVar18 & uVar18 - 1) != 0))
                                {
                                  puStack_650 = (uint *)0x6d25fcc;
                                  uVar39 = FUN_0412c3f0();
                                }
                                uVar18 = *(ulong *)(auStack_628._0_8_ + 0x40);
                                if (uVar18 < uVar39) {
LAB_06d25fdd:
                                  puStack_650 = (uint *)0x6d25fea;
                                  func_0x06d83850(plStack_610,uVar39);
                                }
                                else if (uVar39 < uVar18) {
                                  puStack_650 = (uint *)0x6d26034;
                                  fVar43 = (float)func_0x0eee3ab0((float)*(ulong *)(auStack_628.
                                                                                    _0_8_ + 0x50) /
                                                                  *(float *)(auStack_628._0_8_ +
                                                                            0x58));
                                  uVar21 = (long)(fVar43 - _DAT_01198778) & (long)fVar43 >> 0x3f |
                                           (long)fVar43;
                                  if ((uVar18 < 3) ||
                                     (uVar22 = uVar18 - (uVar18 >> 1 & 0x5555555555555555),
                                     uVar22 = (uVar22 >> 2 & 0x3333333333333333) +
                                              (uVar22 & 0x3333333333333333),
                                     1 < (byte)(((uVar22 >> 4) + uVar22 & 0xf0f0f0f0f0f0f0f) *
                                                0x101010101010101 >> 0x38))) {
                                    puStack_650 = (uint *)0x6d260de;
                                    uVar21 = FUN_0412c3f0(uVar21);
                                  }
                                  else if (1 < uVar21) {
                                    lVar11 = 0x3f;
                                    if (uVar21 - 1 != 0) {
                                      for (; uVar21 - 1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                                      }
                                    }
                                    uVar21 = 1L << (-((byte)lVar11 ^ 0x3f) & 0x3f);
                                  }
                                  if (uVar39 <= uVar21) {
                                    uVar39 = uVar21;
                                  }
                                  if (uVar39 < uVar18) goto LAB_06d25fdd;
                                }
                                plVar35 = *(long **)(auStack_628._0_8_ + 0x40);
                                plVar13 = (long *)auStack_628._0_8_;
                                if (((ulong)plVar35 & (long)plVar35 - 1U) == 0) {
                                  plVar20 = (long *)((ulong)plVar40 & (ulong)((long)plVar35 - 1U));
                                }
                                else {
                                  plVar20 = plVar40;
                                  if (plVar35 <= plVar40) {
                                    if (((ulong)plVar40 | (ulong)plVar35) >> 0x20 == 0) {
                                      plVar20 = (long *)(((ulong)plVar40 & 0xffffffff) %
                                                        ((ulong)plVar35 & 0xffffffff));
                                    }
                                    else {
                                      plVar20 = (long *)((ulong)plVar40 % (ulong)plVar35);
                                    }
                                  }
                                }
                              }
                              lVar11 = *plStack_610;
                              plVar40 = *(long **)(lVar11 + (long)plVar20 * 8);
                              if (plVar40 == (long *)0x0) {
                                *plVar41 = plVar13[9];
                                plVar13[9] = (long)plVar41;
                                *(long **)(lVar11 + (long)plVar20 * 8) = plVar13 + 9;
                                if (*plVar41 != 0) {
                                  plVar40 = *(long **)(*plVar41 + 8);
                                  if (((ulong)plVar35 & (long)plVar35 - 1U) == 0) {
                                    *(long **)(lVar11 + ((ulong)plVar40 &
                                                        (ulong)((long)plVar35 - 1U)) * 8) = plVar41;
                                  }
                                  else {
                                    if (plVar35 <= plVar40) {
                                      if (((ulong)plVar40 | (ulong)plVar35) >> 0x20 == 0) {
                                        *(long **)(lVar11 + (((ulong)plVar40 & 0xffffffff) %
                                                            ((ulong)plVar35 & 0xffffffff)) * 8) =
                                             plVar41;
                                        goto LAB_06d2614d;
                                      }
                                      plVar40 = (long *)((ulong)plVar40 % (ulong)plVar35);
                                    }
                                    *(long **)(lVar11 + (long)plVar40 * 8) = plVar41;
                                  }
                                }
                              }
                              else {
                                *plVar41 = *plVar40;
                                *plVar40 = (long)plVar41;
                              }
LAB_06d2614d:
                              plVar13[10] = plVar13[10] + 1;
                              goto LAB_06d26151;
                            }
                          }
                        }
                        else {
                          puStack_650 = (uint *)0x6d251c4;
                          lVar38 = func_0x0b3cf140(param_3);
                          lVar11 = *(long *)(lVar38 + 0x10);
                          uVar8 = *(uint *)(lVar38 + 0x18);
                          plVar41 = (long *)(*(long *)(lVar11 + 0x38) +
                                            (ulong)((int)((ulong)(*(long *)(lVar11 + 0x40) -
                                                                 *(long *)(lVar11 + 0x38)) >> 3) -
                                                    1U & 0x4f6ba419) * 8);
                          do {
                            if (*plVar41 == -1) {
                              plVar20 = *(long **)(lVar11 + 0x58);
                              plVar35 = (long *)0xffffffffffffffff;
                              plVar41 = plVar20;
                              goto LAB_06d25218;
                            }
                            plVar35 = (long *)(*plVar41 * 0x20);
                            plVar41 = (long *)(*(long *)(lVar11 + 0x50) + (long)plVar35);
                          } while (*(int *)(*(long *)(lVar11 + 0x50) + 8 + (long)plVar35) !=
                                   0x4f6ba419);
                          plVar20 = *(long **)(lVar11 + 0x58);
LAB_06d25218:
                          unaff_R15 = pauVar12;
                          if ((plVar41 != plVar20) && (lVar11 = plVar41[2], lVar11 != 0)) {
                            uVar39 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
                            plVar35 = *(long **)(lVar11 + 8);
                            if (((uVar39 < (ulong)(*(long *)(lVar11 + 0x10) - (long)plVar35 >> 3))
                                && ((plVar35[uVar39] != 0 &&
                                    (uVar9 = *(uint *)(plVar35[uVar39] + (ulong)(uVar8 & 0x7ff) * 4)
                                    , (uVar8 & 0xfffc0000 ^ uVar9) < 0x3ffff)))) &&
                               (lVar11 = *(long *)(*(long *)(lVar11 + 0x50) +
                                                  (ulong)(uVar9 >> 4 & 0x3ff8)), lVar11 != 0)) {
                              puStack_3e8 = (uint *)CONCAT44(puStack_3e8._4_4_,
                                                             (uint)*(byte *)(lVar11 + (ulong)(uVar9 
                                                  & 0x7f) * 4));
                              goto LAB_06d252ab;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06d27f65:
  puStack_650 = (uint *)0x6d27f6a;
  func_0x04890760(plVar35);
LAB_06d27f6a:
  puStack_650 = (uint *)0x6d27f76;
  func_0x0eec74c0(0x30,0);
  goto LAB_06d27bed;
LAB_06d25bb9:
  plVar13 = plStack_610;
  puStack_650 = (uint *)0x6d25bce;
  lVar11 = func_0x06d83a30(plStack_610,auStack_608);
  *(ulong *)(lVar11 + 0x28) =
       CONCAT44(uStack_218._4_4_ + (float)((ulong)*(undefined8 *)(lVar11 + 0x28) >> 0x20),
                (float)uStack_218 + (float)*(undefined8 *)(lVar11 + 0x28));
  *(float *)(lVar11 + 0x30) = fStack_574 + *(float *)(lVar11 + 0x30);
  puStack_650 = (uint *)0x6d25c05;
  lVar11 = func_0x06d83a30(plVar13,auStack_608);
  *(double *)(lVar11 + 0x38) = *(double *)(lVar11 + 0x38) + _DAT_014f0478;
LAB_06d26151:
  bVar42 = ((uint)auStack_608 & 1) == 0;
  plVar35 = plStack_5f8;
  if (bVar42) {
    plVar35 = (long *)(auStack_608 + 1);
  }
  uVar39 = (ulong)(auStack_608[0] >> 1);
  if (!bVar42) {
    uVar39 = CONCAT44(uStack_5fc,uStack_600);
  }
  puStack_650 = (uint *)0x6d2617d;
  pauVar19 = (undefined1 (*) [16])func_0x04883620(&bStack_528,plVar35,uVar39);
  uStack_5a8 = (long *)(double)(float)auStack_5d8._0_4_;
  auStack_5d8._0_8_ = (long *)(auStack_628._0_8_ + 0x60);
  pauVar12 = *(undefined1 (**) [16])(auStack_628._0_8_ + 0x68);
  if (pauVar12 != (undefined1 (*) [16])0x0) {
    uVar39 = (long)pauVar12 - ((ulong)pauVar12 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 >> 2 & 0x3333333333333333) + (uVar39 & 0x3333333333333333);
    uVar39 = ((uVar39 >> 4) + uVar39 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar39 >> 0x38 < 2) {
      unaff_R13 = (undefined1 (*) [16])((ulong)(pauVar12[-1] + 0xf) & (ulong)pauVar19);
    }
    else {
      unaff_R13 = pauVar19;
      if (pauVar12 <= pauVar19) {
        if (((ulong)pauVar19 | (ulong)pauVar12) >> 0x20 == 0) {
          unaff_R13 = (undefined1 (*) [16])
                      (((ulong)pauVar19 & 0xffffffff) % ((ulong)pauVar12 & 0xffffffff));
        }
        else {
          unaff_R13 = (undefined1 (*) [16])((ulong)pauVar19 % (ulong)pauVar12);
        }
      }
    }
    puVar2 = *(undefined8 **)(*(long *)(auStack_628._0_8_ + 0x60) + (long)unaff_R13 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar2, plVar13 != (long *)0x0)) {
      if (((uint)auStack_608 & 1) == 0) {
        uVar18 = (ulong)(auStack_608[0] >> 1);
        plStack_610 = (long *)(auStack_608 + 1);
      }
      else {
        uVar18 = CONCAT44(uStack_5fc,uStack_600);
        plStack_610 = plStack_5f8;
      }
      if ((byte)(uVar39 >> 0x38) < 2) {
        do {
          if ((undefined1 (*) [16])plVar13[1] == pauVar19) {
            bVar25 = *(byte *)(plVar13 + 2);
            if ((bVar25 & 1) == 0) {
              uVar39 = (ulong)(bVar25 >> 1);
            }
            else {
              uVar39 = plVar13[3];
            }
            if (uVar39 == uVar18) {
              if ((bVar25 & 1) == 0) {
                lVar11 = (long)plVar13 + 0x11;
              }
              else {
                lVar11 = plVar13[4];
              }
              puStack_650 = (uint *)0x6d2634c;
              iVar26 = func_0x0eee3000(lVar11,plStack_610,uVar18);
              if (iVar26 == 0) goto LAB_06d263c9;
            }
          }
          else if ((undefined1 (*) [16])((ulong)plVar13[1] & (ulong)(pauVar12[-1] + 0xf)) !=
                   unaff_R13) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          pauVar23 = (undefined1 (*) [16])plVar13[1];
          if (pauVar23 == pauVar19) {
            bVar25 = *(byte *)(plVar13 + 2);
            if ((bVar25 & 1) == 0) {
              uVar39 = (ulong)(bVar25 >> 1);
            }
            else {
              uVar39 = plVar13[3];
            }
            if (uVar39 == uVar18) {
              if ((bVar25 & 1) == 0) {
                lVar11 = (long)plVar13 + 0x11;
              }
              else {
                lVar11 = plVar13[4];
              }
              puStack_650 = (uint *)0x6d263c5;
              iVar26 = func_0x0eee3000(lVar11,plStack_610,uVar18);
              if (iVar26 == 0) goto LAB_06d263c9;
            }
          }
          else {
            if (pauVar12 <= pauVar23) {
              if (((ulong)pauVar23 | (ulong)pauVar12) >> 0x20 == 0) {
                pauVar23 = (undefined1 (*) [16])
                           (((ulong)pauVar23 & 0xffffffff) % ((ulong)pauVar12 & 0xffffffff));
              }
              else {
                pauVar23 = (undefined1 (*) [16])((ulong)pauVar23 % (ulong)pauVar12);
              }
            }
            if (pauVar23 != unaff_R13) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  bVar42 = ((uint)auStack_608 & 1) == 0;
  plVar35 = plStack_5f8;
  if (bVar42) {
    plVar35 = (long *)(auStack_608 + 1);
  }
  uVar39 = (ulong)(auStack_608[0] >> 1);
  if (!bVar42) {
    uVar39 = CONCAT44(uStack_5fc,uStack_600);
  }
  puStack_650 = (uint *)0x6d26491;
  plVar40 = (long *)func_0x04883620(&bStack_528,plVar35,uVar39);
  plVar35 = *(long **)(auStack_628._0_8_ + 0x68);
  if (plVar35 != (long *)0x0) {
    uVar39 = (long)plVar35 - ((ulong)plVar35 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 >> 2 & 0x3333333333333333) + (uVar39 & 0x3333333333333333);
    uVar39 = ((uVar39 >> 4) + uVar39 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar39 >> 0x38 < 2) {
      plVar41 = (long *)((ulong)((long)plVar35 - 1U) & (ulong)plVar40);
    }
    else {
      plVar41 = plVar40;
      if (plVar35 <= plVar40) {
        if (((ulong)plVar40 | (ulong)plVar35) >> 0x20 == 0) {
          plVar41 = (long *)(((ulong)plVar40 & 0xffffffff) % ((ulong)plVar35 & 0xffffffff));
        }
        else {
          plVar41 = (long *)((ulong)plVar40 % (ulong)plVar35);
        }
      }
    }
    plVar20 = *(long **)(*(long *)auStack_5d8._0_8_ + (long)plVar41 * 8);
    plStack_610 = plVar41;
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (((uint)auStack_608 & 1) == 0) {
        plVar13 = (long *)(ulong)(auStack_608[0] >> 1);
      }
      else {
        plVar13 = (long *)CONCAT44(uStack_5fc,uStack_600);
        plStack_5e8 = plStack_5f8;
      }
      if ((byte)(uVar39 >> 0x38) < 2) {
        do {
          if ((long *)plVar20[1] == plVar40) {
            bVar25 = *(byte *)(plVar20 + 2);
            if ((bVar25 & 1) == 0) {
              plVar24 = (long *)(ulong)(bVar25 >> 1);
            }
            else {
              plVar24 = (long *)plVar20[3];
            }
            if (plVar24 == plVar13) {
              if ((bVar25 & 1) == 0) {
                lVar11 = (long)plVar20 + 0x11;
              }
              else {
                lVar11 = plVar20[4];
              }
              puStack_650 = (uint *)0x6d265e3;
              iVar26 = func_0x0eee3000(lVar11,plStack_5e8,plVar13);
              plVar41 = plStack_610;
              if (iVar26 == 0) goto LAB_06d2696e;
            }
          }
          else if ((long *)((ulong)plVar20[1] & (ulong)((long)plVar35 - 1U)) != plVar41) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          plVar24 = (long *)plVar20[1];
          if (plVar24 == plVar40) {
            bVar25 = *(byte *)(plVar20 + 2);
            if ((bVar25 & 1) == 0) {
              plVar24 = (long *)(ulong)(bVar25 >> 1);
            }
            else {
              plVar24 = (long *)plVar20[3];
            }
            if (plVar24 == plVar13) {
              if ((bVar25 & 1) == 0) {
                lVar11 = (long)plVar20 + 0x11;
              }
              else {
                lVar11 = plVar20[4];
              }
              puStack_650 = (uint *)0x6d2665d;
              iVar26 = func_0x0eee3000(lVar11,plStack_5e8,plVar13);
              plVar41 = plStack_610;
              if (iVar26 == 0) goto LAB_06d2696e;
            }
          }
          else {
            if (plVar35 <= plVar24) {
              if (((ulong)plVar24 | (ulong)plVar35) >> 0x20 == 0) {
                plVar24 = (long *)(((ulong)plVar24 & 0xffffffff) % ((ulong)plVar35 & 0xffffffff));
              }
              else {
                plVar24 = (long *)((ulong)plVar24 % (ulong)plVar35);
              }
            }
            if (plVar24 != plVar41) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  puStack_650 = (uint *)0x6d26681;
  plVar41 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar41 == (long *)0x0) {
    puStack_650 = (uint *)0x6d27f60;
    func_0x0eec74c0(0x30,0);
  }
  bStack_528 = (byte)plVar41;
  bStack_527 = (byte)((ulong)plVar41 >> 8);
  sStack_526 = (short)((ulong)plVar41 >> 0x10);
  uStack_524 = (undefined1)((ulong)plVar41 >> 0x20);
  uStack_523 = (undefined2)((ulong)plVar41 >> 0x28);
  uStack_521 = (undefined1)((ulong)plVar41 >> 0x38);
  uStack_520 = auStack_5d8._0_4_;
  uStack_51c = auStack_5d8._4_4_;
  pbStack_518 = (byte *)0x0;
  *plVar41 = 0;
  plVar41[1] = (long)plVar40;
  if (((uint)auStack_608 & 1) == 0) {
    plVar41[4] = (long)plStack_5f8;
    plVar41[2] = CONCAT44(uStack_604,auStack_608);
    plVar41[3] = CONCAT44(uStack_5fc,uStack_600);
    lVar11 = auStack_628._0_8_;
  }
  else {
    puStack_650 = (uint *)0x6d266ef;
    func_0x0412e5e0(plVar41 + 2,plStack_5f8,CONCAT44(uStack_5fc,uStack_600));
    lVar11 = auStack_628._0_8_;
  }
  plVar41[5] = (long)uStack_5a8;
  pbStack_518 = (byte *)CONCAT71(pbStack_518._1_7_,1);
  fVar43 = (float)(*(long *)(lVar11 + 0x78) + 1);
  if ((plVar35 == (long *)0x0) ||
     (plVar20 = plStack_610, (float)plVar35 * *(float *)(lVar11 + 0x80) < fVar43)) {
    uVar39 = 1;
    if ((long *)0x2 < plVar35) {
      uVar39 = (ulong)(((ulong)plVar35 & (ulong)((long)plVar35 - 1U)) != 0);
    }
    plVar13 = (long *)(uVar39 | (long)plVar35 * 2);
    puStack_650 = (uint *)0x6d267a1;
    fVar43 = (float)func_0x0eee3ab0(fVar43 / *(float *)(lVar11 + 0x80));
    plVar35 = (long *)((long)(fVar43 - _DAT_01198778) & (long)fVar43 >> 0x3f | (long)fVar43);
    if (plVar35 < plVar13) {
      plVar35 = plVar13;
    }
    plVar13 = (long *)0x2;
    if ((plVar35 != (long *)0x1) &&
       (plVar13 = plVar35, ((ulong)plVar35 & (ulong)((long)plVar35 - 1U)) != 0)) {
      puStack_650 = (uint *)0x6d267e6;
      plVar13 = (long *)FUN_0412c3f0();
    }
    plVar35 = *(long **)(auStack_628._0_8_ + 0x68);
    if (plVar35 < plVar13) {
LAB_06d267f7:
      puStack_650 = (uint *)0x6d26804;
      func_0x06d840a0(auStack_5d8._0_8_,plVar13);
    }
    else if (plVar13 < plVar35) {
      puStack_650 = (uint *)0x6d26851;
      fVar43 = (float)func_0x0eee3ab0((float)*(ulong *)(auStack_628._0_8_ + 0x78) /
                                      *(float *)(auStack_628._0_8_ + 0x80));
      plVar20 = (long *)((long)(fVar43 - _DAT_01198778) & (long)fVar43 >> 0x3f | (long)fVar43);
      if ((plVar35 < (long *)0x3) ||
         (uVar39 = (long)plVar35 - ((ulong)plVar35 >> 1 & 0x5555555555555555),
         uVar39 = (uVar39 >> 2 & 0x3333333333333333) + (uVar39 & 0x3333333333333333),
         1 < (byte)(((uVar39 >> 4) + uVar39 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        puStack_650 = (uint *)0x6d268fb;
        plVar20 = (long *)FUN_0412c3f0(plVar20);
      }
      else if ((long *)0x1 < plVar20) {
        lVar11 = 0x3f;
        if ((undefined1 *)((long)plVar20 + -1) != (undefined1 *)0x0) {
          for (; (ulong)((long)plVar20 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        plVar20 = (long *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
      }
      if (plVar13 <= plVar20) {
        plVar13 = plVar20;
      }
      if (plVar13 < plVar35) goto LAB_06d267f7;
    }
    plVar35 = *(long **)(auStack_628._0_8_ + 0x68);
    lVar11 = auStack_628._0_8_;
    if (((ulong)plVar35 & (long)plVar35 - 1U) == 0) {
      plVar20 = (long *)((ulong)plVar40 & (ulong)((long)plVar35 - 1U));
    }
    else {
      plVar20 = plVar40;
      if (plVar35 <= plVar40) {
        if (((ulong)plVar40 | (ulong)plVar35) >> 0x20 == 0) {
          plVar20 = (long *)(((ulong)plVar40 & 0xffffffff) % ((ulong)plVar35 & 0xffffffff));
        }
        else {
          plVar20 = (long *)((ulong)plVar40 % (ulong)plVar35);
        }
      }
    }
  }
  lVar38 = *(long *)auStack_5d8._0_8_;
  plVar40 = *(long **)(lVar38 + (long)plVar20 * 8);
  if (plVar40 == (long *)0x0) {
    *plVar41 = *(long *)(lVar11 + 0x70);
    *(long **)(lVar11 + 0x70) = plVar41;
    *(long *)(lVar38 + (long)plVar20 * 8) = lVar11 + 0x70;
    if (*plVar41 != 0) {
      plVar40 = *(long **)(*plVar41 + 8);
      if (((ulong)plVar35 & (long)plVar35 - 1U) == 0) {
        *(long **)(lVar38 + ((ulong)plVar40 & (ulong)((long)plVar35 - 1U)) * 8) = plVar41;
      }
      else {
        if (plVar35 <= plVar40) {
          if (((ulong)plVar40 | (ulong)plVar35) >> 0x20 == 0) {
            *(long **)(lVar38 + (((ulong)plVar40 & 0xffffffff) % ((ulong)plVar35 & 0xffffffff)) * 8)
                 = plVar41;
            goto LAB_06d2696a;
          }
          plVar40 = (long *)((ulong)plVar40 % (ulong)plVar35);
        }
        *(long **)(lVar38 + (long)plVar40 * 8) = plVar41;
      }
    }
  }
  else {
    *plVar41 = *plVar40;
    *plVar40 = (long)plVar41;
  }
LAB_06d2696a:
  *(long *)(lVar11 + 0x78) = *(long *)(lVar11 + 0x78) + 1;
  goto LAB_06d2696e;
LAB_06d263c9:
  puStack_650 = (uint *)0x6d263de;
  unaff_RBP = (undefined1 (*) [16])func_0x04883620(&bStack_528,plStack_610,uVar18);
  unaff_R15 = *(undefined1 (**) [16])(auStack_628._0_8_ + 0x68);
  if (unaff_R15 != (undefined1 (*) [16])0x0) {
    uVar39 = (long)unaff_R15 - ((ulong)unaff_R15 >> 1 & 0x5555555555555555);
    uVar39 = (uVar39 >> 2 & 0x3333333333333333) + (uVar39 & 0x3333333333333333);
    uVar39 = ((uVar39 >> 4) + uVar39 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar39 >> 0x38 < 2) {
      unaff_R13 = (undefined1 (*) [16])((ulong)(unaff_R15[-1] + 0xf) & (ulong)unaff_RBP);
    }
    else {
      unaff_R13 = unaff_RBP;
      if (unaff_R15 <= unaff_RBP) {
        if (((ulong)unaff_RBP | (ulong)unaff_R15) >> 0x20 == 0) {
          unaff_R13 = (undefined1 (*) [16])
                      (((ulong)unaff_RBP & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff));
        }
        else {
          unaff_R13 = (undefined1 (*) [16])((ulong)unaff_RBP % (ulong)unaff_R15);
        }
      }
    }
    puVar2 = *(undefined8 **)(*(long *)auStack_5d8._0_8_ + (long)unaff_R13 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar40 = (long *)*puVar2, plVar40 != (long *)0x0)) {
      if (((uint)auStack_608 & 1) == 0) {
        plVar13 = (long *)(ulong)(auStack_608[0] >> 1);
      }
      else {
        plVar13 = (long *)CONCAT44(uStack_5fc,uStack_600);
        plStack_5e8 = plStack_5f8;
      }
      if ((byte)(uVar39 >> 0x38) < 2) {
        plVar35 = (long *)(unaff_R15[-1] + 0xf);
        plStack_610 = plVar35;
        do {
          if ((undefined1 (*) [16])plVar40[1] == unaff_RBP) {
            bVar25 = *(byte *)(plVar40 + 2);
            if ((bVar25 & 1) == 0) {
              plVar41 = (long *)(ulong)(bVar25 >> 1);
            }
            else {
              plVar41 = (long *)plVar40[3];
            }
            if (plVar41 == plVar13) {
              if ((bVar25 & 1) == 0) {
                lVar11 = (long)plVar40 + 0x11;
              }
              else {
                lVar11 = plVar40[4];
              }
              puStack_650 = (uint *)0x6d27b43;
              iVar26 = func_0x0eee3000(lVar11,plStack_5e8,plVar13);
              plVar35 = plStack_610;
              if (iVar26 == 0) goto LAB_06d27ec1;
            }
          }
          else if ((undefined1 (*) [16])((ulong)plVar40[1] & (ulong)plVar35) != unaff_R13) break;
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
      else {
        do {
          pauVar12 = (undefined1 (*) [16])plVar40[1];
          if (pauVar12 == unaff_RBP) {
            bVar25 = *(byte *)(plVar40 + 2);
            if ((bVar25 & 1) == 0) {
              plVar35 = (long *)(ulong)(bVar25 >> 1);
            }
            else {
              plVar35 = (long *)plVar40[3];
            }
            if (plVar35 == plVar13) {
              if ((bVar25 & 1) == 0) {
                lVar11 = (long)plVar40 + 0x11;
              }
              else {
                lVar11 = plVar40[4];
              }
              puStack_650 = (uint *)0x6d27bc2;
              iVar26 = func_0x0eee3000(lVar11,plStack_5e8,plVar13);
              if (iVar26 == 0) goto LAB_06d27ec1;
            }
          }
          else {
            if (unaff_R15 <= pauVar12) {
              if (((ulong)pauVar12 | (ulong)unaff_R15) >> 0x20 == 0) {
                pauVar12 = (undefined1 (*) [16])
                           (((ulong)pauVar12 & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff));
              }
              else {
                pauVar12 = (undefined1 (*) [16])((ulong)pauVar12 % (ulong)unaff_R15);
              }
            }
            if (pauVar12 != unaff_R13) break;
          }
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
    }
  }
  puStack_650 = (uint *)0x6d27be1;
  plVar40 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (plVar40 == (long *)0x0) goto LAB_06d27f6a;
LAB_06d27bed:
  bStack_528 = (byte)plVar40;
  bStack_527 = (byte)((ulong)plVar40 >> 8);
  sStack_526 = (short)((ulong)plVar40 >> 0x10);
  uStack_524 = (undefined1)((ulong)plVar40 >> 0x20);
  uStack_523 = (undefined2)((ulong)plVar40 >> 0x28);
  uStack_521 = (undefined1)((ulong)plVar40 >> 0x38);
  uStack_520 = auStack_5d8._0_4_;
  uStack_51c = auStack_5d8._4_4_;
  pbStack_518 = (byte *)0x0;
  *plVar40 = 0;
  plVar40[1] = (long)unaff_RBP;
  if (((uint)auStack_608 & 1) == 0) {
    plVar40[4] = (long)plStack_5f8;
    plVar40[2] = CONCAT44(uStack_604,auStack_608);
    plVar40[3] = CONCAT44(uStack_5fc,uStack_600);
    lVar11 = auStack_628._0_8_;
  }
  else {
    puStack_650 = (uint *)0x6d27c50;
    func_0x0412e5e0(plVar40 + 2,plStack_5f8,CONCAT44(uStack_5fc,uStack_600));
    lVar11 = auStack_628._0_8_;
  }
  plVar40[5] = 0;
  pbStack_518 = (byte *)CONCAT71(pbStack_518._1_7_,1);
  fVar43 = (float)(*(long *)(lVar11 + 0x78) + 1);
  if ((unaff_R15 == (undefined1 (*) [16])0x0) ||
     ((float)unaff_R15 * *(float *)(lVar11 + 0x80) < fVar43)) {
    uVar39 = 1;
    if ((undefined1 (*) [16])0x2 < unaff_R15) {
      uVar39 = (ulong)(((ulong)unaff_R15 & (ulong)(unaff_R15[-1] + 0xf)) != 0);
    }
    plVar41 = (long *)(uVar39 | (long)unaff_R15 * 2);
    puStack_650 = (uint *)0x6d27cfa;
    fVar43 = (float)func_0x0eee3ab0(fVar43 / *(float *)(lVar11 + 0x80));
    plVar35 = (long *)((long)(fVar43 - _DAT_01198778) & (long)fVar43 >> 0x3f | (long)fVar43);
    if (plVar35 < plVar41) {
      plVar35 = plVar41;
    }
    plVar13 = (long *)0x2;
    if ((plVar35 != (long *)0x1) &&
       (plVar13 = plVar35, ((ulong)plVar35 & (ulong)((long)plVar35 - 1U)) != 0)) {
      puStack_650 = (uint *)0x6d27d3f;
      plVar13 = (long *)FUN_0412c3f0();
    }
    plVar35 = *(long **)(auStack_628._0_8_ + 0x68);
    if (plVar35 < plVar13) {
LAB_06d27d50:
      puStack_650 = (uint *)0x6d27d5d;
      func_0x06d840a0(auStack_5d8._0_8_,plVar13);
    }
    else if (plVar13 < plVar35) {
      puStack_650 = (uint *)0x6d27daa;
      fVar43 = (float)func_0x0eee3ab0((float)*(ulong *)(auStack_628._0_8_ + 0x78) /
                                      *(float *)(auStack_628._0_8_ + 0x80));
      plVar41 = (long *)((long)(fVar43 - _DAT_01198778) & (long)fVar43 >> 0x3f | (long)fVar43);
      if ((plVar35 < (long *)0x3) ||
         (uVar39 = (long)plVar35 - ((ulong)plVar35 >> 1 & 0x5555555555555555),
         uVar39 = (uVar39 >> 2 & 0x3333333333333333) + (uVar39 & 0x3333333333333333),
         1 < (byte)(((uVar39 >> 4) + uVar39 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
        puStack_650 = (uint *)0x6d27e54;
        plVar41 = (long *)FUN_0412c3f0(plVar41);
      }
      else if ((long *)0x1 < plVar41) {
        lVar11 = 0x3f;
        if ((undefined1 *)((long)plVar41 + -1) != (undefined1 *)0x0) {
          for (; (ulong)((long)plVar41 + -1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        plVar41 = (long *)(1L << (-((byte)lVar11 ^ 0x3f) & 0x3f));
      }
      if (plVar13 <= plVar41) {
        plVar13 = plVar41;
      }
      if (plVar13 < plVar35) goto LAB_06d27d50;
    }
    unaff_R15 = *(undefined1 (**) [16])(auStack_628._0_8_ + 0x68);
    lVar11 = auStack_628._0_8_;
    if (((ulong)unaff_R15 & (ulong)(unaff_R15[-1] + 0xf)) == 0) {
      unaff_R13 = (undefined1 (*) [16])((ulong)unaff_RBP & (ulong)(unaff_R15[-1] + 0xf));
    }
    else {
      unaff_R13 = unaff_RBP;
      if (unaff_R15 <= unaff_RBP) {
        if (((ulong)unaff_RBP | (ulong)unaff_R15) >> 0x20 == 0) {
          unaff_R13 = (undefined1 (*) [16])
                      (((ulong)unaff_RBP & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff));
        }
        else {
          unaff_R13 = (undefined1 (*) [16])((ulong)unaff_RBP % (ulong)unaff_R15);
        }
      }
    }
  }
  lVar38 = *(long *)auStack_5d8._0_8_;
  plVar35 = *(long **)(lVar38 + (long)unaff_R13 * 8);
  if (plVar35 == (long *)0x0) {
    *plVar40 = *(long *)(lVar11 + 0x70);
    *(long **)(lVar11 + 0x70) = plVar40;
    *(long *)(lVar38 + (long)unaff_R13 * 8) = lVar11 + 0x70;
    if (*plVar40 != 0) {
      pauVar12 = *(undefined1 (**) [16])(*plVar40 + 8);
      if (((ulong)unaff_R15 & (ulong)(unaff_R15[-1] + 0xf)) == 0) {
        *(long **)(lVar38 + ((ulong)pauVar12 & (ulong)(unaff_R15[-1] + 0xf)) * 8) = plVar40;
      }
      else {
        if (unaff_R15 <= pauVar12) {
          if (((ulong)pauVar12 | (ulong)unaff_R15) >> 0x20 == 0) {
            pauVar12 = (undefined1 (*) [16])
                       (((ulong)pauVar12 & 0xffffffff) % ((ulong)unaff_R15 & 0xffffffff));
          }
          else {
            pauVar12 = (undefined1 (*) [16])((ulong)pauVar12 % (ulong)unaff_R15);
          }
          lVar11 = auStack_628._0_8_;
        }
        *(long **)(lVar38 + (long)pauVar12 * 8) = plVar40;
      }
    }
  }
  else {
    *plVar40 = *plVar35;
    *plVar35 = (long)plVar40;
  }
  *(long *)(lVar11 + 0x78) = *(long *)(lVar11 + 0x78) + 1;
LAB_06d27ec1:
  plVar40[5] = (long)((double)uStack_5a8 + (double)plVar40[5]);
LAB_06d2696e:
  puStack_650 = (uint *)0x6d2697b;
  func_0x0412d520(puStack_540);
  puVar6 = puStack_558;
  puVar14 = (uint *)((ulong)puStack_558 & 0xffffffff);
  if (((uint)auStack_608 & 1) != 0) {
    puStack_650 = (uint *)0x6d2699c;
    func_0x0412a280(plStack_5f8,CONCAT44(uStack_604,auStack_608) & 0xfffffffffffffffe);
  }
  puVar30 = &uStack_5ac;
  puStack_650 = (uint *)0x6d269ab;
  lVar11 = func_0x06d81ee0((ulong)puVar6 & 0xffffffff,puVar30);
  puStack_650 = (uint *)0x6d269b9;
  cVar7 = func_0x04864220(lVar11 + 0x1e0);
  if (cVar7 != '\0') {
    puStack_650 = (uint *)0x6d269d0;
    lVar38 = func_0x06d81ee0((ulong)puVar6 & 0xffffffff,&uStack_5ac);
    lVar11 = lVar38 + 0x1f0;
    uStack_200 = 1;
    puStack_650 = (uint *)0x6d269f2;
    lStack_208 = lVar11;
    FUN_0412d450(lVar11);
    auStack_628._0_8_ = lVar11;
    puStack_650 = (uint *)0x6d26a01;
    plVar35 = (long *)func_0x0bbfc6d0(plStack_5e0);
    puStack_650 = (uint *)0x6d26a0c;
    lVar11 = (**(code **)(*plVar35 + 0x40))(plVar35,0);
    puStack_650 = (uint *)0x6d26a1f;
    func_0x0c4510a0(&bStack_528,lVar11);
    bStack_528 = 0xa8;
    bStack_527 = 0x1d;
    sStack_526 = 0xf37;
    uStack_524 = 0;
    uStack_523 = 0;
    uStack_521 = 0;
    auStack_4a8[0] = 0;
    uStack_498 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x90) == 0xffffffff) {
      uStack_498 = 0xffffffff;
    }
    else {
      puStack_650 = (uint *)0x6d26a7e;
      puStack_3e8 = auStack_4a8;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(lVar11 + 0x90) * 8))
                (&puStack_3e8,auStack_4a8,lVar11 + 0x80);
    }
    puStack_650 = (uint *)0x6d26ad6;
    plVar35 = (long *)func_0x0bbfc6d0(plStack_5e0);
    puStack_650 = (uint *)0x6d26ae4;
    lVar11 = (**(code **)(*plVar35 + 0x40))(plVar35,3);
    puStack_650 = (uint *)0x6d26af7;
    func_0x0c4510a0(&puStack_3e8,lVar11);
    puStack_3e8 = (uint *)&UNK_0f371da8;
    auStack_368[0] = 0;
    uStack_358 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x90) == 0xffffffff) {
      uStack_358 = 0xffffffff;
    }
    else {
      cStack_348 = (char)auStack_368;
      uStack_347 = (undefined7)((ulong)auStack_368 >> 8);
      puStack_650 = (uint *)0x6d26b4f;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(lVar11 + 0x90) * 8))
                (&cStack_348,auStack_368,lVar11 + 0x80);
    }
    puStack_650 = (uint *)0x6d26b66;
    plVar35 = (long *)func_0x0bbfc6d0(plStack_5e0);
    puStack_650 = (uint *)0x6d26b74;
    lVar11 = (**(code **)(*plVar35 + 0x40))(plVar35,2);
    puStack_650 = (uint *)0x6d26b87;
    func_0x0c4510a0(&cStack_348,lVar11);
    cStack_348 = -0x58;
    uStack_347 = 0xf371d;
    auStack_2c8[0] = 0;
    uStack_2b8 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x90) == 0xffffffff) {
      uStack_2b8 = 0xffffffff;
    }
    else {
      puStack_650 = (uint *)0x6d26bdf;
      puStack_2b0 = auStack_2c8;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(lVar11 + 0x90) * 8))
                (&puStack_2b0,auStack_2c8,lVar11 + 0x80);
    }
    puStack_650 = (uint *)0x6d26bf6;
    plVar35 = (long *)func_0x0bbfc6d0(plStack_5e0);
    puStack_650 = (uint *)0x6d26c04;
    lVar11 = (**(code **)(*plVar35 + 0x40))(plVar35,1);
    puStack_650 = (uint *)0x6d26c17;
    func_0x0c4510a0(&puStack_2b0,lVar11);
    puStack_2b0 = (uint *)&UNK_0f371da8;
    auStack_230[0] = 0;
    uStack_220 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x90) == 0xffffffff) {
      uStack_220 = 0xffffffff;
    }
    else {
      puStack_650 = (uint *)0x6d26c6f;
      puStack_c8 = auStack_230;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(lVar11 + 0x90) * 8))
                (&puStack_c8,auStack_230,lVar11 + 0x80);
    }
    puStack_650 = (uint *)0x6d26c86;
    plVar35 = (long *)func_0x0bbfc6d0(plStack_5e0);
    puStack_650 = (uint *)0x6d26c94;
    lVar11 = (**(code **)(*plVar35 + 0x40))(plVar35,4);
    puStack_650 = (uint *)0x6d26ca7;
    func_0x0c4510a0(&puStack_c8,lVar11);
    puStack_c8 = (uint *)&UNK_0f371da8;
    puVar33 = auStack_48;
    auStack_48[0] = 0;
    uStack_38 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x90) == 0xffffffff) {
      uStack_38 = 0xffffffff;
    }
    else {
      puStack_650 = (uint *)0x6d26d02;
      puStack_160 = puVar33;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(lVar11 + 0x90) * 8))
                (&puStack_160,puVar33,lVar11 + 0x80);
    }
    puStack_650 = (uint *)0x6d26d19;
    plVar35 = (long *)func_0x0bbfc510(plStack_5e0);
    puStack_650 = (uint *)0x6d26d27;
    lVar11 = (**(code **)(*plVar35 + 0x40))(plVar35,1);
    puStack_650 = (uint *)0x6d26d3a;
    func_0x0c4510a0(&puStack_160,lVar11);
    puStack_160 = (uint *)&UNK_0f371da8;
    puVar32 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_d0 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x90) == 0xffffffff) {
      uStack_d0 = 0xffffffff;
    }
    else {
      puStack_650 = (uint *)0x6d26d94;
      puStack_1f8 = puVar32;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(lVar11 + 0x90) * 8))
                (&puStack_1f8,puVar32,lVar11 + 0x80);
    }
    puStack_650 = (uint *)0x6d26dad;
    lVar11 = (**(code **)(*param_3 + 0x270))(param_3);
    puStack_650 = (uint *)0x6d26dc0;
    func_0x0c4510a0(&puStack_1f8,lVar11);
    puStack_1f8 = (uint *)&UNK_0f371da8;
    puVar31 = auStack_178;
    auStack_178[0] = 0;
    uStack_168 = 0;
    if ((ulong)*(uint *)(lVar11 + 0x90) == 0xffffffff) {
      uStack_168 = 0xffffffff;
    }
    else {
      puStack_650 = (uint *)0x6d26e11;
      puStack_648 = puVar31;
      (**(code **)(&UNK_0f38c5a0 + (ulong)*(uint *)(lVar11 + 0x90) * 8))
                (&puStack_648,puVar31,lVar11 + 0x80);
    }
    if (((long *)CONCAT44(uStack_51c,uStack_520) == (long *)0x0) ||
       (lVar11 = *(long *)CONCAT44(uStack_51c,uStack_520), lVar11 == 0)) {
      puStack_648 = (uint *)((ulong)puStack_648 & 0xffffffffffff0000);
    }
    else if ((*(byte *)(lVar11 + 0xb0) & 1) == 0) {
      uStack_638 = *(undefined8 *)(lVar11 + 0xc0);
      puStack_648 = *(uint **)(lVar11 + 0xb0);
      uStack_640 = *(undefined4 *)(lVar11 + 0xb8);
      uStack_63c = *(undefined4 *)(lVar11 + 0xbc);
    }
    else {
      puStack_650 = (uint *)0x6d26e9a;
      func_0x0412e5e0(&puStack_648,*(undefined8 *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 0xb8));
    }
    puStack_650 = (uint *)0x6d26eaa;
    func_0x048631d0(auStack_5c0,&puStack_648);
    lVar38 = lVar38 + 0x1e0;
    puStack_650 = (uint *)0x6d26ec0;
    uVar16 = func_0x04864680(lVar38,&UNK_012f4f7f);
    puStack_650 = (uint *)0x6d26ed3;
    func_0x04863790(uVar16,auStack_5c0);
    puStack_650 = (uint *)0x6d26edb;
    func_0x04863610(auStack_5c0);
    if (((ulong)puStack_648 & 1) != 0) {
      puStack_650 = (uint *)0x6d26ef3;
      func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
    }
    if ((plStack_3e0 == (long *)0x0) || (lVar11 = *plStack_3e0, lVar11 == 0)) {
      puStack_648 = (uint *)((ulong)puStack_648 & 0xffffffffffff0000);
    }
    else if ((*(byte *)(lVar11 + 0xb0) & 1) == 0) {
      uStack_638 = *(undefined8 *)(lVar11 + 0xc0);
      puStack_648 = *(uint **)(lVar11 + 0xb0);
      uStack_640 = *(undefined4 *)(lVar11 + 0xb8);
      uStack_63c = *(undefined4 *)(lVar11 + 0xbc);
    }
    else {
      puStack_650 = (uint *)0x6d26f49;
      func_0x0412e5e0(&puStack_648,*(undefined8 *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 0xb8));
    }
    puStack_650 = (uint *)0x6d26f59;
    func_0x048631d0(auStack_5c0,&puStack_648);
    puStack_650 = (uint *)0x6d26f68;
    uVar16 = func_0x04864680(lVar38,&UNK_0146309b);
    puStack_650 = (uint *)0x6d26f7b;
    func_0x04863790(uVar16,auStack_5c0);
    puStack_650 = (uint *)0x6d26f83;
    func_0x04863610(auStack_5c0);
    if (((ulong)puStack_648 & 1) != 0) {
      puStack_650 = (uint *)0x6d26f9b;
      func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
    }
    if (((long *)CONCAT71(uStack_33f,uStack_340) == (long *)0x0) ||
       (lVar11 = *(long *)CONCAT71(uStack_33f,uStack_340), lVar11 == 0)) {
      puStack_648 = (uint *)((ulong)puStack_648 & 0xffffffffffff0000);
    }
    else if ((*(byte *)(lVar11 + 0xb0) & 1) == 0) {
      uStack_638 = *(undefined8 *)(lVar11 + 0xc0);
      puStack_648 = *(uint **)(lVar11 + 0xb0);
      uStack_640 = *(undefined4 *)(lVar11 + 0xb8);
      uStack_63c = *(undefined4 *)(lVar11 + 0xbc);
    }
    else {
      puStack_650 = (uint *)0x6d26ff1;
      func_0x0412e5e0(&puStack_648,*(undefined8 *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 0xb8));
    }
    puStack_650 = (uint *)0x6d27001;
    func_0x048631d0(auStack_5c0,&puStack_648);
    puStack_650 = (uint *)0x6d27010;
    uVar16 = func_0x04864680(lVar38,&UNK_012a76dd);
    puStack_650 = (uint *)0x6d27023;
    func_0x04863790(uVar16,auStack_5c0);
    puStack_650 = (uint *)0x6d2702b;
    func_0x04863610(auStack_5c0);
    if (((ulong)puStack_648 & 1) != 0) {
      puStack_650 = (uint *)0x6d27043;
      func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
    }
    if ((plStack_2a8 == (long *)0x0) || (lVar11 = *plStack_2a8, lVar11 == 0)) {
      puStack_648 = (uint *)((ulong)puStack_648 & 0xffffffffffff0000);
    }
    else if ((*(byte *)(lVar11 + 0xb0) & 1) == 0) {
      uStack_638 = *(undefined8 *)(lVar11 + 0xc0);
      puStack_648 = *(uint **)(lVar11 + 0xb0);
      uStack_640 = *(undefined4 *)(lVar11 + 0xb8);
      uStack_63c = *(undefined4 *)(lVar11 + 0xbc);
    }
    else {
      puStack_650 = (uint *)0x6d27099;
      func_0x0412e5e0(&puStack_648,*(undefined8 *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 0xb8));
    }
    puStack_650 = (uint *)0x6d270a9;
    func_0x048631d0(auStack_5c0,&puStack_648);
    puStack_650 = (uint *)0x6d270b8;
    uVar16 = func_0x04864680(lVar38,&UNK_01394aeb);
    puStack_650 = (uint *)0x6d270cb;
    func_0x04863790(uVar16,auStack_5c0);
    puStack_650 = (uint *)0x6d270d3;
    func_0x04863610(auStack_5c0);
    if (((ulong)puStack_648 & 1) != 0) {
      puStack_650 = (uint *)0x6d270eb;
      func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
    }
    if ((plStack_c0 == (long *)0x0) || (lVar11 = *plStack_c0, lVar11 == 0)) {
      puStack_648 = (uint *)((ulong)puStack_648 & 0xffffffffffff0000);
    }
    else if ((*(byte *)(lVar11 + 0xb0) & 1) == 0) {
      uStack_638 = *(undefined8 *)(lVar11 + 0xc0);
      puStack_648 = *(uint **)(lVar11 + 0xb0);
      uStack_640 = *(undefined4 *)(lVar11 + 0xb8);
      uStack_63c = *(undefined4 *)(lVar11 + 0xbc);
    }
    else {
      puStack_650 = (uint *)0x6d27141;
      func_0x0412e5e0(&puStack_648,*(undefined8 *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 0xb8));
    }
    puStack_650 = (uint *)0x6d27151;
    func_0x048631d0(auStack_5c0,&puStack_648);
    puStack_650 = (uint *)0x6d27160;
    uVar16 = func_0x04864680(lVar38,&UNK_011ea95f);
    puStack_650 = (uint *)0x6d27173;
    func_0x04863790(uVar16,auStack_5c0);
    puStack_650 = (uint *)0x6d2717b;
    func_0x04863610(auStack_5c0);
    if (((ulong)puStack_648 & 1) != 0) {
      puStack_650 = (uint *)0x6d27193;
      func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
    }
    if ((plStack_158 == (long *)0x0) || (lVar11 = *plStack_158, lVar11 == 0)) {
      puStack_648 = (uint *)((ulong)puStack_648 & 0xffffffffffff0000);
    }
    else if ((*(byte *)(lVar11 + 0xb0) & 1) == 0) {
      uStack_638 = *(undefined8 *)(lVar11 + 0xc0);
      puStack_648 = *(uint **)(lVar11 + 0xb0);
      uStack_640 = *(undefined4 *)(lVar11 + 0xb8);
      uStack_63c = *(undefined4 *)(lVar11 + 0xbc);
    }
    else {
      puStack_650 = (uint *)0x6d271e9;
      func_0x0412e5e0(&puStack_648,*(undefined8 *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 0xb8));
    }
    puStack_650 = (uint *)0x6d271f9;
    func_0x048631d0(auStack_5c0,&puStack_648);
    puStack_650 = (uint *)0x6d27208;
    uVar16 = func_0x04864680(lVar38,&UNK_012c111d);
    puVar14 = auStack_5c0;
    puStack_650 = (uint *)0x6d2721b;
    func_0x04863790(uVar16,puVar14);
    puStack_650 = (uint *)0x6d27223;
    func_0x04863610(puVar14);
    if (((ulong)puStack_648 & 1) != 0) {
      puStack_650 = (uint *)0x6d2723b;
      func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
    }
    if ((plStack_1f0 == (long *)0x0) || (lVar11 = *plStack_1f0, lVar11 == 0)) {
      puStack_648 = (uint *)((ulong)puStack_648 & 0xffffffffffff0000);
    }
    else if ((*(byte *)(lVar11 + 0xb0) & 1) == 0) {
      uStack_638 = *(undefined8 *)(lVar11 + 0xc0);
      puStack_648 = *(uint **)(lVar11 + 0xb0);
      uStack_640 = *(undefined4 *)(lVar11 + 0xb8);
      uStack_63c = *(undefined4 *)(lVar11 + 0xbc);
    }
    else {
      puStack_650 = (uint *)0x6d27291;
      func_0x0412e5e0(&puStack_648,*(undefined8 *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 0xb8));
    }
    puStack_650 = (uint *)0x6d272a1;
    func_0x048631d0(auStack_5c0,&puStack_648);
    puStack_650 = (uint *)0x6d272b0;
    uVar16 = func_0x04864680(lVar38,&UNK_012c1125);
    puStack_650 = (uint *)0x6d272c3;
    puVar30 = auStack_5c0;
    func_0x04863790(uVar16,auStack_5c0);
    puStack_650 = (uint *)0x6d272cb;
    func_0x04863610(auStack_5c0);
    if (((ulong)puStack_648 & 1) != 0) {
      puVar30 = (uint *)((ulong)puStack_648 & 0xfffffffffffffffe);
      puStack_650 = (uint *)0x6d272e3;
      func_0x0412a280(uStack_638,puVar30);
    }
    puStack_1f8 = (uint *)&UNK_0f371da8;
    puVar34 = auStack_4a8;
    if ((ulong)uStack_168 != 0xffffffff) {
      puStack_650 = (uint *)0x6d27314;
      (**(code **)(&UNK_0f0893e0 + (ulong)uStack_168 * 8))(&puStack_648,puVar31);
      puVar30 = puVar31;
    }
    plVar35 = plStack_180;
    uStack_168 = 0xffffffff;
    puStack_1f8 = (uint *)&UNK_0f36e918;
    plStack_180 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d2734d;
      (**(code **)(*plVar35 + 8))();
    }
    if (lStack_1a8 != 0) {
      lStack_1a0 = lStack_1a8;
      puVar30 = (uint *)(lStack_198 - lStack_1a8);
      puStack_650 = (uint *)0x6d27372;
      func_0x0412a280(lStack_1a8,puVar30);
    }
    if (lStack_1c8 != 0) {
      lStack_1c0 = lStack_1c8;
      puVar30 = (uint *)(lStack_1b8 - lStack_1c8);
      puStack_650 = (uint *)0x6d27397;
      func_0x0412a280(lStack_1c8,puVar30);
    }
    plVar35 = plStack_1e8;
    plStack_1e8 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d273b6;
      (**(code **)(*plVar35 + 8))();
    }
    if (plStack_1f0 != (long *)0x0) {
      LOCK();
      *(int *)((long)plStack_1f0 + 0xc) = *(int *)((long)plStack_1f0 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plStack_1f0 + 0xc) < 1) && (*plStack_1f0 == 0)) &&
         (plStack_1f0 != (long *)0x0)) {
        puVar30 = (uint *)0x10;
        puStack_650 = (uint *)0x6d273eb;
        func_0x0412a280(plStack_1f0,0x10);
      }
    }
    puStack_160 = (uint *)&UNK_0f371da8;
    if ((ulong)uStack_d0 != 0xffffffff) {
      puStack_650 = (uint *)0x6d27419;
      (**(code **)(&UNK_0f0893e0 + (ulong)uStack_d0 * 8))(&puStack_1f8,puVar32);
      puVar30 = puVar32;
    }
    plVar35 = plStack_e8;
    uStack_d0 = 0xffffffff;
    puStack_160 = (uint *)&UNK_0f36e918;
    plStack_e8 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d2744b;
      (**(code **)(*plVar35 + 8))();
    }
    if (lStack_110 != 0) {
      lStack_108 = lStack_110;
      puVar30 = (uint *)(lStack_100 - lStack_110);
      puStack_650 = (uint *)0x6d27470;
      func_0x0412a280(lStack_110,puVar30);
    }
    if (lStack_130 != 0) {
      lStack_128 = lStack_130;
      puVar30 = (uint *)(lStack_120 - lStack_130);
      puStack_650 = (uint *)0x6d27495;
      func_0x0412a280(lStack_130,puVar30);
    }
    plVar35 = plStack_150;
    plStack_150 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d274b4;
      (**(code **)(*plVar35 + 8))();
    }
    if (plStack_158 != (long *)0x0) {
      LOCK();
      *(int *)((long)plStack_158 + 0xc) = *(int *)((long)plStack_158 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plStack_158 + 0xc) < 1) && (*plStack_158 == 0)) &&
         (plStack_158 != (long *)0x0)) {
        puVar30 = (uint *)0x10;
        puStack_650 = (uint *)0x6d274e9;
        func_0x0412a280(plStack_158,0x10);
      }
    }
    puStack_c8 = (uint *)&UNK_0f371da8;
    if ((ulong)uStack_38 != 0xffffffff) {
      puStack_650 = (uint *)0x6d27517;
      (**(code **)(&UNK_0f0893e0 + (ulong)uStack_38 * 8))(&puStack_160,puVar33);
      puVar30 = puVar33;
    }
    plVar35 = plStack_50;
    uStack_38 = 0xffffffff;
    puStack_c8 = (uint *)&UNK_0f36e918;
    plStack_50 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d27549;
      (**(code **)(*plVar35 + 8))();
    }
    puVar33 = auStack_368;
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      puVar30 = (uint *)(lStack_68 - lStack_78);
      puStack_650 = (uint *)0x6d27576;
      func_0x0412a280(lStack_78,puVar30);
    }
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      puVar30 = (uint *)(lStack_88 - lStack_98);
      puStack_650 = (uint *)0x6d2759b;
      func_0x0412a280(lStack_98,puVar30);
    }
    plVar35 = plStack_b8;
    plStack_b8 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d275ba;
      (**(code **)(*plVar35 + 8))();
    }
    if (plStack_c0 != (long *)0x0) {
      LOCK();
      *(int *)((long)plStack_c0 + 0xc) = *(int *)((long)plStack_c0 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plStack_c0 + 0xc) < 1) && (*plStack_c0 == 0)) &&
         (plStack_c0 != (long *)0x0)) {
        puVar30 = (uint *)0x10;
        puStack_650 = (uint *)0x6d275ef;
        func_0x0412a280(plStack_c0,0x10);
      }
    }
    puStack_2b0 = (uint *)&UNK_0f371da8;
    if ((ulong)uStack_220 != 0xffffffff) {
      puVar30 = auStack_230;
      puStack_650 = (uint *)0x6d27622;
      (**(code **)(&UNK_0f0893e0 + (ulong)uStack_220 * 8))(&puStack_c8,puVar30);
    }
    plVar35 = plStack_238;
    uStack_220 = 0xffffffff;
    puStack_2b0 = (uint *)&UNK_0f36e918;
    plStack_238 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d27654;
      (**(code **)(*plVar35 + 8))();
    }
    if (lStack_260 != 0) {
      lStack_258 = lStack_260;
      puVar30 = (uint *)(lStack_250 - lStack_260);
      puStack_650 = (uint *)0x6d27679;
      func_0x0412a280(lStack_260,puVar30);
    }
    if (lStack_280 != 0) {
      lStack_278 = lStack_280;
      puVar30 = (uint *)(lStack_270 - lStack_280);
      puStack_650 = (uint *)0x6d2769e;
      func_0x0412a280(lStack_280,puVar30);
    }
    plVar35 = plStack_2a0;
    plStack_2a0 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d276bd;
      (**(code **)(*plVar35 + 8))();
    }
    if (plStack_2a8 != (long *)0x0) {
      LOCK();
      *(int *)((long)plStack_2a8 + 0xc) = *(int *)((long)plStack_2a8 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plStack_2a8 + 0xc) < 1) && (*plStack_2a8 == 0)) &&
         (plStack_2a8 != (long *)0x0)) {
        puVar30 = (uint *)0x10;
        puStack_650 = (uint *)0x6d276f2;
        func_0x0412a280(plStack_2a8,0x10);
      }
    }
    cStack_348 = -0x58;
    uStack_347 = 0xf371d;
    if ((ulong)uStack_2b8 != 0xffffffff) {
      puVar30 = auStack_2c8;
      puStack_650 = (uint *)0x6d27725;
      (**(code **)(&UNK_0f0893e0 + (ulong)uStack_2b8 * 8))(&puStack_2b0,puVar30);
    }
    plVar35 = plStack_2d0;
    uStack_2b8 = 0xffffffff;
    cStack_348 = '\x18';
    uStack_347 = 0xf36e9;
    plStack_2d0 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d27757;
      (**(code **)(*plVar35 + 8))();
    }
    if (lStack_2f8 != 0) {
      lStack_2f0 = lStack_2f8;
      puVar30 = (uint *)(lStack_2e8 - lStack_2f8);
      puStack_650 = (uint *)0x6d2777c;
      func_0x0412a280(lStack_2f8,puVar30);
    }
    if (lStack_318 != 0) {
      lStack_310 = lStack_318;
      puVar30 = (uint *)(lStack_308 - lStack_318);
      puStack_650 = (uint *)0x6d277a1;
      func_0x0412a280(lStack_318,puVar30);
    }
    plVar35 = plStack_338;
    plStack_338 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d277c0;
      (**(code **)(*plVar35 + 8))();
    }
    plVar35 = (long *)CONCAT71(uStack_33f,uStack_340);
    if (plVar35 != (long *)0x0) {
      LOCK();
      *(int *)((long)plVar35 + 0xc) = *(int *)((long)plVar35 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plVar35 + 0xc) < 1) && (*plVar35 == 0)) &&
         (CONCAT71(uStack_33f,uStack_340) != 0)) {
        puVar30 = (uint *)0x10;
        puStack_650 = (uint *)0x6d277f5;
        func_0x0412a280(CONCAT71(uStack_33f,uStack_340),0x10);
      }
    }
    puStack_3e8 = (uint *)&UNK_0f371da8;
    if ((ulong)uStack_358 != 0xffffffff) {
      puStack_650 = (uint *)0x6d27823;
      (**(code **)(&UNK_0f0893e0 + (ulong)uStack_358 * 8))(&cStack_348,puVar33);
      puVar30 = puVar33;
    }
    plVar35 = plStack_370;
    uStack_358 = 0xffffffff;
    puStack_3e8 = (uint *)&UNK_0f36e918;
    plStack_370 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d27855;
      (**(code **)(*plVar35 + 8))();
    }
    if (lStack_398 != 0) {
      lStack_390 = lStack_398;
      puVar30 = (uint *)(lStack_388 - lStack_398);
      puStack_650 = (uint *)0x6d2787a;
      func_0x0412a280(lStack_398,puVar30);
    }
    if (lStack_3b8 != 0) {
      lStack_3b0 = lStack_3b8;
      puVar30 = (uint *)(lStack_3a8 - lStack_3b8);
      puStack_650 = (uint *)0x6d2789f;
      func_0x0412a280(lStack_3b8,puVar30);
    }
    plVar35 = plStack_3d8;
    plStack_3d8 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d278be;
      (**(code **)(*plVar35 + 8))();
    }
    if (plStack_3e0 != (long *)0x0) {
      LOCK();
      *(int *)((long)plStack_3e0 + 0xc) = *(int *)((long)plStack_3e0 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plStack_3e0 + 0xc) < 1) && (*plStack_3e0 == 0)) &&
         (plStack_3e0 != (long *)0x0)) {
        puVar30 = (uint *)0x10;
        puStack_650 = (uint *)0x6d278f3;
        func_0x0412a280(plStack_3e0,0x10);
      }
    }
    bStack_528 = 0xa8;
    bStack_527 = 0x1d;
    sStack_526 = 0xf37;
    uStack_524 = 0;
    uStack_523 = 0;
    uStack_521 = 0;
    plVar13 = (long *)auStack_628._0_8_;
    if ((ulong)uStack_498 != 0xffffffff) {
      puStack_650 = (uint *)0x6d27926;
      (**(code **)(&UNK_0f0893e0 + (ulong)uStack_498 * 8))(&puStack_3e8,puVar34);
      puVar30 = puVar34;
    }
    plVar35 = plStack_4b0;
    uStack_498 = 0xffffffff;
    bStack_528 = 0x18;
    bStack_527 = 0xe9;
    sStack_526 = 0xf36;
    uStack_524 = 0;
    uStack_523 = 0;
    uStack_521 = 0;
    plStack_4b0 = (long *)0x0;
    if (plVar35 != (long *)0x0) {
      puStack_650 = (uint *)0x6d27958;
      (**(code **)(*plVar35 + 8))();
    }
    if (lStack_4d8 != 0) {
      lStack_4d0 = lStack_4d8;
      puVar30 = (uint *)(lStack_4c8 - lStack_4d8);
      puStack_650 = (uint *)0x6d2797d;
      func_0x0412a280(lStack_4d8,puVar30);
    }
    if (lStack_4f8 != 0) {
      lStack_4f0 = lStack_4f8;
      puVar30 = (uint *)(lStack_4e8 - lStack_4f8);
      puStack_650 = (uint *)0x6d279a2;
      func_0x0412a280(lStack_4f8,puVar30);
    }
    pbVar36 = pbStack_518;
    pbStack_518 = (byte *)0x0;
    if (pbVar36 != (byte *)0x0) {
      puStack_650 = (uint *)0x6d279c1;
      (**(code **)(*(long *)pbVar36 + 8))();
    }
    plVar35 = (long *)CONCAT44(uStack_51c,uStack_520);
    if (plVar35 != (long *)0x0) {
      LOCK();
      *(int *)((long)plVar35 + 0xc) = *(int *)((long)plVar35 + 0xc) + -1;
      UNLOCK();
      if (((*(int *)((long)plVar35 + 0xc) < 1) && (*plVar35 == 0)) &&
         (CONCAT44(uStack_51c,uStack_520) != 0)) {
        puVar30 = (uint *)0x10;
        puStack_650 = (uint *)0x6d279f6;
        func_0x0412a280(CONCAT44(uStack_51c,uStack_520),0x10);
      }
    }
    puStack_650 = (uint *)0x6d279fe;
    func_0x0412d520(plVar13);
  }
  puStack_650 = (uint *)0x6d27a0a;
  func_0x0412d6b0(0xf5a3080);
  lVar11 = plStack_408[0xf];
  if (lVar11 != 0) {
    if (*(long **)(lVar11 + 0x70) == (long *)0x0) {
      puStack_650 = (uint *)0x6d27f80;
      uVar16 = func_0x04891200();
      puStack_650 = (uint *)0x6d28115;
      func_0x06d84050(&bStack_528);
      puStack_650 = (uint *)0x6d283b1;
      func_0x0525af10(&puStack_3e8);
      if (((uint)auStack_608 & 1) != 0) {
        puStack_650 = (uint *)0x6d283cf;
        func_0x0412a280(plStack_5f8,CONCAT44(uStack_604,auStack_608) & 0xfffffffffffffffe);
        puStack_650 = (uint *)0x6d283db;
        func_0x0412d6b0(0xf5a3080);
        puStack_650 = (uint *)0x6d283e3;
        uVar16 = _Unwind_Resume(uVar16);
        do {
          puStack_650 = (uint *)0x6d281d6;
          func_0x049c2320(&puStack_c8);
          puStack_650 = (uint *)0x6d281e3;
          func_0x049c2320(&puStack_2b0);
          puStack_650 = (uint *)0x6d281f0;
          func_0x049c2320(&cStack_348);
          puStack_650 = (uint *)0x6d281fd;
          func_0x049c2320(&puStack_3e8);
          puStack_650 = (uint *)0x6d2820a;
          func_0x049c2320(&bStack_528);
          puStack_650 = (uint *)0x6d28217;
          func_0x0525af10(&lStack_208);
          puStack_650 = (uint *)0x6d28223;
          func_0x0412d6b0(0xf5a3080);
          puStack_650 = (uint *)0x6d2822b;
          uVar16 = _Unwind_Resume(uVar16);
          if (((ulong)puStack_648 & 1) != 0) {
            puStack_650 = (uint *)0x6d281af;
            func_0x0412a280(uStack_638,(ulong)puStack_648 & 0xfffffffffffffffe);
          }
          puStack_650 = (uint *)0x6d281bc;
          func_0x049c2320(&puStack_1f8);
          puStack_650 = (uint *)0x6d281c9;
          func_0x049c2320(&puStack_160);
        } while( true );
      }
      puStack_650 = (uint *)0x6d28490;
      func_0x0412d6b0(0xf5a3080);
      puStack_650 = (uint *)0x6d28498;
      plVar35 = (long *)_Unwind_Resume(uVar16);
      puStack_650 = (uint *)0x6d284a8;
      func_0x06d0d580(&bStack_528);
      puStack_650 = (uint *)0x6d284b0;
      uVar10 = _Unwind_Resume();
      if (plVar35 != (long *)0x0) {
        lVar38 = plVar35[2];
        uVar8 = *(uint *)(plVar35 + 3);
        plVar40 = (long *)(*(long *)(lVar38 + 0x38) +
                          (ulong)((int)((ulong)(*(long *)(lVar38 + 0x40) - *(long *)(lVar38 + 0x38))
                                       >> 3) - 1U & 0xacb47b38) * 8);
        do {
          if (*plVar40 == -1) {
            return;
          }
          lVar17 = *plVar40 * 0x20;
          plVar40 = (long *)(*(long *)(lVar38 + 0x50) + lVar17);
        } while (*(int *)(*(long *)(lVar38 + 0x50) + 8 + lVar17) != -0x534b84c8);
        if ((plVar40 != *(long **)(lVar38 + 0x58)) && (lVar38 = plVar40[2], lVar38 != 0)) {
          uVar39 = (ulong)((uVar8 & 0x3ffff) >> 0xb);
          if ((uVar39 < (ulong)(*(long *)(lVar38 + 0x10) - *(long *)(lVar38 + 8) >> 3)) &&
             ((lVar38 = *(long *)(*(long *)(lVar38 + 8) + uVar39 * 8), lVar38 != 0 &&
              ((uVar8 & 0xfffc0000 ^ *(uint *)(lVar38 + (ulong)(uVar8 & 0x7ff) * 4)) < 0x3ffff)))) {
            lStack_660 = lVar11;
            plStack_658 = plVar13;
            puStack_650 = puVar14;
            lVar11 = (**(code **)(*plVar35 + 0x6b0))();
            if (lVar11 != 0) {
              func_0x06d08700(uVar10,_DAT_0f5a3078,plVar35,(ulong)puVar30 & 0xffffffff,
                              extraout_RDX & 0xffffffff);
              func_0x06d1cc70(&pcStack_678);
              if ((pcStack_678 == (char *)0x0) &&
                 (cVar7 = func_0x0eeddcf0(&UNK_01411d19,&UNK_0135b312,300,&UNK_0142bd41,
                                          &UNK_011a0d41), cVar7 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              if ((*pcStack_678 == '\0') &&
                 (cVar7 = func_0x0eeddcf0(&UNK_0130991f,&UNK_0147828b,0x130,&UNK_0142bd41,
                                          &UNK_011a0d41), cVar7 != '\0')) {
                _DAT_00000000 = 0xdeadc0de;
              }
              (**(code **)(*plStack_668 + 0xe8))
                        (uVar10,plStack_668,plVar35,(ulong)puVar30 & 0xffffffff,
                         extraout_RDX & 0xffffffff);
              plVar35 = plStack_670;
              pcStack_678 = (char *)0x0;
              plStack_670 = (long *)0x0;
              if (plVar35 != (long *)0x0) {
                LOCK();
                plVar40 = plVar35 + 1;
                lVar11 = *plVar40;
                *plVar40 = *plVar40 + -1;
                UNLOCK();
                if (lVar11 == 0) {
                  (**(code **)(*plVar35 + 0x10))(plVar35);
                  func_0x0412c2d0(plVar35);
                }
                plVar35 = plStack_670;
                plStack_668 = (long *)0x0;
                if (plStack_670 != (long *)0x0) {
                  LOCK();
                  plVar40 = plStack_670 + 1;
                  lVar11 = *plVar40;
                  *plVar40 = *plVar40 + -1;
                  UNLOCK();
                  if (lVar11 == 0) {
                    (**(code **)(*plStack_670 + 0x10))(plStack_670);
                    func_0x0412c2d0(plVar35);
                  }
                }
              }
            }
          }
        }
      }
      return;
    }
    puStack_650 = (uint *)0x6d27a2e;
    uVar16 = (**(code **)(**(long **)(lVar11 + 0x70) + 0x30))();
    *(undefined8 *)(lVar11 + 0x38) = uVar16;
  }
  return;
}


