/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3a0d80 (ELF vaddr 0xd2a0d80)
 * Label: callee-of:0x4e2bb50
 * Body:  [[0d3a0d80, 0d3a1244]]
 * Ghidra: FUN_0d3a0d80
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_0d3a0d80(undefined1 (*param_1) [16],long param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
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
  ulong uVar43;
  long lVar44;
  undefined8 uVar45;
  byte bVar46;
  ulong uVar47;
  byte *pbVar48;
  ulong uVar49;
  byte *pbVar50;
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
  undefined8 uStack_78;
  ulong uStack_70;
  byte *pbStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  undefined1 (*pauStack_38) [16];
  char cVar53;
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  char cVar63;
  
  bVar3 = *param_3;
  if ((bVar3 & 1) == 0) {
    uVar43 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar43 = *(ulong *)(param_3 + 8);
  }
  if (uVar43 == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0xffffffffffffffff;
    return param_1;
  }
  if ((bVar3 & 1) == 0) {
    param_3 = param_3 + 1;
  }
  else {
    param_3 = *(byte **)(param_3 + 0x10);
  }
  if (0xfffffffffffffff7 < uVar43) {
    uVar45 = func_0x04882e30();
joined_r0x0d3a11f6:
    if ((uStack_78 & 1) != 0) goto LAB_0d3a11f8;
    func_0x0eee2d70(uVar45);
    goto LAB_0d3a122a;
  }
  if (uVar43 < 0x17) {
    uStack_78 = CONCAT71(uStack_78._1_7_,(char)uVar43 * '\x02');
    pbVar50 = (byte *)((long)&uStack_78 + 1);
  }
  else {
    uVar47 = 0x1a;
    if ((uVar43 | 7) != 0x17) {
      uVar47 = (uVar43 | 7) + 1;
    }
    pauStack_38 = param_1;
    pbVar50 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar50 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_78 = uVar47 | 1;
    param_1 = pauStack_38;
    uStack_70 = uVar43;
    pbStack_68 = pbVar50;
  }
  func_0x0eee2f00(pbVar50,param_3,uVar43);
  pbVar50[uVar43] = 0;
  uVar43 = uStack_78 >> 1 & 0x7f;
  pbVar50 = (byte *)((long)&uStack_78 + 1);
  if ((uStack_78 & 1) != 0) {
    uVar43 = uStack_70;
    pbVar50 = pbStack_68;
  }
  if (uVar43 != 0) {
    pbVar48 = pbVar50;
    if (7 < uVar43) {
      if (uVar43 < 0x20) {
        uVar47 = 0;
      }
      else {
        uVar47 = uVar43 & 0xffffffffffffffe0;
        uVar49 = 0;
        do {
          pbVar2 = pbVar50 + uVar49;
          bVar12 = pbVar2[1];
          bVar13 = pbVar2[2];
          bVar14 = pbVar2[3];
          bVar15 = pbVar2[4];
          bVar16 = pbVar2[5];
          bVar17 = pbVar2[6];
          bVar18 = pbVar2[7];
          bVar19 = pbVar2[8];
          bVar20 = pbVar2[9];
          bVar21 = pbVar2[10];
          bVar22 = pbVar2[0xb];
          bVar23 = pbVar2[0xc];
          bVar24 = pbVar2[0xd];
          bVar25 = pbVar2[0xe];
          bVar26 = pbVar2[0xf];
          pbVar48 = pbVar50 + uVar49 + 0x10;
          bVar27 = *pbVar48;
          bVar28 = pbVar48[1];
          bVar29 = pbVar48[2];
          bVar30 = pbVar48[3];
          bVar31 = pbVar48[4];
          bVar32 = pbVar48[5];
          bVar33 = pbVar48[6];
          bVar34 = pbVar48[7];
          bVar35 = pbVar48[8];
          bVar36 = pbVar48[9];
          bVar37 = pbVar48[10];
          bVar38 = pbVar48[0xb];
          bVar39 = pbVar48[0xc];
          bVar40 = pbVar48[0xd];
          bVar41 = pbVar48[0xe];
          bVar42 = pbVar48[0xf];
          bVar65 = *pbVar2 + DAT_014e86b0;
          bVar66 = bVar12 + DAT_014e86b0._1_1_;
          bVar67 = bVar13 + DAT_014e86b0._2_1_;
          bVar68 = bVar14 + DAT_014e86b0._3_1_;
          bVar69 = bVar15 + DAT_014e86b0._4_1_;
          bVar70 = bVar16 + DAT_014e86b0._5_1_;
          bVar71 = bVar17 + DAT_014e86b0._6_1_;
          bVar72 = bVar18 + DAT_014e86b0._7_1_;
          bVar73 = bVar19 + DAT_014e86b0._8_1_;
          bVar74 = bVar20 + DAT_014e86b0._9_1_;
          bVar75 = bVar21 + DAT_014e86b0._10_1_;
          bVar76 = bVar22 + DAT_014e86b0._11_1_;
          bVar77 = bVar23 + DAT_014e86b0._12_1_;
          bVar78 = bVar24 + DAT_014e86b0._13_1_;
          bVar79 = bVar25 + DAT_014e86b0._14_1_;
          bVar80 = bVar26 + DAT_014e86b0._15_1_;
          bVar81 = bVar27 + DAT_014e86b0;
          bVar82 = bVar28 + DAT_014e86b0._1_1_;
          bVar83 = bVar29 + DAT_014e86b0._2_1_;
          bVar84 = bVar30 + DAT_014e86b0._3_1_;
          bVar85 = bVar31 + DAT_014e86b0._4_1_;
          bVar86 = bVar32 + DAT_014e86b0._5_1_;
          bVar87 = bVar33 + DAT_014e86b0._6_1_;
          bVar88 = bVar34 + DAT_014e86b0._7_1_;
          bVar89 = bVar35 + DAT_014e86b0._8_1_;
          bVar90 = bVar36 + DAT_014e86b0._9_1_;
          bVar91 = bVar37 + DAT_014e86b0._10_1_;
          bVar92 = bVar38 + DAT_014e86b0._11_1_;
          bVar93 = bVar39 + DAT_014e86b0._12_1_;
          bVar94 = bVar40 + DAT_014e86b0._13_1_;
          bVar95 = bVar41 + DAT_014e86b0._14_1_;
          bVar96 = bVar42 + DAT_014e86b0._15_1_;
          bVar3 = DAT_014e4170;
          bVar46 = DAT_014e4170._1_1_;
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
          pbVar48 = pbVar50 + uVar49;
          *pbVar48 = (-((byte)((bVar3 < bVar65) * bVar3 | (bVar3 >= bVar65) * bVar65) == bVar65) &
                     DAT_014ead50) + *pbVar2;
          pbVar48[1] = (-((byte)((bVar46 < bVar66) * bVar46 | (bVar46 >= bVar66) * bVar66) == bVar66
                         ) & UNK_014ead51) + bVar12;
          pbVar48[2] = (-((byte)((bVar5 < bVar67) * bVar5 | (bVar5 >= bVar67) * bVar67) == bVar67) &
                       UNK_014ead52) + bVar13;
          pbVar48[3] = (-((byte)((bVar6 < bVar68) * bVar6 | (bVar6 >= bVar68) * bVar68) == bVar68) &
                       UNK_014ead53) + bVar14;
          pbVar48[4] = (-((byte)((bVar7 < bVar69) * bVar7 | (bVar7 >= bVar69) * bVar69) == bVar69) &
                       UNK_014ead54) + bVar15;
          pbVar48[5] = (-((byte)((bVar8 < bVar70) * bVar8 | (bVar8 >= bVar70) * bVar70) == bVar70) &
                       UNK_014ead55) + bVar16;
          pbVar48[6] = (-((byte)((bVar9 < bVar71) * bVar9 | (bVar9 >= bVar71) * bVar71) == bVar71) &
                       UNK_014ead56) + bVar17;
          pbVar48[7] = (-((byte)((bVar10 < bVar72) * bVar10 | (bVar10 >= bVar72) * bVar72) == bVar72
                         ) & UNK_014ead57) + bVar18;
          pbVar48[8] = (-((byte)((bVar51 < bVar73) * bVar51 | (bVar51 >= bVar73) * bVar73) == bVar73
                         ) & UNK_014ead58) + bVar19;
          pbVar48[9] = (-((byte)((bVar52 < bVar74) * bVar52 | (bVar52 >= bVar74) * bVar74) == bVar74
                         ) & UNK_014ead59) + bVar20;
          pbVar48[10] = (-((byte)((bVar54 < bVar75) * bVar54 | (bVar54 >= bVar75) * bVar75) ==
                          bVar75) & UNK_014ead5a) + bVar21;
          pbVar48[0xb] = (-((byte)((bVar56 < bVar76) * bVar56 | (bVar56 >= bVar76) * bVar76) ==
                           bVar76) & UNK_014ead5b) + bVar22;
          pbVar48[0xc] = (-((byte)((bVar58 < bVar77) * bVar58 | (bVar58 >= bVar77) * bVar77) ==
                           bVar77) & UNK_014ead5c) + bVar23;
          pbVar48[0xd] = (-((byte)((bVar60 < bVar78) * bVar60 | (bVar60 >= bVar78) * bVar78) ==
                           bVar78) & UNK_014ead5d) + bVar24;
          pbVar48[0xe] = (-((byte)((bVar62 < bVar79) * bVar62 | (bVar62 >= bVar79) * bVar79) ==
                           bVar79) & UNK_014ead5e) + bVar25;
          pbVar48[0xf] = (-((byte)((bVar64 < bVar80) * bVar64 | (bVar64 >= bVar80) * bVar80) ==
                           bVar80) & UNK_014ead5f) + bVar26;
          pbVar48 = pbVar50 + uVar49 + 0x10;
          *pbVar48 = (-((byte)((bVar3 < bVar81) * bVar3 | (bVar3 >= bVar81) * bVar81) == bVar81) &
                     DAT_014ead50) + bVar27;
          pbVar48[1] = (-((byte)((bVar46 < bVar82) * bVar46 | (bVar46 >= bVar82) * bVar82) == bVar82
                         ) & UNK_014ead51) + bVar28;
          pbVar48[2] = (-((byte)((bVar5 < bVar83) * bVar5 | (bVar5 >= bVar83) * bVar83) == bVar83) &
                       UNK_014ead52) + bVar29;
          pbVar48[3] = (-((byte)((bVar6 < bVar84) * bVar6 | (bVar6 >= bVar84) * bVar84) == bVar84) &
                       UNK_014ead53) + bVar30;
          pbVar48[4] = (-((byte)((bVar7 < bVar85) * bVar7 | (bVar7 >= bVar85) * bVar85) == bVar85) &
                       UNK_014ead54) + bVar31;
          pbVar48[5] = (-((byte)((bVar8 < bVar86) * bVar8 | (bVar8 >= bVar86) * bVar86) == bVar86) &
                       UNK_014ead55) + bVar32;
          pbVar48[6] = (-((byte)((bVar9 < bVar87) * bVar9 | (bVar9 >= bVar87) * bVar87) == bVar87) &
                       UNK_014ead56) + bVar33;
          pbVar48[7] = (-((byte)((bVar10 < bVar88) * bVar10 | (bVar10 >= bVar88) * bVar88) == bVar88
                         ) & UNK_014ead57) + bVar34;
          pbVar48[8] = (-((byte)((bVar51 < bVar89) * bVar51 | (bVar51 >= bVar89) * bVar89) == bVar89
                         ) & UNK_014ead58) + bVar35;
          pbVar48[9] = (-((byte)((bVar52 < bVar90) * bVar52 | (bVar52 >= bVar90) * bVar90) == bVar90
                         ) & UNK_014ead59) + bVar36;
          pbVar48[10] = (-((byte)((bVar54 < bVar91) * bVar54 | (bVar54 >= bVar91) * bVar91) ==
                          bVar91) & UNK_014ead5a) + bVar37;
          pbVar48[0xb] = (-((byte)((bVar56 < bVar92) * bVar56 | (bVar56 >= bVar92) * bVar92) ==
                           bVar92) & UNK_014ead5b) + bVar38;
          pbVar48[0xc] = (-((byte)((bVar58 < bVar93) * bVar58 | (bVar58 >= bVar93) * bVar93) ==
                           bVar93) & UNK_014ead5c) + bVar39;
          pbVar48[0xd] = (-((byte)((bVar60 < bVar94) * bVar60 | (bVar60 >= bVar94) * bVar94) ==
                           bVar94) & UNK_014ead5d) + bVar40;
          pbVar48[0xe] = (-((byte)((bVar62 < bVar95) * bVar62 | (bVar62 >= bVar95) * bVar95) ==
                           bVar95) & UNK_014ead5e) + bVar41;
          pbVar48[0xf] = (-((byte)((bVar64 < bVar96) * bVar64 | (bVar64 >= bVar96) * bVar96) ==
                           bVar96) & UNK_014ead5f) + bVar42;
          uVar49 = uVar49 + 0x20;
        } while (uVar47 != uVar49);
        if (uVar43 == uVar47) goto LAB_0d3a0fd1;
        if ((uVar43 & 0x18) == 0) {
          pbVar48 = pbVar50 + uVar47;
          goto LAB_0d3a0f9e;
        }
      }
      uVar49 = uVar43 & 0xfffffffffffffff8;
      pbVar48 = pbVar50 + uVar49;
      do {
        uVar45 = *(undefined8 *)(pbVar50 + uVar47);
        bVar51 = (char)uVar45 + DAT_014e9110;
        cVar53 = (char)((ulong)uVar45 >> 8);
        bVar52 = cVar53 + DAT_014e9110._1_1_;
        cVar55 = (char)((ulong)uVar45 >> 0x10);
        bVar54 = cVar55 + DAT_014e9110._2_1_;
        cVar57 = (char)((ulong)uVar45 >> 0x18);
        bVar56 = cVar57 + DAT_014e9110._3_1_;
        cVar59 = (char)((ulong)uVar45 >> 0x20);
        bVar58 = cVar59 + DAT_014e9110._4_1_;
        cVar61 = (char)((ulong)uVar45 >> 0x28);
        bVar60 = cVar61 + DAT_014e9110._5_1_;
        cVar63 = (char)((ulong)uVar45 >> 0x30);
        cVar11 = (char)((ulong)uVar45 >> 0x38);
        bVar62 = cVar63 + DAT_014e9110._6_1_;
        bVar64 = cVar11 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar46 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar50 + uVar47) =
             CONCAT17((~-((byte)((bVar64 < bVar10) * bVar10 | (bVar64 >= bVar10) * bVar64) == bVar64
                         ) & UNK_014ea367) + cVar11,
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
                                                  CONCAT11((~-((byte)((bVar52 < bVar46) * bVar46 |
                                                                     (bVar52 >= bVar46) * bVar52) ==
                                                              bVar52) & UNK_014ea361) + cVar53,
                                                           (~-((byte)((bVar51 < bVar3) * bVar3 |
                                                                     (bVar51 >= bVar3) * bVar51) ==
                                                              bVar51) & DAT_014ea360) + (char)uVar45
                                                          )))))));
        uVar47 = uVar47 + 8;
      } while (uVar49 != uVar47);
      if (uVar43 == uVar49) goto LAB_0d3a0fd1;
    }
