/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cd89b0 (ELF vaddr 0x5bd89b0)
 * Label: caller-of-seed
 * Body:  [[05cd89b0, 05cd9494] [05cd9526, 05cd9549] [05cd954d, 05cd9557] [05cd9570, 05cd959f]]
 * Ghidra: FUN_05cd89b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_05cd89b0(long param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined1 *param_5,undefined1 param_6)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
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
  undefined8 uVar46;
  long lVar47;
  byte *pbVar48;
  byte *pbVar49;
  byte *pbVar50;
  ulong uVar51;
  long *plVar52;
  byte bVar53;
  ulong uVar54;
  byte *pbVar55;
  byte *pbVar56;
  byte *pbVar57;
  undefined8 *puVar58;
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
  undefined8 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  long *plStack_88;
  undefined1 uStack_69;
  long *plStack_68;
  long lStack_60;
  byte *pbStack_58;
  undefined8 *puStack_48;
  undefined1 auStack_40 [16];
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    pbStack_58 = *(byte **)(param_2 + 0x18);
    plStack_68 = *(long **)(param_2 + 8);
    lStack_60 = *(long *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&plStack_68,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_a8 = *(byte **)(param_1 + 0x148);
  uStack_a0 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar52 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar52 = *plVar52 + 1;
    UNLOCK();
  }
  func_0x0cc46680(auStack_40,&uStack_a8);
  plVar52 = (long *)uStack_a0;
  if (uStack_a0 != (byte *)0x0) {
    LOCK();
    plVar1 = (long *)((long)uStack_a0 + 8);
    lVar47 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar47 == 0) {
      (**(code **)(*(long *)uStack_a0 + 0x10))(uStack_a0);
      func_0x0412c2d0(plVar52);
    }
  }
  pbVar44 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3c8);
  if (pbVar44 == (byte *)0x0) {
    func_0x0eec74c0(0x3c8,0);
  }
  FUN_0d005bb0(pbVar44,&plStack_68,param_3,param_4,*param_5,param_6);
  *(undefined **)pbVar44 = &UNK_0f006b90;
  uStack_a8 = (byte *)0x0;
  if (((ulong)plStack_68 & 1) == 0) {
    pbStack_90 = pbStack_58;
    uStack_a0 = (byte *)plStack_68;
    pbStack_98 = (byte *)lStack_60;
  }
  else {
    func_0x0412e5e0(&uStack_a0,pbStack_58,lStack_60);
  }
  plStack_88 = (long *)0x0;
  if (((ulong)uStack_a0 & 1) == 0) {
    if ((byte)uStack_a0 >> 1 != 0) goto LAB_05cd8b0b;
LAB_05cd8c06:
    uVar51 = 0;
  }
  else {
    if (pbStack_98 == (byte *)0x0) goto LAB_05cd8c06;
LAB_05cd8b0b:
    if (((ulong)uStack_a0 & 1) == 0) {
      pbVar49 = (byte *)((long)&uStack_a0 + 1);
      if (pbVar49 != (byte *)0x0) goto LAB_05cd8b2c;
      goto LAB_05cd8c06;
    }
    pbVar49 = pbStack_90;
    if (pbStack_90 == (byte *)0x0) goto LAB_05cd8c06;
LAB_05cd8b2c:
    if (*pbVar49 == 0) goto LAB_05cd8c06;
    uVar51 = 0xcbf29ce484222325;
    uVar45 = func_0x0eee2e90(pbVar49);
    if (uVar45 != 0) {
      uVar54 = (ulong)((uint)uVar45 & 7);
      if (7 < uVar45) {
        uVar45 = uVar45 & 0xfffffffffffffff8;
        do {
          uVar51 = (((((((uVar51 * 0x100000001b3 ^ (ulong)*pbVar49) * 0x100000001b3 ^
                        (ulong)pbVar49[1]) * 0x100000001b3 ^ (ulong)pbVar49[2]) * 0x100000001b3 ^
                      (ulong)pbVar49[3]) * 0x100000001b3 ^ (ulong)pbVar49[4]) * 0x100000001b3 ^
                    (ulong)pbVar49[5]) * 0x100000001b3 ^ (ulong)pbVar49[6]) * 0x100000001b3 ^
                   (ulong)pbVar49[7];
          pbVar49 = pbVar49 + 8;
          uVar45 = uVar45 - 8;
        } while (uVar45 != 0);
      }
      if (uVar54 != 0) {
        uVar45 = 0;
        do {
          uVar51 = uVar51 * 0x100000001b3 ^ (ulong)pbVar49[uVar45];
          uVar45 = uVar45 + 1;
        } while (uVar54 != uVar45);
      }
    }
  }
  uStack_a8 = (byte *)uVar51;
  func_0x0c690a60(pbVar44 + 0x3b8,&UNK_0f005828,&uStack_a8);
  if (((ulong)uStack_a0 & 1) != 0) {
    func_0x0412a280(pbStack_90,(ulong)uStack_a0 & 0xfffffffffffffffe);
  }
  pbVar49 = pbVar44 + 0x368;
  func_0x05cf9c30(pbVar49);
  uVar46 = func_0x05cf9d90(pbVar49);
  uVar4 = *(undefined2 *)(pbVar44 + 0x14e);
  uStack_a8 = &UNK_0f006fe0;
  pbStack_98 = &UNK_05cfdab0;
  pbStack_90 = (byte *)0x0;
  uStack_a0 = pbVar44;
  plStack_88 = &uStack_a8;
  func_0x05cfa830(&uStack_c0,uVar46,&uStack_a8);
  if (plStack_88 == &uStack_a8) {
    lVar47 = 0x20;
LAB_05cd8cbb:
    (**(code **)(*plStack_88 + lVar47))();
  }
  else {
    lVar47 = 0x28;
    if (plStack_88 != (long *)0x0) goto LAB_05cd8cbb;
  }
  func_0x0c6ed620(uVar46,uVar4,&uStack_c0,1);
  if (pbStack_b8 != (byte *)0x0) {
    pbVar48 = (byte *)FUN_0412c300();
    uStack_a0 = pbVar48;
    if (pbVar48 != (byte *)0x0) {
      uStack_a8 = uStack_c0;
      if (uStack_c0 != (byte *)0x0) {
        (**(code **)(**(long **)(uStack_c0 + 0x28) + 0x10))();
      }
      LOCK();
      pbVar56 = pbVar48 + 8;
      lVar47 = *(long *)pbVar56;
      *(long *)pbVar56 = *(long *)pbVar56 + -1;
      UNLOCK();
      if (lVar47 == 0) {
        (**(code **)(*(long *)pbVar48 + 0x10))(pbVar48);
        func_0x0412c2d0(pbVar48);
      }
    }
    if (pbStack_b8 != (byte *)0x0) {
      func_0x0412c2d0();
    }
  }
  func_0x05cfab30(pbVar49);
  uVar46 = func_0x05cfac90(pbVar49);
  uVar4 = *(undefined2 *)(pbVar44 + 0x14e);
  uStack_a8 = &UNK_0f007060;
  pbStack_98 = &UNK_05cfdaf0;
  pbStack_90 = (byte *)0x0;
  uStack_a0 = pbVar44;
  plStack_88 = &uStack_a8;
  func_0x05cfb550(&uStack_c0,uVar46,&uStack_a8);
  if (plStack_88 == &uStack_a8) {
    lVar47 = 0x20;
LAB_05cd8dae:
    (**(code **)(*plStack_88 + lVar47))();
  }
  else {
    lVar47 = 0x28;
    if (plStack_88 != (long *)0x0) goto LAB_05cd8dae;
  }
  func_0x0c6ed620(uVar46,uVar4,&uStack_c0);
  if (pbStack_b8 != (byte *)0x0) {
    pbVar49 = (byte *)FUN_0412c300();
    uStack_a0 = pbVar49;
    if (pbVar49 != (byte *)0x0) {
      uStack_a8 = uStack_c0;
      if (uStack_c0 != (byte *)0x0) {
        (**(code **)(**(long **)(uStack_c0 + 0x28) + 0x10))();
      }
      LOCK();
      pbVar48 = pbVar49 + 8;
      lVar47 = *(long *)pbVar48;
      *(long *)pbVar48 = *(long *)pbVar48 + -1;
      UNLOCK();
      if (lVar47 == 0) {
        (**(code **)(*(long *)pbVar49 + 0x10))(pbVar49);
        func_0x0412c2d0(pbVar49);
      }
    }
    if (pbStack_b8 != (byte *)0x0) {
      func_0x0412c2d0();
    }
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    uVar46 = 0;
    lVar47 = 0;
  }
  else {
    lVar47 = FUN_0412c300();
    uVar46 = 0;
    if (lVar47 != 0) {
      uVar46 = *(undefined8 *)(param_1 + 0x138);
    }
  }
  *(undefined8 *)(pbVar44 + 0x398) = uVar46;
  plVar52 = *(long **)(pbVar44 + 0x3a0);
  *(long *)(pbVar44 + 0x3a0) = lVar47;
  if (plVar52 != (long *)0x0) {
    LOCK();
    plVar1 = plVar52 + 1;
    lVar47 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar47 == 0) {
      (**(code **)(*plVar52 + 0x10))(plVar52);
      func_0x0412c2d0(plVar52);
    }
  }
  bVar59 = (pbVar44[0xd0] & 1) != 0;
  pbVar49 = pbVar44 + 0xd1;
  if (bVar59) {
    pbVar49 = *(byte **)(pbVar44 + 0xe0);
  }
  pbVar48 = (byte *)(ulong)(pbVar44[0xd0] >> 1);
  if (bVar59) {
    pbVar48 = *(byte **)(pbVar44 + 0xd8);
  }
  if ((byte *)0xfffffffffffffff7 < pbVar48) {
    func_0x04882e30();
    goto LAB_05cd9474;
  }
  pbVar56 = (byte *)((long)&uStack_c0 + 1);
  if (pbVar48 < (byte *)0x17) {
    uStack_c0 = (byte *)CONCAT71(uStack_c0._1_7_,(char)pbVar48 * '\x02');
    if (pbVar48 != (byte *)0x0) goto LAB_05cd8f33;
  }
  else {
    uVar51 = 0x1a;
    if (((ulong)pbVar48 | 7) != 0x17) {
      uVar51 = ((ulong)pbVar48 | 7) + 1;
    }
    pbVar56 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar51);
    if (pbVar56 == (byte *)0x0) {
      func_0x0eec74c0(uVar51,0);
    }
    uStack_c0 = (byte *)(uVar51 | 1);
    pbStack_b8 = pbVar48;
    pbStack_b0 = pbVar56;
