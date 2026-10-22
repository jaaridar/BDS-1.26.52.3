/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe7490 (ELF vaddr 0xcae7490)
 * Label: caller-of-callee
 * Body:  [[0cbe7490, 0cbe80a2] [0cbe81ec, 0cbe8218] [0cbe821e, 0cbe824d] [0cbe8251, 0cbe82da]]
 * Ghidra: FUN_0cbe7490
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbe7490(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
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
  long *plVar44;
  long lVar45;
  char *pcVar46;
  byte *pbVar47;
  char *pcVar48;
  long *plVar49;
  ulong uVar50;
  long lVar51;
  undefined8 uVar52;
  byte bVar53;
  ulong uVar54;
  long *plVar55;
  byte *pbVar56;
  long *plVar57;
  ulong uVar58;
  undefined8 *puVar59;
  byte *pbVar60;
  bool bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  byte bVar71;
  byte bVar73;
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
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 uStack_3e1;
  long *plStack_3e0;
  undefined8 *puStack_3d8;
  ulong uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  byte *pbStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  byte *pbStack_398;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  undefined1 *puStack_370;
  undefined1 auStack_368 [16];
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  undefined1 *puStack_320;
  undefined1 auStack_318 [16];
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  long *plStack_2d8;
  byte *pbStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  long *plStack_220;
  byte *pbStack_218;
  undefined1 auStack_180 [168];
  undefined1 auStack_d8 [168];
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  char cVar74;
  
  puVar43 = (ulong *)func_0x0cbe82e0(param_2,&UNK_01387b8c,10);
  uStack_3d0 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_3b8 = (byte *)param_3[2];
    uStack_3c8 = *param_3;
    uStack_3c0 = param_3[1];
    uStack_3b0 = 0;
    uVar50 = uStack_3c8 & 0xff;
    if ((uStack_3c8 & 1) == 0) goto LAB_0cbe74fb;
LAB_0cbe752b:
    if (uStack_3c0 != 0) goto LAB_0cbe7539;
LAB_0cbe763d:
    bVar3 = (byte)*puVar43;
joined_r0x0cbe7a4d:
    uStack_3b0 = 0;
    uStack_3d0 = 0;
    if ((bVar3 & 1) != 0) goto LAB_0cbe764c;
LAB_0cbe7620:
    uStack_328 = puVar43[2];
    uStack_338 = *puVar43;
    uStack_330 = puVar43[1];
  }
  else {
    func_0x0412e5e0(&uStack_3c8,param_3[2],param_3[1]);
    uStack_3b0 = 0;
    uVar50 = uStack_3c8 & 0xff;
    if ((uStack_3c8 & 1) != 0) goto LAB_0cbe752b;
LAB_0cbe74fb:
    if (uVar50 >> 1 == 0) goto LAB_0cbe763d;
LAB_0cbe7539:
    uStack_3b0 = 0;
    if ((uVar50 & 1) != 0) {
      pbVar60 = pbStack_3b8;
      if (pbStack_3b8 != (byte *)0x0) goto LAB_0cbe754f;
LAB_0cbe7a40:
      bVar3 = (byte)*puVar43;
      goto joined_r0x0cbe7a4d;
    }
    pbVar60 = (byte *)((long)&uStack_3c8 + 1);
    if (pbVar60 == (byte *)0x0) goto LAB_0cbe7a40;
LAB_0cbe754f:
    if (*pbVar60 == 0) goto LAB_0cbe763d;
    uVar58 = 0xcbf29ce484222325;
    uVar50 = func_0x0eee2e90(pbVar60);
    if (uVar50 != 0) {
      uVar54 = (ulong)((uint)uVar50 & 7);
      if (7 < uVar50) {
        uVar50 = uVar50 & 0xfffffffffffffff8;
        do {
          uVar58 = (((((((uVar58 * 0x100000001b3 ^ (ulong)*pbVar60) * 0x100000001b3 ^
                        (ulong)pbVar60[1]) * 0x100000001b3 ^ (ulong)pbVar60[2]) * 0x100000001b3 ^
                      (ulong)pbVar60[3]) * 0x100000001b3 ^ (ulong)pbVar60[4]) * 0x100000001b3 ^
                    (ulong)pbVar60[5]) * 0x100000001b3 ^ (ulong)pbVar60[6]) * 0x100000001b3 ^
                   (ulong)pbVar60[7];
          pbVar60 = pbVar60 + 8;
          uVar50 = uVar50 - 8;
        } while (uVar50 != 0);
      }
      if (uVar54 != 0) {
        uVar50 = 0;
        do {
          uVar58 = uVar58 * 0x100000001b3 ^ (ulong)pbVar60[uVar50];
          uVar50 = uVar50 + 1;
        } while (uVar54 != uVar50);
      }
    }
    uStack_3d0 = uVar58;
    if ((*puVar43 & 1) == 0) goto LAB_0cbe7620;
LAB_0cbe764c:
    func_0x0412e5e0(&uStack_338,puVar43[2],puVar43[1]);
  }
  puStack_320 = auStack_318;
  auStack_318 = (undefined1  [16])0x0;
  func_0x056bdf80(&puStack_320,puVar43[3],puVar43 + 4);
  if ((puVar43[6] & 1) == 0) {
    uStack_2f8 = puVar43[8];
    uStack_308 = puVar43[6];
    uStack_300 = puVar43[7];
  }
  else {
    func_0x0412e5e0(&uStack_308,puVar43[8],puVar43[7]);
  }
  func_0x0c6e6c00(auStack_d8,&uStack_338);
  if ((puVar43[9] & 1) == 0) {
    uStack_378 = puVar43[0xb];
    uStack_388 = puVar43[9];
    uStack_380 = puVar43[10];
  }
  else {
    func_0x0412e5e0(&uStack_388,puVar43[0xb],puVar43[10]);
  }
  puStack_370 = auStack_368;
  auStack_368 = (undefined1  [16])0x0;
  func_0x056bdf80(&puStack_370,puVar43[0xc],puVar43 + 0xd);
  if ((puVar43[0xf] & 1) == 0) {
    uStack_348 = puVar43[0x11];
    uStack_358 = puVar43[0xf];
    uStack_350 = puVar43[0x10];
  }
  else {
    func_0x0412e5e0(&uStack_358,puVar43[0x11],puVar43[0x10]);
  }
  func_0x0c6e6c00(auStack_180,&uStack_388);
  if ((uStack_3c8 & 1) == 0) {
    pbStack_398 = pbStack_3b8;
    uStack_3a8 = uStack_3c8;
    uStack_3a0 = uStack_3c0;
  }
  else {
    func_0x0412e5e0(&uStack_3a8,pbStack_3b8,uStack_3c0);
  }
  auStack_2e8 = *(undefined1 (*) [8])(param_1 + 0x148);
  uStack_2e0 = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar44 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar44 = *plVar44 + 1;
    UNLOCK();
  }
  FUN_0cc46680(auStack_238,auStack_2e8);
  plVar44 = uStack_2e0;
  if (uStack_2e0 != (long *)0x0) {
    LOCK();
    plVar55 = uStack_2e0 + 1;
    lVar51 = *plVar55;
    *plVar55 = *plVar55 + -1;
    UNLOCK();
    if (lVar51 == 0) {
      (**(code **)(*uStack_2e0 + 0x10))(uStack_2e0);
      func_0x0412c2d0(plVar44);
    }
  }
  plVar44 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x4f8);
  if (plVar44 == (long *)0x0) {
    func_0x0eec74c0(0x4f8,0);
  }
  func_0x0c6e7950(auStack_2e8,auStack_d8);
  func_0x0c6e7950(&uStack_228,auStack_180);
  func_0x0d0746d0(plVar44,&uStack_3a8,param_4,auStack_2e8,&uStack_228);
  func_0x04abe980(&uStack_228);
  func_0x04abe980(auStack_2e8);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar51 = 0;
    lVar45 = 0;
  }
  else {
    lVar45 = func_0x0412c300();
    lVar51 = 0;
    if (lVar45 != 0) {
      lVar51 = *(long *)(param_1 + 0x138);
    }
  }
  plVar44[0x73] = lVar51;
  plVar55 = (long *)plVar44[0x74];
  plVar44[0x74] = lVar45;
  if (plVar55 != (long *)0x0) {
    LOCK();
    plVar49 = plVar55 + 1;
    lVar51 = *plVar49;
    *plVar49 = *plVar49 + -1;
    UNLOCK();
    if (lVar51 == 0) {
      (**(code **)(*plVar55 + 0x10))(plVar55);
      func_0x0412c2d0(plVar55);
    }
  }
  bVar61 = (*(byte *)(plVar44 + 0x1a) & 1) != 0;
  lVar51 = (long)plVar44 + 0xd1;
  if (bVar61) {
    lVar51 = plVar44[0x1c];
  }
  plVar55 = (long *)(ulong)(*(byte *)(plVar44 + 0x1a) >> 1);
  if (bVar61) {
    plVar55 = (long *)plVar44[0x1b];
  }
  plStack_3e0 = plVar44;
  if ((long *)0xfffffffffffffff7 < plVar55) {
    func_0x04882e30();
    goto LAB_0cbe8099;
  }
  pbVar60 = (byte *)((long)&uStack_228 + 1);
  if (plVar55 < (long *)0x17) {
    uStack_228 = (long *)CONCAT71(uStack_228._1_7_,(char)plVar55 * '\x02');
    pbVar47 = pbVar60;
    if (plVar55 != (long *)0x0) goto LAB_0cbe79c1;
  }
  else {
    uVar50 = 0x1a;
    if (((ulong)plVar55 | 7) != 0x17) {
      uVar50 = ((ulong)plVar55 | 7) + 1;
    }
    pbVar47 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar50);
    if (pbVar47 == (byte *)0x0) {
      func_0x0eec74c0(uVar50,0);
    }
    uStack_228 = (long *)(uVar50 | 1);
    plStack_220 = plVar55;
    pbStack_218 = pbVar47;
