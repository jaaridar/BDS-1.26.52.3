/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f7bb0 (ELF vaddr 0xd1f7bb0)
 * Label: string:Failed to parse jigsaw structure template pool '%s'.
 * Body:  [[0d2f7bb0, 0d2f8726] [0d2f8730, 0d2f8766] [0d2f8770, 0d2f8d0e] [0d2f8e33, 0d2f8e44] [0d2f8e62, 0d2f8eab]]
 * Ghidra: FUN_0d2f7bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0d2f7bb0(long param_1,undefined8 param_2,ulong param_3,ulong *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  code **ppcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  double dVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong *puVar23;
  code **ppcVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 ****ppppuVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  bool bVar31;
  uint uVar32;
  undefined4 uVar33;
  undefined8 uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  undefined1 uStack_530;
  undefined8 uStack_528;
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
  byte abStack_340 [68];
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
  uint auStack_138 [2];
  undefined4 uStack_130;
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
  
  if (0xfffffffffffffff7 < param_3) {
    func_0x04882e30();
LAB_0d2f8cfb:
    FUN_04891200();
LAB_0d2f8d00:
    func_0x0629e680();
LAB_0d2f8d05:
    uVar22 = FUN_04882eb0();
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
  if (param_3 < 0x17) {
    uStack_458 = CONCAT71(uStack_458._1_7_,(char)param_3 * '\x02');
    dVar14 = (double)((long)&uStack_458 + 1);
    if (param_3 != 0) goto LAB_0d2f7c52;
  }
  else {
    uVar28 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar28 = (param_3 | 7) + 1;
    }
    dVar14 = (double)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
    if (dVar14 == 0.0) {
      func_0x0eec74c0(uVar28,0);
    }
    uStack_458 = uVar28 | 1;
    uStack_450 = param_3;
    dStack_448 = dVar14;
LAB_0d2f7c52:
    func_0x0eee2f00(dVar14,param_2,param_3);
  }
  *(undefined1 *)((long)dVar14 + param_3) = 0;
  puVar15 = (ulong *)func_0x0412f0e0(&uStack_458,0,&UNK_012693be,0x2a);
  uStack_538 = puVar15[2];
  uStack_548 = *puVar15;
  uStack_540 = puVar15[1];
  *puVar15 = 0;
  puVar15[1] = 0;
  puVar15[2] = 0;
  uVar21 = uStack_538;
  uVar28 = uStack_540;
  if ((uStack_548 & 1) == 0) {
    uVar21 = (long)&uStack_548 + 1;
    uVar28 = uStack_548 >> 1 & 0x7f;
  }
  auStack_1e8[0] = 0;
  if (uVar21 == 0) {
    auStack_1e8[0] = (ulong)((uint)uVar28 & 0x7f) << 0x30;
  }
  else {
    lVar16 = uVar28 + 9;
    puVar15 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar16,8);
    if (lVar16 != 0 && puVar15 == (ulong *)0x0) {
      func_0x0eec74c0(lVar16,8);
    }
    *puVar15 = uVar28;
    func_0x0eee2f00(puVar15 + 1,uVar21,uVar28);
    *(undefined1 *)((long)puVar15 + uVar28 + 8) = 0;
    auStack_1e8[0] = (ulong)(puVar15 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  auStack_138[0] = auStack_138[0] & 0xffffff00;
  uStack_128 = 0;
  lVar16 = (ulong)uStack_127 << 8;
  uVar32 = auStack_138[0];
  func_0x0eeb79f0(auStack_2a0,auStack_1e8);
  uVar33 = uStack_130;
  if ((auStack_1e8[0] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_1e8[0] & 0xff00ffffffffffff) - 8);
    uVar33 = uStack_130;
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
  func_0x0d686f30(auStack_138,&UNK_0140afe9,0x17,param_1 + 0x1e8,&uStack_498,param_6,uVar32,uVar33,
                  lVar16);
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  func_0x0d6afff0(&uStack_458,param_1 + 0x110,auStack_138,&uStack_478,1);
  if ((((~bStack_432 | bStack_3ac) & 1) == 0) && (*(long *)(param_1 + 0x160) != 0)) {
    lVar16 = func_0x0417cc60();
    plVar6 = *(long **)(param_1 + 0x160);
    if (plVar6 == (long *)0x0) goto LAB_0d2f8cfb;
    if (cStack_3fc == '\x02') {
      apppuStack_420[0] = apppuStack_420;
    }
    ppppuVar27 = (undefined8 ****)0x0;
    if (iStack_400 == -0x35b7dabd) {
      ppppuVar27 = (undefined8 ****)apppuStack_420[0];
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,ppppuVar27,&uStack_3f8);
    lVar17 = func_0x0417cc60();
    dStack_448 = (double)(lVar17 - lVar16) / _DAT_014f0138;
    bStack_440 = bStack_440 & ~bStack_3ac & bStack_432;
  }
  uVar10 = uStack_3b8;
  uVar9 = uStack_3d0;
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
    uStack_2d0 = uVar9;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_2b8 = uVar10;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_2b0 = uStack_3b0;
    bStack_2ac = bStack_3ac;
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 1;
    uStack_528 = 0;
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
    uStack_530 = 0;
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
  bVar11 = (bStack_2fc ^ 1) & bStack_382;
  if (bVar11 == 1) {
    pbVar18 = abStack_360;
    pbVar30 = (byte *)((long)&uStack_370 + 1);
    puVar15 = &uStack_368;
    pbVar7 = (byte *)&uStack_370;
    if (cStack_34c != '\x02') {
      puVar15 = (ulong *)(uStack_370 + 8);
      pbVar30 = uStack_370 + 1;
      pbVar18 = uStack_370 + 0x10;
      pbVar7 = uStack_370;
    }
    bVar31 = iStack_350 == -0x35b7dabd;
    pbVar29 = (byte *)0x10;
    if (bVar31) {
      pbVar29 = pbVar18;
    }
    pbVar18 = (byte *)0x1;
    if (bVar31) {
      pbVar18 = pbVar30;
    }
    puVar23 = (ulong *)0x8;
    if (bVar31) {
      puVar23 = puVar15;
    }
    bVar31 = (*pbVar7 & 1) != 0;
    if (bVar31) {
      pbVar18 = *(byte **)pbVar29;
    }
    uVar28 = (ulong)(*pbVar7 >> 1);
    if (bVar31) {
      uVar28 = *puVar23;
    }
    pbVar30 = *(byte **)(*(long *)(param_1 + 0x18) + 0x18);
    pbVar7 = *(byte **)(*(long *)(param_1 + 0x18) + 0x20);
    if (pbVar30 == pbVar7) {
LAB_0d2f857b:
      if (pbVar30 != pbVar7) goto LAB_0d2f8a83;
    }
    else {
      do {
        bVar5 = *pbVar30;
        if ((bVar5 & 1) == 0) {
          uVar21 = (ulong)(bVar5 >> 1);
        }
        else {
          uVar21 = *(ulong *)(pbVar30 + 8);
        }
        if (uVar28 == uVar21) {
          if ((bVar5 & 1) == 0) {
            pbVar29 = pbVar30 + 1;
          }
          else {
            pbVar29 = *(byte **)(pbVar30 + 0x10);
          }
          iVar13 = func_0x0eee3000(pbVar18,pbVar29,uVar28);
          if (iVar13 == 0) goto LAB_0d2f857b;
        }
        pbVar30 = pbVar30 + 0x48;
      } while (pbVar30 != pbVar7);
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
  cVar12 = func_0x0d5cf650(auStack_3a8,0x1f,&uStack_238);
  func_0x05f43a40(&uStack_238);
  if (cVar12 != '\0') {
    lVar16 = *(long *)(param_1 + 0x18);
    pbVar18 = (byte *)&uStack_370;
    if (cStack_34c != '\x02') {
      pbVar18 = uStack_370;
    }
    pbVar30 = (byte *)0x0;
    if (iStack_350 == -0x35b7dabd) {
      pbVar30 = pbVar18;
    }
    puVar26 = *(undefined8 **)(lVar16 + 0x20);
    if (puVar26 < *(undefined8 **)(lVar16 + 0x28)) {
      ppcVar1 = (code **)(uStack_370 + 0x18);
      pbVar18 = uStack_370 + 0x20;
      pbVar7 = uStack_370 + 0x28;
      pbVar29 = uStack_370 + 0x30;
      if (cStack_34c == '\x02') {
        pbVar29 = abStack_340;
        pbVar7 = abStack_348;
        pbVar18 = (byte *)&iStack_350;
        ppcVar1 = &pcStack_358;
      }
      bVar31 = iStack_350 == -0x35b7dabd;
      puVar26[2] = *(undefined8 *)(pbVar30 + 0x10);
      uVar22 = *(undefined8 *)(pbVar30 + 8);
      *puVar26 = *(undefined8 *)pbVar30;
      puVar26[1] = uVar22;
      pbVar30[0] = 0;
      pbVar30[1] = 0;
      pbVar30[2] = 0;
      pbVar30[3] = 0;
      pbVar30[4] = 0;
      pbVar30[5] = 0;
      pbVar30[6] = 0;
      pbVar30[7] = 0;
      pbVar30[8] = 0;
      pbVar30[9] = 0;
      pbVar30[10] = 0;
      pbVar30[0xb] = 0;
      pbVar30[0xc] = 0;
      pbVar30[0xd] = 0;
      pbVar30[0xe] = 0;
      pbVar30[0xf] = 0;
      pbVar30[0x10] = 0;
      pbVar30[0x11] = 0;
      pbVar30[0x12] = 0;
      pbVar30[0x13] = 0;
      pbVar30[0x14] = 0;
      pbVar30[0x15] = 0;
      pbVar30[0x16] = 0;
      pbVar30[0x17] = 0;
      ppcVar24 = (code **)0x18;
      if (bVar31) {
        ppcVar24 = ppcVar1;
      }
      puVar26[3] = 0;
      puVar26[4] = 0;
      puVar26[5] = 0;
      pbVar30 = (byte *)0x20;
      if (bVar31) {
        pbVar30 = pbVar18;
      }
      puVar26[3] = *ppcVar24;
      puVar26[4] = *(undefined8 *)pbVar30;
      pbVar18 = (byte *)0x28;
      if (bVar31) {
        pbVar18 = pbVar7;
      }
      puVar26[5] = *(undefined8 *)pbVar18;
      *ppcVar24 = (code *)0x0;
      ppcVar24[1] = (code *)0x0;
      pbVar18 = (byte *)0x30;
      if (bVar31) {
        pbVar18 = pbVar29;
      }
      ppcVar24[2] = (code *)0x0;
      puVar26[8] = *(undefined8 *)(pbVar18 + 0x10);
      uVar22 = *(undefined8 *)(pbVar18 + 8);
      puVar26[6] = *(undefined8 *)pbVar18;
      puVar26[7] = uVar22;
      pbVar18[0] = 0;
      pbVar18[1] = 0;
      pbVar18[2] = 0;
      pbVar18[3] = 0;
      pbVar18[4] = 0;
      pbVar18[5] = 0;
      pbVar18[6] = 0;
      pbVar18[7] = 0;
      pbVar18[8] = 0;
      pbVar18[9] = 0;
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      pbVar18[0xc] = 0;
      pbVar18[0xd] = 0;
      pbVar18[0xe] = 0;
      pbVar18[0xf] = 0;
      pbVar18[0x10] = 0;
      pbVar18[0x11] = 0;
      pbVar18[0x12] = 0;
      pbVar18[0x13] = 0;
      pbVar18[0x14] = 0;
      pbVar18[0x15] = 0;
      pbVar18[0x16] = 0;
      pbVar18[0x17] = 0;
      puVar26 = puVar26 + 9;
    }
    else {
      lVar17 = (long)puVar26 - *(long *)(lVar16 + 0x18);
      uVar28 = (lVar17 >> 3) * -0x71c71c71c71c71c7 + 1;
      if (0x38e38e38e38e38e < uVar28) goto LAB_0d2f8d00;
      lVar19 = (long)*(undefined8 **)(lVar16 + 0x28) - *(long *)(lVar16 + 0x18) >> 3;
      uVar21 = lVar19 * 0x1c71c71c71c71c72;
      if (uVar28 < uVar21) {
        uVar28 = uVar21;
      }
      if (0x1c71c71c71c71c6 < (ulong)(lVar19 * -0x71c71c71c71c71c7)) {
        uVar28 = 0x38e38e38e38e38e;
      }
      if (0x38e38e38e38e38e < uVar28) goto LAB_0d2f8d05;
      lVar19 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
      if (lVar19 == 0) {
        func_0x0eec74c0(uVar28 * 0x48,0);
      }
      ppcVar1 = (code **)(uStack_370 + 0x18);
      pbVar18 = uStack_370 + 0x20;
      pbVar7 = uStack_370 + 0x28;
      pbVar29 = uStack_370 + 0x30;
      if (cStack_34c == '\x02') {
        pbVar29 = abStack_340;
        pbVar7 = abStack_348;
        pbVar18 = (byte *)&iStack_350;
        ppcVar1 = &pcStack_358;
      }
      bVar31 = iStack_350 == -0x35b7dabd;
      *(undefined8 *)(lVar19 + 0x10 + lVar17) = *(undefined8 *)(pbVar30 + 0x10);
      uVar22 = *(undefined8 *)(pbVar30 + 8);
      *(undefined8 *)(lVar19 + lVar17) = *(undefined8 *)pbVar30;
      ((undefined8 *)(lVar19 + lVar17))[1] = uVar22;
      pbVar30[0] = 0;
      pbVar30[1] = 0;
      pbVar30[2] = 0;
      pbVar30[3] = 0;
      pbVar30[4] = 0;
      pbVar30[5] = 0;
      pbVar30[6] = 0;
      pbVar30[7] = 0;
      pbVar30[8] = 0;
      pbVar30[9] = 0;
      pbVar30[10] = 0;
      pbVar30[0xb] = 0;
      pbVar30[0xc] = 0;
      pbVar30[0xd] = 0;
      pbVar30[0xe] = 0;
      pbVar30[0xf] = 0;
      pbVar30[0x10] = 0;
      pbVar30[0x11] = 0;
      pbVar30[0x12] = 0;
      pbVar30[0x13] = 0;
      pbVar30[0x14] = 0;
      pbVar30[0x15] = 0;
      pbVar30[0x16] = 0;
      pbVar30[0x17] = 0;
      ppcVar24 = (code **)0x18;
      if (bVar31) {
        ppcVar24 = ppcVar1;
      }
      *(code **)(lVar19 + 0x18 + lVar17) = *ppcVar24;
      pbVar30 = (byte *)0x20;
      if (bVar31) {
        pbVar30 = pbVar18;
      }
      pbVar18 = (byte *)0x28;
      if (bVar31) {
        pbVar18 = pbVar7;
      }
      *(undefined8 *)(lVar19 + 0x20 + lVar17) = *(undefined8 *)pbVar30;
      *(undefined8 *)(lVar19 + 0x28 + lVar17) = *(undefined8 *)pbVar18;
      *ppcVar24 = (code *)0x0;
      ppcVar24[1] = (code *)0x0;
      ppcVar24[2] = (code *)0x0;
      pbVar18 = (byte *)0x30;
      if (bVar31) {
        pbVar18 = pbVar29;
      }
      *(undefined8 *)(lVar19 + 0x40 + lVar17) = *(undefined8 *)(pbVar18 + 0x10);
      uVar22 = *(undefined8 *)(pbVar18 + 8);
      puVar26 = (undefined8 *)(lVar19 + 0x30 + lVar17);
      *puVar26 = *(undefined8 *)pbVar18;
      puVar26[1] = uVar22;
      pbVar18[0] = 0;
      pbVar18[1] = 0;
      pbVar18[2] = 0;
      pbVar18[3] = 0;
      pbVar18[4] = 0;
      pbVar18[5] = 0;
      pbVar18[6] = 0;
      pbVar18[7] = 0;
      pbVar18[8] = 0;
      pbVar18[9] = 0;
      pbVar18[10] = 0;
      pbVar18[0xb] = 0;
      pbVar18[0xc] = 0;
      pbVar18[0xd] = 0;
      pbVar18[0xe] = 0;
      pbVar18[0xf] = 0;
      pbVar18[0x10] = 0;
      pbVar18[0x11] = 0;
      pbVar18[0x12] = 0;
      pbVar18[0x13] = 0;
      pbVar18[0x14] = 0;
      pbVar18[0x15] = 0;
      pbVar18[0x16] = 0;
      pbVar18[0x17] = 0;
      puVar26 = (undefined8 *)(lVar19 + 0x48 + lVar17);
      lVar25 = *(long *)(lVar16 + 0x18);
      lVar8 = *(long *)(lVar16 + 0x20);
      lVar17 = (lVar25 - lVar8) + lVar19 + lVar17;
      if (lVar25 - lVar8 != 0) {
        lVar20 = 0;
        do {
          *(undefined8 *)(lVar17 + 0x10 + lVar20) = *(undefined8 *)(lVar25 + 0x10 + lVar20);
          uVar22 = ((undefined8 *)(lVar25 + lVar20))[1];
          *(undefined8 *)(lVar17 + lVar20) = *(undefined8 *)(lVar25 + lVar20);
          ((undefined8 *)(lVar17 + lVar20))[1] = uVar22;
          *(undefined8 *)(lVar25 + lVar20) = 0;
          ((undefined8 *)(lVar25 + lVar20))[1] = 0;
          *(undefined8 *)(lVar25 + 0x10 + lVar20) = 0;
          puVar3 = (undefined8 *)(lVar17 + 0x20 + lVar20);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3 = (undefined8 *)(lVar25 + 0x18 + lVar20);
          uVar22 = puVar3[1];
          puVar4 = (undefined8 *)(lVar17 + 0x18 + lVar20);
          *puVar4 = *puVar3;
          puVar4[1] = uVar22;
          *(undefined8 *)(lVar17 + 0x28 + lVar20) = *(undefined8 *)(lVar25 + 0x28 + lVar20);
          puVar3 = (undefined8 *)(lVar25 + 0x18 + lVar20);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(lVar25 + 0x28 + lVar20) = 0;
          *(undefined8 *)(lVar17 + 0x40 + lVar20) = *(undefined8 *)(lVar25 + 0x40 + lVar20);
          puVar3 = (undefined8 *)(lVar25 + 0x30 + lVar20);
          uVar22 = puVar3[1];
          puVar4 = (undefined8 *)(lVar17 + 0x30 + lVar20);
          *puVar4 = *puVar3;
          puVar4[1] = uVar22;
          puVar3 = (undefined8 *)(lVar25 + 0x30 + lVar20);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(lVar25 + 0x40 + lVar20) = 0;
          lVar2 = lVar25 + lVar20;
          lVar20 = lVar20 + 0x48;
        } while (lVar2 + 0x48 != lVar8);
        do {
          func_0x049ea190(lVar25);
          lVar25 = lVar25 + 0x48;
        } while (lVar25 != lVar8);
        lVar25 = *(long *)(lVar16 + 0x18);
      }
      *(long *)(lVar16 + 0x18) = lVar17;
      *(undefined8 **)(lVar16 + 0x20) = puVar26;
      lVar17 = *(long *)(lVar16 + 0x28);
      *(ulong *)(lVar16 + 0x28) = lVar19 + uVar28 * 0x48;
      if (lVar25 != 0) {
        func_0x0412a280(lVar25,lVar17 - lVar25);
      }
    }
    *(undefined8 **)(lVar16 + 0x20) = puVar26;
    goto LAB_0d2f8a83;
  }
  if (param_3 < 0x17) {
    uStack_548 = CONCAT71(uStack_548._1_7_,(char)param_3 * '\x02');
    uVar21 = (long)&uStack_548 + 1;
    if (param_3 != 0) goto LAB_0d2f8c8e;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_548._1_1_ = 0;
  }
  else {
    uVar28 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar28 = (param_3 | 7) + 1;
    }
    uVar21 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar28);
    if (uVar21 == 0) {
      func_0x0eec74c0(uVar28,0);
    }
    uStack_548 = uVar28 | 1;
    uStack_540 = param_3;
    uStack_538 = uVar21;
LAB_0d2f8c8e:
    func_0x0eee2f00(uVar21,param_2,param_3);
    *(undefined1 *)(uVar21 + param_3) = 0;
  }
  uStack_458 = (long)&uStack_548 + 1;
  if ((uStack_548 & 1) != 0) {
    uStack_458 = uStack_538;
  }
  func_0x04b0ace0(1,3,0x1f,&UNK_014711f8,&uStack_458);
  if ((uStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,uStack_548 & 0xfffffffffffffffe);
  }
LAB_0d2f8a83:
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
  return bVar11;
}


