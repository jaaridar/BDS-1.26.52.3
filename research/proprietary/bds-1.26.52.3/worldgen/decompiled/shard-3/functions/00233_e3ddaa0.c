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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
        func_0x048b0d20(auStack_7b8);
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
      func_0x0eec74c0(0x20,0);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(auStack_748);
    func_0x0e646de0(auStack_748,auStack_5f8,&UNK_012ba56c);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
    func_0x0e646de0(auStack_748,&pcStack_678,&UNK_011e9523);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(auStack_748);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
    puStack_780 = &UNK_048b2190;
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
    func_0x048b0bc0(&iStack_730);
    func_0x0e624b10(auStack_748,&pcStack_678,&UNK_0142cb75,6);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
    func_0x0e627530(auStack_748,&pcStack_678,&UNK_01446a5b,4);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
    puStack_780 = &UNK_048b2190;
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
    func_0x048b0bc0(&iStack_730);
    func_0x0e6294b0(auStack_748,&pcStack_678,&UNK_01438276,7);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
    func_0x0e631790(auStack_748,&pcStack_678,&UNK_01446a5b,4);
    puVar70 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,8);
    if (puVar70 == (undefined8 *)0x0) {
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_7b8._0_4_ = _DAT_0f550a0c;
    pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (pcVar57 == (code *)0x0) {
      func_0x0eec74c0(0xd0,0);
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
    func_0x048afd20(uVar64,auStack_7b8);
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
    func_0x048b0bc0(&iStack_730);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef46ce8;
    if ((DAT_0f551bc8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f551bc8), iVar52 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_748._0_4_ = _DAT_0f551bb4;
    puVar61 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar61 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
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
    func_0x048afd20(auStack_7b8,auStack_748);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
      func_0x0eec74c0(8,0);
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
    func_0x048b0bc0(&iStack_730);
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
    pauVar62 = (undefined1 (*) [16])FUN_0412f0e0(&bStack_5a8,0,&UNK_01284191,0xb);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x38,0);
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
        func_0x0eec74c0(0x20,0);
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
        func_0x048b46f0(0xf550750);
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
      func_0x0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef44b00;
    if ((DAT_0f551bc8 == '\0') && (iVar52 = func_0x04108328(&DAT_0f551bc8), iVar52 != 0)) {
      func_0x04905be0(0xf551bb0);
      func_0x0410844d(&DAT_0f551bc8);
    }
    auStack_748._0_4_ = _DAT_0f551bb4;
    puVar61 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
    if (puVar61 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x30,0);
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
    func_0x048afd20(&pcStack_678,auStack_748);
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
    pcStack_728 = (code *)&UNK_048b2190;
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
      func_0x0eec74c0(8,0);
    }
    *puVar70 = &UNK_0ef44b00;
    if ((DAT_0f551cb0 == '\0') && (iVar52 = func_0x04108328(&DAT_0f551cb0), iVar52 != 0)) {
      func_0x04905d10(0xf551c98);
      func_0x0410844d(&DAT_0f551cb0);
    }
    auStack_748._0_4_ = _DAT_0f551c9c;
    puVar61 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x28);
    if (puVar61 == (undefined8 *)0x0) {
      func_0x0eec74c0(0x28,0);
    }
    *(undefined1 (*) [16])(puVar61 + 1) = (undefined1  [16])0x0;
    *puVar61 = &UNK_0ef46c98;
    puVar61[3] = puVar70;
    *(undefined1 *)(puVar61 + 4) = 0xff;
    auStack_748._8_8_ = puVar61 + 3;
    uStack_738 = (uint)puVar61;
    uStack_734 = (undefined4)((ulong)puVar61 >> 0x20);
    auStack_5f8 = (undefined1  [16])0x0;
    func_0x048afd20(&pcStack_678,auStack_748);
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
          func_0x048b0d20(auStack_748);
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
        func_0x0eec74c0(0x20,0);
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
      func_0x0eec74c0(8,0);
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
      func_0x048b0af0(0xf550a08);
      func_0x0410844d(&DAT_0f550a20);
    }
    auStack_7b8._0_4_ = _DAT_0f550a0c;
    pcVar57 = (code *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0xd0);
    if (pcVar57 == (code *)0x0) {
      func_0x0eec74c0(0xd0,0);
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
    func_0x048afd20(uVar64,auStack_7b8);
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
    func_0x048b0bc0(&iStack_730);
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
  if (plVar60 == *(long **)(uStack_750 + 0x
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
