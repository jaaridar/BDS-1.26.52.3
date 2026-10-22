/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcc3f680 (ELF vaddr 0xcb3f680)
 * Label: caller-of-callee
 * Body:  [[0cc3f680, 0cc3fb23] [0cc3fb30, 0cc3fec3] [0cc3fed0, 0cc4033b] [0cc40340, 0cc40402] [0cc40410, 0cc4044a] [0cc40450, 0cc40457] [0cc40460, 0cc40604] [0cc40610, 0cc406f4] [0cc40700, 0cc40c49] [0cc40c50, 0cc40cd4] [0cc40ce0, 0cc40cf0] [0cc40d00, 0cc40d95] [0cc40da0, 0cc40e43] [0cc40e50, 0cc40ec8] [0cc40ed0, 0cc41415] [0cc41597, 0cc415a6] [0cc416c9, 0cc416d4] [0cc416ff, 0cc41764]]
 * Ghidra: FUN_0cc3f680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0cc3f680(undefined1 (*param_1) [16],long param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16],undefined1 (*param_5) [16],long *param_6,long param_7,
                 undefined4 param_8)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined1 (*pauVar5) [16];
  long *plVar6;
  code *pcVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
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
  byte bVar45;
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  int iVar48;
  long *plVar49;
  undefined1 (*pauVar50) [16];
  undefined1 *puVar51;
  long lVar52;
  undefined8 uVar53;
  byte bVar54;
  byte *pbVar55;
  undefined1 (*pauVar56) [16];
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  long lVar60;
  long *plVar61;
  undefined1 (*pauVar62) [16];
  ulong uVar63;
  ulong *puVar64;
  undefined1 (*pauVar65) [16];
  byte *pbVar66;
  bool bVar67;
  float fVar68;
  byte bVar69;
  byte bVar70;
  byte bVar72;
  byte bVar74;
  byte bVar76;
  byte bVar78;
  byte bVar80;
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
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  undefined1 (*pauStack_208) [16];
  undefined8 uStack_200;
  undefined1 (*pauStack_1f8) [16];
  byte *pbStack_1f0;
  long lStack_1e8;
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined8 uStack_1c8;
  undefined1 (*pauStack_1c0) [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  undefined8 uStack_188;
  undefined1 (*pauStack_180) [16];
  byte *pbStack_178;
  long *plStack_168;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  long lStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined4 uStack_120;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_100) [16];
  undefined1 auStack_f8 [16];
  long lStack_e8;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  long lStack_a8;
  undefined1 (*pauStack_a0) [16];
  long alStack_98 [4];
  long *plStack_78;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined1 (**ppauStack_48) [16];
  undefined1 (**ppauStack_40) [16];
  undefined1 uStack_38;
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar77;
  char cVar79;
  char cVar81;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    if (*(byte *)(param_2 + 8) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_2 + 0x10) == 0) {
    return;
  }
  if (*(long *)*param_4 == *(long *)(*param_4 + 8)) {
    return;
  }
  uStack_188 = *(ulong *)(param_1[0x14] + 8);
  pauStack_180 = *(undefined1 (**) [16])param_1[0x15];
  if (*(long *)param_1[0x15] != 0) {
    LOCK();
    plVar49 = (long *)(*(long *)param_1[0x15] + 8);
    *plVar49 = *plVar49 + 1;
    UNLOCK();
  }
  pauStack_198 = param_4;
  func_0x0cc46680(auStack_60,&uStack_188);
  pauVar65 = pauStack_180;
  pauStack_1d8 = param_3;
  pauStack_1d0 = param_5;
  if (pauStack_180 != (undefined1 (*) [16])0x0) {
    LOCK();
    plVar49 = (long *)(*pauStack_180 + 8);
    lVar58 = *plVar49;
    *plVar49 = *plVar49 + -1;
    UNLOCK();
    if (lVar58 == 0) {
      (**(code **)(*(long *)*pauStack_180 + 0x10))(pauStack_180);
      func_0x0412c2d0(pauVar65);
    }
  }
  bVar67 = (*(byte *)(param_2 + 8) & 1) != 0;
  lVar58 = param_2 + 9;
  if (bVar67) {
    lVar58 = *(long *)(param_2 + 0x18);
  }
  pauVar50 = (undefined1 (*) [16])(ulong)(*(byte *)(param_2 + 8) >> 1);
  if (bVar67) {
    pauVar50 = *(undefined1 (**) [16])(param_2 + 0x10);
  }
  if (pauVar50 < (undefined1 (*) [16])0xfffffffffffffff8) {
    pauStack_1e0 = (undefined1 (*) [16])param_6;
    pbVar66 = (byte *)((long)&uStack_188 + 1);
    if (pauVar50 < (undefined1 (*) [16])0x17) {
      uStack_188 = CONCAT71(uStack_188._1_7_,(char)pauVar50 * '\x02');
      pbVar55 = pbVar66;
      if (pauVar50 != (undefined1 (*) [16])0x0) goto LAB_0cc3f7f2;
    }
    else {
      uVar59 = 0x1a;
      if (((ulong)pauVar50 | 7) != 0x17) {
        uVar59 = ((ulong)pauVar50 | 7) + 1;
      }
      pbVar55 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar59);
      if (pbVar55 == (byte *)0x0) {
        FUN_0eec74c0(uVar59,0);
      }
      uStack_188 = uVar59 | 1;
      pauStack_180 = pauVar50;
      pbStack_178 = pbVar55;
LAB_0cc3f7f2:
      func_0x0eee2f00(pbVar55,lVar58,pauVar50);
    }
    pbVar55[(long)pauVar50] = 0;
    pauVar65 = (undefined1 (*) [16])(uStack_188 >> 1 & 0x7f);
    if ((uStack_188 & 1) != 0) {
      pauVar65 = pauStack_180;
      pbVar66 = pbStack_178;
    }
    if (pauVar65 != (undefined1 (*) [16])0x0) {
      pbVar55 = pbVar66;
      if ((undefined1 (*) [16])0x7 < pauVar65) {
        if (pauVar65 < (undefined1 (*) [16])0x20) {
          pauVar50 = (undefined1 (*) [16])0x0;
        }
        else {
          pauVar50 = (undefined1 (*) [16])((ulong)pauVar65 & 0xffffffffffffffe0);
          pauVar62 = (undefined1 (*) [16])0x0;
          do {
            pbVar55 = pbVar66 + (long)pauVar62;
            bVar15 = pbVar55[1];
            bVar16 = pbVar55[2];
            bVar17 = pbVar55[3];
            bVar18 = pbVar55[4];
            bVar19 = pbVar55[5];
            bVar20 = pbVar55[6];
            bVar21 = pbVar55[7];
            bVar22 = pbVar55[8];
            bVar23 = pbVar55[9];
            bVar24 = pbVar55[10];
            bVar25 = pbVar55[0xb];
            bVar26 = pbVar55[0xc];
            bVar27 = pbVar55[0xd];
            bVar28 = pbVar55[0xe];
            bVar29 = pbVar55[0xf];
            pbVar1 = pbVar66 + 0x10 + (long)pauVar62;
            bVar30 = *pbVar1;
            bVar31 = pbVar1[1];
            bVar32 = pbVar1[2];
            bVar33 = pbVar1[3];
            bVar34 = pbVar1[4];
            bVar35 = pbVar1[5];
            bVar36 = pbVar1[6];
            bVar37 = pbVar1[7];
            bVar38 = pbVar1[8];
            bVar39 = pbVar1[9];
            bVar40 = pbVar1[10];
            bVar41 = pbVar1[0xb];
            bVar42 = pbVar1[0xc];
            bVar43 = pbVar1[0xd];
            bVar44 = pbVar1[0xe];
            bVar45 = pbVar1[0xf];
            bVar83 = *pbVar55 + DAT_014e86b0;
            bVar84 = bVar15 + DAT_014e86b0._1_1_;
            bVar85 = bVar16 + DAT_014e86b0._2_1_;
            bVar86 = bVar17 + DAT_014e86b0._3_1_;
            bVar87 = bVar18 + DAT_014e86b0._4_1_;
            bVar88 = bVar19 + DAT_014e86b0._5_1_;
            bVar89 = bVar20 + DAT_014e86b0._6_1_;
            bVar90 = bVar21 + DAT_014e86b0._7_1_;
            bVar91 = bVar22 + DAT_014e86b0._8_1_;
            bVar92 = bVar23 + DAT_014e86b0._9_1_;
            bVar93 = bVar24 + DAT_014e86b0._10_1_;
            bVar94 = bVar25 + DAT_014e86b0._11_1_;
            bVar95 = bVar26 + DAT_014e86b0._12_1_;
            bVar96 = bVar27 + DAT_014e86b0._13_1_;
            bVar97 = bVar28 + DAT_014e86b0._14_1_;
            bVar98 = bVar29 + DAT_014e86b0._15_1_;
            bVar99 = bVar30 + DAT_014e86b0;
            bVar100 = bVar31 + DAT_014e86b0._1_1_;
            bVar101 = bVar32 + DAT_014e86b0._2_1_;
            bVar102 = bVar33 + DAT_014e86b0._3_1_;
            bVar103 = bVar34 + DAT_014e86b0._4_1_;
            bVar104 = bVar35 + DAT_014e86b0._5_1_;
            bVar105 = bVar36 + DAT_014e86b0._6_1_;
            bVar106 = bVar37 + DAT_014e86b0._7_1_;
            bVar107 = bVar38 + DAT_014e86b0._8_1_;
            bVar108 = bVar39 + DAT_014e86b0._9_1_;
            bVar109 = bVar40 + DAT_014e86b0._10_1_;
            bVar110 = bVar41 + DAT_014e86b0._11_1_;
            bVar111 = bVar42 + DAT_014e86b0._12_1_;
            bVar112 = bVar43 + DAT_014e86b0._13_1_;
            bVar113 = bVar44 + DAT_014e86b0._14_1_;
            bVar114 = bVar45 + DAT_014e86b0._15_1_;
            bVar2 = DAT_014e4170;
            bVar54 = DAT_014e4170._1_1_;
            bVar8 = DAT_014e4170._2_1_;
            bVar9 = DAT_014e4170._3_1_;
            bVar10 = DAT_014e4170._4_1_;
            bVar11 = DAT_014e4170._5_1_;
            bVar12 = DAT_014e4170._6_1_;
            bVar13 = DAT_014e4170._7_1_;
            bVar69 = DAT_014e4170._8_1_;
            bVar70 = DAT_014e4170._9_1_;
            bVar72 = DAT_014e4170._10_1_;
            bVar74 = DAT_014e4170._11_1_;
            bVar76 = DAT_014e4170._12_1_;
            bVar78 = DAT_014e4170._13_1_;
            bVar80 = DAT_014e4170._14_1_;
            bVar82 = DAT_014e4170._15_1_;
            pbVar1 = pbVar66 + (long)pauVar62;
            *pbVar1 = (-((byte)((bVar2 < bVar83) * bVar2 | (bVar2 >= bVar83) * bVar83) == bVar83) &
                      DAT_014ead50) + *pbVar55;
            pbVar1[1] = (-((byte)((bVar54 < bVar84) * bVar54 | (bVar54 >= bVar84) * bVar84) ==
                          bVar84) & UNK_014ead51) + bVar15;
            pbVar1[2] = (-((byte)((bVar8 < bVar85) * bVar8 | (bVar8 >= bVar85) * bVar85) == bVar85)
                        & UNK_014ead52) + bVar16;
            pbVar1[3] = (-((byte)((bVar9 < bVar86) * bVar9 | (bVar9 >= bVar86) * bVar86) == bVar86)
                        & UNK_014ead53) + bVar17;
            pbVar1[4] = (-((byte)((bVar10 < bVar87) * bVar10 | (bVar10 >= bVar87) * bVar87) ==
                          bVar87) & UNK_014ead54) + bVar18;
            pbVar1[5] = (-((byte)((bVar11 < bVar88) * bVar11 | (bVar11 >= bVar88) * bVar88) ==
                          bVar88) & UNK_014ead55) + bVar19;
            pbVar1[6] = (-((byte)((bVar12 < bVar89) * bVar12 | (bVar12 >= bVar89) * bVar89) ==
                          bVar89) & UNK_014ead56) + bVar20;
            pbVar1[7] = (-((byte)((bVar13 < bVar90) * bVar13 | (bVar13 >= bVar90) * bVar90) ==
                          bVar90) & UNK_014ead57) + bVar21;
            pbVar1[8] = (-((byte)((bVar69 < bVar91) * bVar69 | (bVar69 >= bVar91) * bVar91) ==
                          bVar91) & UNK_014ead58) + bVar22;
            pbVar1[9] = (-((byte)((bVar70 < bVar92) * bVar70 | (bVar70 >= bVar92) * bVar92) ==
                          bVar92) & UNK_014ead59) + bVar23;
            pbVar1[10] = (-((byte)((bVar72 < bVar93) * bVar72 | (bVar72 >= bVar93) * bVar93) ==
                           bVar93) & UNK_014ead5a) + bVar24;
            pbVar1[0xb] = (-((byte)((bVar74 < bVar94) * bVar74 | (bVar74 >= bVar94) * bVar94) ==
                            bVar94) & UNK_014ead5b) + bVar25;
            pbVar1[0xc] = (-((byte)((bVar76 < bVar95) * bVar76 | (bVar76 >= bVar95) * bVar95) ==
                            bVar95) & UNK_014ead5c) + bVar26;
            pbVar1[0xd] = (-((byte)((bVar78 < bVar96) * bVar78 | (bVar78 >= bVar96) * bVar96) ==
                            bVar96) & UNK_014ead5d) + bVar27;
            pbVar1[0xe] = (-((byte)((bVar80 < bVar97) * bVar80 | (bVar80 >= bVar97) * bVar97) ==
                            bVar97) & UNK_014ead5e) + bVar28;
            pbVar1[0xf] = (-((byte)((bVar82 < bVar98) * bVar82 | (bVar82 >= bVar98) * bVar98) ==
                            bVar98) & UNK_014ead5f) + bVar29;
            pbVar55 = pbVar66 + 0x10 + (long)pauVar62;
            *pbVar55 = (-((byte)((bVar2 < bVar99) * bVar2 | (bVar2 >= bVar99) * bVar99) == bVar99) &
                       DAT_014ead50) + bVar30;
            pbVar55[1] = (-((byte)((bVar54 < bVar100) * bVar54 | (bVar54 >= bVar100) * bVar100) ==
                           bVar100) & UNK_014ead51) + bVar31;
            pbVar55[2] = (-((byte)((bVar8 < bVar101) * bVar8 | (bVar8 >= bVar101) * bVar101) ==
                           bVar101) & UNK_014ead52) + bVar32;
            pbVar55[3] = (-((byte)((bVar9 < bVar102) * bVar9 | (bVar9 >= bVar102) * bVar102) ==
                           bVar102) & UNK_014ead53) + bVar33;
            pbVar55[4] = (-((byte)((bVar10 < bVar103) * bVar10 | (bVar10 >= bVar103) * bVar103) ==
                           bVar103) & UNK_014ead54) + bVar34;
            pbVar55[5] = (-((byte)((bVar11 < bVar104) * bVar11 | (bVar11 >= bVar104) * bVar104) ==
                           bVar104) & UNK_014ead55) + bVar35;
            pbVar55[6] = (-((byte)((bVar12 < bVar105) * bVar12 | (bVar12 >= bVar105) * bVar105) ==
                           bVar105) & UNK_014ead56) + bVar36;
            pbVar55[7] = (-((byte)((bVar13 < bVar106) * bVar13 | (bVar13 >= bVar106) * bVar106) ==
                           bVar106) & UNK_014ead57) + bVar37;
            pbVar55[8] = (-((byte)((bVar69 < bVar107) * bVar69 | (bVar69 >= bVar107) * bVar107) ==
                           bVar107) & UNK_014ead58) + bVar38;
            pbVar55[9] = (-((byte)((bVar70 < bVar108) * bVar70 | (bVar70 >= bVar108) * bVar108) ==
                           bVar108) & UNK_014ead59) + bVar39;
            pbVar55[10] = (-((byte)((bVar72 < bVar109) * bVar72 | (bVar72 >= bVar109) * bVar109) ==
                            bVar109) & UNK_014ead5a) + bVar40;
            pbVar55[0xb] = (-((byte)((bVar74 < bVar110) * bVar74 | (bVar74 >= bVar110) * bVar110) ==
                             bVar110) & UNK_014ead5b) + bVar41;
            pbVar55[0xc] = (-((byte)((bVar76 < bVar111) * bVar76 | (bVar76 >= bVar111) * bVar111) ==
                             bVar111) & UNK_014ead5c) + bVar42;
            pbVar55[0xd] = (-((byte)((bVar78 < bVar112) * bVar78 | (bVar78 >= bVar112) * bVar112) ==
                             bVar112) & UNK_014ead5d) + bVar43;
            pbVar55[0xe] = (-((byte)((bVar80 < bVar113) * bVar80 | (bVar80 >= bVar113) * bVar113) ==
                             bVar113) & UNK_014ead5e) + bVar44;
            pbVar55[0xf] = (-((byte)((bVar82 < bVar114) * bVar82 | (bVar82 >= bVar114) * bVar114) ==
                             bVar114) & UNK_014ead5f) + bVar45;
            pauVar62 = pauVar62 + 2;
          } while (pauVar50 != pauVar62);
          if (pauVar65 == pauVar50) goto LAB_0cc3f975;
          if (((ulong)pauVar65 & 0x18) == 0) {
            pbVar55 = pbVar66 + (long)*pauVar50;
            goto LAB_0cc3f93e;
          }
        }
        pauVar62 = (undefined1 (*) [16])((ulong)pauVar65 & 0xfffffffffffffff8);
        pbVar55 = pbVar66 + (long)pauVar62;
        do {
          uVar53 = *(undefined8 *)(pbVar66 + (long)pauVar50);
          bVar69 = (char)uVar53 + DAT_014e9110;
          cVar71 = (char)((ulong)uVar53 >> 8);
          bVar70 = cVar71 + DAT_014e9110._1_1_;
          cVar73 = (char)((ulong)uVar53 >> 0x10);
          bVar72 = cVar73 + DAT_014e9110._2_1_;
          cVar75 = (char)((ulong)uVar53 >> 0x18);
          bVar74 = cVar75 + DAT_014e9110._3_1_;
          cVar77 = (char)((ulong)uVar53 >> 0x20);
          bVar76 = cVar77 + DAT_014e9110._4_1_;
          cVar79 = (char)((ulong)uVar53 >> 0x28);
          bVar78 = cVar79 + DAT_014e9110._5_1_;
          cVar81 = (char)((ulong)uVar53 >> 0x30);
          cVar14 = (char)((ulong)uVar53 >> 0x38);
          bVar80 = cVar81 + DAT_014e9110._6_1_;
          bVar82 = cVar14 + DAT_014e9110._7_1_;
          bVar2 = DAT_014e8cb0;
          bVar54 = DAT_014e8cb0._1_1_;
          bVar8 = DAT_014e8cb0._2_1_;
          bVar9 = DAT_014e8cb0._3_1_;
          bVar10 = DAT_014e8cb0._4_1_;
          bVar11 = DAT_014e8cb0._5_1_;
          bVar12 = DAT_014e8cb0._6_1_;
          bVar13 = DAT_014e8cb0._7_1_;
          *(ulong *)(pbVar66 + (long)pauVar50) =
               CONCAT17((~-((byte)((bVar82 < bVar13) * bVar13 | (bVar82 >= bVar13) * bVar82) ==
                           bVar82) & UNK_014ea367) + cVar14,
                        CONCAT16((~-((byte)((bVar80 < bVar12) * bVar12 | (bVar80 >= bVar12) * bVar80
                                           ) == bVar80) & UNK_014ea366) + cVar81,
                                 CONCAT15((~-((byte)((bVar78 < bVar11) * bVar11 |
                                                    (bVar78 >= bVar11) * bVar78) == bVar78) &
                                          UNK_014ea365) + cVar79,
                                          CONCAT14((~-((byte)((bVar76 < bVar10) * bVar10 |
                                                             (bVar76 >= bVar10) * bVar76) == bVar76)
                                                   & UNK_014ea364) + cVar77,
                                                   CONCAT13((~-((byte)((bVar74 < bVar9) * bVar9 |
                                                                      (bVar74 >= bVar9) * bVar74) ==
                                                               bVar74) & UNK_014ea363) + cVar75,
                                                            CONCAT12((~-((byte)((bVar72 < bVar8) *
                                                                                bVar8 | (bVar72 >=
                                                                                        bVar8) * 
                                                  bVar72) == bVar72) & UNK_014ea362) + cVar73,
                                                  CONCAT11((~-((byte)((bVar70 < bVar54) * bVar54 |
                                                                     (bVar70 >= bVar54) * bVar70) ==
                                                              bVar70) & UNK_014ea361) + cVar71,
                                                           (~-((byte)((bVar69 < bVar2) * bVar2 |
                                                                     (bVar69 >= bVar2) * bVar69) ==
                                                              bVar69) & DAT_014ea360) + (char)uVar53
                                                          )))))));
          pauVar50 = (undefined1 (*) [16])(*pauVar50 + 8);
        } while (pauVar62 != pauVar50);
        if (pauVar65 == pauVar62) goto LAB_0cc3f975;
      }
LAB_0cc3f93e:
      do {
        bVar2 = *pbVar55;
        bVar54 = bVar2 + 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar54 = bVar2;
        }
        *pbVar55 = bVar54;
        pbVar55 = pbVar55 + 1;
      } while (pbVar55 != pbVar66 + (long)pauVar65);
    }
