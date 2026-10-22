/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cc04b0 (ELF vaddr 0x5bc04b0)
 * Label: callee-of:0x5a1f120
 * Body:  [[05cc04b0, 05cc0c67] [05cc0cd7, 05cc0cfa] [05cc0cfe, 05cc0d33]]
 * Ghidra: FUN_05cc04b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_05cc04b0(long param_1,long param_2,undefined4 param_3,byte param_4)

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
  long *plVar44;
  ulong uVar45;
  long lVar46;
  byte *pbVar47;
  long lVar48;
  undefined8 uVar49;
  undefined1 uVar50;
  byte bVar51;
  byte *pbVar52;
  byte *pbVar53;
  undefined8 *puVar54;
  ushort uVar55;
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
  uStack_88 = *(undefined8 **)(param_1 + 0x148);
  uStack_80 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar44 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar44 = *plVar44 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_88);
  pbVar59 = uStack_80;
  if (uStack_80 != (byte *)0x0) {
    LOCK();
    pbVar52 = uStack_80 + 8;
    lVar48 = *(long *)pbVar52;
    *(long *)pbVar52 = *(long *)pbVar52 + -1;
    UNLOCK();
    if (lVar48 == 0) {
      (**(code **)(*(long *)uStack_80 + 0x10))(uStack_80);
      FUN_0412c2d0(pbVar59);
    }
  }
  plVar44 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar44 == (long *)0x0) {
    func_0x0eec74c0(0x3b0,0);
  }
  uVar56 = 0xd;
  if ((param_4 & 1) != 0) {
    uVar56 = 0x17;
  }
  uVar45 = 1;
  if (uVar56 <= (ulong)(_DAT_0f71e698 - _DAT_0f71e690 >> 3)) {
    uVar45 = uVar56;
  }
  func_0x0c6c7010(plVar44,&uStack_58,param_3,*(undefined8 *)(_DAT_0f71e690 + uVar45 * 8));
  uVar55 = 0x400;
  if ((param_4 & 1) != 0) {
    uVar55 = 0x1600;
  }
  *plVar44 = (long)&UNK_0f3a5200;
  *(byte *)(plVar44 + 0x75) = param_4 & 1;
  bVar60 = (param_4 & 1) == 0;
  uVar50 = 0xf;
  if (bVar60) {
    uVar50 = 0;
  }
  *(undefined4 *)(plVar44 + 0x29) = 0x3f7ae148;
  *(undefined1 *)((long)plVar44 + 0x136) = uVar50;
  *(ushort *)((long)plVar44 + 0x133) = uVar55 | *(ushort *)((long)plVar44 + 0x133) & 0xe9ff;
  *(byte *)((long)plVar44 + 0x132) = param_4 * '\x02' + '\x03';
  if (bVar60) {
    func_0x0c651080(plVar44,&UNK_0c651200,0);
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar48 = 0;
    lVar46 = 0;
  }
  else {
    lVar46 = func_0x0412c300();
    lVar48 = 0;
    if (lVar46 != 0) {
      lVar48 = *(long *)(param_1 + 0x138);
    }
  }
  plVar44[0x73] = lVar48;
  plVar4 = (long *)plVar44[0x74];
  plVar44[0x74] = lVar46;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar48 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar48 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0412c2d0(plVar4);
    }
  }
  bVar60 = (*(byte *)(plVar44 + 0x1a) & 1) != 0;
  lVar48 = (long)plVar44 + 0xd1;
  if (bVar60) {
    lVar48 = plVar44[0x1c];
  }
  pbVar59 = (byte *)(ulong)(*(byte *)(plVar44 + 0x1a) >> 1);
  if (bVar60) {
    pbVar59 = (byte *)plVar44[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar59) {
    FUN_04882e30();
    goto LAB_05cc0c61;
  }
  pbVar52 = (byte *)((long)&uStack_a0 + 1);
  if (pbVar59 < (byte *)0x17) {
    uStack_a0 = (byte *)CONCAT71(uStack_a0._1_7_,(char)pbVar59 * '\x02');
    if (pbVar59 != (byte *)0x0) goto LAB_05cc0734;
  }
  else {
    uVar56 = 0x1a;
    if (((ulong)pbVar59 | 7) != 0x17) {
      uVar56 = ((ulong)pbVar59 | 7) + 1;
    }
    pbVar52 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56);
    if (pbVar52 == (byte *)0x0) {
      func_0x0eec74c0(uVar56,0);
    }
    uStack_a0 = (byte *)(uVar56 | 1);
    pbStack_98 = pbVar59;
    pbStack_90 = pbVar52;
LAB_05cc0734:
    func_0x0eee2f00(pbVar52,lVar48,pbVar59);
  }
  pbVar53 = (byte *)((long)&uStack_a0 + 1);
  pbVar52[(long)pbVar59] = 0;
  pbVar57 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  pbVar52 = pbStack_98;
  pbVar59 = pbStack_90;
  if (((ulong)uStack_a0 & 1) == 0) {
    pbVar52 = pbVar57;
    pbVar59 = pbVar53;
  }
  if (pbVar52 != (byte *)0x0) {
    pbVar57 = pbVar59;
    if (pbVar52 < (byte *)0x8) {
LAB_05cc088c:
      do {
        bVar3 = *pbVar57;
        bVar51 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar51 = bVar3;
        }
        *pbVar57 = bVar51;
        pbVar57 = pbVar57 + 1;
      } while (pbVar57 != pbVar59 + (long)pbVar52);
    }
    else if (pbVar52 < (byte *)0x20) {
      pbVar47 = (byte *)0x0;
LAB_05cc0825:
      pbVar58 = (byte *)((ulong)pbVar52 & 0xfffffffffffffff8);
      pbVar57 = pbVar59 + (long)pbVar58;
      do {
        uVar49 = *(undefined8 *)(pbVar59 + (long)pbVar47);
        bVar61 = (char)uVar49 + DAT_014e9110;
        cVar63 = (char)((ulong)uVar49 >> 8);
        bVar62 = cVar63 + DAT_014e9110._1_1_;
        cVar65 = (char)((ulong)uVar49 >> 0x10);
        bVar64 = cVar65 + DAT_014e9110._2_1_;
        cVar67 = (char)((ulong)uVar49 >> 0x18);
        bVar66 = cVar67 + DAT_014e9110._3_1_;
        cVar69 = (char)((ulong)uVar49 >> 0x20);
        bVar68 = cVar69 + DAT_014e9110._4_1_;
        cVar71 = (char)((ulong)uVar49 >> 0x28);
        bVar70 = cVar71 + DAT_014e9110._5_1_;
        cVar73 = (char)((ulong)uVar49 >> 0x30);
        cVar12 = (char)((ulong)uVar49 >> 0x38);
        bVar72 = cVar73 + DAT_014e9110._6_1_;
        bVar74 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar51 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar59 + (long)pbVar47) =
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
                                                  CONCAT11((~-((byte)((bVar62 < bVar51) * bVar51 |
                                                                     (bVar62 >= bVar51) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar3) * bVar3 |
                                                                     (bVar61 >= bVar3) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar49
                                                          )))))));
        pbVar47 = pbVar47 + 8;
      } while (pbVar58 != pbVar47);
      if (pbVar52 != pbVar58) goto LAB_05cc088c;
    }
    else {
      pbVar47 = (byte *)((ulong)pbVar52 & 0xffffffffffffffe0);
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
        bVar51 = DAT_014e4170._1_1_;
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
        pbVar2[1] = (-((byte)((bVar51 < bVar76) * bVar51 | (bVar51 >= bVar76) * bVar76) == bVar76) &
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
        pbVar58[1] = (-((byte)((bVar51 < bVar92) * bVar51 | (bVar51 >= bVar92) * bVar92) == bVar92)
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
      } while (pbVar47 != pbVar57);
      if (pbVar52 != pbVar47) {
        if (((ulong)pbVar52 & 0x18) == 0) {
          pbVar57 = pbVar47 + (long)pbVar59;
          goto LAB_05cc088c;
        }
        goto LAB_05cc0825;
      }
    }
    pbVar57 = (byte *)(ulong)((byte)uStack_a0 >> 1);
  }
  if (((ulong)uStack_a0 & 1) != 0) {
    pbVar57 = pbStack_98;
    pbVar53 = pbStack_90;
  }
  pbVar59 = pbVar53 + (long)pbVar57;
  pbVar52 = pbVar57;
  pbVar47 = pbVar53;
  while (((pbVar58 = pbVar59, 0 < (long)pbVar52 &&
          (pbVar47 = (byte *)func_0x0eee2ef0(pbVar47,0x3a,pbVar52), pbVar47 != (byte *)0x0)) &&
         (pbVar58 = pbVar47, *pbVar47 != 0x3a))) {
    pbVar47 = pbVar47 + 1;
    pbVar52 = pbVar59 + -(long)pbVar47;
  }
  pbVar52 = pbVar58 + -(long)pbVar53;
  if (pbVar57 < pbVar58 + -(long)pbVar53) {
    pbVar52 = pbVar57;
  }
  if (pbVar58 == pbVar59) {
    pbVar52 = pbVar57;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar52) {
LAB_05cc0c61:
    uVar49 = FUN_04882e30();
    if (((ulong)uStack_a0 & 1) != 0) {
      func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
    }
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))(plVar44);
    }
    FUN_0cc46730(auStack_40);
    if ((uStack_58 & 1) != 0) {
      func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar49);
    pcVar5 = (code *)swi(3);
    plVar44 = (long *)(*pcVar5)();
    return plVar44;
  }
  if (pbVar52 < (byte *)0x17) {
    uStack_88 = (undefined8 *)CONCAT71(uStack_88._1_7_,(char)pbVar52 * '\x02');
    pbVar59 = (byte *)((long)&uStack_88 + 1);
    if (pbVar52 != (byte *)0x0) goto LAB_05cc0990;
  }
  else {
    uVar56 = 0x1a;
    if (((ulong)pbVar52 | 7) != 0x17) {
      uVar56 = ((ulong)pbVar52 | 7) + 1;
    }
    pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar56);
    if (pbVar59 == (byte *)0x0) {
      func_0x0eec74c0(uVar56,0);
    }
    uStack_88 = (undefined8 *)(uVar56 | 1);
    uStack_80 = pbVar52;
    pbStack_78 = pbVar59;
