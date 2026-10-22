/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9cb9070 (ELF vaddr 0x9bb9070)
 * Label: caller-of-callee
 * Body:  [[09cb9070, 09cb9787] [09cb9790, 09cb9e80] [09cb9e90, 09cba198] [09cba1a0, 09cbb508] [09cbbaec, 09cbbb1e] [09cbbb24, 09cbbb46]]
 * Ghidra: FUN_09cb9070
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09cb9070(undefined8 param_1,float param_2,long param_3,long *param_4,int *param_5)

{
  ulong *******pppppppuVar1;
  long *plVar2;
  ulong ******ppppppuVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong ***pppuVar9;
  ulong *puVar10;
  ulong ******ppppppuVar11;
  code *pcVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  char cVar15;
  int iVar16;
  ulong *******pppppppuVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  ulong *****pppppuVar21;
  ulong *******pppppppuVar22;
  int iVar23;
  ulong *****pppppuVar24;
  ulong ****ppppuVar25;
  ulong *******pppppppuVar26;
  int iVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong *****pppppuVar30;
  byte *pbVar31;
  undefined *puVar32;
  short *psVar33;
  undefined8 *puVar34;
  ulong *******pppppppuVar35;
  long *in_FS_OFFSET;
  bool bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  ulong *******pppppppuStack_3c8;
  ulong *******pppppppuStack_3c0;
  ulong *******pppppppuStack_3b8;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong *******pppppppuStack_398;
  undefined4 uStack_390;
  ulong *****pppppuStack_388;
  byte bStack_378;
  byte bStack_377;
  short sStack_376;
  undefined2 uStack_374;
  undefined2 uStack_372;
  int iStack_370;
  undefined2 uStack_36c;
  undefined1 uStack_36a;
  char cStack_369;
  undefined8 uStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long lStack_348;
  long lStack_340;
  byte bStack_338;
  undefined7 uStack_337;
  long lStack_328;
  long lStack_320;
  ulong *******apppppppuStack_318 [2];
  ulong *******pppppppuStack_308;
  long *plStack_300;
  ulong *******apppppppuStack_2f8 [2];
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  ulong *******pppppppuStack_2d8;
  ulong *******pppppppuStack_2d0;
  ulong *******pppppppuStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  uint uStack_298;
  undefined4 uStack_294;
  ulong *******pppppppuStack_290;
  undefined8 uStack_288;
  int iStack_280;
  undefined8 uStack_278;
  float fStack_270;
  float fStack_26c;
  ulong *******pppppppuStack_268;
  ulong *******pppppppuStack_260;
  ulong *******pppppppuStack_258;
  ulong *******pppppppuStack_250;
  ulong *******pppppppuStack_248;
  undefined8 uStack_238;
  int iStack_230;
  undefined4 uStack_22c;
  long *plStack_220;
  ulong *******pppppppuStack_218;
  ulong *******pppppppuStack_210;
  undefined1 uStack_208;
  ulong *******pppppppuStack_200;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  ulong *******pppppppuStack_1e8;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  ulong *******pppppppuStack_1a8;
  ulong *******pppppppuStack_1a0;
  ulong *******pppppppuStack_198;
  long lStack_190;
  short asStack_188 [8];
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long *plStack_130;
  char cStack_128;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong *******pppppppuStack_e8;
  undefined4 uStack_e0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_80;
  undefined4 auStack_78 [4];
  uint uStack_68;
  undefined8 uStack_58;
  long *plStack_50;
  ulong *******pppppppuStack_40;
  long *plStack_38;
  
  pppppppuStack_268 = (ulong *******)0x0;
  pppppppuStack_260 = (ulong *******)0x0;
  uStack_288 = 0;
  iStack_280 = 0;
  pppppppuStack_218 = (ulong *******)0x0;
  if (*(int *)(param_3 + 0x20) == 1) {
    func_0x09db3fc0(&bStack_378,param_3 + 0x28,param_4);
    pppppppuVar17 =
         (ulong *******)
         CONCAT26(uStack_372,
                  CONCAT24(uStack_374,CONCAT22(sStack_376,CONCAT11(bStack_377,bStack_378))));
    pppppppuVar22 =
         (ulong *******)CONCAT17(cStack_369,CONCAT16(uStack_36a,CONCAT24(uStack_36c,iStack_370)));
    if (pppppppuVar22 == (ulong *******)0x0) {
      pppppppuStack_268 = pppppppuVar17;
      pppppppuStack_260 = pppppppuVar22;
      if (*pppppppuVar17 == pppppppuVar17[1]) goto LAB_09cb957b;
    }
    else {
      LOCK();
      pppppppuVar22[1] = (ulong ******)((long)pppppppuVar22[1] + 1);
      UNLOCK();
      plVar18 = (long *)CONCAT17(cStack_369,CONCAT16(uStack_36a,CONCAT24(uStack_36c,iStack_370)));
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar20 = plVar18 + 1;
        lVar19 = *plVar20;
        *plVar20 = *plVar20 + -1;
        UNLOCK();
        if (lVar19 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          func_0x0412c2d0(plVar18);
        }
      }
      pppppppuVar26 = pppppppuStack_260;
      LOCK();
      pppppppuVar22[1] = (ulong ******)((long)pppppppuVar22[1] + 1);
      UNLOCK();
      pppppppuStack_268 = pppppppuVar17;
      pppppppuVar35 = pppppppuVar22;
      if (pppppppuStack_260 != (ulong *******)0x0) {
        LOCK();
        pppppppuVar1 = pppppppuStack_260 + 1;
        ppppppuVar11 = *pppppppuVar1;
        *pppppppuVar1 = (ulong ******)((long)*pppppppuVar1 + -1);
        UNLOCK();
        if (ppppppuVar11 == (ulong ******)0x0) {
          pppppppuVar17 = pppppppuVar22;
          (*(code *)(*pppppppuStack_260)[2])(pppppppuStack_260);
          pppppppuStack_260 = pppppppuVar17;
          func_0x0412c2d0(pppppppuVar26);
          pppppppuVar35 = pppppppuStack_260;
        }
      }
      pppppppuStack_260 = pppppppuVar35;
      LOCK();
      pppppppuVar17 = pppppppuVar22 + 1;
      ppppppuVar11 = *pppppppuVar17;
      *pppppppuVar17 = (ulong ******)((long)*pppppppuVar17 + -1);
      UNLOCK();
      if (ppppppuVar11 == (ulong ******)0x0) {
        (*(code *)(*pppppppuVar22)[2])(pppppppuVar22);
        func_0x0412c2d0(pppppppuVar22);
        if (*pppppppuStack_268 == pppppppuStack_268[1]) goto LAB_09cb957b;
      }
      else if (*pppppppuStack_268 == pppppppuStack_268[1]) {
LAB_09cb957b:
        bStack_378 = 0;
        bStack_377 = 0;
        sStack_376 = 0;
        uStack_374 = 0;
        uStack_372 = 0;
        iStack_370 = 0;
        uStack_36c = 0;
        uStack_36a = 0;
        cStack_369 = '\0';
        uStack_368._0_4_ = 0;
        uStack_368._4_4_ = 0;
        uStack_368 = (ulong *******)0x0;
        if (*param_5 != 0) {
          func_0x09e22e10(param_5,&UNK_011f7c99,0x1e,&bStack_378,1);
        }
        goto LAB_09cbb1de;
      }
    }
    plVar18 = (long *)0x0;
    pppppppuVar17 = (ulong *******)0x0;
LAB_09cb93a1:
    func_0x09e12a70(&pppppppuStack_1a8,param_3 + 0x110,*(undefined4 *)(param_3 + 0x118),
                    *(undefined4 *)(param_3 + 0x11c),param_5,1);
    if (cStack_128 != '\0') {
      uStack_278 = param_3;
      plStack_38 = param_4;
      if ((pppppppuStack_1a0 != (ulong *******)0x0) &&
         (ppppppuVar11 = *pppppppuStack_1a0, ppppppuVar11 != (ulong ******)0x0)) {
        ppppppuVar3 = ppppppuVar11 + 0x1d;
        pppppuVar21 = ppppppuVar11[0x1d];
        if (pppppuVar21 == _DAT_0f6e4af8) {
          if ((ppppppuVar11[0x21] != (ulong *****)&DAT_0f6e4af8) || (_DAT_0f6e4b18 != ppppppuVar3))
          {
            bVar4 = *(byte *)(ppppppuVar11 + 0x1e);
            if ((bVar4 & 1) == 0) {
              pppppuVar24 = (ulong *****)(ulong)(bVar4 >> 1);
            }
            else {
              pppppuVar24 = ppppppuVar11[0x1f];
            }
            pppppuVar30 = _DAT_0f6e4b08;
            if ((DAT_0f6e4b00 & 1) == 0) {
              pppppuVar30 = (ulong *****)(ulong)(DAT_0f6e4b00 >> 1);
            }
            if (pppppuVar24 == pppppuVar30) {
              if ((bVar4 & 1) == 0) {
                pppppuVar24 = (ulong *****)((long)ppppppuVar11 + 0xf1);
              }
              else {
                pppppuVar24 = ppppppuVar11[0x20];
              }
              uVar41 = _DAT_0f6e4b10;
              if ((DAT_0f6e4b00 & 1) == 0) {
                uVar41 = 0xf6e4b01;
              }
              iVar27 = func_0x0eee3000(pppppuVar24,uVar41);
              if (iVar27 == 0) {
                ppppppuVar11[0x21] = (ulong *****)&DAT_0f6e4af8;
                _DAT_0f6e4b18 = ppppppuVar3;
                goto LAB_09cb9446;
              }
            }
            goto LAB_09cb98d1;
          }
LAB_09cb9446:
          psVar33 = (short *)(lStack_190 + 0x128);
          if (asStack_188[0] == 0x7fff) {
            psVar33 = asStack_188;
          }
          if (lStack_190 == 0) {
            psVar33 = asStack_188;
          }
          sVar5 = *psVar33;
          puStack_1c0 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,1);
          if (puStack_1c0 == (undefined8 *)0x0) {
            func_0x0eec74c0(1,0);
          }
          puStack_1b8 = (undefined8 *)((long)puStack_1c0 + 1);
          *(char *)puStack_1c0 = (char)sVar5;
          lStack_118 = 0;
          lStack_110 = 0;
          lStack_108 = 0;
          puStack_1b0 = puStack_1b8;
          func_0x0c4840c0(&pppppppuStack_1a8,0,&puStack_1c0,&lStack_118,0,0);
          param_3 = uStack_278;
          if (lStack_118 != 0) {
            lStack_110 = lStack_118;
            func_0x0412a280(lStack_118,lStack_108 - lStack_118);
          }
          if (puStack_1c0 == (undefined8 *)0x0) goto LAB_09cb9959;
          puStack_1b8 = puStack_1c0;
          puVar28 = puStack_1b0;
          puVar34 = puStack_1c0;
LAB_09cb9546:
          func_0x0412a280(puVar34,(long)puVar28 - (long)puVar34);
        }
        else {
LAB_09cb98d1:
          param_3 = uStack_278;
          ppppppuVar11[0x21] = (ulong *****)0x0;
          if (pppppuVar21 == _DAT_0f6e51c0) {
            bVar4 = *(byte *)(ppppppuVar11 + 0x1e);
            if ((bVar4 & 1) == 0) {
              pppppuVar21 = (ulong *****)(ulong)(bVar4 >> 1);
            }
            else {
              pppppuVar21 = ppppppuVar11[0x1f];
            }
            pppppuVar24 = _DAT_0f6e51d0;
            if ((DAT_0f6e51c8 & 1) == 0) {
              pppppuVar24 = (ulong *****)(ulong)(DAT_0f6e51c8 >> 1);
            }
            if (pppppuVar21 == pppppuVar24) {
              if ((bVar4 & 1) == 0) {
                pppppuVar21 = (ulong *****)((long)ppppppuVar11 + 0xf1);
              }
              else {
                pppppuVar21 = ppppppuVar11[0x20];
              }
              uVar41 = _DAT_0f6e51d8;
              if ((DAT_0f6e51c8 & 1) == 0) {
                uVar41 = 0xf6e51c9;
              }
              iVar27 = func_0x0eee3000(pppppuVar21,uVar41);
              if (iVar27 == 0) {
                ppppppuVar11[0x21] = (ulong *****)&DAT_0f6e51c0;
                bStack_378 = 0;
                bStack_377 = 0;
                sStack_376 = 0;
                uStack_374 = 0;
                uStack_372 = 0;
                iStack_370 = 0;
                uStack_36c = 0;
                uStack_36a = 0;
                cStack_369 = '\0';
                uStack_368._0_4_ = 0;
                uStack_368._4_4_ = 0;
                iVar27 = 1;
                if (1 < *(int *)(param_3 + 0x11c)) {
                  iVar27 = *(int *)(param_3 + 0x11c);
                }
                iVar16 = 3;
                if (iVar27 < 3) {
                  iVar16 = iVar27;
                }
                _DAT_0f6e51e0 = ppppppuVar3;
                func_0x0c485ef0(&pppppppuStack_1a8,&bStack_378,iVar16);
                uVar14 = uStack_372;
                uVar13 = uStack_374;
                iVar27 = CONCAT22(sStack_376,CONCAT11(bStack_377,bStack_378));
                puVar34 = (undefined8 *)CONCAT26(uStack_372,CONCAT24(uStack_374,iVar27));
                if (puVar34 != (undefined8 *)0x0) {
                  puVar28 = (undefined8 *)
                            CONCAT17(cStack_369,CONCAT16(uStack_36a,CONCAT24(uStack_36c,iStack_370))
                                    );
                  if (puVar34 != puVar28) {
                    do {
                      puVar28 = puVar28 + -0x10;
                      (**(code **)*puVar28)(puVar28);
                    } while (puVar28 != puVar34);
                    puVar34 = (undefined8 *)
                              CONCAT26(uStack_372,
                                       CONCAT24(uStack_374,
                                                CONCAT22(sStack_376,CONCAT11(bStack_377,bStack_378))
                                               ));
                  }
                  uStack_36c = uVar13;
                  uStack_36a = (undefined1)uVar14;
                  cStack_369 = (char)((ushort)uVar14 >> 8);
                  puVar28 = (undefined8 *)CONCAT44(uStack_368._4_4_,(undefined4)uStack_368);
                  iStack_370 = iVar27;
                  goto LAB_09cb9546;
                }
              }
            }
          }
        }
      }
LAB_09cb9959:
      if (*(char *)(param_3 + 0x138) == '\x01') {
        bStack_378 = 0;
        bStack_377 = 0;
        sStack_376 = 0;
        uStack_374 = 0;
        uStack_372 = 0;
        iStack_370 = 0;
        uStack_36c = 0;
        uStack_36a = 0;
        cStack_369 = '\0';
        uStack_368._0_4_ = 0;
        uStack_368._4_4_ = 0;
        cVar15 = func_0x04864260(param_3 + 0x128);
        if (cVar15 == '\0') {
          cVar15 = FUN_0c45e760(&pppppppuStack_1a8,param_3 + 0x128,&bStack_378);
          if (cVar15 != '\0') {
            if ((bStack_378 & 1) != 0) {
              func_0x0412a280(CONCAT44(uStack_368._4_4_,(undefined4)uStack_368),
                              CONCAT26(uStack_372,
                                       CONCAT24(uStack_374,
                                                CONCAT22(sStack_376,CONCAT11(bStack_377,bStack_378))
                                               )) & 0xfffffffffffffffe);
            }
            goto LAB_09cb99fa;
          }
        }
        else {
          func_0x0412f5e0(&bStack_378,&UNK_013e9622,0x1f);
        }
        uStack_f8 = (ulong *******)0x0;
        uStack_f0 = (ulong *******)0x0;
        pppppppuStack_e8 = (ulong *******)0x0;
        if (*param_5 != 0) {
          pbVar31 = (byte *)CONCAT44(uStack_368._4_4_,(undefined4)uStack_368);
          uVar29 = CONCAT17(cStack_369,CONCAT16(uStack_36a,CONCAT24(uStack_36c,iStack_370)));
          if ((bStack_378 & 1) == 0) {
            pbVar31 = &bStack_377;
            uVar29 = (ulong)(bStack_378 >> 1);
          }
          func_0x09e22e10(param_5,pbVar31,uVar29,&uStack_f8,1);
        }
        if ((bStack_378 & 1) != 0) {
          uVar29 = CONCAT26(uStack_372,
                            CONCAT24(uStack_374,CONCAT22(sStack_376,CONCAT11(bStack_377,bStack_378))
                                    )) & 0xfffffffffffffffe;
          pppppppuVar17 = (ulong *******)CONCAT44(uStack_368._4_4_,(undefined4)uStack_368);
LAB_09cbb0ff:
          func_0x0412a280(pppppppuVar17,uVar29);
        }
      }
      else {
LAB_09cb99fa:
        func_0x0c4510a0(&uStack_f8,&pppppppuStack_1a8);
        uStack_f8 = (ulong *******)&UNK_0f371da8;
        auStack_78[0] = 0;
        uStack_68 = 0;
        cVar15 = func_0x09e0fd10(*(undefined4 *)(param_3 + 0x118),1,0x40,param_5);
        if (cVar15 != '\0') {
          lVar19 = *in_FS_OFFSET;
          if (*(char *)(lVar19 + -0xb68) == '\0') {
            *(undefined1 *)(lVar19 + -0xb68) = 1;
            func_0x0417d010(&UNK_0ca00780,lVar19 + -0xb78,0xf53dab8);
          }
          lVar8 = *(long *)(lVar19 + -0xb70);
          ppppppuVar11 = *(ulong *******)(lVar19 + -0xb78);
          iVar27 = *(int *)(lVar19 + -0xb70);
          uVar43 = *(undefined4 *)(lVar19 + -0xb6c);
          uVar40 = *(undefined4 *)(lVar19 + -0xb78);
          uVar42 = *(undefined4 *)(lVar19 + -0xb74);
          if (lVar8 != 0) {
            LOCK();
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
            UNLOCK();
            LOCK();
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
            UNLOCK();
            uStack_238 = ppppppuVar11;
            iStack_230 = iVar27;
            uStack_22c = uVar43;
            func_0x0412c2d0(lVar8);
            uVar40 = (undefined4)uStack_238;
            uVar42 = uStack_238._4_4_;
            iVar27 = iStack_230;
            uVar43 = uStack_22c;
          }
          bStack_378 = (byte)uVar40;
          bStack_377 = (byte)((uint)uVar40 >> 8);
          sStack_376 = (short)((uint)uVar40 >> 0x10);
          uStack_374 = (undefined2)uVar42;
          uStack_372 = (undefined2)((uint)uVar42 >> 0x10);
          uStack_36c = (undefined2)uVar43;
          uStack_36a = (undefined1)((uint)uVar43 >> 0x10);
          cStack_369 = (char)((uint)uVar43 >> 0x18);
          iStack_370 = iVar27;
          func_0x0ca143d0(&plStack_220,&bStack_378,&DAT_0f6eaec0);
          if (lVar8 != 0) {
            func_0x0412c2d0(lVar8);
          }
          if (((plStack_220 == (long *)0x0) || (*plStack_220 == 0)) ||
             (*(int *)(param_3 + 0x114) != (int)*(short *)(*plStack_220 + 0x8a))) {
            func_0x0c4595b0(&uStack_2a0,&pppppppuStack_1a8);
            goto LAB_09cb9c4a;
          }
          if (DAT_0f5ea4a0 == '\0') goto LAB_09cbb49d;
LAB_09cb9b16:
          bStack_378 = 0x1a;
          bStack_377 = 0x69;
          sStack_376 = 0x6574;
          uStack_374 = 0x2e6d;
          uStack_372 = 0x6961;
          iStack_370 = 0x616e2e72;
          uStack_36c = 0x656d;
          uStack_36a = 0;
          uStack_58 = 0;
          plStack_50 = (long *)0x0;
          (**(code **)(_DAT_0f5ea138 + 0x90))(&uStack_2a0,&DAT_0f5ea138,&bStack_378,&uStack_58);
          plVar20 = plStack_50;
          if (plStack_50 != (long *)0x0) {
            LOCK();
            plVar2 = plStack_50 + 1;
            lVar19 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar19 == 0) {
              (**(code **)(*plStack_50 + 0x10))(plStack_50);
              func_0x0412c2d0(plVar20);
            }
          }
          if ((bStack_378 & 1) != 0) {
            func_0x0412a280(CONCAT44(uStack_368._4_4_,(undefined4)uStack_368),
                            CONCAT26(uStack_372,
                                     CONCAT24(uStack_374,
                                              CONCAT22(sStack_376,CONCAT11(bStack_377,bStack_378))))
                            & 0xfffffffffffffffe);
          }
LAB_09cb9c4a:
          uStack_2b8 = (ulong *******)0x0;
          uStack_2b0 = 0;
          uStack_2a8 = 0;
          if (*(int *)(param_3 + 0x20) == 1) {
            if ((long)*(int *)(param_3 + 0x104) == -1) {
              puVar32 = &UNK_013c28d2;
            }
            else {
              puVar32 = *(undefined **)(&UNK_0f37af30 + (long)*(int *)(param_3 + 0x104) * 8);
            }
            func_0x04130630(&uStack_2b8,puVar32);
            pppppppuVar17 = pppppppuStack_268;
            uStack_3a8 = (ulong *******)0x0;
            uStack_3a0 = (ulong *******)0x0;
            pppppppuStack_398 = (ulong *******)0x0;
            uVar29 = (ulong)((long)pppppppuStack_268[1] - (long)*pppppppuStack_268) >> 3 &
                     0xffffffff;
            if (uVar29 != 0) {
              uStack_3a0 = (ulong *******)FUN_0ee32660(uVar29 * 8);
              pppppppuStack_398 = uStack_3a0 + uVar29;
            }
            pppppppuVar22 = pppppppuStack_260;
            uStack_3a8 = uStack_3a0;
            if (pppppppuStack_260 == (ulong *******)0x0) {
              pppppppuStack_3b8 = (ulong *******)*pppppppuVar17;
              pppppppuStack_3c8 = pppppppuVar17;
              pppppppuStack_3c0 = (ulong *******)0x0;
            }
            else {
              LOCK();
              pppppppuStack_260[1] = (ulong ******)((long)pppppppuStack_260[1] + 1);
              UNLOCK();
              pppppppuStack_3b8 = (ulong *******)*pppppppuVar17;
              pppppppuStack_3c8 = pppppppuVar17;
              pppppppuStack_3c0 = pppppppuStack_260;
              LOCK();
              pppppppuStack_260[1] = (ulong ******)((long)pppppppuStack_260[1] + 1);
              UNLOCK();
              LOCK();
              pppppppuVar17 = pppppppuStack_260 + 1;
              ppppppuVar11 = *pppppppuVar17;
              *pppppppuVar17 = (ulong ******)((long)*pppppppuVar17 + -1);
              UNLOCK();
              if (ppppppuVar11 == (ulong ******)0x0) {
                (*(code *)(*pppppppuStack_260)[2])(pppppppuStack_260);
                func_0x0412c2d0(pppppppuVar22);
              }
            }
            pppppppuVar17 = pppppppuStack_260;
            if (pppppppuStack_260 == (ulong *******)0x0) {
              pppppppuStack_2c8 = (ulong *******)pppppppuStack_268[1];
              pppppppuStack_2d8 = pppppppuStack_268;
              pppppppuStack_2d0 = (ulong *******)0x0;
            }
            else {
              LOCK();
              pppppppuStack_260[1] = (ulong ******)((long)pppppppuStack_260[1] + 1);
              UNLOCK();
              pppppppuStack_2c8 = (ulong *******)pppppppuStack_268[1];
              pppppppuStack_2d8 = pppppppuStack_268;
              pppppppuStack_2d0 = pppppppuStack_260;
              LOCK();
              pppppppuStack_260[1] = (ulong ******)((long)pppppppuStack_260[1] + 1);
              UNLOCK();
              LOCK();
              pppppppuVar22 = pppppppuStack_260 + 1;
              ppppppuVar11 = *pppppppuVar22;
              *pppppppuVar22 = (ulong ******)((long)*pppppppuVar22 + -1);
              UNLOCK();
              if (ppppppuVar11 == (ulong ******)0x0) {
                (*(code *)(*pppppppuStack_260)[2])(pppppppuStack_260);
                func_0x0412c2d0(pppppppuVar17);
              }
            }
            if ((pppppppuStack_3c8 != pppppppuStack_2d8) || (pppppppuStack_3b8 != pppppppuStack_2c8)
               ) {
LAB_09cba1a0:
              pppppppuVar17 = (ulong *******)apppppppuStack_2f8;
              uStack_238 = *pppppppuStack_3b8;
              if ((pppppppuStack_1a0 != (ulong *******)0x0) &&
                 (ppppppuVar11 = *pppppppuStack_1a0, ppppppuVar11 != (ulong ******)0x0)) {
                if (ppppppuVar11[0x1d] == _DAT_0f6e52b0) {
                  if ((ppppppuVar11[0x21] == (ulong *****)&DAT_0f6e52b0) &&
                     (_DAT_0f6e52d0 == ppppppuVar11 + 0x1d)) {
LAB_09cba1fc:
                    cVar15 = func_0x09db9c20(uStack_238,&pppppppuStack_1a8,param_5);
                    if (cVar15 != '\0') goto LAB_09cba294;
                    iVar27 = 1;
                    pppppppuVar17 = pppppppuStack_2d0;
                    goto joined_r0x09cba8a8;
                  }
                  bVar4 = *(byte *)(ppppppuVar11 + 0x1e);
                  if ((bVar4 & 1) == 0) {
                    pppppuVar21 = (ulong *****)(ulong)(bVar4 >> 1);
                  }
                  else {
                    pppppuVar21 = ppppppuVar11[0x1f];
                  }
                  pppppuVar24 = _DAT_0f6e52c0;
                  if ((DAT_0f6e52b8 & 1) == 0) {
                    pppppuVar24 = (ulong *****)(ulong)(DAT_0f6e52b8 >> 1);
                  }
                  if (pppppuVar21 == pppppuVar24) {
                    if ((bVar4 & 1) == 0) {
                      pppppuVar21 = (ulong *****)((long)ppppppuVar11 + 0xf1);
                    }
                    else {
                      pppppuVar21 = ppppppuVar11[0x20];
                    }
                    uVar41 = 0xf6e52b9;
                    if ((DAT_0f6e52b8 & 1) != 0) {
                      uVar41 = _DAT_0f6e52c8;
                    }
                    iVar27 = func_0x0eee3000(pppppuVar21,uVar41);
                    if (iVar27 == 0) {
                      ppppppuVar11[0x21] = (ulong *****)&DAT_0f6e52b0;
                      _DAT_0f6e52d0 = ppppppuVar11 + 0x1d;
                      goto LAB_09cba1fc;
                    }
                  }
                }
                ppppppuVar11[0x21] = (ulong *****)0x0;
              }
LAB_09cba294:
              iVar27 = *(int *)(param_3 + 8);
              iVar16 = *(int *)(param_3 + 0x108);
              if (*(int *)(param_3 + 0x104) == 0xc && 0x11 < iVar27) {
                pppppuVar21 = uStack_238[2];
                uVar6 = *(uint *)(uStack_238 + 3);
                ppppuVar25 = pppppuVar21[7] +
                             ((int)((ulong)((long)pppppuVar21[8] - (long)pppppuVar21[7]) >> 3) - 1U
                             & 0x88f64e44);
                do {
                  pppuVar9 = *ppppuVar25;
                  if (pppuVar9 == (ulong ***)0xffffffffffffffff) {
                    iVar23 = 0;
                    goto LAB_09cba3bf;
                  }
                  ppppuVar25 = pppppuVar21[10] + (long)pppuVar9 * 4;
                } while (*(int *)(pppppuVar21[10] + (long)pppuVar9 * 4 + 1) != -0x7709b1bc);
                iVar23 = 0;
                if (ppppuVar25 != pppppuVar21[0xb]) {
                  iVar23 = 0;
                  pppuVar9 = ppppuVar25[2];
                  if (pppuVar9 != (ulong ***)0x0) {
                    uVar29 = (ulong)((uVar6 & 0x3ffff) >> 0xb);
                    if ((((uVar29 < (ulong)((long)pppuVar9[2] - (long)pppuVar9[1] >> 3)) &&
                         (puVar10 = pppuVar9[1][uVar29], puVar10 != (ulong *)0x0)) &&
                        (uVar7 = *(uint *)((long)puVar10 + (ulong)(uVar6 & 0x7ff) * 4),
                        (uVar6 & 0xfffc0000 ^ uVar7) < 0x3ffff)) &&
                       (lVar19 = *(long *)((long)pppuVar9[10] + (ulong)(uVar7 >> 4 & 0x3ff8)),
                       lVar19 != 0)) {
                      iVar23 = (int)((ulong)(*(long *)(lVar19 + 8 + (ulong)(uVar7 & 0x7f) * 0x18) -
                                            *(long *)(lVar19 + (ulong)(uVar7 & 0x7f) * 0x18)) >> 3)
                               * 0x3e0f83e1;
                    }
                  }
                }
LAB_09cba3bf:
                iVar16 = iVar16 + iVar23;
              }
              func_0x0c4510a0(&bStack_378,&uStack_f8);
              bStack_378 = 0xa8;
              bStack_377 = 0x1d;
              sStack_376 = 0xf37;
              uStack_374 = 0;
              uStack_372 = 0;
              apppppppuStack_2f8[0] =
                   (ulong *******)((ulong)apppppppuStack_2f8[0] & 0xffffffff00000000);
              uVar29 = (ulong)uStack_2e8 >> 0x20;
              uStack_2e8 = (ulong *******)((ulong)uStack_2e8 & 0xffffffff00000000);
              if ((ulong)uStack_68 == 0xffffffff) {
                uStack_2e8 = (ulong *******)CONCAT44((int)uVar29,0xffffffff);
              }
              else {
                pppppppuStack_210 = pppppppuVar17;
                (**(code **)(&UNK_0f38c5a0 + (ulong)uStack_68 * 8))
                          (&pppppppuStack_210,pppppppuVar17,auStack_78);
              }
              pppppppuStack_258 = (ulong *******)0x0;
              pppppppuStack_250 = (ulong *******)0x0;
              pppppppuStack_248 = (ulong *******)0x0;
              pppppppuStack_210 = (ulong *******)&pppppppuStack_258;
              uStack_208 = 0;
              pppppppuVar22 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x98)
              ;
              if (pppppppuVar22 == (ulong *******)0x0) {
                func_0x0eec74c0(0x98,0);
              }
              pppppppuVar26 = pppppppuVar22 + 0x13;
              pppppppuStack_258 = pppppppuVar22;
              pppppppuStack_250 = pppppppuVar22;
              pppppppuStack_248 = pppppppuVar26;
              func_0x0c4510a0(pppppppuVar22,&bStack_378);
              *pppppppuVar22 = (ulong ******)&UNK_0f371da8;
              *(undefined4 *)(pppppppuVar22 + 0x10) = 0;
              *(undefined4 *)(pppppppuVar22 + 0x12) = 0;
              if (((ulong)uStack_2e8 & 0xffffffff) == 0xffffffff) {
                *(undefined4 *)(pppppppuVar22 + 0x12) = 0xffffffff;
              }
              else {
                pppppppuStack_200 = pppppppuVar22 + 0x10;
                (**(code **)(&UNK_0f38c5a0 + ((ulong)uStack_2e8 & 0xffffffff) * 8))
                          (&pppppppuStack_200,pppppppuStack_200,pppppppuVar17);
                param_3 = uStack_278;
              }
              bStack_378 = 0xa8;
              bStack_377 = 0x1d;
              sStack_376 = 0xf37;
              uStack_374 = 0;
              uStack_372 = 0;
              pppppppuStack_250 = pppppppuVar26;
              if (((ulong)uStack_2e8 & 0xffffffff) != 0xffffffff) {
                (**(code **)(&UNK_0f1e08d8 + ((ulong)uStack_2e8 & 0xffffffff) * 8))
                          (&pppppppuStack_210,pppppppuVar17);
              }
              plVar18 = plStack_300;
              uStack_2e8 = (ulong *******)CONCAT44(uStack_2e8._4_4_,0xffffffff);
              bStack_378 = 0x18;
              bStack_377 = 0xe9;
              sStack_376 = 0xf36;
              uStack_374 = 0;
              uStack_372 = 0;
              plStack_300 = (long *)0x0;
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 8))();
              }
              if (lStack_328 != 0) {
                lStack_320 = lStack_328;
                func_0x0412a280(lStack_328,(long)apppppppuStack_318[0] - lStack_328);
              }
              if (lStack_348 != 0) {
                lStack_340 = lStack_348;
                func_0x0412a280(lStack_348,CONCAT71(uStack_337,bStack_338) - lStack_348);
              }
              plVar18 = (long *)CONCAT44(uStack_368._4_4_,(undefined4)uStack_368);
              uStack_368._0_4_ = 0;
              uStack_368._4_4_ = 0;
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 8))();
              }
              plVar18 = (long *)CONCAT17(cStack_369,
                                         CONCAT16(uStack_36a,CONCAT24(uStack_36c,iStack_370)));
              if (plVar18 != (long *)0x0) {
                LOCK();
                *(int *)((long)plVar18 + 0xc) = *(int *)((long)plVar18 + 0xc) + -1;
                UNLOCK();
                if (((*(int *)((long)plVar18 + 0xc) < 1) && (*plVar18 == 0)) &&
                   (lVar19 = CONCAT17(cStack_369,
                                      CONCAT16(uStack_36a,CONCAT24(uStack_36c,iStack_370))),
                   lVar19 != 0)) {
                  func_0x0412a280(lVar19,0x10);
                }
              }
              uStack_350 = *(undefined4 *)(param_3 + 0x104);
              bStack_378 = (byte)iVar16;
              bStack_377 = (byte)((uint)iVar16 >> 8);
              sStack_376 = (short)((uint)iVar16 >> 0x10);
              iStack_370 = (int)&pppppppuStack_258;
              uStack_36c = (undefined2)((ulong)&pppppppuStack_258 >> 0x20);
              uStack_36a = (undefined1)((ulong)&pppppppuStack_258 >> 0x30);
              cStack_369 = (char)((ulong)&pppppppuStack_258 >> 0x38);
              uStack_368._0_4_ = 0;
              uStack_368._4_4_ = 0;
              uStack_360 = CONCAT62(uStack_360._2_6_,(ushort)(*(int *)(param_3 + 0x120) == 1)) |
                           0x100;
              uStack_358 = uStack_238;
              uStack_34c = CONCAT31(uStack_34c._1_3_,0x11 < iVar27);
              uVar41 = func_0x0b634790(&bStack_378);
              if ((int)uVar41 == 5) {
                if (uStack_3a0 < pppppppuStack_398) {
                  *uStack_3a0 = uStack_238;
                  pppppppuVar26 = uStack_3a0 + 1;
                }
                else {
                  plVar18 = (long *)((long)uStack_3a0 - (long)uStack_3a8);
                  pppppppuVar22 = (ulong *******)(((long)plVar18 >> 3) + 1);
                  if ((ulong *******)0x1fffffffffffffff < pppppppuVar22) goto LAB_09cbb498;
                  pppppppuStack_40 = uStack_3a8;
                  uVar29 = (long)pppppppuStack_398 - (long)uStack_3a8;
                  pppppppuVar17 = (ulong *******)((long)uVar29 >> 2);
                  if ((ulong *******)((long)uVar29 >> 2) <= pppppppuVar22) {
                    pppppppuVar17 = pppppppuVar22;
                  }
                  if (0x7ffffffffffffff7 < uVar29) {
                    pppppppuVar17 = (ulong *******)0x1fffffffffffffff;
                  }
                  if ((ulong *******)0x1fffffffffffffff < pppppppuVar17) goto LAB_09cbb493;
                  lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))
                                     (&DAT_0f5463b0,(long)pppppppuVar17 * 8);
                  if (lVar19 == 0) {
                    func_0x0eec74c0((long)pppppppuVar17 * 8,0);
                  }
                  pppppppuVar22 = pppppppuStack_40;
                  pppppppuVar17 = (ulong *******)(lVar19 + (long)pppppppuVar17 * 8);
                  *(ulong *******)(lVar19 + (long)plVar18) = uStack_238;
                  pppppppuVar26 = (ulong *******)((long)plVar18 + lVar19 + 8);
                  pppppppuVar35 =
                       (ulong *******)((long)plVar18 + ((long)plVar18 >> 3) * -8 + lVar19);
                  func_0x0eee2f00(pppppppuVar35,pppppppuStack_40,plVar18);
                  param_3 = uStack_278;
                  uStack_3a8 = pppppppuVar35;
                  pppppppuStack_398 = pppppppuVar17;
                  if (pppppppuVar22 != (ulong *******)0x0) {
                    uStack_3a0 = pppppppuVar26;
                    func_0x0412a280(pppppppuVar22,uVar29);
                    param_3 = uStack_278;
                  }
                }
                iVar27 = 0;
                uStack_3a0 = pppppppuVar26;
                pppppppuVar22 = pppppppuStack_258;
                pppppppuVar17 = pppppppuStack_250;
              }
              else {
                iVar27 = 3;
                func_0x09cbbc90(param_3,param_5,uVar41,&uStack_2a0);
                pppppppuVar22 = pppppppuStack_258;
                pppppppuVar17 = pppppppuStack_250;
              }
              pppppppuStack_258 = pppppppuVar22;
              pppppppuStack_250 = pppppppuVar17;
              if (pppppppuVar22 != (ulong *******)0x0) {
                while (pppppppuVar22 != pppppppuVar17) {
                  pppppppuVar17 = pppppppuVar17 + -0x13;
                  (*(code *)**pppppppuVar17)(pppppppuVar17);
                }
                pppppppuStack_250 = pppppppuVar22;
                func_0x0412a280(pppppppuStack_258,(long)pppppppuStack_248 - (long)pppppppuStack_258)
                ;
              }
              pppppppuVar17 = pppppppuStack_2d0;
              if ((iVar27 != 3) && (iVar27 != 0)) goto joined_r0x09cba8a8;
              pppppppuStack_3b8 = (ulong *******)((long)pppppppuStack_3b8 + 8);
              if ((pppppppuStack_3c8 == pppppppuStack_2d8) &&
                 (pppppppuStack_3b8 == pppppppuStack_2c8)) {
                iVar27 = 2;
                goto joined_r0x09cba8a8;
              }
              goto LAB_09cba1a0;
            }
            iVar27 = 2;
            pppppppuVar17 = pppppppuStack_2d0;
