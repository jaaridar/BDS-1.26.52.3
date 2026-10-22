/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xb63f2a0 (ELF vaddr 0xb53f2a0)
 * Label: caller-of-callee
 * Body:  [[0b63f2a0, 0b63f3d6] [0b63f3e0, 0b63f423] [0b63f430, 0b63f517] [0b63f520, 0b63f753] [0b63f760, 0b63f7f5] [0b63f800, 0b63f831] [0b63f890, 0b63f8b0] [0b640132, 0b64013e] [0b64066b, 0b64089e] [0b640cd3, 0b640cdf] [0b641081, 0b64108d] [0b6411c7, 0b6411d3] [0b64126d, 0b6419cc] [0b6419d0, 0b641adc] [0b641ae0, 0b641c4e] [0b641c50, 0b641c84] [0b641c94, 0b641d35] [0b641d40, 0b641dd3] [0b641de0, 0b641ebd] [0b641ec0, 0b641f58] [0b641f60, 0b64205d] [0b642060, 0b642149] [0b642150, 0b642264] [0b642270, 0b64237a] [0b642380, 0b6426e1] [0b6426f0, 0b642782] [0b642790, 0b6435e3] [0b6435e9, 0b64362e] [0b643916, 0b643983]]
 * Ghidra: FUN_0b63f2a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0b63f2a0(undefined2 *param_1,undefined8 param_2,ulong param_3,ushort *param_4,
                  ulong *param_5)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 *puVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  byte *unaff_RBP;
  byte *pbVar24;
  long *plVar25;
  undefined7 uVar26;
  ulong uVar27;
  byte *pbVar28;
  long lVar29;
  bool bVar30;
  undefined8 *puVar31;
  ulong uVar32;
  undefined8 *puVar33;
  long *plVar34;
  long lVar35;
  ushort *puVar36;
  long lVar37;
  ushort *puVar38;
  ushort *puVar39;
  ushort *puVar40;
  bool bVar41;
  float fVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  ulong uStack_458;
  byte *pbStack_440;
  undefined8 uStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [16];
  byte *pbStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined8 uStack_3ec;
  byte bStack_3d8;
  undefined7 uStack_3d7;
  byte *pbStack_3d0;
  byte *pbStack_3c8;
  byte *pbStack_3c0;
  ushort *puStack_3b8;
  undefined2 *puStack_3b0;
  undefined2 uStack_3a8;
  undefined2 uStack_3a6;
  float fStack_3a4;
  undefined4 uStack_3a0;
  undefined4 auStack_398 [2];
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  uint uStack_348;
  ushort *puStack_340;
  ushort *puStack_338;
  ushort *puStack_330;
  undefined8 uStack_328;
  byte bStack_320;
  undefined7 uStack_31f;
  byte *pbStack_318;
  long lStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  byte *pbStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  uint uStack_2d8;
  byte *pbStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  byte *pbStack_2b8;
  byte *pbStack_2b0;
  ulong uStack_2a8;
  undefined1 auStack_2a0 [8];
  ulong uStack_298;
  byte *pbStack_290;
  undefined8 uStack_288;
  undefined2 uStack_278;
  char cStack_276;
  char cStack_275;
  char cStack_274;
  char cStack_273;
  char cStack_272;
  char cStack_271;
  byte bStack_270;
  byte bStack_26f;
  char cStack_26e;
  char cStack_26d;
  char cStack_26c;
  char cStack_26b;
  char cStack_26a;
  char cStack_269;
  undefined8 uStack_268;
  byte *pbStack_260;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  uint uStack_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [12];
  undefined4 uStack_1f4;
  undefined1 auStack_1f0 [12];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined2 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined **ppuStack_198;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined4 uStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [12];
  undefined4 uStack_11c;
  undefined8 uStack_118;
  uint uStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  uint uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_ac [13];
  undefined3 uStack_9f;
  undefined5 uStack_9c;
  undefined8 *puStack_80;
  long lStack_78;
  byte *pbStack_70;
  undefined1 (*pauStack_68) [16];
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined1 auStack_48 [24];
  
  puStack_3b0 = param_1;
  if ((_DAT_0f6b4c38 == 0) &&
     (cVar10 = func_0x0eeddcf0(&UNK_01230b60,&UNK_011c6f76,0x1f0,&UNK_013d337b,&UNK_014209a0),
     cVar10 != '\0')) {
    _DAT_00000000 = 0xdeadc0de;
  }
  if (0xfffffffffffffff7 < param_3) {
LAB_0b6435e9:
    func_0x04882e30();
LAB_0b6435ee:
    func_0x0b5c5910();
LAB_0b6435f3:
    func_0x04882eb0();
    puVar36 = uStack_328;
code_r0x0b6435f8:
    uStack_328 = puVar36;
    func_0x04882e30();
    puVar36 = uStack_328;
code_r0x0b6435fd:
    uStack_328 = puVar36;
    uVar19 = func_0x04882e30();
    uVar19 = func_0x04882e20(uVar19);
    uVar19 = func_0x04882e20(uVar19);
    uVar19 = func_0x04882e20(uVar19);
    func_0x04aa1870(&uStack_278);
    func_0x0b5bfab0(&uStack_3a8);
    FUN_0eeb81b0(auStack_48);
    if ((uStack_2c8 & 1) != 0) {
      func_0x0412a280(pbStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
    }
    uVar19 = _Unwind_Resume(uVar19);
    uVar19 = func_0x04882e20(uVar19);
    uVar19 = func_0x04882e20(uVar19);
    uVar19 = func_0x04882e20(uVar19);
    uVar19 = func_0x04882e20(uVar19);
    func_0x04882e20(uVar19);
    pcVar4 = (code *)swi(3);
    uVar23 = (*pcVar4)();
    return uVar23;
  }
  puStack_3b8 = param_4;
  if (param_3 < 0x17) {
    uStack_2c8 = CONCAT71(uStack_2c8._1_7_,(byte)param_3 * '\x02');
    pbVar28 = (byte *)((long)&uStack_2c8 + 1);
    if (param_3 != 0) goto LAB_0b63f38f;
  }
  else {
    uVar23 = 0x1a;
    if ((param_3 | 7) != 0x17) {
      uVar23 = (param_3 | 7) + 1;
    }
    pbVar28 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar23);
    if (pbVar28 == (byte *)0x0) {
      func_0x0eec74c0(uVar23,0);
    }
    uStack_2c8 = uVar23 | 1;
    uStack_2c0 = param_3;
    pbStack_2b8 = pbVar28;
LAB_0b63f38f:
    memcpy(pbVar28,param_2,param_3);
  }
  pbVar28[param_3] = 0;
  bVar41 = (uStack_2c8 & 1) == 0;
  uVar23 = uStack_2c8 >> 1 & 0x7f;
  if (!bVar41) {
    uVar23 = uStack_2c0;
  }
  if (uVar23 != 0) {
    uVar27 = 0;
    bVar30 = false;
    uVar23 = uStack_2c0;
    do {
      pbVar28 = (byte *)((long)&uStack_2c8 + 1);
      if (!bVar41) {
        pbVar28 = pbStack_2b8;
      }
      if (pbVar28[uVar27] == 0x27) {
        bVar30 = (bool)(bVar30 ^ 1);
      }
      else if (pbVar28[uVar27] == 0x5c) {
        uVar27 = uVar27 + 1;
      }
      else if (bVar30) {
        bVar30 = true;
      }
      else if (((char)pbVar28[uVar27] < 'A') || ('Z' < (char)pbVar28[uVar27])) {
        bVar30 = false;
      }
      else {
        pbVar28[uVar27] = pbVar28[uVar27] + 0x20;
        bVar30 = false;
        uVar23 = uStack_2c0;
      }
      uVar27 = uVar27 + 1;
      bVar41 = (uStack_2c8 & 1) == 0;
      uVar32 = (uStack_2c8 & 0xff) >> 1;
      if (!bVar41) {
        uVar32 = uVar23;
      }
    } while (uVar27 < uVar32);
  }
  uStack_278._0_1_ = (byte)param_2;
  uStack_278._1_1_ = (char)((ulong)param_2 >> 8);
  cStack_276 = (char)((ulong)param_2 >> 0x10);
  cStack_275 = (char)((ulong)param_2 >> 0x18);
  cStack_274 = (char)((ulong)param_2 >> 0x20);
  cStack_273 = (char)((ulong)param_2 >> 0x28);
  cStack_272 = (char)((ulong)param_2 >> 0x30);
  cStack_271 = (char)((ulong)param_2 >> 0x38);
  bStack_26f = (byte)(param_3 >> 8);
  cStack_26e = (char)(param_3 >> 0x10);
  cStack_26d = (char)(param_3 >> 0x18);
  cStack_26c = (char)(param_3 >> 0x20);
  cStack_26b = (char)(param_3 >> 0x28);
  cStack_26a = (char)(param_3 >> 0x30);
  cStack_269 = (char)(param_3 >> 0x38);
  uStack_268._0_1_ = 1;
  uStack_3a8 = 0;
  uStack_3a6 = 0;
  fStack_3a4 = 0.0;
  bStack_270 = (byte)param_3;
  FUN_0eeb79f0(auStack_48,&uStack_3a8);
  if (((uint)fStack_3a4 & 0x800000) != 0) {
    (**(code **)(_DAT_0f5463b0 + 0x28))
              (&DAT_0f5463b0,
               (CONCAT44(fStack_3a4,CONCAT22(uStack_3a6,uStack_3a8)) & 0xff00ffffffffffff) - 8);
  }
  lVar35 = *(long *)(puStack_3b0 + 0x34);
  lVar37 = *(long *)(puStack_3b0 + 0x38);
  if (lVar35 != lVar37) {
    do {
      lVar29 = lVar37 + -0x18;
      uStack_278._0_1_ = (byte)lVar29;
      uStack_278._1_1_ = (char)((ulong)lVar29 >> 8);
      cStack_276 = (char)((ulong)lVar29 >> 0x10);
      cStack_275 = (char)((ulong)lVar29 >> 0x18);
      cStack_274 = (char)((ulong)lVar29 >> 0x20);
      cStack_273 = (char)((ulong)lVar29 >> 0x28);
      cStack_272 = (char)((ulong)lVar29 >> 0x30);
      cStack_271 = (char)((ulong)lVar29 >> 0x38);
      func_0x0b66e660(&uStack_278);
      if ((ulong)*(uint *)(lVar37 + -0x20) != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar37 + -0x20) * 8))
                  (&uStack_278,lVar37 + -0x60);
      }
      *(undefined4 *)(lVar37 + -0x20) = 0xffffffff;
      lVar37 = lVar37 + -0x80;
    } while (lVar37 != lVar35);
  }
  puVar9 = puStack_3b0;
  *(long *)(puStack_3b0 + 0x38) = lVar35;
  *puStack_3b0 = 0xffff;
  *(undefined4 *)(puStack_3b0 + 8) = 0xffffffff;
  *(undefined4 *)(puStack_3b0 + 0xc) = 0;
  pauVar1 = (undefined1 (*) [16])(puStack_3b0 + 0x10);
  uVar46 = *(uint *)(puStack_3b0 + 0x30);
  if ((ulong)uVar46 == 0xffffffff) {
LAB_0b63f5b9:
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x2c) = 0;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x24) = 0;
    *(undefined8 *)(puVar9 + 0x18) = 0;
    *(undefined8 *)(puVar9 + 0x1c) = 0;
    *(undefined8 *)*pauVar1 = 0;
    *(undefined8 *)(puVar9 + 0x14) = 0;
    *(undefined4 *)(puVar9 + 0x30) = 0;
  }
  else {
    if (uVar46 != 0) {
      (**(code **)(&UNK_0f2be788 + (ulong)uVar46 * 8))(&uStack_278,pauVar1);
      goto LAB_0b63f5b9;
    }
    *(undefined8 *)(puStack_3b0 + 0x28) = 0;
    *(undefined8 *)(puStack_3b0 + 0x2c) = 0;
    *(undefined8 *)(puStack_3b0 + 0x20) = 0;
    *(undefined8 *)(puStack_3b0 + 0x24) = 0;
    *(undefined8 *)(puStack_3b0 + 0x18) = 0;
    *(undefined8 *)(puStack_3b0 + 0x1c) = 0;
    *(undefined8 *)*pauVar1 = 0;
    *(undefined8 *)(puStack_3b0 + 0x14) = 0;
  }
  uStack_3a8 = 0xffff;
  fStack_3a4 = _DAT_011983f0;
  uStack_3a0 = 0;
  auStack_398[0] = 0xffffffff;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_354 = 0;
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_348 = 0;
  puStack_340 = (ushort *)0x0;
  puStack_338 = (ushort *)0x0;
  puStack_330 = (ushort *)0x0;
  pbVar28 = pbStack_2b8;
  if ((uStack_2c8 & 1) == 0) {
    pbVar28 = (byte *)((long)&uStack_2c8 + 1);
  }
  if (pbVar28 != (byte *)0x0) {
    bVar12 = *pbVar28;
    while (((ulong)bVar12 < 0x21 && ((0x100002600U >> ((ulong)bVar12 & 0x3f) & 1) != 0))) {
      pbVar28 = pbVar28 + 1;
      bVar12 = *pbVar28;
    }
    pbStack_2b0 = pbVar28;
    if (bVar12 != 0) {
      pauStack_68 = pauVar1;
LAB_0b63f6aa:
      puVar33 = (undefined8 *)&UNK_0f2bc880;
      uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,0xffffffff);
      uStack_3f0 = 0;
      uStack_3ec = 0;
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      pbStack_410 = (byte *)0x0;
      uStack_408 = 0;
      auStack_420 = ZEXT816(0);
      uStack_430 = 0;
      uStack_428 = 0;
      pbVar24 = (byte *)0xffffffffffffffff;
      pbStack_3c0 = (byte *)0x0;
      bVar12 = *pbVar28;
      pbStack_50 = pbVar28;
      while( true ) {
        pbStack_50 = pbStack_50 + 1;
        if ((0x20 < (ulong)bVar12) || ((0x100002600U >> ((ulong)bVar12 & 0x3f) & 1) == 0)) break;
        pbStack_2b0 = pbVar28 + (long)pbStack_3c0 + 1;
        pbStack_3c0 = pbStack_3c0 + 1;
        pbVar24 = pbVar24 + -1;
        bVar12 = pbVar28[(long)pbStack_3c0];
      }
      pbStack_2d0 = _DAT_0f6b3ce8;
      pbStack_440 = pbVar28 + (long)pbStack_3c0;
      uStack_458 = 0xffff;
      uVar23 = 0;
      unaff_RBP = (byte *)0x0;
      puVar36 = uStack_328;
      do {
        uVar19 = *puVar33;
        uStack_328 = puVar36;
        pbVar14 = (byte *)func_0x0eee2e90(uVar19);
        puVar36 = uStack_328;
        if (unaff_RBP < pbVar14) {
          iVar13 = func_0x0eee38b0(pbStack_440,uVar19,pbVar14);
          puVar36 = uStack_328;
          if (iVar13 == 0) {
            if ((long)*(int *)(puVar33 + 3) != 0x18) {
              uVar27 = (ulong)*(int *)(&UNK_01dd204c + (long)*(int *)(puVar33 + 3) * 4);
              if ((uVar27 != 0xfffffffffffffffe) &&
                 ((*(int *)(&UNK_01dd204c + (long)*(int *)(puVar33 + 3) * 4) == -1 ||
                  ((*(ulong *)(pbStack_2d0 + (uVar27 >> 6) * 8) >> (uVar27 & 0x3f) & 1) == 0))))
              goto LAB_0b63f76a;
            }
            uStack_458 = uVar23 & 0xffff;
            unaff_RBP = pbVar14;
          }
        }
LAB_0b63f76a:
        pbVar14 = pbStack_3c0;
        uStack_328._4_4_ = (undefined4)((ulong)puVar36 >> 0x20);
        uVar23 = uVar23 + 1;
        puVar33 = puVar33 + 6;
      } while (uVar23 != 0x6d);
      uStack_328 = puVar36;
      if (unaff_RBP < (byte *)0x2) {
        switch(bVar12) {
        case 99:
          pbVar20 = (byte *)0x2;
          if ((pbVar28 + 1)[(long)pbStack_3c0] != 0x2e) goto code_r0x0b63f8a1;
          break;
        default:
          goto code_r0x0b63f8a1;
        case 0x71:
          pbVar20 = (byte *)0x2;
          if ((pbVar28 + 1)[(long)pbStack_3c0] != 0x2e) goto code_r0x0b63f8a1;
          goto code_r0x0b63f8b4;
        case 0x74:
          pbVar20 = (byte *)0x2;
          if ((pbVar28 + 1)[(long)pbStack_3c0] != 0x2e) goto code_r0x0b63f8a1;
          goto code_r0x0b63f946;
        case 0x76:
          pbVar20 = (byte *)0x2;
          if ((pbVar28 + 1)[(long)pbStack_3c0] != 0x2e) goto code_r0x0b63f8a1;
          goto code_r0x0b63fc95;
        }
code_r0x0b63fb6d:
        pbVar24 = pbVar20 + (long)pbVar28 + (long)pbStack_3c0;
        if ((pbStack_3c0[(long)(pbVar20 + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(pbVar20 + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while ((byte)(bVar12 - 0x30) < 10);
          } while ((bVar12 == 0x5f) || ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x2a;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_328,pbStack_440,unaff_RBP);
        func_0x0b5d9480(&uStack_278,&uStack_328);
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_2a8,&uStack_428);
        }
        auStack_420[1] = bStack_26f;
        auStack_420[0] = bStack_270;
        auStack_420[2] = cStack_26e;
        auStack_420[3] = cStack_26d;
        auStack_420[4] = cStack_26c;
        auStack_420[5] = cStack_26b;
        auStack_420[6] = cStack_26a;
        auStack_420[7] = cStack_269;
        auStack_420[8] = (byte)uStack_268;
        auStack_420._9_7_ = uStack_268._1_7_;
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_428 = CONCAT17(cStack_271,
                              CONCAT16(cStack_272,
                                       CONCAT15(cStack_273,
                                                CONCAT14(cStack_274,
                                                         CONCAT13(cStack_275,
                                                                  CONCAT12(cStack_276,
                                                                           CONCAT11(uStack_278._1_1_
                                                                                    ,(byte)
                                                  uStack_278)))))));
        uStack_400 = CONCAT62(uStack_400._2_6_,auStack_258._8_2_);
        uStack_3ec = CONCAT44(6,(undefined4)uStack_3ec);
        pbStack_410 = pbStack_260;
joined_r0x0b63fa57:
        bStack_26f = 0;
        bStack_270 = 0;
        uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,7);
        uStack_408 = 0;
        pbStack_260 = pbStack_410;
        puVar36 = uStack_328;
        if ((bStack_320 & 1) != 0) {
code_r0x0b63fdad:
          bStack_26f = 0;
          bStack_270 = 0;
          uStack_408 = 0;
          pbStack_410 = pbStack_260;
          func_0x0412a280(lStack_310,CONCAT71(uStack_31f,bStack_320) & 0xfffffffffffffffe);
          puVar36 = uStack_328;
        }
        goto LAB_0b64066b;
      }
code_r0x0b63f8a1:
      switch((ushort)uStack_458) {
      case 0x28:
        pbVar20 = unaff_RBP;
code_r0x0b63f8b4:
        bVar41 = true;
        unaff_RBP = pbVar20;
        if ((pbStack_3c0[(long)(pbVar28 + (long)pbVar20)] != 0x5f) &&
           (0x19 < (byte)((pbStack_3c0[(long)(pbVar28 + (long)pbVar20)] & 0xdf) + 0xbf)))
        goto LAB_0b641bc4;
        uVar46 = (int)pbVar20 * 2;
        do {
          do {
            bVar12 = (pbVar28 + (long)pbStack_3c0 + 1)[(long)unaff_RBP];
            unaff_RBP = unaff_RBP + 1;
            bVar11 = (char)uVar46 + 2;
            uVar46 = (uint)bVar11;
          } while ((byte)(bVar12 - 0x30) < 10);
        } while ((bVar12 == 0x5f) || ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
        if ((byte *)0xfffffffffffffff7 < unaff_RBP) goto code_r0x0b6435f8;
        if (unaff_RBP < (byte *)0x17) {
          pbVar24 = (byte *)&uStack_3d7;
          bStack_3d8 = bVar11;
          if (unaff_RBP != (byte *)0x0) goto code_r0x0b6402e8;
        }
        else {
          lVar35 = ((ulong)unaff_RBP | 7) + 1;
          if (((ulong)unaff_RBP | 7) == 0x17) {
            lVar35 = 0x1a;
          }
          pbVar24 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar35);
          if (pbVar24 == (byte *)0x0) {
            func_0x0eec74c0(lVar35,0);
          }
          bStack_3d8 = (byte)lVar35 | 1;
          uStack_3d7 = (undefined7)((ulong)lVar35 >> 8);
          pbStack_3d0 = unaff_RBP;
          pbStack_3c8 = pbVar24;
code_r0x0b6402e8:
          func_0x0eee2ee0(pbVar24,pbStack_440,unaff_RBP);
          puVar36 = uStack_328;
        }
        uStack_328 = puVar36;
        pbVar24[(long)unaff_RBP] = 0;
        if ((bStack_3d8 & 1) == 0) {
          if (1 < bStack_3d8 >> 1) goto code_r0x0b640329;
        }
        else if ((byte *)0x1 < pbStack_3d0) {
code_r0x0b640329:
          pbVar24 = pbStack_3c8;
          if ((bStack_3d8 & 1) == 0) {
            pbVar24 = (byte *)&uStack_3d7;
          }
          if (pbVar24[1] == 0x2e) {
            pbVar24 = pbStack_3c8;
            if ((bStack_3d8 & 1) == 0) {
              pbVar24 = (byte *)&uStack_3d7;
            }
            uStack_328 = (ushort *)(pbVar24 + 2);
            func_0x0470d9a0(&uStack_278,&UNK_01231380,8,0xc,&uStack_328);
            if ((bStack_3d8 & 1) != 0) {
              func_0x0412a280(pbStack_3c8,CONCAT71(uStack_3d7,bStack_3d8) & 0xfffffffffffffffe);
            }
            pbStack_3c8 = (byte *)CONCAT71(uStack_268._1_7_,(byte)uStack_268);
            bStack_3d8 = (byte)uStack_278;
            uStack_3d7 = (undefined7)
                         (CONCAT17(cStack_271,
                                   CONCAT16(cStack_272,
                                            CONCAT15(cStack_273,
                                                     CONCAT14(cStack_274,
                                                              CONCAT13(cStack_275,
                                                                       CONCAT12(cStack_276,
                                                                                CONCAT11(uStack_278.
                                                                                         _1_1_,(byte
                                                  )uStack_278))))))) >> 8);
            pbStack_3d0 = (byte *)CONCAT17(cStack_269,
                                           CONCAT16(cStack_26a,
                                                    CONCAT15(cStack_26b,
                                                             CONCAT14(cStack_26c,
                                                                      CONCAT13(cStack_26d,
                                                                               CONCAT12(cStack_26e,
                                                                                        CONCAT11(
                                                  bStack_26f,bStack_270)))))));
          }
        }
        uStack_2a8 = 0;
        if ((bStack_3d8 & 1) == 0) {
          pbStack_290 = pbStack_3c8;
          auStack_2a0._1_7_ = uStack_3d7;
          auStack_2a0[0] = bStack_3d8;
          uStack_298 = (ulong)pbStack_3d0;
        }
        else {
          func_0x0412e5e0(auStack_2a0,pbStack_3c8,pbStack_3d0);
        }
        uStack_288 = 0;
        if ((auStack_2a0[0] & 1) == 0) {
          uVar23 = (ulong)(auStack_2a0[0] >> 1);
        }
        else {
          uVar23 = uStack_298;
        }
        if (uVar23 == 0) {
code_r0x0b640529:
          uStack_2a8 = 0;
        }
        else {
          pbVar24 = auStack_2a0 + 1;
          if ((auStack_2a0[0] & 1) != 0) {
            pbVar24 = pbStack_290;
          }
          if ((pbVar24 == (byte *)0x0) || (*pbVar24 == 0)) goto code_r0x0b640529;
          uVar23 = func_0x0eee2e90(pbVar24);
          uStack_2a8 = 0xcbf29ce484222325;
          if (uVar23 != 0) {
            if (7 < uVar23) {
              uVar27 = uVar23 & 0xfffffffffffffff8;
              do {
                uStack_2a8 = (((((((uStack_2a8 * 0x100000001b3 ^ (ulong)*pbVar24) * 0x100000001b3 ^
                                  (ulong)pbVar24[1]) * 0x100000001b3 ^ (ulong)pbVar24[2]) *
                                 0x100000001b3 ^ (ulong)pbVar24[3]) * 0x100000001b3 ^
                               (ulong)pbVar24[4]) * 0x100000001b3 ^ (ulong)pbVar24[5]) *
                              0x100000001b3 ^ (ulong)pbVar24[6]) * 0x100000001b3 ^ (ulong)pbVar24[7]
                ;
                pbVar24 = pbVar24 + 8;
                uVar27 = uVar27 - 8;
              } while (uVar27 != 0);
            }
            if ((uVar23 & 7) != 0) {
              uVar27 = 0;
              do {
                uStack_2a8 = uStack_2a8 * 0x100000001b3 ^ (ulong)pbVar24[uVar27];
                uVar27 = uVar27 + 1;
              } while (((uint)uVar23 & 7) != uVar27);
            }
          }
        }
        pbVar24 = *(byte **)(puStack_3b8 + 0x14);
        pbVar14 = *(byte **)(puStack_3b8 + 0x18);
        if (pbVar24 == pbVar14) {
          uVar23 = *(ulong *)(puStack_3b8 + 4);
          if (uVar23 == 0) goto code_r0x0b6410ad;
          if (pbRam000000000f6b4c00 != (byte *)0x0) {
            puVar31 = *(undefined8 **)(puStack_3b8 + 8);
            puVar33 = puVar31 + uVar23 * 5;
            puStack_80 = puVar33;
            pbVar24 = pbRam000000000f6b4c00;
joined_r0x0b640945:
            pbRam000000000f6b4c00 = pbVar24;
            if (pbVar24 != (byte *)0x0) {
              pbVar14 = (byte *)*puVar31;
              uVar23 = (long)pbVar24 - ((ulong)pbVar24 >> 1 & 0x5555555555555555);
              uVar23 = (uVar23 >> 2 & 0x3333333333333333) + (uVar23 & 0x3333333333333333);
              uVar23 = ((uVar23 >> 4) + uVar23 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar23 >> 0x38 < 2) {
                pbVar20 = (byte *)((ulong)(pbVar24 + -1) & (ulong)pbVar14);
              }
              else {
                pbVar20 = pbVar14;
                if (pbVar24 <= pbVar14) {
                  if (((ulong)pbVar14 | (ulong)pbVar24) >> 0x20 == 0) {
                    pbVar20 = (byte *)(((ulong)pbVar14 & 0xffffffff) % ((ulong)pbVar24 & 0xffffffff)
                                      );
                  }
                  else {
                    pbVar20 = (byte *)((ulong)pbVar14 % (ulong)pbVar24);
                  }
                }
              }
              plVar34 = *(long **)(lRam000000000f6b4bf8 + (long)pbVar20 * 8);
              if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0))
              {
                lStack_78 = (long)puVar31 + 9;
                pbStack_2d0 = pbVar14;
                pbStack_70 = pbVar20;
                if ((byte)(uVar23 >> 0x38) < 2) {
                  do {
                    if ((byte *)plVar34[1] == pbVar14) {
                      if ((byte *)plVar34[2] == pbVar14) {
                        plVar25 = plVar34 + 2;
                        if (((undefined8 *)plVar34[6] == puVar31) && ((long *)puVar31[4] == plVar25)
                           ) goto code_r0x0b640c21;
                        bVar12 = *(byte *)(plVar34 + 3);
                        if ((bVar12 & 1) == 0) {
                          uVar23 = (ulong)(bVar12 >> 1);
                          uVar27 = (ulong)*(byte *)(puVar31 + 1);
                          if ((*(byte *)(puVar31 + 1) & 1) == 0) goto code_r0x0b640bc1;
code_r0x0b640be8:
                          if (uVar23 != puVar31[2]) goto code_r0x0b640b74;
                        }
                        else {
                          uVar23 = plVar34[4];
                          uVar27 = (ulong)*(byte *)(puVar31 + 1);
                          if ((*(byte *)(puVar31 + 1) & 1) != 0) goto code_r0x0b640be8;
code_r0x0b640bc1:
                          if (uVar23 != uVar27 >> 1) goto code_r0x0b640b74;
                        }
                        if ((bVar12 & 1) == 0) {
                          lVar35 = (long)plVar34 + 0x19;
                        }
                        else {
                          lVar35 = plVar34[5];
                        }
                        lVar37 = lStack_78;
                        if ((uVar27 & 1) != 0) {
                          lVar37 = puVar31[3];
                        }
                        iVar13 = func_0x0eee3000(lVar35,lVar37);
                        puVar33 = puStack_80;
                        pbVar14 = pbStack_2d0;
                        pbVar20 = pbStack_70;
                        if (iVar13 == 0) goto code_r0x0b640c19;
                      }
code_r0x0b640b74:
                      plVar34[6] = 0;
                    }
                    else if ((byte *)((ulong)plVar34[1] & (ulong)(pbVar24 + -1)) != pbVar20) break;
                    plVar34 = (long *)*plVar34;
                  } while (plVar34 != (long *)0x0);
                }
                else {
                  do {
                    pbVar22 = (byte *)plVar34[1];
                    if (pbVar22 == pbVar14) {
                      if ((byte *)plVar34[2] == pbVar14) {
                        plVar25 = plVar34 + 2;
                        if (((undefined8 *)plVar34[6] == puVar31) && ((long *)puVar31[4] == plVar25)
                           ) goto code_r0x0b640c21;
                        bVar12 = *(byte *)(plVar34 + 3);
                        if ((bVar12 & 1) == 0) {
                          uVar23 = (ulong)(bVar12 >> 1);
                          uVar27 = (ulong)*(byte *)(puVar31 + 1);
                          if ((*(byte *)(puVar31 + 1) & 1) == 0) goto code_r0x0b640abe;
code_r0x0b640b01:
                          if (uVar23 != puVar31[2]) goto code_r0x0b640a6d;
                        }
                        else {
                          uVar23 = plVar34[4];
                          uVar27 = (ulong)*(byte *)(puVar31 + 1);
                          if ((*(byte *)(puVar31 + 1) & 1) != 0) goto code_r0x0b640b01;
code_r0x0b640abe:
                          if (uVar23 != uVar27 >> 1) goto code_r0x0b640a6d;
                        }
                        if ((bVar12 & 1) == 0) {
                          lVar35 = (long)plVar34 + 0x19;
                        }
                        else {
                          lVar35 = plVar34[5];
                        }
                        lVar37 = lStack_78;
                        if ((uVar27 & 1) != 0) {
                          lVar37 = puVar31[3];
                        }
                        iVar13 = func_0x0eee3000(lVar35,lVar37);
                        puVar33 = puStack_80;
                        pbVar14 = pbStack_2d0;
                        pbVar20 = pbStack_70;
                        if (iVar13 == 0) goto code_r0x0b640c19;
                      }
code_r0x0b640a6d:
                      plVar34[6] = 0;
                    }
                    else {
                      if (pbVar24 <= pbVar22) {
                        if (((ulong)pbVar22 | (ulong)pbVar24) >> 0x20 == 0) {
                          if ((byte *)(((ulong)pbVar22 & 0xffffffff) % ((ulong)pbVar24 & 0xffffffff)
                                      ) == pbVar20) goto code_r0x0b640a78;
                          break;
                        }
                        pbVar22 = (byte *)((ulong)pbVar22 % (ulong)pbVar24);
                      }
                      if (pbVar22 != pbVar20) break;
                    }
code_r0x0b640a78:
                    plVar34 = (long *)*plVar34;
                  } while (plVar34 != (long *)0x0);
                }
              }
            }
            goto code_r0x0b640c50;
          }
          if ((uVar23 & 0x1fffffffffffffff) <= (uVar23 - 1 & 0x1fffffffffffffff)) {
code_r0x0b6435e4:
            func_0x04890760();
            goto LAB_0b6435e9;
          }
        }
        else {
          pbVar20 = pbStack_3d0;
          pbVar22 = pbStack_3c8;
          if ((bStack_3d8 & 1) == 0) {
            pbVar20 = (byte *)(ulong)(bStack_3d8 >> 1);
            pbVar22 = (byte *)&uStack_3d7;
          }
          do {
            bVar12 = *pbVar24;
            if ((bVar12 & 1) == 0) {
              pbVar21 = (byte *)(ulong)(bVar12 >> 1);
            }
            else {
              pbVar21 = *(byte **)(pbVar24 + 8);
            }
            if (pbVar21 == pbVar20) {
              if ((bVar12 & 1) == 0) {
                pbVar21 = pbVar24 + 1;
              }
              else {
                pbVar21 = *(byte **)(pbVar24 + 0x10);
              }
              iVar13 = func_0x0eee3000(pbVar21,pbVar22,pbVar20);
              if (iVar13 == 0) {
                if (pbVar24 != pbVar14) goto code_r0x0b640ce9;
                break;
              }
            }
            pbVar24 = pbVar24 + 0x18;
          } while (pbVar24 != pbVar14);
        }
        goto code_r0x0b6410ad;
      case 0x29:
        pbVar24 = pbVar28 + (long)pbStack_3c0 + (long)unaff_RBP;
        if ((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while ((byte)(bVar12 - 0x30) < 10);
          } while ((bVar12 == 0x5f) || ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x29;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_278,pbStack_440,unaff_RBP);
        pbVar24 = pbStack_260;
        uVar19 = CONCAT17(cStack_271,
                          CONCAT16(cStack_272,
                                   CONCAT15(cStack_273,
                                            CONCAT14(cStack_274,
                                                     CONCAT13(cStack_275,
                                                              CONCAT12(cStack_276,
                                                                       CONCAT11(uStack_278._1_1_,
                                                                                (byte)uStack_278))))
                                           )));
        uVar5 = CONCAT17(cStack_269,
                         CONCAT16(cStack_26a,
                                  CONCAT15(cStack_26b,
                                           CONCAT14(cStack_26c,
                                                    CONCAT13(cStack_26d,
                                                             CONCAT12(cStack_26e,
                                                                      CONCAT11(bStack_26f,bStack_270
                                                                              )))))));
        uVar6 = CONCAT71(uStack_268._1_7_,(byte)uStack_268);
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 == 0xffffffff) {
          auStack_420._8_8_ = uVar6;
          auStack_420._0_8_ = uVar5;
          uStack_3ec = CONCAT44(4,(undefined4)uStack_3ec);
          uStack_428 = uVar19;
          puVar36 = uStack_328;
          break;
        }
        (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_328,&uStack_428);
        bVar41 = (bStack_270 & 1) == 0;
        auStack_420._8_8_ = uVar6;
        auStack_420._0_8_ = uVar5;
        pbStack_410 = pbVar24;
        uStack_3ec = CONCAT44(4,(undefined4)uStack_3ec);
        uStack_428 = uVar19;
code_r0x0b640245:
        uStack_408 = 0;
        uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,7);
        pbVar14 = pbStack_3c0;
        puVar36 = uStack_328;
        if (!bVar41) {
          func_0x0412a280(pbStack_260,
                          CONCAT17(cStack_269,
                                   CONCAT16(cStack_26a,
                                            CONCAT15(cStack_26b,
                                                     CONCAT14(cStack_26c,
                                                              CONCAT13(cStack_26d,
                                                                       CONCAT12(cStack_26e,
                                                                                CONCAT11(bStack_26f,
                                                                                         bStack_270)
                                                                               )))))) &
                          0xfffffffffffffffe);
          pbVar14 = pbStack_3c0;
          puVar36 = uStack_328;
        }
        goto LAB_0b64066b;
      case 0x2a:
        pbVar20 = unaff_RBP;
        goto code_r0x0b63fb6d;
      case 0x2b:
        pbVar20 = unaff_RBP;