LAB_0cc3f975:
    pauStack_208 = (undefined1 (*) [16])0x0;
    if ((uStack_188 & 1) == 0) {
      pbStack_1f0 = pbStack_178;
      uStack_200 = uStack_188;
      pauStack_1f8 = pauStack_180;
    }
    else {
      func_0x0412e5e0(&uStack_200,pbStack_178,pauStack_180);
    }
    lStack_1e8 = 0;
    if ((uStack_200 & 1) == 0) {
      if ((byte)uStack_200 >> 1 != 0) goto LAB_0cc3f9f3;
LAB_0cc3fa48:
      pauVar65 = (undefined1 (*) [16])0x0;
    }
    else {
      if (pauStack_1f8 == (undefined1 (*) [16])0x0) goto LAB_0cc3fa48;
LAB_0cc3f9f3:
      pauVar65 = (undefined1 (*) [16])0xcbf29ce484222325;
      if ((uStack_200 & 1) == 0) {
        pbVar66 = (byte *)((long)&uStack_200 + 1);
        if (pbVar66 != (byte *)0x0) goto LAB_0cc3fa0d;
        goto LAB_0cc3fa48;
      }
      pbVar66 = pbStack_1f0;
      if (pbStack_1f0 == (byte *)0x0) goto LAB_0cc3fa48;
LAB_0cc3fa0d:
      if (*pbVar66 == 0) goto LAB_0cc3fa48;
      uVar59 = strlen(pbVar66);
      if (uVar59 != 0) {
        uVar63 = (ulong)((uint)uVar59 & 7);
        if (uVar59 < 8) {
          pauVar65 = (undefined1 (*) [16])0xcbf29ce484222325;
        }
        else {
          uVar59 = uVar59 & 0xfffffffffffffff8;
          pauVar65 = (undefined1 (*) [16])0xcbf29ce484222325;
          do {
            pauVar65 = (undefined1 (*) [16])
                       (((((((((long)pauVar65 * 0x100000001b3 ^ (ulong)*pbVar66) * 0x100000001b3 ^
                             (ulong)pbVar66[1]) * 0x100000001b3 ^ (ulong)pbVar66[2]) * 0x100000001b3
                           ^ (ulong)pbVar66[3]) * 0x100000001b3 ^ (ulong)pbVar66[4]) * 0x100000001b3
                         ^ (ulong)pbVar66[5]) * 0x100000001b3 ^ (ulong)pbVar66[6]) * 0x100000001b3 ^
                       (ulong)pbVar66[7]);
            pbVar66 = pbVar66 + 8;
            uVar59 = uVar59 - 8;
          } while (uVar59 != 0);
        }
        if (uVar63 != 0) {
          uVar59 = 0;
          do {
            pauVar65 = (undefined1 (*) [16])
                       ((long)pauVar65 * 0x100000001b3 ^ (ulong)pbVar66[uVar59]);
            uVar59 = uVar59 + 1;
          } while (uVar63 != uVar59);
        }
      }
    }
    pauStack_208 = pauVar65;
    lStack_a8 = param_2;
    if ((uStack_188 & 1) != 0) {
      func_0x0412a280(pbStack_178,uStack_188 & 0xfffffffffffffffe);
    }
    pauVar65 = pauStack_208;
    lVar58 = *(long *)(*(long *)param_1[4] +
                      (((ulong)(*(long *)(param_1[4] + 8) - *(long *)param_1[4]) >> 3) - 1 &
                      (ulong)pauStack_208) * 8);
    if (lVar58 != -1) {
      lVar52 = *(long *)(param_1[5] + 8);
      do {
        lVar58 = lVar58 * 0xb0;
        lVar60 = lVar52 + lVar58;
        if (*(undefined1 (**) [16])(lVar52 + 0x10 + lVar58) == pauVar65) {
          if ((*(undefined1 (***) [16])(lVar60 + 0x30) == &pauStack_208) &&
             (lStack_1e8 == lVar60 + 0x10)) break;
          bVar2 = *(byte *)(lVar60 + 0x18);
          if ((bVar2 & 1) == 0) {
            pauVar50 = (undefined1 (*) [16])(ulong)(bVar2 >> 1);
            if ((uStack_200 & 1) != 0) goto LAB_0cc3fb3e;
LAB_0cc3fb19:
            if (pauVar50 != (undefined1 (*) [16])((uStack_200 & 0xff) >> 1)) goto LAB_0cc3faca;
          }
          else {
            pauVar50 = *(undefined1 (**) [16])(lVar60 + 0x20);
            if ((uStack_200 & 1) == 0) goto LAB_0cc3fb19;
LAB_0cc3fb3e:
            if (pauVar50 != pauStack_1f8) goto LAB_0cc3faca;
          }
          if ((bVar2 & 1) == 0) {
            lVar3 = lVar60 + 0x19;
          }
          else {
            lVar3 = *(long *)(lVar60 + 0x28);
          }
          pbVar66 = (byte *)((long)&uStack_200 + 1);
          if ((uStack_200 & 1) != 0) {
            pbVar66 = pbStack_1f0;
          }
          iVar48 = func_0x0eee3000(lVar3,pbVar66);
          if (iVar48 == 0) {
            *(undefined1 (***) [16])(lVar60 + 0x30) = &pauStack_208;
            lStack_1e8 = lVar60 + 0x10;
            break;
          }
        }
LAB_0cc3faca:
        *(undefined8 *)(lVar60 + 0x30) = 0;
        lVar58 = *(long *)(lVar52 + lVar58);
      } while (lVar58 != -1);
    }
    auStack_f8 = (undefined1  [16])0x0;
    bVar67 = (uStack_200 & 1) == 0;
    pbVar66 = pbStack_1f0;
    if (bVar67) {
      pbVar66 = (byte *)((long)&uStack_200 + 1);
    }
    lStack_e8 = 0;
    pauVar65 = (undefined1 (*) [16])(uStack_200 >> 1 & 0x7f);
    if (!bVar67) {
      pauVar65 = pauStack_1f8;
    }
    func_0x0edfe610(pbVar66,pauVar65,0x3a,auStack_f8);
    pauVar50 = pauStack_1e0;
    pauVar65 = *(undefined1 (**) [16])pauStack_1d8[2];
    if (pauVar65 == (undefined1 (*) [16])0x0) {
      plStack_78 = (long *)0x0;
LAB_0cc3fc20:
      plStack_168 = (long *)0x0;
    }
    else {
      if (pauVar65 == pauStack_1d8) {
        plStack_78 = alStack_98;
        (**(code **)(*(long *)*pauVar65 + 0x18))();
      }
      else {
        plStack_78 = (long *)(**(code **)(*(long *)*pauVar65 + 0x10))();
      }
      if (plStack_78 == (long *)0x0) goto LAB_0cc3fc20;
      if (plStack_78 == alStack_98) {
        plStack_168 = &uStack_188;
        (**(code **)(*plStack_78 + 0x18))();
      }
      else {
        plStack_168 = (long *)(**(code **)(*plStack_78 + 0x10))();
      }
    }
    func_0x0d88e390(&lStack_158,pauStack_1d0);
    lStack_138 = *(long *)pauVar50;
    uStack_130 = 0;
    uVar59 = *(ulong *)((long)pauVar50 + 8);
    if ((uVar59 >> 0x37 & 1) != 0) {
      lVar52 = *(long *)((uVar59 & 0xff00ffffffffffff) - 8);
      lVar58 = lVar52 + 9;
      plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar58,8);
      if (lVar58 != 0 && plVar49 == (long *)0x0) {
        FUN_0eec74c0(lVar58,8);
      }
      *plVar49 = lVar52;
      func_0x0eee2f00(plVar49 + 1,uVar59 & 0xff00ffffffffffff,lVar52);
      *(undefined1 *)((long)plVar49 + lVar52 + 8) = 0;
      uVar59 = (ulong)(plVar49 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      pauVar50 = pauStack_1e0;
    }
    uStack_128 = 0;
    uVar63 = *(ulong *)((long)pauVar50 + 0x10);
    uStack_130 = uVar59;
    if ((uVar63 & 0x80000000000000) != 0) {
      lVar52 = *(long *)((uVar63 & 0xff00ffffffffffff) - 8);
      lVar58 = lVar52 + 9;
      plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar58,8);
      if (lVar58 != 0 && plVar49 == (long *)0x0) {
        FUN_0eec74c0(lVar58,8);
      }
      *plVar49 = lVar52;
      func_0x0eee2f00(plVar49 + 1,uVar63 & 0xff00ffffffffffff,lVar52);
      *(undefined1 *)((long)plVar49 + lVar52 + 8) = 0;
      uVar63 = (ulong)(plVar49 + 1) & 0xff00ffffffffffff | 0x80000000000000;
    }
    uStack_120 = param_8;
    uStack_128 = uVar63;
    if (plStack_78 == alStack_98) {
      lVar58 = 0x20;
LAB_0cc3fe07:
      (**(code **)(*plStack_78 + lVar58))();
    }
    else {
      lVar58 = 0x28;
      if (plStack_78 != (long *)0x0) goto LAB_0cc3fe07;
    }
    pauVar50 = pauStack_208;
    pauStack_1e0 = *(undefined1 (**) [16])param_1[4];
    pauStack_190 = (undefined1 (*) [16])
                   ((*(long *)(param_1[4] + 8) - (long)pauStack_1e0 >> 3) - 1U & (ulong)pauStack_208
                   );
    lVar58 = *(long *)(*pauStack_1e0 + (long)pauStack_190 * 8);
    lVar52 = *(long *)(param_1[5] + 8);
    if (lVar58 != -1) {
      lVar60 = lVar58;
      do {
        lVar60 = lVar60 * 0xb0;
        lVar3 = lVar52 + lVar60;
        if (*(undefined1 (**) [16])(lVar52 + 0x10 + lVar60) == pauVar50) {
          if ((*(undefined1 (***) [16])(lVar3 + 0x30) != &pauStack_208) ||
             (lStack_1e8 != lVar3 + 0x10)) {
            bVar2 = *(byte *)(lVar3 + 0x18);
            if ((bVar2 & 1) == 0) {
              pauVar65 = (undefined1 (*) [16])(ulong)(bVar2 >> 1);
              if ((uStack_200 & 1) != 0) goto LAB_0cc3fede;
LAB_0cc3feb9:
              if (pauVar65 != (undefined1 (*) [16])((uStack_200 & 0xff) >> 1)) goto LAB_0cc3fe65;
            }
            else {
              pauVar65 = *(undefined1 (**) [16])(lVar3 + 0x20);
              if ((uStack_200 & 1) == 0) goto LAB_0cc3feb9;
LAB_0cc3fede:
              if (pauVar65 != pauStack_1f8) goto LAB_0cc3fe65;
            }
            if ((bVar2 & 1) == 0) {
              lVar4 = lVar3 + 0x19;
            }
            else {
              lVar4 = *(long *)(lVar3 + 0x28);
            }
            pbVar66 = (byte *)((long)&uStack_200 + 1);
            if ((uStack_200 & 1) != 0) {
              pbVar66 = pbStack_1f0;
            }
            iVar48 = func_0x0eee3000(lVar4,pbVar66);
            if (iVar48 != 0) goto LAB_0cc3fe65;
            *(undefined1 (***) [16])(lVar3 + 0x30) = &pauStack_208;
            lStack_1e8 = lVar3 + 0x10;
          }
          plVar61 = (long *)(lVar60 + lVar52);
          plVar49 = *(long **)param_1[6];
          if (plVar61 == plVar49) goto LAB_0cc3ff67;
          goto LAB_0cc40835;
        }
LAB_0cc3fe65:
        *(undefined8 *)(lVar3 + 0x30) = 0;
        lVar60 = *(long *)(lVar52 + lVar60);
      } while (lVar60 != -1);
    }
    plVar49 = *(long **)param_1[6];
