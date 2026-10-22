/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe0260 (ELF vaddr 0xcae0260)
 * Label: caller-of-seed
 * Body:  [[0cbe0260, 0cbe0be2] [0cbe0c69, 0cbe0c8c] [0cbe0c90, 0cbe0cfd]]
 * Ghidra: FUN_0cbe0260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbe0260(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
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
  byte bVar43;
  ulong uVar44;
  long *plVar45;
  long lVar46;
  byte *pbVar47;
  ulong uVar48;
  long lVar49;
  undefined8 uVar50;
  byte bVar51;
  ulong uVar52;
  byte *pbVar53;
  ulong uVar54;
  ulong uVar55;
  byte *pbVar56;
  undefined8 *puVar57;
  byte *pbVar58;
  byte *pbVar59;
  byte *pbVar60;
  bool bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  byte bVar71;
  byte bVar73;
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
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_98;
  undefined4 uStack_8c;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  char cVar74;
  
  uStack_48 = param_5;
  uStack_8c = param_4;
  uStack_70 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_58 = (byte *)param_3[2];
    uStack_68 = *param_3;
    uStack_60 = param_3[1];
  }
  else {
    FUN_0412e5e0(&uStack_68,param_3[2],param_3[1]);
  }
  uVar54 = uStack_60;
  uVar48 = uStack_68;
  uStack_50 = 0;
  uVar44 = uStack_68 >> 1 & 0x7f;
  if ((uStack_68 & 1) != 0) {
    uVar44 = uStack_60;
  }
  if (uVar44 == 0) {
LAB_0cbe0406:
    uStack_70 = 0;
    if ((uStack_68 & 1) == 0) goto LAB_0cbe03f0;
LAB_0cbe0413:
    FUN_0412e5e0(&uStack_88,pbStack_58,uVar54);
  }
  else {
    pbVar60 = pbStack_58;
    if ((uStack_68 & 1) == 0) {
      pbVar60 = (byte *)((long)&uStack_68 + 1);
    }
    if (pbVar60 == (byte *)0x0) {
      uStack_70 = 0;
    }
    else {
      if (*pbVar60 == 0) goto LAB_0cbe0406;
      uVar55 = 0xcbf29ce484222325;
      uVar44 = func_0x0eee2e90(pbVar60);
      uStack_70 = uVar55;
      if (uVar44 != 0) {
        uVar52 = (ulong)((uint)uVar44 & 7);
        if (7 < uVar44) {
          uVar44 = uVar44 & 0xfffffffffffffff8;
          do {
            uVar55 = (((((((uVar55 * 0x100000001b3 ^ (ulong)*pbVar60) * 0x100000001b3 ^
                          (ulong)pbVar60[1]) * 0x100000001b3 ^ (ulong)pbVar60[2]) * 0x100000001b3 ^
                        (ulong)pbVar60[3]) * 0x100000001b3 ^ (ulong)pbVar60[4]) * 0x100000001b3 ^
                      (ulong)pbVar60[5]) * 0x100000001b3 ^ (ulong)pbVar60[6]) * 0x100000001b3 ^
                     (ulong)pbVar60[7];
            pbVar60 = pbVar60 + 8;
            uVar44 = uVar44 - 8;
          } while (uVar44 != 0);
        }
        uStack_70 = uVar55;
        if (uVar52 != 0) {
          uVar44 = 0;
          do {
            uVar55 = uVar55 * 0x100000001b3 ^ (ulong)pbVar60[uVar44];
            uVar44 = uVar44 + 1;
            uStack_70 = uVar55;
          } while (uVar52 != uVar44);
        }
      }
    }
    if ((uVar48 & 1) != 0) goto LAB_0cbe0413;
LAB_0cbe03f0:
    pbStack_78 = pbStack_58;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
  }
  uStack_c8 = *(undefined8 **)(param_1 + 0x148);
  uStack_c0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar45 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar45 = *plVar45 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_c8);
  pbVar60 = uStack_c0;
  if (uStack_c0 != (byte *)0x0) {
    LOCK();
    pbVar53 = uStack_c0 + 8;
    lVar49 = *(long *)pbVar53;
    *(long *)pbVar53 = *(long *)pbVar53 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*(long *)uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(pbVar60);
    }
  }
  plVar45 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3a8);
  if (plVar45 == (long *)0x0) {
    func_0x0eec74c0(0x3a8,0);
  }
  func_0x0c6c7010(plVar45,&uStack_88,uStack_8c);
  *plVar45 = (long)&UNK_0f3be0b0;
  plVar45[0x31] = 0;
  *(undefined4 *)(plVar45 + 0x32) = 0;
  *(undefined8 *)((long)plVar45 + 0x194) = _DAT_014e9d10;
  *(undefined4 *)((long)plVar45 + 0x19c) = 0x3f800000;
  *(undefined1 *)((long)plVar45 + 0x136) = 0;
  *(byte *)((long)plVar45 + 0x134) = *(byte *)((long)plVar45 + 0x134) & 0xe9;
  plVar45[0x25] = _DAT_014e6320;
  plVar45[0x21] = 0x8080;
  func_0x0c6a5c70(plVar45,&UNK_0c6a5df0,0);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar49 = 0;
    lVar46 = 0;
  }
  else {
    lVar46 = func_0x0412c300();
    lVar49 = 0;
    if (lVar46 != 0) {
      lVar49 = *(long *)(param_1 + 0x138);
    }
  }
  plVar45[0x73] = lVar49;
  plVar4 = (long *)plVar45[0x74];
  plVar45[0x74] = lVar46;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar49 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  bVar61 = (*(byte *)(plVar45 + 0x1a) & 1) != 0;
  lVar49 = (long)plVar45 + 0xd1;
  if (bVar61) {
    lVar49 = plVar45[0x1c];
  }
  pbVar60 = (byte *)(ulong)(*(byte *)(plVar45 + 0x1a) >> 1);
  if (bVar61) {
    pbVar60 = (byte *)plVar45[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar60) {
    func_0x04882e30();
    goto LAB_0cbe0bd9;
  }
  pbVar53 = (byte *)((long)&uStack_e0 + 1);
  if (pbVar60 < (byte *)0x17) {
    uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,(char)pbVar60 * '\x02');
    if (pbVar60 != (byte *)0x0) goto LAB_0cbe0640;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar60 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar60 | 7) + 1;
    }
    pbVar53 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar53 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_e0 = (byte *)(uVar48 | 1);
    pbStack_d8 = pbVar60;
    pbStack_d0 = pbVar53;