code_r0x0b63fc95:
        pbVar24 = pbVar20 + (long)pbVar28 + (long)pbStack_3c0;
        if ((pbStack_3c0[(long)(pbVar20 + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(pbVar20 + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while ((byte)(bVar12 - 0x30) < 10);
          } while ((bVar12 == 0x5f) || ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x2b;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_328,pbStack_440,unaff_RBP);
        func_0x0b5d97e0(&uStack_278,&uStack_328);
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_2a8,&uStack_428);
        }
        uStack_408 = 0;
        pbStack_410 = pbStack_260;
        auStack_420[1] = bStack_26f;
        auStack_420[0] = bStack_270;
        auStack_420[2] = cStack_26e;
        auStack_420[3] = cStack_26d;
        auStack_420[4] = cStack_26c;
        auStack_420[5] = cStack_26b;
        auStack_420[6] = cStack_26a;
        auStack_420[7] = cStack_269;
        auStack_420[8] = (byte)uStack_268;
        auStack_420._9_7_ = uStack_268._1_7_;
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_428 = CONCAT17(cStack_271,
                              CONCAT16(cStack_272,
                                       CONCAT15(cStack_273,
                                                CONCAT14(cStack_274,
                                                         CONCAT13(cStack_275,
                                                                  CONCAT12(cStack_276,
                                                                           CONCAT11(uStack_278._1_1_
                                                                                    ,(byte)
                                                  uStack_278)))))));
        uStack_400 = CONCAT62(uStack_400._2_6_,auStack_258._8_2_);
        uStack_3ec = CONCAT44(8,(undefined4)uStack_3ec);
        uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,7);
        puVar36 = uStack_328;
        if ((bStack_320 & 1) == 0) goto LAB_0b64066b;
        goto code_r0x0b63fdad;
      case 0x2c:
        pbVar20 = unaff_RBP;
code_r0x0b63f946:
        pbVar24 = pbVar20 + (long)pbVar28 + (long)pbStack_3c0;
        if ((pbStack_3c0[(long)(pbVar20 + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(pbVar20 + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while ((byte)(bVar12 - 0x30) < 10);
          } while ((bVar12 == 0x5f) || ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x2c;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_328,pbStack_440,unaff_RBP);
        func_0x0b5d98e0(&uStack_278,&uStack_328);
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_2a8,&uStack_428);
        }
        auStack_420[1] = bStack_26f;
        auStack_420[0] = bStack_270;
        auStack_420[2] = cStack_26e;
        auStack_420[3] = cStack_26d;
        auStack_420[4] = cStack_26c;
        auStack_420[5] = cStack_26b;
        auStack_420[6] = cStack_26a;
        auStack_420[7] = cStack_269;
        auStack_420[8] = (byte)uStack_268;
        auStack_420._9_7_ = uStack_268._1_7_;
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_428 = CONCAT17(cStack_271,
                              CONCAT16(cStack_272,
                                       CONCAT15(cStack_273,
                                                CONCAT14(cStack_274,
                                                         CONCAT13(cStack_275,
                                                                  CONCAT12(cStack_276,
                                                                           CONCAT11(uStack_278._1_1_
                                                                                    ,(byte)
                                                  uStack_278)))))));
        uStack_400 = CONCAT62(uStack_400._2_6_,auStack_258._8_2_);
        uStack_3ec = CONCAT44(0xe,(undefined4)uStack_3ec);
        pbStack_410 = pbStack_260;
        goto joined_r0x0b63fa57;
      case 0x2d:
        pbVar24 = pbVar28 + (long)pbStack_3c0 + (long)unaff_RBP;
        if ((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while ((byte)(bVar12 - 0x30) < 10);
          } while ((bVar12 == 0x5f) || ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x2d;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_278,pbStack_440,unaff_RBP);
        pbVar24 = pbStack_260;
        uVar19 = CONCAT17(cStack_271,
                          CONCAT16(cStack_272,
                                   CONCAT15(cStack_273,
                                            CONCAT14(cStack_274,
                                                     CONCAT13(cStack_275,
                                                              CONCAT12(cStack_276,
                                                                       CONCAT11(uStack_278._1_1_,
                                                                                (byte)uStack_278))))
                                           )));
        uVar5 = CONCAT17(cStack_269,
                         CONCAT16(cStack_26a,
                                  CONCAT15(cStack_26b,
                                           CONCAT14(cStack_26c,
                                                    CONCAT13(cStack_26d,
                                                             CONCAT12(cStack_26e,
                                                                      CONCAT11(bStack_26f,bStack_270
                                                                              )))))));
        uVar6 = CONCAT71(uStack_268._1_7_,(byte)uStack_268);
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_328,&uStack_428);
          bVar41 = (bStack_270 & 1) == 0;
          auStack_420._8_8_ = uVar6;
          auStack_420._0_8_ = uVar5;
          pbStack_410 = pbVar24;
          uStack_3ec = CONCAT44(0xb,(undefined4)uStack_3ec);
          uStack_428 = uVar19;
          goto code_r0x0b640245;
        }
        auStack_420._8_8_ = uVar6;
        auStack_420._0_8_ = uVar5;
        uStack_3ec = CONCAT44(0xb,(undefined4)uStack_3ec);
        uStack_428 = uVar19;
        puVar36 = uStack_328;
        break;
      case 0x2e:
        pbVar20 = pbVar28 + (long)pbStack_3c0;
        pbVar22 = unaff_RBP + (long)pbVar20;
        do {
          bVar12 = *pbVar22;
          if (bVar12 == 0x5c) {
            if (pbVar22[1] == 0) goto code_r0x0b640271;
            pbVar22 = pbVar22 + 2;
          }
          else {
            if (bVar12 == 0) {
code_r0x0b640271:
              bVar41 = true;
              func_0x09a0d120(1,3,0x16,&UNK_01231389);
              unaff_RBP = pbVar24;
              goto LAB_0b641bc4;
            }
            if (bVar12 == 0x27) goto code_r0x0b64089f;
          }
          pbVar22 = pbVar22 + 1;
        } while( true );
      case 0x2f:
        pbVar24 = pbVar28 + (long)pbStack_3c0 + (long)unaff_RBP;
        if ((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while (bVar12 == 0x2e);
          } while ((((byte)(bVar12 - 0x30) < 10) || (bVar12 == 0x5f)) ||
                  ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x2f;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_278,pbStack_440,unaff_RBP);
        pbVar24 = pbStack_260;
        uVar19 = CONCAT17(cStack_271,
                          CONCAT16(cStack_272,
                                   CONCAT15(cStack_273,
                                            CONCAT14(cStack_274,
                                                     CONCAT13(cStack_275,
                                                              CONCAT12(cStack_276,
                                                                       CONCAT11(uStack_278._1_1_,
                                                                                (byte)uStack_278))))
                                           )));
        uVar5 = CONCAT17(cStack_269,
                         CONCAT16(cStack_26a,
                                  CONCAT15(cStack_26b,
                                           CONCAT14(cStack_26c,
                                                    CONCAT13(cStack_26d,
                                                             CONCAT12(cStack_26e,
                                                                      CONCAT11(bStack_26f,bStack_270
                                                                              )))))));
        uVar6 = CONCAT71(uStack_268._1_7_,(byte)uStack_268);
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_328,&uStack_428);
          bVar41 = (bStack_270 & 1) == 0;
          auStack_420._8_8_ = uVar6;
          auStack_420._0_8_ = uVar5;
          pbStack_410 = pbVar24;
          uStack_3ec = CONCAT44(9,(undefined4)uStack_3ec);
          uStack_428 = uVar19;
          goto code_r0x0b640245;
        }
        auStack_420._8_8_ = uVar6;
        auStack_420._0_8_ = uVar5;
        uStack_3ec = CONCAT44(9,(undefined4)uStack_3ec);
        uStack_428 = uVar19;
        puVar36 = uStack_328;
        break;
      case 0x30:
        pbVar24 = pbVar28 + (long)pbStack_3c0 + (long)unaff_RBP;
        if ((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while (bVar12 == 0x2e);
          } while ((((byte)(bVar12 - 0x30) < 10) || (bVar12 == 0x5f)) ||
                  ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x30;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_278,pbStack_440,unaff_RBP);
        pbVar24 = pbStack_260;
        uVar19 = CONCAT17(cStack_271,
                          CONCAT16(cStack_272,
                                   CONCAT15(cStack_273,
                                            CONCAT14(cStack_274,
                                                     CONCAT13(cStack_275,
                                                              CONCAT12(cStack_276,
                                                                       CONCAT11(uStack_278._1_1_,
                                                                                (byte)uStack_278))))
                                           )));
        uVar5 = CONCAT17(cStack_269,
                         CONCAT16(cStack_26a,
                                  CONCAT15(cStack_26b,
                                           CONCAT14(cStack_26c,
                                                    CONCAT13(cStack_26d,
                                                             CONCAT12(cStack_26e,
                                                                      CONCAT11(bStack_26f,bStack_270
                                                                              )))))));
        uVar6 = CONCAT71(uStack_268._1_7_,(byte)uStack_268);
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_328,&uStack_428);
          bVar41 = (bStack_270 & 1) == 0;
          auStack_420._8_8_ = uVar6;
          auStack_420._0_8_ = uVar5;
          pbStack_410 = pbVar24;
          uStack_3ec = CONCAT44(10,(undefined4)uStack_3ec);
          uStack_428 = uVar19;
          goto code_r0x0b640245;
        }
        auStack_420._8_8_ = uVar6;
        auStack_420._0_8_ = uVar5;
        uStack_3ec = CONCAT44(10,(undefined4)uStack_3ec);
        uStack_428 = uVar19;
        puVar36 = uStack_328;
        break;
      case 0x31:
        pbVar24 = pbVar28 + (long)pbStack_3c0 + (long)unaff_RBP;
        if ((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] == 0x5f) ||
           (uStack_458._0_2_ = 0xffff,
           (byte)((pbStack_3c0[(long)(unaff_RBP + (long)pbVar28)] & 0xdf) + 0xbf) < 0x1a)) {
          do {
            do {
              bVar12 = pbVar24[1];
              pbVar24 = pbVar24 + 1;
            } while (bVar12 == 0x2e);
          } while ((((byte)(bVar12 - 0x30) < 10) || (bVar12 == 0x5f)) ||
                  ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a));
          uStack_458._0_2_ = 0x31;
        }
        unaff_RBP = pbVar24 + (-(long)pbStack_3c0 - (long)pbVar28);
        func_0x0ee252c0(&uStack_278,pbStack_440,unaff_RBP);
        pbVar24 = pbStack_260;
        uVar19 = CONCAT17(cStack_271,
                          CONCAT16(cStack_272,
                                   CONCAT15(cStack_273,
                                            CONCAT14(cStack_274,
                                                     CONCAT13(cStack_275,
                                                              CONCAT12(cStack_276,
                                                                       CONCAT11(uStack_278._1_1_,
                                                                                (byte)uStack_278))))
                                           )));
        uVar5 = CONCAT17(cStack_269,
                         CONCAT16(cStack_26a,
                                  CONCAT15(cStack_26b,
                                           CONCAT14(cStack_26c,
                                                    CONCAT13(cStack_26d,
                                                             CONCAT12(cStack_26e,
                                                                      CONCAT11(bStack_26f,bStack_270
                                                                              )))))));
        uVar6 = CONCAT71(uStack_268._1_7_,(byte)uStack_268);
        bStack_270 = 0;
        bStack_26f = 0;
        uStack_430 = 0;
        if (uStack_3ec >> 0x20 != 0xffffffff) {
          (**(code **)(&UNK_0f2c7f38 + (uStack_3ec >> 0x20) * 8))(&uStack_328,&uStack_428);
          bVar41 = (bStack_270 & 1) == 0;
          auStack_420._8_8_ = uVar6;
          auStack_420._0_8_ = uVar5;
          pbStack_410 = pbVar24;
          uStack_3ec = CONCAT44(0xf,(undefined4)uStack_3ec);
          uStack_428 = uVar19;
          goto code_r0x0b640245;
        }
        auStack_420._8_8_ = uVar6;
        auStack_420._0_8_ = uVar5;
        uStack_3ec = CONCAT44(0xf,(undefined4)uStack_3ec);
        uStack_428 = uVar19;
        puVar36 = uStack_328;
        break;
      default:
        goto LAB_0b64066b;
      }
      bStack_26f = 0;
      bStack_270 = 0;
      uStack_408 = 0;
      uStack_430 = 0;
      uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,7);
      pbVar14 = pbStack_3c0;
      pbStack_410 = pbStack_260;
      goto LAB_0b64066b;
    }
  }
  if (3 < (short)*puStack_3b8) {
    func_0x0a0046e0(1,3,0x16,&UNK_012313b8);
  }
