/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbd7ab0 (ELF vaddr 0xcad7ab0)
 * Label: caller-of-callee
 * Body:  [[0cbd7ab0, 0cbd83fd] [0cbd8461, 0cbd8484] [0cbd8488, 0cbd8502]]
 * Ghidra: FUN_0cbd7ab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0cbd7ab0(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  byte bVar4;
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
  long lVar43;
  ulong uVar44;
  long lVar45;
  byte *pbVar46;
  ulong uVar47;
  undefined8 uVar48;
  byte bVar49;
  ulong uVar50;
  byte *pbVar51;
  ulong uVar52;
  byte *pbVar53;
  undefined8 *puVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  ulong uVar58;
  bool bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  byte bVar71;
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
  byte bVar104;
  byte bVar105;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
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
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  
  lVar43 = func_0x0cbd8510(param_2,&UNK_0130122d,0x14);
  uStack_68 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = *param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar52 = uStack_58;
  uVar47 = uStack_60;
  uStack_48 = 0;
  uVar58 = uStack_60 >> 1 & 0x7f;
  if ((uStack_60 & 1) != 0) {
    uVar58 = uStack_58;
  }
  uStack_8c = param_4;
  if (uVar58 == 0) {
LAB_0cbd7bcd:
    uVar58 = 0;
  }
  else {
    if ((uStack_60 & 1) == 0) {
      pbVar57 = (byte *)((long)&uStack_60 + 1);
      if (pbVar57 != (byte *)0x0) goto LAB_0cbd7b7d;
      goto LAB_0cbd7bcd;
    }
    pbVar57 = pbStack_50;
    if (pbStack_50 == (byte *)0x0) goto LAB_0cbd7bcd;
LAB_0cbd7b7d:
    if (*pbVar57 == 0) goto LAB_0cbd7bcd;
    uVar58 = 0xcbf29ce484222325;
    lStack_a0 = param_1;
    uVar44 = func_0x0eee2e90(pbVar57);
    param_1 = lStack_a0;
    if (uVar44 != 0) {
      uVar50 = (ulong)((uint)uVar44 & 7);
      if (7 < uVar44) {
        uVar44 = uVar44 & 0xfffffffffffffff8;
        do {
          uVar58 = (((((((uVar58 * 0x100000001b3 ^ (ulong)*pbVar57) * 0x100000001b3 ^
                        (ulong)pbVar57[1]) * 0x100000001b3 ^ (ulong)pbVar57[2]) * 0x100000001b3 ^
                      (ulong)pbVar57[3]) * 0x100000001b3 ^ (ulong)pbVar57[4]) * 0x100000001b3 ^
                    (ulong)pbVar57[5]) * 0x100000001b3 ^ (ulong)pbVar57[6]) * 0x100000001b3 ^
                   (ulong)pbVar57[7];
          pbVar57 = pbVar57 + 8;
          uVar44 = uVar44 - 8;
        } while (uVar44 != 0);
      }
      if (uVar50 != 0) {
        uVar44 = 0;
        do {
          uVar58 = uVar58 * 0x100000001b3 ^ (ulong)pbVar57[uVar44];
          uVar44 = uVar44 + 1;
        } while (uVar50 != uVar44);
      }
    }
  }
  uStack_68 = uVar58;
  if ((uVar47 & 1) == 0) {
    pbStack_78 = pbStack_50;
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
  }
  else {
    func_0x0412e5e0(&uStack_88,pbStack_50,uVar52);
  }
  uStack_c8 = *(undefined8 **)(param_1 + 0x148);
  uStack_c0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_c8);
  pbVar57 = uStack_c0;
  if (uStack_c0 != (byte *)0x0) {
    LOCK();
    pbVar51 = uStack_c0 + 8;
    lVar45 = *(long *)pbVar51;
    *(long *)pbVar51 = *(long *)pbVar51 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*(long *)uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(pbVar57);
    }
  }
  lVar45 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x420);
  if (lVar45 == 0) {
    func_0x0eec74c0(0x420,0);
  }
  func_0x0c6847c0(lVar45,&uStack_88,uStack_8c,lVar43,lVar43 + 0x20,lVar43 + 0x40);
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar48 = 0;
    lVar43 = 0;
  }
  else {
    lVar43 = func_0x0412c300();
    uVar48 = 0;
    if (lVar43 != 0) {
      uVar48 = *(undefined8 *)(param_1 + 0x138);
    }
  }
  *(undefined8 *)(lVar45 + 0x398) = uVar48;
  plVar1 = *(long **)(lVar45 + 0x3a0);
  *(long *)(lVar45 + 0x3a0) = lVar43;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar43 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar43 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  bVar59 = (*(byte *)(lVar45 + 0xd0) & 1) != 0;
  lVar43 = lVar45 + 0xd1;
  if (bVar59) {
    lVar43 = *(long *)(lVar45 + 0xe0);
  }
  pbVar57 = (byte *)(ulong)(*(byte *)(lVar45 + 0xd0) >> 1);
  if (bVar59) {
    pbVar57 = *(byte **)(lVar45 + 0xd8);
  }
  if ((byte *)0xfffffffffffffff7 < pbVar57) {
    func_0x04882e30();
    goto LAB_0cbd83f7;
  }
  pbVar51 = (byte *)((long)&uStack_e0 + 1);
  if (pbVar57 < (byte *)0x17) {
    uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,(char)pbVar57 * '\x02');
    if (pbVar57 != (byte *)0x0) goto LAB_0cbd7dab;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar57 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar57 | 7) + 1;
    }
    pbVar51 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar51 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_e0 = (byte *)(uVar47 | 1);
    pbStack_d8 = pbVar57;
    pbStack_d0 = pbVar51;
