/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd50e690 (ELF vaddr 0xd40e690)
 * Label: callee2-of:0xd40b910
 * Body:  [[0d50e690, 0d50ebdb] [0d50ebe0, 0d50ec8a] [0d50ec90, 0d50ef50] [0d50ef60, 0d50f261] [0d50f270, 0d50f354] [0d50f36e, 0d50f379] [0d50f37d, 0d50f39f]]
 * Ghidra: FUN_0d50e690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0d50e690(long param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
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
  byte bVar27;
  byte bVar28;
  byte *pbVar29;
  int iVar30;
  ulong uVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  long lVar36;
  byte *pbVar37;
  byte *pbVar38;
  ulong uVar39;
  long *plVar40;
  byte *unaff_RBP;
  byte *pbVar41;
  ulong uVar42;
  ulong uVar43;
  long *plVar44;
  bool bVar45;
  float fVar46;
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
  undefined8 uStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  long *plStack_60;
  ulong uStack_58;
  byte *pbStack_50;
  undefined4 uStack_44;
  long *plStack_40;
  byte *pbStack_38;
  char cVar51;
  char cVar53;
  char cVar55;
  char cVar57;
  char cVar59;
  char cVar61;
  
  bVar45 = (*param_2 & 1) != 0;
  pbVar32 = param_2 + 1;
  if (bVar45) {
    pbVar32 = *(byte **)(param_2 + 0x10);
  }
  pbVar38 = (byte *)(ulong)(*param_2 >> 1);
  if (bVar45) {
    pbVar38 = *(byte **)(param_2 + 8);
  }
  if ((byte *)0xfffffffffffffff7 < pbVar38) {
    func_0x04882e30();
    goto LAB_0d50f334;
  }
  pbVar29 = (byte *)((long)&uStack_98 + 1);
  if (pbVar38 < (byte *)0x17) {
    uStack_98 = (byte *)CONCAT71(uStack_98._1_7_,(char)pbVar38 * '\x02');
    pbVar37 = pbVar29;
    if (pbVar38 != (byte *)0x0) goto LAB_0d50e737;
  }
  else {
    uVar42 = 0x1a;
    if (((ulong)pbVar38 | 7) != 0x17) {
      uVar42 = ((ulong)pbVar38 | 7) + 1;
    }
    pbVar37 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar42);
    if (pbVar37 == (byte *)0x0) {
      func_0x0eec74c0(uVar42,0);
    }
    uStack_98 = (byte *)(uVar42 | 1);
    pbStack_90 = pbVar38;
    pbStack_88 = pbVar37;
LAB_0d50e737:
    memcpy(pbVar37,pbVar32,pbVar38);
  }
  pbVar37[(long)pbVar38] = 0;
  pbVar32 = (byte *)((ulong)uStack_98 >> 1 & 0x7f);
  if (((ulong)uStack_98 & 1) != 0) {
    pbVar32 = pbStack_90;
    pbVar29 = pbStack_88;
  }
  if (pbVar32 != (byte *)0x0) {
    pbVar38 = pbVar29;
    if ((byte *)0x7 < pbVar32) {
      if (pbVar32 < (byte *)0x20) {
        pbVar37 = (byte *)0x0;
      }
      else {
        pbVar37 = (byte *)((ulong)pbVar32 & 0xffffffffffffffe0);
        pbVar38 = (byte *)0x0;
        do {
          pbVar41 = pbVar29 + (long)pbVar38;
          bVar49 = pbVar41[1];
          bVar50 = pbVar41[2];
          bVar52 = pbVar41[3];
          bVar54 = pbVar41[4];
          bVar56 = pbVar41[5];
          bVar58 = pbVar41[6];
          bVar60 = pbVar41[7];
          bVar62 = pbVar41[8];
          bVar6 = pbVar41[9];
          bVar7 = pbVar41[10];
          bVar8 = pbVar41[0xb];
          bVar9 = pbVar41[0xc];
          bVar10 = pbVar41[0xd];
          bVar11 = pbVar41[0xe];
          bVar12 = pbVar41[0xf];
          pbVar1 = pbVar29 + 0x10 + (long)pbVar38;
          bVar13 = *pbVar1;
          bVar14 = pbVar1[1];
          bVar15 = pbVar1[2];
          bVar16 = pbVar1[3];
          bVar17 = pbVar1[4];
          bVar18 = pbVar1[5];
          bVar19 = pbVar1[6];
          bVar20 = pbVar1[7];
          bVar21 = pbVar1[8];
          bVar22 = pbVar1[9];
          bVar23 = pbVar1[10];
          bVar24 = pbVar1[0xb];
          bVar25 = pbVar1[0xc];
          bVar26 = pbVar1[0xd];
          bVar27 = pbVar1[0xe];
          bVar28 = pbVar1[0xf];
          bVar63 = *pbVar41 + DAT_014e86b0;
          bVar66 = bVar49 + UNK_014e86b1;
          bVar67 = bVar50 + UNK_014e86b2;
          bVar68 = bVar52 + UNK_014e86b3;
          bVar69 = bVar54 + UNK_014e86b4;
          bVar70 = bVar56 + UNK_014e86b5;
          bVar71 = bVar58 + UNK_014e86b6;
          bVar72 = bVar60 + UNK_014e86b7;
          bVar73 = bVar62 + UNK_014e86b8;
          bVar74 = bVar6 + UNK_014e86b9;
          bVar75 = bVar7 + UNK_014e86ba;
          bVar76 = bVar8 + UNK_014e86bb;
          bVar77 = bVar9 + UNK_014e86bc;
          bVar78 = bVar10 + UNK_014e86bd;
          bVar79 = bVar11 + UNK_014e86be;
          bVar80 = bVar12 + UNK_014e86bf;
          bVar81 = bVar13 + DAT_014e86b0;
          bVar82 = bVar14 + UNK_014e86b1;
          bVar83 = bVar15 + UNK_014e86b2;
          bVar84 = bVar16 + UNK_014e86b3;
          bVar85 = bVar17 + UNK_014e86b4;
          bVar86 = bVar18 + UNK_014e86b5;
          bVar87 = bVar19 + UNK_014e86b6;
          bVar88 = bVar20 + UNK_014e86b7;
          bVar89 = bVar21 + UNK_014e86b8;
          bVar90 = bVar22 + UNK_014e86b9;
          bVar91 = bVar23 + UNK_014e86ba;
          bVar92 = bVar24 + UNK_014e86bb;
          bVar93 = bVar25 + UNK_014e86bc;
          bVar94 = bVar26 + UNK_014e86bd;
          bVar95 = bVar27 + UNK_014e86be;
          bVar96 = bVar28 + UNK_014e86bf;
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
          pbVar1 = pbVar29 + (long)pbVar38;
          *pbVar1 = auVar97[0] + *pbVar41;
          pbVar1[1] = auVar97[1] + bVar49;
          pbVar1[2] = auVar97[2] + bVar50;
          pbVar1[3] = auVar97[3] + bVar52;
          pbVar1[4] = auVar97[4] + bVar54;
          pbVar1[5] = auVar97[5] + bVar56;
          pbVar1[6] = auVar97[6] + bVar58;
          pbVar1[7] = auVar97[7] + bVar60;
          pbVar1[8] = auVar97[8] + bVar62;
          pbVar1[9] = auVar97[9] + bVar6;
          pbVar1[10] = auVar97[10] + bVar7;
          pbVar1[0xb] = auVar97[0xb] + bVar8;
          pbVar1[0xc] = auVar97[0xc] + bVar9;
          pbVar1[0xd] = auVar97[0xd] + bVar10;
          pbVar1[0xe] = auVar97[0xe] + bVar11;
          pbVar1[0xf] = auVar97[0xf] + bVar12;
          pbVar41 = pbVar29 + 0x10 + (long)pbVar38;
          *pbVar41 = auVar65[0] + bVar13;
          pbVar41[1] = auVar65[1] + bVar14;
          pbVar41[2] = auVar65[2] + bVar15;
          pbVar41[3] = auVar65[3] + bVar16;
          pbVar41[4] = auVar65[4] + bVar17;
          pbVar41[5] = auVar65[5] + bVar18;
          pbVar41[6] = auVar65[6] + bVar19;
          pbVar41[7] = auVar65[7] + bVar20;
          pbVar41[8] = auVar65[8] + bVar21;
          pbVar41[9] = auVar65[9] + bVar22;
          pbVar41[10] = auVar65[10] + bVar23;
          pbVar41[0xb] = auVar65[0xb] + bVar24;
          pbVar41[0xc] = auVar65[0xc] + bVar25;
          pbVar41[0xd] = auVar65[0xd] + bVar26;
          pbVar41[0xe] = auVar65[0xe] + bVar27;
          pbVar41[0xf] = auVar65[0xf] + bVar28;
          pbVar38 = pbVar38 + 0x20;
        } while (pbVar37 != pbVar38);
        if (pbVar32 == pbVar37) goto LAB_0d50e8a2;
        if (((ulong)pbVar32 & 0x18) == 0) {
          pbVar38 = pbVar37 + (long)pbVar29;
          goto LAB_0d50e87c;
        }
      }
      pbVar41 = (byte *)((ulong)pbVar32 & 0xfffffffffffffff8);
      pbVar38 = pbVar29 + (long)pbVar41;
      do {
        uVar35 = *(undefined8 *)(pbVar29 + (long)pbVar37);
        bVar49 = (char)uVar35 + DAT_014e9110;
        cVar51 = (char)((ulong)uVar35 >> 8);
        bVar50 = cVar51 + UNK_014e9111;
        cVar53 = (char)((ulong)uVar35 >> 0x10);
        bVar52 = cVar53 + UNK_014e9112;
        cVar55 = (char)((ulong)uVar35 >> 0x18);
        bVar54 = cVar55 + UNK_014e9113;
        cVar57 = (char)((ulong)uVar35 >> 0x20);
        bVar56 = cVar57 + UNK_014e9114;
        cVar59 = (char)((ulong)uVar35 >> 0x28);
        bVar58 = cVar59 + UNK_014e9115;
        cVar61 = (char)((ulong)uVar35 >> 0x30);
        cVar5 = (char)((ulong)uVar35 >> 0x38);
        bVar60 = cVar61 + UNK_014e9116;
        bVar62 = cVar5 + UNK_014e9117;
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
        *(ulong *)(pbVar29 + (long)pbVar37) =
             CONCAT17(auVar65[7] + cVar5,
                      CONCAT16(auVar65[6] + cVar61,
                               CONCAT15(auVar65[5] + cVar59,
                                        CONCAT14(auVar65[4] + cVar57,
                                                 CONCAT13(auVar65[3] + cVar55,
                                                          CONCAT12(auVar65[2] + cVar53,
                                                                   CONCAT11(auVar65[1] + cVar51,
                                                                            auVar65[0] +
                                                                            (char)uVar35)))))));
        pbVar37 = pbVar37 + 8;
      } while (pbVar41 != pbVar37);
      if (pbVar32 == pbVar41) goto LAB_0d50e8a2;
    }
LAB_0d50e87c:
    do {
      bVar49 = *pbVar38;
      bVar50 = bVar49 + 0x20;
      if (0x19 < (byte)(bVar49 + 0xbf)) {
        bVar50 = bVar49;
      }
      *pbVar38 = bVar50;
      pbVar38 = pbVar38 + 1;
    } while (pbVar38 != pbVar29 + (long)pbVar32);
  }
