/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cec150 (ELF vaddr 0x5bec150)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cec150, 05cec8c5] [05cec916, 05cec932] [05cec936, 05cec941] [05cec95a, 05cec986]]
 * Ghidra: FUN_05cec150
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_05cec150(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
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
  undefined8 *puVar44;
  long lVar45;
  byte *pbVar46;
  ulong uVar47;
  undefined8 uVar48;
  byte bVar49;
  byte *pbVar50;
  ulong uVar51;
  byte *pbVar52;
  undefined8 *puVar53;
  byte *pbVar54;
  byte *pbVar55;
  byte *pbVar56;
  bool bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  byte bVar71;
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
  undefined8 uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar60;
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_98 = *(undefined8 **)(param_1 + 0x148);
  uStack_90 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_98);
  pbVar56 = uStack_90;
  if (uStack_90 != (byte *)0x0) {
    LOCK();
    pbVar50 = uStack_90 + 8;
    lVar45 = *(long *)pbVar50;
    *(long *)pbVar50 = *(long *)pbVar50 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*(long *)uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(pbVar56);
    }
  }
  puVar44 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3c0);
  if (puVar44 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x3c0,0);
  }
  uStack_98 = (undefined8 *)CONCAT71(uStack_98._1_7_,3);
  uStack_b8 = (byte *)CONCAT71(uStack_b8._1_7_,3);
  func_0x0c692f70(puVar44,&uStack_58,param_3,&UNK_0f005a28,&uStack_98,&uStack_b8);
  *puVar44 = &UNK_0f3b7728;
  func_0x0c645cd0(puVar44 + 0x6d);
  func_0x0c693170(puVar44,&UNK_0c6932f0,0,1);
  func_0x0c6935c0(puVar44,&UNK_0c693740,0);
  puStack_68 = puVar44;
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar48 = 0;
    lVar45 = 0;
  }
  else {
    lVar45 = func_0x0412c300();
    uVar48 = 0;
    if (lVar45 != 0) {
      uVar48 = *(undefined8 *)(param_1 + 0x138);
    }
  }
  puVar44[0x73] = uVar48;
  plVar1 = (long *)puVar44[0x74];
  puVar44[0x74] = lVar45;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar45 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  puVar44 = puStack_68;
  bVar57 = (*(byte *)(puStack_68 + 0x1a) & 1) != 0;
  lVar45 = (long)puStack_68 + 0xd1;
  if (bVar57) {
    lVar45 = puStack_68[0x1c];
  }
  pbVar56 = (byte *)(ulong)(*(byte *)(puStack_68 + 0x1a) >> 1);
  if (bVar57) {
    pbVar56 = (byte *)puStack_68[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar56) {
    func_0x04882e30();
    goto LAB_05cec8bf;
  }
  pbVar50 = (byte *)((long)&uStack_b8 + 1);
  if (pbVar56 < (byte *)0x17) {
    uStack_b8 = (byte *)CONCAT71(uStack_b8._1_7_,(char)pbVar56 * '\x02');
    if (pbVar56 != (byte *)0x0) goto LAB_05cec387;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar56 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar56 | 7) + 1;
    }
    pbVar50 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar50 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_b8 = (byte *)(uVar47 | 1);
    pbStack_b0 = pbVar56;
    pbStack_a8 = pbVar50;
