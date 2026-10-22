/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbd9020 (ELF vaddr 0xcad9020)
 * Label: caller-of-callee
 * Body:  [[0cbd9020, 0cbd9998] [0cbd9a11, 0cbd9a34] [0cbd9a38, 0cbd9ac7]]
 * Ghidra: FUN_0cbd9020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbd9020(long param_1,undefined8 param_2,byte *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  char *pcVar1;
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
  char cVar34;
  ulong uVar35;
  long *plVar36;
  long lVar37;
  char *pcVar38;
  long *plVar39;
  char *pcVar40;
  ulong uVar41;
  long lVar42;
  undefined8 uVar43;
  long *plVar44;
  ulong uVar45;
  long *plVar46;
  ulong uVar47;
  undefined8 *puVar48;
  long *plVar49;
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
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  long *plStack_98;
  ulong uStack_90;
  byte *pbStack_88;
  undefined8 *puStack_80;
  undefined4 uStack_74;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  char cVar63;
  char cVar65;
  
  uStack_48 = param_5;
  uStack_74 = param_4;
  uStack_70 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_58 = *(byte **)(param_3 + 0x10);
    uStack_68 = *(long **)param_3;
    uStack_60 = *(ulong *)(param_3 + 8);
  }
  else {
    func_0x0412e5e0(&uStack_68,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  uVar41 = uStack_60;
  plVar36 = uStack_68;
  uStack_50 = 0;
  uVar35 = (ulong)uStack_68 >> 1 & 0x7f;
  if (((ulong)uStack_68 & 1) != 0) {
    uVar35 = uStack_60;
  }
  if (uVar35 == 0) {
LAB_0cbd91c5:
    uStack_70 = 0;
joined_r0x0cbd91d0:
    if (((ulong)plVar36 & 1) != 0) goto LAB_0cbd91d2;
LAB_0cbd91b0:
    pbStack_88 = pbStack_58;
    plStack_98 = uStack_68;
    uStack_90 = uStack_60;
  }
  else {
    pbVar51 = pbStack_58;
    if (((ulong)uStack_68 & 1) == 0) {
      pbVar51 = (byte *)((long)&uStack_68 + 1);
    }
    if (pbVar51 != (byte *)0x0) {
      if (*pbVar51 == 0) goto LAB_0cbd91c5;
      uVar47 = 0xcbf29ce484222325;
      uVar35 = func_0x0eee2e90(pbVar51);
      uStack_70 = uVar47;
      if (uVar35 != 0) {
        uVar45 = (ulong)((uint)uVar35 & 7);
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
        uStack_70 = uVar47;
        if (uVar45 != 0) {
          uVar35 = 0;
          do {
            uVar47 = uVar47 * 0x100000001b3 ^ (ulong)pbVar51[uVar35];
            uVar35 = uVar35 + 1;
            uStack_70 = uVar47;
          } while (uVar45 != uVar35);
        }
      }
      goto joined_r0x0cbd91d0;
    }
    uStack_70 = 0;
    if (((ulong)uStack_68 & 1) == 0) goto LAB_0cbd91b0;
LAB_0cbd91d2:
    func_0x0412e5e0(&plStack_98,pbStack_58,uVar41);
  }
  uStack_c8 = *(long **)(param_1 + 0x148);
  uStack_c0 = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar36 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar36 = *plVar36 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_c8);
  plVar36 = uStack_c0;
  if (uStack_c0 != (long *)0x0) {
    LOCK();
    plVar46 = uStack_c0 + 1;
    lVar42 = *plVar46;
    *plVar46 = *plVar46 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*uStack_c0 + 0x10))(uStack_c0);
      FUN_0412c2d0(plVar36);
    }
  }
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar36 == (long *)0x0) {
    func_0x0eec74c0(0x3b0,0);
  }
  func_0x0c67fa90(plVar36,&plStack_98,uStack_74,uStack_48,0x16);
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
  plVar36[0x73] = lVar42;
  plVar46 = (long *)plVar36[0x74];
  plVar36[0x74] = lVar37;
  if (plVar46 != (long *)0x0) {
    LOCK();
    plVar44 = plVar46 + 1;
    lVar42 = *plVar44;
    *plVar44 = *plVar44 + -1;
    UNLOCK();
    if (lVar42 == 0) {
      (**(code **)(*plVar46 + 0x10))(plVar46);
      FUN_0412c2d0(plVar46);
    }
  }
  bVar52 = (*(byte *)(plVar36 + 0x1a) & 1) != 0;
  plVar46 = (long *)((long)plVar36 + 0xd1);
  if (bVar52) {
    plVar46 = (long *)plVar36[0x1c];
  }
  plVar44 = (long *)(ulong)(*(byte *)(plVar36 + 0x1a) >> 1);
  if (bVar52) {
    plVar44 = (long *)plVar36[0x1b];
  }
  if ((long *)0xfffffffffffffff7 < plVar44) {
    FUN_04882e30();
    goto LAB_0cbd9992;
  }
  plVar49 = (long *)(auStack_e0 + 1);
  if (plVar44 < (long *)0x17) {
    auStack_e0[0] = (char)plVar44 * '\x02';
    if (plVar44 != (long *)0x0) goto LAB_0cbd938a;
  }
  else {
    uVar41 = 0x1a;
    if (((ulong)plVar44 | 7) != 0x17) {
      uVar41 = ((ulong)plVar44 | 7) + 1;
    }
    plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41);
    if (plVar49 == (long *)0x0) {
      func_0x0eec74c0(uVar41,0);
    }
    auStack_e0 = (undefined1  [8])(uVar41 | 1);
    plStack_d8 = plVar44;
    plStack_d0 = plVar49;