LAB_0d3a0f9e:
    do {
      bVar3 = *pbVar48;
      bVar46 = bVar3 + 0x20;
      if (0x19 < (byte)(bVar3 + 0xbf)) {
        bVar46 = bVar3;
      }
      *pbVar48 = bVar46;
      pbVar48 = pbVar48 + 1;
    } while (pbVar48 != pbVar50 + uVar43);
  }
LAB_0d3a0fd1:
  uStack_60 = 0;
  if ((uStack_78 & 1) == 0) {
    pbStack_48 = pbStack_68;
    uStack_58 = uStack_78;
    uStack_50 = uStack_70;
  }
  else {
    FUN_0412e5e0(&uStack_58,pbStack_68,uStack_70);
  }
  uStack_40 = 0;
  if ((uStack_58 & 1) == 0) {
    if ((byte)uStack_58 >> 1 != 0) goto LAB_0d3a1035;
  }
  else if (uStack_50 != 0) {
LAB_0d3a1035:
    pbVar50 = pbStack_48;
    if ((uStack_58 & 1) == 0) {
      pbVar50 = (byte *)((long)&uStack_58 + 1);
    }
    if ((pbVar50 != (byte *)0x0) && (*pbVar50 != 0)) {
      uVar47 = 0xcbf29ce484222325;
      uVar43 = func_0x0eee2e90(pbVar50);
      if (uVar43 != 0) {
        uVar49 = (ulong)((uint)uVar43 & 7);
        if (7 < uVar43) {
          uVar43 = uVar43 & 0xfffffffffffffff8;
          do {
            uVar47 = (((((((uVar47 * 0x100000001b3 ^ (ulong)*pbVar50) * 0x100000001b3 ^
                          (ulong)pbVar50[1]) * 0x100000001b3 ^ (ulong)pbVar50[2]) * 0x100000001b3 ^
                        (ulong)pbVar50[3]) * 0x100000001b3 ^ (ulong)pbVar50[4]) * 0x100000001b3 ^
                      (ulong)pbVar50[5]) * 0x100000001b3 ^ (ulong)pbVar50[6]) * 0x100000001b3 ^
                     (ulong)pbVar50[7];
            pbVar50 = pbVar50 + 8;
            uVar43 = uVar43 - 8;
          } while (uVar43 != 0);
        }
        if (uVar49 != 0) {
          uVar43 = 0;
          do {
            uVar47 = uVar47 * 0x100000001b3 ^ (ulong)pbVar50[uVar43];
            uVar43 = uVar43 + 1;
          } while (uVar49 != uVar43);
        }
      }
      goto LAB_0d3a1129;
    }
  }
  uVar47 = 0;
