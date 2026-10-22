/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cdba20 (ELF vaddr 0x5bdba20)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cdba20, 05cdc1a7] [05cdc217, 05cdc23a] [05cdc23e, 05cdc273]]
 * Ghidra: FUN_05cdba20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05cdba20(long param_1,long param_2,undefined4 param_3,long param_4,long *param_5)

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
  long lVar47;
  undefined8 uVar48;
  byte bVar49;
  ulong uVar50;
  ulong uVar51;
  byte *pbVar52;
  undefined8 *puVar53;
  ulong uVar54;
  byte *pbVar55;
  bool bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar60;
  byte bVar62;
  byte bVar64;
  byte bVar66;
  byte bVar68;
  byte bVar70;
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
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  ulong uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar59;
  char cVar61;
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    FUN_0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_88 = *(undefined8 **)(param_1 + 0x148);
  uStack_80 = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar43 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar43 = *plVar43 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_88);
  plVar43 = uStack_80;
  if (uStack_80 != (long *)0x0) {
    LOCK();
    plVar3 = uStack_80 + 1;
    lVar47 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar47 == 0) {
      (**(code **)(*uStack_80 + 0x10))(uStack_80);
      func_0x0412c2d0(plVar43);
    }
  }
  plVar43 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3d8);
  if (plVar43 == (long *)0x0) {
    func_0x0eec74c0(0x3d8,0);
  }
  uStack_88 = (undefined8 *)*param_5;
  uStack_80 = (long *)param_5[1];
  uStack_78 = param_5[2];
  pbStack_70 = (byte *)param_5[3];
  func_0x0c6c7010(plVar43,&uStack_58,param_3);
  *plVar43 = (long)&UNK_0f39e0d0;
  plVar43[0x75] = param_4;
  plVar43[0x76] = (long)uStack_88;
  plVar43[0x77] = (long)uStack_80;
  plVar43[0x78] = uStack_78;
  plVar43[0x79] = (long)pbStack_70;
  *(undefined1 *)(plVar43 + 0x7a) = 1;
  FUN_0c640f60(plVar43,&UNK_0c6410e0,0);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar47 = 0;
    lVar44 = 0;
  }
  else {
    lVar44 = func_0x0412c300();
    lVar47 = 0;
    if (lVar44 != 0) {
      lVar47 = *(long *)(param_1 + 0x138);
    }
  }
  plVar43[0x73] = lVar47;
  plVar3 = (long *)plVar43[0x74];
  plVar43[0x74] = lVar44;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar47 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar47 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  bVar56 = (*(byte *)(plVar43 + 0x1a) & 1) != 0;
  lVar47 = (long)plVar43 + 0xd1;
  if (bVar56) {
    lVar47 = plVar43[0x1c];
  }
  uVar51 = (ulong)(*(byte *)(plVar43 + 0x1a) >> 1);
  if (bVar56) {
    uVar51 = plVar43[0x1b];
  }
  if (0xfffffffffffffff7 < uVar51) {
    func_0x04882e30();
    goto LAB_05cdc1a1;
  }
  pbVar55 = (byte *)((long)&uStack_a0 + 1);
  if (uVar51 < 0x17) {
    uStack_a0 = CONCAT71(uStack_a0._1_7_,(char)uVar51 * '\x02');
    if (uVar51 != 0) goto LAB_05cdbc79;
  }
  else {
    uVar50 = 0x1a;
    if ((uVar51 | 7) != 0x17) {
      uVar50 = (uVar51 | 7) + 1;
    }
    pbVar55 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar50);
    if (pbVar55 == (byte *)0x0) {
      func_0x0eec74c0(uVar50,0);
    }
    uStack_a0 = uVar50 | 1;
    uStack_98 = uVar51;
    pbStack_90 = pbVar55;
