/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cc2520 (ELF vaddr 0x5bc2520)
 * Label: caller-of-seed
 * Body:  [[05cc2520, 05cc2cc0] [05cc2d02, 05cc2d10] [05cc2d55, 05cc2d81]]
 * Ghidra: FUN_05cc2520
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_05cc2520(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
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
  undefined8 *puVar44;
  long lVar45;
  byte *pbVar46;
  ulong uVar47;
  undefined8 uVar48;
  byte bVar49;
  byte *pbVar50;
  byte *pbVar51;
  ulong uVar52;
  byte *pbVar53;
  undefined8 *puVar54;
  byte *pbVar55;
  byte *pbVar56;
  bool bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
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
  byte bVar103;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar60;
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_88 = *(undefined8 **)(param_1 + 0x148);
  uStack_80 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_88);
  pbVar51 = uStack_80;
  if (uStack_80 != (byte *)0x0) {
    LOCK();
    pbVar46 = uStack_80 + 8;
    lVar45 = *(long *)pbVar46;
    *(long *)pbVar46 = *(long *)pbVar46 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*(long *)uStack_80 + 0x10))(uStack_80);
      func_0x0412c2d0(pbVar51);
    }
  }
  puVar44 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3d0);
  if (puVar44 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x3d0,0);
  }
  func_0x0c6c7010(puVar44,&uStack_58,param_3);
  *puVar44 = &UNK_0f42fc08;
  *(undefined1 (*) [16])(puVar44 + 0x75) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar44 + 0x77) = (undefined1  [16])0x0;
  puVar44[0x79] = 0;
  if (puVar44 + 0x75 != param_5) {
    if (((*(undefined1 (*) [16])(param_5 + 1))[0] & 1) == 0) {
      puVar44[0x78] = param_5[3];
      *(undefined1 (*) [16])(puVar44 + 0x76) = *(undefined1 (*) [16])(param_5 + 1);
    }
    else {
      func_0x04885070((undefined1 (*) [16])(puVar44 + 0x76),param_5[3],param_5[2]);
    }
  }
  puVar44[0x75] = *param_5;
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar48 = 0;
    lVar45 = 0;
  }
  else {
    lVar45 = func_0x0412c300();
    uVar48 = 0;
    if (lVar45 != 0) {
      uVar48 = *(undefined8 *)(param_1 + 0x138);
    }
  }
  puVar44[0x73] = uVar48;
  plVar1 = (long *)puVar44[0x74];
  puVar44[0x74] = lVar45;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar45 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  bVar57 = (*(byte *)(puVar44 + 0x1a) & 1) != 0;
  pbVar51 = (byte *)((long)puVar44 + 0xd1);
  if (bVar57) {
    pbVar51 = (byte *)puVar44[0x1c];
  }
  pbVar46 = (byte *)(ulong)(*(byte *)(puVar44 + 0x1a) >> 1);
  if (bVar57) {
    pbVar46 = (byte *)puVar44[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar46) {
    func_0x04882e30();
    goto LAB_05cc2c91;
  }
  pbVar55 = (byte *)((long)&uStack_a0 + 1);
  if (pbVar46 < (byte *)0x17) {
    uStack_a0 = (byte *)CONCAT71(uStack_a0._1_7_,(char)pbVar46 * '\x02');
    if (pbVar46 != (byte *)0x0) goto LAB_05cc276c;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar46 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar46 | 7) + 1;
    }
    pbVar55 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar55 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_a0 = (byte *)(uVar47 | 1);
    pbStack_98 = pbVar46;
    pbStack_90 = pbVar55;
