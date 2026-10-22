/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xcbdbe20 (ELF vaddr 0xcadbe20)
 * Label: caller-of-seed
 * Body:  [[0cbdbe20, 0cbdc947] [0cbdc9d6, 0cbdc9f9] [0cbdc9fd, 0cbdca58]]
 * Ghidra: FUN_0cbdbe20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0cbdbe20(long param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

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
  ulong *puVar44;
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
  byte *pbVar55;
  undefined1 *puVar56;
  byte *pbVar57;
  byte *pbVar58;
  ulong uVar59;
  byte *pbVar60;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined1 *puStack_98;
  undefined4 uStack_8c;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  long lStack_70;
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
  
  uStack_8c = param_4;
  puVar44 = (ulong *)func_0x0cbdca60(param_2,&UNK_0124f7e3,9);
  bVar3 = (byte)*puVar44;
  uVar49 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar49 = puVar44[1];
  }
  if (uVar49 == 0) {
    lStack_70 = 0;
  }
  else {
    uStack_e8 = (undefined1 *)0x0;
    if ((bVar3 & 1) == 0) {
      pbStack_d0 = (byte *)puVar44[2];
      uStack_e0 = (byte *)*puVar44;
      pbStack_d8 = (byte *)puVar44[1];
      uStack_c8 = 0;
      uVar49 = (ulong)uStack_e0 & 0xff;
      if (((ulong)uStack_e0 & 1) != 0) goto LAB_0cbdbed4;
LAB_0cbdbe9d:
      if (uVar49 >> 1 != 0) goto LAB_0cbdbee2;
LAB_0cbdbfd6:
      uStack_c8 = 0;
      uVar59 = 0;
    }
    else {
      func_0x0412e5e0(&uStack_e0,puVar44[2]);
      uStack_c8 = 0;
      uVar49 = (ulong)uStack_e0 & 0xff;
      if (((ulong)uStack_e0 & 1) == 0) goto LAB_0cbdbe9d;
LAB_0cbdbed4:
      if (pbStack_d8 == (byte *)0x0) goto LAB_0cbdbfd6;
LAB_0cbdbee2:
      uStack_c8 = 0;
      if ((uVar49 & 1) == 0) {
        pbVar60 = (byte *)((long)&uStack_e0 + 1);
        if (pbVar60 != (byte *)0x0) goto LAB_0cbdbf03;
        goto LAB_0cbdbfd6;
      }
      pbVar60 = pbStack_d0;
      if (pbStack_d0 == (byte *)0x0) goto LAB_0cbdbfd6;
LAB_0cbdbf03:
      if (*pbVar60 == 0) goto LAB_0cbdbfd6;
      uVar59 = 0xcbf29ce484222325;
      uVar49 = func_0x0eee2e90(pbVar60);
      if (uVar49 != 0) {
        uVar45 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            uVar59 = (((((((uVar59 * 0x100000001b3 ^ (ulong)*pbVar60) * 0x100000001b3 ^
                          (ulong)pbVar60[1]) * 0x100000001b3 ^ (ulong)pbVar60[2]) * 0x100000001b3 ^
                        (ulong)pbVar60[3]) * 0x100000001b3 ^ (ulong)pbVar60[4]) * 0x100000001b3 ^
                      (ulong)pbVar60[5]) * 0x100000001b3 ^ (ulong)pbVar60[6]) * 0x100000001b3 ^
                     (ulong)pbVar60[7];
            pbVar60 = pbVar60 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        if (uVar45 != 0) {
          uVar49 = 0;
          do {
            uVar59 = uVar59 * 0x100000001b3 ^ (ulong)pbVar60[uVar49];
            uVar49 = uVar49 + 1;
          } while (uVar45 != uVar49);
        }
      }
    }
    uStack_e8 = (undefined1 *)uVar59;
    lStack_70 = func_0x0cc422f0(param_1,&uStack_e8,0,0,0);
    if (((ulong)uStack_e0 & 1) != 0) {
      FUN_0412a280(pbStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
  }
  uStack_68 = 0;
  if ((*param_3 & 1) == 0) {
    pbStack_50 = (byte *)param_3[2];
    uStack_60 = *param_3;
    uStack_58 = param_3[1];
  }
  else {
    func_0x0412e5e0(&uStack_60,param_3[2],param_3[1]);
  }
  uVar59 = uStack_58;
  uVar49 = uStack_60;
  uStack_48 = 0;
  uVar45 = uStack_60 >> 1 & 0x7f;
  if ((uStack_60 & 1) != 0) {
    uVar45 = uStack_58;
  }
  if (uVar45 == 0) {
LAB_0cbdc19b:
    uStack_68 = 0;
joined_r0x0cbdc1aa:
    if ((uVar49 & 1) != 0) goto LAB_0cbdc1ac;
LAB_0cbdc183:
    pbStack_78 = pbStack_50;
    uStack_88 = uStack_60;
    uStack_80 = uStack_58;
  }
  else {
    pbVar60 = pbStack_50;
    if ((uStack_60 & 1) == 0) {
      pbVar60 = (byte *)((long)&uStack_60 + 1);
    }
    if (pbVar60 != (byte *)0x0) {
      if (*pbVar60 == 0) goto LAB_0cbdc19b;
      uVar61 = 0xcbf29ce484222325;
      uVar45 = func_0x0eee2e90(pbVar60);
      uStack_68 = uVar61;
      if (uVar45 != 0) {
        uVar53 = (ulong)((uint)uVar45 & 7);
        if (7 < uVar45) {
          uVar45 = uVar45 & 0xfffffffffffffff8;
          do {
            uVar61 = (((((((uVar61 * 0x100000001b3 ^ (ulong)*pbVar60) * 0x100000001b3 ^
                          (ulong)pbVar60[1]) * 0x100000001b3 ^ (ulong)pbVar60[2]) * 0x100000001b3 ^
                        (ulong)pbVar60[3]) * 0x100000001b3 ^ (ulong)pbVar60[4]) * 0x100000001b3 ^
                      (ulong)pbVar60[5]) * 0x100000001b3 ^ (ulong)pbVar60[6]) * 0x100000001b3 ^
                     (ulong)pbVar60[7];
            pbVar60 = pbVar60 + 8;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
        }
        uStack_68 = uVar61;
        if (uVar53 != 0) {
          uVar45 = 0;
          do {
            uVar61 = uVar61 * 0x100000001b3 ^ (ulong)pbVar60[uVar45];
            uVar45 = uVar45 + 1;
            uStack_68 = uVar61;
          } while (uVar53 != uVar45);
        }
      }
      goto joined_r0x0cbdc1aa;
    }
    uStack_68 = 0;
    if ((uStack_60 & 1) == 0) goto LAB_0cbdc183;
LAB_0cbdc1ac:
    func_0x0412e5e0(&uStack_88,pbStack_50,uVar59);
  }
  uStack_e8 = *(undefined1 **)(param_1 + 0x148);
  uStack_e0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar46 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar46 = *plVar46 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_e8);
  pbVar60 = uStack_e0;
  if (uStack_e0 != (byte *)0x0) {
    LOCK();
    pbVar54 = uStack_e0 + 8;
    lVar50 = *(long *)pbVar54;
    *(long *)pbVar54 = *(long *)pbVar54 + -1;
    UNLOCK();
    if (lVar50 == 0) {
      (**(code **)(*(long *)uStack_e0 + 0x10))(uStack_e0);
      FUN_0412c2d0(pbVar60);
    }
  }
  plVar46 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3d8);
  if (plVar46 == (long *)0x0) {
    func_0x0eec74c0(0x3d8,0);
  }
  func_0x0c6c7010(plVar46,&uStack_88,uStack_8c);
  *plVar46 = (long)&UNK_0f39e0d0;
  plVar46[0x75] = lStack_70;
  *(undefined1 *)(plVar46 + 0x76) = 0;
  *(undefined1 *)(plVar46 + 0x7a) = 0;
  func_0x0c640f60(plVar46,&UNK_0c6410e0,0);
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
      FUN_0412c2d0(plVar4);
    }
  }
  bVar62 = (*(byte *)(plVar46 + 0x1a) & 1) != 0;
  lVar50 = (long)plVar46 + 0xd1;
  if (bVar62) {
    lVar50 = plVar46[0x1c];
  }
  pbVar60 = (byte *)(ulong)(*(byte *)(plVar46 + 0x1a) >> 1);
  if (bVar62) {
    pbVar60 = (byte *)plVar46[0x1b];
  }
  if ((byte *)0xfffffffffffffff7 < pbVar60) {
    func_0x04882e30();
    goto LAB_0cbdc93e;
  }
  pbVar54 = (byte *)((long)&uStack_b0 + 1);
  if (pbVar60 < (byte *)0x17) {
    uStack_b0 = (byte *)CONCAT71(uStack_b0._1_7_,(char)pbVar60 * '\x02');
    if (pbVar60 != (byte *)0x0) goto LAB_0cbdc3ad;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar60 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar60 | 7) + 1;
    }
    pbVar54 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar54 == (byte *)0x0) {
      func_0x0eec74c0(uVar49,0);
    }
    uStack_b0 = (byte *)(uVar49 | 1);
    pbStack_a8 = pbVar60;
    pbStack_a0 = pbVar54;
