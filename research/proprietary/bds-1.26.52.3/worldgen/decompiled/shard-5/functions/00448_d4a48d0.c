/*
 * Recovered pseudocode - proprietary BDS binary (evidence, not source).
 * Entry: 0xd5a48d0 (ELF vaddr 0xd4a48d0)
 * Label: caller-of-callee
 * Body:  [[0d5a48d0, 0d5a4964] [0d5a4970, 0d5a49e1] [0d5a49f0, 0d5a5089] [0d5a5090, 0d5a5185] [0d5a5190, 0d5a58d2] [0d5a58e0, 0d5a7387] [0d5a73cd, 0d5a7430] [0d5a74a6, 0d5a74de] [0d5a75cb, 0d5a75d9] [0d5a75ed, 0d5a7634]]
 * Ghidra: FUN_0d5a48d0
 */


/* WARNING: Removing unreachable block (ram,0x0d5a6abf) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0d5a48d0(long param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  undefined1 uVar19;
  undefined7 *puVar20;
  char cVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  undefined4 uVar25;
  int *piVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  ulong *puVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  ulong uVar39;
  ulong uVar40;
  char *pcVar41;
  char cVar42;
  undefined **ppuVar43;
  long *plVar44;
  char *pcVar45;
  char *pcVar46;
  ulong uVar47;
  undefined7 *puVar48;
  long *plVar49;
  ulong *puVar50;
  undefined1 *puVar51;
  ulong uVar52;
  ulong uVar53;
  long *plVar54;
  bool bVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  undefined1 auVar59 [16];
  long *plStack_14d8;
  undefined1 auStack_14c8 [16];
  undefined1 auStack_14b8 [16];
  long *plStack_14a8;
  undefined7 *puStack_14a0;
  undefined8 uStack_1498;
  long *plStack_1490;
  ulong uStack_1488;
  ulong uStack_1480;
  undefined8 uStack_1478;
  long *plStack_1470;
  undefined1 auStack_1468 [16];
  ulong uStack_1458;
  undefined1 auStack_1450 [16];
  long *plStack_1440;
  ulong uStack_1438;
  char cStack_1430;
  undefined1 auStack_1428 [72];
  ulong auStack_13e0 [2];
  long *plStack_13d0;
  undefined1 auStack_13c8 [16];
  undefined1 *puStack_13b8;
  byte bStack_13b0;
  undefined7 uStack_13af;
  long *plStack_13a8;
  undefined7 *puStack_13a0;
  undefined1 auStack_1398 [16];
  ulong uStack_1388;
  long *plStack_1378;
  long lStack_1370;
  undefined1 auStack_1368 [16];
  undefined1 *puStack_1358;
  undefined1 auStack_1350 [16];
  undefined7 *puStack_1340;
  byte bStack_1338;
  undefined7 uStack_1337;
  long *plStack_1330;
  ulong uStack_1328;
  byte bStack_1320;
  undefined1 auStack_1318 [16];
  undefined1 auStack_1308 [16];
  long *plStack_12f8;
  undefined7 *puStack_12f0;
  undefined8 uStack_12e8;
  long *plStack_12e0;
  char cStack_12d8;
  long *plStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  long *plStack_12b0;
  undefined1 auStack_12a8 [16];
  long *plStack_1298;
  undefined7 *puStack_1290;
  undefined8 uStack_1288;
  long *plStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  long *plStack_1268;
  undefined *puStack_1258;
  long *plStack_1250;
  undefined1 auStack_1248 [16];
  long *plStack_1238;
  undefined1 auStack_1230 [16];
  long *plStack_1220;
  undefined1 auStack_1218 [16];
  undefined1 *puStack_1208;
  undefined8 uStack_1200;
  long *plStack_11f8;
  undefined7 *puStack_11f0;
  undefined8 uStack_11e8;
  long *plStack_11e0;
  ulong uStack_11d8;
  long lStack_11c8;
  long *plStack_11c0;
  undefined1 auStack_11b8 [16];
  undefined1 auStack_11a8 [16];
  long *plStack_1198;
  undefined1 auStack_1190 [16];
  long *plStack_1180;
  undefined4 uStack_1178;
  undefined4 uStack_1174;
  undefined8 uStack_1170;
  undefined1 auStack_1168 [16];
  undefined1 auStack_1158 [16];
  undefined1 auStack_1148 [16];
  ulong uStack_1138;
  long *plStack_1130;
  undefined1 auStack_1128 [16];
  undefined8 uStack_1118;
  undefined1 auStack_1110 [16];
  long *plStack_1100;
  ulong uStack_10f8;
  long *plStack_10f0;
  undefined1 auStack_10e8 [16];
  undefined8 uStack_10d8;
  undefined1 auStack_10d0 [16];
  long *plStack_10c0;
  ulong uStack_10b8;
  long *plStack_10b0;
  undefined1 auStack_10a8 [16];
  undefined1 auStack_1098 [16];
  undefined1 auStack_1088 [16];
  ulong uStack_1078;
  long *plStack_1070;
  undefined1 auStack_1068 [16];
  undefined1 auStack_1058 [16];
  undefined1 auStack_1048 [16];
  undefined1 auStack_1038 [4104];
  char *pcVar34;
  
  func_0x0eee2dd0(auStack_1038,0,0x1000);
  uStack_12c0 = 0;
  uVar23 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))
                     (*(long **)(param_1 + 0xb8),auStack_1038,0x1000,&uStack_12c0);
  if (uVar23 != 0) {
    lStack_11c8 = param_1 + 0xc0;
    plStack_11c0 = (long *)(param_1 + 0xc1);
    lVar31 = param_1 + 0x88;
    lStack_1370 = lVar31;
    do {
      if ((int)uVar23 < 0) {
        iVar24 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
        if (iVar24 == 0xb) {
          return;
        }
        if (iVar24 == 0x73) {
          return;
        }
        uVar25 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
        func_0x0d56b0d0(param_1,3,&UNK_013d7f28,uVar25);
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x68))();
        lVar33 = *(long *)(param_1 + 0x90);
        *(long *)(param_1 + 0xa0) = lVar33;
        while (lVar33 != lVar31) {
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar33 + 8);
          (**(code **)(lVar33 + 0x10))(lVar33 + 0x10,param_1);
          lVar33 = *(long *)(param_1 + 0xa0);
        }
        return;
      }
      if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
        uVar39 = (ulong)(*(byte *)(param_1 + 0xc0) >> 1) + (ulong)uVar23;
      }
      else {
        uVar39 = *(long *)(param_1 + 200) + (ulong)uVar23;
      }
      if (0x10000 < uVar39) {
        func_0x0d56b0d0(param_1,3,&UNK_013890f3,0x10000);
        (**(code **)(**(long **)(param_1 + 0xb8) + 0x68))();
        lVar33 = *(long *)(param_1 + 0x90);
        *(long *)(param_1 + 0xa0) = lVar33;
        while (lVar33 != lVar31) {
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar33 + 8);
          (**(code **)(lVar33 + 0x10))(lVar33 + 0x10,param_1);
          lVar33 = *(long *)(param_1 + 0xa0);
        }
        return;
      }
      func_0x0412f8c0(lStack_11c8,auStack_1038);
      bVar55 = (*(byte *)(param_1 + 0xc0) & 1) == 0;
      plVar30 = *(long **)(param_1 + 0xd0);
      if (bVar55) {
        plVar30 = plStack_11c0;
      }
      uVar39 = (ulong)(*(byte *)(param_1 + 0xc0) >> 1);
      if (!bVar55) {
        uVar39 = *(ulong *)(param_1 + 200);
      }
      if (1 < uVar39) {
        if (((char)*plVar30 == '\x16') && (*(char *)((long)plVar30 + 1) == '\x03')) {
          func_0x0d56b0d0(param_1,3,&UNK_0138912e);
          uStack_1478 = (undefined *)CONCAT17(uStack_1478._7_1_,0x28020200000000);
          uStack_1478 = (undefined *)CONCAT44(uStack_1478._4_4_,0x10315);
          (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))
                    (*(long **)(param_1 + 0xb8),&uStack_1478,7);
          (**(code **)(**(long **)(param_1 + 0xb8) + 0x68))();
          lVar33 = *(long *)(param_1 + 0x90);
          *(long *)(param_1 + 0xa0) = lVar33;
          while (lVar33 != lVar31) {
            *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar33 + 8);
            (**(code **)(lVar33 + 0x10))(lVar33 + 0x10,param_1);
            lVar33 = *(long *)(param_1 + 0xa0);
          }
          return;
        }
        if (3 < (long)uVar39) {
          piVar1 = (int *)((long)plVar30 + uVar39);
          plVar54 = plVar30;
LAB_0d5a4a70:
          piVar26 = (int *)memchr(plVar54,0xd,uVar39 - 3);
          if (piVar26 != (int *)0x0) {
            if (*piVar26 != 0xa0d0a0d) goto code_r0x0d5a4a91;
            plVar54 = (long *)((long)piVar26 - (long)plVar30);
            if (plVar54 != (long *)0xffffffffffffffff && piVar26 != piVar1) {
              auStack_1398 = (undefined1  [16])0x0;
              plStack_13a8 = (long *)0x0;
              puStack_13a0 = (undefined7 *)0x0;
              puStack_13b8 = (undefined1 *)0x0;
              bStack_13b0 = 0;
              uStack_13af = 0;
              auStack_13c8 = (undefined1  [16])0x0;
              uStack_1388 = 0;
              plVar29 = (long *)memchr(plVar30,0xd,(long)plVar54 + 1);
              if ((short)*plVar29 != 0xa0d) {
                do {
                  plVar29 = (long *)memchr((long)plVar29 + 1U,0xd,
                                           ~((long)plVar29 + 1U) + (long)plVar30 + (long)plVar54 + 2
                                          );
                } while ((short)*plVar29 != 0xa0d);
              }
              uVar39 = (long)plVar29 - (long)plVar30;
              uVar53 = (long)plVar54 + 2U;
              if (uVar39 <= (long)plVar54 + 2U) {
                uVar53 = uVar39;
              }
              if (plVar29 == plVar30) {
LAB_0d5a5a8e:
                plVar30 = (long *)func_0x0412dc70();
                puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
                if (puVar28 == (undefined8 *)0x0) {
                  func_0x0eec74c0(0x30,0);
                }
                uVar27 = _UNK_013891ad;
                *(ulong *)((long)puVar28 + 0x1a) = CONCAT26(_UNK_013891ab,_DAT_013891a5);
                *(undefined8 *)((long)puVar28 + 0x22) = uVar27;
                uVar27 = CONCAT62(_DAT_013891a5,_UNK_013891a3);
                puVar28[2] = _DAT_0138919b;
                puVar28[3] = uVar27;
                uVar27 = _UNK_01389193;
                *puVar28 = _DAT_0138918b;
                puVar28[1] = uVar27;
                *(undefined1 *)((long)puVar28 + 0x2a) = 0;
                auStack_1468._8_8_ = _UNK_0f479a50;
                auStack_1468._0_8_ = _DAT_0f479a48;
                uStack_1478 = (undefined *)_DAT_0f479a38;
                plStack_1470 = (long *)_UNK_0f479a40;
                uStack_1458 = 0x31;
                auStack_1450._0_8_ = 0x2a;
                uStack_1438 = uStack_1438 & 0xffffffffffffff00;
                plStack_1440 = (long *)((ulong)plStack_1440 & 0xff000000);
                cStack_1430 = '\x01';
                uStack_1278 = 0;
                uStack_1270 = 0;
                plStack_1268 = (long *)0x0;
                auStack_1450._8_8_ = puVar28;
                func_0x0eee17a0(&uStack_1278,&uStack_1478,auStack_1428,1);
                if ((cStack_1430 == '\x01') && ((uStack_1458 & 1) != 0)) {
                  func_0x0412a280(auStack_1450._8_8_,uStack_1458 & 0xfffffffffffffffe);
                }
                auVar59 = auStack_1318;
                auStack_1318._0_4_ = 0x4a;
                auStack_1318._8_8_ = plVar30;
                auVar3 = auStack_1318;
                auStack_1318._4_4_ = auVar59._4_4_;
                uStack_1478 = (undefined *)CONCAT44(auStack_1318._4_4_,0x4a);
                uStack_12e8 = 0;
                plStack_12e0 = (long *)0x0;
                plStack_12f8 = (long *)0x0;
                puStack_12f0 = (undefined7 *)0x0;
                auStack_1308 = (undefined1  [16])0x0;
                uStack_1488 = uStack_1488 & 0xffffffffffffff00;
                auStack_14c8._4_4_ = auStack_1318._4_4_;
                auStack_14c8._0_4_ = 0x4a;
                auStack_14c8._8_8_ = plVar30;
                auStack_14b8._8_8_ = uStack_1270;
                auStack_14b8._0_8_ = uStack_1278;
                plStack_14a8 = plStack_1268;
                auStack_1468 = (undefined1  [16])0x0;
                uStack_1458 = 0;
                puStack_14a0 = (undefined7 *)0x0;
                uStack_1498 = 0;
                plStack_1490 = (long *)0x0;
                auStack_1450 = (undefined1  [16])0x0;
                plStack_1440 = (long *)0x0;
                plStack_1470 = plVar30;
                auStack_1318 = auVar3;
                func_0x048e6d60(&uStack_1478);
                puVar28 = (undefined8 *)auStack_1318;
LAB_0d5a5ee7:
                func_0x048e6d60(puVar28);
                uStack_11d8 = CONCAT71(uStack_11d8._1_7_,(byte)uStack_1488);
                plVar49 = plStack_14a8;
                puVar20 = puStack_14a0;
                uVar13 = uStack_1498;
                plVar44 = plStack_1490;
                plVar30 = plStack_11f8;
                puVar48 = puStack_11f0;
                uVar27 = uStack_11e8;
                plVar32 = plStack_11e0;
joined_r0x0d5a5efa:
                plStack_11e0 = plVar44;
                uStack_11e8 = uVar13;
                puStack_11f0 = puVar20;
                plStack_11f8 = plVar49;
                uVar53 = uStack_1488 & 0xff;
                plStack_14a8 = plStack_11f8;
                puStack_14a0 = puStack_11f0;
                uStack_1498 = uStack_11e8;
                plStack_1490 = plStack_11e0;
                if ((byte)uStack_1488 == '\0') {
                  puStack_1208 = (undefined1 *)auStack_14b8._0_8_;
                  uStack_1200 = auStack_14b8._8_8_;
                  auStack_14b8 = (undefined1  [16])0x0;
                  plStack_14a8 = (long *)0x0;
                  puStack_14a0 = (undefined7 *)0x0;
                  uStack_1498 = 0;
                  plStack_1490 = (long *)0x0;
                  auStack_1218 = auStack_14c8;
                  func_0x048e6d60(auStack_14c8);
                  uVar53 = uStack_11d8 & 0xff;
                  plVar30 = plStack_11f8;
                  puVar48 = puStack_11f0;
                  uVar27 = uStack_11e8;
                  plVar32 = plStack_11e0;
                }
LAB_0d5a5f75:
                plStack_11e0 = plVar32;
                uStack_11e8 = uVar27;
                puStack_11f0 = puVar48;
                plStack_11f8 = plVar30;
                if ((uVar53 & 1) == 0) {
                  func_0x0d5a7c00(auStack_1218);
                  plStack_1330 = plStack_11e0;
                  uVar27 = uStack_11e8;
                  puStack_1340 = puStack_11f0;
                  auStack_1350._8_8_ = plStack_11f8;
                  auStack_1350._0_8_ = uStack_1200;
                  puStack_1358 = puStack_1208;
                  uStack_1078 = auStack_1218._0_8_;
                  plStack_1070 = (long *)auStack_1218._8_8_;
                  puStack_1208 = (undefined1 *)0x0;
                  uStack_1200 = 0;
                  plStack_11f8 = (long *)0x0;
                  puStack_11f0 = (undefined7 *)0x0;
                  uStack_11e8 = 0;
                  plStack_11e0 = (long *)0x0;
                  uStack_1478 = (undefined *)auStack_1218._0_8_;
                  plStack_1470 = (long *)auStack_1218._8_8_;
                  auStack_1048 = (undefined1  [16])0x0;
                  auStack_1058 = (undefined1  [16])0x0;
                  auStack_1068 = (undefined1  [16])0x0;
                  bStack_1320 = 0;
                  auStack_1368 = auStack_1218;
                  auStack_1468 = (undefined1  [16])0x0;
                  uStack_1458 = 0;
                  bStack_1338 = (byte)uVar27;
                  uStack_1337 = (undefined7)((ulong)uVar27 >> 8);
                  auStack_1450 = (undefined1  [16])0x0;
                  plStack_1440 = (long *)0x0;
                  func_0x048e6d60(&uStack_1478);
                  func_0x048e6d60(&uStack_1078);
                  lVar31 = lStack_1370;
                  if ((char)uStack_11d8 != '\0') goto LAB_0d5a680f;
LAB_0d5a6cf9:
                  func_0x048e6d60(auStack_1218);
joined_r0x0d5a6d0e:
                  if ((auStack_1398[0] & 1) != 0) {
                    func_0x0412a280(uStack_1388,auStack_1398._0_8_ & 0xfffffffffffffffe);
                  }
                  if ((bStack_13b0 & 1) == 0) {
                  }
                  else {
                    func_0x0412a280(puStack_13a0,
                                    CONCAT71(uStack_13af,bStack_13b0) & 0xfffffffffffffffe);
                  }
                  if ((auStack_13c8[0] & 1) != 0) {
                    func_0x0412a280(puStack_13b8,auStack_13c8._0_8_ & 0xfffffffffffffffe);
                  }
                  goto LAB_0d5a4cb8;
                }
                uVar39 = (long)plVar54 - uVar39;
                if ((long)uVar39 < 2) {
                  lVar31 = 0;
                  bVar55 = false;
LAB_0d5a65a4:
                  if (!bVar55) {
                    lVar31 = 0;
                  }
                  cStack_12d8 = '\x01';
                  auStack_1318._0_8_ = lVar31;
                }
                else {
                  plVar32 = (long *)((long)plVar29 + 2);
                  plVar30 = (long *)((long)plVar32 + uVar39);
                  bVar55 = false;
                  lVar31 = 0;
                  plVar29 = plVar32;
                  uVar53 = uVar39;
                  while( true ) {
                    plVar32 = (long *)memchr(plVar32,0xd,uVar39 - 1);
                    if (plVar32 == (long *)0x0) goto LAB_0d5a65a4;
                    if ((short)*plVar32 == 0xa0d) break;
                    plVar32 = (long *)((long)plVar32 + 1);
                    uVar39 = (long)plVar30 - (long)plVar32;
joined_r0x0d5a6274:
                    if ((long)uVar39 < 2) goto LAB_0d5a65a4;
                  }
                  if ((plVar32 == plVar30) ||
                     (uVar39 = (long)plVar32 - (long)plVar29, uVar39 == 0xffffffffffffffff))
                  goto LAB_0d5a65a4;
                  uVar47 = uVar39;
                  if (uVar53 < uVar39) {
                    uVar47 = uVar53;
                  }
                  if (plVar32 == plVar29) goto LAB_0d5a65a4;
                  lVar33 = memchr(plVar29,0x3a,uVar47);
                  uVar40 = lVar33 - (long)plVar29;
                  uVar36 = uVar40;
                  if (uVar47 < uVar40) {
                    uVar36 = uVar47;
                  }
                  lVar37 = lVar31;
                  if (((lVar33 == 0) || (uVar40 == 0xffffffffffffffff)) || (uVar36 != 0xe)) {
LAB_0d5a624a:
                    plVar32 = (long *)((long)plVar29 + uVar39 + 2);
                    plVar30 = (long *)((long)plVar29 + uVar53);
                    uVar39 = uVar53 - (uVar39 + 2);
                    plVar29 = plVar32;
                    uVar53 = uVar39;
                    lVar31 = lVar37;
                    goto joined_r0x0d5a6274;
                  }
                  cVar21 = (char)*plVar29;
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'c') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 1);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'o') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 2);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'n') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 3);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 't') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 4);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'e') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 5);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'n') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 6);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 't') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 7);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != '-') goto LAB_0d5a624a;
                  cVar21 = (char)plVar29[1];
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'l') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 9);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'e') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 10);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'n') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 0xb);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'g') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 0xc);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 't') goto LAB_0d5a624a;
                  cVar21 = *(char *)((long)plVar29 + 0xd);
                  cVar42 = cVar21 + ' ';
                  if (0x19 < (byte)(cVar21 + 0xbfU)) {
                    cVar42 = cVar21;
                  }
                  if (cVar42 != 'h') goto LAB_0d5a624a;
                  if (uVar47 <= uVar40) goto LAB_0d5a737a;
                  auVar59 = func_0x0edfae70((long)plVar29 + uVar40 + 1,uVar47 - (uVar40 + 1),
                                            &UNK_012d654d,2);
                  pcVar34 = auVar59._0_8_;
                  pcVar41 = pcVar34 + auVar59._8_8_;
                  pcVar46 = pcVar41;
                  if (auVar59._8_8_ == 0) {
LAB_0d5a627f:
                    pcVar45 = auVar59._0_8_;
                    if ((pcVar45 == pcVar41) ||
                       (auVar59[8] = *pcVar45 - 0x30U, auVar59._0_8_ = pcVar45, auVar59._9_7_ = 0,
                       pcVar46 = pcVar45, 9 < (byte)(*pcVar45 - 0x30U))) goto LAB_0d5a62cb;
                    lVar33 = 0x14;
                    while (cVar21 = *pcVar45, lVar37 = lVar33, 0xf5 < (byte)(cVar21 - 0x3aU)) {
                      pcVar45 = pcVar45 + 1;
                      lVar37 = lVar33 + -1;
                      (&uStack_1480)[lVar33] = (ulong)(byte)(cVar21 - 0x30);
                      if ((lVar33 == 1) || (lVar33 = lVar37, pcVar45 == pcVar41)) break;
                    }
                    uVar47 = (&uStack_1478)[(int)lVar37];
                    if ((int)lVar37 < 0x12) {
                      lVar33 = (lVar37 << 0x20) >> 0x1d;
                      puVar35 = (ulong *)(auStack_1468 + lVar33 + -8);
                      puVar50 = (ulong *)(auStack_1468 + lVar33);
                      if (auStack_1468 + lVar33 <= auStack_13e0) {
                        puVar50 = auStack_13e0;
                      }
                      puVar51 = (undefined1 *)((long)puVar50 + (-9 - ((long)&uStack_1478 + lVar33)))
                      ;
                      if (puVar51 < (undefined1 *)0x18) {
                        plVar30 = (long *)&UNK_014edbe8;
                      }
                      else {
                        uVar40 = ((ulong)puVar51 >> 3) + 1;
                        uVar52 = uVar40 & 0xfffffffffffffffc;
                        plVar30 = (long *)(&UNK_014edbe8 + uVar52 * 8);
                        puVar35 = puVar35 + uVar52;
                        lVar56 = 0;
                        lVar57 = 0;
                        lVar58 = 0;
                        uVar36 = 0;
                        do {
                          uVar5 = *(ulong *)(auStack_1468 + uVar36 * 8 + lVar33 + -8);
                          uVar6 = *(ulong *)((long)(auStack_1468 + uVar36 * 8 + lVar33 + -8) + 8);
                          uVar7 = *(ulong *)(auStack_1468 + uVar36 * 8 + lVar33 + 8);
                          uVar8 = *(ulong *)((long)(auStack_1468 + uVar36 * 8 + lVar33 + 8) + 8);
                          uVar9 = *(ulong *)(&UNK_014edbe8 + uVar36 * 8);
                          uVar10 = *(ulong *)(&UNK_014edbf0 + uVar36 * 8);
                          uVar11 = *(ulong *)(&UNK_014edbf8 + uVar36 * 8);
                          uVar12 = *(ulong *)(&UNK_014edc00 + uVar36 * 8);
                          uVar47 = uVar47 + ((uVar5 >> 0x20) * (uVar9 & 0xffffffff) +
                                             (uVar9 >> 0x20) * (uVar5 & 0xffffffff) << 0x20) +
                                            (uVar9 & 0xffffffff) * (uVar5 & 0xffffffff);
                          lVar56 = lVar56 + (uVar10 & 0xffffffff) * (uVar6 & 0xffffffff) +
                                   ((uVar6 >> 0x20) * (uVar10 & 0xffffffff) +
                                    (uVar10 >> 0x20) * (uVar6 & 0xffffffff) << 0x20);
                          lVar57 = lVar57 + (uVar11 & 0xffffffff) * (uVar7 & 0xffffffff) +
                                   ((uVar7 >> 0x20) * (uVar11 & 0xffffffff) +
                                    (uVar11 >> 0x20) * (uVar7 & 0xffffffff) << 0x20);
                          lVar58 = lVar58 + (uVar12 & 0xffffffff) * (uVar8 & 0xffffffff) +
                                   ((uVar8 >> 0x20) * (uVar12 & 0xffffffff) +
                                    (uVar12 >> 0x20) * (uVar8 & 0xffffffff) << 0x20);
                          uVar36 = uVar36 + 4;
                        } while (uVar52 != uVar36);
                        uVar47 = uVar47 + lVar58 + lVar56 + lVar57;
                        if (uVar40 == uVar52) goto LAB_0d5a6435;
                      }
                      do {
                        uVar47 = uVar47 + *plVar30 * *puVar35;
                        puVar35 = puVar35 + 1;
                        plVar30 = plVar30 + 1;
                      } while (puVar35 < auStack_13e0);
                    }
LAB_0d5a6435:
                    auVar3._8_8_ = 0;
                    auVar3._0_8_ = auStack_13e0[0];
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = *(ulong *)(&UNK_014edbe0 +
                                             (0x1300000000 - (lVar37 << 0x20) >> 0x1d));
                    uVar36 = SUB168(auVar3 * auVar4,0);
                    pcVar46 = pcVar45 + -(ulong)(SUB168(auVar3 * auVar4,8) != 0);
                    if (pcVar46 == pcVar41) {
                      lVar33 = uVar47 + uVar36;
                      auVar59._8_8_ = lVar33;
                      auVar59._0_8_ = uVar47;
                      if (CARRY8(uVar47,uVar36)) goto LAB_0d5a70b0;
LAB_0d5a6498:
                      auVar59._8_8_ = lVar33;
                      auVar59._0_8_ = uVar47;
                      lVar37 = uVar47 + uVar36;
                      goto LAB_0d5a649b;
                    }
                    lVar33 = CONCAT71((int7)(uVar47 + uVar36 >> 8),CARRY8(uVar47,uVar36));
                    auVar17._8_8_ = lVar33;
                    auVar17._0_8_ = uVar47;
                    auVar59._8_8_ = lVar33;
                    auVar59._0_8_ = uVar47;
                    if ((9 < (byte)(*pcVar46 - 0x30U)) &&
                       (auVar59 = auVar17, !CARRY8(uVar47,uVar36))) goto LAB_0d5a6498;
LAB_0d5a70b0:
                    uVar27 = func_0x0412dc70(auVar59._0_8_,pcVar46,auVar59._8_8_);
                    ppuVar43 = (undefined **)&uStack_12b8;
                    func_0x0d5a8200(ppuVar43,0x4a,uVar27);
                    plStack_12e0 = plStack_1280;
                    uStack_12e8 = uStack_1288;
                    puStack_12f0 = puStack_1290;
                    plStack_12f8 = plStack_1298;
                    auStack_1308 = auStack_12a8;
                    uStack_1478 = (undefined *)uStack_12b8;
                    plStack_1470 = plStack_12b0;
                    auStack_12a8 = (undefined1  [16])0x0;
                    plStack_1298 = (long *)0x0;
                    puStack_1290 = (undefined7 *)0x0;
                    uStack_1288 = 0;
                    plStack_1280 = (long *)0x0;
                    cStack_12d8 = '\0';
                    auStack_1318._8_8_ = plStack_12b0;
                    auStack_1318._0_8_ = uStack_12b8;
                    auStack_1468 = (undefined1  [16])0x0;
                    uStack_1458 = 0;
                    auStack_1450 = (undefined1  [16])0x0;
                    plStack_1440 = (long *)0x0;
                    func_0x048e6d60(&uStack_1478);
                  }
                  else {
                    do {
                      pcVar45 = auVar59._0_8_;
                      if (*pcVar45 != '0') goto LAB_0d5a627f;
                      lVar33 = auVar59._8_8_ + -1;
                      auVar59._8_8_ = lVar33;
                      auVar59._0_8_ = pcVar45 + 1;
                    } while (lVar33 != 0);
LAB_0d5a62cb:
                    if (pcVar46 == pcVar34) goto LAB_0d5a70b0;
                    lVar37 = 0;
LAB_0d5a649b:
                    if (pcVar46 != pcVar41) goto LAB_0d5a70b0;
                    bVar18 = !bVar55;
                    bVar55 = true;
                    if ((bVar18) || (lVar31 == lVar37)) goto LAB_0d5a624a;
                    uVar27 = func_0x0412dc70(auVar59._0_8_,pcVar46,auVar59._8_8_);
                    func_0x0d5a8300(&puStack_1258,0x4a,uVar27);
                    plStack_12e0 = plStack_1220;
                    plStack_12f8 = plStack_1238;
                    auStack_1308 = auStack_1248;
                    uStack_1478 = puStack_1258;
                    plStack_1470 = plStack_1250;
                    auStack_1248 = (undefined1  [16])0x0;
                    plStack_1238 = (long *)0x0;
                    puStack_12f0 = (undefined7 *)auStack_1230._0_8_;
                    uStack_12e8 = auStack_1230._8_8_;
                    auStack_1230 = (undefined1  [16])0x0;
                    plStack_1220 = (long *)0x0;
                    cStack_12d8 = '\0';
                    auStack_1318._8_8_ = plStack_1250;
                    auStack_1318._0_8_ = puStack_1258;
                    auStack_1468 = (undefined1  [16])0x0;
                    uStack_1458 = 0;
                    auStack_1450 = (undefined1  [16])0x0;
                    plStack_1440 = (long *)0x0;
                    func_0x048e6d60(&uStack_1478);
                    ppuVar43 = &puStack_1258;
                  }
                  func_0x048e6d60(ppuVar43);
                }
                lVar31 = lStack_1370;
                uStack_1488 = CONCAT71(uStack_1488._1_7_,cStack_12d8);
                if (cStack_12d8 == '\x01') {
                  auStack_14c8._0_8_ = auStack_1318._0_8_;
                  bVar22 = 1;
                }
                else {
                  auStack_14c8 = auStack_1318;
                  auStack_14b8 = auStack_1308;
                  plStack_14a8 = plStack_12f8;
                  auStack_1308 = (undefined1  [16])0x0;
                  plStack_12f8 = (long *)0x0;
                  puStack_14a0 = puStack_12f0;
                  uStack_1498 = uStack_12e8;
                  plStack_1490 = plStack_12e0;
                  puStack_12f0 = (undefined7 *)0x0;
                  uStack_12e8 = 0;
                  plStack_12e0 = (long *)0x0;
                  func_0x048e6d60(auStack_1318);
                  bVar22 = (byte)uStack_1488;
                }
                if ((bVar22 & 1) == 0) {
                  func_0x0d5a7cc0(auStack_14c8);
                  plStack_1330 = plStack_1490;
                  uVar27 = uStack_1498;
                  puStack_1340 = puStack_14a0;
                  auStack_1350._8_8_ = plStack_14a8;
                  puStack_1358 = (undefined1 *)auStack_14b8._0_8_;
                  auStack_1350._0_8_ = auStack_14b8._8_8_;
                  uStack_10b8 = auStack_14c8._0_8_;
                  plStack_10b0 = (long *)auStack_14c8._8_8_;
                  auStack_14b8 = (undefined1  [16])0x0;
                  plStack_14a8 = (long *)0x0;
                  puStack_14a0 = (undefined7 *)0x0;
                  uStack_1498 = 0;
                  plStack_1490 = (long *)0x0;
                  uStack_1478 = (undefined *)auStack_14c8._0_8_;
                  plStack_1470 = (long *)auStack_14c8._8_8_;
                  auStack_1088 = (undefined1  [16])0x0;
                  auStack_1098 = (undefined1  [16])0x0;
                  auStack_10a8 = (undefined1  [16])0x0;
                  bStack_1320 = 0;
                  auStack_1368 = auStack_14c8;
                  auStack_1468 = (undefined1  [16])0x0;
                  uStack_1458 = 0;
                  bStack_1338 = (byte)uVar27;
                  uStack_1337 = (undefined7)((ulong)uVar27 >> 8);
                  auStack_1450 = (undefined1  [16])0x0;
                  plStack_1440 = (long *)0x0;
                  func_0x048e6d60(&uStack_1478);
                  func_0x048e6d60(&uStack_10b8);
LAB_0d5a67f0:
                  if ((byte)uStack_1488 == '\0') {
                    func_0x048e6d60(auStack_14c8);
                  }
                  if ((char)uStack_11d8 == '\0') goto LAB_0d5a6cf9;
LAB_0d5a680f:
                  goto joined_r0x0d5a6d0e;
                }
                plVar54 = (long *)((long)plVar54 + 4);
                plVar30 = (long *)(auStack_14c8._0_8_ + (long)plVar54);
                if ((long *)0x10000 < plVar30) {
                  uVar27 = func_0x0412dc70();
                  puVar35 = &uStack_10f8;
                  func_0x0d5a7d80(puVar35,0x5a,uVar27);
                  plStack_1330 = plStack_10c0;
                  auStack_1350._8_8_ = uStack_10d8;
                  puStack_1358 = (undefined1 *)auStack_10e8._0_8_;
                  auStack_1350._0_8_ = auStack_10e8._8_8_;
                  auStack_10e8 = (undefined1  [16])0x0;
                  uStack_10d8 = 0;
                  puStack_1340 = (undefined7 *)auStack_10d0._0_8_;
                  uVar27 = auStack_10d0._8_8_;
                  auStack_10d0 = (undefined1  [16])0x0;
                  plStack_10c0 = (long *)0x0;
                  uStack_1478 = (undefined *)uStack_10f8;
                  plStack_1470 = plStack_10f0;
LAB_0d5a6f66:
                  bStack_1320 = 0;
                  auStack_1368._8_8_ = plStack_1470;
                  auStack_1368._0_8_ = uStack_1478;
                  auStack_1468 = (undefined1  [16])0x0;
                  uStack_1458 = 0;
                  bStack_1338 = (byte)uVar27;
                  uStack_1337 = (undefined7)((ulong)uVar27 >> 8);
                  auStack_1450 = (undefined1  [16])0x0;
                  plStack_1440 = (long *)0x0;
                  func_0x048e6d60(&uStack_1478);
                  func_0x048e6d60(puVar35);
                  lVar31 = lStack_1370;
                  goto LAB_0d5a67f0;
                }
                bVar22 = *(byte *)(param_1 + 0xc0);
                if ((bVar22 & 1) == 0) {
                  plVar32 = (long *)(ulong)(bVar22 >> 1);
                }
                else {
                  plVar32 = *(long **)(param_1 + 200);
                }
                if (plVar32 < plVar30) {
                  uVar27 = func_0x0412dc70();
                  puVar35 = &uStack_1138;
                  func_0x0d5a7ec0(puVar35,0xb,uVar27);
                  plStack_1330 = plStack_1100;
                  auStack_1350._8_8_ = uStack_1118;
                  puStack_1358 = (undefined1 *)auStack_1128._0_8_;
                  auStack_1350._0_8_ = auStack_1128._8_8_;
                  auStack_1128 = (undefined1  [16])0x0;
                  uStack_1118 = 0;
                  puStack_1340 = (undefined7 *)auStack_1110._0_8_;
                  uVar27 = auStack_1110._8_8_;
                  auStack_1110 = (undefined1  [16])0x0;
                  plStack_1100 = (long *)0x0;
                  uStack_1478 = (undefined *)uStack_1138;
                  plStack_1470 = plStack_1130;
                  goto LAB_0d5a6f66;
                }
                plVar29 = (long *)auStack_14c8._0_8_;
                if (plVar54 <= plVar32) {
                  plVar49 = plStack_11c0;
                  if ((bVar22 & 1) != 0) {
                    plVar49 = *(long **)(param_1 + 0xd0);
                  }
                  if ((long *)((long)plVar32 - (long)plVar54) < (ulong)auStack_14c8._0_8_) {
                    plVar29 = (long *)((long)plVar32 - (long)plVar54);
                  }
                  if (plVar29 < (long *)0xfffffffffffffff8) {
                    if (plVar29 < (long *)0x17) {
                      uStack_1478 = (undefined *)CONCAT71(uStack_1478._1_7_,(char)plVar29 * '\x02');
                      lVar31 = (long)&uStack_1478 + 1;
                      if (plVar29 != (long *)0x0) goto LAB_0d5a688f;
                    /* WARNING: Ignoring partial resolution of indirect */
                      uStack_1478._1_1_ = 0;
                    }
                    else {
                      uVar39 = ((ulong)plVar29 | 7) + 1;
                      if (((ulong)plVar29 | 7) == 0x17) {
                        uVar39 = 0x1a;
                      }
                      lVar31 = (**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,uVar39);
                      if (lVar31 == 0) {
                        func_0x0eec74c0(uVar39,0);
                      }
                      auStack_1468._0_8_ = lVar31;
                      uStack_1478 = (undefined *)(uVar39 | 1);
                      plStack_1470 = plVar29;
LAB_0d5a688f:
                      func_0x0eee2ee0(lVar31,(long)plVar49 + (long)plVar54,plVar29);
                      *(undefined1 *)(lVar31 + (long)plVar29) = 0;
                    }
                    if ((auStack_1398[0] & 1) != 0) {
                      func_0x0412a280(uStack_1388,auStack_1398._0_8_ & 0xfffffffffffffffe);
                    }
                    uStack_1388 = auStack_1468._0_8_;
                    auStack_1398._0_8_ = uStack_1478;
                    auStack_1398._8_8_ = plStack_1470;
                    func_0x04130370(lStack_11c8,0,plVar30);
                    bStack_1320 = 1;
                    auStack_1368 = auStack_13c8;
                    puStack_1358 = puStack_13b8;
                    auStack_13c8 = (undefined1  [16])0x0;
                    puStack_13b8 = (undefined1 *)0x0;
                    puStack_1340 = puStack_13a0;
                    auStack_1350._1_7_ = uStack_13af;
                    auStack_1350[0] = bStack_13b0;
                    auStack_1350._8_8_ = plStack_13a8;
                    bStack_13b0 = 0;
                    uStack_13af = 0;
                    plStack_13a8 = (long *)0x0;
                    puStack_13a0 = (undefined7 *)0x0;
                    uStack_1328 = uStack_1388;
                    bStack_1338 = (byte)auStack_1398._0_8_;
                    uStack_1337 = SUB87(auStack_1398._0_8_,1);
                    plStack_1330 = (long *)auStack_1398._8_8_;
                    auStack_1398 = (undefined1  [16])0x0;
                    uStack_1388 = 0;
                    lVar31 = lStack_1370;
                    goto LAB_0d5a67f0;
                  }
                  goto LAB_0d5a736b;
                }
                goto LAB_0d5a7370;
              }
              plVar32 = (long *)memchr(plVar30,0x20,uVar53);
              plVar49 = (long *)((long)plVar32 - (long)plVar30);
              if (plVar49 == (long *)0xffffffffffffffff || plVar32 == (long *)0x0)
              goto LAB_0d5a5a8e;
              uVar47 = (long)plVar49 + 1;
              plVar44 = (long *)(uVar53 - uVar47);
              if (uVar53 < uVar47 || plVar44 == (long *)0x0) {
LAB_0d5a5cec:
                plVar30 = (long *)func_0x0412dc70();
                puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x30);
                if (puVar28 == (undefined8 *)0x0) {
                  func_0x0eec74c0(0x30,0);
                }
                uVar27 = _UNK_011cbe0f;
                *(ulong *)((long)puVar28 + 0x1b) = CONCAT35(_UNK_011cbe0c,_DAT_011cbe07);
                *(undefined8 *)((long)puVar28 + 0x23) = uVar27;
                uVar27 = CONCAT53(_DAT_011cbe07,_UNK_011cbe04);
                puVar28[2] = _DAT_011cbdfc;
                puVar28[3] = uVar27;
                uVar27 = _UNK_011cbdf4;
                *puVar28 = _DAT_011cbdec;
                puVar28[1] = uVar27;
                *(undefined1 *)((long)puVar28 + 0x2b) = 0;
                auStack_1468._8_8_ = _UNK_0f479a70;
                auStack_1468._0_8_ = _DAT_0f479a68;
                uStack_1478 = (undefined *)_DAT_0f479a58;
                plStack_1470 = (long *)_UNK_0f479a60;
                uStack_1458 = 0x31;
                auStack_1450._0_8_ = 0x2b;
                uStack_1438 = uStack_1438 & 0xffffffffffffff00;
                plStack_1440 = (long *)((ulong)plStack_1440 & 0xff000000);
                cStack_1430 = '\x01';
                uStack_1278 = 0;
                uStack_1270 = 0;
                plStack_1268 = (long *)0x0;
                auStack_1450._8_8_ = puVar28;
                func_0x0eee17a0(&uStack_1278,&uStack_1478,auStack_1428,1);
                if ((cStack_1430 == '\x01') && ((uStack_1458 & 1) != 0)) {
                  func_0x0412a280(auStack_1450._8_8_,uStack_1458 & 0xfffffffffffffffe);
                }
                uStack_12b8 = (undefined8 *)CONCAT44(uStack_12b8._4_4_,0x4a);
                uStack_1478 = (undefined *)CONCAT44(uStack_12b8._4_4_,0x4a);
                uStack_1288 = 0;
                plStack_1280 = (long *)0x0;
                plStack_1298 = (long *)0x0;
                puStack_1290 = (undefined7 *)0x0;
                auStack_12a8 = (undefined1  [16])0x0;
                uStack_1488 = uStack_1488 & 0xffffffffffffff00;
                auStack_14c8._4_4_ = uStack_12b8._4_4_;
                auStack_14c8._0_4_ = 0x4a;
                auStack_14c8._8_8_ = plVar30;
                auStack_14b8._8_8_ = uStack_1270;
                auStack_14b8._0_8_ = uStack_1278;
                plStack_14a8 = plStack_1268;
                auStack_1468 = (undefined1  [16])0x0;
                uStack_1458 = 0;
                puStack_14a0 = (undefined7 *)0x0;
                uStack_1498 = 0;
                plStack_1490 = (long *)0x0;
                auStack_1450 = (undefined1  [16])0x0;
                plStack_1440 = (long *)0x0;
                plStack_1470 = plVar30;
                plStack_12b0 = plVar30;
                func_0x048e6d60(&uStack_1478);
                puVar28 = &uStack_12b8;
                goto LAB_0d5a5ee7;
              }
              plStack_13d0 = (long *)(uVar47 + (long)plVar30);
              plStack_12c8 = plVar49;
              lVar31 = memchr(plStack_13d0,0x20,plVar44);
              plVar49 = plStack_12c8;
              if (lVar31 - (long)plVar30 == -1 || lVar31 == 0) goto LAB_0d5a5cec;
              plVar38 = (long *)((lVar31 - (long)plVar30) + ~(ulong)plStack_12c8);
              if (plVar44 < plVar38) {
                plVar38 = plVar44;
              }
              plVar44 = plVar30;
              if ((long)plStack_12c8 - 0x11U < 0xfffffffffffffff0) {
LAB_0d5a6afd:
                uVar27 = func_0x0412dc70();
                ppuVar43 = &puStack_1258;
                func_0x0d5a8020(ppuVar43,0x4a,uVar27);
                plStack_1490 = plStack_1220;
                plStack_14a8 = plStack_1238;
                auStack_14b8 = auStack_1248;
                uStack_1478 = puStack_1258;
                plStack_1470 = plStack_1250;
                auStack_1248 = (undefined1  [16])0x0;
                plStack_1238 = (long *)0x0;
                puStack_14a0 = (undefined7 *)auStack_1230._0_8_;
                uStack_1498 = auStack_1230._8_8_;
                auStack_1230 = (undefined1  [16])0x0;
                plStack_1220 = (long *)0x0;
                auStack_14c8._8_8_ = plStack_1250;
                auStack_14c8._0_8_ = puStack_1258;
LAB_0d5a6bae:
                uStack_1488 = uStack_1488 & 0xffffffffffffff00;
                uStack_1458 = 0;
                auStack_1468 = (undefined1  [16])0x0;
                auStack_1450 = (undefined1  [16])0x0;
                plStack_1440 = (long *)0x0;
                func_0x048e6d60(&uStack_1478);
                func_0x048e6d60(ppuVar43);
                uStack_11d8 = CONCAT71(uStack_11d8._1_7_,(byte)uStack_1488);
                plVar49 = plStack_14a8;
                puVar20 = puStack_14a0;
                uVar13 = uStack_1498;
                plVar44 = plStack_1490;
                plVar30 = plStack_11f8;
                puVar48 = puStack_11f0;
                uVar27 = uStack_11e8;
                plVar32 = plStack_11e0;
                goto joined_r0x0d5a5efa;
              }
              do {
                if (0x19 < (byte)((char)*plVar44 + 0xbfU)) goto LAB_0d5a6afd;
                plVar44 = (long *)((long)plVar44 + 1);
              } while (plVar44 != plVar32);
              lVar31 = (long)&uStack_1478 + 1;
              if ((plVar38 == (long *)0x0) || ((char)*plStack_13d0 != '/')) {
                uVar27 = func_0x0412dc70();
                ppuVar43 = (undefined **)auStack_11b8;
                func_0x0d5a8110(ppuVar43,0x4a,uVar27);
                auStack_14b8 = auStack_11a8;
                uStack_1478 = (undefined *)auStack_11b8._0_8_;
                plStack_1470 = (long *)auStack_11b8._8_8_;
                plStack_14a8 = plStack_1198;
                auStack_11a8 = (undefined1  [16])0x0;
                plStack_1198 = (long *)0x0;
                plStack_1490 = plStack_1180;
                puStack_14a0 = (undefined7 *)auStack_1190._0_8_;
                uStack_1498 = auStack_1190._8_8_;
                auStack_1190 = (undefined1  [16])0x0;
                plStack_1180 = (long *)0x0;
                auStack_14c8 = auStack_11b8;
                goto LAB_0d5a6bae;
              }
              if (plStack_12c8 < (long *)0xfffffffffffffff8) {
                plStack_1378 = plVar38;
                if (plStack_12c8 < (long *)0x17) {
                  uStack_1478 = (undefined *)CONCAT71(uStack_1478._1_7_,(char)plStack_12c8 * '\x02')
                  ;
                  if (plVar32 != plVar30) goto LAB_0d5a6970;
                }
                else {
                  uVar53 = ((ulong)plStack_12c8 | 7) + 1;
                  if (((ulong)plStack_12c8 | 7) == 0x17) {
                    uVar53 = 0x1a;
                  }
                  lVar31 = FUN_0ee32660(uVar53);
                  auStack_1468._0_8_ = lVar31;
                  uStack_1478 = (undefined *)(uVar53 | 1);
                  plStack_1470 = plVar49;
LAB_0d5a6970:
                  func_0x0eee2f00(lVar31,plVar30,plVar49);
                }
                *(undefined1 *)(lVar31 + (long)plStack_12c8) = 0;
                if ((auStack_13c8[0] & 1) != 0) {
                  func_0x0412a280(puStack_13b8,auStack_13c8._0_8_ & 0xfffffffffffffffe);
                }
                puStack_13b8 = (undefined1 *)auStack_1468._0_8_;
                auStack_13c8._8_8_ = plStack_1470;
                auStack_13c8._0_8_ = uStack_1478;
                if (plStack_1378 < (long *)0x17) {
                  uStack_1478 = (undefined *)CONCAT71(uStack_1478._1_7_,(char)plStack_1378 * '\x02')
                  ;
                  lVar31 = (long)&uStack_1478 + 1;
                }
                else {
                  uVar53 = ((ulong)plStack_1378 | 7) + 1;
                  if (((ulong)plStack_1378 | 7) == 0x17) {
                    uVar53 = 0x1a;
                  }
                  lVar31 = FUN_0ee32660(uVar53);
                  auStack_1468._0_8_ = lVar31;
                  uStack_1478 = (undefined *)(uVar53 | 1);
                  plStack_1470 = plStack_1378;
                }
                plVar30 = plStack_1378;
                func_0x0eee2f00(lVar31,plStack_13d0);
                *(undefined1 *)(lVar31 + (long)plVar30) = 0;
                if ((bStack_13b0 & 1) != 0) {
                  func_0x0412a280(puStack_13a0,
                                  CONCAT71(uStack_13af,bStack_13b0) & 0xfffffffffffffffe);
                }
                puStack_13a0 = (undefined7 *)auStack_1468._0_8_;
                plStack_13a8 = plStack_1470;
                bStack_13b0 = (byte)uStack_1478;
                uStack_13af = (undefined7)((ulong)uStack_1478 >> 8);
                auStack_14c8 = (undefined1  [16])0x0;
                auStack_14b8 = (undefined1  [16])0x0;
                plStack_14a8 = (long *)0x0;
                puStack_14a0 = (undefined7 *)0x0;
                uStack_1498 = 0;
                plStack_1490 = (long *)0x0;
                uStack_1488 = 1;
                uStack_11d8 = CONCAT71(uStack_11d8._1_7_,1);
                uVar53 = uStack_1488;
                plVar30 = plStack_11f8;
                puVar48 = puStack_11f0;
                uVar27 = uStack_11e8;
                plVar32 = plStack_11e0;
                goto LAB_0d5a5f75;
              }
              goto LAB_0d5a7375;
            }
          }
        }
      }
