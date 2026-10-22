/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd39feb0 (ELF vaddr 0xd29feb0)
 * Label: callee-of:0x4e2bb50
 * Body:  [[0d39feb0, 0d3a04ab] [0d3a04b0, 0d3a055b] [0d3a0560, 0d3a0a46] [0d3a0a50, 0d3a0a98] [0d3a0aa0, 0d3a0c15] [0d3a0c74, 0d3a0c96]]
 * Ghidra: FUN_0d39feb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0d39feb0(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
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
  int iVar27;
  long *plVar28;
  ulong uVar29;
  byte *pbVar30;
  ulong uVar31;
  long *plVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  long *plVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  byte *pbVar39;
  byte *pbVar40;
  long *plVar41;
  long lVar42;
  ulong uVar43;
  byte *pbVar44;
  long lVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  byte bVar49;
  byte bVar50;
  byte bVar52;
  byte bVar54;
  byte bVar56;
  byte bVar58;
  byte bVar60;
  byte bVar62;
  byte bVar63;
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
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
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
  undefined1 auVar97 [16];
  undefined8 uStack_a8;
  long *plStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  byte *pbStack_68;
  long *plStack_60;
  byte *pbStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  long *plStack_40;
  byte *pbStack_38;
  char cVar51;
  char cVar53;
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  
  puStack_50 = param_1;
  bVar46 = (*param_3 & 1) == 0;
  pbVar40 = *(byte **)(param_3 + 0x10);
  if (bVar46) {
    pbVar40 = param_3 + 1;
  }
  plVar28 = (long *)(ulong)(*param_3 >> 1);
  if (!bVar46) {
    plVar28 = *(long **)(param_3 + 8);
  }
  if (plVar28 < (long *)0xfffffffffffffff8) {
    pbStack_90 = param_3 + 1;
    pbStack_88 = param_3;
    pbVar44 = (byte *)((long)&uStack_a8 + 1);
    if (plVar28 < (long *)0x17) {
      uStack_a8 = (byte *)CONCAT71(uStack_a8._1_7_,(char)plVar28 * '\x02');
      pbVar30 = pbVar44;
      if (plVar28 != (long *)0x0) goto LAB_0d39ff59;
    }
    else {
      uVar29 = 0x1a;
      if (((ulong)plVar28 | 7) != 0x17) {
        uVar29 = ((ulong)plVar28 | 7) + 1;
      }
      pbVar30 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29);
      if (pbVar30 == (byte *)0x0) {
        FUN_0eec74c0(uVar29,0);
      }
      uStack_a8 = (byte *)(uVar29 | 1);
      plStack_a0 = plVar28;
      pbStack_98 = pbVar30;
LAB_0d39ff59:
      func_0x0eee2f00(pbVar30,pbVar40,plVar28);
    }
    pbVar30[(long)plVar28] = 0;
    plVar28 = (long *)((ulong)uStack_a8 >> 1 & 0x7f);
    if (((ulong)uStack_a8 & 1) != 0) {
      plVar28 = plStack_a0;
      pbVar44 = pbStack_98;
    }
    if (plVar28 != (long *)0x0) {
      pbVar40 = pbVar44;
      if ((long *)0x7 < plVar28) {
        if (plVar28 < (long *)0x20) {
          plVar35 = (long *)0x0;
        }
        else {
          plVar35 = (long *)((ulong)plVar28 & 0xffffffffffffffe0);
          plVar41 = (long *)0x0;
          do {
            pbVar30 = pbVar44 + (long)plVar41;
            bVar49 = pbVar30[1];
            bVar50 = pbVar30[2];
            bVar52 = pbVar30[3];
            bVar54 = pbVar30[4];
            bVar56 = pbVar30[5];
            bVar58 = pbVar30[6];
            bVar60 = pbVar30[7];
            bVar62 = pbVar30[8];
            bVar4 = pbVar30[9];
            bVar5 = pbVar30[10];
            bVar6 = pbVar30[0xb];
            bVar7 = pbVar30[0xc];
            bVar8 = pbVar30[0xd];
            bVar9 = pbVar30[0xe];
            bVar10 = pbVar30[0xf];
            pbVar40 = pbVar44 + 0x10 + (long)plVar41;
            bVar11 = *pbVar40;
            bVar12 = pbVar40[1];
            bVar13 = pbVar40[2];
            bVar14 = pbVar40[3];
            bVar15 = pbVar40[4];
            bVar16 = pbVar40[5];
            bVar17 = pbVar40[6];
            bVar18 = pbVar40[7];
            bVar19 = pbVar40[8];
            bVar20 = pbVar40[9];
            bVar21 = pbVar40[10];
            bVar22 = pbVar40[0xb];
            bVar23 = pbVar40[0xc];
            bVar24 = pbVar40[0xd];
            bVar25 = pbVar40[0xe];
            bVar26 = pbVar40[0xf];
            bVar63 = *pbVar30 + DAT_014e86b0;
            bVar66 = bVar49 + UNK_014e86b1;
            bVar67 = bVar50 + UNK_014e86b2;
            bVar68 = bVar52 + UNK_014e86b3;
            bVar69 = bVar54 + UNK_014e86b4;
            bVar70 = bVar56 + UNK_014e86b5;
            bVar71 = bVar58 + UNK_014e86b6;
            bVar72 = bVar60 + UNK_014e86b7;
            bVar73 = bVar62 + UNK_014e86b8;
            bVar74 = bVar4 + UNK_014e86b9;
            bVar75 = bVar5 + UNK_014e86ba;
            bVar76 = bVar6 + UNK_014e86bb;
            bVar77 = bVar7 + UNK_014e86bc;
            bVar78 = bVar8 + UNK_014e86bd;
            bVar79 = bVar9 + UNK_014e86be;
            bVar80 = bVar10 + UNK_014e86bf;
            bVar81 = bVar11 + DAT_014e86b0;
            bVar82 = bVar12 + UNK_014e86b1;
            bVar83 = bVar13 + UNK_014e86b2;
            bVar84 = bVar14 + UNK_014e86b3;
            bVar85 = bVar15 + UNK_014e86b4;
            bVar86 = bVar16 + UNK_014e86b5;
            bVar87 = bVar17 + UNK_014e86b6;
            bVar88 = bVar18 + UNK_014e86b7;
            bVar89 = bVar19 + UNK_014e86b8;
            bVar90 = bVar20 + UNK_014e86b9;
            bVar91 = bVar21 + UNK_014e86ba;
            bVar92 = bVar22 + UNK_014e86bb;
            bVar93 = bVar23 + UNK_014e86bc;
            bVar94 = bVar24 + UNK_014e86bd;
            bVar95 = bVar25 + UNK_014e86be;
            bVar96 = bVar26 + UNK_014e86bf;
            auVar97[0] = -((byte)((DAT_014e4170 < bVar63) * DAT_014e4170 |
                                 (DAT_014e4170 >= bVar63) * bVar63) == bVar63);
            auVar97[1] = -((byte)((UNK_014e4171 < bVar66) * UNK_014e4171 |
                                 (UNK_014e4171 >= bVar66) * bVar66) == bVar66);
            auVar97[2] = -((byte)((UNK_014e4172 < bVar67) * UNK_014e4172 |
                                 (UNK_014e4172 >= bVar67) * bVar67) == bVar67);
            auVar97[3] = -((byte)((UNK_014e4173 < bVar68) * UNK_014e4173 |
                                 (UNK_014e4173 >= bVar68) * bVar68) == bVar68);
            auVar97[4] = -((byte)((UNK_014e4174 < bVar69) * UNK_014e4174 |
                                 (UNK_014e4174 >= bVar69) * bVar69) == bVar69);
            auVar97[5] = -((byte)((UNK_014e4175 < bVar70) * UNK_014e4175 |
                                 (UNK_014e4175 >= bVar70) * bVar70) == bVar70);
            auVar97[6] = -((byte)((UNK_014e4176 < bVar71) * UNK_014e4176 |
                                 (UNK_014e4176 >= bVar71) * bVar71) == bVar71);
            auVar97[7] = -((byte)((UNK_014e4177 < bVar72) * UNK_014e4177 |
                                 (UNK_014e4177 >= bVar72) * bVar72) == bVar72);
            auVar97[8] = -((byte)((UNK_014e4178 < bVar73) * UNK_014e4178 |
                                 (UNK_014e4178 >= bVar73) * bVar73) == bVar73);
            auVar97[9] = -((byte)((UNK_014e4179 < bVar74) * UNK_014e4179 |
                                 (UNK_014e4179 >= bVar74) * bVar74) == bVar74);
            auVar97[10] = -((byte)((UNK_014e417a < bVar75) * UNK_014e417a |
                                  (UNK_014e417a >= bVar75) * bVar75) == bVar75);
            auVar97[0xb] = -((byte)((UNK_014e417b < bVar76) * UNK_014e417b |
                                   (UNK_014e417b >= bVar76) * bVar76) == bVar76);
            auVar97[0xc] = -((byte)((UNK_014e417c < bVar77) * UNK_014e417c |
                                   (UNK_014e417c >= bVar77) * bVar77) == bVar77);
            auVar97[0xd] = -((byte)((UNK_014e417d < bVar78) * UNK_014e417d |
                                   (UNK_014e417d >= bVar78) * bVar78) == bVar78);
            auVar97[0xe] = -((byte)((UNK_014e417e < bVar79) * UNK_014e417e |
                                   (UNK_014e417e >= bVar79) * bVar79) == bVar79);
            auVar97[0xf] = -((byte)((UNK_014e417f < bVar80) * UNK_014e417f |
                                   (UNK_014e417f >= bVar80) * bVar80) == bVar80);
            auVar65[0] = -((byte)((DAT_014e4170 < bVar81) * DAT_014e4170 |
                                 (DAT_014e4170 >= bVar81) * bVar81) == bVar81);
            auVar65[1] = -((byte)((UNK_014e4171 < bVar82) * UNK_014e4171 |
                                 (UNK_014e4171 >= bVar82) * bVar82) == bVar82);
            auVar65[2] = -((byte)((UNK_014e4172 < bVar83) * UNK_014e4172 |
                                 (UNK_014e4172 >= bVar83) * bVar83) == bVar83);
            auVar65[3] = -((byte)((UNK_014e4173 < bVar84) * UNK_014e4173 |
                                 (UNK_014e4173 >= bVar84) * bVar84) == bVar84);
            auVar65[4] = -((byte)((UNK_014e4174 < bVar85) * UNK_014e4174 |
                                 (UNK_014e4174 >= bVar85) * bVar85) == bVar85);
            auVar65[5] = -((byte)((UNK_014e4175 < bVar86) * UNK_014e4175 |
                                 (UNK_014e4175 >= bVar86) * bVar86) == bVar86);
            auVar65[6] = -((byte)((UNK_014e4176 < bVar87) * UNK_014e4176 |
                                 (UNK_014e4176 >= bVar87) * bVar87) == bVar87);
            auVar65[7] = -((byte)((UNK_014e4177 < bVar88) * UNK_014e4177 |
                                 (UNK_014e4177 >= bVar88) * bVar88) == bVar88);
            auVar65[8] = -((byte)((UNK_014e4178 < bVar89) * UNK_014e4178 |
                                 (UNK_014e4178 >= bVar89) * bVar89) == bVar89);
            auVar65[9] = -((byte)((UNK_014e4179 < bVar90) * UNK_014e4179 |
                                 (UNK_014e4179 >= bVar90) * bVar90) == bVar90);
            auVar65[10] = -((byte)((UNK_014e417a < bVar91) * UNK_014e417a |
                                  (UNK_014e417a >= bVar91) * bVar91) == bVar91);
            auVar65[0xb] = -((byte)((UNK_014e417b < bVar92) * UNK_014e417b |
                                   (UNK_014e417b >= bVar92) * bVar92) == bVar92);
            auVar65[0xc] = -((byte)((UNK_014e417c < bVar93) * UNK_014e417c |
                                   (UNK_014e417c >= bVar93) * bVar93) == bVar93);
            auVar65[0xd] = -((byte)((UNK_014e417d < bVar94) * UNK_014e417d |
                                   (UNK_014e417d >= bVar94) * bVar94) == bVar94);
            auVar65[0xe] = -((byte)((UNK_014e417e < bVar95) * UNK_014e417e |
                                   (UNK_014e417e >= bVar95) * bVar95) == bVar95);
            auVar65[0xf] = -((byte)((UNK_014e417f < bVar96) * UNK_014e417f |
                                   (UNK_014e417f >= bVar96) * bVar96) == bVar96);
            auVar97 = auVar97 & _DAT_014ead50;
            auVar65 = auVar65 & _DAT_014ead50;
            pbVar40 = pbVar44 + (long)plVar41;
            *pbVar40 = auVar97[0] + *pbVar30;
            pbVar40[1] = auVar97[1] + bVar49;
            pbVar40[2] = auVar97[2] + bVar50;
            pbVar40[3] = auVar97[3] + bVar52;
            pbVar40[4] = auVar97[4] + bVar54;
            pbVar40[5] = auVar97[5] + bVar56;
            pbVar40[6] = auVar97[6] + bVar58;
            pbVar40[7] = auVar97[7] + bVar60;
            pbVar40[8] = auVar97[8] + bVar62;
            pbVar40[9] = auVar97[9] + bVar4;
            pbVar40[10] = auVar97[10] + bVar5;
            pbVar40[0xb] = auVar97[0xb] + bVar6;
            pbVar40[0xc] = auVar97[0xc] + bVar7;
            pbVar40[0xd] = auVar97[0xd] + bVar8;
            pbVar40[0xe] = auVar97[0xe] + bVar9;
            pbVar40[0xf] = auVar97[0xf] + bVar10;
            pbVar40 = pbVar44 + 0x10 + (long)plVar41;
            *pbVar40 = auVar65[0] + bVar11;
            pbVar40[1] = auVar65[1] + bVar12;
            pbVar40[2] = auVar65[2] + bVar13;
            pbVar40[3] = auVar65[3] + bVar14;
            pbVar40[4] = auVar65[4] + bVar15;
            pbVar40[5] = auVar65[5] + bVar16;
            pbVar40[6] = auVar65[6] + bVar17;
            pbVar40[7] = auVar65[7] + bVar18;
            pbVar40[8] = auVar65[8] + bVar19;
            pbVar40[9] = auVar65[9] + bVar20;
            pbVar40[10] = auVar65[10] + bVar21;
            pbVar40[0xb] = auVar65[0xb] + bVar22;
            pbVar40[0xc] = auVar65[0xc] + bVar23;
            pbVar40[0xd] = auVar65[0xd] + bVar24;
            pbVar40[0xe] = auVar65[0xe] + bVar25;
            pbVar40[0xf] = auVar65[0xf] + bVar26;
            plVar41 = plVar41 + 4;
          } while (plVar35 != plVar41);
          if (plVar28 == plVar35) goto LAB_0d3a00d1;
          if (((ulong)plVar28 & 0x18) == 0) {
            pbVar40 = (byte *)((long)plVar35 + (long)pbVar44);
            goto LAB_0d3a00a0;
          }
        }
        plVar41 = (long *)((ulong)plVar28 & 0xfffffffffffffff8);
        pbVar40 = (byte *)((long)plVar41 + (long)pbVar44);
        do {
          uVar33 = *(undefined8 *)(pbVar44 + (long)plVar35);
          bVar49 = (char)uVar33 + DAT_014e9110;
          cVar51 = (char)((ulong)uVar33 >> 8);
          bVar50 = cVar51 + UNK_014e9111;
          cVar53 = (char)((ulong)uVar33 >> 0x10);
          bVar52 = cVar53 + UNK_014e9112;
          cVar55 = (char)((ulong)uVar33 >> 0x18);
          bVar54 = cVar55 + UNK_014e9113;
          cVar57 = (char)((ulong)uVar33 >> 0x20);
          bVar56 = cVar57 + UNK_014e9114;
          cVar59 = (char)((ulong)uVar33 >> 0x28);
          bVar58 = cVar59 + UNK_014e9115;
          cVar61 = (char)((ulong)uVar33 >> 0x30);
          cVar3 = (char)((ulong)uVar33 >> 0x38);
          bVar60 = cVar61 + UNK_014e9116;
          bVar62 = cVar3 + UNK_014e9117;
          auVar64[0] = -((byte)((bVar49 < DAT_014e8cb0) * DAT_014e8cb0 |
                               (bVar49 >= DAT_014e8cb0) * bVar49) == bVar49);
          auVar64[1] = -((byte)((bVar50 < UNK_014e8cb1) * UNK_014e8cb1 |
                               (bVar50 >= UNK_014e8cb1) * bVar50) == bVar50);
          auVar64[2] = -((byte)((bVar52 < UNK_014e8cb2) * UNK_014e8cb2 |
                               (bVar52 >= UNK_014e8cb2) * bVar52) == bVar52);
          auVar64[3] = -((byte)((bVar54 < UNK_014e8cb3) * UNK_014e8cb3 |
                               (bVar54 >= UNK_014e8cb3) * bVar54) == bVar54);
          auVar64[4] = -((byte)((bVar56 < UNK_014e8cb4) * UNK_014e8cb4 |
                               (bVar56 >= UNK_014e8cb4) * bVar56) == bVar56);
          auVar64[5] = -((byte)((bVar58 < UNK_014e8cb5) * UNK_014e8cb5 |
                               (bVar58 >= UNK_014e8cb5) * bVar58) == bVar58);
          auVar64[6] = -((byte)((bVar60 < UNK_014e8cb6) * UNK_014e8cb6 |
                               (bVar60 >= UNK_014e8cb6) * bVar60) == bVar60);
          auVar64[7] = -((byte)((bVar62 < UNK_014e8cb7) * UNK_014e8cb7 |
                               (bVar62 >= UNK_014e8cb7) * bVar62) == bVar62);
          auVar64[8] = -((byte)((UNK_014e9118 < UNK_014e8cb8) * UNK_014e8cb8 |
                               (UNK_014e9118 >= UNK_014e8cb8) * UNK_014e9118) == UNK_014e9118);
          auVar64[9] = -((byte)((UNK_014e9119 < UNK_014e8cb9) * UNK_014e8cb9 |
                               (UNK_014e9119 >= UNK_014e8cb9) * UNK_014e9119) == UNK_014e9119);
          auVar64[10] = -((byte)((UNK_014e911a < UNK_014e8cba) * UNK_014e8cba |
                                (UNK_014e911a >= UNK_014e8cba) * UNK_014e911a) == UNK_014e911a);
          auVar64[0xb] = -((byte)((UNK_014e911b < UNK_014e8cbb) * UNK_014e8cbb |
                                 (UNK_014e911b >= UNK_014e8cbb) * UNK_014e911b) == UNK_014e911b);
          auVar64[0xc] = -((byte)((UNK_014e911c < UNK_014e8cbc) * UNK_014e8cbc |
                                 (UNK_014e911c >= UNK_014e8cbc) * UNK_014e911c) == UNK_014e911c);
          auVar64[0xd] = -((byte)((UNK_014e911d < UNK_014e8cbd) * UNK_014e8cbd |
                                 (UNK_014e911d >= UNK_014e8cbd) * UNK_014e911d) == UNK_014e911d);
          auVar64[0xe] = -((byte)((UNK_014e911e < UNK_014e8cbe) * UNK_014e8cbe |
                                 (UNK_014e911e >= UNK_014e8cbe) * UNK_014e911e) == UNK_014e911e);
          auVar64[0xf] = -((byte)((UNK_014e911f < UNK_014e8cbf) * UNK_014e8cbf |
                                 (UNK_014e911f >= UNK_014e8cbf) * UNK_014e911f) == UNK_014e911f);
          auVar65 = ~auVar64 & _DAT_014ea360;
          *(ulong *)(pbVar44 + (long)plVar35) =
               CONCAT17(auVar65[7] + cVar3,
                        CONCAT16(auVar65[6] + cVar61,
                                 CONCAT15(auVar65[5] + cVar59,
                                          CONCAT14(auVar65[4] + cVar57,
                                                   CONCAT13(auVar65[3] + cVar55,
                                                            CONCAT12(auVar65[2] + cVar53,
                                                                     CONCAT11(auVar65[1] + cVar51,
                                                                              auVar65[0] +
                                                                              (char)uVar33)))))));
          plVar35 = plVar35 + 1;
        } while (plVar41 != plVar35);
        if (plVar28 == plVar41) goto LAB_0d3a00d1;
      }
LAB_0d3a00a0:
      do {
        bVar49 = *pbVar40;
        bVar50 = bVar49 + 0x20;
        if (0x19 < (byte)(bVar49 + 0xbf)) {
          bVar50 = bVar49;
        }
        *pbVar40 = bVar50;
        pbVar40 = pbVar40 + 1;
      } while (pbVar40 != pbVar44 + (long)plVar28);
    }
LAB_0d3a00d1:
    pbStack_80 = (byte *)0x0;
    if (((ulong)uStack_a8 & 1) == 0) {
      pbStack_68 = pbStack_98;
      uStack_78 = uStack_a8;
      plStack_70 = plStack_a0;
    }
    else {
      func_0x0412e5e0(&uStack_78,pbStack_98,plStack_a0);
    }
    plVar28 = plStack_70;
    plStack_60 = (long *)0x0;
    bVar49 = (byte)uStack_78;
    plVar41 = (long *)(ulong)((byte)uStack_78 >> 1);
    plVar35 = plStack_70;
    if (((ulong)uStack_78 & 1) == 0) {
      plVar35 = plVar41;
    }
    if (plVar35 == (long *)0x0) {
LAB_0d3a0215:
      pbStack_80 = (byte *)0x0;
    }
    else {
      if (((ulong)uStack_78 & 1) == 0) {
        pbVar40 = (byte *)((long)&uStack_78 + 1);
        if (pbVar40 != (byte *)0x0) goto LAB_0d3a014b;
LAB_0d3a0233:
        pbVar44 = (byte *)0x0;
      }
      else {
        pbVar40 = pbStack_68;
        if (pbStack_68 == (byte *)0x0) goto LAB_0d3a0233;
LAB_0d3a014b:
        if (*pbVar40 == 0) goto LAB_0d3a0215;
        pbVar44 = (byte *)0xcbf29ce484222325;
        uVar29 = strlen(pbVar40);
        if (uVar29 != 0) {
          uVar43 = (ulong)((uint)uVar29 & 7);
          if (7 < uVar29) {
            uVar29 = uVar29 & 0xfffffffffffffff8;
            do {
              pbVar44 = (byte *)(((((((((long)pbVar44 * 0x100000001b3 ^ (ulong)*pbVar40) *
                                       0x100000001b3 ^ (ulong)pbVar40[1]) * 0x100000001b3 ^
                                     (ulong)pbVar40[2]) * 0x100000001b3 ^ (ulong)pbVar40[3]) *
                                    0x100000001b3 ^ (ulong)pbVar40[4]) * 0x100000001b3 ^
                                  (ulong)pbVar40[5]) * 0x100000001b3 ^ (ulong)pbVar40[6]) *
                                 0x100000001b3 ^ (ulong)pbVar40[7]);
              pbVar40 = pbVar40 + 8;
              uVar29 = uVar29 - 8;
            } while (uVar29 != 0);
          }
          if (uVar43 != 0) {
            uVar29 = 0;
            do {
              pbVar44 = (byte *)((long)pbVar44 * 0x100000001b3 ^ (ulong)pbVar40[uVar29]);
              uVar29 = uVar29 + 1;
            } while (uVar43 != uVar29);
          }
        }
      }
      pbStack_80 = pbVar44;
    }
    if (((ulong)uStack_a8 & 1) != 0) {
      func_0x0412a280(pbStack_98,(ulong)uStack_a8 & 0xfffffffffffffffe);
      plVar41 = (long *)(ulong)((byte)uStack_78 >> 1);
      plVar28 = plStack_70;
      bVar49 = (byte)uStack_78;
    }
    pbStack_58 = (byte *)((long)&uStack_78 + 1);
    pbVar40 = (byte *)((long)&uStack_78 + 1);
    if ((bVar49 & 1) != 0) {
      pbVar40 = pbStack_68;
      plVar41 = plVar28;
    }
    uVar29 = (long)plVar41 + 1;
    do {
      if (uVar29 == 1) goto LAB_0d3a02ac;
      uVar43 = uVar29 - 1;
      lVar45 = uVar29 - 2;
      uVar29 = uVar43;
    } while (pbVar40[lVar45] != 0x3a);
    if (uVar43 < 2) {
LAB_0d3a02ac:
      uStack_a8 = pbStack_90;
      if ((*pbStack_88 & 1) != 0) {
        uStack_a8 = *(byte **)(pbStack_88 + 0x10);
      }
      func_0x0b6c9050(1,3,0xe,&UNK_013025c4,&uStack_a8);
    }
    if (((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 == '\x01')) {
      func_0x0ee1d2f0(param_2[2],0x18,&uStack_78);
    }
    pbVar44 = pbStack_80;
    pbStack_88 = (byte *)(param_2 + 9);
    lVar45 = param_2[7];
    lVar37 = param_2[6];
    pbVar40 = (byte *)param_2[10];
    if (pbVar40 != (byte *)0x0) {
      uVar29 = (long)pbVar40 - ((ulong)pbVar40 >> 1 & 0x5555555555555555);
      uVar29 = (uVar29 >> 2 & 0x3333333333333333) + (uVar29 & 0x3333333333333333);
      uVar29 = ((uVar29 >> 4) + uVar29 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar29 >> 0x38 < 2) {
        pbVar30 = (byte *)((ulong)(pbVar40 + -1) & (ulong)pbStack_80);
      }
      else {
        pbVar30 = pbStack_80;
        if (pbVar40 <= pbStack_80) {
          if (((ulong)pbStack_80 | (ulong)pbVar40) >> 0x20 == 0) {
            pbVar30 = (byte *)(((ulong)pbStack_80 & 0xffffffff) % ((ulong)pbVar40 & 0xffffffff));
          }
          else {
            pbVar30 = (byte *)((ulong)pbStack_80 % (ulong)pbVar40);
          }
        }
      }
      plVar28 = *(long **)(*(long *)pbStack_88 + (long)pbVar30 * 8);
      pbStack_90 = pbVar30;
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        if (((ulong)uStack_78 & 1) == 0) {
          plVar35 = (long *)((ulong)uStack_78 >> 1 & 0x7f);
        }
        else {
          pbStack_58 = pbStack_68;
          plVar35 = plStack_70;
        }
        plStack_48 = plStack_60;
        plVar41 = plStack_60;
        plStack_40 = plVar35;
        if ((byte)(uVar29 >> 0x38) < 2) {
          pbVar39 = pbVar40 + -1;
          pbStack_38 = pbVar39;
          do {
            if ((byte *)plVar28[1] == pbVar44) {
              if ((byte *)plVar28[2] == pbVar44) {
                if (plVar41 == plVar28 + 2 && (byte **)plVar28[6] == &pbStack_80) goto LAB_0d3a0898;
                bVar49 = *(byte *)(plVar28 + 3);
                if ((bVar49 & 1) == 0) {
                  plVar32 = (long *)(ulong)(bVar49 >> 1);
                }
                else {
                  plVar32 = (long *)plVar28[4];
                }
                if (plVar32 == plVar35) {
                  if ((bVar49 & 1) == 0) {
                    lVar42 = (long)plVar28 + 0x19;
                  }
                  else {
                    lVar42 = plVar28[5];
                  }
                  iVar27 = func_0x0eee3000(lVar42,pbStack_58,plVar35);
                  pbVar30 = pbStack_90;
                  plVar41 = plStack_48;
                  plVar35 = plStack_40;
                  pbVar39 = pbStack_38;
                  if (iVar27 == 0) {
                    plVar28[6] = (long)&pbStack_80;
                    plStack_60 = plVar28 + 2;
                    goto LAB_0d3a0898;
                  }
                }
              }
              plVar28[6] = 0;
            }
            else if ((byte *)((ulong)plVar28[1] & (ulong)pbVar39) != pbVar30) break;
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            pbVar39 = (byte *)plVar28[1];
            if (pbVar39 == pbVar44) {
              if ((byte *)plVar28[2] == pbVar44) {
                if (plVar41 == plVar28 + 2 && (byte **)plVar28[6] == &pbStack_80) goto LAB_0d3a0898;
                bVar49 = *(byte *)(plVar28 + 3);
                if ((bVar49 & 1) == 0) {
                  plVar32 = (long *)(ulong)(bVar49 >> 1);
                }
                else {
                  plVar32 = (long *)plVar28[4];
                }
                if (plVar32 == plVar35) {
                  if ((bVar49 & 1) == 0) {
                    lVar42 = (long)plVar28 + 0x19;
                  }
                  else {
                    lVar42 = plVar28[5];
                  }
                  iVar27 = func_0x0eee3000(lVar42,pbStack_58,plVar35);
                  pbVar30 = pbStack_90;
                  plVar41 = plStack_48;
                  plVar35 = plStack_40;
                  if (iVar27 == 0) {
                    plVar28[6] = (long)&pbStack_80;
                    plStack_60 = plVar28 + 2;
                    goto LAB_0d3a0898;
                  }
                }
              }
              plVar28[6] = 0;
            }
            else {
              if (pbVar40 <= pbVar39) {
                if (((ulong)pbVar39 | (ulong)pbVar40) >> 0x20 == 0) {
                  if ((byte *)(((ulong)pbVar39 & 0xffffffff) % ((ulong)pbVar40 & 0xffffffff)) ==
                      pbVar30) goto LAB_0d3a0513;
                  break;
                }
                pbVar39 = (byte *)((ulong)pbVar39 % (ulong)pbVar40);
              }
              if (pbVar39 != pbVar30) break;
            }
LAB_0d3a0513:
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
    }
    pbVar30 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
    if (pbVar30 == (byte *)0x0) {
      FUN_0eec74c0(0x40,0);
    }
    plStack_a0 = (long *)pbStack_88;
    pbStack_98 = (byte *)0x1;
    pbVar30[0] = 0;
    pbVar30[1] = 0;
    pbVar30[2] = 0;
    pbVar30[3] = 0;
    pbVar30[4] = 0;
    pbVar30[5] = 0;
    pbVar30[6] = 0;
    pbVar30[7] = 0;
    *(byte **)(pbVar30 + 8) = pbVar44;
    *(undefined1 (*) [16])(pbVar30 + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pbVar30 + 0x10) = (undefined1  [16])0x0;
    pbVar30[0x30] = 0;
    pbVar30[0x31] = 0;
    pbVar30[0x32] = 0;
    pbVar30[0x33] = 0;
    pbVar30[0x34] = 0;
    pbVar30[0x35] = 0;
    pbVar30[0x36] = 0;
    pbVar30[0x37] = 0;
    *(byte **)(pbVar30 + 0x28) = pbStack_68;
    *(byte **)(pbVar30 + 0x18) = uStack_78;
    *(long **)(pbVar30 + 0x20) = plStack_70;
    uStack_78 = (byte *)((ulong)uStack_78 & 0xffffffffffff0000);
    *(byte **)(pbVar30 + 0x10) = pbStack_80;
    *(long *)(pbVar30 + 0x38) = (lVar45 - lVar37 >> 3) * -0x5555555555555555;
    uStack_a8 = pbVar30;
    if ((long)pbVar40 < 0) {
      fVar48 = (float)pbVar40;
      fVar47 = *(float *)(param_2 + 0xd);
      if (pbVar40 != (byte *)0x0) goto LAB_0d3a06a3;
LAB_0d3a06b4:
      uVar29 = 1;
      if ((byte *)0x2 < pbVar40) {
        uVar29 = (ulong)(((ulong)pbVar40 & (ulong)(pbVar40 + -1)) != 0);
      }
      uVar29 = uVar29 | (long)pbVar40 * 2;
      fVar47 = (float)func_0x0eee3ab0((float)(param_2[0xc] + 1) / fVar47);
      uVar43 = (long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f | (long)fVar47;
      if (uVar43 < uVar29) {
        uVar43 = uVar29;
      }
      uVar29 = 2;
      if ((uVar43 == 1) || (uVar29 = uVar43, (uVar43 & uVar43 - 1) == 0)) {
        uVar43 = param_2[10];
        bVar46 = uVar29 < uVar43;
        if (uVar29 <= uVar43) goto LAB_0d3a0744;
LAB_0d3a0721:
        func_0x05346620(pbStack_88,uVar29);
      }
      else {
        uVar29 = func_0x0412c3f0();
        uVar43 = param_2[10];
        bVar46 = uVar29 < uVar43;
        if (uVar43 < uVar29) goto LAB_0d3a0721;
LAB_0d3a0744:
        if (bVar46) {
          fVar47 = (float)func_0x0eee3ab0((float)(ulong)param_2[0xc] / *(float *)(param_2 + 0xd));
          uVar31 = (long)(fVar47 - _DAT_01198778) & (long)fVar47 >> 0x3f | (long)fVar47;
          if ((uVar43 < 3) ||
             (uVar36 = uVar43 - (uVar43 >> 1 & 0x5555555555555555),
             uVar36 = (uVar36 >> 2 & 0x3333333333333333) + (uVar36 & 0x3333333333333333),
             1 < (byte)(((uVar36 >> 4) + uVar36 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            uVar31 = func_0x0412c3f0(uVar31);
          }
          else if (1 < uVar31) {
            lVar45 = 0x3f;
            if (uVar31 - 1 != 0) {
              for (; uVar31 - 1 >> lVar45 == 0; lVar45 = lVar45 + -1) {
              }
            }
            uVar31 = 1L << (-((byte)lVar45 ^ 0x3f) & 0x3f);
          }
          if (uVar29 <= uVar31) {
            uVar29 = uVar31;
          }
          if (uVar29 < uVar43) goto LAB_0d3a0721;
        }
      }
      pbVar40 = (byte *)param_2[10];
      if (((ulong)pbVar40 & (ulong)(pbVar40 + -1)) == 0) {
        pbVar39 = (byte *)((ulong)pbVar44 & (ulong)(pbVar40 + -1));
      }
      else {
        pbVar39 = pbVar44;
        if (pbVar40 <= pbVar44) {
          if (((ulong)pbVar44 | (ulong)pbVar40) >> 0x20 == 0) {
            pbVar39 = (byte *)(((ulong)pbVar44 & 0xffffffff) % ((ulong)pbVar40 & 0xffffffff));
          }
          else {
            pbVar39 = (byte *)((ulong)pbVar44 % (ulong)pbVar40);
          }
        }
      }
    }
    else {
      fVar48 = (float)(long)pbVar40;
      fVar47 = *(float *)(param_2 + 0xd);
      if (pbVar40 == (byte *)0x0) goto LAB_0d3a06b4;
LAB_0d3a06a3:
      pbVar39 = pbStack_90;
      if (fVar48 * fVar47 < (float)(param_2[0xc] + 1)) goto LAB_0d3a06b4;
    }
    lVar45 = *(long *)pbStack_88;
    puVar34 = *(undefined8 **)(lVar45 + (long)pbVar39 * 8);
    if (puVar34 == (undefined8 *)0x0) {
      *(undefined8 *)pbVar30 = param_2[0xb];
      param_2[0xb] = pbVar30;
      *(undefined8 **)(lVar45 + (long)pbVar39 * 8) = param_2 + 0xb;
      if (*(long *)pbVar30 != 0) {
        pbVar44 = *(byte **)(*(long *)pbVar30 + 8);
        if (((ulong)pbVar40 & (ulong)(pbVar40 + -1)) == 0) {
          *(byte **)(lVar45 + ((ulong)pbVar44 & (ulong)(pbVar40 + -1)) * 8) = pbVar30;
        }
        else {
          if (pbVar40 <= pbVar44) {
            if (((ulong)pbVar44 | (ulong)pbVar40) >> 0x20 == 0) {
              *(byte **)(lVar45 + (((ulong)pbVar44 & 0xffffffff) % ((ulong)pbVar40 & 0xffffffff)) *
                                  8) = pbVar30;
              goto LAB_0d3a0894;
            }
            pbVar44 = (byte *)((ulong)pbVar44 % (ulong)pbVar40);
          }
          *(byte **)(lVar45 + (long)pbVar44 * 8) = pbVar30;
        }
      }
    }
    else {
      *(undefined8 *)pbVar30 = *puVar34;
      *puVar34 = pbVar30;
    }
LAB_0d3a0894:
    param_2[0xc] = param_2[0xc] + 1;
LAB_0d3a0898:
    func_0x0d3d00a0(&uStack_a8,param_2);
    puVar34 = (undefined8 *)param_2[7];
    if (puVar34 < (undefined8 *)param_2[8]) {
      *(undefined1 *)puVar34 = 0;
      *(undefined1 *)(puVar34 + 1) = 0;
      if ((char)plStack_a0 == '\x01') {
        *(undefined1 *)(puVar34 + 1) = 1;
        *puVar34 = uStack_a8;
        puVar34[2] = pbStack_98;
        plStack_a0 = (long *)((ulong)plStack_a0 & 0xffffffffffffff00);
      }
      pbStack_98 = (byte *)0xffffffffffffffff;
      puVar34 = puVar34 + 3;
      param_2[7] = puVar34;
      puVar1 = puStack_50;
joined_r0x0d3a0b11:
      puStack_50 = puVar1;
      if ((char)plStack_a0 == '\x01') {
        plVar28 = *(long **)(*(long *)(uStack_a8 + 0x18) + (long)pbStack_98 * 8);
        *(undefined8 *)(*(long *)(uStack_a8 + 0x18) + (long)pbStack_98 * 8) = 0;
        if (plVar28 != (long *)0x0) {
          (**(code **)(*plVar28 + 8))();
          puVar34 = (undefined8 *)param_2[7];
        }
      }
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      if (*(char *)(puVar34 + -2) == '\x01') {
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar34 + -2);
        *puVar1 = puVar34[-3];
        puVar1[2] = puVar34[-1];
      }
      if (((ulong)uStack_78 & 1) != 0) {
        func_0x0412a280(pbStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
      }
      return puVar1;
    }
    lVar45 = (long)puVar34 - param_2[6];
    uVar29 = (lVar45 >> 3) * -0x5555555555555555 + 1;
    if (uVar29 < 0xaaaaaaaaaaaaaab) {
      lVar37 = (long)param_2[8] - param_2[6] >> 3;
      uVar43 = lVar37 * 0x5555555555555556;
      if (uVar29 < uVar43) {
        uVar29 = uVar43;
      }
      if (0x555555555555554 < (ulong)(lVar37 * -0x5555555555555555)) {
        uVar29 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar29 == 0) {
        lVar37 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < uVar29) goto LAB_0d3a0c0c;
        lVar37 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar29 * 0x18);
        if (lVar37 == 0) {
          FUN_0eec74c0(uVar29 * 0x18,0);
          lVar37 = 0;
        }
      }
      puVar1 = (undefined8 *)(lVar37 + lVar45);
      *(undefined1 *)(lVar37 + lVar45) = 0;
      *(undefined1 *)(lVar37 + 8 + lVar45) = 0;
      if ((char)plStack_a0 == '\x01') {
        *(undefined1 *)(puVar1 + 1) = 1;
        *puVar1 = uStack_a8;
        puVar1[2] = pbStack_98;
        plStack_a0 = (long *)((ulong)plStack_a0 & 0xffffffffffffff00);
      }
      pbStack_98 = (byte *)0xffffffffffffffff;
      puVar34 = puVar1 + 3;
      plVar35 = (long *)param_2[6];
      plVar41 = (long *)param_2[7];
      plVar28 = (long *)((long)puVar1 + ((long)plVar35 - (long)plVar41));
      plVar32 = plVar35;
      plVar38 = plVar28;
      if ((long)plVar35 - (long)plVar41 != 0) {
        do {
          *(undefined1 *)plVar38 = 0;
          *(undefined1 *)(plVar38 + 1) = 0;
          bVar49 = *(byte *)(plVar32 + 1);
          if (bVar49 == 1) {
            *(char *)(plVar38 + 1) = (char)plVar32[1];
            *plVar38 = *plVar32;
            plVar38[2] = plVar32[2];
            bVar49 = *(byte *)(plVar32 + 1);
          }
          if ((bVar49 & 1) != 0) {
            *(undefined1 *)(plVar32 + 1) = 0;
          }
          plVar32[2] = -1;
          plVar32 = plVar32 + 3;
          plVar38 = plVar38 + 3;
        } while (plVar32 != plVar41);
        do {
          if ((char)plVar35[1] == '\x01') {
            lVar45 = plVar35[2];
            lVar42 = *(long *)(*plVar35 + 0x18);
            *(undefined1 *)(plVar35 + 1) = 0;
            plVar35[2] = -1;
            plVar32 = *(long **)(lVar42 + lVar45 * 8);
            *(undefined8 *)(lVar42 + lVar45 * 8) = 0;
            if (plVar32 != (long *)0x0) {
              (**(code **)(*plVar32 + 8))();
            }
          }
          plVar35 = plVar35 + 3;
        } while (plVar35 != plVar41);
        plVar35 = (long *)param_2[6];
      }
      param_2[6] = plVar28;
      param_2[7] = puVar34;
      lVar45 = param_2[8];
      param_2[8] = lVar37 + uVar29 * 0x18;
      if (plVar35 != (long *)0x0) {
        func_0x0412a280(plVar35,lVar45 - (long)plVar35);
      }
      param_2[7] = puVar34;
      puVar1 = puStack_50;
      goto joined_r0x0d3a0b11;
    }
  }
  else {
    func_0x04882e30();
  }
  func_0x0d3c3e30();
LAB_0d3a0c0c:
  uVar33 = func_0x04882eb0();
  if (((ulong)uStack_78 & 1) != 0) {
    func_0x0412a280(pbStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
  }
  func_0x0eee2d70(uVar33);
  pcVar2 = (code *)swi(3);
  puVar34 = (undefined8 *)(*pcVar2)();
  return puVar34;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
