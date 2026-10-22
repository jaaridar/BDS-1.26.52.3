/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0x48e8d90 (ELF vaddr 0x47e8d90)
 * Label: caller-of-callee
 * Body:  [[048e8d90, 048e9392] [048e93a0, 048e949e] [048e94a0, 048e950d] [048e9510, 048e9833] [048e99bc, 048e9a44] [048e9aa8, 048e9ad0] [048e9afd, 048e9b24] [048e9b89, 048e9bb5] [048e9ce9, 048e9d99] [048e9dce, 048e9e0b] [048e9e10, 048ec88a] [048ec8da, 048ec8e5] [048ec8eb, 048ec8f9] [048ec998, 048ec9a9] [048ecb03, 048ecb1f] [048ecc57, 048eccc9]]
 * Ghidra: FUN_048e8d90
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_048e8d90(long *param_1,long param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  undefined1 uVar19;
  undefined2 uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  long *plVar25;
  ulong uVar26;
  undefined7 *puVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulong uVar31;
  ulong uVar32;
  ulong *puVar33;
  undefined7 *puVar34;
  long lVar35;
  long lVar36;
  long *in_FS_OFFSET;
  bool bVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined8 extraout_XMM0_Qb;
  byte bVar40;
  byte bVar43;
  byte bVar45;
  byte bVar47;
  byte bVar49;
  byte bVar51;
  byte bVar53;
  byte bVar55;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar56;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  byte bVar67;
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
  undefined1 auVar68 [16];
  undefined8 uVar84;
  undefined *puVar85;
  undefined1 auStack_14c8 [16];
  undefined8 *puStack_14b8;
  undefined1 uStack_14ac;
  undefined1 uStack_14ab;
  undefined1 uStack_14aa;
  byte bStack_14a9;
  ulong uStack_14a8;
  ulong uStack_14a0;
  undefined7 *puStack_1498;
  byte bStack_1488;
  undefined7 uStack_1487;
  ulong uStack_1480;
  undefined7 *puStack_1478;
  ulong auStack_1470 [2];
  undefined8 uStack_1460;
  ulong uStack_1458;
  byte *pbStack_1450;
  ulong *puStack_1448;
  uint uStack_143c;
  uint uStack_1438;
  undefined4 uStack_1434;
  int iStack_1430;
  int iStack_142c;
  ulong auStack_1428 [2];
  undefined8 uStack_1418;
  undefined2 uStack_140e;
  undefined1 uStack_140c;
  undefined2 uStack_140b;
  undefined1 uStack_1409;
  undefined1 auStack_1408 [16];
  byte bStack_13f8;
  undefined7 uStack_13f7;
  undefined2 uStack_13f0;
  undefined6 uStack_13ee;
  undefined2 uStack_13e8;
  undefined6 uStack_13e6;
  undefined2 uStack_13e0;
  char cStack_13b0;
  long lStack_1330;
  long lStack_1328;
  undefined *puStack_1320;
  uint uStack_1314;
  uint uStack_1310;
  int iStack_130c;
  ulong uStack_1308;
  ulong uStack_1300;
  ulong uStack_12f8;
  ulong uStack_12e8;
  ulong uStack_12e0;
  ulong uStack_12d8;
  ulong uStack_12c8;
  ulong uStack_12c0;
  undefined7 *puStack_12b8;
  undefined *puStack_12a8;
  undefined8 *puStack_12a0;
  ulong *puStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined *puStack_1280;
  float fStack_1278;
  undefined4 uStack_1274;
  undefined8 uStack_1270;
  long *plStack_1268;
  long lStack_1260;
  long lStack_1258;
  long lStack_1250;
  long lStack_1248;
  long lStack_1240;
  byte *pbStack_1238;
  long lStack_1230;
  long lStack_1228;
  long lStack_1220;
  long lStack_1218;
  long lStack_1210;
  byte *pbStack_1208;
  long lStack_1200;
  long lStack_11f8;
  undefined *puStack_11f0;
  undefined8 uStack_11e8;
  undefined *puStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  long lStack_11c8;
  long lStack_11c0;
  undefined8 uStack_11b8;
  undefined1 auStack_11b0 [16];
  undefined1 auStack_11a0 [16];
  undefined *puStack_1190;
  ulong uStack_1188;
  undefined *apuStack_1180 [2];
  byte abStack_1170 [8];
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  ulong uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined4 uStack_1118;
  undefined *puStack_1110;
  undefined8 uStack_1108;
  undefined4 auStack_1100 [8];
  undefined8 uStack_10e0;
  undefined8 uStack_1078;
  undefined *puStack_1070;
  undefined8 uStack_1068;
  undefined4 uStack_1060;
  undefined8 uStack_1058;
  undefined *puStack_1050;
  undefined8 uStack_1048;
  undefined4 uStack_1040;
  char acStack_1038 [4104];
  char cVar44;
  char cVar46;
  char cVar48;
  char cVar50;
  char cVar52;
  char cVar54;
  
  iVar22 = *(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20);
  if (iVar22 == 0) {
    pbStack_1208 = (byte *)(param_2 + 0x3a0);
    if (*(char *)(param_2 + 0x3b8) == '\x01') {
      if ((*pbStack_1208 & 1) == 0) {
        *(undefined1 *)(param_2 + 0x3a0) = 0x12;
        puVar28 = (undefined8 *)(param_2 + 0x3a1);
      }
      else {
        *(undefined8 *)(param_2 + 0x3a8) = 9;
        puVar28 = *(undefined8 **)(param_2 + 0x3b0);
      }
      *puVar28 = 0x2e302e302e373231;
      *(undefined2 *)(puVar28 + 1) = 0x31;
    }
    else {
      *(undefined1 *)(param_2 + 0x3a0) = 0x12;
      *(undefined8 *)(param_2 + 0x3a1) = 0x2e302e302e373231;
      *(undefined2 *)(param_2 + 0x3a9) = 0x31;
      *(undefined1 *)(param_2 + 0x3b8) = 1;
    }
    *(byte *)(param_2 + 0x128) = *(byte *)(param_2 + 0x128) | 7;
    iStack_130c = iVar22;
    func_0x04863060(auStack_11a0,7);
    func_0x0eee2dd0(acStack_1038,0,0x1000);
    lStack_1210 = param_2 + 0x160;
    lStack_1218 = param_2 + 0x510;
    puStack_12a0 = (undefined8 *)(param_2 + 0xe8);
    lStack_1328 = param_2 + 0x4a0;
    lStack_1220 = param_2 + 0x4b8;
    lStack_1228 = param_2 + 0x488;
    lStack_1230 = param_2 + 0x470;
    pbStack_1238 = (byte *)(param_2 + 0x3c0);
    lStack_1240 = param_2 + 0x378;
    lStack_1248 = param_2 + 0x100;
    lStack_1250 = param_2 + 0x550;
    lStack_1258 = param_2 + 0x80;
    lStack_1200 = param_2 + 0xa0;
    lStack_11f8 = param_2 + 0x60;
    puStack_1298 = (ulong *)(param_2 + 0x18);
    puStack_1448 = (ulong *)(param_2 + 0x38);
    puStack_11e0 = _UNK_0eeed4d8;
    lStack_11c0 = _UNK_0eeed4e0;
    uStack_11e8 = _UNK_0eeed518;
    puStack_11f0 = _UNK_0eeed520;
    uStack_11b8 = _UNK_0eeed4f0;
    lStack_11c8 = _UNK_0eeed4f8;
    uStack_11d0 = _UNK_0eeed500;
    uStack_11d8 = _UNK_0eeed508;
    lStack_1330 = *in_FS_OFFSET;
    lStack_1260 = lStack_1330 + -0xa40;
    uStack_14aa = 1;
    iStack_142c = 0xfa;
    iStack_1430 = 100;
    uStack_1434 = 10000;
    puStack_1320 = &UNK_0eeece20;
    puStack_1280 = &UNK_0eeed150;
    uStack_14ab = 1;
    uStack_14ac = 1;
    bStack_14a9 = 1;
    uStack_1290 = 0;
    uStack_1288 = 0;
    uStack_1438 = 0;
    uStack_143c = 0;
    puVar85 = _UNK_0eeed4e8;
    while( true ) {
      func_0x041442d0(&puStack_1190,*(long *)(*param_1 + -0x18) + (long)param_1);
      plVar25 = (long *)func_0x041681f0(&puStack_1190,0xf547a30);
      cVar17 = (**(code **)(*plVar25 + 0x38))(plVar25,10);
      func_0x04167a40(&puStack_1190);
      plVar25 = (long *)func_0x0413a290(param_1,acStack_1038,0x1000,(int)cVar17);
      if ((*(byte *)((long)plVar25 + *(long *)(*plVar25 + -0x18) + 0x20) & 5) != 0) break;
      if (((acStack_1038[0] != ' ') && (acStack_1038[0] != '#')) &&
         (uVar26 = strlen(acStack_1038), 1 < uVar26)) {
        if (0xfffffffffffffff7 < uVar26) {
LAB_048ec862:
          func_0x04882e30();
          goto LAB_048ec867;
        }
        plStack_1268 = param_1;
        if (uVar26 < 0x17) {
          bStack_13f8 = (char)uVar26 * '\x02';
          puVar27 = &uStack_13f7;
        }
        else {
          lVar35 = (uVar26 | 7) + 1;
          if ((uVar26 | 7) == 0x17) {
            lVar35 = 0x1a;
          }
          puVar27 = (undefined7 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,lVar35);
          if (puVar27 == (undefined7 *)0x0) {
            FUN_0eec74c0(lVar35,0);
          }
          uStack_13e8 = SUB82(puVar27,0);
          uStack_13e6 = (undefined6)((ulong)puVar27 >> 0x10);
          bStack_13f8 = (byte)lVar35 | 1;
          uStack_13f7 = (undefined7)((ulong)lVar35 >> 8);
          uStack_13f0 = (undefined2)uVar26;
          uStack_13ee = (undefined6)(uVar26 >> 0x10);
        }
        func_0x0eee2f00(puVar27,acStack_1038,uVar26);
        *(undefined1 *)((long)puVar27 + uVar26) = 0;
        uStack_10e0 = 0;
        puStack_1110 = &UNK_0eeed4c8;
        apuStack_1180[0] = &UNK_0eeed4a0;
        puStack_1190 = puVar85;
        *(undefined8 *)((long)&puStack_1190 + *(long *)(puVar85 + -0x18)) = uStack_11b8;
        uStack_1188 = 0;
        lVar35 = *(long *)(puStack_1190 + -0x18);
        puStack_12a8 = puVar85;
        func_0x04144780((long)&puStack_1190 + lVar35,apuStack_1180 + 1);
        *(undefined8 *)((long)&uStack_1108 + lVar35) = 0;
        *(undefined4 *)((long)auStack_1100 + lVar35) = 0xffffffff;
        *(undefined8 *)((long)apuStack_1180 + *(long *)(lStack_11c8 + -0x18)) = uStack_11d0;
        *(undefined8 *)((long)&puStack_1190 + *(long *)(lStack_11c0 + -0x18)) = uStack_11d8;
        puStack_1190 = &UNK_0eeed478;
        puStack_1110 = &UNK_0eeed4c8;
        apuStack_1180[0] = &UNK_0eeed4a0;
        apuStack_1180[1] = puStack_1320;
        func_0x041679a0(abStack_1170);
        uStack_1148 = 0;
        uStack_1140 = 0;
        uStack_1158 = 0;
        uStack_1150 = 0;
        uStack_1168 = 0;
        uStack_1160 = 0;
        apuStack_1180[1] = puStack_1280;
        uStack_1128 = CONCAT62(uStack_13e6,uStack_13e8);
        uStack_1138 = CONCAT71(uStack_13f7,bStack_13f8);
        uStack_1130 = CONCAT62(uStack_13ee,uStack_13f0);
        uStack_1120 = 0;
        uStack_1118 = 0x18;
        func_0x04141a10(apuStack_1180 + 1);
        param_1 = plStack_1268;
        puVar85 = puStack_12a8;
        auStack_14c8 = (undefined1  [16])0x0;
        puStack_14b8 = (undefined8 *)0x0;
        do {
          if ((abStack_1170[*(long *)(puStack_1190 + -0x18)] & 2) != 0) break;
          bStack_13f8 = 0;
          uStack_13f7 = 0;
          uStack_13f0 = 0;
          uStack_13ee = 0;
          uStack_13e8 = 0;
          uStack_13e6 = 0;
          func_0x048eccd0(&puStack_1190,&bStack_13f8,0x3d);
          bVar37 = (bStack_13f8 & 1) == 0;
          puVar27 = (undefined7 *)CONCAT62(uStack_13e6,uStack_13e8);
          puVar34 = puVar27;
          if (bVar37) {
            puVar34 = &uStack_13f7;
          }
          uVar26 = (ulong)(bStack_13f8 >> 1);
          if (!bVar37) {
            uVar26 = CONCAT62(uStack_13ee,uStack_13f0);
          }
          uVar31 = uVar26 + 1;
          do {
            if (uVar31 == 1) {
              uVar31 = 0;
              goto joined_r0x048e94a6;
            }
            bVar18 = *(byte *)((long)puVar34 + (uVar31 - 2));
            uVar31 = uVar31 - 1;
          } while ((bVar18 < 0x40) && ((1L << (bVar18 & 0x3f) & 0x100002600U) != 0));
          if (uVar26 < uVar31) {
            func_0x04882ee0();
            goto LAB_048ec862;
          }
joined_r0x048e94a6:
          if ((bStack_13f8 & 1) == 0) {
            bStack_13f8 = (char)uVar31 * '\x02';
            puVar27 = &uStack_13f7;
          }
          else {
            uStack_13f0 = (undefined2)uVar31;
            uStack_13ee = (undefined6)(uVar31 >> 0x10);
          }
          *(undefined1 *)((long)puVar27 + uVar31) = 0;
          bVar18 = bStack_13f8 & 1;
          uVar26 = (ulong)(bStack_13f8 >> 1);
          if (bVar18 != 0) {
            uVar26 = CONCAT62(uStack_13ee,uStack_13f0);
          }
          if (uVar26 != 0) {
            uVar84 = auStack_14c8._8_8_;
            if ((ulong)auStack_14c8._8_8_ < puStack_14b8) {
              if (bVar18 == 0) {
                *(ulong *)(auStack_14c8._8_8_ + 0x10) = CONCAT62(uStack_13e6,uStack_13e8);
                *(ulong *)auStack_14c8._8_8_ = CONCAT71(uStack_13f7,bStack_13f8);
                *(ulong *)(auStack_14c8._8_8_ + 8) = CONCAT62(uStack_13ee,uStack_13f0);
              }
              else {
                func_0x0412e5e0(auStack_14c8._8_8_,CONCAT62(uStack_13e6,uStack_13e8));
              }
              puVar28 = (undefined8 *)(uVar84 + 0x18);
            }
            else {
              puVar28 = (undefined8 *)func_0x04909a40(auStack_14c8,&bStack_13f8);
            }
            auStack_14c8._8_8_ = puVar28;
            bVar18 = bStack_13f8 & 1;
          }
          if (bVar18 != 0) {
            func_0x0412a280(CONCAT62(uStack_13e6,uStack_13e8),
                            CONCAT71(uStack_13f7,bStack_13f8) & 0xfffffffffffffffe);
          }
        } while (uVar26 != 0);
        if (1 < (ulong)(((long)(auStack_14c8._8_8_ - auStack_14c8._0_8_) >> 3) * -0x5555555555555555
                       )) {
          bVar18 = *(byte *)auStack_14c8._0_8_;
          if ((bVar18 & 1) == 0) {
            if (bVar18 >> 1 == 0x15) goto LAB_048e95ac;
          }
          else if (*(long *)(auStack_14c8._0_8_ + 8) == 0x15) {
LAB_048e95ac:
            if ((bVar18 & 1) == 0) {
              pbVar29 = (byte *)(auStack_14c8._0_8_ + 1);
            }
            else {
              pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x10);
            }
            auVar59[0] = -(*pbVar29 == DAT_014e8cc0);
            auVar59[1] = -(pbVar29[1] == UNK_014e8cc1);
            auVar59[2] = -(pbVar29[2] == UNK_014e8cc2);
            auVar59[3] = -(pbVar29[3] == UNK_014e8cc3);
            auVar59[4] = -(pbVar29[4] == UNK_014e8cc4);
            auVar59[5] = -(pbVar29[5] == UNK_014e8cc5);
            auVar59[6] = -(pbVar29[6] == UNK_014e8cc6);
            auVar59[7] = -(pbVar29[7] == UNK_014e8cc7);
            auVar59[8] = -(pbVar29[8] == UNK_014e8cc8);
            auVar59[9] = -(pbVar29[9] == UNK_014e8cc9);
            auVar59[10] = -(pbVar29[10] == UNK_014e8cca);
            auVar59[0xb] = -(pbVar29[0xb] == UNK_014e8ccb);
            auVar59[0xc] = -(pbVar29[0xc] == UNK_014e8ccc);
            auVar59[0xd] = -(pbVar29[0xd] == UNK_014e8ccd);
            auVar59[0xe] = -(pbVar29[0xe] == UNK_014e8cce);
            auVar59[0xf] = -(pbVar29[0xf] == UNK_014e8ccf);
            auVar41[0] = -(pbVar29[5] == DAT_014e7c60);
            auVar41[1] = -(pbVar29[6] == UNK_014e7c61);
            auVar41[2] = -(pbVar29[7] == UNK_014e7c62);
            auVar41[3] = -(pbVar29[8] == UNK_014e7c63);
            auVar41[4] = -(pbVar29[9] == UNK_014e7c64);
            auVar41[5] = -(pbVar29[10] == UNK_014e7c65);
            auVar41[6] = -(pbVar29[0xb] == UNK_014e7c66);
            auVar41[7] = -(pbVar29[0xc] == UNK_014e7c67);
            auVar41[8] = -(pbVar29[0xd] == UNK_014e7c68);
            auVar41[9] = -(pbVar29[0xe] == UNK_014e7c69);
            auVar41[10] = -(pbVar29[0xf] == UNK_014e7c6a);
            auVar41[0xb] = -(pbVar29[0x10] == UNK_014e7c6b);
            auVar41[0xc] = -(pbVar29[0x11] == UNK_014e7c6c);
            auVar41[0xd] = -(pbVar29[0x12] == UNK_014e7c6d);
            auVar41[0xe] = -(pbVar29[0x13] == UNK_014e7c6e);
            auVar41[0xf] = -(pbVar29[0x14] == UNK_014e7c6f);
            auVar41 = auVar41 & auVar59;
            if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar41[0xf] >> 7) << 0xf) == 0xffff) goto LAB_048e9df3;
          }
          bVar37 = (*(byte *)(auStack_14c8._0_8_ + 0x18) & 1) != 0;
          pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
          if (bVar37) {
            pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28);
          }
          uVar26 = (ulong)(*(byte *)(auStack_14c8._0_8_ + 0x18) >> 1);
          if (bVar37) {
            uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20);
          }
          if (0xfffffffffffffff7 < uVar26) {
LAB_048ec867:
            uVar84 = func_0x04882e30();
            if ((bStack_1488 & 1) != 0) {
              func_0x0412a280(puStack_1478,CONCAT71(uStack_1487,bStack_1488) & 0xfffffffffffffffe);
            }
            func_0x04886070(&uStack_14a8);
            func_0x04863610(auStack_1470);
            func_0x0485e2d0(&bStack_13f8);
            if ((uStack_1460 & 1) != 0) {
              func_0x0412a280(pbStack_1450,uStack_1460 & 0xfffffffffffffffe);
            }
            func_0x04886070(auStack_14c8);
            func_0x04143680(&puStack_1190);
            func_0x04863610(auStack_11a0);
            uVar84 = func_0x0eee2d70(uVar84);
            func_0x04167a40(&puStack_1190);
            func_0x04863610(auStack_11a0);
            uVar84 = func_0x0eee2d70(uVar84);
            func_0x04863610(auStack_11a0);
            func_0x0eee2d70(uVar84);
            pcVar2 = (code *)swi(3);
            uVar19 = (*pcVar2)();
            return (bool)uVar19;
          }
          if (uVar26 < 0x17) {
            uStack_1460 = CONCAT71(uStack_1460._1_7_,(char)uVar26 * '\x02');
            pbVar30 = (byte *)((long)&uStack_1460 + 1);
            if (uVar26 != 0) goto LAB_048e9678;
          }
          else {
            uVar31 = (uVar26 | 7) + 1;
            if ((uVar26 | 7) == 0x17) {
              uVar31 = 0x1a;
            }
            pbVar30 = (byte *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar31);
            if (pbVar30 == (byte *)0x0) {
              FUN_0eec74c0(uVar31,0);
            }
            uStack_1460 = uVar31 | 1;
            uStack_1458 = uVar26;
            pbStack_1450 = pbVar30;
LAB_048e9678:
            func_0x0eee2f00(pbVar30,pbVar29,uVar26);
          }
          pbVar30[uVar26] = 0;
          uVar26 = uStack_1460 >> 1 & 0x7f;
          pbVar29 = (byte *)((long)&uStack_1460 + 1);
          if ((uStack_1460 & 1) != 0) {
            uVar26 = uStack_1458;
            pbVar29 = pbStack_1450;
          }
          if (uVar26 != 0) {
            pbVar30 = pbVar29;
            if (7 < uVar26) {
              if (uVar26 < 0x20) {
                uVar31 = 0;
              }
              else {
                uVar31 = uVar26 & 0xffffffffffffffe0;
                uVar32 = 0;
                do {
                  pbVar30 = pbVar29 + uVar32;
                  bVar18 = pbVar30[1];
                  bVar3 = pbVar30[2];
                  bVar4 = pbVar30[3];
                  bVar5 = pbVar30[4];
                  bVar6 = pbVar30[5];
                  bVar7 = pbVar30[6];
                  bVar8 = pbVar30[7];
                  bVar9 = pbVar30[8];
                  bVar10 = pbVar30[9];
                  bVar11 = pbVar30[10];
                  bVar12 = pbVar30[0xb];
                  bVar13 = pbVar30[0xc];
                  bVar14 = pbVar30[0xd];
                  bVar15 = pbVar30[0xe];
                  bVar16 = pbVar30[0xf];
                  pbVar1 = pbVar29 + uVar32 + 0x10;
                  bVar56 = *pbVar30 + DAT_014e86b0;
                  bVar40 = bVar18 + UNK_014e86b1;
                  bVar43 = bVar3 + UNK_014e86b2;
                  bVar45 = bVar4 + UNK_014e86b3;
                  bVar47 = bVar5 + UNK_014e86b4;
                  bVar49 = bVar6 + UNK_014e86b5;
                  bVar51 = bVar7 + UNK_014e86b6;
                  bVar53 = bVar8 + UNK_014e86b7;
                  bVar55 = bVar9 + UNK_014e86b8;
                  bVar60 = bVar10 + UNK_014e86b9;
                  bVar61 = bVar11 + UNK_014e86ba;
                  bVar62 = bVar12 + UNK_014e86bb;
                  bVar63 = bVar13 + UNK_014e86bc;
                  bVar64 = bVar14 + UNK_014e86bd;
                  bVar65 = bVar15 + UNK_014e86be;
                  bVar66 = bVar16 + UNK_014e86bf;
                  bVar67 = *pbVar1 + DAT_014e86b0;
                  bVar69 = pbVar1[1] + UNK_014e86b1;
                  bVar70 = pbVar1[2] + UNK_014e86b2;
                  bVar71 = pbVar1[3] + UNK_014e86b3;
                  bVar72 = pbVar1[4] + UNK_014e86b4;
                  bVar73 = pbVar1[5] + UNK_014e86b5;
                  bVar74 = pbVar1[6] + UNK_014e86b6;
                  bVar75 = pbVar1[7] + UNK_014e86b7;
                  bVar76 = pbVar1[8] + UNK_014e86b8;
                  bVar77 = pbVar1[9] + UNK_014e86b9;
                  bVar78 = pbVar1[10] + UNK_014e86ba;
                  bVar79 = pbVar1[0xb] + UNK_014e86bb;
                  bVar80 = pbVar1[0xc] + UNK_014e86bc;
                  bVar81 = pbVar1[0xd] + UNK_014e86bd;
                  bVar82 = pbVar1[0xe] + UNK_014e86be;
                  bVar83 = pbVar1[0xf] + UNK_014e86bf;
                  auVar57[0] = (-((byte)((DAT_014e4170 < bVar67) * DAT_014e4170 |
                                        (DAT_014e4170 >= bVar67) * bVar67) == bVar67) & DAT_014ead50
                               ) + *pbVar1;
                  auVar57[1] = (-((byte)((UNK_014e4171 < bVar69) * UNK_014e4171 |
                                        (UNK_014e4171 >= bVar69) * bVar69) == bVar69) & UNK_014ead51
                               ) + pbVar1[1];
                  auVar57[2] = (-((byte)((UNK_014e4172 < bVar70) * UNK_014e4172 |
                                        (UNK_014e4172 >= bVar70) * bVar70) == bVar70) & UNK_014ead52
                               ) + pbVar1[2];
                  auVar57[3] = (-((byte)((UNK_014e4173 < bVar71) * UNK_014e4173 |
                                        (UNK_014e4173 >= bVar71) * bVar71) == bVar71) & UNK_014ead53
                               ) + pbVar1[3];
                  auVar57[4] = (-((byte)((UNK_014e4174 < bVar72) * UNK_014e4174 |
                                        (UNK_014e4174 >= bVar72) * bVar72) == bVar72) & UNK_014ead54
                               ) + pbVar1[4];
                  auVar57[5] = (-((byte)((UNK_014e4175 < bVar73) * UNK_014e4175 |
                                        (UNK_014e4175 >= bVar73) * bVar73) == bVar73) & UNK_014ead55
                               ) + pbVar1[5];
                  auVar57[6] = (-((byte)((UNK_014e4176 < bVar74) * UNK_014e4176 |
                                        (UNK_014e4176 >= bVar74) * bVar74) == bVar74) & UNK_014ead56
                               ) + pbVar1[6];
                  auVar57[7] = (-((byte)((UNK_014e4177 < bVar75) * UNK_014e4177 |
                                        (UNK_014e4177 >= bVar75) * bVar75) == bVar75) & UNK_014ead57
                               ) + pbVar1[7];
                  auVar57[8] = (-((byte)((UNK_014e4178 < bVar76) * UNK_014e4178 |
                                        (UNK_014e4178 >= bVar76) * bVar76) == bVar76) & UNK_014ead58
                               ) + pbVar1[8];
                  auVar57[9] = (-((byte)((UNK_014e4179 < bVar77) * UNK_014e4179 |
                                        (UNK_014e4179 >= bVar77) * bVar77) == bVar77) & UNK_014ead59
                               ) + pbVar1[9];
                  auVar57[10] = (-((byte)((UNK_014e417a < bVar78) * UNK_014e417a |
                                         (UNK_014e417a >= bVar78) * bVar78) == bVar78) &
                                UNK_014ead5a) + pbVar1[10];
                  auVar57[0xb] = (-((byte)((UNK_014e417b < bVar79) * UNK_014e417b |
                                          (UNK_014e417b >= bVar79) * bVar79) == bVar79) &
                                 UNK_014ead5b) + pbVar1[0xb];
                  auVar57[0xc] = (-((byte)((UNK_014e417c < bVar80) * UNK_014e417c |
                                          (UNK_014e417c >= bVar80) * bVar80) == bVar80) &
                                 UNK_014ead5c) + pbVar1[0xc];
                  auVar57[0xd] = (-((byte)((UNK_014e417d < bVar81) * UNK_014e417d |
                                          (UNK_014e417d >= bVar81) * bVar81) == bVar81) &
                                 UNK_014ead5d) + pbVar1[0xd];
                  auVar57[0xe] = (-((byte)((UNK_014e417e < bVar82) * UNK_014e417e |
                                          (UNK_014e417e >= bVar82) * bVar82) == bVar82) &
                                 UNK_014ead5e) + pbVar1[0xe];
                  auVar57[0xf] = (-((byte)((UNK_014e417f < bVar83) * UNK_014e417f |
                                          (UNK_014e417f >= bVar83) * bVar83) == bVar83) &
                                 UNK_014ead5f) + pbVar1[0xf];
                  pbVar1 = pbVar29 + uVar32;
                  *pbVar1 = (-((byte)((DAT_014e4170 < bVar56) * DAT_014e4170 |
                                     (DAT_014e4170 >= bVar56) * bVar56) == bVar56) & DAT_014ead50) +
                            *pbVar30;
                  pbVar1[1] = (-((byte)((UNK_014e4171 < bVar40) * UNK_014e4171 |
                                       (UNK_014e4171 >= bVar40) * bVar40) == bVar40) & UNK_014ead51)
                              + bVar18;
                  pbVar1[2] = (-((byte)((UNK_014e4172 < bVar43) * UNK_014e4172 |
                                       (UNK_014e4172 >= bVar43) * bVar43) == bVar43) & UNK_014ead52)
                              + bVar3;
                  pbVar1[3] = (-((byte)((UNK_014e4173 < bVar45) * UNK_014e4173 |
                                       (UNK_014e4173 >= bVar45) * bVar45) == bVar45) & UNK_014ead53)
                              + bVar4;
                  pbVar1[4] = (-((byte)((UNK_014e4174 < bVar47) * UNK_014e4174 |
                                       (UNK_014e4174 >= bVar47) * bVar47) == bVar47) & UNK_014ead54)
                              + bVar5;
                  pbVar1[5] = (-((byte)((UNK_014e4175 < bVar49) * UNK_014e4175 |
                                       (UNK_014e4175 >= bVar49) * bVar49) == bVar49) & UNK_014ead55)
                              + bVar6;
                  pbVar1[6] = (-((byte)((UNK_014e4176 < bVar51) * UNK_014e4176 |
                                       (UNK_014e4176 >= bVar51) * bVar51) == bVar51) & UNK_014ead56)
                              + bVar7;
                  pbVar1[7] = (-((byte)((UNK_014e4177 < bVar53) * UNK_014e4177 |
                                       (UNK_014e4177 >= bVar53) * bVar53) == bVar53) & UNK_014ead57)
                              + bVar8;
                  pbVar1[8] = (-((byte)((UNK_014e4178 < bVar55) * UNK_014e4178 |
                                       (UNK_014e4178 >= bVar55) * bVar55) == bVar55) & UNK_014ead58)
                              + bVar9;
                  pbVar1[9] = (-((byte)((UNK_014e4179 < bVar60) * UNK_014e4179 |
                                       (UNK_014e4179 >= bVar60) * bVar60) == bVar60) & UNK_014ead59)
                              + bVar10;
                  pbVar1[10] = (-((byte)((UNK_014e417a < bVar61) * UNK_014e417a |
                                        (UNK_014e417a >= bVar61) * bVar61) == bVar61) & UNK_014ead5a
                               ) + bVar11;
                  pbVar1[0xb] = (-((byte)((UNK_014e417b < bVar62) * UNK_014e417b |
                                         (UNK_014e417b >= bVar62) * bVar62) == bVar62) &
                                UNK_014ead5b) + bVar12;
                  pbVar1[0xc] = (-((byte)((UNK_014e417c < bVar63) * UNK_014e417c |
                                         (UNK_014e417c >= bVar63) * bVar63) == bVar63) &
                                UNK_014ead5c) + bVar13;
                  pbVar1[0xd] = (-((byte)((UNK_014e417d < bVar64) * UNK_014e417d |
                                         (UNK_014e417d >= bVar64) * bVar64) == bVar64) &
                                UNK_014ead5d) + bVar14;
                  pbVar1[0xe] = (-((byte)((UNK_014e417e < bVar65) * UNK_014e417e |
                                         (UNK_014e417e >= bVar65) * bVar65) == bVar65) &
                                UNK_014ead5e) + bVar15;
                  pbVar1[0xf] = (-((byte)((UNK_014e417f < bVar66) * UNK_014e417f |
                                         (UNK_014e417f >= bVar66) * bVar66) == bVar66) &
                                UNK_014ead5f) + bVar16;
                  *(undefined1 (*) [16])(pbVar29 + uVar32 + 0x10) = auVar57;
                  uVar32 = uVar32 + 0x20;
                } while (uVar31 != uVar32);
                if (uVar26 == uVar31) goto LAB_048e97fd;
                if ((uVar26 & 0x18) == 0) {
                  pbVar30 = pbVar29 + uVar31;
                  goto LAB_048e97dc;
                }
              }
              uVar32 = uVar26 & 0xfffffffffffffff8;
              pbVar30 = pbVar29 + uVar32;
              do {
                uVar84 = *(undefined8 *)(pbVar29 + uVar31);
                bVar40 = (char)uVar84 + DAT_014e9110;
                cVar44 = (char)((ulong)uVar84 >> 8);
                bVar43 = cVar44 + DAT_014e9110._1_1_;
                cVar46 = (char)((ulong)uVar84 >> 0x10);
                bVar45 = cVar46 + DAT_014e9110._2_1_;
                cVar48 = (char)((ulong)uVar84 >> 0x18);
                bVar47 = cVar48 + DAT_014e9110._3_1_;
                cVar50 = (char)((ulong)uVar84 >> 0x20);
                bVar49 = cVar50 + DAT_014e9110._4_1_;
                cVar52 = (char)((ulong)uVar84 >> 0x28);
                bVar51 = cVar52 + DAT_014e9110._5_1_;
                cVar54 = (char)((ulong)uVar84 >> 0x30);
                cVar17 = (char)((ulong)uVar84 >> 0x38);
                bVar53 = cVar54 + DAT_014e9110._6_1_;
                bVar55 = cVar17 + DAT_014e9110._7_1_;
                bVar60 = DAT_014e9110._8_1_;
                bVar61 = DAT_014e9110._9_1_;
                bVar62 = DAT_014e9110._10_1_;
                bVar63 = DAT_014e9110._11_1_;
                bVar64 = DAT_014e9110._12_1_;
                bVar65 = DAT_014e9110._13_1_;
                bVar66 = DAT_014e9110._14_1_;
                bVar67 = DAT_014e9110._15_1_;
                bVar18 = DAT_014e8cb0;
                bVar3 = DAT_014e8cb0._1_1_;
                bVar4 = DAT_014e8cb0._2_1_;
                bVar5 = DAT_014e8cb0._3_1_;
                bVar6 = DAT_014e8cb0._4_1_;
                bVar7 = DAT_014e8cb0._5_1_;
                bVar8 = DAT_014e8cb0._6_1_;
                bVar9 = DAT_014e8cb0._7_1_;
                bVar10 = DAT_014e8cb0._8_1_;
                bVar11 = DAT_014e8cb0._9_1_;
                bVar12 = DAT_014e8cb0._10_1_;
                bVar13 = DAT_014e8cb0._11_1_;
                bVar14 = DAT_014e8cb0._12_1_;
                bVar15 = DAT_014e8cb0._13_1_;
                bVar16 = DAT_014e8cb0._14_1_;
                bVar56 = DAT_014e8cb0._15_1_;
                auVar58[0] = -((byte)((bVar40 < bVar18) * bVar18 | (bVar40 >= bVar18) * bVar40) ==
                              bVar40);
                auVar58[1] = -((byte)((bVar43 < bVar3) * bVar3 | (bVar43 >= bVar3) * bVar43) ==
                              bVar43);
                auVar58[2] = -((byte)((bVar45 < bVar4) * bVar4 | (bVar45 >= bVar4) * bVar45) ==
                              bVar45);
                auVar58[3] = -((byte)((bVar47 < bVar5) * bVar5 | (bVar47 >= bVar5) * bVar47) ==
                              bVar47);
                auVar58[4] = -((byte)((bVar49 < bVar6) * bVar6 | (bVar49 >= bVar6) * bVar49) ==
                              bVar49);
                auVar58[5] = -((byte)((bVar51 < bVar7) * bVar7 | (bVar51 >= bVar7) * bVar51) ==
                              bVar51);
                auVar58[6] = -((byte)((bVar53 < bVar8) * bVar8 | (bVar53 >= bVar8) * bVar53) ==
                              bVar53);
                auVar58[7] = -((byte)((bVar55 < bVar9) * bVar9 | (bVar55 >= bVar9) * bVar55) ==
                              bVar55);
                auVar58[8] = -((byte)((bVar60 < bVar10) * bVar10 | (bVar60 >= bVar10) * bVar60) ==
                              bVar60);
                auVar58[9] = -((byte)((bVar61 < bVar11) * bVar11 | (bVar61 >= bVar11) * bVar61) ==
                              bVar61);
                auVar58[10] = -((byte)((bVar62 < bVar12) * bVar12 | (bVar62 >= bVar12) * bVar62) ==
                               bVar62);
                auVar58[0xb] = -((byte)((bVar63 < bVar13) * bVar13 | (bVar63 >= bVar13) * bVar63) ==
                                bVar63);
                auVar58[0xc] = -((byte)((bVar64 < bVar14) * bVar14 | (bVar64 >= bVar14) * bVar64) ==
                                bVar64);
                auVar58[0xd] = -((byte)((bVar65 < bVar15) * bVar15 | (bVar65 >= bVar15) * bVar65) ==
                                bVar65);
                auVar58[0xe] = -((byte)((bVar66 < bVar16) * bVar16 | (bVar66 >= bVar16) * bVar66) ==
                                bVar66);
                auVar58[0xf] = -((byte)((bVar67 < bVar56) * bVar56 | (bVar67 >= bVar56) * bVar67) ==
                                bVar67);
                auVar59 = ~auVar58 & _DAT_014ea360;
                *(ulong *)(pbVar29 + uVar31) =
                     CONCAT17(auVar59[7] + cVar17,
                              CONCAT16(auVar59[6] + cVar54,
                                       CONCAT15(auVar59[5] + cVar52,
                                                CONCAT14(auVar59[4] + cVar50,
                                                         CONCAT13(auVar59[3] + cVar48,
                                                                  CONCAT12(auVar59[2] + cVar46,
                                                                           CONCAT11(auVar59[1] +
                                                                                    cVar44,auVar59[0
                                                  ] + (char)uVar84)))))));
                uVar31 = uVar31 + 8;
              } while (uVar32 != uVar31);
              if (uVar26 == uVar32) goto LAB_048e97fd;
            }
LAB_048e97dc:
            do {
              bVar18 = *pbVar30;
              bVar3 = bVar18 + 0x20;
              if (0x19 < (byte)(bVar18 + 0xbf)) {
                bVar3 = bVar18;
              }
              *pbVar30 = bVar3;
              pbVar30 = pbVar30 + 1;
            } while (pbVar30 != pbVar29 + uVar26);
          }
