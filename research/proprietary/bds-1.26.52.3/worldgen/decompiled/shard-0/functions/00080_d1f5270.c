/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f5270 (ELF vaddr 0xd1f5270)
 * Label: string:Failed to parse jigsaw structure definition '%s'.
 * Body:  [[0d2f5270, 0d2f5f72] [0d2f5f80, 0d2f5fb9] [0d2f5fc0, 0d2f66a8] [0d2f67d8, 0d2f67e6] [0d2f6804, 0d2f684d]]
 * Ghidra: FUN_0d2f5270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0d2f5270(long param_1,undefined8 param_2,ulong param_3,ulong *param_4,undefined8 param_5)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code **ppcVar19;
  byte bVar20;
  char cVar21;
  int iVar22;
  double dVar23;
  ulong *puVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  undefined8 *puVar28;
  ulong uVar29;
  byte *pbVar30;
  undefined8 uVar31;
  ulong *puVar32;
  long lVar33;
  code **ppcVar34;
  uint *puVar35;
  byte *pbVar36;
  undefined8 ****ppppuVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  ulong uVar44;
  bool bVar45;
  undefined8 uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  undefined8 *puStack_530;
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
  undefined1 auStack_348 [8];
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
  
  if (0xfffffffffffffff7 < param_3) {
    func_0x04882e30();
LAB_0d2f6678:
    func_0x04891200();
LAB_0d2f667d:
    func_0x08498ab0();
LAB_0d2f6682:
    uVar31 = func_0x04882eb0();
    uVar31 = FUN_04882e20(uVar31);
    uVar31 = FUN_04882e20(uVar31);
    func_0x0d30b3b0(&uStack_548);
    func_0x05ebba90(auStack_3a8);
    func_0x05d59d60(auStack_138);
    do {
      do {
        FUN_0eeb81b0(auStack_2a0);
        uVar31 = _Unwind_Resume(uVar31);
      } while ((uStack_498 & 1) == 0);
      func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
    } while( true );
  }
  if (param_3 < 0x17) {
    uStack_458 = CONCAT71(uStack_458._1_7_,(char)param_3 * '\x02');
    dVar23 = (double)((long)&uStack_458 + 1);
    if (param_3 != 0) goto LAB_0d2f5310;
  }
  else {
    uVar44 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar44 = (param_3 | 7) + 1;
    }
    dVar23 = (double)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
    if (dVar23 == 0.0) {
      FUN_0eec74c0(uVar44,0);
    }
    uStack_458 = uVar44 | 1;
    uStack_450 = param_3;
    dStack_448 = dVar23;