LAB_0cbe79c1:
    memcpy(pbVar47,lVar51,plVar55);
  }
  plVar44 = plStack_3e0;
  pbVar47[(long)plVar55] = 0;
  plVar49 = (long *)(ulong)((byte)uStack_228 >> 1);
  plVar55 = plStack_220;
  pbVar47 = pbStack_218;
  if (((ulong)uStack_228 & 1) == 0) {
    plVar55 = plVar49;
    pbVar47 = pbVar60;
  }
  if (plVar55 != (long *)0x0) {
    pbVar56 = pbVar47;
    if (plVar55 < (long *)0x8) {
LAB_0cbe7b4c:
      do {
        bVar3 = *pbVar56;
        bVar53 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar53 = bVar3;
        }
        *pbVar56 = bVar53;
        pbVar56 = pbVar56 + 1;
      } while (pbVar56 != pbVar47 + (long)plVar55);
    }
    else if (plVar55 < (long *)0x20) {
      plVar49 = (long *)0x0;
LAB_0cbe7ae5:
      plVar57 = (long *)((ulong)plVar55 & 0xfffffffffffffff8);
      pbVar56 = pbVar47 + (long)plVar57;
      do {
        uVar52 = *(undefined8 *)(pbVar47 + (long)plVar49);
        bVar62 = (char)uVar52 + DAT_014e9110;
        cVar64 = (char)((ulong)uVar52 >> 8);
        bVar63 = cVar64 + DAT_014e9110._1_1_;
        cVar66 = (char)((ulong)uVar52 >> 0x10);
        bVar65 = cVar66 + DAT_014e9110._2_1_;
        cVar68 = (char)((ulong)uVar52 >> 0x18);
        bVar67 = cVar68 + DAT_014e9110._3_1_;
        cVar70 = (char)((ulong)uVar52 >> 0x20);
        bVar69 = cVar70 + DAT_014e9110._4_1_;
        cVar72 = (char)((ulong)uVar52 >> 0x28);
        bVar71 = cVar72 + DAT_014e9110._5_1_;
        cVar74 = (char)((ulong)uVar52 >> 0x30);
        cVar11 = (char)((ulong)uVar52 >> 0x38);
        bVar73 = cVar74 + DAT_014e9110._6_1_;
        bVar75 = cVar11 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar53 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar47 + (long)plVar49) =
             CONCAT17((~-((byte)((bVar75 < bVar10) * bVar10 | (bVar75 >= bVar10) * bVar75) == bVar75
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar73 < bVar9) * bVar9 | (bVar73 >= bVar9) * bVar73) ==
                                  bVar73) & UNK_014ea366) + cVar74,
                               CONCAT15((~-((byte)((bVar71 < bVar8) * bVar8 |
                                                  (bVar71 >= bVar8) * bVar71) == bVar71) &
                                        UNK_014ea365) + cVar72,
                                        CONCAT14((~-((byte)((bVar69 < bVar7) * bVar7 |
                                                           (bVar69 >= bVar7) * bVar69) == bVar69) &
                                                 UNK_014ea364) + cVar70,
                                                 CONCAT13((~-((byte)((bVar67 < bVar6) * bVar6 |
                                                                    (bVar67 >= bVar6) * bVar67) ==
                                                             bVar67) & UNK_014ea363) + cVar68,
                                                          CONCAT12((~-((byte)((bVar65 < bVar5) *
                                                                              bVar5 | (bVar65 >=
                                                                                      bVar5) * 
                                                  bVar65) == bVar65) & UNK_014ea362) + cVar66,
                                                  CONCAT11((~-((byte)((bVar63 < bVar53) * bVar53 |
                                                                     (bVar63 >= bVar53) * bVar63) ==
                                                              bVar63) & UNK_014ea361) + cVar64,
                                                           (~-((byte)((bVar62 < bVar3) * bVar3 |
                                                                     (bVar62 >= bVar3) * bVar62) ==
                                                              bVar62) & DAT_014ea360) + (char)uVar52
                                                          )))))));
        plVar49 = plVar49 + 1;
      } while (plVar57 != plVar49);
      if (plVar55 != plVar57) goto LAB_0cbe7b4c;
    }
    else {
      plVar49 = (long *)((ulong)plVar55 & 0xffffffffffffffe0);
      plVar57 = (long *)0x0;
      do {
        pbVar56 = pbVar47 + (long)plVar57;
        bVar12 = pbVar56[1];
        bVar13 = pbVar56[2];
        bVar14 = pbVar56[3];
        bVar15 = pbVar56[4];
        bVar16 = pbVar56[5];
        bVar17 = pbVar56[6];
        bVar18 = pbVar56[7];
        bVar19 = pbVar56[8];
        bVar20 = pbVar56[9];
        bVar21 = pbVar56[10];
        bVar22 = pbVar56[0xb];
        bVar23 = pbVar56[0xc];
        bVar24 = pbVar56[0xd];
        bVar25 = pbVar56[0xe];
        bVar26 = pbVar56[0xf];
        pbVar2 = pbVar47 + 0x10 + (long)plVar57;
        bVar27 = *pbVar2;
        bVar28 = pbVar2[1];
        bVar29 = pbVar2[2];
        bVar30 = pbVar2[3];
        bVar31 = pbVar2[4];
        bVar32 = pbVar2[5];
        bVar33 = pbVar2[6];
        bVar34 = pbVar2[7];
        bVar35 = pbVar2[8];
        bVar36 = pbVar2[9];
        bVar37 = pbVar2[10];
        bVar38 = pbVar2[0xb];
        bVar39 = pbVar2[0xc];
        bVar40 = pbVar2[0xd];
        bVar41 = pbVar2[0xe];
        bVar42 = pbVar2[0xf];
        bVar76 = *pbVar56 + DAT_014e86b0;
        bVar77 = bVar12 + DAT_014e86b0._1_1_;
        bVar78 = bVar13 + DAT_014e86b0._2_1_;
        bVar79 = bVar14 + DAT_014e86b0._3_1_;
        bVar80 = bVar15 + DAT_014e86b0._4_1_;
        bVar81 = bVar16 + DAT_014e86b0._5_1_;
        bVar82 = bVar17 + DAT_014e86b0._6_1_;
        bVar83 = bVar18 + DAT_014e86b0._7_1_;
        bVar84 = bVar19 + DAT_014e86b0._8_1_;
        bVar85 = bVar20 + DAT_014e86b0._9_1_;
        bVar86 = bVar21 + DAT_014e86b0._10_1_;
        bVar87 = bVar22 + DAT_014e86b0._11_1_;
        bVar88 = bVar23 + DAT_014e86b0._12_1_;
        bVar89 = bVar24 + DAT_014e86b0._13_1_;
        bVar90 = bVar25 + DAT_014e86b0._14_1_;
        bVar91 = bVar26 + DAT_014e86b0._15_1_;
        bVar92 = bVar27 + DAT_014e86b0;
        bVar93 = bVar28 + DAT_014e86b0._1_1_;
        bVar94 = bVar29 + DAT_014e86b0._2_1_;
        bVar95 = bVar30 + DAT_014e86b0._3_1_;
        bVar96 = bVar31 + DAT_014e86b0._4_1_;
        bVar97 = bVar32 + DAT_014e86b0._5_1_;
        bVar98 = bVar33 + DAT_014e86b0._6_1_;
        bVar99 = bVar34 + DAT_014e86b0._7_1_;
        bVar100 = bVar35 + DAT_014e86b0._8_1_;
        bVar101 = bVar36 + DAT_014e86b0._9_1_;
        bVar102 = bVar37 + DAT_014e86b0._10_1_;
        bVar103 = bVar38 + DAT_014e86b0._11_1_;
        bVar104 = bVar39 + DAT_014e86b0._12_1_;
        bVar105 = bVar40 + DAT_014e86b0._13_1_;
        bVar106 = bVar41 + DAT_014e86b0._14_1_;
        bVar107 = bVar42 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar53 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar62 = DAT_014e4170._8_1_;
        bVar63 = DAT_014e4170._9_1_;
        bVar65 = DAT_014e4170._10_1_;
        bVar67 = DAT_014e4170._11_1_;
        bVar69 = DAT_014e4170._12_1_;
        bVar71 = DAT_014e4170._13_1_;
        bVar73 = DAT_014e4170._14_1_;
        bVar75 = DAT_014e4170._15_1_;
        pbVar2 = pbVar47 + (long)plVar57;
        *pbVar2 = (-((byte)((bVar3 < bVar76) * bVar3 | (bVar3 >= bVar76) * bVar76) == bVar76) &
                  DAT_014ead50) + *pbVar56;
        pbVar2[1] = (-((byte)((bVar53 < bVar77) * bVar53 | (bVar53 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead51) + bVar12;
        pbVar2[2] = (-((byte)((bVar5 < bVar78) * bVar5 | (bVar5 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead52) + bVar13;
        pbVar2[3] = (-((byte)((bVar6 < bVar79) * bVar6 | (bVar6 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead53) + bVar14;
        pbVar2[4] = (-((byte)((bVar7 < bVar80) * bVar7 | (bVar7 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead54) + bVar15;
        pbVar2[5] = (-((byte)((bVar8 < bVar81) * bVar8 | (bVar8 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead55) + bVar16;
        pbVar2[6] = (-((byte)((bVar9 < bVar82) * bVar9 | (bVar9 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead56) + bVar17;
        pbVar2[7] = (-((byte)((bVar10 < bVar83) * bVar10 | (bVar10 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead57) + bVar18;
        pbVar2[8] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead58) + bVar19;
        pbVar2[9] = (-((byte)((bVar63 < bVar85) * bVar63 | (bVar63 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead59) + bVar20;
        pbVar2[10] = (-((byte)((bVar65 < bVar86) * bVar65 | (bVar65 >= bVar86) * bVar86) == bVar86)
                     & UNK_014ead5a) + bVar21;
        pbVar2[0xb] = (-((byte)((bVar67 < bVar87) * bVar67 | (bVar67 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5b) + bVar22;
        pbVar2[0xc] = (-((byte)((bVar69 < bVar88) * bVar69 | (bVar69 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5c) + bVar23;
        pbVar2[0xd] = (-((byte)((bVar71 < bVar89) * bVar71 | (bVar71 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5d) + bVar24;
        pbVar2[0xe] = (-((byte)((bVar73 < bVar90) * bVar73 | (bVar73 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5e) + bVar25;
        pbVar2[0xf] = (-((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5f) + bVar26;
        pbVar56 = pbVar47 + 0x10 + (long)plVar57;
        *pbVar56 = (-((byte)((bVar3 < bVar92) * bVar3 | (bVar3 >= bVar92) * bVar92) == bVar92) &
                   DAT_014ead50) + bVar27;
        pbVar56[1] = (-((byte)((bVar53 < bVar93) * bVar53 | (bVar53 >= bVar93) * bVar93) == bVar93)
                     & UNK_014ead51) + bVar28;
        pbVar56[2] = (-((byte)((bVar5 < bVar94) * bVar5 | (bVar5 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead52) + bVar29;
        pbVar56[3] = (-((byte)((bVar6 < bVar95) * bVar6 | (bVar6 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead53) + bVar30;
        pbVar56[4] = (-((byte)((bVar7 < bVar96) * bVar7 | (bVar7 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead54) + bVar31;
        pbVar56[5] = (-((byte)((bVar8 < bVar97) * bVar8 | (bVar8 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead55) + bVar32;
        pbVar56[6] = (-((byte)((bVar9 < bVar98) * bVar9 | (bVar9 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead56) + bVar33;
        pbVar56[7] = (-((byte)((bVar10 < bVar99) * bVar10 | (bVar10 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead57) + bVar34;
        pbVar56[8] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead58) + bVar35;
        pbVar56[9] = (-((byte)((bVar63 < bVar101) * bVar63 | (bVar63 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead59) + bVar36;
        pbVar56[10] = (-((byte)((bVar65 < bVar102) * bVar65 | (bVar65 >= bVar102) * bVar102) ==
                        bVar102) & UNK_014ead5a) + bVar37;
        pbVar56[0xb] = (-((byte)((bVar67 < bVar103) * bVar67 | (bVar67 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5b) + bVar38;
        pbVar56[0xc] = (-((byte)((bVar69 < bVar104) * bVar69 | (bVar69 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5c) + bVar39;
        pbVar56[0xd] = (-((byte)((bVar71 < bVar105) * bVar71 | (bVar71 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5d) + bVar40;
        pbVar56[0xe] = (-((byte)((bVar73 < bVar106) * bVar73 | (bVar73 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5e) + bVar41;
        pbVar56[0xf] = (-((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5f) + bVar42;
        plVar57 = plVar57 + 4;
      } while (plVar49 != plVar57);
      if (plVar55 != plVar49) {
        if (((ulong)plVar55 & 0x18) == 0) {
          pbVar56 = (byte *)((long)plVar49 + (long)pbVar47);
          goto LAB_0cbe7b4c;
        }
        goto LAB_0cbe7ae5;
      }
    }
    plVar49 = (long *)(ulong)((byte)uStack_228 >> 1);
  }
  if (((ulong)uStack_228 & 1) != 0) {
    plVar49 = plStack_220;
    pbVar60 = pbStack_218;
  }
  pcVar1 = (char *)((long)plVar49 + (long)pbVar60);
  plVar55 = plVar49;
  pbVar47 = pbVar60;
  while (((pcVar48 = pcVar1, 0 < (long)plVar55 &&
          (pcVar46 = (char *)func_0x0eee2ef0(pbVar47,0x3a,plVar55), pcVar46 != (char *)0x0)) &&
         (pcVar48 = pcVar46, *pcVar46 != ':'))) {
    pbVar47 = (byte *)(pcVar46 + 1);
    plVar55 = (long *)(pcVar1 + -(long)pbVar47);
  }
  plVar55 = (long *)(pcVar48 + -(long)pbVar60);
  if (plVar49 < pcVar48 + -(long)pbVar60) {
    plVar55 = plVar49;
  }
  if (pcVar48 == pcVar1) {
    plVar55 = plVar49;
  }
  if ((long *)0xfffffffffffffff7 < plVar55) {
LAB_0cbe8099:
    uVar52 = func_0x04882e30();
    if (((ulong)uStack_228 & 1) != 0) {
      func_0x0412a280(pbStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
    }
    if (plStack_3e0 != (long *)0x0) {
      (**(code **)(*plStack_3e0 + 8))();
    }
    func_0x0cc46730(auStack_238);
    if ((uStack_3a8 & 1) != 0) {
      func_0x0412a280(pbStack_398,uStack_3a8 & 0xfffffffffffffffe);
    }
    func_0x04abe980(auStack_180);
    func_0x056bbbb0(&uStack_388);
    func_0x04abe980(auStack_d8);
    func_0x056bbbb0(&uStack_338);
    while ((uStack_3c8 & 1) == 0) {
      _Unwind_Resume(uVar52);
      func_0x0412a280(uStack_328,uStack_338 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
    _Unwind_Resume(uVar52);
    pcVar4 = (code *)swi(3);
    plVar44 = (long *)(*pcVar4)();
    return plVar44;
  }
  if (plVar55 < (long *)0x17) {
    auStack_2e8[0] = (char)plVar55 * '\x02';
    plVar49 = (long *)((long)auStack_2e8 + 1);
    if (plVar55 != (long *)0x0) goto LAB_0cbe7c70;
  }
  else {
    uVar50 = 0x1a;
    if (((ulong)plVar55 | 7) != 0x17) {
      uVar50 = ((ulong)plVar55 | 7) + 1;
    }
    plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar50);
    if (plVar49 == (long *)0x0) {
      func_0x0eec74c0(uVar50,0);
    }
    auStack_2e8 = (undefined1  [8])(uVar50 | 1);
    uStack_2e0 = plVar55;
    plStack_2d8 = plVar49;
LAB_0cbe7c70:
    func_0x0eee2ee0(plVar49,pbVar60,plVar55);
  }
  *(char *)((long)plVar49 + (long)plVar55) = '\0';
  func_0x05cf8990(param_1 + 0xe0,auStack_2e8,auStack_2e8);
  if (((ulong)auStack_2e8 & 1) != 0) {
    func_0x0412a280(plStack_2d8,(ulong)auStack_2e8 & 0xfffffffffffffffe);
  }
  auStack_2e8 = (undefined1  [8])0x0;
  if (((ulong)uStack_228 & 1) == 0) {
    pbStack_2d0 = pbStack_218;
    uStack_2e0 = uStack_228;
    plStack_2d8 = plStack_220;
  }
  else {
    func_0x0412e5e0(&uStack_2e0,pbStack_218,plStack_220);
  }
  uStack_2c8 = 0;
  if (((ulong)uStack_2e0 & 1) == 0) {
    if ((byte)uStack_2e0 >> 1 != 0) goto LAB_0cbe7d4b;
  }
  else if (plStack_2d8 != (long *)0x0) {
LAB_0cbe7d4b:
    pbVar60 = pbStack_2d0;
    if (((ulong)uStack_2e0 & 1) == 0) {
      pbVar60 = (byte *)((long)&uStack_2e0 + 1);
    }
    if ((pbVar60 != (byte *)0x0) && (*pbVar60 != 0)) {
      puVar59 = (undefined8 *)0xcbf29ce484222325;
      uVar50 = func_0x0eee2e90(pbVar60);
      if (uVar50 != 0) {
        uVar58 = (ulong)((uint)uVar50 & 7);
        if (7 < uVar50) {
          uVar50 = uVar50 & 0xfffffffffffffff8;
          do {
            puVar59 = (undefined8 *)
                      (((((((((long)puVar59 * 0x100000001b3 ^ (ulong)*pbVar60) * 0x100000001b3 ^
                            (ulong)pbVar60[1]) * 0x100000001b3 ^ (ulong)pbVar60[2]) * 0x100000001b3
                          ^ (ulong)pbVar60[3]) * 0x100000001b3 ^ (ulong)pbVar60[4]) * 0x100000001b3
                        ^ (ulong)pbVar60[5]) * 0x100000001b3 ^ (ulong)pbVar60[6]) * 0x100000001b3 ^
                      (ulong)pbVar60[7]);
            pbVar60 = pbVar60 + 8;
            uVar50 = uVar50 - 8;
          } while (uVar50 != 0);
        }
        if (uVar58 != 0) {
          uVar50 = 0;
          do {
            puVar59 = (undefined8 *)((long)puVar59 * 0x100000001b3 ^ (ulong)pbVar60[uVar50]);
            uVar50 = uVar50 + 1;
          } while (uVar58 != uVar50);
        }
      }
      goto LAB_0cbe7e39;
    }
  }
  puVar59 = (undefined8 *)0x0;
LAB_0cbe7e39:
  puStack_3d8 = (undefined8 *)auStack_2e8;
  auStack_2e8 = (undefined1  [8])puVar59;
  lVar51 = func_0x05cf8b10(param_1,auStack_2e8,&UNK_01563a4f,&puStack_3d8,&uStack_3e1);
  plVar55 = *(long **)(lVar51 + 0x48);
  *(long **)(lVar51 + 0x48) = plVar44;
  if (plVar55 != (long *)0x0) {
    (**(code **)(*plVar55 + 8))();
  }
  puStack_3d8 = (undefined8 *)auStack_2e8;
  lVar51 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_3d8);
  if ((*(byte *)(lVar51 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar51 + 0x28),*(ulong *)(lVar51 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar51 + 0x28) = pbStack_2d0;
  *(long **)(lVar51 + 0x18) = uStack_2e0;
  *(long **)(lVar51 + 0x20) = plStack_2d8;
  uStack_2e0 = (long *)((ulong)uStack_2e0 & 0xffffffffffff0000);
  *(undefined1 (*) [8])(lVar51 + 0x10) = auStack_2e8;
  *(undefined8 *)(lVar51 + 0x30) = 0;
  if (((ulong)uStack_228 & 1) == 0) {
    func_0x0cc46730(auStack_238);
  }
  else {
    func_0x0412a280(pbStack_218,(ulong)uStack_228 & 0xfffffffffffffffe);
    func_0x0cc46730(auStack_238);
  }
  if ((uStack_3a8 & 1) == 0) {
    func_0x04abe980(auStack_180);
  }
  else {
    func_0x0412a280(pbStack_398,uStack_3a8 & 0xfffffffffffffffe);
    func_0x04abe980(auStack_180);
  }
  if ((uStack_358 & 1) != 0) {
    func_0x0412a280(uStack_348,uStack_358 & 0xfffffffffffffffe);
  }
  func_0x05476120(&puStack_370,auStack_368._0_8_);
  if ((uStack_388 & 1) != 0) {
    func_0x0412a280(uStack_378,uStack_388 & 0xfffffffffffffffe);
  }
  func_0x04abe980(auStack_d8);
  if ((uStack_308 & 1) != 0) {
    func_0x0412a280(uStack_2f8,uStack_308 & 0xfffffffffffffffe);
  }
  func_0x05476120(&puStack_320,auStack_318._0_8_);
  if ((uStack_338 & 1) != 0) {
    func_0x0412a280(uStack_328,uStack_338 & 0xfffffffffffffffe);
  }
  if ((uStack_3c8 & 1) != 0) {
    func_0x0412a280(pbStack_3b8,uStack_3c8 & 0xfffffffffffffffe);
  }
  return plVar44;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