LAB_0cbe0640:
    func_0x0eee2f00(pbVar53,lVar49,pbVar60);
  }
  pbVar56 = (byte *)((long)&uStack_e0 + 1);
  pbVar53[(long)pbVar60] = 0;
  pbVar58 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  pbVar53 = pbStack_d8;
  pbVar60 = pbStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    pbVar53 = pbVar58;
    pbVar60 = pbVar56;
  }
  if (pbVar53 != (byte *)0x0) {
    pbVar58 = pbVar60;
    if (pbVar53 < (byte *)0x8) {
LAB_0cbe07bc:
      do {
        bVar3 = *pbVar58;
        bVar51 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar51 = bVar3;
        }
        *pbVar58 = bVar51;
        pbVar58 = pbVar58 + 1;
      } while (pbVar58 != pbVar60 + (long)pbVar53);
    }
    else if (pbVar53 < (byte *)0x20) {
      pbVar47 = (byte *)0x0;
LAB_0cbe0755:
      pbVar59 = (byte *)((ulong)pbVar53 & 0xfffffffffffffff8);
      pbVar58 = pbVar60 + (long)pbVar59;
      do {
        uVar50 = *(undefined8 *)(pbVar60 + (long)pbVar47);
        bVar62 = (char)uVar50 + DAT_014e9110;
        cVar64 = (char)((ulong)uVar50 >> 8);
        bVar63 = cVar64 + DAT_014e9110._1_1_;
        cVar66 = (char)((ulong)uVar50 >> 0x10);
        bVar65 = cVar66 + DAT_014e9110._2_1_;
        cVar68 = (char)((ulong)uVar50 >> 0x18);
        bVar67 = cVar68 + DAT_014e9110._3_1_;
        cVar70 = (char)((ulong)uVar50 >> 0x20);
        bVar69 = cVar70 + DAT_014e9110._4_1_;
        cVar72 = (char)((ulong)uVar50 >> 0x28);
        bVar71 = cVar72 + DAT_014e9110._5_1_;
        cVar74 = (char)((ulong)uVar50 >> 0x30);
        cVar12 = (char)((ulong)uVar50 >> 0x38);
        bVar73 = cVar74 + DAT_014e9110._6_1_;
        bVar75 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar51 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar60 + (long)pbVar47) =
             CONCAT17((~-((byte)((bVar75 < bVar11) * bVar11 | (bVar75 >= bVar11) * bVar75) == bVar75
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar73 < bVar10) * bVar10 | (bVar73 >= bVar10) * bVar73)
                                  == bVar73) & UNK_014ea366) + cVar74,
                               CONCAT15((~-((byte)((bVar71 < bVar9) * bVar9 |
                                                  (bVar71 >= bVar9) * bVar71) == bVar71) &
                                        UNK_014ea365) + cVar72,
                                        CONCAT14((~-((byte)((bVar69 < bVar8) * bVar8 |
                                                           (bVar69 >= bVar8) * bVar69) == bVar69) &
                                                 UNK_014ea364) + cVar70,
                                                 CONCAT13((~-((byte)((bVar67 < bVar7) * bVar7 |
                                                                    (bVar67 >= bVar7) * bVar67) ==
                                                             bVar67) & UNK_014ea363) + cVar68,
                                                          CONCAT12((~-((byte)((bVar65 < bVar6) *
                                                                              bVar6 | (bVar65 >=
                                                                                      bVar6) * 
                                                  bVar65) == bVar65) & UNK_014ea362) + cVar66,
                                                  CONCAT11((~-((byte)((bVar63 < bVar51) * bVar51 |
                                                                     (bVar63 >= bVar51) * bVar63) ==
                                                              bVar63) & UNK_014ea361) + cVar64,
                                                           (~-((byte)((bVar62 < bVar3) * bVar3 |
                                                                     (bVar62 >= bVar3) * bVar62) ==
                                                              bVar62) & DAT_014ea360) + (char)uVar50
                                                          )))))));
        pbVar47 = pbVar47 + 8;
      } while (pbVar59 != pbVar47);
      if (pbVar53 != pbVar59) goto LAB_0cbe07bc;
    }
    else {
      pbVar47 = (byte *)((ulong)pbVar53 & 0xffffffffffffffe0);
      pbVar58 = (byte *)0x0;
      do {
        pbVar59 = pbVar60 + (long)pbVar58;
        bVar13 = pbVar59[1];
        bVar14 = pbVar59[2];
        bVar15 = pbVar59[3];
        bVar16 = pbVar59[4];
        bVar17 = pbVar59[5];
        bVar18 = pbVar59[6];
        bVar19 = pbVar59[7];
        bVar20 = pbVar59[8];
        bVar21 = pbVar59[9];
        bVar22 = pbVar59[10];
        bVar23 = pbVar59[0xb];
        bVar24 = pbVar59[0xc];
        bVar25 = pbVar59[0xd];
        bVar26 = pbVar59[0xe];
        bVar27 = pbVar59[0xf];
        pbVar2 = pbVar60 + 0x10 + (long)pbVar58;
        bVar28 = *pbVar2;
        bVar29 = pbVar2[1];
        bVar30 = pbVar2[2];
        bVar31 = pbVar2[3];
        bVar32 = pbVar2[4];
        bVar33 = pbVar2[5];
        bVar34 = pbVar2[6];
        bVar35 = pbVar2[7];
        bVar36 = pbVar2[8];
        bVar37 = pbVar2[9];
        bVar38 = pbVar2[10];
        bVar39 = pbVar2[0xb];
        bVar40 = pbVar2[0xc];
        bVar41 = pbVar2[0xd];
        bVar42 = pbVar2[0xe];
        bVar43 = pbVar2[0xf];
        bVar76 = *pbVar59 + DAT_014e86b0;
        bVar77 = bVar13 + DAT_014e86b0._1_1_;
        bVar78 = bVar14 + DAT_014e86b0._2_1_;
        bVar79 = bVar15 + DAT_014e86b0._3_1_;
        bVar80 = bVar16 + DAT_014e86b0._4_1_;
        bVar81 = bVar17 + DAT_014e86b0._5_1_;
        bVar82 = bVar18 + DAT_014e86b0._6_1_;
        bVar83 = bVar19 + DAT_014e86b0._7_1_;
        bVar84 = bVar20 + DAT_014e86b0._8_1_;
        bVar85 = bVar21 + DAT_014e86b0._9_1_;
        bVar86 = bVar22 + DAT_014e86b0._10_1_;
        bVar87 = bVar23 + DAT_014e86b0._11_1_;
        bVar88 = bVar24 + DAT_014e86b0._12_1_;
        bVar89 = bVar25 + DAT_014e86b0._13_1_;
        bVar90 = bVar26 + DAT_014e86b0._14_1_;
        bVar91 = bVar27 + DAT_014e86b0._15_1_;
        bVar92 = bVar28 + DAT_014e86b0;
        bVar93 = bVar29 + DAT_014e86b0._1_1_;
        bVar94 = bVar30 + DAT_014e86b0._2_1_;
        bVar95 = bVar31 + DAT_014e86b0._3_1_;
        bVar96 = bVar32 + DAT_014e86b0._4_1_;
        bVar97 = bVar33 + DAT_014e86b0._5_1_;
        bVar98 = bVar34 + DAT_014e86b0._6_1_;
        bVar99 = bVar35 + DAT_014e86b0._7_1_;
        bVar100 = bVar36 + DAT_014e86b0._8_1_;
        bVar101 = bVar37 + DAT_014e86b0._9_1_;
        bVar102 = bVar38 + DAT_014e86b0._10_1_;
        bVar103 = bVar39 + DAT_014e86b0._11_1_;
        bVar104 = bVar40 + DAT_014e86b0._12_1_;
        bVar105 = bVar41 + DAT_014e86b0._13_1_;
        bVar106 = bVar42 + DAT_014e86b0._14_1_;
        bVar107 = bVar43 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar51 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar62 = DAT_014e4170._8_1_;
        bVar63 = DAT_014e4170._9_1_;
        bVar65 = DAT_014e4170._10_1_;
        bVar67 = DAT_014e4170._11_1_;
        bVar69 = DAT_014e4170._12_1_;
        bVar71 = DAT_014e4170._13_1_;
        bVar73 = DAT_014e4170._14_1_;
        bVar75 = DAT_014e4170._15_1_;
        pbVar2 = pbVar60 + (long)pbVar58;
        *pbVar2 = (-((byte)((bVar3 < bVar76) * bVar3 | (bVar3 >= bVar76) * bVar76) == bVar76) &
                  DAT_014ead50) + *pbVar59;
        pbVar2[1] = (-((byte)((bVar51 < bVar77) * bVar51 | (bVar51 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead51) + bVar13;
        pbVar2[2] = (-((byte)((bVar6 < bVar78) * bVar6 | (bVar6 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead52) + bVar14;
        pbVar2[3] = (-((byte)((bVar7 < bVar79) * bVar7 | (bVar7 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead53) + bVar15;
        pbVar2[4] = (-((byte)((bVar8 < bVar80) * bVar8 | (bVar8 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead54) + bVar16;
        pbVar2[5] = (-((byte)((bVar9 < bVar81) * bVar9 | (bVar9 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead55) + bVar17;
        pbVar2[6] = (-((byte)((bVar10 < bVar82) * bVar10 | (bVar10 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead56) + bVar18;
        pbVar2[7] = (-((byte)((bVar11 < bVar83) * bVar11 | (bVar11 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead57) + bVar19;
        pbVar2[8] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead58) + bVar20;
        pbVar2[9] = (-((byte)((bVar63 < bVar85) * bVar63 | (bVar63 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead59) + bVar21;
        pbVar2[10] = (-((byte)((bVar65 < bVar86) * bVar65 | (bVar65 >= bVar86) * bVar86) == bVar86)
                     & UNK_014ead5a) + bVar22;
        pbVar2[0xb] = (-((byte)((bVar67 < bVar87) * bVar67 | (bVar67 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5b) + bVar23;
        pbVar2[0xc] = (-((byte)((bVar69 < bVar88) * bVar69 | (bVar69 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5c) + bVar24;
        pbVar2[0xd] = (-((byte)((bVar71 < bVar89) * bVar71 | (bVar71 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5d) + bVar25;
        pbVar2[0xe] = (-((byte)((bVar73 < bVar90) * bVar73 | (bVar73 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5e) + bVar26;
        pbVar2[0xf] = (-((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5f) + bVar27;
        pbVar59 = pbVar60 + 0x10 + (long)pbVar58;
        *pbVar59 = (-((byte)((bVar3 < bVar92) * bVar3 | (bVar3 >= bVar92) * bVar92) == bVar92) &
                   DAT_014ead50) + bVar28;
        pbVar59[1] = (-((byte)((bVar51 < bVar93) * bVar51 | (bVar51 >= bVar93) * bVar93) == bVar93)
                     & UNK_014ead51) + bVar29;
        pbVar59[2] = (-((byte)((bVar6 < bVar94) * bVar6 | (bVar6 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead52) + bVar30;
        pbVar59[3] = (-((byte)((bVar7 < bVar95) * bVar7 | (bVar7 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead53) + bVar31;
        pbVar59[4] = (-((byte)((bVar8 < bVar96) * bVar8 | (bVar8 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead54) + bVar32;
        pbVar59[5] = (-((byte)((bVar9 < bVar97) * bVar9 | (bVar9 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead55) + bVar33;
        pbVar59[6] = (-((byte)((bVar10 < bVar98) * bVar10 | (bVar10 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead56) + bVar34;
        pbVar59[7] = (-((byte)((bVar11 < bVar99) * bVar11 | (bVar11 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead57) + bVar35;
        pbVar59[8] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead58) + bVar36;
        pbVar59[9] = (-((byte)((bVar63 < bVar101) * bVar63 | (bVar63 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead59) + bVar37;
        pbVar59[10] = (-((byte)((bVar65 < bVar102) * bVar65 | (bVar65 >= bVar102) * bVar102) ==
                        bVar102) & UNK_014ead5a) + bVar38;
        pbVar59[0xb] = (-((byte)((bVar67 < bVar103) * bVar67 | (bVar67 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5b) + bVar39;
        pbVar59[0xc] = (-((byte)((bVar69 < bVar104) * bVar69 | (bVar69 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5c) + bVar40;
        pbVar59[0xd] = (-((byte)((bVar71 < bVar105) * bVar71 | (bVar71 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5d) + bVar41;
        pbVar59[0xe] = (-((byte)((bVar73 < bVar106) * bVar73 | (bVar73 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5e) + bVar42;
        pbVar59[0xf] = (-((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5f) + bVar43;
        pbVar58 = pbVar58 + 0x20;
      } while (pbVar47 != pbVar58);
      if (pbVar53 != pbVar47) {
        if (((ulong)pbVar53 & 0x18) == 0) {
          pbVar58 = pbVar47 + (long)pbVar60;
          goto LAB_0cbe07bc;
        }
        goto LAB_0cbe0755;
      }
    }
    pbVar58 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    pbVar58 = pbStack_d8;
    pbVar56 = pbStack_d0;
  }
  pbVar60 = pbVar56 + (long)pbVar58;
  pbVar53 = pbVar58;
  pbVar47 = pbVar56;
  while (((pbVar59 = pbVar60, 0 < (long)pbVar53 &&
          (pbVar47 = (byte *)func_0x0eee2ef0(pbVar47,0x3a,pbVar53), pbVar47 != (byte *)0x0)) &&
         (pbVar59 = pbVar47, *pbVar47 != 0x3a))) {
    pbVar47 = pbVar47 + 1;
    pbVar53 = pbVar60 + -(long)pbVar47;
  }
  pbVar53 = pbVar59 + -(long)pbVar56;
  if (pbVar58 < pbVar59 + -(long)pbVar56) {
    pbVar53 = pbVar58;
  }
  if (pbVar59 == pbVar60) {
    pbVar53 = pbVar58;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar53) {
LAB_0cbe0bd9:
    uVar50 = func_0x04882e30();
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar45 != (long *)0x0) {
      (**(code **)(*plVar45 + 8))(plVar45);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) goto LAB_0cbe0cbf;
    while ((uStack_68 & 1) == 0) {
      func_0x0eee2d70(uVar50);
LAB_0cbe0cbf:
      func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_58,uStack_68 & 0xfffffffffffffffe);
    func_0x0eee2d70(uVar50);
    pcVar5 = (code *)swi(3);
    plVar45 = (long *)(*pcVar5)();
    return plVar45;
  }
  if (pbVar53 < (byte *)0x17) {
    uStack_c8 = (undefined8 *)CONCAT71(uStack_c8._1_7_,(char)pbVar53 * '\x02');
    pbVar60 = (byte *)((long)&uStack_c8 + 1);
    if (pbVar53 != (byte *)0x0) goto LAB_0cbe08c0;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar53 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar53 | 7) + 1;
    }
    pbVar60 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar60 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_c8 = (undefined8 *)(uVar48 | 1);
    uStack_c0 = pbVar53;
    pbStack_b8 = pbVar60;
LAB_0cbe08c0:
    func_0x0eee2ee0(pbVar60,pbVar56,pbVar53);
  }
  pbVar60[(long)pbVar53] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_c8,&uStack_c8);
  if (((ulong)uStack_c8 & 1) != 0) {
    func_0x0412a280(pbStack_b8,(ulong)uStack_c8 & 0xfffffffffffffffe);
  }
  uStack_c8 = (undefined8 *)0x0;
  if (((ulong)uStack_e0 & 1) == 0) {
    pbStack_b0 = pbStack_d0;
    uStack_c0 = uStack_e0;
    pbStack_b8 = pbStack_d8;
  }
  else {
    FUN_0412e5e0(&uStack_c0,pbStack_d0,pbStack_d8);
  }
  uStack_a8 = 0;
  if (((ulong)uStack_c0 & 1) == 0) {
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_0cbe0970;
  }
  else if (pbStack_b8 != (byte *)0x0) {
LAB_0cbe0970:
    pbVar60 = pbStack_b0;
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar60 = (byte *)((long)&uStack_c0 + 1);
    }
    if ((pbVar60 != (byte *)0x0) && (*pbVar60 != 0)) {
      puVar57 = (undefined8 *)0xcbf29ce484222325;
      uVar48 = func_0x0eee2e90(pbVar60);
      if (uVar48 != 0) {
        uVar54 = (ulong)((uint)uVar48 & 7);
        if (7 < uVar48) {
          uVar48 = uVar48 & 0xfffffffffffffff8;
          do {
            puVar57 = (undefined8 *)
                      (((((((((long)puVar57 * 0x100000001b3 ^ (ulong)*pbVar60) * 0x100000001b3 ^
                            (ulong)pbVar60[1]) * 0x100000001b3 ^ (ulong)pbVar60[2]) * 0x100000001b3
                          ^ (ulong)pbVar60[3]) * 0x100000001b3 ^ (ulong)pbVar60[4]) * 0x100000001b3
                        ^ (ulong)pbVar60[5]) * 0x100000001b3 ^ (ulong)pbVar60[6]) * 0x100000001b3 ^
                      (ulong)pbVar60[7]);
            pbVar60 = pbVar60 + 8;
            uVar48 = uVar48 - 8;
          } while (uVar48 != 0);
        }
        if (uVar54 != 0) {
          uVar48 = 0;
          do {
            puVar57 = (undefined8 *)((long)puVar57 * 0x100000001b3 ^ (ulong)pbVar60[uVar48]);
            uVar48 = uVar48 + 1;
          } while (uVar54 != uVar48);
        }
      }
      goto LAB_0cbe0a69;
    }
  }
  puVar57 = (undefined8 *)0x0;
LAB_0cbe0a69:
  uStack_c8 = puVar57;
  puStack_98 = &uStack_c8;
  lVar49 = func_0x05cf8b10(param_1,&uStack_c8,&UNK_01563a4f,&puStack_98,&uStack_e1);
  plVar4 = *(long **)(lVar49 + 0x48);
  *(long **)(lVar49 + 0x48) = plVar45;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_98 = uStack_c8;
  lVar49 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_98);
  if ((*(byte *)(lVar49 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar49 + 0x28),*(ulong *)(lVar49 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar49 + 0x28) = pbStack_b0;
  *(byte **)(lVar49 + 0x18) = uStack_c0;
  *(byte **)(lVar49 + 0x20) = pbStack_b8;
  uStack_c0 = (byte *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar49 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar49 + 0x30) = 0;
  if (((ulong)uStack_e0 & 1) == 0) {
    func_0x0cc46730(auStack_40);
  }
  else {
    func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    func_0x0cc46730(auStack_40);
  }
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(pbStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  return plVar45;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
