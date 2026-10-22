/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2cc080 (ELF vaddr 0xd1cc080)
 * Label: caller-of-callee
 * Body:  [[0d2cc080, 0d2cc149] [0d2cc150, 0d2cc2a1] [0d2cc2b0, 0d2cc2bc] [0d2cc2c0, 0d2cc9cb] [0d2cc9d0, 0d2ccacd] [0d2ccad0, 0d2ccbab] [0d2ccbb0, 0d2ccd8d] [0d2ccd90, 0d2ccdae] [0d2ccdb0, 0d2cce63] [0d2cce70, 0d2cceae] [0d2cceb0, 0d2ccf94] [0d2ccfa0, 0d2cd142] [0d2cd150, 0d2cd36e] [0d2cd370, 0d2cd3fb] [0d2cd400, 0d2cd444] [0d2cd450, 0d2cd6bf] [0d2cd768, 0d2cd78e] [0d2cd878, 0d2cd886] [0d2cd8a5, 0d2cd8c4]]
 * Ghidra: FUN_0d2cc080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0d2cc080(long *param_1,undefined8 *param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  ulong *puVar23;
  byte *pbVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  bool bVar30;
  byte *pbStack_638;
  long lStack_628;
  byte **ppbStack_618;
  byte *pbStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long *plStack_5c0;
  byte *pbStack_5b8;
  long lStack_5b0;
  byte *pbStack_5a8;
  undefined *puStack_5a0;
  byte bStack_598;
  long lStack_590;
  byte *pbStack_588;
  byte *pbStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined4 uStack_540;
  char cStack_538;
  byte *pbStack_530;
  byte *pbStack_528;
  byte *pbStack_520;
  byte *pbStack_518;
  undefined8 uStack_510;
  byte *pbStack_508;
  byte *pbStack_500;
  byte *pbStack_4f8;
  ulong uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  byte bStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined4 uStack_4a8;
  undefined *puStack_4a0;
  uint uStack_488;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  char cStack_470;
  undefined1 uStack_46f;
  undefined1 uStack_46e;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  ulong uStack_458;
  undefined1 uStack_450;
  uint uStack_3b0;
  byte *pbStack_3a8;
  undefined8 uStack_3a0;
  byte *pbStack_398;
  byte *pbStack_390;
  long *plStack_388;
  undefined8 uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar24 = (byte *)*param_2;
  pbVar26 = (byte *)param_2[1];
  plStack_5c0 = param_3;
  if ((long)pbVar26 - (long)pbVar24 == 0) goto LAB_0d2cc124;
  lVar15 = (long)pbVar26 - (long)pbVar24 >> 3;
  if ((ulong)(lVar15 * 0x4fa4fa4fa4fa4fa5) < 0xd20d20d20d20d3) {
    pbVar26 = (byte *)(lVar15 * 0x1111111111111118);
    pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pbVar26);
    if (pbVar16 == (byte *)0x0) goto LAB_0d2cd629;
LAB_0d2cc10a:
    *param_1 = (long)pbVar16;
    param_1[1] = (long)pbVar16;
    param_1[2] = (long)(pbVar26 + (long)pbVar16);
    pbVar24 = (byte *)*param_2;
    pbVar26 = (byte *)param_2[1];
LAB_0d2cc124:
    pbStack_5b8 = pbVar26;
    if (pbVar24 == pbVar26) {
      return param_1;
    }
    while( true ) {
      pbVar22 = (byte *)&uStack_468;
      cVar14 = func_0x0b5f94a0(pbVar24,0x1f,1,0);
      if (cVar14 != '\0') break;
      if ((*pbVar24 & 1) == 0) {
        pbStack_3a8 = pbVar24 + 1;
      }
      else {
        pbStack_3a8 = *(byte **)(pbVar24 + 0x10);
      }
      func_0x0b5c3630(1,3,0x1f,&UNK_012e9ccc,&pbStack_3a8);
LAB_0d2cc15d:
      pbVar24 = pbVar24 + 0x168;
      if (pbVar24 == pbVar26) {
        return param_1;
      }
    }
    bStack_598 = 0;
    uStack_550 = 0;
    uStack_548 = 0;
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_570 = 0;
    uStack_568 = 0;
    pbStack_580 = (byte *)0x0;
    uStack_578 = 0;
    lStack_590 = 0;
    pbStack_588 = (byte *)0x0;
    uStack_540 = 0x3f800000;
    cStack_538 = 0;
    pbStack_500 = (byte *)0x0;
    pbStack_4f8 = (byte *)0x0;
    uStack_510 = 0;
    pbStack_508 = (byte *)0x0;
    pbStack_520 = (byte *)0x0;
    pbStack_518 = (byte *)0x0;
    pbStack_530 = (byte *)0x0;
    pbStack_528 = (byte *)0x0;
    puStack_5a0 = &UNK_0f4604f0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4f0 = 0;
    uStack_4e8 = 0;
    bStack_4c0 = 0;
    puStack_4b8 = &UNK_0f45f520;
    puStack_4b0 = &UNK_0f460518;
    uStack_4a8 = 0;
    puStack_4a0 = &UNK_0d2d5840;
    uStack_488 = 0;
    uStack_480 = 0x7fffffff00000050;
    cStack_470 = '\0';
    uStack_46f = 0;
    uStack_46e = 0;
    uStack_478 = 0;
    uStack_474 = 0;
    if ((byte *)&uStack_578 != pbVar24) {
      if ((*pbVar24 & 1) == 0) {
        uStack_568 = *(undefined8 *)(pbVar24 + 0x10);
        uStack_578 = *(undefined8 *)pbVar24;
        uStack_570 = *(undefined8 *)(pbVar24 + 8);
      }
      else {
        FUN_04885070(&uStack_578,*(undefined8 *)(pbVar24 + 0x10),*(undefined8 *)(pbVar24 + 8));
      }
    }
    puVar23 = (ulong *)(pbVar24 + 0x18);
    if (&uStack_4f0 != puVar23) {
      bVar5 = (byte)*puVar23;
      if ((uStack_4f0 & 1) == 0) {
        if ((bVar5 & 1) == 0) {
          uStack_4e0 = *(undefined8 *)(pbVar24 + 0x28);
          uStack_4f0 = *puVar23;
          uStack_4e8 = *(undefined8 *)(pbVar24 + 0x20);
        }
        else {
          FUN_04885070(&uStack_4f0,*(undefined8 *)(pbVar24 + 0x28),*(undefined8 *)(pbVar24 + 0x20));
        }
      }
      else {
        bVar30 = (bVar5 & 1) != 0;
        pbVar26 = pbVar24 + 0x19;
        if (bVar30) {
          pbVar26 = *(byte **)(pbVar24 + 0x28);
        }
        uVar29 = (ulong)(bVar5 >> 1);
        if (bVar30) {
          uVar29 = *(ulong *)(pbVar24 + 0x20);
        }
        func_0x04885120(&uStack_4f0,pbVar26,uVar29);
      }
    }
    cStack_538 = (char)*(undefined4 *)(pbVar24 + 0xf0);
    if (9 < (byte)(cStack_538 - 1U)) {
      cStack_538 = '\0';
    }
    bStack_598 = pbVar24[0xf1];
    if (4 < bStack_598) {
      bStack_598 = 0;
    }
    puVar23 = (ulong *)(pbVar24 + 0xf8);
    if (&uStack_4d8 != puVar23) {
      bVar5 = (byte)*puVar23;
      if ((uStack_4d8 & 1) == 0) {
        if ((bVar5 & 1) == 0) {
          uStack_4c8 = *(undefined8 *)(pbVar24 + 0x108);
          uStack_4d8 = *puVar23;
          uStack_4d0 = *(undefined8 *)(pbVar24 + 0x100);
        }
        else {
          FUN_04885070(&uStack_4d8,*(undefined8 *)(pbVar24 + 0x108),*(undefined8 *)(pbVar24 + 0x100)
                      );
        }
      }
      else {
        bVar30 = (bVar5 & 1) != 0;
        pbVar26 = pbVar24 + 0xf9;
        if (bVar30) {
          pbVar26 = *(byte **)(pbVar24 + 0x108);
        }
        uVar29 = (ulong)(bVar5 >> 1);
        if (bVar30) {
          uVar29 = *(ulong *)(pbVar24 + 0x100);
        }
        func_0x04885120(&uStack_4d8,pbVar26,uVar29);
      }
    }
    bStack_4c0 = pbVar24[0x110];
    uStack_458 = *(ulong *)(pbVar24 + 0x124);
    uStack_468 = *(undefined ***)(pbVar24 + 0x114);
    uStack_460 = *(undefined4 *)(pbVar24 + 0x11c);
    uStack_45c = *(undefined4 *)(pbVar24 + 0x120);
    uStack_450 = 1;
    pbStack_3a8 = &UNK_0f45f520;
    uStack_3a0 = &UNK_0f460518;
    pbStack_398 = (byte *)((ulong)pbStack_398 & 0xffffffff00000000);
    pbStack_390 = &UNK_0d2d5840;
    uStack_378 = uStack_378 & 0xffffffff00000000;
    ppbStack_618 = &pbStack_3a8;
    if (uStack_458 >> 0x20 != 0xffffffff) {
      uStack_608 = &ppbStack_618;
      (**(code **)(&UNK_0f45ed60 + (uStack_458 >> 0x20) * 8))(&uStack_608,(long)&uStack_468 + 4);
      if ((ulong)uStack_488 == 0xffffffff) {
        if ((int)uStack_378 != -1) goto LAB_0d2cc530;
      }
      else {
        if ((int)uStack_378 == -1) {
          (**(code **)(&UNK_0f45ed90 + (ulong)uStack_488 * 8))(pbVar22,&puStack_4b0);
          uStack_488 = 0xffffffff;
        }
        else {
LAB_0d2cc530:
          uStack_468 = &puStack_4b0;
          (**(code **)(&UNK_0f45ee58 + (uStack_378 & 0xffffffff) * 8))
                    (pbVar22,uStack_468,&uStack_3a0);
        }
        pbStack_3a8 = &UNK_0f45f520;
        if ((uStack_378 & 0xffffffff) != 0xffffffff) {
          (**(code **)(&UNK_0f45ed90 + (uStack_378 & 0xffffffff) * 8))(pbVar22,&uStack_3a0);
        }
      }
      cStack_470 = (pbVar24[300] == 2) * '\x02';
      if (pbVar24[300] == 1) {
        cStack_470 = '\x01';
      }
      uStack_468 = (undefined **)((ulong)uStack_468 & 0xffffffffffffff00);
      uStack_3b0 = 0xffffffff;
      uVar7 = *(uint *)(pbVar24 + 0xe8);
      uVar29 = (ulong)uVar7;
      if (uVar29 == 0xffffffff) goto LAB_0d2cd651;
      pbStack_3a8 = pbVar22;
      (**(code **)(&UNK_0f45edb8 + uVar29 * 8))(&pbStack_3a8,pbVar24 + 0x30);
      uStack_600 = (byte *)((ulong)uStack_600 & 0xffffffff00000000);
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      uStack_5e8 = 0;
      uStack_5e0 = 0;
      uStack_5f8 = 0;
      uStack_5f0 = 0;
      uStack_608 = (byte ***)&UNK_0ef516f8;
      pbStack_3a8 = (byte *)&uStack_608;
      ppbStack_618 = &pbStack_3a8;
      uStack_3b0 = uVar7;
      uStack_3a0 = pbStack_3a8;
      pbStack_398 = pbStack_3a8;
      pbStack_390 = pbVar22;
      cVar14 = (**(code **)(&UNK_0f3957b0 + uVar29 * 8))(&ppbStack_618,pbVar22);
      if (cVar14 == '\0') {
        func_0x09a0a6e0(1,3,0,&UNK_011c9e5c);
      }
      func_0x04a6dda0(&uStack_608,plStack_5c0);
      lVar15 = (**(code **)(*plStack_5c0 + 0x18))();
      uStack_378 = 0;
      uStack_370 = 0;
      plStack_388 = (long *)0x0;
      uStack_380 = 0;
      pbStack_398 = (byte *)0x0;
      pbStack_390 = (byte *)0x0;
      pbStack_3a8 = (byte *)0x0;
      uStack_3a0 = (byte *)0x0;
      uStack_368 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_360 = 0;
      uStack_310 = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      uStack_2f8 = 0;
      uStack_2f0 = 0;
      uStack_308 = 0;
      uStack_300 = 0;
      uStack_2b8 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      uStack_260 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_208 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1b0 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_158 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_100 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_a8 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_50 = 0;
      puVar23 = *(ulong **)(lVar15 + 0x380);
      puVar8 = *(ulong **)(lVar15 + 0x388);
      pbStack_610 = pbVar24;
      lStack_358 = lVar15;
      if (puVar23 == puVar8) {
        lStack_628 = 0;
        pbVar26 = (byte *)0x0;
        pbStack_638 = (byte *)0x0;
      }
      else {
        lStack_628 = 0;
        pbStack_638 = (byte *)0x0;
        pbVar26 = (byte *)0x0;
        do {
          while (uVar29 = *puVar23, uVar29 != *(ulong *)(lVar15 + 0x3b8)) {
            uStack_378 = uVar29;
            cVar14 = func_0x0c5c3630(&uStack_608,&pbStack_3a8);
            lVar27 = lStack_628;
            if (cVar14 != '\0') {
              uVar6 = *(undefined2 *)(uVar29 + 0x168);
              if (pbVar26 < pbStack_638) {
                *(undefined2 *)pbVar26 = uVar6;
                pbVar26 = pbVar26 + 2;
                break;
              }
              lVar25 = (long)pbVar26 - lStack_628;
              lVar27 = lVar25 >> 1;
              if (lVar27 < -1) goto LAB_0d2cd642;
              uVar20 = (long)pbStack_638 - lStack_628;
              uVar29 = lVar27 + 1U;
              if (lVar27 + 1U < uVar20) {
                uVar29 = uVar20;
              }
              uVar28 = 0x7fffffffffffffff;
              if (uVar20 < 0x7ffffffffffffffe) {
                uVar28 = uVar29;
              }
              if ((long)uVar28 < 0) goto LAB_0d2cd647;
              lStack_5b0 = uVar28 * 2;
              lVar17 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
              if (lVar17 == 0) {
                FUN_0eec74c0(lStack_5b0,0);
              }
              pbStack_638 = (byte *)(lVar17 + uVar28 * 2);
              *(undefined2 *)(lVar17 + lVar25) = uVar6;
              pbVar26 = (byte *)(lVar17 + lVar25 + 2);
              lVar27 = lVar17 + lVar25 + lVar27 * -2;
              func_0x0eee2f00(lVar27,lStack_628,lVar25);
              if (lStack_628 != 0) {
                func_0x0412a280(lStack_628,uVar20);
              }
            }
            lStack_628 = lVar27;
            puVar23 = puVar23 + 1;
            pbVar22 = pbVar26;
            if (puVar23 == puVar8) goto LAB_0d2cca13;
          }
          pbVar22 = pbVar26;
          puVar23 = puVar23 + 1;
          pbVar26 = pbVar22;
        } while (puVar23 != puVar8);
      }
LAB_0d2cca13:
      func_0x049d2400(&uStack_608);
      if (lStack_590 != 0) {
        pbStack_588 = (byte *)lStack_590;
        func_0x0412a280(lStack_590,(long)pbStack_580 - lStack_590);
      }
      pbVar24 = pbStack_610;
      lStack_590 = lStack_628;
      pbStack_580 = pbStack_638;
      pbStack_588 = pbVar26;
      if ((ulong)uStack_3b0 != 0xffffffff) {
        (**(code **)(&UNK_0f45eda0 + (ulong)uStack_3b0 * 8))(&pbStack_3a8,&uStack_468);
      }
      uStack_3b0 = 0xffffffff;
      pbStack_3a8 = *(byte **)(pbVar24 + 0x130);
      uStack_3a0 = *(byte **)(pbVar24 + 0x138);
      if ((*(ulong *)(pbVar24 + 0x138) >> 0x20 & 1) != 0) {
        uVar29 = *(ulong *)(pbVar24 + 0x138) & 0xffffffff;
        if (uVar29 != 0xffffffff) {
          uStack_608 = &ppbStack_618;
          uVar18 = (**(code **)(&UNK_0f45edd0 + uVar29 * 8))(&uStack_608,&pbStack_3a8);
          goto LAB_0d2ccafc;
        }
        goto LAB_0d2cd6a7;
      }
      uVar18 = 0;
LAB_0d2ccafc:
      uStack_478 = (undefined4)uVar18;
      uStack_474 = (undefined4)((ulong)uVar18 >> 0x20);
      uStack_480 = *(undefined8 *)(pbVar24 + 0x140);
      pbStack_3a8 = (byte *)0x0;
      uStack_3a0 = (byte *)0x0;
      pbStack_398 = (byte *)0x0;
      param_2 = *(undefined8 **)(pbVar24 + 0x148);
      puVar9 = *(undefined8 **)(pbVar24 + 0x150);
      lVar15 = (long)puVar9 - (long)param_2;
      if (lVar15 == 0) {
LAB_0d2ccd90:
        pbVar16 = pbStack_508;
        pbVar26 = pbStack_500;
        if (pbStack_508 != (byte *)0x0) {
          for (; pbVar16 != pbVar26; pbVar26 = pbVar26 + -0x10) {
            plVar19 = *(long **)(pbVar26 + -8);
            if (plVar19 != (long *)0x0) {
              LOCK();
              plVar2 = plVar19 + 1;
              lVar15 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar15 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                func_0x0412c2d0(plVar19);
              }
            }
          }
          pbStack_500 = pbVar16;
          func_0x0412a280(pbStack_508,(long)pbStack_4f8 - (long)pbStack_508);
        }
        pbStack_508 = pbStack_3a8;
        pbStack_500 = uStack_3a0;
        pbStack_4f8 = pbStack_398;
        uStack_46e = pbVar24[0x160] == 1;
        pbStack_3a8 = (byte *)0x0;
        if ((*pbVar24 & 1) == 0) {
          pbStack_390 = *(byte **)(pbVar24 + 0x10);
          uStack_3a0 = *(byte **)pbVar24;
          pbStack_398 = *(byte **)(pbVar24 + 8);
        }
        else {
          func_0x0412e5e0(&uStack_3a0,*(undefined8 *)(pbVar24 + 0x10),*(undefined8 *)(pbVar24 + 8));
        }
        plStack_388 = (long *)0x0;
        if (((ulong)uStack_3a0 & 1) == 0) {
          if ((byte)uStack_3a0 >> 1 != 0) goto LAB_0d2ccebd;
LAB_0d2ccfa0:
          pbStack_3a8 = (byte *)0x0;
        }
        else {
          if (pbStack_398 == (byte *)0x0) goto LAB_0d2ccfa0;
LAB_0d2ccebd:
          pbVar26 = (byte *)((long)&uStack_3a0 + 1);
          if (((ulong)uStack_3a0 & 1) != 0) {
            pbVar26 = pbStack_390;
          }
          if (pbVar26 == (byte *)0x0) {
            pbStack_3a8 = (byte *)0x0;
          }
          else {
            if (*pbVar26 == 0) goto LAB_0d2ccfa0;
            uVar29 = strlen(pbVar26);
            pbStack_3a8 = (byte *)0xcbf29ce484222325;
            if (uVar29 != 0) {
              if (7 < uVar29) {
                uVar20 = uVar29 & 0xfffffffffffffff8;
                do {
                  pbStack_3a8 = (byte *)(((((((((long)pbStack_3a8 * 0x100000001b3 ^ (ulong)*pbVar26)
                                               * 0x100000001b3 ^ (ulong)pbVar26[1]) * 0x100000001b3
                                             ^ (ulong)pbVar26[2]) * 0x100000001b3 ^
                                            (ulong)pbVar26[3]) * 0x100000001b3 ^ (ulong)pbVar26[4])
                                           * 0x100000001b3 ^ (ulong)pbVar26[5]) * 0x100000001b3 ^
                                         (ulong)pbVar26[6]) * 0x100000001b3 ^ (ulong)pbVar26[7]);
                  pbVar26 = pbVar26 + 8;
                  uVar20 = uVar20 - 8;
                } while (uVar20 != 0);
              }
              if ((uVar29 & 7) != 0) {
                uVar20 = 0;
                do {
                  pbStack_3a8 = (byte *)((long)pbStack_3a8 * 0x100000001b3 ^ (ulong)pbVar26[uVar20])
                  ;
                  uVar20 = uVar20 + 1;
                } while (((uint)uVar29 & 7) != uVar20);
              }
            }
          }
        }
        if (((ulong)pbStack_528 & 1) != 0) {
          func_0x0412a280(pbStack_518,(ulong)pbStack_528 & 0xfffffffffffffffe);
        }
        pbStack_518 = pbStack_390;
        pbStack_528 = uStack_3a0;
        pbStack_520 = pbStack_398;
        uStack_510 = 0;
        puVar9 = (undefined8 *)param_1[1];
        pbStack_530 = pbStack_3a8;
        if (puVar9 < (undefined8 *)param_1[2]) {
          func_0x0d2e01b0(puVar9,&puStack_5a0);
          uVar7 = uStack_488;
          *puVar9 = &UNK_0f4604f0;
          puVar9[0x18] = uStack_4e0;
          puVar9[0x16] = uStack_4f0;
          puVar9[0x17] = uStack_4e8;
          uStack_4f0 = 0;
          uStack_4e8 = 0;
          uStack_4e0 = 0;
          puVar9[0x1b] = uStack_4c8;
          *(undefined4 *)(puVar9 + 0x19) = (undefined4)uStack_4d8;
          *(undefined4 *)((long)puVar9 + 0xcc) = uStack_4d8._4_4_;
          *(undefined4 *)(puVar9 + 0x1a) = (undefined4)uStack_4d0;
          *(undefined4 *)((long)puVar9 + 0xd4) = uStack_4d0._4_4_;
          uStack_4d8 = 0;
          uStack_4d0 = 0;
          uStack_4c8 = 0;
          *(byte *)(puVar9 + 0x1c) = bStack_4c0;
          puVar9[0x1d] = &UNK_0f45f520;
          *(undefined1 *)(puVar9 + 0x1e) = 0;
          *(undefined4 *)(puVar9 + 0x23) = 0xffffffff;
          if ((ulong)uStack_488 != 0xffffffff) {
            pbStack_3a8 = (byte *)(puVar9 + 0x1e);
            (**(code **)(&UNK_0f45ee48 + (ulong)uStack_488 * 8))(&pbStack_3a8,&puStack_4b0);
            *(uint *)(puVar9 + 0x23) = uVar7;
          }
          *(uint *)((long)puVar9 + 0x12f) =
               CONCAT13(uStack_46e,CONCAT12(uStack_46f,CONCAT11(cStack_470,uStack_474._3_1_)));
          *(undefined4 *)(puVar9 + 0x24) = (undefined4)uStack_480;
          *(undefined4 *)((long)puVar9 + 0x124) = uStack_480._4_4_;
          *(undefined4 *)(puVar9 + 0x25) = uStack_478;
          *(undefined4 *)((long)puVar9 + 300) = uStack_474;
          pbVar16 = (byte *)(puVar9 + 0x27);
LAB_0d2cd54a:
          pbVar26 = pbStack_5b8;
          param_1[1] = (long)pbVar16;
          puStack_5a0 = &UNK_0f4604f0;
          puStack_4b8 = &UNK_0f45f520;
          if ((ulong)uStack_488 != 0xffffffff) {
            (**(code **)(&UNK_0f45ed90 + (ulong)uStack_488 * 8))(&pbStack_3a8,&puStack_4b0);
          }
          uStack_488 = 0xffffffff;
          if ((uStack_4d8 & 1) != 0) {
            func_0x0412a280(uStack_4c8,uStack_4d8 & 0xfffffffffffffffe);
          }
          if ((uStack_4f0 & 1) != 0) {
            func_0x0412a280(uStack_4e0,uStack_4f0 & 0xfffffffffffffffe);
          }
          func_0x0d2de2e0(&puStack_5a0);
          goto LAB_0d2cc15d;
        }
        lVar15 = (long)puVar9 - *param_1;
        uVar29 = (lVar15 >> 3) * 0x6f96f96f96f96f97 + 1;
        if (uVar29 < 0xd20d20d20d20d3) {
          lVar27 = param_1[2] - *param_1 >> 3;
          uVar20 = lVar27 * -0x20d20d20d20d20d2;
          if (uVar29 < uVar20) {
            uVar29 = uVar20;
          }
          if (0x69069069069068 < (ulong)(lVar27 * 0x6f96f96f96f96f97)) {
            uVar29 = 0xd20d20d20d20d2;
          }
          plStack_388 = param_1;
          if (uVar29 == 0) {
            pbVar26 = (byte *)0x0;
LAB_0d2cd1ee:
            pbVar16 = pbVar26 + lVar15;
            pbStack_390 = pbVar26 + uVar29 * 0x138;
            pbStack_3a8 = pbVar26;
            uStack_3a0 = pbVar16;
            pbStack_398 = pbVar16;
            func_0x0d2e01b0(pbVar16,&puStack_5a0);
            uVar7 = uStack_488;
            *(undefined **)pbVar16 = &UNK_0f4604f0;
            *(undefined8 *)(pbVar16 + 0xc0) = uStack_4e0;
            *(ulong *)(pbVar16 + 0xb0) = uStack_4f0;
            *(undefined8 *)(pbVar16 + 0xb8) = uStack_4e8;
            uStack_4f0 = 0;
            uStack_4e8 = 0;
            uStack_4e0 = 0;
            *(undefined8 *)(pbVar16 + 0xd8) = uStack_4c8;
            *(undefined4 *)(pbVar16 + 200) = (undefined4)uStack_4d8;
            *(undefined4 *)(pbVar16 + 0xcc) = uStack_4d8._4_4_;
            *(undefined4 *)(pbVar16 + 0xd0) = (undefined4)uStack_4d0;
            *(undefined4 *)(pbVar16 + 0xd4) = uStack_4d0._4_4_;
            uStack_4d8 = 0;
            uStack_4d0 = 0;
            uStack_4c8 = 0;
            pbVar16[0xe0] = bStack_4c0;
            *(undefined **)(pbVar16 + 0xe8) = &UNK_0f45f520;
            pbVar16[0xf0] = 0;
            pbVar16[0x118] = 0xff;
            pbVar16[0x119] = 0xff;
            pbVar16[0x11a] = 0xff;
            pbVar16[0x11b] = 0xff;
            if ((ulong)uStack_488 != 0xffffffff) {
              uStack_468 = (undefined **)(pbVar16 + 0xf0);
              (**(code **)(&UNK_0f45ee48 + (ulong)uStack_488 * 8))(&uStack_468,&puStack_4b0);
              *(uint *)(pbVar16 + 0x118) = uVar7;
            }
            *(uint *)(pbVar16 + 0x12f) =
                 CONCAT13(uStack_46e,CONCAT12(uStack_46f,CONCAT11(cStack_470,uStack_474._3_1_)));
            *(undefined4 *)(pbVar16 + 0x120) = (undefined4)uStack_480;
            *(undefined4 *)(pbVar16 + 0x124) = uStack_480._4_4_;
            *(undefined4 *)(pbVar16 + 0x128) = uStack_478;
            *(undefined4 *)(pbVar16 + 300) = uStack_474;
            pbVar16 = pbStack_398 + 0x138;
            puVar21 = (undefined8 *)*param_1;
            puVar9 = (undefined8 *)param_1[1];
            lVar15 = (long)uStack_3a0 - ((long)puVar9 - (long)puVar21);
            pbStack_398 = pbVar16;
            if (puVar9 != puVar21) {
              lVar27 = 0;
              do {
                func_0x0d2e01b0(lVar15 + lVar27,(long)puVar21 + lVar27);
                *(undefined **)(lVar15 + lVar27) = &UNK_0f4604f0;
                lVar25 = lVar15 + lVar27;
                if ((*(byte *)((long)puVar21 + lVar27 + 0xb0) & 1) == 0) {
                  *(undefined8 *)(lVar25 + 0xc0) = *(undefined8 *)((long)puVar21 + lVar27 + 0xc0);
                  uVar11 = *(undefined4 *)((long)puVar21 + lVar27 + 0xb4);
                  uVar12 = *(undefined4 *)((long)puVar21 + lVar27 + 0xb8);
                  uVar13 = *(undefined4 *)((long)puVar21 + lVar27 + 0xbc);
                  *(undefined4 *)(lVar25 + 0xb0) = *(undefined4 *)((long)puVar21 + lVar27 + 0xb0);
                  *(undefined4 *)(lVar25 + 0xb4) = uVar11;
                  *(undefined4 *)(lVar25 + 0xb8) = uVar12;
                  *(undefined4 *)(lVar25 + 0xbc) = uVar13;
                }
                else {
                  func_0x0412e5e0((undefined4 *)(lVar25 + 0xb0),
                                  *(undefined8 *)((long)puVar21 + lVar27 + 0xc0),
                                  *(undefined8 *)((long)puVar21 + lVar27 + 0xb8));
                }
                lVar25 = lVar15 + lVar27;
                if ((*(byte *)((long)puVar21 + lVar27 + 200) & 1) == 0) {
                  *(undefined8 *)(lVar25 + 0xd8) = *(undefined8 *)((long)puVar21 + lVar27 + 0xd8);
                  uVar11 = *(undefined4 *)((long)puVar21 + lVar27 + 0xcc);
                  uVar12 = *(undefined4 *)((long)puVar21 + lVar27 + 0xd0);
                  uVar13 = *(undefined4 *)((long)puVar21 + lVar27 + 0xd4);
                  *(undefined4 *)(lVar25 + 200) = *(undefined4 *)((long)puVar21 + lVar27 + 200);
                  *(undefined4 *)(lVar25 + 0xcc) = uVar11;
                  *(undefined4 *)(lVar25 + 0xd0) = uVar12;
                  *(undefined4 *)(lVar25 + 0xd4) = uVar13;
                }
                else {
                  func_0x0412e5e0((undefined4 *)(lVar25 + 200),
                                  *(undefined8 *)((long)puVar21 + lVar27 + 0xd8),
                                  *(undefined8 *)((long)puVar21 + lVar27 + 0xd0));
                }
                *(undefined1 *)(lVar15 + 0xe0 + lVar27) =
                     *(undefined1 *)((long)puVar21 + lVar27 + 0xe0);
                *(undefined **)(lVar15 + 0xe8 + lVar27) = &UNK_0f45f520;
                *(undefined1 *)(lVar15 + 0xf0 + lVar27) = 0;
                *(undefined4 *)(lVar15 + 0x118 + lVar27) = 0xffffffff;
                uVar7 = *(uint *)((long)puVar21 + lVar27 + 0x118);
                if ((ulong)uVar7 != 0xffffffff) {
                  uStack_468 = (undefined **)(lVar15 + lVar27 + 0xf0);
                  (**(code **)(&UNK_0f45ee38 + (ulong)uVar7 * 8))
                            (&uStack_468,(long)puVar21 + lVar27 + 0xf0);
                  *(uint *)(lVar15 + 0x118 + lVar27) = uVar7;
                }
                pbVar24 = pbStack_610;
                *(undefined4 *)(lVar15 + 0x12f + lVar27) =
                     *(undefined4 *)((long)puVar21 + lVar27 + 0x12f);
                puVar3 = (undefined4 *)((long)puVar21 + lVar27 + 0x120);
                uVar11 = puVar3[1];
                uVar12 = puVar3[2];
                uVar13 = puVar3[3];
                puVar4 = (undefined4 *)(lVar15 + 0x120 + lVar27);
                *puVar4 = *puVar3;
                puVar4[1] = uVar11;
                puVar4[2] = uVar12;
                puVar4[3] = uVar13;
                lVar25 = lVar27 + 0x138;
                lVar27 = lVar27 + 0x138;
              } while ((undefined8 *)((long)puVar21 + lVar25) != puVar9);
              do {
                (**(code **)*puVar21)(puVar21);
                puVar21 = puVar21 + 0x27;
              } while (puVar21 != puVar9);
              puVar21 = (undefined8 *)*param_1;
            }
            *param_1 = lVar15;
            param_1[1] = (long)pbVar16;
            lVar15 = param_1[2];
            param_1[2] = (long)pbStack_390;
            if (puVar21 != (undefined8 *)0x0) {
              func_0x0412a280(puVar21,lVar15 - (long)puVar21);
            }
            goto LAB_0d2cd54a;
          }
          if (uVar29 < 0xd20d20d20d20d3) {
            pbVar26 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x138);
            if (pbVar26 == (byte *)0x0) {
              FUN_0eec74c0(uVar29 * 0x138,0);
              pbVar26 = (byte *)0x0;
            }
            goto LAB_0d2cd1ee;
          }
          goto LAB_0d2cd6b1;
        }
        goto LAB_0d2cd6ac;
      }
      lVar15 = lVar15 >> 3;
      if (0xfffffffffffffff < (ulong)(lVar15 * 0x6db6db6db6db6db7)) goto LAB_0d2cd6a2;
      lVar15 = lVar15 * -0x2492492492492490;
      pbVar16 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar15);
      if (pbVar16 == (byte *)0x0) {
        FUN_0eec74c0(lVar15,0);
      }
      pbVar26 = pbVar16 + lVar15;
      pbStack_3a8 = pbVar16;
      uStack_3a0 = pbVar16;
      pbStack_398 = pbVar26;
      while( true ) {
        pbVar22 = (byte *)0x100000001b3;
        uStack_608 = (byte ***)0x0;
        uStack_600 = (byte *)0x0;
        pbStack_5a8 = (byte *)&uStack_608;
        if ((ulong)*(uint *)(param_2 + 6) == 0xffffffff) break;
        ppbStack_618 = &pbStack_5a8;
        (**(code **)(&UNK_0f45ede0 + (ulong)*(uint *)(param_2 + 6) * 8))(&ppbStack_618);
        pbVar1 = pbStack_3a8;
        if (pbStack_398 <= uStack_3a0) {
          lVar15 = (long)uStack_3a0 - (long)pbStack_3a8;
          pbVar24 = (byte *)((lVar15 >> 4) + 1);
          if (pbVar24 < (byte *)0x1000000000000000) {
            pbVar26 = pbStack_398 + -(long)pbStack_3a8;
            pbVar22 = (byte *)((long)pbVar26 >> 3);
            if ((byte *)((long)pbVar26 >> 3) <= pbVar24) {
              pbVar22 = pbVar24;
            }
            if ((byte *)0x7fffffffffffffef < pbVar26) {
              pbVar22 = (byte *)0xfffffffffffffff;
            }
            if (pbVar22 < (byte *)0x1000000000000000) {
              lVar25 = (long)pbVar22 * 0x10;
              lVar27 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar25);
              if (lVar27 == 0) {
                FUN_0eec74c0(lVar25,0);
              }
              *(undefined8 *)(lVar27 + lVar15) = uStack_608;
              ((undefined8 *)(lVar27 + lVar15))[1] = uStack_600;
              uStack_608 = (byte ***)0x0;
              uStack_600 = (byte *)0x0;
              pbVar16 = (byte *)(lVar27 + lVar15 + 0x10);
              pbVar22 = (byte *)(lVar27 + lVar15 + (lVar15 >> 4) * -0x10);
              func_0x0eee2f00(pbVar22,pbVar1,lVar15);
              pbVar24 = pbStack_610;
              pbStack_3a8 = pbVar22;
              pbVar22 = pbVar16;
              pbStack_398 = (byte *)(lVar25 + lVar27);
              if ((pbVar1 != (byte *)0x0) &&
                 (func_0x0412a280(pbVar1), pbVar26 = uStack_600, pbVar24 = pbStack_610,
                 uStack_600 != (byte *)0x0)) {
                LOCK();
                pbVar1 = uStack_600 + 8;
                lVar15 = *(long *)pbVar1;
                *(long *)pbVar1 = *(long *)pbVar1 + -1;
                UNLOCK();
                if (lVar15 == 0) {
                  uStack_3a0 = pbVar16;
                  (**(code **)(*(long *)uStack_600 + 0x10))(uStack_600);
                  func_0x0412c2d0(pbVar26);
                  pbVar22 = uStack_3a0;
                }
              }
              goto LAB_0d2ccbc6;
            }
          }
          else {
            func_0x0d2de6d0();
          }
          func_0x04882eb0();
LAB_0d2cd642:
          func_0x049ce220();
LAB_0d2cd647:
          func_0x04882eb0();
          goto LAB_0d2cd64c;
        }
        *(undefined4 *)uStack_3a0 = (undefined4)uStack_608;
        *(undefined4 *)(uStack_3a0 + 4) = uStack_608._4_4_;
        *(undefined4 *)(uStack_3a0 + 8) = (undefined4)uStack_600;
        *(undefined4 *)(uStack_3a0 + 0xc) = uStack_600._4_4_;
        pbVar26 = pbStack_398;
        pbVar22 = uStack_3a0 + 0x10;
