/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc422f0 (ELF vaddr 0xcb422f0)
 * Label: callee-of:0x5a1f120
 * Body:  [[0cc422f0, 0cc423f1] [0cc42400, 0cc4244a] [0cc42450, 0cc42a96] [0cc42aa0, 0cc42aed] [0cc42af0, 0cc42bba] [0cc42bc0, 0cc42c2b] [0cc42c30, 0cc42e2a] [0cc42e30, 0cc43292] [0cc432a0, 0cc432ea] [0cc432f0, 0cc433c9] [0cc433d0, 0cc43418] [0cc43420, 0cc43681] [0cc43690, 0cc437a7] [0cc437b0, 0cc43a54] [0cc43a60, 0cc43aa8] [0cc43ab0, 0cc43af8] [0cc43b00, 0cc43b2a] [0cc43b30, 0cc43d71] [0cc43df8, 0cc43e26] [0cc43e3e, 0cc43e88] [0cc43e93, 0cc43f02]]
 * Ghidra: FUN_0cc422f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0cc422f0(long *param_1,ulong *param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
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
  undefined1 auVar42 [16];
  long *plVar43;
  long *plVar44;
  byte bVar45;
  int iVar46;
  byte *pbVar47;
  byte *pbVar48;
  long lVar49;
  byte *pbVar50;
  ulong uVar51;
  long *plVar52;
  undefined1 *puVar53;
  undefined1 (*pauVar54) [16];
  ulong uVar55;
  undefined8 uVar56;
  ulong uVar57;
  byte bVar58;
  byte *pbVar59;
  byte *pbVar60;
  byte *pbVar61;
  ulong uVar62;
  long lVar63;
  long lVar64;
  byte *pbVar65;
  long *plVar66;
  byte *pbVar67;
  bool bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar72;
  byte bVar74;
  byte bVar76;
  byte bVar78;
  byte bVar80;
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
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined2 uStack_134;
  byte *pbStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  long lStack_e8;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  undefined1 *puStack_58;
  ulong uStack_48;
  undefined1 auStack_40 [16];
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar77;
  char cVar79;
  char cVar81;
  
  if (((byte)param_2[1] & 1) == 0) {
    if ((byte)((byte)param_2[1] >> 1) == 0) goto LAB_0cc42485;
  }
  else if (param_2[2] == 0) {
LAB_0cc42485:
    pbVar67 = (byte *)0x0;
    pbVar47 = (byte *)0x0;
    goto LAB_0cc43d19;
  }
  uStack_108 = (byte *)param_1[0x29];
  uStack_100 = (byte *)param_1[0x2a];
  if (param_1[0x2a] != 0) {
    LOCK();
    plVar52 = (long *)(param_1[0x2a] + 8);
    *plVar52 = *plVar52 + 1;
    UNLOCK();
  }
  func_0x0cc46520(auStack_40,&uStack_108);
  pbVar47 = uStack_100;
  if (uStack_100 != (byte *)0x0) {
    LOCK();
    pbVar67 = uStack_100 + 8;
    lVar49 = *(long *)pbVar67;
    *(long *)pbVar67 = *(long *)pbVar67 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*(long *)uStack_100 + 0x10))(uStack_100);
      FUN_0412c2d0(pbVar47);
    }
  }
  pbVar1 = (byte *)(param_1 + 1);
  plStack_110 = param_1;
  pbVar47 = (byte *)param_1[1];
  bVar45 = (byte)param_2[1];
  uStack_134 = (undefined2)param_3;
  if (pbVar47 == (byte *)0x0) {
    pbVar47 = (byte *)param_2[2];
    uVar51 = param_2[3];
    pbVar67 = (byte *)(ulong)(bVar45 >> 1);
    bVar45 = bVar45 & 1;
LAB_0cc4256e:
    uVar55 = (long)param_2 + 9;
    if (bVar45 != 0) {
      pbVar67 = pbVar47;
      uVar55 = uVar51;
    }
    if ((byte *)0xfffffffffffffff7 < pbVar67) {
      FUN_04882e30();
LAB_0cc43d54:
      FUN_04882e30();
LAB_0cc43d59:
      func_0x04891200();
      goto LAB_0cc43d5e;
    }
    pbVar47 = (byte *)((long)&uStack_128 + 1);
    if (pbVar67 < (byte *)0x17) {
      uStack_128 = (byte *)CONCAT71(uStack_128._1_7_,(char)pbVar67 * '\x02');
      pbVar48 = pbVar47;
      if (pbVar67 != (byte *)0x0) goto LAB_0cc425f3;
    }
    else {
      uVar51 = 0x1a;
      if (((ulong)pbVar67 | 7) != 0x17) {
        uVar51 = ((ulong)pbVar67 | 7) + 1;
      }
      pbVar48 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar51);
      if (pbVar48 == (byte *)0x0) {
        func_0x0eec74c0(uVar51,0);
      }
      uStack_128 = (byte *)(uVar51 | 1);
      pbStack_120 = pbVar67;
      pbStack_118 = pbVar48;
LAB_0cc425f3:
      func_0x0eee2f00(pbVar48,uVar55,pbVar67);
    }
    pbVar50 = uStack_128;
    pbVar48[(long)pbVar67] = 0;
    pbVar60 = (byte *)(ulong)((byte)uStack_128 >> 1);
    pbVar48 = pbStack_120;
    pbVar67 = pbStack_118;
    if (((ulong)uStack_128 & 1) == 0) {
      pbVar48 = pbVar60;
      pbVar67 = pbVar47;
    }
    if (pbVar48 != (byte *)0x0) {
      pbVar60 = pbVar67;
      if (pbVar48 < (byte *)0x8) {
LAB_0cc42797:
        do {
          bVar45 = *pbVar60;
          bVar58 = bVar45 + 0x20;
          if (0x19 < (byte)(bVar45 + 0xbf)) {
            bVar58 = bVar45;
          }
          *pbVar60 = bVar58;
          pbVar60 = pbVar60 + 1;
        } while (pbVar60 != pbVar67 + (long)pbVar48);
      }
      else if (pbVar48 < (byte *)0x20) {
        pbVar59 = (byte *)0x0;
LAB_0cc42725:
        pbVar65 = (byte *)((ulong)pbVar48 & 0xfffffffffffffff8);
        pbVar60 = pbVar67 + (long)pbVar65;
        do {
          uVar56 = *(undefined8 *)(pbVar67 + (long)pbVar59);
          bVar69 = (char)uVar56 + DAT_014e9110;
          cVar71 = (char)((ulong)uVar56 >> 8);
          bVar70 = cVar71 + DAT_014e9110._1_1_;
          cVar73 = (char)((ulong)uVar56 >> 0x10);
          bVar72 = cVar73 + DAT_014e9110._2_1_;
          cVar75 = (char)((ulong)uVar56 >> 0x18);
          bVar74 = cVar75 + DAT_014e9110._3_1_;
          cVar77 = (char)((ulong)uVar56 >> 0x20);
          bVar76 = cVar77 + DAT_014e9110._4_1_;
          cVar79 = (char)((ulong)uVar56 >> 0x28);
          bVar78 = cVar79 + DAT_014e9110._5_1_;
          cVar81 = (char)((ulong)uVar56 >> 0x30);
          cVar10 = (char)((ulong)uVar56 >> 0x38);
          bVar80 = cVar81 + DAT_014e9110._6_1_;
          bVar82 = cVar10 + DAT_014e9110._7_1_;
          bVar45 = DAT_014e8cb0;
          bVar58 = DAT_014e8cb0._1_1_;
          bVar4 = DAT_014e8cb0._2_1_;
          bVar5 = DAT_014e8cb0._3_1_;
          bVar6 = DAT_014e8cb0._4_1_;
          bVar7 = DAT_014e8cb0._5_1_;
          bVar8 = DAT_014e8cb0._6_1_;
          bVar9 = DAT_014e8cb0._7_1_;
          *(ulong *)(pbVar67 + (long)pbVar59) =
               CONCAT17((~-((byte)((bVar82 < bVar9) * bVar9 | (bVar82 >= bVar9) * bVar82) == bVar82)
                        & UNK_014ea367) + cVar10,
                        CONCAT16((~-((byte)((bVar80 < bVar8) * bVar8 | (bVar80 >= bVar8) * bVar80)
                                    == bVar80) & UNK_014ea366) + cVar81,
                                 CONCAT15((~-((byte)((bVar78 < bVar7) * bVar7 |
                                                    (bVar78 >= bVar7) * bVar78) == bVar78) &
                                          UNK_014ea365) + cVar79,
                                          CONCAT14((~-((byte)((bVar76 < bVar6) * bVar6 |
                                                             (bVar76 >= bVar6) * bVar76) == bVar76)
                                                   & UNK_014ea364) + cVar77,
                                                   CONCAT13((~-((byte)((bVar74 < bVar5) * bVar5 |
                                                                      (bVar74 >= bVar5) * bVar74) ==
                                                               bVar74) & UNK_014ea363) + cVar75,
                                                            CONCAT12((~-((byte)((bVar72 < bVar4) *
                                                                                bVar4 | (bVar72 >=
                                                                                        bVar4) * 
                                                  bVar72) == bVar72) & UNK_014ea362) + cVar73,
                                                  CONCAT11((~-((byte)((bVar70 < bVar58) * bVar58 |
                                                                     (bVar70 >= bVar58) * bVar70) ==
                                                              bVar70) & UNK_014ea361) + cVar71,
                                                           (~-((byte)((bVar69 < bVar45) * bVar45 |
                                                                     (bVar69 >= bVar45) * bVar69) ==
                                                              bVar69) & DAT_014ea360) + (char)uVar56
                                                          )))))));
          pbVar59 = pbVar59 + 8;
        } while (pbVar65 != pbVar59);
        if (pbVar48 != pbVar65) goto LAB_0cc42797;
      }
      else {
        pbVar59 = (byte *)((ulong)pbVar48 & 0xffffffffffffffe0);
        pbVar60 = (byte *)0x0;
        do {
          pbVar65 = pbVar67 + (long)pbVar60;
          bVar11 = pbVar65[1];
          bVar12 = pbVar65[2];
          bVar13 = pbVar65[3];
          bVar14 = pbVar65[4];
          bVar15 = pbVar65[5];
          bVar16 = pbVar65[6];
          bVar17 = pbVar65[7];
          bVar18 = pbVar65[8];
          bVar19 = pbVar65[9];
          bVar20 = pbVar65[10];
          bVar21 = pbVar65[0xb];
          bVar22 = pbVar65[0xc];
          bVar23 = pbVar65[0xd];
          bVar24 = pbVar65[0xe];
          bVar25 = pbVar65[0xf];
          pbVar61 = pbVar67 + 0x10 + (long)pbVar60;
          bVar26 = *pbVar61;
          bVar27 = pbVar61[1];
          bVar28 = pbVar61[2];
          bVar29 = pbVar61[3];
          bVar30 = pbVar61[4];
          bVar31 = pbVar61[5];
          bVar32 = pbVar61[6];
          bVar33 = pbVar61[7];
          bVar34 = pbVar61[8];
          bVar35 = pbVar61[9];
          bVar36 = pbVar61[10];
          bVar37 = pbVar61[0xb];
          bVar38 = pbVar61[0xc];
          bVar39 = pbVar61[0xd];
          bVar40 = pbVar61[0xe];
          bVar41 = pbVar61[0xf];
          bVar83 = *pbVar65 + DAT_014e86b0;
          bVar84 = bVar11 + DAT_014e86b0._1_1_;
          bVar85 = bVar12 + DAT_014e86b0._2_1_;
          bVar86 = bVar13 + DAT_014e86b0._3_1_;
          bVar87 = bVar14 + DAT_014e86b0._4_1_;
          bVar88 = bVar15 + DAT_014e86b0._5_1_;
          bVar89 = bVar16 + DAT_014e86b0._6_1_;
          bVar90 = bVar17 + DAT_014e86b0._7_1_;
          bVar91 = bVar18 + DAT_014e86b0._8_1_;
          bVar92 = bVar19 + DAT_014e86b0._9_1_;
          bVar93 = bVar20 + DAT_014e86b0._10_1_;
          bVar94 = bVar21 + DAT_014e86b0._11_1_;
          bVar95 = bVar22 + DAT_014e86b0._12_1_;
          bVar96 = bVar23 + DAT_014e86b0._13_1_;
          bVar97 = bVar24 + DAT_014e86b0._14_1_;
          bVar98 = bVar25 + DAT_014e86b0._15_1_;
          bVar99 = bVar26 + DAT_014e86b0;
          bVar100 = bVar27 + DAT_014e86b0._1_1_;
          bVar101 = bVar28 + DAT_014e86b0._2_1_;
          bVar102 = bVar29 + DAT_014e86b0._3_1_;
          bVar103 = bVar30 + DAT_014e86b0._4_1_;
          bVar104 = bVar31 + DAT_014e86b0._5_1_;
          bVar105 = bVar32 + DAT_014e86b0._6_1_;
          bVar106 = bVar33 + DAT_014e86b0._7_1_;
          bVar107 = bVar34 + DAT_014e86b0._8_1_;
          bVar108 = bVar35 + DAT_014e86b0._9_1_;
          bVar109 = bVar36 + DAT_014e86b0._10_1_;
          bVar110 = bVar37 + DAT_014e86b0._11_1_;
          bVar111 = bVar38 + DAT_014e86b0._12_1_;
          bVar112 = bVar39 + DAT_014e86b0._13_1_;
          bVar113 = bVar40 + DAT_014e86b0._14_1_;
          bVar114 = bVar41 + DAT_014e86b0._15_1_;
          bVar45 = DAT_014e4170;
          bVar58 = DAT_014e4170._1_1_;
          bVar4 = DAT_014e4170._2_1_;
          bVar5 = DAT_014e4170._3_1_;
          bVar6 = DAT_014e4170._4_1_;
          bVar7 = DAT_014e4170._5_1_;
          bVar8 = DAT_014e4170._6_1_;
          bVar9 = DAT_014e4170._7_1_;
          bVar69 = DAT_014e4170._8_1_;
          bVar70 = DAT_014e4170._9_1_;
          bVar72 = DAT_014e4170._10_1_;
          bVar74 = DAT_014e4170._11_1_;
          bVar76 = DAT_014e4170._12_1_;
          bVar78 = DAT_014e4170._13_1_;
          bVar80 = DAT_014e4170._14_1_;
          bVar82 = DAT_014e4170._15_1_;
          pbVar61 = pbVar67 + (long)pbVar60;
          *pbVar61 = (-((byte)((bVar45 < bVar83) * bVar45 | (bVar45 >= bVar83) * bVar83) == bVar83)
                     & DAT_014ead50) + *pbVar65;
          pbVar61[1] = (-((byte)((bVar58 < bVar84) * bVar58 | (bVar58 >= bVar84) * bVar84) == bVar84
                         ) & UNK_014ead51) + bVar11;
          pbVar61[2] = (-((byte)((bVar4 < bVar85) * bVar4 | (bVar4 >= bVar85) * bVar85) == bVar85) &
                       UNK_014ead52) + bVar12;
          pbVar61[3] = (-((byte)((bVar5 < bVar86) * bVar5 | (bVar5 >= bVar86) * bVar86) == bVar86) &
                       UNK_014ead53) + bVar13;
          pbVar61[4] = (-((byte)((bVar6 < bVar87) * bVar6 | (bVar6 >= bVar87) * bVar87) == bVar87) &
                       UNK_014ead54) + bVar14;
          pbVar61[5] = (-((byte)((bVar7 < bVar88) * bVar7 | (bVar7 >= bVar88) * bVar88) == bVar88) &
                       UNK_014ead55) + bVar15;
          pbVar61[6] = (-((byte)((bVar8 < bVar89) * bVar8 | (bVar8 >= bVar89) * bVar89) == bVar89) &
                       UNK_014ead56) + bVar16;
          pbVar61[7] = (-((byte)((bVar9 < bVar90) * bVar9 | (bVar9 >= bVar90) * bVar90) == bVar90) &
                       UNK_014ead57) + bVar17;
          pbVar61[8] = (-((byte)((bVar69 < bVar91) * bVar69 | (bVar69 >= bVar91) * bVar91) == bVar91
                         ) & UNK_014ead58) + bVar18;
          pbVar61[9] = (-((byte)((bVar70 < bVar92) * bVar70 | (bVar70 >= bVar92) * bVar92) == bVar92
                         ) & UNK_014ead59) + bVar19;
          pbVar61[10] = (-((byte)((bVar72 < bVar93) * bVar72 | (bVar72 >= bVar93) * bVar93) ==
                          bVar93) & UNK_014ead5a) + bVar20;
          pbVar61[0xb] = (-((byte)((bVar74 < bVar94) * bVar74 | (bVar74 >= bVar94) * bVar94) ==
                           bVar94) & UNK_014ead5b) + bVar21;
          pbVar61[0xc] = (-((byte)((bVar76 < bVar95) * bVar76 | (bVar76 >= bVar95) * bVar95) ==
                           bVar95) & UNK_014ead5c) + bVar22;
          pbVar61[0xd] = (-((byte)((bVar78 < bVar96) * bVar78 | (bVar78 >= bVar96) * bVar96) ==
                           bVar96) & UNK_014ead5d) + bVar23;
          pbVar61[0xe] = (-((byte)((bVar80 < bVar97) * bVar80 | (bVar80 >= bVar97) * bVar97) ==
                           bVar97) & UNK_014ead5e) + bVar24;
          pbVar61[0xf] = (-((byte)((bVar82 < bVar98) * bVar82 | (bVar82 >= bVar98) * bVar98) ==
                           bVar98) & UNK_014ead5f) + bVar25;
          pbVar65 = pbVar67 + 0x10 + (long)pbVar60;
          *pbVar65 = (-((byte)((bVar45 < bVar99) * bVar45 | (bVar45 >= bVar99) * bVar99) == bVar99)
                     & DAT_014ead50) + bVar26;
          pbVar65[1] = (-((byte)((bVar58 < bVar100) * bVar58 | (bVar58 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead51) + bVar27;
          pbVar65[2] = (-((byte)((bVar4 < bVar101) * bVar4 | (bVar4 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead52) + bVar28;
          pbVar65[3] = (-((byte)((bVar5 < bVar102) * bVar5 | (bVar5 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead53) + bVar29;
          pbVar65[4] = (-((byte)((bVar6 < bVar103) * bVar6 | (bVar6 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead54) + bVar30;
          pbVar65[5] = (-((byte)((bVar7 < bVar104) * bVar7 | (bVar7 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead55) + bVar31;
          pbVar65[6] = (-((byte)((bVar8 < bVar105) * bVar8 | (bVar8 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead56) + bVar32;
          pbVar65[7] = (-((byte)((bVar9 < bVar106) * bVar9 | (bVar9 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead57) + bVar33;
          pbVar65[8] = (-((byte)((bVar69 < bVar107) * bVar69 | (bVar69 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead58) + bVar34;
          pbVar65[9] = (-((byte)((bVar70 < bVar108) * bVar70 | (bVar70 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead59) + bVar35;
          pbVar65[10] = (-((byte)((bVar72 < bVar109) * bVar72 | (bVar72 >= bVar109) * bVar109) ==
                          bVar109) & UNK_014ead5a) + bVar36;
          pbVar65[0xb] = (-((byte)((bVar74 < bVar110) * bVar74 | (bVar74 >= bVar110) * bVar110) ==
                           bVar110) & UNK_014ead5b) + bVar37;
          pbVar65[0xc] = (-((byte)((bVar76 < bVar111) * bVar76 | (bVar76 >= bVar111) * bVar111) ==
                           bVar111) & UNK_014ead5c) + bVar38;
          pbVar65[0xd] = (-((byte)((bVar78 < bVar112) * bVar78 | (bVar78 >= bVar112) * bVar112) ==
                           bVar112) & UNK_014ead5d) + bVar39;
          pbVar65[0xe] = (-((byte)((bVar80 < bVar113) * bVar80 | (bVar80 >= bVar113) * bVar113) ==
                           bVar113) & UNK_014ead5e) + bVar40;
          pbVar65[0xf] = (-((byte)((bVar82 < bVar114) * bVar82 | (bVar82 >= bVar114) * bVar114) ==
                           bVar114) & UNK_014ead5f) + bVar41;
          pbVar60 = pbVar60 + 0x20;
        } while (pbVar59 != pbVar60);
        if (pbVar48 != pbVar59) {
          if (((ulong)pbVar48 & 0x18) == 0) {
            pbVar60 = pbVar59 + (long)pbVar67;
            goto LAB_0cc42797;
          }
          goto LAB_0cc42725;
        }
      }
      pbVar60 = (byte *)(ulong)((byte)uStack_128 >> 1);
    }
    pbVar67 = pbStack_118;
    uVar51 = (ulong)uStack_128 & 1;
    if (((ulong)uStack_128 & 1) != 0) {
      pbVar60 = pbStack_120;
      pbVar47 = pbStack_118;
    }
    if (4 < (long)pbVar60) {
      pbVar48 = pbVar47;
      pbVar59 = pbVar60;
      do {
        pbVar48 = (byte *)func_0x0eee2ef0(pbVar48,0x74,pbVar59 + -4);
        if (pbVar48 == (byte *)0x0) break;
        if (pbVar48[4] == 0x2e && *(int *)pbVar48 == 0x656c6974) {
          if (pbVar48 == pbVar47) {
            pbVar47 = (byte *)((long)&uStack_128 + 6);
            if (uVar51 != 0) {
              pbVar47 = pbVar67 + 5;
            }
            pbVar60 = pbVar60 + -5;
            if ((byte *)0xfffffffffffffff7 < pbVar60) goto LAB_0cc43d68;
            if (pbVar60 < (byte *)0x17) {
              uStack_108 = (byte *)CONCAT71(uStack_108._1_7_,(char)pbVar60 * '\x02');
              pbVar67 = (byte *)((long)&uStack_108 + 1);
              if (pbVar60 != (byte *)0x0) goto LAB_0cc428df;
            }
            else {
              uVar51 = 0x1a;
              if (((ulong)pbVar60 | 7) != 0x17) {
                uVar51 = ((ulong)pbVar60 | 7) + 1;
              }
              pbVar67 = (byte *)func_0x0ee32660(uVar51);
              uStack_108 = (byte *)(uVar51 | 1);
              uStack_100 = pbVar60;
              pbStack_f8 = pbVar67;
LAB_0cc428df:
              func_0x0eee2ee0(pbVar67,pbVar47,pbVar60);
            }
            pbVar67[(long)pbVar60] = 0;
            if (((ulong)uStack_128 & 1) != 0) {
              func_0x0412a280(pbStack_118,(ulong)uStack_128 & 0xfffffffffffffffe);
            }
            uStack_128 = uStack_108;
            pbStack_118 = pbStack_f8;
            pbStack_120 = uStack_100;
            uStack_108 = (byte *)0x0;
            pbVar50 = uStack_128;
            goto joined_r0x0cc42939;
          }
          break;
        }
        pbVar48 = pbVar48 + 1;
        pbVar59 = pbVar47 + (long)pbVar60 + -(long)pbVar48;
      } while (4 < (long)pbVar59);
    }
    uStack_108 = (byte *)0x0;
joined_r0x0cc42939:
    if (((ulong)pbVar50 & 1) == 0) {
      uStack_108 = (byte *)0x0;
      pbStack_f0 = pbStack_118;
      uStack_100 = uStack_128;
      pbStack_f8 = pbStack_120;
    }
    else {
      uStack_108 = (byte *)0x0;
      func_0x0412e5e0(&uStack_100,pbStack_118,pbStack_120);
    }
    pbVar67 = uStack_100;
    lStack_e8 = 0;
    if (((ulong)uStack_100 & 1) == 0) {
      pbVar47 = (byte *)((ulong)uStack_100 >> 1 & 0x7f);
      if (pbVar47 != (byte *)0x0) goto LAB_0cc42980;
LAB_0cc42a65:
      uVar51 = 0;
    }
    else {
      pbVar47 = pbStack_f8;
      if (pbStack_f8 == (byte *)0x0) goto LAB_0cc42a65;
LAB_0cc42980:
      if (((ulong)uStack_100 & 1) == 0) {
        pbVar48 = (byte *)((long)&uStack_100 + 1);
        if (pbVar48 != (byte *)0x0) goto LAB_0cc429a3;
        goto LAB_0cc42a65;
      }
      pbVar48 = pbStack_f0;
      if (pbStack_f0 == (byte *)0x0) goto LAB_0cc42a65;
LAB_0cc429a3:
      if (*pbVar48 == 0) goto LAB_0cc42a65;
      uVar51 = 0xcbf29ce484222325;
      uVar55 = func_0x0eee2e90(pbVar48);
      if (uVar55 != 0) {
        uVar57 = (ulong)((uint)uVar55 & 7);
        if (7 < uVar55) {
          uVar55 = uVar55 & 0xfffffffffffffff8;
          do {
            uVar51 = (((((((uVar51 * 0x100000001b3 ^ (ulong)*pbVar48) * 0x100000001b3 ^
                          (ulong)pbVar48[1]) * 0x100000001b3 ^ (ulong)pbVar48[2]) * 0x100000001b3 ^
                        (ulong)pbVar48[3]) * 0x100000001b3 ^ (ulong)pbVar48[4]) * 0x100000001b3 ^
                      (ulong)pbVar48[5]) * 0x100000001b3 ^ (ulong)pbVar48[6]) * 0x100000001b3 ^
                     (ulong)pbVar48[7];
            pbVar48 = pbVar48 + 8;
            uVar55 = uVar55 - 8;
          } while (uVar55 != 0);
        }
        if (uVar57 != 0) {
          uVar55 = 0;
          do {
            uVar51 = uVar51 * 0x100000001b3 ^ (ulong)pbVar48[uVar55];
            uVar55 = uVar55 + 1;
          } while (uVar57 != uVar55);
        }
      }
    }
    pbVar48 = *(byte **)pbVar1;
    uStack_108 = (byte *)uVar51;
    if (pbVar48 == (byte *)0x0) {
LAB_0cc42b72:
      plVar52 = plStack_110;
      pbStack_d8 = (byte *)(plStack_110 + 3);
      lVar49 = func_0x0bd862c0(pbStack_d8,&uStack_108);
      if (lVar49 != 0) {
        pbVar67 = *(byte **)pbVar1;
        if (pbVar67 != (byte *)0x0) {
          pbVar47 = *(byte **)(lVar49 + 0x38);
          lVar64 = lVar49 + 0x41;
          pbVar48 = pbVar1;
          do {
            pbVar50 = *(byte **)(pbVar67 + 0x20);
            bVar45 = (pbVar50 >= pbVar47 && pbVar50 != pbVar47) - (pbVar50 < pbVar47);
            if (pbVar50 == pbVar47) {
              lVar63 = *(long *)(lVar49 + 0x50);
              uVar51 = *(ulong *)(lVar49 + 0x48);
              if ((*(byte *)(lVar49 + 0x40) & 1) == 0) {
                lVar63 = lVar64;
                uVar51 = (ulong)(*(byte *)(lVar49 + 0x40) >> 1);
              }
              if ((pbVar67[0x28] & 1) == 0) {
                uVar55 = (ulong)(pbVar67[0x28] >> 1);
                pbVar50 = pbVar67 + 0x29;
              }
              else {
                uVar55 = *(ulong *)(pbVar67 + 0x30);
                pbVar50 = *(byte **)(pbVar67 + 0x38);
              }
              uVar57 = uVar55;
              if (uVar51 < uVar55) {
                uVar57 = uVar51;
              }
              iVar46 = func_0x0eee2ff0(pbVar50,lVar63,uVar57);
              if (iVar46 == 0) {
                iVar46 = (int)(char)((uVar51 < uVar55) - (uVar55 < uVar51));
              }
              bVar45 = (0 < iVar46) - (iVar46 < 0);
            }
            if (-1 < (char)bVar45) {
              pbVar48 = pbVar67;
            }
            pbVar67 = *(byte **)(pbVar67 + (bVar45 >> 4 & 8));
          } while (pbVar67 != (byte *)0x0);
          if (pbVar48 != pbVar1) {
            if (pbVar47 == *(byte **)(pbVar48 + 0x20)) {
              bVar68 = (pbVar48[0x28] & 1) != 0;
              pbVar67 = pbVar48 + 0x29;
              if (bVar68) {
                pbVar67 = *(byte **)(pbVar48 + 0x38);
              }
              pbVar47 = (byte *)(ulong)(pbVar48[0x28] >> 1);
              if (bVar68) {
                pbVar47 = *(byte **)(pbVar48 + 0x30);
              }
              if ((*(byte *)(lVar49 + 0x40) & 1) == 0) {
                pbVar50 = (byte *)(ulong)(*(byte *)(lVar49 + 0x40) >> 1);
              }
              else {
                pbVar50 = *(byte **)(lVar49 + 0x48);
                lVar64 = *(long *)(lVar49 + 0x50);
              }
              pbVar60 = pbVar50;
              if (pbVar47 < pbVar50) {
                pbVar60 = pbVar47;
              }
              iVar46 = func_0x0eee2ff0(lVar64,pbVar67,pbVar60);
              bVar68 = -1 < iVar46;
              if (iVar46 == 0) {
                bVar68 = pbVar47 <= pbVar50;
              }
              if (bVar68) {
LAB_0cc4351a:
                pbVar67 = *(byte **)(pbVar48 + 0x48);
                if (pbVar67 == (byte *)0x0) goto LAB_0cc43cd2;
                pbVar47 = (byte *)0x0;
                if ((param_4 == 1) && (*(long *)(pbVar67 + 0x1f0) != *(long *)(pbVar67 + 0x1e8))) {
                  pbVar47 = (byte *)func_0x0c6c88d0(pbVar67,uStack_134);
                }
                goto LAB_0cc43cd8;
              }
            }
            else if (*(byte **)(pbVar48 + 0x20) <= pbVar47) goto LAB_0cc4351a;
          }
        }
        if (&uStack_108 != (ulong *)(lVar49 + 0x38)) {
          bVar45 = *(byte *)(lVar49 + 0x40);
          if (((ulong)uStack_100 & 1) == 0) {
            if ((bVar45 & 1) == 0) {
              pbStack_f0 = *(byte **)(lVar49 + 0x50);
              uStack_100 = *(byte **)(lVar49 + 0x40);
              pbStack_f8 = *(byte **)(lVar49 + 0x48);
            }
            else {
              func_0x04885070(&uStack_100,*(undefined8 *)(lVar49 + 0x50),
                              *(undefined8 *)(lVar49 + 0x48));
            }
          }
          else {
            bVar68 = (bVar45 & 1) != 0;
            lVar64 = lVar49 + 0x41;
            if (bVar68) {
              lVar64 = *(long *)(lVar49 + 0x50);
            }
            uVar51 = (ulong)(bVar45 >> 1);
            if (bVar68) {
              uVar51 = *(ulong *)(lVar49 + 0x48);
            }
            func_0x04885120(&uStack_100,lVar64,uVar51);
          }
        }
        uStack_108 = (byte *)*(ulong *)(lVar49 + 0x38);
        lStack_e8 = 0;
        plVar52 = plStack_110;
      }
      uVar51 = (ulong)uStack_108;
      lVar49 = *(long *)(plVar52[8] +
                        (((ulong)(plVar52[9] - plVar52[8]) >> 3) - 1 & (ulong)uStack_108) * 8);
      if (lVar49 != -1) {
        lVar64 = plStack_110[0xb];
        pbVar47 = (byte *)((long)&uStack_100 + 1);
        do {
          lVar49 = lVar49 * 0xb0;
          lVar63 = lVar64 + lVar49;
          if (*(ulong *)(lVar64 + 0x10 + lVar49) == uVar51) {
            if ((*(undefined8 **)(lVar63 + 0x30) != &uStack_108) || (lStack_e8 != lVar63 + 0x10)) {
              bVar45 = *(byte *)(lVar63 + 0x18);
              if ((bVar45 & 1) == 0) {
                pbVar67 = (byte *)(ulong)(bVar45 >> 1);
                if (((ulong)uStack_100 & 1) == 0) goto LAB_0cc42e20;
LAB_0cc42e3e:
                if (pbVar67 != pbStack_f8) goto LAB_0cc42dc8;
              }
              else {
                pbVar67 = *(byte **)(lVar63 + 0x20);
                if (((ulong)uStack_100 & 1) != 0) goto LAB_0cc42e3e;
LAB_0cc42e20:
                if (pbVar67 != (byte *)(((ulong)uStack_100 & 0xff) >> 1)) goto LAB_0cc42dc8;
              }
              if ((bVar45 & 1) == 0) {
                lVar2 = lVar63 + 0x19;
              }
              else {
                lVar2 = *(long *)(lVar63 + 0x28);
              }
              pbVar67 = pbVar47;
              if (((ulong)uStack_100 & 1) != 0) {
                pbVar67 = pbStack_f0;
              }
              iVar46 = func_0x0eee3000(lVar2,pbVar67);
              if (iVar46 != 0) goto LAB_0cc42dc8;
              *(undefined8 **)(lVar63 + 0x30) = &uStack_108;
              lStack_e8 = lVar63 + 0x10;
            }
            if (lVar64 + lVar49 != plStack_110[0xc]) {
              pbStack_d0 = (byte *)CONCAT44(pbStack_d0._4_4_,param_3);
              plVar52 = *(long **)(lVar64 + lVar49 + 0x60);
              if (plVar52 == (long *)0x0) goto LAB_0cc43d59;
              pbVar47 = (byte *)(**(code **)(*plVar52 + 0x30))(plVar52,&pbStack_d0);
              pbVar67 = (byte *)0x0;
              if ((param_4 == 0) && (pbVar47 != (byte *)0x0)) {
                pbVar67 = *(byte **)(pbVar47 + 0x68);
              }
              goto LAB_0cc43cd8;
            }
            break;
          }
LAB_0cc42dc8:
          *(undefined8 *)(lVar63 + 0x30) = 0;
          lVar49 = *(long *)(lVar64 + lVar49);
        } while (lVar49 != -1);
      }
      if (((ulong)uStack_128 & 1) == 0) {
        if (((ulong)uStack_100 & 1) == 0) {
          pbStack_118 = pbStack_f0;
          uStack_128 = uStack_100;
          pbStack_120 = pbStack_f8;
        }
        else {
          func_0x04885070(&uStack_128,pbStack_f0,pbStack_f8);
        }
      }
      else {
        pbVar48 = (byte *)((ulong)uStack_100 >> 1 & 0x7f);
        pbVar67 = (byte *)((long)&uStack_100 + 1);
        if (((ulong)uStack_100 & 1) != 0) {
          pbVar48 = pbStack_f8;
          pbVar67 = pbStack_f0;
        }
        func_0x04885120(&uStack_128,pbVar67,pbVar48);
      }
      pbVar67 = (byte *)((long)&uStack_128 + 1);
      pbVar48 = (byte *)((ulong)uStack_128 >> 1 & 0x7f);
      if (((ulong)uStack_128 & 1) != 0) {
        pbVar48 = pbStack_120;
        pbVar67 = pbStack_118;
      }
      if (0 < (long)pbVar48) {
        pbVar50 = pbVar67;
        pbVar60 = pbVar48;
        do {
          pbVar50 = (byte *)func_0x0eee2ef0(pbVar50,0x3a,pbVar60);
          if (pbVar50 == (byte *)0x0) break;
          if (*pbVar50 == 0x3a) {
            if ((long)pbVar50 - (long)pbVar67 != -1 && pbVar50 != pbVar67 + (long)pbVar48)
            goto LAB_0cc43cd2;
            break;
          }
          pbVar50 = pbVar50 + 1;
          pbVar60 = pbVar67 + (long)pbVar48 + -(long)pbVar50;
        } while (0 < (long)pbVar60);
      }
      pbVar50 = pbVar48 + 10;
      if ((byte *)0xfffffffffffffff7 < pbVar50) {
LAB_0cc43d5e:
        FUN_04882e30();
LAB_0cc43d63:
        func_0x04891200();
LAB_0cc43d68:
        uVar56 = FUN_04882e30();
        if ((uStack_c8 & 1) == 0) goto LAB_0cc43e3e;
LAB_0cc43e05:
        func_0x0412a280(pbStack_b8,uStack_c8 & 0xfffffffffffffffe);
        if (((ulong)uStack_100 & 1) == 0) goto LAB_0cc43e45;
        while (func_0x0412a280(pbStack_f0,(ulong)uStack_100 & 0xfffffffffffffffe),
              ((ulong)uStack_128 & 1) == 0) {
          while( true ) {
            func_0x0cc465d0(auStack_40);
            func_0x0eee2d70(uVar56);
            func_0x0412a280(puStack_58,(ulong)auStack_68 & 0xfffffffffffffffe);
            if ((uStack_c8 & 1) != 0) goto LAB_0cc43e05;
LAB_0cc43e3e:
            if (((ulong)uStack_100 & 1) != 0) break;
LAB_0cc43e45:
            if (((ulong)uStack_128 & 1) != 0) goto LAB_0cc43ead;
          }
        }
LAB_0cc43ead:
        func_0x0412a280(pbStack_118,(ulong)uStack_128 & 0xfffffffffffffffe);
        func_0x0cc465d0(auStack_40);
        uVar56 = func_0x0eee2d70(uVar56);
        func_0x0cc3e3c0(&uStack_108);
        uVar56 = func_0x0eee2d70(uVar56);
        func_0x0cc465d0(auStack_40);
        func_0x0eee2d70(uVar56);
        pcVar3 = (code *)swi(3);
        auVar116 = (*pcVar3)();
        return auVar116;
      }
      if (pbVar50 < (byte *)0x17) {
        pbStack_98 = (byte *)0x0;
        stack0xffffffffffffff59 = SUB1615((undefined1  [16])0x0,1);
        auStack_a8[0] = (char)pbVar50 * '\x02';
        uVar51 = 0;
      }
      else {
        uVar51 = 0x1a;
        if (((ulong)pbVar50 | 7) != 0x17) {
          uVar51 = ((ulong)pbVar50 | 7) + 1;
        }
        pbStack_98 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar51);
        if (pbStack_98 == (byte *)0x0) {
          func_0x0eec74c0(uVar51,0);
        }
        uVar51 = uVar51 | 1;
        uStack_a0 = pbVar50;
        auStack_a8 = (undefined1  [8])uVar51;
      }
      bVar68 = (uVar51 & 1) != 0;
      pbVar50 = auStack_a8 + 1;
      if (bVar68) {
        pbVar50 = pbStack_98;
      }
      pbVar60 = pbStack_98 + 10;
      pbVar50[0] = 0x6d;
      pbVar50[1] = 0x69;
      pbVar50[2] = 0x6e;
      pbVar50[3] = 0x65;
      pbVar50[4] = 99;
      pbVar50[5] = 0x72;
      pbVar50[6] = 0x61;
      pbVar50[7] = 0x66;
      pbVar50[8] = 0x74;
      pbVar50[9] = 0x3a;
      pbVar50 = (byte *)((long)&uStack_a0 + 3);
      if (bVar68) {
        pbVar50 = pbVar60;
      }
      if (pbVar48 != (byte *)0x0) {
        func_0x0eee2ee0(pbVar50,pbVar67,pbVar48);
      }
      pbVar50[(long)pbVar48] = 0;
      pbStack_d0 = (byte *)0x0;
      bVar45 = auStack_a8[0];
      if ((auStack_a8[0] & 1) == 0) {
        pbStack_b8 = pbStack_98;
        uStack_c8 = (ulong)auStack_a8;
        pbStack_c0 = uStack_a0;
      }
      else {
        func_0x0412e5e0(&uStack_c8,pbStack_98,uStack_a0);
      }
      lStack_b0 = 0;
      if ((uStack_c8 & 1) == 0) {
        if ((byte)uStack_c8 >> 1 != 0) goto LAB_0cc4313a;
LAB_0cc43225:
        pbVar48 = (byte *)0x0;
      }
      else {
        if (pbStack_c0 == (byte *)0x0) goto LAB_0cc43225;
LAB_0cc4313a:
        if ((uStack_c8 & 1) == 0) {
          pbVar67 = (byte *)((long)&uStack_c8 + 1);
          if (pbVar67 != (byte *)0x0) goto LAB_0cc43161;
          goto LAB_0cc43225;
        }
        pbVar67 = pbStack_b8;
        if (pbStack_b8 == (byte *)0x0) goto LAB_0cc43225;
LAB_0cc43161:
        if (*pbVar67 == 0) goto LAB_0cc43225;
        pbVar48 = (byte *)0xcbf29ce484222325;
        uVar51 = func_0x0eee2e90(pbVar67);
        if (uVar51 != 0) {
          uVar55 = (ulong)((uint)uVar51 & 7);
          if (7 < uVar51) {
            uVar51 = uVar51 & 0xfffffffffffffff8;
            do {
              pbVar48 = (byte *)(((((((((long)pbVar48 * 0x100000001b3 ^ (ulong)*pbVar67) *
                                       0x100000001b3 ^ (ulong)pbVar67[1]) * 0x100000001b3 ^
                                     (ulong)pbVar67[2]) * 0x100000001b3 ^ (ulong)pbVar67[3]) *
                                    0x100000001b3 ^ (ulong)pbVar67[4]) * 0x100000001b3 ^
                                  (ulong)pbVar67[5]) * 0x100000001b3 ^ (ulong)pbVar67[6]) *
                                 0x100000001b3 ^ (ulong)pbVar67[7]);
              pbVar67 = pbVar67 + 8;
              uVar51 = uVar51 - 8;
            } while (uVar51 != 0);
          }
          if (uVar55 != 0) {
            uVar51 = 0;
            do {
              pbVar48 = (byte *)((long)pbVar48 * 0x100000001b3 ^ (ulong)pbVar67[uVar51]);
              uVar51 = uVar51 + 1;
            } while (uVar55 != uVar51);
          }
        }
      }
      pbStack_d0 = pbVar48;
      if ((bVar45 & 1) != 0) {
        func_0x0412a280(pbStack_98,(ulong)auStack_a8 & 0xfffffffffffffffe);
      }
      pbVar48 = pbStack_d0;
      pbVar67 = *(byte **)pbVar1;
      if (pbVar67 == (byte *)0x0) {
LAB_0cc43371:
        lVar49 = func_0x0bd862c0(pbStack_d8,&pbStack_d0);
        if (lVar49 != 0) {
          pbVar67 = *(byte **)pbVar1;
          if (pbVar67 != (byte *)0x0) {
            uVar51 = *(ulong *)(lVar49 + 0x38);
            bVar68 = (*(byte *)(lVar49 + 0x40) & 1) != 0;
            pbVar47 = (byte *)(lVar49 + 0x41);
            if (bVar68) {
              pbVar47 = *(byte **)(lVar49 + 0x50);
            }
            pbVar48 = pbVar1;
            uVar55 = (ulong)(*(byte *)(lVar49 + 0x40) >> 1);
            if (bVar68) {
              uVar55 = *(ulong *)(lVar49 + 0x48);
            }
            do {
              uVar57 = *(ulong *)(pbVar67 + 0x20);
              bVar45 = (uVar57 >= uVar51 && uVar57 != uVar51) - (uVar57 < uVar51);
              if (uVar57 == uVar51) {
                if ((pbVar67[0x28] & 1) == 0) {
                  uVar57 = (ulong)(pbVar67[0x28] >> 1);
                  pbVar50 = pbVar67 + 0x29;
                }
                else {
                  uVar57 = *(ulong *)(pbVar67 + 0x30);
                  pbVar50 = *(byte **)(pbVar67 + 0x38);
                }
                uVar62 = uVar57;
                if (uVar55 < uVar57) {
                  uVar62 = uVar55;
                }
                iVar46 = func_0x0eee2ff0(pbVar50,pbVar47,uVar62);
                if (iVar46 == 0) {
                  iVar46 = (int)(char)((uVar55 < uVar57) - (uVar57 < uVar55));
                }
                bVar45 = (0 < iVar46) - (iVar46 < 0);
              }
              if (-1 < (char)bVar45) {
                pbVar48 = pbVar67;
              }
              pbVar67 = *(byte **)(pbVar67 + (bVar45 >> 4 & 8));
            } while (pbVar67 != (byte *)0x0);
            if (pbVar48 != pbVar1) {
              if (uVar51 == *(ulong *)(pbVar48 + 0x20)) {
                bVar68 = (pbVar48[0x28] & 1) != 0;
                pbVar67 = pbVar48 + 0x29;
                if (bVar68) {
                  pbVar67 = *(byte **)(pbVar48 + 0x38);
                }
                uVar51 = (ulong)(pbVar48[0x28] >> 1);
                if (bVar68) {
                  uVar51 = *(ulong *)(pbVar48 + 0x30);
                }
                uVar57 = uVar55;
                if (uVar51 < uVar55) {
                  uVar57 = uVar51;
                }
                iVar46 = func_0x0eee2ff0(pbVar47,pbVar67,uVar57);
                bVar68 = uVar55 < uVar51;
                if (iVar46 != 0) {
                  bVar68 = iVar46 < 0;
                }
                if (!bVar68) {
LAB_0cc434ad:
                  pbVar67 = *(byte **)(pbVar48 + 0x48);
                  if (pbVar67 == (byte *)0x0) goto LAB_0cc435a4;
                  pbVar47 = (byte *)0x0;
                  if ((param_4 == 1) && (*(long *)(pbVar67 + 0x1f0) != *(long *)(pbVar67 + 0x1e8)))
                  {
                    pbVar47 = (byte *)func_0x0c6c88d0(pbVar67,uStack_134);
                  }
                  goto LAB_0cc43731;
                }
              }
              else if (*(ulong *)(pbVar48 + 0x20) <= uVar51) goto LAB_0cc434ad;
            }
          }
          func_0x0ee254e0(&pbStack_d0,lVar49 + 0x38);
        }
        pbVar67 = pbStack_d0;
        lVar49 = *(long *)(plStack_110[8] +
                          (((ulong)(plStack_110[9] - plStack_110[8]) >> 3) - 1 & (ulong)pbStack_d0)
                          * 8);
        if (lVar49 != -1) {
          lVar64 = plStack_110[0xb];
          pbVar47 = (byte *)((long)&uStack_c8 + 1);
          do {
            lVar49 = lVar49 * 0xb0;
            lVar63 = lVar64 + lVar49;
            if (*(byte **)(lVar64 + 0x10 + lVar49) == pbVar67) {
              if ((*(byte ***)(lVar63 + 0x30) != &pbStack_d0) || (lStack_b0 != lVar63 + 0x10)) {
                bVar45 = *(byte *)(lVar63 + 0x18);
                if ((bVar45 & 1) == 0) {
                  pbVar48 = (byte *)(ulong)(bVar45 >> 1);
                  if ((uStack_c8 & 1) == 0) goto LAB_0cc43677;
LAB_0cc436a1:
                  if (pbVar48 != pbStack_c0) goto LAB_0cc4361d;
                }
                else {
                  pbVar48 = *(byte **)(lVar63 + 0x20);
                  if ((uStack_c8 & 1) != 0) goto LAB_0cc436a1;
LAB_0cc43677:
                  if (pbVar48 != (byte *)((uStack_c8 & 0xff) >> 1)) goto LAB_0cc4361d;
                }
                if ((bVar45 & 1) == 0) {
                  lVar2 = lVar63 + 0x19;
                }
                else {
                  lVar2 = *(long *)(lVar63 + 0x28);
                }
                pbVar48 = pbVar47;
                if ((uStack_c8 & 1) != 0) {
                  pbVar48 = pbStack_b8;
                }
                iVar46 = func_0x0eee3000(lVar2,pbVar48);
                if (iVar46 != 0) goto LAB_0cc4361d;
                *(byte ***)(lVar63 + 0x30) = &pbStack_d0;
                lStack_b0 = lVar63 + 0x10;
              }
              if (lVar64 + lVar49 != plStack_110[0xc]) {
                auStack_a8._0_4_ = param_3;
                plVar52 = *(long **)(lVar64 + lVar49 + 0x60);
                if (plVar52 == (long *)0x0) goto LAB_0cc43d63;
                pbVar47 = (byte *)(**(code **)(*plVar52 + 0x30))(plVar52,auStack_a8);
                pbVar67 = (byte *)0x0;
                if ((param_4 == 0) && (pbVar47 != (byte *)0x0)) {
                  pbVar67 = *(byte **)(pbVar47 + 0x68);
                }
                goto LAB_0cc43731;
              }
              break;
            }
LAB_0cc4361d:
            *(undefined8 *)(lVar63 + 0x30) = 0;
            lVar49 = *(long *)(lVar64 + lVar49);
          } while (lVar49 != -1);
        }
        plVar52 = (long *)plStack_110[0x1c];
        bVar68 = true;
        plVar44 = plStack_110 + 0x1d;
        if (plVar52 != plStack_110 + 0x1d) {
          do {
            plStack_110 = plVar44;
            bVar45 = *(byte *)(plVar52 + 4);
            if ((bVar45 & 1) == 0) {
              uVar51 = (ulong)(bVar45 >> 1);
            }
            else {
              uVar51 = plVar52[5];
            }
            uVar55 = uVar51 + 1;
            if (0xfffffffffffffff7 < uVar55) goto LAB_0cc43d54;
            if (uVar55 < 0x17) {
              puStack_58 = (undefined1 *)0x0;
              stack0xffffffffffffff99 = SUB1615((undefined1  [16])0x0,1);
              auStack_68[0] = (char)uVar55 * '\x02';
              puVar53 = auStack_68 + 1;
              if (uVar51 != 0) {
                if ((bVar45 & 1) == 0) goto LAB_0cc438a1;
LAB_0cc43831:
                lVar49 = plVar52[6];
                goto LAB_0cc438a6;
              }
            }
            else {
              uVar57 = (uVar55 | 7) + 1;
              if ((uVar55 | 7) == 0x17) {
                uVar57 = 0x1a;
              }
              puVar53 = (undefined1 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar57);
              if (puVar53 == (undefined1 *)0x0) {
                func_0x0eec74c0(uVar57,0);
              }
              uStack_60 = uVar55;
              auStack_68 = (undefined1  [8])(uVar57 | 1);
              puStack_58 = puVar53;
              if ((bVar45 & 1) != 0) goto LAB_0cc43831;
LAB_0cc438a1:
              lVar49 = (long)plVar52 + 0x21;
LAB_0cc438a6:
              func_0x0eee2ee0(puVar53,lVar49,uVar51);
            }
            pbVar47 = (byte *)((long)&uStack_128 + 1);
            *(undefined2 *)(puVar53 + uVar51) = 0x3a;
            pbVar67 = (byte *)((ulong)uStack_128 >> 1 & 0x7f);
            if (((ulong)uStack_128 & 1) != 0) {
              pbVar67 = pbStack_120;
              pbVar47 = pbStack_118;
            }
            pauVar54 = (undefined1 (*) [16])func_0x0412f8c0(auStack_68,pbVar47,pbVar67);
            pbVar47 = *(byte **)*pauVar54;
            pbVar67 = *(byte **)(*pauVar54 + 8);
            pbStack_78 = *(byte **)pauVar54[1];
            *pauVar54 = (undefined1  [16])0x0;
            *(undefined8 *)pauVar54[1] = 0;
            auVar116._8_8_ = 0;
            auVar116._0_8_ = uStack_a0;
            _auStack_a8 = auVar116 << 0x40;
            if (((ulong)pbVar47 & 1) == 0) {
              auVar42._8_8_ = 0;
              auVar42._0_8_ = pbVar47;
              _auStack_a8 = auVar42 << 0x40;
              pbStack_98 = pbVar67;
              pbStack_90 = pbStack_78;
              uVar51 = (ulong)pbVar47 & 0xffffffff;
            }
            else {
              func_0x0412e5e0(&uStack_a0,pbStack_78);
              uVar51 = (ulong)(byte)uStack_a0;
            }
            uStack_88 = 0;
            pbVar67 = (byte *)(ulong)((byte)(uVar51 >> 1) & 0x7f);
            if ((uVar51 & 1) != 0) {
              pbVar67 = pbStack_98;
            }
            pbStack_70 = pbVar47;
            if (pbVar67 == (byte *)0x0) {
LAB_0cc43a60:
              pbVar47 = (byte *)0x0;
            }
            else {
              pbVar48 = (byte *)((long)&uStack_a0 + 1);
              if ((uVar51 & 1) != 0) {
                pbVar48 = pbStack_90;
              }
              if ((pbVar48 == (byte *)0x0) || (*pbVar48 == 0)) goto LAB_0cc43a60;
              uVar55 = func_0x0eee2e90(pbVar48);
              pbVar47 = (byte *)0xcbf29ce484222325;
              if (uVar55 != 0) {
                if (7 < uVar55) {
                  uVar57 = uVar55 & 0xfffffffffffffff8;
                  do {
                    pbVar47 = (byte *)(((((((((long)pbVar47 * 0x100000001b3 ^ (ulong)*pbVar48) *
                                             0x100000001b3 ^ (ulong)pbVar48[1]) * 0x100000001b3 ^
                                           (ulong)pbVar48[2]) * 0x100000001b3 ^ (ulong)pbVar48[3]) *
                                          0x100000001b3 ^ (ulong)pbVar48[4]) * 0x100000001b3 ^
                                        (ulong)pbVar48[5]) * 0x100000001b3 ^ (ulong)pbVar48[6]) *
                                       0x100000001b3 ^ (ulong)pbVar48[7]);
                    pbVar48 = pbVar48 + 8;
                    uVar57 = uVar57 - 8;
                  } while (uVar57 != 0);
                }
                if ((uVar55 & 7) != 0) {
                  uVar57 = 0;
                  do {
                    pbVar47 = (byte *)((long)pbVar47 * 0x100000001b3 ^ (ulong)pbVar48[uVar57]);
                    uVar57 = uVar57 + 1;
                  } while (((uint)uVar55 & 7) != uVar57);
                }
              }
            }
            pbStack_d8 = (byte *)CONCAT71(pbStack_d8._1_7_,(char)uVar51);
            auStack_a8 = (undefined1  [8])pbVar47;
            pbVar48 = *(byte **)pbVar1;
            pbVar50 = pbVar1;
            if (pbVar48 == (byte *)0x0) {
LAB_0cc43b90:
              pbVar50 = pbVar1;
            }
            else {
              pbStack_130 = (byte *)((long)&uStack_a0 + 1);
              if ((uVar51 & 1) != 0) {
                pbStack_130 = pbStack_90;
              }
              do {
                pbVar60 = *(byte **)(pbVar48 + 0x20);
                bVar45 = (pbVar47 < pbVar60) - (pbVar60 < pbVar47);
                if (pbVar60 == pbVar47) {
                  if ((pbVar48[0x28] & 1) == 0) {
                    pbVar59 = (byte *)(ulong)(pbVar48[0x28] >> 1);
                    pbVar60 = pbVar48 + 0x29;
                  }
                  else {
                    pbVar59 = *(byte **)(pbVar48 + 0x30);
                    pbVar60 = *(byte **)(pbVar48 + 0x38);
                  }
                  pbVar65 = pbVar59;
                  if (pbVar67 < pbVar59) {
                    pbVar65 = pbVar67;
                  }
                  iVar46 = func_0x0eee2ff0(pbVar60,pbStack_130,pbVar65);
                  if (iVar46 == 0) {
                    iVar46 = (int)(char)((pbVar67 < pbVar59) - (pbVar59 < pbVar67));
                  }
                  bVar45 = (0 < iVar46) - (iVar46 < 0);
                }
                if (-1 < (char)bVar45) {
                  pbVar50 = pbVar48;
                }
                pbVar48 = *(byte **)(pbVar48 + (bVar45 >> 4 & 8));
              } while (pbVar48 != (byte *)0x0);
              if (pbVar50 == pbVar1) goto LAB_0cc43b90;
              if (pbVar47 == *(byte **)(pbVar50 + 0x20)) {
                bVar68 = (pbVar50[0x28] & 1) != 0;
                pbVar48 = pbVar50 + 0x29;
                if (bVar68) {
                  pbVar48 = *(byte **)(pbVar50 + 0x38);
                }
                pbVar60 = (byte *)(ulong)(pbVar50[0x28] >> 1);
                if (bVar68) {
                  pbVar60 = *(byte **)(pbVar50 + 0x30);
                }
                pbVar59 = pbVar67;
                if (pbVar60 < pbVar67) {
                  pbVar59 = pbVar60;
                }
                iVar46 = func_0x0eee2ff0(pbStack_130,pbVar48,pbVar59);
                bVar68 = pbVar67 < pbVar60;
                if (iVar46 != 0) {
                  bVar68 = iVar46 < 0;
                }
                if (bVar68) goto LAB_0cc43b90;
              }
              else if (pbVar47 < *(byte **)(pbVar50 + 0x20)) goto LAB_0cc43b90;
            }
            if (((ulong)pbStack_d8 & 1) != 0) {
              func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
            }
            plVar43 = plStack_110;
            if (((ulong)pbStack_70 & 1) == 0) {
            }
            else {
              func_0x0412a280(pbStack_78,(ulong)pbStack_70 & 0xfffffffffffffffe);
            }
            if ((auStack_68[0] & 1) != 0) {
              func_0x0412a280(puStack_58,(ulong)auStack_68 & 0xfffffffffffffffe);
            }
            if (pbVar50 != pbVar1) {
              pbVar67 = *(byte **)(pbVar50 + 0x48);
              if (pbVar67 == (byte *)0x0) {
                bVar68 = false;
                pbVar47 = (byte *)0x0;
                pbVar67 = (byte *)0x0;
              }
              else {
                pbVar47 = (byte *)0x0;
                bVar68 = false;
                if ((param_4 == 1) && (*(long *)(pbVar67 + 0x1f0) != *(long *)(pbVar67 + 0x1e8))) {
                  pbVar47 = (byte *)func_0x0c6c88d0(pbVar67,uStack_134);
                  bVar68 = false;
                }
              }
              goto LAB_0cc43cab;
            }
            plVar44 = (long *)plVar52[1];
            plVar66 = plVar52;
            if ((long *)plVar52[1] == (long *)0x0) {
              do {
                plVar52 = (long *)plVar66[2];
                bVar68 = plVar66 != (long *)*plVar52;
                plVar66 = plVar52;
              } while (bVar68);
            }
            else {
              do {
                plVar52 = plVar44;
                plVar44 = (long *)*plVar52;
              } while ((long *)*plVar52 != (long *)0x0);
            }
            plVar44 = plStack_110;
          } while (plVar52 != plVar43);
          bVar68 = true;
          pbVar67 = pbVar1;
        }
LAB_0cc43cab:
        if ((uStack_c8 & 1) != 0) {
          func_0x0412a280(pbStack_b8,uStack_c8 & 0xfffffffffffffffe);
        }
        if (bVar68) goto LAB_0cc43cd2;
      }
      else {
        pbVar60 = pbVar1;
        pbVar50 = (byte *)((long)&uStack_c8 + 1);
        pbVar59 = (byte *)(uStack_c8 >> 1 & 0x7f);
        if ((uStack_c8 & 1) != 0) {
          pbVar50 = pbStack_b8;
          pbVar59 = pbStack_c0;
        }
        do {
          pbVar47 = *(byte **)(pbVar67 + 0x20);
          bVar45 = (pbVar47 >= pbVar48 && pbVar47 != pbVar48) - (pbVar47 < pbVar48);
          if (pbVar47 == pbVar48) {
            if ((pbVar67[0x28] & 1) == 0) {
              pbVar65 = (byte *)(ulong)(pbVar67[0x28] >> 1);
              pbVar47 = pbVar67 + 0x29;
            }
            else {
              pbVar65 = *(byte **)(pbVar67 + 0x30);
              pbVar47 = *(byte **)(pbVar67 + 0x38);
            }
            pbVar61 = pbVar65;
            if (pbVar59 < pbVar65) {
              pbVar61 = pbVar59;
            }
            iVar46 = func_0x0eee2ff0(pbVar47,pbVar50,pbVar61);
            if (iVar46 == 0) {
              iVar46 = (int)(char)((pbVar59 < pbVar65) - (pbVar65 < pbVar59));
            }
            bVar45 = (0 < iVar46) - (iVar46 < 0);
          }
          if (-1 < (char)bVar45) {
            pbVar60 = pbVar67;
          }
          pbVar67 = *(byte **)(pbVar67 + (bVar45 >> 4 & 8));
        } while (pbVar67 != (byte *)0x0);
        pbVar47 = pbVar48;
        if (pbVar60 == pbVar1) goto LAB_0cc43371;
        if (pbVar48 == *(byte **)(pbVar60 + 0x20)) {
          bVar68 = (pbVar60[0x28] & 1) != 0;
          pbVar67 = pbVar60 + 0x29;
          if (bVar68) {
            pbVar67 = *(byte **)(pbVar60 + 0x38);
          }
          pbVar47 = (byte *)(ulong)(pbVar60[0x28] >> 1);
          if (bVar68) {
            pbVar47 = *(byte **)(pbVar60 + 0x30);
          }
          pbVar48 = pbVar59;
          if (pbVar47 < pbVar59) {
            pbVar48 = pbVar47;
          }
          iVar46 = func_0x0eee2ff0(pbVar50,pbVar67,pbVar48);
          bVar68 = pbVar47 <= pbVar59;
          if (iVar46 != 0) {
            bVar68 = -1 < iVar46;
          }
          if (!bVar68) goto LAB_0cc43371;
        }
        else if (pbVar48 < *(byte **)(pbVar60 + 0x20)) goto LAB_0cc43371;
        pbVar67 = *(byte **)(pbVar60 + 0x48);
        if (pbVar67 == (byte *)0x0) {
LAB_0cc435a4:
          pbVar67 = (byte *)0x0;
          pbVar47 = (byte *)0x0;
        }
        else {
          pbVar47 = (byte *)0x0;
          if ((param_4 == 1) && (*(long *)(pbVar67 + 0x1f0) != *(long *)(pbVar67 + 0x1e8))) {
            pbVar47 = (byte *)func_0x0c6c88d0(pbVar67,uStack_134);
          }
        }
LAB_0cc43731:
        if ((uStack_c8 & 1) != 0) {
          func_0x0412a280(pbStack_b8,uStack_c8 & 0xfffffffffffffffe);
        }
      }
    }
    else {
      pbVar50 = pbVar1;
      pbVar60 = pbStack_f0;
      if (((ulong)pbVar67 & 1) == 0) {
        pbVar60 = (byte *)((long)&uStack_100 + 1);
      }
      do {
        uVar55 = *(ulong *)(pbVar48 + 0x20);
        bVar45 = (uVar51 < uVar55) - (uVar55 < uVar51);
        if (uVar55 == uVar51) {
          if ((pbVar48[0x28] & 1) == 0) {
            pbVar59 = (byte *)(ulong)(pbVar48[0x28] >> 1);
            pbVar67 = pbVar48 + 0x29;
          }
          else {
            pbVar59 = *(byte **)(pbVar48 + 0x30);
            pbVar67 = *(byte **)(pbVar48 + 0x38);
          }
          pbVar65 = pbVar59;
          if (pbVar47 < pbVar59) {
            pbVar65 = pbVar47;
          }
          iVar46 = func_0x0eee2ff0(pbVar67,pbVar60,pbVar65);
          if (iVar46 == 0) {
            iVar46 = (int)(char)((pbVar47 < pbVar59) - (pbVar59 < pbVar47));
          }
          bVar45 = (0 < iVar46) - (iVar46 < 0);
        }
        if (-1 < (char)bVar45) {
          pbVar50 = pbVar48;
        }
        pbVar48 = *(byte **)(pbVar48 + (bVar45 >> 4 & 8));
      } while (pbVar48 != (byte *)0x0);
      if (pbVar50 == pbVar1) goto LAB_0cc42b72;
      if (uVar51 == *(ulong *)(pbVar50 + 0x20)) {
        bVar68 = (pbVar50[0x28] & 1) != 0;
        pbVar67 = pbVar50 + 0x29;
        if (bVar68) {
          pbVar67 = *(byte **)(pbVar50 + 0x38);
        }
        pbVar48 = (byte *)(ulong)(pbVar50[0x28] >> 1);
        if (bVar68) {
          pbVar48 = *(byte **)(pbVar50 + 0x30);
        }
        pbVar59 = pbVar47;
        if (pbVar48 < pbVar47) {
          pbVar59 = pbVar48;
        }
        iVar46 = func_0x0eee2ff0(pbVar60,pbVar67,pbVar59);
        bVar68 = pbVar48 <= pbVar47;
        if (iVar46 != 0) {
          bVar68 = -1 < iVar46;
        }
        if (!bVar68) goto LAB_0cc42b72;
      }
      else if (uVar51 < *(ulong *)(pbVar50 + 0x20)) goto LAB_0cc42b72;
      pbVar67 = *(byte **)(pbVar50 + 0x48);
      if (pbVar67 == (byte *)0x0) {
LAB_0cc43cd2:
        pbVar67 = (byte *)0x0;
        pbVar47 = (byte *)0x0;
      }
      else {
        pbVar47 = (byte *)0x0;
        if ((param_4 == 1) && (*(long *)(pbVar67 + 0x1f0) != *(long *)(pbVar67 + 0x1e8))) {
          pbVar47 = (byte *)func_0x0c6c88d0(pbVar67,uStack_134);
        }
      }
    }
LAB_0cc43cd8:
    if (((ulong)uStack_100 & 1) != 0) {
      func_0x0412a280(pbStack_f0,(ulong)uStack_100 & 0xfffffffffffffffe);
    }
    if (((ulong)uStack_128 & 1) != 0) {
      func_0x0412a280(pbStack_118,(ulong)uStack_128 & 0xfffffffffffffffe);
    }
  }
  else {
    uVar55 = *param_2;
    bVar68 = (bVar45 & 1) != 0;
    pbStack_78 = (byte *)(CONCAT71(pbStack_78._1_7_,bVar45) & 0xffffffffffffff01);
    uStack_48 = param_2[3];
    uVar57 = (long)param_2 + 9;
    if (bVar68) {
      uVar57 = param_2[3];
    }
    pbStack_70 = (byte *)param_2[2];
    pbStack_d8 = (byte *)(ulong)(bVar45 >> 1);
    pbVar48 = pbVar1;
    pbVar50 = (byte *)param_2[2];
    if (!bVar68) {
      pbVar50 = (byte *)(ulong)(bVar45 >> 1);
    }
    do {
      uVar51 = *(ulong *)(pbVar47 + 0x20);
      bVar45 = (uVar51 >= uVar55 && uVar51 != uVar55) - (uVar51 < uVar55);
      if (uVar51 == uVar55) {
        if ((pbVar47[0x28] & 1) == 0) {
          pbVar60 = (byte *)(ulong)(pbVar47[0x28] >> 1);
          pbVar67 = pbVar47 + 0x29;
        }
        else {
          pbVar60 = *(byte **)(pbVar47 + 0x30);
          pbVar67 = *(byte **)(pbVar47 + 0x38);
        }
        pbVar59 = pbVar60;
        if (pbVar50 < pbVar60) {
          pbVar59 = pbVar50;
        }
        iVar46 = func_0x0eee2ff0(pbVar67,uVar57,pbVar59);
        if (iVar46 == 0) {
          iVar46 = (int)(char)((pbVar50 < pbVar60) - (pbVar60 < pbVar50));
        }
        bVar45 = (0 < iVar46) - (iVar46 < 0);
      }
      if (-1 < (char)bVar45) {
        pbVar48 = pbVar47;
      }
      pbVar47 = *(byte **)(pbVar47 + (bVar45 >> 4 & 8));
    } while (pbVar47 != (byte *)0x0);
    pbVar47 = pbStack_70;
    uVar51 = uStack_48;
    pbVar67 = pbStack_d8;
    bVar45 = (byte)pbStack_78;
    if (pbVar48 == pbVar1) goto LAB_0cc4256e;
    if (uVar55 == *(ulong *)(pbVar48 + 0x20)) {
      bVar68 = (pbVar48[0x28] & 1) != 0;
      pbVar47 = pbVar48 + 0x29;
      if (bVar68) {
        pbVar47 = *(byte **)(pbVar48 + 0x38);
      }
      pbVar67 = (byte *)(ulong)(pbVar48[0x28] >> 1);
      if (bVar68) {
        pbVar67 = *(byte **)(pbVar48 + 0x30);
      }
      pbVar60 = pbVar50;
      if (pbVar67 < pbVar50) {
        pbVar60 = pbVar67;
      }
      iVar46 = func_0x0eee2ff0(uVar57,pbVar47,pbVar60);
      bVar68 = pbVar67 <= pbVar50;
      if (iVar46 != 0) {
        bVar68 = -1 < iVar46;
      }
      pbVar47 = pbStack_70;
      uVar51 = uStack_48;
      pbVar67 = pbStack_d8;
      bVar45 = (byte)pbStack_78;
      if (!bVar68) goto LAB_0cc4256e;
    }
    else if (uVar55 < *(ulong *)(pbVar48 + 0x20)) goto LAB_0cc4256e;
    pbVar67 = *(byte **)(pbVar48 + 0x48);
    if (pbVar67 == (byte *)0x0) {
      pbVar67 = (byte *)0x0;
      pbVar47 = (byte *)0x0;
    }
    else {
      pbVar47 = (byte *)0x0;
      if ((param_4 == 1) && (*(long *)(pbVar67 + 0x1f0) != *(long *)(pbVar67 + 0x1e8))) {
        pbVar47 = (byte *)func_0x0c6c88d0(pbVar67,uStack_134);
      }
    }
  }
  func_0x0cc465d0(auStack_40);
LAB_0cc43d19:
  auVar115._8_8_ = pbVar47;
  auVar115._0_8_ = pbVar67;
  return auVar115;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
