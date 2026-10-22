/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cdcb10 (ELF vaddr 0x5bdcb10)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cdcb10, 05cdd277] [05cdd2da, 05cdd2fd] [05cdd301, 05cdd336]]
 * Ghidra: FUN_05cdcb10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05cdcb10(long param_1,long param_2,undefined4 param_3,undefined8 *param_4)

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
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  long *plVar46;
  long lVar47;
  byte *pbVar48;
  ulong uVar49;
  long lVar50;
  undefined8 uVar51;
  byte bVar52;
  byte *pbVar53;
  ulong uVar54;
  byte *pbVar55;
  ulong uVar56;
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
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte bStack_88;
  undefined7 uStack_87;
  byte bStack_80;
  byte bStack_7f;
  undefined6 uStack_7e;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_58 = *(ulong *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&uStack_58,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uVar51 = *(undefined8 *)(param_1 + 0x150);
  bStack_88 = (byte)*(undefined8 *)(param_1 + 0x148);
  uStack_87 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x148) >> 8);
  bStack_80 = (byte)uVar51;
  bStack_7f = (byte)((ulong)uVar51 >> 8);
  uStack_7e = (undefined6)((ulong)uVar51 >> 0x10);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar46 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar46 = *plVar46 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&bStack_88);
  plVar46 = (long *)CONCAT62(uStack_7e,CONCAT11(bStack_7f,bStack_80));
  if (plVar46 != (long *)0x0) {
    LOCK();
    plVar4 = plVar46 + 1;
    lVar50 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*plVar46 + 0x10))(plVar46);
      func_0x0412c2d0(plVar46);
    }
  }
  plVar46 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3d0);
  if (plVar46 == (long *)0x0) {
    func_0x0eec74c0(0x3d0,0);
  }
  uVar51 = param_4[1];
  pbStack_78 = (byte *)param_4[2];
  pbStack_70 = (byte *)param_4[3];
  bStack_88 = (byte)*param_4;
  uStack_87 = (undefined7)((ulong)*param_4 >> 8);
  bStack_80 = (byte)uVar51;
  bStack_7f = (byte)((ulong)uVar51 >> 8);
  uStack_7e = (undefined6)((ulong)uVar51 >> 0x10);
  func_0x0c6c7010(plVar46,&uStack_58,param_3);
  *plVar46 = (long)&UNK_0f430af0;
  auVar44._1_7_ = uStack_87;
  auVar44[0] = bStack_88;
  auVar44[8] = bStack_80;
  auVar44[9] = bStack_7f;
  auVar44._10_6_ = uStack_7e;
  auVar45._8_8_ = pbStack_70;
  auVar45._0_8_ = pbStack_78;
  *(undefined1 (*) [16])(plVar46 + 0x75) = auVar44;
  *(undefined1 (*) [16])(plVar46 + 0x77) = auVar45;
  *(undefined1 *)(plVar46 + 0x79) = 1;
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar50 = 0;
    lVar47 = 0;
  }
  else {
    lVar47 = func_0x0412c300();
    lVar50 = 0;
    if (lVar47 != 0) {
      lVar50 = *(long *)(param_1 + 0x138);
    }
  }
  plVar46[0x73] = lVar50;
  plVar4 = (long *)plVar46[0x74];
  plVar46[0x74] = lVar47;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar50 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
    }
  }
  bVar60 = (*(byte *)(plVar46 + 0x1a) & 1) != 0;
  lVar50 = (long)plVar46 + 0xd1;
  if (bVar60) {
    lVar50 = plVar46[0x1c];
  }
  pbVar59 = (byte *)(ulong)(*(byte *)(plVar46 + 0x1a) >> 1);
  if (bVar60) {
    pbVar59 = (byte *)plVar46[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar59) {
    func_0x04882e30();
    goto LAB_05cdd271;
  }
  pbVar53 = (byte *)((long)&uStack_a0 + 1);
  if (pbVar59 < (byte *)0x17) {
    uStack_a0 = CONCAT71(uStack_a0._1_7_,(char)pbVar59 * '\x02');
    if (pbVar59 != (byte *)0x0) goto LAB_05cdcd4a;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar59 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar59 | 7) + 1;
    }
    pbVar53 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar53 == (byte *)0x0) {
      func_0x0eec74c0(uVar49,0);
    }
    uStack_a0 = uVar49 | 1;
    pbStack_98 = pbVar59;
    pbStack_90 = pbVar53;
