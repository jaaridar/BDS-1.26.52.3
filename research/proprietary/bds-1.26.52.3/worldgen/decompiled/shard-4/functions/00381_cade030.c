/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbde030 (ELF vaddr 0xcade030)
 * Label: caller-of-callee
 * Body:  [[0cbde030, 0cbdeac5] [0cbdeb26, 0cbdeb98] [0cbdebef, 0cbdec5c]]
 * Ghidra: FUN_0cbde030
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_0cbde030(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
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
  ulong *puVar43;
  ulong uVar44;
  long lVar45;
  byte *pbVar46;
  ulong uVar47;
  long lVar48;
  undefined8 uVar49;
  byte *pbVar50;
  byte bVar51;
  ulong uVar52;
  byte *pbVar53;
  ulong uVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  byte *pbVar58;
  ulong uVar59;
  undefined8 *puVar60;
  bool bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
  byte bVar71;
  byte bVar73;
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
  byte bVar107;
  undefined8 uStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  char cStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c1;
  byte *pbStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  char cStack_a0;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  char cVar74;
  
  lStack_90 = param_1;
  puVar43 = (ulong *)func_0x0cbdec60(param_2,&UNK_01352621,0xd);
  uStack_68 = 0;
  pbStack_c0 = (byte *)CONCAT44(pbStack_c0._4_4_,param_4);
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = *param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar54 = uStack_58;
  uVar47 = uStack_60;
  uStack_48 = 0;
  uVar44 = uStack_60 >> 1 & 0x7f;
  if ((uStack_60 & 1) != 0) {
    uVar44 = uStack_58;
  }
  if (uVar44 == 0) {
LAB_0cbde206:
    uStack_68 = 0;
    if ((uStack_60 & 1) == 0) goto LAB_0cbde1e3;
LAB_0cbde217:
    func_0x0412e5e0(&uStack_88,pbStack_50,uVar54);
  }
  else {
    pbVar58 = pbStack_50;
    if ((uStack_60 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_60 + 1);
    }
    if (pbVar58 == (byte *)0x0) {
      uStack_68 = 0;
    }
    else {
      if (*pbVar58 == 0) goto LAB_0cbde206;
      uVar59 = 0xcbf29ce484222325;
      uVar44 = func_0x0eee2e90(pbVar58);
      uStack_68 = uVar59;
      if (uVar44 != 0) {
        uVar52 = (ulong)((uint)uVar44 & 7);
        if (7 < uVar44) {
          uVar44 = uVar44 & 0xfffffffffffffff8;
          do {
            uVar59 = (((((((uVar59 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                          (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3 ^
                        (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3 ^
                      (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                     (ulong)pbVar58[7];
            pbVar58 = pbVar58 + 8;
            uVar44 = uVar44 - 8;
          } while (uVar44 != 0);
        }
        uStack_68 = uVar59;
        if (uVar52 != 0) {
          uVar44 = 0;
          do {
            uVar59 = uVar59 * 0x100000001b3 ^ (ulong)pbVar58[uVar44];
            uVar44 = uVar44 + 1;
            uStack_68 = uVar59;
          } while (uVar52 != uVar44);
        }
      }
    }
    if ((uVar47 & 1) != 0) goto LAB_0cbde217;
LAB_0cbde1e3:
    pbStack_78 = pbStack_50;
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
  }
  lVar48 = lStack_90;
  uStack_f8 = *(undefined8 **)(lStack_90 + 0x148);
  uStack_f0 = *(byte **)(lStack_90 + 0x150);
  if (*(long *)(lStack_90 + 0x150) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(lStack_90 + 0x150) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_f8);
  pbVar58 = uStack_f0;
  if (uStack_f0 != (byte *)0x0) {
    LOCK();
    pbVar57 = uStack_f0 + 8;
    lVar45 = *(long *)pbVar57;
    *(long *)pbVar57 = *(long *)pbVar57 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*(long *)uStack_f0 + 0x10))(uStack_f0);
      func_0x0412c2d0(pbVar58);
    }
  }
  pbVar58 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x408);
  if (pbVar58 == (byte *)0x0) {
    func_0x0eec74c0(0x408,0);
  }
  uStack_f8 = (undefined8 *)((ulong)uStack_f8 & 0xffffffffffffff00);
  pbStack_e0 = (byte *)((ulong)pbStack_e0 & 0xffffffffffffff00);
  if ((byte)puVar43[3] == 1) {
    if ((*puVar43 & 1) == 0) {
      pbStack_e8 = (byte *)puVar43[2];
      uStack_f8 = (undefined8 *)*puVar43;
      uStack_f0 = (byte *)puVar43[1];
    }
    else {
      func_0x0412e5e0(&uStack_f8,puVar43[2],puVar43[1]);
    }
    pbStack_e0 = (byte *)CONCAT71(pbStack_e0._1_7_,1);
  }
  uStack_118 = (byte *)((ulong)uStack_118 & 0xffffffffffffff00);
  cStack_100 = '\0';
  if ((byte)puVar43[7] == 1) {
    if ((puVar43[4] & 1) == 0) {
      pbStack_108 = (byte *)puVar43[6];
      uStack_118 = (byte *)puVar43[4];
      pbStack_110 = (byte *)puVar43[5];
    }
    else {
      func_0x0412e5e0(&uStack_118,puVar43[6],puVar43[5]);
    }
    cStack_100 = '\x01';
  }
  puStack_b8 = (undefined8 *)((ulong)puStack_b8 & 0xffffffffffffff00);
  cStack_a0 = '\0';
  if ((byte)puVar43[0xb] == 1) {
    if ((puVar43[8] & 1) == 0) {
      uStack_a8 = puVar43[10];
      puStack_b8 = (undefined8 *)puVar43[8];
      uStack_b0 = puVar43[9];
    }
    else {
      func_0x0412e5e0(&puStack_b8,puVar43[10],puVar43[9]);
    }
    cStack_a0 = '\x01';
  }
  func_0x0d03e950(pbVar58,&uStack_88,(ulong)pbStack_c0 & 0xffffffff,&uStack_f8,&uStack_118,
                  &puStack_b8);
  if ((cStack_a0 == '\x01') && (((ulong)puStack_b8 & 1) != 0)) {
    func_0x0412a280(uStack_a8,(ulong)puStack_b8 & 0xfffffffffffffffe);
  }
  if ((cStack_100 == '\x01') && (((ulong)uStack_118 & 1) != 0)) {
    func_0x0412a280(pbStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
  }
  if (((char)pbStack_e0 == '\x01') && (((ulong)uStack_f8 & 1) != 0)) {
    func_0x0412a280(pbStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
  }
  if (*(long *)(lVar48 + 0x140) == 0) {
    uVar49 = 0;
    lVar45 = 0;
  }
  else {
    lVar45 = func_0x0412c300();
    uVar49 = 0;
    if (lVar45 != 0) {
      uVar49 = *(undefined8 *)(lVar48 + 0x138);
    }
  }
  *(undefined8 *)(pbVar58 + 0x398) = uVar49;
  plVar1 = *(long **)(pbVar58 + 0x3a0);
  *(long *)(pbVar58 + 0x3a0) = lVar45;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar45 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar45 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      func_0x0412c2d0(plVar1);
    }
  }
  bVar61 = (pbVar58[0xd0] & 1) != 0;
  pbVar57 = pbVar58 + 0xd1;
  if (bVar61) {
    pbVar57 = *(byte **)(pbVar58 + 0xe0);
  }
  pbStack_c0 = pbVar58;
  pbVar50 = (byte *)(ulong)(pbVar58[0xd0] >> 1);
  if (bVar61) {
    pbVar50 = *(byte **)(pbVar58 + 0xd8);
  }
  if ((byte *)0xfffffffffffffff7 < pbVar50) {
    func_0x04882e30();
    goto LAB_0cbdeabf;
  }
  pbVar58 = (byte *)((long)&uStack_118 + 1);
  if (pbVar50 < (byte *)0x17) {
    uStack_118 = (byte *)CONCAT71(uStack_118._1_7_,(char)pbVar50 * '\x02');
    pbVar55 = pbVar58;
    if (pbVar50 != (byte *)0x0) goto LAB_0cbde53f;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar50 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar50 | 7) + 1;
    }
    pbVar55 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar55 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_118 = (byte *)(uVar47 | 1);
    lVar48 = lStack_90;
    pbStack_110 = pbVar50;
    pbStack_108 = pbVar55;
LAB_0cbde53f:
    func_0x0eee2f00(pbVar55,pbVar57,pbVar50);
  }
  pbVar55[(long)pbVar50] = 0;
  pbVar55 = (byte *)(ulong)((byte)uStack_118 >> 1);
  pbVar50 = pbStack_110;
  pbVar57 = pbStack_108;
  if (((ulong)uStack_118 & 1) == 0) {
    pbVar50 = pbVar55;
    pbVar57 = pbVar58;
  }
  if (pbVar50 != (byte *)0x0) {
    pbVar55 = pbVar57;
    if (pbVar50 < (byte *)0x8) {
LAB_0cbde68c:
      do {
        bVar3 = *pbVar55;
        bVar51 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar51 = bVar3;
        }
        *pbVar55 = bVar51;
        pbVar55 = pbVar55 + 1;
      } while (pbVar55 != pbVar57 + (long)pbVar50);
    }
    else if (pbVar50 < (byte *)0x20) {
      pbVar53 = (byte *)0x0;
LAB_0cbde625:
      pbVar56 = (byte *)((ulong)pbVar50 & 0xfffffffffffffff8);
      pbVar55 = pbVar57 + (long)pbVar56;
      do {
        uVar49 = *(undefined8 *)(pbVar57 + (long)pbVar53);
        bVar62 = (char)uVar49 + DAT_014e9110;
        cVar64 = (char)((ulong)uVar49 >> 8);
        bVar63 = cVar64 + DAT_014e9110._1_1_;
        cVar66 = (char)((ulong)uVar49 >> 0x10);
        bVar65 = cVar66 + DAT_014e9110._2_1_;
        cVar68 = (char)((ulong)uVar49 >> 0x18);
        bVar67 = cVar68 + DAT_014e9110._3_1_;
        cVar70 = (char)((ulong)uVar49 >> 0x20);
        bVar69 = cVar70 + DAT_014e9110._4_1_;
        cVar72 = (char)((ulong)uVar49 >> 0x28);
        bVar71 = cVar72 + DAT_014e9110._5_1_;
        cVar74 = (char)((ulong)uVar49 >> 0x30);
        cVar11 = (char)((ulong)uVar49 >> 0x38);
        bVar73 = cVar74 + DAT_014e9110._6_1_;
        bVar75 = cVar11 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar51 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar57 + (long)pbVar53) =
             CONCAT17((~-((byte)((bVar75 < bVar10) * bVar10 | (bVar75 >= bVar10) * bVar75) == bVar75
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar73 < bVar9) * bVar9 | (bVar73 >= bVar9) * bVar73) ==
                                  bVar73) & UNK_014ea366) + cVar74,
                               CONCAT15((~-((byte)((bVar71 < bVar8) * bVar8 |
                                                  (bVar71 >= bVar8) * bVar71) == bVar71) &
                                        UNK_014ea365) + cVar72,
                                        CONCAT14((~-((byte)((bVar69 < bVar7) * bVar7 |
                                                           (bVar69 >= bVar7) * bVar69) == bVar69) &
                                                 UNK_014ea364) + cVar70,
                                                 CONCAT13((~-((byte)((bVar67 < bVar6) * bVar6 |
                                                                    (bVar67 >= bVar6) * bVar67) ==
                                                             bVar67) & UNK_014ea363) + cVar68,
                                                          CONCAT12((~-((byte)((bVar65 < bVar5) *
                                                                              bVar5 | (bVar65 >=
                                                                                      bVar5) * 
                                                  bVar65) == bVar65) & UNK_014ea362) + cVar66,
                                                  CONCAT11((~-((byte)((bVar63 < bVar51) * bVar51 |
                                                                     (bVar63 >= bVar51) * bVar63) ==
                                                              bVar63) & UNK_014ea361) + cVar64,
                                                           (~-((byte)((bVar62 < bVar3) * bVar3 |
                                                                     (bVar62 >= bVar3) * bVar62) ==
                                                              bVar62) & DAT_014ea360) + (char)uVar49
                                                          )))))));
        pbVar53 = pbVar53 + 8;
      } while (pbVar56 != pbVar53);
      if (pbVar50 != pbVar56) goto LAB_0cbde68c;
    }
    else {
      pbVar53 = (byte *)((ulong)pbVar50 & 0xffffffffffffffe0);
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
        pbVar46 = pbVar57 + 0x10 + (long)pbVar55;
        bVar27 = *pbVar46;
        bVar28 = pbVar46[1];
        bVar29 = pbVar46[2];
        bVar30 = pbVar46[3];
        bVar31 = pbVar46[4];
        bVar32 = pbVar46[5];
        bVar33 = pbVar46[6];
        bVar34 = pbVar46[7];
        bVar35 = pbVar46[8];
        bVar36 = pbVar46[9];
        bVar37 = pbVar46[10];
        bVar38 = pbVar46[0xb];
        bVar39 = pbVar46[0xc];
        bVar40 = pbVar46[0xd];
        bVar41 = pbVar46[0xe];
        bVar42 = pbVar46[0xf];
        bVar76 = *pbVar56 + DAT_014e86b0;
        bVar77 = bVar12 + DAT_014e86b0._1_1_;
        bVar78 = bVar13 + DAT_014e86b0._2_1_;
        bVar79 = bVar14 + DAT_014e86b0._3_1_;
        bVar80 = bVar15 + DAT_014e86b0._4_1_;
        bVar81 = bVar16 + DAT_014e86b0._5_1_;
        bVar82 = bVar17 + DAT_014e86b0._6_1_;
        bVar83 = bVar18 + DAT_014e86b0._7_1_;
        bVar84 = bVar19 + DAT_014e86b0._8_1_;
        bVar85 = bVar20 + DAT_014e86b0._9_1_;
        bVar86 = bVar21 + DAT_014e86b0._10_1_;
        bVar87 = bVar22 + DAT_014e86b0._11_1_;
        bVar88 = bVar23 + DAT_014e86b0._12_1_;
        bVar89 = bVar24 + DAT_014e86b0._13_1_;
        bVar90 = bVar25 + DAT_014e86b0._14_1_;
        bVar91 = bVar26 + DAT_014e86b0._15_1_;
        bVar92 = bVar27 + DAT_014e86b0;
        bVar93 = bVar28 + DAT_014e86b0._1_1_;
        bVar94 = bVar29 + DAT_014e86b0._2_1_;
        bVar95 = bVar30 + DAT_014e86b0._3_1_;
        bVar96 = bVar31 + DAT_014e86b0._4_1_;
        bVar97 = bVar32 + DAT_014e86b0._5_1_;
        bVar98 = bVar33 + DAT_014e86b0._6_1_;
        bVar99 = bVar34 + DAT_014e86b0._7_1_;
        bVar100 = bVar35 + DAT_014e86b0._8_1_;
        bVar101 = bVar36 + DAT_014e86b0._9_1_;
        bVar102 = bVar37 + DAT_014e86b0._10_1_;
        bVar103 = bVar38 + DAT_014e86b0._11_1_;
        bVar104 = bVar39 + DAT_014e86b0._12_1_;
        bVar105 = bVar40 + DAT_014e86b0._13_1_;
        bVar106 = bVar41 + DAT_014e86b0._14_1_;
        bVar107 = bVar42 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar51 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar62 = DAT_014e4170._8_1_;
        bVar63 = DAT_014e4170._9_1_;
        bVar65 = DAT_014e4170._10_1_;
        bVar67 = DAT_014e4170._11_1_;
        bVar69 = DAT_014e4170._12_1_;
        bVar71 = DAT_014e4170._13_1_;
        bVar73 = DAT_014e4170._14_1_;
        bVar75 = DAT_014e4170._15_1_;
        pbVar46 = pbVar57 + (long)pbVar55;
        *pbVar46 = (-((byte)((bVar3 < bVar76) * bVar3 | (bVar3 >= bVar76) * bVar76) == bVar76) &
                   DAT_014ead50) + *pbVar56;
        pbVar46[1] = (-((byte)((bVar51 < bVar77) * bVar51 | (bVar51 >= bVar77) * bVar77) == bVar77)
                     & UNK_014ead51) + bVar12;
        pbVar46[2] = (-((byte)((bVar5 < bVar78) * bVar5 | (bVar5 >= bVar78) * bVar78) == bVar78) &
                     UNK_014ead52) + bVar13;
        pbVar46[3] = (-((byte)((bVar6 < bVar79) * bVar6 | (bVar6 >= bVar79) * bVar79) == bVar79) &
                     UNK_014ead53) + bVar14;
        pbVar46[4] = (-((byte)((bVar7 < bVar80) * bVar7 | (bVar7 >= bVar80) * bVar80) == bVar80) &
                     UNK_014ead54) + bVar15;
        pbVar46[5] = (-((byte)((bVar8 < bVar81) * bVar8 | (bVar8 >= bVar81) * bVar81) == bVar81) &
                     UNK_014ead55) + bVar16;
        pbVar46[6] = (-((byte)((bVar9 < bVar82) * bVar9 | (bVar9 >= bVar82) * bVar82) == bVar82) &
                     UNK_014ead56) + bVar17;
        pbVar46[7] = (-((byte)((bVar10 < bVar83) * bVar10 | (bVar10 >= bVar83) * bVar83) == bVar83)
                     & UNK_014ead57) + bVar18;
        pbVar46[8] = (-((byte)((bVar62 < bVar84) * bVar62 | (bVar62 >= bVar84) * bVar84) == bVar84)
                     & UNK_014ead58) + bVar19;
        pbVar46[9] = (-((byte)((bVar63 < bVar85) * bVar63 | (bVar63 >= bVar85) * bVar85) == bVar85)
                     & UNK_014ead59) + bVar20;
        pbVar46[10] = (-((byte)((bVar65 < bVar86) * bVar65 | (bVar65 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5a) + bVar21;
        pbVar46[0xb] = (-((byte)((bVar67 < bVar87) * bVar67 | (bVar67 >= bVar87) * bVar87) == bVar87
                         ) & UNK_014ead5b) + bVar22;
        pbVar46[0xc] = (-((byte)((bVar69 < bVar88) * bVar69 | (bVar69 >= bVar88) * bVar88) == bVar88
                         ) & UNK_014ead5c) + bVar23;
        pbVar46[0xd] = (-((byte)((bVar71 < bVar89) * bVar71 | (bVar71 >= bVar89) * bVar89) == bVar89
                         ) & UNK_014ead5d) + bVar24;
        pbVar46[0xe] = (-((byte)((bVar73 < bVar90) * bVar73 | (bVar73 >= bVar90) * bVar90) == bVar90
                         ) & UNK_014ead5e) + bVar25;
        pbVar46[0xf] = (-((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91
                         ) & UNK_014ead5f) + bVar26;
        pbVar56 = pbVar57 + 0x10 + (long)pbVar55;
        *pbVar56 = (-((byte)((bVar3 < bVar92) * bVar3 | (bVar3 >= bVar92) * bVar92) == bVar92) &
                   DAT_014ead50) + bVar27;
        pbVar56[1] = (-((byte)((bVar51 < bVar93) * bVar51 | (bVar51 >= bVar93) * bVar93) == bVar93)
                     & UNK_014ead51) + bVar28;
        pbVar56[2] = (-((byte)((bVar5 < bVar94) * bVar5 | (bVar5 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead52) + bVar29;
        pbVar56[3] = (-((byte)((bVar6 < bVar95) * bVar6 | (bVar6 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead53) + bVar30;
        pbVar56[4] = (-((byte)((bVar7 < bVar96) * bVar7 | (bVar7 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead54) + bVar31;
        pbVar56[5] = (-((byte)((bVar8 < bVar97) * bVar8 | (bVar8 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead55) + bVar32;
        pbVar56[6] = (-((byte)((bVar9 < bVar98) * bVar9 | (bVar9 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead56) + bVar33;
        pbVar56[7] = (-((byte)((bVar10 < bVar99) * bVar10 | (bVar10 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead57) + bVar34;
        pbVar56[8] = (-((byte)((bVar62 < bVar100) * bVar62 | (bVar62 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead58) + bVar35;
        pbVar56[9] = (-((byte)((bVar63 < bVar101) * bVar63 | (bVar63 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead59) + bVar36;
        pbVar56[10] = (-((byte)((bVar65 < bVar102) * bVar65 | (bVar65 >= bVar102) * bVar102) ==
                        bVar102) & UNK_014ead5a) + bVar37;
        pbVar56[0xb] = (-((byte)((bVar67 < bVar103) * bVar67 | (bVar67 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5b) + bVar38;
        pbVar56[0xc] = (-((byte)((bVar69 < bVar104) * bVar69 | (bVar69 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5c) + bVar39;
        pbVar56[0xd] = (-((byte)((bVar71 < bVar105) * bVar71 | (bVar71 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5d) + bVar40;
        pbVar56[0xe] = (-((byte)((bVar73 < bVar106) * bVar73 | (bVar73 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5e) + bVar41;
        pbVar56[0xf] = (-((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5f) + bVar42;
        pbVar55 = pbVar55 + 0x20;
      } while (pbVar53 != pbVar55);
      if (pbVar50 != pbVar53) {
        if (((ulong)pbVar50 & 0x18) == 0) {
          pbVar55 = pbVar53 + (long)pbVar57;
          goto LAB_0cbde68c;
        }
        goto LAB_0cbde625;
      }
    }
    pbVar55 = (byte *)(ulong)((byte)uStack_118 >> 1);
  }
  pbVar57 = pbVar58;
  if (((ulong)uStack_118 & 1) != 0) {
    pbVar55 = pbStack_110;
    pbVar57 = pbStack_108;
  }
  pbVar50 = pbVar57 + (long)pbVar55;
  pbVar53 = pbVar55;
  pbVar56 = pbVar57;
  while (((pbVar46 = pbVar50, 0 < (long)pbVar53 &&
          (pbVar56 = (byte *)func_0x0eee2ef0(pbVar56,0x3a,pbVar53), pbVar56 != (byte *)0x0)) &&
         (pbVar46 = pbVar56, *pbVar56 != 0x3a))) {
    pbVar56 = pbVar56 + 1;
    pbVar53 = pbVar50 + -(long)pbVar56;
  }
  pbVar53 = pbVar46 + -(long)pbVar57;
  if (pbVar55 < pbVar46 + -(long)pbVar57) {
    pbVar53 = pbVar55;
  }
  if (pbVar46 == pbVar50) {
    pbVar53 = pbVar55;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar53) {
LAB_0cbdeabf:
    uVar49 = func_0x04882e30();
    if ((cStack_a0 == '\x01') && (((ulong)puStack_b8 & 1) != 0)) {
      func_0x0412a280(uStack_a8,(ulong)puStack_b8 & 0xfffffffffffffffe);
    }
    if ((cStack_100 == '\x01') && (((ulong)uStack_118 & 1) != 0)) {
      func_0x0412a280(pbStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
    }
    if (((char)pbStack_e0 == '\x01') && (((ulong)uStack_f8 & 1) != 0)) {
      func_0x0412a280(pbStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbVar58,0x408);
    func_0x0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) goto LAB_0cbdec18;
    while ((uStack_60 & 1) == 0) {
      func_0x0eee2d70(uVar49);
LAB_0cbdec18:
      func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    }
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
    func_0x0eee2d70(uVar49);
    pcVar4 = (code *)swi(3);
    pbVar58 = (byte *)(*pcVar4)();
    return pbVar58;
  }
  if (pbVar53 < (byte *)0x17) {
    uStack_f8 = (undefined8 *)CONCAT71(uStack_f8._1_7_,(char)pbVar53 * '\x02');
    pbVar58 = (byte *)((long)&uStack_f8 + 1);
    if (pbVar53 != (byte *)0x0) goto LAB_0cbde798;
  }
  else {
    uVar47 = 0x1a;
    if (((ulong)pbVar53 | 7) != 0x17) {
      uVar47 = ((ulong)pbVar53 | 7) + 1;
    }
    pbVar58 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar47);
    if (pbVar58 == (byte *)0x0) {
      func_0x0eec74c0(uVar47,0);
    }
    uStack_f8 = (undefined8 *)(uVar47 | 1);
    lVar48 = lStack_90;
    uStack_f0 = pbVar53;
    pbStack_e8 = pbVar58;
LAB_0cbde798:
    memmove(pbVar58,pbVar57,pbVar53);
  }
  pbVar58[(long)pbVar53] = 0;
  func_0x05cf8990(lVar48 + 0xe0,&uStack_f8,&uStack_f8);
  if (((ulong)uStack_f8 & 1) != 0) {
    func_0x0412a280(pbStack_e8,(ulong)uStack_f8 & 0xfffffffffffffffe);
  }
  uStack_f8 = (undefined8 *)0x0;
  if (((ulong)uStack_118 & 1) == 0) {
    pbStack_e0 = pbStack_108;
    uStack_f0 = uStack_118;
    pbStack_e8 = pbStack_110;
  }
  else {
    func_0x0412e5e0(&uStack_f0,pbStack_108,pbStack_110);
  }
  uStack_d8 = 0;
  if (((ulong)uStack_f0 & 1) == 0) {
    if ((byte)uStack_f0 >> 1 != 0) goto LAB_0cbde846;
  }
  else if (pbStack_e8 != (byte *)0x0) {
LAB_0cbde846:
    pbVar58 = pbStack_e0;
    if (((ulong)uStack_f0 & 1) == 0) {
      pbVar58 = (byte *)((long)&uStack_f0 + 1);
    }
    if ((pbVar58 != (byte *)0x0) && (*pbVar58 != 0)) {
      puVar60 = (undefined8 *)0xcbf29ce484222325;
      uVar47 = func_0x0eee2e90(pbVar58);
      if (uVar47 != 0) {
        uVar54 = (ulong)((uint)uVar47 & 7);
        if (7 < uVar47) {
          uVar47 = uVar47 & 0xfffffffffffffff8;
          do {
            puVar60 = (undefined8 *)
                      (((((((((long)puVar60 * 0x100000001b3 ^ (ulong)*pbVar58) * 0x100000001b3 ^
                            (ulong)pbVar58[1]) * 0x100000001b3 ^ (ulong)pbVar58[2]) * 0x100000001b3
                          ^ (ulong)pbVar58[3]) * 0x100000001b3 ^ (ulong)pbVar58[4]) * 0x100000001b3
                        ^ (ulong)pbVar58[5]) * 0x100000001b3 ^ (ulong)pbVar58[6]) * 0x100000001b3 ^
                      (ulong)pbVar58[7]);
            pbVar58 = pbVar58 + 8;
            uVar47 = uVar47 - 8;
          } while (uVar47 != 0);
        }
        if (uVar54 != 0) {
          uVar47 = 0;
          do {
            puVar60 = (undefined8 *)((long)puVar60 * 0x100000001b3 ^ (ulong)pbVar58[uVar47]);
            uVar47 = uVar47 + 1;
          } while (uVar54 != uVar47);
        }
      }
      goto LAB_0cbde94a;
    }
  }
  puVar60 = (undefined8 *)0x0;
LAB_0cbde94a:
  uStack_f8 = puVar60;
  puStack_b8 = &uStack_f8;
  lVar45 = FUN_05cf8b10(lVar48,&uStack_f8,&UNK_01563a4f,&puStack_b8,&uStack_c1);
  pbVar58 = pbStack_c0;
  plVar1 = *(long **)(lVar45 + 0x48);
  *(byte **)(lVar45 + 0x48) = pbStack_c0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_b8 = uStack_f8;
  lVar48 = FUN_05cf8dc0(lVar48 + 0xf8,&puStack_b8);
  if ((*(byte *)(lVar48 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar48 + 0x28),*(ulong *)(lVar48 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar48 + 0x28) = pbStack_e0;
  *(byte **)(lVar48 + 0x18) = uStack_f0;
  *(byte **)(lVar48 + 0x20) = pbStack_e8;
  uStack_f0 = (byte *)((ulong)uStack_f0 & 0xffffffffffff0000);
  *(undefined8 **)(lVar48 + 0x10) = uStack_f8;
  *(undefined8 *)(lVar48 + 0x30) = 0;
  if (((ulong)uStack_118 & 1) != 0) {
    func_0x0412a280(pbStack_108,(ulong)uStack_118 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    func_0x0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(pbVar58,0xf6fdf78,_DAT_0f6fdf88);
  if ((uStack_60 & 1) != 0) {
    func_0x0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return pbVar58;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
