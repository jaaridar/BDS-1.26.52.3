/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x5ceeaa0 (ELF vaddr 0x5beeaa0)
 * Label: caller-of-seed
 * Body:  [[05ceeaa0, 05cef884] [05cef890, 05cef979] [05cefac3, 05cefae6] [05cefaea, 05cefaf4] [05cefb0d, 05cefb3c]]
 * Ghidra: FUN_05ceeaa0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05ceeaa0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
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
  undefined1 auVar43 [8];
  long *plVar44;
  ulong uVar45;
  undefined8 uVar46;
  long lVar47;
  long *plVar48;
  long *plVar49;
  long lVar50;
  char *pcVar51;
  byte *pbVar52;
  char *pcVar53;
  ulong uVar54;
  undefined4 *puVar55;
  byte bVar56;
  ulong uVar57;
  char *pcVar58;
  byte *pbVar59;
  long *plVar60;
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
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  byte *pbStack_f0;
  long *plStack_e8;
  undefined8 uStack_d0;
  long *plStack_c8;
  byte *pbStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  byte *pbStack_a8;
  long *plStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  byte bStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined5 uStack_77;
  undefined2 uStack_72;
  undefined1 uStack_70;
  undefined5 uStack_6f;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  byte *pbStack_68;
  long *plStack_60;
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  undefined *puStack_40;
  undefined2 uStack_38;
  char cVar65;
  char cVar67;
  char cVar69;
  char cVar71;
  char cVar73;
  char cVar75;
  
  uVar46 = *(undefined8 *)
            (_DAT_0f71e690 + 8 + (ulong)(0x10 < (ulong)(_DAT_0f71e698 - _DAT_0f71e690)) * 0x10);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    puStack_98 = *(undefined4 **)(param_3 + 0x18);
    pbStack_a8 = *(byte **)(param_3 + 8);
    plStack_a0 = *(long **)(param_3 + 0x10);
  }
  else {
    func_0x0412e5e0(&pbStack_a8,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10));
  }
  auStack_108 = *(undefined1 (*) [8])(param_1 + 0x148);
  uStack_100 = *(byte **)(param_1 + 0x150);
  if (*(long *)(param_1 + 0x150) != 0) {
    LOCK();
    plVar44 = (long *)(*(long *)(param_1 + 0x150) + 8);
    *plVar44 = *plVar44 + 1;
    UNLOCK();
  }
  func_0x0cc46680(&bStack_80,auStack_108);
  pbVar52 = uStack_100;
  if (uStack_100 != (byte *)0x0) {
    LOCK();
    pbVar61 = uStack_100 + 8;
    lVar47 = *(long *)pbVar61;
    *(long *)pbVar61 = *(long *)pbVar61 + -1;
    UNLOCK();
    if (lVar47 == 0) {
      (**(code **)(*(long *)uStack_100 + 0x10))(uStack_100);
      func_0x0412c2d0(pbVar52);
    }
  }
  plVar44 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x3b8);
  if (plVar44 == (long *)0x0) {
    func_0x0eec74c0(0x3b8,0);
  }
  func_0x0c6c7010(plVar44,&pbStack_a8,param_4,uVar46);
  plVar44[0x31] = (ulong)_DAT_01198538;
  *(undefined4 *)(plVar44 + 0x32) = 0x3ec00000;
  *(undefined8 *)((long)plVar44 + 0x194) = _DAT_014e7800;
  pcVar58 = (char *)((long)plVar44 + 0x19c);
  pcVar58[0] = '\0';
  pcVar58[1] = '\0';
  pcVar58[2] = ' ';
  pcVar58[3] = '?';
  *(char *)((long)plVar44 + 0x132) = '\b';
  *(char *)((long)plVar44 + 0x136) = '\0';
  *(ushort *)((long)plVar44 + 0x133) = *(ushort *)((long)plVar44 + 0x133) & 0xe1ff | 0x800;
  *(byte *)((long)plVar44 + 0x10b) = *(byte *)((long)plVar44 + 0x10b) | 4;
  pcVar58 = (char *)((long)plVar44 + 300);
  pcVar58[0] = -0x33;
  pcVar58[1] = -0x34;
  pcVar58[2] = 'L';
  pcVar58[3] = '?';
  *plVar44 = (long)&UNK_0f0060f0;
  auStack_108 = (undefined1  [8])0x0;
  if (((ulong)pbStack_a8 & 1) == 0) {
    uStack_100 = pbStack_a8;
    pbStack_f0 = (byte *)puStack_98;
    auStack_f8 = (undefined1  [8])plStack_a0;
  }
  else {
    func_0x0412e5e0(&uStack_100,puStack_98,plStack_a0);
  }
  plStack_e8 = (long *)0x0;
  lStack_48 = param_2;
  if (((ulong)uStack_100 & 1) == 0) {
    if ((byte)uStack_100 >> 1 != 0) goto LAB_05ceec88;
LAB_05ceed87:
    uVar54 = 0;
  }
  else {
    if (auStack_f8 == (undefined1  [8])0x0) goto LAB_05ceed87;
LAB_05ceec88:
    if (((ulong)uStack_100 & 1) == 0) {
      pbVar52 = (byte *)((long)&uStack_100 + 1);
      if (pbVar52 != (byte *)0x0) goto LAB_05ceeca9;
      goto LAB_05ceed87;
    }
    pbVar52 = pbStack_f0;
    if (pbStack_f0 == (byte *)0x0) goto LAB_05ceed87;
LAB_05ceeca9:
    if (*pbVar52 == 0) goto LAB_05ceed87;
    uVar54 = 0xcbf29ce484222325;
    uVar45 = func_0x0eee2e90(pbVar52);
    if (uVar45 != 0) {
      uVar57 = (ulong)((uint)uVar45 & 7);
      if (7 < uVar45) {
        uVar45 = uVar45 & 0xfffffffffffffff8;
        do {
          uVar54 = (((((((uVar54 * 0x100000001b3 ^ (ulong)*pbVar52) * 0x100000001b3 ^
                        (ulong)pbVar52[1]) * 0x100000001b3 ^ (ulong)pbVar52[2]) * 0x100000001b3 ^
                      (ulong)pbVar52[3]) * 0x100000001b3 ^ (ulong)pbVar52[4]) * 0x100000001b3 ^
                    (ulong)pbVar52[5]) * 0x100000001b3 ^ (ulong)pbVar52[6]) * 0x100000001b3 ^
                   (ulong)pbVar52[7];
          pbVar52 = pbVar52 + 8;
          uVar45 = uVar45 - 8;
        } while (uVar45 != 0);
      }
      if (uVar57 != 0) {
        uVar45 = 0;
        do {
          uVar54 = uVar54 * 0x100000001b3 ^ (ulong)pbVar52[uVar45];
          uVar45 = uVar45 + 1;
        } while (uVar57 != uVar45);
      }
    }
  }
  auStack_108 = (undefined1  [8])uVar54;
  func_0x0c690a60(plVar44 + 0x75,&UNK_0f005ae8,auStack_108);
  if (((ulong)uStack_100 & 1) != 0) {
    func_0x0412a280(pbStack_f0,(ulong)uStack_100 & 0xfffffffffffffffe);
  }
  plVar49 = plVar44 + 0x6d;
  func_0x05cf9c30(plVar49);
  uVar46 = func_0x05cf9d90(plVar49);
  uVar3 = *(undefined2 *)((long)plVar44 + 0x14e);
  auStack_108 = (undefined1  [8])&UNK_0f006540;
  _auStack_f8 = ZEXT816(0x5cfb850);
  uStack_100 = (byte *)plVar44;
  plStack_e8 = (long *)auStack_108;
  func_0x05cfa830(&uStack_d0,uVar46,auStack_108);
  if (plStack_e8 == (long *)auStack_108) {
    lVar47 = 0x20;
LAB_05ceee38:
    (**(code **)(*plStack_e8 + lVar47))();
  }
  else {
    lVar47 = 0x28;
    if (plStack_e8 != (long *)0x0) goto LAB_05ceee38;
  }
  func_0x0c6ed620(uVar46,uVar3,&uStack_d0,1);
  if (plStack_c8 != (long *)0x0) {
    plVar48 = (long *)func_0x0412c300();
    uStack_100 = (byte *)plVar48;
    if (plVar48 != (long *)0x0) {
      auStack_108 = (undefined1  [8])uStack_d0;
      if (uStack_d0 != (byte *)0x0) {
        (**(code **)(**(long **)((long)uStack_d0 + 0x28) + 0x10))();
      }
      LOCK();
      plVar60 = plVar48 + 1;
      lVar47 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar47 == 0) {
        (**(code **)(*plVar48 + 0x10))(plVar48);
        func_0x0412c2d0(plVar48);
      }
    }
    if (plStack_c8 != (long *)0x0) {
      func_0x0412c2d0();
    }
  }
  func_0x05cfab30(plVar49);
  uVar46 = func_0x05cfac90(plVar49);
  uVar3 = *(undefined2 *)((long)plVar44 + 0x14e);
  auStack_108 = (undefined1  [8])&UNK_0f0065c0;
  auStack_f8 = (undefined1  [8])&UNK_05cfb890;
  pbStack_f0 = (byte *)0x0;
  uStack_100 = (byte *)plVar44;
  plStack_e8 = (long *)auStack_108;
  func_0x05cfb550(&uStack_d0,uVar46,auStack_108);
  if (plStack_e8 == (long *)auStack_108) {
    lVar47 = 0x20;
LAB_05ceef29:
    (**(code **)(*plStack_e8 + lVar47))();
  }
  else {
    lVar47 = 0x28;
    if (plStack_e8 != (long *)0x0) goto LAB_05ceef29;
  }
  func_0x0c6ed620(uVar46,uVar3,&uStack_d0);
  if (plStack_c8 != (long *)0x0) {
    plVar49 = (long *)func_0x0412c300();
    uStack_100 = (byte *)plVar49;
    if (plVar49 != (long *)0x0) {
      auStack_108 = (undefined1  [8])uStack_d0;
      if (uStack_d0 != (byte *)0x0) {
        (**(code **)(**(long **)((long)uStack_d0 + 0x28) + 0x10))();
      }
      LOCK();
      plVar48 = plVar49 + 1;
      lVar47 = *plVar48;
      *plVar48 = *plVar48 + -1;
      UNLOCK();
      if (lVar47 == 0) {
        (**(code **)(*plVar49 + 0x10))(plVar49);
        func_0x0412c2d0(plVar49);
      }
    }
    if (plStack_c8 != (long *)0x0) {
      func_0x0412c2d0();
    }
  }
  if (*(long *)(param_1 + 0x140) == 0) {
    lVar47 = 0;
    lVar50 = 0;
  }
  else {
    lVar50 = func_0x0412c300();
    lVar47 = 0;
    if (lVar50 != 0) {
      lVar47 = *(long *)(param_1 + 0x138);
    }
  }
  plVar44[0x73] = lVar47;
  plVar49 = (long *)plVar44[0x74];
  plVar44[0x74] = lVar50;
  if (plVar49 != (long *)0x0) {
    LOCK();
    plVar48 = plVar49 + 1;
    lVar47 = *plVar48;
    *plVar48 = *plVar48 + -1;
    UNLOCK();
    if (lVar47 == 0) {
      (**(code **)(*plVar49 + 0x10))(plVar49);
      func_0x0412c2d0(plVar49);
    }
  }
  bVar62 = (*(byte *)(plVar44 + 0x1a) & 1) != 0;
  pcVar58 = (char *)((long)plVar44 + 0xd1);
  if (bVar62) {
    pcVar58 = (char *)plVar44[0x1c];
  }
  plVar49 = (long *)(ulong)(*(byte *)(plVar44 + 0x1a) >> 1);
  if (bVar62) {
    plVar49 = (long *)plVar44[0x1b];
  }
  if ((long *)0xfffffffffffffff7 < plVar49) {
    func_0x04882e30();
    goto LAB_05cef95b;
  }
  pbVar52 = (byte *)((long)&uStack_d0 + 1);
  if (plVar49 < (long *)0x17) {
    uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,(char)plVar49 * '\x02');
    if (plVar49 != (long *)0x0) goto LAB_05cef0af;
  }
  else {
    uVar54 = 0x1a;
    if (((ulong)plVar49 | 7) != 0x17) {
      uVar54 = ((ulong)plVar49 | 7) + 1;
    }
    pbVar52 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar54);
    if (pbVar52 == (byte *)0x0) {
      func_0x0eec74c0(uVar54,0);
    }
    uStack_d0 = (byte *)(uVar54 | 1);
    plStack_c8 = plVar49;
    pbStack_c0 = pbVar52;