LAB_0b643152:
  uVar23 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
LAB_0b643155:
  uStack_278._0_1_ = (byte)&puStack_340;
  uStack_278._1_1_ = (char)((ulong)&puStack_340 >> 8);
  cStack_276 = (char)((ulong)&puStack_340 >> 0x10);
  cStack_275 = (char)((ulong)&puStack_340 >> 0x18);
  cStack_274 = (char)((ulong)&puStack_340 >> 0x20);
  cStack_273 = (char)((ulong)&puStack_340 >> 0x28);
  cStack_272 = (char)((ulong)&puStack_340 >> 0x30);
  cStack_271 = (char)((ulong)&puStack_340 >> 0x38);
  func_0x0b66e660(&uStack_278);
  if ((ulong)uStack_348 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
  }
  FUN_0eeb81b0(auStack_48);
  if ((uStack_2c8 & 1) != 0) {
    func_0x0412a280(pbStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
  }
  return uVar23 & 0xffffffff;
code_r0x0b64089f:
  pbVar21 = pbVar22 + (-1 - (long)pbVar20);
  if ((byte *)0xfffffffffffffff7 < pbVar21) goto code_r0x0b6435fd;
  pbStack_2d0 = pbVar22;
  if (pbVar21 < (byte *)0x17) {
    uStack_328._0_4_ =
         CONCAT31((int3)((ulong)puVar36 >> 8),
                  ((~(byte)pbVar28 - (char)pbStack_3c0) + (char)pbVar22) * '\x02');
    pbVar15 = (byte *)((long)&uStack_328 + 1);
    if (pbVar22 + ~(ulong)pbVar28 != pbStack_3c0) goto code_r0x0b640e86;
  }
  else {
    lVar35 = ((ulong)pbVar21 | 7) + 1;
    if (((ulong)pbVar21 | 7) == 0x17) {
      lVar35 = 0x1a;
    }
    pbVar15 = (byte *)func_0x0ee32660(lVar35);
    uStack_328._0_4_ = (uint)lVar35 | 1;
    uStack_328._4_4_ = (undefined4)((ulong)lVar35 >> 0x20);
    bStack_320 = (byte)pbVar21;
    uStack_31f = (undefined7)((ulong)pbVar21 >> 8);
    pbStack_318 = pbVar15;
code_r0x0b640e86:
    func_0x0eee2ee0(pbVar15,pbVar28 + (long)pbVar14 + 1,pbVar21);
  }
  uVar46 = (uint)uStack_328;
  pbVar24[(long)(pbVar15 + (long)pbStack_2d0) - (long)pbVar28] = 0;
  uStack_278._0_1_ = 0;
  uStack_278._1_1_ = 0;
  cStack_276 = 0;
  cStack_275 = 0;
  cStack_274 = 0;
  cStack_273 = 0;
  cStack_272 = 0;
  cStack_271 = 0;
  if (((uint)uStack_328 & 1) == 0) {
    pbStack_260 = pbStack_318;
    bStack_270 = (byte)(uint)uStack_328;
    bStack_26f = (byte)((uint)uStack_328 >> 8);
    cStack_26e = (char)((uint)uStack_328 >> 0x10);
    cStack_26d = (char)((uint)uStack_328 >> 0x18);
    cStack_26c = (char)uStack_328._4_4_;
    cStack_26b = (char)((uint)uStack_328._4_4_ >> 8);
    cStack_26a = (char)((uint)uStack_328._4_4_ >> 0x10);
    cStack_269 = (char)((uint)uStack_328._4_4_ >> 0x18);
    uStack_268._0_1_ = bStack_320;
    uStack_268._1_7_ = uStack_31f;
  }
  else {
    func_0x0412e5e0(&bStack_270,pbStack_318,CONCAT71(uStack_31f,bStack_320));
  }
  bVar12 = bStack_270;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = auStack_258._8_8_;
  auStack_258 = auVar44 << 0x40;
  if ((bStack_270 & 1) == 0) {
    uVar23 = (ulong)(bStack_270 >> 1);
  }
  else {
    uVar23 = CONCAT71(uStack_268._1_7_,(byte)uStack_268);
  }
  if (uVar23 == 0) {
code_r0x0b641007:
    uStack_430 = 0;
  }
  else {
    pbVar24 = &bStack_26f;
    if ((bStack_270 & 1) != 0) {
      pbVar24 = pbStack_260;
    }
    if ((pbVar24 == (byte *)0x0) || (*pbVar24 == 0)) goto code_r0x0b641007;
    uVar23 = func_0x0eee2e90(pbVar24);
    uStack_430 = 0xcbf29ce484222325;
    if (uVar23 != 0) {
      if (7 < uVar23) {
        uVar27 = uVar23 & 0xfffffffffffffff8;
        do {
          uStack_430 = (((((((uStack_430 * 0x100000001b3 ^ (ulong)*pbVar24) * 0x100000001b3 ^
                            (ulong)pbVar24[1]) * 0x100000001b3 ^ (ulong)pbVar24[2]) * 0x100000001b3
                          ^ (ulong)pbVar24[3]) * 0x100000001b3 ^ (ulong)pbVar24[4]) * 0x100000001b3
                        ^ (ulong)pbVar24[5]) * 0x100000001b3 ^ (ulong)pbVar24[6]) * 0x100000001b3 ^
                       (ulong)pbVar24[7];
          pbVar24 = pbVar24 + 8;
          uVar27 = uVar27 - 8;
        } while (uVar27 != 0);
      }
      if ((uVar23 & 7) != 0) {
        uVar27 = 0;
        do {
          uStack_430 = uStack_430 * 0x100000001b3 ^ (ulong)pbVar24[uVar27];
          uVar27 = uVar27 + 1;
        } while (((uint)uVar23 & 7) != uVar27);
      }
    }
  }
  uStack_278._0_1_ = (byte)uStack_430;
  uStack_278._1_1_ = (char)(uStack_430 >> 8);
  cStack_276 = (char)(uStack_430 >> 0x10);
  cStack_275 = (char)(uStack_430 >> 0x18);
  cStack_274 = (char)(uStack_430 >> 0x20);
  cStack_273 = (char)(uStack_430 >> 0x28);
  cStack_272 = (char)(uStack_430 >> 0x30);
  cStack_271 = (char)(uStack_430 >> 0x38);
  uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,1);
  if ((bVar12 & 1) != 0) {
    func_0x0412a280(pbStack_260,
                    CONCAT17(cStack_269,
                             CONCAT16(cStack_26a,
                                      CONCAT15(cStack_26b,
                                               CONCAT14(cStack_26c,
                                                        CONCAT13(cStack_26d,
                                                                 CONCAT12(cStack_26e,
                                                                          CONCAT11(bStack_26f,
                                                                                   bStack_270)))))))
                    & 0xfffffffffffffffe);
  }
  if ((uVar46 & 1) != 0) {
    func_0x0412a280(pbStack_318,CONCAT44(uStack_328._4_4_,(uint)uStack_328) & 0xfffffffffffffffe);
  }
  uStack_458._0_2_ = 0x2e;
  pbVar14 = pbStack_3c0;
  unaff_RBP = pbVar22 + (1 - (long)pbVar20);