LAB_048e97fd:
          bVar18 = *(byte *)auStack_14c8._0_8_;
          if ((bVar18 & 1) == 0) {
            uVar26 = (ulong)(bVar18 >> 1);
          }
          else {
            uVar26 = *(ulong *)(auStack_14c8._0_8_ + 8);
          }
          switch(uVar26) {
          case 8:
            if ((bVar18 & 1) == 0) {
              pbVar29 = (byte *)(auStack_14c8._0_8_ + 1);
            }
            else {
              pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x10);
            }
            if (*(long *)pbVar29 != 0x65646f6d656d6167) goto LAB_048e99bc;
            uVar23 = func_0x048e7d00((byte *)(auStack_14c8._0_8_ + 0x18));
            *(undefined4 *)(param_2 + 0x78) = uVar23;
            break;
          default:
LAB_048e99bc:
            cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_012f1033);
            if (cVar17 == '\0') {
              cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_01271422);
              if (cVar17 == '\0') {
                cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_013f902d);
                if (cVar17 == '\0') {
                  cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_011d35b8);
                  if (cVar17 == '\0') {
                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_01478335);
                    if (cVar17 == '\0') {
                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_0123c4b7);
                      if (cVar17 == '\0') {
                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_01478348);
                        if (cVar17 == '\0') {
                          cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_0125771c);
                          if (cVar17 == '\0') {
                            cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_0128a95e);
                            if (cVar17 == '\0') {
                              cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_011b7d36);
                              if (cVar17 == '\0') {
                                cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_0144737c);
                                if (cVar17 == '\0') {
                                  cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_011ebf88);
                                  if (cVar17 == '\0') {
                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_0135b3b1);
                                    if (cVar17 == '\0') {
                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_013dee77);
                                      if (cVar17 == '\0') {
                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_01494931);
                                        if (cVar17 != '\0') {
                                          uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                                          *(undefined1 *)(param_2 + 0xc0) = uVar19;
                                          break;
                                        }
                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_01257728);
                                        if (cVar17 == '\0') {
                                          cVar17 = func_0x048e7b80(auStack_14c8._0_8_,&UNK_013f9048)
                                          ;
                                          if (cVar17 == '\0') {
                                            cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                     &UNK_0138feed);
                                            if (cVar17 == '\0') {
                                              cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                       &UNK_01257735);
                                              if (cVar17 == '\0') {
                                                cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                         &UNK_011d35d7);
                                                if (cVar17 == '\0') {
                                                  cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                           &UNK_0119c1de);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_012a39d5);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013f9057);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_013c494c);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01494940);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0128a969);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_011b7d42);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_012bd1ab);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01478353);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_011d35e2);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013c495a);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_01271438);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_011b7dd2);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_012d68b1);
                                                    if (cVar17 != '\0') {
                                                      lVar36 = auStack_14c8._0_8_ + 0x18;
                                                      lVar35 = lStack_1258;
                                                      goto LAB_048e9f49;
                                                    }
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_011ebf9d);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013dee82);
                                                      if (cVar17 != '\0') {
                                                        lVar36 = auStack_14c8._0_8_ + 0x18;
                                                        lVar35 = lStack_1250;
                                                        goto LAB_048e9f49;
                                                      }
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_0128a980);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_0123c4cb);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_0123c4eb);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_012d6a00);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_011b7de6);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_013f906c);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_012d6a1e);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0125774a);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80();
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_014c898e);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_0128a98e);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0149495a);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_0119c1ff);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_012f1041);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01375daf);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_01257776);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013099b7);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_011ebfa9);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01207681);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_012a39f0);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013f9084);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_012a3a17);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01375dd4);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_011ebfd4);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_014473a4);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01478376);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_014783a2);
                                                    pbVar29 = pbStack_1238;
                                                    if (cVar17 != '\0') goto LAB_048eb16b;
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0133feba);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_0123c545);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_012a3a36);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_0125779f);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_013099d8);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013abbb5);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_01271459);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_011d35f4);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_01375ded);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_012f1077);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_0133fed1);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01221aa1);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_011b7e02);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80();
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_01271478);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_0127148e);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_013099f7);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013f90f9);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_01411dcd);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_0133fef0);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0149498a);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013dee8c);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_011ebff3);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01411de0);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_012d6a43);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_01375e0a);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_014949a4);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01375e20);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0135b3bc);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_013f910e);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_014783bb);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_013deea9);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0145e8bf);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_012a3a56);
                                                      uVar84 = auStack_14c8._0_8_;
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_0135b3d7);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_01375e36);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_0123c56f);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_012076a8);
                                                      uVar84 = auStack_14c8._0_8_;
                                                      if (cVar17 != '\0') {
                                                        func_0x0485e1c0(&bStack_13f8);
                                                        func_0x04863060(auStack_1470,0);
                                                        if ((*(byte *)(uVar84 + 0x18) & 1) == 0) {
                                                          uVar26 = (ulong)(*(byte *)(uVar84 + 0x18)
                                                                          >> 1);
                                                        }
                                                        else {
                                                          uVar26 = *(ulong *)(uVar84 + 0x20);
                                                        }
                                                        if ((uVar26 == 0) ||
                                                           (cVar17 = func_0x0485e320(&bStack_13f8,
                                                                                     uVar84 + 0x18,
                                                                                     auStack_1470,0)
                                                           , cVar17 == '\0')) {
                                                          func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,
                                                                          0x35d,&UNK_01221b13);
                                                        }
                                                        else {
                                                          func_0x04865230(&uStack_14a8,auStack_1470)
                                                          ;
                                                          uVar31 = uStack_14a0;
                                                          for (uVar26 = uStack_14a8;
                                                              uVar26 != uVar31;
                                                              uVar26 = uVar26 + 0x18) {
                                                            func_0x04863120(auStack_11b0,
                                                                            &UNK_01254d89);
                                                            func_0x04864e50(auStack_1408,
                                                                            auStack_1470,uVar26,
                                                                            auStack_11b0);
                                                            func_0x04160690(auStack_1428,
                                                                            &UNK_01254d89);
                                                            FUN_04863cb0(&bStack_1488,auStack_1408,
                                                                         auStack_1428);
                                                            if ((auStack_1428[0] & 1) != 0) {
                                                              func_0x0412a280(uStack_1418,
                                                                              auStack_1428[0] &
                                                                              0xfffffffffffffffe);
                                                            }
                                                            func_0x04863610(auStack_1408);
                                                            func_0x04863610(auStack_11b0);
                                                            bVar18 = bStack_1488 & 1;
                                                            uVar32 = uStack_1480;
                                                            if (bVar18 == 0) {
                                                              uVar32 = (ulong)(bStack_1488 >> 1);
                                                            }
                                                            if (uVar32 != 0) {
                                                              auStack_1428[0] = uVar26;
                                                              lVar35 = func_0x04921970(lStack_1218,
                                                                                       uVar26,&
                                                  UNK_01563a4f,auStack_1428,auStack_1408);
                                                  func_0x041307e0(lVar35 + 0x28,&bStack_1488);
                                                  bVar18 = bStack_1488 & 1;
                                                  }
                                                  if (bVar18 != 0) {
                                                    func_0x0412a280(puStack_1478,
                                                                    CONCAT71(uStack_1487,bStack_1488
                                                                            ) & 0xfffffffffffffffe);
                                                  }
                                                  }
                                                  func_0x04886070(&uStack_14a8);
                                                  }
                                                  puVar33 = auStack_1470;
                                                  goto LAB_048ec4c6;
                                                  }
                                                  cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                           &UNK_012bd1c4);
                                                  if (cVar17 == '\0') {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                             &UNK_01221b66);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                               &UNK_01324f1f);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_,
                                                                                 &UNK_011d361f);
                                                        if (cVar17 == '\0') {
                                                          cVar17 = func_0x048e7b80(auStack_14c8.
                                                                                   _0_8_,&
                                                  UNK_011ec00a);
                                                  uVar84 = auStack_14c8._0_8_;
                                                  if (cVar17 == '\0') {
                                                    bStack_13f8 = auStack_14c8[0];
                                                    uStack_13f7 = auStack_14c8._1_7_;
                                                    lVar35 = func_0x04921970(lStack_1210,
                                                                             auStack_14c8._0_8_,
                                                                             &UNK_01563a4f,
                                                                             &bStack_13f8,
                                                                             &uStack_14a8);
                                                    lVar36 = uVar84 + 0x18;
                                                    lVar35 = lVar35 + 0x28;
                                                    goto LAB_048e9f49;
                                                  }
                                                  uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18
                                                                          );
                                                  *(undefined1 *)(param_2 + 0x508) = uVar19;
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x731) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x730) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    if (iVar22 < 1) {
                                                      iVar22 = 0;
                                                    }
                                                    *(int *)(param_2 + 0x538) = iVar22;
                                                    *(undefined1 *)(param_2 + 0x53c) = 1;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar21 = func_0x0eedddf0(lVar35,0,0);
                                                    uVar26 = (ulong)uVar21;
                                                    if ((int)uVar21 < 1) {
                                                      uVar26 = 0;
                                                    }
                                                    if (*(char *)(param_2 + 0x548) == '\0') {
                                                      *(undefined1 *)(param_2 + 0x548) = 1;
                                                    }
                                                    *(ulong *)(param_2 + 0x540) = uVar26;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    if (iVar22 < 1) {
                                                      iVar22 = 0;
                                                    }
                                                    if (599 < iVar22) {
                                                      iVar22 = 600;
                                                    }
                                                    *(int *)(param_2 + 0xbc) = iVar22;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x121) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    func_0x0d579df0(&bStack_13f8,
                                                                    auStack_14c8._0_8_ + 0x18);
                                                    cVar17 = func_0x0d56def0(&bStack_13f8);
                                                    if (cVar17 == '\0') {
                                                      puVar85 = &UNK_012f1085;
                                                      uVar84 = 0x332;
                                                      goto LAB_048ec0df;
                                                    }
                                                    *(undefined4 *)(param_2 + 0xe4) = 2;
                                                    puStack_12a0[2] =
                                                         CONCAT62(uStack_13e6,uStack_13e8);
                                                    *puStack_12a0 =
                                                         CONCAT71(uStack_13f7,bStack_13f8);
                                                    puStack_12a0[1] =
                                                         CONCAT62(uStack_13ee,uStack_13f0);
                                                  }
                                                  }
                                                  else {
                                                    func_0x0485e1c0(&bStack_13f8);
                                                    func_0x04863060(auStack_1428,0);
                                                    if ((*(byte *)(uVar84 + 0x18) & 1) == 0) {
                                                      uVar26 = (ulong)(*(byte *)(uVar84 + 0x18) >> 1
                                                                      );
                                                    }
                                                    else {
                                                      uVar26 = *(ulong *)(uVar84 + 0x20);
                                                    }
                                                    if ((uVar26 == 0) ||
                                                       (cVar17 = func_0x0485e320(&bStack_13f8,
                                                                                 uVar84 + 0x18,
                                                                                 auStack_1428,0),
                                                       cVar17 == '\0')) {
                                                      func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,
                                                                      0x310,&UNK_014ad7b6);
                                                    }
                                                    else {
                                                      func_0x048631d0(auStack_1408,&UNK_01e79d90);
                                                      func_0x04864d90(auStack_1470,auStack_1428,
                                                                      &UNK_011d3613,auStack_1408);
                                                      func_0x04160690(&bStack_1488,&UNK_01254d89);
                                                      FUN_04863cb0(&uStack_14a8,auStack_1470,
                                                                   &bStack_1488);
                                                      if ((bStack_1488 & 1) != 0) {
                                                        func_0x0412a280(puStack_1478,
                                                                        CONCAT71(uStack_1487,
                                                                                 bStack_1488) &
                                                                        0xfffffffffffffffe);
                                                      }
                                                      func_0x04863610(auStack_1470);
                                                      func_0x04863610(auStack_1408);
                                                      uVar26 = uStack_14a0;
                                                      if ((uStack_14a8 & 1) == 0) {
                                                        uVar26 = uStack_14a8 >> 1 & 0x7f;
                                                      }
                                                      if (uVar26 != 0) {
                                                        lVar35 = func_0x09beceb0(0xf647670,
                                                                                 &uStack_14a8);
                                                        if (lVar35 == 0) {
                                                          uVar23 = 0;
                                                        }
                                                        else {
                                                          uVar23 = *(undefined4 *)(lVar35 + 0x28);
                                                        }
                                                        *(undefined4 *)(param_2 + 0x4f8) = uVar23;
                                                      }
                                                      func_0x048630e0(auStack_1470,0xffffffff);
                                                      func_0x04864d90(&bStack_1488,auStack_1428,
                                                                      &UNK_012d6a52,auStack_1470);
                                                      uVar23 = func_0x04863e00(&bStack_1488,0);
                                                      *(undefined4 *)(param_2 + 0x4fc) = uVar23;
                                                      func_0x04863610(&bStack_1488);
                                                      func_0x04863610(auStack_1470);
                                                      if ((uStack_14a8 & 1) != 0) {
                                                        func_0x0412a280(puStack_1498,
                                                                        uStack_14a8 &
                                                                        0xfffffffffffffffe);
                                                      }
                                                    }
                                                    puVar33 = auStack_1428;
