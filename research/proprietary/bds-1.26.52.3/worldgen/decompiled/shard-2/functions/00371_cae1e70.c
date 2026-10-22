/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe1e70 (ELF vaddr 0xcae1e70)
 * Label: caller-of-seed
 * Body:  [[0cbe1e70, 0cbe2802] [0cbe2889, 0cbe28ac] [0cbe28b0, 0cbe291d]]
 * Ghidra: FUN_0cbe1e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbe1e70(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  byte *pbVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
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
  undefined1 *puVar46;
  ulong uVar47;
  long *plVar48;
  long lVar49;
  byte *pbVar50;
  ulong uVar51;
  long lVar52;
  undefined8 uVar53;
  byte bVar54;
  ulong uVar55;
  byte *pbVar56;
  ulong uVar57;
  byte *pbVar58;
  undefined8 *puVar59;
  byte *pbVar60;
  byte *pbVar61;
  byte *pbVar62;
  ulong uVar63;
  bool bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar68;
  byte bVar70;
  byte bVar72;
  byte bVar74;
  byte bVar76;
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
  byte bVar109;
  byte bVar110;
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
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar77;
  
  puVar46 = (undefined1 *)func_0x0cbe2920(param_2,&UNK_0131c508,0xd);
  uStack_68 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = *param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar57 = uStack_58;
  uVar51 = uStack_60;
  uStack_48 = 0;
  uVar63 = uStack_60 >> 1 & 0x7f;
  if ((uStack_60 & 1) != 0) {
    uVar63 = uStack_58;
  }
  uStack_8c = param_4;
  if (uVar63 == 0) {
LAB_0cbe1f8d:
    uVar63 = 0;
  }
  else {
    if ((uStack_60 & 1) == 0) {
      pbVar62 = (byte *)((long)&uStack_60 + 1);
      if (pbVar62 != (byte *)0x0) goto LAB_0cbe1f3d;
      goto LAB_0cbe1f8d;
    }
    pbVar62 = pbStack_50;
    if (pbStack_50 == (byte *)0x0) goto LAB_0cbe1f8d;
LAB_0cbe1f3d:
    if (*pbVar62 == 0) goto LAB_0cbe1f8d;
    uVar63 = 0xcbf29ce484222325;
    lStack_a0 = param_1;
    uVar47 = func_0x0eee2e90(pbVar62);
    param_1 = lStack_a0;
    if (uVar47 != 0) {
      uVar55 = (ulong)((uint)uVar47 & 7);
      if (7 < uVar47) {
        uVar47 = uVar47 & 0xfffffffffffffff8;
        do {
          uVar63 = (((((((uVar63 * 0x100000001b3 ^ (ulong)*pbVar62) * 0x100000001b3 ^
                        (ulong)pbVar62[1]) * 0x100000001b3 ^ (ulong)pbVar62[2]) * 0x100000001b3 ^
                      (ulong)pbVar62[3]) * 0x100000001b3 ^ (ulong)pbVar62[4]) * 0x100000001b3 ^
                    (ulong)pbVar62[5]) * 0x100000001b3 ^ (ulong)pbVar62[6]) * 0x100000001b3 ^
                   (ulong)pbVar62[7];
          pbVar62 = pbVar62 + 8;
          uVar47 = uVar47 - 8;
        } while (uVar47 != 0);
      }
      if (uVar55 != 0) {
        uVar47 = 0;
        do {
          uVar63 = uVar63 * 0x100000001b3 ^ (ulong)pbVar62[uVar47];
          uVar47 = uVar47 + 1;
        } while (uVar55 != uVar47);
      }
    }
  }
  uStack_68 = uVar63;
  if ((uVar51 & 1) == 0) {
    pbStack_78 = pbStack_50;
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
  }
  else {
    func_0x0412e5e0(&uStack_88,pbStack_50,uVar57);
  }
  uStack_c8 = *(undefined8 **)(param_1 + 0x148);
  uStack_c0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar48 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar48 = *plVar48 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_c8);
  pbVar62 = uStack_c0;
  if (uStack_c0 != (byte *)0x0) {
    LOCK();
    pbVar56 = uStack_c0 + 8;
    lVar52 = *(long *)pbVar56;
    *(long *)pbVar56 = *(long *)pbVar56 + -1;
    UNLOCK();
    if (lVar52 == 0) {
      (**(code **)(*(long *)uStack_c0 + 0x10))(uStack_c0);
      func_0x0412c2d0(pbVar62);
    }
  }
  plVar48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar48 == (long *)0x0) {
    FUN_0eec74c0(0x3b0,0);
  }
  uVar3 = *puVar46;
  uVar4 = puVar46[1];
  func_0x0c6c7010(plVar48,&uStack_88,uStack_8c);
  *plVar48 = (long)&UNK_0f4429a0;
  *(undefined1 *)(plVar48 + 0x75) = uVar3;
  *(undefined1 *)((long)plVar48 + 0x3a9) = uVar4;
  *(byte *)((long)plVar48 + 0x134) = *(byte *)((long)plVar48 + 0x134) | 0x40;
  func_0x0d05a630(plVar48,&UNK_0d05a7b0,0);
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar52 = 0;
    lVar49 = 0;
  }
  else {
    lVar49 = func_0x0412c300();
    lVar52 = 0;
    if (lVar49 != 0) {
      lVar52 = *(long *)(param_1 + 0x138);
    }
  }
  plVar48[0x73] = lVar52;
  plVar6 = (long *)plVar48[0x74];
  plVar48[0x74] = lVar49;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar52 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar52 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      func_0x0412c2d0(plVar6);
    }
  }
  bVar64 = (*(byte *)(plVar48 + 0x1a) & 1) != 0;
  lVar52 = (long)plVar48 + 0xd1;
  if (bVar64) {
    lVar52 = plVar48[0x1c];
  }
  pbVar62 = (byte *)(ulong)(*(byte *)(plVar48 + 0x1a) >> 1);
  if (bVar64) {
    pbVar62 = (byte *)plVar48[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar62) {
    FUN_04882e30();
    goto LAB_0cbe27f9;
  }
  pbVar56 = (byte *)((long)&uStack_e0 + 1);
  if (pbVar62 < (byte *)0x17) {
    uStack_e0 = (byte *)CONCAT71(uStack_e0._1_7_,(char)pbVar62 * '\x02');
    if (pbVar62 != (byte *)0x0) goto LAB_0cbe21c1;
  }
  else {
    uVar51 = 0x1a;
    if (((ulong)pbVar62 | 7) != 0x17) {
      uVar51 = ((ulong)pbVar62 | 7) + 1;
    }
    pbVar56 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar51);
    if (pbVar56 == (byte *)0x0) {
      FUN_0eec74c0(uVar51,0);
    }
    uStack_e0 = (byte *)(uVar51 | 1);
    pbStack_d8 = pbVar62;
    pbStack_d0 = pbVar56;
LAB_0cbe21c1:
    memcpy(pbVar56,lVar52,pbVar62);
  }
  pbVar58 = (byte *)((long)&uStack_e0 + 1);
  pbVar56[(long)pbVar62] = 0;
  pbVar60 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  pbVar56 = pbStack_d8;
  pbVar62 = pbStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    pbVar56 = pbVar60;
    pbVar62 = pbVar58;
  }
  if (pbVar56 != (byte *)0x0) {
    pbVar60 = pbVar62;
    if (pbVar56 < (byte *)0x8) {
LAB_0cbe23d0:
      do {
        bVar5 = *pbVar60;
        bVar54 = bVar5 + 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar54 = bVar5;
        }
        *pbVar60 = bVar54;
        pbVar60 = pbVar60 + 1;
      } while (pbVar60 != pbVar62 + (long)pbVar56);
    }
    else if (pbVar56 < (byte *)0x20) {
      pbVar50 = (byte *)0x0;
LAB_0cbe22a9:
      pbVar61 = (byte *)((ulong)pbVar56 & 0xfffffffffffffff8);
      pbVar60 = pbVar62 + (long)pbVar61;
      do {
        uVar53 = *(undefined8 *)(pbVar62 + (long)pbVar50);
        bVar65 = (char)uVar53 + DAT_014e9110;
        cVar67 = (char)((ulong)uVar53 >> 8);
        bVar66 = cVar67 + DAT_014e9110._1_1_;
        cVar69 = (char)((ulong)uVar53 >> 0x10);
        bVar68 = cVar69 + DAT_014e9110._2_1_;
        cVar71 = (char)((ulong)uVar53 >> 0x18);
        bVar70 = cVar71 + DAT_014e9110._3_1_;
        cVar73 = (char)((ulong)uVar53 >> 0x20);
        bVar72 = cVar73 + DAT_014e9110._4_1_;
        cVar75 = (char)((ulong)uVar53 >> 0x28);
        bVar74 = cVar75 + DAT_014e9110._5_1_;
        cVar77 = (char)((ulong)uVar53 >> 0x30);
        cVar14 = (char)((ulong)uVar53 >> 0x38);
        bVar76 = cVar77 + DAT_014e9110._6_1_;
        bVar78 = cVar14 + DAT_014e9110._7_1_;
        bVar5 = DAT_014e8cb0;
        bVar54 = DAT_014e8cb0._1_1_;
        bVar8 = DAT_014e8cb0._2_1_;
        bVar9 = DAT_014e8cb0._3_1_;
        bVar10 = DAT_014e8cb0._4_1_;
        bVar11 = DAT_014e8cb0._5_1_;
        bVar12 = DAT_014e8cb0._6_1_;
        bVar13 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar62 + (long)pbVar50) =
             CONCAT17((~-((byte)((bVar78 < bVar13) * bVar13 | (bVar78 >= bVar13) * bVar78) == bVar78
                         ) & UNK_014ea367) + cVar14,
                      CONCAT16((~-((byte)((bVar76 < bVar12) * bVar12 | (bVar76 >= bVar12) * bVar76)
                                  == bVar76) & UNK_014ea366) + cVar77,
                               CONCAT15((~-((byte)((bVar74 < bVar11) * bVar11 |
                                                  (bVar74 >= bVar11) * bVar74) == bVar74) &
                                        UNK_014ea365) + cVar75,
                                        CONCAT14((~-((byte)((bVar72 < bVar10) * bVar10 |
                                                           (bVar72 >= bVar10) * bVar72) == bVar72) &
                                                 UNK_014ea364) + cVar73,
                                                 CONCAT13((~-((byte)((bVar70 < bVar9) * bVar9 |
                                                                    (bVar70 >= bVar9) * bVar70) ==
                                                             bVar70) & UNK_014ea363) + cVar71,
                                                          CONCAT12((~-((byte)((bVar68 < bVar8) *
                                                                              bVar8 | (bVar68 >=
                                                                                      bVar8) * 
                                                  bVar68) == bVar68) & UNK_014ea362) + cVar69,
                                                  CONCAT11((~-((byte)((bVar66 < bVar54) * bVar54 |
                                                                     (bVar66 >= bVar54) * bVar66) ==
                                                              bVar66) & UNK_014ea361) + cVar67,
                                                           (~-((byte)((bVar65 < bVar5) * bVar5 |
                                                                     (bVar65 >= bVar5) * bVar65) ==
                                                              bVar65) & DAT_014ea360) + (char)uVar53
                                                          )))))));
        pbVar50 = pbVar50 + 8;
      } while (pbVar61 != pbVar50);
      if (pbVar56 != pbVar61) goto LAB_0cbe23d0;
    }
    else {
      pbVar50 = (byte *)((ulong)pbVar56 & 0xffffffffffffffe0);
      pbVar60 = (byte *)0x0;
      do {
        pbVar61 = pbVar62 + (long)pbVar60;
        bVar15 = pbVar61[1];
        bVar16 = pbVar61[2];
        bVar17 = pbVar61[3];
        bVar18 = pbVar61[4];
        bVar19 = pbVar61[5];
        bVar20 = pbVar61[6];
        bVar21 = pbVar61[7];
        bVar22 = pbVar61[8];
        bVar23 = pbVar61[9];
        bVar24 = pbVar61[10];
        bVar25 = pbVar61[0xb];
        bVar26 = pbVar61[0xc];
        bVar27 = pbVar61[0xd];
        bVar28 = pbVar61[0xe];
        bVar29 = pbVar61[0xf];
        pbVar2 = pbVar62 + 0x10 + (long)pbVar60;
        bVar30 = *pbVar2;
        bVar31 = pbVar2[1];
        bVar32 = pbVar2[2];
        bVar33 = pbVar2[3];
        bVar34 = pbVar2[4];
        bVar35 = pbVar2[5];
        bVar36 = pbVar2[6];
        bVar37 = pbVar2[7];
        bVar38 = pbVar2[8];
        bVar39 = pbVar2[9];
        bVar40 = pbVar2[10];
        bVar41 = pbVar2[0xb];
        bVar42 = pbVar2[0xc];
        bVar43 = pbVar2[0xd];
        bVar44 = pbVar2[0xe];
        bVar45 = pbVar2[0xf];
        bVar79 = *pbVar61 + DAT_014e86b0;
        bVar80 = bVar15 + DAT_014e86b0._1_1_;
        bVar81 = bVar16 + DAT_014e86b0._2_1_;
        bVar82 = bVar17 + DAT_014e86b0._3_1_;
        bVar83 = bVar18 + DAT_014e86b0._4_1_;
        bVar84 = bVar19 + DAT_014e86b0._5_1_;
        bVar85 = bVar20 + DAT_014e86b0._6_1_;
        bVar86 = bVar21 + DAT_014e86b0._7_1_;
        bVar87 = bVar22 + DAT_014e86b0._8_1_;
        bVar88 = bVar23 + DAT_014e86b0._9_1_;
        bVar89 = bVar24 + DAT_014e86b0._10_1_;
        bVar90 = bVar25 + DAT_014e86b0._11_1_;
        bVar91 = bVar26 + DAT_014e86b0._12_1_;
        bVar92 = bVar27 + DAT_014e86b0._13_1_;
        bVar93 = bVar28 + DAT_014e86b0._14_1_;
        bVar94 = bVar29 + DAT_014e86b0._15_1_;
        bVar95 = bVar30 + DAT_014e86b0;
        bVar96 = bVar31 + DAT_014e86b0._1_1_;
        bVar97 = bVar32 + DAT_014e86b0._2_1_;
        bVar98 = bVar33 + DAT_014e86b0._3_1_;
        bVar99 = bVar34 + DAT_014e86b0._4_1_;
        bVar100 = bVar35 + DAT_014e86b0._5_1_;
        bVar101 = bVar36 + DAT_014e86b0._6_1_;
        bVar102 = bVar37 + DAT_014e86b0._7_1_;
        bVar103 = bVar38 + DAT_014e86b0._8_1_;
        bVar104 = bVar39 + DAT_014e86b0._9_1_;
        bVar105 = bVar40 + DAT_014e86b0._10_1_;
        bVar106 = bVar41 + DAT_014e86b0._11_1_;
        bVar107 = bVar42 + DAT_014e86b0._12_1_;
        bVar108 = bVar43 + DAT_014e86b0._13_1_;
        bVar109 = bVar44 + DAT_014e86b0._14_1_;
        bVar110 = bVar45 + DAT_014e86b0._15_1_;
        bVar5 = DAT_014e4170;
        bVar54 = DAT_014e4170._1_1_;
        bVar8 = DAT_014e4170._2_1_;
        bVar9 = DAT_014e4170._3_1_;
        bVar10 = DAT_014e4170._4_1_;
        bVar11 = DAT_014e4170._5_1_;
        bVar12 = DAT_014e4170._6_1_;
        bVar13 = DAT_014e4170._7_1_;
        bVar65 = DAT_014e4170._8_1_;
        bVar66 = DAT_014e4170._9_1_;
        bVar68 = DAT_014e4170._10_1_;
        bVar70 = DAT_014e4170._11_1_;
        bVar72 = DAT_014e4170._12_1_;
        bVar74 = DAT_014e4170._13_1_;
        bVar76 = DAT_014e4170._14_1_;
        bVar78 = DAT_014e4170._15_1_;
        pbVar2 = pbVar62 + (long)pbVar60;
        *pbVar2 = (-((byte)((bVar5 < bVar79) * bVar5 | (bVar5 >= bVar79) * bVar79) == bVar79) &
                  DAT_014ead50) + *pbVar61;
        pbVar2[1] = (-((byte)((bVar54 < bVar80) * bVar54 | (bVar54 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead51) + bVar15;
        pbVar2[2] = (-((byte)((bVar8 < bVar81) * bVar8 | (bVar8 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead52) + bVar16;
        pbVar2[3] = (-((byte)((bVar9 < bVar82) * bVar9 | (bVar9 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead53) + bVar17;
        pbVar2[4] = (-((byte)((bVar10 < bVar83) * bVar10 | (bVar10 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead54) + bVar18;
        pbVar2[5] = (-((byte)((bVar11 < bVar84) * bVar11 | (bVar11 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead55) + bVar19;
        pbVar2[6] = (-((byte)((bVar12 < bVar85) * bVar12 | (bVar12 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead56) + bVar20;
        pbVar2[7] = (-((byte)((bVar13 < bVar86) * bVar13 | (bVar13 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead57) + bVar21;
        pbVar2[8] = (-((byte)((bVar65 < bVar87) * bVar65 | (bVar65 >= bVar87) * bVar87) == bVar87) &
                    UNK_014ead58) + bVar22;
        pbVar2[9] = (-((byte)((bVar66 < bVar88) * bVar66 | (bVar66 >= bVar88) * bVar88) == bVar88) &
                    UNK_014ead59) + bVar23;
        pbVar2[10] = (-((byte)((bVar68 < bVar89) * bVar68 | (bVar68 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead5a) + bVar24;
        pbVar2[0xb] = (-((byte)((bVar70 < bVar90) * bVar70 | (bVar70 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5b) + bVar25;
        pbVar2[0xc] = (-((byte)((bVar72 < bVar91) * bVar72 | (bVar72 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5c) + bVar26;
        pbVar2[0xd] = (-((byte)((bVar74 < bVar92) * bVar74 | (bVar74 >= bVar92) * bVar92) == bVar92)
                      & UNK_014ead5d) + bVar27;
        pbVar2[0xe] = (-((byte)((bVar76 < bVar93) * bVar76 | (bVar76 >= bVar93) * bVar93) == bVar93)
                      & UNK_014ead5e) + bVar28;
        pbVar2[0xf] = (-((byte)((bVar78 < bVar94) * bVar78 | (bVar78 >= bVar94) * bVar94) == bVar94)
                      & UNK_014ead5f) + bVar29;
        pbVar61 = pbVar62 + 0x10 + (long)pbVar60;
        *pbVar61 = (-((byte)((bVar5 < bVar95) * bVar5 | (bVar5 >= bVar95) * bVar95) == bVar95) &
                   DAT_014ead50) + bVar30;
        pbVar61[1] = (-((byte)((bVar54 < bVar96) * bVar54 | (bVar54 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead51) + bVar31;
        pbVar61[2] = (-((byte)((bVar8 < bVar97) * bVar8 | (bVar8 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead52) + bVar32;
        pbVar61[3] = (-((byte)((bVar9 < bVar98) * bVar9 | (bVar9 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead53) + bVar33;
        pbVar61[4] = (-((byte)((bVar10 < bVar99) * bVar10 | (bVar10 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead54) + bVar34;
        pbVar61[5] = (-((byte)((bVar11 < bVar100) * bVar11 | (bVar11 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead55) + bVar35;
        pbVar61[6] = (-((byte)((bVar12 < bVar101) * bVar12 | (bVar12 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead56) + bVar36;
        pbVar61[7] = (-((byte)((bVar13 < bVar102) * bVar13 | (bVar13 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead57) + bVar37;
        pbVar61[8] = (-((byte)((bVar65 < bVar103) * bVar65 | (bVar65 >= bVar103) * bVar103) ==
                       bVar103) & UNK_014ead58) + bVar38;
        pbVar61[9] = (-((byte)((bVar66 < bVar104) * bVar66 | (bVar66 >= bVar104) * bVar104) ==
                       bVar104) & UNK_014ead59) + bVar39;
        pbVar61[10] = (-((byte)((bVar68 < bVar105) * bVar68 | (bVar68 >= bVar105) * bVar105) ==
                        bVar105) & UNK_014ead5a) + bVar40;
        pbVar61[0xb] = (-((byte)((bVar70 < bVar106) * bVar70 | (bVar70 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5b) + bVar41;
        pbVar61[0xc] = (-((byte)((bVar72 < bVar107) * bVar72 | (bVar72 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5c) + bVar42;
        pbVar61[0xd] = (-((byte)((bVar74 < bVar108) * bVar74 | (bVar74 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5d) + bVar43;
        pbVar61[0xe] = (-((byte)((bVar76 < bVar109) * bVar76 | (bVar76 >= bVar109) * bVar109) ==
                         bVar109) & UNK_014ead5e) + bVar44;
        pbVar61[0xf] = (-((byte)((bVar78 < bVar110) * bVar78 | (bVar78 >= bVar110) * bVar110) ==
                         bVar110) & UNK_014ead5f) + bVar45;
        pbVar60 = pbVar60 + 0x20;
      } while (pbVar50 != pbVar60);
      if (pbVar56 != pbVar50) {
        if (((ulong)pbVar56 & 0x18) == 0) {
          pbVar60 = pbVar50 + (long)pbVar62;
          goto LAB_0cbe23d0;
        }
        goto LAB_0cbe22a9;
      }
    }
    pbVar60 = (byte *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    pbVar60 = pbStack_d8;
    pbVar58 = pbStack_d0;
  }
  pbVar62 = pbVar58 + (long)pbVar60;
  pbVar56 = pbVar60;
  pbVar50 = pbVar58;
  while (((pbVar61 = pbVar62, 0 < (long)pbVar56 &&
          (pbVar50 = (byte *)memchr(pbVar50,0x3a,pbVar56), pbVar50 != (byte *)0x0)) &&
         (pbVar61 = pbVar50, *pbVar50 != 0x3a))) {
    pbVar50 = pbVar50 + 1;
    pbVar56 = pbVar62 + -(long)pbVar50;
  }
  pbVar56 = pbVar61 + -(long)pbVar58;
  if (pbVar60 < pbVar61 + -(long)pbVar58) {
    pbVar56 = pbVar60;
  }
  if (pbVar61 == pbVar62) {
    pbVar56 = pbVar60;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar56) {
LAB_0cbe27f9:
    uVar53 = FUN_04882e30();
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar48 != (long *)0x0) {
      (**(code **)(*plVar48 + 8))(plVar48);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) goto LAB_0cbe28df;
    while ((uStack_60 & 1) == 0) {
      func_0x0eee2d70(uVar53);
LAB_0cbe28df:
      func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
    func_0x0eee2d70(uVar53);
    pcVar7 = (code *)swi(3);
    plVar48 = (long *)(*pcVar7)();
    return plVar48;
  }
  if (pbVar56 < (byte *)0x17) {
    uStack_c8 = (undefined8 *)CONCAT71(uStack_c8._1_7_,(char)pbVar56 * '\x02');
    pbVar62 = (byte *)((long)&uStack_c8 + 1);
    if (pbVar56 != (byte *)0x0) goto LAB_0cbe24e0;
  }
  else {
    uVar51 = 0x1a;
    if (((ulong)pbVar56 | 7) != 0x17) {
      uVar51 = ((ulong)pbVar56 | 7) + 1;
    }
    pbVar62 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar51);
    if (pbVar62 == (byte *)0x0) {
      FUN_0eec74c0(uVar51,0);
    }
    uStack_c8 = (undefined8 *)(uVar51 | 1);
    uStack_c0 = pbVar56;
    pbStack_b8 = pbVar62;
LAB_0cbe24e0:
    func_0x0eee2ee0(pbVar62,pbVar58,pbVar56);
  }
  pbVar62[(long)pbVar56] = 0;
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
    if ((byte)uStack_c0 >> 1 != 0) goto LAB_0cbe2590;
  }
  else if (pbStack_b8 != (byte *)0x0) {
LAB_0cbe2590:
    pbVar62 = pbStack_b0;
    if (((ulong)uStack_c0 & 1) == 0) {
      pbVar62 = (byte *)((long)&uStack_c0 + 1);
    }
    if ((pbVar62 != (byte *)0x0) && (*pbVar62 != 0)) {
      puVar59 = (undefined8 *)0xcbf29ce484222325;
      uVar51 = func_0x0eee2e90(pbVar62);
      if (uVar51 != 0) {
        uVar57 = (ulong)((uint)uVar51 & 7);
        if (7 < uVar51) {
          uVar51 = uVar51 & 0xfffffffffffffff8;
          do {
            puVar59 = (undefined8 *)
                      (((((((((long)puVar59 * 0x100000001b3 ^ (ulong)*pbVar62) * 0x100000001b3 ^
                            (ulong)pbVar62[1]) * 0x100000001b3 ^ (ulong)pbVar62[2]) * 0x100000001b3
                          ^ (ulong)pbVar62[3]) * 0x100000001b3 ^ (ulong)pbVar62[4]) * 0x100000001b3
                        ^ (ulong)pbVar62[5]) * 0x100000001b3 ^ (ulong)pbVar62[6]) * 0x100000001b3 ^
                      (ulong)pbVar62[7]);
            pbVar62 = pbVar62 + 8;
            uVar51 = uVar51 - 8;
          } while (uVar51 != 0);
        }
        if (uVar57 != 0) {
          uVar51 = 0;
          do {
            puVar59 = (undefined8 *)((long)puVar59 * 0x100000001b3 ^ (ulong)pbVar62[uVar51]);
            uVar51 = uVar51 + 1;
          } while (uVar57 != uVar51);
        }
      }
      goto LAB_0cbe2689;
    }
  }
  puVar59 = (undefined8 *)0x0;
LAB_0cbe2689:
  uStack_c8 = puVar59;
  puStack_98 = &uStack_c8;
  lVar52 = func_0x05cf8b10(param_1,&uStack_c8,&UNK_01563a4f,&puStack_98,&uStack_e1);
  plVar6 = *(long **)(lVar52 + 0x48);
  *(long **)(lVar52 + 0x48) = plVar48;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  puStack_98 = uStack_c8;
  lVar52 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_98);
  if ((*(byte *)(lVar52 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar52 + 0x28),*(ulong *)(lVar52 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar52 + 0x28) = pbStack_b0;
  *(byte **)(lVar52 + 0x18) = uStack_c0;
  *(byte **)(lVar52 + 0x20) = pbStack_b8;
  uStack_c0 = (byte *)((ulong)uStack_c0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar52 + 0x10) = uStack_c8;
  *(undefined8 *)(lVar52 + 0x30) = 0;
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
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return plVar48;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
