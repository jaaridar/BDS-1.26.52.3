/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1de830 (ELF vaddr 0xd0de830)
 * Label: caller-of-callee
 * Body:  [[0d1de830, 0d1deba3] [0d1debb0, 0d1debe5] [0d1debf0, 0d1dec4c] [0d1dec50, 0d1dec69] [0d1dec70, 0d1df81a] [0d1df820, 0d1df9cf] [0d1df9f3, 0d1dfa01] [0d1dfa29, 0d1dfa40] [0d1dfa75, 0d1dfaca] [0d1dfb5a, 0d1dfb89]]
 * Ghidra: FUN_0d1de830
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d1de830(long *param_1,byte *param_2,long *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
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
  ulong uVar29;
  ulong *puVar30;
  char cVar31;
  int iVar32;
  char *pcVar33;
  byte *pbVar34;
  ulong uVar35;
  byte *pbVar36;
  long lVar37;
  ulong uVar38;
  undefined8 uVar39;
  long lVar40;
  long *plVar41;
  ulong uVar42;
  long *plVar43;
  byte *pbVar44;
  char *pcVar45;
  char *pcVar46;
  undefined1 *puVar47;
  ulong uVar48;
  long *plVar49;
  byte *pbVar50;
  bool bVar51;
  float fVar52;
  float fVar53;
  byte bVar54;
  byte bVar55;
  byte bVar57;
  byte bVar59;
  byte bVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  byte bVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
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
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_198;
  char *pcStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  byte *pbStack_168;
  long *plStack_160;
  char *pcStack_158;
  undefined8 uStack_150;
  undefined1 auStack_138 [16];
  undefined1 *puStack_128;
  long *plStack_120;
  undefined1 auStack_118 [16];
  long *plStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [192];
  char cVar56;
  char cVar58;
  char cVar60;
  char cVar62;
  char cVar64;
  char cVar66;
  
  pbStack_1c8 = param_2 + 1;
  bVar51 = (*param_2 & 1) == 0;
  pbVar50 = *(byte **)(param_2 + 0x10);
  if (bVar51) {
    pbVar50 = pbStack_1c8;
  }
  uVar35 = (ulong)(*param_2 >> 1);
  if (!bVar51) {
    uVar35 = *(ulong *)(param_2 + 8);
  }
  if (uVar35 < 0xfffffffffffffff8) {
    plStack_108 = param_3;
    pcStack_1a8 = (char *)((long)&uStack_1a0 + 1);
    if (uVar35 < 0x17) {
      uStack_1a0 = CONCAT71(uStack_1a0._1_7_,(char)uVar35 * '\x02');
      pcVar33 = (char *)((long)&uStack_1a0 + 1);
      if (uVar35 != 0) goto LAB_0d1de8ed;
    }
    else {
      uVar42 = 0x1a;
      if ((uVar35 | 7) != 0x17) {
        uVar42 = (uVar35 | 7) + 1;
      }
      pcVar33 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar42);
      if (pcVar33 == (char *)0x0) {
        FUN_0eec74c0(uVar42,0);
      }
      uStack_1a0 = uVar42 | 1;
      uStack_198 = uVar35;
      pcStack_190 = pcVar33;
LAB_0d1de8ed:
      func_0x0eee2f00(pcVar33,pbVar50,uVar35);
    }
    pcVar33[uVar35] = '\0';
    uVar35 = uStack_1a0 >> 1 & 0x7f;
    pcVar33 = (char *)((long)&uStack_1a0 + 1);
    if ((uStack_1a0 & 1) != 0) {
      uVar35 = uStack_198;
      pcVar33 = pcStack_190;
    }
    if (uVar35 != 0) {
      pcVar45 = pcVar33;
      if (7 < uVar35) {
        if (uVar35 < 0x20) {
          uVar42 = 0;
        }
        else {
          uVar42 = uVar35 & 0xffffffffffffffe0;
          uVar48 = 0;
          do {
            pcVar45 = pcVar33 + uVar48;
            cVar31 = pcVar45[1];
            cVar56 = pcVar45[2];
            cVar58 = pcVar45[3];
            cVar60 = pcVar45[4];
            cVar62 = pcVar45[5];
            cVar64 = pcVar45[6];
            cVar66 = pcVar45[7];
            cVar5 = pcVar45[8];
            cVar6 = pcVar45[9];
            cVar7 = pcVar45[10];
            cVar8 = pcVar45[0xb];
            cVar9 = pcVar45[0xc];
            cVar10 = pcVar45[0xd];
            cVar11 = pcVar45[0xe];
            cVar12 = pcVar45[0xf];
            pcVar46 = pcVar33 + uVar48 + 0x10;
            cVar13 = *pcVar46;
            cVar14 = pcVar46[1];
            cVar15 = pcVar46[2];
            cVar16 = pcVar46[3];
            cVar17 = pcVar46[4];
            cVar18 = pcVar46[5];
            cVar19 = pcVar46[6];
            cVar20 = pcVar46[7];
            cVar21 = pcVar46[8];
            cVar22 = pcVar46[9];
            cVar23 = pcVar46[10];
            cVar24 = pcVar46[0xb];
            cVar25 = pcVar46[0xc];
            cVar26 = pcVar46[0xd];
            cVar27 = pcVar46[0xe];
            cVar28 = pcVar46[0xf];
            bVar54 = *pcVar45 + DAT_014e86b0;
            bVar55 = cVar31 + UNK_014e86b1;
            bVar57 = cVar56 + UNK_014e86b2;
            bVar59 = cVar58 + UNK_014e86b3;
            bVar61 = cVar60 + UNK_014e86b4;
            bVar63 = cVar62 + UNK_014e86b5;
            bVar65 = cVar64 + UNK_014e86b6;
            bVar67 = cVar66 + UNK_014e86b7;
            bVar72 = cVar5 + UNK_014e86b8;
            bVar73 = cVar6 + UNK_014e86b9;
            bVar74 = cVar7 + UNK_014e86ba;
            bVar75 = cVar8 + UNK_014e86bb;
            bVar76 = cVar9 + UNK_014e86bc;
            bVar77 = cVar10 + UNK_014e86bd;
            bVar78 = cVar11 + UNK_014e86be;
            bVar79 = cVar12 + UNK_014e86bf;
            bVar80 = cVar13 + DAT_014e86b0;
            bVar81 = cVar14 + UNK_014e86b1;
            bVar82 = cVar15 + UNK_014e86b2;
            bVar83 = cVar16 + UNK_014e86b3;
            bVar84 = cVar17 + UNK_014e86b4;
            bVar85 = cVar18 + UNK_014e86b5;
            bVar86 = cVar19 + UNK_014e86b6;
            bVar87 = cVar20 + UNK_014e86b7;
            bVar88 = cVar21 + UNK_014e86b8;
            bVar89 = cVar22 + UNK_014e86b9;
            bVar90 = cVar23 + UNK_014e86ba;
            bVar91 = cVar24 + UNK_014e86bb;
            bVar92 = cVar25 + UNK_014e86bc;
            bVar93 = cVar26 + UNK_014e86bd;
            bVar94 = cVar27 + UNK_014e86be;
            bVar95 = cVar28 + UNK_014e86bf;
            auVar96[0] = -((byte)((DAT_014e4170 < bVar54) * DAT_014e4170 |
                                 (DAT_014e4170 >= bVar54) * bVar54) == bVar54);
            auVar96[1] = -((byte)((UNK_014e4171 < bVar55) * UNK_014e4171 |
                                 (UNK_014e4171 >= bVar55) * bVar55) == bVar55);
            auVar96[2] = -((byte)((UNK_014e4172 < bVar57) * UNK_014e4172 |
                                 (UNK_014e4172 >= bVar57) * bVar57) == bVar57);
            auVar96[3] = -((byte)((UNK_014e4173 < bVar59) * UNK_014e4173 |
                                 (UNK_014e4173 >= bVar59) * bVar59) == bVar59);
            auVar96[4] = -((byte)((UNK_014e4174 < bVar61) * UNK_014e4174 |
                                 (UNK_014e4174 >= bVar61) * bVar61) == bVar61);
            auVar96[5] = -((byte)((UNK_014e4175 < bVar63) * UNK_014e4175 |
                                 (UNK_014e4175 >= bVar63) * bVar63) == bVar63);
            auVar96[6] = -((byte)((UNK_014e4176 < bVar65) * UNK_014e4176 |
                                 (UNK_014e4176 >= bVar65) * bVar65) == bVar65);
            auVar96[7] = -((byte)((UNK_014e4177 < bVar67) * UNK_014e4177 |
                                 (UNK_014e4177 >= bVar67) * bVar67) == bVar67);
            auVar96[8] = -((byte)((UNK_014e4178 < bVar72) * UNK_014e4178 |
                                 (UNK_014e4178 >= bVar72) * bVar72) == bVar72);
            auVar96[9] = -((byte)((UNK_014e4179 < bVar73) * UNK_014e4179 |
                                 (UNK_014e4179 >= bVar73) * bVar73) == bVar73);
            auVar96[10] = -((byte)((UNK_014e417a < bVar74) * UNK_014e417a |
                                  (UNK_014e417a >= bVar74) * bVar74) == bVar74);
            auVar96[0xb] = -((byte)((UNK_014e417b < bVar75) * UNK_014e417b |
                                   (UNK_014e417b >= bVar75) * bVar75) == bVar75);
            auVar96[0xc] = -((byte)((UNK_014e417c < bVar76) * UNK_014e417c |
                                   (UNK_014e417c >= bVar76) * bVar76) == bVar76);
            auVar96[0xd] = -((byte)((UNK_014e417d < bVar77) * UNK_014e417d |
                                   (UNK_014e417d >= bVar77) * bVar77) == bVar77);
            auVar96[0xe] = -((byte)((UNK_014e417e < bVar78) * UNK_014e417e |
                                   (UNK_014e417e >= bVar78) * bVar78) == bVar78);
            auVar96[0xf] = -((byte)((UNK_014e417f < bVar79) * UNK_014e417f |
                                   (UNK_014e417f >= bVar79) * bVar79) == bVar79);
            auVar69[0] = -((byte)((DAT_014e4170 < bVar80) * DAT_014e4170 |
                                 (DAT_014e4170 >= bVar80) * bVar80) == bVar80);
            auVar69[1] = -((byte)((UNK_014e4171 < bVar81) * UNK_014e4171 |
                                 (UNK_014e4171 >= bVar81) * bVar81) == bVar81);
            auVar69[2] = -((byte)((UNK_014e4172 < bVar82) * UNK_014e4172 |
                                 (UNK_014e4172 >= bVar82) * bVar82) == bVar82);
            auVar69[3] = -((byte)((UNK_014e4173 < bVar83) * UNK_014e4173 |
                                 (UNK_014e4173 >= bVar83) * bVar83) == bVar83);
            auVar69[4] = -((byte)((UNK_014e4174 < bVar84) * UNK_014e4174 |
                                 (UNK_014e4174 >= bVar84) * bVar84) == bVar84);
            auVar69[5] = -((byte)((UNK_014e4175 < bVar85) * UNK_014e4175 |
                                 (UNK_014e4175 >= bVar85) * bVar85) == bVar85);
            auVar69[6] = -((byte)((UNK_014e4176 < bVar86) * UNK_014e4176 |
                                 (UNK_014e4176 >= bVar86) * bVar86) == bVar86);
            auVar69[7] = -((byte)((UNK_014e4177 < bVar87) * UNK_014e4177 |
                                 (UNK_014e4177 >= bVar87) * bVar87) == bVar87);
            auVar69[8] = -((byte)((UNK_014e4178 < bVar88) * UNK_014e4178 |
                                 (UNK_014e4178 >= bVar88) * bVar88) == bVar88);
            auVar69[9] = -((byte)((UNK_014e4179 < bVar89) * UNK_014e4179 |
                                 (UNK_014e4179 >= bVar89) * bVar89) == bVar89);
            auVar69[10] = -((byte)((UNK_014e417a < bVar90) * UNK_014e417a |
                                  (UNK_014e417a >= bVar90) * bVar90) == bVar90);
            auVar69[0xb] = -((byte)((UNK_014e417b < bVar91) * UNK_014e417b |
                                   (UNK_014e417b >= bVar91) * bVar91) == bVar91);
            auVar69[0xc] = -((byte)((UNK_014e417c < bVar92) * UNK_014e417c |
                                   (UNK_014e417c >= bVar92) * bVar92) == bVar92);
            auVar69[0xd] = -((byte)((UNK_014e417d < bVar93) * UNK_014e417d |
                                   (UNK_014e417d >= bVar93) * bVar93) == bVar93);
            auVar69[0xe] = -((byte)((UNK_014e417e < bVar94) * UNK_014e417e |
                                   (UNK_014e417e >= bVar94) * bVar94) == bVar94);
            auVar69[0xf] = -((byte)((UNK_014e417f < bVar95) * UNK_014e417f |
                                   (UNK_014e417f >= bVar95) * bVar95) == bVar95);
            auVar96 = auVar96 & _DAT_014ead50;
            auVar69 = auVar69 & _DAT_014ead50;
            pcVar46 = pcVar33 + uVar48;
            *pcVar46 = auVar96[0] + *pcVar45;
            pcVar46[1] = auVar96[1] + cVar31;
            pcVar46[2] = auVar96[2] + cVar56;
            pcVar46[3] = auVar96[3] + cVar58;
            pcVar46[4] = auVar96[4] + cVar60;
            pcVar46[5] = auVar96[5] + cVar62;
            pcVar46[6] = auVar96[6] + cVar64;
            pcVar46[7] = auVar96[7] + cVar66;
            pcVar46[8] = auVar96[8] + cVar5;
            pcVar46[9] = auVar96[9] + cVar6;
            pcVar46[10] = auVar96[10] + cVar7;
            pcVar46[0xb] = auVar96[0xb] + cVar8;
            pcVar46[0xc] = auVar96[0xc] + cVar9;
            pcVar46[0xd] = auVar96[0xd] + cVar10;
            pcVar46[0xe] = auVar96[0xe] + cVar11;
            pcVar46[0xf] = auVar96[0xf] + cVar12;
            pcVar45 = pcVar33 + uVar48 + 0x10;
            *pcVar45 = auVar69[0] + cVar13;
            pcVar45[1] = auVar69[1] + cVar14;
            pcVar45[2] = auVar69[2] + cVar15;
            pcVar45[3] = auVar69[3] + cVar16;
            pcVar45[4] = auVar69[4] + cVar17;
            pcVar45[5] = auVar69[5] + cVar18;
            pcVar45[6] = auVar69[6] + cVar19;
            pcVar45[7] = auVar69[7] + cVar20;
            pcVar45[8] = auVar69[8] + cVar21;
            pcVar45[9] = auVar69[9] + cVar22;
            pcVar45[10] = auVar69[10] + cVar23;
            pcVar45[0xb] = auVar69[0xb] + cVar24;
            pcVar45[0xc] = auVar69[0xc] + cVar25;
            pcVar45[0xd] = auVar69[0xd] + cVar26;
            pcVar45[0xe] = auVar69[0xe] + cVar27;
            pcVar45[0xf] = auVar69[0xf] + cVar28;
            uVar48 = uVar48 + 0x20;
          } while (uVar42 != uVar48);
          if (uVar35 == uVar42) goto LAB_0d1dea5d;
          if ((uVar35 & 0x18) == 0) {
            pcVar45 = pcVar33 + uVar42;
            goto LAB_0d1dea3c;
          }
        }
        uVar48 = uVar35 & 0xfffffffffffffff8;
        pcVar45 = pcVar33 + uVar48;
        do {
          uVar39 = *(undefined8 *)(pcVar33 + uVar42);
          bVar54 = (char)uVar39 + DAT_014e9110;
          cVar56 = (char)((ulong)uVar39 >> 8);
          bVar55 = cVar56 + UNK_014e9111;
          cVar58 = (char)((ulong)uVar39 >> 0x10);
          bVar57 = cVar58 + UNK_014e9112;
          cVar60 = (char)((ulong)uVar39 >> 0x18);
          bVar59 = cVar60 + UNK_014e9113;
          cVar62 = (char)((ulong)uVar39 >> 0x20);
          bVar61 = cVar62 + UNK_014e9114;
          cVar64 = (char)((ulong)uVar39 >> 0x28);
          bVar63 = cVar64 + UNK_014e9115;
          cVar66 = (char)((ulong)uVar39 >> 0x30);
          cVar31 = (char)((ulong)uVar39 >> 0x38);
          bVar65 = cVar66 + UNK_014e9116;
          bVar67 = cVar31 + UNK_014e9117;
          auVar68[0] = -((byte)((bVar54 < DAT_014e8cb0) * DAT_014e8cb0 |
                               (bVar54 >= DAT_014e8cb0) * bVar54) == bVar54);
          auVar68[1] = -((byte)((bVar55 < UNK_014e8cb1) * UNK_014e8cb1 |
                               (bVar55 >= UNK_014e8cb1) * bVar55) == bVar55);
          auVar68[2] = -((byte)((bVar57 < UNK_014e8cb2) * UNK_014e8cb2 |
                               (bVar57 >= UNK_014e8cb2) * bVar57) == bVar57);
          auVar68[3] = -((byte)((bVar59 < UNK_014e8cb3) * UNK_014e8cb3 |
                               (bVar59 >= UNK_014e8cb3) * bVar59) == bVar59);
          auVar68[4] = -((byte)((bVar61 < UNK_014e8cb4) * UNK_014e8cb4 |
                               (bVar61 >= UNK_014e8cb4) * bVar61) == bVar61);
          auVar68[5] = -((byte)((bVar63 < UNK_014e8cb5) * UNK_014e8cb5 |
                               (bVar63 >= UNK_014e8cb5) * bVar63) == bVar63);
          auVar68[6] = -((byte)((bVar65 < UNK_014e8cb6) * UNK_014e8cb6 |
                               (bVar65 >= UNK_014e8cb6) * bVar65) == bVar65);
          auVar68[7] = -((byte)((bVar67 < UNK_014e8cb7) * UNK_014e8cb7 |
                               (bVar67 >= UNK_014e8cb7) * bVar67) == bVar67);
          auVar68[8] = -((byte)((UNK_014e9118 < UNK_014e8cb8) * UNK_014e8cb8 |
                               (UNK_014e9118 >= UNK_014e8cb8) * UNK_014e9118) == UNK_014e9118);
          auVar68[9] = -((byte)((UNK_014e9119 < UNK_014e8cb9) * UNK_014e8cb9 |
                               (UNK_014e9119 >= UNK_014e8cb9) * UNK_014e9119) == UNK_014e9119);
          auVar68[10] = -((byte)((UNK_014e911a < UNK_014e8cba) * UNK_014e8cba |
                                (UNK_014e911a >= UNK_014e8cba) * UNK_014e911a) == UNK_014e911a);
          auVar68[0xb] = -((byte)((UNK_014e911b < UNK_014e8cbb) * UNK_014e8cbb |
                                 (UNK_014e911b >= UNK_014e8cbb) * UNK_014e911b) == UNK_014e911b);
          auVar68[0xc] = -((byte)((UNK_014e911c < UNK_014e8cbc) * UNK_014e8cbc |
                                 (UNK_014e911c >= UNK_014e8cbc) * UNK_014e911c) == UNK_014e911c);
          auVar68[0xd] = -((byte)((UNK_014e911d < UNK_014e8cbd) * UNK_014e8cbd |
                                 (UNK_014e911d >= UNK_014e8cbd) * UNK_014e911d) == UNK_014e911d);
          auVar68[0xe] = -((byte)((UNK_014e911e < UNK_014e8cbe) * UNK_014e8cbe |
                                 (UNK_014e911e >= UNK_014e8cbe) * UNK_014e911e) == UNK_014e911e);
          auVar68[0xf] = -((byte)((UNK_014e911f < UNK_014e8cbf) * UNK_014e8cbf |
                                 (UNK_014e911f >= UNK_014e8cbf) * UNK_014e911f) == UNK_014e911f);
          auVar69 = ~auVar68 & _DAT_014ea360;
          *(ulong *)(pcVar33 + uVar42) =
               CONCAT17(auVar69[7] + cVar31,
                        CONCAT16(auVar69[6] + cVar66,
                                 CONCAT15(auVar69[5] + cVar64,
                                          CONCAT14(auVar69[4] + cVar62,
                                                   CONCAT13(auVar69[3] + cVar60,
                                                            CONCAT12(auVar69[2] + cVar58,
                                                                     CONCAT11(auVar69[1] + cVar56,
                                                                              auVar69[0] +
                                                                              (char)uVar39)))))));
          uVar42 = uVar42 + 8;
        } while (uVar48 != uVar42);
        if (uVar35 == uVar48) goto LAB_0d1dea5d;
      }
LAB_0d1dea3c:
      do {
        cVar31 = *pcVar45;
        cVar56 = cVar31 + ' ';
        if (0x19 < (byte)(cVar31 + 0xbfU)) {
          cVar56 = cVar31;
        }
        *pcVar45 = cVar56;
        pcVar45 = pcVar45 + 1;
      } while (pcVar45 != pcVar33 + uVar35);
    }
LAB_0d1dea5d:
    func_0x0412d680(param_1 + 5);
    uVar35 = uStack_1a0 >> 1 & 0x7f;
    pcVar33 = (char *)((long)&uStack_1a0 + 1);
    if ((uStack_1a0 & 1) != 0) {
      uVar35 = uStack_198;
      pcVar33 = pcStack_190;
    }
    plStack_120 = param_1 + 5;
    uVar42 = FUN_04883620(auStack_f0,pcVar33,uVar35);
    uVar35 = param_1[1];
    if (uVar35 != 0) {
      uVar48 = uVar35 - (uVar35 >> 1 & 0x5555555555555555);
      uVar48 = (uVar48 >> 2 & 0x3333333333333333) + (uVar48 & 0x3333333333333333);
      uVar48 = ((uVar48 >> 4) + uVar48 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar48 >> 0x38 < 2) {
        uVar38 = uVar35 - 1 & uVar42;
      }
      else {
        uVar38 = uVar42;
        if (uVar35 <= uVar42) {
          if ((uVar42 | uVar35) >> 0x20 == 0) {
            uVar38 = (uVar42 & 0xffffffff) % (uVar35 & 0xffffffff);
          }
          else {
            uVar38 = uVar42 % uVar35;
          }
        }
      }
      plVar41 = *(long **)(*param_1 + uVar38 * 8);
      if ((plVar41 != (long *)0x0) && (plVar41 = (long *)*plVar41, plVar41 != (long *)0x0)) {
        if ((uStack_1a0 & 1) == 0) {
          uVar29 = uStack_1a0 >> 1 & 0x7f;
        }
        else {
          pcStack_1a8 = pcStack_190;
          uVar29 = uStack_198;
        }
        if ((byte)(uVar48 >> 0x38) < 2) {
          do {
            if (plVar41[1] == uVar42) {
              bVar54 = *(byte *)(plVar41 + 2);
              if ((bVar54 & 1) == 0) {
                uVar48 = (ulong)(bVar54 >> 1);
              }
              else {
                uVar48 = plVar41[3];
              }
              if (uVar48 == uVar29) {
                if ((bVar54 & 1) == 0) {
                  lVar40 = (long)plVar41 + 0x11;
                }
                else {
                  lVar40 = plVar41[4];
                }
                iVar32 = func_0x0eee3000(lVar40,pcStack_1a8,uVar29);
                if (iVar32 == 0) goto LAB_0d1dec98;
              }
            }
            else if ((plVar41[1] & uVar35 - 1) != uVar38) break;
            plVar41 = (long *)*plVar41;
          } while (plVar41 != (long *)0x0);
        }
        else {
          do {
            uVar48 = plVar41[1];
            if (uVar48 == uVar42) {
              bVar54 = *(byte *)(plVar41 + 2);
              if ((bVar54 & 1) == 0) {
                uVar48 = (ulong)(bVar54 >> 1);
              }
              else {
                uVar48 = plVar41[3];
              }
              if (uVar48 == uVar29) {
                if ((bVar54 & 1) == 0) {
                  lVar40 = (long)plVar41 + 0x11;
                }
                else {
                  lVar40 = plVar41[4];
                }
                iVar32 = func_0x0eee3000(lVar40,pcStack_1a8,uVar29);
                if (iVar32 == 0) goto LAB_0d1dec98;
              }
            }
            else {
              if (uVar35 <= uVar48) {
                if ((uVar48 | uVar35) >> 0x20 == 0) {
                  uVar48 = (uVar48 & 0xffffffff) % (uVar35 & 0xffffffff);
                }
                else {
                  uVar48 = uVar48 % uVar35;
                }
              }
              if (uVar48 != uVar38) break;
            }
            plVar41 = (long *)*plVar41;
          } while (plVar41 != (long *)0x0);
        }
      }
    }
    bVar51 = (*param_2 & 1) == 0;
    pbVar50 = *(byte **)(param_2 + 0x10);
    if (bVar51) {
      pbVar50 = pbStack_1c8;
    }
    plVar41 = (long *)(ulong)(*param_2 >> 1);
    if (!bVar51) {
      plVar41 = *(long **)(param_2 + 8);
    }
    if (plVar41 < (long *)0xfffffffffffffff8) {
      lVar40 = param_1[10];
      if (plVar41 < (long *)0x17) {
        uStack_1c0 = (byte *)CONCAT71(uStack_1c0._1_7_,(char)plVar41 * '\x02');
        pcVar33 = (char *)((long)&uStack_1c0 + 1);
        if (plVar41 != (long *)0x0) goto LAB_0d1ded32;
      }
      else {
        uVar35 = 0x1a;
        if (((ulong)plVar41 | 7) != 0x17) {
          uVar35 = ((ulong)plVar41 | 7) + 1;
        }
        pcVar33 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar35);
        if (pcVar33 == (char *)0x0) {
          FUN_0eec74c0(uVar35,0);
        }
        uStack_1c0 = (byte *)(uVar35 | 1);
        plStack_1b8 = plVar41;
        pcStack_1b0 = pcVar33;
LAB_0d1ded32:
        func_0x0eee2f00(pcVar33,pbVar50,plVar41);
      }
      pcVar45 = (char *)((long)&uStack_1c0 + 1);
      pcVar33[(long)plVar41] = '\0';
      plVar41 = (long *)((ulong)uStack_1c0 >> 1 & 0x7f);
      pcVar33 = pcVar45;
      if (((ulong)uStack_1c0 & 1) != 0) {
        plVar41 = plStack_1b8;
        pcVar33 = pcStack_1b0;
      }
      if (plVar41 != (long *)0x0) {
        pcVar46 = pcVar33;
        if ((long *)0x7 < plVar41) {
          if (plVar41 < (long *)0x20) {
            plVar43 = (long *)0x0;
          }
          else {
            plVar43 = (long *)((ulong)plVar41 & 0xffffffffffffffe0);
            plVar49 = (long *)0x0;
            do {
              pcVar46 = pcVar33 + (long)plVar49;
              cVar31 = pcVar46[1];
              cVar56 = pcVar46[2];
              cVar58 = pcVar46[3];
              cVar60 = pcVar46[4];
              cVar62 = pcVar46[5];
              cVar64 = pcVar46[6];
              cVar66 = pcVar46[7];
              cVar5 = pcVar46[8];
              cVar6 = pcVar46[9];
              cVar7 = pcVar46[10];
              cVar8 = pcVar46[0xb];
              cVar9 = pcVar46[0xc];
              cVar10 = pcVar46[0xd];
              cVar11 = pcVar46[0xe];
              cVar12 = pcVar46[0xf];
              pcVar1 = pcVar33 + 0x10 + (long)plVar49;
              cVar13 = *pcVar1;
              cVar14 = pcVar1[1];
              cVar15 = pcVar1[2];
              cVar16 = pcVar1[3];
              cVar17 = pcVar1[4];
              cVar18 = pcVar1[5];
              cVar19 = pcVar1[6];
              cVar20 = pcVar1[7];
              cVar21 = pcVar1[8];
              cVar22 = pcVar1[9];
              cVar23 = pcVar1[10];
              cVar24 = pcVar1[0xb];
              cVar25 = pcVar1[0xc];
              cVar26 = pcVar1[0xd];
              cVar27 = pcVar1[0xe];
              cVar28 = pcVar1[0xf];
              bVar54 = *pcVar46 + DAT_014e86b0;
              bVar55 = cVar31 + UNK_014e86b1;
              bVar57 = cVar56 + UNK_014e86b2;
              bVar59 = cVar58 + UNK_014e86b3;
              bVar61 = cVar60 + UNK_014e86b4;
              bVar63 = cVar62 + UNK_014e86b5;
              bVar65 = cVar64 + UNK_014e86b6;
              bVar67 = cVar66 + UNK_014e86b7;
              bVar72 = cVar5 + UNK_014e86b8;
              bVar73 = cVar6 + UNK_014e86b9;
              bVar74 = cVar7 + UNK_014e86ba;
              bVar75 = cVar8 + UNK_014e86bb;
              bVar76 = cVar9 + UNK_014e86bc;
              bVar77 = cVar10 + UNK_014e86bd;
              bVar78 = cVar11 + UNK_014e86be;
              bVar79 = cVar12 + UNK_014e86bf;
              bVar80 = cVar13 + DAT_014e86b0;
              bVar81 = cVar14 + UNK_014e86b1;
              bVar82 = cVar15 + UNK_014e86b2;
              bVar83 = cVar16 + UNK_014e86b3;
              bVar84 = cVar17 + UNK_014e86b4;
              bVar85 = cVar18 + UNK_014e86b5;
              bVar86 = cVar19 + UNK_014e86b6;
              bVar87 = cVar20 + UNK_014e86b7;
              bVar88 = cVar21 + UNK_014e86b8;
              bVar89 = cVar22 + UNK_014e86b9;
              bVar90 = cVar23 + UNK_014e86ba;
              bVar91 = cVar24 + UNK_014e86bb;
              bVar92 = cVar25 + UNK_014e86bc;
              bVar93 = cVar26 + UNK_014e86bd;
              bVar94 = cVar27 + UNK_014e86be;
              bVar95 = cVar28 + UNK_014e86bf;
              auVar97[0] = -((byte)((DAT_014e4170 < bVar54) * DAT_014e4170 |
                                   (DAT_014e4170 >= bVar54) * bVar54) == bVar54);
              auVar97[1] = -((byte)((UNK_014e4171 < bVar55) * UNK_014e4171 |
                                   (UNK_014e4171 >= bVar55) * bVar55) == bVar55);
              auVar97[2] = -((byte)((UNK_014e4172 < bVar57) * UNK_014e4172 |
                                   (UNK_014e4172 >= bVar57) * bVar57) == bVar57);
              auVar97[3] = -((byte)((UNK_014e4173 < bVar59) * UNK_014e4173 |
                                   (UNK_014e4173 >= bVar59) * bVar59) == bVar59);
              auVar97[4] = -((byte)((UNK_014e4174 < bVar61) * UNK_014e4174 |
                                   (UNK_014e4174 >= bVar61) * bVar61) == bVar61);
              auVar97[5] = -((byte)((UNK_014e4175 < bVar63) * UNK_014e4175 |
                                   (UNK_014e4175 >= bVar63) * bVar63) == bVar63);
              auVar97[6] = -((byte)((UNK_014e4176 < bVar65) * UNK_014e4176 |
                                   (UNK_014e4176 >= bVar65) * bVar65) == bVar65);
              auVar97[7] = -((byte)((UNK_014e4177 < bVar67) * UNK_014e4177 |
                                   (UNK_014e4177 >= bVar67) * bVar67) == bVar67);
              auVar97[8] = -((byte)((UNK_014e4178 < bVar72) * UNK_014e4178 |
                                   (UNK_014e4178 >= bVar72) * bVar72) == bVar72);
              auVar97[9] = -((byte)((UNK_014e4179 < bVar73) * UNK_014e4179 |
                                   (UNK_014e4179 >= bVar73) * bVar73) == bVar73);
              auVar97[10] = -((byte)((UNK_014e417a < bVar74) * UNK_014e417a |
                                    (UNK_014e417a >= bVar74) * bVar74) == bVar74);
              auVar97[0xb] = -((byte)((UNK_014e417b < bVar75) * UNK_014e417b |
                                     (UNK_014e417b >= bVar75) * bVar75) == bVar75);
              auVar97[0xc] = -((byte)((UNK_014e417c < bVar76) * UNK_014e417c |
                                     (UNK_014e417c >= bVar76) * bVar76) == bVar76);
              auVar97[0xd] = -((byte)((UNK_014e417d < bVar77) * UNK_014e417d |
                                     (UNK_014e417d >= bVar77) * bVar77) == bVar77);
              auVar97[0xe] = -((byte)((UNK_014e417e < bVar78) * UNK_014e417e |
                                     (UNK_014e417e >= bVar78) * bVar78) == bVar78);
              auVar97[0xf] = -((byte)((UNK_014e417f < bVar79) * UNK_014e417f |
                                     (UNK_014e417f >= bVar79) * bVar79) == bVar79);
              auVar70[0] = -((byte)((DAT_014e4170 < bVar80) * DAT_014e4170 |
                                   (DAT_014e4170 >= bVar80) * bVar80) == bVar80);
              auVar70[1] = -((byte)((UNK_014e4171 < bVar81) * UNK_014e4171 |
                                   (UNK_014e4171 >= bVar81) * bVar81) == bVar81);
              auVar70[2] = -((byte)((UNK_014e4172 < bVar82) * UNK_014e4172 |
                                   (UNK_014e4172 >= bVar82) * bVar82) == bVar82);
              auVar70[3] = -((byte)((UNK_014e4173 < bVar83) * UNK_014e4173 |
                                   (UNK_014e4173 >= bVar83) * bVar83) == bVar83);
              auVar70[4] = -((byte)((UNK_014e4174 < bVar84) * UNK_014e4174 |
                                   (UNK_014e4174 >= bVar84) * bVar84) == bVar84);
              auVar70[5] = -((byte)((UNK_014e4175 < bVar85) * UNK_014e4175 |
                                   (UNK_014e4175 >= bVar85) * bVar85) == bVar85);
              auVar70[6] = -((byte)((UNK_014e4176 < bVar86) * UNK_014e4176 |
                                   (UNK_014e4176 >= bVar86) * bVar86) == bVar86);
              auVar70[7] = -((byte)((UNK_014e4177 < bVar87) * UNK_014e4177 |
                                   (UNK_014e4177 >= bVar87) * bVar87) == bVar87);
              auVar70[8] = -((byte)((UNK_014e4178 < bVar88) * UNK_014e4178 |
                                   (UNK_014e4178 >= bVar88) * bVar88) == bVar88);
              auVar70[9] = -((byte)((UNK_014e4179 < bVar89) * UNK_014e4179 |
                                   (UNK_014e4179 >= bVar89) * bVar89) == bVar89);
              auVar70[10] = -((byte)((UNK_014e417a < bVar90) * UNK_014e417a |
                                    (UNK_014e417a >= bVar90) * bVar90) == bVar90);
              auVar70[0xb] = -((byte)((UNK_014e417b < bVar91) * UNK_014e417b |
                                     (UNK_014e417b >= bVar91) * bVar91) == bVar91);
              auVar70[0xc] = -((byte)((UNK_014e417c < bVar92) * UNK_014e417c |
                                     (UNK_014e417c >= bVar92) * bVar92) == bVar92);
              auVar70[0xd] = -((byte)((UNK_014e417d < bVar93) * UNK_014e417d |
                                     (UNK_014e417d >= bVar93) * bVar93) == bVar93);
              auVar70[0xe] = -((byte)((UNK_014e417e < bVar94) * UNK_014e417e |
                                     (UNK_014e417e >= bVar94) * bVar94) == bVar94);
              auVar70[0xf] = -((byte)((UNK_014e417f < bVar95) * UNK_014e417f |
                                     (UNK_014e417f >= bVar95) * bVar95) == bVar95);
              auVar97 = auVar97 & _DAT_014ead50;
              auVar70 = auVar70 & _DAT_014ead50;
              pcVar1 = pcVar33 + (long)plVar49;
              *pcVar1 = auVar97[0] + *pcVar46;
              pcVar1[1] = auVar97[1] + cVar31;
              pcVar1[2] = auVar97[2] + cVar56;
              pcVar1[3] = auVar97[3] + cVar58;
              pcVar1[4] = auVar97[4] + cVar60;
              pcVar1[5] = auVar97[5] + cVar62;
              pcVar1[6] = auVar97[6] + cVar64;
              pcVar1[7] = auVar97[7] + cVar66;
              pcVar1[8] = auVar97[8] + cVar5;
              pcVar1[9] = auVar97[9] + cVar6;
              pcVar1[10] = auVar97[10] + cVar7;
              pcVar1[0xb] = auVar97[0xb] + cVar8;
              pcVar1[0xc] = auVar97[0xc] + cVar9;
              pcVar1[0xd] = auVar97[0xd] + cVar10;
              pcVar1[0xe] = auVar97[0xe] + cVar11;
              pcVar1[0xf] = auVar97[0xf] + cVar12;
              pcVar46 = pcVar33 + 0x10 + (long)plVar49;
              *pcVar46 = auVar70[0] + cVar13;
              pcVar46[1] = auVar70[1] + cVar14;
              pcVar46[2] = auVar70[2] + cVar15;
              pcVar46[3] = auVar70[3] + cVar16;
              pcVar46[4] = auVar70[4] + cVar17;
              pcVar46[5] = auVar70[5] + cVar18;
              pcVar46[6] = auVar70[6] + cVar19;
              pcVar46[7] = auVar70[7] + cVar20;
              pcVar46[8] = auVar70[8] + cVar21;
              pcVar46[9] = auVar70[9] + cVar22;
              pcVar46[10] = auVar70[10] + cVar23;
              pcVar46[0xb] = auVar70[0xb] + cVar24;
              pcVar46[0xc] = auVar70[0xc] + cVar25;
              pcVar46[0xd] = auVar70[0xd] + cVar26;
              pcVar46[0xe] = auVar70[0xe] + cVar27;
              pcVar46[0xf] = auVar70[0xf] + cVar28;
              plVar49 = plVar49 + 4;
            } while (plVar43 != plVar49);
            if (plVar41 == plVar43) goto LAB_0d1dee9d;
            if (((ulong)plVar41 & 0x18) == 0) {
              pcVar46 = (char *)((long)plVar43 + (long)pcVar33);
              goto LAB_0d1dee7c;
            }
          }
          plVar49 = (long *)((ulong)plVar41 & 0xfffffffffffffff8);
          pcVar46 = pcVar33 + (long)plVar49;
          do {
            uVar39 = *(undefined8 *)(pcVar33 + (long)plVar43);
            bVar54 = (char)uVar39 + DAT_014e9110;
            cVar56 = (char)((ulong)uVar39 >> 8);
            bVar55 = cVar56 + UNK_014e9111;
            cVar58 = (char)((ulong)uVar39 >> 0x10);
            bVar57 = cVar58 + UNK_014e9112;
            cVar60 = (char)((ulong)uVar39 >> 0x18);
            bVar59 = cVar60 + UNK_014e9113;
            cVar62 = (char)((ulong)uVar39 >> 0x20);
            bVar61 = cVar62 + UNK_014e9114;
            cVar64 = (char)((ulong)uVar39 >> 0x28);
            bVar63 = cVar64 + UNK_014e9115;
            cVar66 = (char)((ulong)uVar39 >> 0x30);
            cVar31 = (char)((ulong)uVar39 >> 0x38);
            bVar65 = cVar66 + UNK_014e9116;
            bVar67 = cVar31 + UNK_014e9117;
            auVar71[0] = -((byte)((bVar54 < DAT_014e8cb0) * DAT_014e8cb0 |
                                 (bVar54 >= DAT_014e8cb0) * bVar54) == bVar54);
            auVar71[1] = -((byte)((bVar55 < UNK_014e8cb1) * UNK_014e8cb1 |
                                 (bVar55 >= UNK_014e8cb1) * bVar55) == bVar55);
            auVar71[2] = -((byte)((bVar57 < UNK_014e8cb2) * UNK_014e8cb2 |
                                 (bVar57 >= UNK_014e8cb2) * bVar57) == bVar57);
            auVar71[3] = -((byte)((bVar59 < UNK_014e8cb3) * UNK_014e8cb3 |
                                 (bVar59 >= UNK_014e8cb3) * bVar59) == bVar59);
            auVar71[4] = -((byte)((bVar61 < UNK_014e8cb4) * UNK_014e8cb4 |
                                 (bVar61 >= UNK_014e8cb4) * bVar61) == bVar61);
            auVar71[5] = -((byte)((bVar63 < UNK_014e8cb5) * UNK_014e8cb5 |
                                 (bVar63 >= UNK_014e8cb5) * bVar63) == bVar63);
            auVar71[6] = -((byte)((bVar65 < UNK_014e8cb6) * UNK_014e8cb6 |
                                 (bVar65 >= UNK_014e8cb6) * bVar65) == bVar65);
            auVar71[7] = -((byte)((bVar67 < UNK_014e8cb7) * UNK_014e8cb7 |
                                 (bVar67 >= UNK_014e8cb7) * bVar67) == bVar67);
            auVar71[8] = -((byte)((UNK_014e9118 < UNK_014e8cb8) * UNK_014e8cb8 |
                                 (UNK_014e9118 >= UNK_014e8cb8) * UNK_014e9118) == UNK_014e9118);
            auVar71[9] = -((byte)((UNK_014e9119 < UNK_014e8cb9) * UNK_014e8cb9 |
                                 (UNK_014e9119 >= UNK_014e8cb9) * UNK_014e9119) == UNK_014e9119);
            auVar71[10] = -((byte)((UNK_014e911a < UNK_014e8cba) * UNK_014e8cba |
                                  (UNK_014e911a >= UNK_014e8cba) * UNK_014e911a) == UNK_014e911a);
            auVar71[0xb] = -((byte)((UNK_014e911b < UNK_014e8cbb) * UNK_014e8cbb |
                                   (UNK_014e911b >= UNK_014e8cbb) * UNK_014e911b) == UNK_014e911b);
            auVar71[0xc] = -((byte)((UNK_014e911c < UNK_014e8cbc) * UNK_014e8cbc |
                                   (UNK_014e911c >= UNK_014e8cbc) * UNK_014e911c) == UNK_014e911c);
            auVar71[0xd] = -((byte)((UNK_014e911d < UNK_014e8cbd) * UNK_014e8cbd |
                                   (UNK_014e911d >= UNK_014e8cbd) * UNK_014e911d) == UNK_014e911d);
            auVar71[0xe] = -((byte)((UNK_014e911e < UNK_014e8cbe) * UNK_014e8cbe |
                                   (UNK_014e911e >= UNK_014e8cbe) * UNK_014e911e) == UNK_014e911e);
            auVar71[0xf] = -((byte)((UNK_014e911f < UNK_014e8cbf) * UNK_014e8cbf |
                                   (UNK_014e911f >= UNK_014e8cbf) * UNK_014e911f) == UNK_014e911f);
            auVar69 = ~auVar71 & _DAT_014ea360;
            *(ulong *)(pcVar33 + (long)plVar43) =
                 CONCAT17(auVar69[7] + cVar31,
                          CONCAT16(auVar69[6] + cVar66,
                                   CONCAT15(auVar69[5] + cVar64,
                                            CONCAT14(auVar69[4] + cVar62,
                                                     CONCAT13(auVar69[3] + cVar60,
                                                              CONCAT12(auVar69[2] + cVar58,
                                                                       CONCAT11(auVar69[1] + cVar56,
                                                                                auVar69[0] +
                                                                                (char)uVar39)))))));
            plVar43 = plVar43 + 1;
          } while (plVar49 != plVar43);
          if (plVar41 == plVar49) goto LAB_0d1dee9d;
        }
LAB_0d1dee7c:
        do {
          cVar31 = *pcVar46;
          cVar56 = cVar31 + ' ';
          if (0x19 < (byte)(cVar31 + 0xbfU)) {
            cVar56 = cVar31;
          }
          *pcVar46 = cVar56;
          pcVar46 = pcVar46 + 1;
        } while (pcVar46 != pcVar33 + (long)plVar41);
      }
LAB_0d1dee9d:
      func_0x04863060(auStack_118,0);
      func_0x0485e1c0(auStack_f0);
      auStack_138 = (undefined1  [16])0x0;
      puStack_128 = (undefined1 *)0x0;
      if ((*param_2 & 1) == 0) {
        lStack_178 = *(long *)(param_2 + 0x10);
        uStack_188 = *(ulong **)param_2;
        uStack_180 = *(ulong *)(param_2 + 8);
      }
      else {
        func_0x0412e5e0(&uStack_188,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      }
      lStack_100 = (long)&uStack_188 + 1;
      uStack_f8 = (ulong)uStack_188 >> 1 & 0x7f;
      if (((ulong)uStack_188 & 1) != 0) {
        uStack_f8 = uStack_180;
        lStack_100 = lStack_178;
      }
      func_0x0ee35840(&pbStack_168,&lStack_100,6);
      cVar31 = (**(code **)(*plStack_108 + 0x10))(plStack_108,&pbStack_168,auStack_138);
      if (((ulong)plStack_160 & 1) == 0) {
        if (((ulong)uStack_188 & 1) != 0) goto LAB_0d1def94;
LAB_0d1def6e:
        if (cVar31 != '\0') goto LAB_0d1defaf;
LAB_0d1df088:
        lVar40 = 0;
      }
      else {
        func_0x0412a280(uStack_150,(ulong)plStack_160 & 0xfffffffffffffffe);
        if (((ulong)uStack_188 & 1) == 0) goto LAB_0d1def6e;
LAB_0d1def94:
        func_0x0412a280(lStack_178,(ulong)uStack_188 & 0xfffffffffffffffe);
        if (cVar31 == '\0') goto LAB_0d1df088;
LAB_0d1defaf:
        bVar51 = (auStack_138[0] & 1) != 0;
        puVar47 = auStack_138 + 1;
        if (bVar51) {
          puVar47 = puStack_128;
        }
        uVar35 = (ulong)(auStack_138[0] >> 1);
        if (bVar51) {
          uVar35 = auStack_138._8_8_;
        }
        cVar31 = func_0x0485e650(auStack_f0,puVar47,uVar35,auStack_118,0);
        if ((cVar31 == '\0') || (cVar31 = func_0x04864290(auStack_118), cVar31 == '\0')) {
          if ((*param_2 & 1) != 0) {
            pbStack_1c8 = *(byte **)(param_2 + 0x10);
          }
          pbStack_168 = pbStack_1c8;
          func_0x05350cc0(1,3,0x23,&UNK_012692e6,&pbStack_168);
          goto LAB_0d1df088;
        }
        pcVar33 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (pcVar33 == (char *)0x0) {
          FUN_0eec74c0(0x30,0);
        }
        if (((ulong)uStack_1c0 & 1) == 0) {
          pcStack_158 = pcStack_1b0;
          pbStack_168 = uStack_1c0;
          plStack_160 = plStack_1b8;
        }
        else {
          func_0x0412e5e0(&pbStack_168,pcStack_1b0,plStack_1b8);
        }
        *(char **)(pcVar33 + 0x10) = pcStack_158;
        *(byte **)pcVar33 = pbStack_168;
        *(long **)(pcVar33 + 8) = plStack_160;
        pcVar33[0x18] = '\0';
        pcVar33[0x19] = '\0';
        pcVar33[0x1a] = '\0';
        pcVar33[0x1b] = '\0';
        pcVar33[0x1c] = '\0';
        pcVar33[0x1d] = '\0';
        pcVar33[0x1e] = '\0';
        pcVar33[0x1f] = '\0';
        pcVar33[0x20] = '\0';
        pcVar33[0x21] = '\0';
        pcVar33[0x22] = '\0';
        pcVar33[0x23] = '\0';
        pcVar33[0x24] = '\0';
        pcVar33[0x25] = '\0';
        pcVar33[0x26] = '\0';
        pcVar33[0x27] = '\0';
        pcVar33[0x28] = '\0';
        pcVar33[0x29] = '\0';
        pcVar33[0x2a] = '\0';
        pcVar33[0x2b] = '\0';
        pcVar33[0x2c] = '\0';
        pcVar33[0x2d] = '\0';
        pcVar33[0x2e] = '\0';
        pcVar33[0x2f] = '\0';
        pbStack_168 = (byte *)0x0;
        plStack_160 = (long *)0x0;
        pcStack_158 = (char *)0x0;
        uStack_188 = (ulong *)pcVar33;
        func_0x0d1e35a0(pcVar33,auStack_118,(char)lVar40,&pbStack_168);
        plVar41 = (long *)((ulong)uStack_1c0 >> 1 & 0x7f);
        pcVar46 = pcVar45;
        if (((ulong)uStack_1c0 & 1) != 0) {
          plVar41 = plStack_1b8;
          pcVar46 = pcStack_1b0;
        }
        pbVar34 = (byte *)FUN_04883620(&pbStack_168,pcVar46,plVar41);
        pbVar50 = (byte *)param_1[1];
        if (pbVar50 != (byte *)0x0) {
          uVar35 = (long)pbVar50 - ((ulong)pbVar50 >> 1 & 0x5555555555555555);
          uVar35 = (uVar35 >> 2 & 0x3333333333333333) + (uVar35 & 0x3333333333333333);
          uVar35 = ((uVar35 >> 4) + uVar35 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar35 >> 0x38 < 2) {
            pbStack_1c8 = (byte *)((ulong)(pbVar50 + -1) & (ulong)pbVar34);
          }
          else {
            pbStack_1c8 = pbVar34;
            if (pbVar50 <= pbVar34) {
              if (((ulong)pbVar34 | (ulong)pbVar50) >> 0x20 == 0) {
                pbStack_1c8 = (byte *)(((ulong)pbVar34 & 0xffffffff) % ((ulong)pbVar50 & 0xffffffff)
                                      );
              }
              else {
                pbStack_1c8 = (byte *)((ulong)pbVar34 % (ulong)pbVar50);
              }
            }
          }
          puVar2 = *(undefined8 **)(*param_1 + (long)pbStack_1c8 * 8);
          if ((puVar2 != (undefined8 *)0x0) && (pbVar36 = (byte *)*puVar2, pbVar36 != (byte *)0x0))
          {
            pcVar46 = pcStack_1b0;
            plVar41 = plStack_1b8;
            if (((ulong)uStack_1c0 & 1) == 0) {
              pcVar46 = pcVar45;
              plVar41 = (long *)((ulong)uStack_1c0 >> 1 & 0x7f);
            }
            if ((byte)(uVar35 >> 0x38) < 2) {
              pcStack_1a8 = pcVar33;
              do {
                if (*(byte **)(pbVar36 + 8) == pbVar34) {
                  bVar54 = pbVar36[0x10];
                  if ((bVar54 & 1) == 0) {
                    plVar43 = (long *)(ulong)(bVar54 >> 1);
                  }
                  else {
                    plVar43 = *(long **)(pbVar36 + 0x18);
                  }
                  if (plVar43 == plVar41) {
                    if ((bVar54 & 1) == 0) {
                      pbVar44 = pbVar36 + 0x11;
                    }
                    else {
                      pbVar44 = *(byte **)(pbVar36 + 0x20);
                    }
                    iVar32 = func_0x0eee3000(pbVar44,pcVar46,plVar41);
                    pcVar33 = pcStack_1a8;
                    if (iVar32 == 0) goto LAB_0d1df7cc;
                  }
                }
                else {
                  pcVar33 = pcStack_1a8;
                  if ((byte *)((ulong)*(byte **)(pbVar36 + 8) & (ulong)(pbVar50 + -1)) !=
                      pbStack_1c8) break;
                }
                pbVar36 = *(byte **)pbVar36;
                pcVar33 = pcStack_1a8;
              } while (pbVar36 != (byte *)0x0);
            }
            else {
              do {
                pbVar44 = *(byte **)(pbVar36 + 8);
                if (pbVar44 == pbVar34) {
                  bVar54 = pbVar36[0x10];
                  if ((bVar54 & 1) == 0) {
                    plVar43 = (long *)(ulong)(bVar54 >> 1);
                  }
                  else {
                    plVar43 = *(long **)(pbVar36 + 0x18);
                  }
                  if (plVar43 == plVar41) {
                    if ((bVar54 & 1) == 0) {
                      pbVar44 = pbVar36 + 0x11;
                    }
                    else {
                      pbVar44 = *(byte **)(pbVar36 + 0x20);
                    }
                    iVar32 = func_0x0eee3000(pbVar44,pcVar46,plVar41);
                    if (iVar32 == 0) goto LAB_0d1df7cc;
                  }
                }
                else {
                  if (pbVar50 <= pbVar44) {
                    if (((ulong)pbVar44 | (ulong)pbVar50) >> 0x20 == 0) {
                      pbVar44 = (byte *)(((ulong)pbVar44 & 0xffffffff) %
                                        ((ulong)pbVar50 & 0xffffffff));
                    }
                    else {
                      pbVar44 = (byte *)((ulong)pbVar44 % (ulong)pbVar50);
                    }
                  }
                  if (pbVar44 != pbStack_1c8) break;
                }
                pbVar36 = *(byte **)pbVar36;
              } while (pbVar36 != (byte *)0x0);
            }
          }
        }
        pbVar36 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
        if (pbVar36 == (byte *)0x0) {
          FUN_0eec74c0(0x30,0);
        }
        pcStack_158 = (char *)0x0;
        pbVar36[0] = 0;
        pbVar36[1] = 0;
        pbVar36[2] = 0;
        pbVar36[3] = 0;
        pbVar36[4] = 0;
        pbVar36[5] = 0;
        pbVar36[6] = 0;
        pbVar36[7] = 0;
        *(byte **)(pbVar36 + 8) = pbVar34;
        pbStack_168 = pbVar36;
        plStack_160 = param_1;
        if (((ulong)uStack_1c0 & 1) == 0) {
          *(char **)(pbVar36 + 0x20) = pcStack_1b0;
          *(byte **)(pbVar36 + 0x10) = uStack_1c0;
          *(long **)(pbVar36 + 0x18) = plStack_1b8;
        }
        else {
          func_0x0412e5e0(pbVar36 + 0x10,pcStack_1b0,plStack_1b8);
        }
        pbVar36[0x28] = 0;
        pbVar36[0x29] = 0;
        pbVar36[0x2a] = 0;
        pbVar36[0x2b] = 0;
        pbVar36[0x2c] = 0;
        pbVar36[0x2d] = 0;
        pbVar36[0x2e] = 0;
        pbVar36[0x2f] = 0;
        pcStack_158 = (char *)CONCAT71(pcStack_158._1_7_,1);
        if ((long)pbVar50 < 0) {
          fVar53 = (float)pbVar50;
          fVar52 = *(float *)(param_1 + 4);
          if (pbVar50 != (byte *)0x0) goto LAB_0d1df490;
LAB_0d1df4a3:
          uVar35 = 1;
          if ((byte *)0x2 < pbVar50) {
            uVar35 = (ulong)(((ulong)pbVar50 & (ulong)(pbVar50 + -1)) != 0);
          }
          uVar35 = uVar35 | (long)pbVar50 * 2;
          fVar52 = (float)func_0x0eee3ab0((float)(param_1[3] + 1) / fVar52);
          uVar42 = (long)(fVar52 - _DAT_01198778) & (long)fVar52 >> 0x3f | (long)fVar52;
          if (uVar42 < uVar35) {
            uVar42 = uVar35;
          }
          uVar35 = 2;
          if ((uVar42 != 1) && (uVar35 = uVar42, (uVar42 & uVar42 - 1) != 0)) {
            uVar35 = func_0x0412c3f0();
          }
          uVar42 = param_1[1];
          if (uVar42 < uVar35) {
LAB_0d1df530:
            if (uVar35 >> 0x3d != 0) goto LAB_0d1df9c9;
            lVar40 = uVar35 * 8;
            lVar37 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar40);
            if (lVar37 == 0) {
              FUN_0eec74c0(lVar40,0);
            }
            lVar3 = *param_1;
            *param_1 = lVar37;
            if (lVar3 != 0) {
              func_0x0412a280(lVar3,param_1[1] << 3);
              lVar37 = *param_1;
            }
            param_1[1] = uVar35;
            func_0x0eee2dd0(lVar37,0,lVar40);
            plVar41 = (long *)param_1[2];
            if (plVar41 != (long *)0x0) {
              uVar48 = plVar41[1];
              uVar42 = uVar35 - 1;
              if ((uVar35 & uVar42) == 0) {
                *(long **)(lVar37 + (uVar48 & uVar42) * 8) = param_1 + 2;
                uVar35 = uVar48 & uVar42;
                while (plVar43 = plVar41, plVar41 = (long *)*plVar43, plVar41 != (long *)0x0) {
                  uVar48 = plVar41[1] & uVar42;
                  if (uVar48 != uVar35) {
                    if (*(long *)(lVar37 + uVar48 * 8) == 0) {
                      *(long **)(lVar37 + uVar48 * 8) = plVar43;
                      uVar35 = uVar48;
                    }
                    else {
                      *plVar43 = *plVar41;
                      *plVar41 = **(undefined8 **)(lVar37 + uVar48 * 8);
                      **(long **)(lVar37 + uVar48 * 8) = (long)plVar41;
                      plVar41 = plVar43;
                    }
                  }
                }
              }
              else {
                if (uVar35 <= uVar48) {
                  if ((uVar48 | uVar35) >> 0x20 == 0) {
                    uVar48 = (uVar48 & 0xffffffff) % (uVar35 & 0xffffffff);
                  }
                  else {
                    uVar48 = uVar48 % uVar35;
                  }
                }
                *(long **)(lVar37 + uVar48 * 8) = param_1 + 2;
                plVar43 = (long *)*plVar41;
                while (plVar43 != (long *)0x0) {
                  uVar42 = plVar43[1];
                  if (uVar35 <= uVar42) {
                    if ((uVar42 | uVar35) >> 0x20 == 0) {
                      uVar42 = (uVar42 & 0xffffffff) % (uVar35 & 0xffffffff);
                    }
                    else {
                      uVar42 = uVar42 % uVar35;
                    }
                  }
                  if (uVar42 != uVar48) {
                    if (*(long *)(lVar37 + uVar42 * 8) == 0) {
                      *(long **)(lVar37 + uVar42 * 8) = plVar41;
                      uVar48 = uVar42;
                    }
                    else {
                      *plVar41 = *plVar43;
                      *plVar43 = **(long **)(lVar37 + uVar42 * 8);
                      **(undefined8 **)(lVar37 + uVar42 * 8) = plVar43;
                      plVar43 = plVar41;
                    }
                  }
                  plVar41 = plVar43;
                  plVar43 = (long *)*plVar41;
                }
              }
            }
          }
          else if (uVar35 < uVar42) {
            fVar52 = (float)func_0x0eee3ab0((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
            uVar48 = (long)(fVar52 - _DAT_01198778) & (long)fVar52 >> 0x3f | (long)fVar52;
            if ((uVar42 < 3) ||
               (uVar38 = uVar42 - (uVar42 >> 1 & 0x5555555555555555),
               uVar38 = (uVar38 >> 2 & 0x3333333333333333) + (uVar38 & 0x3333333333333333),
               1 < (byte)(((uVar38 >> 4) + uVar38 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar48 = func_0x0412c3f0(uVar48);
            }
            else if (1 < uVar48) {
              lVar40 = 0x3f;
              if (uVar48 - 1 != 0) {
                for (; uVar48 - 1 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              uVar48 = 1L << (-((byte)lVar40 ^ 0x3f) & 0x3f);
            }
            if (uVar48 < uVar35) {
              uVar48 = uVar35;
            }
            if (uVar48 < uVar42) {
              uVar35 = uVar48;
              if (uVar48 != 0) goto LAB_0d1df530;
              lVar40 = *param_1;
              *param_1 = 0;
              if (lVar40 != 0) {
                func_0x0412a280(lVar40,param_1[1] << 3);
              }
              param_1[1] = 0;
            }
          }
          pbVar50 = (byte *)param_1[1];
          if (((ulong)pbVar50 & (ulong)(pbVar50 + -1)) == 0) {
            pbStack_1c8 = (byte *)((ulong)pbVar34 & (ulong)(pbVar50 + -1));
          }
          else {
            pbStack_1c8 = pbVar34;
            if (pbVar50 <= pbVar34) {
              if (((ulong)pbVar34 | (ulong)pbVar50) >> 0x20 == 0) {
                pbStack_1c8 = (byte *)(((ulong)pbVar34 & 0xffffffff) % ((ulong)pbVar50 & 0xffffffff)
                                      );
              }
              else {
                pbStack_1c8 = (byte *)((ulong)pbVar34 % (ulong)pbVar50);
              }
            }
          }
        }
        else {
          fVar53 = (float)(long)pbVar50;
          fVar52 = *(float *)(param_1 + 4);
          if (pbVar50 == (byte *)0x0) goto LAB_0d1df4a3;
LAB_0d1df490:
          if (fVar53 * fVar52 < (float)(param_1[3] + 1)) goto LAB_0d1df4a3;
        }
        lVar40 = *param_1;
        puVar2 = *(undefined8 **)(lVar40 + (long)pbStack_1c8 * 8);
        if (puVar2 == (undefined8 *)0x0) {
          *(long *)pbVar36 = param_1[2];
          param_1[2] = (long)pbVar36;
          *(long **)(lVar40 + (long)pbStack_1c8 * 8) = param_1 + 2;
          if (*(long *)pbVar36 != 0) {
            pbVar34 = *(byte **)(*(long *)pbVar36 + 8);
            if (((ulong)pbVar50 & (ulong)(pbVar50 + -1)) == 0) {
              *(byte **)(lVar40 + ((ulong)pbVar34 & (ulong)(pbVar50 + -1)) * 8) = pbVar36;
            }
            else {
              if (pbVar50 <= pbVar34) {
                if (((ulong)pbVar34 | (ulong)pbVar50) >> 0x20 == 0) {
                  *(byte **)(lVar40 + (((ulong)pbVar34 & 0xffffffff) % ((ulong)pbVar50 & 0xffffffff)
                                      ) * 8) = pbVar36;
                  goto LAB_0d1df7c8;
                }
                pbVar34 = (byte *)((ulong)pbVar34 % (ulong)pbVar50);
              }
              *(byte **)(lVar40 + (long)pbVar34 * 8) = pbVar36;
            }
          }
        }
        else {
          *(undefined8 *)pbVar36 = *puVar2;
          *puVar2 = pbVar36;
        }
LAB_0d1df7c8:
        param_1[3] = param_1[3] + 1;
LAB_0d1df7cc:
        uStack_188 = (ulong *)0x0;
        func_0x0d1cdab0(pbVar36 + 0x28,pcVar33);
        puVar30 = uStack_188;
        lVar40 = *(long *)(pbVar36 + 0x28);
        uStack_188 = (ulong *)0x0;
        if (puVar30 != (ulong *)0x0) {
          plVar41 = (long *)puVar30[3];
          if (plVar41 != (long *)0x0) {
            plVar43 = (long *)puVar30[4];
            plVar49 = plVar41;
            if (plVar41 != plVar43) {
              do {
                plVar43 = plVar43 + -1;
                lVar37 = *plVar43;
                *plVar43 = 0;
                if (lVar37 != 0) {
                  func_0x0d1cdb50(plVar43);
                }
              } while (plVar43 != plVar41);
              plVar49 = (long *)puVar30[3];
            }
            puVar30[4] = (ulong)plVar41;
            func_0x0412a280(plVar49,puVar30[5] - (long)plVar49);
          }
          if ((*puVar30 & 1) != 0) {
            func_0x0412a280(puVar30[2],*puVar30 & 0xfffffffffffffffe);
          }
          func_0x0412a280(puVar30,0x30);
        }
      }
      if ((auStack_138[0] & 1) != 0) {
        func_0x0412a280(puStack_128,auStack_138._0_8_ & 0xfffffffffffffffe);
      }
      func_0x0485e2d0(auStack_f0);
      func_0x04863610(auStack_118);
      if (((ulong)uStack_1c0 & 1) != 0) {
        func_0x0412a280(pcStack_1b0,(ulong)uStack_1c0 & 0xfffffffffffffffe);
      }
LAB_0d1df0e1:
      func_0x0412d6b0(plStack_120);
      if ((uStack_1a0 & 1) != 0) {
        func_0x0412a280(pcStack_190,uStack_1a0 & 0xfffffffffffffffe);
      }
      return lVar40;
    }
  }
  else {
    func_0x04882e30();
  }
  func_0x04882e30();
LAB_0d1df9c9:
  uVar39 = func_0x04882eb0();
  func_0x0d1e8440(&pbStack_168);
  func_0x0d1cdab0(&uStack_188,0);
  if ((auStack_138[0] & 1) != 0) {
    func_0x0412a280(puStack_128,auStack_138._0_8_ & 0xfffffffffffffffe);
  }
  func_0x0485e2d0(auStack_f0);
  func_0x04863610(auStack_118);
  if (((ulong)uStack_1c0 & 1) != 0) {
    func_0x0412a280(pcStack_1b0,(ulong)uStack_1c0 & 0xfffffffffffffffe);
  }
  func_0x0412d6b0(plStack_120);
  if ((uStack_1a0 & 1) != 0) {
    func_0x0412a280(pcStack_190,uStack_1a0 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar39);
  pcVar4 = (code *)swi(3);
  lVar40 = (*pcVar4)();
  return lVar40;
LAB_0d1dec98:
  lVar40 = plVar41[5];
  goto LAB_0d1df0e1;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