LAB_0b6414a9:
  puVar36 = puStack_338;
  bVar41 = true;
  if (((ushort)uStack_458 == 0xffff) || (unaff_RBP == (byte *)0x0)) goto LAB_0b641bc4;
  if (puStack_338 < puStack_330) {
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_248 = 0;
    pbStack_260 = (byte *)0x0;
    auStack_258 = ZEXT816(0);
    bStack_270 = 0;
    bStack_26f = 0;
    cStack_26e = '\0';
    cStack_26d = '\0';
    cStack_26c = '\0';
    cStack_26b = '\0';
    cStack_26a = '\0';
    cStack_269 = '\0';
    uStack_268._0_1_ = 0;
    uStack_268._1_7_ = 0;
    uStack_278._0_1_ = (byte)uStack_438;
    uStack_278._1_1_ = (char)((ulong)uStack_438 >> 8);
    cStack_276 = (char)((ulong)uStack_438 >> 0x10);
    cStack_275 = (char)((ulong)uStack_438 >> 0x18);
    if ((int)uStack_438 != -1) {
      if ((int)uStack_438 == 7) {
        if (uStack_3ec >> 0x20 == 0xffffffff) {
          uStack_228 = 0xffffffff;
        }
        else {
          uStack_328 = (ushort *)&uStack_268;
          (**(code **)(&UNK_0f2be8a8 + (uStack_3ec >> 0x20) * 8))
                    (&uStack_328,uStack_328,&uStack_428);
        }
      }
      else {
        bStack_270 = (byte)uStack_430;
        bStack_26f = (byte)(uStack_430 >> 8);
        cStack_26e = (char)(uStack_430 >> 0x10);
        cStack_26d = (char)(uStack_430 >> 0x18);
        cStack_26c = (char)(uStack_430 >> 0x20);
        cStack_26b = (char)(uStack_430 >> 0x28);
        cStack_26a = (char)(uStack_430 >> 0x30);
        cStack_269 = (char)(uStack_430 >> 0x38);
      }
    }
    *puVar36 = (ushort)uStack_458;
    *(ulong *)(puVar36 + 2) = (ulong)(uint)_DAT_011983f0;
    puVar36[8] = 0xffff;
    puVar36[9] = 0xffff;
    auVar44 = ZEXT816(0);
    *(undefined1 (*) [16])(puVar36 + 0xc) = auVar44;
    *(undefined1 (*) [16])(puVar36 + 0x14) = auVar44;
    *(undefined1 (*) [16])(puVar36 + 0x1c) = auVar44;
    *(undefined1 (*) [16])(puVar36 + 0x24) = auVar44;
    *(undefined1 (*) [16])(puVar36 + 0x2a) = auVar44;
    if (puVar36 + 8 != &uStack_278) {
      iVar13 = CONCAT13(cStack_275,CONCAT12(cStack_276,CONCAT11(uStack_278._1_1_,(byte)uStack_278)))
      ;
      *(int *)(puVar36 + 8) = iVar13;
      if (iVar13 != -1) {
        if (iVar13 == 7) {
          if ((ulong)uStack_228 == 0xffffffff) {
            puVar36[0x30] = 0xffff;
            puVar36[0x31] = 0xffff;
            *(undefined1 (*) [16])(puVar36 + 0x34) = auVar44;
            puVar36[0x3c] = 0;
            puVar36[0x3d] = 0;
            puVar36[0x3e] = 0;
            puVar36[0x3f] = 0;
            puVar36 = puVar36 + 0x40;
            goto LAB_0b641b9c;
          }
          uStack_328 = puVar36 + 0x10;
          (**(code **)(&UNK_0f2be8a8 + (ulong)uStack_228 * 8))(&uStack_328,uStack_328,&uStack_268);
        }
        else {
          *(ulong *)(puVar36 + 0xc) =
               CONCAT17(cStack_269,
                        CONCAT16(cStack_26a,
                                 CONCAT15(cStack_26b,
                                          CONCAT14(cStack_26c,
                                                   CONCAT13(cStack_26d,
                                                            CONCAT12(cStack_26e,
                                                                     CONCAT11(bStack_26f,bStack_270)
                                                                    ))))));
        }
      }
    }
    *(undefined1 (*) [16])(puVar36 + 0x34) = ZEXT816(0);
    puVar36[0x3c] = 0;
    puVar36[0x3d] = 0;
    puVar36[0x3e] = 0;
    puVar36[0x3f] = 0;
    if ((ulong)uStack_228 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_228 * 8))(&uStack_328,&uStack_268);
    }
    puVar36 = puVar36 + 0x40;
  }
  else {
    lVar35 = (long)puStack_338 - (long)puStack_340;
    uVar23 = (lVar35 >> 7) + 1;
    if (uVar23 >> 0x39 != 0) goto LAB_0b6435ee;
    uVar27 = (long)puStack_330 - (long)puStack_340 >> 6;
    if (uVar27 <= uVar23) {
      uVar27 = uVar23;
    }
    if (0x7fffffffffffff7f < (ulong)((long)puStack_330 - (long)puStack_340)) {
      uVar27 = 0x1ffffffffffffff;
    }
    if (uVar27 == 0) {
      lVar37 = 0;
    }
    else {
      if (0x1ffffffffffffff < uVar27) goto LAB_0b6435f3;
      lVar37 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar27 << 7);
      if (lVar37 == 0) {
        func_0x0eec74c0(uVar27 << 7,0);
        lVar37 = 0;
      }
    }
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_248 = 0;
    pbStack_260 = (byte *)0x0;
    auStack_258 = ZEXT816(0);
    bStack_270 = 0;
    bStack_26f = 0;
    cStack_26e = '\0';
    cStack_26d = '\0';
    cStack_26c = '\0';
    cStack_26b = '\0';
    cStack_26a = '\0';
    cStack_269 = '\0';
    uStack_268._0_1_ = 0;
    uStack_268._1_7_ = 0;
    uStack_278._0_1_ = (byte)uStack_438;
    uStack_278._1_1_ = (char)((ulong)uStack_438 >> 8);
    cStack_276 = (char)((ulong)uStack_438 >> 0x10);
    cStack_275 = (char)((ulong)uStack_438 >> 0x18);
    if ((int)uStack_438 != -1) {
      if ((int)uStack_438 == 7) {
        if (uStack_3ec >> 0x20 == 0xffffffff) {
          uStack_228 = 0xffffffff;
        }
        else {
          uStack_328 = (ushort *)&uStack_268;
          (**(code **)(&UNK_0f2be8a8 + (uStack_3ec >> 0x20) * 8))
                    (&uStack_328,uStack_328,&uStack_428);
        }
      }
      else {
        bStack_270 = (byte)uStack_430;
        bStack_26f = (byte)(uStack_430 >> 8);
        cStack_26e = (char)(uStack_430 >> 0x10);
        cStack_26d = (char)(uStack_430 >> 0x18);
        cStack_26c = (char)(uStack_430 >> 0x20);
        cStack_26b = (char)(uStack_430 >> 0x28);
        cStack_26a = (char)(uStack_430 >> 0x30);
        cStack_269 = (char)(uStack_430 >> 0x38);
      }
    }
    puVar36 = (ushort *)(lVar35 + lVar37);
    *puVar36 = (ushort)uStack_458;
    *(ulong *)(puVar36 + 2) = (ulong)(uint)_DAT_011983f0;
    puVar36[8] = 0xffff;
    puVar36[9] = 0xffff;
    puVar36[0xc] = 0;
    puVar36[0xd] = 0;
    puVar36[0xe] = 0;
    puVar36[0xf] = 0;
    puVar36[0x10] = 0;
    puVar36[0x11] = 0;
    puVar36[0x12] = 0;
    puVar36[0x13] = 0;
    puVar36[0x14] = 0;
    puVar36[0x15] = 0;
    puVar36[0x16] = 0;
    puVar36[0x17] = 0;
    puVar36[0x18] = 0;
    puVar36[0x19] = 0;
    puVar36[0x1a] = 0;
    puVar36[0x1b] = 0;
    puVar36[0x1c] = 0;
    puVar36[0x1d] = 0;
    puVar36[0x1e] = 0;
    puVar36[0x1f] = 0;
    puVar36[0x20] = 0;
    puVar36[0x21] = 0;
    puVar36[0x22] = 0;
    puVar36[0x23] = 0;
    puVar36[0x24] = 0;
    puVar36[0x25] = 0;
    puVar36[0x26] = 0;
    puVar36[0x27] = 0;
    puVar36[0x28] = 0;
    puVar36[0x29] = 0;
    puVar36[0x2a] = 0;
    puVar36[0x2b] = 0;
    puVar36[0x2a] = 0;
    puVar36[0x2b] = 0;
    puVar36[0x2c] = 0;
    puVar36[0x2d] = 0;
    puVar36[0x2e] = 0;
    puVar36[0x2f] = 0;
    puVar36[0x30] = 0;
    puVar36[0x31] = 0;
    if (puVar36 + 8 != &uStack_278) {
      iVar13 = CONCAT13(cStack_275,CONCAT12(cStack_276,CONCAT11(uStack_278._1_1_,(byte)uStack_278)))
      ;
      *(int *)(puVar36 + 8) = iVar13;
      if (iVar13 != -1) {
        if (iVar13 == 7) {
          if ((ulong)uStack_228 == 0xffffffff) {
            puVar36[0x30] = 0xffff;
            puVar36[0x31] = 0xffff;
          }
          else {
            uStack_328 = puVar36 + 0x10;
            (**(code **)(&UNK_0f2be8a8 + (ulong)uStack_228 * 8))(&uStack_328,uStack_328,&uStack_268)
            ;
          }
        }
        else {
          *(ulong *)(puVar36 + 0xc) =
               CONCAT17(cStack_269,
                        CONCAT16(cStack_26a,
                                 CONCAT15(cStack_26b,
                                          CONCAT14(cStack_26c,
                                                   CONCAT13(cStack_26d,
                                                            CONCAT12(cStack_26e,
                                                                     CONCAT11(bStack_26f,bStack_270)
                                                                    ))))));
        }
      }
    }
    *(undefined1 (*) [16])(puVar36 + 0x34) = ZEXT816(0);
    puVar36[0x3c] = 0;
    puVar36[0x3d] = 0;
    puVar36[0x3e] = 0;
    puVar36[0x3f] = 0;
    if ((ulong)uStack_228 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_228 * 8))(&uStack_328,&uStack_268);
    }
    puVar16 = puStack_338;
    puVar40 = puStack_340;
    puVar17 = (ushort *)((long)puVar36 + ((long)puStack_340 - (long)puStack_338));
    if ((long)puStack_340 - (long)puStack_338 != 0) {
      lVar35 = 0;
      do {
        *(undefined4 *)((long)puVar17 + lVar35 + 8) = *(undefined4 *)((long)puVar40 + lVar35 + 8);
        *(undefined8 *)((long)puVar17 + lVar35) = *(undefined8 *)((long)puVar40 + lVar35);
        *(undefined4 *)((long)puVar17 + lVar35 + 0x10) = 0xffffffff;
        puVar33 = (undefined8 *)((long)puVar17 + lVar35 + 0x18);
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33 = (undefined8 *)((long)puVar17 + lVar35 + 0x28);
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33 = (undefined8 *)((long)puVar17 + lVar35 + 0x38);
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33 = (undefined8 *)((long)puVar17 + lVar35 + 0x48);
        *puVar33 = 0;
        puVar33[1] = 0;
        puVar33 = (undefined8 *)((long)puVar17 + lVar35 + 0x54);
        *puVar33 = 0;
        puVar33[1] = 0;
        if (puVar17 != puVar40) {
          iVar13 = *(int *)((long)puVar40 + lVar35 + 0x10);
          *(int *)((long)puVar17 + lVar35 + 0x10) = iVar13;
          if (iVar13 != -1) {
            if (iVar13 == 7) {
              uVar23 = (ulong)*(uint *)((long)puVar40 + lVar35 + 0x60);
              if (uVar23 == 0xffffffff) {
                *(undefined4 *)((long)puVar17 + lVar35 + 0x60) = 0xffffffff;
              }
              else {
                lVar29 = (long)puVar17 + lVar35 + 0x20;
                uStack_278._0_1_ = (byte)lVar29;
                uStack_278._1_1_ = (char)((ulong)lVar29 >> 8);
                cStack_276 = (char)((ulong)lVar29 >> 0x10);
                cStack_275 = (char)((ulong)lVar29 >> 0x18);
                cStack_274 = (char)((ulong)lVar29 >> 0x20);
                cStack_273 = (char)((ulong)lVar29 >> 0x28);
                cStack_272 = (char)((ulong)lVar29 >> 0x30);
                cStack_271 = (char)((ulong)lVar29 >> 0x38);
                (**(code **)(&UNK_0f2be8a8 + uVar23 * 8))
                          (&uStack_278,lVar29,(long)puVar40 + lVar35 + 0x20);
              }
            }
            else {
              *(undefined8 *)((long)puVar17 + lVar35 + 0x18) =
                   *(undefined8 *)((long)puVar40 + lVar35 + 0x18);
            }
          }
        }
        puVar33 = (undefined8 *)((long)puVar17 + lVar35 + 0x68);
        *puVar33 = 0;
        puVar33[1] = 0;
        *(undefined8 *)((long)puVar17 + lVar35 + 0x78) = 0;
        uVar19 = *(undefined8 *)((long)puVar40 + lVar35 + 0x70);
        puVar33 = (undefined8 *)((long)puVar17 + lVar35 + 0x68);
        *puVar33 = *(undefined8 *)((long)puVar40 + lVar35 + 0x68);
        puVar33[1] = uVar19;
        *(undefined8 *)((long)puVar17 + lVar35 + 0x78) =
             *(undefined8 *)((long)puVar40 + lVar35 + 0x78);
        *(undefined8 *)((long)puVar40 + lVar35 + 0x68) = 0;
        *(undefined8 *)((long)puVar40 + lVar35 + 0x70) = 0;
        *(undefined8 *)((long)puVar40 + lVar35 + 0x78) = 0;
        lVar29 = lVar35 + 0x80;
        lVar35 = lVar35 + 0x80;
      } while ((ushort *)((long)puVar40 + lVar29) != puVar16);
      puVar39 = puVar40 + 0x34;
      do {
        uStack_278._0_1_ = (byte)puVar39;
        uStack_278._1_1_ = (char)((ulong)puVar39 >> 8);
        cStack_276 = (char)((ulong)puVar39 >> 0x10);
        cStack_275 = (char)((ulong)puVar39 >> 0x18);
        cStack_274 = (char)((ulong)puVar39 >> 0x20);
        cStack_273 = (char)((ulong)puVar39 >> 0x28);
        cStack_272 = (char)((ulong)puVar39 >> 0x30);
        cStack_271 = (char)((ulong)puVar39 >> 0x38);
        func_0x0b66e660(&uStack_278);
        if ((ulong)*(uint *)(puVar39 + -4) != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar39 + -4) * 8))
                    (&uStack_278,puVar39 + -0x24);
        }
        puVar39[-4] = 0xffff;
        puVar39[-3] = 0xffff;
        puVar38 = puVar39 + 0xc;
        puVar40 = puStack_340;
        puVar39 = puVar39 + 0x40;
      } while (puVar38 != puVar16);
    }
    puVar16 = puStack_330;
    puVar36 = puVar36 + 0x40;
    puStack_340 = puVar17;
    puStack_330 = (ushort *)(lVar37 + uVar27 * 0x80);
    pbVar14 = pbStack_3c0;
    if (puVar40 != (ushort *)0x0) {
      puStack_338 = puVar36;
      func_0x0412a280(puVar40,(long)puVar16 - (long)puVar40);
      pbVar14 = pbStack_3c0;
    }
  }
LAB_0b641b9c:
  puStack_338 = puVar36;
  pbStack_440 = pbVar28 + (long)unaff_RBP + (long)pbVar14;
  pbStack_2b0 = pbStack_440;
  bVar41 = false;
