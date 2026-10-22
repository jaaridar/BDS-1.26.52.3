/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cb60a0 (ELF vaddr 0x5bb60a0)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cb60a0, 05cb67d7] [05cb6854, 05cb6877] [05cb687b, 05cb6fe7] [05cb704a, 05cb706d] [05cb7071, 05cb70a6]]
 * Ghidra: FUN_05cb60a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05cb60a0(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
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
  long *plVar43;
  long lVar44;
  byte *pbVar45;
  byte *pbVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  undefined8 uVar50;
  undefined1 uVar51;
  byte *pbVar52;
  byte bVar53;
  byte *pbVar54;
  ulong uVar55;
  ulong extraout_RDX;
  undefined8 *puVar56;
  byte *pbVar57;
  byte *pbVar58;
  byte *unaff_R13;
  byte *pbVar59;
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
  undefined1 uStack_149;
  undefined8 uStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  long *plStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
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
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  
  pbVar59 = (byte *)(param_3 & 0xffffffff);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    pbStack_b0 = (byte *)0x5cb60e5;
    func_0x0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_88 = *(undefined8 **)(param_1 + 0x148);
  uStack_80 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar43 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar43 = *plVar43 + 1;
    UNLOCK();
  }
  pbStack_b0 = (byte *)0x5cb6114;
  func_0x0cc46680(auStack_40,&uStack_88);
  pbVar57 = uStack_80;
  if (uStack_80 != (byte *)0x0) {
    LOCK();
    pbVar52 = uStack_80 + 8;
    lVar48 = *(long *)pbVar52;
    *(long *)pbVar52 = *(long *)pbVar52 + -1;
    UNLOCK();
    if (lVar48 == 0) {
      pbStack_b0 = (byte *)0x5cb6139;
      (**(code **)(*(long *)uStack_80 + 0x10))(uStack_80);
      pbStack_b0 = (byte *)0x5cb6141;
      func_0x0412c2d0(pbVar57);
    }
  }
  pbStack_b0 = (byte *)0x5cb6157;
  plVar43 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x450);
  if (plVar43 == (long *)0x0) {
    pbStack_b0 = (byte *)0x5cb67a9;
    func_0x0eec74c0(0x450,0);
  }
  pbStack_b0 = (byte *)0x5cb617d;
  func_0x0c6c7010(plVar43,&uStack_58,pbVar59);
  *plVar43 = (long)&UNK_0f3b1af0;
  pbStack_b0 = (byte *)0x5cb6199;
  func_0x0c6e6af0(plVar43 + 0x75,param_4);
  pbVar57 = &UNK_0c67c2f0;
  pbStack_b0 = (byte *)0x5cb61ac;
  func_0x0c67c170(plVar43,&UNK_0c67c2f0,0);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar48 = 0;
    lVar44 = 0;
  }
  else {
    pbStack_b0 = (byte *)0x5cb61bd;
    lVar44 = func_0x0412c300();
    lVar48 = 0;
    if (lVar44 != 0) {
      lVar48 = *(long *)(param_1 + 0x138);
    }
  }
  plVar43[0x73] = lVar48;
  plVar3 = (long *)plVar43[0x74];
  plVar43[0x74] = lVar44;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar44 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar44 == 0) {
      pbStack_b0 = (byte *)0x5cb6207;
      (**(code **)(*plVar3 + 0x10))(plVar3);
      pbStack_b0 = (byte *)0x5cb620f;
      func_0x0412c2d0(plVar3);
    }
  }
  uVar51 = (undefined1)lVar48;
  bVar60 = (*(byte *)(plVar43 + 0x1a) & 1) != 0;
  pbVar52 = (byte *)((long)plVar43 + 0xd1);
  if (bVar60) {
    pbVar52 = (byte *)plVar43[0x1c];
  }
  pbVar54 = (byte *)(ulong)(*(byte *)(plVar43 + 0x1a) >> 1);
  if (bVar60) {
    pbVar54 = (byte *)plVar43[0x1b];
  }
  if (pbVar54 < (byte *)0xfffffffffffffff8) {
    pbVar59 = (byte *)((long)&uStack_a0 + 1);
    if (pbVar54 < (byte *)0x17) {
      uStack_a0 = (byte *)CONCAT71(uStack_a0._1_7_,(char)pbVar54 * '\x02');
      if (pbVar54 != (byte *)0x0) goto LAB_05cb62af;
    }
    else {
      uVar47 = 0x1a;
      if (((ulong)pbVar54 | 7) != 0x17) {
        uVar47 = ((ulong)pbVar54 | 7) + 1;
      }
      pbStack_b0 = (byte *)0x5cb628b;
      pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
      if (pbVar59 == (byte *)0x0) {
        pbStack_b0 = (byte *)0x5cb67b8;
        func_0x0eec74c0(uVar47,0);
      }
      uStack_a0 = (byte *)(uVar47 | 1);
      pbStack_98 = pbVar54;
      pbStack_90 = pbVar59;
LAB_05cb62af:
      pbStack_b0 = (byte *)0x5cb62bd;
      func_0x0eee2f00(pbVar59,pbVar52,pbVar54);
    }
    pbVar59[(long)pbVar54] = 0;
    unaff_R13 = (byte *)(ulong)((byte)uStack_a0 >> 1);
    pbVar52 = pbStack_98;
    pbVar59 = pbStack_90;
    if (((ulong)uStack_a0 & 1) == 0) {
      pbVar52 = unaff_R13;
      pbVar59 = (byte *)((long)&uStack_a0 + 1);
    }
    if (pbVar52 != (byte *)0x0) {
      pbVar57 = pbVar59;
      if (pbVar52 < (byte *)0x8) {
LAB_05cb63fc:
        pbVar59 = pbVar59 + (long)pbVar52;
        do {
          bVar2 = *pbVar57;
          pbVar52 = (byte *)(ulong)bVar2;
          bVar53 = bVar2 + 0x20;
          if (0x19 < (byte)(bVar2 + 0xbf)) {
            bVar53 = bVar2;
          }
          *pbVar57 = bVar53;
          pbVar57 = pbVar57 + 1;
        } while (pbVar57 != pbVar59);
      }
      else if (pbVar52 < (byte *)0x20) {
        pbVar54 = (byte *)0x0;
LAB_05cb6395:
        pbVar58 = (byte *)((ulong)pbVar52 & 0xfffffffffffffff8);
        pbVar57 = pbVar59 + (long)pbVar58;
        do {
          uVar50 = *(undefined8 *)(pbVar59 + (long)pbVar54);
          bVar61 = (char)uVar50 + DAT_014e9110;
          cVar63 = (char)((ulong)uVar50 >> 8);
          bVar62 = cVar63 + DAT_014e9110._1_1_;
          cVar65 = (char)((ulong)uVar50 >> 0x10);
          bVar64 = cVar65 + DAT_014e9110._2_1_;
          cVar67 = (char)((ulong)uVar50 >> 0x18);
          bVar66 = cVar67 + DAT_014e9110._3_1_;
          cVar69 = (char)((ulong)uVar50 >> 0x20);
          bVar68 = cVar69 + DAT_014e9110._4_1_;
          cVar71 = (char)((ulong)uVar50 >> 0x28);
          bVar70 = cVar71 + DAT_014e9110._5_1_;
          cVar73 = (char)((ulong)uVar50 >> 0x30);
          cVar11 = (char)((ulong)uVar50 >> 0x38);
          bVar72 = cVar73 + DAT_014e9110._6_1_;
          bVar74 = cVar11 + DAT_014e9110._7_1_;
          bVar2 = DAT_014e8cb0;
          bVar53 = DAT_014e8cb0._1_1_;
          bVar5 = DAT_014e8cb0._2_1_;
          bVar6 = DAT_014e8cb0._3_1_;
          bVar7 = DAT_014e8cb0._4_1_;
          bVar8 = DAT_014e8cb0._5_1_;
          bVar9 = DAT_014e8cb0._6_1_;
          bVar10 = DAT_014e8cb0._7_1_;
          *(ulong *)(pbVar59 + (long)pbVar54) =
               CONCAT17((~-((byte)((bVar74 < bVar10) * bVar10 | (bVar74 >= bVar10) * bVar74) ==
                           bVar74) & UNK_014ea367) + cVar11,
                        CONCAT16((~-((byte)((bVar72 < bVar9) * bVar9 | (bVar72 >= bVar9) * bVar72)
                                    == bVar72) & UNK_014ea366) + cVar73,
                                 CONCAT15((~-((byte)((bVar70 < bVar8) * bVar8 |
                                                    (bVar70 >= bVar8) * bVar70) == bVar70) &
                                          UNK_014ea365) + cVar71,
                                          CONCAT14((~-((byte)((bVar68 < bVar7) * bVar7 |
                                                             (bVar68 >= bVar7) * bVar68) == bVar68)
                                                   & UNK_014ea364) + cVar69,
                                                   CONCAT13((~-((byte)((bVar66 < bVar6) * bVar6 |
                                                                      (bVar66 >= bVar6) * bVar66) ==
                                                               bVar66) & UNK_014ea363) + cVar67,
                                                            CONCAT12((~-((byte)((bVar64 < bVar5) *
                                                                                bVar5 | (bVar64 >=
                                                                                        bVar5) * 
                                                  bVar64) == bVar64) & UNK_014ea362) + cVar65,
                                                  CONCAT11((~-((byte)((bVar62 < bVar53) * bVar53 |
                                                                     (bVar62 >= bVar53) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar2) * bVar2 |
                                                                     (bVar61 >= bVar2) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar50
                                                          )))))));
          pbVar54 = pbVar54 + 8;
        } while (pbVar58 != pbVar54);
        if (pbVar52 != pbVar58) goto LAB_05cb63fc;
      }
      else {
        pbVar54 = (byte *)((ulong)pbVar52 & 0xffffffffffffffe0);
        pbVar57 = (byte *)0x0;
        do {
          pbVar58 = pbVar59 + (long)pbVar57;
          bVar12 = pbVar58[1];
          bVar13 = pbVar58[2];
          bVar14 = pbVar58[3];
          bVar15 = pbVar58[4];
          bVar16 = pbVar58[5];
          bVar17 = pbVar58[6];
          bVar18 = pbVar58[7];
          bVar19 = pbVar58[8];
          bVar20 = pbVar58[9];
          bVar21 = pbVar58[10];
          bVar22 = pbVar58[0xb];
          bVar23 = pbVar58[0xc];
          bVar24 = pbVar58[0xd];
          bVar25 = pbVar58[0xe];
          bVar26 = pbVar58[0xf];
          pbVar45 = pbVar59 + 0x10 + (long)pbVar57;
          bVar27 = *pbVar45;
          bVar28 = pbVar45[1];
          bVar29 = pbVar45[2];
          bVar30 = pbVar45[3];
          bVar31 = pbVar45[4];
          bVar32 = pbVar45[5];
          bVar33 = pbVar45[6];
          bVar34 = pbVar45[7];
          bVar35 = pbVar45[8];
          bVar36 = pbVar45[9];
          bVar37 = pbVar45[10];
          bVar38 = pbVar45[0xb];
          bVar39 = pbVar45[0xc];
          bVar40 = pbVar45[0xd];
          bVar41 = pbVar45[0xe];
          bVar42 = pbVar45[0xf];
          bVar75 = *pbVar58 + DAT_014e86b0;
          bVar76 = bVar12 + DAT_014e86b0._1_1_;
          bVar77 = bVar13 + DAT_014e86b0._2_1_;
          bVar78 = bVar14 + DAT_014e86b0._3_1_;
          bVar79 = bVar15 + DAT_014e86b0._4_1_;
          bVar80 = bVar16 + DAT_014e86b0._5_1_;
          bVar81 = bVar17 + DAT_014e86b0._6_1_;
          bVar82 = bVar18 + DAT_014e86b0._7_1_;
          bVar83 = bVar19 + DAT_014e86b0._8_1_;
          bVar84 = bVar20 + DAT_014e86b0._9_1_;
          bVar85 = bVar21 + DAT_014e86b0._10_1_;
          bVar86 = bVar22 + DAT_014e86b0._11_1_;
          bVar87 = bVar23 + DAT_014e86b0._12_1_;
          bVar88 = bVar24 + DAT_014e86b0._13_1_;
          bVar89 = bVar25 + DAT_014e86b0._14_1_;
          bVar90 = bVar26 + DAT_014e86b0._15_1_;
          bVar91 = bVar27 + DAT_014e86b0;
          bVar92 = bVar28 + DAT_014e86b0._1_1_;
          bVar93 = bVar29 + DAT_014e86b0._2_1_;
          bVar94 = bVar30 + DAT_014e86b0._3_1_;
          bVar95 = bVar31 + DAT_014e86b0._4_1_;
          bVar96 = bVar32 + DAT_014e86b0._5_1_;
          bVar97 = bVar33 + DAT_014e86b0._6_1_;
          bVar98 = bVar34 + DAT_014e86b0._7_1_;
          bVar99 = bVar35 + DAT_014e86b0._8_1_;
          bVar100 = bVar36 + DAT_014e86b0._9_1_;
          bVar101 = bVar37 + DAT_014e86b0._10_1_;
          bVar102 = bVar38 + DAT_014e86b0._11_1_;
          bVar103 = bVar39 + DAT_014e86b0._12_1_;
          bVar104 = bVar40 + DAT_014e86b0._13_1_;
          bVar105 = bVar41 + DAT_014e86b0._14_1_;
          bVar106 = bVar42 + DAT_014e86b0._15_1_;
          bVar2 = DAT_014e4170;
          bVar53 = DAT_014e4170._1_1_;
          bVar5 = DAT_014e4170._2_1_;
          bVar6 = DAT_014e4170._3_1_;
          bVar7 = DAT_014e4170._4_1_;
          bVar8 = DAT_014e4170._5_1_;
          bVar9 = DAT_014e4170._6_1_;
          bVar10 = DAT_014e4170._7_1_;
          bVar61 = DAT_014e4170._8_1_;
          bVar62 = DAT_014e4170._9_1_;
          bVar64 = DAT_014e4170._10_1_;
          bVar66 = DAT_014e4170._11_1_;
          bVar68 = DAT_014e4170._12_1_;
          bVar70 = DAT_014e4170._13_1_;
          bVar72 = DAT_014e4170._14_1_;
          bVar74 = DAT_014e4170._15_1_;
          pbVar45 = pbVar59 + (long)pbVar57;
          *pbVar45 = (-((byte)((bVar2 < bVar75) * bVar2 | (bVar2 >= bVar75) * bVar75) == bVar75) &
                     DAT_014ead50) + *pbVar58;
          pbVar45[1] = (-((byte)((bVar53 < bVar76) * bVar53 | (bVar53 >= bVar76) * bVar76) == bVar76
                         ) & UNK_014ead51) + bVar12;
          pbVar45[2] = (-((byte)((bVar5 < bVar77) * bVar5 | (bVar5 >= bVar77) * bVar77) == bVar77) &
                       UNK_014ead52) + bVar13;
          pbVar45[3] = (-((byte)((bVar6 < bVar78) * bVar6 | (bVar6 >= bVar78) * bVar78) == bVar78) &
                       UNK_014ead53) + bVar14;
          pbVar45[4] = (-((byte)((bVar7 < bVar79) * bVar7 | (bVar7 >= bVar79) * bVar79) == bVar79) &
                       UNK_014ead54) + bVar15;
          pbVar45[5] = (-((byte)((bVar8 < bVar80) * bVar8 | (bVar8 >= bVar80) * bVar80) == bVar80) &
                       UNK_014ead55) + bVar16;
          pbVar45[6] = (-((byte)((bVar9 < bVar81) * bVar9 | (bVar9 >= bVar81) * bVar81) == bVar81) &
                       UNK_014ead56) + bVar17;
          pbVar45[7] = (-((byte)((bVar10 < bVar82) * bVar10 | (bVar10 >= bVar82) * bVar82) == bVar82
                         ) & UNK_014ead57) + bVar18;
          pbVar45[8] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83
                         ) & UNK_014ead58) + bVar19;
          pbVar45[9] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84
                         ) & UNK_014ead59) + bVar20;
          pbVar45[10] = (-((byte)((bVar64 < bVar85) * bVar64 | (bVar64 >= bVar85) * bVar85) ==
                          bVar85) & UNK_014ead5a) + bVar21;
          pbVar45[0xb] = (-((byte)((bVar66 < bVar86) * bVar66 | (bVar66 >= bVar86) * bVar86) ==
                           bVar86) & UNK_014ead5b) + bVar22;
          pbVar45[0xc] = (-((byte)((bVar68 < bVar87) * bVar68 | (bVar68 >= bVar87) * bVar87) ==
                           bVar87) & UNK_014ead5c) + bVar23;
          pbVar45[0xd] = (-((byte)((bVar70 < bVar88) * bVar70 | (bVar70 >= bVar88) * bVar88) ==
                           bVar88) & UNK_014ead5d) + bVar24;
          pbVar45[0xe] = (-((byte)((bVar72 < bVar89) * bVar72 | (bVar72 >= bVar89) * bVar89) ==
                           bVar89) & UNK_014ead5e) + bVar25;
          pbVar45[0xf] = (-((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) ==
                           bVar90) & UNK_014ead5f) + bVar26;
          pbVar58 = pbVar59 + 0x10 + (long)pbVar57;
          *pbVar58 = (-((byte)((bVar2 < bVar91) * bVar2 | (bVar2 >= bVar91) * bVar91) == bVar91) &
                     DAT_014ead50) + bVar27;
          pbVar58[1] = (-((byte)((bVar53 < bVar92) * bVar53 | (bVar53 >= bVar92) * bVar92) == bVar92
                         ) & UNK_014ead51) + bVar28;
          pbVar58[2] = (-((byte)((bVar5 < bVar93) * bVar5 | (bVar5 >= bVar93) * bVar93) == bVar93) &
                       UNK_014ead52) + bVar29;
          pbVar58[3] = (-((byte)((bVar6 < bVar94) * bVar6 | (bVar6 >= bVar94) * bVar94) == bVar94) &
                       UNK_014ead53) + bVar30;
          pbVar58[4] = (-((byte)((bVar7 < bVar95) * bVar7 | (bVar7 >= bVar95) * bVar95) == bVar95) &
                       UNK_014ead54) + bVar31;
          pbVar58[5] = (-((byte)((bVar8 < bVar96) * bVar8 | (bVar8 >= bVar96) * bVar96) == bVar96) &
                       UNK_014ead55) + bVar32;
          pbVar58[6] = (-((byte)((bVar9 < bVar97) * bVar9 | (bVar9 >= bVar97) * bVar97) == bVar97) &
                       UNK_014ead56) + bVar33;
          pbVar58[7] = (-((byte)((bVar10 < bVar98) * bVar10 | (bVar10 >= bVar98) * bVar98) == bVar98
                         ) & UNK_014ead57) + bVar34;
          pbVar58[8] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99
                         ) & UNK_014ead58) + bVar35;
          pbVar58[9] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead59) + bVar36;
          pbVar58[10] = (-((byte)((bVar64 < bVar101) * bVar64 | (bVar64 >= bVar101) * bVar101) ==
                          bVar101) & UNK_014ead5a) + bVar37;
          pbVar58[0xb] = (-((byte)((bVar66 < bVar102) * bVar66 | (bVar66 >= bVar102) * bVar102) ==
                           bVar102) & UNK_014ead5b) + bVar38;
          pbVar58[0xc] = (-((byte)((bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103) ==
                           bVar103) & UNK_014ead5c) + bVar39;
          pbVar58[0xd] = (-((byte)((bVar70 < bVar104) * bVar70 | (bVar70 >= bVar104) * bVar104) ==
                           bVar104) & UNK_014ead5d) + bVar40;
          pbVar58[0xe] = (-((byte)((bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105) ==
                           bVar105) & UNK_014ead5e) + bVar41;
          pbVar58[0xf] = (-((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                           bVar106) & UNK_014ead5f) + bVar42;
          pbVar57 = pbVar57 + 0x20;
        } while (pbVar54 != pbVar57);
        if (pbVar52 != pbVar54) {
          if (((ulong)pbVar52 & 0x18) == 0) {
            pbVar57 = pbVar54 + (long)pbVar59;
            goto LAB_05cb63fc;
          }
          goto LAB_05cb6395;
        }
      }
      unaff_R13 = (byte *)(ulong)((byte)uStack_a0 >> 1);
    }
    uVar51 = SUB81(pbVar52,0);
    pbVar54 = (byte *)((long)&uStack_a0 + 1);
    if (((ulong)uStack_a0 & 1) != 0) {
      unaff_R13 = pbStack_98;
      pbVar54 = pbStack_90;
    }
    pbVar59 = pbVar54 + (long)unaff_R13;
    pbVar58 = unaff_R13;
    pbVar45 = pbVar54;
    pbVar57 = pbStack_98;
    while (pbVar46 = pbVar59, 0 < (long)pbVar58) {
      pbVar57 = (byte *)0x3a;
      pbStack_b0 = (byte *)0x5cb645d;
      pbVar45 = (byte *)func_0x0eee2ef0(pbVar45,0x3a,pbVar58);
      uVar51 = SUB81(pbVar52,0);
      if ((pbVar45 == (byte *)0x0) || (pbVar46 = pbVar45, *pbVar45 == 0x3a)) break;
      pbVar45 = pbVar45 + 1;
      pbVar58 = pbVar59 + -(long)pbVar45;
    }
    pbVar52 = pbVar46 + -(long)pbVar54;
    if (unaff_R13 < pbVar46 + -(long)pbVar54) {
      pbVar52 = unaff_R13;
    }
    if (pbVar46 == pbVar59) {
      pbVar52 = unaff_R13;
    }
    if (pbVar52 < (byte *)0xfffffffffffffff8) {
      if (pbVar52 < (byte *)0x17) {
        uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,(char)pbVar52 * '\x02');
        pbVar59 = (byte *)((long)&uStack_88 + 1);
        if (pbVar52 != (byte *)0x0) goto LAB_05cb6500;
      }
      else {
        uVar47 = 0x1a;
        if (((ulong)pbVar52 | 7) != 0x17) {
          uVar47 = ((ulong)pbVar52 | 7) + 1;
        }
        pbStack_b0 = (byte *)0x5cb64e1;
        pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
        if (pbVar59 == (byte *)0x0) {
          pbStack_b0 = (byte *)0x5cb67c7;
          func_0x0eec74c0(uVar47,0);
        }
        uStack_88 = (undefined8 *)(uVar47 | 1);
        uStack_80 = pbVar52;
        pbStack_78 = pbVar59;
LAB_05cb6500:
        pbStack_b0 = (byte *)0x5cb650e;
        memmove(pbVar59,pbVar54,pbVar52);
      }
      pbVar59[(long)pbVar52] = 0;
      pbStack_b0 = (byte *)0x5cb652b;
      func_0x05cf8990(param_1 + 0xe0,&uStack_88,&uStack_88);
      if (((ulong)uStack_88 & 1) != 0) {
        pbStack_b0 = (byte *)0x5cb6545;
        func_0x0412a280(pbStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
      }
      uStack_88 = (undefined8 *)0x0;
      if (((ulong)uStack_a0 & 1) == 0) {
        pbStack_70 = pbStack_90;
        uStack_80 = uStack_a0;
        pbStack_78 = pbStack_98;
      }
      else {
        pbStack_b0 = (byte *)0x5cb6582;
        func_0x0412e5e0(&uStack_80,pbStack_90,pbStack_98);
      }
      uStack_68 = 0;
      if (((ulong)uStack_80 & 1) == 0) {
        if ((byte)uStack_80 >> 1 != 0) goto LAB_05cb65b0;
      }
      else if (pbStack_78 != (byte *)0x0) {
LAB_05cb65b0:
        pbVar59 = pbStack_70;
        if (((ulong)uStack_80 & 1) == 0) {
          pbVar59 = (byte *)((long)&uStack_80 + 1);
        }
        if ((pbVar59 != (byte *)0x0) && (*pbVar59 != 0)) {
          puVar56 = (undefined8 *)0xcbf29ce484222325;
          pbStack_b0 = (byte *)0x5cb65ee;
          uVar47 = func_0x0eee2e90(pbVar59);
          if (uVar47 != 0) {
            uVar55 = (ulong)((uint)uVar47 & 7);
            if (7 < uVar47) {
              uVar47 = uVar47 & 0xfffffffffffffff8;
              do {
                puVar56 = (undefined8 *)
                          (((((((((long)puVar56 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                                (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) *
                               0x100000001b3 ^ (ulong)pbVar59[3]) * 0x100000001b3 ^
                             (ulong)pbVar59[4]) * 0x100000001b3 ^ (ulong)pbVar59[5]) * 0x100000001b3
                           ^ (ulong)pbVar59[6]) * 0x100000001b3 ^ (ulong)pbVar59[7]);
                pbVar59 = pbVar59 + 8;
                uVar47 = uVar47 - 8;
              } while (uVar47 != 0);
            }
            if (uVar55 != 0) {
              uVar47 = 0;
              do {
                puVar56 = (undefined8 *)((long)puVar56 * 0x100000001b3 ^ (ulong)pbVar59[uVar47]);
                uVar47 = uVar47 + 1;
              } while (uVar55 != uVar47);
            }
          }
          goto LAB_05cb66a9;
        }
      }
      puVar56 = (undefined8 *)0x0;
LAB_05cb66a9:
      pbStack_b0 = (byte *)0x5cb66cf;
      uStack_88 = puVar56;
      puStack_60 = &uStack_88;
      lVar48 = FUN_05cf8b10(param_1,&uStack_88,&UNK_01563a4f,&puStack_60,&uStack_a1);
      plVar3 = *(long **)(lVar48 + 0x48);
      *(long **)(lVar48 + 0x48) = plVar43;
      if (plVar3 != (long *)0x0) {
        pbStack_b0 = (byte *)0x5cb66e2;
        (**(code **)(*plVar3 + 8))();
      }
      puStack_60 = uStack_88;
      pbStack_b0 = (byte *)0x5cb6700;
      lVar48 = FUN_05cf8dc0(param_1 + 0xf8,&puStack_60);
      if ((*(byte *)(lVar48 + 0x18) & 1) != 0) {
        pbStack_b0 = (byte *)0x5cb6723;
        func_0x0412a280(*(undefined8 *)(lVar48 + 0x28),
                        *(ulong *)(lVar48 + 0x18) & 0xfffffffffffffffe);
      }
      *(byte **)(lVar48 + 0x28) = pbStack_70;
      *(byte **)(lVar48 + 0x18) = uStack_80;
      *(byte **)(lVar48 + 0x20) = pbStack_78;
      uStack_80 = (byte *)((ulong)uStack_80 & 0xffffffffffff0000);
      *(undefined8 **)(lVar48 + 0x10) = uStack_88;
      *(undefined8 *)(lVar48 + 0x30) = 0;
      if (((ulong)uStack_a0 & 1) != 0) {
        pbStack_b0 = (byte *)0x5cb6767;
        func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
      }
      pbStack_b0 = (byte *)0x5cb6771;
      func_0x0cc46730(auStack_40);
      if ((uStack_58 & 1) != 0) {
        pbStack_b0 = (byte *)0x5cb678b;
        func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
      }
      return plVar43;
    }
  }
  else {
    pbStack_b0 = (byte *)0x5cb67d1;
    func_0x04882e30();
  }
  pbStack_b0 = (byte *)0x5cb67d6;
  lVar48 = func_0x04882e30();
  if (((ulong)uStack_a0 & 1) != 0) {
    pbVar57 = (byte *)((ulong)uStack_a0 & 0xfffffffffffffffe);
    pbStack_b0 = (byte *)0x5cb6871;
    func_0x0412a280(pbStack_90);
  }
  if (plVar43 != (long *)0x0) {
    pbStack_b0 = (byte *)0x5cb6884;
    (**(code **)(*plVar43 + 8))(plVar43);
  }
  pbStack_b0 = (byte *)0x5cb688e;
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    pbVar57 = (byte *)(uStack_58 & 0xfffffffffffffffe);
    pbStack_b0 = (byte *)0x5cb68a8;
    func_0x0412a280(uStack_48);
  }
  pbStack_b0 = (byte *)0x5cb68b0;
  lVar44 = lVar48;
  func_0x0eee2d70();
  plStack_d8 = plVar43;
  pbStack_d0 = pbVar52;
  pbStack_c8 = unaff_R13;
  lStack_c0 = lVar48;
  pbStack_b8 = pbVar54;
  pbStack_b0 = pbVar59;
  if ((pbVar57[8] & 1) == 0) {
    uStack_f0 = *(undefined8 *)(pbVar57 + 0x18);
    uStack_100 = *(ulong *)(pbVar57 + 8);
    uStack_f8 = *(undefined8 *)(pbVar57 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_100,*(undefined8 *)(pbVar57 + 0x18),*(undefined8 *)(pbVar57 + 0x10));
  }
  uStack_130 = *(undefined8 **)(lVar44 + 0x148);
  uStack_128 = *(byte **)(lVar44 + 0x150);
  if (*(long *)(lVar44 + 0x150) != 0) {
    LOCK();
    plVar43 = (long *)(*(long *)(lVar44 + 0x150) + 8);
    *plVar43 = *plVar43 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_e8,&uStack_130);
  pbVar59 = uStack_128;
  if (uStack_128 != (byte *)0x0) {
    LOCK();
    pbVar57 = uStack_128 + 8;
    lVar48 = *(long *)pbVar57;
    *(long *)pbVar57 = *(long *)pbVar57 + -1;
    UNLOCK();
    if (lVar48 == 0) {
      (**(code **)(*(long *)uStack_128 + 0x10))(uStack_128);
      func_0x0412c2d0(pbVar59);
    }
  }
  plVar43 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar43 == (long *)0x0) {
    func_0x0eec74c0(0x3b0,0);
  }
  func_0x0c6c7010(plVar43,&uStack_100,extraout_RDX & 0xffffffff);
  *plVar43 = (long)&UNK_0f440680;
  *(undefined1 *)(plVar43 + 0x75) = uVar51;
  if (*(long *)(lVar44 + 0x140) == 0) {
    lVar48 = 0;
    lVar49 = 0;
  }
  else {
    lVar49 = func_0x0412c300();
    lVar48 = 0;
    if (lVar49 != 0) {
      lVar48 = *(long *)(lVar44 + 0x138);
    }
  }
  plVar43[0x73] = lVar48;
  plVar3 = (long *)plVar43[0x74];
  plVar43[0x74] = lVar49;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar48 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar48 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  bVar60 = (*(byte *)(plVar43 + 0x1a) & 1) != 0;
  lVar48 = (long)plVar43 + 0xd1;
  if (bVar60) {
    lVar48 = plVar43[0x1c];
  }
  pbVar59 = (byte *)(ulong)(*(byte *)(plVar43 + 0x1a) >> 1);
  if (bVar60) {
    pbVar59 = (byte *)plVar43[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar59) {
    func_0x04882e30();
    goto LAB_05cb6fe1;
  }
  pbVar57 = (byte *)((long)&uStack_148 + 1);
  if (pbVar59 < (byte *)0x17) {
    uStack_148 = (byte *)CONCAT71(uStack_148._1_7_,(char)pbVar59 * '\x02');
    if (pbVar59 != (byte *)0x0) goto LAB_05cb6ab8;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar59 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar59 | 7) + 1;
    }
    pbVar57 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar57 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_148 = (byte *)(uVar47 | 1);
    pbStack_140 = pbVar59;
    pbStack_138 = pbVar57;