LAB_0d3a1129:
  uStack_60 = uVar47;
  lVar44 = func_0x05345c20(param_2 + 0x48,&uStack_60);
  if ((uStack_58 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  if (lVar44 == 0) {
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0xffffffffffffffff;
  }
  else {
    lVar44 = *(long *)(lVar44 + 0x38);
    lVar4 = *(long *)(param_2 + 0x30);
    (*param_1)[0] = 0;
    (*param_1)[8] = 0;
    *(undefined8 *)param_1[1] = 0;
    if (*(char *)(lVar4 + 8 + lVar44 * 0x18) == '\x01') {
      puVar1 = (undefined8 *)(lVar4 + lVar44 * 0x18);
      (*param_1)[8] = *(undefined1 *)(puVar1 + 1);
      *(undefined8 *)*param_1 = *puVar1;
      *(undefined8 *)param_1[1] = puVar1[2];
    }
  }
  if ((uStack_78 & 1) != 0) {
    thunk_FUN_0ee326a0(pbStack_68,uStack_78 & 0xfffffffffffffffe);
  }
  return param_1;
LAB_0d3a11f8:
  thunk_FUN_0ee326a0(pbStack_68,uStack_78 & 0xfffffffffffffffe);
  uVar45 = func_0x0eee2d70(uVar45);
  if ((uStack_58 & 1) != 0) {
LAB_0d3a122a:
    thunk_FUN_0ee326a0(pbStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  goto joined_r0x0d3a11f6;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
