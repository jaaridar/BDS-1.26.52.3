/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbe8de0 (ELF vaddr 0xcae8de0)
 * Label: caller-of-seed
 * Body:  [[0cbe8de0, 0cbe97f1] [0cbe9873, 0cbe9896] [0cbe989a, 0cbe9907]]
 * Ghidra: FUN_0cbe8de0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbe8de0(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
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
  int iVar45;
  int iVar46;
  ulong uVar47;
  long *plVar48;
  long lVar49;
  long lVar50;
  byte *pbVar51;
  ulong uVar52;
  undefined8 uVar53;
  byte bVar54;
  ulong uVar55;
  byte *pbVar56;
  ulong uVar57;
  byte *pbVar58;
  ulong uVar59;
  byte *pbVar60;
  undefined8 *puVar61;
  byte *pbVar62;
  byte *pbVar63;
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
  undefined1 uStack_101;
  undefined8 uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  ulong uStack_a8;
  ulong uStack_a0;
  byte *pbStack_98;
  int *piStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  undefined8 uStack_40;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  char cVar77;
  
  uStack_ac = param_4;
  piStack_90 = (int *)func_0x0cbe9910(param_2,&UNK_011ff8ff,0x12);
  uStack_88 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_70 = (byte *)param_3[2];
    uStack_80 = *param_3;
    uStack_78 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_80,param_3[2],param_3[1]);
  }
  uVar57 = uStack_78;
  uVar52 = uStack_80;
  uStack_68 = 0;
  uVar47 = uStack_80 >> 1 & 0x7f;
  if ((uStack_80 & 1) != 0) {
    uVar47 = uStack_78;
  }
  uStack_60 = param_5;
  if (uVar47 == 0) {
LAB_0cbe8f95:
    uStack_88 = 0;
    if ((uStack_80 & 1) == 0) goto LAB_0cbe8f81;
LAB_0cbe8fa5:
    func_0x0412e5e0(&uStack_a8,pbStack_70,uVar57);
  }
  else {
    pbVar58 = pbStack_70;
    if ((uStack_80 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_80 + 1);
    }
    if (pbVar58 == (byte *)0x0) {
      uStack_88 = 0;
    }
    else {
      if (*pbVar58 == 0) goto LAB_0cbe8f95;
      uVar59 = 0xcbf29ce484222325;
      uVar47 = func_0x0eee2e90(pbVar58);
      uStack_88 = uVar59;
      if (uVar47 != 0) {
        uVar55 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            uVar59 = (((((((uVar59 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                          (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3 ^
                        (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3 ^
                      (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                     (ulong)pbVar58[7];
            pbVar58 = pbVar58 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        uStack_88 = uVar59;
        if (uVar55 != 0) {
          uVar47 = 0;
          do {
            uVar59 = uVar59 * 0x100000001b3 ^ (ulong)pbVar58[uVar47];
            uVar47 = uVar47 + 1;
            uStack_88 = uVar59;
          } while (uVar55 != uVar47);
        }
      }
    }
    if ((uVar52 & 1) != 0) goto LAB_0cbe8fa5;
LAB_0cbe8f81:
    pbStack_98 = pbStack_70;
    uStack_a8 = uStack_80;
    uStack_a0 = uStack_78;
  }
  uStack_e8 = *(undefined8 **)(param_1 + 0x148);
  uStack_e0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar48 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar48 = *plVar48 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_58,&uStack_e8);
  pbVar58 = uStack_e0;
  if (uStack_e0 != (byte *)0x0) {
    LOCK();
    pbVar56 = uStack_e0 + 8;
    lVar49 = *(long *)pbVar56;
    *(long *)pbVar56 = *(long *)pbVar56 + -1;
    UNLOCK();
    if (lVar49 == 0) {
      (**(code **)(*(long *)uStack_e0 + 0x10))(uStack_e0);
      func_0x0412c2d0(pbVar58);
    }
  }
  plVar48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b8);
  if (plVar48 == (long *)0x0) {
    func_0x0eec74c0(0x3b8,0);
  }
  iVar4 = *piStack_90;
  iVar45 = piStack_90[1];
  fStack_b0 = (float)piStack_90[3];
  lStack_48 = *(long *)(piStack_90 + 2);
  uStack_40 = 0;
  func_0x0c6c7010(plVar48,&uStack_a8,uStack_ac,uStack_60);
  *plVar48 = (long)&UNK_0f3acf88;
  plVar48[0x31] = (ulong)_DAT_01198788;
  *(undefined4 *)(plVar48 + 0x32) = 0x3e19999a;
  *(undefined8 *)((long)plVar48 + 0x194) = _DAT_014e1370;
  *(undefined4 *)((long)plVar48 + 0x19c) = 0x3f333333;
  *(undefined1 *)((long)plVar48 + 0x136) = 0;
  *(byte *)((long)plVar48 + 0x134) = *(byte *)((long)plVar48 + 0x134) & 0xe9;
  *(undefined1 *)((long)plVar48 + 0x132) = 0xb;
  plVar48[0x21] = 0;
  *(undefined4 *)((long)plVar48 + 300) = 0x3f800000;
  func_0x0c66ed20(plVar48,0x429,0,0);
  iVar46 = 1;
  if (1 < iVar4) {
    iVar46 = iVar4;
  }
  *plVar48 = (long)&UNK_0f41c5b8;
  *(int *)(plVar48 + 0x75) = iVar46 + -1;
  *(char *)((long)plVar48 + 0x3ac) = (char)iVar45;
  plVar48[0x76] = lStack_48;
  if ((fStack_b0 != _DAT_011983f0) || (NAN(fStack_b0) || NAN(_DAT_011983f0))) {
    lVar49 = func_0x0cf5f7a0(plVar48,&UNK_0cf5f920,0);
    *(undefined1 *)(lVar49 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar49 = 0;
    lVar50 = 0;
  }
  else {
    lVar50 = func_0x0412c300();
    lVar49 = 0;
    if (lVar50 != 0) {
      lVar49 = *(long *)(param_1 + 0x138);
    }
  }
  plVar48[0x73] = lVar49;
  plVar5 = (long *)plVar48[0x74];
  plVar48[0x74] = lVar50;
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
  bVar64 = (*(byte *)(plVar48 + 0x1a) & 1) != 0;
  lVar49 = (long)plVar48 + 0xd1;
  if (bVar64) {
    lVar49 = plVar48[0x1c];
  }
  pbVar58 = (byte *)(ulong)(*(byte *)(plVar48 + 0x1a) >> 1);
  if (bVar64) {
    pbVar58 = (byte *)plVar48[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar58) {
    func_0x04882e30();
    goto LAB_0cbe97e8;
  }
  pbVar56 = (byte *)((long)&uStack_100 + 1);
  if (pbVar58 < (byte *)0x17) {
    uStack_100 = (byte *)CONCAT71(uStack_100._1_7_,(char)pbVar58 * '\x02');
    if (pbVar58 != (byte *)0x0) goto LAB_0cbe9253;
  }
  else {
    uVar52 = 0x1a;
    if (((ulong)pbVar58 | 7) != 0x17) {
      uVar52 = ((ulong)pbVar58 | 7) + 1;
    }
    pbVar56 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar52);
    if (pbVar56 == (byte *)0x0) {
      func_0x0eec74c0(uVar52,0);
    }
    uStack_100 = (byte *)(uVar52 | 1);
    pbStack_f8 = pbVar58;
    pbStack_f0 = pbVar56;
LAB_0cbe9253:
    func_0x0eee2f00(pbVar56,lVar49,pbVar58);
  }
  pbVar60 = (byte *)((long)&uStack_100 + 1);
  pbVar56[(long)pbVar58] = 0;
  pbVar62 = (byte *)(ulong)((byte)uStack_100 >> 1);
  pbVar56 = pbStack_f8;
  pbVar58 = pbStack_f0;
  if (((ulong)uStack_100 & 1) == 0) {
    pbVar56 = pbVar62;
    pbVar58 = pbVar60;
  }
  if (pbVar56 != (byte *)0x0) {
    pbVar62 = pbVar58;
    if (pbVar56 < (byte *)0x8) {
LAB_0cbe93cc:
      do {
        bVar3 = *pbVar62;
        bVar54 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar54 = bVar3;
        }
        *pbVar62 = bVar54;
        pbVar62 = pbVar62 + 1;
      } while (pbVar62 != pbVar58 + (long)pbVar56);
    }
    else if (pbVar56 < (byte *)0x20) {
      pbVar51 = (byte *)0x0;
LAB_0cbe9365:
      pbVar63 = (byte *)((ulong)pbVar56 & 0xfffffffffffffff8);
      pbVar62 = pbVar58 + (long)pbVar63;
      do {
        uVar53 = *(undefined8 *)(pbVar58 + (long)pbVar51);
        bVar65 = (char)uVar53 + DAT_014e9110;
        cVar67 = (char)((ulong)uVar53 >> 8);
        bVar66 = cVar67 + UNK_014e9111;
        cVar69 = (char)((ulong)uVar53 >> 0x10);
        bVar68 = cVar69 + UNK_014e9112;
        cVar71 = (char)((ulong)uVar53 >> 0x18);
        bVar70 = cVar71 + UNK_014e9113;
        cVar73 = (char)((ulong)uVar53 >> 0x20);
        bVar72 = cVar73 + UNK_014e9114;
        cVar75 = (char)((ulong)uVar53 >> 0x28);
        bVar74 = cVar75 + UNK_014e9115;
        cVar77 = (char)((ulong)uVar53 >> 0x30);
        cVar13 = (char)((ulong)uVar53 >> 0x38);
        bVar76 = cVar77 + UNK_014e9116;
        bVar78 = cVar13 + UNK_014e9117;
        bVar3 = DAT_014e8cb0;
        bVar54 = DAT_014e8cb0._1_1_;
        bVar7 = DAT_014e8cb0._2_1_;
        bVar8 = DAT_014e8cb0._3_1_;
        bVar9 = DAT_014e8cb0._4_1_;
        bVar10 = DAT_014e8cb0._5_1_;
        bVar11 = DAT_014e8cb0._6_1_;
        bVar12 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar58 + (long)pbVar51) =
             CONCAT17((~-((byte)((bVar78 < bVar12) * bVar12 | (bVar78 >= bVar12) * bVar78) == bVar78
                         ) & UNK_014ea367) + cVar13,
                      CONCAT16((~-((byte)((bVar76 < bVar11) * bVar11 | (bVar76 >= bVar11) * bVar76)
                                  == bVar76) & UNK_014ea366) + cVar77,
                               CONCAT15((~-((byte)((bVar74 < bVar10) * bVar10 |
                                                  (bVar74 >= bVar10) * bVar74) == bVar74) &
                                        UNK_014ea365) + cVar75,
                                        CONCAT14((~-((byte)((bVar72 < bVar9) * bVar9 |
                                                           (bVar72 >= bVar9) * bVar72) == bVar72) &
                                                 UNK_014ea364) + cVar73,
                                                 CONCAT13((~-((byte)((bVar70 < bVar8) * bVar8 |
                                                                    (bVar70 >= bVar8) * bVar70) ==
                                                             bVar70) & UNK_014ea363) + cVar71,
                                                          CONCAT12((~-((byte)((bVar68 < bVar7) *
                                                                              bVar7 | (bVar68 >=
                                                                                      bVar7) * 
                                                  bVar68) == bVar68) & UNK_014ea362) + cVar69,
                                                  CONCAT11((~-((byte)((bVar66 < bVar54) * bVar54 |
                                                                     (bVar66 >= bVar54) * bVar66) ==
                                                              bVar66) & UNK_014ea361) + cVar67,
                                                           (~-((byte)((bVar65 < bVar3) * bVar3 |
                                                                     (bVar65 >= bVar3) * bVar65) ==
                                                              bVar65) & DAT_014ea360) + (char)uVar53
                                                          )))))));
        pbVar51 = pbVar51 + 8;
      } while (pbVar63 != pbVar51);
      if (pbVar56 != pbVar63) goto LAB_0cbe93cc;
    }
    else {
      pbVar51 = (byte *)((ulong)pbVar56 & 0xffffffffffffffe0);
      pbVar62 = (byte *)0x0;
      do {
        pbVar63 = pbVar58 + (long)pbVar62;
        bVar14 = pbVar63[1];
        bVar15 = pbVar63[2];
        bVar16 = pbVar63[3];
        bVar17 = pbVar63[4];
        bVar18 = pbVar63[5];
        bVar19 = pbVar63[6];
        bVar20 = pbVar63[7];
        bVar21 = pbVar63[8];
        bVar22 = pbVar63[9];
        bVar23 = pbVar63[10];
        bVar24 = pbVar63[0xb];
        bVar25 = pbVar63[0xc];
        bVar26 = pbVar63[0xd];
        bVar27 = pbVar63[0xe];
        bVar28 = pbVar63[0xf];
        pbVar2 = pbVar58 + 0x10 + (long)pbVar62;
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
        bVar79 = *pbVar63 + DAT_014e86b0;
        bVar80 = bVar14 + UNK_014e86b1;
        bVar81 = bVar15 + UNK_014e86b2;
        bVar82 = bVar16 + UNK_014e86b3;
        bVar83 = bVar17 + UNK_014e86b4;
        bVar84 = bVar18 + UNK_014e86b5;
        bVar85 = bVar19 + UNK_014e86b6;
        bVar86 = bVar20 + UNK_014e86b7;
        bVar87 = bVar21 + UNK_014e86b8;
        bVar88 = bVar22 + UNK_014e86b9;
        bVar89 = bVar23 + UNK_014e86ba;
        bVar90 = bVar24 + UNK_014e86bb;
        bVar91 = bVar25 + UNK_014e86bc;
        bVar92 = bVar26 + UNK_014e86bd;
        bVar93 = bVar27 + UNK_014e86be;
        bVar94 = bVar28 + UNK_014e86bf;
        bVar95 = bVar29 + DAT_014e86b0;
        bVar96 = bVar30 + UNK_014e86b1;
        bVar97 = bVar31 + UNK_014e86b2;
        bVar98 = bVar32 + UNK_014e86b3;
        bVar99 = bVar33 + UNK_014e86b4;
        bVar100 = bVar34 + UNK_014e86b5;
        bVar101 = bVar35 + UNK_014e86b6;
        bVar102 = bVar36 + UNK_014e86b7;
        bVar103 = bVar37 + UNK_014e86b8;
        bVar104 = bVar38 + UNK_014e86b9;
        bVar105 = bVar39 + UNK_014e86ba;
        bVar106 = bVar40 + UNK_014e86bb;
        bVar107 = bVar41 + UNK_014e86bc;
        bVar108 = bVar42 + UNK_014e86bd;
        bVar109 = bVar43 + UNK_014e86be;
        bVar110 = bVar44 + UNK_014e86bf;
        bVar3 = DAT_014e4170;
        bVar54 = DAT_014e4170._1_1_;
        bVar7 = DAT_014e4170._2_1_;
        bVar8 = DAT_014e4170._3_1_;
        bVar9 = DAT_014e4170._4_1_;
        bVar10 = DAT_014e4170._5_1_;
        bVar11 = DAT_014e4170._6_1_;
        bVar12 = DAT_014e4170._7_1_;
        bVar65 = DAT_014e4170._8_1_;
        bVar66 = DAT_014e4170._9_1_;
        bVar68 = DAT_014e4170._10_1_;
        bVar70 = DAT_014e4170._11_1_;
        bVar72 = DAT_014e4170._12_1_;
        bVar74 = DAT_014e4170._13_1_;
        bVar76 = DAT_014e4170._14_1_;
        bVar78 = DAT_014e4170._15_1_;
        pbVar2 = pbVar58 + (long)pbVar62;
        *pbVar2 = (-((byte)((bVar3 < bVar79) * bVar3 | (bVar3 >= bVar79) * bVar79) == bVar79) &
                  DAT_014ead50) + *pbVar63;
        pbVar2[1] = (-((byte)((bVar54 < bVar80) * bVar54 | (bVar54 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead51) + bVar14;
        pbVar2[2] = (-((byte)((bVar7 < bVar81) * bVar7 | (bVar7 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead52) + bVar15;
        pbVar2[3] = (-((byte)((bVar8 < bVar82) * bVar8 | (bVar8 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead53) + bVar16;
        pbVar2[4] = (-((byte)((bVar9 < bVar83) * bVar9 | (bVar9 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead54) + bVar17;
        pbVar2[5] = (-((byte)((bVar10 < bVar84) * bVar10 | (bVar10 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead55) + bVar18;
        pbVar2[6] = (-((byte)((bVar11 < bVar85) * bVar11 | (bVar11 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead56) + bVar19;
        pbVar2[7] = (-((byte)((bVar12 < bVar86) * bVar12 | (bVar12 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead57) + bVar20;
        pbVar2[8] = (-((byte)((bVar65 < bVar87) * bVar65 | (bVar65 >= bVar87) * bVar87) == bVar87) &
                    UNK_014ead58) + bVar21;
        pbVar2[9] = (-((byte)((bVar66 < bVar88) * bVar66 | (bVar66 >= bVar88) * bVar88) == bVar88) &
                    UNK_014ead59) + bVar22;
        pbVar2[10] = (-((byte)((bVar68 < bVar89) * bVar68 | (bVar68 >= bVar89) * bVar89) == bVar89)
                     & UNK_014ead5a) + bVar23;
        pbVar2[0xb] = (-((byte)((bVar70 < bVar90) * bVar70 | (bVar70 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5b) + bVar24;
        pbVar2[0xc] = (-((byte)((bVar72 < bVar91) * bVar72 | (bVar72 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5c) + bVar25;
        pbVar2[0xd] = (-((byte)((bVar74 < bVar92) * bVar74 | (bVar74 >= bVar92) * bVar92) == bVar92)
                      & UNK_014ead5d) + bVar26;
        pbVar2[0xe] = (-((byte)((bVar76 < bVar93) * bVar76 | (bVar76 >= bVar93) * bVar93) == bVar93)
                      & UNK_014ead5e) + bVar27;
        pbVar2[0xf] = (-((byte)((bVar78 < bVar94) * bVar78 | (bVar78 >= bVar94) * bVar94) == bVar94)
                      & UNK_014ead5f) + bVar28;
        pbVar63 = pbVar58 + 0x10 + (long)pbVar62;
        *pbVar63 = (-((byte)((bVar3 < bVar95) * bVar3 | (bVar3 >= bVar95) * bVar95) == bVar95) &
                   DAT_014ead50) + bVar29;
        pbVar63[1] = (-((byte)((bVar54 < bVar96) * bVar54 | (bVar54 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead51) + bVar30;
        pbVar63[2] = (-((byte)((bVar7 < bVar97) * bVar7 | (bVar7 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead52) + bVar31;
        pbVar63[3] = (-((byte)((bVar8 < bVar98) * bVar8 | (bVar8 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead53) + bVar32;
        pbVar63[4] = (-((byte)((bVar9 < bVar99) * bVar9 | (bVar9 >= bVar99) * bVar99) == bVar99) &
                     UNK_014ead54) + bVar33;
        pbVar63[5] = (-((byte)((bVar10 < bVar100) * bVar10 | (bVar10 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead55) + bVar34;
        pbVar63[6] = (-((byte)((bVar11 < bVar101) * bVar11 | (bVar11 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead56) + bVar35;
        pbVar63[7] = (-((byte)((bVar12 < bVar102) * bVar12 | (bVar12 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead57) + bVar36;
        pbVar63[8] = (-((byte)((bVar65 < bVar103) * bVar65 | (bVar65 >= bVar103) * bVar103) ==
                       bVar103) & UNK_014ead58) + bVar37;
        pbVar63[9] = (-((byte)((bVar66 < bVar104) * bVar66 | (bVar66 >= bVar104) * bVar104) ==
                       bVar104) & UNK_014ead59) + bVar38;
        pbVar63[10] = (-((byte)((bVar68 < bVar105) * bVar68 | (bVar68 >= bVar105) * bVar105) ==
                        bVar105) & UNK_014ead5a) + bVar39;
        pbVar63[0xb] = (-((byte)((bVar70 < bVar106) * bVar70 | (bVar70 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5b) + bVar40;
        pbVar63[0xc] = (-((byte)((bVar72 < bVar107) * bVar72 | (bVar72 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5c) + bVar41;
        pbVar63[0xd] = (-((byte)((bVar74 < bVar108) * bVar74 | (bVar74 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5d) + bVar42;
        pbVar63[0xe] = (-((byte)((bVar76 < bVar109) * bVar76 | (bVar76 >= bVar109) * bVar109) ==
                         bVar109) & UNK_014ead5e) + bVar43;
        pbVar63[0xf] = (-((byte)((bVar78 < bVar110) * bVar78 | (bVar78 >= bVar110) * bVar110) ==
                         bVar110) & UNK_014ead5f) + bVar44;
        pbVar62 = pbVar62 + 0x20;
      } while (pbVar51 != pbVar62);
      if (pbVar56 != pbVar51) {
        if (((ulong)pbVar56 & 0x18) == 0) {
          pbVar62 = pbVar51 + (long)pbVar58;
          goto LAB_0cbe93cc;
        }
        goto LAB_0cbe9365;
      }
    }
    pbVar62 = (byte *)(ulong)((byte)uStack_100 >> 1);
  }
  if (((ulong)uStack_100 & 1) != 0) {
    pbVar62 = pbStack_f8;
    pbVar60 = pbStack_f0;
  }
  pbVar58 = pbVar60 + (long)pbVar62;
  pbVar56 = pbVar62;
  pbVar51 = pbVar60;
  while (((pbVar63 = pbVar58, 0 < (long)pbVar56 &&
          (pbVar51 = (byte *)func_0x0eee2ef0(pbVar51,0x3a,pbVar56), pbVar51 != (byte *)0x0)) &&
         (pbVar63 = pbVar51, *pbVar51 != 0x3a))) {
    pbVar51 = pbVar51 + 1;
    pbVar56 = pbVar58 + -(long)pbVar51;
  }
  pbVar56 = pbVar63 + -(long)pbVar60;
  if (pbVar62 < pbVar63 + -(long)pbVar60) {
    pbVar56 = pbVar62;
  }
  if (pbVar63 == pbVar58) {
    pbVar56 = pbVar62;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar56) {
LAB_0cbe97e8:
    uVar53 = func_0x04882e30();
    if (((ulong)uStack_100 & 1) != 0) {
      func_0x0412a280(pbStack_f0,(ulong)uStack_100 & 0xfffffffffffffffe);
    }
    if (plVar48 != (long *)0x0) {
      (**(code **)(*plVar48 + 8))(plVar48);
    }
    func_0x0cc46730(auStack_58);
    if ((uStack_a8 & 1) != 0) goto LAB_0cbe98c9;
    while ((uStack_80 & 1) == 0) {
      func_0x0eee2d70(uVar53);
LAB_0cbe98c9:
      func_0x0412a280(pbStack_98,uStack_a8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_70,uStack_80 & 0xfffffffffffffffe);
    func_0x0eee2d70(uVar53);
    pcVar6 = (code *)swi(3);
    plVar48 = (long *)(*pcVar6)();
    return plVar48;
  }
  if (pbVar56 < (byte *)0x17) {
    uStack_e8 = (undefined8 *)CONCAT71(uStack_e8._1_7_,(char)pbVar56 * '\x02');
    pbVar58 = (byte *)((long)&uStack_e8 + 1);
    if (pbVar56 != (byte *)0x0) goto LAB_0cbe94cf;
  }
  else {
    uVar52 = 0x1a;
    if (((ulong)pbVar56 | 7) != 0x17) {
      uVar52 = ((ulong)pbVar56 | 7) + 1;
    }
    pbVar58 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar52);
    if (pbVar58 == (byte *)0x0) {
      func_0x0eec74c0(uVar52,0);
    }
    uStack_e8 = (undefined8 *)(uVar52 | 1);
    uStack_e0 = pbVar56;
    pbStack_d8 = pbVar58;
LAB_0cbe94cf:
    memmove(pbVar58,pbVar60,pbVar56);
  }
  pbVar58[(long)pbVar56] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_e8,&uStack_e8);
  if (((ulong)uStack_e8 & 1) != 0) {
    func_0x0412a280(pbStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  uStack_e8 = (undefined8 *)0x0;
  if (((ulong)uStack_100 & 1) == 0) {
    pbStack_d0 = pbStack_f0;
    uStack_e0 = uStack_100;
    pbStack_d8 = pbStack_f8;
  }
  else {
    func_0x0412e5e0(&uStack_e0,pbStack_f0,pbStack_f8);
  }
  uStack_c8 = 0;
  if (((ulong)uStack_e0 & 1) == 0) {
    if ((byte)uStack_e0 >> 1 != 0) goto LAB_0cbe957f;
  }
  else if (pbStack_d8 != (byte *)0x0) {
LAB_0cbe957f:
    pbVar58 = pbStack_d0;
    if (((ulong)uStack_e0 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_e0 + 1);
    }
    if ((pbVar58 != (byte *)0x0) && (*pbVar58 != 0)) {
      puVar61 = (undefined8 *)0xcbf29ce484222325;
      uVar52 = func_0x0eee2e90(pbVar58);
      if (uVar52 != 0) {
        uVar57 = (ulong)((uint)uVar52 & 7);
        if (7 < uVar52) {
          uVar52 = uVar52 & 0xfffffffffffffff8;
          do {
            puVar61 = (undefined8 *)
                      (((((((((long)puVar61 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                            (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3
                          ^ (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3
                        ^ (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                      (ulong)pbVar58[7]);
            pbVar58 = pbVar58 + 8;
            uVar52 = uVar52 - 8;
          } while (uVar52 != 0);
        }
        if (uVar57 != 0) {
          uVar52 = 0;
          do {
            puVar61 = (undefined8 *)((long)puVar61 * 0x100000001b3 ^ (ulong)pbVar58[uVar52]);
            uVar52 = uVar52 + 1;
          } while (uVar57 != uVar52);
        }
      }
      goto LAB_0cbe9667;
    }
  }
  puVar61 = (undefined8 *)0x0;
LAB_0cbe9667:
  uStack_e8 = puVar61;
  puStack_b8 = &uStack_e8;
  lVar49 = func_0x05cf8b10(param_1,&uStack_e8,&UNK_01563a4f,&puStack_b8,&uStack_101);
  plVar5 = *(long **)(lVar49 + 0x48);
  *(long **)(lVar49 + 0x48) = plVar48;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puStack_b8 = uStack_e8;
  lVar49 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_b8);
  if ((*(byte *)(lVar49 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar49 + 0x28),*(ulong *)(lVar49 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar49 + 0x28) = pbStack_d0;
  *(byte **)(lVar49 + 0x18) = uStack_e0;
  *(byte **)(lVar49 + 0x20) = pbStack_d8;
  uStack_e0 = (byte *)((ulong)uStack_e0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar49 + 0x10) = uStack_e8;
  *(undefined8 *)(lVar49 + 0x30) = 0;
  if (((ulong)uStack_100 & 1) != 0) {
    func_0x0412a280(pbStack_f0,(ulong)uStack_100 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_58);
  if ((uStack_a8 & 1) != 0) {
    func_0x0412a280(pbStack_98,uStack_a8 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(plVar48,0xf6ff538,_DAT_0f6ff548);
  if ((uStack_80 & 1) != 0) {
    func_0x0412a280(pbStack_70,uStack_80 & 0xfffffffffffffffe);
  }
  if (1 < *piStack_90) {
    func_0x0c6cd240(plVar48,0xf6ff170);
  }
  return plVar48;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