LAB_0cc3ff67:
    if (plVar49 < *(long **)(param_1[6] + 8)) {
      *plVar49 = lVar58;
      *(undefined1 (*) [16])(plVar49 + 2) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar49 + 4) = (undefined1  [16])0x0;
      plVar49[6] = 0;
      if ((undefined1 (**) [16])(plVar49 + 2) != &pauStack_208) {
        if ((uStack_200 & 1) == 0) {
          plVar49[5] = (long)pbStack_1f0;
          plVar49[3] = uStack_200;
          plVar49[4] = (long)pauStack_1f8;
        }
        else {
          FUN_04885070(plVar49 + 3,pbStack_1f0,pauStack_1f8);
          pauVar50 = pauStack_208;
        }
      }
      plVar49[2] = (long)pauVar50;
      pauVar65 = (undefined1 (*) [16])(plVar49 + 0x16);
      *(undefined1 (*) [16])(plVar49 + 8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar49 + 10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar49 + 0xc) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar49 + 0xe) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar49 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar49 + 0x12) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(plVar49 + 0x14) = (undefined1  [16])0x0;
      *(undefined1 (**) [16])param_1[6] = pauVar65;
LAB_0cc40782:
      *(undefined1 (**) [16])param_1[6] = pauVar65;
      lVar58 = *(long *)param_1[4];
      lVar52 = *(long *)(param_1[5] + 8);
      lVar60 = (long)pauVar65 - lVar52;
      uVar59 = (lVar60 >> 4) * 0x2e8ba2e8ba2e8ba3;
      *(ulong *)(lVar58 + (long)pauStack_190 * 8) = uVar59 - 1;
      lVar58 = *(long *)(param_1[4] + 8) - lVar58;
      fVar68 = (float)(ulong)(lVar58 >> 3) * *(float *)param_1[7];
      uVar63 = (ulong)fVar68;
      uVar63 = (long)(fVar68 - _DAT_01198778) & (long)uVar63 >> 0x3f | uVar63;
      if (uVar63 <= uVar59 && uVar59 - uVar63 != 0) {
        func_0x0cd3afa0(param_1 + 4,lVar58 >> 2);
        lVar52 = *(long *)(param_1[5] + 8);
        lVar60 = *(long *)param_1[6] - lVar52;
      }
      plVar61 = (long *)(lVar52 + lVar60 + -0xb0);
