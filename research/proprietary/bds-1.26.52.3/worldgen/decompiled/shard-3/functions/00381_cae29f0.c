/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe29f0 (ELF vaddr 0xcae29f0)
 * Label: caller-of-callee
 * Body:  [[0cbe29f0, 0cbe3345] [0cbe33b8, 0cbe33db] [0cbe33df, 0cbe344c]]
 * Ghidra: FUN_0cbe29f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbe29f0(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

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
  byte *pbVar44;
  ulong uVar45;
  long *plVar46;
  long lVar47;
  byte *pbVar48;
  ulong uVar49;
  long lVar50;
  undefined8 uVar51;
  byte bVar52;
  ulong uVar53;
  byte *pbVar54;
  ulong uVar55;
  byte *pbVar56;
  undefined8 *puVar57;
  byte *pbVar58;
  byte *pbVar59;
  uint uVar60;
  ulong uVar61;
  bool bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar72;
  byte bVar74;
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
  byte bVar108;
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
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  
  pbVar44 = (byte *)func_0x0cbe3450(param_2,&DAT_013a2857,0x10);
  uStack_68 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = *param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar55 = uStack_58;
  uVar49 = uStack_60;
  uStack_48 = 0;
  uVar61 = uStack_60 >> 1 & 0x7f;
  if ((uStack_60 & 1) != 0) {
    uVar61 = uStack_58;
  }
  uStack_8c = param_4;
  if (uVar61 == 0) {
LAB_0cbe2b0d:
    uVar61 = 0;
  }
  else {
    if ((uStack_60 & 1) == 0) {
      pbVar54 = (byte *)((long)&uStack_60 + 1);
      if (pbVar54 != (byte *)0x0) goto LAB_0cbe2abd;
      goto LAB_0cbe2b0d;
    }
    pbVar54 = pbStack_50;
    if (pbStack_50 == (byte *)0x0) goto LAB_0cbe2b0d;
LAB_0cbe2abd:
    if (*pbVar54 == 0) goto LAB_0cbe2b0d;
    uVar61 = 0xcbf29ce484222325;
    lStack_a0 = param_1;
    uVar45 = strlen(pbVar54);
    param_1 = lStack_a0;
    if (uVar45 != 0) {
      uVar53 = (ulong)((uint)uVar45 & 7);
      if (7 < uVar45) {
        uVar45 = uVar45 & 0xfffffffffffffff8;
        do {
          uVar61 = (((((((uVar61 * 0x100000001b3 ^ (ulong)*pbVar54) * 0x100000001b3 ^
                        (ulong)pbVar54[1]) * 0x100000001b3 ^ (ulong)pbVar54[2]) * 0x100000001b3 ^
                      (ulong)pbVar54[3]) * 0x100000001b3 ^ (ulong)pbVar54[4]) * 0x100000001b3 ^
                    (ulong)pbVar54[5]) * 0x100000001b3 ^ (ulong)pbVar54[6]) * 0x100000001b3 ^
                   (ulong)pbVar54[7];
          pbVar54 = pbVar54 + 8;
          uVar45 = uVar45 - 8;
        } while (uVar45 != 0);
      }
      if (uVar53 != 0) {
        uVar45 = 0;
        do {
          uVar61 = uVar61 * 0x100000001b3 ^ (ulong)pbVar54[uVar45];
          uVar45 = uVar45 + 1;
        } while (uVar53 != uVar45);
      }
    }
  }
  uStack_68 = uVar61;
  if (pbVar44[8] == 0) {
    uVar60 = (uint)*pbVar44 * 2 + 1;
    if ((uVar49 & 1) != 0) goto LAB_0cbe2b29;
LAB_0cbe2b52:
    pbStack_78 = pbStack_50;
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
  }
  else {
    uVar60 = *(uint *)(pbVar44 + 4);
    if ((uVar49 & 1) == 0) goto LAB_0cbe2b52;
LAB_0cbe2b29:
    func_0x0412e5e0(&uStack_88,pbStack_50,uVar55);
  }
  uStack_c8 = *(undefined8 **)(param_1 + 0x148);
  uStack_c0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar46 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar46 = *plVar46 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_c8);
  pbVar54 = uStack_c0;
  if (uStack_c0 != (byte *)0x0) {
    LOCK();
    pbVar56 = uStack_c0 + 8;
    lVar50 = *(long *)pbVar56;
    *(long *)pbVar56 = *(long *)pbVar56 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(pbVar54);
    }
  }
  plVar46 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar46 == (long *)0x0) {
    FUN_0eec74c0(0x3b0,0);
  }
  func_0x0c66b330(plVar46,&uStack_88,uStack_8c,*pbVar44,(ulong)uVar60 | 0x100000000);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar50 = 0;
    lVar47 = 0;
  }
  else {
    lVar47 = FUN_0412c300();
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
  bVar62 = (*(byte *)(plVar46 + 0x1a) & 1) != 0;
  lVar50 = (long)plVar46 + 0xd1;
  if (bVar62) {
    lVar50 = plVar46[0x1c];
  }
  pbVar44 = (byte *)(ulong)(*(byte *)(plVar46 + 0x1a) >> 1);
  if (bVar62) {
    pbVar44 = (byte *)plVar46[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar44) {
    func_0x04882e30();
    goto LAB_0cbe333f;
  }
  pbVar54 = (byte *)((long)&uStack_e0 + 1);
  if (pbVar44 < (byte *)0x17) {
    uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,(char)pbVar44 * '\x02');
    if (pbVar44 != (byte *)0x0) goto LAB_0cbe2d0e;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar44 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar44 | 7) + 1;
    }
    pbVar54 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar54 == (byte *)0x0) {
      FUN_0eec74c0(uVar49,0);
    }
    uStack_e0 = (byte *)(uVar49 | 1);
    pbStack_d8 = pbVar44;
    pbStack_d0 = pbVar54;