LAB_0b641bc4:
  if (uStack_3ec >> 0x20 != 0xffffffff) {
    (**(code **)(&UNK_0f2be788 + (uStack_3ec >> 0x20) * 8))(&uStack_278,&uStack_428);
  }
  if (bVar41) {
    func_0x0b64d5d0(pbStack_440);
    goto LAB_0b643152;
  }
  uVar2 = puStack_338[-0x40];
  param_5[(ulong)(long)(short)uVar2 >> 6] =
       param_5[(ulong)(long)(short)uVar2 >> 6] | 1L << ((byte)uVar2 & 0x3f);
  bVar12 = *pbStack_440;
  pbVar28 = pbStack_440;
  while (uVar23 = (ulong)bVar12, uVar23 < 0x21) {
    if ((0x100002600U >> (uVar23 & 0x3f) & 1) == 0) {
      if (uVar23 == 0) {
        uVar3 = *puStack_3b8;
        unaff_RBP = (byte *)(ulong)uVar3;
        uVar46 = (uint)param_5[1];
        if (((param_5[1] & 0x280) != 0) && (uVar2 != 0x49)) {
          func_0x0719d8e0(1,3,0x16,&UNK_012313d6);
          puVar36 = puStack_340;
          if (puStack_340 != puStack_338) {
            puVar17 = puStack_338;
            do {
              puVar40 = puVar17 + -0xc;
              uStack_278._0_1_ = (byte)puVar40;
              uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
              cStack_276 = (char)((ulong)puVar40 >> 0x10);
              cStack_275 = (char)((ulong)puVar40 >> 0x18);
              cStack_274 = (char)((ulong)puVar40 >> 0x20);
              cStack_273 = (char)((ulong)puVar40 >> 0x28);
              cStack_272 = (char)((ulong)puVar40 >> 0x30);
              cStack_271 = (char)((ulong)puVar40 >> 0x38);
              func_0x0b66e660(&uStack_278);
              if ((ulong)*(uint *)(puVar17 + -0x10) != 0xffffffff) {
                (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar17 + -0x10) * 8))
                          (&uStack_278,puVar17 + -0x30);
              }
              puVar17[-0x10] = 0xffff;
              puVar17[-0xf] = 0xffff;
              puVar17 = puVar17 + -0x40;
            } while (puVar17 != puVar36);
          }
          puStack_338 = puVar36;
          uStack_3a8 = 0xffff;
          auStack_398[0] = 0xffffffff;
          uStack_390 = uStack_390 & 0xffffffff00000000;
          if ((ulong)uStack_348 == 0xffffffff) goto LAB_0b642017;
          if (uStack_348 != 0) {
            (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
            goto LAB_0b642017;
          }
          goto LAB_0b641fea;
        }
        uVar23 = *param_5;
        if (puStack_338 == puStack_340 || (uVar23 & 0x200000000000) == 0) goto LAB_0b6420d2;
        pbVar28 = (byte *)0x0;
        puVar36 = puStack_340;
        puVar17 = puStack_338;
        goto LAB_0b641dfc;
      }
      break;
    }
    pbVar28 = pbVar28 + 1;
    pbStack_2b0 = pbVar28;
    bVar12 = *pbVar28;
  }
  goto LAB_0b63f6aa;
code_r0x0b640c19:
  plVar34[6] = (long)puVar31;
  puVar31[4] = plVar25;
code_r0x0b640c21:
  lVar35 = func_0x04a71550(plVar34 + 7,&uStack_2a8);
  puVar33 = puStack_80;
  if (lVar35 != 0) goto code_r0x0b640ce9;
code_r0x0b640c50:
  if (puVar31 == puVar33) goto code_r0x0b6435e4;
  puVar31 = puVar31 + 5;
  pbVar24 = pbRam000000000f6b4c00;
  if (puVar31 == puVar33) goto code_r0x0b6410ad;
  goto joined_r0x0b640945;
code_r0x0b640ce9:
  pbStack_60 = (byte *)0x1;
  lVar35 = func_0x0b5dcb00(&uStack_2a8,(int)(short)*puStack_3b8,&pbStack_60,1);
  if (lVar35 == 0) {
code_r0x0b6410ad:
    uStack_278._0_1_ = 0;
    auVar8[0xf] = 0;
    auVar8._0_15_ = auStack_220._1_15_;
    auStack_220 = auVar8 << 8;
  }
  else {
    uStack_2e8 = 0;
    bStack_320 = 0;
    uStack_31f = 0;
    uStack_2e0 = 0;
    pbStack_318 = pbStack_60;
    uStack_2f8 = uStack_298;
    pbStack_2f0 = pbStack_290;
    uStack_300 = auStack_2a0;
    auVar7._14_2_ = 0;
    auVar7._0_14_ = stack0xfffffffffffffd62;
    _auStack_2a0 = auVar7 << 0x10;
    uStack_308 = uStack_2a8;
    uStack_2d8 = 0xd;
    uStack_328._0_4_ = 7;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_248 = 0;
    pbStack_260 = (byte *)0x0;
    auStack_258 = ZEXT816(0);
    bStack_270 = 0;
    bStack_26f = 0;
    cStack_26e = '\0';
    cStack_26d = '\0';
    cStack_26c = '\0';
    cStack_26b = '\0';
    cStack_26a = '\0';
    cStack_269 = '\0';
    uStack_268._0_1_ = 0;
    uStack_268._1_7_ = 0;
    uStack_278._0_1_ = 7;
    uStack_278._1_1_ = '\0';
    cStack_276 = '\0';
    cStack_275 = '\0';
    pbStack_58 = (byte *)&uStack_268;
    lStack_310 = lVar35;
    func_0x0b602fa0(&pbStack_58,pbStack_58,&pbStack_318);
    auStack_220[0] = 1;
    if ((ulong)uStack_2d8 != 0xffffffff) {
      (**(code **)(&UNK_0f2be788 + (ulong)uStack_2d8 * 8))(&pbStack_58,&pbStack_318);
    }
  }
  bVar41 = true;
  if ((auStack_2a0[0] & 1) != 0) {
    func_0x0412a280(pbStack_290,(ulong)auStack_2a0 & 0xfffffffffffffffe);
  }
  cVar10 = auStack_220[0];
  if (auStack_220[0] == '\x01') {
    iVar13 = CONCAT13(cStack_275,CONCAT12(cStack_276,CONCAT11(uStack_278._1_1_,(byte)uStack_278)));
    uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,iVar13);
    uStack_458._0_2_ = 0x28;
    if (iVar13 != -1) {
      if (iVar13 == 7) {
        if (uStack_3ec >> 0x20 == 0xffffffff) {
          if (uStack_228 != 0xffffffff) goto code_r0x0b6411d9;
        }
        else if (uStack_228 == 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (uStack_3ec >> 0x20) * 8))(&uStack_328,&uStack_428);
          uStack_3ec = CONCAT44(0xffffffff,(undefined4)uStack_3ec);
        }
        else {
code_r0x0b6411d9:
          uStack_328 = (ushort *)&uStack_428;
          (**(code **)(&UNK_0f2be818 + (ulong)uStack_228 * 8))(&uStack_328,uStack_328,&uStack_268);
        }
      }
      else {
        uStack_430 = CONCAT17(cStack_269,
                              CONCAT16(cStack_26a,
                                       CONCAT15(cStack_26b,
                                                CONCAT14(cStack_26c,
                                                         CONCAT13(cStack_26d,
                                                                  CONCAT12(cStack_26e,
                                                                           CONCAT11(bStack_26f,
                                                                                    bStack_270))))))
                             );
      }
    }
  }
  else {
    pbVar24 = (byte *)&uStack_3d7;
    if ((bStack_3d8 & 1) != 0) {
      pbVar24 = pbStack_3c8;
    }
    uStack_328._0_4_ = (uint)pbVar24;
    uStack_328._4_4_ = (undefined4)((ulong)pbVar24 >> 0x20);
    func_0x07123780(1,3,0x16,&UNK_0136bd6e,&uStack_328);
    uStack_458._0_2_ = 0xffff;
  }
  if ((auStack_220[0] == '\x01') && ((ulong)uStack_228 != 0xffffffff)) {
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_228 * 8))(&uStack_328,&uStack_268);
  }
  if ((bStack_3d8 & 1) != 0) {
    func_0x0412a280(pbStack_3c8,CONCAT71(uStack_3d7,bStack_3d8) & 0xfffffffffffffffe);
  }
  pbVar14 = pbStack_3c0;
  puVar36 = uStack_328;
  if (cVar10 == '\0') goto LAB_0b641bc4;
