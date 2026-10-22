/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd39f740 (ELF vaddr 0xd29f740)
 * Label: callee-of:0x4e2bb50
 * Body:  [[0d39f740, 0d39fc8a] [0d39fc90, 0d39fd36] [0d39fd40, 0d39fe85] [0d39fe9a, 0d39feab]]
 * Ghidra: FUN_0d39f740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d39f740(long param_1,byte *param_2,undefined8 *param_3)

{
  long lVar1;
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
  byte *pbVar27;
  int iVar28;
  byte *pbVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  long lVar35;
  ulong uVar36;
  byte *pbVar37;
  ulong uVar38;
  long *plVar39;
  long *plVar40;
  bool bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  byte bVar49;
  byte bVar51;
  byte bVar53;
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
  undefined8 uStack_a0;
  ulong uStack_98;
  byte *pbStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  byte *pbStack_68;
  long *plStack_60;
  byte *pbStack_58;
  long lStack_50;
  ulong uStack_48;
  long *plStack_40;
  byte *pbStack_38;
  char cVar44;
  char cVar46;
  char cVar48;
  char cVar50;
  char cVar52;
  char cVar54;
  
  bVar41 = (*param_2 & 1) != 0;
  pbVar37 = param_2 + 1;
  if (bVar41) {
    pbVar37 = *(byte **)(param_2 + 0x10);
  }
  uVar30 = (ulong)(*param_2 >> 1);
  if (bVar41) {
    uVar30 = *(ulong *)(param_2 + 8);
  }
  if (0xfffffffffffffff7 < uVar30) {
    uVar31 = func_0x04882e30();
    if ((uStack_a0 & 1) != 0) {
      func_0x0412a280(pbStack_90,uStack_a0 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar31);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pbStack_38 = param_2;
  puStack_88 = param_3;
  pbVar27 = (byte *)((long)&uStack_a0 + 1);
  if (uVar30 < 0x17) {
    uStack_a0 = CONCAT71(uStack_a0._1_7_,(char)uVar30 * '\x02');
    pbVar29 = pbVar27;
    if (uVar30 != 0) goto LAB_0d39f7e6;
  }
  else {
    uVar32 = 0x1a;
    if ((uVar30 | 7) != 0x17) {
      uVar32 = (uVar30 | 7) + 1;
    }
    pbVar29 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar32);
    if (pbVar29 == (byte *)0x0) {
      func_0x0eec74c0(uVar32,0);
    }
    uStack_a0 = uVar32 | 1;
    uStack_98 = uVar30;
    pbStack_90 = pbVar29;
LAB_0d39f7e6:
    func_0x0eee2f00(pbVar29,pbVar37,uVar30);
  }
  pbVar29[uVar30] = 0;
  uVar30 = uStack_a0 >> 1 & 0x7f;
  if ((uStack_a0 & 1) != 0) {
    uVar30 = uStack_98;
    pbVar27 = pbStack_90;
  }
  if (uVar30 != 0) {
    pbVar37 = pbVar27;
    if (7 < uVar30) {
      if (uVar30 < 0x20) {
        uVar32 = 0;
      }
      else {
        uVar32 = uVar30 & 0xffffffffffffffe0;
        uVar33 = 0;
        do {
          pbVar37 = pbVar27 + uVar33;
          bVar42 = pbVar37[1];
          bVar43 = pbVar37[2];
          bVar45 = pbVar37[3];
          bVar47 = pbVar37[4];
          bVar49 = pbVar37[5];
          bVar51 = pbVar37[6];
          bVar53 = pbVar37[7];
          bVar55 = pbVar37[8];
          bVar4 = pbVar37[9];
          bVar5 = pbVar37[10];
          bVar6 = pbVar37[0xb];
          bVar7 = pbVar37[0xc];
          bVar8 = pbVar37[0xd];
          bVar9 = pbVar37[0xe];
          bVar10 = pbVar37[0xf];
          pbVar29 = pbVar27 + uVar33 + 0x10;
          bVar11 = *pbVar29;
          bVar12 = pbVar29[1];
          bVar13 = pbVar29[2];
          bVar14 = pbVar29[3];
          bVar15 = pbVar29[4];
          bVar16 = pbVar29[5];
          bVar17 = pbVar29[6];
          bVar18 = pbVar29[7];
          bVar19 = pbVar29[8];
          bVar20 = pbVar29[9];
          bVar21 = pbVar29[10];
          bVar22 = pbVar29[0xb];
          bVar23 = pbVar29[0xc];
          bVar24 = pbVar29[0xd];
          bVar25 = pbVar29[0xe];
          bVar26 = pbVar29[0xf];
          bVar56 = *pbVar37 + DAT_014e86b0;
          bVar57 = bVar42 + UNK_014e86b1;
          bVar58 = bVar43 + UNK_014e86b2;
          bVar59 = bVar45 + UNK_014e86b3;
          bVar60 = bVar47 + UNK_014e86b4;
          bVar61 = bVar49 + UNK_014e86b5;
          bVar62 = bVar51 + UNK_014e86b6;
          bVar63 = bVar53 + UNK_014e86b7;
          bVar64 = bVar55 + UNK_014e86b8;
          bVar65 = bVar4 + UNK_014e86b9;
          bVar66 = bVar5 + UNK_014e86ba;
          bVar67 = bVar6 + UNK_014e86bb;
          bVar68 = bVar7 + UNK_014e86bc;
          bVar69 = bVar8 + UNK_014e86bd;
          bVar70 = bVar9 + UNK_014e86be;
          bVar71 = bVar10 + UNK_014e86bf;
          bVar72 = bVar11 + DAT_014e86b0;
          bVar73 = bVar12 + UNK_014e86b1;
          bVar74 = bVar13 + UNK_014e86b2;
          bVar75 = bVar14 + UNK_014e86b3;
          bVar76 = bVar15 + UNK_014e86b4;
          bVar77 = bVar16 + UNK_014e86b5;
          bVar78 = bVar17 + UNK_014e86b6;
          bVar79 = bVar18 + UNK_014e86b7;
          bVar80 = bVar19 + UNK_014e86b8;
          bVar81 = bVar20 + UNK_014e86b9;
          bVar82 = bVar21 + UNK_014e86ba;
          bVar83 = bVar22 + UNK_014e86bb;
          bVar84 = bVar23 + UNK_014e86bc;
          bVar85 = bVar24 + UNK_014e86bd;
          bVar86 = bVar25 + UNK_014e86be;
          bVar87 = bVar26 + UNK_014e86bf;
          pbVar29 = pbVar27 + uVar33;
          *pbVar29 = (-((byte)((DAT_014e4170 < bVar56) * DAT_014e4170 |
                              (DAT_014e4170 >= bVar56) * bVar56) == bVar56) & DAT_014ead50) +
                     *pbVar37;
          pbVar29[1] = (-((byte)((UNK_014e4171 < bVar57) * UNK_014e4171 |
                                (UNK_014e4171 >= bVar57) * bVar57) == bVar57) & UNK_014ead51) +
                       bVar42;
          pbVar29[2] = (-((byte)((UNK_014e4172 < bVar58) * UNK_014e4172 |
                                (UNK_014e4172 >= bVar58) * bVar58) == bVar58) & UNK_014ead52) +
                       bVar43;
          pbVar29[3] = (-((byte)((UNK_014e4173 < bVar59) * UNK_014e4173 |
                                (UNK_014e4173 >= bVar59) * bVar59) == bVar59) & UNK_014ead53) +
                       bVar45;
          pbVar29[4] = (-((byte)((UNK_014e4174 < bVar60) * UNK_014e4174 |
                                (UNK_014e4174 >= bVar60) * bVar60) == bVar60) & UNK_014ead54) +
                       bVar47;
          pbVar29[5] = (-((byte)((UNK_014e4175 < bVar61) * UNK_014e4175 |
                                (UNK_014e4175 >= bVar61) * bVar61) == bVar61) & UNK_014ead55) +
                       bVar49;
          pbVar29[6] = (-((byte)((UNK_014e4176 < bVar62) * UNK_014e4176 |
                                (UNK_014e4176 >= bVar62) * bVar62) == bVar62) & UNK_014ead56) +
                       bVar51;
          pbVar29[7] = (-((byte)((UNK_014e4177 < bVar63) * UNK_014e4177 |
                                (UNK_014e4177 >= bVar63) * bVar63) == bVar63) & UNK_014ead57) +
                       bVar53;
          pbVar29[8] = (-((byte)((UNK_014e4178 < bVar64) * UNK_014e4178 |
                                (UNK_014e4178 >= bVar64) * bVar64) == bVar64) & UNK_014ead58) +
                       bVar55;
          pbVar29[9] = (-((byte)((UNK_014e4179 < bVar65) * UNK_014e4179 |
                                (UNK_014e4179 >= bVar65) * bVar65) == bVar65) & UNK_014ead59) +
                       bVar4;
          pbVar29[10] = (-((byte)((UNK_014e417a < bVar66) * UNK_014e417a |
                                 (UNK_014e417a >= bVar66) * bVar66) == bVar66) & UNK_014ead5a) +
                        bVar5;
          pbVar29[0xb] = (-((byte)((UNK_014e417b < bVar67) * UNK_014e417b |
                                  (UNK_014e417b >= bVar67) * bVar67) == bVar67) & UNK_014ead5b) +
                         bVar6;
          pbVar29[0xc] = (-((byte)((UNK_014e417c < bVar68) * UNK_014e417c |
                                  (UNK_014e417c >= bVar68) * bVar68) == bVar68) & UNK_014ead5c) +
                         bVar7;
          pbVar29[0xd] = (-((byte)((UNK_014e417d < bVar69) * UNK_014e417d |
                                  (UNK_014e417d >= bVar69) * bVar69) == bVar69) & UNK_014ead5d) +
                         bVar8;
          pbVar29[0xe] = (-((byte)((UNK_014e417e < bVar70) * UNK_014e417e |
                                  (UNK_014e417e >= bVar70) * bVar70) == bVar70) & UNK_014ead5e) +
                         bVar9;
          pbVar29[0xf] = (-((byte)((UNK_014e417f < bVar71) * UNK_014e417f |
                                  (UNK_014e417f >= bVar71) * bVar71) == bVar71) & UNK_014ead5f) +
                         bVar10;
          pbVar37 = pbVar27 + uVar33 + 0x10;
          *pbVar37 = (-((byte)((DAT_014e4170 < bVar72) * DAT_014e4170 |
                              (DAT_014e4170 >= bVar72) * bVar72) == bVar72) & DAT_014ead50) + bVar11
          ;
          pbVar37[1] = (-((byte)((UNK_014e4171 < bVar73) * UNK_014e4171 |
                                (UNK_014e4171 >= bVar73) * bVar73) == bVar73) & UNK_014ead51) +
                       bVar12;
          pbVar37[2] = (-((byte)((UNK_014e4172 < bVar74) * UNK_014e4172 |
                                (UNK_014e4172 >= bVar74) * bVar74) == bVar74) & UNK_014ead52) +
                       bVar13;
          pbVar37[3] = (-((byte)((UNK_014e4173 < bVar75) * UNK_014e4173 |
                                (UNK_014e4173 >= bVar75) * bVar75) == bVar75) & UNK_014ead53) +
                       bVar14;
          pbVar37[4] = (-((byte)((UNK_014e4174 < bVar76) * UNK_014e4174 |
                                (UNK_014e4174 >= bVar76) * bVar76) == bVar76) & UNK_014ead54) +
                       bVar15;
          pbVar37[5] = (-((byte)((UNK_014e4175 < bVar77) * UNK_014e4175 |
                                (UNK_014e4175 >= bVar77) * bVar77) == bVar77) & UNK_014ead55) +
                       bVar16;
          pbVar37[6] = (-((byte)((UNK_014e4176 < bVar78) * UNK_014e4176 |
                                (UNK_014e4176 >= bVar78) * bVar78) == bVar78) & UNK_014ead56) +
                       bVar17;
          pbVar37[7] = (-((byte)((UNK_014e4177 < bVar79) * UNK_014e4177 |
                                (UNK_014e4177 >= bVar79) * bVar79) == bVar79) & UNK_014ead57) +
                       bVar18;
          pbVar37[8] = (-((byte)((UNK_014e4178 < bVar80) * UNK_014e4178 |
                                (UNK_014e4178 >= bVar80) * bVar80) == bVar80) & UNK_014ead58) +
                       bVar19;
          pbVar37[9] = (-((byte)((UNK_014e4179 < bVar81) * UNK_014e4179 |
                                (UNK_014e4179 >= bVar81) * bVar81) == bVar81) & UNK_014ead59) +
                       bVar20;
          pbVar37[10] = (-((byte)((UNK_014e417a < bVar82) * UNK_014e417a |
                                 (UNK_014e417a >= bVar82) * bVar82) == bVar82) & UNK_014ead5a) +
                        bVar21;
          pbVar37[0xb] = (-((byte)((UNK_014e417b < bVar83) * UNK_014e417b |
                                  (UNK_014e417b >= bVar83) * bVar83) == bVar83) & UNK_014ead5b) +
                         bVar22;
          pbVar37[0xc] = (-((byte)((UNK_014e417c < bVar84) * UNK_014e417c |
                                  (UNK_014e417c >= bVar84) * bVar84) == bVar84) & UNK_014ead5c) +
                         bVar23;
          pbVar37[0xd] = (-((byte)((UNK_014e417d < bVar85) * UNK_014e417d |
                                  (UNK_014e417d >= bVar85) * bVar85) == bVar85) & UNK_014ead5d) +
                         bVar24;
          pbVar37[0xe] = (-((byte)((UNK_014e417e < bVar86) * UNK_014e417e |
                                  (UNK_014e417e >= bVar86) * bVar86) == bVar86) & UNK_014ead5e) +
                         bVar25;
          pbVar37[0xf] = (-((byte)((UNK_014e417f < bVar87) * UNK_014e417f |
                                  (UNK_014e417f >= bVar87) * bVar87) == bVar87) & UNK_014ead5f) +
                         bVar26;
          uVar33 = uVar33 + 0x20;
        } while (uVar32 != uVar33);
        if (uVar30 == uVar32) goto LAB_0d39f962;
        if ((uVar30 & 0x18) == 0) {
          pbVar37 = pbVar27 + uVar32;
          goto LAB_0d39f92e;
        }
      }
      uVar33 = uVar30 & 0xfffffffffffffff8;
      pbVar37 = pbVar27 + uVar33;
      do {
        uVar31 = *(undefined8 *)(pbVar27 + uVar32);
        bVar42 = (char)uVar31 + DAT_014e9110;
        cVar44 = (char)((ulong)uVar31 >> 8);
        bVar43 = cVar44 + UNK_014e9111;
        cVar46 = (char)((ulong)uVar31 >> 0x10);
        bVar45 = cVar46 + UNK_014e9112;
        cVar48 = (char)((ulong)uVar31 >> 0x18);
        bVar47 = cVar48 + UNK_014e9113;
        cVar50 = (char)((ulong)uVar31 >> 0x20);
        bVar49 = cVar50 + UNK_014e9114;
        cVar52 = (char)((ulong)uVar31 >> 0x28);
        bVar51 = cVar52 + UNK_014e9115;
        cVar54 = (char)((ulong)uVar31 >> 0x30);
        cVar3 = (char)((ulong)uVar31 >> 0x38);
        bVar53 = cVar54 + UNK_014e9116;
        bVar55 = cVar3 + UNK_014e9117;
        *(ulong *)(pbVar27 + uVar32) =
             CONCAT17((~-((byte)((bVar55 < UNK_014e8cb7) * UNK_014e8cb7 |
                                (bVar55 >= UNK_014e8cb7) * bVar55) == bVar55) & UNK_014ea367) +
                      cVar3,CONCAT16((~-((byte)((bVar53 < UNK_014e8cb6) * UNK_014e8cb6 |
                                               (bVar53 >= UNK_014e8cb6) * bVar53) == bVar53) &
                                     UNK_014ea366) + cVar54,
                                     CONCAT15((~-((byte)((bVar51 < UNK_014e8cb5) * UNK_014e8cb5 |
                                                        (bVar51 >= UNK_014e8cb5) * bVar51) == bVar51
                                                 ) & UNK_014ea365) + cVar52,
                                              CONCAT14((~-((byte)((bVar49 < UNK_014e8cb4) *
                                                                  UNK_014e8cb4 |
                                                                 (bVar49 >= UNK_014e8cb4) * bVar49)
                                                          == bVar49) & UNK_014ea364) + cVar50,
                                                       CONCAT13((~-((byte)((bVar47 < UNK_014e8cb3) *
                                                                           UNK_014e8cb3 |
                                                                          (bVar47 >= UNK_014e8cb3) *
                                                                          bVar47) == bVar47) &
                                                                UNK_014ea363) + cVar48,
                                                                CONCAT12((~-((byte)((bVar45 < 
                                                  UNK_014e8cb2) * UNK_014e8cb2 |
                                                  (bVar45 >= UNK_014e8cb2) * bVar45) == bVar45) &
                                                  UNK_014ea362) + cVar46,
                                                  CONCAT11((~-((byte)((bVar43 < UNK_014e8cb1) *
                                                                      UNK_014e8cb1 |
                                                                     (bVar43 >= UNK_014e8cb1) *
                                                                     bVar43) == bVar43) &
                                                           UNK_014ea361) + cVar44,
                                                           (~-((byte)((bVar42 < DAT_014e8cb0) *
                                                                      DAT_014e8cb0 |
                                                                     (bVar42 >= DAT_014e8cb0) *
                                                                     bVar42) == bVar42) &
                                                           DAT_014ea360) + (char)uVar31)))))));
        uVar32 = uVar32 + 8;
      } while (uVar33 != uVar32);
      if (uVar30 == uVar33) goto LAB_0d39f962;
    }
LAB_0d39f92e:
    do {
      bVar42 = *pbVar37;
      bVar43 = bVar42 + 0x20;
      if (0x19 < (byte)(bVar42 + 0xbf)) {
        bVar43 = bVar42;
      }
      *pbVar37 = bVar43;
      pbVar37 = pbVar37 + 1;
    } while (pbVar37 != pbVar27 + uVar30);
  }
LAB_0d39f962:
  uStack_80 = 0;
  if ((uStack_a0 & 1) == 0) {
    pbStack_68 = pbStack_90;
    uStack_78 = uStack_a0;
    uStack_70 = uStack_98;
  }
  else {
    func_0x0412e5e0(&uStack_78,pbStack_90,uStack_98);
  }
  plStack_60 = (long *)0x0;
  if ((uStack_78 & 1) == 0) {
    if ((byte)uStack_78 >> 1 != 0) goto LAB_0d39f9c7;
LAB_0d39fab7:
    uStack_80 = 0;
  }
  else {
    if (uStack_70 == 0) goto LAB_0d39fab7;
LAB_0d39f9c7:
    if ((uStack_78 & 1) == 0) {
      pbVar37 = (byte *)((long)&uStack_78 + 1);
      if (pbVar37 != (byte *)0x0) goto LAB_0d39f9dd;
LAB_0d39fad6:
      uStack_80 = 0;
    }
    else {
      pbVar37 = pbStack_68;
      if (pbStack_68 == (byte *)0x0) goto LAB_0d39fad6;
LAB_0d39f9dd:
      if (*pbVar37 == 0) goto LAB_0d39fab7;
      uVar32 = 0xcbf29ce484222325;
      uVar30 = func_0x0eee2e90(pbVar37);
      uStack_80 = uVar32;
      if (uVar30 != 0) {
        uVar33 = (ulong)((uint)uVar30 & 7);
        if (7 < uVar30) {
          uVar30 = uVar30 & 0xfffffffffffffff8;
          do {
            uVar32 = (((((((uVar32 * 0x100000001b3 ^ (ulong)*pbVar37) * 0x100000001b3 ^
                          (ulong)pbVar37[1]) * 0x100000001b3 ^ (ulong)pbVar37[2]) * 0x100000001b3 ^
                        (ulong)pbVar37[3]) * 0x100000001b3 ^ (ulong)pbVar37[4]) * 0x100000001b3 ^
                      (ulong)pbVar37[5]) * 0x100000001b3 ^ (ulong)pbVar37[6]) * 0x100000001b3 ^
                     (ulong)pbVar37[7];
            pbVar37 = pbVar37 + 8;
            uVar30 = uVar30 - 8;
          } while (uVar30 != 0);
        }
        uStack_80 = uVar32;
        if (uVar33 != 0) {
          uVar30 = 0;
          do {
            uVar32 = uVar32 * 0x100000001b3 ^ (ulong)pbVar37[uVar30];
            uVar30 = uVar30 + 1;
            uStack_80 = uVar32;
          } while (uVar33 != uVar30);
        }
      }
    }
  }
  if ((uStack_a0 & 1) != 0) {
    func_0x0412a280(pbStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  uVar32 = uStack_80;
  uVar30 = *(ulong *)(param_1 + 0x50);
  if (uVar30 != 0) {
    lVar35 = *(long *)(param_1 + 0x48);
    uVar33 = uVar30 - (uVar30 >> 1 & 0x5555555555555555);
    uVar33 = (uVar33 >> 2 & 0x3333333333333333) + (uVar33 & 0x3333333333333333);
    uVar33 = ((uVar33 >> 4) + uVar33 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar33 >> 0x38 < 2) {
      uVar38 = uVar30 - 1 & uStack_80;
      plVar39 = *(long **)(lVar35 + uVar38 * 8);
    }
    else {
      uVar38 = uStack_80;
      if (uVar30 <= uStack_80) {
        if ((uStack_80 | uVar30) >> 0x20 == 0) {
          uVar38 = (uStack_80 & 0xffffffff) % (uVar30 & 0xffffffff);
          plVar39 = *(long **)(lVar35 + uVar38 * 8);
          goto joined_r0x0d39fda0;
        }
        uVar38 = uStack_80 % uVar30;
      }
      plVar39 = *(long **)(lVar35 + uVar38 * 8);
    }
joined_r0x0d39fda0:
    if ((plVar39 != (long *)0x0) && (plVar39 = (long *)*plVar39, plVar39 != (long *)0x0)) {
      if ((uStack_78 & 1) == 0) {
        pbStack_58 = (byte *)((long)&uStack_78 + 1);
        uVar36 = uStack_78 >> 1 & 0x7f;
      }
      else {
        pbStack_58 = pbStack_68;
        uVar36 = uStack_70;
      }
      plStack_40 = plStack_60;
      lStack_50 = param_1;
      uStack_48 = uVar36;
      if ((byte)(uVar33 >> 0x38) < 2) {
        plVar34 = plStack_60;
        do {
          if (plVar39[1] == uVar32) {
            if (plVar39[2] == uVar32) {
              plVar40 = plVar39 + 2;
              if (plVar34 == plVar40 && (ulong *)plVar39[6] == &uStack_80) goto LAB_0d39fe29;
              bVar42 = *(byte *)(plVar39 + 3);
              if ((bVar42 & 1) == 0) {
                uVar33 = (ulong)(bVar42 >> 1);
              }
              else {
                uVar33 = plVar39[4];
              }
              if (uVar33 == uVar36) {
                if ((bVar42 & 1) == 0) {
                  lVar35 = (long)plVar39 + 0x19;
                }
                else {
                  lVar35 = plVar39[5];
                }
                iVar28 = func_0x0eee3000(lVar35,pbStack_58,uVar36);
                plVar34 = plStack_40;
                uVar36 = uStack_48;
                if (iVar28 == 0) goto LAB_0d39fe16;
              }
            }
            plVar39[6] = 0;
            param_1 = lStack_50;
          }
          else if ((plVar39[1] & uVar30 - 1) != uVar38) break;
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
      else {
        plVar34 = plStack_60;
        do {
          uVar33 = plVar39[1];
          if (uVar33 == uVar32) {
            if (plVar39[2] == uVar32) {
              plVar40 = plVar39 + 2;
              if (plVar34 == plVar40 && (ulong *)plVar39[6] == &uStack_80) goto LAB_0d39fe29;
              bVar42 = *(byte *)(plVar39 + 3);
              if ((bVar42 & 1) == 0) {
                uVar33 = (ulong)(bVar42 >> 1);
              }
              else {
                uVar33 = plVar39[4];
              }
              if (uVar33 == uVar36) {
                if ((bVar42 & 1) == 0) {
                  lVar35 = (long)plVar39 + 0x19;
                }
                else {
                  lVar35 = plVar39[5];
                }
                iVar28 = func_0x0eee3000(lVar35,pbStack_58,uVar36);
                plVar34 = plStack_40;
                uVar36 = uStack_48;
                if (iVar28 == 0) goto LAB_0d39fe16;
              }
            }
            plVar39[6] = 0;
            param_1 = lStack_50;
          }
          else {
            if (uVar30 <= uVar33) {
              if ((uVar33 | uVar30) >> 0x20 == 0) {
                if ((uVar33 & 0xffffffff) % (uVar30 & 0xffffffff) == uVar38) goto LAB_0d39fcee;
                break;
              }
              uVar33 = uVar33 % uVar30;
            }
            if (uVar33 != uVar38) break;
          }
LAB_0d39fcee:
          plVar39 = (long *)*plVar39;
        } while (plVar39 != (long *)0x0);
      }
    }
  }
  func_0x0d39feb0(&uStack_a0,param_1,pbStack_38);
  lVar35 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  uVar31 = *puStack_88;
  *puStack_88 = 0;
  plVar39 = *(long **)(lVar35 + lVar1 * 8);
  *(undefined8 *)(lVar35 + lVar1 * 8) = uVar31;
joined_r0x0d39fe58:
  if (plVar39 != (long *)0x0) {
    (**(code **)(*plVar39 + 8))();
  }
  if ((uStack_78 & 1) != 0) {
    func_0x0412a280(pbStack_68,uStack_78 & 0xfffffffffffffffe);
  }
  return;
LAB_0d39fe16:
  plVar39[6] = (long)&uStack_80;
  plStack_60 = plVar40;
LAB_0d39fe29:
  lVar35 = *(long *)(lStack_50 + 0x18);
  lVar1 = *(long *)(*(long *)(lStack_50 + 0x30) + 0x10 + plVar39[7] * 0x18);
  uVar31 = *puStack_88;
  *puStack_88 = 0;
  plVar39 = *(long **)(lVar35 + lVar1 * 8);
  *(undefined8 *)(lVar35 + lVar1 * 8) = uVar31;
  goto joined_r0x0d39fe58;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