LAB_0d2f5310:
    func_0x0eee2f00(dVar23,param_2,param_3);
  }
  *(undefined1 *)((long)dVar23 + param_3) = 0;
  puVar24 = (ulong *)func_0x0412f0e0(&uStack_458,0,&UNK_014a66ef,0x27);
  uStack_538 = puVar24[2];
  uStack_548 = (undefined8 *)*puVar24;
  uStack_540 = puVar24[1];
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24[2] = 0;
  uVar29 = uStack_538;
  uVar44 = uStack_540;
  if (((ulong)uStack_548 & 1) == 0) {
    uVar29 = (long)&uStack_548 + 1;
    uVar44 = (ulong)uStack_548 >> 1 & 0x7f;
  }
  auStack_1e8[0] = 0;
  if (uVar29 == 0) {
    auStack_1e8[0] = (ulong)((uint)uVar44 & 0x7f) << 0x30;
  }
  else {
    lVar25 = uVar44 + 9;
    puVar24 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar25,8);
    if (lVar25 != 0 && puVar24 == (ulong *)0x0) {
      FUN_0eec74c0(lVar25,8);
    }
    *puVar24 = uVar44;
    func_0x0eee2f00(puVar24 + 1,uVar29,uVar44);
    *(undefined1 *)((long)puVar24 + uVar44 + 8) = 0;
    auStack_1e8[0] = (ulong)(puVar24 + 1) & 0xff00ffffffffffff | 0x80000000000000;
  }
  auStack_138[0] = auStack_138[0] & 0xffffff00;
  uStack_128 = 0;
  func_0x0eeb79f0(auStack_2a0,auStack_1e8);
  if ((auStack_1e8[0] & 0x80000000000000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_1e8[0] & 0xff00ffffffffffff) - 8);
  }
  auStack_1e8[0] = 0;
  if (((ulong)uStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,(ulong)uStack_548 & 0xfffffffffffffffe);
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
  func_0x0d686f30(auStack_138,&UNK_01457e1d,0x10,param_1 + 0x2d8,&uStack_498);
  if ((uStack_498 & 1) != 0) {
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  }
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  func_0x0d6afff0(&uStack_458,param_1 + 0x200,auStack_138,&uStack_478,1);
  if ((((~bStack_432 | bStack_3ac) & 1) == 0) && (*(long *)(param_1 + 0x250) != 0)) {
    lVar25 = func_0x0417cc60();
    plVar5 = *(long **)(param_1 + 0x250);
    if (plVar5 == (long *)0x0) goto LAB_0d2f6678;
    if (cStack_3fc == '\x02') {
      apppuStack_420[0] = apppuStack_420;
    }
    ppppuVar37 = (undefined8 ****)0x0;
    if (iStack_400 == -0x395acc56) {
      ppppuVar37 = (undefined8 ****)apppuStack_420[0];
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,ppppuVar37,&uStack_3f8);
    lVar26 = func_0x0417cc60();
    dStack_448 = (double)(lVar26 - lVar25) / _DAT_014f0138;
    bStack_440 = bStack_440 & ~bStack_3ac & bStack_432;
  }
  uVar18 = uStack_3b8;
  uVar17 = uStack_3d0;
  uVar31 = uStack_3e8;
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
    uStack_2e8 = uVar31;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_2d0 = uVar17;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_2b8 = uVar18;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_2b0 = uStack_3b0;
    bStack_2ac = bStack_3ac;
    uStack_548 = (undefined8 *)0x0;
    uStack_540 = 0;
    uStack_538 = 0;
    puStack_530._0_1_ = 1;
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
    puStack_530 = (undefined8 *)((ulong)puStack_530._1_7_ << 8);
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
  bVar20 = (bStack_2fc ^ 1) & bStack_382;
  if (bVar20 == 1) {
    pbVar36 = abStack_360;
    pbVar43 = (byte *)((long)&uStack_370 + 1);
    puVar24 = &uStack_368;
    pbVar39 = (byte *)&uStack_370;
    if (cStack_34c != '\x02') {
      puVar24 = (ulong *)(uStack_370 + 8);
      pbVar43 = uStack_370 + 1;
      pbVar36 = uStack_370 + 0x10;
      pbVar39 = uStack_370;
    }
    bVar45 = iStack_350 == -0x395acc56;
    pbVar38 = (byte *)0x10;
    if (bVar45) {
      pbVar38 = pbVar36;
    }
    pbVar36 = (byte *)0x1;
    if (bVar45) {
      pbVar36 = pbVar43;
    }
    puVar32 = (ulong *)0x8;
    if (bVar45) {
      puVar32 = puVar24;
    }
    bVar45 = (*pbVar39 & 1) != 0;
    if (bVar45) {
      pbVar36 = *(byte **)pbVar38;
    }
    uVar44 = (ulong)(*pbVar39 >> 1);
    if (bVar45) {
      uVar44 = *puVar32;
    }
    pbVar43 = *(byte **)(*(long *)(param_1 + 0x18) + 0x30);
    pbVar39 = *(byte **)(*(long *)(param_1 + 0x18) + 0x38);
    if (pbVar43 == pbVar39) {
LAB_0d2f5c44:
      if (pbVar43 != pbVar39) goto LAB_0d2f6476;
    }
    else {
      do {
        bVar3 = *pbVar43;
        if ((bVar3 & 1) == 0) {
          uVar29 = (ulong)(bVar3 >> 1);
        }
        else {
          uVar29 = *(ulong *)(pbVar43 + 8);
        }
        if (uVar44 == uVar29) {
          if ((bVar3 & 1) == 0) {
            pbVar38 = pbVar43 + 1;
          }
          else {
            pbVar38 = *(byte **)(pbVar43 + 0x10);
          }
          iVar22 = bcmp(pbVar36,pbVar38,uVar44);
          if (iVar22 == 0) goto LAB_0d2f5c44;
        }
        pbVar43 = pbVar43 + 0x168;
      } while (pbVar43 != pbVar39);
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
  cVar21 = func_0x0d5cf650(auStack_3a8,0x1f,&uStack_238);
  func_0x05f43a40(&uStack_238);
  if (cVar21 != '\0') {
    pbVar36 = (byte *)&uStack_370;
    if (cStack_34c != '\x02') {
      pbVar36 = uStack_370;
    }
    pbVar43 = (byte *)0x0;
    if (iStack_350 == -0x395acc56) {
      pbVar43 = pbVar36;
    }
    lVar25 = *(long *)(param_1 + 0x18);
    puVar28 = *(undefined8 **)(lVar25 + 0x38);
    if (puVar28 < *(undefined8 **)(lVar25 + 0x40)) {
      puVar27 = (uint *)&uStack_288;
      ppcVar19 = &pcStack_358;
      if (cStack_34c != '\x02') {
        puVar27 = (uint *)(uStack_370 + 0xe8);
        ppcVar19 = (code **)(uStack_370 + 0x18);
      }
      puVar28[2] = *(undefined8 *)(pbVar43 + 0x10);
      uVar31 = *(undefined8 *)(pbVar43 + 8);
      *puVar28 = *(undefined8 *)pbVar43;
      puVar28[1] = uVar31;
      pbVar43[0] = 0;
      pbVar43[1] = 0;
      pbVar43[2] = 0;
      pbVar43[3] = 0;
      pbVar43[4] = 0;
      pbVar43[5] = 0;
      pbVar43[6] = 0;
      pbVar43[7] = 0;
      pbVar43[8] = 0;
      pbVar43[9] = 0;
      pbVar43[10] = 0;
      pbVar43[0xb] = 0;
      pbVar43[0xc] = 0;
      pbVar43[0xd] = 0;
      pbVar43[0xe] = 0;
      pbVar43[0xf] = 0;
      pbVar43[0x10] = 0;
      pbVar43[0x11] = 0;
      pbVar43[0x12] = 0;
      pbVar43[0x13] = 0;
      pbVar43[0x14] = 0;
      pbVar43[0x15] = 0;
      pbVar43[0x16] = 0;
      pbVar43[0x17] = 0;
      ppcVar34 = (code **)0x18;
      if (iStack_350 == -0x395acc56) {
        ppcVar34 = ppcVar19;
      }
      puVar28[5] = ppcVar34[2];
      uVar6 = *(undefined4 *)((long)ppcVar34 + 4);
      uVar7 = *(undefined4 *)(ppcVar34 + 1);
      uVar8 = *(undefined4 *)((long)ppcVar34 + 0xc);
      *(undefined4 *)(puVar28 + 3) = *(undefined4 *)ppcVar34;
      *(undefined4 *)((long)puVar28 + 0x1c) = uVar6;
      *(undefined4 *)(puVar28 + 4) = uVar7;
      *(undefined4 *)((long)puVar28 + 0x24) = uVar8;
      *ppcVar34 = (code *)0x0;
      ppcVar34[1] = (code *)0x0;
      ppcVar34[2] = (code *)0x0;
      *(undefined1 *)(puVar28 + 6) = 0;
      puVar35 = (uint *)0xe8;
      if (iStack_350 == -0x395acc56) {
        puVar35 = puVar27;
      }
      *(undefined4 *)(puVar28 + 0x1d) = 0xffffffff;
      uVar4 = *puVar35;
      if ((ulong)uVar4 != 0xffffffff) {
        uStack_548 = puVar28 + 6;
        pbVar36 = abStack_340;
        if (cStack_34c != '\x02') {
          pbVar36 = uStack_370 + 0x30;
        }
        pbVar43 = (byte *)0x30;
        if (iStack_350 == -0x395acc56) {
          pbVar43 = pbVar36;
        }
        (**(code **)(&UNK_0f45fae0 + (ulong)uVar4 * 8))(&uStack_548,pbVar43);
        *(uint *)(puVar28 + 0x1d) = uVar4;
      }
      pbVar30 = (byte *)&uStack_210;
      pbVar36 = (byte *)&uStack_218;
      pbVar43 = (byte *)&uStack_220;
      pbVar39 = (byte *)&uStack_228;
      pbVar38 = (byte *)&uStack_260;
      pbVar42 = (byte *)&uStack_278;
      pbVar41 = (byte *)&uStack_280;
      if (cStack_34c != '\x02') {
        pbVar30 = uStack_370 + 0x160;
        pbVar36 = uStack_370 + 0x158;
        pbVar43 = uStack_370 + 0x150;
        pbVar39 = uStack_370 + 0x148;
        pbVar38 = uStack_370 + 0x110;
        pbVar42 = uStack_370 + 0xf8;
        pbVar41 = uStack_370 + 0xf0;
      }
      bVar45 = iStack_350 == -0x395acc56;
      pbVar40 = (byte *)0xf0;
      if (bVar45) {
        pbVar40 = pbVar41;
      }
      pbVar41 = (byte *)0xf8;
      if (bVar45) {
        pbVar41 = pbVar42;
      }
      *(undefined2 *)(puVar28 + 0x1e) = *(undefined2 *)pbVar40;
      puVar28[0x21] = *(undefined8 *)(pbVar41 + 0x10);
      uVar31 = *(undefined8 *)(pbVar41 + 8);
      puVar28[0x1f] = *(undefined8 *)pbVar41;
      puVar28[0x20] = uVar31;
      pbVar41[0] = 0;
      pbVar41[1] = 0;
      pbVar41[2] = 0;
      pbVar41[3] = 0;
      pbVar41[4] = 0;
      pbVar41[5] = 0;
      pbVar41[6] = 0;
      pbVar41[7] = 0;
      pbVar41[8] = 0;
      pbVar41[9] = 0;
      pbVar41[10] = 0;
      pbVar41[0xb] = 0;
      pbVar41[0xc] = 0;
      pbVar41[0xd] = 0;
      pbVar41[0xe] = 0;
      pbVar41[0xf] = 0;
      pbVar41[0x10] = 0;
      pbVar41[0x11] = 0;
      pbVar41[0x12] = 0;
      pbVar41[0x13] = 0;
      pbVar41[0x14] = 0;
      pbVar41[0x15] = 0;
      pbVar41[0x16] = 0;
      pbVar41[0x17] = 0;
      pbVar42 = (byte *)0x110;
      if (bVar45) {
        pbVar42 = pbVar38;
      }
      puVar28[0x28] = *(undefined8 *)(pbVar42 + 0x30);
      uVar6 = *(undefined4 *)pbVar42;
      uVar7 = *(undefined4 *)(pbVar42 + 4);
      uVar8 = *(undefined4 *)(pbVar42 + 8);
      uVar9 = *(undefined4 *)(pbVar42 + 0xc);
      uVar31 = *(undefined8 *)(pbVar42 + 0x10);
      uVar17 = *(undefined8 *)(pbVar42 + 0x18);
      uVar18 = *(undefined8 *)(pbVar42 + 0x28);
      puVar28[0x26] = *(undefined8 *)(pbVar42 + 0x20);
      puVar28[0x27] = uVar18;
      puVar28[0x24] = uVar31;
      puVar28[0x25] = uVar17;
      pbVar38 = (byte *)0x148;
      if (bVar45) {
        pbVar38 = pbVar39;
      }
      *(undefined4 *)(puVar28 + 0x22) = uVar6;
      *(undefined4 *)((long)puVar28 + 0x114) = uVar7;
      *(undefined4 *)(puVar28 + 0x23) = uVar8;
      *(undefined4 *)((long)puVar28 + 0x11c) = uVar9;
      puVar28[0x29] = 0;
      puVar28[0x2a] = 0;
      puVar28[0x2b] = 0;
      puVar28[0x29] = *(undefined8 *)pbVar38;
      pbVar39 = (byte *)0x150;
      if (bVar45) {
        pbVar39 = pbVar43;
      }
      pbVar43 = (byte *)0x158;
      if (bVar45) {
        pbVar43 = pbVar36;
      }
      puVar28[0x2a] = *(undefined8 *)pbVar39;
      puVar28[0x2b] = *(undefined8 *)pbVar43;
      pbVar38[0] = 0;
      pbVar38[1] = 0;
      pbVar38[2] = 0;
      pbVar38[3] = 0;
      pbVar38[4] = 0;
      pbVar38[5] = 0;
      pbVar38[6] = 0;
      pbVar38[7] = 0;
      pbVar38[8] = 0;
      pbVar38[9] = 0;
      pbVar38[10] = 0;
      pbVar38[0xb] = 0;
      pbVar38[0xc] = 0;
      pbVar38[0xd] = 0;
      pbVar38[0xe] = 0;
      pbVar38[0xf] = 0;
      pbVar38[0x10] = 0;
      pbVar38[0x11] = 0;
      pbVar38[0x12] = 0;
      pbVar38[0x13] = 0;
      pbVar38[0x14] = 0;
      pbVar38[0x15] = 0;
      pbVar38[0x16] = 0;
      pbVar38[0x17] = 0;
      pbVar36 = (byte *)0x160;
      if (bVar45) {
        pbVar36 = pbVar30;
      }
      *(byte *)(puVar28 + 0x2c) = *pbVar36;
      puVar28 = puVar28 + 0x2d;
    }
    else {
      lVar26 = (long)puVar28 - *(long *)(lVar25 + 0x30);
      uVar44 = (lVar26 >> 3) * 0x4fa4fa4fa4fa4fa5 + 1;
      if (0xb60b60b60b60b6 < uVar44) goto LAB_0d2f667d;
      lVar33 = (long)*(undefined8 **)(lVar25 + 0x40) - *(long *)(lVar25 + 0x30) >> 3;
      uVar29 = lVar33 * -0x60b60b60b60b60b6;
      if (uVar44 < uVar29) {
        uVar44 = uVar29;
      }
      lVar1 = lVar25 + 0x30;
      if (0x5b05b05b05b05a < (ulong)(lVar33 * 0x4fa4fa4fa4fa4fa5)) {
        uVar44 = 0xb60b60b60b60b6;
      }
      lStack_528 = lVar1;
      if (uVar44 == 0) {
        puVar28 = (undefined8 *)0x0;
      }
      else {
        if (0xb60b60b60b60b6 < uVar44) goto LAB_0d2f6682;
        puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44 * 0x168);
        if (puVar28 == (undefined8 *)0x0) {
          FUN_0eec74c0(uVar44 * 0x168,0);
          puVar28 = (undefined8 *)0x0;
        }
      }
      uVar29 = (long)puVar28 + lVar26;
      puStack_530 = puVar28 + uVar44 * 0x2d;
      puVar27 = (uint *)&uStack_288;
      ppcVar19 = &pcStack_358;
      if (cStack_34c != '\x02') {
        puVar27 = (uint *)(uStack_370 + 0xe8);
        ppcVar19 = (code **)(uStack_370 + 0x18);
      }
      *(undefined8 *)((long)puVar28 + lVar26 + 0x10) = *(undefined8 *)(pbVar43 + 0x10);
      uVar31 = *(undefined8 *)(pbVar43 + 8);
      *(undefined8 *)((long)puVar28 + lVar26) = *(undefined8 *)pbVar43;
      ((undefined8 *)((long)puVar28 + lVar26))[1] = uVar31;
      pbVar43[0] = 0;
      pbVar43[1] = 0;
      pbVar43[2] = 0;
      pbVar43[3] = 0;
      pbVar43[4] = 0;
      pbVar43[5] = 0;
      pbVar43[6] = 0;
      pbVar43[7] = 0;
      pbVar43[8] = 0;
      pbVar43[9] = 0;
      pbVar43[10] = 0;
      pbVar43[0xb] = 0;
      pbVar43[0xc] = 0;
      pbVar43[0xd] = 0;
      pbVar43[0xe] = 0;
      pbVar43[0xf] = 0;
      pbVar43[0x10] = 0;
      pbVar43[0x11] = 0;
      pbVar43[0x12] = 0;
      pbVar43[0x13] = 0;
      pbVar43[0x14] = 0;
      pbVar43[0x15] = 0;
      pbVar43[0x16] = 0;
      pbVar43[0x17] = 0;
      ppcVar34 = (code **)0x18;
      if (iStack_350 == -0x395acc56) {
        ppcVar34 = ppcVar19;
      }
      *(code **)((long)puVar28 + lVar26 + 0x28) = ppcVar34[2];
      uVar6 = *(undefined4 *)((long)ppcVar34 + 4);
      uVar7 = *(undefined4 *)(ppcVar34 + 1);
      uVar8 = *(undefined4 *)((long)ppcVar34 + 0xc);
      puVar2 = (undefined4 *)((long)puVar28 + lVar26 + 0x18);
      *puVar2 = *(undefined4 *)ppcVar34;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      *ppcVar34 = (code *)0x0;
      ppcVar34[1] = (code *)0x0;
      ppcVar34[2] = (code *)0x0;
      *(undefined1 *)((long)puVar28 + lVar26 + 0x30) = 0;
      puVar35 = (uint *)0xe8;
      if (iStack_350 == -0x395acc56) {
        puVar35 = puVar27;
      }
      *(undefined4 *)((long)puVar28 + lVar26 + 0xe8) = 0xffffffff;
      uVar4 = *puVar35;
      uStack_548 = puVar28;
      uStack_540 = uVar29;
      if ((ulong)uVar4 != 0xffffffff) {
        uStack_458 = (long)puVar28 + lVar26 + 0x30;
        pbVar36 = abStack_340;
        if (cStack_34c != '\x02') {
          pbVar36 = uStack_370 + 0x30;
        }
        pbVar43 = (byte *)0x30;
        if (iStack_350 == -0x395acc56) {
          pbVar43 = pbVar36;
        }
        uStack_538 = uVar29;
        (**(code **)(&UNK_0f45fae0 + (ulong)uVar4 * 8))(&uStack_458,pbVar43);
        *(uint *)(uVar29 + 0xe8) = uVar4;
      }
      pbVar30 = (byte *)&uStack_210;
      pbVar36 = (byte *)&uStack_218;
      pbVar43 = (byte *)&uStack_220;
      pbVar39 = (byte *)&uStack_228;
      pbVar38 = (byte *)&uStack_260;
      pbVar42 = (byte *)&uStack_278;
      pbVar41 = (byte *)&uStack_280;
      if (cStack_34c != '\x02') {
        pbVar30 = uStack_370 + 0x160;
        pbVar36 = uStack_370 + 0x158;
        pbVar43 = uStack_370 + 0x150;
        pbVar39 = uStack_370 + 0x148;
        pbVar38 = uStack_370 + 0x110;
        pbVar42 = uStack_370 + 0xf8;
        pbVar41 = uStack_370 + 0xf0;
      }
      bVar45 = iStack_350 == -0x395acc56;
      pbVar40 = (byte *)0xf0;
      if (bVar45) {
        pbVar40 = pbVar41;
      }
      *(undefined2 *)(uVar29 + 0xf0) = *(undefined2 *)pbVar40;
      pbVar41 = (byte *)0xf8;
      if (bVar45) {
        pbVar41 = pbVar42;
      }
      *(undefined8 *)(uVar29 + 0x108) = *(undefined8 *)(pbVar41 + 0x10);
      uVar31 = *(undefined8 *)(pbVar41 + 8);
      *(undefined8 *)(uVar29 + 0xf8) = *(undefined8 *)pbVar41;
      *(undefined8 *)(uVar29 + 0x100) = uVar31;
      pbVar41[0] = 0;
      pbVar41[1] = 0;
      pbVar41[2] = 0;
      pbVar41[3] = 0;
      pbVar41[4] = 0;
      pbVar41[5] = 0;
      pbVar41[6] = 0;
      pbVar41[7] = 0;
      pbVar41[8] = 0;
      pbVar41[9] = 0;
      pbVar41[10] = 0;
      pbVar41[0xb] = 0;
      pbVar41[0xc] = 0;
      pbVar41[0xd] = 0;
      pbVar41[0xe] = 0;
      pbVar41[0xf] = 0;
      pbVar41[0x10] = 0;
      pbVar41[0x11] = 0;
      pbVar41[0x12] = 0;
      pbVar41[0x13] = 0;
      pbVar41[0x14] = 0;
      pbVar41[0x15] = 0;
      pbVar41[0x16] = 0;
      pbVar41[0x17] = 0;
      pbVar42 = (byte *)0x110;
      if (bVar45) {
        pbVar42 = pbVar38;
      }
      *(undefined8 *)(uVar29 + 0x140) = *(undefined8 *)(pbVar42 + 0x30);
      uVar6 = *(undefined4 *)pbVar42;
      uVar7 = *(undefined4 *)(pbVar42 + 4);
      uVar8 = *(undefined4 *)(pbVar42 + 8);
      uVar9 = *(undefined4 *)(pbVar42 + 0xc);
      uVar10 = *(undefined4 *)(pbVar42 + 0x10);
      uVar11 = *(undefined4 *)(pbVar42 + 0x14);
      uVar12 = *(undefined4 *)(pbVar42 + 0x18);
      uVar13 = *(undefined4 *)(pbVar42 + 0x1c);
      uVar14 = *(undefined4 *)(pbVar42 + 0x24);
      uVar15 = *(undefined4 *)(pbVar42 + 0x28);
      uVar16 = *(undefined4 *)(pbVar42 + 0x2c);
      *(undefined4 *)(uVar29 + 0x130) = *(undefined4 *)(pbVar42 + 0x20);
      *(undefined4 *)(uVar29 + 0x134) = uVar14;
      *(undefined4 *)(uVar29 + 0x138) = uVar15;
      *(undefined4 *)(uVar29 + 0x13c) = uVar16;
      *(undefined4 *)(uVar29 + 0x120) = uVar10;
      *(undefined4 *)(uVar29 + 0x124) = uVar11;
      *(undefined4 *)(uVar29 + 0x128) = uVar12;
      *(undefined4 *)(uVar29 + 300) = uVar13;
      *(undefined4 *)(uVar29 + 0x110) = uVar6;
      *(undefined4 *)(uVar29 + 0x114) = uVar7;
      *(undefined4 *)(uVar29 + 0x118) = uVar8;
      *(undefined4 *)(uVar29 + 0x11c) = uVar9;
      pbVar38 = (byte *)0x148;
      if (bVar45) {
        pbVar38 = pbVar39;
      }
      *(undefined8 *)(uVar29 + 0x148) = *(undefined8 *)pbVar38;
      pbVar39 = (byte *)0x150;
      if (bVar45) {
        pbVar39 = pbVar43;
      }
      pbVar43 = (byte *)0x158;
      if (bVar45) {
        pbVar43 = pbVar36;
      }
      *(undefined8 *)(uVar29 + 0x150) = *(undefined8 *)pbVar39;
      *(undefined8 *)(uVar29 + 0x158) = *(undefined8 *)pbVar43;
      pbVar38[0] = 0;
      pbVar38[1] = 0;
      pbVar38[2] = 0;
      pbVar38[3] = 0;
      pbVar38[4] = 0;
      pbVar38[5] = 0;
      pbVar38[6] = 0;
      pbVar38[7] = 0;
      pbVar38[8] = 0;
      pbVar38[9] = 0;
      pbVar38[10] = 0;
      pbVar38[0xb] = 0;
      pbVar38[0xc] = 0;
      pbVar38[0xd] = 0;
      pbVar38[0xe] = 0;
      pbVar38[0xf] = 0;
      pbVar38[0x10] = 0;
      pbVar38[0x11] = 0;
      pbVar38[0x12] = 0;
      pbVar38[0x13] = 0;
      pbVar38[0x14] = 0;
      pbVar38[0x15] = 0;
      pbVar38[0x16] = 0;
      pbVar38[0x17] = 0;
      pbVar36 = (byte *)0x160;
      if (bVar45) {
        pbVar36 = pbVar30;
      }
      *(byte *)(uVar29 + 0x160) = *pbVar36;
      uStack_538 = uVar29 + 0x168;
      func_0x0d30b150(lVar1,&uStack_548);
      uVar44 = uStack_540;
      puVar28 = *(undefined8 **)(lVar25 + 0x38);
      while (uVar44 != uStack_538) {
        uStack_538 = uStack_538 - 0x168;
        func_0x049e9b20();
      }
      if (uStack_548 != (undefined8 *)0x0) {
        func_0x0412a280(uStack_548,(long)puStack_530 - (long)uStack_548);
      }
    }
    *(undefined8 **)(lVar25 + 0x38) = puVar28;
    goto LAB_0d2f6476;
  }
  if (param_3 < 0x17) {
    uStack_548 = (undefined8 *)CONCAT71(uStack_548._1_7_,(char)param_3 * '\x02');
    uVar29 = (long)&uStack_548 + 1;
    if (param_3 != 0) goto LAB_0d2f6162;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_548._1_1_ = 0;
  }
  else {
    uVar44 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar44 = (param_3 | 7) + 1;
    }
    uVar29 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
    if (uVar29 == 0) {
      FUN_0eec74c0(uVar44,0);
    }
    uStack_548 = (undefined8 *)(uVar44 | 1);
    uStack_540 = param_3;
    uStack_538 = uVar29;
LAB_0d2f6162:
    func_0x0eee2f00(uVar29,param_2,param_3);
    *(undefined1 *)(uVar29 + param_3) = 0;
  }
  uStack_458 = (long)&uStack_548 + 1;
  if (((ulong)uStack_548 & 1) != 0) {
    uStack_458 = uStack_538;
  }
  func_0x09b479d0(1,3,0x1f,&UNK_014249c5,&uStack_458);
  if (((ulong)uStack_548 & 1) != 0) {
    func_0x0412a280(uStack_538,(ulong)uStack_548 & 0xfffffffffffffffe);
  }
LAB_0d2f6476:
  func_0x05d85c50(auStack_348);
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
  FUN_0eeb81b0(auStack_2a0);
  return bVar20;
}