LAB_0b64066b:
  uStack_328 = puVar36;
  if ((ushort)uStack_458 == 0xffff) {
    uStack_278._0_1_ = (byte)pbStack_440;
    uStack_278._1_1_ = (char)((ulong)pbStack_440 >> 8);
    cStack_276 = (char)((ulong)pbStack_440 >> 0x10);
    cStack_275 = (char)((ulong)pbStack_440 >> 0x18);
    cStack_274 = (char)((ulong)pbStack_440 >> 0x20);
    cStack_273 = (char)((ulong)pbStack_440 >> 0x28);
    cStack_272 = (char)((ulong)pbStack_440 >> 0x30);
    cStack_271 = (char)((ulong)pbStack_440 >> 0x38);
    bVar12 = *pbStack_440;
    fVar50 = 0.0;
    if ((bVar12 != 0x2d) && (bVar12 == 0x2e || (byte)(bVar12 - 0x30) < 10)) {
      pbVar24 = pbStack_440;
      if ((byte)(bVar12 - 0x30) < 10) {
        iVar13 = 0;
        pbVar20 = pbStack_50;
        do {
          pbVar24 = pbVar20;
          uStack_278._0_1_ = (byte)pbVar24;
          uStack_278._1_1_ = (char)((ulong)pbVar24 >> 8);
          cStack_276 = (char)((ulong)pbVar24 >> 0x10);
          cStack_275 = (char)((ulong)pbVar24 >> 0x18);
          cStack_274 = (char)((ulong)pbVar24 >> 0x20);
          cStack_273 = (char)((ulong)pbVar24 >> 0x28);
          cStack_272 = (char)((ulong)pbVar24 >> 0x30);
          cStack_271 = (char)((ulong)pbVar24 >> 0x38);
          iVar13 = (int)(char)pbVar24[-1] + iVar13 * 10 + -0x30;
          bVar12 = *pbVar24;
          pbVar20 = pbVar24 + 1;
        } while ((byte)(bVar12 - 0x30) < 10);
        fVar50 = (float)iVar13;
      }
      pbVar20 = pbVar24;
      if (bVar12 == 0x2e) {
        if ((((pbVar24[1] != 0x23) || (pbVar24[2] != 0x51)) || (pbVar24[3] != 0x4e)) ||
           ((pbVar24[4] != 0x41 || (pbVar24[5] != 0x4e)))) {
          pbVar20 = pbVar24 + 1;
          uStack_278._0_1_ = (byte)pbVar20;
          uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
          cStack_276 = (char)((ulong)pbVar20 >> 0x10);
          cStack_275 = (char)((ulong)pbVar20 >> 0x18);
          cStack_274 = (char)((ulong)pbVar20 >> 0x20);
          cStack_273 = (char)((ulong)pbVar20 >> 0x28);
          cStack_272 = (char)((ulong)pbVar20 >> 0x30);
          cStack_271 = (char)((ulong)pbVar20 >> 0x38);
          bVar12 = *pbVar20;
          iVar13 = 0;
          fVar42 = _DAT_011983f0;
          if ((byte)(bVar12 - 0x30) < 10) {
            iVar13 = bVar12 - 0x30;
            pbVar20 = pbVar24 + 2;
            uStack_278._0_1_ = (byte)pbVar20;
            uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
            cStack_276 = (char)((ulong)pbVar20 >> 0x10);
            cStack_275 = (char)((ulong)pbVar20 >> 0x18);
            cStack_274 = (char)((ulong)pbVar20 >> 0x20);
            cStack_273 = (char)((ulong)pbVar20 >> 0x28);
            cStack_272 = (char)((ulong)pbVar20 >> 0x30);
            cStack_271 = (char)((ulong)pbVar20 >> 0x38);
            bVar12 = pbVar24[2];
            fVar42 = _DAT_01198400;
            if ((byte)(bVar12 - 0x30) < 10) {
              iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
              pbVar20 = pbVar24 + 3;
              uStack_278._0_1_ = (byte)pbVar20;
              uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
              cStack_276 = (char)((ulong)pbVar20 >> 0x10);
              cStack_275 = (char)((ulong)pbVar20 >> 0x18);
              cStack_274 = (char)((ulong)pbVar20 >> 0x20);
              cStack_273 = (char)((ulong)pbVar20 >> 0x28);
              cStack_272 = (char)((ulong)pbVar20 >> 0x30);
              cStack_271 = (char)((ulong)pbVar20 >> 0x38);
              bVar12 = pbVar24[3];
              fVar42 = _DAT_01198c58;
              if ((byte)(bVar12 - 0x30) < 10) {
                iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
                pbVar20 = pbVar24 + 4;
                uStack_278._0_1_ = (byte)pbVar20;
                uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
                cStack_276 = (char)((ulong)pbVar20 >> 0x10);
                cStack_275 = (char)((ulong)pbVar20 >> 0x18);
                cStack_274 = (char)((ulong)pbVar20 >> 0x20);
                cStack_273 = (char)((ulong)pbVar20 >> 0x28);
                cStack_272 = (char)((ulong)pbVar20 >> 0x30);
                cStack_271 = (char)((ulong)pbVar20 >> 0x38);
                bVar12 = pbVar24[4];
                fVar42 = _DAT_01198394;
                if ((byte)(bVar12 - 0x30) < 10) {
                  iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
                  pbVar20 = pbVar24 + 5;
                  uStack_278._0_1_ = (byte)pbVar20;
                  uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
                  cStack_276 = (char)((ulong)pbVar20 >> 0x10);
                  cStack_275 = (char)((ulong)pbVar20 >> 0x18);
                  cStack_274 = (char)((ulong)pbVar20 >> 0x20);
                  cStack_273 = (char)((ulong)pbVar20 >> 0x28);
                  cStack_272 = (char)((ulong)pbVar20 >> 0x30);
                  cStack_271 = (char)((ulong)pbVar20 >> 0x38);
                  bVar12 = pbVar24[5];
                  fVar42 = _DAT_01198c50;
                  if ((byte)(bVar12 - 0x30) < 10) {
                    iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
                    pbVar20 = pbVar24 + 6;
                    uStack_278._0_1_ = (byte)pbVar20;
                    uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
                    cStack_276 = (char)((ulong)pbVar20 >> 0x10);
                    cStack_275 = (char)((ulong)pbVar20 >> 0x18);
                    cStack_274 = (char)((ulong)pbVar20 >> 0x20);
                    cStack_273 = (char)((ulong)pbVar20 >> 0x28);
                    cStack_272 = (char)((ulong)pbVar20 >> 0x30);
                    cStack_271 = (char)((ulong)pbVar20 >> 0x38);
                    bVar12 = pbVar24[6];
                    fVar42 = _DAT_01198b5c;
                    if ((byte)(bVar12 - 0x30) < 10) {
                      iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
                      pbVar20 = pbVar24 + 7;
                      uStack_278._0_1_ = (byte)pbVar20;
                      uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
                      cStack_276 = (char)((ulong)pbVar20 >> 0x10);
                      cStack_275 = (char)((ulong)pbVar20 >> 0x18);
                      cStack_274 = (char)((ulong)pbVar20 >> 0x20);
                      cStack_273 = (char)((ulong)pbVar20 >> 0x28);
                      cStack_272 = (char)((ulong)pbVar20 >> 0x30);
                      cStack_271 = (char)((ulong)pbVar20 >> 0x38);
                      bVar12 = pbVar24[7];
                      fVar42 = _DAT_011988e0;
                      if ((byte)(bVar12 - 0x30) < 10) {
                        iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
                        pbVar20 = pbVar24 + 8;
                        uStack_278._0_1_ = (byte)pbVar20;
                        uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
                        cStack_276 = (char)((ulong)pbVar20 >> 0x10);
                        cStack_275 = (char)((ulong)pbVar20 >> 0x18);
                        cStack_274 = (char)((ulong)pbVar20 >> 0x20);
                        cStack_273 = (char)((ulong)pbVar20 >> 0x28);
                        cStack_272 = (char)((ulong)pbVar20 >> 0x30);
                        cStack_271 = (char)((ulong)pbVar20 >> 0x38);
                        bVar12 = pbVar24[8];
                        fVar42 = _DAT_011989c4;
                        if ((byte)(bVar12 - 0x30) < 10) {
                          pbVar24 = pbVar24 + 9;
                          do {
                            pbVar20 = pbVar24;
                            uStack_278._0_1_ = (byte)pbVar20;
                            uStack_278._1_1_ = (char)((ulong)pbVar20 >> 8);
                            cStack_276 = (char)((ulong)pbVar20 >> 0x10);
                            cStack_275 = (char)((ulong)pbVar20 >> 0x18);
                            cStack_274 = (char)((ulong)pbVar20 >> 0x20);
                            cStack_273 = (char)((ulong)pbVar20 >> 0x28);
                            cStack_272 = (char)((ulong)pbVar20 >> 0x30);
                            cStack_271 = (char)((ulong)pbVar20 >> 0x38);
                            pbVar24 = pbVar20 + 1;
                          } while ((byte)(*pbVar20 - 0x30) < 10);
                          iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
                          bVar12 = *pbVar20;
                          fVar42 = _DAT_01198950;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          fVar50 = fVar50 + (float)iVar13 / fVar42;
          goto LAB_0b6412ac;
        }
        pbVar24 = pbVar24 + 6;
        fVar50 = 0.0;
      }
      else {
LAB_0b6412ac:
        pbVar24 = pbVar20;
        if (bVar12 == 0x65) {
          pbVar24 = pbVar20 + 1;
          uStack_278._0_1_ = (byte)pbVar24;
          uStack_278._1_1_ = (char)((ulong)pbVar24 >> 8);
          cStack_276 = (char)((ulong)pbVar24 >> 0x10);
          cStack_275 = (char)((ulong)pbVar24 >> 0x18);
          cStack_274 = (char)((ulong)pbVar24 >> 0x20);
          cStack_273 = (char)((ulong)pbVar24 >> 0x28);
          cStack_272 = (char)((ulong)pbVar24 >> 0x30);
          cStack_271 = (char)((ulong)pbVar24 >> 0x38);
          bVar12 = pbVar20[1];
          if (bVar12 == 0x2b) {
            pbVar24 = pbVar20 + 2;
            uStack_278._0_1_ = (byte)pbVar24;
            uStack_278._1_1_ = (char)((ulong)pbVar24 >> 8);
            cStack_276 = (char)((ulong)pbVar24 >> 0x10);
            cStack_275 = (char)((ulong)pbVar24 >> 0x18);
            cStack_274 = (char)((ulong)pbVar24 >> 0x20);
            cStack_273 = (char)((ulong)pbVar24 >> 0x28);
            cStack_272 = (char)((ulong)pbVar24 >> 0x30);
            cStack_271 = (char)((ulong)pbVar24 >> 0x38);
            iVar13 = 0;
            if ((byte)(pbVar20[2] - 0x30) < 10) goto LAB_0b64134b;
          }
          else if (bVar12 == 0x2d) {
            pbVar24 = pbVar20 + 2;
            uStack_278._0_1_ = (byte)pbVar24;
            uStack_278._1_1_ = (char)((ulong)pbVar24 >> 8);
            cStack_276 = (char)((ulong)pbVar24 >> 0x10);
            cStack_275 = (char)((ulong)pbVar24 >> 0x18);
            cStack_274 = (char)((ulong)pbVar24 >> 0x20);
            cStack_273 = (char)((ulong)pbVar24 >> 0x28);
            cStack_272 = (char)((ulong)pbVar24 >> 0x30);
            cStack_271 = (char)((ulong)pbVar24 >> 0x38);
            bVar12 = pbVar20[2];
            iVar13 = 0;
            if ((byte)(bVar12 - 0x30) < 10) {
              iVar13 = 0;
              pbVar20 = pbVar20 + 3;
              do {
                pbVar24 = pbVar20;
                iVar13 = (uint)bVar12 + iVar13 * 10 + -0x30;
                uStack_278._0_1_ = (byte)pbVar24;
                uStack_278._1_1_ = (char)((ulong)pbVar24 >> 8);
                cStack_276 = (char)((ulong)pbVar24 >> 0x10);
                cStack_275 = (char)((ulong)pbVar24 >> 0x18);
                cStack_274 = (char)((ulong)pbVar24 >> 0x20);
                cStack_273 = (char)((ulong)pbVar24 >> 0x28);
                cStack_272 = (char)((ulong)pbVar24 >> 0x30);
                cStack_271 = (char)((ulong)pbVar24 >> 0x38);
                bVar12 = *pbVar24;
                pbVar20 = pbVar24 + 1;
              } while ((byte)(bVar12 - 0x30) < 10);
            }
            iVar13 = -iVar13;
          }
          else {
            if (9 < (byte)(bVar12 - 0x30)) {
              func_0x0b6239f0(1,3,0x16,&UNK_014bccfe,&uStack_278);
              fVar50 = 0.0;
              goto LAB_0b6413d0;
            }
LAB_0b64134b:
            iVar13 = 0;
            pbVar20 = pbVar24;
            do {
              pbVar24 = pbVar20 + 1;
              uStack_278._0_1_ = (byte)pbVar24;
              uStack_278._1_1_ = (char)((ulong)pbVar24 >> 8);
              cStack_276 = (char)((ulong)pbVar24 >> 0x10);
              cStack_275 = (char)((ulong)pbVar24 >> 0x18);
              cStack_274 = (char)((ulong)pbVar24 >> 0x20);
              cStack_273 = (char)((ulong)pbVar24 >> 0x28);
              cStack_272 = (char)((ulong)pbVar24 >> 0x30);
              cStack_271 = (char)((ulong)pbVar24 >> 0x38);
              iVar13 = (int)(char)*pbVar20 + iVar13 * 10 + -0x30;
              pbVar20 = pbVar24;
            } while ((byte)(*pbVar24 - 0x30) < 10);
          }
          dVar43 = (double)func_0x0eee37b0(_DAT_014f0528,SUB84((double)iVar13,0));
          fVar50 = (float)((double)fVar50 * dVar43);
          bVar12 = *pbVar24;
        }
        if ((bVar12 | 0x20) != 0x66) goto LAB_0b6413d0;
        pbVar24 = pbVar24 + 1;
      }
      uStack_278._0_1_ = (byte)pbVar24;
      uStack_278._1_1_ = (char)((ulong)pbVar24 >> 8);
      cStack_276 = (char)((ulong)pbVar24 >> 0x10);
      cStack_275 = (char)((ulong)pbVar24 >> 0x18);
      cStack_274 = (char)((ulong)pbVar24 >> 0x20);
      cStack_273 = (char)((ulong)pbVar24 >> 0x28);
      cStack_272 = (char)((ulong)pbVar24 >> 0x30);
      cStack_271 = (char)((ulong)pbVar24 >> 0x38);
    }
LAB_0b6413d0:
    bVar12 = *pbStack_440;
    pbVar24 = pbStack_440;
    while ((bVar12 == 0x5f || ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a))) {
      do {
        bVar12 = pbVar24[1];
        pbVar24 = pbVar24 + 1;
      } while ((byte)(bVar12 - 0x30) < 10);
    }
    pbVar20 = (byte *)CONCAT17(cStack_271,
                               CONCAT16(cStack_272,
                                        CONCAT15(cStack_273,
                                                 CONCAT14(cStack_274,
                                                          CONCAT13(cStack_275,
                                                                   CONCAT12(cStack_276,
                                                                            CONCAT11(uStack_278.
                                                                                     _1_1_,(byte)
                                                  uStack_278)))))));
    lVar35 = (long)pbVar24 - (long)pbVar20;
    if (pbVar20 <= pbVar24 && lVar35 != 0) {
      iVar13 = func_0x0eee38b0(pbVar20,&UNK_01306cb5,lVar35);
      if (iVar13 == 0) {
        lVar35 = 4;
        fVar50 = _DAT_011983f0;
        if (puStack_338 < puStack_330) {
LAB_0b6416f8:
          *(ulong *)(puStack_338 + 2) = (ulong)(uint)_DAT_011983f0;
          puStack_338[0x10] = 0;
          puStack_338[0x11] = 0;
          puStack_338[0x12] = 0;
          puStack_338[0x13] = 0;
          puStack_338[0x14] = 0;
          puStack_338[0x15] = 0;
          puStack_338[0x16] = 0;
          puStack_338[0x17] = 0;
          puStack_338[0x18] = 0;
          puStack_338[0x19] = 0;
          puStack_338[0x1a] = 0;
          puStack_338[0x1b] = 0;
          puStack_338[0x1c] = 0;
          puStack_338[0x1d] = 0;
          puStack_338[0x1e] = 0;
          puStack_338[0x1f] = 0;
          puStack_338[0x20] = 0;
          puStack_338[0x21] = 0;
          puStack_338[0x22] = 0;
          puStack_338[0x23] = 0;
          puStack_338[0x24] = 0;
          puStack_338[0x25] = 0;
          puStack_338[0x26] = 0;
          puStack_338[0x27] = 0;
          puStack_338[0x28] = 0;
          puStack_338[0x29] = 0;
          puStack_338[0x2a] = 0;
          puStack_338[0x2b] = 0;
          puStack_338[0x2c] = 0;
          puStack_338[0x2d] = 0;
          puStack_338[0x2e] = 0;
          puStack_338[0x2f] = 0;
          puStack_338[0x30] = 0;
          puStack_338[0x31] = 0;
          puStack_338[0x34] = 0;
          puStack_338[0x35] = 0;
          puStack_338[0x36] = 0;
          puStack_338[0x37] = 0;
          puStack_338[0x38] = 0;
          puStack_338[0x39] = 0;
          puStack_338[0x3a] = 0;
          puStack_338[0x3b] = 0;
          puStack_338[0x3c] = 0;
          puStack_338[0x3d] = 0;
          puStack_338[0x3e] = 0;
          puStack_338[0x3f] = 0;
          *puStack_338 = 0x3d;
          puStack_338[8] = 0;
          puStack_338[9] = 0;
          puStack_338[0xc] = 0;
          puStack_338[0xd] = 0;
          puStack_338[0xe] = 0;
          puStack_338[0xf] = 0;
          *(float *)(puStack_338 + 0xc) = fVar50;
          puStack_338 = puStack_338 + 0x40;
        }
        else {
          puStack_338 = (ushort *)func_0x0b670800(&puStack_340);
          lVar35 = 4;
        }
      }
      else {
        iVar13 = func_0x0eee38b0(pbVar20,&UNK_01198d5e,lVar35);
        if (iVar13 != 0) {
          bVar41 = true;
          func_0x0b64d450(&pbStack_2b0);
          goto LAB_0b641bc4;
        }
        if (puStack_338 < puStack_330) {
          lVar35 = 5;
          fVar50 = 0.0;
          goto LAB_0b6416f8;
        }
        puStack_338 = (ushort *)func_0x0b670800(&puStack_340);
        lVar35 = 5;
      }
      pbStack_440 = pbVar28 + (long)pbVar14 + lVar35;
      pbStack_2b0 = pbStack_440;
      bVar41 = false;
      goto LAB_0b641bc4;
    }
    uStack_458._0_2_ = 0xffff;
    if (unaff_RBP < pbVar20 + (-(long)pbVar14 - (long)pbVar28)) {
      uStack_438 = (undefined *)((ulong)uStack_438 & 0xffffffff00000000);
      uStack_430 = (ulong)(uint)fVar50;
      uStack_458._0_2_ = 0x3d;
      unaff_RBP = pbVar20 + (-(long)pbVar14 - (long)pbVar28);
    }
  }
  goto LAB_0b6414a9;
LAB_0b641dfc:
  puVar40 = puStack_338;
  if (puVar36[(long)pbVar28 * 0x40] != 0x2d) goto LAB_0b641de3;
  if (pbVar28 != (byte *)0x0) {
    pbVar24 = pbVar28 + -1;
    if ((puVar36[(long)pbVar24 * 0x40] - 0x2a < 4) || (puVar36[(long)pbVar24 * 0x40] == 0x28)) {
      puVar40 = puVar36 + (long)pbVar24 * 0x40;
      puVar17 = *(ushort **)(puVar36 + (long)pbVar28 * 0x40 + 0x38);
      if (puVar17 < *(ushort **)(puVar36 + (long)pbVar28 * 0x40 + 0x3c)) {
        *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar40 + 4);
        *(undefined8 *)puVar17 = *(undefined8 *)puVar40;
        puVar17[8] = 0xffff;
        puVar17[9] = 0xffff;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0;
        puVar17[0xe] = 0;
        puVar17[0xf] = 0;
        puVar17[0x10] = 0;
        puVar17[0x11] = 0;
        puVar17[0x12] = 0;
        puVar17[0x13] = 0;
        puVar17[0x14] = 0;
        puVar17[0x15] = 0;
        puVar17[0x16] = 0;
        puVar17[0x17] = 0;
        puVar17[0x18] = 0;
        puVar17[0x19] = 0;
        puVar17[0x1a] = 0;
        puVar17[0x1b] = 0;
        puVar17[0x1c] = 0;
        puVar17[0x1d] = 0;
        puVar17[0x1e] = 0;
        puVar17[0x1f] = 0;
        puVar17[0x20] = 0;
        puVar17[0x21] = 0;
        puVar17[0x22] = 0;
        puVar17[0x23] = 0;
        puVar17[0x24] = 0;
        puVar17[0x25] = 0;
        puVar17[0x26] = 0;
        puVar17[0x27] = 0;
        puVar17[0x28] = 0;
        puVar17[0x29] = 0;
        puVar17[0x2a] = 0;
        puVar17[0x2b] = 0;
        puVar17[0x2a] = 0;
        puVar17[0x2b] = 0;
        puVar17[0x2c] = 0;
        puVar17[0x2d] = 0;
        puVar17[0x2e] = 0;
        puVar17[0x2f] = 0;
        puVar17[0x30] = 0;
        puVar17[0x31] = 0;
        if (puVar17 != puVar40) {
          iVar13 = *(int *)(puVar40 + 8);
          *(int *)(puVar17 + 8) = iVar13;
          if (iVar13 != -1) {
            if (iVar13 == 7) {
              if ((ulong)*(uint *)(puVar40 + 0x30) == 0xffffffff) {
                puVar17[0x30] = 0xffff;
                puVar17[0x31] = 0xffff;
              }
              else {
                puVar16 = puVar17 + 0x10;
                uStack_278._0_1_ = (byte)puVar16;
                uStack_278._1_1_ = (char)((ulong)puVar16 >> 8);
                cStack_276 = (char)((ulong)puVar16 >> 0x10);
                cStack_275 = (char)((ulong)puVar16 >> 0x18);
                cStack_274 = (char)((ulong)puVar16 >> 0x20);
                cStack_273 = (char)((ulong)puVar16 >> 0x28);
                cStack_272 = (char)((ulong)puVar16 >> 0x30);
                cStack_271 = (char)((ulong)puVar16 >> 0x38);
                (**(code **)(&UNK_0f2be8a8 + (ulong)*(uint *)(puVar40 + 0x30) * 8))
                          (&uStack_278,puVar16,puVar40 + 0x10);
              }
            }
            else {
              *(undefined8 *)(puVar17 + 0xc) = *(undefined8 *)(puVar40 + 0xc);
            }
          }
        }
        puVar17[0x34] = 0;
        puVar17[0x35] = 0;
        puVar17[0x36] = 0;
        puVar17[0x37] = 0;
        puVar17[0x38] = 0;
        puVar17[0x39] = 0;
        puVar17[0x3a] = 0;
        puVar17[0x3b] = 0;
        puVar17[0x3c] = 0;
        puVar17[0x3d] = 0;
        puVar17[0x3e] = 0;
        puVar17[0x3f] = 0;
        uVar19 = *(undefined8 *)(puVar40 + 0x38);
        *(undefined8 *)(puVar17 + 0x34) = *(undefined8 *)(puVar40 + 0x34);
        *(undefined8 *)(puVar17 + 0x38) = uVar19;
        *(undefined8 *)(puVar17 + 0x3c) = *(undefined8 *)(puVar40 + 0x3c);
        puVar40[0x34] = 0;
        puVar40[0x35] = 0;
        puVar40[0x36] = 0;
        puVar40[0x37] = 0;
        puVar40[0x38] = 0;
        puVar40[0x39] = 0;
        puVar40[0x3a] = 0;
        puVar40[0x3b] = 0;
        puVar40[0x3c] = 0;
        puVar40[0x3d] = 0;
        puVar40[0x3e] = 0;
        puVar40[0x3f] = 0;
        puVar17 = puVar17 + 0x40;
      }
      else {
        puVar17 = (ushort *)func_0x0b66e7e0(puVar36 + (long)pbVar28 * 0x40 + 0x34);
      }
      *(ushort **)(puVar36 + (long)pbVar28 * 0x40 + 0x38) = puVar17;
      puVar17 = (ushort *)
                func_0x0b66f810(puStack_340 + (long)pbVar28 * 0x40,puStack_338,
                                puStack_340 + (long)pbVar28 * 0x40 + -0x40);
      puVar36 = puStack_340;
      for (puVar16 = puStack_338; pbVar28 = pbVar24, puStack_340 = puVar36, puVar40 = puVar17,
          puVar17 != puVar16; puVar16 = puVar16 + -0x40) {
        puVar36 = puVar16 + -0xc;
        uStack_278._0_1_ = (byte)puVar36;
        uStack_278._1_1_ = (char)((ulong)puVar36 >> 8);
        cStack_276 = (char)((ulong)puVar36 >> 0x10);
        cStack_275 = (char)((ulong)puVar36 >> 0x18);
        cStack_274 = (char)((ulong)puVar36 >> 0x20);
        cStack_273 = (char)((ulong)puVar36 >> 0x28);
        cStack_272 = (char)((ulong)puVar36 >> 0x30);
        cStack_271 = (char)((ulong)puVar36 >> 0x38);
        func_0x0b66e660(&uStack_278);
        if ((ulong)*(uint *)(puVar16 + -0x10) != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar16 + -0x10) * 8))
                    (&uStack_278,puVar16 + -0x30);
        }
        puVar16[-0x10] = 0xffff;
        puVar16[-0xf] = 0xffff;
        puVar36 = puStack_340;
      }
    }
    goto LAB_0b641de3;
  }
  func_0x0b61da90(1,3,0x16,&UNK_012feb4d);
  puVar36 = puStack_340;
  if (puStack_340 != puStack_338) {
    puVar17 = puStack_338;
    do {
      puVar40 = puVar17 + -0xc;
      uStack_278._0_1_ = (byte)puVar40;
      uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
      cStack_276 = (char)((ulong)puVar40 >> 0x10);
      cStack_275 = (char)((ulong)puVar40 >> 0x18);
      cStack_274 = (char)((ulong)puVar40 >> 0x20);
      cStack_273 = (char)((ulong)puVar40 >> 0x28);
      cStack_272 = (char)((ulong)puVar40 >> 0x30);
      cStack_271 = (char)((ulong)puVar40 >> 0x38);
      func_0x0b66e660(&uStack_278);
      if ((ulong)*(uint *)(puVar17 + -0x10) != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar17 + -0x10) * 8))
                  (&uStack_278,puVar17 + -0x30);
      }
      puVar17[-0x10] = 0xffff;
      puVar17[-0xf] = 0xffff;
      puVar17 = puVar17 + -0x40;
    } while (puVar17 != puVar36);
  }
  puStack_338 = puVar36;
  uStack_3a8 = 0xffff;
  auStack_398[0] = 0xffffffff;
  uStack_390 = uStack_390 & 0xffffffff00000000;
  if ((ulong)uStack_348 == 0xffffffff) goto LAB_0b642017;
  if (uStack_348 != 0) {
    (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
    goto LAB_0b642017;
  }
  goto LAB_0b641fea;
LAB_0b641de3:
  puStack_338 = puVar40;
  pbVar28 = pbVar28 + 1;
  unaff_RBP = pbVar28;
  if ((byte *)((long)puVar17 - (long)puVar36 >> 7) <= pbVar28) goto LAB_0b6420a5;
  goto LAB_0b641dfc;
LAB_0b6420a5:
  uVar23 = *param_5;
  uVar46 = (uint)param_5[1];
LAB_0b6420d2:
  puVar36 = puStack_3b8;
  unaff_RBP = (byte *)(ulong)uVar3;
  if ((uVar23 & 0x30000000015) == 0 && (uVar46 & 0x200) == 0) goto LAB_0b6420f8;
  if ((uVar23 & 0x15) == 0) {
LAB_0b642320:
    if (((uVar23 & 0x10000000000) != 0) || (uVar23 = param_5[1], (uVar23 & 0x18) != 0)) {
      cVar10 = func_0x0b64e1b0(&uStack_3a8);
      puVar17 = puStack_340;
      if (cVar10 != '\0') {
        if (puStack_340 != puStack_338) {
          puVar36 = puStack_338;
          do {
            puVar40 = puVar36 + -0xc;
            uStack_278._0_1_ = (byte)puVar40;
            uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
            cStack_276 = (char)((ulong)puVar40 >> 0x10);
            cStack_275 = (char)((ulong)puVar40 >> 0x18);
            cStack_274 = (char)((ulong)puVar40 >> 0x20);
            cStack_273 = (char)((ulong)puVar40 >> 0x28);
            cStack_272 = (char)((ulong)puVar40 >> 0x30);
            cStack_271 = (char)((ulong)puVar40 >> 0x38);
            func_0x0b66e660(&uStack_278);
            if ((ulong)*(uint *)(puVar36 + -0x10) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar36 + -0x10) * 8))
                        (&uStack_278,puVar36 + -0x30);
            }
            puVar36[-0x10] = 0xffff;
            puVar36[-0xf] = 0xffff;
            puVar36 = puVar36 + -0x40;
          } while (puVar36 != puVar17);
        }
        puStack_338 = puVar17;
        uStack_3a8 = 0xffff;
        auStack_398[0] = 0xffffffff;
        uStack_390 = uStack_390 & 0xffffffff00000000;
        if ((ulong)uStack_348 != 0xffffffff) {
          if (uStack_348 == 0) goto LAB_0b641fea;
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
        }
        goto LAB_0b642017;
      }
      uVar23 = param_5[1];
    }
    if ((uVar23 & 0x200) != 0) {
      cVar10 = func_0x0b64e460(&uStack_3a8);
      puVar17 = puStack_340;
      if (cVar10 != '\0') {
        if (puStack_340 != puStack_338) {
          puVar36 = puStack_338;
          do {
            puVar40 = puVar36 + -0xc;
            uStack_278._0_1_ = (byte)puVar40;
            uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
            cStack_276 = (char)((ulong)puVar40 >> 0x10);
            cStack_275 = (char)((ulong)puVar40 >> 0x18);
            cStack_274 = (char)((ulong)puVar40 >> 0x20);
            cStack_273 = (char)((ulong)puVar40 >> 0x28);
            cStack_272 = (char)((ulong)puVar40 >> 0x30);
            cStack_271 = (char)((ulong)puVar40 >> 0x38);
            func_0x0b66e660(&uStack_278);
            if ((ulong)*(uint *)(puVar36 + -0x10) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar36 + -0x10) * 8))
                        (&uStack_278,puVar36 + -0x30);
            }
            puVar36[-0x10] = 0xffff;
            puVar36[-0xf] = 0xffff;
            puVar36 = puVar36 + -0x40;
          } while (puVar36 != puVar17);
        }
        puStack_338 = puVar17;
        uStack_3a8 = 0xffff;
        auStack_398[0] = 0xffffffff;
        uStack_390 = uStack_390 & 0xffffffff00000000;
        if ((ulong)uStack_348 != 0xffffffff) {
          if (uStack_348 == 0) goto LAB_0b641fea;
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
        }
        goto LAB_0b642017;
      }
    }
    if ((*param_5 & 0x20000000000) != 0) {
      cVar10 = func_0x0b64e960(&uStack_3a8);
      puVar17 = puStack_340;
      if (cVar10 == '\0') goto LAB_0b6420f8;
      if (puStack_340 != puStack_338) {
        puVar36 = puStack_338;
        do {
          puVar40 = puVar36 + -0xc;
          uStack_278._0_1_ = (byte)puVar40;
          uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
          cStack_276 = (char)((ulong)puVar40 >> 0x10);
          cStack_275 = (char)((ulong)puVar40 >> 0x18);
          cStack_274 = (char)((ulong)puVar40 >> 0x20);
          cStack_273 = (char)((ulong)puVar40 >> 0x28);
          cStack_272 = (char)((ulong)puVar40 >> 0x30);
          cStack_271 = (char)((ulong)puVar40 >> 0x38);
          func_0x0b66e660(&uStack_278);
          if ((ulong)*(uint *)(puVar36 + -0x10) != 0xffffffff) {
            (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar36 + -0x10) * 8))
                      (&uStack_278,puVar36 + -0x30);
          }
          puVar36[-0x10] = 0xffff;
          puVar36[-0xf] = 0xffff;
          puVar36 = puVar36 + -0x40;
        } while (puVar36 != puVar17);
      }
