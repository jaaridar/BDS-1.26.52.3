/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd2f3fc0 (ELF vaddr 0xd1f3fc0)
 * Label: string:Failed to parse jigsaw structure processor list '%s'.
 * Body:  [[0d2f3fc0, 0d2f4b0e] [0d2f4b10, 0d2f4b46] [0d2f4b50, 0d2f5062] [0d2f5192, 0d2f51a0] [0d2f51be, 0d2f5207]]
 * Ghidra: FUN_0d2f3fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0d2f3fc0(long param_1,undefined8 param_2,ulong param_3,ulong *param_4,undefined8 param_5)

{
  code **ppcVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  double dVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong *puVar15;
  byte *pbVar16;
  byte bVar17;
  undefined8 ****ppppuVar18;
  byte *pbVar19;
  code **ppcVar20;
  byte *pbVar21;
  byte *pbVar22;
  long lVar23;
  ulong uVar24;
  bool bVar25;
  undefined8 uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  long lStack_530;
  long *plStack_528;
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
  undefined8 uStack_460;
  ulong uStack_458;
  double dStack_450;
  byte bStack_448;
  byte bStack_43a;
  ulong uStack_438;
  ulong uStack_430;
  undefined8 ***apppuStack_428 [3];
  code *pcStack_410;
  int iStack_408;
  char cStack_404;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  byte bStack_3b4;
  undefined8 uStack_3b0;
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
  byte abStack_348 [76];
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
      uStack_460 = CONCAT71(uStack_460._1_7_,(char)param_3 * '\x02');
      dVar9 = (double)((long)&uStack_460 + 1);
      if (param_3 != 0) goto LAB_0d2f4060;
    }
    else {
      uVar24 = 0x1a;
      if ((param_3 | 7) != 0x17) {
        uVar24 = (param_3 | 7) + 1;
      }
      dVar9 = (double)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
      if (dVar9 == 0.0) {
        func_0x0eec74c0(uVar24,0);
      }
      uStack_460 = uVar24 | 1;
      uStack_458 = param_3;
      dStack_450 = dVar9;
LAB_0d2f4060:
      memcpy(dVar9,param_2,param_3);
    }
    uStack_3b0 = param_2;
    *(undefined1 *)((long)dVar9 + param_3) = 0;
    puVar10 = (ulong *)func_0x0412f0e0(&uStack_460,0,&UNK_011afef2,0x2b);
    uStack_538 = puVar10[2];
    uStack_548 = *puVar10;
    uStack_540 = puVar10[1];
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    uVar13 = uStack_538;
    uVar24 = uStack_540;
    if ((uStack_548 & 1) == 0) {
      uVar13 = (long)&uStack_548 + 1;
      uVar24 = uStack_548 >> 1 & 0x7f;
    }
    auStack_1e8[0] = 0;
    if (uVar13 == 0) {
      auStack_1e8[0] = (ulong)((uint)uVar24 & 0x7f) << 0x30;
    }
    else {
      lVar11 = uVar24 + 9;
      puVar10 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar11,8);
      if (lVar11 != 0 && puVar10 == (ulong *)0x0) {
        func_0x0eec74c0(lVar11,8);
      }
      *puVar10 = uVar24;
      memcpy(puVar10 + 1,uVar13,uVar24);
      *(undefined1 *)((long)puVar10 + uVar24 + 8) = 0;
      auStack_1e8[0] = (ulong)(puVar10 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    auStack_138[0] = auStack_138[0] & 0xffffff00;
    uStack_128 = 0;
    FUN_0eeb79f0(auStack_2a0,auStack_1e8);
    if ((auStack_1e8[0] & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(auStack_1e8[0] & 0xff00ffffffffffff) - 8);
    }
    auStack_1e8[0] = 0;
    if ((uStack_548 & 1) != 0) {
      func_0x0412a280(uStack_538,uStack_548 & 0xfffffffffffffffe);
    }
    if ((uStack_460 & 1) != 0) {
      func_0x0412a280(dStack_450,uStack_460 & 0xfffffffffffffffe);
    }
    uStack_488 = param_4[2];
    uStack_498 = *param_4;
    uStack_490 = param_4[1];
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    func_0x0d686f30(auStack_138,&UNK_012693e9,0x18,param_1 + 0xf8,&uStack_498);
    if ((uStack_498 & 1) != 0) {
      func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
    }
    uStack_478 = 0;
    uStack_470 = 0;
    uStack_468 = 0;
    func_0x0d6afff0(&uStack_460,param_1 + 0x20,auStack_138,&uStack_478,1);
    if ((((~bStack_43a | bStack_3b4) & 1) == 0) && (*(long *)(param_1 + 0x70) != 0)) {
      lVar11 = func_0x0417cc60();
      plVar3 = *(long **)(param_1 + 0x70);
      if (plVar3 == (long *)0x0) goto LAB_0d2f5042;
      if (cStack_404 == '\x02') {
        apppuStack_428[0] = apppuStack_428;
      }
      ppppuVar18 = (undefined8 ****)0x0;
      if (iStack_408 == 0x29447e85) {
        ppppuVar18 = (undefined8 ****)apppuStack_428[0];
      }
      (**(code **)(*plVar3 + 0x30))(plVar3,ppppuVar18,&uStack_400);
      lVar12 = func_0x0417cc60();
      dStack_450 = (double)(lVar12 - lVar11) / _DAT_014f0138;
      bStack_448 = bStack_448 & ~bStack_3b4 & bStack_43a;
    }
    uVar6 = uStack_3c0;
    uVar5 = uStack_3d8;
    uVar14 = uStack_3f0;
    if (((~bStack_43a | bStack_3b4) & 1) == 0) {
      func_0x05ebb920(&uStack_548,&uStack_460);
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
      uStack_2f8 = (undefined4)uStack_400;
      uStack_2f4 = uStack_400._4_4_;
      uStack_2f0 = (undefined4)uStack_3f8;
      uStack_2ec = uStack_3f8._4_4_;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_2e0 = (undefined4)uStack_3e8;
      uStack_2dc = uStack_3e8._4_4_;
      uStack_2d8 = (undefined4)uStack_3e0;
      uStack_2d4 = uStack_3e0._4_4_;
      uStack_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3d8 = 0;
      uStack_2c8 = (undefined4)uStack_3d0;
      uStack_2c4 = uStack_3d0._4_4_;
      uStack_2c0 = (undefined4)uStack_3c8;
      uStack_2bc = uStack_3c8._4_4_;
      uStack_3d0 = 0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      bStack_23c = bStack_3b4;
      uStack_240 = uStack_3b8;
      uStack_2e8 = uVar14;
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_2d0 = uVar5;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_2b8 = uVar6;
      uStack_258 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_2b0 = uStack_3b8;
      bStack_2ac = bStack_3b4;
      uStack_548 = 0;
      uStack_540 = 0;
      uStack_538 = 0;
      lStack_530._0_1_ = 1;
      plStack_528 = (long *)0x0;
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
      lStack_530 = (ulong)lStack_530._1_7_ << 8;
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
    func_0x05d85c50(&uStack_400);
    if (pcStack_410 != (code *)0x0) {
      (*pcStack_410)(apppuStack_428);
    }
    if ((uStack_430 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_430 & 0xff00ffffffffffff) - 8);
    }
    uStack_430 = 0;
    if ((uStack_438 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_438 & 0xff00ffffffffffff) - 8);
    }
    if ((uStack_468 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_468 & 0xff00ffffffffffff) - 8);
    }
    uStack_468 = 0;
    if ((uStack_470 & 0x80000000000000) != 0) {
      (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_470 & 0xff00ffffffffffff) - 8);
    }
    func_0x0d6b1c60(param_5,auStack_3a8);
    bVar17 = (bStack_2fc ^ 1) & bStack_382;
    if (bVar17 == 1) {
      pbVar16 = abStack_360;
      pbVar22 = (byte *)((long)&uStack_370 + 1);
      puVar10 = &uStack_368;
      pbVar21 = (byte *)&uStack_370;
      if (cStack_34c != '\x02') {
        puVar10 = (ulong *)(uStack_370 + 8);
        pbVar22 = uStack_370 + 1;
        pbVar16 = uStack_370 + 0x10;
        pbVar21 = uStack_370;
      }
      bVar25 = iStack_350 == 0x29447e85;
      pbVar19 = (byte *)0x10;
      if (bVar25) {
        pbVar19 = pbVar16;
      }
      pbVar16 = (byte *)0x1;
      if (bVar25) {
        pbVar16 = pbVar22;
      }
      puVar15 = (ulong *)0x8;
      if (bVar25) {
        puVar15 = puVar10;
      }
      bVar25 = (*pbVar21 & 1) != 0;
      if (bVar25) {
        pbVar16 = *(byte **)pbVar19;
      }
      uVar24 = (ulong)(*pbVar21 >> 1);
      if (bVar25) {
        uVar24 = *puVar15;
      }
      pbVar22 = (byte *)**(undefined8 **)(param_1 + 0x18);
      pbVar21 = (byte *)(*(undefined8 **)(param_1 + 0x18))[1];
      if (pbVar22 == pbVar21) {
LAB_0d2f498b:
        if (pbVar22 != pbVar21) goto LAB_0d2f4e43;
      }
      else {
        do {
          bVar2 = *pbVar22;
          if ((bVar2 & 1) == 0) {
            uVar13 = (ulong)(bVar2 >> 1);
          }
          else {
            uVar13 = *(ulong *)(pbVar22 + 8);
          }
          if (uVar24 == uVar13) {
            if ((bVar2 & 1) == 0) {
              pbVar19 = pbVar22 + 1;
            }
            else {
              pbVar19 = *(byte **)(pbVar22 + 0x10);
            }
            iVar8 = func_0x0eee3000(pbVar16,pbVar19,uVar24);
            if (iVar8 == 0) goto LAB_0d2f498b;
          }
          pbVar22 = pbVar22 + 0x30;
        } while (pbVar22 != pbVar21);
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
    cVar7 = func_0x0d5cf650(auStack_3a8,0x1f,&uStack_238);
    func_0x05f43a40(&uStack_238);
    if (cVar7 == '\0') {
      if (param_3 < 0x17) {
        uStack_548 = CONCAT71(uStack_548._1_7_,(char)param_3 * '\x02');
        uVar13 = (long)&uStack_548 + 1;
        if (param_3 != 0) goto LAB_0d2f4d09;
                    /* WARNING: Ignoring partial resolution of indirect */
        uStack_548._1_1_ = 0;
      }
      else {
        uVar24 = 0x1a;
        if ((param_3 | 7) != 0x17) {
          uVar24 = (param_3 | 7) + 1;
        }
        uVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar24);
        if (uVar13 == 0) {
          func_0x0eec74c0(uVar24,0);
        }
        uStack_548 = uVar24 | 1;
        uStack_540 = param_3;
        uStack_538 = uVar13;
LAB_0d2f4d09:
        memcpy(uVar13,uStack_3b0,param_3);
        *(undefined1 *)(uVar13 + param_3) = 0;
      }
      uStack_460 = (long)&uStack_548 + 1;
      if ((uStack_548 & 1) != 0) {
        uStack_460 = uStack_538;
      }
      func_0x06ef7140(1,3,0x1f,&UNK_01388da3,&uStack_460);
      if ((uStack_548 & 1) != 0) {
        func_0x0412a280(uStack_538,uStack_548 & 0xfffffffffffffffe);
      }
LAB_0d2f4e43:
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
      return bVar17;
    }
    plVar3 = *(long **)(param_1 + 0x18);
    pbVar16 = (byte *)&uStack_370;
    if (cStack_34c != '\x02') {
      pbVar16 = uStack_370;
    }
    pbVar22 = (byte *)0x0;
    if (iStack_350 == 0x29447e85) {
      pbVar22 = pbVar16;
    }
    puVar4 = (undefined8 *)plVar3[1];
    if (puVar4 < (undefined8 *)plVar3[2]) {
      ppcVar1 = (code **)(uStack_370 + 0x18);
      pbVar16 = uStack_370 + 0x20;
      pbVar21 = uStack_370 + 0x28;
      if (cStack_34c == '\x02') {
        pbVar21 = abStack_348;
        pbVar16 = (byte *)&iStack_350;
        ppcVar1 = &pcStack_358;
      }
      bVar25 = iStack_350 == 0x29447e85;
      puVar4[2] = *(undefined8 *)(pbVar22 + 0x10);
      uVar14 = *(undefined8 *)(pbVar22 + 8);
      *puVar4 = *(undefined8 *)pbVar22;
      puVar4[1] = uVar14;
      pbVar22[0] = 0;
      pbVar22[1] = 0;
      pbVar22[2] = 0;
      pbVar22[3] = 0;
      pbVar22[4] = 0;
      pbVar22[5] = 0;
      pbVar22[6] = 0;
      pbVar22[7] = 0;
      pbVar22[8] = 0;
      pbVar22[9] = 0;
      pbVar22[10] = 0;
      pbVar22[0xb] = 0;
      pbVar22[0xc] = 0;
      pbVar22[0xd] = 0;
      pbVar22[0xe] = 0;
      pbVar22[0xf] = 0;
      pbVar22[0x10] = 0;
      pbVar22[0x11] = 0;
      pbVar22[0x12] = 0;
      pbVar22[0x13] = 0;
      pbVar22[0x14] = 0;
      pbVar22[0x15] = 0;
      pbVar22[0x16] = 0;
      pbVar22[0x17] = 0;
      ppcVar20 = (code **)0x18;
      if (bVar25) {
        ppcVar20 = ppcVar1;
      }
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      pbVar22 = (byte *)0x20;
      if (bVar25) {
        pbVar22 = pbVar16;
      }
      puVar4[3] = *ppcVar20;
      puVar4[4] = *(undefined8 *)pbVar22;
      pbVar16 = (byte *)0x28;
      if (bVar25) {
        pbVar16 = pbVar21;
      }
      puVar4[5] = *(undefined8 *)pbVar16;
      *ppcVar20 = (code *)0x0;
      ppcVar20[1] = (code *)0x0;
      ppcVar20[2] = (code *)0x0;
      plVar3[1] = (long)(puVar4 + 6);
      goto LAB_0d2f4e43;
    }
    lVar11 = (long)puVar4 - *plVar3;
    uVar24 = (lVar11 >> 4) * -0x5555555555555555 + 1;
    if (uVar24 < 0x555555555555556) {
      lVar12 = plVar3[2] - *plVar3 >> 4;
      uVar13 = lVar12 * 0x5555555555555556;
      if (uVar24 < uVar13) {
        uVar24 = uVar13;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
        uVar24 = 0x555555555555555;
      }
      plStack_528 = plVar3;
      if (uVar24 == 0) {
        uVar13 = 0;
      }
      else {
        if (0x555555555555555 < uVar24) goto LAB_0d2f504c;
        uVar13 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0);
        if (uVar13 == 0) {
          func_0x0eec74c0(uVar24 * 0x30,0);
          uVar13 = 0;
        }
      }
      lStack_530 = uVar24 * 0x30 + uVar13;
      ppcVar1 = (code **)(uStack_370 + 0x18);
      pbVar16 = uStack_370 + 0x20;
      pbVar21 = uStack_370 + 0x28;
      if (cStack_34c == '\x02') {
        pbVar21 = abStack_348;
        pbVar16 = (byte *)&iStack_350;
        ppcVar1 = &pcStack_358;
      }
      uStack_540 = uVar13 + lVar11;
      bVar25 = iStack_350 == 0x29447e85;
      *(undefined8 *)(uVar13 + 0x10 + lVar11) = *(undefined8 *)(pbVar22 + 0x10);
      uVar14 = *(undefined8 *)(pbVar22 + 8);
      *(undefined8 *)(uVar13 + lVar11) = *(undefined8 *)pbVar22;
      ((undefined8 *)(uVar13 + lVar11))[1] = uVar14;
      pbVar22[0] = 0;
      pbVar22[1] = 0;
      pbVar22[2] = 0;
      pbVar22[3] = 0;
      pbVar22[4] = 0;
      pbVar22[5] = 0;
      pbVar22[6] = 0;
      pbVar22[7] = 0;
      pbVar22[8] = 0;
      pbVar22[9] = 0;
      pbVar22[10] = 0;
      pbVar22[0xb] = 0;
      pbVar22[0xc] = 0;
      pbVar22[0xd] = 0;
      pbVar22[0xe] = 0;
      pbVar22[0xf] = 0;
      pbVar22[0x10] = 0;
      pbVar22[0x11] = 0;
      pbVar22[0x12] = 0;
      pbVar22[0x13] = 0;
      pbVar22[0x14] = 0;
      pbVar22[0x15] = 0;
      pbVar22[0x16] = 0;
      pbVar22[0x17] = 0;
      ppcVar20 = (code **)0x18;
      if (bVar25) {
        ppcVar20 = ppcVar1;
      }
      *(code **)(uVar13 + 0x18 + lVar11) = *ppcVar20;
      pbVar22 = (byte *)0x20;
      if (bVar25) {
        pbVar22 = pbVar16;
      }
      pbVar16 = (byte *)0x28;
      if (bVar25) {
        pbVar16 = pbVar21;
      }
      *(undefined8 *)(uVar13 + 0x20 + lVar11) = *(undefined8 *)pbVar22;
      *(undefined8 *)(uVar13 + 0x28 + lVar11) = *(undefined8 *)pbVar16;
      *ppcVar20 = (code *)0x0;
      ppcVar20[1] = (code *)0x0;
      ppcVar20[2] = (code *)0x0;
      uStack_538 = uVar13 + 0x30 + lVar11;
      lVar23 = (*plVar3 - plVar3[1]) + uStack_540;
      uStack_548 = uVar13;
      func_0x0d30aeb0(plVar3,*plVar3,plVar3[1],lVar23);
      uVar24 = uStack_538;
      lVar11 = *plVar3;
      lVar12 = plVar3[2];
      *plVar3 = lVar23;
      plVar3[1] = uStack_538;
      plVar3[2] = lStack_530;
      if (lVar11 != 0) {
        func_0x0412a280(lVar11,lVar12 - lVar11);
      }
      plVar3[1] = uVar24;
      goto LAB_0d2f4e43;
    }
  }
  else {
    func_0x04882e30();
LAB_0d2f5042:
    FUN_04891200();
  }
  func_0x08494df0();
LAB_0d2f504c:
  uVar14 = FUN_04882eb0();
  func_0x0d30ae80(&uStack_548);
  func_0x05ebba90(auStack_3a8);
  func_0x05d59d60(auStack_138);
  do {
    do {
      func_0x0eeb81b0(auStack_2a0);
      uVar14 = func_0x0eee2d70(uVar14);
    } while ((uStack_498 & 1) == 0);
    func_0x0412a280(uStack_488,uStack_498 & 0xfffffffffffffffe);
  } while( true );
}


