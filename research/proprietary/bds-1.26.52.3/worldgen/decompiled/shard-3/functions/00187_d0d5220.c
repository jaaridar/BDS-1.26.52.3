/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd1d5220 (ELF vaddr 0xd0d5220)
 * Label: caller-of-callee
 * Body:  [[0d1d5220, 0d1d5a07] [0d1d5a10, 0d1d5d00] [0d1d5d10, 0d1d5f50] [0d1d5f60, 0d1d6090] [0d1d60a0, 0d1d6220] [0d1d6230, 0d1d63a0] [0d1d63b0, 0d1d65d0] [0d1d65e0, 0d1d6a73] [0d1d6aaa, 0d1d6ace] [0d1d6b05, 0d1d6b13] [0d1d6b24, 0d1d6b59] [0d1d6bea, 0d1d6c5b]]
 * Ghidra: FUN_0d1d5220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_0d1d5220(ulong *param_1,long *param_2,byte *param_3)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
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
  undefined1 auVar35 [16];
  long lVar36;
  ulong *puVar37;
  char cVar38;
  undefined1 uVar39;
  int iVar40;
  ulong *puVar41;
  long *plVar42;
  undefined8 *puVar43;
  undefined *puVar44;
  ulong *puVar45;
  undefined8 uVar46;
  undefined *puVar47;
  char *pcVar48;
  ulong uVar49;
  byte bVar50;
  ulong *puVar51;
  undefined *puVar52;
  byte *pbVar53;
  char *pcVar54;
  ulong uVar55;
  long lVar56;
  bool bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar69;
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
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  undefined1 auStack_bb8 [16];
  ulong *puStack_ba8;
  ulong *puStack_ba0;
  byte bStack_b98;
  undefined7 uStack_b97;
  long lStack_b90;
  long lStack_b88;
  long lStack_b80;
  byte bStack_b78;
  byte bStack_b70;
  undefined1 auStack_b68 [16];
  undefined8 uStack_b58;
  ulong *puStack_b50;
  undefined1 auStack_b48 [24];
  undefined1 auStack_b30 [8];
  ulong *puStack_b28;
  ulong *puStack_b20;
  ulong *puStack_b18;
  undefined *puStack_b10;
  ulong *puStack_b08;
  undefined8 uStack_b00;
  ulong *puStack_af8;
  long lStack_af0;
  long lStack_ae8;
  long lStack_ae0;
  byte bStack_ad8;
  undefined8 uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  undefined8 uStack_aa8;
  undefined *puStack_aa0;
  undefined1 auStack_a98 [16];
  ulong *puStack_a88;
  undefined1 auStack_a80 [16];
  long lStack_a70;
  byte bStack_a68;
  byte bStack_a60;
  undefined1 auStack_a5f [15];
  ulong *puStack_a50;
  long *plStack_a48;
  byte *pbStack_a40;
  undefined1 uStack_a38;
  undefined4 uStack_a37;
  undefined4 uStack_a30;
  ulong *puStack_a28;
  ulong **ppuStack_a20;
  undefined8 uStack_a18;
  ulong *puStack_a10;
  ulong uStack_a08;
  undefined1 auStack_a00 [8];
  long *plStack_9f8;
  ulong *puStack_9f0;
  undefined *puStack_9e8;
  undefined1 auStack_9e0 [16];
  long *plStack_9d0;
  undefined8 uStack_5f0;
  undefined1 auStack_5e8 [1264];
  undefined1 auStack_f8 [40];
  char acStack_d0 [160];
  char cVar60;
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  
  *param_1 = 0;
  func_0x0412d550(0xf5522b8);
  LOCK();
  _DAT_0f552388 = _DAT_0f552388 + 1;
  UNLOCK();
  FUN_0412d610(0xf5522b8);
  plVar42 = _DAT_0f5523a0;
  auStack_9e0._0_8_ = _DAT_0f552398;
  if ((_DAT_0f552398 == (byte *)0x0) || (*_DAT_0f552398 != 1)) {
    uVar46 = func_0x0eee02f0(0xf5522b8);
    func_0x041084d6(&DAT_0f7b8fb8);
    if (((ulong)auStack_b30 & 1) != 0) {
      func_0x0412a280(puStack_b20,(ulong)auStack_b30 & 0xfffffffffffffffe);
    }
    func_0x0ee38090(&uStack_aa8);
    func_0x048f9be0(auStack_b48);
    if ((bStack_a60 & 1) != 0) {
      func_0x0412a280(puStack_a50,CONCAT71(auStack_a5f._0_7_,bStack_a60) & 0xfffffffffffffffe);
    }
    if ((uStack_ac8 & 1) != 0) {
      func_0x0412a280(uStack_ab8,uStack_ac8 & 0xfffffffffffffffe);
    }
    func_0x0d20be50(auStack_5e8);
    plVar42 = (long *)*puStack_b50;
    *puStack_b50 = 0;
    if (plVar42 != (long *)0x0) {
      (**(code **)(*plVar42 + 8))();
    }
    uVar46 = func_0x0eee2d70(uVar46);
    func_0x048c3ac0(&puStack_9f0);
    *param_1 = 0;
    func_0x0eee2d70(uVar46);
    pcVar3 = (code *)swi(3);
    puVar41 = (ulong *)(*pcVar3)();
    return puVar41;
  }
  bVar50 = 1;
  if (_DAT_0f5523a0 != (long *)0x0) {
    LOCK();
    _DAT_0f5523a0[1] = _DAT_0f5523a0[1] + 1;
    UNLOCK();
    bVar50 = *(byte *)auStack_9e0._0_8_;
  }
  plVar1 = _DAT_0f5523a8;
  puVar47 = (undefined *)(ulong)bVar50;
  puStack_9f0 = (ulong *)0xf5522b8;
  puStack_9e8 = (undefined *)CONCAT71(puStack_9e8._1_7_,1);
  auStack_9e0._8_8_ = plVar42;
  plStack_9d0 = _DAT_0f5523a8;
  if ((bVar50 & 1) == 0) {
    puVar47 = &UNK_0142bd41;
    cVar38 = func_0x0eeddcf0(&UNK_0123c452,&UNK_012072da,0xea,&UNK_0142bd41,&UNK_014ad871);
    if (cVar38 != '\0') {
      _DAT_00000000 = 0xdeadc0de;
    }
  }
  uVar39 = (**(code **)(*plVar1 + 0x690))(plVar1);
  func_0x0d207510(auStack_5e8,uVar39,0);
  auStack_9e0 = (undefined1  [16])0x0;
  if (plVar42 == (long *)0x0) {
LAB_0d1d5388:
  }
  else {
    LOCK();
    plVar1 = plVar42 + 1;
    lVar56 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar56 == 0) {
      (**(code **)(*plVar42 + 0x10))(plVar42);
      func_0x0412c2d0(plVar42);
    }
    uVar46 = auStack_9e0._8_8_;
    plStack_9d0 = (long *)0x0;
    if ((long *)auStack_9e0._8_8_ == (long *)0x0) goto LAB_0d1d5388;
    LOCK();
    plVar42 = (long *)(auStack_9e0._8_8_ + 8);
    lVar56 = *plVar42;
    *plVar42 = *plVar42 + -1;
    UNLOCK();
    if (lVar56 != 0) goto LAB_0d1d5388;
    (**(code **)(*(long *)auStack_9e0._8_8_ + 0x10))(auStack_9e0._8_8_);
    func_0x0412c2d0(uVar46);
  }
  if ((char)puStack_9e8 == '\x01') {
    func_0x0eee02f0(puStack_9f0);
  }
  if ((*param_3 & 1) == 0) {
    if (*param_3 >> 1 == 0) goto LAB_0d1d53ed;
LAB_0d1d53b0:
    puStack_b50 = param_1;
    puVar41 = (ulong *)(**(code **)(*param_2 + 0x50))(param_2);
    if ((*puVar41 & 1) == 0) {
      uStack_ab8 = puVar41[2];
      uStack_ac8 = *puVar41;
      uStack_ac0 = puVar41[1];
    }
    else {
      func_0x0412e5e0(&uStack_ac8,puVar41[2],puVar41[1]);
    }
    auStack_bb8._8_8_ = uStack_ac8 >> 1 & 0x7f;
    auStack_bb8._0_8_ = (long)&uStack_ac8 + 1U;
    if ((uStack_ac8 & 1) != 0) {
      auStack_bb8._8_8_ = uStack_ac0;
      auStack_bb8._0_8_ = uStack_ab8;
    }
    puStack_ba8 = (ulong *)&UNK_0120f12c;
    puStack_ba0 = (ulong *)0x7;
    plStack_a48 = param_2;
    func_0x049151c0(&puStack_9f0,auStack_bb8,2,0x2f);
    uVar55 = uStack_ac8 >> 1 & 0x7f;
    uVar49 = (long)&uStack_ac8 + 1U;
    if ((uStack_ac8 & 1) != 0) {
      uVar55 = uStack_ac0;
      uVar49 = uStack_ab8;
    }
    puVar41 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar41 == (ulong *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    puStack_ba8 = puVar41 + 4;
    *puVar41 = uVar49;
    puVar41[1] = uVar55;
    puVar41[2] = (ulong)&UNK_0120f12c;
    puVar41[3] = 7;
    auStack_bb8._8_8_ = puStack_ba8;
    auStack_bb8._0_8_ = puVar41;
    bVar57 = (*param_3 & 1) != 0;
    puVar51 = (ulong *)(param_3 + 1);
    if (bVar57) {
      puVar51 = *(ulong **)(param_3 + 0x10);
    }
    puVar47 = (undefined *)(ulong)(*param_3 >> 1);
    if (bVar57) {
      puVar47 = *(undefined **)(param_3 + 8);
    }
    if (puVar47 < (undefined *)0xfffffffffffffff8) {
      pcVar54 = (char *)((long)&uStack_aa8 + 1);
      if (puVar47 < (undefined *)0x17) {
        uStack_aa8 = (ulong *)CONCAT71(uStack_aa8._1_7_,(char)puVar47 * '\x02');
        pcVar48 = pcVar54;
        if (puVar47 != (undefined *)0x0) goto LAB_0d1d5661;
      }
      else {
        uVar49 = 0x1a;
        if (((ulong)puVar47 | 7) != 0x17) {
          uVar49 = ((ulong)puVar47 | 7) + 1;
        }
        pcVar48 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
        if (pcVar48 == (char *)0x0) {
          FUN_0eec74c0(uVar49,0);
        }
        auStack_a98._0_8_ = pcVar48;
        uStack_aa8 = (ulong *)(uVar49 | 1);
        puStack_aa0 = puVar47;
LAB_0d1d5661:
        func_0x0eee2f00(pcVar48,puVar51,puVar47);
      }
      pcVar48[(long)puVar47] = '\0';
      puVar44 = (undefined *)((ulong)uStack_aa8 >> 1 & 0x7f);
      if (((ulong)uStack_aa8 & 1) != 0) {
        puVar44 = puStack_aa0;
        pcVar54 = (char *)auStack_a98._0_8_;
      }
      if (puVar44 != (undefined *)0x0) {
        pcVar48 = pcVar54;
        if ((undefined *)0x7 < puVar44) {
          if (puVar44 < (undefined *)0x20) {
            puVar47 = (undefined *)0x0;
          }
          else {
            puVar47 = (undefined *)((ulong)puVar44 & 0xffffffffffffffe0);
            puVar52 = (undefined *)0x0;
            do {
              pcVar48 = pcVar54 + (long)puVar52;
              cVar38 = pcVar48[1];
              cVar60 = pcVar48[2];
              cVar62 = pcVar48[3];
              cVar64 = pcVar48[4];
              cVar66 = pcVar48[5];
              cVar68 = pcVar48[6];
              cVar70 = pcVar48[7];
              cVar11 = pcVar48[8];
              cVar12 = pcVar48[9];
              cVar13 = pcVar48[10];
              cVar14 = pcVar48[0xb];
              cVar15 = pcVar48[0xc];
              cVar16 = pcVar48[0xd];
              cVar17 = pcVar48[0xe];
              cVar18 = pcVar48[0xf];
              pcVar2 = pcVar54 + (long)(puVar52 + 0x10);
              cVar19 = *pcVar2;
              cVar20 = pcVar2[1];
              cVar21 = pcVar2[2];
              cVar22 = pcVar2[3];
              cVar23 = pcVar2[4];
              cVar24 = pcVar2[5];
              cVar25 = pcVar2[6];
              cVar26 = pcVar2[7];
              cVar27 = pcVar2[8];
              cVar28 = pcVar2[9];
              cVar29 = pcVar2[10];
              cVar30 = pcVar2[0xb];
              cVar31 = pcVar2[0xc];
              cVar32 = pcVar2[0xd];
              cVar33 = pcVar2[0xe];
              cVar34 = pcVar2[0xf];
              bVar72 = *pcVar48 + DAT_014e86b0;
              bVar73 = cVar38 + DAT_014e86b0._1_1_;
              bVar74 = cVar60 + DAT_014e86b0._2_1_;
              bVar75 = cVar62 + DAT_014e86b0._3_1_;
              bVar76 = cVar64 + DAT_014e86b0._4_1_;
              bVar77 = cVar66 + DAT_014e86b0._5_1_;
              bVar78 = cVar68 + DAT_014e86b0._6_1_;
              bVar79 = cVar70 + DAT_014e86b0._7_1_;
              bVar80 = cVar11 + DAT_014e86b0._8_1_;
              bVar81 = cVar12 + DAT_014e86b0._9_1_;
              bVar82 = cVar13 + DAT_014e86b0._10_1_;
              bVar83 = cVar14 + DAT_014e86b0._11_1_;
              bVar84 = cVar15 + DAT_014e86b0._12_1_;
              bVar85 = cVar16 + DAT_014e86b0._13_1_;
              bVar86 = cVar17 + DAT_014e86b0._14_1_;
              bVar87 = cVar18 + DAT_014e86b0._15_1_;
              bVar88 = cVar19 + DAT_014e86b0;
              bVar89 = cVar20 + DAT_014e86b0._1_1_;
              bVar90 = cVar21 + DAT_014e86b0._2_1_;
              bVar91 = cVar22 + DAT_014e86b0._3_1_;
              bVar92 = cVar23 + DAT_014e86b0._4_1_;
              bVar93 = cVar24 + DAT_014e86b0._5_1_;
              bVar94 = cVar25 + DAT_014e86b0._6_1_;
              bVar95 = cVar26 + DAT_014e86b0._7_1_;
              bVar96 = cVar27 + DAT_014e86b0._8_1_;
              bVar97 = cVar28 + DAT_014e86b0._9_1_;
              bVar98 = cVar29 + DAT_014e86b0._10_1_;
              bVar99 = cVar30 + DAT_014e86b0._11_1_;
              bVar100 = cVar31 + DAT_014e86b0._12_1_;
              bVar101 = cVar32 + DAT_014e86b0._13_1_;
              bVar102 = cVar33 + DAT_014e86b0._14_1_;
              bVar103 = cVar34 + DAT_014e86b0._15_1_;
              bVar50 = DAT_014e4170;
              bVar4 = DAT_014e4170._1_1_;
              bVar5 = DAT_014e4170._2_1_;
              bVar6 = DAT_014e4170._3_1_;
              bVar7 = DAT_014e4170._4_1_;
              bVar8 = DAT_014e4170._5_1_;
              bVar9 = DAT_014e4170._6_1_;
              bVar10 = DAT_014e4170._7_1_;
              bVar58 = DAT_014e4170._8_1_;
              bVar59 = DAT_014e4170._9_1_;
              bVar61 = DAT_014e4170._10_1_;
              bVar63 = DAT_014e4170._11_1_;
              bVar65 = DAT_014e4170._12_1_;
              bVar67 = DAT_014e4170._13_1_;
              bVar69 = DAT_014e4170._14_1_;
              bVar71 = DAT_014e4170._15_1_;
              pcVar2 = pcVar54 + (long)puVar52;
              *pcVar2 = (-((byte)((bVar50 < bVar72) * bVar50 | (bVar50 >= bVar72) * bVar72) ==
                          bVar72) & DAT_014ead50) + *pcVar48;
              pcVar2[1] = (-((byte)((bVar4 < bVar73) * bVar4 | (bVar4 >= bVar73) * bVar73) == bVar73
                            ) & UNK_014ead51) + cVar38;
              pcVar2[2] = (-((byte)((bVar5 < bVar74) * bVar5 | (bVar5 >= bVar74) * bVar74) == bVar74
                            ) & UNK_014ead52) + cVar60;
              pcVar2[3] = (-((byte)((bVar6 < bVar75) * bVar6 | (bVar6 >= bVar75) * bVar75) == bVar75
                            ) & UNK_014ead53) + cVar62;
              pcVar2[4] = (-((byte)((bVar7 < bVar76) * bVar7 | (bVar7 >= bVar76) * bVar76) == bVar76
                            ) & UNK_014ead54) + cVar64;
              pcVar2[5] = (-((byte)((bVar8 < bVar77) * bVar8 | (bVar8 >= bVar77) * bVar77) == bVar77
                            ) & UNK_014ead55) + cVar66;
              pcVar2[6] = (-((byte)((bVar9 < bVar78) * bVar9 | (bVar9 >= bVar78) * bVar78) == bVar78
                            ) & UNK_014ead56) + cVar68;
              pcVar2[7] = (-((byte)((bVar10 < bVar79) * bVar10 | (bVar10 >= bVar79) * bVar79) ==
                            bVar79) & UNK_014ead57) + cVar70;
              pcVar2[8] = (-((byte)((bVar58 < bVar80) * bVar58 | (bVar58 >= bVar80) * bVar80) ==
                            bVar80) & UNK_014ead58) + cVar11;
              pcVar2[9] = (-((byte)((bVar59 < bVar81) * bVar59 | (bVar59 >= bVar81) * bVar81) ==
                            bVar81) & UNK_014ead59) + cVar12;
              pcVar2[10] = (-((byte)((bVar61 < bVar82) * bVar61 | (bVar61 >= bVar82) * bVar82) ==
                             bVar82) & UNK_014ead5a) + cVar13;
              pcVar2[0xb] = (-((byte)((bVar63 < bVar83) * bVar63 | (bVar63 >= bVar83) * bVar83) ==
                              bVar83) & UNK_014ead5b) + cVar14;
              pcVar2[0xc] = (-((byte)((bVar65 < bVar84) * bVar65 | (bVar65 >= bVar84) * bVar84) ==
                              bVar84) & UNK_014ead5c) + cVar15;
              pcVar2[0xd] = (-((byte)((bVar67 < bVar85) * bVar67 | (bVar67 >= bVar85) * bVar85) ==
                              bVar85) & UNK_014ead5d) + cVar16;
              pcVar2[0xe] = (-((byte)((bVar69 < bVar86) * bVar69 | (bVar69 >= bVar86) * bVar86) ==
                              bVar86) & UNK_014ead5e) + cVar17;
              pcVar2[0xf] = (-((byte)((bVar71 < bVar87) * bVar71 | (bVar71 >= bVar87) * bVar87) ==
                              bVar87) & UNK_014ead5f) + cVar18;
              pcVar48 = pcVar54 + (long)(puVar52 + 0x10);
              *pcVar48 = (-((byte)((bVar50 < bVar88) * bVar50 | (bVar50 >= bVar88) * bVar88) ==
                           bVar88) & DAT_014ead50) + cVar19;
              pcVar48[1] = (-((byte)((bVar4 < bVar89) * bVar4 | (bVar4 >= bVar89) * bVar89) ==
                             bVar89) & UNK_014ead51) + cVar20;
              pcVar48[2] = (-((byte)((bVar5 < bVar90) * bVar5 | (bVar5 >= bVar90) * bVar90) ==
                             bVar90) & UNK_014ead52) + cVar21;
              pcVar48[3] = (-((byte)((bVar6 < bVar91) * bVar6 | (bVar6 >= bVar91) * bVar91) ==
                             bVar91) & UNK_014ead53) + cVar22;
              pcVar48[4] = (-((byte)((bVar7 < bVar92) * bVar7 | (bVar7 >= bVar92) * bVar92) ==
                             bVar92) & UNK_014ead54) + cVar23;
              pcVar48[5] = (-((byte)((bVar8 < bVar93) * bVar8 | (bVar8 >= bVar93) * bVar93) ==
                             bVar93) & UNK_014ead55) + cVar24;
              pcVar48[6] = (-((byte)((bVar9 < bVar94) * bVar9 | (bVar9 >= bVar94) * bVar94) ==
                             bVar94) & UNK_014ead56) + cVar25;
              pcVar48[7] = (-((byte)((bVar10 < bVar95) * bVar10 | (bVar10 >= bVar95) * bVar95) ==
                             bVar95) & UNK_014ead57) + cVar26;
              pcVar48[8] = (-((byte)((bVar58 < bVar96) * bVar58 | (bVar58 >= bVar96) * bVar96) ==
                             bVar96) & UNK_014ead58) + cVar27;
              pcVar48[9] = (-((byte)((bVar59 < bVar97) * bVar59 | (bVar59 >= bVar97) * bVar97) ==
                             bVar97) & UNK_014ead59) + cVar28;
              pcVar48[10] = (-((byte)((bVar61 < bVar98) * bVar61 | (bVar61 >= bVar98) * bVar98) ==
                              bVar98) & UNK_014ead5a) + cVar29;
              pcVar48[0xb] = (-((byte)((bVar63 < bVar99) * bVar63 | (bVar63 >= bVar99) * bVar99) ==
                               bVar99) & UNK_014ead5b) + cVar30;
              pcVar48[0xc] = (-((byte)((bVar65 < bVar100) * bVar65 | (bVar65 >= bVar100) * bVar100)
                               == bVar100) & UNK_014ead5c) + cVar31;
              pcVar48[0xd] = (-((byte)((bVar67 < bVar101) * bVar67 | (bVar67 >= bVar101) * bVar101)
                               == bVar101) & UNK_014ead5d) + cVar32;
              pcVar48[0xe] = (-((byte)((bVar69 < bVar102) * bVar69 | (bVar69 >= bVar102) * bVar102)
                               == bVar102) & UNK_014ead5e) + cVar33;
              pcVar48[0xf] = (-((byte)((bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103)
                               == bVar103) & UNK_014ead5f) + cVar34;
              puVar52 = puVar52 + 0x20;
            } while (puVar47 != puVar52);
            if (puVar44 == puVar47) goto LAB_0d1d585d;
            if (((ulong)puVar44 & 0x18) == 0) goto LAB_0d1d582d;
          }
          puVar52 = (undefined *)((ulong)puVar44 & 0xfffffffffffffff8);
          pcVar48 = pcVar54 + (long)puVar52;
          do {
            uVar46 = *(undefined8 *)(pcVar54 + (long)puVar47);
            bVar58 = (char)uVar46 + DAT_014e9110;
            cVar60 = (char)((ulong)uVar46 >> 8);
            bVar59 = cVar60 + DAT_014e9110._1_1_;
            cVar62 = (char)((ulong)uVar46 >> 0x10);
            bVar61 = cVar62 + DAT_014e9110._2_1_;
            cVar64 = (char)((ulong)uVar46 >> 0x18);
            bVar63 = cVar64 + DAT_014e9110._3_1_;
            cVar66 = (char)((ulong)uVar46 >> 0x20);
            bVar65 = cVar66 + DAT_014e9110._4_1_;
            cVar68 = (char)((ulong)uVar46 >> 0x28);
            bVar67 = cVar68 + DAT_014e9110._5_1_;
            cVar70 = (char)((ulong)uVar46 >> 0x30);
            cVar38 = (char)((ulong)uVar46 >> 0x38);
            bVar69 = cVar70 + DAT_014e9110._6_1_;
            bVar71 = cVar38 + DAT_014e9110._7_1_;
            bVar50 = DAT_014e8cb0;
            bVar4 = DAT_014e8cb0._1_1_;
            bVar5 = DAT_014e8cb0._2_1_;
            bVar6 = DAT_014e8cb0._3_1_;
            bVar7 = DAT_014e8cb0._4_1_;
            bVar8 = DAT_014e8cb0._5_1_;
            bVar9 = DAT_014e8cb0._6_1_;
            bVar10 = DAT_014e8cb0._7_1_;
            *(ulong *)(pcVar54 + (long)puVar47) =
                 CONCAT17((~-((byte)((bVar71 < bVar10) * bVar10 | (bVar71 >= bVar10) * bVar71) ==
                             bVar71) & UNK_014ea367) + cVar38,
                          CONCAT16((~-((byte)((bVar69 < bVar9) * bVar9 | (bVar69 >= bVar9) * bVar69)
                                      == bVar69) & UNK_014ea366) + cVar70,
                                   CONCAT15((~-((byte)((bVar67 < bVar8) * bVar8 |
                                                      (bVar67 >= bVar8) * bVar67) == bVar67) &
                                            UNK_014ea365) + cVar68,
                                            CONCAT14((~-((byte)((bVar65 < bVar7) * bVar7 |
                                                               (bVar65 >= bVar7) * bVar65) == bVar65
                                                        ) & UNK_014ea364) + cVar66,
                                                     CONCAT13((~-((byte)((bVar63 < bVar6) * bVar6 |
                                                                        (bVar63 >= bVar6) * bVar63)
                                                                 == bVar63) & UNK_014ea363) + cVar64
                                                              ,CONCAT12((~-((byte)((bVar61 < bVar5)
                                                                                   * bVar5 |
                                                                                  (bVar61 >= bVar5)
                                                                                  * bVar61) ==
                                                                           bVar61) & UNK_014ea362) +
                                                                        cVar62,CONCAT11((~-((byte)((
                                                  bVar59 < bVar4) * bVar4 |
                                                  (bVar59 >= bVar4) * bVar59) == bVar59) &
                                                  UNK_014ea361) + cVar60,
                                                  (~-((byte)((bVar58 < bVar50) * bVar50 |
                                                            (bVar58 >= bVar50) * bVar58) == bVar58)
                                                  & DAT_014ea360) + (char)uVar46)))))));
            puVar47 = puVar47 + 8;
          } while (puVar52 != puVar47);
          if (puVar44 == puVar52) goto LAB_0d1d585d;
        }
LAB_0d1d5833:
        do {
          cVar38 = *pcVar48;
          cVar60 = cVar38 + ' ';
          if (0x19 < (byte)(cVar38 + 0xbfU)) {
            cVar60 = cVar38;
          }
          *pcVar48 = cVar60;
          pcVar48 = pcVar48 + 1;
        } while (pcVar48 != pcVar54 + (long)puVar44);
      }
LAB_0d1d585d:
      func_0x08b72300(&bStack_a60,auStack_bb8,&uStack_aa8,&UNK_0143fcb4);
      if (((ulong)uStack_aa8 & 1) != 0) {
        func_0x0412a280(auStack_a98._0_8_,(ulong)uStack_aa8 & 0xfffffffffffffffe);
      }
      if (auStack_bb8._0_8_ != 0) {
        auStack_bb8._8_8_ = auStack_bb8._0_8_;
        func_0x0412a280(auStack_bb8._0_8_,(long)puStack_ba8 - auStack_bb8._0_8_);
      }
      auStack_b48._0_16_ = (undefined1  [16])0x0;
      puVar51 = (ulong *)auStack_a5f;
      puVar41 = puStack_a50;
      uVar49 = auStack_a5f._7_8_;
      if ((bStack_a60 & 1) == 0) {
        puVar41 = puVar51;
        uVar49 = (ulong)(bStack_a60 >> 1);
      }
      if (DAT_0f7b8fb8 == '\0') goto LAB_0d1d694d;
    }
    else {
      func_0x04882e30();
LAB_0d1d694d:
      iVar40 = func_0x04108328(&DAT_0f7b8fb8);
      if (iVar40 != 0) {
        func_0x0ee5ea20(&DAT_0f7b8f98);
        func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
        func_0x0410844d(&DAT_0f7b8fb8);
      }
    }
    puStack_b18 = puVar41;
    puStack_b10 = (undefined *)uVar49;
    (**(code **)(_DAT_0f7b8f98 + 0x10))(auStack_bb8,&DAT_0f7b8f98,&puStack_b18,auStack_b48,0x121,0);
    puVar37 = puStack_ba0;
    puVar45 = _UNK_0f459c10;
    uVar55 = _UNK_0f459c00;
    uVar49 = _DAT_0f459bf8;
    puVar41 = (ulong *)0xa18c50c1ac79b4c3;
    bStack_a68 = bStack_b78;
    if (bStack_b78 == 0) {
      uStack_aa8 = (ulong *)auStack_bb8._0_8_;
      puStack_aa0 = (undefined *)auStack_bb8._8_8_;
      auStack_a98._0_8_ = puStack_ba8;
      auStack_a98._0_8_ = puStack_ba8;
      auStack_a98._8_8_ = puStack_ba0;
      puStack_a88 = (ulong *)CONCAT71(uStack_b97,bStack_b98);
      auStack_a80._0_8_ = lStack_b90;
      auStack_a80._8_8_ = lStack_b88;
      lStack_a70 = lStack_b80;
      puStack_ba8 = _DAT_0f459c08;
      puStack_ba0 = _UNK_0f459c10;
      auStack_bb8._8_8_ = _UNK_0f459c00;
      auStack_bb8._0_8_ = _DAT_0f459bf8;
      bStack_b98 = 0;
      bStack_b70 = 0;
      if (puVar37 < puStack_a88) {
        puVar37[2] = (ulong)_DAT_0f459c08;
        puVar37[3] = (ulong)puVar45;
        *puVar37 = uVar49;
        puVar37[1] = uVar55;
        *(byte *)(puVar37 + 4) = 0;
        *(byte *)(puVar37 + 9) = 0;
        uStack_b00 = puVar37 + 10;
      }
      else {
        auStack_a98._8_8_ = func_0x0489d2c0(auStack_a98,auStack_bb8);
        uStack_b00 = (ulong *)auStack_a98._8_8_;
        if (((bStack_b70 & 1) != 0) && ((bStack_b98 & 1) != 0)) {
          func_0x0412a280(lStack_b88,CONCAT71(uStack_b97,bStack_b98) & 0xfffffffffffffffe);
          uStack_b00 = (ulong *)auStack_a98._8_8_;
        }
      }
      lStack_ae0 = lStack_a70;
      lStack_ae8 = auStack_a80._8_8_;
      lStack_af0 = auStack_a80._0_8_;
      puStack_af8 = puStack_a88;
      puStack_b08 = (ulong *)auStack_a98._0_8_;
      auStack_a98 = (undefined1  [16])0x0;
      puStack_a88 = (ulong *)0x0;
      auStack_a80 = (undefined1  [16])0x0;
      lStack_a70 = 0;
      bStack_ad8 = 0;
      bVar50 = 0;
      puStack_b18 = uStack_aa8;
      puStack_b10 = puStack_aa0;
    }
    else {
      uStack_a38 = 0;
      uStack_a37 = 0;
      uStack_a30 = 0;
      puStack_a28 = (ulong *)0x0;
      func_0x0ee76a70(auStack_bb8,auStack_b48._0_8_,&uStack_a38,0x18);
      lVar56 = lStack_b90;
      if (bStack_b78 == 0) {
        if (lStack_b90 != 0) {
          while (lVar56 != lStack_b88) {
            func_0x048b3e80(lStack_b88 + -0x40);
            lStack_b88 = lStack_b88 + -0x40;
          }
          lStack_b88 = lVar56;
          func_0x0412a280(lStack_b90,lStack_b80 - lStack_b90);
        }
        puVar45 = puStack_ba8;
        puVar41 = puStack_ba0;
        if (puStack_ba8 != (ulong *)0x0) {
          for (; puVar45 != puVar41; puVar41 = puVar41 + -10) {
            if (((byte)puVar41[-1] == 1) && ((puVar41[-6] & 1) != 0)) {
              func_0x0412a280(puVar41[-4],puVar41[-6] & 0xfffffffffffffffe);
            }
          }
          puStack_ba0 = puVar45;
          func_0x0412a280(puStack_ba8,CONCAT71(uStack_b97,bStack_b98) - (long)puStack_ba8);
        }
      }
      pbStack_a40 = (byte *)0x0;
      uVar46 = auStack_b48._0_8_;
      lVar56 = *(long *)(auStack_b48._0_8_ + 0x18);
      if (lVar56 == 0) {
        puVar47 = (undefined *)0x0;
      }
      else {
        puVar47 = (undefined *)(lVar56 + 8);
        func_0x0412d770(puVar47);
      }
      (**(code **)(*(long *)uVar46 + 0x80))(auStack_bb8,uVar46,&pbStack_a40);
      if (lVar56 != 0) {
        func_0x0412d790(puVar47);
      }
      puStack_b18 = (ulong *)0xa18c50c1ac79b4c3;
      puStack_b10 = &UNK_0140f690;
      puStack_b08 = (ulong *)0x1;
      uStack_b00 = (ulong *)CONCAT44(uStack_b00._4_4_,0x1f8);
      if (bStack_b78 == 0) {
        auStack_b68 = (undefined1  [16])0x0;
        uStack_b58 = 0;
        func_0x0eedeb80(2,0x2d,auStack_bb8,auStack_b68,&puStack_b18);
        if ((auStack_b68[0] & 1) != 0) {
          func_0x0412a280(uStack_b58,auStack_b68._0_8_ & 0xfffffffffffffffe);
        }
      }
      lVar56 = lStack_b90;
      if ((bStack_b78 & 1) == 0) {
        lVar36 = lStack_b88;
        if (lStack_b90 != 0) {
          while (lVar56 != lVar36) {
            func_0x048b3e80(lVar36 + -0x40);
            lVar36 = lVar36 + -0x40;
          }
          lStack_b88 = lVar56;
          func_0x0412a280(lStack_b90,lStack_b80 - lStack_b90);
        }
        puVar45 = puStack_ba8;
        puVar41 = puStack_ba0;
        if (puStack_ba8 != (ulong *)0x0) {
          for (; puVar45 != puVar41; puVar41 = puVar41 + -10) {
            if (((byte)puVar41[-1] == 1) && ((puVar41[-6] & 1) != 0)) {
              func_0x0412a280(puVar41[-4],puVar41[-6] & 0xfffffffffffffffe);
            }
          }
          puStack_ba0 = puVar45;
          func_0x0412a280(puStack_ba8,CONCAT71(uStack_b97,bStack_b98) - (long)puStack_ba8);
        }
      }
      puVar41 = puStack_a28;
      if ((byte *)((long)puStack_a28 - 1U) < pbStack_a40) {
        if (puStack_a28 < (ulong *)0xfffffffffffffff8) {
          if (puStack_a28 < (ulong *)0x17) {
            auStack_b30[0] = (char)puStack_a28 * '\x02';
            puVar45 = (ulong *)(auStack_b30 + 1);
          }
          else {
            uVar49 = 0x1a;
            if (((ulong)puStack_a28 | 7) != 0x17) {
              uVar49 = ((ulong)puStack_a28 | 7) + 1;
            }
            puVar45 = (ulong *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar49);
            if (puVar45 == (ulong *)0x0) {
              FUN_0eec74c0(uVar49,0);
            }
            auStack_b30 = (undefined1  [8])(uVar49 | 1);
            puStack_b28 = puVar41;
            puStack_b20 = puVar45;
          }
          func_0x0eee2dd0(puVar45,0,puVar41);
          *(byte *)((long)puVar45 + (long)puVar41) = 0;
          puVar45 = (ulong *)(auStack_b30 + 1);
          if (((ulong)auStack_b30 & 1) != 0) {
            puVar45 = puStack_b20;
          }
          func_0x0ee76a70(auStack_bb8,auStack_b48._0_8_,puVar45,puVar41);
          puVar47 = &UNK_0140f690;
          puVar41 = (ulong *)0xa18c50c1ac79b4c3;
          puStack_b18 = (ulong *)0xa18c50c1ac79b4c3;
          puStack_b10 = &UNK_0140f690;
          puStack_b08 = (ulong *)0x1;
          uStack_b00 = (ulong *)CONCAT44(uStack_b00._4_4_,0x1fd);
          if (bStack_b78 == 0) {
            auStack_b68 = (undefined1  [16])0x0;
            uStack_b58 = 0;
            func_0x0eedeb80(2,0x2d,auStack_bb8,auStack_b68,&puStack_b18);
            if ((auStack_b68[0] & 1) != 0) {
              func_0x0412a280(uStack_b58,auStack_b68._0_8_ & 0xfffffffffffffffe);
            }
          }
          lVar56 = lStack_b90;
          if ((bStack_b78 & 1) == 0) {
            lVar36 = lStack_b88;
            if (lStack_b90 != 0) {
              while (lVar56 != lVar36) {
                func_0x048b3e80(lVar36 + -0x40);
                lVar36 = lVar36 + -0x40;
              }
              lStack_b88 = lVar56;
              func_0x0412a280(lStack_b90,lStack_b80 - lStack_b90);
            }
            puVar37 = puStack_ba8;
            puVar45 = puStack_ba0;
            if (puStack_ba8 != (ulong *)0x0) {
              for (; puVar37 != puVar45; puVar45 = puVar45 + -10) {
                if (((byte)puVar45[-1] == 1) && ((puVar45[-6] & 1) != 0)) {
                  func_0x0412a280(puVar45[-4],puVar45[-6] & 0xfffffffffffffffe);
                }
              }
              puStack_ba0 = puVar37;
              func_0x0412a280(puStack_ba8,CONCAT71(uStack_b97,bStack_b98) - (long)puStack_ba8);
            }
          }
          func_0x0ee56810(auStack_bb8,auStack_b48);
          puStack_b18 = (ulong *)0xa18c50c1ac79b4c3;
          puStack_b10 = &UNK_0140f690;
          puStack_b08 = (ulong *)0x1;
          uStack_b00 = (ulong *)CONCAT44(uStack_b00._4_4_,0x1fe);
          if (bStack_b78 == 0) {
            auStack_b68 = (undefined1  [16])0x0;
            uStack_b58 = 0;
            func_0x0eedeb80(2,0x2d,auStack_bb8,auStack_b68,&puStack_b18);
            if ((auStack_b68[0] & 1) != 0) {
              func_0x0412a280(uStack_b58,auStack_b68._0_8_ & 0xfffffffffffffffe);
            }
          }
          lVar56 = lStack_b90;
          if ((bStack_b78 & 1) == 0) {
            lVar36 = lStack_b88;
            if (lStack_b90 != 0) {
              while (lVar56 != lVar36) {
                func_0x048b3e80(lVar36 + -0x40);
                lVar36 = lVar36 + -0x40;
              }
              lStack_b88 = lVar56;
              func_0x0412a280(lStack_b90,lStack_b80 - lStack_b90);
            }
            puVar37 = puStack_ba8;
            puVar45 = puStack_ba0;
            if (puStack_ba8 != (ulong *)0x0) {
              for (; puVar37 != puVar45; puVar45 = puVar45 + -10) {
                if (((byte)puVar45[-1] == 1) && ((puVar45[-6] & 1) != 0)) {
                  func_0x0412a280(puVar45[-4],puVar45[-6] & 0xfffffffffffffffe);
                }
              }
              puStack_ba0 = puVar37;
              func_0x0412a280(puStack_ba8,CONCAT71(uStack_b97,bStack_b98) - (long)puStack_ba8);
            }
          }
          if (DAT_0f7b8fb8 == '\0') goto LAB_0d1d699d;
        }
        else {
          func_0x04882e30();
LAB_0d1d699d:
          iVar40 = func_0x04108328(&DAT_0f7b8fb8);
          if (iVar40 != 0) {
            func_0x0ee5ea20(&DAT_0f7b8f98);
            func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
            func_0x0410844d(&DAT_0f7b8fb8);
            puVar41 = (ulong *)0xa18c50c1ac79b4c3;
            puVar47 = &UNK_0140f690;
          }
        }
        uStack_a08 = (ulong)(bStack_a60 >> 1);
        puStack_a10 = puVar51;
        if ((bStack_a60 & 1) != 0) {
          uStack_a08 = auStack_a5f._7_8_;
          puStack_a10 = puStack_a50;
        }
        (**(code **)(_DAT_0f7b8f98 + 0x20))(auStack_bb8,&DAT_0f7b8f98,&puStack_a10);
        puStack_b08 = (ulong *)0x1;
        uStack_b00 = (ulong *)CONCAT44(uStack_b00._4_4_,0x201);
        puStack_b18 = puVar41;
        puStack_b10 = puVar47;
        if (bStack_b78 == 0) {
          auStack_b68 = (undefined1  [16])0x0;
          uStack_b58 = 0;
          func_0x0eedeb80(2,0x2d,auStack_bb8,auStack_b68,&puStack_b18);
          if ((auStack_b68[0] & 1) != 0) {
            func_0x0412a280(uStack_b58,auStack_b68._0_8_ & 0xfffffffffffffffe);
          }
        }
        lVar56 = lStack_b90;
        if ((bStack_b78 & 1) == 0) {
          lVar36 = lStack_b88;
          if (lStack_b90 != 0) {
            while (lVar56 != lVar36) {
              func_0x048b3e80(lVar36 + -0x40);
              lVar36 = lVar36 + -0x40;
            }
            lStack_b88 = lVar56;
            func_0x0412a280(lStack_b90,lStack_b80 - lStack_b90);
          }
          puVar45 = puStack_ba8;
          puVar51 = puStack_ba0;
          if (puStack_ba8 != (ulong *)0x0) {
            for (; puVar45 != puVar51; puVar51 = puVar51 + -10) {
              if (((byte)puVar51[-1] == 1) && ((puVar51[-6] & 1) != 0)) {
                func_0x0412a280(puVar51[-4],puVar51[-6] & 0xfffffffffffffffe);
              }
            }
            puStack_ba0 = puVar45;
            func_0x0412a280(puStack_ba8,CONCAT71(uStack_b97,bStack_b98) - (long)puStack_ba8);
          }
        }
        if ((DAT_0f7b8fb8 == '\0') && (iVar40 = func_0x04108328(&DAT_0f7b8fb8), iVar40 != 0)) {
          func_0x0ee5ea20(&DAT_0f7b8f98);
          func_0x0eee2f40(&UNK_0ee5ebd0,&DAT_0f7b8f98,0xf53dab8);
          func_0x0410844d(&DAT_0f7b8fb8);
          puVar41 = (ulong *)0xa18c50c1ac79b4c3;
          puVar47 = &UNK_0140f690;
        }
        ppuStack_a20 = &puStack_9f0;
        uStack_a18 = uStack_5f0;
        (**(code **)(_DAT_0f7b8f98 + 0x90))(auStack_bb8,&DAT_0f7b8f98,&ppuStack_a20);
        puStack_b08 = (ulong *)0x1;
        uStack_b00 = (ulong *)CONCAT44(uStack_b00._4_4_,0x202);
        puStack_b18 = puVar41;
        puStack_b10 = puVar47;
        if (bStack_b78 == 0) {
          auStack_b68 = (undefined1  [16])0x0;
          uStack_b58 = 0;
          func_0x0eedeb80(2,0x2d,auStack_bb8,auStack_b68,&puStack_b18);
          if ((auStack_b68[0] & 1) != 0) {
            func_0x0412a280(uStack_b58,auStack_b68._0_8_ & 0xfffffffffffffffe);
          }
        }
        lVar56 = lStack_b90;
        if ((bStack_b78 & 1) == 0) {
          lVar36 = lStack_b88;
          if (lStack_b90 != 0) {
            while (lVar56 != lVar36) {
              func_0x048b3e80(lVar36 + -0x40);
              lVar36 = lVar36 + -0x40;
            }
            lStack_b88 = lVar56;
            func_0x0412a280(lStack_b90,lStack_b80 - lStack_b90);
          }
          puVar45 = puStack_ba8;
          puVar51 = puStack_ba0;
          if (puStack_ba8 != (ulong *)0x0) {
            for (; puVar45 != puVar51; puVar51 = puVar51 + -10) {
              if (((byte)puVar51[-1] == 1) && ((puVar51[-6] & 1) != 0)) {
                func_0x0412a280(puVar51[-4],puVar51[-6] & 0xfffffffffffffffe);
              }
            }
            puStack_ba0 = puVar45;
            func_0x0412a280(puStack_ba8,CONCAT71(uStack_b97,bStack_b98) - (long)puStack_ba8);
          }
        }
        puStack_ba8 = (ulong *)(auStack_b30 + 1);
        puStack_ba0 = (ulong *)((ulong)auStack_b30 >> 1 & 0x7f);
        if (((ulong)auStack_b30 & 1) != 0) {
          puStack_ba0 = puStack_b28;
          puStack_ba8 = puStack_b20;
        }
        auStack_bb8 = ZEXT816(0xef9fd98);
        func_0x0d6c71b0(auStack_b68,auStack_bb8);
        bStack_ad8 = 1;
        puStack_b18 = (ulong *)auStack_b68._0_8_;
        if (((ulong)auStack_b30 & 1) != 0) {
          func_0x0412a280(puStack_b20,(ulong)auStack_b30 & 0xfffffffffffffffe);
        }
      }
      else {
        bStack_ad8 = 1;
        puStack_b18 = (ulong *)0x0;
        puVar41 = (ulong *)0xa18c50c1ac79b4c3;
      }
      bVar50 = 1;
    }
    if (bStack_a68 == 0) {
      uVar46 = auStack_a80._0_8_;
      if (auStack_a80._0_8_ != 0) {
        lVar56 = auStack_a80._8_8_;
        while (uVar46 != lVar56) {
          lVar56 = lVar56 + -0x40;
          func_0x048b3e80(lVar56);
        }
        auStack_a80._8_8_ = uVar46;
        func_0x0412a280(auStack_a80._0_8_,lStack_a70 - auStack_a80._0_8_);
      }
      uVar46 = auStack_a98._0_8_;
      if (auStack_a98._0_8_ != 0) {
        for (lVar56 = auStack_a98._8_8_; uVar46 != lVar56; lVar56 = lVar56 + -0x50) {
          if ((*(char *)(lVar56 + -8) == '\x01') && ((*(byte *)(lVar56 + -0x30) & 1) != 0)) {
            func_0x0412a280(*(undefined8 *)(lVar56 + -0x20),
                            *(ulong *)(lVar56 + -0x30) & 0xfffffffffffffffe);
          }
        }
        auStack_a98._8_8_ = uVar46;
        func_0x0412a280(auStack_a98._0_8_,(long)puStack_a88 - auStack_a98._0_8_);
      }
    }
    if ((auStack_b48._0_8_ != 0) &&
       (func_0x0ee56810(auStack_bb8,auStack_b48), lVar56 = lStack_b90, bStack_b78 == 0)) {
      lVar36 = lStack_b88;
      if (lStack_b90 != 0) {
        while (lVar56 != lVar36) {
          func_0x048b3e80(lVar36 + -0x40);
          lVar36 = lVar36 + -0x40;
        }
        lStack_b88 = lVar56;
        func_0x0412a280(lStack_b90,lStack_b80 - lStack_b90);
      }
      puVar45 = puStack_ba8;
      puVar51 = puStack_ba0;
      if (puStack_ba8 != (ulong *)0x0) {
        for (; puVar45 != puVar51; puVar51 = puVar51 + -10) {
          if (((byte)puVar51[-1] == 1) && ((puVar51[-6] & 1) != 0)) {
            func_0x0412a280(puVar51[-4],puVar51[-6] & 0xfffffffffffffffe);
          }
        }
        puStack_ba0 = puVar45;
        func_0x0412a280(puStack_ba8,CONCAT71(uStack_b97,bStack_b98) - (long)puStack_ba8);
      }
    }
    uVar46 = auStack_b48._8_8_;
    auStack_b48._8_8_ = 0;
    if ((long *)uVar46 != (long *)0x0) {
      (**(code **)(*(long *)uVar46 + 8))();
    }
    uVar46 = auStack_b48._0_8_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = auStack_b48._8_8_;
    auStack_b48._0_16_ = auVar35 << 0x40;
    if ((long *)uVar46 != (long *)0x0) {
      (**(code **)(*(long *)uVar46 + 8))();
    }
    if ((bStack_a60 & 1) != 0) {
      func_0x0412a280(puStack_a50,CONCAT71(auStack_a5f._0_7_,bStack_a60) & 0xfffffffffffffffe);
    }
    puStack_9e8 = &UNK_0140f690;
    auStack_9e0._8_4_ = 0x20a;
    auStack_9e0._0_8_ = 1;
    puStack_9f0 = puVar41;
    if (bVar50 == 0) {
      auStack_bb8 = (undefined1  [16])0x0;
      puStack_ba8 = (ulong *)0x0;
      func_0x0eedeb80(2,0x2d,&puStack_b18,auStack_bb8,&puStack_9f0);
      bVar50 = bStack_ad8;
      if ((auStack_bb8[0] & 1) != 0) {
        func_0x0412a280(puStack_ba8,auStack_bb8._0_8_ & 0xfffffffffffffffe);
        bVar50 = bStack_ad8;
      }
    }
    param_2 = plStack_a48;
    lVar56 = lStack_af0;
    if ((bVar50 & 1) == 0) {
      if (lStack_af0 != 0) {
        while (lVar56 != lStack_ae8) {
          func_0x048b3e80(lStack_ae8 + -0x40);
          lStack_ae8 = lStack_ae8 + -0x40;
        }
        lStack_ae8 = lVar56;
        func_0x0412a280(lStack_af0,lStack_ae0 - lStack_af0);
      }
      puVar51 = puStack_b08;
      puVar41 = uStack_b00;
      if (puStack_b08 != (ulong *)0x0) {
        for (; puVar51 != puVar41; puVar41 = puVar41 + -10) {
          if (((byte)puVar41[-1] == 1) && ((puVar41[-6] & 1) != 0)) {
            func_0x0412a280(puVar41[-4],puVar41[-6] & 0xfffffffffffffffe);
          }
        }
        uStack_b00 = puVar51;
        func_0x0412a280(puStack_b08,(long)puStack_af8 - (long)puStack_b08);
      }
      plVar42 = (long *)*puStack_b50;
      *puStack_b50 = 0;
      param_1 = puStack_b50;
    }
    else {
      plVar42 = (long *)*puStack_b50;
      *puStack_b50 = (ulong)puStack_b18;
      param_1 = puStack_b50;
    }
    puStack_b50 = param_1;
    if (plVar42 != (long *)0x0) {
      (**(code **)(*plVar42 + 8))();
    }
    if ((uStack_ac8 & 1) != 0) {
      func_0x0412a280(uStack_ab8,uStack_ac8 & 0xfffffffffffffffe);
    }
LAB_0d1d6835:
    puVar43 = (undefined8 *)*param_1;
    if (puVar43 == (undefined8 *)0x0) goto LAB_0d1d68c9;
  }
  else {
    if (*(long *)(param_3 + 8) != 0) goto LAB_0d1d53b0;
LAB_0d1d53ed:
    cVar38 = (**(code **)(*param_2 + 0x38))(param_2,auStack_5e8);
    if (cVar38 == '\0') goto LAB_0d1d6835;
    pcVar54 = acStack_d0;
    lVar56 = func_0x0d227700(pcVar54,0xf71d5d8);
    if (lVar56 == 0) {
      puVar47 = (undefined *)func_0x0d227700(auStack_f8,0xf71d5d8);
      plVar42 = (long *)(puVar47 + 0x38);
      if (puVar47 == (undefined *)0x0) {
        plVar42 = (long *)0x0;
      }
      if ((int)plVar42[3] != 8) goto LAB_0d1d57f7;
LAB_0d1d5435:
      if (*(long *)(*plVar42 + 0x18) == 0) goto LAB_0d1d6835;
      lVar56 = func_0x0d227700(pcVar54,0xf71d5d8);
      if (lVar56 == 0) goto LAB_0d1d57fc;
      puVar43 = (undefined8 *)(lVar56 + 0x38);
      iVar40 = *(int *)(lVar56 + 0x50);
    }
    else {
      plVar42 = (long *)(lVar56 + 0x38);
      if (*(int *)(lVar56 + 0x50) == 8) goto LAB_0d1d5435;
LAB_0d1d57f7:
      func_0x04931450();
LAB_0d1d57fc:
      puVar47 = (undefined *)func_0x0d227700(auStack_f8,0xf71d5d8);
      puVar43 = (undefined8 *)(puVar47 + 0x38);
      if (puVar47 == (undefined *)0x0) {
        puVar43 = (undefined8 *)0x0;
      }
      iVar40 = *(int *)(puVar43 + 3);
    }
    if (iVar40 != 8) {
      puVar44 = (undefined *)func_0x04931450();
LAB_0d1d582d:
      pcVar48 = pcVar54 + (long)puVar47;
      goto LAB_0d1d5833;
    }
    uVar46 = *puVar43;
    puVar43 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (puVar43 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    *puVar43 = &UNK_0f47e0b0;
    *(undefined1 (*) [16])(puVar43 + 2) = (undefined1  [16])0x0;
    puVar43[1] = puVar43 + 2;
    func_0x0d6bd5f0(puVar43,uVar46);
    plVar42 = (long *)*param_1;
    *param_1 = (ulong)puVar43;
    if (plVar42 != (long *)0x0) {
      (**(code **)(*plVar42 + 8))();
      goto LAB_0d1d6835;
    }
  }
  bVar57 = (*param_3 & 1) != 0;
  pbVar53 = param_3 + 1;
  if (bVar57) {
    pbVar53 = *(byte **)(param_3 + 0x10);
  }
  uVar49 = (ulong)(*param_3 >> 1);
  if (bVar57) {
    uVar49 = *(ulong *)(param_3 + 8);
  }
  func_0x0d1d3090(&puStack_9f0,pbVar53,uVar49);
  func_0x0d21ed30(auStack_a00,param_2,&puStack_9f0,puVar43,8);
  if (plStack_9f8 != (long *)0x0) {
    LOCK();
    plVar42 = plStack_9f8 + 1;
    lVar56 = *plVar42;
    *plVar42 = *plVar42 + -1;
    UNLOCK();
    if (lVar56 == 0) {
      (**(code **)(*plStack_9f8 + 0x10))(plStack_9f8);
      func_0x0412c2d0(plStack_9f8);
    }
  }
  if (((ulong)puStack_9f0 & 1) != 0) {
    func_0x0412a280(auStack_9e0._0_8_,(ulong)puStack_9f0 & 0xfffffffffffffffe);
  }
LAB_0d1d68c9:
  func_0x0d20be50(auStack_5e8);
  return param_1;
}



/* ---- referenced strings ----
 * 0x14ea360          
 */
