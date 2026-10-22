/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe0d00 (ELF vaddr 0xcae0d00)
 * Label: caller-of-callee
 * Body:  [[0cbe0d00, 0cbe1b68] [0cbe1bf5, 0cbe1c61] [0cbe1c65, 0cbe1c84] [0cbe1ca6, 0cbe1cb0] [0cbe1d17, 0cbe1d37] [0cbe1d3b, 0cbe1d9b]]
 * Ghidra: FUN_0cbe0d00
 */


/* WARNING: Removing unreachable block (ram,0x0cbe1d3b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cbe0d00(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  ulong *puVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  byte *pbVar47;
  byte *pbVar48;
  undefined8 uVar49;
  byte bVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  byte *pbVar54;
  undefined8 *puVar55;
  ulong uVar56;
  byte *pbVar57;
  bool bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar62;
  byte bVar64;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  undefined1 uStack_319;
  undefined8 uStack_318;
  ulong uStack_310;
  byte *pbStack_308;
  long lStack_300;
  undefined8 *puStack_2f8;
  undefined4 uStack_2ec;
  ulong uStack_2e8;
  ulong uStack_2e0;
  byte *pbStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  byte *pbStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined1 *puStack_290;
  undefined1 auStack_288 [16];
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 *******pppppppuStack_228;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  undefined8 uStack_1a8;
  undefined2 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  ulong uStack_170;
  undefined1 auStack_168 [16];
  ulong uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [168];
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined1 auStack_40 [16];
  char cVar61;
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  
  lStack_300 = param_1;
  puVar43 = (ulong *)func_0x0cbe1da0(param_2,&UNK_0129bf3f,10);
  if ((*puVar43 & 1) == 0) {
    uStack_248 = puVar43[2];
    uStack_258 = *puVar43;
    uStack_250 = puVar43[1];
  }
  else {
    FUN_0412e5e0(&uStack_258,puVar43[2],puVar43[1]);
  }
  uStack_240 = (undefined4)puVar43[3];
  uStack_23c = (undefined4)*(undefined8 *)((long)puVar43 + 0x1c);
  uStack_238 = (undefined4)((ulong)*(undefined8 *)((long)puVar43 + 0x1c) >> 0x20);
  uStack_234 = (undefined4)*(undefined8 *)((long)puVar43 + 0x24);
  uStack_230 = (undefined4)((ulong)*(undefined8 *)((long)puVar43 + 0x24) >> 0x20);
  uStack_22c = *(undefined4 *)((long)puVar43 + 0x2c);
  bVar3 = (byte)puVar43[6];
  uVar53 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar53 = puVar43[7];
  }
  if (uVar53 == 0) {
    auStack_220 = (undefined1  [16])0x0;
    auStack_210 = (undefined1  [16])0x0;
    uStack_200 = 0;
    pppppppuStack_228 = &pppppppuStack_228;
    uStack_1f8 = func_0x0cc41880(0xf6ff9e0,auStack_220);
    auStack_1f0 = (undefined1  [16])0x0;
    auStack_1e0 = (undefined1  [16])0x0;
    auStack_1d0 = (undefined1  [16])0x0;
    auStack_1c0 = (undefined1  [16])0x0;
    uStack_1b0 = 3;
    uStack_1ac = 1;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    LOCK();
    uStack_188 = 0;
    UNLOCK();
  }
  else {
    if ((bVar3 & 1) == 0) {
      uStack_298 = puVar43[8];
      uStack_2a8 = puVar43[6];
      uStack_2a0 = puVar43[7];
    }
    else {
      FUN_0412e5e0(&uStack_2a8,puVar43[8]);
    }
    puStack_290 = auStack_288;
    auStack_288 = (undefined1  [16])0x0;
    func_0x056bdf80(&puStack_290,puVar43[9],puVar43 + 10);
    if ((puVar43[0xc] & 1) == 0) {
      uStack_268 = puVar43[0xe];
      uStack_278 = puVar43[0xc];
      uStack_270 = puVar43[0xd];
    }
    else {
      FUN_0412e5e0(&uStack_278,puVar43[0xe],puVar43[0xd]);
    }
    func_0x0c6e6c00(&pppppppuStack_228,&uStack_2a8);
  }
  if ((puVar43[0xf] & 1) == 0) {
    uStack_170 = puVar43[0x11];
    auStack_180 = *(undefined1 (*) [16])(puVar43 + 0xf);
  }
  else {
    FUN_0412e5e0(auStack_180,puVar43[0x11],puVar43[0x10]);
  }
  if ((puVar43[0x12] & 1) == 0) {
    uStack_158 = puVar43[0x14];
    auStack_168 = *(undefined1 (*) [16])(puVar43 + 0x12);
  }
  else {
    FUN_0412e5e0(auStack_168,puVar43[0x14],puVar43[0x13]);
  }
  if (uVar53 != 0) {
    if ((uStack_278 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_268,uStack_278 & 0xfffffffffffffffe);
    }
    func_0x05476120(&puStack_290,auStack_288._0_8_);
    if ((uStack_2a8 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_298,uStack_2a8 & 0xfffffffffffffffe);
    }
  }
  uStack_2d0 = 0;
  uStack_2ec = param_4;
  if ((*param_3 & 1) == 0) {
    pbStack_2b8 = (byte *)param_3[2];
    uStack_2c8 = *param_3;
    uStack_2c0 = param_3[1];
  }
  else {
    FUN_0412e5e0(&uStack_2c8,param_3[2],param_3[1]);
  }
  uVar52 = uStack_2c0;
  uVar53 = uStack_2c8;
  uStack_2b0 = 0;
  uVar56 = uStack_2c8 >> 1 & 0x7f;
  if ((uStack_2c8 & 1) != 0) {
    uVar56 = uStack_2c0;
  }
  if (uVar56 == 0) {
LAB_0cbe10db:
    uVar56 = 0;
  }
  else {
    if ((uStack_2c8 & 1) == 0) {
      pbVar57 = (byte *)((long)&uStack_2c8 + 1);
      if (pbVar57 != (byte *)0x0) goto LAB_0cbe108e;
      goto LAB_0cbe10db;
    }
    pbVar57 = pbStack_2b8;
    if (pbStack_2b8 == (byte *)0x0) goto LAB_0cbe10db;
LAB_0cbe108e:
    if (*pbVar57 == 0) goto LAB_0cbe10db;
    uVar56 = 0xcbf29ce484222325;
    uVar44 = func_0x0eee2e90(pbVar57);
    if (uVar44 != 0) {
      uVar51 = (ulong)((uint)uVar44 & 7);
      if (7 < uVar44) {
        uVar44 = uVar44 & 0xfffffffffffffff8;
        do {
          uVar56 = (((((((uVar56 * 0x100000001b3 ^ (ulong)*pbVar57) * 0x100000001b3 ^
                        (ulong)pbVar57[1]) * 0x100000001b3 ^ (ulong)pbVar57[2]) * 0x100000001b3 ^
                      (ulong)pbVar57[3]) * 0x100000001b3 ^ (ulong)pbVar57[4]) * 0x100000001b3 ^
                    (ulong)pbVar57[5]) * 0x100000001b3 ^ (ulong)pbVar57[6]) * 0x100000001b3 ^
                   (ulong)pbVar57[7];
          pbVar57 = pbVar57 + 8;
          uVar44 = uVar44 - 8;
        } while (uVar44 != 0);
      }
      if (uVar51 != 0) {
        uVar44 = 0;
        do {
          uVar56 = uVar56 * 0x100000001b3 ^ (ulong)pbVar57[uVar44];
          uVar44 = uVar44 + 1;
        } while (uVar51 != uVar44);
      }
    }
  }
  uStack_2d0 = uVar56;
  if ((uVar53 & 1) == 0) {
    pbStack_2d8 = pbStack_2b8;
    uStack_2e8 = uStack_2c8;
    uStack_2e0 = uStack_2c0;
  }
  else {
    FUN_0412e5e0(&uStack_2e8,pbStack_2b8,uVar52);
  }
  uStack_148 = *(undefined8 **)(lStack_300 + 0x148);
  uStack_140 = *(long **)(lStack_300 + 0x150);
  if (*(long *)(lStack_300 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(lStack_300 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_148);
  plVar1 = uStack_140;
  if (uStack_140 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_140 + 1;
    lVar45 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*uStack_140 + 0x10))(uStack_140);
      func_0x0412c2d0(plVar1);
    }
  }
  lVar45 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x500);
  if (lVar45 == 0) {
    func_0x0eec74c0(0x500,0);
  }
  uStack_138 = uStack_248;
  uStack_148 = (undefined8 *)uStack_258;
  uStack_140 = (long *)uStack_250;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  pbStack_130 = (byte *)CONCAT44(uStack_23c,uStack_240);
  uStack_128 = CONCAT44(uStack_234,uStack_238);
  uStack_120 = CONCAT44(uStack_22c,uStack_230);
  func_0x0c6e7950(auStack_118,&pppppppuStack_228);
  uStack_60 = uStack_170;
  uStack_70 = auStack_180._0_8_;
  uStack_68 = auStack_180._8_8_;
  auStack_180 = (undefined1  [16])0x0;
  uStack_170 = 0;
  uStack_48 = uStack_158;
  uStack_58 = auStack_168._0_8_;
  uStack_50 = auStack_168._8_8_;
  auStack_168 = (undefined1  [16])0x0;
  uStack_158 = 0;
  func_0x0c69de30(lVar45,&uStack_2e8,uStack_2ec);
  if ((uStack_58 & 1) == 0) {
    if ((uStack_70 & 1) != 0) goto LAB_0cbe1309;
LAB_0cbe1299:
    func_0x04abe980(auStack_118);
    if (((ulong)uStack_148 & 1) != 0) goto LAB_0cbe1338;
LAB_0cbe12af:
    if (*(long *)(lStack_300 + 0x140) == 0) goto LAB_0cbe1366;
LAB_0cbe12c4:
    lVar46 = func_0x0412c300();
    uVar49 = 0;
    if (lVar46 != 0) {
      uVar49 = *(undefined8 *)(lStack_300 + 0x138);
    }
  }
  else {
    thunk_FUN_0ee326a0(uStack_48,uStack_58 & 0xfffffffffffffffe);
    if ((uStack_70 & 1) == 0) goto LAB_0cbe1299;
LAB_0cbe1309:
    thunk_FUN_0ee326a0(uStack_60,uStack_70 & 0xfffffffffffffffe);
    func_0x04abe980(auStack_118);
    if (((ulong)uStack_148 & 1) == 0) goto LAB_0cbe12af;
LAB_0cbe1338:
    thunk_FUN_0ee326a0(uStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
    if (*(long *)(lStack_300 + 0x140) != 0) goto LAB_0cbe12c4;
LAB_0cbe1366:
    uVar49 = 0;
    lVar46 = 0;
  }
  *(undefined8 *)(lVar45 + 0x398) = uVar49;
  plVar1 = *(long **)(lVar45 + 0x3a0);
  *(long *)(lVar45 + 0x3a0) = lVar46;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar46 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar46 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  bVar58 = (*(byte *)(lVar45 + 0xd0) & 1) != 0;
  uVar53 = lVar45 + 0xd1;
  if (bVar58) {
    uVar53 = *(ulong *)(lVar45 + 0xe0);
  }
  uVar52 = (ulong)(*(byte *)(lVar45 + 0xd0) >> 1);
  if (bVar58) {
    uVar52 = *(ulong *)(lVar45 + 0xd8);
  }
  if (0xfffffffffffffff7 < uVar52) {
    func_0x04882e30();
    goto LAB_0cbe1b5f;
  }
  pbVar57 = (byte *)((long)&uStack_318 + 1);
  if (uVar52 < 0x17) {
    uStack_318 = CONCAT71(uStack_318._1_7_,(char)uVar52 * '\x02');
    if (uVar52 != 0) goto LAB_0cbe144b;
  }
  else {
    uVar56 = 0x1a;
    if ((uVar52 | 7) != 0x17) {
      uVar56 = (uVar52 | 7) + 1;
    }
    pbVar57 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56);
    if (pbVar57 == (byte *)0x0) {
      func_0x0eec74c0(uVar56,0);
    }
    uStack_318 = uVar56 | 1;
    uStack_310 = uVar52;
    pbStack_308 = pbVar57;
LAB_0cbe144b:
    func_0x0eee2f00(pbVar57,uVar53,uVar52);
  }
  pbVar54 = (byte *)((long)&uStack_318 + 1);
  pbVar57[uVar52] = 0;
  uVar52 = (ulong)((byte)uStack_318 >> 1);
  uVar53 = uStack_310;
  pbVar57 = pbStack_308;
  if ((uStack_318 & 1) == 0) {
    uVar53 = uVar52;
    pbVar57 = pbVar54;
  }
  if (uVar53 != 0) {
    pbVar47 = pbVar57;
    if (uVar53 < 8) {
LAB_0cbe165f:
      do {
        bVar3 = *pbVar47;
        bVar50 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar50 = bVar3;
        }
        *pbVar47 = bVar50;
        pbVar47 = pbVar47 + 1;
      } while (pbVar47 != pbVar57 + uVar53);
    }
    else if (uVar53 < 0x20) {
      uVar52 = 0;
LAB_0cbe1539:
      uVar56 = uVar53 & 0xfffffffffffffff8;
      pbVar47 = pbVar57 + uVar56;
      do {
        uVar49 = *(undefined8 *)(pbVar57 + uVar52);
        bVar59 = (char)uVar49 + DAT_014e9110;
        cVar61 = (char)((ulong)uVar49 >> 8);
        bVar60 = cVar61 + DAT_014e9110._1_1_;
        cVar63 = (char)((ulong)uVar49 >> 0x10);
        bVar62 = cVar63 + DAT_014e9110._2_1_;
        cVar65 = (char)((ulong)uVar49 >> 0x18);
        bVar64 = cVar65 + DAT_014e9110._3_1_;
        cVar67 = (char)((ulong)uVar49 >> 0x20);
        bVar66 = cVar67 + DAT_014e9110._4_1_;
        cVar69 = (char)((ulong)uVar49 >> 0x28);
        bVar68 = cVar69 + DAT_014e9110._5_1_;
        cVar71 = (char)((ulong)uVar49 >> 0x30);
        cVar11 = (char)((ulong)uVar49 >> 0x38);
        bVar70 = cVar71 + DAT_014e9110._6_1_;
        bVar72 = cVar11 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar50 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar57 + uVar52) =
             CONCAT17((~-((byte)((bVar72 < bVar10) * bVar10 | (bVar72 >= bVar10) * bVar72) == bVar72
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar70 < bVar9) * bVar9 | (bVar70 >= bVar9) * bVar70) ==
                                  bVar70) & UNK_014ea366) + cVar71,
                               CONCAT15((~-((byte)((bVar68 < bVar8) * bVar8 |
                                                  (bVar68 >= bVar8) * bVar68) == bVar68) &
                                        UNK_014ea365) + cVar69,
                                        CONCAT14((~-((byte)((bVar66 < bVar7) * bVar7 |
                                                           (bVar66 >= bVar7) * bVar66) == bVar66) &
                                                 UNK_014ea364) + cVar67,
                                                 CONCAT13((~-((byte)((bVar64 < bVar6) * bVar6 |
                                                                    (bVar64 >= bVar6) * bVar64) ==
                                                             bVar64) & UNK_014ea363) + cVar65,
                                                          CONCAT12((~-((byte)((bVar62 < bVar5) *
                                                                              bVar5 | (bVar62 >=
                                                                                      bVar5) * 
                                                  bVar62) == bVar62) & UNK_014ea362) + cVar63,
                                                  CONCAT11((~-((byte)((bVar60 < bVar50) * bVar50 |
                                                                     (bVar60 >= bVar50) * bVar60) ==
                                                              bVar60) & UNK_014ea361) + cVar61,
                                                           (~-((byte)((bVar59 < bVar3) * bVar3 |
                                                                     (bVar59 >= bVar3) * bVar59) ==
                                                              bVar59) & DAT_014ea360) + (char)uVar49
                                                          )))))));
        uVar52 = uVar52 + 8;
      } while (uVar56 != uVar52);
      if (uVar53 != uVar56) goto LAB_0cbe165f;
    }
    else {
      uVar52 = uVar53 & 0xffffffffffffffe0;
      uVar56 = 0;
      do {
        pbVar47 = pbVar57 + uVar56;
        bVar12 = pbVar47[1];
        bVar13 = pbVar47[2];
        bVar14 = pbVar47[3];
        bVar15 = pbVar47[4];
        bVar16 = pbVar47[5];
        bVar17 = pbVar47[6];
        bVar18 = pbVar47[7];
        bVar19 = pbVar47[8];
        bVar20 = pbVar47[9];
        bVar21 = pbVar47[10];
        bVar22 = pbVar47[0xb];
        bVar23 = pbVar47[0xc];
        bVar24 = pbVar47[0xd];
        bVar25 = pbVar47[0xe];
        bVar26 = pbVar47[0xf];
        pbVar48 = pbVar57 + uVar56 + 0x10;
        bVar27 = *pbVar48;
        bVar28 = pbVar48[1];
        bVar29 = pbVar48[2];
        bVar30 = pbVar48[3];
        bVar31 = pbVar48[4];
        bVar32 = pbVar48[5];
        bVar33 = pbVar48[6];
        bVar34 = pbVar48[7];
        bVar35 = pbVar48[8];
        bVar36 = pbVar48[9];
        bVar37 = pbVar48[10];
        bVar38 = pbVar48[0xb];
        bVar39 = pbVar48[0xc];
        bVar40 = pbVar48[0xd];
        bVar41 = pbVar48[0xe];
        bVar42 = pbVar48[0xf];
        bVar73 = *pbVar47 + DAT_014e86b0;
        bVar74 = bVar12 + DAT_014e86b0._1_1_;
        bVar75 = bVar13 + DAT_014e86b0._2_1_;
        bVar76 = bVar14 + DAT_014e86b0._3_1_;
        bVar77 = bVar15 + DAT_014e86b0._4_1_;
        bVar78 = bVar16 + DAT_014e86b0._5_1_;
        bVar79 = bVar17 + DAT_014e86b0._6_1_;
        bVar80 = bVar18 + DAT_014e86b0._7_1_;
        bVar81 = bVar19 + DAT_014e86b0._8_1_;
        bVar82 = bVar20 + DAT_014e86b0._9_1_;
        bVar83 = bVar21 + DAT_014e86b0._10_1_;
        bVar84 = bVar22 + DAT_014e86b0._11_1_;
        bVar85 = bVar23 + DAT_014e86b0._12_1_;
        bVar86 = bVar24 + DAT_014e86b0._13_1_;
        bVar87 = bVar25 + DAT_014e86b0._14_1_;
        bVar88 = bVar26 + DAT_014e86b0._15_1_;
        bVar89 = bVar27 + DAT_014e86b0;
        bVar90 = bVar28 + DAT_014e86b0._1_1_;
        bVar91 = bVar29 + DAT_014e86b0._2_1_;
        bVar92 = bVar30 + DAT_014e86b0._3_1_;
        bVar93 = bVar31 + DAT_014e86b0._4_1_;
        bVar94 = bVar32 + DAT_014e86b0._5_1_;
        bVar95 = bVar33 + DAT_014e86b0._6_1_;
        bVar96 = bVar34 + DAT_014e86b0._7_1_;
        bVar97 = bVar35 + DAT_014e86b0._8_1_;
        bVar98 = bVar36 + DAT_014e86b0._9_1_;
        bVar99 = bVar37 + DAT_014e86b0._10_1_;
        bVar100 = bVar38 + DAT_014e86b0._11_1_;
        bVar101 = bVar39 + DAT_014e86b0._12_1_;
        bVar102 = bVar40 + DAT_014e86b0._13_1_;
        bVar103 = bVar41 + DAT_014e86b0._14_1_;
        bVar104 = bVar42 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar50 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar59 = DAT_014e4170._8_1_;
        bVar60 = DAT_014e4170._9_1_;
        bVar62 = DAT_014e4170._10_1_;
        bVar64 = DAT_014e4170._11_1_;
        bVar66 = DAT_014e4170._12_1_;
        bVar68 = DAT_014e4170._13_1_;
        bVar70 = DAT_014e4170._14_1_;
        bVar72 = DAT_014e4170._15_1_;
        pbVar48 = pbVar57 + uVar56;
        *pbVar48 = (-((byte)((bVar3 < bVar73) * bVar3 | (bVar3 >= bVar73) * bVar73) == bVar73) &
                   DAT_014ead50) + *pbVar47;
        pbVar48[1] = (-((byte)((bVar50 < bVar74) * bVar50 | (bVar50 >= bVar74) * bVar74) == bVar74)
                     & UNK_014ead51) + bVar12;
        pbVar48[2] = (-((byte)((bVar5 < bVar75) * bVar5 | (bVar5 >= bVar75) * bVar75) == bVar75) &
                     UNK_014ead52) + bVar13;
        pbVar48[3] = (-((byte)((bVar6 < bVar76) * bVar6 | (bVar6 >= bVar76) * bVar76) == bVar76) &
                     UNK_014ead53) + bVar14;
        pbVar48[4] = (-((byte)((bVar7 < bVar77) * bVar7 | (bVar7 >= bVar77) * bVar77) == bVar77) &
                     UNK_014ead54) + bVar15;
        pbVar48[5] = (-((byte)((bVar8 < bVar78) * bVar8 | (bVar8 >= bVar78) * bVar78) == bVar78) &
                     UNK_014ead55) + bVar16;
        pbVar48[6] = (-((byte)((bVar9 < bVar79) * bVar9 | (bVar9 >= bVar79) * bVar79) == bVar79) &
                     UNK_014ead56) + bVar17;
        pbVar48[7] = (-((byte)((bVar10 < bVar80) * bVar10 | (bVar10 >= bVar80) * bVar80) == bVar80)
                     & UNK_014ead57) + bVar18;
        pbVar48[8] = (-((byte)((bVar59 < bVar81) * bVar59 | (bVar59 >= bVar81) * bVar81) == bVar81)
                     & UNK_014ead58) + bVar19;
        pbVar48[9] = (-((byte)((bVar60 < bVar82) * bVar60 | (bVar60 >= bVar82) * bVar82) == bVar82)
                     & UNK_014ead59) + bVar20;
        pbVar48[10] = (-((byte)((bVar62 < bVar83) * bVar62 | (bVar62 >= bVar83) * bVar83) == bVar83)
                      & UNK_014ead5a) + bVar21;
        pbVar48[0xb] = (-((byte)((bVar64 < bVar84) * bVar64 | (bVar64 >= bVar84) * bVar84) == bVar84
                         ) & UNK_014ead5b) + bVar22;
        pbVar48[0xc] = (-((byte)((bVar66 < bVar85) * bVar66 | (bVar66 >= bVar85) * bVar85) == bVar85
                         ) & UNK_014ead5c) + bVar23;
        pbVar48[0xd] = (-((byte)((bVar68 < bVar86) * bVar68 | (bVar68 >= bVar86) * bVar86) == bVar86
                         ) & UNK_014ead5d) + bVar24;
        pbVar48[0xe] = (-((byte)((bVar70 < bVar87) * bVar70 | (bVar70 >= bVar87) * bVar87) == bVar87
                         ) & UNK_014ead5e) + bVar25;
        pbVar48[0xf] = (-((byte)((bVar72 < bVar88) * bVar72 | (bVar72 >= bVar88) * bVar88) == bVar88
                         ) & UNK_014ead5f) + bVar26;
        pbVar47 = pbVar57 + uVar56 + 0x10;
        *pbVar47 = (-((byte)((bVar3 < bVar89) * bVar3 | (bVar3 >= bVar89) * bVar89) == bVar89) &
                   DAT_014ead50) + bVar27;
        pbVar47[1] = (-((byte)((bVar50 < bVar90) * bVar50 | (bVar50 >= bVar90) * bVar90) == bVar90)
                     & UNK_014ead51) + bVar28;
        pbVar47[2] = (-((byte)((bVar5 < bVar91) * bVar5 | (bVar5 >= bVar91) * bVar91) == bVar91) &
                     UNK_014ead52) + bVar29;
        pbVar47[3] = (-((byte)((bVar6 < bVar92) * bVar6 | (bVar6 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead53) + bVar30;
        pbVar47[4] = (-((byte)((bVar7 < bVar93) * bVar7 | (bVar7 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead54) + bVar31;
        pbVar47[5] = (-((byte)((bVar8 < bVar94) * bVar8 | (bVar8 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead55) + bVar32;
        pbVar47[6] = (-((byte)((bVar9 < bVar95) * bVar9 | (bVar9 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead56) + bVar33;
        pbVar47[7] = (-((byte)((bVar10 < bVar96) * bVar10 | (bVar10 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead57) + bVar34;
        pbVar47[8] = (-((byte)((bVar59 < bVar97) * bVar59 | (bVar59 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead58) + bVar35;
        pbVar47[9] = (-((byte)((bVar60 < bVar98) * bVar60 | (bVar60 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead59) + bVar36;
        pbVar47[10] = (-((byte)((bVar62 < bVar99) * bVar62 | (bVar62 >= bVar99) * bVar99) == bVar99)
                      & UNK_014ead5a) + bVar37;
        pbVar47[0xb] = (-((byte)((bVar64 < bVar100) * bVar64 | (bVar64 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead5b) + bVar38;
        pbVar47[0xc] = (-((byte)((bVar66 < bVar101) * bVar66 | (bVar66 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5c) + bVar39;
        pbVar47[0xd] = (-((byte)((bVar68 < bVar102) * bVar68 | (bVar68 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5d) + bVar40;
        pbVar47[0xe] = (-((byte)((bVar70 < bVar103) * bVar70 | (bVar70 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5e) + bVar41;
        pbVar47[0xf] = (-((byte)((bVar72 < bVar104) * bVar72 | (bVar72 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5f) + bVar42;
        uVar56 = uVar56 + 0x20;
      } while (uVar52 != uVar56);
      if (uVar53 != uVar52) {
        if ((uVar53 & 0x18) == 0) {
          pbVar47 = pbVar57 + uVar52;
          goto LAB_0cbe165f;
        }
        goto LAB_0cbe1539;
      }
    }
    uVar52 = (ulong)((byte)uStack_318 >> 1);
  }
  if ((uStack_318 & 1) != 0) {
    uVar52 = uStack_310;
    pbVar54 = pbStack_308;
  }
  pbVar57 = pbVar54 + uVar52;
  uVar53 = uVar52;
  pbVar47 = pbVar54;
  while (((pbVar48 = pbVar57, 0 < (long)uVar53 &&
          (pbVar47 = (byte *)func_0x0eee2ef0(pbVar47,0x3a,uVar53), pbVar47 != (byte *)0x0)) &&
         (pbVar48 = pbVar47, *pbVar47 != 0x3a))) {
    pbVar47 = pbVar47 + 1;
    uVar53 = (long)pbVar57 - (long)pbVar47;
  }
  uVar53 = (long)pbVar48 - (long)pbVar54;
  if (uVar52 < (ulong)((long)pbVar48 - (long)pbVar54)) {
    uVar53 = uVar52;
  }
  if (pbVar48 == pbVar57) {
    uVar53 = uVar52;
  }
  if (0xfffffffffffffff7 < uVar53) {
LAB_0cbe1b5f:
    uVar49 = func_0x04882e30();
    func_0x05476120(uVar53,auStack_288._0_8_);
    if ((uStack_2a8 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_298,uStack_2a8 & 0xfffffffffffffffe);
    }
    if ((uStack_258 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_248,uStack_258 & 0xfffffffffffffffe);
      uVar49 = func_0x0eee2d70(uVar49);
      if (((ulong)uStack_140 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_130,(ulong)uStack_140 & 0xfffffffffffffffe);
      }
      if ((uStack_318 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_308,uStack_318 & 0xfffffffffffffffe);
      }
      func_0x0cc46730(auStack_40);
      if ((uStack_2e8 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_2d8,uStack_2e8 & 0xfffffffffffffffe);
      }
      if ((uStack_2c8 & 1) != 0) {
        thunk_FUN_0ee326a0(pbStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
      }
      func_0x05cfcf20(&uStack_258);
    }
    func_0x0eee2d70(uVar49);
    pcVar4 = (code *)swi(3);
    lVar45 = (*pcVar4)();
    return lVar45;
  }
  if (uVar53 < 0x17) {
    uStack_148 = (undefined8 *)CONCAT71(uStack_148._1_7_,(char)uVar53 * '\x02');
    uVar56 = (long)&uStack_148 + 1;
    if (uVar53 != 0) goto LAB_0cbe177f;
  }
  else {
    uVar52 = 0x1a;
    if ((uVar53 | 7) != 0x17) {
      uVar52 = (uVar53 | 7) + 1;
    }
    uVar56 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar52);
    if (uVar56 == 0) {
      func_0x0eec74c0(uVar52,0);
    }
    uStack_148 = (undefined8 *)(uVar52 | 1);
    uStack_140 = (long *)uVar53;
    uStack_138 = uVar56;
LAB_0cbe177f:
    func_0x0eee2ee0(uVar56,pbVar54,uVar53);
  }
  *(undefined1 *)(uVar56 + uVar53) = 0;
  FUN_05cf8990(lStack_300 + 0xe0,&uStack_148,&uStack_148);
  if (((ulong)uStack_148 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
  }
  uStack_148 = (undefined8 *)0x0;
  if ((uStack_318 & 1) == 0) {
    pbStack_130 = pbStack_308;
    uStack_140 = (long *)uStack_318;
    uStack_138 = uStack_310;
  }
  else {
    FUN_0412e5e0(&uStack_140,pbStack_308,uStack_310);
  }
  uStack_128 = 0;
  if (((ulong)uStack_140 & 1) == 0) {
    if ((byte)uStack_140 >> 1 != 0) goto LAB_0cbe184e;
  }
  else if (uStack_138 != 0) {
LAB_0cbe184e:
    pbVar57 = pbStack_130;
    if (((ulong)uStack_140 & 1) == 0) {
      pbVar57 = (byte *)((long)&uStack_140 + 1);
    }
    if ((pbVar57 != (byte *)0x0) && (*pbVar57 != 0)) {
      puVar55 = (undefined8 *)0xcbf29ce484222325;
      uVar53 = func_0x0eee2e90(pbVar57);
      if (uVar53 != 0) {
        uVar52 = (ulong)((uint)uVar53 & 7);
        if (7 < uVar53) {
          uVar53 = uVar53 & 0xfffffffffffffff8;
          do {
            puVar55 = (undefined8 *)
                      (((((((((long)puVar55 * 0x100000001b3 ^ (ulong)*pbVar57) * 0x100000001b3 ^
                            (ulong)pbVar57[1]) * 0x100000001b3 ^ (ulong)pbVar57[2]) * 0x100000001b3
                          ^ (ulong)pbVar57[3]) * 0x100000001b3 ^ (ulong)pbVar57[4]) * 0x100000001b3
                        ^ (ulong)pbVar57[5]) * 0x100000001b3 ^ (ulong)pbVar57[6]) * 0x100000001b3 ^
                      (ulong)pbVar57[7]);
            pbVar57 = pbVar57 + 8;
            uVar53 = uVar53 - 8;
          } while (uVar53 != 0);
        }
        if (uVar52 != 0) {
          uVar53 = 0;
          do {
            puVar55 = (undefined8 *)((long)puVar55 * 0x100000001b3 ^ (ulong)pbVar57[uVar53]);
            uVar53 = uVar53 + 1;
          } while (uVar52 != uVar53);
        }
      }
      goto LAB_0cbe1948;
    }
  }
  puVar55 = (undefined8 *)0x0;
LAB_0cbe1948:
  puStack_2f8 = &uStack_148;
  uStack_148 = puVar55;
  lVar46 = func_0x05cf8b10(lStack_300,&uStack_148,&UNK_01563a4f,&puStack_2f8,&uStack_319);
  plVar1 = *(long **)(lVar46 + 0x48);
  *(long *)(lVar46 + 0x48) = lVar45;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2f8 = uStack_148;
  lVar46 = func_0x05cf8dc0(lStack_300 + 0xf8,&puStack_2f8);
  if ((*(byte *)(lVar46 + 0x18) & 1) != 0) {
    thunk_FUN_0ee326a0(*(undefined8 *)(lVar46 + 0x28),*(ulong *)(lVar46 + 0x18) & 0xfffffffffffffffe
                      );
  }
  *(byte **)(lVar46 + 0x28) = pbStack_130;
  *(long **)(lVar46 + 0x18) = uStack_140;
  *(ulong *)(lVar46 + 0x20) = uStack_138;
  uStack_140 = (long *)((ulong)uStack_140 & 0xffffffffffff0000);
  *(undefined8 **)(lVar46 + 0x10) = uStack_148;
  *(undefined8 *)(lVar46 + 0x30) = 0;
  if ((uStack_318 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_308,uStack_318 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_2e8 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_2d8,uStack_2e8 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(lVar45,0xf6ff170,(long)(int)puVar43[4] + 1);
  if ((uStack_2c8 & 1) == 0) {
  }
  else {
    thunk_FUN_0ee326a0(pbStack_2b8,uStack_2c8 & 0xfffffffffffffffe);
  }
  if ((auStack_168[0] & 1) == 0) {
  }
  else {
    thunk_FUN_0ee326a0(uStack_158,auStack_168._0_8_ & 0xfffffffffffffffe);
  }
  if ((auStack_180[0] & 1) == 0) {
    func_0x04abe980(&pppppppuStack_228);
  }
  else {
    thunk_FUN_0ee326a0(uStack_170,auStack_180._0_8_ & 0xfffffffffffffffe);
    func_0x04abe980(&pppppppuStack_228);
  }
  if ((uStack_258 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_248,uStack_258 & 0xfffffffffffffffe);
  }
  return lVar45;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