LAB_05cc276c:
    func_0x0eee2f00(pbVar55,pbVar51,pbVar46);
  }
  pbVar53 = (byte *)((long)&uStack_a0 + 1);
  pbVar55[(long)pbVar46] = 0;
  pbVar55 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  pbVar46 = pbStack_98;
  pbVar51 = pbStack_90;
  if (((ulong)uStack_a0 & 1) == 0) {
    pbVar46 = pbVar55;
    pbVar51 = pbVar53;
  }
  if (pbVar46 != (byte *)0x0) {
    pbVar55 = pbVar51;
    if (pbVar46 < (byte *)0x8) {
LAB_05cc28bc:
      do {
        bVar4 = *pbVar55;
        bVar49 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar49 = bVar4;
        }
        *pbVar55 = bVar49;
        pbVar55 = pbVar55 + 1;
      } while (pbVar55 != pbVar51 + (long)pbVar46);
    }
    else if (pbVar46 < (byte *)0x20) {
      pbVar50 = (byte *)0x0;
LAB_05cc2855:
      pbVar56 = (byte *)((ulong)pbVar46 & 0xfffffffffffffff8);
      pbVar55 = pbVar51 + (long)pbVar56;
      do {
        uVar48 = *(undefined8 *)(pbVar51 + (long)pbVar50);
        bVar58 = (char)uVar48 + DAT_014e9110;
        cVar60 = (char)((ulong)uVar48 >> 8);
        bVar59 = cVar60 + DAT_014e9110._1_1_;
        cVar62 = (char)((ulong)uVar48 >> 0x10);
        bVar61 = cVar62 + DAT_014e9110._2_1_;
        cVar64 = (char)((ulong)uVar48 >> 0x18);
        bVar63 = cVar64 + DAT_014e9110._3_1_;
        cVar66 = (char)((ulong)uVar48 >> 0x20);
        bVar65 = cVar66 + DAT_014e9110._4_1_;
        cVar68 = (char)((ulong)uVar48 >> 0x28);
        bVar67 = cVar68 + DAT_014e9110._5_1_;
        cVar70 = (char)((ulong)uVar48 >> 0x30);
        cVar12 = (char)((ulong)uVar48 >> 0x38);
        bVar69 = cVar70 + DAT_014e9110._6_1_;
        bVar71 = cVar12 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar49 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar51 + (long)pbVar50) =
             CONCAT17((~-((byte)((bVar71 < bVar11) * bVar11 | (bVar71 >= bVar11) * bVar71) == bVar71
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar69 < bVar10) * bVar10 | (bVar69 >= bVar10) * bVar69)
                                  == bVar69) & UNK_014ea366) + cVar70,
                               CONCAT15((~-((byte)((bVar67 < bVar9) * bVar9 |
                                                  (bVar67 >= bVar9) * bVar67) == bVar67) &
                                        UNK_014ea365) + cVar68,
                                        CONCAT14((~-((byte)((bVar65 < bVar8) * bVar8 |
                                                           (bVar65 >= bVar8) * bVar65) == bVar65) &
                                                 UNK_014ea364) + cVar66,
                                                 CONCAT13((~-((byte)((bVar63 < bVar7) * bVar7 |
                                                                    (bVar63 >= bVar7) * bVar63) ==
                                                             bVar63) & UNK_014ea363) + cVar64,
                                                          CONCAT12((~-((byte)((bVar61 < bVar6) *
                                                                              bVar6 | (bVar61 >=
                                                                                      bVar6) * 
                                                  bVar61) == bVar61) & UNK_014ea362) + cVar62,
                                                  CONCAT11((~-((byte)((bVar59 < bVar49) * bVar49 |
                                                                     (bVar59 >= bVar49) * bVar59) ==
                                                              bVar59) & UNK_014ea361) + cVar60,
                                                           (~-((byte)((bVar58 < bVar4) * bVar4 |
                                                                     (bVar58 >= bVar4) * bVar58) ==
                                                              bVar58) & DAT_014ea360) + (char)uVar48
                                                          )))))));
        pbVar50 = pbVar50 + 8;
      } while (pbVar56 != pbVar50);
      if (pbVar46 != pbVar56) goto LAB_05cc28bc;
    }
    else {
      pbVar50 = (byte *)((ulong)pbVar46 & 0xffffffffffffffe0);
      pbVar55 = (byte *)0x0;
      do {
        pbVar56 = pbVar51 + (long)pbVar55;
        bVar13 = pbVar56[1];
        bVar14 = pbVar56[2];
        bVar15 = pbVar56[3];
        bVar16 = pbVar56[4];
        bVar17 = pbVar56[5];
        bVar18 = pbVar56[6];
        bVar19 = pbVar56[7];
        bVar20 = pbVar56[8];
        bVar21 = pbVar56[9];
        bVar22 = pbVar56[10];
        bVar23 = pbVar56[0xb];
        bVar24 = pbVar56[0xc];
        bVar25 = pbVar56[0xd];
        bVar26 = pbVar56[0xe];
        bVar27 = pbVar56[0xf];
        pbVar3 = pbVar51 + 0x10 + (long)pbVar55;
        bVar28 = *pbVar3;
        bVar29 = pbVar3[1];
        bVar30 = pbVar3[2];
        bVar31 = pbVar3[3];
        bVar32 = pbVar3[4];
        bVar33 = pbVar3[5];
        bVar34 = pbVar3[6];
        bVar35 = pbVar3[7];
        bVar36 = pbVar3[8];
        bVar37 = pbVar3[9];
        bVar38 = pbVar3[10];
        bVar39 = pbVar3[0xb];
        bVar40 = pbVar3[0xc];
        bVar41 = pbVar3[0xd];
        bVar42 = pbVar3[0xe];
        bVar43 = pbVar3[0xf];
        bVar72 = *pbVar56 + DAT_014e86b0;
        bVar73 = bVar13 + DAT_014e86b0._1_1_;
        bVar74 = bVar14 + DAT_014e86b0._2_1_;
        bVar75 = bVar15 + DAT_014e86b0._3_1_;
        bVar76 = bVar16 + DAT_014e86b0._4_1_;
        bVar77 = bVar17 + DAT_014e86b0._5_1_;
        bVar78 = bVar18 + DAT_014e86b0._6_1_;
        bVar79 = bVar19 + DAT_014e86b0._7_1_;
        bVar80 = bVar20 + DAT_014e86b0._8_1_;
        bVar81 = bVar21 + DAT_014e86b0._9_1_;
        bVar82 = bVar22 + DAT_014e86b0._10_1_;
        bVar83 = bVar23 + DAT_014e86b0._11_1_;
        bVar84 = bVar24 + DAT_014e86b0._12_1_;
        bVar85 = bVar25 + DAT_014e86b0._13_1_;
        bVar86 = bVar26 + DAT_014e86b0._14_1_;
        bVar87 = bVar27 + DAT_014e86b0._15_1_;
        bVar88 = bVar28 + DAT_014e86b0;
        bVar89 = bVar29 + DAT_014e86b0._1_1_;
        bVar90 = bVar30 + DAT_014e86b0._2_1_;
        bVar91 = bVar31 + DAT_014e86b0._3_1_;
        bVar92 = bVar32 + DAT_014e86b0._4_1_;
        bVar93 = bVar33 + DAT_014e86b0._5_1_;
        bVar94 = bVar34 + DAT_014e86b0._6_1_;
        bVar95 = bVar35 + DAT_014e86b0._7_1_;
        bVar96 = bVar36 + DAT_014e86b0._8_1_;
        bVar97 = bVar37 + DAT_014e86b0._9_1_;
        bVar98 = bVar38 + DAT_014e86b0._10_1_;
        bVar99 = bVar39 + DAT_014e86b0._11_1_;
        bVar100 = bVar40 + DAT_014e86b0._12_1_;
        bVar101 = bVar41 + DAT_014e86b0._13_1_;
        bVar102 = bVar42 + DAT_014e86b0._14_1_;
        bVar103 = bVar43 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar49 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar58 = DAT_014e4170._8_1_;
        bVar59 = DAT_014e4170._9_1_;
        bVar61 = DAT_014e4170._10_1_;
        bVar63 = DAT_014e4170._11_1_;
        bVar65 = DAT_014e4170._12_1_;
        bVar67 = DAT_014e4170._13_1_;
        bVar69 = DAT_014e4170._14_1_;
        bVar71 = DAT_014e4170._15_1_;
        pbVar3 = pbVar51 + (long)pbVar55;
        *pbVar3 = (-((byte)((bVar4 < bVar72) * bVar4 | (bVar4 >= bVar72) * bVar72) == bVar72) &
                  DAT_014ead50) + *pbVar56;
        pbVar3[1] = (-((byte)((bVar49 < bVar73) * bVar49 | (bVar49 >= bVar73) * bVar73) == bVar73) &
                    UNK_014ead51) + bVar13;
        pbVar3[2] = (-((byte)((bVar6 < bVar74) * bVar6 | (bVar6 >= bVar74) * bVar74) == bVar74) &
                    UNK_014ead52) + bVar14;
        pbVar3[3] = (-((byte)((bVar7 < bVar75) * bVar7 | (bVar7 >= bVar75) * bVar75) == bVar75) &
                    UNK_014ead53) + bVar15;
        pbVar3[4] = (-((byte)((bVar8 < bVar76) * bVar8 | (bVar8 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead54) + bVar16;
        pbVar3[5] = (-((byte)((bVar9 < bVar77) * bVar9 | (bVar9 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead55) + bVar17;
        pbVar3[6] = (-((byte)((bVar10 < bVar78) * bVar10 | (bVar10 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead56) + bVar18;
        pbVar3[7] = (-((byte)((bVar11 < bVar79) * bVar11 | (bVar11 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead57) + bVar19;
        pbVar3[8] = (-((byte)((bVar58 < bVar80) * bVar58 | (bVar58 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead58) + bVar20;
        pbVar3[9] = (-((byte)((bVar59 < bVar81) * bVar59 | (bVar59 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead59) + bVar21;
        pbVar3[10] = (-((byte)((bVar61 < bVar82) * bVar61 | (bVar61 >= bVar82) * bVar82) == bVar82)
                     & UNK_014ead5a) + bVar22;
        pbVar3[0xb] = (-((byte)((bVar63 < bVar83) * bVar63 | (bVar63 >= bVar83) * bVar83) == bVar83)
                      & UNK_014ead5b) + bVar23;
        pbVar3[0xc] = (-((byte)((bVar65 < bVar84) * bVar65 | (bVar65 >= bVar84) * bVar84) == bVar84)
                      & UNK_014ead5c) + bVar24;
        pbVar3[0xd] = (-((byte)((bVar67 < bVar85) * bVar67 | (bVar67 >= bVar85) * bVar85) == bVar85)
                      & UNK_014ead5d) + bVar25;
        pbVar3[0xe] = (-((byte)((bVar69 < bVar86) * bVar69 | (bVar69 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5e) + bVar26;
        pbVar3[0xf] = (-((byte)((bVar71 < bVar87) * bVar71 | (bVar71 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5f) + bVar27;
        pbVar56 = pbVar51 + 0x10 + (long)pbVar55;
        *pbVar56 = (-((byte)((bVar4 < bVar88) * bVar4 | (bVar4 >= bVar88) * bVar88) == bVar88) &
                   DAT_014ead50) + bVar28;
        pbVar56[1] = (-((byte)((bVar49 < bVar89) * bVar49 | (bVar49 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead51) + bVar29;
        pbVar56[2] = (-((byte)((bVar6 < bVar90) * bVar6 | (bVar6 >= bVar90) * bVar90) == bVar90) &
                     UNK_014ead52) + bVar30;
        pbVar56[3] = (-((byte)((bVar7 < bVar91) * bVar7 | (bVar7 >= bVar91) * bVar91) == bVar91) &
                     UNK_014ead53) + bVar31;
        pbVar56[4] = (-((byte)((bVar8 < bVar92) * bVar8 | (bVar8 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead54) + bVar32;
        pbVar56[5] = (-((byte)((bVar9 < bVar93) * bVar9 | (bVar9 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead55) + bVar33;
        pbVar56[6] = (-((byte)((bVar10 < bVar94) * bVar10 | (bVar10 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead56) + bVar34;
        pbVar56[7] = (-((byte)((bVar11 < bVar95) * bVar11 | (bVar11 >= bVar95) * bVar95) == bVar95)
                     & UNK_014ead57) + bVar35;
        pbVar56[8] = (-((byte)((bVar58 < bVar96) * bVar58 | (bVar58 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead58) + bVar36;
        pbVar56[9] = (-((byte)((bVar59 < bVar97) * bVar59 | (bVar59 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead59) + bVar37;
        pbVar56[10] = (-((byte)((bVar61 < bVar98) * bVar61 | (bVar61 >= bVar98) * bVar98) == bVar98)
                      & UNK_014ead5a) + bVar38;
        pbVar56[0xb] = (-((byte)((bVar63 < bVar99) * bVar63 | (bVar63 >= bVar99) * bVar99) == bVar99
                         ) & UNK_014ead5b) + bVar39;
        pbVar56[0xc] = (-((byte)((bVar65 < bVar100) * bVar65 | (bVar65 >= bVar100) * bVar100) ==
                         bVar100) & UNK_014ead5c) + bVar40;
        pbVar56[0xd] = (-((byte)((bVar67 < bVar101) * bVar67 | (bVar67 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5d) + bVar41;
        pbVar56[0xe] = (-((byte)((bVar69 < bVar102) * bVar69 | (bVar69 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5e) + bVar42;
        pbVar56[0xf] = (-((byte)((bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5f) + bVar43;
        pbVar55 = pbVar55 + 0x20;
      } while (pbVar50 != pbVar55);
      if (pbVar46 != pbVar50) {
        if (((ulong)pbVar46 & 0x18) == 0) {
          pbVar55 = pbVar50 + (long)pbVar51;
          goto LAB_05cc28bc;
        }
        goto LAB_05cc2855;
      }
    }
    pbVar55 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  }
  if (((ulong)uStack_a0 & 1) != 0) {
    pbVar55 = pbStack_98;
    pbVar53 = pbStack_90;
  }
  pbVar46 = pbVar53 + (long)pbVar55;
  pbVar51 = pbVar55;
  pbVar50 = pbVar53;
  while (((pbVar56 = pbVar46, 0 < (long)pbVar51 &&
          (pbVar50 = (byte *)func_0x0eee2ef0(pbVar50,0x3a,pbVar51), pbVar50 != (byte *)0x0)) &&
         (pbVar56 = pbVar50, *pbVar50 != 0x3a))) {
    pbVar50 = pbVar50 + 1;
    pbVar51 = pbVar46 + -(long)pbVar50;
  }
  pbVar51 = pbVar56 + -(long)pbVar53;
  if (pbVar55 < pbVar56 + -(long)pbVar53) {
    pbVar51 = pbVar55;
  }
  if (pbVar56 == pbVar46) {
    pbVar51 = pbVar55;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar51) {
LAB_05cc2c91:
    uVar48 = func_0x04882e30();
    if ((*pbVar51 & 1) != 0) {
      func_0x0412a280(puVar44[0x78],puVar44[0x76] & 0xfffffffffffffffe);
    }
    func_0x0c6e1d20(puVar44);
    func_0x0412a280(puVar44,0x3d0);
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar48);
    pcVar5 = (code *)swi(3);
    puVar44 = (undefined8 *)(*pcVar5)();
    return puVar44;
  }
  if (pbVar51 < (byte *)0x17) {
    uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,(char)pbVar51 * '\x02');
    pbVar46 = (byte *)((long)&uStack_88 + 1);
    if (pbVar51 != (byte *)0x0) goto LAB_05cc29c0;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar51 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar51 | 7) + 1;
    }
    pbVar46 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar46 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_88 = (undefined8 *)(uVar47 | 1);
    uStack_80 = pbVar51;
    pbStack_78 = pbVar46;
LAB_05cc29c0:
    func_0x0eee2ee0(pbVar46,pbVar53,pbVar51);
  }
  pbVar46[(long)pbVar51] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_88,&uStack_88);
  if (((ulong)uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,(ulong)uStack_88 & 0xfffffffffffffffe);
  }
  uStack_88 = (undefined8 *)0x0;
  if (((ulong)uStack_a0 & 1) == 0) {
    pbStack_70 = pbStack_90;
    uStack_80 = uStack_a0;
    pbStack_78 = pbStack_98;
  }
  else {
    func_0x0412e5e0(&uStack_80,pbStack_90,pbStack_98);
  }
  uStack_68 = 0;
  if (((ulong)uStack_80 & 1) == 0) {
    if ((byte)uStack_80 >> 1 != 0) goto LAB_05cc2a70;
  }
  else if (pbStack_78 != (byte *)0x0) {
LAB_05cc2a70:
    pbVar51 = pbStack_70;
    if (((ulong)uStack_80 & 1) == 0) {
      pbVar51 = (byte *)((long)&uStack_80 + 1);
    }
    if ((pbVar51 != (byte *)0x0) && (*pbVar51 != 0)) {
      puVar54 = (undefined8 *)0xcbf29ce484222325;
      uVar47 = strlen(pbVar51);
      if (uVar47 != 0) {
        uVar52 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            puVar54 = (undefined8 *)
                      (((((((((long)puVar54 * 0x100000001b3 ^ (ulong)*pbVar51) * 0x100000001b3 ^
                            (ulong)pbVar51[1]) * 0x100000001b3 ^ (ulong)pbVar51[2]) * 0x100000001b3
                          ^ (ulong)pbVar51[3]) * 0x100000001b3 ^ (ulong)pbVar51[4]) * 0x100000001b3
                        ^ (ulong)pbVar51[5]) * 0x100000001b3 ^ (ulong)pbVar51[6]) * 0x100000001b3 ^
                      (ulong)pbVar51[7]);
            pbVar51 = pbVar51 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        if (uVar52 != 0) {
          uVar47 = 0;
          do {
            puVar54 = (undefined8 *)((long)puVar54 * 0x100000001b3 ^ (ulong)pbVar51[uVar47]);
            uVar47 = uVar47 + 1;
          } while (uVar52 != uVar47);
        }
      }
      goto LAB_05cc2b69;
    }
  }
  puVar54 = (undefined8 *)0x0;
LAB_05cc2b69:
  uStack_88 = puVar54;
  puStack_60 = &uStack_88;
  lVar45 = func_0x05cf8b10(param_1,&uStack_88,&UNK_01563a4f,&puStack_60,&uStack_a1);
  plVar1 = *(long **)(lVar45 + 0x48);
  *(undefined8 **)(lVar45 + 0x48) = puVar44;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_60 = uStack_88;
  lVar45 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_60);
  if ((*(byte *)(lVar45 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar45 + 0x28),*(ulong *)(lVar45 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar45 + 0x28) = pbStack_70;
  *(byte **)(lVar45 + 0x18) = uStack_80;
  *(byte **)(lVar45 + 0x20) = pbStack_78;
  uStack_80 = (byte *)((ulong)uStack_80 & 0xffffffffffff0000);
  *(undefined8 **)(lVar45 + 0x10) = uStack_88;
  *(undefined8 *)(lVar45 + 0x30) = 0;
  if (((ulong)uStack_a0 & 1) != 0) {
    func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return puVar44;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
