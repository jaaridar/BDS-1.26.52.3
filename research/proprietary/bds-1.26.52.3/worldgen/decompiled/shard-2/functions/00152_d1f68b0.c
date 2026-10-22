/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f68b0 (ELF vaddr 0xd1f68b0)
 * Label: string:Jigsaw Structure Set .json file
 * Body:  [[0d2f68b0, 0d2f7433] [0d2f7440, 0d2f7476] [0d2f7480, 0d2f79a4] [0d2f7ad4, 0d2f7ae2] [0d2f7b00, 0d2f7b49]]
 * Ghidra: FUN_0d2f68b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0d2f68b0(long param_1,undefined8 param_2,ulong param_3,ulong *param_4,undefined8 param_5)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  code **ppcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  double dVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong *puVar23;
  byte *pbVar24;
  ulong uVar25;
  code **ppcVar26;
  undefined8 ****ppppuVar27;
  byte *pbVar28;
  byte *pbVar29;
  ulong uVar30;
  long lVar31;
  bool bVar32;
  undefined8 uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  ulong uStack_520;
  ulong uStack_518;
  undefined8 auStack_510 [2];
  undefined *puStack_500;
  code *pcStack_4f8;
  undefined4 uStack_4f0;
  undefined1 uStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_49c;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  undefined8 uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  undefined8 uStack_458;
  ulong uStack_450;
  double dStack_448;
  byte bStack_440;
  byte bStack_432;
  ulong uStack_430;
  ulong uStack_428;
  undefined8 ***apppuStack_420 [3];
  code *pcStack_408;
  int iStack_400;
  char cStack_3fc;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  byte bStack_3ac;
  undefined1 auStack_3a8 [38];
  byte bStack_382;
  ulong uStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  byte abStack_360 [8];
  code *pcStack_358;
  int iStack_350;
  char cStack_34c;
  byte abStack_348 [8];
  byte abStack_340 [8];
  byte abStack_338 [60];
  byte bStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  byte bStack_2ac;
  undefined1 auStack_2a0 [24];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  byte bStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong auStack_1e8 [5];
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined1 auStack_1b0 [24];
  code *pcStack_198;
  undefined1 auStack_188 [80];
  uint auStack_138 [4];
  undefined1 uStack_128;
  uint7 uStack_127;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  byte bStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [96];
  uint uStack_88;
  undefined1 auStack_80 [80];
  
  if (param_3 < 0xfffffffffffffff8) {
    if (param_3 < 0x17) {
      uStack_458 = CONCAT71(uStack_458._1_7_,(char)param_3 * '\x02');
      dVar16 = (double)((long)&uStack_458 + 1);
      if (param_3 != 0) goto LAB_0d2f6950;
    }
    else {
      uVar25 = 0x1a;
      if ((param_3 | 7) != 0x17) {
        uVar25 = (param_3 | 7) + 1;
      }
      dVar16 = (double)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
      if (dVar16 == 0.0) {
        FUN_0eec74c0(uVar25,0);
      }
      uStack_458 = uVar25 | 1;
      uStack_450 = param_3;
      dStack_448 = dVar16;
LAB_0d2f6950:
      memcpy(dVar16,param_2,param_3);
    }
    *(undefined1 *)((long)dVar16 + param_3) = 0;
    puVar17 = (ulong *)func_0x0412f0e0(&uStack_458,0,&UNK_013533bb,0x20);
    uStack_538 = puVar17[2];
    uStack_548 = *puVar17;
    uStack_540 = puVar17[1];
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    uVar30 = uStack_538;
    uVar25 = uStack_540;
    if ((uStack_548 & 1) == 0) {
      uVar30 = (long)&uStack_548 + 1;
      uVar25 = uStack_548 >> 1 & 0x7f;
    }
    auStack_1e8[0] = 0;
    if (uVar30 == 0) {
      auStack_1e8[0] = (ulong)((uint)uVar25 & 0x7f) << 0x30;
    }
    else {
      lVar18 = uVar25 + 9;
      puVar17 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar18,8);
      if (lVar18 != 0 && puVar17 == (ulong *)0x0) {
        FUN_0eec74c0(lVar18,8);
      }
      *puVar17 = uVar25;
      memcpy(puVar17 + 1,uVar30,uVar25);
      *(undefined1 *)((long)puVar17 + uVar25 + 8) = 0;
      auStack_1e8[0] = (ulong)(puVar17 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    auStack_138[0] = auStack_138[0] & 0xffffff00;
    uStack_128 = 0;
    func_0x0eeb79f0(auStack_2a0,auStack_1e8);
    if ((auStack_1e8[0] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_1e8[0] & 0xff00ffffffffffff) - 8);
    }
    auStack_1e8[0] = 0;
    if ((uStack_548 & 1) != 0) {
      func_0x0412a280(uStack_538,uStack_548 & 0xfffffffffffffffe);
    }
    if ((uStack_458 & 1) != 0) {
      func_0x0412a280(dStack_448,uStack_458 & 0xfffffffffffffffe);
    }
    uStack_488 = param_4[2];
    uStack_498 = *param_4;
    uStack_490 = param_4[1];
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    func_0x0d686f30(auStack_138,&UNK_013be01f,0x17,param_1 + 0x3c8,&uStack_498);
    if ((uStack_498 & 1) != 0) {
      func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
    }
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x0d6afff0(&uStack_458,param_1 + 0x2f0,auStack_138,&uStack_478,1);
    if ((((~bStack_432 | bStack_3ac) & 1) == 0) && (*(long *)(param_1 + 0x340) != 0)) {
      lVar18 = func_0x0417cc60();
      plVar4 = *(long **)(param_1 + 0x340);
      if (plVar4 == (long *)0x0) goto LAB_0d2f7984;
      if (cStack_3fc == '\x02') {
        apppuStack_420[0] = apppuStack_420;
      }
      ppppuVar27 = (undefined8 ****)0x0;
      if (iStack_400 == 0x1c3397b1) {
        ppppuVar27 = (undefined8 ****)apppuStack_420[0];
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,ppppuVar27,&uStack_3f8);
      lVar19 = func_0x0417cc60();
      dStack_448 = (double)(lVar19 - lVar18) / _DAT_014f0138;
      bStack_440 = bStack_440 & ~bStack_3ac & bStack_432;
    }
    uVar12 = uStack_3b8;
    uVar11 = uStack_3d0;
    uVar22 = uStack_3e8;
    if (((~bStack_432 | bStack_3ac) & 1) == 0) {
      func_0x05ebb920(&uStack_548,&uStack_458);
      func_0x05ebb920(auStack_3a8,&uStack_548);
      func_0x05d85c50(&uStack_4e8);
      if (pcStack_4f8 != (code *)0x0) {
        (*pcStack_4f8)(auStack_510);
      }
      if ((uStack_518 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
      }
      uStack_518 = 0;
      if ((uStack_520 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_520 & 0xff00ffffffffffff) - 8);
      }
      uStack_520 = 0;
    }
    else {
      uStack_2f8 = (undefined4)uStack_3f8;
      uStack_2f4 = uStack_3f8._4_4_;
      uStack_2f0 = (undefined4)uStack_3f0;
      uStack_2ec = uStack_3f0._4_4_;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      uStack_2e0 = (undefined4)uStack_3e0;
      uStack_2dc = uStack_3e0._4_4_;
      uStack_2d8 = (undefined4)uStack_3d8;
      uStack_2d4 = uStack_3d8._4_4_;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_3d0 = 0;
      uStack_2c8 = (undefined4)uStack_3c8;
      uStack_2c4 = uStack_3c8._4_4_;
      uStack_2c0 = (undefined4)uStack_3c0;
      uStack_2bc = uStack_3c0._4_4_;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      uStack_3b8 = 0;
      bStack_23c = bStack_3ac;
      uStack_240 = uStack_3b0;
      uStack_2e8 = uVar22;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_2d0 = uVar11;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_2b8 = uVar12;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_2b0 = uStack_3b0;
      bStack_2ac = bStack_3ac;
      uStack_548 = 0;
      uStack_540 = 0;
      uStack_538 = 0;
      uStack_530._0_1_ = 1;
      lStack_528 = 0;
      uStack_520 = 0;
      uStack_518 = 0;
      puStack_500 = &UNK_0488e0b0;
      uStack_4f0 = 0x48b5725f;
      pcStack_4f8 = (code *)0x0;
      uStack_4ec = 0;
      auStack_510[0] = 0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      uStack_4c8 = 0;
      uStack_4c0 = 0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      uStack_4a8 = 0;
      uStack_4a0 = 0xfefffffc;
      uStack_49c = 0;
      func_0x0c4a4310(&uStack_4e8,&uStack_2f8);
      uStack_530 = (ulong)uStack_530._1_7_ << 8;
      func_0x05ebb920(auStack_1e8,&uStack_548);
      func_0x05d85c50(&uStack_4e8);
      if (pcStack_4f8 != (code *)0x0) {
        (*pcStack_4f8)(auStack_510);
      }
      if ((uStack_518 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
      }
      uStack_518 = 0;
      if ((uStack_520 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_520 & 0xff00ffffffffffff) - 8);
      }
      uStack_520 = 0;
      func_0x05d85c50(&uStack_2f8);
      func_0x05ebb920(&uStack_548,auStack_1e8);
      func_0x05ebb920(auStack_3a8,&uStack_548);
      func_0x05d85c50(&uStack_4e8);
      if (pcStack_4f8 != (code *)0x0) {
        (*pcStack_4f8)(auStack_510);
      }
      if ((uStack_518 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_518 & 0xff00ffffffffffff) - 8);
      }
      uStack_518 = 0;
      if ((uStack_520 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_520 & 0xff00ffffffffffff) - 8);
      }
      uStack_520 = 0;
      func_0x05d85c50(auStack_188);
      if (pcStack_198 != (code *)0x0) {
        (*pcStack_198)(auStack_1b0);
      }
      if ((uStack_1b8 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1b8 & 0xff00ffffffffffff) - 8);
      }
      uStack_1b8 = 0;
      if ((uStack_1c0 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_1c0 & 0xff00ffffffffffff) - 8);
      }
      uStack_1c0 = 0;
      func_0x05d85c50(&uStack_288);
    }
    func_0x05d85c50(&uStack_3f8);
    if (pcStack_408 != (code *)0x0) {
      (*pcStack_408)(apppuStack_420);
    }
    if ((uStack_428 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_428 & 0xff00ffffffffffff) - 8);
    }
    uStack_428 = 0;
    if ((uStack_430 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_430 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_468 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_468 & 0xff00ffffffffffff) - 8);
    }
    uStack_468 = 0;
    if ((uStack_470 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_470 & 0xff00ffffffffffff) - 8);
    }
    func_0x0d6b1c60(param_5,auStack_3a8);
    bVar13 = (bStack_2fc ^ 1) & bStack_382;
    if (bVar13 == 1) {
      pbVar24 = abStack_360;
      pbVar29 = (byte *)((long)&uStack_370 + 1);
      puVar17 = &uStack_368;
      pbVar28 = (byte *)&uStack_370;
      if (cStack_34c != '\x02') {
        puVar17 = (ulong *)(uStack_370 + 8);
        pbVar29 = uStack_370 + 1;
        pbVar24 = uStack_370 + 0x10;
        pbVar28 = uStack_370;
      }
      bVar32 = iStack_350 == 0x1c3397b1;
      pbVar20 = (byte *)0x10;
      if (bVar32) {
        pbVar20 = pbVar24;
      }
      pbVar24 = (byte *)0x1;
      if (bVar32) {
        pbVar24 = pbVar29;
      }
      puVar23 = (ulong *)0x8;
      if (bVar32) {
        puVar23 = puVar17;
      }
      bVar32 = (*pbVar28 & 1) != 0;
      if (bVar32) {
        pbVar24 = *(byte **)pbVar20;
      }
      uVar25 = (ulong)(*pbVar28 >> 1);
      if (bVar32) {
        uVar25 = *puVar23;
      }
      pbVar29 = *(byte **)(*(long *)(param_1 + 0x18) + 0x48);
      pbVar28 = *(byte **)(*(long *)(param_1 + 0x18) + 0x50);
      if (pbVar29 == pbVar28) {
LAB_0d2f7284:
        if (pbVar29 != pbVar28) goto LAB_0d2f7782;
      }
      else {
        do {
          bVar3 = *pbVar29;
          if ((bVar3 & 1) == 0) {
            uVar30 = (ulong)(bVar3 >> 1);
          }
          else {
            uVar30 = *(ulong *)(pbVar29 + 8);
          }
          if (uVar25 == uVar30) {
            if ((bVar3 & 1) == 0) {
              pbVar20 = pbVar29 + 1;
            }
            else {
              pbVar20 = *(byte **)(pbVar29 + 0x10);
            }
            iVar15 = func_0x0eee3000(pbVar24,pbVar20,uVar25);
            if (iVar15 == 0) goto LAB_0d2f7284;
          }
          pbVar29 = pbVar29 + 0x40;
        } while (pbVar29 != pbVar28);
      }
    }
    uStack_238 = 0xffffffff;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    cVar14 = func_0x0d5cf650(auStack_3a8,0x1f,&uStack_238);
    func_0x05f43a40(&uStack_238);
    if (cVar14 == '\0') {
      if (param_3 < 0x17) {
        uStack_548 = CONCAT71(uStack_548._1_7_,(char)param_3 * '\x02');
        uVar30 = (long)&uStack_548 + 1;
        if (param_3 != 0) goto LAB_0d2f7628;
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_548._1_1_ = 0;
      }
      else {
        uVar25 = 0x1a;
        if ((param_3 | 7) != 0x17) {
          uVar25 = (param_3 | 7) + 1;
        }
        uVar30 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar25);
        if (uVar30 == 0) {
          FUN_0eec74c0(uVar25,0);
        }
        uStack_548 = uVar25 | 1;
        uStack_540 = param_3;
        uStack_538 = uVar30;
LAB_0d2f7628:
        memcpy(uVar30,param_2,param_3);
        *(undefined1 *)(uVar30 + param_3) = 0;
      }
      uStack_458 = (long)&uStack_548 + 1;
      if ((uStack_548 & 1) != 0) {
        uStack_458 = uStack_538;
      }
      func_0x07310ef0(1,3,0x1f,&UNK_011cb7fe,&uStack_458);
      if ((uStack_548 & 1) != 0) {
        func_0x0412a280(uStack_538,uStack_548 & 0xfffffffffffffffe);
      }
