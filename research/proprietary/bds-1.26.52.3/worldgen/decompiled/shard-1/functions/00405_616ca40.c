/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x626ca40 (ELF vaddr 0x616ca40)
 * Label: caller-of-callee
 * Body:  [[0626ca40, 0626cb33] [0626cb40, 0626cb67] [0626cb70, 0626dcf1]]
 * Ghidra: FUN_0626ca40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_0626ca40(undefined8 *param_1,long param_2,char *param_3,byte *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  bool bVar20;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  byte *pbStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  byte *pbStack_348;
  long lStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  byte bStack_318;
  byte *pbStack_308;
  undefined *puStack_300;
  byte *pbStack_2f8;
  long lStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  byte bStack_2c8;
  long *plStack_2b8;
  long *plStack_2b0;
  byte *pbStack_2a0;
  byte *pbStack_298;
  undefined *puStack_290;
  byte *pbStack_288;
  byte *pbStack_280;
  code *pcStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  byte bStack_258;
  byte bStack_1e0;
  undefined7 uStack_1df;
  ulong uStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  byte *pbStack_178;
  undefined *puStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  long lStack_160;
  code *pcStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long lStack_148;
  long lStack_140;
  byte bStack_138;
  byte *pbStack_128;
  undefined *puStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  code *pcStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long lStack_f0;
  byte bStack_e8;
  byte *pbStack_d8;
  ulong uStack_d0;
  byte *pbStack_c8;
  ulong uStack_c0;
  byte *pbStack_b8;
  ulong uStack_b0;
  byte *pbStack_a8;
  ulong uStack_a0;
  byte *pbStack_98;
  ulong uStack_90;
  byte *pbStack_88;
  ulong uStack_80;
  char acStack_78 [8];
  undefined1 auStack_70 [24];
  code *pcStack_58;
  
  uVar14 = *(ulong *)(param_2 + 0x38);
  if (uVar14 != 0) {
    cVar5 = *param_3;
    uVar11 = (ulong)cVar5;
    uVar7 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      uVar13 = uVar14 - 1 & uVar11;
      plVar9 = *(long **)(*(long *)(param_2 + 0x30) + uVar13 * 8);
    }
    else {
      uVar13 = uVar11;
      if (uVar14 <= uVar11) {
        if ((uVar11 | uVar14) >> 0x20 == 0) {
          uVar13 = (uVar11 & 0xffffffff) % (uVar14 & 0xffffffff);
          plVar9 = *(long **)(*(long *)(param_2 + 0x30) + uVar13 * 8);
          goto joined_r0x0626cc79;
        }
        uVar13 = uVar11 % uVar14;
      }
      plVar9 = *(long **)(*(long *)(param_2 + 0x30) + uVar13 * 8);
    }
joined_r0x0626cc79:
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((byte)(uVar7 >> 0x38) < 2) {
        do {
          if (plVar9[1] == uVar11) {
            if ((char)plVar9[2] == cVar5) goto LAB_0626cbbe;
          }
          else if ((plVar9[1] & uVar14 - 1) != uVar13) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar11) {
            if ((char)plVar9[2] == cVar5) goto LAB_0626cbbe;
          }
          else {
            if (uVar14 <= uVar7) {
              if ((uVar7 | uVar14) >> 0x20 == 0) {
                if ((uVar7 & 0xffffffff) % (uVar14 & 0xffffffff) == uVar13) goto LAB_0626cb76;
                break;
              }
              uVar7 = uVar7 % uVar14;
            }
            if (uVar7 != uVar13) break;
          }
LAB_0626cb76:
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  goto LAB_0626cc7f;
LAB_0626cbbe:
  lVar18 = plVar9[3];
  if (lVar18 != 0) {
    bVar20 = (*(byte *)(lVar18 + 0x30) & 1) != 0;
    pbStack_298 = (byte *)(lVar18 + 0x31);
    if (bVar20) {
      pbStack_298 = *(byte **)(lVar18 + 0x40);
    }
    puStack_290 = (undefined *)(ulong)(*(byte *)(lVar18 + 0x30) >> 1);
    if (bVar20) {
      puStack_290 = *(undefined **)(lVar18 + 0x38);
    }
    pbStack_288 = *(byte **)(param_4 + 0x10);
    pbStack_280 = *(byte **)(param_4 + 8);
    if ((*param_4 & 1) == 0) {
      pbStack_288 = param_4 + 1;
      pbStack_280 = (byte *)(ulong)(*param_4 >> 1);
    }
    uStack_180 = param_5;
    func_0x048ad670(&uStack_358,&pbStack_298,2,0x2f);
    if (((ulong)uStack_358 & 1) == 0) {
      pbStack_368 = pbStack_348;
      uStack_378 = (uint)uStack_358;
      uStack_374 = uStack_358._4_4_;
      uStack_370 = (undefined4)uStack_350;
      uStack_36c = uStack_350._4_4_;
    }
    else {
      func_0x0412e5e0(&uStack_378,pbStack_348,uStack_350);
      if (((ulong)uStack_358 & 1) != 0) {
        func_0x0412a280(pbStack_348,(ulong)uStack_358 & 0xfffffffffffffffe);
      }
    }
    if ((DAT_0f7b8fb8 == '\0') && (iVar6 = func_0x04108328(&DAT_0f7b8fb8), iVar6 != 0)) {
      func_0x0ee5ea20(&DAT_0f7b8f98);
      func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
      func_0x0410844d(&DAT_0f7b8fb8);
    }
    bVar20 = (uStack_378 & 1) == 0;
    pbVar8 = (byte *)((long)&uStack_378 + 1);
    pbStack_98 = pbStack_368;
    if (bVar20) {
      pbStack_98 = pbVar8;
    }
    uStack_90 = (ulong)((byte)uStack_378 >> 1);
    if (!bVar20) {
      uStack_90 = CONCAT44(uStack_36c,uStack_370);
    }
    cVar5 = (**(code **)(_DAT_0f7b8f98 + 0x88))(&DAT_0f7b8f98,&pbStack_98);
    if (cVar5 == '\0') {
      plVar9 = (long *)func_0x0ee56790();
      bVar20 = (uStack_378 & 1) == 0;
      pbStack_a8 = pbStack_368;
      if (bVar20) {
        pbStack_a8 = pbVar8;
      }
      uStack_a0 = (ulong)((byte)uStack_378 >> 1);
      if (!bVar20) {
        uStack_a0 = CONCAT44(uStack_36c,uStack_370);
      }
      pbStack_2a0 = param_4 + 1;
      (**(code **)(*plVar9 + 0x80))(&pbStack_298,plVar9,&pbStack_a8);
      uStack_358 = (byte *)0xcf0bf0d9a4804f7d;
      uStack_350 = &UNK_0140f690;
      pbStack_348 = (byte *)0x1;
      lStack_340 = CONCAT44(lStack_340._4_4_,0x16a);
      if (bStack_258 == 0) {
        pbStack_308 = (byte *)0x0;
        puStack_300 = (undefined *)0x0;
        pbStack_2f8 = (byte *)0x0;
        FUN_0eedeb80(2,0x2d,&pbStack_298,&pbStack_308,&uStack_358);
        if (((ulong)pbStack_308 & 1) != 0) {
          func_0x0412a280(pbStack_2f8,(ulong)pbStack_308 & 0xfffffffffffffffe);
        }
      }
      bVar16 = bStack_258;
      bStack_e8 = bStack_258;
      if ((bStack_258 & 1) == 0) {
        pbStack_128 = pbStack_298;
        puStack_120 = puStack_290;
        pbStack_118 = pbStack_288;
        pbStack_110 = pbStack_280;
        pcStack_108 = pcStack_278;
        pbStack_288 = (byte *)0x0;
        pbStack_280 = (byte *)0x0;
        pcStack_278 = (code *)0x0;
        uStack_100 = (undefined4)uStack_270;
        uStack_fc = uStack_270._4_4_;
        uStack_f8 = (undefined4)uStack_268;
        uStack_f4 = uStack_268._4_4_;
        lStack_f0 = lStack_260;
        uStack_270 = 0;
        uStack_268 = 0;
        lStack_260 = 0;
        func_0x0ee38090(&pbStack_298);
        bVar20 = (uStack_378 & 1) != 0;
        uStack_358 = pbVar8;
        if (bVar20) {
          uStack_358 = pbStack_368;
        }
        uStack_350 = (undefined *)(ulong)((byte)uStack_378 >> 1);
        if (bVar20) {
          uStack_350 = (undefined *)CONCAT44(uStack_36c,uStack_370);
        }
        func_0x0470d9a0(&pbStack_308,&UNK_0128cb82,0x23,0xd,&uStack_358);
        pbVar8 = uStack_358;
        uStack_358._0_5_ = CONCAT41(_DAT_013f776f,10);
        uStack_358._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_358);
        uStack_358._7_1_ = SUB81(pbVar8,7);
        uStack_358._0_7_ = (uint7)(uint6)uStack_358;
        func_0x0d858ce0(&pbStack_298,&uStack_358,&pbStack_308);
        *(undefined1 *)param_1 = 1;
        func_0x05e91e00(param_1 + 1,&pbStack_298);
        func_0x048fb670(&pbStack_298);
        if (((ulong)pbStack_308 & 1) != 0) {
          func_0x0412a280(pbStack_2f8,(ulong)pbStack_308 & 0xfffffffffffffffe);
        }
      }
      else {
        func_0x0ee38090(&pbStack_298);
        func_0x0626df40(acStack_78,param_3,param_4,uStack_180);
        pbVar15 = pbStack_2a0;
        if (acStack_78[0] == '\x01') {
          plVar9 = (long *)func_0x0ee56790();
          bVar20 = (uStack_378 & 1) == 0;
          pbStack_b8 = pbStack_368;
          if (bVar20) {
            pbStack_b8 = pbVar8;
          }
          uStack_b0 = (ulong)((byte)uStack_378 >> 1);
          if (!bVar20) {
            uStack_b0 = CONCAT44(uStack_36c,uStack_370);
          }
          (**(code **)(*plVar9 + 0x98))(&pbStack_298,plVar9,&pbStack_b8);
          uStack_358 = (byte *)0xcf0bf0d9a4804f7d;
          uStack_350 = &UNK_0140f690;
          pbStack_348 = (byte *)0x1;
          lStack_340 = CONCAT44(lStack_340._4_4_,0x171);
          if (bStack_258 == 0) {
            pbStack_308 = (byte *)0x0;
            puStack_300 = (undefined *)0x0;
            pbStack_2f8 = (byte *)0x0;
            FUN_0eedeb80(2,0x2d,&pbStack_298,&pbStack_308,&uStack_358);
            if (((ulong)pbStack_308 & 1) != 0) {
              func_0x0412a280(pbStack_2f8,(ulong)pbStack_308 & 0xfffffffffffffffe);
            }
          }
          func_0x0ee38090(&pbStack_298);
          bVar20 = (uStack_378 & 1) != 0;
          uStack_358 = pbVar8;
          if (bVar20) {
            uStack_358 = pbStack_368;
          }
          uStack_350 = (undefined *)(ulong)((byte)uStack_378 >> 1);
          if (bVar20) {
            uStack_350 = (undefined *)CONCAT44(uStack_36c,uStack_370);
          }
          func_0x0470d9a0(&pbStack_308,&UNK_01449991,0x28,0xd,&uStack_358);
          pbVar8 = uStack_358;
          uStack_358._0_5_ = CONCAT41(_DAT_013f776f,10);
          uStack_358._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_358);
          uStack_358._7_1_ = SUB81(pbVar8,7);
          uStack_358._0_7_ = (uint7)(uint6)uStack_358;
          func_0x0d858ce0(&pbStack_298,&uStack_358,&pbStack_308);
          *(undefined1 *)param_1 = 1;
          func_0x05e91e00(param_1 + 1,&pbStack_298);
          func_0x048fb670(&pbStack_298);
          pbVar8 = pbStack_308;
          pbStack_1d0 = pbStack_2f8;
          if (((ulong)pbStack_308 & 1) != 0) {
LAB_0626da31:
            func_0x0412a280(pbStack_1d0,(ulong)pbVar8 & 0xfffffffffffffffe);
          }
        }
        else {
          bVar20 = (uStack_378 & 1) == 0;
          pbStack_298 = pbStack_368;
          if (bVar20) {
            pbStack_298 = pbVar8;
          }
          puStack_290 = (undefined *)(ulong)((byte)uStack_378 >> 1);
          if (!bVar20) {
            puStack_290 = (undefined *)CONCAT44(uStack_36c,uStack_370);
          }
          pbStack_288 = &UNK_014ca950;
          pbStack_280 = (byte *)0xd;
          func_0x048ad670(&bStack_1e0,&pbStack_298,2,0x2f);
          pbStack_88 = (byte *)&uStack_1df;
          uStack_80 = (ulong)(bStack_1e0 >> 1);
          if ((bStack_1e0 & 1) != 0) {
            uStack_80 = uStack_1d8;
            pbStack_88 = pbStack_1d0;
          }
          plStack_2b8 = (long *)0x0;
          plStack_2b0 = (long *)0x0;
          func_0x0ee566d0(&uStack_358,&plStack_2b8,&pbStack_88,0x12e,0);
          bStack_258 = bStack_318;
          if (bStack_318 == 0) {
            pbStack_298 = uStack_358;
            puStack_290 = uStack_350;
            pbStack_288 = pbStack_348;
            pbStack_280 = (byte *)lStack_340;
            pcStack_278 = pcStack_338;
            pbStack_348 = (byte *)0x0;
            lStack_340 = 0;
            pcStack_338 = (code *)0x0;
            uStack_270 = uStack_330;
            uStack_268 = lStack_328;
            lStack_260 = lStack_320;
            uStack_330 = 0;
            lStack_328 = 0;
            lStack_320 = 0;
          }
          func_0x0ee38090(&uStack_358);
          if (bStack_258 == 0) {
            func_0x062a4970(&pbStack_298);
            lStack_190 = lStack_260;
            lStack_198 = uStack_268;
            uStack_1a0 = uStack_270;
            pcStack_1a8 = pcStack_278;
            lStack_1b0 = (long)pbStack_280;
            uStack_1b8 = pbStack_288;
            uStack_358 = pbStack_298;
            uStack_350 = puStack_290;
            pbStack_288 = (byte *)0x0;
            pbStack_280 = (byte *)0x0;
            pcStack_278 = (code *)0x0;
            uStack_270 = 0;
            uStack_268 = 0;
            lStack_260 = 0;
            pbStack_348 = (byte *)0x0;
            lStack_340 = 0;
            pcStack_338 = (code *)0x0;
            uStack_330 = 0;
            lStack_328 = 0;
            lStack_320 = 0;
            uStack_188 = uStack_188 & 0xffffffffffffff00;
            pbStack_1c8 = pbStack_298;
            puStack_1c0 = puStack_290;
            func_0x048e6d60(&uStack_358);
            pbVar15 = pbStack_2a0;
            func_0x0ee38090(&pbStack_298);
          }
          else {
            pbVar10 = (byte *)func_0x0626f7a0(acStack_78);
            bVar20 = (*pbVar10 & 1) != 0;
            pbVar12 = pbVar10 + 1;
            if (bVar20) {
              pbVar12 = *(byte **)(pbVar10 + 0x10);
            }
            uVar14 = (ulong)(*pbVar10 >> 1);
            if (bVar20) {
              uVar14 = *(ulong *)(pbVar10 + 8);
            }
            func_0x0ee76e70(&pbStack_308,plStack_2b8,pbVar12,uVar14);
            bStack_318 = bStack_2c8;
            if (bStack_2c8 == 0) {
              uStack_358 = pbStack_308;
              uStack_350 = puStack_300;
              pbStack_348 = pbStack_2f8;
              lStack_340 = lStack_2f0;
              pcStack_338 = pcStack_2e8;
              pbStack_2f8 = (byte *)0x0;
              lStack_2f0 = 0;
              pcStack_2e8 = (code *)0x0;
              uStack_330 = uStack_2e0;
              lStack_328 = lStack_2d8;
              lStack_320 = lStack_2d0;
              uStack_2e0 = 0;
              lStack_2d8 = 0;
              lStack_2d0 = 0;
            }
            func_0x0ee38090(&pbStack_308);
            if (bStack_318 == 0) {
              func_0x062a4a30(&uStack_358);
              lStack_190 = lStack_320;
              lStack_198 = lStack_328;
              uStack_1a0 = uStack_330;
              pcStack_1a8 = pcStack_338;
              lStack_1b0 = lStack_340;
              uStack_1b8 = pbStack_348;
              pbStack_308 = uStack_358;
              puStack_300 = uStack_350;
              pbStack_348 = (byte *)0x0;
              lStack_340 = 0;
              pcStack_338 = (code *)0x0;
              uStack_330 = 0;
              lStack_328 = 0;
              lStack_320 = 0;
              pbStack_2f8 = (byte *)0x0;
              lStack_2f0 = 0;
              pcStack_2e8 = (code *)0x0;
              uStack_2e0 = 0;
              lStack_2d8 = 0;
              lStack_2d0 = 0;
              uStack_188 = uStack_188 & 0xffffffffffffff00;
              pbStack_1c8 = uStack_358;
              puStack_1c0 = uStack_350;
              func_0x048e6d60(&pbStack_308);
              pbVar15 = pbStack_2a0;
            }
            else {
              lStack_198 = 0;
              lStack_190 = 0;
              pcStack_1a8 = (code *)0x0;
              uStack_1a0 = 0;
              uStack_1b8 = (byte *)0x0;
              lStack_1b0 = 0;
              pbStack_1c8 = (byte *)0x0;
              puStack_1c0 = (undefined *)0x0;
              uStack_188 = 1;
            }
            func_0x0ee38090(&uStack_358);
            func_0x0ee38090(&pbStack_298);
          }
          if (plStack_2b8 != (long *)0x0) {
            func_0x0ee56810(&pbStack_298,&plStack_2b8);
            func_0x0ee38090(&pbStack_298);
          }
          plVar9 = plStack_2b0;
          plStack_2b0 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 8))();
          }
          plVar9 = plStack_2b8;
          plStack_2b8 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 8))();
          }
          pbStack_298 = (byte *)0xcf0bf0d9a4804f7d;
          puStack_290 = &UNK_0140f690;
          pbStack_288 = (byte *)0x1;
          pbStack_280 = (byte *)CONCAT44(pbStack_280._4_4_,0x17e);
          if ((byte)uStack_188 == 0) {
            uStack_358 = (byte *)0x0;
            uStack_350 = (undefined *)0x0;
            pbStack_348 = (byte *)0x0;
            FUN_0eedeb80(2,0x2d,&pbStack_1c8,&uStack_358,&pbStack_298);
            if (((ulong)uStack_358 & 1) != 0) {
              func_0x0412a280(pbStack_348,(ulong)uStack_358 & 0xfffffffffffffffe);
            }
          }
          bStack_138 = (byte)uStack_188;
          if (((byte)uStack_188 & 1) == 0) {
            pbStack_178 = pbStack_1c8;
            puStack_170 = puStack_1c0;
            uStack_168 = (undefined4)uStack_1b8;
            uStack_164 = uStack_1b8._4_4_;
            lStack_160 = lStack_1b0;
            pcStack_158 = pcStack_1a8;
            uStack_150 = (undefined4)uStack_1a0;
            uStack_14c = uStack_1a0._4_4_;
            lStack_148 = lStack_198;
            lStack_140 = lStack_190;
            plVar9 = (long *)func_0x0ee56790();
            bVar20 = (uStack_378 & 1) != 0;
            pbStack_c8 = pbVar8;
            if (bVar20) {
              pbStack_c8 = pbStack_368;
            }
            uStack_c0 = (ulong)((byte)uStack_378 >> 1);
            if (bVar20) {
              uStack_c0 = CONCAT44(uStack_36c,uStack_370);
            }
            (**(code **)(*plVar9 + 0x98))(&pbStack_298,plVar9,&pbStack_c8);
            uStack_358 = (byte *)0xcf0bf0d9a4804f7d;
            uStack_350 = &UNK_0140f690;
            pbStack_348 = (byte *)0x1;
            lStack_340 = CONCAT44(lStack_340._4_4_,0x181);
            if (bStack_258 == 0) {
              pbStack_308 = (byte *)0x0;
              puStack_300 = (undefined *)0x0;
              pbStack_2f8 = (byte *)0x0;
              FUN_0eedeb80(2,0x2d,&pbStack_298,&pbStack_308,&uStack_358);
              if (((ulong)pbStack_308 & 1) != 0) {
                func_0x0412a280(pbStack_2f8,(ulong)pbStack_308 & 0xfffffffffffffffe);
              }
            }
            func_0x0ee38090(&pbStack_298);
            bVar20 = (*param_4 & 1) != 0;
            uStack_358 = pbVar15;
            if (bVar20) {
              uStack_358 = *(byte **)(param_4 + 0x10);
            }
            uStack_350 = (undefined *)(ulong)(*param_4 >> 1);
            if (bVar20) {
              uStack_350 = *(undefined **)(param_4 + 8);
            }
            func_0x0470d9a0(&pbStack_308,&UNK_014499ba,0x2a,0xd,&uStack_358);
            pbVar8 = uStack_358;
            uStack_358._0_5_ = CONCAT41(_DAT_013f776f,10);
            uStack_358._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_358);
            uStack_358._7_1_ = SUB81(pbVar8,7);
            uStack_358._0_7_ = (uint7)(uint6)uStack_358;
            func_0x0d858ce0(&pbStack_298,&uStack_358,&pbStack_308);
            *(undefined1 *)param_1 = 1;
            func_0x05e91e00(param_1 + 1,&pbStack_298);
            func_0x048fb670(&pbStack_298);
            if (((ulong)pbStack_308 & 1) != 0) {
              func_0x0412a280(pbStack_2f8,(ulong)pbStack_308 & 0xfffffffffffffffe);
            }
            lVar18 = CONCAT44(uStack_14c,uStack_150);
            if (lVar18 != 0) {
              lVar19 = lVar18;
              lVar17 = lStack_148;
              if (lVar18 != lStack_148) {
                do {
                  lVar17 = lVar17 + -0x40;
                  func_0x048b3e80(lVar17);
                } while (lVar17 != lVar18);
                lVar19 = CONCAT44(uStack_14c,uStack_150);
              }
              lStack_148 = lVar18;
              func_0x0412a280(lVar19,lStack_140 - lVar19);
            }
            lVar18 = CONCAT44(uStack_164,uStack_168);
            lVar19 = lStack_160;
            if (lVar18 != 0) {
              for (; lVar18 != lVar19; lVar19 = lVar19 + -0x50) {
                if ((*(char *)(lVar19 + -8) == '\x01') && ((*(byte *)(lVar19 + -0x30) & 1) != 0)) {
                  func_0x0412a280(*(undefined8 *)(lVar19 + -0x20),
                                  *(ulong *)(lVar19 + -0x30) & 0xfffffffffffffffe);
                }
              }
              lStack_160 = lVar18;
              func_0x0412a280(lVar18,(long)pcStack_158 - lVar18);
            }
          }
          else {
            func_0x0626a210(&pbStack_298,param_2,*param_3,param_4);
            if ((char)pbStack_298 == '\x01') {
              plVar9 = (long *)func_0x0ee56790();
              bVar20 = (uStack_378 & 1) != 0;
              pbStack_d8 = pbVar8;
              if (bVar20) {
                pbStack_d8 = pbStack_368;
              }
              uStack_d0 = (ulong)((byte)uStack_378 >> 1);
              if (bVar20) {
                uStack_d0 = CONCAT44(uStack_36c,uStack_370);
              }
              (**(code **)(*plVar9 + 0x98))(&uStack_358,plVar9,&pbStack_d8);
              pbStack_308 = (byte *)0xcf0bf0d9a4804f7d;
              puStack_300 = &UNK_0140f690;
              pbStack_2f8 = (byte *)0x1;
              lStack_2f0 = CONCAT44(lStack_2f0._4_4_,0x187);
              if (bStack_318 == 0) {
                pbStack_1c8 = (byte *)0x0;
                puStack_1c0 = (undefined *)0x0;
                uStack_1b8 = (byte *)0x0;
                FUN_0eedeb80(2,0x2d,&uStack_358,&pbStack_1c8,&pbStack_308);
                if (((ulong)pbStack_1c8 & 1) != 0) {
                  func_0x0412a280(uStack_1b8,(ulong)pbStack_1c8 & 0xfffffffffffffffe);
                }
              }
              func_0x0ee38090(&uStack_358);
              func_0x06264200(param_1,&pbStack_298);
            }
            else {
              param_1[6] = 0;
              param_1[7] = 0;
              param_1[4] = 0;
              param_1[5] = 0;
              param_1[2] = 0;
              param_1[3] = 0;
              *param_1 = 0;
              param_1[1] = 0;
              param_1[8] = 0;
              func_0x05d84ba0(param_1 + 1);
            }
            if (pcStack_278 != (code *)0x0) {
              (*pcStack_278)(&puStack_290);
            }
          }
          if ((bStack_1e0 & 1) != 0) {
            pbVar8 = (byte *)CONCAT71(uStack_1df,bStack_1e0);
            goto LAB_0626da31;
          }
        }
        bVar16 = bStack_e8;
        if (pcStack_58 != (code *)0x0) {
          (*pcStack_58)(auStack_70);
          bVar16 = bStack_e8;
        }
      }
      if ((bVar16 & 1) == 0) {
        lVar18 = CONCAT44(uStack_fc,uStack_100);
        if (lVar18 != 0) {
          lVar19 = CONCAT44(uStack_f4,uStack_f8);
          if (lVar18 != lVar19) {
            do {
              lVar19 = lVar19 + -0x40;
              func_0x048b3e80(lVar19);
            } while (lVar19 != lVar18);
            lVar18 = CONCAT44(uStack_fc,uStack_100);
          }
          func_0x0412a280(lVar18,lStack_f0 - lVar18);
        }
        pbVar15 = pbStack_118;
        pbVar8 = pbStack_110;
        if (pbStack_118 != (byte *)0x0) {
          for (; pbVar15 != pbVar8; pbVar8 = pbVar8 + -0x50) {
            if ((pbVar8[-8] == 1) && ((pbVar8[-0x30] & 1) != 0)) {
              func_0x0412a280(*(undefined8 *)(pbVar8 + -0x20),
                              *(ulong *)(pbVar8 + -0x30) & 0xfffffffffffffffe);
            }
          }
          uVar14 = (long)pcStack_108 - (long)pbVar15;
          goto LAB_0626dace;
        }
      }
    }
    else {
      bVar20 = (uStack_378 & 1) != 0;
      uStack_358 = pbVar8;
      if (bVar20) {
        uStack_358 = pbStack_368;
      }
      uStack_350 = (undefined *)(ulong)((byte)uStack_378 >> 1);
      if (bVar20) {
        uStack_350 = (undefined *)CONCAT44(uStack_36c,uStack_370);
      }
      func_0x0470d9a0(&pbStack_308,&UNK_011ee84f,0x1a,0xd,&uStack_358);
      pbVar8 = uStack_358;
      uStack_358._0_5_ = CONCAT41(_DAT_013f776f,10);
      uStack_358._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_358);
      uStack_358._7_1_ = SUB81(pbVar8,7);
      uStack_358._0_7_ = (uint7)(uint6)uStack_358;
      func_0x0d858ce0(&pbStack_298,&uStack_358,&pbStack_308);
      *(undefined1 *)param_1 = 1;
      func_0x05e91e00(param_1 + 1,&pbStack_298);
      func_0x048fb670(&pbStack_298);
      if (((ulong)pbStack_308 & 1) != 0) {
        uVar14 = (ulong)pbStack_308 & 0xfffffffffffffffe;
        pbVar15 = pbStack_2f8;
LAB_0626dace:
        func_0x0412a280(pbVar15,uVar14);
      }
    }
    if ((uStack_378 & 1) == 0) {
      return param_1;
    }
    uVar14 = CONCAT44(uStack_374,uStack_378) & 0xfffffffffffffffe;
    pbVar8 = pbStack_368;
    goto LAB_0626cd42;
  }