LAB_0cc40835:
      plVar49 = plVar61 + 8;
      plVar6 = (long *)plVar61[0xc];
      plVar61[0xc] = 0;
      if (plVar6 == plVar49) {
        lVar58 = 0x20;
LAB_0cc4088f:
        (**(code **)(*plVar6 + lVar58))();
        if (plStack_168 != (long *)0x0) goto LAB_0cc40866;
LAB_0cc408a2:
        plVar61[0xc] = 0;
      }
      else {
        lVar58 = 0x28;
        if (plVar6 != (long *)0x0) goto LAB_0cc4088f;
        if (plStack_168 == (long *)0x0) goto LAB_0cc408a2;
LAB_0cc40866:
        if (plStack_168 == &uStack_188) {
          plVar61[0xc] = (long)plVar49;
          (**(code **)(*plStack_168 + 0x18))(plStack_168,plVar49);
        }
        else {
          plVar61[0xc] = (long)plStack_168;
          plStack_168 = (long *)0x0;
        }
      }
      plVar61[0xe] = lStack_158;
      if ((plVar61[0xf] & 0x80000000000000U) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar61[0xf] & 0xff00ffffffffffffU) - 8);
      }
      plVar61[0xf] = 0;
      uVar59 = uStack_150;
      if ((uStack_150 & 0x80000000000000) != 0) {
        uVar59 = uStack_150 & 0xff00ffffffffffff;
        lVar52 = *(long *)(uVar59 - 8);
        lVar58 = lVar52 + 9;
        plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar58,8);
        if (lVar58 != 0 && plVar49 == (long *)0x0) {
          FUN_0eec74c0(lVar58,8);
        }
        *plVar49 = lVar52;
        func_0x0eee2f00(plVar49 + 1,uVar59,lVar52);
        *(undefined1 *)((long)plVar49 + lVar52 + 8) = 0;
        uVar59 = (ulong)(plVar49 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      plVar61[0xf] = uVar59;
      if ((plVar61[0x10] & 0x80000000000000U) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(plVar61[0x10] & 0xff00ffffffffffffU) - 8)
        ;
      }
      plVar61[0x10] = 0;
      uVar59 = uStack_148;
      if ((uStack_148 & 0x80000000000000) != 0) {
        uVar59 = uStack_148 & 0xff00ffffffffffff;
        lVar52 = *(long *)(uVar59 - 8);
        lVar58 = lVar52 + 9;
        plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar58,8);
        if (lVar58 != 0 && plVar49 == (long *)0x0) {
          FUN_0eec74c0(lVar58,8);
        }
        *plVar49 = lVar52;
        func_0x0eee2f00(plVar49 + 1,uVar59,lVar52);
        *(undefined1 *)((long)plVar49 + lVar52 + 8) = 0;
        uVar59 = (ulong)(plVar49 + 1) & 0xff00ffffffffffff | 0x80000000000000;
      }
      plVar61[0x10] = uVar59;
      *(undefined1 *)(plVar61 + 0x11) = uStack_140;
      uVar59 = plVar61[0x13];
      uVar63 = plVar61[0x14];
      plVar61[0x12] = lStack_138;
      plVar61[0x13] = uStack_130;
      plVar61[0x14] = uStack_128;
      *(undefined4 *)(plVar61 + 0x15) = uStack_120;
      uStack_1c8 = pauStack_208;
      uStack_130 = uVar59;
      uStack_128 = uVar63;
      pauVar50 = (undefined1 (*) [16])func_0x05cf8dc0(param_1[0xf] + 8,&uStack_1c8);
      pauVar65 = pauStack_198;
      if (pauVar50 + 1 != (undefined1 (*) [16])&pauStack_208) {
        puVar64 = (ulong *)(pauVar50[1] + 8);
        if ((*puVar64 & 1) == 0) {
          if ((uStack_200 & 1) == 0) {
            *(byte **)(pauVar50[2] + 8) = pbStack_1f0;
            *puVar64 = uStack_200;
            *(undefined1 (**) [16])pauVar50[2] = pauStack_1f8;
          }
          else {
            FUN_04885070(puVar64,pbStack_1f0,pauStack_1f8);
          }
        }
        else {
          pauVar62 = (undefined1 (*) [16])(uStack_200 >> 1 & 0x7f);
          pbVar66 = (byte *)((long)&uStack_200 + 1);
          if ((uStack_200 & 1) != 0) {
            pauVar62 = pauStack_1f8;
            pbVar66 = pbStack_1f0;
          }
          func_0x04885120(puVar64,pbVar66,pauVar62);
        }
      }
      *(undefined1 (**) [16])pauVar50[1] = pauStack_208;
      *(undefined8 *)pauVar50[3] = 0;
      pauVar62 = *(undefined1 (**) [16])param_1[8];
      puStack_1a0 = (undefined8 *)((long)pauVar62 - *(long *)(param_1[7] + 8));
      if (pauVar62 < *(undefined1 (**) [16])(param_1[8] + 8)) {
        *pauVar62 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar62[1] = 0;
        pauVar50 = *(undefined1 (**) [16])*pauVar65;
        pauVar65 = (undefined1 (*) [16])(*(long *)(*pauVar65 + 8) - (long)pauVar50);
        if (pauVar65 == (undefined1 (*) [16])0x0) {
LAB_0cc40be7:
          puVar51 = pauVar62[1] + 8;
          *(undefined1 **)param_1[8] = puVar51;
          pauVar65 = pauStack_198;
          goto LAB_0cc40c0b;
        }
        if (-1 < (long)pauVar65) {
          lVar58 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,pauVar65);
          if (lVar58 == 0) {
            FUN_0eec74c0(pauVar65,0);
          }
          *(long *)*pauVar62 = lVar58;
          *(long *)(*pauVar62 + 8) = lVar58;
          *(undefined1 **)pauVar62[1] = *pauVar65 + lVar58;
          func_0x0eee2f00(lVar58,pauVar50,pauVar65);
          *(undefined1 **)(*pauVar62 + 8) = *pauVar65 + lVar58;
          goto LAB_0cc40be7;
        }
        goto LAB_0cc413e4;
      }
      puVar51 = (undefined1 *)func_0x0ccae300(param_1[7] + 8,pauVar65);