LAB_05cc0990:
    func_0x0eee2ee0(pbVar59,pbVar53,pbVar52);
  }
  pbVar59[(long)pbVar52] = 0;
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
    if ((byte)uStack_80 >> 1 != 0) goto LAB_05cc0a40;
  }
  else if (pbStack_78 != (byte *)0x0) {
LAB_05cc0a40:
    pbVar59 = pbStack_70;
    if (((ulong)uStack_80 & 1) == 0) {
      pbVar59 = (byte *)((long)&uStack_80 + 1);
    }
    if ((pbVar59 != (byte *)0x0) && (*pbVar59 != 0)) {
      puVar54 = (undefined8 *)0xcbf29ce484222325;
      uVar56 = func_0x0eee2e90(pbVar59);
      if (uVar56 != 0) {
        uVar45 = (ulong)((uint)uVar56 & 7);
        if (7 < uVar56) {
          uVar56 = uVar56 & 0xfffffffffffffff8;
          do {
            puVar54 = (undefined8 *)
                      (((((((((long)puVar54 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                            (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) * 0x100000001b3
                          ^ (ulong)pbVar59[3]) * 0x100000001b3 ^ (ulong)pbVar59[4]) * 0x100000001b3
                        ^ (ulong)pbVar59[5]) * 0x100000001b3 ^ (ulong)pbVar59[6]) * 0x100000001b3 ^
                      (ulong)pbVar59[7]);
            pbVar59 = pbVar59 + 8;
            uVar56 = uVar56 - 8;
          } while (uVar56 != 0);
        }
        if (uVar45 != 0) {
          uVar56 = 0;
          do {
            puVar54 = (undefined8 *)((long)puVar54 * 0x100000001b3 ^ (ulong)pbVar59[uVar56]);
            uVar56 = uVar56 + 1;
          } while (uVar45 != uVar56);
        }
      }
      goto LAB_05cc0b39;
    }
  }
  puVar54 = (undefined8 *)0x0;
LAB_05cc0b39:
  uStack_88 = puVar54;
  puStack_60 = &uStack_88;
  lVar48 = func_0x05cf8b10(param_1,&uStack_88,&UNK_01563a4f,&puStack_60,&uStack_a1);
  plVar4 = *(long **)(lVar48 + 0x48);
  *(long **)(lVar48 + 0x48) = plVar44;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_60 = uStack_88;
  lVar48 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_60);
  if ((*(byte *)(lVar48 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar48 + 0x28),*(ulong *)(lVar48 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar48 + 0x28) = pbStack_70;
  *(byte **)(lVar48 + 0x18) = uStack_80;
  *(byte **)(lVar48 + 0x20) = pbStack_78;
  uStack_80 = (byte *)((ulong)uStack_80 & 0xffffffffffff0000);
  *(undefined8 **)(lVar48 + 0x10) = uStack_88;
  *(undefined8 *)(lVar48 + 0x30) = 0;
  if (((ulong)uStack_a0 & 1) != 0) {
    func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
  }
  FUN_0cc46730(auStack_40);
  if ((uStack_58 & 1) != 0) {
    func_0x0412a280(uStack_48,uStack_58 & 0xfffffffffffffffe);
  }
  return plVar44;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