LAB_05cd8f33:
    func_0x0eee2f00(pbVar56,pbVar49,pbVar48);
  }
  pbVar55 = (byte *)((long)&uStack_c0 + 1);
  pbVar56[(long)pbVar48] = 0;
  pbVar56 = (byte *)(ulong)((byte)uStack_c0 >> 1);
  pbVar48 = pbStack_b8;
  pbVar49 = pbStack_b0;
  if (((ulong)uStack_c0 & 1) == 0) {
    pbVar48 = pbVar56;
    pbVar49 = pbVar55;
  }
  if (pbVar48 != (byte *)0x0) {
    pbVar56 = pbVar49;
    if (pbVar48 < (byte *)0x8) {
LAB_05cd907c:
      do {
        bVar3 = *pbVar56;
        bVar53 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar53 = bVar3;
        }
        *pbVar56 = bVar53;
        pbVar56 = pbVar56 + 1;
      } while (pbVar56 != pbVar49 + (long)pbVar48);
    }
    else if (pbVar48 < (byte *)0x20) {
      pbVar50 = (byte *)0x0;
LAB_05cd9015:
      pbVar57 = (byte *)((ulong)pbVar48 & 0xfffffffffffffff8);
      pbVar56 = pbVar49 + (long)pbVar57;
      do {
        uVar46 = *(undefined8 *)(pbVar49 + (long)pbVar50);
        bVar60 = (char)uVar46 + DAT_014e9110;
        cVar62 = (char)((ulong)uVar46 >> 8);
        bVar61 = cVar62 + DAT_014e9110._1_1_;
        cVar64 = (char)((ulong)uVar46 >> 0x10);
        bVar63 = cVar64 + DAT_014e9110._2_1_;
        cVar66 = (char)((ulong)uVar46 >> 0x18);
        bVar65 = cVar66 + DAT_014e9110._3_1_;
        cVar68 = (char)((ulong)uVar46 >> 0x20);
        bVar67 = cVar68 + DAT_014e9110._4_1_;
        cVar70 = (char)((ulong)uVar46 >> 0x28);
        bVar69 = cVar70 + DAT_014e9110._5_1_;
        cVar72 = (char)((ulong)uVar46 >> 0x30);
        cVar12 = (char)((ulong)uVar46 >> 0x38);
        bVar71 = cVar72 + DAT_014e9110._6_1_;
        bVar73 = cVar12 + DAT_014e9110._7_1_;
        bVar3 = DAT_014e8cb0;
        bVar53 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar49 + (long)pbVar50) =
             CONCAT17((~-((byte)((bVar73 < bVar11) * bVar11 | (bVar73 >= bVar11) * bVar73) == bVar73
                         ) & UNK_014ea367) + cVar12,
                      CONCAT16((~-((byte)((bVar71 < bVar10) * bVar10 | (bVar71 >= bVar10) * bVar71)
                                  == bVar71) & UNK_014ea366) + cVar72,
                               CONCAT15((~-((byte)((bVar69 < bVar9) * bVar9 |
                                                  (bVar69 >= bVar9) * bVar69) == bVar69) &
                                        UNK_014ea365) + cVar70,
                                        CONCAT14((~-((byte)((bVar67 < bVar8) * bVar8 |
                                                           (bVar67 >= bVar8) * bVar67) == bVar67) &
                                                 UNK_014ea364) + cVar68,
                                                 CONCAT13((~-((byte)((bVar65 < bVar7) * bVar7 |
                                                                    (bVar65 >= bVar7) * bVar65) ==
                                                             bVar65) & UNK_014ea363) + cVar66,
                                                          CONCAT12((~-((byte)((bVar63 < bVar6) *
                                                                              bVar6 | (bVar63 >=
                                                                                      bVar6) * 
                                                  bVar63) == bVar63) & UNK_014ea362) + cVar64,
                                                  CONCAT11((~-((byte)((bVar61 < bVar53) * bVar53 |
                                                                     (bVar61 >= bVar53) * bVar61) ==
                                                              bVar61) & UNK_014ea361) + cVar62,
                                                           (~-((byte)((bVar60 < bVar3) * bVar3 |
                                                                     (bVar60 >= bVar3) * bVar60) ==
                                                              bVar60) & DAT_014ea360) + (char)uVar46
                                                          )))))));
        pbVar50 = pbVar50 + 8;
      } while (pbVar57 != pbVar50);
      if (pbVar48 != pbVar57) goto LAB_05cd907c;
    }
    else {
      pbVar50 = (byte *)((ulong)pbVar48 & 0xffffffffffffffe0);
      pbVar56 = (byte *)0x0;
      do {
        pbVar57 = pbVar49 + (long)pbVar56;
        bVar13 = pbVar57[1];
        bVar14 = pbVar57[2];
        bVar15 = pbVar57[3];
        bVar16 = pbVar57[4];
        bVar17 = pbVar57[5];
        bVar18 = pbVar57[6];
        bVar19 = pbVar57[7];
        bVar20 = pbVar57[8];
        bVar21 = pbVar57[9];
        bVar22 = pbVar57[10];
        bVar23 = pbVar57[0xb];
        bVar24 = pbVar57[0xc];
        bVar25 = pbVar57[0xd];
        bVar26 = pbVar57[0xe];
        bVar27 = pbVar57[0xf];
        pbVar2 = pbVar49 + 0x10 + (long)pbVar56;
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
        bVar74 = *pbVar57 + DAT_014e86b0;
        bVar75 = bVar13 + DAT_014e86b0._1_1_;
        bVar76 = bVar14 + DAT_014e86b0._2_1_;
        bVar77 = bVar15 + DAT_014e86b0._3_1_;
        bVar78 = bVar16 + DAT_014e86b0._4_1_;
        bVar79 = bVar17 + DAT_014e86b0._5_1_;
        bVar80 = bVar18 + DAT_014e86b0._6_1_;
        bVar81 = bVar19 + DAT_014e86b0._7_1_;
        bVar82 = bVar20 + DAT_014e86b0._8_1_;
        bVar83 = bVar21 + DAT_014e86b0._9_1_;
        bVar84 = bVar22 + DAT_014e86b0._10_1_;
        bVar85 = bVar23 + DAT_014e86b0._11_1_;
        bVar86 = bVar24 + DAT_014e86b0._12_1_;
        bVar87 = bVar25 + DAT_014e86b0._13_1_;
        bVar88 = bVar26 + DAT_014e86b0._14_1_;
        bVar89 = bVar27 + DAT_014e86b0._15_1_;
        bVar90 = bVar28 + DAT_014e86b0;
        bVar91 = bVar29 + DAT_014e86b0._1_1_;
        bVar92 = bVar30 + DAT_014e86b0._2_1_;
        bVar93 = bVar31 + DAT_014e86b0._3_1_;
        bVar94 = bVar32 + DAT_014e86b0._4_1_;
        bVar95 = bVar33 + DAT_014e86b0._5_1_;
        bVar96 = bVar34 + DAT_014e86b0._6_1_;
        bVar97 = bVar35 + DAT_014e86b0._7_1_;
        bVar98 = bVar36 + DAT_014e86b0._8_1_;
        bVar99 = bVar37 + DAT_014e86b0._9_1_;
        bVar100 = bVar38 + DAT_014e86b0._10_1_;
        bVar101 = bVar39 + DAT_014e86b0._11_1_;
        bVar102 = bVar40 + DAT_014e86b0._12_1_;
        bVar103 = bVar41 + DAT_014e86b0._13_1_;
        bVar104 = bVar42 + DAT_014e86b0._14_1_;
        bVar105 = bVar43 + DAT_014e86b0._15_1_;
        bVar3 = DAT_014e4170;
        bVar53 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar60 = DAT_014e4170._8_1_;
        bVar61 = DAT_014e4170._9_1_;
        bVar63 = DAT_014e4170._10_1_;
        bVar65 = DAT_014e4170._11_1_;
        bVar67 = DAT_014e4170._12_1_;
        bVar69 = DAT_014e4170._13_1_;
        bVar71 = DAT_014e4170._14_1_;
        bVar73 = DAT_014e4170._15_1_;
        pbVar2 = pbVar49 + (long)pbVar56;
        *pbVar2 = (-((byte)((bVar3 < bVar74) * bVar3 | (bVar3 >= bVar74) * bVar74) == bVar74) &
                  DAT_014ead50) + *pbVar57;
        pbVar2[1] = (-((byte)((bVar53 < bVar75) * bVar53 | (bVar53 >= bVar75) * bVar75) == bVar75) &
                    UNK_014ead51) + bVar13;
        pbVar2[2] = (-((byte)((bVar6 < bVar76) * bVar6 | (bVar6 >= bVar76) * bVar76) == bVar76) &
                    UNK_014ead52) + bVar14;
        pbVar2[3] = (-((byte)((bVar7 < bVar77) * bVar7 | (bVar7 >= bVar77) * bVar77) == bVar77) &
                    UNK_014ead53) + bVar15;
        pbVar2[4] = (-((byte)((bVar8 < bVar78) * bVar8 | (bVar8 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead54) + bVar16;
        pbVar2[5] = (-((byte)((bVar9 < bVar79) * bVar9 | (bVar9 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead55) + bVar17;
        pbVar2[6] = (-((byte)((bVar10 < bVar80) * bVar10 | (bVar10 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead56) + bVar18;
        pbVar2[7] = (-((byte)((bVar11 < bVar81) * bVar11 | (bVar11 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead57) + bVar19;
        pbVar2[8] = (-((byte)((bVar60 < bVar82) * bVar60 | (bVar60 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead58) + bVar20;
        pbVar2[9] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead59) + bVar21;
        pbVar2[10] = (-((byte)((bVar63 < bVar84) * bVar63 | (bVar63 >= bVar84) * bVar84) == bVar84)
                     & UNK_014ead5a) + bVar22;
        pbVar2[0xb] = (-((byte)((bVar65 < bVar85) * bVar65 | (bVar65 >= bVar85) * bVar85) == bVar85)
                      & UNK_014ead5b) + bVar23;
        pbVar2[0xc] = (-((byte)((bVar67 < bVar86) * bVar67 | (bVar67 >= bVar86) * bVar86) == bVar86)
                      & UNK_014ead5c) + bVar24;
        pbVar2[0xd] = (-((byte)((bVar69 < bVar87) * bVar69 | (bVar69 >= bVar87) * bVar87) == bVar87)
                      & UNK_014ead5d) + bVar25;
        pbVar2[0xe] = (-((byte)((bVar71 < bVar88) * bVar71 | (bVar71 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5e) + bVar26;
        pbVar2[0xf] = (-((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5f) + bVar27;
        pbVar57 = pbVar49 + 0x10 + (long)pbVar56;
        *pbVar57 = (-((byte)((bVar3 < bVar90) * bVar3 | (bVar3 >= bVar90) * bVar90) == bVar90) &
                   DAT_014ead50) + bVar28;
        pbVar57[1] = (-((byte)((bVar53 < bVar91) * bVar53 | (bVar53 >= bVar91) * bVar91) == bVar91)
                     & UNK_014ead51) + bVar29;
        pbVar57[2] = (-((byte)((bVar6 < bVar92) * bVar6 | (bVar6 >= bVar92) * bVar92) == bVar92) &
                     UNK_014ead52) + bVar30;
        pbVar57[3] = (-((byte)((bVar7 < bVar93) * bVar7 | (bVar7 >= bVar93) * bVar93) == bVar93) &
                     UNK_014ead53) + bVar31;
        pbVar57[4] = (-((byte)((bVar8 < bVar94) * bVar8 | (bVar8 >= bVar94) * bVar94) == bVar94) &
                     UNK_014ead54) + bVar32;
        pbVar57[5] = (-((byte)((bVar9 < bVar95) * bVar9 | (bVar9 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead55) + bVar33;
        pbVar57[6] = (-((byte)((bVar10 < bVar96) * bVar10 | (bVar10 >= bVar96) * bVar96) == bVar96)
                     & UNK_014ead56) + bVar34;
        pbVar57[7] = (-((byte)((bVar11 < bVar97) * bVar11 | (bVar11 >= bVar97) * bVar97) == bVar97)
                     & UNK_014ead57) + bVar35;
        pbVar57[8] = (-((byte)((bVar60 < bVar98) * bVar60 | (bVar60 >= bVar98) * bVar98) == bVar98)
                     & UNK_014ead58) + bVar36;
        pbVar57[9] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) == bVar99)
                     & UNK_014ead59) + bVar37;
        pbVar57[10] = (-((byte)((bVar63 < bVar100) * bVar63 | (bVar63 >= bVar100) * bVar100) ==
                        bVar100) & UNK_014ead5a) + bVar38;
        pbVar57[0xb] = (-((byte)((bVar65 < bVar101) * bVar65 | (bVar65 >= bVar101) * bVar101) ==
                         bVar101) & UNK_014ead5b) + bVar39;
        pbVar57[0xc] = (-((byte)((bVar67 < bVar102) * bVar67 | (bVar67 >= bVar102) * bVar102) ==
                         bVar102) & UNK_014ead5c) + bVar40;
        pbVar57[0xd] = (-((byte)((bVar69 < bVar103) * bVar69 | (bVar69 >= bVar103) * bVar103) ==
                         bVar103) & UNK_014ead5d) + bVar41;
        pbVar57[0xe] = (-((byte)((bVar71 < bVar104) * bVar71 | (bVar71 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5e) + bVar42;
        pbVar57[0xf] = (-((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5f) + bVar43;
        pbVar56 = pbVar56 + 0x20;
      } while (pbVar50 != pbVar56);
      if (pbVar48 != pbVar50) {
        if (((ulong)pbVar48 & 0x18) == 0) {
          pbVar56 = pbVar50 + (long)pbVar49;
          goto LAB_05cd907c;
        }
        goto LAB_05cd9015;
      }
    }
    pbVar56 = (byte *)(ulong)((byte)uStack_c0 >> 1);
  }
  if (((ulong)uStack_c0 & 1) != 0) {
    pbVar56 = pbStack_b8;
    pbVar55 = pbStack_b0;
  }
  pbVar49 = pbVar55 + (long)pbVar56;
  pbVar48 = pbVar56;
  pbVar50 = pbVar55;
  while (((pbVar57 = pbVar49, 0 < (long)pbVar48 &&
          (pbVar50 = (byte *)func_0x0eee2ef0(pbVar50,0x3a,pbVar48), pbVar50 != (byte *)0x0)) &&
         (pbVar57 = pbVar50, *pbVar50 != 0x3a))) {
    pbVar50 = pbVar50 + 1;
    pbVar48 = pbVar49 + -(long)pbVar50;
  }
  pbVar48 = pbVar57 + -(long)pbVar55;
  if (pbVar56 < pbVar57 + -(long)pbVar55) {
    pbVar48 = pbVar56;
  }
  if (pbVar57 == pbVar49) {
    pbVar48 = pbVar56;
  }
  if ((byte *)0xfffffffffffffff7 < pbVar48) {
LAB_05cd9474:
    plVar52 = (long *)func_0x04882e30();
    func_0x04894d10(&uStack_a8);
    uVar46 = func_0x04882e20(plVar52);
    if (((ulong)uStack_c0 & 1) != 0) {
      func_0x0412a280(pbStack_b0,(ulong)uStack_c0 & 0xfffffffffffffffe);
    }
    if (plVar52 != (long *)0x0) {
      (**(code **)(*plVar52 + 8))(plVar52);
    }
    func_0x0cc46730(auStack_40);
    if (((ulong)plStack_68 & 1) != 0) {
      func_0x0412a280(pbStack_58,(ulong)plStack_68 & 0xfffffffffffffffe);
    }
    _Unwind_Resume(uVar46);
    pcVar5 = (code *)swi(3);
    pbVar44 = (byte *)(*pcVar5)();
    return pbVar44;
  }
  if (pbVar48 < (byte *)0x17) {
    uStack_a8 = (byte *)CONCAT71(uStack_a8._1_7_,(char)pbVar48 * '\x02');
    pbVar49 = (byte *)((long)&uStack_a8 + 1);
    if (pbVar48 != (byte *)0x0) goto LAB_05cd9184;
  }
  else {
    uVar51 = 0x1a;
    if (((ulong)pbVar48 | 7) != 0x17) {
      uVar51 = ((ulong)pbVar48 | 7) + 1;
    }
    pbVar49 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar51);
    if (pbVar49 == (byte *)0x0) {
      func_0x0eec74c0(uVar51,0);
    }
    uStack_a8 = (byte *)(uVar51 | 1);
    uStack_a0 = pbVar48;
    pbStack_98 = pbVar49;
LAB_05cd9184:
    func_0x0eee2ee0(pbVar49,pbVar55,pbVar48);
  }
  pbVar49[(long)pbVar48] = 0;
  func_0x05cf8990(param_1 + 0xe0,&uStack_a8,&uStack_a8);
  if (((ulong)uStack_a8 & 1) != 0) {
    func_0x0412a280(pbStack_98,(ulong)uStack_a8 & 0xfffffffffffffffe);
  }
  uStack_a8 = (byte *)0x0;
  if (((ulong)uStack_c0 & 1) == 0) {
    pbStack_90 = pbStack_b0;
    uStack_a0 = uStack_c0;
    pbStack_98 = pbStack_b8;
  }
  else {
    func_0x0412e5e0(&uStack_a0,pbStack_b0,pbStack_b8);
  }
  plStack_88 = (long *)0x0;
  if (((ulong)uStack_a0 & 1) == 0) {
    if ((byte)uStack_a0 >> 1 != 0) goto LAB_05cd9233;
  }
  else if (pbStack_98 != (byte *)0x0) {
LAB_05cd9233:
    pbVar49 = pbStack_90;
    if (((ulong)uStack_a0 & 1) == 0) {
      pbVar49 = (byte *)((long)&uStack_a0 + 1);
    }
    if ((pbVar49 != (byte *)0x0) && (*pbVar49 != 0)) {
      puVar58 = (undefined8 *)0xcbf29ce484222325;
      uVar51 = func_0x0eee2e90(pbVar49);
      if (uVar51 != 0) {
        uVar45 = (ulong)((uint)uVar51 & 7);
        if (7 < uVar51) {
          uVar51 = uVar51 & 0xfffffffffffffff8;
          do {
            puVar58 = (undefined8 *)
                      (((((((((long)puVar58 * 0x100000001b3 ^ (ulong)*pbVar49) * 0x100000001b3 ^
                            (ulong)pbVar49[1]) * 0x100000001b3 ^ (ulong)pbVar49[2]) * 0x100000001b3
                          ^ (ulong)pbVar49[3]) * 0x100000001b3 ^ (ulong)pbVar49[4]) * 0x100000001b3
                        ^ (ulong)pbVar49[5]) * 0x100000001b3 ^ (ulong)pbVar49[6]) * 0x100000001b3 ^
                      (ulong)pbVar49[7]);
            pbVar49 = pbVar49 + 8;
            uVar51 = uVar51 - 8;
          } while (uVar51 != 0);
        }
        if (uVar45 != 0) {
          uVar51 = 0;
          do {
            puVar58 = (undefined8 *)((long)puVar58 * 0x100000001b3 ^ (ulong)pbVar49[uVar51]);
            uVar51 = uVar51 + 1;
          } while (uVar45 != uVar51);
        }
      }
      goto LAB_05cd933a;
    }
  }
  puVar58 = (undefined8 *)0x0;
LAB_05cd933a:
  uStack_a8 = (byte *)puVar58;
  puStack_48 = &uStack_a8;
  lVar47 = func_0x05cf8b10(param_1,&uStack_a8,&UNK_01563a4f,&puStack_48,&uStack_69);
  plVar52 = *(long **)(lVar47 + 0x48);
  *(byte **)(lVar47 + 0x48) = pbVar44;
  if (plVar52 != (long *)0x0) {
    (**(code **)(*plVar52 + 8))();
  }
  puStack_48 = (undefined8 *)uStack_a8;
  lVar47 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_48);
  if ((*(byte *)(lVar47 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar47 + 0x28),*(ulong *)(lVar47 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar47 + 0x28) = pbStack_90;
  *(byte **)(lVar47 + 0x18) = uStack_a0;
  *(byte **)(lVar47 + 0x20) = pbStack_98;
  uStack_a0 = (byte *)((ulong)uStack_a0 & 0xffffffffffff0000);
  *(byte **)(lVar47 + 0x10) = uStack_a8;
  *(undefined8 *)(lVar47 + 0x30) = 0;
  if (((ulong)uStack_c0 & 1) != 0) {
    func_0x0412a280(pbStack_b0,(ulong)uStack_c0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(auStack_40);
  if (((ulong)plStack_68 & 1) != 0) {
    func_0x0412a280(pbStack_58,(ulong)plStack_68 & 0xfffffffffffffffe);
  }
  return pbVar44;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
