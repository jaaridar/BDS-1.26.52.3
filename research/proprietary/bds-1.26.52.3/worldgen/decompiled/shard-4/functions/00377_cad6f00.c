/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbd6f00 (ELF vaddr 0xcad6f00)
 * Label: caller-of-seed
 * Body:  [[0cbd6f00, 0cbd78bd] [0cbd7914, 0cbd7937] [0cbd793b, 0cbd7945] [0cbd796d, 0cbd79d1]]
 * Ghidra: FUN_0cbd6f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbd6f00(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
                   undefined8 param_5)

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
  ulong uVar60;
  byte *pbVar61;
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
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_a8;
  undefined4 uStack_9c;
  ulong uStack_98;
  ulong uStack_90;
  byte *pbStack_88;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  
  puStack_50 = (undefined1 *)func_0x0cbd79e0(param_2,&UNK_014daefc,0xc);
  uStack_78 = 0;
  uStack_48 = param_5;
  uStack_9c = param_4;
  if ((*param_3 & 1) == 0) {
    pbStack_60 = (byte *)param_3[2];
    uStack_70 = *param_3;
    uStack_68 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_70,param_3[2],param_3[1]);
  }
  uVar55 = uStack_68;
  uVar49 = uStack_70;
  uStack_58 = 0;
  uVar45 = uStack_70 >> 1 & 0x7f;
  if ((uStack_70 & 1) != 0) {
    uVar45 = uStack_68;
  }
  if (uVar45 == 0) {
LAB_0cbd70b8:
    uStack_78 = 0;
    if ((uStack_70 & 1) == 0) goto LAB_0cbd70a2;
LAB_0cbd70c9:
    func_0x0412e5e0(&uStack_98,pbStack_60,uVar55);
  }
  else {
    pbVar61 = pbStack_60;
    if ((uStack_70 & 1) == 0) {
      pbVar61 = (byte *)((long)&uStack_70 + 1);
    }
    if (pbVar61 == (byte *)0x0) {
      uStack_78 = 0;
    }
    else {
      if (*pbVar61 == 0) goto LAB_0cbd70b8;
      uVar60 = 0xcbf29ce484222325;
      uVar45 = func_0x0eee2e90(pbVar61);
      uStack_78 = uVar60;
      if (uVar45 != 0) {
        uVar53 = (ulong)((uint)uVar45 & 7);
        if (7 < uVar45) {
          uVar45 = uVar45 & 0xfffffffffffffff8;
          do {
            uVar60 = (((((((uVar60 * 0x100000001b3 ^ (ulong)*pbVar61) * 0x100000001b3 ^
                          (ulong)pbVar61[1]) * 0x100000001b3 ^ (ulong)pbVar61[2]) * 0x100000001b3 ^
                        (ulong)pbVar61[3]) * 0x100000001b3 ^ (ulong)pbVar61[4]) * 0x100000001b3 ^
                      (ulong)pbVar61[5]) * 0x100000001b3 ^ (ulong)pbVar61[6]) * 0x100000001b3 ^
                     (ulong)pbVar61[7];
            pbVar61 = pbVar61 + 8;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
        }
        uStack_78 = uVar60;
        if (uVar53 != 0) {
          uVar45 = 0;
          do {
            uVar60 = uVar60 * 0x100000001b3 ^ (ulong)pbVar61[uVar45];
            uVar45 = uVar45 + 1;
            uStack_78 = uVar60;
          } while (uVar53 != uVar45);
        }
      }
    }
    if ((uVar49 & 1) != 0) goto LAB_0cbd70c9;
LAB_0cbd70a2:
    pbStack_88 = pbStack_60;
    uStack_98 = uStack_70;
    uStack_90 = uStack_68;
  }
  uStack_d8 = *(undefined8 **)(param_1 + 0x148);
  uStack_d0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar46 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar46 = *plVar46 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_d8);
  pbVar61 = uStack_d0;
  if (uStack_d0 != (byte *)0x0) {
    LOCK();
    pbVar54 = uStack_d0 + 8;
    lVar50 = *(long *)pbVar54;
    *(long *)pbVar54 = *(long *)pbVar54 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uStack_d0 + 0x10))(uStack_d0);
      func_0x0412c2d0(pbVar61);
    }
  }
  plVar46 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b0);
  if (plVar46 == (long *)0x0) {
    func_0x0eec74c0(0x3b0,0);
  }
  uVar3 = *puStack_50;
  func_0x0c6c7010(plVar46,&uStack_98,uStack_9c);
  *plVar46 = (long)&UNK_0f3c75a8;
  *(undefined1 *)(plVar46 + 0x75) = uVar3;
  *(undefined1 *)((long)plVar46 + 0x136) = 0;
  *(ushort *)((long)plVar46 + 0x133) = *(ushort *)((long)plVar46 + 0x133) & 0xe1ff | 0x800;
  plVar46[0x21] = 0x100;
  lVar50 = lRam000000000f7151e8;
  plVar46[0x27] = _DAT_0f7151e0;
  plVar46[0x28] = lVar50;
  func_0x0c6d5ef0(plVar46,&UNK_0c6d6070,0);
  func_0x0c6d6130(plVar46,&UNK_0c6d62b0,0);
  func_0x0c6d6450(plVar46,&UNK_0c6d65d0,0);
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
  plVar5 = (long *)plVar46[0x74];
  plVar46[0x74] = lVar47;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar50 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x0412c2d0(plVar5);
    }
  }
  bVar62 = (*(byte *)(plVar46 + 0x1a) & 1) != 0;
  lVar50 = (long)plVar46 + 0xd1;
  if (bVar62) {
    lVar50 = plVar46[0x1c];
  }
  pbVar61 = (byte *)(ulong)(*(byte *)(plVar46 + 0x1a) >> 1);
  if (bVar62) {
    pbVar61 = (byte *)plVar46[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar61) {
    func_0x04882e30();
    goto LAB_0cbd78b7;
  }
  pbVar54 = (byte *)((long)&uStack_f0 + 1);
  if (pbVar61 < (byte *)0x17) {
    uStack_f0 = (byte *)CONCAT71(uStack_f0._1_7_,(char)pbVar61 * '\x02');
    if (pbVar61 != (byte *)0x0) goto LAB_0cbd730e;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar61 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar61 | 7) + 1;
    }
    pbVar54 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar54 == (byte *)0x0) {
      func_0x0eec74c0(uVar49,0);
    }
    uStack_f0 = (byte *)(uVar49 | 1);
    pbStack_e8 = pbVar61;
    pbStack_e0 = pbVar54;
