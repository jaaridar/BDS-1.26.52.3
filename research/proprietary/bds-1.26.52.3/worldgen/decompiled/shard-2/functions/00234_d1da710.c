/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2da710 (ELF vaddr 0xd1da710)
 * Label: caller-of-seed
 * Body:  [[0d2da710, 0d2da7d2] [0d2da7e0, 0d2daf9d] [0d2dafa0, 0d2db080] [0d2db090, 0d2db267] [0d2db270, 0d2db5ca] [0d2db640, 0d2db64b] [0d2db6b5, 0d2db6c3] [0d2db6cb, 0d2db72a]]
 * Ghidra: FUN_0d2da710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d2da710(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 ****unaff_R15;
  undefined8 ***pppuStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3b8;
  undefined8 *puStack_3b0;
  undefined1 auStack_3a8 [32];
  uint uStack_388;
  byte bStack_380;
  uint uStack_378;
  byte bStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 uStack_360;
  ulong uStack_358;
  long lStack_348;
  undefined8 uStack_340;
  long lStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined1 auStack_320 [32];
  uint uStack_300;
  undefined *puStack_2f8;
  undefined1 auStack_2f0 [32];
  uint uStack_2d0;
  undefined *puStack_2c8;
  undefined1 auStack_2c0 [48];
  uint uStack_290;
  undefined8 ***pppuStack_288;
  undefined8 **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined *puStack_1a0;
  undefined1 auStack_198 [48];
  uint uStack_168;
  undefined8 **ppuStack_160;
  undefined1 auStack_158 [48];
  uint uStack_128;
  byte bStack_120;
  undefined8 ***apppuStack_118 [29];
  
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_3d0._0_4_ = 0;
  uStack_3d0._4_4_ = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  uStack_340 = param_1;
  if (param_3 - param_2 == 0) {
    uStack_358 = 0;
  }
  else {
    lVar5 = param_3 - param_2 >> 3;
    lStack_348 = param_3;
    if (0x11a7b9611a7b961 < (ulong)(lVar5 * 0x14c1bacf914c1bad)) {
LAB_0d2db55a:
      uVar8 = func_0x0d2c5090();
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      func_0x051923d0(&uStack_368);
      func_0x051923d0(&uStack_3d8);
      uVar8 = func_0x0eee2d70(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      func_0x051923d0(&uStack_3d8);
      uVar8 = func_0x0eee2d70(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      func_0x0525ebf0(unaff_R15);
      func_0x0d2dbc10(&puStack_3b0);
      FUN_05192430(&pppuStack_288);
      func_0x0d2dbb70(&ppuStack_160);
      func_0x051923d0(&uStack_3d8);
      uVar8 = func_0x0eee2d70(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      uVar8 = func_0x04882e20(uVar8);
      func_0x04882e20(uVar8);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar5 = lVar5 * -0x306eb3e45306eb38;
    uVar6 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar5);
    if (uVar6 == 0) {
      FUN_0eec74c0(lVar5,0);
    }
    uStack_3c8 = lVar5 + uVar6;
    lVar5 = lStack_348;
    uStack_3d8 = uVar6;
    uStack_3d0 = uVar6;
    do {
      unaff_R15 = &pppuStack_288;
      ppuStack_160 = (undefined8 **)((ulong)ppuStack_160 & 0xffffffffffffff00);
      bStack_120 = 0;
      apppuStack_118[0] = &ppuStack_160;
      if ((ulong)*(uint *)(param_2 + 0x48) == 0xffffffff) {
        func_0x04931450();
LAB_0d2db541:
        func_0x04931450();
LAB_0d2db546:
        func_0x04931450();
LAB_0d2db54b:
        func_0x04931450();
LAB_0d2db550:
        func_0x0d2c5090();
LAB_0d2db555:
        func_0x04882eb0();
        goto LAB_0d2db55a;
      }
      pppuStack_288 = apppuStack_118;
      (**(code **)(&UNK_0f45ebb8 + (ulong)*(uint *)(param_2 + 0x48) * 8))(unaff_R15,param_2);
      lVar7 = func_0x0d2db910(param_2 + 0xe8);
      uVar2 = uStack_128;
      if ((lVar7 != 0 & bStack_120) != 0) {
        puStack_2c8 = &UNK_0f45f578;
        auStack_2c0[0] = 0;
        uStack_290 = 0xffffffff;
        uVar6 = (ulong)uStack_128;
        if (uVar6 != 0xffffffff) {
          apppuStack_118[0] = (undefined8 ***)auStack_2c0;
          (**(code **)(&UNK_0f45ec18 + uVar6 * 8))(apppuStack_118,auStack_158);
          uStack_290 = uVar2;
        }
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1c0 = 0;
        lStack_1d8 = 0;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        uStack_218 = 0;
        uStack_210 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_258 = 0;
        uStack_250 = 0;
        uStack_268 = 0;
        uStack_260 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        uStack_1a8 = 0;
        pppuStack_288 = (undefined8 ***)&UNK_0f45f578;
        ppuStack_280 = (undefined8 **)&UNK_0f45f5a8;
        puStack_248 = &UNK_0f45f578;
        puStack_240 = (undefined8 *)&UNK_0f45f5a8;
        puStack_208 = &UNK_0f45f548;
        puStack_200 = (undefined8 *)&UNK_0f45f6f8;
        puStack_1d0 = &UNK_0f45f6c8;
        puStack_1c8 = (undefined8 *)&UNK_0f45f758;
        if (uVar2 == 0xffffffff) {
          uStack_250 = 0xffffffff;
          puStack_2c8 = &UNK_0f45f578;
          lStack_1d8 = lVar7;
        }
        else {
          apppuStack_118[0] = &ppuStack_280;
          (**(code **)(&UNK_0f45e408 + uVar6 * 8))(apppuStack_118,apppuStack_118[0],auStack_2c0);
          puStack_2c8 = &UNK_0f45f578;
          lStack_1d8 = lVar7;
          if ((ulong)uStack_290 != 0xffffffff) {
            (**(code **)(&UNK_0f45eb18 + (ulong)uStack_290 * 8))(apppuStack_118,auStack_2c0);
          }
        }
        unaff_R15 = (undefined8 ****)auStack_198;
        uStack_290 = 0xffffffff;
        puStack_3b0 = (undefined8 *)((ulong)puStack_3b0 & 0xffffffffffffff00);
        bStack_370 = 0;
        pppuStack_3e0 = (undefined8 ***)&puStack_3b0;
        if ((ulong)*(uint *)(param_2 + 0x98) == 0xffffffff) goto LAB_0d2db541;
        apppuStack_118[0] = &pppuStack_3e0;
        (**(code **)(&UNK_0f45ebb8 + (ulong)*(uint *)(param_2 + 0x98) * 8))
                  (apppuStack_118,param_2 + 0x50);
        uVar2 = uStack_378;
        if (bStack_370 == 1) {
          puStack_1a0 = &UNK_0f45f578;
          auStack_198[0] = 0;
          uStack_168 = 0xffffffff;
          uVar6 = (ulong)uStack_378;
          if (uVar6 == 0xffffffff) {
            if ((uStack_210 & 0xffffffff) != 0xffffffff) {
              (**(code **)(&UNK_0f45e3d8 + (uStack_210 & 0xffffffff) * 8))
                        (&pppuStack_3e0,&puStack_240);
              uStack_210 = CONCAT44(uStack_210._4_4_,0xffffffff);
            }
          }
          else {
            pppuStack_3e0 = unaff_R15;
            (**(code **)(&UNK_0f45ec18 + uVar6 * 8))(&pppuStack_3e0,auStack_3a8);
            uStack_168 = uVar2;
            pppuStack_3e0 = (undefined8 ***)&puStack_240;
            (**(code **)(&UNK_0f45e408 + uVar6 * 8))(&pppuStack_3e0,pppuStack_3e0,unaff_R15);
          }
          func_0x0525e680(apppuStack_118,&pppuStack_288);
          func_0x0d2db9c0(&pppuStack_288,apppuStack_118);
          FUN_05192430(apppuStack_118);
          puStack_1a0 = &UNK_0f45f578;
          if ((ulong)uStack_168 != 0xffffffff) {
            (**(code **)(&UNK_0f45eb18 + (ulong)uStack_168 * 8))(&pppuStack_3e0,unaff_R15);
          }
          uStack_168 = 0xffffffff;
        }
        unaff_R15 = (undefined8 ****)auStack_2f0;
        if ((bStack_370 & 1) != 0) {
          puStack_3b0 = (undefined8 *)&UNK_0f45f578;
          if ((ulong)uStack_378 != 0xffffffff) {
            (**(code **)(&UNK_0f45eb18 + (ulong)uStack_378 * 8))(apppuStack_118,auStack_3a8);
          }
        }
        if (*(char *)(param_2 + 0xb8) == '\x01') {
          puStack_3b0 = (undefined8 *)((ulong)puStack_3b0 & 0xffffffffffffff00);
          bStack_380 = 0;
          pppuStack_3e0 = (undefined8 ***)&puStack_3b0;
          if ((ulong)*(uint *)(param_2 + 0xb4) != 0xffffffff) {
            apppuStack_118[0] = &pppuStack_3e0;
            (**(code **)(&UNK_0f45ec68 + (ulong)*(uint *)(param_2 + 0xb4) * 8))
                      (apppuStack_118,param_2 + 0xa0);
            uVar2 = uStack_388;
            if (bStack_380 == 1) {
              puStack_2f8 = &UNK_0f45f548;
              auStack_2f0[0] = 0;
              uStack_2d0 = 0xffffffff;
              uVar6 = (ulong)uStack_388;
              if (uVar6 == 0xffffffff) {
                if ((uStack_1e0 & 0xffffffff) != 0xffffffff) {
                  (**(code **)(&UNK_0f45e3c8 + (uStack_1e0 & 0xffffffff) * 8))
                            (&pppuStack_3e0,&puStack_200);
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0xffffffff);
                }
              }
              else {
                pppuStack_3e0 = unaff_R15;
                (**(code **)(&UNK_0f45ec78 + uVar6 * 8))(&pppuStack_3e0,auStack_3a8);
                uStack_2d0 = uVar2;
                pppuStack_3e0 = (undefined8 ***)&puStack_200;
                (**(code **)(&UNK_0f45e448 + uVar6 * 8))(&pppuStack_3e0,pppuStack_3e0,unaff_R15);
              }
              func_0x0525e680(apppuStack_118,&pppuStack_288);
              func_0x0d2db9c0(&pppuStack_288,apppuStack_118);
              FUN_05192430(apppuStack_118);
              puStack_2f8 = &UNK_0f45f548;
              if ((ulong)uStack_2d0 != 0xffffffff) {
                (**(code **)(&UNK_0f45eb78 + (ulong)uStack_2d0 * 8))(&pppuStack_3e0,unaff_R15);
              }
              uStack_2d0 = 0xffffffff;
            }
            if ((bStack_380 & 1) != 0) {
              puStack_3b0 = (undefined8 *)&UNK_0f45f548;
              if ((ulong)uStack_388 != 0xffffffff) {
                (**(code **)(&UNK_0f45eb78 + (ulong)uStack_388 * 8))(apppuStack_118,auStack_3a8);
              }
            }
            goto LAB_0d2dada0;
          }
          goto LAB_0d2db54b;
        }
LAB_0d2dada0:
        unaff_R15 = (undefined8 ****)auStack_320;
        if (*(char *)(param_2 + 0xe0) == '\x01') {
          puStack_3b0 = (undefined8 *)((ulong)puStack_3b0 & 0xffffffffffffff00);
          bStack_380 = 0;
          pppuStack_3e0 = (undefined8 ***)&puStack_3b0;
          if ((ulong)*(uint *)(param_2 + 0xd8) == 0xffffffff) goto LAB_0d2db546;
          apppuStack_118[0] = &pppuStack_3e0;
          (**(code **)(&UNK_0f45ec88 + (ulong)*(uint *)(param_2 + 0xd8) * 8))
                    (apppuStack_118,param_2 + 0xc0);
          uVar2 = uStack_388;
          if (bStack_380 == 1) {
            puStack_328 = &UNK_0f45f6c8;
            auStack_320[0] = 0;
            uStack_300 = 0xffffffff;
            uVar6 = (ulong)uStack_388;
            if (uVar6 == 0xffffffff) {
              if ((uStack_1a8 & 0xffffffff) != 0xffffffff) {
                (**(code **)(&UNK_0f45e438 + (uStack_1a8 & 0xffffffff) * 8))
                          (&pppuStack_3e0,&puStack_1c8);
                uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0xffffffff);
              }
            }
            else {
              pppuStack_3e0 = unaff_R15;
              (**(code **)(&UNK_0f45ec98 + uVar6 * 8))(&pppuStack_3e0,auStack_3a8);
              uStack_300 = uVar2;
              pppuStack_3e0 = (undefined8 ***)&puStack_1c8;
              (**(code **)(&UNK_0f45e458 + uVar6 * 8))(&pppuStack_3e0,pppuStack_3e0,unaff_R15);
            }
            func_0x0525e680(apppuStack_118,&pppuStack_288);
            func_0x0d2db9c0(&pppuStack_288,apppuStack_118);
            FUN_05192430(apppuStack_118);
            puStack_328 = &UNK_0f45f6c8;
            if ((ulong)uStack_300 != 0xffffffff) {
              (**(code **)(&UNK_0f45eb98 + (ulong)uStack_300 * 8))(&pppuStack_3e0,unaff_R15);
            }
            uStack_300 = 0xffffffff;
          }
          if ((bStack_380 & 1) != 0) {
            puStack_3b0 = (undefined8 *)&UNK_0f45f6c8;
            if ((ulong)uStack_388 != 0xffffffff) {
              (**(code **)(&UNK_0f45eb98 + (ulong)uStack_388 * 8))(apppuStack_118,auStack_3a8);
            }
          }
        }
        uVar6 = uStack_3d0;
        if (uStack_3d0 < uStack_3c8) {
          func_0x0d2dbc60(uStack_3d0,&pppuStack_288);
          uVar6 = uVar6 + 0xe8;
          uVar1 = uStack_3d8;
          uVar9 = uStack_3c8;
        }
        else {
          uStack_3b8 = uStack_3d0 - uStack_3d8;
          uVar6 = ((long)uStack_3b8 >> 3) * 0x34f72c234f72c235 + 1;
          unaff_R15 = &pppuStack_288;
          if (0x11a7b9611a7b961 < uVar6) goto LAB_0d2db550;
          lVar7 = (long)(uStack_3c8 - uStack_3d8) >> 3;
          uVar1 = lVar7 * 0x69ee58469ee5846a;
          if (uVar6 < uVar1) {
            uVar6 = uVar1;
          }
          if (0x8d3dcb08d3dcaf < (ulong)(lVar7 * 0x34f72c234f72c235)) {
            uVar6 = 0x11a7b9611a7b961;
          }
          if (uVar6 == 0) {
            lVar7 = 0;
          }
          else {
            if (0x11a7b9611a7b961 < uVar6) goto LAB_0d2db555;
            lVar7 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar6 * 0xe8);
            if (lVar7 == 0) {
              FUN_0eec74c0(uVar6 * 0xe8,0);
              lVar7 = 0;
            }
          }
          lVar10 = lVar7 + uStack_3b8;
          lStack_330 = lVar7;
          func_0x0d2dbc60(lVar10,unaff_R15);
          uVar4 = uStack_3d0;
          uVar9 = uStack_3d8;
          uVar1 = (uStack_3d8 - uStack_3d0) + lVar10;
          if (uStack_3d8 - uStack_3d0 != 0) {
            lVar7 = 0;
            lStack_338 = param_2;
            do {
              *(undefined **)(uVar1 + lVar7) = &UNK_0f45f578;
              *(undefined1 *)(uVar1 + 8 + lVar7) = 0;
              *(undefined4 *)(uVar1 + 0x38 + lVar7) = 0xffffffff;
              uVar2 = *(uint *)(uVar9 + 0x38 + lVar7);
              if ((ulong)uVar2 != 0xffffffff) {
                apppuStack_118[0] = (undefined8 ***)(lVar7 + 8 + uVar1);
                (**(code **)(&UNK_0f45eb48 + (ulong)uVar2 * 8))(apppuStack_118,uVar9 + 8 + lVar7);
                *(uint *)(uVar1 + 0x38 + lVar7) = uVar2;
              }
              *(undefined **)(uVar1 + 0x40 + lVar7) = &UNK_0f45f578;
              *(undefined1 *)(uVar1 + 0x48 + lVar7) = 0;
              *(undefined4 *)(uVar1 + 0x78 + lVar7) = 0xffffffff;
              uVar2 = *(uint *)(uVar9 + 0x78 + lVar7);
              if ((ulong)uVar2 != 0xffffffff) {
                apppuStack_118[0] = (undefined8 ***)(lVar7 + 0x48 + uVar1);
                (**(code **)(&UNK_0f45eb48 + (ulong)uVar2 * 8))(apppuStack_118,uVar9 + 0x48 + lVar7)
                ;
                *(uint *)(uVar1 + 0x78 + lVar7) = uVar2;
              }
              *(undefined **)(uVar1 + 0x80 + lVar7) = &UNK_0f45f548;
              *(undefined1 *)(uVar1 + 0x88 + lVar7) = 0;
              *(undefined4 *)(uVar1 + 0xa8 + lVar7) = 0xffffffff;
              uVar2 = *(uint *)(uVar9 + 0xa8 + lVar7);
              if ((ulong)uVar2 != 0xffffffff) {
                apppuStack_118[0] = (undefined8 ***)(lVar7 + 0x88 + uVar1);
                (**(code **)(&UNK_0f45eb88 + (ulong)uVar2 * 8))(apppuStack_118,uVar9 + 0x88 + lVar7)
                ;
                *(uint *)(uVar1 + 0xa8 + lVar7) = uVar2;
              }
              *(undefined8 *)(uVar1 + 0xb0 + lVar7) = *(undefined8 *)(uVar9 + 0xb0 + lVar7);
              *(undefined **)(uVar1 + 0xb8 + lVar7) = &UNK_0f45f6c8;
              *(undefined1 *)(uVar1 + 0xc0 + lVar7) = 0;
              *(undefined4 *)(uVar1 + 0xe0 + lVar7) = 0xffffffff;
              uVar2 = *(uint *)(uVar9 + 0xe0 + lVar7);
              if ((ulong)uVar2 != 0xffffffff) {
                apppuStack_118[0] = (undefined8 ***)(lVar7 + 0xc0 + uVar1);
                (**(code **)(&UNK_0f45eba8 + (ulong)uVar2 * 8))(apppuStack_118,uVar9 + 0xc0 + lVar7)
                ;
                *(uint *)(uVar1 + 0xe0 + lVar7) = uVar2;
              }
              param_2 = lStack_338;
              lVar5 = lStack_348;
              lVar10 = uVar9 + lVar7;
              lVar7 = lVar7 + 0xe8;
            } while (lVar10 + 0xe8U != uVar4);
            lVar7 = uVar9 + 0x88;
            do {
              *(undefined **)(lVar7 + 0x30) = &UNK_0f45f6c8;
              if ((ulong)*(uint *)(lVar7 + 0x58) != 0xffffffff) {
                (**(code **)(&UNK_0f45eb98 + (ulong)*(uint *)(lVar7 + 0x58) * 8))
                          (apppuStack_118,lVar7 + 0x38);
              }
              *(undefined4 *)(lVar7 + 0x58) = 0xffffffff;
              *(undefined **)(lVar7 + -8) = &UNK_0f45f548;
              if ((ulong)*(uint *)(lVar7 + 0x20) != 0xffffffff) {
                (**(code **)(&UNK_0f45eb78 + (ulong)*(uint *)(lVar7 + 0x20) * 8))
                          (apppuStack_118,lVar7);
              }
              *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
              *(undefined **)(lVar7 + -0x48) = &UNK_0f45f578;
              if ((ulong)*(uint *)(lVar7 + -0x10) != 0xffffffff) {
                (**(code **)(&UNK_0f45eb18 + (ulong)*(uint *)(lVar7 + -0x10) * 8))
                          (apppuStack_118,lVar7 + -0x40);
              }
              *(undefined4 *)(lVar7 + -0x10) = 0xffffffff;
              *(undefined **)(lVar7 + -0x88) = &UNK_0f45f578;
              if ((ulong)*(uint *)(lVar7 + -0x50) != 0xffffffff) {
                (**(code **)(&UNK_0f45eb18 + (ulong)*(uint *)(lVar7 + -0x50) * 8))
                          (apppuStack_118,lVar7 + -0x80);
              }
              *(undefined4 *)(lVar7 + -0x50) = 0xffffffff;
              uVar9 = lVar7 + 0x60;
              lVar7 = lVar7 + 0xe8;
            } while (uVar9 != uVar4);
          }
          uVar9 = uVar6 * 0xe8 + lStack_330;
          uStack_3b8 = uStack_3b8 + lStack_330 + 0xe8;
          uVar6 = uStack_3b8;
          if (uStack_3d8 != 0) {
            lVar7 = uStack_3c8 - uStack_3d8;
            uVar6 = uStack_3d8;
            uStack_3d8 = uVar1;
            uStack_3c8 = uVar9;
            func_0x0412a280(uVar6,lVar7);
            uVar6 = uStack_3b8;
            uVar1 = uStack_3d8;
            uVar9 = uStack_3c8;
          }
        }
        uStack_3c8 = uVar9;
        uStack_3d8 = uVar1;
        uStack_3d0 = uVar6;
        FUN_05192430(&pppuStack_288);
      }
      if ((bStack_120 & 1) != 0) {
        ppuStack_160 = (undefined8 **)&UNK_0f45f578;
        if ((ulong)uStack_128 != 0xffffffff) {
          (**(code **)(&UNK_0f45eb18 + (ulong)uStack_128 * 8))(&pppuStack_288,auStack_158);
        }
      }
      param_2 = param_2 + 0x128;
    } while (param_2 != lVar5);
    uStack_358 = uStack_3c8;
    uStack_368 = (undefined4)uStack_3d8;
    uStack_364 = uStack_3d8._4_4_;
  }
  uStack_360 = CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0);
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  func_0x0d2bf880(uStack_340,&uStack_368);
  lVar5 = CONCAT44(uStack_364,uStack_368);
  if (lVar5 != 0) {
    lVar7 = uStack_360;
    if (lVar5 == uStack_360) {
      lVar10 = 0;
      lVar7 = lVar5;
    }
    else {
      do {
        lVar7 = lVar7 + -0xe8;
        FUN_05192430(lVar7);
      } while (lVar7 != lVar5);
      lVar7 = CONCAT44(uStack_364,uStack_368);
      lVar10 = uStack_3d8;
    }
    uStack_360 = lVar5;
    func_0x0412a280(lVar7,uStack_358 - lVar7);
    lVar5 = lVar10;
    lVar7 = uStack_3d0;
    if (lVar10 != 0) {
      while (lVar10 != lVar7) {
        FUN_05192430(lVar7 + -0xe8);
        lVar5 = uStack_3d8;
        lVar7 = lVar7 + -0xe8;
      }
      uStack_3d0 = lVar10;
      func_0x0412a280(lVar5,uStack_3c8 - lVar5);
    }
  }
  return;
}


