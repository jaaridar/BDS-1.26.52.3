/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cc3560 (ELF vaddr 0x5bc3560)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cc3560, 05cc3cd7] [05cc3d3a, 05cc3d5d] [05cc3d61, 05cc3d96]]
 * Ghidra: FUN_05cc3560
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05cc3560(long param_1,long param_2,undefined4 param_3,undefined8 param_4,ulong param_5,
                   undefined1 *param_6)

{
  long *plVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
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
  byte bVar44;
  long *plVar45;
  long lVar46;
  byte *pbVar47;
  ulong uVar48;
  long lVar49;
  undefined8 uVar50;
  byte bVar51;
  byte *pbVar52;
  ulong uVar53;
  byte *pbVar54;
  undefined8 *puVar55;
  byte *pbVar56;
  byte *pbVar57;
  byte *pbVar58;
  bool bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  byte bVar71;
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
  byte bVar105;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_88 = *(undefined8 **)(param_1 + 0x148);
  uStack_80 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar45 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar45 = *plVar45 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_88);
  pbVar58 = uStack_80;
  if (uStack_80 != (byte *)0x0) {
    LOCK();
    pbVar52 = uStack_80 + 8;
    lVar49 = *(long *)pbVar52;
    *(long *)pbVar52 = *(long *)pbVar52 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*(long *)uStack_80 + 0x10))(uStack_80);
      func_0x0412c2d0(pbVar58);
    }
  }
  plVar45 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar45 == (long *)0x0) {
    func_0x0eec74c0(0x3b0,0);
  }
  uVar3 = *param_6;
  func_0x0c6c7010(plVar45,&uStack_58,param_3);
  *plVar45 = (long)&UNK_0f433248;
  *(undefined1 *)(plVar45 + 0x75) = uVar3;
  *(undefined1 *)((long)plVar45 + 0x136) = 0;
  *(byte *)((long)plVar45 + 0x134) = *(byte *)((long)plVar45 + 0x134) & 0xe9;
  plVar45[0x21] = 0;
  bVar59 = (param_5 & 1) != 0;
  *(char *)((long)plVar45 + 0x132) = bVar59 * '\x05' + '\x03';
  if (bVar59) {
    *(undefined4 *)((long)plVar45 + 300) = _DAT_011985e4;
    if (*(long *)(param_1 + 0x140) == 0) goto LAB_05cc36cf;
LAB_05cc369d:
    lVar46 = func_0x0412c300();
    lVar49 = 0;
    if (lVar46 != 0) {
      lVar49 = *(long *)(param_1 + 0x138);
    }
  }
  else {
    *(undefined4 *)((long)plVar45 + 300) = _DAT_011983f0;
    if (*(long *)(param_1 + 0x140) != 0) goto LAB_05cc369d;
LAB_05cc36cf:
    lVar49 = 0;
    lVar46 = 0;
  }
  plVar45[0x73] = lVar49;
  plVar5 = (long *)plVar45[0x74];
  plVar45[0x74] = lVar46;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar49 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  bVar59 = (*(byte *)(plVar45 + 0x1a) & 1) != 0;
  lVar49 = (long)plVar45 + 0xd1;
  if (bVar59) {
    lVar49 = plVar45[0x1c];
  }
  pbVar58 = (byte *)(ulong)(*(byte *)(plVar45 + 0x1a) >> 1);
  if (bVar59) {
    pbVar58 = (byte *)plVar45[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar58) {
    func_0x04882e30();
    goto LAB_05cc3cd1;
  }
  pbVar52 = (byte *)((long)&uStack_a0 + 1);
  if (pbVar58 < (byte *)0x17) {
    uStack_a0 = (byte *)CONCAT71(uStack_a0._1_7_,(char)pbVar58 * '\x02');
    if (pbVar58 != (byte *)0x0) goto LAB_05cc37b0;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar58 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar58 | 7) + 1;
    }
    pbVar52 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar52 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_a0 = (byte *)(uVar48 | 1);
    pbStack_98 = pbVar58;
    pbStack_90 = pbVar52;
