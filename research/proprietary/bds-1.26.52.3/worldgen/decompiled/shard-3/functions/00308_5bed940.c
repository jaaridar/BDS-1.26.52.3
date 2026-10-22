/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ced940 (ELF vaddr 0x5bed940)
 * Label: caller-of-seed
 * Body:  [[05ced940, 05cee77c] [05cee780, 05cee86c] [05cee9fd, 05ceea20] [05ceea24, 05ceea2e] [05ceea66, 05ceea95]]
 * Ghidra: FUN_05ced940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05ced940(long param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  long *plVar36;
  ulong uVar37;
  undefined8 uVar38;
  long lVar39;
  long *plVar40;
  long *plVar41;
  long lVar42;
  char *pcVar43;
  char *pcVar44;
  ulong uVar45;
  undefined4 *puVar46;
  ulong uVar47;
  char *pcVar48;
  long *plVar49;
  char *pcVar50;
  byte *pbVar51;
  undefined1 *puVar52;
  bool bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar57;
  byte bVar59;
  byte bVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
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
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  long *plStack_128;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_110;
  long *plStack_108;
  char *pcStack_100;
  undefined4 *puStack_f8;
  undefined4 *puStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined4 uStack_b0;
  uint uStack_ac;
  long *plStack_a8;
  long *plStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined2 uStack_38;
  char cVar56;
  char cVar58;
  char cVar60;
  char cVar62;
  char cVar64;
  char cVar66;
  
  uVar38 = *(undefined8 *)
            (_DAT_0f71e690 + 8 + (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    auStack_d8._0_8_ = *(undefined8 *)(param_3 + 0x18);
    plStack_e8 = *(long **)(param_3 + 8);
    uStack_e0 = *(undefined8 *)(param_3 + 0x10);
  }
  else {
    func_0x0412e5e0(&plStack_e8,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10));
  }
  uStack_148 = *(long **)(param_1 + 0x148);
  uStack_140 = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar36 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar36 = *plVar36 + 1;
    UNLOCK();
  }
  func_0x0cc46680(&plStack_a8,&uStack_148);
  plVar36 = uStack_140;
  if (uStack_140 != (long *)0x0) {
    LOCK();
    plVar41 = uStack_140 + 1;
    lVar39 = *plVar41;
    *plVar41 = *plVar41 + -1;
    UNLOCK();
    if (lVar39 == 0) {
      (**(code **)(*uStack_140 + 0x10))(uStack_140);
      func_0x0412c2d0(plVar36);
    }
  }
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3c0);
  if (plVar36 == (long *)0x0) {
    func_0x0eec74c0(0x3c0,0);
  }
  func_0x0c6c7010(plVar36,&plStack_e8,param_4,uVar38);
  *(char *)(plVar36 + 0x75) = '\x01';
  *(char *)((long)plVar36 + 0x136) = '\0';
  *(byte *)((long)plVar36 + 0x134) = *(byte *)((long)plVar36 + 0x134) & 0xe9;
  plVar36[0x21] = 0;
  *(char *)((long)plVar36 + 0x132) = '\b';
  pcVar50 = (char *)((long)plVar36 + 300);
  pcVar50[0] = -0x33;
  pcVar50[1] = -0x34;
  pcVar50[2] = 'L';
  pcVar50[3] = '?';
  *plVar36 = (long)&UNK_0f005b88;
  uStack_148 = (long *)0x0;
  if (((ulong)plStack_e8 & 1) == 0) {
    uStack_130 = auStack_d8[0];
    uStack_12f = auStack_d8._1_7_;
    uStack_140 = plStack_e8;
    bStack_138 = (byte)uStack_e0;
    uStack_137 = (undefined7)((ulong)uStack_e0 >> 8);
  }
  else {
    func_0x0412e5e0(&uStack_140,auStack_d8._0_8_,uStack_e0);
  }
  plStack_128 = (long *)0x0;
  if (((ulong)uStack_140 & 1) == 0) {
    if ((byte)uStack_140 >> 1 != 0) goto LAB_05cedae0;
LAB_05cedbd6:
    uVar45 = 0;
  }
  else {
    if (CONCAT71(uStack_137,bStack_138) == 0) goto LAB_05cedbd6;
LAB_05cedae0:
    if (((ulong)uStack_140 & 1) == 0) {
      pbVar51 = (byte *)((long)&uStack_140 + 1);
      if (pbVar51 != (byte *)0x0) goto LAB_05cedb01;
      goto LAB_05cedbd6;
    }
    pbVar51 = (byte *)CONCAT71(uStack_12f,uStack_130);
    if (pbVar51 == (byte *)0x0) goto LAB_05cedbd6;
LAB_05cedb01:
    if (*pbVar51 == 0) goto LAB_05cedbd6;
    uVar45 = 0xcbf29ce484222325;
    uVar37 = func_0x0eee2e90(pbVar51);
    if (uVar37 != 0) {
      uVar47 = (ulong)((uint)uVar37 & 7);
      if (7 < uVar37) {
        uVar37 = uVar37 & 0xfffffffffffffff8;
        do {
          uVar45 = (((((((uVar45 * 0x100000001b3 ^ (ulong)*pbVar51) * 0x100000001b3 ^
                        (ulong)pbVar51[1]) * 0x100000001b3 ^ (ulong)pbVar51[2]) * 0x100000001b3 ^
                      (ulong)pbVar51[3]) * 0x100000001b3 ^ (ulong)pbVar51[4]) * 0x100000001b3 ^
                    (ulong)pbVar51[5]) * 0x100000001b3 ^ (ulong)pbVar51[6]) * 0x100000001b3 ^
                   (ulong)pbVar51[7];
          pbVar51 = pbVar51 + 8;
          uVar37 = uVar37 - 8;
        } while (uVar37 != 0);
      }
      if (uVar47 != 0) {
        uVar37 = 0;
        do {
          uVar45 = uVar45 * 0x100000001b3 ^ (ulong)pbVar51[uVar37];
          uVar37 = uVar37 + 1;
        } while (uVar47 != uVar37);
      }
    }
  }
  uStack_148 = (long *)uVar45;
  uStack_7c = param_2;
  func_0x0c690a60(plVar36 + 0x76,&UNK_0f005aa8,&uStack_148);
  if (((ulong)uStack_140 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_12f,uStack_130),(ulong)uStack_140 & 0xfffffffffffffffe);
  }
  plVar41 = plVar36 + 0x6d;
  func_0x05cf9c30(plVar41);
  uVar38 = func_0x05cf9d90(plVar41);
  uVar2 = *(undefined2 *)((long)plVar36 + 0x14e);
  uStack_148 = (long *)&UNK_0f005ff0;
  bStack_138 = 0x90;
  uStack_137 = 0x5cf9a;
  uStack_130 = 0;
  uStack_12f = 0;
  uStack_140 = plVar36;
  plStack_128 = &uStack_148;
  func_0x05cfa830(&uStack_110,uVar38,&uStack_148);
  if (plStack_128 == &uStack_148) {
    lVar39 = 0x20;
LAB_05cedc8e:
    (**(code **)(*plStack_128 + lVar39))();
  }
  else {
    lVar39 = 0x28;
    if (plStack_128 != (long *)0x0) goto LAB_05cedc8e;
  }
  func_0x0c6ed620(uVar38,uVar2,&uStack_110,1);
  if (plStack_108 != (long *)0x0) {
    plVar40 = (long *)func_0x0412c300();
    uStack_140 = plVar40;
    if (plVar40 != (long *)0x0) {
      uStack_148 = uStack_110;
      if (uStack_110 != (long *)0x0) {
        (**(code **)(*(long *)uStack_110[5] + 0x10))();
      }
      LOCK();
      plVar49 = plVar40 + 1;
      lVar39 = *plVar49;
      *plVar49 = *plVar49 + -1;
      UNLOCK();
      if (lVar39 == 0) {
        (**(code **)(*plVar40 + 0x10))(plVar40);
        func_0x0412c2d0(plVar40);
      }
    }
    if (plStack_108 != (long *)0x0) {
      func_0x0412c2d0();
    }
  }
  func_0x05cfab30(plVar41);
  uVar38 = func_0x05cfac90(plVar41);
  uVar2 = *(undefined2 *)((long)plVar36 + 0x14e);
  uStack_148 = (long *)&UNK_0f006070;
  bStack_138 = 0xd0;
  uStack_137 = 0x5cf9a;
  uStack_130 = 0;
  uStack_12f = 0;
  uStack_140 = plVar36;
  plStack_128 = &uStack_148;
  func_0x05cfb550(&uStack_110,uVar38,&uStack_148);
  if (plStack_128 == &uStack_148) {
    lVar39 = 0x20;
LAB_05cedd7f:
    (**(code **)(*plStack_128 + lVar39))();
  }
  else {
    lVar39 = 0x28;
    if (plStack_128 != (long *)0x0) goto LAB_05cedd7f;
  }
  func_0x0c6ed620(uVar38,uVar2,&uStack_110);
  if (plStack_108 != (long *)0x0) {
    plVar41 = (long *)func_0x0412c300();
    uStack_140 = plVar41;
    if (plVar41 != (long *)0x0) {
      uStack_148 = uStack_110;
      if (uStack_110 != (long *)0x0) {
        (**(code **)(*(long *)uStack_110[5] + 0x10))();
      }
      LOCK();
      plVar40 = plVar41 + 1;
      lVar39 = *plVar40;
      *plVar40 = *plVar40 + -1;
      UNLOCK();
      if (lVar39 == 0) {
        (**(code **)(*plVar41 + 0x10))(plVar41);
        func_0x0412c2d0(plVar41);
      }
    }
    if (plStack_108 != (long *)0x0) {
      func_0x0412c2d0();
    }
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar39 = 0;
    lVar42 = 0;
  }
  else {
    lVar42 = func_0x0412c300();
    lVar39 = 0;
    if (lVar42 != 0) {
      lVar39 = *(long *)(param_1 + 0x138);
    }
  }
  plVar36[0x73] = lVar39;
  plVar41 = (long *)plVar36[0x74];
  plVar36[0x74] = lVar42;
  if (plVar41 != (long *)0x0) {
    LOCK();
    plVar40 = plVar41 + 1;
    lVar39 = *plVar40;
    *plVar40 = *plVar40 + -1;
    UNLOCK();
    if (lVar39 == 0) {
      (**(code **)(*plVar41 + 0x10))(plVar41);
      func_0x0412c2d0(plVar41);
    }
  }
  bVar53 = (*(byte *)(plVar36 + 0x1a) & 1) != 0;
  pcVar50 = (char *)((long)plVar36 + 0xd1);
  if (bVar53) {
    pcVar50 = (char *)plVar36[0x1c];
  }
  plVar41 = (long *)(ulong)(*(byte *)(plVar36 + 0x1a) >> 1);
  if (bVar53) {
    plVar41 = (long *)plVar36[0x1b];
  }
  if ((long *)0xfffffffffffffff7 < plVar41) {
    func_0x04882e30();
    goto LAB_05cee84e;
  }
  pcVar43 = (char *)((long)&uStack_110 + 1);
  if (plVar41 < (long *)0x17) {
    uStack_110 = (long *)CONCAT71(uStack_110._1_7_,(char)plVar41 * '\x02');
    if (plVar41 != (long *)0x0) goto LAB_05cedf00;
  }
  else {
    uVar45 = 0x1a;
    if (((ulong)plVar41 | 7) != 0x17) {
      uVar45 = ((ulong)plVar41 | 7) + 1;
    }
    pcVar43 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45);
    if (pcVar43 == (char *)0x0) {
      func_0x0eec74c0(uVar45,0);
    }
    uStack_110 = (long *)(uVar45 | 1);
    plStack_108 = plVar41;
    pcStack_100 = pcVar43;