LAB_05cef0af:
    func_0x0eee2f00(pbVar52,pcVar58,plVar49);
  }
  pbVar61 = (byte *)((long)&uStack_d0 + 1);
  pbVar52[(long)plVar49] = 0;
  plVar48 = (long *)(ulong)((byte)uStack_d0 >> 1);
  plVar49 = plStack_c8;
  pbVar52 = pbStack_c0;
  if (((ulong)uStack_d0 & 1) == 0) {
    plVar49 = plVar48;
    pbVar52 = pbVar61;
  }
  if (plVar49 != (long *)0x0) {
    pbVar59 = pbVar52;
    if (plVar49 < (long *)0x8) {
LAB_05cef1fc:
      do {
        bVar2 = *pbVar59;
        bVar56 = bVar2 + 0x20;
        if (0x19 < (byte)(bVar2 + 0xbf)) {
          bVar56 = bVar2;
        }
        *pbVar59 = bVar56;
        pbVar59 = pbVar59 + 1;
      } while (pbVar59 != pbVar52 + (long)plVar49);
    }
    else if (plVar49 < (long *)0x20) {
      plVar48 = (long *)0x0;
LAB_05cef195:
      plVar60 = (long *)((ulong)plVar49 & 0xfffffffffffffff8);
      pbVar59 = pbVar52 + (long)plVar60;
      do {
        uVar46 = *(undefined8 *)(pbVar52 + (long)plVar48);
        bVar63 = (char)uVar46 + DAT_014e9110;
        cVar65 = (char)((ulong)uVar46 >> 8);
        bVar64 = cVar65 + DAT_014e9110._1_1_;
        cVar67 = (char)((ulong)uVar46 >> 0x10);
        bVar66 = cVar67 + DAT_014e9110._2_1_;
        cVar69 = (char)((ulong)uVar46 >> 0x18);
        bVar68 = cVar69 + DAT_014e9110._3_1_;
        cVar71 = (char)((ulong)uVar46 >> 0x20);
        bVar70 = cVar71 + DAT_014e9110._4_1_;
        cVar73 = (char)((ulong)uVar46 >> 0x28);
        bVar72 = cVar73 + DAT_014e9110._5_1_;
        cVar75 = (char)((ulong)uVar46 >> 0x30);
        cVar11 = (char)((ulong)uVar46 >> 0x38);
        bVar74 = cVar75 + DAT_014e9110._6_1_;
        bVar76 = cVar11 + DAT_014e9110._7_1_;
        bVar2 = DAT_014e8cb0;
        bVar56 = DAT_014e8cb0._1_1_;
        bVar5 = DAT_014e8cb0._2_1_;
        bVar6 = DAT_014e8cb0._3_1_;
        bVar7 = DAT_014e8cb0._4_1_;
        bVar8 = DAT_014e8cb0._5_1_;
        bVar9 = DAT_014e8cb0._6_1_;
        bVar10 = DAT_014e8cb0._7_1_;
        *(ulong *)(pbVar52 + (long)plVar48) =
             CONCAT17((~-((byte)((bVar76 < bVar10) * bVar10 | (bVar76 >= bVar10) * bVar76) == bVar76
                         ) & UNK_014ea367) + cVar11,
                      CONCAT16((~-((byte)((bVar74 < bVar9) * bVar9 | (bVar74 >= bVar9) * bVar74) ==
                                  bVar74) & UNK_014ea366) + cVar75,
                               CONCAT15((~-((byte)((bVar72 < bVar8) * bVar8 |
                                                  (bVar72 >= bVar8) * bVar72) == bVar72) &
                                        UNK_014ea365) + cVar73,
                                        CONCAT14((~-((byte)((bVar70 < bVar7) * bVar7 |
                                                           (bVar70 >= bVar7) * bVar70) == bVar70) &
                                                 UNK_014ea364) + cVar71,
                                                 CONCAT13((~-((byte)((bVar68 < bVar6) * bVar6 |
                                                                    (bVar68 >= bVar6) * bVar68) ==
                                                             bVar68) & UNK_014ea363) + cVar69,
                                                          CONCAT12((~-((byte)((bVar66 < bVar5) *
                                                                              bVar5 | (bVar66 >=
                                                                                      bVar5) * 
                                                  bVar66) == bVar66) & UNK_014ea362) + cVar67,
                                                  CONCAT11((~-((byte)((bVar64 < bVar56) * bVar56 |
                                                                     (bVar64 >= bVar56) * bVar64) ==
                                                              bVar64) & UNK_014ea361) + cVar65,
                                                           (~-((byte)((bVar63 < bVar2) * bVar2 |
                                                                     (bVar63 >= bVar2) * bVar63) ==
                                                              bVar63) & DAT_014ea360) + (char)uVar46
                                                          )))))));
        plVar48 = plVar48 + 1;
      } while (plVar60 != plVar48);
      if (plVar49 != plVar60) goto LAB_05cef1fc;
    }
    else {
      plVar48 = (long *)((ulong)plVar49 & 0xffffffffffffffe0);
      plVar60 = (long *)0x0;
      do {
        pbVar59 = pbVar52 + (long)plVar60;
        bVar12 = pbVar59[1];
        bVar13 = pbVar59[2];
        bVar14 = pbVar59[3];
        bVar15 = pbVar59[4];
        bVar16 = pbVar59[5];
        bVar17 = pbVar59[6];
        bVar18 = pbVar59[7];
        bVar19 = pbVar59[8];
        bVar20 = pbVar59[9];
        bVar21 = pbVar59[10];
        bVar22 = pbVar59[0xb];
        bVar23 = pbVar59[0xc];
        bVar24 = pbVar59[0xd];
        bVar25 = pbVar59[0xe];
        bVar26 = pbVar59[0xf];
        pbVar1 = pbVar52 + 0x10 + (long)plVar60;
        bVar27 = *pbVar1;
        bVar28 = pbVar1[1];
        bVar29 = pbVar1[2];
        bVar30 = pbVar1[3];
        bVar31 = pbVar1[4];
        bVar32 = pbVar1[5];
        bVar33 = pbVar1[6];
        bVar34 = pbVar1[7];
        bVar35 = pbVar1[8];
        bVar36 = pbVar1[9];
        bVar37 = pbVar1[10];
        bVar38 = pbVar1[0xb];
        bVar39 = pbVar1[0xc];
        bVar40 = pbVar1[0xd];
        bVar41 = pbVar1[0xe];
        bVar42 = pbVar1[0xf];
        bVar77 = *pbVar59 + DAT_014e86b0;
        bVar78 = bVar12 + DAT_014e86b0._1_1_;
        bVar79 = bVar13 + DAT_014e86b0._2_1_;
        bVar80 = bVar14 + DAT_014e86b0._3_1_;
        bVar81 = bVar15 + DAT_014e86b0._4_1_;
        bVar82 = bVar16 + DAT_014e86b0._5_1_;
        bVar83 = bVar17 + DAT_014e86b0._6_1_;
        bVar84 = bVar18 + DAT_014e86b0._7_1_;
        bVar85 = bVar19 + DAT_014e86b0._8_1_;
        bVar86 = bVar20 + DAT_014e86b0._9_1_;
        bVar87 = bVar21 + DAT_014e86b0._10_1_;
        bVar88 = bVar22 + DAT_014e86b0._11_1_;
        bVar89 = bVar23 + DAT_014e86b0._12_1_;
        bVar90 = bVar24 + DAT_014e86b0._13_1_;
        bVar91 = bVar25 + DAT_014e86b0._14_1_;
        bVar92 = bVar26 + DAT_014e86b0._15_1_;
        bVar93 = bVar27 + DAT_014e86b0;
        bVar94 = bVar28 + DAT_014e86b0._1_1_;
        bVar95 = bVar29 + DAT_014e86b0._2_1_;
        bVar96 = bVar30 + DAT_014e86b0._3_1_;
        bVar97 = bVar31 + DAT_014e86b0._4_1_;
        bVar98 = bVar32 + DAT_014e86b0._5_1_;
        bVar99 = bVar33 + DAT_014e86b0._6_1_;
        bVar100 = bVar34 + DAT_014e86b0._7_1_;
        bVar101 = bVar35 + DAT_014e86b0._8_1_;
        bVar102 = bVar36 + DAT_014e86b0._9_1_;
        bVar103 = bVar37 + DAT_014e86b0._10_1_;
        bVar104 = bVar38 + DAT_014e86b0._11_1_;
        bVar105 = bVar39 + DAT_014e86b0._12_1_;
        bVar106 = bVar40 + DAT_014e86b0._13_1_;
        bVar107 = bVar41 + DAT_014e86b0._14_1_;
        bVar108 = bVar42 + DAT_014e86b0._15_1_;
        bVar2 = DAT_014e4170;
        bVar56 = DAT_014e4170._1_1_;
        bVar5 = DAT_014e4170._2_1_;
        bVar6 = DAT_014e4170._3_1_;
        bVar7 = DAT_014e4170._4_1_;
        bVar8 = DAT_014e4170._5_1_;
        bVar9 = DAT_014e4170._6_1_;
        bVar10 = DAT_014e4170._7_1_;
        bVar63 = DAT_014e4170._8_1_;
        bVar64 = DAT_014e4170._9_1_;
        bVar66 = DAT_014e4170._10_1_;
        bVar68 = DAT_014e4170._11_1_;
        bVar70 = DAT_014e4170._12_1_;
        bVar72 = DAT_014e4170._13_1_;
        bVar74 = DAT_014e4170._14_1_;
        bVar76 = DAT_014e4170._15_1_;
        pbVar1 = pbVar52 + (long)plVar60;
        *pbVar1 = (-((byte)((bVar2 < bVar77) * bVar2 | (bVar2 >= bVar77) * bVar77) == bVar77) &
                  DAT_014ead50) + *pbVar59;
        pbVar1[1] = (-((byte)((bVar56 < bVar78) * bVar56 | (bVar56 >= bVar78) * bVar78) == bVar78) &
                    UNK_014ead51) + bVar12;
        pbVar1[2] = (-((byte)((bVar5 < bVar79) * bVar5 | (bVar5 >= bVar79) * bVar79) == bVar79) &
                    UNK_014ead52) + bVar13;
        pbVar1[3] = (-((byte)((bVar6 < bVar80) * bVar6 | (bVar6 >= bVar80) * bVar80) == bVar80) &
                    UNK_014ead53) + bVar14;
        pbVar1[4] = (-((byte)((bVar7 < bVar81) * bVar7 | (bVar7 >= bVar81) * bVar81) == bVar81) &
                    UNK_014ead54) + bVar15;
        pbVar1[5] = (-((byte)((bVar8 < bVar82) * bVar8 | (bVar8 >= bVar82) * bVar82) == bVar82) &
                    UNK_014ead55) + bVar16;
        pbVar1[6] = (-((byte)((bVar9 < bVar83) * bVar9 | (bVar9 >= bVar83) * bVar83) == bVar83) &
                    UNK_014ead56) + bVar17;
        pbVar1[7] = (-((byte)((bVar10 < bVar84) * bVar10 | (bVar10 >= bVar84) * bVar84) == bVar84) &
                    UNK_014ead57) + bVar18;
        pbVar1[8] = (-((byte)((bVar63 < bVar85) * bVar63 | (bVar63 >= bVar85) * bVar85) == bVar85) &
                    UNK_014ead58) + bVar19;
        pbVar1[9] = (-((byte)((bVar64 < bVar86) * bVar64 | (bVar64 >= bVar86) * bVar86) == bVar86) &
                    UNK_014ead59) + bVar20;
        pbVar1[10] = (-((byte)((bVar66 < bVar87) * bVar66 | (bVar66 >= bVar87) * bVar87) == bVar87)
                     & UNK_014ead5a) + bVar21;
        pbVar1[0xb] = (-((byte)((bVar68 < bVar88) * bVar68 | (bVar68 >= bVar88) * bVar88) == bVar88)
                      & UNK_014ead5b) + bVar22;
        pbVar1[0xc] = (-((byte)((bVar70 < bVar89) * bVar70 | (bVar70 >= bVar89) * bVar89) == bVar89)
                      & UNK_014ead5c) + bVar23;
        pbVar1[0xd] = (-((byte)((bVar72 < bVar90) * bVar72 | (bVar72 >= bVar90) * bVar90) == bVar90)
                      & UNK_014ead5d) + bVar24;
        pbVar1[0xe] = (-((byte)((bVar74 < bVar91) * bVar74 | (bVar74 >= bVar91) * bVar91) == bVar91)
                      & UNK_014ead5e) + bVar25;
        pbVar1[0xf] = (-((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) == bVar92)
                      & UNK_014ead5f) + bVar26;
        pbVar59 = pbVar52 + 0x10 + (long)plVar60;
        *pbVar59 = (-((byte)((bVar2 < bVar93) * bVar2 | (bVar2 >= bVar93) * bVar93) == bVar93) &
                   DAT_014ead50) + bVar27;
        pbVar59[1] = (-((byte)((bVar56 < bVar94) * bVar56 | (bVar56 >= bVar94) * bVar94) == bVar94)
                     & UNK_014ead51) + bVar28;
        pbVar59[2] = (-((byte)((bVar5 < bVar95) * bVar5 | (bVar5 >= bVar95) * bVar95) == bVar95) &
                     UNK_014ead52) + bVar29;
        pbVar59[3] = (-((byte)((bVar6 < bVar96) * bVar6 | (bVar6 >= bVar96) * bVar96) == bVar96) &
                     UNK_014ead53) + bVar30;
        pbVar59[4] = (-((byte)((bVar7 < bVar97) * bVar7 | (bVar7 >= bVar97) * bVar97) == bVar97) &
                     UNK_014ead54) + bVar31;
        pbVar59[5] = (-((byte)((bVar8 < bVar98) * bVar8 | (bVar8 >= bVar98) * bVar98) == bVar98) &
                     UNK_014ead55) + bVar32;
        pbVar59[6] = (-((byte)((bVar9 < bVar99) * bVar9 | (bVar9 >= bVar99) * bVar99) == bVar99) &
                     UNK_014ead56) + bVar33;
        pbVar59[7] = (-((byte)((bVar10 < bVar100) * bVar10 | (bVar10 >= bVar100) * bVar100) ==
                       bVar100) & UNK_014ead57) + bVar34;
        pbVar59[8] = (-((byte)((bVar63 < bVar101) * bVar63 | (bVar63 >= bVar101) * bVar101) ==
                       bVar101) & UNK_014ead58) + bVar35;
        pbVar59[9] = (-((byte)((bVar64 < bVar102) * bVar64 | (bVar64 >= bVar102) * bVar102) ==
                       bVar102) & UNK_014ead59) + bVar36;
        pbVar59[10] = (-((byte)((bVar66 < bVar103) * bVar66 | (bVar66 >= bVar103) * bVar103) ==
                        bVar103) & UNK_014ead5a) + bVar37;
        pbVar59[0xb] = (-((byte)((bVar68 < bVar104) * bVar68 | (bVar68 >= bVar104) * bVar104) ==
                         bVar104) & UNK_014ead5b) + bVar38;
        pbVar59[0xc] = (-((byte)((bVar70 < bVar105) * bVar70 | (bVar70 >= bVar105) * bVar105) ==
                         bVar105) & UNK_014ead5c) + bVar39;
        pbVar59[0xd] = (-((byte)((bVar72 < bVar106) * bVar72 | (bVar72 >= bVar106) * bVar106) ==
                         bVar106) & UNK_014ead5d) + bVar40;
        pbVar59[0xe] = (-((byte)((bVar74 < bVar107) * bVar74 | (bVar74 >= bVar107) * bVar107) ==
                         bVar107) & UNK_014ead5e) + bVar41;
        pbVar59[0xf] = (-((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) ==
                         bVar108) & UNK_014ead5f) + bVar42;
        plVar60 = plVar60 + 4;
      } while (plVar48 != plVar60);
      if (plVar49 != plVar48) {
        if (((ulong)plVar49 & 0x18) == 0) {
          pbVar59 = (byte *)((long)plVar48 + (long)pbVar52);
          goto LAB_05cef1fc;
        }
        goto LAB_05cef195;
      }
    }
    plVar48 = (long *)(ulong)((byte)uStack_d0 >> 1);
  }
  if (((ulong)uStack_d0 & 1) != 0) {
    plVar48 = plStack_c8;
    pbVar61 = pbStack_c0;
  }
  pcVar58 = (char *)((long)plVar48 + (long)pbVar61);
  plVar49 = plVar48;
  pbVar52 = pbVar61;
  while (((pcVar53 = pcVar58, 0 < (long)plVar49 &&
          (pcVar51 = (char *)func_0x0eee2ef0(pbVar52,0x3a,plVar49), pcVar51 != (char *)0x0)) &&
         (pcVar53 = pcVar51, *pcVar51 != ':'))) {
    pbVar52 = (byte *)(pcVar51 + 1);
    plVar49 = (long *)(pcVar58 + -(long)pbVar52);
  }
  plVar49 = (long *)(pcVar53 + -(long)pbVar61);
  if (plVar48 < pcVar53 + -(long)pbVar61) {
    plVar49 = plVar48;
  }
  if (pcVar53 == pcVar58) {
    plVar49 = plVar48;
  }
  if ((long *)0xfffffffffffffff7 < plVar49) {
LAB_05cef95b:
    plVar44 = (long *)func_0x04882e30();
    func_0x04894d10(auStack_108);
    uVar46 = func_0x04882e20(plVar44);
    if (((ulong)uStack_d0 & 1) != 0) {
      func_0x0412a280(pbStack_c0,(ulong)uStack_d0 & 0xfffffffffffffffe);
    }
    if (plVar44 != (long *)0x0) {
      (**(code **)(*plVar44 + 8))(plVar44);
    }
    func_0x0cc46730(&bStack_80);
    if (((ulong)pbStack_a8 & 1) != 0) {
      func_0x0412a280(puStack_98,(ulong)pbStack_a8 & 0xfffffffffffffffe);
    }
    func_0x0eee2d70(uVar46);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (plVar49 < (long *)0x17) {
    auStack_108[0] = (char)plVar49 * '\x02';
    plVar48 = (long *)((long)auStack_108 + 1);
    if (plVar49 != (long *)0x0) goto LAB_05cef30c;
  }
  else {
    uVar54 = 0x1a;
    if (((ulong)plVar49 | 7) != 0x17) {
      uVar54 = ((ulong)plVar49 | 7) + 1;
    }
    plVar48 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar54);
    if (plVar48 == (long *)0x0) {
      func_0x0eec74c0(uVar54,0);
    }
    auStack_108 = (undefined1  [8])(uVar54 | 1);
    uStack_100 = (byte *)plVar49;
    auStack_f8 = (undefined1  [8])plVar48;
LAB_05cef30c:
    memmove(plVar48,pbVar61,plVar49);
  }
  *(char *)((long)plVar48 + (long)plVar49) = '\0';
  func_0x05cf8990(param_1 + 0xe0,auStack_108,auStack_108);
  if (((ulong)auStack_108 & 1) != 0) {
    func_0x0412a280(auStack_f8,(ulong)auStack_108 & 0xfffffffffffffffe);
  }
  auStack_108 = (undefined1  [8])0x0;
  if (((ulong)uStack_d0 & 1) == 0) {
    uStack_100 = uStack_d0;
    auStack_f8 = (undefined1  [8])plStack_c8;
    pbStack_f0 = pbStack_c0;
  }
  else {
    func_0x0412e5e0(&uStack_100,pbStack_c0,plStack_c8);
  }
  plStack_e8 = (long *)0x0;
  if (((ulong)uStack_100 & 1) == 0) {
    if ((byte)uStack_100 >> 1 != 0) goto LAB_05cef3b3;
  }
  else if (auStack_f8 != (undefined1  [8])0x0) {
LAB_05cef3b3:
    pbVar52 = pbStack_f0;
    if (((ulong)uStack_100 & 1) == 0) {
      pbVar52 = (byte *)((long)&uStack_100 + 1);
    }
    if ((pbVar52 != (byte *)0x0) && (*pbVar52 != 0)) {
      pbVar61 = (byte *)0xcbf29ce484222325;
      uVar54 = func_0x0eee2e90(pbVar52);
      if (uVar54 != 0) {
        uVar45 = (ulong)((uint)uVar54 & 7);
        if (7 < uVar54) {
          uVar54 = uVar54 & 0xfffffffffffffff8;
          do {
            pbVar61 = (byte *)(((((((((long)pbVar61 * 0x100000001b3 ^ (ulong)*pbVar52) *
                                     0x100000001b3 ^ (ulong)pbVar52[1]) * 0x100000001b3 ^
                                   (ulong)pbVar52[2]) * 0x100000001b3 ^ (ulong)pbVar52[3]) *
                                  0x100000001b3 ^ (ulong)pbVar52[4]) * 0x100000001b3 ^
                                (ulong)pbVar52[5]) * 0x100000001b3 ^ (ulong)pbVar52[6]) *
                               0x100000001b3 ^ (ulong)pbVar52[7]);
            pbVar52 = pbVar52 + 8;
            uVar54 = uVar54 - 8;
          } while (uVar54 != 0);
        }
        if (uVar45 != 0) {
          uVar54 = 0;
          do {
            pbVar61 = (byte *)((long)pbVar61 * 0x100000001b3 ^ (ulong)pbVar52[uVar54]);
            uVar54 = uVar54 + 1;
          } while (uVar45 != uVar54);
        }
      }
      goto LAB_05cef4a9;
    }
  }
  pbVar61 = (byte *)0x0;