joined_r0x09cba8a8:
            pppppppuStack_2d0 = pppppppuVar17;
            if (pppppppuVar17 != (ulong *******)0x0) {
              LOCK();
              pppppppuVar22 = pppppppuVar17 + 1;
              ppppppuVar11 = *pppppppuVar22;
              *pppppppuVar22 = (ulong ******)((long)*pppppppuVar22 + -1);
              UNLOCK();
              if (ppppppuVar11 == (ulong ******)0x0) {
                (*(code *)(*pppppppuVar17)[2])(pppppppuVar17);
                func_0x0412c2d0(pppppppuVar17);
              }
            }
            pppppppuVar17 = pppppppuStack_3c0;
            if (pppppppuStack_3c0 != (ulong *******)0x0) {
              LOCK();
              pppppppuVar22 = pppppppuStack_3c0 + 1;
              ppppppuVar11 = *pppppppuVar22;
              *pppppppuVar22 = (ulong ******)((long)*pppppppuVar22 + -1);
              UNLOCK();
              if (ppppppuVar11 == (ulong ******)0x0) {
                (*(code *)(*pppppppuStack_3c0)[2])(pppppppuStack_3c0);
                func_0x0412c2d0(pppppppuVar17);
              }
            }
            if (iVar27 == 2) {
              if (uStack_3a8 != uStack_3a0) {
                if (((ulong)uStack_2b8 & 1) == 0) {
                  uStack_368._0_4_ = (undefined4)uStack_2a8;
                  uStack_368._4_4_ = (int)((ulong)uStack_2a8 >> 0x20);
                  bStack_378 = (byte)uStack_2b8;
                  bStack_377 = (byte)((ulong)uStack_2b8 >> 8);
                  sStack_376 = (short)((ulong)uStack_2b8 >> 0x10);
                  uStack_374 = (undefined2)((ulong)uStack_2b8 >> 0x20);
                  uStack_372 = (undefined2)((ulong)uStack_2b8 >> 0x30);
                  iStack_370 = (int)uStack_2b0;
                  uStack_36c = (undefined2)((ulong)uStack_2b0 >> 0x20);
                  uStack_36a = (undefined1)((ulong)uStack_2b0 >> 0x30);
                  cStack_369 = (char)((ulong)uStack_2b0 >> 0x38);
                }
                else {
                  func_0x0412e5e0(&bStack_378,uStack_2a8,uStack_2b0);
                }
                uStack_360 = uStack_360 & 0xffffffff00000000;
                func_0x09e20be0(&uStack_358,*(undefined4 *)(param_3 + 0x108));
                func_0x09e20de0(&bStack_338,&uStack_3a8);
                func_0x09e20be0(apppppppuStack_318,*(undefined4 *)(param_3 + 0x118));
                if (((ulong)uStack_2a0 & 1) == 0) {
                  uStack_2e8 = pppppppuStack_290;
                  apppppppuStack_2f8[0] = uStack_2a0;
                }
                else {
                  func_0x0412e5e0(apppppppuStack_2f8,pppppppuStack_290,
                                  CONCAT44(uStack_294,uStack_298));
                }
                uStack_2e0 = 0;
                pppppppuStack_3c8 = (ulong *******)0x0;
                pppppppuStack_3c0 = (ulong *******)0x0;
                pppppppuStack_3b8 = (ulong *******)0x0;
                func_0x09ce36f0(&pppppppuStack_3c8,&bStack_378,&pppppppuStack_2d8,5);
                func_0x09e232e0(param_5,&UNK_012e1d50,0x23,&pppppppuStack_3c8);
                func_0x048f03a0(&pppppppuStack_3c8);
                if (((ulong)apppppppuStack_2f8[0] & 1) != 0) {
                  func_0x0412a280(uStack_2e8,(ulong)apppppppuStack_2f8[0] & 0xfffffffffffffffe);
                }
                if (((ulong)apppppppuStack_318[0] & 1) != 0) {
                  func_0x0412a280(pppppppuStack_308,
                                  (ulong)apppppppuStack_318[0] & 0xfffffffffffffffe);
                }
                if ((bStack_338 & 1) != 0) {
                  func_0x0412a280(lStack_328,CONCAT71(uStack_337,bStack_338) & 0xfffffffffffffffe);
                }
                if (((ulong)uStack_358 & 1) != 0) {
                  func_0x0412a280(lStack_348,(ulong)uStack_358 & 0xfffffffffffffffe);
                }
                if ((bStack_378 & 1) != 0) {
                  func_0x0412a280(CONCAT44(uStack_368._4_4_,(undefined4)uStack_368),
                                  CONCAT26(uStack_372,
                                           CONCAT24(uStack_374,
                                                    CONCAT22(sStack_376,
                                                             CONCAT11(bStack_377,bStack_378)))) &
                                  0xfffffffffffffffe);
                }
                iVar27 = 0;
                goto LAB_09cbaaac;
              }
              bVar36 = true;
            }
            else {
LAB_09cbaaac:
              bVar36 = iVar27 == 0;
            }
            if (uStack_3a8 != (ulong *******)0x0) {
              uStack_3a0 = uStack_3a8;
              func_0x0412a280(uStack_3a8,(long)pppppppuStack_398 - (long)uStack_3a8);
            }
            if (!bVar36) goto joined_r0x09cbaf7b;
