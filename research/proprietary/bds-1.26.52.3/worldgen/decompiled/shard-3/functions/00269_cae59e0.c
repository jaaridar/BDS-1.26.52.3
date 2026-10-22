/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe59e0 (ELF vaddr 0xcae59e0)
 * Label: caller-of-callee
 * Body:  [[0cbe59e0, 0cbe64ce] [0cbe65d5, 0cbe6601] [0cbe6607, 0cbe662d] [0cbe6631, 0cbe66a3]]
 * Ghidra: FUN_0cbe59e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbe59e0(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
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
  byte bVar43;
  byte *pbVar44;
  ulong *puVar45;
  long *plVar46;
  long lVar47;
  byte *pbVar48;
  ulong uVar49;
  long lVar50;
  undefined8 uVar51;
  byte bVar52;
  ulong uVar53;
  byte *pbVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  ulong uVar58;
  undefined8 *puVar59;
  bool bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar72;
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
  byte bVar105;
  byte bVar106;
  undefined1 uStack_259;
  undefined8 uStack_258;
  byte *pbStack_250;
  byte *pbStack_248;
  long *plStack_240;
  undefined8 *puStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  byte *pbStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  byte *pbStack_1f8;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 auStack_1c8 [16];
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [168];
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  
  puVar45 = (ulong *)func_0x0cbe66b0(param_2,&UNK_013f06e5,10);
  uStack_230 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_218 = (byte *)param_3[2];
    uStack_228 = *param_3;
    uStack_220 = param_3[1];
    uStack_210 = 0;
    uVar49 = uStack_228 & 0xff;
    if ((uStack_228 & 1) == 0) goto LAB_0cbe5a4b;
LAB_0cbe5a7b:
    if (uStack_220 != 0) goto LAB_0cbe5a89;
LAB_0cbe5b8e:
    bVar3 = (byte)*puVar45;
joined_r0x0cbe5ef0:
    uStack_210 = 0;
    uStack_230 = 0;
    if ((bVar3 & 1) != 0) goto LAB_0cbe5b9d;
LAB_0cbe5b70:
    uStack_1d8 = puVar45[2];
    uStack_1e8 = *puVar45;
    uStack_1e0 = puVar45[1];
  }
  else {
    func_0x0412e5e0(&uStack_228,param_3[2],param_3[1]);
    uStack_210 = 0;
    uVar49 = uStack_228 & 0xff;
    if ((uStack_228 & 1) != 0) goto LAB_0cbe5a7b;
LAB_0cbe5a4b:
    if (uVar49 >> 1 == 0) goto LAB_0cbe5b8e;
LAB_0cbe5a89:
    uStack_210 = 0;
    if ((uVar49 & 1) != 0) {
      pbVar55 = pbStack_218;
      if (pbStack_218 != (byte *)0x0) goto LAB_0cbe5a9f;
LAB_0cbe5ee3:
      bVar3 = (byte)*puVar45;
      goto joined_r0x0cbe5ef0;
    }
    pbVar55 = (byte *)((long)&uStack_228 + 1);
    if (pbVar55 == (byte *)0x0) goto LAB_0cbe5ee3;
LAB_0cbe5a9f:
    if (*pbVar55 == 0) goto LAB_0cbe5b8e;
    uVar58 = 0xcbf29ce484222325;
    uVar49 = strlen(pbVar55);
    if (uVar49 != 0) {
      uVar53 = (ulong)((uint)uVar49 & 7);
      if (7 < uVar49) {
        uVar49 = uVar49 & 0xfffffffffffffff8;
        do {
          uVar58 = (((((((uVar58 * 0x100000001b3 ^ (ulong)*pbVar55) * 0x100000001b3 ^
                        (ulong)pbVar55[1]) * 0x100000001b3 ^ (ulong)pbVar55[2]) * 0x100000001b3 ^
                      (ulong)pbVar55[3]) * 0x100000001b3 ^ (ulong)pbVar55[4]) * 0x100000001b3 ^
                    (ulong)pbVar55[5]) * 0x100000001b3 ^ (ulong)pbVar55[6]) * 0x100000001b3 ^
                   (ulong)pbVar55[7];
          pbVar55 = pbVar55 + 8;
          uVar49 = uVar49 - 8;
        } while (uVar49 != 0);
      }
      if (uVar53 != 0) {
        uVar49 = 0;
        do {
          uVar58 = uVar58 * 0x100000001b3 ^ (ulong)pbVar55[uVar49];
          uVar49 = uVar49 + 1;
        } while (uVar53 != uVar49);
      }
    }
    uStack_230 = uVar58;
    if ((*puVar45 & 1) == 0) goto LAB_0cbe5b70;
LAB_0cbe5b9d:
    func_0x0412e5e0(&uStack_1e8,puVar45[2],puVar45[1]);
  }
  puStack_1d0 = auStack_1c8;
  auStack_1c8 = (undefined1  [16])0x0;
  func_0x056bdf80(&puStack_1d0,puVar45[3],puVar45 + 4);
  if ((puVar45[6] & 1) == 0) {
    uStack_1a8 = puVar45[8];
    uStack_1b8 = puVar45[6];
    uStack_1b0 = puVar45[7];
  }
  else {
    func_0x0412e5e0(&uStack_1b8,puVar45[8],puVar45[7]);
  }
  func_0x0c6e6c00(auStack_d8,&uStack_1e8);
  if ((uStack_228 & 1) == 0) {
    pbStack_1f8 = pbStack_218;
    uStack_208 = uStack_228;
    uStack_200 = uStack_220;
  }
  else {
    func_0x0412e5e0(&uStack_208,pbStack_218,uStack_220);
  }
  uStack_198 = *(undefined8 **)(param_1 + 0x148);
  uStack_190 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar46 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar46 = *plVar46 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_e8,&uStack_198);
  pbVar55 = uStack_190;
  if (uStack_190 != (byte *)0x0) {
    LOCK();
    pbVar44 = uStack_190 + 8;
    lVar50 = *(long *)pbVar44;
    *(long *)pbVar44 = *(long *)pbVar44 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uStack_190 + 0x10))(uStack_190);
      func_0x0412c2d0(pbVar55);
    }
  }
  plVar46 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x450);
  if (plVar46 == (long *)0x0) {
    FUN_0eec74c0(0x450,0);
  }
  FUN_0c6e7950(&uStack_198,auStack_d8);
  FUN_0c6c7010(plVar46,&uStack_208,param_4);
  *plVar46 = (long)&UNK_0f3b1af0;
  FUN_0c6e7950(plVar46 + 0x75,&uStack_198);
  func_0x0c67c170(plVar46,&UNK_0c67c2f0,0);
  func_0x04abe980(&uStack_198);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar50 = 0;
    lVar47 = 0;
  }
  else {
    lVar47 = FUN_0412c300();
    lVar50 = 0;
    if (lVar47 != 0) {
      lVar50 = *(long *)(param_1 + 0x138);
    }
  }
  plVar46[0x73] = lVar50;
  plVar4 = (long *)plVar46[0x74];
  plVar46[0x74] = lVar47;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar50 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  bVar60 = (*(byte *)(plVar46 + 0x1a) & 1) != 0;
  lVar50 = (long)plVar46 + 0xd1;
  if (bVar60) {
    lVar50 = plVar46[0x1c];
  }
  plStack_240 = plVar46;
  pbVar55 = (byte *)(ulong)(*(byte *)(plVar46 + 0x1a) >> 1);
  if (bVar60) {
    pbVar55 = (byte *)plVar46[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar55) {
    func_0x04882e30();
    goto LAB_0cbe64c5;
  }
  pbVar44 = (byte *)((long)&uStack_258 + 1);
  if (pbVar55 < (byte *)0x17) {
    uStack_258 = (byte *)CONCAT71(uStack_258._1_7_,(char)pbVar55 * '\x02');
    pbVar54 = pbVar44;
    if (pbVar55 != (byte *)0x0) goto LAB_0cbe5e6d;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar55 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar55 | 7) + 1;
    }
    pbVar54 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar54 == (byte *)0x0) {
      FUN_0eec74c0(uVar49,0);
    }
    uStack_258 = (byte *)(uVar49 | 1);
    pbStack_250 = pbVar55;
    pbStack_248 = pbVar54;
