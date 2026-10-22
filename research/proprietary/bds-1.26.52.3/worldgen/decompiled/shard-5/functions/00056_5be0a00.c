/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ce0a00 (ELF vaddr 0x5be0a00)
 * Label: callee-of:0x5a1f120
 * Body:  [[05ce0a00, 05ce1377] [05ce1380, 05ce1456] [05ce14e1, 05ce1504] [05ce1508, 05ce1531] [05ce1557, 05ce1564]]
 * Ghidra: FUN_05ce0a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05ce0a00(long param_1,long param_2,undefined4 param_3,long *param_4,undefined8 param_5,
                 ulong param_6)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
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
  char *pcVar35;
  long *plVar36;
  long lVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  ulong uVar41;
  long lVar42;
  undefined8 *puVar43;
  undefined8 uVar44;
  long *plVar45;
  long *plVar46;
  ulong uVar47;
  long *plVar48;
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
  undefined8 uStack_e0;
  long *plStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined *puStack_70;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined2 uStack_55;
  undefined8 uStack_50;
  long *plStack_48;
  ulong uStack_40;
  long lStack_38;
  char cVar53;
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  char cVar63;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lStack_88 = *(long *)(param_2 + 0x18);
    uStack_98 = *(ulong *)(param_2 + 8);
    uStack_90 = *(ulong *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_98,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_c8 = *(undefined8 **)(param_1 + 0x148);
  uStack_c0 = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar36 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar36 = *plVar36 + 1;
    UNLOCK();
  }
  func_0x0cc46680(&puStack_70,&uStack_c8);
  plVar36 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar46 = uStack_c0 + 1;
    lVar42 = *plVar46;
    *plVar46 = *plVar46 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(plVar36);
    }
  }
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3a8);
  if (plVar36 == (long *)0x0) {
    func_0x0eec74c0(0x3a8,0);
  }
  func_0x0c68f2b0(plVar36,&uStack_98,param_3);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar42 = 0;
    lVar37 = 0;
  }
  else {
    lVar37 = func_0x0412c300();
    lVar42 = 0;
    if (lVar37 != 0) {
      lVar42 = *(long *)(param_1 + 0x138);
    }
  }
  plStack_48 = param_4;
  uStack_50 = param_5;
  uStack_40 = param_6;
  plVar36[0x73] = lVar42;
  plVar46 = (long *)plVar36[0x74];
  plVar36[0x74] = lVar37;
  if (plVar46 != (long *)0x0) {
    LOCK();
    plVar45 = plVar46 + 1;
    lVar42 = *plVar45;
    *plVar45 = *plVar45 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*plVar46 + 0x10))(plVar46);
      func_0x0412c2d0(plVar46);
    }
  }
  bVar50 = (*(byte *)(plVar36 + 0x1a) & 1) != 0;
  lVar42 = (long)plVar36 + 0xd1;
  if (bVar50) {
    lVar42 = plVar36[0x1c];
  }
  plVar46 = (long *)(ulong)(*(byte *)(plVar36 + 0x1a) >> 1);
  if (bVar50) {
    plVar46 = (long *)plVar36[0x1b];
  }
  if ((long *)0xfffffffffffffff7 < plVar46) {
    func_0x04882e30();
    goto LAB_05ce144d;
  }
  lStack_38 = param_1;
  pcVar35 = (char *)((long)&uStack_e0 + 1);
  if (plVar46 < (long *)0x17) {
    uStack_e0 = (long *)CONCAT71(uStack_e0._1_7_,(char)plVar46 * '\x02');
    pcVar38 = pcVar35;
    if (plVar46 != (long *)0x0) goto LAB_05ce0bfa;
  }
  else {
    uVar41 = 0x1a;
    if (((ulong)plVar46 | 7) != 0x17) {
      uVar41 = ((ulong)plVar46 | 7) + 1;
    }
    pcVar38 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41);
    if (pcVar38 == (char *)0x0) {
      func_0x0eec74c0(uVar41,0);
    }
    uStack_e0 = (long *)(uVar41 | 1);
    plStack_d8 = plVar46;
    pcStack_d0 = pcVar38;