LAB_0d50e8a2:
  uStack_80 = 0;
  if (((ulong)uStack_98 & 1) == 0) {
    pbStack_68 = pbStack_88;
    uStack_78 = uStack_98;
    pbStack_70 = pbStack_90;
  }
  else {
    func_0x0412e5e0(&uStack_78,pbStack_88,pbStack_90);
  }
  plStack_60 = (long *)0x0;
  if (((ulong)uStack_78 & 1) == 0) {
    if ((byte)uStack_78 >> 1 != 0) goto LAB_0d50e90a;
LAB_0d50e9e6:
    uStack_80 = 0;
  }
  else {
    if (pbStack_70 == (byte *)0x0) goto LAB_0d50e9e6;
LAB_0d50e90a:
    if (((ulong)uStack_78 & 1) == 0) {
      pbVar32 = (byte *)((long)&uStack_78 + 1);
      if (pbVar32 != (byte *)0x0) goto LAB_0d50e920;
LAB_0d50ea09:
      uStack_80 = 0;
    }
    else {
      pbVar32 = pbStack_68;
      if (pbStack_68 == (byte *)0x0) goto LAB_0d50ea09;
LAB_0d50e920:
      if (*pbVar32 == 0) goto LAB_0d50e9e6;
      uVar39 = 0xcbf29ce484222325;
      uVar42 = func_0x0eee2e90(pbVar32);
      uStack_80 = uVar39;
      if (uVar42 != 0) {
        uVar31 = (ulong)((uint)uVar42 & 7);
        if (7 < uVar42) {
          uVar42 = uVar42 & 0xfffffffffffffff8;
          do {
            uVar39 = (((((((uVar39 * 0x100000001b3 ^ (ulong)*pbVar32) * 0x100000001b3 ^
                          (ulong)pbVar32[1]) * 0x100000001b3 ^ (ulong)pbVar32[2]) * 0x100000001b3 ^
                        (ulong)pbVar32[3]) * 0x100000001b3 ^ (ulong)pbVar32[4]) * 0x100000001b3 ^
                      (ulong)pbVar32[5]) * 0x100000001b3 ^ (ulong)pbVar32[6]) * 0x100000001b3 ^
                     (ulong)pbVar32[7];
            pbVar32 = pbVar32 + 8;
            uVar42 = uVar42 - 8;
          } while (uVar42 != 0);
        }
        uStack_80 = uVar39;
        if (uVar31 != 0) {
          uVar42 = 0;
          do {
            uVar39 = uVar39 * 0x100000001b3 ^ (ulong)pbVar32[uVar42];
            uVar42 = uVar42 + 1;
            uStack_80 = uVar39;
          } while (uVar31 != uVar42);
        }
      }
    }
  }
  uStack_44 = param_3;
  if (((ulong)uStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
  }
  uVar39 = uStack_80;
  unaff_RBP = (byte *)(param_1 + 400);
  uVar42 = *(ulong *)(param_1 + 0x198);
  if (uVar42 != 0) {
    uVar31 = uVar42 - (uVar42 >> 1 & 0x5555555555555555);
    uVar31 = (uVar31 >> 2 & 0x3333333333333333) + (uVar31 & 0x3333333333333333);
    uVar31 = ((uVar31 >> 4) + uVar31 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar31 >> 0x38 < 2) {
      uVar43 = uVar42 - 1 & uStack_80;
    }
    else {
      uVar43 = uStack_80;
      if (uVar42 <= uStack_80) {
        if ((uStack_80 | uVar42) >> 0x20 == 0) {
          uVar43 = (uStack_80 & 0xffffffff) % (uVar42 & 0xffffffff);
        }
        else {
          uVar43 = uStack_80 % uVar42;
        }
      }
    }
    plVar40 = *(long **)(*(long *)unaff_RBP + uVar43 * 8);
    uStack_58 = uVar43;
    if ((plVar40 != (long *)0x0) && (plVar40 = (long *)*plVar40, plVar40 != (long *)0x0)) {
      bVar49 = (byte)uStack_78 & 1;
      if (((ulong)uStack_78 & 1) == 0) {
        pbStack_50 = (byte *)((long)&uStack_78 + 1);
        pbVar32 = (byte *)(ulong)((byte)uStack_78 >> 1);
      }
      else {
        pbStack_50 = pbStack_68;
        pbVar32 = pbStack_70;
      }
      plStack_40 = plStack_60;
      plVar44 = plStack_60;
      pbStack_38 = pbVar32;
      if ((byte)(uVar31 >> 0x38) < 2) {
        do {
          if (plVar40[1] == uVar39) {
            if (plVar40[2] == uVar39) {
              if (plVar44 == plVar40 + 2 && (ulong *)plVar40[6] == &uStack_80) goto LAB_0d50f1af;
              bVar50 = *(byte *)(plVar40 + 3);
              if ((bVar50 & 1) == 0) {
                pbVar38 = (byte *)(ulong)(bVar50 >> 1);
              }
              else {
                pbVar38 = (byte *)plVar40[4];
              }
              if (pbVar38 == pbVar32) {
                if ((bVar50 & 1) == 0) {
                  lVar36 = (long)plVar40 + 0x19;
                }
                else {
                  lVar36 = plVar40[5];
                }
                iVar30 = func_0x0eee3000(lVar36,pbStack_50,pbVar32);
                uVar43 = uStack_58;
                plVar44 = plStack_40;
                pbVar32 = pbStack_38;
                if (iVar30 == 0) {
                  plVar40[6] = (long)&uStack_80;
                  plStack_60 = plVar40 + 2;
                  goto LAB_0d50f1af;
                }
              }
            }
            plVar40[6] = 0;
          }
          else if ((plVar40[1] & uVar42 - 1) != uVar43) break;
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
      else {
        do {
          uVar31 = plVar40[1];
          if (uVar31 == uVar39) {
            if (plVar40[2] == uVar39) {
              if (plVar44 == plVar40 + 2 && (ulong *)plVar40[6] == &uStack_80) goto LAB_0d50f1af;
              bVar50 = *(byte *)(plVar40 + 3);
              if ((bVar50 & 1) == 0) {
                pbVar38 = (byte *)(ulong)(bVar50 >> 1);
              }
              else {
                pbVar38 = (byte *)plVar40[4];
              }
              if (pbVar38 == pbVar32) {
                if ((bVar50 & 1) == 0) {
                  lVar36 = (long)plVar40 + 0x19;
                }
                else {
                  lVar36 = plVar40[5];
                }
                iVar30 = func_0x0eee3000(lVar36,pbStack_50,pbVar32);
                uVar43 = uStack_58;
                plVar44 = plStack_40;
                pbVar32 = pbStack_38;
                if (iVar30 == 0) {
                  plVar40[6] = (long)&uStack_80;
                  plStack_60 = plVar40 + 2;
                  goto LAB_0d50f1af;
                }
              }
            }
            plVar40[6] = 0;
          }
          else {
            if (uVar42 <= uVar31) {
              if ((uVar31 | uVar42) >> 0x20 == 0) {
                if ((uVar31 & 0xffffffff) % (uVar42 & 0xffffffff) == uVar43) goto LAB_0d50ec43;
                break;
              }
              uVar31 = uVar31 % uVar42;
            }
            if (uVar31 != uVar43) break;
          }
LAB_0d50ec43:
          plVar40 = (long *)*plVar40;
        } while (plVar40 != (long *)0x0);
      }
    }
  }
  pbVar32 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x40);
  if (pbVar32 == (byte *)0x0) {
    func_0x0eec74c0(0x40,0);
  }
  pbStack_88 = (byte *)0x0;
  pbVar32[0] = 0;
  pbVar32[1] = 0;
  pbVar32[2] = 0;
  pbVar32[3] = 0;
  pbVar32[4] = 0;
  pbVar32[5] = 0;
  pbVar32[6] = 0;
  pbVar32[7] = 0;
  *(ulong *)(pbVar32 + 8) = uVar39;
  *(undefined1 (*) [16])(pbVar32 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pbVar32 + 0x20) = (undefined1  [16])0x0;
  pbVar32[0x30] = 0;
  pbVar32[0x31] = 0;
  pbVar32[0x32] = 0;
  pbVar32[0x33] = 0;
  pbVar32[0x34] = 0;
  pbVar32[0x35] = 0;
  pbVar32[0x36] = 0;
  pbVar32[0x37] = 0;
  uStack_98 = pbVar32;
  pbStack_90 = unaff_RBP;
  if ((ulong *)(pbVar32 + 0x10) != &uStack_80) {
    if (((ulong)uStack_78 & 1) == 0) {
      *(byte **)(pbVar32 + 0x28) = pbStack_68;
      *(byte **)(pbVar32 + 0x18) = uStack_78;
      *(byte **)(pbVar32 + 0x20) = pbStack_70;
    }
    else {
      func_0x04885070(pbVar32 + 0x18,pbStack_68,pbStack_70);
    }
  }
  *(ulong *)(pbVar32 + 0x10) = uStack_80;
  *(undefined4 *)(pbVar32 + 0x38) = uStack_44;
  pbStack_88 = (byte *)CONCAT71(pbStack_88._1_7_,1);
  fVar46 = (float)(*(long *)(param_1 + 0x1a8) + 1);
  if ((long)uVar42 < 0) {
    fVar48 = (float)uVar42;
    fVar47 = *(float *)(param_1 + 0x1b0);
    if (uVar42 != 0) goto LAB_0d50ee0f;
LAB_0d50ee20:
    uVar31 = 1;
    if (2 < uVar42) {
      uVar31 = (ulong)((uVar42 & uVar42 - 1) != 0);
    }
    uVar31 = uVar31 | uVar42 * 2;
    fVar46 = (float)func_0x0eee3ab0(fVar46 / fVar47);
    uVar42 = (long)(fVar46 - _DAT_01198778) & (long)fVar46 >> 0x3f | (long)fVar46;
    if (uVar42 < uVar31) {
      uVar42 = uVar31;
    }
    uVar31 = 2;
    if ((uVar42 == 1) || (uVar31 = uVar42, (uVar42 & uVar42 - 1) == 0)) {
      uVar42 = *(ulong *)(param_1 + 0x198);
      bVar45 = uVar31 < uVar42;
      if (uVar31 <= uVar42) goto LAB_0d50efcc;
LAB_0d50eea1:
      if (uVar31 >> 0x3d != 0) {
LAB_0d50f334:
        uVar35 = func_0x04882eb0();
        if ((*unaff_RBP & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(pbVar32 + 0x28),
                          *(ulong *)(pbVar32 + 0x18) & 0xfffffffffffffffe);
        }
        func_0x0d532a10(&uStack_98);
        if (((ulong)uStack_78 & 1) != 0) {
          func_0x0412a280(pbStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
        }
        _Unwind_Resume(uVar35);
        pcVar4 = (code *)swi(3);
        lVar36 = (*pcVar4)();
        return lVar36;
      }
      lVar36 = uVar31 * 8;
      lVar33 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar36);
      if (lVar33 == 0) {
        func_0x0eec74c0(lVar36,0);
      }
      lVar2 = *(long *)unaff_RBP;
      *(long *)unaff_RBP = lVar33;
      if (lVar2 != 0) {
        func_0x0412a280(lVar2,*(long *)(param_1 + 0x198) << 3);
        lVar33 = *(long *)(param_1 + 400);
      }
      *(ulong *)(param_1 + 0x198) = uVar31;
      func_0x0eee2dd0(lVar33,0,lVar36);
      plVar40 = *(long **)(param_1 + 0x1a0);
      if (plVar40 != (long *)0x0) {
        uVar43 = plVar40[1];
        uVar42 = uVar31 - 1;
        if ((uVar31 & uVar42) == 0) {
          *(long *)(lVar33 + (uVar43 & uVar42) * 8) = param_1 + 0x1a0;
          uVar31 = uVar43 & uVar42;
          while (plVar44 = plVar40, plVar40 = (long *)*plVar44, plVar40 != (long *)0x0) {
            uVar43 = plVar40[1] & uVar42;
            if (uVar43 != uVar31) {
              if (*(long *)(lVar33 + uVar43 * 8) == 0) {
                *(long **)(lVar33 + uVar43 * 8) = plVar44;
                uVar31 = uVar43;
              }
              else {
                *plVar44 = *plVar40;
                *plVar40 = **(undefined8 **)(lVar33 + uVar43 * 8);
                **(long **)(lVar33 + uVar43 * 8) = (long)plVar40;
                plVar40 = plVar44;
              }
            }
          }
        }
        else {
          if (uVar31 <= uVar43) {
            if ((uVar43 | uVar31) >> 0x20 == 0) {
              uVar43 = (uVar43 & 0xffffffff) % (uVar31 & 0xffffffff);
            }
            else {
              uVar43 = uVar43 % uVar31;
            }
          }
          *(long *)(lVar33 + uVar43 * 8) = param_1 + 0x1a0;
          plVar44 = (long *)*plVar40;
          while (plVar44 != (long *)0x0) {
            uVar42 = plVar44[1];
            if (uVar31 <= uVar42) {
              if ((uVar42 | uVar31) >> 0x20 == 0) {
                uVar42 = (uVar42 & 0xffffffff) % (uVar31 & 0xffffffff);
              }
              else {
                uVar42 = uVar42 % uVar31;
              }
            }
            if (uVar42 != uVar43) {
              if (*(long *)(lVar33 + uVar42 * 8) == 0) {
                *(long **)(lVar33 + uVar42 * 8) = plVar40;
                uVar43 = uVar42;
              }
              else {
                *plVar40 = *plVar44;
                *plVar44 = **(long **)(lVar33 + uVar42 * 8);
                **(undefined8 **)(lVar33 + uVar42 * 8) = plVar44;
                plVar44 = plVar40;
              }
            }
            plVar40 = plVar44;
            plVar44 = (long *)*plVar40;
          }
        }
      }
    }
    else {
      uVar31 = FUN_0412c3f0();
      uVar42 = *(ulong *)(param_1 + 0x198);
      bVar45 = uVar31 < uVar42;
      if (uVar42 < uVar31) goto LAB_0d50eea1;
LAB_0d50efcc:
      if (bVar45) {
        fVar46 = (float)func_0x0eee3ab0((float)*(ulong *)(param_1 + 0x1a8) /
                                        *(float *)(param_1 + 0x1b0));
        uVar43 = (long)(fVar46 - _DAT_01198778) & (long)fVar46 >> 0x3f | (long)fVar46;
        if ((uVar42 < 3) ||
           (uVar34 = uVar42 - (uVar42 >> 1 & 0x5555555555555555),
           uVar34 = (uVar34 >> 2 & 0x3333333333333333) + (uVar34 & 0x3333333333333333),
           1 < (byte)(((uVar34 >> 4) + uVar34 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar43 = FUN_0412c3f0(uVar43);
          if (uVar43 < uVar31) {
            uVar43 = uVar31;
          }
        }
        else {
          if (1 < uVar43) {
            lVar36 = 0x3f;
            if (uVar43 - 1 != 0) {
              for (; uVar43 - 1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
              }
            }
            uVar43 = 1L << (-((byte)lVar36 ^ 0x3f) & 0x3f);
          }
          if (uVar43 < uVar31) {
            uVar43 = uVar31;
          }
        }
        uVar31 = uVar43;
        if (uVar31 < uVar42) {
          if (uVar31 != 0) goto LAB_0d50eea1;
          unaff_RBP[0] = 0;
          unaff_RBP[1] = 0;
          unaff_RBP[2] = 0;
          unaff_RBP[3] = 0;
          unaff_RBP[4] = 0;
          unaff_RBP[5] = 0;
          unaff_RBP[6] = 0;
          unaff_RBP[7] = 0;
          if (*(long *)unaff_RBP != 0) {
            func_0x0412a280(*(long *)unaff_RBP,*(long *)(param_1 + 0x198) << 3);
          }
          *(undefined8 *)(param_1 + 0x198) = 0;
        }
      }
    }
    uVar42 = *(ulong *)(param_1 + 0x198);
    if ((uVar42 & uVar42 - 1) == 0) {
      uVar31 = uVar39 & uVar42 - 1;
    }
    else {
      uVar31 = uVar39;
      if (uVar42 <= uVar39) {
        if ((uVar39 | uVar42) >> 0x20 == 0) {
          uVar31 = (uVar39 & 0xffffffff) % (uVar42 & 0xffffffff);
        }
        else {
          uVar31 = uVar39 % uVar42;
        }
      }
    }
  }
  else {
    fVar48 = (float)(long)uVar42;
    fVar47 = *(float *)(param_1 + 0x1b0);
    if (uVar42 == 0) goto LAB_0d50ee20;
LAB_0d50ee0f:
    uVar31 = uStack_58;
    if (fVar48 * fVar47 < fVar46) goto LAB_0d50ee20;
  }
  lVar36 = *(long *)unaff_RBP;
  puVar3 = *(undefined8 **)(lVar36 + uVar31 * 8);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)pbVar32 = *(undefined8 *)(param_1 + 0x1a0);
    *(byte **)(param_1 + 0x1a0) = pbVar32;
    *(long *)(lVar36 + uVar31 * 8) = param_1 + 0x1a0;
    if (*(long *)pbVar32 != 0) {
      uVar39 = *(ulong *)(*(long *)pbVar32 + 8);
      if ((uVar42 & uVar42 - 1) == 0) {
        *(byte **)(lVar36 + (uVar39 & uVar42 - 1) * 8) = pbVar32;
      }
      else {
        if (uVar42 <= uVar39) {
          if ((uVar39 | uVar42) >> 0x20 == 0) {
            *(byte **)(lVar36 + ((uVar39 & 0xffffffff) % (uVar42 & 0xffffffff)) * 8) = pbVar32;
            goto LAB_0d50f19f;
          }
          uVar39 = uVar39 % uVar42;
        }
        *(byte **)(lVar36 + uVar39 * 8) = pbVar32;
      }
    }
  }
  else {
    *(undefined8 *)pbVar32 = *puVar3;
    *puVar3 = pbVar32;
  }
LAB_0d50f19f:
  *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
  bVar49 = (byte)uStack_78 & 1;
LAB_0d50f1af:
  if (bVar49 != 0) {
    func_0x0412a280(pbStack_68,(ulong)uStack_78 & 0xfffffffffffffffe);
  }
  return param_1;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
