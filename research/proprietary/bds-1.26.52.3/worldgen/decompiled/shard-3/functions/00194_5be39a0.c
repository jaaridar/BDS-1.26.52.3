/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ce39a0 (ELF vaddr 0x5be39a0)
 * Label: callee-of:0x5a1f120
 * Body:  [[05ce39a0, 05ce40e0] [05ce4143, 05ce4166] [05ce416a, 05ce41a5]]
 * Ghidra: FUN_05ce39a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05ce39a0(long param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  long *plVar37;
  long lVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  long lVar42;
  undefined8 uVar43;
  ulong uVar44;
  ulong uVar45;
  char *pcVar46;
  undefined8 *puVar47;
  ulong uVar48;
  byte *pbVar49;
  bool bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar56;
  byte bVar58;
  byte bVar60;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
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
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  ulong uStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar53;
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  char cVar63;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_88 = *(undefined8 **)(param_1 + 0x148);
  uVar43 = *(undefined8 *)(param_1 + 0x150);
  bStack_80 = (byte)uVar43;
  bStack_7f = (byte)((ulong)uVar43 >> 8);
  uStack_7e = (undefined2)((ulong)uVar43 >> 0x10);
  uStack_7c = (undefined4)((ulong)uVar43 >> 0x20);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar37 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar37 = *plVar37 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_88);
  plVar37 = (long *)CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(bStack_7f,bStack_80)));
  if (plVar37 != (long *)0x0) {
    LOCK();
    plVar3 = plVar37 + 1;
    lVar42 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*plVar37 + 0x10))(plVar37);
      func_0x0412c2d0(plVar37);
    }
  }
  plVar37 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3f8);
  if (plVar37 == (long *)0x0) {
    FUN_0eec74c0(0x3f8,0);
  }
  uStack_88 = (undefined8 *)*param_5;
  uVar43 = param_5[1];
  uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0xc) >> 0x20);
  uStack_74 = (undefined4)*(undefined8 *)((long)param_5 + 0x14);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0x14) >> 0x20);
  bStack_80 = (byte)uVar43;
  bStack_7f = (byte)((ulong)uVar43 >> 8);
  uStack_7e = (undefined2)((ulong)uVar43 >> 0x10);
  uStack_7c = (undefined4)((ulong)uVar43 >> 0x20);
  func_0x0c65ba00(plVar37,&uStack_58,param_3);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar42 = 0;
    lVar38 = 0;
  }
  else {
    lVar38 = FUN_0412c300();
    lVar42 = 0;
    if (lVar38 != 0) {
      lVar42 = *(long *)(param_1 + 0x138);
    }
  }
  plVar37[0x73] = lVar42;
  plVar3 = (long *)plVar37[0x74];
  plVar37[0x74] = lVar38;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar42 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      func_0x0412c2d0(plVar3);
    }
  }
  bVar50 = (*(byte *)(plVar37 + 0x1a) & 1) != 0;
  lVar42 = (long)plVar37 + 0xd1;
  if (bVar50) {
    lVar42 = plVar37[0x1c];
  }
  uVar45 = (ulong)(*(byte *)(plVar37 + 0x1a) >> 1);
  if (bVar50) {
    uVar45 = plVar37[0x1b];
  }
  if (0xfffffffffffffff7 < uVar45) {
    func_0x04882e30();
    goto LAB_05ce40da;
  }
  pcVar39 = (char *)((long)&uStack_a0 + 1);
  if (uVar45 < 0x17) {
    uStack_a0 = CONCAT71(uStack_a0._1_7_,(char)uVar45 * '\x02');
    if (uVar45 != 0) goto LAB_05ce3bb0;
  }
  else {
    uVar44 = 0x1a;
    if ((uVar45 | 7) != 0x17) {
      uVar44 = (uVar45 | 7) + 1;
    }
    pcVar39 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
    if (pcVar39 == (char *)0x0) {
      FUN_0eec74c0(uVar44,0);
    }
    uStack_a0 = uVar44 | 1;
    uStack_98 = uVar45;
    pcStack_90 = pcVar39;
LAB_05ce3bb0:
    func_0x0eee2f00(pcVar39,lVar42,uVar45);
  }
  pcVar46 = (char *)((long)&uStack_a0 + 1);
  pcVar39[uVar45] = '\0';
  uVar44 = (ulong)((byte)uStack_a0 >> 1);
  uVar45 = uStack_98;
  pcVar39 = pcStack_90;
  if ((uStack_a0 & 1) == 0) {
    uVar45 = uVar44;
    pcVar39 = pcVar46;
  }
  if (uVar45 != 0) {
    pcVar40 = pcVar39;
    if (uVar45 < 8) {
LAB_05ce3cfc:
      do {
        cVar2 = *pcVar40;
        cVar53 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar53 = cVar2;
        }
        *pcVar40 = cVar53;
        pcVar40 = pcVar40 + 1;
      } while (pcVar40 != pcVar39 + uVar45);
    }
    else if (uVar45 < 0x20) {
      uVar44 = 0;
LAB_05ce3c95:
      uVar48 = uVar45 & 0xfffffffffffffff8;
      pcVar40 = pcVar39 + uVar48;
      do {
        uVar43 = *(undefined8 *)(pcVar39 + uVar44);
        bVar51 = (char)uVar43 + DAT_014e9110;
        cVar53 = (char)((ulong)uVar43 >> 8);
        bVar52 = cVar53 + DAT_014e9110._1_1_;
        cVar55 = (char)((ulong)uVar43 >> 0x10);
        bVar54 = cVar55 + DAT_014e9110._2_1_;
        cVar57 = (char)((ulong)uVar43 >> 0x18);
        bVar56 = cVar57 + DAT_014e9110._3_1_;
        cVar59 = (char)((ulong)uVar43 >> 0x20);
        bVar58 = cVar59 + DAT_014e9110._4_1_;
        cVar61 = (char)((ulong)uVar43 >> 0x28);
        bVar60 = cVar61 + DAT_014e9110._5_1_;
        cVar63 = (char)((ulong)uVar43 >> 0x30);
        cVar2 = (char)((ulong)uVar43 >> 0x38);
        bVar62 = cVar63 + DAT_014e9110._6_1_;
        bVar64 = cVar2 + DAT_014e9110._7_1_;
        bVar5 = DAT_014e8cb0;
        bVar6 = DAT_014e8cb0._1_1_;
        bVar7 = DAT_014e8cb0._2_1_;
        bVar8 = DAT_014e8cb0._3_1_;
        bVar9 = DAT_014e8cb0._4_1_;
        bVar10 = DAT_014e8cb0._5_1_;
        bVar11 = DAT_014e8cb0._6_1_;
        bVar12 = DAT_014e8cb0._7_1_;
        *(ulong *)(pcVar39 + uVar44) =
             CONCAT17((~-((byte)((bVar64 < bVar12) * bVar12 | (bVar64 >= bVar12) * bVar64) == bVar64
                         ) & UNK_014ea367) + cVar2,
                      CONCAT16((~-((byte)((bVar62 < bVar11) * bVar11 | (bVar62 >= bVar11) * bVar62)
                                  == bVar62) & UNK_014ea366) + cVar63,
                               CONCAT15((~-((byte)((bVar60 < bVar10) * bVar10 |
                                                  (bVar60 >= bVar10) * bVar60) == bVar60) &
                                        UNK_014ea365) + cVar61,
                                        CONCAT14((~-((byte)((bVar58 < bVar9) * bVar9 |
                                                           (bVar58 >= bVar9) * bVar58) == bVar58) &
                                                 UNK_014ea364) + cVar59,
                                                 CONCAT13((~-((byte)((bVar56 < bVar8) * bVar8 |
                                                                    (bVar56 >= bVar8) * bVar56) ==
                                                             bVar56) & UNK_014ea363) + cVar57,
                                                          CONCAT12((~-((byte)((bVar54 < bVar7) *
                                                                              bVar7 | (bVar54 >=
                                                                                      bVar7) * 
                                                  bVar54) == bVar54) & UNK_014ea362) + cVar55,
                                                  CONCAT11((~-((byte)((bVar52 < bVar6) * bVar6 |
                                                                     (bVar52 >= bVar6) * bVar52) ==
                                                              bVar52) & UNK_014ea361) + cVar53,
                                                           (~-((byte)((bVar51 < bVar5) * bVar5 |
                                                                     (bVar51 >= bVar5) * bVar51) ==
                                                              bVar51) & DAT_014ea360) + (char)uVar43
                                                          )))))));
        uVar44 = uVar44 + 8;
      } while (uVar48 != uVar44);
      if (uVar45 != uVar48) goto LAB_05ce3cfc;
    }
    else {
      uVar44 = uVar45 & 0xffffffffffffffe0;
      uVar48 = 0;
      do {
        pcVar40 = pcVar39 + uVar48;
        cVar2 = pcVar40[1];
        cVar53 = pcVar40[2];
        cVar55 = pcVar40[3];
        cVar57 = pcVar40[4];
        cVar59 = pcVar40[5];
        cVar61 = pcVar40[6];
        cVar63 = pcVar40[7];
        cVar13 = pcVar40[8];
        cVar14 = pcVar40[9];
        cVar15 = pcVar40[10];
        cVar16 = pcVar40[0xb];
        cVar17 = pcVar40[0xc];
        cVar18 = pcVar40[0xd];
        cVar19 = pcVar40[0xe];
        cVar20 = pcVar40[0xf];
        pcVar41 = pcVar39 + uVar48 + 0x10;
        cVar21 = *pcVar41;
        cVar22 = pcVar41[1];
        cVar23 = pcVar41[2];
        cVar24 = pcVar41[3];
        cVar25 = pcVar41[4];
        cVar26 = pcVar41[5];
        cVar27 = pcVar41[6];
        cVar28 = pcVar41[7];
        cVar29 = pcVar41[8];
        cVar30 = pcVar41[9];
        cVar31 = pcVar41[10];
        cVar32 = pcVar41[0xb];
        cVar33 = pcVar41[0xc];
        cVar34 = pcVar41[0xd];
        cVar35 = pcVar41[0xe];
        cVar36 = pcVar41[0xf];
        bVar65 = *pcVar40 + DAT_014e86b0;
        bVar66 = cVar2 + DAT_014e86b0._1_1_;
        bVar67 = cVar53 + DAT_014e86b0._2_1_;
        bVar68 = cVar55 + DAT_014e86b0._3_1_;
        bVar69 = cVar57 + DAT_014e86b0._4_1_;
        bVar70 = cVar59 + DAT_014e86b0._5_1_;
        bVar71 = cVar61 + DAT_014e86b0._6_1_;
        bVar72 = cVar63 + DAT_014e86b0._7_1_;
        bVar73 = cVar13 + DAT_014e86b0._8_1_;
        bVar74 = cVar14 + DAT_014e86b0._9_1_;
        bVar75 = cVar15 + DAT_014e86b0._10_1_;
        bVar76 = cVar16 + DAT_014e86b0._11_1_;
        bVar77 = cVar17 + DAT_014e86b0._12_1_;
        bVar78 = cVar18 + DAT_014e86b0._13_1_;
        bVar79 = cVar19 + DAT_014e86b0._14_1_;
        bVar80 = cVar20 + DAT_014e86b0._15_1_;
        bVar81 = cVar21 + DAT_014e86b0;
        bVar82 = cVar22 + DAT_014e86b0._1_1_;
        bVar83 = cVar23 + DAT_014e86b0._2_1_;
        bVar84 = cVar24 + DAT_014e86b0._3_1_;
        bVar85 = cVar25 + DAT_014e86b0._4_1_;
        bVar86 = cVar26 + DAT_014e86b0._5_1_;
        bVar87 = cVar27 + DAT_014e86b0._6_1_;
        bVar88 = cVar28 + DAT_014e86b0._7_1_;
        bVar89 = cVar29 + DAT_014e86b0._8_1_;
        bVar90 = cVar30 + DAT_014e86b0._9_1_;
        bVar91 = cVar31 + DAT_014e86b0._10_1_;
        bVar92 = cVar32 + DAT_014e86b0._11_1_;
        bVar93 = cVar33 + DAT_014e86b0._12_1_;
        bVar94 = cVar34 + DAT_014e86b0._13_1_;
        bVar95 = cVar35 + DAT_014e86b0._14_1_;
        bVar96 = cVar36 + DAT_014e86b0._15_1_;
        bVar5 = DAT_014e4170;
        bVar6 = DAT_014e4170._1_1_;
        bVar7 = DAT_014e4170._2_1_;
        bVar8 = DAT_014e4170._3_1_;
        bVar9 = DAT_014e4170._4_1_;
        bVar10 = DAT_014e4170._5_1_;
        bVar11 = DAT_014e4170._6_1_;
        bVar12 = DAT_014e4170._7_1_;
        bVar51 = DAT_014e4170._8_1_;
        bVar52 = DAT_014e4170._9_1_;
        bVar54 = DAT_014e4170._10_1_;
        bVar56 = DAT_014e4170._11_1_;
        bVar58 = DAT_014e4170._12_1_;
        bVar60 = DAT_014e4170._13_1_;
        bVar62 = DAT_014e4170._14_1_;
        bVar64 = DAT_014e4170._15_1_;
        pcVar41 = pcVar39 + uVar48;
        *pcVar41 = (-((byte)((bVar5 < bVar65) * bVar5 | (bVar5 >= bVar65) * bVar65) == bVar65) &
                   DAT_014ead50) + *pcVar40;
        pcVar41[1] = (-((byte)((bVar6 < bVar66) * bVar6 | (bVar6 >= bVar66) * bVar66) == bVar66) &
                     UNK_014ead51) + cVar2;
        pcVar41[2] = (-((byte)((bVar7 < bVar67) * bVar7 | (bVar7 >= bVar67) * bVar67) == bVar67) &
                     UNK_014ead52) + cVar53;
        pcVar41[3] = (-((byte)((bVar8 < bVar68) * bVar8 | (bVar8 >= bVar68) * bVar68) == bVar68) &
                     UNK_014ead53) + cVar55;
        pcVar41[4] = (-((byte)((bVar9 < bVar69) * bVar9 | (bVar9 >= bVar69) * bVar69) == bVar69) &
                     UNK_014ead54) + cVar57;
        pcVar41[5] = (-((byte)((bVar10 < bVar70) * bVar10 | (bVar10 >= bVar70) * bVar70) == bVar70)
                     & UNK_014ead55) + cVar59;
        pcVar41[6] = (-((byte)((bVar11 < bVar71) * bVar11 | (bVar11 >= bVar71) * bVar71) == bVar71)
                     & UNK_014ead56) + cVar61;
        pcVar41[7] = (-((byte)((bVar12 < bVar72) * bVar12 | (bVar12 >= bVar72) * bVar72) == bVar72)
                     & UNK_014ead57) + cVar63;
        pcVar41[8] = (-((byte)((bVar51 < bVar73) * bVar51 | (bVar51 >= bVar73) * bVar73) == bVar73)
                     & UNK_014ead58) + cVar13;
        pcVar41[9] = (-((byte)((bVar52 < bVar74) * bVar52 | (bVar52 >= bVar74) * bVar74) == bVar74)
                     & UNK_014ead59) + cVar14;
        pcVar41[10] = (-((byte)((bVar54 < bVar75) * bVar54 | (bVar54 >= bVar75) * bVar75) == bVar75)
                      & UNK_014ead5a) + cVar15;
        pcVar41[0xb] = (-((byte)((bVar56 < bVar76) * bVar56 | (bVar56 >= bVar76) * bVar76) == bVar76
                         ) & UNK_014ead5b) + cVar16;
        pcVar41[0xc] = (-((byte)((bVar58 < bVar77) * bVar58 | (bVar58 >= bVar77) * bVar77) == bVar77
                         ) & UNK_014ead5c) + cVar17;
        pcVar41[0xd] = (-((byte)((bVar60 < bVar78) * bVar60 | (bVar60 >= bVar78) * bVar78) == bVar78
                         ) & UNK_014ead5d) + cVar18;
        pcVar41[0xe] = (-((byte)((bVar62 < bVar79) * bVar62 | (bVar62 >= bVar79) * bVar79) == bVar79
                         ) & UNK_014ead5e) + cVar19;
        pcVar41[0xf] = (-((byte)((bVar64 < bVar80) * bVar64 | (bVar64 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead5f) + cVar20;
        pcVar40 = pcVar39 + uVar48 + 0x10;
        *pcVar40 = (-((byte)((bVar5 < bVar81) * bVar5 | (bVar5 >= bVar81) * bVar81) == bVar81) &
                   DAT_014ead50) + cVar21;
        pcVar40[1] = (-((byte)((bVar6 < bVar82) * bVar6 | (bVar6 >= bVar82) * bVar82) == bVar82) &
                     UNK_014ead51) + cVar22;
        pcVar40[2] = (-((byte)((bVar7 < bVar83) * bVar7 | (bVar7 >= bVar83) * bVar83) == bVar83) &
                     UNK_014ead52) + cVar23;
        pcVar40[3] = (-((byte)((bVar8 < bVar84) * bVar8 | (bVar8 >= bVar84) * bVar84) == bVar84) &
                     UNK_014ead53) + cVar24;
        pcVar40[4] = (-((byte)((bVar9 < bVar85) * bVar9 | (bVar9 >= bVar85) * bVar85) == bVar85) &
                     UNK_014ead54) + cVar25;
        pcVar40[5] = (-((byte)((bVar10 < bVar86) * bVar10 | (bVar10 >= bVar86) * bVar86) == bVar86)
                     & UNK_014ead55) + cVar26;
        pcVar40[6] = (-((byte)((bVar11 < bVar87) * bVar11 | (bVar11 >= bVar87) * bVar87) == bVar87)
                     & UNK_014ead56) + cVar27;
        pcVar40[7] = (-((byte)((bVar12 < bVar88) * bVar12 | (bVar12 >= bVar88) * bVar88) == bVar88)
                     & UNK_014ead57) + cVar28;
        pcVar40[8] = (-((byte)((bVar51 < bVar89) * bVar51 | (bVar51 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead58) + cVar29;
        pcVar40[9] = (-((byte)((bVar52 < bVar90) * bVar52 | (bVar52 >= bVar90) * bVar90) == bVar90)
                     & UNK_014ead59) + cVar30;
        pcVar40[10] = (-((byte)((bVar54 < bVar91) * bVar54 | (bVar54 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5a) + cVar31;
        pcVar40[0xb] = (-((byte)((bVar56 < bVar92) * bVar56 | (bVar56 >= bVar92) * bVar92) == bVar92
                         ) & UNK_014ead5b) + cVar32;
        pcVar40[0xc] = (-((byte)((bVar58 < bVar93) * bVar58 | (bVar58 >= bVar93) * bVar93) == bVar93
                         ) & UNK_014ead5c) + cVar33;
        pcVar40[0xd] = (-((byte)((bVar60 < bVar94) * bVar60 | (bVar60 >= bVar94) * bVar94) == bVar94
                         ) & UNK_014ead5d) + cVar34;
        pcVar40[0xe] = (-((byte)((bVar62 < bVar95) * bVar62 | (bVar62 >= bVar95) * bVar95) == bVar95
                         ) & UNK_014ead5e) + cVar35;
        pcVar40[0xf] = (-((byte)((bVar64 < bVar96) * bVar64 | (bVar64 >= bVar96) * bVar96) == bVar96
                         ) & UNK_014ead5f) + cVar36;
        uVar48 = uVar48 + 0x20;
      } while (uVar44 != uVar48);
      if (uVar45 != uVar44) {
        if ((uVar45 & 0x18) == 0) {
          pcVar40 = pcVar39 + uVar44;
          goto LAB_05ce3cfc;
        }
        goto LAB_05ce3c95;
      }
    }
    uVar44 = (ulong)((byte)uStack_a0 >> 1);
  }
  if ((uStack_a0 & 1) != 0) {
    uVar44 = uStack_98;
    pcVar46 = pcStack_90;
  }
  pcVar39 = pcVar46 + uVar44;
  uVar45 = uVar44;
  pcVar40 = pcVar46;
  while (((pcVar41 = pcVar39, 0 < (long)uVar45 &&
          (pcVar40 = (char *)func_0x0eee2ef0(pcVar40,0x3a,uVar45), pcVar40 != (char *)0x0)) &&
         (pcVar41 = pcVar40, *pcVar40 != ':'))) {
    pcVar40 = pcVar40 + 1;
    uVar45 = (long)pcVar39 - (long)pcVar40;
  }
  uVar45 = (long)pcVar41 - (long)pcVar46;
  if (uVar44 < (ulong)((long)pcVar41 - (long)pcVar46)) {
    uVar45 = uVar44;
  }
  if (pcVar41 == pcVar39) {
    uVar45 = uVar44;
  }
  if (0xfffffffffffffff7 < uVar45) {
LAB_05ce40da:
    uVar43 = func_0x04882e30();
    if ((uStack_a0 & 1) != 0) {
      func_0x0412a280(pcStack_90,uStack_a0 & 0xfffffffffffffffe);
    }
    if (plVar37 != (long *)0x0) {
      (**(code **)(*plVar37 + 8))(plVar37);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar43);
    pcVar4 = (code *)swi(3);
    plVar37 = (long *)(*pcVar4)();
    return plVar37;
  }
  if (uVar45 < 0x17) {
    uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,(byte)uVar45 * '\x02');
    lVar42 = (long)&uStack_88 + 1;
    if (uVar45 != 0) goto LAB_05ce3e00;
  }
  else {
    uVar44 = 0x1a;
    if ((uVar45 | 7) != 0x17) {
      uVar44 = (uVar45 | 7) + 1;
    }
    lVar42 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar44);
    if (lVar42 == 0) {
      FUN_0eec74c0(uVar44,0);
    }
    uStack_78 = (undefined4)lVar42;
    uStack_74 = (undefined4)((ulong)lVar42 >> 0x20);
    uStack_88 = (undefined8 *)(uVar44 | 1);
    bStack_7f = (byte)(uVar45 >> 8);
    uStack_7e = (undefined2)(uVar45 >> 0x10);
    uStack_7c = (undefined4)(uVar45 >> 0x20);
    bStack_80 = (byte)uVar45;
LAB_05ce3e00:
    func_0x0eee2ee0(lVar42,pcVar46,uVar45);
  }
  *(undefined1 *)(lVar42 + uVar45) = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_88,&uStack_88);
  if (((ulong)uStack_88 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_74,uStack_78),(ulong)uStack_88 & 0xfffffffffffffffe);
  }
  uStack_88 = (undefined8 *)0x0;
  if ((uStack_a0 & 1) == 0) {
    uStack_70 = SUB84(pcStack_90,0);
    uStack_6c = (undefined4)((ulong)pcStack_90 >> 0x20);
    bStack_80 = (byte)uStack_a0;
    bStack_7f = (byte)(uStack_a0 >> 8);
    uStack_7e = (undefined2)(uStack_a0 >> 0x10);
    uStack_7c = (undefined4)(uStack_a0 >> 0x20);
    uStack_78 = (undefined4)uStack_98;
    uStack_74 = (undefined4)(uStack_98 >> 0x20);
  }
  else {
    func_0x0412e5e0(&bStack_80,pcStack_90,uStack_98);
  }
  uStack_68 = 0;
  if ((bStack_80 & 1) == 0) {
    if (bStack_80 >> 1 != 0) goto LAB_05ce3eb0;
  }
  else if (CONCAT44(uStack_74,uStack_78) != 0) {
LAB_05ce3eb0:
    if ((bStack_80 & 1) == 0) {
      pbVar49 = &bStack_7f;
    }
    else {
      pbVar49 = (byte *)CONCAT44(uStack_6c,uStack_70);
    }
    if ((pbVar49 != (byte *)0x0) && (*pbVar49 != 0)) {
      puVar47 = (undefined8 *)0xcbf29ce484222325;
      uVar45 = strlen(pbVar49);
      if (uVar45 != 0) {
        uVar44 = (ulong)((uint)uVar45 & 7);
        if (7 < uVar45) {
          uVar45 = uVar45 & 0xfffffffffffffff8;
          do {
            puVar47 = (undefined8 *)
                      (((((((((long)puVar47 * 0x100000001b3 ^ (ulong)*pbVar49) * 0x100000001b3 ^
                            (ulong)pbVar49[1]) * 0x100000001b3 ^ (ulong)pbVar49[2]) * 0x100000001b3
                          ^ (ulong)pbVar49[3]) * 0x100000001b3 ^ (ulong)pbVar49[4]) * 0x100000001b3
                        ^ (ulong)pbVar49[5]) * 0x100000001b3 ^ (ulong)pbVar49[6]) * 0x100000001b3 ^
                      (ulong)pbVar49[7]);
            pbVar49 = pbVar49 + 8;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
        }
        if (uVar44 != 0) {
          uVar45 = 0;
          do {
            puVar47 = (undefined8 *)((long)puVar47 * 0x100000001b3 ^ (ulong)pbVar49[uVar45]);
            uVar45 = uVar45 + 1;
          } while (uVar44 != uVar45);
        }
      }
      goto LAB_05ce3fa9;
    }
  }
  puVar47 = (undefined8 *)0x0;
LAB_05ce3fa9:
  uStack_88 = puVar47;
  puStack_60 = &uStack_88;
  lVar42 = func_0x05cf8b10(param_1,&uStack_88,&UNK_01563a4f,&puStack_60,&uStack_a1);
  plVar3 = *(long **)(lVar42 + 0x48);
  *(long **)(lVar42 + 0x48) = plVar37;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_60 = uStack_88;
  lVar42 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_60);
  if ((*(byte *)(lVar42 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar42 + 0x28),*(ulong *)(lVar42 + 0x18) & 0xfffffffffffffffe);
  }
  *(ulong *)(lVar42 + 0x28) = CONCAT44(uStack_6c,uStack_70);
  *(ulong *)(lVar42 + 0x18) = CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(bStack_7f,bStack_80)));
  *(ulong *)(lVar42 + 0x20) = CONCAT44(uStack_74,uStack_78);
  bStack_80 = 0;
  bStack_7f = 0;
  *(undefined8 **)(lVar42 + 0x10) = uStack_88;
  *(undefined8 *)(lVar42 + 0x30) = 0;
  if ((uStack_a0 & 1) != 0) {
    func_0x0412a280(pcStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return plVar37;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