LAB_0cc40c0b:
      *(undefined1 **)param_1[8] = puVar51;
      pauVar62 = *(undefined1 (**) [16])*pauVar65;
      pauStack_108 = *(undefined1 (**) [16])(*pauVar65 + 8);
      if (pauVar62 != *(undefined1 (**) [16])(*pauVar65 + 8)) {
        pauStack_110 = param_1 + 0xd;
        pauStack_190 = (undefined1 (*) [16])(param_1[0xc] + 8);
        do {
          pauStack_1d0 = pauVar62;
          pauStack_1d8 = *(undefined1 (**) [16])*pauVar62;
          pauVar62 = pauStack_110;
          pauVar56 = pauStack_110;
          if (*(undefined1 (**) [16])*pauStack_110 != (undefined1 (*) [16])0x0) {
            if (((*pauStack_1d8)[8] & 1) == 0) {
              uVar59 = (ulong)((byte)(*pauStack_1d8)[8] >> 1);
              pauStack_1e0 = (undefined1 (*) [16])(*pauStack_1d8 + 9);
            }
            else {
              uVar59 = *(ulong *)pauStack_1d8[1];
              pauStack_1e0 = *(undefined1 (**) [16])(pauStack_1d8[1] + 8);
            }
            pauVar50 = *(undefined1 (**) [16])*pauStack_1d8;
            pauVar46 = *(undefined1 (**) [16])*pauStack_110;
            do {
              while( true ) {
                pauVar65 = pauVar46;
                pauVar62 = *(undefined1 (**) [16])pauVar65[2];
                pauVar56 = pauVar65;
                if (pauVar50 != pauVar62) break;
                bVar67 = (pauVar65[2][8] & 1) != 0;
                puVar51 = pauVar65[2] + 9;
                if (bVar67) {
                  puVar51 = *(undefined1 **)(pauVar65[3] + 8);
                }
                uVar63 = (ulong)((byte)pauVar65[2][8] >> 1);
                if (bVar67) {
                  uVar63 = *(ulong *)pauVar65[3];
                }
                uVar57 = uVar63;
                if (uVar59 <= uVar63) {
                  uVar57 = uVar59;
                }
                iVar48 = func_0x0eee2ff0(pauStack_1e0,puVar51,uVar57);
                bVar67 = uVar59 < uVar63;
                if (iVar48 != 0) {
                  bVar67 = iVar48 < 0;
                }
                if (!bVar67) {
                  iVar48 = func_0x0eee2ff0(puVar51,pauStack_1e0,uVar57);
                  bVar67 = uVar63 < uVar59;
                  if (iVar48 != 0) {
                    bVar67 = iVar48 < 0;
                  }
                  if (!bVar67) goto LAB_0cc40ed0;
                  goto LAB_0cc40dac;
                }
LAB_0cc40d00:
                pauVar46 = *(undefined1 (**) [16])*pauVar65;
                pauVar62 = pauVar65;
                if (*(undefined1 (**) [16])*pauVar65 == (undefined1 (*) [16])0x0) goto LAB_0cc40dbd;
              }
              if (pauVar50 < pauVar62) goto LAB_0cc40d00;
              if (pauVar50 <= pauVar62) {
LAB_0cc40ed0:
                if ((undefined1 (**) [16])(pauVar65[4] + 8) != &pauStack_208) goto LAB_0cc40eea;
                goto LAB_0cc40c6f;
              }
LAB_0cc40dac:
              pauVar46 = *(undefined1 (**) [16])(*pauVar65 + 8);
            } while (*(undefined1 (**) [16])(*pauVar65 + 8) != (undefined1 (*) [16])0x0);
            pauVar62 = (undefined1 (*) [16])(*pauVar65 + 8);
          }
LAB_0cc40dbd:
          pauVar65 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x70);
          pauVar50 = pauStack_190;
          if (pauVar65 == (undefined1 (*) [16])0x0) {
            FUN_0eec74c0(0x70,0);
          }
          pauVar46 = pauStack_1d8;
          pauStack_1c0 = pauVar50;
          pauStack_1b8 = (undefined1 (*) [16])0x0;
          pauVar65[3] = (undefined1  [16])0x0;
          pauVar65[2] = (undefined1  [16])0x0;
          *(undefined8 *)pauVar65[4] = 0;
          uStack_1c8 = pauVar65;
          if (pauVar65 + 2 != pauStack_1d8) {
            if (((*pauStack_1d8)[8] & 1) == 0) {
              *(undefined8 *)(pauVar65[3] + 8) = *(undefined8 *)(pauStack_1d8[1] + 8);
              uVar53 = *(undefined8 *)pauStack_1d8[1];
              *(undefined8 *)(pauVar65[2] + 8) = *(undefined8 *)(*pauStack_1d8 + 8);
              *(undefined8 *)pauVar65[3] = uVar53;
            }
            else {
              FUN_04885070(pauVar65[2] + 8,*(undefined8 *)(pauStack_1d8[1] + 8),
                           *(undefined8 *)pauStack_1d8[1]);
            }
          }
          *(undefined8 *)pauVar65[2] = *(undefined8 *)*pauVar46;
          *(undefined1 (*) [16])(pauVar65[4] + 8) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pauVar65[5] + 8) = (undefined1  [16])0x0;
          *(undefined8 *)(pauVar65[6] + 8) = 0;
          *pauVar65 = (undefined1  [16])0x0;
          *(undefined1 (**) [16])pauVar65[1] = pauVar56;
          *(undefined1 (**) [16])*pauVar62 = pauVar65;
          if (**(long **)*pauVar50 != 0) {
            *(long *)*pauVar50 = **(long **)*pauVar50;
          }
          func_0x048bed00(*(undefined8 *)param_1[0xd],pauVar65);
          *(long *)(param_1[0xd] + 8) = *(long *)(param_1[0xd] + 8) + 1;
          if ((undefined1 (**) [16])(pauVar65[4] + 8) != &pauStack_208) {
LAB_0cc40eea:
            pauVar62 = pauVar65 + 5;
            if (((*pauVar62)[0] & 1) == 0) {
              if ((uStack_200 & 1) == 0) {
                *(byte **)pauVar65[6] = pbStack_1f0;
                *(ulong *)*pauVar62 = uStack_200;
                *(undefined1 (**) [16])(pauVar65[5] + 8) = pauStack_1f8;
              }
              else {
                FUN_04885070(pauVar62,pbStack_1f0,pauStack_1f8);
              }
            }
            else {
              pauVar56 = (undefined1 (*) [16])(uStack_200 >> 1 & 0x7f);
              pbVar66 = (byte *)((long)&uStack_200 + 1);
              if ((uStack_200 & 1) != 0) {
                pauVar56 = pauStack_1f8;
                pbVar66 = pbStack_1f0;
              }
              func_0x04885120(pauVar62,pbVar66,pauVar56);
            }
          }
