/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbda570 (ELF vaddr 0xcada570)
 * Label: caller-of-callee
 * Body:  [[0cbda570, 0cbdaf5a] [0cbdafb0, 0cbdafd3] [0cbdafd7, 0cbdafe1] [0cbdaffa, 0cbdb06c]]
 * Ghidra: FUN_0cbda570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbda570(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
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
  ulong uVar43;
  long *plVar44;
  long lVar45;
  byte *pbVar46;
  ulong uVar47;
  long lVar48;
  undefined8 uVar49;
  byte bVar50;
  ulong uVar51;
  byte *pbVar52;
  ulong uVar53;
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
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar63;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  
  uStack_8c = param_4;
  uStack_68 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = *param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar53 = uStack_58;
  uVar47 = uStack_60;
  uStack_48 = 0;
  uVar43 = uStack_60 >> 1 & 0x7f;
  if ((uStack_60 & 1) != 0) {
    uVar43 = uStack_58;
  }
  if (uVar43 == 0) {
LAB_0cbda717:
    uStack_68 = 0;
joined_r0x0cbda725:
    if ((uVar47 & 1) != 0) goto LAB_0cbda727;
LAB_0cbda702:
    pbStack_78 = pbStack_50;
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
  }
  else {
    pbVar59 = pbStack_50;
    if ((uStack_60 & 1) == 0) {
      pbVar59 = (byte *)((long)&uStack_60 + 1);
    }
    if (pbVar59 != (byte *)0x0) {
      if (*pbVar59 == 0) goto LAB_0cbda717;
      uVar54 = 0xcbf29ce484222325;
      uVar43 = func_0x0eee2e90(pbVar59);
      uStack_68 = uVar54;
      if (uVar43 != 0) {
        uVar51 = (ulong)((uint)uVar43 & 7);
        if (7 < uVar43) {
          uVar43 = uVar43 & 0xfffffffffffffff8;
          do {
            uVar54 = (((((((uVar54 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                          (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) * 0x100000001b3 ^
                        (ulong)pbVar59[3]) * 0x100000001b3 ^ (ulong)pbVar59[4]) * 0x100000001b3 ^
                      (ulong)pbVar59[5]) * 0x100000001b3 ^ (ulong)pbVar59[6]) * 0x100000001b3 ^
                     (ulong)pbVar59[7];
            pbVar59 = pbVar59 + 8;
            uVar43 = uVar43 - 8;
          } while (uVar43 != 0);
        }
        uStack_68 = uVar54;
        if (uVar51 != 0) {
          uVar43 = 0;
          do {
            uVar54 = uVar54 * 0x100000001b3 ^ (ulong)pbVar59[uVar43];
            uVar43 = uVar43 + 1;
            uStack_68 = uVar54;
          } while (uVar51 != uVar43);
        }
      }
      goto joined_r0x0cbda725;
    }
    uStack_68 = 0;
    if ((uStack_60 & 1) == 0) goto LAB_0cbda702;
LAB_0cbda727:
    func_0x0412e5e0(&uStack_88,pbStack_50,uVar53);
  }
  uStack_c8 = *(undefined8 **)(param_1 + 0x148);
  uStack_c0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar44 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar44 = *plVar44 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_c8);
  pbVar59 = uStack_c0;
  if (uStack_c0 != (byte *)0x0) {
    LOCK();
    pbVar52 = uStack_c0 + 8;
    lVar48 = *(long *)pbVar52;
    *(long *)pbVar52 = *(long *)pbVar52 + -1;
    UNLOCK();
    if (lVar48 == 0) {
      (**(code **)(*(long *)uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(pbVar59);
    }
  }
  plVar44 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar44 == (long *)0x0) {
    func_0x0eec74c0(0x3b0,0);
  }
  func_0x0c6c7010(plVar44,&uStack_88,uStack_8c);
  *plVar44 = (long)&UNK_0f4357d0;
  *(undefined4 *)(plVar44 + 0x75) = 0;
  *(undefined1 *)((long)plVar44 + 0x3ac) = 1;
  *(undefined1 *)((long)plVar44 + 0x136) = 0;
  *(ushort *)((long)plVar44 + 0x133) = *(ushort *)((long)plVar44 + 0x133) & 0xe1ff | 0x800;
  plVar44[0x21] = 0x4000;
  *(undefined1 *)((long)plVar44 + 0x131) = 4;
  *(undefined4 *)((long)plVar44 + 300) = 0x3f4ccccd;
  func_0x0d0211a0(plVar44,&UNK_0d021320,0);
  func_0x0d021390(plVar44,&UNK_0d021510,0);
  *plVar44 = (long)&UNK_0f3a3898;
  *(undefined1 *)((long)plVar44 + 0x131) = 0x32;
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar48 = 0;
    lVar45 = 0;
  }
  else {
    lVar45 = func_0x0412c300();
    lVar48 = 0;
    if (lVar45 != 0) {
      lVar48 = *(long *)(param_1 + 0x138);
    }
  }
  plVar44[0x73] = lVar48;
  plVar4 = (long *)plVar44[0x74];
  plVar44[0x74] = lVar45;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar48 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar48 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      func_0x0412c2d0(plVar4);
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
    func_0x04882e30();
    goto LAB_0cbdaf54;
  }
  pbVar52 = (byte *)((long)&uStack_e0 + 1);
  if (pbVar59 < (byte *)0x17) {
    uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,(char)pbVar59 * '\x02');
    if (pbVar59 != (byte *)0x0) goto LAB_0cbda97f;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar59 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar59 | 7) + 1;
    }
    pbVar52 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar52 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_e0 = (byte *)(uVar47 | 1);
    pbStack_d8 = pbVar59;
    pbStack_d0 = pbVar52;
