/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ceb100 (ELF vaddr 0x5beb100)
 * Label: callee-of:0x5a1f120
 * Body:  [[05ceb100, 05ceb817] [05ceb875, 05ceb893] [05ceb897, 05ceb8cd]]
 * Ghidra: FUN_05ceb100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05ceb100(long param_1,long param_2,undefined4 param_3)

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
  long lVar44;
  long lVar45;
  byte *pbVar46;
  ulong uVar47;
  long lVar48;
  undefined8 uVar49;
  byte bVar50;
  byte *pbVar51;
  ulong uVar52;
  byte *pbVar53;
  undefined8 *puVar54;
  byte *pbVar55;
  byte *pbVar56;
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
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  long lStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar61;
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  
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
  FUN_0cc46680(auStack_40,&uStack_98);
  pbVar57 = uStack_90;
  if (uStack_90 != (byte *)0x0) {
    LOCK();
    pbVar51 = uStack_90 + 8;
    lVar44 = *(long *)pbVar51;
    *(long *)pbVar51 = *(long *)pbVar51 + -1;
    UNLOCK();
    if (lVar44 == 0) {
      (**(code **)(*(long *)uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(pbVar57);
    }
  }
  lVar44 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (lVar44 == 0) {
    func_0x0eec74c0(0x3b0,0);
  }
  func_0x0c65f8d0(lVar44,&uStack_58,param_3);
  lStack_68 = lVar44;
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar49 = 0;
    lVar45 = 0;
  }
  else {
    lVar45 = func_0x0412c300();
    uVar49 = 0;
    if (lVar45 != 0) {
      uVar49 = *(undefined8 *)(param_1 + 0x138);
    }
  }
  *(undefined8 *)(lVar44 + 0x398) = uVar49;
  plVar1 = *(long **)(lVar44 + 0x3a0);
  *(long *)(lVar44 + 0x3a0) = lVar45;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar44 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar44 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  lVar44 = lStack_68;
  bVar58 = (*(byte *)(lStack_68 + 0xd0) & 1) != 0;
  lVar45 = lStack_68 + 0xd1;
  if (bVar58) {
    lVar45 = *(long *)(lStack_68 + 0xe0);
  }
  pbVar57 = (byte *)(ulong)(*(byte *)(lStack_68 + 0xd0) >> 1);
  if (bVar58) {
    pbVar57 = *(byte **)(lStack_68 + 0xd8);
  }
  if ((byte *)0xfffffffffffffff7 < pbVar57) {
    func_0x04882e30();
    goto LAB_05ceb811;
  }
  pbVar51 = (byte *)((long)&uStack_b0 + 1);
  if (pbVar57 < (byte *)0x17) {
    uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,(char)pbVar57 * '\x02');
    if (pbVar57 != (byte *)0x0) goto LAB_05ceb2dc;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar57 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar57 | 7) + 1;
    }
    pbVar51 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar51 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_b0 = (byte *)(uVar47 | 1);
    pbStack_a8 = pbVar57;
    pbStack_a0 = pbVar51;