LAB_0d5a4ac0:
      uVar27 = func_0x0412dc70();
      puVar28 = (undefined8 *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x20);
      if (puVar28 == (undefined8 *)0x0) {
        func_0x0eec74c0(0x20,0);
      }
      uVar13 = _UNK_014dc35d;
      *(ulong *)((long)puVar28 + 0xd) = CONCAT53(_UNK_014dc358,_DAT_014dc355);
      *(undefined8 *)((long)puVar28 + 0x15) = uVar13;
      uVar13 = CONCAT35(_DAT_014dc355,_UNK_014dc350);
      *puVar28 = _DAT_014dc348;
      puVar28[1] = uVar13;
      *(undefined1 *)((long)puVar28 + 0x1d) = 0;
      auStack_1468._8_8_ = _UNK_0f479a30;
      auStack_1468._0_8_ = _DAT_0f479a28;
      uStack_1478 = (undefined *)_DAT_0f479a18;
      plStack_1470 = (long *)_UNK_0f479a20;
      uStack_1458 = 0x21;
      auStack_1450._0_8_ = 0x1d;
      uStack_1438 = uStack_1438 & 0xffffffffffffff00;
      plStack_1440 = (long *)((ulong)plStack_1440 & 0xff000000);
      cStack_1430 = '\x01';
      auStack_13c8 = ZEXT816(0);
      puStack_13b8 = (undefined1 *)0x0;
      auStack_1450._8_8_ = puVar28;
      func_0x0eee17a0(auStack_13c8,&uStack_1478,auStack_1428,1);
      if ((cStack_1430 == '\x01') && ((uStack_1458 & 1) != 0)) {
        func_0x0412a280(auStack_1450._8_8_,uStack_1458 & 0xfffffffffffffffe);
      }
      uStack_1178 = 0xb;
      uStack_1478 = (undefined *)CONCAT44(uStack_1174,0xb);
      auStack_1148 = (undefined1  [16])0x0;
      auStack_1158 = (undefined1  [16])0x0;
      auStack_1168 = (undefined1  [16])0x0;
      bStack_1320 = 0;
      auStack_1368._4_4_ = uStack_1174;
      auStack_1368._0_4_ = 0xb;
      auStack_1368._8_8_ = uVar27;
      puStack_1358 = (undefined1 *)auStack_13c8._0_8_;
      auStack_1350._8_8_ = puStack_13b8;
      auStack_1350._0_8_ = auStack_13c8._8_8_;
      auStack_1468 = (undefined1  [16])0x0;
      uStack_1458 = 0;
      puStack_1340 = (undefined7 *)0x0;
      bStack_1338 = 0;
      uStack_1337 = 0;
      plStack_1330 = (long *)0x0;
      auStack_1450 = (undefined1  [16])0x0;
      plStack_1440 = (long *)0x0;
      plStack_1470 = (long *)uVar27;
      uStack_1170 = uVar27;
      func_0x048e6d60(&uStack_1478);
      func_0x048e6d60(&uStack_1178);