LAB_0b642949:
      uStack_3a8 = 0xffff;
      puStack_338 = puVar17;
      func_0x0b5d9d20(auStack_398);
      goto LAB_0b642035;
    }
LAB_0b6420f8:
    if ((*(byte *)((long)param_5 + 9) & 1) != 0) {
      cVar10 = func_0x0b64eb40(&uStack_3a8,0x48);
      puVar17 = puStack_340;
      if (cVar10 != '\0') {
        if (puStack_340 != puStack_338) {
          puVar36 = puStack_338;
          do {
            puVar40 = puVar36 + -0xc;
            uStack_278._0_1_ = (byte)puVar40;
            uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
            cStack_276 = (char)((ulong)puVar40 >> 0x10);
            cStack_275 = (char)((ulong)puVar40 >> 0x18);
            cStack_274 = (char)((ulong)puVar40 >> 0x20);
            cStack_273 = (char)((ulong)puVar40 >> 0x28);
            cStack_272 = (char)((ulong)puVar40 >> 0x30);
            cStack_271 = (char)((ulong)puVar40 >> 0x38);
            func_0x0b66e660(&uStack_278);
            if ((ulong)*(uint *)(puVar36 + -0x10) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar36 + -0x10) * 8))
                        (&uStack_278,puVar36 + -0x30);
            }
            puVar36[-0x10] = 0xffff;
            puVar36[-0xf] = 0xffff;
            puVar36 = puVar36 + -0x40;
          } while (puVar36 != puVar17);
        }
        puVar36 = puStack_3b8;
        puStack_338 = puVar17;
        uStack_3a8 = 0xffff;
        auStack_398[0] = 0xffffffff;
        uStack_390 = uStack_390 & 0xffffffff00000000;
        if ((ulong)uStack_348 == 0xffffffff) {
LAB_0b64265a:
          uStack_348 = 0;
        }
        else if (uStack_348 != 0) {
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
          goto LAB_0b64265a;
        }
        uStack_34c = 0;
        uStack_350 = 0;
        uStack_354 = 0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_388 = 0;
      }
    }
    uVar23 = *param_5;
    if (((uVar23 & 0xff7feffd00) != 0) || ((param_5[1] & 0x1fffffffc000) != 0)) {
      cVar10 = func_0x0b64f050(&uStack_3a8);
      puVar17 = puStack_340;
      if (cVar10 != '\0') {
        puVar36 = puStack_340;
        if (puStack_340 != puStack_338) {
          puVar40 = puStack_338;
          do {
            puVar16 = puVar40 + -0xc;
            uStack_278._0_1_ = (byte)puVar16;
            uStack_278._1_1_ = (char)((ulong)puVar16 >> 8);
            cStack_276 = (char)((ulong)puVar16 >> 0x10);
            cStack_275 = (char)((ulong)puVar16 >> 0x18);
            cStack_274 = (char)((ulong)puVar16 >> 0x20);
            cStack_273 = (char)((ulong)puVar16 >> 0x28);
            cStack_272 = (char)((ulong)puVar16 >> 0x30);
            cStack_271 = (char)((ulong)puVar16 >> 0x38);
            func_0x0b66e660(&uStack_278);
            if ((ulong)*(uint *)(puVar40 + -0x10) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar40 + -0x10) * 8))
                        (&uStack_278,puVar40 + -0x30);
            }
            puVar40[-0x10] = 0xffff;
            puVar40[-0xf] = 0xffff;
            puVar40 = puVar40 + -0x40;
          } while (puVar40 != puVar17);
        }
        puStack_338 = puVar17;
        uStack_3a8 = 0xffff;
        auStack_398[0] = 0xffffffff;
        uStack_390 = uStack_390 & 0xffffffff00000000;
        if ((ulong)uStack_348 != 0xffffffff) {
          if (uStack_348 == 0) goto LAB_0b641fea;
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
        }
        goto LAB_0b642017;
      }
      uVar23 = *param_5;
    }
    if ((uVar23 & 0xc0) != 0) {
      cVar10 = func_0x0b64f360(&uStack_3a8);
      puVar17 = puStack_340;
      if (cVar10 != '\0') {
        if (puStack_340 != puStack_338) {
          puVar36 = puStack_338;
          do {
            puVar40 = puVar36 + -0xc;
            uStack_278._0_1_ = (byte)puVar40;
            uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
            cStack_276 = (char)((ulong)puVar40 >> 0x10);
            cStack_275 = (char)((ulong)puVar40 >> 0x18);
            cStack_274 = (char)((ulong)puVar40 >> 0x20);
            cStack_273 = (char)((ulong)puVar40 >> 0x28);
            cStack_272 = (char)((ulong)puVar40 >> 0x30);
            cStack_271 = (char)((ulong)puVar40 >> 0x38);
            func_0x0b66e660(&uStack_278);
            if ((ulong)*(uint *)(puVar36 + -0x10) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar36 + -0x10) * 8))
                        (&uStack_278,puVar36 + -0x30);
            }
            puVar36[-0x10] = 0xffff;
            puVar36[-0xf] = 0xffff;
            puVar36 = puVar36 + -0x40;
          } while (puVar36 != puVar17);
        }
        puStack_338 = puVar17;
        uStack_3a8 = 0xffff;
        auStack_398[0] = 0xffffffff;
        uStack_390 = uStack_390 & 0xffffffff00000000;
        if ((ulong)uStack_348 != 0xffffffff) {
          if (uStack_348 == 0) goto LAB_0b641fea;
          (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
        }
        goto LAB_0b642017;
      }
      uVar23 = *param_5;
    }
    if ((uVar23 & 0x80100240) != 0) {
      if ((uVar23 & 0x100000) != 0) {
        cVar10 = func_0x0b64eb40(&uStack_3a8,0x14);
        puVar17 = puStack_340;
        if (cVar10 != '\0') {
          if (puStack_340 != puStack_338) {
            puVar36 = puStack_338;
            do {
              puVar40 = puVar36 + -0xc;
              uStack_278._0_1_ = (byte)puVar40;
              uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
              cStack_276 = (char)((ulong)puVar40 >> 0x10);
              cStack_275 = (char)((ulong)puVar40 >> 0x18);
              cStack_274 = (char)((ulong)puVar40 >> 0x20);
              cStack_273 = (char)((ulong)puVar40 >> 0x28);
              cStack_272 = (char)((ulong)puVar40 >> 0x30);
              cStack_271 = (char)((ulong)puVar40 >> 0x38);
              func_0x0b66e660(&uStack_278);
              if ((ulong)*(uint *)(puVar36 + -0x10) != 0xffffffff) {
                (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar36 + -0x10) * 8))
                          (&uStack_278,puVar36 + -0x30);
              }
              puVar36[-0x10] = 0xffff;
              puVar36[-0xf] = 0xffff;
              puVar36 = puVar36 + -0x40;
            } while (puVar36 != puVar17);
          }
          goto LAB_0b642949;
        }
        uVar23 = *param_5;
      }
      if (-1 < (int)uVar23) {
LAB_0b642a02:
        if ((uVar23 & 0x240) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,9);
          if (cVar10 != '\0') goto LAB_0b642d75;
          uVar23 = *param_5;
        }
        goto LAB_0b642a2b;
      }
      cVar10 = func_0x0b64eb40(&uStack_3a8,0x1f);
      if (cVar10 == '\0') {
        uVar23 = *param_5;
        goto LAB_0b642a02;
      }
LAB_0b642d75:
      func_0x0b643b10(&uStack_3a8);
      goto LAB_0b642035;
    }
LAB_0b642a2b:
    if ((uVar23 >> 0x32 & 1) != 0) {
      if ((short)uVar3 < 6) {
        cVar10 = func_0x0b64eb40(&uStack_3a8,0x32);
        if (cVar10 == '\0') {
          uVar23 = *param_5;
          goto LAB_0b642acd;
        }
      }
      else {
LAB_0b642a89:
        cVar10 = func_0x0b64fc60(&uStack_3a8,&UNK_0b670b20,&uStack_278);
        if (cVar10 == '\0') {
          uVar23 = *param_5;
          goto LAB_0b642b8a;
        }
      }
      goto LAB_0b642d75;
    }
    if ((uVar23 & 0x78000000000000) == 0) {
      if ((uVar23 & 0x80000000000000) != 0) {
        if ((short)uVar3 < 6) goto LAB_0b642acd;
        goto LAB_0b642b8a;
      }
    }
    else {
      if ((short)uVar3 < 6) {
LAB_0b642acd:
        if ((uVar23 >> 0x36 & 1) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,0x36);
          if (cVar10 != '\0') goto LAB_0b642d75;
          uVar23 = *param_5;
        }
        if ((uVar23 >> 0x34 & 1) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,0x34);
          if (cVar10 != '\0') goto LAB_0b642d75;
          uVar23 = *param_5;
        }
        if ((uVar23 >> 0x35 & 1) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,0x35);
          if (cVar10 != '\0') goto LAB_0b642d75;
          uVar23 = *param_5;
        }
        if ((uVar23 >> 0x33 & 1) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,0x33);
          if (cVar10 != '\0') goto LAB_0b642d75;
          uVar23 = *param_5;
        }
        if ((uVar23 & 0x80000000000000) == 0) goto LAB_0b642bbd;
        cVar10 = func_0x0b64eb40(&uStack_3a8,0x37);
      }
      else {
        if ((uVar23 & 0x38000000000000) != 0) goto LAB_0b642a89;
LAB_0b642b8a:
        if ((uVar23 & 0xc0000000000000) == 0) goto LAB_0b642bbd;
        cVar10 = func_0x0b64fc60(&uStack_3a8,&UNK_0b670b30,&uStack_278);
      }
      if (cVar10 != '\0') goto LAB_0b642d75;
    }