LAB_0cbdc3ad:
    func_0x0eee2f00(pbVar54,lVar50,pbVar60);
  }
  pbVar55 = (byte *)((long)&uStack_b0 + 1);
  pbVar54[(long)pbVar60] = 0;
  pbVar57 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  pbVar54 = pbStack_a8;
  pbVar60 = pbStack_a0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbVar54 = pbVar57;
    pbVar60 = pbVar55;
  }
  if (pbVar54 != (byte *)0x0) {
    pbVar57 = pbVar60;
    if (pbVar54 < (byte *)0x8) {
LAB_0cbdc52c:
      do {
        bVar3 = *pbVar57;
        bVar52 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar52 = bVar3;
        }
        *pbVar57 = bVar52;
        pbVar57 = pbVar57 + 1;
      } while (pbVar57 != pbVar60 + (long)pbVar54);
    }
    else if (pbVar54 < (byte *)0x20) {
      pbVar48 = (byte *)0x0;
LAB_0cbdc4c5:
      pbVar58 = (byte *)((ulong)pbVar54 & 0xfffffffffffffff8);
      pbVar57 = pbVar60 + (long)pbVar58;
      do {
        uVar51 = *(undefined8 *)(pbVar60 + (long)pbVar48);
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
        *(ulong *)(pbVar60 + (long)pbVar48) =
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
      } while (pbVar58 != pbVar48);
      if (pbVar54 != pbVar58) goto LAB_0cbdc52c;
    }
    else {
      pbVar48 = (byte *)((ulong)pbVar54 & 0xffffffffffffffe0);
      pbVar57 = (byte *)0x0;
      do {
        pbVar58 = pbVar60 + (long)pbVar57;
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
        pbVar2 = pbVar60 + 0x10 + (long)pbVar57;
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
        bVar77 = *pbVar58 + DAT_014e86b0;
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
        pbVar2 = pbVar60 + (long)pbVar57;
        *pbVar2 = (-((byte)((bVar3 < bVar77) * bVar3 | (bVar3 >= bVar77) * bVar77) == bVar77) &
                  DAT_014ead50) + *pbVar58;
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
        pbVar58 = pbVar60 + 0x10 + (long)pbVar57;
        *pbVar58 = (-((byte)((bVar3 < bVar93) * bVar3 | (bVar3 >= bVar93) * bVar93) == bVar93) &
                   DAT_014ead50) + bVar28;
        pbVar58[1] = (-((byte)((bVar52 < bVar94) * bVar52 | (bVar52 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead51) + bVar29;
        pbVar58[2] = (-((byte)((bVar6 < bVar95) * bVar6 | (bVar6 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead52) + bVar30;
        pbVar58[3] = (-((byte)((bVar7 < bVar96) * bVar7 | (bVar7 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead53) + bVar31;
        pbVar58[4] = (-((byte)((bVar8 < bVar97) * bVar8 | (bVar8 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead54) + bVar32;
        pbVar58[5] = (-((byte)((bVar9 < bVar98) * bVar9 | (bVar9 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead55) + bVar33;
        pbVar58[6] = (-((byte)((bVar10 < bVar99) * bVar10 | (bVar10 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead56) + bVar34;
        pbVar58[7] = (-((byte)((bVar11 < bVar100) * bVar11 | (bVar11 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead57) + bVar35;
        pbVar58[8] = (-((byte)((bVar63 < bVar101) * bVar63 | (bVar63 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead58) + bVar36;
        pbVar58[9] = (-((byte)((bVar64 < bVar102) * bVar64 | (bVar64 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead59) + bVar37;
        pbVar58[10] = (-((byte)((bVar66 < bVar103) * bVar66 | (bVar66 >= bVar103) * bVar103) ==
                        bVar103) & UNK_014ead5a) + bVar38;
        pbVar58[0xb] = (-((byte)((bVar68 < bVar104) * bVar68 | (bVar68 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5b) + bVar39;
        pbVar58[0xc] = (-((byte)((bVar70 < bVar105) * bVar70 | (bVar70 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5c) + bVar40;
        pbVar58[0xd] = (-((byte)((bVar72 < bVar106) * bVar72 | (bVar72 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5d) + bVar41;
        pbVar58[0xe] = (-((byte)((bVar74 < bVar107) * bVar74 | (bVar74 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5e) + bVar42;
        pbVar58[0xf] = (-((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5f) + bVar43;
        pbVar57 = pbVar57 + 0x20;
      } while (pbVar48 != pbVar57);
      if (pbVar54 != pbVar48) {
        if (((ulong)pbVar54 & 0x18) == 0) {
          pbVar57 = pbVar48 + (long)pbVar60;
          goto LAB_0cbdc52c;
        }
        goto LAB_0cbdc4c5;
      }
    }
    pbVar57 = (byte *)(ulong)((byte)uStack_b0 >> 1);
  }
  if (((ulong)uStack_b0 & 1) != 0) {
    pbVar57 = pbStack_a8;
    pbVar55 = pbStack_a0;
  }
  pbVar60 = pbVar55 + (long)pbVar57;
  pbVar54 = pbVar57;
  pbVar48 = pbVar55;
  while (((pbVar58 = pbVar60, 0 < (long)pbVar54 &&
          (pbVar48 = (byte *)func_0x0eee2ef0(pbVar48,0x3a,pbVar54), pbVar48 != (byte *)0x0)) &&
         (pbVar58 = pbVar48, *pbVar48 != 0x3a))) {
    pbVar48 = pbVar48 + 1;
    pbVar54 = pbVar60 + -(long)pbVar48;
  }
  pbVar54 = pbVar58 + -(long)pbVar55;
  if (pbVar57 < pbVar58 + -(long)pbVar55) {
    pbVar54 = pbVar57;
  }
  if (pbVar58 == pbVar60) {
    pbVar54 = pbVar57;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar54) {
LAB_0cbdc93e:
    uVar51 = func_0x04882e30();
    if (((ulong)uStack_b0 & 1) != 0) {
      FUN_0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
    }
    if (plVar46 != (long *)0x0) {
      (**(code **)(*plVar46 + 8))(plVar46);
    }
    func_0x0cc46730(auStack_40);
    if ((uStack_88 & 1) != 0) {
      FUN_0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
    }
    if ((uStack_60 & 1) != 0) {
      FUN_0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar51);
    pcVar5 = (code *)swi(3);
    plVar46 = (long *)(*pcVar5)();
    return plVar46;
  }
  if (pbVar54 < (byte *)0x17) {
    uStack_e8 = (undefined1 *)CONCAT71(uStack_e8._1_7_,(char)pbVar54 * '\x02');
    pbVar60 = (byte *)((long)&uStack_e8 + 1);
    if (pbVar54 != (byte *)0x0) goto LAB_0cbdc62e;
  }
  else {
    uVar49 = 0x1a;
    if (((ulong)pbVar54 | 7) != 0x17) {
      uVar49 = ((ulong)pbVar54 | 7) + 1;
    }
    pbVar60 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
    if (pbVar60 == (byte *)0x0) {
      func_0x0eec74c0(uVar49,0);
    }
    uStack_e8 = (undefined1 *)(uVar49 | 1);
    uStack_e0 = pbVar54;
    pbStack_d8 = pbVar60;
LAB_0cbdc62e:
    func_0x0eee2ee0(pbVar60,pbVar55,pbVar54);
  }
  pbVar60[(long)pbVar54] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_e8,&uStack_e8);
  if (((ulong)uStack_e8 & 1) != 0) {
    FUN_0412a280(pbStack_d8,(ulong)uStack_e8 & 0xfffffffffffffffe);
  }
  uStack_e8 = (undefined1 *)0x0;
  if (((ulong)uStack_b0 & 1) == 0) {
    pbStack_d0 = pbStack_a0;
    uStack_e0 = uStack_b0;
    pbStack_d8 = pbStack_a8;
  }
  else {
    func_0x0412e5e0(&uStack_e0,pbStack_a0,pbStack_a8);
  }
  uStack_c8 = 0;
  if (((ulong)uStack_e0 & 1) == 0) {
    if ((byte)uStack_e0 >> 1 != 0) goto LAB_0cbdc6d9;
  }
  else if (pbStack_d8 != (byte *)0x0) {
LAB_0cbdc6d9:
    pbVar60 = pbStack_d0;
    if (((ulong)uStack_e0 & 1) == 0) {
      pbVar60 = (byte *)((long)&uStack_e0 + 1);
    }
    if ((pbVar60 != (byte *)0x0) && (*pbVar60 != 0)) {
      puVar56 = (undefined1 *)0xcbf29ce484222325;
      uVar49 = func_0x0eee2e90(pbVar60);
      if (uVar49 != 0) {
        uVar59 = (ulong)((uint)uVar49 & 7);
        if (7 < uVar49) {
          uVar49 = uVar49 & 0xfffffffffffffff8;
          do {
            puVar56 = (undefined1 *)
                      (((((((((long)puVar56 * 0x100000001b3 ^ (ulong)*pbVar60) * 0x100000001b3 ^
                            (ulong)pbVar60[1]) * 0x100000001b3 ^ (ulong)pbVar60[2]) * 0x100000001b3
                          ^ (ulong)pbVar60[3]) * 0x100000001b3 ^ (ulong)pbVar60[4]) * 0x100000001b3
                        ^ (ulong)pbVar60[5]) * 0x100000001b3 ^ (ulong)pbVar60[6]) * 0x100000001b3 ^
                      (ulong)pbVar60[7]);
            pbVar60 = pbVar60 + 8;
            uVar49 = uVar49 - 8;
          } while (uVar49 != 0);
        }
        if (uVar59 != 0) {
          uVar49 = 0;
          do {
            puVar56 = (undefined1 *)((long)puVar56 * 0x100000001b3 ^ (ulong)pbVar60[uVar49]);
            uVar49 = uVar49 + 1;
          } while (uVar59 != uVar49);
        }
      }
      goto LAB_0cbdc7d9;
    }
  }
  puVar56 = (undefined1 *)0x0;
LAB_0cbdc7d9:
  uStack_e8 = puVar56;
  puStack_98 = (undefined1 *)&uStack_e8;
  lVar50 = func_0x05cf8b10(param_1,&uStack_e8,&UNK_01563a4f,&puStack_98,&uStack_b1);
  plVar4 = *(long **)(lVar50 + 0x48);
  *(long **)(lVar50 + 0x48) = plVar46;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  puStack_98 = uStack_e8;
  lVar50 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_98);
  if ((*(byte *)(lVar50 + 0x18) & 1) != 0) {
    FUN_0412a280(*(undefined8 *)(lVar50 + 0x28),*(ulong *)(lVar50 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar50 + 0x28) = pbStack_d0;
  *(byte **)(lVar50 + 0x18) = uStack_e0;
  *(byte **)(lVar50 + 0x20) = pbStack_d8;
  uStack_e0 = (byte *)((ulong)uStack_e0 & 0xffffffffffff0000);
  *(undefined1 **)(lVar50 + 0x10) = uStack_e8;
  *(undefined8 *)(lVar50 + 0x30) = 0;
  if (((ulong)uStack_b0 & 1) != 0) {
    FUN_0412a280(pbStack_a0,(ulong)uStack_b0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if ((uStack_88 & 1) != 0) {
    FUN_0412a280(pbStack_78,uStack_88 & 0xfffffffffffffffe);
  }
  func_0x0c6cd240(plVar46,0xf6fe550,_DAT_0f6fe560);
  if ((uStack_60 & 1) != 0) {
    FUN_0412a280(pbStack_50,uStack_60 & 0xfffffffffffffffe);
  }
  return plVar46;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