LAB_048ec4c6:
                                                    func_0x04863610(puVar33);
                                                    func_0x0485e2d0(&bStack_13f8);
                                                  }
                                                  break;
                                                  }
                                                  bVar37 = (*(byte *)(auStack_14c8._0_8_ + 0x18) & 1
                                                           ) != 0;
                                                  lVar35 = auStack_14c8._0_8_ + 0x19;
                                                  if (bVar37) {
                                                    lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                  }
                                                  uVar26 = (ulong)(*(byte *)(auStack_14c8._0_8_ +
                                                                            0x18) >> 1);
                                                  if (bVar37) {
                                                    uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20);
                                                  }
                                                  uStack_14a8 = CONCAT53(uStack_14a8._3_5_,0x10101);
                                                  func_0x08b160d0(&bStack_13f8,lStack_1328,lVar35,
                                                                  uVar26,&uStack_14a8);
                                                  uStack_1078 = 0xc6a75c45adb53438;
                                                  puStack_1070 = &UNK_0140f690;
                                                  uStack_1068 = 1;
                                                  uStack_1060 = 0x301;
                                                  func_0x048ed200(&bStack_13f8);
                                                  }
                                                  else {
                                                    bVar37 = (*(byte *)(auStack_14c8._0_8_ + 0x18) &
                                                             1) != 0;
                                                    lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    if (bVar37) {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar26 = (ulong)(*(byte *)(auStack_14c8._0_8_ +
                                                                              0x18) >> 1);
                                                    if (bVar37) {
                                                      uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20)
                                                      ;
                                                    }
                                                    uStack_14a8 = uStack_14a8 & 0xffffffffff000000;
                                                    func_0x08b160d0(&bStack_13f8,lStack_1328,lVar35,
                                                                    uVar26,&uStack_14a8);
                                                    uStack_1058 = 0xc6a75c45adb53438;
                                                    puStack_1050 = &UNK_0140f690;
                                                    uStack_1048 = 1;
                                                    uStack_1040 = 0x2ea;
                                                    func_0x048ed160(&bStack_13f8);
                                                  }
                                                  if (cStack_13b0 == '\0') {
                                                    func_0x0490a2e0(&bStack_13f8);
                                                  }
                                                  break;
                                                  }
                                                  lVar36 = auStack_14c8._0_8_ + 0x18;
                                                  lVar35 = lStack_1328;
                                                  }
                                                  else {
                                                    lVar36 = auStack_14c8._0_8_ + 0x18;
                                                    lVar35 = lStack_1220;
                                                  }
                                                  goto LAB_048e9f49;
                                                  }
                                                  uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18
                                                                          );
                                                  *(undefined1 *)(param_2 + 0x465) = uVar19;
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x464) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x463) = uVar19;
                                                  }
                                                  break;
                                                  }
                                                  lVar36 = auStack_14c8._0_8_ + 0x18;
                                                  lVar35 = lStack_1228;
                                                  }
                                                  else {
                                                    lVar36 = auStack_14c8._0_8_ + 0x18;
                                                    lVar35 = lStack_1230;
                                                  }
                                                  goto LAB_048e9f49;
                                                  }
                                                  uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18
                                                                          );
                                                  *(undefined1 *)(param_2 + 0x462) = uVar19;
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x500) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x461) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    cVar17 = func_0x048e7b80(auStack_14c8._0_8_ +
                                                                             0x18,&UNK_012d4341);
                                                    if (cVar17 == '\0') {
                                                      bStack_13f8 = 0;
                                                      uStack_13f7 = 0;
                                                      if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                          == 0) {
                                                        lVar35 = auStack_14c8._0_8_ + 0x19;
                                                      }
                                                      else {
                                                        lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28
                                                                          );
                                                      }
                                                      uVar84 = func_0x0eee3070(lVar35,&bStack_13f8);
                                                      fStack_1278 = (float)uVar84;
                                                      uStack_1274 = (undefined4)
                                                                    ((ulong)uVar84 >> 0x20);
                                                      uStack_1270 = extraout_XMM0_Qb;
                                                      if ((fStack_1278 == _DAT_011983fc) &&
                                                         (!NAN(fStack_1278) && !NAN(_DAT_011983fc)))
                                                      {
                                                        cVar17 = func_0x048e7b80(auStack_14c8._0_8_
                                                                                 + 0x18,CONCAT71(
                                                  uStack_13f7,bStack_13f8));
                                                  if (cVar17 != '\0') {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,0x2b9,
                                                                    &UNK_0133ff15,lVar35);
                                                    goto LAB_048ebb3d;
                                                  }
                                                  }
                                                  if ((_DAT_011983f0 < fStack_1278) ||
                                                     (fStack_1278 < 0.0)) {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,0x2c2,
                                                                    &UNK_014c8a53,lVar35);
                                                  }
                                                  auVar68._4_4_ = uStack_1274;
                                                  auVar68._0_4_ = fStack_1278;
                                                  auVar68._8_8_ = uStack_1270;
                                                  if (fStack_1278 <= _DAT_011983fc) {
                                                    auVar68._0_4_ = _DAT_011983fc;
                                                  }
                                                  *(uint *)(param_2 + 0x458) =
                                                       -(uint)(_DAT_011983f0 < fStack_1278) &
                                                       (uint)_DAT_011983f0 |
                                                       ~-(uint)(_DAT_011983f0 < fStack_1278) &
                                                       auVar68._0_4_;
                                                  *(undefined1 *)(param_2 + 0x45c) = 1;
                                                  }
                                                  else {
LAB_048ebb3d:
                                                    *(undefined1 *)(param_2 + 0x458) = 0;
                                                    *(undefined1 *)(param_2 + 0x45c) = 0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x454) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x453) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x452) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x451) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    cVar17 = func_0x048e7b80(&uStack_1460,
                                                                             &UNK_0145e8b7);
                                                    if (cVar17 == '\0') {
                                                      cVar17 = func_0x048e7b80(&uStack_1460,
                                                                               &UNK_014ab0b6);
                                                      if (cVar17 == '\0') {
                                                        cVar17 = func_0x048e7b80(&uStack_1460,
                                                                                 &UNK_013c28d2);
                                                        if (cVar17 == '\0') {
                                                          pbVar29 = (byte *)((long)&uStack_1460 + 1)
                                                          ;
                                                          if ((uStack_1460 & 1) != 0) {
                                                            pbVar29 = pbStack_1450;
                                                          }
                                                          puVar85 = &UNK_01221abf;
                                                          uVar84 = 0x29d;
                                                          goto LAB_048eb95b;
                                                        }
                                                      }
                                                      else {
                                                        *(undefined1 *)(param_2 + 0x450) = 2;
                                                      }
                                                    }
                                                    else {
                                                      *(undefined1 *)(param_2 + 0x450) = 1;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x130) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    bVar37 = (*(byte *)(auStack_14c8._0_8_ + 0x18) &
                                                             1) != 0;
                                                    pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
                                                    if (bVar37) {
                                                      pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28
                                                                          );
                                                    }
                                                    uVar26 = (ulong)(*(byte *)(auStack_14c8._0_8_ +
                                                                              0x18) >> 1);
                                                    if (bVar37) {
                                                      uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20)
                                                      ;
                                                    }
                                                    if (uVar26 == 0) {
LAB_048eb806:
                                                      puVar85 = &UNK_013f90a4;
                                                      uVar84 = 0x288;
                                                      goto LAB_048eb95b;
                                                    }
                                                    uVar21 = 0x811c9dc5;
                                                    pbVar30 = pbVar29;
                                                    if (7 < uVar26) {
                                                      uVar31 = uVar26 & 0xfffffffffffffff8;
                                                      do {
                                                        uVar21 = ((uint)pbVar30[7] ^
                                                                 ((uint)pbVar30[6] ^
                                                                 ((uint)pbVar30[5] ^
                                                                 ((uint)pbVar30[4] ^
                                                                 ((uint)pbVar30[3] ^
                                                                 ((uint)pbVar30[2] ^
                                                                 ((uint)pbVar30[1] ^
                                                                 (*pbVar30 ^ uVar21) * 0x1000193) *
                                                                 0x1000193) * 0x1000193) * 0x1000193
                                                                 ) * 0x1000193) * 0x1000193) *
                                                                 0x1000193) * 0x1000193;
                                                        pbVar30 = pbVar30 + 8;
                                                        uVar31 = uVar31 - 8;
                                                      } while (uVar31 != 0);
                                                    }
                                                    if ((uVar26 & 7) != 0) {
                                                      uVar31 = 0;
                                                      do {
                                                        uVar21 = (pbVar30[uVar31] ^ uVar21) *
                                                                 0x1000193;
                                                        uVar31 = uVar31 + 1;
                                                      } while (((uint)uVar26 & 7) != uVar31);
                                                    }
                                                    if (uVar21 == 0x87f7009a) {
                                                      cVar17 = func_0x0d56def0(puStack_12a0);
                                                      if (cVar17 == '\0') {
                                                        if (*(char *)(lStack_1330 + -0x58) == '\0')
                                                        {
                                                          func_0x0ee49c60(lStack_1330 + -0xa40);
                                                          *(undefined1 *)(lStack_1330 + -0x58) = 1;
                                                        }
                                                        uVar84 = func_0x0ee4a230(lStack_1260);
                                                        *(undefined8 *)(param_2 + 0xe8) = uVar84;
                                                        *(undefined4 *)(param_2 + 0xf8) = 1;
                                                      }
                                                      *(undefined4 *)(param_2 + 0xe4) = 2;
                                                    }
                                                    else {
                                                      if (uVar21 != 0x243d3728) goto LAB_048eb806;
                                                      *(undefined4 *)(param_2 + 0xe4) = 0;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar23 = func_0x0eedddf0(lVar35,0,0);
                                                    if (*(char *)(param_2 + 0x42c) == '\0') {
                                                      *(undefined1 *)(param_2 + 0x42c) = 1;
                                                    }
                                                    *(undefined4 *)(param_2 + 0x428) = uVar23;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar23 = func_0x0eedddf0(lVar35,0,0);
                                                    if (*(char *)(param_2 + 0x424) == '\0') {
                                                      *(undefined1 *)(param_2 + 0x424) = 1;
                                                    }
                                                    *(undefined4 *)(param_2 + 0x420) = uVar23;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x41c) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x340) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iStack_142c = func_0x0eedddf0(lVar35,0,0);
                                                    if (1999 < iStack_142c) {
                                                      iStack_142c = 2000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iStack_1430 = func_0x0eedddf0(lVar35,0,0);
                                                    if (1999 < iStack_1430) {
                                                      iStack_1430 = 2000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uStack_1438 = func_0x0eedddf0(lVar35,0,0);
                                                    uStack_1310 = uStack_1438 >> 8;
                                                    uStack_1288 = CONCAT71((uint7)(ushort)(
                                                  uStack_1438 >> 0x10),1);
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uStack_143c = func_0x0eedddf0(lVar35,0,0);
                                                    uStack_1314 = uStack_143c >> 8;
                                                    uStack_1290 = CONCAT71((uint7)(ushort)(
                                                  uStack_143c >> 0x10),1);
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uStack_1434 = func_0x0eedddf0(lVar35,0,0);
                                                  }
                                                  }
                                                  else {
                                                    uStack_14aa = func_0x048e7e80(auStack_14c8._0_8_
                                                                                  + 0x18);
                                                  }
                                                  }
                                                  else {
                                                    uStack_14ac = func_0x048e7e80(auStack_14c8._0_8_
                                                                                  + 0x18);
                                                  }
                                                  }
                                                  else {
                                                    uStack_14ab = func_0x048e7e80(auStack_14c8._0_8_
                                                                                  + 0x18);
                                                  }
                                                  }
                                                  else {
                                                    bStack_14a9 = func_0x048e7e80(auStack_14c8._0_8_
                                                                                  + 0x18);
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      uStack_13e8 = (undefined2)
                                                                    *(undefined8 *)
                                                                     (auStack_14c8._0_8_ + 0x28);
                                                      uStack_13e6 = (undefined6)
                                                                    ((ulong)*(undefined8 *)
                                                                             (auStack_14c8._0_8_ +
                                                                             0x28) >> 0x10);
                                                      bStack_13f8 = (byte)*(undefined8 *)
                                                                           (auStack_14c8._0_8_ +
                                                                           0x18);
                                                      uStack_13f7 = (undefined7)
                                                                    ((ulong)*(undefined8 *)
                                                                             (auStack_14c8._0_8_ +
                                                                             0x18) >> 8);
                                                      uStack_13f0 = (undefined2)
                                                                    *(undefined8 *)
                                                                     (auStack_14c8._0_8_ + 0x20);
                                                      uStack_13ee = (undefined6)
                                                                    ((ulong)*(undefined8 *)
                                                                             (auStack_14c8._0_8_ +
                                                                             0x20) >> 0x10);
                                                    }
                                                    else {
                                                      func_0x0412e5e0(&bStack_13f8,
                                                                      *(undefined8 *)
                                                                       (auStack_14c8._0_8_ + 0x28),
                                                                      *(undefined8 *)
                                                                       (auStack_14c8._0_8_ + 0x20));
                                                    }
                                                    lVar35 = func_0x048ece80(&bStack_13f8,
                                                                             &UNK_0133d388,0);
                                                    uStack_14a8 = 0;
                                                    uStack_14a0 = 0;
                                                    puStack_1498 = (undefined7 *)0x0;
                                                    if (lVar35 == -1) {
                                                      uVar24 = 0;
                                                      uVar21 = 0;
                                                    }
                                                    else {
                                                      func_0x048ecf60(&bStack_1488,&bStack_13f8,0,
                                                                      lVar35);
                                                      if ((uStack_14a8 & 1) != 0) {
                                                        func_0x0412a280(puStack_1498,
                                                                        uStack_14a8 &
                                                                        0xfffffffffffffffe);
                                                      }
                                                      puStack_1498 = puStack_1478;
                                                      uStack_14a8 = CONCAT71(uStack_1487,bStack_1488
                                                                            );
                                                      uStack_14a0 = uStack_1480;
                                                      func_0x048ecf60(&bStack_1488,&bStack_13f8,
                                                                      lVar35 + 1,0xffffffffffffffff)
                                                      ;
                                                      puVar27 = &uStack_1487;
                                                      if ((bStack_1488 & 1) != 0) {
                                                        puVar27 = puStack_1478;
                                                      }
                                                      uVar21 = func_0x0eedddf0(puVar27,0,0);
                                                      if ((bStack_1488 & 1) != 0) {
                                                        func_0x0412a280(puStack_1478,
                                                                        CONCAT71(uStack_1487,
                                                                                 bStack_1488) &
                                                                        0xfffffffffffffffe);
                                                      }
                                                      uVar24 = (uint)(byte)uStack_14a8;
                                                    }
                                                    uVar26 = (ulong)(uVar24 >> 1);
                                                    if ((uVar24 & 1) != 0) {
                                                      uVar26 = uStack_14a0;
                                                    }
                                                    if ((uVar21 < 0x10000 && 0 < (int)uVar21) &&
                                                        uVar26 != 0) {
                                                      func_0x048ed0c0(lStack_1240,&uStack_14a8);
                                                      if (*(char *)(param_2 + 0x39c) == '\0') {
                                                        *(undefined1 *)(param_2 + 0x39c) = 1;
                                                      }
                                                      *(uint *)(param_2 + 0x398) = uVar21;
                                                    }
                                                    else {
                                                      func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,
                                                                      0x23f,&UNK_0142bdf3);
                                                    }
                                                    if ((uStack_14a8 & 1) != 0) {
                                                      func_0x0412a280(puStack_1498,
                                                                      uStack_14a8 &
                                                                      0xfffffffffffffffe);
                                                    }
                                                    if ((bStack_13f8 & 1) != 0) {
                                                      uVar26 = CONCAT71(uStack_13f7,bStack_13f8);
                                                      puVar27 = (undefined7 *)
                                                                CONCAT62(uStack_13e6,uStack_13e8);
                                                      goto LAB_048e9ce9;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    if (iVar22 < 1) {
                                                      iVar22 = 0;
                                                    }
                                                    if (9 < iVar22) {
                                                      iVar22 = 10;
                                                    }
                                                    *(int *)(param_2 + 0x370) = iVar22;
                                                  }
                                                  }
                                                  else {
                                                    bVar37 = (*(byte *)(auStack_14c8._0_8_ + 0x18) &
                                                             1) != 0;
                                                    pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
                                                    if (bVar37) {
                                                      pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28
                                                                          );
                                                    }
                                                    uVar26 = (ulong)(*(byte *)(auStack_14c8._0_8_ +
                                                                              0x18) >> 1);
                                                    if (bVar37) {
                                                      uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20)
                                                      ;
                                                    }
                                                    if (uVar26 == 0) {
LAB_048eb06d:
                                                      puVar85 = &UNK_014c89f3;
                                                      uVar84 = 0x225;
LAB_048eb95b:
                                                      func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,
                                                                      uVar84,puVar85,pbVar29);
                                                    }
                                                    else {
                                                      uVar21 = 0x811c9dc5;
                                                      pbVar30 = pbVar29;
                                                      if (7 < uVar26) {
                                                        uVar31 = uVar26 & 0xfffffffffffffff8;
                                                        do {
                                                          uVar21 = ((uint)pbVar30[7] ^
                                                                   ((uint)pbVar30[6] ^
                                                                   ((uint)pbVar30[5] ^
                                                                   ((uint)pbVar30[4] ^
                                                                   ((uint)pbVar30[3] ^
                                                                   ((uint)pbVar30[2] ^
                                                                   ((uint)pbVar30[1] ^
                                                                   (*pbVar30 ^ uVar21) * 0x1000193)
                                                                   * 0x1000193) * 0x1000193) *
                                                                   0x1000193) * 0x1000193) *
                                                                   0x1000193) * 0x1000193) *
                                                                   0x1000193;
                                                          pbVar30 = pbVar30 + 8;
                                                          uVar31 = uVar31 - 8;
                                                        } while (uVar31 != 0);
                                                      }
                                                      if ((uVar26 & 7) != 0) {
                                                        uVar31 = 0;
                                                        do {
                                                          uVar21 = (pbVar30[uVar31] ^ uVar21) *
                                                                   0x1000193;
                                                          uVar31 = uVar31 + 1;
                                                        } while (((uint)uVar26 & 7) != uVar31);
                                                      }
                                                      if (uVar21 == 0x3b3b76a6) {
                                                        *(undefined4 *)(param_2 + 0x36c) = 2;
                                                      }
                                                      else if (uVar21 != 0x33f36f05) {
                                                        if (uVar21 != 0xaae0ccf9) goto LAB_048eb06d;
                                                        *(undefined4 *)(param_2 + 0x36c) = 1;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      uVar26 = (ulong)(*(byte *)(auStack_14c8._0_8_
                                                                                + 0x18) >> 1);
                                                    }
                                                    else {
                                                      uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20)
                                                      ;
                                                    }
                                                    pbVar29 = pbStack_1208;
                                                    if (uVar26 == 0) {
                                                      puVar85 = &UNK_0123c50b;
                                                      uVar84 = 0x213;
                                                      goto LAB_048ec0df;
                                                    }