LAB_0d2ccbc6:
        uStack_3a0 = pbVar22;
        param_2 = param_2 + 7;
        if (param_2 == puVar9) goto LAB_0d2ccd90;
      }
      func_0x04931450();
LAB_0d2cd629:
      FUN_0eec74c0(pbVar26,0);
      goto LAB_0d2cc10a;
    }
LAB_0d2cd64c:
    func_0x04931450();
LAB_0d2cd651:
    uStack_600 = (byte *)((ulong)uStack_600 & 0xffffffff00000000);
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_608 = (byte ***)&UNK_0ef516f8;
    pbStack_3a8 = (byte *)&uStack_608;
    uStack_3a0 = pbStack_3a8;
    pbStack_398 = pbStack_3a8;
    pbStack_390 = pbVar22;
    func_0x04931450();
LAB_0d2cd6a2:
    func_0x0d2de6d0();
LAB_0d2cd6a7:
    func_0x04931450();
LAB_0d2cd6ac:
    func_0x0d2e0140();
LAB_0d2cd6b1:
    func_0x04882eb0();
  }
  uVar18 = func_0x0d2e0140();
  func_0x0d2cd8d0(param_1);
  uVar18 = func_0x0eee2d70(uVar18);
  func_0x049d2400(&uStack_608);
  func_0x05472b20(&uStack_468);
  func_0x0d2c81e0(&puStack_5a0);
  func_0x0d2cd8d0(param_1);
  func_0x0eee2d70(uVar18);
  pcVar10 = (code *)swi(3);
  plVar19 = (long *)(*pcVar10)();
  return plVar19;
}