LAB_0cbd7dab:
    func_0x0eee2f00(pbVar51,lVar43,pbVar57);
  }
  pbVar53 = (byte *)((long)&uStack_e0 + 1);
  pbVar51[(long)pbVar57] = 0;
  pbVar55 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  pbVar51 = pbStack_d8;
  pbVar57 = pbStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    pbVar51 = pbVar55;
    pbVar57 = pbVar53;
  }
  if (pbVar51 != (byte *)0x0) {
    pbVar55 = pbVar57;
    if (pbVar51 < (byte *)0x8) {
LAB_0cbd7fc0:
      do {
        bVar4 = *pbVar55;
        bVar49 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar49 = bVar4;
        }
        *pbVar55 = bVar49;
        pbVar55 = pbVar55 + 1;
      } while (pbVar55 != pbVar57 + (long)pbVar51);
    }
    else if (pbVar51 < (byte *)0x20) {
      pbVar46 = (byte *)0x0;
LAB_0cbd7e99:
      pbVar56 = (byte *)((ulong)pbVar51 & 0xfffffffffffffff8);
      pbVar55 = pbVar57 + (long)pbVar56;
      do {
        uVar48 = *(undefined8 *)(pbVar57 + (long)pbVar46);
        bVar60 = (char)uVar48 + DAT_014e9110;
        cVar62 = (char)((ulong)uVar48 >> 8);
        bVar61 = cVar62 + DAT_014e9110._1_1_;
        cVar64 = (char)((ulong)uVar48 >> 0x10);
        bVar63 = cVar64 + DAT_014e9110._2_1_;
        cVar66 = (char)((ulong)uVar48 >> 0x18);
        bVar65 = cVar66 + DAT_014e9110._3_1_;
        cVar68 = (char)((ulong)uVar48 >> 0x20);
        bVar67 = cVar68 + DAT_014e9110._4_1_;
        cVar70 = (char)((ulong)uVar48 >> 0x28);
        bVar69 = cVar70 + DAT_014e9110._5_1_;
        cVar72 = (char)((ulong)uVar48 >> 0x30);
        cVar11 = (char)((ulong)uVar48 >> 0x38);
        bVar71 = cVar72 + DAT_014e9110._6_1_;
        bVar73 = cVar11 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar49 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar57 + (long)pbVar46) =
             CONCAT17((~-((byte)((bVar73 < bVar10) * bVar10 | (bVar73 >= bVar10) * bVar73) == bVar73
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar71 < bVar9) * bVar9 | (bVar71 >= bVar9) * bVar71) ==
                                  bVar71) & UNK_014ea366) + cVar72,
                               CONCAT15((~-((byte)((bVar69 < bVar8) * bVar8 |
                                                  (bVar69 >= bVar8) * bVar69) == bVar69) &
                                        UNK_014ea365) + cVar70,
                                        CONCAT14((~-((byte)((bVar67 < bVar7) * bVar7 |
                                                           (bVar67 >= bVar7) * bVar67) == bVar67) &
                                                 UNK_014ea364) + cVar68,
                                                 CONCAT13((~-((byte)((bVar65 < bVar6) * bVar6 |
                                                                    (bVar65 >= bVar6) * bVar65) ==
                                                             bVar65) & UNK_014ea363) + cVar66,
                                                          CONCAT12((~-((byte)((bVar63 < bVar5) *
                                                                              bVar5 | (bVar63 >=
                                                                                      bVar5) * 
                                                  bVar63) == bVar63) & UNK_014ea362) + cVar64,
                                                  CONCAT11((~-((byte)((bVar61 < bVar49) * bVar49 |
                                                                     (bVar61 >= bVar49) * bVar61) ==
                                                              bVar61) & UNK_014ea361) + cVar62,
                                                           (~-((byte)((bVar60 < bVar4) * bVar4 |
                                                                     (bVar60 >= bVar4) * bVar60) ==
                                                              bVar60) & DAT_014ea360) + (char)uVar48
                                                          )))))));
        pbVar46 = pbVar46 + 8;
      } while (pbVar56 != pbVar46);
      if (pbVar51 != pbVar56) goto LAB_0cbd7fc0;
    }
    else {
      pbVar46 = (byte *)((ulong)pbVar51 & 0xffffffffffffffe0);
      pbVar55 = (byte *)0x0;
      do {
        pbVar56 = pbVar57 + (long)pbVar55;
        bVar12 = pbVar56[1];
        bVar13 = pbVar56[2];
        bVar14 = pbVar56[3];
        bVar15 = pbVar56[4];
        bVar16 = pbVar56[5];
        bVar17 = pbVar56[6];
        bVar18 = pbVar56[7];
        bVar19 = pbVar56[8];
        bVar20 = pbVar56[9];
        bVar21 = pbVar56[10];
        bVar22 = pbVar56[0xb];
        bVar23 = pbVar56[0xc];
        bVar24 = pbVar56[0xd];
        bVar25 = pbVar56[0xe];
        bVar26 = pbVar56[0xf];
        pbVar3 = pbVar57 + 0x10 + (long)pbVar55;
        bVar27 = *pbVar3;
        bVar28 = pbVar3[1];
        bVar29 = pbVar3[2];
        bVar30 = pbVar3[3];
        bVar31 = pbVar3[4];
        bVar32 = pbVar3[5];
        bVar33 = pbVar3[6];
        bVar34 = pbVar3[7];
        bVar35 = pbVar3[8];
        bVar36 = pbVar3[9];
        bVar37 = pbVar3[10];
        bVar38 = pbVar3[0xb];
        bVar39 = pbVar3[0xc];
        bVar40 = pbVar3[0xd];
        bVar41 = pbVar3[0xe];
        bVar42 = pbVar3[0xf];
        bVar74 = *pbVar56 + DAT_014e86b0;
        bVar75 = bVar12 + DAT_014e86b0._1_1_;
        bVar76 = bVar13 + DAT_014e86b0._2_1_;
        bVar77 = bVar14 + DAT_014e86b0._3_1_;
        bVar78 = bVar15 + DAT_014e86b0._4_1_;
        bVar79 = bVar16 + DAT_014e86b0._5_1_;
        bVar80 = bVar17 + DAT_014e86b0._6_1_;
        bVar81 = bVar18 + DAT_014e86b0._7_1_;
        bVar82 = bVar19 + DAT_014e86b0._8_1_;
        bVar83 = bVar20 + DAT_014e86b0._9_1_;
        bVar84 = bVar21 + DAT_014e86b0._10_1_;
        bVar85 = bVar22 + DAT_014e86b0._11_1_;
        bVar86 = bVar23 + DAT_014e86b0._12_1_;
        bVar87 = bVar24 + DAT_014e86b0._13_1_;
        bVar88 = bVar25 + DAT_014e86b0._14_1_;
        bVar89 = bVar26 + DAT_014e86b0._15_1_;
        bVar90 = bVar27 + DAT_014e86b0;
        bVar91 = bVar28 + DAT_014e86b0._1_1_;
        bVar92 = bVar29 + DAT_014e86b0._2_1_;
        bVar93 = bVar30 + DAT_014e86b0._3_1_;
        bVar94 = bVar31 + DAT_014e86b0._4_1_;
        bVar95 = bVar32 + DAT_014e86b0._5_1_;
        bVar96 = bVar33 + DAT_014e86b0._6_1_;
        bVar97 = bVar34 + DAT_014e86b0._7_1_;
        bVar98 = bVar35 + DAT_014e86b0._8_1_;
        bVar99 = bVar36 + DAT_014e86b0._9_1_;
        bVar100 = bVar37 + DAT_014e86b0._10_1_;
        bVar101 = bVar38 + DAT_014e86b0._11_1_;
        bVar102 = bVar39 + DAT_014e86b0._12_1_;
        bVar103 = bVar40 + DAT_014e86b0._13_1_;
        bVar104 = bVar41 + DAT_014e86b0._14_1_;
        bVar105 = bVar42 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar49 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar60 = DAT_014e4170._8_1_;
        bVar61 = DAT_014e4170._9_1_;
        bVar63 = DAT_014e4170._10_1_;
        bVar65 = DAT_014e4170._11_1_;
        bVar67 = DAT_014e4170._12_1_;
        bVar69 = DAT_014e4170._13_1_;
        bVar71 = DAT_014e4170._14_1_;
        bVar73 = DAT_014e4170._15_1_;
        pbVar3 = pbVar57 + (long)pbVar55;
        *pbVar3 = (-((byte)((bVar4 < bVar74) * bVar4 | (bVar4 >= bVar74) * bVar74) == bVar74) &
                  DAT_014ead50) + *pbVar56;
        pbVar3[1] = (-((byte)((bVar49 < bVar75) * bVar49 | (bVar49 >= bVar75) * bVar75) == bVar75) &
                    UNK_014ead51) + bVar12;
        pbVar3[2] = (-((byte)((bVar5 < bVar76) * bVar5 | (bVar5 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead52) + bVar13;
        pbVar3[3] = (-((byte)((bVar6 < bVar77) * bVar6 | (bVar6 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead53) + bVar14;
        pbVar3[4] = (-((byte)((bVar7 < bVar78) * bVar7 | (bVar7 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead54) + bVar15;
        pbVar3[5] = (-((byte)((bVar8 < bVar79) * bVar8 | (bVar8 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead55) + bVar16;
        pbVar3[6] = (-((byte)((bVar9 < bVar80) * bVar9 | (bVar9 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead56) + bVar17;
        pbVar3[7] = (-((byte)((bVar10 < bVar81) * bVar10 | (bVar10 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead57) + bVar18;
        pbVar3[8] = (-((byte)((bVar60 < bVar82) * bVar60 | (bVar60 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead58) + bVar19;
        pbVar3[9] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead59) + bVar20;
        pbVar3[10] = (-((byte)((bVar63 < bVar84) * bVar63 | (bVar63 >= bVar84) * bVar84) == bVar84)
                     & UNK_014ead5a) + bVar21;
        pbVar3[0xb] = (-((byte)((bVar65 < bVar85) * bVar65 | (bVar65 >= bVar85) * bVar85) == bVar85)
                      & UNK_014ead5b) + bVar22;
        pbVar3[0xc] = (-((byte)((bVar67 < bVar86) * bVar67 | (bVar67 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5c) + bVar23;
        pbVar3[0xd] = (-((byte)((bVar69 < bVar87) * bVar69 | (bVar69 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5d) + bVar24;
        pbVar3[0xe] = (-((byte)((bVar71 < bVar88) * bVar71 | (bVar71 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5e) + bVar25;
        pbVar3[0xf] = (-((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5f) + bVar26;
        pbVar56 = pbVar57 + 0x10 + (long)pbVar55;
        *pbVar56 = (-((byte)((bVar4 < bVar90) * bVar4 | (bVar4 >= bVar90) * bVar90) == bVar90) &
                   DAT_014ead50) + bVar27;
        pbVar56[1] = (-((byte)((bVar49 < bVar91) * bVar49 | (bVar49 >= bVar91) * bVar91) == bVar91)
                     & UNK_014ead51) + bVar28;
        pbVar56[2] = (-((byte)((bVar5 < bVar92) * bVar5 | (bVar5 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead52) + bVar29;
        pbVar56[3] = (-((byte)((bVar6 < bVar93) * bVar6 | (bVar6 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead53) + bVar30;
        pbVar56[4] = (-((byte)((bVar7 < bVar94) * bVar7 | (bVar7 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead54) + bVar31;
        pbVar56[5] = (-((byte)((bVar8 < bVar95) * bVar8 | (bVar8 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead55) + bVar32;
        pbVar56[6] = (-((byte)((bVar9 < bVar96) * bVar9 | (bVar9 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead56) + bVar33;
        pbVar56[7] = (-((byte)((bVar10 < bVar97) * bVar10 | (bVar10 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead57) + bVar34;
        pbVar56[8] = (-((byte)((bVar60 < bVar98) * bVar60 | (bVar60 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead58) + bVar35;
        pbVar56[9] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead59) + bVar36;
        pbVar56[10] = (-((byte)((bVar63 < bVar100) * bVar63 | (bVar63 >= bVar100) * bVar100) ==
                        bVar100) & UNK_014ead5a) + bVar37;
        pbVar56[0xb] = (-((byte)((bVar65 < bVar101) * bVar65 | (bVar65 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5b) + bVar38;
        pbVar56[0xc] = (-((byte)((bVar67 < bVar102) * bVar67 | (bVar67 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5c) + bVar39;
        pbVar56[0xd] = (-((byte)((bVar69 < bVar103) * bVar69 | (bVar69 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5d) + bVar40;
        pbVar56[0xe] = (-((byte)((bVar71 < bVar104) * bVar71 | (bVar71 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5e) + bVar41;
        pbVar56[0xf] = (-((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5f) + bVar42;
        pbVar55 = pbVar55 + 0x20;
      } while (pbVar46 != pbVar55);
      if (pbVar51 != pbVar46) {
        if (((ulong)pbVar51 & 0x18) == 0) {
          pbVar55 = pbVar46 + (long)pbVar57;
          goto LAB_0cbd7fc0;
        }
        goto LAB_0cbd7e99;
      }
    }
    pbVar55 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    pbVar55 = pbStack_d8;
    pbVar53 = pbStack_d0;
  }
  pbVar57 = pbVar53 + (long)pbVar55;
  pbVar51 = pbVar55;
  pbVar46 = pbVar53;
  while (((pbVar56 = pbVar57, 0 < (long)pbVar51 &&
          (pbVar46 = (byte *)memchr(pbVar46,0x3a,pbVar51), pbVar46 != (byte *)0x0)) &&
         (pbVar56 = pbVar46, *pbVar46 != 0x3a))) {
    pbVar46 = pbVar46 + 1;
    pbVar51 = pbVar57 + -(long)pbVar46;
  }
  pbVar51 = pbVar56 + -(long)pbVar53;
  if (pbVar55 < pbVar56 + -(long)pbVar53) {
    pbVar51 = pbVar55;
  }
  if (pbVar56 == pbVar57) {
    pbVar51 = pbVar55;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar51) {
LAB_0cbd83f7:
    uVar48 = func_0x04882e30();
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    if (lVar45 != 0) {
      func_0x0ccb0890(lVar45);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) goto LAB_0cbd84b6;
    do {
      while ((uStack_60 & 1) != 0) {
        func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
        uVar48 = func_0x0eee2d70(uVar48);
      }
      func_0x0eee2d70(uVar48);
LAB_0cbd84b6:
      func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    } while( true );
  }
  if (pbVar51 < (byte *)0x17) {
    uStack_c8 = (undefined8 *)CONCAT71(uStack_c8._1_7_,(char)pbVar51 * '\x02');
    pbVar57 = (byte *)((long)&uStack_c8 + 1);
    if (pbVar51 != (byte *)0x0) goto LAB_0cbd80d0;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar51 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar51 | 7) + 1;
    }
    pbVar57 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar57 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_c8 = (undefined8 *)(uVar47 | 1);
    uStack_c0 = pbVar51;
    pbStack_b8 = pbVar57;
LAB_0cbd80d0:
    func_0x0eee2ee0(pbVar57,pbVar53,pbVar51);
  }
  pbVar57[(long)pbVar51] = 0;
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
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_0cbd8180;
  }
  else if (pbStack_b8 != (byte *)0x0) {
LAB_0cbd8180:
    pbVar57 = pbStack_b0;
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar57 = (byte *)((long)&uStack_c0 + 1);
    }
    if ((pbVar57 != (byte *)0x0) && (*pbVar57 != 0)) {
      puVar54 = (undefined8 *)0xcbf29ce484222325;
      uVar47 = func_0x0eee2e90(pbVar57);
      if (uVar47 != 0) {
        uVar52 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            puVar54 = (undefined8 *)
                      (((((((((long)puVar54 * 0x100000001b3 ^ (ulong)*pbVar57) * 0x100000001b3 ^
                            (ulong)pbVar57[1]) * 0x100000001b3 ^ (ulong)pbVar57[2]) * 0x100000001b3
                          ^ (ulong)pbVar57[3]) * 0x100000001b3 ^ (ulong)pbVar57[4]) * 0x100000001b3
                        ^ (ulong)pbVar57[5]) * 0x100000001b3 ^ (ulong)pbVar57[6]) * 0x100000001b3 ^
                      (ulong)pbVar57[7]);
            pbVar57 = pbVar57 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        if (uVar52 != 0) {
          uVar47 = 0;
          do {
            puVar54 = (undefined8 *)((long)puVar54 * 0x100000001b3 ^ (ulong)pbVar57[uVar47]);
            uVar47 = uVar47 + 1;
          } while (uVar52 != uVar47);
        }
      }
      goto LAB_0cbd8279;
    }
  }
  puVar54 = (undefined8 *)0x0;
LAB_0cbd8279:
  uStack_c8 = puVar54;
  puStack_98 = &uStack_c8;
  lVar43 = func_0x05cf8b10(param_1,&uStack_c8,&UNK_01563a4f,&puStack_98,&uStack_e1);
  plVar1 = *(long **)(lVar43 + 0x48);
  *(long *)(lVar43 + 0x48) = lVar45;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_98 = uStack_c8;
  lVar43 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_98);
  if ((*(byte *)(lVar43 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar43 + 0x28),*(ulong *)(lVar43 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar43 + 0x28) = pbStack_b0;
  *(byte **)(lVar43 + 0x18) = uStack_c0;
  *(byte **)(lVar43 + 0x20) = pbStack_b8;
  uStack_c0 = (byte *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar43 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar43 + 0x30) = 0;
  if (((ulong)uStack_e0 & 1) != 0) {
    func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(lVar45,0xf6fdf78,_DAT_0f6fdf88);
  func_0x0c6cd240(lVar45,0xf6fe398,_DAT_0f6fe3a8);
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return lVar45;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