LAB_048eb16b:
                                                    func_0x048ed0c0(pbVar29,auStack_14c8._0_8_ +
                                                                            0x18);
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    if (iVar22 - 0x10000U < 0xffff0001) {
                                                      puVar85 = &UNK_014c89b3;
                                                      uVar84 = 0x20b;
LAB_048ec0df:
                                                      func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,
                                                                      uVar84,puVar85);
                                                    }
                                                    else {
                                                      *(undefined1 *)(param_2 + 0x374) = 1;
                                                      if (*(char *)(param_2 + 0x39c) == '\0') {
                                                        *(undefined1 *)(param_2 + 0x39c) = 1;
                                                      }
                                                      *(int *)(param_2 + 0x398) = iVar22;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x369) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x368) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    *(long *)(param_2 + 0x1b0) = (long)iVar22;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    *(long *)(param_2 + 0x1a8) = (long)iVar22;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar23 = func_0x0eee3070(lVar35,0);
                                                    *(undefined4 *)(param_2 + 0x188) = uVar23;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar20 = func_0x0eedddf0(lVar35,0,0);
                                                    *(undefined2 *)(param_2 + 0x19c) = uVar20;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar19 = func_0x0eedddf0(lVar35,0,0);
                                                    *(undefined1 *)(param_2 + 0x199) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    fVar38 = (float)func_0x0eee3070(lVar35,0);
                                                    *(float *)(param_2 + 0x18c) = fVar38;
                                                    fVar38 = fVar38 / _DAT_01198c58;
                                                    *(float *)(param_2 + 0x194) = fVar38;
                                                    *(float *)(param_2 + 400) = fVar38 * fVar38;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    fVar38 = (float)func_0x0eee3070(lVar35,0);
                                                    if (fVar38 <= _DAT_011983f0) {
                                                      fVar38 = _DAT_011983f0;
                                                    }
                                                    *(float *)(param_2 + 0x1c4) = fVar38;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x1c0) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x1ba) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x1b9) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x1b8) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    bVar37 = (*(byte *)(auStack_14c8._0_8_ + 0x18) &
                                                             1) != 0;
                                                    pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
                                                    if (bVar37) {
                                                      pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28
                                                                          );
                                                    }
                                                    uVar26 = (ulong)(*(byte *)(auStack_14c8._0_8_ +
                                                                              0x18) >> 1);
                                                    if (bVar37) {
                                                      uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20)
                                                      ;
                                                    }
                                                    if (uVar26 != 0) {
                                                      uVar21 = 0x811c9dc5;
                                                      if (7 < uVar26) {
                                                        uVar31 = uVar26 & 0xfffffffffffffff8;
                                                        do {
                                                          uVar21 = ((uint)pbVar29[7] ^
                                                                   ((uint)pbVar29[6] ^
                                                                   ((uint)pbVar29[5] ^
                                                                   ((uint)pbVar29[4] ^
                                                                   ((uint)pbVar29[3] ^
                                                                   ((uint)pbVar29[2] ^
                                                                   ((uint)pbVar29[1] ^
                                                                   (*pbVar29 ^ uVar21) * 0x1000193)
                                                                   * 0x1000193) * 0x1000193) *
                                                                   0x1000193) * 0x1000193) *
                                                                   0x1000193) * 0x1000193) *
                                                                   0x1000193;
                                                          pbVar29 = pbVar29 + 8;
                                                          uVar31 = uVar31 - 8;
                                                        } while (uVar31 != 0);
                                                      }
                                                      if ((uVar26 & 7) != 0) {
                                                        uVar31 = 0;
                                                        do {
                                                          uVar21 = (pbVar29[uVar31] ^ uVar21) *
                                                                   0x1000193;
                                                          uVar31 = uVar31 + 1;
                                                        } while (((uint)uVar26 & 7) != uVar31);
                                                      }
                                                      if (uVar21 == 0xb4df52a) {
                                                        *(undefined2 *)(param_2 + 0x14e) = 1;
                                                        break;
                                                      }
                                                    }
                                                    *(undefined2 *)(param_2 + 0x14e) = 0;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar20 = func_0x0eedddf0(lVar35,0,0);
                                                    *(undefined2 *)(param_2 + 0x14c) = uVar20;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      puStack_1498 = *(undefined7 **)
                                                                      (auStack_14c8._0_8_ + 0x28);
                                                      uStack_14a8 = *(ulong *)(auStack_14c8._0_8_ +
                                                                              0x18);
                                                      uStack_14a0 = *(ulong *)(auStack_14c8._0_8_ +
                                                                              0x20);
                                                    }
                                                    else {
                                                      func_0x0412e5e0(&uStack_14a8,
                                                                      *(undefined8 *)
                                                                       (auStack_14c8._0_8_ + 0x28),
                                                                      *(undefined8 *)
                                                                       (auStack_14c8._0_8_ + 0x20));
                                                    }
                                                    lVar35 = func_0x048ece80(&uStack_14a8,
                                                                             &UNK_0133d388,0);
                                                    uStack_13e8 = 0;
                                                    uStack_13e6 = 0;
                                                    uStack_13e0 = 0;
                                                    bStack_13f8 = 0;
                                                    uStack_13f7 = 0;
                                                    uStack_13f0 = 0;
                                                    uStack_13ee = 0;
                                                    if (lVar35 != -1) {
                                                      func_0x048ecf60(&bStack_1488,&uStack_14a8,0,
                                                                      lVar35);
                                                      if ((bStack_13f8 & 1) != 0) {
                                                        func_0x0412a280(CONCAT62(uStack_13e6,
                                                                                 uStack_13e8),
                                                                        CONCAT71(uStack_13f7,
                                                                                 bStack_13f8) &
                                                                        0xfffffffffffffffe);
                                                      }
                                                      uStack_13e8 = SUB82(puStack_1478,0);
                                                      uStack_13e6 = (undefined6)
                                                                    ((ulong)puStack_1478 >> 0x10);
                                                      bStack_13f8 = bStack_1488;
                                                      uStack_13f7 = uStack_1487;
                                                      uStack_13f0 = (undefined2)uStack_1480;
                                                      uStack_13ee = (undefined6)
                                                                    (uStack_1480 >> 0x10);
                                                      func_0x048ecf60(&bStack_1488,&uStack_14a8,
                                                                      lVar35 + 1,0xffffffffffffffff)
                                                      ;
                                                      puVar27 = &uStack_1487;
                                                      if ((bStack_1488 & 1) != 0) {
                                                        puVar27 = puStack_1478;
                                                      }
                                                      uStack_13e0 = func_0x0eedddf0(puVar27,0,0);
                                                      if ((bStack_1488 & 1) != 0) {
                                                        func_0x0412a280(puStack_1478,
                                                                        CONCAT71(uStack_1487,
                                                                                 bStack_1488) &
                                                                        0xfffffffffffffffe);
                                                      }
                                                    }
                                                    func_0x048ed050(lStack_1248,&bStack_13f8);
                                                    if ((bStack_13f8 & 1) != 0) {
                                                      func_0x0412a280(CONCAT62(uStack_13e6,
                                                                               uStack_13e8),
                                                                      CONCAT71(uStack_13f7,
                                                                               bStack_13f8) &
                                                                      0xfffffffffffffffe);
                                                    }
                                                    uVar26 = uStack_14a8;
                                                    puVar27 = puStack_1498;
                                                    if ((uStack_14a8 & 1) != 0) {
LAB_048e9ce9:
                                                      func_0x0412a280(puVar27,uVar26 & 
                                                  0xfffffffffffffffe);
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar23 = func_0x0eedddf0(lVar35,0,0);
                                                    *(undefined4 *)(param_2 + 0xe0) = uVar23;
                                                  }
                                                  }
                                                  else {
                                                    bVar18 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(ulong *)(param_2 + 0x128) =
                                                         (ulong)bVar18 |
                                                         *(ulong *)(param_2 + 0x128) &
                                                         0xfffffffffffffffe;
                                                  }
                                                  }
                                                  else {
                                                    bVar18 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(ulong *)(param_2 + 0x128) =
                                                         (*(ulong *)(param_2 + 0x128) &
                                                         0xfffffffffffffffd) + (ulong)bVar18 * 2;
                                                  }
                                                  }
                                                  else {
                                                    bVar18 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(ulong *)(param_2 + 0x128) =
                                                         (*(ulong *)(param_2 + 0x128) &
                                                         0xfffffffffffffffb) + (ulong)bVar18 * 4;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e10(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x120) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    if (iVar22 < 5) {
                                                      iVar22 = 4;
                                                    }
                                                    if (0xb < iVar22) {
                                                      iVar22 = 0xc;
                                                    }
                                                    *(int *)(param_2 + 0x9c) = iVar22;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar23 = func_0x0eedddf0(lVar35,0,0);
                                                    *(undefined4 *)(param_2 + 0x98) = uVar23;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    iVar22 = func_0x0eedddf0(lVar35,0,0);
                                                    *(long *)(param_2 + 0xd8) = (long)iVar22;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0xca) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0xc9) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar26 = func_0x048e7ef0();
                                                    if (uVar26 >> 0x20 == 0) {
                                                      if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                          == 0) {
                                                        lVar35 = auStack_14c8._0_8_ + 0x19;
                                                      }
                                                      else {
                                                        lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28
                                                                          );
                                                      }
                                                      func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,
                                                                      0x175,&UNK_011b7d55,lVar35);
                                                      *(undefined4 *)(param_2 + 0x134) = 1;
                                                    }
                                                    else {
                                                      *(int *)(param_2 + 0x134) = (int)uVar26;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x138) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0x139) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 200) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    fVar38 = (float)func_0x0eee3070(lVar35,0);
                                                    *(float *)(param_2 + 0x154) = fVar38;
                                                    if (fVar38 < 0.0) {
                                                      if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                          == 0) {
                                                        lVar35 = auStack_14c8._0_8_ + 0x19;
                                                      }
                                                      else {
                                                        lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28
                                                                          );
                                                      }
                                                      func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,
                                                                      0x15f,&UNK_01221a60,lVar35);
                                                      *(undefined4 *)(param_2 + 0x154) = 0x3f800000;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar19 = func_0x0eedde40(lVar35,0,0);
                                                    *(undefined1 *)(param_2 + 0x151) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1)
                                                        == 0) {
                                                      lVar35 = auStack_14c8._0_8_ + 0x19;
                                                    }
                                                    else {
                                                      lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                                                    }
                                                    uVar21 = func_0x0eedddf0(lVar35,0,0);
                                                    if (uVar21 < 6) {
                                                      uVar21 = 5;
                                                    }
                                                    *(uint *)(param_2 + 0xd0) = uVar21;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 199) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0xc6) = uVar19;
                                                  }
                                                  }
                                                  else {
                                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ +
                                                                             0x18);
                                                    *(undefined1 *)(param_2 + 0xc5) = uVar19;
                                                  }
                                                }
                                                else {
                                                  uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18
                                                                          );
                                                  *(undefined1 *)(param_2 + 0xc4) = uVar19;
                                                }
                                              }
                                              else {
                                                uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                                                *(undefined1 *)(param_2 + 0xc3) = uVar19;
                                              }
                                            }
                                            else {
                                              uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                                              *(undefined1 *)(param_2 + 0xc2) = uVar19;
                                            }
                                            break;
                                          }
                                        }
                                        uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                                        *(undefined1 *)(param_2 + 0xc1) = uVar19;
                                        break;
                                      }
                                    }
                                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                                    *(undefined1 *)(param_2 + 0xb8) = uVar19;
                                  }
                                  else {
                                    bVar18 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                                    *(uint *)(param_2 + 0x468) = (uint)(bVar18 ^ 1);
                                  }
                                }
                                else {
                                  uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                                  *(undefined1 *)(param_2 + 0xb9) = uVar19;
                                }
                              }
                              else {
                                func_0x048ece10(lStack_1200,auStack_14c8._0_8_ + 0x18);
                              }
                              break;
                            }
                            lVar36 = auStack_14c8._0_8_ + 0x18;
                            lVar35 = param_2;
                          }
                          else {
                            lVar36 = auStack_14c8._0_8_ + 0x18;
                            lVar35 = lStack_11f8;
                          }