LAB_05cec387:
    func_0x0eee2f00(pbVar50,lVar45,pbVar56);
  }
  pbVar52 = (byte *)((long)&uStack_b8 + 1);
  pbVar50[(long)pbVar56] = 0;
  pbVar54 = (byte *)(ulong)((byte)uStack_b8 >> 1);
  pbVar50 = pbStack_b0;
  pbVar56 = pbStack_a8;
  if (((ulong)uStack_b8 & 1) == 0) {
    pbVar50 = pbVar54;
    pbVar56 = pbVar52;
  }
  if (pbVar50 != (byte *)0x0) {
    pbVar54 = pbVar56;
    if (pbVar50 < (byte *)0x8) {
LAB_05cec4dc:
      do {
        bVar4 = *pbVar54;
        bVar49 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar49 = bVar4;
        }
        *pbVar54 = bVar49;
        pbVar54 = pbVar54 + 1;
      } while (pbVar54 != pbVar56 + (long)pbVar50);
    }
    else if (pbVar50 < (byte *)0x20) {
      pbVar46 = (byte *)0x0;
LAB_05cec475:
      pbVar55 = (byte *)((ulong)pbVar50 & 0xfffffffffffffff8);
      pbVar54 = pbVar56 + (long)pbVar55;
      do {
        uVar48 = *(undefined8 *)(pbVar56 + (long)pbVar46);
        bVar58 = (char)uVar48 + DAT_014e9110;
        cVar60 = (char)((ulong)uVar48 >> 8);
        bVar59 = cVar60 + DAT_014e9110._1_1_;
        cVar62 = (char)((ulong)uVar48 >> 0x10);
        bVar61 = cVar62 + DAT_014e9110._2_1_;
        cVar64 = (char)((ulong)uVar48 >> 0x18);
        bVar63 = cVar64 + DAT_014e9110._3_1_;
        cVar66 = (char)((ulong)uVar48 >> 0x20);
        bVar65 = cVar66 + DAT_014e9110._4_1_;
        cVar68 = (char)((ulong)uVar48 >> 0x28);
        bVar67 = cVar68 + DAT_014e9110._5_1_;
        cVar70 = (char)((ulong)uVar48 >> 0x30);
        cVar12 = (char)((ulong)uVar48 >> 0x38);
        bVar69 = cVar70 + DAT_014e9110._6_1_;
        bVar71 = cVar12 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar49 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar56 + (long)pbVar46) =
             CONCAT17((~-((byte)((bVar71 < bVar11) * bVar11 | (bVar71 >= bVar11) * bVar71) == bVar71
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar69 < bVar10) * bVar10 | (bVar69 >= bVar10) * bVar69)
                                  == bVar69) & UNK_014ea366) + cVar70,
                               CONCAT15((~-((byte)((bVar67 < bVar9) * bVar9 |
                                                  (bVar67 >= bVar9) * bVar67) == bVar67) &
                                        UNK_014ea365) + cVar68,
                                        CONCAT14((~-((byte)((bVar65 < bVar8) * bVar8 |
                                                           (bVar65 >= bVar8) * bVar65) == bVar65) &
                                                 UNK_014ea364) + cVar66,
                                                 CONCAT13((~-((byte)((bVar63 < bVar7) * bVar7 |
                                                                    (bVar63 >= bVar7) * bVar63) ==
                                                             bVar63) & UNK_014ea363) + cVar64,
                                                          CONCAT12((~-((byte)((bVar61 < bVar6) *
                                                                              bVar6 | (bVar61 >=
                                                                                      bVar6) * 
                                                  bVar61) == bVar61) & UNK_014ea362) + cVar62,
                                                  CONCAT11((~-((byte)((bVar59 < bVar49) * bVar49 |
                                                                     (bVar59 >= bVar49) * bVar59) ==
                                                              bVar59) & UNK_014ea361) + cVar60,
                                                           (~-((byte)((bVar58 < bVar4) * bVar4 |
                                                                     (bVar58 >= bVar4) * bVar58) ==
                                                              bVar58) & DAT_014ea360) + (char)uVar48
                                                          )))))));
        pbVar46 = pbVar46 + 8;
      } while (pbVar55 != pbVar46);
      if (pbVar50 != pbVar55) goto LAB_05cec4dc;
    }
    else {
      pbVar46 = (byte *)((ulong)pbVar50 & 0xffffffffffffffe0);
      pbVar54 = (byte *)0x0;
      do {
        pbVar55 = pbVar56 + (long)pbVar54;
        bVar13 = pbVar55[1];
        bVar14 = pbVar55[2];
        bVar15 = pbVar55[3];
        bVar16 = pbVar55[4];
        bVar17 = pbVar55[5];
        bVar18 = pbVar55[6];
        bVar19 = pbVar55[7];
        bVar20 = pbVar55[8];
        bVar21 = pbVar55[9];
        bVar22 = pbVar55[10];
        bVar23 = pbVar55[0xb];
        bVar24 = pbVar55[0xc];
        bVar25 = pbVar55[0xd];
        bVar26 = pbVar55[0xe];
        bVar27 = pbVar55[0xf];
        pbVar3 = pbVar56 + 0x10 + (long)pbVar54;
        bVar28 = *pbVar3;
        bVar29 = pbVar3[1];
        bVar30 = pbVar3[2];
        bVar31 = pbVar3[3];
        bVar32 = pbVar3[4];
        bVar33 = pbVar3[5];
        bVar34 = pbVar3[6];
        bVar35 = pbVar3[7];
        bVar36 = pbVar3[8];
        bVar37 = pbVar3[9];
        bVar38 = pbVar3[10];
        bVar39 = pbVar3[0xb];
        bVar40 = pbVar3[0xc];
        bVar41 = pbVar3[0xd];
        bVar42 = pbVar3[0xe];
        bVar43 = pbVar3[0xf];
        bVar72 = *pbVar55 + DAT_014e86b0;
        bVar73 = bVar13 + DAT_014e86b0._1_1_;
        bVar74 = bVar14 + DAT_014e86b0._2_1_;
        bVar75 = bVar15 + DAT_014e86b0._3_1_;
        bVar76 = bVar16 + DAT_014e86b0._4_1_;
        bVar77 = bVar17 + DAT_014e86b0._5_1_;
        bVar78 = bVar18 + DAT_014e86b0._6_1_;
        bVar79 = bVar19 + DAT_014e86b0._7_1_;
        bVar80 = bVar20 + DAT_014e86b0._8_1_;
        bVar81 = bVar21 + DAT_014e86b0._9_1_;
        bVar82 = bVar22 + DAT_014e86b0._10_1_;
        bVar83 = bVar23 + DAT_014e86b0._11_1_;
        bVar84 = bVar24 + DAT_014e86b0._12_1_;
        bVar85 = bVar25 + DAT_014e86b0._13_1_;
        bVar86 = bVar26 + DAT_014e86b0._14_1_;
        bVar87 = bVar27 + DAT_014e86b0._15_1_;
        bVar88 = bVar28 + DAT_014e86b0;
        bVar89 = bVar29 + DAT_014e86b0._1_1_;
        bVar90 = bVar30 + DAT_014e86b0._2_1_;
        bVar91 = bVar31 + DAT_014e86b0._3_1_;
        bVar92 = bVar32 + DAT_014e86b0._4_1_;
        bVar93 = bVar33 + DAT_014e86b0._5_1_;
        bVar94 = bVar34 + DAT_014e86b0._6_1_;
        bVar95 = bVar35 + DAT_014e86b0._7_1_;
        bVar96 = bVar36 + DAT_014e86b0._8_1_;
        bVar97 = bVar37 + DAT_014e86b0._9_1_;
        bVar98 = bVar38 + DAT_014e86b0._10_1_;
        bVar99 = bVar39 + DAT_014e86b0._11_1_;
        bVar100 = bVar40 + DAT_014e86b0._12_1_;
        bVar101 = bVar41 + DAT_014e86b0._13_1_;
        bVar102 = bVar42 + DAT_014e86b0._14_1_;
        bVar103 = bVar43 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar49 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar58 = DAT_014e4170._8_1_;
        bVar59 = DAT_014e4170._9_1_;
        bVar61 = DAT_014e4170._10_1_;
        bVar63 = DAT_014e4170._11_1_;
        bVar65 = DAT_014e4170._12_1_;
        bVar67 = DAT_014e4170._13_1_;
        bVar69 = DAT_014e4170._14_1_;
        bVar71 = DAT_014e4170._15_1_;
        pbVar3 = pbVar56 + (long)pbVar54;
        *pbVar3 = (-((byte)((bVar4 < bVar72) * bVar4 | (bVar4 >= bVar72) * bVar72) == bVar72) &
                  DAT_014ead50) + *pbVar55;
        pbVar3[1] = (-((byte)((bVar49 < bVar73) * bVar49 | (bVar49 >= bVar73) * bVar73) == bVar73) &
                    UNK_014ead51) + bVar13;
        pbVar3[2] = (-((byte)((bVar6 < bVar74) * bVar6 | (bVar6 >= bVar74) * bVar74) == bVar74) &
                    UNK_014ead52) + bVar14;
        pbVar3[3] = (-((byte)((bVar7 < bVar75) * bVar7 | (bVar7 >= bVar75) * bVar75) == bVar75) &
                    UNK_014ead53) + bVar15;
        pbVar3[4] = (-((byte)((bVar8 < bVar76) * bVar8 | (bVar8 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead54) + bVar16;
        pbVar3[5] = (-((byte)((bVar9 < bVar77) * bVar9 | (bVar9 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead55) + bVar17;
        pbVar3[6] = (-((byte)((bVar10 < bVar78) * bVar10 | (bVar10 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead56) + bVar18;
        pbVar3[7] = (-((byte)((bVar11 < bVar79) * bVar11 | (bVar11 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead57) + bVar19;
        pbVar3[8] = (-((byte)((bVar58 < bVar80) * bVar58 | (bVar58 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead58) + bVar20;
        pbVar3[9] = (-((byte)((bVar59 < bVar81) * bVar59 | (bVar59 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead59) + bVar21;
        pbVar3[10] = (-((byte)((bVar61 < bVar82) * bVar61 | (bVar61 >= bVar82) * bVar82) == bVar82)
                     & UNK_014ead5a) + bVar22;
        pbVar3[0xb] = (-((byte)((bVar63 < bVar83) * bVar63 | (bVar63 >= bVar83) * bVar83) == bVar83)
                      & UNK_014ead5b) + bVar23;
        pbVar3[0xc] = (-((byte)((bVar65 < bVar84) * bVar65 | (bVar65 >= bVar84) * bVar84) == bVar84)
                      & UNK_014ead5c) + bVar24;
        pbVar3[0xd] = (-((byte)((bVar67 < bVar85) * bVar67 | (bVar67 >= bVar85) * bVar85) == bVar85)
                      & UNK_014ead5d) + bVar25;
        pbVar3[0xe] = (-((byte)((bVar69 < bVar86) * bVar69 | (bVar69 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5e) + bVar26;
        pbVar3[0xf] = (-((byte)((bVar71 < bVar87) * bVar71 | (bVar71 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5f) + bVar27;
        pbVar55 = pbVar56 + 0x10 + (long)pbVar54;
        *pbVar55 = (-((byte)((bVar4 < bVar88) * bVar4 | (bVar4 >= bVar88) * bVar88) == bVar88) &
                   DAT_014ead50) + bVar28;
        pbVar55[1] = (-((byte)((bVar49 < bVar89) * bVar49 | (bVar49 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead51) + bVar29;
        pbVar55[2] = (-((byte)((bVar6 < bVar90) * bVar6 | (bVar6 >= bVar90) * bVar90) == bVar90) &
                     UNK_014ead52) + bVar30;
        pbVar55[3] = (-((byte)((bVar7 < bVar91) * bVar7 | (bVar7 >= bVar91) * bVar91) == bVar91) &
                     UNK_014ead53) + bVar31;
        pbVar55[4] = (-((byte)((bVar8 < bVar92) * bVar8 | (bVar8 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead54) + bVar32;
        pbVar55[5] = (-((byte)((bVar9 < bVar93) * bVar9 | (bVar9 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead55) + bVar33;
        pbVar55[6] = (-((byte)((bVar10 < bVar94) * bVar10 | (bVar10 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead56) + bVar34;
        pbVar55[7] = (-((byte)((bVar11 < bVar95) * bVar11 | (bVar11 >= bVar95) * bVar95) == bVar95)
                     & UNK_014ead57) + bVar35;
        pbVar55[8] = (-((byte)((bVar58 < bVar96) * bVar58 | (bVar58 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead58) + bVar36;
        pbVar55[9] = (-((byte)((bVar59 < bVar97) * bVar59 | (bVar59 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead59) + bVar37;
        pbVar55[10] = (-((byte)((bVar61 < bVar98) * bVar61 | (bVar61 >= bVar98) * bVar98) == bVar98)
                      & UNK_014ead5a) + bVar38;
        pbVar55[0xb] = (-((byte)((bVar63 < bVar99) * bVar63 | (bVar63 >= bVar99) * bVar99) == bVar99
                         ) & UNK_014ead5b) + bVar39;
        pbVar55[0xc] = (-((byte)((bVar65 < bVar100) * bVar65 | (bVar65 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead5c) + bVar40;
        pbVar55[0xd] = (-((byte)((bVar67 < bVar101) * bVar67 | (bVar67 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5d) + bVar41;
        pbVar55[0xe] = (-((byte)((bVar69 < bVar102) * bVar69 | (bVar69 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5e) + bVar42;
        pbVar55[0xf] = (-((byte)((bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5f) + bVar43;
        pbVar54 = pbVar54 + 0x20;
      } while (pbVar46 != pbVar54);
      if (pbVar50 != pbVar46) {
        if (((ulong)pbVar50 & 0x18) == 0) {
          pbVar54 = pbVar46 + (long)pbVar56;
          goto LAB_05cec4dc;
        }
        goto LAB_05cec475;
      }
    }
    pbVar54 = (byte *)(ulong)((byte)uStack_b8 >> 1);
  }
  if (((ulong)uStack_b8 & 1) != 0) {
    pbVar54 = pbStack_b0;
    pbVar52 = pbStack_a8;
  }
  pbVar56 = pbVar52 + (long)pbVar54;
  pbVar50 = pbVar54;
  pbVar46 = pbVar52;
  while (((pbVar55 = pbVar56, 0 < (long)pbVar50 &&
          (pbVar46 = (byte *)memchr(pbVar46,0x3a,pbVar50), pbVar46 != (byte *)0x0)) &&
         (pbVar55 = pbVar46, *pbVar46 != 0x3a))) {
    pbVar46 = pbVar46 + 1;
    pbVar50 = pbVar56 + -(long)pbVar46;
  }
  pbVar50 = pbVar55 + -(long)pbVar52;
  if (pbVar54 < pbVar55 + -(long)pbVar52) {
    pbVar50 = pbVar54;
  }
  if (pbVar55 == pbVar56) {
    pbVar50 = pbVar54;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar50) {
LAB_05cec8bf:
    uVar48 = func_0x04882e30();
    if (((ulong)uStack_b8 & 1) != 0) {
      func_0x0412a280(pbStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
    }
    func_0x05cfe460(&puStack_68);
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar48);
    pcVar5 = (code *)swi(3);
    puVar44 = (undefined8 *)(*pcVar5)();
    return puVar44;
  }
  if (pbVar50 < (byte *)0x17) {
    uStack_98 = (undefined8 *)CONCAT71(uStack_98._1_7_,(char)pbVar50 * '\x02');
    pbVar56 = (byte *)((long)&uStack_98 + 1);
    if (pbVar50 != (byte *)0x0) goto LAB_05cec5e0;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar50 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar50 | 7) + 1;
    }
    pbVar56 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar56 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_98 = (undefined8 *)(uVar47 | 1);
    uStack_90 = pbVar50;
    pbStack_88 = pbVar56;
LAB_05cec5e0:
    func_0x0eee2ee0(pbVar56,pbVar52,pbVar50);
  }
  pbVar56[(long)pbVar50] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_98,&uStack_98);
  if (((ulong)uStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
  }
  uStack_98 = (undefined8 *)0x0;
  if (((ulong)uStack_b8 & 1) == 0) {
    pbStack_80 = pbStack_a8;
    uStack_90 = uStack_b8;
    pbStack_88 = pbStack_b0;
  }
  else {
    func_0x0412e5e0(&uStack_90,pbStack_a8,pbStack_b0);
  }
  uStack_78 = 0;
  if (((ulong)uStack_90 & 1) == 0) {
    if ((byte)uStack_90 >> 1 != 0) goto LAB_05cec68e;
  }
  else if (pbStack_88 != (byte *)0x0) {
LAB_05cec68e:
    pbVar56 = pbStack_80;
    if (((ulong)uStack_90 & 1) == 0) {
      pbVar56 = (byte *)((long)&uStack_90 + 1);
    }
    if ((pbVar56 != (byte *)0x0) && (*pbVar56 != 0)) {
      puVar53 = (undefined8 *)0xcbf29ce484222325;
      uVar47 = func_0x0eee2e90(pbVar56);
      if (uVar47 != 0) {
        uVar51 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            puVar53 = (undefined8 *)
                      (((((((((long)puVar53 * 0x100000001b3 ^ (ulong)*pbVar56) * 0x100000001b3 ^
                            (ulong)pbVar56[1]) * 0x100000001b3 ^ (ulong)pbVar56[2]) * 0x100000001b3
                          ^ (ulong)pbVar56[3]) * 0x100000001b3 ^ (ulong)pbVar56[4]) * 0x100000001b3
                        ^ (ulong)pbVar56[5]) * 0x100000001b3 ^ (ulong)pbVar56[6]) * 0x100000001b3 ^
                      (ulong)pbVar56[7]);
            pbVar56 = pbVar56 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        if (uVar51 != 0) {
          uVar47 = 0;
          do {
            puVar53 = (undefined8 *)((long)puVar53 * 0x100000001b3 ^ (ulong)pbVar56[uVar47]);
            uVar47 = uVar47 + 1;
          } while (uVar51 != uVar47);
        }
      }
      goto LAB_05cec789;
    }
  }
  puVar53 = (undefined8 *)0x0;
LAB_05cec789:
  uStack_98 = puVar53;
  puStack_60 = &uStack_98;
  lVar45 = func_0x05cf8b10(param_1,&uStack_98,&UNK_01563a4f,&puStack_60,&uStack_99);
  puVar53 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  plVar1 = *(long **)(lVar45 + 0x48);
  *(undefined8 **)(lVar45 + 0x48) = puVar53;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_60 = uStack_98;
  lVar45 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_60);
  if ((*(byte *)(lVar45 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar45 + 0x28),*(ulong *)(lVar45 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar45 + 0x28) = pbStack_80;
  *(byte **)(lVar45 + 0x18) = uStack_90;
  *(byte **)(lVar45 + 0x20) = pbStack_88;
  uStack_90 = (byte *)((ulong)uStack_90 & 0xffffffffffff0000);
  *(undefined8 **)(lVar45 + 0x10) = uStack_98;
  *(undefined8 *)(lVar45 + 0x30) = 0;
  if (((ulong)uStack_b8 & 1) != 0) {
    func_0x0412a280(pbStack_a8,(ulong)uStack_b8 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return puVar44;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
