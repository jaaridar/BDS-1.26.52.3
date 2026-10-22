/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cb8fe0 (ELF vaddr 0x5bb8fe0)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cb8fe0, 05cb975a] [05cb97bd, 05cb97e0] [05cb97e4, 05cb9819]]
 * Ghidra: FUN_05cb8fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05cb8fe0(long param_1,long param_2,undefined4 param_3,undefined8 param_4,byte param_5,
                   byte param_6,undefined1 *param_7)

{
  long *plVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  long *plVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
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
  byte bVar44;
  long *plVar45;
  long lVar46;
  byte *pbVar47;
  ulong uVar48;
  long lVar49;
  long lVar50;
  undefined8 uVar51;
  byte bVar52;
  byte *pbVar53;
  ulong uVar54;
  byte *pbVar55;
  undefined8 *puVar56;
  byte *pbVar57;
  byte *pbVar58;
  byte *pbVar59;
  bool bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar72;
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
  byte bVar104;
  byte bVar105;
  byte bVar106;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  undefined1 auStack_40 [16];
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_68 = *(ulong *)(param_2 + 8);
    uStack_60 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_68,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_98 = *(undefined8 **)(param_1 + 0x148);
  uStack_90 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar45 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar45 = *plVar45 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_98);
  pbVar59 = uStack_90;
  if (uStack_90 != (byte *)0x0) {
    LOCK();
    pbVar53 = uStack_90 + 8;
    lVar50 = *(long *)pbVar53;
    *(long *)pbVar53 = *(long *)pbVar53 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uStack_90 + 0x10))(uStack_90);
      func_0x0412c2d0(pbVar59);
    }
  }
  lStack_48 = param_1;
  plVar45 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar45 == (long *)0x0) {
    func_0x0eec74c0(0x3b0,0);
  }
  uVar3 = *param_7;
  func_0x0c6c7010(plVar45,&uStack_68,param_3);
  lVar50 = lStack_48;
  *plVar45 = (long)&UNK_0f3ae140;
  *(byte *)(plVar45 + 0x75) = param_5 & 1;
  *(byte *)((long)plVar45 + 0x3a9) = param_6 & 1;
  *(undefined1 *)((long)plVar45 + 0x3aa) = uVar3;
  *(undefined1 *)((long)plVar45 + 0x132) = 3;
  *(undefined4 *)((long)plVar45 + 300) = 0x3f800000;
  *(undefined1 *)((long)plVar45 + 0x136) = 0;
  *(ushort *)((long)plVar45 + 0x133) = *(ushort *)((long)plVar45 + 0x133) & 0xe1ff | 0xc00;
  if (*(long *)(lStack_48 + 0x140) == 0) {
    lVar49 = 0;
    lVar46 = 0;
  }
  else {
    lVar46 = func_0x0412c300();
    lVar49 = 0;
    if (lVar46 != 0) {
      lVar49 = *(long *)(lVar50 + 0x138);
    }
  }
  plVar45[0x73] = lVar49;
  plVar5 = (long *)plVar45[0x74];
  plVar45[0x74] = lVar46;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar49 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  bVar60 = (*(byte *)(plVar45 + 0x1a) & 1) != 0;
  lVar49 = (long)plVar45 + 0xd1;
  if (bVar60) {
    lVar49 = plVar45[0x1c];
  }
  pbVar59 = (byte *)(ulong)(*(byte *)(plVar45 + 0x1a) >> 1);
  if (bVar60) {
    pbVar59 = (byte *)plVar45[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar59) {
    func_0x04882e30();
    goto LAB_05cb9754;
  }
  pbVar53 = (byte *)((long)&uStack_b0 + 1);
  if (pbVar59 < (byte *)0x17) {
    uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,(char)pbVar59 * '\x02');
    if (pbVar59 != (byte *)0x0) goto LAB_05cb9230;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar59 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar59 | 7) + 1;
    }
    pbVar53 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar53 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_b0 = (byte *)(uVar48 | 1);
    pbStack_a8 = pbVar59;
    pbStack_a0 = pbVar53;
