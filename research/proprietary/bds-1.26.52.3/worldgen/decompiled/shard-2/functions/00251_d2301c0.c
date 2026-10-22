/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd3301c0 (ELF vaddr 0xd2301c0)
 * Label: callee-of:0x61416e0
 * Body:  [[0d3301c0, 0d330462]]
 * Ghidra: FUN_0d3301c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d3301c0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  byte *pbVar3;
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
  char *pcVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  char *pcVar33;
  ulong uVar34;
  byte *pbVar35;
  bool bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar40;
  byte bVar42;
  byte bVar44;
  byte bVar46;
  byte bVar48;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
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
  undefined8 uStack_50;
  ulong uStack_48;
  char *pcStack_40;
  undefined8 *puStack_38;
  char cVar39;
  char cVar41;
  char cVar43;
  char cVar45;
  char cVar47;
  char cVar49;
  
  pbVar3 = (byte *)*param_2;
  bVar36 = (*pbVar3 & 1) != 0;
  pbVar35 = pbVar3 + 1;
  if (bVar36) {
    pbVar35 = *(byte **)(pbVar3 + 0x10);
  }
  uVar30 = (ulong)(*pbVar3 >> 1);
  if (bVar36) {
    uVar30 = *(ulong *)(pbVar3 + 8);
  }
  if (0xfffffffffffffff7 < uVar30) {
    uVar31 = FUN_04882e30();
    if ((uStack_50 & 1) != 0) {
      func_0x0412a280(pcStack_40,uStack_50 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar31);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar29 = (char *)((long)&uStack_50 + 1);
  if (uVar30 < 0x17) {
    uStack_50 = CONCAT71(uStack_50._1_7_,(char)uVar30 * '\x02');
    pcVar33 = pcVar29;
    if (uVar30 != 0) goto LAB_0d330273;
  }
  else {
    uVar32 = 0x1a;
    if ((uVar30 | 7) != 0x17) {
      uVar32 = (uVar30 | 7) + 1;
    }
    puStack_38 = param_2;
    pcVar33 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32);
    if (pcVar33 == (char *)0x0) {
      FUN_0eec74c0(uVar32,0);
    }
    uStack_50 = uVar32 | 1;
    param_2 = puStack_38;
    uStack_48 = uVar30;
    pcStack_40 = pcVar33;
LAB_0d330273:
    memcpy(pcVar33,pbVar35,uVar30);
  }
  pcVar33[uVar30] = '\0';
  uVar30 = uStack_50 >> 1 & 0x7f;
  if ((uStack_50 & 1) != 0) {
    uVar30 = uStack_48;
    pcVar29 = pcStack_40;
  }
  if (uVar30 == 0) goto LAB_0d3303ed;
  pcVar33 = pcVar29;
  if (7 < uVar30) {
    if (uVar30 < 0x20) {
      uVar32 = 0;
    }
    else {
      uVar32 = uVar30 & 0xffffffffffffffe0;
      uVar34 = 0;
      do {
        pcVar1 = pcVar29 + uVar34;
        cVar2 = pcVar1[1];
        cVar39 = pcVar1[2];
        cVar41 = pcVar1[3];
        cVar43 = pcVar1[4];
        cVar45 = pcVar1[5];
        cVar47 = pcVar1[6];
        cVar49 = pcVar1[7];
        cVar5 = pcVar1[8];
        cVar6 = pcVar1[9];
        cVar7 = pcVar1[10];
        cVar8 = pcVar1[0xb];
        cVar9 = pcVar1[0xc];
        cVar10 = pcVar1[0xd];
        cVar11 = pcVar1[0xe];
        cVar12 = pcVar1[0xf];
        pcVar33 = pcVar29 + uVar34 + 0x10;
        cVar13 = *pcVar33;
        cVar14 = pcVar33[1];
        cVar15 = pcVar33[2];
        cVar16 = pcVar33[3];
        cVar17 = pcVar33[4];
        cVar18 = pcVar33[5];
        cVar19 = pcVar33[6];
        cVar20 = pcVar33[7];
        cVar21 = pcVar33[8];
        cVar22 = pcVar33[9];
        cVar23 = pcVar33[10];
        cVar24 = pcVar33[0xb];
        cVar25 = pcVar33[0xc];
        cVar26 = pcVar33[0xd];
        cVar27 = pcVar33[0xe];
        cVar28 = pcVar33[0xf];
        bVar37 = *pcVar1 + DAT_014e86b0;
        bVar38 = cVar2 + UNK_014e86b1;
        bVar40 = cVar39 + UNK_014e86b2;
        bVar42 = cVar41 + UNK_014e86b3;
        bVar44 = cVar43 + UNK_014e86b4;
        bVar46 = cVar45 + UNK_014e86b5;
        bVar48 = cVar47 + UNK_014e86b6;
        bVar50 = cVar49 + UNK_014e86b7;
        bVar51 = cVar5 + UNK_014e86b8;
        bVar52 = cVar6 + UNK_014e86b9;
        bVar53 = cVar7 + UNK_014e86ba;
        bVar54 = cVar8 + UNK_014e86bb;
        bVar55 = cVar9 + UNK_014e86bc;
        bVar56 = cVar10 + UNK_014e86bd;
        bVar57 = cVar11 + UNK_014e86be;
        bVar58 = cVar12 + UNK_014e86bf;
        bVar59 = cVar13 + DAT_014e86b0;
        bVar60 = cVar14 + UNK_014e86b1;
        bVar61 = cVar15 + UNK_014e86b2;
        bVar62 = cVar16 + UNK_014e86b3;
        bVar63 = cVar17 + UNK_014e86b4;
        bVar64 = cVar18 + UNK_014e86b5;
        bVar65 = cVar19 + UNK_014e86b6;
        bVar66 = cVar20 + UNK_014e86b7;
        bVar67 = cVar21 + UNK_014e86b8;
        bVar68 = cVar22 + UNK_014e86b9;
        bVar69 = cVar23 + UNK_014e86ba;
        bVar70 = cVar24 + UNK_014e86bb;
        bVar71 = cVar25 + UNK_014e86bc;
        bVar72 = cVar26 + UNK_014e86bd;
        bVar73 = cVar27 + UNK_014e86be;
        bVar74 = cVar28 + UNK_014e86bf;
        pcVar33 = pcVar29 + uVar34;
        *pcVar33 = (-((byte)((DAT_014e4170 < bVar37) * DAT_014e4170 |
                            (DAT_014e4170 >= bVar37) * bVar37) == bVar37) & DAT_014ead50) + *pcVar1;
        pcVar33[1] = (-((byte)((UNK_014e4171 < bVar38) * UNK_014e4171 |
                              (UNK_014e4171 >= bVar38) * bVar38) == bVar38) & UNK_014ead51) + cVar2;
        pcVar33[2] = (-((byte)((UNK_014e4172 < bVar40) * UNK_014e4172 |
                              (UNK_014e4172 >= bVar40) * bVar40) == bVar40) & UNK_014ead52) + cVar39
        ;
        pcVar33[3] = (-((byte)((UNK_014e4173 < bVar42) * UNK_014e4173 |
                              (UNK_014e4173 >= bVar42) * bVar42) == bVar42) & UNK_014ead53) + cVar41
        ;
        pcVar33[4] = (-((byte)((UNK_014e4174 < bVar44) * UNK_014e4174 |
                              (UNK_014e4174 >= bVar44) * bVar44) == bVar44) & UNK_014ead54) + cVar43
        ;
        pcVar33[5] = (-((byte)((UNK_014e4175 < bVar46) * UNK_014e4175 |
                              (UNK_014e4175 >= bVar46) * bVar46) == bVar46) & UNK_014ead55) + cVar45
        ;
        pcVar33[6] = (-((byte)((UNK_014e4176 < bVar48) * UNK_014e4176 |
                              (UNK_014e4176 >= bVar48) * bVar48) == bVar48) & UNK_014ead56) + cVar47
        ;
        pcVar33[7] = (-((byte)((UNK_014e4177 < bVar50) * UNK_014e4177 |
                              (UNK_014e4177 >= bVar50) * bVar50) == bVar50) & UNK_014ead57) + cVar49
        ;
        pcVar33[8] = (-((byte)((UNK_014e4178 < bVar51) * UNK_014e4178 |
                              (UNK_014e4178 >= bVar51) * bVar51) == bVar51) & UNK_014ead58) + cVar5;
        pcVar33[9] = (-((byte)((UNK_014e4179 < bVar52) * UNK_014e4179 |
                              (UNK_014e4179 >= bVar52) * bVar52) == bVar52) & UNK_014ead59) + cVar6;
        pcVar33[10] = (-((byte)((UNK_014e417a < bVar53) * UNK_014e417a |
                               (UNK_014e417a >= bVar53) * bVar53) == bVar53) & UNK_014ead5a) + cVar7
        ;
        pcVar33[0xb] = (-((byte)((UNK_014e417b < bVar54) * UNK_014e417b |
                                (UNK_014e417b >= bVar54) * bVar54) == bVar54) & UNK_014ead5b) +
                       cVar8;
        pcVar33[0xc] = (-((byte)((UNK_014e417c < bVar55) * UNK_014e417c |
                                (UNK_014e417c >= bVar55) * bVar55) == bVar55) & UNK_014ead5c) +
                       cVar9;
        pcVar33[0xd] = (-((byte)((UNK_014e417d < bVar56) * UNK_014e417d |
                                (UNK_014e417d >= bVar56) * bVar56) == bVar56) & UNK_014ead5d) +
                       cVar10;
        pcVar33[0xe] = (-((byte)((UNK_014e417e < bVar57) * UNK_014e417e |
                                (UNK_014e417e >= bVar57) * bVar57) == bVar57) & UNK_014ead5e) +
                       cVar11;
        pcVar33[0xf] = (-((byte)((UNK_014e417f < bVar58) * UNK_014e417f |
                                (UNK_014e417f >= bVar58) * bVar58) == bVar58) & UNK_014ead5f) +
                       cVar12;
        pcVar33 = pcVar29 + uVar34 + 0x10;
        *pcVar33 = (-((byte)((DAT_014e4170 < bVar59) * DAT_014e4170 |
                            (DAT_014e4170 >= bVar59) * bVar59) == bVar59) & DAT_014ead50) + cVar13;
        pcVar33[1] = (-((byte)((UNK_014e4171 < bVar60) * UNK_014e4171 |
                              (UNK_014e4171 >= bVar60) * bVar60) == bVar60) & UNK_014ead51) + cVar14
        ;
        pcVar33[2] = (-((byte)((UNK_014e4172 < bVar61) * UNK_014e4172 |
                              (UNK_014e4172 >= bVar61) * bVar61) == bVar61) & UNK_014ead52) + cVar15
        ;
        pcVar33[3] = (-((byte)((UNK_014e4173 < bVar62) * UNK_014e4173 |
                              (UNK_014e4173 >= bVar62) * bVar62) == bVar62) & UNK_014ead53) + cVar16
        ;
        pcVar33[4] = (-((byte)((UNK_014e4174 < bVar63) * UNK_014e4174 |
                              (UNK_014e4174 >= bVar63) * bVar63) == bVar63) & UNK_014ead54) + cVar17
        ;
        pcVar33[5] = (-((byte)((UNK_014e4175 < bVar64) * UNK_014e4175 |
                              (UNK_014e4175 >= bVar64) * bVar64) == bVar64) & UNK_014ead55) + cVar18
        ;
        pcVar33[6] = (-((byte)((UNK_014e4176 < bVar65) * UNK_014e4176 |
                              (UNK_014e4176 >= bVar65) * bVar65) == bVar65) & UNK_014ead56) + cVar19
        ;
        pcVar33[7] = (-((byte)((UNK_014e4177 < bVar66) * UNK_014e4177 |
                              (UNK_014e4177 >= bVar66) * bVar66) == bVar66) & UNK_014ead57) + cVar20
        ;
        pcVar33[8] = (-((byte)((UNK_014e4178 < bVar67) * UNK_014e4178 |
                              (UNK_014e4178 >= bVar67) * bVar67) == bVar67) & UNK_014ead58) + cVar21
        ;
        pcVar33[9] = (-((byte)((UNK_014e4179 < bVar68) * UNK_014e4179 |
                              (UNK_014e4179 >= bVar68) * bVar68) == bVar68) & UNK_014ead59) + cVar22
        ;
        pcVar33[10] = (-((byte)((UNK_014e417a < bVar69) * UNK_014e417a |
                               (UNK_014e417a >= bVar69) * bVar69) == bVar69) & UNK_014ead5a) +
                      cVar23;
        pcVar33[0xb] = (-((byte)((UNK_014e417b < bVar70) * UNK_014e417b |
                                (UNK_014e417b >= bVar70) * bVar70) == bVar70) & UNK_014ead5b) +
                       cVar24;
        pcVar33[0xc] = (-((byte)((UNK_014e417c < bVar71) * UNK_014e417c |
                                (UNK_014e417c >= bVar71) * bVar71) == bVar71) & UNK_014ead5c) +
                       cVar25;
        pcVar33[0xd] = (-((byte)((UNK_014e417d < bVar72) * UNK_014e417d |
                                (UNK_014e417d >= bVar72) * bVar72) == bVar72) & UNK_014ead5d) +
                       cVar26;
        pcVar33[0xe] = (-((byte)((UNK_014e417e < bVar73) * UNK_014e417e |
                                (UNK_014e417e >= bVar73) * bVar73) == bVar73) & UNK_014ead5e) +
                       cVar27;
        pcVar33[0xf] = (-((byte)((UNK_014e417f < bVar74) * UNK_014e417f |
                                (UNK_014e417f >= bVar74) * bVar74) == bVar74) & UNK_014ead5f) +
                       cVar28;
        uVar34 = uVar34 + 0x20;
      } while (uVar32 != uVar34);
      if (uVar30 == uVar32) goto LAB_0d3303ed;
      if ((uVar30 & 0x18) == 0) {
        pcVar33 = pcVar29 + uVar32;
        goto LAB_0d3303c0;
      }
    }
    uVar34 = uVar30 & 0xfffffffffffffff8;
    pcVar33 = pcVar29 + uVar34;
    do {
      uVar31 = *(undefined8 *)(pcVar29 + uVar32);
      bVar37 = (char)uVar31 + DAT_014e9110;
      cVar39 = (char)((ulong)uVar31 >> 8);
      bVar38 = cVar39 + UNK_014e9111;
      cVar41 = (char)((ulong)uVar31 >> 0x10);
      bVar40 = cVar41 + UNK_014e9112;
      cVar43 = (char)((ulong)uVar31 >> 0x18);
      bVar42 = cVar43 + UNK_014e9113;
      cVar45 = (char)((ulong)uVar31 >> 0x20);
      bVar44 = cVar45 + UNK_014e9114;
      cVar47 = (char)((ulong)uVar31 >> 0x28);
      bVar46 = cVar47 + UNK_014e9115;
      cVar49 = (char)((ulong)uVar31 >> 0x30);
      cVar2 = (char)((ulong)uVar31 >> 0x38);
      bVar48 = cVar49 + UNK_014e9116;
      bVar50 = cVar2 + UNK_014e9117;
      *(ulong *)(pcVar29 + uVar32) =
           CONCAT17((~-((byte)((bVar50 < UNK_014e8cb7) * UNK_014e8cb7 |
                              (bVar50 >= UNK_014e8cb7) * bVar50) == bVar50) & UNK_014ea367) + cVar2,
                    CONCAT16((~-((byte)((bVar48 < UNK_014e8cb6) * UNK_014e8cb6 |
                                       (bVar48 >= UNK_014e8cb6) * bVar48) == bVar48) & UNK_014ea366)
                             + cVar49,CONCAT15((~-((byte)((bVar46 < UNK_014e8cb5) * UNK_014e8cb5 |
                                                         (bVar46 >= UNK_014e8cb5) * bVar46) ==
                                                  bVar46) & UNK_014ea365) + cVar47,
                                               CONCAT14((~-((byte)((bVar44 < UNK_014e8cb4) *
                                                                   UNK_014e8cb4 |
                                                                  (bVar44 >= UNK_014e8cb4) * bVar44)
                                                           == bVar44) & UNK_014ea364) + cVar45,
                                                        CONCAT13((~-((byte)((bVar42 < UNK_014e8cb3)
                                                                            * UNK_014e8cb3 |
                                                                           (bVar42 >= UNK_014e8cb3)
                                                                           * bVar42) == bVar42) &
                                                                 UNK_014ea363) + cVar43,
                                                                 CONCAT12((~-((byte)((bVar40 < 
                                                  UNK_014e8cb2) * UNK_014e8cb2 |
                                                  (bVar40 >= UNK_014e8cb2) * bVar40) == bVar40) &
                                                  UNK_014ea362) + cVar41,
                                                  CONCAT11((~-((byte)((bVar38 < UNK_014e8cb1) *
                                                                      UNK_014e8cb1 |
                                                                     (bVar38 >= UNK_014e8cb1) *
                                                                     bVar38) == bVar38) &
                                                           UNK_014ea361) + cVar39,
                                                           (~-((byte)((bVar37 < DAT_014e8cb0) *
                                                                      DAT_014e8cb0 |
                                                                     (bVar37 >= DAT_014e8cb0) *
                                                                     bVar37) == bVar37) &
                                                           DAT_014ea360) + (char)uVar31)))))));
      uVar32 = uVar32 + 8;
    } while (uVar34 != uVar32);
    if (uVar30 == uVar34) goto LAB_0d3303ed;
  }
LAB_0d3303c0:
  do {
    cVar2 = *pcVar33;
    cVar39 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar39 = cVar2;
    }
    *pcVar33 = cVar39;
    pcVar33 = pcVar33 + 1;
  } while (pcVar33 != pcVar29 + uVar30);
LAB_0d3303ed:
  func_0x0d346bd0(param_1,&uStack_50,&uStack_50,param_2);
  if ((uStack_50 & 1) != 0) {
    func_0x0412a280(pcStack_40,uStack_50 & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
