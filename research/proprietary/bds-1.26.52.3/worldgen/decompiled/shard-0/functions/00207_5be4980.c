/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ce4980 (ELF vaddr 0x5be4980)
 * Label: callee-of:0x5a1f120
 * Body:  [[05ce4980, 05ce50b4] [05ce512d, 05ce5150] [05ce5154, 05ce5189]]
 * Ghidra: FUN_05ce4980
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05ce4980(long param_1,long param_2,undefined4 param_3)

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
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  long *plVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  undefined8 uVar50;
  byte bVar51;
  byte *pbVar52;
  byte *pbVar53;
  ulong uVar54;
  byte *pbVar55;
  ulong uVar56;
  byte *pbVar57;
  byte *pbVar58;
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
  undefined1 auStack_a8 [9];
  byte abStack_9f [7];
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  undefined8 uStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  undefined1 *puStack_60;
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
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    FUN_0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  auStack_a8._0_8_ = *(undefined8 *)(param_1 + 0x148);
  unique0x100003fb = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar46 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar46 = *plVar46 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,auStack_a8);
  plVar46 = stack0xffffffffffffff60;
  if (stack0xffffffffffffff60 != (long *)0x0) {
    LOCK();
    plVar4 = stack0xffffffffffffff60 + 1;
    lVar49 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*stack0xffffffffffffff60 + 0x10))(stack0xffffffffffffff60);
      func_0x0412c2d0(plVar46);
    }
  }
  plVar46 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3d0);
  if (plVar46 == (long *)0x0) {
    func_0x0eec74c0(0x3d0,0);
  }
  pbStack_98 = (byte *)0x0;
  pbStack_90 = (byte *)0x0;
  _auStack_a8 = (undefined1  [16])0x0;
  uStack_88 = 0;
  func_0x0c696710(plVar46,&uStack_58,param_3);
  if ((auStack_a8[8] & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_90,(ulong)stack0xffffffffffffff60 & 0xfffffffffffffffe);
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar49 = 0;
    lVar47 = 0;
  }
  else {
    lVar47 = func_0x0412c300();
    lVar49 = 0;
    if (lVar47 != 0) {
      lVar49 = *(long *)(param_1 + 0x138);
    }
  }
  plVar46[0x73] = lVar49;
  plVar4 = (long *)plVar46[0x74];
  plVar46[0x74] = lVar47;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar49 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  bVar60 = (*(byte *)(plVar46 + 0x1a) & 1) != 0;
  lVar49 = (long)plVar46 + 0xd1;
  if (bVar60) {
    lVar49 = plVar46[0x1c];
  }
  pbVar59 = (byte *)(ulong)(*(byte *)(plVar46 + 0x1a) >> 1);
  if (bVar60) {
    pbVar59 = (byte *)plVar46[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar59) {
    func_0x04882e30();
    goto LAB_05ce50ae;
  }
  pbVar53 = (byte *)((long)&uStack_78 + 1);
  if (pbVar59 < (byte *)0x17) {
    uStack_78 = CONCAT71(uStack_78._1_7_,(char)pbVar59 * '\x02');
    if (pbVar59 != (byte *)0x0) goto LAB_05ce4b84;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar59 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar59 | 7) + 1;
    }
    pbVar53 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar53 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_78 = uVar48 | 1;
    pbStack_70 = pbVar59;
    pbStack_68 = pbVar53;