LAB_05ce0bfa:
    func_0x0eee2f00(pcVar38,lVar42,plVar46);
  }
  pcVar38[(long)plVar46] = '\0';
  lVar42 = lStack_38;
  plVar45 = (long *)(ulong)((byte)uStack_e0 >> 1);
  plVar46 = plStack_d8;
  pcVar38 = pcStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    plVar46 = plVar45;
    pcVar38 = pcVar35;
  }
  if (plVar46 != (long *)0x0) {
    pcVar39 = pcVar38;
    if (plVar46 < (long *)0x8) {
LAB_05ce0d5c:
      do {
        cVar1 = *pcVar39;
        cVar53 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar53 = cVar1;
        }
        *pcVar39 = cVar53;
        pcVar39 = pcVar39 + 1;
      } while (pcVar39 != pcVar38 + (long)plVar46);
    }
    else if (plVar46 < (long *)0x20) {
      plVar45 = (long *)0x0;
LAB_05ce0cf5:
      plVar48 = (long *)((ulong)plVar46 & 0xfffffffffffffff8);
      pcVar39 = pcVar38 + (long)plVar48;
      do {
        uVar44 = *(undefined8 *)(pcVar38 + (long)plVar45);
        bVar51 = (char)uVar44 + DAT_014e9110;
        cVar53 = (char)((ulong)uVar44 >> 8);
        bVar52 = cVar53 + DAT_014e9110._1_1_;
        cVar55 = (char)((ulong)uVar44 >> 0x10);
        bVar54 = cVar55 + DAT_014e9110._2_1_;
        cVar57 = (char)((ulong)uVar44 >> 0x18);
        bVar56 = cVar57 + DAT_014e9110._3_1_;
        cVar59 = (char)((ulong)uVar44 >> 0x20);
        bVar58 = cVar59 + DAT_014e9110._4_1_;
        cVar61 = (char)((ulong)uVar44 >> 0x28);
        bVar60 = cVar61 + DAT_014e9110._5_1_;
        cVar63 = (char)((ulong)uVar44 >> 0x30);
        cVar1 = (char)((ulong)uVar44 >> 0x38);
        bVar62 = cVar63 + DAT_014e9110._6_1_;
        bVar64 = cVar1 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar4 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pcVar38 + (long)plVar45) =
             CONCAT17((~-((byte)((bVar64 < bVar10) * bVar10 | (bVar64 >= bVar10) * bVar64) == bVar64
                         ) & UNK_014ea367) + cVar1,
                      CONCAT16((~-((byte)((bVar62 < bVar9) * bVar9 | (bVar62 >= bVar9) * bVar62) ==
                                  bVar62) & UNK_014ea366) + cVar63,
                               CONCAT15((~-((byte)((bVar60 < bVar8) * bVar8 |
                                                  (bVar60 >= bVar8) * bVar60) == bVar60) &
                                        UNK_014ea365) + cVar61,
                                        CONCAT14((~-((byte)((bVar58 < bVar7) * bVar7 |
                                                           (bVar58 >= bVar7) * bVar58) == bVar58) &
                                                 UNK_014ea364) + cVar59,
                                                 CONCAT13((~-((byte)((bVar56 < bVar6) * bVar6 |
                                                                    (bVar56 >= bVar6) * bVar56) ==
                                                             bVar56) & UNK_014ea363) + cVar57,
                                                          CONCAT12((~-((byte)((bVar54 < bVar5) *
                                                                              bVar5 | (bVar54 >=
                                                                                      bVar5) * 
                                                  bVar54) == bVar54) & UNK_014ea362) + cVar55,
                                                  CONCAT11((~-((byte)((bVar52 < bVar4) * bVar4 |
                                                                     (bVar52 >= bVar4) * bVar52) ==
                                                              bVar52) & UNK_014ea361) + cVar53,
                                                           (~-((byte)((bVar51 < bVar3) * bVar3 |
                                                                     (bVar51 >= bVar3) * bVar51) ==
                                                              bVar51) & DAT_014ea360) + (char)uVar44
                                                          )))))));
        plVar45 = plVar45 + 1;
      } while (plVar48 != plVar45);
      if (plVar46 != plVar48) goto LAB_05ce0d5c;
    }
    else {
      plVar45 = (long *)((ulong)plVar46 & 0xffffffffffffffe0);
      plVar48 = (long *)0x0;
      do {
        pcVar39 = pcVar38 + (long)plVar48;
        cVar1 = pcVar39[1];
        cVar53 = pcVar39[2];
        cVar55 = pcVar39[3];
        cVar57 = pcVar39[4];
        cVar59 = pcVar39[5];
        cVar61 = pcVar39[6];
        cVar63 = pcVar39[7];
        cVar11 = pcVar39[8];
        cVar12 = pcVar39[9];
        cVar13 = pcVar39[10];
        cVar14 = pcVar39[0xb];
        cVar15 = pcVar39[0xc];
        cVar16 = pcVar39[0xd];
        cVar17 = pcVar39[0xe];
        cVar18 = pcVar39[0xf];
        pcVar40 = pcVar38 + 0x10 + (long)plVar48;
        cVar19 = *pcVar40;
        cVar20 = pcVar40[1];
        cVar21 = pcVar40[2];
        cVar22 = pcVar40[3];
        cVar23 = pcVar40[4];
        cVar24 = pcVar40[5];
        cVar25 = pcVar40[6];
        cVar26 = pcVar40[7];
        cVar27 = pcVar40[8];
        cVar28 = pcVar40[9];
        cVar29 = pcVar40[10];
        cVar30 = pcVar40[0xb];
        cVar31 = pcVar40[0xc];
        cVar32 = pcVar40[0xd];
        cVar33 = pcVar40[0xe];
        cVar34 = pcVar40[0xf];
        bVar65 = *pcVar39 + DAT_014e86b0;
        bVar66 = cVar1 + DAT_014e86b0._1_1_;
        bVar67 = cVar53 + DAT_014e86b0._2_1_;
        bVar68 = cVar55 + DAT_014e86b0._3_1_;
        bVar69 = cVar57 + DAT_014e86b0._4_1_;
        bVar70 = cVar59 + DAT_014e86b0._5_1_;
        bVar71 = cVar61 + DAT_014e86b0._6_1_;
        bVar72 = cVar63 + DAT_014e86b0._7_1_;
        bVar73 = cVar11 + DAT_014e86b0._8_1_;
        bVar74 = cVar12 + DAT_014e86b0._9_1_;
        bVar75 = cVar13 + DAT_014e86b0._10_1_;
        bVar76 = cVar14 + DAT_014e86b0._11_1_;
        bVar77 = cVar15 + DAT_014e86b0._12_1_;
        bVar78 = cVar16 + DAT_014e86b0._13_1_;
        bVar79 = cVar17 + DAT_014e86b0._14_1_;
        bVar80 = cVar18 + DAT_014e86b0._15_1_;
        bVar81 = cVar19 + DAT_014e86b0;
        bVar82 = cVar20 + DAT_014e86b0._1_1_;
        bVar83 = cVar21 + DAT_014e86b0._2_1_;
        bVar84 = cVar22 + DAT_014e86b0._3_1_;
        bVar85 = cVar23 + DAT_014e86b0._4_1_;
        bVar86 = cVar24 + DAT_014e86b0._5_1_;
        bVar87 = cVar25 + DAT_014e86b0._6_1_;
        bVar88 = cVar26 + DAT_014e86b0._7_1_;
        bVar89 = cVar27 + DAT_014e86b0._8_1_;
        bVar90 = cVar28 + DAT_014e86b0._9_1_;
        bVar91 = cVar29 + DAT_014e86b0._10_1_;
        bVar92 = cVar30 + DAT_014e86b0._11_1_;
        bVar93 = cVar31 + DAT_014e86b0._12_1_;
        bVar94 = cVar32 + DAT_014e86b0._13_1_;
        bVar95 = cVar33 + DAT_014e86b0._14_1_;
        bVar96 = cVar34 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar4 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar51 = DAT_014e4170._8_1_;
        bVar52 = DAT_014e4170._9_1_;
        bVar54 = DAT_014e4170._10_1_;
        bVar56 = DAT_014e4170._11_1_;
        bVar58 = DAT_014e4170._12_1_;
        bVar60 = DAT_014e4170._13_1_;
        bVar62 = DAT_014e4170._14_1_;
        bVar64 = DAT_014e4170._15_1_;
        pcVar40 = pcVar38 + (long)plVar48;
        *pcVar40 = (-((byte)((bVar3 < bVar65) * bVar3 | (bVar3 >= bVar65) * bVar65) == bVar65) &
                   DAT_014ead50) + *pcVar39;
        pcVar40[1] = (-((byte)((bVar4 < bVar66) * bVar4 | (bVar4 >= bVar66) * bVar66) == bVar66) &
                     UNK_014ead51) + cVar1;
        pcVar40[2] = (-((byte)((bVar5 < bVar67) * bVar5 | (bVar5 >= bVar67) * bVar67) == bVar67) &
                     UNK_014ead52) + cVar53;
        pcVar40[3] = (-((byte)((bVar6 < bVar68) * bVar6 | (bVar6 >= bVar68) * bVar68) == bVar68) &
                     UNK_014ead53) + cVar55;
        pcVar40[4] = (-((byte)((bVar7 < bVar69) * bVar7 | (bVar7 >= bVar69) * bVar69) == bVar69) &
                     UNK_014ead54) + cVar57;
        pcVar40[5] = (-((byte)((bVar8 < bVar70) * bVar8 | (bVar8 >= bVar70) * bVar70) == bVar70) &
                     UNK_014ead55) + cVar59;
        pcVar40[6] = (-((byte)((bVar9 < bVar71) * bVar9 | (bVar9 >= bVar71) * bVar71) == bVar71) &
                     UNK_014ead56) + cVar61;
        pcVar40[7] = (-((byte)((bVar10 < bVar72) * bVar10 | (bVar10 >= bVar72) * bVar72) == bVar72)
                     & UNK_014ead57) + cVar63;
        pcVar40[8] = (-((byte)((bVar51 < bVar73) * bVar51 | (bVar51 >= bVar73) * bVar73) == bVar73)
                     & UNK_014ead58) + cVar11;
        pcVar40[9] = (-((byte)((bVar52 < bVar74) * bVar52 | (bVar52 >= bVar74) * bVar74) == bVar74)
                     & UNK_014ead59) + cVar12;
        pcVar40[10] = (-((byte)((bVar54 < bVar75) * bVar54 | (bVar54 >= bVar75) * bVar75) == bVar75)
                      & UNK_014ead5a) + cVar13;
        pcVar40[0xb] = (-((byte)((bVar56 < bVar76) * bVar56 | (bVar56 >= bVar76) * bVar76) == bVar76
                         ) & UNK_014ead5b) + cVar14;
        pcVar40[0xc] = (-((byte)((bVar58 < bVar77) * bVar58 | (bVar58 >= bVar77) * bVar77) == bVar77
                         ) & UNK_014ead5c) + cVar15;
        pcVar40[0xd] = (-((byte)((bVar60 < bVar78) * bVar60 | (bVar60 >= bVar78) * bVar78) == bVar78
                         ) & UNK_014ead5d) + cVar16;
        pcVar40[0xe] = (-((byte)((bVar62 < bVar79) * bVar62 | (bVar62 >= bVar79) * bVar79) == bVar79
                         ) & UNK_014ead5e) + cVar17;
        pcVar40[0xf] = (-((byte)((bVar64 < bVar80) * bVar64 | (bVar64 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead5f) + cVar18;
        pcVar39 = pcVar38 + 0x10 + (long)plVar48;
        *pcVar39 = (-((byte)((bVar3 < bVar81) * bVar3 | (bVar3 >= bVar81) * bVar81) == bVar81) &
                   DAT_014ead50) + cVar19;
        pcVar39[1] = (-((byte)((bVar4 < bVar82) * bVar4 | (bVar4 >= bVar82) * bVar82) == bVar82) &
                     UNK_014ead51) + cVar20;
        pcVar39[2] = (-((byte)((bVar5 < bVar83) * bVar5 | (bVar5 >= bVar83) * bVar83) == bVar83) &
                     UNK_014ead52) + cVar21;
        pcVar39[3] = (-((byte)((bVar6 < bVar84) * bVar6 | (bVar6 >= bVar84) * bVar84) == bVar84) &
                     UNK_014ead53) + cVar22;
        pcVar39[4] = (-((byte)((bVar7 < bVar85) * bVar7 | (bVar7 >= bVar85) * bVar85) == bVar85) &
                     UNK_014ead54) + cVar23;
        pcVar39[5] = (-((byte)((bVar8 < bVar86) * bVar8 | (bVar8 >= bVar86) * bVar86) == bVar86) &
                     UNK_014ead55) + cVar24;
        pcVar39[6] = (-((byte)((bVar9 < bVar87) * bVar9 | (bVar9 >= bVar87) * bVar87) == bVar87) &
                     UNK_014ead56) + cVar25;
        pcVar39[7] = (-((byte)((bVar10 < bVar88) * bVar10 | (bVar10 >= bVar88) * bVar88) == bVar88)
                     & UNK_014ead57) + cVar26;
        pcVar39[8] = (-((byte)((bVar51 < bVar89) * bVar51 | (bVar51 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead58) + cVar27;
        pcVar39[9] = (-((byte)((bVar52 < bVar90) * bVar52 | (bVar52 >= bVar90) * bVar90) == bVar90)
                     & UNK_014ead59) + cVar28;
        pcVar39[10] = (-((byte)((bVar54 < bVar91) * bVar54 | (bVar54 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5a) + cVar29;
        pcVar39[0xb] = (-((byte)((bVar56 < bVar92) * bVar56 | (bVar56 >= bVar92) * bVar92) == bVar92
                         ) & UNK_014ead5b) + cVar30;
        pcVar39[0xc] = (-((byte)((bVar58 < bVar93) * bVar58 | (bVar58 >= bVar93) * bVar93) == bVar93
                         ) & UNK_014ead5c) + cVar31;
        pcVar39[0xd] = (-((byte)((bVar60 < bVar94) * bVar60 | (bVar60 >= bVar94) * bVar94) == bVar94
                         ) & UNK_014ead5d) + cVar32;
        pcVar39[0xe] = (-((byte)((bVar62 < bVar95) * bVar62 | (bVar62 >= bVar95) * bVar95) == bVar95
                         ) & UNK_014ead5e) + cVar33;
        pcVar39[0xf] = (-((byte)((bVar64 < bVar96) * bVar64 | (bVar64 >= bVar96) * bVar96) == bVar96
                         ) & UNK_014ead5f) + cVar34;
        plVar48 = plVar48 + 4;
      } while (plVar45 != plVar48);
      if (plVar46 != plVar45) {
        if (((ulong)plVar46 & 0x18) == 0) {
          pcVar39 = (char *)((long)plVar45 + (long)pcVar38);
          goto LAB_05ce0d5c;
        }
        goto LAB_05ce0cf5;
      }
    }
    plVar45 = (long *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    plVar45 = plStack_d8;
    pcVar35 = pcStack_d0;
  }
  pcVar38 = pcVar35 + (long)plVar45;
  plVar46 = plVar45;
  pcVar39 = pcVar35;
  while (((pcVar40 = pcVar38, 0 < (long)plVar46 &&
          (pcVar39 = (char *)memchr(pcVar39,0x3a,plVar46), pcVar39 != (char *)0x0)) &&
         (pcVar40 = pcVar39, *pcVar39 != ':'))) {
    pcVar39 = pcVar39 + 1;
    plVar46 = (long *)(pcVar38 + -(long)pcVar39);
  }
  plVar46 = (long *)(pcVar40 + -(long)pcVar35);
  if (plVar45 < pcVar40 + -(long)pcVar35) {
    plVar46 = plVar45;
  }
  if (pcVar40 == pcVar38) {
    plVar46 = plVar45;
  }
  if ((long *)0xfffffffffffffff7 < plVar46) {
LAB_05ce144d:
    uVar44 = func_0x04882e30();
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pcStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar36 != (long *)0x0) {
      (**(code **)(*plVar36 + 8))(plVar36);
    }
    func_0x0cc46730(&puStack_70);
    if ((uStack_98 & 1) != 0) {
      func_0x0412a280(lStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar44);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (plVar46 < (long *)0x17) {
    uStack_c8 = (undefined8 *)CONCAT71(uStack_c8._1_7_,(char)plVar46 * '\x02');
    lVar37 = (long)&uStack_c8 + 1;
    if (plVar46 != (long *)0x0) goto LAB_05ce0e61;
  }
  else {
    uVar41 = 0x1a;
    if (((ulong)plVar46 | 7) != 0x17) {
      uVar41 = ((ulong)plVar46 | 7) + 1;
    }
    lVar37 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41);
    if (lVar37 == 0) {
      func_0x0eec74c0(uVar41,0);
    }
    auStack_b8._0_8_ = lVar37;
    uStack_c8 = (undefined8 *)(uVar41 | 1);
    uStack_c0 = plVar46;
LAB_05ce0e61:
    func_0x0eee2ee0(lVar37,pcVar35,plVar46);
  }
  *(char *)(lVar37 + (long)plVar46) = '\0';
  func_0x05cf8990(lVar42 + 0xe0,&uStack_c8,&uStack_c8);
  if (((ulong)uStack_c8 & 1) != 0) {
    func_0x0412a280(auStack_b8._0_8_,(ulong)uStack_c8 & 0xfffffffffffffffe);
  }
  uStack_c8 = (undefined8 *)0x0;
  if (((ulong)uStack_e0 & 1) == 0) {
    uStack_c0 = uStack_e0;
    auStack_b8._8_8_ = pcStack_d0;
    auStack_b8._0_8_ = plStack_d8;
  }
  else {
    func_0x0412e5e0(&uStack_c0,pcStack_d0,plStack_d8);
  }
  lStack_a8 = 0;
  if (((ulong)uStack_c0 & 1) == 0) {
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_05ce0f11;
  }
  else if (auStack_b8._0_8_ != 0) {
LAB_05ce0f11:
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar49 = (byte *)((long)&uStack_c0 + 1);
    }
    else {
      pbVar49 = (byte *)auStack_b8._8_8_;
    }
    if ((pbVar49 != (byte *)0x0) && (*pbVar49 != 0)) {
      puVar43 = (undefined8 *)0xcbf29ce484222325;
      uVar41 = func_0x0eee2e90(pbVar49);
      if (uVar41 != 0) {
        uVar47 = (ulong)((uint)uVar41 & 7);
        if (7 < uVar41) {
          uVar41 = uVar41 & 0xfffffffffffffff8;
          do {
            puVar43 = (undefined8 *)
                      (((((((((long)puVar43 * 0x100000001b3 ^ (ulong)*pbVar49) * 0x100000001b3 ^
                            (ulong)pbVar49[1]) * 0x100000001b3 ^ (ulong)pbVar49[2]) * 0x100000001b3
                          ^ (ulong)pbVar49[3]) * 0x100000001b3 ^ (ulong)pbVar49[4]) * 0x100000001b3
                        ^ (ulong)pbVar49[5]) * 0x100000001b3 ^ (ulong)pbVar49[6]) * 0x100000001b3 ^
                      (ulong)pbVar49[7]);
            pbVar49 = pbVar49 + 8;
            uVar41 = uVar41 - 8;
          } while (uVar41 != 0);
        }
        if (uVar47 != 0) {
          uVar41 = 0;
          do {
            puVar43 = (undefined8 *)((long)puVar43 * 0x100000001b3 ^ (ulong)pbVar49[uVar41]);
            uVar41 = uVar41 + 1;
          } while (uVar47 != uVar41);
        }
      }
      goto LAB_05ce1019;
    }
  }
  puVar43 = (undefined8 *)0x0;
LAB_05ce1019:
  uStack_c8 = puVar43;
  puStack_80 = &uStack_c8;
  lVar37 = func_0x05cf8b10(lVar42,&uStack_c8,&UNK_01563a4f,&puStack_80,&puStack_60);
  uVar41 = uStack_40;
  plVar46 = *(long **)(lVar37 + 0x48);
  *(long **)(lVar37 + 0x48) = plVar36;
  if (plVar46 != (long *)0x0) {
    (**(code **)(*plVar46 + 8))();
  }
  puStack_80 = uStack_c8;
  lVar42 = func_0x05cf8dc0(lVar42 + 0xf8,&puStack_80);
  if ((*(byte *)(lVar42 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar42 + 0x28),*(ulong *)(lVar42 + 0x18) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar42 + 0x28) = auStack_b8._8_8_;
  *(long **)(lVar42 + 0x18) = uStack_c0;
  *(undefined8 *)(lVar42 + 0x20) = auStack_b8._0_8_;
  uStack_c0 = (long *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar42 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar42 + 0x30) = 0;
  if (((ulong)uStack_e0 & 1) != 0) {
    func_0x0412a280(pcStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(&puStack_70);
  if ((uStack_98 & 1) != 0) {
    func_0x0412a280(lStack_88,uStack_98 & 0xfffffffffffffffe);
  }
  *(undefined1 *)(plVar36 + 0x26) = 1;
  puVar43 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar43 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar44 = _UNK_01272a36;
  *(ulong *)((long)puVar43 + 0xd) = CONCAT53(_UNK_01272a31,_DAT_01272a2e);
  *(undefined8 *)((long)puVar43 + 0x15) = uVar44;
  uVar44 = CONCAT35(_DAT_01272a2e,_UNK_01272a29);
  *puVar43 = _DAT_01272a21;
  puVar43[1] = uVar44;
  *(undefined1 *)((long)puVar43 + 0x1d) = 0;
  if ((*(byte *)(plVar36 + 0x22) & 1) == 0) {
    func_0x04885070(plVar36 + 0x22,puVar43,0x1d);
  }
  else {
    func_0x04885120(plVar36 + 0x22,puVar43,0x1d);
  }
  lVar42 = plStack_48[1];
  plVar36[0x27] = *plStack_48;
  plVar36[0x28] = lVar42;
  if (uVar41 < 0x17) {
    uStack_98 = CONCAT71(uStack_98._1_7_,(char)uVar41 * '\x02');
    lVar42 = (long)&uStack_98 + 1;
  }
  else {
    uVar47 = 0x1a;
    if ((uVar41 | 7) != 0x17) {
      uVar47 = (uVar41 | 7) + 1;
    }
    lVar42 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (lVar42 == 0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_98 = uVar47 | 1;
    uStack_90 = uVar41;
    lStack_88 = lVar42;
  }
  func_0x0eee2f00(lVar42,uStack_50,uVar41);
  *(undefined1 *)(lVar42 + uVar41) = 0;
  func_0x0c6c8740(&uStack_c8,&UNK_0f3c5758,&uStack_98);
  if ((*(byte *)(plVar36 + 1) & 1) != 0) {
    func_0x0412a280(plVar36[3],plVar36[1] & 0xfffffffffffffffe);
  }
  plVar36[3] = auStack_b8._0_8_;
  plVar36[1] = (long)uStack_c8;
  plVar36[2] = (long)uStack_c0;
  FUN_0c6cf060(plVar36,0xf70ba80);
  uStack_c8 = (undefined8 *)&UNK_0f40da60;
  uStack_c0 = (long *)CONCAT44(0x3f000000,(undefined4)uStack_c0);
  auStack_b8 = (undefined1  [16])0x0;
  lStack_a8 = 0;
  uStack_c0 = (long *)CONCAT71(uStack_c0._1_7_,1);
  plVar46 = plVar36 + 5;
  uStack_e0 = plVar46;
  plStack_d8 = plVar36;
  func_0x0cc81a40(&uStack_c8,&uStack_e0);
  puStack_70 = &UNK_0f40dd80;
  uStack_64 = 0x40200000;
  uStack_68 = 1;
  uStack_e0 = plVar46;
  plStack_d8 = plVar36;
  func_0x0cc81a40(&puStack_70,&uStack_e0);
  puStack_80 = (undefined8 *)&UNK_0f4033e0;
  uStack_76 = 1;
  uStack_78 = 0x101;
  uStack_e0 = plVar46;
  plStack_d8 = plVar36;
  func_0x0cc81a40(&puStack_80,&uStack_e0);
  puStack_60 = &UNK_0f406c60;
  uStack_56 = 0;
  uStack_55 = 0x102;
  uStack_58 = 1;
  uStack_e0 = plVar46;
  plStack_d8 = plVar36;
  func_0x0cc81a40(&puStack_60,&uStack_e0);
  uStack_c8 = (undefined8 *)&UNK_0f40da60;
  uVar44 = auStack_b8._0_8_;
  if (auStack_b8._0_8_ != 0) {
    for (lVar42 = auStack_b8._8_8_; uVar44 != lVar42; lVar42 = lVar42 + -0x18) {
      *(undefined **)(lVar42 + -0x18) = &UNK_0f3773c0;
      plVar36 = *(long **)(lVar42 + -0x10);
      *(undefined8 *)(lVar42 + -0x10) = 0;
      if (plVar36 != (long *)0x0) {
        (**(code **)(*plVar36 + 0x90))();
      }
    }
    auStack_b8._8_8_ = uVar44;
    func_0x0412a280(auStack_b8._0_8_,lStack_a8 - auStack_b8._0_8_);
  }
  if ((uStack_98 & 1) != 0) {
    func_0x0412a280(lStack_88,uStack_98 & 0xfffffffffffffffe);
  }
  func_0x0412a280(puVar43,0x20);
  return;
}



/* ---- referenced strings ----
 * 0x1272a21  itemGroup.name.concretePowder
 * 0x1272a2e  e.concretePowder
 * 0x14ea360          
 */