LAB_0d2f7782:
      func_0x05d85c50(abStack_348);
      if (pcStack_358 != (code *)0x0) {
        (*pcStack_358)(&uStack_370);
      }
      if ((uStack_378 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_378 & 0xff00ffffffffffff) - 8);
      }
      uStack_378 = 0;
      if ((uStack_380 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_380 & 0xff00ffffffffffff) - 8);
      }
      func_0x05d85c50(auStack_80);
      if ((ulong)uStack_88 != 0xffffffff) {
        (**(code **)(&UNK_0f45fac8 + (ulong)uStack_88 * 8))(&uStack_548,auStack_e8);
      }
      uStack_88 = 0xffffffff;
      if ((bStack_100 & 1) != 0) {
        func_0x0412a280(uStack_f0,CONCAT71(uStack_ff,bStack_100) & 0xfffffffffffffffe);
      }
      if ((uStack_108 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_108 & 0xff00ffffffffffff) - 8);
      }
      uStack_108 = 0;
      if ((uStack_110 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_110 & 0xff00ffffffffffff) - 8);
      }
      uStack_110 = 0;
      if ((uStack_120 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_120 & 0xff00ffffffffffff) - 8);
      }
      uStack_120 = 0;
      if ((uStack_127 & 0x800000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))
                  (&DAT_0f5463b0,(CONCAT71(uStack_127,uStack_128) & 0xff00ffffffffffff) - 8);
      }
      func_0x0eeb81b0(auStack_2a0);
      return bVar13;
    }
    pbVar24 = (byte *)&uStack_370;
    if (cStack_34c != '\x02') {
      pbVar24 = uStack_370;
    }
    pbVar29 = (byte *)0x0;
    if (iStack_350 == 0x1c3397b1) {
      pbVar29 = pbVar24;
    }
    lVar18 = *(long *)(param_1 + 0x18);
    puVar5 = *(undefined8 **)(lVar18 + 0x50);
    if (puVar5 < *(undefined8 **)(lVar18 + 0x58)) {
      pbVar20 = abStack_338;
      pbVar24 = abStack_340;
      pbVar28 = abStack_348;
      ppcVar10 = &pcStack_358;
      if (cStack_34c != '\x02') {
        pbVar20 = uStack_370 + 0x38;
        pbVar24 = uStack_370 + 0x30;
        pbVar28 = uStack_370 + 0x28;
        ppcVar10 = (code **)(uStack_370 + 0x18);
      }
      bVar32 = iStack_350 == 0x1c3397b1;
      puVar5[2] = *(undefined8 *)(pbVar29 + 0x10);
      uVar22 = *(undefined8 *)(pbVar29 + 8);
      *puVar5 = *(undefined8 *)pbVar29;
      puVar5[1] = uVar22;
      pbVar29[0] = 0;
      pbVar29[1] = 0;
      pbVar29[2] = 0;
      pbVar29[3] = 0;
      pbVar29[4] = 0;
      pbVar29[5] = 0;
      pbVar29[6] = 0;
      pbVar29[7] = 0;
      pbVar29[8] = 0;
      pbVar29[9] = 0;
      pbVar29[10] = 0;
      pbVar29[0xb] = 0;
      pbVar29[0xc] = 0;
      pbVar29[0xd] = 0;
      pbVar29[0xe] = 0;
      pbVar29[0xf] = 0;
      ppcVar26 = (code **)0x18;
      if (bVar32) {
        ppcVar26 = ppcVar10;
      }
      pbVar29[0x10] = 0;
      pbVar29[0x11] = 0;
      pbVar29[0x12] = 0;
      pbVar29[0x13] = 0;
      pbVar29[0x14] = 0;
      pbVar29[0x15] = 0;
      pbVar29[0x16] = 0;
      pbVar29[0x17] = 0;
      pcVar9 = ppcVar26[1];
      puVar5[3] = *ppcVar26;
      puVar5[4] = pcVar9;
      pbVar29 = (byte *)0x28;
      if (bVar32) {
        pbVar29 = pbVar28;
      }
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      pbVar28 = (byte *)0x30;
      if (bVar32) {
        pbVar28 = pbVar24;
      }
      puVar5[5] = *(undefined8 *)pbVar29;
      puVar5[6] = *(undefined8 *)pbVar28;
      pbVar24 = (byte *)0x38;
      if (bVar32) {
        pbVar24 = pbVar20;
      }
      puVar5[7] = *(undefined8 *)pbVar24;
      pbVar29[0] = 0;
      pbVar29[1] = 0;
      pbVar29[2] = 0;
      pbVar29[3] = 0;
      pbVar29[4] = 0;
      pbVar29[5] = 0;
      pbVar29[6] = 0;
      pbVar29[7] = 0;
      pbVar29[8] = 0;
      pbVar29[9] = 0;
      pbVar29[10] = 0;
      pbVar29[0xb] = 0;
      pbVar29[0xc] = 0;
      pbVar29[0xd] = 0;
      pbVar29[0xe] = 0;
      pbVar29[0xf] = 0;
      pbVar29[0x10] = 0;
      pbVar29[0x11] = 0;
      pbVar29[0x12] = 0;
      pbVar29[0x13] = 0;
      pbVar29[0x14] = 0;
      pbVar29[0x15] = 0;
      pbVar29[0x16] = 0;
      pbVar29[0x17] = 0;
      *(undefined8 **)(lVar18 + 0x50) = puVar5 + 8;
      goto LAB_0d2f7782;
    }
    lVar19 = (long)puVar5 - *(long *)(lVar18 + 0x48);
    uVar25 = (lVar19 >> 6) + 1;
    if (uVar25 >> 0x3a == 0) {
      uVar21 = (long)*(undefined8 **)(lVar18 + 0x58) - *(long *)(lVar18 + 0x48);
      uVar30 = (long)uVar21 >> 5;
      if (uVar30 <= uVar25) {
        uVar30 = uVar25;
      }
      lVar1 = lVar18 + 0x48;
      if (0x7fffffffffffffbf < uVar21) {
        uVar30 = 0x3ffffffffffffff;
      }
      lStack_528 = lVar1;
      if (uVar30 == 0) {
        uVar25 = 0;
      }
      else {
        if (0x3ffffffffffffff < uVar30) goto LAB_0d2f798e;
        uVar25 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar30 << 6);
        if (uVar25 == 0) {
          FUN_0eec74c0(uVar30 << 6,0);
          uVar25 = 0;
        }
      }
      uStack_530 = uVar30 * 0x40 + uVar25;
      pbVar28 = abStack_340;
      pbVar24 = abStack_348;
      ppcVar10 = &pcStack_358;
      if (cStack_34c != '\x02') {
        pbVar28 = uStack_370 + 0x30;
        pbVar24 = uStack_370 + 0x28;
        ppcVar10 = (code **)(uStack_370 + 0x18);
      }
      uStack_540 = uVar25 + lVar19;
      pbVar20 = abStack_338;
      if (cStack_34c != '\x02') {
        pbVar20 = uStack_370 + 0x38;
      }
      bVar32 = iStack_350 == 0x1c3397b1;
      *(undefined8 *)(uVar25 + 0x10 + lVar19) = *(undefined8 *)(pbVar29 + 0x10);
      uVar22 = *(undefined8 *)(pbVar29 + 8);
      *(undefined8 *)(uVar25 + lVar19) = *(undefined8 *)pbVar29;
      ((undefined8 *)(uVar25 + lVar19))[1] = uVar22;
      pbVar29[0] = 0;
      pbVar29[1] = 0;
      pbVar29[2] = 0;
      pbVar29[3] = 0;
      pbVar29[4] = 0;
      pbVar29[5] = 0;
      pbVar29[6] = 0;
      pbVar29[7] = 0;
      pbVar29[8] = 0;
      pbVar29[9] = 0;
      pbVar29[10] = 0;
      pbVar29[0xb] = 0;
      pbVar29[0xc] = 0;
      pbVar29[0xd] = 0;
      pbVar29[0xe] = 0;
      pbVar29[0xf] = 0;
      pbVar29[0x10] = 0;
      pbVar29[0x11] = 0;
      pbVar29[0x12] = 0;
      pbVar29[0x13] = 0;
      pbVar29[0x14] = 0;
      pbVar29[0x15] = 0;
      pbVar29[0x16] = 0;
      pbVar29[0x17] = 0;
      ppcVar26 = (code **)0x18;
      if (bVar32) {
        ppcVar26 = ppcVar10;
      }
      uVar6 = *(undefined4 *)((long)ppcVar26 + 4);
      uVar7 = *(undefined4 *)(ppcVar26 + 1);
      uVar8 = *(undefined4 *)((long)ppcVar26 + 0xc);
      puVar2 = (undefined4 *)(uVar25 + 0x18 + lVar19);
      *puVar2 = *(undefined4 *)ppcVar26;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      pbVar29 = (byte *)0x28;
      if (bVar32) {
        pbVar29 = pbVar24;
      }
      *(undefined8 *)(uVar25 + 0x28 + lVar19) = *(undefined8 *)pbVar29;
      pbVar24 = (byte *)0x30;
      if (bVar32) {
        pbVar24 = pbVar28;
      }
      pbVar28 = (byte *)0x38;
      if (bVar32) {
        pbVar28 = pbVar20;
      }
      *(undefined8 *)(uVar25 + 0x30 + lVar19) = *(undefined8 *)pbVar24;
      *(undefined8 *)(uVar25 + 0x38 + lVar19) = *(undefined8 *)pbVar28;
      pbVar29[0] = 0;
      pbVar29[1] = 0;
      pbVar29[2] = 0;
      pbVar29[3] = 0;
      pbVar29[4] = 0;
      pbVar29[5] = 0;
      pbVar29[6] = 0;
      pbVar29[7] = 0;
      pbVar29[8] = 0;
      pbVar29[9] = 0;
      pbVar29[10] = 0;
      pbVar29[0xb] = 0;
      pbVar29[0xc] = 0;
      pbVar29[0xd] = 0;
      pbVar29[0xe] = 0;
      pbVar29[0xf] = 0;
      pbVar29[0x10] = 0;
      pbVar29[0x11] = 0;
      pbVar29[0x12] = 0;
      pbVar29[0x13] = 0;
      pbVar29[0x14] = 0;
      pbVar29[0x15] = 0;
      pbVar29[0x16] = 0;
      pbVar29[0x17] = 0;
      uStack_538 = uVar25 + 0x40 + lVar19;
      lVar31 = (*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x50)) + uStack_540;
      uStack_548 = uVar25;
      func_0x0d30b430(lVar1,*(long *)(lVar18 + 0x48),*(long *)(lVar18 + 0x50),lVar31);
      uVar25 = uStack_538;
      lVar19 = *(long *)(lVar18 + 0x48);
      lVar1 = *(long *)(lVar18 + 0x58);
      *(long *)(lVar18 + 0x48) = lVar31;
      *(undefined4 *)(lVar18 + 0x50) = (undefined4)uStack_538;
      *(undefined4 *)(lVar18 + 0x54) = uStack_538._4_4_;
      *(undefined4 *)(lVar18 + 0x58) = (undefined4)uStack_530;
      *(undefined4 *)(lVar18 + 0x5c) = uStack_530._4_4_;
      if (lVar19 != 0) {
        func_0x0412a280(lVar19,lVar1 - lVar19);
      }
      *(ulong *)(lVar18 + 0x50) = uVar25;
      goto LAB_0d2f7782;
    }
  }
  else {
    FUN_04882e30();
LAB_0d2f7984:
    func_0x04891200();
  }
  func_0x08499620();
LAB_0d2f798e:
  uVar22 = func_0x04882eb0();
  func_0x0d30b410(&uStack_548);
  func_0x05ebba90(auStack_3a8);
  func_0x05d59d60(auStack_138);
  do {
    do {
      func_0x0eeb81b0(auStack_2a0);
      uVar22 = func_0x0eee2d70(uVar22);
    } while ((uStack_498 & 1) == 0);
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  } while( true );
}