LAB_0b642bbd:
    uVar23 = *param_5;
    if ((uVar23 & 0x1f00000000000000) != 0) {
      if ((uVar23 >> 0x38 & 1) != 0 && (short)uVar3 < 6) {
        cVar10 = func_0x0b64eb40(&uStack_3a8,0x38);
        if (cVar10 != '\0') goto LAB_0b642d75;
        uVar23 = *param_5;
      }
      if ((uVar23 & 0x200000000000000) != 0) {
        cVar10 = func_0x0b64eb40(&uStack_3a8,0x39);
        if (cVar10 != '\0') goto LAB_0b642d75;
      }
      if ((short)uVar3 < 6) {
        uVar23 = *param_5;
        if (uVar3 == 5) goto LAB_0b642c88;
        if ((uVar23 >> 0x3c & 1) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,0x3c);
          if (cVar10 != '\0') goto LAB_0b642d75;
          uVar23 = *param_5;
        }
        if ((uVar23 >> 0x3b & 1) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,0x3b);
          goto LAB_0b642ca4;
        }
      }
      else {
        uVar23 = *param_5;
        if ((uVar23 & 0x100000000000000) != 0) {
          cVar10 = func_0x0b64eb40(&uStack_3a8,0x38);
          if (cVar10 != '\0') goto LAB_0b642d75;
          uVar23 = *param_5;
        }
LAB_0b642c88:
        if ((uVar23 & 0x1800000000000000) != 0) {
          cVar10 = func_0x0b650150(&uStack_3a8);
LAB_0b642ca4:
          if (cVar10 != '\0') goto LAB_0b642d75;
        }
      }
      if ((*param_5 & 0x400000000000000) != 0) {
        cVar10 = func_0x0b64eb40(&uStack_3a8,0x3a);
        if (cVar10 != '\0') goto LAB_0b642d75;
      }
    }
    uVar23 = param_5[1];
    if ((uVar23 & 0x800) != 0) {
      cVar10 = func_0x0b64eb40(&uStack_3a8,0x4b);
      if (cVar10 == '\0') {
        uVar23 = param_5[1];
        goto LAB_0b642d3a;
      }
      goto LAB_0b642d75;
    }
    if ((uVar23 & 0x480) != 0) {
LAB_0b642d3a:
      if ((char)uVar23 < '\0') {
        cVar10 = func_0x0b64eb40(&uStack_3a8,0x47);
        if (cVar10 != '\0') goto LAB_0b642d75;
        uVar23 = param_5[1];
      }
      if ((uVar23 & 0x400) != 0) {
        cVar10 = func_0x0b650660(&uStack_3a8);
        if (cVar10 != '\0') goto LAB_0b642d75;
      }
    }
    puVar17 = puStack_338;
    if ((long)puStack_338 - (long)puStack_340 != 0x80) {
      uStack_278._0_1_ = 0;
      uStack_278._1_1_ = '\0';
      cStack_276 = '\0';
      cStack_275 = '\0';
      cStack_274 = '\0';
      cStack_273 = '\0';
      cStack_272 = '\0';
      cStack_271 = '\0';
      bStack_270 = 0;
      bStack_26f = 0;
      cStack_26e = '\0';
      cStack_26d = '\0';
      cStack_26c = '\0';
      cStack_26b = '\0';
      cStack_26a = '\0';
      cStack_269 = '\0';
      uStack_268._0_1_ = 0;
      uStack_268._1_7_ = 0;
      if (puStack_340 == puStack_338) {
        pbVar28 = (byte *)((long)&uStack_278 + 1);
      }
      else {
        unaff_RBP = (byte *)((long)&uStack_328 + 1);
        puVar36 = puStack_340;
        do {
          uVar2 = *puVar36;
          if (uVar2 == 0xffff) {
            func_0x0412f8c0(&uStack_278,&UNK_011ac7ad,9);
          }
          else {
            if (uVar2 == 0x3d) {
              uStack_438 = (undefined *)CONCAT44(uStack_438._4_4_,*(undefined4 *)(puVar36 + 0xc));
              func_0x0470d9a0(&uStack_328,&UNK_013d3b35,6,9,&uStack_438);
              bVar41 = ((ulong)uStack_328 & 1) == 0;
              pbVar28 = pbStack_318;
              if (bVar41) {
                pbVar28 = unaff_RBP;
              }
              uVar23 = (ulong)uStack_328 >> 1 & 0x7f;
              if (!bVar41) {
                uVar23 = CONCAT71(uStack_31f,bStack_320);
              }
              func_0x0412f8c0(&uStack_278,pbVar28,uVar23);
            }
            else {
              puVar18 = &UNK_01be0131;
              if (uVar2 < 0x6d) {
                puVar18 = *(undefined **)(&UNK_0f2bc880 + (uint)uVar2 * 0x30);
              }
              uStack_430 = func_0x0eee2e90(puVar18);
              uStack_438 = puVar18;
              func_0x0470d9a0(&uStack_328,&UNK_01487e32,4,0xd,&uStack_438);
              bVar41 = ((ulong)uStack_328 & 1) == 0;
              pbVar28 = pbStack_318;
              if (bVar41) {
                pbVar28 = unaff_RBP;
              }
              uVar23 = (ulong)uStack_328 >> 1 & 0x7f;
              if (!bVar41) {
                uVar23 = CONCAT71(uStack_31f,bStack_320);
              }
              func_0x0412f8c0(&uStack_278,pbVar28,uVar23);
            }
            if (((ulong)uStack_328 & 1) != 0) {
              func_0x0412a280(pbStack_318,(ulong)uStack_328 & 0xfffffffffffffffe);
            }
          }
          puVar36 = puVar36 + 0x40;
        } while (puVar36 != puVar17);
        puVar36 = puStack_3b8;
        if (((byte)uStack_278 & 1) == 0) {
          pbVar28 = (byte *)((long)&uStack_278 + 1);
        }
        else {
          pbVar28 = (byte *)CONCAT71(uStack_268._1_7_,(byte)uStack_268);
        }
      }
      uStack_328._0_4_ = (uint)pbVar28;
      uStack_328._4_4_ = (undefined4)((ulong)pbVar28 >> 0x20);
      func_0x0b5c3630(1,3,0x16,&UNK_011fc888,&uStack_328);
      if (((byte)uStack_278 & 1) != 0) {
        func_0x0412a280(CONCAT71(uStack_268._1_7_,(byte)uStack_268),
                        CONCAT17(cStack_271,
                                 CONCAT16(cStack_272,
                                          CONCAT15(cStack_273,
                                                   CONCAT14(cStack_274,
                                                            CONCAT13(cStack_275,
                                                                     CONCAT12(cStack_276,
                                                                              CONCAT11(uStack_278.
                                                                                       _1_1_,(byte)
                                                  uStack_278))))))) & 0xfffffffffffffffe);
      }
      if ((long)puStack_338 - (long)puStack_340 != 0x80) goto LAB_0b642035;
    }
    uVar46 = *(uint *)(puVar36 + 0xc) & (uint)*param_5;
    uVar47 = *(uint *)(puVar36 + 0xe) & *(uint *)((long)param_5 + 4);
    uVar48 = *(uint *)(puVar36 + 0x10) & (uint)param_5[1];
    uVar49 = *(uint *)(puVar36 + 0x12) & *(uint *)((long)param_5 + 0xc);
    uStack_278._0_1_ = (byte)uVar46;
    uStack_278._1_1_ = (char)(uVar46 >> 8);
    cStack_276 = (char)(uVar46 >> 0x10);
    cStack_275 = (char)(uVar46 >> 0x18);
    cStack_274 = (char)uVar47;
    cStack_273 = (char)(uVar47 >> 8);
    cStack_272 = (char)(uVar47 >> 0x10);
    cStack_271 = (char)(uVar47 >> 0x18);
    bStack_270 = (byte)uVar48;
    bStack_26f = (byte)(uVar48 >> 8);
    cStack_26e = (char)(uVar48 >> 0x10);
    cStack_26d = (char)(uVar48 >> 0x18);
    cStack_26c = (char)uVar49;
    cStack_26b = (char)(uVar49 >> 8);
    cStack_26a = (char)(uVar49 >> 0x10);
    cStack_269 = (char)(uVar49 >> 0x18);
    auVar45[0] = -((byte)*param_5 == (byte)uStack_278);
    auVar45[1] = -(*(char *)((long)param_5 + 1) == uStack_278._1_1_);
    auVar45[2] = -(*(char *)((long)param_5 + 2) == cStack_276);
    auVar45[3] = -(*(char *)((long)param_5 + 3) == cStack_275);
    auVar45[4] = -(*(char *)((long)param_5 + 4) == cStack_274);
    auVar45[5] = -(*(char *)((long)param_5 + 5) == cStack_273);
    auVar45[6] = -(*(char *)((long)param_5 + 6) == cStack_272);
    auVar45[7] = -(*(char *)((long)param_5 + 7) == cStack_271);
    auVar45[8] = -((byte)param_5[1] == bStack_270);
    auVar45[9] = -(*(byte *)((long)param_5 + 9) == bStack_26f);
    auVar45[10] = -(*(char *)((long)param_5 + 10) == cStack_26e);
    auVar45[0xb] = -(*(char *)((long)param_5 + 0xb) == cStack_26d);
    auVar45[0xc] = -(*(char *)((long)param_5 + 0xc) == cStack_26c);
    auVar45[0xd] = -(*(char *)((long)param_5 + 0xd) == cStack_26b);
    auVar45[0xe] = -(*(char *)((long)param_5 + 0xe) == cStack_26a);
    auVar45[0xf] = -(*(char *)((long)param_5 + 0xf) == cStack_269);
    if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf
                ) == 0xffff) {
      auStack_258 = (undefined1  [16])0x0;
      uStack_268._0_1_ = 0;
      uStack_268._1_7_ = 0;
      pbStack_260 = (byte *)0x0;
      uStack_278._0_1_ = 0;
      uStack_278._1_1_ = 0;
      cStack_276 = 0;
      cStack_275 = 0;
      cStack_274 = 0;
      cStack_273 = 0;
      cStack_272 = 0;
      cStack_271 = 0;
      bStack_270 = 0;
      bStack_26f = 0;
      cStack_26e = '\0';
      cStack_26d = '\0';
      cStack_26c = '\0';
      cStack_26b = '\0';
      cStack_26a = '\0';
      cStack_269 = '\0';
      uStack_248 = CONCAT44(uStack_248._4_4_,3);
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_234 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      auStack_220 = (undefined1  [16])0x0;
      auStack_210 = (undefined1  [16])0x0;
      auStack_200 = SUB1612((undefined1  [16])0x0,0);
      uStack_1f4 = 0;
      auStack_1f0 = SUB1612((undefined1  [16])0x0,4);
      auStack_1e0 = (undefined1  [16])0x0;
      auStack_1d0 = (undefined1  [16])0x0;
      uStack_1c0 = 0;
      puStack_1b8 = &UNK_0f325c88;
      puStack_1b0 = &UNK_0bccfd60;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_160 = 0;
      uStack_108 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      auStack_128 = SUB1612((undefined1  [16])0x0,0);
      uStack_11c = 0;
      auStack_138 = (undefined1  [16])0x0;
      auStack_148 = (undefined1  [16])0x0;
      auStack_158 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      auStack_d0 = SUB1612((undefined1  [16])0x0,0);
      uStack_c4 = 0;
      auStack_e0 = (undefined1  [16])0x0;
      auStack_f0 = (undefined1  [16])0x0;
      auStack_100 = (undefined1  [16])0x0;
      uStack_b0 = 0x3f800000;
      auStack_170 = (undefined1  [16])0x0;
      auStack_ac = SUB1613((undefined1  [16])0x0,0);
      uStack_9f = 0;
      uStack_9c = 0;
      auStack_180._0_12_ = ZEXT412(0x3f800000) << 0x40;
      auStack_180._12_4_ = 0;
      ppuStack_198 = &puStack_1b8;
      cVar10 = func_0x0b6446e0(puStack_340,(int)(short)*puVar36,0);
      uVar26 = (undefined7)((ulong)unaff_RBP >> 8);
      if (cVar10 == '\0') {
        cVar10 = func_0x0b64b500(puStack_340,(int)(short)*puVar36,0,0);
        puVar36 = puStack_340;
        if (cVar10 != '\0') {
          lVar35 = *(long *)(puStack_3b0 + 0x34);
          lVar37 = *(long *)(puStack_3b0 + 0x38);
          if (lVar35 != lVar37) {
            do {
              uStack_328 = (ushort *)(lVar37 + -0x18);
              func_0x0b66e660(&uStack_328);
              if ((ulong)*(uint *)(lVar37 + -0x20) != 0xffffffff) {
                (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar37 + -0x20) * 8))
                          (&uStack_328,lVar37 + -0x60);
              }
              *(undefined4 *)(lVar37 + -0x20) = 0xffffffff;
              lVar37 = lVar37 + -0x80;
            } while (lVar37 != lVar35);
          }
          goto LAB_0b64345c;
        }
        cVar10 = func_0x0b64c760(puStack_340);
        uVar23 = CONCAT71(uVar26,1);
        if (cVar10 != '\0') {
          func_0x0b6469e0(puStack_3b0,puVar36);
          uVar23 = 0;
        }
      }
      else {
        lVar35 = *(long *)(puStack_3b0 + 0x34);
        lVar37 = *(long *)(puStack_3b0 + 0x38);
        if (lVar35 != lVar37) {
          do {
            uStack_328 = (ushort *)(lVar37 + -0x18);
            func_0x0b66e660(&uStack_328);
            if ((ulong)*(uint *)(lVar37 + -0x20) != 0xffffffff) {
              (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar37 + -0x20) * 8))
                        (&uStack_328,lVar37 + -0x60);
            }
            *(undefined4 *)(lVar37 + -0x20) = 0xffffffff;
            lVar37 = lVar37 + -0x80;
          } while (lVar37 != lVar35);
        }
LAB_0b64345c:
        pauVar1 = pauStack_68;
        *(long *)(puStack_3b0 + 0x38) = lVar35;
        *puStack_3b0 = 0xffff;
        *(undefined4 *)(puStack_3b0 + 8) = 0xffffffff;
        *(undefined4 *)(puStack_3b0 + 0xc) = 0;
        uVar46 = *(uint *)(puStack_3b0 + 0x30);
        if ((ulong)uVar46 == 0xffffffff) {
LAB_0b643508:
          pauVar1[3] = (undefined1  [16])0x0;
          pauVar1[2] = (undefined1  [16])0x0;
          pauVar1[1] = (undefined1  [16])0x0;
          *pauVar1 = (undefined1  [16])0x0;
          *(undefined4 *)pauVar1[4] = 0;
        }
        else {
          if (uVar46 != 0) {
            (**(code **)(&UNK_0f2be788 + (ulong)uVar46 * 8))(&uStack_328,pauStack_68);
            goto LAB_0b643508;
          }
          pauStack_68[3] = (undefined1  [16])0x0;
          pauStack_68[2] = (undefined1  [16])0x0;
          pauStack_68[1] = (undefined1  [16])0x0;
          *pauStack_68 = (undefined1  [16])0x0;
        }
        uVar23 = CONCAT71(uVar26,1);
      }
      if ((ulong)uStack_b8 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_b8 * 8))(&uStack_328,auStack_100 + 8);
      }
      uStack_b8 = 0xffffffff;
      if ((ulong)uStack_110 != 0xffffffff) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_110 * 8))(&uStack_328,auStack_158 + 8);
      }
      uStack_110 = 0xffffffff;
      if (ppuStack_198 == &puStack_1b8) {
        lVar35 = 0x20;
LAB_0b6435b4:
        (**(code **)(*ppuStack_198 + lVar35))();
      }
      else {
        lVar35 = 0x28;
        if (ppuStack_198 != (undefined **)0x0) goto LAB_0b6435b4;
      }
      if (auStack_258._8_8_ != 0) {
        func_0x0412c2d0();
      }
      goto LAB_0b643155;
    }
    puVar33 = (undefined8 *)&UNK_0f2bc878;
    uVar23 = 0;
    do {
      if (((param_5[uVar23 >> 6] >> (uVar23 & 0x3f) & 1) != 0) &&
         ((*(ulong *)(puStack_3b8 + (uVar23 >> 6) * 4 + 0xc) & 1L << ((byte)uVar23 & 0x3f)) == 0)) {
        puVar18 = (undefined *)*puVar33;
        if (puVar18 == (undefined *)0x0) {
          puVar18 = &UNK_01bdffa0;
        }
        uStack_278._0_1_ = (byte)puVar18;
        uStack_278._1_1_ = (char)((ulong)puVar18 >> 8);
        cStack_276 = (char)((ulong)puVar18 >> 0x10);
        cStack_275 = (char)((ulong)puVar18 >> 0x18);
        cStack_274 = (char)((ulong)puVar18 >> 0x20);
        cStack_273 = (char)((ulong)puVar18 >> 0x28);
        cStack_272 = (char)((ulong)puVar18 >> 0x30);
        cStack_271 = (char)((ulong)puVar18 >> 0x38);
        func_0x0b64d750(1,3,0x16,&UNK_0124cd93,&uStack_278);
      }
      uVar23 = uVar23 + 1;
      puVar33 = puVar33 + 6;
    } while (uVar23 != 0x6d);
    lVar35 = *(long *)(puStack_3b0 + 0x34);
    lVar37 = *(long *)(puStack_3b0 + 0x38);
    if (lVar35 != lVar37) {
      do {
        lVar29 = lVar37 + -0x18;
        uStack_278._0_1_ = (byte)lVar29;
        uStack_278._1_1_ = (char)((ulong)lVar29 >> 8);
        cStack_276 = (char)((ulong)lVar29 >> 0x10);
        cStack_275 = (char)((ulong)lVar29 >> 0x18);
        cStack_274 = (char)((ulong)lVar29 >> 0x20);
        cStack_273 = (char)((ulong)lVar29 >> 0x28);
        cStack_272 = (char)((ulong)lVar29 >> 0x30);
        cStack_271 = (char)((ulong)lVar29 >> 0x38);
        func_0x0b66e660(&uStack_278);
        if ((ulong)*(uint *)(lVar37 + -0x20) != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar37 + -0x20) * 8))
                    (&uStack_278,lVar37 + -0x60);
        }
        *(undefined4 *)(lVar37 + -0x20) = 0xffffffff;
        lVar37 = lVar37 + -0x80;
      } while (lVar37 != lVar35);
    }
  }
  else {
    cVar10 = func_0x0b64d8e0(&uStack_3a8);
    puVar17 = puStack_340;
    if (cVar10 == '\0') {
      uVar23 = *param_5;
      goto LAB_0b642320;
    }
    if (puStack_340 != puStack_338) {
      puVar36 = puStack_338;
      do {
        puVar40 = puVar36 + -0xc;
        uStack_278._0_1_ = (byte)puVar40;
        uStack_278._1_1_ = (char)((ulong)puVar40 >> 8);
        cStack_276 = (char)((ulong)puVar40 >> 0x10);
        cStack_275 = (char)((ulong)puVar40 >> 0x18);
        cStack_274 = (char)((ulong)puVar40 >> 0x20);
        cStack_273 = (char)((ulong)puVar40 >> 0x28);
        cStack_272 = (char)((ulong)puVar40 >> 0x30);
        cStack_271 = (char)((ulong)puVar40 >> 0x38);
        func_0x0b66e660(&uStack_278);
        if ((ulong)*(uint *)(puVar36 + -0x10) != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(puVar36 + -0x10) * 8))
                    (&uStack_278,puVar36 + -0x30);
        }
        puVar36[-0x10] = 0xffff;
        puVar36[-0xf] = 0xffff;
        puVar36 = puVar36 + -0x40;
      } while (puVar36 != puVar17);
    }
    puStack_338 = puVar17;
    uStack_3a8 = 0xffff;
    auStack_398[0] = 0xffffffff;
    uStack_390 = uStack_390 & 0xffffffff00000000;
    if ((ulong)uStack_348 == 0xffffffff) {
LAB_0b642017:
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      uStack_348 = 0;
    }
    else {
      if (uStack_348 != 0) {
        (**(code **)(&UNK_0f2be788 + (ulong)uStack_348 * 8))(&uStack_278,&uStack_388);
        goto LAB_0b642017;
      }
LAB_0b641fea:
      auStack_398[0] = 0xffffffff;
      uStack_3a8 = 0xffff;
      uStack_358 = 0;
      uStack_354 = 0;
      uStack_350 = 0;
      uStack_34c = 0;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_378 = 0;
      uStack_370 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
    }
LAB_0b642035:
    lVar35 = *(long *)(puStack_3b0 + 0x34);
    lVar37 = *(long *)(puStack_3b0 + 0x38);
    if (lVar35 != lVar37) {
      do {
        lVar29 = lVar37 + -0x18;
        uStack_278._0_1_ = (byte)lVar29;
        uStack_278._1_1_ = (char)((ulong)lVar29 >> 8);
        cStack_276 = (char)((ulong)lVar29 >> 0x10);
        cStack_275 = (char)((ulong)lVar29 >> 0x18);
        cStack_274 = (char)((ulong)lVar29 >> 0x20);
        cStack_273 = (char)((ulong)lVar29 >> 0x28);
        cStack_272 = (char)((ulong)lVar29 >> 0x30);
        cStack_271 = (char)((ulong)lVar29 >> 0x38);
        func_0x0b66e660(&uStack_278);
        if ((ulong)*(uint *)(lVar37 + -0x20) != 0xffffffff) {
          (**(code **)(&UNK_0f2be788 + (ulong)*(uint *)(lVar37 + -0x20) * 8))
                    (&uStack_278,lVar37 + -0x60);
        }
        *(undefined4 *)(lVar37 + -0x20) = 0xffffffff;
        lVar37 = lVar37 + -0x80;
      } while (lVar37 != lVar35);
    }
  }
  pauVar1 = pauStack_68;
  *(long *)(puStack_3b0 + 0x38) = lVar35;
  *puStack_3b0 = 0xffff;
  *(undefined4 *)(puStack_3b0 + 8) = 0xffffffff;
  *(undefined4 *)(puStack_3b0 + 0xc) = 0;
  uVar46 = *(uint *)(puStack_3b0 + 0x30);
  if ((ulong)uVar46 != 0xffffffff) {
    if (uVar46 == 0) {
      *(undefined8 *)pauStack_68[3] = 0;
      *(undefined8 *)(pauStack_68[3] + 8) = 0;
      *(undefined8 *)pauStack_68[2] = 0;
      *(undefined8 *)(pauStack_68[2] + 8) = 0;
      *(undefined8 *)pauStack_68[1] = 0;
      *(undefined8 *)(pauStack_68[1] + 8) = 0;
      *(undefined8 *)*pauStack_68 = 0;
      *(undefined8 *)(*pauStack_68 + 8) = 0;
      goto LAB_0b643152;
    }
    (**(code **)(&UNK_0f2be788 + (ulong)uVar46 * 8))(&uStack_278,pauStack_68);
  }
  *(undefined8 *)pauVar1[3] = 0;
  *(undefined8 *)(pauVar1[3] + 8) = 0;
  *(undefined8 *)pauVar1[2] = 0;
  *(undefined8 *)(pauVar1[2] + 8) = 0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  *(undefined8 *)*pauVar1 = 0;
  *(undefined8 *)(*pauVar1 + 8) = 0;
  *(undefined4 *)pauVar1[4] = 0;
  goto LAB_0b643152;
}


