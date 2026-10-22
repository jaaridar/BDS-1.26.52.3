/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc44720 (ELF vaddr 0xcb44720)
 * Label: caller-of-callee
 * Body:  [[0cc44720, 0cc45033] [0cc45040, 0cc45859] [0cc45860, 0cc46233] [0cc4642f, 0cc46452] [0cc46456, 0cc4645d] [0cc4648f, 0cc464c1]]
 * Ghidra: FUN_0cc44720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc44720(long param_1)

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
  char cVar10;
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
  undefined4 uVar34;
  undefined4 uVar35;
  byte bVar36;
  ushort uVar37;
  undefined8 *puVar38;
  long lVar39;
  char *pcVar40;
  long lVar41;
  undefined4 *puVar42;
  char *pcVar43;
  long *plVar44;
  char *pcVar45;
  ulong uVar46;
  undefined8 uVar47;
  long *plVar48;
  ulong uVar49;
  long *plVar50;
  long *plVar51;
  undefined8 *puVar52;
  char *pcVar53;
  byte *pbVar54;
  undefined *puVar55;
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
  undefined8 uStack_e8;
  byte bStack_e0;
  byte bStack_df;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  undefined *puStack_68;
  undefined2 uStack_60;
  undefined *puStack_58;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined2 uStack_40;
  long lStack_38;
  char cVar59;
  char cVar61;
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  
  lStack_38 = param_1;
  if ((DAT_0f6eaec8 & 1) == 0) {
    puStack_88 = _DAT_0f6eaed8;
    puStack_98 = (undefined *)CONCAT71(uRam000000000f6eaec9,DAT_0f6eaec8);
    uStack_90 = _DAT_0f6eaed0;
  }
  else {
    func_0x0412e5e0(&puStack_98,_DAT_0f6eaed8,_DAT_0f6eaed0);
  }
  uStack_e8 = (undefined *)_DAT_0f6ffb28;
  bStack_e0 = (byte)_DAT_0f6ffb30;
  bStack_df = (byte)((ulong)_DAT_0f6ffb30 >> 8);
  uStack_de = (undefined2)((ulong)_DAT_0f6ffb30 >> 0x10);
  uStack_dc = (undefined4)((ulong)_DAT_0f6ffb30 >> 0x20);
  if (_DAT_0f6ffb30 != 0) {
    LOCK();
    *(long *)(_DAT_0f6ffb30 + 8) = *(long *)(_DAT_0f6ffb30 + 8) + 1;
    UNLOCK();
  }
  func_0x0cc46680(&puStack_58,&uStack_e8);
  plVar44 = (long *)CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(bStack_df,bStack_e0)));
  if (plVar44 != (long *)0x0) {
    LOCK();
    plVar48 = plVar44 + 1;
    lVar41 = *plVar48;
    *plVar48 = *plVar48 + -1;
    UNLOCK();
    if (lVar41 == 0) {
      (**(code **)(*plVar44 + 0x10))(plVar44);
      func_0x0412c2d0(plVar44);
    }
  }
  puVar38 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3a8);
  if (puVar38 == (undefined8 *)0x0) {
    FUN_0eec74c0(0x3a8,0);
  }
  FUN_0c6c7010(puVar38,&puStack_98,0);
  *puVar38 = &UNK_0f3dd290;
  *(undefined1 *)((long)puVar38 + 0x136) = 0;
  *(byte *)((long)puVar38 + 0x134) = *(byte *)((long)puVar38 + 0x134) & 0xe9;
  puVar38[0x21] = 0;
  *(undefined4 *)((long)puVar38 + 300) = 0x3f800000;
  *(undefined4 *)(puVar38 + 0x29) = 0x3f666666;
  if (_DAT_0f6ffb20 == 0) {
    lVar41 = 0;
    lVar39 = 0;
  }
  else {
    lVar39 = FUN_0412c300();
    lVar41 = 0;
    if (lVar39 != 0) {
      lVar41 = _DAT_0f6ffb18;
    }
  }
  puVar38[0x73] = lVar41;
  plVar48 = (long *)puVar38[0x74];
  puVar38[0x74] = lVar39;
  if (plVar48 != (long *)0x0) {
    LOCK();
    plVar50 = plVar48 + 1;
    lVar41 = *plVar50;
    *plVar50 = *plVar50 + -1;
    UNLOCK();
    if (lVar41 == 0) {
      (**(code **)(*plVar48 + 0x10))(plVar48);
      func_0x0412c2d0(plVar48);
    }
  }
  bVar56 = (*(byte *)(puVar38 + 0x1a) & 1) != 0;
  lVar41 = (long)puVar38 + 0xd1;
  if (bVar56) {
    lVar41 = puVar38[0x1c];
  }
  plVar48 = (long *)(ulong)(*(byte *)(puVar38 + 0x1a) >> 1);
  if (bVar56) {
    plVar48 = (long *)puVar38[0x1b];
  }
  if (plVar48 < (long *)0xfffffffffffffff8) {
    if (plVar48 < (long *)0x17) {
      uStack_c0 = (undefined *)CONCAT71(uStack_c0._1_7_,(char)plVar48 * '\x02');
      pcVar43 = (char *)((long)&uStack_c0 + 1);
      if (plVar48 != (long *)0x0) goto LAB_0cc4493e;
    }
    else {
      uVar46 = 0x1a;
      if (((ulong)plVar48 | 7) != 0x17) {
        uVar46 = ((ulong)plVar48 | 7) + 1;
      }
      pcVar43 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
      if (pcVar43 == (char *)0x0) {
        FUN_0eec74c0(uVar46,0);
      }
      uStack_c0 = (undefined *)(uVar46 | 1);
      plStack_b8 = plVar48;
      pcStack_b0 = pcVar43;
LAB_0cc4493e:
      func_0x0eee2f00(pcVar43,lVar41,plVar48);
    }
    pcVar53 = (char *)((long)&uStack_c0 + 1);
    pcVar43[(long)plVar48] = '\0';
    plVar44 = (long *)(ulong)((byte)uStack_c0 >> 1);
    plVar48 = plStack_b8;
    pcVar43 = pcStack_b0;
    if (((ulong)uStack_c0 & 1) == 0) {
      plVar48 = plVar44;
      pcVar43 = pcVar53;
    }
    if (plVar48 != (long *)0x0) {
      pcVar40 = pcVar43;
      if (plVar48 < (long *)0x8) {
LAB_0cc44a9c:
        do {
          cVar1 = *pcVar40;
          cVar59 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar59 = cVar1;
          }
          *pcVar40 = cVar59;
          pcVar40 = pcVar40 + 1;
        } while (pcVar40 != pcVar43 + (long)plVar48);
      }
      else if (plVar48 < (long *)0x20) {
        plVar44 = (long *)0x0;
LAB_0cc44a35:
        plVar50 = (long *)((ulong)plVar48 & 0xfffffffffffffff8);
        pcVar40 = pcVar43 + (long)plVar50;
        do {
          uVar47 = *(undefined8 *)(pcVar43 + (long)plVar44);
          bVar57 = (char)uVar47 + DAT_014e9110;
          cVar59 = (char)((ulong)uVar47 >> 8);
          bVar58 = cVar59 + DAT_014e9110._1_1_;
          cVar61 = (char)((ulong)uVar47 >> 0x10);
          bVar60 = cVar61 + DAT_014e9110._2_1_;
          cVar63 = (char)((ulong)uVar47 >> 0x18);
          bVar62 = cVar63 + DAT_014e9110._3_1_;
          cVar65 = (char)((ulong)uVar47 >> 0x20);
          bVar64 = cVar65 + DAT_014e9110._4_1_;
          cVar67 = (char)((ulong)uVar47 >> 0x28);
          bVar66 = cVar67 + DAT_014e9110._5_1_;
          cVar69 = (char)((ulong)uVar47 >> 0x30);
          cVar1 = (char)((ulong)uVar47 >> 0x38);
          bVar68 = cVar69 + DAT_014e9110._6_1_;
          bVar70 = cVar1 + DAT_014e9110._7_1_;
          bVar36 = DAT_014e8cb0;
          bVar3 = DAT_014e8cb0._1_1_;
          bVar4 = DAT_014e8cb0._2_1_;
          bVar5 = DAT_014e8cb0._3_1_;
          bVar6 = DAT_014e8cb0._4_1_;
          bVar7 = DAT_014e8cb0._5_1_;
          bVar8 = DAT_014e8cb0._6_1_;
          bVar9 = DAT_014e8cb0._7_1_;
          *(ulong *)(pcVar43 + (long)plVar44) =
               CONCAT17((~-((byte)((bVar70 < bVar9) * bVar9 | (bVar70 >= bVar9) * bVar70) == bVar70)
                        & UNK_014ea367) + cVar1,
                        CONCAT16((~-((byte)((bVar68 < bVar8) * bVar8 | (bVar68 >= bVar8) * bVar68)
                                    == bVar68) & UNK_014ea366) + cVar69,
                                 CONCAT15((~-((byte)((bVar66 < bVar7) * bVar7 |
                                                    (bVar66 >= bVar7) * bVar66) == bVar66) &
                                          UNK_014ea365) + cVar67,
                                          CONCAT14((~-((byte)((bVar64 < bVar6) * bVar6 |
                                                             (bVar64 >= bVar6) * bVar64) == bVar64)
                                                   & UNK_014ea364) + cVar65,
                                                   CONCAT13((~-((byte)((bVar62 < bVar5) * bVar5 |
                                                                      (bVar62 >= bVar5) * bVar62) ==
                                                               bVar62) & UNK_014ea363) + cVar63,
                                                            CONCAT12((~-((byte)((bVar60 < bVar4) *
                                                                                bVar4 | (bVar60 >=
                                                                                        bVar4) * 
                                                  bVar60) == bVar60) & UNK_014ea362) + cVar61,
                                                  CONCAT11((~-((byte)((bVar58 < bVar3) * bVar3 |
                                                                     (bVar58 >= bVar3) * bVar58) ==
                                                              bVar58) & UNK_014ea361) + cVar59,
                                                           (~-((byte)((bVar57 < bVar36) * bVar36 |
                                                                     (bVar57 >= bVar36) * bVar57) ==
                                                              bVar57) & DAT_014ea360) + (char)uVar47
                                                          )))))));
          plVar44 = plVar44 + 1;
        } while (plVar50 != plVar44);
        if (plVar48 != plVar50) goto LAB_0cc44a9c;
      }
      else {
        plVar44 = (long *)((ulong)plVar48 & 0xffffffffffffffe0);
        plVar50 = (long *)0x0;
        do {
          pcVar40 = pcVar43 + (long)plVar50;
          cVar1 = pcVar40[1];
          cVar59 = pcVar40[2];
          cVar61 = pcVar40[3];
          cVar63 = pcVar40[4];
          cVar65 = pcVar40[5];
          cVar67 = pcVar40[6];
          cVar69 = pcVar40[7];
          cVar10 = pcVar40[8];
          cVar11 = pcVar40[9];
          cVar12 = pcVar40[10];
          cVar13 = pcVar40[0xb];
          cVar14 = pcVar40[0xc];
          cVar15 = pcVar40[0xd];
          cVar16 = pcVar40[0xe];
          cVar17 = pcVar40[0xf];
          pcVar45 = pcVar43 + 0x10 + (long)plVar50;
          cVar18 = *pcVar45;
          cVar19 = pcVar45[1];
          cVar20 = pcVar45[2];
          cVar21 = pcVar45[3];
          cVar22 = pcVar45[4];
          cVar23 = pcVar45[5];
          cVar24 = pcVar45[6];
          cVar25 = pcVar45[7];
          cVar26 = pcVar45[8];
          cVar27 = pcVar45[9];
          cVar28 = pcVar45[10];
          cVar29 = pcVar45[0xb];
          cVar30 = pcVar45[0xc];
          cVar31 = pcVar45[0xd];
          cVar32 = pcVar45[0xe];
          cVar33 = pcVar45[0xf];
          bVar71 = *pcVar40 + DAT_014e86b0;
          bVar72 = cVar1 + DAT_014e86b0._1_1_;
          bVar73 = cVar59 + DAT_014e86b0._2_1_;
          bVar74 = cVar61 + DAT_014e86b0._3_1_;
          bVar75 = cVar63 + DAT_014e86b0._4_1_;
          bVar76 = cVar65 + DAT_014e86b0._5_1_;
          bVar77 = cVar67 + DAT_014e86b0._6_1_;
          bVar78 = cVar69 + DAT_014e86b0._7_1_;
          bVar79 = cVar10 + DAT_014e86b0._8_1_;
          bVar80 = cVar11 + DAT_014e86b0._9_1_;
          bVar81 = cVar12 + DAT_014e86b0._10_1_;
          bVar82 = cVar13 + DAT_014e86b0._11_1_;
          bVar83 = cVar14 + DAT_014e86b0._12_1_;
          bVar84 = cVar15 + DAT_014e86b0._13_1_;
          bVar85 = cVar16 + DAT_014e86b0._14_1_;
          bVar86 = cVar17 + DAT_014e86b0._15_1_;
          bVar87 = cVar18 + DAT_014e86b0;
          bVar88 = cVar19 + DAT_014e86b0._1_1_;
          bVar89 = cVar20 + DAT_014e86b0._2_1_;
          bVar90 = cVar21 + DAT_014e86b0._3_1_;
          bVar91 = cVar22 + DAT_014e86b0._4_1_;
          bVar92 = cVar23 + DAT_014e86b0._5_1_;
          bVar93 = cVar24 + DAT_014e86b0._6_1_;
          bVar94 = cVar25 + DAT_014e86b0._7_1_;
          bVar95 = cVar26 + DAT_014e86b0._8_1_;
          bVar96 = cVar27 + DAT_014e86b0._9_1_;
          bVar97 = cVar28 + DAT_014e86b0._10_1_;
          bVar98 = cVar29 + DAT_014e86b0._11_1_;
          bVar99 = cVar30 + DAT_014e86b0._12_1_;
          bVar100 = cVar31 + DAT_014e86b0._13_1_;
          bVar101 = cVar32 + DAT_014e86b0._14_1_;
          bVar102 = cVar33 + DAT_014e86b0._15_1_;
          bVar36 = DAT_014e4170;
          bVar3 = DAT_014e4170._1_1_;
          bVar4 = DAT_014e4170._2_1_;
          bVar5 = DAT_014e4170._3_1_;
          bVar6 = DAT_014e4170._4_1_;
          bVar7 = DAT_014e4170._5_1_;
          bVar8 = DAT_014e4170._6_1_;
          bVar9 = DAT_014e4170._7_1_;
          bVar57 = DAT_014e4170._8_1_;
          bVar58 = DAT_014e4170._9_1_;
          bVar60 = DAT_014e4170._10_1_;
          bVar62 = DAT_014e4170._11_1_;
          bVar64 = DAT_014e4170._12_1_;
          bVar66 = DAT_014e4170._13_1_;
          bVar68 = DAT_014e4170._14_1_;
          bVar70 = DAT_014e4170._15_1_;
          pcVar45 = pcVar43 + (long)plVar50;
          *pcVar45 = (-((byte)((bVar36 < bVar71) * bVar36 | (bVar36 >= bVar71) * bVar71) == bVar71)
                     & DAT_014ead50) + *pcVar40;
          pcVar45[1] = (-((byte)((bVar3 < bVar72) * bVar3 | (bVar3 >= bVar72) * bVar72) == bVar72) &
                       UNK_014ead51) + cVar1;
          pcVar45[2] = (-((byte)((bVar4 < bVar73) * bVar4 | (bVar4 >= bVar73) * bVar73) == bVar73) &
                       UNK_014ead52) + cVar59;
          pcVar45[3] = (-((byte)((bVar5 < bVar74) * bVar5 | (bVar5 >= bVar74) * bVar74) == bVar74) &
                       UNK_014ead53) + cVar61;
          pcVar45[4] = (-((byte)((bVar6 < bVar75) * bVar6 | (bVar6 >= bVar75) * bVar75) == bVar75) &
                       UNK_014ead54) + cVar63;
          pcVar45[5] = (-((byte)((bVar7 < bVar76) * bVar7 | (bVar7 >= bVar76) * bVar76) == bVar76) &
                       UNK_014ead55) + cVar65;
          pcVar45[6] = (-((byte)((bVar8 < bVar77) * bVar8 | (bVar8 >= bVar77) * bVar77) == bVar77) &
                       UNK_014ead56) + cVar67;
          pcVar45[7] = (-((byte)((bVar9 < bVar78) * bVar9 | (bVar9 >= bVar78) * bVar78) == bVar78) &
                       UNK_014ead57) + cVar69;
          pcVar45[8] = (-((byte)((bVar57 < bVar79) * bVar57 | (bVar57 >= bVar79) * bVar79) == bVar79
                         ) & UNK_014ead58) + cVar10;
          pcVar45[9] = (-((byte)((bVar58 < bVar80) * bVar58 | (bVar58 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead59) + cVar11;
          pcVar45[10] = (-((byte)((bVar60 < bVar81) * bVar60 | (bVar60 >= bVar81) * bVar81) ==
                          bVar81) & UNK_014ead5a) + cVar12;
          pcVar45[0xb] = (-((byte)((bVar62 < bVar82) * bVar62 | (bVar62 >= bVar82) * bVar82) ==
                           bVar82) & UNK_014ead5b) + cVar13;
          pcVar45[0xc] = (-((byte)((bVar64 < bVar83) * bVar64 | (bVar64 >= bVar83) * bVar83) ==
                           bVar83) & UNK_014ead5c) + cVar14;
          pcVar45[0xd] = (-((byte)((bVar66 < bVar84) * bVar66 | (bVar66 >= bVar84) * bVar84) ==
                           bVar84) & UNK_014ead5d) + cVar15;
          pcVar45[0xe] = (-((byte)((bVar68 < bVar85) * bVar68 | (bVar68 >= bVar85) * bVar85) ==
                           bVar85) & UNK_014ead5e) + cVar16;
          pcVar45[0xf] = (-((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) ==
                           bVar86) & UNK_014ead5f) + cVar17;
          pcVar40 = pcVar43 + 0x10 + (long)plVar50;
          *pcVar40 = (-((byte)((bVar36 < bVar87) * bVar36 | (bVar36 >= bVar87) * bVar87) == bVar87)
                     & DAT_014ead50) + cVar18;
          pcVar40[1] = (-((byte)((bVar3 < bVar88) * bVar3 | (bVar3 >= bVar88) * bVar88) == bVar88) &
                       UNK_014ead51) + cVar19;
          pcVar40[2] = (-((byte)((bVar4 < bVar89) * bVar4 | (bVar4 >= bVar89) * bVar89) == bVar89) &
                       UNK_014ead52) + cVar20;
          pcVar40[3] = (-((byte)((bVar5 < bVar90) * bVar5 | (bVar5 >= bVar90) * bVar90) == bVar90) &
                       UNK_014ead53) + cVar21;
          pcVar40[4] = (-((byte)((bVar6 < bVar91) * bVar6 | (bVar6 >= bVar91) * bVar91) == bVar91) &
                       UNK_014ead54) + cVar22;
          pcVar40[5] = (-((byte)((bVar7 < bVar92) * bVar7 | (bVar7 >= bVar92) * bVar92) == bVar92) &
                       UNK_014ead55) + cVar23;
          pcVar40[6] = (-((byte)((bVar8 < bVar93) * bVar8 | (bVar8 >= bVar93) * bVar93) == bVar93) &
                       UNK_014ead56) + cVar24;
          pcVar40[7] = (-((byte)((bVar9 < bVar94) * bVar9 | (bVar9 >= bVar94) * bVar94) == bVar94) &
                       UNK_014ead57) + cVar25;
          pcVar40[8] = (-((byte)((bVar57 < bVar95) * bVar57 | (bVar57 >= bVar95) * bVar95) == bVar95
                         ) & UNK_014ead58) + cVar26;
          pcVar40[9] = (-((byte)((bVar58 < bVar96) * bVar58 | (bVar58 >= bVar96) * bVar96) == bVar96
                         ) & UNK_014ead59) + cVar27;
          pcVar40[10] = (-((byte)((bVar60 < bVar97) * bVar60 | (bVar60 >= bVar97) * bVar97) ==
                          bVar97) & UNK_014ead5a) + cVar28;
          pcVar40[0xb] = (-((byte)((bVar62 < bVar98) * bVar62 | (bVar62 >= bVar98) * bVar98) ==
                           bVar98) & UNK_014ead5b) + cVar29;
          pcVar40[0xc] = (-((byte)((bVar64 < bVar99) * bVar64 | (bVar64 >= bVar99) * bVar99) ==
                           bVar99) & UNK_014ead5c) + cVar30;
          pcVar40[0xd] = (-((byte)((bVar66 < bVar100) * bVar66 | (bVar66 >= bVar100) * bVar100) ==
                           bVar100) & UNK_014ead5d) + cVar31;
          pcVar40[0xe] = (-((byte)((bVar68 < bVar101) * bVar68 | (bVar68 >= bVar101) * bVar101) ==
                           bVar101) & UNK_014ead5e) + cVar32;
          pcVar40[0xf] = (-((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) ==
                           bVar102) & UNK_014ead5f) + cVar33;
          plVar50 = plVar50 + 4;
        } while (plVar44 != plVar50);
        if (plVar48 != plVar44) {
          if (((ulong)plVar48 & 0x18) == 0) {
            pcVar40 = (char *)((long)plVar44 + (long)pcVar43);
            goto LAB_0cc44a9c;
          }
          goto LAB_0cc44a35;
        }
      }
      plVar44 = (long *)(ulong)((byte)uStack_c0 >> 1);
    }
    if (((ulong)uStack_c0 & 1) != 0) {
      plVar44 = plStack_b8;
      pcVar53 = pcStack_b0;
    }
    pcVar43 = pcVar53 + (long)plVar44;
    plVar48 = plVar44;
    pcVar40 = pcVar53;
    while (((pcVar45 = pcVar43, 0 < (long)plVar48 &&
            (pcVar40 = (char *)func_0x0eee2ef0(pcVar40,0x3a,plVar48), pcVar40 != (char *)0x0)) &&
           (pcVar45 = pcVar40, *pcVar40 != ':'))) {
      pcVar40 = pcVar40 + 1;
      plVar48 = (long *)(pcVar43 + -(long)pcVar40);
    }
    plVar48 = (long *)(pcVar45 + -(long)pcVar53);
    if (plVar44 < pcVar45 + -(long)pcVar53) {
      plVar48 = plVar44;
    }
    if (pcVar45 == pcVar43) {
      plVar48 = plVar44;
    }
    if ((long *)0xfffffffffffffff7 < plVar48) goto LAB_0cc46216;
    if (plVar48 < (long *)0x17) {
      uStack_e8 = (undefined *)CONCAT71(uStack_e8._1_7_,(byte)plVar48 * '\x02');
      lVar41 = (long)&uStack_e8 + 1;
      if (plVar48 != (long *)0x0) goto LAB_0cc44b9e;
    }
    else {
      uVar46 = 0x1a;
      if (((ulong)plVar48 | 7) != 0x17) {
        uVar46 = ((ulong)plVar48 | 7) + 1;
      }
      lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
      if (lVar41 == 0) {
        FUN_0eec74c0(uVar46,0);
      }
      uStack_d8 = (undefined4)lVar41;
      uStack_d4 = (undefined4)((ulong)lVar41 >> 0x20);
      uStack_e8 = (undefined *)(uVar46 | 1);
      bStack_df = (byte)((ulong)plVar48 >> 8);
      uStack_de = (undefined2)((ulong)plVar48 >> 0x10);
      uStack_dc = (undefined4)((ulong)plVar48 >> 0x20);
      bStack_e0 = (byte)plVar48;
LAB_0cc44b9e:
      func_0x0eee2ee0(lVar41,pcVar53,plVar48);
    }
    *(char *)(lVar41 + (long)plVar48) = '\0';
    func_0x05cf8990(0xf6ffac0,&uStack_e8,&uStack_e8);
    if (((ulong)uStack_e8 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_d4,uStack_d8),(ulong)uStack_e8 & 0xfffffffffffffffe);
    }
    uStack_e8 = (undefined *)0x0;
    if (((ulong)uStack_c0 & 1) == 0) {
      uStack_d0 = SUB84(pcStack_b0,0);
      uStack_cc = (undefined4)((ulong)pcStack_b0 >> 0x20);
      bStack_e0 = (byte)uStack_c0;
      bStack_df = (byte)((ulong)uStack_c0 >> 8);
      uStack_de = (undefined2)((ulong)uStack_c0 >> 0x10);
      uStack_dc = (undefined4)((ulong)uStack_c0 >> 0x20);
      uStack_d8 = SUB84(plStack_b8,0);
      uStack_d4 = (undefined4)((ulong)plStack_b8 >> 0x20);
    }
    else {
      func_0x0412e5e0(&bStack_e0,pcStack_b0,plStack_b8);
    }
    lStack_c8 = 0;
    if ((bStack_e0 & 1) == 0) {
      if (bStack_e0 >> 1 != 0) goto LAB_0cc44c48;
LAB_0cc44d47:
      puVar55 = (undefined *)0x0;
    }
    else {
      if (CONCAT44(uStack_d4,uStack_d8) == 0) goto LAB_0cc44d47;
LAB_0cc44c48:
      if ((bStack_e0 & 1) == 0) {
        pbVar54 = &bStack_df;
        if (pbVar54 != (byte *)0x0) goto LAB_0cc44c69;
        goto LAB_0cc44d47;
      }
      pbVar54 = (byte *)CONCAT44(uStack_cc,uStack_d0);
      if (pbVar54 == (byte *)0x0) goto LAB_0cc44d47;
LAB_0cc44c69:
      if (*pbVar54 == 0) goto LAB_0cc44d47;
      puVar55 = (undefined *)0xcbf29ce484222325;
      uVar46 = strlen(pbVar54);
      if (uVar46 != 0) {
        uVar49 = (ulong)((uint)uVar46 & 7);
        if (7 < uVar46) {
          uVar46 = uVar46 & 0xfffffffffffffff8;
          do {
            puVar55 = (undefined *)
                      (((((((((long)puVar55 * 0x100000001b3 ^ (ulong)*pbVar54) * 0x100000001b3 ^
                            (ulong)pbVar54[1]) * 0x100000001b3 ^ (ulong)pbVar54[2]) * 0x100000001b3
                          ^ (ulong)pbVar54[3]) * 0x100000001b3 ^ (ulong)pbVar54[4]) * 0x100000001b3
                        ^ (ulong)pbVar54[5]) * 0x100000001b3 ^ (ulong)pbVar54[6]) * 0x100000001b3 ^
                      (ulong)pbVar54[7]);
            pbVar54 = pbVar54 + 8;
            uVar46 = uVar46 - 8;
          } while (uVar46 != 0);
        }
        if (uVar49 != 0) {
          uVar46 = 0;
          do {
            puVar55 = (undefined *)((long)puVar55 * 0x100000001b3 ^ (ulong)pbVar54[uVar46]);
            uVar46 = uVar46 + 1;
          } while (uVar49 != uVar46);
        }
      }
    }
    uStack_e8 = puVar55;
    puStack_68 = (undefined *)&uStack_e8;
    lVar41 = func_0x05cf8b10(0xf6ff9e0,&uStack_e8,&UNK_01563a4f,&puStack_68,&puStack_48);
    plVar44 = *(long **)(lVar41 + 0x48);
    *(undefined8 **)(lVar41 + 0x48) = puVar38;
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))();
    }
    puStack_68 = uStack_e8;
    lVar41 = func_0x05cf8dc0(0xf6ffad8,&puStack_68);
    if ((*(byte *)(lVar41 + 0x18) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar41 + 0x28),*(ulong *)(lVar41 + 0x18) & 0xfffffffffffffffe)
      ;
    }
    *(ulong *)(lVar41 + 0x28) = CONCAT44(uStack_cc,uStack_d0);
    *(ulong *)(lVar41 + 0x18) =
         CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(bStack_df,bStack_e0)));
    *(ulong *)(lVar41 + 0x20) = CONCAT44(uStack_d4,uStack_d8);
    bStack_e0 = 0;
    bStack_df = 0;
    *(undefined **)(lVar41 + 0x10) = uStack_e8;
    *(undefined8 *)(lVar41 + 0x30) = 0;
    if (((ulong)uStack_c0 & 1) != 0) {
      func_0x0412a280(pcStack_b0,(ulong)uStack_c0 & 0xfffffffffffffffe);
    }
    func_0x0cc46730(&puStack_58);
    if (((ulong)puStack_98 & 1) != 0) {
      func_0x0412a280(puStack_88,(ulong)puStack_98 & 0xfffffffffffffffe);
    }
    puStack_58 = &UNK_0f40dd80;
    uStack_4c = 0;
    uStack_50 = CONCAT11(uStack_50._1_1_,1);
    puVar52 = puVar38 + 5;
    func_0x0ce6c6a0(&puStack_58,puVar52);
    uStack_e8 = &UNK_0f40da60;
    uStack_dc = 0xbf800000;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    lStack_c8 = 0;
    bStack_e0 = 1;
    func_0x0ce6cb00(&uStack_e8,puVar52);
    puVar42 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
    if (puVar42 == (undefined4 *)0x0) {
      FUN_0eec74c0(5,0);
    }
    puStack_80 = (undefined4 *)((long)puVar42 + 5);
    *puVar42 = 0x30001;
    *(undefined1 *)(puVar42 + 1) = 0;
    puStack_98 = &UNK_0f4073f0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    puStack_88 = puVar42;
    puStack_78 = puStack_80;
    func_0x0cdab160(&puStack_98,puVar52);
    puStack_68 = &UNK_0f403370;
    uStack_60 = CONCAT11(uStack_60._1_1_,1);
    func_0x0cd530f0(&puStack_68,puVar52);
    *(byte *)((long)puVar38 + 0x133) = *(byte *)((long)puVar38 + 0x133) | 0x40;
    *(undefined1 *)(puVar38 + 0x26) = 5;
    puStack_48 = &UNK_0f4076c8;
    uStack_40 = 1;
    func_0x0cdbe530(&puStack_48,puVar52);
    pcVar43 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
    if (pcVar43 == (char *)0x0) {
      FUN_0eec74c0(4,0);
    }
    pcStack_a8 = pcVar43 + 4;
    pcVar43[0] = '\0';
    pcVar43[1] = '\x02';
    pcVar43[2] = '\x03';
    pcVar43[3] = '\x01';
    uStack_c0 = &UNK_0f40db40;
    plStack_b8 = (long *)CONCAT53(plStack_b8._3_5_,0x20000);
    plStack_b8 = (long *)CONCAT62(plStack_b8._2_6_,1);
    pcStack_b0 = pcVar43;
    pcStack_a0 = pcStack_a8;
    func_0x0ce67cd0(&uStack_c0,puVar52);
    uStack_c0 = &UNK_0f40db40;
    if (pcStack_b0 != (char *)0x0) {
      pcStack_a8 = pcStack_b0;
      func_0x0412a280(pcStack_b0,(long)pcStack_a0 - (long)pcStack_b0);
    }
    puStack_98 = &UNK_0f4073f0;
    if (puStack_88 != (undefined4 *)0x0) {
      puStack_80 = puStack_88;
      func_0x0412a280(puStack_88,(long)puStack_78 - (long)puStack_88);
    }
    uVar35 = uStack_d4;
    uVar34 = uStack_d8;
    uStack_e8 = &UNK_0f40da60;
    lVar41 = CONCAT44(uStack_d4,uStack_d8);
    if (lVar41 != 0) {
      lVar39 = CONCAT44(uStack_cc,uStack_d0);
      if (lVar41 != lVar39) {
        do {
          *(undefined **)(lVar39 + -0x18) = &UNK_0f3773c0;
          plVar44 = *(long **)(lVar39 + -0x10);
          *(undefined8 *)(lVar39 + -0x10) = 0;
          if (plVar44 != (long *)0x0) {
            (**(code **)(*plVar44 + 0x90))();
          }
          lVar39 = lVar39 + -0x18;
        } while (lVar39 != lVar41);
        lVar41 = CONCAT44(uStack_d4,uStack_d8);
      }
      uStack_d0 = uVar34;
      uStack_cc = uVar35;
      func_0x0412a280(lVar41,lStack_c8 - lVar41);
    }
    if ((DAT_0f6eae58 & 1) == 0) {
      puStack_88 = _DAT_0f6eae68;
      puStack_98 = (undefined *)CONCAT71(uRam000000000f6eae59,DAT_0f6eae58);
      uStack_90 = _DAT_0f6eae60;
    }
    else {
      func_0x0412e5e0(&puStack_98,_DAT_0f6eae68,_DAT_0f6eae60);
    }
    uStack_e8 = (undefined *)_DAT_0f6ffb28;
    bStack_e0 = (byte)_DAT_0f6ffb30;
    bStack_df = (byte)((ulong)_DAT_0f6ffb30 >> 8);
    uStack_de = (undefined2)((ulong)_DAT_0f6ffb30 >> 0x10);
    uStack_dc = (undefined4)((ulong)_DAT_0f6ffb30 >> 0x20);
    if (_DAT_0f6ffb30 != 0) {
      LOCK();
      *(long *)(_DAT_0f6ffb30 + 8) = *(long *)(_DAT_0f6ffb30 + 8) + 1;
      UNLOCK();
    }
    func_0x0cc46680(&puStack_58,&uStack_e8);
    plVar44 = (long *)CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(bStack_df,bStack_e0)));
    if (plVar44 != (long *)0x0) {
      LOCK();
      plVar48 = plVar44 + 1;
      lVar41 = *plVar48;
      *plVar48 = *plVar48 + -1;
      UNLOCK();
      if (lVar41 == 0) {
        (**(code **)(*plVar44 + 0x10))(plVar44);
        func_0x0412c2d0(plVar44);
      }
    }
    puVar38 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3a8);
    if (puVar38 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x3a8,0);
    }
    FUN_0c6c7010(puVar38,&puStack_98,0x230);
    *puVar38 = &UNK_0f426430;
    *(byte *)((long)puVar38 + 0x135) = *(byte *)((long)puVar38 + 0x135) | 8;
    *(undefined4 *)(puVar38 + 0x29) = 0x3f666666;
    *(undefined1 *)((long)puVar38 + 0x72) = 1;
    if (_DAT_0f6ffb20 == 0) {
      lVar41 = 0;
      lVar39 = 0;
    }
    else {
      lVar39 = FUN_0412c300();
      lVar41 = 0;
      if (lVar39 != 0) {
        lVar41 = _DAT_0f6ffb18;
      }
    }
    puVar38[0x73] = lVar41;
    plVar44 = (long *)puVar38[0x74];
    puVar38[0x74] = lVar39;
    if (plVar44 != (long *)0x0) {
      LOCK();
      plVar48 = plVar44 + 1;
      lVar41 = *plVar48;
      *plVar48 = *plVar48 + -1;
      UNLOCK();
      if (lVar41 == 0) {
        (**(code **)(*plVar44 + 0x10))(plVar44);
        func_0x0412c2d0(plVar44);
      }
    }
    bVar56 = (*(byte *)(puVar38 + 0x1a) & 1) != 0;
    lVar41 = (long)puVar38 + 0xd1;
    if (bVar56) {
      lVar41 = puVar38[0x1c];
    }
    plVar48 = (long *)(ulong)(*(byte *)(puVar38 + 0x1a) >> 1);
    if (bVar56) {
      plVar48 = (long *)puVar38[0x1b];
    }
    if ((long *)0xfffffffffffffff7 < plVar48) goto LAB_0cc4621b;
    if (plVar48 < (long *)0x17) {
      uStack_c0 = (undefined *)CONCAT71(uStack_c0._1_7_,(char)plVar48 * '\x02');
      pcVar43 = (char *)((long)&uStack_c0 + 1);
      if (plVar48 != (long *)0x0) goto LAB_0cc45274;
    }
    else {
      uVar46 = 0x1a;
      if (((ulong)plVar48 | 7) != 0x17) {
        uVar46 = ((ulong)plVar48 | 7) + 1;
      }
      pcVar43 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
      if (pcVar43 == (char *)0x0) {
        FUN_0eec74c0(uVar46,0);
      }
      uStack_c0 = (undefined *)(uVar46 | 1);
      plStack_b8 = plVar48;
      pcStack_b0 = pcVar43;
LAB_0cc45274:
      func_0x0eee2f00(pcVar43,lVar41,plVar48);
    }
    pcVar43[(long)plVar48] = '\0';
    plVar44 = (long *)(ulong)((byte)uStack_c0 >> 1);
    pcVar43 = (char *)((long)&uStack_c0 + 1);
    plVar48 = plStack_b8;
    pcVar53 = pcStack_b0;
    if (((ulong)uStack_c0 & 1) == 0) {
      plVar48 = plVar44;
      pcVar53 = pcVar43;
    }
    if (plVar48 != (long *)0x0) {
      pcVar40 = pcVar53;
      if (plVar48 < (long *)0x8) {
LAB_0cc453cc:
        do {
          cVar1 = *pcVar40;
          cVar59 = cVar1 + ' ';
          if (0x19 < (byte)(cVar1 + 0xbfU)) {
            cVar59 = cVar1;
          }
          *pcVar40 = cVar59;
          pcVar40 = pcVar40 + 1;
        } while (pcVar40 != pcVar53 + (long)plVar48);
      }
      else if (plVar48 < (long *)0x20) {
        plVar44 = (long *)0x0;
LAB_0cc45365:
        plVar50 = (long *)((ulong)plVar48 & 0xfffffffffffffff8);
        pcVar40 = pcVar53 + (long)plVar50;
        do {
          uVar47 = *(undefined8 *)(pcVar53 + (long)plVar44);
          bVar57 = (char)uVar47 + DAT_014e9110;
          cVar59 = (char)((ulong)uVar47 >> 8);
          bVar58 = cVar59 + DAT_014e9110._1_1_;
          cVar61 = (char)((ulong)uVar47 >> 0x10);
          bVar60 = cVar61 + DAT_014e9110._2_1_;
          cVar63 = (char)((ulong)uVar47 >> 0x18);
          bVar62 = cVar63 + DAT_014e9110._3_1_;
          cVar65 = (char)((ulong)uVar47 >> 0x20);
          bVar64 = cVar65 + DAT_014e9110._4_1_;
          cVar67 = (char)((ulong)uVar47 >> 0x28);
          bVar66 = cVar67 + DAT_014e9110._5_1_;
          cVar69 = (char)((ulong)uVar47 >> 0x30);
          cVar1 = (char)((ulong)uVar47 >> 0x38);
          bVar68 = cVar69 + DAT_014e9110._6_1_;
          bVar70 = cVar1 + DAT_014e9110._7_1_;
          bVar36 = DAT_014e8cb0;
          bVar3 = DAT_014e8cb0._1_1_;
          bVar4 = DAT_014e8cb0._2_1_;
          bVar5 = DAT_014e8cb0._3_1_;
          bVar6 = DAT_014e8cb0._4_1_;
          bVar7 = DAT_014e8cb0._5_1_;
          bVar8 = DAT_014e8cb0._6_1_;
          bVar9 = DAT_014e8cb0._7_1_;
          *(ulong *)(pcVar53 + (long)plVar44) =
               CONCAT17((~-((byte)((bVar70 < bVar9) * bVar9 | (bVar70 >= bVar9) * bVar70) == bVar70)
                        & UNK_014ea367) + cVar1,
                        CONCAT16((~-((byte)((bVar68 < bVar8) * bVar8 | (bVar68 >= bVar8) * bVar68)
                                    == bVar68) & UNK_014ea366) + cVar69,
                                 CONCAT15((~-((byte)((bVar66 < bVar7) * bVar7 |
                                                    (bVar66 >= bVar7) * bVar66) == bVar66) &
                                          UNK_014ea365) + cVar67,
                                          CONCAT14((~-((byte)((bVar64 < bVar6) * bVar6 |
                                                             (bVar64 >= bVar6) * bVar64) == bVar64)
                                                   & UNK_014ea364) + cVar65,
                                                   CONCAT13((~-((byte)((bVar62 < bVar5) * bVar5 |
                                                                      (bVar62 >= bVar5) * bVar62) ==
                                                               bVar62) & UNK_014ea363) + cVar63,
                                                            CONCAT12((~-((byte)((bVar60 < bVar4) *
                                                                                bVar4 | (bVar60 >=
                                                                                        bVar4) * 
                                                  bVar60) == bVar60) & UNK_014ea362) + cVar61,
                                                  CONCAT11((~-((byte)((bVar58 < bVar3) * bVar3 |
                                                                     (bVar58 >= bVar3) * bVar58) ==
                                                              bVar58) & UNK_014ea361) + cVar59,
                                                           (~-((byte)((bVar57 < bVar36) * bVar36 |
                                                                     (bVar57 >= bVar36) * bVar57) ==
                                                              bVar57) & DAT_014ea360) + (char)uVar47
                                                          )))))));
          plVar44 = plVar44 + 1;
        } while (plVar50 != plVar44);
        if (plVar48 != plVar50) goto LAB_0cc453cc;
      }
      else {
        plVar44 = (long *)((ulong)plVar48 & 0xffffffffffffffe0);
        plVar50 = (long *)0x0;
        do {
          pcVar40 = pcVar53 + (long)plVar50;
          cVar1 = pcVar40[1];
          cVar59 = pcVar40[2];
          cVar61 = pcVar40[3];
          cVar63 = pcVar40[4];
          cVar65 = pcVar40[5];
          cVar67 = pcVar40[6];
          cVar69 = pcVar40[7];
          cVar10 = pcVar40[8];
          cVar11 = pcVar40[9];
          cVar12 = pcVar40[10];
          cVar13 = pcVar40[0xb];
          cVar14 = pcVar40[0xc];
          cVar15 = pcVar40[0xd];
          cVar16 = pcVar40[0xe];
          cVar17 = pcVar40[0xf];
          pcVar45 = pcVar53 + 0x10 + (long)plVar50;
          cVar18 = *pcVar45;
          cVar19 = pcVar45[1];
          cVar20 = pcVar45[2];
          cVar21 = pcVar45[3];
          cVar22 = pcVar45[4];
          cVar23 = pcVar45[5];
          cVar24 = pcVar45[6];
          cVar25 = pcVar45[7];
          cVar26 = pcVar45[8];
          cVar27 = pcVar45[9];
          cVar28 = pcVar45[10];
          cVar29 = pcVar45[0xb];
          cVar30 = pcVar45[0xc];
          cVar31 = pcVar45[0xd];
          cVar32 = pcVar45[0xe];
          cVar33 = pcVar45[0xf];
          bVar71 = *pcVar40 + DAT_014e86b0;
          bVar72 = cVar1 + DAT_014e86b0._1_1_;
          bVar73 = cVar59 + DAT_014e86b0._2_1_;
          bVar74 = cVar61 + DAT_014e86b0._3_1_;
          bVar75 = cVar63 + DAT_014e86b0._4_1_;
          bVar76 = cVar65 + DAT_014e86b0._5_1_;
          bVar77 = cVar67 + DAT_014e86b0._6_1_;
          bVar78 = cVar69 + DAT_014e86b0._7_1_;
          bVar79 = cVar10 + DAT_014e86b0._8_1_;
          bVar80 = cVar11 + DAT_014e86b0._9_1_;
          bVar81 = cVar12 + DAT_014e86b0._10_1_;
          bVar82 = cVar13 + DAT_014e86b0._11_1_;
          bVar83 = cVar14 + DAT_014e86b0._12_1_;
          bVar84 = cVar15 + DAT_014e86b0._13_1_;
          bVar85 = cVar16 + DAT_014e86b0._14_1_;
          bVar86 = cVar17 + DAT_014e86b0._15_1_;
          bVar87 = cVar18 + DAT_014e86b0;
          bVar88 = cVar19 + DAT_014e86b0._1_1_;
          bVar89 = cVar20 + DAT_014e86b0._2_1_;
          bVar90 = cVar21 + DAT_014e86b0._3_1_;
          bVar91 = cVar22 + DAT_014e86b0._4_1_;
          bVar92 = cVar23 + DAT_014e86b0._5_1_;
          bVar93 = cVar24 + DAT_014e86b0._6_1_;
          bVar94 = cVar25 + DAT_014e86b0._7_1_;
          bVar95 = cVar26 + DAT_014e86b0._8_1_;
          bVar96 = cVar27 + DAT_014e86b0._9_1_;
          bVar97 = cVar28 + DAT_014e86b0._10_1_;
          bVar98 = cVar29 + DAT_014e86b0._11_1_;
          bVar99 = cVar30 + DAT_014e86b0._12_1_;
          bVar100 = cVar31 + DAT_014e86b0._13_1_;
          bVar101 = cVar32 + DAT_014e86b0._14_1_;
          bVar102 = cVar33 + DAT_014e86b0._15_1_;
          bVar36 = DAT_014e4170;
          bVar3 = DAT_014e4170._1_1_;
          bVar4 = DAT_014e4170._2_1_;
          bVar5 = DAT_014e4170._3_1_;
          bVar6 = DAT_014e4170._4_1_;
          bVar7 = DAT_014e4170._5_1_;
          bVar8 = DAT_014e4170._6_1_;
          bVar9 = DAT_014e4170._7_1_;
          bVar57 = DAT_014e4170._8_1_;
          bVar58 = DAT_014e4170._9_1_;
          bVar60 = DAT_014e4170._10_1_;
          bVar62 = DAT_014e4170._11_1_;
          bVar64 = DAT_014e4170._12_1_;
          bVar66 = DAT_014e4170._13_1_;
          bVar68 = DAT_014e4170._14_1_;
          bVar70 = DAT_014e4170._15_1_;
          pcVar45 = pcVar53 + (long)plVar50;
          *pcVar45 = (-((byte)((bVar36 < bVar71) * bVar36 | (bVar36 >= bVar71) * bVar71) == bVar71)
                     & DAT_014ead50) + *pcVar40;
          pcVar45[1] = (-((byte)((bVar3 < bVar72) * bVar3 | (bVar3 >= bVar72) * bVar72) == bVar72) &
                       UNK_014ead51) + cVar1;
          pcVar45[2] = (-((byte)((bVar4 < bVar73) * bVar4 | (bVar4 >= bVar73) * bVar73) == bVar73) &
                       UNK_014ead52) + cVar59;
          pcVar45[3] = (-((byte)((bVar5 < bVar74) * bVar5 | (bVar5 >= bVar74) * bVar74) == bVar74) &
                       UNK_014ead53) + cVar61;
          pcVar45[4] = (-((byte)((bVar6 < bVar75) * bVar6 | (bVar6 >= bVar75) * bVar75) == bVar75) &
                       UNK_014ead54) + cVar63;
          pcVar45[5] = (-((byte)((bVar7 < bVar76) * bVar7 | (bVar7 >= bVar76) * bVar76) == bVar76) &
                       UNK_014ead55) + cVar65;
          pcVar45[6] = (-((byte)((bVar8 < bVar77) * bVar8 | (bVar8 >= bVar77) * bVar77) == bVar77) &
                       UNK_014ead56) + cVar67;
          pcVar45[7] = (-((byte)((bVar9 < bVar78) * bVar9 | (bVar9 >= bVar78) * bVar78) == bVar78) &
                       UNK_014ead57) + cVar69;
          pcVar45[8] = (-((byte)((bVar57 < bVar79) * bVar57 | (bVar57 >= bVar79) * bVar79) == bVar79
                         ) & UNK_014ead58) + cVar10;
          pcVar45[9] = (-((byte)((bVar58 < bVar80) * bVar58 | (bVar58 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead59) + cVar11;
          pcVar45[10] = (-((byte)((bVar60 < bVar81) * bVar60 | (bVar60 >= bVar81) * bVar81) ==
                          bVar81) & UNK_014ead5a) + cVar12;
          pcVar45[0xb] = (-((byte)((bVar62 < bVar82) * bVar62 | (bVar62 >= bVar82) * bVar82) ==
                           bVar82) & UNK_014ead5b) + cVar13;
          pcVar45[0xc] = (-((byte)((bVar64 < bVar83) * bVar64 | (bVar64 >= bVar83) * bVar83) ==
                           bVar83) & UNK_014ead5c) + cVar14;
          pcVar45[0xd] = (-((byte)((bVar66 < bVar84) * bVar66 | (bVar66 >= bVar84) * bVar84) ==
                           bVar84) & UNK_014ead5d) + cVar15;
          pcVar45[0xe] = (-((byte)((bVar68 < bVar85) * bVar68 | (bVar68 >= bVar85) * bVar85) ==
                           bVar85) & UNK_014ead5e) + cVar16;
          pcVar45[0xf] = (-((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) ==
                           bVar86) & UNK_014ead5f) + cVar17;
          pcVar40 = pcVar53 + 0x10 + (long)plVar50;
          *pcVar40 = (-((byte)((bVar36 < bVar87) * bVar36 | (bVar36 >= bVar87) * bVar87) == bVar87)
                     & DAT_014ead50) + cVar18;
          pcVar40[1] = (-((byte)((bVar3 < bVar88) * bVar3 | (bVar3 >= bVar88) * bVar88) == bVar88) &
                       UNK_014ead51) + cVar19;
          pcVar40[2] = (-((byte)((bVar4 < bVar89) * bVar4 | (bVar4 >= bVar89) * bVar89) == bVar89) &
                       UNK_014ead52) + cVar20;
          pcVar40[3] = (-((byte)((bVar5 < bVar90) * bVar5 | (bVar5 >= bVar90) * bVar90) == bVar90) &
                       UNK_014ead53) + cVar21;
          pcVar40[4] = (-((byte)((bVar6 < bVar91) * bVar6 | (bVar6 >= bVar91) * bVar91) == bVar91) &
                       UNK_014ead54) + cVar22;
          pcVar40[5] = (-((byte)((bVar7 < bVar92) * bVar7 | (bVar7 >= bVar92) * bVar92) == bVar92) &
                       UNK_014ead55) + cVar23;
          pcVar40[6] = (-((byte)((bVar8 < bVar93) * bVar8 | (bVar8 >= bVar93) * bVar93) == bVar93) &
                       UNK_014ead56) + cVar24;
          pcVar40[7] = (-((byte)((bVar9 < bVar94) * bVar9 | (bVar9 >= bVar94) * bVar94) == bVar94) &
                       UNK_014ead57) + cVar25;
          pcVar40[8] = (-((byte)((bVar57 < bVar95) * bVar57 | (bVar57 >= bVar95) * bVar95) == bVar95
                         ) & UNK_014ead58) + cVar26;
          pcVar40[9] = (-((byte)((bVar58 < bVar96) * bVar58 | (bVar58 >= bVar96) * bVar96) == bVar96
                         ) & UNK_014ead59) + cVar27;
          pcVar40[10] = (-((byte)((bVar60 < bVar97) * bVar60 | (bVar60 >= bVar97) * bVar97) ==
                          bVar97) & UNK_014ead5a) + cVar28;
          pcVar40[0xb] = (-((byte)((bVar62 < bVar98) * bVar62 | (bVar62 >= bVar98) * bVar98) ==
                           bVar98) & UNK_014ead5b) + cVar29;
          pcVar40[0xc] = (-((byte)((bVar64 < bVar99) * bVar64 | (bVar64 >= bVar99) * bVar99) ==
                           bVar99) & UNK_014ead5c) + cVar30;
          pcVar40[0xd] = (-((byte)((bVar66 < bVar100) * bVar66 | (bVar66 >= bVar100) * bVar100) ==
                           bVar100) & UNK_014ead5d) + cVar31;
          pcVar40[0xe] = (-((byte)((bVar68 < bVar101) * bVar68 | (bVar68 >= bVar101) * bVar101) ==
                           bVar101) & UNK_014ead5e) + cVar32;
          pcVar40[0xf] = (-((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) ==
                           bVar102) & UNK_014ead5f) + cVar33;
          plVar50 = plVar50 + 4;
        } while (plVar44 != plVar50);
        if (plVar48 != plVar44) {
          if (((ulong)plVar48 & 0x18) == 0) {
            pcVar40 = (char *)((long)plVar44 + (long)pcVar53);
            goto LAB_0cc453cc;
          }
          goto LAB_0cc45365;
        }
      }
      plVar44 = (long *)(ulong)((byte)uStack_c0 >> 1);
    }
    if (((ulong)uStack_c0 & 1) != 0) {
      plVar44 = plStack_b8;
      pcVar43 = pcStack_b0;
    }
    pcVar53 = pcVar43 + (long)plVar44;
    plVar48 = plVar44;
    pcVar40 = pcVar43;
    while (((pcVar45 = pcVar53, 0 < (long)plVar48 &&
            (pcVar40 = (char *)func_0x0eee2ef0(pcVar40,0x3a,plVar48), pcVar40 != (char *)0x0)) &&
           (pcVar45 = pcVar40, *pcVar40 != ':'))) {
      pcVar40 = pcVar40 + 1;
      plVar48 = (long *)(pcVar53 + -(long)pcVar40);
    }
    plVar48 = (long *)(pcVar45 + -(long)pcVar43);
    if (plVar44 < pcVar45 + -(long)pcVar43) {
      plVar48 = plVar44;
    }
    if (pcVar45 == pcVar53) {
      plVar48 = plVar44;
    }
    if ((long *)0xfffffffffffffff7 < plVar48) goto LAB_0cc46220;
    if (plVar48 < (long *)0x17) {
      uStack_e8 = (undefined *)CONCAT71(uStack_e8._1_7_,(byte)plVar48 * '\x02');
      lVar41 = (long)&uStack_e8 + 1;
      if (plVar48 != (long *)0x0) goto LAB_0cc454d3;
    }
    else {
      uVar46 = 0x1a;
      if (((ulong)plVar48 | 7) != 0x17) {
        uVar46 = ((ulong)plVar48 | 7) + 1;
      }
      lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
      if (lVar41 == 0) {
        FUN_0eec74c0(uVar46,0);
      }
      uStack_d8 = (undefined4)lVar41;
      uStack_d4 = (undefined4)((ulong)lVar41 >> 0x20);
      uStack_e8 = (undefined *)(uVar46 | 1);
      bStack_df = (byte)((ulong)plVar48 >> 8);
      uStack_de = (undefined2)((ulong)plVar48 >> 0x10);
      uStack_dc = (undefined4)((ulong)plVar48 >> 0x20);
      bStack_e0 = (byte)plVar48;
LAB_0cc454d3:
      func_0x0eee2ee0(lVar41,pcVar43,plVar48);
    }
    *(char *)(lVar41 + (long)plVar48) = '\0';
    func_0x05cf8990(0xf6ffac0,&uStack_e8,&uStack_e8);
    pcVar43 = (char *)((long)&uStack_c0 + 1);
    if (((ulong)uStack_e8 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_d4,uStack_d8),(ulong)uStack_e8 & 0xfffffffffffffffe);
    }
    uStack_e8 = (undefined *)0x0;
    if (((ulong)uStack_c0 & 1) == 0) {
      uStack_d0 = SUB84(pcStack_b0,0);
      uStack_cc = (undefined4)((ulong)pcStack_b0 >> 0x20);
      bStack_e0 = (byte)uStack_c0;
      bStack_df = (byte)((ulong)uStack_c0 >> 8);
      uStack_de = (undefined2)((ulong)uStack_c0 >> 0x10);
      uStack_dc = (undefined4)((ulong)uStack_c0 >> 0x20);
      uStack_d8 = SUB84(plStack_b8,0);
      uStack_d4 = (undefined4)((ulong)plStack_b8 >> 0x20);
    }
    else {
      func_0x0412e5e0(&bStack_e0,pcStack_b0,plStack_b8);
    }
    lStack_c8 = 0;
    if ((bStack_e0 & 1) == 0) {
      if (bStack_e0 >> 1 != 0) goto LAB_0cc4557d;
LAB_0cc45677:
      puVar55 = (undefined *)0x0;
    }
    else {
      if (CONCAT44(uStack_d4,uStack_d8) == 0) goto LAB_0cc45677;
LAB_0cc4557d:
      if ((bStack_e0 & 1) == 0) {
        pbVar54 = &bStack_df;
        if (pbVar54 != (byte *)0x0) goto LAB_0cc4559e;
        goto LAB_0cc45677;
      }
      pbVar54 = (byte *)CONCAT44(uStack_cc,uStack_d0);
      if (pbVar54 == (byte *)0x0) goto LAB_0cc45677;
LAB_0cc4559e:
      if (*pbVar54 == 0) goto LAB_0cc45677;
      puVar55 = (undefined *)0xcbf29ce484222325;
      uVar46 = strlen(pbVar54);
      if (uVar46 != 0) {
        uVar49 = (ulong)((uint)uVar46 & 7);
        if (7 < uVar46) {
          uVar46 = uVar46 & 0xfffffffffffffff8;
          do {
            puVar55 = (undefined *)
                      (((((((((long)puVar55 * 0x100000001b3 ^ (ulong)*pbVar54) * 0x100000001b3 ^
                            (ulong)pbVar54[1]) * 0x100000001b3 ^ (ulong)pbVar54[2]) * 0x100000001b3
                          ^ (ulong)pbVar54[3]) * 0x100000001b3 ^ (ulong)pbVar54[4]) * 0x100000001b3
                        ^ (ulong)pbVar54[5]) * 0x100000001b3 ^ (ulong)pbVar54[6]) * 0x100000001b3 ^
                      (ulong)pbVar54[7]);
            pbVar54 = pbVar54 + 8;
            uVar46 = uVar46 - 8;
          } while (uVar46 != 0);
        }
        if (uVar49 != 0) {
          uVar46 = 0;
          do {
            puVar55 = (undefined *)((long)puVar55 * 0x100000001b3 ^ (ulong)pbVar54[uVar46]);
            uVar46 = uVar46 + 1;
          } while (uVar49 != uVar46);
        }
      }
    }
    uStack_e8 = puVar55;
    puStack_68 = (undefined *)&uStack_e8;
    lVar41 = func_0x05cf8b10(0xf6ff9e0,&uStack_e8,&UNK_01563a4f,&puStack_68,&puStack_48);
    plVar44 = *(long **)(lVar41 + 0x48);
    *(undefined8 **)(lVar41 + 0x48) = puVar38;
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))();
    }
    puStack_68 = uStack_e8;
    lVar41 = func_0x05cf8dc0(0xf6ffad8,&puStack_68);
    if ((*(byte *)(lVar41 + 0x18) & 1) != 0) {
      func_0x0412a280(*(undefined8 *)(lVar41 + 0x28),*(ulong *)(lVar41 + 0x18) & 0xfffffffffffffffe)
      ;
    }
    *(ulong *)(lVar41 + 0x28) = CONCAT44(uStack_cc,uStack_d0);
    *(ulong *)(lVar41 + 0x18) =
         CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(bStack_df,bStack_e0)));
    *(ulong *)(lVar41 + 0x20) = CONCAT44(uStack_d4,uStack_d8);
    bStack_e0 = 0;
    bStack_df = 0;
    *(undefined **)(lVar41 + 0x10) = uStack_e8;
    *(undefined8 *)(lVar41 + 0x30) = 0;
    if (((ulong)uStack_c0 & 1) == 0) {
      func_0x0cc46730(&puStack_58);
      if (((ulong)puStack_98 & 1) != 0) goto LAB_0cc45777;
LAB_0cc45745:
      if (DAT_0f6ffb50 == '\0') goto LAB_0cc45793;
LAB_0cc457a5:
      uVar37 = 0;
    }
    else {
      func_0x0412a280(pcStack_b0,(ulong)uStack_c0 & 0xfffffffffffffffe);
      func_0x0cc46730(&puStack_58);
      if (((ulong)puStack_98 & 1) == 0) goto LAB_0cc45745;
LAB_0cc45777:
      func_0x0412a280(puStack_88,(ulong)puStack_98 & 0xfffffffffffffffe);
      if (DAT_0f6ffb50 != '\0') goto LAB_0cc457a5;
LAB_0cc45793:
      if (*(char *)(lStack_38 + 0x18) != '\0') goto LAB_0cc457a5;
      uVar37 = 0x20;
      if (((DAT_0f6ffb3e & 1) != 0) && (*(char *)(lStack_38 + 7) == '\0')) {
        bVar36 = func_0x04fa7a10(lStack_38,0xf6ffb38);
        uVar37 = (ushort)(bVar36 ^ 1) << 5;
      }
    }
    *(ushort *)((long)puVar38 + 0x133) = uVar37 | *(ushort *)((long)puVar38 + 0x133) & 0xffdf;
    puStack_98 = &UNK_0f4033e0;
    uStack_90 = CONCAT53(uStack_90._3_5_,0x10000);
    uStack_90 = CONCAT62(uStack_90._2_6_,0x101);
    puVar38 = puVar38 + 5;
    func_0x0cd50930(&puStack_98,puVar38);
    uStack_c0 = &UNK_0f40dd80;
    uVar46 = (ulong)plStack_b8 >> 8;
    plStack_b8 = (long *)CONCAT71((uint7)uVar46 & 0xffffff,1);
    func_0x0ce6c6a0(&uStack_c0,puVar38);
    uStack_e8 = &UNK_0f40da60;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    lStack_c8 = 0;
    bStack_e0 = 1;
    func_0x0ce6cb00(&uStack_e8,puVar38);
    uVar35 = uStack_d4;
    uVar34 = uStack_d8;
    uStack_e8 = &UNK_0f40da60;
    lVar41 = CONCAT44(uStack_d4,uStack_d8);
    if (lVar41 != 0) {
      lVar39 = CONCAT44(uStack_cc,uStack_d0);
      if (lVar41 != lVar39) {
        do {
          *(undefined **)(lVar39 + -0x18) = &UNK_0f3773c0;
          plVar44 = *(long **)(lVar39 + -0x10);
          *(undefined8 *)(lVar39 + -0x10) = 0;
          if (plVar44 != (long *)0x0) {
            (**(code **)(*plVar44 + 0x90))();
          }
          lVar39 = lVar39 + -0x18;
        } while (lVar39 != lVar41);
        lVar41 = CONCAT44(uStack_d4,uStack_d8);
      }
      uStack_d0 = uVar34;
      uStack_cc = uVar35;
      func_0x0412a280(lVar41,lStack_c8 - lVar41);
    }
    if ((DAT_0f6eae80 & 1) == 0) {
      puStack_88 = _DAT_0f6eae90;
      puStack_98 = (undefined *)CONCAT71(uRam000000000f6eae81,DAT_0f6eae80);
      uStack_90 = _DAT_0f6eae88;
    }
    else {
      func_0x0412e5e0(&puStack_98,_DAT_0f6eae90,_DAT_0f6eae88);
    }
    uStack_e8 = (undefined *)_DAT_0f6ffb28;
    bStack_e0 = (byte)_DAT_0f6ffb30;
    bStack_df = (byte)((ulong)_DAT_0f6ffb30 >> 8);
    uStack_de = (undefined2)((ulong)_DAT_0f6ffb30 >> 0x10);
    uStack_dc = (undefined4)((ulong)_DAT_0f6ffb30 >> 0x20);
    if (_DAT_0f6ffb30 != 0) {
      LOCK();
      *(long *)(_DAT_0f6ffb30 + 8) = *(long *)(_DAT_0f6ffb30 + 8) + 1;
      UNLOCK();
    }
    func_0x0cc46680(&puStack_58,&uStack_e8);
    plVar44 = (long *)CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(bStack_df,bStack_e0)));
    if (plVar44 != (long *)0x0) {
      LOCK();
      plVar48 = plVar44 + 1;
      lVar41 = *plVar48;
      *plVar48 = *plVar48 + -1;
      UNLOCK();
      if (lVar41 == 0) {
        (**(code **)(*plVar44 + 0x10))(plVar44);
        func_0x0412c2d0(plVar44);
      }
    }
    plVar44 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3a8);
    if (plVar44 == (long *)0x0) {
      FUN_0eec74c0(0x3a8,0);
    }
    FUN_0c6c7010(plVar44,&puStack_98,0x2d0);
    *plVar44 = (long)&UNK_0f3c1c90;
    *(byte *)((long)plVar44 + 0x134) = *(byte *)((long)plVar44 + 0x134) | 8;
    pcVar53 = (char *)((long)plVar44 + 300);
    pcVar53[0] = -0x33;
    pcVar53[1] = -0x34;
    pcVar53[2] = 'L';
    pcVar53[3] = '?';
    if (_DAT_0f6ffb20 == 0) {
      lVar41 = 0;
      lVar39 = 0;
    }
    else {
      lVar39 = FUN_0412c300();
      lVar41 = 0;
      if (lVar39 != 0) {
        lVar41 = _DAT_0f6ffb18;
      }
    }
    plVar44[0x73] = lVar41;
    plVar48 = (long *)plVar44[0x74];
    plVar44[0x74] = lVar39;
    if (plVar48 != (long *)0x0) {
      LOCK();
      plVar50 = plVar48 + 1;
      lVar41 = *plVar50;
      *plVar50 = *plVar50 + -1;
      UNLOCK();
      if (lVar41 == 0) {
        (**(code **)(*plVar48 + 0x10))(plVar48);
        func_0x0412c2d0(plVar48);
      }
    }
    bVar56 = (*(byte *)(plVar44 + 0x1a) & 1) != 0;
    pcVar53 = (char *)((long)plVar44 + 0xd1);
    if (bVar56) {
      pcVar53 = (char *)plVar44[0x1c];
    }
    plVar48 = (long *)(ulong)(*(byte *)(plVar44 + 0x1a) >> 1);
    if (bVar56) {
      plVar48 = (long *)plVar44[0x1b];
    }
    if (plVar48 < (long *)0xfffffffffffffff8) {
      if (plVar48 < (long *)0x17) {
        uStack_c0 = (undefined *)CONCAT71(uStack_c0._1_7_,(char)plVar48 * '\x02');
        if (plVar48 != (long *)0x0) goto LAB_0cc45aae;
      }
      else {
        uVar46 = 0x1a;
        if (((ulong)plVar48 | 7) != 0x17) {
          uVar46 = ((ulong)plVar48 | 7) + 1;
        }
        pcVar43 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
        if (pcVar43 == (char *)0x0) {
          FUN_0eec74c0(uVar46,0);
        }
        uStack_c0 = (undefined *)(uVar46 | 1);
        plStack_b8 = plVar48;
        pcStack_b0 = pcVar43;
LAB_0cc45aae:
        func_0x0eee2f00(pcVar43,pcVar53,plVar48);
      }
      pcVar53 = (char *)((long)&uStack_c0 + 1);
      pcVar43[(long)plVar48] = '\0';
      plVar50 = (long *)(ulong)((byte)uStack_c0 >> 1);
      plVar48 = plStack_b8;
      pcVar43 = pcStack_b0;
      if (((ulong)uStack_c0 & 1) == 0) {
        plVar48 = plVar50;
        pcVar43 = pcVar53;
      }
      if (plVar48 != (long *)0x0) {
        pcVar40 = pcVar43;
        if (plVar48 < (long *)0x8) {
LAB_0cc45c2c:
          do {
            cVar1 = *pcVar40;
            cVar59 = cVar1 + ' ';
            if (0x19 < (byte)(cVar1 + 0xbfU)) {
              cVar59 = cVar1;
            }
            *pcVar40 = cVar59;
            pcVar40 = pcVar40 + 1;
          } while (pcVar40 != pcVar43 + (long)plVar48);
        }
        else if (plVar48 < (long *)0x20) {
          plVar50 = (long *)0x0;
LAB_0cc45bc5:
          plVar51 = (long *)((ulong)plVar48 & 0xfffffffffffffff8);
          pcVar40 = pcVar43 + (long)plVar51;
          do {
            uVar47 = *(undefined8 *)(pcVar43 + (long)plVar50);
            bVar57 = (char)uVar47 + DAT_014e9110;
            cVar59 = (char)((ulong)uVar47 >> 8);
            bVar58 = cVar59 + DAT_014e9110._1_1_;
            cVar61 = (char)((ulong)uVar47 >> 0x10);
            bVar60 = cVar61 + DAT_014e9110._2_1_;
            cVar63 = (char)((ulong)uVar47 >> 0x18);
            bVar62 = cVar63 + DAT_014e9110._3_1_;
            cVar65 = (char)((ulong)uVar47 >> 0x20);
            bVar64 = cVar65 + DAT_014e9110._4_1_;
            cVar67 = (char)((ulong)uVar47 >> 0x28);
            bVar66 = cVar67 + DAT_014e9110._5_1_;
            cVar69 = (char)((ulong)uVar47 >> 0x30);
            cVar1 = (char)((ulong)uVar47 >> 0x38);
            bVar68 = cVar69 + DAT_014e9110._6_1_;
            bVar70 = cVar1 + DAT_014e9110._7_1_;
            bVar36 = DAT_014e8cb0;
            bVar3 = DAT_014e8cb0._1_1_;
            bVar4 = DAT_014e8cb0._2_1_;
            bVar5 = DAT_014e8cb0._3_1_;
            bVar6 = DAT_014e8cb0._4_1_;
            bVar7 = DAT_014e8cb0._5_1_;
            bVar8 = DAT_014e8cb0._6_1_;
            bVar9 = DAT_014e8cb0._7_1_;
            *(ulong *)(pcVar43 + (long)plVar50) =
                 CONCAT17((~-((byte)((bVar70 < bVar9) * bVar9 | (bVar70 >= bVar9) * bVar70) ==
                             bVar70) & UNK_014ea367) + cVar1,
                          CONCAT16((~-((byte)((bVar68 < bVar8) * bVar8 | (bVar68 >= bVar8) * bVar68)
                                      == bVar68) & UNK_014ea366) + cVar69,
                                   CONCAT15((~-((byte)((bVar66 < bVar7) * bVar7 |
                                                      (bVar66 >= bVar7) * bVar66) == bVar66) &
                                            UNK_014ea365) + cVar67,
                                            CONCAT14((~-((byte)((bVar64 < bVar6) * bVar6 |
                                                               (bVar64 >= bVar6) * bVar64) == bVar64
                                                        ) & UNK_014ea364) + cVar65,
                                                     CONCAT13((~-((byte)((bVar62 < bVar5) * bVar5 |
                                                                        (bVar62 >= bVar5) * bVar62)
                                                                 == bVar62) & UNK_014ea363) + cVar63
                                                              ,CONCAT12((~-((byte)((bVar60 < bVar4)
                                                                                   * bVar4 |
                                                                                  (bVar60 >= bVar4)
                                                                                  * bVar60) ==
                                                                           bVar60) & UNK_014ea362) +
                                                                        cVar61,CONCAT11((~-((byte)((
                                                  bVar58 < bVar3) * bVar3 |
                                                  (bVar58 >= bVar3) * bVar58) == bVar58) &
                                                  UNK_014ea361) + cVar59,
                                                  (~-((byte)((bVar57 < bVar36) * bVar36 |
                                                            (bVar57 >= bVar36) * bVar57) == bVar57)
                                                  & DAT_014ea360) + (char)uVar47)))))));
            plVar50 = plVar50 + 1;
          } while (plVar51 != plVar50);
          if (plVar48 != plVar51) goto LAB_0cc45c2c;
        }
        else {
          plVar50 = (long *)((ulong)plVar48 & 0xffffffffffffffe0);
          plVar51 = (long *)0x0;
          do {
            pcVar40 = pcVar43 + (long)plVar51;
            cVar1 = pcVar40[1];
            cVar59 = pcVar40[2];
            cVar61 = pcVar40[3];
            cVar63 = pcVar40[4];
            cVar65 = pcVar40[5];
            cVar67 = pcVar40[6];
            cVar69 = pcVar40[7];
            cVar10 = pcVar40[8];
            cVar11 = pcVar40[9];
            cVar12 = pcVar40[10];
            cVar13 = pcVar40[0xb];
            cVar14 = pcVar40[0xc];
            cVar15 = pcVar40[0xd];
            cVar16 = pcVar40[0xe];
            cVar17 = pcVar40[0xf];
            pcVar45 = pcVar43 + 0x10 + (long)plVar51;
            cVar18 = *pcVar45;
            cVar19 = pcVar45[1];
            cVar20 = pcVar45[2];
            cVar21 = pcVar45[3];
            cVar22 = pcVar45[4];
            cVar23 = pcVar45[5];
            cVar24 = pcVar45[6];
            cVar25 = pcVar45[7];
            cVar26 = pcVar45[8];
            cVar27 = pcVar45[9];
            cVar28 = pcVar45[10];
            cVar29 = pcVar45[0xb];
            cVar30 = pcVar45[0xc];
            cVar31 = pcVar45[0xd];
            cVar32 = pcVar45[0xe];
            cVar33 = pcVar45[0xf];
            bVar71 = *pcVar40 + DAT_014e86b0;
            bVar72 = cVar1 + DAT_014e86b0._1_1_;
            bVar73 = cVar59 + DAT_014e86b0._2_1_;
            bVar74 = cVar61 + DAT_014e86b0._3_1_;
            bVar75 = cVar63 + DAT_014e86b0._4_1_;
            bVar76 = cVar65 + DAT_014e86b0._5_1_;
            bVar77 = cVar67 + DAT_014e86b0._6_1_;
            bVar78 = cVar69 + DAT_014e86b0._7_1_;
            bVar79 = cVar10 + DAT_014e86b0._8_1_;
            bVar80 = cVar11 + DAT_014e86b0._9_1_;
            bVar81 = cVar12 + DAT_014e86b0._10_1_;
            bVar82 = cVar13 + DAT_014e86b0._11_1_;
            bVar83 = cVar14 + DAT_014e86b0._12_1_;
            bVar84 = cVar15 + DAT_014e86b0._13_1_;
            bVar85 = cVar16 + DAT_014e86b0._14_1_;
            bVar86 = cVar17 + DAT_014e86b0._15_1_;
            bVar87 = cVar18 + DAT_014e86b0;
            bVar88 = cVar19 + DAT_014e86b0._1_1_;
            bVar89 = cVar20 + DAT_014e86b0._2_1_;
            bVar90 = cVar21 + DAT_014e86b0._3_1_;
            bVar91 = cVar22 + DAT_014e86b0._4_1_;
            bVar92 = cVar23 + DAT_014e86b0._5_1_;
            bVar93 = cVar24 + DAT_014e86b0._6_1_;
            bVar94 = cVar25 + DAT_014e86b0._7_1_;
            bVar95 = cVar26 + DAT_014e86b0._8_1_;
            bVar96 = cVar27 + DAT_014e86b0._9_1_;
            bVar97 = cVar28 + DAT_014e86b0._10_1_;
            bVar98 = cVar29 + DAT_014e86b0._11_1_;
            bVar99 = cVar30 + DAT_014e86b0._12_1_;
            bVar100 = cVar31 + DAT_014e86b0._13_1_;
            bVar101 = cVar32 + DAT_014e86b0._14_1_;
            bVar102 = cVar33 + DAT_014e86b0._15_1_;
            bVar36 = DAT_014e4170;
            bVar3 = DAT_014e4170._1_1_;
            bVar4 = DAT_014e4170._2_1_;
            bVar5 = DAT_014e4170._3_1_;
            bVar6 = DAT_014e4170._4_1_;
            bVar7 = DAT_014e4170._5_1_;
            bVar8 = DAT_014e4170._6_1_;
            bVar9 = DAT_014e4170._7_1_;
            bVar57 = DAT_014e4170._8_1_;
            bVar58 = DAT_014e4170._9_1_;
            bVar60 = DAT_014e4170._10_1_;
            bVar62 = DAT_014e4170._11_1_;
            bVar64 = DAT_014e4170._12_1_;
            bVar66 = DAT_014e4170._13_1_;
            bVar68 = DAT_014e4170._14_1_;
            bVar70 = DAT_014e4170._15_1_;
            pcVar45 = pcVar43 + (long)plVar51;
            *pcVar45 = (-((byte)((bVar36 < bVar71) * bVar36 | (bVar36 >= bVar71) * bVar71) == bVar71
                         ) & DAT_014ead50) + *pcVar40;
            pcVar45[1] = (-((byte)((bVar3 < bVar72) * bVar3 | (bVar3 >= bVar72) * bVar72) == bVar72)
                         & UNK_014ead51) + cVar1;
            pcVar45[2] = (-((byte)((bVar4 < bVar73) * bVar4 | (bVar4 >= bVar73) * bVar73) == bVar73)
                         & UNK_014ead52) + cVar59;
            pcVar45[3] = (-((byte)((bVar5 < bVar74) * bVar5 | (bVar5 >= bVar74) * bVar74) == bVar74)
                         & UNK_014ead53) + cVar61;
            pcVar45[4] = (-((byte)((bVar6 < bVar75) * bVar6 | (bVar6 >= bVar75) * bVar75) == bVar75)
                         & UNK_014ead54) + cVar63;
            pcVar45[5] = (-((byte)((bVar7 < bVar76) * bVar7 | (bVar7 >= bVar76) * bVar76) == bVar76)
                         & UNK_014ead55) + cVar65;
            pcVar45[6] = (-((byte)((bVar8 < bVar77) * bVar8 | (bVar8 >= bVar77) * bVar77) == bVar77)
                         & UNK_014ead56) + cVar67;
            pcVar45[7] = (-((byte)((bVar9 < bVar78) * bVar9 | (bVar9 >= bVar78) * bVar78) == bVar78)
                         & UNK_014ead57) + cVar69;
            pcVar45[8] = (-((byte)((bVar57 < bVar79) * bVar57 | (bVar57 >= bVar79) * bVar79) ==
                           bVar79) & UNK_014ead58) + cVar10;
            pcVar45[9] = (-((byte)((bVar58 < bVar80) * bVar58 | (bVar58 >= bVar80) * bVar80) ==
                           bVar80) & UNK_014ead59) + cVar11;
            pcVar45[10] = (-((byte)((bVar60 < bVar81) * bVar60 | (bVar60 >= bVar81) * bVar81) ==
                            bVar81) & UNK_014ead5a) + cVar12;
            pcVar45[0xb] = (-((byte)((bVar62 < bVar82) * bVar62 | (bVar62 >= bVar82) * bVar82) ==
                             bVar82) & UNK_014ead5b) + cVar13;
            pcVar45[0xc] = (-((byte)((bVar64 < bVar83) * bVar64 | (bVar64 >= bVar83) * bVar83) ==
                             bVar83) & UNK_014ead5c) + cVar14;
            pcVar45[0xd] = (-((byte)((bVar66 < bVar84) * bVar66 | (bVar66 >= bVar84) * bVar84) ==
                             bVar84) & UNK_014ead5d) + cVar15;
            pcVar45[0xe] = (-((byte)((bVar68 < bVar85) * bVar68 | (bVar68 >= bVar85) * bVar85) ==
                             bVar85) & UNK_014ead5e) + cVar16;
            pcVar45[0xf] = (-((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) ==
                             bVar86) & UNK_014ead5f) + cVar17;
            pcVar40 = pcVar43 + 0x10 + (long)plVar51;
            *pcVar40 = (-((byte)((bVar36 < bVar87) * bVar36 | (bVar36 >= bVar87) * bVar87) == bVar87
                         ) & DAT_014ead50) + cVar18;
            pcVar40[1] = (-((byte)((bVar3 < bVar88) * bVar3 | (bVar3 >= bVar88) * bVar88) == bVar88)
                         & UNK_014ead51) + cVar19;
            pcVar40[2] = (-((byte)((bVar4 < bVar89) * bVar4 | (bVar4 >= bVar89) * bVar89) == bVar89)
                         & UNK_014ead52) + cVar20;
            pcVar40[3] = (-((byte)((bVar5 < bVar90) * bVar5 | (bVar5 >= bVar90) * bVar90) == bVar90)
                         & UNK_014ead53) + cVar21;
            pcVar40[4] = (-((byte)((bVar6 < bVar91) * bVar6 | (bVar6 >= bVar91) * bVar91) == bVar91)
                         & UNK_014ead54) + cVar22;
            pcVar40[5] = (-((byte)((bVar7 < bVar92) * bVar7 | (bVar7 >= bVar92) * bVar92) == bVar92)
                         & UNK_014ead55) + cVar23;
            pcVar40[6] = (-((byte)((bVar8 < bVar93) * bVar8 | (bVar8 >= bVar93) * bVar93) == bVar93)
                         & UNK_014ead56) + cVar24;
            pcVar40[7] = (-((byte)((bVar9 < bVar94) * bVar9 | (bVar9 >= bVar94) * bVar94) == bVar94)
                         & UNK_014ead57) + cVar25;
            pcVar40[8] = (-((byte)((bVar57 < bVar95) * bVar57 | (bVar57 >= bVar95) * bVar95) ==
                           bVar95) & UNK_014ead58) + cVar26;
            pcVar40[9] = (-((byte)((bVar58 < bVar96) * bVar58 | (bVar58 >= bVar96) * bVar96) ==
                           bVar96) & UNK_014ead59) + cVar27;
            pcVar40[10] = (-((byte)((bVar60 < bVar97) * bVar60 | (bVar60 >= bVar97) * bVar97) ==
                            bVar97) & UNK_014ead5a) + cVar28;
            pcVar40[0xb] = (-((byte)((bVar62 < bVar98) * bVar62 | (bVar62 >= bVar98) * bVar98) ==
                             bVar98) & UNK_014ead5b) + cVar29;
            pcVar40[0xc] = (-((byte)((bVar64 < bVar99) * bVar64 | (bVar64 >= bVar99) * bVar99) ==
                             bVar99) & UNK_014ead5c) + cVar30;
            pcVar40[0xd] = (-((byte)((bVar66 < bVar100) * bVar66 | (bVar66 >= bVar100) * bVar100) ==
                             bVar100) & UNK_014ead5d) + cVar31;
            pcVar40[0xe] = (-((byte)((bVar68 < bVar101) * bVar68 | (bVar68 >= bVar101) * bVar101) ==
                             bVar101) & UNK_014ead5e) + cVar32;
            pcVar40[0xf] = (-((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) ==
                             bVar102) & UNK_014ead5f) + cVar33;
            plVar51 = plVar51 + 4;
          } while (plVar50 != plVar51);
          if (plVar48 != plVar50) {
            if (((ulong)plVar48 & 0x18) == 0) {
              pcVar40 = (char *)((long)plVar50 + (long)pcVar43);
              goto LAB_0cc45c2c;
            }
            goto LAB_0cc45bc5;
          }
        }
        plVar50 = (long *)(ulong)((byte)uStack_c0 >> 1);
      }
      if (((ulong)uStack_c0 & 1) != 0) {
        plVar50 = plStack_b8;
        pcVar53 = pcStack_b0;
      }
      pcVar43 = pcVar53 + (long)plVar50;
      plVar48 = plVar50;
      pcVar40 = pcVar53;
      while (((pcVar45 = pcVar43, 0 < (long)plVar48 &&
              (pcVar40 = (char *)func_0x0eee2ef0(pcVar40,0x3a,plVar48), pcVar40 != (char *)0x0)) &&
             (pcVar45 = pcVar40, *pcVar40 != ':'))) {
        pcVar40 = pcVar40 + 1;
        plVar48 = (long *)(pcVar43 + -(long)pcVar40);
      }
      plVar48 = (long *)(pcVar45 + -(long)pcVar53);
      if (plVar50 < pcVar45 + -(long)pcVar53) {
        plVar48 = plVar50;
      }
      if (pcVar45 == pcVar43) {
        plVar48 = plVar50;
      }
      if ((long *)0xfffffffffffffff7 < plVar48) goto LAB_0cc4622a;
      if (plVar48 < (long *)0x17) {
        uStack_e8 = (undefined *)CONCAT71(uStack_e8._1_7_,(byte)plVar48 * '\x02');
        lVar41 = (long)&uStack_e8 + 1;
        if (plVar48 != (long *)0x0) goto LAB_0cc45d3c;
      }
      else {
        uVar46 = 0x1a;
        if (((ulong)plVar48 | 7) != 0x17) {
          uVar46 = ((ulong)plVar48 | 7) + 1;
        }
        lVar41 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar46);
        if (lVar41 == 0) {
          FUN_0eec74c0(uVar46,0);
        }
        uStack_d8 = (undefined4)lVar41;
        uStack_d4 = (undefined4)((ulong)lVar41 >> 0x20);
        uStack_e8 = (undefined *)(uVar46 | 1);
        bStack_df = (byte)((ulong)plVar48 >> 8);
        uStack_de = (undefined2)((ulong)plVar48 >> 0x10);
        uStack_dc = (undefined4)((ulong)plVar48 >> 0x20);
        bStack_e0 = (byte)plVar48;
LAB_0cc45d3c:
        func_0x0eee2ee0(lVar41,pcVar53,plVar48);
      }
      *(char *)(lVar41 + (long)plVar48) = '\0';
      func_0x05cf8990(0xf6ffac0,&uStack_e8,&uStack_e8);
      if (((ulong)uStack_e8 & 1) != 0) {
        func_0x0412a280(CONCAT44(uStack_d4,uStack_d8),(ulong)uStack_e8 & 0xfffffffffffffffe);
      }
      uStack_e8 = (undefined *)0x0;
      if (((ulong)uStack_c0 & 1) == 0) {
        uStack_d0 = SUB84(pcStack_b0,0);
        uStack_cc = (undefined4)((ulong)pcStack_b0 >> 0x20);
        bStack_e0 = (byte)uStack_c0;
        bStack_df = (byte)((ulong)uStack_c0 >> 8);
        uStack_de = (undefined2)((ulong)uStack_c0 >> 0x10);
        uStack_dc = (undefined4)((ulong)uStack_c0 >> 0x20);
        uStack_d8 = SUB84(plStack_b8,0);
        uStack_d4 = (undefined4)((ulong)plStack_b8 >> 0x20);
      }
      else {
        func_0x0412e5e0(&bStack_e0,pcStack_b0,plStack_b8);
      }
      lStack_c8 = 0;
      if ((bStack_e0 & 1) == 0) {
        if (bStack_e0 >> 1 != 0) goto LAB_0cc45de1;
      }
      else if (CONCAT44(uStack_d4,uStack_d8) != 0) {
LAB_0cc45de1:
        if ((bStack_e0 & 1) == 0) {
          pbVar54 = &bStack_df;
        }
        else {
          pbVar54 = (byte *)CONCAT44(uStack_cc,uStack_d0);
        }
        if ((pbVar54 != (byte *)0x0) && (*pbVar54 != 0)) {
          puVar55 = (undefined *)0xcbf29ce484222325;
          uVar46 = strlen(pbVar54);
          if (uVar46 != 0) {
            uVar49 = (ulong)((uint)uVar46 & 7);
            if (7 < uVar46) {
              uVar46 = uVar46 & 0xfffffffffffffff8;
              do {
                puVar55 = (undefined *)
                          (((((((((long)puVar55 * 0x100000001b3 ^ (ulong)*pbVar54) * 0x100000001b3 ^
                                (ulong)pbVar54[1]) * 0x100000001b3 ^ (ulong)pbVar54[2]) *
                               0x100000001b3 ^ (ulong)pbVar54[3]) * 0x100000001b3 ^
                             (ulong)pbVar54[4]) * 0x100000001b3 ^ (ulong)pbVar54[5]) * 0x100000001b3
                           ^ (ulong)pbVar54[6]) * 0x100000001b3 ^ (ulong)pbVar54[7]);
                pbVar54 = pbVar54 + 8;
                uVar46 = uVar46 - 8;
              } while (uVar46 != 0);
            }
            if (uVar49 != 0) {
              uVar46 = 0;
              do {
                puVar55 = (undefined *)((long)puVar55 * 0x100000001b3 ^ (ulong)pbVar54[uVar46]);
                uVar46 = uVar46 + 1;
              } while (uVar49 != uVar46);
            }
          }
          goto LAB_0cc45ee9;
        }
      }
      puVar55 = (undefined *)0x0;
