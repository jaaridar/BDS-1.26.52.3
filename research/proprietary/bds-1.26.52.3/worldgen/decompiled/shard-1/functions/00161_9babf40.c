/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x9cabf40 (ELF vaddr 0x9babf40)
 * Label: caller-of-callee
 * Body:  [[09cabf40, 09cac6b1] [09cac6c0, 09caccb0] [09caccc0, 09cadde8] [09caddf0, 09cae471] [09cae770, 09cae808]]
 * Ghidra: FUN_09cabf40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_09cabf40(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  int iVar7;
  ulong *puVar8;
  byte *pbVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  byte bStack_498;
  undefined1 uStack_497;
  undefined2 uStack_496;
  undefined1 uStack_494;
  undefined2 uStack_493;
  undefined1 uStack_491;
  undefined4 uStack_490;
  undefined1 uStack_48c;
  undefined1 uStack_48b;
  undefined1 uStack_48a;
  undefined1 uStack_489;
  undefined1 uStack_488;
  undefined2 uStack_487;
  undefined1 uStack_485;
  undefined1 uStack_484;
  undefined1 uStack_483;
  undefined1 uStack_482;
  undefined1 uStack_481;
  ulong uStack_480;
  byte bStack_478;
  undefined4 uStack_477;
  undefined2 uStack_473;
  undefined1 uStack_471;
  undefined8 uStack_468;
  undefined *puStack_460;
  undefined4 uStack_458;
  undefined8 uStack_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined2 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong *puStack_418;
  ulong *puStack_410;
  ulong *puStack_408;
  undefined8 uStack_400;
  uint uStack_3f8;
  undefined1 uStack_3f4;
  undefined1 uStack_3f3;
  undefined2 uStack_3f2;
  undefined1 uStack_3f0;
  undefined2 uStack_3ef;
  undefined1 uStack_3ed;
  undefined1 uStack_3ec;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined4 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined2 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_398;
  byte bStack_390;
  undefined1 uStack_38f;
  undefined5 uStack_38e;
  undefined1 uStack_389;
  undefined1 uStack_388;
  undefined6 uStack_387;
  undefined1 uStack_381;
  undefined8 uStack_380;
  undefined8 uStack_378;
  byte bStack_370;
  undefined4 uStack_36f;
  undefined4 uStack_36b;
  uint uStack_367;
  undefined1 uStack_363;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined2 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  byte *pbStack_318;
  byte *pbStack_310;
  byte *pbStack_308;
  undefined8 uStack_300;
  byte bStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined1 uStack_2ef;
  undefined6 uStack_2ee;
  undefined1 uStack_2e8;
  undefined2 uStack_2e7;
  undefined5 uStack_2e5;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined2 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong *puStack_298;
  ulong uStack_290;
  ulong *puStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  undefined8 uStack_270;
  byte bStack_268;
  undefined4 uStack_267;
  undefined4 uStack_263;
  undefined3 uStack_25f;
  undefined1 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined2 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  short asStack_208 [4];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte bStack_1e8;
  undefined7 uStack_1e7;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined2 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  short asStack_190 [4];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte bStack_170;
  undefined6 uStack_16f;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined6 uStack_167;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte bStack_e8;
  undefined6 uStack_e7;
  undefined1 uStack_e1;
  undefined1 uStack_e0;
  undefined6 uStack_df;
  undefined1 uStack_d9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  undefined *puStack_78;
  undefined *puStack_70;
  
  bStack_498 = 10;
  uStack_497 = 0x70;
  uStack_496 = 0x616c;
  uStack_494 = 99;
  uStack_493 = 0x65;
  func_0x09d9d8e0(param_1,&bStack_498,&UNK_011f7da6,2,0,0);
  if ((bStack_498 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_481,
                             CONCAT16(uStack_482,
                                      CONCAT15(uStack_483,
                                               CONCAT14(uStack_484,
                                                        CONCAT13(uStack_485,
                                                                 CONCAT21(uStack_487,uStack_488)))))
                            ),
                    CONCAT17(uStack_491,
                             CONCAT25(uStack_493,
                                      CONCAT14(uStack_494,
                                               CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_498 = 0x28;
  uStack_497 = (undefined1)_DAT_012c7ff4;
  uStack_496 = (undefined2)((ulong)_DAT_012c7ff4 >> 8);
  uStack_494 = (undefined1)((ulong)_DAT_012c7ff4 >> 0x18);
  uStack_493 = (undefined2)((ulong)_DAT_012c7ff4 >> 0x20);
  uStack_491 = (undefined1)((ulong)_DAT_012c7ff4 >> 0x30);
  uStack_490._0_1_ = (undefined1)((ulong)_DAT_012c7ff4 >> 0x38);
  uStack_490._1_3_ = (undefined3)_UNK_012c7ffc;
  uStack_48c = (undefined1)((ulong)_UNK_012c7ffc >> 0x18);
  uStack_48b = (undefined1)((ulong)_UNK_012c7ffc >> 0x20);
  uStack_48a = (undefined1)((ulong)_UNK_012c7ffc >> 0x28);
  uStack_489 = (undefined1)((ulong)_UNK_012c7ffc >> 0x30);
  uStack_488 = (undefined1)((ulong)_UNK_012c7ffc >> 0x38);
  uStack_487 = 0x6974;
  uStack_485 = 0x6f;
  uStack_484 = 0x6e;
  uStack_483 = 0;
  puStack_418 = (ulong *)0x0;
  puStack_410 = (ulong *)0x0;
  puStack_408 = (ulong *)0x0;
  puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (ulong *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puStack_410 = puVar8 + 4;
  *puVar8 = 0x7574637572747312;
  puVar8[1] = 0x6572;
  *(undefined4 *)(puVar8 + 3) = 0;
  puStack_418 = puVar8;
  puStack_408 = puStack_410;
  func_0x09cae810(param_1,&bStack_498,puVar8);
  if ((*puVar8 & 1) != 0) {
    func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar8,0x20);
  if ((bStack_498 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_481,
                             CONCAT16(uStack_482,
                                      CONCAT15(uStack_483,
                                               CONCAT14(uStack_484,
                                                        CONCAT13(uStack_485,
                                                                 CONCAT21(uStack_487,uStack_488)))))
                            ),
                    CONCAT17(uStack_491,
                             CONCAT25(uStack_493,
                                      CONCAT14(uStack_494,
                                               CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_498 = 0x22;
  uStack_497 = (undefined1)_DAT_01367a64;
  uStack_496 = (undefined2)((ulong)_DAT_01367a64 >> 8);
  uStack_494 = (undefined1)((ulong)_DAT_01367a64 >> 0x18);
  uStack_493 = (undefined2)((ulong)_DAT_01367a64 >> 0x20);
  uStack_491 = (undefined1)((ulong)_DAT_01367a64 >> 0x30);
  uStack_490._0_1_ = (undefined1)((ulong)_DAT_01367a64 >> 0x38);
  uStack_490._1_3_ = (undefined3)_UNK_01367a6c;
  uStack_48c = (undefined1)((ulong)_UNK_01367a6c >> 0x18);
  uStack_48b = (undefined1)((ulong)_UNK_01367a6c >> 0x20);
  uStack_48a = (undefined1)((ulong)_UNK_01367a6c >> 0x28);
  uStack_489 = (undefined1)((ulong)_UNK_01367a6c >> 0x30);
  uStack_488 = (undefined1)((ulong)_UNK_01367a6c >> 0x38);
  uStack_487 = 0x6e;
  puStack_418 = (ulong *)0x0;
  puStack_410 = (ulong *)0x0;
  puStack_408 = (ulong *)0x0;
  puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar8 == (ulong *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  puStack_410 = puVar8 + 4;
  *puVar8 = 0x77617367696a0c;
  *(undefined4 *)(puVar8 + 3) = 1;
  puStack_418 = puVar8;
  puStack_408 = puStack_410;
  func_0x09cae810(param_1,&bStack_498,puVar8);
  if ((*puVar8 & 1) != 0) {
    func_0x0412a280(puVar8[2],*puVar8 & 0xfffffffffffffffe);
  }
  lStack_110 = param_2;
  func_0x0412a280(puVar8,0x20);
  if ((bStack_498 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_481,
                             CONCAT16(uStack_482,
                                      CONCAT15(uStack_483,
                                               CONCAT14(uStack_484,
                                                        CONCAT13(uStack_485,
                                                                 CONCAT21(uStack_487,uStack_488)))))
                            ),
                    CONCAT17(uStack_491,
                             CONCAT25(uStack_493,
                                      CONCAT14(uStack_494,
                                               CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))
                                     )) & 0xfffffffffffffffe);
  }
  bStack_390 = 0x1c;
  uStack_38f = 0x4c;
  uStack_38e = 0x6469757169;
  uStack_389 = 0x53;
  uStack_388 = 0x65;
  uStack_387 = 0x73676e697474;
  uStack_381 = 0;
  pbStack_318 = (byte *)0x0;
  pbStack_310 = (byte *)0x0;
  pbStack_308 = (byte *)0x0;
  pbVar9 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (pbVar9 == (byte *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  pbStack_310 = pbVar9 + 0x40;
  pbVar9[0] = 0x24;
  pbVar9[1] = 0x61;
  pbVar9[2] = 0x70;
  pbVar9[3] = 0x70;
  pbVar9[4] = 0x6c;
  pbVar9[5] = 0x79;
  pbVar9[6] = 0x5f;
  pbVar9[7] = 0x77;
  pbVar9[8] = 0x61;
  pbVar9[9] = 0x74;
  pbVar9[10] = 0x65;
  pbVar9[0xb] = 0x72;
  pbVar9[0xc] = 0x6c;
  pbVar9[0xd] = 0x6f;
  pbVar9[0xe] = 0x67;
  pbVar9[0xf] = 0x67;
  pbVar9[0x10] = 0x69;
  pbVar9[0x11] = 0x6e;
  pbVar9[0x12] = 0x67;
  pbVar9[0x13] = 0;
  pbVar9[0x14] = 0;
  pbVar9[0x15] = 0;
  pbVar9[0x16] = 0;
  pbVar9[0x17] = 0;
  pbVar9[0x18] = 0;
  pbVar9[0x20] = 0x26;
  pbVar9[0x21] = 0x69;
  pbVar9[0x22] = 0x67;
  pbVar9[0x23] = 0x6e;
  pbVar9[0x24] = 0x6f;
  pbVar9[0x25] = 0x72;
  pbVar9[0x26] = 0x65;
  pbVar9[0x27] = 0x5f;
  pbVar9[0x28] = 0x77;
  pbVar9[0x29] = 0x61;
  pbVar9[0x2a] = 0x74;
  pbVar9[0x2b] = 0x65;
  pbVar9[0x2c] = 0x72;
  pbVar9[0x2d] = 0x6c;
  pbVar9[0x2e] = 0x6f;
  pbVar9[0x2f] = 0x67;
  pbVar9[0x30] = 0x67;
  pbVar9[0x31] = 0x69;
  pbVar9[0x32] = 0x6e;
  pbVar9[0x33] = 0x67;
  pbVar9[0x34] = 0;
  pbVar9[0x35] = 0;
  pbVar9[0x36] = 0;
  pbVar9[0x37] = 0;
  pbVar9[0x38] = 1;
  puStack_418 = (ulong *)0x0;
  puStack_410 = (ulong *)0x0;
  puStack_408 = (ulong *)0x0;
  pbStack_318 = pbVar9;
  pbStack_308 = pbStack_310;
  puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (puVar8 == (ulong *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  puStack_408 = puVar8 + 8;
  uVar12 = (ulong)pbVar9[0x18];
  puStack_410 = puVar8;
  uStack_480 = uVar12;
  puStack_418 = puVar8;
  uStack_398 = param_1;
  if ((*pbVar9 & 1) == 0) {
    uVar14 = *(undefined8 *)(pbVar9 + 0x10);
    uStack_488 = (undefined1)uVar14;
    uStack_487 = (undefined2)((ulong)uVar14 >> 8);
    uStack_485 = (undefined1)((ulong)uVar14 >> 0x18);
    uStack_484 = (undefined1)((ulong)uVar14 >> 0x20);
    uStack_483 = (undefined1)((ulong)uVar14 >> 0x28);
    uStack_482 = (undefined1)((ulong)uVar14 >> 0x30);
    uStack_481 = (undefined1)((ulong)uVar14 >> 0x38);
    uVar14 = *(undefined8 *)pbVar9;
    uVar5 = *(undefined8 *)(pbVar9 + 8);
    bStack_498 = (byte)uVar14;
    uStack_497 = (undefined1)((ulong)uVar14 >> 8);
    uStack_496 = (undefined2)((ulong)uVar14 >> 0x10);
    uStack_494 = (undefined1)((ulong)uVar14 >> 0x20);
    uStack_493 = (undefined2)((ulong)uVar14 >> 0x28);
    uStack_491 = (undefined1)((ulong)uVar14 >> 0x38);
    uStack_490 = (undefined4)uVar5;
    uStack_48c = (undefined1)((ulong)uVar5 >> 0x20);
    uStack_48b = (undefined1)((ulong)uVar5 >> 0x28);
    uStack_48a = (undefined1)((ulong)uVar5 >> 0x30);
    uStack_489 = (undefined1)((ulong)uVar5 >> 0x38);
LAB_09cac2d7:
    puStack_410[2] =
         CONCAT17(uStack_481,
                  CONCAT16(uStack_482,
                           CONCAT15(uStack_483,
                                    CONCAT14(uStack_484,
                                             CONCAT13(uStack_485,CONCAT21(uStack_487,uStack_488)))))
                 );
    *(uint *)puStack_410 = CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498));
    *(uint *)((long)puStack_410 + 4) = CONCAT13(uStack_491,CONCAT21(uStack_493,uStack_494));
    *(undefined4 *)(puStack_410 + 1) = uStack_490;
    *(uint *)((long)puStack_410 + 0xc) =
         CONCAT13(uStack_489,CONCAT12(uStack_48a,CONCAT11(uStack_48b,uStack_48c)));
    puStack_410[3] = uVar12;
    puStack_410 = puStack_410 + 4;
LAB_09cac300:
    uVar12 = (ulong)pbVar9[0x38];
    if ((pbVar9[0x20] & 1) == 0) {
      uVar14 = *(undefined8 *)(pbVar9 + 0x30);
      uStack_488 = (undefined1)uVar14;
      uStack_487 = (undefined2)((ulong)uVar14 >> 8);
      uStack_485 = (undefined1)((ulong)uVar14 >> 0x18);
      uStack_484 = (undefined1)((ulong)uVar14 >> 0x20);
      uStack_483 = (undefined1)((ulong)uVar14 >> 0x28);
      uStack_482 = (undefined1)((ulong)uVar14 >> 0x30);
      uStack_481 = (undefined1)((ulong)uVar14 >> 0x38);
      uVar2 = *(undefined4 *)(pbVar9 + 0x20);
      uVar3 = *(undefined4 *)(pbVar9 + 0x24);
      uStack_490 = *(undefined4 *)(pbVar9 + 0x28);
      uVar4 = *(undefined4 *)(pbVar9 + 0x2c);
      bStack_498 = (byte)uVar2;
      uStack_497 = (undefined1)((uint)uVar2 >> 8);
      uStack_496 = (undefined2)((uint)uVar2 >> 0x10);
      uStack_494 = (undefined1)uVar3;
      uStack_493 = (undefined2)((uint)uVar3 >> 8);
      uStack_491 = (undefined1)((uint)uVar3 >> 0x18);
      uStack_48c = (undefined1)uVar4;
      uStack_48b = (undefined1)((uint)uVar4 >> 8);
      uStack_48a = (undefined1)((uint)uVar4 >> 0x10);
      uStack_489 = (undefined1)((uint)uVar4 >> 0x18);
    }
    else {
      func_0x0412e5e0(&bStack_498,*(undefined8 *)(pbVar9 + 0x30),*(undefined8 *)(pbVar9 + 0x28));
    }
    uStack_480 = uVar12;
    if (puStack_410 < puStack_408) {
      puStack_410[2] =
           CONCAT17(uStack_481,
                    CONCAT16(uStack_482,
                             CONCAT15(uStack_483,
                                      CONCAT14(uStack_484,
                                               CONCAT13(uStack_485,CONCAT21(uStack_487,uStack_488)))
                                     )));
      *puStack_410 = CONCAT17(uStack_491,
                              CONCAT25(uStack_493,
                                       CONCAT14(uStack_494,
                                                CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498))
                                               )));
      puStack_410[1] =
           CONCAT17(uStack_489,
                    CONCAT16(uStack_48a,CONCAT15(uStack_48b,CONCAT14(uStack_48c,uStack_490))));
      bStack_498 = 0;
      uStack_497 = 0;
      uStack_496 = 0;
      uStack_494 = 0;
      uStack_493 = 0;
      uStack_491 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_48b = 0;
      uStack_48a = 0;
      uStack_489 = 0;
      uStack_488 = 0;
      uStack_487 = 0;
      uStack_485 = 0;
      uStack_484 = 0;
      uStack_483 = 0;
      uStack_482 = 0;
      uStack_481 = 0;
      puStack_410[3] = uVar12;
      puStack_410 = puStack_410 + 4;
LAB_09cac628:
      if (DAT_0f649778 == '\0') goto LAB_09cadf42;
LAB_09cac637:
      asStack_208[0] = _DAT_0f649770;
      bStack_498 = 0x30;
      uStack_497 = 0x1b;
      uStack_496 = 0x9cf;
      uStack_494 = 0;
      uStack_493 = 0;
      uStack_491 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_48b = 0;
      uStack_48a = 0;
      uStack_489 = 0;
      func_0x09da7580(&puStack_288,param_1,&bStack_390,&puStack_418,asStack_208);
      puVar11 = puStack_418;
      puVar8 = puStack_410;
      if (puStack_418 != (ulong *)0x0) {
        for (; puVar11 != puVar8; puVar8 = puVar8 + -4) {
          if ((puVar8[-4] & 1) != 0) {
            func_0x0412a280(puVar8[-2],puVar8[-4] & 0xfffffffffffffffe);
          }
        }
        puStack_410 = puVar11;
        func_0x0412a280(puStack_418,(long)puStack_408 - (long)puStack_418);
      }
      pbVar6 = pbStack_318;
      pbVar9 = pbStack_310;
      if (pbStack_318 != (byte *)0x0) {
        for (; pbVar6 != pbVar9; pbVar9 = pbVar9 + -0x20) {
          if ((pbVar9[-0x20] & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pbVar9 + -0x10),
                            *(ulong *)(pbVar9 + -0x20) & 0xfffffffffffffffe);
          }
        }
        pbStack_310 = pbVar6;
        func_0x0412a280(pbVar6,(long)pbStack_308 - (long)pbVar6);
      }
      if ((bStack_390 & 1) != 0) {
        func_0x0412a280(uStack_380,
                        CONCAT17(uStack_389,CONCAT52(uStack_38e,CONCAT11(uStack_38f,bStack_390))) &
                        0xfffffffffffffffe);
      }
      if ((DAT_0f649768 == '\0') && (iVar7 = func_0x04108328(&DAT_0f649768), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f649760 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f649768);
      }
      bStack_498 = (byte)_DAT_0f649760;
      uStack_497 = (undefined1)((ushort)_DAT_0f649760 >> 8);
      uStack_490 = 0xf649378;
      uStack_48c = 0;
      uStack_48b = 0;
      uStack_48a = 0;
      uStack_489 = 0;
      uStack_488 = 0;
      uStack_487 = 0;
      uStack_485 = 0;
      uStack_484 = 0;
      uStack_483 = 0;
      uStack_482 = 0;
      uStack_481 = 0;
      uStack_480 = 0;
      bStack_478 = 0xc;
      uStack_477 = 0x69746361;
      uStack_473 = 0x6e6f;
      uStack_471 = 0;
      puStack_460 = &DAT_012c7ff4;
      uStack_458 = 0xffffffff;
      uStack_450 = 0;
      uStack_448 = _DAT_014e7c50;
      uStack_444 = _UNK_014e7c54;
      uStack_440 = _UNK_014e7c58;
      uStack_43c = _UNK_014e7c5c;
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      if ((DAT_0f551b88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551b88), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551b82 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551b88);
      }
      puStack_418 = (ulong *)CONCAT62(puStack_418._2_6_,_DAT_0f551b82);
      puStack_410 = (ulong *)0xf64aba8;
      puStack_408 = (ulong *)0x0;
      uStack_400 = 0;
      uStack_3f8 = 0x72747312;
      uStack_3f4 = 0x75;
      uStack_3f3 = 99;
      uStack_3f2 = 0x7574;
      uStack_3f0 = 0x72;
      uStack_3ef = 0x65;
      puStack_3e0 = &UNK_01330767;
      uStack_3d8 = 0xffffffff;
      uStack_3d0 = 0;
      uStack_3c8 = _DAT_014e19e0;
      uStack_3c4 = _UNK_014e19e4;
      uStack_3c0 = _UNK_014e19e8;
      uStack_3bc = _UNK_014e19ec;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      if ((DAT_0f6036a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6036a8), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6036a0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f6036a8);
      }
      bStack_390 = (byte)_DAT_0f6036a0;
      uStack_38f = (undefined1)((ushort)_DAT_0f6036a0 >> 8);
      uStack_388 = 0xc0;
      uStack_387 = 0xf64ab;
      uStack_381 = 0;
      uStack_380 = 0;
      uStack_378 = 0;
      bStack_370 = 6;
      uStack_36f = 0x736f70;
      uStack_358 = 0;
      uStack_350 = 0xffffffff;
      uStack_348 = 0;
      uStack_340 = _DAT_014e33e0;
      uStack_33c = _UNK_014e33e4;
      uStack_338 = _UNK_014e33e8;
      uStack_334 = _UNK_014e33ec;
      uStack_330 = 1;
      uStack_328 = 0;
      uStack_320 = 0;
      if ((DAT_0f551ba8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551ba8), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551ba0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551ba8);
      }
      pbStack_318 = (byte *)CONCAT62(pbStack_318._2_6_,_DAT_0f551ba0);
      pbStack_310 = (byte *)0xf551b60;
      pbStack_308 = (byte *)0x0;
      uStack_300 = 0;
      bStack_2f8 = 0x22;
      uStack_2f7 = (undefined7)_DAT_012ada5c;
      uStack_2f0 = (undefined1)((ulong)_DAT_012ada5c >> 0x38);
      uStack_2ef = (undefined1)_UNK_012ada64;
      uStack_2ee = (undefined6)((ulong)_UNK_012ada64 >> 8);
      uStack_2e8 = (undefined1)((ulong)_UNK_012ada64 >> 0x38);
      uStack_2e7 = 0x74;
      uStack_2e0 = 0;
      uStack_2d8 = 0xffffffff;
      uStack_2d0 = 0;
      uStack_2c8 = _DAT_014e2ef0;
      uStack_2c4 = _UNK_014e2ef4;
      uStack_2c0 = _UNK_014e2ef8;
      uStack_2bc = _UNK_014e2efc;
      uStack_2b8 = 1;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      if ((DAT_0f551ba8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551ba8), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551ba0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551ba8);
      }
      puStack_288 = (ulong *)CONCAT62(puStack_288._2_6_,_DAT_0f551ba0);
      puStack_280 = (ulong *)0xf551b60;
      puStack_278 = (ulong *)0x0;
      uStack_270 = 0;
      bStack_268 = 0x16;
      uStack_267 = 0x7065656b;
      uStack_263 = 0x7367694a;
      uStack_25f = 0x737761;
      uStack_25c = 0;
      uStack_250 = 0;
      uStack_248 = 0xffffffff;
      uStack_240 = 0;
      uStack_238 = _DAT_014e5480;
      uStack_234 = _UNK_014e5484;
      uStack_230 = _UNK_014e5488;
      uStack_22c = _UNK_014e548c;
      uStack_228 = 1;
      uStack_220 = 0;
      uStack_218 = 0;
      if ((DAT_0f551ba8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551ba8), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551ba0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551ba8);
      }
      asStack_208[0] = _DAT_0f551ba0;
      uStack_200 = 0xf551b60;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      bStack_1e8 = 0x1e;
      uStack_1e7 = 0x6564756c636e69;
      uStack_1e0 = 0x69746e45;
      uStack_1dc = 0x73656974;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1c8 = 0xffffffff;
      uStack_1c0 = 0;
      uStack_1b8 = _DAT_014e7400;
      uStack_1b4 = _UNK_014e7404;
      uStack_1b0 = _UNK_014e7408;
      uStack_1ac = _UNK_014e740c;
      uStack_1a8 = 1;
      uStack_1a0 = 0;
      uStack_198 = 0;
      if ((DAT_0f649778 == '\0') && (iVar7 = func_0x04108328(&DAT_0f649778), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f649770 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f649778);
      }
      asStack_190[0] = _DAT_0f649770;
      uStack_188 = 0xf649398;
      uStack_180 = 0;
      uStack_178 = 0;
      bStack_170 = 0x1c;
      puVar8 = (ulong *)0x655364697571696c;
      uStack_16f = 0x64697571696c;
      uStack_169 = 0x53;
      uStack_168 = 0x65;
      uStack_167 = 0x73676e697474;
      uStack_161 = 0;
      uStack_158 = 0;
      uStack_150 = 0xffffffff;
      uStack_148 = 0;
      uStack_140 = _DAT_014e3e60;
      uStack_13c = _UNK_014e3e64;
      uStack_138 = _UNK_014e3e68;
      uStack_134 = _UNK_014e3e6c;
      uStack_130 = 1;
      uStack_128 = 0;
      uStack_120 = 0;
      puStack_108 = &UNK_0ef43920;
      puStack_100 = &UNK_09cf1bc0;
      func_0x09cf1150(uStack_398,&UNK_0126185b,0x7fffffff00000001,&puStack_108,&bStack_498,
                      &puStack_418,&bStack_390,&pbStack_318,&puStack_288,asStack_208,asStack_190);
      if (puStack_108 != (undefined *)0x0) {
        (**(code **)(puStack_108 + 8))(&puStack_108);
      }
      if ((bStack_170 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_15f,uStack_160),
                        CONCAT17(uStack_169,CONCAT61(uStack_16f,bStack_170)) & 0xfffffffffffffffe);
      }
      if ((bStack_1e8 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_1d7,uStack_1d8),
                        CONCAT71(uStack_1e7,bStack_1e8) & 0xfffffffffffffffe);
      }
      if ((bStack_268 & 1) != 0) {
        func_0x0412a280(uStack_258,
                        CONCAT35((undefined3)uStack_263,CONCAT41(uStack_267,bStack_268)) &
                        0xfffffffffffffffe);
      }
      if ((bStack_2f8 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_2e5,CONCAT21(uStack_2e7,uStack_2e8)),
                        CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe);
      }
      if ((bStack_370 & 1) != 0) {
        func_0x0412a280(uStack_360,
                        CONCAT35((undefined3)uStack_36b,CONCAT41(uStack_36f,bStack_370)) &
                        0xfffffffffffffffe);
      }
      if ((uStack_3f8 & 1) != 0) {
        func_0x0412a280(uStack_3e8,
                        CONCAT26(uStack_3f2,CONCAT15(uStack_3f3,CONCAT14(uStack_3f4,uStack_3f8))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_478 & 1) != 0) {
        func_0x0412a280(uStack_468,
                        CONCAT17(uStack_471,CONCAT25(uStack_473,CONCAT41(uStack_477,bStack_478))) &
                        0xfffffffffffffffe);
      }
      if ((DAT_0f649768 == '\0') && (iVar7 = func_0x04108328(&DAT_0f649768), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f649760 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f649768);
      }
      bStack_498 = (byte)_DAT_0f649760;
      uStack_497 = (undefined1)((ushort)_DAT_0f649760 >> 8);
      uStack_490 = 0xf649378;
      uStack_48c = 0;
      uStack_48b = 0;
      uStack_48a = 0;
      uStack_489 = 0;
      uStack_488 = 0;
      uStack_487 = 0;
      uStack_485 = 0;
      uStack_484 = 0;
      uStack_483 = 0;
      uStack_482 = 0;
      uStack_481 = 0;
      uStack_480 = 0;
      bStack_478 = 0xc;
      uStack_477 = 0x69746361;
      uStack_473 = 0x6e6f;
      uStack_471 = 0;
      puStack_460 = &DAT_01367a64;
      uStack_458 = 0xffffffff;
      uStack_450 = 0;
      uStack_448 = _DAT_014e7c50;
      uStack_444 = _UNK_014e7c54;
      uStack_440 = _UNK_014e7c58;
      uStack_43c = _UNK_014e7c5c;
      uStack_438 = 0;
      uStack_430 = 0;
      uStack_428 = 0;
      if ((DAT_0f6499c0 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6499c0), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6499b8 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f6499c0);
      }
      puStack_418 = (ulong *)CONCAT62(puStack_418._2_6_,_DAT_0f6499b8);
      puStack_410 = (ulong *)0xf64aae0;
      puStack_408 = (ulong *)0x0;
      uStack_400 = 0;
      uStack_3f8 = 0x6f6f7008;
      uStack_3f4 = 0x6c;
      uStack_3f3 = 0;
      puStack_3e0 = (undefined *)0x0;
      uStack_3d8 = 0xffffffff;
      uStack_3d0 = 0;
      uStack_3c8 = _DAT_014e46b0;
      uStack_3c4 = _UNK_014e46b4;
      uStack_3c0 = _UNK_014e46b8;
      uStack_3bc = _UNK_014e46bc;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      uStack_3a8 = 0;
      if ((DAT_0f551b88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551b88), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551b82 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551b88);
      }
      bStack_390 = (byte)_DAT_0f551b82;
      uStack_38f = (undefined1)((ushort)_DAT_0f551b82 >> 8);
      uStack_388 = 0xa8;
      uStack_387 = 0xf64ab;
      uStack_381 = 0;
      uStack_380 = 0;
      uStack_378 = 0;
      bStack_370 = 0x18;
      uStack_36f = 0x7367696a;
      uStack_36b = 0x61547761;
      uStack_367 = 0x74656772;
      uStack_363 = 0;
      uStack_358 = 0;
      uStack_350 = 0xffffffff;
      uStack_348 = 0;
      uStack_340 = _DAT_014e8890;
      uStack_33c = _UNK_014e8894;
      uStack_338 = _UNK_014e8898;
      uStack_334 = _UNK_014e889c;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      if ((DAT_0f551b98 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551b98), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551b90 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551b98);
      }
      pbStack_318 = (byte *)CONCAT62(pbStack_318._2_6_,_DAT_0f551b90);
      pbStack_310 = (byte *)0xf64ac40;
      pbStack_308 = (byte *)0x0;
      uStack_300 = 0;
      bStack_2f8 = 0x10;
      uStack_2f7 = 0x7470654478616d;
      uStack_2f0 = 0x68;
      uStack_2ef = 0;
      uStack_2e0 = 0;
      uStack_2d8 = 0xffffffff;
      uStack_2d0 = 0;
      uStack_2c8 = _DAT_014e58d0;
      uStack_2c4 = _UNK_014e58d4;
      uStack_2c0 = _UNK_014e58d8;
      uStack_2bc = _UNK_014e58dc;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      if ((DAT_0f6036a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6036a8), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f6036a0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f6036a8);
      }
      puStack_288 = (ulong *)CONCAT62(puStack_288._2_6_,_DAT_0f6036a0);
      puStack_280 = (ulong *)0xf64abc0;
      puStack_278 = (ulong *)0x0;
      uStack_270 = 0;
      bStack_268 = 6;
      uStack_267 = 0x736f70;
      uStack_250 = 0;
      uStack_248 = 0xffffffff;
      uStack_240 = 0;
      uStack_238 = _DAT_014e33e0;
      uStack_234 = _UNK_014e33e4;
      uStack_230 = _UNK_014e33e8;
      uStack_22c = _UNK_014e33ec;
      uStack_228 = 1;
      uStack_220 = 0;
      uStack_218 = 0;
      if ((DAT_0f551ba8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551ba8), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551ba0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551ba8);
      }
      asStack_208[0] = _DAT_0f551ba0;
      uStack_200 = 0xf551b60;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      bStack_1e8 = 0x16;
      uStack_1e7 = 0x67694a7065656b;
      uStack_1e0 = 0x73776173;
      uStack_1dc = uStack_1dc & 0xffffff00;
      uStack_1d0 = 0;
      uStack_1c8 = 0xffffffff;
      uStack_1c0 = 0;
      uStack_1b8 = _DAT_014e5480;
      uStack_1b4 = _UNK_014e5484;
      uStack_1b0 = _UNK_014e5488;
      uStack_1ac = _UNK_014e548c;
      uStack_1a8 = 1;
      uStack_1a0 = 0;
      uStack_198 = 0;
      if ((DAT_0f551ba8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551ba8), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f551ba0 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f551ba8);
      }
      asStack_190[0] = _DAT_0f551ba0;
      uStack_188 = 0xf551b60;
      uStack_180 = 0;
      uStack_178 = 0;
      bStack_170 = 0x1e;
      uStack_16f = 0x64756c636e69;
      uStack_169 = 0x65;
      uStack_168 = 0x45;
      uStack_167 = 0x65697469746e;
      uStack_161 = 0x73;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0xffffffff;
      uStack_148 = 0;
      uStack_140 = _DAT_014e7400;
      uStack_13c = _UNK_014e7404;
      uStack_138 = _UNK_014e7408;
      uStack_134 = _UNK_014e740c;
      uStack_130 = 1;
      uStack_128 = 0;
      uStack_120 = 0;
      if ((DAT_0f649778 == '\0') && (iVar7 = func_0x04108328(&DAT_0f649778), iVar7 != 0)) {
        LOCK();
        UNLOCK();
        _DAT_0f649770 = _DAT_0f551b80;
        _DAT_0f551b80 = _DAT_0f551b80 + 1;
        func_0x0410844d(&DAT_0f649778);
      }
      param_1 = uStack_398;
      puStack_108 = (undefined *)CONCAT62(puStack_108._2_6_,_DAT_0f649770);
      puStack_100 = (undefined *)0xf649398;
      uStack_f8 = 0;
      uStack_f0 = 0;
      bStack_e8 = 0x1c;
      uStack_e7 = 0x64697571696c;
      uStack_e1 = 0x53;
      uStack_e0 = 0x65;
      uStack_df = 0x73676e697474;
      uStack_d9 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0xffffffff;
      uStack_c0 = 0;
      uStack_b8 = _DAT_014e3e60;
      uStack_b4 = _UNK_014e3e64;
      uStack_b0 = _UNK_014e3e68;
      uStack_ac = _UNK_014e3e6c;
      uStack_a8 = 1;
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_78 = &UNK_0ef43920;
      puStack_70 = &UNK_09cf1bc0;
      func_0x09cef720(uStack_398,&UNK_0126185b,0x7fffffff00000001,&puStack_78,&bStack_498,
                      &puStack_418,&bStack_390,&pbStack_318,&puStack_288,asStack_208,asStack_190,
                      &puStack_108);
      lVar22 = lStack_110;
      if (puStack_78 != (undefined *)0x0) {
        (**(code **)(puStack_78 + 8))(&puStack_78);
      }
      if ((bStack_e8 & 1) != 0) {
        func_0x0412a280(uStack_d8,
                        CONCAT17(uStack_e1,CONCAT61(uStack_e7,bStack_e8)) & 0xfffffffffffffffe);
      }
      if ((bStack_170 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_15f,uStack_160),
                        CONCAT17(uStack_169,CONCAT61(uStack_16f,bStack_170)) & 0xfffffffffffffffe);
      }
      if ((bStack_1e8 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_1d7,uStack_1d8),
                        CONCAT71(uStack_1e7,bStack_1e8) & 0xfffffffffffffffe);
      }
      if ((bStack_268 & 1) != 0) {
        func_0x0412a280(uStack_258,
                        CONCAT35((undefined3)uStack_263,CONCAT41(uStack_267,bStack_268)) &
                        0xfffffffffffffffe);
      }
      if ((bStack_2f8 & 1) != 0) {
        func_0x0412a280(CONCAT53(uStack_2e5,CONCAT21(uStack_2e7,uStack_2e8)),
                        CONCAT71(uStack_2f7,bStack_2f8) & 0xfffffffffffffffe);
      }
      if ((bStack_370 & 1) != 0) {
        func_0x0412a280(uStack_360,
                        CONCAT35((undefined3)uStack_36b,CONCAT41(uStack_36f,bStack_370)) &
                        0xfffffffffffffffe);
      }
      if ((uStack_3f8 & 1) != 0) {
        func_0x0412a280(uStack_3e8,
                        CONCAT26(uStack_3f2,CONCAT15(uStack_3f3,CONCAT14(uStack_3f4,uStack_3f8))) &
                        0xfffffffffffffffe);
      }
      if ((bStack_478 & 1) != 0) {
        func_0x0412a280(uStack_468,
                        CONCAT17(uStack_471,CONCAT25(uStack_473,CONCAT41(uStack_477,bStack_478))) &
                        0xfffffffffffffffe);
      }
      bStack_498 = 0x24;
      uStack_497 = (undefined1)_DAT_011f7dc1;
      uStack_496 = (undefined2)((ulong)_DAT_011f7dc1 >> 8);
      uStack_494 = (undefined1)((ulong)_DAT_011f7dc1 >> 0x18);
      uStack_493 = (undefined2)((ulong)_DAT_011f7dc1 >> 0x20);
      uStack_491 = (undefined1)((ulong)_DAT_011f7dc1 >> 0x30);
      uStack_490._0_1_ = (undefined1)((ulong)_DAT_011f7dc1 >> 0x38);
      uStack_490._1_3_ = (undefined3)_UNK_011f7dc9;
      uStack_48c = (undefined1)((ulong)_UNK_011f7dc9 >> 0x18);
      uStack_48b = (undefined1)((ulong)_UNK_011f7dc9 >> 0x20);
      uStack_48a = (undefined1)((ulong)_UNK_011f7dc9 >> 0x28);
      uStack_489 = (undefined1)((ulong)_UNK_011f7dc9 >> 0x30);
      uStack_488 = (undefined1)((ulong)_UNK_011f7dc9 >> 0x38);
      uStack_487 = 0x6e6f;
      uStack_485 = 0;
      puStack_418 = (ulong *)0x0;
      puStack_410 = (ulong *)0x0;
      puStack_408 = (ulong *)0x0;
      puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar11 == (ulong *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puStack_410 = puVar11 + 4;
      *puVar11 = 0x657275746165660e;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 3) = 2;
      puStack_418 = puVar11;
      puStack_408 = puStack_410;
      func_0x09cae810(param_1,&bStack_498,puVar11);
      if ((*puVar11 & 1) != 0) {
        func_0x0412a280(puVar11[2],*puVar11 & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar11,0x20);
      if ((bStack_498 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_481,
                                 CONCAT16(uStack_482,
                                          CONCAT15(uStack_483,
                                                   CONCAT14(uStack_484,
                                                            CONCAT13(uStack_485,
                                                                     CONCAT21(uStack_487,uStack_488)
                                                                    ))))),
                        CONCAT17(uStack_491,
                                 CONCAT25(uStack_493,
                                          CONCAT14(uStack_494,
                                                   CONCAT22(uStack_496,
                                                            CONCAT11(uStack_497,bStack_498))))) &
                        0xfffffffffffffffe);
      }
      bStack_498 = 0x2c;
      uStack_497 = (undefined1)_DAT_013e93f5;
      uStack_496 = (undefined2)((ulong)_DAT_013e93f5 >> 8);
      uStack_494 = (undefined1)((ulong)_DAT_013e93f5 >> 0x18);
      uStack_493 = (undefined2)((ulong)_DAT_013e93f5 >> 0x20);
      uStack_491 = (undefined1)((ulong)_DAT_013e93f5 >> 0x30);
      uStack_490._0_1_ = (undefined1)((ulong)_DAT_013e93f5 >> 0x38);
      uStack_490._1_3_ = (undefined3)_UNK_013e93fd;
      uStack_48c = (undefined1)((ulong)_UNK_013e93fd >> 0x18);
      uStack_48b = (undefined1)((ulong)_UNK_013e93fd >> 0x20);
      uStack_48a = (undefined1)((ulong)_UNK_013e93fd >> 0x28);
      uStack_489 = 0x6c;
      uStack_488 = 0x65;
      uStack_487 = 0x6341;
      uStack_485 = 0x74;
      uStack_484 = 0x69;
      uStack_483 = 0x6f;
      uStack_482 = 0x6e;
      uStack_481 = 0;
      puStack_418 = (ulong *)0x0;
      puStack_410 = (ulong *)0x0;
      puStack_408 = (ulong *)0x0;
      puVar11 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar11 == (ulong *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      puStack_410 = puVar11 + 4;
      *puVar11 = 0x6572757461656616;
      puVar11[1] = 0x656c7572;
      *(undefined4 *)(puVar11 + 3) = 3;
      puStack_418 = puVar11;
      puStack_408 = puStack_410;
      func_0x09cae810(param_1,&bStack_498,puVar11);
      if ((*puVar11 & 1) != 0) {
        func_0x0412a280(puVar11[2],*puVar11 & 0xfffffffffffffffe);
      }
      func_0x0412a280(puVar11,0x20);
      if ((bStack_498 & 1) != 0) {
        func_0x0412a280(CONCAT17(uStack_481,
                                 CONCAT16(uStack_482,
                                          CONCAT15(uStack_483,
                                                   CONCAT14(uStack_484,
                                                            CONCAT13(uStack_485,
                                                                     CONCAT21(uStack_487,uStack_488)
                                                                    ))))),
                        CONCAT17(uStack_491,
                                 CONCAT25(uStack_493,
                                          CONCAT14(uStack_494,
                                                   CONCAT22(uStack_496,
                                                            CONCAT11(uStack_497,bStack_498))))) &
                        0xfffffffffffffffe);
      }
      puStack_288 = (ulong *)0x0;
      puStack_280 = (ulong *)0x0;
      puStack_278 = (ulong *)0x0;
      uVar12 = *(ulong *)(lVar22 + 0x18);
      if (uVar12 != 0) {
        if (0xaaaaaaaaaaaaaaa < uVar12) goto LAB_09cae468;
        puVar8 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar12 * 0x18);
        if (puVar8 == (ulong *)0x0) {
          func_0x0eec74c0(uVar12 * 0x18,0);
        }
        puStack_278 = puVar8 + uVar12 * 3;
        puStack_280 = puVar8;
      }
      puVar18 = *(undefined8 **)(lVar22 + 0x10);
      puVar8 = puStack_280;
      puStack_288 = puStack_280;
      do {
        if (puVar18 == (undefined8 *)0x0) {
          bStack_498 = 0x18;
          uStack_497 = 0x66;
          uStack_496 = 0x6165;
          uStack_494 = 0x74;
          uStack_493 = 0x7275;
          uStack_491 = 0x65;
          uStack_490 = 0x656c7552;
          uStack_48c = 0x73;
          uStack_48b = 0;
          func_0x09d9c1f0(param_1,&bStack_498,&puStack_288);
          if ((bStack_498 & 1) != 0) {
            func_0x0412a280(CONCAT17(uStack_481,
                                     CONCAT16(uStack_482,
                                              CONCAT15(uStack_483,
                                                       CONCAT14(uStack_484,
                                                                CONCAT13(uStack_485,
                                                                         CONCAT21(uStack_487,
                                                                                  uStack_488)))))),
                            CONCAT17(uStack_491,
                                     CONCAT25(uStack_493,
                                              CONCAT14(uStack_494,
                                                       CONCAT22(uStack_496,
                                                                CONCAT11(uStack_497,bStack_498)))))
                            & 0xfffffffffffffffe);
          }
          if ((DAT_0f649768 == '\0') && (iVar7 = func_0x04108328(&DAT_0f649768), iVar7 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f649760 = _DAT_0f551b80;
            _DAT_0f551b80 = _DAT_0f551b80 + 1;
            func_0x0410844d(&DAT_0f649768);
          }
          bStack_498 = (byte)_DAT_0f649760;
          uStack_497 = (undefined1)((ushort)_DAT_0f649760 >> 8);
          uStack_490 = 0xf649378;
          uStack_48c = 0;
          uStack_48b = 0;
          uStack_48a = 0;
          uStack_489 = 0;
          uStack_488 = 0;
          uStack_487 = 0;
          uStack_485 = 0;
          uStack_484 = 0;
          uStack_483 = 0;
          uStack_482 = 0;
          uStack_481 = 0;
          uStack_480 = 0;
          bStack_478 = 0xc;
          uStack_477 = 0x69746361;
          uStack_473 = 0x6e6f;
          uStack_471 = 0;
          puStack_460 = &DAT_011f7dc1;
          uStack_458 = 0xffffffff;
          uStack_450 = 0;
          uStack_448 = _DAT_014e7c50;
          uStack_444 = _UNK_014e7c54;
          uStack_440 = _UNK_014e7c58;
          uStack_43c = _UNK_014e7c5c;
          uStack_438 = 0;
          uStack_430 = 0;
          uStack_428 = 0;
          if ((DAT_0f649a10 == '\0') && (iVar7 = func_0x04108328(&DAT_0f649a10), iVar7 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f649a08 = _DAT_0f551b80;
            _DAT_0f551b80 = _DAT_0f551b80 + 1;
            func_0x0410844d(&DAT_0f649a10);
          }
          puStack_418 = (ulong *)CONCAT62(puStack_418._2_6_,_DAT_0f649a08);
          puStack_410 = (ulong *)0xf6493b8;
          puStack_408 = (ulong *)0x0;
          uStack_400 = 0;
          uStack_3f8 = 0x6165660e;
          uStack_3f4 = 0x74;
          uStack_3f3 = 0x75;
          uStack_3f2 = 0x6572;
          uStack_3f0 = 0;
          puStack_3e0 = &UNK_014381dc;
          uStack_3d8 = 0xffffffff;
          uStack_3d0 = 0;
          uStack_3c8 = _DAT_014e9d60;
          uStack_3c4 = _UNK_014e9d64;
          uStack_3c0 = _UNK_014e9d68;
          uStack_3bc = _UNK_014e9d6c;
          uStack_3b8 = 0;
          uStack_3b0 = 0;
          uStack_3a8 = 0;
          if ((DAT_0f6036a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6036a8), iVar7 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f6036a0 = _DAT_0f551b80;
            _DAT_0f551b80 = _DAT_0f551b80 + 1;
            func_0x0410844d(&DAT_0f6036a8);
          }
          bStack_390 = (byte)_DAT_0f6036a0;
          uStack_38f = (undefined1)((ushort)_DAT_0f6036a0 >> 8);
          uStack_388 = 0xc0;
          uStack_387 = 0xf64ab;
          uStack_381 = 0;
          uStack_380 = 0;
          uStack_378 = 0;
          bStack_370 = 0x10;
          uStack_36f = 0x69736f70;
          uStack_36b = 0x6e6f6974;
          uStack_367 = uStack_367 & 0xffffff00;
          uStack_358 = 0;
          uStack_350 = 0xffffffff;
          uStack_348 = 0;
          uStack_340 = _DAT_014e83a0;
          uStack_33c = _UNK_014e83a4;
          uStack_338 = _UNK_014e83a8;
          uStack_334 = _UNK_014e83ac;
          uStack_330 = 1;
          uStack_328 = 0;
          uStack_320 = 0;
          pbStack_318 = &UNK_0ef43920;
          pbStack_310 = &UNK_09cf1bc0;
          func_0x05acbd50(param_1,&UNK_0126185b,0x7fffffff00000001,&pbStack_318,&bStack_498,
                          &puStack_418,&bStack_390);
          if (pbStack_318 != (byte *)0x0) {
            (**(code **)(pbStack_318 + 8))(&pbStack_318);
          }
          if ((bStack_370 & 1) != 0) {
            func_0x0412a280(uStack_360,
                            CONCAT35((undefined3)uStack_36b,CONCAT41(uStack_36f,bStack_370)) &
                            0xfffffffffffffffe);
          }
          if ((uStack_3f8 & 1) != 0) {
            func_0x0412a280(uStack_3e8,
                            CONCAT26(uStack_3f2,CONCAT15(uStack_3f3,CONCAT14(uStack_3f4,uStack_3f8))
                                    ) & 0xfffffffffffffffe);
          }
          if ((bStack_478 & 1) != 0) {
            func_0x0412a280(uStack_468,
                            CONCAT17(uStack_471,CONCAT25(uStack_473,CONCAT41(uStack_477,bStack_478))
                                    ) & 0xfffffffffffffffe);
          }
          if ((DAT_0f649768 == '\0') && (iVar7 = func_0x04108328(&DAT_0f649768), iVar7 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f649760 = _DAT_0f551b80;
            _DAT_0f551b80 = _DAT_0f551b80 + 1;
            func_0x0410844d(&DAT_0f649768);
          }
          bStack_498 = (byte)_DAT_0f649760;
          uStack_497 = (undefined1)((ushort)_DAT_0f649760 >> 8);
          uStack_490 = 0xf649378;
          uStack_48c = 0;
          uStack_48b = 0;
          uStack_48a = 0;
          uStack_489 = 0;
          uStack_488 = 0;
          uStack_487 = 0;
          uStack_485 = 0;
          uStack_484 = 0;
          uStack_483 = 0;
          uStack_482 = 0;
          uStack_481 = 0;
          uStack_480 = 0;
          bStack_478 = 0xc;
          uStack_477 = 0x69746361;
          uStack_473 = 0x6e6f;
          uStack_471 = 0;
          puStack_460 = &DAT_013e93f5;
          uStack_458 = 0xffffffff;
          uStack_450 = 0;
          uStack_448 = _DAT_014e7c50;
          uStack_444 = _UNK_014e7c54;
          uStack_440 = _UNK_014e7c58;
          uStack_43c = _UNK_014e7c5c;
          uStack_438 = 0;
          uStack_430 = 0;
          uStack_428 = 0;
          if ((DAT_0f551b88 == '\0') && (iVar7 = func_0x04108328(&DAT_0f551b88), iVar7 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f551b82 = _DAT_0f551b80;
            _DAT_0f551b80 = _DAT_0f551b80 + 1;
            func_0x0410844d(&DAT_0f551b88);
          }
          puStack_418 = (ulong *)CONCAT62(puStack_418._2_6_,_DAT_0f551b82);
          puStack_410 = (ulong *)0xf64aba8;
          puStack_408 = (ulong *)0x0;
          uStack_400 = 0;
          uStack_3f8 = 0x61656616;
          uStack_3f4 = 0x74;
          uStack_3f3 = 0x75;
          uStack_3f2 = 0x6572;
          uStack_3f0 = 0x72;
          uStack_3ef = 0x6c75;
          uStack_3ed = 0x65;
          uStack_3ec = 0;
          puStack_3e0 = &UNK_011f7dd4;
          uStack_3d8 = 0xffffffff;
          uStack_3d0 = 0;
          uStack_3c8 = _DAT_014ea570;
          uStack_3c4 = _UNK_014ea574;
          uStack_3c0 = _UNK_014ea578;
          uStack_3bc = _UNK_014ea57c;
          uStack_3b8 = 0;
          uStack_3b0 = 0;
          uStack_3a8 = 0;
          if ((DAT_0f6036a8 == '\0') && (iVar7 = func_0x04108328(&DAT_0f6036a8), iVar7 != 0)) {
            LOCK();
            UNLOCK();
            _DAT_0f6036a0 = _DAT_0f551b80;
            _DAT_0f551b80 = _DAT_0f551b80 + 1;
            func_0x0410844d(&DAT_0f6036a8);
          }
          bStack_390 = (byte)_DAT_0f6036a0;
          uStack_38f = (undefined1)((ushort)_DAT_0f6036a0 >> 8);
          uStack_388 = 0xc0;
          uStack_387 = 0xf64ab;
          uStack_381 = 0;
          uStack_380 = 0;
          uStack_378 = 0;
          bStack_370 = 0x10;
          uStack_36f = 0x69736f70;
          uStack_36b = 0x6e6f6974;
          uStack_367 = uStack_367 & 0xffffff00;
          uStack_358 = 0;
          uStack_350 = 0xffffffff;
          uStack_348 = 0;
          uStack_340 = _DAT_014e83a0;
          uStack_33c = _UNK_014e83a4;
          uStack_338 = _UNK_014e83a8;
          uStack_334 = _UNK_014e83ac;
          uStack_330 = 1;
          uStack_328 = 0;
          uStack_320 = 0;
          pbStack_318 = &UNK_0ef43920;
          pbStack_310 = &UNK_09cf1bc0;
          func_0x05acbd50(param_1,&UNK_0126185b,0x7fffffff00000001,&pbStack_318,&bStack_498,
                          &puStack_418,&bStack_390);
          if (pbStack_318 != (byte *)0x0) {
            (**(code **)(pbStack_318 + 8))(&pbStack_318);
          }
          if ((bStack_370 & 1) != 0) {
            func_0x0412a280(uStack_360,
                            CONCAT35((undefined3)uStack_36b,CONCAT41(uStack_36f,bStack_370)) &
                            0xfffffffffffffffe);
          }
          if ((uStack_3f8 & 1) != 0) {
            func_0x0412a280(uStack_3e8,
                            CONCAT26(uStack_3f2,CONCAT15(uStack_3f3,CONCAT14(uStack_3f4,uStack_3f8))
                                    ) & 0xfffffffffffffffe);
          }
          if ((bStack_478 & 1) != 0) {
            func_0x0412a280(uStack_468,
                            CONCAT17(uStack_471,CONCAT25(uStack_473,CONCAT41(uStack_477,bStack_478))
                                    ) & 0xfffffffffffffffe);
          }
          func_0x09d833a0(auStack_88,param_1,0);
          func_0x04863610(auStack_88);
          puVar11 = puStack_288;
          puVar8 = puStack_280;
          if (puStack_288 != (ulong *)0x0) {
            for (; puVar11 != puVar8; puVar8 = puVar8 + -3) {
              if ((puVar8[-3] & 1) != 0) {
                func_0x0412a280(puVar8[-1],puVar8[-3] & 0xfffffffffffffffe);
              }
            }
            puStack_280 = puVar11;
            func_0x0412a280(puStack_288,(long)puStack_278 - (long)puStack_288);
          }
          return;
        }
        if (((*(char *)(puVar18 + 0x23) == '\x01') &&
            (lVar22 = *(long *)(*(long *)(puVar18[0x22] + 0x18) + puVar18[0x24] * 8), lVar22 != 0))
           && (*(char *)(lVar22 + 8) == '\0')) {
          if ((*(byte *)(puVar18 + 3) & 1) == 0) {
            lVar22 = (long)puVar18 + 0x19;
            bStack_498 = (byte)lVar22;
            uStack_497 = (undefined1)((ulong)lVar22 >> 8);
            uStack_496 = (undefined2)((ulong)lVar22 >> 0x10);
            uStack_494 = (undefined1)((ulong)lVar22 >> 0x20);
            uStack_493 = (undefined2)((ulong)lVar22 >> 0x28);
            uStack_491 = (undefined1)((ulong)lVar22 >> 0x38);
          }
          else {
            lVar22 = puVar18[5];
            bStack_498 = (byte)lVar22;
            uStack_497 = (undefined1)((ulong)lVar22 >> 8);
            uStack_496 = (undefined2)((ulong)lVar22 >> 0x10);
            uStack_494 = (undefined1)((ulong)lVar22 >> 0x20);
            uStack_493 = (undefined2)((ulong)lVar22 >> 0x28);
            uStack_491 = (undefined1)((ulong)lVar22 >> 0x38);
          }
          if (puVar8 < puStack_278) {
            uVar12 = func_0x0eee2e90(lVar22);
            if (0xfffffffffffffff7 < uVar12) goto LAB_09cadf3d;
            if (uVar12 < 0x17) {
              *(char *)puVar8 = (char)uVar12 * '\x02';
              pcVar13 = (char *)((long)puVar8 + 1);
              if (uVar12 != 0) goto LAB_09cad720;
            }
            else {
              uVar19 = (uVar12 | 7) + 1;
              if ((uVar12 | 7) == 0x17) {
                uVar19 = 0x1a;
              }
              pcVar13 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar19);
              if (pcVar13 == (char *)0x0) {
                func_0x0eec74c0(uVar19,0);
              }
              puVar8[2] = (ulong)pcVar13;
              *puVar8 = uVar19 | 1;
              puVar8[1] = uVar12;
              param_1 = uStack_398;
LAB_09cad720:
              func_0x0eee2ee0(pcVar13,lVar22,uVar12);
            }
            pcVar13[uVar12] = '\0';
            puVar8 = puVar8 + 3;
            puStack_280 = puVar8;
          }
          else {
            puVar8 = (ulong *)func_0x09b23020(&puStack_288,&bStack_498);
            puStack_280 = puVar8;
          }
        }
        puVar18 = (undefined8 *)*puVar18;
      } while( true );
    }
    lVar22 = (long)puStack_410 - (long)puStack_418;
    uVar19 = (lVar22 >> 5) + 1;
    puVar8 = puStack_408;
    if (uVar19 >> 0x3b == 0) {
      puVar8 = (ulong *)((long)puStack_408 - (long)puStack_418);
      uVar20 = (long)puVar8 >> 4;
      if ((ulong)((long)puVar8 >> 4) <= uVar19) {
        uVar20 = uVar19;
      }
      if ((ulong *)0x7fffffffffffffdf < puVar8) {
        uVar20 = 0x7ffffffffffffff;
      }
      if (uVar20 < 0x800000000000000) {
        puStack_298 = puStack_418;
        lVar21 = uVar20 * 0x20;
        uStack_290 = uVar12;
        lVar10 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar21);
        if (lVar10 == 0) {
          func_0x0eec74c0(lVar21,0);
        }
        puVar11 = puStack_298;
        *(ulong *)(lVar10 + 0x10 + lVar22) =
             CONCAT17(uStack_481,
                      CONCAT16(uStack_482,
                               CONCAT15(uStack_483,
                                        CONCAT14(uStack_484,
                                                 CONCAT13(uStack_485,CONCAT21(uStack_487,uStack_488)
                                                         )))));
        *(undefined8 *)(lVar10 + lVar22) =
             CONCAT17(uStack_491,
                      CONCAT25(uStack_493,
                               CONCAT14(uStack_494,
                                        CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))));
        ((undefined8 *)(lVar10 + lVar22))[1] =
             CONCAT17(uStack_489,
                      CONCAT16(uStack_48a,CONCAT15(uStack_48b,CONCAT14(uStack_48c,uStack_490))));
        bStack_498 = 0;
        uStack_497 = 0;
        uStack_496 = 0;
        uStack_494 = 0;
        uStack_493 = 0;
        uStack_491 = 0;
        uStack_490 = 0;
        uStack_48c = 0;
        uStack_48b = 0;
        uStack_48a = 0;
        uStack_489 = 0;
        uStack_488 = 0;
        uStack_487 = 0;
        uStack_485 = 0;
        uStack_484 = 0;
        uStack_483 = 0;
        uStack_482 = 0;
        uStack_481 = 0;
        *(ulong *)(lVar10 + 0x18 + lVar22) = uStack_290;
        puVar16 = (ulong *)(lVar10 + lVar22 + 0x20);
        puVar17 = (ulong *)(lVar10 + lVar22 + (lVar22 >> 5) * -0x20);
        memcpy(puVar17,puStack_298,lVar22);
        param_1 = uStack_398;
        puStack_418 = puVar17;
        puStack_410 = puVar16;
        puStack_408 = (ulong *)(lVar21 + lVar10);
        if ((puVar11 != (ulong *)0x0) &&
           (func_0x0412a280(puVar11,puVar8), param_1 = uStack_398, puStack_410 = puVar16,
           (bStack_498 & 1) != 0)) {
          func_0x0412a280(CONCAT17(uStack_481,
                                   CONCAT16(uStack_482,
                                            CONCAT15(uStack_483,
                                                     CONCAT14(uStack_484,
                                                              CONCAT13(uStack_485,
                                                                       CONCAT21(uStack_487,
                                                                                uStack_488)))))),
                          CONCAT17(uStack_491,
                                   CONCAT25(uStack_493,
                                            CONCAT14(uStack_494,
                                                     CONCAT22(uStack_496,
                                                              CONCAT11(uStack_497,bStack_498))))) &
                          0xfffffffffffffffe);
        }
        goto LAB_09cac628;
      }
      goto LAB_09cae463;
    }
  }
  else {
    func_0x0412e5e0(&bStack_498,*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
    if (puStack_410 < puStack_408) goto LAB_09cac2d7;
    puVar8 = (ulong *)((long)puStack_410 - (long)puStack_418);
    uVar19 = ((long)puVar8 >> 5) + 1;
    if (uVar19 >> 0x3b == 0) {
      uVar15 = (long)puStack_408 - (long)puStack_418;
      uVar20 = (long)uVar15 >> 4;
      if ((ulong)((long)uVar15 >> 4) <= uVar19) {
        uVar20 = uVar19;
      }
      if (0x7fffffffffffffdf < uVar15) {
        uVar20 = 0x7ffffffffffffff;
      }
      if (0x7ffffffffffffff < uVar20) goto LAB_09cae463;
      puStack_298 = puStack_418;
      lVar10 = uVar20 * 0x20;
      uStack_290 = uVar12;
      uStack_118 = uVar15;
      lVar22 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar10);
      if (lVar22 == 0) {
        func_0x0eec74c0(lVar10,0);
      }
      puVar11 = puStack_298;
      *(ulong *)(lVar22 + 0x10 + (long)puVar8) =
           CONCAT17(uStack_481,
                    CONCAT16(uStack_482,
                             CONCAT15(uStack_483,
                                      CONCAT14(uStack_484,
                                               CONCAT13(uStack_485,CONCAT21(uStack_487,uStack_488)))
                                     )));
      *(ulong *)(lVar22 + (long)puVar8) =
           CONCAT17(uStack_491,
                    CONCAT25(uStack_493,
                             CONCAT14(uStack_494,
                                      CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))));
      *(ulong *)((byte *)(lVar22 + (long)puVar8) + 8) =
           CONCAT17(uStack_489,
                    CONCAT16(uStack_48a,CONCAT15(uStack_48b,CONCAT14(uStack_48c,uStack_490))));
      bStack_498 = 0;
      uStack_497 = 0;
      uStack_496 = 0;
      uStack_494 = 0;
      uStack_493 = 0;
      uStack_491 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_48b = 0;
      uStack_48a = 0;
      uStack_489 = 0;
      uStack_488 = 0;
      uStack_487 = 0;
      uStack_485 = 0;
      uStack_484 = 0;
      uStack_483 = 0;
      uStack_482 = 0;
      uStack_481 = 0;
      *(ulong *)(lVar22 + 0x18 + (long)puVar8) = uStack_290;
      puVar16 = (ulong *)((long)puVar8 + lVar22 + 0x20);
      puVar17 = (ulong *)((long)puVar8 + ((long)puVar8 >> 5) * -0x20 + lVar22);
      memcpy(puVar17,puStack_298,puVar8);
      param_1 = uStack_398;
      puStack_418 = puVar17;
      puStack_410 = puVar16;
      puStack_408 = (ulong *)(lVar10 + lVar22);
      if ((puVar11 != (ulong *)0x0) &&
         (func_0x0412a280(puVar11,uStack_118), param_1 = uStack_398, puStack_410 = puVar16,
         (bStack_498 & 1) != 0)) {
        func_0x0412a280(CONCAT17(uStack_481,
                                 CONCAT16(uStack_482,
                                          CONCAT15(uStack_483,
                                                   CONCAT14(uStack_484,
                                                            CONCAT13(uStack_485,
                                                                     CONCAT21(uStack_487,uStack_488)
                                                                    ))))),
                        CONCAT17(uStack_491,
                                 CONCAT25(uStack_493,
                                          CONCAT14(uStack_494,
                                                   CONCAT22(uStack_496,
                                                            CONCAT11(uStack_497,bStack_498))))) &
                        0xfffffffffffffffe);
      }
      goto LAB_09cac300;
    }
  }
  func_0x049315c0();