LAB_05cdcd4a:
    func_0x0eee2f00(pbVar53,lVar50,pbVar59);
  }
  pbVar55 = (byte *)((long)&uStack_a0 + 1);
  pbVar53[(long)pbVar59] = 0;
  pbVar57 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  pbVar53 = pbStack_98;
  pbVar59 = pbStack_90;
  if ((uStack_a0 & 1) == 0) {
    pbVar53 = pbVar57;
    pbVar59 = pbVar55;
  }
  if (pbVar53 != (byte *)0x0) {
    pbVar57 = pbVar59;
    if (pbVar53 < (byte *)0x8) {
LAB_05cdce9c:
      do {
        bVar3 = *pbVar57;
        bVar52 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar52 = bVar3;
        }
        *pbVar57 = bVar52;
        pbVar57 = pbVar57 + 1;
      } while (pbVar57 != pbVar59 + (long)pbVar53);
    }
    else if (pbVar53 < (byte *)0x20) {
      pbVar48 = (byte *)0x0;
LAB_05cdce35:
      pbVar58 = (byte *)((ulong)pbVar53 & 0xfffffffffffffff8);
      pbVar57 = pbVar59 + (long)pbVar58;
      do {
        uVar51 = *(undefined8 *)(pbVar59 + (long)pbVar48);
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
        cVar12 = (char)((ulong)uVar51 >> 0x38);
        bVar72 = cVar73 + DAT_014e9110._6_1_;
        bVar74 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar52 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar59 + (long)pbVar48) =
             CONCAT17((~-((byte)((bVar74 < bVar11) * bVar11 | (bVar74 >= bVar11) * bVar74) == bVar74
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar72 < bVar10) * bVar10 | (bVar72 >= bVar10) * bVar72)
                                  == bVar72) & UNK_014ea366) + cVar73,
                               CONCAT15((~-((byte)((bVar70 < bVar9) * bVar9 |
                                                  (bVar70 >= bVar9) * bVar70) == bVar70) &
                                        UNK_014ea365) + cVar71,
                                        CONCAT14((~-((byte)((bVar68 < bVar8) * bVar8 |
                                                           (bVar68 >= bVar8) * bVar68) == bVar68) &
                                                 UNK_014ea364) + cVar69,
                                                 CONCAT13((~-((byte)((bVar66 < bVar7) * bVar7 |
                                                                    (bVar66 >= bVar7) * bVar66) ==
                                                             bVar66) & UNK_014ea363) + cVar67,
                                                          CONCAT12((~-((byte)((bVar64 < bVar6) *
                                                                              bVar6 | (bVar64 >=
                                                                                      bVar6) * 
                                                  bVar64) == bVar64) & UNK_014ea362) + cVar65,
                                                  CONCAT11((~-((byte)((bVar62 < bVar52) * bVar52 |
                                                                     (bVar62 >= bVar52) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar3) * bVar3 |
                                                                     (bVar61 >= bVar3) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar51
                                                          )))))));
        pbVar48 = pbVar48 + 8;
      } while (pbVar58 != pbVar48);
      if (pbVar53 != pbVar58) goto LAB_05cdce9c;
    }
    else {
      pbVar48 = (byte *)((ulong)pbVar53 & 0xffffffffffffffe0);
      pbVar57 = (byte *)0x0;
      do {
        pbVar58 = pbVar59 + (long)pbVar57;
        bVar13 = pbVar58[1];
        bVar14 = pbVar58[2];
        bVar15 = pbVar58[3];
        bVar16 = pbVar58[4];
        bVar17 = pbVar58[5];
        bVar18 = pbVar58[6];
        bVar19 = pbVar58[7];
        bVar20 = pbVar58[8];
        bVar21 = pbVar58[9];
        bVar22 = pbVar58[10];
        bVar23 = pbVar58[0xb];
        bVar24 = pbVar58[0xc];
        bVar25 = pbVar58[0xd];
        bVar26 = pbVar58[0xe];
        bVar27 = pbVar58[0xf];
        pbVar2 = pbVar59 + 0x10 + (long)pbVar57;
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
        bVar75 = *pbVar58 + DAT_014e86b0;
        bVar76 = bVar13 + DAT_014e86b0._1_1_;
        bVar77 = bVar14 + DAT_014e86b0._2_1_;
        bVar78 = bVar15 + DAT_014e86b0._3_1_;
        bVar79 = bVar16 + DAT_014e86b0._4_1_;
        bVar80 = bVar17 + DAT_014e86b0._5_1_;
        bVar81 = bVar18 + DAT_014e86b0._6_1_;
        bVar82 = bVar19 + DAT_014e86b0._7_1_;
        bVar83 = bVar20 + DAT_014e86b0._8_1_;
        bVar84 = bVar21 + DAT_014e86b0._9_1_;
        bVar85 = bVar22 + DAT_014e86b0._10_1_;
        bVar86 = bVar23 + DAT_014e86b0._11_1_;
        bVar87 = bVar24 + DAT_014e86b0._12_1_;
        bVar88 = bVar25 + DAT_014e86b0._13_1_;
        bVar89 = bVar26 + DAT_014e86b0._14_1_;
        bVar90 = bVar27 + DAT_014e86b0._15_1_;
        bVar91 = bVar28 + DAT_014e86b0;
        bVar92 = bVar29 + DAT_014e86b0._1_1_;
        bVar93 = bVar30 + DAT_014e86b0._2_1_;
        bVar94 = bVar31 + DAT_014e86b0._3_1_;
        bVar95 = bVar32 + DAT_014e86b0._4_1_;
        bVar96 = bVar33 + DAT_014e86b0._5_1_;
        bVar97 = bVar34 + DAT_014e86b0._6_1_;
        bVar98 = bVar35 + DAT_014e86b0._7_1_;
        bVar99 = bVar36 + DAT_014e86b0._8_1_;
        bVar100 = bVar37 + DAT_014e86b0._9_1_;
        bVar101 = bVar38 + DAT_014e86b0._10_1_;
        bVar102 = bVar39 + DAT_014e86b0._11_1_;
        bVar103 = bVar40 + DAT_014e86b0._12_1_;
        bVar104 = bVar41 + DAT_014e86b0._13_1_;
        bVar105 = bVar42 + DAT_014e86b0._14_1_;
        bVar106 = bVar43 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar52 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar61 = DAT_014e4170._8_1_;
        bVar62 = DAT_014e4170._9_1_;
        bVar64 = DAT_014e4170._10_1_;
        bVar66 = DAT_014e4170._11_1_;
        bVar68 = DAT_014e4170._12_1_;
        bVar70 = DAT_014e4170._13_1_;
        bVar72 = DAT_014e4170._14_1_;
        bVar74 = DAT_014e4170._15_1_;
        pbVar2 = pbVar59 + (long)pbVar57;
        *pbVar2 = (-((byte)((bVar3 < bVar75) * bVar3 | (bVar3 >= bVar75) * bVar75) == bVar75) &
                  DAT_014ead50) + *pbVar58;
        pbVar2[1] = (-((byte)((bVar52 < bVar76) * bVar52 | (bVar52 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead51) + bVar13;
        pbVar2[2] = (-((byte)((bVar6 < bVar77) * bVar6 | (bVar6 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead52) + bVar14;
        pbVar2[3] = (-((byte)((bVar7 < bVar78) * bVar7 | (bVar7 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead53) + bVar15;
        pbVar2[4] = (-((byte)((bVar8 < bVar79) * bVar8 | (bVar8 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead54) + bVar16;
        pbVar2[5] = (-((byte)((bVar9 < bVar80) * bVar9 | (bVar9 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead55) + bVar17;
        pbVar2[6] = (-((byte)((bVar10 < bVar81) * bVar10 | (bVar10 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead56) + bVar18;
        pbVar2[7] = (-((byte)((bVar11 < bVar82) * bVar11 | (bVar11 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead57) + bVar19;
        pbVar2[8] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead58) + bVar20;
        pbVar2[9] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead59) + bVar21;
        pbVar2[10] = (-((byte)((bVar64 < bVar85) * bVar64 | (bVar64 >= bVar85) * bVar85) == bVar85)
                     & UNK_014ead5a) + bVar22;
        pbVar2[0xb] = (-((byte)((bVar66 < bVar86) * bVar66 | (bVar66 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5b) + bVar23;
        pbVar2[0xc] = (-((byte)((bVar68 < bVar87) * bVar68 | (bVar68 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5c) + bVar24;
        pbVar2[0xd] = (-((byte)((bVar70 < bVar88) * bVar70 | (bVar70 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5d) + bVar25;
        pbVar2[0xe] = (-((byte)((bVar72 < bVar89) * bVar72 | (bVar72 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5e) + bVar26;
        pbVar2[0xf] = (-((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5f) + bVar27;
        pbVar58 = pbVar59 + 0x10 + (long)pbVar57;
        *pbVar58 = (-((byte)((bVar3 < bVar91) * bVar3 | (bVar3 >= bVar91) * bVar91) == bVar91) &
                   DAT_014ead50) + bVar28;
        pbVar58[1] = (-((byte)((bVar52 < bVar92) * bVar52 | (bVar52 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead51) + bVar29;
        pbVar58[2] = (-((byte)((bVar6 < bVar93) * bVar6 | (bVar6 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead52) + bVar30;
        pbVar58[3] = (-((byte)((bVar7 < bVar94) * bVar7 | (bVar7 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead53) + bVar31;
        pbVar58[4] = (-((byte)((bVar8 < bVar95) * bVar8 | (bVar8 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead54) + bVar32;
        pbVar58[5] = (-((byte)((bVar9 < bVar96) * bVar9 | (bVar9 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead55) + bVar33;
        pbVar58[6] = (-((byte)((bVar10 < bVar97) * bVar10 | (bVar10 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead56) + bVar34;
        pbVar58[7] = (-((byte)((bVar11 < bVar98) * bVar11 | (bVar11 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead57) + bVar35;
        pbVar58[8] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead58) + bVar36;
        pbVar58[9] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead59) + bVar37;
        pbVar58[10] = (-((byte)((bVar64 < bVar101) * bVar64 | (bVar64 >= bVar101) * bVar101) ==
                        bVar101) & UNK_014ead5a) + bVar38;
        pbVar58[0xb] = (-((byte)((bVar66 < bVar102) * bVar66 | (bVar66 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5b) + bVar39;
        pbVar58[0xc] = (-((byte)((bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5c) + bVar40;
        pbVar58[0xd] = (-((byte)((bVar70 < bVar104) * bVar70 | (bVar70 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5d) + bVar41;
        pbVar58[0xe] = (-((byte)((bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5e) + bVar42;
        pbVar58[0xf] = (-((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5f) + bVar43;
        pbVar57 = pbVar57 + 0x20;
      } while (pbVar48 != pbVar57);
      if (pbVar53 != pbVar48) {
        if (((ulong)pbVar53 & 0x18) == 0) {
          pbVar57 = pbVar48 + (long)pbVar59;
          goto LAB_05cdce9c;
        }
        goto LAB_05cdce35;
      }
    }
    pbVar57 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  }
  if ((uStack_a0 & 1) != 0) {
    pbVar57 = pbStack_98;
    pbVar55 = pbStack_90;
  }
  pbVar59 = pbVar55 + (long)pbVar57;
  pbVar53 = pbVar57;
  pbVar48 = pbVar55;
  while (((pbVar58 = pbVar59, 0 < (long)pbVar53 &&
          (pbVar48 = (byte *)memchr(pbVar48,0x3a,pbVar53), pbVar48 != (byte *)0x0)) &&
         (pbVar58 = pbVar48, *pbVar48 != 0x3a))) {
    pbVar48 = pbVar48 + 1;
    pbVar53 = pbVar59 + -(long)pbVar48;
  }
  pbVar53 = pbVar58 + -(long)pbVar55;
  if (pbVar57 < pbVar58 + -(long)pbVar55) {
    pbVar53 = pbVar57;
  }
  if (pbVar58 == pbVar59) {
    pbVar53 = pbVar57;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar53) {
LAB_05cdd271:
    uVar51 = func_0x04882e30();
    if ((uStack_a0 & 1) != 0) {
      func_0x0412a280(pbStack_90,uStack_a0 & 0xfffffffffffffffe);
    }
    if (plVar46 != (long *)0x0) {
      (**(code **)(*plVar46 + 8))(plVar46);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar51);
    pcVar5 = (code *)swi(3);
    plVar46 = (long *)(*pcVar5)();
    return plVar46;
  }
  if (pbVar53 < (byte *)0x17) {
    bStack_88 = (byte)pbVar53 * '\x02';
    pbVar59 = (byte *)&uStack_87;
    if (pbVar53 != (byte *)0x0) goto LAB_05cdcfa0;
  }
  else {
    lVar50 = 0x1a;
    if (((ulong)pbVar53 | 7) != 0x17) {
      lVar50 = ((ulong)pbVar53 | 7) + 1;
    }
    pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar50);
    if (pbVar59 == (byte *)0x0) {
      func_0x0eec74c0(lVar50,0);
    }
    bStack_88 = (byte)lVar50 | 1;
    uStack_87 = (undefined7)((ulong)lVar50 >> 8);
    bStack_7f = (byte)((ulong)pbVar53 >> 8);
    uStack_7e = (undefined6)((ulong)pbVar53 >> 0x10);
    bStack_80 = (byte)pbVar53;
    pbStack_78 = pbVar59;
LAB_05cdcfa0:
    func_0x0eee2ee0(pbVar59,pbVar55,pbVar53);
  }
  pbVar59[(long)pbVar53] = 0;
  func_0x05cf8990(param_1 + 0xe0,&bStack_88,&bStack_88);
  if ((bStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,CONCAT71(uStack_87,bStack_88) & 0xfffffffffffffffe);
  }
  bStack_88 = 0;
  uStack_87 = 0;
  if ((uStack_a0 & 1) == 0) {
    pbStack_70 = pbStack_90;
    bStack_80 = (byte)uStack_a0;
    bStack_7f = (byte)(uStack_a0 >> 8);
    uStack_7e = (undefined6)(uStack_a0 >> 0x10);
    pbStack_78 = pbStack_98;
  }
  else {
    func_0x0412e5e0(&bStack_80,pbStack_90,pbStack_98);
  }
  uStack_68 = 0;
  if ((bStack_80 & 1) == 0) {
    if (bStack_80 >> 1 != 0) goto LAB_05cdd050;
  }
  else if (pbStack_78 != (byte *)0x0) {
LAB_05cdd050:
    pbVar59 = pbStack_70;
    if ((bStack_80 & 1) == 0) {
      pbVar59 = &bStack_7f;
    }
    if ((pbVar59 != (byte *)0x0) && (*pbVar59 != 0)) {
      uVar56 = 0xcbf29ce484222325;
      uVar49 = func_0x0eee2e90(pbVar59);
      if (uVar49 != 0) {
        uVar54 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            uVar56 = (((((((uVar56 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                          (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) * 0x100000001b3 ^
                        (ulong)pbVar59[3]) * 0x100000001b3 ^ (ulong)pbVar59[4]) * 0x100000001b3 ^
                      (ulong)pbVar59[5]) * 0x100000001b3 ^ (ulong)pbVar59[6]) * 0x100000001b3 ^
                     (ulong)pbVar59[7];
            pbVar59 = pbVar59 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        if (uVar54 != 0) {
          uVar49 = 0;
          do {
            uVar56 = uVar56 * 0x100000001b3 ^ (ulong)pbVar59[uVar49];
            uVar49 = uVar49 + 1;
          } while (uVar54 != uVar49);
        }
      }
      goto LAB_05cdd149;
    }
  }
  uVar56 = 0;
LAB_05cdd149:
  bStack_88 = (byte)uVar56;
  uStack_87 = (undefined7)(uVar56 >> 8);
  pbStack_60 = &bStack_88;
  lVar50 = func_0x05cf8b10(param_1,&bStack_88,&UNK_01563a4f,&pbStack_60,&uStack_a1);
  plVar4 = *(long **)(lVar50 + 0x48);
  *(long **)(lVar50 + 0x48) = plVar46;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  pbStack_60 = (byte *)CONCAT71(uStack_87,bStack_88);
  lVar50 = func_0x05cf8dc0(param_1 + 0xf8,&pbStack_60);
  if ((*(byte *)(lVar50 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar50 + 0x28),*(ulong *)(lVar50 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar50 + 0x28) = pbStack_70;
  *(ulong *)(lVar50 + 0x18) = CONCAT62(uStack_7e,CONCAT11(bStack_7f,bStack_80));
  *(byte **)(lVar50 + 0x20) = pbStack_78;
  bStack_80 = 0;
  bStack_7f = 0;
  *(ulong *)(lVar50 + 0x10) = CONCAT71(uStack_87,bStack_88);
  *(undefined8 *)(lVar50 + 0x30) = 0;
  if ((uStack_a0 & 1) != 0) {
    func_0x0412a280(pbStack_90,uStack_a0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return plVar46;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