LAB_09cbaad0:
            cVar15 = *(char *)(param_3 + 0x138);
            pppppppuVar17 = pppppppuStack_e8;
joined_r0x09cbaad9:
            pppppppuStack_e8 = pppppppuVar17;
            if (cVar15 == '\x01') {
              if (pppppppuVar17 == (ulong *******)0x0) {
LAB_09cbab81:
                cVar15 = func_0x0c450a10(&uStack_f8);
                if (cVar15 == '\0') goto LAB_09cbabb8;
              }
              else {
                bStack_378 = 0;
                bStack_377 = 0x48;
                sStack_376 = 0x1ce;
                uStack_374 = 0;
                uStack_372 = 0;
                iStack_370 = 0x13;
                uStack_36c = 0;
                uStack_36a = 0;
                cStack_369 = '\0';
                pppppppuVar22 = (ulong *******)func_0x0d6c97a0(pppppppuVar17 + 1,&bStack_378);
                if (pppppppuVar22 == pppppppuVar17 + 2) goto LAB_09cbab81;
                if ((ulong)*(uint *)(pppppppuVar22 + 0xc) == 0xffffffff) {
                  uVar41 = func_0x04931450();
                  func_0x041084d6(&DAT_0f5ea4a0);
                  func_0x04963c80(&plStack_220);
                  func_0x049c2320(&uStack_f8);
                  if (cStack_128 == '\x01') {
                    func_0x0c44e610(&pppppppuStack_1a8);
                  }
                  func_0x09c70160(&pppppppuStack_218);
                  func_0x05ab3aa0(&pppppppuStack_268);
                  func_0x0eee2d70(uVar41);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                uStack_3a8 = (ulong *******)&pppppppuStack_3c8;
                lVar19 = (**(code **)(&UNK_0f47e980 + (ulong)*(uint *)(pppppppuVar22 + 0xc) * 8))
                                   (&uStack_3a8,pppppppuVar22 + 7);
                if (lVar19 == 0) goto LAB_09cbab81;
                bStack_378 = 0;
                bStack_377 = 0x48;
                sStack_376 = 0x1ce;
                uStack_374 = 0;
                uStack_372 = 0;
                iStack_370 = 0x13;
                uStack_36c = 0;
                uStack_36a = 0;
                cStack_369 = '\0';
                pppppppuVar22 = (ulong *******)func_0x0d6c97a0(pppppppuVar17 + 1,&bStack_378);
                if (((pppppppuVar22 == pppppppuVar17 + 2) || (*(int *)(pppppppuVar22 + 0xc) != 1))
                   || (*(char *)(pppppppuVar22 + 8) == '\0')) goto LAB_09cbab81;
              }
              plVar18 = (long *)(**(code **)(*plStack_38 + 0x38))();
              plVar18 = (long *)(**(code **)(*plVar18 + 0x270))(plVar18);
              (**(code **)(*plVar18 + 0x478))(plVar18);
            }
LAB_09cbabb8:
            if (((ulong)uStack_2b8 & 1) == 0) {
              uStack_1c8 = uStack_2a8;
              uStack_1d8 = (uint)uStack_2b8;
              uStack_1d4 = uStack_2b8._4_4_;
              uStack_1d0 = (int)uStack_2b0;
              uStack_1cc = uStack_2b0._4_4_;
            }
            else {
              func_0x0412e5e0(&uStack_1d8,uStack_2a8,uStack_2b0);
            }
            func_0x048f0410(param_5,&UNK_01330749,&uStack_1d8);
            if ((uStack_1d8 & 1) != 0) {
              func_0x0412a280(uStack_1c8,CONCAT44(uStack_1d4,uStack_1d8) & 0xfffffffffffffffe);
            }
            func_0x048f35b0(param_5,&UNK_0123ef74,*(undefined4 *)(param_3 + 0x108));
            func_0x048f35b0(param_5,&UNK_011d1a34,*(undefined4 *)(param_3 + 0x118));
            psVar33 = (short *)(lStack_190 + 0x128);
            if (asStack_188[0] == 0x7fff) {
              psVar33 = asStack_188;
            }
            if (lStack_190 == 0) {
              psVar33 = asStack_188;
            }
            func_0x048f35b0(param_5,&UNK_01248199,(int)*psVar33);
            if (((ulong)uStack_2a0 & 1) == 0) {
              pppppppuStack_1e8 = pppppppuStack_290;
              uStack_1f8 = (uint)uStack_2a0;
              uStack_1f4 = uStack_2a0._4_4_;
              uStack_1f0 = uStack_298;
              uStack_1ec = uStack_294;
            }
            else {
              func_0x0412e5e0(&uStack_1f8,pppppppuStack_290,CONCAT44(uStack_294,uStack_298));
            }
            func_0x048f0410(param_5,&UNK_014cceb8,&uStack_1f8);
            if ((uStack_1f8 & 1) != 0) {
              pppppppuVar17 = (ulong *******)CONCAT44(uStack_1f4,uStack_1f8);
              pppppppuVar22 = pppppppuStack_1e8;
              goto LAB_09cbad30;
            }
          }
          else {
            if (*(int *)(param_3 + 0x20) != 0) goto LAB_09cbaad0;
            if ((long)*(int *)(param_3 + 0x100) == -1) {
              puVar32 = &UNK_013c28d2;
            }
            else {
              puVar32 = *(undefined **)(&UNK_0f3c5280 + (long)*(int *)(param_3 + 0x100) * 8);
            }
            func_0x04130630(&uStack_2b8,puVar32);
            if (*(int *)(param_3 + 0x100) == 0) {
              plVar20 = (long *)(*(code *)(*pppppppuVar17)[0x1b])(pppppppuVar17);
              if (plVar20 == (long *)0x0) {
                if (pppppppuVar17[5] == (ulong ******)0x0) goto LAB_09cb9cd3;
                pppppuVar21 = pppppppuVar17[5][1];
              }
              else {
                pppppuVar21 = (ulong *****)(**(code **)(*plVar20 + 0x10))(plVar20);
              }
              if (((pppppuVar21 != (ulong *****)0x0) &&
                  (*(char *)((long)pppppppuVar17 + 0x14) != '\x17')) &&
                 ((*(char *)((long)pppppppuVar17 + 0x14) != '\x10' ||
                  (*(int *)(uStack_278 + 8) < 0x1b)))) {
                func_0x0c451750(&bStack_378,&uStack_f8);
                func_0x09cbbb50(&pppppppuStack_3c8,&bStack_378);
                bStack_378 = 0xa8;
                bStack_377 = 0x1d;
                sStack_376 = 0xf37;
                uStack_374 = 0;
                uStack_372 = 0;
                if (((ulong)uStack_2e8 & 0xffffffff) != 0xffffffff) {
                  (**(code **)(&UNK_0f1e08d8 + ((ulong)uStack_2e8 & 0xffffffff) * 8))
                            (&uStack_3a8,apppppppuStack_2f8);
                }
                uStack_2e8 = (ulong *******)CONCAT44(uStack_2e8._4_4_,0xffffffff);
                func_0x0c44e610(&bStack_378);
                uStack_3a8 = (ulong *******)
                             CONCAT44(uStack_3a8._4_4_,*(undefined4 *)(uStack_278 + 0x108));
                pppppppuStack_398 = (ulong *******)0x0;
                uStack_390 = CONCAT22(uStack_390._2_2_,(ushort)(*(int *)(uStack_278 + 0x120) == 1))
                             | 0x100;
                uStack_3a0 = (ulong *******)&pppppppuStack_3c8;
                pppppuStack_388 = pppppuVar21;
                uVar41 = func_0x0b634640(&uStack_3a8);
                if ((int)uVar41 != 5) {
                  func_0x09cbbc90(uStack_278,param_5,uVar41,&uStack_2a0);
                  func_0x049c8240(&pppppppuStack_3c8);
                  goto joined_r0x09cbaf7b;
                }
                if (pppppppuVar17[5] != (ulong ******)0x0) {
                  (**(code **)(*plVar18 + 0x208))(plVar18,pppppppuVar17);
                }
                if (((ulong)uStack_2b8 & 1) == 0) {
                  uStack_368._0_4_ = (undefined4)uStack_2a8;
                  uStack_368._4_4_ = (int)((ulong)uStack_2a8 >> 0x20);
                  bStack_378 = (byte)uStack_2b8;
                  bStack_377 = (byte)((ulong)uStack_2b8 >> 8);
                  sStack_376 = (short)((ulong)uStack_2b8 >> 0x10);
                  uStack_374 = (undefined2)((ulong)uStack_2b8 >> 0x20);
                  uStack_372 = (undefined2)((ulong)uStack_2b8 >> 0x30);
                  iStack_370 = (int)uStack_2b0;
                  uStack_36c = (undefined2)((ulong)uStack_2b0 >> 0x20);
                  uStack_36a = (undefined1)((ulong)uStack_2b0 >> 0x30);
                  cStack_369 = (char)((ulong)uStack_2b0 >> 0x38);
                }
                else {
                  func_0x0412e5e0(&bStack_378,uStack_2a8,uStack_2b0);
                }
                param_3 = uStack_278;
                uStack_360 = uStack_360 & 0xffffffff00000000;
                func_0x09e20be0(&uStack_358,*(undefined4 *)(uStack_278 + 0x108));
                func_0x09e20be0(&bStack_338,*(undefined4 *)(param_3 + 0x118));
                if (((ulong)uStack_2a0 & 1) == 0) {
                  pppppppuStack_308 = pppppppuStack_290;
                  apppppppuStack_318[0] = uStack_2a0;
                }
                else {
                  func_0x0412e5e0(apppppppuStack_318,pppppppuStack_290,
                                  CONCAT44(uStack_294,uStack_298));
                }
                plStack_300 = (long *)((ulong)plStack_300 & 0xffffffff00000000);
                pppppppuStack_2d8 = (ulong *******)0x0;
                pppppppuStack_2d0 = (ulong *******)0x0;
                pppppppuStack_2c8 = (ulong *******)0x0;
                func_0x09ce36f0(&pppppppuStack_2d8,&bStack_378,apppppppuStack_2f8,4);
                func_0x09e232e0(param_5,&UNK_012ada88,0x1c,&pppppppuStack_2d8);
                func_0x048f03a0(&pppppppuStack_2d8);
                if (((ulong)apppppppuStack_318[0] & 1) != 0) {
                  func_0x0412a280(pppppppuStack_308,
                                  (ulong)apppppppuStack_318[0] & 0xfffffffffffffffe);
                }
                if ((bStack_338 & 1) != 0) {
                  func_0x0412a280(lStack_328,CONCAT71(uStack_337,bStack_338) & 0xfffffffffffffffe);
                }
                if (((ulong)uStack_358 & 1) != 0) {
                  func_0x0412a280(lStack_348,(ulong)uStack_358 & 0xfffffffffffffffe);
                }
                if ((bStack_378 & 1) != 0) {
                  func_0x0412a280(CONCAT44(uStack_368._4_4_,(undefined4)uStack_368),
                                  CONCAT26(uStack_372,
                                           CONCAT24(uStack_374,
                                                    CONCAT22(sStack_376,
                                                             CONCAT11(bStack_377,bStack_378)))) &
                                  0xfffffffffffffffe);
                }
                func_0x049c8240(&pppppppuStack_3c8);
                cVar15 = *(char *)(param_3 + 0x138);
                pppppppuVar17 = pppppppuStack_e8;
                goto joined_r0x09cbaad9;
              }
            }
LAB_09cb9cd3:
            bStack_378 = (byte)&uStack_288;
            bStack_377 = (byte)((ulong)&uStack_288 >> 8);
            sStack_376 = (short)((ulong)&uStack_288 >> 0x10);
            uStack_374 = (undefined2)((ulong)&uStack_288 >> 0x20);
            uStack_372 = (undefined2)((ulong)&uStack_288 >> 0x30);
            iStack_370 = 0xd89e8b0;
            uStack_36c = 0;
            uStack_36a = 0;
            cStack_369 = 0;
            func_0x0470d9a0(&pppppppuStack_2d8,&UNK_012063a8,2,0xf,&bStack_378);
            if (((ulong)pppppppuStack_2d8 & 1) == 0) {
              pppppppuStack_398 = pppppppuStack_2c8;
              uStack_3a8 = pppppppuStack_2d8;
              uStack_3a0 = pppppppuStack_2d0;
            }
            else {
              func_0x0412e5e0(&uStack_3a8,pppppppuStack_2c8,pppppppuStack_2d0);
            }
            uStack_390 = 0;
            pppppppuStack_3c8 = (ulong *******)0x0;
            pppppppuStack_3c0 = (ulong *******)0x0;
            pppppppuStack_3b8 = (ulong *******)0x0;
            pppppppuStack_250 = (ulong *******)((ulong)pppppppuStack_250 & 0xffffffffffffff00);
            pppppppuStack_258 = (ulong *******)&pppppppuStack_3c8;
            pppppppuVar17 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
            if (pppppppuVar17 == (ulong *******)0x0) {
              func_0x0eec74c0(0x20,0);
            }
            pppppppuStack_3b8 = pppppppuVar17 + 4;
            bStack_378 = (byte)&pppppppuStack_3c8;
            bStack_377 = (byte)((ulong)&pppppppuStack_3c8 >> 8);
            sStack_376 = (short)((ulong)&pppppppuStack_3c8 >> 0x10);
            uStack_374 = (undefined2)((ulong)&pppppppuStack_3c8 >> 0x20);
            uStack_372 = (undefined2)((ulong)&pppppppuStack_3c8 >> 0x30);
            iStack_370 = (int)&pppppppuStack_200;
            uStack_36c = (undefined2)((ulong)&pppppppuStack_200 >> 0x20);
            uStack_36a = (undefined1)((ulong)&pppppppuStack_200 >> 0x30);
            cStack_369 = (char)((ulong)&pppppppuStack_200 >> 0x38);
            uStack_368 = (ulong *******)&pppppppuStack_210;
            uStack_360 = uStack_360 & 0xffffffffffffff00;
            pppppppuStack_3c8 = pppppppuVar17;
            pppppppuStack_210 = pppppppuVar17;
            pppppppuStack_200 = pppppppuVar17;
            if (((ulong)uStack_3a8 & 1) == 0) {
              pppppppuVar17[2] = (ulong ******)pppppppuStack_398;
              *(undefined4 *)pppppppuVar17 = (undefined4)uStack_3a8;
              *(undefined4 *)((long)pppppppuVar17 + 4) = uStack_3a8._4_4_;
              *(undefined4 *)(pppppppuVar17 + 1) = (undefined4)uStack_3a0;
              *(undefined4 *)((long)pppppppuVar17 + 0xc) = uStack_3a0._4_4_;
            }
            else {
              pppppppuStack_3c0 = pppppppuVar17;
              func_0x0412e5e0(pppppppuVar17,pppppppuStack_398,uStack_3a0);
            }
            *(uint *)(pppppppuVar17 + 3) = uStack_390;
            pppppppuStack_3c0 = pppppppuStack_210 + 4;
            if (*param_5 != 0) {
              func_0x09e22e10(param_5,&UNK_01469691,0x20,&pppppppuStack_3c8,1);
            }
            pppppppuVar22 = pppppppuStack_3c8;
            pppppppuVar17 = pppppppuStack_3c0;
            if (pppppppuStack_3c8 != (ulong *******)0x0) {
              for (; pppppppuVar22 != pppppppuVar17; pppppppuVar17 = pppppppuVar17 + -4) {
                if (((ulong)pppppppuVar17[-4] & 1) != 0) {
                  func_0x0412a280(pppppppuVar17[-2],(ulong)pppppppuVar17[-4] & 0xfffffffffffffffe);
                }
              }
              pppppppuStack_3c0 = pppppppuVar22;
              func_0x0412a280(pppppppuStack_3c8,(long)pppppppuStack_3b8 - (long)pppppppuStack_3c8);
            }
            if (((ulong)uStack_3a8 & 1) != 0) {
              func_0x0412a280(pppppppuStack_398,(ulong)uStack_3a8 & 0xfffffffffffffffe);
            }
            pppppppuVar17 = pppppppuStack_2d8;
            pppppppuVar22 = pppppppuStack_2c8;
            if (((ulong)pppppppuStack_2d8 & 1) != 0) {
LAB_09cbad30:
              func_0x0412a280(pppppppuVar22,(ulong)pppppppuVar17 & 0xfffffffffffffffe);
            }
          }