LAB_0d5a4cb8:
      uStack_1478 = (undefined *)0x8b5d6e0d029ff060;
      plStack_1470 = (long *)&UNK_0140f690;
      auStack_1468._8_4_ = 0x1c6;
      auStack_1468._0_8_ = 1;
      if (bStack_1320 == 0) {
        auStack_13c8 = (undefined1  [16])0x0;
        puStack_13b8 = (undefined1 *)0x0;
        func_0x0eedeb80(2,0x2d,auStack_1368,auStack_13c8,&uStack_1478);
        if ((auStack_13c8[0] & 1) != 0) {
          func_0x0412a280(puStack_13b8,auStack_13c8._0_8_ & 0xfffffffffffffffe);
        }
      }
      uVar39 = uStack_1328;
      plVar30 = plStack_1330;
      puVar48 = puStack_1340;
      auVar3 = auStack_1350;
      puVar51 = puStack_1358;
      auVar59 = auStack_1368;
      if ((bStack_1320 & 1) == 0) {
        plStack_1470 = (long *)func_0x0412dc70();
        uStack_1478 = (undefined *)CONCAT44(uStack_1478._4_4_,0xb);
        cVar21 = (**(code **)(*(long *)auStack_1368._8_8_ + 0x20))
                           (auStack_1368._8_8_,auStack_1368._0_4_,&uStack_1478);
        if ((cVar21 == '\0') &&
           (cVar21 = (**(code **)(*plStack_1470 + 0x28))
                               (plStack_1470,auStack_1368,(ulong)uStack_1478 & 0xffffffff),
           cVar21 == '\0')) {
          func_0x0eede540(&uStack_1478,auStack_1368);
          lVar33 = (long)&uStack_1478 + 1;
          if (((ulong)uStack_1478 & 1) != 0) {
            lVar33 = auStack_1468._0_8_;
          }
          func_0x0d56b0d0(param_1,3,&UNK_0131dbec,lVar33);
          if (((ulong)uStack_1478 & 1) != 0) {
            func_0x0412a280(auStack_1468._0_8_,(ulong)uStack_1478 & 0xfffffffffffffffe);
          }
          (**(code **)(**(long **)(param_1 + 0xb8) + 0x68))();
          lVar33 = *(long *)(param_1 + 0x90);
          *(long *)(param_1 + 0xa0) = lVar33;
          while (lVar33 != lVar31) {
            *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar33 + 8);
            (**(code **)(lVar33 + 0x10))(lVar33 + 0x10,param_1);
            lVar33 = *(long *)(param_1 + 0xa0);
          }
        }
      }
      else {
        auStack_1368 = (undefined1  [16])0x0;
        puStack_1358 = (undefined1 *)0x0;
        plStack_13a8 = (long *)auStack_1350._8_8_;
        auStack_1350 = (undefined1  [16])0x0;
        puStack_1340 = (undefined7 *)0x0;
        auStack_1398._0_8_ = CONCAT71(uStack_1337,bStack_1338);
        bStack_1338 = 0;
        uStack_1337 = 0;
        plStack_1330 = (long *)0x0;
        uStack_1328 = 0;
        puStack_13b8 = puVar51;
        auStack_13c8 = auVar59;
        auStack_1218 = (undefined1  [16])0x0;
        puStack_1208 = (undefined1 *)0x0;
        puStack_13a0 = puVar48;
        bStack_13b0 = auVar3[0];
        uStack_13af = auVar3._1_7_;
        uStack_1200 = 0;
        plStack_11f8 = (long *)0x0;
        puStack_11f0 = (undefined7 *)0x0;
        uStack_1388 = uVar39;
        auStack_1398._8_8_ = plVar30;
        uStack_11e8 = 0;
        plStack_11e0 = (long *)0x0;
        uStack_11d8 = 0;
        func_0x041c1780(*(undefined8 *)(param_1 + 0xd8));
        puVar51 = auStack_13c8 + 1;
        if ((auStack_13c8[0] & 1) != 0) {
          puVar51 = puStack_13b8;
        }
        puVar48 = &uStack_13af;
        if ((bStack_13b0 & 1) != 0) {
          puVar48 = puStack_13a0;
        }
        func_0x0d56b0d0(param_1,5,&UNK_01200ad7,puVar51,puVar48);
        auStack_1450._0_8_ = puStack_13a0;
        auStack_1468._0_8_ = puStack_13b8;
        uStack_1478 = (undefined *)auStack_13c8._0_8_;
        plStack_1470 = (long *)auStack_13c8._8_8_;
        auStack_13c8 = (undefined1  [16])0x0;
        puStack_13b8 = (undefined1 *)0x0;
        auStack_1468._9_7_ = uStack_13af;
        auStack_1468[8] = bStack_13b0;
        uStack_1458 = (ulong)plStack_13a8;
        bStack_13b0 = 0;
        uStack_13af = 0;
        plStack_13a8 = (long *)0x0;
        puStack_13a0 = (undefined7 *)0x0;
        uStack_1438 = uStack_1388;
        auStack_1450._8_8_ = auStack_1398._0_8_;
        plStack_1440 = (long *)auStack_1398._8_8_;
        auStack_1398 = (undefined1  [16])0x0;
        uStack_1388 = 0;
        (**(code **)(**(long **)(param_1 + 0xb0) + 0x58))
                  (auStack_11b8,*(long **)(param_1 + 0xb0),&uStack_1478);
        if ((auStack_1450[8] & 1) == 0) {
        }
        else {
          func_0x0412a280(uStack_1438,auStack_1450._8_8_ & 0xfffffffffffffffe);
        }
        if ((auStack_1468[8] & 1) != 0) {
          func_0x0412a280(auStack_1450._0_8_,auStack_1468._8_8_ & 0xfffffffffffffffe);
        }
        if (((ulong)uStack_1478 & 1) != 0) {
          func_0x0412a280(auStack_1468._0_8_,(ulong)uStack_1478 & 0xfffffffffffffffe);
        }
        plVar30 = *(long **)(param_1 + 0xb0);
        plStack_12b0 = *(long **)(param_1 + 0x30);
        uVar27 = *(undefined8 *)(param_1 + 0x38);
        if (*(long *)(param_1 + 0x38) != 0) {
          LOCK();
          plVar54 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
          *plVar54 = *plVar54 + 1;
          UNLOCK();
        }
        puStack_1258 = &UNK_013f1adb;
        plStack_1250 = (long *)0x3d;
        auStack_1248._8_8_ = 0xffffffff00000001;
        auStack_1248._0_8_ = _DAT_0f778528;
        plStack_1238 = (long *)((ulong)plStack_1238 & 0xffffffffffffff00);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = auStack_1230._8_8_;
        auStack_1230 = auVar14 << 0x40;
        plStack_13d0 = (long *)auStack_11b8._0_8_;
        uVar13 = auStack_11b8._8_8_;
        plStack_14d8 = (long *)auStack_11b8._8_8_;
        auStack_11b8 = (undefined1  [16])0x0;
        uStack_12b8 = (undefined8 *)&UNK_0f479d88;
        auStack_12a8._0_8_ = uVar27;
        plVar29 = (long *)(**(code **)(_DAT_0f5463b0 + 0x10))(&DAT_0f5463b0,0x1d0);
        if (plVar29 == (long *)0x0) {
          func_0x0eec74c0(0x1d0,0);
        }
        *(undefined1 (*) [16])(plVar29 + 1) = (undefined1  [16])0x0;
        *plVar29 = (long)&UNK_0f479b88;
        auStack_1318 = (undefined1  [16])0x0;
        if (uStack_12b8 == (undefined8 *)0x0) {
          puVar28 = (undefined8 *)0x0;
        }
        else {
          (*(code *)*uStack_12b8)(&uStack_12b8,auStack_1318);
          puVar28 = uStack_12b8;
        }
        plVar32 = plVar30 + 0x15;
        plVar49 = plVar29 + 4;
        uStack_12b8 = (undefined8 *)0x0;
        auStack_1318._0_8_ = puVar28;
        plStack_12c8 = plVar30;
        func_0x0ee25c30(plVar49,plVar32,&puStack_1258,1);
        auStack_14c8 = (undefined1  [16])0x0;
        if ((undefined8 *)auStack_1318._0_8_ == (undefined8 *)0x0) {
          puVar28 = (undefined8 *)0x0;
        }
        else {
          (**(code **)auStack_1318._0_8_)(auStack_1318,auStack_14c8);
          puVar28 = (undefined8 *)auStack_1318._0_8_;
        }
        auVar15._8_8_ = 0;
        auVar15._0_8_ = auStack_1318._8_8_;
        auStack_1318 = auVar15 << 0x40;
        *(undefined1 (*) [16])(plVar29 + 0x13) = (undefined1  [16])0x0;
        plVar29[0x12] = (long)&UNK_0f479cc0;
        *(undefined1 (*) [16])(plVar29 + 0x16) = (undefined1  [16])0x0;
        if (puVar28 == (undefined8 *)0x0) {
          puVar28 = (undefined8 *)0x0;
        }
        else {
          auStack_14c8._0_8_ = puVar28;
          (*(code *)*puVar28)(auStack_14c8,plVar29 + 0x16);
          puVar28 = (undefined8 *)auStack_14c8._0_8_;
        }
        auVar16._8_8_ = 0;
        auVar16._0_8_ = auStack_14c8._8_8_;
        auStack_14c8 = auVar16 << 0x40;
        plVar29[0x16] = (long)puVar28;
        *(undefined1 (*) [16])(plVar29 + 0x27) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(plVar29 + 0x29) = (undefined1  [16])0x0;
        plVar29[0x2b] = 0;
        *(undefined1 *)(plVar29 + 0x2b) = 1;
        *(undefined2 *)(plVar29 + 0x1e) = 200;
        *(undefined4 *)((long)plVar29 + 0xf2) = 0;
        *(undefined2 *)((long)plVar29 + 0xf6) = 0;
        plVar29[0x1f] = (long)&UNK_01287db4;
        plVar29[0x20] = 2;
        *(undefined1 (*) [16])(plVar29 + 0x21) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(plVar29 + 0x23) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(plVar29 + 0x25) = (undefined1  [16])0x0;
        *(undefined4 *)(plVar29 + 0x27) = 0x3f800000;
        *(undefined1 (*) [16])(plVar29 + 0x28) = (undefined1  [16])0x0;
        plVar29[0x2a] = 0;
        *(undefined1 *)(plVar29 + 0x2c) = 1;
        *(undefined2 *)(plVar29 + 0x2d) = 0;
        plVar29[4] = (long)&UNK_0f479bd8;
        plVar29[0x12] = (long)&UNK_0f479c28;
        *(undefined1 (*) [16])(plVar29 + 0x30) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(plVar29 + 0x2e) = (undefined1  [16])0x0;
        plVar29[0x32] = 0;
        *(undefined4 *)(plVar29 + 0x33) = 1;
        *(undefined1 (*) [16])(plVar29 + 0x38) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])((long)plVar29 + 0x1a9) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(plVar29 + 0x34) = (undefined1  [16])0x0;
        if ((puVar28 == (undefined8 *)0x0) &&
           (cVar21 = func_0x0eeddcf0(&UNK_0119c186,&UNK_012a37f1,0x216,&UNK_0145e738,&UNK_012cfb9c),
           cVar21 != '\0')) {
          _DAT_00000000 = 0xdeadc0de;
        }
        if (auStack_1318._0_8_ != 0) {
          (**(code **)(auStack_1318._0_8_ + 8))(auStack_1318);
        }
        plVar30 = plVar29 + 1;
        if (plVar29[0x14] == 0) {
          LOCK();
          plVar29[1] = plVar29[1] + 1;
          UNLOCK();
          LOCK();
          plVar29[2] = plVar29[2] + 1;
          UNLOCK();
          plVar29[0x13] = (long)(plVar29 + 0x13);
          plVar29[0x14] = (long)plVar29;
          LOCK();
          lVar31 = *plVar30;
          *plVar30 = *plVar30 + -1;
          UNLOCK();
joined_r0x0d5a54d7:
          if (lVar31 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
            func_0x0412c2d0(plVar29);
          }
        }
        else if (*(long *)(plVar29[0x14] + 8) == -1) {
          LOCK();
          plVar29[1] = plVar29[1] + 1;
          UNLOCK();
          LOCK();
          plVar29[2] = plVar29[2] + 1;
          UNLOCK();
          plVar29[0x13] = (long)(plVar29 + 0x13);
          plVar29[0x14] = (long)plVar29;
          func_0x0412c2d0();
          LOCK();
          lVar31 = *plVar30;
          *plVar30 = *plVar30 + -1;
          UNLOCK();
          goto joined_r0x0d5a54d7;
        }
        auStack_1318._8_8_ = plVar29;
        auStack_1318._0_8_ = plVar49;
        LOCK();
        plVar29[1] = plVar29[1] + 1;
        UNLOCK();
        (**(code **)(*plVar32 + 0x20))(plVar32,auStack_1318);
        uVar27 = auStack_1318._8_8_;
        if ((long *)auStack_1318._8_8_ != (long *)0x0) {
          LOCK();
          plVar54 = (long *)(auStack_1318._8_8_ + 8);
          lVar31 = *plVar54;
          *plVar54 = *plVar54 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*(long *)auStack_1318._8_8_ + 0x10))(auStack_1318._8_8_);
            func_0x0412c2d0(uVar27);
          }
        }
        if (plStack_13d0 != (long *)0x0) {
          plStack_1378 = plVar30;
          func_0x0d5a8440(plVar49,0,0,0);
          plVar54 = plVar29 + 0x2e;
          uVar19 = plStack_1238._0_1_;
          func_0x0412d680(plVar54);
          *(undefined1 *)(plVar29 + 0x37) = uVar19;
          if ((long *)uVar13 != (long *)0x0) {
            LOCK();
            *(long *)(uVar13 + 8) = *(long *)(uVar13 + 8) + 1;
            UNLOCK();
          }
          plVar29[0x38] = (long)plStack_13d0;
          plVar30 = (long *)plVar29[0x39];
          plVar29[0x39] = uVar13;
          if (plVar30 != (long *)0x0) {
            LOCK();
            plVar44 = plVar30 + 1;
            lVar31 = *plVar44;
            *plVar44 = *plVar44 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)(*plVar30 + 0x10))(plVar30);
              func_0x0412c2d0(plVar30);
            }
          }
          pthread_mutex_unlock(plVar54);
          if (plVar29[0x14] == 0) {
LAB_0d5a7366:
            func_0x04891290();
LAB_0d5a736b:
            func_0x04882e30();
LAB_0d5a7370:
            func_0x04882ee0();
LAB_0d5a7375:
            func_0x04882e30();
LAB_0d5a737a:
            uVar27 = func_0x04882ef0(&UNK_01306d2f);
            if ((byte)uStack_1488 == '\0') goto LAB_0d5a73f6;
            while ((char)uStack_11d8 != '\0') {
              func_0x0d5a7fc0(auStack_13c8);
              func_0x0eee2d70(uVar27);
LAB_0d5a73f6:
              func_0x048e6d60(auStack_14c8);
            }
            func_0x048e6d60(auStack_1218);
            func_0x0d5a7fc0(auStack_13c8);
            uVar27 = func_0x0eee2d70(uVar27);
            func_0x0488fce0(auStack_1318);
            LOCK();
            lVar31 = *plVar54;
            *plVar54 = *plVar54 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
              func_0x0412c2d0(plVar29);
            }
            func_0x0d5a8900(auStack_11b8._8_8_);
            func_0x0d5a7fc0(auStack_13c8);
            func_0x0d5a7fc0(auStack_1218);
            func_0x0d5a7b90(auStack_1368);
            uVar27 = func_0x0eee2d70(uVar27);
            func_0x0d5a7b90(auStack_1368);
            func_0x0eee2d70(uVar27);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar31 = plVar29[0x13];
          plVar30 = (long *)func_0x0412c300();
          if (plVar30 == (long *)0x0) goto LAB_0d5a7366;
          lVar33 = lVar31 + -0x78;
          if (lVar31 == 0) {
            lVar33 = 0;
          }
          LOCK();
          plVar30[2] = plVar30[2] + 1;
          UNLOCK();
          LOCK();
          plVar54 = plVar30 + 1;
          lVar31 = *plVar54;
          *plVar54 = *plVar54 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            func_0x0412c2d0(plVar30);
          }
          auStack_14c8._8_8_ = lVar33;
          auStack_14c8._0_8_ = &UNK_0f479d08;
          auStack_14b8._0_8_ = plVar30;
          plStack_14a8 = (long *)auStack_14c8;
          (**(code **)(*plStack_13d0 + 0x30))(plStack_13d0,auStack_14c8);
          plVar30 = plStack_1378;
          if (plStack_14a8 == (long *)auStack_14c8) {
            lVar31 = 0x20;
LAB_0d5a56bb:
            (**(code **)(*plStack_14a8 + lVar31))();
          }
          else {
            lVar31 = 0x28;
            if (plStack_14a8 != (long *)0x0) goto LAB_0d5a56bb;
          }
          if ((long *)uVar13 != (long *)0x0) {
            LOCK();
            plVar54 = (long *)(uVar13 + 8);
            lVar31 = *plVar54;
            *plVar54 = *plVar54 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)(*(long *)uVar13 + 0x10))(uVar13);
              func_0x0412c2d0(uVar13);
            }
          }
          plStack_14d8 = (long *)0x0;
        }
        if (uStack_12b8 != (undefined8 *)0x0) {
          (**(code **)((long)uStack_12b8 + 8))(&uStack_12b8);
        }
        if (plStack_14d8 != (long *)0x0) {
          LOCK();
          plVar54 = plStack_14d8 + 1;
          lVar31 = *plVar54;
          *plVar54 = *plVar54 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*plStack_14d8 + 0x10))(plStack_14d8);
            func_0x0412c2d0(plStack_14d8);
          }
        }
        auStack_1318._8_8_ = plVar29;
        LOCK();
        plVar29[1] = plVar29[1] + 1;
        UNLOCK();
        iVar24 = (int)plStack_12c8[0x25];
        if (iVar24 != 1) {
          if (iVar24 == 3) {
            *(undefined4 *)(plVar29 + 10) = 0;
          }
          else if (iVar24 == 2) {
            (**(code **)(*plVar49 + 0x10))(plVar49);
            goto LAB_0d5a57d0;
          }
          auStack_14c8._8_8_ = plVar29;
          auStack_14c8._0_8_ = plVar49;
          LOCK();
          plVar29[1] = plVar29[1] + 1;
          UNLOCK();
          (**(code **)(*plVar32 + 0x28))(plVar32,auStack_14c8,0);
          uVar27 = auStack_14c8._8_8_;
          if ((long *)auStack_14c8._8_8_ != (long *)0x0) {
            LOCK();
            plVar54 = (long *)(auStack_14c8._8_8_ + 8);
            lVar31 = *plVar54;
            *plVar54 = *plVar54 + -1;
            UNLOCK();
            if (lVar31 == 0) {
              (**(code **)(*(long *)auStack_14c8._8_8_ + 0x10))(auStack_14c8._8_8_);
              func_0x0412c2d0(uVar27);
            }
          }
        }