LAB_0cc40c6f:
          *(undefined1 (**) [16])(pauVar65[4] + 8) = pauStack_208;
          *(undefined8 *)(pauVar65[6] + 8) = 0;
          pauVar62 = (undefined1 (*) [16])(*pauStack_1d0 + 8);
        } while (pauVar62 != pauStack_108);
      }
      pauVar62 = *(undefined1 (**) [16])(auStack_f8._0_8_ + 0x18);
      if ((undefined1 (*) [16])0xfffffffffffffff7 < pauVar62) goto LAB_0cc413df;
      uVar53 = *(undefined8 *)(auStack_f8._0_8_ + 0x10);
      pauVar65 = (undefined1 (*) [16])((long)&uStack_1c8 + 1);
      if (pauVar62 < (undefined1 (*) [16])0x17) {
        uStack_1c8 = (undefined1 (*) [16])CONCAT71(uStack_1c8._1_7_,(char)pauVar62 * '\x02');
        pauVar50 = pauVar65;
        if (pauVar62 != (undefined1 (*) [16])0x0) goto LAB_0cc40fc2;
      }
      else {
        uVar59 = 0x1a;
        if (((ulong)pauVar62 | 7) != 0x17) {
          uVar59 = ((ulong)pauVar62 | 7) + 1;
        }
        pauVar50 = (undefined1 (*) [16])(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar59);
        if (pauVar50 == (undefined1 (*) [16])0x0) {
          FUN_0eec74c0(uVar59,0);
        }
        uStack_1c8 = (undefined1 (*) [16])(uVar59 | 1);
        pauStack_1c0 = pauVar62;
        pauStack_1b8 = pauVar50;
LAB_0cc40fc2:
        func_0x0eee2ee0(pauVar50,uVar53,pauVar62);
      }
      (*pauVar62)[(long)*pauVar50] = 0;
      pauVar50 = (undefined1 (*) [16])((ulong)uStack_1c8 >> 1 & 0x7f);
      if (((ulong)uStack_1c8 & 1) != 0) {
        pauVar50 = pauStack_1c0;
        pauVar65 = pauStack_1b8;
      }
      if (pauVar50 == (undefined1 (*) [16])0x0) {
        uVar59 = 0xcbf29ce484222325;
      }
      else {
        uVar63 = (ulong)((uint)pauVar50 & 7);
        uVar59 = 0xcbf29ce484222325;
        if ((undefined1 (*) [16])0x7 < pauVar50) {
          uVar57 = (ulong)pauVar50 & 0xfffffffffffffff8;
          do {
            uVar59 = (((((((uVar59 * 0x100000001b3 ^ (ulong)(byte)(*pauVar65)[0]) * 0x100000001b3 ^
                          (ulong)(byte)(*pauVar65)[1]) * 0x100000001b3 ^ (ulong)(byte)(*pauVar65)[2]
                         ) * 0x100000001b3 ^ (ulong)(byte)(*pauVar65)[3]) * 0x100000001b3 ^
                       (ulong)(byte)(*pauVar65)[4]) * 0x100000001b3 ^ (ulong)(byte)(*pauVar65)[5]) *
                      0x100000001b3 ^ (ulong)(byte)(*pauVar65)[6]) * 0x100000001b3 ^
                     (ulong)(byte)(*pauVar65)[7];
            pauVar65 = (undefined1 (*) [16])(*pauVar65 + 8);
            uVar57 = uVar57 - 8;
          } while (uVar57 != 0);
        }
        if (uVar63 != 0) {
          uVar57 = 0;
          do {
            uVar59 = uVar59 * 0x100000001b3 ^ (ulong)(byte)(*pauVar65)[uVar57];
            uVar57 = uVar57 + 1;
          } while (uVar63 != uVar57);
        }
      }
      lVar52 = func_0x0cd3b350(param_1 + 9,uVar59);
      lVar58 = lStack_a8;
      lVar60 = ((long)puStack_1a0 >> 3) * -0x5555555555555555;
      *(long *)(lVar52 + 0x10) = lVar60;
      if (((ulong)uStack_1c8 & 1) != 0) {
        func_0x0412a280(pauStack_1b8,(ulong)uStack_1c8 & 0xfffffffffffffffe);
      }
      lVar52 = func_0x0cd3b350(param_1 + 9,pauStack_208);
      *(long *)(lVar52 + 0x10) = lVar60;
      if ((*(byte *)(param_7 + 8) & 1) == 0) {
        if (*(byte *)(param_7 + 8) >> 1 == 0) goto LAB_0cc41156;
      }
      else if (*(long *)(param_7 + 0x10) == 0) {
LAB_0cc41156:
        param_7 = **(long **)*pauStack_198;
      }
      lVar52 = func_0x0cc422f0(param_1,param_7,0,0,0);
      if (lVar52 != 0) {
        if ((*(byte *)(lVar58 + 8) & 1) == 0) {
          uStack_c8 = *(undefined8 *)(lVar58 + 0x18);
          uStack_d8 = *(ulong *)(lVar58 + 8);
          uStack_d0 = *(undefined8 *)(lVar58 + 0x10);
        }
        else {
          func_0x0412e5e0(&uStack_d8,*(undefined8 *)(lVar58 + 0x18),*(undefined8 *)(lVar58 + 0x10));
        }
        if ((*(byte *)(lVar52 + 0xf0) & 1) != 0) {
          func_0x0412a280(*(undefined8 *)(lVar52 + 0x100),
                          *(ulong *)(lVar52 + 0xf0) & 0xfffffffffffffffe);
        }
        *(undefined8 *)(lVar52 + 0x100) = uStack_c8;
        *(ulong *)(lVar52 + 0xf0) = uStack_d8;
        *(undefined8 *)(lVar52 + 0xf8) = uStack_d0;
        uStack_d8 = uStack_d8 & 0xffffffffffff0000;
      }
      if ((uStack_128 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_128 & 0xff00ffffffffffff) - 8);
      }
      uStack_128 = 0;
      if ((uStack_130 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_130 & 0xff00ffffffffffff) - 8);
      }
      uStack_130 = 0;
      if ((uStack_148 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_148 & 0xff00ffffffffffff) - 8);
      }
      uStack_148 = 0;
      if ((uStack_150 & 0x80000000000000) != 0) {
        (**(code **)(_DAT_0f5463b0 + 0x28))(&DAT_0f5463b0,(uStack_150 & 0xff00ffffffffffff) - 8);
      }
      uStack_150 = 0;
      if (plStack_168 == &uStack_188) {
        lVar58 = 0x20;
      }
      else {
        lVar58 = 0x28;
        if (plStack_168 == (long *)0x0) goto joined_r0x0cc41361;
      }
      (**(code **)(*plStack_168 + lVar58))();