LAB_0cbd730e:
    func_0x0eee2f00(pbVar54,lVar50,pbVar61);
  }
  pbVar56 = (byte *)((long)&uStack_f0 + 1);
  pbVar54[(long)pbVar61] = 0;
  pbVar58 = (byte *)(ulong)((byte)uStack_f0 >> 1);
  pbVar54 = pbStack_e8;
  pbVar61 = pbStack_e0;
  if (((ulong)uStack_f0 & 1) == 0) {
    pbVar54 = pbVar58;
    pbVar61 = pbVar56;
  }
  if (pbVar54 != (byte *)0x0) {
    pbVar58 = pbVar61;
    if (pbVar54 < (byte *)0x8) {
LAB_0cbd748c:
      do {
        bVar4 = *pbVar58;
        bVar52 = bVar4 + 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar52 = bVar4;
        }
        *pbVar58 = bVar52;
        pbVar58 = pbVar58 + 1;
      } while (pbVar58 != pbVar61 + (long)pbVar54);
    }
    else if (pbVar54 < (byte *)0x20) {
      pbVar48 = (byte *)0x0;
LAB_0cbd7425:
      pbVar59 = (byte *)((ulong)pbVar54 & 0xfffffffffffffff8);
      pbVar58 = pbVar61 + (long)pbVar59;
      do {
        uVar51 = *(undefined8 *)(pbVar61 + (long)pbVar48);
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
        cVar13 = (char)((ulong)uVar51 >> 0x38);
        bVar74 = cVar75 + DAT_014e9110._6_1_;
        bVar76 = cVar13 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar52 = DAT_014e8cb0._1_1_;
        bVar7 = DAT_014e8cb0._2_1_;
        bVar8 = DAT_014e8cb0._3_1_;
        bVar9 = DAT_014e8cb0._4_1_;
        bVar10 = DAT_014e8cb0._5_1_;
        bVar11 = DAT_014e8cb0._6_1_;
        bVar12 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar61 + (long)pbVar48) =
             CONCAT17((~-((byte)((bVar76 < bVar12) * bVar12 | (bVar76 >= bVar12) * bVar76) == bVar76
                         ) & UNK_014ea367) + cVar13,
                      CONCAT16((~-((byte)((bVar74 < bVar11) * bVar11 | (bVar74 >= bVar11) * bVar74)
                                  == bVar74) & UNK_014ea366) + cVar75,
                               CONCAT15((~-((byte)((bVar72 < bVar10) * bVar10 |
                                                  (bVar72 >= bVar10) * bVar72) == bVar72) &
                                        UNK_014ea365) + cVar73,
                                        CONCAT14((~-((byte)((bVar70 < bVar9) * bVar9 |
                                                           (bVar70 >= bVar9) * bVar70) == bVar70) &
                                                 UNK_014ea364) + cVar71,
                                                 CONCAT13((~-((byte)((bVar68 < bVar8) * bVar8 |
                                                                    (bVar68 >= bVar8) * bVar68) ==
                                                             bVar68) & UNK_014ea363) + cVar69,
                                                          CONCAT12((~-((byte)((bVar66 < bVar7) *
                                                                              bVar7 | (bVar66 >=
                                                                                      bVar7) * 
                                                  bVar66) == bVar66) & UNK_014ea362) + cVar67,
                                                  CONCAT11((~-((byte)((bVar64 < bVar52) * bVar52 |
                                                                     (bVar64 >= bVar52) * bVar64) ==
                                                              bVar64) & UNK_014ea361) + cVar65,
                                                           (~-((byte)((bVar63 < bVar4) * bVar4 |
                                                                     (bVar63 >= bVar4) * bVar63) ==
                                                              bVar63) & DAT_014ea360) + (char)uVar51
                                                          )))))));
        pbVar48 = pbVar48 + 8;
      } while (pbVar59 != pbVar48);
      if (pbVar54 != pbVar59) goto LAB_0cbd748c;
    }
    else {
      pbVar48 = (byte *)((ulong)pbVar54 & 0xffffffffffffffe0);
      pbVar58 = (byte *)0x0;
      do {
        pbVar59 = pbVar61 + (long)pbVar58;
        bVar14 = pbVar59[1];
        bVar15 = pbVar59[2];
        bVar16 = pbVar59[3];
        bVar17 = pbVar59[4];
        bVar18 = pbVar59[5];
        bVar19 = pbVar59[6];
        bVar20 = pbVar59[7];
        bVar21 = pbVar59[8];
        bVar22 = pbVar59[9];
        bVar23 = pbVar59[10];
        bVar24 = pbVar59[0xb];
        bVar25 = pbVar59[0xc];
        bVar26 = pbVar59[0xd];
        bVar27 = pbVar59[0xe];
        bVar28 = pbVar59[0xf];
        pbVar2 = pbVar61 + 0x10 + (long)pbVar58;
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
        bVar77 = *pbVar59 + DAT_014e86b0;
        bVar78 = bVar14 + DAT_014e86b0._1_1_;
        bVar79 = bVar15 + DAT_014e86b0._2_1_;
        bVar80 = bVar16 + DAT_014e86b0._3_1_;
        bVar81 = bVar17 + DAT_014e86b0._4_1_;
        bVar82 = bVar18 + DAT_014e86b0._5_1_;
        bVar83 = bVar19 + DAT_014e86b0._6_1_;
        bVar84 = bVar20 + DAT_014e86b0._7_1_;
        bVar85 = bVar21 + DAT_014e86b0._8_1_;
        bVar86 = bVar22 + DAT_014e86b0._9_1_;
        bVar87 = bVar23 + DAT_014e86b0._10_1_;
        bVar88 = bVar24 + DAT_014e86b0._11_1_;
        bVar89 = bVar25 + DAT_014e86b0._12_1_;
        bVar90 = bVar26 + DAT_014e86b0._13_1_;
        bVar91 = bVar27 + DAT_014e86b0._14_1_;
        bVar92 = bVar28 + DAT_014e86b0._15_1_;
        bVar93 = bVar29 + DAT_014e86b0;
        bVar94 = bVar30 + DAT_014e86b0._1_1_;
        bVar95 = bVar31 + DAT_014e86b0._2_1_;
        bVar96 = bVar32 + DAT_014e86b0._3_1_;
        bVar97 = bVar33 + DAT_014e86b0._4_1_;
        bVar98 = bVar34 + DAT_014e86b0._5_1_;
        bVar99 = bVar35 + DAT_014e86b0._6_1_;
        bVar100 = bVar36 + DAT_014e86b0._7_1_;
        bVar101 = bVar37 + DAT_014e86b0._8_1_;
        bVar102 = bVar38 + DAT_014e86b0._9_1_;
        bVar103 = bVar39 + DAT_014e86b0._10_1_;
        bVar104 = bVar40 + DAT_014e86b0._11_1_;
        bVar105 = bVar41 + DAT_014e86b0._12_1_;
        bVar106 = bVar42 + DAT_014e86b0._13_1_;
        bVar107 = bVar43 + DAT_014e86b0._14_1_;
        bVar108 = bVar44 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar52 = DAT_014e4170._1_1_;
        bVar7 = DAT_014e4170._2_1_;
        bVar8 = DAT_014e4170._3_1_;
        bVar9 = DAT_014e4170._4_1_;
        bVar10 = DAT_014e4170._5_1_;
        bVar11 = DAT_014e4170._6_1_;
        bVar12 = DAT_014e4170._7_1_;
        bVar63 = DAT_014e4170._8_1_;
        bVar64 = DAT_014e4170._9_1_;
        bVar66 = DAT_014e4170._10_1_;
        bVar68 = DAT_014e4170._11_1_;
        bVar70 = DAT_014e4170._12_1_;
        bVar72 = DAT_014e4170._13_1_;
        bVar74 = DAT_014e4170._14_1_;
        bVar76 = DAT_014e4170._15_1_;
        pbVar2 = pbVar61 + (long)pbVar58;
        *pbVar2 = (-((byte)((bVar4 < bVar77) * bVar4 | (bVar4 >= bVar77) * bVar77) == bVar77) &
                  DAT_014ead50) + *pbVar59;
        pbVar2[1] = (-((byte)((bVar52 < bVar78) * bVar52 | (bVar52 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead51) + bVar14;
        pbVar2[2] = (-((byte)((bVar7 < bVar79) * bVar7 | (bVar7 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead52) + bVar15;
        pbVar2[3] = (-((byte)((bVar8 < bVar80) * bVar8 | (bVar8 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead53) + bVar16;
        pbVar2[4] = (-((byte)((bVar9 < bVar81) * bVar9 | (bVar9 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead54) + bVar17;
        pbVar2[5] = (-((byte)((bVar10 < bVar82) * bVar10 | (bVar10 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead55) + bVar18;
        pbVar2[6] = (-((byte)((bVar11 < bVar83) * bVar11 | (bVar11 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead56) + bVar19;
        pbVar2[7] = (-((byte)((bVar12 < bVar84) * bVar12 | (bVar12 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead57) + bVar20;
        pbVar2[8] = (-((byte)((bVar63 < bVar85) * bVar63 | (bVar63 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead58) + bVar21;
        pbVar2[9] = (-((byte)((bVar64 < bVar86) * bVar64 | (bVar64 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead59) + bVar22;
        pbVar2[10] = (-((byte)((bVar66 < bVar87) * bVar66 | (bVar66 >= bVar87) * bVar87) == bVar87)
                     & UNK_014ead5a) + bVar23;
        pbVar2[0xb] = (-((byte)((bVar68 < bVar88) * bVar68 | (bVar68 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5b) + bVar24;
        pbVar2[0xc] = (-((byte)((bVar70 < bVar89) * bVar70 | (bVar70 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5c) + bVar25;
        pbVar2[0xd] = (-((byte)((bVar72 < bVar90) * bVar72 | (bVar72 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5d) + bVar26;
        pbVar2[0xe] = (-((byte)((bVar74 < bVar91) * bVar74 | (bVar74 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5e) + bVar27;
        pbVar2[0xf] = (-((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) == bVar92)
                      & UNK_014ead5f) + bVar28;
        pbVar59 = pbVar61 + 0x10 + (long)pbVar58;
        *pbVar59 = (-((byte)((bVar4 < bVar93) * bVar4 | (bVar4 >= bVar93) * bVar93) == bVar93) &
                   DAT_014ead50) + bVar29;
        pbVar59[1] = (-((byte)((bVar52 < bVar94) * bVar52 | (bVar52 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead51) + bVar30;
        pbVar59[2] = (-((byte)((bVar7 < bVar95) * bVar7 | (bVar7 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead52) + bVar31;
        pbVar59[3] = (-((byte)((bVar8 < bVar96) * bVar8 | (bVar8 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead53) + bVar32;
        pbVar59[4] = (-((byte)((bVar9 < bVar97) * bVar9 | (bVar9 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead54) + bVar33;
        pbVar59[5] = (-((byte)((bVar10 < bVar98) * bVar10 | (bVar10 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead55) + bVar34;
        pbVar59[6] = (-((byte)((bVar11 < bVar99) * bVar11 | (bVar11 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead56) + bVar35;
        pbVar59[7] = (-((byte)((bVar12 < bVar100) * bVar12 | (bVar12 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead57) + bVar36;
        pbVar59[8] = (-((byte)((bVar63 < bVar101) * bVar63 | (bVar63 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead58) + bVar37;
        pbVar59[9] = (-((byte)((bVar64 < bVar102) * bVar64 | (bVar64 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead59) + bVar38;
        pbVar59[10] = (-((byte)((bVar66 < bVar103) * bVar66 | (bVar66 >= bVar103) * bVar103) ==
                        bVar103) & UNK_014ead5a) + bVar39;
        pbVar59[0xb] = (-((byte)((bVar68 < bVar104) * bVar68 | (bVar68 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5b) + bVar40;
        pbVar59[0xc] = (-((byte)((bVar70 < bVar105) * bVar70 | (bVar70 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5c) + bVar41;
        pbVar59[0xd] = (-((byte)((bVar72 < bVar106) * bVar72 | (bVar72 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5d) + bVar42;
        pbVar59[0xe] = (-((byte)((bVar74 < bVar107) * bVar74 | (bVar74 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5e) + bVar43;
        pbVar59[0xf] = (-((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5f) + bVar44;
        pbVar58 = pbVar58 + 0x20;
      } while (pbVar48 != pbVar58);
      if (pbVar54 != pbVar48) {
        if (((ulong)pbVar54 & 0x18) == 0) {
          pbVar58 = pbVar48 + (long)pbVar61;
          goto LAB_0cbd748c;
        }
        goto LAB_0cbd7425;
      }
    }
    pbVar58 = (byte *)(ulong)((byte)uStack_f0 >> 1);
  }
  if (((ulong)uStack_f0 & 1) != 0) {
    pbVar58 = pbStack_e8;
    pbVar56 = pbStack_e0;
  }
  pbVar61 = pbVar56 + (long)pbVar58;
  pbVar54 = pbVar58;
  pbVar48 = pbVar56;
  while (((pbVar59 = pbVar61, 0 < (long)pbVar54 &&
          (pbVar48 = (byte *)func_0x0eee2ef0(pbVar48,0x3a,pbVar54), pbVar48 != (byte *)0x0)) &&
         (pbVar59 = pbVar48, *pbVar48 != 0x3a))) {
    pbVar48 = pbVar48 + 1;
    pbVar54 = pbVar61 + -(long)pbVar48;
  }
  pbVar54 = pbVar59 + -(long)pbVar56;
  if (pbVar58 < pbVar59 + -(long)pbVar56) {
    pbVar54 = pbVar58;
  }
  if (pbVar59 == pbVar61) {
    pbVar54 = pbVar58;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar54) {
LAB_0cbd78b7:
    uVar51 = func_0x04882e30();
    if (((ulong)uStack_f0 & 1) != 0) {
      func_0x0412a280(pbStack_e0,(ulong)uStack_f0 & 0xfffffffffffffffe);
    }
    if (plVar46 != (long *)0x0) {
      (**(code **)(*plVar46 + 8))(plVar46);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_98 & 1) != 0) goto LAB_0cbd7993;
    while ((uStack_70 & 1) == 0) {
      _Unwind_Resume(uVar51);
LAB_0cbd7993:
      func_0x0412a280(pbStack_88,uStack_98 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_60,uStack_70 & 0xfffffffffffffffe);
    _Unwind_Resume(uVar51);
    pcVar6 = (code *)swi(3);
    plVar46 = (long *)(*pcVar6)();
    return plVar46;
  }
  if (pbVar54 < (byte *)0x17) {
    uStack_d8 = (undefined8 *)CONCAT71(uStack_d8._1_7_,(char)pbVar54 * '\x02');
    pbVar61 = (byte *)((long)&uStack_d8 + 1);
    if (pbVar54 != (byte *)0x0) goto LAB_0cbd7590;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar54 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar54 | 7) + 1;
    }
    pbVar61 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar61 == (byte *)0x0) {
      func_0x0eec74c0(uVar49,0);
    }
    uStack_d8 = (undefined8 *)(uVar49 | 1);
    uStack_d0 = pbVar54;
    pbStack_c8 = pbVar61;
LAB_0cbd7590:
    func_0x0eee2ee0(pbVar61,pbVar56,pbVar54);
  }
  pbVar61[(long)pbVar54] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_d8,&uStack_d8);
  if (((ulong)uStack_d8 & 1) != 0) {
    func_0x0412a280(pbStack_c8,(ulong)uStack_d8 & 0xfffffffffffffffe);
  }
  uStack_d8 = (undefined8 *)0x0;
  if (((ulong)uStack_f0 & 1) == 0) {
    pbStack_c0 = pbStack_e0;
    uStack_d0 = uStack_f0;
    pbStack_c8 = pbStack_e8;
  }
  else {
    func_0x0412e5e0(&uStack_d0,pbStack_e0,pbStack_e8);
  }
  uStack_b8 = 0;
  if (((ulong)uStack_d0 & 1) == 0) {
    if ((byte)uStack_d0 >> 1 != 0) goto LAB_0cbd7640;
  }
  else if (pbStack_c8 != (byte *)0x0) {
LAB_0cbd7640:
    pbVar61 = pbStack_c0;
    if (((ulong)uStack_d0 & 1) == 0) {
      pbVar61 = (byte *)((long)&uStack_d0 + 1);
    }
    if ((pbVar61 != (byte *)0x0) && (*pbVar61 != 0)) {
      puVar57 = (undefined8 *)0xcbf29ce484222325;
      uVar49 = func_0x0eee2e90(pbVar61);
      if (uVar49 != 0) {
        uVar55 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            puVar57 = (undefined8 *)
                      (((((((((long)puVar57 * 0x100000001b3 ^ (ulong)*pbVar61) * 0x100000001b3 ^
                            (ulong)pbVar61[1]) * 0x100000001b3 ^ (ulong)pbVar61[2]) * 0x100000001b3
                          ^ (ulong)pbVar61[3]) * 0x100000001b3 ^ (ulong)pbVar61[4]) * 0x100000001b3
                        ^ (ulong)pbVar61[5]) * 0x100000001b3 ^ (ulong)pbVar61[6]) * 0x100000001b3 ^
                      (ulong)pbVar61[7]);
            pbVar61 = pbVar61 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        if (uVar55 != 0) {
          uVar49 = 0;
          do {
            puVar57 = (undefined8 *)((long)puVar57 * 0x100000001b3 ^ (ulong)pbVar61[uVar49]);
            uVar49 = uVar49 + 1;
          } while (uVar55 != uVar49);
        }
      }
      goto LAB_0cbd7739;
    }
  }
  puVar57 = (undefined8 *)0x0;
LAB_0cbd7739:
  uStack_d8 = puVar57;
  puStack_a8 = &uStack_d8;
  lVar50 = func_0x05cf8b10(param_1,&uStack_d8,&UNK_01563a4f,&puStack_a8,&uStack_f1);
  plVar5 = *(long **)(lVar50 + 0x48);
  *(long **)(lVar50 + 0x48) = plVar46;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  puStack_a8 = uStack_d8;
  lVar50 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_a8);
  if ((*(byte *)(lVar50 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar50 + 0x28),*(ulong *)(lVar50 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar50 + 0x28) = pbStack_c0;
  *(byte **)(lVar50 + 0x18) = uStack_d0;
  *(byte **)(lVar50 + 0x20) = pbStack_c8;
  uStack_d0 = (byte *)((ulong)uStack_d0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar50 + 0x10) = uStack_d8;
  *(undefined8 *)(lVar50 + 0x30) = 0;
  if (((ulong)uStack_f0 & 1) != 0) {
    func_0x0412a280(pbStack_e0,(ulong)uStack_f0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_98 & 1) != 0) {
    func_0x0412a280(pbStack_88,uStack_98 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(plVar46,0xf6ff6a8,_DAT_0f6ff6b8);
  func_0x0c6cd240(plVar46,0xf6fcf08,_DAT_0f6fcf18);
  if ((uStack_70 & 1) != 0) {
    func_0x0412a280(pbStack_60,uStack_70 & 0xfffffffffffffffe);
  }
  return plVar46;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