LAB_05ceb2dc:
    memcpy(pbVar51,lVar45,pbVar57);
  }
  pbVar53 = (byte *)((long)&uStack_b0 + 1);
  pbVar51[(long)pbVar57] = 0;
  pbVar55 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  pbVar51 = pbStack_a8;
  pbVar57 = pbStack_a0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbVar51 = pbVar55;
    pbVar57 = pbVar53;
  }
  if (pbVar51 != (byte *)0x0) {
    pbVar55 = pbVar57;
    if (pbVar51 < (byte *)0x8) {
LAB_05ceb42c:
      do {
        bVar4 = *pbVar55;
        bVar50 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar50 = bVar4;
        }
        *pbVar55 = bVar50;
        pbVar55 = pbVar55 + 1;
      } while (pbVar55 != pbVar57 + (long)pbVar51);
    }
    else if (pbVar51 < (byte *)0x20) {
      pbVar46 = (byte *)0x0;
LAB_05ceb3c5:
      pbVar56 = (byte *)((ulong)pbVar51 & 0xfffffffffffffff8);
      pbVar55 = pbVar57 + (long)pbVar56;
      do {
        uVar49 = *(undefined8 *)(pbVar57 + (long)pbVar46);
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
        cVar12 = (char)((ulong)uVar49 >> 0x38);
        bVar70 = cVar71 + DAT_014e9110._6_1_;
        bVar72 = cVar12 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar50 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar57 + (long)pbVar46) =
             CONCAT17((~-((byte)((bVar72 < bVar11) * bVar11 | (bVar72 >= bVar11) * bVar72) == bVar72
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar70 < bVar10) * bVar10 | (bVar70 >= bVar10) * bVar70)
                                  == bVar70) & UNK_014ea366) + cVar71,
                               CONCAT15((~-((byte)((bVar68 < bVar9) * bVar9 |
                                                  (bVar68 >= bVar9) * bVar68) == bVar68) &
                                        UNK_014ea365) + cVar69,
                                        CONCAT14((~-((byte)((bVar66 < bVar8) * bVar8 |
                                                           (bVar66 >= bVar8) * bVar66) == bVar66) &
                                                 UNK_014ea364) + cVar67,
                                                 CONCAT13((~-((byte)((bVar64 < bVar7) * bVar7 |
                                                                    (bVar64 >= bVar7) * bVar64) ==
                                                             bVar64) & UNK_014ea363) + cVar65,
                                                          CONCAT12((~-((byte)((bVar62 < bVar6) *
                                                                              bVar6 | (bVar62 >=
                                                                                      bVar6) * 
                                                  bVar62) == bVar62) & UNK_014ea362) + cVar63,
                                                  CONCAT11((~-((byte)((bVar60 < bVar50) * bVar50 |
                                                                     (bVar60 >= bVar50) * bVar60) ==
                                                              bVar60) & UNK_014ea361) + cVar61,
                                                           (~-((byte)((bVar59 < bVar4) * bVar4 |
                                                                     (bVar59 >= bVar4) * bVar59) ==
                                                              bVar59) & DAT_014ea360) + (char)uVar49
                                                          )))))));
        pbVar46 = pbVar46 + 8;
      } while (pbVar56 != pbVar46);
      if (pbVar51 != pbVar56) goto LAB_05ceb42c;
    }
    else {
      pbVar46 = (byte *)((ulong)pbVar51 & 0xffffffffffffffe0);
      pbVar55 = (byte *)0x0;
      do {
        pbVar56 = pbVar57 + (long)pbVar55;
        bVar13 = pbVar56[1];
        bVar14 = pbVar56[2];
        bVar15 = pbVar56[3];
        bVar16 = pbVar56[4];
        bVar17 = pbVar56[5];
        bVar18 = pbVar56[6];
        bVar19 = pbVar56[7];
        bVar20 = pbVar56[8];
        bVar21 = pbVar56[9];
        bVar22 = pbVar56[10];
        bVar23 = pbVar56[0xb];
        bVar24 = pbVar56[0xc];
        bVar25 = pbVar56[0xd];
        bVar26 = pbVar56[0xe];
        bVar27 = pbVar56[0xf];
        pbVar3 = pbVar57 + 0x10 + (long)pbVar55;
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
        bVar73 = *pbVar56 + DAT_014e86b0;
        bVar74 = bVar13 + DAT_014e86b0._1_1_;
        bVar75 = bVar14 + DAT_014e86b0._2_1_;
        bVar76 = bVar15 + DAT_014e86b0._3_1_;
        bVar77 = bVar16 + DAT_014e86b0._4_1_;
        bVar78 = bVar17 + DAT_014e86b0._5_1_;
        bVar79 = bVar18 + DAT_014e86b0._6_1_;
        bVar80 = bVar19 + DAT_014e86b0._7_1_;
        bVar81 = bVar20 + DAT_014e86b0._8_1_;
        bVar82 = bVar21 + DAT_014e86b0._9_1_;
        bVar83 = bVar22 + DAT_014e86b0._10_1_;
        bVar84 = bVar23 + DAT_014e86b0._11_1_;
        bVar85 = bVar24 + DAT_014e86b0._12_1_;
        bVar86 = bVar25 + DAT_014e86b0._13_1_;
        bVar87 = bVar26 + DAT_014e86b0._14_1_;
        bVar88 = bVar27 + DAT_014e86b0._15_1_;
        bVar89 = bVar28 + DAT_014e86b0;
        bVar90 = bVar29 + DAT_014e86b0._1_1_;
        bVar91 = bVar30 + DAT_014e86b0._2_1_;
        bVar92 = bVar31 + DAT_014e86b0._3_1_;
        bVar93 = bVar32 + DAT_014e86b0._4_1_;
        bVar94 = bVar33 + DAT_014e86b0._5_1_;
        bVar95 = bVar34 + DAT_014e86b0._6_1_;
        bVar96 = bVar35 + DAT_014e86b0._7_1_;
        bVar97 = bVar36 + DAT_014e86b0._8_1_;
        bVar98 = bVar37 + DAT_014e86b0._9_1_;
        bVar99 = bVar38 + DAT_014e86b0._10_1_;
        bVar100 = bVar39 + DAT_014e86b0._11_1_;
        bVar101 = bVar40 + DAT_014e86b0._12_1_;
        bVar102 = bVar41 + DAT_014e86b0._13_1_;
        bVar103 = bVar42 + DAT_014e86b0._14_1_;
        bVar104 = bVar43 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar50 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar59 = DAT_014e4170._8_1_;
        bVar60 = DAT_014e4170._9_1_;
        bVar62 = DAT_014e4170._10_1_;
        bVar64 = DAT_014e4170._11_1_;
        bVar66 = DAT_014e4170._12_1_;
        bVar68 = DAT_014e4170._13_1_;
        bVar70 = DAT_014e4170._14_1_;
        bVar72 = DAT_014e4170._15_1_;
        pbVar3 = pbVar57 + (long)pbVar55;
        *pbVar3 = (-((byte)((bVar4 < bVar73) * bVar4 | (bVar4 >= bVar73) * bVar73) == bVar73) &
                  DAT_014ead50) + *pbVar56;
        pbVar3[1] = (-((byte)((bVar50 < bVar74) * bVar50 | (bVar50 >= bVar74) * bVar74) == bVar74) &
                    UNK_014ead51) + bVar13;
        pbVar3[2] = (-((byte)((bVar6 < bVar75) * bVar6 | (bVar6 >= bVar75) * bVar75) == bVar75) &
                    UNK_014ead52) + bVar14;
        pbVar3[3] = (-((byte)((bVar7 < bVar76) * bVar7 | (bVar7 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead53) + bVar15;
        pbVar3[4] = (-((byte)((bVar8 < bVar77) * bVar8 | (bVar8 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead54) + bVar16;
        pbVar3[5] = (-((byte)((bVar9 < bVar78) * bVar9 | (bVar9 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead55) + bVar17;
        pbVar3[6] = (-((byte)((bVar10 < bVar79) * bVar10 | (bVar10 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead56) + bVar18;
        pbVar3[7] = (-((byte)((bVar11 < bVar80) * bVar11 | (bVar11 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead57) + bVar19;
        pbVar3[8] = (-((byte)((bVar59 < bVar81) * bVar59 | (bVar59 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead58) + bVar20;
        pbVar3[9] = (-((byte)((bVar60 < bVar82) * bVar60 | (bVar60 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead59) + bVar21;
        pbVar3[10] = (-((byte)((bVar62 < bVar83) * bVar62 | (bVar62 >= bVar83) * bVar83) == bVar83)
                     & UNK_014ead5a) + bVar22;
        pbVar3[0xb] = (-((byte)((bVar64 < bVar84) * bVar64 | (bVar64 >= bVar84) * bVar84) == bVar84)
                      & UNK_014ead5b) + bVar23;
        pbVar3[0xc] = (-((byte)((bVar66 < bVar85) * bVar66 | (bVar66 >= bVar85) * bVar85) == bVar85)
                      & UNK_014ead5c) + bVar24;
        pbVar3[0xd] = (-((byte)((bVar68 < bVar86) * bVar68 | (bVar68 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5d) + bVar25;
        pbVar3[0xe] = (-((byte)((bVar70 < bVar87) * bVar70 | (bVar70 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5e) + bVar26;
        pbVar3[0xf] = (-((byte)((bVar72 < bVar88) * bVar72 | (bVar72 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5f) + bVar27;
        pbVar56 = pbVar57 + 0x10 + (long)pbVar55;
        *pbVar56 = (-((byte)((bVar4 < bVar89) * bVar4 | (bVar4 >= bVar89) * bVar89) == bVar89) &
                   DAT_014ead50) + bVar28;
        pbVar56[1] = (-((byte)((bVar50 < bVar90) * bVar50 | (bVar50 >= bVar90) * bVar90) == bVar90)
                     & UNK_014ead51) + bVar29;
        pbVar56[2] = (-((byte)((bVar6 < bVar91) * bVar6 | (bVar6 >= bVar91) * bVar91) == bVar91) &
                     UNK_014ead52) + bVar30;
        pbVar56[3] = (-((byte)((bVar7 < bVar92) * bVar7 | (bVar7 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead53) + bVar31;
        pbVar56[4] = (-((byte)((bVar8 < bVar93) * bVar8 | (bVar8 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead54) + bVar32;
        pbVar56[5] = (-((byte)((bVar9 < bVar94) * bVar9 | (bVar9 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead55) + bVar33;
        pbVar56[6] = (-((byte)((bVar10 < bVar95) * bVar10 | (bVar10 >= bVar95) * bVar95) == bVar95)
                     & UNK_014ead56) + bVar34;
        pbVar56[7] = (-((byte)((bVar11 < bVar96) * bVar11 | (bVar11 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead57) + bVar35;
        pbVar56[8] = (-((byte)((bVar59 < bVar97) * bVar59 | (bVar59 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead58) + bVar36;
        pbVar56[9] = (-((byte)((bVar60 < bVar98) * bVar60 | (bVar60 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead59) + bVar37;
        pbVar56[10] = (-((byte)((bVar62 < bVar99) * bVar62 | (bVar62 >= bVar99) * bVar99) == bVar99)
                      & UNK_014ead5a) + bVar38;
        pbVar56[0xb] = (-((byte)((bVar64 < bVar100) * bVar64 | (bVar64 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead5b) + bVar39;
        pbVar56[0xc] = (-((byte)((bVar66 < bVar101) * bVar66 | (bVar66 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5c) + bVar40;
        pbVar56[0xd] = (-((byte)((bVar68 < bVar102) * bVar68 | (bVar68 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5d) + bVar41;
        pbVar56[0xe] = (-((byte)((bVar70 < bVar103) * bVar70 | (bVar70 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5e) + bVar42;
        pbVar56[0xf] = (-((byte)((bVar72 < bVar104) * bVar72 | (bVar72 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5f) + bVar43;
        pbVar55 = pbVar55 + 0x20;
      } while (pbVar46 != pbVar55);
      if (pbVar51 != pbVar46) {
        if (((ulong)pbVar51 & 0x18) == 0) {
          pbVar55 = pbVar46 + (long)pbVar57;
          goto LAB_05ceb42c;
        }
        goto LAB_05ceb3c5;
      }
    }
    pbVar55 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  }
  if (((ulong)uStack_b0 & 1) != 0) {
    pbVar55 = pbStack_a8;
    pbVar53 = pbStack_a0;
  }
  pbVar57 = pbVar53 + (long)pbVar55;
  pbVar51 = pbVar55;
  pbVar46 = pbVar53;
  while (((pbVar56 = pbVar57, 0 < (long)pbVar51 &&
          (pbVar46 = (byte *)func_0x0eee2ef0(pbVar46,0x3a,pbVar51), pbVar46 != (byte *)0x0)) &&
         (pbVar56 = pbVar46, *pbVar46 != 0x3a))) {
    pbVar46 = pbVar46 + 1;
    pbVar51 = pbVar57 + -(long)pbVar46;
  }
  pbVar51 = pbVar56 + -(long)pbVar53;
  if (pbVar55 < pbVar56 + -(long)pbVar53) {
    pbVar51 = pbVar55;
  }
  if (pbVar56 == pbVar57) {
    pbVar51 = pbVar55;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar51) {
LAB_05ceb811:
    uVar49 = func_0x04882e30();
    if (((ulong)uStack_b0 & 1) != 0) {
      func_0x0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
    }
    func_0x05cfe370(&lStack_68);
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    _Unwind_Resume(uVar49);
    pcVar5 = (code *)swi(3);
    lVar44 = (*pcVar5)();
    return lVar44;
  }
  if (pbVar51 < (byte *)0x17) {
    uStack_98 = (undefined8 *)CONCAT71(uStack_98._1_7_,(char)pbVar51 * '\x02');
    pbVar57 = (byte *)((long)&uStack_98 + 1);
    if (pbVar51 != (byte *)0x0) goto LAB_05ceb530;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar51 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar51 | 7) + 1;
    }
    pbVar57 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar57 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_98 = (undefined8 *)(uVar47 | 1);
    uStack_90 = pbVar51;
    pbStack_88 = pbVar57;
LAB_05ceb530:
    func_0x0eee2ee0(pbVar57,pbVar53,pbVar51);
  }
  pbVar57[(long)pbVar51] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_98,&uStack_98);
  if (((ulong)uStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
  }
  uStack_98 = (undefined8 *)0x0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbStack_80 = pbStack_a0;
    uStack_90 = uStack_b0;
    pbStack_88 = pbStack_a8;
  }
  else {
    func_0x0412e5e0(&uStack_90,pbStack_a0,pbStack_a8);
  }
  uStack_78 = 0;
  if (((ulong)uStack_90 & 1) == 0) {
    if ((byte)uStack_90 >> 1 != 0) goto LAB_05ceb5e0;
  }
  else if (pbStack_88 != (byte *)0x0) {
LAB_05ceb5e0:
    pbVar57 = pbStack_80;
    if (((ulong)uStack_90 & 1) == 0) {
      pbVar57 = (byte *)((long)&uStack_90 + 1);
    }
    if ((pbVar57 != (byte *)0x0) && (*pbVar57 != 0)) {
      puVar54 = (undefined8 *)0xcbf29ce484222325;
      uVar47 = func_0x0eee2e90(pbVar57);
      if (uVar47 != 0) {
        uVar52 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            puVar54 = (undefined8 *)
                      (((((((((long)puVar54 * 0x100000001b3 ^ (ulong)*pbVar57) * 0x100000001b3 ^
                            (ulong)pbVar57[1]) * 0x100000001b3 ^ (ulong)pbVar57[2]) * 0x100000001b3
                          ^ (ulong)pbVar57[3]) * 0x100000001b3 ^ (ulong)pbVar57[4]) * 0x100000001b3
                        ^ (ulong)pbVar57[5]) * 0x100000001b3 ^ (ulong)pbVar57[6]) * 0x100000001b3 ^
                      (ulong)pbVar57[7]);
            pbVar57 = pbVar57 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        if (uVar52 != 0) {
          uVar47 = 0;
          do {
            puVar54 = (undefined8 *)((long)puVar54 * 0x100000001b3 ^ (ulong)pbVar57[uVar47]);
            uVar47 = uVar47 + 1;
          } while (uVar52 != uVar47);
        }
      }
      goto LAB_05ceb6d9;
    }
  }
  puVar54 = (undefined8 *)0x0;
LAB_05ceb6d9:
  uStack_98 = puVar54;
  puStack_60 = &uStack_98;
  lVar48 = func_0x05cf8b10(param_1,&uStack_98,&UNK_01563a4f,&puStack_60,&uStack_b1);
  lVar45 = lStack_68;
  lStack_68 = 0;
  plVar1 = *(long **)(lVar48 + 0x48);
  *(long *)(lVar48 + 0x48) = lVar45;
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
  if (((ulong)uStack_b0 & 1) != 0) {
    func_0x0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return lVar44;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