joined_r0x09cbaf7b:
          if (((ulong)uStack_2b8 & 1) != 0) {
            func_0x0412a280(uStack_2a8,(ulong)uStack_2b8 & 0xfffffffffffffffe);
          }
          if (((ulong)uStack_2a0 & 1) != 0) {
            func_0x0412a280(pppppppuStack_290,(ulong)uStack_2a0 & 0xfffffffffffffffe);
          }
          if (plStack_220 != (long *)0x0) {
            LOCK();
            *(int *)((long)plStack_220 + 0xc) = *(int *)((long)plStack_220 + 0xc) + -1;
            UNLOCK();
            if (((*(int *)((long)plStack_220 + 0xc) < 1) && (*plStack_220 == 0)) &&
               (plStack_220 != (long *)0x0)) {
              func_0x0412a280(plStack_220,0x10);
            }
          }
        }
        uStack_f8 = (ulong *******)&UNK_0f371da8;
        if ((ulong)uStack_68 != 0xffffffff) {
          (**(code **)(&UNK_0f1e08d8 + (ulong)uStack_68 * 8))(&bStack_378,auStack_78);
        }
        plVar18 = plStack_80;
        uStack_68 = 0xffffffff;
        uStack_f8 = (ulong *******)&UNK_0f36e918;
        plStack_80 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 8))();
        }
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          func_0x0412a280(lStack_a8,lStack_98 - lStack_a8);
        }
        if (lStack_c8 != 0) {
          lStack_c0 = lStack_c8;
          func_0x0412a280(lStack_c8,lStack_b8 - lStack_c8);
        }
        pppppppuVar17 = pppppppuStack_e8;
        pppppppuStack_e8 = (ulong *******)0x0;
        if (pppppppuVar17 != (ulong *******)0x0) {
          (*(code *)(*pppppppuVar17)[1])();
        }
        if (uStack_f0 != (ulong *******)0x0) {
          LOCK();
          *(int *)((long)uStack_f0 + 0xc) = *(int *)((long)uStack_f0 + 0xc) + -1;
          UNLOCK();
          if (((*(int *)((long)uStack_f0 + 0xc) < 1) && (*uStack_f0 == (ulong ******)0x0)) &&
             (uStack_f0 != (ulong *******)0x0)) {
            uVar29 = 0x10;
            pppppppuVar17 = uStack_f0;
            goto LAB_09cbb0ff;
          }
        }
      }
    }
    plVar18 = plStack_130;
    if (cStack_128 != '\x01') goto LAB_09cbb1de;
    pppppppuStack_1a8 = (ulong *******)&UNK_0f36e918;
    plStack_130 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 8))();
    }
    if (lStack_158 != 0) {
      lStack_150 = lStack_158;
      func_0x0412a280(lStack_158,lStack_148 - lStack_158);
    }
    if (lStack_178 != 0) {
      lStack_170 = lStack_178;
      func_0x0412a280(lStack_178,lStack_168 - lStack_178);
    }
    pppppppuVar17 = pppppppuStack_198;
    pppppppuStack_198 = (ulong *******)0x0;
    if (pppppppuVar17 != (ulong *******)0x0) {
      (*(code *)(*pppppppuVar17)[1])();
    }
    if (pppppppuStack_1a0 == (ulong *******)0x0) goto LAB_09cbb1de;
    LOCK();
    *(int *)((long)pppppppuStack_1a0 + 0xc) = *(int *)((long)pppppppuStack_1a0 + 0xc) + -1;
    UNLOCK();
    if (((0 < *(int *)((long)pppppppuStack_1a0 + 0xc)) || (*pppppppuStack_1a0 != (ulong ******)0x0))
       || (pppppppuStack_1a0 == (ulong *******)0x0)) goto LAB_09cbb1de;
    uVar29 = 0x10;
    pppppppuVar17 = pppppppuStack_1a0;
  }
  else {
    if (*(int *)(param_3 + 0x20) != 0) {
      plVar18 = (long *)0x0;
      pppppppuVar17 = (ulong *******)0x0;
      goto LAB_09cb93a1;
    }
    bStack_378 = 0;
    bStack_377 = 0;
    sStack_376 = 0;
    uStack_374 = 0;
    uStack_372 = 0;
    iStack_370 = 0;
    uVar41 = func_0x09e12210(param_3 + 0xf0,*(undefined4 *)(param_3 + 8),param_4,&bStack_378);
    fStack_270 = (float)((ulong)uVar41 >> 0x20);
    uStack_278 = CONCAT44(fStack_270,fStack_270 + _DAT_01198ca0);
    uStack_238 = (ulong ******)CONCAT44(uStack_238._4_4_,param_2 + _DAT_01198ca0);
    fStack_26c = fStack_270;
    fVar37 = (float)func_0x0eee4390((float)uVar41 + _DAT_01198ca0);
    fVar38 = (float)func_0x0eee4390((undefined4)uStack_278);
    fVar39 = (float)func_0x0eee4390((undefined4)uStack_238);
    iStack_280 = (int)fVar39;
    uStack_288 = CONCAT44((int)fVar38,(int)fVar37);
    iVar27 = *(int *)(param_3 + 8);
    pppppppuVar17 = (ulong *******)(**(code **)(*param_4 + 0x40))(param_4);
    if (pppppppuVar17 == (ulong *******)0x0) {
      pppppppuStack_218 = (ulong *******)0x0;
    }
    else {
      iVar16 = (int)uStack_288 >> 4;
      iStack_370 = iStack_280 >> 4;
      bStack_378 = (byte)iVar16;
      bStack_377 = (byte)((uint)iVar16 >> 8);
      sStack_376 = (short)((ulong)uStack_288 >> 0x10) >> 4;
      uStack_374 = 0;
      uStack_372 = 0;
      uStack_36c = (undefined2)iVar16;
      uStack_36a = (undefined1)((uint)iVar16 >> 0x10);
      cStack_369 = (char)((ulong)uStack_288 >> 0x18) >> 4;
      uStack_368._0_4_ = 0;
      uStack_360 = 0x100000001;
      uStack_358 = (ulong ******)CONCAT44(_UNK_014e1de4,_DAT_014e1de0);
      uStack_350 = _UNK_014e1de8;
      uStack_34c = _UNK_014e1dec;
      uStack_368._4_4_ = iStack_370;
      uStack_f8 = pppppppuVar17;
      func_0x09e174f0(&pppppppuStack_1a8,&uStack_f8,&bStack_378,iVar27 < 0x13,0,1);
      pppppppuStack_218 = pppppppuStack_1a8;
      if (pppppppuStack_1a8 != (ulong *******)0x0) {
        plVar18 = (long *)(*(code *)(*(*pppppppuStack_1a8)[5])[0xd])();
        lVar19 = (**(code **)(*plVar18 + 0x138))(plVar18,&uStack_288);
        if (lVar19 != 0) {
          bStack_378 = (byte)uStack_288 & 0xf;
          sStack_376 = uStack_288._4_2_ - *(short *)((long)plVar18 + 0x42);
          bStack_377 = (byte)iStack_280 & 0xf;
          lVar19 = func_0x0cb18130(lVar19 + 0x13d0,&bStack_378);
          if ((lVar19 != 0) &&
             (pppppppuVar17 = *(ulong ********)(lVar19 + 0x18), pppppppuVar17 != (ulong *******)0x0)
             ) {
            plVar20 = (long *)(*(code *)(*pppppppuVar17)[0x1b])(pppppppuVar17);
            if (plVar20 == (long *)0x0) {
              if (pppppppuVar17[5] == (ulong ******)0x0) goto LAB_09cb95c7;
              pppppuVar21 = pppppppuVar17[5][1];
            }
            else {
              pppppuVar21 = (ulong *****)(**(code **)(*plVar20 + 0x10))(plVar20);
            }
            if (pppppuVar21 != (ulong *****)0x0) goto LAB_09cb93a1;
          }
        }
      }
    }
LAB_09cb95c7:
    bStack_378 = (byte)&uStack_288;
    bStack_377 = (byte)((ulong)&uStack_288 >> 8);
    sStack_376 = (short)((ulong)&uStack_288 >> 0x10);
    uStack_374 = (undefined2)((ulong)&uStack_288 >> 0x20);
    uStack_372 = (undefined2)((ulong)&uStack_288 >> 0x30);
    iStack_370 = 0xd89e8b0;
    uStack_36c = 0;
    uStack_36a = 0;
    cStack_369 = 0;
    func_0x0470d9a0(&uStack_3a8,&UNK_012063a8,2,0xf,&bStack_378);
    if (((ulong)uStack_3a8 & 1) == 0) {
      pppppppuStack_e8 = pppppppuStack_398;
      uStack_f8 = uStack_3a8;
      uStack_f0 = uStack_3a0;
    }
    else {
      func_0x0412e5e0(&uStack_f8,pppppppuStack_398,uStack_3a0);
    }
    uStack_e0 = 0;
    pppppppuStack_1a8 = (ulong *******)0x0;
    pppppppuStack_1a0 = (ulong *******)0x0;
    pppppppuStack_198 = (ulong *******)0x0;
    uStack_298 = uStack_298 & 0xffffff00;
    uStack_2a0 = (ulong *******)&pppppppuStack_1a8;
    pppppppuVar17 = (ulong *******)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pppppppuVar17 == (ulong *******)0x0) {
      func_0x0eec74c0(0x20,0);
    }
    pppppppuStack_198 = pppppppuVar17 + 4;
    bStack_378 = (byte)&pppppppuStack_1a8;
    bStack_377 = (byte)((ulong)&pppppppuStack_1a8 >> 8);
    sStack_376 = (short)((ulong)&pppppppuStack_1a8 >> 0x10);
    uStack_374 = (undefined2)((ulong)&pppppppuStack_1a8 >> 0x20);
    uStack_372 = (undefined2)((ulong)&pppppppuStack_1a8 >> 0x30);
    iStack_370 = (int)&pppppppuStack_3c8;
    uStack_36c = (undefined2)((ulong)&pppppppuStack_3c8 >> 0x20);
    uStack_36a = (undefined1)((ulong)&pppppppuStack_3c8 >> 0x30);
    cStack_369 = (char)((ulong)&pppppppuStack_3c8 >> 0x38);
    uStack_368 = (ulong *******)&uStack_2b8;
    uStack_360 = uStack_360 & 0xffffffffffffff00;
    pppppppuStack_3c8 = pppppppuVar17;
    uStack_2b8 = pppppppuVar17;
    pppppppuStack_1a8 = pppppppuVar17;
    if (((ulong)uStack_f8 & 1) == 0) {
      pppppppuVar17[2] = (ulong ******)pppppppuStack_e8;
      *(undefined4 *)pppppppuVar17 = (undefined4)uStack_f8;
      *(undefined4 *)((long)pppppppuVar17 + 4) = uStack_f8._4_4_;
      *(undefined4 *)(pppppppuVar17 + 1) = (undefined4)uStack_f0;
      *(undefined4 *)((long)pppppppuVar17 + 0xc) = uStack_f0._4_4_;
    }
    else {
      pppppppuStack_1a0 = pppppppuVar17;
      func_0x0412e5e0(pppppppuVar17,pppppppuStack_e8,uStack_f0);
    }
    *(undefined4 *)(pppppppuVar17 + 3) = uStack_e0;
    pppppppuStack_1a0 = uStack_2b8 + 4;
    if (*param_5 != 0) {
      func_0x09e22e10(param_5,&UNK_01469691,0x20,&pppppppuStack_1a8,1);
    }
    pppppppuVar22 = pppppppuStack_1a8;
    pppppppuVar17 = pppppppuStack_1a0;
    if (pppppppuStack_1a8 != (ulong *******)0x0) {
      for (; pppppppuVar22 != pppppppuVar17; pppppppuVar17 = pppppppuVar17 + -4) {
        if (((ulong)pppppppuVar17[-4] & 1) != 0) {
          func_0x0412a280(pppppppuVar17[-2],(ulong)pppppppuVar17[-4] & 0xfffffffffffffffe);
        }
      }
      pppppppuStack_1a0 = pppppppuVar22;
      func_0x0412a280(pppppppuStack_1a8,(long)pppppppuStack_198 - (long)pppppppuStack_1a8);
    }
    if (((ulong)uStack_f8 & 1) != 0) {
      func_0x0412a280(pppppppuStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_3a8 & 1) == 0) goto LAB_09cbb1de;
    uVar29 = (ulong)uStack_3a8 & 0xfffffffffffffffe;
    pppppppuVar17 = pppppppuStack_398;
  }
  func_0x0412a280(pppppppuVar17,uVar29);