LAB_05ce4b84:
    func_0x0eee2f00(pbVar53,lVar49,pbVar59);
  }
  pbVar55 = (byte *)((long)&uStack_78 + 1);
  pbVar53[(long)pbVar59] = 0;
  pbVar57 = (byte *)(ulong)((byte)uStack_78 >> 1);
  pbVar53 = pbStack_70;
  pbVar59 = pbStack_68;
  if ((uStack_78 & 1) == 0) {
    pbVar53 = pbVar57;
    pbVar59 = pbVar55;
  }
  if (pbVar53 != (byte *)0x0) {
    pbVar57 = pbVar59;
    if (pbVar53 < (byte *)0x8) {
LAB_05ce4cdc:
      do {
        bVar3 = *pbVar57;
        bVar51 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar51 = bVar3;
        }
        *pbVar57 = bVar51;
        pbVar57 = pbVar57 + 1;
      } while (pbVar57 != pbVar59 + (long)pbVar53);
    }
    else if (pbVar53 < (byte *)0x20) {
      pbVar52 = (byte *)0x0;
LAB_05ce4c75:
      pbVar58 = (byte *)((ulong)pbVar53 & 0xfffffffffffffff8);
      pbVar57 = pbVar59 + (long)pbVar58;
      do {
        uVar50 = *(undefined8 *)(pbVar59 + (long)pbVar52);
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
        cVar12 = (char)((ulong)uVar50 >> 0x38);
        bVar72 = cVar73 + DAT_014e9110._6_1_;
        bVar74 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar51 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar59 + (long)pbVar52) =
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
                                                  CONCAT11((~-((byte)((bVar62 < bVar51) * bVar51 |
                                                                     (bVar62 >= bVar51) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar3) * bVar3 |
                                                                     (bVar61 >= bVar3) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar50
                                                          )))))));
        pbVar52 = pbVar52 + 8;
      } while (pbVar58 != pbVar52);
      if (pbVar53 != pbVar58) goto LAB_05ce4cdc;
    }
    else {
      pbVar52 = (byte *)((ulong)pbVar53 & 0xffffffffffffffe0);
      pbVar57 = (byte *)0x0;
      do {
        pbVar58 = pbVar59 + (long)pbVar57;
        bVar13 = pbVar58[1];
        bVar14 = pbVar58[2];
        bVar15 = pbVar58[3];
        bVar16 = pbVar58[4];
        bVar17 = pbVar58[5];
        bVar18 = pbVar58[6];
        bVar19 = pbVar58[7];
        bVar20 = pbVar58[8];
        bVar21 = pbVar58[9];
        bVar22 = pbVar58[10];
        bVar23 = pbVar58[0xb];
        bVar24 = pbVar58[0xc];
        bVar25 = pbVar58[0xd];
        bVar26 = pbVar58[0xe];
        bVar27 = pbVar58[0xf];
        pbVar2 = pbVar59 + 0x10 + (long)pbVar57;
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
        bVar75 = *pbVar58 + DAT_014e86b0;
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
        bVar51 = DAT_014e4170._1_1_;
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
        pbVar2 = pbVar59 + (long)pbVar57;
        *pbVar2 = (-((byte)((bVar3 < bVar75) * bVar3 | (bVar3 >= bVar75) * bVar75) == bVar75) &
                  DAT_014ead50) + *pbVar58;
        pbVar2[1] = (-((byte)((bVar51 < bVar76) * bVar51 | (bVar51 >= bVar76) * bVar76) == bVar76) &
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
        pbVar58 = pbVar59 + 0x10 + (long)pbVar57;
        *pbVar58 = (-((byte)((bVar3 < bVar91) * bVar3 | (bVar3 >= bVar91) * bVar91) == bVar91) &
                   DAT_014ead50) + bVar28;
        pbVar58[1] = (-((byte)((bVar51 < bVar92) * bVar51 | (bVar51 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead51) + bVar29;
        pbVar58[2] = (-((byte)((bVar6 < bVar93) * bVar6 | (bVar6 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead52) + bVar30;
        pbVar58[3] = (-((byte)((bVar7 < bVar94) * bVar7 | (bVar7 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead53) + bVar31;
        pbVar58[4] = (-((byte)((bVar8 < bVar95) * bVar8 | (bVar8 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead54) + bVar32;
        pbVar58[5] = (-((byte)((bVar9 < bVar96) * bVar9 | (bVar9 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead55) + bVar33;
        pbVar58[6] = (-((byte)((bVar10 < bVar97) * bVar10 | (bVar10 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead56) + bVar34;
        pbVar58[7] = (-((byte)((bVar11 < bVar98) * bVar11 | (bVar11 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead57) + bVar35;
        pbVar58[8] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead58) + bVar36;
        pbVar58[9] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead59) + bVar37;
        pbVar58[10] = (-((byte)((bVar64 < bVar101) * bVar64 | (bVar64 >= bVar101) * bVar101) ==
                        bVar101) & UNK_014ead5a) + bVar38;
        pbVar58[0xb] = (-((byte)((bVar66 < bVar102) * bVar66 | (bVar66 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5b) + bVar39;
        pbVar58[0xc] = (-((byte)((bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5c) + bVar40;
        pbVar58[0xd] = (-((byte)((bVar70 < bVar104) * bVar70 | (bVar70 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5d) + bVar41;
        pbVar58[0xe] = (-((byte)((bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5e) + bVar42;
        pbVar58[0xf] = (-((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5f) + bVar43;
        pbVar57 = pbVar57 + 0x20;
      } while (pbVar52 != pbVar57);
      if (pbVar53 != pbVar52) {
        if (((ulong)pbVar53 & 0x18) == 0) {
          pbVar57 = pbVar52 + (long)pbVar59;
          goto LAB_05ce4cdc;
        }
        goto LAB_05ce4c75;
      }
    }
    pbVar57 = (byte *)(ulong)((byte)uStack_78 >> 1);
  }
  if ((uStack_78 & 1) != 0) {
    pbVar57 = pbStack_70;
    pbVar55 = pbStack_68;
  }
  pbVar59 = pbVar55 + (long)pbVar57;
  pbVar53 = pbVar57;
  pbVar52 = pbVar55;
  while (((pbVar58 = pbVar59, 0 < (long)pbVar53 &&
          (pbVar52 = (byte *)func_0x0eee2ef0(pbVar52,0x3a,pbVar53), pbVar52 != (byte *)0x0)) &&
         (pbVar58 = pbVar52, *pbVar52 != 0x3a))) {
    pbVar52 = pbVar52 + 1;
    pbVar53 = pbVar59 + -(long)pbVar52;
  }
  pbVar53 = pbVar58 + -(long)pbVar55;
  if (pbVar57 < pbVar58 + -(long)pbVar55) {
    pbVar53 = pbVar57;
  }
  if (pbVar58 == pbVar59) {
    pbVar53 = pbVar57;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar53) {
LAB_05ce50ae:
    uVar50 = func_0x04882e30();
    if ((uStack_78 & 1) != 0) {
      thunk_FUN_0ee326a0(pbStack_68,uStack_78 & 0xfffffffffffffffe);
    }
    if (plVar46 != (long *)0x0) {
      (**(code **)(*plVar46 + 8))(plVar46);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar50);
    pcVar5 = (code *)swi(3);
    plVar46 = (long *)(*pcVar5)();
    return plVar46;
  }
  if (pbVar53 < (byte *)0x17) {
    auStack_a8[0] = (char)pbVar53 * '\x02';
    pbVar59 = auStack_a8 + 1;
    if (pbVar53 != (byte *)0x0) goto LAB_05ce4dde;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar53 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar53 | 7) + 1;
    }
    pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar59 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    stack0xffffffffffffff60 = (long *)pbVar53;
    auStack_a8._0_8_ = uVar48 | 1;
    pbStack_98 = pbVar59;
LAB_05ce4dde:
    func_0x0eee2ee0(pbVar59,pbVar55,pbVar53);
  }
  pbVar59[(long)pbVar53] = 0;
  FUN_05cf8990(param_1 + 0xe0,auStack_a8,auStack_a8);
  if ((auStack_a8[0] & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_98,auStack_a8._0_8_ & 0xfffffffffffffffe);
  }
  auVar44._8_8_ = 0;
  auVar44._0_8_ = stack0xffffffffffffff60;
  _auStack_a8 = auVar44 << 0x40;
  if ((uStack_78 & 1) == 0) {
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uStack_78;
    _auStack_a8 = auVar45 << 0x40;
    pbStack_98 = pbStack_70;
    pbStack_90 = pbStack_68;
  }
  else {
    FUN_0412e5e0(auStack_a8 + 8,pbStack_68,pbStack_70);
  }
  uStack_88 = 0;
  if ((auStack_a8[8] & 1) == 0) {
    if (auStack_a8[8] >> 1 != 0) goto LAB_05ce4e89;
  }
  else if (pbStack_98 != (byte *)0x0) {
LAB_05ce4e89:
    pbVar59 = pbStack_90;
    if ((auStack_a8[8] & 1) == 0) {
      pbVar59 = auStack_a8 + 9;
    }
    if ((pbVar59 != (byte *)0x0) && (*pbVar59 != 0)) {
      uVar56 = 0xcbf29ce484222325;
      uVar48 = func_0x0eee2e90(pbVar59);
      if (uVar48 != 0) {
        uVar54 = (ulong)((uint)uVar48 & 7);
        if (7 < uVar48) {
          uVar48 = uVar48 & 0xfffffffffffffff8;
          do {
            uVar56 = (((((((uVar56 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                          (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) * 0x100000001b3 ^
                        (ulong)pbVar59[3]) * 0x100000001b3 ^ (ulong)pbVar59[4]) * 0x100000001b3 ^
                      (ulong)pbVar59[5]) * 0x100000001b3 ^ (ulong)pbVar59[6]) * 0x100000001b3 ^
                     (ulong)pbVar59[7];
            pbVar59 = pbVar59 + 8;
            uVar48 = uVar48 - 8;
          } while (uVar48 != 0);
        }
        if (uVar54 != 0) {
          uVar48 = 0;
          do {
            uVar56 = uVar56 * 0x100000001b3 ^ (ulong)pbVar59[uVar48];
            uVar48 = uVar48 + 1;
          } while (uVar54 != uVar48);
        }
      }
      goto LAB_05ce4f89;
    }
  }
  uVar56 = 0;
LAB_05ce4f89:
  auStack_a8._0_8_ = uVar56;
  puStack_60 = auStack_a8;
  lVar49 = func_0x05cf8b10(param_1,auStack_a8,&UNK_01563a4f,&puStack_60,&uStack_79);
  plVar4 = *(long **)(lVar49 + 0x48);
  *(long **)(lVar49 + 0x48) = plVar46;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_60 = (undefined1 *)auStack_a8._0_8_;
  lVar49 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_60);
  if ((*(byte *)(lVar49 + 0x18) & 1) != 0) {
    thunk_FUN_0ee326a0(*(undefined8 *)(lVar49 + 0x28),*(ulong *)(lVar49 + 0x18) & 0xfffffffffffffffe
                      );
  }
  *(byte **)(lVar49 + 0x28) = pbStack_90;
  *(long **)(lVar49 + 0x18) = stack0xffffffffffffff60;
  *(byte **)(lVar49 + 0x20) = pbStack_98;
  stack0xffffffffffffff60 = 0;
  *(undefined8 *)(lVar49 + 0x10) = auStack_a8._0_8_;
  *(undefined8 *)(lVar49 + 0x30) = 0;
  if ((uStack_78 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_68,uStack_78 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return plVar46;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
