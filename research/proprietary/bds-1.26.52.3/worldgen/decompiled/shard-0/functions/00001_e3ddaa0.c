/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xe4ddaa0 (ELF vaddr 0xe3ddaa0)
 * Label: string:HeightmapProjection
 * Body:  [[0e4ddaa0, 0e4ddd41] [0e4ddd50, 0e4de5f5] [0e4de600, 0e4de641] [0e4de650, 0e4deb91] [0e4deba0, 0e4df601] [0e4df610, 0e4e01b1] [0e4e01c0, 0e4e0997] [0e4e09a0, 0e4e09e1] [0e4e09f0, 0e4e11e1] [0e4e11f0, 0e4e1967] [0e4e1970, 0e4e19b1] [0e4e19c0, 0e4e21b1] [0e4e21c0, 0e4e29d1] [0e4e29e0, 0e4e2c61] [0e4e2c70, 0e4e383b] [0e4e3840, 0e4e3881] [0e4e3890, 0e4e4311] [0e4e4320, 0e4e4bb1] [0e4e4bc0, 0e4e4e41] [0e4e4e50, 0e4e7fa1] [0e4e7fb0, 0e4e9941] [0e4e9950, 0e4eaa07] [0e4eaa10, 0e4eaa51] [0e4eaa60, 0e4eb6ab] [0e4eb6b0, 0e4eb6f2] [0e4eb700, 0e4eba02] [0e4eba10, 0e4eba41] [0e4eba50, 0e4ecc31] [0e4ecc40, 0e4ef70a]]
 * Ghidra: FUN_0e4ddaa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0e4ddaa0(long param_1)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  undefined6 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  undefined1 auVar48 [8];
  undefined8 uVar49;
  undefined4 uVar50;
  char cVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  undefined *puVar56;
  code *pcVar57;
  code *pcVar58;
  byte *pbVar59;
  long *plVar60;
  undefined8 *puVar61;
  undefined1 (*pauVar62) [16];
  int *piVar63;
  undefined8 uVar64;
  byte *pbVar65;
  byte *pbVar66;
  undefined1 *puVar67;
  ulong uVar68;
  ulong uVar69;
  undefined8 *puVar70;
  ulong uVar71;
  long lVar72;
  long lVar73;
  bool bVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auStack_7b8 [8];
  code *pcStack_7b0;
  code *pcStack_7a8;
  undefined8 uStack_7a0;
  undefined4 uStack_798;
  uint uStack_794;
  int iStack_790;
  uint uStack_78c;
  undefined1 *puStack_788;
  undefined *puStack_780;
  undefined *puStack_778;
  undefined *puStack_770;
  undefined4 uStack_768;
  undefined1 auStack_760 [16];
  undefined8 uStack_750;
  undefined1 auStack_748 [16];
  uint uStack_738;
  undefined4 uStack_734;
  int iStack_730;
  int iStack_72c;
  code *pcStack_728;
  undefined4 uStack_720;
  char cStack_71c;
  undefined1 uStack_71b;
  undefined2 uStack_71a;
  char cStack_718;
  undefined7 uStack_717;
  undefined2 uStack_710;
  undefined4 uStack_70e;
  undefined2 uStack_70a;
  undefined4 uStack_708;
  undefined1 uStack_704;
  undefined2 uStack_703;
  undefined1 uStack_701;
  undefined1 uStack_700;
  undefined2 uStack_6ff;
  undefined1 uStack_6fd;
  undefined4 uStack_6fc;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  long lStack_6d0;
  long lStack_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  undefined2 uStack_6a0;
  undefined2 uStack_69e;
  uint uStack_69c;
  uint uStack_698;
  uint uStack_694;
  long lStack_690;
  undefined2 uStack_688;
  undefined2 uStack_686;
  uint uStack_684;
  uint uStack_680;
  undefined1 uStack_67c;
  code *pcStack_678;
  code *pcStack_670;
  code *pcStack_668;
  code *pcStack_660;
  undefined4 uStack_658;
  undefined4 uStack_654;
  int iStack_650;
  uint uStack_64c;
  undefined4 uStack_648;
  int iStack_644;
  char cStack_640;
  undefined1 uStack_63f;
  undefined2 uStack_63e;
  undefined2 uStack_63c;
  undefined2 uStack_63a;
  undefined1 auStack_638 [8];
  code *pcStack_630;
  code *pcStack_628;
  code *pcStack_620;
  undefined1 auStack_618 [16];
  code *pcStack_608;
  undefined1 uStack_600;
  undefined1 uStack_5ff;
  undefined4 uStack_5fe;
  undefined2 uStack_5fa;
  undefined1 auStack_5f8 [16];
  code *pcStack_5e8;
  code *pcStack_5e0;
  code *pcStack_5d8;
  int iStack_5d0;
  uint uStack_5cc;
  undefined4 uStack_5c8;
  int iStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  byte bStack_5a8;
  undefined7 uStack_5a7;
  byte bStack_5a0;
  undefined7 uStack_59f;
  undefined4 uStack_598;
  uint uStack_594;
  code *pcStack_590;
  code *pcStack_588;
  int iStack_580;
  uint uStack_57c;
  undefined4 uStack_578;
  int iStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  byte bStack_568;
  undefined7 uStack_567;
  byte bStack_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined2 uStack_557;
  undefined1 uStack_555;
  uint uStack_554;
  code *pcStack_550;
  code *pcStack_548;
  int iStack_540;
  uint uStack_53c;
  undefined4 uStack_538;
  int iStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  code *pcStack_528;
  code *pcStack_520;
  code *pcStack_518;
  code *pcStack_510;
  code *pcStack_508;
  int iStack_500;
  uint uStack_4fc;
  undefined4 uStack_4f8;
  int iStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 uStack_4e0;
  code *pcStack_4d8;
  code *pcStack_4d0;
  code *pcStack_4c8;
  code *pcStack_4c0;
  code *pcStack_4b8;
  int iStack_4b0;
  uint uStack_4ac;
  undefined4 uStack_4a8;
  int iStack_4a4;
  undefined4 uStack_4a0;
  code *pcStack_498;
  code *pcStack_490;
  code *pcStack_488;
  code *pcStack_480;
  code *pcStack_478;
  int iStack_470;
  uint uStack_46c;
  undefined4 uStack_468;
  int iStack_464;
  undefined4 uStack_460;
  code *pcStack_458;
  code *pcStack_450;
  code *pcStack_448;
  code *pcStack_440;
  code *pcStack_438;
  int iStack_430;
  uint uStack_42c;
  undefined4 uStack_428;
  int iStack_424;
  undefined4 uStack_420;
  code *pcStack_418;
  code *pcStack_410;
  code *pcStack_408;
  code *pcStack_400;
  code *pcStack_3f8;
  int iStack_3f0;
  uint uStack_3ec;
  undefined4 uStack_3e8;
  int iStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  code *pcStack_3d8;
  code *pcStack_3d0;
  code *pcStack_3c8;
  code *pcStack_3c0;
  code *pcStack_3b8;
  int iStack_3b0;
  uint uStack_3ac;
  undefined4 uStack_3a8;
  int iStack_3a4;
  undefined4 uStack_3a0;
  code *pcStack_398;
  code *pcStack_390;
  code *pcStack_388;
  code *pcStack_380;
  code *pcStack_378;
  int iStack_370;
  uint uStack_36c;
  undefined4 uStack_368;
  int iStack_364;
  undefined4 uStack_360;
  undefined4 uStack_34f;
  undefined3 uStack_34b;
  code *pcStack_348;
  code *pcStack_340;
  code *pcStack_338;
  code *pcStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  code *pcStack_300;
  code *pcStack_2f8;
  code *pcStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  code *pcStack_2d0;
  code *pcStack_2c8;
  code *pcStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  code *pcStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  code *pcStack_258;
  code *pcStack_250;
  code *pcStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  code *pcStack_218;
  code *pcStack_210;
  code *pcStack_208;
  code *pcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  code *pcStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  code *pcStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  code *pcStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  
  if ((DAT_0f75a1e0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75a1e0), iVar52 != 0)) {
    func_0x0e606120();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75a160,0xf53dab8);
    func_0x0410844d(&DAT_0f75a1e0);
  }
  uStack_4e0 = param_1 + 0x18;
  plVar60 = (long *)(*(long *)(param_1 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >>
                                 3) - 1U & *(uint *)(_DAT_0f75a160 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    uStack_750 = param_1;
    if (lVar73 == -1) goto LAB_0e4ddb25;
    plVar60 = (long *)(*(long *)(param_1 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(param_1 + 0x30) + 8 + lVar73 * 0x18) != *(uint *)(_DAT_0f75a160 + 4))
  ;
  if (plVar60 == *(long **)(param_1 + 0x38)) {
LAB_0e4ddb25:
    puVar56 = &DAT_0f75a160;
    if (iRam000000000f75a1c0 != -0x2b3da790) goto LAB_0e4ddb99;
LAB_0e4ddb55:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4ddb99;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e606520(auStack_638,param_1,lVar72,uVar68);
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4ddb55;
LAB_0e4ddb99:
    func_0x0e606520(auStack_638,param_1,&UNK_01253298,0x15);
  }
  if ((char)pcStack_608 == '\0') {
    auVar48 = auStack_638;
    bStack_5a8 = auStack_638[8];
    uStack_5a7 = auStack_638._9_7_;
    bStack_5a0 = (byte)pcStack_628;
    uStack_59f = (undefined7)((ulong)pcStack_628 >> 8);
    uStack_598 = SUB84(pcStack_620,0);
    uStack_594 = (uint)((ulong)pcStack_620 >> 0x20);
    pcStack_590 = (code *)auStack_618._0_8_;
    uVar6 = auStack_618._8_4_;
    uStack_5b8._4_4_ = (undefined4)((ulong)uStack_5b8 >> 0x20);
    uStack_5b8 = (undefined1 *)CONCAT44(uStack_5b8._4_4_,auStack_618._12_4_);
    puStack_310 = pcStack_608;
    if ((DAT_0f75a1e0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75a1e0), iVar52 != 0)) {
      func_0x0e606120();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75a160,0xf53dab8);
      func_0x0410844d(&DAT_0f75a1e0);
    }
    lVar73 = (long)auVar48 + 0x18;
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75a160 + 4)) * 8);
    do {
      lVar72 = *plVar60;
      if (lVar72 == -1) goto LAB_0e4ddc80;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar72 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar72 * 0x18) !=
             *(uint *)(_DAT_0f75a160 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4ddc80:
      puVar56 = &DAT_0f75a160;
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4ddd2e:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4ddd5a;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4ddd5a:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar75[0] = -(*pbVar66 == 0x5b);
            auVar75[1] = -(pbVar66[1] == 99);
            auVar75[2] = -(pbVar66[2] == 0x65);
            auVar75[3] = -(pbVar66[3] == 0x72);
            auVar75[4] = -(pbVar66[4] == 0x65);
            auVar75[5] = -(pbVar66[5] == 0x61);
            auVar75[6] = -(pbVar66[6] == 0x6c);
            auVar75[7] = -(pbVar66[7] == 0x3a);
            auVar75[8] = -(pbVar66[8] == 100);
            auVar75[9] = -(pbVar66[9] == 0x6f);
            auVar75[10] = -(pbVar66[10] == 99);
            auVar75[0xb] = -(pbVar66[0xb] == 0x75);
            auVar75[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar75[0xd] = -(pbVar66[0xd] == 0x65);
            auVar75[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar75[0xf] = -(pbVar66[0xf] == 0x74);
            auVar92[0] = -(pbVar66[10] == 99);
            auVar92[1] = -(pbVar66[0xb] == 0x75);
            auVar92[2] = -(pbVar66[0xc] == 0x6d);
            auVar92[3] = -(pbVar66[0xd] == 0x65);
            auVar92[4] = -(pbVar66[0xe] == 0x6e);
            auVar92[5] = -(pbVar66[0xf] == 0x74);
            auVar92[6] = -(pbVar66[0x10] == 0x61);
            auVar92[7] = -(pbVar66[0x11] == 0x74);
            auVar92[8] = -(pbVar66[0x12] == 0x69);
            auVar92[9] = -(pbVar66[0x13] == 0x6f);
            auVar92[10] = -(pbVar66[0x14] == 0x6e);
            auVar92[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar92[0xc] = -(pbVar66[0x16] == 0x74);
            auVar92[0xd] = -(pbVar66[0x17] == 0x61);
            auVar92[0xe] = -(pbVar66[0x18] == 0x67);
            auVar92[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar92 = auVar92 & auVar75;
            if ((ushort)((ushort)(SUB161(auVar92 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar92 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar92 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar92 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar92 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar92 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar92 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar92 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar92 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar92 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar92 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar92 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar92 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar92 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar92 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar92[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar56 = (undefined *)plVar60[2];
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4ddd2e;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4ddd8e:
      if (uVar6 == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4dde0e;
        lVar72 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0(lVar73);
        }
        auStack_748._0_8_ = func_0x048b0c90(lVar73,puVar56,(ulong)uStack_5b8 & 0xffffffff,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4dde0e;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar72 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4dde0e:
          lVar72 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar8 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcStack_668 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcStack_668 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)(pcStack_668 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcStack_668 + 0x12) = uVar64;
      lVar5 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcStack_668 = _DAT_013bbacd;
      *(long *)(pcStack_668 + 8) = lVar5;
      pcStack_668[0x1a] = (code)0x0;
      lVar72 = func_0x048b5060(lVar72,&pcStack_678);
      *(undefined8 *)(lVar72 + 0x20) = 0;
      if ((undefined1 *)(lVar72 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar72 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar72 + 0x28);
          (**(code **)(lVar72 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar72 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar72 + 0x40) = pcStack_728;
        *(uint *)(lVar72 + 0x48) = uStack_720;
        *(char *)(lVar72 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4ddd8e;
    }
    auStack_5f8._9_7_ = uStack_5a7;
    auStack_5f8[8] = bStack_5a8;
    pcStack_5e8 = (code *)CONCAT71(uStack_59f,bStack_5a0);
    pcStack_5e0 = (code *)CONCAT44(uStack_594,uStack_598);
    auStack_5f8._0_8_ = auVar48;
    pcStack_5d8 = pcStack_590;
    iStack_5d0 = uVar6;
    uStack_5cc = (uint)uStack_5b8;
    uStack_5c8 = SUB84(puStack_310,0);
    iStack_5c4 = (int)((ulong)puStack_310 >> 0x20);
    func_0x0e606b10(auStack_748,lVar73);
    if (iStack_72c == 2) {
      piVar63 = *(int **)(*(long *)(CONCAT44(uStack_734,uStack_738) + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != iStack_730) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      lVar73 = *(long *)(piVar63 + 0xc);
      while (lVar73 != auStack_748._8_8_) {
        piVar63 = *(int **)(piVar63 + 0xe);
        lVar73 = *(long *)(piVar63 + 0xc);
      }
LAB_0e4de08f:
      *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
    }
    else {
      if (iStack_72c == 1) {
        piVar63 = *(int **)(*(long *)(CONCAT44(uStack_734,uStack_738) + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != iStack_730) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4de08f;
      }
      if (iStack_72c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_734,uStack_738) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e607070(auStack_748,auStack_5f8,&UNK_014079f7,3);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f012080;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x5dd3ca0;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_05dd3990;
    puStack_778 = &UNK_0e607600;
    puStack_770 = &UNK_0e607760;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e607300(auStack_748);
    uStack_648 = CONCAT31(uStack_648._1_3_,(char)uStack_5c8);
    uStack_658 = SUB84(pcStack_5d8,0);
    uStack_654 = (undefined4)((ulong)pcStack_5d8 >> 0x20);
    iStack_650 = iStack_5d0;
    uStack_64c = uStack_5cc;
    pcStack_668 = pcStack_5e8;
    pcStack_660 = pcStack_5e0;
    pcStack_678 = (code *)auStack_5f8._0_8_;
    pcStack_670 = (code *)auStack_5f8._8_8_;
    FUN_048b0bc0(&iStack_730);
    func_0x0e606b10(auStack_748,pcStack_678 + 0x18);
    if (iStack_72c == 2) {
      piVar63 = *(int **)(*(long *)(CONCAT44(uStack_734,uStack_738) + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != iStack_730) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      lVar73 = *(long *)(piVar63 + 0xc);
      while (lVar73 != auStack_748._8_8_) {
        piVar63 = *(int **)(piVar63 + 0xe);
        lVar73 = *(long *)(piVar63 + 0xc);
      }
LAB_0e4de2cf:
      *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
    }
    else {
      if (iStack_72c == 1) {
        piVar63 = *(int **)(*(long *)(CONCAT44(uStack_734,uStack_738) + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != iStack_730) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4de2cf;
      }
      if (iStack_72c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_734,uStack_738) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e607070(auStack_748,&pcStack_678,&UNK_01388a78,6);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f012080;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x5dd3ca0;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_05dd3990;
    puStack_778 = &UNK_0e607930;
    puStack_770 = &UNK_0e607a90;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e607300(auStack_748);
    FUN_048b0bc0(&iStack_730);
  }
  if ((DAT_0f75a298 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75a298), iVar52 != 0)) {
    func_0x0e607d30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75a218,0xf53dab8);
    func_0x0410844d(&DAT_0f75a298);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75a218 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4de455;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75a218 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4de455:
    puVar56 = &DAT_0f75a218;
    if (_DAT_0f75a278 != -0x2b3da790) goto LAB_0e4de4c6;
LAB_0e4de485:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4de4c6;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e608190(auStack_748,uStack_750,lVar72,uVar68);
    uVar47 = uStack_720;
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4de485;
LAB_0e4de4c6:
    func_0x0e608190(auStack_748,uStack_750,&UNK_011cee4d,0x10);
    uVar47 = uStack_720;
  }
  uStack_720 = uVar47;
  if (cStack_718 == '\0') {
    uVar64 = auStack_748._0_8_;
    uVar6 = CONCAT22(uStack_71a,CONCAT11(uStack_71b,cStack_71c));
    if ((DAT_0f75a298 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75a298), iVar52 != 0)) {
      func_0x0e607d30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75a218,0xf53dab8);
      func_0x0410844d(&DAT_0f75a298);
    }
    plVar60 = (long *)(*(long *)(uVar64 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar64 + 0x20) - *(long *)(uVar64 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f75a218 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4de571;
      plVar60 = (long *)(*(long *)(uVar64 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)(uVar64 + 0x30) + 8 + lVar73 * 0x18) != *(uint *)(_DAT_0f75a218 + 4)
            );
    if (plVar60 == *(long **)(uVar64 + 0x38)) {
LAB_0e4de571:
      puVar56 = &DAT_0f75a218;
      pbVar59 = *(byte **)(uVar64 + 0x50);
      pbVar65 = *(byte **)(uVar64 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4de62e:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4de65a;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4de65a:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar76[0] = -(*pbVar66 == 0x5b);
            auVar76[1] = -(pbVar66[1] == 99);
            auVar76[2] = -(pbVar66[2] == 0x65);
            auVar76[3] = -(pbVar66[3] == 0x72);
            auVar76[4] = -(pbVar66[4] == 0x65);
            auVar76[5] = -(pbVar66[5] == 0x61);
            auVar76[6] = -(pbVar66[6] == 0x6c);
            auVar76[7] = -(pbVar66[7] == 0x3a);
            auVar76[8] = -(pbVar66[8] == 100);
            auVar76[9] = -(pbVar66[9] == 0x6f);
            auVar76[10] = -(pbVar66[10] == 99);
            auVar76[0xb] = -(pbVar66[0xb] == 0x75);
            auVar76[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar76[0xd] = -(pbVar66[0xd] == 0x65);
            auVar76[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar76[0xf] = -(pbVar66[0xf] == 0x74);
            auVar93[0] = -(pbVar66[10] == 99);
            auVar93[1] = -(pbVar66[0xb] == 0x75);
            auVar93[2] = -(pbVar66[0xc] == 0x6d);
            auVar93[3] = -(pbVar66[0xd] == 0x65);
            auVar93[4] = -(pbVar66[0xe] == 0x6e);
            auVar93[5] = -(pbVar66[0xf] == 0x74);
            auVar93[6] = -(pbVar66[0x10] == 0x61);
            auVar93[7] = -(pbVar66[0x11] == 0x74);
            auVar93[8] = -(pbVar66[0x12] == 0x69);
            auVar93[9] = -(pbVar66[0x13] == 0x6f);
            auVar93[10] = -(pbVar66[0x14] == 0x6e);
            auVar93[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar93[0xc] = -(pbVar66[0x16] == 0x74);
            auVar93[0xd] = -(pbVar66[0x17] == 0x61);
            auVar93[0xe] = -(pbVar66[0x18] == 0x67);
            auVar93[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar93 = auVar93 & auVar76;
            if ((ushort)((ushort)(SUB161(auVar93 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar93 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar93 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar93 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar93 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar93 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar93 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar93 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar93 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar93 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar93 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar93 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar93 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar93 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar93 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar93[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar56 = (undefined *)plVar60[2];
      pbVar59 = *(byte **)(uVar64 + 0x50);
      pbVar65 = *(byte **)(uVar64 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4de62e;
    }
    if (pbVar59 != pbVar65) {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 != _DAT_0f550ac4) goto LAB_0e4de90c;
    }
    if (uVar47 == 0) {
      if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
         (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4de700;
      lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
    }
    else {
      if (puVar56 == (undefined *)0x0) {
        puVar56 = (undefined *)func_0x048aead0(uVar64 + 0x18);
      }
      auStack_7b8 = (undefined1  [8])func_0x048b0c90(uVar64 + 0x18,puVar56,uVar6,1);
      if (auStack_7b8 == (undefined1  [8])0x0) {
        _auStack_7b8 = (undefined1  [16])0x0;
        FUN_048b0d20(auStack_7b8);
        if (auStack_7b8 == (undefined1  [8])0x0) goto LAB_0e4de700;
      }
      if ((*(int *)((long)auStack_7b8 + 0x50) == -0x45dcb126) &&
         (*(long *)((long)auStack_7b8 + 0x58) != 0)) {
        lVar73 = *(long *)((long)auStack_7b8 + 0x58) + 0x40;
      }
      else {
LAB_0e4de700:
        lVar73 = 0;
      }
    }
    pcStack_628 = (code *)&UNK_0488e0b0;
    pcStack_620 = (code *)0x0;
    auStack_618._0_5_ = 0x48b5725f;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = pcStack_630;
    _auStack_638 = auVar9 << 0x40;
    _auStack_7b8 = (undefined1  [16])0x0;
    uStack_7a0 = (code *)&UNK_0488e0b0;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x48b5725f;
    uStack_78c = uStack_78c & 0xffffff00;
    pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
    if (pcVar57 == (code *)0x0) {
      FUN_0eec74c0(0x20,0);
    }
    uVar64 = _UNK_013bbadf;
    pcStack_678 = (code *)0x21;
    pcStack_670 = (code *)0x1a;
    *(ulong *)(pcVar57 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
    *(undefined8 *)(pcVar57 + 0x12) = uVar64;
    lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
    *(long *)pcVar57 = _DAT_013bbacd;
    *(long *)(pcVar57 + 8) = lVar72;
    pcVar57[0x1a] = (code)0x0;
    pcStack_668 = pcVar57;
    lVar73 = func_0x048b5060(lVar73,&pcStack_678);
    *(undefined8 *)(lVar73 + 0x20) = 0;
    if ((undefined1 *)(lVar73 + 0x20) == auStack_7b8) {
      pcVar57 = (code *)0x0;
    }
    else {
      if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
        puVar70 = (undefined8 *)(lVar73 + 0x28);
        (**(code **)(lVar73 + 0x40))(puVar70);
        if ((char)uStack_78c != '\0') {
          if ((char)uStack_78c == '\x02') {
            (*uStack_7a0)(5,&pcStack_7b0,puVar70);
          }
          else {
            pcVar57 = pcStack_7b0;
            pcStack_7b0 = (code *)0x0;
            *puVar70 = pcVar57;
          }
        }
      }
      pcVar57 = (code *)CONCAT44(uStack_794,uStack_798);
      *(code **)(lVar73 + 0x38) = uStack_7a0;
      *(ulong *)(lVar73 + 0x40) = CONCAT44(uStack_794,uStack_798);
      *(int *)(lVar73 + 0x48) = iStack_790;
      *(char *)(lVar73 + 0x4c) = (char)uStack_78c;
    }
    if (((ulong)pcStack_678 & 1) != 0) {
      func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
      pcVar57 = (code *)CONCAT44(uStack_794,uStack_798);
    }
    if (pcVar57 != (code *)0x0) {
      (*pcVar57)(&pcStack_7b0);
    }
    if (pcStack_620 != (code *)0x0) {
      (*pcStack_620)(auStack_638);
    }
  }
LAB_0e4de90c:
  lVar73 = uStack_750;
  func_0x0e50c810(uStack_750);
  if ((DAT_0f75ba10 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75ba10), iVar52 != 0)) {
    func_0x0e645c00();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b990,0xf53dab8);
    func_0x0410844d(&DAT_0f75ba10);
  }
  plVar60 = (long *)(*(long *)(lVar73 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar73 + 0x20) - *(long *)(lVar73 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f75b990 + 4)) * 8);
  do {
    lVar72 = *plVar60;
    if (lVar72 == -1) goto LAB_0e4de985;
    plVar60 = (long *)(*(long *)(lVar73 + 0x30) + lVar72 * 0x18);
  } while (*(uint *)(*(long *)(lVar73 + 0x30) + 8 + lVar72 * 0x18) != *(uint *)(_DAT_0f75b990 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4de985:
    puVar56 = &DAT_0f75b990;
    if (iRam000000000f75b9f0 != -0x2b3da790) goto LAB_0e4de9f9;
LAB_0e4de9b5:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4de9f9;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e646000(auStack_638,uStack_750,lVar72,uVar68);
    auVar75 = _auStack_638;
    pcVar57 = pcStack_608;
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4de9b5;
LAB_0e4de9f9:
    func_0x0e646000(auStack_638,uStack_750,&UNK_011b3054,0x19);
    auVar75 = _auStack_638;
    pcVar57 = pcStack_608;
  }
  bVar74 = (char)pcStack_608 == '\0';
  _auStack_638 = auVar75;
  pcStack_608 = pcVar57;
  if (bVar74) {
    auStack_638 = auVar75._0_8_;
    auVar48 = auStack_638;
    bStack_568 = auVar75[8];
    uStack_567 = auVar75._9_7_;
    bStack_560 = (byte)pcStack_628;
    uStack_55f = (undefined7)((ulong)pcStack_628 >> 8);
    uStack_558 = SUB81(pcStack_620,0);
    uStack_557 = (undefined2)((ulong)pcStack_620 >> 8);
    uStack_555 = (undefined1)((ulong)pcStack_620 >> 0x18);
    uStack_554 = (uint)((ulong)pcStack_620 >> 0x20);
    pcStack_550 = (code *)auStack_618._0_8_;
    uVar6 = auStack_618._8_4_;
    uVar50 = auStack_618._12_4_;
    if ((DAT_0f75ba10 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75ba10), iVar52 != 0)) {
      func_0x0e645c00();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b990,0xf53dab8);
      func_0x0410844d(&DAT_0f75ba10);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b990 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4dead0;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75b990 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4dead0:
      puVar67 = &DAT_0f75b990;
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4deb7e:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4debaa;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4debaa:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar77[0] = -(*pbVar66 == 0x5b);
            auVar77[1] = -(pbVar66[1] == 99);
            auVar77[2] = -(pbVar66[2] == 0x65);
            auVar77[3] = -(pbVar66[3] == 0x72);
            auVar77[4] = -(pbVar66[4] == 0x65);
            auVar77[5] = -(pbVar66[5] == 0x61);
            auVar77[6] = -(pbVar66[6] == 0x6c);
            auVar77[7] = -(pbVar66[7] == 0x3a);
            auVar77[8] = -(pbVar66[8] == 100);
            auVar77[9] = -(pbVar66[9] == 0x6f);
            auVar77[10] = -(pbVar66[10] == 99);
            auVar77[0xb] = -(pbVar66[0xb] == 0x75);
            auVar77[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar77[0xd] = -(pbVar66[0xd] == 0x65);
            auVar77[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar77[0xf] = -(pbVar66[0xf] == 0x74);
            auVar94[0] = -(pbVar66[10] == 99);
            auVar94[1] = -(pbVar66[0xb] == 0x75);
            auVar94[2] = -(pbVar66[0xc] == 0x6d);
            auVar94[3] = -(pbVar66[0xd] == 0x65);
            auVar94[4] = -(pbVar66[0xe] == 0x6e);
            auVar94[5] = -(pbVar66[0xf] == 0x74);
            auVar94[6] = -(pbVar66[0x10] == 0x61);
            auVar94[7] = -(pbVar66[0x11] == 0x74);
            auVar94[8] = -(pbVar66[0x12] == 0x69);
            auVar94[9] = -(pbVar66[0x13] == 0x6f);
            auVar94[10] = -(pbVar66[0x14] == 0x6e);
            auVar94[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar94[0xc] = -(pbVar66[0x16] == 0x74);
            auVar94[0xd] = -(pbVar66[0x17] == 0x61);
            auVar94[0xe] = -(pbVar66[0x18] == 0x67);
            auVar94[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar94 = auVar94 & auVar77;
            if ((ushort)((ushort)(SUB161(auVar94 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar94[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar67 = (undefined1 *)plVar60[2];
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4deb7e;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4debde:
      if (uVar6 == 0) {
        if (((puVar67 == (undefined1 *)0x0) || (*(int *)(puVar67 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar67 + 0x68) == 0)) goto LAB_0e4dec5a;
        lVar73 = *(long *)(puVar67 + 0x68) + 0x38;
      }
      else {
        if (puVar67 == (undefined1 *)0x0) {
          puVar67 = (undefined1 *)func_0x048aead0((long)auVar48 + 0x18);
        }
        auStack_748._0_8_ = func_0x048b0c90((long)auVar48 + 0x18,puVar67,uVar50,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4dec5a;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4dec5a:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar10 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcVar58 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar58 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)(pcVar58 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar58 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcVar58 = _DAT_013bbacd;
      *(long *)(pcVar58 + 8) = lVar72;
      pcVar58[0x1a] = (code)0x0;
      pcStack_668 = pcVar58;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar58 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar58 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar58 = pcStack_728;
      }
      if (pcVar58 != (code *)0x0) {
        (*pcVar58)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') &&
         (uStack_5b8 = puVar67, iVar55 = func_0x04108328(&DAT_0f550ad8), puVar67 = uStack_5b8,
         iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
        puVar67 = uStack_5b8;
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4debde;
    }
    bStack_5a8 = auVar75[0];
    uStack_5a7 = auVar75._1_7_;
    pcStack_590 = (code *)CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT21(uStack_557,uStack_558)));
    bStack_5a0 = bStack_568;
    uStack_59f = uStack_567;
    uStack_598 = (undefined4)CONCAT71(uStack_55f,bStack_560);
    uStack_594 = (uint)((uint7)uStack_55f >> 0x18);
    pcStack_588 = pcStack_550;
    uStack_578 = SUB84(pcVar57,0);
    iStack_574 = (int)((ulong)pcVar57 >> 0x20);
    iStack_580 = 2;
    uStack_57c = 0x5127f14d;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    lStack_6f8 = 0;
    lStack_6f0 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_703 = 0;
    uStack_701 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    cStack_718 = '\0';
    uStack_717 = 0;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    pcStack_728 = (code *)0x0;
    uStack_720 = 0;
    cStack_71c = 0;
    uStack_71b = 0;
    uStack_71a = 0;
    uStack_738 = 0;
    uStack_734 = 0;
    iStack_730 = 0;
    iStack_72c = 0;
    auStack_748 = (undefined1  [16])0x0;
    uStack_6d8 = 0x3f600000;
    func_0x048afb10(&uStack_708,8);
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    uStack_6c0 = 0;
    uStack_6bc = 0;
    lStack_6b8 = 0;
    lStack_6d0 = 0;
    lStack_6c8 = 0;
    uStack_6a0 = 0xff00;
    uStack_69c = uStack_69c & 0xffffff00;
    uStack_698 = uStack_698 & 0xffffff00;
    uStack_694 = uStack_694 & 0xffffff00;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c3e90;
    uVar64 = auStack_748._0_8_;
    auStack_748._0_8_ = puVar70;
    if ((long *)uVar64 != (long *)0x0) {
      (**(code **)(*(long *)uVar64 + 8))();
    }
    if ((uStack_720 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_70a,CONCAT42(uStack_70e,uStack_710)),
                      CONCAT26(uStack_71a,CONCAT15(uStack_71b,CONCAT14(cStack_71c,uStack_720))) &
                      0xfffffffffffffffe);
    }
    uStack_720 = 0x70797408;
    cStack_71c = 'e';
    uStack_71b = 0;
    if ((DAT_0f75ba30 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75ba30), iVar52 != 0)) {
      func_0x0e645d10();
      func_0x0410844d(&DAT_0f75ba30);
    }
    auStack_7b8._0_4_ = uStack_57c;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)CONCAT44(pcStack_7a8._4_4_,3);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe640bc0;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e63c860;
    puStack_778 = &UNK_0e646d80;
    puStack_770 = &UNK_0e646d90;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(&bStack_5a0,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    pcStack_678 = (code *)CONCAT71(uStack_59f,bStack_5a0);
    pcStack_670 = (code *)CONCAT44(uStack_594,uStack_598);
    pcStack_668 = pcStack_590;
    pcStack_660 = pcStack_588;
    func_0x0e646b10(auStack_7b8,&pcStack_678,auStack_748);
    if (uStack_7a0._4_4_ == 2) {
      piVar63 = *(int **)(*(long *)((long)pcStack_7a8 + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != (int)uStack_7a0) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      pcVar57 = *(code **)(piVar63 + 0xc);
      while (pcVar57 != pcStack_7b0) {
        piVar63 = *(int **)(piVar63 + 0xe);
        pcVar57 = *(code **)(piVar63 + 0xc);
      }
LAB_0e4df0bf:
      *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 9;
    }
    else {
      if (uStack_7a0._4_4_ == 1) {
        piVar63 = *(int **)(*(long *)((long)pcStack_7a8 + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != (int)uStack_7a0) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4df0bf;
      }
      if (uStack_7a0._4_4_ == 0) {
        *(uint *)((long)pcStack_7a8 + 0x18U) = *(uint *)((long)pcStack_7a8 + 0x18U) | 0x90000;
      }
    }
    auStack_5f8._1_7_ = uStack_5a7;
    auStack_5f8[0] = bStack_5a8;
    auStack_5f8._9_7_ = uStack_59f;
    auStack_5f8[8] = bStack_5a0;
    pcStack_5e8 = (code *)CONCAT44(uStack_594,uStack_598);
    pcStack_5e0 = pcStack_590;
    pcStack_5d8 = pcStack_588;
    iStack_5d0 = iStack_580;
    uStack_5cc = uStack_57c;
    uStack_5c8 = CONCAT31(uStack_5c8._1_3_,(undefined1)uStack_578);
    FUN_048b0bc0(auStack_748);
    func_0x0e646de0(auStack_748,auStack_5f8,&UNK_012ba56c);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c4118;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe64cb80;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e64aba0;
    puStack_778 = &UNK_0e64cc40;
    puStack_770 = &UNK_0e64cda0;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e647020(auStack_748);
    uStack_648 = CONCAT31(uStack_648._1_3_,(char)uStack_5c8);
    uStack_658 = SUB84(pcStack_5d8,0);
    uStack_654 = (undefined4)((ulong)pcStack_5d8 >> 0x20);
    iStack_650 = iStack_5d0;
    uStack_64c = uStack_5cc;
    pcStack_668 = pcStack_5e8;
    pcStack_660 = pcStack_5e0;
    pcStack_678 = (code *)auStack_5f8._0_8_;
    pcStack_670 = (code *)auStack_5f8._8_8_;
    FUN_048b0bc0(&iStack_730);
    func_0x0e646de0(auStack_748,&pcStack_678,&UNK_011e9523);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c4118;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe64cb80;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e64aba0;
    puStack_778 = &UNK_0e64d220;
    puStack_770 = &UNK_0e64d380;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e647020(auStack_748);
    FUN_048b0bc0(&iStack_730);
  }
  if ((DAT_0f75bb80 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bb80), iVar52 != 0)) {
    func_0x0e64d610();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bb00,0xf53dab8);
    func_0x0410844d(&DAT_0f75bb80);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75bb00 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4df3f5;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75bb00 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4df3f5:
    puVar56 = &DAT_0f75bb00;
    if (iRam000000000f75bb60 != -0x2b3da790) goto LAB_0e4df469;
LAB_0e4df425:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4df469;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e64da10(auStack_638,uStack_750,lVar72,uVar68);
    pcVar57 = pcStack_608;
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4df425;
LAB_0e4df469:
    func_0x0e64da10(auStack_638,uStack_750,&UNK_01442d48,0x1a);
    pcVar57 = pcStack_608;
  }
  bVar74 = (char)pcStack_608 == '\0';
  pcStack_608 = pcVar57;
  if (bVar74) {
    auVar48 = auStack_638;
    bStack_5a8 = auStack_638[8];
    uStack_5a7 = auStack_638._9_7_;
    bStack_5a0 = (byte)pcStack_628;
    uStack_59f = (undefined7)((ulong)pcStack_628 >> 8);
    uStack_598 = SUB84(pcStack_620,0);
    uStack_594 = (uint)((ulong)pcStack_620 >> 0x20);
    pcStack_590 = (code *)auStack_618._0_8_;
    uVar6 = auStack_618._8_4_;
    uVar50 = auStack_618._12_4_;
    if ((DAT_0f75bb80 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bb80), iVar52 != 0)) {
      func_0x0e64d610();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bb00,0xf53dab8);
      func_0x0410844d(&DAT_0f75bb80);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75bb00 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4df540;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75bb00 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4df540:
      puVar67 = &DAT_0f75bb00;
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4df5ee:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4df61a;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4df61a:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar78[0] = -(*pbVar66 == 0x5b);
            auVar78[1] = -(pbVar66[1] == 99);
            auVar78[2] = -(pbVar66[2] == 0x65);
            auVar78[3] = -(pbVar66[3] == 0x72);
            auVar78[4] = -(pbVar66[4] == 0x65);
            auVar78[5] = -(pbVar66[5] == 0x61);
            auVar78[6] = -(pbVar66[6] == 0x6c);
            auVar78[7] = -(pbVar66[7] == 0x3a);
            auVar78[8] = -(pbVar66[8] == 100);
            auVar78[9] = -(pbVar66[9] == 0x6f);
            auVar78[10] = -(pbVar66[10] == 99);
            auVar78[0xb] = -(pbVar66[0xb] == 0x75);
            auVar78[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar78[0xd] = -(pbVar66[0xd] == 0x65);
            auVar78[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar78[0xf] = -(pbVar66[0xf] == 0x74);
            auVar95[0] = -(pbVar66[10] == 99);
            auVar95[1] = -(pbVar66[0xb] == 0x75);
            auVar95[2] = -(pbVar66[0xc] == 0x6d);
            auVar95[3] = -(pbVar66[0xd] == 0x65);
            auVar95[4] = -(pbVar66[0xe] == 0x6e);
            auVar95[5] = -(pbVar66[0xf] == 0x74);
            auVar95[6] = -(pbVar66[0x10] == 0x61);
            auVar95[7] = -(pbVar66[0x11] == 0x74);
            auVar95[8] = -(pbVar66[0x12] == 0x69);
            auVar95[9] = -(pbVar66[0x13] == 0x6f);
            auVar95[10] = -(pbVar66[0x14] == 0x6e);
            auVar95[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar95[0xc] = -(pbVar66[0x16] == 0x74);
            auVar95[0xd] = -(pbVar66[0x17] == 0x61);
            auVar95[0xe] = -(pbVar66[0x18] == 0x67);
            auVar95[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar95 = auVar95 & auVar78;
            if ((ushort)((ushort)(SUB161(auVar95 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar95 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar95 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar95 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar95 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar95 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar95 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar95 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar95 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar95 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar95 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar95 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar95 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar95 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar95 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar95[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar67 = (undefined1 *)plVar60[2];
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4df5ee;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4df64e:
      if (uVar6 == 0) {
        if (((puVar67 == (undefined1 *)0x0) || (*(int *)(puVar67 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar67 + 0x68) == 0)) goto LAB_0e4df6ca;
        lVar73 = *(long *)(puVar67 + 0x68) + 0x38;
      }
      else {
        if (puVar67 == (undefined1 *)0x0) {
          puVar67 = (undefined1 *)func_0x048aead0((long)auVar48 + 0x18);
        }
        auStack_748._0_8_ = func_0x048b0c90((long)auVar48 + 0x18,puVar67,uVar50,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4df6ca;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4df6ca:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar11 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcVar58 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar58 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)(pcVar58 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar58 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcVar58 = _DAT_013bbacd;
      *(long *)(pcVar58 + 8) = lVar72;
      pcVar58[0x1a] = (code)0x0;
      pcStack_668 = pcVar58;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar58 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar58 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar58 = pcStack_728;
      }
      if (pcVar58 != (code *)0x0) {
        (*pcVar58)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') &&
         (uStack_5b8 = puVar67, iVar55 = func_0x04108328(&DAT_0f550ad8), puVar67 = uStack_5b8,
         iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
        puVar67 = uStack_5b8;
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4df64e;
    }
    auStack_5f8._9_7_ = uStack_5a7;
    auStack_5f8[8] = bStack_5a8;
    pcStack_5e8 = (code *)CONCAT71(uStack_59f,bStack_5a0);
    pcStack_5e0 = (code *)CONCAT44(uStack_594,uStack_598);
    auStack_5f8._0_8_ = auVar48;
    pcStack_5d8 = pcStack_590;
    uStack_5c8 = SUB84(pcVar57,0);
    iStack_5c4 = (int)((ulong)pcVar57 >> 0x20);
    iStack_5d0 = 2;
    uStack_5cc = 0x5127f14d;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    lStack_6f8 = 0;
    lStack_6f0 = 0;
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_703 = 0;
    uStack_701 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    cStack_718 = 0;
    uStack_717 = 0;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    pcStack_728 = (code *)0x0;
    uStack_720 = 0;
    cStack_71c = 0;
    uStack_71b = 0;
    uStack_71a = 0;
    uStack_738 = 0;
    uStack_734 = 0;
    iStack_730 = 0;
    iStack_72c = 0;
    auStack_748 = (undefined1  [16])0x0;
    uStack_6d8 = 0x3f600000;
    func_0x048afb10(&uStack_708,8);
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    uStack_6c0 = 0;
    uStack_6bc = 0;
    lStack_6b8 = 0;
    lStack_6d0 = 0;
    lStack_6c8 = 0;
    uStack_6a0 = 0xff00;
    uStack_69c = uStack_69c & 0xffffff00;
    uStack_698 = uStack_698 & 0xffffff00;
    uStack_694 = uStack_694 & 0xffffff00;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c3e90;
    uVar64 = auStack_748._0_8_;
    auStack_748._0_8_ = puVar70;
    if ((long *)uVar64 != (long *)0x0) {
      (**(code **)(*(long *)uVar64 + 8))();
    }
    if ((uStack_720 & 1) != 0) {
      func_0x0412a280(CONCAT26(uStack_70a,CONCAT42(uStack_70e,uStack_710)),
                      CONCAT26(uStack_71a,CONCAT15(uStack_71b,CONCAT14(cStack_71c,uStack_720))) &
                      0xfffffffffffffffe);
    }
    uStack_720 = 0x70797408;
    cStack_71c = 0x65;
    uStack_71b = 0;
    if ((DAT_0f75bba0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bba0), iVar52 != 0)) {
      func_0x0e64d720();
      func_0x0410844d(&DAT_0f75bba0);
    }
    auStack_7b8._0_4_ = uStack_5cc;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)CONCAT44(pcStack_7a8._4_4_,3);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe640bc0;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e63c860;
    puStack_778 = &UNK_0e64e790;
    puStack_770 = &UNK_0e64e7a0;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_5f8 + 8,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    pcStack_668 = pcStack_5e0;
    pcStack_660 = pcStack_5d8;
    pcStack_678 = (code *)auStack_5f8._8_8_;
    pcStack_670 = pcStack_5e8;
    func_0x0e64e520(auStack_7b8,&pcStack_678,auStack_748);
    if (uStack_7a0._4_4_ == 2) {
      piVar63 = *(int **)(*(long *)((long)pcStack_7a8 + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != (int)uStack_7a0) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      pcVar57 = *(code **)(piVar63 + 0xc);
      while (pcVar57 != pcStack_7b0) {
        piVar63 = *(int **)(piVar63 + 0xe);
        pcVar57 = *(code **)(piVar63 + 0xc);
      }
LAB_0e4dfb8f:
      *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 9;
    }
    else {
      if (uStack_7a0._4_4_ == 1) {
        piVar63 = *(int **)(*(long *)((long)pcStack_7a8 + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != (int)uStack_7a0) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4dfb8f;
      }
      if (uStack_7a0._4_4_ == 0) {
        *(uint *)((long)pcStack_7a8 + 0x18U) = *(uint *)((long)pcStack_7a8 + 0x18U) | 0x90000;
      }
    }
    pcStack_678 = (code *)auStack_5f8._0_8_;
    pcStack_670 = (code *)auStack_5f8._8_8_;
    pcStack_668 = pcStack_5e8;
    pcStack_660 = pcStack_5e0;
    uStack_658 = SUB84(pcStack_5d8,0);
    uStack_654 = (undefined4)((ulong)pcStack_5d8 >> 0x20);
    iStack_650 = iStack_5d0;
    uStack_64c = uStack_5cc;
    uStack_648 = CONCAT31(uStack_648._1_3_,(char)uStack_5c8);
    FUN_048b0bc0(auStack_748);
    if ((DAT_0f75bba0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bba0), iVar52 != 0)) {
      func_0x0e64d720();
      func_0x0410844d(&DAT_0f75bba0);
    }
    pcVar57 = pcStack_678;
    iStack_650 = 1;
    uStack_64c = 0x425ed3ca;
    if ((DAT_0f75bb80 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bb80), iVar52 != 0)) {
      func_0x0e64d610();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bb00,0xf53dab8);
      func_0x0410844d(&DAT_0f75bb80);
    }
    plVar60 = (long *)(*(long *)(pcVar57 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar57 + 0x20) - *(long *)(pcVar57 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75bb00 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4dfc70;
      plVar60 = (long *)(*(long *)(pcVar57 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)(pcVar57 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75bb00 + 4));
    if (plVar60 == *(long **)(pcVar57 + 0x38)) {
LAB_0e4dfc70:
      auStack_748._0_8_ = &DAT_0f75bb00;
    }
    else {
      auStack_748._0_8_ = plVar60[2];
    }
    auStack_748._8_8_ = pcVar57 + 0x18;
    func_0x0ed621a0(auStack_748,uStack_64c);
    auStack_748._0_2_ = 1;
    auStack_748._8_8_ = &pcStack_670;
    uStack_738 = uStack_64c;
    iStack_730 = 0;
    iStack_72c = 0;
    pcStack_728 = (code *)0x0;
    uStack_720 = 0;
    cStack_71c = '\0';
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = '\0';
    uStack_717 = 0;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    uStack_708 = 0x6c61760a;
    uStack_704 = 0x75;
    uStack_703 = 0x65;
    lStack_6f0 = 0;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    uStack_6d8 = 0;
    uStack_6d4 = 0;
    lStack_6d0 = 0;
    lStack_6c8 = 0;
    uStack_6c0 = 0x3f600000;
    func_0x048afb10(&lStack_6f0,8);
    uStack_698 = 0;
    uStack_694 = 0;
    lStack_690 = 0;
    lStack_6a8 = 0;
    uStack_6a0 = 0;
    uStack_69e = 0;
    uStack_69c = 0;
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    uStack_688 = 0xff00;
    uStack_684 = uStack_684 & 0xffffff00;
    uStack_680 = uStack_680 & 0xffffff00;
    uStack_67c = 0;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c4118;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe64cb80;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e64aba0;
    puStack_778 = &UNK_0e64e7f0;
    puStack_770 = &UNK_0e64e950;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e64e520(auStack_7b8,auStack_748._8_8_,&iStack_730);
    if (uStack_7a0._4_4_ == 2) {
      piVar63 = *(int **)(*(long *)(pcStack_7a8 + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != (int)uStack_7a0) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      pcVar57 = *(code **)(piVar63 + 0xc);
      while (pcVar57 != pcStack_7b0) {
        piVar63 = *(int **)(piVar63 + 0xe);
        pcVar57 = *(code **)(piVar63 + 0xc);
      }
LAB_0e4dff2f:
      piVar63[4] = piVar63[4] | auStack_748._0_4_ << 0x10;
    }
    else {
      if (uStack_7a0._4_4_ == 1) {
        piVar63 = *(int **)(*(long *)(pcStack_7a8 + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != (int)uStack_7a0) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4dff2f;
      }
      if (uStack_7a0._4_4_ == 0) {
        *(uint *)(pcStack_7a8 + 0x18) = *(uint *)(pcStack_7a8 + 0x18) | auStack_748._0_4_ << 0x10;
      }
    }
    FUN_048b0bc0(&iStack_730);
  }
  lVar73 = uStack_750;
  func_0x0e50ba60(uStack_750);
  if ((DAT_0f75ac00 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75ac00), iVar52 != 0)) {
    func_0x0e623900();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ab80,0xf53dab8);
    func_0x0410844d(&DAT_0f75ac00);
  }
  plVar60 = (long *)(*(long *)(lVar73 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar73 + 0x20) - *(long *)(lVar73 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f75ab80 + 4)) * 8);
  do {
    lVar72 = *plVar60;
    if (lVar72 == -1) goto LAB_0e4dffa5;
    plVar60 = (long *)(*(long *)(lVar73 + 0x30) + lVar72 * 0x18);
  } while (*(uint *)(*(long *)(lVar73 + 0x30) + 8 + lVar72 * 0x18) != *(uint *)(_DAT_0f75ab80 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4dffa5:
    puVar56 = &DAT_0f75ab80;
    if (iRam000000000f75abe0 != -0x2b3da790) goto LAB_0e4e0019;
LAB_0e4dffd5:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e0019;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e623fb0(auStack_638,uStack_750,lVar72,uVar68);
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4dffd5;
LAB_0e4e0019:
    func_0x0e623fb0(auStack_638,uStack_750,&UNK_012b8796,0xf);
  }
  if ((char)pcStack_608 == '\0') {
    auVar48 = auStack_638;
    bStack_5a8 = auStack_638[8];
    uStack_5a7 = auStack_638._9_7_;
    bStack_5a0 = (byte)pcStack_628;
    uStack_59f = (undefined7)((ulong)pcStack_628 >> 8);
    uStack_598 = SUB84(pcStack_620,0);
    uStack_594 = (uint)((ulong)pcStack_620 >> 0x20);
    pcStack_590 = (code *)auStack_618._0_8_;
    uVar6 = auStack_618._8_4_;
    uVar50 = auStack_618._12_4_;
    uStack_5b8 = pcStack_608;
    if ((DAT_0f75ac00 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75ac00), iVar52 != 0)) {
      func_0x0e623900();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ab80,0xf53dab8);
      func_0x0410844d(&DAT_0f75ac00);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75ab80 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e00f0;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75ab80 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4e00f0:
      puVar56 = &DAT_0f75ab80;
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4e019e:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4e01ca;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4e01ca:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar79[0] = -(*pbVar66 == 0x5b);
            auVar79[1] = -(pbVar66[1] == 99);
            auVar79[2] = -(pbVar66[2] == 0x65);
            auVar79[3] = -(pbVar66[3] == 0x72);
            auVar79[4] = -(pbVar66[4] == 0x65);
            auVar79[5] = -(pbVar66[5] == 0x61);
            auVar79[6] = -(pbVar66[6] == 0x6c);
            auVar79[7] = -(pbVar66[7] == 0x3a);
            auVar79[8] = -(pbVar66[8] == 100);
            auVar79[9] = -(pbVar66[9] == 0x6f);
            auVar79[10] = -(pbVar66[10] == 99);
            auVar79[0xb] = -(pbVar66[0xb] == 0x75);
            auVar79[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar79[0xd] = -(pbVar66[0xd] == 0x65);
            auVar79[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar79[0xf] = -(pbVar66[0xf] == 0x74);
            auVar96[0] = -(pbVar66[10] == 99);
            auVar96[1] = -(pbVar66[0xb] == 0x75);
            auVar96[2] = -(pbVar66[0xc] == 0x6d);
            auVar96[3] = -(pbVar66[0xd] == 0x65);
            auVar96[4] = -(pbVar66[0xe] == 0x6e);
            auVar96[5] = -(pbVar66[0xf] == 0x74);
            auVar96[6] = -(pbVar66[0x10] == 0x61);
            auVar96[7] = -(pbVar66[0x11] == 0x74);
            auVar96[8] = -(pbVar66[0x12] == 0x69);
            auVar96[9] = -(pbVar66[0x13] == 0x6f);
            auVar96[10] = -(pbVar66[0x14] == 0x6e);
            auVar96[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar96[0xc] = -(pbVar66[0x16] == 0x74);
            auVar96[0xd] = -(pbVar66[0x17] == 0x61);
            auVar96[0xe] = -(pbVar66[0x18] == 0x67);
            auVar96[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar96 = auVar96 & auVar79;
            if ((ushort)((ushort)(SUB161(auVar96 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar96 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar96 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar96 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar96 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar96 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar96 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar96 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar96 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar96 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar96 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar96 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar96 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar96 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar96 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar96[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar56 = (undefined *)plVar60[2];
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4e019e;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4e01fe:
      if (uVar6 == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4e0279;
        lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0((long)auVar48 + 0x18);
        }
        auStack_748._0_8_ = func_0x048b0c90((long)auVar48 + 0x18,puVar56,uVar50,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4e0279;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4e0279:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar12 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar57 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)(pcVar57 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar57 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcVar57 = _DAT_013bbacd;
      *(long *)(pcVar57 + 8) = lVar72;
      pcVar57[0x1a] = (code)0x0;
      pcStack_668 = pcVar57;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4e01fe;
    }
    auStack_5f8._9_7_ = uStack_5a7;
    auStack_5f8[8] = bStack_5a8;
    pcStack_5e8 = (code *)CONCAT71(uStack_59f,bStack_5a0);
    pcStack_5e0 = (code *)CONCAT44(uStack_594,uStack_598);
    auStack_5f8._0_8_ = auVar48;
    pcStack_5d8 = pcStack_590;
    iStack_5d0 = uVar6;
    uStack_5cc = uVar50;
    uStack_5c8 = SUB84(uStack_5b8,0);
    iStack_5c4 = (int)((ulong)uStack_5b8 >> 0x20);
    func_0x0e624b10(auStack_748,auStack_5f8,&UNK_014c8537,5);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef44b00;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x48b3f30;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &SUB_048b2190;
    puStack_778 = &UNK_0e625090;
    puStack_770 = &UNK_0e625250;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e624d90(auStack_748);
    uStack_648 = CONCAT31(uStack_648._1_3_,(char)uStack_5c8);
    uStack_658 = SUB84(pcStack_5d8,0);
    uStack_654 = (undefined4)((ulong)pcStack_5d8 >> 0x20);
    iStack_650 = iStack_5d0;
    uStack_64c = uStack_5cc;
    pcStack_668 = pcStack_5e8;
    pcStack_660 = pcStack_5e0;
    pcStack_678 = (code *)auStack_5f8._0_8_;
    pcStack_670 = (code *)auStack_5f8._8_8_;
    FUN_048b0bc0(&iStack_730);
    func_0x0e624b10(auStack_748,&pcStack_678,&UNK_0142cb75,6);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c35f8;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe625650;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e6214a0;
    puStack_778 = &UNK_0e625710;
    puStack_770 = &UNK_0e6258e0;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e624d90(auStack_748);
    FUN_048b0bc0(&iStack_730);
  }
  lVar73 = uStack_750;
  func_0x0e50ba60(uStack_750);
  bStack_568 = 0x24;
  uStack_567 = (undefined7)_DAT_01250bf9;
  bStack_560 = (byte)((ulong)_DAT_01250bf9 >> 0x38);
  uStack_55f = (undefined7)_UNK_01250c01;
  uStack_558 = (undefined1)((ulong)_UNK_01250c01 >> 0x38);
  uStack_557 = 0x6c6f;
  uStack_555 = 0;
  if ((DAT_0f75acb8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75acb8), iVar52 != 0)) {
    func_0x0e625e20();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ac38,0xf53dab8);
    func_0x0410844d(&DAT_0f75acb8);
  }
  plVar60 = (long *)(*(long *)(lVar73 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar73 + 0x20) - *(long *)(lVar73 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f75ac38 + 4)) * 8);
  do {
    lVar72 = *plVar60;
    if (lVar72 == -1) goto LAB_0e4e0815;
    plVar60 = (long *)(*(long *)(lVar73 + 0x30) + lVar72 * 0x18);
  } while (*(uint *)(*(long *)(lVar73 + 0x30) + 8 + lVar72 * 0x18) != *(uint *)(_DAT_0f75ac38 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e0815:
    puVar56 = &DAT_0f75ac38;
    if (_DAT_0f75ac98 != -0x2b3da790) goto LAB_0e4e0889;
LAB_0e4e0845:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e0889;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e6269a0(auStack_638,uStack_750,lVar72,uVar68);
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4e0845;
LAB_0e4e0889:
    func_0x0e6269a0(auStack_638,uStack_750,&uStack_567,0x12);
  }
  if ((char)pcStack_608 == '\0') {
    auVar48 = auStack_638;
    if ((DAT_0f75acb8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75acb8), iVar52 != 0)) {
      func_0x0e625e20();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ac38,0xf53dab8);
      func_0x0410844d(&DAT_0f75acb8);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75ac38 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e0920;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75ac38 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4e0920:
      puVar56 = &DAT_0f75ac38;
    }
    else {
      puVar56 = (undefined *)plVar60[2];
    }
    for (pbVar59 = *(byte **)((long)auStack_638 + 0x50);
        pbVar59 != *(byte **)((long)auStack_638 + 0x58); pbVar59 = pbVar59 + 0x38) {
      bVar3 = *pbVar59;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e4e09fa;
      }
      else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4e09fa:
        if ((bVar3 & 1) == 0) {
          pbVar65 = pbVar59 + 1;
        }
        else {
          pbVar65 = *(byte **)(pbVar59 + 0x10);
        }
        auVar80[0] = -(*pbVar65 == 0x5b);
        auVar80[1] = -(pbVar65[1] == 99);
        auVar80[2] = -(pbVar65[2] == 0x65);
        auVar80[3] = -(pbVar65[3] == 0x72);
        auVar80[4] = -(pbVar65[4] == 0x65);
        auVar80[5] = -(pbVar65[5] == 0x61);
        auVar80[6] = -(pbVar65[6] == 0x6c);
        auVar80[7] = -(pbVar65[7] == 0x3a);
        auVar80[8] = -(pbVar65[8] == 100);
        auVar80[9] = -(pbVar65[9] == 0x6f);
        auVar80[10] = -(pbVar65[10] == 99);
        auVar80[0xb] = -(pbVar65[0xb] == 0x75);
        auVar80[0xc] = -(pbVar65[0xc] == 0x6d);
        auVar80[0xd] = -(pbVar65[0xd] == 0x65);
        auVar80[0xe] = -(pbVar65[0xe] == 0x6e);
        auVar80[0xf] = -(pbVar65[0xf] == 0x74);
        auVar97[0] = -(pbVar65[10] == 99);
        auVar97[1] = -(pbVar65[0xb] == 0x75);
        auVar97[2] = -(pbVar65[0xc] == 0x6d);
        auVar97[3] = -(pbVar65[0xd] == 0x65);
        auVar97[4] = -(pbVar65[0xe] == 0x6e);
        auVar97[5] = -(pbVar65[0xf] == 0x74);
        auVar97[6] = -(pbVar65[0x10] == 0x61);
        auVar97[7] = -(pbVar65[0x11] == 0x74);
        auVar97[8] = -(pbVar65[0x12] == 0x69);
        auVar97[9] = -(pbVar65[0x13] == 0x6f);
        auVar97[10] = -(pbVar65[0x14] == 0x6e);
        auVar97[0xb] = -(pbVar65[0x15] == 0x5f);
        auVar97[0xc] = -(pbVar65[0x16] == 0x74);
        auVar97[0xd] = -(pbVar65[0x17] == 0x61);
        auVar97[0xe] = -(pbVar65[0x18] == 0x67);
        auVar97[0xf] = -(pbVar65[0x19] == 0x5d);
        auVar97 = auVar97 & auVar80;
        if ((ushort)((ushort)(SUB161(auVar97 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar97 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar97 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar97 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar97 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar97 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar97 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar97 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar97 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar97 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar97 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar97 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar97 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar97 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar97 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar97[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar59 == *(byte **)((long)auStack_638 + 0x58)) {
LAB_0e4e0a28:
      if (auStack_618._8_4_ == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4e0ab0;
        lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        uVar6 = auStack_618._12_4_;
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0((long)auVar48 + 0x18);
        }
        auStack_748._0_8_ = func_0x048b0c90((long)auVar48 + 0x18,puVar56,uVar6,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4e0ab0;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4e0ab0:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar13 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar57 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)(pcVar57 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar57 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcVar57 = _DAT_013bbacd;
      *(long *)(pcVar57 + 8) = lVar72;
      pcVar57[0x1a] = (code)0x0;
      pcStack_668 = pcVar57;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4e0a28;
    }
    uStack_5c8 = SUB84(pcStack_608,0);
    iStack_5c4 = (int)((ulong)pcStack_608 >> 0x20);
    pcStack_5d8 = (code *)auStack_618._0_8_;
    iStack_5d0 = auStack_618._8_4_;
    uStack_5cc = auStack_618._12_4_;
    pcStack_5e8 = pcStack_628;
    pcStack_5e0 = pcStack_620;
    auStack_5f8 = _auStack_638;
    func_0x0e627530(auStack_748,auStack_5f8,&UNK_0123ca5a,6);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f012080;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x5dd3ca0;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_05dd3990;
    puStack_778 = &UNK_0e627ac0;
    puStack_770 = &UNK_0e627c20;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e6277c0(auStack_748);
    uStack_648 = CONCAT31(uStack_648._1_3_,(char)uStack_5c8);
    uStack_658 = SUB84(pcStack_5d8,0);
    uStack_654 = (undefined4)((ulong)pcStack_5d8 >> 0x20);
    iStack_650 = iStack_5d0;
    uStack_64c = uStack_5cc;
    pcStack_668 = pcStack_5e8;
    pcStack_660 = pcStack_5e0;
    pcStack_678 = (code *)auStack_5f8._0_8_;
    pcStack_670 = (code *)auStack_5f8._8_8_;
    FUN_048b0bc0(&iStack_730);
    func_0x0e627530(auStack_748,&pcStack_678,&UNK_01446a5b,4);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c35f8;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe625650;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e6214a0;
    puStack_778 = &UNK_0e627df0;
    puStack_770 = &UNK_0e627fc0;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e6277c0(auStack_748);
    FUN_048b0bc0(&iStack_730);
  }
  if ((bStack_568 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT21(uStack_557,uStack_558))),
                    CONCAT71(uStack_567,bStack_568) & 0xfffffffffffffffe);
  }
  if ((DAT_0f75ae28 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75ae28), iVar52 != 0)) {
    func_0x0e628260();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ada8,0xf53dab8);
    func_0x0410844d(&DAT_0f75ae28);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75ada8 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4e0fd5;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75ada8 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e0fd5:
    puVar56 = &DAT_0f75ada8;
    if (iRam000000000f75ae08 != -0x2b3da790) goto LAB_0e4e1049;
LAB_0e4e1005:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e1049;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e628950(auStack_638,uStack_750,lVar72,uVar68);
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4e1005;
LAB_0e4e1049:
    func_0x0e628950(auStack_638,uStack_750,&UNK_014c393d,0xf);
  }
  if ((char)pcStack_608 == '\0') {
    auVar48 = auStack_638;
    bStack_5a8 = auStack_638[8];
    uStack_5a7 = auStack_638._9_7_;
    bStack_5a0 = (byte)pcStack_628;
    uStack_59f = (undefined7)((ulong)pcStack_628 >> 8);
    uStack_598 = SUB84(pcStack_620,0);
    uStack_594 = (uint)((ulong)pcStack_620 >> 0x20);
    pcStack_590 = (code *)auStack_618._0_8_;
    uVar6 = auStack_618._8_4_;
    uVar50 = auStack_618._12_4_;
    uStack_5b8 = pcStack_608;
    if ((DAT_0f75ae28 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75ae28), iVar52 != 0)) {
      func_0x0e628260();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75ada8,0xf53dab8);
      func_0x0410844d(&DAT_0f75ae28);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75ada8 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e1120;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75ada8 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4e1120:
      puVar56 = &DAT_0f75ada8;
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4e11ce:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4e11fa;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4e11fa:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar81[0] = -(*pbVar66 == 0x5b);
            auVar81[1] = -(pbVar66[1] == 99);
            auVar81[2] = -(pbVar66[2] == 0x65);
            auVar81[3] = -(pbVar66[3] == 0x72);
            auVar81[4] = -(pbVar66[4] == 0x65);
            auVar81[5] = -(pbVar66[5] == 0x61);
            auVar81[6] = -(pbVar66[6] == 0x6c);
            auVar81[7] = -(pbVar66[7] == 0x3a);
            auVar81[8] = -(pbVar66[8] == 100);
            auVar81[9] = -(pbVar66[9] == 0x6f);
            auVar81[10] = -(pbVar66[10] == 99);
            auVar81[0xb] = -(pbVar66[0xb] == 0x75);
            auVar81[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar81[0xd] = -(pbVar66[0xd] == 0x65);
            auVar81[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar81[0xf] = -(pbVar66[0xf] == 0x74);
            auVar98[0] = -(pbVar66[10] == 99);
            auVar98[1] = -(pbVar66[0xb] == 0x75);
            auVar98[2] = -(pbVar66[0xc] == 0x6d);
            auVar98[3] = -(pbVar66[0xd] == 0x65);
            auVar98[4] = -(pbVar66[0xe] == 0x6e);
            auVar98[5] = -(pbVar66[0xf] == 0x74);
            auVar98[6] = -(pbVar66[0x10] == 0x61);
            auVar98[7] = -(pbVar66[0x11] == 0x74);
            auVar98[8] = -(pbVar66[0x12] == 0x69);
            auVar98[9] = -(pbVar66[0x13] == 0x6f);
            auVar98[10] = -(pbVar66[0x14] == 0x6e);
            auVar98[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar98[0xc] = -(pbVar66[0x16] == 0x74);
            auVar98[0xd] = -(pbVar66[0x17] == 0x61);
            auVar98[0xe] = -(pbVar66[0x18] == 0x67);
            auVar98[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar98 = auVar98 & auVar81;
            if ((ushort)((ushort)(SUB161(auVar98 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar98 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar98 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar98 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar98 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar98 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar98 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar98 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar98 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar98 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar98 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar98 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar98 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar98 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar98 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar98[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar56 = (undefined *)plVar60[2];
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4e11ce;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4e122e:
      if (uVar6 == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4e12a9;
        lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0((long)auVar48 + 0x18);
        }
        auStack_748._0_8_ = func_0x048b0c90((long)auVar48 + 0x18,puVar56,uVar50,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4e12a9;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4e12a9:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar14 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar57 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)(pcVar57 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar57 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcVar57 = _DAT_013bbacd;
      *(long *)(pcVar57 + 8) = lVar72;
      pcVar57[0x1a] = (code)0x0;
      pcStack_668 = pcVar57;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4e122e;
    }
    auStack_5f8._9_7_ = uStack_5a7;
    auStack_5f8[8] = bStack_5a8;
    pcStack_5e8 = (code *)CONCAT71(uStack_59f,bStack_5a0);
    pcStack_5e0 = (code *)CONCAT44(uStack_594,uStack_598);
    auStack_5f8._0_8_ = auVar48;
    pcStack_5d8 = pcStack_590;
    iStack_5d0 = uVar6;
    uStack_5cc = uVar50;
    uStack_5c8 = SUB84(uStack_5b8,0);
    iStack_5c4 = (int)((ulong)uStack_5b8 >> 0x20);
    func_0x0e6294b0(auStack_748,auStack_5f8,&UNK_014c8537,5);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef44b00;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x48b3f30;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &SUB_048b2190;
    puStack_778 = &UNK_0e629a50;
    puStack_770 = &UNK_0e629c10;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e629750(auStack_748);
    uStack_648 = CONCAT31(uStack_648._1_3_,(char)uStack_5c8);
    uStack_658 = SUB84(pcStack_5d8,0);
    uStack_654 = (undefined4)((ulong)pcStack_5d8 >> 0x20);
    iStack_650 = iStack_5d0;
    uStack_64c = uStack_5cc;
    pcStack_668 = pcStack_5e8;
    pcStack_660 = pcStack_5e0;
    pcStack_678 = (code *)auStack_5f8._0_8_;
    pcStack_670 = (code *)auStack_5f8._8_8_;
    FUN_048b0bc0(&iStack_730);
    func_0x0e6294b0(auStack_748,&pcStack_678,&UNK_01438276,7);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c3750;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe62d240;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e62bdb0;
    puStack_778 = &UNK_0e62d300;
    puStack_770 = &UNK_0e62d4f0;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e629750(auStack_748);
    FUN_048b0bc0(&iStack_730);
  }
  bStack_5a8 = 0x26;
  uStack_5a7 = (undefined7)_DAT_01202b26;
  bStack_5a0 = (byte)((ulong)_DAT_01202b26 >> 0x38);
  uStack_59f = (undefined7)_UNK_01202b2e;
  uStack_598 = 0x73676e69;
  uStack_594 = uStack_594 & 0xffffff00;
  if ((DAT_0f75b0b0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75b0b0), iVar52 != 0)) {
    func_0x0e62da30();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b030,0xf53dab8);
    func_0x0410844d(&DAT_0f75b0b0);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75b030 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4e17e5;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75b030 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e17e5:
    puVar56 = &DAT_0f75b030;
    if (_DAT_0f75b090 != -0x2b3da790) goto LAB_0e4e1859;
LAB_0e4e1815:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e1859;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e630c00(auStack_638,uStack_750,lVar72,uVar68);
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4e1815;
LAB_0e4e1859:
    func_0x0e630c00(auStack_638,uStack_750,&uStack_5a7,0x13);
  }
  if ((char)pcStack_608 == '\0') {
    auVar48 = auStack_638;
    if ((DAT_0f75b0b0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75b0b0), iVar52 != 0)) {
      func_0x0e62da30();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b030,0xf53dab8);
      func_0x0410844d(&DAT_0f75b0b0);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b030 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e18f0;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75b030 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4e18f0:
      puVar56 = &DAT_0f75b030;
    }
    else {
      puVar56 = (undefined *)plVar60[2];
    }
    for (pbVar59 = *(byte **)((long)auStack_638 + 0x50);
        pbVar59 != *(byte **)((long)auStack_638 + 0x58); pbVar59 = pbVar59 + 0x38) {
      bVar3 = *pbVar59;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1a) goto LAB_0e4e19ca;
      }
      else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4e19ca:
        if ((bVar3 & 1) == 0) {
          pbVar65 = pbVar59 + 1;
        }
        else {
          pbVar65 = *(byte **)(pbVar59 + 0x10);
        }
        auVar82[0] = -(*pbVar65 == 0x5b);
        auVar82[1] = -(pbVar65[1] == 99);
        auVar82[2] = -(pbVar65[2] == 0x65);
        auVar82[3] = -(pbVar65[3] == 0x72);
        auVar82[4] = -(pbVar65[4] == 0x65);
        auVar82[5] = -(pbVar65[5] == 0x61);
        auVar82[6] = -(pbVar65[6] == 0x6c);
        auVar82[7] = -(pbVar65[7] == 0x3a);
        auVar82[8] = -(pbVar65[8] == 100);
        auVar82[9] = -(pbVar65[9] == 0x6f);
        auVar82[10] = -(pbVar65[10] == 99);
        auVar82[0xb] = -(pbVar65[0xb] == 0x75);
        auVar82[0xc] = -(pbVar65[0xc] == 0x6d);
        auVar82[0xd] = -(pbVar65[0xd] == 0x65);
        auVar82[0xe] = -(pbVar65[0xe] == 0x6e);
        auVar82[0xf] = -(pbVar65[0xf] == 0x74);
        auVar99[0] = -(pbVar65[10] == 99);
        auVar99[1] = -(pbVar65[0xb] == 0x75);
        auVar99[2] = -(pbVar65[0xc] == 0x6d);
        auVar99[3] = -(pbVar65[0xd] == 0x65);
        auVar99[4] = -(pbVar65[0xe] == 0x6e);
        auVar99[5] = -(pbVar65[0xf] == 0x74);
        auVar99[6] = -(pbVar65[0x10] == 0x61);
        auVar99[7] = -(pbVar65[0x11] == 0x74);
        auVar99[8] = -(pbVar65[0x12] == 0x69);
        auVar99[9] = -(pbVar65[0x13] == 0x6f);
        auVar99[10] = -(pbVar65[0x14] == 0x6e);
        auVar99[0xb] = -(pbVar65[0x15] == 0x5f);
        auVar99[0xc] = -(pbVar65[0x16] == 0x74);
        auVar99[0xd] = -(pbVar65[0x17] == 0x61);
        auVar99[0xe] = -(pbVar65[0x18] == 0x67);
        auVar99[0xf] = -(pbVar65[0x19] == 0x5d);
        auVar99 = auVar99 & auVar82;
        if ((ushort)((ushort)(SUB161(auVar99 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar99 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar99 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar99 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar99 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar99 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar99 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar99 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar99 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar99 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar99 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar99 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar99 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar99 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar99 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar99[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar59 == *(byte **)((long)auStack_638 + 0x58)) {
LAB_0e4e19f8:
      if (auStack_618._8_4_ == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4e1a80;
        lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        uVar6 = auStack_618._12_4_;
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0((long)auVar48 + 0x18);
        }
        auStack_748._0_8_ = func_0x048b0c90((long)auVar48 + 0x18,puVar56,uVar6,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4e1a80;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4e1a80:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar15 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar57 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)(pcVar57 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar57 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcVar57 = _DAT_013bbacd;
      *(long *)(pcVar57 + 8) = lVar72;
      pcVar57[0x1a] = (code)0x0;
      pcStack_668 = pcVar57;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4e19f8;
    }
    uStack_5c8 = SUB84(pcStack_608,0);
    iStack_5c4 = (int)((ulong)pcStack_608 >> 0x20);
    pcStack_5d8 = (code *)auStack_618._0_8_;
    iStack_5d0 = auStack_618._8_4_;
    uStack_5cc = auStack_618._12_4_;
    pcStack_5e8 = pcStack_628;
    pcStack_5e0 = pcStack_620;
    auStack_5f8 = _auStack_638;
    func_0x0e631790(auStack_748,auStack_5f8,&UNK_0123ca5a,6);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f012080;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x5dd3ca0;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_05dd3990;
    puStack_778 = &UNK_0e631d20;
    puStack_770 = &UNK_0e631e80;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e631a20(auStack_748);
    uStack_648 = CONCAT31(uStack_648._1_3_,(char)uStack_5c8);
    uStack_658 = SUB84(pcStack_5d8,0);
    uStack_654 = (undefined4)((ulong)pcStack_5d8 >> 0x20);
    iStack_650 = iStack_5d0;
    uStack_64c = uStack_5cc;
    pcStack_668 = pcStack_5e8;
    pcStack_660 = pcStack_5e0;
    pcStack_678 = (code *)auStack_5f8._0_8_;
    pcStack_670 = (code *)auStack_5f8._8_8_;
    FUN_048b0bc0(&iStack_730);
    func_0x0e631790(auStack_748,&pcStack_678,&UNK_01446a5b,4);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c3980;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe636e00;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e62e1d0;
    puStack_778 = &UNK_0e636ec0;
    puStack_770 = &UNK_0e637100;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e631a20(auStack_748);
    FUN_048b0bc0(&iStack_730);
  }
  if ((bStack_5a8 & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_594,uStack_598),
                    CONCAT71(uStack_5a7,bStack_5a8) & 0xfffffffffffffffe);
  }
  if ((DAT_0f75b3f0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75b3f0), iVar52 != 0)) {
    func_0x0e637640();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b370,0xf53dab8);
    func_0x0410844d(&DAT_0f75b3f0);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75b370 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4e1fa5;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75b370 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e1fa5:
    puVar56 = &DAT_0f75b370;
    if (iRam000000000f75b3d0 != -0x2b3da790) goto LAB_0e4e2019;
LAB_0e4e1fd5:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e2019;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e637c60(auStack_638,uStack_750,lVar72,uVar68);
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4e1fd5;
LAB_0e4e2019:
    func_0x0e637c60(auStack_638,uStack_750,&UNK_01442d33,0x14);
  }
  if ((char)pcStack_608 == '\0') {
    auVar48 = auStack_638;
    auStack_5f8._8_8_ = pcStack_628;
    auStack_5f8._0_8_ = pcStack_630;
    pcStack_5e0 = (code *)auStack_618._0_8_;
    uVar6 = auStack_618._8_4_;
    uVar50 = auStack_618._12_4_;
    pcStack_5e8 = pcStack_620;
    uStack_5b8 = pcStack_608;
    if ((DAT_0f75b3f0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75b3f0), iVar52 != 0)) {
      func_0x0e637640();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b370,0xf53dab8);
      func_0x0410844d(&DAT_0f75b3f0);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75b370 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e20f0;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75b370 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4e20f0:
      puVar56 = &DAT_0f75b370;
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4e219e:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4e21ca;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4e21ca:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar83[0] = -(*pbVar66 == 0x5b);
            auVar83[1] = -(pbVar66[1] == 99);
            auVar83[2] = -(pbVar66[2] == 0x65);
            auVar83[3] = -(pbVar66[3] == 0x72);
            auVar83[4] = -(pbVar66[4] == 0x65);
            auVar83[5] = -(pbVar66[5] == 0x61);
            auVar83[6] = -(pbVar66[6] == 0x6c);
            auVar83[7] = -(pbVar66[7] == 0x3a);
            auVar83[8] = -(pbVar66[8] == 100);
            auVar83[9] = -(pbVar66[9] == 0x6f);
            auVar83[10] = -(pbVar66[10] == 99);
            auVar83[0xb] = -(pbVar66[0xb] == 0x75);
            auVar83[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar83[0xd] = -(pbVar66[0xd] == 0x65);
            auVar83[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar83[0xf] = -(pbVar66[0xf] == 0x74);
            auVar100[0] = -(pbVar66[10] == 99);
            auVar100[1] = -(pbVar66[0xb] == 0x75);
            auVar100[2] = -(pbVar66[0xc] == 0x6d);
            auVar100[3] = -(pbVar66[0xd] == 0x65);
            auVar100[4] = -(pbVar66[0xe] == 0x6e);
            auVar100[5] = -(pbVar66[0xf] == 0x74);
            auVar100[6] = -(pbVar66[0x10] == 0x61);
            auVar100[7] = -(pbVar66[0x11] == 0x74);
            auVar100[8] = -(pbVar66[0x12] == 0x69);
            auVar100[9] = -(pbVar66[0x13] == 0x6f);
            auVar100[10] = -(pbVar66[0x14] == 0x6e);
            auVar100[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar100[0xc] = -(pbVar66[0x16] == 0x74);
            auVar100[0xd] = -(pbVar66[0x17] == 0x61);
            auVar100[0xe] = -(pbVar66[0x18] == 0x67);
            auVar100[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar100 = auVar100 & auVar83;
            if ((ushort)((ushort)(SUB161(auVar100 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar100 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar100 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar100 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar100 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar100 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar100 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar100 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar100 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar100 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar100 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar100 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar100 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar100 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar100 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar100[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar56 = (undefined *)plVar60[2];
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4e219e;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4e21fe:
      if (uVar6 == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4e2279;
        lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0((code *)((long)auVar48 + 0x18));
        }
        auStack_748._0_8_ = func_0x048b0c90((code *)((long)auVar48 + 0x18),puVar56,uVar50,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4e2279;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4e2279:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar16 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      plVar60 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar60 == (long *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)((long)plVar60 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar60 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar60 = _DAT_013bbacd;
      plVar60[1] = lVar72;
      *(undefined1 *)((long)plVar60 + 0x1a) = 0;
      pcStack_668 = (code *)plVar60;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4e21fe;
    }
    pcStack_678 = (code *)auVar48;
    pcStack_670 = (code *)auStack_5f8._0_8_;
    pcStack_668 = (code *)auStack_5f8._8_8_;
    pcStack_660 = pcStack_5e8;
    uStack_658 = SUB84(pcStack_5e0,0);
    uStack_654 = (undefined4)((ulong)pcStack_5e0 >> 0x20);
    iStack_650 = uVar6;
    uStack_64c = uVar50;
    uStack_648 = SUB84(uStack_5b8,0);
    iStack_644 = (int)((ulong)uStack_5b8 >> 0x20);
    if ((DAT_0f75b410 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75b410), iVar52 != 0)) {
      func_0x0e637750();
      func_0x0410844d(&DAT_0f75b410);
    }
    pcVar57 = pcStack_678;
    iStack_650 = 1;
    uStack_64c = 0xaf6bcb6d;
    if ((DAT_0f75b3f0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75b3f0), iVar52 != 0)) {
      func_0x0e637640();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75b370,0xf53dab8);
      func_0x0410844d(&DAT_0f75b3f0);
    }
    plVar60 = (long *)(*(long *)(pcVar57 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar57 + 0x20) - *(long *)(pcVar57 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75b370 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e2510;
      plVar60 = (long *)(*(long *)(pcVar57 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)(pcVar57 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75b370 + 4));
    if (plVar60 == *(long **)(pcVar57 + 0x38)) {
LAB_0e4e2510:
      auStack_748._0_8_ = &DAT_0f75b370;
    }
    else {
      auStack_748._0_8_ = plVar60[2];
    }
    auStack_748._8_8_ = pcVar57 + 0x18;
    func_0x0ed621a0(auStack_748,uStack_64c);
    auStack_748._0_2_ = 1;
    auStack_748._8_8_ = &pcStack_670;
    uStack_738 = uStack_64c;
    iStack_730 = 0;
    iStack_72c = 0;
    pcStack_728 = (code *)0x0;
    uStack_720 = 0;
    cStack_71c = 0;
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = 0;
    uStack_717 = 0;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    uStack_708 = 0x6f72670c;
    uStack_704 = 0x75;
    uStack_703 = 0x7370;
    uStack_701 = 0;
    lStack_6f0 = 0;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    uStack_6d8 = 0;
    uStack_6d4 = 0;
    lStack_6d0 = 0;
    lStack_6c8 = 0;
    uStack_6c0 = 0x3f600000;
    func_0x048afb10(&lStack_6f0,8);
    uStack_698 = 0;
    uStack_694 = 0;
    lStack_690 = 0;
    lStack_6a8 = 0;
    uStack_6a0 = 0;
    uStack_69e = 0;
    uStack_69c = 0;
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    uStack_688 = 0xff00;
    uStack_684 = uStack_684 & 0xffffff00;
    uStack_680 = uStack_680 & 0xffffff00;
    uStack_67c = 0;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c3c88;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe63c160;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e63aa80;
    puStack_778 = &UNK_0e63c220;
    puStack_770 = &UNK_0e63c3f0;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    uVar64 = auStack_748._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar52 = func_0x04108328(&DAT_0f550a20), iVar52 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_7b8._0_4_ = _DAT_0f550a0c;
    pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (pcVar57 == (code *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    pcVar58 = pcStack_728;
    *(undefined1 (*) [16])(pcVar57 + 8) = (undefined1  [16])0x0;
    *(undefined **)pcVar57 = &UNK_0ef439d0;
    lVar73 = CONCAT44(iStack_72c,iStack_730);
    iStack_730 = 0;
    iStack_72c = 0;
    pcStack_728 = (code *)0x0;
    *(long *)(pcVar57 + 0x18) = lVar73;
    *(code **)(pcVar57 + 0x20) = pcVar58;
    *(long *)(pcVar57 + 0x38) = CONCAT26(uStack_70a,CONCAT42(uStack_70e,uStack_710));
    *(long *)(pcVar57 + 0x28) =
         CONCAT26(uStack_71a,CONCAT15(uStack_71b,CONCAT14(cStack_71c,uStack_720)));
    *(long *)(pcVar57 + 0x30) = CONCAT71(uStack_717,cStack_718);
    uStack_720 = 0;
    cStack_71c = '\0';
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = '\0';
    uStack_717 = 0;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    *(long *)(pcVar57 + 0x50) = lStack_6f8;
    *(long *)(pcVar57 + 0x40) =
         CONCAT17(uStack_701,CONCAT25(uStack_703,CONCAT14(uStack_704,uStack_708)));
    *(long *)(pcVar57 + 0x48) =
         CONCAT44(uStack_6fc,CONCAT13(uStack_6fd,CONCAT21(uStack_6ff,uStack_700)));
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_703 = 0;
    uStack_701 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    lStack_6f8 = 0;
    *(long *)(pcVar57 + 0x58) = lStack_6f0;
    *(long *)(pcVar57 + 0x60) = lStack_6e8;
    *(long *)(pcVar57 + 0x68) = lStack_6e0;
    lStack_6f0 = 0;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    *(long *)(pcVar57 + 0x70) = CONCAT44(uStack_6d4,uStack_6d8);
    *(long *)(pcVar57 + 0x78) = lStack_6d0;
    *(long *)(pcVar57 + 0x80) = lStack_6c8;
    uStack_6d8 = 0;
    uStack_6d4 = 0;
    lStack_6d0 = 0;
    lStack_6c8 = 0;
    *(undefined4 *)(pcVar57 + 0x88) = uStack_6c0;
    *(long *)(pcVar57 + 0x90) = lStack_6b8;
    *(long *)(pcVar57 + 0x98) = lStack_6b0;
    *(long *)(pcVar57 + 0xa0) = lStack_6a8;
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    *(long *)(pcVar57 + 0xb8) = lStack_690;
    *(long *)(pcVar57 + 0xa8) = CONCAT44(uStack_69c,CONCAT22(uStack_69e,uStack_6a0));
    *(long *)(pcVar57 + 0xb0) = CONCAT44(uStack_694,uStack_698);
    uStack_6a0 = 0;
    uStack_69e = 0;
    uStack_69c = 0;
    uStack_698 = 0;
    uStack_694 = 0;
    lStack_690 = 0;
    *(ulong *)(pcVar57 + 0xc5) = CONCAT17(uStack_67c,CONCAT43(uStack_680,uStack_684._1_3_));
    *(long *)(pcVar57 + 0xc0) = CONCAT44(uStack_684,CONCAT22(uStack_686,uStack_688));
    pcStack_7b0 = pcVar57 + 0x18;
    bStack_568 = 0;
    uStack_567 = 0;
    bStack_560 = 0;
    uStack_55f = 0;
    pcStack_7a8 = pcVar57;
    FUN_048afd20(uVar64,auStack_7b8);
    pcVar57 = pcStack_7a8;
    if (pcStack_7a8 != (code *)0x0) {
      LOCK();
      pcVar58 = pcStack_7a8 + 8;
      lVar73 = *(long *)pcVar58;
      *(long *)pcVar58 = *(long *)pcVar58 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)pcStack_7a8 + 0x10))(pcStack_7a8);
        func_0x0412c2d0(pcVar57);
      }
    }
    plVar60 = (long *)CONCAT71(uStack_55f,bStack_560);
    if (plVar60 != (long *)0x0) {
      LOCK();
      plVar2 = plVar60 + 1;
      lVar73 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*plVar60 + 0x10))(plVar60);
        func_0x0412c2d0(plVar60);
      }
    }
    lVar73 = *(long *)(uVar64 + 0x10);
    iVar52 = *(int *)(uVar64 + 0x1c);
    if (iVar52 == 2) {
      piVar63 = *(int **)(*(long *)(lVar73 + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != *(int *)(uVar64 + 0x18)) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      for (; *(long *)(piVar63 + 0xc) != *(long *)(uVar64 + 8); piVar63 = *(int **)(piVar63 + 0xe))
      {
      }
LAB_0e4e29ea:
      piVar63[4] = piVar63[4] | auStack_748._0_4_ << 0x10;
    }
    else {
      if (iVar52 == 1) {
        piVar63 = *(int **)(*(long *)(lVar73 + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != *(int *)(uVar64 + 0x18)) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4e29ea;
      }
      if (iVar52 == 0) {
        *(uint *)(lVar73 + 0x18) = *(uint *)(lVar73 + 0x18) | auStack_748._0_4_ << 0x10;
      }
    }
    FUN_048b0bc0(&iStack_730);
  }
  if ((DAT_0f75bc38 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bc38), iVar52 != 0)) {
    func_0x0e64ebe0();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bbb8,0xf53dab8);
    func_0x0410844d(&DAT_0f75bc38);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75bbb8 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4e2a55;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75bbb8 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e2a55:
    puVar56 = &DAT_0f75bbb8;
    if (iRam000000000f75bc18 != -0x2b3da790) goto LAB_0e4e2ac9;
LAB_0e4e2a85:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e2ac9;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e64f010(auStack_5f8,uStack_750,lVar72,uVar68);
    iVar52 = iStack_5d0;
    uVar47 = uStack_5cc;
    uVar6 = uStack_5c8;
    iVar55 = iStack_5c4;
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4e2a85;
LAB_0e4e2ac9:
    func_0x0e64f010(auStack_5f8,uStack_750,&UNK_012b87b3,0x15);
    iVar52 = iStack_5d0;
    uVar47 = uStack_5cc;
    uVar6 = uStack_5c8;
    iVar55 = iStack_5c4;
  }
  bVar74 = (char)uStack_5c8 == '\0';
  iStack_5d0 = iVar52;
  uStack_5cc = uVar47;
  uStack_5c8 = uVar6;
  iStack_5c4 = iVar55;
  if (bVar74) {
    uVar64 = auStack_5f8._0_8_;
    pcStack_398 = (code *)auStack_5f8._8_8_;
    pcStack_390 = pcStack_5e8;
    pcStack_388 = pcStack_5e0;
    pcStack_380 = pcStack_5d8;
    if ((DAT_0f75bc38 == '\0') && (iVar53 = func_0x04108328(&DAT_0f75bc38), iVar53 != 0)) {
      func_0x0e64ebe0();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bbb8,0xf53dab8);
      func_0x0410844d(&DAT_0f75bc38);
    }
    plVar60 = (long *)(*(long *)(uVar64 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(uVar64 + 0x20) - *(long *)(uVar64 + 0x18)) >>
                                   3) - 1U & *(uint *)(_DAT_0f75bbb8 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e2ba0;
      plVar60 = (long *)(*(long *)(uVar64 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)(uVar64 + 0x30) + 8 + lVar73 * 0x18) != *(uint *)(_DAT_0f75bbb8 + 4)
            );
    if (plVar60 == *(long **)(uVar64 + 0x38)) {
LAB_0e4e2ba0:
      puVar67 = &DAT_0f75bbb8;
      pbVar59 = *(byte **)(uVar64 + 0x50);
      pbVar65 = *(byte **)(uVar64 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4e2c4e:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4e2c7a;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4e2c7a:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar84[0] = -(*pbVar66 == 0x5b);
            auVar84[1] = -(pbVar66[1] == 99);
            auVar84[2] = -(pbVar66[2] == 0x65);
            auVar84[3] = -(pbVar66[3] == 0x72);
            auVar84[4] = -(pbVar66[4] == 0x65);
            auVar84[5] = -(pbVar66[5] == 0x61);
            auVar84[6] = -(pbVar66[6] == 0x6c);
            auVar84[7] = -(pbVar66[7] == 0x3a);
            auVar84[8] = -(pbVar66[8] == 100);
            auVar84[9] = -(pbVar66[9] == 0x6f);
            auVar84[10] = -(pbVar66[10] == 99);
            auVar84[0xb] = -(pbVar66[0xb] == 0x75);
            auVar84[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar84[0xd] = -(pbVar66[0xd] == 0x65);
            auVar84[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar84[0xf] = -(pbVar66[0xf] == 0x74);
            auVar101[0] = -(pbVar66[10] == 99);
            auVar101[1] = -(pbVar66[0xb] == 0x75);
            auVar101[2] = -(pbVar66[0xc] == 0x6d);
            auVar101[3] = -(pbVar66[0xd] == 0x65);
            auVar101[4] = -(pbVar66[0xe] == 0x6e);
            auVar101[5] = -(pbVar66[0xf] == 0x74);
            auVar101[6] = -(pbVar66[0x10] == 0x61);
            auVar101[7] = -(pbVar66[0x11] == 0x74);
            auVar101[8] = -(pbVar66[0x12] == 0x69);
            auVar101[9] = -(pbVar66[0x13] == 0x6f);
            auVar101[10] = -(pbVar66[0x14] == 0x6e);
            auVar101[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar101[0xc] = -(pbVar66[0x16] == 0x74);
            auVar101[0xd] = -(pbVar66[0x17] == 0x61);
            auVar101[0xe] = -(pbVar66[0x18] == 0x67);
            auVar101[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar101 = auVar101 & auVar84;
            if ((ushort)((ushort)(SUB161(auVar101 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar101 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar101 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar101 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar101 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar101 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar101 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar101 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar101 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar101 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar101 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar101 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar101 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar101 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar101 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar101[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar67 = (undefined1 *)plVar60[2];
      pbVar59 = *(byte **)(uVar64 + 0x50);
      pbVar65 = *(byte **)(uVar64 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4e2c4e;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4e2cae:
      if (iVar52 == 0) {
        if (((puVar67 == (undefined1 *)0x0) || (*(int *)(puVar67 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar67 + 0x68) == 0)) goto LAB_0e4e2d2a;
        lVar73 = *(long *)(puVar67 + 0x68) + 0x38;
      }
      else {
        if (puVar67 == (undefined1 *)0x0) {
          puVar67 = (undefined1 *)func_0x048aead0((code *)(uVar64 + 0x18));
        }
        auStack_748._0_8_ = func_0x048b0c90((code *)(uVar64 + 0x18),puVar67,uVar47,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4e2d2a;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4e2d2a:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar17 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar57 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar49 = _UNK_013bbadf;
      pcStack_630 = (code *)0x1a;
      auStack_638 = (undefined1  [8])0x21;
      *(ulong *)(pcVar57 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)(pcVar57 + 0x12) = uVar49;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *(long *)pcVar57 = _DAT_013bbacd;
      *(long *)(pcVar57 + 8) = lVar72;
      pcVar57[0x1a] = (code)0x0;
      pcStack_628 = pcVar57;
      lVar73 = func_0x048b5060(lVar73,auStack_638);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar49 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar49;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if ((auStack_638[0] & 1) != 0) {
        func_0x0412a280(pcStack_628,(ulong)auStack_638 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar53 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') &&
         (uStack_5b8 = puVar67, iVar54 = func_0x04108328(&DAT_0f550ad8), puVar67 = uStack_5b8,
         iVar54 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
        puVar67 = uStack_5b8;
      }
      if (iVar53 == _DAT_0f550ac4) goto LAB_0e4e2cae;
    }
    pcStack_4d8 = (code *)uVar64;
    pcStack_4d0 = pcStack_398;
    pcStack_4c8 = pcStack_390;
    pcStack_4c0 = pcStack_388;
    pcStack_4b8 = pcStack_380;
    iStack_4b0 = 4;
    uStack_4ac = 0x1e1bc4d5;
    uStack_4a8 = uVar6;
    iStack_4a4 = iVar55;
    if ((DAT_0f75bc58 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bc58), iVar52 != 0)) {
      func_0x0e64ecf0();
      func_0x0410844d(&DAT_0f75bc58);
    }
    auStack_748._0_4_ = uStack_4ac;
    auStack_748._8_8_ = 0;
    uStack_738 = 0;
    iStack_730 = 1;
    iStack_72c = 0;
    pcStack_728 = (code *)&SUB_048aead0;
    uStack_720 = 0x490ce30;
    cStack_71c = 0;
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = 0x70;
    uStack_717 = 0xe64fb;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    lStack_6f8 = 0;
    func_0x049057f0(&pcStack_4d0,auStack_748);
    func_0x048aea50(auStack_748);
    pcStack_7a8 = pcStack_4c0;
    uStack_7a0 = pcStack_4b8;
    pcStack_7b0 = pcStack_4c8;
    auStack_7b8 = (undefined1  [8])pcStack_4d0;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef46ce8;
    if ((DAT_0f551bc8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f551bc8), iVar52 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_748._0_4_ = _DAT_0f551bb4;
    puVar61 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar61 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(puVar61 + 1) = (undefined1  [16])0x0;
    *puVar61 = &UNK_0ef46c48;
    puVar61[3] = puVar70;
    puVar61[4] = 0;
    *(undefined1 *)(puVar61 + 5) = 0xff;
    auStack_748._8_8_ = puVar61 + 3;
    uStack_738 = (uint)puVar61;
    uStack_734 = (undefined4)((ulong)puVar61 >> 0x20);
    _auStack_638 = (undefined1  [16])0x0;
    FUN_048afd20(auStack_7b8,auStack_748);
    plVar60 = (long *)CONCAT44(uStack_734,uStack_738);
    if (plVar60 != (long *)0x0) {
      LOCK();
      plVar2 = plVar60 + 1;
      lVar73 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*plVar60 + 0x10))(plVar60);
        func_0x0412c2d0(plVar60);
      }
    }
    pcVar57 = pcStack_630;
    if (pcStack_630 != (code *)0x0) {
      LOCK();
      plVar60 = (long *)((long)pcStack_630 + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)pcStack_630 + 0x10))(pcStack_630);
        func_0x0412c2d0(pcVar57);
      }
    }
    pcStack_458 = pcStack_4d8;
    pcStack_450 = pcStack_4d0;
    pcStack_448 = pcStack_4c8;
    pcStack_440 = pcStack_4c0;
    pcStack_438 = pcStack_4b8;
    iStack_430 = iStack_4b0;
    uStack_42c = uStack_4ac;
    uStack_428 = uStack_4a8;
    iStack_424 = iStack_4a4;
    uStack_5fe = 0;
    uStack_5fa = 0;
    pcStack_628 = (code *)0x0;
    pcStack_620 = (code *)CONCAT71(pcStack_620._1_7_,0xff);
    pcStack_630 = (code *)0xffffffffffffffff;
    auStack_638 = (undefined1  [8])&UNK_0f0edc68;
    auStack_618._8_8_ = _UNK_014e6bc8;
    auStack_618._0_8_ = _DAT_014e6bc0;
    pcStack_608 = (code *)0x0;
    uStack_600 = 0;
    uStack_5ff = 0;
    func_0x0e510a70(&pcStack_498,&pcStack_458,auStack_638);
    func_0x0e64fd60(auStack_748,&pcStack_498,&UNK_012867a3,10,1);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef46ce8;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x490ce30;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0490cb20;
    puStack_778 = &UNK_0e650310;
    puStack_770 = &UNK_0e650470;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e650010(auStack_748);
    uStack_4f8 = CONCAT31(uStack_4f8._1_3_,(undefined1)uStack_468);
    pcStack_508 = pcStack_478;
    iStack_500 = iStack_470;
    uStack_4fc = uStack_46c;
    pcStack_518 = pcStack_488;
    pcStack_510 = pcStack_480;
    pcStack_528 = pcStack_498;
    pcStack_520 = pcStack_490;
    FUN_048b0bc0(&iStack_730);
    uStack_63e = 0;
    uStack_63c = 0;
    uStack_63a = 0;
    pcStack_670 = (code *)0xffffffffffffffff;
    pcStack_668 = (code *)0x0;
    pcStack_660 = (code *)CONCAT71(pcStack_660._1_7_,0xff);
    pcStack_678 = (code *)&UNK_0f0edc68;
    uStack_658 = (undefined4)_DAT_014e6bc0;
    uStack_654 = (undefined4)((ulong)_DAT_014e6bc0 >> 0x20);
    iStack_650 = (int)_UNK_014e6bc8;
    uStack_64c = (uint)((ulong)_UNK_014e6bc8 >> 0x20);
    uStack_648 = 0;
    iStack_644 = 0;
    cStack_640 = '\0';
    uStack_63f = 0;
    func_0x0e510a70(&bStack_568,&pcStack_528,&pcStack_678);
    func_0x0e64f600(auStack_748,CONCAT71(uStack_567,bStack_568) + 0x18);
    if (iStack_72c == 2) {
      piVar63 = *(int **)(*(long *)(CONCAT44(uStack_734,uStack_738) + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != iStack_730) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      lVar73 = *(long *)(piVar63 + 0xc);
      while (lVar73 != auStack_748._8_8_) {
        piVar63 = *(int **)(piVar63 + 0xe);
        lVar73 = *(long *)(piVar63 + 0xc);
      }
LAB_0e4e340f:
      *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 4;
    }
    else {
      if (iStack_72c == 1) {
        piVar63 = *(int **)(*(long *)(CONCAT44(uStack_734,uStack_738) + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != iStack_730) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4e340f;
      }
      if (iStack_72c == 0) {
        puVar1 = (uint *)(CONCAT44(uStack_734,uStack_738) + 0x18);
        *puVar1 = *puVar1 | 0x40000;
      }
    }
    func_0x0e64fd60(auStack_748,&bStack_568,&UNK_013208e6,8,0x10);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef46ce8;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0x490ce30;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0490cb20;
    puStack_778 = &UNK_0e650640;
    puStack_770 = &UNK_0e6507a0;
    uStack_768 = 0;
    auStack_760 = ZEXT816(0);
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    func_0x0e650010(auStack_748);
    uStack_578 = CONCAT31(uStack_578._1_3_,(undefined1)uStack_538);
    uStack_598 = CONCAT13(uStack_555,CONCAT21(uStack_557,uStack_558));
    pcStack_588 = pcStack_548;
    iStack_580 = iStack_540;
    uStack_57c = uStack_53c;
    uStack_594 = uStack_554;
    pcStack_590 = pcStack_550;
    bStack_5a8 = bStack_568;
    uStack_5a7 = uStack_567;
    bStack_5a0 = bStack_560;
    uStack_59f = uStack_55f;
    FUN_048b0bc0(&iStack_730);
    uStack_70e = 0;
    uStack_70a = 0;
    uStack_738 = 0;
    uStack_734 = 0;
    iStack_730 = CONCAT31(iStack_730._1_3_,0xff);
    auStack_748._8_8_ = 0xffffffffffffffff;
    auStack_748._0_8_ = &UNK_0f0edc68;
    pcStack_728 = _DAT_014e3610;
    uStack_720 = (uint)_UNK_014e3618;
    cStack_71c = (char)((ulong)_UNK_014e3618 >> 0x20);
    uStack_71b = (undefined1)((ulong)_UNK_014e3618 >> 0x28);
    uStack_71a = (undefined2)((ulong)_UNK_014e3618 >> 0x30);
    cStack_718 = '\0';
    uStack_717 = 0;
    uStack_710 = 0;
    func_0x0e510a70(auStack_7b8,&bStack_5a8,auStack_748);
  }
  lVar73 = uStack_750;
  func_0x0e4db7a0(uStack_750);
  auStack_638 = (undefined1  [8])&UNK_01330767;
  pcStack_630 = (code *)0xf;
  func_0x0470d9a0(auStack_748,&UNK_013d851d,0xd,0xd,auStack_638);
  bVar74 = (auStack_748[0] & 1) != 0;
  puVar67 = auStack_748 + 1;
  if (bVar74) {
    puVar67 = (undefined1 *)CONCAT44(uStack_734,uStack_738);
  }
  uVar68 = (ulong)(auStack_748[0] >> 1);
  if (bVar74) {
    uVar68 = auStack_748._8_8_;
  }
  if ((DAT_0f75bcf0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bcf0), iVar52 != 0)) {
    func_0x0e650a40();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bc70,0xf53dab8);
    func_0x0410844d(&DAT_0f75bcf0);
  }
  plVar60 = (long *)(*(long *)(lVar73 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(lVar73 + 0x20) - *(long *)(lVar73 + 0x18)) >> 3)
                            - 1U & *(uint *)(_DAT_0f75bc70 + 4)) * 8);
  do {
    lVar72 = *plVar60;
    if (lVar72 == -1) goto LAB_0e4e36b6;
    plVar60 = (long *)(*(long *)(lVar73 + 0x30) + lVar72 * 0x18);
  } while (*(uint *)(*(long *)(lVar73 + 0x30) + 8 + lVar72 * 0x18) != *(uint *)(_DAT_0f75bc70 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e36b6:
    puVar56 = &DAT_0f75bc70;
    iVar52 = iRam000000000f75bcd0;
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    iVar52 = *(int *)(puVar56 + 0x60);
  }
  if ((iVar52 == -0x2b3da790) && (lVar73 = *(long *)(puVar56 + 0x68), lVar73 != 0)) {
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    puVar67 = (undefined1 *)(lVar73 + 9);
    if (bVar74) {
      puVar67 = *(undefined1 **)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
  }
  func_0x0e651040(auStack_7b8,uStack_750,puVar67,uVar68);
  if ((auStack_748[0] & 1) != 0) {
    func_0x0412a280(CONCAT44(uStack_734,uStack_738),auStack_748._0_8_ & 0xfffffffffffffffe);
  }
  if ((char)puStack_788 == '\0') {
    func_0x04134310(&bStack_5a8,0xd);
    pauVar62 = (undefined1 (*) [16])func_0x0412f0e0(&bStack_5a8,0,&UNK_01284191,0xb);
    uStack_5b8 = *(undefined1 **)*pauVar62;
    uStack_5b0 = *(undefined8 *)(*pauVar62 + 8);
    uVar68 = *(ulong *)*pauVar62;
    puVar67 = *(undefined1 **)pauVar62[1];
    *pauVar62 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar62[1] = 0;
    auVar48 = auStack_7b8;
    if ((DAT_0f75bcf0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bcf0), iVar52 != 0)) {
      func_0x0e650a40();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bc70,0xf53dab8);
      func_0x0410844d(&DAT_0f75bcf0);
    }
    uVar71 = uVar68 & 0xffffffffffffff00;
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75bc70 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e3800;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75bc70 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4e3800:
      puVar56 = &DAT_0f75bc70;
    }
    else {
      puVar56 = (undefined *)plVar60[2];
    }
    for (pbVar59 = *(byte **)((long)auStack_7b8 + 0x50);
        pbVar59 != *(byte **)((long)auStack_7b8 + 0x58); pbVar59 = pbVar59 + 0x38) {
      bVar3 = *pbVar59;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 == 0x1d) goto LAB_0e4e389a;
      }
      else if (*(long *)(pbVar59 + 8) == 0x1d) {
LAB_0e4e389a:
        if ((bVar3 & 1) == 0) {
          pbVar65 = pbVar59 + 1;
        }
        else {
          pbVar65 = *(byte **)(pbVar59 + 0x10);
        }
        auVar85[0] = -(*pbVar65 == DAT_014e4030);
        auVar85[1] = -(pbVar65[1] == DAT_014e4030._1_1_);
        auVar85[2] = -(pbVar65[2] == DAT_014e4030._2_1_);
        auVar85[3] = -(pbVar65[3] == DAT_014e4030._3_1_);
        auVar85[4] = -(pbVar65[4] == DAT_014e4030._4_1_);
        auVar85[5] = -(pbVar65[5] == DAT_014e4030._5_1_);
        auVar85[6] = -(pbVar65[6] == DAT_014e4030._6_1_);
        auVar85[7] = -(pbVar65[7] == DAT_014e4030._7_1_);
        auVar85[8] = -(pbVar65[8] == DAT_014e4030._8_1_);
        auVar85[9] = -(pbVar65[9] == DAT_014e4030._9_1_);
        auVar85[10] = -(pbVar65[10] == DAT_014e4030._10_1_);
        auVar85[0xb] = -(pbVar65[0xb] == DAT_014e4030._11_1_);
        auVar85[0xc] = -(pbVar65[0xc] == DAT_014e4030._12_1_);
        auVar85[0xd] = -(pbVar65[0xd] == DAT_014e4030._13_1_);
        auVar85[0xe] = -(pbVar65[0xe] == DAT_014e4030._14_1_);
        auVar85[0xf] = -(pbVar65[0xf] == DAT_014e4030._15_1_);
        auVar102[0] = -(pbVar65[0xd] == DAT_014e1610);
        auVar102[1] = -(pbVar65[0xe] == DAT_014e1610._1_1_);
        auVar102[2] = -(pbVar65[0xf] == DAT_014e1610._2_1_);
        auVar102[3] = -(pbVar65[0x10] == DAT_014e1610._3_1_);
        auVar102[4] = -(pbVar65[0x11] == DAT_014e1610._4_1_);
        auVar102[5] = -(pbVar65[0x12] == DAT_014e1610._5_1_);
        auVar102[6] = -(pbVar65[0x13] == DAT_014e1610._6_1_);
        auVar102[7] = -(pbVar65[0x14] == DAT_014e1610._7_1_);
        auVar102[8] = -(pbVar65[0x15] == DAT_014e1610._8_1_);
        auVar102[9] = -(pbVar65[0x16] == DAT_014e1610._9_1_);
        auVar102[10] = -(pbVar65[0x17] == DAT_014e1610._10_1_);
        auVar102[0xb] = -(pbVar65[0x18] == DAT_014e1610._11_1_);
        auVar102[0xc] = -(pbVar65[0x19] == DAT_014e1610._12_1_);
        auVar102[0xd] = -(pbVar65[0x1a] == DAT_014e1610._13_1_);
        auVar102[0xe] = -(pbVar65[0x1b] == DAT_014e1610._14_1_);
        auVar102[0xf] = -(pbVar65[0x1c] == DAT_014e1610._15_1_);
        auVar102 = auVar102 & auVar85;
        if ((ushort)((ushort)(SUB161(auVar102 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar102 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar102 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar102 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar102 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar102 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar102 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar102 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar102 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar102 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar102 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar102 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar102 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar102 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar102 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar102[0xf] >> 7) << 0xf) == 0xffff) break;
      }
    }
    if (pbVar59 == *(byte **)((long)auStack_7b8 + 0x58)) {
LAB_0e4e38c4:
      uVar47 = uStack_78c;
      if (iStack_790 == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4e3959;
        lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0((long)auVar48 + 0x18);
        }
        lVar73 = func_0x048b0c90((long)auVar48 + 0x18,puVar56,uVar47,1);
        if (lVar73 == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          lVar73 = auStack_748._0_8_;
          if (auStack_748._0_8_ == 0) goto LAB_0e4e3959;
        }
        if ((*(int *)(lVar73 + 0x50) == -0x45dcb126) && (*(long *)(lVar73 + 0x58) != 0)) {
          lVar73 = *(long *)(lVar73 + 0x58) + 0x40;
        }
        else {
LAB_0e4e3959:
          lVar73 = 0;
        }
      }
      pcStack_678 = (code *)0x0;
      pcStack_668 = (code *)&UNK_048b4ab0;
      uStack_658 = 0xd33bd9c5;
      pcStack_660 = (code *)&UNK_048b49f0;
      uStack_654 = CONCAT31(uStack_654._1_3_,1);
      puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x38);
      if (puVar70 == (undefined8 *)0x0) {
        FUN_0eec74c0(0x38,0);
      }
      *puVar70 = uStack_5b8;
      puVar70[1] = uStack_5b0;
      puVar70[2] = puVar67;
      *(undefined2 *)(puVar70 + 3) = 0x400;
      *(undefined1 (*) [16])(puVar70 + 4) = (undefined1  [16])0x0;
      puVar70[6] = 0;
      iStack_730 = 0x48b4ab0;
      iStack_72c = 0;
      pcStack_728 = (code *)&UNK_048b49f0;
      uStack_720 = 0xd33bd9c5;
      cStack_71c = '\x01';
      pcStack_678 = (code *)0x0;
      auStack_748._8_8_ = puVar70;
      auStack_748._0_8_ = &UNK_048b46e0;
      pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (pcVar57 == (code *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_014d987e;
      auStack_5f8._8_8_ = 0x1d;
      auStack_5f8._0_8_ = 0x21;
      *(ulong *)(pcVar57 + 0xd) = CONCAT53(_UNK_014d9879,_DAT_014d9876);
      *(undefined8 *)(pcVar57 + 0x15) = uVar64;
      lVar72 = CONCAT35(_DAT_014d9876,_UNK_014d9871);
      *(long *)pcVar57 = _DAT_014d9869;
      *(long *)(pcVar57 + 8) = lVar72;
      pcVar57[0x1d] = (code)0x0;
      pcStack_5e8 = pcVar57;
      lVar73 = func_0x048b5060(lVar73,auStack_5f8);
      *(undefined **)(lVar73 + 0x20) = &UNK_048b46e0;
      pcVar57 = (code *)&UNK_048b49f0;
      if ((undefined1 *)(lVar73 + 0x20) != auStack_748) {
        if (*(code **)(lVar73 + 0x40) == (code *)0x0) {
LAB_0e4e3aed:
          uVar64 = auStack_748._8_8_;
          auStack_748._8_8_ = 0;
          *(undefined8 *)(lVar73 + 0x28) = uVar64;
        }
        else {
          (**(code **)(lVar73 + 0x40))();
          if (cStack_71c != '\0') {
            if (cStack_71c != '\x02') goto LAB_0e4e3aed;
            (*(code *)CONCAT44(iStack_72c,iStack_730))
                      (5,auStack_748 + 8,(undefined8 *)(lVar73 + 0x28));
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if ((auStack_5f8[0] & 1) != 0) {
        func_0x0412a280(pcStack_5e8,auStack_5f8._0_8_ & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)();
      }
      if (pcStack_660 != (code *)0x0) {
        (*pcStack_660)();
      }
      uStack_5b8 = (undefined1 *)0x0;
      uVar71 = 0;
      uVar68 = 0;
      puVar67 = uStack_5b8;
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550768 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550768), iVar55 != 0)) {
        FUN_048b46f0(0xf550750);
        func_0x0410844d(&DAT_0f550768);
      }
      if (iVar52 == _DAT_0f550754) goto LAB_0e4e38c4;
    }
    uStack_5b8 = puVar67;
    auStack_618._4_4_ = uStack_794;
    auStack_618._0_4_ = uStack_798;
    pcStack_608 = (code *)puStack_788;
    pcStack_628 = pcStack_7a8;
    pcStack_620 = uStack_7a0;
    auStack_638 = auStack_7b8;
    auStack_638 = auStack_7b8;
    pcStack_630 = pcStack_7b0;
    auStack_618._8_8_ = 0x1e1bc4d500000004;
    if ((DAT_0f75bd10 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bd10), iVar52 != 0)) {
      func_0x0e650b50();
      func_0x0410844d(&DAT_0f75bd10);
    }
    auStack_748._0_4_ = auStack_618._12_4_;
    auStack_748._8_8_ = 0;
    uStack_738 = 0;
    iStack_730 = 2;
    iStack_72c = 0;
    pcStack_728 = (code *)&SUB_048aead0;
    uStack_720 = 0xd89b2d0;
    cStack_71c = 0;
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = 0xa0;
    uStack_717 = 0xe651b;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    lStack_6f8 = 0;
    func_0x049057f0(auStack_638 + 8,auStack_748);
    func_0x048aea50(auStack_748);
    pcStack_668 = pcStack_620;
    pcStack_660 = (code *)auStack_618._0_8_;
    pcStack_678 = pcStack_630;
    pcStack_670 = pcStack_628;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f551bc8), iVar52 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_748._0_4_ = _DAT_0f551bb4;
    puVar61 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar61 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x30,0);
    }
    *(undefined1 (*) [16])(puVar61 + 1) = (undefined1  [16])0x0;
    *puVar61 = &UNK_0ef46c48;
    puVar61[3] = puVar70;
    puVar61[4] = 0;
    *(undefined1 *)(puVar61 + 5) = 0xff;
    auStack_748._8_8_ = puVar61 + 3;
    uStack_738 = (uint)puVar61;
    uStack_734 = (undefined4)((ulong)puVar61 >> 0x20);
    auStack_5f8 = (undefined1  [16])0x0;
    FUN_048afd20(&pcStack_678,auStack_748);
    plVar60 = (long *)CONCAT44(uStack_734,uStack_738);
    if (plVar60 != (long *)0x0) {
      LOCK();
      plVar2 = plVar60 + 1;
      lVar73 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*plVar60 + 0x10))(plVar60);
        func_0x0412c2d0(plVar60);
      }
    }
    uVar64 = auStack_5f8._8_8_;
    if ((long *)auStack_5f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_5f8._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_5f8._8_8_ + 0x10))(auStack_5f8._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    if ((DAT_0f75bd10 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bd10), iVar52 != 0)) {
      func_0x0e650b50();
      func_0x0410844d(&DAT_0f75bd10);
    }
    if (auStack_618._4_4_ == 2) {
      piVar63 = *(int **)(*(long *)(pcStack_620 + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != auStack_618._0_4_) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      pcVar57 = *(code **)(piVar63 + 0xc);
      while (pcVar57 != pcStack_628) {
        piVar63 = *(int **)(piVar63 + 0xe);
        pcVar57 = *(code **)(piVar63 + 0xc);
      }
LAB_0e4e3e7f:
      *(byte *)((long)piVar63 + 0x12) = *(byte *)((long)piVar63 + 0x12) | 2;
    }
    else {
      if (auStack_618._4_4_ == 1) {
        piVar63 = *(int **)(*(long *)(pcStack_620 + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != auStack_618._0_4_) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4e3e7f;
      }
      if (auStack_618._4_4_ == 0) {
        *(uint *)(pcStack_620 + 0x18) = *(uint *)(pcStack_620 + 0x18) | 0x20000;
      }
    }
    if ((DAT_0f75bd10 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bd10), iVar52 != 0)) {
      func_0x0e650b50();
      func_0x0410844d(&DAT_0f75bd10);
    }
    auStack_748._0_4_ = 0xbf75c8f8;
    auStack_748._8_8_ = 0;
    uStack_738 = 1;
    iStack_730 = 0;
    iStack_72c = 0;
    pcStack_728 = (code *)&SUB_048b2190;
    uStack_720 = 0x48b06d0;
    cStack_71c = '\0';
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = -0x20;
    uStack_717 = 0xe6524;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    lStack_6f8 = 0;
    func_0x049057f0(auStack_638 + 8,auStack_748);
    func_0x048aea50(auStack_748);
    pcStack_668 = pcStack_620;
    pcStack_660 = (code *)auStack_618._0_8_;
    pcStack_678 = pcStack_630;
    pcStack_670 = pcStack_628;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f551cb0), iVar52 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_748._0_4_ = _DAT_0f551c9c;
    puVar61 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar61 == (undefined8 *)0x0) {
      FUN_0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar61 + 1) = (undefined1  [16])0x0;
    *puVar61 = &UNK_0ef46c98;
    puVar61[3] = puVar70;
    *(undefined1 *)(puVar61 + 4) = 0xff;
    auStack_748._8_8_ = puVar61 + 3;
    uStack_738 = (uint)puVar61;
    uStack_734 = (undefined4)((ulong)puVar61 >> 0x20);
    auStack_5f8 = (undefined1  [16])0x0;
    FUN_048afd20(&pcStack_678,auStack_748);
    plVar60 = (long *)CONCAT44(uStack_734,uStack_738);
    if (plVar60 != (long *)0x0) {
      LOCK();
      plVar2 = plVar60 + 1;
      lVar73 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*plVar60 + 0x10))(plVar60);
        func_0x0412c2d0(plVar60);
      }
    }
    uVar64 = auStack_5f8._8_8_;
    if ((long *)auStack_5f8._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_5f8._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_5f8._8_8_ + 0x10))(auStack_5f8._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    if ((uVar68 & 1) != 0) {
      func_0x0412a280(uStack_5b8,uVar71 | uVar68 & 0xfe);
    }
    if ((bStack_5a8 & 1) != 0) {
      func_0x0412a280(CONCAT44(uStack_594,uStack_598),
                      CONCAT71(uStack_5a7,bStack_5a8) & 0xfffffffffffffffe);
    }
  }
  if ((DAT_0f75bda8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bda8), iVar52 != 0)) {
    func_0x0e652740();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bd28,0xf53dab8);
    func_0x0410844d(&DAT_0f75bda8);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75bd28 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4e4105;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75bd28 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e4105:
    puVar56 = &DAT_0f75bd28;
    if (iRam000000000f75bd88 != -0x2b3da790) goto LAB_0e4e4179;
LAB_0e4e4135:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e4179;
    bVar74 = (*(byte *)(lVar73 + 8) & 1) != 0;
    lVar72 = lVar73 + 9;
    if (bVar74) {
      lVar72 = *(long *)(lVar73 + 0x18);
    }
    uVar68 = (ulong)(*(byte *)(lVar73 + 8) >> 1);
    if (bVar74) {
      uVar68 = *(ulong *)(lVar73 + 0x10);
    }
    func_0x0e652d00(auStack_638,uStack_750,lVar72,uVar68);
    auVar48 = auStack_638;
  }
  else {
    puVar56 = (undefined *)plVar60[2];
    if (*(int *)(puVar56 + 0x60) == -0x2b3da790) goto LAB_0e4e4135;
LAB_0e4e4179:
    func_0x0e652d00(auStack_638,uStack_750,&UNK_012532ae,0x1b);
    auVar48 = auStack_638;
  }
  auStack_638 = auVar48;
  if ((char)pcStack_608 == '\0') {
    auStack_5f8._8_8_ = pcStack_628;
    auStack_5f8._0_8_ = pcStack_630;
    pcStack_5e0 = (code *)auStack_618._0_8_;
    uVar6 = auStack_618._8_4_;
    uVar50 = auStack_618._12_4_;
    pcStack_5e8 = pcStack_620;
    uStack_5b8 = pcStack_608;
    if ((DAT_0f75bda8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bda8), iVar52 != 0)) {
      func_0x0e652740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bd28,0xf53dab8);
      func_0x0410844d(&DAT_0f75bda8);
    }
    plVar60 = (long *)(*(long *)((long)auVar48 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)((long)auVar48 + 0x20) -
                                           *(long *)((long)auVar48 + 0x18)) >> 3) - 1U &
                             *(uint *)(_DAT_0f75bd28 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e4250;
      plVar60 = (long *)(*(long *)((long)auVar48 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)((long)auVar48 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75bd28 + 4));
    if (plVar60 == *(long **)((long)auVar48 + 0x38)) {
LAB_0e4e4250:
      puVar56 = &DAT_0f75bd28;
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) {
LAB_0e4e42fe:
        do {
          bVar3 = *pbVar59;
          if ((bVar3 & 1) == 0) {
            if (bVar3 >> 1 == 0x1a) goto LAB_0e4e432a;
          }
          else if (*(long *)(pbVar59 + 8) == 0x1a) {
LAB_0e4e432a:
            if ((bVar3 & 1) == 0) {
              pbVar66 = pbVar59 + 1;
            }
            else {
              pbVar66 = *(byte **)(pbVar59 + 0x10);
            }
            auVar86[0] = -(*pbVar66 == 0x5b);
            auVar86[1] = -(pbVar66[1] == 99);
            auVar86[2] = -(pbVar66[2] == 0x65);
            auVar86[3] = -(pbVar66[3] == 0x72);
            auVar86[4] = -(pbVar66[4] == 0x65);
            auVar86[5] = -(pbVar66[5] == 0x61);
            auVar86[6] = -(pbVar66[6] == 0x6c);
            auVar86[7] = -(pbVar66[7] == 0x3a);
            auVar86[8] = -(pbVar66[8] == 100);
            auVar86[9] = -(pbVar66[9] == 0x6f);
            auVar86[10] = -(pbVar66[10] == 99);
            auVar86[0xb] = -(pbVar66[0xb] == 0x75);
            auVar86[0xc] = -(pbVar66[0xc] == 0x6d);
            auVar86[0xd] = -(pbVar66[0xd] == 0x65);
            auVar86[0xe] = -(pbVar66[0xe] == 0x6e);
            auVar86[0xf] = -(pbVar66[0xf] == 0x74);
            auVar103[0] = -(pbVar66[10] == 99);
            auVar103[1] = -(pbVar66[0xb] == 0x75);
            auVar103[2] = -(pbVar66[0xc] == 0x6d);
            auVar103[3] = -(pbVar66[0xd] == 0x65);
            auVar103[4] = -(pbVar66[0xe] == 0x6e);
            auVar103[5] = -(pbVar66[0xf] == 0x74);
            auVar103[6] = -(pbVar66[0x10] == 0x61);
            auVar103[7] = -(pbVar66[0x11] == 0x74);
            auVar103[8] = -(pbVar66[0x12] == 0x69);
            auVar103[9] = -(pbVar66[0x13] == 0x6f);
            auVar103[10] = -(pbVar66[0x14] == 0x6e);
            auVar103[0xb] = -(pbVar66[0x15] == 0x5f);
            auVar103[0xc] = -(pbVar66[0x16] == 0x74);
            auVar103[0xd] = -(pbVar66[0x17] == 0x61);
            auVar103[0xe] = -(pbVar66[0x18] == 0x67);
            auVar103[0xf] = -(pbVar66[0x19] == 0x5d);
            auVar103 = auVar103 & auVar86;
            if ((ushort)((ushort)(SUB161(auVar103 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar103 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar103 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar103 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar103 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar103 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar103 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar103 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar103 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar103 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar103 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar103 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar103 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar103 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar103 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar103[0xf] >> 7) << 0xf) == 0xffff) break;
          }
          pbVar59 = pbVar59 + 0x38;
        } while (pbVar59 != pbVar65);
      }
    }
    else {
      puVar56 = (undefined *)plVar60[2];
      pbVar59 = *(byte **)((long)auVar48 + 0x50);
      pbVar65 = *(byte **)((long)auVar48 + 0x58);
      if (pbVar59 != pbVar65) goto LAB_0e4e42fe;
    }
    if (pbVar59 == pbVar65) {
LAB_0e4e435e:
      if (uVar6 == 0) {
        if (((puVar56 == (undefined *)0x0) || (*(int *)(puVar56 + 0x60) != -0x2b3da790)) ||
           (*(long *)(puVar56 + 0x68) == 0)) goto LAB_0e4e43d9;
        lVar73 = *(long *)(puVar56 + 0x68) + 0x38;
      }
      else {
        if (puVar56 == (undefined *)0x0) {
          puVar56 = (undefined *)func_0x048aead0((code *)((long)auVar48 + 0x18));
        }
        auStack_748._0_8_ = func_0x048b0c90((code *)((long)auVar48 + 0x18),puVar56,uVar50,1);
        if (auStack_748._0_8_ == 0) {
          auStack_748 = (undefined1  [16])0x0;
          FUN_048b0d20(auStack_748);
          if (auStack_748._0_8_ == 0) goto LAB_0e4e43d9;
        }
        if ((*(int *)(auStack_748._0_8_ + 0x50) == -0x45dcb126) &&
           (*(long *)(auStack_748._0_8_ + 0x58) != 0)) {
          lVar73 = *(long *)(auStack_748._0_8_ + 0x58) + 0x40;
        }
        else {
LAB_0e4e43d9:
          lVar73 = 0;
        }
      }
      pcStack_7a8 = (code *)&UNK_0488e0b0;
      uStack_798 = 0x48b5725f;
      uStack_7a0 = (code *)0x0;
      uStack_794 = uStack_794 & 0xffffff00;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = pcStack_7b0;
      _auStack_7b8 = auVar18 << 0x40;
      auStack_748 = (undefined1  [16])0x0;
      iStack_730 = 0x488e0b0;
      iStack_72c = 0;
      pcStack_728 = (code *)0x0;
      uStack_720 = 0x48b5725f;
      cStack_71c = '\0';
      plVar60 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (plVar60 == (long *)0x0) {
        FUN_0eec74c0(0x20,0);
      }
      uVar64 = _UNK_013bbadf;
      pcStack_678 = (code *)0x21;
      pcStack_670 = (code *)0x1a;
      *(ulong *)((long)plVar60 + 10) = CONCAT26(_UNK_013bbadd,_DAT_013bbad7);
      *(undefined8 *)((long)plVar60 + 0x12) = uVar64;
      lVar72 = CONCAT62(_DAT_013bbad7,_UNK_013bbad5);
      *plVar60 = _DAT_013bbacd;
      plVar60[1] = lVar72;
      *(undefined1 *)((long)plVar60 + 0x1a) = 0;
      pcStack_668 = (code *)plVar60;
      lVar73 = func_0x048b5060(lVar73,&pcStack_678);
      *(undefined8 *)(lVar73 + 0x20) = 0;
      if ((undefined1 *)(lVar73 + 0x20) == auStack_748) {
        pcVar57 = (code *)0x0;
      }
      else {
        if (*(code **)(lVar73 + 0x40) != (code *)0x0) {
          puVar70 = (undefined8 *)(lVar73 + 0x28);
          (**(code **)(lVar73 + 0x40))(puVar70);
          if (cStack_71c != '\0') {
            if (cStack_71c == '\x02') {
              (*(code *)CONCAT44(iStack_72c,iStack_730))(5,auStack_748 + 8,puVar70);
            }
            else {
              uVar64 = auStack_748._8_8_;
              auStack_748._8_8_ = 0;
              *puVar70 = uVar64;
            }
          }
        }
        *(ulong *)(lVar73 + 0x38) = CONCAT44(iStack_72c,iStack_730);
        *(code **)(lVar73 + 0x40) = pcStack_728;
        *(uint *)(lVar73 + 0x48) = uStack_720;
        *(char *)(lVar73 + 0x4c) = cStack_71c;
        pcVar57 = pcStack_728;
      }
      if (((ulong)pcStack_678 & 1) != 0) {
        func_0x0412a280(pcStack_668,(ulong)pcStack_678 & 0xfffffffffffffffe);
        pcVar57 = pcStack_728;
      }
      if (pcVar57 != (code *)0x0) {
        (*pcVar57)(auStack_748 + 8);
      }
      if (uStack_7a0 != (code *)0x0) {
        (*uStack_7a0)(auStack_7b8);
      }
    }
    else {
      iVar52 = *(int *)(pbVar59 + 0x1c);
      if ((DAT_0f550ad8 == '\0') && (iVar55 = func_0x04108328(&DAT_0f550ad8), iVar55 != 0)) {
        func_0x0488e120(0xf550ac0);
        func_0x0410844d(&DAT_0f550ad8);
      }
      if (iVar52 == _DAT_0f550ac4) goto LAB_0e4e435e;
    }
    pcStack_670 = (code *)auStack_5f8._0_8_;
    pcStack_668 = (code *)auStack_5f8._8_8_;
    pcStack_660 = pcStack_5e8;
    uStack_658 = SUB84(pcStack_5e0,0);
    uStack_654 = (undefined4)((ulong)pcStack_5e0 >> 0x20);
    iStack_650 = uVar6;
    uStack_64c = uVar50;
    uStack_648 = SUB84(uStack_5b8,0);
    iStack_644 = (int)((ulong)uStack_5b8 >> 0x20);
    pcStack_678 = (code *)auVar48;
    if ((DAT_0f75bdc8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bdc8), iVar52 != 0)) {
      func_0x0e652850();
      func_0x0410844d(&DAT_0f75bdc8);
    }
    pcVar57 = pcStack_678;
    iStack_650 = 1;
    uStack_64c = 0x28a5a83e;
    if ((DAT_0f75bda8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75bda8), iVar52 != 0)) {
      func_0x0e652740();
      func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bd28,0xf53dab8);
      func_0x0410844d(&DAT_0f75bda8);
    }
    plVar60 = (long *)(*(long *)(pcVar57 + 0x18) +
                      (ulong)((int)((ulong)(*(long *)(pcVar57 + 0x20) - *(long *)(pcVar57 + 0x18))
                                   >> 3) - 1U & *(uint *)(_DAT_0f75bd28 + 4)) * 8);
    do {
      lVar73 = *plVar60;
      if (lVar73 == -1) goto LAB_0e4e46f0;
      plVar60 = (long *)(*(long *)(pcVar57 + 0x30) + lVar73 * 0x18);
    } while (*(uint *)(*(long *)(pcVar57 + 0x30) + 8 + lVar73 * 0x18) !=
             *(uint *)(_DAT_0f75bd28 + 4));
    if (plVar60 == *(long **)(pcVar57 + 0x38)) {
LAB_0e4e46f0:
      auStack_748._0_8_ = &DAT_0f75bd28;
    }
    else {
      auStack_748._0_8_ = plVar60[2];
    }
    auStack_748._8_8_ = pcVar57 + 0x18;
    func_0x0ed621a0(auStack_748,uStack_64c);
    auStack_748._0_2_ = 1;
    auStack_748._8_8_ = &pcStack_670;
    uStack_738 = uStack_64c;
    iStack_730 = 0;
    iStack_72c = 0;
    pcStack_728 = (code *)0x0;
    uStack_720 = 0;
    cStack_71c = 0;
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = 0;
    uStack_717 = 0;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    uStack_708 = 0x65646914;
    uStack_704 = 0x6e;
    uStack_703 = 0x6974;
    uStack_701 = 0x66;
    uStack_700 = 0x69;
    uStack_6ff = 0x7265;
    uStack_6fd = 0;
    lStack_6f0 = 0;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    uStack_6d8 = 0;
    uStack_6d4 = 0;
    lStack_6d0 = 0;
    lStack_6c8 = 0;
    uStack_6c0 = 0x3f600000;
    func_0x048afb10(&lStack_6f0,8);
    uStack_698 = 0;
    uStack_694 = 0;
    lStack_690 = 0;
    lStack_6a8 = 0;
    uStack_6a0 = 0;
    uStack_69e = 0;
    uStack_69c = 0;
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    uStack_688 = 0xff00;
    uStack_684 = uStack_684 & 0xffffff00;
    uStack_680 = uStack_680 & 0xffffff00;
    uStack_67c = 0;
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      FUN_0eec74c0(8,0);
    }
    *puVar70 = &UNK_0f4c45c8;
    plVar60 = (long *)CONCAT44(iStack_72c,iStack_730);
    iStack_730 = (int)puVar70;
    iStack_72c = (int)((ulong)puVar70 >> 0x20);
    if (plVar60 != (long *)0x0) {
      (**(code **)(*plVar60 + 8))();
    }
    auStack_7b8._0_4_ = uStack_738;
    pcStack_7b0 = (code *)0x0;
    pcStack_7a8 = (code *)((ulong)pcStack_7a8 & 0xffffffff00000000);
    uStack_7a0 = (code *)0x1;
    uStack_798 = 0;
    uStack_794 = 0;
    iStack_790 = 0xe653a90;
    uStack_78c = 0;
    puStack_788 = &SUB_048b06d0;
    puStack_780 = &UNK_0e650980;
    puStack_778 = &UNK_0e653b50;
    puStack_770 = &UNK_0e653d10;
    uStack_768 = 0;
    auStack_760 = (undefined1  [16])0x0;
    func_0x048b05a0(auStack_748._8_8_,auStack_7b8);
    uVar64 = auStack_760._8_8_;
    if ((long *)auStack_760._8_8_ != (long *)0x0) {
      LOCK();
      plVar60 = (long *)(auStack_760._8_8_ + 8);
      lVar73 = *plVar60;
      *plVar60 = *plVar60 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)auStack_760._8_8_ + 0x10))(auStack_760._8_8_);
        func_0x0412c2d0(uVar64);
      }
    }
    uVar64 = auStack_748._8_8_;
    if ((DAT_0f550a20 == '\0') && (iVar52 = func_0x04108328(&DAT_0f550a20), iVar52 != 0)) {
      FUN_048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_7b8._0_4_ = _DAT_0f550a0c;
    pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (pcVar57 == (code *)0x0) {
      FUN_0eec74c0(0xd0,0);
    }
    pcVar58 = pcStack_728;
    *(undefined1 (*) [16])(pcVar57 + 8) = (undefined1  [16])0x0;
    *(undefined **)pcVar57 = &UNK_0ef439d0;
    lVar73 = CONCAT44(iStack_72c,iStack_730);
    iStack_730 = 0;
    iStack_72c = 0;
    pcStack_728 = (code *)0x0;
    *(long *)(pcVar57 + 0x18) = lVar73;
    *(code **)(pcVar57 + 0x20) = pcVar58;
    *(long *)(pcVar57 + 0x38) = CONCAT26(uStack_70a,CONCAT42(uStack_70e,uStack_710));
    *(long *)(pcVar57 + 0x28) =
         CONCAT26(uStack_71a,CONCAT15(uStack_71b,CONCAT14(cStack_71c,uStack_720)));
    *(long *)(pcVar57 + 0x30) = CONCAT71(uStack_717,cStack_718);
    uStack_720 = 0;
    cStack_71c = '\0';
    uStack_71b = 0;
    uStack_71a = 0;
    cStack_718 = '\0';
    uStack_717 = 0;
    uStack_710 = 0;
    uStack_70e = 0;
    uStack_70a = 0;
    *(long *)(pcVar57 + 0x50) = lStack_6f8;
    *(long *)(pcVar57 + 0x40) =
         CONCAT17(uStack_701,CONCAT25(uStack_703,CONCAT14(uStack_704,uStack_708)));
    *(long *)(pcVar57 + 0x48) =
         CONCAT44(uStack_6fc,CONCAT13(uStack_6fd,CONCAT21(uStack_6ff,uStack_700)));
    uStack_708 = 0;
    uStack_704 = 0;
    uStack_703 = 0;
    uStack_701 = 0;
    uStack_700 = 0;
    uStack_6ff = 0;
    uStack_6fd = 0;
    uStack_6fc = 0;
    lStack_6f8 = 0;
    *(long *)(pcVar57 + 0x58) = lStack_6f0;
    *(long *)(pcVar57 + 0x60) = lStack_6e8;
    *(long *)(pcVar57 + 0x68) = lStack_6e0;
    lStack_6f0 = 0;
    lStack_6e8 = 0;
    lStack_6e0 = 0;
    *(long *)(pcVar57 + 0x70) = CONCAT44(uStack_6d4,uStack_6d8);
    *(long *)(pcVar57 + 0x78) = lStack_6d0;
    *(long *)(pcVar57 + 0x80) = lStack_6c8;
    uStack_6d8 = 0;
    uStack_6d4 = 0;
    lStack_6d0 = 0;
    lStack_6c8 = 0;
    *(undefined4 *)(pcVar57 + 0x88) = uStack_6c0;
    *(long *)(pcVar57 + 0x90) = lStack_6b8;
    *(long *)(pcVar57 + 0x98) = lStack_6b0;
    *(long *)(pcVar57 + 0xa0) = lStack_6a8;
    lStack_6b8 = 0;
    lStack_6b0 = 0;
    lStack_6a8 = 0;
    *(long *)(pcVar57 + 0xb8) = lStack_690;
    *(long *)(pcVar57 + 0xa8) = CONCAT44(uStack_69c,CONCAT22(uStack_69e,uStack_6a0));
    *(long *)(pcVar57 + 0xb0) = CONCAT44(uStack_694,uStack_698);
    uStack_6a0 = 0;
    uStack_69e = 0;
    uStack_69c = 0;
    uStack_698 = 0;
    uStack_694 = 0;
    lStack_690 = 0;
    *(ulong *)(pcVar57 + 0xc5) = CONCAT17(uStack_67c,CONCAT43(uStack_680,uStack_684._1_3_));
    *(long *)(pcVar57 + 0xc0) = CONCAT44(uStack_684,CONCAT22(uStack_686,uStack_688));
    pcStack_7b0 = pcVar57 + 0x18;
    bStack_5a8 = 0;
    uStack_5a7 = 0;
    bStack_5a0 = 0;
    uStack_59f = 0;
    pcStack_7a8 = pcVar57;
    FUN_048afd20(uVar64,auStack_7b8);
    pcVar57 = pcStack_7a8;
    if (pcStack_7a8 != (code *)0x0) {
      LOCK();
      pcVar58 = pcStack_7a8 + 8;
      lVar73 = *(long *)pcVar58;
      *(long *)pcVar58 = *(long *)pcVar58 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*(long *)pcStack_7a8 + 0x10))(pcStack_7a8);
        func_0x0412c2d0(pcVar57);
      }
    }
    plVar60 = (long *)CONCAT71(uStack_59f,bStack_5a0);
    if (plVar60 != (long *)0x0) {
      LOCK();
      plVar2 = plVar60 + 1;
      lVar73 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar73 == 0) {
        (**(code **)(*plVar60 + 0x10))(plVar60);
        func_0x0412c2d0(plVar60);
      }
    }
    lVar73 = *(long *)(uVar64 + 0x10);
    iVar52 = *(int *)(uVar64 + 0x1c);
    if (iVar52 == 2) {
      piVar63 = *(int **)(*(long *)(lVar73 + 0x78) + 0x60);
      iVar52 = *piVar63;
      while (iVar52 != *(int *)(uVar64 + 0x18)) {
        piVar63 = piVar63 + 0x16;
        iVar52 = *piVar63;
      }
      for (; *(long *)(piVar63 + 0xc) != *(long *)(uVar64 + 8); piVar63 = *(int **)(piVar63 + 0xe))
      {
      }
LAB_0e4e4bca:
      piVar63[4] = piVar63[4] | auStack_748._0_4_ << 0x10;
    }
    else {
      if (iVar52 == 1) {
        piVar63 = *(int **)(*(long *)(lVar73 + 0x78) + 0x48);
        iVar52 = *piVar63;
        while (iVar52 != *(int *)(uVar64 + 0x18)) {
          piVar63 = piVar63 + 0x1a;
          iVar52 = *piVar63;
        }
        goto LAB_0e4e4bca;
      }
      if (iVar52 == 0) {
        *(uint *)(lVar73 + 0x18) = *(uint *)(lVar73 + 0x18) | auStack_748._0_4_ << 0x10;
      }
    }
    FUN_048b0bc0(&iStack_730);
  }
  if ((DAT_0f75be60 == '\0') && (iVar52 = func_0x04108328(&DAT_0f75be60), iVar52 != 0)) {
    func_0x0e654240();
    func_0x0eee2f40(&UNK_048ae800,&DAT_0f75bde0,0xf53dab8);
    func_0x0410844d(&DAT_0f75be60);
  }
  plVar60 = (long *)(*(long *)(uStack_750 + 0x18) +
                    (ulong)((int)((ulong)(*(long *)(uStack_750 + 0x20) -
                                         *(long *)(uStack_750 + 0x18)) >> 3) - 1U &
                           *(uint *)(_DAT_0f75bde0 + 4)) * 8);
  do {
    lVar73 = *plVar60;
    if (lVar73 == -1) goto LAB_0e4e4c35;
    plVar60 = (long *)(*(long *)(uStack_750 + 0x30) + lVar73 * 0x18);
  } while (*(uint *)(*(long *)(uStack_750 + 0x30) + 8 + lVar73 * 0x18) !=
           *(uint *)(_DAT_0f75bde0 + 4));
  if (plVar60 == *(long **)(uStack_750 + 0x38)) {
LAB_0e4e4c35:
    puVar56 = &DAT_0f75bde0;
    if (iRam000000000f75be40 != -0x2b3da790) goto LAB_0e4e4c92;
LAB_0e4e4c65:
    lVar73 = *(long *)(puVar56 + 0x68);
    if (lVar73 == 0) goto LAB_0e4e4c92;
    bVar74 = (*(byte *)(lV
/* truncated by DecompileTargets.java */


/* ---- referenced strings ----
 * 0x1202b26  RandomGroupBindings
 * 0x1250bf9  JigsawTemplatePool
 * 0x13bbacd  [cereal:documentation_tag]
 * 0x13bbad7  cumentation_tag]
 * 0x14518a9  [cereal:cereal_root_schema_property]
 * 0x14518b9  oot_schema_property]
 * 0x14d9869  [cereal:json_schema_property]
 * 0x14d9876  schema_property]
 * 0x14e1610  schema_property]
 * 0x14e4030  [cereal:json_sch
 */

/* ---- assembly ---- */
/* 0e4ddaa0 */  PUSH RBP
/* 0e4ddaa1 */  PUSH R15
/* 0e4ddaa3 */  PUSH R14
/* 0e4ddaa5 */  PUSH R13
/* 0e4ddaa7 */  PUSH R12
/* 0e4ddaa9 */  PUSH RBX
/* 0e4ddaaa */  SUB RSP,0x788
/* 0e4ddab1 */  MOVZX EAX,byte ptr [0x0f75a1e0]
/* 0e4ddab8 */  TEST AL,AL
/* 0e4ddaba */  JZ 0x0e4eddec
/* 0e4ddac0 */  LEA RAX,[RDI + 0x18]
/* 0e4ddac4 */  MOV qword ptr [RSP + 0x2d8],RAX
/* 0e4ddacc */  MOV ESI,0xffffffff
/* 0e4ddad1 */  MOV RAX,qword ptr [0x0f75a160]
/* 0e4ddad8 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4ddadb */  MOV RCX,qword ptr [RDI + 0x18]
/* 0e4ddadf */  MOV RDX,qword ptr [RDI + 0x20]
/* 0e4ddae3 */  SUB RDX,RCX
/* 0e4ddae6 */  SHR RDX,0x3
/* 0e4ddaea */  ADD EDX,ESI
/* 0e4ddaec */  AND EDX,EAX
/* 0e4ddaee */  LEA RCX,[RCX + RDX*0x8]
/* 0e4ddaf2 */  MOV qword ptr [RSP + 0x68],RDI
/* 0e4ddaf7 */  MOV RDX,qword ptr [RDI + 0x30]
/* 0e4ddafb */  NOP dword ptr [RAX + RAX*0x1]
/* 0e4ddb00 */  MOV RCX,qword ptr [RCX]
/* 0e4ddb03 */  CMP RCX,-0x1
/* 0e4ddb07 */  JZ 0x0e4ddb37
/* 0e4ddb09 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4ddb0d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4ddb11 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4ddb15 */  JNZ 0x0e4ddb00
/* 0e4ddb17 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4ddb1c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4ddb20 */  CMP RCX,RAX
/* 0e4ddb23 */  JNZ 0x0e4ddb48
/* 0e4ddb25 */  LEA RAX,[0xf75a160]
/* 0e4ddb2c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4ddb33 */  JZ 0x0e4ddb55
/* 0e4ddb35 */  JMP 0x0e4ddb99
/* 0e4ddb37 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4ddb3c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4ddb40 */  MOV RCX,RAX
/* 0e4ddb43 */  CMP RCX,RAX
/* 0e4ddb46 */  JZ 0x0e4ddb25
/* 0e4ddb48 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4ddb4c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4ddb53 */  JNZ 0x0e4ddb99
/* 0e4ddb55 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4ddb59 */  TEST RAX,RAX
/* 0e4ddb5c */  JZ 0x0e4ddb99
/* 0e4ddb5e */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4ddb62 */  LEA RDX,[RAX + 0x9]
/* 0e4ddb66 */  MOV ECX,ESI
/* 0e4ddb68 */  SHR ECX,0x1
/* 0e4ddb6a */  TEST SIL,0x1
/* 0e4ddb6e */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4ddb73 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4ddb78 */  LEA RDI,[RSP + 0x180]
/* 0e4ddb80 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4ddb85 */  CALL 0x0e606520
/* 0e4ddb8a */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4ddb92 */  JZ 0x0e4ddbc5
/* 0e4ddb94 */  JMP 0x0e4de3e8
/* 0e4ddb99 */  LEA RDX,[0x1253298]
/* 0e4ddba0 */  LEA RDI,[RSP + 0x180]
/* 0e4ddba8 */  MOV ECX,0x15
/* 0e4ddbad */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4ddbb2 */  CALL 0x0e606520
/* 0e4ddbb7 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4ddbbf */  JNZ 0x0e4de3e8
/* 0e4ddbc5 */  MOV RBP,qword ptr [RSP + 0x180]
/* 0e4ddbcd */  MOVUPS XMM0,xmmword ptr [RSP + 0x188]
/* 0e4ddbd5 */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0e4ddbdd */  MOVDQU XMM0,xmmword ptr [RSP + 0x198]
/* 0e4ddbe6 */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4ddbef */  MOV EBX,dword ptr [RSP + 0x1a8]
/* 0e4ddbf6 */  MOV EAX,dword ptr [RSP + 0x1ac]
/* 0e4ddbfd */  MOV dword ptr [RSP + 0x200],EAX
/* 0e4ddc04 */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0e4ddc0c */  MOV qword ptr [RSP + 0x4a8],RAX
/* 0e4ddc14 */  MOVZX EAX,byte ptr [0x0f75a1e0]
/* 0e4ddc1b */  TEST AL,AL
/* 0e4ddc1d */  JZ 0x0e4ee247
/* 0e4ddc23 */  LEA R15,[RBP + 0x18]
/* 0e4ddc27 */  MOV RAX,qword ptr [0x0f75a160]
/* 0e4ddc2e */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4ddc31 */  MOV RCX,qword ptr [RBP + 0x18]
/* 0e4ddc35 */  MOV RDX,qword ptr [RBP + 0x20]
/* 0e4ddc39 */  SUB RDX,RCX
/* 0e4ddc3c */  SHR RDX,0x3
/* 0e4ddc40 */  MOV ESI,0xffffffff
/* 0e4ddc45 */  ADD EDX,ESI
/* 0e4ddc47 */  AND EDX,EAX
/* 0e4ddc49 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4ddc4d */  MOV RDX,qword ptr [RBP + 0x30]
/* 0e4ddc51 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4ddc60 */  MOV RCX,qword ptr [RCX]
/* 0e4ddc63 */  CMP RCX,-0x1
/* 0e4ddc67 */  JZ 0x0e4ddc99
/* 0e4ddc69 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4ddc6d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4ddc71 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4ddc75 */  JNZ 0x0e4ddc60
/* 0e4ddc77 */  MOV RAX,qword ptr [RBP + 0x38]
/* 0e4ddc7b */  CMP RCX,RAX
/* 0e4ddc7e */  JNZ 0x0e4ddca5
/* 0e4ddc80 */  LEA RSI,[0xf75a160]
/* 0e4ddc87 */  MOV RAX,qword ptr [RBP + 0x50]
/* 0e4ddc8b */  MOV RCX,qword ptr [RBP + 0x58]
/* 0e4ddc8f */  CMP RAX,RCX
/* 0e4ddc92 */  JNZ 0x0e4ddcba
/* 0e4ddc94 */  JMP 0x0e4ddd65
/* 0e4ddc99 */  MOV RAX,qword ptr [RBP + 0x38]
/* 0e4ddc9d */  MOV RCX,RAX
/* 0e4ddca0 */  CMP RCX,RAX
/* 0e4ddca3 */  JZ 0x0e4ddc80
/* 0e4ddca5 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4ddca9 */  MOV RAX,qword ptr [RBP + 0x50]
/* 0e4ddcad */  MOV RCX,qword ptr [RBP + 0x58]
/* 0e4ddcb1 */  CMP RAX,RCX
/* 0e4ddcb4 */  JZ 0x0e4ddd65
/* 0e4ddcba */  MOV RDX,0x3a6c61657265635b
/* 0e4ddcc4 */  MOVQ XMM0,RDX
/* 0e4ddcc9 */  MOV RDX,0x746e656d75636f64
/* 0e4ddcd3 */  MOVQ XMM1,RDX
/* 0e4ddcd8 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4ddcdc */  MOV RDX,0x7461746e656d7563
/* 0e4ddce6 */  MOVQ XMM1,RDX
/* 0e4ddceb */  MOV RDX,0x5d6761745f6e6f69
/* 0e4ddcf5 */  MOVQ XMM2,RDX
/* 0e4ddcfa */  PUNPCKLQDQ XMM1,XMM2
/* 0e4ddcfe */  JMP 0x0e4ddd2e
/* 0e4ddd00 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4ddd04 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4ddd08 */  PCMPEQB XMM2,XMM0
/* 0e4ddd0c */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4ddd11 */  PCMPEQB XMM3,XMM1
/* 0e4ddd15 */  PAND XMM3,XMM2
/* 0e4ddd19 */  PMOVMSKB EDX,XMM3
/* 0e4ddd1d */  CMP EDX,0xffff
/* 0e4ddd23 */  JZ 0x0e4ddd65
/* 0e4ddd25 */  ADD RAX,0x38
/* 0e4ddd29 */  CMP RAX,RCX
/* 0e4ddd2c */  JZ 0x0e4ddd65
/* 0e4ddd2e */  MOVZX EDX,byte ptr [RAX]
/* 0e4ddd31 */  TEST DL,0x1
/* 0e4ddd34 */  JZ 0x0e4ddd50
/* 0e4ddd36 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4ddd3a */  CMP RDI,0x1a
/* 0e4ddd3e */  JNZ 0x0e4ddd25
/* 0e4ddd40 */  JMP 0x0e4ddd5a
/* 0e4ddd50 */  MOV EDI,EDX
/* 0e4ddd52 */  SHR EDI,0x1
/* 0e4ddd54 */  CMP RDI,0x1a
/* 0e4ddd58 */  JNZ 0x0e4ddd25
/* 0e4ddd5a */  TEST DL,0x1
/* 0e4ddd5d */  JNZ 0x0e4ddd00
/* 0e4ddd5f */  LEA RDX,[RAX + 0x1]
/* 0e4ddd63 */  JMP 0x0e4ddd04
/* 0e4ddd65 */  CMP RAX,RCX
/* 0e4ddd68 */  JZ 0x0e4ddd8e
/* 0e4ddd6a */  MOV R12D,EBX
/* 0e4ddd6d */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4ddd70 */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4ddd77 */  TEST AL,AL
/* 0e4ddd79 */  JZ 0x0e4ef2d1
/* 0e4ddd7f */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4ddd85 */  MOV EBX,R12D
/* 0e4ddd88 */  JNZ 0x0e4ddfce
/* 0e4ddd8e */  TEST EBX,EBX
/* 0e4ddd90 */  JZ 0x0e4dddf1
/* 0e4ddd92 */  TEST RSI,RSI
/* 0e4ddd95 */  JNZ 0x0e4ddda2
/* 0e4ddd97 */  MOV RDI,R15
/* 0e4ddd9a */  CALL 0x048aead0
/* 0e4ddd9f */  MOV RSI,RAX
/* 0e4ddda2 */  MOV RDI,R15
/* 0e4ddda5 */  MOV EDX,dword ptr [RSP + 0x200]
/* 0e4dddac */  MOV ECX,0x1
/* 0e4dddb1 */  CALL 0x048b0c90
/* 0e4dddb6 */  TEST RAX,RAX
/* 0e4dddb9 */  JNZ 0x0e4dddd9
/* 0e4dddbb */  PXOR XMM0,XMM0
/* 0e4dddbf */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4dddc5 */  LEA RDI,[RSP + 0x70]
/* 0e4dddca */  CALL 0x048b0d20
/* 0e4dddcf */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4dddd4 */  TEST RAX,RAX
/* 0e4dddd7 */  JZ 0x0e4dde0e
/* 0e4dddd9 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4ddde0 */  JNZ 0x0e4dde0e
/* 0e4ddde2 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4ddde6 */  TEST R14,R14
/* 0e4ddde9 */  JZ 0x0e4dde0e
/* 0e4dddeb */  ADD R14,0x40
/* 0e4dddef */  JMP 0x0e4dde11
/* 0e4dddf1 */  TEST RSI,RSI
/* 0e4dddf4 */  JZ 0x0e4dde0e
/* 0e4dddf6 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4dddfd */  JNZ 0x0e4dde0e
/* 0e4dddff */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4dde03 */  TEST R14,R14
/* 0e4dde06 */  JZ 0x0e4dde0e
/* 0e4dde08 */  ADD R14,0x38
/* 0e4dde0c */  JMP 0x0e4dde11
/* 0e4dde0e */  XOR R14D,R14D
/* 0e4dde11 */  LEA RAX,[0x488e0b0]
/* 0e4dde18 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4dde1d */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4dde25 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4dde2e */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4dde33 */  MOV qword ptr [RSP],0x0
/* 0e4dde3b */  PXOR XMM0,XMM0
/* 0e4dde3f */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4dde45 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4dde4d */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4dde59 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4dde64 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4dde6c */  LEA RDI,[0xf5463b0]
/* 0e4dde73 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4dde7a */  MOV ESI,0x20
/* 0e4dde7f */  CALL qword ptr [RAX + 0x10]
/* 0e4dde82 */  MOV R12,RAX
/* 0e4dde85 */  TEST RAX,RAX
/* 0e4dde88 */  JZ 0x0e4edc87
/* 0e4dde8e */  MOV qword ptr [RSP + 0x150],R12
/* 0e4dde96 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4ddea2 */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4ddeae */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4ddeb5 */  MOVUPS xmmword ptr [R12 + 0xa],XMM0
/* 0e4ddebb */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4ddec3 */  MOVDQU xmmword ptr [R12],XMM0
/* 0e4ddec9 */  MOV byte ptr [R12 + 0x1a],0x0
/* 0e4ddecf */  LEA RSI,[RSP + 0x140]
/* 0e4dded7 */  MOV RDI,R14
/* 0e4ddeda */  CALL 0x048b5060
/* 0e4ddedf */  MOV R12,RAX
/* 0e4ddee2 */  LEA R14,[RSP + 0x78]
/* 0e4ddee7 */  ADD RAX,0x20
/* 0e4ddeeb */  MOV qword ptr [R12 + 0x20],0x0
/* 0e4ddef4 */  LEA RCX,[RSP + 0x70]
/* 0e4ddef9 */  CMP RAX,RCX
/* 0e4ddefc */  JZ 0x0e4ddf39
/* 0e4ddefe */  MOV RAX,qword ptr [R12 + 0x40]
/* 0e4ddf03 */  TEST RAX,RAX
/* 0e4ddf06 */  JZ 0x0e4ddf59
/* 0e4ddf08 */  MOV R13,R12
/* 0e4ddf0b */  ADD R13,0x28
/* 0e4ddf0f */  MOV RDI,R13
/* 0e4ddf12 */  CALL RAX
/* 0e4ddf14 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4ddf1c */  TEST EAX,EAX
/* 0e4ddf1e */  JZ 0x0e4ddf59
/* 0e4ddf20 */  CMP EAX,0x2
/* 0e4ddf23 */  JNZ 0x0e4ddf47
/* 0e4ddf25 */  MOV EDI,0x5
/* 0e4ddf2a */  MOV RSI,R14
/* 0e4ddf2d */  MOV RDX,R13
/* 0e4ddf30 */  CALL qword ptr [RSP + 0x88]
/* 0e4ddf37 */  JMP 0x0e4ddf59
/* 0e4ddf39 */  XOR EAX,EAX
/* 0e4ddf3b */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4ddf43 */  JNZ 0x0e4ddf94
/* 0e4ddf45 */  JMP 0x0e4ddfb5
/* 0e4ddf47 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4ddf4c */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4ddf55 */  MOV qword ptr [R13],RAX
/* 0e4ddf59 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4ddf61 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4ddf6a */  MOVDQU xmmword ptr [R12 + 0x38],XMM0
/* 0e4ddf71 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4ddf78 */  MOV dword ptr [R12 + 0x48],ECX
/* 0e4ddf7d */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4ddf85 */  MOV byte ptr [R12 + 0x4c],CL
/* 0e4ddf8a */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4ddf92 */  JZ 0x0e4ddfb5
/* 0e4ddf94 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4ddf9c */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4ddfa4 */  AND RSI,-0x2
/* 0e4ddfa8 */  CALL 0x0412a280
/* 0e4ddfad */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4ddfb5 */  TEST RAX,RAX
/* 0e4ddfb8 */  JZ 0x0e4ddfbf
/* 0e4ddfba */  MOV RDI,R14
/* 0e4ddfbd */  CALL RAX
/* 0e4ddfbf */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4ddfc4 */  TEST RAX,RAX
/* 0e4ddfc7 */  JZ 0x0e4ddfce
/* 0e4ddfc9 */  MOV RDI,RSP
/* 0e4ddfcc */  CALL RAX
/* 0e4ddfce */  MOV qword ptr [RSP + 0x1c0],RBP
/* 0e4ddfd6 */  MOVAPS XMM0,xmmword ptr [RSP + 0x210]
/* 0e4ddfde */  MOVAPS XMM1,xmmword ptr [RSP + 0x220]
/* 0e4ddfe6 */  MOVUPS xmmword ptr [RSP + 0x1c8],XMM0
/* 0e4ddfee */  MOVUPS xmmword ptr [RSP + 0x1d8],XMM1
/* 0e4ddff6 */  MOV dword ptr [RSP + 0x1e8],EBX
/* 0e4ddffd */  MOV EAX,dword ptr [RSP + 0x200]
/* 0e4de004 */  MOV dword ptr [RSP + 0x1ec],EAX
/* 0e4de00b */  MOV RAX,qword ptr [RSP + 0x4a8]
/* 0e4de013 */  MOV qword ptr [RSP + 0x1f0],RAX
/* 0e4de01b */  LEA RDI,[RSP + 0x70]
/* 0e4de020 */  MOV RSI,R15
/* 0e4de023 */  CALL 0x0e606b10
/* 0e4de028 */  MOV EAX,dword ptr [RSP + 0x8c]
/* 0e4de02f */  CMP EAX,0x2
/* 0e4de032 */  JZ 0x0e4de24e
/* 0e4de038 */  CMP EAX,0x1
/* 0e4de03b */  JZ 0x0e4de052
/* 0e4de03d */  TEST EAX,EAX
/* 0e4de03f */  JNZ 0x0e4de093
/* 0e4de041 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0e4de049 */  OR dword ptr [RAX + 0x18],0x40000
/* 0e4de050 */  JMP 0x0e4de093
/* 0e4de052 */  MOV RAX,qword ptr [RSP + 0x80]
/* 0e4de05a */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4de05e */  MOV ECX,dword ptr [RSP + 0x88]
/* 0e4de065 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4de069 */  CMP dword ptr [RAX],ECX
/* 0e4de06b */  JZ 0x0e4de08f
/* 0e4de06d */  ADD RAX,0x68
/* 0e4de071 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4de080 */  MOV RDX,RAX
/* 0e4de083 */  ADD RAX,0x68
/* 0e4de087 */  CMP dword ptr [RDX],ECX
/* 0e4de089 */  JNZ 0x0e4de080
/* 0e4de08b */  ADD RAX,-0x68
/* 0e4de08f */  OR byte ptr [RAX + 0x12],0x4
/* 0e4de093 */  LEA RDX,[0x14079f7]
/* 0e4de09a */  LEA RDI,[RSP + 0x70]
/* 0e4de09f */  LEA RSI,[RSP + 0x1c0]
/* 0e4de0a7 */  MOV ECX,0x3
/* 0e4de0ac */  CALL 0x0e607070
/* 0e4de0b1 */  LEA RDI,[0xf5463b0]
/* 0e4de0b8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4de0bf */  MOV ESI,0x8
/* 0e4de0c4 */  CALL qword ptr [RAX + 0x10]
/* 0e4de0c7 */  MOV R14,RAX
/* 0e4de0ca */  TEST RAX,RAX
/* 0e4de0cd */  JZ 0x0e4ed9df
/* 0e4de0d3 */  LEA R15,[0xf012080]
/* 0e4de0da */  MOV qword ptr [R14],R15
/* 0e4de0dd */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4de0e5 */  MOV qword ptr [RSP + 0x88],R14
/* 0e4de0ed */  TEST RDI,RDI
/* 0e4de0f0 */  JZ 0x0e4de0f8
/* 0e4de0f2 */  MOV RAX,qword ptr [RDI]
/* 0e4de0f5 */  CALL qword ptr [RAX + 0x8]
/* 0e4de0f8 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4de0fd */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4de104 */  MOV dword ptr [RSP],EAX
/* 0e4de107 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4de110 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4de118 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4de121 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4de12a */  LEA R12,[0x5dd3ca0]
/* 0e4de131 */  MOV qword ptr [RSP + 0x28],R12
/* 0e4de136 */  LEA R13,[0x48b06d0]
/* 0e4de13d */  MOV qword ptr [RSP + 0x30],R13
/* 0e4de142 */  LEA RBP,[0x5dd3990]
/* 0e4de149 */  MOV qword ptr [RSP + 0x38],RBP
/* 0e4de14e */  LEA RAX,[0xe607600]
/* 0e4de155 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4de15a */  LEA RAX,[0xe607760]
/* 0e4de161 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4de166 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4de16e */  XORPS XMM0,XMM0
/* 0e4de171 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e4de176 */  MOV RSI,RSP
/* 0e4de179 */  CALL 0x048b05a0
/* 0e4de17e */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4de183 */  TEST R14,R14
/* 0e4de186 */  JZ 0x0e4de1ab
/* 0e4de188 */  MOV RAX,-0x1
/* 0e4de18f */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4de195 */  TEST RAX,RAX
/* 0e4de198 */  JNZ 0x0e4de1ab
/* 0e4de19a */  MOV RAX,qword ptr [R14]
/* 0e4de19d */  MOV RDI,R14
/* 0e4de1a0 */  CALL qword ptr [RAX + 0x10]
/* 0e4de1a3 */  MOV RDI,R14
/* 0e4de1a6 */  CALL 0x0412c2d0
/* 0e4de1ab */  LEA RDI,[RSP + 0x70]
/* 0e4de1b0 */  CALL 0x0e607300
/* 0e4de1b5 */  LEA RDI,[RSP + 0x88]
/* 0e4de1bd */  MOVZX EAX,byte ptr [RSP + 0x1f0]
/* 0e4de1c5 */  MOV byte ptr [RSP + 0x170],AL
/* 0e4de1cc */  MOVDQU XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4de1d5 */  MOVDQU XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4de1de */  MOVDQU XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e4de1e7 */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e4de1f0 */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4de1f9 */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4de202 */  CALL 0x048b0bc0
/* 0e4de207 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4de20f */  ADD RSI,0x18
/* 0e4de213 */  LEA RDI,[RSP + 0x70]
/* 0e4de218 */  CALL 0x0e606b10
/* 0e4de21d */  MOV EAX,dword ptr [RSP + 0x8c]
/* 0e4de224 */  CMP EAX,0x2
/* 0e4de227 */  JZ 0x0e4de83e
/* 0e4de22d */  CMP EAX,0x1
/* 0e4de230 */  JZ 0x0e4de29f
/* 0e4de232 */  TEST EAX,EAX
/* 0e4de234 */  JNZ 0x0e4de2d3
/* 0e4de23a */  MOV RAX,qword ptr [RSP + 0x80]
/* 0e4de242 */  OR dword ptr [RAX + 0x18],0x40000
/* 0e4de249 */  JMP 0x0e4de2d3
/* 0e4de24e */  MOV RAX,qword ptr [RSP + 0x80]
/* 0e4de256 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4de25a */  MOV ECX,dword ptr [RSP + 0x88]
/* 0e4de261 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4de265 */  CMP dword ptr [RAX],ECX
/* 0e4de267 */  JZ 0x0e4de27f
/* 0e4de269 */  ADD RAX,0x58
/* 0e4de26d */  NOP dword ptr [RAX]
/* 0e4de270 */  MOV RDX,RAX
/* 0e4de273 */  ADD RAX,0x58
/* 0e4de277 */  CMP dword ptr [RDX],ECX
/* 0e4de279 */  JNZ 0x0e4de270
/* 0e4de27b */  ADD RAX,-0x58
/* 0e4de27f */  MOV RCX,qword ptr [RSP + 0x78]
/* 0e4de284 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4de288 */  JZ 0x0e4de08f
/* 0e4de28e */  NOP
/* 0e4de290 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4de294 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4de298 */  JNZ 0x0e4de290
/* 0e4de29a */  JMP 0x0e4de08f
/* 0e4de29f */  MOV RAX,qword ptr [RSP + 0x80]
/* 0e4de2a7 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4de2ab */  MOV ECX,dword ptr [RSP + 0x88]
/* 0e4de2b2 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4de2b6 */  CMP dword ptr [RAX],ECX
/* 0e4de2b8 */  JZ 0x0e4de2cf
/* 0e4de2ba */  ADD RAX,0x68
/* 0e4de2be */  NOP
/* 0e4de2c0 */  MOV RDX,RAX
/* 0e4de2c3 */  ADD RAX,0x68
/* 0e4de2c7 */  CMP dword ptr [RDX],ECX
/* 0e4de2c9 */  JNZ 0x0e4de2c0
/* 0e4de2cb */  ADD RAX,-0x68
/* 0e4de2cf */  OR byte ptr [RAX + 0x12],0x4
/* 0e4de2d3 */  LEA RDX,[0x1388a78]
/* 0e4de2da */  LEA RDI,[RSP + 0x70]
/* 0e4de2df */  LEA RSI,[RSP + 0x140]
/* 0e4de2e7 */  MOV ECX,0x6
/* 0e4de2ec */  CALL 0x0e607070
/* 0e4de2f1 */  LEA RDI,[0xf5463b0]
/* 0e4de2f8 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4de2ff */  MOV ESI,0x8
/* 0e4de304 */  CALL qword ptr [RAX + 0x10]
/* 0e4de307 */  MOV R14,RAX
/* 0e4de30a */  TEST RAX,RAX
/* 0e4de30d */  JZ 0x0e4ed9f0
/* 0e4de313 */  MOV qword ptr [R14],R15
/* 0e4de316 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4de31e */  MOV qword ptr [RSP + 0x88],R14
/* 0e4de326 */  TEST RDI,RDI
/* 0e4de329 */  JZ 0x0e4de331
/* 0e4de32b */  MOV RAX,qword ptr [RDI]
/* 0e4de32e */  CALL qword ptr [RAX + 0x8]
/* 0e4de331 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4de336 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4de33d */  MOV dword ptr [RSP],EAX
/* 0e4de340 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4de349 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4de351 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4de35a */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4de363 */  MOV qword ptr [RSP + 0x28],R12
/* 0e4de368 */  MOV qword ptr [RSP + 0x30],R13
/* 0e4de36d */  MOV qword ptr [RSP + 0x38],RBP
/* 0e4de372 */  LEA RAX,[0xe607930]
/* 0e4de379 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4de37e */  LEA RAX,[0xe607a90]
/* 0e4de385 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4de38a */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4de392 */  PXOR XMM0,XMM0
/* 0e4de396 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4de39c */  MOV RSI,RSP
/* 0e4de39f */  CALL 0x048b05a0
/* 0e4de3a4 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4de3a9 */  TEST R14,R14
/* 0e4de3ac */  JZ 0x0e4de3d1
/* 0e4de3ae */  MOV RAX,-0x1
/* 0e4de3b5 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4de3bb */  TEST RAX,RAX
/* 0e4de3be */  JNZ 0x0e4de3d1
/* 0e4de3c0 */  MOV RAX,qword ptr [R14]
/* 0e4de3c3 */  MOV RDI,R14
/* 0e4de3c6 */  CALL qword ptr [RAX + 0x10]
/* 0e4de3c9 */  MOV RDI,R14
/* 0e4de3cc */  CALL 0x0412c2d0
/* 0e4de3d1 */  LEA RDI,[RSP + 0x70]
/* 0e4de3d6 */  CALL 0x0e607300
/* 0e4de3db */  LEA RDI,[RSP + 0x88]
/* 0e4de3e3 */  CALL 0x048b0bc0
/* 0e4de3e8 */  MOVZX EAX,byte ptr [0x0f75a298]
/* 0e4de3ef */  TEST AL,AL
/* 0e4de3f1 */  JZ 0x0e4ede39
/* 0e4de3f7 */  MOV RAX,qword ptr [0x0f75a218]
/* 0e4de3fe */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4de401 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4de406 */  MOV RCX,qword ptr [RSI + 0x18]
/* 0e4de40a */  MOV RDX,qword ptr [RSI + 0x20]
/* 0e4de40e */  SUB RDX,RCX
/* 0e4de411 */  SHR RDX,0x3
/* 0e4de415 */  MOV EDI,0xffffffff
/* 0e4de41a */  ADD EDX,EDI
/* 0e4de41c */  AND EDX,EAX
/* 0e4de41e */  LEA RCX,[RCX + RDX*0x8]
/* 0e4de422 */  MOV RDX,qword ptr [RSI + 0x30]
/* 0e4de426 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4de430 */  MOV RCX,qword ptr [RCX]
/* 0e4de433 */  CMP RCX,-0x1
/* 0e4de437 */  JZ 0x0e4de467
/* 0e4de439 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4de43d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4de441 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4de445 */  JNZ 0x0e4de430
/* 0e4de447 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4de44c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4de450 */  CMP RCX,RAX
/* 0e4de453 */  JNZ 0x0e4de478
/* 0e4de455 */  LEA RAX,[0xf75a218]
/* 0e4de45c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4de463 */  JZ 0x0e4de485
/* 0e4de465 */  JMP 0x0e4de4c6
/* 0e4de467 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4de46c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4de470 */  MOV RCX,RAX
/* 0e4de473 */  CMP RCX,RAX
/* 0e4de476 */  JZ 0x0e4de455
/* 0e4de478 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4de47c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4de483 */  JNZ 0x0e4de4c6
/* 0e4de485 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4de489 */  TEST RAX,RAX
/* 0e4de48c */  JZ 0x0e4de4c6
/* 0e4de48e */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4de492 */  LEA RDX,[RAX + 0x9]
/* 0e4de496 */  MOV ECX,ESI
/* 0e4de498 */  SHR ECX,0x1
/* 0e4de49a */  TEST SIL,0x1
/* 0e4de49e */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4de4a3 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4de4a8 */  LEA RDI,[RSP + 0x70]
/* 0e4de4ad */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4de4b2 */  CALL 0x0e608190
/* 0e4de4b7 */  CMP byte ptr [RSP + 0xa0],0x0
/* 0e4de4bf */  JZ 0x0e4de4ef
/* 0e4de4c1 */  JMP 0x0e4de90c
/* 0e4de4c6 */  LEA RDX,[0x11cee4d]
/* 0e4de4cd */  LEA RDI,[RSP + 0x70]
/* 0e4de4d2 */  MOV ECX,0x10
/* 0e4de4d7 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4de4dc */  CALL 0x0e608190
/* 0e4de4e1 */  CMP byte ptr [RSP + 0xa0],0x0
/* 0e4de4e9 */  JNZ 0x0e4de90c
/* 0e4de4ef */  MOV R12,qword ptr [RSP + 0x70]
/* 0e4de4f4 */  MOV R14D,dword ptr [RSP + 0x98]
/* 0e4de4fc */  MOV EBP,dword ptr [RSP + 0x9c]
/* 0e4de503 */  MOVZX EAX,byte ptr [0x0f75a298]
/* 0e4de50a */  TEST AL,AL
/* 0e4de50c */  JZ 0x0e4ee28b
/* 0e4de512 */  LEA R15,[R12 + 0x18]
/* 0e4de517 */  MOV RAX,qword ptr [0x0f75a218]
/* 0e4de51e */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4de521 */  MOV RCX,qword ptr [R12 + 0x18]
/* 0e4de526 */  MOV RDX,qword ptr [R12 + 0x20]
/* 0e4de52b */  SUB RDX,RCX
/* 0e4de52e */  SHR RDX,0x3
/* 0e4de532 */  MOV ESI,0xffffffff
/* 0e4de537 */  ADD EDX,ESI
/* 0e4de539 */  AND EDX,EAX
/* 0e4de53b */  LEA RCX,[RCX + RDX*0x8]
/* 0e4de53f */  MOV RDX,qword ptr [R12 + 0x30]
/* 0e4de544 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4de550 */  MOV RCX,qword ptr [RCX]
/* 0e4de553 */  CMP RCX,-0x1
/* 0e4de557 */  JZ 0x0e4de58c
/* 0e4de559 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4de55d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4de561 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4de565 */  JNZ 0x0e4de550
/* 0e4de567 */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e4de56c */  CMP RCX,RAX
/* 0e4de56f */  JNZ 0x0e4de599
/* 0e4de571 */  LEA RSI,[0xf75a218]
/* 0e4de578 */  MOV RAX,qword ptr [R12 + 0x50]
/* 0e4de57d */  MOV RCX,qword ptr [R12 + 0x58]
/* 0e4de582 */  CMP RAX,RCX
/* 0e4de585 */  JNZ 0x0e4de5b0
/* 0e4de587 */  JMP 0x0e4de665
/* 0e4de58c */  MOV RAX,qword ptr [R12 + 0x38]
/* 0e4de591 */  MOV RCX,RAX
/* 0e4de594 */  CMP RCX,RAX
/* 0e4de597 */  JZ 0x0e4de571
/* 0e4de599 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4de59d */  MOV RAX,qword ptr [R12 + 0x50]
/* 0e4de5a2 */  MOV RCX,qword ptr [R12 + 0x58]
/* 0e4de5a7 */  CMP RAX,RCX
/* 0e4de5aa */  JZ 0x0e4de665
/* 0e4de5b0 */  MOV RDX,0x3a6c61657265635b
/* 0e4de5ba */  MOVQ XMM0,RDX
/* 0e4de5bf */  MOV RDX,0x746e656d75636f64
/* 0e4de5c9 */  MOVQ XMM1,RDX
/* 0e4de5ce */  PUNPCKLQDQ XMM0,XMM1
/* 0e4de5d2 */  MOV RDX,0x7461746e656d7563
/* 0e4de5dc */  MOVQ XMM1,RDX
/* 0e4de5e1 */  MOV RDX,0x5d6761745f6e6f69
/* 0e4de5eb */  MOVQ XMM2,RDX
/* 0e4de5f0 */  PUNPCKLQDQ XMM1,XMM2
/* 0e4de5f4 */  JMP 0x0e4de62e
/* 0e4de600 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4de604 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4de608 */  PCMPEQB XMM2,XMM0
/* 0e4de60c */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4de611 */  PCMPEQB XMM3,XMM1
/* 0e4de615 */  PAND XMM3,XMM2
/* 0e4de619 */  PMOVMSKB EDX,XMM3
/* 0e4de61d */  CMP EDX,0xffff
/* 0e4de623 */  JZ 0x0e4de665
/* 0e4de625 */  ADD RAX,0x38
/* 0e4de629 */  CMP RAX,RCX
/* 0e4de62c */  JZ 0x0e4de665
/* 0e4de62e */  MOVZX EDX,byte ptr [RAX]
/* 0e4de631 */  TEST DL,0x1
/* 0e4de634 */  JZ 0x0e4de650
/* 0e4de636 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4de63a */  CMP RDI,0x1a
/* 0e4de63e */  JNZ 0x0e4de625
/* 0e4de640 */  JMP 0x0e4de65a
/* 0e4de650 */  MOV EDI,EDX
/* 0e4de652 */  SHR EDI,0x1
/* 0e4de654 */  CMP RDI,0x1a
/* 0e4de658 */  JNZ 0x0e4de625
/* 0e4de65a */  TEST DL,0x1
/* 0e4de65d */  JNZ 0x0e4de600
/* 0e4de65f */  LEA RDX,[RAX + 0x1]
/* 0e4de663 */  JMP 0x0e4de604
/* 0e4de665 */  CMP RAX,RCX
/* 0e4de668 */  JZ 0x0e4de688
/* 0e4de66a */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4de66d */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4de674 */  TEST AL,AL
/* 0e4de676 */  JZ 0x0e4ef30b
/* 0e4de67c */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4de682 */  JNZ 0x0e4de90c
/* 0e4de688 */  TEST R14D,R14D
/* 0e4de68b */  JZ 0x0e4de6e3
/* 0e4de68d */  TEST RSI,RSI
/* 0e4de690 */  JNZ 0x0e4de69d
/* 0e4de692 */  MOV RDI,R15
/* 0e4de695 */  CALL 0x048aead0
/* 0e4de69a */  MOV RSI,RAX
/* 0e4de69d */  MOV RDI,R15
/* 0e4de6a0 */  MOV EDX,EBP
/* 0e4de6a2 */  MOV ECX,0x1
/* 0e4de6a7 */  CALL 0x048b0c90
/* 0e4de6ac */  TEST RAX,RAX
/* 0e4de6af */  JNZ 0x0e4de6cb
/* 0e4de6b1 */  PXOR XMM0,XMM0
/* 0e4de6b5 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4de6ba */  MOV RDI,RSP
/* 0e4de6bd */  CALL 0x048b0d20
/* 0e4de6c2 */  MOV RAX,qword ptr [RSP]
/* 0e4de6c6 */  TEST RAX,RAX
/* 0e4de6c9 */  JZ 0x0e4de700
/* 0e4de6cb */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4de6d2 */  JNZ 0x0e4de700
/* 0e4de6d4 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4de6d8 */  TEST R14,R14
/* 0e4de6db */  JZ 0x0e4de700
/* 0e4de6dd */  ADD R14,0x40
/* 0e4de6e1 */  JMP 0x0e4de703
/* 0e4de6e3 */  TEST RSI,RSI
/* 0e4de6e6 */  JZ 0x0e4de700
/* 0e4de6e8 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4de6ef */  JNZ 0x0e4de700
/* 0e4de6f1 */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4de6f5 */  TEST R14,R14
/* 0e4de6f8 */  JZ 0x0e4de700
/* 0e4de6fa */  ADD R14,0x38
/* 0e4de6fe */  JMP 0x0e4de703
/* 0e4de700 */  XOR R14D,R14D
/* 0e4de703 */  LEA RAX,[0x488e0b0]
/* 0e4de70a */  MOV qword ptr [RSP + 0x190],RAX
/* 0e4de712 */  MOV dword ptr [RSP + 0x1a0],0x48b5725f
/* 0e4de71d */  MOV qword ptr [RSP + 0x198],0x0
/* 0e4de729 */  MOV byte ptr [RSP + 0x1a4],0x0
/* 0e4de731 */  MOV qword ptr [RSP + 0x180],0x0
/* 0e4de73d */  PXOR XMM0,XMM0
/* 0e4de741 */  MOVDQA xmmword ptr [RSP],XMM0
/* 0e4de746 */  MOV qword ptr [RSP + 0x18],RAX
/* 0e4de74b */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4de754 */  MOV dword ptr [RSP + 0x28],0x48b5725f
/* 0e4de75c */  MOV byte ptr [RSP + 0x2c],0x0
/* 0e4de761 */  LEA RDI,[0xf5463b0]
/* 0e4de768 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4de76f */  MOV ESI,0x20
/* 0e4de774 */  CALL qword ptr [RAX + 0x10]
/* 0e4de777 */  MOV R15,RAX
/* 0e4de77a */  TEST RAX,RAX
/* 0e4de77d */  JZ 0x0e4edc98
/* 0e4de783 */  MOV qword ptr [RSP + 0x150],R15
/* 0e4de78b */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4de797 */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4de7a3 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4de7aa */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4de7af */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4de7b7 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4de7bc */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4de7c1 */  LEA RSI,[RSP + 0x140]
/* 0e4de7c9 */  MOV RDI,R14
/* 0e4de7cc */  CALL 0x048b5060
/* 0e4de7d1 */  MOV R15,RAX
/* 0e4de7d4 */  LEA R14,[RSP + 0x8]
/* 0e4de7d9 */  ADD RAX,0x20
/* 0e4de7dd */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4de7e5 */  MOV RCX,RSP
/* 0e4de7e8 */  CMP RAX,RCX
/* 0e4de7eb */  JZ 0x0e4de829
/* 0e4de7ed */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4de7f1 */  TEST RAX,RAX
/* 0e4de7f4 */  JZ 0x0e4de8a1
/* 0e4de7fa */  MOV R12,R15
/* 0e4de7fd */  ADD R12,0x28
/* 0e4de801 */  MOV RDI,R12
/* 0e4de804 */  CALL RAX
/* 0e4de806 */  MOVZX EAX,byte ptr [RSP + 0x2c]
/* 0e4de80b */  TEST EAX,EAX
/* 0e4de80d */  JZ 0x0e4de8a1
/* 0e4de813 */  CMP EAX,0x2
/* 0e4de816 */  JNZ 0x0e4de88f
/* 0e4de818 */  MOV EDI,0x5
/* 0e4de81d */  MOV RSI,R14
/* 0e4de820 */  MOV RDX,R12
/* 0e4de823 */  CALL qword ptr [RSP + 0x18]
/* 0e4de827 */  JMP 0x0e4de8a1
/* 0e4de829 */  XOR EAX,EAX
/* 0e4de82b */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4de833 */  JNZ 0x0e4de8cd
/* 0e4de839 */  JMP 0x0e4de8eb
/* 0e4de83e */  MOV RAX,qword ptr [RSP + 0x80]
/* 0e4de846 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4de84a */  MOV ECX,dword ptr [RSP + 0x88]
/* 0e4de851 */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4de855 */  CMP dword ptr [RAX],ECX
/* 0e4de857 */  JZ 0x0e4de86f
/* 0e4de859 */  ADD RAX,0x58
/* 0e4de85d */  NOP dword ptr [RAX]
/* 0e4de860 */  MOV RDX,RAX
/* 0e4de863 */  ADD RAX,0x58
/* 0e4de867 */  CMP dword ptr [RDX],ECX
/* 0e4de869 */  JNZ 0x0e4de860
/* 0e4de86b */  ADD RAX,-0x58
/* 0e4de86f */  MOV RCX,qword ptr [RSP + 0x78]
/* 0e4de874 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4de878 */  JZ 0x0e4de2cf
/* 0e4de87e */  NOP
/* 0e4de880 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4de884 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4de888 */  JNZ 0x0e4de880
/* 0e4de88a */  JMP 0x0e4de2cf
/* 0e4de88f */  MOV RAX,qword ptr [RSP + 0x8]
/* 0e4de894 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4de89d */  MOV qword ptr [R12],RAX
/* 0e4de8a1 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e4de8a6 */  MOVDQU XMM0,xmmword ptr [RSP + 0x18]
/* 0e4de8ac */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4de8b2 */  MOV ECX,dword ptr [RSP + 0x28]
/* 0e4de8b6 */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4de8ba */  MOVZX ECX,byte ptr [RSP + 0x2c]
/* 0e4de8bf */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4de8c3 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4de8cb */  JZ 0x0e4de8eb
/* 0e4de8cd */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4de8d5 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4de8dd */  AND RSI,-0x2
/* 0e4de8e1 */  CALL 0x0412a280
/* 0e4de8e6 */  MOV RAX,qword ptr [RSP + 0x20]
/* 0e4de8eb */  TEST RAX,RAX
/* 0e4de8ee */  JZ 0x0e4de8f5
/* 0e4de8f0 */  MOV RDI,R14
/* 0e4de8f3 */  CALL RAX
/* 0e4de8f5 */  MOV RAX,qword ptr [RSP + 0x198]
/* 0e4de8fd */  TEST RAX,RAX
/* 0e4de900 */  JZ 0x0e4de90c
/* 0e4de902 */  LEA RDI,[RSP + 0x180]
/* 0e4de90a */  CALL RAX
/* 0e4de90c */  MOV RBX,qword ptr [RSP + 0x68]
/* 0e4de911 */  MOV RDI,RBX
/* 0e4de914 */  CALL 0x0e50c810
/* 0e4de919 */  MOVZX EAX,byte ptr [0x0f75ba10]
/* 0e4de920 */  TEST AL,AL
/* 0e4de922 */  JZ 0x0e4ede7d
/* 0e4de928 */  MOV RAX,qword ptr [0x0f75b990]
/* 0e4de92f */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4de932 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4de936 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e4de93a */  SUB RDX,RCX
/* 0e4de93d */  SHR RDX,0x3
/* 0e4de941 */  MOV ESI,0xffffffff
/* 0e4de946 */  ADD EDX,ESI
/* 0e4de948 */  AND EDX,EAX
/* 0e4de94a */  LEA RCX,[RCX + RDX*0x8]
/* 0e4de94e */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e4de952 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4de960 */  MOV RCX,qword ptr [RCX]
/* 0e4de963 */  CMP RCX,-0x1
/* 0e4de967 */  JZ 0x0e4de997
/* 0e4de969 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4de96d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4de971 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4de975 */  JNZ 0x0e4de960
/* 0e4de977 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4de97c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4de980 */  CMP RCX,RAX
/* 0e4de983 */  JNZ 0x0e4de9a8
/* 0e4de985 */  LEA RAX,[0xf75b990]
/* 0e4de98c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4de993 */  JZ 0x0e4de9b5
/* 0e4de995 */  JMP 0x0e4de9f9
/* 0e4de997 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4de99c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4de9a0 */  MOV RCX,RAX
/* 0e4de9a3 */  CMP RCX,RAX
/* 0e4de9a6 */  JZ 0x0e4de985
/* 0e4de9a8 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4de9ac */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4de9b3 */  JNZ 0x0e4de9f9
/* 0e4de9b5 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4de9b9 */  TEST RAX,RAX
/* 0e4de9bc */  JZ 0x0e4de9f9
/* 0e4de9be */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4de9c2 */  LEA RDX,[RAX + 0x9]
/* 0e4de9c6 */  MOV ECX,ESI
/* 0e4de9c8 */  SHR ECX,0x1
/* 0e4de9ca */  TEST SIL,0x1
/* 0e4de9ce */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4de9d3 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4de9d8 */  LEA RDI,[RSP + 0x180]
/* 0e4de9e0 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4de9e5 */  CALL 0x0e646000
/* 0e4de9ea */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4de9f2 */  JZ 0x0e4dea25
/* 0e4de9f4 */  JMP 0x0e4df384
/* 0e4de9f9 */  LEA RDX,[0x11b3054]
/* 0e4dea00 */  LEA RDI,[RSP + 0x180]
/* 0e4dea08 */  MOV ECX,0x19
/* 0e4dea0d */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4dea12 */  CALL 0x0e646000
/* 0e4dea17 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4dea1f */  JNZ 0x0e4df384
/* 0e4dea25 */  MOV R13,qword ptr [RSP + 0x180]
/* 0e4dea2d */  MOVUPS XMM0,xmmword ptr [RSP + 0x188]
/* 0e4dea35 */  MOVAPS xmmword ptr [RSP + 0x250],XMM0
/* 0e4dea3d */  MOVDQU XMM0,xmmword ptr [RSP + 0x198]
/* 0e4dea46 */  MOVDQA xmmword ptr [RSP + 0x260],XMM0
/* 0e4dea4f */  MOV R14D,dword ptr [RSP + 0x1a8]
/* 0e4dea57 */  MOV EBP,dword ptr [RSP + 0x1ac]
/* 0e4dea5e */  MOV RBX,qword ptr [RSP + 0x1b0]
/* 0e4dea66 */  MOVZX EAX,byte ptr [0x0f75ba10]
/* 0e4dea6d */  TEST AL,AL
/* 0e4dea6f */  JZ 0x0e4ee2cf
/* 0e4dea75 */  LEA R15,[R13 + 0x18]
/* 0e4dea79 */  MOV RAX,qword ptr [0x0f75b990]
/* 0e4dea80 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4dea83 */  MOV RCX,qword ptr [R13 + 0x18]
/* 0e4dea87 */  MOV RDX,qword ptr [R13 + 0x20]
/* 0e4dea8b */  SUB RDX,RCX
/* 0e4dea8e */  SHR RDX,0x3
/* 0e4dea92 */  MOV ESI,0xffffffff
/* 0e4dea97 */  ADD EDX,ESI
/* 0e4dea99 */  AND EDX,EAX
/* 0e4dea9b */  LEA RCX,[RCX + RDX*0x8]
/* 0e4dea9f */  MOV RDX,qword ptr [R13 + 0x30]
/* 0e4deaa3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4deab0 */  MOV RCX,qword ptr [RCX]
/* 0e4deab3 */  CMP RCX,-0x1
/* 0e4deab7 */  JZ 0x0e4deae9
/* 0e4deab9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4deabd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4deac1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4deac5 */  JNZ 0x0e4deab0
/* 0e4deac7 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4deacb */  CMP RCX,RAX
/* 0e4deace */  JNZ 0x0e4deaf5
/* 0e4dead0 */  LEA RSI,[0xf75b990]
/* 0e4dead7 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4deadb */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4deadf */  CMP RAX,RCX
/* 0e4deae2 */  JNZ 0x0e4deb0a
/* 0e4deae4 */  JMP 0x0e4debb5
/* 0e4deae9 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4deaed */  MOV RCX,RAX
/* 0e4deaf0 */  CMP RCX,RAX
/* 0e4deaf3 */  JZ 0x0e4dead0
/* 0e4deaf5 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4deaf9 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4deafd */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4deb01 */  CMP RAX,RCX
/* 0e4deb04 */  JZ 0x0e4debb5
/* 0e4deb0a */  MOV RDX,0x3a6c61657265635b
/* 0e4deb14 */  MOVQ XMM0,RDX
/* 0e4deb19 */  MOV RDX,0x746e656d75636f64
/* 0e4deb23 */  MOVQ XMM1,RDX
/* 0e4deb28 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4deb2c */  MOV RDX,0x7461746e656d7563
/* 0e4deb36 */  MOVQ XMM1,RDX
/* 0e4deb3b */  MOV RDX,0x5d6761745f6e6f69
/* 0e4deb45 */  MOVQ XMM2,RDX
/* 0e4deb4a */  PUNPCKLQDQ XMM1,XMM2
/* 0e4deb4e */  JMP 0x0e4deb7e
/* 0e4deb50 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4deb54 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4deb58 */  PCMPEQB XMM2,XMM0
/* 0e4deb5c */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4deb61 */  PCMPEQB XMM3,XMM1
/* 0e4deb65 */  PAND XMM3,XMM2
/* 0e4deb69 */  PMOVMSKB EDX,XMM3
/* 0e4deb6d */  CMP EDX,0xffff
/* 0e4deb73 */  JZ 0x0e4debb5
/* 0e4deb75 */  ADD RAX,0x38
/* 0e4deb79 */  CMP RAX,RCX
/* 0e4deb7c */  JZ 0x0e4debb5
/* 0e4deb7e */  MOVZX EDX,byte ptr [RAX]
/* 0e4deb81 */  TEST DL,0x1
/* 0e4deb84 */  JZ 0x0e4deba0
/* 0e4deb86 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4deb8a */  CMP RDI,0x1a
/* 0e4deb8e */  JNZ 0x0e4deb75
/* 0e4deb90 */  JMP 0x0e4debaa
/* 0e4deba0 */  MOV EDI,EDX
/* 0e4deba2 */  SHR EDI,0x1
/* 0e4deba4 */  CMP RDI,0x1a
/* 0e4deba8 */  JNZ 0x0e4deb75
/* 0e4debaa */  TEST DL,0x1
/* 0e4debad */  JNZ 0x0e4deb50
/* 0e4debaf */  LEA RDX,[RAX + 0x1]
/* 0e4debb3 */  JMP 0x0e4deb54
/* 0e4debb5 */  CMP RAX,RCX
/* 0e4debb8 */  JZ 0x0e4debde
/* 0e4debba */  MOV R12,RBX
/* 0e4debbd */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4debc0 */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4debc7 */  TEST AL,AL
/* 0e4debc9 */  JZ 0x0e4ef345
/* 0e4debcf */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4debd5 */  MOV RBX,R12
/* 0e4debd8 */  JNZ 0x0e4dee12
/* 0e4debde */  TEST R14D,R14D
/* 0e4debe1 */  JZ 0x0e4dec3d
/* 0e4debe3 */  TEST RSI,RSI
/* 0e4debe6 */  JNZ 0x0e4debf3
/* 0e4debe8 */  MOV RDI,R15
/* 0e4debeb */  CALL 0x048aead0
/* 0e4debf0 */  MOV RSI,RAX
/* 0e4debf3 */  MOV RDI,R15
/* 0e4debf6 */  MOV EDX,EBP
/* 0e4debf8 */  MOV ECX,0x1
/* 0e4debfd */  CALL 0x048b0c90
/* 0e4dec02 */  TEST RAX,RAX
/* 0e4dec05 */  JNZ 0x0e4dec25
/* 0e4dec07 */  PXOR XMM0,XMM0
/* 0e4dec0b */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4dec11 */  LEA RDI,[RSP + 0x70]
/* 0e4dec16 */  CALL 0x048b0d20
/* 0e4dec1b */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4dec20 */  TEST RAX,RAX
/* 0e4dec23 */  JZ 0x0e4dec5a
/* 0e4dec25 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4dec2c */  JNZ 0x0e4dec5a
/* 0e4dec2e */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4dec32 */  TEST R14,R14
/* 0e4dec35 */  JZ 0x0e4dec5a
/* 0e4dec37 */  ADD R14,0x40
/* 0e4dec3b */  JMP 0x0e4dec5d
/* 0e4dec3d */  TEST RSI,RSI
/* 0e4dec40 */  JZ 0x0e4dec5a
/* 0e4dec42 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4dec49 */  JNZ 0x0e4dec5a
/* 0e4dec4b */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4dec4f */  TEST R14,R14
/* 0e4dec52 */  JZ 0x0e4dec5a
/* 0e4dec54 */  ADD R14,0x38
/* 0e4dec58 */  JMP 0x0e4dec5d
/* 0e4dec5a */  XOR R14D,R14D
/* 0e4dec5d */  LEA RAX,[0x488e0b0]
/* 0e4dec64 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4dec69 */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4dec71 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4dec7a */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4dec7f */  MOV qword ptr [RSP],0x0
/* 0e4dec87 */  PXOR XMM0,XMM0
/* 0e4dec8b */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4dec91 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4dec99 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4deca5 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4decb0 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4decb8 */  LEA RDI,[0xf5463b0]
/* 0e4decbf */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4decc6 */  MOV ESI,0x20
/* 0e4deccb */  CALL qword ptr [RAX + 0x10]
/* 0e4decce */  MOV R15,RAX
/* 0e4decd1 */  TEST RAX,RAX
/* 0e4decd4 */  JZ 0x0e4edca9
/* 0e4decda */  MOV qword ptr [RSP + 0x150],R15
/* 0e4dece2 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4decee */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4decfa */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4ded01 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4ded06 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4ded0e */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4ded13 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4ded18 */  LEA RSI,[RSP + 0x140]
/* 0e4ded20 */  MOV RDI,R14
/* 0e4ded23 */  CALL 0x048b5060
/* 0e4ded28 */  MOV R15,RAX
/* 0e4ded2b */  LEA R14,[RSP + 0x78]
/* 0e4ded30 */  ADD RAX,0x20
/* 0e4ded34 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4ded3c */  LEA RCX,[RSP + 0x70]
/* 0e4ded41 */  CMP RAX,RCX
/* 0e4ded44 */  JZ 0x0e4ded80
/* 0e4ded46 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4ded4a */  TEST RAX,RAX
/* 0e4ded4d */  JZ 0x0e4deda0
/* 0e4ded4f */  MOV R12,R15
/* 0e4ded52 */  ADD R12,0x28
/* 0e4ded56 */  MOV RDI,R12
/* 0e4ded59 */  CALL RAX
/* 0e4ded5b */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4ded63 */  TEST EAX,EAX
/* 0e4ded65 */  JZ 0x0e4deda0
/* 0e4ded67 */  CMP EAX,0x2
/* 0e4ded6a */  JNZ 0x0e4ded8e
/* 0e4ded6c */  MOV EDI,0x5
/* 0e4ded71 */  MOV RSI,R14
/* 0e4ded74 */  MOV RDX,R12
/* 0e4ded77 */  CALL qword ptr [RSP + 0x88]
/* 0e4ded7e */  JMP 0x0e4deda0
/* 0e4ded80 */  XOR EAX,EAX
/* 0e4ded82 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4ded8a */  JNZ 0x0e4dedd8
/* 0e4ded8c */  JMP 0x0e4dedf9
/* 0e4ded8e */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4ded93 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4ded9c */  MOV qword ptr [R12],RAX
/* 0e4deda0 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4deda8 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4dedb1 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4dedb7 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4dedbe */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4dedc2 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4dedca */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4dedce */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4dedd6 */  JZ 0x0e4dedf9
/* 0e4dedd8 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4dede0 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4dede8 */  AND RSI,-0x2
/* 0e4dedec */  CALL 0x0412a280
/* 0e4dedf1 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4dedf9 */  TEST RAX,RAX
/* 0e4dedfc */  JZ 0x0e4dee03
/* 0e4dedfe */  MOV RDI,R14
/* 0e4dee01 */  CALL RAX
/* 0e4dee03 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4dee08 */  TEST RAX,RAX
/* 0e4dee0b */  JZ 0x0e4dee12
/* 0e4dee0d */  MOV RDI,RSP
/* 0e4dee10 */  CALL RAX
/* 0e4dee12 */  MOV qword ptr [RSP + 0x210],R13
/* 0e4dee1a */  MOVDQA XMM0,xmmword ptr [RSP + 0x250]
/* 0e4dee23 */  MOVDQA XMM1,xmmword ptr [RSP + 0x260]
/* 0e4dee2c */  MOVDQU xmmword ptr [RSP + 0x218],XMM0
/* 0e4dee35 */  MOVDQU xmmword ptr [RSP + 0x228],XMM1
/* 0e4dee3e */  MOV qword ptr [RSP + 0x240],RBX
/* 0e4dee46 */  MOV RAX,0x5127f14d00000002
/* 0e4dee50 */  MOV qword ptr [RSP + 0x238],RAX
/* 0e4dee58 */  LEA RDI,[RSP + 0xb0]
/* 0e4dee60 */  PXOR XMM0,XMM0
/* 0e4dee64 */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e4dee6d */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e4dee76 */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e4dee7f */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e4dee88 */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e4dee91 */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e4dee9a */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4deea0 */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e4deeab */  MOV ESI,0x8
/* 0e4deeb0 */  CALL 0x048afb10
/* 0e4deeb5 */  PXOR XMM0,XMM0
/* 0e4deeb9 */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e4deec2 */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e4deecb */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e4deed4 */  MOV word ptr [RSP + 0x118],0xff00
/* 0e4deede */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e4deee6 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e4deeee */  MOV byte ptr [RSP + 0x124],0x0
/* 0e4deef6 */  LEA RDI,[0xf5463b0]
/* 0e4deefd */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4def04 */  MOV ESI,0x8
/* 0e4def09 */  CALL qword ptr [RAX + 0x10]
/* 0e4def0c */  MOV R14,RAX
/* 0e4def0f */  TEST RAX,RAX
/* 0e4def12 */  JZ 0x0e4eda01
/* 0e4def18 */  LEA RAX,[0xf4c3e90]
/* 0e4def1f */  MOV qword ptr [R14],RAX
/* 0e4def22 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e4def27 */  MOV qword ptr [RSP + 0x70],R14
/* 0e4def2c */  TEST RDI,RDI
/* 0e4def2f */  JZ 0x0e4def37
/* 0e4def31 */  MOV RAX,qword ptr [RDI]
/* 0e4def34 */  CALL qword ptr [RAX + 0x8]
/* 0e4def37 */  TEST byte ptr [RSP + 0x98],0x1
/* 0e4def3f */  JZ 0x0e4def5a
/* 0e4def41 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e4def49 */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e4def51 */  AND RSI,-0x2
/* 0e4def55 */  CALL 0x0412a280
/* 0e4def5a */  LEA R14,[RSP + 0x218]
/* 0e4def62 */  MOV byte ptr [RSP + 0x98],0x8
/* 0e4def6a */  MOV dword ptr [RSP + 0x99],0x65707974
/* 0e4def75 */  MOV byte ptr [RSP + 0x9d],0x0
/* 0e4def7d */  MOVZX EAX,byte ptr [0x0f75ba30]
/* 0e4def84 */  TEST AL,AL
/* 0e4def86 */  JZ 0x0e4ee313
/* 0e4def8c */  MOV EAX,dword ptr [RSP + 0x23c]
/* 0e4def93 */  MOV dword ptr [RSP],EAX
/* 0e4def96 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4def9f */  MOV dword ptr [RSP + 0x10],0x3
/* 0e4defa7 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4defb0 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4defb9 */  LEA RAX,[0xe640bc0]
/* 0e4defc0 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4defc5 */  LEA R12,[0x48b06d0]
/* 0e4defcc */  MOV qword ptr [RSP + 0x30],R12
/* 0e4defd1 */  LEA RAX,[0xe63c860]
/* 0e4defd8 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4defdd */  LEA RAX,[0xe646d80]
/* 0e4defe4 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4defe9 */  LEA RAX,[0xe646d90]
/* 0e4deff0 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4deff5 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4deffd */  PXOR XMM0,XMM0
/* 0e4df001 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4df007 */  MOV RSI,RSP
/* 0e4df00a */  MOV RDI,R14
/* 0e4df00d */  CALL 0x048b05a0
/* 0e4df012 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e4df017 */  TEST R15,R15
/* 0e4df01a */  JZ 0x0e4df03f
/* 0e4df01c */  MOV RAX,-0x1
/* 0e4df023 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4df029 */  TEST RAX,RAX
/* 0e4df02c */  JNZ 0x0e4df03f
/* 0e4df02e */  MOV RAX,qword ptr [R15]
/* 0e4df031 */  MOV RDI,R15
/* 0e4df034 */  CALL qword ptr [RAX + 0x10]
/* 0e4df037 */  MOV RDI,R15
/* 0e4df03a */  CALL 0x0412c2d0
/* 0e4df03f */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e4df044 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e4df04a */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4df053 */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4df05c */  MOV RDI,RSP
/* 0e4df05f */  LEA RSI,[RSP + 0x140]
/* 0e4df067 */  LEA RDX,[RSP + 0x70]
/* 0e4df06c */  CALL 0x0e646b10
/* 0e4df071 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e4df075 */  CMP EAX,0x2
/* 0e4df078 */  JZ 0x0e4df80d
/* 0e4df07e */  CMP EAX,0x1
/* 0e4df081 */  JZ 0x0e4df095
/* 0e4df083 */  TEST EAX,EAX
/* 0e4df085 */  JNZ 0x0e4df0c3
/* 0e4df087 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4df08c */  OR dword ptr [RAX + 0x18],0x90000
/* 0e4df093 */  JMP 0x0e4df0c3
/* 0e4df095 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4df09a */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4df09e */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e4df0a2 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4df0a6 */  CMP dword ptr [RAX],ECX
/* 0e4df0a8 */  JZ 0x0e4df0bf
/* 0e4df0aa */  ADD RAX,0x68
/* 0e4df0ae */  NOP
/* 0e4df0b0 */  MOV RDX,RAX
/* 0e4df0b3 */  ADD RAX,0x68
/* 0e4df0b7 */  CMP dword ptr [RDX],ECX
/* 0e4df0b9 */  JNZ 0x0e4df0b0
/* 0e4df0bb */  ADD RAX,-0x68
/* 0e4df0bf */  OR byte ptr [RAX + 0x12],0x9
/* 0e4df0c3 */  MOVUPS XMM0,xmmword ptr [RSP + 0x210]
/* 0e4df0cb */  MOVUPS XMM1,xmmword ptr [RSP + 0x220]
/* 0e4df0d3 */  MOVUPS XMM2,xmmword ptr [RSP + 0x230]
/* 0e4df0db */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0e4df0e3 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM1
/* 0e4df0eb */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM2
/* 0e4df0f3 */  MOVZX EAX,byte ptr [RSP + 0x240]
/* 0e4df0fb */  MOV byte ptr [RSP + 0x1f0],AL
/* 0e4df102 */  LEA RDI,[RSP + 0x70]
/* 0e4df107 */  CALL 0x048b0bc0
/* 0e4df10c */  LEA RDX,[0x12ba56c]
/* 0e4df113 */  LEA RDI,[RSP + 0x70]
/* 0e4df118 */  LEA RSI,[RSP + 0x1c0]
/* 0e4df120 */  CALL 0x0e646de0
/* 0e4df125 */  LEA RDI,[0xf5463b0]
/* 0e4df12c */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4df133 */  MOV ESI,0x8
/* 0e4df138 */  CALL qword ptr [RAX + 0x10]
/* 0e4df13b */  MOV R14,RAX
/* 0e4df13e */  TEST RAX,RAX
/* 0e4df141 */  JZ 0x0e4eda12
/* 0e4df147 */  LEA R15,[0xf4c4118]
/* 0e4df14e */  MOV qword ptr [R14],R15
/* 0e4df151 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4df159 */  MOV qword ptr [RSP + 0x88],R14
/* 0e4df161 */  TEST RDI,RDI
/* 0e4df164 */  JZ 0x0e4df16c
/* 0e4df166 */  MOV RAX,qword ptr [RDI]
/* 0e4df169 */  CALL qword ptr [RAX + 0x8]
/* 0e4df16c */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4df171 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4df178 */  MOV dword ptr [RSP],EAX
/* 0e4df17b */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4df184 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4df18c */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4df195 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4df19e */  LEA R13,[0xe64cb80]
/* 0e4df1a5 */  MOV qword ptr [RSP + 0x28],R13
/* 0e4df1aa */  MOV qword ptr [RSP + 0x30],R12
/* 0e4df1af */  LEA RBP,[0xe64aba0]
/* 0e4df1b6 */  MOV qword ptr [RSP + 0x38],RBP
/* 0e4df1bb */  LEA RAX,[0xe64cc40]
/* 0e4df1c2 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4df1c7 */  LEA RAX,[0xe64cda0]
/* 0e4df1ce */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4df1d3 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4df1db */  XORPS XMM0,XMM0
/* 0e4df1de */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e4df1e3 */  MOV RSI,RSP
/* 0e4df1e6 */  CALL 0x048b05a0
/* 0e4df1eb */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4df1f0 */  TEST R14,R14
/* 0e4df1f3 */  JZ 0x0e4df218
/* 0e4df1f5 */  MOV RAX,-0x1
/* 0e4df1fc */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4df202 */  TEST RAX,RAX
/* 0e4df205 */  JNZ 0x0e4df218
/* 0e4df207 */  MOV RAX,qword ptr [R14]
/* 0e4df20a */  MOV RDI,R14
/* 0e4df20d */  CALL qword ptr [RAX + 0x10]
/* 0e4df210 */  MOV RDI,R14
/* 0e4df213 */  CALL 0x0412c2d0
/* 0e4df218 */  LEA RDI,[RSP + 0x70]
/* 0e4df21d */  CALL 0x0e647020
/* 0e4df222 */  LEA RDI,[RSP + 0x88]
/* 0e4df22a */  MOVZX EAX,byte ptr [RSP + 0x1f0]
/* 0e4df232 */  MOV byte ptr [RSP + 0x170],AL
/* 0e4df239 */  MOVDQA XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4df242 */  MOVDQA XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4df24b */  MOVDQA XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e4df254 */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e4df25d */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4df266 */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4df26f */  CALL 0x048b0bc0
/* 0e4df274 */  LEA RDX,[0x11e9523]
/* 0e4df27b */  LEA RDI,[RSP + 0x70]
/* 0e4df280 */  LEA RSI,[RSP + 0x140]
/* 0e4df288 */  CALL 0x0e646de0
/* 0e4df28d */  LEA RDI,[0xf5463b0]
/* 0e4df294 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4df29b */  MOV ESI,0x8
/* 0e4df2a0 */  CALL qword ptr [RAX + 0x10]
/* 0e4df2a3 */  MOV R14,RAX
/* 0e4df2a6 */  TEST RAX,RAX
/* 0e4df2a9 */  JZ 0x0e4eda23
/* 0e4df2af */  MOV qword ptr [R14],R15
/* 0e4df2b2 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4df2ba */  MOV qword ptr [RSP + 0x88],R14
/* 0e4df2c2 */  TEST RDI,RDI
/* 0e4df2c5 */  JZ 0x0e4df2cd
/* 0e4df2c7 */  MOV RAX,qword ptr [RDI]
/* 0e4df2ca */  CALL qword ptr [RAX + 0x8]
/* 0e4df2cd */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4df2d2 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4df2d9 */  MOV dword ptr [RSP],EAX
/* 0e4df2dc */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4df2e5 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4df2ed */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4df2f6 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4df2ff */  MOV qword ptr [RSP + 0x28],R13
/* 0e4df304 */  MOV qword ptr [RSP + 0x30],R12
/* 0e4df309 */  MOV qword ptr [RSP + 0x38],RBP
/* 0e4df30e */  LEA RAX,[0xe64d220]
/* 0e4df315 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4df31a */  LEA RAX,[0xe64d380]
/* 0e4df321 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4df326 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4df32e */  PXOR XMM0,XMM0
/* 0e4df332 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4df338 */  MOV RSI,RSP
/* 0e4df33b */  CALL 0x048b05a0
/* 0e4df340 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4df345 */  TEST R14,R14
/* 0e4df348 */  JZ 0x0e4df36d
/* 0e4df34a */  MOV RAX,-0x1
/* 0e4df351 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4df357 */  TEST RAX,RAX
/* 0e4df35a */  JNZ 0x0e4df36d
/* 0e4df35c */  MOV RAX,qword ptr [R14]
/* 0e4df35f */  MOV RDI,R14
/* 0e4df362 */  CALL qword ptr [RAX + 0x10]
/* 0e4df365 */  MOV RDI,R14
/* 0e4df368 */  CALL 0x0412c2d0
/* 0e4df36d */  LEA RDI,[RSP + 0x70]
/* 0e4df372 */  CALL 0x0e647020
/* 0e4df377 */  LEA RDI,[RSP + 0x88]
/* 0e4df37f */  CALL 0x048b0bc0
/* 0e4df384 */  MOVZX EAX,byte ptr [0x0f75bb80]
/* 0e4df38b */  TEST AL,AL
/* 0e4df38d */  JZ 0x0e4edec1
/* 0e4df393 */  MOV RAX,qword ptr [0x0f75bb00]
/* 0e4df39a */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4df39d */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4df3a2 */  MOV RCX,qword ptr [RSI + 0x18]
/* 0e4df3a6 */  MOV RDX,qword ptr [RSI + 0x20]
/* 0e4df3aa */  SUB RDX,RCX
/* 0e4df3ad */  SHR RDX,0x3
/* 0e4df3b1 */  MOV EDI,0xffffffff
/* 0e4df3b6 */  ADD EDX,EDI
/* 0e4df3b8 */  AND EDX,EAX
/* 0e4df3ba */  LEA RCX,[RCX + RDX*0x8]
/* 0e4df3be */  MOV RDX,qword ptr [RSI + 0x30]
/* 0e4df3c2 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4df3d0 */  MOV RCX,qword ptr [RCX]
/* 0e4df3d3 */  CMP RCX,-0x1
/* 0e4df3d7 */  JZ 0x0e4df407
/* 0e4df3d9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4df3dd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4df3e1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4df3e5 */  JNZ 0x0e4df3d0
/* 0e4df3e7 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4df3ec */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4df3f0 */  CMP RCX,RAX
/* 0e4df3f3 */  JNZ 0x0e4df418
/* 0e4df3f5 */  LEA RAX,[0xf75bb00]
/* 0e4df3fc */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4df403 */  JZ 0x0e4df425
/* 0e4df405 */  JMP 0x0e4df469
/* 0e4df407 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4df40c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4df410 */  MOV RCX,RAX
/* 0e4df413 */  CMP RCX,RAX
/* 0e4df416 */  JZ 0x0e4df3f5
/* 0e4df418 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4df41c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4df423 */  JNZ 0x0e4df469
/* 0e4df425 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4df429 */  TEST RAX,RAX
/* 0e4df42c */  JZ 0x0e4df469
/* 0e4df42e */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4df432 */  LEA RDX,[RAX + 0x9]
/* 0e4df436 */  MOV ECX,ESI
/* 0e4df438 */  SHR ECX,0x1
/* 0e4df43a */  TEST SIL,0x1
/* 0e4df43e */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4df443 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4df448 */  LEA RDI,[RSP + 0x180]
/* 0e4df450 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4df455 */  CALL 0x0e64da10
/* 0e4df45a */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4df462 */  JZ 0x0e4df495
/* 0e4df464 */  JMP 0x0e4dff3a
/* 0e4df469 */  LEA RDX,[0x1442d48]
/* 0e4df470 */  LEA RDI,[RSP + 0x180]
/* 0e4df478 */  MOV ECX,0x1a
/* 0e4df47d */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4df482 */  CALL 0x0e64da10
/* 0e4df487 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4df48f */  JNZ 0x0e4dff3a
/* 0e4df495 */  MOV R13,qword ptr [RSP + 0x180]
/* 0e4df49d */  MOVUPS XMM0,xmmword ptr [RSP + 0x188]
/* 0e4df4a5 */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0e4df4ad */  MOVDQU XMM0,xmmword ptr [RSP + 0x198]
/* 0e4df4b6 */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4df4bf */  MOV R14D,dword ptr [RSP + 0x1a8]
/* 0e4df4c7 */  MOV EBP,dword ptr [RSP + 0x1ac]
/* 0e4df4ce */  MOV RBX,qword ptr [RSP + 0x1b0]
/* 0e4df4d6 */  MOVZX EAX,byte ptr [0x0f75bb80]
/* 0e4df4dd */  TEST AL,AL
/* 0e4df4df */  JZ 0x0e4ee33d
/* 0e4df4e5 */  LEA R15,[R13 + 0x18]
/* 0e4df4e9 */  MOV RAX,qword ptr [0x0f75bb00]
/* 0e4df4f0 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4df4f3 */  MOV RCX,qword ptr [R13 + 0x18]
/* 0e4df4f7 */  MOV RDX,qword ptr [R13 + 0x20]
/* 0e4df4fb */  SUB RDX,RCX
/* 0e4df4fe */  SHR RDX,0x3
/* 0e4df502 */  MOV ESI,0xffffffff
/* 0e4df507 */  ADD EDX,ESI
/* 0e4df509 */  AND EDX,EAX
/* 0e4df50b */  LEA RCX,[RCX + RDX*0x8]
/* 0e4df50f */  MOV RDX,qword ptr [R13 + 0x30]
/* 0e4df513 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4df520 */  MOV RCX,qword ptr [RCX]
/* 0e4df523 */  CMP RCX,-0x1
/* 0e4df527 */  JZ 0x0e4df559
/* 0e4df529 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4df52d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4df531 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4df535 */  JNZ 0x0e4df520
/* 0e4df537 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4df53b */  CMP RCX,RAX
/* 0e4df53e */  JNZ 0x0e4df565
/* 0e4df540 */  LEA RSI,[0xf75bb00]
/* 0e4df547 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4df54b */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4df54f */  CMP RAX,RCX
/* 0e4df552 */  JNZ 0x0e4df57a
/* 0e4df554 */  JMP 0x0e4df625
/* 0e4df559 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4df55d */  MOV RCX,RAX
/* 0e4df560 */  CMP RCX,RAX
/* 0e4df563 */  JZ 0x0e4df540
/* 0e4df565 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4df569 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4df56d */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4df571 */  CMP RAX,RCX
/* 0e4df574 */  JZ 0x0e4df625
/* 0e4df57a */  MOV RDX,0x3a6c61657265635b
/* 0e4df584 */  MOVQ XMM0,RDX
/* 0e4df589 */  MOV RDX,0x746e656d75636f64
/* 0e4df593 */  MOVQ XMM1,RDX
/* 0e4df598 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4df59c */  MOV RDX,0x7461746e656d7563
/* 0e4df5a6 */  MOVQ XMM1,RDX
/* 0e4df5ab */  MOV RDX,0x5d6761745f6e6f69
/* 0e4df5b5 */  MOVQ XMM2,RDX
/* 0e4df5ba */  PUNPCKLQDQ XMM1,XMM2
/* 0e4df5be */  JMP 0x0e4df5ee
/* 0e4df5c0 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4df5c4 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4df5c8 */  PCMPEQB XMM2,XMM0
/* 0e4df5cc */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4df5d1 */  PCMPEQB XMM3,XMM1
/* 0e4df5d5 */  PAND XMM3,XMM2
/* 0e4df5d9 */  PMOVMSKB EDX,XMM3
/* 0e4df5dd */  CMP EDX,0xffff
/* 0e4df5e3 */  JZ 0x0e4df625
/* 0e4df5e5 */  ADD RAX,0x38
/* 0e4df5e9 */  CMP RAX,RCX
/* 0e4df5ec */  JZ 0x0e4df625
/* 0e4df5ee */  MOVZX EDX,byte ptr [RAX]
/* 0e4df5f1 */  TEST DL,0x1
/* 0e4df5f4 */  JZ 0x0e4df610
/* 0e4df5f6 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4df5fa */  CMP RDI,0x1a
/* 0e4df5fe */  JNZ 0x0e4df5e5
/* 0e4df600 */  JMP 0x0e4df61a
/* 0e4df610 */  MOV EDI,EDX
/* 0e4df612 */  SHR EDI,0x1
/* 0e4df614 */  CMP RDI,0x1a
/* 0e4df618 */  JNZ 0x0e4df5e5
/* 0e4df61a */  TEST DL,0x1
/* 0e4df61d */  JNZ 0x0e4df5c0
/* 0e4df61f */  LEA RDX,[RAX + 0x1]
/* 0e4df623 */  JMP 0x0e4df5c4
/* 0e4df625 */  CMP RAX,RCX
/* 0e4df628 */  JZ 0x0e4df64e
/* 0e4df62a */  MOV R12,RBX
/* 0e4df62d */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4df630 */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4df637 */  TEST AL,AL
/* 0e4df639 */  JZ 0x0e4ef38e
/* 0e4df63f */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4df645 */  MOV RBX,R12
/* 0e4df648 */  JNZ 0x0e4df8e3
/* 0e4df64e */  TEST R14D,R14D
/* 0e4df651 */  JZ 0x0e4df6ad
/* 0e4df653 */  TEST RSI,RSI
/* 0e4df656 */  JNZ 0x0e4df663
/* 0e4df658 */  MOV RDI,R15
/* 0e4df65b */  CALL 0x048aead0
/* 0e4df660 */  MOV RSI,RAX
/* 0e4df663 */  MOV RDI,R15
/* 0e4df666 */  MOV EDX,EBP
/* 0e4df668 */  MOV ECX,0x1
/* 0e4df66d */  CALL 0x048b0c90
/* 0e4df672 */  TEST RAX,RAX
/* 0e4df675 */  JNZ 0x0e4df695
/* 0e4df677 */  PXOR XMM0,XMM0
/* 0e4df67b */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4df681 */  LEA RDI,[RSP + 0x70]
/* 0e4df686 */  CALL 0x048b0d20
/* 0e4df68b */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4df690 */  TEST RAX,RAX
/* 0e4df693 */  JZ 0x0e4df6ca
/* 0e4df695 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4df69c */  JNZ 0x0e4df6ca
/* 0e4df69e */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4df6a2 */  TEST R14,R14
/* 0e4df6a5 */  JZ 0x0e4df6ca
/* 0e4df6a7 */  ADD R14,0x40
/* 0e4df6ab */  JMP 0x0e4df6cd
/* 0e4df6ad */  TEST RSI,RSI
/* 0e4df6b0 */  JZ 0x0e4df6ca
/* 0e4df6b2 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4df6b9 */  JNZ 0x0e4df6ca
/* 0e4df6bb */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4df6bf */  TEST R14,R14
/* 0e4df6c2 */  JZ 0x0e4df6ca
/* 0e4df6c4 */  ADD R14,0x38
/* 0e4df6c8 */  JMP 0x0e4df6cd
/* 0e4df6ca */  XOR R14D,R14D
/* 0e4df6cd */  LEA RAX,[0x488e0b0]
/* 0e4df6d4 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4df6d9 */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4df6e1 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4df6ea */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4df6ef */  MOV qword ptr [RSP],0x0
/* 0e4df6f7 */  PXOR XMM0,XMM0
/* 0e4df6fb */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4df701 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4df709 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4df715 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4df720 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4df728 */  LEA RDI,[0xf5463b0]
/* 0e4df72f */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4df736 */  MOV ESI,0x20
/* 0e4df73b */  CALL qword ptr [RAX + 0x10]
/* 0e4df73e */  MOV R15,RAX
/* 0e4df741 */  TEST RAX,RAX
/* 0e4df744 */  JZ 0x0e4edcba
/* 0e4df74a */  MOV qword ptr [RSP + 0x150],R15
/* 0e4df752 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4df75e */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4df76a */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4df771 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4df776 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4df77e */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4df783 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4df788 */  LEA RSI,[RSP + 0x140]
/* 0e4df790 */  MOV RDI,R14
/* 0e4df793 */  CALL 0x048b5060
/* 0e4df798 */  MOV R15,RAX
/* 0e4df79b */  LEA R14,[RSP + 0x78]
/* 0e4df7a0 */  ADD RAX,0x20
/* 0e4df7a4 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4df7ac */  LEA RCX,[RSP + 0x70]
/* 0e4df7b1 */  CMP RAX,RCX
/* 0e4df7b4 */  JZ 0x0e4df7f8
/* 0e4df7b6 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4df7ba */  TEST RAX,RAX
/* 0e4df7bd */  JZ 0x0e4df871
/* 0e4df7c3 */  MOV R12,R15
/* 0e4df7c6 */  ADD R12,0x28
/* 0e4df7ca */  MOV RDI,R12
/* 0e4df7cd */  CALL RAX
/* 0e4df7cf */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4df7d7 */  TEST EAX,EAX
/* 0e4df7d9 */  JZ 0x0e4df871
/* 0e4df7df */  CMP EAX,0x2
/* 0e4df7e2 */  JNZ 0x0e4df85f
/* 0e4df7e4 */  MOV EDI,0x5
/* 0e4df7e9 */  MOV RSI,R14
/* 0e4df7ec */  MOV RDX,R12
/* 0e4df7ef */  CALL qword ptr [RSP + 0x88]
/* 0e4df7f6 */  JMP 0x0e4df871
/* 0e4df7f8 */  XOR EAX,EAX
/* 0e4df7fa */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4df802 */  JNZ 0x0e4df8a9
/* 0e4df808 */  JMP 0x0e4df8ca
/* 0e4df80d */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4df812 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4df816 */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e4df81a */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4df81e */  CMP dword ptr [RAX],ECX
/* 0e4df820 */  JZ 0x0e4df83f
/* 0e4df822 */  ADD RAX,0x58
/* 0e4df826 */  NOP word ptr CS:[RAX + RAX*0x1]
/* 0e4df830 */  MOV RDX,RAX
/* 0e4df833 */  ADD RAX,0x58
/* 0e4df837 */  CMP dword ptr [RDX],ECX
/* 0e4df839 */  JNZ 0x0e4df830
/* 0e4df83b */  ADD RAX,-0x58
/* 0e4df83f */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e4df844 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4df848 */  JZ 0x0e4df0bf
/* 0e4df84e */  NOP
/* 0e4df850 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4df854 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4df858 */  JNZ 0x0e4df850
/* 0e4df85a */  JMP 0x0e4df0bf
/* 0e4df85f */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4df864 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4df86d */  MOV qword ptr [R12],RAX
/* 0e4df871 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4df879 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4df882 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4df888 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4df88f */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4df893 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4df89b */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4df89f */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4df8a7 */  JZ 0x0e4df8ca
/* 0e4df8a9 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4df8b1 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4df8b9 */  AND RSI,-0x2
/* 0e4df8bd */  CALL 0x0412a280
/* 0e4df8c2 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4df8ca */  TEST RAX,RAX
/* 0e4df8cd */  JZ 0x0e4df8d4
/* 0e4df8cf */  MOV RDI,R14
/* 0e4df8d2 */  CALL RAX
/* 0e4df8d4 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4df8d9 */  TEST RAX,RAX
/* 0e4df8dc */  JZ 0x0e4df8e3
/* 0e4df8de */  MOV RDI,RSP
/* 0e4df8e1 */  CALL RAX
/* 0e4df8e3 */  MOV qword ptr [RSP + 0x1c0],R13
/* 0e4df8eb */  MOVDQA XMM0,xmmword ptr [RSP + 0x210]
/* 0e4df8f4 */  MOVDQA XMM1,xmmword ptr [RSP + 0x220]
/* 0e4df8fd */  MOVDQU xmmword ptr [RSP + 0x1c8],XMM0
/* 0e4df906 */  MOVDQU xmmword ptr [RSP + 0x1d8],XMM1
/* 0e4df90f */  MOV qword ptr [RSP + 0x1f0],RBX
/* 0e4df917 */  MOV RAX,0x5127f14d00000002
/* 0e4df921 */  MOV qword ptr [RSP + 0x1e8],RAX
/* 0e4df929 */  LEA RDI,[RSP + 0xb0]
/* 0e4df931 */  PXOR XMM0,XMM0
/* 0e4df935 */  MOVDQA xmmword ptr [RSP + 0xd0],XMM0
/* 0e4df93e */  MOVDQA xmmword ptr [RSP + 0xc0],XMM0
/* 0e4df947 */  MOVDQA xmmword ptr [RSP + 0xb0],XMM0
/* 0e4df950 */  MOVDQA xmmword ptr [RSP + 0xa0],XMM0
/* 0e4df959 */  MOVDQA xmmword ptr [RSP + 0x90],XMM0
/* 0e4df962 */  MOVDQA xmmword ptr [RSP + 0x80],XMM0
/* 0e4df96b */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4df971 */  MOV dword ptr [RSP + 0xe0],0x3f600000
/* 0e4df97c */  MOV ESI,0x8
/* 0e4df981 */  CALL 0x048afb10
/* 0e4df986 */  PXOR XMM0,XMM0
/* 0e4df98a */  MOVDQU xmmword ptr [RSP + 0x108],XMM0
/* 0e4df993 */  MOVDQU xmmword ptr [RSP + 0xf8],XMM0
/* 0e4df99c */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e4df9a5 */  MOV word ptr [RSP + 0x118],0xff00
/* 0e4df9af */  MOV byte ptr [RSP + 0x11c],0x0
/* 0e4df9b7 */  MOV byte ptr [RSP + 0x120],0x0
/* 0e4df9bf */  MOV byte ptr [RSP + 0x124],0x0
/* 0e4df9c7 */  LEA RDI,[0xf5463b0]
/* 0e4df9ce */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4df9d5 */  MOV ESI,0x8
/* 0e4df9da */  CALL qword ptr [RAX + 0x10]
/* 0e4df9dd */  MOV R14,RAX
/* 0e4df9e0 */  TEST RAX,RAX
/* 0e4df9e3 */  JZ 0x0e4eda34
/* 0e4df9e9 */  LEA RAX,[0xf4c3e90]
/* 0e4df9f0 */  MOV qword ptr [R14],RAX
/* 0e4df9f3 */  MOV RDI,qword ptr [RSP + 0x70]
/* 0e4df9f8 */  MOV qword ptr [RSP + 0x70],R14
/* 0e4df9fd */  TEST RDI,RDI
/* 0e4dfa00 */  JZ 0x0e4dfa08
/* 0e4dfa02 */  MOV RAX,qword ptr [RDI]
/* 0e4dfa05 */  CALL qword ptr [RAX + 0x8]
/* 0e4dfa08 */  TEST byte ptr [RSP + 0x98],0x1
/* 0e4dfa10 */  JZ 0x0e4dfa2b
/* 0e4dfa12 */  MOV RSI,qword ptr [RSP + 0x98]
/* 0e4dfa1a */  MOV RDI,qword ptr [RSP + 0xa8]
/* 0e4dfa22 */  AND RSI,-0x2
/* 0e4dfa26 */  CALL 0x0412a280
/* 0e4dfa2b */  LEA R14,[RSP + 0x1c8]
/* 0e4dfa33 */  MOV byte ptr [RSP + 0x98],0x8
/* 0e4dfa3b */  MOV dword ptr [RSP + 0x99],0x65707974
/* 0e4dfa46 */  MOV byte ptr [RSP + 0x9d],0x0
/* 0e4dfa4e */  MOVZX EAX,byte ptr [0x0f75bba0]
/* 0e4dfa55 */  TEST AL,AL
/* 0e4dfa57 */  JZ 0x0e4ee381
/* 0e4dfa5d */  MOV EAX,dword ptr [RSP + 0x1ec]
/* 0e4dfa64 */  MOV dword ptr [RSP],EAX
/* 0e4dfa67 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4dfa70 */  MOV dword ptr [RSP + 0x10],0x3
/* 0e4dfa78 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4dfa81 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4dfa8a */  LEA RAX,[0xe640bc0]
/* 0e4dfa91 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4dfa96 */  LEA R12,[0x48b06d0]
/* 0e4dfa9d */  MOV qword ptr [RSP + 0x30],R12
/* 0e4dfaa2 */  LEA RAX,[0xe63c860]
/* 0e4dfaa9 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4dfaae */  LEA RAX,[0xe64e790]
/* 0e4dfab5 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4dfaba */  LEA RAX,[0xe64e7a0]
/* 0e4dfac1 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4dfac6 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4dface */  PXOR XMM0,XMM0
/* 0e4dfad2 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4dfad8 */  MOV RSI,RSP
/* 0e4dfadb */  MOV RDI,R14
/* 0e4dfade */  CALL 0x048b05a0
/* 0e4dfae3 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e4dfae8 */  TEST R15,R15
/* 0e4dfaeb */  JZ 0x0e4dfb10
/* 0e4dfaed */  MOV RAX,-0x1
/* 0e4dfaf4 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4dfafa */  TEST RAX,RAX
/* 0e4dfafd */  JNZ 0x0e4dfb10
/* 0e4dfaff */  MOV RAX,qword ptr [R15]
/* 0e4dfb02 */  MOV RDI,R15
/* 0e4dfb05 */  CALL qword ptr [RAX + 0x10]
/* 0e4dfb08 */  MOV RDI,R15
/* 0e4dfb0b */  CALL 0x0412c2d0
/* 0e4dfb10 */  MOVDQU XMM0,xmmword ptr [R14]
/* 0e4dfb15 */  MOVDQU XMM1,xmmword ptr [R14 + 0x10]
/* 0e4dfb1b */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4dfb24 */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4dfb2d */  MOV RDI,RSP
/* 0e4dfb30 */  LEA RSI,[RSP + 0x140]
/* 0e4dfb38 */  LEA RDX,[RSP + 0x70]
/* 0e4dfb3d */  CALL 0x0e64e520
/* 0e4dfb42 */  MOV EAX,dword ptr [RSP + 0x1c]
/* 0e4dfb46 */  CMP EAX,0x2
/* 0e4dfb49 */  JZ 0x0e4dfeb1
/* 0e4dfb4f */  CMP EAX,0x1
/* 0e4dfb52 */  JZ 0x0e4dfb66
/* 0e4dfb54 */  TEST EAX,EAX
/* 0e4dfb56 */  JNZ 0x0e4dfb93
/* 0e4dfb58 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4dfb5d */  OR dword ptr [RAX + 0x18],0x90000
/* 0e4dfb64 */  JMP 0x0e4dfb93
/* 0e4dfb66 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4dfb6b */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4dfb6f */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e4dfb73 */  MOV RAX,qword ptr [RAX + 0x48]
/* 0e4dfb77 */  CMP dword ptr [RAX],ECX
/* 0e4dfb79 */  JZ 0x0e4dfb8f
/* 0e4dfb7b */  ADD RAX,0x68
/* 0e4dfb7f */  NOP
/* 0e4dfb80 */  MOV RDX,RAX
/* 0e4dfb83 */  ADD RAX,0x68
/* 0e4dfb87 */  CMP dword ptr [RDX],ECX
/* 0e4dfb89 */  JNZ 0x0e4dfb80
/* 0e4dfb8b */  ADD RAX,-0x68
/* 0e4dfb8f */  OR byte ptr [RAX + 0x12],0x9
/* 0e4dfb93 */  MOVDQU XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4dfb9c */  MOVDQU XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4dfba5 */  MOVDQU XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e4dfbae */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4dfbb7 */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4dfbc0 */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e4dfbc9 */  MOVZX EAX,byte ptr [RSP + 0x1f0]
/* 0e4dfbd1 */  MOV byte ptr [RSP + 0x170],AL
/* 0e4dfbd8 */  LEA RDI,[RSP + 0x70]
/* 0e4dfbdd */  CALL 0x048b0bc0
/* 0e4dfbe2 */  MOVZX EAX,byte ptr [0x0f75bba0]
/* 0e4dfbe9 */  TEST AL,AL
/* 0e4dfbeb */  JZ 0x0e4ee3ef
/* 0e4dfbf1 */  MOV RAX,0x425ed3ca00000001
/* 0e4dfbfb */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4dfc03 */  MOV R15,qword ptr [RSP + 0x140]
/* 0e4dfc0b */  MOVZX EAX,byte ptr [0x0f75bb80]
/* 0e4dfc12 */  TEST AL,AL
/* 0e4dfc14 */  JZ 0x0e4ee419
/* 0e4dfc1a */  LEA R14,[RSP + 0x148]
/* 0e4dfc22 */  LEA RAX,[R15 + 0x18]
/* 0e4dfc26 */  MOV RCX,qword ptr [0x0f75bb00]
/* 0e4dfc2d */  MOV ECX,dword ptr [RCX + 0x4]
/* 0e4dfc30 */  MOV RDX,qword ptr [R15 + 0x18]
/* 0e4dfc34 */  MOV RSI,qword ptr [R15 + 0x20]
/* 0e4dfc38 */  SUB RSI,RDX
/* 0e4dfc3b */  SHR RSI,0x3
/* 0e4dfc3f */  MOV EDI,0xffffffff
/* 0e4dfc44 */  ADD ESI,EDI
/* 0e4dfc46 */  AND ESI,ECX
/* 0e4dfc48 */  LEA RDX,[RDX + RSI*0x8]
/* 0e4dfc4c */  MOV RSI,qword ptr [R15 + 0x30]
/* 0e4dfc50 */  MOV RDX,qword ptr [RDX]
/* 0e4dfc53 */  CMP RDX,-0x1
/* 0e4dfc57 */  JZ 0x0e4dfc79
/* 0e4dfc59 */  LEA RDI,[RDX + RDX*0x2]
/* 0e4dfc5d */  LEA RDX,[RSI + RDI*0x8]
/* 0e4dfc61 */  CMP dword ptr [RSI + RDI*0x8 + 0x8],ECX
/* 0e4dfc65 */  JNZ 0x0e4dfc50
/* 0e4dfc67 */  MOV RCX,qword ptr [R15 + 0x38]
/* 0e4dfc6b */  CMP RDX,RCX
/* 0e4dfc6e */  JNZ 0x0e4dfc85
/* 0e4dfc70 */  LEA RCX,[0xf75bb00]
/* 0e4dfc77 */  JMP 0x0e4dfc89
/* 0e4dfc79 */  MOV RCX,qword ptr [R15 + 0x38]
/* 0e4dfc7d */  MOV RDX,RCX
/* 0e4dfc80 */  CMP RDX,RCX
/* 0e4dfc83 */  JZ 0x0e4dfc70
/* 0e4dfc85 */  MOV RCX,qword ptr [RDX + 0x10]
/* 0e4dfc89 */  MOV qword ptr [RSP + 0x70],RCX
/* 0e4dfc8e */  MOV qword ptr [RSP + 0x78],RAX
/* 0e4dfc93 */  MOV ESI,dword ptr [RSP + 0x16c]
/* 0e4dfc9a */  LEA RDI,[RSP + 0x70]
/* 0e4dfc9f */  CALL 0x0ed621a0
/* 0e4dfca4 */  MOV word ptr [RSP + 0x70],0x1
/* 0e4dfcab */  MOV qword ptr [RSP + 0x78],R14
/* 0e4dfcb0 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e4dfcb7 */  MOV dword ptr [RSP + 0x80],EAX
/* 0e4dfcbe */  PXOR XMM0,XMM0
/* 0e4dfcc2 */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e4dfccb */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e4dfcd4 */  MOV qword ptr [RSP + 0xa8],0x0
/* 0e4dfce0 */  MOV byte ptr [RSP + 0xb0],0xa
/* 0e4dfce8 */  MOV dword ptr [RSP + 0xb1],0x756c6176
/* 0e4dfcf3 */  MOV word ptr [RSP + 0xb5],0x65
/* 0e4dfcfd */  LEA RDI,[RSP + 0xc8]
/* 0e4dfd05 */  MOVDQU xmmword ptr [RSP + 0xc8],XMM0
/* 0e4dfd0e */  MOVDQU xmmword ptr [RSP + 0xd8],XMM0
/* 0e4dfd17 */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e4dfd20 */  MOV dword ptr [RSP + 0xf8],0x3f600000
/* 0e4dfd2b */  MOV ESI,0x8
/* 0e4dfd30 */  CALL 0x048afb10
/* 0e4dfd35 */  PXOR XMM0,XMM0
/* 0e4dfd39 */  MOVDQU xmmword ptr [RSP + 0x120],XMM0
/* 0e4dfd42 */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e4dfd4b */  MOVDQU xmmword ptr [RSP + 0x100],XMM0
/* 0e4dfd54 */  MOV word ptr [RSP + 0x130],0xff00
/* 0e4dfd5e */  MOV byte ptr [RSP + 0x134],0x0
/* 0e4dfd66 */  MOV byte ptr [RSP + 0x138],0x0
/* 0e4dfd6e */  MOV byte ptr [RSP + 0x13c],0x0
/* 0e4dfd76 */  LEA RDI,[0xf5463b0]
/* 0e4dfd7d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4dfd84 */  MOV ESI,0x8
/* 0e4dfd89 */  CALL qword ptr [RAX + 0x10]
/* 0e4dfd8c */  MOV R14,RAX
/* 0e4dfd8f */  TEST RAX,RAX
/* 0e4dfd92 */  JZ 0x0e4eda45
/* 0e4dfd98 */  LEA RAX,[0xf4c4118]
/* 0e4dfd9f */  MOV qword ptr [R14],RAX
/* 0e4dfda2 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4dfdaa */  MOV qword ptr [RSP + 0x88],R14
/* 0e4dfdb2 */  TEST RDI,RDI
/* 0e4dfdb5 */  JZ 0x0e4dfdbd
/* 0e4dfdb7 */  MOV RAX,qword ptr [RDI]
/* 0e4dfdba */  CALL qword ptr [RAX + 0x8]
/* 0e4dfdbd */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4dfdc2 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4dfdc9 */  MOV dword ptr [RSP],EAX
/* 0e4dfdcc */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4dfdd5 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4dfddd */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4dfde6 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4dfdef */  LEA RAX,[0xe64cb80]
/* 0e4dfdf6 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4dfdfb */  MOV qword ptr [RSP + 0x30],R12
/* 0e4dfe00 */  LEA RAX,[0xe64aba0]
/* 0e4dfe07 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4dfe0c */  LEA RAX,[0xe64e7f0]
/* 0e4dfe13 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4dfe18 */  LEA RAX,[0xe64e950]
/* 0e4dfe1f */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4dfe24 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4dfe2c */  PXOR XMM0,XMM0
/* 0e4dfe30 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4dfe36 */  MOV RSI,RSP
/* 0e4dfe39 */  CALL 0x048b05a0
/* 0e4dfe3e */  LEA R14,[RSP + 0x88]
/* 0e4dfe46 */  MOV R15,qword ptr [RSP + 0x60]
/* 0e4dfe4b */  TEST R15,R15
/* 0e4dfe4e */  JZ 0x0e4dfe73
/* 0e4dfe50 */  MOV RAX,-0x1
/* 0e4dfe57 */  XADD.LOCK qword ptr [R15 + 0x8],RAX
/* 0e4dfe5d */  TEST RAX,RAX
/* 0e4dfe60 */  JNZ 0x0e4dfe73
/* 0e4dfe62 */  MOV RAX,qword ptr [R15]
/* 0e4dfe65 */  MOV RDI,R15
/* 0e4dfe68 */  CALL qword ptr [RAX + 0x10]
/* 0e4dfe6b */  MOV RDI,R15
/* 0e4dfe6e */  CALL 0x0412c2d0
/* 0e4dfe73 */  MOV RSI,qword ptr [RSP + 0x78]
/* 0e4dfe78 */  MOV RDI,RSP
/* 0e4dfe7b */  MOV RDX,R14
/* 0e4dfe7e */  CALL 0x0e64e520
/* 0e4dfe83 */  MOV EAX,dword ptr [RSP + 0x70]
/* 0e4dfe87 */  SHL EAX,0x10
/* 0e4dfe8a */  MOV ECX,dword ptr [RSP + 0x1c]
/* 0e4dfe8e */  CMP ECX,0x2
/* 0e4dfe91 */  JZ 0x0e4e03bc
/* 0e4dfe97 */  CMP ECX,0x1
/* 0e4dfe9a */  JZ 0x0e4dfeff
/* 0e4dfe9c */  TEST ECX,ECX
/* 0e4dfe9e */  JNZ 0x0e4dff32
/* 0e4dfea4 */  MOV RCX,qword ptr [RSP + 0x10]
/* 0e4dfea9 */  OR dword ptr [RCX + 0x18],EAX
/* 0e4dfeac */  JMP 0x0e4dff32
/* 0e4dfeb1 */  MOV RAX,qword ptr [RSP + 0x10]
/* 0e4dfeb6 */  MOV RAX,qword ptr [RAX + 0x78]
/* 0e4dfeba */  MOV ECX,dword ptr [RSP + 0x18]
/* 0e4dfebe */  MOV RAX,qword ptr [RAX + 0x60]
/* 0e4dfec2 */  CMP dword ptr [RAX],ECX
/* 0e4dfec4 */  JZ 0x0e4dfedf
/* 0e4dfec6 */  ADD RAX,0x58
/* 0e4dfeca */  NOP word ptr [RAX + RAX*0x1]
/* 0e4dfed0 */  MOV RDX,RAX
/* 0e4dfed3 */  ADD RAX,0x58
/* 0e4dfed7 */  CMP dword ptr [RDX],ECX
/* 0e4dfed9 */  JNZ 0x0e4dfed0
/* 0e4dfedb */  ADD RAX,-0x58
/* 0e4dfedf */  MOV RCX,qword ptr [RSP + 0x8]
/* 0e4dfee4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4dfee8 */  JZ 0x0e4dfb8f
/* 0e4dfeee */  NOP
/* 0e4dfef0 */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4dfef4 */  CMP qword ptr [RAX + 0x30],RCX
/* 0e4dfef8 */  JNZ 0x0e4dfef0
/* 0e4dfefa */  JMP 0x0e4dfb8f
/* 0e4dfeff */  MOV RCX,qword ptr [RSP + 0x10]
/* 0e4dff04 */  MOV RCX,qword ptr [RCX + 0x78]
/* 0e4dff08 */  MOV EDX,dword ptr [RSP + 0x18]
/* 0e4dff0c */  MOV RCX,qword ptr [RCX + 0x48]
/* 0e4dff10 */  CMP dword ptr [RCX],EDX
/* 0e4dff12 */  JZ 0x0e4dff2f
/* 0e4dff14 */  ADD RCX,0x68
/* 0e4dff18 */  NOP dword ptr [RAX + RAX*0x1]
/* 0e4dff20 */  MOV RSI,RCX
/* 0e4dff23 */  ADD RCX,0x68
/* 0e4dff27 */  CMP dword ptr [RSI],EDX
/* 0e4dff29 */  JNZ 0x0e4dff20
/* 0e4dff2b */  ADD RCX,-0x68
/* 0e4dff2f */  OR dword ptr [RCX + 0x10],EAX
/* 0e4dff32 */  MOV RDI,R14
/* 0e4dff35 */  CALL 0x048b0bc0
/* 0e4dff3a */  MOV RBX,qword ptr [RSP + 0x68]
/* 0e4dff3f */  MOV RDI,RBX
/* 0e4dff42 */  CALL 0x0e50ba60
/* 0e4dff47 */  MOVZX EAX,byte ptr [0x0f75ac00]
/* 0e4dff4e */  TEST AL,AL
/* 0e4dff50 */  JZ 0x0e4edf05
/* 0e4dff56 */  MOV RAX,qword ptr [0x0f75ab80]
/* 0e4dff5d */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4dff60 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4dff64 */  MOV RDX,qword ptr [RBX + 0x20]
/* 0e4dff68 */  SUB RDX,RCX
/* 0e4dff6b */  SHR RDX,0x3
/* 0e4dff6f */  MOV ESI,0xffffffff
/* 0e4dff74 */  ADD EDX,ESI
/* 0e4dff76 */  AND EDX,EAX
/* 0e4dff78 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4dff7c */  MOV RDX,qword ptr [RBX + 0x30]
/* 0e4dff80 */  MOV RCX,qword ptr [RCX]
/* 0e4dff83 */  CMP RCX,-0x1
/* 0e4dff87 */  JZ 0x0e4dffb7
/* 0e4dff89 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4dff8d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4dff91 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4dff95 */  JNZ 0x0e4dff80
/* 0e4dff97 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4dff9c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4dffa0 */  CMP RCX,RAX
/* 0e4dffa3 */  JNZ 0x0e4dffc8
/* 0e4dffa5 */  LEA RAX,[0xf75ab80]
/* 0e4dffac */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4dffb3 */  JZ 0x0e4dffd5
/* 0e4dffb5 */  JMP 0x0e4e0019
/* 0e4dffb7 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4dffbc */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4dffc0 */  MOV RCX,RAX
/* 0e4dffc3 */  CMP RCX,RAX
/* 0e4dffc6 */  JZ 0x0e4dffa5
/* 0e4dffc8 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4dffcc */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4dffd3 */  JNZ 0x0e4e0019
/* 0e4dffd5 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4dffd9 */  TEST RAX,RAX
/* 0e4dffdc */  JZ 0x0e4e0019
/* 0e4dffde */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4dffe2 */  LEA RDX,[RAX + 0x9]
/* 0e4dffe6 */  MOV ECX,ESI
/* 0e4dffe8 */  SHR ECX,0x1
/* 0e4dffea */  TEST SIL,0x1
/* 0e4dffee */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4dfff3 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4dfff8 */  LEA RDI,[RSP + 0x180]
/* 0e4e0000 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e0005 */  CALL 0x0e623fb0
/* 0e4e000a */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e0012 */  JZ 0x0e4e0045
/* 0e4e0014 */  JMP 0x0e4e0777
/* 0e4e0019 */  LEA RDX,[0x12b8796]
/* 0e4e0020 */  LEA RDI,[RSP + 0x180]
/* 0e4e0028 */  MOV ECX,0xf
/* 0e4e002d */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e0032 */  CALL 0x0e623fb0
/* 0e4e0037 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e003f */  JNZ 0x0e4e0777
/* 0e4e0045 */  MOV R13,qword ptr [RSP + 0x180]
/* 0e4e004d */  MOVUPS XMM0,xmmword ptr [RSP + 0x188]
/* 0e4e0055 */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0e4e005d */  MOVDQU XMM0,xmmword ptr [RSP + 0x198]
/* 0e4e0066 */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4e006f */  MOV EBP,dword ptr [RSP + 0x1a8]
/* 0e4e0076 */  MOV EBX,dword ptr [RSP + 0x1ac]
/* 0e4e007d */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0e4e0085 */  MOV qword ptr [RSP + 0x200],RAX
/* 0e4e008d */  MOVZX EAX,byte ptr [0x0f75ac00]
/* 0e4e0094 */  TEST AL,AL
/* 0e4e0096 */  JZ 0x0e4ee3ab
/* 0e4e009c */  LEA R15,[R13 + 0x18]
/* 0e4e00a0 */  MOV RAX,qword ptr [0x0f75ab80]
/* 0e4e00a7 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e00aa */  MOV RCX,qword ptr [R13 + 0x18]
/* 0e4e00ae */  MOV RDX,qword ptr [R13 + 0x20]
/* 0e4e00b2 */  SUB RDX,RCX
/* 0e4e00b5 */  SHR RDX,0x3
/* 0e4e00b9 */  MOV ESI,0xffffffff
/* 0e4e00be */  ADD EDX,ESI
/* 0e4e00c0 */  AND EDX,EAX
/* 0e4e00c2 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4e00c6 */  MOV RDX,qword ptr [R13 + 0x30]
/* 0e4e00ca */  NOP word ptr [RAX + RAX*0x1]
/* 0e4e00d0 */  MOV RCX,qword ptr [RCX]
/* 0e4e00d3 */  CMP RCX,-0x1
/* 0e4e00d7 */  JZ 0x0e4e0109
/* 0e4e00d9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4e00dd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4e00e1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4e00e5 */  JNZ 0x0e4e00d0
/* 0e4e00e7 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4e00eb */  CMP RCX,RAX
/* 0e4e00ee */  JNZ 0x0e4e0115
/* 0e4e00f0 */  LEA RSI,[0xf75ab80]
/* 0e4e00f7 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4e00fb */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4e00ff */  CMP RAX,RCX
/* 0e4e0102 */  JNZ 0x0e4e012a
/* 0e4e0104 */  JMP 0x0e4e01d5
/* 0e4e0109 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4e010d */  MOV RCX,RAX
/* 0e4e0110 */  CMP RCX,RAX
/* 0e4e0113 */  JZ 0x0e4e00f0
/* 0e4e0115 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4e0119 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4e011d */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4e0121 */  CMP RAX,RCX
/* 0e4e0124 */  JZ 0x0e4e01d5
/* 0e4e012a */  MOV RDX,0x3a6c61657265635b
/* 0e4e0134 */  MOVQ XMM0,RDX
/* 0e4e0139 */  MOV RDX,0x746e656d75636f64
/* 0e4e0143 */  MOVQ XMM1,RDX
/* 0e4e0148 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4e014c */  MOV RDX,0x7461746e656d7563
/* 0e4e0156 */  MOVQ XMM1,RDX
/* 0e4e015b */  MOV RDX,0x5d6761745f6e6f69
/* 0e4e0165 */  MOVQ XMM2,RDX
/* 0e4e016a */  PUNPCKLQDQ XMM1,XMM2
/* 0e4e016e */  JMP 0x0e4e019e
/* 0e4e0170 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4e0174 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4e0178 */  PCMPEQB XMM2,XMM0
/* 0e4e017c */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4e0181 */  PCMPEQB XMM3,XMM1
/* 0e4e0185 */  PAND XMM3,XMM2
/* 0e4e0189 */  PMOVMSKB EDX,XMM3
/* 0e4e018d */  CMP EDX,0xffff
/* 0e4e0193 */  JZ 0x0e4e01d5
/* 0e4e0195 */  ADD RAX,0x38
/* 0e4e0199 */  CMP RAX,RCX
/* 0e4e019c */  JZ 0x0e4e01d5
/* 0e4e019e */  MOVZX EDX,byte ptr [RAX]
/* 0e4e01a1 */  TEST DL,0x1
/* 0e4e01a4 */  JZ 0x0e4e01c0
/* 0e4e01a6 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4e01aa */  CMP RDI,0x1a
/* 0e4e01ae */  JNZ 0x0e4e0195
/* 0e4e01b0 */  JMP 0x0e4e01ca
/* 0e4e01c0 */  MOV EDI,EDX
/* 0e4e01c2 */  SHR EDI,0x1
/* 0e4e01c4 */  CMP RDI,0x1a
/* 0e4e01c8 */  JNZ 0x0e4e0195
/* 0e4e01ca */  TEST DL,0x1
/* 0e4e01cd */  JNZ 0x0e4e0170
/* 0e4e01cf */  LEA RDX,[RAX + 0x1]
/* 0e4e01d3 */  JMP 0x0e4e0174
/* 0e4e01d5 */  CMP RAX,RCX
/* 0e4e01d8 */  JZ 0x0e4e01fe
/* 0e4e01da */  MOV R12D,EBX
/* 0e4e01dd */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4e01e0 */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4e01e7 */  TEST AL,AL
/* 0e4e01e9 */  JZ 0x0e4ef3d7
/* 0e4e01ef */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4e01f5 */  MOV EBX,R12D
/* 0e4e01f8 */  JNZ 0x0e4e0493
/* 0e4e01fe */  TEST EBP,EBP
/* 0e4e0200 */  JZ 0x0e4e025c
/* 0e4e0202 */  TEST RSI,RSI
/* 0e4e0205 */  JNZ 0x0e4e0212
/* 0e4e0207 */  MOV RDI,R15
/* 0e4e020a */  CALL 0x048aead0
/* 0e4e020f */  MOV RSI,RAX
/* 0e4e0212 */  MOV RDI,R15
/* 0e4e0215 */  MOV EDX,EBX
/* 0e4e0217 */  MOV ECX,0x1
/* 0e4e021c */  CALL 0x048b0c90
/* 0e4e0221 */  TEST RAX,RAX
/* 0e4e0224 */  JNZ 0x0e4e0244
/* 0e4e0226 */  PXOR XMM0,XMM0
/* 0e4e022a */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e0230 */  LEA RDI,[RSP + 0x70]
/* 0e4e0235 */  CALL 0x048b0d20
/* 0e4e023a */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4e023f */  TEST RAX,RAX
/* 0e4e0242 */  JZ 0x0e4e0279
/* 0e4e0244 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4e024b */  JNZ 0x0e4e0279
/* 0e4e024d */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4e0251 */  TEST R14,R14
/* 0e4e0254 */  JZ 0x0e4e0279
/* 0e4e0256 */  ADD R14,0x40
/* 0e4e025a */  JMP 0x0e4e027c
/* 0e4e025c */  TEST RSI,RSI
/* 0e4e025f */  JZ 0x0e4e0279
/* 0e4e0261 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4e0268 */  JNZ 0x0e4e0279
/* 0e4e026a */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4e026e */  TEST R14,R14
/* 0e4e0271 */  JZ 0x0e4e0279
/* 0e4e0273 */  ADD R14,0x38
/* 0e4e0277 */  JMP 0x0e4e027c
/* 0e4e0279 */  XOR R14D,R14D
/* 0e4e027c */  LEA RAX,[0x488e0b0]
/* 0e4e0283 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4e0288 */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4e0290 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4e0299 */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4e029e */  MOV qword ptr [RSP],0x0
/* 0e4e02a6 */  PXOR XMM0,XMM0
/* 0e4e02aa */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e02b0 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4e02b8 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4e02c4 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4e02cf */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4e02d7 */  LEA RDI,[0xf5463b0]
/* 0e4e02de */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e02e5 */  MOV ESI,0x20
/* 0e4e02ea */  CALL qword ptr [RAX + 0x10]
/* 0e4e02ed */  MOV R15,RAX
/* 0e4e02f0 */  TEST RAX,RAX
/* 0e4e02f3 */  JZ 0x0e4edccb
/* 0e4e02f9 */  MOV qword ptr [RSP + 0x150],R15
/* 0e4e0301 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4e030d */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4e0319 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4e0320 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4e0325 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4e032d */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4e0332 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4e0337 */  LEA RSI,[RSP + 0x140]
/* 0e4e033f */  MOV RDI,R14
/* 0e4e0342 */  CALL 0x048b5060
/* 0e4e0347 */  MOV R15,RAX
/* 0e4e034a */  LEA R14,[RSP + 0x78]
/* 0e4e034f */  ADD RAX,0x20
/* 0e4e0353 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4e035b */  LEA RCX,[RSP + 0x70]
/* 0e4e0360 */  CMP RAX,RCX
/* 0e4e0363 */  JZ 0x0e4e03a7
/* 0e4e0365 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4e0369 */  TEST RAX,RAX
/* 0e4e036c */  JZ 0x0e4e0421
/* 0e4e0372 */  MOV R12,R15
/* 0e4e0375 */  ADD R12,0x28
/* 0e4e0379 */  MOV RDI,R12
/* 0e4e037c */  CALL RAX
/* 0e4e037e */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4e0386 */  TEST EAX,EAX
/* 0e4e0388 */  JZ 0x0e4e0421
/* 0e4e038e */  CMP EAX,0x2
/* 0e4e0391 */  JNZ 0x0e4e040f
/* 0e4e0393 */  MOV EDI,0x5
/* 0e4e0398 */  MOV RSI,R14
/* 0e4e039b */  MOV RDX,R12
/* 0e4e039e */  CALL qword ptr [RSP + 0x88]
/* 0e4e03a5 */  JMP 0x0e4e0421
/* 0e4e03a7 */  XOR EAX,EAX
/* 0e4e03a9 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e03b1 */  JNZ 0x0e4e0459
/* 0e4e03b7 */  JMP 0x0e4e047a
/* 0e4e03bc */  MOV RCX,qword ptr [RSP + 0x10]
/* 0e4e03c1 */  MOV RCX,qword ptr [RCX + 0x78]
/* 0e4e03c5 */  MOV EDX,dword ptr [RSP + 0x18]
/* 0e4e03c9 */  MOV RCX,qword ptr [RCX + 0x60]
/* 0e4e03cd */  CMP dword ptr [RCX],EDX
/* 0e4e03cf */  JZ 0x0e4e03ef
/* 0e4e03d1 */  ADD RCX,0x58
/* 0e4e03d5 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4e03e0 */  MOV RSI,RCX
/* 0e4e03e3 */  ADD RCX,0x58
/* 0e4e03e7 */  CMP dword ptr [RSI],EDX
/* 0e4e03e9 */  JNZ 0x0e4e03e0
/* 0e4e03eb */  ADD RCX,-0x58
/* 0e4e03ef */  MOV RDX,qword ptr [RSP + 0x8]
/* 0e4e03f4 */  CMP qword ptr [RCX + 0x30],RDX
/* 0e4e03f8 */  JZ 0x0e4dff2f
/* 0e4e03fe */  NOP
/* 0e4e0400 */  MOV RCX,qword ptr [RCX + 0x38]
/* 0e4e0404 */  CMP qword ptr [RCX + 0x30],RDX
/* 0e4e0408 */  JNZ 0x0e4e0400
/* 0e4e040a */  JMP 0x0e4dff2f
/* 0e4e040f */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4e0414 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4e041d */  MOV qword ptr [R12],RAX
/* 0e4e0421 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e0429 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4e0432 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4e0438 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4e043f */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4e0443 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4e044b */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4e044f */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e0457 */  JZ 0x0e4e047a
/* 0e4e0459 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4e0461 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4e0469 */  AND RSI,-0x2
/* 0e4e046d */  CALL 0x0412a280
/* 0e4e0472 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e047a */  TEST RAX,RAX
/* 0e4e047d */  JZ 0x0e4e0484
/* 0e4e047f */  MOV RDI,R14
/* 0e4e0482 */  CALL RAX
/* 0e4e0484 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4e0489 */  TEST RAX,RAX
/* 0e4e048c */  JZ 0x0e4e0493
/* 0e4e048e */  MOV RDI,RSP
/* 0e4e0491 */  CALL RAX
/* 0e4e0493 */  MOV qword ptr [RSP + 0x1c0],R13
/* 0e4e049b */  MOVAPS XMM0,xmmword ptr [RSP + 0x210]
/* 0e4e04a3 */  MOVAPS XMM1,xmmword ptr [RSP + 0x220]
/* 0e4e04ab */  MOVUPS xmmword ptr [RSP + 0x1c8],XMM0
/* 0e4e04b3 */  MOVUPS xmmword ptr [RSP + 0x1d8],XMM1
/* 0e4e04bb */  MOV dword ptr [RSP + 0x1e8],EBP
/* 0e4e04c2 */  MOV dword ptr [RSP + 0x1ec],EBX
/* 0e4e04c9 */  MOV RAX,qword ptr [RSP + 0x200]
/* 0e4e04d1 */  MOV qword ptr [RSP + 0x1f0],RAX
/* 0e4e04d9 */  LEA RDX,[0x14c8537]
/* 0e4e04e0 */  LEA RDI,[RSP + 0x70]
/* 0e4e04e5 */  LEA RSI,[RSP + 0x1c0]
/* 0e4e04ed */  MOV ECX,0x5
/* 0e4e04f2 */  CALL 0x0e624b10
/* 0e4e04f7 */  LEA RDI,[0xf5463b0]
/* 0e4e04fe */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e0505 */  MOV ESI,0x8
/* 0e4e050a */  CALL qword ptr [RAX + 0x10]
/* 0e4e050d */  MOV R14,RAX
/* 0e4e0510 */  TEST RAX,RAX
/* 0e4e0513 */  JZ 0x0e4eda56
/* 0e4e0519 */  LEA RAX,[0xef44b00]
/* 0e4e0520 */  MOV qword ptr [R14],RAX
/* 0e4e0523 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e052b */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e0533 */  TEST RDI,RDI
/* 0e4e0536 */  JZ 0x0e4e053e
/* 0e4e0538 */  MOV RAX,qword ptr [RDI]
/* 0e4e053b */  CALL qword ptr [RAX + 0x8]
/* 0e4e053e */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e0543 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e054a */  MOV dword ptr [RSP],EAX
/* 0e4e054d */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e0556 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e055e */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e0567 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e0570 */  LEA RAX,[0x48b3f30]
/* 0e4e0577 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e057c */  LEA R15,[0x48b06d0]
/* 0e4e0583 */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e0588 */  LEA RAX,[0x48b2190]
/* 0e4e058f */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e0594 */  LEA RAX,[0xe625090]
/* 0e4e059b */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e05a0 */  LEA RAX,[0xe625250]
/* 0e4e05a7 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e05ac */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e05b4 */  XORPS XMM0,XMM0
/* 0e4e05b7 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e4e05bc */  MOV RSI,RSP
/* 0e4e05bf */  CALL 0x048b05a0
/* 0e4e05c4 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e05c9 */  TEST R14,R14
/* 0e4e05cc */  JZ 0x0e4e05f1
/* 0e4e05ce */  MOV RAX,-0x1
/* 0e4e05d5 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e05db */  TEST RAX,RAX
/* 0e4e05de */  JNZ 0x0e4e05f1
/* 0e4e05e0 */  MOV RAX,qword ptr [R14]
/* 0e4e05e3 */  MOV RDI,R14
/* 0e4e05e6 */  CALL qword ptr [RAX + 0x10]
/* 0e4e05e9 */  MOV RDI,R14
/* 0e4e05ec */  CALL 0x0412c2d0
/* 0e4e05f1 */  LEA RDI,[RSP + 0x70]
/* 0e4e05f6 */  CALL 0x0e624d90
/* 0e4e05fb */  LEA RDI,[RSP + 0x88]
/* 0e4e0603 */  MOVZX EAX,byte ptr [RSP + 0x1f0]
/* 0e4e060b */  MOV byte ptr [RSP + 0x170],AL
/* 0e4e0612 */  MOVDQU XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4e061b */  MOVDQU XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4e0624 */  MOVDQU XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e4e062d */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e4e0636 */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4e063f */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4e0648 */  CALL 0x048b0bc0
/* 0e4e064d */  LEA RDX,[0x142cb75]
/* 0e4e0654 */  LEA RDI,[RSP + 0x70]
/* 0e4e0659 */  LEA RSI,[RSP + 0x140]
/* 0e4e0661 */  MOV ECX,0x6
/* 0e4e0666 */  CALL 0x0e624b10
/* 0e4e066b */  LEA RDI,[0xf5463b0]
/* 0e4e0672 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e0679 */  MOV ESI,0x8
/* 0e4e067e */  CALL qword ptr [RAX + 0x10]
/* 0e4e0681 */  MOV R14,RAX
/* 0e4e0684 */  TEST RAX,RAX
/* 0e4e0687 */  JZ 0x0e4eda67
/* 0e4e068d */  LEA RAX,[0xf4c35f8]
/* 0e4e0694 */  MOV qword ptr [R14],RAX
/* 0e4e0697 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e069f */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e06a7 */  TEST RDI,RDI
/* 0e4e06aa */  JZ 0x0e4e06b2
/* 0e4e06ac */  MOV RAX,qword ptr [RDI]
/* 0e4e06af */  CALL qword ptr [RAX + 0x8]
/* 0e4e06b2 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e06b7 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e06be */  MOV dword ptr [RSP],EAX
/* 0e4e06c1 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e06ca */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e06d2 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e06db */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e06e4 */  LEA RAX,[0xe625650]
/* 0e4e06eb */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e06f0 */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e06f5 */  LEA RAX,[0xe6214a0]
/* 0e4e06fc */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e0701 */  LEA RAX,[0xe625710]
/* 0e4e0708 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e070d */  LEA RAX,[0xe6258e0]
/* 0e4e0714 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e0719 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e0721 */  PXOR XMM0,XMM0
/* 0e4e0725 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4e072b */  MOV RSI,RSP
/* 0e4e072e */  CALL 0x048b05a0
/* 0e4e0733 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e0738 */  TEST R14,R14
/* 0e4e073b */  JZ 0x0e4e0760
/* 0e4e073d */  MOV RAX,-0x1
/* 0e4e0744 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e074a */  TEST RAX,RAX
/* 0e4e074d */  JNZ 0x0e4e0760
/* 0e4e074f */  MOV RAX,qword ptr [R14]
/* 0e4e0752 */  MOV RDI,R14
/* 0e4e0755 */  CALL qword ptr [RAX + 0x10]
/* 0e4e0758 */  MOV RDI,R14
/* 0e4e075b */  CALL 0x0412c2d0
/* 0e4e0760 */  LEA RDI,[RSP + 0x70]
/* 0e4e0765 */  CALL 0x0e624d90
/* 0e4e076a */  LEA RDI,[RSP + 0x88]
/* 0e4e0772 */  CALL 0x048b0bc0
/* 0e4e0777 */  MOV RBX,qword ptr [RSP + 0x68]
/* 0e4e077c */  MOV RDI,RBX
/* 0e4e077f */  CALL 0x0e50ba60
/* 0e4e0784 */  MOV byte ptr [RSP + 0x250],0x24
/* 0e4e078c */  MOVDQU XMM0,xmmword ptr [0x01250bf9]
/* 0e4e0794 */  MOVDQU xmmword ptr [RSP + 0x251],XMM0
/* 0e4e079d */  MOV word ptr [RSP + 0x261],0x6c6f
/* 0e4e07a7 */  MOV byte ptr [RSP + 0x263],0x0
/* 0e4e07af */  MOVZX EAX,byte ptr [0x0f75acb8]
/* 0e4e07b6 */  TEST AL,AL
/* 0e4e07b8 */  JZ 0x0e4edf49
/* 0e4e07be */  LEA RDX,[RSP + 0x251]
/* 0e4e07c6 */  MOV RAX,qword ptr [0x0f75ac38]
/* 0e4e07cd */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e07d0 */  MOV RCX,qword ptr [RBX + 0x18]
/* 0e4e07d4 */  MOV RSI,qword ptr [RBX + 0x20]
/* 0e4e07d8 */  SUB RSI,RCX
/* 0e4e07db */  SHR RSI,0x3
/* 0e4e07df */  MOV EDI,0xffffffff
/* 0e4e07e4 */  ADD ESI,EDI
/* 0e4e07e6 */  AND ESI,EAX
/* 0e4e07e8 */  LEA RCX,[RCX + RSI*0x8]
/* 0e4e07ec */  MOV RSI,qword ptr [RBX + 0x30]
/* 0e4e07f0 */  MOV RCX,qword ptr [RCX]
/* 0e4e07f3 */  CMP RCX,-0x1
/* 0e4e07f7 */  JZ 0x0e4e0827
/* 0e4e07f9 */  LEA RDI,[RCX + RCX*0x2]
/* 0e4e07fd */  LEA RCX,[RSI + RDI*0x8]
/* 0e4e0801 */  CMP dword ptr [RSI + RDI*0x8 + 0x8],EAX
/* 0e4e0805 */  JNZ 0x0e4e07f0
/* 0e4e0807 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e080c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e0810 */  CMP RCX,RAX
/* 0e4e0813 */  JNZ 0x0e4e0838
/* 0e4e0815 */  LEA RAX,[0xf75ac38]
/* 0e4e081c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e0823 */  JZ 0x0e4e0845
/* 0e4e0825 */  JMP 0x0e4e0889
/* 0e4e0827 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e082c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e0830 */  MOV RCX,RAX
/* 0e4e0833 */  CMP RCX,RAX
/* 0e4e0836 */  JZ 0x0e4e0815
/* 0e4e0838 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4e083c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e0843 */  JNZ 0x0e4e0889
/* 0e4e0845 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4e0849 */  TEST RAX,RAX
/* 0e4e084c */  JZ 0x0e4e0889
/* 0e4e084e */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4e0852 */  LEA RDX,[RAX + 0x9]
/* 0e4e0856 */  MOV ECX,ESI
/* 0e4e0858 */  SHR ECX,0x1
/* 0e4e085a */  TEST SIL,0x1
/* 0e4e085e */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4e0863 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4e0868 */  LEA RDI,[RSP + 0x180]
/* 0e4e0870 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e0875 */  CALL 0x0e6269a0
/* 0e4e087a */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e0882 */  JZ 0x0e4e08ae
/* 0e4e0884 */  JMP 0x0e4e0f46
/* 0e4e0889 */  LEA RDI,[RSP + 0x180]
/* 0e4e0891 */  MOV ECX,0x12
/* 0e4e0896 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e089b */  CALL 0x0e6269a0
/* 0e4e08a0 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e08a8 */  JNZ 0x0e4e0f46
/* 0e4e08ae */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4e08b6 */  MOVZX EAX,byte ptr [0x0f75acb8]
/* 0e4e08bd */  TEST AL,AL
/* 0e4e08bf */  JZ 0x0e4ee45d
/* 0e4e08c5 */  LEA R15,[R14 + 0x18]
/* 0e4e08c9 */  MOV RAX,qword ptr [0x0f75ac38]
/* 0e4e08d0 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e08d3 */  MOV RCX,qword ptr [R14 + 0x18]
/* 0e4e08d7 */  MOV RDX,qword ptr [R14 + 0x20]
/* 0e4e08db */  SUB RDX,RCX
/* 0e4e08de */  SHR RDX,0x3
/* 0e4e08e2 */  MOV ESI,0xffffffff
/* 0e4e08e7 */  ADD EDX,ESI
/* 0e4e08e9 */  AND EDX,EAX
/* 0e4e08eb */  LEA RCX,[RCX + RDX*0x8]
/* 0e4e08ef */  MOV RDX,qword ptr [R14 + 0x30]
/* 0e4e08f3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4e0900 */  MOV RCX,qword ptr [RCX]
/* 0e4e0903 */  CMP RCX,-0x1
/* 0e4e0907 */  JZ 0x0e4e0929
/* 0e4e0909 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4e090d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4e0911 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4e0915 */  JNZ 0x0e4e0900
/* 0e4e0917 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4e091b */  CMP RCX,RAX
/* 0e4e091e */  JNZ 0x0e4e0935
/* 0e4e0920 */  LEA RSI,[0xf75ac38]
/* 0e4e0927 */  JMP 0x0e4e0939
/* 0e4e0929 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4e092d */  MOV RCX,RAX
/* 0e4e0930 */  CMP RCX,RAX
/* 0e4e0933 */  JZ 0x0e4e0920
/* 0e4e0935 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4e0939 */  MOV RCX,qword ptr [RSP + 0x180]
/* 0e4e0941 */  MOV RAX,qword ptr [RCX + 0x50]
/* 0e4e0945 */  MOV RCX,qword ptr [RCX + 0x58]
/* 0e4e0949 */  CMP RAX,RCX
/* 0e4e094c */  JZ 0x0e4e0a05
/* 0e4e0952 */  MOV RDX,0x3a6c61657265635b
/* 0e4e095c */  MOVQ XMM0,RDX
/* 0e4e0961 */  MOV RDX,0x746e656d75636f64
/* 0e4e096b */  MOVQ XMM1,RDX
/* 0e4e0970 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4e0974 */  MOV RDX,0x7461746e656d7563
/* 0e4e097e */  MOVQ XMM1,RDX
/* 0e4e0983 */  MOV RDX,0x5d6761745f6e6f69
/* 0e4e098d */  MOVQ XMM2,RDX
/* 0e4e0992 */  PUNPCKLQDQ XMM1,XMM2
/* 0e4e0996 */  JMP 0x0e4e09ce
/* 0e4e09a0 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4e09a4 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4e09a8 */  PCMPEQB XMM2,XMM0
/* 0e4e09ac */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4e09b1 */  PCMPEQB XMM3,XMM1
/* 0e4e09b5 */  PAND XMM3,XMM2
/* 0e4e09b9 */  PMOVMSKB EDX,XMM3
/* 0e4e09bd */  CMP EDX,0xffff
/* 0e4e09c3 */  JZ 0x0e4e0a05
/* 0e4e09c5 */  ADD RAX,0x38
/* 0e4e09c9 */  CMP RAX,RCX
/* 0e4e09cc */  JZ 0x0e4e0a05
/* 0e4e09ce */  MOVZX EDX,byte ptr [RAX]
/* 0e4e09d1 */  TEST DL,0x1
/* 0e4e09d4 */  JZ 0x0e4e09f0
/* 0e4e09d6 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4e09da */  CMP RDI,0x1a
/* 0e4e09de */  JNZ 0x0e4e09c5
/* 0e4e09e0 */  JMP 0x0e4e09fa
/* 0e4e09f0 */  MOV EDI,EDX
/* 0e4e09f2 */  SHR EDI,0x1
/* 0e4e09f4 */  CMP RDI,0x1a
/* 0e4e09f8 */  JNZ 0x0e4e09c5
/* 0e4e09fa */  TEST DL,0x1
/* 0e4e09fd */  JNZ 0x0e4e09a0
/* 0e4e09ff */  LEA RDX,[RAX + 0x1]
/* 0e4e0a03 */  JMP 0x0e4e09a4
/* 0e4e0a05 */  CMP RAX,RCX
/* 0e4e0a08 */  JZ 0x0e4e0a28
/* 0e4e0a0a */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4e0a0d */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4e0a14 */  TEST AL,AL
/* 0e4e0a16 */  JZ 0x0e4ef411
/* 0e4e0a1c */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4e0a22 */  JNZ 0x0e4e0c68
/* 0e4e0a28 */  CMP dword ptr [RSP + 0x1a8],0x0
/* 0e4e0a30 */  JZ 0x0e4e0a93
/* 0e4e0a32 */  MOV EBP,dword ptr [RSP + 0x1ac]
/* 0e4e0a39 */  TEST RSI,RSI
/* 0e4e0a3c */  JNZ 0x0e4e0a49
/* 0e4e0a3e */  MOV RDI,R15
/* 0e4e0a41 */  CALL 0x048aead0
/* 0e4e0a46 */  MOV RSI,RAX
/* 0e4e0a49 */  MOV RDI,R15
/* 0e4e0a4c */  MOV EDX,EBP
/* 0e4e0a4e */  MOV ECX,0x1
/* 0e4e0a53 */  CALL 0x048b0c90
/* 0e4e0a58 */  TEST RAX,RAX
/* 0e4e0a5b */  JNZ 0x0e4e0a7b
/* 0e4e0a5d */  PXOR XMM0,XMM0
/* 0e4e0a61 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e0a67 */  LEA RDI,[RSP + 0x70]
/* 0e4e0a6c */  CALL 0x048b0d20
/* 0e4e0a71 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4e0a76 */  TEST RAX,RAX
/* 0e4e0a79 */  JZ 0x0e4e0ab0
/* 0e4e0a7b */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4e0a82 */  JNZ 0x0e4e0ab0
/* 0e4e0a84 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4e0a88 */  TEST R14,R14
/* 0e4e0a8b */  JZ 0x0e4e0ab0
/* 0e4e0a8d */  ADD R14,0x40
/* 0e4e0a91 */  JMP 0x0e4e0ab3
/* 0e4e0a93 */  TEST RSI,RSI
/* 0e4e0a96 */  JZ 0x0e4e0ab0
/* 0e4e0a98 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4e0a9f */  JNZ 0x0e4e0ab0
/* 0e4e0aa1 */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4e0aa5 */  TEST R14,R14
/* 0e4e0aa8 */  JZ 0x0e4e0ab0
/* 0e4e0aaa */  ADD R14,0x38
/* 0e4e0aae */  JMP 0x0e4e0ab3
/* 0e4e0ab0 */  XOR R14D,R14D
/* 0e4e0ab3 */  LEA RAX,[0x488e0b0]
/* 0e4e0aba */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4e0abf */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4e0ac7 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4e0ad0 */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4e0ad5 */  MOV qword ptr [RSP],0x0
/* 0e4e0add */  PXOR XMM0,XMM0
/* 0e4e0ae1 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e0ae7 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4e0aef */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4e0afb */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4e0b06 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4e0b0e */  LEA RDI,[0xf5463b0]
/* 0e4e0b15 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e0b1c */  MOV ESI,0x20
/* 0e4e0b21 */  CALL qword ptr [RAX + 0x10]
/* 0e4e0b24 */  MOV R15,RAX
/* 0e4e0b27 */  TEST RAX,RAX
/* 0e4e0b2a */  JZ 0x0e4edcdc
/* 0e4e0b30 */  MOV qword ptr [RSP + 0x150],R15
/* 0e4e0b38 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4e0b44 */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4e0b50 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4e0b57 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4e0b5c */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4e0b64 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4e0b69 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4e0b6e */  LEA RSI,[RSP + 0x140]
/* 0e4e0b76 */  MOV RDI,R14
/* 0e4e0b79 */  CALL 0x048b5060
/* 0e4e0b7e */  MOV R15,RAX
/* 0e4e0b81 */  LEA R14,[RSP + 0x78]
/* 0e4e0b86 */  ADD RAX,0x20
/* 0e4e0b8a */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4e0b92 */  LEA RCX,[RSP + 0x70]
/* 0e4e0b97 */  CMP RAX,RCX
/* 0e4e0b9a */  JZ 0x0e4e0bd6
/* 0e4e0b9c */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4e0ba0 */  TEST RAX,RAX
/* 0e4e0ba3 */  JZ 0x0e4e0bf6
/* 0e4e0ba5 */  MOV R12,R15
/* 0e4e0ba8 */  ADD R12,0x28
/* 0e4e0bac */  MOV RDI,R12
/* 0e4e0baf */  CALL RAX
/* 0e4e0bb1 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4e0bb9 */  TEST EAX,EAX
/* 0e4e0bbb */  JZ 0x0e4e0bf6
/* 0e4e0bbd */  CMP EAX,0x2
/* 0e4e0bc0 */  JNZ 0x0e4e0be4
/* 0e4e0bc2 */  MOV EDI,0x5
/* 0e4e0bc7 */  MOV RSI,R14
/* 0e4e0bca */  MOV RDX,R12
/* 0e4e0bcd */  CALL qword ptr [RSP + 0x88]
/* 0e4e0bd4 */  JMP 0x0e4e0bf6
/* 0e4e0bd6 */  XOR EAX,EAX
/* 0e4e0bd8 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e0be0 */  JNZ 0x0e4e0c2e
/* 0e4e0be2 */  JMP 0x0e4e0c4f
/* 0e4e0be4 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4e0be9 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4e0bf2 */  MOV qword ptr [R12],RAX
/* 0e4e0bf6 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e0bfe */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4e0c07 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4e0c0d */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4e0c14 */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4e0c18 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4e0c20 */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4e0c24 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e0c2c */  JZ 0x0e4e0c4f
/* 0e4e0c2e */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4e0c36 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4e0c3e */  AND RSI,-0x2
/* 0e4e0c42 */  CALL 0x0412a280
/* 0e4e0c47 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e0c4f */  TEST RAX,RAX
/* 0e4e0c52 */  JZ 0x0e4e0c59
/* 0e4e0c54 */  MOV RDI,R14
/* 0e4e0c57 */  CALL RAX
/* 0e4e0c59 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4e0c5e */  TEST RAX,RAX
/* 0e4e0c61 */  JZ 0x0e4e0c68
/* 0e4e0c63 */  MOV RDI,RSP
/* 0e4e0c66 */  CALL RAX
/* 0e4e0c68 */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0e4e0c70 */  MOV qword ptr [RSP + 0x1f0],RAX
/* 0e4e0c78 */  MOVUPS XMM0,xmmword ptr [RSP + 0x180]
/* 0e4e0c80 */  MOVUPS XMM1,xmmword ptr [RSP + 0x190]
/* 0e4e0c88 */  MOVUPS XMM2,xmmword ptr [RSP + 0x1a0]
/* 0e4e0c90 */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM2
/* 0e4e0c98 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM1
/* 0e4e0ca0 */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0e4e0ca8 */  LEA RDX,[0x123ca5a]
/* 0e4e0caf */  LEA RDI,[RSP + 0x70]
/* 0e4e0cb4 */  LEA RSI,[RSP + 0x1c0]
/* 0e4e0cbc */  MOV ECX,0x6
/* 0e4e0cc1 */  CALL 0x0e627530
/* 0e4e0cc6 */  LEA RDI,[0xf5463b0]
/* 0e4e0ccd */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e0cd4 */  MOV ESI,0x8
/* 0e4e0cd9 */  CALL qword ptr [RAX + 0x10]
/* 0e4e0cdc */  MOV R14,RAX
/* 0e4e0cdf */  TEST RAX,RAX
/* 0e4e0ce2 */  JZ 0x0e4eda78
/* 0e4e0ce8 */  LEA RAX,[0xf012080]
/* 0e4e0cef */  MOV qword ptr [R14],RAX
/* 0e4e0cf2 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e0cfa */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e0d02 */  TEST RDI,RDI
/* 0e4e0d05 */  JZ 0x0e4e0d0d
/* 0e4e0d07 */  MOV RAX,qword ptr [RDI]
/* 0e4e0d0a */  CALL qword ptr [RAX + 0x8]
/* 0e4e0d0d */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e0d12 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e0d19 */  MOV dword ptr [RSP],EAX
/* 0e4e0d1c */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e0d25 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e0d2d */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e0d36 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e0d3f */  LEA RAX,[0x5dd3ca0]
/* 0e4e0d46 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e0d4b */  LEA R15,[0x48b06d0]
/* 0e4e0d52 */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e0d57 */  LEA RAX,[0x5dd3990]
/* 0e4e0d5e */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e0d63 */  LEA RAX,[0xe627ac0]
/* 0e4e0d6a */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e0d6f */  LEA RAX,[0xe627c20]
/* 0e4e0d76 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e0d7b */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e0d83 */  XORPS XMM0,XMM0
/* 0e4e0d86 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e4e0d8b */  MOV RSI,RSP
/* 0e4e0d8e */  CALL 0x048b05a0
/* 0e4e0d93 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e0d98 */  TEST R14,R14
/* 0e4e0d9b */  JZ 0x0e4e0dc0
/* 0e4e0d9d */  MOV RAX,-0x1
/* 0e4e0da4 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e0daa */  TEST RAX,RAX
/* 0e4e0dad */  JNZ 0x0e4e0dc0
/* 0e4e0daf */  MOV RAX,qword ptr [R14]
/* 0e4e0db2 */  MOV RDI,R14
/* 0e4e0db5 */  CALL qword ptr [RAX + 0x10]
/* 0e4e0db8 */  MOV RDI,R14
/* 0e4e0dbb */  CALL 0x0412c2d0
/* 0e4e0dc0 */  LEA RDI,[RSP + 0x70]
/* 0e4e0dc5 */  CALL 0x0e6277c0
/* 0e4e0dca */  LEA RDI,[RSP + 0x88]
/* 0e4e0dd2 */  MOVZX EAX,byte ptr [RSP + 0x1f0]
/* 0e4e0dda */  MOV byte ptr [RSP + 0x170],AL
/* 0e4e0de1 */  MOVDQA XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4e0dea */  MOVDQA XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4e0df3 */  MOVDQA XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e4e0dfc */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e4e0e05 */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4e0e0e */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4e0e17 */  CALL 0x048b0bc0
/* 0e4e0e1c */  LEA RDX,[0x1446a5b]
/* 0e4e0e23 */  LEA RDI,[RSP + 0x70]
/* 0e4e0e28 */  LEA RSI,[RSP + 0x140]
/* 0e4e0e30 */  MOV ECX,0x4
/* 0e4e0e35 */  CALL 0x0e627530
/* 0e4e0e3a */  LEA RDI,[0xf5463b0]
/* 0e4e0e41 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e0e48 */  MOV ESI,0x8
/* 0e4e0e4d */  CALL qword ptr [RAX + 0x10]
/* 0e4e0e50 */  MOV R14,RAX
/* 0e4e0e53 */  TEST RAX,RAX
/* 0e4e0e56 */  JZ 0x0e4eda89
/* 0e4e0e5c */  LEA RAX,[0xf4c35f8]
/* 0e4e0e63 */  MOV qword ptr [R14],RAX
/* 0e4e0e66 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e0e6e */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e0e76 */  TEST RDI,RDI
/* 0e4e0e79 */  JZ 0x0e4e0e81
/* 0e4e0e7b */  MOV RAX,qword ptr [RDI]
/* 0e4e0e7e */  CALL qword ptr [RAX + 0x8]
/* 0e4e0e81 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e0e86 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e0e8d */  MOV dword ptr [RSP],EAX
/* 0e4e0e90 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e0e99 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e0ea1 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e0eaa */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e0eb3 */  LEA RAX,[0xe625650]
/* 0e4e0eba */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e0ebf */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e0ec4 */  LEA RAX,[0xe6214a0]
/* 0e4e0ecb */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e0ed0 */  LEA RAX,[0xe627df0]
/* 0e4e0ed7 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e0edc */  LEA RAX,[0xe627fc0]
/* 0e4e0ee3 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e0ee8 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e0ef0 */  PXOR XMM0,XMM0
/* 0e4e0ef4 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4e0efa */  MOV RSI,RSP
/* 0e4e0efd */  CALL 0x048b05a0
/* 0e4e0f02 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e0f07 */  TEST R14,R14
/* 0e4e0f0a */  JZ 0x0e4e0f2f
/* 0e4e0f0c */  MOV RAX,-0x1
/* 0e4e0f13 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e0f19 */  TEST RAX,RAX
/* 0e4e0f1c */  JNZ 0x0e4e0f2f
/* 0e4e0f1e */  MOV RAX,qword ptr [R14]
/* 0e4e0f21 */  MOV RDI,R14
/* 0e4e0f24 */  CALL qword ptr [RAX + 0x10]
/* 0e4e0f27 */  MOV RDI,R14
/* 0e4e0f2a */  CALL 0x0412c2d0
/* 0e4e0f2f */  LEA RDI,[RSP + 0x70]
/* 0e4e0f34 */  CALL 0x0e6277c0
/* 0e4e0f39 */  LEA RDI,[RSP + 0x88]
/* 0e4e0f41 */  CALL 0x048b0bc0
/* 0e4e0f46 */  TEST byte ptr [RSP + 0x250],0x1
/* 0e4e0f4e */  JZ 0x0e4e0f69
/* 0e4e0f50 */  MOV RSI,qword ptr [RSP + 0x250]
/* 0e4e0f58 */  MOV RDI,qword ptr [RSP + 0x260]
/* 0e4e0f60 */  AND RSI,-0x2
/* 0e4e0f64 */  CALL 0x0412a280
/* 0e4e0f69 */  MOVZX EAX,byte ptr [0x0f75ae28]
/* 0e4e0f70 */  TEST AL,AL
/* 0e4e0f72 */  JZ 0x0e4edf8d
/* 0e4e0f78 */  MOV RAX,qword ptr [0x0f75ada8]
/* 0e4e0f7f */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e0f82 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e0f87 */  MOV RCX,qword ptr [RSI + 0x18]
/* 0e4e0f8b */  MOV RDX,qword ptr [RSI + 0x20]
/* 0e4e0f8f */  SUB RDX,RCX
/* 0e4e0f92 */  SHR RDX,0x3
/* 0e4e0f96 */  MOV EDI,0xffffffff
/* 0e4e0f9b */  ADD EDX,EDI
/* 0e4e0f9d */  AND EDX,EAX
/* 0e4e0f9f */  LEA RCX,[RCX + RDX*0x8]
/* 0e4e0fa3 */  MOV RDX,qword ptr [RSI + 0x30]
/* 0e4e0fa7 */  NOP word ptr [RAX + RAX*0x1]
/* 0e4e0fb0 */  MOV RCX,qword ptr [RCX]
/* 0e4e0fb3 */  CMP RCX,-0x1
/* 0e4e0fb7 */  JZ 0x0e4e0fe7
/* 0e4e0fb9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4e0fbd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4e0fc1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4e0fc5 */  JNZ 0x0e4e0fb0
/* 0e4e0fc7 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e0fcc */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e0fd0 */  CMP RCX,RAX
/* 0e4e0fd3 */  JNZ 0x0e4e0ff8
/* 0e4e0fd5 */  LEA RAX,[0xf75ada8]
/* 0e4e0fdc */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e0fe3 */  JZ 0x0e4e1005
/* 0e4e0fe5 */  JMP 0x0e4e1049
/* 0e4e0fe7 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e0fec */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e0ff0 */  MOV RCX,RAX
/* 0e4e0ff3 */  CMP RCX,RAX
/* 0e4e0ff6 */  JZ 0x0e4e0fd5
/* 0e4e0ff8 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4e0ffc */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e1003 */  JNZ 0x0e4e1049
/* 0e4e1005 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4e1009 */  TEST RAX,RAX
/* 0e4e100c */  JZ 0x0e4e1049
/* 0e4e100e */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4e1012 */  LEA RDX,[RAX + 0x9]
/* 0e4e1016 */  MOV ECX,ESI
/* 0e4e1018 */  SHR ECX,0x1
/* 0e4e101a */  TEST SIL,0x1
/* 0e4e101e */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4e1023 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4e1028 */  LEA RDI,[RSP + 0x180]
/* 0e4e1030 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e1035 */  CALL 0x0e628950
/* 0e4e103a */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e1042 */  JZ 0x0e4e1075
/* 0e4e1044 */  JMP 0x0e4e1745
/* 0e4e1049 */  LEA RDX,[0x14c393d]
/* 0e4e1050 */  LEA RDI,[RSP + 0x180]
/* 0e4e1058 */  MOV ECX,0xf
/* 0e4e105d */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e1062 */  CALL 0x0e628950
/* 0e4e1067 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e106f */  JNZ 0x0e4e1745
/* 0e4e1075 */  MOV R13,qword ptr [RSP + 0x180]
/* 0e4e107d */  MOVUPS XMM0,xmmword ptr [RSP + 0x188]
/* 0e4e1085 */  MOVAPS xmmword ptr [RSP + 0x210],XMM0
/* 0e4e108d */  MOVDQU XMM0,xmmword ptr [RSP + 0x198]
/* 0e4e1096 */  MOVDQA xmmword ptr [RSP + 0x220],XMM0
/* 0e4e109f */  MOV EBP,dword ptr [RSP + 0x1a8]
/* 0e4e10a6 */  MOV EBX,dword ptr [RSP + 0x1ac]
/* 0e4e10ad */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0e4e10b5 */  MOV qword ptr [RSP + 0x200],RAX
/* 0e4e10bd */  MOVZX EAX,byte ptr [0x0f75ae28]
/* 0e4e10c4 */  TEST AL,AL
/* 0e4e10c6 */  JZ 0x0e4ee4a1
/* 0e4e10cc */  LEA R15,[R13 + 0x18]
/* 0e4e10d0 */  MOV RAX,qword ptr [0x0f75ada8]
/* 0e4e10d7 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e10da */  MOV RCX,qword ptr [R13 + 0x18]
/* 0e4e10de */  MOV RDX,qword ptr [R13 + 0x20]
/* 0e4e10e2 */  SUB RDX,RCX
/* 0e4e10e5 */  SHR RDX,0x3
/* 0e4e10e9 */  MOV ESI,0xffffffff
/* 0e4e10ee */  ADD EDX,ESI
/* 0e4e10f0 */  AND EDX,EAX
/* 0e4e10f2 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4e10f6 */  MOV RDX,qword ptr [R13 + 0x30]
/* 0e4e10fa */  NOP word ptr [RAX + RAX*0x1]
/* 0e4e1100 */  MOV RCX,qword ptr [RCX]
/* 0e4e1103 */  CMP RCX,-0x1
/* 0e4e1107 */  JZ 0x0e4e1139
/* 0e4e1109 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4e110d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4e1111 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4e1115 */  JNZ 0x0e4e1100
/* 0e4e1117 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4e111b */  CMP RCX,RAX
/* 0e4e111e */  JNZ 0x0e4e1145
/* 0e4e1120 */  LEA RSI,[0xf75ada8]
/* 0e4e1127 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4e112b */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4e112f */  CMP RAX,RCX
/* 0e4e1132 */  JNZ 0x0e4e115a
/* 0e4e1134 */  JMP 0x0e4e1205
/* 0e4e1139 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4e113d */  MOV RCX,RAX
/* 0e4e1140 */  CMP RCX,RAX
/* 0e4e1143 */  JZ 0x0e4e1120
/* 0e4e1145 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4e1149 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4e114d */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4e1151 */  CMP RAX,RCX
/* 0e4e1154 */  JZ 0x0e4e1205
/* 0e4e115a */  MOV RDX,0x3a6c61657265635b
/* 0e4e1164 */  MOVQ XMM0,RDX
/* 0e4e1169 */  MOV RDX,0x746e656d75636f64
/* 0e4e1173 */  MOVQ XMM1,RDX
/* 0e4e1178 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4e117c */  MOV RDX,0x7461746e656d7563
/* 0e4e1186 */  MOVQ XMM1,RDX
/* 0e4e118b */  MOV RDX,0x5d6761745f6e6f69
/* 0e4e1195 */  MOVQ XMM2,RDX
/* 0e4e119a */  PUNPCKLQDQ XMM1,XMM2
/* 0e4e119e */  JMP 0x0e4e11ce
/* 0e4e11a0 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4e11a4 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4e11a8 */  PCMPEQB XMM2,XMM0
/* 0e4e11ac */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4e11b1 */  PCMPEQB XMM3,XMM1
/* 0e4e11b5 */  PAND XMM3,XMM2
/* 0e4e11b9 */  PMOVMSKB EDX,XMM3
/* 0e4e11bd */  CMP EDX,0xffff
/* 0e4e11c3 */  JZ 0x0e4e1205
/* 0e4e11c5 */  ADD RAX,0x38
/* 0e4e11c9 */  CMP RAX,RCX
/* 0e4e11cc */  JZ 0x0e4e1205
/* 0e4e11ce */  MOVZX EDX,byte ptr [RAX]
/* 0e4e11d1 */  TEST DL,0x1
/* 0e4e11d4 */  JZ 0x0e4e11f0
/* 0e4e11d6 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4e11da */  CMP RDI,0x1a
/* 0e4e11de */  JNZ 0x0e4e11c5
/* 0e4e11e0 */  JMP 0x0e4e11fa
/* 0e4e11f0 */  MOV EDI,EDX
/* 0e4e11f2 */  SHR EDI,0x1
/* 0e4e11f4 */  CMP RDI,0x1a
/* 0e4e11f8 */  JNZ 0x0e4e11c5
/* 0e4e11fa */  TEST DL,0x1
/* 0e4e11fd */  JNZ 0x0e4e11a0
/* 0e4e11ff */  LEA RDX,[RAX + 0x1]
/* 0e4e1203 */  JMP 0x0e4e11a4
/* 0e4e1205 */  CMP RAX,RCX
/* 0e4e1208 */  JZ 0x0e4e122e
/* 0e4e120a */  MOV R12D,EBX
/* 0e4e120d */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4e1210 */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4e1217 */  TEST AL,AL
/* 0e4e1219 */  JZ 0x0e4ef44b
/* 0e4e121f */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4e1225 */  MOV EBX,R12D
/* 0e4e1228 */  JNZ 0x0e4e1461
/* 0e4e122e */  TEST EBP,EBP
/* 0e4e1230 */  JZ 0x0e4e128c
/* 0e4e1232 */  TEST RSI,RSI
/* 0e4e1235 */  JNZ 0x0e4e1242
/* 0e4e1237 */  MOV RDI,R15
/* 0e4e123a */  CALL 0x048aead0
/* 0e4e123f */  MOV RSI,RAX
/* 0e4e1242 */  MOV RDI,R15
/* 0e4e1245 */  MOV EDX,EBX
/* 0e4e1247 */  MOV ECX,0x1
/* 0e4e124c */  CALL 0x048b0c90
/* 0e4e1251 */  TEST RAX,RAX
/* 0e4e1254 */  JNZ 0x0e4e1274
/* 0e4e1256 */  PXOR XMM0,XMM0
/* 0e4e125a */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e1260 */  LEA RDI,[RSP + 0x70]
/* 0e4e1265 */  CALL 0x048b0d20
/* 0e4e126a */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4e126f */  TEST RAX,RAX
/* 0e4e1272 */  JZ 0x0e4e12a9
/* 0e4e1274 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4e127b */  JNZ 0x0e4e12a9
/* 0e4e127d */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4e1281 */  TEST R14,R14
/* 0e4e1284 */  JZ 0x0e4e12a9
/* 0e4e1286 */  ADD R14,0x40
/* 0e4e128a */  JMP 0x0e4e12ac
/* 0e4e128c */  TEST RSI,RSI
/* 0e4e128f */  JZ 0x0e4e12a9
/* 0e4e1291 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4e1298 */  JNZ 0x0e4e12a9
/* 0e4e129a */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4e129e */  TEST R14,R14
/* 0e4e12a1 */  JZ 0x0e4e12a9
/* 0e4e12a3 */  ADD R14,0x38
/* 0e4e12a7 */  JMP 0x0e4e12ac
/* 0e4e12a9 */  XOR R14D,R14D
/* 0e4e12ac */  LEA RAX,[0x488e0b0]
/* 0e4e12b3 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4e12b8 */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4e12c0 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4e12c9 */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4e12ce */  MOV qword ptr [RSP],0x0
/* 0e4e12d6 */  PXOR XMM0,XMM0
/* 0e4e12da */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e12e0 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4e12e8 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4e12f4 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4e12ff */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4e1307 */  LEA RDI,[0xf5463b0]
/* 0e4e130e */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e1315 */  MOV ESI,0x20
/* 0e4e131a */  CALL qword ptr [RAX + 0x10]
/* 0e4e131d */  MOV R15,RAX
/* 0e4e1320 */  TEST RAX,RAX
/* 0e4e1323 */  JZ 0x0e4edced
/* 0e4e1329 */  MOV qword ptr [RSP + 0x150],R15
/* 0e4e1331 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4e133d */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4e1349 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4e1350 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4e1355 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4e135d */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4e1362 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4e1367 */  LEA RSI,[RSP + 0x140]
/* 0e4e136f */  MOV RDI,R14
/* 0e4e1372 */  CALL 0x048b5060
/* 0e4e1377 */  MOV R15,RAX
/* 0e4e137a */  LEA R14,[RSP + 0x78]
/* 0e4e137f */  ADD RAX,0x20
/* 0e4e1383 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4e138b */  LEA RCX,[RSP + 0x70]
/* 0e4e1390 */  CMP RAX,RCX
/* 0e4e1393 */  JZ 0x0e4e13cf
/* 0e4e1395 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4e1399 */  TEST RAX,RAX
/* 0e4e139c */  JZ 0x0e4e13ef
/* 0e4e139e */  MOV R12,R15
/* 0e4e13a1 */  ADD R12,0x28
/* 0e4e13a5 */  MOV RDI,R12
/* 0e4e13a8 */  CALL RAX
/* 0e4e13aa */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4e13b2 */  TEST EAX,EAX
/* 0e4e13b4 */  JZ 0x0e4e13ef
/* 0e4e13b6 */  CMP EAX,0x2
/* 0e4e13b9 */  JNZ 0x0e4e13dd
/* 0e4e13bb */  MOV EDI,0x5
/* 0e4e13c0 */  MOV RSI,R14
/* 0e4e13c3 */  MOV RDX,R12
/* 0e4e13c6 */  CALL qword ptr [RSP + 0x88]
/* 0e4e13cd */  JMP 0x0e4e13ef
/* 0e4e13cf */  XOR EAX,EAX
/* 0e4e13d1 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e13d9 */  JNZ 0x0e4e1427
/* 0e4e13db */  JMP 0x0e4e1448
/* 0e4e13dd */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4e13e2 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4e13eb */  MOV qword ptr [R12],RAX
/* 0e4e13ef */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e13f7 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4e1400 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4e1406 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4e140d */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4e1411 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4e1419 */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4e141d */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e1425 */  JZ 0x0e4e1448
/* 0e4e1427 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4e142f */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4e1437 */  AND RSI,-0x2
/* 0e4e143b */  CALL 0x0412a280
/* 0e4e1440 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e1448 */  TEST RAX,RAX
/* 0e4e144b */  JZ 0x0e4e1452
/* 0e4e144d */  MOV RDI,R14
/* 0e4e1450 */  CALL RAX
/* 0e4e1452 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4e1457 */  TEST RAX,RAX
/* 0e4e145a */  JZ 0x0e4e1461
/* 0e4e145c */  MOV RDI,RSP
/* 0e4e145f */  CALL RAX
/* 0e4e1461 */  MOV qword ptr [RSP + 0x1c0],R13
/* 0e4e1469 */  MOVAPS XMM0,xmmword ptr [RSP + 0x210]
/* 0e4e1471 */  MOVAPS XMM1,xmmword ptr [RSP + 0x220]
/* 0e4e1479 */  MOVUPS xmmword ptr [RSP + 0x1c8],XMM0
/* 0e4e1481 */  MOVUPS xmmword ptr [RSP + 0x1d8],XMM1
/* 0e4e1489 */  MOV dword ptr [RSP + 0x1e8],EBP
/* 0e4e1490 */  MOV dword ptr [RSP + 0x1ec],EBX
/* 0e4e1497 */  MOV RAX,qword ptr [RSP + 0x200]
/* 0e4e149f */  MOV qword ptr [RSP + 0x1f0],RAX
/* 0e4e14a7 */  LEA RDX,[0x14c8537]
/* 0e4e14ae */  LEA RDI,[RSP + 0x70]
/* 0e4e14b3 */  LEA RSI,[RSP + 0x1c0]
/* 0e4e14bb */  MOV ECX,0x5
/* 0e4e14c0 */  CALL 0x0e6294b0
/* 0e4e14c5 */  LEA RDI,[0xf5463b0]
/* 0e4e14cc */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e14d3 */  MOV ESI,0x8
/* 0e4e14d8 */  CALL qword ptr [RAX + 0x10]
/* 0e4e14db */  MOV R14,RAX
/* 0e4e14de */  TEST RAX,RAX
/* 0e4e14e1 */  JZ 0x0e4eda9a
/* 0e4e14e7 */  LEA RAX,[0xef44b00]
/* 0e4e14ee */  MOV qword ptr [R14],RAX
/* 0e4e14f1 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e14f9 */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e1501 */  TEST RDI,RDI
/* 0e4e1504 */  JZ 0x0e4e150c
/* 0e4e1506 */  MOV RAX,qword ptr [RDI]
/* 0e4e1509 */  CALL qword ptr [RAX + 0x8]
/* 0e4e150c */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e1511 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e1518 */  MOV dword ptr [RSP],EAX
/* 0e4e151b */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e1524 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e152c */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e1535 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e153e */  LEA RAX,[0x48b3f30]
/* 0e4e1545 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e154a */  LEA R15,[0x48b06d0]
/* 0e4e1551 */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e1556 */  LEA RAX,[0x48b2190]
/* 0e4e155d */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e1562 */  LEA RAX,[0xe629a50]
/* 0e4e1569 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e156e */  LEA RAX,[0xe629c10]
/* 0e4e1575 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e157a */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e1582 */  XORPS XMM0,XMM0
/* 0e4e1585 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e4e158a */  MOV RSI,RSP
/* 0e4e158d */  CALL 0x048b05a0
/* 0e4e1592 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e1597 */  TEST R14,R14
/* 0e4e159a */  JZ 0x0e4e15bf
/* 0e4e159c */  MOV RAX,-0x1
/* 0e4e15a3 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e15a9 */  TEST RAX,RAX
/* 0e4e15ac */  JNZ 0x0e4e15bf
/* 0e4e15ae */  MOV RAX,qword ptr [R14]
/* 0e4e15b1 */  MOV RDI,R14
/* 0e4e15b4 */  CALL qword ptr [RAX + 0x10]
/* 0e4e15b7 */  MOV RDI,R14
/* 0e4e15ba */  CALL 0x0412c2d0
/* 0e4e15bf */  LEA RDI,[RSP + 0x70]
/* 0e4e15c4 */  CALL 0x0e629750
/* 0e4e15c9 */  LEA RDI,[RSP + 0x88]
/* 0e4e15d1 */  MOVZX EAX,byte ptr [RSP + 0x1f0]
/* 0e4e15d9 */  MOV byte ptr [RSP + 0x170],AL
/* 0e4e15e0 */  MOVDQU XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4e15e9 */  MOVDQU XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4e15f2 */  MOVDQU XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e4e15fb */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e4e1604 */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4e160d */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4e1616 */  CALL 0x048b0bc0
/* 0e4e161b */  LEA RDX,[0x1438276]
/* 0e4e1622 */  LEA RDI,[RSP + 0x70]
/* 0e4e1627 */  LEA RSI,[RSP + 0x140]
/* 0e4e162f */  MOV ECX,0x7
/* 0e4e1634 */  CALL 0x0e6294b0
/* 0e4e1639 */  LEA RDI,[0xf5463b0]
/* 0e4e1640 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e1647 */  MOV ESI,0x8
/* 0e4e164c */  CALL qword ptr [RAX + 0x10]
/* 0e4e164f */  MOV R14,RAX
/* 0e4e1652 */  TEST RAX,RAX
/* 0e4e1655 */  JZ 0x0e4edaab
/* 0e4e165b */  LEA RAX,[0xf4c3750]
/* 0e4e1662 */  MOV qword ptr [R14],RAX
/* 0e4e1665 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e166d */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e1675 */  TEST RDI,RDI
/* 0e4e1678 */  JZ 0x0e4e1680
/* 0e4e167a */  MOV RAX,qword ptr [RDI]
/* 0e4e167d */  CALL qword ptr [RAX + 0x8]
/* 0e4e1680 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e1685 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e168c */  MOV dword ptr [RSP],EAX
/* 0e4e168f */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e1698 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e16a0 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e16a9 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e16b2 */  LEA RAX,[0xe62d240]
/* 0e4e16b9 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e16be */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e16c3 */  LEA RAX,[0xe62bdb0]
/* 0e4e16ca */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e16cf */  LEA RAX,[0xe62d300]
/* 0e4e16d6 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e16db */  LEA RAX,[0xe62d4f0]
/* 0e4e16e2 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e16e7 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e16ef */  PXOR XMM0,XMM0
/* 0e4e16f3 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4e16f9 */  MOV RSI,RSP
/* 0e4e16fc */  CALL 0x048b05a0
/* 0e4e1701 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e1706 */  TEST R14,R14
/* 0e4e1709 */  JZ 0x0e4e172e
/* 0e4e170b */  MOV RAX,-0x1
/* 0e4e1712 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e1718 */  TEST RAX,RAX
/* 0e4e171b */  JNZ 0x0e4e172e
/* 0e4e171d */  MOV RAX,qword ptr [R14]
/* 0e4e1720 */  MOV RDI,R14
/* 0e4e1723 */  CALL qword ptr [RAX + 0x10]
/* 0e4e1726 */  MOV RDI,R14
/* 0e4e1729 */  CALL 0x0412c2d0
/* 0e4e172e */  LEA RDI,[RSP + 0x70]
/* 0e4e1733 */  CALL 0x0e629750
/* 0e4e1738 */  LEA RDI,[RSP + 0x88]
/* 0e4e1740 */  CALL 0x048b0bc0
/* 0e4e1745 */  MOV byte ptr [RSP + 0x210],0x26
/* 0e4e174d */  MOVDQU XMM0,xmmword ptr [0x01202b26]
/* 0e4e1755 */  MOVDQU xmmword ptr [RSP + 0x211],XMM0
/* 0e4e175e */  MOV dword ptr [RSP + 0x220],0x73676e69
/* 0e4e1769 */  MOV byte ptr [RSP + 0x224],0x0
/* 0e4e1771 */  MOVZX EAX,byte ptr [0x0f75b0b0]
/* 0e4e1778 */  TEST AL,AL
/* 0e4e177a */  JZ 0x0e4edfd1
/* 0e4e1780 */  LEA RDX,[RSP + 0x211]
/* 0e4e1788 */  MOV RAX,qword ptr [0x0f75b030]
/* 0e4e178f */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e1792 */  MOV RDI,qword ptr [RSP + 0x68]
/* 0e4e1797 */  MOV RCX,qword ptr [RDI + 0x18]
/* 0e4e179b */  MOV RSI,qword ptr [RDI + 0x20]
/* 0e4e179f */  SUB RSI,RCX
/* 0e4e17a2 */  SHR RSI,0x3
/* 0e4e17a6 */  MOV R8D,0xffffffff
/* 0e4e17ac */  ADD ESI,R8D
/* 0e4e17af */  AND ESI,EAX
/* 0e4e17b1 */  LEA RCX,[RCX + RSI*0x8]
/* 0e4e17b5 */  MOV RSI,qword ptr [RDI + 0x30]
/* 0e4e17b9 */  NOP dword ptr [RAX]
/* 0e4e17c0 */  MOV RCX,qword ptr [RCX]
/* 0e4e17c3 */  CMP RCX,-0x1
/* 0e4e17c7 */  JZ 0x0e4e17f7
/* 0e4e17c9 */  LEA RDI,[RCX + RCX*0x2]
/* 0e4e17cd */  LEA RCX,[RSI + RDI*0x8]
/* 0e4e17d1 */  CMP dword ptr [RSI + RDI*0x8 + 0x8],EAX
/* 0e4e17d5 */  JNZ 0x0e4e17c0
/* 0e4e17d7 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e17dc */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e17e0 */  CMP RCX,RAX
/* 0e4e17e3 */  JNZ 0x0e4e1808
/* 0e4e17e5 */  LEA RAX,[0xf75b030]
/* 0e4e17ec */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e17f3 */  JZ 0x0e4e1815
/* 0e4e17f5 */  JMP 0x0e4e1859
/* 0e4e17f7 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e17fc */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e1800 */  MOV RCX,RAX
/* 0e4e1803 */  CMP RCX,RAX
/* 0e4e1806 */  JZ 0x0e4e17e5
/* 0e4e1808 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4e180c */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e1813 */  JNZ 0x0e4e1859
/* 0e4e1815 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4e1819 */  TEST RAX,RAX
/* 0e4e181c */  JZ 0x0e4e1859
/* 0e4e181e */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4e1822 */  LEA RDX,[RAX + 0x9]
/* 0e4e1826 */  MOV ECX,ESI
/* 0e4e1828 */  SHR ECX,0x1
/* 0e4e182a */  TEST SIL,0x1
/* 0e4e182e */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4e1833 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4e1838 */  LEA RDI,[RSP + 0x180]
/* 0e4e1840 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e1845 */  CALL 0x0e630c00
/* 0e4e184a */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e1852 */  JZ 0x0e4e187e
/* 0e4e1854 */  JMP 0x0e4e1f16
/* 0e4e1859 */  LEA RDI,[RSP + 0x180]
/* 0e4e1861 */  MOV ECX,0x13
/* 0e4e1866 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e186b */  CALL 0x0e630c00
/* 0e4e1870 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e1878 */  JNZ 0x0e4e1f16
/* 0e4e187e */  MOV R14,qword ptr [RSP + 0x180]
/* 0e4e1886 */  MOVZX EAX,byte ptr [0x0f75b0b0]
/* 0e4e188d */  TEST AL,AL
/* 0e4e188f */  JZ 0x0e4ee4e5
/* 0e4e1895 */  LEA R15,[R14 + 0x18]
/* 0e4e1899 */  MOV RAX,qword ptr [0x0f75b030]
/* 0e4e18a0 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e18a3 */  MOV RCX,qword ptr [R14 + 0x18]
/* 0e4e18a7 */  MOV RDX,qword ptr [R14 + 0x20]
/* 0e4e18ab */  SUB RDX,RCX
/* 0e4e18ae */  SHR RDX,0x3
/* 0e4e18b2 */  MOV ESI,0xffffffff
/* 0e4e18b7 */  ADD EDX,ESI
/* 0e4e18b9 */  AND EDX,EAX
/* 0e4e18bb */  LEA RCX,[RCX + RDX*0x8]
/* 0e4e18bf */  MOV RDX,qword ptr [R14 + 0x30]
/* 0e4e18c3 */  NOP dword ptr CS:[RAX + RAX*0x1]
/* 0e4e18d0 */  MOV RCX,qword ptr [RCX]
/* 0e4e18d3 */  CMP RCX,-0x1
/* 0e4e18d7 */  JZ 0x0e4e18f9
/* 0e4e18d9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4e18dd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4e18e1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4e18e5 */  JNZ 0x0e4e18d0
/* 0e4e18e7 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4e18eb */  CMP RCX,RAX
/* 0e4e18ee */  JNZ 0x0e4e1905
/* 0e4e18f0 */  LEA RSI,[0xf75b030]
/* 0e4e18f7 */  JMP 0x0e4e1909
/* 0e4e18f9 */  MOV RAX,qword ptr [R14 + 0x38]
/* 0e4e18fd */  MOV RCX,RAX
/* 0e4e1900 */  CMP RCX,RAX
/* 0e4e1903 */  JZ 0x0e4e18f0
/* 0e4e1905 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4e1909 */  MOV RCX,qword ptr [RSP + 0x180]
/* 0e4e1911 */  MOV RAX,qword ptr [RCX + 0x50]
/* 0e4e1915 */  MOV RCX,qword ptr [RCX + 0x58]
/* 0e4e1919 */  CMP RAX,RCX
/* 0e4e191c */  JZ 0x0e4e19d5
/* 0e4e1922 */  MOV RDX,0x3a6c61657265635b
/* 0e4e192c */  MOVQ XMM0,RDX
/* 0e4e1931 */  MOV RDX,0x746e656d75636f64
/* 0e4e193b */  MOVQ XMM1,RDX
/* 0e4e1940 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4e1944 */  MOV RDX,0x7461746e656d7563
/* 0e4e194e */  MOVQ XMM1,RDX
/* 0e4e1953 */  MOV RDX,0x5d6761745f6e6f69
/* 0e4e195d */  MOVQ XMM2,RDX
/* 0e4e1962 */  PUNPCKLQDQ XMM1,XMM2
/* 0e4e1966 */  JMP 0x0e4e199e
/* 0e4e1970 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4e1974 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4e1978 */  PCMPEQB XMM2,XMM0
/* 0e4e197c */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4e1981 */  PCMPEQB XMM3,XMM1
/* 0e4e1985 */  PAND XMM3,XMM2
/* 0e4e1989 */  PMOVMSKB EDX,XMM3
/* 0e4e198d */  CMP EDX,0xffff
/* 0e4e1993 */  JZ 0x0e4e19d5
/* 0e4e1995 */  ADD RAX,0x38
/* 0e4e1999 */  CMP RAX,RCX
/* 0e4e199c */  JZ 0x0e4e19d5
/* 0e4e199e */  MOVZX EDX,byte ptr [RAX]
/* 0e4e19a1 */  TEST DL,0x1
/* 0e4e19a4 */  JZ 0x0e4e19c0
/* 0e4e19a6 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4e19aa */  CMP RDI,0x1a
/* 0e4e19ae */  JNZ 0x0e4e1995
/* 0e4e19b0 */  JMP 0x0e4e19ca
/* 0e4e19c0 */  MOV EDI,EDX
/* 0e4e19c2 */  SHR EDI,0x1
/* 0e4e19c4 */  CMP RDI,0x1a
/* 0e4e19c8 */  JNZ 0x0e4e1995
/* 0e4e19ca */  TEST DL,0x1
/* 0e4e19cd */  JNZ 0x0e4e1970
/* 0e4e19cf */  LEA RDX,[RAX + 0x1]
/* 0e4e19d3 */  JMP 0x0e4e1974
/* 0e4e19d5 */  CMP RAX,RCX
/* 0e4e19d8 */  JZ 0x0e4e19f8
/* 0e4e19da */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4e19dd */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4e19e4 */  TEST AL,AL
/* 0e4e19e6 */  JZ 0x0e4ef485
/* 0e4e19ec */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4e19f2 */  JNZ 0x0e4e1c38
/* 0e4e19f8 */  CMP dword ptr [RSP + 0x1a8],0x0
/* 0e4e1a00 */  JZ 0x0e4e1a63
/* 0e4e1a02 */  MOV EBP,dword ptr [RSP + 0x1ac]
/* 0e4e1a09 */  TEST RSI,RSI
/* 0e4e1a0c */  JNZ 0x0e4e1a19
/* 0e4e1a0e */  MOV RDI,R15
/* 0e4e1a11 */  CALL 0x048aead0
/* 0e4e1a16 */  MOV RSI,RAX
/* 0e4e1a19 */  MOV RDI,R15
/* 0e4e1a1c */  MOV EDX,EBP
/* 0e4e1a1e */  MOV ECX,0x1
/* 0e4e1a23 */  CALL 0x048b0c90
/* 0e4e1a28 */  TEST RAX,RAX
/* 0e4e1a2b */  JNZ 0x0e4e1a4b
/* 0e4e1a2d */  PXOR XMM0,XMM0
/* 0e4e1a31 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e1a37 */  LEA RDI,[RSP + 0x70]
/* 0e4e1a3c */  CALL 0x048b0d20
/* 0e4e1a41 */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4e1a46 */  TEST RAX,RAX
/* 0e4e1a49 */  JZ 0x0e4e1a80
/* 0e4e1a4b */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4e1a52 */  JNZ 0x0e4e1a80
/* 0e4e1a54 */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4e1a58 */  TEST R14,R14
/* 0e4e1a5b */  JZ 0x0e4e1a80
/* 0e4e1a5d */  ADD R14,0x40
/* 0e4e1a61 */  JMP 0x0e4e1a83
/* 0e4e1a63 */  TEST RSI,RSI
/* 0e4e1a66 */  JZ 0x0e4e1a80
/* 0e4e1a68 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4e1a6f */  JNZ 0x0e4e1a80
/* 0e4e1a71 */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4e1a75 */  TEST R14,R14
/* 0e4e1a78 */  JZ 0x0e4e1a80
/* 0e4e1a7a */  ADD R14,0x38
/* 0e4e1a7e */  JMP 0x0e4e1a83
/* 0e4e1a80 */  XOR R14D,R14D
/* 0e4e1a83 */  LEA RAX,[0x488e0b0]
/* 0e4e1a8a */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4e1a8f */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4e1a97 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4e1aa0 */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4e1aa5 */  MOV qword ptr [RSP],0x0
/* 0e4e1aad */  PXOR XMM0,XMM0
/* 0e4e1ab1 */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e1ab7 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4e1abf */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4e1acb */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4e1ad6 */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4e1ade */  LEA RDI,[0xf5463b0]
/* 0e4e1ae5 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e1aec */  MOV ESI,0x20
/* 0e4e1af1 */  CALL qword ptr [RAX + 0x10]
/* 0e4e1af4 */  MOV R15,RAX
/* 0e4e1af7 */  TEST RAX,RAX
/* 0e4e1afa */  JZ 0x0e4edcfe
/* 0e4e1b00 */  MOV qword ptr [RSP + 0x150],R15
/* 0e4e1b08 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4e1b14 */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4e1b20 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4e1b27 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4e1b2c */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4e1b34 */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4e1b39 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4e1b3e */  LEA RSI,[RSP + 0x140]
/* 0e4e1b46 */  MOV RDI,R14
/* 0e4e1b49 */  CALL 0x048b5060
/* 0e4e1b4e */  MOV R15,RAX
/* 0e4e1b51 */  LEA R14,[RSP + 0x78]
/* 0e4e1b56 */  ADD RAX,0x20
/* 0e4e1b5a */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4e1b62 */  LEA RCX,[RSP + 0x70]
/* 0e4e1b67 */  CMP RAX,RCX
/* 0e4e1b6a */  JZ 0x0e4e1ba6
/* 0e4e1b6c */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4e1b70 */  TEST RAX,RAX
/* 0e4e1b73 */  JZ 0x0e4e1bc6
/* 0e4e1b75 */  MOV R12,R15
/* 0e4e1b78 */  ADD R12,0x28
/* 0e4e1b7c */  MOV RDI,R12
/* 0e4e1b7f */  CALL RAX
/* 0e4e1b81 */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4e1b89 */  TEST EAX,EAX
/* 0e4e1b8b */  JZ 0x0e4e1bc6
/* 0e4e1b8d */  CMP EAX,0x2
/* 0e4e1b90 */  JNZ 0x0e4e1bb4
/* 0e4e1b92 */  MOV EDI,0x5
/* 0e4e1b97 */  MOV RSI,R14
/* 0e4e1b9a */  MOV RDX,R12
/* 0e4e1b9d */  CALL qword ptr [RSP + 0x88]
/* 0e4e1ba4 */  JMP 0x0e4e1bc6
/* 0e4e1ba6 */  XOR EAX,EAX
/* 0e4e1ba8 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e1bb0 */  JNZ 0x0e4e1bfe
/* 0e4e1bb2 */  JMP 0x0e4e1c1f
/* 0e4e1bb4 */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4e1bb9 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4e1bc2 */  MOV qword ptr [R12],RAX
/* 0e4e1bc6 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e1bce */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4e1bd7 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4e1bdd */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4e1be4 */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4e1be8 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4e1bf0 */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4e1bf4 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e1bfc */  JZ 0x0e4e1c1f
/* 0e4e1bfe */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4e1c06 */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4e1c0e */  AND RSI,-0x2
/* 0e4e1c12 */  CALL 0x0412a280
/* 0e4e1c17 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e1c1f */  TEST RAX,RAX
/* 0e4e1c22 */  JZ 0x0e4e1c29
/* 0e4e1c24 */  MOV RDI,R14
/* 0e4e1c27 */  CALL RAX
/* 0e4e1c29 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4e1c2e */  TEST RAX,RAX
/* 0e4e1c31 */  JZ 0x0e4e1c38
/* 0e4e1c33 */  MOV RDI,RSP
/* 0e4e1c36 */  CALL RAX
/* 0e4e1c38 */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0e4e1c40 */  MOV qword ptr [RSP + 0x1f0],RAX
/* 0e4e1c48 */  MOVUPS XMM0,xmmword ptr [RSP + 0x180]
/* 0e4e1c50 */  MOVUPS XMM1,xmmword ptr [RSP + 0x190]
/* 0e4e1c58 */  MOVUPS XMM2,xmmword ptr [RSP + 0x1a0]
/* 0e4e1c60 */  MOVAPS xmmword ptr [RSP + 0x1e0],XMM2
/* 0e4e1c68 */  MOVAPS xmmword ptr [RSP + 0x1d0],XMM1
/* 0e4e1c70 */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0e4e1c78 */  LEA RDX,[0x123ca5a]
/* 0e4e1c7f */  LEA RDI,[RSP + 0x70]
/* 0e4e1c84 */  LEA RSI,[RSP + 0x1c0]
/* 0e4e1c8c */  MOV ECX,0x6
/* 0e4e1c91 */  CALL 0x0e631790
/* 0e4e1c96 */  LEA RDI,[0xf5463b0]
/* 0e4e1c9d */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e1ca4 */  MOV ESI,0x8
/* 0e4e1ca9 */  CALL qword ptr [RAX + 0x10]
/* 0e4e1cac */  MOV R14,RAX
/* 0e4e1caf */  TEST RAX,RAX
/* 0e4e1cb2 */  JZ 0x0e4edabc
/* 0e4e1cb8 */  LEA RAX,[0xf012080]
/* 0e4e1cbf */  MOV qword ptr [R14],RAX
/* 0e4e1cc2 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e1cca */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e1cd2 */  TEST RDI,RDI
/* 0e4e1cd5 */  JZ 0x0e4e1cdd
/* 0e4e1cd7 */  MOV RAX,qword ptr [RDI]
/* 0e4e1cda */  CALL qword ptr [RAX + 0x8]
/* 0e4e1cdd */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e1ce2 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e1ce9 */  MOV dword ptr [RSP],EAX
/* 0e4e1cec */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e1cf5 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e1cfd */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e1d06 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e1d0f */  LEA RAX,[0x5dd3ca0]
/* 0e4e1d16 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e1d1b */  LEA R15,[0x48b06d0]
/* 0e4e1d22 */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e1d27 */  LEA RAX,[0x5dd3990]
/* 0e4e1d2e */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e1d33 */  LEA RAX,[0xe631d20]
/* 0e4e1d3a */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e1d3f */  LEA RAX,[0xe631e80]
/* 0e4e1d46 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e1d4b */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e1d53 */  XORPS XMM0,XMM0
/* 0e4e1d56 */  MOVUPS xmmword ptr [RSP + 0x58],XMM0
/* 0e4e1d5b */  MOV RSI,RSP
/* 0e4e1d5e */  CALL 0x048b05a0
/* 0e4e1d63 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e1d68 */  TEST R14,R14
/* 0e4e1d6b */  JZ 0x0e4e1d90
/* 0e4e1d6d */  MOV RAX,-0x1
/* 0e4e1d74 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e1d7a */  TEST RAX,RAX
/* 0e4e1d7d */  JNZ 0x0e4e1d90
/* 0e4e1d7f */  MOV RAX,qword ptr [R14]
/* 0e4e1d82 */  MOV RDI,R14
/* 0e4e1d85 */  CALL qword ptr [RAX + 0x10]
/* 0e4e1d88 */  MOV RDI,R14
/* 0e4e1d8b */  CALL 0x0412c2d0
/* 0e4e1d90 */  LEA RDI,[RSP + 0x70]
/* 0e4e1d95 */  CALL 0x0e631a20
/* 0e4e1d9a */  LEA RDI,[RSP + 0x88]
/* 0e4e1da2 */  MOVZX EAX,byte ptr [RSP + 0x1f0]
/* 0e4e1daa */  MOV byte ptr [RSP + 0x170],AL
/* 0e4e1db1 */  MOVDQA XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4e1dba */  MOVDQA XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4e1dc3 */  MOVDQA XMM2,xmmword ptr [RSP + 0x1e0]
/* 0e4e1dcc */  MOVDQA xmmword ptr [RSP + 0x160],XMM2
/* 0e4e1dd5 */  MOVDQA xmmword ptr [RSP + 0x150],XMM1
/* 0e4e1dde */  MOVDQA xmmword ptr [RSP + 0x140],XMM0
/* 0e4e1de7 */  CALL 0x048b0bc0
/* 0e4e1dec */  LEA RDX,[0x1446a5b]
/* 0e4e1df3 */  LEA RDI,[RSP + 0x70]
/* 0e4e1df8 */  LEA RSI,[RSP + 0x140]
/* 0e4e1e00 */  MOV ECX,0x4
/* 0e4e1e05 */  CALL 0x0e631790
/* 0e4e1e0a */  LEA RDI,[0xf5463b0]
/* 0e4e1e11 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e1e18 */  MOV ESI,0x8
/* 0e4e1e1d */  CALL qword ptr [RAX + 0x10]
/* 0e4e1e20 */  MOV R14,RAX
/* 0e4e1e23 */  TEST RAX,RAX
/* 0e4e1e26 */  JZ 0x0e4edacd
/* 0e4e1e2c */  LEA RAX,[0xf4c3980]
/* 0e4e1e33 */  MOV qword ptr [R14],RAX
/* 0e4e1e36 */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e1e3e */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e1e46 */  TEST RDI,RDI
/* 0e4e1e49 */  JZ 0x0e4e1e51
/* 0e4e1e4b */  MOV RAX,qword ptr [RDI]
/* 0e4e1e4e */  CALL qword ptr [RAX + 0x8]
/* 0e4e1e51 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e1e56 */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e1e5d */  MOV dword ptr [RSP],EAX
/* 0e4e1e60 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e1e69 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e1e71 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e1e7a */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e1e83 */  LEA RAX,[0xe636e00]
/* 0e4e1e8a */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e1e8f */  MOV qword ptr [RSP + 0x30],R15
/* 0e4e1e94 */  LEA RAX,[0xe62e1d0]
/* 0e4e1e9b */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e1ea0 */  LEA RAX,[0xe636ec0]
/* 0e4e1ea7 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e1eac */  LEA RAX,[0xe637100]
/* 0e4e1eb3 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e1eb8 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e1ec0 */  PXOR XMM0,XMM0
/* 0e4e1ec4 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4e1eca */  MOV RSI,RSP
/* 0e4e1ecd */  CALL 0x048b05a0
/* 0e4e1ed2 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e1ed7 */  TEST R14,R14
/* 0e4e1eda */  JZ 0x0e4e1eff
/* 0e4e1edc */  MOV RAX,-0x1
/* 0e4e1ee3 */  XADD.LOCK qword ptr [R14 + 0x8],RAX
/* 0e4e1ee9 */  TEST RAX,RAX
/* 0e4e1eec */  JNZ 0x0e4e1eff
/* 0e4e1eee */  MOV RAX,qword ptr [R14]
/* 0e4e1ef1 */  MOV RDI,R14
/* 0e4e1ef4 */  CALL qword ptr [RAX + 0x10]
/* 0e4e1ef7 */  MOV RDI,R14
/* 0e4e1efa */  CALL 0x0412c2d0
/* 0e4e1eff */  LEA RDI,[RSP + 0x70]
/* 0e4e1f04 */  CALL 0x0e631a20
/* 0e4e1f09 */  LEA RDI,[RSP + 0x88]
/* 0e4e1f11 */  CALL 0x048b0bc0
/* 0e4e1f16 */  TEST byte ptr [RSP + 0x210],0x1
/* 0e4e1f1e */  JZ 0x0e4e1f39
/* 0e4e1f20 */  MOV RSI,qword ptr [RSP + 0x210]
/* 0e4e1f28 */  MOV RDI,qword ptr [RSP + 0x220]
/* 0e4e1f30 */  AND RSI,-0x2
/* 0e4e1f34 */  CALL 0x0412a280
/* 0e4e1f39 */  MOVZX EAX,byte ptr [0x0f75b3f0]
/* 0e4e1f40 */  TEST AL,AL
/* 0e4e1f42 */  JZ 0x0e4ee015
/* 0e4e1f48 */  MOV RAX,qword ptr [0x0f75b370]
/* 0e4e1f4f */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e1f52 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e1f57 */  MOV RCX,qword ptr [RSI + 0x18]
/* 0e4e1f5b */  MOV RDX,qword ptr [RSI + 0x20]
/* 0e4e1f5f */  SUB RDX,RCX
/* 0e4e1f62 */  SHR RDX,0x3
/* 0e4e1f66 */  MOV EDI,0xffffffff
/* 0e4e1f6b */  ADD EDX,EDI
/* 0e4e1f6d */  AND EDX,EAX
/* 0e4e1f6f */  LEA RCX,[RCX + RDX*0x8]
/* 0e4e1f73 */  MOV RDX,qword ptr [RSI + 0x30]
/* 0e4e1f77 */  NOP word ptr [RAX + RAX*0x1]
/* 0e4e1f80 */  MOV RCX,qword ptr [RCX]
/* 0e4e1f83 */  CMP RCX,-0x1
/* 0e4e1f87 */  JZ 0x0e4e1fb7
/* 0e4e1f89 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4e1f8d */  LEA RCX,[RDX + RSI*0x8]
/* 0e4e1f91 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4e1f95 */  JNZ 0x0e4e1f80
/* 0e4e1f97 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e1f9c */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e1fa0 */  CMP RCX,RAX
/* 0e4e1fa3 */  JNZ 0x0e4e1fc8
/* 0e4e1fa5 */  LEA RAX,[0xf75b370]
/* 0e4e1fac */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e1fb3 */  JZ 0x0e4e1fd5
/* 0e4e1fb5 */  JMP 0x0e4e2019
/* 0e4e1fb7 */  MOV RAX,qword ptr [RSP + 0x68]
/* 0e4e1fbc */  MOV RAX,qword ptr [RAX + 0x38]
/* 0e4e1fc0 */  MOV RCX,RAX
/* 0e4e1fc3 */  CMP RCX,RAX
/* 0e4e1fc6 */  JZ 0x0e4e1fa5
/* 0e4e1fc8 */  MOV RAX,qword ptr [RCX + 0x10]
/* 0e4e1fcc */  CMP dword ptr [RAX + 0x60],0xd4c25870
/* 0e4e1fd3 */  JNZ 0x0e4e2019
/* 0e4e1fd5 */  MOV RAX,qword ptr [RAX + 0x68]
/* 0e4e1fd9 */  TEST RAX,RAX
/* 0e4e1fdc */  JZ 0x0e4e2019
/* 0e4e1fde */  MOVZX ESI,byte ptr [RAX + 0x8]
/* 0e4e1fe2 */  LEA RDX,[RAX + 0x9]
/* 0e4e1fe6 */  MOV ECX,ESI
/* 0e4e1fe8 */  SHR ECX,0x1
/* 0e4e1fea */  TEST SIL,0x1
/* 0e4e1fee */  CMOVNZ RDX,qword ptr [RAX + 0x18]
/* 0e4e1ff3 */  CMOVNZ RCX,qword ptr [RAX + 0x10]
/* 0e4e1ff8 */  LEA RDI,[RSP + 0x180]
/* 0e4e2000 */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e2005 */  CALL 0x0e637c60
/* 0e4e200a */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e2012 */  JZ 0x0e4e2045
/* 0e4e2014 */  JMP 0x0e4e29f2
/* 0e4e2019 */  LEA RDX,[0x1442d33]
/* 0e4e2020 */  LEA RDI,[RSP + 0x180]
/* 0e4e2028 */  MOV ECX,0x14
/* 0e4e202d */  MOV RSI,qword ptr [RSP + 0x68]
/* 0e4e2032 */  CALL 0x0e637c60
/* 0e4e2037 */  CMP byte ptr [RSP + 0x1b0],0x0
/* 0e4e203f */  JNZ 0x0e4e29f2
/* 0e4e2045 */  MOV R13,qword ptr [RSP + 0x180]
/* 0e4e204d */  MOVUPS XMM0,xmmword ptr [RSP + 0x188]
/* 0e4e2055 */  MOVAPS xmmword ptr [RSP + 0x1c0],XMM0
/* 0e4e205d */  MOVDQU XMM0,xmmword ptr [RSP + 0x198]
/* 0e4e2066 */  MOVDQA xmmword ptr [RSP + 0x1d0],XMM0
/* 0e4e206f */  MOV EBP,dword ptr [RSP + 0x1a8]
/* 0e4e2076 */  MOV EBX,dword ptr [RSP + 0x1ac]
/* 0e4e207d */  MOV RAX,qword ptr [RSP + 0x1b0]
/* 0e4e2085 */  MOV qword ptr [RSP + 0x200],RAX
/* 0e4e208d */  MOVZX EAX,byte ptr [0x0f75b3f0]
/* 0e4e2094 */  TEST AL,AL
/* 0e4e2096 */  JZ 0x0e4ee529
/* 0e4e209c */  LEA R15,[R13 + 0x18]
/* 0e4e20a0 */  MOV RAX,qword ptr [0x0f75b370]
/* 0e4e20a7 */  MOV EAX,dword ptr [RAX + 0x4]
/* 0e4e20aa */  MOV RCX,qword ptr [R13 + 0x18]
/* 0e4e20ae */  MOV RDX,qword ptr [R13 + 0x20]
/* 0e4e20b2 */  SUB RDX,RCX
/* 0e4e20b5 */  SHR RDX,0x3
/* 0e4e20b9 */  MOV ESI,0xffffffff
/* 0e4e20be */  ADD EDX,ESI
/* 0e4e20c0 */  AND EDX,EAX
/* 0e4e20c2 */  LEA RCX,[RCX + RDX*0x8]
/* 0e4e20c6 */  MOV RDX,qword ptr [R13 + 0x30]
/* 0e4e20ca */  NOP word ptr [RAX + RAX*0x1]
/* 0e4e20d0 */  MOV RCX,qword ptr [RCX]
/* 0e4e20d3 */  CMP RCX,-0x1
/* 0e4e20d7 */  JZ 0x0e4e2109
/* 0e4e20d9 */  LEA RSI,[RCX + RCX*0x2]
/* 0e4e20dd */  LEA RCX,[RDX + RSI*0x8]
/* 0e4e20e1 */  CMP dword ptr [RDX + RSI*0x8 + 0x8],EAX
/* 0e4e20e5 */  JNZ 0x0e4e20d0
/* 0e4e20e7 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4e20eb */  CMP RCX,RAX
/* 0e4e20ee */  JNZ 0x0e4e2115
/* 0e4e20f0 */  LEA RSI,[0xf75b370]
/* 0e4e20f7 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4e20fb */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4e20ff */  CMP RAX,RCX
/* 0e4e2102 */  JNZ 0x0e4e212a
/* 0e4e2104 */  JMP 0x0e4e21d5
/* 0e4e2109 */  MOV RAX,qword ptr [R13 + 0x38]
/* 0e4e210d */  MOV RCX,RAX
/* 0e4e2110 */  CMP RCX,RAX
/* 0e4e2113 */  JZ 0x0e4e20f0
/* 0e4e2115 */  MOV RSI,qword ptr [RCX + 0x10]
/* 0e4e2119 */  MOV RAX,qword ptr [R13 + 0x50]
/* 0e4e211d */  MOV RCX,qword ptr [R13 + 0x58]
/* 0e4e2121 */  CMP RAX,RCX
/* 0e4e2124 */  JZ 0x0e4e21d5
/* 0e4e212a */  MOV RDX,0x3a6c61657265635b
/* 0e4e2134 */  MOVQ XMM0,RDX
/* 0e4e2139 */  MOV RDX,0x746e656d75636f64
/* 0e4e2143 */  MOVQ XMM1,RDX
/* 0e4e2148 */  PUNPCKLQDQ XMM0,XMM1
/* 0e4e214c */  MOV RDX,0x7461746e656d7563
/* 0e4e2156 */  MOVQ XMM1,RDX
/* 0e4e215b */  MOV RDX,0x5d6761745f6e6f69
/* 0e4e2165 */  MOVQ XMM2,RDX
/* 0e4e216a */  PUNPCKLQDQ XMM1,XMM2
/* 0e4e216e */  JMP 0x0e4e219e
/* 0e4e2170 */  MOV RDX,qword ptr [RAX + 0x10]
/* 0e4e2174 */  MOVDQU XMM2,xmmword ptr [RDX]
/* 0e4e2178 */  PCMPEQB XMM2,XMM0
/* 0e4e217c */  MOVDQU XMM3,xmmword ptr [RDX + 0xa]
/* 0e4e2181 */  PCMPEQB XMM3,XMM1
/* 0e4e2185 */  PAND XMM3,XMM2
/* 0e4e2189 */  PMOVMSKB EDX,XMM3
/* 0e4e218d */  CMP EDX,0xffff
/* 0e4e2193 */  JZ 0x0e4e21d5
/* 0e4e2195 */  ADD RAX,0x38
/* 0e4e2199 */  CMP RAX,RCX
/* 0e4e219c */  JZ 0x0e4e21d5
/* 0e4e219e */  MOVZX EDX,byte ptr [RAX]
/* 0e4e21a1 */  TEST DL,0x1
/* 0e4e21a4 */  JZ 0x0e4e21c0
/* 0e4e21a6 */  MOV RDI,qword ptr [RAX + 0x8]
/* 0e4e21aa */  CMP RDI,0x1a
/* 0e4e21ae */  JNZ 0x0e4e2195
/* 0e4e21b0 */  JMP 0x0e4e21ca
/* 0e4e21c0 */  MOV EDI,EDX
/* 0e4e21c2 */  SHR EDI,0x1
/* 0e4e21c4 */  CMP RDI,0x1a
/* 0e4e21c8 */  JNZ 0x0e4e2195
/* 0e4e21ca */  TEST DL,0x1
/* 0e4e21cd */  JNZ 0x0e4e2170
/* 0e4e21cf */  LEA RDX,[RAX + 0x1]
/* 0e4e21d3 */  JMP 0x0e4e2174
/* 0e4e21d5 */  CMP RAX,RCX
/* 0e4e21d8 */  JZ 0x0e4e21fe
/* 0e4e21da */  MOV R12D,EBX
/* 0e4e21dd */  MOV EBX,dword ptr [RAX + 0x1c]
/* 0e4e21e0 */  MOVZX EAX,byte ptr [0x0f550ad8]
/* 0e4e21e7 */  TEST AL,AL
/* 0e4e21e9 */  JZ 0x0e4ef4bf
/* 0e4e21ef */  CMP EBX,dword ptr [0x0f550ac4]
/* 0e4e21f5 */  MOV EBX,R12D
/* 0e4e21f8 */  JNZ 0x0e4e2431
/* 0e4e21fe */  TEST EBP,EBP
/* 0e4e2200 */  JZ 0x0e4e225c
/* 0e4e2202 */  TEST RSI,RSI
/* 0e4e2205 */  JNZ 0x0e4e2212
/* 0e4e2207 */  MOV RDI,R15
/* 0e4e220a */  CALL 0x048aead0
/* 0e4e220f */  MOV RSI,RAX
/* 0e4e2212 */  MOV RDI,R15
/* 0e4e2215 */  MOV EDX,EBX
/* 0e4e2217 */  MOV ECX,0x1
/* 0e4e221c */  CALL 0x048b0c90
/* 0e4e2221 */  TEST RAX,RAX
/* 0e4e2224 */  JNZ 0x0e4e2244
/* 0e4e2226 */  PXOR XMM0,XMM0
/* 0e4e222a */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e2230 */  LEA RDI,[RSP + 0x70]
/* 0e4e2235 */  CALL 0x048b0d20
/* 0e4e223a */  MOV RAX,qword ptr [RSP + 0x70]
/* 0e4e223f */  TEST RAX,RAX
/* 0e4e2242 */  JZ 0x0e4e2279
/* 0e4e2244 */  CMP dword ptr [RAX + 0x50],0xba234eda
/* 0e4e224b */  JNZ 0x0e4e2279
/* 0e4e224d */  MOV R14,qword ptr [RAX + 0x58]
/* 0e4e2251 */  TEST R14,R14
/* 0e4e2254 */  JZ 0x0e4e2279
/* 0e4e2256 */  ADD R14,0x40
/* 0e4e225a */  JMP 0x0e4e227c
/* 0e4e225c */  TEST RSI,RSI
/* 0e4e225f */  JZ 0x0e4e2279
/* 0e4e2261 */  CMP dword ptr [RSI + 0x60],0xd4c25870
/* 0e4e2268 */  JNZ 0x0e4e2279
/* 0e4e226a */  MOV R14,qword ptr [RSI + 0x68]
/* 0e4e226e */  TEST R14,R14
/* 0e4e2271 */  JZ 0x0e4e2279
/* 0e4e2273 */  ADD R14,0x38
/* 0e4e2277 */  JMP 0x0e4e227c
/* 0e4e2279 */  XOR R14D,R14D
/* 0e4e227c */  LEA RAX,[0x488e0b0]
/* 0e4e2283 */  MOV qword ptr [RSP + 0x10],RAX
/* 0e4e2288 */  MOV dword ptr [RSP + 0x20],0x48b5725f
/* 0e4e2290 */  MOV qword ptr [RSP + 0x18],0x0
/* 0e4e2299 */  MOV byte ptr [RSP + 0x24],0x0
/* 0e4e229e */  MOV qword ptr [RSP],0x0
/* 0e4e22a6 */  PXOR XMM0,XMM0
/* 0e4e22aa */  MOVDQA xmmword ptr [RSP + 0x70],XMM0
/* 0e4e22b0 */  MOV qword ptr [RSP + 0x88],RAX
/* 0e4e22b8 */  MOV qword ptr [RSP + 0x90],0x0
/* 0e4e22c4 */  MOV dword ptr [RSP + 0x98],0x48b5725f
/* 0e4e22cf */  MOV byte ptr [RSP + 0x9c],0x0
/* 0e4e22d7 */  LEA RDI,[0xf5463b0]
/* 0e4e22de */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e22e5 */  MOV ESI,0x20
/* 0e4e22ea */  CALL qword ptr [RAX + 0x10]
/* 0e4e22ed */  MOV R15,RAX
/* 0e4e22f0 */  TEST RAX,RAX
/* 0e4e22f3 */  JZ 0x0e4edd0f
/* 0e4e22f9 */  MOV qword ptr [RSP + 0x150],R15
/* 0e4e2301 */  MOV qword ptr [RSP + 0x140],0x21
/* 0e4e230d */  MOV qword ptr [RSP + 0x148],0x1a
/* 0e4e2319 */  MOVUPS XMM0,xmmword ptr [0x013bbad7]
/* 0e4e2320 */  MOVUPS xmmword ptr [R15 + 0xa],XMM0
/* 0e4e2325 */  MOVDQU XMM0,xmmword ptr [0x013bbacd]
/* 0e4e232d */  MOVDQU xmmword ptr [R15],XMM0
/* 0e4e2332 */  MOV byte ptr [R15 + 0x1a],0x0
/* 0e4e2337 */  LEA RSI,[RSP + 0x140]
/* 0e4e233f */  MOV RDI,R14
/* 0e4e2342 */  CALL 0x048b5060
/* 0e4e2347 */  MOV R15,RAX
/* 0e4e234a */  LEA R14,[RSP + 0x78]
/* 0e4e234f */  ADD RAX,0x20
/* 0e4e2353 */  MOV qword ptr [R15 + 0x20],0x0
/* 0e4e235b */  LEA RCX,[RSP + 0x70]
/* 0e4e2360 */  CMP RAX,RCX
/* 0e4e2363 */  JZ 0x0e4e239f
/* 0e4e2365 */  MOV RAX,qword ptr [R15 + 0x40]
/* 0e4e2369 */  TEST RAX,RAX
/* 0e4e236c */  JZ 0x0e4e23bf
/* 0e4e236e */  MOV R12,R15
/* 0e4e2371 */  ADD R12,0x28
/* 0e4e2375 */  MOV RDI,R12
/* 0e4e2378 */  CALL RAX
/* 0e4e237a */  MOVZX EAX,byte ptr [RSP + 0x9c]
/* 0e4e2382 */  TEST EAX,EAX
/* 0e4e2384 */  JZ 0x0e4e23bf
/* 0e4e2386 */  CMP EAX,0x2
/* 0e4e2389 */  JNZ 0x0e4e23ad
/* 0e4e238b */  MOV EDI,0x5
/* 0e4e2390 */  MOV RSI,R14
/* 0e4e2393 */  MOV RDX,R12
/* 0e4e2396 */  CALL qword ptr [RSP + 0x88]
/* 0e4e239d */  JMP 0x0e4e23bf
/* 0e4e239f */  XOR EAX,EAX
/* 0e4e23a1 */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e23a9 */  JNZ 0x0e4e23f7
/* 0e4e23ab */  JMP 0x0e4e2418
/* 0e4e23ad */  MOV RAX,qword ptr [RSP + 0x78]
/* 0e4e23b2 */  MOV qword ptr [RSP + 0x78],0x0
/* 0e4e23bb */  MOV qword ptr [R12],RAX
/* 0e4e23bf */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e23c7 */  MOVDQU XMM0,xmmword ptr [RSP + 0x88]
/* 0e4e23d0 */  MOVDQU xmmword ptr [R15 + 0x38],XMM0
/* 0e4e23d6 */  MOV ECX,dword ptr [RSP + 0x98]
/* 0e4e23dd */  MOV dword ptr [R15 + 0x48],ECX
/* 0e4e23e1 */  MOVZX ECX,byte ptr [RSP + 0x9c]
/* 0e4e23e9 */  MOV byte ptr [R15 + 0x4c],CL
/* 0e4e23ed */  TEST byte ptr [RSP + 0x140],0x1
/* 0e4e23f5 */  JZ 0x0e4e2418
/* 0e4e23f7 */  MOV RSI,qword ptr [RSP + 0x140]
/* 0e4e23ff */  MOV RDI,qword ptr [RSP + 0x150]
/* 0e4e2407 */  AND RSI,-0x2
/* 0e4e240b */  CALL 0x0412a280
/* 0e4e2410 */  MOV RAX,qword ptr [RSP + 0x90]
/* 0e4e2418 */  TEST RAX,RAX
/* 0e4e241b */  JZ 0x0e4e2422
/* 0e4e241d */  MOV RDI,R14
/* 0e4e2420 */  CALL RAX
/* 0e4e2422 */  MOV RAX,qword ptr [RSP + 0x18]
/* 0e4e2427 */  TEST RAX,RAX
/* 0e4e242a */  JZ 0x0e4e2431
/* 0e4e242c */  MOV RDI,RSP
/* 0e4e242f */  CALL RAX
/* 0e4e2431 */  MOV qword ptr [RSP + 0x140],R13
/* 0e4e2439 */  MOVDQA XMM0,xmmword ptr [RSP + 0x1c0]
/* 0e4e2442 */  MOVDQA XMM1,xmmword ptr [RSP + 0x1d0]
/* 0e4e244b */  MOVDQU xmmword ptr [RSP + 0x148],XMM0
/* 0e4e2454 */  MOVDQU xmmword ptr [RSP + 0x158],XMM1
/* 0e4e245d */  MOV dword ptr [RSP + 0x168],EBP
/* 0e4e2464 */  MOV dword ptr [RSP + 0x16c],EBX
/* 0e4e246b */  MOV RAX,qword ptr [RSP + 0x200]
/* 0e4e2473 */  MOV qword ptr [RSP + 0x170],RAX
/* 0e4e247b */  MOVZX EAX,byte ptr [0x0f75b410]
/* 0e4e2482 */  TEST AL,AL
/* 0e4e2484 */  JZ 0x0e4ee56d
/* 0e4e248a */  MOV RAX,-0x50943492ffffffff
/* 0e4e2494 */  MOV qword ptr [RSP + 0x168],RAX
/* 0e4e249c */  MOV R15,qword ptr [RSP + 0x140]
/* 0e4e24a4 */  MOVZX EAX,byte ptr [0x0f75b3f0]
/* 0e4e24ab */  TEST AL,AL
/* 0e4e24ad */  JZ 0x0e4ee597
/* 0e4e24b3 */  LEA R14,[RSP + 0x148]
/* 0e4e24bb */  LEA RAX,[R15 + 0x18]
/* 0e4e24bf */  MOV RCX,qword ptr [0x0f75b370]
/* 0e4e24c6 */  MOV ECX,dword ptr [RCX + 0x4]
/* 0e4e24c9 */  MOV RDX,qword ptr [R15 + 0x18]
/* 0e4e24cd */  MOV RSI,qword ptr [R15 + 0x20]
/* 0e4e24d1 */  SUB RSI,RDX
/* 0e4e24d4 */  SHR RSI,0x3
/* 0e4e24d8 */  MOV EDI,0xffffffff
/* 0e4e24dd */  ADD ESI,EDI
/* 0e4e24df */  AND ESI,ECX
/* 0e4e24e1 */  LEA RDX,[RDX + RSI*0x8]
/* 0e4e24e5 */  MOV RSI,qword ptr [R15 + 0x30]
/* 0e4e24e9 */  NOP dword ptr [RAX]
/* 0e4e24f0 */  MOV RDX,qword ptr [RDX]
/* 0e4e24f3 */  CMP RDX,-0x1
/* 0e4e24f7 */  JZ 0x0e4e2519
/* 0e4e24f9 */  LEA RDI,[RDX + RDX*0x2]
/* 0e4e24fd */  LEA RDX,[RSI + RDI*0x8]
/* 0e4e2501 */  CMP dword ptr [RSI + RDI*0x8 + 0x8],ECX
/* 0e4e2505 */  JNZ 0x0e4e24f0
/* 0e4e2507 */  MOV RCX,qword ptr [R15 + 0x38]
/* 0e4e250b */  CMP RDX,RCX
/* 0e4e250e */  JNZ 0x0e4e2525
/* 0e4e2510 */  LEA RCX,[0xf75b370]
/* 0e4e2517 */  JMP 0x0e4e2529
/* 0e4e2519 */  MOV RCX,qword ptr [R15 + 0x38]
/* 0e4e251d */  MOV RDX,RCX
/* 0e4e2520 */  CMP RDX,RCX
/* 0e4e2523 */  JZ 0x0e4e2510
/* 0e4e2525 */  MOV RCX,qword ptr [RDX + 0x10]
/* 0e4e2529 */  MOV qword ptr [RSP + 0x70],RCX
/* 0e4e252e */  MOV qword ptr [RSP + 0x78],RAX
/* 0e4e2533 */  MOV ESI,dword ptr [RSP + 0x16c]
/* 0e4e253a */  LEA RDI,[RSP + 0x70]
/* 0e4e253f */  CALL 0x0ed621a0
/* 0e4e2544 */  MOV word ptr [RSP + 0x70],0x1
/* 0e4e254b */  MOV qword ptr [RSP + 0x78],R14
/* 0e4e2550 */  MOV EAX,dword ptr [RSP + 0x16c]
/* 0e4e2557 */  MOV dword ptr [RSP + 0x80],EAX
/* 0e4e255e */  PXOR XMM0,XMM0
/* 0e4e2562 */  MOVDQU xmmword ptr [RSP + 0x88],XMM0
/* 0e4e256b */  MOVDQU xmmword ptr [RSP + 0x98],XMM0
/* 0e4e2574 */  MOV qword ptr [RSP + 0xa8],0x0
/* 0e4e2580 */  MOV byte ptr [RSP + 0xb0],0xc
/* 0e4e2588 */  MOV dword ptr [RSP + 0xb1],0x756f7267
/* 0e4e2593 */  MOV word ptr [RSP + 0xb5],0x7370
/* 0e4e259d */  MOV byte ptr [RSP + 0xb7],0x0
/* 0e4e25a5 */  LEA R15,[RSP + 0xc8]
/* 0e4e25ad */  MOVDQU xmmword ptr [RSP + 0xc8],XMM0
/* 0e4e25b6 */  MOVDQU xmmword ptr [RSP + 0xd8],XMM0
/* 0e4e25bf */  MOVDQU xmmword ptr [RSP + 0xe8],XMM0
/* 0e4e25c8 */  MOV dword ptr [RSP + 0xf8],0x3f600000
/* 0e4e25d3 */  MOV ESI,0x8
/* 0e4e25d8 */  MOV RDI,R15
/* 0e4e25db */  CALL 0x048afb10
/* 0e4e25e0 */  PXOR XMM0,XMM0
/* 0e4e25e4 */  MOVDQU xmmword ptr [RSP + 0x120],XMM0
/* 0e4e25ed */  MOVDQU xmmword ptr [RSP + 0x110],XMM0
/* 0e4e25f6 */  MOVDQU xmmword ptr [RSP + 0x100],XMM0
/* 0e4e25ff */  MOV word ptr [RSP + 0x130],0xff00
/* 0e4e2609 */  MOV byte ptr [RSP + 0x134],0x0
/* 0e4e2611 */  MOV byte ptr [RSP + 0x138],0x0
/* 0e4e2619 */  MOV byte ptr [RSP + 0x13c],0x0
/* 0e4e2621 */  LEA RDI,[0xf5463b0]
/* 0e4e2628 */  MOV RAX,qword ptr [0x0f5463b0]
/* 0e4e262f */  MOV ESI,0x8
/* 0e4e2634 */  CALL qword ptr [RAX + 0x10]
/* 0e4e2637 */  MOV R14,RAX
/* 0e4e263a */  TEST RAX,RAX
/* 0e4e263d */  JZ 0x0e4edade
/* 0e4e2643 */  LEA RAX,[0xf4c3c88]
/* 0e4e264a */  MOV qword ptr [R14],RAX
/* 0e4e264d */  MOV RDI,qword ptr [RSP + 0x88]
/* 0e4e2655 */  MOV qword ptr [RSP + 0x88],R14
/* 0e4e265d */  TEST RDI,RDI
/* 0e4e2660 */  JZ 0x0e4e2668
/* 0e4e2662 */  MOV RAX,qword ptr [RDI]
/* 0e4e2665 */  CALL qword ptr [RAX + 0x8]
/* 0e4e2668 */  MOV RDI,qword ptr [RSP + 0x78]
/* 0e4e266d */  MOV EAX,dword ptr [RSP + 0x80]
/* 0e4e2674 */  MOV dword ptr [RSP],EAX
/* 0e4e2677 */  MOV qword ptr [RSP + 0x8],0x0
/* 0e4e2680 */  MOV dword ptr [RSP + 0x10],0x0
/* 0e4e2688 */  MOV qword ptr [RSP + 0x18],0x1
/* 0e4e2691 */  MOV qword ptr [RSP + 0x20],0x0
/* 0e4e269a */  LEA RAX,[0xe63c160]
/* 0e4e26a1 */  MOV qword ptr [RSP + 0x28],RAX
/* 0e4e26a6 */  LEA RAX,[0x48b06d0]
/* 0e4e26ad */  MOV qword ptr [RSP + 0x30],RAX
/* 0e4e26b2 */  LEA RAX,[0xe63aa80]
/* 0e4e26b9 */  MOV qword ptr [RSP + 0x38],RAX
/* 0e4e26be */  LEA RAX,[0xe63c220]
/* 0e4e26c5 */  MOV qword ptr [RSP + 0x40],RAX
/* 0e4e26ca */  LEA RAX,[0xe63c3f0]
/* 0e4e26d1 */  MOV qword ptr [RSP + 0x48],RAX
/* 0e4e26d6 */  MOV dword ptr [RSP + 0x50],0x0
/* 0e4e26de */  PXOR XMM0,XMM0
/* 0e4e26e2 */  MOVDQU xmmword ptr [RSP + 0x58],XMM0
/* 0e4e26e8 */  MOV RSI,RSP
/* 0e4e26eb */  CALL 0x048b05a0
/* 0e4e26f0 */  MOV R14,qword ptr [RSP + 0x60]
/* 0e4e26f5 */  TEST R14,R14
; truncated