LAB_0cc45ee9:
      uStack_e8 = puVar55;
      puStack_68 = (undefined *)&uStack_e8;
      lVar41 = func_0x05cf8b10(0xf6ff9e0,&uStack_e8,&UNK_01563a4f,&puStack_68,&puStack_48);
      plVar48 = *(long **)(lVar41 + 0x48);
      *(long **)(lVar41 + 0x48) = plVar44;
      if (plVar48 != (long *)0x0) {
        (**(code **)(*plVar48 + 8))();
      }
      puStack_68 = uStack_e8;
      lVar41 = func_0x05cf8dc0(0xf6ffad8,&puStack_68);
      if ((*(byte *)(lVar41 + 0x18) & 1) != 0) {
        func_0x0412a280(*(undefined8 *)(lVar41 + 0x28),
                        *(ulong *)(lVar41 + 0x18) & 0xfffffffffffffffe);
      }
      *(ulong *)(lVar41 + 0x28) = CONCAT44(uStack_cc,uStack_d0);
      *(ulong *)(lVar41 + 0x18) =
           CONCAT44(uStack_dc,CONCAT22(uStack_de,CONCAT11(bStack_df,bStack_e0)));
      *(ulong *)(lVar41 + 0x20) = CONCAT44(uStack_d4,uStack_d8);
      bStack_e0 = 0;
      bStack_df = 0;
      *(undefined **)(lVar41 + 0x10) = uStack_e8;
      *(undefined8 *)(lVar41 + 0x30) = 0;
      if (((ulong)uStack_c0 & 1) != 0) {
        func_0x0412a280(pcStack_b0,(ulong)uStack_c0 & 0xfffffffffffffffe);
      }
      func_0x0cc46730(&puStack_58);
      if (((ulong)puStack_98 & 1) != 0) {
        func_0x0412a280(puStack_88,(ulong)puStack_98 & 0xfffffffffffffffe);
      }
      puStack_98 = &UNK_0f40dd80;
      uStack_90 = CONCAT44(0x4b895440,(undefined4)uStack_90);
      uStack_90 = CONCAT71(uStack_90._1_7_,1);
      plVar48 = plVar44 + 5;
      func_0x0ce6c6a0(&puStack_98,plVar48);
      uStack_e8 = &UNK_0f40da60;
      uStack_dc = 0xbf800000;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      lStack_c8 = 0;
      bStack_e0 = 1;
      func_0x0ce6cb00(&uStack_e8,plVar48);
      uStack_c0 = &UNK_0f407310;
      plStack_b8._2_6_ = (uint6)((ulong)plStack_b8 >> 0x10) & 0xffffffffff00;
      plStack_b8 = (long *)CONCAT62(plStack_b8._2_6_,0x301);
      func_0x0cdb5520(&uStack_c0,plVar48);
      *(char *)(plVar44 + 0x26) = '\x06';
      *(byte *)((long)plVar44 + 0x133) = *(byte *)((long)plVar44 + 0x133) | 0x20;
      puStack_58 = &UNK_0f4033e0;
      uStack_4e = 1;
      uStack_50 = 0x101;
      func_0x0cd50930(&puStack_58,plVar48);
      puStack_68 = &UNK_0f4076c8;
      uStack_60 = 1;
      func_0x0cdbe530(&puStack_68,plVar48);
      puStack_48 = &UNK_0f40dc30;
      uStack_40 = 0x101;
      func_0x0ce494a0(&puStack_48,plVar48);
      uVar35 = uStack_d4;
      uVar34 = uStack_d8;
      uStack_e8 = &UNK_0f40da60;
      lVar41 = CONCAT44(uStack_d4,uStack_d8);
      if (lVar41 != 0) {
        lVar39 = CONCAT44(uStack_cc,uStack_d0);
        if (lVar41 != lVar39) {
          do {
            *(undefined **)(lVar39 + -0x18) = &UNK_0f3773c0;
            plVar44 = *(long **)(lVar39 + -0x10);
            *(undefined8 *)(lVar39 + -0x10) = 0;
            if (plVar44 != (long *)0x0) {
              (**(code **)(*plVar44 + 0x90))();
            }
            lVar39 = lVar39 + -0x18;
          } while (lVar39 != lVar41);
          lVar41 = CONCAT44(uStack_d4,uStack_d8);
        }
        uStack_d0 = uVar34;
        uStack_cc = uVar35;
        func_0x0412a280(lVar41,lStack_c8 - lVar41);
      }
      return;
    }
  }
  else {
    func_0x04882e30();
LAB_0cc46216:
    func_0x04882e30();
LAB_0cc4621b:
    func_0x04882e30();
LAB_0cc46220:
    func_0x04882e30();
  }
  func_0x04882e30();
LAB_0cc4622a:
  uVar47 = func_0x04882e30();
  if (((ulong)uStack_c0 & 1) != 0) {
    func_0x0412a280(pcStack_b0,(ulong)uStack_c0 & 0xfffffffffffffffe);
  }
  if (plVar44 != (long *)0x0) {
    (**(code **)(*plVar44 + 8))(plVar44);
  }
  func_0x0cc46730(&puStack_58);
  if (((ulong)puStack_98 & 1) != 0) {
    func_0x0412a280(puStack_88,(ulong)puStack_98 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar47);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