LAB_0d5a57d0:
        uVar27 = auStack_1318._8_8_;
        if ((long *)auStack_1318._8_8_ != (long *)0x0) {
          LOCK();
          plVar54 = (long *)(auStack_1318._8_8_ + 8);
          lVar31 = *plVar54;
          *plVar54 = *plVar54 + -1;
          UNLOCK();
          if (lVar31 == 0) {
            (**(code **)(*(long *)auStack_1318._8_8_ + 0x10))(auStack_1318._8_8_);
            func_0x0412c2d0(uVar27);
          }
        }
        LOCK();
        lVar31 = *plVar30;
        *plVar30 = *plVar30 + -1;
        UNLOCK();
        if (lVar31 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
          func_0x0412c2d0(plVar29);
          plVar30 = (long *)auStack_11b8._8_8_;
          if ((long *)auStack_11b8._8_8_ != (long *)0x0) goto LAB_0d5a5844;
LAB_0d5a585a:
          if ((auStack_1398[0] & 1) == 0) goto LAB_0d5a5870;
LAB_0d5a596f:
          lVar31 = lStack_1370;
          func_0x0412a280(uStack_1388,auStack_1398._0_8_ & 0xfffffffffffffffe);
          if ((bStack_13b0 & 1) == 0) goto LAB_0d5a587e;
LAB_0d5a5996:
          func_0x0412a280(puStack_13a0,CONCAT71(uStack_13af,bStack_13b0) & 0xfffffffffffffffe);
        }
        else {
          plVar30 = (long *)auStack_11b8._8_8_;
          if ((long *)auStack_11b8._8_8_ == (long *)0x0) goto LAB_0d5a585a;
LAB_0d5a5844:
          LOCK();
          plVar54 = plVar30 + 1;
          lVar31 = *plVar54;
          *plVar54 = *plVar54 + -1;
          UNLOCK();
          if (lVar31 != 0) goto LAB_0d5a585a;
          (**(code **)(*plVar30 + 0x10))(plVar30);
          func_0x0412c2d0(plVar30);
          if ((auStack_1398[0] & 1) != 0) goto LAB_0d5a596f;
LAB_0d5a5870:
          lVar31 = lStack_1370;
          if ((bStack_13b0 & 1) != 0) goto LAB_0d5a5996;
LAB_0d5a587e:
        }
        if ((auStack_13c8[0] & 1) != 0) {
          func_0x0412a280(puStack_13b8,auStack_13c8._0_8_ & 0xfffffffffffffffe);
        }
      }
      if (bStack_1320 == 1) {
        if ((bStack_1338 & 1) == 0) {
          if ((auStack_1350[0] & 1) != 0) goto LAB_0d5a5903;
LAB_0d5a58c3:
        }
        else {
          func_0x0412a280(uStack_1328,CONCAT71(uStack_1337,bStack_1338) & 0xfffffffffffffffe);
          if ((auStack_1350[0] & 1) == 0) goto LAB_0d5a58c3;
LAB_0d5a5903:
          func_0x0412a280(puStack_1340,auStack_1350._0_8_ & 0xfffffffffffffffe);
        }
        if ((auStack_1368[0] & 1) != 0) {
          func_0x0412a280(puStack_1358,auStack_1368._0_8_ & 0xfffffffffffffffe);
        }
      }
      else {
        func_0x048e6d60(auStack_1368);
      }
      uStack_12c0 = 0;
      uVar23 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))
                         (*(long **)(param_1 + 0xb8),auStack_1038,0x1000,&uStack_12c0);
    } while (uVar23 != 0);
  }
  lVar31 = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0xa0) = lVar31;
  while (lVar31 != param_1 + 0x88) {
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar31 + 8);
    (**(code **)(lVar31 + 0x10))(lVar31 + 0x10,param_1);
    lVar31 = *(long *)(param_1 + 0xa0);
  }
  return;
code_r0x0d5a4a91:
  plVar54 = (long *)((long)piVar26 + 1);
  uVar39 = (long)piVar1 - (long)plVar54;
  if ((long)uVar39 < 4) goto LAB_0d5a4ac0;
  goto LAB_0d5a4a70;
}



/* ---- referenced strings ----
 * 0x11cbdec  request line missing path/version separator
 * 0x11cbdfc  sing path/version separator
 * 0x11cbe07  ersion separator
 * 0x138918b  request line missing method/path separator
 * 0x138919b  sing method/path separator
 * 0x13891a5  d/path separator
 * 0x14dc348  header block not yet complete
 * 0x14dc355  not yet complete
 */