LAB_05cef4a9:
  auStack_108 = (undefined1  [8])pbVar61;
  pbStack_68 = auStack_108;
  lVar47 = func_0x05cf8b10(param_1,auStack_108,&UNK_01563a4f,&pbStack_68,&puStack_58);
  plVar49 = *(long **)(lVar47 + 0x48);
  *(long **)(lVar47 + 0x48) = plVar44;
  if (plVar49 != (long *)0x0) {
    (**(code **)(*plVar49 + 8))();
  }
  pbStack_68 = (byte *)auStack_108;
  lVar47 = func_0x05cf8dc0(param_1 + 0xf8,&pbStack_68);
  if ((*(byte *)(lVar47 + 0x18) & 1) != 0) {
    func_0x0412a280(*(undefined8 *)(lVar47 + 0x28),*(ulong *)(lVar47 + 0x18) & 0xfffffffffffffffe);
  }
  *(byte **)(lVar47 + 0x28) = pbStack_f0;
  *(byte **)(lVar47 + 0x18) = uStack_100;
  *(undefined1 (*) [8])(lVar47 + 0x20) = auStack_f8;
  uStack_100 = (byte *)((ulong)uStack_100 & 0xffffffffffff0000);
  *(undefined1 (*) [8])(lVar47 + 0x10) = auStack_108;
  *(undefined8 *)(lVar47 + 0x30) = 0;
  if (((ulong)uStack_d0 & 1) != 0) {
    func_0x0412a280(pbStack_c0,(ulong)uStack_d0 & 0xfffffffffffffffe);
  }
  func_0x0cc46730(&bStack_80);
  if (((ulong)pbStack_a8 & 1) != 0) {
    func_0x0412a280(puStack_98,(ulong)pbStack_a8 & 0xfffffffffffffffe);
  }
  func_0x0c6cd740(plVar44,0xf5a2e50);
  func_0x0c6cd240(plVar44,0xf6fe550,_DAT_0f6fe560);
  plVar44[0x21] = lStack_48;
  *(char *)(plVar44 + 0x26) = '\x01';
  bStack_80 = 0x2a;
  uStack_7f = (undefined7)_DAT_011ed572;
  uStack_78 = (undefined1)((ulong)_DAT_011ed572 >> 0x38);
  uStack_77 = (undefined5)_UNK_011ed57a;
  uStack_72 = 0x2e65;
  uStack_70 = 99;
  uStack_6f = 0x736e696168;
  uStack_6a = 0;
  pbVar52 = (byte *)(plVar44 + 0x22);
  if (pbVar52 != &bStack_80) {
    if ((*pbVar52 & 1) == 0) {
      plVar44[0x24] = CONCAT17(uStack_69,0x736e69616863);
      *(ulong *)pbVar52 = CONCAT71(uStack_7f,0x2a);
      plVar44[0x23] = CONCAT26(0x2e65,CONCAT51(uStack_77,uStack_78));
    }
    else {
      FUN_04885120(pbVar52,&uStack_7f,0x15);
    }
  }
  lVar47 = lRam000000000f7151e8;
  plVar44[0x27] = _DAT_0f7151e0;
  plVar44[0x28] = lVar47;
  *(byte *)((long)plVar44 + 0x135) = *(byte *)((long)plVar44 + 0x135) | 4;
  func_0x0c6cf060(plVar44,0xf70ba30);
  auStack_108 = (undefined1  [8])&UNK_0f40da60;
  uStack_100 = (byte *)CONCAT44(0x40a00000,(undefined4)uStack_100);
  _auStack_f8 = (undefined1  [16])0x0;
  plStack_e8 = (long *)0x0;
  uStack_100 = (byte *)CONCAT71(uStack_100._1_7_,1);
  pbVar52 = (byte *)(plVar44 + 5);
  pbStack_a8 = pbVar52;
  plStack_a0 = plVar44;
  func_0x0cc81a40(auStack_108,&pbStack_a8);
  puStack_58 = &UNK_0f40dd80;
  uStack_4c = 0x41f00000;
  uStack_50 = 1;
  pbStack_a8 = pbVar52;
  plStack_a0 = plVar44;
  func_0x0cc81a40(&puStack_58,&pbStack_a8);
  puVar55 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,5);
  if (puVar55 == (undefined4 *)0x0) {
    func_0x0eec74c0(5,0);
  }
  puStack_90 = (undefined4 *)((long)puVar55 + 5);
  *puVar55 = 0x20001;
  *(undefined1 *)(puVar55 + 1) = 0;
  pbStack_a8 = &UNK_0f4073f0;
  plStack_a0 = (long *)CONCAT71(plStack_a0._1_7_,1);
  uStack_d0 = pbVar52;
  plStack_c8 = plVar44;
  puStack_98 = puVar55;
  puStack_88 = puStack_90;
  func_0x0cc81a40(&pbStack_a8,&uStack_d0);
  puVar55 = (undefined4 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,4);
  if (puVar55 == (undefined4 *)0x0) {
    func_0x0eec74c0(4,0);
  }
  puStack_b8 = puVar55 + 1;
  *puVar55 = 0x1030200;
  uStack_d0 = &UNK_0f40db40;
  plStack_c8 = (long *)CONCAT53(plStack_c8._3_5_,0x20000);
  plStack_c8 = (long *)CONCAT62(plStack_c8._2_6_,1);
  pbStack_c0 = (byte *)puVar55;
  puStack_b0 = puStack_b8;
  pbStack_68 = pbVar52;
  plStack_60 = plVar44;
  func_0x0cc81a40(&uStack_d0,&pbStack_68);
  puStack_40 = &UNK_0f40dc30;
  uStack_38 = 0x101;
  pbStack_68 = pbVar52;
  plStack_60 = plVar44;
  func_0x0cc81a40(&puStack_40,&pbStack_68);
  uStack_d0 = &UNK_0f40db40;
  if (pbStack_c0 != (byte *)0x0) {
    puStack_b8 = (undefined4 *)pbStack_c0;
    func_0x0412a280(pbStack_c0,(long)puStack_b0 - (long)pbStack_c0);
  }
  pbStack_a8 = &UNK_0f4073f0;
  if (puStack_98 != (undefined4 *)0x0) {
    puStack_90 = puStack_98;
    func_0x0412a280(puStack_98,(long)puStack_88 - (long)puStack_98);
  }
  auStack_108 = (undefined1  [8])&UNK_0f40da60;
  auVar43 = auStack_f8;
  if (auStack_f8 != (undefined1  [8])0x0) {
    for (pbVar52 = pbStack_f0; auVar43 != (undefined1  [8])pbVar52;
        pbVar52 = (byte *)((long)pbVar52 + -0x18)) {
      *(undefined **)((long)pbVar52 + -0x18) = &UNK_0f3773c0;
      plVar44 = *(long **)((long)pbVar52 + -0x10);
      *(undefined8 *)((long)pbVar52 + -0x10) = 0;
      if (plVar44 != (long *)0x0) {
        (**(code **)(*plVar44 + 0x90))();
      }
    }
    pbStack_f0 = (byte *)auVar43;
    func_0x0412a280(auStack_f8,(long)plStack_e8 - (long)auStack_f8);
  }
  if ((bStack_80 & 1) != 0) {
    func_0x0412a280(CONCAT17(uStack_69,CONCAT16(uStack_6a,CONCAT51(uStack_6f,uStack_70))),
                    CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffe);
  }
  return;
}



/* ---- referenced strings ----
 * 0x11ed572  itemGroup.name.chains
 * 0x14ea360          
 */