LAB_0626cc7f:
  pbVar8 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
  if (pbVar8 == (byte *)0x0) {
    func_0x0eec74c0(0x30,0);
  }
  uVar1 = _UNK_0123e8b2;
  pbStack_308 = (byte *)0x31;
  puStack_300 = (undefined *)0x2c;
  *(ulong *)(pbVar8 + 0x1c) = CONCAT44(_UNK_0123e8ae,_DAT_0123e8aa);
  *(undefined8 *)(pbVar8 + 0x24) = uVar1;
  uVar1 = CONCAT44(_DAT_0123e8aa,_UNK_0123e8a6);
  *(undefined8 *)(pbVar8 + 0x10) = _DAT_0123e89e;
  *(undefined8 *)(pbVar8 + 0x18) = uVar1;
  uVar4 = _UNK_0123e89a;
  uVar3 = _UNK_0123e896;
  uVar2 = _UNK_0123e892;
  *(undefined4 *)pbVar8 = _DAT_0123e88e;
  *(undefined4 *)(pbVar8 + 4) = uVar2;
  *(undefined4 *)(pbVar8 + 8) = uVar3;
  *(undefined4 *)(pbVar8 + 0xc) = uVar4;
  pbVar8[0x2c] = 0;
  uStack_358._0_5_ = CONCAT41(_DAT_013f776f,10);
  uStack_358._0_6_ = CONCAT15(DAT_013f7773,(undefined5)uStack_358);
  uStack_358._0_7_ = (uint7)(uint6)uStack_358;
  pbStack_2f8 = pbVar8;
  func_0x0d858ce0(&pbStack_298,&uStack_358,&pbStack_308);
  *(undefined1 *)param_1 = 1;
  func_0x05e91e00(param_1 + 1,&pbStack_298);
  func_0x048fb670(&pbStack_298);
  uVar14 = 0x30;
LAB_0626cd42:
  func_0x0412a280(pbVar8,uVar14);
  return param_1;
}



/* ---- referenced strings ----
 * 0x123e88e  Pack source not found for pack type provided
 * 0x123e89e  found for pack type provided
 * 0x123e8aa  ck type provided
 * 0x13f776f  Error
 */
