/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5cefb40 (ELF vaddr 0x5befb40)
 * Label: caller-of-seed
 * Body:  [[05cefb40, 05cf095d] [05cf0960, 05cf0a47] [05cf0ba5, 05cf0bc8] [05cf0bcc, 05cf0bd6] [05cf0bf4, 05cf0c23]]
 * Ghidra: FUN_05cefb40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05cefb40(long param_1,long param_2,undefined4 param_3,long *param_4)

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
  undefined8 *puVar46;
  undefined4 *puVar47;
  ulong uVar48;
  char *pcVar49;
  byte *pbVar50;
  long *plVar51;
  char *pcVar52;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte bStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  long *plStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e0;
  long *plStack_d8;
  char *pcStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  long *plStack_48;
  undefined *puStack_40;
  undefined2 uStack_38;
  char cVar56;
  char cVar58;
  char cVar60;
  char cVar62;
  char cVar64;
  char cVar66;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    auStack_a8._0_8_ = *(undefined8 *)(param_2 + 0x18);
    plStack_b8 = *(long **)(param_2 + 8);
    uStack_b0 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    func_0x0412e5e0(&plStack_b8,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_118 = *(long **)(param_1 + 0x148);
  uStack_110 = *(long **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar36 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar36 = *plVar36 + 1;
    UNLOCK();
  }
  func_0x0cc46680(&plStack_80,&uStack_118);
  plVar36 = uStack_110;
  if (uStack_110 != (long *)0x0) {
    LOCK();
    plVar41 = uStack_110 + 1;
    lVar39 = *plVar41;
    *plVar41 = *plVar41 + -1;
    UNLOCK();
    if (lVar39 == 0) {
      (**(code **)(*uStack_110 + 0x10))(uStack_110);
      func_0x0412c2d0(plVar36);
    }
  }
  plVar36 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b8);
  if (plVar36 == (long *)0x0) {
    func_0x0eec74c0(0x3b8,0);
  }
  func_0x0c6c7010(plVar36,&plStack_b8,param_3,
                  *(undefined8 *)
                   (_DAT_0f71e690 + 8 +
                   (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10));
  *plVar36 = (long)&UNK_0f3a7800;
  ((char *)((long)plVar36 + 0x136))[0] = '\0';
  ((char *)((long)plVar36 + 0x136))[1] = '\x0f';
  *(byte *)((long)plVar36 + 0x134) = *(byte *)((long)plVar36 + 0x134) & 0xe9;
  pcVar49 = (char *)((long)plVar36 + 300);
  pcVar49[0] = -0x33;
  pcVar49[1] = -0x34;
  pcVar49[2] = 'L';
  pcVar49[3] = '?';
  plVar36[0x21] = 0;
  *(char *)((long)plVar36 + 0x132) = '\b';
  func_0x0c65ab10(plVar36,&UNK_0c65ac90,0,0);
  *plVar36 = (long)&UNK_0f006640;
  uStack_118 = (long *)0x0;
  if (((ulong)plStack_b8 & 1) == 0) {
    uStack_100 = auStack_a8[0];
    uStack_ff = auStack_a8._1_7_;
    uStack_110 = plStack_b8;
    bStack_108 = (byte)uStack_b0;
    uStack_107 = (undefined7)((ulong)uStack_b0 >> 8);
  }
  else {
    func_0x0412e5e0(&uStack_110,auStack_a8._0_8_,uStack_b0);
  }
  plStack_f8 = (long *)0x0;
  plStack_48 = param_4;
  if (((ulong)uStack_110 & 1) == 0) {
    if ((byte)uStack_110 >> 1 != 0) goto LAB_05cefd00;
LAB_05cefdf7:
    uVar45 = 0;
  }
  else {
    if (CONCAT71(uStack_107,bStack_108) == 0) goto LAB_05cefdf7;
LAB_05cefd00:
    if (((ulong)uStack_110 & 1) == 0) {
      pbVar50 = (byte *)((long)&uStack_110 + 1);
      if (pbVar50 != (byte *)0x0) goto LAB_05cefd21;
      goto LAB_05cefdf7;
    }
    pbVar50 = (byte *)CONCAT71(uStack_ff,uStack_100);
    if (pbVar50 == (byte *)0x0) goto LAB_05cefdf7;
LAB_05cefd21:
    if (*pbVar50 == 0) goto LAB_05cefdf7;
    uVar45 = 0xcbf29ce484222325;
    uVar37 = func_0x0eee2e90(pbVar50);
    if (uVar37 != 0) {
      uVar48 = (ulong)((uint)uVar37 & 7);
      if (7 < uVar37) {
        uVar37 = uVar37 & 0xfffffffffffffff8;
        do {
          uVar45 = (((((((uVar45 * 0x100000001b3 ^ (ulong)*pbVar50) * 0x100000001b3 ^
                        (ulong)pbVar50[1]) * 0x100000001b3 ^ (ulong)pbVar50[2]) * 0x100000001b3 ^
                      (ulong)pbVar50[3]) * 0x100000001b3 ^ (ulong)pbVar50[4]) * 0x100000001b3 ^
                    (ulong)pbVar50[5]) * 0x100000001b3 ^ (ulong)pbVar50[6]) * 0x100000001b3 ^
                   (ulong)pbVar50[7];
          pbVar50 = pbVar50 + 8;
          uVar37 = uVar37 - 8;
        } while (uVar37 != 0);
      }
      if (uVar48 != 0) {
        uVar37 = 0;
        do {
          uVar45 = uVar45 * 0x100000001b3 ^ (ulong)pbVar50[uVar37];
          uVar37 = uVar37 + 1;
        } while (uVar48 != uVar37);
      }
    }
  }
  uStack_118 = (long *)uVar45;
  func_0x0c690a60(plVar36 + 0x75,&UNK_0f005b28,&uStack_118);
  if (((ulong)uStack_110 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_ff,uStack_100),(ulong)uStack_110 & 0xfffffffffffffffe);
  }
  plVar41 = plVar36 + 0x6d;
  func_0x05cf9c30(plVar41);
  uVar38 = func_0x05cf9d90(plVar41);
  uVar2 = *(undefined2 *)((long)plVar36 + 0x14e);
  uStack_118 = (long *)&UNK_0f006a90;
  bStack_108 = 0xf0;
  uStack_107 = 0x5cfbb;
  uStack_100 = 0;
  uStack_ff = 0;
  uStack_110 = plVar36;
  plStack_f8 = &uStack_118;
  func_0x05cfa830(&uStack_e0,uVar38,&uStack_118);
  if (plStack_f8 == &uStack_118) {
    lVar39 = 0x20;
LAB_05cefea8:
    (**(code **)(*plStack_f8 + lVar39))();
  }
  else {
    lVar39 = 0x28;
    if (plStack_f8 != (long *)0x0) goto LAB_05cefea8;
  }
  func_0x0c6ed620(uVar38,uVar2,&uStack_e0,1);
  if (plStack_d8 != (long *)0x0) {
    plVar40 = (long *)FUN_0412c300();
    uStack_110 = plVar40;
    if (plVar40 != (long *)0x0) {
      uStack_118 = uStack_e0;
      if (uStack_e0 != (long *)0x0) {
        (**(code **)(*(long *)uStack_e0[5] + 0x10))();
      }
      LOCK();
      plVar51 = plVar40 + 1;
      lVar39 = *plVar51;
      *plVar51 = *plVar51 + -1;
      UNLOCK();
      if (lVar39 == 0) {
        (**(code **)(*plVar40 + 0x10))(plVar40);
        func_0x0412c2d0(plVar40);
      }
    }
    if (plStack_d8 != (long *)0x0) {
      func_0x0412c2d0();
    }
  }
  func_0x05cfab30(plVar41);
  uVar38 = func_0x05cfac90(plVar41);
  uVar2 = *(undefined2 *)((long)plVar36 + 0x14e);
  uStack_118 = (long *)&UNK_0f006b10;
  bStack_108 = 0x30;
  uStack_107 = 0x5cfbc;
  uStack_100 = 0;
  uStack_ff = 0;
  uStack_110 = plVar36;
  plStack_f8 = &uStack_118;
  func_0x05cfb550(&uStack_e0,uVar38,&uStack_118);
  if (plStack_f8 == &uStack_118) {
    lVar39 = 0x20;
LAB_05ceff99:
    (**(code **)(*plStack_f8 + lVar39))();
  }
  else {
    lVar39 = 0x28;
    if (plStack_f8 != (long *)0x0) goto LAB_05ceff99;
  }
  func_0x0c6ed620(uVar38,uVar2,&uStack_e0);
  if (plStack_d8 != (long *)0x0) {
    plVar41 = (long *)FUN_0412c300();
    uStack_110 = plVar41;
    if (plVar41 != (long *)0x0) {
      uStack_118 = uStack_e0;
      if (uStack_e0 != (long *)0x0) {
        (**(code **)(*(long *)uStack_e0[5] + 0x10))();
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
    if (plStack_d8 != (long *)0x0) {
      func_0x0412c2d0();
    }
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar39 = 0;
    lVar42 = 0;
  }
  else {
    lVar42 = FUN_0412c300();
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
  pcVar49 = (char *)((long)plVar36 + 0xd1);
  if (bVar53) {
    pcVar49 = (char *)plVar36[0x1c];
  }
  plVar41 = (long *)(ulong)(*(byte *)(plVar36 + 0x1a) >> 1);
  if (bVar53) {
    plVar41 = (long *)plVar36[0x1b];
  }
  if ((long *)0xfffffffffffffff7 < plVar41) {
    func_0x04882e30();
    goto LAB_05cf0a29;
  }
  pcVar43 = (char *)((long)&uStack_e0 + 1);
  if (plVar41 < (long *)0x17) {
    uStack_e0 = (long *)CONCAT71(uStack_e0._1_7_,(char)plVar41 * '\x02');
    if (plVar41 != (long *)0x0) goto LAB_05cf011f;
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
    uStack_e0 = (long *)(uVar45 | 1);
    plStack_d8 = plVar41;
    pcStack_d0 = pcVar43;
LAB_05cf011f:
    func_0x0eee2f00(pcVar43,pcVar49,plVar41);
  }
  pcVar52 = (char *)((long)&uStack_e0 + 1);
  pcVar43[(long)plVar41] = '\0';
  plVar40 = (long *)(ulong)((byte)uStack_e0 >> 1);
  plVar41 = plStack_d8;
  pcVar49 = pcStack_d0;
  if (((ulong)uStack_e0 & 1) == 0) {
    plVar41 = plVar40;
    pcVar49 = pcVar52;
  }
  if (plVar41 != (long *)0x0) {
    pcVar43 = pcVar49;
    if (plVar41 < (long *)0x8) {
LAB_05cf026c:
      do {
        cVar1 = *pcVar43;
        cVar56 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar56 = cVar1;
        }
        *pcVar43 = cVar56;
        pcVar43 = pcVar43 + 1;
      } while (pcVar43 != pcVar49 + (long)plVar41);
    }
    else if (plVar41 < (long *)0x20) {
      plVar40 = (long *)0x0;
LAB_05cf0205:
      plVar51 = (long *)((ulong)plVar41 & 0xfffffffffffffff8);
      pcVar43 = pcVar49 + (long)plVar51;
      do {
        uVar38 = *(undefined8 *)(pcVar49 + (long)plVar40);
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
        *(ulong *)(pcVar49 + (long)plVar40) =
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
      } while (plVar51 != plVar40);
      if (plVar41 != plVar51) goto LAB_05cf026c;
    }
    else {
      plVar40 = (long *)((ulong)plVar41 & 0xffffffffffffffe0);
      plVar51 = (long *)0x0;
      do {
        pcVar43 = pcVar49 + (long)plVar51;
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
        pcVar44 = pcVar49 + 0x10 + (long)plVar51;
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
        pcVar44 = pcVar49 + (long)plVar51;
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
        pcVar43 = pcVar49 + 0x10 + (long)plVar51;
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
        plVar51 = plVar51 + 4;
      } while (plVar40 != plVar51);
      if (plVar41 != plVar40) {
        if (((ulong)plVar41 & 0x18) == 0) {
          pcVar43 = (char *)((long)plVar40 + (long)pcVar49);
          goto LAB_05cf026c;
        }
        goto LAB_05cf0205;
      }
    }
    plVar40 = (long *)(ulong)((byte)uStack_e0 >> 1);
  }
  if (((ulong)uStack_e0 & 1) != 0) {
    plVar40 = plStack_d8;
    pcVar52 = pcStack_d0;
  }
  pcVar49 = (char *)((long)plVar40 + (long)pcVar52);
  plVar41 = plVar40;
  pcVar43 = pcVar52;
  while (((pcVar44 = pcVar49, 0 < (long)plVar41 &&
          (pcVar43 = (char *)func_0x0eee2ef0(pcVar43,0x3a,plVar41), pcVar43 != (char *)0x0)) &&
         (pcVar44 = pcVar43, *pcVar43 != ':'))) {
    pcVar43 = pcVar43 + 1;
    plVar41 = (long *)(pcVar49 + -(long)pcVar43);
  }
  plVar41 = (long *)(pcVar44 + -(long)pcVar52);
  if (plVar40 < pcVar44 + -(long)pcVar52) {
    plVar41 = plVar40;
  }
  if (pcVar44 == pcVar49) {
    plVar41 = plVar40;
  }
  if ((long *)0xfffffffffffffff7 < plVar41) {
LAB_05cf0a29:
    plVar36 = (long *)func_0x04882e30();
    func_0x04894d10(&uStack_118);
    uVar38 = func_0x04882e20(plVar36);
    if (((ulong)uStack_e0 & 1) != 0) {
      func_0x0412a280(pcStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
    }
    if (plVar36 != (long *)0x0) {
      (**(code **)(*plVar36 + 8))(plVar36);
    }
    func_0x0cc46730(&plStack_80);
    if (((ulong)plStack_b8 & 1) != 0) {
      func_0x0412a280(auStack_a8._0_8_,(ulong)plStack_b8 & 0xfffffffffffffffe);
    }
    _Unwind_Resume(uVar38);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (plVar41 < (long *)0x17) {
    uStack_118 = (long *)CONCAT71(uStack_118._1_7_,(char)plVar41 * '\x02');
    lVar39 = (long)&uStack_118 + 1;
    if (plVar41 != (long *)0x0) goto LAB_05cf037c;
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
    bStack_108 = (byte)lVar39;
    uStack_107 = (undefined7)((ulong)lVar39 >> 8);
    uStack_118 = (long *)(uVar45 | 1);
    uStack_110 = plVar41;
LAB_05cf037c:
    func_0x0eee2ee0(lVar39,pcVar52,plVar41);
  }
  *(char *)(lVar39 + (long)plVar41) = '\0';
  func_0x05cf8990(param_1 + 0xe0,&uStack_118,&uStack_118);
  if (((ulong)uStack_118 & 1) != 0) {
    func_0x0412a280(CONCAT71(uStack_107,bStack_108),(ulong)uStack_118 & 0xfffffffffffffffe);
  }
  uStack_118 = (long *)0x0;
  if (((ulong)uStack_e0 & 1) == 0) {
    uStack_100 = SUB81(pcStack_d0,0);
    uStack_ff = (undefined7)((ulong)pcStack_d0 >> 8);
    uStack_110 = uStack_e0;
    bStack_108 = (byte)plStack_d8;
    uStack_107 = (undefined7)((ulong)plStack_d8 >> 8);
  }
  else {
    func_0x0412e5e0(&uStack_110,pcStack_d0,plStack_d8);
  }
  plStack_f8 = (long *)0x0;
  if (((ulong)uStack_110 & 1) == 0) {
    if ((byte)uStack_110 >> 1 != 0) goto LAB_05cf0423;
  }
  else if (CONCAT71(uStack_107,bStack_108) != 0) {
LAB_05cf0423:
    if (((ulong)uStack_110 & 1) == 0) {
      pbVar50 = (byte *)((long)&uStack_110 + 1);
    }
    else {
      pbVar50 = (byte *)CONCAT71(uStack_ff,uStack_100);
    }
    if ((pbVar50 != (byte *)0x0) && (*pbVar50 != 0)) {
      plVar41 = (long *)0xcbf29ce484222325;
      uVar45 = func_0x0eee2e90(pbVar50);
      if (uVar45 != 0) {
        uVar37 = (ulong)((uint)uVar45 & 7);
        if (7 < uVar45) {
          uVar45 = uVar45 & 0xfffffffffffffff8;
          do {
            plVar41 = (long *)(((((((((long)plVar41 * 0x100000001b3 ^ (ulong)*pbVar50) *
                                     0x100000001b3 ^ (ulong)pbVar50[1]) * 0x100000001b3 ^
                                   (ulong)pbVar50[2]) * 0x100000001b3 ^ (ulong)pbVar50[3]) *
                                  0x100000001b3 ^ (ulong)pbVar50[4]) * 0x100000001b3 ^
                                (ulong)pbVar50[5]) * 0x100000001b3 ^ (ulong)pbVar50[6]) *
                               0x100000001b3 ^ (ulong)pbVar50[7]);
            pbVar50 = pbVar50 + 8;
            uVar45 = uVar45 - 8;
          } while (uVar45 != 0);
        }
        if (uVar37 != 0) {
          uVar45 = 0;
          do {
            plVar41 = (long *)((long)plVar41 * 0x100000001b3 ^ (ulong)pbVar50[uVar45]);
            uVar45 = uVar45 + 1;
          } while (uVar37 != uVar45);
        }
      }
      goto LAB_05cf0519;
    }
  }
  plVar41 = (long *)0x0;
LAB_05cf0519:
  uStack_118 = plVar41;
  plStack_90 = &uStack_118;
  lVar39 = func_0x05cf8b10(param_1,&uStack_118,&UNK_01563a4f,&plStack_90,&puStack_58);
  plVar41 = *(long **)(lVar39 + 0x48);
  *(long **)(lVar39 + 0x48) = plVar36;
  if (plVar41 != (long *)0x0) {
    (**(code **)(*plVar41 + 8))();
  }
  plStack_90 = uStack_118;
  lVar39 = func_0x05cf8dc0(param_1 + 0xf8,&plStack_90);
  if ((*(byte *)(lVar39 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar39 + 0x28),*(ulong *)(lVar39 + 0x18) & 0xfffffffffffffffe);
  }
  *(ulong *)(lVar39 + 0x28) = CONCAT71(uStack_ff,uStack_100);
  *(long **)(lVar39 + 0x18) = uStack_110;
  *(ulong *)(lVar39 + 0x20) = CONCAT71(uStack_107,bStack_108);
  uStack_110 = (long *)((ulong)uStack_110 & 0xffffffffffff0000);
  *(long **)(lVar39 + 0x10) = uStack_118;
  *(undefined8 *)(lVar39 + 0x30) = 0;
  if (((ulong)uStack_e0 & 1) != 0) {
    func_0x0412a280(pcStack_d0,(ulong)uStack_e0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(&plStack_80);
  plVar41 = plStack_48;
  if (((ulong)plStack_b8 & 1) != 0) {
    func_0x0412a280(auStack_a8._0_8_,(ulong)plStack_b8 & 0xfffffffffffffffe);
  }
  func_0x0c6cd740(plVar36,0xf5a2e50);
  func_0x0c6cd240(plVar36,0xf6ff700,_DAT_0f6ff710);
  *(char *)(plVar36 + 0x26) = '\x04';
  puVar46 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
  if (puVar46 == (undefined8 *)0x0) {
    func_0x0eec74c0(0x20,0);
  }
  uVar38 = _UNK_011ed673;
  *(ulong *)((long)puVar46 + 0xc) = CONCAT44(_UNK_011ed66f,_DAT_011ed66b);
  *(undefined8 *)((long)puVar46 + 0x14) = uVar38;
  uVar38 = CONCAT44(_DAT_011ed66b,_UNK_011ed667);
  *puVar46 = _DAT_011ed65f;
  puVar46[1] = uVar38;
  *(undefined1 *)((long)puVar46 + 0x1c) = 0;
  if ((*(byte *)(plVar36 + 0x22) & 1) == 0) {
    func_0x04885070(plVar36 + 0x22,puVar46,0x1c);
  }
  else {
    func_0x04885120(plVar36 + 0x22,puVar46,0x1c);
  }
  lVar39 = plVar41[1];
  plVar36[0x27] = *plVar41;
  plVar36[0x28] = lVar39;
  func_0x0c6cf060(plVar36,0xf70ba30);
  plStack_b8 = (long *)&UNK_0f40da60;
  uStack_b0 = CONCAT44(0x40600000,(undefined4)uStack_b0);
  auStack_a8 = (undefined1  [16])0x0;
  lStack_98 = 0;
  uStack_b0 = CONCAT71(uStack_b0._1_7_,1);
  plVar41 = plVar36 + 5;
  uStack_118 = plVar41;
  uStack_110 = plVar36;
  func_0x0cc81a40(&plStack_b8,&uStack_118);
  puStack_58 = &UNK_0f40dd80;
  uStack_4c = 0x418c0000;
  uStack_50 = 1;
  uStack_118 = plVar41;
  uStack_110 = plVar36;
  func_0x0cc81a40(&puStack_58,&uStack_118);
  puVar47 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
  if (puVar47 == (undefined4 *)0x0) {
    func_0x0eec74c0(5,0);
  }
  puStack_c8 = (undefined4 *)((long)puVar47 + 5);
  *puVar47 = 0x20001;
  *(undefined1 *)(puVar47 + 1) = 0;
  uStack_e0 = (long *)&UNK_0f4073f0;
  plStack_d8 = (long *)CONCAT71(plStack_d8._1_7_,1);
  uStack_118 = plVar41;
  uStack_110 = plVar36;
  pcStack_d0 = (char *)puVar47;
  puStack_c0 = puStack_c8;
  func_0x0cc81a40(&uStack_e0,&uStack_118);
  uStack_118 = (long *)&UNK_0f407928;
  bStack_108 = 0;
  uStack_107 = 0;
  uStack_100 = 0;
  uStack_ff = 0;
  plStack_f8 = (long *)0x0;
  uStack_f0 = 0;
  uStack_ec = 0x30;
  uStack_110 = (long *)CONCAT71(uStack_110._1_7_,1);
  plStack_80 = plVar41;
  plStack_78 = plVar36;
  func_0x0cc81a40(&uStack_118,&plStack_80);
  puStack_70 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puStack_70 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_68 = puStack_70 + 1;
  *puStack_70 = 0x1030200;
  plStack_80 = (long *)&UNK_0f40db40;
  plStack_78 = (long *)CONCAT53(plStack_78._3_5_,0x20000);
  plStack_78 = (long *)CONCAT62(plStack_78._2_6_,1);
  plStack_90 = plVar41;
  plStack_88 = plVar36;
  puStack_60 = puStack_68;
  func_0x0cc81a40(&plStack_80,&plStack_90);
  puStack_40 = &UNK_0f40dc30;
  uStack_38 = 0x101;
  plStack_90 = plVar41;
  plStack_88 = plVar36;
  func_0x0cc81a40(&puStack_40,&plStack_90);
  plStack_80 = (long *)&UNK_0f40db40;
  if (puStack_70 != (undefined4 *)0x0) {
    puStack_68 = puStack_70;
    func_0x0412a280(puStack_70,(long)puStack_60 - (long)puStack_70);
  }
  if ((bStack_108 & 1) != 0) {
    func_0x0412a280(plStack_f8,CONCAT71(uStack_107,bStack_108) & 0xfffffffffffffffe);
  }
  uStack_e0 = (long *)&UNK_0f4073f0;
  if (pcStack_d0 != (char *)0x0) {
    puStack_c8 = (undefined4 *)pcStack_d0;
    func_0x0412a280(pcStack_d0,(long)puStack_c0 - (long)pcStack_d0);
  }
  plStack_b8 = (long *)&UNK_0f40da60;
  uVar38 = auStack_a8._0_8_;
  if (auStack_a8._0_8_ != 0) {
    for (lVar39 = auStack_a8._8_8_; uVar38 != lVar39; lVar39 = lVar39 + -0x18) {
      *(undefined **)(lVar39 + -0x18) = &UNK_0f3773c0;
      plVar36 = *(long **)(lVar39 + -0x10);
      *(undefined8 *)(lVar39 + -0x10) = 0;
      if (plVar36 != (long *)0x0) {
        (**(code **)(*plVar36 + 0x90))();
      }
    }
    auStack_a8._8_8_ = uVar38;
    func_0x0412a280(auStack_a8._0_8_,lStack_98 - auStack_a8._0_8_);
  }
  func_0x0412a280(puVar46,0x20);
  return;
}



/* ---- referenced strings ----
 * 0x11ed65f  itemGroup.name.copper_lights
 * 0x11ed66b  me.copper_lights
 * 0x14ea360          
 */