LAB_048e9f49:
                          func_0x041307e0(lVar35,lVar36);
                        }
                        else {
                          func_0x041307e0(puStack_1298,auStack_14c8._0_8_ + 0x18);
                          puVar33 = puStack_1298;
                          if ((*puStack_1298 & 1) == 0) {
                            uStack_12d8 = puStack_1298[2];
                            uStack_12e8 = *puStack_1298;
                            uStack_12e0 = puStack_1298[1];
                          }
                          else {
                            func_0x0412e5e0(&uStack_12e8,*(undefined8 *)(param_2 + 0x28),
                                            *(undefined8 *)(param_2 + 0x20));
                          }
                          func_0x0edff720(&bStack_13f8,&uStack_12e8);
                          if ((*puVar33 & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(param_2 + 0x28),
                                            *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffe);
                          }
                          puVar33[2] = CONCAT62(uStack_13e6,uStack_13e8);
                          *puVar33 = CONCAT71(uStack_13f7,bStack_13f8);
                          puVar33[1] = CONCAT62(uStack_13ee,uStack_13f0);
                          if ((uStack_12e8 & 1) != 0) {
                            func_0x0412a280(uStack_12d8,uStack_12e8 & 0xfffffffffffffffe);
                          }
                          if ((*puVar33 & 1) == 0) {
                            uStack_12f8 = puVar33[2];
                            uStack_1308 = *puVar33;
                            uStack_1300 = puVar33[1];
                          }
                          else {
                            func_0x0412e5e0(&uStack_1308,*(undefined8 *)(param_2 + 0x28),
                                            *(undefined8 *)(param_2 + 0x20));
                          }
                          func_0x04160690(&uStack_14a8,&UNK_012d4174);
                          func_0x0edff5d0(&bStack_13f8,&uStack_1308,&uStack_14a8);
                          if ((*puVar33 & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(param_2 + 0x28),
                                            *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffe);
                          }
                          puVar33[2] = CONCAT62(uStack_13e6,uStack_13e8);
                          *puVar33 = CONCAT71(uStack_13f7,bStack_13f8);
                          puVar33[1] = CONCAT62(uStack_13ee,uStack_13f0);
                          if ((uStack_14a8 & 1) != 0) {
                            func_0x0412a280(puStack_1498,uStack_14a8 & 0xfffffffffffffffe);
                          }
                          if ((uStack_1308 & 1) != 0) {
                            func_0x0412a280(uStack_12f8,uStack_1308 & 0xfffffffffffffffe);
                          }
                          func_0x0edff7c0(&bStack_13f8,puVar33);
                          if ((*puVar33 & 1) != 0) {
                            func_0x0412a280(*(undefined8 *)(param_2 + 0x28),
                                            *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffe);
                          }
                          puVar33[2] = CONCAT62(uStack_13e6,uStack_13e8);
                          *puVar33 = CONCAT71(uStack_13f7,bStack_13f8);
                          puVar33[1] = CONCAT62(uStack_13ee,uStack_13f0);
                          func_0x048e68c0(puVar33,auStack_14c8._0_8_ + 0x18);
                        }
                      }
                      else {
                        uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                        *(undefined1 *)(param_2 + 0x148) = uVar19;
                      }
                    }
                    else {
                      if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1) == 0) {
                        lVar35 = auStack_14c8._0_8_ + 0x19;
                      }
                      else {
                        lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
                      }
                      fVar38 = (float)func_0x0eee3070(lVar35,0);
                      *(uint *)(param_2 + 0x144) =
                           -(uint)(fVar38 <= _DAT_011983fc) & _DAT_011986e4 |
                           ~-(uint)(fVar38 <= _DAT_011983fc) & (uint)fVar38;
                    }
                  }
                  else {
                    uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                    *(undefined1 *)(param_2 + 0xcd) = uVar19;
                  }
                }
                else {
                  uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                  *(undefined1 *)(param_2 + 0xcc) = uVar19;
                }
              }
              else {
                uVar19 = func_0x048e7e80(auStack_14c8._0_8_ + 0x18);
                *(undefined1 *)(param_2 + 0xcb) = uVar19;
              }
            }
            else {
              if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1) == 0) {
                lVar35 = auStack_14c8._0_8_ + 0x19;
              }
              else {
                lVar35 = *(long *)(auStack_14c8._0_8_ + 0x28);
              }
              uVar20 = func_0x0eedddf0(lVar35,0,0);
              *(undefined2 *)(param_2 + 0x52) = uVar20;
            }
            break;
          case 10:
            if ((bVar18 & 1) == 0) {
              pbVar29 = (byte *)(auStack_14c8._0_8_ + 1);
            }
            else {
              pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x10);
            }
            if (*(short *)(pbVar29 + 8) == 0x7974 && *(long *)pbVar29 == 0x6c75636966666964) {
              uVar23 = func_0x048e7c00((byte *)(auStack_14c8._0_8_ + 0x18));
              *(undefined4 *)(param_2 + 0x5c) = uVar23;
            }
            else {
              if (*(short *)(pbVar29 + 8) != 0x6570 || *(long *)pbVar29 != 0x79742d6c6576656c)
              goto LAB_048e99bc;
              bVar18 = *(byte *)(auStack_14c8._0_8_ + 0x18);
              if ((bVar18 & 1) == 0) {
                uVar26 = (ulong)(bVar18 >> 1);
              }
              else {
                uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20);
              }
              if (uVar26 == 4) {
                if ((bVar18 & 1) == 0) {
                  pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
                }
                else {
                  pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28);
                }
                uVar21 = (*(int *)pbVar29 == 0x54414c46) + 1;
              }
              else {
                uVar21 = 1;
                if (uVar26 == 6) {
                  if ((bVar18 & 1) == 0) {
                    pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
                  }
                  else {
                    pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28);
                  }
                  uVar21 = (uint)(*(short *)(pbVar29 + 4) != 0x5943 || *(int *)pbVar29 != 0x4147454c
                                 );
                }
              }
              *(uint *)(param_2 + 0x30) = uVar21;
            }
            break;
          case 0xb:
            pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x10);
            if ((bVar18 & 1) == 0) {
              pbVar29 = (byte *)(auStack_14c8._0_8_ + 1);
            }
            if (*(long *)(pbVar29 + 3) == 0x656d616e2d726576 &&
                *(long *)pbVar29 == 0x6e2d726576726573) {
              puVar33 = (ulong *)(auStack_14c8._0_8_ + 0x18);
              if (puStack_1448 != puVar33) {
                bVar18 = (byte)*puVar33;
                if ((*puStack_1448 & 1) == 0) {
                  if ((bVar18 & 1) == 0) {
                    puStack_1448[2] = *(ulong *)(auStack_14c8._0_8_ + 0x28);
                    uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20);
                    *puStack_1448 = *puVar33;
                    puStack_1448[1] = uVar26;
                  }
                  else {
                    FUN_04885070(puStack_1448,*(undefined8 *)(auStack_14c8._0_8_ + 0x28),
                                 *(undefined8 *)(auStack_14c8._0_8_ + 0x20));
                  }
                }
                else {
                  bVar37 = (bVar18 & 1) != 0;
                  pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
                  if (bVar37) {
                    pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28);
                  }
                  uVar26 = (ulong)(bVar18 >> 1);
                  if (bVar37) {
                    uVar26 = *(ulong *)(auStack_14c8._0_8_ + 0x20);
                  }
                  func_0x04885120(puStack_1448,pbVar29,uVar26);
                }
              }
              if ((*puStack_1448 & 1) == 0) {
                puStack_12b8 = (undefined7 *)puStack_1448[2];
                uStack_12c8 = *puStack_1448;
                uStack_12c0 = puStack_1448[1];
              }
              else {
                func_0x0412e5e0(&uStack_12c8,*(undefined8 *)(param_2 + 0x48),
                                *(undefined8 *)(param_2 + 0x40));
              }
              uStack_14a8 = CONCAT53(uStack_14a8._3_5_,0x3b02);
              func_0x0edff5d0(&bStack_13f8,&uStack_12c8,&uStack_14a8);
              if ((*puStack_1448 & 1) != 0) {
                func_0x0412a280(*(undefined8 *)(param_2 + 0x48),
                                *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffe);
              }
              puStack_1448[2] = CONCAT62(uStack_13e6,uStack_13e8);
              *puStack_1448 = CONCAT71(uStack_13f7,bStack_13f8);
              puStack_1448[1] = CONCAT62(uStack_13ee,uStack_13f0);
              if ((uStack_14a8 & 1) != 0) {
                func_0x0412a280(puStack_1498,uStack_14a8 & 0xfffffffffffffffe);
              }
              uVar26 = uStack_12c8;
              puVar27 = puStack_12b8;
              if ((uStack_12c8 & 1) == 0) break;
              goto LAB_048e9ce9;
            }
            if (*(long *)(pbVar29 + 3) == 0x73726579616c702d &&
                *(long *)pbVar29 == 0x79616c702d78616d) {
              if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1) == 0) {
                pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
              }
              else {
                pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28);
              }
              uVar23 = func_0x0eedddf0(pbVar29,0,0);
              *(undefined4 *)(param_2 + 0x54) = uVar23;
            }
            else {
              pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x10);
              if ((bVar18 & 1) == 0) {
                pbVar29 = (byte *)(auStack_14c8._0_8_ + 1);
              }
              if (*(long *)(pbVar29 + 3) != 0x74726f702d726576 ||
                  *(long *)pbVar29 != 0x702d726576726573) goto LAB_048e99bc;
              if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1) == 0) {
                pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
              }
              else {
                pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28);
              }
              uVar20 = func_0x0eedddf0(pbVar29,0,0);
              *(undefined2 *)(param_2 + 0x50) = uVar20;
              *(undefined2 *)(param_2 + 0x4d0) = uVar20;
            }
            break;
          case 0x13:
            if ((bVar18 & 1) == 0) {
              pbVar29 = (byte *)(auStack_14c8._0_8_ + 1);
            }
            else {
              pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x10);
            }
            auVar39[0] = -(*pbVar29 == UNK_014e86c0);
            auVar39[1] = -(pbVar29[1] == UNK_014e86c1);
            auVar39[2] = -(pbVar29[2] == UNK_014e86c2);
            auVar39[3] = -(pbVar29[3] == UNK_014e86c3);
            auVar39[4] = -(pbVar29[4] == UNK_014e86c4);
            auVar39[5] = -(pbVar29[5] == UNK_014e86c5);
            auVar39[6] = -(pbVar29[6] == UNK_014e86c6);
            auVar39[7] = -(pbVar29[7] == UNK_014e86c7);
            auVar39[8] = -(pbVar29[8] == UNK_014e86c8);
            auVar39[9] = -(pbVar29[9] == UNK_014e86c9);
            auVar39[10] = -(pbVar29[10] == UNK_014e86ca);
            auVar39[0xb] = -(pbVar29[0xb] == UNK_014e86cb);
            auVar39[0xc] = -(pbVar29[0xc] == UNK_014e86cc);
            auVar39[0xd] = -(pbVar29[0xd] == UNK_014e86cd);
            auVar39[0xe] = -(pbVar29[0xe] == UNK_014e86ce);
            auVar39[0xf] = -(pbVar29[0xf] == UNK_014e86cf);
            auVar42[0] = -(pbVar29[3] == UNK_014e6200);
            auVar42[1] = -(pbVar29[4] == UNK_014e6201);
            auVar42[2] = -(pbVar29[5] == UNK_014e6202);
            auVar42[3] = -(pbVar29[6] == UNK_014e6203);
            auVar42[4] = -(pbVar29[7] == UNK_014e6204);
            auVar42[5] = -(pbVar29[8] == UNK_014e6205);
            auVar42[6] = -(pbVar29[9] == UNK_014e6206);
            auVar42[7] = -(pbVar29[10] == UNK_014e6207);
            auVar42[8] = -(pbVar29[0xb] == UNK_014e6208);
            auVar42[9] = -(pbVar29[0xc] == UNK_014e6209);
            auVar42[10] = -(pbVar29[0xd] == UNK_014e620a);
            auVar42[0xb] = -(pbVar29[0xe] == UNK_014e620b);
            auVar42[0xc] = -(pbVar29[0xf] == UNK_014e620c);
            auVar42[0xd] = -(pbVar29[0x10] == UNK_014e620d);
            auVar42[0xe] = -(pbVar29[0x11] == UNK_014e620e);
            auVar42[0xf] = -(pbVar29[0x12] == UNK_014e620f);
            auVar42 = auVar42 & auVar39;
            if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) != 0xffff) goto LAB_048e99bc;
            if ((*(byte *)(auStack_14c8._0_8_ + 0x18) & 1) == 0) {
              pbVar29 = (byte *)(auStack_14c8._0_8_ + 0x19);
            }
            else {
              pbVar29 = *(byte **)(auStack_14c8._0_8_ + 0x28);
            }
            uVar21 = func_0x0eedddf0(pbVar29,0,0);
            uVar19 = (undefined1)uVar21;
            if (4 < uVar21) {
              uVar19 = 1;
            }
            *(undefined1 *)(param_2 + 0x58) = uVar19;
          }
          puVar85 = puStack_12a8;
          if ((uStack_1460 & 1) != 0) {
            func_0x0412a280(pbStack_1450,uStack_1460 & 0xfffffffffffffffe);
          }
        }