LAB_05cb9230:
    func_0x0eee2f00(pbVar53,lVar49,pbVar59);
  }
  pbVar55 = (byte *)((long)&uStack_b0 + 1);
  pbVar53[(long)pbVar59] = 0;
  pbVar57 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  pbVar53 = pbStack_a8;
  pbVar59 = pbStack_a0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbVar53 = pbVar57;
    pbVar59 = pbVar55;
  }
  if (pbVar53 != (byte *)0x0) {
    pbVar57 = pbVar59;
    if (pbVar53 < (byte *)0x8) {
LAB_05cb937c:
      do {
        bVar4 = *pbVar57;
        bVar52 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar52 = bVar4;
        }
        *pbVar57 = bVar52;
        pbVar57 = pbVar57 + 1;
      } while (pbVar57 != pbVar59 + (long)pbVar53);
    }
    else if (pbVar53 < (byte *)0x20) {
      pbVar47 = (byte *)0x0;
LAB_05cb9315:
      pbVar58 = (byte *)((ulong)pbVar53 & 0xfffffffffffffff8);
      pbVar57 = pbVar59 + (long)pbVar58;
      do {
        uVar51 = *(undefined8 *)(pbVar59 + (long)pbVar47);
        bVar61 = (char)uVar51 + DAT_014e9110;
        cVar63 = (char)((ulong)uVar51 >> 8);
        bVar62 = cVar63 + DAT_014e9110._1_1_;
        cVar65 = (char)((ulong)uVar51 >> 0x10);
        bVar64 = cVar65 + DAT_014e9110._2_1_;
        cVar67 = (char)((ulong)uVar51 >> 0x18);
        bVar66 = cVar67 + DAT_014e9110._3_1_;
        cVar69 = (char)((ulong)uVar51 >> 0x20);
        bVar68 = cVar69 + DAT_014e9110._4_1_;
        cVar71 = (char)((ulong)uVar51 >> 0x28);
        bVar70 = cVar71 + DAT_014e9110._5_1_;
        cVar73 = (char)((ulong)uVar51 >> 0x30);
        cVar13 = (char)((ulong)uVar51 >> 0x38);
        bVar72 = cVar73 + DAT_014e9110._6_1_;
        bVar74 = cVar13 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar52 = DAT_014e8cb0._1_1_;
        bVar7 = DAT_014e8cb0._2_1_;
        bVar8 = DAT_014e8cb0._3_1_;
        bVar9 = DAT_014e8cb0._4_1_;
        bVar10 = DAT_014e8cb0._5_1_;
        bVar11 = DAT_014e8cb0._6_1_;
        bVar12 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar59 + (long)pbVar47) =
             CONCAT17((~-((byte)((bVar74 < bVar12) * bVar12 | (bVar74 >= bVar12) * bVar74) == bVar74
                         ) & UNK_014ea367) + cVar13,
                      CONCAT16((~-((byte)((bVar72 < bVar11) * bVar11 | (bVar72 >= bVar11) * bVar72)
                                  == bVar72) & UNK_014ea366) + cVar73,
                               CONCAT15((~-((byte)((bVar70 < bVar10) * bVar10 |
                                                  (bVar70 >= bVar10) * bVar70) == bVar70) &
                                        UNK_014ea365) + cVar71,
                                        CONCAT14((~-((byte)((bVar68 < bVar9) * bVar9 |
                                                           (bVar68 >= bVar9) * bVar68) == bVar68) &
                                                 UNK_014ea364) + cVar69,
                                                 CONCAT13((~-((byte)((bVar66 < bVar8) * bVar8 |
                                                                    (bVar66 >= bVar8) * bVar66) ==
                                                             bVar66) & UNK_014ea363) + cVar67,
                                                          CONCAT12((~-((byte)((bVar64 < bVar7) *
                                                                              bVar7 | (bVar64 >=
                                                                                      bVar7) * 
                                                  bVar64) == bVar64) & UNK_014ea362) + cVar65,
                                                  CONCAT11((~-((byte)((bVar62 < bVar52) * bVar52 |
                                                                     (bVar62 >= bVar52) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar4) * bVar4 |
                                                                     (bVar61 >= bVar4) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar51
                                                          )))))));
        pbVar47 = pbVar47 + 8;
      } while (pbVar58 != pbVar47);
      if (pbVar53 != pbVar58) goto LAB_05cb937c;
    }
    else {
      pbVar47 = (byte *)((ulong)pbVar53 & 0xffffffffffffffe0);
      pbVar57 = (byte *)0x0;
      do {
        pbVar58 = pbVar59 + (long)pbVar57;
        bVar14 = pbVar58[1];
        bVar15 = pbVar58[2];
        bVar16 = pbVar58[3];
        bVar17 = pbVar58[4];
        bVar18 = pbVar58[5];
        bVar19 = pbVar58[6];
        bVar20 = pbVar58[7];
        bVar21 = pbVar58[8];
        bVar22 = pbVar58[9];
        bVar23 = pbVar58[10];
        bVar24 = pbVar58[0xb];
        bVar25 = pbVar58[0xc];
        bVar26 = pbVar58[0xd];
        bVar27 = pbVar58[0xe];
        bVar28 = pbVar58[0xf];
        pbVar2 = pbVar59 + 0x10 + (long)pbVar57;
        bVar29 = *pbVar2;
        bVar30 = pbVar2[1];
        bVar31 = pbVar2[2];
        bVar32 = pbVar2[3];
        bVar33 = pbVar2[4];
        bVar34 = pbVar2[5];
        bVar35 = pbVar2[6];
        bVar36 = pbVar2[7];
        bVar37 = pbVar2[8];
        bVar38 = pbVar2[9];
        bVar39 = pbVar2[10];
        bVar40 = pbVar2[0xb];
        bVar41 = pbVar2[0xc];
        bVar42 = pbVar2[0xd];
        bVar43 = pbVar2[0xe];
        bVar44 = pbVar2[0xf];
        bVar75 = *pbVar58 + DAT_014e86b0;
        bVar76 = bVar14 + DAT_014e86b0._1_1_;
        bVar77 = bVar15 + DAT_014e86b0._2_1_;
        bVar78 = bVar16 + DAT_014e86b0._3_1_;
        bVar79 = bVar17 + DAT_014e86b0._4_1_;
        bVar80 = bVar18 + DAT_014e86b0._5_1_;
        bVar81 = bVar19 + DAT_014e86b0._6_1_;
        bVar82 = bVar20 + DAT_014e86b0._7_1_;
        bVar83 = bVar21 + DAT_014e86b0._8_1_;
        bVar84 = bVar22 + DAT_014e86b0._9_1_;
        bVar85 = bVar23 + DAT_014e86b0._10_1_;
        bVar86 = bVar24 + DAT_014e86b0._11_1_;
        bVar87 = bVar25 + DAT_014e86b0._12_1_;
        bVar88 = bVar26 + DAT_014e86b0._13_1_;
        bVar89 = bVar27 + DAT_014e86b0._14_1_;
        bVar90 = bVar28 + DAT_014e86b0._15_1_;
        bVar91 = bVar29 + DAT_014e86b0;
        bVar92 = bVar30 + DAT_014e86b0._1_1_;
        bVar93 = bVar31 + DAT_014e86b0._2_1_;
        bVar94 = bVar32 + DAT_014e86b0._3_1_;
        bVar95 = bVar33 + DAT_014e86b0._4_1_;
        bVar96 = bVar34 + DAT_014e86b0._5_1_;
        bVar97 = bVar35 + DAT_014e86b0._6_1_;
        bVar98 = bVar36 + DAT_014e86b0._7_1_;
        bVar99 = bVar37 + DAT_014e86b0._8_1_;
        bVar100 = bVar38 + DAT_014e86b0._9_1_;
        bVar101 = bVar39 + DAT_014e86b0._10_1_;
        bVar102 = bVar40 + DAT_014e86b0._11_1_;
        bVar103 = bVar41 + DAT_014e86b0._12_1_;
        bVar104 = bVar42 + DAT_014e86b0._13_1_;
        bVar105 = bVar43 + DAT_014e86b0._14_1_;
        bVar106 = bVar44 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar52 = DAT_014e4170._1_1_;
        bVar7 = DAT_014e4170._2_1_;
        bVar8 = DAT_014e4170._3_1_;
        bVar9 = DAT_014e4170._4_1_;
        bVar10 = DAT_014e4170._5_1_;
        bVar11 = DAT_014e4170._6_1_;
        bVar12 = DAT_014e4170._7_1_;
        bVar61 = DAT_014e4170._8_1_;
        bVar62 = DAT_014e4170._9_1_;
        bVar64 = DAT_014e4170._10_1_;
        bVar66 = DAT_014e4170._11_1_;
        bVar68 = DAT_014e4170._12_1_;
        bVar70 = DAT_014e4170._13_1_;
        bVar72 = DAT_014e4170._14_1_;
        bVar74 = DAT_014e4170._15_1_;
        pbVar2 = pbVar59 + (long)pbVar57;
        *pbVar2 = (-((byte)((bVar4 < bVar75) * bVar4 | (bVar4 >= bVar75) * bVar75) == bVar75) &
                  DAT_014ead50) + *pbVar58;
        pbVar2[1] = (-((byte)((bVar52 < bVar76) * bVar52 | (bVar52 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead51) + bVar14;
        pbVar2[2] = (-((byte)((bVar7 < bVar77) * bVar7 | (bVar7 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead52) + bVar15;
        pbVar2[3] = (-((byte)((bVar8 < bVar78) * bVar8 | (bVar8 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead53) + bVar16;
        pbVar2[4] = (-((byte)((bVar9 < bVar79) * bVar9 | (bVar9 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead54) + bVar17;
        pbVar2[5] = (-((byte)((bVar10 < bVar80) * bVar10 | (bVar10 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead55) + bVar18;
        pbVar2[6] = (-((byte)((bVar11 < bVar81) * bVar11 | (bVar11 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead56) + bVar19;
        pbVar2[7] = (-((byte)((bVar12 < bVar82) * bVar12 | (bVar12 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead57) + bVar20;
        pbVar2[8] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead58) + bVar21;
        pbVar2[9] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead59) + bVar22;
        pbVar2[10] = (-((byte)((bVar64 < bVar85) * bVar64 | (bVar64 >= bVar85) * bVar85) == bVar85)
                     & UNK_014ead5a) + bVar23;
        pbVar2[0xb] = (-((byte)((bVar66 < bVar86) * bVar66 | (bVar66 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5b) + bVar24;
        pbVar2[0xc] = (-((byte)((bVar68 < bVar87) * bVar68 | (bVar68 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5c) + bVar25;
        pbVar2[0xd] = (-((byte)((bVar70 < bVar88) * bVar70 | (bVar70 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5d) + bVar26;
        pbVar2[0xe] = (-((byte)((bVar72 < bVar89) * bVar72 | (bVar72 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5e) + bVar27;
        pbVar2[0xf] = (-((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5f) + bVar28;
        pbVar58 = pbVar59 + 0x10 + (long)pbVar57;
        *pbVar58 = (-((byte)((bVar4 < bVar91) * bVar4 | (bVar4 >= bVar91) * bVar91) == bVar91) &
                   DAT_014ead50) + bVar29;
        pbVar58[1] = (-((byte)((bVar52 < bVar92) * bVar52 | (bVar52 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead51) + bVar30;
        pbVar58[2] = (-((byte)((bVar7 < bVar93) * bVar7 | (bVar7 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead52) + bVar31;
        pbVar58[3] = (-((byte)((bVar8 < bVar94) * bVar8 | (bVar8 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead53) + bVar32;
        pbVar58[4] = (-((byte)((bVar9 < bVar95) * bVar9 | (bVar9 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead54) + bVar33;
        pbVar58[5] = (-((byte)((bVar10 < bVar96) * bVar10 | (bVar10 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead55) + bVar34;
        pbVar58[6] = (-((byte)((bVar11 < bVar97) * bVar11 | (bVar11 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead56) + bVar35;
        pbVar58[7] = (-((byte)((bVar12 < bVar98) * bVar12 | (bVar12 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead57) + bVar36;
        pbVar58[8] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead58) + bVar37;
        pbVar58[9] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead59) + bVar38;
        pbVar58[10] = (-((byte)((bVar64 < bVar101) * bVar64 | (bVar64 >= bVar101) * bVar101) ==
                        bVar101) & UNK_014ead5a) + bVar39;
        pbVar58[0xb] = (-((byte)((bVar66 < bVar102) * bVar66 | (bVar66 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5b) + bVar40;
        pbVar58[0xc] = (-((byte)((bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5c) + bVar41;
        pbVar58[0xd] = (-((byte)((bVar70 < bVar104) * bVar70 | (bVar70 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5d) + bVar42;
        pbVar58[0xe] = (-((byte)((bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5e) + bVar43;
        pbVar58[0xf] = (-((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5f) + bVar44;
        pbVar57 = pbVar57 + 0x20;
      } while (pbVar47 != pbVar57);
      if (pbVar53 != pbVar47) {
        if (((ulong)pbVar53 & 0x18) == 0) {
          pbVar57 = pbVar47 + (long)pbVar59;
          goto LAB_05cb937c;
        }
        goto LAB_05cb9315;
      }
    }
    pbVar57 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  }
  if (((ulong)uStack_b0 & 1) != 0) {
    pbVar57 = pbStack_a8;
    pbVar55 = pbStack_a0;
  }
  pbVar59 = pbVar55 + (long)pbVar57;
  pbVar53 = pbVar57;
  pbVar47 = pbVar55;
  while (((pbVar58 = pbVar59, 0 < (long)pbVar53 &&
          (pbVar47 = (byte *)memchr(pbVar47,0x3a,pbVar53), pbVar47 != (byte *)0x0)) &&
         (pbVar58 = pbVar47, *pbVar47 != 0x3a))) {
    pbVar47 = pbVar47 + 1;
    pbVar53 = pbVar59 + -(long)pbVar47;
  }
  pbVar53 = pbVar58 + -(long)pbVar55;
  if (pbVar57 < pbVar58 + -(long)pbVar55) {
    pbVar53 = pbVar57;
  }
  if (pbVar58 == pbVar59) {
    pbVar53 = pbVar57;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar53) {
LAB_05cb9754:
    uVar51 = func_0x04882e30();
    if (((ulong)uStack_b0 & 1) != 0) {
      func_0x0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
    }
    if (plVar45 != (long *)0x0) {
      (**(code **)(*plVar45 + 8))(plVar45);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_68 & 1) != 0) {
      func_0x0412a280(uStack_58,uStack_68 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar51);
    pcVar6 = (code *)swi(3);
    plVar45 = (long *)(*pcVar6)();
    return plVar45;
  }
  if (pbVar53 < (byte *)0x17) {
    uStack_98 = (undefined8 *)CONCAT71(uStack_98._1_7_,(char)pbVar53 * '\x02');
    pbVar59 = (byte *)((long)&uStack_98 + 1);
    if (pbVar53 != (byte *)0x0) goto LAB_05cb9480;
  }
  else {
    uVar48 = 0x1a;
    if (((ulong)pbVar53 | 7) != 0x17) {
      uVar48 = ((ulong)pbVar53 | 7) + 1;
    }
    pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar48);
    if (pbVar59 == (byte *)0x0) {
      func_0x0eec74c0(uVar48,0);
    }
    uStack_98 = (undefined8 *)(uVar48 | 1);
    uStack_90 = pbVar53;
    pbStack_88 = pbVar59;
LAB_05cb9480:
    func_0x0eee2ee0(pbVar59,pbVar55,pbVar53);
  }
  pbVar59[(long)pbVar53] = 0;
  func_0x05cf8990(lVar50 + 0xe0,&uStack_98,&uStack_98);
  if (((ulong)uStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,(ulong)uStack_98 & 0xfffffffffffffffe);
  }
  uStack_98 = (undefined8 *)0x0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbStack_80 = pbStack_a0;
    uStack_90 = uStack_b0;
    pbStack_88 = pbStack_a8;
  }
  else {
    func_0x0412e5e0(&uStack_90,pbStack_a0,pbStack_a8);
  }
  uStack_78 = 0;
  if (((ulong)uStack_90 & 1) == 0) {
    if ((byte)uStack_90 >> 1 != 0) goto LAB_05cb9530;
  }
  else if (pbStack_88 != (byte *)0x0) {
LAB_05cb9530:
    pbVar59 = pbStack_80;
    if (((ulong)uStack_90 & 1) == 0) {
      pbVar59 = (byte *)((long)&uStack_90 + 1);
    }
    if ((pbVar59 != (byte *)0x0) && (*pbVar59 != 0)) {
      puVar56 = (undefined8 *)0xcbf29ce484222325;
      uVar48 = func_0x0eee2e90(pbVar59);
      if (uVar48 != 0) {
        uVar54 = (ulong)((uint)uVar48 & 7);
        if (7 < uVar48) {
          uVar48 = uVar48 & 0xfffffffffffffff8;
          do {
            puVar56 = (undefined8 *)
                      (((((((((long)puVar56 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                            (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) * 0x100000001b3
                          ^ (ulong)pbVar59[3]) * 0x100000001b3 ^ (ulong)pbVar59[4]) * 0x100000001b3
                        ^ (ulong)pbVar59[5]) * 0x100000001b3 ^ (ulong)pbVar59[6]) * 0x100000001b3 ^
                      (ulong)pbVar59[7]);
            pbVar59 = pbVar59 + 8;
            uVar48 = uVar48 - 8;
          } while (uVar48 != 0);
        }
        if (uVar54 != 0) {
          uVar48 = 0;
          do {
            puVar56 = (undefined8 *)((long)puVar56 * 0x100000001b3 ^ (ulong)pbVar59[uVar48]);
            uVar48 = uVar48 + 1;
          } while (uVar54 != uVar48);
        }
      }
      goto LAB_05cb9629;
    }
  }
  puVar56 = (undefined8 *)0x0;
LAB_05cb9629:
  uStack_98 = puVar56;
  puStack_70 = &uStack_98;
  lVar49 = func_0x05cf8b10(lVar50,&uStack_98,&UNK_01563a4f,&puStack_70,&uStack_b1);
  plVar5 = *(long **)(lVar49 + 0x48);
  *(long **)(lVar49 + 0x48) = plVar45;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puStack_70 = uStack_98;
  lVar50 = func_0x05cf8dc0(lVar50 + 0xf8,&puStack_70);
  if ((*(byte *)(lVar50 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar50 + 0x28),*(ulong *)(lVar50 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar50 + 0x28) = pbStack_80;
  *(byte **)(lVar50 + 0x18) = uStack_90;
  *(byte **)(lVar50 + 0x20) = pbStack_88;
  uStack_90 = (byte *)((ulong)uStack_90 & 0xffffffffffff0000);
  *(undefined8 **)(lVar50 + 0x10) = uStack_98;
  *(undefined8 *)(lVar50 + 0x30) = 0;
  if (((ulong)uStack_b0 & 1) != 0) {
    func_0x0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_68 & 1) != 0) {
    func_0x0412a280(uStack_58,uStack_68 & 0xfffffffffffffffe);
  }
  return plVar45;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