LAB_05cdbc79:
    func_0x0eee2f00(pbVar55,lVar47,uVar51);
  }
  pbVar52 = (byte *)((long)&uStack_a0 + 1);
  pbVar55[uVar51] = 0;
  uVar50 = (ulong)((byte)uStack_a0 >> 1);
  uVar51 = uStack_98;
  pbVar55 = pbStack_90;
  if ((uStack_a0 & 1) == 0) {
    uVar51 = uVar50;
    pbVar55 = pbVar52;
  }
  if (uVar51 != 0) {
    pbVar45 = pbVar55;
    if (uVar51 < 8) {
LAB_05cdbdcc:
      do {
        bVar2 = *pbVar45;
        bVar49 = bVar2 + 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar49 = bVar2;
        }
        *pbVar45 = bVar49;
        pbVar45 = pbVar45 + 1;
      } while (pbVar45 != pbVar55 + uVar51);
    }
    else if (uVar51 < 0x20) {
      uVar50 = 0;
LAB_05cdbd65:
      uVar54 = uVar51 & 0xfffffffffffffff8;
      pbVar45 = pbVar55 + uVar54;
      do {
        uVar48 = *(undefined8 *)(pbVar55 + uVar50);
        bVar57 = (char)uVar48 + DAT_014e9110;
        cVar59 = (char)((ulong)uVar48 >> 8);
        bVar58 = cVar59 + DAT_014e9110._1_1_;
        cVar61 = (char)((ulong)uVar48 >> 0x10);
        bVar60 = cVar61 + DAT_014e9110._2_1_;
        cVar63 = (char)((ulong)uVar48 >> 0x18);
        bVar62 = cVar63 + DAT_014e9110._3_1_;
        cVar65 = (char)((ulong)uVar48 >> 0x20);
        bVar64 = cVar65 + DAT_014e9110._4_1_;
        cVar67 = (char)((ulong)uVar48 >> 0x28);
        bVar66 = cVar67 + DAT_014e9110._5_1_;
        cVar69 = (char)((ulong)uVar48 >> 0x30);
        cVar11 = (char)((ulong)uVar48 >> 0x38);
        bVar68 = cVar69 + DAT_014e9110._6_1_;
        bVar70 = cVar11 + DAT_014e9110._7_1_;
        bVar2 = DAT_014e8cb0;
        bVar49 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar55 + uVar50) =
             CONCAT17((~-((byte)((bVar70 < bVar10) * bVar10 | (bVar70 >= bVar10) * bVar70) == bVar70
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar68 < bVar9) * bVar9 | (bVar68 >= bVar9) * bVar68) ==
                                  bVar68) & UNK_014ea366) + cVar69,
                               CONCAT15((~-((byte)((bVar66 < bVar8) * bVar8 |
                                                  (bVar66 >= bVar8) * bVar66) == bVar66) &
                                        UNK_014ea365) + cVar67,
                                        CONCAT14((~-((byte)((bVar64 < bVar7) * bVar7 |
                                                           (bVar64 >= bVar7) * bVar64) == bVar64) &
                                                 UNK_014ea364) + cVar65,
                                                 CONCAT13((~-((byte)((bVar62 < bVar6) * bVar6 |
                                                                    (bVar62 >= bVar6) * bVar62) ==
                                                             bVar62) & UNK_014ea363) + cVar63,
                                                          CONCAT12((~-((byte)((bVar60 < bVar5) *
                                                                              bVar5 | (bVar60 >=
                                                                                      bVar5) * 
                                                  bVar60) == bVar60) & UNK_014ea362) + cVar61,
                                                  CONCAT11((~-((byte)((bVar58 < bVar49) * bVar49 |
                                                                     (bVar58 >= bVar49) * bVar58) ==
                                                              bVar58) & UNK_014ea361) + cVar59,
                                                           (~-((byte)((bVar57 < bVar2) * bVar2 |
                                                                     (bVar57 >= bVar2) * bVar57) ==
                                                              bVar57) & DAT_014ea360) + (char)uVar48
                                                          )))))));
        uVar50 = uVar50 + 8;
      } while (uVar54 != uVar50);
      if (uVar51 != uVar54) goto LAB_05cdbdcc;
    }
    else {
      uVar50 = uVar51 & 0xffffffffffffffe0;
      uVar54 = 0;
      do {
        pbVar45 = pbVar55 + uVar54;
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
        pbVar46 = pbVar55 + uVar54 + 0x10;
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
        bVar71 = *pbVar45 + DAT_014e86b0;
        bVar72 = bVar12 + DAT_014e86b0._1_1_;
        bVar73 = bVar13 + DAT_014e86b0._2_1_;
        bVar74 = bVar14 + DAT_014e86b0._3_1_;
        bVar75 = bVar15 + DAT_014e86b0._4_1_;
        bVar76 = bVar16 + DAT_014e86b0._5_1_;
        bVar77 = bVar17 + DAT_014e86b0._6_1_;
        bVar78 = bVar18 + DAT_014e86b0._7_1_;
        bVar79 = bVar19 + DAT_014e86b0._8_1_;
        bVar80 = bVar20 + DAT_014e86b0._9_1_;
        bVar81 = bVar21 + DAT_014e86b0._10_1_;
        bVar82 = bVar22 + DAT_014e86b0._11_1_;
        bVar83 = bVar23 + DAT_014e86b0._12_1_;
        bVar84 = bVar24 + DAT_014e86b0._13_1_;
        bVar85 = bVar25 + DAT_014e86b0._14_1_;
        bVar86 = bVar26 + DAT_014e86b0._15_1_;
        bVar87 = bVar27 + DAT_014e86b0;
        bVar88 = bVar28 + DAT_014e86b0._1_1_;
        bVar89 = bVar29 + DAT_014e86b0._2_1_;
        bVar90 = bVar30 + DAT_014e86b0._3_1_;
        bVar91 = bVar31 + DAT_014e86b0._4_1_;
        bVar92 = bVar32 + DAT_014e86b0._5_1_;
        bVar93 = bVar33 + DAT_014e86b0._6_1_;
        bVar94 = bVar34 + DAT_014e86b0._7_1_;
        bVar95 = bVar35 + DAT_014e86b0._8_1_;
        bVar96 = bVar36 + DAT_014e86b0._9_1_;
        bVar97 = bVar37 + DAT_014e86b0._10_1_;
        bVar98 = bVar38 + DAT_014e86b0._11_1_;
        bVar99 = bVar39 + DAT_014e86b0._12_1_;
        bVar100 = bVar40 + DAT_014e86b0._13_1_;
        bVar101 = bVar41 + DAT_014e86b0._14_1_;
        bVar102 = bVar42 + DAT_014e86b0._15_1_;
        bVar2 = DAT_014e4170;
        bVar49 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar57 = DAT_014e4170._8_1_;
        bVar58 = DAT_014e4170._9_1_;
        bVar60 = DAT_014e4170._10_1_;
        bVar62 = DAT_014e4170._11_1_;
        bVar64 = DAT_014e4170._12_1_;
        bVar66 = DAT_014e4170._13_1_;
        bVar68 = DAT_014e4170._14_1_;
        bVar70 = DAT_014e4170._15_1_;
        pbVar46 = pbVar55 + uVar54;
        *pbVar46 = (-((byte)((bVar2 < bVar71) * bVar2 | (bVar2 >= bVar71) * bVar71) == bVar71) &
                   DAT_014ead50) + *pbVar45;
        pbVar46[1] = (-((byte)((bVar49 < bVar72) * bVar49 | (bVar49 >= bVar72) * bVar72) == bVar72)
                     & UNK_014ead51) + bVar12;
        pbVar46[2] = (-((byte)((bVar5 < bVar73) * bVar5 | (bVar5 >= bVar73) * bVar73) == bVar73) &
                     UNK_014ead52) + bVar13;
        pbVar46[3] = (-((byte)((bVar6 < bVar74) * bVar6 | (bVar6 >= bVar74) * bVar74) == bVar74) &
                     UNK_014ead53) + bVar14;
        pbVar46[4] = (-((byte)((bVar7 < bVar75) * bVar7 | (bVar7 >= bVar75) * bVar75) == bVar75) &
                     UNK_014ead54) + bVar15;
        pbVar46[5] = (-((byte)((bVar8 < bVar76) * bVar8 | (bVar8 >= bVar76) * bVar76) == bVar76) &
                     UNK_014ead55) + bVar16;
        pbVar46[6] = (-((byte)((bVar9 < bVar77) * bVar9 | (bVar9 >= bVar77) * bVar77) == bVar77) &
                     UNK_014ead56) + bVar17;
        pbVar46[7] = (-((byte)((bVar10 < bVar78) * bVar10 | (bVar10 >= bVar78) * bVar78) == bVar78)
                     & UNK_014ead57) + bVar18;
        pbVar46[8] = (-((byte)((bVar57 < bVar79) * bVar57 | (bVar57 >= bVar79) * bVar79) == bVar79)
                     & UNK_014ead58) + bVar19;
        pbVar46[9] = (-((byte)((bVar58 < bVar80) * bVar58 | (bVar58 >= bVar80) * bVar80) == bVar80)
                     & UNK_014ead59) + bVar20;
        pbVar46[10] = (-((byte)((bVar60 < bVar81) * bVar60 | (bVar60 >= bVar81) * bVar81) == bVar81)
                      & UNK_014ead5a) + bVar21;
        pbVar46[0xb] = (-((byte)((bVar62 < bVar82) * bVar62 | (bVar62 >= bVar82) * bVar82) == bVar82
                         ) & UNK_014ead5b) + bVar22;
        pbVar46[0xc] = (-((byte)((bVar64 < bVar83) * bVar64 | (bVar64 >= bVar83) * bVar83) == bVar83
                         ) & UNK_014ead5c) + bVar23;
        pbVar46[0xd] = (-((byte)((bVar66 < bVar84) * bVar66 | (bVar66 >= bVar84) * bVar84) == bVar84
                         ) & UNK_014ead5d) + bVar24;
        pbVar46[0xe] = (-((byte)((bVar68 < bVar85) * bVar68 | (bVar68 >= bVar85) * bVar85) == bVar85
                         ) & UNK_014ead5e) + bVar25;
        pbVar46[0xf] = (-((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) == bVar86
                         ) & UNK_014ead5f) + bVar26;
        pbVar45 = pbVar55 + uVar54 + 0x10;
        *pbVar45 = (-((byte)((bVar2 < bVar87) * bVar2 | (bVar2 >= bVar87) * bVar87) == bVar87) &
                   DAT_014ead50) + bVar27;
        pbVar45[1] = (-((byte)((bVar49 < bVar88) * bVar49 | (bVar49 >= bVar88) * bVar88) == bVar88)
                     & UNK_014ead51) + bVar28;
        pbVar45[2] = (-((byte)((bVar5 < bVar89) * bVar5 | (bVar5 >= bVar89) * bVar89) == bVar89) &
                     UNK_014ead52) + bVar29;
        pbVar45[3] = (-((byte)((bVar6 < bVar90) * bVar6 | (bVar6 >= bVar90) * bVar90) == bVar90) &
                     UNK_014ead53) + bVar30;
        pbVar45[4] = (-((byte)((bVar7 < bVar91) * bVar7 | (bVar7 >= bVar91) * bVar91) == bVar91) &
                     UNK_014ead54) + bVar31;
        pbVar45[5] = (-((byte)((bVar8 < bVar92) * bVar8 | (bVar8 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead55) + bVar32;
        pbVar45[6] = (-((byte)((bVar9 < bVar93) * bVar9 | (bVar9 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead56) + bVar33;
        pbVar45[7] = (-((byte)((bVar10 < bVar94) * bVar10 | (bVar10 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead57) + bVar34;
        pbVar45[8] = (-((byte)((bVar57 < bVar95) * bVar57 | (bVar57 >= bVar95) * bVar95) == bVar95)
                     & UNK_014ead58) + bVar35;
        pbVar45[9] = (-((byte)((bVar58 < bVar96) * bVar58 | (bVar58 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead59) + bVar36;
        pbVar45[10] = (-((byte)((bVar60 < bVar97) * bVar60 | (bVar60 >= bVar97) * bVar97) == bVar97)
                      & UNK_014ead5a) + bVar37;
        pbVar45[0xb] = (-((byte)((bVar62 < bVar98) * bVar62 | (bVar62 >= bVar98) * bVar98) == bVar98
                         ) & UNK_014ead5b) + bVar38;
        pbVar45[0xc] = (-((byte)((bVar64 < bVar99) * bVar64 | (bVar64 >= bVar99) * bVar99) == bVar99
                         ) & UNK_014ead5c) + bVar39;
        pbVar45[0xd] = (-((byte)((bVar66 < bVar100) * bVar66 | (bVar66 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead5d) + bVar40;
        pbVar45[0xe] = (-((byte)((bVar68 < bVar101) * bVar68 | (bVar68 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5e) + bVar41;
        pbVar45[0xf] = (-((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5f) + bVar42;
        uVar54 = uVar54 + 0x20;
      } while (uVar50 != uVar54);
      if (uVar51 != uVar50) {
        if ((uVar51 & 0x18) == 0) {
          pbVar45 = pbVar55 + uVar50;
          goto LAB_05cdbdcc;
        }
        goto LAB_05cdbd65;
      }
    }
    uVar50 = (ulong)((byte)uStack_a0 >> 1);
  }
  if ((uStack_a0 & 1) != 0) {
    uVar50 = uStack_98;
    pbVar52 = pbStack_90;
  }
  pbVar55 = pbVar52 + uVar50;
  uVar51 = uVar50;
  pbVar45 = pbVar52;
  while (((pbVar46 = pbVar55, 0 < (long)uVar51 &&
          (pbVar45 = (byte *)func_0x0eee2ef0(pbVar45,0x3a,uVar51), pbVar45 != (byte *)0x0)) &&
         (pbVar46 = pbVar45, *pbVar45 != 0x3a))) {
    pbVar45 = pbVar45 + 1;
    uVar51 = (long)pbVar55 - (long)pbVar45;
  }
  uVar51 = (long)pbVar46 - (long)pbVar52;
  if (uVar50 < (ulong)((long)pbVar46 - (long)pbVar52)) {
    uVar51 = uVar50;
  }
  if (pbVar46 == pbVar55) {
    uVar51 = uVar50;
  }
  if (0xfffffffffffffff7 < uVar51) {
LAB_05cdc1a1:
    uVar48 = func_0x04882e30();
    if ((uStack_a0 & 1) != 0) {
      thunk_FUN_0ee326a0(pbStack_90,uStack_a0 & 0xfffffffffffffffe);
    }
    if (plVar43 != (long *)0x0) {
      (**(code **)(*plVar43 + 8))(plVar43);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      thunk_FUN_0ee326a0(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar48);
    pcVar4 = (code *)swi(3);
    plVar43 = (long *)(*pcVar4)();
    return plVar43;
  }
  if (uVar51 < 0x17) {
    uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,(char)uVar51 * '\x02');
    uVar54 = (long)&uStack_88 + 1;
    if (uVar51 != 0) goto LAB_05cdbed0;
  }
  else {
    uVar50 = 0x1a;
    if ((uVar51 | 7) != 0x17) {
      uVar50 = (uVar51 | 7) + 1;
    }
    uVar54 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar50);
    if (uVar54 == 0) {
      func_0x0eec74c0(uVar50,0);
    }
    uStack_88 = (undefined8 *)(uVar50 | 1);
    uStack_80 = (long *)uVar51;
    uStack_78 = uVar54;
LAB_05cdbed0:
    func_0x0eee2ee0(uVar54,pbVar52,uVar51);
  }
  *(undefined1 *)(uVar54 + uVar51) = 0;
  FUN_05cf8990(param_1 + 0xe0,&uStack_88,&uStack_88);
  if (((ulong)uStack_88 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
  }
  uStack_88 = (undefined8 *)0x0;
  if ((uStack_a0 & 1) == 0) {
    pbStack_70 = pbStack_90;
    uStack_80 = (long *)uStack_a0;
    uStack_78 = uStack_98;
  }
  else {
    FUN_0412e5e0(&uStack_80,pbStack_90,uStack_98);
  }
  uStack_68 = 0;
  if (((ulong)uStack_80 & 1) == 0) {
    if ((byte)uStack_80 >> 1 != 0) goto LAB_05cdbf80;
  }
  else if (uStack_78 != 0) {
LAB_05cdbf80:
    pbVar55 = pbStack_70;
    if (((ulong)uStack_80 & 1) == 0) {
      pbVar55 = (byte *)((long)&uStack_80 + 1);
    }
    if ((pbVar55 != (byte *)0x0) && (*pbVar55 != 0)) {
      puVar53 = (undefined8 *)0xcbf29ce484222325;
      uVar51 = func_0x0eee2e90(pbVar55);
      if (uVar51 != 0) {
        uVar50 = (ulong)((uint)uVar51 & 7);
        if (7 < uVar51) {
          uVar51 = uVar51 & 0xfffffffffffffff8;
          do {
            puVar53 = (undefined8 *)
                      (((((((((long)puVar53 * 0x100000001b3 ^ (ulong)*pbVar55) * 0x100000001b3 ^
                            (ulong)pbVar55[1]) * 0x100000001b3 ^ (ulong)pbVar55[2]) * 0x100000001b3
                          ^ (ulong)pbVar55[3]) * 0x100000001b3 ^ (ulong)pbVar55[4]) * 0x100000001b3
                        ^ (ulong)pbVar55[5]) * 0x100000001b3 ^ (ulong)pbVar55[6]) * 0x100000001b3 ^
                      (ulong)pbVar55[7]);
            pbVar55 = pbVar55 + 8;
            uVar51 = uVar51 - 8;
          } while (uVar51 != 0);
        }
        if (uVar50 != 0) {
          uVar51 = 0;
          do {
            puVar53 = (undefined8 *)((long)puVar53 * 0x100000001b3 ^ (ulong)pbVar55[uVar51]);
            uVar51 = uVar51 + 1;
          } while (uVar50 != uVar51);
        }
      }
      goto LAB_05cdc079;
    }
  }
  puVar53 = (undefined8 *)0x0;
LAB_05cdc079:
  uStack_88 = puVar53;
  puStack_60 = &uStack_88;
  lVar47 = func_0x05cf8b10(param_1,&uStack_88,&UNK_01563a4f,&puStack_60,&uStack_a1);
  plVar3 = *(long **)(lVar47 + 0x48);
  *(long **)(lVar47 + 0x48) = plVar43;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_60 = uStack_88;
  lVar47 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_60);
  if ((*(byte *)(lVar47 + 0x18) & 1) != 0) {
    thunk_FUN_0ee326a0(*(undefined8 *)(lVar47 + 0x28),*(ulong *)(lVar47 + 0x18) & 0xfffffffffffffffe
                      );
  }
  *(byte **)(lVar47 + 0x28) = pbStack_70;
  *(long **)(lVar47 + 0x18) = uStack_80;
  *(ulong *)(lVar47 + 0x20) = uStack_78;
  uStack_80 = (long *)((ulong)uStack_80 & 0xffffffffffff0000);
  *(undefined8 **)(lVar47 + 0x10) = uStack_88;
  *(undefined8 *)(lVar47 + 0x30) = 0;
  if ((uStack_a0 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    thunk_FUN_0ee326a0(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return plVar43;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
