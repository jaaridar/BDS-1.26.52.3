/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xbf0dc60 (ELF vaddr 0xbe0dc60)
 * Label: caller-of-callee
 * Body:  [[0bf0dc60, 0bf0dcec] [0bf0dcf0, 0bf0ddc6] [0bf0ddd0, 0bf0de42] [0bf0de50, 0bf0debc] [0bf0dec0, 0bf0df73] [0bf0df80, 0bf0e127] [0bf0e130, 0bf0e185] [0bf0e190, 0bf0e1be] [0bf0e1c0, 0bf0e1f6] [0bf0e200, 0bf0e22a] [0bf0e230, 0bf0e266] [0bf0e270, 0bf0e2a4] [0bf0e2b0, 0bf0e37a] [0bf0e380, 0bf0e409] [0bf0e410, 0bf0e488] [0bf0e4de, 0bf0e4e5] [0bf0e5b0, 0bf0eaee] [0bf0eb00, 0bf0eb3d]]
 * Ghidra: FUN_0bf0dc60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0bf0dc60(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  ulong *puVar5;
  long *plVar6;
  code *pcVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
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
  char cVar36;
  char cVar37;
  char cVar38;
  undefined7 *puVar39;
  ulong **ppuVar40;
  char cVar41;
  uint uVar42;
  int iVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  long lVar46;
  char *pcVar47;
  ulong *puVar48;
  byte bVar49;
  ulong uVar50;
  ulong *puVar51;
  long lVar52;
  ulong *puVar53;
  undefined **ppuVar54;
  char *pcVar55;
  ulong uVar56;
  short sVar57;
  ulong uVar58;
  ulong *puVar59;
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
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  char *pcStack_2c8;
  ulong uStack_2c0;
  byte bStack_2b8;
  undefined7 uStack_2b7;
  ulong uStack_2b0;
  undefined7 *puStack_2a8;
  byte bStack_2a0;
  undefined4 uStack_29f;
  undefined1 uStack_29b;
  undefined2 uStack_29a;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  long lStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  undefined1 auStack_238 [16];
  long *plStack_228;
  ulong **ppuStack_220;
  long *plStack_218;
  byte bStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined2 uStack_1f0;
  undefined *apuStack_1e8 [8];
  uint uStack_1a8;
  long *plStack_1a0;
  undefined1 auStack_198 [16];
  long lStack_188;
  long lStack_180;
  ulong *puStack_178;
  long lStack_170;
  long *plStack_168;
  ulong *puStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined2 uStack_140;
  undefined *apuStack_138 [8];
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined2 uStack_e0;
  undefined *apuStack_d8 [8];
  ulong uStack_98;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined *puStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cVar62;
  char cVar64;
  char cVar66;
  char cVar68;
  char cVar70;
  char cVar72;
  
  lStack_250 = 0xbf0dc7c;
  uVar44 = func_0x048648e0(param_1,param_3);
  lStack_250 = 0xbf0dc87;
  cVar41 = func_0x04864260(uVar44);
  if (cVar41 == '\0') {
    lStack_250 = 0xbf0dc97;
    cVar41 = func_0x04864270(uVar44);
    if (cVar41 != '\0') {
      lStack_250 = 0xbf0dcac;
      func_0x04865530(auStack_238,uVar44);
      lStack_250 = 0xbf0dcbc;
      func_0x048655b0(auStack_198,uVar44);
      plStack_1a0 = param_2;
      while( true ) {
        ppuVar54 = apuStack_d8;
        lStack_250 = 0xbf0dd0d;
        cVar41 = func_0x04862c80(auStack_238,auStack_198);
        if (cVar41 != '\0') break;
        lStack_250 = 0xbf0dd1f;
        uVar44 = func_0x04862b80(auStack_238);
        uStack_70 = 0;
        uStack_48 = 0;
        uStack_40 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_86 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_8e = 0;
        puStack_78 = &UNK_0f299f40;
        lStack_250 = 0xbf0dd6d;
        uVar45 = func_0x048648e0(uVar44,&UNK_0138e8dd);
        lStack_250 = 0xbf0dd7f;
        func_0x0bf0da90(uVar45,&uStack_98,0);
        lStack_250 = 0xbf0dd8e;
        uVar44 = func_0x048648e0(uVar44,&UNK_0123ca5a);
        lStack_250 = 0xbf0dd98;
        uVar42 = func_0x04863e00(uVar44,0);
        if ((uStack_98 & 1) == 0) {
          uStack_148 = CONCAT62(uStack_86,uStack_88);
          uStack_150 = CONCAT62(uStack_8e,uStack_90);
          uStack_158 = uStack_98;
        }
        else {
          lStack_250 = 0xbf0dded;
          func_0x0412e5e0(&uStack_158,CONCAT62(uStack_86,uStack_88),CONCAT62(uStack_8e,uStack_90));
        }
        uStack_140 = uStack_80;
        lStack_250 = 0xbf0de08;
        func_0x049d00c0(apuStack_138,&puStack_78);
        apuStack_138[0] = &UNK_0f299f40;
        if ((uStack_158 & 1) == 0) {
          uStack_e8 = uStack_148;
          uStack_f8 = uStack_158;
          uStack_f0 = uStack_150;
        }
        else {
          lStack_250 = 0xbf0de6d;
          func_0x0412e5e0(&uStack_f8,uStack_148,uStack_150);
        }
        uStack_e0 = uStack_140;
        lStack_250 = 0xbf0de88;
        func_0x049d00c0(ppuVar54,apuStack_138);
        apuStack_d8[0] = &UNK_0f299f40;
        if ((uStack_f8 & 1) == 0) {
          uStack_1f8 = uStack_e8;
          uStack_208 = uStack_f8;
          uStack_200 = uStack_f0;
        }
        else {
          lStack_250 = 0xbf0deda;
          func_0x0412e5e0(&uStack_208,uStack_e8,uStack_f0);
        }
        uStack_1f0 = uStack_e0;
        lStack_250 = 0xbf0def4;
        func_0x049d00c0(apuStack_1e8);
        apuStack_1e8[0] = &UNK_0f299f40;
        puVar53 = (ulong *)param_2[1];
        uStack_1a8 = uVar42;
        if (puVar53 < (ulong *)param_2[2]) {
          puVar53[2] = uStack_1f8;
          *puVar53 = uStack_208;
          puVar53[1] = uStack_200;
          uStack_208 = 0;
          uStack_200 = 0;
          uStack_1f8 = 0;
          *(undefined2 *)(puVar53 + 3) = uStack_1f0;
          lStack_250 = 0xbf0df51;
          func_0x049d00c0(puVar53 + 4,apuStack_1e8);
          puVar53[4] = (ulong)&UNK_0f299f40;
          *(uint *)(puVar53 + 0xc) = uStack_1a8;
          puVar53 = puVar53 + 0xd;
          param_2[1] = (long)puVar53;
        }
        else {
          lVar52 = (long)puVar53 - *param_2;
          uVar58 = (lVar52 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
          if (0x276276276276276 < uVar58) {
            lStack_250 = 0xbf0e46d;
            func_0x0bf2a610();
LAB_0bf0e46d:
            lStack_250 = 0xbf0e472;
            uVar44 = FUN_04882eb0();
            lStack_250 = 0xbf0e47f;
            func_0x04862b40(auStack_238);
            lStack_250 = 0xbf0e487;
            uVar45 = func_0x0eee2d70(uVar44);
            lStack_250 = 0xbf0e5ba;
            func_0x0bf2a560(&uStack_208);
            lStack_250 = 0xbf0e5c7;
            func_0x049c2380(&uStack_f8);
            lStack_250 = 0xbf0e5d4;
            func_0x049c2380(&uStack_158);
            lStack_250 = 0xbf0e5e1;
            func_0x049c2380(&uStack_98);
            lStack_250 = 0xbf0e5ee;
            func_0x04862b40(auStack_198);
            lStack_250 = 0xbf0e5f8;
            func_0x04862b40(auStack_238);
            lStack_250 = 0xbf0e600;
            uVar44 = uVar45;
            func_0x0eee2d70();
            uStack_278 = 0x276276276276276;
            uStack_288 = uVar44;
            plStack_270 = param_2;
            ppuStack_268 = apuStack_138;
            uStack_260 = uVar45;
            uStack_258 = (ulong)uVar42;
            lStack_250 = lVar52;
            uVar44 = func_0x048648e0();
            bStack_2a0 = 8;
            uStack_29f = 0x666c6573;
            uStack_29b = 0;
            func_0x04863cb0(&bStack_2b8,uVar44,&bStack_2a0);
            uVar58 = (ulong)(bStack_2b8 >> 1);
            puVar39 = &uStack_2b7;
            if ((bStack_2b8 & 1) != 0) {
              uVar58 = uStack_2b0;
              puVar39 = puStack_2a8;
            }
            if (0xfffffffffffffff7 < uVar58) {
              uVar44 = func_0x04882e30();
              while ((bStack_2a0 & 1) == 0) {
                func_0x0eee2d70(uVar44);
                func_0x0412a280(puStack_2a8,CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
              }
              func_0x0412a280(uStack_290,
                              CONCAT26(uStack_29a,
                                       CONCAT15(uStack_29b,CONCAT41(uStack_29f,bStack_2a0))) &
                              0xfffffffffffffffe);
              func_0x0eee2d70(uVar44);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar3 = (char *)((long)&uStack_2d8 + 1);
            ppuStack_280 = ppuVar54;
            if (uVar58 < 0x17) {
              uStack_2d8 = CONCAT71(uStack_2d8._1_7_,(char)uVar58 * '\x02');
              pcVar47 = pcVar3;
              if (uVar58 != 0) goto LAB_0bf0e6e1;
            }
            else {
              uVar50 = 0x1a;
              if ((uVar58 | 7) != 0x17) {
                uVar50 = (uVar58 | 7) + 1;
              }
              pcVar47 = (char *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar50);
              if (pcVar47 == (char *)0x0) {
                func_0x0eec74c0(uVar50,0);
              }
              uStack_2d8 = uVar50 | 1;
              uStack_2d0 = uVar58;
              pcStack_2c8 = pcVar47;
LAB_0bf0e6e1:
              func_0x0eee2f00(pcVar47,puVar39,uVar58);
            }
            pcVar47[uVar58] = '\0';
            uVar50 = (ulong)((byte)uStack_2d8 >> 1);
            uVar58 = uStack_2d0;
            pcVar47 = pcStack_2c8;
            if ((uStack_2d8 & 1) == 0) {
              uVar58 = uVar50;
              pcVar47 = pcVar3;
            }
            if (uVar58 == 0) goto LAB_0bf0e866;
            pcVar55 = pcVar47;
            if (uVar58 < 8) goto LAB_0bf0e82c;
            if (uVar58 < 0x20) {
              uVar50 = 0;
              goto LAB_0bf0e7c5;
            }
            uVar50 = uVar58 & 0xffffffffffffffe0;
            uVar56 = 0;
            do {
              pcVar55 = pcVar47 + uVar56;
              cVar41 = pcVar55[1];
              cVar62 = pcVar55[2];
              cVar64 = pcVar55[3];
              cVar66 = pcVar55[4];
              cVar68 = pcVar55[5];
              cVar70 = pcVar55[6];
              cVar72 = pcVar55[7];
              cVar15 = pcVar55[8];
              cVar16 = pcVar55[9];
              cVar17 = pcVar55[10];
              cVar18 = pcVar55[0xb];
              cVar19 = pcVar55[0xc];
              cVar20 = pcVar55[0xd];
              cVar21 = pcVar55[0xe];
              cVar22 = pcVar55[0xf];
              pcVar4 = pcVar47 + uVar56 + 0x10;
              cVar23 = *pcVar4;
              cVar24 = pcVar4[1];
              cVar25 = pcVar4[2];
              cVar26 = pcVar4[3];
              cVar27 = pcVar4[4];
              cVar28 = pcVar4[5];
              cVar29 = pcVar4[6];
              cVar30 = pcVar4[7];
              cVar31 = pcVar4[8];
              cVar32 = pcVar4[9];
              cVar33 = pcVar4[10];
              cVar34 = pcVar4[0xb];
              cVar35 = pcVar4[0xc];
              cVar36 = pcVar4[0xd];
              cVar37 = pcVar4[0xe];
              cVar38 = pcVar4[0xf];
              bVar74 = *pcVar55 + DAT_014e2cf0;
              bVar75 = cVar41 + DAT_014e2cf0._1_1_;
              bVar76 = cVar62 + DAT_014e2cf0._2_1_;
              bVar77 = cVar64 + DAT_014e2cf0._3_1_;
              bVar78 = cVar66 + DAT_014e2cf0._4_1_;
              bVar79 = cVar68 + DAT_014e2cf0._5_1_;
              bVar80 = cVar70 + DAT_014e2cf0._6_1_;
              bVar81 = cVar72 + DAT_014e2cf0._7_1_;
              bVar82 = cVar15 + DAT_014e2cf0._8_1_;
              bVar83 = cVar16 + DAT_014e2cf0._9_1_;
              bVar84 = cVar17 + DAT_014e2cf0._10_1_;
              bVar85 = cVar18 + DAT_014e2cf0._11_1_;
              bVar86 = cVar19 + DAT_014e2cf0._12_1_;
              bVar87 = cVar20 + DAT_014e2cf0._13_1_;
              bVar88 = cVar21 + DAT_014e2cf0._14_1_;
              bVar89 = cVar22 + DAT_014e2cf0._15_1_;
              bVar90 = cVar23 + DAT_014e2cf0;
              bVar91 = cVar24 + DAT_014e2cf0._1_1_;
              bVar92 = cVar25 + DAT_014e2cf0._2_1_;
              bVar93 = cVar26 + DAT_014e2cf0._3_1_;
              bVar94 = cVar27 + DAT_014e2cf0._4_1_;
              bVar95 = cVar28 + DAT_014e2cf0._5_1_;
              bVar96 = cVar29 + DAT_014e2cf0._6_1_;
              bVar97 = cVar30 + DAT_014e2cf0._7_1_;
              bVar98 = cVar31 + DAT_014e2cf0._8_1_;
              bVar99 = cVar32 + DAT_014e2cf0._9_1_;
              bVar100 = cVar33 + DAT_014e2cf0._10_1_;
              bVar101 = cVar34 + DAT_014e2cf0._11_1_;
              bVar102 = cVar35 + DAT_014e2cf0._12_1_;
              bVar103 = cVar36 + DAT_014e2cf0._13_1_;
              bVar104 = cVar37 + DAT_014e2cf0._14_1_;
              bVar105 = cVar38 + DAT_014e2cf0._15_1_;
              bVar49 = DAT_014e4170;
              bVar8 = DAT_014e4170._1_1_;
              bVar9 = DAT_014e4170._2_1_;
              bVar10 = DAT_014e4170._3_1_;
              bVar11 = DAT_014e4170._4_1_;
              bVar12 = DAT_014e4170._5_1_;
              bVar13 = DAT_014e4170._6_1_;
              bVar14 = DAT_014e4170._7_1_;
              bVar60 = DAT_014e4170._8_1_;
              bVar61 = DAT_014e4170._9_1_;
              bVar63 = DAT_014e4170._10_1_;
              bVar65 = DAT_014e4170._11_1_;
              bVar67 = DAT_014e4170._12_1_;
              bVar69 = DAT_014e4170._13_1_;
              bVar71 = DAT_014e4170._14_1_;
              bVar73 = DAT_014e4170._15_1_;
              pcVar4 = pcVar47 + uVar56;
              *pcVar4 = (-((byte)((bVar49 < bVar74) * bVar49 | (bVar49 >= bVar74) * bVar74) ==
                          bVar74) & DAT_014e9b80) + *pcVar55;
              pcVar4[1] = (-((byte)((bVar8 < bVar75) * bVar8 | (bVar8 >= bVar75) * bVar75) == bVar75
                            ) & UNK_014e9b81) + cVar41;
              pcVar4[2] = (-((byte)((bVar9 < bVar76) * bVar9 | (bVar9 >= bVar76) * bVar76) == bVar76
                            ) & UNK_014e9b82) + cVar62;
              pcVar4[3] = (-((byte)((bVar10 < bVar77) * bVar10 | (bVar10 >= bVar77) * bVar77) ==
                            bVar77) & UNK_014e9b83) + cVar64;
              pcVar4[4] = (-((byte)((bVar11 < bVar78) * bVar11 | (bVar11 >= bVar78) * bVar78) ==
                            bVar78) & UNK_014e9b84) + cVar66;
              pcVar4[5] = (-((byte)((bVar12 < bVar79) * bVar12 | (bVar12 >= bVar79) * bVar79) ==
                            bVar79) & UNK_014e9b85) + cVar68;
              pcVar4[6] = (-((byte)((bVar13 < bVar80) * bVar13 | (bVar13 >= bVar80) * bVar80) ==
                            bVar80) & UNK_014e9b86) + cVar70;
              pcVar4[7] = (-((byte)((bVar14 < bVar81) * bVar14 | (bVar14 >= bVar81) * bVar81) ==
                            bVar81) & UNK_014e9b87) + cVar72;
              pcVar4[8] = (-((byte)((bVar60 < bVar82) * bVar60 | (bVar60 >= bVar82) * bVar82) ==
                            bVar82) & UNK_014e9b88) + cVar15;
              pcVar4[9] = (-((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) ==
                            bVar83) & UNK_014e9b89) + cVar16;
              pcVar4[10] = (-((byte)((bVar63 < bVar84) * bVar63 | (bVar63 >= bVar84) * bVar84) ==
                             bVar84) & UNK_014e9b8a) + cVar17;
              pcVar4[0xb] = (-((byte)((bVar65 < bVar85) * bVar65 | (bVar65 >= bVar85) * bVar85) ==
                              bVar85) & UNK_014e9b8b) + cVar18;
              pcVar4[0xc] = (-((byte)((bVar67 < bVar86) * bVar67 | (bVar67 >= bVar86) * bVar86) ==
                              bVar86) & UNK_014e9b8c) + cVar19;
              pcVar4[0xd] = (-((byte)((bVar69 < bVar87) * bVar69 | (bVar69 >= bVar87) * bVar87) ==
                              bVar87) & UNK_014e9b8d) + cVar20;
              pcVar4[0xe] = (-((byte)((bVar71 < bVar88) * bVar71 | (bVar71 >= bVar88) * bVar88) ==
                              bVar88) & UNK_014e9b8e) + cVar21;
              pcVar4[0xf] = (-((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) ==
                              bVar89) & UNK_014e9b8f) + cVar22;
              pcVar55 = pcVar47 + uVar56 + 0x10;
              *pcVar55 = (-((byte)((bVar49 < bVar90) * bVar49 | (bVar49 >= bVar90) * bVar90) ==
                           bVar90) & DAT_014e9b80) + cVar23;
              pcVar55[1] = (-((byte)((bVar8 < bVar91) * bVar8 | (bVar8 >= bVar91) * bVar91) ==
                             bVar91) & UNK_014e9b81) + cVar24;
              pcVar55[2] = (-((byte)((bVar9 < bVar92) * bVar9 | (bVar9 >= bVar92) * bVar92) ==
                             bVar92) & UNK_014e9b82) + cVar25;
              pcVar55[3] = (-((byte)((bVar10 < bVar93) * bVar10 | (bVar10 >= bVar93) * bVar93) ==
                             bVar93) & UNK_014e9b83) + cVar26;
              pcVar55[4] = (-((byte)((bVar11 < bVar94) * bVar11 | (bVar11 >= bVar94) * bVar94) ==
                             bVar94) & UNK_014e9b84) + cVar27;
              pcVar55[5] = (-((byte)((bVar12 < bVar95) * bVar12 | (bVar12 >= bVar95) * bVar95) ==
                             bVar95) & UNK_014e9b85) + cVar28;
              pcVar55[6] = (-((byte)((bVar13 < bVar96) * bVar13 | (bVar13 >= bVar96) * bVar96) ==
                             bVar96) & UNK_014e9b86) + cVar29;
              pcVar55[7] = (-((byte)((bVar14 < bVar97) * bVar14 | (bVar14 >= bVar97) * bVar97) ==
                             bVar97) & UNK_014e9b87) + cVar30;
              pcVar55[8] = (-((byte)((bVar60 < bVar98) * bVar60 | (bVar60 >= bVar98) * bVar98) ==
                             bVar98) & UNK_014e9b88) + cVar31;
              pcVar55[9] = (-((byte)((bVar61 < bVar99) * bVar61 | (bVar61 >= bVar99) * bVar99) ==
                             bVar99) & UNK_014e9b89) + cVar32;
              pcVar55[10] = (-((byte)((bVar63 < bVar100) * bVar63 | (bVar63 >= bVar100) * bVar100)
                              == bVar100) & UNK_014e9b8a) + cVar33;
              pcVar55[0xb] = (-((byte)((bVar65 < bVar101) * bVar65 | (bVar65 >= bVar101) * bVar101)
                               == bVar101) & UNK_014e9b8b) + cVar34;
              pcVar55[0xc] = (-((byte)((bVar67 < bVar102) * bVar67 | (bVar67 >= bVar102) * bVar102)
                               == bVar102) & UNK_014e9b8c) + cVar35;
              pcVar55[0xd] = (-((byte)((bVar69 < bVar103) * bVar69 | (bVar69 >= bVar103) * bVar103)
                               == bVar103) & UNK_014e9b8d) + cVar36;
              pcVar55[0xe] = (-((byte)((bVar71 < bVar104) * bVar71 | (bVar71 >= bVar104) * bVar104)
                               == bVar104) & UNK_014e9b8e) + cVar37;
              pcVar55[0xf] = (-((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105)
                               == bVar105) & UNK_014e9b8f) + cVar38;
              uVar56 = uVar56 + 0x20;
            } while (uVar50 != uVar56);
            if (uVar58 != uVar50) {
              if ((uVar58 & 0x18) == 0) {
                pcVar55 = pcVar47 + uVar50;
              }
              else {
LAB_0bf0e7c5:
                uVar56 = uVar58 & 0xfffffffffffffff8;
                pcVar55 = pcVar47 + uVar56;
                do {
                  uVar44 = *(undefined8 *)(pcVar47 + uVar50);
                  bVar60 = (char)uVar44 + DAT_014e4180;
                  cVar62 = (char)((ulong)uVar44 >> 8);
                  bVar61 = cVar62 + DAT_014e4180._1_1_;
                  cVar64 = (char)((ulong)uVar44 >> 0x10);
                  bVar63 = cVar64 + DAT_014e4180._2_1_;
                  cVar66 = (char)((ulong)uVar44 >> 0x18);
                  bVar65 = cVar66 + DAT_014e4180._3_1_;
                  cVar68 = (char)((ulong)uVar44 >> 0x20);
                  bVar67 = cVar68 + DAT_014e4180._4_1_;
                  cVar70 = (char)((ulong)uVar44 >> 0x28);
                  bVar69 = cVar70 + DAT_014e4180._5_1_;
                  cVar72 = (char)((ulong)uVar44 >> 0x30);
                  cVar41 = (char)((ulong)uVar44 >> 0x38);
                  bVar71 = cVar72 + DAT_014e4180._6_1_;
                  bVar73 = cVar41 + DAT_014e4180._7_1_;
                  bVar49 = DAT_014e8cb0;
                  bVar8 = DAT_014e8cb0._1_1_;
                  bVar9 = DAT_014e8cb0._2_1_;
                  bVar10 = DAT_014e8cb0._3_1_;
                  bVar11 = DAT_014e8cb0._4_1_;
                  bVar12 = DAT_014e8cb0._5_1_;
                  bVar13 = DAT_014e8cb0._6_1_;
                  bVar14 = DAT_014e8cb0._7_1_;
                  *(ulong *)(pcVar47 + uVar50) =
                       CONCAT17((~-((byte)((bVar73 < bVar14) * bVar14 | (bVar73 >= bVar14) * bVar73)
                                   == bVar73) & UNK_014e2c87) + cVar41,
                                CONCAT16((~-((byte)((bVar71 < bVar13) * bVar13 |
                                                   (bVar71 >= bVar13) * bVar71) == bVar71) &
                                         UNK_014e2c86) + cVar72,
                                         CONCAT15((~-((byte)((bVar69 < bVar12) * bVar12 |
                                                            (bVar69 >= bVar12) * bVar69) == bVar69)
                                                  & UNK_014e2c85) + cVar70,
                                                  CONCAT14((~-((byte)((bVar67 < bVar11) * bVar11 |
                                                                     (bVar67 >= bVar11) * bVar67) ==
                                                              bVar67) & UNK_014e2c84) + cVar68,
                                                           CONCAT13((~-((byte)((bVar65 < bVar10) *
                                                                               bVar10 | (bVar65 >=
                                                                                        bVar10) * 
                                                  bVar65) == bVar65) & UNK_014e2c83) + cVar66,
                                                  CONCAT12((~-((byte)((bVar63 < bVar9) * bVar9 |
                                                                     (bVar63 >= bVar9) * bVar63) ==
                                                              bVar63) & UNK_014e2c82) + cVar64,
                                                           CONCAT11((~-((byte)((bVar61 < bVar8) *
                                                                               bVar8 | (bVar61 >=
                                                                                       bVar8) * 
                                                  bVar61) == bVar61) & UNK_014e2c81) + cVar62,
                                                  (~-((byte)((bVar60 < bVar49) * bVar49 |
                                                            (bVar60 >= bVar49) * bVar60) == bVar60)
                                                  & DAT_014e2c80) + (char)uVar44)))))));
                  uVar50 = uVar50 + 8;
                } while (uVar56 != uVar50);
                if (uVar58 == uVar56) goto LAB_0bf0e84d;
              }
LAB_0bf0e82c:
              do {
                cVar41 = *pcVar55;
                cVar62 = cVar41 + -0x20;
                if (0x19 < (byte)(cVar41 + 0x9fU)) {
                  cVar62 = cVar41;
                }
                *pcVar55 = cVar62;
                pcVar55 = pcVar55 + 1;
              } while (pcVar55 != pcVar47 + uVar58);
            }
LAB_0bf0e84d:
            uVar50 = (ulong)((byte)uStack_2d8 >> 1);
LAB_0bf0e866:
            bVar49 = (byte)uStack_2d8 & 1;
            pcVar47 = pcStack_2c8;
            uVar58 = uStack_2d0;
            if ((uStack_2d8 & 1) == 0) {
              pcVar47 = pcVar3;
              uVar58 = uVar50;
            }
            uVar50 = 4;
            if (uVar58 < 4) {
              uVar50 = uVar58;
            }
            iVar43 = func_0x0eee3000(pcVar47,&UNK_0135c65c,uVar50);
            if ((iVar43 == 0) && (uVar58 == 4)) {
              sVar57 = 0;
            }
            else {
              uVar56 = 5;
              if (uVar58 < 5) {
                uVar56 = uVar58;
              }
              iVar43 = func_0x0eee3000(pcVar47,&UNK_01325d39,uVar56);
              if ((iVar43 != 0) || (sVar57 = 1, uVar58 != 5)) {
                uStack_2c0 = 6;
                if (uVar58 < 6) {
                  uStack_2c0 = uVar58;
                }
                iVar43 = func_0x0eee3000(pcVar47,&UNK_012bdf68);
                if (((((iVar43 != 0) || (sVar57 = 2, uVar58 != 6)) &&
                     ((iVar43 = func_0x0eee3000(pcVar47,&UNK_012bdf6f,uStack_2c0), iVar43 != 0 ||
                      (sVar57 = 3, uVar58 != 6)))) &&
                    (((iVar43 = func_0x0eee3000(pcVar47,&UNK_0135c661,uStack_2c0), iVar43 != 0 ||
                      (sVar57 = 4, uVar58 != 6)) &&
                     ((iVar43 = func_0x0eee3000(pcVar47,&UNK_012bdf76,uVar50), iVar43 != 0 ||
                      (sVar57 = 5, uVar58 != 4)))))) &&
                   ((iVar43 = func_0x0eee3000(pcVar47,&UNK_013acb8a,uVar56), iVar43 != 0 ||
                    (sVar57 = 6, uVar58 != 5)))) {
                  uVar50 = 7;
                  if (uVar58 < 7) {
                    uVar50 = uVar58;
                  }
                  iVar43 = func_0x0eee3000(pcVar47,&UNK_0142cb7c,uVar50);
                  if (((iVar43 != 0) || (sVar57 = 7, uVar58 != 7)) &&
                     ((iVar43 = func_0x0eee3000(pcVar47,&UNK_01325d3f,uStack_2c0), iVar43 != 0 ||
                      (sVar57 = 8, uVar58 != 6)))) {
                    iVar43 = func_0x04130450(&uStack_2d8,&UNK_014c9bdb);
                    sVar57 = 10 - (ushort)(iVar43 == 0);
                    bVar49 = (byte)uStack_2d8 & 1;
                  }
                }
              }
            }
            if (bVar49 != 0) {
              func_0x0412a280(pcStack_2c8,uStack_2d8 & 0xfffffffffffffffe);
            }
            ppuVar54 = ppuStack_280;
            *(short *)ppuStack_280 = sVar57;
            if ((bStack_2b8 & 1) != 0) {
              func_0x0412a280(puStack_2a8,CONCAT71(uStack_2b7,bStack_2b8) & 0xfffffffffffffffe);
            }
            if ((bStack_2a0 & 1) == 0) {
              sVar57 = *(short *)ppuVar54;
            }
            else {
              func_0x0412a280(uStack_290,
                              CONCAT26(uStack_29a,
                                       CONCAT15(uStack_29b,CONCAT41(uStack_29f,bStack_2a0))) &
                              0xfffffffffffffffe);
              sVar57 = *(short *)ppuVar54;
            }
            if (sVar57 == 10) {
              uVar44 = func_0x048648e0(uStack_288,&DAT_0142cb75);
              uStack_2d8 = func_0x04863ca0(uVar44);
              func_0x09d49780(1,3,0x11,&UNK_01280e28,&uStack_2d8);
              *(short *)ppuVar54 = 0;
            }
            return;
          }
          lVar46 = param_2[2] - *param_2 >> 3;
          uVar50 = lVar46 * -0x6276276276276276;
          if (uVar58 < uVar50) {
            uVar58 = uVar50;
          }
          if (0x13b13b13b13b13a < (ulong)(lVar46 * 0x4ec4ec4ec4ec4ec5)) {
            uVar58 = 0x276276276276276;
          }
          plStack_168 = param_2;
          if (uVar58 == 0) {
            lVar46 = 0;
          }
          else {
            if (0x276276276276276 < uVar58) goto LAB_0bf0e46d;
            lStack_250 = 0xbf0dffd;
            lVar46 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar58 * 0x68);
            if (lVar46 == 0) {
              lStack_250 = 0xbf0e00c;
              func_0x0eec74c0(uVar58 * 0x68,0);
              lVar46 = 0;
            }
          }
          lVar2 = lVar46 + lVar52;
          lStack_170 = uVar58 * 0x68 + lVar46;
          *(ulong *)(lVar46 + 0x10 + lVar52) = uStack_1f8;
          *(ulong *)(lVar46 + lVar52) = uStack_208;
          ((ulong *)(lVar46 + lVar52))[1] = uStack_200;
          uStack_208 = 0;
          uStack_200 = 0;
          uStack_1f8 = 0;
          *(undefined2 *)(lVar46 + 0x18 + lVar52) = uStack_1f0;
          lStack_250 = 0xbf0e07d;
          lStack_188 = lVar46;
          lStack_180 = lVar2;
          puStack_178 = (ulong *)lVar2;
          func_0x049d00c0(lVar46 + lVar52 + 0x20,apuStack_1e8);
          *(undefined **)(lVar2 + 0x20) = &UNK_0f299f40;
          *(uint *)(lVar2 + 0x60) = uStack_1a8;
          puVar53 = (ulong *)((long)puStack_178 + 0x68);
          puVar51 = (ulong *)*param_2;
          puVar5 = (ulong *)param_2[1];
          puVar48 = (ulong *)((long)puVar51 + (lStack_180 - (long)puVar5));
          ppuStack_220 = &puStack_160;
          bStack_210 = 0;
          puVar59 = puVar51;
          puStack_248 = puVar48;
          puStack_240 = puVar48;
          plStack_228 = param_2;
          plStack_218 = (long *)&puStack_248;
          ppuVar40 = &puStack_248;
          puStack_178 = puVar53;
          puStack_160 = puVar48;
          if (puVar51 != puVar5) {
            do {
              plStack_218 = (long *)ppuVar40;
              puStack_248 = puVar48;
              if ((*puVar59 & 1) == 0) {
                puVar48[2] = puVar59[2];
                uVar58 = puVar59[1];
                *puVar48 = *puVar59;
                puVar48[1] = uVar58;
              }
              else {
                lStack_250 = 0xbf0e140;
                func_0x0412e5e0(puVar48,puVar59[2],puVar59[1]);
              }
              *(short *)(puVar48 + 3) = (short)puVar59[3];
              lStack_250 = 0xbf0e157;
              func_0x049d00c0(puVar48 + 4,puVar59 + 4);
              puVar48[4] = (ulong)&UNK_0f299f40;
              *(int *)(puVar48 + 0xc) = (int)puVar59[0xc];
              puVar59 = puVar59 + 0xd;
              puVar48 = puStack_248 + 0xd;
              ppuVar40 = (ulong **)plStack_218;
            } while (puVar59 != puVar5);
            bStack_210 = 1;
            puStack_248 = puVar48;
            do {
              puVar51[4] = (ulong)&UNK_0f395808;
              uVar58 = puVar51[9];
              if (uVar58 != 0) {
                uVar50 = puVar51[10];
                uVar56 = uVar58;
                if (uVar58 != uVar50) {
                  do {
                    plVar6 = *(long **)(uVar50 - 8);
                    if (plVar6 != (long *)0x0) {
                      LOCK();
                      plVar1 = plVar6 + 1;
                      lVar52 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar52 == 0) {
                        lStack_250 = 0xbf0e1ed;
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                        lStack_250 = 0xbf0e1f5;
                        func_0x0412c2d0(plVar6);
                      }
                    }
                    uVar50 = uVar50 - 0x10;
                  } while (uVar50 != uVar58);
                  uVar56 = puVar51[9];
                }
                puVar51[10] = uVar58;
                lStack_250 = 0xbf0e214;
                func_0x0412a280(uVar56,puVar51[0xb] - uVar56);
              }
              uVar58 = puVar51[6];
              if (uVar58 != 0) {
                uVar50 = puVar51[7];
                uVar56 = uVar58;
                if (uVar58 != uVar50) {
                  do {
                    plVar6 = *(long **)(uVar50 - 8);
                    if (plVar6 != (long *)0x0) {
                      LOCK();
                      plVar1 = plVar6 + 1;
                      lVar52 = *plVar1;
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (lVar52 == 0) {
                        lStack_250 = 0xbf0e25d;
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                        lStack_250 = 0xbf0e265;
                        func_0x0412c2d0(plVar6);
                      }
                    }
                    uVar50 = uVar50 - 0x10;
                  } while (uVar50 != uVar58);
                  uVar56 = puVar51[6];
                }
                puVar51[7] = uVar58;
                lStack_250 = 0xbf0e284;
                func_0x0412a280(uVar56,puVar51[8] - uVar56);
              }
              if ((*puVar51 & 1) != 0) {
                lStack_250 = 0xbf0e2a0;
                func_0x0412a280(puVar51[2],*puVar51 & 0xfffffffffffffffe);
              }
              puVar51 = puVar51 + 0xd;
            } while (puVar51 != puVar5);
            if ((bStack_210 & 1) == 0) {
              puVar5 = *ppuStack_220;
              for (puVar51 = (ulong *)*plStack_218; puVar51 != puVar5; puVar51 = puVar51 + -0xd) {
                lStack_250 = 0xbf0e426;
                func_0x049d2400(puVar51 + -9);
                if ((puVar51[-0xd] & 1) != 0) {
                  lStack_250 = 0xbf0e43d;
                  func_0x0412a280(puVar51[-0xb],puVar51[-0xd] & 0xfffffffffffffffe);
                }
              }
            }
          }
          param_2 = plStack_1a0;
          lVar52 = *plStack_1a0;
          lVar46 = plStack_1a0[2];
          *plStack_1a0 = (long)puStack_240;
          plStack_1a0[1] = (long)puVar53;
          plStack_1a0[2] = lStack_170;
          if (lVar52 != 0) {
            lStack_250 = 0xbf0e2f4;
            func_0x0412a280(lVar52,lVar46 - lVar52);
          }
        }
        param_2[1] = (long)puVar53;
        lStack_250 = 0xbf0e31d;
        func_0x049d2400(apuStack_1e8);
        if ((uStack_208 & 1) != 0) {
          lStack_250 = 0xbf0e337;
          func_0x0412a280(uStack_1f8,uStack_208 & 0xfffffffffffffffe);
        }
        lStack_250 = 0xbf0e347;
        func_0x049d2400(apuStack_d8);
        if ((uStack_f8 & 1) == 0) {
          lStack_250 = 0xbf0e359;
          func_0x049d2400(apuStack_138);
          if ((uStack_158 & 1) == 0) goto LAB_0bf0e363;
LAB_0bf0e3ab:
          lStack_250 = 0xbf0e3c4;
          func_0x0412a280(uStack_148,uStack_158 & 0xfffffffffffffffe);
          lStack_250 = 0xbf0e3cc;
          func_0x049d2400(&puStack_78);
        }
        else {
          lStack_250 = 0xbf0e399;
          func_0x0412a280(uStack_e8,uStack_f8 & 0xfffffffffffffffe);
          lStack_250 = 0xbf0e3a1;
          func_0x049d2400(apuStack_138);
          if ((uStack_158 & 1) != 0) goto LAB_0bf0e3ab;
LAB_0bf0e363:
          lStack_250 = 0xbf0e36b;
          func_0x049d2400(&puStack_78);
        }
        if ((uStack_98 & 1) != 0) {
          lStack_250 = 0xbf0e3f3;
          func_0x0412a280(CONCAT62(uStack_86,uStack_88),uStack_98 & 0xfffffffffffffffe);
        }
        lStack_250 = 0xbf0dcfd;
        func_0x04862ba0(auStack_238);
      }
      lStack_250 = 0xbf0e44c;
      func_0x04862b40(auStack_198);
      lStack_250 = 0xbf0e456;
      func_0x04862b40(auStack_238);
    }
  }
  return;
}