LAB_048e9df3:
        uVar84 = auStack_14c8._0_8_;
        if (auStack_14c8._0_8_ != 0) {
          for (lVar35 = auStack_14c8._8_8_; uVar84 != lVar35; lVar35 = lVar35 + -0x18) {
            if ((*(byte *)(lVar35 + -0x18) & 1) != 0) {
              func_0x0412a280(*(undefined8 *)(lVar35 + -8),
                              *(ulong *)(lVar35 + -0x18) & 0xfffffffffffffffe);
            }
          }
          auStack_14c8._8_8_ = uVar84;
          func_0x0412a280(auStack_14c8._0_8_,(long)puStack_14b8 - auStack_14c8._0_8_);
        }
        puStack_1190 = puStack_11e0;
        *(undefined8 *)((long)&puStack_1190 + *(long *)(puStack_11e0 + -0x18)) = uStack_11e8;
        apuStack_1180[0] = puStack_11f0;
        apuStack_1180[1] = puStack_1280;
        if ((uStack_1138 & 1) != 0) {
          func_0x0412a280(uStack_1128,uStack_1138 & 0xfffffffffffffffe);
        }
        apuStack_1180[1] = puStack_1320;
        func_0x04167a40(abStack_1170);
        func_0x0413c8a0(&puStack_1190,&UNK_0eeed4e0);
        func_0x04138180(&puStack_1110);
      }
    }
    func_0x04867c60(&puStack_1190);
    func_0x04867c90(&bStack_13f8,&puStack_1190,auStack_11a0);
    uVar24 = uStack_1310;
    uVar21 = uStack_1314;
    bVar18 = bStack_13f8 & 1;
    if (bVar18 == 0) {
      uVar26 = (ulong)(bStack_13f8 >> 1);
    }
    else {
      uVar26 = CONCAT62(uStack_13ee,uStack_13f0);
    }
    if (uVar26 != 0) {
      puVar27 = (undefined7 *)CONCAT62(uStack_13e6,uStack_13e8);
      puVar34 = puVar27;
      if (bVar18 == 0) {
        puVar34 = &uStack_13f7;
      }
      if (*(char *)((long)puVar34 + (uVar26 - 1)) == '\n') {
        lVar35 = uVar26 - 1;
        if (bVar18 == 0) {
          bStack_13f8 = (char)lVar35 * '\x02';
          puVar27 = &uStack_13f7;
        }
        else {
          uStack_13f0 = (undefined2)lVar35;
          uStack_13ee = (undefined6)((ulong)lVar35 >> 0x10);
        }
        *(undefined1 *)((long)puVar27 + lVar35) = 0;
        bVar18 = bStack_13f8 & 1;
      }
    }
    if (bVar18 == 0) {
      puVar27 = &uStack_13f7;
    }
    else {
      puVar27 = (undefined7 *)CONCAT62(uStack_13e6,uStack_13e8);
    }
    func_0x0eede920(0,1,0,0xc,2,&UNK_01411dac,0x3b3,&UNK_012577be,puVar27);
    *(undefined1 *)(param_2 + 0x466) = *(undefined1 *)(param_2 + 0x1c0);
    if ((bStack_14a9 & 1) != 0) {
      *(undefined4 *)(param_2 + 0x3f8) = uStack_1434;
      *(uint *)(param_2 + 0x3fc) = uStack_143c & 0xff | uVar21 << 8;
      *(char *)(param_2 + 0x400) = (char)uStack_1290;
      *(undefined2 *)(param_2 + 0x401) = uStack_140b;
      *(undefined1 *)(param_2 + 0x403) = uStack_1409;
      *(uint *)(param_2 + 0x404) = uStack_1438 & 0xff | uVar24 << 8;
      *(char *)(param_2 + 0x408) = (char)uStack_1288;
      *(undefined2 *)(param_2 + 0x409) = uStack_140e;
      *(undefined1 *)(param_2 + 0x40b) = uStack_140c;
      *(undefined1 *)(param_2 + 0x40c) = uStack_14aa;
      *(undefined1 *)(param_2 + 0x40d) = uStack_14ab;
      *(undefined1 *)(param_2 + 0x40e) = uStack_14ac;
      *(int *)(param_2 + 0x410) = iStack_1430;
      *(int *)(param_2 + 0x414) = iStack_142c;
      if (*(char *)(param_2 + 0x418) == '\0') {
        *(undefined1 *)(param_2 + 0x418) = 1;
      }
    }
    if ((bStack_13f8 & 1) != 0) {
      func_0x0412a280(CONCAT62(uStack_13e6,uStack_13e8),
                      CONCAT71(uStack_13f7,bStack_13f8) & 0xfffffffffffffffe);
    }
    iVar22 = iStack_130c;
    puStack_1190 = &UNK_0ef40ca0;
    if ((uStack_1188 & 1) != 0) {
      func_0x0412a280(apuStack_1180[1],uStack_1188 & 0xfffffffffffffffe);
    }
    func_0x04867c50(&puStack_1190);
    func_0x04863610(auStack_11a0);
  }
  else {
    func_0x0eede920(0,1,0,0xc,8,&UNK_01411dac,0x8a,&UNK_01447349);
  }
  return iVar22 == 0;
}



/* ---- referenced strings ----
 * 0x14e7c60  nity-sift-config
 * 0x14ea360          
 */