LAB_0cbe5e6d:
    func_0x0eee2f00(pbVar54,lVar50,pbVar55);
  }
  pbVar54[(long)pbVar55] = 0;
  plVar46 = plStack_240;
  pbVar56 = (byte *)(ulong)((byte)uStack_258 >> 1);
  pbVar54 = pbStack_250;
  pbVar55 = pbStack_248;
  if (((ulong)uStack_258 & 1) == 0) {
    pbVar54 = pbVar56;
    pbVar55 = pbVar44;
  }
  if (pbVar54 != (byte *)0x0) {
    pbVar56 = pbVar55;
    if (pbVar54 < (byte *)0x8) {
LAB_0cbe5fec:
      do {
        bVar3 = *pbVar56;
        bVar52 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar52 = bVar3;
        }
        *pbVar56 = bVar52;
        pbVar56 = pbVar56 + 1;
      } while (pbVar56 != pbVar55 + (long)pbVar54);
    }
    else if (pbVar54 < (byte *)0x20) {
      pbVar48 = (byte *)0x0;
LAB_0cbe5f85:
      pbVar57 = (byte *)((ulong)pbVar54 & 0xfffffffffffffff8);
      pbVar56 = pbVar55 + (long)pbVar57;
      do {
        uVar51 = *(undefined8 *)(pbVar55 + (long)pbVar48);
        bVar61 = (char)uVar51 + DAT_014e9110;
        cVar63 = (char)((ulong)uVar51 >> 8);
        bVar62 = cVar63 + DAT_014e9110._1_1_;
        cVar65 = (char)((ulong)uVar51 >> 0x10);
        bVar64 = cVar65 + DAT_014e9110._2_1_;
        cVar67 = (char)((ulong)uVar51 >> 0x18);
        bVar66 = cVar67 + DAT_014e9110._3_1_;
        cVar69 = (char)((ulong)uVar51 >> 0x20);
        bVar68 = cVar69 + DAT_014e9110._4_1_;
        cVar71 = (char)((ulong)uVar51 >> 0x28);
        bVar70 = cVar71 + DAT_014e9110._5_1_;
        cVar73 = (char)((ulong)uVar51 >> 0x30);
        cVar12 = (char)((ulong)uVar51 >> 0x38);
        bVar72 = cVar73 + DAT_014e9110._6_1_;
        bVar74 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar52 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar55 + (long)pbVar48) =
             CONCAT17((~-((byte)((bVar74 < bVar11) * bVar11 | (bVar74 >= bVar11) * bVar74) == bVar74
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar72 < bVar10) * bVar10 | (bVar72 >= bVar10) * bVar72)
                                  == bVar72) & UNK_014ea366) + cVar73,
                               CONCAT15((~-((byte)((bVar70 < bVar9) * bVar9 |
                                                  (bVar70 >= bVar9) * bVar70) == bVar70) &
                                        UNK_014ea365) + cVar71,
                                        CONCAT14((~-((byte)((bVar68 < bVar8) * bVar8 |
                                                           (bVar68 >= bVar8) * bVar68) == bVar68) &
                                                 UNK_014ea364) + cVar69,
                                                 CONCAT13((~-((byte)((bVar66 < bVar7) * bVar7 |
                                                                    (bVar66 >= bVar7) * bVar66) ==
                                                             bVar66) & UNK_014ea363) + cVar67,
                                                          CONCAT12((~-((byte)((bVar64 < bVar6) *
                                                                              bVar6 | (bVar64 >=
                                                                                      bVar6) * 
                                                  bVar64) == bVar64) & UNK_014ea362) + cVar65,
                                                  CONCAT11((~-((byte)((bVar62 < bVar52) * bVar52 |
                                                                     (bVar62 >= bVar52) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar3) * bVar3 |
                                                                     (bVar61 >= bVar3) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar51
                                                          )))))));
        pbVar48 = pbVar48 + 8;
      } while (pbVar57 != pbVar48);
      if (pbVar54 != pbVar57) goto LAB_0cbe5fec;
    }
    else {
      pbVar48 = (byte *)((ulong)pbVar54 & 0xffffffffffffffe0);
      pbVar56 = (byte *)0x0;
      do {
        pbVar57 = pbVar55 + (long)pbVar56;
        bVar13 = pbVar57[1];
        bVar14 = pbVar57[2];
        bVar15 = pbVar57[3];
        bVar16 = pbVar57[4];
        bVar17 = pbVar57[5];
        bVar18 = pbVar57[6];
        bVar19 = pbVar57[7];
        bVar20 = pbVar57[8];
        bVar21 = pbVar57[9];
        bVar22 = pbVar57[10];
        bVar23 = pbVar57[0xb];
        bVar24 = pbVar57[0xc];
        bVar25 = pbVar57[0xd];
        bVar26 = pbVar57[0xe];
        bVar27 = pbVar57[0xf];
        pbVar2 = pbVar55 + 0x10 + (long)pbVar56;
        bVar28 = *pbVar2;
        bVar29 = pbVar2[1];
        bVar30 = pbVar2[2];
        bVar31 = pbVar2[3];
        bVar32 = pbVar2[4];
        bVar33 = pbVar2[5];
        bVar34 = pbVar2[6];
        bVar35 = pbVar2[7];
        bVar36 = pbVar2[8];
        bVar37 = pbVar2[9];
        bVar38 = pbVar2[10];
        bVar39 = pbVar2[0xb];
        bVar40 = pbVar2[0xc];
        bVar41 = pbVar2[0xd];
        bVar42 = pbVar2[0xe];
        bVar43 = pbVar2[0xf];
        bVar75 = *pbVar57 + DAT_014e86b0;
        bVar76 = bVar13 + DAT_014e86b0._1_1_;
        bVar77 = bVar14 + DAT_014e86b0._2_1_;
        bVar78 = bVar15 + DAT_014e86b0._3_1_;
        bVar79 = bVar16 + DAT_014e86b0._4_1_;
        bVar80 = bVar17 + DAT_014e86b0._5_1_;
        bVar81 = bVar18 + DAT_014e86b0._6_1_;
        bVar82 = bVar19 + DAT_014e86b0._7_1_;
        bVar83 = bVar20 + DAT_014e86b0._8_1_;
        bVar84 = bVar21 + DAT_014e86b0._9_1_;
        bVar85 = bVar22 + DAT_014e86b0._10_1_;
        bVar86 = bVar23 + DAT_014e86b0._11_1_;
        bVar87 = bVar24 + DAT_014e86b0._12_1_;
        bVar88 = bVar25 + DAT_014e86b0._13_1_;
        bVar89 = bVar26 + DAT_014e86b0._14_1_;
        bVar90 = bVar27 + DAT_014e86b0._15_1_;
        bVar91 = bVar28 + DAT_014e86b0;
        bVar92 = bVar29 + DAT_014e86b0._1_1_;
        bVar93 = bVar30 + DAT_014e86b0._2_1_;
        bVar94 = bVar31 + DAT_014e86b0._3_1_;
        bVar95 = bVar32 + DAT_014e86b0._4_1_;
        bVar96 = bVar33 + DAT_014e86b0._5_1_;
        bVar97 = bVar34 + DAT_014e86b0._6_1_;
        bVar98 = bVar35 + DAT_014e86b0._7_1_;
        bVar99 = bVar36 + DAT_014e86b0._8_1_;
        bVar100 = bVar37 + DAT_014e86b0._9_1_;
        bVar101 = bVar38 + DAT_014e86b0._10_1_;
        bVar102 = bVar39 + DAT_014e86b0._11_1_;
        bVar103 = bVar40 + DAT_014e86b0._12_1_;
        bVar104 = bVar41 + DAT_014e86b0._13_1_;
        bVar105 = bVar42 + DAT_014e86b0._14_1_;
        bVar106 = bVar43 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar52 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar61 = DAT_014e4170._8_1_;
        bVar62 = DAT_014e4170._9_1_;
        bVar64 = DAT_014e4170._10_1_;
        bVar66 = DAT_014e4170._11_1_;
        bVar68 = DAT_014e4170._12_1_;
        bVar70 = DAT_014e4170._13_1_;
        bVar72 = DAT_014e4170._14_1_;
        bVar74 = DAT_014e4170._15_1_;
        pbVar2 = pbVar55 + (long)pbVar56;
        *pbVar2 = (-((byte)((bVar3 < bVar75) * bVar3 | (bVar3 >= bVar75) * bVar75) == bVar75) &
                  DAT_014ead50) + *pbVar57;
        pbVar2[1] = (-((byte)((bVar52 < bVar76) * bVar52 | (bVar52 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead51) + bVar13;
        pbVar2[2] = (-((byte)((bVar6 < bVar77) * bVar6 | (bVar6 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead52) + bVar14;
        pbVar2[3] = (-((byte)((bVar7 < bVar78) * bVar7 | (bVar7 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead53) + bVar15;
        pbVar2[4] = (-((byte)((bVar8 < bVar79) * bVar8 | (bVar8 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead54) + bVar16;
        pbVar2[5] = (-((byte)((bVar9 < bVar80) * bVar9 | (bVar9 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead55) + bVar17;
        pbVar2[6] = (-((byte)((bVar10 < bVar81) * bVar10 | (bVar10 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead56) + bVar18;
        pbVar2[7] = (-((byte)((bVar11 < bVar82) * bVar11 | (bVar11 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead57) + bVar19;
        pbVar2[8] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead58) + bVar20;
        pbVar2[9] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead59) + bVar21;
        pbVar2[10] = (-((byte)((bVar64 < bVar85) * bVar64 | (bVar64 >= bVar85) * bVar85) == bVar85)
                     & UNK_014ead5a) + bVar22;
        pbVar2[0xb] = (-((byte)((bVar66 < bVar86) * bVar66 | (bVar66 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5b) + bVar23;
        pbVar2[0xc] = (-((byte)((bVar68 < bVar87) * bVar68 | (bVar68 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5c) + bVar24;
        pbVar2[0xd] = (-((byte)((bVar70 < bVar88) * bVar70 | (bVar70 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5d) + bVar25;
        pbVar2[0xe] = (-((byte)((bVar72 < bVar89) * bVar72 | (bVar72 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5e) + bVar26;
        pbVar2[0xf] = (-((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5f) + bVar27;
        pbVar57 = pbVar55 + 0x10 + (long)pbVar56;
        *pbVar57 = (-((byte)((bVar3 < bVar91) * bVar3 | (bVar3 >= bVar91) * bVar91) == bVar91) &
                   DAT_014ead50) + bVar28;
        pbVar57[1] = (-((byte)((bVar52 < bVar92) * bVar52 | (bVar52 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead51) + bVar29;
        pbVar57[2] = (-((byte)((bVar6 < bVar93) * bVar6 | (bVar6 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead52) + bVar30;
        pbVar57[3] = (-((byte)((bVar7 < bVar94) * bVar7 | (bVar7 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead53) + bVar31;
        pbVar57[4] = (-((byte)((bVar8 < bVar95) * bVar8 | (bVar8 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead54) + bVar32;
        pbVar57[5] = (-((byte)((bVar9 < bVar96) * bVar9 | (bVar9 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead55) + bVar33;
        pbVar57[6] = (-((byte)((bVar10 < bVar97) * bVar10 | (bVar10 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead56) + bVar34;
        pbVar57[7] = (-((byte)((bVar11 < bVar98) * bVar11 | (bVar11 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead57) + bVar35;
        pbVar57[8] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead58) + bVar36;
        pbVar57[9] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead59) + bVar37;
        pbVar57[10] = (-((byte)((bVar64 < bVar101) * bVar64 | (bVar64 >= bVar101) * bVar101) ==
                        bVar101) & UNK_014ead5a) + bVar38;
        pbVar57[0xb] = (-((byte)((bVar66 < bVar102) * bVar66 | (bVar66 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5b) + bVar39;
        pbVar57[0xc] = (-((byte)((bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5c) + bVar40;
        pbVar57[0xd] = (-((byte)((bVar70 < bVar104) * bVar70 | (bVar70 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5d) + bVar41;
        pbVar57[0xe] = (-((byte)((bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5e) + bVar42;
        pbVar57[0xf] = (-((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5f) + bVar43;
        pbVar56 = pbVar56 + 0x20;
      } while (pbVar48 != pbVar56);
      if (pbVar54 != pbVar48) {
        if (((ulong)pbVar54 & 0x18) == 0) {
          pbVar56 = pbVar48 + (long)pbVar55;
          goto LAB_0cbe5fec;
        }
        goto LAB_0cbe5f85;
      }
    }
    pbVar56 = (byte *)(ulong)((byte)uStack_258 >> 1);
  }
  if (((ulong)uStack_258 & 1) != 0) {
    pbVar56 = pbStack_250;
    pbVar44 = pbStack_248;
  }
  pbVar55 = pbVar44 + (long)pbVar56;
  pbVar54 = pbVar56;
  pbVar48 = pbVar44;
  while (((pbVar57 = pbVar55, 0 < (long)pbVar54 &&
          (pbVar48 = (byte *)func_0x0eee2ef0(pbVar48,0x3a,pbVar54), pbVar48 != (byte *)0x0)) &&
         (pbVar57 = pbVar48, *pbVar48 != 0x3a))) {
    pbVar48 = pbVar48 + 1;
    pbVar54 = pbVar55 + -(long)pbVar48;
  }
  pbVar54 = pbVar57 + -(long)pbVar44;
  if (pbVar56 < pbVar57 + -(long)pbVar44) {
    pbVar54 = pbVar56;
  }
  if (pbVar57 == pbVar55) {
    pbVar54 = pbVar56;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar54) {
LAB_0cbe64c5:
    uVar51 = func_0x04882e30();
    if (((ulong)uStack_258 & 1) != 0) {
      func_0x0412a280(pbStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
    }
    if (plStack_240 != (long *)0x0) {
      (**(code **)(*plStack_240 + 8))();
    }
    func_0x0cc46730(auStack_e8);
    if ((uStack_208 & 1) != 0) {
      func_0x0412a280(pbStack_1f8,uStack_208 & 0xfffffffffffffffe);
    }
    func_0x04abe980(auStack_d8);
    func_0x056bbbb0(&uStack_1e8);
    while ((uStack_228 & 1) == 0) {
      func_0x0eee2d70(uVar51);
      func_0x0412a280(uStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_218,uStack_228 & 0xfffffffffffffffe);
    func_0x0eee2d70(uVar51);
    pcVar5 = (code *)swi(3);
    plVar46 = (long *)(*pcVar5)();
    return plVar46;
  }
  if (pbVar54 < (byte *)0x17) {
    uStack_198 = (undefined8 *)CONCAT71(uStack_198._1_7_,(char)pbVar54 * '\x02');
    pbVar55 = (byte *)((long)&uStack_198 + 1);
    if (pbVar54 != (byte *)0x0) goto LAB_0cbe6104;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar54 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar54 | 7) + 1;
    }
    pbVar55 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar55 == (byte *)0x0) {
      FUN_0eec74c0(uVar49,0);
    }
    uStack_198 = (undefined8 *)(uVar49 | 1);
    uStack_190 = pbVar54;
    pbStack_188 = pbVar55;
LAB_0cbe6104:
    func_0x0eee2ee0(pbVar55,pbVar44,pbVar54);
  }
  pbVar55[(long)pbVar54] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_198,&uStack_198);
  if (((ulong)uStack_198 & 1) != 0) {
    func_0x0412a280(pbStack_188,(ulong)uStack_198 & 0xfffffffffffffffe);
  }
  uStack_198 = (undefined8 *)0x0;
  if (((ulong)uStack_258 & 1) == 0) {
    pbStack_180 = pbStack_248;
    uStack_190 = uStack_258;
    pbStack_188 = pbStack_250;
  }
  else {
    func_0x0412e5e0(&uStack_190,pbStack_248,pbStack_250);
  }
  uStack_178 = 0;
  if (((ulong)uStack_190 & 1) == 0) {
    if ((byte)uStack_190 >> 1 != 0) goto LAB_0cbe61d1;
  }
  else if (pbStack_188 != (byte *)0x0) {
LAB_0cbe61d1:
    pbVar55 = pbStack_180;
    if (((ulong)uStack_190 & 1) == 0) {
      pbVar55 = (byte *)((long)&uStack_190 + 1);
    }
    if ((pbVar55 != (byte *)0x0) && (*pbVar55 != 0)) {
      puVar59 = (undefined8 *)0xcbf29ce484222325;
      uVar49 = strlen(pbVar55);
      if (uVar49 != 0) {
        uVar58 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            puVar59 = (undefined8 *)
                      (((((((((long)puVar59 * 0x100000001b3 ^ (ulong)*pbVar55) * 0x100000001b3 ^
                            (ulong)pbVar55[1]) * 0x100000001b3 ^ (ulong)pbVar55[2]) * 0x100000001b3
                          ^ (ulong)pbVar55[3]) * 0x100000001b3 ^ (ulong)pbVar55[4]) * 0x100000001b3
                        ^ (ulong)pbVar55[5]) * 0x100000001b3 ^ (ulong)pbVar55[6]) * 0x100000001b3 ^
                      (ulong)pbVar55[7]);
            pbVar55 = pbVar55 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        if (uVar58 != 0) {
          uVar49 = 0;
          do {
            puVar59 = (undefined8 *)((long)puVar59 * 0x100000001b3 ^ (ulong)pbVar55[uVar49]);
            uVar49 = uVar49 + 1;
          } while (uVar58 != uVar49);
        }
      }
      goto LAB_0cbe62c9;
    }
  }
  puVar59 = (undefined8 *)0x0;
LAB_0cbe62c9:
  puStack_238 = &uStack_198;
  uStack_198 = puVar59;
  lVar50 = func_0x05cf8b10(param_1,&uStack_198,&UNK_01563a4f,&puStack_238,&uStack_259);
  plVar4 = *(long **)(lVar50 + 0x48);
  *(long **)(lVar50 + 0x48) = plVar46;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_238 = uStack_198;
  lVar50 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_238);
  if ((*(byte *)(lVar50 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar50 + 0x28),*(ulong *)(lVar50 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar50 + 0x28) = pbStack_180;
  *(byte **)(lVar50 + 0x18) = uStack_190;
  *(byte **)(lVar50 + 0x20) = pbStack_188;
  uStack_190 = (byte *)((ulong)uStack_190 & 0xffffffffffff0000);
  *(undefined8 **)(lVar50 + 0x10) = uStack_198;
  *(undefined8 *)(lVar50 + 0x30) = 0;
  if (((ulong)uStack_258 & 1) == 0) {
    func_0x0cc46730(auStack_e8);
  }
  else {
    func_0x0412a280(pbStack_248,(ulong)uStack_258 & 0xfffffffffffffffe);
    func_0x0cc46730(auStack_e8);
  }
  if ((uStack_208 & 1) == 0) {
    func_0x04abe980(auStack_d8);
  }
  else {
    func_0x0412a280(pbStack_1f8,uStack_208 & 0xfffffffffffffffe);
    func_0x04abe980(auStack_d8);
  }
  if ((uStack_1b8 & 1) != 0) {
    func_0x0412a280(uStack_1a8,uStack_1b8 & 0xfffffffffffffffe);
  }
  func_0x05476120(&puStack_1d0,auStack_1c8._0_8_);
  if ((uStack_1e8 & 1) != 0) {
    func_0x0412a280(uStack_1d8,uStack_1e8 & 0xfffffffffffffffe);
  }
  if ((uStack_228 & 1) != 0) {
    func_0x0412a280(pbStack_218,uStack_228 & 0xfffffffffffffffe);
  }
  return plVar46;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