LAB_0cbda97f:
    func_0x0eee2f00(pbVar52,lVar48,pbVar59);
  }
  pbVar55 = (byte *)((long)&uStack_e0 + 1);
  pbVar52[(long)pbVar59] = 0;
  pbVar57 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  pbVar52 = pbStack_d8;
  pbVar59 = pbStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    pbVar52 = pbVar57;
    pbVar59 = pbVar55;
  }
  if (pbVar52 != (byte *)0x0) {
    pbVar57 = pbVar59;
    if (pbVar52 < (byte *)0x8) {
LAB_0cbdaafc:
      do {
        bVar3 = *pbVar57;
        bVar50 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar50 = bVar3;
        }
        *pbVar57 = bVar50;
        pbVar57 = pbVar57 + 1;
      } while (pbVar57 != pbVar59 + (long)pbVar52);
    }
    else if (pbVar52 < (byte *)0x20) {
      pbVar46 = (byte *)0x0;
LAB_0cbdaa95:
      pbVar58 = (byte *)((ulong)pbVar52 & 0xfffffffffffffff8);
      pbVar57 = pbVar59 + (long)pbVar58;
      do {
        uVar49 = *(undefined8 *)(pbVar59 + (long)pbVar46);
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
        cVar11 = (char)((ulong)uVar49 >> 0x38);
        bVar72 = cVar73 + DAT_014e9110._6_1_;
        bVar74 = cVar11 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar50 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar59 + (long)pbVar46) =
             CONCAT17((~-((byte)((bVar74 < bVar10) * bVar10 | (bVar74 >= bVar10) * bVar74) == bVar74
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar72 < bVar9) * bVar9 | (bVar72 >= bVar9) * bVar72) ==
                                  bVar72) & UNK_014ea366) + cVar73,
                               CONCAT15((~-((byte)((bVar70 < bVar8) * bVar8 |
                                                  (bVar70 >= bVar8) * bVar70) == bVar70) &
                                        UNK_014ea365) + cVar71,
                                        CONCAT14((~-((byte)((bVar68 < bVar7) * bVar7 |
                                                           (bVar68 >= bVar7) * bVar68) == bVar68) &
                                                 UNK_014ea364) + cVar69,
                                                 CONCAT13((~-((byte)((bVar66 < bVar6) * bVar6 |
                                                                    (bVar66 >= bVar6) * bVar66) ==
                                                             bVar66) & UNK_014ea363) + cVar67,
                                                          CONCAT12((~-((byte)((bVar64 < bVar5) *
                                                                              bVar5 | (bVar64 >=
                                                                                      bVar5) * 
                                                  bVar64) == bVar64) & UNK_014ea362) + cVar65,
                                                  CONCAT11((~-((byte)((bVar62 < bVar50) * bVar50 |
                                                                     (bVar62 >= bVar50) * bVar62) ==
                                                              bVar62) & UNK_014ea361) + cVar63,
                                                           (~-((byte)((bVar61 < bVar3) * bVar3 |
                                                                     (bVar61 >= bVar3) * bVar61) ==
                                                              bVar61) & DAT_014ea360) + (char)uVar49
                                                          )))))));
        pbVar46 = pbVar46 + 8;
      } while (pbVar58 != pbVar46);
      if (pbVar52 != pbVar58) goto LAB_0cbdaafc;
    }
    else {
      pbVar46 = (byte *)((ulong)pbVar52 & 0xffffffffffffffe0);
      pbVar57 = (byte *)0x0;
      do {
        pbVar58 = pbVar59 + (long)pbVar57;
        bVar12 = pbVar58[1];
        bVar13 = pbVar58[2];
        bVar14 = pbVar58[3];
        bVar15 = pbVar58[4];
        bVar16 = pbVar58[5];
        bVar17 = pbVar58[6];
        bVar18 = pbVar58[7];
        bVar19 = pbVar58[8];
        bVar20 = pbVar58[9];
        bVar21 = pbVar58[10];
        bVar22 = pbVar58[0xb];
        bVar23 = pbVar58[0xc];
        bVar24 = pbVar58[0xd];
        bVar25 = pbVar58[0xe];
        bVar26 = pbVar58[0xf];
        pbVar2 = pbVar59 + 0x10 + (long)pbVar57;
        bVar27 = *pbVar2;
        bVar28 = pbVar2[1];
        bVar29 = pbVar2[2];
        bVar30 = pbVar2[3];
        bVar31 = pbVar2[4];
        bVar32 = pbVar2[5];
        bVar33 = pbVar2[6];
        bVar34 = pbVar2[7];
        bVar35 = pbVar2[8];
        bVar36 = pbVar2[9];
        bVar37 = pbVar2[10];
        bVar38 = pbVar2[0xb];
        bVar39 = pbVar2[0xc];
        bVar40 = pbVar2[0xd];
        bVar41 = pbVar2[0xe];
        bVar42 = pbVar2[0xf];
        bVar75 = *pbVar58 + DAT_014e86b0;
        bVar76 = bVar12 + DAT_014e86b0._1_1_;
        bVar77 = bVar13 + DAT_014e86b0._2_1_;
        bVar78 = bVar14 + DAT_014e86b0._3_1_;
        bVar79 = bVar15 + DAT_014e86b0._4_1_;
        bVar80 = bVar16 + DAT_014e86b0._5_1_;
        bVar81 = bVar17 + DAT_014e86b0._6_1_;
        bVar82 = bVar18 + DAT_014e86b0._7_1_;
        bVar83 = bVar19 + DAT_014e86b0._8_1_;
        bVar84 = bVar20 + DAT_014e86b0._9_1_;
        bVar85 = bVar21 + DAT_014e86b0._10_1_;
        bVar86 = bVar22 + DAT_014e86b0._11_1_;
        bVar87 = bVar23 + DAT_014e86b0._12_1_;
        bVar88 = bVar24 + DAT_014e86b0._13_1_;
        bVar89 = bVar25 + DAT_014e86b0._14_1_;
        bVar90 = bVar26 + DAT_014e86b0._15_1_;
        bVar91 = bVar27 + DAT_014e86b0;
        bVar92 = bVar28 + DAT_014e86b0._1_1_;
        bVar93 = bVar29 + DAT_014e86b0._2_1_;
        bVar94 = bVar30 + DAT_014e86b0._3_1_;
        bVar95 = bVar31 + DAT_014e86b0._4_1_;
        bVar96 = bVar32 + DAT_014e86b0._5_1_;
        bVar97 = bVar33 + DAT_014e86b0._6_1_;
        bVar98 = bVar34 + DAT_014e86b0._7_1_;
        bVar99 = bVar35 + DAT_014e86b0._8_1_;
        bVar100 = bVar36 + DAT_014e86b0._9_1_;
        bVar101 = bVar37 + DAT_014e86b0._10_1_;
        bVar102 = bVar38 + DAT_014e86b0._11_1_;
        bVar103 = bVar39 + DAT_014e86b0._12_1_;
        bVar104 = bVar40 + DAT_014e86b0._13_1_;
        bVar105 = bVar41 + DAT_014e86b0._14_1_;
        bVar106 = bVar42 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar50 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
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
        pbVar2[1] = (-((byte)((bVar50 < bVar76) * bVar50 | (bVar50 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead51) + bVar12;
        pbVar2[2] = (-((byte)((bVar5 < bVar77) * bVar5 | (bVar5 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead52) + bVar13;
        pbVar2[3] = (-((byte)((bVar6 < bVar78) * bVar6 | (bVar6 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead53) + bVar14;
        pbVar2[4] = (-((byte)((bVar7 < bVar79) * bVar7 | (bVar7 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead54) + bVar15;
        pbVar2[5] = (-((byte)((bVar8 < bVar80) * bVar8 | (bVar8 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead55) + bVar16;
        pbVar2[6] = (-((byte)((bVar9 < bVar81) * bVar9 | (bVar9 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead56) + bVar17;
        pbVar2[7] = (-((byte)((bVar10 < bVar82) * bVar10 | (bVar10 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead57) + bVar18;
        pbVar2[8] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead58) + bVar19;
        pbVar2[9] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead59) + bVar20;
        pbVar2[10] = (-((byte)((bVar64 < bVar85) * bVar64 | (bVar64 >= bVar85) * bVar85) == bVar85)
                     & UNK_014ead5a) + bVar21;
        pbVar2[0xb] = (-((byte)((bVar66 < bVar86) * bVar66 | (bVar66 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5b) + bVar22;
        pbVar2[0xc] = (-((byte)((bVar68 < bVar87) * bVar68 | (bVar68 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5c) + bVar23;
        pbVar2[0xd] = (-((byte)((bVar70 < bVar88) * bVar70 | (bVar70 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5d) + bVar24;
        pbVar2[0xe] = (-((byte)((bVar72 < bVar89) * bVar72 | (bVar72 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5e) + bVar25;
        pbVar2[0xf] = (-((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5f) + bVar26;
        pbVar58 = pbVar59 + 0x10 + (long)pbVar57;
        *pbVar58 = (-((byte)((bVar3 < bVar91) * bVar3 | (bVar3 >= bVar91) * bVar91) == bVar91) &
                   DAT_014ead50) + bVar27;
        pbVar58[1] = (-((byte)((bVar50 < bVar92) * bVar50 | (bVar50 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead51) + bVar28;
        pbVar58[2] = (-((byte)((bVar5 < bVar93) * bVar5 | (bVar5 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead52) + bVar29;
        pbVar58[3] = (-((byte)((bVar6 < bVar94) * bVar6 | (bVar6 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead53) + bVar30;
        pbVar58[4] = (-((byte)((bVar7 < bVar95) * bVar7 | (bVar7 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead54) + bVar31;
        pbVar58[5] = (-((byte)((bVar8 < bVar96) * bVar8 | (bVar8 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead55) + bVar32;
        pbVar58[6] = (-((byte)((bVar9 < bVar97) * bVar9 | (bVar9 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead56) + bVar33;
        pbVar58[7] = (-((byte)((bVar10 < bVar98) * bVar10 | (bVar10 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead57) + bVar34;
        pbVar58[8] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead58) + bVar35;
        pbVar58[9] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead59) + bVar36;
        pbVar58[10] = (-((byte)((bVar64 < bVar101) * bVar64 | (bVar64 >= bVar101) * bVar101) ==
                        bVar101) & UNK_014ead5a) + bVar37;
        pbVar58[0xb] = (-((byte)((bVar66 < bVar102) * bVar66 | (bVar66 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5b) + bVar38;
        pbVar58[0xc] = (-((byte)((bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5c) + bVar39;
        pbVar58[0xd] = (-((byte)((bVar70 < bVar104) * bVar70 | (bVar70 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5d) + bVar40;
        pbVar58[0xe] = (-((byte)((bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5e) + bVar41;
        pbVar58[0xf] = (-((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5f) + bVar42;
        pbVar57 = pbVar57 + 0x20;
      } while (pbVar46 != pbVar57);
      if (pbVar52 != pbVar46) {
        if (((ulong)pbVar52 & 0x18) == 0) {
          pbVar57 = pbVar46 + (long)pbVar59;
          goto LAB_0cbdaafc;
        }
        goto LAB_0cbdaa95;
      }
    }
    pbVar57 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    pbVar57 = pbStack_d8;
    pbVar55 = pbStack_d0;
  }
  pbVar59 = pbVar55 + (long)pbVar57;
  pbVar52 = pbVar57;
  pbVar46 = pbVar55;
  while (((pbVar58 = pbVar59, 0 < (long)pbVar52 &&
          (pbVar46 = (byte *)func_0x0eee2ef0(pbVar46,0x3a,pbVar52), pbVar46 != (byte *)0x0)) &&
         (pbVar58 = pbVar46, *pbVar46 != 0x3a))) {
    pbVar46 = pbVar46 + 1;
    pbVar52 = pbVar59 + -(long)pbVar46;
  }
  pbVar52 = pbVar58 + -(long)pbVar55;
  if (pbVar57 < pbVar58 + -(long)pbVar55) {
    pbVar52 = pbVar57;
  }
  if (pbVar58 == pbVar59) {
    pbVar52 = pbVar57;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar52) {
LAB_0cbdaf54:
    uVar49 = func_0x04882e30();
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))(plVar44);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) goto LAB_0cbdb020;
    do {
      while ((uStack_60 & 1) != 0) {
        func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
        uVar49 = func_0x0eee2d70(uVar49);
      }
      func_0x0eee2d70(uVar49);
LAB_0cbdb020:
      func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    } while( true );
  }
  if (pbVar52 < (byte *)0x17) {
    uStack_c8 = (undefined8 *)CONCAT71(uStack_c8._1_7_,(char)pbVar52 * '\x02');
    pbVar59 = (byte *)((long)&uStack_c8 + 1);
    if (pbVar52 != (byte *)0x0) goto LAB_0cbdac00;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar52 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar52 | 7) + 1;
    }
    pbVar59 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar59 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_c8 = (undefined8 *)(uVar47 | 1);
    uStack_c0 = pbVar52;
    pbStack_b8 = pbVar59;
LAB_0cbdac00:
    memmove(pbVar59,pbVar55,pbVar52);
  }
  pbVar59[(long)pbVar52] = 0;
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
    func_0x0412e5e0(&uStack_c0,pbStack_d0,pbStack_d8);
  }
  uStack_a8 = 0;
  if (((ulong)uStack_c0 & 1) == 0) {
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_0cbdacb0;
  }
  else if (pbStack_b8 != (byte *)0x0) {
LAB_0cbdacb0:
    pbVar59 = pbStack_b0;
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar59 = (byte *)((long)&uStack_c0 + 1);
    }
    if ((pbVar59 != (byte *)0x0) && (*pbVar59 != 0)) {
      puVar56 = (undefined8 *)0xcbf29ce484222325;
      uVar47 = func_0x0eee2e90(pbVar59);
      if (uVar47 != 0) {
        uVar53 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            puVar56 = (undefined8 *)
                      (((((((((long)puVar56 * 0x100000001b3 ^ (ulong)*pbVar59) * 0x100000001b3 ^
                            (ulong)pbVar59[1]) * 0x100000001b3 ^ (ulong)pbVar59[2]) * 0x100000001b3
                          ^ (ulong)pbVar59[3]) * 0x100000001b3 ^ (ulong)pbVar59[4]) * 0x100000001b3
                        ^ (ulong)pbVar59[5]) * 0x100000001b3 ^ (ulong)pbVar59[6]) * 0x100000001b3 ^
                      (ulong)pbVar59[7]);
            pbVar59 = pbVar59 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        if (uVar53 != 0) {
          uVar47 = 0;
          do {
            puVar56 = (undefined8 *)((long)puVar56 * 0x100000001b3 ^ (ulong)pbVar59[uVar47]);
            uVar47 = uVar47 + 1;
          } while (uVar53 != uVar47);
        }
      }
      goto LAB_0cbdada9;
    }
  }
  puVar56 = (undefined8 *)0x0;
LAB_0cbdada9:
  uStack_c8 = puVar56;
  puStack_98 = &uStack_c8;
  lVar48 = FUN_05cf8b10(param_1,&uStack_c8,&UNK_01563a4f,&puStack_98,&uStack_e1);
  plVar4 = *(long **)(lVar48 + 0x48);
  *(long **)(lVar48 + 0x48) = plVar44;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_98 = uStack_c8;
  lVar48 = FUN_05cf8dc0(param_1 + 0xf8,&puStack_98);
  if ((*(byte *)(lVar48 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar48 + 0x28),*(ulong *)(lVar48 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar48 + 0x28) = pbStack_b0;
  *(byte **)(lVar48 + 0x18) = uStack_c0;
  *(byte **)(lVar48 + 0x20) = pbStack_b8;
  uStack_c0 = (byte *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar48 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar48 + 0x30) = 0;
  if (((ulong)uStack_e0 & 1) != 0) {
    func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(plVar44,0xf6ff6a8,_DAT_0f6ff6b8);
  func_0x0c6cd240(plVar44,0xf6ff758,_DAT_0f6ff768);
  func_0x0c6cd240(plVar44,0xf6ff700,_DAT_0f6ff710);
  func_0x0c6cd240(plVar44,0xf6ff7b0,_DAT_0f6ff7c0);
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return plVar44;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