LAB_09cbb1de:
  pppppppuVar17 = pppppppuStack_218;
  if (pppppppuStack_218 != (ulong *******)0x0) {
    ppppppuVar11 = *pppppppuStack_218;
    *pppppppuStack_218 = (ulong ******)0x0;
    if (ppppppuVar11 != (ulong ******)0x0) {
      (*(code *)(*ppppppuVar11)[1])();
    }
    func_0x0412a280(pppppppuVar17,8);
  }
  pppppppuVar17 = pppppppuStack_260;
  if (pppppppuStack_260 != (ulong *******)0x0) {
    LOCK();
    pppppppuVar22 = pppppppuStack_260 + 1;
    ppppppuVar11 = *pppppppuVar22;
    *pppppppuVar22 = (ulong ******)((long)*pppppppuVar22 + -1);
    UNLOCK();
    if (ppppppuVar11 == (ulong ******)0x0) {
      (*(code *)(*pppppppuStack_260)[2])(pppppppuStack_260);
      func_0x0412c2d0(pppppppuVar17);
    }
  }
  return;
LAB_09cbb493:
  FUN_04882eb0();
LAB_09cbb498:
  func_0x05ab4620();
LAB_09cbb49d:
  iVar27 = func_0x04108328(&DAT_0f5ea4a0);
  if (iVar27 != 0) {
    func_0x08b670e0(&DAT_0f5ea138);
    func_0x0eee2f40(&UNK_08b673f0,&DAT_0f5ea138,0xf53dab8);
    func_0x0410844d(&DAT_0f5ea4a0);
    param_3 = uStack_278;
  }
  goto LAB_09cb9b16;
}