LAB_0cbe2d0e:
    func_0x0eee2f00(pbVar54,lVar50,pbVar44);
  }
  pbVar56 = (byte *)((long)&uStack_e0 + 1);
  pbVar54[(long)pbVar44] = 0;
  pbVar58 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  pbVar54 = pbStack_d8;
  pbVar44 = pbStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    pbVar54 = pbVar58;
    pbVar44 = pbVar56;
  }
  if (pbVar54 != (byte *)0x0) {
    pbVar58 = pbVar44;
    if (pbVar54 < (byte *)0x8) {
LAB_0cbe2f20:
      do {
        bVar3 = *pbVar58;
        bVar52 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar52 = bVar3;
        }
        *pbVar58 = bVar52;
        pbVar58 = pbVar58 + 1;
      } while (pbVar58 != pbVar44 + (long)pbVar54);
    }
    else if (pbVar54 < (byte *)0x20) {
      pbVar48 = (byte *)0x0;
LAB_0cbe2df9:
      pbVar59 = (byte *)((ulong)pbVar54 & 0xfffffffffffffff8);
      pbVar58 = pbVar44 + (long)pbVar59;
      do {
        uVar51 = *(undefined8 *)(pbVar44 + (long)pbVar48);
        bVar63 = (char)uVar51 + DAT_014e9110;
        cVar65 = (char)((ulong)uVar51 >> 8);
        bVar64 = cVar65 + DAT_014e9110._1_1_;
        cVar67 = (char)((ulong)uVar51 >> 0x10);
        bVar66 = cVar67 + DAT_014e9110._2_1_;
        cVar69 = (char)((ulong)uVar51 >> 0x18);
        bVar68 = cVar69 + DAT_014e9110._3_1_;
        cVar71 = (char)((ulong)uVar51 >> 0x20);
        bVar70 = cVar71 + DAT_014e9110._4_1_;
        cVar73 = (char)((ulong)uVar51 >> 0x28);
        bVar72 = cVar73 + DAT_014e9110._5_1_;
        cVar75 = (char)((ulong)uVar51 >> 0x30);
        cVar12 = (char)((ulong)uVar51 >> 0x38);
        bVar74 = cVar75 + DAT_014e9110._6_1_;
        bVar76 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar52 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar44 + (long)pbVar48) =
             CONCAT17((~-((byte)((bVar76 < bVar11) * bVar11 | (bVar76 >= bVar11) * bVar76) == bVar76
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar74 < bVar10) * bVar10 | (bVar74 >= bVar10) * bVar74)
                                  == bVar74) & UNK_014ea366) + cVar75,
                               CONCAT15((~-((byte)((bVar72 < bVar9) * bVar9 |
                                                  (bVar72 >= bVar9) * bVar72) == bVar72) &
                                        UNK_014ea365) + cVar73,
                                        CONCAT14((~-((byte)((bVar70 < bVar8) * bVar8 |
                                                           (bVar70 >= bVar8) * bVar70) == bVar70) &
                                                 UNK_014ea364) + cVar71,
                                                 CONCAT13((~-((byte)((bVar68 < bVar7) * bVar7 |
                                                                    (bVar68 >= bVar7) * bVar68) ==
                                                             bVar68) & UNK_014ea363) + cVar69,
                                                          CONCAT12((~-((byte)((bVar66 < bVar6) *
                                                                              bVar6 | (bVar66 >=
                                                                                      bVar6) * 
                                                  bVar66) == bVar66) & UNK_014ea362) + cVar67,
                                                  CONCAT11((~-((byte)((bVar64 < bVar52) * bVar52 |
                                                                     (bVar64 >= bVar52) * bVar64) ==
                                                              bVar64) & UNK_014ea361) + cVar65,
                                                           (~-((byte)((bVar63 < bVar3) * bVar3 |
                                                                     (bVar63 >= bVar3) * bVar63) ==
                                                              bVar63) & DAT_014ea360) + (char)uVar51
                                                          )))))));
        pbVar48 = pbVar48 + 8;
      } while (pbVar59 != pbVar48);
      if (pbVar54 != pbVar59) goto LAB_0cbe2f20;
    }
    else {
      pbVar48 = (byte *)((ulong)pbVar54 & 0xffffffffffffffe0);
      pbVar58 = (byte *)0x0;
      do {
        pbVar59 = pbVar44 + (long)pbVar58;
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
        pbVar2 = pbVar44 + 0x10 + (long)pbVar58;
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
        bVar77 = *pbVar59 + DAT_014e86b0;
        bVar78 = bVar13 + DAT_014e86b0._1_1_;
        bVar79 = bVar14 + DAT_014e86b0._2_1_;
        bVar80 = bVar15 + DAT_014e86b0._3_1_;
        bVar81 = bVar16 + DAT_014e86b0._4_1_;
        bVar82 = bVar17 + DAT_014e86b0._5_1_;
        bVar83 = bVar18 + DAT_014e86b0._6_1_;
        bVar84 = bVar19 + DAT_014e86b0._7_1_;
        bVar85 = bVar20 + DAT_014e86b0._8_1_;
        bVar86 = bVar21 + DAT_014e86b0._9_1_;
        bVar87 = bVar22 + DAT_014e86b0._10_1_;
        bVar88 = bVar23 + DAT_014e86b0._11_1_;
        bVar89 = bVar24 + DAT_014e86b0._12_1_;
        bVar90 = bVar25 + DAT_014e86b0._13_1_;
        bVar91 = bVar26 + DAT_014e86b0._14_1_;
        bVar92 = bVar27 + DAT_014e86b0._15_1_;
        bVar93 = bVar28 + DAT_014e86b0;
        bVar94 = bVar29 + DAT_014e86b0._1_1_;
        bVar95 = bVar30 + DAT_014e86b0._2_1_;
        bVar96 = bVar31 + DAT_014e86b0._3_1_;
        bVar97 = bVar32 + DAT_014e86b0._4_1_;
        bVar98 = bVar33 + DAT_014e86b0._5_1_;
        bVar99 = bVar34 + DAT_014e86b0._6_1_;
        bVar100 = bVar35 + DAT_014e86b0._7_1_;
        bVar101 = bVar36 + DAT_014e86b0._8_1_;
        bVar102 = bVar37 + DAT_014e86b0._9_1_;
        bVar103 = bVar38 + DAT_014e86b0._10_1_;
        bVar104 = bVar39 + DAT_014e86b0._11_1_;
        bVar105 = bVar40 + DAT_014e86b0._12_1_;
        bVar106 = bVar41 + DAT_014e86b0._13_1_;
        bVar107 = bVar42 + DAT_014e86b0._14_1_;
        bVar108 = bVar43 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar52 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar63 = DAT_014e4170._8_1_;
        bVar64 = DAT_014e4170._9_1_;
        bVar66 = DAT_014e4170._10_1_;
        bVar68 = DAT_014e4170._11_1_;
        bVar70 = DAT_014e4170._12_1_;
        bVar72 = DAT_014e4170._13_1_;
        bVar74 = DAT_014e4170._14_1_;
        bVar76 = DAT_014e4170._15_1_;
        pbVar2 = pbVar44 + (long)pbVar58;
        *pbVar2 = (-((byte)((bVar3 < bVar77) * bVar3 | (bVar3 >= bVar77) * bVar77) == bVar77) &
                  DAT_014ead50) + *pbVar59;
        pbVar2[1] = (-((byte)((bVar52 < bVar78) * bVar52 | (bVar52 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead51) + bVar13;
        pbVar2[2] = (-((byte)((bVar6 < bVar79) * bVar6 | (bVar6 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead52) + bVar14;
        pbVar2[3] = (-((byte)((bVar7 < bVar80) * bVar7 | (bVar7 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead53) + bVar15;
        pbVar2[4] = (-((byte)((bVar8 < bVar81) * bVar8 | (bVar8 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead54) + bVar16;
        pbVar2[5] = (-((byte)((bVar9 < bVar82) * bVar9 | (bVar9 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead55) + bVar17;
        pbVar2[6] = (-((byte)((bVar10 < bVar83) * bVar10 | (bVar10 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead56) + bVar18;
        pbVar2[7] = (-((byte)((bVar11 < bVar84) * bVar11 | (bVar11 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead57) + bVar19;
        pbVar2[8] = (-((byte)((bVar63 < bVar85) * bVar63 | (bVar63 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead58) + bVar20;
        pbVar2[9] = (-((byte)((bVar64 < bVar86) * bVar64 | (bVar64 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead59) + bVar21;
        pbVar2[10] = (-((byte)((bVar66 < bVar87) * bVar66 | (bVar66 >= bVar87) * bVar87) == bVar87)
                     & UNK_014ead5a) + bVar22;
        pbVar2[0xb] = (-((byte)((bVar68 < bVar88) * bVar68 | (bVar68 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5b) + bVar23;
        pbVar2[0xc] = (-((byte)((bVar70 < bVar89) * bVar70 | (bVar70 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5c) + bVar24;
        pbVar2[0xd] = (-((byte)((bVar72 < bVar90) * bVar72 | (bVar72 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5d) + bVar25;
        pbVar2[0xe] = (-((byte)((bVar74 < bVar91) * bVar74 | (bVar74 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5e) + bVar26;
        pbVar2[0xf] = (-((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) == bVar92)
                      & UNK_014ead5f) + bVar27;
        pbVar59 = pbVar44 + 0x10 + (long)pbVar58;
        *pbVar59 = (-((byte)((bVar3 < bVar93) * bVar3 | (bVar3 >= bVar93) * bVar93) == bVar93) &
                   DAT_014ead50) + bVar28;
        pbVar59[1] = (-((byte)((bVar52 < bVar94) * bVar52 | (bVar52 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead51) + bVar29;
        pbVar59[2] = (-((byte)((bVar6 < bVar95) * bVar6 | (bVar6 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead52) + bVar30;
        pbVar59[3] = (-((byte)((bVar7 < bVar96) * bVar7 | (bVar7 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead53) + bVar31;
        pbVar59[4] = (-((byte)((bVar8 < bVar97) * bVar8 | (bVar8 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead54) + bVar32;
        pbVar59[5] = (-((byte)((bVar9 < bVar98) * bVar9 | (bVar9 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead55) + bVar33;
        pbVar59[6] = (-((byte)((bVar10 < bVar99) * bVar10 | (bVar10 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead56) + bVar34;
        pbVar59[7] = (-((byte)((bVar11 < bVar100) * bVar11 | (bVar11 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead57) + bVar35;
        pbVar59[8] = (-((byte)((bVar63 < bVar101) * bVar63 | (bVar63 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead58) + bVar36;
        pbVar59[9] = (-((byte)((bVar64 < bVar102) * bVar64 | (bVar64 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead59) + bVar37;
        pbVar59[10] = (-((byte)((bVar66 < bVar103) * bVar66 | (bVar66 >= bVar103) * bVar103) ==
                        bVar103) & UNK_014ead5a) + bVar38;
        pbVar59[0xb] = (-((byte)((bVar68 < bVar104) * bVar68 | (bVar68 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5b) + bVar39;
        pbVar59[0xc] = (-((byte)((bVar70 < bVar105) * bVar70 | (bVar70 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5c) + bVar40;
        pbVar59[0xd] = (-((byte)((bVar72 < bVar106) * bVar72 | (bVar72 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5d) + bVar41;
        pbVar59[0xe] = (-((byte)((bVar74 < bVar107) * bVar74 | (bVar74 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5e) + bVar42;
        pbVar59[0xf] = (-((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5f) + bVar43;
        pbVar58 = pbVar58 + 0x20;
      } while (pbVar48 != pbVar58);
      if (pbVar54 != pbVar48) {
        if (((ulong)pbVar54 & 0x18) == 0) {
          pbVar58 = pbVar48 + (long)pbVar44;
          goto LAB_0cbe2f20;
        }
        goto LAB_0cbe2df9;
      }
    }
    pbVar58 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    pbVar58 = pbStack_d8;
    pbVar56 = pbStack_d0;
  }
  pbVar44 = pbVar56 + (long)pbVar58;
  pbVar54 = pbVar58;
  pbVar48 = pbVar56;
  while (((pbVar59 = pbVar44, 0 < (long)pbVar54 &&
          (pbVar48 = (byte *)func_0x0eee2ef0(pbVar48,0x3a,pbVar54), pbVar48 != (byte *)0x0)) &&
         (pbVar59 = pbVar48, *pbVar48 != 0x3a))) {
    pbVar48 = pbVar48 + 1;
    pbVar54 = pbVar44 + -(long)pbVar48;
  }
  pbVar54 = pbVar59 + -(long)pbVar56;
  if (pbVar58 < pbVar59 + -(long)pbVar56) {
    pbVar54 = pbVar58;
  }
  if (pbVar59 == pbVar44) {
    pbVar54 = pbVar58;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar54) {
LAB_0cbe333f:
    uVar51 = func_0x04882e30();
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar46 != (long *)0x0) {
      (**(code **)(*plVar46 + 8))(plVar46);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) goto LAB_0cbe340e;
    while ((uStack_60 & 1) == 0) {
      func_0x0eee2d70(uVar51);
LAB_0cbe340e:
      func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
    func_0x0eee2d70(uVar51);
    pcVar5 = (code *)swi(3);
    plVar46 = (long *)(*pcVar5)();
    return plVar46;
  }
  if (pbVar54 < (byte *)0x17) {
    uStack_c8 = (undefined8 *)CONCAT71(uStack_c8._1_7_,(char)pbVar54 * '\x02');
    pbVar44 = (byte *)((long)&uStack_c8 + 1);
    if (pbVar54 != (byte *)0x0) goto LAB_0cbe3030;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar54 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar54 | 7) + 1;
    }
    pbVar44 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar44 == (byte *)0x0) {
      FUN_0eec74c0(uVar49,0);
    }
    uStack_c8 = (undefined8 *)(uVar49 | 1);
    uStack_c0 = pbVar54;
    pbStack_b8 = pbVar44;
LAB_0cbe3030:
    func_0x0eee2ee0(pbVar44,pbVar56,pbVar54);
  }
  pbVar44[(long)pbVar54] = 0;
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
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_0cbe30e0;
  }
  else if (pbStack_b8 != (byte *)0x0) {
LAB_0cbe30e0:
    pbVar44 = pbStack_b0;
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar44 = (byte *)((long)&uStack_c0 + 1);
    }
    if ((pbVar44 != (byte *)0x0) && (*pbVar44 != 0)) {
      puVar57 = (undefined8 *)0xcbf29ce484222325;
      uVar49 = strlen(pbVar44);
      if (uVar49 != 0) {
        uVar55 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            puVar57 = (undefined8 *)
                      (((((((((long)puVar57 * 0x100000001b3 ^ (ulong)*pbVar44) * 0x100000001b3 ^
                            (ulong)pbVar44[1]) * 0x100000001b3 ^ (ulong)pbVar44[2]) * 0x100000001b3
                          ^ (ulong)pbVar44[3]) * 0x100000001b3 ^ (ulong)pbVar44[4]) * 0x100000001b3
                        ^ (ulong)pbVar44[5]) * 0x100000001b3 ^ (ulong)pbVar44[6]) * 0x100000001b3 ^
                      (ulong)pbVar44[7]);
            pbVar44 = pbVar44 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        if (uVar55 != 0) {
          uVar49 = 0;
          do {
            puVar57 = (undefined8 *)((long)puVar57 * 0x100000001b3 ^ (ulong)pbVar44[uVar49]);
            uVar49 = uVar49 + 1;
          } while (uVar55 != uVar49);
        }
      }
      goto LAB_0cbe31d9;
    }
  }
  puVar57 = (undefined8 *)0x0;
LAB_0cbe31d9:
  uStack_c8 = puVar57;
  puStack_98 = &uStack_c8;
  lVar50 = func_0x05cf8b10(param_1,&uStack_c8,&UNK_01563a4f,&puStack_98,&uStack_e1);
  plVar4 = *(long **)(lVar50 + 0x48);
  *(long **)(lVar50 + 0x48) = plVar46;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_98 = uStack_c8;
  lVar50 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_98);
  if ((*(byte *)(lVar50 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar50 + 0x28),*(ulong *)(lVar50 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar50 + 0x28) = pbStack_b0;
  *(byte **)(lVar50 + 0x18) = uStack_c0;
  *(byte **)(lVar50 + 0x20) = pbStack_b8;
  uStack_c0 = (byte *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar50 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar50 + 0x30) = 0;
  if (((ulong)uStack_e0 & 1) != 0) {
    func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  FUN_0c6cd240(plVar46,0xf6ff170,4);
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return plVar46;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