LAB_09cae463:
  func_0x04882eb0();
LAB_09cae468:
  uVar14 = func_0x0488efe0();
  if ((bStack_498 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_481,
                             CONCAT16(uStack_482,
                                      CONCAT15(uStack_483,
                                               CONCAT14(uStack_484,
                                                        CONCAT13(uStack_485,
                                                                 CONCAT21(uStack_487,uStack_488)))))
                            ),
                    CONCAT17(uStack_491,
                             CONCAT25(uStack_493,
                                      CONCAT14(uStack_494,
                                               CONCAT22(uStack_496,CONCAT11(uStack_497,bStack_498)))
                                     )) & 0xfffffffffffffffe);
  }
  func_0x04931550(&puStack_418);
  func_0x09caec70(&pbStack_318);
  if ((bStack_390 & 1) != 0) {
    func_0x0412a280(uStack_380,
                    CONCAT17(uStack_389,CONCAT52(uStack_38e,CONCAT11(uStack_38f,bStack_390))) &
                    0xfffffffffffffffe);
  }
  uVar14 = _Unwind_Resume(uVar14);
  puStack_280 = puVar8;
  func_0x04886070(&puStack_288);
  uVar14 = _Unwind_Resume(uVar14);
  func_0x04886070(&puStack_288);
  _Unwind_Resume(uVar14);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
LAB_09cadf3d:
  func_0x04882e30();
LAB_09cadf42:
  iVar7 = func_0x04108328(&DAT_0f649778);
  if (iVar7 != 0) {
    LOCK();
    UNLOCK();
    _DAT_0f649770 = _DAT_0f551b80;
    _DAT_0f551b80 = _DAT_0f551b80 + 1;
    func_0x0410844d(&DAT_0f649778);
  }
  goto LAB_09cac637;
}



/* ---- referenced strings ----
 * 0x11f7dc1  PlaceFeatureAction
 * 0x12ada5c  ignoreStartHeight
 * 0x12c7ff4  PlaceStructureAction
 * 0x1367a64  PlaceJigsawAction
 * 0x13e93f5  PlaceFeatureRuleAction
 */