LAB_05cc37b0:
    func_0x0eee2f00(pbVar52,lVar49,pbVar58);
  }
  pbVar54 = (byte *)((long)&uStack_a0 + 1);
  pbVar52[(long)pbVar58] = 0;
  pbVar56 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  pbVar52 = pbStack_98;
  pbVar58 = pbStack_90;
  if (((ulong)uStack_a0 & 1) == 0) {
    pbVar52 = pbVar56;
    pbVar58 = pbVar54;
  }
  if (pbVar52 != (byte *)0x0) {
    pbVar56 = pbVar58;
    if (pbVar52 < (byte *)0x8) {
LAB_05cc38fc:
      do {
        bVar4 = *pbVar56;
        bVar51 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar51 = bVar4;
        }
        *pbVar56 = bVar51;
        pbVar56 = pbVar56 + 1;
      } while (pbVar56 != pbVar58 + (long)pbVar52);
    }
    else if (pbVar52 < (byte *)0x20) {
      pbVar47 = (byte *)0x0;
LAB_05cc3895:
      pbVar57 = (byte *)((ulong)pbVar52 & 0xfffffffffffffff8);
      pbVar56 = pbVar58 + (long)pbVar57;
      do {
        uVar50 = *(undefined8 *)(pbVar58 + (long)pbVar47);
        bVar60 = (char)uVar50 + DAT_014e9110;
        cVar62 = (char)((ulong)uVar50 >> 8);
        bVar61 = cVar62 + DAT_014e9110._1_1_;
        cVar64 = (char)((ulong)uVar50 >> 0x10);
        bVar63 = cVar64 + DAT_014e9110._2_1_;
        cVar66 = (char)((ulong)uVar50 >> 0x18);
        bVar65 = cVar66 + DAT_014e9110._3_1_;
        cVar68 = (char)((ulong)uVar50 >> 0x20);
        bVar67 = cVar68 + DAT_014e9110._4_1_;
        cVar70 = (char)((ulong)uVar50 >> 0x28);
        bVar69 = cVar70 + DAT_014e9110._5_1_;
        cVar72 = (char)((ulong)uVar50 >> 0x30);
        cVar13 = (char)((ulong)uVar50 >> 0x38);
        bVar71 = cVar72 + DAT_014e9110._6_1_;
        bVar73 = cVar13 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar51 = DAT_014e8cb0._1_1_;
        bVar7 = DAT_014e8cb0._2_1_;
        bVar8 = DAT_014e8cb0._3_1_;
        bVar9 = DAT_014e8cb0._4_1_;
        bVar10 = DAT_014e8cb0._5_1_;
        bVar11 = DAT_014e8cb0._6_1_;
        bVar12 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar58 + (long)pbVar47) =
             CONCAT17((~-((byte)((bVar73 < bVar12) * bVar12 | (bVar73 >= bVar12) * bVar73) == bVar73
                         ) & UNK_014ea367) + cVar13,
                      CONCAT16((~-((byte)((bVar71 < bVar11) * bVar11 | (bVar71 >= bVar11) * bVar71)
                                  == bVar71) & UNK_014ea366) + cVar72,
                               CONCAT15((~-((byte)((bVar69 < bVar10) * bVar10 |
                                                  (bVar69 >= bVar10) * bVar69) == bVar69) &
                                        UNK_014ea365) + cVar70,
                                        CONCAT14((~-((byte)((bVar67 < bVar9) * bVar9 |
                                                           (bVar67 >= bVar9) * bVar67) == bVar67) &
                                                 UNK_014ea364) + cVar68,
                                                 CONCAT13((~-((byte)((bVar65 < bVar8) * bVar8 |
                                                                    (bVar65 >= bVar8) * bVar65) ==
                                                             bVar65) & UNK_014ea363) + cVar66,
                                                          CONCAT12((~-((byte)((bVar63 < bVar7) *
                                                                              bVar7 | (bVar63 >=
                                                                                      bVar7) * 
                                                  bVar63) == bVar63) & UNK_014ea362) + cVar64,
                                                  CONCAT11((~-((byte)((bVar61 < bVar51) * bVar51 |
                                                                     (bVar61 >= bVar51) * bVar61) ==
                                                              bVar61) & UNK_014ea361) + cVar62,
                                                           (~-((byte)((bVar60 < bVar4) * bVar4 |
                                                                     (bVar60 >= bVar4) * bVar60) ==
                                                              bVar60) & DAT_014ea360) + (char)uVar50
                                                          )))))));
        pbVar47 = pbVar47 + 8;
      } while (pbVar57 != pbVar47);
      if (pbVar52 != pbVar57) goto LAB_05cc38fc;
    }
    else {
      pbVar47 = (byte *)((ulong)pbVar52 & 0xffffffffffffffe0);
      pbVar56 = (byte *)0x0;
      do {
        pbVar57 = pbVar58 + (long)pbVar56;
        bVar14 = pbVar57[1];
        bVar15 = pbVar57[2];
        bVar16 = pbVar57[3];
        bVar17 = pbVar57[4];
        bVar18 = pbVar57[5];
        bVar19 = pbVar57[6];
        bVar20 = pbVar57[7];
        bVar21 = pbVar57[8];
        bVar22 = pbVar57[9];
        bVar23 = pbVar57[10];
        bVar24 = pbVar57[0xb];
        bVar25 = pbVar57[0xc];
        bVar26 = pbVar57[0xd];
        bVar27 = pbVar57[0xe];
        bVar28 = pbVar57[0xf];
        pbVar2 = pbVar58 + 0x10 + (long)pbVar56;
        bVar29 = *pbVar2;
        bVar30 = pbVar2[1];
        bVar31 = pbVar2[2];
        bVar32 = pbVar2[3];
        bVar33 = pbVar2[4];
        bVar34 = pbVar2[5];
        bVar35 = pbVar2[6];
        bVar36 = pbVar2[7];
        bVar37 = pbVar2[8];
        bVar38 = pbVar2[9];
        bVar39 = pbVar2[10];
        bVar40 = pbVar2[0xb];
        bVar41 = pbVar2[0xc];
        bVar42 = pbVar2[0xd];
        bVar43 = pbVar2[0xe];
        bVar44 = pbVar2[0xf];
        bVar74 = *pbVar57 + DAT_014e86b0;
        bVar75 = bVar14 + DAT_014e86b0._1_1_;
        bVar76 = bVar15 + DAT_014e86b0._2_1_;
        bVar77 = bVar16 + DAT_014e86b0._3_1_;
        bVar78 = bVar17 + DAT_014e86b0._4_1_;
        bVar79 = bVar18 + DAT_014e86b0._5_1_;
        bVar80 = bVar19 + DAT_014e86b0._6_1_;
        bVar81 = bVar20 + DAT_014e86b0._7_1_;
        bVar82 = bVar21 + DAT_014e86b0._8_1_;
        bVar83 = bVar22 + DAT_014e86b0._9_1_;
        bVar84 = bVar23 + DAT_014e86b0._10_1_;
        bVar85 = bVar24 + DAT_014e86b0._11_1_;
        bVar86 = bVar25 + DAT_014e86b0._12_1_;
        bVar87 = bVar26 + DAT_014e86b0._13_1_;
        bVar88 = bVar27 + DAT_014e86b0._14_1_;
        bVar89 = bVar28 + DAT_014e86b0._15_1_;
        bVar90 = bVar29 + DAT_014e86b0;
        bVar91 = bVar30 + DAT_014e86b0._1_1_;
        bVar92 = bVar31 + DAT_014e86b0._2_1_;
        bVar93 = bVar32 + DAT_014e86b0._3_1_;
        bVar94 = bVar33 + DAT_014e86b0._4_1_;
        bVar95 = bVar34 + DAT_014e86b0._5_1_;
        bVar96 = bVar35 + DAT_014e86b0._6_1_;
        bVar97 = bVar36 + DAT_014e86b0._7_1_;
        bVar98 = bVar37 + DAT_014e86b0._8_1_;
        bVar99 = bVar38 + DAT_014e86b0._9_1_;
        bVar100 = bVar39 + DAT_014e86b0._10_1_;
        bVar101 = bVar40 + DAT_014e86b0._11_1_;
        bVar102 = bVar41 + DAT_014e86b0._12_1_;
        bVar103 = bVar42 + DAT_014e86b0._13_1_;
        bVar104 = bVar43 + DAT_014e86b0._14_1_;
        bVar105 = bVar44 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar51 = DAT_014e4170._1_1_;
        bVar7 = DAT_014e4170._2_1_;
        bVar8 = DAT_014e4170._3_1_;
        bVar9 = DAT_014e4170._4_1_;
        bVar10 = DAT_014e4170._5_1_;
        bVar11 = DAT_014e4170._6_1_;
        bVar12 = DAT_014e4170._7_1_;
        bVar60 = DAT_014e4170._8_1_;
        bVar61 = DAT_014e4170._9_1_;
        bVar63 = DAT_014e4170._10_1_;
        bVar65 = DAT_014e4170._11_1_;
        bVar67 = DAT_014e4170._12_1_;
        bVar69 = DAT_014e4170._13_1_;
        bVar71 = DAT_014e4170._14_1_;
        bVar73 = DAT_014e4170._15_1_;
        pbVar2 = pbVar58 + (long)pbVar56;
        *pbVar2 = (-((byte)((bVar4 < bVar74) * bVar4 | (bVar4 >= bVar74) * bVar74) == bVar74) &
                  DAT_014ead50) + *pbVar57;
        pbVar2[1] = (-((byte)((bVar51 < bVar75) * bVar51 | (bVar51 >= bVar75) * bVar75) == bVar75) &
                    UNK_014ead51) + bVar14;
        pbVar2[2] = (-((byte)((bVar7 < bVar76) * bVar7 | (bVar7 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead52) + bVar15;
        pbVar2[3] = (-((byte)((bVar8 < bVar77) * bVar8 | (bVar8 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead53) + bVar16;
        pbVar2[4] = (-((byte)((bVar9 < bVar78) * bVar9 | (bVar9 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead54) + bVar17;
        pbVar2[5] = (-((byte)((bVar10 < bVar79) * bVar10 | (bVar10 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead55) + bVar18;
        pbVar2[6] = (-((byte)((bVar11 < bVar80) * bVar11 | (bVar11 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead56) + bVar19;
        pbVar2[7] = (-((byte)((bVar12 < bVar81) * bVar12 | (bVar12 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead57) + bVar20;
        pbVar2[8] = (-((byte)((bVar60 < bVar82) * bVar60 | (bVar60 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead58) + bVar21;
        pbVar2[9] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead59) + bVar22;
        pbVar2[10] = (-((byte)((bVar63 < bVar84) * bVar63 | (bVar63 >= bVar84) * bVar84) == bVar84)
                     & UNK_014ead5a) + bVar23;
        pbVar2[0xb] = (-((byte)((bVar65 < bVar85) * bVar65 | (bVar65 >= bVar85) * bVar85) == bVar85)
                      & UNK_014ead5b) + bVar24;
        pbVar2[0xc] = (-((byte)((bVar67 < bVar86) * bVar67 | (bVar67 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5c) + bVar25;
        pbVar2[0xd] = (-((byte)((bVar69 < bVar87) * bVar69 | (bVar69 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5d) + bVar26;
        pbVar2[0xe] = (-((byte)((bVar71 < bVar88) * bVar71 | (bVar71 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5e) + bVar27;
        pbVar2[0xf] = (-((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5f) + bVar28;
        pbVar57 = pbVar58 + 0x10 + (long)pbVar56;
        *pbVar57 = (-((byte)((bVar4 < bVar90) * bVar4 | (bVar4 >= bVar90) * bVar90) == bVar90) &
                   DAT_014ead50) + bVar29;
        pbVar57[1] = (-((byte)((bVar51 < bVar91) * bVar51 | (bVar51 >= bVar91) * bVar91) == bVar91)
                     & UNK_014ead51) + bVar30;
        pbVar57[2] = (-((byte)((bVar7 < bVar92) * bVar7 | (bVar7 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead52) + bVar31;
        pbVar57[3] = (-((byte)((bVar8 < bVar93) * bVar8 | (bVar8 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead53) + bVar32;
        pbVar57[4] = (-((byte)((bVar9 < bVar94) * bVar9 | (bVar9 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead54) + bVar33;
        pbVar57[5] = (-((byte)((bVar10 < bVar95) * bVar10 | (bVar10 >= bVar95) * bVar95) == bVar95)
                     & UNK_014ead55) + bVar34;
        pbVar57[6] = (-((byte)((bVar11 < bVar96) * bVar11 | (bVar11 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead56) + bVar35;
        pbVar57[7] = (-((byte)((bVar12 < bVar97) * bVar12 | (bVar12 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead57) + bVar36;
        pbVar57[8] = (-((byte)((bVar60 < bVar98) * bVar60 | (bVar60 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead58) + bVar37;
        pbVar57[9] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead59) + bVar38;
        pbVar57[10] = (-((byte)((bVar63 < bVar100) * bVar63 | (bVar63 >= bVar100) * bVar100) ==
                        bVar100) & UNK_014ead5a) + bVar39;
        pbVar57[0xb] = (-((byte)((bVar65 < bVar101) * bVar65 | (bVar65 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5b) + bVar40;
        pbVar57[0xc] = (-((byte)((bVar67 < bVar102) * bVar67 | (bVar67 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5c) + bVar41;
        pbVar57[0xd] = (-((byte)((bVar69 < bVar103) * bVar69 | (bVar69 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5d) + bVar42;
        pbVar57[0xe] = (-((byte)((bVar71 < bVar104) * bVar71 | (bVar71 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5e) + bVar43;
        pbVar57[0xf] = (-((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5f) + bVar44;
        pbVar56 = pbVar56 + 0x20;
      } while (pbVar47 != pbVar56);
      if (pbVar52 != pbVar47) {
        if (((ulong)pbVar52 & 0x18) == 0) {
          pbVar56 = pbVar47 + (long)pbVar58;
          goto LAB_05cc38fc;
        }
        goto LAB_05cc3895;
      }
    }
    pbVar56 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  }
  if (((ulong)uStack_a0 & 1) != 0) {
    pbVar56 = pbStack_98;
    pbVar54 = pbStack_90;
  }
  pbVar58 = pbVar54 + (long)pbVar56;
  pbVar52 = pbVar56;
  pbVar47 = pbVar54;
  while (((pbVar57 = pbVar58, 0 < (long)pbVar52 &&
          (pbVar47 = (byte *)memchr(pbVar47,0x3a,pbVar52), pbVar47 != (byte *)0x0)) &&
         (pbVar57 = pbVar47, *pbVar47 != 0x3a))) {
    pbVar47 = pbVar47 + 1;
    pbVar52 = pbVar58 + -(long)pbVar47;
  }
  pbVar52 = pbVar57 + -(long)pbVar54;
  if (pbVar56 < pbVar57 + -(long)pbVar54) {
    pbVar52 = pbVar56;
  }
  if (pbVar57 == pbVar58) {
    pbVar52 = pbVar56;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar52) {
LAB_05cc3cd1:
    uVar50 = func_0x04882e30();
    if (((ulong)uStack_a0 & 1) != 0) {
      func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
    }
    if (plVar45 != (long *)0x0) {
      (**(code **)(*plVar45 + 8))(plVar45);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar50);
    pcVar6 = (code *)swi(3);
    plVar45 = (long *)(*pcVar6)();
    return plVar45;
  }
  if (pbVar52 < (byte *)0x17) {
    uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,(char)pbVar52 * '\x02');
    pbVar58 = (byte *)((long)&uStack_88 + 1);
    if (pbVar52 != (byte *)0x0) goto LAB_05cc3a00;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar52 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar52 | 7) + 1;
    }
    pbVar58 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar58 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_88 = (undefined8 *)(uVar48 | 1);
    uStack_80 = pbVar52;
    pbStack_78 = pbVar58;
LAB_05cc3a00:
    func_0x0eee2ee0(pbVar58,pbVar54,pbVar52);
  }
  pbVar58[(long)pbVar52] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_88,&uStack_88);
  if (((ulong)uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
  }
  uStack_88 = (undefined8 *)0x0;
  if (((ulong)uStack_a0 & 1) == 0) {
    pbStack_70 = pbStack_90;
    uStack_80 = uStack_a0;
    pbStack_78 = pbStack_98;
  }
  else {
    func_0x0412e5e0(&uStack_80,pbStack_90,pbStack_98);
  }
  uStack_68 = 0;
  if (((ulong)uStack_80 & 1) == 0) {
    if ((byte)uStack_80 >> 1 != 0) goto LAB_05cc3ab0;
  }
  else if (pbStack_78 != (byte *)0x0) {
LAB_05cc3ab0:
    pbVar58 = pbStack_70;
    if (((ulong)uStack_80 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_80 + 1);
    }
    if ((pbVar58 != (byte *)0x0) && (*pbVar58 != 0)) {
      puVar55 = (undefined8 *)0xcbf29ce484222325;
      uVar48 = func_0x0eee2e90(pbVar58);
      if (uVar48 != 0) {
        uVar53 = (ulong)((uint)uVar48 & 7);
        if (7 < uVar48) {
          uVar48 = uVar48 & 0xfffffffffffffff8;
          do {
            puVar55 = (undefined8 *)
                      (((((((((long)puVar55 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                            (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3
                          ^ (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3
                        ^ (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                      (ulong)pbVar58[7]);
            pbVar58 = pbVar58 + 8;
            uVar48 = uVar48 - 8;
          } while (uVar48 != 0);
        }
        if (uVar53 != 0) {
          uVar48 = 0;
          do {
            puVar55 = (undefined8 *)((long)puVar55 * 0x100000001b3 ^ (ulong)pbVar58[uVar48]);
            uVar48 = uVar48 + 1;
          } while (uVar53 != uVar48);
        }
      }
      goto LAB_05cc3ba9;
    }
  }
  puVar55 = (undefined8 *)0x0;
LAB_05cc3ba9:
  uStack_88 = puVar55;
  puStack_60 = &uStack_88;
  lVar49 = func_0x05cf8b10(param_1,&uStack_88,&UNK_01563a4f,&puStack_60,&uStack_a1);
  plVar5 = *(long **)(lVar49 + 0x48);
  *(long **)(lVar49 + 0x48) = plVar45;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puStack_60 = uStack_88;
  lVar49 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_60);
  if ((*(byte *)(lVar49 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar49 + 0x28),*(ulong *)(lVar49 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar49 + 0x28) = pbStack_70;
  *(byte **)(lVar49 + 0x18) = uStack_80;
  *(byte **)(lVar49 + 0x20) = pbStack_78;
  uStack_80 = (byte *)((ulong)uStack_80 & 0xffffffffffff0000);
  *(undefined8 **)(lVar49 + 0x10) = uStack_88;
  *(undefined8 *)(lVar49 + 0x30) = 0;
  if (((ulong)uStack_a0 & 1) != 0) {
    func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return plVar45;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