LAB_05cedf00:
    func_0x0eee2f00(pcVar43,pcVar50,plVar41);
  }
  pcVar48 = (char *)((long)&uStack_110 + 1);
  pcVar43[(long)plVar41] = '\0';
  plVar40 = (long *)(ulong)((byte)uStack_110 >> 1);
  plVar41 = plStack_108;
  pcVar50 = pcStack_100;
  if (((ulong)uStack_110 & 1) == 0) {
    plVar41 = plVar40;
    pcVar50 = pcVar48;
  }
  if (plVar41 != (long *)0x0) {
    pcVar43 = pcVar50;
    if (plVar41 < (long *)0x8) {
LAB_05cee04c:
      do {
        cVar1 = *pcVar43;
        cVar56 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar56 = cVar1;
        }
        *pcVar43 = cVar56;
        pcVar43 = pcVar43 + 1;
      } while (pcVar43 != pcVar50 + (long)plVar41);
    }
    else if (plVar41 < (long *)0x20) {
      plVar40 = (long *)0x0;
LAB_05cedfe5:
      plVar49 = (long *)((ulong)plVar41 & 0xfffffffffffffff8);
      pcVar43 = pcVar50 + (long)plVar49;
      do {
        uVar38 = *(undefined8 *)(pcVar50 + (long)plVar40);
        bVar54 = (char)uVar38 + DAT_014e9110;
        cVar56 = (char)((ulong)uVar38 >> 8);
        bVar55 = cVar56 + DAT_014e9110._1_1_;
        cVar58 = (char)((ulong)uVar38 >> 0x10);
        bVar57 = cVar58 + DAT_014e9110._2_1_;
        cVar60 = (char)((ulong)uVar38 >> 0x18);
        bVar59 = cVar60 + DAT_014e9110._3_1_;
        cVar62 = (char)((ulong)uVar38 >> 0x20);
        bVar61 = cVar62 + DAT_014e9110._4_1_;
        cVar64 = (char)((ulong)uVar38 >> 0x28);
        bVar63 = cVar64 + DAT_014e9110._5_1_;
        cVar66 = (char)((ulong)uVar38 >> 0x30);
        cVar1 = (char)((ulong)uVar38 >> 0x38);
        bVar65 = cVar66 + DAT_014e9110._6_1_;
        bVar67 = cVar1 + DAT_014e9110._7_1_;
        bVar4 = DAT_014e8cb0;
        bVar5 = DAT_014e8cb0._1_1_;
        bVar6 = DAT_014e8cb0._2_1_;
        bVar7 = DAT_014e8cb0._3_1_;
        bVar8 = DAT_014e8cb0._4_1_;
        bVar9 = DAT_014e8cb0._5_1_;
        bVar10 = DAT_014e8cb0._6_1_;
        bVar11 = DAT_014e8cb0._7_1_;
        *(ulong *)(pcVar50 + (long)plVar40) =
             CONCAT17((~-((byte)((bVar67 < bVar11) * bVar11 | (bVar67 >= bVar11) * bVar67) == bVar67
                         ) & UNK_014ea367) + cVar1,
                      CONCAT16((~-((byte)((bVar65 < bVar10) * bVar10 | (bVar65 >= bVar10) * bVar65)
                                  == bVar65) & UNK_014ea366) + cVar66,
                               CONCAT15((~-((byte)((bVar63 < bVar9) * bVar9 |
                                                  (bVar63 >= bVar9) * bVar63) == bVar63) &
                                        UNK_014ea365) + cVar64,
                                        CONCAT14((~-((byte)((bVar61 < bVar8) * bVar8 |
                                                           (bVar61 >= bVar8) * bVar61) == bVar61) &
                                                 UNK_014ea364) + cVar62,
                                                 CONCAT13((~-((byte)((bVar59 < bVar7) * bVar7 |
                                                                    (bVar59 >= bVar7) * bVar59) ==
                                                             bVar59) & UNK_014ea363) + cVar60,
                                                          CONCAT12((~-((byte)((bVar57 < bVar6) *
                                                                              bVar6 | (bVar57 >=
                                                                                      bVar6) * 
                                                  bVar57) == bVar57) & UNK_014ea362) + cVar58,
                                                  CONCAT11((~-((byte)((bVar55 < bVar5) * bVar5 |
                                                                     (bVar55 >= bVar5) * bVar55) ==
                                                              bVar55) & UNK_014ea361) + cVar56,
                                                           (~-((byte)((bVar54 < bVar4) * bVar4 |
                                                                     (bVar54 >= bVar4) * bVar54) ==
                                                              bVar54) & DAT_014ea360) + (char)uVar38
                                                          )))))));
        plVar40 = plVar40 + 1;
      } while (plVar49 != plVar40);
      if (plVar41 != plVar49) goto LAB_05cee04c;
    }
    else {
      plVar40 = (long *)((ulong)plVar41 & 0xffffffffffffffe0);
      plVar49 = (long *)0x0;
      do {
        pcVar43 = pcVar50 + (long)plVar49;
        cVar1 = pcVar43[1];
        cVar56 = pcVar43[2];
        cVar58 = pcVar43[3];
        cVar60 = pcVar43[4];
        cVar62 = pcVar43[5];
        cVar64 = pcVar43[6];
        cVar66 = pcVar43[7];
        cVar12 = pcVar43[8];
        cVar13 = pcVar43[9];
        cVar14 = pcVar43[10];
        cVar15 = pcVar43[0xb];
        cVar16 = pcVar43[0xc];
        cVar17 = pcVar43[0xd];
        cVar18 = pcVar43[0xe];
        cVar19 = pcVar43[0xf];
        pcVar44 = pcVar50 + 0x10 + (long)plVar49;
        cVar20 = *pcVar44;
        cVar21 = pcVar44[1];
        cVar22 = pcVar44[2];
        cVar23 = pcVar44[3];
        cVar24 = pcVar44[4];
        cVar25 = pcVar44[5];
        cVar26 = pcVar44[6];
        cVar27 = pcVar44[7];
        cVar28 = pcVar44[8];
        cVar29 = pcVar44[9];
        cVar30 = pcVar44[10];
        cVar31 = pcVar44[0xb];
        cVar32 = pcVar44[0xc];
        cVar33 = pcVar44[0xd];
        cVar34 = pcVar44[0xe];
        cVar35 = pcVar44[0xf];
        bVar68 = *pcVar43 + DAT_014e86b0;
        bVar69 = cVar1 + DAT_014e86b0._1_1_;
        bVar70 = cVar56 + DAT_014e86b0._2_1_;
        bVar71 = cVar58 + DAT_014e86b0._3_1_;
        bVar72 = cVar60 + DAT_014e86b0._4_1_;
        bVar73 = cVar62 + DAT_014e86b0._5_1_;
        bVar74 = cVar64 + DAT_014e86b0._6_1_;
        bVar75 = cVar66 + DAT_014e86b0._7_1_;
        bVar76 = cVar12 + DAT_014e86b0._8_1_;
        bVar77 = cVar13 + DAT_014e86b0._9_1_;
        bVar78 = cVar14 + DAT_014e86b0._10_1_;
        bVar79 = cVar15 + DAT_014e86b0._11_1_;
        bVar80 = cVar16 + DAT_014e86b0._12_1_;
        bVar81 = cVar17 + DAT_014e86b0._13_1_;
        bVar82 = cVar18 + DAT_014e86b0._14_1_;
        bVar83 = cVar19 + DAT_014e86b0._15_1_;
        bVar84 = cVar20 + DAT_014e86b0;
        bVar85 = cVar21 + DAT_014e86b0._1_1_;
        bVar86 = cVar22 + DAT_014e86b0._2_1_;
        bVar87 = cVar23 + DAT_014e86b0._3_1_;
        bVar88 = cVar24 + DAT_014e86b0._4_1_;
        bVar89 = cVar25 + DAT_014e86b0._5_1_;
        bVar90 = cVar26 + DAT_014e86b0._6_1_;
        bVar91 = cVar27 + DAT_014e86b0._7_1_;
        bVar92 = cVar28 + DAT_014e86b0._8_1_;
        bVar93 = cVar29 + DAT_014e86b0._9_1_;
        bVar94 = cVar30 + DAT_014e86b0._10_1_;
        bVar95 = cVar31 + DAT_014e86b0._11_1_;
        bVar96 = cVar32 + DAT_014e86b0._12_1_;
        bVar97 = cVar33 + DAT_014e86b0._13_1_;
        bVar98 = cVar34 + DAT_014e86b0._14_1_;
        bVar99 = cVar35 + DAT_014e86b0._15_1_;
        bVar4 = DAT_014e4170;
        bVar5 = DAT_014e4170._1_1_;
        bVar6 = DAT_014e4170._2_1_;
        bVar7 = DAT_014e4170._3_1_;
        bVar8 = DAT_014e4170._4_1_;
        bVar9 = DAT_014e4170._5_1_;
        bVar10 = DAT_014e4170._6_1_;
        bVar11 = DAT_014e4170._7_1_;
        bVar54 = DAT_014e4170._8_1_;
        bVar55 = DAT_014e4170._9_1_;
        bVar57 = DAT_014e4170._10_1_;
        bVar59 = DAT_014e4170._11_1_;
        bVar61 = DAT_014e4170._12_1_;
        bVar63 = DAT_014e4170._13_1_;
        bVar65 = DAT_014e4170._14_1_;
        bVar67 = DAT_014e4170._15_1_;
        pcVar44 = pcVar50 + (long)plVar49;
        *pcVar44 = (-((byte)((bVar4 < bVar68) * bVar4 | (bVar4 >= bVar68) * bVar68) == bVar68) &
                   DAT_014ead50) + *pcVar43;
        pcVar44[1] = (-((byte)((bVar5 < bVar69) * bVar5 | (bVar5 >= bVar69) * bVar69) == bVar69) &
                     UNK_014ead51) + cVar1;
        pcVar44[2] = (-((byte)((bVar6 < bVar70) * bVar6 | (bVar6 >= bVar70) * bVar70) == bVar70) &
                     UNK_014ead52) + cVar56;
        pcVar44[3] = (-((byte)((bVar7 < bVar71) * bVar7 | (bVar7 >= bVar71) * bVar71) == bVar71) &
                     UNK_014ead53) + cVar58;
        pcVar44[4] = (-((byte)((bVar8 < bVar72) * bVar8 | (bVar8 >= bVar72) * bVar72) == bVar72) &
                     UNK_014ead54) + cVar60;
        pcVar44[5] = (-((byte)((bVar9 < bVar73) * bVar9 | (bVar9 >= bVar73) * bVar73) == bVar73) &
                     UNK_014ead55) + cVar62;
        pcVar44[6] = (-((byte)((bVar10 < bVar74) * bVar10 | (bVar10 >= bVar74) * bVar74) == bVar74)
                     & UNK_014ead56) + cVar64;
        pcVar44[7] = (-((byte)((bVar11 < bVar75) * bVar11 | (bVar11 >= bVar75) * bVar75) == bVar75)
                     & UNK_014ead57) + cVar66;
        pcVar44[8] = (-((byte)((bVar54 < bVar76) * bVar54 | (bVar54 >= bVar76) * bVar76) == bVar76)
                     & UNK_014ead58) + cVar12;
        pcVar44[9] = (-((byte)((bVar55 < bVar77) * bVar55 | (bVar55 >= bVar77) * bVar77) == bVar77)
                     & UNK_014ead59) + cVar13;
        pcVar44[10] = (-((byte)((bVar57 < bVar78) * bVar57 | (bVar57 >= bVar78) * bVar78) == bVar78)
                      & UNK_014ead5a) + cVar14;
        pcVar44[0xb] = (-((byte)((bVar59 < bVar79) * bVar59 | (bVar59 >= bVar79) * bVar79) == bVar79
                         ) & UNK_014ead5b) + cVar15;
        pcVar44[0xc] = (-((byte)((bVar61 < bVar80) * bVar61 | (bVar61 >= bVar80) * bVar80) == bVar80
                         ) & UNK_014ead5c) + cVar16;
        pcVar44[0xd] = (-((byte)((bVar63 < bVar81) * bVar63 | (bVar63 >= bVar81) * bVar81) == bVar81
                         ) & UNK_014ead5d) + cVar17;
        pcVar44[0xe] = (-((byte)((bVar65 < bVar82) * bVar65 | (bVar65 >= bVar82) * bVar82) == bVar82
                         ) & UNK_014ead5e) + cVar18;
        pcVar44[0xf] = (-((byte)((bVar67 < bVar83) * bVar67 | (bVar67 >= bVar83) * bVar83) == bVar83
                         ) & UNK_014ead5f) + cVar19;
        pcVar43 = pcVar50 + 0x10 + (long)plVar49;
        *pcVar43 = (-((byte)((bVar4 < bVar84) * bVar4 | (bVar4 >= bVar84) * bVar84) == bVar84) &
                   DAT_014ead50) + cVar20;
        pcVar43[1] = (-((byte)((bVar5 < bVar85) * bVar5 | (bVar5 >= bVar85) * bVar85) == bVar85) &
                     UNK_014ead51) + cVar21;
        pcVar43[2] = (-((byte)((bVar6 < bVar86) * bVar6 | (bVar6 >= bVar86) * bVar86) == bVar86) &
                     UNK_014ead52) + cVar22;
        pcVar43[3] = (-((byte)((bVar7 < bVar87) * bVar7 | (bVar7 >= bVar87) * bVar87) == bVar87) &
                     UNK_014ead53) + cVar23;
        pcVar43[4] = (-((byte)((bVar8 < bVar88) * bVar8 | (bVar8 >= bVar88) * bVar88) == bVar88) &
                     UNK_014ead54) + cVar24;
        pcVar43[5] = (-((byte)((bVar9 < bVar89) * bVar9 | (bVar9 >= bVar89) * bVar89) == bVar89) &
                     UNK_014ead55) + cVar25;
        pcVar43[6] = (-((byte)((bVar10 < bVar90) * bVar10 | (bVar10 >= bVar90) * bVar90) == bVar90)
                     & UNK_014ead56) + cVar26;
        pcVar43[7] = (-((byte)((bVar11 < bVar91) * bVar11 | (bVar11 >= bVar91) * bVar91) == bVar91)
                     & UNK_014ead57) + cVar27;
        pcVar43[8] = (-((byte)((bVar54 < bVar92) * bVar54 | (bVar54 >= bVar92) * bVar92) == bVar92)
                     & UNK_014ead58) + cVar28;
        pcVar43[9] = (-((byte)((bVar55 < bVar93) * bVar55 | (bVar55 >= bVar93) * bVar93) == bVar93)
                     & UNK_014ead59) + cVar29;
        pcVar43[10] = (-((byte)((bVar57 < bVar94) * bVar57 | (bVar57 >= bVar94) * bVar94) == bVar94)
                      & UNK_014ead5a) + cVar30;
        pcVar43[0xb] = (-((byte)((bVar59 < bVar95) * bVar59 | (bVar59 >= bVar95) * bVar95) == bVar95
                         ) & UNK_014ead5b) + cVar31;
        pcVar43[0xc] = (-((byte)((bVar61 < bVar96) * bVar61 | (bVar61 >= bVar96) * bVar96) == bVar96
                         ) & UNK_014ead5c) + cVar32;
        pcVar43[0xd] = (-((byte)((bVar63 < bVar97) * bVar63 | (bVar63 >= bVar97) * bVar97) == bVar97
                         ) & UNK_014ead5d) + cVar33;
        pcVar43[0xe] = (-((byte)((bVar65 < bVar98) * bVar65 | (bVar65 >= bVar98) * bVar98) == bVar98
                         ) & UNK_014ead5e) + cVar34;
        pcVar43[0xf] = (-((byte)((bVar67 < bVar99) * bVar67 | (bVar67 >= bVar99) * bVar99) == bVar99
                         ) & UNK_014ead5f) + cVar35;
        plVar49 = plVar49 + 4;
      } while (plVar40 != plVar49);
      if (plVar41 != plVar40) {
        if (((ulong)plVar41 & 0x18) == 0) {
          pcVar43 = (char *)((long)plVar40 + (long)pcVar50);
          goto LAB_05cee04c;
        }
        goto LAB_05cedfe5;
      }
    }
    plVar40 = (long *)(ulong)((byte)uStack_110 >> 1);
  }
  if (((ulong)uStack_110 & 1) != 0) {
    plVar40 = plStack_108;
    pcVar48 = pcStack_100;
  }
  pcVar50 = pcVar48 + (long)plVar40;
  plVar41 = plVar40;
  pcVar43 = pcVar48;
  while (((pcVar44 = pcVar50, 0 < (long)plVar41 &&
          (pcVar43 = (char *)func_0x0eee2ef0(pcVar43,0x3a,plVar41), pcVar43 != (char *)0x0)) &&
         (pcVar44 = pcVar43, *pcVar43 != ':'))) {
    pcVar43 = pcVar43 + 1;
    plVar41 = (long *)(pcVar50 + -(long)pcVar43);
  }
  plVar41 = (long *)(pcVar44 + -(long)pcVar48);
  if (plVar40 < pcVar44 + -(long)pcVar48) {
    plVar41 = plVar40;
  }
  if (pcVar44 == pcVar50) {
    plVar41 = plVar40;
  }
  if ((long *)0xfffffffffffffff7 < plVar41) {
LAB_05cee84e:
    plVar36 = (long *)func_0x04882e30();
    func_0x04894d10(&uStack_148);
    uVar38 = func_0x04882e20(plVar36);
    if (((ulong)uStack_110 & 1) != 0) {
      func_0x0412a280(pcStack_100,(ulong)uStack_110 & 0xfffffffffffffffe);
    }
    if (plVar36 != (long *)0x0) {
      (**(code **)(*plVar36 + 8))(plVar36);
    }
    func_0x0cc46730(&plStack_a8);
    if (((ulong)plStack_e8 & 1) != 0) {
      func_0x0412a280(auStack_d8._0_8_,(ulong)plStack_e8 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar38);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (plVar41 < (long *)0x17) {
    uStack_148 = (long *)CONCAT71(uStack_148._1_7_,(char)plVar41 * '\x02');
    lVar39 = (long)&uStack_148 + 1;
    if (plVar41 != (long *)0x0) goto LAB_05cee152;
  }
  else {
    uVar45 = 0x1a;
    if (((ulong)plVar41 | 7) != 0x17) {
      uVar45 = ((ulong)plVar41 | 7) + 1;
    }
    lVar39 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar45);
    if (lVar39 == 0) {
      func_0x0eec74c0(uVar45,0);
    }
    bStack_138 = (byte)lVar39;
    uStack_137 = (undefined7)((ulong)lVar39 >> 8);
    uStack_148 = (long *)(uVar45 | 1);
    uStack_140 = plVar41;
LAB_05cee152:
    memmove(lVar39,pcVar48,plVar41);
  }
  *(char *)(lVar39 + (long)plVar41) = '\0';
  func_0x05cf8990(param_1 + 0xe0,&uStack_148,&uStack_148);
  if (((ulong)uStack_148 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_137,bStack_138),(ulong)uStack_148 & 0xfffffffffffffffe);
  }
  uStack_148 = (long *)0x0;
  if (((ulong)uStack_110 & 1) == 0) {
    uStack_130 = SUB81(pcStack_100,0);
    uStack_12f = (undefined7)((ulong)pcStack_100 >> 8);
    uStack_140 = uStack_110;
    bStack_138 = (byte)plStack_108;
    uStack_137 = (undefined7)((ulong)plStack_108 >> 8);
  }
  else {
    func_0x0412e5e0(&uStack_140,pcStack_100,plStack_108);
  }
  plStack_128 = (long *)0x0;
  if (((ulong)uStack_140 & 1) == 0) {
    if ((byte)uStack_140 >> 1 != 0) goto LAB_05cee1fc;
  }
  else if (CONCAT71(uStack_137,bStack_138) != 0) {
LAB_05cee1fc:
    if (((ulong)uStack_140 & 1) == 0) {
      pbVar51 = (byte *)((long)&uStack_140 + 1);
    }
    else {
      pbVar51 = (byte *)CONCAT71(uStack_12f,uStack_130);
    }
    if ((pbVar51 != (byte *)0x0) && (*pbVar51 != 0)) {
      puVar52 = (undefined1 *)0xcbf29ce484222325;
      uVar45 = func_0x0eee2e90(pbVar51);
      if (uVar45 != 0) {
        uVar37 = (ulong)((uint)uVar45 & 7);
        if (7 < uVar45) {
          uVar45 = uVar45 & 0xfffffffffffffff8;
          do {
            puVar52 = (undefined1 *)
                      (((((((((long)puVar52 * 0x100000001b3 ^ (ulong)*pbVar51) * 0x100000001b3 ^
                            (ulong)pbVar51[1]) * 0x100000001b3 ^ (ulong)pbVar51[2]) * 0x100000001b3
                          ^ (ulong)pbVar51[3]) * 0x100000001b3 ^ (ulong)pbVar51[4]) * 0x100000001b3
                        ^ (ulong)pbVar51[5]) * 0x100000001b3 ^ (ulong)pbVar51[6]) * 0x100000001b3 ^
                      (ulong)pbVar51[7]);
            pbVar51 = pbVar51 + 8;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
        }
        if (uVar37 != 0) {
          uVar45 = 0;
          do {
            puVar52 = (undefined1 *)((long)puVar52 * 0x100000001b3 ^ (ulong)pbVar51[uVar45]);
            uVar45 = uVar45 + 1;
          } while (uVar37 != uVar45);
        }
      }
      goto LAB_05cee2fa;
    }
  }
  puVar52 = (undefined1 *)0x0;
LAB_05cee2fa:
  uStack_148 = (long *)puVar52;
  puStack_78 = (undefined1 *)&uStack_148;
  lVar39 = func_0x05cf8b10(param_1,&uStack_148,&UNK_01563a4f,&puStack_78,&bStack_c0);
  plVar41 = *(long **)(lVar39 + 0x48);
  *(long **)(lVar39 + 0x48) = plVar36;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 8))();
  }
  puStack_78 = (undefined1 *)uStack_148;
  lVar39 = func_0x05cf8dc0(param_1 + 0xf8,&puStack_78);
  if ((*(byte *)(lVar39 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar39 + 0x28),*(ulong *)(lVar39 + 0x18) & 0xfffffffffffffffe);
  }
  *(ulong *)(lVar39 + 0x28) = CONCAT71(uStack_12f,uStack_130);
  *(long **)(lVar39 + 0x18) = uStack_140;
  *(ulong *)(lVar39 + 0x20) = CONCAT71(uStack_137,bStack_138);
  uStack_140 = (long *)((ulong)uStack_140 & 0xffffffffffff0000);
  *(long **)(lVar39 + 0x10) = uStack_148;
  *(undefined8 *)(lVar39 + 0x30) = 0;
  if (((ulong)uStack_110 & 1) != 0) {
    func_0x0412a280(pcStack_100,(ulong)uStack_110 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(&plStack_a8);
  if (((ulong)plStack_e8 & 1) != 0) {
    func_0x0412a280(auStack_d8._0_8_,(ulong)plStack_e8 & 0xfffffffffffffffe);
  }
  puStack_78 = &UNK_0f3f5258;
  uStack_70 = uStack_7c;
  uStack_6c = 0;
  uStack_68 = 1;
  func_0x0cb9c650(&puStack_78,plVar36);
  func_0x0c6cd740(plVar36,0xf5a2e50);
  *(byte *)((long)plVar36 + 0x10b) = *(byte *)((long)plVar36 + 0x10b) | 4;
  *(char *)(plVar36 + 0x26) = '\x01';
  bStack_c0 = 0x26;
  uStack_bf = (undefined7)_DAT_01208a02;
  uStack_b8 = (undefined1)((ulong)_DAT_01208a02 >> 0x38);
  uStack_b7 = (undefined7)_UNK_01208a0a;
  uStack_b0 = 0x73726162;
  uStack_ac = uStack_ac & 0xffffff00;
  pbVar51 = (byte *)(plVar36 + 0x22);
  if (pbVar51 != &bStack_c0) {
    if ((*pbVar51 & 1) == 0) {
      plVar36[0x24] = CONCAT44(uStack_ac,0x73726162);
      *(ulong *)pbVar51 = CONCAT71(uStack_bf,0x26);
      plVar36[0x23] = CONCAT71(uStack_b7,uStack_b8);
    }
    else {
      FUN_04885120(pbVar51,&uStack_bf,0x13);
    }
  }
  lVar39 = lRam000000000f7151e8;
  plVar36[0x27] = _DAT_0f7151e0;
  plVar36[0x28] = lVar39;
  *(byte *)((long)plVar36 + 0x135) = *(byte *)((long)plVar36 + 0x135) | 4;
  func_0x0c6cf060(plVar36,0xf70ba30);
  func_0x0c6cf060(plVar36,0xf70b738);
  plStack_e8 = (long *)&UNK_0f40da60;
  uStack_e0 = CONCAT44(0x40a00000,(undefined4)uStack_e0);
  auStack_d8 = (undefined1  [16])0x0;
  lStack_c8 = 0;
  uStack_e0 = CONCAT71(uStack_e0._1_7_,1);
  plVar41 = plVar36 + 5;
  uStack_148 = plVar41;
  uStack_140 = plVar36;
  func_0x0cc81a40(&plStack_e8,&uStack_148);
  puStack_50 = &UNK_0f40dd80;
  uStack_44 = 0x41f00000;
  uStack_48 = 1;
  uStack_148 = plVar41;
  uStack_140 = plVar36;
  func_0x0cc81a40(&puStack_50,&uStack_148);
  puVar46 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
  if (puVar46 == (undefined4 *)0x0) {
    func_0x0eec74c0(5,0);
  }
  puStack_f8 = (undefined4 *)((long)puVar46 + 5);
  *puVar46 = 0x20001;
  *(undefined1 *)(puVar46 + 1) = 0;
  uStack_110 = (long *)&UNK_0f4073f0;
  plStack_108 = (long *)CONCAT71(plStack_108._1_7_,1);
  uStack_148 = plVar41;
  uStack_140 = plVar36;
  pcStack_100 = (char *)puVar46;
  puStack_f0 = puStack_f8;
  func_0x0cc81a40(&uStack_110,&uStack_148);
  uStack_148 = (long *)&UNK_0f407928;
  bStack_138 = 0;
  uStack_137 = 0;
  uStack_130 = 0;
  uStack_12f = 0;
  plStack_128 = (long *)0x0;
  uStack_120 = 0;
  uStack_11c = 0x30;
  uStack_140 = (long *)CONCAT71(uStack_140._1_7_,1);
  plStack_a8 = plVar41;
  plStack_a0 = plVar36;
  func_0x0cc81a40(&uStack_148,&plStack_a8);
  puStack_98 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_98 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_90 = puStack_98 + 1;
  *puStack_98 = 0x1030200;
  plStack_a8 = (long *)&UNK_0f40db40;
  plStack_a0 = (long *)CONCAT53(plStack_a0._3_5_,0x20000);
  plStack_a0 = (long *)CONCAT62(plStack_a0._2_6_,0xc01);
  puStack_88 = puStack_90;
  plStack_60 = plVar41;
  plStack_58 = plVar36;
  func_0x0cc81a40(&plStack_a8,&plStack_60);
  puStack_40 = &UNK_0f40dc30;
  uStack_38 = 0x101;
  plStack_60 = plVar41;
  plStack_58 = plVar36;
  func_0x0cc81a40(&puStack_40,&plStack_60);
  plStack_a8 = (long *)&UNK_0f40db40;
  if (puStack_98 != (undefined4 *)0x0) {
    puStack_90 = puStack_98;
    func_0x0412a280(puStack_98,(long)puStack_88 - (long)puStack_98);
  }
  if ((bStack_138 & 1) != 0) {
    func_0x0412a280(plStack_128,CONCAT71(uStack_137,bStack_138) & 0xfffffffffffffffe);
  }
  uStack_110 = (long *)&UNK_0f4073f0;
  if (pcStack_100 != (char *)0x0) {
    puStack_f8 = (undefined4 *)pcStack_100;
    func_0x0412a280(pcStack_100,(long)puStack_f0 - (long)pcStack_100);
  }
  plStack_e8 = (long *)&UNK_0f40da60;
  uVar38 = auStack_d8._0_8_;
  if (auStack_d8._0_8_ != 0) {
    for (lVar39 = auStack_d8._8_8_; uVar38 != lVar39; lVar39 = lVar39 + -0x18) {
      *(undefined **)(lVar39 + -0x18) = &UNK_0f3773c0;
      plVar36 = *(long **)(lVar39 + -0x10);
      *(undefined8 *)(lVar39 + -0x10) = 0;
      if (plVar36 != (long *)0x0) {
        (**(code **)(*plVar36 + 0x90))();
      }
    }
    auStack_d8._8_8_ = uVar38;
    func_0x0412a280(auStack_d8._0_8_,lStack_c8 - auStack_d8._0_8_);
  }
  if ((bStack_c0 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_ac,uStack_b0),CONCAT71(uStack_bf,bStack_c0) & 0xfffffffffffffffe
                   );
  }
  return;
}



/* ---- referenced strings ----
 * 0x1208a02  itemGroup.name.bars
 * 0x14ea360          
 */
