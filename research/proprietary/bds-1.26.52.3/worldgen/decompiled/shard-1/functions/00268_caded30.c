/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbded30 (ELF vaddr 0xcaded30)
 * Label: caller-of-callee
 * Body:  [[0cbded30, 0cbdf6b2] [0cbdf73a, 0cbdf758] [0cbdf75c, 0cbdf7d8]]
 * Ghidra: FUN_0cbded30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cbded30(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
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
  undefined1 *puVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  ulong uVar41;
  long lVar42;
  undefined8 uVar43;
  ulong uVar44;
  long *plVar45;
  long *plVar46;
  ulong uVar47;
  char *pcVar48;
  undefined8 *puVar49;
  long *plVar50;
  byte *pbVar51;
  bool bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar56;
  byte bVar58;
  byte bVar60;
  byte bVar62;
  byte bVar64;
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
  byte bVar97;
  byte bVar98;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  long *plStack_d8;
  char *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  ulong uStack_90;
  byte *pbStack_88;
  undefined8 *puStack_78;
  undefined4 uStack_6c;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  char cVar63;
  char cVar65;
  
  uStack_6c = param_4;
  uStack_68 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = (undefined1 *)*param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar41 = uStack_58;
  puVar34 = uStack_60;
  uStack_48 = 0;
  uVar35 = (ulong)uStack_60 >> 1 & 0x7f;
  if (((ulong)uStack_60 & 1) != 0) {
    uVar35 = uStack_58;
  }
  if (uVar35 == 0) {
LAB_0cbdeed8:
    uStack_68 = 0;
    if (((ulong)uStack_60 & 1) != 0) goto LAB_0cbdeee8;
LAB_0cbdeec2:
    pbStack_88 = pbStack_50;
    puStack_98 = uStack_60;
    uStack_90 = uStack_58;
  }
  else {
    pbVar51 = pbStack_50;
    if (((ulong)uStack_60 & 1) == 0) {
      pbVar51 = (byte *)((long)&uStack_60 + 1);
    }
    if (pbVar51 == (byte *)0x0) {
      uStack_68 = 0;
    }
    else {
      if (*pbVar51 == 0) goto LAB_0cbdeed8;
      uVar47 = 0xcbf29ce484222325;
      uVar35 = func_0x0eee2e90(pbVar51);
      uStack_68 = uVar47;
      if (uVar35 != 0) {
        uVar44 = (ulong)((uint)uVar35 & 7);
        if (7 < uVar35) {
          uVar35 = uVar35 & 0xfffffffffffffff8;
          do {
            uVar47 = (((((((uVar47 * 0x100000001b3 ^ (ulong)*pbVar51) * 0x100000001b3 ^
                          (ulong)pbVar51[1]) * 0x100000001b3 ^ (ulong)pbVar51[2]) * 0x100000001b3 ^
                        (ulong)pbVar51[3]) * 0x100000001b3 ^ (ulong)pbVar51[4]) * 0x100000001b3 ^
                      (ulong)pbVar51[5]) * 0x100000001b3 ^ (ulong)pbVar51[6]) * 0x100000001b3 ^
                     (ulong)pbVar51[7];
            pbVar51 = pbVar51 + 8;
            uVar35 = uVar35 - 8;
          } while (uVar35 != 0);
        }
        uStack_68 = uVar47;
        if (uVar44 != 0) {
          uVar35 = 0;
          do {
            uVar47 = uVar47 * 0x100000001b3 ^ (ulong)pbVar51[uVar35];
            uVar35 = uVar35 + 1;
            uStack_68 = uVar47;
          } while (uVar44 != uVar35);
        }
      }
    }
    if (((ulong)puVar34 & 1) == 0) goto LAB_0cbdeec2;
LAB_0cbdeee8:
    func_0x0412e5e0(&puStack_98,pbStack_50,uVar41);
  }
  uStack_c8 = *(undefined8 **)(param_1 + 0x148);
  uStack_c0 = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar46 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar46 = *plVar46 + 1;
    UNLOCK();
  }
  FUN_0cc46680(auStack_40,&uStack_c8);
  plVar46 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar45 = uStack_c0 + 1;
    lVar36 = *plVar45;
    *plVar45 = *plVar45 + -1;
    UNLOCK();
    if (lVar36 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(plVar46);
    }
  }
  lVar36 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3a8);
  if (lVar36 == 0) {
    func_0x0eec74c0(0x3a8,0);
  }
  func_0x0d01a660(lVar36,&puStack_98,uStack_6c);
  lStack_a0 = lVar36;
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar43 = 0;
    lVar37 = 0;
  }
  else {
    lVar37 = func_0x0412c300();
    uVar43 = 0;
    if (lVar37 != 0) {
      uVar43 = *(undefined8 *)(param_1 + 0x138);
    }
  }
  *(undefined8 *)(lVar36 + 0x398) = uVar43;
  plVar46 = *(long **)(lVar36 + 0x3a0);
  *(long *)(lVar36 + 0x3a0) = lVar37;
  if (plVar46 != (long *)0x0) {
    LOCK();
    plVar45 = plVar46 + 1;
    lVar36 = *plVar45;
    *plVar45 = *plVar45 + -1;
    UNLOCK();
    if (lVar36 == 0) {
      (**(code **)(*plVar46 + 0x10))(plVar46);
      func_0x0412c2d0(plVar46);
    }
  }
  lVar36 = lStack_a0;
  bVar52 = (*(byte *)(lStack_a0 + 0xd0) & 1) != 0;
  lVar37 = lStack_a0 + 0xd1;
  if (bVar52) {
    lVar37 = *(long *)(lStack_a0 + 0xe0);
  }
  plVar46 = (long *)(ulong)(*(byte *)(lStack_a0 + 0xd0) >> 1);
  if (bVar52) {
    plVar46 = *(long **)(lStack_a0 + 0xd8);
  }
  if ((long *)0xfffffffffffffff7 < plVar46) {
    func_0x04882e30();
    goto LAB_0cbdf6a9;
  }
  pcVar38 = (char *)((long)&uStack_e0 + 1);
  if (plVar46 < (long *)0x17) {
    uStack_e0 = (long *)CONCAT71(uStack_e0._1_7_,(char)plVar46 * '\x02');
    if (plVar46 != (long *)0x0) goto LAB_0cbdf099;
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
LAB_0cbdf099:
    memcpy(pcVar38,lVar37,plVar46);
  }
  pcVar48 = (char *)((long)&uStack_e0 + 1);
  pcVar38[(long)plVar46] = '\0';
  plVar45 = (long *)(ulong)((byte)uStack_e0 >> 1);
  plVar46 = plStack_d8;
  pcVar38 = pcStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    plVar46 = plVar45;
    pcVar38 = pcVar48;
  }
  if (plVar46 != (long *)0x0) {
    pcVar39 = pcVar38;
    if (plVar46 < (long *)0x8) {
LAB_0cbdf21c:
      do {
        cVar1 = *pcVar39;
        cVar55 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar55 = cVar1;
        }
        *pcVar39 = cVar55;
        pcVar39 = pcVar39 + 1;
      } while (pcVar39 != pcVar38 + (long)plVar46);
    }
    else if (plVar46 < (long *)0x20) {
      plVar45 = (long *)0x0;
LAB_0cbdf1b5:
      plVar50 = (long *)((ulong)plVar46 & 0xfffffffffffffff8);
      pcVar39 = pcVar38 + (long)plVar50;
      do {
        uVar43 = *(undefined8 *)(pcVar38 + (long)plVar45);
        bVar53 = (char)uVar43 + DAT_014e9110;
        cVar55 = (char)((ulong)uVar43 >> 8);
        bVar54 = cVar55 + DAT_014e9110._1_1_;
        cVar57 = (char)((ulong)uVar43 >> 0x10);
        bVar56 = cVar57 + DAT_014e9110._2_1_;
        cVar59 = (char)((ulong)uVar43 >> 0x18);
        bVar58 = cVar59 + DAT_014e9110._3_1_;
        cVar61 = (char)((ulong)uVar43 >> 0x20);
        bVar60 = cVar61 + DAT_014e9110._4_1_;
        cVar63 = (char)((ulong)uVar43 >> 0x28);
        bVar62 = cVar63 + DAT_014e9110._5_1_;
        cVar65 = (char)((ulong)uVar43 >> 0x30);
        cVar1 = (char)((ulong)uVar43 >> 0x38);
        bVar64 = cVar65 + DAT_014e9110._6_1_;
        bVar66 = cVar1 + DAT_014e9110._7_1_;
        bVar2 = DAT_014e8cb0;
        bVar3 = DAT_014e8cb0._1_1_;
        bVar4 = DAT_014e8cb0._2_1_;
        bVar5 = DAT_014e8cb0._3_1_;
        bVar6 = DAT_014e8cb0._4_1_;
        bVar7 = DAT_014e8cb0._5_1_;
        bVar8 = DAT_014e8cb0._6_1_;
        bVar9 = DAT_014e8cb0._7_1_;
        *(ulong *)(pcVar38 + (long)plVar45) =
             CONCAT17((~-((byte)((bVar66 < bVar9) * bVar9 | (bVar66 >= bVar9) * bVar66) == bVar66) &
                      UNK_014ea367) + cVar1,
                      CONCAT16((~-((byte)((bVar64 < bVar8) * bVar8 | (bVar64 >= bVar8) * bVar64) ==
                                  bVar64) & UNK_014ea366) + cVar65,
                               CONCAT15((~-((byte)((bVar62 < bVar7) * bVar7 |
                                                  (bVar62 >= bVar7) * bVar62) == bVar62) &
                                        UNK_014ea365) + cVar63,
                                        CONCAT14((~-((byte)((bVar60 < bVar6) * bVar6 |
                                                           (bVar60 >= bVar6) * bVar60) == bVar60) &
                                                 UNK_014ea364) + cVar61,
                                                 CONCAT13((~-((byte)((bVar58 < bVar5) * bVar5 |
                                                                    (bVar58 >= bVar5) * bVar58) ==
                                                             bVar58) & UNK_014ea363) + cVar59,
                                                          CONCAT12((~-((byte)((bVar56 < bVar4) *
                                                                              bVar4 | (bVar56 >=
                                                                                      bVar4) * 
                                                  bVar56) == bVar56) & UNK_014ea362) + cVar57,
                                                  CONCAT11((~-((byte)((bVar54 < bVar3) * bVar3 |
                                                                     (bVar54 >= bVar3) * bVar54) ==
                                                              bVar54) & UNK_014ea361) + cVar55,
                                                           (~-((byte)((bVar53 < bVar2) * bVar2 |
                                                                     (bVar53 >= bVar2) * bVar53) ==
                                                              bVar53) & DAT_014ea360) + (char)uVar43
                                                          )))))));
        plVar45 = plVar45 + 1;
      } while (plVar50 != plVar45);
      if (plVar46 != plVar50) goto LAB_0cbdf21c;
    }
    else {
      plVar45 = (long *)((ulong)plVar46 & 0xffffffffffffffe0);
      plVar50 = (long *)0x0;
      do {
        pcVar39 = pcVar38 + (long)plVar50;
        cVar1 = pcVar39[1];
        cVar55 = pcVar39[2];
        cVar57 = pcVar39[3];
        cVar59 = pcVar39[4];
        cVar61 = pcVar39[5];
        cVar63 = pcVar39[6];
        cVar65 = pcVar39[7];
        cVar10 = pcVar39[8];
        cVar11 = pcVar39[9];
        cVar12 = pcVar39[10];
        cVar13 = pcVar39[0xb];
        cVar14 = pcVar39[0xc];
        cVar15 = pcVar39[0xd];
        cVar16 = pcVar39[0xe];
        cVar17 = pcVar39[0xf];
        pcVar40 = pcVar38 + 0x10 + (long)plVar50;
        cVar18 = *pcVar40;
        cVar19 = pcVar40[1];
        cVar20 = pcVar40[2];
        cVar21 = pcVar40[3];
        cVar22 = pcVar40[4];
        cVar23 = pcVar40[5];
        cVar24 = pcVar40[6];
        cVar25 = pcVar40[7];
        cVar26 = pcVar40[8];
        cVar27 = pcVar40[9];
        cVar28 = pcVar40[10];
        cVar29 = pcVar40[0xb];
        cVar30 = pcVar40[0xc];
        cVar31 = pcVar40[0xd];
        cVar32 = pcVar40[0xe];
        cVar33 = pcVar40[0xf];
        bVar67 = *pcVar39 + DAT_014e86b0;
        bVar68 = cVar1 + DAT_014e86b0._1_1_;
        bVar69 = cVar55 + DAT_014e86b0._2_1_;
        bVar70 = cVar57 + DAT_014e86b0._3_1_;
        bVar71 = cVar59 + DAT_014e86b0._4_1_;
        bVar72 = cVar61 + DAT_014e86b0._5_1_;
        bVar73 = cVar63 + DAT_014e86b0._6_1_;
        bVar74 = cVar65 + DAT_014e86b0._7_1_;
        bVar75 = cVar10 + DAT_014e86b0._8_1_;
        bVar76 = cVar11 + DAT_014e86b0._9_1_;
        bVar77 = cVar12 + DAT_014e86b0._10_1_;
        bVar78 = cVar13 + DAT_014e86b0._11_1_;
        bVar79 = cVar14 + DAT_014e86b0._12_1_;
        bVar80 = cVar15 + DAT_014e86b0._13_1_;
        bVar81 = cVar16 + DAT_014e86b0._14_1_;
        bVar82 = cVar17 + DAT_014e86b0._15_1_;
        bVar83 = cVar18 + DAT_014e86b0;
        bVar84 = cVar19 + DAT_014e86b0._1_1_;
        bVar85 = cVar20 + DAT_014e86b0._2_1_;
        bVar86 = cVar21 + DAT_014e86b0._3_1_;
        bVar87 = cVar22 + DAT_014e86b0._4_1_;
        bVar88 = cVar23 + DAT_014e86b0._5_1_;
        bVar89 = cVar24 + DAT_014e86b0._6_1_;
        bVar90 = cVar25 + DAT_014e86b0._7_1_;
        bVar91 = cVar26 + DAT_014e86b0._8_1_;
        bVar92 = cVar27 + DAT_014e86b0._9_1_;
        bVar93 = cVar28 + DAT_014e86b0._10_1_;
        bVar94 = cVar29 + DAT_014e86b0._11_1_;
        bVar95 = cVar30 + DAT_014e86b0._12_1_;
        bVar96 = cVar31 + DAT_014e86b0._13_1_;
        bVar97 = cVar32 + DAT_014e86b0._14_1_;
        bVar98 = cVar33 + DAT_014e86b0._15_1_;
        bVar2 = DAT_014e4170;
        bVar3 = DAT_014e4170._1_1_;
        bVar4 = DAT_014e4170._2_1_;
        bVar5 = DAT_014e4170._3_1_;
        bVar6 = DAT_014e4170._4_1_;
        bVar7 = DAT_014e4170._5_1_;
        bVar8 = DAT_014e4170._6_1_;
        bVar9 = DAT_014e4170._7_1_;
        bVar53 = DAT_014e4170._8_1_;
        bVar54 = DAT_014e4170._9_1_;
        bVar56 = DAT_014e4170._10_1_;
        bVar58 = DAT_014e4170._11_1_;
        bVar60 = DAT_014e4170._12_1_;
        bVar62 = DAT_014e4170._13_1_;
        bVar64 = DAT_014e4170._14_1_;
        bVar66 = DAT_014e4170._15_1_;
        pcVar40 = pcVar38 + (long)plVar50;
        *pcVar40 = (-((byte)((bVar2 < bVar67) * bVar2 | (bVar2 >= bVar67) * bVar67) == bVar67) &
                   DAT_014ead50) + *pcVar39;
        pcVar40[1] = (-((byte)((bVar3 < bVar68) * bVar3 | (bVar3 >= bVar68) * bVar68) == bVar68) &
                     UNK_014ead51) + cVar1;
        pcVar40[2] = (-((byte)((bVar4 < bVar69) * bVar4 | (bVar4 >= bVar69) * bVar69) == bVar69) &
                     UNK_014ead52) + cVar55;
        pcVar40[3] = (-((byte)((bVar5 < bVar70) * bVar5 | (bVar5 >= bVar70) * bVar70) == bVar70) &
                     UNK_014ead53) + cVar57;
        pcVar40[4] = (-((byte)((bVar6 < bVar71) * bVar6 | (bVar6 >= bVar71) * bVar71) == bVar71) &
                     UNK_014ead54) + cVar59;
        pcVar40[5] = (-((byte)((bVar7 < bVar72) * bVar7 | (bVar7 >= bVar72) * bVar72) == bVar72) &
                     UNK_014ead55) + cVar61;
        pcVar40[6] = (-((byte)((bVar8 < bVar73) * bVar8 | (bVar8 >= bVar73) * bVar73) == bVar73) &
                     UNK_014ead56) + cVar63;
        pcVar40[7] = (-((byte)((bVar9 < bVar74) * bVar9 | (bVar9 >= bVar74) * bVar74) == bVar74) &
                     UNK_014ead57) + cVar65;
        pcVar40[8] = (-((byte)((bVar53 < bVar75) * bVar53 | (bVar53 >= bVar75) * bVar75) == bVar75)
                     & UNK_014ead58) + cVar10;
        pcVar40[9] = (-((byte)((bVar54 < bVar76) * bVar54 | (bVar54 >= bVar76) * bVar76) == bVar76)
                     & UNK_014ead59) + cVar11;
        pcVar40[10] = (-((byte)((bVar56 < bVar77) * bVar56 | (bVar56 >= bVar77) * bVar77) == bVar77)
                      & UNK_014ead5a) + cVar12;
        pcVar40[0xb] = (-((byte)((bVar58 < bVar78) * bVar58 | (bVar58 >= bVar78) * bVar78) == bVar78
                         ) & UNK_014ead5b) + cVar13;
        pcVar40[0xc] = (-((byte)((bVar60 < bVar79) * bVar60 | (bVar60 >= bVar79) * bVar79) == bVar79
                         ) & UNK_014ead5c) + cVar14;
        pcVar40[0xd] = (-((byte)((bVar62 < bVar80) * bVar62 | (bVar62 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead5d) + cVar15;
        pcVar40[0xe] = (-((byte)((bVar64 < bVar81) * bVar64 | (bVar64 >= bVar81) * bVar81) == bVar81
                         ) & UNK_014ead5e) + cVar16;
        pcVar40[0xf] = (-((byte)((bVar66 < bVar82) * bVar66 | (bVar66 >= bVar82) * bVar82) == bVar82
                         ) & UNK_014ead5f) + cVar17;
        pcVar39 = pcVar38 + 0x10 + (long)plVar50;
        *pcVar39 = (-((byte)((bVar2 < bVar83) * bVar2 | (bVar2 >= bVar83) * bVar83) == bVar83) &
                   DAT_014ead50) + cVar18;
        pcVar39[1] = (-((byte)((bVar3 < bVar84) * bVar3 | (bVar3 >= bVar84) * bVar84) == bVar84) &
                     UNK_014ead51) + cVar19;
        pcVar39[2] = (-((byte)((bVar4 < bVar85) * bVar4 | (bVar4 >= bVar85) * bVar85) == bVar85) &
                     UNK_014ead52) + cVar20;
        pcVar39[3] = (-((byte)((bVar5 < bVar86) * bVar5 | (bVar5 >= bVar86) * bVar86) == bVar86) &
                     UNK_014ead53) + cVar21;
        pcVar39[4] = (-((byte)((bVar6 < bVar87) * bVar6 | (bVar6 >= bVar87) * bVar87) == bVar87) &
                     UNK_014ead54) + cVar22;
        pcVar39[5] = (-((byte)((bVar7 < bVar88) * bVar7 | (bVar7 >= bVar88) * bVar88) == bVar88) &
                     UNK_014ead55) + cVar23;
        pcVar39[6] = (-((byte)((bVar8 < bVar89) * bVar8 | (bVar8 >= bVar89) * bVar89) == bVar89) &
                     UNK_014ead56) + cVar24;
        pcVar39[7] = (-((byte)((bVar9 < bVar90) * bVar9 | (bVar9 >= bVar90) * bVar90) == bVar90) &
                     UNK_014ead57) + cVar25;
        pcVar39[8] = (-((byte)((bVar53 < bVar91) * bVar53 | (bVar53 >= bVar91) * bVar91) == bVar91)
                     & UNK_014ead58) + cVar26;
        pcVar39[9] = (-((byte)((bVar54 < bVar92) * bVar54 | (bVar54 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead59) + cVar27;
        pcVar39[10] = (-((byte)((bVar56 < bVar93) * bVar56 | (bVar56 >= bVar93) * bVar93) == bVar93)
                      & UNK_014ead5a) + cVar28;
        pcVar39[0xb] = (-((byte)((bVar58 < bVar94) * bVar58 | (bVar58 >= bVar94) * bVar94) == bVar94
                         ) & UNK_014ead5b) + cVar29;
        pcVar39[0xc] = (-((byte)((bVar60 < bVar95) * bVar60 | (bVar60 >= bVar95) * bVar95) == bVar95
                         ) & UNK_014ead5c) + cVar30;
        pcVar39[0xd] = (-((byte)((bVar62 < bVar96) * bVar62 | (bVar62 >= bVar96) * bVar96) == bVar96
                         ) & UNK_014ead5d) + cVar31;
        pcVar39[0xe] = (-((byte)((bVar64 < bVar97) * bVar64 | (bVar64 >= bVar97) * bVar97) == bVar97
                         ) & UNK_014ead5e) + cVar32;
        pcVar39[0xf] = (-((byte)((bVar66 < bVar98) * bVar66 | (bVar66 >= bVar98) * bVar98) == bVar98
                         ) & UNK_014ead5f) + cVar33;
        plVar50 = plVar50 + 4;
      } while (plVar45 != plVar50);
      if (plVar46 != plVar45) {
        if (((ulong)plVar46 & 0x18) == 0) {
          pcVar39 = (char *)((long)plVar45 + (long)pcVar38);
          goto LAB_0cbdf21c;
        }
        goto LAB_0cbdf1b5;
      }
    }
    plVar45 = (long *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    plVar45 = plStack_d8;
    pcVar48 = pcStack_d0;
  }
  pcVar38 = pcVar48 + (long)plVar45;
  plVar46 = plVar45;
  pcVar39 = pcVar48;
  while (((pcVar40 = pcVar38, 0 < (long)plVar46 &&
          (pcVar39 = (char *)func_0x0eee2ef0(pcVar39,0x3a,plVar46), pcVar39 != (char *)0x0)) &&
         (pcVar40 = pcVar39, *pcVar39 != ':'))) {
    pcVar39 = pcVar39 + 1;
    plVar46 = (long *)(pcVar38 + -(long)pcVar39);
  }
  plVar46 = (long *)(pcVar40 + -(long)pcVar48);
  if (plVar45 < pcVar40 + -(long)pcVar48) {
    plVar46 = plVar45;
  }
  if (pcVar40 == pcVar38) {
    plVar46 = plVar45;
  }
  if ((long *)0xfffffffffffffff7 < plVar46) {
LAB_0cbdf6a9:
    uVar43 = func_0x04882e30();
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pcStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    func_0x05cfe4c0(&lStack_a0);
    func_0x0cc46730(auStack_40);
    if (((ulong)puStack_98 & 1) != 0) goto LAB_0cbdf78c;
    do {
      while (((ulong)uStack_60 & 1) != 0) {
        func_0x0412a280(pbStack_50,(ulong)uStack_60 & 0xfffffffffffffffe);
        uVar43 = _Unwind_Resume(uVar43);
      }
      _Unwind_Resume(uVar43);
LAB_0cbdf78c:
      func_0x0412a280(pbStack_88,(ulong)puStack_98 & 0xfffffffffffffffe);
    } while( true );
  }
  if (plVar46 < (long *)0x17) {
    uStack_c8 = (undefined8 *)CONCAT71(uStack_c8._1_7_,(char)plVar46 * '\x02');
    lVar37 = (long)&uStack_c8 + 1;
    if (plVar46 != (long *)0x0) goto LAB_0cbdf320;
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
LAB_0cbdf320:
    func_0x0eee2ee0(lVar37,pcVar48,plVar46);
  }
  *(char *)(lVar37 + (long)plVar46) = '\0';
  func_0x05cf8990(param_1 + 0xe0,&uStack_c8,&uStack_c8);
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
  uStack_a8 = 0;
  if (((ulong)uStack_c0 & 1) == 0) {
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_0cbdf3d0;
  }
  else if (auStack_b8._0_8_ != 0) {
LAB_0cbdf3d0:
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar51 = (byte *)((long)&uStack_c0 + 1);
    }
    else {
      pbVar51 = (byte *)auStack_b8._8_8_;
    }
    if ((pbVar51 != (byte *)0x0) && (*pbVar51 != 0)) {
      puVar49 = (undefined8 *)0xcbf29ce484222325;
      uVar41 = func_0x0eee2e90(pbVar51);
      if (uVar41 != 0) {
        uVar35 = (ulong)((uint)uVar41 & 7);
        if (7 < uVar41) {
          uVar41 = uVar41 & 0xfffffffffffffff8;
          do {
            puVar49 = (undefined8 *)
                      (((((((((long)puVar49 * 0x100000001b3 ^ (ulong)*pbVar51) * 0x100000001b3 ^
                            (ulong)pbVar51[1]) * 0x100000001b3 ^ (ulong)pbVar51[2]) * 0x100000001b3
                          ^ (ulong)pbVar51[3]) * 0x100000001b3 ^ (ulong)pbVar51[4]) * 0x100000001b3
                        ^ (ulong)pbVar51[5]) * 0x100000001b3 ^ (ulong)pbVar51[6]) * 0x100000001b3 ^
                      (ulong)pbVar51[7]);
            pbVar51 = pbVar51 + 8;
            uVar41 = uVar41 - 8;
          } while (uVar41 != 0);
        }
        if (uVar35 != 0) {
          uVar41 = 0;
          do {
            puVar49 = (undefined8 *)((long)puVar49 * 0x100000001b3 ^ (ulong)pbVar51[uVar41]);
            uVar41 = uVar41 + 1;
          } while (uVar35 != uVar41);
        }
      }
      goto LAB_0cbdf4c9;
    }
  }
  puVar49 = (undefined8 *)0x0;
LAB_0cbdf4c9:
  uStack_c8 = puVar49;
  puStack_78 = &uStack_c8;
  lVar42 = func_0x05cf8b10(param_1,&uStack_c8,&UNK_01563a4f,&puStack_78,&uStack_e1);
  lVar37 = lStack_a0;
  lStack_a0 = 0;
  plVar46 = *(long **)(lVar42 + 0x48);
  *(long *)(lVar42 + 0x48) = lVar37;
  if (plVar46 != (long *)0x0) {
    (**(code **)(*plVar46 + 8))();
  }
  puStack_78 = uStack_c8;
  lVar37 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_78);
  if ((*(byte *)(lVar37 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar37 + 0x28),*(ulong *)(lVar37 + 0x18) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar37 + 0x28) = auStack_b8._8_8_;
  *(long **)(lVar37 + 0x18) = uStack_c0;
  *(undefined8 *)(lVar37 + 0x20) = auStack_b8._0_8_;
  uStack_c0 = (long *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar37 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar37 + 0x30) = 0;
  if (((ulong)uStack_e0 & 1) != 0) {
    func_0x0412a280(pcStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if (((ulong)puStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,(ulong)puStack_98 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(lVar36,0xf6fe340,_DAT_0f6fe350);
  func_0x0c6cd240(lVar36,0xf6fe9c8,_DAT_0f6fe9d8);
  uStack_c8 = (undefined8 *)&UNK_0f3f51d8;
  uStack_c0 = (long *)0x4334000000000001;
  auStack_b8 = (undefined1  [16])0x0;
  uStack_a8 = 0;
  func_0x0cb9df80(&uStack_c8,lVar36);
  uStack_c8 = (undefined8 *)&UNK_0f3f51d8;
  puStack_98 = auStack_b8;
  func_0x054761f0(&puStack_98);
  if (((ulong)uStack_60 & 1) != 0) {
    func_0x0412a280(pbStack_50,(ulong)uStack_60 & 0xfffffffffffffffe);
  }
  return lVar36;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