joined_r0x0cc41361:
      if (auStack_f8._0_8_ != 0) {
        auStack_f8._8_8_ = auStack_f8._0_8_;
        func_0x0412a280(auStack_f8._0_8_,lStack_e8 - auStack_f8._0_8_);
      }
      if ((uStack_200 & 1) != 0) {
        func_0x0412a280(pbStack_1f0,uStack_200 & 0xfffffffffffffffe);
      }
      func_0x0cc46730(auStack_60);
      return;
    }
    lVar58 = (long)plVar49 - lVar52;
    pauVar65 = (undefined1 (*) [16])((lVar58 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1);
    if (pauVar65 < (undefined1 (*) [16])0x1745d1745d1745e) {
      lVar52 = (long)*(long **)(param_1[6] + 8) - lVar52 >> 4;
      pauVar62 = (undefined1 (*) [16])(lVar52 * 0x5d1745d1745d1746);
      if (pauVar65 < pauVar62) {
        pauVar65 = pauVar62;
      }
      puStack_1a8 = (undefined8 *)(param_1[5] + 8);
      if (0xba2e8ba2e8ba2d < (ulong)(lVar52 * 0x2e8ba2e8ba2e8ba3)) {
        pauVar65 = (undefined1 (*) [16])0x1745d1745d1745d;
      }
      puStack_1a0 = puStack_1a8;
      if (pauVar65 == (undefined1 (*) [16])0x0) {
        uStack_1c8 = (undefined1 (*) [16])0x0;
      }
      else {
        if ((undefined1 (*) [16])0x1745d1745d1745d < pauVar65) goto LAB_0cc413ee;
        uStack_1c8 = (undefined1 (*) [16])
                     (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,(long)pauVar65 * 0xb0);
        if (uStack_1c8 == (undefined1 (*) [16])0x0) {
          FUN_0eec74c0((long)pauVar65 * 0xb0,0);
          uStack_1c8 = (undefined1 (*) [16])0x0;
        }
      }
      pauVar50 = (undefined1 (*) [16])((long)uStack_1c8 + lVar58);
      pauStack_1b0 = uStack_1c8 + (long)pauVar65 * 0xb;
      *(undefined8 *)((long)uStack_1c8 + lVar58) =
           *(undefined8 *)(*pauStack_1e0 + (long)pauStack_190 * 8);
      *(undefined1 (*) [16])((long)uStack_1c8 + lVar58 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)uStack_1c8 + lVar58 + 0x20) = (undefined1  [16])0x0;
      *(undefined8 *)((long)uStack_1c8 + lVar58 + 0x30) = 0;
      pauStack_1b8 = pauVar50;
      pauStack_1c0 = pauVar50;
      if ((undefined1 (**) [16])((long)uStack_1c8 + lVar58 + 0x10) != &pauStack_208) {
        puVar64 = (ulong *)((long)uStack_1c8 + lVar58 + 0x18);
        if ((uStack_200 & 1) == 0) {
          *(byte **)((long)uStack_1c8 + lVar58 + 0x28) = pbStack_1f0;
          *puVar64 = uStack_200;
          *(undefined1 (**) [16])((long)uStack_1c8 + lVar58 + 0x20) = pauStack_1f8;
        }
        else {
          FUN_04885070(puVar64,pbStack_1f0,pauStack_1f8);
        }
      }
      *(undefined1 (**) [16])pauVar50[1] = pauStack_208;
      pauVar65 = pauStack_1b8 + 0xb;
      pauVar50[4] = (undefined1  [16])0x0;
      pauVar50[5] = (undefined1  [16])0x0;
      pauVar50[6] = (undefined1  [16])0x0;
      pauVar50[7] = (undefined1  [16])0x0;
      pauVar50[8] = (undefined1  [16])0x0;
      pauVar50[9] = (undefined1  [16])0x0;
      pauVar50[10] = (undefined1  [16])0x0;
      pauVar62 = *(undefined1 (**) [16])(param_1[5] + 8);
      puStack_50 = puStack_1a0;
      ppauStack_48 = &pauStack_a0;
      ppauStack_40 = &pauStack_100;
      uStack_38 = 0;
      lVar58 = (long)pauVar62 - (long)*(undefined1 (**) [16])param_1[6];
      pauVar50 = (undefined1 (*) [16])((long)pauStack_1c0 + lVar58);
      pauVar56 = pauVar62;
      pauVar46 = *(undefined1 (**) [16])param_1[6];
      pauVar5 = pauVar62;
      pauStack_1b8 = pauVar65;
      pauStack_100 = pauVar50;
      pauVar47 = pauVar50;
      pauStack_a0 = pauVar50;
      if (lVar58 != 0) {
        do {
          pauStack_b0 = pauVar65;
          pauStack_b8 = pauVar47;
          pauStack_1d8 = pauVar5;
          pauStack_1e0 = pauVar46;
          *(undefined8 *)*pauVar50 = *(undefined8 *)*pauVar56;
          pauVar65 = (undefined1 (*) [16])(pauVar50[1] + 8);
          pauVar50[1] = (undefined1  [16])0x0;
          pauVar50[2] = (undefined1  [16])0x0;
          *(undefined8 *)pauVar50[3] = 0;
          pauStack_100 = pauVar50;
          if (pauVar56 != pauVar50) {
            if ((pauVar56[1][8] & 1) == 0) {
              *(undefined8 *)(pauVar50[2] + 8) = *(undefined8 *)(pauVar56[2] + 8);
              uVar53 = *(undefined8 *)pauVar56[2];
              *(undefined8 *)*pauVar65 = *(undefined8 *)(pauVar56[1] + 8);
              *(undefined8 *)pauVar50[2] = uVar53;
            }
            else {
              FUN_04885070(pauVar65,*(undefined8 *)(pauVar56[2] + 8),*(undefined8 *)pauVar56[2]);
            }
          }
          *(undefined8 *)pauVar50[1] = *(undefined8 *)pauVar56[1];
          pauVar46 = pauVar50 + 4;
          pauVar5 = *(undefined1 (**) [16])pauVar56[6];
          pauStack_1d0 = pauVar65;
          if (pauVar5 == (undefined1 (*) [16])0x0) {
            uVar53 = 0;
LAB_0cc40452:
            *(undefined8 *)pauVar50[6] = uVar53;
          }
          else {
            if (pauVar56 + 4 != pauVar5) {
              uVar53 = (**(code **)(*(long *)*pauVar5 + 0x10))();
              goto LAB_0cc40452;
            }
            *(undefined1 (**) [16])pauVar50[6] = pauVar46;
            (**(code **)(**(long **)pauVar56[6] + 0x18))(*(long **)pauVar56[6],pauVar46);
          }
          pauStack_108 = pauVar46;
          func_0x0d88e390(pauVar50 + 7,pauVar56 + 7);
          *(undefined8 *)pauVar50[9] = *(undefined8 *)pauVar56[9];
          *(undefined8 *)(pauVar50[9] + 8) = 0;
          uVar59 = *(ulong *)(pauVar56[9] + 8);
          if ((uVar59 & 0x80000000000000) != 0) {
            lVar52 = *(long *)((uVar59 & 0xff00ffffffffffff) - 8);
            lVar58 = lVar52 + 9;
            plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar58,8);
            if (lVar58 != 0 && plVar49 == (long *)0x0) {
              FUN_0eec74c0(lVar58,8);
            }
            *plVar49 = lVar52;
            func_0x0eee2f00(plVar49 + 1,uVar59 & 0xff00ffffffffffff,lVar52);
            *(undefined1 *)((long)plVar49 + lVar52 + 8) = 0;
            uVar59 = (ulong)(plVar49 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            pauVar62 = pauStack_1d8;
          }
          *(ulong *)(pauVar50[9] + 8) = uVar59;
          *(undefined8 *)pauVar50[10] = 0;
          uVar59 = *(ulong *)pauVar56[10];
          if ((uVar59 & 0x80000000000000) != 0) {
            pauStack_110 = (undefined1 (*) [16])(pauVar50[9] + 8);
            lVar52 = *(long *)((uVar59 & 0xff00ffffffffffff) - 8);
            lVar58 = lVar52 + 9;
            plVar49 = (long *)(**(code **)(_DAT_0f5463b0 + 0x20))(&DAT_0f5463b0,lVar58,8);
            if (lVar58 != 0 && plVar49 == (long *)0x0) {
              FUN_0eec74c0(lVar58,8);
            }
            *plVar49 = lVar52;
            func_0x0eee2f00(plVar49 + 1,uVar59 & 0xff00ffffffffffff,lVar52);
            *(undefined1 *)((long)plVar49 + lVar52 + 8) = 0;
            uVar59 = (ulong)(plVar49 + 1) & 0xff00ffffffffffff | 0x80000000000000;
            pauVar62 = pauStack_1d8;
          }
          pauVar46 = pauStack_1e0;
          *(ulong *)pauVar50[10] = uVar59;
          *(undefined4 *)(pauVar50[10] + 8) = *(undefined4 *)(pauVar56[10] + 8);
          pauVar56 = pauVar56 + 0xb;
          pauVar50 = pauStack_100 + 0xb;
          pauVar5 = pauStack_1d8;
          pauVar47 = pauStack_b8;
          pauVar65 = pauStack_b0;
        } while (pauVar56 != pauStack_1e0);
        uStack_38 = 1;
        pauStack_100 = pauVar50;
        do {
          if ((*(ulong *)pauVar62[10] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(*(ulong *)pauVar62[10] & 0xff00ffffffffffff) - 8);
          }
          *(undefined8 *)pauVar62[10] = 0;
          if ((*(ulong *)(pauVar62[9] + 8) & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(*(ulong *)(pauVar62[9] + 8) & 0xff00ffffffffffff) - 8);
          }
          *(undefined8 *)(pauVar62[9] + 8) = 0;
          if ((*(ulong *)pauVar62[8] & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(*(ulong *)pauVar62[8] & 0xff00ffffffffffff) - 8);
          }
          *(undefined8 *)pauVar62[8] = 0;
          if ((*(ulong *)(pauVar62[7] + 8) & 0x80000000000000) != 0) {
            (**(code **)(_DAT_0f5463b0 + 0x28))
                      (&DAT_0f5463b0,(*(ulong *)(pauVar62[7] + 8) & 0xff00ffffffffffff) - 8);
          }
          *(undefined8 *)(pauVar62[7] + 8) = 0;
          pauVar65 = *(undefined1 (**) [16])pauVar62[6];
          if (pauVar62 + 4 == pauVar65) {
            lVar58 = 0x20;
LAB_0cc40705:
            (**(code **)(*(long *)*pauVar65 + lVar58))();
            bVar2 = pauVar62[1][8];
          }
          else {
            lVar58 = 0x28;
            if (pauVar65 != (undefined1 (*) [16])0x0) goto LAB_0cc40705;
            bVar2 = pauVar62[1][8];
          }
          if ((bVar2 & 1) != 0) {
            func_0x0412a280(*(undefined8 *)(pauVar62[2] + 8),
                            *(ulong *)(pauVar62[1] + 8) & 0xfffffffffffffffe);
          }
          pauVar62 = pauVar62 + 0xb;
        } while (pauVar62 != pauVar46);
        pauVar62 = (undefined1 (*) [16])*puStack_1a0;
        pauVar50 = pauStack_b8;
        pauVar65 = pauStack_b0;
      }
      *(undefined1 (**) [16])(param_1[5] + 8) = pauVar50;
      *(undefined1 (**) [16])param_1[6] = pauVar65;
      lVar58 = *(long *)(param_1[6] + 8);
      *(undefined1 (**) [16])(param_1[6] + 8) = pauStack_1b0;
      if (pauVar62 != (undefined1 (*) [16])0x0) {
        func_0x0412a280(pauVar62,lVar58 - (long)pauVar62);
      }
      goto LAB_0cc40782;
    }
  }
  else {
    func_0x04882e30();
    pauVar50 = param_1;
LAB_0cc413df:
    func_0x04882e30();
LAB_0cc413e4:
    func_0x04fa52a0();
  }
  func_0x0cd3b7c0();
LAB_0cc413ee:
  uVar53 = func_0x04882eb0();
  if (((*pauVar65)[0] & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(pauVar50[2] + 8),
                    *(ulong *)(pauVar50[1] + 8) & 0xfffffffffffffffe);
  }
  func_0x0cd3b610(&uStack_1c8);
  func_0x0cc41770(&uStack_188);
  if (auStack_f8._0_8_ != 0) {
    auStack_f8._8_8_ = auStack_f8._0_8_;
    func_0x0412a280(auStack_f8._0_8_,lStack_e8 - auStack_f8._0_8_);
  }
  if ((uStack_200 & 1) != 0) {
    func_0x0412a280(pbStack_1f0,uStack_200 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_60);
  func_0x0eee2d70(uVar53);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