LAB_0cbd938a:
    func_0x0eee2f00(plVar49,plVar46,plVar44);
  }
  *(char *)((long)plVar49 + (long)plVar44) = '\0';
  plVar49 = (long *)(ulong)(auStack_e0[0] >> 1);
  plVar44 = plStack_d8;
  plVar46 = plStack_d0;
  if (((ulong)auStack_e0 & 1) == 0) {
    plVar44 = plVar49;
    plVar46 = (long *)(auStack_e0 + 1);
  }
  if (plVar44 != (long *)0x0) {
    plVar49 = plVar46;
    if (plVar44 < (long *)0x8) {
LAB_0cbd94fc:
      do {
        cVar10 = (char)*plVar49;
        cVar55 = cVar10 + ' ';
        if (0x19 < (byte)(cVar10 + 0xbfU)) {
          cVar55 = cVar10;
        }
        *(char *)plVar49 = cVar55;
        plVar49 = (long *)((long)plVar49 + 1);
      } while (plVar49 != (long *)((long)plVar46 + (long)plVar44));
    }
    else if (plVar44 < (long *)0x20) {
      plVar39 = (long *)0x0;
LAB_0cbd9495:
      plVar50 = (long *)((ulong)plVar44 & 0xfffffffffffffff8);
      plVar49 = (long *)((long)plVar46 + (long)plVar50);
      do {
        uVar43 = *(undefined8 *)((long)plVar46 + (long)plVar39);
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
        cVar10 = (char)((ulong)uVar43 >> 0x38);
        bVar64 = cVar65 + DAT_014e9110._6_1_;
        bVar66 = cVar10 + DAT_014e9110._7_1_;
        bVar2 = DAT_014e8cb0;
        bVar3 = DAT_014e8cb0._1_1_;
        bVar4 = DAT_014e8cb0._2_1_;
        bVar5 = DAT_014e8cb0._3_1_;
        bVar6 = DAT_014e8cb0._4_1_;
        bVar7 = DAT_014e8cb0._5_1_;
        bVar8 = DAT_014e8cb0._6_1_;
        bVar9 = DAT_014e8cb0._7_1_;
        *(ulong *)((long)plVar46 + (long)plVar39) =
             CONCAT17((~-((byte)((bVar66 < bVar9) * bVar9 | (bVar66 >= bVar9) * bVar66) == bVar66) &
                      UNK_014ea367) + cVar10,
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
        plVar39 = plVar39 + 1;
      } while (plVar50 != plVar39);
      if (plVar44 != plVar50) goto LAB_0cbd94fc;
    }
    else {
      plVar39 = (long *)((ulong)plVar44 & 0xffffffffffffffe0);
      plVar49 = (long *)0x0;
      do {
        pcVar1 = (char *)((long)plVar46 + (long)plVar49);
        cVar10 = pcVar1[1];
        cVar55 = pcVar1[2];
        cVar57 = pcVar1[3];
        cVar59 = pcVar1[4];
        cVar61 = pcVar1[5];
        cVar63 = pcVar1[6];
        cVar65 = pcVar1[7];
        cVar11 = pcVar1[8];
        cVar12 = pcVar1[9];
        cVar13 = pcVar1[10];
        cVar14 = pcVar1[0xb];
        cVar15 = pcVar1[0xc];
        cVar16 = pcVar1[0xd];
        cVar17 = pcVar1[0xe];
        cVar18 = pcVar1[0xf];
        pcVar40 = (char *)((long)(plVar46 + 2) + (long)plVar49);
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
        bVar67 = *pcVar1 + DAT_014e86b0;
        bVar68 = cVar10 + DAT_014e86b0._1_1_;
        bVar69 = cVar55 + DAT_014e86b0._2_1_;
        bVar70 = cVar57 + DAT_014e86b0._3_1_;
        bVar71 = cVar59 + DAT_014e86b0._4_1_;
        bVar72 = cVar61 + DAT_014e86b0._5_1_;
        bVar73 = cVar63 + DAT_014e86b0._6_1_;
        bVar74 = cVar65 + DAT_014e86b0._7_1_;
        bVar75 = cVar11 + DAT_014e86b0._8_1_;
        bVar76 = cVar12 + DAT_014e86b0._9_1_;
        bVar77 = cVar13 + DAT_014e86b0._10_1_;
        bVar78 = cVar14 + DAT_014e86b0._11_1_;
        bVar79 = cVar15 + DAT_014e86b0._12_1_;
        bVar80 = cVar16 + DAT_014e86b0._13_1_;
        bVar81 = cVar17 + DAT_014e86b0._14_1_;
        bVar82 = cVar18 + DAT_014e86b0._15_1_;
        bVar83 = cVar19 + DAT_014e86b0;
        bVar84 = cVar20 + DAT_014e86b0._1_1_;
        bVar85 = cVar21 + DAT_014e86b0._2_1_;
        bVar86 = cVar22 + DAT_014e86b0._3_1_;
        bVar87 = cVar23 + DAT_014e86b0._4_1_;
        bVar88 = cVar24 + DAT_014e86b0._5_1_;
        bVar89 = cVar25 + DAT_014e86b0._6_1_;
        bVar90 = cVar26 + DAT_014e86b0._7_1_;
        bVar91 = cVar27 + DAT_014e86b0._8_1_;
        bVar92 = cVar28 + DAT_014e86b0._9_1_;
        bVar93 = cVar29 + DAT_014e86b0._10_1_;
        bVar94 = cVar30 + DAT_014e86b0._11_1_;
        bVar95 = cVar31 + DAT_014e86b0._12_1_;
        bVar96 = cVar32 + DAT_014e86b0._13_1_;
        bVar97 = cVar33 + DAT_014e86b0._14_1_;
        bVar98 = cVar34 + DAT_014e86b0._15_1_;
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
        pcVar40 = (char *)((long)plVar46 + (long)plVar49);
        *pcVar40 = (-((byte)((bVar2 < bVar67) * bVar2 | (bVar2 >= bVar67) * bVar67) == bVar67) &
                   DAT_014ead50) + *pcVar1;
        pcVar40[1] = (-((byte)((bVar3 < bVar68) * bVar3 | (bVar3 >= bVar68) * bVar68) == bVar68) &
                     UNK_014ead51) + cVar10;
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
                     & UNK_014ead58) + cVar11;
        pcVar40[9] = (-((byte)((bVar54 < bVar76) * bVar54 | (bVar54 >= bVar76) * bVar76) == bVar76)
                     & UNK_014ead59) + cVar12;
        pcVar40[10] = (-((byte)((bVar56 < bVar77) * bVar56 | (bVar56 >= bVar77) * bVar77) == bVar77)
                      & UNK_014ead5a) + cVar13;
        pcVar40[0xb] = (-((byte)((bVar58 < bVar78) * bVar58 | (bVar58 >= bVar78) * bVar78) == bVar78
                         ) & UNK_014ead5b) + cVar14;
        pcVar40[0xc] = (-((byte)((bVar60 < bVar79) * bVar60 | (bVar60 >= bVar79) * bVar79) == bVar79
                         ) & UNK_014ead5c) + cVar15;
        pcVar40[0xd] = (-((byte)((bVar62 < bVar80) * bVar62 | (bVar62 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead5d) + cVar16;
        pcVar40[0xe] = (-((byte)((bVar64 < bVar81) * bVar64 | (bVar64 >= bVar81) * bVar81) == bVar81
                         ) & UNK_014ead5e) + cVar17;
        pcVar40[0xf] = (-((byte)((bVar66 < bVar82) * bVar66 | (bVar66 >= bVar82) * bVar82) == bVar82
                         ) & UNK_014ead5f) + cVar18;
        pcVar1 = (char *)((long)(plVar46 + 2) + (long)plVar49);
        *pcVar1 = (-((byte)((bVar2 < bVar83) * bVar2 | (bVar2 >= bVar83) * bVar83) == bVar83) &
                  DAT_014ead50) + cVar19;
        pcVar1[1] = (-((byte)((bVar3 < bVar84) * bVar3 | (bVar3 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead51) + cVar20;
        pcVar1[2] = (-((byte)((bVar4 < bVar85) * bVar4 | (bVar4 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead52) + cVar21;
        pcVar1[3] = (-((byte)((bVar5 < bVar86) * bVar5 | (bVar5 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead53) + cVar22;
        pcVar1[4] = (-((byte)((bVar6 < bVar87) * bVar6 | (bVar6 >= bVar87) * bVar87) == bVar87) &
                    UNK_014ead54) + cVar23;
        pcVar1[5] = (-((byte)((bVar7 < bVar88) * bVar7 | (bVar7 >= bVar88) * bVar88) == bVar88) &
                    UNK_014ead55) + cVar24;
        pcVar1[6] = (-((byte)((bVar8 < bVar89) * bVar8 | (bVar8 >= bVar89) * bVar89) == bVar89) &
                    UNK_014ead56) + cVar25;
        pcVar1[7] = (-((byte)((bVar9 < bVar90) * bVar9 | (bVar9 >= bVar90) * bVar90) == bVar90) &
                    UNK_014ead57) + cVar26;
        pcVar1[8] = (-((byte)((bVar53 < bVar91) * bVar53 | (bVar53 >= bVar91) * bVar91) == bVar91) &
                    UNK_014ead58) + cVar27;
        pcVar1[9] = (-((byte)((bVar54 < bVar92) * bVar54 | (bVar54 >= bVar92) * bVar92) == bVar92) &
                    UNK_014ead59) + cVar28;
        pcVar1[10] = (-((byte)((bVar56 < bVar93) * bVar56 | (bVar56 >= bVar93) * bVar93) == bVar93)
                     & UNK_014ead5a) + cVar29;
        pcVar1[0xb] = (-((byte)((bVar58 < bVar94) * bVar58 | (bVar58 >= bVar94) * bVar94) == bVar94)
                      & UNK_014ead5b) + cVar30;
        pcVar1[0xc] = (-((byte)((bVar60 < bVar95) * bVar60 | (bVar60 >= bVar95) * bVar95) == bVar95)
                      & UNK_014ead5c) + cVar31;
        pcVar1[0xd] = (-((byte)((bVar62 < bVar96) * bVar62 | (bVar62 >= bVar96) * bVar96) == bVar96)
                      & UNK_014ead5d) + cVar32;
        pcVar1[0xe] = (-((byte)((bVar64 < bVar97) * bVar64 | (bVar64 >= bVar97) * bVar97) == bVar97)
                      & UNK_014ead5e) + cVar33;
        pcVar1[0xf] = (-((byte)((bVar66 < bVar98) * bVar66 | (bVar66 >= bVar98) * bVar98) == bVar98)
                      & UNK_014ead5f) + cVar34;
        plVar49 = plVar49 + 4;
      } while (plVar39 != plVar49);
      if (plVar44 != plVar39) {
        if (((ulong)plVar44 & 0x18) == 0) {
          plVar49 = (long *)((long)plVar39 + (long)plVar46);
          goto LAB_0cbd94fc;
        }
        goto LAB_0cbd9495;
      }
    }
    plVar49 = (long *)(ulong)(auStack_e0[0] >> 1);
  }
  plVar44 = (long *)(auStack_e0 + 1);
  if (((ulong)auStack_e0 & 1) != 0) {
    plVar49 = plStack_d8;
    plVar44 = plStack_d0;
  }
  pcVar1 = (char *)((long)plVar44 + (long)plVar49);
  plVar46 = plVar49;
  plVar39 = plVar44;
  while (((pcVar40 = pcVar1, 0 < (long)plVar46 &&
          (pcVar38 = (char *)func_0x0eee2ef0(plVar39,0x3a,plVar46), pcVar38 != (char *)0x0)) &&
         (pcVar40 = pcVar38, *pcVar38 != ':'))) {
    plVar39 = (long *)(pcVar38 + 1);
    plVar46 = (long *)(pcVar1 + -(long)plVar39);
  }
  plVar46 = (long *)(pcVar40 + -(long)plVar44);
  if (plVar49 < pcVar40 + -(long)plVar44) {
    plVar46 = plVar49;
  }
  if (pcVar40 == pcVar1) {
    plVar46 = plVar49;
  }
  if ((long *)0xfffffffffffffff7 < plVar46) {
LAB_0cbd9992:
    uVar43 = FUN_04882e30();
    if (((ulong)auStack_e0 & 1) != 0) {
      func_0x0412a280(plStack_d0,(ulong)auStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar36 != (long *)0x0) {
      (**(code **)(*plVar36 + 8))(plVar36);
    }
    FUN_0cc46730(auStack_40);
    if (((ulong)plStack_98 & 1) != 0) goto LAB_0cbd9a67;
    do {
      while (((ulong)uStack_68 & 1) != 0) {
        func_0x0412a280(pbStack_58,(ulong)uStack_68 & 0xfffffffffffffffe);
        uVar43 = func_0x0eee2d70(uVar43);
        uStack_c8 = plVar44;
        plStack_98 = plVar46;
        func_0x054761f0(&plStack_98);
      }
      func_0x0eee2d70(uVar43);
LAB_0cbd9a67:
      func_0x0412a280(pbStack_88,(ulong)plStack_98 & 0xfffffffffffffffe);
    } while( true );
  }
  if (plVar46 < (long *)0x17) {
    uStack_c8 = (long *)CONCAT71(uStack_c8._1_7_,(char)plVar46 * '\x02');
    lVar42 = (long)&uStack_c8 + 1;
    if (plVar46 != (long *)0x0) goto LAB_0cbd9600;
  }
  else {
    uVar41 = 0x1a;
    if (((ulong)plVar46 | 7) != 0x17) {
      uVar41 = ((ulong)plVar46 | 7) + 1;
    }
    lVar42 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar41);
    if (lVar42 == 0) {
      func_0x0eec74c0(uVar41,0);
    }
    auStack_b8._0_8_ = lVar42;
    uStack_c8 = (long *)(uVar41 | 1);
    uStack_c0 = plVar46;
LAB_0cbd9600:
    func_0x0eee2ee0(lVar42,plVar44,plVar46);
  }
  *(char *)(lVar42 + (long)plVar46) = '\0';
  func_0x05cf8990(param_1 + 0xe0,&uStack_c8,&uStack_c8);
  if (((ulong)uStack_c8 & 1) != 0) {
    func_0x0412a280(auStack_b8._0_8_,(ulong)uStack_c8 & 0xfffffffffffffffe);
  }
  uStack_c8 = (long *)0x0;
  if (((ulong)auStack_e0 & 1) == 0) {
    uStack_c0 = (long *)auStack_e0;
    auStack_b8._8_8_ = plStack_d0;
    auStack_b8._0_8_ = plStack_d8;
  }
  else {
    func_0x0412e5e0(&uStack_c0,plStack_d0,plStack_d8);
  }
  uStack_a8 = 0;
  if (((ulong)uStack_c0 & 1) == 0) {
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_0cbd96b0;
  }
  else if (auStack_b8._0_8_ != 0) {
LAB_0cbd96b0:
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar51 = (byte *)((long)&uStack_c0 + 1);
    }
    else {
      pbVar51 = (byte *)auStack_b8._8_8_;
    }
    if ((pbVar51 != (byte *)0x0) && (*pbVar51 != 0)) {
      puVar48 = (undefined8 *)0xcbf29ce484222325;
      uVar41 = func_0x0eee2e90(pbVar51);
      if (uVar41 != 0) {
        uVar35 = (ulong)((uint)uVar41 & 7);
        if (7 < uVar41) {
          uVar41 = uVar41 & 0xfffffffffffffff8;
          do {
            puVar48 = (undefined8 *)
                      (((((((((long)puVar48 * 0x100000001b3 ^ (ulong)*pbVar51) * 0x100000001b3 ^
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
            puVar48 = (undefined8 *)((long)puVar48 * 0x100000001b3 ^ (ulong)pbVar51[uVar41]);
            uVar41 = uVar41 + 1;
          } while (uVar35 != uVar41);
        }
      }
      goto LAB_0cbd97a9;
    }
  }
  puVar48 = (undefined8 *)0x0;
LAB_0cbd97a9:
  uStack_c8 = puVar48;
  puStack_80 = &uStack_c8;
  lVar42 = func_0x05cf8b10(param_1,&uStack_c8,&UNK_01563a4f,&puStack_80,&uStack_e1);
  plVar46 = *(long **)(lVar42 + 0x48);
  *(long **)(lVar42 + 0x48) = plVar36;
  if (plVar46 != (long *)0x0) {
    (**(code **)(*plVar46 + 8))();
  }
  puStack_80 = uStack_c8;
  lVar42 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_80);
  if ((*(byte *)(lVar42 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar42 + 0x28),*(ulong *)(lVar42 + 0x18) & 0xfffffffffffffffe);
  }
  *(undefined8 *)(lVar42 + 0x28) = auStack_b8._8_8_;
  *(long **)(lVar42 + 0x18) = uStack_c0;
  *(undefined8 *)(lVar42 + 0x20) = auStack_b8._0_8_;
  uStack_c0 = (long *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(long **)(lVar42 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar42 + 0x30) = 0;
  if (((ulong)auStack_e0 & 1) != 0) {
    func_0x0412a280(plStack_d0,(ulong)auStack_e0 & 0xfffffffffffffffe);
  }
  FUN_0cc46730(auStack_40);
  if (((ulong)plStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,(ulong)plStack_98 & 0xfffffffffffffffe);
  }
  uStack_c8 = (long *)&UNK_0f3f51d8;
  uStack_c0 = (long *)0x4387000000000001;
  auStack_b8 = (undefined1  [16])0x0;
  uStack_a8 = 0;
  func_0x0cb9df80(&uStack_c8,plVar36);
  func_0x0c6cd240(plVar36,0xf6fe708,_DAT_0f6fe718);
  func_0x0c6cd240(plVar36,0xf6fe398,_DAT_0f6fe3a8);
  func_0x0c6cd240(plVar36,0xf6fcf60,_DAT_0f6fcf70);
  uStack_c8 = (long *)&UNK_0f3f51d8;
  plStack_98 = (long *)auStack_b8;
  func_0x054761f0(&plStack_98);
  if (((ulong)uStack_68 & 1) != 0) {
    func_0x0412a280(pbStack_58,(ulong)uStack_68 & 0xfffffffffffffffe);
  }
  return plVar36;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