LAB_05cb6ab8:
    func_0x0eee2f00(pbVar57,lVar48,pbVar59);
  }
  pbVar52 = (byte *)((long)&uStack_148 + 1);
  pbVar57[(long)pbVar59] = 0;
  pbVar54 = (byte *)(ulong)((byte)uStack_148 >> 1);
  pbVar57 = pbStack_140;
  pbVar59 = pbStack_138;
  if (((ulong)uStack_148 & 1) == 0) {
    pbVar57 = pbVar54;
    pbVar59 = pbVar52;
  }
  if (pbVar57 != (byte *)0x0) {
    pbVar54 = pbVar59;
    if (pbVar57 < (byte *)0x8) {
LAB_05cb6c0c:
      do {
        bVar2 = *pbVar54;
        bVar53 = bVar2 + 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar53 = bVar2;
        }
        *pbVar54 = bVar53;
        pbVar54 = pbVar54 + 1;
      } while (pbVar54 != pbVar59 + (long)pbVar57);
    }
    else if (pbVar57 < (byte *)0x20) {
      pbVar58 = (byte *)0x0;
LAB_05cb6ba5:
      pbVar45 = (byte *)((ulong)pbVar57 & 0xfffffffffffffff8);
      pbVar54 = pbVar59 + (long)pbVar45;
      do {
        uVar50 = *(undefined8 *)(pbVar59 + (long)pbVar58);
        bVar61 = (char)uVar50 + DAT_014e9110;
        cVar63 = (char)((ulong)uVar50 >> 8);
        bVar62 = cVar63 + DAT_014e9110._1_1_;
        cVar65 = (char)((ulong)uVar50 >> 0x10);
        bVar64 = cVar65 + DAT_014e9110._2_1_;
        cVar67 = (char)((ulong)uVar50 >> 0x18);
        bVar66 = cVar67 + DAT_014e9110._3_1_;
        cVar69 = (char)((ulong)uVar50 >> 0x20);
        bVar68 = cVar69 + DAT_014e9110._4_1_;
        cVar71 = (char)((ulong)uVar50 >> 0x28);
        bVar70 = cVar71 + DAT_014e9110._5_1_;
        cVar73 = (char)((ulong)uVar50 >> 0x30);
        cVar11 = (char)((ulong)uVar50 >> 0x38);
        bVar72 = cVar73 + DAT_014e9110._6_1_;
        bVar74 = cVar11 + DAT_014e9110._7_1_;
        bVar2 = DAT_014e8cb0;
        bVar53 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar59 + (long)pbVar58) =
             CONCAT17((~-((byte)((bVar74 < bVar10) * bVar10 | (bVar74 >= bVar10) * bVar74) == bVar74
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar72 < bVar9) * bVar9 | (bVar72 >= bVar9) * bVar72) ==
                                  bVar72) & UNK_014ea366) + cVar73,
                               CONCAT15((~-((byte)((bVar70 < bVar8) * bVar8 |
                                                  (bVar70 >= bVar8) * bVar70) == bVar70) &
                                        UNK_014ea365) + cVar71,
                                        CONCAT14((~-((byte)((bVar68 < bVar7) * bVar7 |
                                                           (bVar68 >= bVar7) * bVar68) == bVar68) &
                                                 UNK_014ea364) + cVar69,
                                                 CONCAT13((~-((byte)((bVar66 < bVar6) * bVar6 |
                                                                    (bVar66 >= bVar6) * bVar66) ==
                                                             bVar66) & UNK_014ea363) + cVar67,
                                                          CONCAT12((~-((byte)((bVar64 < bVar5) *
                                                                              bVar5 | (bVar64 >=
                                                                                      bVar5) * 
                                                  bVar64) == bVar64) & UNK_014ea362) + cVar65,
                                                  CONCAT11((~-((byte)((bVar62 < bVar53) * bVar53 |
                                                                     (bVar62 >= bVar53) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar2) * bVar2 |
                                                                     (bVar61 >= bVar2) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar50
                                                          )))))));
        pbVar58 = pbVar58 + 8;
      } while (pbVar45 != pbVar58);
      if (pbVar57 != pbVar45) goto LAB_05cb6c0c;
    }
    else {
      pbVar58 = (byte *)((ulong)pbVar57 & 0xffffffffffffffe0);
      pbVar54 = (byte *)0x0;
      do {
        pbVar45 = pbVar59 + (long)pbVar54;
        bVar12 = pbVar45[1];
        bVar13 = pbVar45[2];
        bVar14 = pbVar45[3];
        bVar15 = pbVar45[4];
        bVar16 = pbVar45[5];
        bVar17 = pbVar45[6];
        bVar18 = pbVar45[7];
        bVar19 = pbVar45[8];
        bVar20 = pbVar45[9];
        bVar21 = pbVar45[10];
        bVar22 = pbVar45[0xb];
        bVar23 = pbVar45[0xc];
        bVar24 = pbVar45[0xd];
        bVar25 = pbVar45[0xe];
        bVar26 = pbVar45[0xf];
        pbVar46 = pbVar59 + 0x10 + (long)pbVar54;
        bVar27 = *pbVar46;
        bVar28 = pbVar46[1];
        bVar29 = pbVar46[2];
        bVar30 = pbVar46[3];
        bVar31 = pbVar46[4];
        bVar32 = pbVar46[5];
        bVar33 = pbVar46[6];
        bVar34 = pbVar46[7];
        bVar35 = pbVar46[8];
        bVar36 = pbVar46[9];
        bVar37 = pbVar46[10];
        bVar38 = pbVar46[0xb];
        bVar39 = pbVar46[0xc];
        bVar40 = pbVar46[0xd];
        bVar41 = pbVar46[0xe];
        bVar42 = pbVar46[0xf];
        bVar75 = *pbVar45 + DAT_014e86b0;
        bVar76 = bVar12 + DAT_014e86b0._1_1_;
        bVar77 = bVar13 + DAT_014e86b0._2_1_;
        bVar78 = bVar14 + DAT_014e86b0._3_1_;
        bVar79 = bVar15 + DAT_014e86b0._4_1_;
        bVar80 = bVar16 + DAT_014e86b0._5_1_;
        bVar81 = bVar17 + DAT_014e86b0._6_1_;
        bVar82 = bVar18 + DAT_014e86b0._7_1_;
        bVar83 = bVar19 + DAT_014e86b0._8_1_;
        bVar84 = bVar20 + DAT_014e86b0._9_1_;
        bVar85 = bVar21 + DAT_014e86b0._10_1_;
        bVar86 = bVar22 + DAT_014e86b0._11_1_;
        bVar87 = bVar23 + DAT_014e86b0._12_1_;
        bVar88 = bVar24 + DAT_014e86b0._13_1_;
        bVar89 = bVar25 + DAT_014e86b0._14_1_;
        bVar90 = bVar26 + DAT_014e86b0._15_1_;
        bVar91 = bVar27 + DAT_014e86b0;
        bVar92 = bVar28 + DAT_014e86b0._1_1_;
        bVar93 = bVar29 + DAT_014e86b0._2_1_;
        bVar94 = bVar30 + DAT_014e86b0._3_1_;
        bVar95 = bVar31 + DAT_014e86b0._4_1_;
        bVar96 = bVar32 + DAT_014e86b0._5_1_;
        bVar97 = bVar33 + DAT_014e86b0._6_1_;
        bVar98 = bVar34 + DAT_014e86b0._7_1_;
        bVar99 = bVar35 + DAT_014e86b0._8_1_;
        bVar100 = bVar36 + DAT_014e86b0._9_1_;
        bVar101 = bVar37 + DAT_014e86b0._10_1_;
        bVar102 = bVar38 + DAT_014e86b0._11_1_;
        bVar103 = bVar39 + DAT_014e86b0._12_1_;
        bVar104 = bVar40 + DAT_014e86b0._13_1_;
        bVar105 = bVar41 + DAT_014e86b0._14_1_;
        bVar106 = bVar42 + DAT_014e86b0._15_1_;
        bVar2 = DAT_014e4170;
        bVar53 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar61 = DAT_014e4170._8_1_;
        bVar62 = DAT_014e4170._9_1_;
        bVar64 = DAT_014e4170._10_1_;
        bVar66 = DAT_014e4170._11_1_;
        bVar68 = DAT_014e4170._12_1_;
        bVar70 = DAT_014e4170._13_1_;
        bVar72 = DAT_014e4170._14_1_;
        bVar74 = DAT_014e4170._15_1_;
        pbVar46 = pbVar59 + (long)pbVar54;
        *pbVar46 = (-((byte)((bVar2 < bVar75) * bVar2 | (bVar2 >= bVar75) * bVar75) == bVar75) &
                   DAT_014ead50) + *pbVar45;
        pbVar46[1] = (-((byte)((bVar53 < bVar76) * bVar53 | (bVar53 >= bVar76) * bVar76) == bVar76)
                     & UNK_014ead51) + bVar12;
        pbVar46[2] = (-((byte)((bVar5 < bVar77) * bVar5 | (bVar5 >= bVar77) * bVar77) == bVar77) &
                     UNK_014ead52) + bVar13;
        pbVar46[3] = (-((byte)((bVar6 < bVar78) * bVar6 | (bVar6 >= bVar78) * bVar78) == bVar78) &
                     UNK_014ead53) + bVar14;
        pbVar46[4] = (-((byte)((bVar7 < bVar79) * bVar7 | (bVar7 >= bVar79) * bVar79) == bVar79) &
                     UNK_014ead54) + bVar15;
        pbVar46[5] = (-((byte)((bVar8 < bVar80) * bVar8 | (bVar8 >= bVar80) * bVar80) == bVar80) &
                     UNK_014ead55) + bVar16;
        pbVar46[6] = (-((byte)((bVar9 < bVar81) * bVar9 | (bVar9 >= bVar81) * bVar81) == bVar81) &
                     UNK_014ead56) + bVar17;
        pbVar46[7] = (-((byte)((bVar10 < bVar82) * bVar10 | (bVar10 >= bVar82) * bVar82) == bVar82)
                     & UNK_014ead57) + bVar18;
        pbVar46[8] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83)
                     & UNK_014ead58) + bVar19;
        pbVar46[9] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84)
                     & UNK_014ead59) + bVar20;
        pbVar46[10] = (-((byte)((bVar64 < bVar85) * bVar64 | (bVar64 >= bVar85) * bVar85) == bVar85)
                      & UNK_014ead5a) + bVar21;
        pbVar46[0xb] = (-((byte)((bVar66 < bVar86) * bVar66 | (bVar66 >= bVar86) * bVar86) == bVar86
                         ) & UNK_014ead5b) + bVar22;
        pbVar46[0xc] = (-((byte)((bVar68 < bVar87) * bVar68 | (bVar68 >= bVar87) * bVar87) == bVar87
                         ) & UNK_014ead5c) + bVar23;
        pbVar46[0xd] = (-((byte)((bVar70 < bVar88) * bVar70 | (bVar70 >= bVar88) * bVar88) == bVar88
                         ) & UNK_014ead5d) + bVar24;
        pbVar46[0xe] = (-((byte)((bVar72 < bVar89) * bVar72 | (bVar72 >= bVar89) * bVar89) == bVar89
                         ) & UNK_014ead5e) + bVar25;
        pbVar46[0xf] = (-((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90
                         ) & UNK_014ead5f) + bVar26;
        pbVar45 = pbVar59 + 0x10 + (long)pbVar54;
        *pbVar45 = (-((byte)((bVar2 < bVar91) * bVar2 | (bVar2 >= bVar91) * bVar91) == bVar91) &
                   DAT_014ead50) + bVar27;
        pbVar45[1] = (-((byte)((bVar53 < bVar92) * bVar53 | (bVar53 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead51) + bVar28;
        pbVar45[2] = (-((byte)((bVar5 < bVar93) * bVar5 | (bVar5 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead52) + bVar29;
        pbVar45[3] = (-((byte)((bVar6 < bVar94) * bVar6 | (bVar6 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead53) + bVar30;
        pbVar45[4] = (-((byte)((bVar7 < bVar95) * bVar7 | (bVar7 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead54) + bVar31;
        pbVar45[5] = (-((byte)((bVar8 < bVar96) * bVar8 | (bVar8 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead55) + bVar32;
        pbVar45[6] = (-((byte)((bVar9 < bVar97) * bVar9 | (bVar9 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead56) + bVar33;
        pbVar45[7] = (-((byte)((bVar10 < bVar98) * bVar10 | (bVar10 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead57) + bVar34;
        pbVar45[8] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead58) + bVar35;
        pbVar45[9] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead59) + bVar36;
        pbVar45[10] = (-((byte)((bVar64 < bVar101) * bVar64 | (bVar64 >= bVar101) * bVar101) ==
                        bVar101) & UNK_014ead5a) + bVar37;
        pbVar45[0xb] = (-((byte)((bVar66 < bVar102) * bVar66 | (bVar66 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5b) + bVar38;
        pbVar45[0xc] = (-((byte)((bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5c) + bVar39;
        pbVar45[0xd] = (-((byte)((bVar70 < bVar104) * bVar70 | (bVar70 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5d) + bVar40;
        pbVar45[0xe] = (-((byte)((bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5e) + bVar41;
        pbVar45[0xf] = (-((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5f) + bVar42;
        pbVar54 = pbVar54 + 0x20;
      } while (pbVar58 != pbVar54);
      if (pbVar57 != pbVar58) {
        if (((ulong)pbVar57 & 0x18) == 0) {
          pbVar54 = pbVar58 + (long)pbVar59;
          goto LAB_05cb6c0c;
        }
        goto LAB_05cb6ba5;
      }
    }
    pbVar54 = (byte *)(ulong)((byte)uStack_148 >> 1);
  }
  if (((ulong)uStack_148 & 1) != 0) {
    pbVar54 = pbStack_140;
    pbVar52 = pbStack_138;
  }
  pbVar59 = pbVar52 + (long)pbVar54;
  pbVar57 = pbVar54;
  pbVar58 = pbVar52;
  while (((pbVar45 = pbVar59, 0 < (long)pbVar57 &&
          (pbVar58 = (byte *)func_0x0eee2ef0(pbVar58,0x3a,pbVar57), pbVar58 != (byte *)0x0)) &&
         (pbVar45 = pbVar58, *pbVar58 != 0x3a))) {
    pbVar58 = pbVar58 + 1;
    pbVar57 = pbVar59 + -(long)pbVar58;
  }
  pbVar57 = pbVar45 + -(long)pbVar52;
  if (pbVar54 < pbVar45 + -(long)pbVar52) {
    pbVar57 = pbVar54;
  }
  if (pbVar45 == pbVar59) {
    pbVar57 = pbVar54;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar57) {
LAB_05cb6fe1:
    uVar50 = func_0x04882e30();
    if (((ulong)uStack_148 & 1) != 0) {
      func_0x0412a280(pbStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
    }
    if (plVar43 != (long *)0x0) {
      (**(code **)(*plVar43 + 8))(plVar43);
    }
    func_0x0cc46730(auStack_e8);
    if ((uStack_100 & 1) != 0) {
      func_0x0412a280(uStack_f0,uStack_100 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar50);
    pcVar4 = (code *)swi(3);
    plVar43 = (long *)(*pcVar4)();
    return plVar43;
  }
  if (pbVar57 < (byte *)0x17) {
    uStack_130 = (undefined8 *)CONCAT71(uStack_130._1_7_,(char)pbVar57 * '\x02');
    pbVar59 = (byte *)((long)&uStack_130 + 1);
    if (pbVar57 != (byte *)0x0) goto LAB_05cb6d10;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar57 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar57 | 7) + 1;
    }
    pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar59 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_130 = (undefined8 *)(uVar47 | 1);
    uStack_128 = pbVar57;
    pbStack_120 = pbVar59;
LAB_05cb6d10:
    memmove(pbVar59,pbVar52,pbVar57);
  }
  pbVar59[(long)pbVar57] = 0;
  func_0x05cf8990(lVar44 + 0xe0,&uStack_130,&uStack_130);
  if (((ulong)uStack_130 & 1) != 0) {
    func_0x0412a280(pbStack_120,(ulong)uStack_130 & 0xfffffffffffffffe);
  }
  uStack_130 = (undefined8 *)0x0;
  if (((ulong)uStack_148 & 1) == 0) {
    pbStack_118 = pbStack_138;
    uStack_128 = uStack_148;
    pbStack_120 = pbStack_140;
  }
  else {
    func_0x0412e5e0(&uStack_128,pbStack_138,pbStack_140);
  }
  uStack_110 = 0;
  if (((ulong)uStack_128 & 1) == 0) {
    if ((byte)uStack_128 >> 1 != 0) goto LAB_05cb6dc0;
  }
  else if (pbStack_120 != (byte *)0x0) {
LAB_05cb6dc0:
    pbVar59 = pbStack_118;
    if (((ulong)uStack_128 & 1) == 0) {
      pbVar59 = (byte *)((long)&uStack_128 + 1);
    }
    if ((pbVar59 != (byte *)0x0) && (*pbVar59 != 0)) {
      puVar56 = (undefined8 *)0xcbf29ce484222325;
      uVar47 = func_0x0eee2e90(pbVar59);
      if (uVar47 != 0) {
        uVar55 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            puVar56 = (undefined8 *)
                      (((((((((long)puVar56 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                            (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) * 0x100000001b3
                          ^ (ulong)pbVar59[3]) * 0x100000001b3 ^ (ulong)pbVar59[4]) * 0x100000001b3
                        ^ (ulong)pbVar59[5]) * 0x100000001b3 ^ (ulong)pbVar59[6]) * 0x100000001b3 ^
                      (ulong)pbVar59[7]);
            pbVar59 = pbVar59 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        if (uVar55 != 0) {
          uVar47 = 0;
          do {
            puVar56 = (undefined8 *)((long)puVar56 * 0x100000001b3 ^ (ulong)pbVar59[uVar47]);
            uVar47 = uVar47 + 1;
          } while (uVar55 != uVar47);
        }
      }
      goto LAB_05cb6eb9;
    }
  }
  puVar56 = (undefined8 *)0x0;
LAB_05cb6eb9:
  uStack_130 = puVar56;
  puStack_108 = &uStack_130;
  lVar48 = FUN_05cf8b10(lVar44,&uStack_130,&UNK_01563a4f,&puStack_108,&uStack_149);
  plVar3 = *(long **)(lVar48 + 0x48);
  *(long **)(lVar48 + 0x48) = plVar43;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_108 = uStack_130;
  lVar48 = FUN_05cf8dc0(lVar44 + 0xf8,&puStack_108);
  if ((*(byte *)(lVar48 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar48 + 0x28),*(ulong *)(lVar48 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar48 + 0x28) = pbStack_118;
  *(byte **)(lVar48 + 0x18) = uStack_128;
  *(byte **)(lVar48 + 0x20) = pbStack_120;
  uStack_128 = (byte *)((ulong)uStack_128 & 0xffffffffffff0000);
  *(undefined8 **)(lVar48 + 0x10) = uStack_130;
  *(undefined8 *)(lVar48 + 0x30) = 0;
  if (((ulong)uStack_148 & 1) != 0) {
    func_0x0412a280(pbStack_138,(ulong)uStack_148 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_e8);
  if ((uStack_100 & 1) != 0) {
    func_0x0412a280(uStack_f0,uStack_100 & 0xfffffffffffffffe);
  }
  return plVar43;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
